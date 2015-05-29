//***************************************************************************
// Copyright 2013-2015 Norwegian University of Science and Technology (NTNU)*
// Centre for Autonomous Marine Operations and Systems (AMOS)               *
// Department of Engineering Cybernetics (ITK)                              *
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
// Author: João Fortuna                                                     *
//***************************************************************************

// ISO C++ 98 headers.
#include <stdexcept>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Vendor headers.
#include <navio/Ublox.h>

namespace Sensors
{
  //! Device driver for the Navio+ Raspberry-Pi daughterboard
  namespace Navio
  {
    namespace GPS
    {
      using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        double data_tout;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Read timestamp.
        double m_tstamp;
        //! Task arguments.
        Arguments m_args;
        //! GPS Fix message.
        IMC::GpsFix m_fix;
        //! Sensor object
        Ublox m_gps;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Tasks::Task(name, ctx),
          m_tstamp(0)
        {
          param("Data Timeout", m_args.data_tout)
              .defaultValue("0.5")
              .minimumValue("0.2")
              .units(Units::Second)
              .description("Number of seconds without data before reporting an error");

          // Register listeners.
          bind<IMC::DevCalibrationControl>(this);
        }

        //! Acquire resources.
        void
        onResourceAcquisition(void)
        {
          if (m_gps.testConnection())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
        }

        //! Initialize resources.
        void
        onResourceInitialization(void)
        {
        }

        //! Update %Task parameters.
        void
        onUpdateParameters(void)
        {
        }

        void
        consume(const IMC::DevCalibrationControl* msg)
        {
          if (msg->getDestinationEntity() != getEntityId())
            return;

          if (getEntityState() == IMC::EntityState::ESTA_BOOT)
            return;
        }

        void
        onMain(void)
        {

          std::vector<double> pos_data;
          //m_gps.decodeMessages();
          // You can use this function to decode all messages, incoming from the GPS receiver. The function starts an infinite loop.
          // In this example we can only decode NAV-POSLLH messages, the others are simply ignored.
          // You can add new message types in function decodeMessage() of class UBXParser(see ublox.h)


          // Here, however we use a different approach. Instead of trying to extract info from every message(as done in decodeMessages()),
          // this function waits for a message of a specified type and gets you just the information you need
          // In this example we decode NAV-POSLLH messages, adding new types, however is quite easy

          while (!stopping())
          {
            if (m_gps.decodeSingleMessage(Ublox::NAV_POSLLH, pos_data))
            {
              // after desired message is successfully decoded, we can use the information stored in pos_data vector
              // right here, or we can do something with it from inside decodeSingleMessage() function(see ublox.h).
              // the way, data is stored in pos_data vector is specified in decodeMessage() function of class UBXParser(see ublox.h)

              m_fix.lat = Angles::radians(pos_data[2]/10000000);
              m_fix.lon = Angles::radians(pos_data[1]/10000000);
              m_fix.height = pos_data[3]/1000;

              dispatch(m_fix);
            }

            if (m_gps.decodeSingleMessage(Ublox::NAV_STATUS, pos_data))
            {
              debug("gps Fix status: ");
              switch((int)pos_data[0])
              {
                case 0x00:
                  break;
                case 0x01:
                  m_fix.type = IMC::GpsFix::GFT_DEAD_RECKONING;
                  break;
                case 0x02:
                  m_fix.type = IMC::GpsFix::GFT_STANDALONE;
                  debug("2D-fix");
                  break;
                case 0x03:
                  m_fix.type = IMC::GpsFix::GFT_STANDALONE;
                  m_fix.validity = IMC::GpsFix::GFV_VALID_POS;
                  debug("3D-fix");
                  break;
                case 0x04:
                  m_fix.type = IMC::GpsFix::GFT_DEAD_RECKONING;
                  debug("GPS + dead reckoning combined");
                  break;
                case 0x05:
                  debug("Time only fix");
                  break;
                default:
                  break;
              }
            }

            waitForMessages(0.02);
          }
        }
      };
    }
  }
}
DUNE_TASK
