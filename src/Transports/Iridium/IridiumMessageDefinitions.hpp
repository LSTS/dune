/*
 * IridiumMessageDefinitions.hpp
 *
 *  Created on: Jun 19, 2013
 *      Author: zp
 */

#ifndef IRIDIUMMESSAGEDEFINITIONS_HPP_
#define IRIDIUMMESSAGEDEFINITIONS_HPP_

# include <DUNE/Config.hpp>
# include <DUNE/IMC/Serialization.hpp>
# include <DUNE/IMC/Definitions.hpp>
# include <DUNE/IMC/Message.hpp>
# include <DUNE/IMC/Factory.hpp>
# include <DUNE/Math.hpp>
# include <DUNE/Math/Angles.hpp>

namespace Transports
{
  namespace Iridium
  {

    static const uint16_t ID_DEVICEUPDATE = 2001;
    static const uint16_t ID_ACTIVATESUB = 2003;
    static const uint16_t ID_DEACTIVATESUB = 2004;
    static const uint16_t ID_IRIDIUMCMD = 2005;

    typedef struct {
      uint16_t id;
      double time;
      double lat, lon;
    } DevicePosition;

    //! All Iridium messages subclass this type
    class IridiumMessage
    {
    public:

      //! The message id (can wither be an IMC id or an Iridium extension
      uint16_t msg_id;

      //! Parse a received message received into an Iridium message
      static IridiumMessage * deserialize(const DUNE::IMC::IridiumMsgRx * msg);

      //! Translates this message into a message ready to be sent to an Iridium destination
      DUNE::IMC::IridiumMsgTx * serialize();

      //! Serialize this message into a data buffer (to be sent via Iridium)
      virtual int serialize(uint8_t * buffer);

      //! Deserialize an Iridium data buffer
      virtual int deserialize(uint8_t* data, uint16_t len);

      virtual ~IridiumMessage();
    };

    //! An Iridium message that encapsulates an IMC message
    class GenericIridiumMessage : public IridiumMessage
    {
    public:
      GenericIridiumMessage();
      GenericIridiumMessage(DUNE::IMC::Message * msg);
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      DUNE::IMC::Message * msg;
    };

    //! Extension to the IMC protocol used to report a set of device positions
    class DeviceUpdate : IridiumMessage
    {
    public:
      std::vector<DevicePosition> positions;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      DeviceUpdate();
    };

    //! Extension to the IMC protocol used request reception of device position updates
    class ActivateSpotSubscription : public IridiumMessage
    {
    public:
      uint16_t imc_id;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      ActivateSpotSubscription();
    };

    //! Extension to the IMC protocol used to stop receiving device position updates
    class DeactivateSpotSubscription : public IridiumMessage
    {
    public:
      DeactivateSpotSubscription();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      uint16_t imc_id;
    };

    //! Extension to the IMC protocol used to send text commands to DUNE vehicles (these messages are reported as received SMS)
    class IridiumCommand : public IridiumMessage
    {
    public:
      IridiumCommand();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data, uint16_t len);
      std::string command;
    };

  } /* namespace Iridium */
} /* namespace Transports */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
