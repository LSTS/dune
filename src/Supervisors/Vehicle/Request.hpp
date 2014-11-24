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
      RT_START
    };

    struct Request
    {
      //! Request Type
      int m_type;
      //! Pointer to IMC Message
      IMC::Message* m_msg;
      //! Issue time
      double m_issue_time;

      Request(int type, const IMC::Message* ptr)
      {
        init(type);
        m_msg = ptr->clone();
      }

      Request(int type)
      {
        init(type);
        m_msg = new IMC::StopManeuver;
      }

      void
      init(int type)
      {
        m_type = type;
        m_issue_time = -1.0;
      }

      ~Request(void)
      {
        delete m_msg;
      }

      bool
      isStop(void)
      {
        return (m_type == RT_STOP);
      }

      bool
      isStart(void)
      {
        return (m_type == RT_START);
      }

      double
      getIssueTime(void)
      {
        return m_issue_time;
      }

      IMC::Message*
      getMessage(void)
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
