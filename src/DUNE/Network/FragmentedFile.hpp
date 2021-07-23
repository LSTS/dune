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

#ifndef DUNE_NETWORK_FRAGMENTED_FILE_HPP_INCLUDED_
#define DUNE_NETWORK_FRAGMENTED_FILE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Network/AbstractFragmentedData.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Compression/FileOutput.hpp>

namespace DUNE
{
  namespace Network
  {
  class FragmentedFile: public AbstractFragmentedData<std::ofstream*,IMC::FileFragment*>
    {
      public:
        FragmentedFile(Tasks::Task* parent, FileSystem::Path& dir);

      virtual double
      getAge();

      virtual int
      getFragmentsMissing();

      virtual void
      setFragment(IMC::FileFragment* part);

      virtual std::ofstream*
      getData();

      std::ofstream*
      getOutFile();

      void clear();

      inline
      std::string
      getFileName()
      {
        return m_dir.str();
      }

    private:
      std::string m_frag_id;
      FileSystem::Path m_dir;
      //! ordered list of fragments to write in the right order to disk
      std::map<uint16_t,IMC::FileFragment*> m_fragments;
      unsigned int m_saved_fragments;

      uint16_t nextFragToSave() const;
      void writeToDisk(IMC::FileFragment *pFragment);
  };
  }
}

#endif

