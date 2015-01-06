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
// Author: Eduardo Marques                                                  *
//***************************************************************************

#ifndef DUNE_TASKS_SIMPLE_TRANSPORT_HPP_INCLUDED_
#define DUNE_TASKS_SIMPLE_TRANSPORT_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Utils/ByteBuffer.hpp>
#include <DUNE/IMC/Parser.hpp>
#include <DUNE/Tasks/Task.hpp>
#include <DUNE/Tasks/RateLimiters.hpp>

namespace DUNE
{
  namespace Tasks
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM SimpleTransport;

    class SimpleTransport: public DUNE::Tasks::Task
    {
    public:
      SimpleTransport(const std::string& name, Tasks::Context& ctx);

      virtual
      ~SimpleTransport(void);

      void
      onMain(void);

      void
      consume(const IMC::Message* msg);

      virtual void
      onDataTransmission(const uint8_t* p, unsigned int n) = 0;

      virtual void
      onDataReception(uint8_t* p, unsigned int n, double timeout) = 0;

      void
      handleData(IMC::Parser& parser, const uint8_t* p, unsigned int n);

    private:
      struct GArguments
      {
        std::vector<std::string> transports;
        std::vector<std::string> rlim;
        bool trace_in;
        bool trace_out;
      };
      GArguments m_gargs;
      Utils::ByteBuffer m_buf;
      RateLimiters m_rl;
    };
  }
}

#endif
