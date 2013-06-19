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

namespace Transports
{
  namespace Iridium
  {

    static const uint16_t ID_SPOTUPDATE = 2001;
    static const uint16_t ID_TREXUPDATE = 2002;
    static const uint16_t ID_ACTIVATESUB = 2003;
    static const uint16_t ID_DEACTIVATESUB = 2004;
    static const uint16_t ID_IRIDIUMCMD = 2005;

    virtual class IridiumMessage
    {
    public:
      uint16_t id;
      uint16_t destination;
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

    // 2001
    class SpotUpdate : IridiumMessage
    {
    public:
      SpotUpdate();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

    // 2002
    class TrexUpdate : IridiumMessage
    {
    public:
      enum state {ACTIVE, INACTIVE, ERROR};
      fp32_t latitude_rads, longitude_rads;
      TrexUpdate();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

    // 2003
    class ActivateSpotSubscription : IridiumMessage
    {
    public:
      uint16_t imc_id;
      ActivateSpotSubscription();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

    // 2004
    class DeactivateSpotSubscription : IridiumMessage
    {
    public:
      uint16_t imc_id;
      DeactivateSpotSubscription();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

    // 2005
    class IridiumCommand : IridiumMessage
    {
    public:
      std::string command;
      IridiumCommand();
      int serialize(uint8_t * buffer);
      int deserialize(uint8_t* data);
    };

  } /* namespace Iridium */
} /* namespace Transports */
#endif /* IRIDIUMMESSAGEDEFINITIONS_HPP_ */
