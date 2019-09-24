//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Miguel Lançós                                                    *
//***************************************************************************


#ifndef SENSORS_COMMS_DMS_V2_DRIVER_HPP_INCLUDED_
#define SENSORS_COMMS_DMS_V2_DRIVER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Sensors
{
	//! Parent class to provide communication with the DMSv2 micro by using the
	//! correct protocol.
  //!
  //! This class only provides the basic function to communicate.
  //! @author Miguel Lançós
  namespace DMSv2
  {
    using DUNE_NAMESPACES;

		//! Timeout to wait for the response.
    static const unsigned int c_response_timeout = 1.0f;
    //! Max receive buffer size.
    static const unsigned int c_buffer_size = 20;

		class CommsDMSv2
		{
			public:
			/**
			 * @brief Construct a new CommsDMSv2 object.
			 * 
			 * @param task Pointer to the parent task.
			 * @param uart Pointer to the uart object.
			 */
      CommsDMSv2(DUNE::Tasks::Task* task, DUNE::Hardware::SerialPort* uart):
      m_task(task),
      m_uart(uart)
      {
				m_task->trace("Initializing CommsDMSv2.");
			}

			/**
			 * @brief This function allows to send a request and receive a response from the DMS microcontroller
			 * using the established communication protocol.
			 * 
			 * @param cmd	Command to execute in the micro.
			 * @param send_data Data to send in the request frame.
			 * @param send_len Length of the data in the request frame.
			 * @param recv_data Data received in the response frame.
			 * @param recv_len Expected length of the data received in the response frame.
			 * @param error True in case the received frame is of error type.
			 * @return True if the communication is successful independent of coherence of the data.
			 */
			bool
			request(uint8_t cmd, uint8_t *send_data, uint8_t send_len, uint8_t* recv_data, uint8_t recv_len, bool& error)
			{
				m_task->trace("CommsDMSv2::request executing.");

				uint8_t send_buff[c_buffer_size] = {0}, recv_buff[c_buffer_size] = {0}, i = 0;
				Algorithms::CRC8 ck_send(1), ck_recv(1);

				// Create data frame
				send_buff[0] = '#';
				send_buff[1] = cmd;

				for(i = 0; i < send_len; i++)
					send_buff[2+i] = send_data[i];

				send_buff[send_len+2] = '*';
				send_buff[send_len+3] = ck_send.putArray(send_buff+1,send_len+1);

				m_task->debug("Send frame: %02x %02x %02x %02x", send_buff[0], send_buff[1], send_buff[2], send_buff[3]);

				// Communication with device
				m_uart->write(send_buff, send_len+4);
				if(Poll::poll(*m_uart, c_response_timeout))
					m_uart->read(recv_buff, c_buffer_size);
				else
				{
				{
					m_task->spew("[CommsDMSv2::request] No response received.");
					return false;
				}
				}
				

				// Received data filtering
				if((recv_buff[0] != '#') || (recv_buff[1] != cmd))
				{
					m_task->spew("[CommsDMSv2::request] Error on preamble or command in received message.");
					return false;
				}

				for(i = 2; i < c_buffer_size; i++)
				{
					if(recv_buff[i] == '*')
						break;
				}

				if(i == c_buffer_size)
				{
					m_task->spew("[CommsDMSv2::request] No footer detected in received message.");
					return false;
				}

				if((i-2 != recv_len) && (i != 3))
				{
					m_task->spew("[CommsDMSv2::request] Received frame is not the expected size or an error frame.");
					return false;
				}

				error = ((i == 3) && (recv_buff[2] == 0));

				for(i = 0; i < recv_len; i++)
					recv_data[i] = recv_buff[i+2];

				if(error)
				{
					if(recv_buff[i+1] != cmd)
					{
						m_task->spew("[CommsDMSv2::request] Error frame checksum not match.");
						return false;
					}
				}
				else
				{
					if(recv_buff[i+1] != ck_recv.putArray(recv_data, recv_len))
					{
						m_task->spew("[CommsDMSv2::request] Received frame checksum not match.");
						return false;
					}
				}

				return true;
			}


			//! Parent task.
      DUNE::Tasks::Task* m_task;

			private:
			//! Serial port handle.
      SerialPort* m_uart;

      //! Polinomial to calculate de CRC8 algorithm.
      static const unsigned int c_poly = 0x01;
		};
	}
}

#endif /*SENSORS_COMMS_DMS_V2_DRIVER_HPP_INCLUDED_*/