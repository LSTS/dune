//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_GPS_READER_HPP_INCLUDED_
#define SENSORS_GPS_READER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
  namespace GPS
  {
    using DUNE_NAMESPACES;

    //! Read buffer size.
    static const size_t c_read_buffer_size = 4096;
    //! Line termination character.
    static const char c_line_term = '\n';

    class Reader: public Concurrency::Thread
    {
    public:
      //! Constructor.
      //! @param[in] task parent task.
      //! @param[in] handle I/O handle.
      Reader(Tasks::Task* task, IO::Handle* handle):
        m_task(task),
        m_handle(handle)
      {
        m_buffer.resize(c_read_buffer_size);
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! I/O handle.
      IO::Handle* m_handle;
      //! Internal read buffer.
      std::vector<char> m_buffer;
      //! Current line.
      std::string m_line;

      void
      dispatch(IMC::Message& msg)
      {
        msg.setDestination(m_task->getSystemId());
        msg.setDestinationEntity(m_task->getEntityId());
        m_task->dispatch(msg, DF_LOOP_BACK);
      }

      void
      read(void)
      {
        if (!Poll::poll(*m_handle, 1.0))
          return;

        size_t rv = m_handle->read(&m_buffer[0], m_buffer.size());
        if (rv == 0)
          throw std::runtime_error(DTR("invalid read size"));

        for (size_t i = 0; i < rv; ++i)
        {
          m_line.push_back(m_buffer[i]);
          if (m_buffer[i] == c_line_term)
          {
            IMC::DevDataText line;
            line.value = m_line;
            dispatch(line);
            m_line.clear();
          }
        }
      }

      void
      run(void)
      {
        while (!isStopping())
        {
          try
          {
            read();
          }
          catch (std::runtime_error& e)
          {
            IMC::IoEvent evt;
            evt.type = IMC::IoEvent::IOV_TYPE_INPUT_ERROR;
            evt.error = e.what();
            dispatch(evt);
            break;
          }
        }
      }
    };
  }
}

#endif
