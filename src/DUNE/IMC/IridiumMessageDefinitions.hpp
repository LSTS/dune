//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
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
// Author: Jose Pinto                                                       *
//***************************************************************************

#ifndef DUNE_IMC_IRIDIUM_MESSAGE_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_IRIDIUM_MESSAGE_DEFINITIONS_HPP_INCLUDED_

# include <DUNE/Config.hpp>
# include <DUNE/IMC/Serialization.hpp>
# include <DUNE/IMC/Definitions.hpp>
# include <DUNE/IMC/Message.hpp>
# include <DUNE/IMC/Factory.hpp>
# include <DUNE/Math.hpp>
# include <DUNE/Math/Angles.hpp>

namespace DUNE
{
  namespace IMC
  {

    static const uint16_t ID_DEVICEUPDATE = 2001;
    static const uint16_t ID_ACTIVATESUB = 2003;
    static const uint16_t ID_DEACTIVATESUB = 2004;
    static const uint16_t ID_IRIDIUMCMD = 2005;
    static const uint16_t ID_IMCMESSAGE = 2010;
    static const uint16_t ID_EXTDEVUPDATE = 2011;

    typedef struct {
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
      static IridiumMessage * deserialize(const DUNE::IMC::IridiumMsgRx * msg);

      //! Serialize this message into a data buffer (to be sent via Iridium)
      virtual int serialize(uint8_t * buffer) = 0;

      //! Deserialize an Iridium data buffer
      virtual int deserialize(uint8_t* data, uint16_t len) = 0;

      virtual ~IridiumMessage() {}
    };

    //! An Iridium message that encapsulates an IMC message
    class ImcIridiumMessage : public IridiumMessage
    {
    public:
      ImcIridiumMessage();
      ImcIridiumMessage(DUNE::IMC::Message * msg);
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ~ImcIridiumMessage();
      DUNE::IMC::Message * msg;
    };

    //! Extension to the IMC protocol used to report a set of device positions
    class DeviceUpdate : public IridiumMessage
    {
    public:
      std::vector<DevicePosition> positions;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      DeviceUpdate();
      ~DeviceUpdate(){};
    };

    //! Extension to the IMC protocol used to report a set of device positions (including predicted error)
    class ExtendedDeviceUpdate : public IridiumMessage
    {
    public:
      std::vector<DevicePosition> positions;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ExtendedDeviceUpdate();
      ~ExtendedDeviceUpdate(){};
    };

    //! Extension to the IMC protocol used request reception of device position updates
    class ActivateSpotSubscription : public IridiumMessage
    {
    public:
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ActivateSpotSubscription();
      ~ActivateSpotSubscription(){};
    };

    //! Extension to the IMC protocol used to stop receiving device position updates
    class DeactivateSpotSubscription : public IridiumMessage
    {
    public:
      DeactivateSpotSubscription();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ~DeactivateSpotSubscription(){};
    };

    //! Extension to the IMC protocol used to send text commands to DUNE vehicles (these messages are reported as received SMS)
    class IridiumCommand : public IridiumMessage
    {
    public:
      IridiumCommand();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      std::string command;
      ~IridiumCommand(){};
    };

  } /* namespace IMC */
} /* namespace DUNE */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
