//***************************************************************************
// Copyright 2007-2021 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Keila Lima                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Network/FragmentedFile.hpp>
#include <utility>

namespace DUNE
{
  namespace Network
  {
      FragmentedFile::FragmentedFile(Tasks::Task* parent, FileSystem::Path& log_dir,std::string id):
          AbstractFragmentedData<std::ofstream*, IMC::FileFragment *>(parent)
    {
      m_frag_id = id;
      m_saved_fragments = 0;
      m_dir = log_dir;
    }

    void
    FragmentedFile::setFragment(IMC::FileFragment* part)
    {
      // is this the first fragment?
      if (m_num_frags < 0)
      {
        m_frag_id = part->id;
        m_num_frags = part->num_frags;
        m_src = part->getSource();
        m_creation_time = Time::Clock::get();
      }

      // Check if this is a valid fragment
      if (std::strcmp(part->id.c_str(), m_frag_id.c_str()) != 0 || part->getSource() != m_src ||
          part->frag_number >= m_num_frags)
      {
        if (m_parent == nullptr)
          m_parent->err("FragmentedFile", "Invalid fragment received and it won't be processed.");
      }

      if(part->frag_number == nextFragToSave()){
          writeToDisk(part);
      }
      else if(part->frag_number > nextFragToSave()) {
        m_fragments.insert(std::pair<uint16_t,IMC::FileFragment*>(part->frag_number,part));
      }
    }

    int
    FragmentedFile::getFragmentsMissing()
    {
        if(m_num_frags < 0)
          return m_num_frags;
      return m_num_frags - m_saved_fragments - m_fragments.size();
    }

    std::ofstream*
    FragmentedFile::getData()
    {
      // Data is complete. Let's reassemble and return it.
      if (isCompleted())
      {
        if(m_dir.exists() && m_dir.isFile()) {
          return getOutFile();
        }
      }
      return nullptr;
    }

      std::ofstream*
      FragmentedFile::getOutFile()
      {
        std::ofstream *fo = new std::ofstream(m_dir.c_str());
        return fo;
      }

    double
    FragmentedFile::getAge()
    {
      if (m_creation_time < 0)
        return 0;

      return Time::Clock::get() - m_creation_time;
    }

    void
    FragmentedFile::clear()
    {
      if(!m_fragments.empty()){
        auto it = m_fragments.begin();
        while(it != m_fragments.end()) {
          it->second->data.clear();
          it->second->clear();
          m_fragments.erase(it);
          ++it;
        }
        m_fragments.clear();
      }
    }

      uint16_t
      FragmentedFile::nextFragToSave() const {
        return (m_saved_fragments+1);
      }

      void
      FragmentedFile::writeToDisk(IMC::FileFragment *pFragment) {
        std::ofstream outfile = std::ofstream(getFileName(), std::ofstream::app | std::ios::binary);

        if(outfile.is_open()) {
          size_t size = pFragment->data.size();  //  / sizeof(char)) = 1 byte
          outfile.write(pFragment->data.data(),size);
          if(!outfile.bad()) {
            m_saved_fragments++;
            m_parent->debug(DTR("Writing %lu bytes in file fragment %d/%d to disk in file: %s"),size,pFragment->frag_number,
                            pFragment->num_frags,getFileName().c_str());
          }
          auto it = m_fragments.find(nextFragToSave());
          //! Save previously received chunks
          while(!m_fragments.empty() && it != m_fragments.end()) {
            m_parent->debug(DTR("Writing saved chunks file fragment %d/%d to disk in file: %s - %lu bytes"),pFragment->frag_number,
                            pFragment->num_frags,getFileName().c_str(), size);
            size = it->second->data.size();
            outfile.write(it->second->data.data(),size);
            if(!outfile.bad()) {
              m_saved_fragments++;
              it->second->data.clear();
              m_fragments.erase(it);
              it = m_fragments.find(nextFragToSave());
            }
            else {
              m_parent->war(DTR("Error writing file chunk %d of %d into the file %s"),it->second->frag_number,
                            it->second->num_frags,getFileName().c_str());
              break;
            }
          }
          outfile.flush();
          outfile.close();
        }
      }
  }
}
