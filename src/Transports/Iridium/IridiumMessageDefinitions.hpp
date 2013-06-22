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

using DUNE_NAMESPACES;

namespace Transports
{
  namespace Iridium
  {

    static const uint16_t ID_DEVICEUPDATE = 2001;
    static const uint16_t ID_ACTIVATESUB = 2003;
    static const uint16_t ID_DEACTIVATESUB = 2004;
    static const uint16_t ID_IRIDIUMCMD = 2005;

    class IridiumMessage
    {
    public:
      uint16_t msg_id = 0;
      uint16_t destination = 0;
      static IridiumMessage * deserialize(DUNE::IMC::IridiumMsgRx * msg);
      static DUNE::IMC::IridiumMsgTx * serialize();
      virtual int serialize(uint8_t * buffer);
      virtual int deserialize(uint8_t* data, uint16_t len);
      virtual ~IridiumMessage();
    };

    // imc ids
    class GenericIridiumMessage : IridiumMessage
    {
    public:
      GenericIridiumMessage();
      GenericIridiumMessage(DUNE::IMC::Message * msg);
      DUNE::IMC::Message * msg;
    };

    typedef struct {
      uint16_t id;
      float time;
      float lat, lon;
    } DevicePosition;

    // 2001
    class DeviceUpdate : IridiumMessage
    {
    public:
      std::vector<DevicePosition> positions;
      DeviceUpdate();
    };

    // 2003
    class ActivateSpotSubscription : IridiumMessage
    {
    public:
      uint16_t imc_id;
      ActivateSpotSubscription();
    };

    // 2004
    class DeactivateSpotSubscription : IridiumMessage
    {
    public:
      DeactivateSpotSubscription();
      uint16_t imc_id;
    };

    // 2005
    class IridiumCommand : IridiumMessage
    {
    public:
      IridiumCommand();
      std::string command;
    };

  } /* namespace Iridium */
} /* namespace Transports */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
