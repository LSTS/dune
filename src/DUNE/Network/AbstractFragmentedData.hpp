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

#ifndef DUNE_NETWORK_FRAGMENTEDDATA_HPP_INCLUDED_
#define DUNE_NETWORK_FRAGMENTEDDATA_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Tasks.hpp>


namespace DUNE
{
  namespace Network
  {
      template <typename T,typename A>
      class AbstractFragmentedData
      {
    public:
      AbstractFragmentedData(Tasks::Task* parent) {
        m_parent = parent;
        m_src = m_creation_time = m_num_frags = -1;
      }

        virtual double
        getAge() = 0;

        virtual int
        getFragmentsMissing() = 0;

        virtual bool
        isCompleted()
        {
          return getFragmentsMissing() == 0;
        }

        virtual void
        setFragment(A part) {};

        virtual T
        getData() {};

    protected:
        DUNE::Tasks::Task* m_parent;
        int m_src;
        double m_creation_time;
        int m_num_frags;
    };
  }
}
#endif
