//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0243121113484);
    msg.setSource(10977U);
    msg.setSourceEntity(250U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(231U);
    msg.state = 252U;
    msg.flags = 211U;
    msg.description.assign("BFAGJTOODOEBGGYFLFYDNHYSIEXTEZPXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.385238134658);
    msg.setSource(37196U);
    msg.setSourceEntity(220U);
    msg.setDestination(62868U);
    msg.setDestinationEntity(13U);
    msg.state = 16U;
    msg.flags = 141U;
    msg.description.assign("SSVJDIPWGOKSVCUPPLPFTXSDCAHQZOQXQHFGWUULOTVBUXHCJTSFKLYZSXIPEDITUNBBKYFWV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.0610680433774);
    msg.setSource(16528U);
    msg.setSourceEntity(62U);
    msg.setDestination(60472U);
    msg.setDestinationEntity(245U);
    msg.state = 23U;
    msg.flags = 60U;
    msg.description.assign("KTAMIGJIQOFBJLPCSZENPLINSILVSRVCABBYMILXYKSPXZFPGSJAFQNEHCOPWHRQRJHOTLVOPQBXVDBGYNRKUDTFVBZWNEHZICNRQBMJXYBNWUJUWHTHDRZNOVXAGCXKCXCDJOVRPGUCDPOXPMDPUYZHYKHUKDIBSYIBXGHJZAOAJXYAUAQKYEQCSNTEKOVLLTWITQGASCEZSFWHDISMYVGRRLRZFJFWZMFKVDTLK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.698894255259);
    msg.setSource(61854U);
    msg.setSourceEntity(197U);
    msg.setDestination(24474U);
    msg.setDestinationEntity(79U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.491456747183);
    msg.setSource(7133U);
    msg.setSourceEntity(253U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(207U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.297537105629);
    msg.setSource(4580U);
    msg.setSourceEntity(24U);
    msg.setDestination(9213U);
    msg.setDestinationEntity(136U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.237126601813);
    msg.setSource(32399U);
    msg.setSourceEntity(93U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(96U);
    msg.id = 148U;
    msg.label.assign("MERCDLHJCQGABNZOVLQZDQLTYAOIWQHSTRYPFFGPVUPWPZJUGUFBTTTKJIMKQQEZBRBBXWQWMIGJLDHLTXHIVBXWXCBYRSEOPFUMILKTTICKZEIQKI");
    msg.component.assign("GGUIOPJWCLLXUHRTCNVUVBSMHQOIQEGSGMDZHKSQTOCSGLKJKHWPEPBTFNIIQAVJVVZKXUCGIXRROETFDKCWACTFCYFKPOPBZYLAAESZPCJMJIUSHZKVATDMERSSIYEAEJZYOWQHYHSFMBOVFAOKQHVNRABZWGNPBLNYUXNNCSDTDBEVOQXENYJWGTMTQFLMMQWJXUUQKDAXJMD");
    msg.act_time = 14447U;
    msg.deact_time = 27426U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.220235954003);
    msg.setSource(16821U);
    msg.setSourceEntity(152U);
    msg.setDestination(63381U);
    msg.setDestinationEntity(201U);
    msg.id = 219U;
    msg.label.assign("DURUJFZSNMLZLOFRIWQGXKWDYJXKMPCKJNWMMQBDWXOVVFTSMYEIZLSCPZYVLZRROCGHUFLTWLDUNDCQSRPBKGKVOOETRTVHELNCZEMTWAGSYAFFCVQXZEINBVJYLOPHKBRYZXCAMRKKXPPIABQPGMYGYDQHHAEEOWXFNUWJJIYDQBEOVSTPISEOCIGVXQUHAULYWMJQBBKHIMVOHJKAA");
    msg.component.assign("EVTMAYMJMNORMQJRWXYZBOYVJ");
    msg.act_time = 6334U;
    msg.deact_time = 11945U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.176006146727);
    msg.setSource(58163U);
    msg.setSourceEntity(148U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(189U);
    msg.id = 67U;
    msg.label.assign("LVOOBXPGWXENCNHRGVFEWZXODNDMBGCBJFWNYPXKJWYFZHNOQIDPSYULUVXDIHNJKYBLGNTNLBKKJQHRUWRVXFUDQSYOXNJJ");
    msg.component.assign("AICJEZCFQWQZUBHIOTBN");
    msg.act_time = 3974U;
    msg.deact_time = 5002U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.0926655256325);
    msg.setSource(2867U);
    msg.setSourceEntity(172U);
    msg.setDestination(61845U);
    msg.setDestinationEntity(133U);
    msg.id = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.966922167569);
    msg.setSource(14664U);
    msg.setSourceEntity(21U);
    msg.setDestination(11502U);
    msg.setDestinationEntity(116U);
    msg.id = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.95529812852);
    msg.setSource(15307U);
    msg.setSourceEntity(47U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(213U);
    msg.id = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.635973987894);
    msg.setSource(6671U);
    msg.setSourceEntity(89U);
    msg.setDestination(31635U);
    msg.setDestinationEntity(63U);
    msg.op = 94U;
    msg.list.assign("FNUAIGFLMMMCGMLBIKJAHJWAKNDGNYKG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.35536470158);
    msg.setSource(21585U);
    msg.setSourceEntity(178U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(218U);
    msg.op = 179U;
    msg.list.assign("YWQFENGUZRXGBAYDUMSZJEQFLDREVPLFUWWWKDIALKUXNXEEDRGYIMHCLQAIXVDEUBJTJYZURRBGOMPZHKQLVYSAIVAIYPVVXQCSERSCNQIKBIWLZWAKVIHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.829122339952);
    msg.setSource(32280U);
    msg.setSourceEntity(78U);
    msg.setDestination(45979U);
    msg.setDestinationEntity(163U);
    msg.op = 156U;
    msg.list.assign("HXRJPEPEPQUGPGWYFVOIDFPOLXTCHVLIHJVWUJXMNHRDJGTTUBUFBHQNAFJXBTKATQYSLGABNTOBZYLIUSJQYMGYANBWACVWZNORLKNVKPDWDORVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.987897268719);
    msg.setSource(13215U);
    msg.setSourceEntity(34U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(5U);
    msg.op = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.608695679969);
    msg.setSource(6015U);
    msg.setSourceEntity(113U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(128U);
    msg.op = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityControl msg;
    msg.setTimeStamp(0.263585052999);
    msg.setSource(61380U);
    msg.setSourceEntity(232U);
    msg.setDestination(9095U);
    msg.setDestinationEntity(218U);
    msg.op = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.27165041878);
    msg.setSource(44372U);
    msg.setSourceEntity(182U);
    msg.setDestination(28459U);
    msg.setDestinationEntity(6U);
    msg.value = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.970820812673);
    msg.setSource(57426U);
    msg.setSourceEntity(29U);
    msg.setDestination(34978U);
    msg.setDestinationEntity(1U);
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.463712290981);
    msg.setSource(55635U);
    msg.setSourceEntity(155U);
    msg.setDestination(45772U);
    msg.setDestinationEntity(8U);
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.594375454299);
    msg.setSource(22723U);
    msg.setSourceEntity(32U);
    msg.setDestination(48154U);
    msg.setDestinationEntity(114U);
    msg.consumer.assign("HITTPAZNSKNEWGXXLWRXYIRLUKEOAPNOEOWQKKACOJUKDBPKASALZIFHDUJIIFDMPRRASDAMAHVVWQBVRLKJJS");
    msg.message_id = 30119U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.385204569108);
    msg.setSource(39548U);
    msg.setSourceEntity(249U);
    msg.setDestination(30689U);
    msg.setDestinationEntity(78U);
    msg.consumer.assign("MTHEZNFGYVUQCACGZBCEVDMPINXPAFSYTKSTRQEYMTJYMHJVFOYIRPXSELLAJVKWXPOZNFPWJAWBMAGDINGJUMVAGEGSJKGROQKLBYOLWCCBTVUSTFRXBWVQCOBVPLSJKEWXKMDXBLSPUUDLTOB");
    msg.message_id = 44357U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.00203295215683);
    msg.setSource(19730U);
    msg.setSourceEntity(156U);
    msg.setDestination(45986U);
    msg.setDestinationEntity(50U);
    msg.consumer.assign("SKKRQPXUQLMJZRMJSKGWVCNDVFVHEY");
    msg.message_id = 1820U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.222483504374);
    msg.setSource(3060U);
    msg.setSourceEntity(20U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(120U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0465835951242);
    msg.setSource(16382U);
    msg.setSourceEntity(218U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.048984390493);
    msg.setSource(35130U);
    msg.setSourceEntity(207U);
    msg.setDestination(27737U);
    msg.setDestinationEntity(210U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.391653668615);
    msg.setSource(26187U);
    msg.setSourceEntity(99U);
    msg.setDestination(63082U);
    msg.setDestinationEntity(145U);
    msg.section.assign("CSGWDFMPXGPHSBAUGGPCQRCXPUWCIOAQNEWLBFGEESPDDYGZWIJACUWLONTCJUJTDKSXVSOIETJZXEMGFJHUMKPPKTWYALKWYNMBNOJOLIRIZOUDDEMVBVUBVZRZXNMQTRRDKIGNWGUWVXQLCFHYFZDYTSY");
    msg.param.assign("NLSOEIHWLEPYWCHLDPCVAQF");
    msg.value.assign("SAHMPAYVUMVSBUCZSONDIWSHCTKJSEVBJGKGZUJFCJXAZLYNCMAXKWACRYUELOXPXKCQIOQIRNGRGZBIBGRYXWGRSNTAJCTXTDSFQFVDIXKQJHSVQJWTYPOKBLFNIMJVAVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.418556151802);
    msg.setSource(12607U);
    msg.setSourceEntity(206U);
    msg.setDestination(8000U);
    msg.setDestinationEntity(52U);
    msg.section.assign("PAHEKMLJQFAKYXPEHPBQWGFZRNMUKMCAWKGYFCHWZGBIIRMMRJAIWBSZRFZPFZXAQJHRYQENDHEOXIFYEPPPTXEUDPOOQYG");
    msg.param.assign("VYZKAPMWNJYN");
    msg.value.assign("HBGYHHONULGVOBOYKNJRZYGQSFUNNRLCDELGGBRKEZVJHCYQIIEKQXPMAZZRIWMAOUPQOALQPJFXUVYQHZFZMVABSFZJRWNSWXFELNEMSYDCOKEDTIMRJEDRSWXWTACKFVXJJMIMHJMQPUSEICDFTHTWNJEGFEPNXOXLBWNRIVUSKTTGFBTZKLHCKBIWURWPUTDOBSQMQKDGXPYTXDBSMXCKWGYZGVPONOLAILDJVVSPAFIVP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Parameter msg;
    msg.setTimeStamp(0.338205218908);
    msg.setSource(37807U);
    msg.setSourceEntity(61U);
    msg.setDestination(7804U);
    msg.setDestinationEntity(157U);
    msg.section.assign("CRTSWDTMVKIUYWZMXQJZGTUVYYSVSAZAQQTKBIWPCDHDMPXETLZMPPHHWZMEPTFYSZHBFBCAXLOEDWTRYNMAGOCKRAVCUNPBXBIUZWLVLZEYCDUJKYWSNKFDGOFJAGGJQLCJGVPHOZLKACRIQHNDUIORYWRYJUVOJBQF");
    msg.param.assign("YJRCUETTNZBHPNZOGSIOIJVBYUWSDMDSWXCKANZFHPCENELWJNLVANHPWMWWMPAZKJDHFCIYKJSBQOKDDVKCHCAGZXAHOJQLKLRNSDVWRPGLZVOXGIPTVISMQAQBWVKAXXRHOOHGLQIHMYYPJQGFIRCEYFKLRQAEMTNSPKMHLXVUZTFTMLYBGDQTZENBEGSRXFOWYVQZJCBUAWFBMBYEUIXUORJUUYMSFVCXCX");
    msg.value.assign("NDFOMXXRXTCFMJXWQMYKHKIUMDLPBGRDJRDZFGKAUVGPXQWMTJNQVXUSANCLHPENOEJJDDIOHHMIJBUIVWLVUNTEAHZCUTGWHJOFKPCUYZPRYVTNSPNGYBTKYFALKQJWOAFVNFRHBBMQAOBGZVOEWERHXARIJGLSRWPSZZRLMYCSXITJOZWCKPCSZCTEXHFUQVEHMFQCZWDSYIAIDUGEKMZDEYTLLVVSSEBLXKRPIIWNTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Parameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.866118294221);
    msg.setSource(50154U);
    msg.setSourceEntity(28U);
    msg.setDestination(15811U);
    msg.setDestinationEntity(13U);
    msg.op = 90U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("BQGBVVQNVBEBXMYCANJNXFYJZVDJIPSHVSXOZUCXMMNDODIKVRZCOXNHKTDTTQCGEIXWZFVQAXXEBSKLKZLAJHWBUCFYDNUWRAPJTKLQW");
    tmp_msg_0.param.assign("ISVPXIYIFBTBYTOGNWODCEOVAUDFBPRWQANKNMQBFJYLOTBXPFMBZUXHCRHSNXFOWGRUKMZDDCDM");
    tmp_msg_0.value.assign("WQQKBPDIODRUNVAYLSCJZWPRIFDFGYJZWWOHCXTDFONRPKIUVZJJEURZWFXLPLIQSAFMWYXSYYEICWZVHCBTADUNJMLYOKIXAAS");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.656711386554);
    msg.setSource(40881U);
    msg.setSourceEntity(174U);
    msg.setDestination(4999U);
    msg.setDestinationEntity(33U);
    msg.op = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParameterControl msg;
    msg.setTimeStamp(0.963661776237);
    msg.setSource(65317U);
    msg.setSourceEntity(46U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(186U);
    msg.op = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParameterControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.510706319477);
    msg.setSource(12891U);
    msg.setSourceEntity(17U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(78U);
    msg.op = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.819786922);
    msg.setSource(45752U);
    msg.setSourceEntity(17U);
    msg.setDestination(33153U);
    msg.setDestinationEntity(86U);
    msg.op = 191U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.351365953227);
    msg.setSource(39355U);
    msg.setSourceEntity(204U);
    msg.setDestination(14119U);
    msg.setDestinationEntity(122U);
    msg.op = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.017581858183);
    msg.setSource(26127U);
    msg.setSourceEntity(234U);
    msg.setDestination(50667U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 4U;
    msg.step_number = 122U;
    msg.step.assign("XUVXBRJDXMOZLZHLQXTFFAGUGSHBDPURQNLQIBQERAHMIZWOKOFCZJROHLDXZYJWMZSTEDHJRVFGIIUXFYPICDXJBWRD");
    msg.flags = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.33396509454);
    msg.setSource(1195U);
    msg.setSourceEntity(150U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(136U);
    msg.total_steps = 132U;
    msg.step_number = 142U;
    msg.step.assign("DISXVFGOTEAIKAFXVLWYWIYJDCOWJDMUBHIZPDQXLZHUJQCVDEBHTPDYOM");
    msg.flags = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.967877635695);
    msg.setSource(25733U);
    msg.setSourceEntity(212U);
    msg.setDestination(25407U);
    msg.setDestinationEntity(33U);
    msg.total_steps = 8U;
    msg.step_number = 213U;
    msg.step.assign("SOVZWRVITTTUXLDAUTEMAHWKTNZMQGFTHNZQIDKPCHZNOGFDAPBDWEVTCHEQEAIDJKUZPTPYLCWTVBUNCQRDVYNJQYUJYZVGGYDZPHKLSEXSLWLJAMUWYOSFJDARLXCJOWWRVISLASBZCHOKNRXMFPBBXEWQOIEU");
    msg.flags = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.107850264093);
    msg.setSource(35645U);
    msg.setSourceEntity(146U);
    msg.setDestination(26007U);
    msg.setDestinationEntity(83U);
    msg.state = 112U;
    msg.error.assign("BNJKBJYEKTRYRGQVVDSHCJRQEPSDAIICNGKTSFGTSDZQDFTMWCHYONTPKBYKDFGOPCIEVHUXQWUJHCTKEPSUZYUNOEVXERROHVSBAAXIJEQZQOMHMYKYNRCKKBCMMFRBVYXCNAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.367141469112);
    msg.setSource(46619U);
    msg.setSourceEntity(188U);
    msg.setDestination(22884U);
    msg.setDestinationEntity(117U);
    msg.state = 86U;
    msg.error.assign("EDQNKRUTIXZMSNKKGIMOYRHJVCNAPQAJBKFHVTPWIYVRRUZILXWTJYVOPMJEXMTAELXPQGQLGCATTURVJFNCHIKQFGSAEENUBQVWBWVYVHLXZHZZYWNESQWNYSBDUTLEAFLCPOUEAPEQBKKWMYJIWDLHDYCISGABPEKBFLMUBCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.381403369288);
    msg.setSource(27640U);
    msg.setSourceEntity(235U);
    msg.setDestination(47694U);
    msg.setDestinationEntity(170U);
    msg.state = 26U;
    msg.error.assign("NMRRRDLGRQTOVTQBIAPUIFMWKJCGDIMXEDHHCXMZIOHTVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.545064985629);
    msg.setSource(44306U);
    msg.setSourceEntity(177U);
    msg.setDestination(53393U);
    msg.setDestinationEntity(206U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.340371483198);
    msg.setSource(33939U);
    msg.setSourceEntity(21U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(72U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.374756515734);
    msg.setSource(43697U);
    msg.setSourceEntity(96U);
    msg.setDestination(65240U);
    msg.setDestinationEntity(30U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.8321028605);
    msg.setSource(21912U);
    msg.setSourceEntity(220U);
    msg.setDestination(22639U);
    msg.setDestinationEntity(187U);
    msg.op = 216U;
    msg.speed_min = 0.751715219715;
    msg.speed_max = 0.0854999872378;
    msg.long_accel = 0.436026202162;
    msg.alt_max_msl = 0.854051727419;
    msg.dive_fraction_max = 0.406214874314;
    msg.climb_fraction_max = 0.792511822386;
    msg.bank_max = 0.900028693572;
    msg.p_max = 0.697830595551;
    msg.pitch_min = 0.115352428657;
    msg.pitch_max = 0.74702847036;
    msg.q_max = 0.947845120749;
    msg.g_min = 0.341298190763;
    msg.g_max = 0.889988976086;
    msg.g_lat_max = 0.953329810249;
    msg.rpm_min = 0.874920745192;
    msg.rpm_max = 0.972735155444;
    msg.rpm_rate_max = 0.678247567398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.357559447964);
    msg.setSource(9210U);
    msg.setSourceEntity(43U);
    msg.setDestination(38177U);
    msg.setDestinationEntity(209U);
    msg.op = 41U;
    msg.speed_min = 0.597863510865;
    msg.speed_max = 0.280335264083;
    msg.long_accel = 0.40946179795;
    msg.alt_max_msl = 0.840363019741;
    msg.dive_fraction_max = 0.306944516374;
    msg.climb_fraction_max = 0.426123855313;
    msg.bank_max = 0.282779122901;
    msg.p_max = 0.175808557468;
    msg.pitch_min = 0.785211935231;
    msg.pitch_max = 0.573275622394;
    msg.q_max = 0.292704501083;
    msg.g_min = 0.886986335171;
    msg.g_max = 0.77869486415;
    msg.g_lat_max = 0.849775166456;
    msg.rpm_min = 0.590789096865;
    msg.rpm_max = 0.996662909453;
    msg.rpm_rate_max = 0.803938750794;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.0397235851275);
    msg.setSource(20245U);
    msg.setSourceEntity(253U);
    msg.setDestination(60364U);
    msg.setDestinationEntity(104U);
    msg.op = 189U;
    msg.speed_min = 0.133916093583;
    msg.speed_max = 0.744369501581;
    msg.long_accel = 0.810374893885;
    msg.alt_max_msl = 0.366954085302;
    msg.dive_fraction_max = 0.665023051912;
    msg.climb_fraction_max = 0.514598395271;
    msg.bank_max = 0.832053231359;
    msg.p_max = 0.209326480236;
    msg.pitch_min = 0.844911543875;
    msg.pitch_max = 0.0302690766949;
    msg.q_max = 0.0232334325295;
    msg.g_min = 0.563088535536;
    msg.g_max = 0.136182820202;
    msg.g_lat_max = 0.253980784198;
    msg.rpm_min = 0.138365012571;
    msg.rpm_max = 0.71293273101;
    msg.rpm_rate_max = 0.0975586212827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.835516368915);
    msg.setSource(22863U);
    msg.setSourceEntity(182U);
    msg.setDestination(44442U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.105373248842;
    msg.lon = 0.305835074609;
    msg.height = 0.778758490686;
    msg.x = 0.88382611858;
    msg.y = 0.223323628328;
    msg.z = 0.281680245089;
    msg.phi = 0.903722069113;
    msg.theta = 0.984797969169;
    msg.psi = 0.264868772154;
    msg.u = 0.20015320013;
    msg.v = 0.0313899310157;
    msg.w = 0.0491322569412;
    msg.p = 0.183400872615;
    msg.q = 0.0296982759037;
    msg.r = 0.522979888919;
    msg.svx = 0.0137508355434;
    msg.svy = 0.466023652962;
    msg.svz = 0.123834913617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.556469795667);
    msg.setSource(43309U);
    msg.setSourceEntity(18U);
    msg.setDestination(13322U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.421620233501;
    msg.lon = 0.218797520013;
    msg.height = 0.38078606883;
    msg.x = 0.43174886685;
    msg.y = 0.889237174971;
    msg.z = 0.0267443760737;
    msg.phi = 0.525124660439;
    msg.theta = 0.965410580077;
    msg.psi = 0.153982782804;
    msg.u = 0.528349656239;
    msg.v = 0.418536461782;
    msg.w = 0.527350915947;
    msg.p = 0.119575612193;
    msg.q = 0.181873057628;
    msg.r = 0.280007932735;
    msg.svx = 0.801795764295;
    msg.svy = 0.779357398408;
    msg.svz = 0.117963862516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.610449103298);
    msg.setSource(53455U);
    msg.setSourceEntity(130U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.151482787743;
    msg.lon = 0.853937028892;
    msg.height = 0.122092169764;
    msg.x = 0.311358663974;
    msg.y = 0.22664861338;
    msg.z = 0.707889953259;
    msg.phi = 0.777015358052;
    msg.theta = 0.209372567977;
    msg.psi = 0.950497311998;
    msg.u = 0.884856126055;
    msg.v = 0.979981084451;
    msg.w = 0.735986590139;
    msg.p = 0.312231769685;
    msg.q = 0.229949296331;
    msg.r = 0.831587677027;
    msg.svx = 0.740060317528;
    msg.svy = 0.396662917289;
    msg.svz = 0.193583103866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.939288460233);
    msg.setSource(21313U);
    msg.setSourceEntity(194U);
    msg.setDestination(38586U);
    msg.setDestinationEntity(229U);
    msg.op = 31U;
    msg.entities.assign("QVQQLBWBIYEHZVNTBXANMGKRHCANSFZLCLYSWWYADYTIANRUFFUMQSSUGHPCMRDSORVKGPFKLYIFZPJMNVRGJYNPLHISZQXUKJPGUIKSNMEMCDXES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.267484488316);
    msg.setSource(64558U);
    msg.setSourceEntity(65U);
    msg.setDestination(63889U);
    msg.setDestinationEntity(113U);
    msg.op = 160U;
    msg.entities.assign("RYICUDEINOUUVKJMLFPEDGICJBVUTVGOFYGYKTFUIRFSJXMHMVJEXTTYESXBRTVQVVYBBEKRSXJCXUNNGKMQUZNQCFLPGKZCADOLOVDDYHWGPLNOIPXTKSRHASHWBPLWPJAMZWWAEQYSIRZAFQKLODBBZKHINJSHWVYORMGSRSOZMWZXMHLKSTAPBLDGIEDCHPCZFIYIENCJCPJLFNAQNUETEFZLAWFBMMWBUCDZYHQRAGATGHVKQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.993948751332);
    msg.setSource(13141U);
    msg.setSourceEntity(54U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(247U);
    msg.op = 136U;
    msg.entities.assign("CRMKDPWOEVEKKXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.305133148591);
    msg.setSource(58721U);
    msg.setSourceEntity(233U);
    msg.setDestination(46914U);
    msg.setDestinationEntity(223U);
    msg.type = 219U;
    msg.speed = 5951U;
    const char tmp_msg_0[] = {-70, 86, 3, 10, -93, 50, -28, 33, 2, -104, 75, -42, 19, 44, 42, -126, 0, 49, 15, 69, -121, 91, -95, -3, -50, 70, 36, -89, 15, -26, -24, 84, -57, -68, -54, -60, 12, 80, 14, 104, -127, -104, 81, 56, -11, -83, 55, 101, -42, 81, -30, -119, 120, -127, -19, -101, 0, -84, -40, -81, -11, -104, -75, -31, -123, -121, 89, 102, 2, 86, -61, 118, -47, -87, -38, -74, 26, 66, 93, -74, 93, 50, -62, 25, 76, 70, 70, 108, 25, -16, -72, 34, 124, -61, -74, 117, -10, -78, -37, -68, -50, -100, -35, -104, 92, 89, 100, 78, 115, -53, -70, -67, 93, -44, 16, -71, 57, 23, -54, -32, 33, -103, 125, -70, 53, 106, -61, -78, -93, 15, -122, -99, 2, 86, -63, -53, -104, -72, 116, 72, 31, 56, -27, -105, -45, -20, -122, 30, -65, -102, -118, -71, 28, -85, 38, -84, 32, 66, -6, -72, -43, -19, -14, 72, -73, 38, 126, -4, -16, -14, 79, 69, -123, 86, 8, -64, 89, 120, 48, 28, 120, 112, 15, 63, 61, 22, 85, -32, 111, 45, -48, 48, 1, 0, -42, 118, 56, 4, -43, 68, 52, 10, -64, -31, 69, 14, -105, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.522862402984);
    msg.setSource(17609U);
    msg.setSourceEntity(167U);
    msg.setDestination(4415U);
    msg.setDestinationEntity(215U);
    msg.type = 0U;
    msg.speed = 32478U;
    const char tmp_msg_0[] = {27, -64, 31, -38, 70, 97, -115, 107, -97, -10, -92, -57, -9, -87, -124, 65, 35, 118, 113, -112, 123, 21, -108, -102, 103, 15, -84, 39, 60, 65, 55, 62, 75, 14, -76, 70, 56, 77, -124, -65, -62, 6, -21, 101, -10, 18, 35, -20, 23, -33, 52, -120, -111, -48, 15, -80, 76, 41, -90, 92, 14, -98, -97, -71, 66, -102, -111, 62, 74, 10, 109, -107, -120, -47, -62, -86, 34, -75, 37, 49, 74, -61, -99, -109, 77, -21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.167330592988);
    msg.setSource(23073U);
    msg.setSourceEntity(143U);
    msg.setDestination(41093U);
    msg.setDestinationEntity(14U);
    msg.type = 173U;
    msg.speed = 58479U;
    const char tmp_msg_0[] = {-12, -35, 116, 76, -102, -82, 117, -11, -46, 33, -57, -18, 16, -14, 56, -68, -110, -23, 71, -64, -20, 4, -5, 49, 95, 104, 112, 119, -15, 72, -123, 59, -8, -1, -68, -33, 15, 11, -110, 125, 43, 48, 8, -19, 37, 65, 39, -47, 104, 79, 94, 12, 70, 20, 60, -116, 8, -99, -97, -82, -120, 93, -7, -18, -64, -30, 2, 40, -75, -50, 68, 109, -58, 109, 89, -29, 29, 119, -48, 83, -90, -111, -46, 77, 98, -115, 76, 11, 25, -62, -31, 60, -80, 20, -36, -101, -70, -24, 3, 21, -40, -24, 29, -19, 79, -118, -103, 89, -102, 74, 32, 99, -66, -60, 13, -51, 70, -73, -12, 113, -72, -35, -88, -124, 10, -71, -65, -99, 24, 108, -19, 52, -107, 122, -121, -38, 13, -66, -123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.709592642137);
    msg.setSource(15829U);
    msg.setSourceEntity(66U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(210U);
    msg.op = 251U;
    msg.tas2acc_pgain = 0.664283479604;
    msg.bank2p_pgain = 0.7029957405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.558703573499);
    msg.setSource(33223U);
    msg.setSourceEntity(169U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(247U);
    msg.op = 235U;
    msg.tas2acc_pgain = 0.165736846674;
    msg.bank2p_pgain = 0.408568431643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.902250707225);
    msg.setSource(41179U);
    msg.setSourceEntity(221U);
    msg.setDestination(54539U);
    msg.setDestinationEntity(124U);
    msg.op = 37U;
    msg.tas2acc_pgain = 0.680187847734;
    msg.bank2p_pgain = 0.107538674283;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.854814265152);
    msg.setSource(43532U);
    msg.setSourceEntity(71U);
    msg.setDestination(2965U);
    msg.setDestinationEntity(232U);
    msg.available = 1254641068U;
    msg.value = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.206706249018);
    msg.setSource(46869U);
    msg.setSourceEntity(186U);
    msg.setDestination(26058U);
    msg.setDestinationEntity(91U);
    msg.available = 1323557512U;
    msg.value = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.269358292565);
    msg.setSource(56191U);
    msg.setSourceEntity(123U);
    msg.setDestination(52037U);
    msg.setDestinationEntity(77U);
    msg.available = 280226875U;
    msg.value = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.0543011084374);
    msg.setSource(57648U);
    msg.setSourceEntity(248U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(145U);
    msg.op = 97U;
    msg.snapshot.assign("KMPLPQCHRQNZRWUH");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 16865U;
    tmp_msg_0.flags = 61U;
    tmp_msg_0.lat = 0.309111049718;
    tmp_msg_0.lon = 0.447934095761;
    tmp_msg_0.start_z = 0.217424482946;
    tmp_msg_0.start_z_units = 1U;
    tmp_msg_0.end_z = 0.528051700967;
    tmp_msg_0.end_z_units = 99U;
    tmp_msg_0.radius = 0.200945521507;
    tmp_msg_0.speed = 0.648481846158;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.custom.assign("OLYRNCSWAXADYYAEPZYASMPDAKFTMQZIXEOOJHBNKWQMGPQLJSKGMGBTHSOFVICSVUMDJUUHKUCZHROLNFGJHWPSQZAWLNBRKIIQXZH");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.746348932367);
    msg.setSource(32635U);
    msg.setSourceEntity(189U);
    msg.setDestination(57705U);
    msg.setDestinationEntity(158U);
    msg.op = 170U;
    msg.snapshot.assign("EDBNMEBBANLLNHMLPNUUSYGRSAWBKNHQHODSZDXWTCGZTJGFEHJHKNSTTTQQZXPDUBQPTHTLWNJSFWYAOYXPFKIQOLLPBOEZIGDYZCMEQFDQUCXDSYYCIJLHEM");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 160U;
    tmp_msg_0.entities.assign("LKMXKFCFRZCVPZJRPRWSFTEXELZNSRYMIQKLUXFXDSUMGKHZIKGSUYTJVQHAAQLHCGGWDNWWUEBVQPVGBJKEVOLBTUQQPWPWBV");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.297569799502);
    msg.setSource(4136U);
    msg.setSourceEntity(165U);
    msg.setDestination(4569U);
    msg.setDestinationEntity(233U);
    msg.op = 46U;
    msg.snapshot.assign("LWVUDHOWCEKGRHYUZYUIPAXOIAGMBTVAJWCKSOAHAFAXYZAQROVBPZZMZGIKNGFPRLZSIPDNRFINVMNIYGFPVXCEOFLXSDULHUGCHJUQTDESFKSJVZMBFYLTLCETBAQHXWSTLOKCVJATDQRMCLHZNEFGQPCUJTSPKBNYDRXHBEKFMQTTJYHIIOSXRUYEQNPMXMQSRJEORPNIVWFWMQULEKCUCT");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.809258774839;
    tmp_msg_0.reason = 155U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.0987028960314);
    msg.setSource(33081U);
    msg.setSourceEntity(161U);
    msg.setDestination(51416U);
    msg.setDestinationEntity(22U);
    msg.op = 59U;
    msg.name.assign("KCMFVHJRNENYZFDESQRBLBPNJNMSUHGIFVXGTPAOLPELKOYZFJNYLXLEQLTQOREVFDXTDIIKXUBUQYCLCBTPWBQTDLCPPHDYFGZLWDENVROJXIPSYSYVRPOMNVHWQTXZRMKACKXQHACZOGOWGGDVWFJHTWMVZQAHFEYIGJUBEMAAWQMDIKZOZEMWCIJNUXAAIEMVKCTBUGSWIHKGLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.877414829697);
    msg.setSource(39694U);
    msg.setSourceEntity(22U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(208U);
    msg.op = 187U;
    msg.name.assign("YUEZAIOFCCKTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.714528755164);
    msg.setSource(8859U);
    msg.setSourceEntity(104U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(26U);
    msg.op = 46U;
    msg.name.assign("NJFEQRAYSELMGJZAVSOCBOGPLIPSHZQTIMUHVVTPABKOQRWXWRSDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.152102319384);
    msg.setSource(33553U);
    msg.setSourceEntity(107U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(12U);
    msg.type = 131U;
    msg.htime = 0.612160932905;
    msg.context.assign("NFETUDYAWXRSMMCKEYHVFIOFLLWPJPYTBSVYRXKYGMZGBRNOMLBVQGOFVALMUSDISENBOZBEEYUPJVHHMQJGTZGSPAOLMUKOQRCDYHKAPNDMHDYTWEEFLGQCFSNBKRHKCZDOQJXIF");
    msg.text.assign("JDNNOVOHUAVGJYECXGVLIXJYITSSYTPRWBBPFWIZKDIHWSMARFVKKTAZBOYUMSTJQCPLQRAQCYXEJTKWFDLHKPZKCTKRAKSLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.949249939356);
    msg.setSource(46790U);
    msg.setSourceEntity(72U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(225U);
    msg.type = 167U;
    msg.htime = 0.300187959684;
    msg.context.assign("GERYZGEDJGPBTQXFQRLHGAAKDGVJDSIIHCRORZUFFYAWXGITBTQNNZEDWVKLZCQUNSVUXIMVMSDPBLXNTYZSFHNBPQRYFJKTXFMKJUOEWAMFWLACSJCTQLBTPWDGNYISYSWTYHQKHUCWHPMYRCBKUKEXGWOFLYCKAHPBRUHVO");
    msg.text.assign("ISRPNYXDRAIFAJAPVWTIZKKVNOQDGPWUQTNUUUQMDXYRNMOUYYYJEWSVOKXSHSDJPOEWFAXBLILZIKSSMKDOJFFTJRZXFUWJXLMFGEMNABTMKWHVZETBWJANSPYOCIHEDUMXAYBYUZBEVYBLRQLZHJGECNXETRHHHKNQQLVRLCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.95652081803);
    msg.setSource(63919U);
    msg.setSourceEntity(236U);
    msg.setDestination(23402U);
    msg.setDestinationEntity(245U);
    msg.type = 180U;
    msg.htime = 0.200816222453;
    msg.context.assign("VDUJOESPSVCOFIMFOFZRGXKNYQWXPTGYVLXRKMXBFUWWNGAJQRWCGBMHNKUNKMJNDCFBFITGTIORUHHQJIECYUQYZHPPOQZLIEJTDRDXLUUMSVJSEFEBAQASRTBDADRCKJURJHHRKLDRMLDSWGCSPKOZLNIZAALJNSZBNDKIXOVQZVGKTXAHYGOVYUFB");
    msg.text.assign("POUFCKMRASFKFJVAXQKARMUOEBVPDHYINJQVDIRQCZPJZUIHAOAVOWBZMKWYWMNESYAXRLQMEAKTWIQNWTBDRIFOIWZALUSLUDETARFUYFJCLOGTBQYEXFDJUOFHVLHBBKGLBVSRWGMRFHTUGCCSBEMPEHADBQZOONTQXKTVUJQQZJDVCPILKLEPP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.726146895533);
    msg.setSource(37081U);
    msg.setSourceEntity(154U);
    msg.setDestination(28699U);
    msg.setDestinationEntity(8U);
    msg.command = 60U;
    msg.htime = 0.592050569662;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 247U;
    tmp_msg_0.htime = 0.956050069104;
    tmp_msg_0.context.assign("CZYHRFZRAXOKHBXLEYKCDMXVRCICGYOFNSYVXWOPMVVITBFUJGMFSXUFWEJLAVSLKBVTAOCNBDRYJDWACEMRNKSNBSOJFFFJKTZBBMJWBEUHPEIXKAYATUT");
    tmp_msg_0.text.assign("AXQBLEHNSBTNIVVTLURPWHXXZKVPKVUWDPFJUQXHZMLAWQKIACNXMDDRNINCEPGUMCQKFGQGSTATZWZIBOIHSSLREFWSLBANYQSXTSEPIOJRKVCGBHLJCKTHXRVDHZSBWIRFRUXMREYNELGZRAOWLDRMFSCEZGPMJDJONOUE");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.544875802291);
    msg.setSource(62430U);
    msg.setSourceEntity(188U);
    msg.setDestination(11105U);
    msg.setDestinationEntity(132U);
    msg.command = 68U;
    msg.htime = 0.578836564591;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 57U;
    tmp_msg_0.htime = 0.0929941148257;
    tmp_msg_0.context.assign("RNKQFMNVWYTEUKPWGLDMELDRNAXCTHJRAFYQHIREOUMELCHZOCCUECQDLNLRIYLGCHXBMBOQLDPSUAQDHKAXCFKXWYGOIISFETZCNSGWAVOGGGFYOVEASJWBZRTSXDUZVXVHTPBVPZEKYDXAQFPEDPWLPBKSJBWJYVTTVMNFUIJXZAZIBVXKWTHQGLACMJKBRKQISWNTIBMTJWNUOGPYHFDJRMQMHERSDRIXYBAIHONUZSZNQZFCJLKGPMU");
    tmp_msg_0.text.assign("FYXODYICJXAFIUBYWTXLUNGABBQIJGNLLDDMRWYWMQRXFNALKRWNIYEJCZGSQUSUHJVCWJDLXTEQBJRXPSPIVDJASESUBKLNUYGQQOWZRJAMHIEHSHQBNFMVJOQMGMOXTKEVCXVVHPDPWFDYZNTIGZOATHFPTNGQLSKPCHETAMUZUTFVRNHMJQCZZYKMEGTCKVXRSBPPCKOZOPHELBYVBINADUOSZFURHACTOFDWKVPZYDIBI");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.221143536351);
    msg.setSource(10291U);
    msg.setSourceEntity(178U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(0U);
    msg.command = 226U;
    msg.htime = 0.745416441161;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 93U;
    tmp_msg_0.htime = 0.998631554803;
    tmp_msg_0.context.assign("OIUCGNPSGADVWMCMDXZVTLNIUNAGSLUXHDXMVOAALIPP");
    tmp_msg_0.text.assign("YPIPKEWICHZHEKUCQIKBMGUDSPBEBFJSOQJTDTOFFNOLEWXTGSBPZLZWWMVAUDVZFKDZ");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.201317127359);
    msg.setSource(19186U);
    msg.setSourceEntity(186U);
    msg.setDestination(45088U);
    msg.setDestinationEntity(187U);
    msg.op = 237U;
    msg.file.assign("EMZXLFKMVGZPYGIXNEJRZQTIMCIWSAQPODSKHRSVDFDFIWGGJMYNCEEAFZQYWXVDTOUARWHSTINVXSZGFQBHSORBKBLJVDMWGOTYIAMLKNZOXCBQELHUVOLTUIEOCJGLJNXKZUFJMVQYUEPMYCNYHAUTMNKHOJDJCRDTFWPEKCBBUURYKNWISLIWHSAQVPNRHBSUCUGLQGAWWHQNPZLKARPVAFPPXBFXYQADHPGC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.494256899304);
    msg.setSource(29880U);
    msg.setSourceEntity(19U);
    msg.setDestination(44242U);
    msg.setDestinationEntity(70U);
    msg.op = 186U;
    msg.file.assign("KOZSXOYNGUYBJAILVGYMXFGRDVHHCOWQEXVRBIGLPHHKJESLNEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.303176532691);
    msg.setSource(43744U);
    msg.setSourceEntity(244U);
    msg.setDestination(54907U);
    msg.setDestinationEntity(141U);
    msg.op = 40U;
    msg.file.assign("CNMVWIGMZOYWBVAFPKJHIFQOSCMHKWQECJXPLPEWQWFGGHSKCAXRMEYLREZJQMFTJQFAPBCXAQXCGCIHYGYIYKBOXEEUSHDCVBTSOWHOLTRKODOPVJIBJVFTFTTGJLQAYXMAOHLEUDVYUQSEKTLNSKQRLNDSHKSHYASWOPRQCSGXXEFABZPMLVJXZDUKBKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.135227179146);
    msg.setSource(39198U);
    msg.setSourceEntity(8U);
    msg.setDestination(59768U);
    msg.setDestinationEntity(188U);
    msg.op = 46U;
    msg.clock = 0.11641509287;
    msg.tz = 63;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.0671756908652);
    msg.setSource(29054U);
    msg.setSourceEntity(26U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(29U);
    msg.op = 87U;
    msg.clock = 0.959988390327;
    msg.tz = 89;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.105920376075);
    msg.setSource(27218U);
    msg.setSourceEntity(112U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(180U);
    msg.op = 113U;
    msg.clock = 0.75178499137;
    msg.tz = 120;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.224966962778);
    msg.setSource(26720U);
    msg.setSourceEntity(184U);
    msg.setDestination(56590U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.988819788044);
    msg.setSource(22120U);
    msg.setSourceEntity(60U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(209U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.73444495819);
    msg.setSource(28240U);
    msg.setSourceEntity(63U);
    msg.setDestination(52959U);
    msg.setDestinationEntity(114U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.519474297242);
    msg.setSource(41430U);
    msg.setSourceEntity(84U);
    msg.setDestination(12376U);
    msg.setDestinationEntity(90U);
    msg.sys_name.assign("JDDFLLMLHYVAVYHDUISHAHVJEFP");
    msg.sys_type = 207U;
    msg.owner = 10688U;
    msg.lat = 0.264565577121;
    msg.lon = 0.372906986976;
    msg.height = 0.901377104831;
    msg.services.assign("XZLVROOTMWWIIFTHEPVEPEMFMOYZMFSSDULCONTYIEJYQRSUUIXSNWLGGRUGNJWSGDMKKRVXKDTYTQRTXQOJZZWQQPMYMARJPPJYWROKESKLUQXDFCYKHROAOUIDZTVIAABOJFUNTPWKGAHVGCZOWANJNLLFYVHHXPYHTVCZSUBBXLDXABNFCHKEIFSDLBNNKXKCGCBLHVAHPACQTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.467579999907);
    msg.setSource(2447U);
    msg.setSourceEntity(177U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(84U);
    msg.sys_name.assign("GVOGOIPMBJFTWCFHDAJFIYEWZUPYIBQOSDTOBYWRHEWQEHZDMTGFRXVHYDLZSMBNVNZIWYKCMEFSMIUZPPXENWHCHIXVBAPRGRXLTCIGALCQXYIRJCFKQOUMZBJADFKARTOQEKKTPMUGZWCEMKQJVVLAKDTJWFUAKLGQBBOHIROURLWTNJINYSUUSASOTPYXVFBKVLHLHJV");
    msg.sys_type = 102U;
    msg.owner = 886U;
    msg.lat = 0.549407922595;
    msg.lon = 0.232625624664;
    msg.height = 0.794436135839;
    msg.services.assign("UREAQRNILCZKTFQIQGRHAMNBRXUMCGVVOXKFFPEETLIGIJCXQNTDUHSTCBUFFWKOOLPMWYKWBENYVJYANTPFTBFHOBDVOWLPESIALYYDURXSPKSOQOOWBFMYHCYCNCRSPVKSURKGUAHMGAXYSNNOQNRXHZJGANLFBRLJDTWCVAUZADDXJQSSZGCJHJVLLMGCMIAEFRIZKHYQUIEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.531630527914);
    msg.setSource(42036U);
    msg.setSourceEntity(182U);
    msg.setDestination(6033U);
    msg.setDestinationEntity(26U);
    msg.sys_name.assign("RINVEAKMZQSHKFCRABCGSLSSDRCQKNBNCHJPPEZUPZMVFLVSOTYENEBFTDLAVGECEWGYJXLRDNQCIEOCVINVGKHAAGOYIFTEURLAPQHHWXZCUKUMEUXUTLRFBIZAQTWNOYMIANGUDWJBGMHDNPMHKUVPBPVZWYDTOZQHGTFOBFMWMELTQJVKGXGSILBSWJISSYSXWIVBJAYZAYKJHXFORD");
    msg.sys_type = 123U;
    msg.owner = 37580U;
    msg.lat = 0.614455930928;
    msg.lon = 0.780545378992;
    msg.height = 0.117892660011;
    msg.services.assign("QVIWNFEMIHGVGUINAQJHVXWDNYNAEYXVKDQERDRMOLUKDRYFMDZJAQUWBMEOGKTVHUFCLZFRCEBSISPKJIFTGJBMLCYCFRGYGRRCDXXQWZELVXPDVRANKCKAVQDHEOPYEJZIHPPWZFBNLWLOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.325303541282);
    msg.setSource(37791U);
    msg.setSourceEntity(130U);
    msg.setDestination(24412U);
    msg.setDestinationEntity(148U);
    msg.service.assign("NQQNSLCKPPEJFHEFOGVTEMQHRYAMPAYGSASUJDDSAZVTFKUOFHRWEWJXAQZCRMNYGXZDHPRGBCRTYTGSEUUVXOGHANNQKXGXQORIISWZLULMPPWXPEMTOHMLHZNFVOLWADVLARZUXHVYJSLVVIWKYGMCENPCAOUYJQIDBPQVCHBJCMJOPTORDKDCEKSISSVLWGIWJKU");
    msg.service_type = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.605100188935);
    msg.setSource(34792U);
    msg.setSourceEntity(178U);
    msg.setDestination(20435U);
    msg.setDestinationEntity(34U);
    msg.service.assign("JPTYJHJGXKPQAWOWASEGSBEEMAMBFOLJWUNHMARGUUEXQISVWQBLPSTZFOBQEOWVEQHXELSYPKZJZXUPIPGTZDFIJHEWVKCNKZTFAVGVIXHXREFDJUFPRJOANYTNKXWDYDDLZNLFCCRGYOUMNLFWVJA");
    msg.service_type = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.179887778071);
    msg.setSource(31758U);
    msg.setSourceEntity(118U);
    msg.setDestination(20686U);
    msg.setDestinationEntity(44U);
    msg.service.assign("QZPPCDQUHHKBAKXFGYHZEWCORCYPHUYQRDIEGTCKVRAMWFKTFDJLCDGYNQXSRUEHBVPZECRXZBIBMZZFOZLIJXUGMNFOWAVRXPJDGPDAFWTNCTSHYPVLYAIJXTMWTTHSITMPMEGHLSVIUADQAULLGNLSQMDYIBJCLFDGQEHBLBOWEUKQDYRJSROMWG");
    msg.service_type = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.718925170624);
    msg.setSource(659U);
    msg.setSourceEntity(213U);
    msg.setDestination(47844U);
    msg.setDestinationEntity(32U);
    msg.value = 0.957303762998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.479407860053);
    msg.setSource(37666U);
    msg.setSourceEntity(179U);
    msg.setDestination(39347U);
    msg.setDestinationEntity(0U);
    msg.value = 0.057893300822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.678945446968);
    msg.setSource(48423U);
    msg.setSourceEntity(116U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(86U);
    msg.value = 0.293920496972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.201038538485);
    msg.setSource(40389U);
    msg.setSourceEntity(110U);
    msg.setDestination(16278U);
    msg.setDestinationEntity(3U);
    msg.value = 0.557835806813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.661150882103);
    msg.setSource(62264U);
    msg.setSourceEntity(89U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(235U);
    msg.value = 0.771080573788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.992560069415);
    msg.setSource(10322U);
    msg.setSourceEntity(169U);
    msg.setDestination(38996U);
    msg.setDestinationEntity(108U);
    msg.value = 0.168203909665;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.195562502376);
    msg.setSource(30982U);
    msg.setSourceEntity(194U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(70U);
    msg.value = 2.636185047e-05;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.520336522958);
    msg.setSource(35068U);
    msg.setSourceEntity(67U);
    msg.setDestination(57531U);
    msg.setDestinationEntity(102U);
    msg.value = 0.803953069477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.108956020214);
    msg.setSource(52800U);
    msg.setSourceEntity(64U);
    msg.setDestination(3506U);
    msg.setDestinationEntity(174U);
    msg.value = 0.183510799454;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.435332671335);
    msg.setSource(64850U);
    msg.setSourceEntity(249U);
    msg.setDestination(34859U);
    msg.setDestinationEntity(163U);
    msg.number.assign("WFIBCONLSWVGTVOKGZHNZUTVDMJEHQTKQOUKFBIDZQDWFYVYYNDFEUZLFIAPHSKGERAMUAGSUFYJQBRPNSMOAXSPBELDKVZEBDMVKWOGCXVSEOMUWHWQSJRIVXVNHBX");
    msg.timeout = 51031U;
    msg.contents.assign("FUCOGNXDYZSRLWWNZSFOPHKVQOBRTBABQUEFPAGKPBEXNNHDGOAQKRCZMNFFCLZHKBVTOHTWHVVXIGPSUJNDWKCXOMAATPPRCAEEAFKKLJIIXIWYNMDYWZSYEMHNLFCYFOVHUTBYJEYQAVPSJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.404336178096);
    msg.setSource(32374U);
    msg.setSourceEntity(146U);
    msg.setDestination(18648U);
    msg.setDestinationEntity(231U);
    msg.number.assign("GXKJJSIDNIMHCRDHNMNYCPTVLFHOVAWCOOJXYBIVTFAMVMPMGXSHYZZRIPEQLBKSXZBAPIWIUQTIQIQQATKSEJVGCTXUXJFTUECUVFGUNWIHBGKWZOLKENLGCRSROJRZCNWLHYFRCCBXCKYQYRWPJKOMNSPFODAGBTUHZJLEYSZWGTZDHZPNFPWQVHDEFHBPMAEFKGYUSADXVYWOTAEDVLNUELAERSOQWJNJMOLYGDVRPTMBSBDF");
    msg.timeout = 47476U;
    msg.contents.assign("BWHPROATCXRQLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.144965721523);
    msg.setSource(12248U);
    msg.setSourceEntity(157U);
    msg.setDestination(37719U);
    msg.setDestinationEntity(167U);
    msg.number.assign("CSADUCOQCUJCZFOSPWDPKPSYTHOBZFMVEMYLQGCXQZTDXQKWOOEQEDHECLGOCNJHMQJKRVXLBWYJDRZLUIVEFZSSVHOXGMW");
    msg.timeout = 8443U;
    msg.contents.assign("LSZZOEYFDHAACQGGZUCOYBFKUCRKITDSOMOPYYQUTVHAWPHXXERRVSRUIOULOIJMTZMLKBBGCLLNDSBPXGZVWUHXIWAKPEQHLFFXVRYVSTMJMYDBBNDDCZKCAMMYGHBITTQWWFJIUQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.318321879158);
    msg.setSource(16645U);
    msg.setSourceEntity(126U);
    msg.setDestination(61402U);
    msg.setDestinationEntity(49U);
    msg.seq = 489796766U;
    msg.destination.assign("JUCCRYPILIJFXEWGWYSAIYDMDSCLQXPVKWFTFRRHPSXIGMULSQRQHOUNEPGZPSDRPUJWIALXUKXZCNQVCJIOLETRUZSDFFAFLZGGXXMDIEBFXAHDVHZYEMSFNTTCDVZNRSRVTAIFYPGNIUOCXYBLGVDLBOHQMOV");
    msg.timeout = 61337U;
    const char tmp_msg_0[] = {31, 45, 102, 117, 52, -65, 82, -85, -119, -22, -7, 35, -46, -66, -10, 103, 13, -97, 84, 100, 72, 73, 87, 48, 47, 42, -4, -16, 11, -124, 120, -27, -89, -9, -126, -113, -82, -15, 95, 100, -102, 103, -71, -109, -63, 53, 122, -49, -41, 33, -5, 119, -10, 19, 21, -83, 105, 93, -90, 16, 112, 11, -68, 80, -28, -28, 103, -117, 26, -64, -17, 20, -23, 27, -28, 74, -116, -42, -120, -67, -61, -35, 97, 108, 58, -34, -114, -42, -74, -58, 64, 26, 125, -5, -42, -22, -2, 111, -107, 71, -5, 109, -91, -31, 105, -94, 121, 124, -113, 114, 115, -36, 114, 85, 114, 107, -4, 79, -101, -69, 53, 73, 94, 72, -123, -79, -3, -4, 23, -63, 33, 40, 73, 60, 108, 24, -51, -31, -101, 42, -86, 20, 46, 25, -60, -82, -77, 34, 96, 34, 115, -10, 8, 58, -51, -18, 81, 77, -88, -47, -68, -64, 50, 49, 114, 124, 16, -3, 117, 125, -119, 79, 122, 107, -87, -10, 22, 0, 3, 98, -46, 17, -72, 110, -110, -50, 73, -19, -20, 37, -125, 95, -71, -83, -95, -83, 11, -99, -44, 63, -90, 10};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.65852387068);
    msg.setSource(41504U);
    msg.setSourceEntity(120U);
    msg.setDestination(1561U);
    msg.setDestinationEntity(107U);
    msg.seq = 1672868097U;
    msg.destination.assign("ZSTLLZTMCCBNXFHAGUZFYQUCMRZDZIKAMBFJOSJBUPRIJRHEZ");
    msg.timeout = 64478U;
    const char tmp_msg_0[] = {52, 126, -72, -104, 89, -68, 80, -13, -44, 25, 60, 24, 116, -40, 51, 28, 115, 120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.723155156424);
    msg.setSource(1872U);
    msg.setSourceEntity(225U);
    msg.setDestination(34648U);
    msg.setDestinationEntity(52U);
    msg.seq = 1842942248U;
    msg.destination.assign("QOWAYYUMHLKRCVCGFARFNFYPSCPMTGMATKGPQMJEVSSKODSJXDRCKRCPCGTTKJIIAREVLXWNHNEFQINGUHASTQLFWXWLBXFYHZUYMWNZQADLULYVEUHIZSNHGJUWZQQYDIDHJDDKMXONSCAFTRLWPVREGNJVOBIOIKBDXOJMYSRCBOLUTAHWBGUEWCYFJAJQFIKBCNZZXBMOGMDAVOWRPVSUTFHBHZJXXETERUVY");
    msg.timeout = 8080U;
    const char tmp_msg_0[] = {95, -70, -4, 2, 17, 115, -47, -74, -87, 117, -102, 47, -51, -80, 52, -62, -3, -87, -60, 64, -15, 30, 65, 22, -32, -35, 111, -64, -38, -43, 75, -52, 122, 110, -80, 69, -95, -102, -102, -10, 65, 59, 33, -12, 80, 58, 36, 34, 106, 58, 109, 26, 17, 74, 104, -50, -84, 43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.217534713585);
    msg.setSource(65306U);
    msg.setSourceEntity(60U);
    msg.setDestination(16370U);
    msg.setDestinationEntity(42U);
    msg.source.assign("AMGRAAZOQJTXRWZBLKWIDZOCXYKOYCGLCHPVXRMVQTCLTICPYYJPEZIZVFQSVGSHQLFTITDJKDUCXZLYFZRHUHIRXNOAWFEMPDZHNRDWVWSGNGJOUXRHMHPFAYMRSBUAITAVFVAHNEBCKPTETWKCOIMYLENTCMNWBX");
    const char tmp_msg_0[] = {116, -92, -77, 2, 39, -120, -81, 102, 10, 96, 58, 4, 54, -43, -34, 107, -126, -40, -123, -117, -46, 126, 97, 45, 93, -128, 97, -15, -120, 67, 87, -59, -42, 39, -110, 26, 100, 100, 25, 50, 10, -48, 100, 79, 76, 31, 32, -11, -109, -122, -75, 88, 21, -50, -125, 34, 11, 69, 82, 61, -106, 109, -4, 95, 71, -90, 1, 126, -59, -23, -67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.56606609713);
    msg.setSource(62429U);
    msg.setSourceEntity(224U);
    msg.setDestination(163U);
    msg.setDestinationEntity(58U);
    msg.source.assign("HSQFBLCREHQQNRNAXTLQRIVCRGGRYDLVAZBYUALVLIOYOFSKMCTFQKEAZAZEWGNFYTDKWGNAHHKBNGSBHTKRJJYKAEEUPHCGCXGOPDVOJXIQPPWCVMNMFMSMQRTWSZCIVIBOZMHUTRJPLTZDYGIDSBZAEZQWMJXYBCSZGUJPEDEWWFUJHVGUZOEKIPXCJYFUNRXFMFUMTRJTBXPPQIPWYDLKAN");
    const char tmp_msg_0[] = {-79, -106, -3, -60, -43, -83, 69, 32, 107, -44, -32, 105, -119, 73, 75, 109, -36, 86, -99, -23, 76, -110, -112, 107, 111, 84, 1, -12, 0, -33, 112, -17, 1, 5, -62, -37, 111, -1, -2, -43, 97, -67, 76, 55, -47, 106, 47, 38, 91, -127, -3, -9, -43, 35, -106, -94, -125, 113, 53, 57, 25, 91, -61, -108, -9, -34, -15, 73, 115, -46, -7, -23, 35, -34, -78, 56, -124, 31, -55, -15, 67, 11, -117, 48, 13, 1, 79, -95, 23, 117, -21, 109, -108, 61, -12, -41, -21, -40, -7, 50, -20, 80, -92, 10, -73, 77, 94, -82, -119, 95, 109, -122, -21, 1, -86, -18, -46, -83, -110, -53, -122, 38, 104, -116, -77, 88, -76, -116, -123, -11, 99, 112, 112, 47, -49, -109, -75, -33, -66, 99, -96, 61, 69, 107, -36, -33, -111, -72, -71, -34, -98, -81, 3, 114, -6, 62, 87, 61, -27, 48, 53, -56, 55, 107, 88, 85, 7, 119, 26, -96, -79, -63, -85, 37, -57, -94, -5, 86, -53, -47, 21, -23, 12, -22, -114, -44, -6, -18, -73, 123, 1, 43, -71, -4, -23, -91, -91, -3, 68, -8, 125, 21, -128, 75, 82, 1, 36, -127, 81, 23, -90, -3, -68, 120, -106, -4, 40, 123, 29, 56, -8, -66, 1, -19, 41, 103, -49, -48, 115, 91, -106, 98, 65, -34, -1, -31, -104, 6, 48, -21, -43, 73, -43, -28, -113, -100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.594017970244);
    msg.setSource(62831U);
    msg.setSourceEntity(62U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(232U);
    msg.source.assign("MIVRTDQZKLYGYXESLARLCXEUBGGPDQNDTSNWXAGSBMINXAOQXNAYCUYMGHEGHUIOSCVVCEILVJRJQRF");
    const char tmp_msg_0[] = {-127, 24, 28, -8, 39, 24, 1, 35, -1, 66, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.237757535937);
    msg.setSource(53960U);
    msg.setSourceEntity(131U);
    msg.setDestination(10844U);
    msg.setDestinationEntity(87U);
    msg.seq = 4193442170U;
    msg.state = 20U;
    msg.error.assign("OJGVQNQUHQBVMPVWCVZCBLJFMMTGQTLMYDAPXELFWHIGFLCFURKVNEUQSUSNZQGBXAIYXBQERDHICTOMDXNEMVRWAXCWGFSJIJUMELTJONBPUYUXUVYBPEAUISWTZIECFXODJJCSAYZQYYDNMFKLNDIGKSODUFEJFKHNDSZRNTORSKGTRHYWASZRXHOPERHZLKZYTBIKBGIJRLKZHDPXCMATPPOCLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.169490664523);
    msg.setSource(10413U);
    msg.setSourceEntity(231U);
    msg.setDestination(24014U);
    msg.setDestinationEntity(169U);
    msg.seq = 1246156094U;
    msg.state = 220U;
    msg.error.assign("DKXJMDLNBTCGOYTUHGGFOJIZDSDHQEBAMFWZQKAVEAVQFVAPWWRDASXWYCXWHYRIKJPITCVTEHWQSYLBYOMRYIMPYSIDKMLVURHAMRCODJEGCFPLUTNPUCNZBDDKFCXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.992538596278);
    msg.setSource(16558U);
    msg.setSourceEntity(242U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(165U);
    msg.seq = 43729841U;
    msg.state = 115U;
    msg.error.assign("DQDMCUBBHUVDOJJACTOPBHYSEVEIDDQVZWQCXIQQVVYCVXXWOOQIMYTCWGWKQIHAECYPYRKMKXWRBHSLVZNCGPBLIMAOYGUCAFEKZWXKHZJTTSQSGRZEYWKFIVHAHBFISDJZUNRETDPOTXXELANJFUPTMNSLGNYWJRNNLHZLCEHFXDLPKGIDUZXHJIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.059392232608);
    msg.setSource(17434U);
    msg.setSourceEntity(127U);
    msg.setDestination(31721U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("OUDDWRXFPDJHOPUFSFXEWYIYASGKYBTBYVTQCJERPMJNRCWVFYQUHXQUNJTDZNIXXTGKWBOVABJNQHWCCSXDTLSZGGIHQBKMUYKLZJWHGALZOMDRSZJKTPAQTOBVRJEHSABKIIZMJVXWMRPTDEECCGFPDSNITOZNYCKNLGVRKVYWHRVMJAFLMLANNFMGNFGWQASLSHIZVMZYAKQRMUOWUECIEPOPYBXEFEHRBAIEPPXBQQLCULOSLTCH");
    msg.text.assign("MRXTSIXHJHSLEEFHARUKPINJZBYAJFQPQUTXSMTANFVFQQLYXKSWIMOGBEQDWSIVGRBVZBUAUDJGMRLKZHFRXKAJXEBRBFAGYTLPEMOCYXDUYXNKAXUZFQKDWTNLCOMOZNZQMRWIHRCVJPLAEJHIBCWLTFYYYZDOZDWSKUQGTIKPCCVBETCRGYMBNOTLASVPOWDSIKDEEBFVJWIHVOPVPDKYGQCOPNHAGWCESCOMFLZQGMSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.40431585858);
    msg.setSource(27073U);
    msg.setSourceEntity(196U);
    msg.setDestination(60302U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("GQNFQMFUCMFBVRARKWOANSNGVDLPPEIKMDGZBOFXIHJVQXHHZGBFOZLVXWETYWQTAOTIDMHNJHCXBCNKKQPEHXDXDDOORPMLUYUIUPJVZZSJYQSSLHGOLWJBIFXRGECWFYSKNBQOVIEZNQFCQGYPVXMXEMYTKACRRJXQDJIAASDUPLOCDRUYJBMHTPLEVYAJCCTIIBUNARBSGWVYNMFWUTREGTTCKYSVOHLKLANKSZFGWWASHR");
    msg.text.assign("INXPXZNOUDMMGOSGIYHQDSGKQSBVDBIVPVDLFEDHASGSTRKQVHAKLNUCBNPBBLEMSOVFXDWNBYIIEUUZYPMLKJSTRQFTPTCJNMFSWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.879694533451);
    msg.setSource(35243U);
    msg.setSourceEntity(55U);
    msg.setDestination(12592U);
    msg.setDestinationEntity(239U);
    msg.origin.assign("XYDSCOXFMYYKZZKOSTJOHFVCCIBAXPEHQOGWALNSJQBRCTGWJVWFBGOEFWGE");
    msg.text.assign("BLBNHIIVEFIPREXNXRKFXDWYXWAFZHTTILCPNMGHOSTBOOCHCUJAWHNYIHCVJELNKSSPRPFEZVBJKGEMSULERIPGPPNLJUTXFIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0331544505318);
    msg.setSource(29946U);
    msg.setSourceEntity(236U);
    msg.setDestination(45654U);
    msg.setDestinationEntity(51U);
    msg.origin.assign("AZQVJFHENQCHJJXZIDYKTAMYBWLXIIISXCGNOCDAUQYTVRQKHIBAARMGNJCRZNSVRMWIGRJNEHNSEAGKCFYJDRSLSMYBPFEDXXG");
    msg.htime = 0.940577567827;
    msg.lat = 0.723020491516;
    msg.lon = 0.817256633146;
    const char tmp_msg_0[] = {-3, 87, 67, 1, -20, 92, -70, 15, 15, -118, 20, 118, 54, 33, -55, 8, -29, 115, 105, -86, 114, -109, -25, -97, -94, -32, -90, -63, 40, -46, -96, -120, 76, 90, 41, -111, 126, -76, -126, -84, 5, 73, 81, 15, -108, 53, 60, 28, 113, 17, -8, 76, 0, -110, 18, 125, 75, -118, 119, -40, -77, -35, -101, 8, -19, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.147391638859);
    msg.setSource(9498U);
    msg.setSourceEntity(64U);
    msg.setDestination(28109U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("VCLBQTXHKLIPPYMQOSEQWPGVSBXWNCKLBCIEAZFJOGDHBBRIYIMRJYYBOXJRTXEKNQUWNOUZZHIONVHZBDMHBNXCVQZULEFTOLARXQTWECUWKESGNCGFVFDKMRRHZFKUFAKXOTOTPAMFAVMYMDMCSBTLQHWYUODALAQILRUJFZPTLUJZSOWKJDZZEGBVIPUJYDJKENGXRQNWTRSELGVPSACJDFYWSCI");
    msg.htime = 0.638175757653;
    msg.lat = 0.190848991386;
    msg.lon = 0.697588681611;
    const char tmp_msg_0[] = {-113, -104, -100, -84, -28, -90, -113, -114, 61, -60, 118, -52, 87, 9, -110, 21, 89, 14, -7, 121, 16, 44, -112, -55, -92, 59, 41, -30, 107, 63, 40, 107, 84, -6, 34, 48, -97, 32, 59, 4, -87, 76, 48, -84, -12, -64, 98, 39, 87, -57, 85, 21, -88, -15, 30, -31, 76, 10, 54, -56, -125, -16, -95, 56, -102, -55, -96, -123, 44, -98, 86, -87, 107, -65, 11, -81, 25, 53, 90, 87, -105, 118, 50, -91, -109, -115, 114, 92, -94, -29, 83, 33, -8, 83, -121, 123, 113, -24, -82, -63, -98, 0, -2, 63, 124, 98, 56, -36, 84, 14, 18, 67, 0, 126, -112, 65, 124, -78, 59, 45, 31, -59, -50, -57, -96, -75, 31, -112, 50, 95, 63, 62, 113, -52, 31, -22, -36, 23, -17, -11, 15, -26, -78, 97, 101, 54, 106, -85, -34, 1, 83, -60, -19, -99, 18, -53, 6, -28, -104, 9, -55, -119, -113, -13, -109, -118, -31, 90, -116, 20, -121, -96, 81, -126, 43, 82, 2, 7, 51, -36, 6, -10, -64, -77, -15, 81, 37, 103, -39, 3, 121, 72, -35, 24, -2, 91, 39, 5, 86, -123, 118, 105, 43, 62, 124, 64, -64, -93, -54, -70, -21, 92, 103, 5, -68, -7, 34, 4, 87, 108, -66, -98, 32, -60, -116, -128, 113, 19, -18, 74, 30, 108, 88, 61, 18, 34, 45, 11, 47, -110, 45, 76, -120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.097706049571);
    msg.setSource(19876U);
    msg.setSourceEntity(153U);
    msg.setDestination(6247U);
    msg.setDestinationEntity(114U);
    msg.origin.assign("JHTMIIPLONDBLJPLZIJBSENILMSRGVVWPFUTUYEMKGQELDURCRBXSIZHAVHKAERHQYQKFLFYNBHUTWGRZNVOIZEHYJOBHUMQXDYJXTNSDOHYFWTQPKVRMRNFRMESQIJWGOKPOST");
    msg.htime = 0.575537260007;
    msg.lat = 0.847737811669;
    msg.lon = 0.581795979946;
    const char tmp_msg_0[] = {-58, 94, 43, 115, -102, -53, -70, 79, 114, 5, -66, 90, 107, -57, -125, 92, 3, 87, 69, -95, -60, -48, -25, -113, 40, 86, 26, 124, -31, -107, 115, 75, -97, 38, 53, 108, 43, 80, 122, -33, 76, 115, 113, 53, -32, 35, 126, 80, 57, -24, -104, 79, 71, -127, 52, -18, -8, -65, -65, 121, 99, 109, 21, 115, 100, -9, -119, -108, 53, -38, -95, -95, -4, 19, 71, 10, -12, -70, 34, -32, -54, -73, -103, 66, 100, -17, 34, -124, -87, -13, 72, 47, 79, 79, -69, -20, -63, -99, -67, -47, -39, -70, 20, 86, 69, 5, -49, -92, -7, 21, -109, -120, -95, 117, 123, -101, -55, 40, 99, 50, -59, 93, -54, 64, 7, -116, 60, -47, -12, -15, 123, -97, -115, 24, 40, -58, 33, -24, 98, 106, 68, -102, 65, 38, -78, -87, -74, 97, -13, -32, -39, -16, 57, 55, 87, 57, -44, -52, 13, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.231122781086);
    msg.setSource(33088U);
    msg.setSourceEntity(94U);
    msg.setDestination(29934U);
    msg.setDestinationEntity(175U);
    msg.req_id = 14234U;
    msg.ttl = 44846U;
    msg.destination.assign("RIEHRUWTNMJTENEDCPV");
    const char tmp_msg_0[] = {-116, 105, -49, 99, 28, -14, 1, 53, 62, 124, 99, 25, -5, 15, 24, -65, -107, 56, 70, 74, -86, -78, -85, 95, -121, 25, 79, 12, -9, 41, -11, 21, -96, -81, -111, 120, 6, 10, 42, -71, -40, 79, -22, -78, 14, 68, -67, 34, 9, 104, 81, -22, 56, 67, 10, 30, -41, 32, 72, -86, -72, 105, -117, -97, 90, -120, 102, 13, -65, 85, -25, 13, -99, 45, -48, 3, 107, 59, 120, 122, -23, -5, -124, -106, 105, -38, -2, 76, -103, 71, -1, 48, -95, -59, 27, -106, 21, 71, 0, -39, 75, -52, 106, 115, -101, 0, 26, -45, -125, -6, 36, 79, 40, -126, -5, -111, 81, 68, -26, 22, -99, 74, -19, -6, -66, -89, -91, 110, -50, -30, 38, 36, 4, 98, -53, -13, -128, 97, -56, -65, 44, 88, 57, 9, 126, -34, -63, -112, 104, -120, 22, -75, 15, 47, 102, 121, 51, -77, 55, 60, -19, -115, -109, -39, -128, 41, -120, 111, 110, -111, -124, 52, -40, 72, 45, -76, 28, 118, 57, 38, 15, 63, 59, -54, 9, 8, -54, -98, -124, 38, -8, -58, -8, 50, 39, 27, 125, -116, -111, -64, -99, -78, -89, -19, -115, 88, 104, -65, 112, -32, 77, -84, 24, -70, -3, -57, 70, 105, 16, -22, 88, -47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.51649935182);
    msg.setSource(12572U);
    msg.setSourceEntity(152U);
    msg.setDestination(62296U);
    msg.setDestinationEntity(157U);
    msg.req_id = 22887U;
    msg.ttl = 57888U;
    msg.destination.assign("SIGJLIYBHPQLGWCOOWVDREWYWRTCDEIEAQASDLPFAJAMWBOHUTRYSRNQWGYBUIYQKNGFETXOAEQZHHYVLVPHFJTDAZFOKU");
    const char tmp_msg_0[] = {77, -70, -17, 122, 4, 40, 103, -49, 48, -32, 25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.175725812649);
    msg.setSource(26667U);
    msg.setSourceEntity(15U);
    msg.setDestination(31807U);
    msg.setDestinationEntity(19U);
    msg.req_id = 20741U;
    msg.ttl = 37560U;
    msg.destination.assign("NYQNKPUSVLOESOACELQVTXFMEKEFHBDZWOQMZRAYXPQEJZDSYTDHLFYILSVATFNKFUHZFURPKXNTNQZCMZPECCRITZNUXWPJGPYRRADQILYXUKZDGYEALVQOLCBUHYKJUOPXHDJVSRMHGCXAOWAZIFPKQY");
    const char tmp_msg_0[] = {50, -48, 24, 110, -22, 9, -126, 58, 9, 74, -22, -46, 93, 27, -78, -6, 101, -47, -48, 10, -28, -24, -23, -20, -61, 60, 56, 46, -90, 101, 124, -39, -25, 25, -46, 13, -114, 82, -41, -115, -16, 11, 60, -69, -10, -34, -70, 78, 119, -41, -108, -63, 79, 112, 54, 58, 16, 108, -91, 34, -4, -11, -75, -6, 117, -59, 65, -20, -110, 19, -98, 63, 104, -101, 73, -47, 86, 84, 64, -12, -100, 103, 13, 46, -50, -11, 21, 86, 14, -109, 60, -87, -37, -40, 66, 125, -10, -56, -36, -53, 74, 43, -81, 50, 26, -4, -108, 126, -75, 45, 111, -22, 62, -64, 51, -79, 57, -84, 1, 71, -23, 54, 25, 28, -33, 84, -107, 91, -23, -15, 41, -65, -32, -15, 27, -19, 91, -69, -90, 90, 8, 36, -10, -96, 116, -22, 20, 27, 117, -52, 41, -108, -74, -30, -93, -66, 59, -106, 117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.562280131424);
    msg.setSource(2577U);
    msg.setSourceEntity(231U);
    msg.setDestination(6920U);
    msg.setDestinationEntity(197U);
    msg.req_id = 58479U;
    msg.status = 207U;
    msg.text.assign("KLWTVHUAOBYYQWRGNDUNHLFHEATLEOUXCWGKDOBFOZDQYERMVIHVSXVIYKPSBOFQSHJKBSTSQNGSALIVZELOZOOMRBCDYBBGDGIKTJMOIWMMJJPKZHAFGZGMPQFHPLPDJDYBWRZUXCEFRNXMRPIFTVPQSCERIHXFNDRQPAFZQWTACVMUACTARPQIUWJYSXBKNCPKIFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.305798639462);
    msg.setSource(16908U);
    msg.setSourceEntity(188U);
    msg.setDestination(41030U);
    msg.setDestinationEntity(178U);
    msg.req_id = 17767U;
    msg.status = 195U;
    msg.text.assign("GVYTYFJMXNNXUNIUDZOXVNTQGGREJUXCYSHMTPLOSZHEDFLWRAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.450223053472);
    msg.setSource(58845U);
    msg.setSourceEntity(16U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(206U);
    msg.req_id = 6215U;
    msg.status = 56U;
    msg.text.assign("ZBWJKZBAMYWWLSZQTUAKFIVUJGFINNFSMVZLNOEQHOFDLRSRKMRGDINRHIBOVJCRELBTNGSTLXRICRZQUODPVIQMWZBFMCXHFUQLBLYDSORJFXZTIJXSHGQEEKGLCQMGAPDQMOAYGHTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.392857199432);
    msg.setSource(17640U);
    msg.setSourceEntity(32U);
    msg.setDestination(21959U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("XOLSFQCQFSBQHLJONYIGRXOVMWSMCPWRHYFKLIHKCTITKCYEIDNCJGEFAGRXEDHZCCQDTOCNXUTRZPCYXLJTGVEFABVBZLGVXBALKA");
    msg.links = 2845096333U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.257940125599);
    msg.setSource(28509U);
    msg.setSourceEntity(222U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("GIWVUERRENEWWNHHYQCWQYVDUFVNZHZDNFTGJJRTLOGJUFWHNQUZFWZ");
    msg.links = 3847044621U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.81684821174);
    msg.setSource(28465U);
    msg.setSourceEntity(104U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("LWGQBQMEJSGUQUBUMPPYMZLYJXLVRNEWDVATHSQJYXAADFBHCFOXFURVZCZBNQHXIABGOURZARKVSWYGGSFKNAZCNYCDGUFVIGGWSDNHCWPWYULEWTRBWPDNNKFCSAFXPEZOIJPFQOEIJKPLCEETKJHBXHIRVXSHMIPJKKDQBBTLDKYGRHEXXTDQL");
    msg.links = 1244806333U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.52316879065);
    msg.setSource(62020U);
    msg.setSourceEntity(249U);
    msg.setDestination(35846U);
    msg.setDestinationEntity(38U);
    msg.groupname.assign("BCSNZWOMMLOVYWOPQYQROYSYNQXICIEBOWFBIZLDORGABVPSDZLORCUZLTKGIMKJICRSXDHYLZOBFRBVAHWFKNHSIYJNELWCNJRXSDFTLLVJWMREKEXZXHKUGUAHXSXGGEUMYVDJXADGTVQEPMSPIQNHELQBKHNPEEQIVTHKPBTPFAJAOXCCUJPDFZZTTFYOCGFGVKXABDVQYWCSWHMURMWUQVNGUTDFBKWARRNAM");
    msg.action = 95U;
    msg.grouplist.assign("ALUFDISEDWLKGPYMECXEUMWYXCDCBIWRHSEPZTDLGDQLMCYICEXWYDJRFROZVJHSBVUQFMYZBAQZRDGYXGBXWIDVCZYXQOROYSGKMKPGNTYTNUFXRUGHEJHFUWSSOLBBMQNVPHANFFSMVKLLZVKGPZZMKTPSJPHTQXKTFMHWRGWCWPTEIINASJHXMCXQWVHAIFCNLRIEPDRONBABZUALBJYNVRIOJSJLUQAZVKAOPCENTGTUQJIQBJOTOFDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.57948515621);
    msg.setSource(4002U);
    msg.setSourceEntity(178U);
    msg.setDestination(39632U);
    msg.setDestinationEntity(71U);
    msg.groupname.assign("SPVFOBAXEWXVBXMDQSTDJCULPPRAKLWOZBLDHCURDNJXANERPZNPFWIRGKITEGEWSHO");
    msg.action = 174U;
    msg.grouplist.assign("KZHUAUXEUQAAPQBNBCRXKPQEIESDMINFZXMKNRIFUWRLQBMODSBEJNOVHHOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.0670596755022);
    msg.setSource(29940U);
    msg.setSourceEntity(76U);
    msg.setDestination(52402U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("UWMSHRZWWGJQCJMURJXVPYTNRZSWMLGUCCBHFWXAOPKAIKDLTYQVCLCRVZNHRJQAKJTYNTABDKEFFIRSAGOUELYOQGZSB");
    msg.action = 143U;
    msg.grouplist.assign("SWDFHZHDEAVFOXGRIIFZPVSWAMAXFULBYDQUBKDGASDCKIWJWRRMKKOVGLBJZLLFPTQDVSUHNOYHUCLIAEEGCTL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.603958704172);
    msg.setSource(21237U);
    msg.setSourceEntity(72U);
    msg.setDestination(41688U);
    msg.setDestinationEntity(123U);
    msg.id = 112U;
    msg.range = 0.134826969991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.252206778435);
    msg.setSource(24770U);
    msg.setSourceEntity(254U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(128U);
    msg.id = 190U;
    msg.range = 0.997325717524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.631908958824);
    msg.setSource(8023U);
    msg.setSourceEntity(249U);
    msg.setDestination(48297U);
    msg.setDestinationEntity(159U);
    msg.id = 187U;
    msg.range = 0.574730171118;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.766513996524);
    msg.setSource(55484U);
    msg.setSourceEntity(131U);
    msg.setDestination(53706U);
    msg.setDestinationEntity(43U);
    msg.tx = 195U;
    msg.channel = 87U;
    msg.timer = 59070U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.667866671145);
    msg.setSource(32784U);
    msg.setSourceEntity(152U);
    msg.setDestination(26907U);
    msg.setDestinationEntity(18U);
    msg.tx = 29U;
    msg.channel = 7U;
    msg.timer = 30766U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblDetection msg;
    msg.setTimeStamp(0.729075584008);
    msg.setSource(50045U);
    msg.setSourceEntity(245U);
    msg.setDestination(26002U);
    msg.setDestinationEntity(8U);
    msg.tx = 243U;
    msg.channel = 82U;
    msg.timer = 27988U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.251769800518);
    msg.setSource(14981U);
    msg.setSourceEntity(171U);
    msg.setDestination(58764U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("KZLITWIIDTVRRVYJSJNGNYXNXJJODFHPCLXFFMPXUDNGFSKOKQNVYLMUYWLRUIIAXEBOWWXJHRZJZTLOHAEZWNOIHAKCOCBBGQPKSFXLVUFZOZVOTQCNYETWODAMTMVC");
    msg.lat = 0.51181355109;
    msg.lon = 0.596955951729;
    msg.depth = 0.802709109729;
    msg.query_channel = 137U;
    msg.reply_channel = 163U;
    msg.transponder_delay = 7U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.42765184715);
    msg.setSource(30420U);
    msg.setSourceEntity(59U);
    msg.setDestination(40165U);
    msg.setDestinationEntity(190U);
    msg.beacon.assign("HZXQXLLSEDECNBSZJBLZHOQKINGQMYUZQVGUVANOWRLKIDVUSQQPTBMNVNUHUMTMXVSLHFLCQOOTCRSNXQAFRAYKZEAHSQIWZBTZXLDAFJWGPU");
    msg.lat = 0.532963832029;
    msg.lon = 0.571793426739;
    msg.depth = 0.15864163507;
    msg.query_channel = 124U;
    msg.reply_channel = 173U;
    msg.transponder_delay = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.52388864904);
    msg.setSource(9355U);
    msg.setSourceEntity(37U);
    msg.setDestination(10309U);
    msg.setDestinationEntity(183U);
    msg.beacon.assign("XJUKTDEYGNCMBMJILYGCVY");
    msg.lat = 0.187425979384;
    msg.lon = 0.0666410422704;
    msg.depth = 0.554945505594;
    msg.query_channel = 26U;
    msg.reply_channel = 10U;
    msg.transponder_delay = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.206840761109);
    msg.setSource(57880U);
    msg.setSourceEntity(154U);
    msg.setDestination(39139U);
    msg.setDestinationEntity(112U);
    msg.op = 225U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QBPNSTGXGPAVRMSJTHXVXOWARUCOOUIANGYSYTEEWYHEWDJIBUMTZCKFZVZDLBVWNNIMTPIVDHEMAKWZSXNQBKNXQHYBWCBOLEKDZKGJKBDLYXEGYCUPWCTFLQLPYUZSHOQHVIRYHNARKDP");
    tmp_msg_0.lat = 0.393708795532;
    tmp_msg_0.lon = 0.363649097773;
    tmp_msg_0.depth = 0.0212761059252;
    tmp_msg_0.query_channel = 121U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 199U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.848266631922);
    msg.setSource(36319U);
    msg.setSourceEntity(49U);
    msg.setDestination(17503U);
    msg.setDestinationEntity(74U);
    msg.op = 183U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IUYXTVYYKBOGEXIOTBNHNLGRDJNZLXUCEOAAAVDDSGAJJCXOOSVZUXQZZELFLCBJBFFWMQRTETU");
    tmp_msg_0.lat = 0.0748102822164;
    tmp_msg_0.lon = 0.402455025144;
    tmp_msg_0.depth = 0.953862013409;
    tmp_msg_0.query_channel = 106U;
    tmp_msg_0.reply_channel = 171U;
    tmp_msg_0.transponder_delay = 100U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.697845211848);
    msg.setSource(43265U);
    msg.setSourceEntity(184U);
    msg.setDestination(11654U);
    msg.setDestinationEntity(82U);
    msg.op = 112U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VKOMLUKWREHQLINEZVSGAPDBUACXMGQXDEWUJQIIGVLVYWVPODUKTKXXOCUKAHFCDSTPEBYRWSKHSCAFBZREBTAXQQGWTHNMXZCSZJPLULNJSZICPHYRRJARPETINJTXTEVTYOIANLJXZCRFOKDBJRFTKODPFGOGNOOJEME");
    tmp_msg_0.lat = 0.961738777552;
    tmp_msg_0.lon = 0.135242530254;
    tmp_msg_0.depth = 0.668255233754;
    tmp_msg_0.query_channel = 34U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 77U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.572398691596);
    msg.setSource(3625U);
    msg.setSourceEntity(216U);
    msg.setDestination(49403U);
    msg.setDestinationEntity(189U);
    msg.address = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.197466258221);
    msg.setSource(5770U);
    msg.setSourceEntity(89U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(249U);
    msg.address = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRange msg;
    msg.setTimeStamp(0.720559832356);
    msg.setSource(10500U);
    msg.setSourceEntity(214U);
    msg.setDestination(20229U);
    msg.setDestinationEntity(158U);
    msg.address = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.996182458283);
    msg.setSource(16342U);
    msg.setSourceEntity(142U);
    msg.setDestination(8601U);
    msg.setDestinationEntity(226U);
    msg.address = 15U;
    msg.status = 207U;
    msg.range = 0.236980084037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.842389876654);
    msg.setSource(11949U);
    msg.setSourceEntity(196U);
    msg.setDestination(10514U);
    msg.setDestinationEntity(57U);
    msg.address = 106U;
    msg.status = 30U;
    msg.range = 0.553425254196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRangeReply msg;
    msg.setTimeStamp(0.9594112823);
    msg.setSource(57129U);
    msg.setSourceEntity(18U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(240U);
    msg.address = 129U;
    msg.status = 49U;
    msg.range = 0.0433224687097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRangeReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0139271905421);
    msg.setSource(36953U);
    msg.setSourceEntity(112U);
    msg.setDestination(20252U);
    msg.setDestinationEntity(135U);
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 251U;
    const char tmp_tmp_msg_0_0[] = {-3, 23, 88, 47, -87, -76, -79, 7, 32, 44, 51, -92, 22, 112, -117, 71, -20, -54, -67, -6, -95, 53, -121, 67, -69, 95, 67, -36, -91, 125, -119, 105, 105, 95, -127, 95, 7, -28, 44, -18, 23, -113, 76, -38, 3, 34, -93, 99, -10, -92, -17, 27, -29, -39, -96, 108, 102, -9, -82, -38, -70, 93, -110, -36, 15, -81, -15, 88, -29, -104, 7, -13, -10, 124, 52, 63, 120, 1, 120, -11, -4, -101, -126, 120, 49, 85, 110, -14, 48, 50, -75, 80, 124, 46, 41, 87, -70, -58, 62, 119, 91, 74, -113, 0, -28, -7, 58, 67, -22, 115, 28, -19, -105, 32, 10, -89, 32, -126, -106, -63, 40, -97, 50, 48, -110, 55, -88, -31, 86, -80, -62, -90, 96, -117, -11, 3, -100, -98, -107, -104, -46, 100, 92, -36, 98, 80, 88, -123, 75, -94, -6, -86, 69, -68, 111, 84, -100, 25, 71, 108, -96, -107, 50, 61, -75, 29, -57, -77, -121, 46, -22, 70, -71, -111, 110, -40};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.270782371596);
    msg.setSource(55471U);
    msg.setSourceEntity(69U);
    msg.setDestination(54170U);
    msg.setDestinationEntity(60U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 34179U;
    tmp_msg_0.lat = 0.600881988534;
    tmp_msg_0.lon = 0.332049826181;
    tmp_msg_0.z = 0.210207707195;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.duration = 53546U;
    tmp_msg_0.speed = 0.0177844146306;
    tmp_msg_0.speed_units = 180U;
    tmp_msg_0.type = 247U;
    tmp_msg_0.radius = 0.321245316992;
    tmp_msg_0.length = 0.59982603377;
    tmp_msg_0.bearing = 0.0982177936385;
    tmp_msg_0.direction = 48U;
    tmp_msg_0.custom.assign("EBHLBHWIQNBIAWTCGMOHVELFUJBJGRHAKFTKMQWZMCOTYPONYBDHCKWSDXKGITDKGXXBTUYKHVEJSPXMAZTUYIJVBZEPPRYOUQRZIYJJJGLKHSLDZF");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0598446790479);
    msg.setSource(6120U);
    msg.setSourceEntity(53U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(103U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.741988728415;
    tmp_msg_0.type = 208U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.0118503289626);
    msg.setSource(20438U);
    msg.setSourceEntity(133U);
    msg.setDestination(47497U);
    msg.setDestinationEntity(134U);
    msg.enable = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.532029001939);
    msg.setSource(24051U);
    msg.setSourceEntity(162U);
    msg.setDestination(48067U);
    msg.setDestinationEntity(155U);
    msg.enable = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticDiagnostic msg;
    msg.setTimeStamp(0.261814360838);
    msg.setSource(56839U);
    msg.setSourceEntity(108U);
    msg.setDestination(61185U);
    msg.setDestinationEntity(242U);
    msg.enable = 183U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticDiagnostic #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.29234936074);
    msg.setSource(53688U);
    msg.setSourceEntity(174U);
    msg.setDestination(4411U);
    msg.setDestinationEntity(228U);
    msg.summary = 2U;
    msg.level = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.851443838182);
    msg.setSource(35764U);
    msg.setSourceEntity(33U);
    msg.setDestination(6730U);
    msg.setDestinationEntity(235U);
    msg.summary = 97U;
    msg.level = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticNoise msg;
    msg.setTimeStamp(0.26728185748);
    msg.setSource(28791U);
    msg.setSourceEntity(14U);
    msg.setDestination(40380U);
    msg.setDestinationEntity(3U);
    msg.summary = 11U;
    msg.level = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticNoise #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.0546765587995);
    msg.setSource(31560U);
    msg.setSourceEntity(252U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(196U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.878674798557);
    msg.setSource(53022U);
    msg.setSourceEntity(12U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(40U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPing msg;
    msg.setTimeStamp(0.846789181331);
    msg.setSource(52473U);
    msg.setSourceEntity(26U);
    msg.setDestination(44622U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPing #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.78942910068);
    msg.setSource(37572U);
    msg.setSourceEntity(239U);
    msg.setDestination(45741U);
    msg.setDestinationEntity(113U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.725378077429);
    msg.setSource(34379U);
    msg.setSourceEntity(169U);
    msg.setDestination(10381U);
    msg.setDestinationEntity(47U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticPingReply msg;
    msg.setTimeStamp(0.31334467991);
    msg.setSource(55745U);
    msg.setSourceEntity(65U);
    msg.setDestination(52763U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticPingReply #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.368860053817);
    msg.setSource(2178U);
    msg.setSourceEntity(173U);
    msg.setDestination(38816U);
    msg.setDestinationEntity(104U);
    msg.op = 57U;
    msg.system.assign("EANZILEHGMYCYODODDWMPPUSYCYBKVOSKBTIVTAZJPGMOSUUYSRXZQKJCFVWMIWGXTYZFNKLXAJFONAHGEBDJSKA");
    msg.range = 0.0580845098016;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.0754630292045;
    tmp_msg_0.x = 0.933671453759;
    tmp_msg_0.y = 0.555934652003;
    tmp_msg_0.z = 0.626115031492;
    tmp_msg_0.timestep = 0.320054259988;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.864760646198);
    msg.setSource(64691U);
    msg.setSourceEntity(97U);
    msg.setDestination(43663U);
    msg.setDestinationEntity(114U);
    msg.op = 68U;
    msg.system.assign("MSUYZLTNONTYTRFAVBUGHKIQAAZGQXRSXWTRQHOGWNZCOCTGITJKHAXUFJRNUJELFGRJEHNXQDDQTXSUSQAVZOUCKXWJMEKYLLXK");
    msg.range = 0.966652043911;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.437780989173;
    tmp_msg_0.speed_units = 180U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.347874473315);
    msg.setSource(60241U);
    msg.setSourceEntity(106U);
    msg.setDestination(23399U);
    msg.setDestinationEntity(122U);
    msg.op = 211U;
    msg.system.assign("QNZSOQWLJNNEZBTEIBFARICMVSSNZRKRWVYFGKHAXGYOUZFVOYDTAPTIFCXUDTZXHNGLTVJITLVWSMTXQUAAYHMODEGOSVKEVKCYLDGNKSDXFITUEOPJUANKZWZBRCWYXGBLPWWCAUOWFHPQLOHONJFIXZQJCLDDTIFXCBBDU");
    msg.range = 0.715673741603;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 210U;
    tmp_msg_0.label.assign("QVARCBTFLYJYDQHLAKBBUOMIRXZQ");
    tmp_msg_0.component.assign("XXAJZITZGHDGPC");
    tmp_msg_0.act_time = 46914U;
    tmp_msg_0.deact_time = 12941U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.853455122542);
    msg.setSource(47266U);
    msg.setSourceEntity(166U);
    msg.setDestination(25327U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.96314897338);
    msg.setSource(55405U);
    msg.setSourceEntity(252U);
    msg.setDestination(36351U);
    msg.setDestinationEntity(114U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.815247716394);
    msg.setSource(9669U);
    msg.setSourceEntity(176U);
    msg.setDestination(1708U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.393137654823);
    msg.setSource(52625U);
    msg.setSourceEntity(85U);
    msg.setDestination(51792U);
    msg.setDestinationEntity(190U);
    msg.list.assign("ZJNLQTBYWDPZSDDOVKOYTNEUCKMZLQIROIGKRBMSAJIWYUMBTKOAQTKFBPZHYOEUJNKOFHQBRUPWEUYLAXODELDVWEHVUHKQLAZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.816894086797);
    msg.setSource(23857U);
    msg.setSourceEntity(45U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(58U);
    msg.list.assign("OVMONRTOXFDELMOLMLFXQGHVQTSRNUYLXPYWFKIRYZZJDIEZTSUZCPMUDZQWMFKWWSZEIBDAZXPYHACJVCGUZNYTHHCBXDFBNCY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.761804508819);
    msg.setSource(11979U);
    msg.setSourceEntity(128U);
    msg.setDestination(56814U);
    msg.setDestinationEntity(53U);
    msg.list.assign("VUJVGZEIVXZSPOSBYEAEXJMDLKEWFYBFPCHOCMLJJKNDDMFYYZNRFQZZKNERUIXZXLMPAWLGRQNRZCUWOGIVXXPKOGLROTMEHRSIRBNFYTYHMIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.559552891228);
    msg.setSource(18705U);
    msg.setSourceEntity(211U);
    msg.setDestination(54575U);
    msg.setDestinationEntity(211U);
    msg.value = -28288;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.74195042051);
    msg.setSource(56050U);
    msg.setSourceEntity(240U);
    msg.setDestination(59731U);
    msg.setDestinationEntity(46U);
    msg.value = 16023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.325671002793);
    msg.setSource(12897U);
    msg.setSourceEntity(103U);
    msg.setDestination(30632U);
    msg.setDestinationEntity(238U);
    msg.value = 25022;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.728186959897);
    msg.setSource(34726U);
    msg.setSourceEntity(38U);
    msg.setDestination(44440U);
    msg.setDestinationEntity(145U);
    msg.value = 0.351070350504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.180914997082);
    msg.setSource(52143U);
    msg.setSourceEntity(188U);
    msg.setDestination(15144U);
    msg.setDestinationEntity(202U);
    msg.value = 0.824200145589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.174764754073);
    msg.setSource(22993U);
    msg.setSourceEntity(5U);
    msg.setDestination(23080U);
    msg.setDestinationEntity(190U);
    msg.value = 0.179914597933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0687970451228);
    msg.setSource(62230U);
    msg.setSourceEntity(231U);
    msg.setDestination(60739U);
    msg.setDestinationEntity(15U);
    msg.value = 0.679613223868;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.0342250875106);
    msg.setSource(44781U);
    msg.setSourceEntity(253U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(48U);
    msg.value = 0.911382576546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.866329707516);
    msg.setSource(54876U);
    msg.setSourceEntity(28U);
    msg.setDestination(8240U);
    msg.setDestinationEntity(45U);
    msg.value = 0.990571083113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.289353047635);
    msg.setSource(17189U);
    msg.setSourceEntity(236U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(128U);
    msg.validity = 49477U;
    msg.type = 120U;
    msg.utc_year = 31368U;
    msg.utc_month = 242U;
    msg.utc_day = 155U;
    msg.utc_time = 0.585812557636;
    msg.lat = 0.583983713393;
    msg.lon = 0.511738293478;
    msg.height = 0.847111410474;
    msg.satellites = 120U;
    msg.cog = 0.0682679156173;
    msg.sog = 0.599426958156;
    msg.hdop = 0.867090499501;
    msg.vdop = 0.290560478371;
    msg.hacc = 0.492163972658;
    msg.vacc = 0.892554596534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.327587557798);
    msg.setSource(61840U);
    msg.setSourceEntity(31U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(245U);
    msg.validity = 5726U;
    msg.type = 36U;
    msg.utc_year = 30089U;
    msg.utc_month = 92U;
    msg.utc_day = 93U;
    msg.utc_time = 0.278916630942;
    msg.lat = 0.746143943576;
    msg.lon = 0.863336162908;
    msg.height = 0.915927261568;
    msg.satellites = 190U;
    msg.cog = 0.25846668818;
    msg.sog = 0.281951649018;
    msg.hdop = 0.777288741093;
    msg.vdop = 0.396761312577;
    msg.hacc = 0.253199020291;
    msg.vacc = 0.000358972748728;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.765788526681);
    msg.setSource(16288U);
    msg.setSourceEntity(92U);
    msg.setDestination(7347U);
    msg.setDestinationEntity(157U);
    msg.validity = 4129U;
    msg.type = 209U;
    msg.utc_year = 18577U;
    msg.utc_month = 182U;
    msg.utc_day = 179U;
    msg.utc_time = 0.482579268967;
    msg.lat = 0.989287926955;
    msg.lon = 0.381060319314;
    msg.height = 0.793430525624;
    msg.satellites = 133U;
    msg.cog = 0.324463948847;
    msg.sog = 0.0559630143886;
    msg.hdop = 0.150981205758;
    msg.vdop = 0.495483201744;
    msg.hacc = 0.201411008377;
    msg.vacc = 0.947033106239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.556858848072);
    msg.setSource(36073U);
    msg.setSourceEntity(65U);
    msg.setDestination(29326U);
    msg.setDestinationEntity(92U);
    msg.time = 0.86432805393;
    msg.phi = 0.300929427999;
    msg.theta = 0.536308457057;
    msg.psi = 0.0328227966676;
    msg.psi_magnetic = 0.292954739321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.453137762951);
    msg.setSource(62302U);
    msg.setSourceEntity(234U);
    msg.setDestination(10739U);
    msg.setDestinationEntity(102U);
    msg.time = 0.576777972391;
    msg.phi = 0.681578471184;
    msg.theta = 0.481846195922;
    msg.psi = 0.950862696035;
    msg.psi_magnetic = 0.738542491006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.548091371526);
    msg.setSource(40641U);
    msg.setSourceEntity(53U);
    msg.setDestination(37809U);
    msg.setDestinationEntity(187U);
    msg.time = 0.932811386265;
    msg.phi = 0.2369485294;
    msg.theta = 0.561219160369;
    msg.psi = 0.11898985131;
    msg.psi_magnetic = 0.278434549309;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.257406431521);
    msg.setSource(29387U);
    msg.setSourceEntity(135U);
    msg.setDestination(4476U);
    msg.setDestinationEntity(217U);
    msg.time = 0.971223707547;
    msg.x = 0.191888791907;
    msg.y = 0.30616588439;
    msg.z = 0.843435196632;
    msg.timestep = 0.10766520986;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.820576381163);
    msg.setSource(45277U);
    msg.setSourceEntity(210U);
    msg.setDestination(47262U);
    msg.setDestinationEntity(20U);
    msg.time = 0.799783450695;
    msg.x = 0.349263676417;
    msg.y = 0.618402705074;
    msg.z = 0.0347143434081;
    msg.timestep = 0.246948794169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.505509183743);
    msg.setSource(4497U);
    msg.setSourceEntity(244U);
    msg.setDestination(29260U);
    msg.setDestinationEntity(194U);
    msg.time = 0.15475811086;
    msg.x = 0.094632212931;
    msg.y = 0.827673307612;
    msg.z = 0.0295099207517;
    msg.timestep = 0.323766079244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.582423906271);
    msg.setSource(6492U);
    msg.setSourceEntity(40U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(51U);
    msg.time = 0.150945443116;
    msg.x = 0.456432326055;
    msg.y = 0.039896431649;
    msg.z = 0.290402771627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.577553405255);
    msg.setSource(35354U);
    msg.setSourceEntity(201U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(158U);
    msg.time = 0.461467435875;
    msg.x = 0.956190467028;
    msg.y = 0.450399259541;
    msg.z = 0.556230122582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.283436796756);
    msg.setSource(31210U);
    msg.setSourceEntity(203U);
    msg.setDestination(29552U);
    msg.setDestinationEntity(188U);
    msg.time = 0.351057090065;
    msg.x = 0.700786087593;
    msg.y = 0.555237697495;
    msg.z = 0.461737139566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.84226128797);
    msg.setSource(60801U);
    msg.setSourceEntity(208U);
    msg.setDestination(53721U);
    msg.setDestinationEntity(94U);
    msg.time = 0.571307103781;
    msg.x = 0.615341402819;
    msg.y = 0.442660144129;
    msg.z = 0.496676991172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.254675333496);
    msg.setSource(35422U);
    msg.setSourceEntity(79U);
    msg.setDestination(6182U);
    msg.setDestinationEntity(216U);
    msg.time = 0.241534353694;
    msg.x = 0.05926625203;
    msg.y = 0.471310759072;
    msg.z = 0.650820621572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.533130937034);
    msg.setSource(50048U);
    msg.setSourceEntity(105U);
    msg.setDestination(43190U);
    msg.setDestinationEntity(99U);
    msg.time = 0.882483555781;
    msg.x = 0.714004178744;
    msg.y = 0.0792379940175;
    msg.z = 0.00956370664713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.679626627108);
    msg.setSource(36924U);
    msg.setSourceEntity(104U);
    msg.setDestination(7408U);
    msg.setDestinationEntity(110U);
    msg.time = 0.111284640525;
    msg.x = 0.054232240314;
    msg.y = 0.303100829456;
    msg.z = 0.669411434279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.351903666965);
    msg.setSource(55046U);
    msg.setSourceEntity(83U);
    msg.setDestination(6482U);
    msg.setDestinationEntity(112U);
    msg.time = 0.0869613966695;
    msg.x = 0.281020996641;
    msg.y = 0.505501463066;
    msg.z = 0.103260212471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.537397479374);
    msg.setSource(45885U);
    msg.setSourceEntity(39U);
    msg.setDestination(61535U);
    msg.setDestinationEntity(184U);
    msg.time = 0.992517292825;
    msg.x = 0.71607705082;
    msg.y = 0.045550293962;
    msg.z = 0.172971135101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.149834357355);
    msg.setSource(4503U);
    msg.setSourceEntity(250U);
    msg.setDestination(50892U);
    msg.setDestinationEntity(8U);
    msg.validity = 73U;
    msg.x = 0.081459606755;
    msg.y = 0.558878483409;
    msg.z = 0.276073930585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.491109798444);
    msg.setSource(19743U);
    msg.setSourceEntity(214U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(202U);
    msg.validity = 33U;
    msg.x = 0.371941165977;
    msg.y = 0.984607774552;
    msg.z = 0.954460179642;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.231581337429);
    msg.setSource(40230U);
    msg.setSourceEntity(162U);
    msg.setDestination(51221U);
    msg.setDestinationEntity(169U);
    msg.validity = 241U;
    msg.x = 0.20395334314;
    msg.y = 0.897391287254;
    msg.z = 0.145088815337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.139693772327);
    msg.setSource(32238U);
    msg.setSourceEntity(209U);
    msg.setDestination(33440U);
    msg.setDestinationEntity(61U);
    msg.validity = 251U;
    msg.x = 0.531196748493;
    msg.y = 0.774911240881;
    msg.z = 0.156180287366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.966535277472);
    msg.setSource(6891U);
    msg.setSourceEntity(178U);
    msg.setDestination(32636U);
    msg.setDestinationEntity(197U);
    msg.validity = 37U;
    msg.x = 0.445796371985;
    msg.y = 0.61542688646;
    msg.z = 0.193919124008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.31088168659);
    msg.setSource(44002U);
    msg.setSourceEntity(75U);
    msg.setDestination(11840U);
    msg.setDestinationEntity(5U);
    msg.validity = 196U;
    msg.x = 0.848541226777;
    msg.y = 0.57165923594;
    msg.z = 0.167219632299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.0566788700662);
    msg.setSource(61550U);
    msg.setSourceEntity(187U);
    msg.setDestination(6839U);
    msg.setDestinationEntity(42U);
    msg.time = 0.697289544543;
    msg.x = 0.536154111537;
    msg.y = 0.978788485201;
    msg.z = 0.755223075161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.626972573248);
    msg.setSource(63371U);
    msg.setSourceEntity(100U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(49U);
    msg.time = 0.892067397709;
    msg.x = 0.78920039348;
    msg.y = 0.889853958176;
    msg.z = 0.845135197605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.795651189177);
    msg.setSource(23371U);
    msg.setSourceEntity(34U);
    msg.setDestination(45753U);
    msg.setDestinationEntity(28U);
    msg.time = 0.619474350577;
    msg.x = 0.982181901508;
    msg.y = 0.301223571533;
    msg.z = 0.801120100662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.197716987636);
    msg.setSource(36921U);
    msg.setSourceEntity(192U);
    msg.setDestination(36605U);
    msg.setDestinationEntity(178U);
    msg.validity = 45U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0819694627244;
    tmp_msg_0.y = 0.566150029207;
    tmp_msg_0.z = 0.345968752782;
    tmp_msg_0.phi = 0.403157778725;
    tmp_msg_0.theta = 0.920407119854;
    tmp_msg_0.psi = 0.648608084689;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.934191956937;
    tmp_msg_1.beam_height = 0.0142707911419;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.902898120271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.717237747701);
    msg.setSource(59261U);
    msg.setSourceEntity(132U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(74U);
    msg.validity = 25U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.67734961551;
    tmp_msg_0.y = 0.297656098251;
    tmp_msg_0.z = 0.0951541299407;
    tmp_msg_0.phi = 0.311605514305;
    tmp_msg_0.theta = 0.806809338422;
    tmp_msg_0.psi = 0.0291622052208;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.958824412202;
    tmp_msg_1.beam_height = 0.871292431859;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.747310018558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.231449014115);
    msg.setSource(31421U);
    msg.setSourceEntity(8U);
    msg.setDestination(52095U);
    msg.setDestinationEntity(33U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.274604321663;
    tmp_msg_0.y = 0.0784723779894;
    tmp_msg_0.z = 0.0715751626549;
    tmp_msg_0.phi = 0.402007981134;
    tmp_msg_0.theta = 0.534096265136;
    tmp_msg_0.psi = 0.716244110121;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.128007845194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.0781195871843);
    msg.setSource(55508U);
    msg.setSourceEntity(140U);
    msg.setDestination(38232U);
    msg.setDestinationEntity(201U);
    msg.value = 0.393849011459;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.552116347341);
    msg.setSource(34321U);
    msg.setSourceEntity(98U);
    msg.setDestination(30963U);
    msg.setDestinationEntity(105U);
    msg.value = 0.837750943898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.446280692431);
    msg.setSource(21724U);
    msg.setSourceEntity(2U);
    msg.setDestination(10001U);
    msg.setDestinationEntity(195U);
    msg.value = 0.135398356045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.194465297479);
    msg.setSource(30823U);
    msg.setSourceEntity(196U);
    msg.setDestination(30788U);
    msg.setDestinationEntity(186U);
    msg.value = 0.516232535919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.726815428131);
    msg.setSource(34508U);
    msg.setSourceEntity(70U);
    msg.setDestination(38660U);
    msg.setDestinationEntity(65U);
    msg.value = 0.9087494302;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.859352484325);
    msg.setSource(49234U);
    msg.setSourceEntity(185U);
    msg.setDestination(9272U);
    msg.setDestinationEntity(41U);
    msg.value = 0.377626920674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.372695951329);
    msg.setSource(2182U);
    msg.setSourceEntity(236U);
    msg.setDestination(63284U);
    msg.setDestinationEntity(108U);
    msg.value = 0.386996981867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.910798631462);
    msg.setSource(37773U);
    msg.setSourceEntity(232U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(163U);
    msg.value = 0.958400175089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.604699357855);
    msg.setSource(50100U);
    msg.setSourceEntity(14U);
    msg.setDestination(23488U);
    msg.setDestinationEntity(120U);
    msg.value = 0.488255414223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.578127887259);
    msg.setSource(24177U);
    msg.setSourceEntity(115U);
    msg.setDestination(506U);
    msg.setDestinationEntity(150U);
    msg.value = 0.324765741484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.518881849756);
    msg.setSource(17772U);
    msg.setSourceEntity(30U);
    msg.setDestination(31135U);
    msg.setDestinationEntity(214U);
    msg.value = 0.334572766101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.459630736162);
    msg.setSource(21436U);
    msg.setSourceEntity(172U);
    msg.setDestination(14123U);
    msg.setDestinationEntity(160U);
    msg.value = 0.120594083836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.741636023834);
    msg.setSource(50907U);
    msg.setSourceEntity(164U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(3U);
    msg.value = 0.125780849018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.985551631763);
    msg.setSource(45735U);
    msg.setSourceEntity(252U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(206U);
    msg.value = 0.4271947217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.65718216111);
    msg.setSource(61769U);
    msg.setSourceEntity(236U);
    msg.setDestination(40477U);
    msg.setDestinationEntity(30U);
    msg.value = 0.346922242876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.798312696713);
    msg.setSource(31475U);
    msg.setSourceEntity(5U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(248U);
    msg.value = 0.233666400901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.252584170785);
    msg.setSource(21735U);
    msg.setSourceEntity(1U);
    msg.setDestination(38977U);
    msg.setDestinationEntity(99U);
    msg.value = 0.888690854031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.253608065806);
    msg.setSource(19446U);
    msg.setSourceEntity(15U);
    msg.setDestination(11686U);
    msg.setDestinationEntity(62U);
    msg.value = 0.391331629839;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.20835062854);
    msg.setSource(34876U);
    msg.setSourceEntity(128U);
    msg.setDestination(53857U);
    msg.setDestinationEntity(119U);
    msg.value = 0.198801675241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.329193471906);
    msg.setSource(35513U);
    msg.setSourceEntity(86U);
    msg.setDestination(12191U);
    msg.setDestinationEntity(82U);
    msg.value = 0.812661961414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.71838001264);
    msg.setSource(37119U);
    msg.setSourceEntity(38U);
    msg.setDestination(5290U);
    msg.setDestinationEntity(51U);
    msg.value = 0.653094748226;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.747502128246);
    msg.setSource(50077U);
    msg.setSourceEntity(232U);
    msg.setDestination(51677U);
    msg.setDestinationEntity(168U);
    msg.value = 0.378752204562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.29128234402);
    msg.setSource(22429U);
    msg.setSourceEntity(153U);
    msg.setDestination(52160U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0513515001004;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.664226980014);
    msg.setSource(45833U);
    msg.setSourceEntity(114U);
    msg.setDestination(55439U);
    msg.setDestinationEntity(203U);
    msg.value = 0.432801738696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.313624748343);
    msg.setSource(33340U);
    msg.setSourceEntity(164U);
    msg.setDestination(11730U);
    msg.setDestinationEntity(146U);
    msg.direction = 0.706645446575;
    msg.speed = 0.400750756976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.35483600536);
    msg.setSource(47176U);
    msg.setSourceEntity(180U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(177U);
    msg.direction = 0.933540669373;
    msg.speed = 0.152513258204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.551918154521);
    msg.setSource(37278U);
    msg.setSourceEntity(131U);
    msg.setDestination(3325U);
    msg.setDestinationEntity(21U);
    msg.direction = 0.646944694944;
    msg.speed = 0.0876892875242;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.232153871633);
    msg.setSource(59334U);
    msg.setSourceEntity(38U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(120U);
    msg.value = 0.822234359499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.547286563029);
    msg.setSource(46431U);
    msg.setSourceEntity(123U);
    msg.setDestination(25571U);
    msg.setDestinationEntity(170U);
    msg.value = 0.796875244951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.331806036445);
    msg.setSource(61899U);
    msg.setSourceEntity(29U);
    msg.setDestination(57869U);
    msg.setDestinationEntity(193U);
    msg.value = 0.850362164191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.29678971899);
    msg.setSource(21979U);
    msg.setSourceEntity(35U);
    msg.setDestination(50833U);
    msg.setDestinationEntity(176U);
    msg.value.assign("ISWPTOCEZQGFETKXOSBHLOBGDGPQBJKIDINNBVSXDFQVHXMAZMDFREVPINOJJBOPCIIYHUVESUBATRFAFMGRCPFMUVKWWXZEPNMHEBGWNSLMYURACYXNNXQYSTQROYKIAJTDJNVEHIMJZBVHAXOVK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.680683493247);
    msg.setSource(31412U);
    msg.setSourceEntity(148U);
    msg.setDestination(11698U);
    msg.setDestinationEntity(87U);
    msg.value.assign("RPPIRIZPEJKWPSOMKUNNLKIUCXMBZXSSZMUVHBGSPDCODYDWHJAWWJBCHDEIMZKTTLDTRVBBNCVHCNRKSUDBMLOOVMYKMCYYKUARKFHLNHZXLIDARYIQSNJZENQRYECJGTTQFJUTEQMAZPMAVIYDTOLNQXUJVQGAVEFBMWQFYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.927220545629);
    msg.setSource(1072U);
    msg.setSourceEntity(5U);
    msg.setDestination(25368U);
    msg.setDestinationEntity(74U);
    msg.value.assign("LKKHWHLJATKYOGBITYPSZHTAKURWYHFIIPZXQBIQMNEBTYARCHRJGMTQPCVDAMVTWKLXUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.261069558482);
    msg.setSource(29230U);
    msg.setSourceEntity(161U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(141U);
    const char tmp_msg_0[] = {-97, 14, 9, 115, -101, 86, -85, 28, -78, -111, -104, 18, 28, 14, -100, -58, -31, -22, 77, -69, 26, 43, -45, 88, 7, -86, 94, -18, -51, 68, 18, 44, 118, -91, 92, 113, -127, -86, -100, 111, 28, 111, -114, -44, 28, 18, -69, -19, 1, 13, -90, 38, 0, 6, 26, 109, -41, 82, -80, -123, -84, 27};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.0521881226796);
    msg.setSource(51100U);
    msg.setSourceEntity(213U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(36U);
    const char tmp_msg_0[] = {71, 78, 83, -85, 43, 124, 7, 90, -50, 125, -72, -69, 25, -77, -62, -119, 118, -78, 39, 63, 125, 85, -9, -104, 47, 17, 17, 106, -12, 12, -92, 75, 48, -78, 53, -75, 56, 115, 87, -22, -36, -75, 120, 6, -42, 101, 10, -95, 42, 5, -35, 85, -92, -50, -53, 43, 4, -125, 61, 96, 118, -93, 121, -115, 109, -91, 69, 66, 64, 77, 94, 111, -91, -34, 79, 37, 92, -33, 110, 16, 119, 115, 10, 91, 30, -69, 27, -94, -58, -67, -68, 113};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.665116543618);
    msg.setSource(17280U);
    msg.setSourceEntity(175U);
    msg.setDestination(38408U);
    msg.setDestinationEntity(141U);
    const char tmp_msg_0[] = {-105, -24, -113, 30, 16, 36, -62, -6, -38, -43, -46, 123, -116, -1, 113, 121, -119, -15, 35, -65, 86, -15, -90, -21, 103, -63, -111, 29, -45, -109, 31, 114, 62, 94, -73, 105, 91, 1, 86, -29, -124, -65, 46, 87, -105, -45, -118, -22, 43, -121, -113, -29, -15, -103, -108, -63, -36, 122, -114, -119, 27, 89, -74, 13, 22, -9, -123, 33, -21, -94, 85, 21, 96, -20, 50, 50, -116, 125, -68, 94, 95, 31, -17, 86, -87, -4, 104, -101, -84, -119, 62, -88, -15, 113, 104, -112, -44, 38, 76, -77, 93, -47, 7, 69, 15, 23, 114, 55, 34, -98, 17, -77, 57, 115, 20, 52, 0, 119, 82, -99, 60, -102, -81, 91, -23, -50, 122, -28, -101, -1, -22, 67, 15, 57, 72, -103, -68, -43, 64, 6, -96, 80, -77, -45, -4, 52, 124, 71, 109, -34, 56, 52, 84, -106, -6, 76, 98, -124, -87, 111, -66, -40, -110, 74, -87, 9, -111, 111, -90, -62, 18, 119, -36, -99, 115, -80, -101, 47, -48, -27, 83, 56, -34, -81, -93, -90, 50, -98, -113, 34, -94, -43, 96, 68, -9, -22, -4, 40, -114, -8, -37, -114, 77, 115, 48, 28, 36, 35, 94, -19, -22, -45};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.440236386074);
    msg.setSource(2336U);
    msg.setSourceEntity(17U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(71U);
    msg.frequency = 1458194323U;
    msg.min_range = 39472U;
    msg.max_range = 58442U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.953697168957);
    msg.setSource(44990U);
    msg.setSourceEntity(11U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(245U);
    msg.frequency = 4185365067U;
    msg.min_range = 10515U;
    msg.max_range = 14457U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarConfig msg;
    msg.setTimeStamp(0.386281476026);
    msg.setSource(14869U);
    msg.setSourceEntity(104U);
    msg.setDestination(876U);
    msg.setDestinationEntity(13U);
    msg.frequency = 2529481128U;
    msg.min_range = 64315U;
    msg.max_range = 54879U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.753047935972);
    msg.setSource(55426U);
    msg.setSourceEntity(45U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(244U);
    msg.type = 38U;
    msg.frequency = 50044997U;
    msg.min_range = 54960U;
    msg.max_range = 12077U;
    msg.bits_per_point = 41U;
    msg.scale_factor = 0.0556754870351;
    const char tmp_msg_0[] = {-69, -78, -98, -121, -59, -19, 106, 114, -92, 108, -110, -91, 81, 107, -78, 6, 115, 34, 95, -51, 106, 68, 16, -62, -54, 69, -116, 56, 16, 89, -86, 33, 33, -111, 18, -72, -121, 48, -122, -48, 107, 68, -88, 11, 62, -16, -111, 75, 79, -74, -1, -10, -71, -40, 27, -67, -31, -57, -15, 108, -16, -12, 122, 21, -126, 20, -93, -14, -82, -53, 122, -65, -118, 45, -94, -21, 48, -46, -23, -89, 115, 56, -41, 50, 2, -9, -55, -3, -11, 6, -38, 80, -30, 113, -11, 76, -76, -31, -110, 5, -128, -125, -101, 45, -106, -99, -89, -62, -67, -9, 51, 67, 108, 1, -26, 0, -88, 96, -10, 63, 77, -105, -33, 28, -123, 62, -91, 8, 116, -80, 99, -8, 25, -16, -68, 5, 73, -120, 120, -70, 116, 50, -36, -122, 112, 24, 97, 38, -31, -91, -57, 75, 38, -97, -39, -27, -22, -101, 68, 94, -71, 43, 11, 92, 23, -110, -115, -76, 72, -109, 19, 96, 124, 46, 44, -63, -52, -78, 3, 116, 12, -49, 107, -69, -80, -49, -117, -20, -74, 54, 12, 122, 13, 39, -126, 96, 99, -117, 52, 72, -40, -49, -80, -37, 115, 80, -4, -56, 14, 109, 3, 39, -82, -36, 50, -106, -98, 125, -113, 27, 34, -100, 93, 83, -103, -64, -1, 67, 116, 73, 111, -10, 69, 65, -77, 120, 32, -104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.817695772449);
    msg.setSource(5760U);
    msg.setSourceEntity(252U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(224U);
    msg.type = 11U;
    msg.frequency = 3593149512U;
    msg.min_range = 23923U;
    msg.max_range = 16553U;
    msg.bits_per_point = 96U;
    msg.scale_factor = 0.377637622801;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.371544965476;
    tmp_msg_0.beam_height = 0.63440431505;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-114, 75, -100, -124, -46, 4, 43, -37, -85, -127, 66, -21, -35, -77, 116, 92, -127, 89, 120, -33, 126, -30, 37, 63, 19, 66, 18, -111, 63, -106, -33, -14, -62, 121, 80, 35, -119, -57, -119, 124, -62, 69, -40, 100, -2, 29, 71, -111, -112, -58};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.39973078648);
    msg.setSource(51745U);
    msg.setSourceEntity(114U);
    msg.setDestination(21590U);
    msg.setDestinationEntity(110U);
    msg.type = 111U;
    msg.frequency = 995818285U;
    msg.min_range = 6584U;
    msg.max_range = 4188U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.109425670151;
    const char tmp_msg_0[] = {55, 81, 121, -38, 116, -95, 99, -11, -46, -87, -21, 111, -123, 80, 15, -69, 120, 66, 126, -45, -84, -95, 60, -84, -2, 33, 118, -127, 19, -75, -109, 102, 112, 78, 3, -76, -52, 113, 107, 104, -87, 71, -66, 117, 28, 66, -69, 44, 19, 14, 80, -32, -35, -95, 63, -15, 21, -64, 118, 11, 67, -57, 114, 89, -45, -127, 118, -102, 64, 22, 42, 6, 120, 122, 124, 109, 33, -23, -57, 6, -121, -64, -26, -102, 36, 86, -45, 12, 63, 124, -99, -84, -67, 115, -57, 5, 98, 52, -21, 99, -95, -71, 85, -37, 82, -15, -89, -67, -100, -51, 67, -26, -9, -23, 66, -60, -72, -16, 11, 49, -95, -48, 118, 1, 83, 48, -101, -118, 72, 116, -79, 88, 39, 7, -15, 48, -114, 25, 28, -16, -10, 17, -101, -83, -92, 6, 60, -17, -69, -71, 24, -114, 109, 28, 78, -77, -112, -9, 28, 67, 21, 93, -36, -25, 1, -33, -95, 115, -124, 44, 112, -126, 88, 40, -7, 96, 2, -51, 107, 25, 26, 35, -62, 1, -8, 34, 64, 11, 96, 126, -126, 60, -93, 28, 50, -73, 54, -16};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.132957914795);
    msg.setSource(47391U);
    msg.setSourceEntity(94U);
    msg.setDestination(13079U);
    msg.setDestinationEntity(94U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.825649472875);
    msg.setSource(61510U);
    msg.setSourceEntity(7U);
    msg.setDestination(33222U);
    msg.setDestinationEntity(26U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.214025708537);
    msg.setSource(38623U);
    msg.setSourceEntity(93U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.126994071577);
    msg.setSource(21726U);
    msg.setSourceEntity(149U);
    msg.setDestination(55281U);
    msg.setDestinationEntity(236U);
    msg.op = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.235812754372);
    msg.setSource(47985U);
    msg.setSourceEntity(167U);
    msg.setDestination(45588U);
    msg.setDestinationEntity(82U);
    msg.op = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.0933130979304);
    msg.setSource(30508U);
    msg.setSourceEntity(233U);
    msg.setDestination(31654U);
    msg.setDestinationEntity(43U);
    msg.op = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.40847333984);
    msg.setSource(5296U);
    msg.setSourceEntity(179U);
    msg.setDestination(18624U);
    msg.setDestinationEntity(189U);
    msg.value = 0.680516849738;
    msg.confidence = 0.109813082933;
    msg.opmodes.assign("YRFTYEKPGGPJIKRDMHKYPPOYTZDVMXDGUGUJDWRUJFCWZNCXNYQTJBKAKRAYWQGRROSOALAKFCAERXJBFHPOBYDXUQTEIZTLVCINORNMZSXIXCYSDYVCAML");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.821698400358);
    msg.setSource(32934U);
    msg.setSourceEntity(102U);
    msg.setDestination(23226U);
    msg.setDestinationEntity(196U);
    msg.value = 0.318634078794;
    msg.confidence = 0.0634927508325;
    msg.opmodes.assign("LPSTVTZTTVRFUVMPGQZOFECMPDILYAVEYNKNCPHIMCZSGDLUBLFJWNGZTWEXXQUBXBOODMKIRUNFEMAGRNFCJFDDOONSODELBPWYQYXYUUIJZRWLSYUASYRVBOWGVAMDKGARPTVFOAKRRQYMIKXCRQWKCZHTIJJVWFDWXAWQCBPBIGMSRDBVHZJGKKZHJAGJOIQEHPMFXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.537886676841);
    msg.setSource(42140U);
    msg.setSourceEntity(129U);
    msg.setDestination(60924U);
    msg.setDestinationEntity(19U);
    msg.value = 0.139012503423;
    msg.confidence = 0.739815039021;
    msg.opmodes.assign("XVDQURVRCUJRPSKYKAZCIIABNEADLWEZZJKUVUBEIDBSLZPTQSPFYYBHFVSWNFRPTOYQNMTJHUDIFNNNXRGYOGFMZLCXMVZVNTPJBLYFNYHDNOHLOBRZAQPZUCLUHEMEFIPFHLCZQLKHFKMXHSUBJMEYXOATGAJEWXKOSDWXDNZTVLQIGDCRICESVABSGPAWTCWEOJHMCFYUDVAQIWXYLHIRQOJGTSKWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.742994332242);
    msg.setSource(20149U);
    msg.setSourceEntity(50U);
    msg.setDestination(7231U);
    msg.setDestinationEntity(66U);
    msg.itow = 773235837U;
    msg.lat = 0.558282612383;
    msg.lon = 0.62554236625;
    msg.height_ell = 0.768573797277;
    msg.height_sea = 0.448990354847;
    msg.hacc = 0.716902754343;
    msg.vacc = 0.918384190949;
    msg.vel_n = 0.00654302631352;
    msg.vel_e = 0.983068610849;
    msg.vel_d = 0.500393297966;
    msg.speed = 0.564138467507;
    msg.gspeed = 0.980158821468;
    msg.heading = 0.748860089809;
    msg.sacc = 0.297577787247;
    msg.cacc = 0.381345771317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.123475708448);
    msg.setSource(41044U);
    msg.setSourceEntity(76U);
    msg.setDestination(33341U);
    msg.setDestinationEntity(122U);
    msg.itow = 3577120765U;
    msg.lat = 0.405106411664;
    msg.lon = 0.811131183519;
    msg.height_ell = 0.944444187906;
    msg.height_sea = 0.708342742731;
    msg.hacc = 0.240546643977;
    msg.vacc = 0.479992173897;
    msg.vel_n = 0.35573302526;
    msg.vel_e = 0.581674108577;
    msg.vel_d = 0.445924173857;
    msg.speed = 0.974101084064;
    msg.gspeed = 0.608232587526;
    msg.heading = 0.349459946596;
    msg.sacc = 0.64172088525;
    msg.cacc = 0.252601003694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.245736434132);
    msg.setSource(35837U);
    msg.setSourceEntity(17U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(81U);
    msg.itow = 2646031522U;
    msg.lat = 0.988054649332;
    msg.lon = 0.228253620153;
    msg.height_ell = 0.674578819163;
    msg.height_sea = 0.782386495244;
    msg.hacc = 0.85470636513;
    msg.vacc = 0.85112257567;
    msg.vel_n = 0.770546007027;
    msg.vel_e = 0.952364151911;
    msg.vel_d = 0.740464766894;
    msg.speed = 0.913730350154;
    msg.gspeed = 0.752110176852;
    msg.heading = 0.212504765372;
    msg.sacc = 0.150904618134;
    msg.cacc = 0.776175268274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.961596528277);
    msg.setSource(20188U);
    msg.setSourceEntity(134U);
    msg.setDestination(64029U);
    msg.setDestinationEntity(120U);
    msg.id = 123U;
    msg.value = 0.608027579067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.340580198647);
    msg.setSource(34795U);
    msg.setSourceEntity(168U);
    msg.setDestination(15610U);
    msg.setDestinationEntity(38U);
    msg.id = 213U;
    msg.value = 0.103331215188;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.224147870021);
    msg.setSource(30294U);
    msg.setSourceEntity(143U);
    msg.setDestination(45078U);
    msg.setDestinationEntity(194U);
    msg.id = 59U;
    msg.value = 0.523550683098;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.263312732044);
    msg.setSource(10600U);
    msg.setSourceEntity(239U);
    msg.setDestination(18324U);
    msg.setDestinationEntity(193U);
    msg.x = 0.537709615309;
    msg.y = 0.425391553543;
    msg.z = 0.113546016055;
    msg.phi = 0.0102622211025;
    msg.theta = 0.859538138698;
    msg.psi = 0.483050468165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.433924361961);
    msg.setSource(64829U);
    msg.setSourceEntity(169U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(125U);
    msg.x = 0.112103451037;
    msg.y = 0.911293111549;
    msg.z = 0.320322003454;
    msg.phi = 0.520020247046;
    msg.theta = 0.675054195858;
    msg.psi = 0.599496016609;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.100459148458);
    msg.setSource(41896U);
    msg.setSourceEntity(102U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(98U);
    msg.x = 0.298630633344;
    msg.y = 0.958172844603;
    msg.z = 0.463964341808;
    msg.phi = 0.166220932582;
    msg.theta = 0.448433518416;
    msg.psi = 0.440420013066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.251460561882);
    msg.setSource(63748U);
    msg.setSourceEntity(112U);
    msg.setDestination(24760U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.180210729035;
    msg.beam_height = 0.680900369452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.116046686506);
    msg.setSource(8054U);
    msg.setSourceEntity(55U);
    msg.setDestination(23219U);
    msg.setDestinationEntity(117U);
    msg.beam_width = 0.249668410893;
    msg.beam_height = 0.73070544807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.822553758721);
    msg.setSource(53368U);
    msg.setSourceEntity(174U);
    msg.setDestination(56550U);
    msg.setDestinationEntity(232U);
    msg.beam_width = 0.427832105735;
    msg.beam_height = 0.0152050368838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.0267814201973);
    msg.setSource(12100U);
    msg.setSourceEntity(186U);
    msg.setDestination(27961U);
    msg.setDestinationEntity(248U);
    msg.sane = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.17774327274);
    msg.setSource(40149U);
    msg.setSourceEntity(119U);
    msg.setDestination(29228U);
    msg.setDestinationEntity(11U);
    msg.sane = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.983119891145);
    msg.setSource(54184U);
    msg.setSourceEntity(151U);
    msg.setDestination(56282U);
    msg.setDestinationEntity(226U);
    msg.sane = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.123536897926);
    msg.setSource(62030U);
    msg.setSourceEntity(183U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(75U);
    msg.id = 226U;
    msg.zoom = 131U;
    msg.action = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.573004118321);
    msg.setSource(64854U);
    msg.setSourceEntity(100U);
    msg.setDestination(849U);
    msg.setDestinationEntity(198U);
    msg.id = 90U;
    msg.zoom = 15U;
    msg.action = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.156127766223);
    msg.setSource(31148U);
    msg.setSourceEntity(186U);
    msg.setDestination(50980U);
    msg.setDestinationEntity(171U);
    msg.id = 124U;
    msg.zoom = 52U;
    msg.action = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.880970155816);
    msg.setSource(28306U);
    msg.setSourceEntity(237U);
    msg.setDestination(30758U);
    msg.setDestinationEntity(142U);
    msg.id = 56U;
    msg.value = 0.849027926783;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.332932819523);
    msg.setSource(38008U);
    msg.setSourceEntity(170U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(254U);
    msg.id = 26U;
    msg.value = 0.77706074031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.645395614988);
    msg.setSource(34881U);
    msg.setSourceEntity(77U);
    msg.setDestination(48877U);
    msg.setDestinationEntity(0U);
    msg.id = 6U;
    msg.value = 0.944519289745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.849932229952);
    msg.setSource(19653U);
    msg.setSourceEntity(185U);
    msg.setDestination(55581U);
    msg.setDestinationEntity(48U);
    msg.id = 58U;
    msg.value = 0.907710368605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.522379889639);
    msg.setSource(40531U);
    msg.setSourceEntity(183U);
    msg.setDestination(28880U);
    msg.setDestinationEntity(141U);
    msg.id = 129U;
    msg.value = 0.930051067509;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.539467095253);
    msg.setSource(11181U);
    msg.setSourceEntity(197U);
    msg.setDestination(32495U);
    msg.setDestinationEntity(105U);
    msg.id = 230U;
    msg.value = 0.916384958854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.150525564314);
    msg.setSource(39269U);
    msg.setSourceEntity(126U);
    msg.setDestination(61353U);
    msg.setDestinationEntity(221U);
    msg.id = 159U;
    msg.angle = 0.189979406161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.134359616135);
    msg.setSource(7558U);
    msg.setSourceEntity(60U);
    msg.setDestination(5477U);
    msg.setDestinationEntity(91U);
    msg.id = 248U;
    msg.angle = 0.370594923747;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.135748496539);
    msg.setSource(21684U);
    msg.setSourceEntity(44U);
    msg.setDestination(26678U);
    msg.setDestinationEntity(85U);
    msg.id = 220U;
    msg.angle = 0.942635909057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.506151696534);
    msg.setSource(47568U);
    msg.setSourceEntity(122U);
    msg.setDestination(42957U);
    msg.setDestinationEntity(191U);
    msg.op = 79U;
    msg.actions.assign("YSNHMZMFEJBSVZQCJFSCGWPMBGQFBBWOYHSYNHRAJQURBZATUSLKVCTLUTNGKFURRQZMZOFIVLTKNGDWKYCYNJVMQMOHGWXSPVSZPMFDOAPEDNPVDFUTMTSSWEXFHTHEVBAEHADEQDRLFWAMOLIUNLJTIWUNCPMZARRXBWJUYRQRLCXZKPGAZBCQZQNKVFXGJKPNPOCJDKGHTIIXHOKLOICXDIYTXEPYSIKGLOEJDRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.688308829354);
    msg.setSource(25306U);
    msg.setSourceEntity(88U);
    msg.setDestination(28144U);
    msg.setDestinationEntity(8U);
    msg.op = 31U;
    msg.actions.assign("JQIYUCSYGEMDOGSZRUUSGILLKTBCRGKZOTXRBCCQIEZMXJZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.255405485656);
    msg.setSource(30180U);
    msg.setSourceEntity(249U);
    msg.setDestination(36200U);
    msg.setDestinationEntity(211U);
    msg.op = 15U;
    msg.actions.assign("WYVEDWNREIQEAYGQMODQFSEDNPKAUJIKEAAOTRXGIAPLRLTROFFKVMBFFZFMYLLKWTGWCVUJSIJPDLQTEUNRHPNSBUKJFEGXHKTXGTWYNXDNEPYVXOIBVJMBDHJKOPJONZARVBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.123733275826);
    msg.setSource(63123U);
    msg.setSourceEntity(56U);
    msg.setDestination(15713U);
    msg.setDestinationEntity(136U);
    msg.actions.assign("GVKVFABYQWJFSKCXUSRSICMDWBOPYVSAUWVOEIOKCYWTMPQHSNNWUGXCMRBXNKKRONKQAOXJNIJFJFPUETIZCRGHLRTQBZPJQYLZRONJUBDTAHBARPDKRZETDSLFFIJUDHGFHXEBXIUKMPOWNIMDXKHNARJYZHMBWEQWGMGCAPGSCTDOLM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.539415167372);
    msg.setSource(44933U);
    msg.setSourceEntity(187U);
    msg.setDestination(12076U);
    msg.setDestinationEntity(211U);
    msg.actions.assign("UVZJQWKNJBNPZZSTGHDWTGLMPIOZAMECEAUFRLRTBTYRDWXENXOKQXVBKHFQLULDRSBSWGCKOFZCMFNTCFSMSXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.924741239175);
    msg.setSource(44488U);
    msg.setSourceEntity(214U);
    msg.setDestination(12305U);
    msg.setDestinationEntity(172U);
    msg.actions.assign("TYTZRHRFSQCFUILKMCMBYBXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.943195461712);
    msg.setSource(23587U);
    msg.setSourceEntity(50U);
    msg.setDestination(37825U);
    msg.setDestinationEntity(121U);
    msg.button = 237U;
    msg.value = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.0465925310505);
    msg.setSource(16227U);
    msg.setSourceEntity(235U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(247U);
    msg.button = 45U;
    msg.value = 208U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.143083397834);
    msg.setSource(39843U);
    msg.setSourceEntity(74U);
    msg.setDestination(16792U);
    msg.setDestinationEntity(165U);
    msg.button = 70U;
    msg.value = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.926870758388);
    msg.setSource(24980U);
    msg.setSourceEntity(135U);
    msg.setDestination(19729U);
    msg.setDestinationEntity(180U);
    msg.op = 82U;
    msg.text.assign("AXUYSOJRBYRWYGPTDNYTXGWMXMPMVQIQWEKWCDKTVOBBARZGUFCRBXFXTWUNMQSNLSKFASCKHZYRZIGOMWTDEQUJAJHKOUXYKKNBEEPDIWCYFDBHGLSUGLZJTYCFZAOHTYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.0553607078448);
    msg.setSource(42664U);
    msg.setSourceEntity(199U);
    msg.setDestination(47110U);
    msg.setDestinationEntity(194U);
    msg.op = 79U;
    msg.text.assign("GHLMKGOMRGNMOPFIXBVUCBTQXDVZNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.611099481501);
    msg.setSource(12240U);
    msg.setSourceEntity(55U);
    msg.setDestination(26035U);
    msg.setDestinationEntity(135U);
    msg.op = 248U;
    msg.text.assign("JPNIIDDGMBOTRCJXTGRYGFLTZRNOLXDIZJWOPWTPNQNODEQYMUZSAHGHSIZFRAQQKZDAEFXWPMTJGINULLLKFZRHYCBMONNRVACWKRJFUWLHHMQAEXMBWKTXJBGHWKRLALBHQVAQPBINLAOV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.203554239904);
    msg.setSource(28234U);
    msg.setSourceEntity(218U);
    msg.setDestination(22563U);
    msg.setDestinationEntity(91U);
    msg.op = 193U;
    msg.time_remain = 0.631941831504;
    msg.sched_time = 0.693974395413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.142189012688);
    msg.setSource(20813U);
    msg.setSourceEntity(31U);
    msg.setDestination(35428U);
    msg.setDestinationEntity(31U);
    msg.op = 142U;
    msg.time_remain = 0.902724558013;
    msg.sched_time = 0.507241841745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.829361129858);
    msg.setSource(63997U);
    msg.setSourceEntity(41U);
    msg.setDestination(20217U);
    msg.setDestinationEntity(97U);
    msg.op = 241U;
    msg.time_remain = 0.82809779191;
    msg.sched_time = 0.865092592701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.250769090153);
    msg.setSource(26033U);
    msg.setSourceEntity(88U);
    msg.setDestination(16518U);
    msg.setDestinationEntity(17U);
    msg.name.assign("REMQOBFCPJRKGMDYJXBAPGMPEDEONSLPVJHRCMKWXIAFL");
    msg.op = 28U;
    msg.sched_time = 0.594091070669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.54020599798);
    msg.setSource(36060U);
    msg.setSourceEntity(58U);
    msg.setDestination(43702U);
    msg.setDestinationEntity(18U);
    msg.name.assign("LBYIRZTGGAPHCUXPHTHOGEYJFRNITOZSQEOXLUHZFDVMSYLKEMJHTUCBJVFFWVRZOUJWFLXMPYZRNQMMDENSZMIWUAKTFEDKYCIMFCP");
    msg.op = 230U;
    msg.sched_time = 0.0614171553584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.937465720294);
    msg.setSource(56052U);
    msg.setSourceEntity(141U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(108U);
    msg.name.assign("KTEFRZASIEBZQTUQYYDLUOOWCTKWXAFREMCCDHPJRBZMONRIHWOUWJFGICARYEQSLXZSQWVAZNHJSHGIHMXVRYMDDFCVVPGZSUNFATRLTBHJGFLKJDELTXOBEVKLWTXZJONDMIQCNPZDNPMYCSSACWQUKQWOOFUNWFGCURPEDXRBKNYUQBMKNEFXPZTVLIBUIPJGYBPCVAHGIIGJQNOHXDUZ");
    msg.op = 156U;
    msg.sched_time = 0.217936996971;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.154368760802);
    msg.setSource(51973U);
    msg.setSourceEntity(23U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(6U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.419101547159);
    msg.setSource(52594U);
    msg.setSourceEntity(141U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(31U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.112863497356);
    msg.setSource(23280U);
    msg.setSourceEntity(91U);
    msg.setDestination(15718U);
    msg.setDestinationEntity(254U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.26913026402);
    msg.setSource(33699U);
    msg.setSourceEntity(215U);
    msg.setDestination(23986U);
    msg.setDestinationEntity(102U);
    msg.name.assign("RJNFMMJIVRJPTZQXLADTKZANEVQXNBISYELAGMHTWVIQBGWIEXHLILUVTBYMTSIOQWDNRTOKQBMOMUCBOZJBYEYWJWQAYGDJUFYXHEPFAGUKEPNEEHNCABCFSNMUHSNFOUDWEFAQGGXLKTZCETXBPVDFXYTUHATJLINFWQQSXNXSRUKWYGRPZDKXCAGSJJCLWCGKPHLSYVLKVWRKRMYOFRMCIUVLICOHDBZSUOFOHDZVDPRZRPKV");
    msg.state = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.904085168128);
    msg.setSource(4066U);
    msg.setSourceEntity(206U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(210U);
    msg.name.assign("XCFXOUZAATXXHBRAPOMNZKGJKTTSYZLRKJHWMSTPRTMSQFIYSQNVYDPGHNXFHMTJICGO");
    msg.state = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.405477954986);
    msg.setSource(25862U);
    msg.setSourceEntity(74U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(142U);
    msg.name.assign("AKNGWPKZGKDRSZYIIVDPRCJYNJAMIDTRQJAQIKPSHGJZFLRRUQKKOJIOWZSADSTGPVBNFFXVEEWAKPPFBHYQMJGDSOMLNTMHLFAACWGWUFEYHULZWUMLUCRMWWBXTTCUJVBINOUXNWTLCSDSROBZYMQJZIDZBXLKAVWYDOMHLQEXQLTXXDYSCFOSGIVBAQBUZVXEQHRODFGGLCVNUQSCKBVETEBYTCHEXGOKYMTHIHPXRNJ");
    msg.state = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.440293797132);
    msg.setSource(57948U);
    msg.setSourceEntity(156U);
    msg.setDestination(32896U);
    msg.setDestinationEntity(178U);
    msg.name.assign("AGPXOBTYWPMCCLKQSZTJBTDRAJXSGMOEGXUJYHVQAWFWPPQCGMFRCIEKMJFSZTRHHTOVITUVZYUBSLDVZCXNTDLDEVVIONMIDNTLYDGNMOQPRNRPHQOSPEEVBLQRZJENFEYBHGHKKKCWGUIDQVWAWKESFOVXLRDNTRYQ");
    msg.value = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.45347102252);
    msg.setSource(7457U);
    msg.setSourceEntity(170U);
    msg.setDestination(26387U);
    msg.setDestinationEntity(192U);
    msg.name.assign("BKWXJGRYGZSJQSFBXHODXQNZWEZUMWTKVUSCLLODPQBGTMGFPAVCWHUQDKEXTVNQMMGPVVCLIIOQMIGEWMMU");
    msg.value = 19U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.769296253825);
    msg.setSource(58006U);
    msg.setSourceEntity(137U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(161U);
    msg.name.assign("LSNBJZFAXXFRJWFFOODYFWHVSOSITWRSGPTZSOWWXEAIIVNHHDBRUVLXVLDNQGEXPBYBSFXJENWTXKZMEGKZMUGMBNTGEHTRODPCRCWCRQUQDQIOKPFKAYQUI");
    msg.value = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.663825918909);
    msg.setSource(56563U);
    msg.setSourceEntity(179U);
    msg.setDestination(37311U);
    msg.setDestinationEntity(83U);
    msg.name.assign("CIEUEZLZJKJIHMTREFOHQMUOUBYDQHMUODUODPOSHRISLAXAWWAVYIDRACBFBR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.239681185922);
    msg.setSource(43939U);
    msg.setSourceEntity(14U);
    msg.setDestination(59210U);
    msg.setDestinationEntity(166U);
    msg.name.assign("ZFTBNXYHCSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.097874140311);
    msg.setSource(52998U);
    msg.setSourceEntity(230U);
    msg.setDestination(44592U);
    msg.setDestinationEntity(230U);
    msg.name.assign("SVBYAYHDKZAINSLVOCNDZSXTEVGTZEVUMDMUPFPWXEPLKZCHSKYULJDHHFVZLVABKGCHZMWNIFORXNEDQRUCOEICWJXFFSDTBFRVTUXANOQNIVORJYRBQCJNFMKQSYXGOMWIAMBDLQSAPBYEXZFLDOKQGTEINSRPOTEKBKVVHXMWQJSBGDRWBEOHGFUHYYCWZKIWYAGIJFJIPLOKUQPTQR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.310269094549);
    msg.setSource(34493U);
    msg.setSourceEntity(151U);
    msg.setDestination(41366U);
    msg.setDestinationEntity(28U);
    msg.name.assign("JCCGYWRSDXVZJZGDMFDKQMXAJFMTVYHZHHODEBTWMTKWQDJWAQUQTPOMAZYJTJXFQLVAUTHGADMORIIGLCCJERDSPUKVJOBRLOPZCTBDENSNCQOBRUWCFNFVUHIMTXLYISWWMNGRJNYXPKRIFYXXEOLQQLKBAXFVKFNGVLYBMEEUENOLSYLXOQMNIWSZIHWF");
    msg.value = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.762738235988);
    msg.setSource(31658U);
    msg.setSourceEntity(202U);
    msg.setDestination(14709U);
    msg.setDestinationEntity(20U);
    msg.name.assign("OZQNZDHPVJXHVKTVVUAECVHYONPAAOM");
    msg.value = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.886451957628);
    msg.setSource(40845U);
    msg.setSourceEntity(162U);
    msg.setDestination(63401U);
    msg.setDestinationEntity(203U);
    msg.name.assign("QCSGQKNKEFDSXXJLRYYSTTCOPFMXFOFSGYHYCCKQISPXWWDITYZRBPCAAFVD");
    msg.value = 124U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.510141241584);
    msg.setSource(28554U);
    msg.setSourceEntity(210U);
    msg.setDestination(37309U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.119549009515;
    msg.lon = 0.942256565078;
    msg.height = 0.857626089825;
    msg.x = 0.817877959185;
    msg.y = 0.513160176638;
    msg.z = 0.955713162673;
    msg.phi = 0.41272677306;
    msg.theta = 0.934185957588;
    msg.psi = 0.0060436320662;
    msg.u = 0.481178474916;
    msg.v = 0.398081798187;
    msg.w = 0.833995636614;
    msg.vx = 0.377215038762;
    msg.vy = 0.372606920794;
    msg.vz = 0.137181483637;
    msg.p = 0.070937255407;
    msg.q = 0.87453510514;
    msg.r = 0.693270664035;
    msg.depth = 0.0748774637734;
    msg.alt = 0.673097374315;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.331503944041);
    msg.setSource(65020U);
    msg.setSourceEntity(192U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.457539652152;
    msg.lon = 0.864546475497;
    msg.height = 0.416734035613;
    msg.x = 0.909334193226;
    msg.y = 0.0648753094018;
    msg.z = 0.515695333887;
    msg.phi = 0.537087240538;
    msg.theta = 0.0465866685648;
    msg.psi = 0.231875386062;
    msg.u = 0.651106431506;
    msg.v = 0.0789031207154;
    msg.w = 0.184342603336;
    msg.vx = 0.438381165322;
    msg.vy = 0.899341840789;
    msg.vz = 0.655847785838;
    msg.p = 0.632450005623;
    msg.q = 0.237935147353;
    msg.r = 0.46564463232;
    msg.depth = 0.968846129569;
    msg.alt = 0.99099052171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.876788612736);
    msg.setSource(63705U);
    msg.setSourceEntity(178U);
    msg.setDestination(41782U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.666231340757;
    msg.lon = 0.753812178361;
    msg.height = 0.694926001112;
    msg.x = 0.623909158047;
    msg.y = 0.56131016471;
    msg.z = 0.769667910349;
    msg.phi = 0.044385100267;
    msg.theta = 0.0792620729854;
    msg.psi = 0.599809683792;
    msg.u = 0.853360078121;
    msg.v = 0.724573824713;
    msg.w = 0.613945424097;
    msg.vx = 0.812402690376;
    msg.vy = 0.685307885378;
    msg.vz = 0.0407330807793;
    msg.p = 0.933412272466;
    msg.q = 0.909385704253;
    msg.r = 0.45775831247;
    msg.depth = 0.373103738925;
    msg.alt = 0.0711524704658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.760413548786);
    msg.setSource(60240U);
    msg.setSourceEntity(158U);
    msg.setDestination(41437U);
    msg.setDestinationEntity(227U);
    msg.x = 0.823591158988;
    msg.y = 0.400003405102;
    msg.z = 0.727085767644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.482725462952);
    msg.setSource(59933U);
    msg.setSourceEntity(244U);
    msg.setDestination(42029U);
    msg.setDestinationEntity(76U);
    msg.x = 0.577669138313;
    msg.y = 0.775571220088;
    msg.z = 0.530185915559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.119267692764);
    msg.setSource(5708U);
    msg.setSourceEntity(25U);
    msg.setDestination(25666U);
    msg.setDestinationEntity(118U);
    msg.x = 0.106853436096;
    msg.y = 0.0540785538297;
    msg.z = 0.380408713836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.174548019884);
    msg.setSource(35581U);
    msg.setSourceEntity(84U);
    msg.setDestination(25580U);
    msg.setDestinationEntity(185U);
    msg.value = 0.766151218411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.236789456004);
    msg.setSource(50759U);
    msg.setSourceEntity(219U);
    msg.setDestination(50697U);
    msg.setDestinationEntity(78U);
    msg.value = 0.980937723988;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.641878264605);
    msg.setSource(47334U);
    msg.setSourceEntity(116U);
    msg.setDestination(40721U);
    msg.setDestinationEntity(253U);
    msg.value = 0.43146447634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.4383068991);
    msg.setSource(14174U);
    msg.setSourceEntity(142U);
    msg.setDestination(6037U);
    msg.setDestinationEntity(248U);
    msg.value = 0.891245647843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.491592064913);
    msg.setSource(4141U);
    msg.setSourceEntity(216U);
    msg.setDestination(13957U);
    msg.setDestinationEntity(142U);
    msg.value = 0.407746449876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.117222789157);
    msg.setSource(28526U);
    msg.setSourceEntity(86U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(9U);
    msg.value = 0.30126502908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.576905517503);
    msg.setSource(8796U);
    msg.setSourceEntity(128U);
    msg.setDestination(62660U);
    msg.setDestinationEntity(128U);
    msg.x = 0.632503827431;
    msg.y = 0.238728365169;
    msg.z = 0.204271036992;
    msg.phi = 0.0627899449871;
    msg.theta = 0.504582062585;
    msg.psi = 0.94688642729;
    msg.p = 0.575518167102;
    msg.q = 0.32827058555;
    msg.r = 0.963298877404;
    msg.u = 0.246937787521;
    msg.v = 0.957130537304;
    msg.w = 0.571816256134;
    msg.bias_psi = 0.840556862578;
    msg.bias_r = 0.0435068782561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.625288283457);
    msg.setSource(20570U);
    msg.setSourceEntity(89U);
    msg.setDestination(53992U);
    msg.setDestinationEntity(79U);
    msg.x = 0.784598698711;
    msg.y = 0.34398469601;
    msg.z = 0.081018068516;
    msg.phi = 0.0275126689127;
    msg.theta = 0.276144454032;
    msg.psi = 0.84849902242;
    msg.p = 0.366723262663;
    msg.q = 0.420156006537;
    msg.r = 0.00077378760475;
    msg.u = 0.786872140552;
    msg.v = 0.460582322533;
    msg.w = 0.129924034572;
    msg.bias_psi = 0.838114311185;
    msg.bias_r = 0.776939197636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.425949539866);
    msg.setSource(48102U);
    msg.setSourceEntity(196U);
    msg.setDestination(37927U);
    msg.setDestinationEntity(67U);
    msg.x = 0.389297833421;
    msg.y = 0.0401480003171;
    msg.z = 0.304050356814;
    msg.phi = 0.70973806332;
    msg.theta = 0.163122223623;
    msg.psi = 0.924952158152;
    msg.p = 0.0311688961617;
    msg.q = 0.729139437505;
    msg.r = 0.698595519884;
    msg.u = 0.457774063438;
    msg.v = 0.619609658631;
    msg.w = 0.431282617878;
    msg.bias_psi = 0.861307142812;
    msg.bias_r = 0.257986136209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.0382547421273);
    msg.setSource(60178U);
    msg.setSourceEntity(45U);
    msg.setDestination(52183U);
    msg.setDestinationEntity(51U);
    msg.bias_psi = 0.969620790619;
    msg.bias_r = 0.721197051454;
    msg.cog = 0.0573930516009;
    msg.cyaw = 0.180624873365;
    msg.lbl_rej_level = 0.99021048475;
    msg.gps_rej_level = 0.263122314291;
    msg.custom_x = 0.565657850387;
    msg.custom_y = 0.983015132054;
    msg.custom_z = 0.475273859931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.156566442228);
    msg.setSource(39457U);
    msg.setSourceEntity(49U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(39U);
    msg.bias_psi = 0.613023029764;
    msg.bias_r = 0.747089164656;
    msg.cog = 0.0730207376475;
    msg.cyaw = 0.23118342653;
    msg.lbl_rej_level = 0.0289927043776;
    msg.gps_rej_level = 0.617608689187;
    msg.custom_x = 0.255505557934;
    msg.custom_y = 0.0689586117372;
    msg.custom_z = 0.533462288244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.911204097022);
    msg.setSource(23610U);
    msg.setSourceEntity(213U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(141U);
    msg.bias_psi = 0.104780741431;
    msg.bias_r = 0.637005197391;
    msg.cog = 0.204583130212;
    msg.cyaw = 0.860785048011;
    msg.lbl_rej_level = 0.436915010588;
    msg.gps_rej_level = 0.242789057709;
    msg.custom_x = 0.39697283189;
    msg.custom_y = 0.138746179204;
    msg.custom_z = 0.656266719082;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.593474620525);
    msg.setSource(29224U);
    msg.setSourceEntity(149U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(191U);
    msg.utc_time = 0.862660793387;
    msg.reason = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.311747430881);
    msg.setSource(64161U);
    msg.setSourceEntity(118U);
    msg.setDestination(50142U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.74340139088;
    msg.reason = 63U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.685204681815);
    msg.setSource(34510U);
    msg.setSourceEntity(114U);
    msg.setDestination(3377U);
    msg.setDestinationEntity(64U);
    msg.utc_time = 0.025268171893;
    msg.reason = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.628749708118);
    msg.setSource(14524U);
    msg.setSourceEntity(20U);
    msg.setDestination(55603U);
    msg.setDestinationEntity(220U);
    msg.id = 71U;
    msg.range = 0.644632791782;
    msg.acceptance = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.628609818018);
    msg.setSource(46167U);
    msg.setSourceEntity(61U);
    msg.setDestination(45534U);
    msg.setDestinationEntity(123U);
    msg.id = 95U;
    msg.range = 0.45447708878;
    msg.acceptance = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.169874873314);
    msg.setSource(18777U);
    msg.setSourceEntity(220U);
    msg.setDestination(49707U);
    msg.setDestinationEntity(62U);
    msg.id = 212U;
    msg.range = 0.877931774922;
    msg.acceptance = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.904786066012);
    msg.setSource(44162U);
    msg.setSourceEntity(136U);
    msg.setDestination(31021U);
    msg.setDestinationEntity(33U);
    msg.type = 39U;
    msg.reason = 150U;
    msg.value = 0.845917913693;
    msg.timestep = 0.314325867043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.803671051568);
    msg.setSource(51898U);
    msg.setSourceEntity(100U);
    msg.setDestination(47484U);
    msg.setDestinationEntity(36U);
    msg.type = 168U;
    msg.reason = 31U;
    msg.value = 0.857743105011;
    msg.timestep = 0.679643284144;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.0459450629892);
    msg.setSource(24621U);
    msg.setSourceEntity(169U);
    msg.setDestination(16199U);
    msg.setDestinationEntity(102U);
    msg.type = 146U;
    msg.reason = 147U;
    msg.value = 0.577642970713;
    msg.timestep = 0.191811838378;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.951643354259);
    msg.setSource(27256U);
    msg.setSourceEntity(252U);
    msg.setDestination(65268U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.501832998294);
    msg.setSource(61386U);
    msg.setSourceEntity(51U);
    msg.setDestination(17159U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationReset msg;
    msg.setTimeStamp(0.0170060734152);
    msg.setSource(54893U);
    msg.setSourceEntity(229U);
    msg.setDestination(56656U);
    msg.setDestinationEntity(92U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationReset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.139853690967);
    msg.setSource(58970U);
    msg.setSourceEntity(99U);
    msg.setDestination(41969U);
    msg.setDestinationEntity(47U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IYPTWKXYACHIZISUMHLMQKKOTSFPCDSAWBYKFFCXDE");
    tmp_msg_0.lat = 0.157003545099;
    tmp_msg_0.lon = 0.461570319564;
    tmp_msg_0.depth = 0.398249775522;
    tmp_msg_0.query_channel = 78U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 184U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.296873741522;
    msg.y = 0.686212541718;
    msg.var_x = 0.571067502049;
    msg.var_y = 0.00815708635776;
    msg.distance = 0.934245398855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0552236619018);
    msg.setSource(8116U);
    msg.setSourceEntity(160U);
    msg.setDestination(5238U);
    msg.setDestinationEntity(138U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VZCCXQVMCUSFAOVEHMFTLDTQDAPDFPZPHGVUIFMARGSSHOKRKXYRYQEVZXBKWVYDPZENQUQUGUBZLGRHUNCNHBZJESBYNUZXTSJCOKAMGLYRENMGAOHBTFWXBFSDITODEBBQLCVPAIRBWFYJJEEORJQNLUYDSCHHTAHQAYVBT");
    tmp_msg_0.lat = 0.508521384341;
    tmp_msg_0.lon = 0.592389274433;
    tmp_msg_0.depth = 0.373974130855;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 8U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.460331154589;
    msg.y = 0.542571675487;
    msg.var_x = 0.985978054501;
    msg.var_y = 0.377589372474;
    msg.distance = 0.803072160164;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.404624072906);
    msg.setSource(42747U);
    msg.setSourceEntity(86U);
    msg.setDestination(4487U);
    msg.setDestinationEntity(230U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NFSPHTNCIOJWXOVHSUCLKBPHNNXPFLQHFDXWVMZISTPDOJKLDYITSEUBAULYRNQRGWWHVEOQDSRGGAVTERKBBXZJTSKHUEGEYUCMCPJJGTSUCDMHAMNACFHTZBILXBDOFVLEDFRIQJCUGUYZMSHDDVIEVWTAWXKWEJOBZ");
    tmp_msg_0.lat = 0.145052067243;
    tmp_msg_0.lon = 0.100371747308;
    tmp_msg_0.depth = 0.0105417854195;
    tmp_msg_0.query_channel = 170U;
    tmp_msg_0.reply_channel = 182U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.887064590944;
    msg.y = 0.819450991166;
    msg.var_x = 0.00634177530781;
    msg.var_y = 0.494685596948;
    msg.distance = 0.187743824276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.0448639815043);
    msg.setSource(5085U);
    msg.setSourceEntity(221U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(239U);
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.793429421194);
    msg.setSource(11914U);
    msg.setSourceEntity(249U);
    msg.setDestination(33270U);
    msg.setDestinationEntity(0U);
    msg.state = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.792944151849);
    msg.setSource(7496U);
    msg.setSourceEntity(91U);
    msg.setDestination(64327U);
    msg.setDestinationEntity(67U);
    msg.state = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.918770210461);
    msg.setSource(4267U);
    msg.setSourceEntity(59U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(183U);
    msg.x = 0.213776673847;
    msg.y = 0.0850701003885;
    msg.z = 0.404580238822;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.589384986903);
    msg.setSource(57751U);
    msg.setSourceEntity(203U);
    msg.setDestination(30328U);
    msg.setDestinationEntity(20U);
    msg.x = 0.876949531184;
    msg.y = 0.751782765048;
    msg.z = 0.715527245604;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.961492024401);
    msg.setSource(37094U);
    msg.setSourceEntity(63U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(145U);
    msg.x = 0.720921259482;
    msg.y = 0.931731420937;
    msg.z = 0.788466186449;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.783240715691);
    msg.setSource(52440U);
    msg.setSourceEntity(221U);
    msg.setDestination(49799U);
    msg.setDestinationEntity(121U);
    msg.value = 0.534580882126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.0396970751826);
    msg.setSource(35071U);
    msg.setSourceEntity(67U);
    msg.setDestination(29308U);
    msg.setDestinationEntity(225U);
    msg.value = 0.683116153221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.835505408763);
    msg.setSource(13152U);
    msg.setSourceEntity(73U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(72U);
    msg.value = 0.951493374803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.331566474965);
    msg.setSource(28477U);
    msg.setSourceEntity(40U);
    msg.setDestination(54297U);
    msg.setDestinationEntity(125U);
    msg.value = 0.859310522834;
    msg.z_units = 175U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.353842613157);
    msg.setSource(50799U);
    msg.setSourceEntity(148U);
    msg.setDestination(65502U);
    msg.setDestinationEntity(135U);
    msg.value = 0.979070596438;
    msg.z_units = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.197990406972);
    msg.setSource(25527U);
    msg.setSourceEntity(231U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(60U);
    msg.value = 0.444111343948;
    msg.z_units = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.402627356804);
    msg.setSource(56448U);
    msg.setSourceEntity(163U);
    msg.setDestination(41045U);
    msg.setDestinationEntity(23U);
    msg.value = 0.852198494571;
    msg.speed_units = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.506753183803);
    msg.setSource(58032U);
    msg.setSourceEntity(103U);
    msg.setDestination(2380U);
    msg.setDestinationEntity(44U);
    msg.value = 0.67690920788;
    msg.speed_units = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.583181000036);
    msg.setSource(6933U);
    msg.setSourceEntity(86U);
    msg.setDestination(65400U);
    msg.setDestinationEntity(229U);
    msg.value = 0.226594061773;
    msg.speed_units = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.404256572158);
    msg.setSource(25160U);
    msg.setSourceEntity(71U);
    msg.setDestination(55098U);
    msg.setDestinationEntity(22U);
    msg.value = 0.900036363268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.451811372299);
    msg.setSource(55429U);
    msg.setSourceEntity(102U);
    msg.setDestination(47335U);
    msg.setDestinationEntity(65U);
    msg.value = 0.158652693233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.826860632284);
    msg.setSource(29557U);
    msg.setSourceEntity(180U);
    msg.setDestination(58737U);
    msg.setDestinationEntity(5U);
    msg.value = 0.12965755406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.182895555992);
    msg.setSource(352U);
    msg.setSourceEntity(123U);
    msg.setDestination(62873U);
    msg.setDestinationEntity(9U);
    msg.value = 0.561952060641;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.991137669179);
    msg.setSource(21412U);
    msg.setSourceEntity(173U);
    msg.setDestination(34975U);
    msg.setDestinationEntity(141U);
    msg.value = 0.428516497008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.147188185052);
    msg.setSource(38683U);
    msg.setSourceEntity(209U);
    msg.setDestination(17566U);
    msg.setDestinationEntity(243U);
    msg.value = 0.805787630985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.156445700186);
    msg.setSource(891U);
    msg.setSourceEntity(164U);
    msg.setDestination(1254U);
    msg.setDestinationEntity(166U);
    msg.value = 0.670077906458;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.433093205119);
    msg.setSource(63436U);
    msg.setSourceEntity(11U);
    msg.setDestination(63531U);
    msg.setDestinationEntity(237U);
    msg.value = 0.135833375652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.973109417012);
    msg.setSource(30765U);
    msg.setSourceEntity(44U);
    msg.setDestination(40908U);
    msg.setDestinationEntity(38U);
    msg.value = 0.291804922196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.34116490037);
    msg.setSource(33293U);
    msg.setSourceEntity(152U);
    msg.setDestination(53879U);
    msg.setDestinationEntity(44U);
    msg.start_lat = 0.922739669354;
    msg.start_lon = 0.519474292414;
    msg.start_z = 0.946728812611;
    msg.start_z_units = 218U;
    msg.end_lat = 0.961439395414;
    msg.end_lon = 0.842528176933;
    msg.end_z = 0.569623949436;
    msg.end_z_units = 19U;
    msg.speed = 0.00323338660993;
    msg.speed_units = 69U;
    msg.lradius = 0.191674486557;
    msg.flags = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.865948685322);
    msg.setSource(48699U);
    msg.setSourceEntity(157U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(192U);
    msg.start_lat = 0.837224305476;
    msg.start_lon = 0.342712237995;
    msg.start_z = 0.281934231021;
    msg.start_z_units = 43U;
    msg.end_lat = 0.980471660717;
    msg.end_lon = 0.0152747297413;
    msg.end_z = 0.885826740669;
    msg.end_z_units = 58U;
    msg.speed = 0.924304735421;
    msg.speed_units = 160U;
    msg.lradius = 0.0044532482571;
    msg.flags = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.779236493219);
    msg.setSource(47410U);
    msg.setSourceEntity(45U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(95U);
    msg.start_lat = 0.799371643213;
    msg.start_lon = 0.00385755183885;
    msg.start_z = 0.0988743979348;
    msg.start_z_units = 216U;
    msg.end_lat = 0.553850686705;
    msg.end_lon = 0.529124377213;
    msg.end_z = 0.345808483422;
    msg.end_z_units = 112U;
    msg.speed = 0.915991181683;
    msg.speed_units = 158U;
    msg.lradius = 0.590485982764;
    msg.flags = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.792702592732);
    msg.setSource(11485U);
    msg.setSourceEntity(182U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(53U);
    msg.x = 0.0552185258149;
    msg.y = 0.176740687668;
    msg.z = 0.282034550934;
    msg.k = 0.558535133283;
    msg.m = 0.117519375795;
    msg.n = 0.272288541979;
    msg.flags = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.793616011602);
    msg.setSource(46895U);
    msg.setSourceEntity(33U);
    msg.setDestination(24470U);
    msg.setDestinationEntity(78U);
    msg.x = 0.689104523757;
    msg.y = 0.471026872841;
    msg.z = 0.875254389869;
    msg.k = 0.348428519483;
    msg.m = 0.424435047208;
    msg.n = 0.970472775505;
    msg.flags = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.165252528054);
    msg.setSource(39546U);
    msg.setSourceEntity(95U);
    msg.setDestination(59861U);
    msg.setDestinationEntity(223U);
    msg.x = 0.533684914589;
    msg.y = 0.943694864195;
    msg.z = 0.417593768216;
    msg.k = 0.745773011842;
    msg.m = 0.953381481945;
    msg.n = 0.462918709295;
    msg.flags = 146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.68730243077);
    msg.setSource(57271U);
    msg.setSourceEntity(138U);
    msg.setDestination(54487U);
    msg.setDestinationEntity(51U);
    msg.value = 0.091608162223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.117236896442);
    msg.setSource(12002U);
    msg.setSourceEntity(163U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(35U);
    msg.value = 0.846430394829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.238844689382);
    msg.setSource(63916U);
    msg.setSourceEntity(21U);
    msg.setDestination(53146U);
    msg.setDestinationEntity(19U);
    msg.value = 0.725964227539;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.813406379633);
    msg.setSource(19165U);
    msg.setSourceEntity(108U);
    msg.setDestination(63386U);
    msg.setDestinationEntity(219U);
    msg.u = 0.670077108707;
    msg.v = 0.376019524712;
    msg.w = 0.434836420454;
    msg.p = 0.26268117019;
    msg.q = 0.641246502736;
    msg.r = 0.813101146708;
    msg.flags = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.542516171057);
    msg.setSource(20083U);
    msg.setSourceEntity(22U);
    msg.setDestination(44313U);
    msg.setDestinationEntity(235U);
    msg.u = 0.834713069101;
    msg.v = 0.800386048501;
    msg.w = 0.859082205803;
    msg.p = 0.688266523704;
    msg.q = 0.131066576649;
    msg.r = 0.93149514104;
    msg.flags = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.770514305478);
    msg.setSource(44247U);
    msg.setSourceEntity(220U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(226U);
    msg.u = 0.466051196874;
    msg.v = 0.608708627987;
    msg.w = 0.290267125216;
    msg.p = 0.91197695013;
    msg.q = 0.401046054581;
    msg.r = 0.7803359544;
    msg.flags = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.289563261705);
    msg.setSource(12759U);
    msg.setSourceEntity(137U);
    msg.setDestination(24889U);
    msg.setDestinationEntity(7U);
    msg.start_lat = 0.487279995793;
    msg.start_lon = 0.556619464629;
    msg.start_z = 0.32316728921;
    msg.start_z_units = 250U;
    msg.end_lat = 0.662334522243;
    msg.end_lon = 0.914731152853;
    msg.end_z = 0.66926856957;
    msg.end_z_units = 249U;
    msg.lradius = 0.203060180351;
    msg.flags = 190U;
    msg.x = 0.50078116492;
    msg.y = 0.736308142161;
    msg.z = 0.412951913793;
    msg.vx = 0.152745608473;
    msg.vy = 0.773405417516;
    msg.vz = 0.408715316977;
    msg.course_error = 0.593134856491;
    msg.eta = 60609U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.335376694949);
    msg.setSource(1424U);
    msg.setSourceEntity(25U);
    msg.setDestination(18118U);
    msg.setDestinationEntity(203U);
    msg.start_lat = 0.361682947497;
    msg.start_lon = 0.439948561959;
    msg.start_z = 0.148020654619;
    msg.start_z_units = 113U;
    msg.end_lat = 0.427990276697;
    msg.end_lon = 0.875038538192;
    msg.end_z = 0.583207977174;
    msg.end_z_units = 56U;
    msg.lradius = 0.21378673696;
    msg.flags = 99U;
    msg.x = 0.944416679133;
    msg.y = 0.755765125053;
    msg.z = 0.156497237652;
    msg.vx = 0.902112293947;
    msg.vy = 0.240825668185;
    msg.vz = 0.587526113109;
    msg.course_error = 0.811788486039;
    msg.eta = 45736U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.270228883936);
    msg.setSource(11718U);
    msg.setSourceEntity(124U);
    msg.setDestination(2153U);
    msg.setDestinationEntity(228U);
    msg.start_lat = 0.212564385369;
    msg.start_lon = 0.0693342823269;
    msg.start_z = 0.267281444588;
    msg.start_z_units = 88U;
    msg.end_lat = 0.0327413427973;
    msg.end_lon = 0.542208089941;
    msg.end_z = 0.0372924324144;
    msg.end_z_units = 47U;
    msg.lradius = 0.66808123117;
    msg.flags = 48U;
    msg.x = 0.951860860814;
    msg.y = 0.339741944897;
    msg.z = 0.631672483318;
    msg.vx = 0.0148258833586;
    msg.vy = 0.0894663181718;
    msg.vz = 0.881249145303;
    msg.course_error = 0.28884427975;
    msg.eta = 63329U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.18822543325);
    msg.setSource(58236U);
    msg.setSourceEntity(121U);
    msg.setDestination(39719U);
    msg.setDestinationEntity(149U);
    msg.k = 0.77257938972;
    msg.m = 0.26316065424;
    msg.n = 0.992002640052;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.484589634625);
    msg.setSource(49235U);
    msg.setSourceEntity(80U);
    msg.setDestination(19639U);
    msg.setDestinationEntity(47U);
    msg.k = 0.90161477705;
    msg.m = 0.766919055506;
    msg.n = 0.0774343836762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.587816485006);
    msg.setSource(60976U);
    msg.setSourceEntity(12U);
    msg.setDestination(28053U);
    msg.setDestinationEntity(1U);
    msg.k = 0.314061685171;
    msg.m = 0.105317292275;
    msg.n = 0.735846339553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.056853906918);
    msg.setSource(54193U);
    msg.setSourceEntity(123U);
    msg.setDestination(11240U);
    msg.setDestinationEntity(181U);
    msg.p = 0.614621358423;
    msg.i = 0.103055665694;
    msg.d = 0.172315815281;
    msg.a = 0.160443365883;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.86447707846);
    msg.setSource(22790U);
    msg.setSourceEntity(29U);
    msg.setDestination(3069U);
    msg.setDestinationEntity(193U);
    msg.p = 0.421396459255;
    msg.i = 0.0442999010108;
    msg.d = 0.251235937297;
    msg.a = 0.838826130701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.0246738153004);
    msg.setSource(54935U);
    msg.setSourceEntity(103U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(143U);
    msg.p = 0.426455383431;
    msg.i = 0.341702357843;
    msg.d = 0.943957534609;
    msg.a = 0.999408296301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.714824038151);
    msg.setSource(41705U);
    msg.setSourceEntity(121U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(58U);
    msg.op = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.10341672037);
    msg.setSource(14694U);
    msg.setSourceEntity(48U);
    msg.setDestination(58842U);
    msg.setDestinationEntity(133U);
    msg.op = 250U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.697353253655);
    msg.setSource(364U);
    msg.setSourceEntity(185U);
    msg.setDestination(45395U);
    msg.setDestinationEntity(203U);
    msg.op = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.332447197184);
    msg.setSource(60941U);
    msg.setSourceEntity(10U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(149U);
    msg.timeout = 52807U;
    msg.lat = 0.61344385147;
    msg.lon = 0.000693001904967;
    msg.z = 0.83704855768;
    msg.z_units = 168U;
    msg.speed = 0.492334682996;
    msg.speed_units = 115U;
    msg.roll = 0.317323599323;
    msg.pitch = 0.896572706494;
    msg.yaw = 0.981845245256;
    msg.custom.assign("WLKIQFGNYMPDQLGEAQAKCLBPGYUUZCDNNOADOGLCHMHAQHZRHDNOWUWZKSLKLFEPIBFFSXREVHXZQVUQKMBWTBZATXIGLJISMORVRXCXUTQZWSRSBYNLIRFNFRPUVVGAGUCLJVHKYZVCBOVEOWOTNCZPMDOYTKEMBJHJESBCTSXQFPMZDNAAEWCAEIJPYUMPMJPIDKUQHVMXFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.943672828776);
    msg.setSource(24308U);
    msg.setSourceEntity(156U);
    msg.setDestination(41484U);
    msg.setDestinationEntity(175U);
    msg.timeout = 37796U;
    msg.lat = 0.0964760521372;
    msg.lon = 0.692709602329;
    msg.z = 0.527116503128;
    msg.z_units = 8U;
    msg.speed = 0.00523371511389;
    msg.speed_units = 227U;
    msg.roll = 0.0698160063443;
    msg.pitch = 0.219568589882;
    msg.yaw = 0.0321700164152;
    msg.custom.assign("QRVMTMAYVFBSNTONDALUFHEVSXWIZBKQKUIMLAITCCMDLXVFCBXWBZOAZKBMLPPRKTYYMDHVECGDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.376383207473);
    msg.setSource(11553U);
    msg.setSourceEntity(168U);
    msg.setDestination(13083U);
    msg.setDestinationEntity(56U);
    msg.timeout = 36115U;
    msg.lat = 0.14989026893;
    msg.lon = 0.473860143322;
    msg.z = 0.245399372885;
    msg.z_units = 250U;
    msg.speed = 0.915262769029;
    msg.speed_units = 198U;
    msg.roll = 0.832710610537;
    msg.pitch = 0.139458496705;
    msg.yaw = 0.848724382017;
    msg.custom.assign("RLMUDUCHSRYTDSIOMNAKOCXAJJDAZIQSWCXPPDUTSOGPMFQGINUBFQNZBE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.00452746555353);
    msg.setSource(11318U);
    msg.setSourceEntity(10U);
    msg.setDestination(27910U);
    msg.setDestinationEntity(132U);
    msg.timeout = 20836U;
    msg.lat = 0.48442133911;
    msg.lon = 0.0174751696227;
    msg.z = 0.603225994814;
    msg.z_units = 11U;
    msg.speed = 0.194863649716;
    msg.speed_units = 143U;
    msg.duration = 2060U;
    msg.radius = 0.245527029363;
    msg.flags = 141U;
    msg.custom.assign("IOELNJAZAFECJOACOIOSZPUVOBULSJKESRZENFFZJKP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.20481547028);
    msg.setSource(38357U);
    msg.setSourceEntity(218U);
    msg.setDestination(20543U);
    msg.setDestinationEntity(153U);
    msg.timeout = 23743U;
    msg.lat = 0.372586100515;
    msg.lon = 0.292198928787;
    msg.z = 0.707083842989;
    msg.z_units = 171U;
    msg.speed = 0.565524158034;
    msg.speed_units = 178U;
    msg.duration = 5016U;
    msg.radius = 0.431742550493;
    msg.flags = 127U;
    msg.custom.assign("DRVWEDMKGBCXJKQILLVSARRVMAIZTABXOTPZQWMIGPVPGIILVYMBBCLMAGTIHSPQTTHYRNDZZHAEZFNFCPVUJUHNLXWAKFOBWYGSPSFYWHACHKQVZEYXWSJJBIHJQWJKUFILDGDUEQHSFWAMGUXRXNRTBEDBQRNVRPNDUYEOOKBTOYTFAJHCGGZOZOQWGSFCUUDMXNSMNOSY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.8548721388);
    msg.setSource(37589U);
    msg.setSourceEntity(254U);
    msg.setDestination(47886U);
    msg.setDestinationEntity(199U);
    msg.timeout = 42186U;
    msg.lat = 0.00939561816583;
    msg.lon = 0.125581388715;
    msg.z = 0.211865738019;
    msg.z_units = 72U;
    msg.speed = 0.958590602856;
    msg.speed_units = 227U;
    msg.duration = 10540U;
    msg.radius = 0.825479165694;
    msg.flags = 212U;
    msg.custom.assign("SNJAZJZMVOIGTQNJCAOFWXNUTIROBDWERRLEBCXSUHZESRNTBWWGUSKGJTOULVODJQXMHVFBXGPYGQUPAMFPPJTEQCEAXRARLCKWAOSIWSLCSUPDXYIHZYPPQITKHHBIUVMAORTILCLYGBSYFYMDXGVLZNYWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.0807088884705);
    msg.setSource(7700U);
    msg.setSourceEntity(134U);
    msg.setDestination(64667U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("UZXLJNMEIYWWOVTJXUZGGSTHHEIWZDLTSTQCZIOFNQTXKYPLIOWDWCPQFATCLAQAHEGSLHPANHLUJBPMRZWXSYBTUHPGNJMQYYVICRLMNQUCWKRCGIMOWWSIAJYGYUBFENHOMFBTQZDMJQOZZQEBKAGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.154346362146);
    msg.setSource(25645U);
    msg.setSourceEntity(64U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(126U);
    msg.custom.assign("CRONPVISKRVELUPLPFWZIQLLBTWGLFHXAQBZQMSHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.511662416669);
    msg.setSource(3115U);
    msg.setSourceEntity(108U);
    msg.setDestination(41017U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("TEEWDMDESQTVULENQMBYHIHANCCJLTTRSTGHOUMJVVCZZLWIHSSKBGOALUILZYRCRCMFTHTQBKHVEBYKOXTXBJYNODYEUXRSOIFWZVIGXODZHWBUFIFXBZBAKJQRHLKGYMNGOKVBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.579064266394);
    msg.setSource(20023U);
    msg.setSourceEntity(245U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(252U);
    msg.timeout = 46646U;
    msg.lat = 0.0903189600549;
    msg.lon = 0.554668496922;
    msg.z = 0.707974615216;
    msg.z_units = 133U;
    msg.duration = 32111U;
    msg.speed = 0.467442587943;
    msg.speed_units = 209U;
    msg.type = 153U;
    msg.radius = 0.399284203735;
    msg.length = 0.275812949182;
    msg.bearing = 0.295478347234;
    msg.direction = 171U;
    msg.custom.assign("JKFZXUMHGMRLBBQAVRXBMUSZPCJMLXOXHBDEDLKEOJZMIEXSIMGLDBKXQWQUSBRXWMUFIUVNCAPRFPQAVGJIPKZAVQDCGTGRTSKTYHQGXTQRERGKOOZHUDMQYAJCFPEPWZLINWJYCNSGOELEVAHBXLKNGUOIHYDTEWKNKAAWDHSCCUMPNZYLNHOSVHTTNTPFCFIJWBIUYSGDZZRSSVYHTEWRVFQYWWCXVOPBZJPIDBFLOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.0953712815557);
    msg.setSource(25555U);
    msg.setSourceEntity(139U);
    msg.setDestination(3004U);
    msg.setDestinationEntity(251U);
    msg.timeout = 28961U;
    msg.lat = 0.212260448414;
    msg.lon = 0.915604940427;
    msg.z = 0.707994264973;
    msg.z_units = 237U;
    msg.duration = 57996U;
    msg.speed = 0.859961510275;
    msg.speed_units = 231U;
    msg.type = 195U;
    msg.radius = 0.118953852872;
    msg.length = 0.796086701846;
    msg.bearing = 0.895034198461;
    msg.direction = 128U;
    msg.custom.assign("XUPMZMEYBAXKOVQFKIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.615814563366);
    msg.setSource(23231U);
    msg.setSourceEntity(160U);
    msg.setDestination(37115U);
    msg.setDestinationEntity(103U);
    msg.timeout = 54093U;
    msg.lat = 0.1999335609;
    msg.lon = 0.41855154068;
    msg.z = 0.525728659655;
    msg.z_units = 51U;
    msg.duration = 64182U;
    msg.speed = 0.172594693776;
    msg.speed_units = 202U;
    msg.type = 210U;
    msg.radius = 0.809478617495;
    msg.length = 0.531409217697;
    msg.bearing = 0.356582422488;
    msg.direction = 161U;
    msg.custom.assign("PGWZNVAMWHIAUYGSLOLBSHOWYRFKMZRTMQPDUSMQVINA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.782533084109);
    msg.setSource(16350U);
    msg.setSourceEntity(222U);
    msg.setDestination(6395U);
    msg.setDestinationEntity(120U);
    msg.duration = 26300U;
    msg.custom.assign("BLYYQYWAKATLBSGRFNRTKOVDYCJHUZJVYUMGQTBZGOFIVQNLIXURBMMTADUUNKTKFIUOHNWNATMETUOCRCNOVMJLLCOJASTIMMBXVRWEILEDPESXJMFVSSKAZCRLQHLEFJCFPVXTDYPOWGRFWYPGOHGHHUCYYGIWDPSMIKRSEJQAPXPBDGGRZIKZAIHFDWSXEHDWLJVPYCWTFRJVQKHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.0431377070575);
    msg.setSource(50747U);
    msg.setSourceEntity(10U);
    msg.setDestination(23594U);
    msg.setDestinationEntity(238U);
    msg.duration = 32013U;
    msg.custom.assign("MXRTGPEXVWNLNTGCHWEYMQMQYKWYUHQEWYIVCYOBDOURAJWIVXXNHAMJKAFRBEFJUVVVFZNQZHUKONUQSDOZPZTIJNCMPGYIPSDQSPMQJXELCXVKRBWEZJNIBMLLSPWOKWSQTTKCTBJSAODFXPGXEDOOCYDAUHTDUIKHVKXNXAPJUUYTTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.381792607836);
    msg.setSource(55648U);
    msg.setSourceEntity(101U);
    msg.setDestination(1750U);
    msg.setDestinationEntity(64U);
    msg.duration = 38533U;
    msg.custom.assign("PELYYFEGWCASDUXKRHNYHBCRZJLSVONWETLKMVWXMSIIILQXAUTFDSONQKMQSZVSDEKOYNFPAIJLPBUYXRGYTHPSHJLXWKGDTHTILZEVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.323554304044);
    msg.setSource(18524U);
    msg.setSourceEntity(106U);
    msg.setDestination(60103U);
    msg.setDestinationEntity(57U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.983341022029;
    tmp_msg_0.speed_units = 160U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26370U;
    msg.custom.assign("HVTCISUWNMSNWWYPFRIGAARXLKAMWEOETTIQSYKYSILNFQJKQKZEAARGEPWZLFEIIJQWTHHWDRQGPJYEZCJJQDNUUBGGOZSVPOQSMPBKATCLHZDDRNXWZVPFZXYVTHODJXCIPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.803298899835);
    msg.setSource(17900U);
    msg.setSourceEntity(175U);
    msg.setDestination(27413U);
    msg.setDestinationEntity(159U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.89690056352;
    msg.control.set(tmp_msg_0);
    msg.duration = 835U;
    msg.custom.assign("MWQSXIJQQCLQTODMERLZQMPCRFRTKWHLAVRDAKSBBZOYDFWOPEIGPARYNVTGYJCTGKRAXCUFEXOGWAKMHYNDLCZGBTPVLXESZNQUURKZSRDBMVSJYDKACCWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.704916836832);
    msg.setSource(52557U);
    msg.setSourceEntity(68U);
    msg.setDestination(7848U);
    msg.setDestinationEntity(100U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.881977857178;
    msg.control.set(tmp_msg_0);
    msg.duration = 39242U;
    msg.custom.assign("XMPAUTXGFYRCMEAIRPKJHDFRQSUIIJEIFGOVMJJQOAHPSQLKKVHGOENVJAIBKTZTZQXUEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.385931914591);
    msg.setSource(54029U);
    msg.setSourceEntity(176U);
    msg.setDestination(50604U);
    msg.setDestinationEntity(87U);
    msg.timeout = 4977U;
    msg.lat = 0.788599833238;
    msg.lon = 0.962128682944;
    msg.z = 0.0598734156884;
    msg.z_units = 42U;
    msg.speed = 0.384923273838;
    msg.speed_units = 214U;
    msg.bearing = 0.634042847567;
    msg.cross_angle = 0.779403851886;
    msg.width = 0.325298372367;
    msg.length = 0.821474556085;
    msg.hstep = 0.772144973855;
    msg.coff = 73U;
    msg.alternation = 243U;
    msg.flags = 58U;
    msg.custom.assign("KNGKUQGMUEYRHXTQLVXZJCUSMFLMXDFCDQVXILVFFDMITW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.206698174778);
    msg.setSource(42496U);
    msg.setSourceEntity(161U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(3U);
    msg.timeout = 3701U;
    msg.lat = 0.900520918169;
    msg.lon = 0.964077369368;
    msg.z = 0.235585016663;
    msg.z_units = 25U;
    msg.speed = 0.50078998414;
    msg.speed_units = 102U;
    msg.bearing = 0.513760121405;
    msg.cross_angle = 0.210530176921;
    msg.width = 0.828408021462;
    msg.length = 0.630403502327;
    msg.hstep = 0.675566015605;
    msg.coff = 191U;
    msg.alternation = 208U;
    msg.flags = 238U;
    msg.custom.assign("PVXLCENYTILCZKTOPMYEDLRSUTVDNMSOHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.94158763874);
    msg.setSource(27898U);
    msg.setSourceEntity(95U);
    msg.setDestination(4013U);
    msg.setDestinationEntity(211U);
    msg.timeout = 190U;
    msg.lat = 0.194223307854;
    msg.lon = 0.939521292142;
    msg.z = 0.47482147984;
    msg.z_units = 205U;
    msg.speed = 0.0307862553573;
    msg.speed_units = 196U;
    msg.bearing = 0.0546400849298;
    msg.cross_angle = 0.417457282124;
    msg.width = 0.617287393368;
    msg.length = 0.285525143753;
    msg.hstep = 0.193867711264;
    msg.coff = 232U;
    msg.alternation = 227U;
    msg.flags = 146U;
    msg.custom.assign("WGKUYULTBXDSCHVIZBFRBPSFFKRHAMOPUZKXRZQTLAKMMZWNWROVALZVGEYTDEJQLFIPARHMJIRYWUCMMTXQPQJGPXHDGUYROSYLNZRVOTZNMZHNTQNCVEENKOFHMSJAKNWGOIQDAOACUGYFDUSQLILNVXEOLJBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.772345781458);
    msg.setSource(38321U);
    msg.setSourceEntity(249U);
    msg.setDestination(31776U);
    msg.setDestinationEntity(93U);
    msg.timeout = 59805U;
    msg.lat = 0.859049878956;
    msg.lon = 0.199068554575;
    msg.z = 0.112304330332;
    msg.z_units = 95U;
    msg.speed = 0.200183466955;
    msg.speed_units = 48U;
    msg.custom.assign("LPFXEOHMYWQXEQBKLSLRHFGBNSNEHQBIICEGKTSRCQALAOBVIZDOSNVDZUWJVMZPKNBVSGXPWZBGMHNCQUTHAAKDVGRFANONYEXYAGRNIHWSHJJFVJMSXFPIHJDDQBUURLCGUCIRFTTUSKGEMLWMJFMRTFECTVOBLPRYDCTVUHOKYBWRFKPSBEUDWXCDJFJPZUKRXPXVGPYLXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.704999190537);
    msg.setSource(25245U);
    msg.setSourceEntity(230U);
    msg.setDestination(23245U);
    msg.setDestinationEntity(220U);
    msg.timeout = 53154U;
    msg.lat = 0.414051017583;
    msg.lon = 0.842688293257;
    msg.z = 0.500490385706;
    msg.z_units = 185U;
    msg.speed = 0.257422062341;
    msg.speed_units = 191U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.700815912303;
    tmp_msg_0.y = 0.706837669495;
    tmp_msg_0.z = 0.00938686805144;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JQNHXDIMEMRQVYMAWCFLOPHAKNYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.0705333890643);
    msg.setSource(12019U);
    msg.setSourceEntity(181U);
    msg.setDestination(61389U);
    msg.setDestinationEntity(97U);
    msg.timeout = 31850U;
    msg.lat = 0.794541354259;
    msg.lon = 0.405434043174;
    msg.z = 0.0524841304365;
    msg.z_units = 246U;
    msg.speed = 0.625086581647;
    msg.speed_units = 241U;
    msg.custom.assign("CRZFYMFITRTDPDUOPYHHXBFWDOPILNTFJKPVQXCKXIUENOSXCPQIDKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.746500001426);
    msg.setSource(2405U);
    msg.setSourceEntity(128U);
    msg.setDestination(47146U);
    msg.setDestinationEntity(125U);
    msg.x = 0.259171078117;
    msg.y = 0.247792983153;
    msg.z = 0.967331146204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.404630873425);
    msg.setSource(15843U);
    msg.setSourceEntity(236U);
    msg.setDestination(63060U);
    msg.setDestinationEntity(240U);
    msg.x = 0.177257940317;
    msg.y = 0.597799510988;
    msg.z = 0.64488018955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.840567940474);
    msg.setSource(10659U);
    msg.setSourceEntity(179U);
    msg.setDestination(48430U);
    msg.setDestinationEntity(51U);
    msg.x = 0.83861855997;
    msg.y = 0.0490932752546;
    msg.z = 0.821315752072;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.98538106798);
    msg.setSource(20265U);
    msg.setSourceEntity(235U);
    msg.setDestination(61091U);
    msg.setDestinationEntity(111U);
    msg.timeout = 48242U;
    msg.lat = 0.224792377876;
    msg.lon = 0.64528946173;
    msg.z = 0.741154787488;
    msg.z_units = 118U;
    msg.amplitude = 0.74641997427;
    msg.pitch = 0.613625767425;
    msg.speed = 0.849644325351;
    msg.speed_units = 242U;
    msg.custom.assign("LGGGLWFXYDYOHRNNQMJFAEERZYYNKHICFRKZGDWMWCDZPWHEJBSPDOCTFCJDUKGASKVHQY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.597361949974);
    msg.setSource(64107U);
    msg.setSourceEntity(39U);
    msg.setDestination(50739U);
    msg.setDestinationEntity(245U);
    msg.timeout = 29554U;
    msg.lat = 0.213102030608;
    msg.lon = 0.713220679443;
    msg.z = 0.509099320061;
    msg.z_units = 68U;
    msg.amplitude = 0.114298723163;
    msg.pitch = 0.632719566316;
    msg.speed = 0.533303545122;
    msg.speed_units = 97U;
    msg.custom.assign("DDVSLBTPHVAM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.990475395791);
    msg.setSource(47547U);
    msg.setSourceEntity(185U);
    msg.setDestination(10260U);
    msg.setDestinationEntity(166U);
    msg.timeout = 55277U;
    msg.lat = 0.609727602704;
    msg.lon = 0.467658597658;
    msg.z = 0.642745098841;
    msg.z_units = 16U;
    msg.amplitude = 0.743194963168;
    msg.pitch = 0.479438295467;
    msg.speed = 0.842738709341;
    msg.speed_units = 194U;
    msg.custom.assign("QLTBISEAGVIADLJEDAUIXOUCMSPZHTGVUMVTHHLLCTSG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.488502491291);
    msg.setSource(41140U);
    msg.setSourceEntity(16U);
    msg.setDestination(64756U);
    msg.setDestinationEntity(187U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.162372335903);
    msg.setSource(21759U);
    msg.setSourceEntity(234U);
    msg.setDestination(36129U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.61843129783);
    msg.setSource(42927U);
    msg.setSourceEntity(225U);
    msg.setDestination(41686U);
    msg.setDestinationEntity(29U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.488536487564);
    msg.setSource(10327U);
    msg.setSourceEntity(41U);
    msg.setDestination(3386U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.527710129093;
    msg.lon = 0.544462318485;
    msg.z = 0.934882806367;
    msg.z_units = 158U;
    msg.radius = 0.780070010196;
    msg.duration = 41751U;
    msg.speed = 0.125159274113;
    msg.speed_units = 100U;
    msg.custom.assign("DCJVJMBNMALLPXXNLPCDNEKCVIVSKKUTZGVETTWHYOXORSARHLOSWVDDCIJPUGEYKRSDSIWQEKRTXRSDOWYWYJOUGLFXNZUZAQTISFPVWBCHELZSXFFZAPGPVAESJOFASCGWAIRUOYHIRRRWYAQUPTWCBTZHHDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.160400984476);
    msg.setSource(13180U);
    msg.setSourceEntity(19U);
    msg.setDestination(1630U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.142509299227;
    msg.lon = 0.469026180776;
    msg.z = 0.865549844517;
    msg.z_units = 83U;
    msg.radius = 0.723098949376;
    msg.duration = 16244U;
    msg.speed = 0.875656301072;
    msg.speed_units = 49U;
    msg.custom.assign("NXXVXWMDVUZWGWNQOAVFXDIXHVMIOCBSTYGSVBPRJAMHVIQFJPHQTFTJBIRRTZVEAJIWUECENYBSBDFFLDZQUPWWEDSZGVYUJAJRRBEJDYYPHVMRTFCEUOXNPKFJKAIZFSMHBACHWQQLKUJXSNELLHOLKPQDLUHTZWJWSRXKMOBOGXNMSKLSEYMIHRKZCNONWYCFD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.394609235241);
    msg.setSource(29577U);
    msg.setSourceEntity(125U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.633148818033;
    msg.lon = 0.246175988771;
    msg.z = 0.783759191466;
    msg.z_units = 61U;
    msg.radius = 0.691006977845;
    msg.duration = 24366U;
    msg.speed = 0.751492858315;
    msg.speed_units = 142U;
    msg.custom.assign("AEBROUMWICPILCNBXRTJQMASGZUJVKUKUXFWMVOIEIVLZXLETVSBTWMGHGAGTQRSBYJOTOBAKTKDEAPRSYCBVUFOJZNEKXGUNRXFRCOPDPMFNCSFLOYCSAATTQDVFRLVPTCLLUZRJBAQQHMNKPHYZUFQWHWLIQHZDLRXXCVQQZWMSWXMJBKVYYDJALIJUFPNYSOHX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.699577773925);
    msg.setSource(45330U);
    msg.setSourceEntity(153U);
    msg.setDestination(39690U);
    msg.setDestinationEntity(235U);
    msg.timeout = 56679U;
    msg.flags = 121U;
    msg.lat = 0.503858090373;
    msg.lon = 0.89888610805;
    msg.start_z = 0.269935807315;
    msg.start_z_units = 254U;
    msg.end_z = 0.470506489728;
    msg.end_z_units = 185U;
    msg.radius = 0.109165900186;
    msg.speed = 0.149401813579;
    msg.speed_units = 21U;
    msg.custom.assign("DJRJIEKDBCRNRPNNHOOXMVPYHEOIBSMURJLXATDBEVEODCUAFGHQXQOWSKRLNQRQXDCOGDILKCMSDEFFURHLLVQDCNHSMUEIBBCLLMDMQIWWEZXSYUV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.115226831335);
    msg.setSource(21822U);
    msg.setSourceEntity(198U);
    msg.setDestination(43626U);
    msg.setDestinationEntity(69U);
    msg.timeout = 29475U;
    msg.flags = 61U;
    msg.lat = 0.837832780264;
    msg.lon = 0.684611168363;
    msg.start_z = 0.137062083475;
    msg.start_z_units = 58U;
    msg.end_z = 0.908310923943;
    msg.end_z_units = 111U;
    msg.radius = 0.294109669939;
    msg.speed = 0.738287316093;
    msg.speed_units = 79U;
    msg.custom.assign("EYAQFANFTFOHWXPCMGBBENBUTOZAHPWOWAKOVZNMPTYMIGUIXPKKRWDBEDZFHFZIMEOYLVMUURCBYTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.0897676762204);
    msg.setSource(46987U);
    msg.setSourceEntity(13U);
    msg.setDestination(28202U);
    msg.setDestinationEntity(179U);
    msg.timeout = 13719U;
    msg.flags = 108U;
    msg.lat = 0.709038153101;
    msg.lon = 0.00583251931984;
    msg.start_z = 0.703563574032;
    msg.start_z_units = 3U;
    msg.end_z = 0.308170897007;
    msg.end_z_units = 65U;
    msg.radius = 0.981763070058;
    msg.speed = 0.743715497525;
    msg.speed_units = 139U;
    msg.custom.assign("YXWJJVXXAPZMFFKVYZYSNPUZKDDDSQVTDRYZHBABUDFPFALNSIWJZMSPRQHEYYHARDIGNWNCLDONETAMGOXBNNHPIEDXDALGULMKRCQEWGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.895064904009);
    msg.setSource(26531U);
    msg.setSourceEntity(208U);
    msg.setDestination(46247U);
    msg.setDestinationEntity(93U);
    msg.timeout = 8167U;
    msg.lat = 0.567334579505;
    msg.lon = 0.217532192121;
    msg.z = 0.866808889255;
    msg.z_units = 185U;
    msg.speed = 0.762229789168;
    msg.speed_units = 76U;
    msg.custom.assign("GSGGVDPWLHHNHZTDMWRFOTHUQLQPZQJRJFGTCZQVECWXJHYYHHXMERDWXJODBCSGGLBEAKIKARHBZAKKACFAVUROUMJOFAACSGWPYOZYIYRTUVKMUUOHKBLATQTDMBNMKKOQPXRVYSDBCNZYBIUMNEXXHIFUPPOPNWNIJRSRUXIPEQEVLSNFJCDWSSXTZYANILWEIDDSJEJMKQCBOYBLXMYFQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.24021996637);
    msg.setSource(37001U);
    msg.setSourceEntity(64U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(113U);
    msg.timeout = 36200U;
    msg.lat = 0.245081716094;
    msg.lon = 0.189457978179;
    msg.z = 0.54755016452;
    msg.z_units = 69U;
    msg.speed = 0.577808297095;
    msg.speed_units = 179U;
    msg.custom.assign("WTKPSEENIFUEYSJONXFBDWAQQVYRSMVBIGQCFFUMEZGDGGWBGZJAKCOGPWPDLHIWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.795727742304);
    msg.setSource(4941U);
    msg.setSourceEntity(185U);
    msg.setDestination(22935U);
    msg.setDestinationEntity(199U);
    msg.timeout = 46679U;
    msg.lat = 0.28613087585;
    msg.lon = 0.513389675462;
    msg.z = 0.0461218353883;
    msg.z_units = 118U;
    msg.speed = 0.138286591564;
    msg.speed_units = 225U;
    msg.custom.assign("RWUBIONSEGVEZYARVIXXUYJQUXHDTZLDLIDXAPSFMNDGQUZKPBKXCIYVPVPQEPDGBUNBEEFYGFLXPNBAEZTCWLVLBQTWZLGBOTGTSGKRKLNVYFIAQSKORZDAHVMKMRMQJQZUICWMCHFCHMWEONNLHIZHDBPROVAAHYGAJQWPPRQUECOKWDSKRXCHIJJMXFSYYZVMJNRGZVDTMHBTM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0595336742748);
    msg.setSource(3955U);
    msg.setSourceEntity(157U);
    msg.setDestination(44464U);
    msg.setDestinationEntity(115U);
    msg.x = 0.8154949486;
    msg.y = 0.829414354663;
    msg.z = 0.589313035621;
    msg.t = 0.203273523108;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.800513958749);
    msg.setSource(41508U);
    msg.setSourceEntity(66U);
    msg.setDestination(63701U);
    msg.setDestinationEntity(55U);
    msg.x = 0.93737419226;
    msg.y = 0.490269507012;
    msg.z = 0.92180115334;
    msg.t = 0.270229287708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.261600166152);
    msg.setSource(20892U);
    msg.setSourceEntity(38U);
    msg.setDestination(54013U);
    msg.setDestinationEntity(215U);
    msg.x = 0.233195283972;
    msg.y = 0.740903379688;
    msg.z = 0.213951044011;
    msg.t = 0.127874737555;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.349398894979);
    msg.setSource(51700U);
    msg.setSourceEntity(233U);
    msg.setDestination(33643U);
    msg.setDestinationEntity(110U);
    msg.timeout = 54140U;
    msg.name.assign("ASKBKFBPVWWGWUTECPFYCTGUMWLAXIIDPVBSWGSKDXWVPEMHOQLHBIYHFCYBLQXTHIPGSTQSRDEUFOYGFLOZKDJQRJUHZVXKUAENFZJTMNADWGVYTLCXLZ");
    msg.custom.assign("EBDBVLRCRUICTQECJZRGDWLCAEUIUNLPZGE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.432462668527);
    msg.setSource(2949U);
    msg.setSourceEntity(169U);
    msg.setDestination(55934U);
    msg.setDestinationEntity(162U);
    msg.timeout = 1419U;
    msg.name.assign("ECUBMGPGMBGUPELUOPVHVDKHYBMFWEQGESZWCAJGTXJABPPINKSHRJWFRBZLQUISULURRXLHXPMNIJKQXBVSDIJPZRZLTHZSMPFUUCQIQIBTVWQJRAADETVYYNFTVNDUDYRXYQKOQCMQGKIPOGFBWHOFHOONDJLNALZXBOAMGSDHVNKXVOLFFDUIHRTCYGRBKTYGXWDKEZLSYKFEZNJFRJMPWZITOKVXLS");
    msg.custom.assign("MYLNOICWRALMABKZPMELICOPZJSSXTFSMUQKKUANRVACEKFROJDIVYBECYCAXLGCHOFBZCAEOUHVUTWSPZSDMZJTTEYWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.551514345276);
    msg.setSource(22016U);
    msg.setSourceEntity(132U);
    msg.setDestination(45968U);
    msg.setDestinationEntity(243U);
    msg.timeout = 58866U;
    msg.name.assign("VKTMQCWGYLEENNVRTHYPXGJMXKBQTADBUDHLHRQJNZAXPKJIVGPLAKXLKIMUXANEOOLWDYGMSZYHUVCWDZXACTXKOPRNSOZHPDQWHUYCHRNEIZTGKWSKCITUHUPQHWPYTDUXWSNIGGGTCBWBVDRMBDFVFLCYVZUEQZOMJQF");
    msg.custom.assign("HFWUYGBGDOGVYRUAMJOQTMLGAKJARXPCMVVKYPOEPEZZIKSBYFNFXGFWEYPHQTYPEULTRQKSTCDJJMDQIHDLNBGXLIDYDWBJKYINRRZHWZFZNBJHFTTPADZIUYVXXZVPPJSNBBNCEQRSQQCBVILUXQUNCPFDASIYXRFXKJHEVEDZGALWCOAXCHDFJLJMOZUKUIQOTEWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.610324717526);
    msg.setSource(26906U);
    msg.setSourceEntity(181U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.866199842302;
    msg.lon = 0.864618296614;
    msg.z = 0.159106746547;
    msg.z_units = 168U;
    msg.speed = 0.0809573763283;
    msg.speed_units = 134U;
    msg.start_time = 0.12552163044;
    msg.custom.assign("GCFTSQUUPTLAZADHHEOCGKCYYVDPEBQLUBSUNOFSIOFSWXLDEDFAVATPKGYESLRXOMXRYTVOCFICDNMEEIMJJURWNPYXWMHAHENWSXUPPAEROUROVXRGVBGUKRJIBKKMNNZPJRYNHLWINIAWTDBJCZVIXIATSXIGWBZBLYSPPJHOBZZPQLKQEWKNCSRHJXWTHQVAQSRKQIDMFGGXLGCTMUDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.41141479777);
    msg.setSource(2740U);
    msg.setSourceEntity(141U);
    msg.setDestination(59045U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.176277270235;
    msg.lon = 0.252860827763;
    msg.z = 0.601874457057;
    msg.z_units = 226U;
    msg.speed = 0.0952777324918;
    msg.speed_units = 217U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.364295956117;
    tmp_msg_0.y = 0.812533115279;
    tmp_msg_0.z = 0.327842778172;
    tmp_msg_0.t = 0.754637031961;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.696279232209;
    msg.custom.assign("ECLFAFLHASWPUTORDBUTMHHTQZSHGFOVGUPMOZQPIJFSGMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.0863944022166);
    msg.setSource(5946U);
    msg.setSourceEntity(127U);
    msg.setDestination(17830U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.351133344526;
    msg.lon = 0.508860484302;
    msg.z = 0.0326360749285;
    msg.z_units = 131U;
    msg.speed = 0.102252869704;
    msg.speed_units = 217U;
    msg.start_time = 0.921356920414;
    msg.custom.assign("AFSQXVWXLLWJDOKDSDCNWRKRNWNYAYWADBFYYKALCXCMHSYYIJPUGTJDIVBFBREPEMRSKAIBOJIXYTQGHLVON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.125222481172);
    msg.setSource(22789U);
    msg.setSourceEntity(82U);
    msg.setDestination(20112U);
    msg.setDestinationEntity(89U);
    msg.vid = 45068U;
    msg.off_x = 0.971212601048;
    msg.off_y = 0.690092913808;
    msg.off_z = 0.18608843627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.462395124128);
    msg.setSource(8943U);
    msg.setSourceEntity(47U);
    msg.setDestination(23863U);
    msg.setDestinationEntity(90U);
    msg.vid = 50520U;
    msg.off_x = 0.182116500648;
    msg.off_y = 0.405409316749;
    msg.off_z = 0.0349279342089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.999401635799);
    msg.setSource(23066U);
    msg.setSourceEntity(29U);
    msg.setDestination(53787U);
    msg.setDestinationEntity(145U);
    msg.vid = 50125U;
    msg.off_x = 0.674775444594;
    msg.off_y = 0.149356384674;
    msg.off_z = 0.639644586359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.349060509501);
    msg.setSource(9570U);
    msg.setSourceEntity(33U);
    msg.setDestination(63876U);
    msg.setDestinationEntity(82U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.595056670602);
    msg.setSource(62266U);
    msg.setSourceEntity(196U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.516662359555);
    msg.setSource(32753U);
    msg.setSourceEntity(93U);
    msg.setDestination(64844U);
    msg.setDestinationEntity(39U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.874491505812);
    msg.setSource(49047U);
    msg.setSourceEntity(70U);
    msg.setDestination(23388U);
    msg.setDestinationEntity(156U);
    msg.mid = 60927U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.49916500119);
    msg.setSource(8836U);
    msg.setSourceEntity(157U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(81U);
    msg.mid = 10471U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.513289977409);
    msg.setSource(37389U);
    msg.setSourceEntity(195U);
    msg.setDestination(47665U);
    msg.setDestinationEntity(208U);
    msg.mid = 25139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.83395402725);
    msg.setSource(21228U);
    msg.setSourceEntity(128U);
    msg.setDestination(732U);
    msg.setDestinationEntity(104U);
    msg.state = 71U;
    msg.eta = 51000U;
    msg.info.assign("XMEEVHHUZEPOAUKDEHKMTFELPJLIWHTMWCDYCBOWAERRCMSYFYXKTKBASCGCXGQZTNJFTEFBORMCMQQIANISOSGIEQTRMVMUPNNIZXXGYGVRTQONSLWUDKWCUVVWODDNKKMPYZHCJIZZFPFUMNILUDUXYUGOJWERCKRJGPNQWZBFKJOEGDTVAVKLCHBFGRLZGAPDJBYBXLSPPJILZIHRLTDSSIFTAVWBVFBHDVNNHQQYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.799972402997);
    msg.setSource(17816U);
    msg.setSourceEntity(87U);
    msg.setDestination(50675U);
    msg.setDestinationEntity(10U);
    msg.state = 151U;
    msg.eta = 11588U;
    msg.info.assign("GGMBVFKMJUIANQZQEVZGKAWBESIPPKHKAYBKUWZNUWMJVILUQMRYCALJXAXUNNOXJHFFDFBFGKTYOQYOBWXLHVQJIHZJWWZET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.12889324964);
    msg.setSource(57415U);
    msg.setSourceEntity(155U);
    msg.setDestination(3687U);
    msg.setDestinationEntity(156U);
    msg.state = 69U;
    msg.eta = 58623U;
    msg.info.assign("LEWQUZXMBLPAKBSLKKGXPQPEXJSZLEBYOHMUFRQTYRCGXXUMSUGQLUQYOCFPSYEWITPQVTQEGJDJJDXKZUKJNOQAHVAWYBZNEDBMSEPHYWZKFBRSBPFGOFDLFHAWWZJINVPHOHEXMJOBAHRYTXTSGNWGORLWFBAQOEKKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.412744021623);
    msg.setSource(14493U);
    msg.setSourceEntity(227U);
    msg.setDestination(60999U);
    msg.setDestinationEntity(37U);
    msg.system = 14891U;
    msg.duration = 32302U;
    msg.speed = 0.974998030241;
    msg.speed_units = 227U;
    msg.x = 0.758105487151;
    msg.y = 0.768715586133;
    msg.z = 0.924080442728;
    msg.z_units = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.238285198807);
    msg.setSource(17686U);
    msg.setSourceEntity(202U);
    msg.setDestination(60139U);
    msg.setDestinationEntity(84U);
    msg.system = 64451U;
    msg.duration = 5521U;
    msg.speed = 0.726922458423;
    msg.speed_units = 63U;
    msg.x = 0.612147242104;
    msg.y = 0.709839076199;
    msg.z = 0.588588981507;
    msg.z_units = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.681592126455);
    msg.setSource(39753U);
    msg.setSourceEntity(1U);
    msg.setDestination(58975U);
    msg.setDestinationEntity(245U);
    msg.system = 33123U;
    msg.duration = 6349U;
    msg.speed = 0.827714083443;
    msg.speed_units = 178U;
    msg.x = 0.489060108446;
    msg.y = 0.280991808139;
    msg.z = 0.459187785229;
    msg.z_units = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.563684799567);
    msg.setSource(12313U);
    msg.setSourceEntity(112U);
    msg.setDestination(54421U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.785802909823;
    msg.lon = 0.938344382843;
    msg.speed = 0.233776253458;
    msg.speed_units = 2U;
    msg.duration = 50761U;
    msg.sys_a = 3912U;
    msg.sys_b = 10964U;
    msg.move_threshold = 0.758663417332;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.451777965169);
    msg.setSource(21314U);
    msg.setSourceEntity(190U);
    msg.setDestination(26449U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.133647352985;
    msg.lon = 0.882454856497;
    msg.speed = 0.0053964679937;
    msg.speed_units = 113U;
    msg.duration = 19701U;
    msg.sys_a = 40539U;
    msg.sys_b = 27050U;
    msg.move_threshold = 0.347164448737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.690480929892);
    msg.setSource(62475U);
    msg.setSourceEntity(184U);
    msg.setDestination(44302U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.697301670185;
    msg.lon = 0.0310242800753;
    msg.speed = 0.38587819768;
    msg.speed_units = 211U;
    msg.duration = 22679U;
    msg.sys_a = 32492U;
    msg.sys_b = 35425U;
    msg.move_threshold = 0.209494035618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.688433238001);
    msg.setSource(58715U);
    msg.setSourceEntity(149U);
    msg.setDestination(15460U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.568144034257;
    msg.lon = 0.150832051348;
    msg.z = 0.293691565427;
    msg.z_units = 177U;
    msg.speed = 0.821894903712;
    msg.speed_units = 127U;
    msg.custom.assign("XVUXFKHZUPKRGOXKDKGSACCYZTNPGTJRUYCLNXITHOIETLAKNIQNOLLODVUWNLPLBXDFFGDNMAQHBIVAKUHXJRWJCNGJAPIPZXEYMBZQRTEZUWYVUMTOHMYFDLSFDZSXIDBRFHXHAPZEEHDDOLQHPZSMUUOVSEBSCPORNVCPMRTQERMNLCJVXCGGKWWNDFKYOWKEZIEPVCQHJVAA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.600017915097);
    msg.setSource(60069U);
    msg.setSourceEntity(74U);
    msg.setDestination(52341U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.865857967134;
    msg.lon = 0.715776440034;
    msg.z = 0.908291385432;
    msg.z_units = 4U;
    msg.speed = 0.348281935781;
    msg.speed_units = 30U;
    msg.custom.assign("PJNXKGGVIIPTFISNSKFZMQTCGOKPBPFLAAFKFUTZLEVLUXXJUGIJZVFCYNHHJVDENYDQXWZMRQIXGIYHTYBMQFIDOPFMHDDHDCAKAQKZYCMRWVCEOQVLUOBUAUCWZQMBZJLLVBUPXGVADBOKQKZWSPOWZRYVSJRGUABEYWGFHQBZWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.905312996328);
    msg.setSource(30413U);
    msg.setSourceEntity(210U);
    msg.setDestination(60230U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.285552549552;
    msg.lon = 0.854581689389;
    msg.z = 0.878710121239;
    msg.z_units = 58U;
    msg.speed = 0.082673707594;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.769550300515;
    tmp_msg_0.lon = 0.891857956135;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TTDEWTWAEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.960878898006);
    msg.setSource(1215U);
    msg.setSourceEntity(43U);
    msg.setDestination(22953U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.432995926922;
    msg.lon = 0.128589658732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.838524977464);
    msg.setSource(9654U);
    msg.setSourceEntity(65U);
    msg.setDestination(64978U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.714939990797;
    msg.lon = 0.200804015006;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.883567348002);
    msg.setSource(25346U);
    msg.setSourceEntity(226U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.936450410437;
    msg.lon = 0.293859022797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.73103984651);
    msg.setSource(17290U);
    msg.setSourceEntity(73U);
    msg.setDestination(38758U);
    msg.setDestinationEntity(150U);
    msg.timeout = 43198U;
    msg.lat = 0.0687228738803;
    msg.lon = 0.832475936504;
    msg.z = 0.186328620309;
    msg.z_units = 90U;
    msg.pitch = 0.379145212732;
    msg.amplitude = 0.00779835642456;
    msg.duration = 24449U;
    msg.speed = 0.663444341536;
    msg.speed_units = 136U;
    msg.radius = 0.546307927528;
    msg.direction = 60U;
    msg.custom.assign("SPGJTJSNLKPBXIEHDRGCDQKJJERFUGWRCHBMOGMLBVUZPFCAZVLAKATDWEHNDVBQAVMFYBIIGZBZDGQHUZRWVYUVNXFKSERDOYPXUWLBYIBTDYABSQUIWSIHWFINPTWCSRORYCARQGHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.620374997992);
    msg.setSource(53631U);
    msg.setSourceEntity(18U);
    msg.setDestination(45198U);
    msg.setDestinationEntity(3U);
    msg.timeout = 38296U;
    msg.lat = 0.848696318728;
    msg.lon = 0.786466366174;
    msg.z = 0.600796109019;
    msg.z_units = 155U;
    msg.pitch = 0.456214803242;
    msg.amplitude = 0.940629708614;
    msg.duration = 58133U;
    msg.speed = 0.651125610645;
    msg.speed_units = 82U;
    msg.radius = 0.132732575883;
    msg.direction = 202U;
    msg.custom.assign("DPDBELMZJUXCPWOVCAUTIKIADJVCVWTHRUGQWAKSSAWHWUXCQOEYLTITZRTAQIXAYMUSALXWRBHBNQIZOKLIDORJDDHBEBNSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.118323295283);
    msg.setSource(22344U);
    msg.setSourceEntity(10U);
    msg.setDestination(49373U);
    msg.setDestinationEntity(156U);
    msg.timeout = 3524U;
    msg.lat = 0.339598914527;
    msg.lon = 0.920049394769;
    msg.z = 0.712445670996;
    msg.z_units = 117U;
    msg.pitch = 0.343013796404;
    msg.amplitude = 0.895891647864;
    msg.duration = 11577U;
    msg.speed = 0.412248904362;
    msg.speed_units = 0U;
    msg.radius = 0.374300427069;
    msg.direction = 195U;
    msg.custom.assign("DSMQDETXEWSFNUVZEOPQTZOVHNZRBZJYAQOPTKPBDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.392725743549);
    msg.setSource(43906U);
    msg.setSourceEntity(10U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("EOZWMPTCQYZPHNYIZCCNCHAXIWRBYXJRX");
    msg.reference_frame = 104U;
    msg.custom.assign("QKNYFQZKBLZIZCQOOTTZWEBAJIKYEKKTKPJBRTCTVDFHLYWXQCDXUCXDEJVBILMRUPDNRRGMJCYYMOXPJOGISENFEMDEZBIISRJBXBZZYYALVAISSPYFPLNRUYHKPXGFZPEQHGJTAXVSZTVGNGNMHDGWXFLILKMTMSWPMPQCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.30127832613);
    msg.setSource(25364U);
    msg.setSourceEntity(249U);
    msg.setDestination(53105U);
    msg.setDestinationEntity(102U);
    msg.formation_name.assign("QWKDSMXTRNYYQTUILGIXXRMOHPTZIJKWYAQKJEHISLOCFOTRKSELAKXRNIYQJZODDFLSZBSSH");
    msg.reference_frame = 48U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49198U;
    tmp_msg_0.off_x = 0.337102109684;
    tmp_msg_0.off_y = 0.897017726365;
    tmp_msg_0.off_z = 0.68425894265;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VEFFADTSPHKYPEFBOERESHGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.0237193514409);
    msg.setSource(18053U);
    msg.setSourceEntity(96U);
    msg.setDestination(42035U);
    msg.setDestinationEntity(109U);
    msg.formation_name.assign("NBVBYGGAPMGJJXSEASFZTQLUSTKHEBRVFVIEXECFXGCTUYFHCUJNZZYWIBIMXGISZUKKOMTTKJKHCOLWOPHKUEUWJRFHEAZPDWTXRFYROXXYQRT");
    msg.reference_frame = 106U;
    msg.custom.assign("FIVTDIRAMGWDQECOBOTAJKHUACRDVAEMRTJHSIVGSXJSLNNGEPTJYWSJFERDRHRTGEFBPXPYXMKOUTLICEKPZUDNWQITSEAXQQDJQSUWJBFCYLNKCUGALWKHBHIHOMQWJSLXVCAVLNOOHWGRFXLGPMCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.64523048479);
    msg.setSource(65250U);
    msg.setSourceEntity(243U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(141U);
    msg.group_name.assign("NMCLOBARMURTKLCYDBXDNMZCMGQTYTRUULLVIOHRKZVFHMAYCDAFXXDZNVSFHSOJMOMDPJXWCBWRHSJPJKTPFMUIRBYXNJFJZQYBCMZPYDHXASSTKIHRGLWBPGNVEDKSSMVCVADTCPQQDXQEVBGPWKNTKUOJISYPTSIUXQIEKRYQIELBJINGKVDATLZXAGFGENEVOWZEOQWUW");
    msg.formation_name.assign("PJAHHGUUWYOKCJLVZKZQZQLWZYNOUJWTZOQSSDAUEWFPYEIGRIQICYCLRBPDOMJHDXBPDUNOPARXKFUYXAFJCYMCTFMFPIKNZZNCB");
    msg.plan_id.assign("EOGXMJPEPZCTTDADIEAGGLCNNWRCLMABVDJQYEQSIBSHLOSOJQBVBRJCUUBNOCKVEWAMDLSHCOURSFWFMBVQJTJIHPPSXWZKMGHIOVYPRYSHZZCVLVPSFKNENJBKUQQIBTCFKM");
    msg.description.assign("XFTOECWBLASRMDHIS");
    msg.leader_speed = 0.701323160275;
    msg.leader_bank_lim = 0.664064385886;
    msg.pos_sim_err_lim = 0.83688259845;
    msg.pos_sim_err_wrn = 0.365932346808;
    msg.pos_sim_err_timeout = 29176U;
    msg.converg_max = 0.200986065933;
    msg.converg_timeout = 10730U;
    msg.comms_timeout = 42336U;
    msg.turb_lim = 0.970686849018;
    msg.custom.assign("GZZTSFLDUTNIFHDKJWYWFNOYRCPMLAJJGAYLJXZMEFRSTVKACALSMB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.754318111821);
    msg.setSource(11989U);
    msg.setSourceEntity(184U);
    msg.setDestination(52026U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("QYQIGHCNVG");
    msg.formation_name.assign("DGUNAIMZEGQEFPLSVBAFSWAAVVQLVFKFCNHPWISODELPYJIMLNESOFTNZEZXBTRKUIMMGNCMTYLPWJXAVWDODQOAIPCFHUWIKRTCDKJZRROUJQMACUQEXVXMCBCDBJZAZRFBGBQTRHPYERKGBVHDXKNZOOZJOYGTEQ");
    msg.plan_id.assign("QCUQHDSGIJJDVKOERPTKZAVZPGMEPNMPTJJSCUNLMIWTTDSZMJEFWPALOYNTXZKLHPFXPFNGUWCKIYGWWVDIDVEGBILACEHJFULSSRMBTVNDTBQNHAUSUYYQLDXCBOXXGFZSXXPQJOMRTAKNDVCUUTEOBLNXPWCAXYQBKHRAHBSCZZNVYMIAER");
    msg.description.assign("MLRYDUWIVSPEJUHBQRXPJZJZWVAJNSVMEDAFTIQNJJQJZKQCTABLNOYZCMCFCLSLQITHMHUKUAKSFNVLZBOMHXJLBORSMXDDPBRHEGIQPGPGFPDROFGKUSRRQGBPQOHDLEWZTSYDECVOCKMNYVHRHZWXNMYKGVPQOFNENMUIDFXD");
    msg.leader_speed = 0.614651081066;
    msg.leader_bank_lim = 0.291191452403;
    msg.pos_sim_err_lim = 0.945647686045;
    msg.pos_sim_err_wrn = 0.268054880785;
    msg.pos_sim_err_timeout = 38234U;
    msg.converg_max = 0.278753519248;
    msg.converg_timeout = 26523U;
    msg.comms_timeout = 36970U;
    msg.turb_lim = 0.880608298803;
    msg.custom.assign("FADINKBQYZTQEMUNJAHSXJTPUAEZALDJSMVOYOBRUDPAZWTWFULITUMBKLLEYPYCEJHWCPAXMWVRVZTCGQIYCEHXVBCQZGJRHGDNZMZFEGUKYLMFXOFYFHSWIPRJGXGTCXODMMNYXABTSUYSTNDJBKPYSRBPOOKPJBAWKORJKQOTMAIOKIAVDIGHSCDQXWVWRGQNJRBIG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.048131966355);
    msg.setSource(13839U);
    msg.setSourceEntity(64U);
    msg.setDestination(26539U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("SJKBVWVQEEFGHNYSYYIQWLOXDHKQTCCYTTQLBTXOTYAUBHPEJSOKPEFNOSURPYOEZOORDXMFTUJLXICQKQGAUGLSJBRANNDDGGSQNHMVNQBIVQFAJACFZWZFPMGSWHZCLPTPJPWPDOKNBXSUYMUKDDMLSGVC");
    msg.formation_name.assign("QFHQUJEIJXMRZKPVCCKMYIHFRSLRVRQFDBQAADSMMFIKLTGFZZTQLGLIBUYBOZCRQWPPISMWAIWYEBVJXOCTOAGGDZXLGJXZAROMEPYJKYNEKDPHQOYOBZGOGVWBFAKJHJRTRRPMPY");
    msg.plan_id.assign("HGDGCQKSEOMAGCHZVNRMPZUXFUADKCRYVIKIJREAPADQNHCOXGLGHIMBBFUJKTGBOEGSARKMCYJPCTZLXPSVNBKZFWHYMCWNQLDSTQROOOEIIEIVPJ");
    msg.description.assign("IWCLJVZYAHXMDZVZYSRGIOFILAPRWFFWPARLGBBLQGPKXWZXVKBKCZANCCTYGFXURIUGWMWPCXYEOVYEMWXBROJZYRJQTTQTXYEILPSUVUQTGASTVVYRHFJZKKTYMOED");
    msg.leader_speed = 0.023628949693;
    msg.leader_bank_lim = 0.518030963258;
    msg.pos_sim_err_lim = 0.736263550731;
    msg.pos_sim_err_wrn = 0.0583770726438;
    msg.pos_sim_err_timeout = 49607U;
    msg.converg_max = 0.546592410076;
    msg.converg_timeout = 62626U;
    msg.comms_timeout = 4435U;
    msg.turb_lim = 0.327553360042;
    msg.custom.assign("FEXNOZIZSIXJSKHZWFOEVMFDHUCITWVRMLJJPVLVCQIOHZON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.35768131898);
    msg.setSource(87U);
    msg.setSourceEntity(139U);
    msg.setDestination(13141U);
    msg.setDestinationEntity(247U);
    msg.control_src = 35650U;
    msg.control_ent = 12U;
    msg.timeout = 0.634570130931;
    msg.loiter_radius = 0.830721883131;
    msg.altitude_interval = 0.52405657683;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.580644275033);
    msg.setSource(14338U);
    msg.setSourceEntity(77U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(74U);
    msg.control_src = 58679U;
    msg.control_ent = 51U;
    msg.timeout = 0.75987202373;
    msg.loiter_radius = 0.848150750267;
    msg.altitude_interval = 0.974492044353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.196211046382);
    msg.setSource(29985U);
    msg.setSourceEntity(179U);
    msg.setDestination(51174U);
    msg.setDestinationEntity(111U);
    msg.control_src = 45928U;
    msg.control_ent = 86U;
    msg.timeout = 0.569350265602;
    msg.loiter_radius = 0.767791581131;
    msg.altitude_interval = 0.299097962773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.670474233343);
    msg.setSource(34466U);
    msg.setSourceEntity(43U);
    msg.setDestination(51371U);
    msg.setDestinationEntity(171U);
    msg.flags = 219U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.759320821478;
    tmp_msg_0.speed_units = 101U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.866291142033;
    tmp_msg_1.z_units = 51U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0263239661253;
    msg.lon = 0.742524082241;
    msg.radius = 0.328360085899;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.869013733956);
    msg.setSource(2156U);
    msg.setSourceEntity(236U);
    msg.setDestination(63265U);
    msg.setDestinationEntity(124U);
    msg.flags = 209U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.726454532161;
    tmp_msg_0.speed_units = 50U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.331660808778;
    tmp_msg_1.z_units = 131U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.184120673535;
    msg.lon = 0.235187262033;
    msg.radius = 0.788408307024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.167582164036);
    msg.setSource(1963U);
    msg.setSourceEntity(0U);
    msg.setDestination(59721U);
    msg.setDestinationEntity(150U);
    msg.flags = 181U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.00161378487037;
    tmp_msg_0.speed_units = 48U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.890303706654;
    tmp_msg_1.z_units = 17U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.855606262674;
    msg.lon = 0.257976021174;
    msg.radius = 0.659179888157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.533486636161);
    msg.setSource(46374U);
    msg.setSourceEntity(60U);
    msg.setDestination(11981U);
    msg.setDestinationEntity(235U);
    msg.control_src = 18329U;
    msg.control_ent = 227U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.841143421472;
    tmp_tmp_msg_0_0.speed_units = 217U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.641766115754;
    tmp_tmp_msg_0_1.z_units = 20U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0716714690314;
    tmp_msg_0.lon = 0.600548016891;
    tmp_msg_0.radius = 0.954410333869;
    msg.reference.set(tmp_msg_0);
    msg.state = 240U;
    msg.proximity = 248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.118181941435);
    msg.setSource(62586U);
    msg.setSourceEntity(191U);
    msg.setDestination(33096U);
    msg.setDestinationEntity(180U);
    msg.control_src = 20371U;
    msg.control_ent = 5U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 103U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.807266079573;
    tmp_tmp_msg_0_0.speed_units = 123U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.365131891938;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.463965896506;
    tmp_msg_0.lon = 0.949095531089;
    tmp_msg_0.radius = 0.280338116303;
    msg.reference.set(tmp_msg_0);
    msg.state = 143U;
    msg.proximity = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.110687290098);
    msg.setSource(45776U);
    msg.setSourceEntity(234U);
    msg.setDestination(11927U);
    msg.setDestinationEntity(95U);
    msg.control_src = 18033U;
    msg.control_ent = 101U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 193U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.525862167885;
    tmp_tmp_msg_0_0.speed_units = 239U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.962433440919;
    tmp_tmp_msg_0_1.z_units = 41U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.766666489106;
    tmp_msg_0.lon = 0.546457356609;
    tmp_msg_0.radius = 0.338375157267;
    msg.reference.set(tmp_msg_0);
    msg.state = 103U;
    msg.proximity = 32U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.0958702403904);
    msg.setSource(59953U);
    msg.setSourceEntity(32U);
    msg.setDestination(32256U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 210U;
    msg.error_count = 99U;
    msg.error_ents.assign("ALCXNGSIQAPXUTMDWPGKSAECHZJAETVOWYEMQVNIOURKQKABQCSKZHERYARAYYKVHPYWZMIRQLSFHBVGNGHRVUOXWWJDDEMUCTPKSGNDFJCIHSPGBDCMYVHOIZQJITOWWQRWHLDXSXBZLOEDVRBEFDABROZFODFKUYGFKDNHEWZFYMLQNBYYSAUICTLKCLALIZNPXQXNICSETIGRMUMXNGMSBUJVJGZXNEFWTZJPJJOVUBP");
    msg.maneuver_type = 39625U;
    msg.maneuver_stime = 0.615084244894;
    msg.maneuver_eta = 26690U;
    msg.control_loops = 4163873824U;
    msg.flags = 245U;
    msg.last_error.assign("WRRIKTVZWOQSFYDIQBRJEVZBLLUGFXHPRPOCXAZZKDSDGANLTWBBKMNKRPIIJHZTQTMTUYNNLUGQJQZRBHISVFSZTKDZHYDWAGGPYVDLCTDJYTCWEQCPNOBINEJIAARFEFQJLVFAFIBRLFGMLDGCUFXFYLYNEYVMSSZSOHWKXOBXCKWCB");
    msg.last_error_time = 0.45830070201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.399336571517);
    msg.setSource(18839U);
    msg.setSourceEntity(145U);
    msg.setDestination(23731U);
    msg.setDestinationEntity(101U);
    msg.op_mode = 153U;
    msg.error_count = 239U;
    msg.error_ents.assign("JMLTJCXNRLMJIUNVVNPBUBSMMQPXGPWCNSUQIXXAMHPYHIHXBTTQVXESDSVVSJCHPGIMYREYKZDZDWQAYFKBQTLJDXALITFNCDHFVFBJZCIXEIOFZEAOOWSTKUYTAUOZCEHURNYGPVXHGDYLSVJXIREPGJJWZGBPLFNDKEEKMFPBTHZONGNQQGDSFCBUPYKRTLHZBO");
    msg.maneuver_type = 7154U;
    msg.maneuver_stime = 0.385564713435;
    msg.maneuver_eta = 17655U;
    msg.control_loops = 3039820724U;
    msg.flags = 126U;
    msg.last_error.assign("TSWQIPDUFDKWNFUGKUGQNHCFTLMGNILAWQWOQESDLVVRZNMDABYLGFORHEAZXFZYYIFOZIQNDLVYFKCWSSHPPSCKNBTAOSPPPSDBSQJEMXYSBIKJVBTEOTJBIERVGGMHSZNVYNERKUXWHACTGDGPJWUMCNAZQRVYRKANXOGOJIBZLEDMJ");
    msg.last_error_time = 0.501326688677;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.25154044571);
    msg.setSource(34997U);
    msg.setSourceEntity(162U);
    msg.setDestination(3510U);
    msg.setDestinationEntity(9U);
    msg.op_mode = 130U;
    msg.error_count = 214U;
    msg.error_ents.assign("SBUPRITFEHUTHYHEDWLVXTVTOIGRAEGYZLDCQLYDPDFFQCXQTHYHMMKWWUNHJFSRJKNRAFFFWXXJLVGDVBCBSJEINJEEYGZHWXVBSNBLDAXYMGZXXRUOHIVJXTLUVUMEECPNPS");
    msg.maneuver_type = 23244U;
    msg.maneuver_stime = 0.36683784699;
    msg.maneuver_eta = 8420U;
    msg.control_loops = 1531495810U;
    msg.flags = 45U;
    msg.last_error.assign("TBSOHCQEHPUSVNRUYLASJOXAHLHMIAYPISKDVIGIANAQXHIZIZ");
    msg.last_error_time = 0.747067720301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.0112410852834);
    msg.setSource(22347U);
    msg.setSourceEntity(4U);
    msg.setDestination(36704U);
    msg.setDestinationEntity(198U);
    msg.type = 121U;
    msg.request_id = 38753U;
    msg.command = 175U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 49153U;
    tmp_msg_0.custom.assign("HPIYLUTAFEEVFFMRFOVYERUVPKRCCMKDHQFLJSOCAIJDZVYBWGLEHBTHNKZBEZUBWJPCWAZACYDWPSTKXOCSYSXDKHRMURBLNEWQIUEAXKTGRLROEXDDOLDZSETZNJXTDMCBZOMUSLTADBMJHOVGSPCLGCAFXGFYVQLBPWGWIQNNVGGBSPQXNJTFQKQNGQFOHNTVJUYRRJIXKMAYIPVMAKVHWIHGRQZQMZO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22157U;
    msg.info.assign("GRKAXJMVZWFWBDZQAUQJODNQLXZLADOWGLIMUWSCYCLDTGYUJRXZAJVQSEIJELVLRFQKYNDYDEYHQGYBXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.314938660423);
    msg.setSource(14122U);
    msg.setSourceEntity(196U);
    msg.setDestination(35577U);
    msg.setDestinationEntity(134U);
    msg.type = 8U;
    msg.request_id = 60983U;
    msg.command = 172U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("YVSGNCGCCARIFNKHROMPLUNQRAATUGVLAFEQKSUFINLIJDUMRVXMDBACZWVBSJHIXJOKPAKOLFJJKJCVQTHUAWMPGMGYNXOTKPISDENUGWEMZBVLMGQLKGUHANZUERLDDOYETRMDUYFINVCCJLUYSGFHDCRRHPYIWEZOOJKTSQWYWYEWVXZRRSEPQEIHOJSDFCQZEZVSWPHXYYIFMQAFVPBHZIBTXBDWKSNDTNCXBJBAQTTBOXGQTKBXPXW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30383U;
    msg.info.assign("BSXPYNQNYYACGBFENVRVJADHYWLGMJGMQEDXOIBQOJQBUFCSUMAONEUQDVAVLEUVADWNRXIHEPWFRNBXNMGWSJQWEPEDDKZBRTHTTHLBMMQCUCCZLUOGNHLHGZHLLSBKGDKRFAGEP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.754163068814);
    msg.setSource(52860U);
    msg.setSourceEntity(169U);
    msg.setDestination(42854U);
    msg.setDestinationEntity(201U);
    msg.type = 101U;
    msg.request_id = 21654U;
    msg.command = 213U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 34490U;
    tmp_msg_0.custom.assign("JQLOLWERUNNOMUVQKBBEXSAXDASYMEKPPLLXDKKJMUSYTTFOIUHEVBJTBERMQANKJNYPMFRYAFRQWMZIQOYUIBHTJCNNHSKRTFWZVUNDMDGUWCFHOXFZJQAYAHICTYKPZMWXNLOLWGFLIEZZDACCVXBCVICWOMARGXOZLMIPEVXSXSYTJQVRXEZEPTLJVDKVCQSSWWIGGGFPGHRVDJYTFOLGHHNCI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 28275U;
    msg.info.assign("TZXMJYYJIMNSCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.883444549855);
    msg.setSource(33109U);
    msg.setSourceEntity(131U);
    msg.setDestination(25480U);
    msg.setDestinationEntity(36U);
    msg.command = 179U;
    msg.entities.assign("IIWYYEZKEBLWRHXSPIVLDYEPUDUCUOHLXYZASRWIQQDAYANOMPHGZSSCARSKMJHQJUGBKOKZYDPVTODWHCYXBDRBZXCEXHKWOREELNLMQSXEMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.903543869697);
    msg.setSource(4939U);
    msg.setSourceEntity(8U);
    msg.setDestination(60838U);
    msg.setDestinationEntity(172U);
    msg.command = 96U;
    msg.entities.assign("CEVUJUGFFQLENRBLLJOIZHRUXQUSOYKYJSNANGSHJYZBGAZAVXNNJQERWOMHSANCLWVBQEATKWMUGTBIXYAUUMWTRQZZSMSGWBCIYUIMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.926375098888);
    msg.setSource(41208U);
    msg.setSourceEntity(122U);
    msg.setDestination(54680U);
    msg.setDestinationEntity(57U);
    msg.command = 247U;
    msg.entities.assign("INENSCDZKDRJWITUHZZZYMCRWTMGRWPVVOOVEBDEZKHEFFWIDYIVCNGJUTUHDKKFDAFLIYPNMHQUFDOBJBVKJTRMYJGMWYDLWOHBSSPGKEPLNECWHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.744751872928);
    msg.setSource(37720U);
    msg.setSourceEntity(71U);
    msg.setDestination(47357U);
    msg.setDestinationEntity(177U);
    msg.mcount = 77U;
    msg.mnames.assign("TGOMMOYBYNYFCMNRBPVQXBUZCNHAGQFZGTCTBCSELREVLDEGUNQVXXRWKENEUAUXCOVXDXUKLSDUIISOIHWWPOGYQZFYWPWWDCWHQCNAQKMNLDTFJQFXOJHKLBIUKZAHBMYSUEZGBISDBPEJTAMMTJDZVFCZURSYXVDSIHVATERSNBNAOHKKMQIVMJAABVZGXTPJDTRI");
    msg.ecount = 191U;
    msg.enames.assign("LVLXPHQVISGHHIVZTH");
    msg.ccount = 97U;
    msg.cnames.assign("CWIRZSTYHLJTWTGPIOFMHRDZNFDCEHCZYLNNQFGDCSAKBEUKOYDFEYCFWBNQHRES");
    msg.last_error.assign("TWIZXIQXJEXRZLIMPHLCCUSENUS");
    msg.last_error_time = 0.255714468313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.214204871986);
    msg.setSource(62678U);
    msg.setSourceEntity(133U);
    msg.setDestination(329U);
    msg.setDestinationEntity(95U);
    msg.mcount = 36U;
    msg.mnames.assign("IILWYXNCMGIBVJUHYBUQSMUMQQKEOHRCFSOZDDLFICERRQEOXDFKWTWPSPWLJZQWZNUKRXSCOCBKLRENELOBMFTZSYDBFPDPCTGETCCAYBWUXBFCLZVJJJXFMUMFJJSZFVPXNOXLXDMGRO");
    msg.ecount = 239U;
    msg.enames.assign("XWEMAQBTJLVLXHFRWFOUOYYVZJDBFSHHUGLOZRVZBAKRPGDQDMMXTGFXWNUFDVHUGYACUKPNEGJLPLKJCWMILBHLWOPSFGTSXWKIJYZVZUDOQIQQCYTEBWSWCMDVAXXKMLNIAWIYNZJVIYGFCBBFQZLAOCKYNSXIVGXOQDKQSEDEUNRWJRPMRTNHDUFZTOHCRKAQOIRGNEBJIPIENHJHTKYJSVPTCNFCS");
    msg.ccount = 36U;
    msg.cnames.assign("ZKRAJBAQYLDYVFUCO");
    msg.last_error.assign("VVNIFCWETZZLOOKFVIILRXNTXWJQYWPDQZGDMJESKVAXBEBMMNEZAUYQGJRCTICXDWFYYNGZVRARDORAJHUVJDZBAMPJVOLFSINVXSROCCLUTNDMPHMPGLHUECSIVJUXGHSYSHFEICXLUZRTQREGKNDBJHGIQBLJDGSLPT");
    msg.last_error_time = 0.497828057809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.947793918071);
    msg.setSource(32403U);
    msg.setSourceEntity(155U);
    msg.setDestination(19508U);
    msg.setDestinationEntity(95U);
    msg.mcount = 176U;
    msg.mnames.assign("DGJLSNPGUVBRDRNISMZFJTACTBTCBFBYOHCUXACPQCKYNMUKHDJXXUZZBGEBGWSHUIDAAQQSBDUMUWJDTYHOCQSSGFAPNLWWJXLVBJYEAELFEYBRLLEGZXUXMHJBQIPZCHRFAPVIMIKLVZDZTNWXRMAEKKRNCYHQLITONQNYFLUFUPPLZ");
    msg.ecount = 108U;
    msg.enames.assign("HAGRIUTZFBTDSOBWVNXSPEOIUHQAFCSDOEOXRESNRTDLCZNQUQVINWQXPOMWCFIGDCCCFNYGAJSVGHTTHVKJBWXKWPEJYCRKWQKZKTIRGXHIKLPEURVHOTZWPIVUMWTYEIKDGRLQMVFAHZMYPMSYMNNWDEKJSLSHMFRLMHWXOJBNOAOEXPMZCQQDADLYJNXEFITALYXJLFBIJSAGULGJJNFPVPZTGPBZZ");
    msg.ccount = 202U;
    msg.cnames.assign("ICUMXQCHATBJWKTZBOIWHJRLMDKBKJGFAQIKOFJHPODXBTAXRSIHCIDEQNKMXTXUAIUTRWNYSHSJEBYGFCGWMKAECAQPNQOVQFMDYTZIDWWEPOUGE");
    msg.last_error.assign("MMIYLTVKXROEUQGGWPFUPYPMEVBTQBYIIMUVWHRJIOOXXJYFTRQSKAJLPGKYWKUDCSOCPNYGELZSHDCARDZINPCLWRQSMGAQJZMFTTWVXGOBTNIZKTHYXNFXZUHOJWNDMFK");
    msg.last_error_time = 0.0324936266183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.987818549765);
    msg.setSource(58610U);
    msg.setSourceEntity(93U);
    msg.setDestination(19651U);
    msg.setDestinationEntity(148U);
    msg.mask = 89U;
    msg.max_depth = 0.250074845612;
    msg.min_altitude = 0.234868038751;
    msg.max_altitude = 0.629558648216;
    msg.min_speed = 0.614657262263;
    msg.max_speed = 0.765435733554;
    msg.max_vrate = 0.820677966864;
    msg.lat = 0.655827412082;
    msg.lon = 0.108398240388;
    msg.orientation = 0.375495672973;
    msg.width = 0.127361327684;
    msg.length = 0.640981163237;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.766371255938);
    msg.setSource(56740U);
    msg.setSourceEntity(39U);
    msg.setDestination(30724U);
    msg.setDestinationEntity(20U);
    msg.mask = 8U;
    msg.max_depth = 0.791519988052;
    msg.min_altitude = 0.0805375329715;
    msg.max_altitude = 0.845168021102;
    msg.min_speed = 0.930061942912;
    msg.max_speed = 0.43060312693;
    msg.max_vrate = 0.7580168543;
    msg.lat = 0.599884767974;
    msg.lon = 0.28962427187;
    msg.orientation = 0.369505183389;
    msg.width = 0.0278718742669;
    msg.length = 0.89875702238;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.63232108276);
    msg.setSource(4990U);
    msg.setSourceEntity(169U);
    msg.setDestination(1890U);
    msg.setDestinationEntity(161U);
    msg.mask = 91U;
    msg.max_depth = 0.59472790376;
    msg.min_altitude = 0.937214098571;
    msg.max_altitude = 0.180238269574;
    msg.min_speed = 0.15106535409;
    msg.max_speed = 0.505384726521;
    msg.max_vrate = 0.3863554431;
    msg.lat = 0.0483009409084;
    msg.lon = 0.0481028181624;
    msg.orientation = 0.946288234825;
    msg.width = 0.514997817399;
    msg.length = 0.577449207121;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.910765803113);
    msg.setSource(63770U);
    msg.setSourceEntity(1U);
    msg.setDestination(52155U);
    msg.setDestinationEntity(76U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.488415082515);
    msg.setSource(28490U);
    msg.setSourceEntity(213U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(195U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.00428119924014);
    msg.setSource(936U);
    msg.setSourceEntity(4U);
    msg.setDestination(40049U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.597953329233);
    msg.setSource(56075U);
    msg.setSourceEntity(232U);
    msg.setDestination(21992U);
    msg.setDestinationEntity(123U);
    msg.duration = 63475U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.273437039576);
    msg.setSource(25736U);
    msg.setSourceEntity(145U);
    msg.setDestination(17639U);
    msg.setDestinationEntity(92U);
    msg.duration = 34182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.773061777577);
    msg.setSource(58073U);
    msg.setSourceEntity(133U);
    msg.setDestination(52118U);
    msg.setDestinationEntity(4U);
    msg.duration = 10411U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.321134309529);
    msg.setSource(37736U);
    msg.setSourceEntity(125U);
    msg.setDestination(55295U);
    msg.setDestinationEntity(117U);
    msg.enable = 246U;
    msg.mask = 3384290095U;
    msg.scope_ref = 4248878893U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.916269272052);
    msg.setSource(43779U);
    msg.setSourceEntity(190U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(21U);
    msg.enable = 15U;
    msg.mask = 2401012942U;
    msg.scope_ref = 78677110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.0855239033606);
    msg.setSource(35956U);
    msg.setSourceEntity(93U);
    msg.setDestination(4856U);
    msg.setDestinationEntity(40U);
    msg.enable = 207U;
    msg.mask = 1172700284U;
    msg.scope_ref = 3221389605U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.39760157275);
    msg.setSource(56216U);
    msg.setSourceEntity(198U);
    msg.setDestination(49634U);
    msg.setDestinationEntity(102U);
    msg.medium = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.398515144959);
    msg.setSource(1226U);
    msg.setSourceEntity(87U);
    msg.setDestination(17667U);
    msg.setDestinationEntity(60U);
    msg.medium = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.668957198122);
    msg.setSource(35538U);
    msg.setSourceEntity(212U);
    msg.setDestination(467U);
    msg.setDestinationEntity(107U);
    msg.medium = 206U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.240235687896);
    msg.setSource(59957U);
    msg.setSourceEntity(215U);
    msg.setDestination(31563U);
    msg.setDestinationEntity(131U);
    msg.value = 0.585548655711;
    msg.type = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.890038085098);
    msg.setSource(3659U);
    msg.setSourceEntity(137U);
    msg.setDestination(56171U);
    msg.setDestinationEntity(251U);
    msg.value = 0.980222171516;
    msg.type = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.723021651155);
    msg.setSource(37640U);
    msg.setSourceEntity(241U);
    msg.setDestination(56672U);
    msg.setDestinationEntity(101U);
    msg.value = 0.591947149927;
    msg.type = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.976894831407);
    msg.setSource(46126U);
    msg.setSourceEntity(27U);
    msg.setDestination(46188U);
    msg.setDestinationEntity(82U);
    msg.possimerr = 0.816072682862;
    msg.converg = 0.924851148231;
    msg.turbulence = 0.0741749627467;
    msg.possimmon = 171U;
    msg.commmon = 68U;
    msg.convergmon = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.188171218965);
    msg.setSource(32394U);
    msg.setSourceEntity(155U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(244U);
    msg.possimerr = 0.747125183349;
    msg.converg = 0.213860196073;
    msg.turbulence = 0.0346570285837;
    msg.possimmon = 210U;
    msg.commmon = 188U;
    msg.convergmon = 18U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.535993010883);
    msg.setSource(62141U);
    msg.setSourceEntity(24U);
    msg.setDestination(56431U);
    msg.setDestinationEntity(149U);
    msg.possimerr = 0.235046162434;
    msg.converg = 0.318026065589;
    msg.turbulence = 0.654785205226;
    msg.possimmon = 9U;
    msg.commmon = 65U;
    msg.convergmon = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.311605955303);
    msg.setSource(60837U);
    msg.setSourceEntity(174U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(197U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.877028064434);
    msg.setSource(11373U);
    msg.setSourceEntity(181U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.374839263611);
    msg.setSource(62877U);
    msg.setSourceEntity(50U);
    msg.setDestination(754U);
    msg.setDestinationEntity(148U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.637542054009);
    msg.setSource(2148U);
    msg.setSourceEntity(221U);
    msg.setDestination(23618U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("XUQNRKIYAAXHDBNHWXGKQ");
    msg.description.assign("IILMSZJWKKTIJDBTOGRXHQRAPVVPYUUGLQNFBSRVHNNBXMBQMEUDWXJMULSRHPFOSUSGZVMLIZJDXDSNXYSHYXCGMONTASLYLRGPNFOJYLKEJXVFFWQKSPUHOTCJW");
    msg.vnamespace.assign("NOOIVNONRDAUDPBYCDDOWWUGKLZNXFMLFZTEMFEAEQMQKHKCHPQGEIIQCFLCVIJLOJMYSZQNLRAMRXCVSMJRSYKYFDAPVZMSVEPHDUPJLSDKFKRGAHATZIULVFZKYXBBNTGDPOEHRUENSCHZCGEAVMWAVROWFMGJEUQTUXXIJOASWUN");
    msg.start_man_id.assign("BCSJKDKHBEOPRJSFUBGNQFIOIFSMXCOTIRWKALBIJDSAWEGNYQNAFVSUAWEWLZKMYAOHZNOGXEGIRHJIS");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("UCOMSVHEHSHUWAGXKKFRYCLFNWJ");
    tmp_msg_0.dest_man.assign("HTWNKRYSUIQMOQXNRSDAWAMFZUMPNWHOLHLFOYHAEELVKGWWVFQKVFXSSNQAIQLTFKDGHESMMJYLUFPAYOCLPDCFPROCGBZYANXSZECOTRAVPTRLLTPJNEGUIBPKGSSEHVKMBWCOKNRVBNNQACBVTNKUJDFIZZJTRLMPOSZJWACUWXIKQJBOG");
    tmp_msg_0.conditions.assign("ZPKWXWPAONUWMYRREZYYFBFONCGZIYSYBZHIDUVJEKBUTGSGFGMPEARAAAPIIRSLVPDQNQPILEQNXQNCBVFVCPITVEAUJONHUCFDJEOTIHLWSHRUMOHSUSAJXKXOLZBYYWAZVQKPSOKTNKFKELFJKOHBFQHQVHGSXCVHXWVOADGMUEEQSJQMIYBNWXCZTSFLBRDTBIBTZMITEUDWRLQNTNUCGDWDMMYKTCHGDJJCOLDWLRXMKP");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 26235U;
    tmp_msg_1.flags = 201U;
    tmp_msg_1.lat = 0.527512829457;
    tmp_msg_1.lon = 0.252486504279;
    tmp_msg_1.start_z = 0.64306873356;
    tmp_msg_1.start_z_units = 148U;
    tmp_msg_1.end_z = 0.218213092897;
    tmp_msg_1.end_z_units = 208U;
    tmp_msg_1.radius = 0.0182078457573;
    tmp_msg_1.speed = 0.48594953537;
    tmp_msg_1.speed_units = 8U;
    tmp_msg_1.custom.assign("BYYGBTYTQQNGGDJDTPADFAZWZCMDNVILYDSUORXSMSJFYVRKWNJEUSKTRLUPKUJOUONPAAFCRSNCYMKTCFHKOEBHGGNVYFCQXXOBLCBSEDRVXKAWLEIUHQLZZPEGIJHGLCELIQUVEVXWLQBTNWWAF");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.0514862129851);
    msg.setSource(37622U);
    msg.setSourceEntity(249U);
    msg.setDestination(42971U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("ONMYUQKBTRSWBXIKBRCGTJNHEAJCYG");
    msg.description.assign("IDDQMEAUZOZXUFZGMAHNUQMNYCYVHVLRHCQHJZAZTAFEPZSLWYVKFNIMGUTNSRZBMLDLSVDORVXBHQEHSMPDTYAUYXCDSVWAOIBN");
    msg.vnamespace.assign("IGRCMGUTHSIJRNFHIJRSVGNJCAWHCUZOXZHXLFDIVQDGZGDWBDCWWOIBGIWFGNXRRVWPLYYQCAHSSZJOZFEETCBINCDXKTXOCSHXXNRQGHPHZOYTEPAHKZGEVELVVKJBERPPDRETULUJYKWMYBXNSTLPSPMWMBC");
    msg.start_man_id.assign("DGFNNHCXVIMDOELGPPQZXMWQHFYCUDQGGXRJDTJXMJEBVJFWGFSRLOBCCUKYCBGDSTLTQOVTUPSMNSRAXRTMAIEQVUELTPTUZIKNACPHVXZBZJKJSHDIFWWYOFVWYBOUKYLVICZCQHRRBEOKQKZHIGMLNWSPNRDZXXHDRJKAAFUHJJREKSNSBQNUOAPIGTAY");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EPOJNNMWVIYJNHSWMZIUKMBRAEMIRAHPJIEGHUYQHIUZGWTYSCWFJTWKNNKJOWDYQVLCDXYQSSCCSSDTSBKXSYIMHXPVFVMGMNRQEQEIPCPFJJDXGFQKUTNLBVRSKMRFBDXTFOGFWGZHDZQSHHWJLAXYAVIXQNCHWQUPLDCEXYOALKGLOYTGTOMUUZGTEI");
    IMC::StationKeeping tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.869995768339;
    tmp_tmp_msg_0_0.lon = 0.4599907647;
    tmp_tmp_msg_0_0.z = 0.404098528387;
    tmp_tmp_msg_0_0.z_units = 189U;
    tmp_tmp_msg_0_0.radius = 0.0565654940115;
    tmp_tmp_msg_0_0.duration = 36189U;
    tmp_tmp_msg_0_0.speed = 0.592193326625;
    tmp_tmp_msg_0_0.speed_units = 86U;
    tmp_tmp_msg_0_0.custom.assign("KVLBUABGRDZYOVCQZYNMDVSBDWOJVJCKSRUUITXRUGINTQTQTOFEIMPFPDFLDXAGTIHLZGHNPUZYXSEU");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ClockControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 165U;
    tmp_tmp_msg_0_1.clock = 0.145459197602;
    tmp_tmp_msg_0_1.tz = -52;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SonarData tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.type = 209U;
    tmp_tmp_msg_0_2.frequency = 495279623U;
    tmp_tmp_msg_0_2.min_range = 8068U;
    tmp_tmp_msg_0_2.max_range = 32720U;
    tmp_tmp_msg_0_2.bits_per_point = 211U;
    tmp_tmp_msg_0_2.scale_factor = 0.922061961245;
    const char tmp_tmp_tmp_msg_0_2_0[] = {13, -13, 24, 18, -64, 71, -32, -63, 116, -93, 77, 72, 56, -117, -79, -85, 11};
    tmp_tmp_msg_0_2.data.assign(tmp_tmp_tmp_msg_0_2_0, tmp_tmp_tmp_msg_0_2_0 + sizeof(tmp_tmp_tmp_msg_0_2_0));
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RLWQIXXBIOJUTMNUKWWQSKDDYNVIZRJWVWZFKVWRDETUCOVXKTONUDGHUHHEJIGSFHPRJGKXRACAGXUPWOMGVT");
    tmp_msg_1.dest_man.assign("MCIUOBWDUIXLPWOLZVCCMHBSJJUWUXNQKPCQXDBFFVSYVNGMLQATTEYKEVQXTZRHFSWVUAKTXPJGZFCSBYZUKIXKNAHAUOBEMQVDUSZSAXDEYQNPVYPZJOXVSGOLCIKFORGLHKBWOWAPYSHCJGIHALZTMGAMTAYVDRHJWFJRGNWICLXJHEPYRBROGRMZRFWGTMLECDULDNPYNEIROQNKGHPDSFTDODBTNZJVJURBEACP");
    tmp_msg_1.conditions.assign("RZFTBFCEGCLICOKAUNNKNHSLBYJKIRPCHYHERILKSZRETJEY");
    msg.transitions.push_back(tmp_msg_1);
    IMC::ControlParcel tmp_msg_2;
    tmp_msg_2.p = 0.564570197959;
    tmp_msg_2.i = 0.43961261745;
    tmp_msg_2.d = 0.62026155819;
    tmp_msg_2.a = 0.271273923192;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LblRangeAcceptance tmp_msg_3;
    tmp_msg_3.id = 8U;
    tmp_msg_3.range = 0.335039087012;
    tmp_msg_3.acceptance = 68U;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.570221939277);
    msg.setSource(3687U);
    msg.setSourceEntity(249U);
    msg.setDestination(12083U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("SXHPJPCIMHPHXJRBUYHPKWGUDRTIIOAMCPNWSZCEJISZXVMBEDPRWXWDUNJUYVOBTWIHQVKFLZZFRCIHQZTLRGAUEJDEPYAYWMTQYTQRPFLOJKROULGXAKWSCTGACBNDLBJDSJFQAOYQVHEBKKONMMEOIGFEWDROGBEK");
    msg.description.assign("AKZKUJQFDNSOMLJVZAMJUUOTVSDZGGIYPAPPHWAHCALJRMOCPATJDEWOQKWNEVQNHIYBKBICOOWDVYUN");
    msg.vnamespace.assign("XAKWDQLCOWBRWIQCAEOCYKOTZHPUWETFMLVFXLVSQTRMARMMTDNXJSAPHOGBCHNBFMCHEEX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("EXDUSKPTAQDWTIFQCFMMVNVPSJHZNBPCLZTGLWRUKUYHBICDUUVTFOEXOSZTJQLDNMWITNIWDXCAWOFAESGEDVUVYAIFKBGOXGSGJRJTKNJMJUHCTWQVIKXHRFOSTYRUDXZWERPALIMUQDHXSV");
    tmp_msg_0.value.assign("EJDKFVGCITPRFMDSASTEMKREA");
    tmp_msg_0.type = 234U;
    tmp_msg_0.access = 227U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XACGRJWCTNSZROGAFXYDYYLAJOFVQEQFVMJTNZYSNXUQXIJWMMUDBVMSEPWCQGBFYDDKKTTWZVPWZWSTBBLPQAZTHIKTNUICLTSBDVAHVZMHYNPASUXRZUUCN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("EJYEDSPTAEMQEXELMGYALXZAUV");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 1680U;
    tmp_tmp_msg_1_0.lat = 0.0335951765327;
    tmp_tmp_msg_1_0.lon = 0.946148198856;
    tmp_tmp_msg_1_0.z = 0.505475317546;
    tmp_tmp_msg_1_0.z_units = 191U;
    tmp_tmp_msg_1_0.amplitude = 0.488516261706;
    tmp_tmp_msg_1_0.pitch = 0.163776738859;
    tmp_tmp_msg_1_0.speed = 0.773305398818;
    tmp_tmp_msg_1_0.speed_units = 131U;
    tmp_tmp_msg_1_0.custom.assign("NQUXFOBHDUDZVPREXUQIEBCQIWRCHAPBEDNJXMALSHFKIPRDJUDTQQXTVKPMDXZACOMRSBHXPCSWOFGXH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticOperation tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.op = 138U;
    tmp_tmp_msg_1_1.system.assign("NQCAVFLWMEPTLCMNVSRZPBTAXDTRBISZVFEUSHABWKLKQQRXEEOKMLNVGOXHUPGRDZZEAYYDHJCTWZOYZNPEUBTDKIUXAYQWSTFGUAXZUWV");
    tmp_tmp_msg_1_1.range = 0.72712694579;
    IMC::GpsFix tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.validity = 40131U;
    tmp_tmp_tmp_msg_1_1_0.type = 164U;
    tmp_tmp_tmp_msg_1_1_0.utc_year = 48683U;
    tmp_tmp_tmp_msg_1_1_0.utc_month = 226U;
    tmp_tmp_tmp_msg_1_1_0.utc_day = 45U;
    tmp_tmp_tmp_msg_1_1_0.utc_time = 0.253555572105;
    tmp_tmp_tmp_msg_1_1_0.lat = 0.124473926914;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.41652725889;
    tmp_tmp_tmp_msg_1_1_0.height = 0.723998015656;
    tmp_tmp_tmp_msg_1_1_0.satellites = 228U;
    tmp_tmp_tmp_msg_1_1_0.cog = 0.794863280616;
    tmp_tmp_tmp_msg_1_1_0.sog = 0.594555258331;
    tmp_tmp_tmp_msg_1_1_0.hdop = 0.648968213738;
    tmp_tmp_tmp_msg_1_1_0.vdop = 0.965359315647;
    tmp_tmp_tmp_msg_1_1_0.hacc = 0.197588876352;
    tmp_tmp_tmp_msg_1_1_0.vacc = 0.802217217949;
    tmp_tmp_msg_1_1.msg.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("UVJZJEVLTDXRXHVDMMFOOMYBMSNMUGLPP");
    tmp_msg_2.dest_man.assign("DRIQIYVULDRDNOXFHDGWUZKXISZYIERNWBQMHWXSBPTUIQOZDYPKAALWLFFTIFENSWJBTJHJRMKARHTZXBCAMQOWUVZNOWBHFQKIBTZVJBLRSPESMVHQWGRZHQCJUAPBFEOUEYFQAMKRCMRGAZHCPB");
    tmp_msg_2.conditions.assign("PRFTESFECVMCXVZZMHXGMCQEEQYLQMGHNATQXRBYAVQWYOLUCJTCKPHYNVILGIWHEEKCGOOGJZAFIKCJWWZBSGTLZBBODDAGXEVQTBMLUKQJRPFJVRNFAYNNPMTLAPTHBPXNZDIS");
    IMC::LblBeacon tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.beacon.assign("LCOMABQSXMZOMIVUTPNANBKOREPOSESNLMRWPWXXFPEIMVXTJYTNWRCPAKJCHQVWKSNTXJGHAZDNMYQRWSTABPAGGPQSJHQYIVQKLUKLZRDHYQUZYBUVJEGGCIYWYLTHLSTCMIVPFDFFJUHWKOUEFCEVKHLOWXMSHFAHHNDAIZLZDJLZEKZTXLVFRFBRGWKOJITPTODEGNFZYGQBRIKUBONZCJEISPBBAXEICRRXDYMOCUUGCMQJUVGFYBNVX");
    tmp_tmp_msg_2_0.lat = 0.100341075696;
    tmp_tmp_msg_2_0.lon = 0.314195900056;
    tmp_tmp_msg_2_0.depth = 0.438865895147;
    tmp_tmp_msg_2_0.query_channel = 187U;
    tmp_tmp_msg_2_0.reply_channel = 68U;
    tmp_tmp_msg_2_0.transponder_delay = 189U;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::AcousticPing tmp_msg_3;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::VehicleOperationalLimits tmp_msg_4;
    tmp_msg_4.op = 126U;
    tmp_msg_4.speed_min = 0.0576177978561;
    tmp_msg_4.speed_max = 0.377347128733;
    tmp_msg_4.long_accel = 0.251360929187;
    tmp_msg_4.alt_max_msl = 0.282622567363;
    tmp_msg_4.dive_fraction_max = 0.298369682955;
    tmp_msg_4.climb_fraction_max = 0.0670391168714;
    tmp_msg_4.bank_max = 0.162580185116;
    tmp_msg_4.p_max = 0.228790188684;
    tmp_msg_4.pitch_min = 0.419898155375;
    tmp_msg_4.pitch_max = 0.549052006251;
    tmp_msg_4.q_max = 0.66643113011;
    tmp_msg_4.g_min = 0.297503349269;
    tmp_msg_4.g_max = 0.829854207653;
    tmp_msg_4.g_lat_max = 0.490846801594;
    tmp_msg_4.rpm_min = 0.592080481898;
    tmp_msg_4.rpm_max = 0.431969263042;
    tmp_msg_4.rpm_rate_max = 0.840344714771;
    msg.end_actions.push_back(tmp_msg_4);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.524613633302);
    msg.setSource(42981U);
    msg.setSourceEntity(38U);
    msg.setDestination(61740U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("RWMDWKEZUSXPPOAGGURVILFXOBDMJTCFAGVIWCCNMLWKFSWWHAFLJAKMDUQBSCYMOPLFPWRPXBXVDSEBYCYCAPDYRFJEHZODLXSZTBIVQSYIKUCTMWHBEYTSHYDFVURLTAVKDJDEUGKIBEKHNIGJ");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 27551U;
    tmp_msg_0.lat = 0.828333576476;
    tmp_msg_0.lon = 0.485897764352;
    tmp_msg_0.z = 0.298854360892;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.amplitude = 0.30570969081;
    tmp_msg_0.pitch = 0.668485709254;
    tmp_msg_0.speed = 0.0915236495483;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.custom.assign("VZGWQADRYNAAPALJHDEVBMUHHXTFWBJYQLQYAFPMFPMKXTB");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.534235807946);
    msg.setSource(43457U);
    msg.setSourceEntity(93U);
    msg.setDestination(8022U);
    msg.setDestinationEntity(241U);
    msg.maneuver_id.assign("SGEQZHDYZBXTRKQFNNBFDIXLBLWADZKJWZENEUNPOEGAPEKYOYZUJBJWKNMUHNHVIPHZWRNQXCAIDMGRKFNRTCFSQCPTXXQUYDLXPOTQCBCXIVCIJLYBJYOOOAHCGSTLTQGAGSFMRGMLKXUEUIMBDSIVVSMRSRVYWVQTZIKVCRFJQANFKOBDDFPWHADTJFMMJPZZPD");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 19291U;
    tmp_msg_0.lat = 0.595318998116;
    tmp_msg_0.lon = 0.609488958196;
    tmp_msg_0.z = 0.110929681486;
    tmp_msg_0.z_units = 159U;
    tmp_msg_0.speed = 0.662227332228;
    tmp_msg_0.speed_units = 134U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.741226509541;
    tmp_tmp_msg_0_0.y = 0.143613492428;
    tmp_tmp_msg_0_0.z = 0.70194493812;
    tmp_tmp_msg_0_0.t = 0.212364263549;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VQWOHUFTGPTAJIXSZWKJFUPHBJXUEZWEEBIVBKDNWKHQPZJOLFQICAIWZJGYJICHPVRSNWVEHTLLDAHCQXVPELUOEGYKMWPVSQOAREALFZYZDZSFRZPRBXGRHFGTTNFGDSNCAFKZMWWYMRULQEMKHGRHKNYAUYCPLDYATUQI");
    msg.data.set(tmp_msg_0);
    IMC::CameraZoom tmp_msg_1;
    tmp_msg_1.id = 57U;
    tmp_msg_1.zoom = 30U;
    tmp_msg_1.action = 110U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryEntityState tmp_msg_2;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.503940045863);
    msg.setSource(25413U);
    msg.setSourceEntity(101U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(155U);
    msg.maneuver_id.assign("QPWFZXACJATXDTXCTLQDBZLLMTDXZLEVSIRUTYYOSGVLEMOIHCLIRMTH");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 16696U;
    tmp_msg_0.lat = 0.696698804252;
    tmp_msg_0.lon = 0.0274805754016;
    tmp_msg_0.z = 0.485442498844;
    tmp_msg_0.z_units = 238U;
    tmp_msg_0.speed = 0.904170957262;
    tmp_msg_0.speed_units = 152U;
    tmp_msg_0.roll = 0.700046647643;
    tmp_msg_0.pitch = 0.527383880384;
    tmp_msg_0.yaw = 0.600067416516;
    tmp_msg_0.custom.assign("RXAQVIQSVHAXTRSXUKNEBNPKKBFVZUVUMDFZCHI");
    msg.data.set(tmp_msg_0);
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("UAJBBISZBHTUKFQQIKPNDWHBALNQZUFGJZZLFWIKDCEMECLSDCRDXOZBVYFTVNPMDMHNLGXPOYXJFXMTHGIVWOBOXNREYZFNJZDDCLPEINBGSHTVQXCWXTEZMAKGCWQLMOVJWZHFCVYHUFGJAYRKTYOQQFFUULQOSJHYDRVLUKNIXRMSOKSRSWAETSICVSIYLKEIAICPUDGABRJOAJXQAKYVPRRMGGWCAEYWTGSJVBNPHOWKETUXHNTRPDZ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::VSWR tmp_msg_2;
    tmp_msg_2.value = 0.7566954905;
    msg.end_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.371948334226);
    msg.setSource(42461U);
    msg.setSourceEntity(67U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(57U);
    msg.source_man.assign("AQFLJDVVSXGOBRLTTBOLBSPZJWCQRVGFLFUIAXQWIZGUKGRBIVDAKXBGRFLAHSOHEMLRZZIQWHJVCUMVMNIZCTQMIIUROEWPWRAFZOLPUHQYDJVVEEONSHFQRCLPTDMZNXKDQBCBBYWPCEECMSFDOGRHERWNVGMKTTTFYGFYPUJMCU");
    msg.dest_man.assign("PWUENMEKIWZOEDXBKLSGHBJMVJPDDAMMWCAJAARIUVPRMFNBHKAXMTNKICLLTNIMGSTYIHNGZOUXFVWBXUSMFISERNSKKFTYEPZWXMUFARRPYWNUERJYDYHGDQSCKLSYZCLWQCRWIAOHTCZOJDHXZGVUEYVUJCPECLQXQFRGR");
    msg.conditions.assign("CFZURKACLHZIJBYDWMJJUGRUOJNYTNMHQXXDGYQLMUFPLUWIDQIMDTPGSTPWOZVDLKOVHIMTRTGXULKOOFPZCTBCDBVETMOJKGFZKWZLFWEVIQWEERBSBYXJXCSSTYU");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 191U;
    tmp_msg_0.value = 0.300057403441;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(7.13964917072e-05);
    msg.setSource(9651U);
    msg.setSourceEntity(230U);
    msg.setDestination(34563U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("SUTWJPPCMXQTDGCQXMOOXTYBJCFHHGCL");
    msg.dest_man.assign("ANJZCYLKYPHEYYUAOFESDRUIAPLXTQPTVMYDKCNMSMVUZOCHCVOWLTUPBIQIJWVGIOVMYWNOJBGQTAKNRRHHCRFOFASRZKADFDTWDX");
    msg.conditions.assign("EXHSKBFJVAOOIHAIOAPZLQCDGUMDCPKELJEQHJKGIFWSVFPUIXWNHDXBLQTMXHDSIIZBNZKGTEXAYYZRRRYRZHQGKDCWLLULWYVVFSRTBQDOXMXUNWSLOCYVBGEGJUTNABTEZTQWPOPZYCACJSKKAALQYBDJSDMOPVVJMKJOZWRTBUFZSKHLYXBXVJHYRRPMEFMOGNGLHJMVCIYUGPOUNKTWSACFQRBDWNFDAWM");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 59462U;
    tmp_msg_0.plan_size = 161380384U;
    tmp_msg_0.change_time = 0.972222735662;
    tmp_msg_0.change_sid = 53652U;
    tmp_msg_0.change_sname.assign("JZHLSBXAPCOCAKLZIWLTMNJPMYMYUPFISYTPARUAMDIDSLNUHEHGOLYXGJWDSBMFTGSORZFHJVQDCYCPGUWWHIEYICUSZXOJLFQMDERZEJQXFLISUHOEKJDBQVZLRHYXMYGMGTZCKNIPRHFTGHOGVVKENUJWDWJEGEWDDRPZQLFNEZBTKN");
    const char tmp_tmp_msg_0_0[] = {88, 48, 93, 48, -21, -42, -12, -89, 74, 35, -33, 86, 76, -69, 112, -66, 77, 25, 108, -75, 80, 50, 33, -56, -83, -105, 73, -59, -59, 90, -13, -93, -92, -87, 39, -126, -39, 102, -70, 56, -47, -30, -53, -24, -77, -2, -125, 98, 74, -34, -102, 87, -10, 119, 35, -37, -43, -112, 23, -82, -45, -13, 47, 92, 56, 31, -15, 105, -117};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.933038791303);
    msg.setSource(29845U);
    msg.setSourceEntity(72U);
    msg.setDestination(44305U);
    msg.setDestinationEntity(28U);
    msg.source_man.assign("UVIVDJVMTIFCIHUZVRCVQWTXWMFUNGWFWQJBTMDIIVILONUKTYBFMKYAXL");
    msg.dest_man.assign("VYQXTGNYBXOBAZRFFJZWUBKCSSEVMKYERKGDFCCQZYHDDRUHCLHQIOHHZNCQ");
    msg.conditions.assign("VCVPEKILDGTFLHGDPYQQYFXGUMJPZAZWESJGJREDXPUHTKBHNEVEXWMYVEPTZQDDZBDCOCDRJQIJSNZAMZUHSWGIILBHMMYLXCFTJNMOLAWTRBOFAPSNVFVKRZXJAEKFNZOGYNIYVYFEWUATQJFXJMTLCLKWMQEVPTAEWXDOWUOGLPNUHSPKB");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 42205U;
    tmp_msg_0.lat = 0.467586245333;
    tmp_msg_0.lon = 0.117378153823;
    tmp_msg_0.z = 0.48936925633;
    tmp_msg_0.z_units = 120U;
    tmp_msg_0.speed = 0.933649475068;
    tmp_msg_0.speed_units = 151U;
    tmp_msg_0.bearing = 0.442729508796;
    tmp_msg_0.cross_angle = 0.627543298012;
    tmp_msg_0.width = 0.00598889595834;
    tmp_msg_0.length = 0.226707403795;
    tmp_msg_0.hstep = 0.942465896955;
    tmp_msg_0.coff = 109U;
    tmp_msg_0.alternation = 60U;
    tmp_msg_0.flags = 137U;
    tmp_msg_0.custom.assign("DLGSULJJKTJWIZTOVABLRRWANDRLIHXDVWBCUMHGYTIFKUIRHDNVMZFZTSOIHNTOMXMYIAMCPVMPLAPGJABZNWWJOJLBKEKFVUOTHEYRMSSIDQKBBEQHUSRONXEEDACUPXCBQVKATQPLFMYUYDERSVKDXPFUWFDWWYCBWPLHKSIUPJJWECQEFGNVDNYZYOCLTBHXICEZXGJRQXGOQEIGNLXBQ");
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.815410885843);
    msg.setSource(22907U);
    msg.setSourceEntity(71U);
    msg.setDestination(3649U);
    msg.setDestinationEntity(194U);
    msg.command = 208U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QPOMCOJSFPSFLMUTWFLPWLRFHZGTIBAGHADCCZNXGICMIDDZBXMAIUDBTHWZJIWRCLMZVLEYZBVQVXRXTEUNUGFRFQOFVYGZOUBYOSANSKPDUIKGIWPVQ");
    tmp_msg_0.description.assign("UXZXRDPBFFADVPCKQKPBHBWVMQTAURKSUJUTJIVCFXJGIEUPZWPEDXDJYDQXABZMVLTOEXNTQCZAMDRYIZLSEDOUNIKQQWXFRFCEROFWHNUPGWBFXBISNFAOPJNHZNHACMJVCTVCMVCWZYKSEEDXBEFISZXTSDYAPQHNMWIAJELWJCRLGOUGGMAYZSBKOPIGWVQYKUTOKTHYLSGL");
    tmp_msg_0.vnamespace.assign("LLAOFHIIVTHXXFYJDQVDIBDBIUMKECXCGQPTUNSAYZYCXNRSAUXIGMPWWJVICWMZECDRUVXOPVGJVVUTTKQZYIXFJBHYNLPCESUQQRPAQPRGQEAVRMXKINSZBZFOWIYHJEOSYBSJORZFCHNKNMMJMMIFEQELLUEPFOJWQCBSDGZDYKBSRWEQMFHNDJFUZBTNHCVOTHW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YPEWGLWCXRILAIBDDHVCDHXLTSAGZQFNKHOBZOJEGBQKVPXVAXUTCSOLESKHEGXVGKJYBUFSKEWBKULJGQROJAAPMRXQNYYTWQNMHEYEUAEGXSJUEQRMQQHLGMYFFHOZNSHGVZFPSQCHCFMITTIWYZACIDTJYMOUFKHKWDIBXOFAUVSVYXJJMLBDTWPZMTNDTFIDMFCWJUPSBRSNGAIPBZNR");
    tmp_tmp_msg_0_0.value.assign("KCRTZTNFAIWXPRKOVHHCEYENRBTWHMLBXKOZRIOQJNSVVPBJOGQFDQJPYYAUDWJYYGZLLQXZJHUXNGHPPWCIZBUNEBLNGIAPTHSHUOXDEARLGCWVYKME");
    tmp_tmp_msg_0_0.type = 91U;
    tmp_tmp_msg_0_0.access = 213U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OSQFJABGWNPYLAO");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("TENWKYBVRXDQBTAAYBUSEHEFBHJVGKLHAQKJPBOWXMNCVOEMDHDUXLRFYONBOSSSGXNYKTAMJILBZBNGKHVSFZVYMRCZLZQDBQONROLWTXFGQFCGBTTDISASANDNURRWUEGJUEPWWTPFYQXKIDMUEOUFUGVJKSGJWCVSYWLXVTXZNPLCGIYJEZFCJYZHM");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("YKHLRRNWVPCBXHCINOKNQPEVTJEIZJOUAVZRPUZWZMJHBYUIDCTLUCFXRZXICMAEDBJXEGQPZIFXARSNHFIFIHLPJWVYYXAYOYDGKMXOJNKNMFHCSKKEVFPJDDRNPHQJBMQJTKLVEIYAOFWWUWURDLRFAGUBMRUXWSTKCGTHBGQTPVVZUWSECSEGIMLOBJNBWDAPRZHDNTSQXBKIAASFOXSGVWOQCZSYOMKCDGUMLBLQMYGETALZOG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::DesiredVelocity tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.u = 0.594171214264;
    tmp_tmp_tmp_msg_0_1_1.v = 0.804569318366;
    tmp_tmp_tmp_msg_0_1_1.w = 0.582960267314;
    tmp_tmp_tmp_msg_0_1_1.p = 0.497707376267;
    tmp_tmp_tmp_msg_0_1_1.q = 0.31379384456;
    tmp_tmp_tmp_msg_0_1_1.r = 0.668647674426;
    tmp_tmp_tmp_msg_0_1_1.flags = 172U;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LVKENXWOSQHPSUDTGNOBRNBMFMXKFRXPHYYQGFZZGZZGYCOKBIXOMOULWMAYSINFHB");
    tmp_tmp_msg_0_2.dest_man.assign("PHZDGYWAKAMMQNBYJHYYBHPFXJCUBZWNUVJFCWDZXBRJWFXXYJXA");
    tmp_tmp_msg_0_2.conditions.assign("PSTNZABMFNQWNACTBGQSKQETMWDSLDVNHJKLSAIXXUQXMLCBAFQPOVLPMLVNZWPWYIROO");
    IMC::VideoData tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.id = 233U;
    tmp_tmp_tmp_msg_0_2_0.width = 59674U;
    tmp_tmp_tmp_msg_0_2_0.height = 53619U;
    tmp_tmp_tmp_msg_0_2_0.widthstep = 17617U;
    tmp_tmp_tmp_msg_0_2_0.channels = 28U;
    tmp_tmp_tmp_msg_0_2_0.depth = 134U;
    tmp_tmp_tmp_msg_0_2_0.finaldata = 207U;
    const char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {-34, -30, -67, 30, 16, -88, 89, 113, 55, -110, -111, -34, 2, -83, 89, 76, 50, 79, -63, -83, -121, -75, 0, 125, -102, 18, -71, -65, 115, -125, -89, 31, -77, 13, 16, 99, -121, 111, 93, -89, -11, -16, -54, 18, 92, 7, 29, -21, 82, 80, -128, 58, -74, 77, -19, -72, -113, 123, -122, -54, -39, 68, 31, -87, 97, 33, -60, -55, 47, -68, 124, -73, -58, 58, -93, 66, -65, 57, 9, 24, 48, 39, -76, -6, 28, -85, -38, 18, 109, -92, -10, -125, 61, 85, 25, -26, -94, -107, -88, -63, 16, -53, -18, 64, -103, 17, -50, -53, -40, 14, 94, 44, -78, -50, -10, -45, 1, 80, 89, 111, 123, -100, -106, -40, -84, 24, 48, -64, -106, -57, -33, -69, 72, 71, -14, 106, -45, 43, 14, -74, 35, -123, -92, 102, 10, -76, -103, -62, 68, 76, -113, 57, 38, -41, 0, -29, -7, 75, -15, -14, 46, 30, 114, -93, 48, 85, -69, -111, 34, -78, -50, -21, 92, -13, 65, -94, -114, 42, 40, -43, -47, 117, -1, 61, 1, 110, 39, 18, -101, -110, -112, -14, 88, 30, 34, 60, -68, 68, 23, -94, -14, -121, -62, 48, -15, -37, 95, 86, -70, -32, 15, -75, -84, 23, 59, -21, 126, -72, 106, 3, -45, -102, 39, 96, 28, -20, -50, -61, 12, -65, 84, -39, 42, -50, 89, -52, -60, -10, -122, -50, 18, -61, -78, 91, -40, -23, 48, 36, 104, -25, -6};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::DynamicsSimParam tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 141U;
    tmp_tmp_msg_0_3.tas2acc_pgain = 0.5225653121;
    tmp_tmp_msg_0_3.bank2p_pgain = 0.663445716514;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    IMC::Elevator tmp_tmp_msg_0_4;
    tmp_tmp_msg_0_4.timeout = 64426U;
    tmp_tmp_msg_0_4.flags = 90U;
    tmp_tmp_msg_0_4.lat = 0.942466211515;
    tmp_tmp_msg_0_4.lon = 0.40556717127;
    tmp_tmp_msg_0_4.start_z = 0.538351961079;
    tmp_tmp_msg_0_4.start_z_units = 39U;
    tmp_tmp_msg_0_4.end_z = 0.0540510901063;
    tmp_tmp_msg_0_4.end_z_units = 24U;
    tmp_tmp_msg_0_4.radius = 0.579791542655;
    tmp_tmp_msg_0_4.speed = 0.447338408608;
    tmp_tmp_msg_0_4.speed_units = 112U;
    tmp_tmp_msg_0_4.custom.assign("HSIOINOHXZJUGAMFUNIZCYCIDXEQBHXEESIRWYQVMHUSUDKWPFGIBOLDQ");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_4);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0048233405096);
    msg.setSource(26679U);
    msg.setSourceEntity(134U);
    msg.setDestination(45430U);
    msg.setDestinationEntity(77U);
    msg.command = 106U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TAQXMPPFVOALYBOPIFKXOMQBPSCYSRDXIVGEMWQPTZMQBWVWOVTRPYUIGPETHLSKHAEQHIDARZGPLSNUKYHKBCQQUYYOLUQZMSZQTMXKAEZNZNYZFJPVHLSEIWVZCMRGHHHKCJFFBVIKBBWEKCVOUVXINTJOAXTGKCYGAANIUUTBYVBMAECEDPFOSJGLJUJWYRHXICRDFGNFNTDOFXGJWIDRGLDSWLLXRMEJARDQTBNLNXCWJC");
    tmp_msg_0.description.assign("DVCVAEILRISYLNSNVGMJFMFSHRBEAQKCKTJGPTCNGCUDAEOTXOKEHNDBEUHWJRJBDSGJOCMNQYCAETRTZZAFSWQLNMLIV");
    tmp_msg_0.vnamespace.assign("DLGUVNYPOEWGQCOZUOKLGRMVAFORHLTMQVTXLQBMHUQQSPBSSJVBCTZISQQNRWHEBOLNOYXYLZNNCBMEEBUKNJZEIWMNYWKVNAJFXOJEEQSBXGMKKVJJFDKWPQDYJIVANDCUHBSKIFPCAMRGADJPDUSVXMMRGAIKPEGAPZCHWCYNZBRHE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ICLVVDHBRIKMEVUOJMTGWMYJBXOUWWMKQMEPEODWPTSXRYEHQZYMQSSTFGUJCTPEAKBEJAJPVANTPNVKPDGGRDWCOKXUBBPFIDNCRRXVGOFUZLZNSIAYHASQHVRXXFMDIAQTWWORYWMVBYFUNVPHFKOWNKOUIDCGJGIYCLGPAXASZSZCKESRDZJGB");
    tmp_tmp_msg_0_0.value.assign("FADUTGHBUVIUOHEXZGKZIMLWXBKIEJTEBQIKVOLGZVZXWLQFUAZVCVLVSCMDTOSRIMWAPACZLFEKYPMDWDPBPKSJJQCEDVTBUXVGHSMLOIACBLFRMBMGOSESHXNVAQLFTHJQDOANKYNUNYYP");
    tmp_tmp_msg_0_0.type = 55U;
    tmp_tmp_msg_0_0.access = 190U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JCQKDUHVQAILCMOFAWCTNYEMSJMCUJZEVRIQGDJISGZWNYIYNZQFDRTASCXUBKXMKTNSIODFYNOKRULNZQLWWLPPNXOKDMDZEEVTWRZKOA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("CAUPUHXKLMPLEKDBLZKFMLATSYQLDDHYNZHTUIZTHTIOSSKECQOXBYLIUMRGSJSJAEULEQVRQXORSHXYXAKZZGPZDWWIAIBQRDOMGENIVCPBHJ");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 31187U;
    tmp_tmp_tmp_msg_0_1_0.flags = 156U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.785987838659;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.341573524392;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.704371033621;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 177U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.480447828925;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 131U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.987706469631;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.326648845151;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 87U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WJPEEBCSGBVFDYQWULWEHXMKVHALFOZXIIVZLRMMFZFWAGVDQXNQJISAGATIBFJEEPVYCWBCMPUAQVMQGHFYHADBOMGIHDOUQOBNZPTWOSFCRNLKZLOSZJJLROSJRNUZVOTXRKPQBBSVJEPBUWMXXNUKTXYSCQIDSLNKOOEDNGHGNGYIKKATCRXFCRSMHFHKQKCJJDBNZYDCW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.source_man.assign("GSPFWYSLEAOQPNUJTTAHOYZDKLKBYOYTECLAYKJRTFDBNISAPNPMMDHJQVKXAMWJUYJWWEDHBTOHDLKXGIZBWLXZNZJNSDEVITTNIFDTWCFQMCMMXHJFGVQEFIXCCBOHGVUMPCPFVBPIBYGGLZNCBEQWNXOGAVYPUNWLOASRHBARRXRUZPDQXKMQSBSSRUVYQFKUJOODXZZHVEMIUXLOERYKCCGEIWIFR");
    tmp_tmp_tmp_msg_0_1_1.dest_man.assign("SPKYQZQUSGEGNJXVLWWZFDQVWUGJYPUPMVEOHPVTTXMPPJJXELGZVYWRNXQVLZJHHWRIRTPAGKLJADCXUENC");
    tmp_tmp_tmp_msg_0_1_1.conditions.assign("UFXMXQUTQLZKSBCKYZLWMZHEWVTKUQMZBUQPFBWEIDTQPQTPNYAVNOVRWOYVRKDRZTBIN");
    IMC::VehicleMedium tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.medium = 108U;
    tmp_tmp_tmp_msg_0_1_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ClockControl tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 229U;
    tmp_tmp_tmp_msg_0_1_2.clock = 0.318257093605;
    tmp_tmp_tmp_msg_0_1_2.tz = -81;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("LSBLDZKQFNMPXELJIMSJLJVRMUXLFNDOQPVHYJECZQVZ");
    tmp_tmp_msg_0_2.dest_man.assign("YWUIMSJXMEBONIDYCHJTJAPTVIOGFDBE");
    tmp_tmp_msg_0_2.conditions.assign("YGBWPMDOLFKAIBAZHTXRIZMRLIVMONUCNYKYXXBCGYESOZTPCWHMPRQRCVVQUQOXLNGKGJSSMSYWIPADOKKWBOBAHIDGQNYIYTHYLGRRWTQNRVSHUCXYXEASFPEJEITESHEUQLOTFZNKZUGKQBWCFDDKACQJKHHVNUGMIOW");
    IMC::Conductivity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.0709918932273;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::EntityState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 174U;
    tmp_tmp_msg_0_3.flags = 76U;
    tmp_tmp_msg_0_3.description.assign("LZXOBPZOZAUOHJSDJTWRGUULBBMOEFVGBMHDSIUFBIEGVBYTZFJZESJMPJFIYXDVRMMTJNNEUAGQVILXLWFFJOIYWTSHAARXAIKCCUXGNRUEBYOWCKHOHORELDYVCWIAXMZGJEQSQGDDWNXKTKTQIWWSQSS");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.867370934023);
    msg.setSource(28822U);
    msg.setSourceEntity(208U);
    msg.setDestination(7407U);
    msg.setDestinationEntity(203U);
    msg.command = 41U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SHHBVHZXGEUBETNYLIMROLFIUNSNGAPVYFOHSSRVYRENDQWFCMAJRTYSMFJOZCCFHPSTTXABFEEJIZRXMYDAZAGPKFCIMJGQRKPXOHDU");
    tmp_msg_0.description.assign("BKJZRETVQEMSLNDHNNDOHUFWLPVDKUUBKXRZZPOCHYLLAI");
    tmp_msg_0.vnamespace.assign("PFLQITWMIYRXSVHFZZNOAXBKQCJOXQKDZFNAHFNUFVWMEILMBVAMYUPSBTYYXPLSLUI");
    tmp_msg_0.start_man_id.assign("TCHFWRMWKHXCWBHATCDFYTZNYWOXIDZKXMVZCCYKHGVKGEUJEEHLHDSSDWXIEREQSMEDRYWFMDFPBRVBGQWZPCDPMFBDTVQJPCYKGPOJXAJTUBYSXXRPSUVNUULGJOTTERHLRMMCPUOKRBNIIMGTNOVIGIQGAYJUUZH");
    IMC::Conductivity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.685491156949;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.188132309798);
    msg.setSource(17855U);
    msg.setSourceEntity(168U);
    msg.setDestination(23949U);
    msg.setDestinationEntity(242U);
    msg.state = 9U;
    msg.plan_id.assign("AVYLCCWOJNEZXYFINHDDQFSXGTYNKQFOALKGJJRLYDRSHGLBKVYARCIMRQKUTTNUJTZKYSMHPBOVBOSHHNAMWXVUWVKHXOAAFZJNXJBOKZSPHTQCXBUNEITDRYALXZFFBBUXVHLHAXOQEIRLBSDUSPMQXIEUVGQYFZDJKWMKSEDPNOTGCWTMZMCAEWYSUDVIQIFYNIPBSRWGIWGQUQVJPFDCDZZGBPJJNLKVGCMEEPM");
    msg.comm_level = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.705838689338);
    msg.setSource(63923U);
    msg.setSourceEntity(120U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(7U);
    msg.state = 86U;
    msg.plan_id.assign("AWCTTNRNIOSRYXIZFKLDLAIQQCAMKFSYGBTJVSJLNJJMIFJZCOSAKXDPAPGWJLGVFFROQPPHOEQTFFBRBGNSMCENWNEIKRCVWZUVNXYRDHEDLOAWKQCKXHUHPYWDSYXAHHEUCNOTPZQKMU");
    msg.comm_level = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.758858721768);
    msg.setSource(60893U);
    msg.setSourceEntity(200U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(199U);
    msg.state = 60U;
    msg.plan_id.assign("OPDWFKCQXSFCBNJSQJVOPAIOLZJNJPTZWSTDEN");
    msg.comm_level = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.990958987155);
    msg.setSource(55805U);
    msg.setSourceEntity(248U);
    msg.setDestination(55545U);
    msg.setDestinationEntity(207U);
    msg.type = 245U;
    msg.op = 60U;
    msg.request_id = 19636U;
    msg.plan_id.assign("POOQGTJHMNNCNOZRMMJWDUFYYWXVVPWCAZTECXNRGF");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.588351432623;
    tmp_msg_0.lon = 0.244825866275;
    tmp_msg_0.z = 0.158436849456;
    tmp_msg_0.z_units = 141U;
    tmp_msg_0.radius = 0.391492250802;
    tmp_msg_0.duration = 3997U;
    tmp_msg_0.speed = 0.742472950834;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.custom.assign("PCDBVKZFUGFMBFYQAWEJTWSTXJILZHNSPIHYWRDUGEKPRFKMEIOKSSVNYAREDUZSJPRTXTMGKLCSRPABZFYUVLNHXHOOXBURETACAOITLDGOPEDHLAZGICGMQUHXLDSNBQBNUZQHXZKOJFDLJGRQCNXWYSVAMFOVQYUQZFGEFANGPTWWZNMIP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SPRZIMFINNFJPJZZUGREQTVEGVJFUBYJGYLCXVQMKNOJLMDBRXCMKQAVOUEDABABETSOFDSWSDMMLLDQTUZUWEXGMQKONTIZUHYZCSVXTEQPABIPEHMRSAKJYKVTNLCCGVDKQUFIAINHJBKTWHBWEXQRGIPRBYUODWTNOUHSSYEPILAOOPJEJRKOYWALXGRGSXFOBFAWRPKLDQLZXHCXYGHSNRJYXPUFGFANCCDMZKZQVLHDVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.544018641707);
    msg.setSource(19491U);
    msg.setSourceEntity(106U);
    msg.setDestination(2166U);
    msg.setDestinationEntity(131U);
    msg.type = 22U;
    msg.op = 98U;
    msg.request_id = 52219U;
    msg.plan_id.assign("GHVAFAIJXRTFSLGWWSOASGYWLPDIANHGFNUDZMKXRNDXJSKQAOXUDZYVXSXFZJZROCMWDFYEQIMHPFIDMVOWSQITBKIZUEFSCPFTAVLZARZLHMTMCBWPVUZJMPBKLDETPMTHJVQBKBTRJHELGZYTAGEBIFVDRUWKONVNCNHXNYBGPURLBHQIUEYOSBJVLPCQFLKKQ");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.op = 63U;
    tmp_msg_0.request_id = 39461U;
    tmp_msg_0.plan_id.assign("BDMTRSQPVHMRGCMJHLHOVCOSTEDQNNTRVUWXSKISMKCFKWQYACQGHJNWBZNZQ");
    tmp_msg_0.flags = 9764U;
    IMC::PlanDBInformation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("ZNBBGZSXGSRSYSPFDSUVKEHXRLKPZXUJGXAQXMIHUSEVJJPQUFCRCGCQJEEOMWZSTLFAFUWABZODDNOFQOJCAPKEVMJMKRJZPMHTUAFIVWOIVAMFGLXQLIHGGDOABLSYLWZJBTRUNWJNSOOYGKTKYDCHXAVTKTBQHQUREIHIPQDMARCRXWBLRZLBYFVPCNDOFEEDENPWWEOYACZPTCHYXGVYSWTNFLIKDJCHQBDTYVNMHUWGMYMBIVLQNNTXK");
    tmp_tmp_msg_0_0.plan_size = 3630U;
    tmp_tmp_msg_0_0.change_time = 0.123265359422;
    tmp_tmp_msg_0_0.change_sid = 56061U;
    tmp_tmp_msg_0_0.change_sname.assign("XKSHFZYPNEODCAMPGSIQXKYOGPRECZFLMJZIVGTWAVIQDATROPLZCEMHNUOJVCPBKAASBNRKWWMLHAWOVESZFPDTOSBIUNMBQWJJLSRDXOYKHTEBHQEFQYZXMUXTYVOIGGXPGLIHSEZNGWY");
    const char tmp_tmp_tmp_msg_0_0_0[] = {77, -48, 86, 34, -98, -120, -49, -86, 118, 39, -60, -43, 67, -53, 54, -90, 101, 116, -12, 47, -4, -49, -93, -90, 124, 83, 10, -32, 117, -25, -108, 0, 123, 3, -128, -44, 52, -54, 74, -28, -78, -101, -23, 28, 12, -71, -120, -88, -71, 74, 58, -42, -53, -28, 8, -3, -123, 87, 106, 125, -25, 69, -104, -80, -5, -49, 33, 22, -111, 59, -56, 55};
    tmp_tmp_msg_0_0.md5.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("VACRNOEHSWRQXQUJQXVXALKPJEJCAHSOBCAFEOCYMEVUGKKEFUWUTDYPSZBBHAOFRWIGPOZBYTFOVAIMSWIGPESUXTHTNNXXJAMVIHUYWDUCWGNPHDGLPXKCGWMBSVACQENRFDHWTYMTZJTPJBQIKIKISKGDLZKXVSZLXNQZLECTVFYUBWMMVJBJYJHSPGQZSYNCAQNRTLENDOFHGWQZM");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UERYLFXHCPTAOVZFWPDCZCAJIPQHQRIFLGYOBOYNJDFBYADTQLFTGBWXYMGKMKSKIVOPDWNCFWSNWBZFOCXMNBBCBXKQLHCYSABICQBQSPVMWTOZNGJELOLKNJAYXTMRTQRINPNUYWDRQCUERDCDLUFIVJVERDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.719646914265);
    msg.setSource(55209U);
    msg.setSourceEntity(110U);
    msg.setDestination(49769U);
    msg.setDestinationEntity(209U);
    msg.type = 250U;
    msg.op = 220U;
    msg.request_id = 46194U;
    msg.plan_id.assign("AUOHJGKHBKFQXVFSMBTJKVGPUO");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 21975U;
    tmp_msg_0.lat = 0.271611601017;
    tmp_msg_0.lon = 0.418761632695;
    tmp_msg_0.z = 0.706208171249;
    tmp_msg_0.z_units = 179U;
    tmp_msg_0.duration = 21561U;
    tmp_msg_0.speed = 0.980279166137;
    tmp_msg_0.speed_units = 230U;
    tmp_msg_0.type = 171U;
    tmp_msg_0.radius = 0.251944591924;
    tmp_msg_0.length = 0.22043677241;
    tmp_msg_0.bearing = 0.99038777572;
    tmp_msg_0.direction = 107U;
    tmp_msg_0.custom.assign("AZLTFBHVIFQKOEVPDWJGWFELNOMTTIGJDACULKTLBKCXXDXGDDERPJPVQFBHHOOZPUOZNLPMLKGSISEGTAWRKTIFQQWPCTCJZSUBRMEVBNNKEGAWYLXBXQRCMMK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LBQALKGVXEFUAJVEKGMUWSCQQXRZXQTFFKJWBSHZVFHCVTQUZCIEPPJMNWTDPIPYVZOKHXOKMGWDBJUDIVPSSINMIQBNLGADJANNHSDZXMGPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.0113174936644);
    msg.setSource(2573U);
    msg.setSourceEntity(178U);
    msg.setDestination(56306U);
    msg.setDestinationEntity(13U);
    msg.plan_count = 39471U;
    msg.plan_size = 2117784579U;
    msg.change_time = 0.480710703409;
    msg.change_sid = 11908U;
    msg.change_sname.assign("ILDEUHACIEGQVCUCCVOVFZRMDSXMHGAWBSNQYISLRFVJCZMKIPUTDKYMNBKXFRJOHNCOKLZZLDNIKXWOMSRPXYZALTNOAVVSTDPWJXVGMJDHAQXMWKEQMGYSUSNJPNLKOVVQRIFEEUPFBPRYHDERAJTXPFYJQGDHACURETNWUHKADWSAZBBIYYIJFZQVBZGJHPBMDAWZUFTELEJPLTIRLNKTQ");
    const char tmp_msg_0[] = {-103, -51, -43, -125, -50, -45, 60, -21, -38, 105, -8, 118, -64, -111, -26, -75, 71, -27, -120, 46, -91, -63, 110, -80, -39, 2, -40, 23, 111, 26, 47, -79, -123, 2, -89, 48, 123, -102, 56, -104, 1, -99, 111, 4, -48, -58, -56, 34, 88, 104, 38, 71, -77, 10, -19, 81, 4, 119, 105, 76, -1, -20, 37, -41, 76, -16, 63, -120, 71, 33, -66, 60, -8, -35, -128, 112, -107, -119, -31, 20, -71, -119, -22, -55, -29, 88, 19, -55, 63, 97, -19, -44, 126, -26, 79, 115, 53, -117, 24, -100, -41, -74, -106, 110, 38, 78, -96, -13, -113, 94, -63, -89, -61, -31, -54, -54, -55, -60, -46, 113, -77, 121, -14, -8, -19, 36, -66, 29, 35, 105, -1, -116, -80, 28, 57, 108, -47, 107, -40, -125, 70, 66, -120, -77, 102, -75, 17, -35, -33, -52, 123, -92, 92, -29, -103, -69, -26, 32, 8, -118, 81, -16, -115, 76, -8, 11, -45, 98, 43, -45, -77, -79, 35, 121, -20, -23, -42, 55, -70, -116, 39, 65};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.281714716957);
    msg.setSource(24969U);
    msg.setSourceEntity(37U);
    msg.setDestination(25128U);
    msg.setDestinationEntity(160U);
    msg.plan_count = 65449U;
    msg.plan_size = 3119415676U;
    msg.change_time = 0.0261723210873;
    msg.change_sid = 43145U;
    msg.change_sname.assign("GYALXUSIUIPDUOINIFWSGQBZVSCQWXHXQPDVBTNRSLIMQRZILMGGCLSYEWMKVFSFNTKZAPEHCTRZJTWNMMJNLBDOGLNCZYVXBQSVHIENFCRDCFJVFYMPDCXHEHRGRTAJUHBWOCTNAUVFLSZPRKFNJKBJUNLAQTXXUDGMPXHYPRJZEJOWQQQSW");
    const char tmp_msg_0[] = {-17, -101, 31, -60, -24, -5, -64, 54, 105, 84, -123, -22, -66, 68, -11, -125, -46, 19, 121, 88, 113, -111, -25, 18, -68, 85, 38, 91, -95, -110, -101, -128, 85};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.945432765681);
    msg.setSource(29580U);
    msg.setSourceEntity(57U);
    msg.setDestination(23288U);
    msg.setDestinationEntity(22U);
    msg.plan_count = 4596U;
    msg.plan_size = 3404952318U;
    msg.change_time = 0.151749710098;
    msg.change_sid = 54755U;
    msg.change_sname.assign("PBPBLYZAMKAODR");
    const char tmp_msg_0[] = {-114, 30, -100, -5, 55, -98, -31, -61, -105, -97, 23, 36, -54, 96, 63, 14, -18, 50, 111, -42, 68, 6, -55, -56, -47, 15, -84, 14, 124, -74, -106, 117, -86, -35, 60, 71, 87, -98, 95, 109, 13, 116, -121, 110, 126, -95, -85, -26, -70, 2, -18, 44, 96, -24, -112, 3, 77, 109, -2, 73, 54, -88, -11, -7, -41, -48, -90, -112, 91, -116, 58, -81, -100, 72, 60, 24, -1, -78, -39, -121, -16, -46, -39, -67, 94, 23, 18, 47, -18, 125, -5, 55, -49, -19, 110, 8, -95, 62, -16, -25, -60, -48, 16, -43, 115, -23, -117, -71, -78, 122, 90, 44, 85, -54, -47, 31, -85, 66, -1, 41, -112, -42, -90, -68, 73, 68, 20, 69, -3, -4, -107, -24, -119, -127, 83, 40, 124, 20, 0, 77, -116, 109, -74, 12, -50, 121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WMMXOASSRITFPNEVNCZNSRJOMEMCHLDCEUWYLDGKEKCRNBXDRLOXZATKQHMFPRYSWXINNBMGAOLZRQTKLBJPJLCDZUEGPTDYAKQLVDAZFHXFQLMDBINFPXGHIIYXIYUFWYULYDFGCAQEPBNEZRFHTDXSLASRZQIBTUYZVGUJOWMSFVVMUQUPKFYTXAHANOHOEDXBQVWPHZBBKYCVZIGSRGPSNHGWPTESIHCGWVOTCWBJWEARKCU");
    tmp_msg_1.plan_size = 40925U;
    tmp_msg_1.change_time = 0.54829480857;
    tmp_msg_1.change_sid = 37742U;
    tmp_msg_1.change_sname.assign("EEBRHMSXIUTAQEHAPWHSNXPSAOWLDYUWMNFTOZOVZNPNNWPMILWIVSHZZVESDXUELXMKKQMNKOGADHPDMCDROAUEVTXMIKSPYHGLKTIQGTCMHNFVJAKCZYLYBOURONPLBQDAYZSCDDNLXORFKWOJFRPZTABYESCBLFWBVLJVJEYDUYQWKZYYXBGIXRKBFCSGWHBPEGQMJVRGETJVNZPRCVKSQIJTJRHFFTURU");
    const char tmp_tmp_msg_1_0[] = {10, 18, 36, 12, 27, -106, -8, 20, -51, 23, 112, 123, -42, 18, -99, -117, -31, 60, 52, 93, 119, 35, -52, -96, 58, 20, -53, 21, 6, -52, 7, 101, -104, 27, 60, 27, 94, 73, -83, 80, -20, 53, 71, 27, -22, -11, 1, -21, 77, 8, 33, 11, 106, -97, 4, -31, 86, -109, 108, -123, 121, 53, -95, 64, -51, -113, 24, 50, 13, -11, 109, 89, 29, 18, 126, 60, 125, -4, 103, 5, 32, -11, 76, 94, 63, 96, 103, -66, 73, 43, 52, 74, -122, -107, 71, -106, -64, -104, 36, -21, -53, 24, -29, -118, -98, -52, 35, -90, 39, 33, 3, 49, -39, 94, 108, -93, 1, -125, 21, -115, 33, -71, 24, 122, -56, 81, -78, -27, -35, -65, -49, -68, -12, 17, -66, -68, 64, -5, 97, -119, -18, -44, 101, 104, -35, -12, 56, -101, 67, 109, 91, -53, 65, 122, -121, 68, 44, -42, 58, 73, -90, -12, -41, -75, -47, -86, -2, -79, 72, -60, 94, 86, -70, -117, 104, 77, -70, 123};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.605468964236);
    msg.setSource(53773U);
    msg.setSourceEntity(109U);
    msg.setDestination(57237U);
    msg.setDestinationEntity(203U);
    msg.plan_id.assign("PGBQEQLRCWFWVTPRWSYRSEMPKGNHOTDXWINAXNIHDDMOAOXZSQNBAGEYNYWMODBNIMTODWBXKDWVAHCHPUYRJXLQZQZFPUY");
    msg.plan_size = 19840U;
    msg.change_time = 0.0924386483311;
    msg.change_sid = 53959U;
    msg.change_sname.assign("IFVWGIJPBDEXUHYOIPWFBQIZLJMMVKHGCZFKXQHLQLFDNUBCAMENTFXWNXC");
    const char tmp_msg_0[] = {-109, 80, -76, 73, -57, -10, -85, 39, -60, -108, 37, -79, -93, -23, -126, 124, 88, 96, 20, 61, 70, 94, -98, -46, 111, 72, 44, -85, 40, 76, -49, 98, -18, -54, 27, -105, -124, 18, -43, 103, 78, 31, -125, -17, -35, 71, 19, -87, -55, -106, 72, -116, -37, -104, 61, 93, -71, 16, -114, -111, 60, 49, -65, -17, 29, -45, 12, -113, 54, 120, 123, 79, 100, -48, -1, -74, -108, 112, -53, 65, 29, 4, 12, -71, -73, 36, 57, -118, 99, -42, 109, 10, -96, -41, -24, 108, -41, 29, -120, -8, -110, 65, -84, -59, -68, 17, -107, 19, -59, -28, 122, 100, -74, -63, 69, 59, -81, 102, -42, 60, 17, 101, -58, -30, 10, -84, 77, -56, -72, -58, -25, -61, -113, -37, 72, 31, -122, 109, 119, 65, 15, 47, -96, 35, 29, -45, -105, -91, 65, 97, 3, 58, 103, 119, -76, -23, 76, 82, 31, 30, -13, 11, -120, 111, -38, 30, 112, 72, 112, -54, 71, -45, 87, 34, 24, 30, 22, 98, -107, 0, -115, -82, 74, -49, 104, 97, -100, -24, -114, -115};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.536518464951);
    msg.setSource(56009U);
    msg.setSourceEntity(124U);
    msg.setDestination(24843U);
    msg.setDestinationEntity(129U);
    msg.plan_id.assign("YCDADAOYVGKNUIQNHEQIFBFFODYBBAGVWUEHPPJYZSDBONVVICJRWIOLESFUDXSQKQAWBTPKPMWCSEFCLE");
    msg.plan_size = 56706U;
    msg.change_time = 0.67885805788;
    msg.change_sid = 5605U;
    msg.change_sname.assign("RQIOXAPKGWGNAUGIMHNQELRSYIAXABZHUHMPWSJXFLBVBFMSOFILZEBMFEYHCDAHYDSVZIXFKJOAINWMFVHVPCACVNMWWNNLRURMISLSEBZDLVOPIZRJQPKCOULBBRNTYULHQGQTURDTLJUOZTQFBMPBVYWYHDKPQHXWMTKHWUJCRXCUUDQNZDKBCKGJKZIXJFYSKFDEAOGYLVPGETOTFGNSGYKCDPQ");
    const char tmp_msg_0[] = {-57, -98, -84, 117, 88, 89, 107, -105, -11, 52, 120, -2, -127, 27, 99, 121, -52, 86, -80, -121, -122, 38, 64, -60, 72, -83, 96, -48, -24, -126, 88, -118, -39, -124, -89, -39, -60, 63, 113, -35, 16, -58, -80, -70, 30, -17, 54, 11, -120, 126, -72, -32, -72, 40, 14, 104, -53, -41, -5, 57, 88, 88, 3, -64, -87, -44, 47, 92, -111, 24, 72, -99, -28, 80, -119, -3, 13, -25, 81, -108, -102, -123, -102, 122, 18, -78, 64, 39, 64, 69, -71, -13, -64, -83, -31, -30, -60, 85, 34, -22, -57, -87, -21, -99, 9, 28, 91, 34, -59, -21, -104, 114, 0, 33, 63, 92, -58, 113, 117, 81, -1, 74, -89, -80, 86, 58, -43, 10, 61, -84, 10, 25, 47, 123, -117, 111, -16, 34, -62, 16, 45, -38, 103, -33, -117, -58, -98, 28, 10, -59, 17, -20, 41, -105, 33, 118, 122, -106, 126, 12, -45, -30, 42, 24, 42, -50, 0, -22, -127, 75, 3, 80, 113, -116, -110, 111, 97, 70, 124, -79, 94, -93, 76, 18, 68, -36, 69, 14, 88, 66, -2, -70, -75, 62};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.832622478883);
    msg.setSource(63003U);
    msg.setSourceEntity(38U);
    msg.setDestination(11110U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("PCVLKAOFIGARASKWGQAXHLUDZBANXIRGCVCJBITQJOXUKOKSECNYYPWQGHIPHFZOZZQNAMCXTEKXATQYULBGHTDPNVMCXRARETVSWEDNKZTMFHSBMICFNSASDNDEVLDTILXKKFIUZJCMQYBWSQVBHIXPZN");
    msg.plan_size = 51046U;
    msg.change_time = 0.216884311463;
    msg.change_sid = 35576U;
    msg.change_sname.assign("MUHCZRYOAOS");
    const char tmp_msg_0[] = {36, 13, -127, -46, 111, 84, -14, 88, 95, 52, 30, -115, 45, -39, 76, -54, 21, 125, -41, 93, 94, -84, 44, 16, -3, -80, 95, -98, -69, 47, 120, 86, 0, -61, -87, -96, 94, -82, 12, -104, 72, -69, -8, -127, 84, -35, -106, -84, 36, -85, 54, -109, -118, -97, -71, -73, 35, -45, 97, 83, -20, 16, 105, -94, -108, 121, -78, 66, 73, 30, 26, 56, 116, -46, -108, -65, 47, -1, 121, -22, -115, -37, -2, 95, 19, 86, 94, 110, 38, 38, -21, -20, -31, -14, 89, 41, -95, -86, -73, -112, -54, 98, -122, 110, -26, -67, -103, -105, 92, 62, 39, 105, 0, -100, 118, -71, 30, 109, -1, -93, 77, -6, 44, -45, -45, 16, 62, -108, -2, -8, 85, -50, -10, -107, -73, 109, 50, 97, -115, -49, 33, -66, -72, 123, -22, 55, -104, -111, -112, 119, -56, -15, -77, 42, 92, 54, -20, -66, 87, 8, 61, -117, 4, 89, 15, -122, -78, -50, -2, 16, 47, 20, 10, 109, 85, -10, -26, -21, -28, 89, -50, -100, -2, 62, -12, 126, 122, -84, -58, -1, -44, -44, -62, 32, 69, -54, 106, -52, -68, 86, -88, 1, 10, 69, 34, -91, -122, 108, -55, 71, -105, -7, 55, -34, 0, 70, 84, -35, -39, 104, -94, -21, 3, 40, 61, -128, -90, 55, 80, 5, -52, 94};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.946987990597);
    msg.setSource(29851U);
    msg.setSourceEntity(154U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(32U);
    msg.type = 232U;
    msg.op = 156U;
    msg.request_id = 31159U;
    msg.plan_id.assign("BGIRKMZQPFLPOIUEZCDXNYDWVYNTDKXZWXMJBEPPZXTHVFAVSGKTGDJGKJHCQVHRLIKYWUIQXBAXRLXSYFGFCOFBRKDOYCZHNMOKESDHUJNGVOOMZAZYCTTLXYZRKSNOWNACYLFSUAJEJIWBNSMBLGOQUBART");
    msg.flags = 25243U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 30792U;
    tmp_msg_0.control_ent = 82U;
    tmp_msg_0.timeout = 0.125897141612;
    tmp_msg_0.loiter_radius = 0.251138403107;
    tmp_msg_0.altitude_interval = 0.293596440663;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LPWFTGSVSRWJPBIORTQIUOOIBDUUQIHPWVTVHEALYCLQZFFXZSNXRSVVEKMROTTHJYPNGBIXRENJWURMOJWMYGXTHCPYXDACEEDHQXTUYDGEPKUEZBPGDQKAANRJLOVFDKGQWGVULRHUJHQKGKKBJZZASCUNWLNXTAMPDCICDOSLWHFMTPOTSSVQFMFYMGAZZNMQLXZHNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.110484486325);
    msg.setSource(31282U);
    msg.setSourceEntity(188U);
    msg.setDestination(60925U);
    msg.setDestinationEntity(21U);
    msg.type = 197U;
    msg.op = 80U;
    msg.request_id = 22117U;
    msg.plan_id.assign("OBLYKNCPGXSVFSQPTQZPZEGFMDOWJTPTGEOLCKSOZMBLZKHYFJJCGXPACUSNDIHRJMQLTAUBTAPNVZDCSLNUPAITLUDLPBQSRKBXNNIG");
    msg.flags = 38257U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.392951541451;
    tmp_msg_0.lon = 0.626197658827;
    tmp_msg_0.z = 0.700806371762;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.0705772379848;
    tmp_msg_0.speed_units = 122U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.84571302217;
    tmp_tmp_msg_0_0.y = 0.118613400092;
    tmp_tmp_msg_0_0.z = 0.81945649006;
    tmp_tmp_msg_0_0.t = 0.271237585092;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 45944U;
    tmp_tmp_msg_0_1.off_x = 0.439395773677;
    tmp_tmp_msg_0_1.off_y = 0.584121209663;
    tmp_tmp_msg_0_1.off_z = 0.607252762559;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.797871943585;
    tmp_msg_0.custom.assign("VCZQGEQWVUURKJVCVJMOWEJVXSWGPQSRYUFNDIKITYLYIBKKYGGIUZOEBEOSFTEHMRUYUSZBVTBKRXJHWHFHORMJASXCDPHZXPWDPLRSXBTTHZCVRJNSQGPZSCYMGIQKFMPFYCLJLTOLEQLLBVPCOXBIVPZNDDMEKATNMOLGXAWYAHYBFPQOZIDGOMRJKFVJPMNASACAN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YQVQHSOGTISSQNBLUNFMWWKYMVUYGOPKKOEEMFAZTVSURXXDCCRJWWIKULEGAJAMOGCBBMNBQLMFQVNWJPUUEKXGDSKCFRJQLIOFYVPRFXDIFGTZRHXCPSKCWHDWTUKATBXZALIGUIRYLCEZFGMTGHHYXZJPEWLBPOBQZCDTGJPIUZAENWEEMLXJZYTRDIDSFHHJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.356985478222);
    msg.setSource(15690U);
    msg.setSourceEntity(14U);
    msg.setDestination(25352U);
    msg.setDestinationEntity(176U);
    msg.type = 3U;
    msg.op = 197U;
    msg.request_id = 48315U;
    msg.plan_id.assign("QQLBMIMXSWMCLBHOOGASYKHURFZTTTGNLBWYCVADFLVTUCZEMICAFYJYSDUFJOXEDQERFZORNJPUNTEBLUIOHSCYQFHOSKKZQKDPPGMZWZUKFCJWJHICSWGWQUWDLJRUHASBCMRTJSYDARKVWPROTPVAAHIBEKMFIXEPBKOZXTGDDVXBADXRPNVZJ");
    msg.flags = 23181U;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 97U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("SMSNJHKMAAQJYVPUIKGNCWGUMOCKUWBBEQNWLYUORAKJGVVHSCSEKVGFRTHFY");
    tmp_tmp_msg_0_0.description.assign("XIXMVOXAQARBEKI");
    tmp_tmp_msg_0_0.vnamespace.assign("EAQRPAMZYHKZZFWIFKWC");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("PMVRBEHZAQHODHCCTPXFVFEWSXNLNRCSMILGEWHCZGIMHWBYMLJUBFCZQBJYJYEGKPKPEK");
    tmp_tmp_tmp_msg_0_0_0.value.assign("ZCFVGEJLNSADHQLZOYCMJGFOGYTDBHLANIOCZ");
    tmp_tmp_tmp_msg_0_0_0.type = 242U;
    tmp_tmp_tmp_msg_0_0_0.access = 54U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("PIKGQFVOHLJMHOHRSWVGIYCKJJABBRJLCWERFJVDPUVXRXGUZUEAZZDWWFFYWWJTQKFSIKECKLXERAKRQEWXUHOAMWKIUHZWIGMTOYKIBCSQEMJDTLPDTTAZMIQDNRSVYOCLMZXJRBPSMKGEUNXFPYLBYGTSBBGJUWFSSZPYLQOHLRAYPMVEVZITENCBRCAPKXTAAHZPQICXHGXDNZGNYXMIJODDVH");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("XJGMOCEKHCVOGPKPOIOZSPWNEUQKXDJXTAPDNMLUCOJBADXGKOQZTRWJJXFMKIPWVNEFQTMHHFMFTCEYKBLXRWWSFQLHSKWJDZRRZRDDCUJCVSSBPDYBXYFUMYVWZPXYV");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("ZBXSPOJYESVJNEKPGEAROQQLCFHQWKOYJTRVXOUUXYPOCRSMNKMARPKCHXIZBYJCCYFBNMBYZRLMIABAHJDKJDXDFRKHUZWSTNVPSDIGAUKJBKFDTBDLPDAILWFDGMVCQZVYVVQWNYHEUCHQFNEWOUMWNXIOHVGG");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("TVPMJWINWIFSDHEOMYGESX");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.308277762375;
    tmp_tmp_tmp_msg_0_0_2.z_units = 141U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OTDRCAWXLGXEESFYHCCUOKBDHXDBLGYGEDCWRKVZWWGWYIMYRLBNSURBXTEJKSMTCJZIIPZIXYQJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.0582817856858);
    msg.setSource(32736U);
    msg.setSourceEntity(129U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(51U);
    msg.state = 99U;
    msg.plan_id.assign("NGRNNPCBNDVOQPRJSQWBMETJEQALMZSVXLZWTVMPHVGCXONBYFHJHECPKDVPCVKCOSTJQZUOIYJIBFWFYGYMYVWKNQRDHOZDFLMBXZYAWCIAQPLYJLYBUAOXEQLSIWYDHESSZGHBSWDXBPRUWTYILUZJRMMRPXWGSGUBDVGARMNOGMETDZNIIWKTZJIRMDAAAXHTCQEJCFCHXTDESOTVFFLFKUKJUQZFCTHXKRXPHGNGIBFUKKNSEUAQ");
    msg.plan_eta = 687880914;
    msg.plan_progress = 0.37109298324;
    msg.man_id.assign("BRDYXKMNDOETZSOFFUQ");
    msg.man_type = 37682U;
    msg.man_eta = -1111746525;
    msg.last_outcome = 17U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.941868704812);
    msg.setSource(54844U);
    msg.setSourceEntity(26U);
    msg.setDestination(14256U);
    msg.setDestinationEntity(53U);
    msg.state = 141U;
    msg.plan_id.assign("UDMESGPHJMQQQECXVZCIEVMVJRWPTVBNIIKRATLKNNKWLSVKLXENDOGURJLCDGFRKXBAFEYXEANDWMEFLRBSTLDCHGDORUSEPJHLCOOUXHZBECUYJFXTYRWASFVMDZBQZXAJNNOEXBFSZKHLUNMTLIKRSCIKGYAVKSITOIYDPCCHJQGQUMVKSWGOWHZIJYQADBPNFPPXUPZCTFHOPWAVUAHOVWYFTDIAZYGJFBRMLRMPZB");
    msg.plan_eta = 1679179183;
    msg.plan_progress = 0.868927811436;
    msg.man_id.assign("QMJLRHPWZJJMWCODURSJVTTQMQBIXQZYOOAGPTLNHZKCYSOSEVHJGFJUWXHBIXXTXNGPHYMRINSFIYGARJEDBDIBYNQABGLVBCPTDYZKNVEXHSFWABPMLIKCIQGWJOCBPDMYNZASTHCPOBIRESMCPVWEASRHQXZ");
    msg.man_type = 24399U;
    msg.man_eta = 593199;
    msg.last_outcome = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.507467110301);
    msg.setSource(1815U);
    msg.setSourceEntity(93U);
    msg.setDestination(17329U);
    msg.setDestinationEntity(214U);
    msg.state = 105U;
    msg.plan_id.assign("WMYTLWWLCDFFAJROXZIXLEIWNOCQFBJEZXUCDJPWGXNOMGTVEQCEHVVYYFKLAEDAWXHVGAAANSMENZCHPLAKTHURIMSYZBVJVUNYRMIBYPZPDJUXGPYQQMRGUBKLDOXIJNFKLFOSRJTOZCLJSWRJAYRAZLUKESOKZJOQHLEXVDUUOWRVXIKTTHKQQWSIXFFBBHHEMMSPISGFSQKGYCPEHBNOTNGTHGDDMSPPIZTMNNBIRY");
    msg.plan_eta = 219927437;
    msg.plan_progress = 0.108471634363;
    msg.man_id.assign("UKYFVJNCEJELBQNDHSIZWFTHOKGOGUGZBESDVISZCCABXSOCRUHQISAAYTBQLVCNKYYTBWJXQWMGBKFABRTMRKMUPLSOWRLBMDBQHLMULWIDDEHRFYVKFWOHVNOMVPFRFXPZYDEHLLPATXHGTEZWMVHSQRQQEJFDTJYZGMXPXMMANXINEPXRAAENOZOBWZCOVDLIZDGZUGUDSP");
    msg.man_type = 42130U;
    msg.man_eta = -964703663;
    msg.last_outcome = 65U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.300674208693);
    msg.setSource(48818U);
    msg.setSourceEntity(85U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(25U);
    msg.name.assign("GOENGOIRZDHDNZUSMMDOIVWAFVFJOTGQLHQVOTXCNWVRAYDGFVQXOYQFXOHTULWMWEEPNTLAXFDRNCPCEGDZTJBRQKCAQGKLJBPSZSSLRXEBAQFFQWSPSDZUTYKKAXIIIMKHXOPEUUYGYJKJBHBEXBYDNSRGJOITLBLSVOYQECNYRBKWUTMAHKJRKRKVGIDITNMJLYMUSUCAYPXJPVLFQPWJHMWCSTZICENGFVWZMNUAPA");
    msg.value.assign("SLPBCDLSCZCHQMLVKDMGXLIVGJVEWCW");
    msg.type = 153U;
    msg.access = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.31679873626);
    msg.setSource(51675U);
    msg.setSourceEntity(42U);
    msg.setDestination(59989U);
    msg.setDestinationEntity(131U);
    msg.name.assign("SDMYNOBUUPKSWXQIBCXHIEIMLUCAKPLTRYVQKXPDNSHLNQVJUILKYYAHPFZDRDUAJSOEMJIZHWLJJFUYCNTXGIEDWKGWOCRFCVPUXMK");
    msg.value.assign("TJIQTGWXXGKRUHGGVHZIZUXLWWKUQXCCDSIRKMIVRMUBNKMOQNJTQACPPJOLSDKDFNAZWVDZPCSEHCPVRIVAYEJ");
    msg.type = 31U;
    msg.access = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.436864697967);
    msg.setSource(24989U);
    msg.setSourceEntity(228U);
    msg.setDestination(29056U);
    msg.setDestinationEntity(136U);
    msg.name.assign("JYXKBMKLPVRUJKADQQFIHYGPCLWLUCBIMMOGRACWVKEZFEPTXUTQJIVSPWNEOQPZOCVCVTZKWFDQHDFIBQVJNTOKEFOZIHBXAMAETCYMNYWFWHGIMGYBADZELNOOZARKDJCUWPJVOQDIUWBUGRICYTTWOXVRZKSJWLBPTEYLNBNYBFSJLVQM");
    msg.value.assign("GNLEHFKGVTASOZENHTQRSDEDIGAIGDWEHSNLZNZZOXDHOHQGTBIAAWFQQUUQKBTQJDXHTMYJPMNCF");
    msg.type = 105U;
    msg.access = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.602664470247);
    msg.setSource(46953U);
    msg.setSourceEntity(136U);
    msg.setDestination(26644U);
    msg.setDestinationEntity(146U);
    msg.cmd = 79U;
    msg.op = 237U;
    msg.plan_id.assign("MFFUJHRIPBOEHLHERPXFSXDWMINCAZOGLLMIHKFWTKFWDRPKALAEFCVDGCPYNRTKQFLAGCYPSJZEKXXQMLVEOWQRKWIICXJSWUASAOQCDYEUCJUOQOBORQTBHPYHDBBOPYGUTAKGJBOIINTZVGBQVPYQUZFZBFNOSRAXFKJHZBHJZXNSCGGYDTZSGLLLTUIEKESCVWDWRCSNRAYXMKVJSYQNMIDMIJJPQENTUAN");
    msg.params.assign("XGLIMCFFZIMMUQKZICXSBCYOQSVYZDHBKZAUOUIAYRLXBOWUZNGIFSVHPWVCEGOKTHZMMFCPCFJMLNMDGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.226184478981);
    msg.setSource(39582U);
    msg.setSourceEntity(33U);
    msg.setDestination(13785U);
    msg.setDestinationEntity(59U);
    msg.cmd = 228U;
    msg.op = 52U;
    msg.plan_id.assign("VVHFIGLTJPNWYXEAFMKUCQKGZXSSRBWFLNDMRZREXGUYFUAVBAZSRSFBPTHMJYNEYHEIBNFGWOGKLHWUWN");
    msg.params.assign("OTUBJYUDEHKXSPRWITFBPKKESLZIZJTBQNDKDMQHNBPVPZZNUKGCDLMNOJNFCAJBNVDGXWLIUMYWNBHTPGFSRTGQOXWJSRAFCKOYYLMEOYGCJQCNHLTRYHEMILSVMYVHVCYRUAIAOHGRQPWSJXUIBCRYZZHBTQWVXSRDEMKDIQBWFCAOEFFDTOVOGGXQZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.601735505936);
    msg.setSource(36132U);
    msg.setSourceEntity(11U);
    msg.setDestination(59596U);
    msg.setDestinationEntity(45U);
    msg.cmd = 243U;
    msg.op = 57U;
    msg.plan_id.assign("VGXSSMOOODHHSWNNLUSNPIZOGQFKDVLVJGLDYOIONPFQRPPJMCTYDHJWGMJBUYYTEMYCRGXLWTLTEJVMYWPTAQHOBCGBHVUBAHNIOAAOCCIWIWSXRCUCJKQEMKZNREMALJZQYKECZEUSVZFKZIQTLHWFXJ");
    msg.params.assign("TOWRVHLGRVRMXBOLVQKNFXIXYHFHLZADLENUKOOSIMTNIQIFXEDYGPVGDJWEBIUAOQHYFSRNTNEPDSDUKVFNFDAKRNLFGQZMQVKWZEVOMQYDHWTWRUEGAJKLPZAHSBFWOETITYIBXKUUFPBGDCWKCSOZZWINISCTCTRCQFMUGEQJABJNKSEDTMAWPJOZURZCOJZSKMJGSGIAQHJPDPJVYQEPLHYVBGLTCYXLBBMHRXYMJULBYXCCRPXAXMHVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.553154187081);
    msg.setSource(37037U);
    msg.setSourceEntity(79U);
    msg.setDestination(42099U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("JHSQXQATBNDPATLFNUGQPZVBECUEUNKBOIMTSKREPYTYCHNOVUJVGJOQMLWMHNDAMTMILMZEHMPLSUGVOZWBJVUCYKCDHBJWCXRCXBLKFHKDTZMWAVZGFOSDHOCOYSHQYUBIAXUBDIGTRYANCSPDWTQTFHJJPIIXMAAEGNPNEGWHVWBFRBSOVVXSIEZURLYUXLDPZEKOKYT");
    msg.op = 124U;
    msg.lat = 0.701897866475;
    msg.lon = 0.0508870498894;
    msg.height = 0.779963722522;
    msg.x = 0.948675227696;
    msg.y = 0.857539904216;
    msg.z = 0.846208179622;
    msg.phi = 0.215051529803;
    msg.theta = 0.986053129407;
    msg.psi = 0.624955146531;
    msg.vx = 0.659307399441;
    msg.vy = 0.880379965264;
    msg.vz = 0.644408899374;
    msg.p = 0.437003439842;
    msg.q = 0.777645150779;
    msg.r = 0.514604519021;
    msg.svx = 0.188387453265;
    msg.svy = 0.530077324337;
    msg.svz = 0.280808359165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.501181173278);
    msg.setSource(49584U);
    msg.setSourceEntity(43U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(249U);
    msg.group_name.assign("PIUEKVYGJQEVGXPQRAOWOZEGPUXMQCZNUDFWBYMRCXFKGIJTYZFVUCADGBGYLTXLLSDNRONOIZKTXXQGBSOBWFZQAJQHXXCAADPBJWTQHCAYRJEKHYUNBSYDMNSFFZRULNCKFWTUDMTLVFWKBOZIVQQEGTUCPCVDAYXEWRNOKSJNGHZSSWHTXT");
    msg.op = 60U;
    msg.lat = 0.448095258144;
    msg.lon = 0.704216615343;
    msg.height = 0.501665338592;
    msg.x = 0.763341455512;
    msg.y = 0.876913538121;
    msg.z = 0.00162652989371;
    msg.phi = 0.475571416534;
    msg.theta = 0.492119193262;
    msg.psi = 0.440503785941;
    msg.vx = 0.546508189927;
    msg.vy = 0.353091906726;
    msg.vz = 0.485368772262;
    msg.p = 0.792070768505;
    msg.q = 0.118872355703;
    msg.r = 0.0686713394907;
    msg.svx = 0.962495999736;
    msg.svy = 0.274079979772;
    msg.svz = 0.173501102276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.261334430038);
    msg.setSource(28064U);
    msg.setSourceEntity(249U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("LZYXDNLLSOJIFHMQTFXSJMRONAJRPXLHNDETWWWPQUWCCPCTVFWEHEVEYZVZIWFJGXHYRGJUXOQBAPPUSOKFMHBYBSWZDAJVSKVSOQKBNDOOADRYITTUEVQBTFDOGXJBTCZRLQCNFNSFDVBAGIQXXCPSAYOIRNXKFR");
    msg.op = 91U;
    msg.lat = 0.54382407681;
    msg.lon = 0.183605188755;
    msg.height = 0.758440882155;
    msg.x = 0.273247853787;
    msg.y = 0.941253821961;
    msg.z = 0.878053303399;
    msg.phi = 0.638768543906;
    msg.theta = 0.00133097382557;
    msg.psi = 0.0784267283763;
    msg.vx = 0.843412616626;
    msg.vy = 0.510774063571;
    msg.vz = 0.556070754821;
    msg.p = 0.983370331285;
    msg.q = 0.282582214504;
    msg.r = 0.787654080594;
    msg.svx = 0.48005045723;
    msg.svy = 0.441085547287;
    msg.svz = 0.749535027386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.263942665642);
    msg.setSource(199U);
    msg.setSourceEntity(218U);
    msg.setDestination(1427U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.435315905379;
    msg.lon = 0.195145305867;
    msg.depth = 0.092811375477;
    msg.roll = 0.908055079717;
    msg.pitch = 0.868805990426;
    msg.yaw = 0.0618408148187;
    msg.rcp_time = 0.311287676225;
    msg.sid.assign("UQAEOOPWMKQDAARQFIBVWMGZAUAGSOWXIZXMYHMGWGLIJNNJDHBQCOGMZTGKQPEBHATSNBZKIVEIEDETYBFJRVONKBQXFXUYTECULFRHZSVILCCNVCEYHTZDXLTOJDPPJWNBSTRKLQKOJXX");
    msg.s_type = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.505252257341);
    msg.setSource(15935U);
    msg.setSourceEntity(239U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.403491316431;
    msg.lon = 0.832774762116;
    msg.depth = 0.718738686786;
    msg.roll = 0.422978518886;
    msg.pitch = 0.450946030896;
    msg.yaw = 0.96469129768;
    msg.rcp_time = 0.142427010209;
    msg.sid.assign("SGZBMWKQZGQJJEYPLLXBYYLPLPGUMITTGKKXHBSOEKUEDZVRMWNULCJCVUBUZQVGWHHKERALJBTFAFORGABIQARYVJWYJVWEVRCDLRNPDOKFNSPJMIDCVNTKPBAWDZZNLSBEUINMCDIXTZWYFHEAMQKTAEDDHXIZPUTGGJAXKYBIOFLRSRSFIDNQUSZOWXNCDMQJCQCFEBOXMWHPRSOIRXAPVTQYFQNUVFHTYEOMLAXONWJCGYZOMCF");
    msg.s_type = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.889288591212);
    msg.setSource(14847U);
    msg.setSourceEntity(226U);
    msg.setDestination(8679U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.0872705454333;
    msg.lon = 0.99312018261;
    msg.depth = 0.0643596935068;
    msg.roll = 0.741057856119;
    msg.pitch = 0.280394200208;
    msg.yaw = 0.521281436402;
    msg.rcp_time = 0.0587175586414;
    msg.sid.assign("KSTKADRMZMYUTTLOILCBJNFIGBAAODUZSZJHBTLHCVIBOMYAJTSOKSIPLYSPPCCZGQEJLETJPRWGBCSTDRLNWKEBJRDGFYAJPDMRAPZXIXZNHKNKFUWGFOQKDBCKPLSAKQOXF");
    msg.s_type = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.577679145038);
    msg.setSource(64910U);
    msg.setSourceEntity(143U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(157U);
    msg.id.assign("OGVSREVLKZSFJFFLOBCINIGDHUDMRSFYQLKBDQFTYLWMZKEQEOMZIYJUKAOPMMVYMRBYQTTGZGWPIUSMUXOSTBBQXANAPFDJAUJAAUYXVXHGB");
    msg.sensor_class.assign("WGTPBXLQPTTXOMBSLEKJKVZVXOCVOVHOFQPZKSABSIYYPYFPCQPYMSNICFASRUQURZHSHREDIDQBEIEUMYGAZFAFLPENZJRHRWJHWSNBLQRGNMLYWTKRNGGIZWGIATCVVWNJEUIBTLTJUAQYRNSCLFCMLXDNJSKCRPWOKEFAWEQWFVUJDIVDBOHDZBDMMVUHKJTXKRXZQLLNDJMYFOXAGMGKQ");
    msg.lat = 0.190300944171;
    msg.lon = 0.255466310945;
    msg.alt = 0.130289809634;
    msg.heading = 0.246421543612;
    msg.data.assign("YIQNFQJWQSAYCCBCBTHNXEZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0270678892775);
    msg.setSource(44996U);
    msg.setSourceEntity(102U);
    msg.setDestination(60542U);
    msg.setDestinationEntity(103U);
    msg.id.assign("NCKDCQKTGOOKSJODFLXGMPHQUHYVQLUNOUXHBIVOBKWYGVTUGIQBBWKXLBRRTSDSQXZPMLQYQJWAJNBCAZYERNRY");
    msg.sensor_class.assign("QTENGXBSURKSSKYZCLPSIJKCTJPXWKXLXUJWWBFSRMXYIJVMTNLQSZGJFPCDFQNOZJGHXTYRNOJVDAZHPEEMIGYBNIIQRKWOUAQKWCNYFBRBRMVLZQURUAYGCHWIDFVRHQUJZHDMFYFLOSNEYZCMSDLZMFEEBQEALREAHNGCTXUWZDGCTZLGPUKJTABSWQSWOTIIOGIPMDLNALHPFYVEPKIPXAVXGCATBVQHPDDYNEAJVOTOOOUCKUDHVMB");
    msg.lat = 0.626995022276;
    msg.lon = 0.11193141515;
    msg.alt = 0.0543322577916;
    msg.heading = 0.80234218584;
    msg.data.assign("MOXRDTDRGEOXANYOABBEPAGHIWDCXEFJRPMLKZZWJJSNYDWZHKJLVMOGERCKWUUEYBTMGHBYCENRGCMACHNODVCLJRXHJVDOXBFQIXYWAESXLFIQFVZCLDSVDOANZSTSVFIRZOUUSIKTUYXHWJSNRIVFQPNXMJRFZNWGAQWSFPZCGTSUQLUGYIKWSHHCOHAUBVTTVLAPEFBPKQRMQTCPLMTEJDBDUYGWJKLOPPAQIGMEVXBH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.147391406587);
    msg.setSource(39943U);
    msg.setSourceEntity(86U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(64U);
    msg.id.assign("LHLJIDKCSOKOMBPPYMGZQDMLIBXARDDHVIRNIMWAEWIEHBYOT");
    msg.sensor_class.assign("VVQITWZAGZZIMKYPYLXKALWPQZWGXCQZTESXKHRKXAPEAARKIWWPDBMYSLEUSDLBOQHDKZRMYJOBLBRIVGFJZBBQKBDHQEKEGSONVUNCHTIUQTLAHTGWHDFUJUDCXIDXMUBIYFYDEFGFSTDEEOQYNOMRCZNBNJIXHZCT");
    msg.lat = 0.431928636168;
    msg.lon = 0.969468228557;
    msg.alt = 0.535385731605;
    msg.heading = 0.374956319719;
    msg.data.assign("VNFLMPCUNQZAMDPHOSUBJZJKZRMZAUZKFFKNHJVIXLCGFIYRRGFFTGECSQKIITDXOLXOTDDUNSGZIIHVQREILHWNJILRPGTASADBWKEDBETBFSVQMLVA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.572986530962);
    msg.setSource(34179U);
    msg.setSourceEntity(109U);
    msg.setDestination(7767U);
    msg.setDestinationEntity(138U);
    msg.id.assign("RUSWDFUJUPZNHDOORNITBYXOVOUXZELNIOQZGCGVSBTNWKFBADTZSGYCBNXMRHDMFDIILRQQMBYBKESABHSYXTMHENMDIESUYSCIUXEWSWVQYPHEXEVVFHXGSQWQD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CVMUYRKIKVQUUBORAQJKVEYHTNWJQIIZFMLSARTTCBWJZSAXKPNUOTZZPPOWIQCPKKZDXFKLKSYNIPEPJBYJXTVRJAUZSWWYAHBNFSQVKDSUDNLAVRLSAHCUZMXJUOHFYTSBJLWXVPDXNOEPYWGFUOCRQIEGLIXMNWCDPFNZHQTGEIGLBLQHMMFKYZIBMWHCHGDWPXGRNMCIFOSGYLHVFODJTACEBREGTAMEXGV");
    tmp_msg_0.feature_type = 242U;
    tmp_msg_0.rgb_red = 7U;
    tmp_msg_0.rgb_green = 241U;
    tmp_msg_0.rgb_blue = 204U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.425758755669;
    tmp_tmp_msg_0_0.lon = 0.981251006864;
    tmp_tmp_msg_0_0.alt = 0.686162919536;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.180853249456);
    msg.setSource(34521U);
    msg.setSourceEntity(86U);
    msg.setDestination(26419U);
    msg.setDestinationEntity(143U);
    msg.id.assign("QKFLFOOZHTASVMOPVFVKPUZURKMEDGGDUJUKEEOCUGBEZLEZMVSKWYRHGDBEEQDXO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("AAPBWUPCAFMMEBXDCLFKVEMBWPTZLEHCPQDUQGCSJLRPSCMWJTHQMYVNQGHAHYWTKQJVBELTIIZGVPRVRZGGFYEKKRVQCQRHMEDZBSASUIVSONDBTDONOWIXGSIZTQUBCGZYYDSDXJYPUTSRXFBAWDSZBWFONNZAUQHLCOAMJKCGGYBYWONKJVAPJFHUYUXXWHFUEKOMLXVQMIRFM");
    tmp_msg_0.feature_type = 13U;
    tmp_msg_0.rgb_red = 106U;
    tmp_msg_0.rgb_green = 39U;
    tmp_msg_0.rgb_blue = 133U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.246737695819;
    tmp_tmp_msg_0_0.lon = 0.0991505517619;
    tmp_tmp_msg_0_0.alt = 0.316368085241;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.140178044244);
    msg.setSource(65288U);
    msg.setSourceEntity(55U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(106U);
    msg.id.assign("VBVZOJBGPSSHKTHWRARWXJCYSPKBYGMFPBDETEYLWWJLOJXZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BWQLLIDGQDHXRSDSCUSFBPJVNTDPETLFGHHENKQQQHIELNGOTJKMAASRWCPMRFZRXPIKCLRNIPXNGEGMIEZKYJTSDJXSB");
    tmp_msg_0.feature_type = 131U;
    tmp_msg_0.rgb_red = 94U;
    tmp_msg_0.rgb_green = 147U;
    tmp_msg_0.rgb_blue = 104U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.560019346846);
    msg.setSource(26390U);
    msg.setSourceEntity(205U);
    msg.setDestination(39844U);
    msg.setDestinationEntity(31U);
    msg.id.assign("RUMMZBTIWIXSPZNRQVRGZVYHKOMXEVFPUSBKBH");
    msg.feature_type = 57U;
    msg.rgb_red = 236U;
    msg.rgb_green = 51U;
    msg.rgb_blue = 85U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.239324780783;
    tmp_msg_0.lon = 0.611522893862;
    tmp_msg_0.alt = 0.804403196828;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.16138616087);
    msg.setSource(26095U);
    msg.setSourceEntity(47U);
    msg.setDestination(12848U);
    msg.setDestinationEntity(185U);
    msg.id.assign("GKSHBTVJFCLKACGMVNBOIKOCDHGUGJVZIEQHXYHLNKAPFLQBFUQZEZQYUPJJHPZQIOGKRJDBEEILPXYSDYMSOVIGMKXWDMNSPVFUUROQBVJYVQNAUNQINUERECSBZBVZCWFDIKOUTAMVWH");
    msg.feature_type = 70U;
    msg.rgb_red = 84U;
    msg.rgb_green = 39U;
    msg.rgb_blue = 221U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.366668572172;
    tmp_msg_0.lon = 0.626301318011;
    tmp_msg_0.alt = 0.704669745318;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.187445610026);
    msg.setSource(7910U);
    msg.setSourceEntity(16U);
    msg.setDestination(22119U);
    msg.setDestinationEntity(8U);
    msg.id.assign("NRHCDIYVZTOYMLRHSESSJTMNWLKOWZYGUMAQOVKOEDZUROBBOPGGGSYXPMDZDJRCPULWBHYSGNHYVXPNPBDAEEEKEHRJQLEVKCTLRBXMPGMHAPQJKDYIUQFPIWJZEBARCLVGOGHCNTQZEBKTLYBJNXXD");
    msg.feature_type = 109U;
    msg.rgb_red = 49U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.190573171262);
    msg.setSource(58520U);
    msg.setSourceEntity(86U);
    msg.setDestination(24262U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.113764273581;
    msg.lon = 0.428604852058;
    msg.alt = 0.00449171610234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.172474929915);
    msg.setSource(6304U);
    msg.setSourceEntity(164U);
    msg.setDestination(54962U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.548079841484;
    msg.lon = 0.803572086774;
    msg.alt = 0.428518356167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.031498356059);
    msg.setSource(47682U);
    msg.setSourceEntity(125U);
    msg.setDestination(59888U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.503854311337;
    msg.lon = 0.231254850578;
    msg.alt = 0.00324141631707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.445748453578);
    msg.setSource(37801U);
    msg.setSourceEntity(178U);
    msg.setDestination(17761U);
    msg.setDestinationEntity(14U);
    msg.type = 51U;
    msg.id.assign("JWTXDFAILDKPVNIBGOHYTBCKFJQAXBLPSUOIMWBUUEZVBYJIAICVDZQARLLQHUTXDHVOKCFNMBUMKCVNGHOGSKXEJPIKFRMMLAZXOPSCPVWJLEJPFOANRZVMMGSOOJGNBPHHALWONURVGGRUDSPNBPDGHYFXTBUTBTXWLAEQGCTASJ");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.310654138049;
    tmp_msg_0.bias_r = 0.793948661648;
    tmp_msg_0.cog = 0.617089894423;
    tmp_msg_0.cyaw = 0.543362712762;
    tmp_msg_0.lbl_rej_level = 0.545983465399;
    tmp_msg_0.gps_rej_level = 0.806066454266;
    tmp_msg_0.custom_x = 0.231333479882;
    tmp_msg_0.custom_y = 0.632266185119;
    tmp_msg_0.custom_z = 0.333821293493;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.994372829387);
    msg.setSource(9033U);
    msg.setSourceEntity(0U);
    msg.setDestination(12185U);
    msg.setDestinationEntity(36U);
    msg.type = 103U;
    msg.id.assign("XEFTHQNFXMOYHVULXDEMJGDLZGESQXCTHTDRGJNZLNPZBVRSCSMNPECRREKBKXIYCZCZYDRUWAACCWBTAJPHXQYVJKVOCKALXPQHXYDOIONXYAHAVNFDJDVPDLLFBGNRGMPLUMIRGIHCBYU");
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("AFOCIBDXCFSOFRQZGXZENSXJZOHMSJJYIIEBNGIRTRPELOZJCLTMGWQGWHHUNJTRCHKPNIQVDUFSNKDSAPXYUSPBQKEGGKSXTTGADNEQSQQGIQNRDDJYPLHFGERXVPPVUYTLYMVQWOYCBWOKVKNFVVUYJJDLCXUVZDNMILUWMTREWGBBVEQMZCKAZTABORAUWFMCJKZBAUXOALEAOBXSFCLB");
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.305693125686);
    msg.setSource(49029U);
    msg.setSourceEntity(238U);
    msg.setDestination(16914U);
    msg.setDestinationEntity(30U);
    msg.type = 176U;
    msg.id.assign("CFHIPCJFLQPWDRVBECZVIGWQDPPYWTXMUWJKEPOTNSSVWBZATANEMQMRXAIDPMGMRQIZVEBMFZLNMSTGUXSZUAZTFZIBNXKOOQTDWUEKSCGBRDDRFLDHBLWOQSNKGVYHAGE");
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 132U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.780157438487);
    msg.setSource(44291U);
    msg.setSourceEntity(191U);
    msg.setDestination(5331U);
    msg.setDestinationEntity(63U);
    msg.localname.assign("USWTOWLFVJOMWONDJXDEVGYXJGMWBWGDZRIRERQVQMXLQCJTSUVPXLTDYKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.774435308341);
    msg.setSource(58351U);
    msg.setSourceEntity(140U);
    msg.setDestination(719U);
    msg.setDestinationEntity(7U);
    msg.localname.assign("GUTKEPEOHGJIOVFHJZLCVTWNBXADLDPVAPHVLSZDQMGLBRNVPEJFPIOGQZAAIOXUMJIFKDTAWYDUCWWIHRSSMVAZUEN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("SCJPQDSNHTLEQMALOBWZVJVFCAZEVRGUITRRHXIAWWQMOKGKSNKXMFQNDLAEWEJEF");
    tmp_msg_0.sys_type = 34U;
    tmp_msg_0.owner = 22814U;
    tmp_msg_0.lat = 0.960911918166;
    tmp_msg_0.lon = 0.0422394799306;
    tmp_msg_0.height = 0.770244112252;
    tmp_msg_0.services.assign("FYHLGNMMLYXYDEULSOQIXTBKGTSAIMKSVPAVHVQJNNMACWQUMZROWDLDJARRWNGTBPITFGDGFRDERFQOQCCKRKUPUCYSCCPVSIHFWEJAOLSSYMTKPJGPJVOZEHFZXENZENLBOQMQIXPJCHBDYOXBSQFTBTNLYIFTAHUGZFAVBYHEXLAVKCKMOIVCSMDAREYTGJHZPBRNAXDWFYCUJNDOZKWORVVWZXMLWGKUPBIEUIB");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.661074272436);
    msg.setSource(33509U);
    msg.setSourceEntity(84U);
    msg.setDestination(46576U);
    msg.setDestinationEntity(132U);
    msg.localname.assign("JMDVSXWUHIWC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XEAMNSQBSODZMKKUAWRAFRQEECLFJRUQGWVLZRPFMYOHPYXBGMUPTEJANADCDJSCGUVRUUOSWOQDTLIYHXKFBU");
    tmp_msg_0.sys_type = 193U;
    tmp_msg_0.owner = 3205U;
    tmp_msg_0.lat = 0.913727202656;
    tmp_msg_0.lon = 0.483953062486;
    tmp_msg_0.height = 0.511918286606;
    tmp_msg_0.services.assign("BLHFEXKNSFAZJXGBFFZFSOQVMMKIMHUQEEGQYVHYZWBSKZOWWWRADROKJTQYETCAGEJRMPOGTMJOHZTBHULXVRPANLXTPYYXEBECQKENISRIAQERBGBPYUJGRCMNIJVDCNCKCUTURPALOVBG");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.985449073906);
    msg.setSource(10633U);
    msg.setSourceEntity(145U);
    msg.setDestination(16498U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("GVXAZBZLUNNXGYONPUIIRXBFXIUGPERPLHEHDJRJSTPHAXEODDWTSWKYFPRBFGYFVCWJAMYLJZBETZOZTWWSAORAQNTBUHKLAYMVTJUVBCCLFISGFFIUQNKALTLRLBAHPUVMNOCDMBKHPNVIIZSCQLGSMEKXXMDXEGOSQCJBVCDMYQGWEDZERQDQBRJUEZEDLOWPTACYWQJVVFSRPZM");
    msg.predicate.assign("BPPUJYUSJJEQAVLCXQSWMNDZYTAECAUIXIZNRBSPSACFRWEVBLDDHRRTCYBCHJUGJRCHZKBXGKMNAIHTOXEYNKTPTWKRUQEDLZKEMFLYGFRILGINMANTLZMOONVJOBVVVLIZSLGAPHWWILZKFXHSAYDOSQFAWEJOFRIQDXXFOQOCUIQGPQHUFBJWVPKRHMSTOGYJYLVOZIRBXJDEQUEYXSECTHUQPXBDNPZDTKWMYZSKGCMFDNC");
    msg.attributes.assign("APEXITORBCTLHNCWXIERWUHFHJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.441298150766);
    msg.setSource(63438U);
    msg.setSourceEntity(9U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("BLPOUTHBEYRLKPDUYWMAINFMCAWTUYDKJPHVJPTYGIONGFSHMAUDSUBLXG");
    msg.predicate.assign("PYKQGVGVHRKBORYJOZKFBXHFDNETPPJNIHSQTFFINWVHENZWXASIYJBVIFIQMXSPRKPVKPELUUXAFKEIKGOMHDCMXZQHMKCTQDZTTJRGGZSUNKAZCRJGRXVSCAQRPMYBCUQNTNMOQYHWULZNDWDOWLBDESXHVUTLFLEXLAJHCLDETYOWYTF");
    msg.attributes.assign("PQTLWMXYCFMFUYEJKNYHBVRCFJTFTORCWTRYCYRKCYTRNXLPGUFVPWQOUICZAHMHFQOTMYXMGVAHSCZNKZNVLMECIFYQUDBOVXXDQUIPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.615559168926);
    msg.setSource(37184U);
    msg.setSourceEntity(221U);
    msg.setDestination(9687U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("UUJXNKHRWFWTASANIPDMIWPVFYMTNWXLFTJCFTGAMYIVPXIUTIBNKNQDWLRKVAYJDCVSBGRXSUVZCDGJZQUHXPNUPGKFRDIKLRHJTUGCKRKHQORDMOZKFDXQTEMLQSVQDEMTTESHSHYWOBEZRBCXJHGYEEBMEFM");
    msg.predicate.assign("TMUSZYJQCHHHGLLOBAONAMTHVZPVTVH");
    msg.attributes.assign("ESKKBTYGYOWRPAOQHNRZMPNPOHJZMYONONXXSILLBITUVQSDDPIVACVAEJJZJHMDVFNDCILUMZLRQYCUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.127674796491);
    msg.setSource(35009U);
    msg.setSourceEntity(11U);
    msg.setDestination(32898U);
    msg.setDestinationEntity(144U);
    msg.command = 157U;
    msg.goal_id.assign("ECYAZHDRBTPFMBVNP");
    msg.goal_xml.assign("OEOVYMCTMFIXDHNHXHAUYRREZTGNGRJPXGRTSBQNSOHJFLGZAGFHUFWRPERPBEDVFJSFSYTBVCRKABLDCVWWWAFYRPLDJNFNUQWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.0421013883603);
    msg.setSource(35032U);
    msg.setSourceEntity(35U);
    msg.setDestination(9101U);
    msg.setDestinationEntity(205U);
    msg.command = 113U;
    msg.goal_id.assign("TOSGUJJFFJAIVIIXULAPLGMLLKADAMBEKNFHQSRYRCNHSNFSABQLCIAHBNTXTZERIXYSESMCKXSJDMSRJZWCBGWDFVOSWAFAZGOOBLFODGYQXDIEEIEVQYTTPHZXSTZYCZZJHPRRRRHMJFEUMTUWOPYQKTICDHLUWVPXCJJNULCBKJFCEQOWWZINWDUXNKHMWVKHVVYTQKDUPQBNMN");
    msg.goal_xml.assign("KIZPDDNRHVCRQLCITTDFPOYPQLVKDGJDUYKWNLHCRBWAOXKWAZSDRMYAHQQHRHJGNEDBBUNJMHLKLFLVRMWUBZXTWOUFVNQFFIQKBVHETTIAKUOPIVGCTUXYYREJQCZNXGXTAWLPTNRBOCPOTEXSWYLXJKAVNPCGILFOZRSSGOEEIWJEJZVPXEZPBDXZDDGAFHGNQTHAQAAUYFJUBHSJSYMGVYIISIMCOZZRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.121663854874);
    msg.setSource(58332U);
    msg.setSourceEntity(230U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(208U);
    msg.command = 244U;
    msg.goal_id.assign("QOIVGDLEXNMGMYMFTMHCBDYRUUCVABVJYRPQORPZBLKRSGRUAS");
    msg.goal_xml.assign("STNKNQQQNBAGJBROAZCIADTLLACWTGUIWURVEBSQXCXKPENLZDMZHLXLHTSMLYIVHPNPCTRIXXXRS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.229260113633);
    msg.setSource(12721U);
    msg.setSourceEntity(112U);
    msg.setDestination(59606U);
    msg.setDestinationEntity(41U);
    msg.op = 212U;
    msg.goal_id.assign("WFXLZQUXBZWXSCIAFHPIIRACZSDAPLFKJFASC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DJZVOSUYKGZZUWKLCQZZRHZSZPBRUALFCHNFXYHOBNBHTVBXWXCVWCNEVWXEKMIMNHXQFIFBMQBNKQNYJQAOFGCRLVGCGYVTOVBPKEZTDOTIMFLUWKFRIXMJTHCABHSIBVEQRYDLGEFJTIVEDCJOSSZ");
    tmp_msg_0.predicate.assign("EQUQCLCZVNMBYIUPDTLBILVZIJADPYCFXATTLVFVAEIZXSUWHZWMBYCZTVXVSNUNQDEGOCUAVLIUB");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.581275886326);
    msg.setSource(13918U);
    msg.setSourceEntity(169U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(46U);
    msg.op = 107U;
    msg.goal_id.assign("LAQEPUOYCPERXYKPRMAXFJCWBAUKVWHMYCHSQOLZZUQIXDDJJFLUGXAVRVOTXYMWXBZLVMQEVKDITSBLEHLVHLDCSGLSAOBFGZIMBBJGXNNUZHNGUEYOHPRU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZCHMGAEVSTTPACYFIRISYSUYMQVWVRNDXSUQVMULOQQGFGTPFMWZMKUMUKXWFHAPYMZYEFJBYOQHDHENIORCVIGYBJUHBIGLMITNNPBPSCDGQZTTAOFLIOEDKJXDBTONKCAJABECTXXHKNBRUKWZGRJZEHSJREVWLYOPZNPSJSXKTNXABGVRAR");
    tmp_msg_0.predicate.assign("NOOIDGPSLEFBEBJKTLZCNXQEYNINKGMKVJZVGLRBMPYKFMZPNFITQEZTKQAHKUCSYIUVCLZHFQBJSCZPHPQRFMWOWAMXDSGCTPDKRZARFCEONFTMNXIUZWSVLUDETQHCQYENETDL");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.487466656504);
    msg.setSource(10723U);
    msg.setSourceEntity(41U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(25U);
    msg.op = 241U;
    msg.goal_id.assign("AARJJCRMHUXWEYXXTSYPIZKVMLUTORCKVAQLDFXOQOWDBDNBGWOCOCPQIBQTGMHRMFPQJCBACXTEYPGZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UDRKLZHNZQRPVQDGAUCVOLXRIFHVIOWCTXBIAWOURSBDUGBJXCBSRXUTIBDFTJDAXFOKEINFSMOJVYBNLRYXQID");
    tmp_msg_0.predicate.assign("SLLGNOSSOFKMWTDWTGLMMQPTXYSUKPFFKCZCEORRIBYSNUEWXHFDNOLZVHXTNDQYWFVBKWFOP");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.091499942965);
    msg.setSource(40610U);
    msg.setSourceEntity(19U);
    msg.setDestination(48941U);
    msg.setDestinationEntity(221U);
    msg.name.assign("DZBTWAYBAMAODSJMJTKDUOOGTTOXRYGSDMJJXMLPLEQXTHSWSLFRKAHGQPLJCAQRIUCEZZKXXSIDNAOAGVAGJYYCTSBXOYKPHPUENEVLFJWBJEFKGRNGNPRIFTZVISCGNPVBCYKYDXANVUOQBPNRFLLHWLMHUWBUJOFOMQIXAUECWQHD");
    msg.attr_type = 207U;
    msg.min.assign("DQHZUAQMWRTMVKPJBZIOZXGALZRYHPDCPXTHZFPYGMONJVDCOBTZOZNSPXNBJRIWSIRCYSFJVIVNAGUAIHTJEQGQKLPWFGPRMMFHKBABQXJCYZXLDKITQ");
    msg.max.assign("CYAKBETYXKUSZDYYGTJEPYOBJPPDXIFUKYSVBAJVNYXXPJFMQOFZUZOKSSZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.347351204534);
    msg.setSource(60017U);
    msg.setSourceEntity(107U);
    msg.setDestination(29445U);
    msg.setDestinationEntity(117U);
    msg.name.assign("LKDTVBUOQCVXEQREKEZGAKJFKUVCIWLJGMOQYNDTRODWAMBSPIRHLUBVAYIFBGOQDHPEIUSWPTOUDICXPMWAHPCERDAPCDEJVBXWGIIUBKXZWEYZVDVJFGZGOXUUORRSGQGBTZCLVHQFSEYLJEGLZSHFOIBQLPQPTMG");
    msg.attr_type = 149U;
    msg.min.assign("ZLVIOVWMWGDWSPMBHFEUAJYUGDEOXLRNLPUPQVGNVKDTHAIWJDJJBKZXPDFAFUIXRRORVUITLYPMDXEIFRYHFNMLHYZGPTQIOHCKVZXUAXLTHLYLPOEUDMTKPTRQSWUAGWHDZTNSPSBEGCQYXHXRKNJPBMBQSHJYRSNGRZCNUAEQFEERKFXKBOSTXEDQWEAGFKMWSYOJJLKUVCQZJTSOCFAJGGBWO");
    msg.max.assign("YMDCVRNZQAXIRPNWOSHSAXZKYDXDZLASIXLAQAOGJJBZCJEGFEEVEVINCCTIUFWFNJFSNOMJOHMLIVBUTPKEDBQPWHDWYAOCPVPTLGUCRZVSNEQIWLBDFKIIMUNTZGWRYPGVRKEFSKZPGOHPOLVFCUTMPVJBTKBHINKWHMSDUGRUHJKXFTATGYJGULLYQXFYTMWETJMHCWQRMSYOISACPXEBYZSZXXDEGVAKULBMQWLHNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.114695771693);
    msg.setSource(54995U);
    msg.setSourceEntity(67U);
    msg.setDestination(62641U);
    msg.setDestinationEntity(202U);
    msg.name.assign("ALTOPOYKFOSCTAVUMIJVNWKMUJZQOBCFBCKQQDDWDGORAL");
    msg.attr_type = 99U;
    msg.min.assign("MGCMKQLGMBFMLYSDVBRZQIJVQGCPWJSPKRITIIULYTLVFGJJNZNQNQUVLNATARHRKTNIPVTCWBQOYZSHFAURXPGSCEXUSZPVOZYGHLAIMRGBATQHHMOAVFKFCHR");
    msg.max.assign("LBJIJZXXHRTARTBEAMHQRSFIQPUIEBQMDNBBLSVPMBVTVMXWKRJACXDEECEHYQIZRISLGXYCNYZJTHGEGKRBYORAJLZYSNDLXTQFJGBXWJFJMGSUOCOMSWBIQVOGYMULKYECPSCWALZGUIHVILCXWDVAGANFFTLKCFHFYPADQODMJUKGFRWTURGODIJVCCLFTSMBUHKNSZPZZVKYPWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.334051462501);
    msg.setSource(14896U);
    msg.setSourceEntity(87U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(236U);
    msg.timeline.assign("XSZERXFNODWOVDEFPJQRXMEMIGMSOVWHBVVAGHECZSQNEYCLTNNVPDQVFJWFBAIWLQCZKHHJAMEJTUPTILDLPCEUK");
    msg.predicate.assign("EQGZKJBLICCXXLFPZNKSREZSWOIXEIWJOUFADFBEAKRJZGHPZYFBPKNVHYSSWTMIUYFTKYHIMEIAVRNUDRTCPQKLNFMGOZUNBOBHPUTKVBUAJYPZXIVSWXDMQLGBFOEIGPLKCAOLMAQLRFWAPUWSHNKXTBTQDEHAWGULWXXFEOXSRNMVCIYFHOZLQWMUTDOYMQNVREGPBDZQYJDRJVJGIQASHTVJQVACMODLVDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.365365329863);
    msg.setSource(28163U);
    msg.setSourceEntity(206U);
    msg.setDestination(9443U);
    msg.setDestinationEntity(77U);
    msg.timeline.assign("GIRLIKNLAQEQQXBSRCGXHFSEUGGHHYEJCPTTPKZM");
    msg.predicate.assign("MMBYXHEVDBWQDPRCXZFVALVFPBGTUUCIVLPHYHOMUCDGTUWRNN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.0137714675828);
    msg.setSource(48376U);
    msg.setSourceEntity(65U);
    msg.setDestination(2989U);
    msg.setDestinationEntity(184U);
    msg.timeline.assign("QYHRTMCQKDAQJEJB");
    msg.predicate.assign("EXCFOHZLHOAHJNEIYFTXXBZMYUSWEAGZTOASIXYKC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EZQWSIRNOZNTLBLTFAMTRAPLKEQAUTXSWLNPPWBFOPWSQJKFEVJRTUSEAAKNGFNJNFQXEZBCUHVQWVUCCMDLOQHVPSHEDCFHXGIWTHKHUSZYSCGBFYQLERFPGNXGDMTMRKGVJILMZRTKUKLZYXIDAOIBJMQDYFDBSHIVJGOKXUZZIQXBSKEIUAOXPCAOVYJGOXHNYMRPOWZHHWSRDFDATMWCGCJUMERVCEIIG");
    tmp_msg_0.attr_type = 198U;
    tmp_msg_0.min.assign("NHQVHRCCXCIJWHFCMHGBDSOWYXDLZTRWSUZZNIGNIJXNUNQMFGYSOUNAPKTVJGPEBPIKQVBEMATUFBIZUAVPVPFTOSXFDYVIPDJXCVUXIGZSAWYYXEKTAQRQCNBVLESRMNELHKLTILXMJUDUDEAZLEGMGKYRAFAZKYQYKROHRJXCOLMBABNOJOTBOWCECKWDFHWLNWQFJUHVZAXDPSKJFLEPCPGPGSOTWMYMISZZL");
    tmp_msg_0.max.assign("HCGKYULZMHYNMHGBABOUFNCMLFKTSFDPGUHMLGWCKZROOPLEIVNBNDNCZCVBWESXQWGFBWUZAEJXPWSHLJKCEFVYWPEQTISQKBEWZXDNPOBJAQEYKBAXCXRIIFLDQQSFRYRMJNSAEQXVITPKWSORXUQAVCXYVNGJSALRIZ");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.323391071319);
    msg.setSource(4418U);
    msg.setSourceEntity(153U);
    msg.setDestination(45086U);
    msg.setDestinationEntity(173U);
    msg.reactor.assign("WLNIOJPTYWFEESLNBISYRSIPEBITGLFDVWYNHANGXXLJKBZCAUGLUDPJTGWJWAUXNPPAFRLJFCKPJRBQSTQZRHTSEJYZKWLDEQVOCXBDKKZVAVMPCPYZOLITZFSHHCIDAKYRSWZGDDYOQLUKMXZIWUOAGHCFCGJLJHVNXAOKEHIKWQRIPTUCMQDYZJVNISBMBESGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.302723209097);
    msg.setSource(7667U);
    msg.setSourceEntity(155U);
    msg.setDestination(56115U);
    msg.setDestinationEntity(107U);
    msg.reactor.assign("BNJGYBKOXTBXOGEXUBPLZRMUVTSLBROPEXPQJWFIYLTSLWOYHIUJCHIKKIALGQHNNWTVDMYPGZMMFNINKIWTZBDFVRSDXFHWQQGGAJASXRYKZZHNVEPKVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.112528356419);
    msg.setSource(21980U);
    msg.setSourceEntity(9U);
    msg.setDestination(47244U);
    msg.setDestinationEntity(36U);
    msg.reactor.assign("HVJZCLWIQOHLWRDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.897218631292);
    msg.setSource(53323U);
    msg.setSourceEntity(62U);
    msg.setDestination(50521U);
    msg.setDestinationEntity(201U);
    msg.id = 181U;
    msg.width = 59973U;
    msg.height = 24858U;
    msg.widthstep = 30724U;
    msg.channels = 85U;
    msg.depth = 165U;
    msg.finaldata = 43U;
    const char tmp_msg_0[] = {-102, -58, 32, -95, 121, 80, -57, 96, -119, 66, 50, 61, 12, -41, 74, 71, -57, -8, 12, -43, 15, 115, 82, -33, -21, 97, 14, 29, 82, 107, 34, 90, -44, -38, 89, 58, -87, 106, -13, 75, 83, 56, 97, 112, 107, -125, 34, 79, -91, -124, -99, 64, -95, 42, 34, 102, -126, -5, -127, -9, 60, 86, 123, -71, -33, 95, 118, 98, -122, -86, -10, -55, -11, -57, 5, -52, -85, 22, 23, 98, 107, -84, 23, 53, 0, -104, -117, 24, 65, 69, -128, 27, 36, 87, -117, -35, -73, -119, -104, 72, -10, 25, 102, -76, 82, -19, -67, 24, 74, 32, 20, 29, -40, 32, -62, -92, 95, 84, -119, 57, -126, -24, 114, 45, -122, 116, -79, 120, 34, -87, 26, -32, 121, -41, -61, -44, 21, -102, -46, 114, -25, -93, 8, 91, -56, -56, -110, -92, -126, -89, -32, -7, -29, -104, -59, -117, 67, 34, -35, -31, 20, 14, -30, 122, -48, -56, -14, 90, 74, 69, -50, -63, 18, -59, -127, 74, 33, -87, 25, -128, 26, -126, 34, 113, 109, 76, 44, 90, -102, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.18187842693);
    msg.setSource(6547U);
    msg.setSourceEntity(222U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(15U);
    msg.id = 123U;
    msg.width = 7283U;
    msg.height = 2063U;
    msg.widthstep = 22126U;
    msg.channels = 156U;
    msg.depth = 117U;
    msg.finaldata = 152U;
    const char tmp_msg_0[] = {77, 17, 90, -74, 51, -18, -94, -7, -65, -76, 104, -122, 71, -65, -85, -69, -73, 10, 68, 94, 48, 59, 104, 99, 35, -30, 49, -58, 32, 50, -61, 94, -51, -86, 92, -78, -82, -87, 101, -45, 91, -38, -52, 80, -70, -46, 56, 43, -75, -48, -16, 71, -123, 98, -5, 77, 39, 77};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VideoData msg;
    msg.setTimeStamp(0.289270429207);
    msg.setSource(27746U);
    msg.setSourceEntity(32U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(187U);
    msg.id = 5U;
    msg.width = 31036U;
    msg.height = 20381U;
    msg.widthstep = 57040U;
    msg.channels = 125U;
    msg.depth = 68U;
    msg.finaldata = 207U;
    const char tmp_msg_0[] = {113, -121, 88, 9, -25, -33, 1, 98, 81, -80, 33, 100, 98, -115, 31, -102, 74, -81, -7, -51, -39, -104, -16, -66, 3, -13, 69, 54, -58, 13, -89, -123, -104, -15, 106, 32, -93, -101, 4, -123, -74, -74, -69, -88, -99, -84, 109, 89, 104, -26, -54, -95, -12, 101, 41, -99, -103, 112, 49, -74, -110, -119, -114, -97, -19, 1, 17, 121, 21, 85, -69, 103, 28, 4, 99, 50, -15, -126, 124, 34, 46, 4, 80, -106, -36, 34, 106, 86, 48, 117, -32, -55, -65, 34, -35, -69, -30, -51, 34, -52, -52, -93, -79, 21, 106, -124, 73, -3, 107, -1, -28, 77, 16, 33, -83, -119, -44, 3, 9, 37, 49, 66, -22, -78, 4, -94, -100, 117, 101, -42, 3, 114, -22, 33, -101, 18, -15, 12, 70, 9, 63, 10, -50, -75, -72, -7, -24, -83, -81, 45, -45, 121, -119, -69, -68, 5, -97, 27, 1, -51, -109, -75, -4, 85, -86, 16, 1, -40, 27, 21, 0, 54, -84, 36, -89, -72, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VideoData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.113828897125);
    msg.setSource(39074U);
    msg.setSourceEntity(91U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(36U);
    msg.width = 34502U;
    msg.height = 64726U;
    msg.channels = 165U;
    msg.depth = 208U;
    const char tmp_msg_0[] = {-7, -87, -68, -48, 74, -116, 42, 72, 85, 122, -44, -107, 17, 12, -3, -19, -128, -103, -121, 18, -33, 121, 17, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.295965236434);
    msg.setSource(45776U);
    msg.setSourceEntity(43U);
    msg.setDestination(48501U);
    msg.setDestinationEntity(70U);
    msg.width = 32337U;
    msg.height = 29694U;
    msg.channels = 82U;
    msg.depth = 154U;
    const char tmp_msg_0[] = {28, -50, 82, -61, -22, 39, 110, 112, 81, -47, 45, 51, 50, -54, -122};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RawImage msg;
    msg.setTimeStamp(0.928868303461);
    msg.setSource(15671U);
    msg.setSourceEntity(203U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(40U);
    msg.width = 60044U;
    msg.height = 36478U;
    msg.channels = 174U;
    msg.depth = 92U;
    const char tmp_msg_0[] = {30, 114, 93, -49, -24, -45, 45, -107, 80, -38, -125, 44, 79, 76, 93, -99, -106, -72, 88, -116, 66, -33, -34, -68, -113, 109, 35, -93, 122, -110, -124, -35, 109, 39, 12, 35, 24, 120, -107, 78, -11, -57, 7, -30, 84, -56, -93, 42, 89, -57, -98, -75, 100, -84, -10, 118, 114, 104, -83, 75, -124, -76, -118, -14, 125, -44, -109, -72, 31, -116, -4, 37, 81, -82, 73, -4, -50, -35, 59, 63, 83, 112, -107, -31, 117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RawImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.680565786306);
    msg.setSource(42422U);
    msg.setSourceEntity(115U);
    msg.setDestination(29828U);
    msg.setDestinationEntity(215U);
    msg.frameid = 77U;
    const char tmp_msg_0[] = {-100, 103, -52, -104, 46, 84, 53, -122, 26, 85, -84, -97, 78, 103, 100, -81, -2, -83, -41, 67};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.64862637804);
    msg.setSource(41248U);
    msg.setSourceEntity(223U);
    msg.setDestination(12011U);
    msg.setDestinationEntity(247U);
    msg.frameid = 23U;
    const char tmp_msg_0[] = {30, -91, 33, -83, 91, -87, -120, 118, 126, 42, 4, 19};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.57863279311);
    msg.setSource(62429U);
    msg.setSourceEntity(112U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(20U);
    msg.frameid = 32U;
    const char tmp_msg_0[] = {-105, 68, -71, -13, 24, -100, 1, 13, -60, -8, 91, 104, 119, 79, -46, -44, 67, -75, -18, -52, -99, -101, -38, 2, -49, -62, -20, 14, 41, 47, 123, -19, -100, 104, -55, 4, 78, 4, -23, 94, -44, -107, 38, -73, 17, 16, 53, -11, 11, -26, -101, -114, -95, -41, 2, -57, -26, -39, 110, -41, -55, 11, -36, -12, 86, -108, -120, -120, 76, 3, 125};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.879946684925);
    msg.setSource(32331U);
    msg.setSourceEntity(173U);
    msg.setDestination(43784U);
    msg.setDestinationEntity(15U);
    msg.fps = 8U;
    msg.quality = 137U;
    msg.reps = 120U;
    msg.tsize = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.870183056015);
    msg.setSource(30442U);
    msg.setSourceEntity(115U);
    msg.setDestination(35258U);
    msg.setDestinationEntity(200U);
    msg.fps = 153U;
    msg.quality = 110U;
    msg.reps = 87U;
    msg.tsize = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.10380097142);
    msg.setSource(44528U);
    msg.setSourceEntity(181U);
    msg.setDestination(52582U);
    msg.setDestinationEntity(229U);
    msg.fps = 253U;
    msg.quality = 186U;
    msg.reps = 117U;
    msg.tsize = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.523443993556);
    msg.setSource(50773U);
    msg.setSourceEntity(116U);
    msg.setDestination(39727U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.589900152188;
    msg.lon = 0.816410267875;
    msg.depth = 131U;
    msg.speed = 0.115787927116;
    msg.psi = 0.474313618008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.0354955538428);
    msg.setSource(7479U);
    msg.setSourceEntity(17U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(254U);
    msg.lat = 0.375865801753;
    msg.lon = 0.643868170965;
    msg.depth = 46U;
    msg.speed = 0.874952533355;
    msg.psi = 0.782214039316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.105033479811);
    msg.setSource(26060U);
    msg.setSourceEntity(168U);
    msg.setDestination(31116U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.648276995664;
    msg.lon = 0.659662716093;
    msg.depth = 79U;
    msg.speed = 0.255084378684;
    msg.psi = 0.83465890675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.234468118669);
    msg.setSource(30569U);
    msg.setSourceEntity(29U);
    msg.setDestination(36059U);
    msg.setDestinationEntity(94U);
    msg.label.assign("CDLIPDXAFKCCQUCPAJZFRBNHMNOCZQVOSRWRGRLQMDSEFFUP");
    msg.lat = 0.250344871837;
    msg.lon = 0.440843970206;
    msg.z = 0.909263967352;
    msg.z_units = 155U;
    msg.cog = 0.138420284483;
    msg.sog = 0.105212253558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.518488329092);
    msg.setSource(5540U);
    msg.setSourceEntity(133U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(67U);
    msg.label.assign("BCFAACKEFXYHYNLUFHQQPGEYNUQGKGZSTSVJVJXUNZKIYMUORMWCRTQNZBJTZYGPAUBOWAEJSVADPAZLJPPMEBMXFBAHVHXYEWTHLYHMNWXMJX");
    msg.lat = 0.417345547135;
    msg.lon = 0.922694135934;
    msg.z = 0.372456834376;
    msg.z_units = 194U;
    msg.cog = 0.549587312516;
    msg.sog = 0.639786842064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.068730103062);
    msg.setSource(43646U);
    msg.setSourceEntity(107U);
    msg.setDestination(17541U);
    msg.setDestinationEntity(19U);
    msg.label.assign("ZDSDGFJTFJXHGIMRVBNPGYNINPYXUOXHIUWQDXFAZBYCKYOPCSECVLILYUEWSNTUMSSJHWEMPKMERTYORJRQPJMLFUGSGJMREJQWSHLIZVQUKNVBLKCWYSVWZKXFONQKFTGPFHSAHDAEAVDNZLXBXPGBUVRRRIJUOLLETZUQMYKQHYZGSNVPIOAYKDEXPVOHTCM");
    msg.lat = 0.195638066931;
    msg.lon = 0.586168598821;
    msg.z = 0.00825254564747;
    msg.z_units = 242U;
    msg.cog = 0.211597030019;
    msg.sog = 0.155754429702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.829575408007);
    msg.setSource(13611U);
    msg.setSourceEntity(148U);
    msg.setDestination(20424U);
    msg.setDestinationEntity(230U);
    msg.name.assign("SDOPRNRRLLAOVXTPGFZXFRDVPSZFZGFMPUHRRFIFATEEKLAPHPAJSWAIBGZJIXOJGXUCUXMWNTZSUENLWAWNKSYTVAAYMFKGYFNHEDYUNLHVSKOEMYWEWMMROTTWWQYDHGQDVBUBRHPSIPVADQ");
    msg.value.assign("RNAEUHHIRJFGBUSSDWPFSNYBKYEDNSPORSIQAKTEUCQNZXOATZGKPJOBORDMPHDLMOBZSSLKZGEREMPZIBQEQKBVDBWEBPTTZNYRRVLYKTVGXMYSFPPEJGCXJGWYYVXICALZTSKQUIHDLZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.937399252788);
    msg.setSource(63683U);
    msg.setSourceEntity(214U);
    msg.setDestination(52706U);
    msg.setDestinationEntity(35U);
    msg.name.assign("KGHFJVJOGZNCDCQYSOGTHGVYECUEBHOZXYSEYWYWQHALXAADNMYQECMILJTSVDSFBAZPDVYKIJIBKTOWZLZYBBMHCMRXWZAWRJYDRIFHQFRBKPLOMQEUBVNRFPIUSSQBWWOCNXMKAEREPQXUQPFUBSF");
    msg.value.assign("NXWCYDRAUQVCLFIXLJWOITVPMZGMQVQKINDXUYNDQUK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.122573910678);
    msg.setSource(33313U);
    msg.setSourceEntity(22U);
    msg.setDestination(25039U);
    msg.setDestinationEntity(121U);
    msg.name.assign("IMTPNPSNIBUCGGGPWODSLGHXDQTCWWEVRXWWHWBGTOUSHOQETJUVFIYRCAETQWSSVRZJMMMLFLATDIDYSZUS");
    msg.value.assign("LRQISENKCUKBSTHJJZNOMPUFHUJUAEAGEWNHUKBBMDPCWSSNLLXYTOZGZTCEIGRFDNZLYOWGVAXSUXEBAXAKNOHRTJGFDBZYQAMBEDFYAAJJYZCIZLVZZMPCNXQIBQBMQJNKFRDITWMHTPHUYVYFWVSPCQKRHFPZWEERICEHPQXVQOJBWDWTKKSGLGDEGNMIIVVXULGHLQUXPFOSGQCFNKXODKSYLAIRORWFBHTCSVORJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.934150594174);
    msg.setSource(7710U);
    msg.setSourceEntity(29U);
    msg.setDestination(6784U);
    msg.setDestinationEntity(122U);
    msg.name.assign("IMGGSRSIMMAWAEPMTXNQFDXDQOVJQSTNVCZOTJIWJCSBYHQMQZQELSYOUCWIYRTOLSDCZKBBDHXDFSXKGIIFMXLVVFXWVMHHAPXLGQNCDPZKYIHHADKVFKLZRBLXDSHUPIGKQFYJAKBYNUWCENVGOUJNBNBTMZIJYRPOADYRPAPGDUQAEROTGLWXCTBPHRATZCUXNZFERFFYZURMKJCGKNUTOYPLEQWBEOLOEJVBHSEJIZSGCMEWN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYYNZMKCJHYAVYZESHYEJAFQWEJWOKIZNLKWBNUJEMQTDGPFSRSPLPWOV");
    tmp_msg_0.value.assign("XRMQLUCBSBMBUFLQCRVQCWVLPNAXZQIFDSHZUFLFNCMJHKHKMJZRYPXKSSPUQUNVAIVMEBEXMOJWANGQDTFWCTOPWIACFMGJRYIVNWPJRQUSADWEKZNNHTAZGRTQOO");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.366591588543);
    msg.setSource(3973U);
    msg.setSourceEntity(211U);
    msg.setDestination(2124U);
    msg.setDestinationEntity(28U);
    msg.name.assign("VUONXHSNACKKRLPFFDRPNFLMYEBQBWEYXXOTLJITESAPFSRAZQCCTHFLRDBPXCSCIVNSBOGKCGAISASTACHUQFYUQUCOTKVVEXYWQZGVUUJRRJPTKXAGNMNYAUJCFPLVWDBN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WZIQJCZKUYFXVQMIPZIUTWLDIQXMXWHUBJGXYLYHSXAEUQACAWADBQVZAHIEJYHWVWBTIVLNRZEKFIFCDUUBWXJFSUKULGIOKCFVTDAMLNYBFQPMJOBUSHMIEPIKMHOSFHOAYDPZOCZMEVGPLWSSRVNJXRHTRDNKBXBCRKXJMTCTMMLPSQNSARVLNOJEGDZRTNTVGYAQRUTSECDEYAFBDKNWOGCFGJHPELRDZRWOOPNPEQH");
    tmp_msg_0.value.assign("NQNYODIUVQGUKLZOKJAXASXOTKHUJTNAYAHFLSUPRPUPACHRBEWFRDHAUYMKPGOEZXDYINMMHIOTGZMCNLSZPHJZUBDMCWGSKLWFWQHVSWFBDFYGRBUSOWRFODGMHZMIDPXGVHDNSIQAFJIPLHNCWBJIGLEXJQGQCNZVTYTBQVKDNYFXRMSWJTLZXVVLLAIOBASTEXQKXUEYDEVTECQLXTBUPRNBCEJWKPSCVI");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.0917741349819);
    msg.setSource(49250U);
    msg.setSourceEntity(164U);
    msg.setDestination(55688U);
    msg.setDestinationEntity(71U);
    msg.name.assign("WJTPILQPXZZOBFKONLRKRPMBFZIHTFLSCDWMAXGEPCXKHWJFAZZKIZIAGNTNOJGEAPIYBQWYMXXYBLYIHKZXLUXPMRNLGQKHYOCJQW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GYUNCNWYKXCWOASMTMGZPHNBKRPUCRCEIHHJIHEXWGLAWTAZKWZBADXYBSMGLSKPOUZHSVBHOXLWYRQWRLDQARVRSFGSFQWJJYFQGCEGHMZUCGYHTLFMU");
    tmp_msg_0.value.assign("TSNYZYRJZYUGSEHERNROXMGNEJTDNBAPOXSKRK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.156728457422);
    msg.setSource(36987U);
    msg.setSourceEntity(208U);
    msg.setDestination(63510U);
    msg.setDestinationEntity(97U);
    msg.name.assign("ISFNDUGUGFDTUPLNRXTKRMVJRSCWLIEOWHTXVGHLIDALJZUMFYGGEAUVGYKFQGOQYLAYOYNTMXWVPCHWGILSSITBNQMPZHYOFJLIIYLFBKUATKWMKVZBJOWXSMJYPJXRNIABJAVKTMOCIBPGCRIGWXPBYZCBMPDUFHTAEFQZDTZ");
    msg.visibility.assign("STLREZKAUTFYLCLAHMOFKDTBUEITYIJEZMMHJQRKXQEJOHKIYJEDASMYIQWEVFNFWAXHQBXTELZMYYYXJESACIZUICAGQUTALBPABLSGUPBBBI");
    msg.scope.assign("XNMZSISKXWET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.479903254664);
    msg.setSource(31457U);
    msg.setSourceEntity(75U);
    msg.setDestination(37064U);
    msg.setDestinationEntity(217U);
    msg.name.assign("MQLKVMKNJXCWKGJZDCKEGFPPVAQODUVXYERIGUZSWNCBWEOUPKHZAOUGJBBGPUANCWICQQNRWYJNMLVBLFZLUDMLAHUAHRDRFXEHAKTOKSKEEIYECTITDCSYIRNSYOQMWXVHSRKBDYZHZNFDGWMMRCIOXBQMSNPSLOIJPYRGMEGDILTYXHUIOOHHVGTJYRFHWDBFQNLBZSWCSZTTGAVROVETXQAJVDUXTBVNQJPWPJ");
    msg.visibility.assign("TFWBJLEYVNZCOEYSVGJZMKR");
    msg.scope.assign("ZVIFCBALOWXQJDSGPWLIRMGXFTNK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.750220229806);
    msg.setSource(37923U);
    msg.setSourceEntity(62U);
    msg.setDestination(7658U);
    msg.setDestinationEntity(113U);
    msg.name.assign("PLNVLJXMJDDUPZPAFOWMWIFCQCTBZSDXVVRPLUYMTUMZNRDSIVPYVUXHFFJDWINLPRORUPGUJWGRMQTAIZACHWNKXEEGIMXJHXKMOVGBZYNMOSKHAQX");
    msg.visibility.assign("JRPWRVEAENUQMSGHEWIKJSGZTWLNYBVERZXHGYCGXGKDYNLHCTDMOLZYGLKNAPQFTVYASIDHUQVJKGVKAYBHSRXBEWYSDWJCXZBTZCPERNQFETFUCLKPOBDJNQWBLMOBEUIMYLZFMGLAOZNRRGTO");
    msg.scope.assign("ZFXSJKWKCNBSARQYPFKVCEOHVOMHZREUVCGAMFMDITSQLLKQFDUTBRXPMRHGBWMTPLAIUQUBEENXYKEETZHJCKRTLXRPDHNOEPWQUSTLLQZGYCAOIRSYVMHYWNGGSJZDOANPUAMUTEIOKQSFGBHVACKWPZNVHCLNYZLMBEXZWPVGWYXOWBEGNBOHXZLOIRUTMHFJBVISFDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.83069824293);
    msg.setSource(63407U);
    msg.setSourceEntity(1U);
    msg.setDestination(6773U);
    msg.setDestinationEntity(126U);
    msg.name.assign("HYXXAMFTIITUEKCQLDHFYFMSJSKXLNRBJRYEBOIIVPURHGMNHLCVEIEUVYZYHDBZQACMWKKWGFHQYWMOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.196029474505);
    msg.setSource(14651U);
    msg.setSourceEntity(120U);
    msg.setDestination(20323U);
    msg.setDestinationEntity(29U);
    msg.name.assign("WQFVTLUPGWWZJGCRPZANLTRDJXASHQMWGWJKMKNITVLLHWBBNXLXCJQSMORLIHQXCC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EBZUSZPAVFNFHFPDJ");
    tmp_msg_0.value.assign("QSDUVGUGLYICVBHNJDVZZHKUPQWMIKFKJTARTOJKFMEPRDRGZOGMLNNUYDBROJGPJLRDWCSFTCECYQYCHDEQFGXFVDXNBYWOHFKOVWQHTWLRDJHWZYSXJK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.62934566448);
    msg.setSource(13265U);
    msg.setSourceEntity(245U);
    msg.setDestination(14226U);
    msg.setDestinationEntity(76U);
    msg.name.assign("VFRRAGGCZZWAVXBSLPCKAGDWKHQJXKJECGYNRZQQFQNFFHFEFDNIJVQOOUTCUV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DNMKOCPNZUQAIMNNSCZCCXQJWNJTREJHMRLPVCEMVIKNSRDNQZZZFGSUZKRXYHVBGAEITLUMODZNFHAVRKUZBOXVQUJWZKIYZYHYEQCFNMVVSWXOFPU");
    tmp_msg_0.value.assign("WRNHPIGRHHMVUDMBGDVUEVJTZVXPPAOZDPDXLMTSWOSIQYNRFKAFPEXNCIQCXYWXPEMCBLISNDPEMSJNVDGBYTKTFXAGJRDJAOMVBFWDTYFYUSCVQPBQHKEERKAUGTAOUKJNAKBKOLZIGNSJFRSIZKLZBLDXQLKOJJXRUGENHSJYTHIFHUZPNGYGRSMUVOC");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.257945185472);
    msg.setSource(24489U);
    msg.setSourceEntity(51U);
    msg.setDestination(56752U);
    msg.setDestinationEntity(200U);
    msg.name.assign("CLHIZBMVKEQXWXNBKCRMOQRNZATBUTFVUOYKZBUYTIPDTCQYCVGOZHRDGWDDPCCZEYFHMMSNSAMHJWLTDMYBKZEIQRXNQBVKERAMTVLHSASJNUPWQOIBKPUJESJNSYSTCPBCIEPEHCOGPEKIKBGUIZXHXRGLVZXLYWFFKQZVNZEEWCFODIJJMHSFDJFFQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.233388006135);
    msg.setSource(9907U);
    msg.setSourceEntity(110U);
    msg.setDestination(45503U);
    msg.setDestinationEntity(252U);
    msg.name.assign("LGUGDVQDSCSEZKNHOEGZXMRERDEGNZNOSKPMJPASRPNDJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.0235685451898);
    msg.setSource(38876U);
    msg.setSourceEntity(15U);
    msg.setDestination(65499U);
    msg.setDestinationEntity(94U);
    msg.name.assign("RQPQAZHLGBFISQNIKRTLLXJTXMATVPUSUEOBDEHVPXKYWJBDKATZOFFZEVQPVMSVJEKWUHILTKSKTRZEJSFHCECUMZQSINRVZCEGCQDQSNJBLOWPPDLFWCEYIDBMYAHTMQORXDPHZLICGPOGIJATUBQNNZYUAUOFQRCJFMXJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.810768464821);
    msg.setSource(7339U);
    msg.setSourceEntity(39U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(244U);
    msg.timeout = 1354598657U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.728837289482);
    msg.setSource(9049U);
    msg.setSourceEntity(198U);
    msg.setDestination(5539U);
    msg.setDestinationEntity(60U);
    msg.timeout = 3814110427U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.188986523416);
    msg.setSource(8025U);
    msg.setSourceEntity(2U);
    msg.setDestination(18249U);
    msg.setDestinationEntity(164U);
    msg.timeout = 3964783956U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.875444701373);
    msg.setSource(30405U);
    msg.setSourceEntity(227U);
    msg.setDestination(61760U);
    msg.setDestinationEntity(179U);
    msg.sessid = 2085457751U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.272484295126);
    msg.setSource(43385U);
    msg.setSourceEntity(231U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(96U);
    msg.sessid = 601623357U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.000986686130656);
    msg.setSource(15792U);
    msg.setSourceEntity(66U);
    msg.setDestination(32085U);
    msg.setDestinationEntity(127U);
    msg.sessid = 3758295409U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.873524817522);
    msg.setSource(31580U);
    msg.setSourceEntity(119U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(208U);
    msg.sessid = 4086642227U;
    msg.messages.assign("OJDVBDAVBVKQUQMVYMUNLHRTKYGAORFQOXDBYJXQMOKDPGSCXYWEVNLHZIBQSGVVILZNPRMHQNYTTDJLZAQSRKAUZKTMKFZBIFRADRPSKYERGCTNTEFHUHEPMHOWJZKAELCYWFEPZNLEJOXOWIWIKPAXSCJZQQOVXWSNLECYOTLURGJUMNYWSGJOPNBUXUWZVKIFEMLXSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.621451616474);
    msg.setSource(16428U);
    msg.setSourceEntity(48U);
    msg.setDestination(40939U);
    msg.setDestinationEntity(52U);
    msg.sessid = 1194230805U;
    msg.messages.assign("XXVIRLZUJQOPVOYQHGWXIEVAEVNWMJVKYCIVYEQACWPBQNQUUJHVAXXCSUSJHWDOZPWRUVNVACKMHFEMPNRDHXGMRJPGKKLMTHTSLODABPWCLVYJBWHMTIDBFBGSKAJBMBHSJNDZQKCBDQZEFOPSKGZICYRPYNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.2140202999);
    msg.setSource(29526U);
    msg.setSourceEntity(54U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(93U);
    msg.sessid = 3545359232U;
    msg.messages.assign("IWIATFZTISZTPTYKGSOYMECAHADBXZXDVOABEYOBIONLRVLZTEFJCLJFCBIWFJDHCUBRVFKMJKEIGXXBHUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.542537132096);
    msg.setSource(35770U);
    msg.setSourceEntity(153U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(253U);
    msg.sessid = 2486632754U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.170032021754);
    msg.setSource(32462U);
    msg.setSourceEntity(168U);
    msg.setDestination(2206U);
    msg.setDestinationEntity(107U);
    msg.sessid = 139452905U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.678477436544);
    msg.setSource(65312U);
    msg.setSourceEntity(222U);
    msg.setDestination(22839U);
    msg.setDestinationEntity(77U);
    msg.sessid = 749227560U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.411942624891);
    msg.setSource(20666U);
    msg.setSourceEntity(154U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(207U);
    msg.sessid = 3769156537U;
    msg.status = 52U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.191807436725);
    msg.setSource(14455U);
    msg.setSourceEntity(127U);
    msg.setDestination(11410U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2217030088U;
    msg.status = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.667596304911);
    msg.setSource(51418U);
    msg.setSourceEntity(140U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(233U);
    msg.sessid = 3477275063U;
    msg.status = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.628534522434);
    msg.setSource(64211U);
    msg.setSourceEntity(11U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(55U);
    msg.name.assign("LEUKYSXYMLFNAVSSOUKFVTZYPINANUPVTDYQATUYKCPTJCQBZJCRKQZBBETFLFOBUGWPNDECCDQOMZTEUSKONXKHCIQHWGVVGAQRZIYPPLXJCYIJFUKGTIHKEYOLAGODWJWOTDQAVRBFWHKBFZWRRXDMDMDPOFEYXGSGHTDHNMWCBXHVRJASOXZECVMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.108569771538);
    msg.setSource(55910U);
    msg.setSourceEntity(62U);
    msg.setDestination(58098U);
    msg.setDestinationEntity(118U);
    msg.name.assign("VWWIDTUKLLNSBSSDUBBPGOTVUMZEUXZNDGVAHXCZMFZMFNJIORVBAGXTHGTWWGZSYOXELDXREKTEDBKMZGVSENJBDLMOPYALFSLRHNDOPKFZNVADASIGROEGJCNKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.253982840639);
    msg.setSource(16474U);
    msg.setSourceEntity(65U);
    msg.setDestination(6124U);
    msg.setDestinationEntity(205U);
    msg.name.assign("EBLEGOUGVXFMZVMNCWYUYFUSSEXOWCNBKTNUTDGJBASBHZNMRPQIRHXAUFIXAKXJTJRONJGXMVEVNJVTCZXCDSJFGXSEFZIYTDWWKDIOBQARQUFITZZJWEI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.603549513706);
    msg.setSource(46688U);
    msg.setSourceEntity(128U);
    msg.setDestination(43451U);
    msg.setDestinationEntity(89U);
    msg.name.assign("VDPGMVPNNOKNYMTEVRXMBIKRQGSNHDHRSBCZKZSPBJUAKSHLVJACHHPFWPYCTIWDJWGSZFCIDAUQBFSIOAGPQXXICWBYSAYXPVWLMJROASCYVJBPDEDKTTRTOLJJNDDWGJHXVMXHKFEYUBFXQQTIHLZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.0922265543116);
    msg.setSource(27792U);
    msg.setSourceEntity(115U);
    msg.setDestination(44717U);
    msg.setDestinationEntity(45U);
    msg.name.assign("DRBMANKZYUDEHTGWWYYFOBXLWZSQGQDOFZQSDPQHRETAJVTTXQQVVXESFFBODZYQKXBDJTFRGUZCBFWSCBOMKKLLHJIKURVICEHVPTUNOISCSJHYITXZCHLVPVXGELWRPCGRNDSLOYXPGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.402588719615);
    msg.setSource(15174U);
    msg.setSourceEntity(169U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(103U);
    msg.name.assign("DXKRLCMBFHLLYENQPGOQCVPQEOHFAIAELIYSDNVMBSXFARDKWPDOCBAZDTNGKOTQYYLRSDNQWLUPZVIMIDJEQKRMXBXMTCFBSWEIRKGWZHBAIYKEFPIABHKOWFVHUFTVVNDGSJCONVUMGUXYPXPNWYQSRPRHSCWJVZUJGSTBYLBXRTJXZHCOUCQEUWTMZKESZFMLANGRVGUEUKNFMDXAZRLYTXVJOATHOCMJJTHUPIQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.875260155139);
    msg.setSource(14968U);
    msg.setSourceEntity(25U);
    msg.setDestination(10405U);
    msg.setDestinationEntity(151U);
    msg.type = 53U;
    msg.error.assign("FMPGVJZAEKYYJWQNUIREXMUEAPHSTTOSWFKQLVUQDKZGOIXQWMMPDNBVDUIWNDFLDAHYGDXPJALIFCLKQVZTODUBLIHGABCPWCMBXCORQQXAUOOZUURCCFQHYSTDGXMZRKXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.863665498092);
    msg.setSource(1641U);
    msg.setSourceEntity(67U);
    msg.setDestination(31027U);
    msg.setDestinationEntity(247U);
    msg.type = 115U;
    msg.error.assign("NBDJIQLUUZMAGGIPPMUVOCZEWKTSDSAUQIWFNYUODXBLPGWURRMCBHVBVAWMAKNIJYDIYZIYRBOUKPCZFMOVHOXWJHGRHXJBHGDSBXAZEZVEQPYQUNSFLAFIDQVHNKUFYRJIACONPNKLBGYXGMJMWNREXCWLYAJHDEQTDTPFTFMSDVZRWKBNJXRLZJSCOJFWYIXQT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.447395146785);
    msg.setSource(23551U);
    msg.setSourceEntity(163U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(4U);
    msg.type = 93U;
    msg.error.assign("IWODPMNXWEPGOPTYPMENLZNCSLWZRZQUYQSRTLZVXKFOLKGSKSYUWVIUUZSCBGPJSQQEODTMXVFNRYPXIALLBWIYYIBGGRVLDFQHYDWFLZBSFXEHCMAXFBREKENZWOOVGPUTUHKQBTENKTVVBRCJQJSGAJACCDJMTECHDIFYUHANAMPWDVRFKUHUGQRBDFQXYOJCKPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0857983450886);
    msg.setSource(27445U);
    msg.setSourceEntity(189U);
    msg.setDestination(28568U);
    msg.setDestinationEntity(24U);
    msg.seq = 29229U;
    msg.sys_dst.assign("ATLNYEZZKSPIPMDZHFGVZQJSCZMICGQQZXTBXBJUACRHFAIDXXPYCOJNIXHSGQRFGOJMIISLULHULMKBVWUFKWOOLFZBYMEJDSCZVDXXKTOKNTYANQVRBDKDBNAVXONWRWPHYWKBXLEXGMGLPCOKZUUHQLUSFPQNWTTAHRCDWDGSOELKWFTIMHIDRPWQOHGJLNEHPPAICRBAEGVUCEA");
    msg.flags = 13U;
    const char tmp_msg_0[] = {82, 3, 46, 111, -126, -39, -81, 110, 69, -72, -9, 35, -121, -114, 115, -79, -102, 55, -22, -121, 93, -23, -100, 48, -60, -44, -94, 95, 2, -17, 37, -98, 45, 22, 61, -121, -126, 3, 38, -70, -47, -2, 81, -40, 33, 22, -117, -43, 106, 93, -56, 75, 95, -20, 22, 7, -34, -123, -45, 100, 70, 12, -19, 91, 36, -120, 44, 13, 3, -91, 60, -116, 32, -120, -109, -93, -90, 14, -41, 28, 105, -92, -74, -100, 81, -118, 44, 60, -114, 82, 94, 75, -16, -34, 34, 72, 84, -71, -32, 48, -26, -54, -8, 73, 46, 120, -79, -83, -92, 80, 121, -95, 43, 24, -25, 20, 17, -120, -51, 118, -15, 20, -46, 65, -43, -76, -103, 10, 38, 73, -54, 84, -11, 102, -89, 25, -15, -9, 70, -72, -108, 43, 40, 88, -35, 45, -76, 53, -119, -90, 103, -48, 67, -103, 62, -44, 15, -125, 1, -52, -6, -62, 54, 11, -70, -30, 36, -128, 23, -85, 48, -91, 108, -85, 93, -85, -73, -63, -6, 20, 124, -88, 90, 37, 18, 124, 85, 0, 26, 89, -21, 5, 57, 26, -76, 74, 97, 28, -55, -30, 34, 100, 81, -127, 57, -87, 19, 91, -36, -85, -53, -92, 124, -44, -105, 114, 40, -115, -39, -127, 5, 56, -106};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.85455335302);
    msg.setSource(34539U);
    msg.setSourceEntity(18U);
    msg.setDestination(53329U);
    msg.setDestinationEntity(119U);
    msg.seq = 49351U;
    msg.sys_dst.assign("BBJQIVFYBGABQMXADBJYNACNCGRIPIAVYLWIPTOODNIMKEDZTOVJGPKRWOOGHXUIAUSALWTYLBHGCYBQEUDHNWQMLHQDMSYNOXEVXDERODLKKAZGGFADWVUSOVHWRSSRRXGJUSMBTIFKJKDLMFXCIQSSTECJXAEPWKQEZNTPZCZY");
    msg.flags = 99U;
    const char tmp_msg_0[] = {25, -34, 11, 81, 102, -8, 63, -57, -20, 90, -11, 72, 121, -103, -41, -80, -9, -19, 43, 123, -29, -76, -96, 58, -106, -5, -123, 24, 26, 105, -68, -13, -3, 120, -3, 54, 0, -50, 38, -22, 38, -103, -57, -52, 42, 82, -67, 94, -124, -88, 60, -63, 9, 38, -57, -58, -70, -31, -35, -27, 106, -79, 85, 17, -79, -19, 119, 75, -83, 87, -7, 119, -38, 42, 109, -109, 126, -84, -77, -110, -2, -48, 87, -51, 87, 73, 96, -94, 120, 87, 112, -31, 122, 114, 107, -83, -116, -60, -31, -100, 98, -24, 10, 34, 40, 69, -92, 35, 93, 3, -54, 125, 94, -58, 54, -55, 79, 116, 16, -123, -93, 25, 6, 91, -33, 99, -114, 96, -97, 8, 45, -81, 3, -3, -87, 10, -120, 69, -92, 37, 57, -98, -99, 5, -62, -47, -42, -87, 27, 89, -15, -32, -13, -128, -62, -98, 94, 94, -37, 61, -39, -115, 119, -35, -21, 36, -32, -108, -77, -49, 71, -85, 44, 82, -7, 31, 105, -1, 90, 123, -14, 72, -104, 73, -108, 91, -54, -59, 77, -65, -44, -42, -87, -107, -41, 26, 107, 98, -37, 2, -55, 97, -113, -53, 15, 63, 91, 81, -6, -51, -90, -21, -72, 45, 84, 71, 31};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.864328764482);
    msg.setSource(33294U);
    msg.setSourceEntity(5U);
    msg.setDestination(35300U);
    msg.setDestinationEntity(44U);
    msg.seq = 43286U;
    msg.sys_dst.assign("LEXSNODJTJNOTKSNVWWRIQWXUPWZRMFENEWPZJULCCFHXVGSFZAIHYOMNKBJQMVZAICRKKCDPEHNGLSUPAHUBBGSLZDEDQTXPPQOPLYQMETMATBHWILFVGFPO");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-42, -93, 45, 125, 55, 20, 114, -3, -62, 109, -27, -70, -82, -53, 67, -108, -81, -103, -59, 94, -45, -66, -9, 36, -14, 36, 17, 97, -4, 49, 58, -30, -88, 90, -86, -125, 26, 75, -97, -40, 106, -101, 38, 18, 63, -45, -13, 67, 1, 13, -51, -118, 40, 29, 67, -11, 117, -13, 70, -91, 1, -42, 66, -128, 4, 71, 25, -59, -124, 119, -42, -7, -21, -45, 76, -123, -30, 55, -1, -71, -93, -33, -61, 91, 22, 12, -126, -3, -38, 36, -16, -116, -126, -39, -91, 14, -99, 59, 9, 100, 110, 2, -29, -77, 43, -71, -54, 35, 95, 75, -13, -121, 79, -62, -96, -20, 42, -14, 92, 47, -46, -127, -104, 85, -128, -89, -27, 87, -71, 111, 112, 47, -61, 93, 89, -72, 27, 118, -24, 111, 124, -100, 17, 69, -97, -112, -8, 31, 57, 113, -63, -19, 82, -115, -83, 36, 13, 36, -119, 4, -107, 77, -75, 59, -100, 45, 22, -22, -111, -52, 8, -123, -72, 117, -118, 28, -37, 68, -34, -60, -17, -60, 123, -45, 68, -66, -102, -9, -116, -30, 93, -17, 101, -5, 112, -91, 85, 88, 99, -37, 85, -43, -40, 29, -70, -24, 94, -115, 96, -56, 20, -35, 3, 66, -75, -53, 103, -48, 7, -40};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.352933695442);
    msg.setSource(64184U);
    msg.setSourceEntity(140U);
    msg.setDestination(46450U);
    msg.setDestinationEntity(202U);
    msg.sys_src.assign("QLZENRZKPHKXNNOOWQXYIWMVKIRMVBGHXDTYX");
    msg.sys_dst.assign("OKGPVDOGXJYU");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-103, 95, 98, 20, -42, -78, -48, 126, -53, -72, -31, -127, 99, 41, -105, -13, -87, 102, -14, 52, 107, 78, -35, 21, -80, 102, 41, -62, 83, -103, 53, 65, 89, 71, -116, 24, 112, -95, 15, 95, 85, -101, 48, -19, 62, 8, -35, 74, -117, 71, 44, -32, -59, -71, 50, -72, -68, 52, 96, -115, -89, 16, -21, -88, 74, 23, -42, -91, 107, -125, -118, -19, -26, -72, -87, -38, -8, -125, -122, -6, 109, -122, -123, -109, 30, 94, -12, 14, -59, -81, -12, 1, -2, 113, -126, 113, 80, -90, 73, 31, 107, -3, 28, 14, 125, -117, -31, -88, -80, -95, -118, -76, 42, 36, -55, -29, 73, -74, -89, 1, 73, -69, 6, -92, 43, -68, -60, 52, 85, 67, 13, -34, -103, 61, 80, -26, -59, 81, 10, -64, 14, 33, 9, -18, 46, 55, 88, 9, 105, -103, -4, -40, -3, 108, 103, -99, -127, -45, -2, 59, -85, 117, -82, -75, -44, -111, -48, 42, 13, -85, 74, -59, 49, 47, -114, 83, -6, 27, -107, 107, 0, -80, -60, 14, 116, -115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.661918848371);
    msg.setSource(17518U);
    msg.setSourceEntity(197U);
    msg.setDestination(60649U);
    msg.setDestinationEntity(23U);
    msg.sys_src.assign("GZJCDHTASCKJFEKVUVENYZSLPHTFTLAPNLRYMMZGFIBQRATTWFTQBJZUEWOFDFHGDHNGQKKMSBNMBZMIWSMECPCVAVNBQNUOGOLRJXCGKWRZMQCGEKDHLJYOD");
    msg.sys_dst.assign("GEDGKMHJRNSMJZLYNMFDTDYECKBIAIHZZQKJLLGCFLPRUOQWBYGLRJMIFPWVTAFBVNIYMXDBSTASXWGOWCFAGPJPDYTAKOYQWBEYZXJENPQHVEKWKAZEGQSHGUATISDYVPSDXPREDRVMEULHZVLRHZZCOSHXHUHNOJUMQQKRTFKBPYKEUUTWCZFLCXFOBPBXEZSGCUOT");
    msg.flags = 21U;
    const char tmp_msg_0[] = {-73, -4, 34, -119, -88, 72, 81, -31, -119, 82, 28, -15, 126, 81, -7, 29, 116, -93, 29, -12, 102, 45, 68, 5, 14, -127, 11, -13, 39, -29, 28, 20, 14, -105, -66, -30, -83, 23, -24, 78, -51, -49, -128, -100, -94, 4, -46, 104, -19, 93, -76, -105, 52, -82, -43, -16, 70, 73, -54, -55, 49, -57, -79, 57, -81, -88, 108, -3, -12, 73, 115, 89, 73, 78, 120, 108, 76, 27, -127, -66, 36, -78, -1, -4, -113, 114, 124, -94, -47, 81, 89, 116, -79, 96, 32, 96, -2, 126, -68, -55, -29, 68, -18, 22, -127, -68, -78, -55, -91, -43, 89, 98, -106, 85, 71, -33, 29, 69, -88, -93, -116, -119, -71, -33, -56, -102, -67, 51, 75, 38, 113, 20, 16, 114, 5, -89, 16, 11, 75, 52, 57, 125, 59, 64, 1, 27, -19, -7, -15, 65, 61, 125, -5, 97, -12, -61, 9, 88, 112, 60, 14, -55, 24, -86, 102, 83, 40, -127, -43, 23, 34, -78, 93, 85, 48, -47, -109, 74, 101, 22, 96, 41, -118, -106, 47, -8, 5, -124, 58, -18, -80, 41, 39, 90, -66, 99, -103, 18, 61, -10, 42, -83, 5, -84, -17, 116, -64, 36, -89, 97, -22, 106, -82, 13, 117, -101, 15, -120, 86, -19, -72, -38, 84, 9, -118, -50, -111, -126, -40, 57, 113, 57, 109, -53, 20, 114, 122, 48, 2, -22};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.647984567191);
    msg.setSource(42053U);
    msg.setSourceEntity(89U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("ZUOTSPSEDOQIYNYTRMSTXZBHLIKENSPULGBPTTDRQGNDESSPWOLJYCTMQKMQWSBZARRODKNFVKQOSPFVVRLVVFZYFIGXBZEICMTKRFKUNFEBWUQXGIFMGMUQZJMRATPXHWIHRXLIHAYQUNKDWAXHTZFNZPBEIYOLKBPGNU");
    msg.sys_dst.assign("OWJHLLMAWDMCKHIENIIUSRDQWBODYSVFRFOZMODENZZSRNGFNXSFYMGRLZQSZUSCEZWWAIEQNITGRJLIDCGMDPLLRGYUDWWABVEXIJMBUNHJFDBYKONFHJAOLZGZVANNYXCWXQYHEEUDAHOCORXEGALSOLGQCKZSIMYCPPUWJMQAJBVKDBHNKXATPKBEQCTYQSYVMPVKZVTEGHBVIPULFRXXPBRUVJ");
    msg.flags = 88U;
    const char tmp_msg_0[] = {-32, -15, -43, 14, -98, 50, 25, -95, -82, 41, 117, 11, 77, 24, 106, -57, -1, 94, 18, -43, 112, -25, 10, -125, -28, 103, -102, -47, -25, -2, -2, 33, -19, -107, -81, -108, 51, 2, -2, -17, 75, 97, -89, 86, 103, -91, 81, -24, 31, -99, -49, -56, -7, 27, 81, -8, -14, -79, 74, -49, 54, -43, 50, -59, 20, 92, 53, -35, -48, 126, -22, 76, -55, -41, 77, -38, -90, 45, 87, -27, -102, 52, -48, -87, 11, 47, -68, 25, -51, 19, 59, 0, -62, -35, -96, 10, 112, 86, -50, -72, -47, 104, -68, -48, -109, 50, -62, -23, -26, -83, 31, -15, 17, -13, -18, -27, 1, 41, 98, 72, -113, -82, -76, 3, -3, -58, 85, 125, -40, 9, 33, -1, 59, 125, -111, 63, 104, -103, -79, -54, 25, 99, -21, -86};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.00134730848595);
    msg.setSource(42435U);
    msg.setSourceEntity(89U);
    msg.setDestination(26404U);
    msg.setDestinationEntity(222U);
    msg.seq = 7001U;
    msg.value = 214U;
    msg.error.assign("CVMUXNTLIUOJJVMNPIRPPXNPUGOYTCSXPAHQMRGKQMZJELKRCAMORDSDAWNCOHAJHSUDZASLKFZLKWGHJDDDILBFWRQYHRVGGXPMXSEDTABYSWHKOTUKEHYLSTVFZTYFXNCBWLDTWCOBWPAKXINFKVQWGMPQQEQXGJHVPZBFZJCNYCKBWOZVZAYILANXUTGYQUYEMVJIXKJSIGIFWTCIHMQFELUZEYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.802303297919);
    msg.setSource(3961U);
    msg.setSourceEntity(41U);
    msg.setDestination(38702U);
    msg.setDestinationEntity(120U);
    msg.seq = 13758U;
    msg.value = 19U;
    msg.error.assign("SAZPCIZPASIDMQNLMGQEUWIBSFCEUKXNQYANVILTHKLQODLQGNXPGZFBFBTR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.308227773441);
    msg.setSource(52496U);
    msg.setSourceEntity(104U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(25U);
    msg.seq = 6569U;
    msg.value = 60U;
    msg.error.assign("YRTHSFGQYLCFEEGGIUGXJDTNWHMWTIGIAXZFMWCJZQBSQHJUCQRNNPNYDOCCFMIRDCQZTCLDYPUPWRBNRULQOKBZTKMUOUXWSAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.767387682747);
    msg.setSource(25202U);
    msg.setSourceEntity(198U);
    msg.setDestination(51165U);
    msg.setDestinationEntity(234U);
    msg.seq = 34796U;
    msg.sys.assign("MMGATGLXOIQYZLXGPZRBVCGTHARBCNUFAUNNNJOBENWXXMZSVPCKSDNTFUOHYPXEFHLKYSZMHFLYIACEPDSOMYCOAMUVDHPAPWHXGMSBTDFSLUGLUPZVSCYGENKX");
    msg.value = 0.335597905191;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.413578719838);
    msg.setSource(28975U);
    msg.setSourceEntity(73U);
    msg.setDestination(58466U);
    msg.setDestinationEntity(44U);
    msg.seq = 51430U;
    msg.sys.assign("MTQMKZFIPKCBEZZUBQHSOCFRQLEPI");
    msg.value = 0.389462979356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.362588060317);
    msg.setSource(31310U);
    msg.setSourceEntity(171U);
    msg.setDestination(10167U);
    msg.setDestinationEntity(84U);
    msg.seq = 60652U;
    msg.sys.assign("QZYJCVHZHZRWYGKCAREOJCUNPAXJEMILGZFXYJXUEBXZMYJOLMWVUXXFNTYXJLVMSZNHFRPDVPMDRWWHCFSEOVUBHMLHQMOQXPJDSWZRSKDCNFAIFWDEHEYDIJNUVCBYATDIOQVLULJCHKBGFYMNMHCPSSROZDURQGUMDEQIYIAKBBWSIVPNBPFNFWXAOCTIZETQENGGEFUVPXPIGKOOBRNAGBTIADORKTLPHQQGTAWJSCKB");
    msg.value = 0.846391810102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.0545961271047);
    msg.setSource(8728U);
    msg.setSourceEntity(53U);
    msg.setDestination(53281U);
    msg.setDestinationEntity(207U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.764303401866);
    msg.setSource(463U);
    msg.setSourceEntity(246U);
    msg.setDestination(2178U);
    msg.setDestinationEntity(20U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.667060425599);
    msg.setSource(44782U);
    msg.setSourceEntity(165U);
    msg.setDestination(20266U);
    msg.setDestinationEntity(103U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.28661045191);
    msg.setSource(20420U);
    msg.setSourceEntity(82U);
    msg.setDestination(55371U);
    msg.setDestinationEntity(220U);
    msg.action = 128U;
    msg.longain = 2418527918U;
    msg.latgain = 3895972836U;
    msg.bondthick = 1895442076U;
    msg.leadgain = 31058557U;
    msg.deconflgain = 1653903974U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.428712434951);
    msg.setSource(58132U);
    msg.setSourceEntity(117U);
    msg.setDestination(21084U);
    msg.setDestinationEntity(116U);
    msg.action = 249U;
    msg.longain = 1097919637U;
    msg.latgain = 2871191111U;
    msg.bondthick = 1720279841U;
    msg.leadgain = 2765438234U;
    msg.deconflgain = 4257118603U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.345967705379);
    msg.setSource(26525U);
    msg.setSourceEntity(31U);
    msg.setDestination(19500U);
    msg.setDestinationEntity(121U);
    msg.action = 101U;
    msg.longain = 3089839897U;
    msg.latgain = 2640501242U;
    msg.bondthick = 3104263260U;
    msg.leadgain = 350907751U;
    msg.deconflgain = 3309786254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
