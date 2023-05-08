//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Nikolai Lauvås (NTNU, Department of Engineering Cybernetics)     *
//***************************************************************************

// ISO C++ 98 headers.
#include <string>
#include <sstream>
#include <cstring>
#include <stdexcept>
#include <iomanip>

// DUNE headers.
#include <DUNE/System/Error.hpp>
#include <DUNE/Hardware/SocketCAN.hpp>

#if defined(DUNE_OS_LINUX)
// CAN interface haders.
#include <linux/can.h>
#include <linux/can/raw.h>
#include <net/if.h>
#include <sys/ioctl.h>

#include <termios.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#else
      throw Error("unimplemented feature", "DUNE::Hardware::SocketCAN");
#endif

#define CAN_SFF_MASK 0x000007FFU // standard frame format (SFF) 
#define CAN_EFF_MASK 0x1FFFFFFFU // extended frame format (EFF) 

namespace DUNE
{
  namespace Hardware
  {
#if defined(DUNE_OS_LINUX)
    SocketCAN::SocketCAN(const std::string& can_dev, can_frame_t frame_type)
    {
      can_frame_type = frame_type;
      m_can_socket = ::socket(PF_CAN, SOCK_RAW, CAN_RAW);
    if (m_can_socket < 0) {
          throw Error("Error while opening socket for CANbus", System::Error::getLastMessage()); //TODO: Check
      }

      int enable, rc;
      switch(can_frame_type) {
        case CAN_BASIC_SFF:
            break;
            case CAN_BASIC_EFF:
        break;
        case CAN_FD:
          enable = 1;
          rc = ::setsockopt(m_can_socket, SOL_CAN_RAW, CAN_RAW_FD_FRAMES, &enable, sizeof (enable));
          if (rc == -1)
            throw Error("Failed to enable FD frames", System::Error::getLastMessage()); //TODO: Check
        break;
        default:
          throw Error("Frame type not recognized", System::Error::getLastMessage());
      }
      
      std::strncpy(m_ifr.ifr_name, can_dev.c_str(), IFNAMSIZ);


      if(::ioctl(m_can_socket, SIOCGIFFLAGS, &m_ifr) < 0) {
          throw Error("Could not read SIOCGIFFLAGS with ioctl", System::Error::getLastMessage());
      }
      if ( !(m_ifr.ifr_flags & IFF_UP) ) {
          throw Error("CAN network is down", System::Error::getLastMessage());
      }

      // Get the index of the network interface
      if (::ioctl(m_can_socket, SIOCGIFINDEX, &m_ifr) == -1)
        throw Error("Coult not get interface index with ioctl", System::Error::getLastMessage());

      // Bind the socket to the network interface
      m_addr.can_family = AF_CAN;
      m_addr.can_ifindex = m_ifr.ifr_ifindex;
      rc = ::bind(m_can_socket, reinterpret_cast<struct sockaddr*> (&m_addr), sizeof (m_addr));

      if (rc == -1)
        throw Error("Could not bind CAN socket", System::Error::getLastMessage()); //TODO: Check
    }

    //! Serial port destructor.
    SocketCAN::~SocketCAN(void)
    {
      if (::close(m_can_socket) == -1)
        throw Error("Could not close CAN port", System::Error::getLastMessage()); //TODO: Check
    }
    
    void SocketCAN::setTXID(uint32_t id) {
        cantxid = id | CAN_EFF_FLAG; // TODO: Check if similar for SFF(CAN_SFF_FLAG does not exist)
    }
    uint32_t SocketCAN::getRXID() {
      switch(can_frame_type) {
        case CAN_BASIC_SFF:
          return canrxid & CAN_SFF_MASK; // TODO: Check for SFF
        break;
        case CAN_BASIC_EFF:
          return canrxid & CAN_EFF_MASK;
        break;
        case CAN_FD:
          return canrxid & CAN_EFF_MASK;
        break;
        default:
          throw Error("Frame type not recognized", System::Error::getLastMessage());
      }
      return 0;
    }
    
    size_t SocketCAN::readHexString(char* bfr, size_t length) {
    	size_t readSize = readString(bfr, length);
        std::stringstream ss;
        ss << std::internal // fill between the prefix and the number
        << std::setfill('0') << std::uppercase; // fill with 0s
        ss << std::hex << std::setw(8) << int(getRXID()) << "#";
        
        for(size_t i=0; i < readSize; i++) {
          ss << std::hex << std::setw(2) << int(bfr[i]);
        }
        std::string out = ss.str();
        strncpy(bfr, out.c_str(), out.length()+1); // +1 because of '\0 added in c_str'

      return out.length()+1;
    }

    size_t
    SocketCAN::doWrite(const uint8_t* bfr, size_t size) { // TODO: Add exceptions
      int writtenBytes;
      switch(can_frame_type) {
        case CAN_BASIC_SFF:
        case CAN_BASIC_EFF:
          struct can_frame frame;
          frame.can_dlc = size;
          frame.can_id = cantxid;
          memcpy(frame.data, bfr, size);
          writtenBytes = ::write(m_can_socket, &frame, CAN_MTU);
        break;
        case CAN_FD:
          struct canfd_frame fdframe;
          fdframe.len = size;
          fdframe.can_id = cantxid;
          memcpy(fdframe.data, bfr, size);
          writtenBytes = ::write(m_can_socket, &fdframe, CANFD_MTU);
        break;
        default:
          throw Error("Frame type not recognized", System::Error::getLastMessage());
      }
      return size;
    }

    size_t
    SocketCAN::doRead(uint8_t* bfr, size_t size) { //TODO: Add timeout
      int numBytes;
      switch(can_frame_type) {
        case CAN_BASIC_EFF:
        case CAN_BASIC_SFF:
          struct can_frame frame;
          numBytes = ::read(m_can_socket, &frame, CAN_MTU);
          if(numBytes) {
            for(uint8_t i=0; i<frame.can_dlc && i<size; i++) {
              bfr[i] = frame.data[i];
            }
            canrxid = frame.can_id;
            return frame.can_dlc;
          }
        break;
        case CAN_FD:
          struct canfd_frame fdframe;
          numBytes = ::read(m_can_socket, &fdframe, CANFD_MTU);
          if(numBytes) {
            for(uint8_t i=0; i<fdframe.len && i<size; i++) {
              bfr[i] = fdframe.data[i];
            }
            canrxid = fdframe.can_id;
            return fdframe.len;
          }
        break;
        default:
          throw Error("Frame type not recognized", System::Error::getLastMessage());
      }
      return 0; //Should never be reached
    }

    //! Flush input buffer, discarding all of it's contents.
    void
    SocketCAN::doFlushInput(void) {
        tcflush(m_can_socket, TCIFLUSH); //Probably does not work, untested
    }

    //! Flush output buffer, aborting output.
    void
    SocketCAN::doFlushOutput(void) {
        tcflush(m_can_socket, TCOFLUSH); //Probably does not work, untested
    }

    //! Flush both input and output buffers.
    void
    SocketCAN::doFlush(void) {
        tcflush(m_can_socket, TCIOFLUSH); //Probably does not work, untested
    }
#else
    throw Error("unimplemented feature", "DUNE::Hardware::SocketCAN");
#endif
  }
}

