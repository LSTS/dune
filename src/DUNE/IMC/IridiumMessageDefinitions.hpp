//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

#ifndef DUNE_IMC_IRIDIUM_MESSAGE_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_IRIDIUM_MESSAGE_DEFINITIONS_HPP_INCLUDED_

#include <DUNE/Config.hpp>
#include <DUNE/IMC/Definitions.hpp>
#include <DUNE/IMC/Factory.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/Serialization.hpp>
#include <DUNE/Math.hpp>
#include <DUNE/Math/Angles.hpp>

namespace DUNE
{
  namespace IMC
  {
    enum IridiumMessageIds
    {
      ID_DEVICEUPDATE  = 2001,
      ID_ACTIVATESUB   = 2003,
      ID_DEACTIVATESUB = 2004,
      ID_IRIDIUMCMD    = 2005,
      ID_IMCMESSAGE    = 2010,
      ID_EXTDEVUPDATE  = 2011,
      ID_FRAGMENT      = 2012
    };

    typedef struct
    {
      uint16_t id;
      uint8_t pos_class;
      double time;
      double lat, lon;
    } DevicePosition;

    //! All Iridium messages subclass this type
    class IridiumMessage
    {
    public:
      //! The imc id of this message's origin
      uint16_t source;
      //! The imc id of this message's destination
      uint16_t destination;
      //! The message id (can wither be an IMC id or an Iridium extension
      uint16_t msg_id;

      //! Parse a received message received into an Iridium message
      static IridiumMessage*
      deserialize(const DUNE::IMC::IridiumMsgRx* msg);

      int
      serializeHeader(uint8_t* buffer);

      static int
      deserializeHeader(uint8_t* data, uint16_t& len, IridiumMessage*& msg);

      //! Serialize this message into a data buffer (to be sent via Iridium)
      virtual int
      serialize(uint8_t* buffer)
      {
        (void)buffer;

        return 0;
      }

      //! Deserialize an Iridium data buffer
      virtual int
      deserialize(uint8_t* data, uint16_t len)
      {
        (void)data;
        (void)len;

        return 0;
      }

      virtual ~IridiumMessage(void)
      { }
    };

    //! An Iridium message that encapsulates an IMC message
    class ImcIridiumMessage: public IridiumMessage
    {
    public:
      ImcIridiumMessage(void);

      ~ImcIridiumMessage(void);

      ImcIridiumMessage(DUNE::IMC::Message* msg);

      int
      serialize(uint8_t* buffer);

      int
      deserialize(uint8_t* data, uint16_t len);

      DUNE::IMC::Message* msg;
    };

    //! Extension to the IMC protocol used to report a set of device positions
    class DeviceUpdate: public IridiumMessage
    {
    public:
      DeviceUpdate(void)
      { }

      ~DeviceUpdate(void)
      { }

      int
      serialize(uint8_t* buffer);

      int
      deserialize(uint8_t* data, uint16_t len);

      std::vector<DevicePosition> positions;
    };

    //! Extension to the IMC protocol used to report a set of device positions
    //! (including predicted error)
    class ExtendedDeviceUpdate: public IridiumMessage
    {
    public:
      ExtendedDeviceUpdate(void)
      { }

      ~ExtendedDeviceUpdate(void)
      { }

      int
      serialize(uint8_t* buffer);

      int
      deserialize(uint8_t* data, uint16_t len);

      std::vector<DevicePosition> positions;
    };

    //! Extension to the IMC protocol used request reception of device position updates
    class ActivateSpotSubscription: public IridiumMessage
    {
    public:
      ActivateSpotSubscription(void)
      { }

      ~ActivateSpotSubscription(void)
      { }
    };

    //! Extension to the IMC protocol used to stop receiving device position updates
    class DeactivateSpotSubscription: public IridiumMessage
    {
    public:
      DeactivateSpotSubscription(void)
      { }

      ~DeactivateSpotSubscription(void)
      { }
    };

    //! Extension to the IMC protocol used to send text commands to DUNE vehicles
    //! (these messages are reported as received SMS)
    class IridiumCommand: public IridiumMessage
    {
    public:
      IridiumCommand(void)
      { }

      ~IridiumCommand(void)
      { }

      int
      serialize(uint8_t* buffer);

      int
      deserialize(uint8_t* data, uint16_t len);

      std::string command;
    };
  } /* namespace IMC */
} /* namespace DUNE */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
