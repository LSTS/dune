//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: AnaSantos                                                        *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports {
    namespace FalkorData {
        using DUNE_NAMESPACES;

        //! %Task arguments.
        struct Arguments {
            //! TCP Port
            uint16_t TCP_port;
            //! TCP Address
            Address TCP_addr;
        };

        struct Task : public DUNE::Tasks::Task {
            //! Task arguments.
            Arguments m_args;
            //! TCP socket
            Network::TCPSocket* m_TCP_sock;

            //! Constructor.
            //! @param[in] name task name.
            //! @param[in] ctx context.
            Task(const std::string &name, Tasks::Context &ctx) :
                    DUNE::Tasks::Task(name, ctx) {
                param("TCP - Port", m_args.TCP_port)
                        .defaultValue("6004")
                        .description("Port for connection");
                param("TCP - Address", m_args.TCP_addr)
                        .defaultValue("127.0.0.1")
                        .description("Address for connection");
            }

            //! Update internal state with new parameter values.
            void
            onUpdateParameters(void) {
            }

            //! Reserve entity identifiers.
            void
            onEntityReservation(void) {
            }

            //! Resolve entity names.
            void
            onEntityResolution(void) {
            }

            //! Acquire resources.
            void
            onResourceAcquisition(void) {
                openConnection();
            }

              //! Initialize resources.
              void
              onResourceInitialization(void) {
              }

              //! Release resources.
              void
              onResourceRelease(void) {
                  Memory::clear(m_TCP_sock);
              }

              //! Main loop.
              void
              onMain(void) {
                while (!stopping()) {
                  waitForMessages(1.0);

                    // Handle data
                    if (m_TCP_sock)
                    {
                        handleFalkorData();
                    }
                    else
                    {
                        Time::Delay::wait(0.5);
                        openConnection();
                    }

                    // Handle IMC messages from bus
                    consumeMessages();
                }
              }

            void
            openConnection(void)
            {
                try {
                    m_TCP_sock = new TCPSocket;
                    m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
                    m_TCP_sock->setNoDelay(true);
                    inf(DTR("Falkor data - Tcp connection initialized"));
                }
                catch (...) {
                    Memory::clear(m_TCP_sock);
                    war(DTR("Connection failed, retrying..."));
                    setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
                }
            }

            void
            handleFalkorData(void)
            {
                 //todo logic
            }
        };
    }
}

DUNE_TASK
