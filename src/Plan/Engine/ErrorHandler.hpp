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

#ifndef DUNE_PLAN_ENGINE_ERROR_HANDLER_HPP_INCLUDED_
#define DUNE_PLAN_ENGINE_ERROR_HANDLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Plan
{
  namespace Engine
  {
    using DUNE_NAMESPACES;

    //! Error handling class
    class ErrorHandler
    {
    public:
      //! Default constructor.
      ErrorHandler(void)
      { }

      //! Check if there are any errors
      //! @return true if there some
      bool
      isEmpty(void)
      {
        return m_errors.empty();
      }

      //! Clear error list
      void
      clear(void)
      {
        m_errors.clear();
      }

      //! Push an activation error
      //! @param[in] id name of the entity that failed activation
      //! @param[in] msg string message of the error
      void
      pushActivationError(const std::string& id, const std::string& msg)
      {
        Error e;
        e.type = ET_ACTIVATION;
        e.msg = String::str("%s: %s", id.c_str(), msg.c_str());
        e.time = Clock::getSinceEpoch();
        m_errors.push_back(e);
      }

      //! Push vehicle errors from VehicleState message
      //! @param[in] vs pointer to VehicleState message
      void
      pushVehicleError(const IMC::VehicleState* vs)
      {
        switch (vs->op_mode)
        {
          case IMC::VehicleState::VS_SERVICE:
            onVehicleService(vs);
            break;
          case IMC::VehicleState::VS_ERROR:
          case IMC::VehicleState::VS_BOOT:
            onVehicleError(vs);
            break;
        }
      }

      //! Get the oldest error message
      //! @return error string message
      const std::string
      getOldest(void)
      {
        if (!m_errors.size())
          return "";

        Error* e = &m_errors.front();

        switch (e->type)
        {
          case ET_ACTIVATION:
            return DTR("failed to activate ") + e->msg;
          case ET_ISOLATED:
            return e->msg;
          case ET_ENTITY:
            return DTR("entity errors: ") + e->msg;
          case ET_UNEXPECTED_SERVICE:
            return DTR("unexpected service mode: ") + e->msg;
          default:
            return "";
        }
      }

    private:
      //! Error Type
      enum ErrorType
      {
        //! Entity error
        ET_ENTITY,
        //! Isolated error
        ET_ISOLATED,
        //! Activation error
        ET_ACTIVATION,
        //! Unexpected service mode error
        ET_UNEXPECTED_SERVICE
      };

      struct Error
      {
        //! Error type
        ErrorType type;
        //! Error message
        std::string msg;
        //! Error time
        double time;
      };

      void
      pushError(ErrorType type, const std::string& msg, double time)
      {
        Error e;
        e.type = type;
        e.msg = msg;
        e.time = time;
        m_errors.push_back(e);
      }

      void
      onVehicleService(const IMC::VehicleState* vs)
      {
        pushError(ET_UNEXPECTED_SERVICE, vs->last_error, vs->last_error_time);
      }

      void
      onVehicleError(const IMC::VehicleState* vs)
      {
        if (vs->last_error_time < 0)
          pushError(ET_ENTITY, vs->error_ents, vs->getTimeStamp());
        else
          pushError(ET_ISOLATED, vs->last_error, vs->getTimeStamp());
      }

      //! Vector of errors
      std::vector<Error> m_errors;
    };
  }
}

#endif
