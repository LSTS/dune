//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Eduardo Marques                                                  *
//***************************************************************************
// $Id:: SimpleTransport.hpp 12667 2013-01-22 02:44:42Z rasm              $:*
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
