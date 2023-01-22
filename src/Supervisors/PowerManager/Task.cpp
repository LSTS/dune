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
// Author: Ana Santos                                                        *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Supervisors
{
    namespace PowerManager
    {
        using DUNE_NAMESPACES;

        struct Task: public DUNE::Tasks::Task
        {
            const static int c_rpm_counter_size = 6;

            //! Vehicle is underwater
            bool m_vehicle_underwater;
            //! Last state has changed
            bool m_has_changes;
            //! Motor's rpms
            int m_rpms;

            int m_zero_rpm_counter;

            bool m_wifi_on;


            //! Constructor.
            //! @param[in] name task name.
            //! @param[in] ctx context.
            Task(const std::string& name, Tasks::Context& ctx):
                    DUNE::Tasks::Task(name, ctx),
                    m_vehicle_underwater(false),
                    m_has_changes(false),
                    m_rpms(0),
                    m_zero_rpm_counter(0),
                    m_wifi_on(false)
            {

                // Register consumer
                bind<IMC::Rpm>(this);
                bind<IMC::VehicleMedium>(this);
                bind<IMC::PowerChannelState>(this);
            }

            //! Update internal state with new parameter values.
            void
            onUpdateParameters(void)
            {
            }

            //! Reserve entity identifiers.
            void
            onEntityReservation(void)
            {
            }

            //! Resolve entity names.
            void
            onEntityResolution(void)
            {
            }

            //! Acquire resources.
            void
            onResourceAcquisition(void)
            {
            }

            //! Initialize resources.
            void
            onResourceInitialization(void)
            {
                setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            }

            //! Release resources.
            void
            onResourceRelease(void)
            {
            }
            
            void
            consume(const IMC::VehicleMedium * msg)
            {
                bool last_state = m_vehicle_underwater;

                m_vehicle_underwater = (msg->medium == IMC::VehicleMedium::VM_UNDERWATER);

                if(last_state != m_vehicle_underwater)
                {
                    if(m_vehicle_underwater)
                        debug("IN UNDERWATER...'");
                    else
                        debug("NOT IN UNDERWATER...'");

                    m_has_changes = true;
                }
            }

            void
            consume(const IMC::Rpm* msg)
            {
                int last_rpms = m_rpms;

                m_rpms = msg->value;

                if(m_rpms == 0)
                    m_zero_rpm_counter++;
                else
                    m_zero_rpm_counter = 0;

                //! If last rpms of vehicle are different from current ones a
                //! and the current or previous rpms are equal to 0
                if((m_rpms == 0 || last_rpms == 0) && last_rpms != m_rpms)
                {
                    m_has_changes = true;
                }
            }

            void
            consume(const IMC::PowerChannelState * msg)
            {
               if(msg->name != "Radio")
                   return;

                if(msg->state == IMC::PowerChannelState::PCS_ON)
                    m_wifi_on = true;
                else
                    m_wifi_on = false;
            }

            //! Main loop.
            void
            onMain(void)
            {
                IMC::PowerChannelControl power_control_channel;
                power_control_channel.name = "Radio";

                while (!stopping())
                {
                    waitForMessages(1.0);
                    consumeMessages();

                    if(!m_has_changes)
                        continue;

                    m_has_changes = false;

                    //! If vehicle is in moving and underwater then turn off wifi
                    if(m_zero_rpm_counter == c_rpm_counter_size || !m_vehicle_underwater){
                        if(m_wifi_on)
                            continue;
                        debug("WIFI IS ON...'");
                        power_control_channel.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
                        m_zero_rpm_counter = 0;
                    }
                    else {
                        if(!m_wifi_on)
                            continue;
                        debug("WIFI IS OFF...'");
                        power_control_channel.op = IMC::PowerChannelControl::PCC_OP_TURN_OFF;
                    }

                    dispatch(power_control_channel);
                }
            }
        };
    }
}

DUNE_TASK