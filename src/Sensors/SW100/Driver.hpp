//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_SW100_DRIVER_HPP_INCLUDED_
#define SENSORS_SW100_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace SW100
  {
    class Driver
    {
    public:
      //! Constructor.
      Driver(DUNE::Tasks::Task* task, DUNE::Hardware::SerialPort& stream):
        m_task(task),
        m_id(-1),
        m_stream(stream),
        m_sentence_idx(0)
      { }

      bool
      setup(void);

      bool
      read(void);

      inline const double*
      getData(void)
      {
        return m_data;
      }

      inline int
      getId(void)
      {
        return m_id;
      }

    private:
      DUNE::Tasks::Task* m_task;
      int m_id;
      char m_expr[64];
      DUNE::Hardware::SerialPort& m_stream;
      double m_data[4];
      char m_sentence[64];
      int m_sentence_idx;
    };
  }
}

#endif
