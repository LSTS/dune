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
// Author: José Braga                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Power
{
  namespace PSIMAR
  {
    using DUNE_NAMESPACES;

    // PSU packet state identifier.
    static const unsigned c_pkt_state = 1;
    // PSU packet power identifier.
    static const unsigned c_pkt_power = 2;

    //! %Task arguments.
    struct Arguments
    {
      //! Power channel.
      std::string pwr_chn;
      //! ESCC - PSU.
      std::string psu_dev;
    };

    struct Task: public Tasks::Task
    {
      //! PSU UART.
      Hardware::ESCC* m_psu_escc;
      //! PSU handle.
      UCTK::Interface* m_psu_ctl;
      //! Current power channel state.
      IMC::PowerChannelState m_power_state;
      //! Get state.
      bool m_get_state;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_psu_escc(NULL),
        m_psu_ctl(NULL)
      {
        param("Power Channel", m_args.pwr_chn)
        .defaultValue("Private (IMU)")
        .description("Device name to be activated");

        param("ESCC - PSU Device", m_args.psu_dev)
        .defaultValue("/dev/escc1")
        .description("ESCC device where PSU is connected");

        m_get_state = false;

        bind<IMC::PowerChannelControl>(this);
        bind<IMC::QueryPowerChannelState>(this);
      }

      void
      onUpdateParameters(void)
      {
        m_power_state.name = m_args.pwr_chn;
      }

      void
      onResourceAcquisition(void)
      {
        try
        {
          // Open PSU.
          m_psu_escc = new Hardware::ESCC(m_args.psu_dev);
          m_psu_ctl = new UCTK::Interface(m_psu_escc);
          UCTK::FirmwareInfo info = m_psu_ctl->getFirmwareInfo();
          if (info.isDevelopment())
            war(DTR("device is using unstable firmware"));
          else
            inf(DTR("firmware version %u.%u.%u"), info.major,
                info.minor, info.patch);

          if ((info.major > 1) || (info.minor > 0))
            m_get_state = true;

          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 30);
        }
      }

      void
      onResourceRelease(void)
      {
        if (m_psu_ctl != NULL)
        {
          setPower(false);
          delete m_psu_ctl;
          m_psu_ctl = NULL;
        }

        Memory::clear(m_psu_escc);
      }

      bool
      setPower(bool on)
      {
        uint8_t value = on ? 1 : 0;
        UCTK::Frame frame;
        frame.setId(c_pkt_power);
        frame.setPayloadSize(1);
        frame.set(value, 0);
        if (m_psu_ctl->sendFrame(frame, 2.0))
        {
          m_power_state.state = on ? IMC::PowerChannelState::PCS_ON : IMC::PowerChannelState::PCS_OFF;
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          return true;
        }

        setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
        return false;
      }

      void
      consume(const IMC::PowerChannelControl* msg)
      {
        if (msg->name == m_args.pwr_chn)
        {
          bool rv = false;

          if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_ON)
            rv = setPower(true);
          else if (msg->op == IMC::PowerChannelControl::PCC_OP_TURN_OFF)
            rv = setPower(false);

          if (rv)
            dispatchReply(*msg, m_power_state);
        }
      }

      //! Dispatch raw board state
      //! @return true if successfully dispatched state
      bool
      dispatchState(void)
      {
        UCTK::Frame frame;
        frame.setId(c_pkt_state);

        if (!m_psu_ctl->sendFrame(frame))
          return false;

        if (frame.getPayloadSize() != 2)
          return false;

        uint16_t value;
        frame.get(value, 0);

        IMC::Current c;
        c.value = value / 1000.0;
        dispatch(c);

        return true;
      }

      void
      consume(const IMC::QueryPowerChannelState* msg)
      {
        dispatchReply(*msg, m_power_state);
      }

      void
      onMain(void)
      {
        Counter<double> timer(1.0);

        while (!stopping())
        {
          waitForMessages(1.0);

          if (timer.overflow())
          {
            timer.reset();

            if (m_get_state)
            {
              if (dispatchState())
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              else
                setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_COM_ERROR);
            }
          }
        }
      }
    };
  }
}

DUNE_TASK
