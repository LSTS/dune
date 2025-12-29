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

// Local headers.
#include <DUNE/Hardware/BasicI2CDriver.hpp>

namespace DUNE
{
  namespace Hardware
  {
    BasicI2CDriver::BasicI2CDriver(const std::string& name, DUNE::Tasks::Context& ctx):
      DUNE::Tasks::Periodic(name, ctx),
      m_i2c_handle_eid(IMC::AddressResolver::invalid()),
      m_last_rpl_id(UINT32_MAX),
      m_last_rpl_success(false)
    {
      paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                  Tasks::Parameter::VISIBILITY_USER);

      param("I2C Handle - Entity Label", m_i2c_args.i2c_handle_elabel)
      .editable("false")
      .description("Entity Label of I2C handle.");

      param("Device Address", m_i2c_args.address)
      .minimumValue("0")
      .maximumValue("127")
      .defaultValue("128")
      .editable("false")
      .description("Entity Label of I2C handle.");

      bind<IMC::I2CAction>(this);
    }

    void
    BasicI2CDriver::onEntityResolution(void)
    {
      m_request.address = m_i2c_args.address;
      m_request.setSource(getSystemId());
      m_request.setSourceEntity(getEntityId());
      m_request.setDestination(getSystemId());
      
      try
      {
        m_i2c_handle_eid = resolveEntity(m_i2c_args.i2c_handle_elabel);
        m_request.setDestinationEntity(m_i2c_handle_eid);
      }
      catch(const std::exception& e)
      {
        err("failed to resolve I2C handle : %s", e.what());
        requestDeactivation();
      }
    }

    bool
    BasicI2CDriver::filterI2CAction(const IMC::I2CAction& msg)
    {
      return (isActive() || isActivating() || isDeactivating()) &&
             msg.getSource() == getSystemId() && msg.getSourceEntity() == m_i2c_handle_eid &&
             msg.getDestination() == getSystemId() && msg.getDestinationEntity() == getEntityId();
    }

    void
    BasicI2CDriver::consume(const IMC::I2CAction* msg)
    {
      if (!filterI2CAction(*msg))
        return;

      m_last_rpl_id = msg->id;
      m_last_rpl_success = msg->status == IMC::I2CAction::STAT_SUCCESS;
      onI2CAction(*msg);
    }

    bool
    BasicI2CDriver::read(const uint8_t address, const uint16_t size, const bool wait, const uint8_t timeout)
    {
      m_request.op = IMC::I2CAction::OP_READ;
      m_request.length = size;
      m_request.data.assign(1, static_cast<char>(address));
      dispatch(m_request, DUNE::Tasks::DF_KEEP_SRC_EID);

      if (!wait)
        return true;

      return waitForReply(m_request.id, timeout);
    }

    bool
    BasicI2CDriver::write(const uint8_t address, const uint8_t data, const bool wait, const uint8_t timeout)
    {
      m_request.op = IMC::I2CAction::OP_WRITE;
      m_request.data.clear();
      m_request.data.reserve(2);
      m_request.data.push_back(static_cast<char>(address));
      m_request.data.push_back(data);
      m_request.length = 1;
      dispatch(m_request, DUNE::Tasks::DF_KEEP_SRC_EID);

      if (!wait)
        return true;

      return waitForReply(m_request.id, timeout);
    }

    bool
    BasicI2CDriver::write(const uint8_t address, const std::vector<uint8_t>& data, const bool wait, const uint8_t timeout)
    {
      m_request.op = IMC::I2CAction::OP_WRITE;
      m_request.data.clear();
      m_request.data.reserve(1 + data.size());
      m_request.data.push_back(static_cast<char>(address));
      m_request.data.insert(m_request.data.end(), data.begin(), data.end());
      m_request.length = data.size();
      dispatch(m_request, DUNE::Tasks::DF_KEEP_SRC_EID);

      if (!wait)
        return true;

      return waitForReply(m_request.id, timeout);
    }

    bool
    BasicI2CDriver::waitForReply(const uint32_t id, const uint8_t timeout)
    {
      m_rpl_timeout.setTop(timeout);
      while (!stopping() && !m_rpl_timeout.overflow())
      {
        waitForMessages(m_rpl_timeout.getRemaining());
        if (m_last_rpl_id == id && m_last_rpl_success)
          return true;
      }

      return false;
    }

    void
    BasicI2CDriver::task(void)
    {
      if (!isActive())
        return;

      step();
    }
  }
}
