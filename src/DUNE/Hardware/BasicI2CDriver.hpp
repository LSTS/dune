//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bernardo Gabriel                                                 *
//***************************************************************************

#ifndef DUNE_HARDWARE_BASIC_I2C_DRIVER_HPP_INCLUDED_
#define DUNE_HARDWARE_BASIC_I2C_DRIVER_HPP_INCLUDED_

// Local headers.
#include <DUNE/Tasks/Periodic.hpp>

namespace DUNE
{
  namespace Hardware
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM BasicI2CDriver;

    struct BasicI2CArguments
    {
      //! Entity label of I2C handle.
      std::string i2c_handle_elabel;
      //! Device address.
      uint16_t address;
    };
    
    //! Default timeout to wait for a reply.
    constexpr uint8_t c_default_timeout = 5;

    //! Periodic task.
    class BasicI2CDriver: public DUNE::Tasks::Periodic
    {
    public:
      //! Constructor.
      BasicI2CDriver(const std::string& name, DUNE::Tasks::Context& ctx);

      //! Destructor.
      virtual
      ~BasicI2CDriver(void)
      { }

      void
      onEntityResolution(void) override;

      void
      consume(const IMC::I2CAction* msg);

      void
      task(void) override;

    protected:
      bool
      read(const uint8_t address, const uint16_t size = 1, const bool wait = false, const uint8_t timeout = c_default_timeout);

      bool
      write(const uint8_t address, const uint8_t data, const bool wait = false, const uint8_t timeout = c_default_timeout);

      bool
      write(const uint8_t address, const std::vector<uint8_t>& data, const bool wait = false, const uint8_t timeout = c_default_timeout);

    private:
      virtual bool
      filterI2CAction(const IMC::I2CAction& msg);

      virtual void
      onI2CAction(const IMC::I2CAction& msg) = 0;

      bool
      waitForReply(const uint32_t id, const uint8_t timeout);

      virtual void
      step(void) = 0;

      //! Arguments.
      BasicI2CArguments m_i2c_args;
      //! Request.
      IMC::I2CAction m_request;
      //! Entity id of I2C handle.
      unsigned m_i2c_handle_eid;
      //! Wait for reply timeout.
      Time::Counter<uint8_t> m_rpl_timeout;
      //! Last reply id.
      uint32_t m_last_rpl_id;
      //! Last reply success.
      bool m_last_rpl_success;
    };
  }
}

#endif
