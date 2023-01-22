//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Ricardo Bencatel                                                 *
//***************************************************************************

#ifndef DUNE_CONTROL_PROXY_PATH_CONTROLLER_HPP_INCLUDED_
#define DUNE_CONTROL_PROXY_PATH_CONTROLLER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>
#include <string>

// DUNE headers.
#include <DUNE/IMC.hpp>
#include <DUNE/Control/PathController.hpp>

namespace DUNE
{
  namespace Control
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM ProxyPathController;

    //! ProxyPathController
    //! PathController with the capability to control the path
    //! of a system with an id different from the vehicle's id
    class ProxyPathController: public Control::PathController
    {
    public:
      //! Constructor.
      ProxyPathController(const std::string& name, Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~ProxyPathController(void);

      //! Entity reservation callback.
      void
      onEntityResolution(void);

      //! Handler for EstimatedState source id filter. This is called when
      //! an EstimatedState is received. By default it only passes
      //! EstimatedState messages from the system itself.
      //! @param[in] es EstimatedState message.
      //! @return true if the message is NOT allowed to pass.
      virtual bool
      sourceFilter(const IMC::EstimatedState* es);

    private:
      //! EstimatedState filter.
      Tasks::SourceFilter* m_state_filter;
      //! EstimatedState filter input.
      std::vector<std::string> m_state_src;
    };
  }
}

#endif
