//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef SUPERVISORS_VEHICLE_REQUEST_HPP_INCLUDED_
#define SUPERVISORS_VEHICLE_REQUEST_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace Vehicle
  {
    using DUNE_NAMESPACES;

    enum RequestType
    {
      //! Stop maneuver type
      RT_STOP,
      //! Start maneuver type
      RT_START,
      //! Pause maneuver type.
      RT_PAUSE,
      //! Number of request types.
      RT_NTYPES
    };

    class Request
    {
    private:
      //! Request Type
      RequestType m_type;
      //! Pointer to IMC Message
      IMC::Message* m_msg;
      //! Issue time
      double m_issue_time;

    public:
      Request(const IMC::Message* m)
      : m_type(RT_START), m_msg(m->clone()), m_issue_time(-1)
      {
      }

      Request(RequestType type) : m_type(type), m_msg(nullptr), m_issue_time(-1)
      {
        switch (m_type)
        {
          case RT_STOP:
            m_msg = new IMC::StopManeuver;
            break;
          case RT_PAUSE:
            m_msg = new IMC::PauseManeuver;
            break;
          case RT_START:
            throw std::runtime_error(
            "Cannot create start request without a maneuver.");
            break;
          default:
            throw std::runtime_error("Invalid request type.");
            break;
        }
      }

      ~Request(void)
      {
        delete m_msg;
      }

      RequestType
      getType(void) const
      {
        return m_type;
      }

      char const*
      getTypeDescription(void) const
      {
        switch (m_type)
        {
        case RT_STOP:
          return "stop";
        case RT_START:
          return "start";
        case RT_PAUSE:
          return "pause";
        default:
          return "(invalid)";
        }
      }

      bool
      isStop(void) const
      {
        return (m_type == RT_STOP);
      }

      bool
      isStart(void) const
      {
        return (m_type == RT_START);
      }

      bool
      isPause(void) const
      {
        return (m_type == RT_PAUSE);
      }

      double
      getIssueTime(void) const
      {
        return m_issue_time;
      }

      IMC::Message*
      getMessage(void) const
      {
        return m_msg;
      }

      void
      issue(void)
      {
        m_issue_time = Time::Clock::get();
      }
    };
  }
}

#endif
