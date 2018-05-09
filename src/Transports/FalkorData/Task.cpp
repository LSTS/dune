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

        enum Code
        {
            GPGGA,
            GPGLL,
            GPHDT,
            ERROR
        };

        //! %Task arguments.
        struct Arguments {
            //! TCP Port
            uint16_t TCP_port;
            //! TCP Address
            Address TCP_addr;
        };

        struct Task : public DUNE::Tasks::Task {
            char m_buf[512];
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


            std::string handleGPGGA(Parsers::NMEAReader& reader) {

                std::string list = "";
                std::string tmp;

                list += "time=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", latitude=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", latitude direction=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", longitude=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", longitude direction=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", quality=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", number satellites=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", HDOP=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", altitude=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", altitude units=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", height=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", height units=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", last DGPS=";
                reader.operator>>(tmp);
                list += tmp;

                list += ", station Id=";
                reader.operator>>(tmp);
                list += tmp;

                war(DTR("LISTA RESULTADO: '%s'"), list.c_str());

                return list;
            }

            Code resolveCode(const char *code) {
                if( strcmp(code, "GPGGA") == 0)
                    return GPGGA;
                if( strcmp(code, "GPGLL") == 0)
                    return GPGLL;
                if( strcmp(code, "GPHDT") == 0)
                    return GPHDT;
                return ERROR;
            }


            void
            handleFalkorData(void)
            {
                int n = receiveData(m_buf, sizeof(m_buf));
                if (n < 0) {
                    debug("Receive error");
                    return;
                }

                war(DTR("Falkor data - RECEIVE DATA!!!!"));
                war(DTR("DATA: '%s'"), m_buf);


              /*
               // Dados seabird
               IMC::UnderwayData msg;
               msg.type = "Seabird SBE-45";
               msg.list = std::string(m_buf);
               dispatch(msg);
               */


                Parsers::NMEAReader reader(m_buf);
                IMC::UnderwayData msg;
                msg.type = reader.code();

                switch (resolveCode(reader.code()))
                {
                    case GPGGA:
                       msg.list = handleGPGGA(reader);
                        break;
                    case GPGLL:
                        //todo something
                        break;
                    case GPHDT:
                        //todo something
                        break;
                    default:
                        break;
                }

                dispatch(msg);
            }

            int
            receiveData(char* buf, size_t blen)
            {
                if (m_TCP_sock)
                {
                    try
                    {
                        return m_TCP_sock->read(buf, blen);
                    }
                    catch (std::runtime_error& e)
                    {
                        err("%s", e.what());
                        war(DTR("Connection lost, retrying..."));
                        Memory::clear(m_TCP_sock);

                        m_TCP_sock = new Network::TCPSocket;
                        m_TCP_sock->connect(m_args.TCP_addr, m_args.TCP_port);
                        return 0;
                    }
                }
                return 0;
            }


        };
    }
}

DUNE_TASK
