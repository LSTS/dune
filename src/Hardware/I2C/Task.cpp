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

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

namespace Hardware
{
  //! @author Bernardo Gabriel
  namespace I2C
  {
    //! Task arguments
    struct Arguments
    {
      //! IO device (URI).
      std::string io_dev;
    };

    struct Task: public Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! I2C handle.
      DUNE::Hardware::I2C* m_i2c;
      //! Current address.
      uint16_t m_address;
      //! Visible addresses
      std::unordered_set<uint8_t> m_vis_addrs;
      //! Reply.
      IMC::I2CAction m_reply;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_i2c(nullptr),
        m_address(UINT16_MAX)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .editable("false")
        .description("IO device URI in the form \"i2c://DEVICE\".");

        bind<IMC::I2CAction>(this);
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_i2c);
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          openI2C(m_args.io_dev);
          scanAddresses();
        }
        catch(const std::exception& e)
        {
          m_i2c = nullptr;
          m_address = UINT16_MAX;
          err("failed to initialize I2C device : %s", e.what());
          requestDeactivation();
        }
      }

      void
      onEntityResolution(void)
      {
        m_reply.setSource(getSystemId());
        m_reply.setSourceEntity(getEntityId());
        m_reply.setDestination(getSystemId());
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      openI2C(const std::string& device)
      {
        char i2c[128] = {0};
        trace("[I2C] >> attempting URI: %s", device.c_str());
        if (std::sscanf(device.c_str(), "i2c://%s", i2c) != 1)
          throw std::runtime_error(String::str("invalid URI : %s", device.c_str()));

        m_i2c = new DUNE::Hardware::I2C(i2c);
      }

      void
      scanAddresses(void)
      {
        m_i2c->scan(m_vis_addrs);
      }

      void
      setAddress(const uint16_t address)
      {
        if (address == m_address)
          return;

        m_i2c->connect(address);
        m_address = address;
      }

      void
      handleRead(const IMC::I2CAction& msg)
      {
        if (msg.data.size() != 1)
          return;

        try
        {
          setAddress(msg.address);
          m_i2c->write((const uint8_t*) &msg.data[0], 1);
          std::vector<uint8_t> buffer(msg.length);
          m_i2c->read(&buffer[0], msg.length);
          reply(IMC::I2CAction::STAT_SUCCESS, msg, (char*) &buffer[0], buffer.size());
        }
        catch(const std::exception& e)
        {
          err("error reading : %s", e.what());
          reply(IMC::I2CAction::STAT_TEMPORARY_ERROR, msg);
        }
      }

      void
      handleWrite(const IMC::I2CAction& msg)
      {
        if (msg.data.size() != (size_t) (msg.length + 1))
          return;

        try
        {
          setAddress(msg.address);
          m_i2c->write((const uint8_t*) &msg.data[0], msg.data.size());
          reply(IMC::I2CAction::STAT_SUCCESS, msg);
        }
        catch(const std::exception& e)
        {
          err("error writing : %s", e.what());
          reply(IMC::I2CAction::STAT_TEMPORARY_ERROR, msg);
        }
      }

      void
      consume(const IMC::I2CAction* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (!isActive())
        {
          war("received I2CAction, but task is deactivated");
          reply(IMC::I2CAction::STAT_TEMPORARY_ERROR, *msg);
          return;
        }

        if (m_i2c == nullptr)
        {
          err("received I2CAction, but I2C handle is invalid");
          reply(IMC::I2CAction::STAT_PERMANENT_ERROR, *msg);
          return;
        }

        if (m_vis_addrs.find(msg->address) == m_vis_addrs.end())
        {
          war("received I2CAction, but 0x%02x is not visible", msg->address);
          reply(IMC::I2CAction::STAT_INV_ADDR, *msg);
          return;
        }

        switch (msg->op)
        {
        case IMC::I2CAction::OP_READ:
          handleRead(*msg);
          break;

        case IMC::I2CAction::OP_WRITE:
          handleWrite(*msg);
          break;
        
        default:
          break;
        }
      }

      void
      reply(IMC::I2CAction::StatusEnum status, const IMC::I2CAction& msg, const char* data = {}, const size_t size = 0)
      {
        m_reply.id = msg.id;
        m_reply.setDestinationEntity(msg.getSourceEntity());
        m_reply.address = msg.address;
        m_reply.op = msg.op;
        m_reply.status = status;

        switch (status)
        {
        case IMC::I2CAction::STAT_SUCCESS:
          if (size > 0)
            m_reply.data.assign(data, data + size);

          break;

        default:
          return;
        }

        dispatch(m_reply, DF_KEEP_SRC_EID);
      }

      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
