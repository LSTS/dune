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
// Author: Jose Pinto                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/Network/FragmentedFile.hpp>

namespace DUNE
{
  namespace Network
  {
      FragmentedFile::FragmentedFile(void)
    {
      m_parent = NULL;
      m_src = m_creation_time = m_num_frags = -1;
      m_name = nullptr;
    }

    void
    FragmentedFile::setFragment(IMC::FileFragment* part)
    {
      // is this the first fragment?
      if (m_num_frags < 0)
      {
        m_num_frags = part->num_frags;
        m_name = part->name;
        m_src = part->getSource();
        m_creation_time = Time::Clock::get();
      }

      // Check if this is a valid fragment
      if (std::strcmp(part->name.c_str(),m_name.c_str()) != 0 || part->getSource() != m_src ||
          part->frag_number >= m_num_frags)
      {
        if (m_parent == NULL)
          DUNE_ERR("FragmentedFile", "Invalid fragment received and it won't be processed.");
        else
          m_parent->err(DTR("Invalid fragment received and it won't be processed."));

      }

      m_fragments.insert(std::make_pair(part->frag_number,*part));

    }

    int
    FragmentedFile::getFragmentsMissing(void)
    {
      return m_num_frags - m_fragments.size();
    }

    Compression::FileOutput*
    FragmentedFile::getData()
    {
      // Data is complete. Let's reassemble and return it.
      if (isCompleted())
      {
        int i;
        int total_length = 0;
        // concatenate all parts into a single array
        DUNE:FileSystem::Path output_file(m_fragments[0].name);
        DUNE::FileSystem::Path log = getPath() / output_file;
        DUNE::Compression::FileOutput* fo = new Compression::FileOutput(log.c_str(), Compression::METHOD_GZIP);
        for (i = 0; i < m_num_frags; i++)
        {
            total_length += m_fragments[i].data.size();
            fo->write(m_fragments[i].data.data(),strlen(m_fragments[i].data.data()));
        }
        fo->flush();
        return fo;
      }
      else
      {
        return nullptr;
      }
    }

    double
    FragmentedFile::getAge(void)
    {
      if (m_creation_time < 0)
        return 0;

      return Time::Clock::get() - m_creation_time;
    }

      FragmentedFile::~FragmentedFile()
    {
      m_fragments.clear();
    }
  }
}
