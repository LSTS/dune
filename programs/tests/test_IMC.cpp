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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 68340176398d4cf0eb30bb903ea9c5e7                            *
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
    msg.setTimeStamp(0.391404787387);
    msg.setSource(39471U);
    msg.setSourceEntity(78U);
    msg.setDestination(8756U);
    msg.setDestinationEntity(69U);
    msg.state = 142U;
    msg.flags = 72U;
    msg.description.assign("GGDXIVCLAEMHHIXYEPCNUMHGODTQAOCAQBTWHUMYNCOOOFDJZJIJRIPEQBSNZUXZXDKPUKAUSQBEDFYBKTWSGXXJTHPPPZDWFOPRHSOWQNYVVZRNVIDTODLZUSVITFAZJAGVHNLZXKEKHBGMLMCHAFEVRAJTAPSUNNYQBFFRUESLRKMT");

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
    msg.setTimeStamp(0.856491213614);
    msg.setSource(51220U);
    msg.setSourceEntity(234U);
    msg.setDestination(7770U);
    msg.setDestinationEntity(200U);
    msg.state = 76U;
    msg.flags = 131U;
    msg.description.assign("YVEWWLAAPLBXOPWMDQOPKAQZMSYXXVWM");

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
    msg.setTimeStamp(0.0942758451738);
    msg.setSource(43214U);
    msg.setSourceEntity(17U);
    msg.setDestination(20872U);
    msg.setDestinationEntity(114U);
    msg.state = 197U;
    msg.flags = 61U;
    msg.description.assign("RWQDWYRNGAXJATMTGLULSFENCDVQUUNTGXSZIEDSKHVLIHZADEBLYWILPPXXSTLDZNNAQEBHGORSFZGTVKP");

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
    msg.setTimeStamp(0.487926145307);
    msg.setSource(43056U);
    msg.setSourceEntity(113U);
    msg.setDestination(5828U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.617399638286);
    msg.setSource(16196U);
    msg.setSourceEntity(110U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.994637480369);
    msg.setSource(56665U);
    msg.setSourceEntity(34U);
    msg.setDestination(51752U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.596707876336);
    msg.setSource(11156U);
    msg.setSourceEntity(128U);
    msg.setDestination(38505U);
    msg.setDestinationEntity(201U);
    msg.id = 41U;
    msg.label.assign("ECAMWEPGEWQGHRLTJNFKFEBROIYOSFSHJVZLNYDSVJROPNJHJCARDPXWCGLLTGZTSMXUAVCGEYCTBOUA");
    msg.component.assign("MFNNTFONRJDSFCKAWMUWLUXSTRBYDNCLQRWWWSNHPAOBNGPXCBUQQHXANGGEEWKFEZYIUWVMBUWXJOXAAKHVDVRFDTRLCXRREZUMJNMIFHMLBOVPUXHZYSYINHXQBTSKOMXEAYVEIITPVGQJYZVIRJTRBDPZTZOYSJCEQXBMLJGMKSWYSQHFBJKLNGLQDHAYKHSHICPOLZFQ");
    msg.act_time = 27381U;
    msg.deact_time = 30303U;

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
    msg.setTimeStamp(0.752466352545);
    msg.setSource(44994U);
    msg.setSourceEntity(1U);
    msg.setDestination(65161U);
    msg.setDestinationEntity(232U);
    msg.id = 230U;
    msg.label.assign("DICAMWMFPSSGJYZMQYIXVAEZRWIOAK");
    msg.component.assign("OQZDKSJDXVBAWUTSVLTPQSHZNVEUGEXETQCEUAESNZEXUKIPNIMNQRFKDHZKPAJYQPLXXGJTPFYFJAATLXFWPPNJWUBYOMPRDEOVFLJHYKMKWMKDGHZWTAGAKWSCOQVFHAWVXKWJCSBNRVCRASBUORYDIWIIIJLEYXYQFMQBCGOBBTGUCGVFNV");
    msg.act_time = 41977U;
    msg.deact_time = 12727U;

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
    msg.setTimeStamp(0.313702029584);
    msg.setSource(20772U);
    msg.setSourceEntity(217U);
    msg.setDestination(51637U);
    msg.setDestinationEntity(130U);
    msg.id = 54U;
    msg.label.assign("IOGDRXRGPZOEDKLMMDMBRNHCULLYKNGJWYSTMZYJASWJQAKXKTXJOYAZAELABLPGGVWKYNQTFLJXHETUHBICTCDUFKWVRBTKVCJGGDBUHARIPFQUGIXERTFEYFVAQNIMCFRJOCQAMLJSKBPSWVQWQUXSYLBGZOJEZDPMUQPIUNSUHSLHPXOAOZYHCDVAHGWMREORFDOFSTPKNWQHTTXJNIXZZVCUMLIPHMCDN");
    msg.component.assign("VBTDOBHWKBNEYYQNRTNZLMQJIATIFBNJNUXHSGKXZQCXAPLEQVIZUTFRYCVKLMPQGBXMLITIJKWVDGYFVIECIMIPRKURL");
    msg.act_time = 20740U;
    msg.deact_time = 39462U;

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
    msg.setTimeStamp(0.516114553268);
    msg.setSource(53742U);
    msg.setSourceEntity(237U);
    msg.setDestination(55296U);
    msg.setDestinationEntity(165U);
    msg.id = 207U;

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
    msg.setTimeStamp(0.469702081165);
    msg.setSource(31062U);
    msg.setSourceEntity(193U);
    msg.setDestination(32809U);
    msg.setDestinationEntity(179U);
    msg.id = 37U;

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
    msg.setTimeStamp(0.109145679225);
    msg.setSource(22042U);
    msg.setSourceEntity(51U);
    msg.setDestination(2509U);
    msg.setDestinationEntity(251U);
    msg.id = 95U;

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
    msg.setTimeStamp(0.642568251472);
    msg.setSource(32305U);
    msg.setSourceEntity(13U);
    msg.setDestination(7864U);
    msg.setDestinationEntity(49U);
    msg.op = 60U;
    msg.list.assign("DZQTACMGYQQJQFJCYDYWGXBJORIQZLKFQXWNTPWMIVEHMRHVNWSGNSMWUEPLALROUIYGFCIGUBYBTDNWFKHLIDAYBFEGOI");

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
    msg.setTimeStamp(0.925144965408);
    msg.setSource(29715U);
    msg.setSourceEntity(127U);
    msg.setDestination(5541U);
    msg.setDestinationEntity(65U);
    msg.op = 1U;
    msg.list.assign("FTDUYAHWGPIRORTVNKSYYJOXKMDICSCTYPKNTUOSEDDYDWVHRAVGBCXTOOQCWWWJNAUYKNEQHKPWVYPSLIQOUUYOLZZXJOYMGUNOCJJBELZHIOVMHXLKJARSYVNEZXHTQXLGCLQHUFHWQPGRRBLLMADKAQEU");

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
    msg.setTimeStamp(0.200301780984);
    msg.setSource(50727U);
    msg.setSourceEntity(27U);
    msg.setDestination(50365U);
    msg.setDestinationEntity(7U);
    msg.op = 25U;
    msg.list.assign("KTCAZGEOPIIRYKZEDLYPBDRQFIRNFJXWTRBIGMDZJMIEUOTFKADMTUSNUHAIARSYOOAUDPGVVMMXGBOTDDKKECUNEHNSHWGZHXSLSFGCQILJWCPFIOBJUXLTJUVHLWGVZEVMQFCQAAMXNXQIQXUWHAO");

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
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.75719457961);
    msg.setSource(43019U);
    msg.setSourceEntity(129U);
    msg.setDestination(12637U);
    msg.setDestinationEntity(93U);
    msg.value = 63U;

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
    msg.setTimeStamp(0.0654398569014);
    msg.setSource(54566U);
    msg.setSourceEntity(89U);
    msg.setDestination(9732U);
    msg.setDestinationEntity(71U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.33632617514);
    msg.setSource(39566U);
    msg.setSourceEntity(61U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(37U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.465722062943);
    msg.setSource(46193U);
    msg.setSourceEntity(20U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("UCQTSOKVCEQOIHLXZDYOITXIIZFDDRUBXMENZVPVJZKZCPHUYPAQQHPYITWIK");
    msg.message_id = 28664U;

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
    msg.setTimeStamp(0.0789318362293);
    msg.setSource(42279U);
    msg.setSourceEntity(51U);
    msg.setDestination(63595U);
    msg.setDestinationEntity(113U);
    msg.consumer.assign("WIMXWUUJFOUNJNRYQYBXKFCJRCNBKTBDCE");
    msg.message_id = 57930U;

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
    msg.setTimeStamp(0.950322548682);
    msg.setSource(22524U);
    msg.setSourceEntity(16U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(104U);
    msg.consumer.assign("LOZZBENPODIYJPBASRRSNMBKOXDXNBHFOPVUWJFNCBUVFCWPDTVGYFAMWORYQXJQAHNIPNFHDFKYGVSPOELRHGSNVJTQYGAAITVLJRZTREXIQZLVWEUBLQASHAJCXRPMHQTJWXUVLFGMXEE");
    msg.message_id = 58894U;

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
    msg.setTimeStamp(0.444203146697);
    msg.setSource(23709U);
    msg.setSourceEntity(11U);
    msg.setDestination(28568U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.97298793085);
    msg.setSource(63920U);
    msg.setSourceEntity(233U);
    msg.setDestination(7069U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.508207944206);
    msg.setSource(15237U);
    msg.setSourceEntity(55U);
    msg.setDestination(39580U);
    msg.setDestinationEntity(159U);

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
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.477762202454);
    msg.setSource(50274U);
    msg.setSourceEntity(90U);
    msg.setDestination(57957U);
    msg.setDestinationEntity(225U);
    msg.op = 112U;

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
    msg.setTimeStamp(0.935280640435);
    msg.setSource(30325U);
    msg.setSourceEntity(246U);
    msg.setDestination(7011U);
    msg.setDestinationEntity(176U);
    msg.op = 84U;

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
    msg.setTimeStamp(0.641574353022);
    msg.setSource(22745U);
    msg.setSourceEntity(71U);
    msg.setDestination(14145U);
    msg.setDestinationEntity(99U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.396661602851);
    msg.setSource(44433U);
    msg.setSourceEntity(84U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(160U);
    msg.total_steps = 126U;
    msg.step_number = 82U;
    msg.step.assign("VLLAFANGSBSFCYWUJNNVWUJIQHQCUDGYSXFHLUHFMCIBKDMLHETWEMXDVTGZDONKWHTCHOMMEXNCVPRZRKVYKBGMNYUVRZXGNFAJBYSOAZTSOWOIZBFCEE");
    msg.flags = 154U;

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
    msg.setTimeStamp(0.383623215086);
    msg.setSource(51752U);
    msg.setSourceEntity(166U);
    msg.setDestination(14576U);
    msg.setDestinationEntity(88U);
    msg.total_steps = 86U;
    msg.step_number = 224U;
    msg.step.assign("KNCCYYRVZOUK");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.275080529741);
    msg.setSource(26884U);
    msg.setSourceEntity(20U);
    msg.setDestination(9549U);
    msg.setDestinationEntity(54U);
    msg.total_steps = 6U;
    msg.step_number = 254U;
    msg.step.assign("ZFESCYXBTEZGJOUIGIZDUEGCGKPEGXUXOIKTIUPTGHPQMLSKDIVLPBNUCLLPVTEGHRXFBTNFOVMLFXZPFJHBFXMKRRBCHWVDJYNCPTLAIQYAVVCWUNMSKAYPUDAWLQQHAVRDOJYXSCAAHPBSMDSRQKOEZCTOMVYNCOCWQGDIIOMNWZATXJMXYZVSEKIQSHHLUNEJLSBKTZRPNZKHMQMRQ");
    msg.flags = 6U;

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
    msg.setTimeStamp(0.967284844561);
    msg.setSource(18498U);
    msg.setSourceEntity(178U);
    msg.setDestination(23198U);
    msg.setDestinationEntity(34U);
    msg.state = 16U;
    msg.error.assign("WBYJZRWKOQEAFZIPHGRUTKEGHPLNBYJNMPEKZUXMJRDKPTQIATEFGKBCFSCCHQMTPGRFBNRZFHGSHBUXTCFUWLOOXNMRV");

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
    msg.setTimeStamp(0.977071966355);
    msg.setSource(32473U);
    msg.setSourceEntity(125U);
    msg.setDestination(6441U);
    msg.setDestinationEntity(248U);
    msg.state = 44U;
    msg.error.assign("GJLOIJKGQDWVLSSQLLBFIEHKHHBNNCOABVMIMARMBTQYHSQFQNPLBFJIZGGSTFGWWOHPTDXCINLFAAHIRYUXXEFPJFEKZXZAQUVNDTPYZMBKOYZOCEUJYJXQAJUYUOMXCWLJLCHYXAQTKCGCREIDWRKOQGXWRZXTPIIOMVWSGDEEBFEEPSJNCQUTTTDAYBZSHTRKIXZBFAVYNJHMCOURDEPOZDHULRRWPGVVYDNVFANM");

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
    msg.setTimeStamp(0.939558627254);
    msg.setSource(52353U);
    msg.setSourceEntity(220U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(231U);
    msg.state = 64U;
    msg.error.assign("ZDFKGJSLCTOMMXHJMSNX");

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
    msg.setTimeStamp(0.271107012965);
    msg.setSource(4390U);
    msg.setSourceEntity(247U);
    msg.setDestination(15610U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.58485031979);
    msg.setSource(54252U);
    msg.setSourceEntity(108U);
    msg.setDestination(9856U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.370882301525);
    msg.setSource(19772U);
    msg.setSourceEntity(107U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.268076363269);
    msg.setSource(23814U);
    msg.setSourceEntity(48U);
    msg.setDestination(58744U);
    msg.setDestinationEntity(252U);
    msg.op = 166U;
    msg.speed_min = 0.0171776744511;
    msg.speed_max = 0.262821296221;
    msg.long_accel = 0.613437390767;
    msg.alt_max_msl = 0.161540534089;
    msg.dive_fraction_max = 0.592524323287;
    msg.climb_fraction_max = 0.24763187924;
    msg.bank_max = 0.302106607404;
    msg.p_max = 0.374667009839;
    msg.pitch_min = 0.0401529022437;
    msg.pitch_max = 0.177776421462;
    msg.q_max = 0.644891238876;
    msg.g_min = 0.240804578571;
    msg.g_max = 0.454477381921;
    msg.g_lat_max = 0.418576921104;
    msg.rpm_min = 0.0748611392593;
    msg.rpm_max = 0.241606683229;
    msg.rpm_rate_max = 0.427617604471;

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
    msg.setTimeStamp(0.703928134016);
    msg.setSource(64795U);
    msg.setSourceEntity(106U);
    msg.setDestination(25768U);
    msg.setDestinationEntity(85U);
    msg.op = 146U;
    msg.speed_min = 0.736718266856;
    msg.speed_max = 0.933022341039;
    msg.long_accel = 0.578677430798;
    msg.alt_max_msl = 0.898181443811;
    msg.dive_fraction_max = 0.327031005825;
    msg.climb_fraction_max = 0.886328850922;
    msg.bank_max = 0.92138745289;
    msg.p_max = 0.475911241111;
    msg.pitch_min = 0.577386678237;
    msg.pitch_max = 0.906857252542;
    msg.q_max = 0.64892591361;
    msg.g_min = 0.195797473699;
    msg.g_max = 0.282796630762;
    msg.g_lat_max = 0.623046759494;
    msg.rpm_min = 0.595469806008;
    msg.rpm_max = 0.827775904681;
    msg.rpm_rate_max = 0.427630734133;

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
    msg.setTimeStamp(0.275072848732);
    msg.setSource(48790U);
    msg.setSourceEntity(94U);
    msg.setDestination(26292U);
    msg.setDestinationEntity(225U);
    msg.op = 18U;
    msg.speed_min = 0.367921181436;
    msg.speed_max = 0.220891349757;
    msg.long_accel = 0.787121097077;
    msg.alt_max_msl = 0.971003114226;
    msg.dive_fraction_max = 0.994342543255;
    msg.climb_fraction_max = 0.755392662228;
    msg.bank_max = 0.690514400577;
    msg.p_max = 0.0711017669679;
    msg.pitch_min = 0.183463565042;
    msg.pitch_max = 0.408756937206;
    msg.q_max = 0.851372360935;
    msg.g_min = 0.0419789097505;
    msg.g_max = 0.858344382574;
    msg.g_lat_max = 0.256869942259;
    msg.rpm_min = 0.527898319417;
    msg.rpm_max = 0.198576831237;
    msg.rpm_rate_max = 0.51818446946;

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
    IMC::MsgList msg;
    msg.setTimeStamp(0.580117667768);
    msg.setSource(55103U);
    msg.setSourceEntity(245U);
    msg.setDestination(7963U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.750776859469);
    msg.setSource(3260U);
    msg.setSourceEntity(227U);
    msg.setDestination(52597U);
    msg.setDestinationEntity(213U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.732122632784);
    msg.setSource(61502U);
    msg.setSourceEntity(198U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(35U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
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
    msg.setTimeStamp(0.376737154843);
    msg.setSource(38631U);
    msg.setSourceEntity(9U);
    msg.setDestination(62601U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.608464425614;
    msg.lon = 0.0745385171503;
    msg.height = 0.635684131387;
    msg.x = 0.88613510256;
    msg.y = 0.11585413595;
    msg.z = 0.502749661769;
    msg.phi = 0.630301745433;
    msg.theta = 0.432499017128;
    msg.psi = 0.26250661115;
    msg.u = 0.537326664837;
    msg.v = 0.541229927062;
    msg.w = 0.0291258720616;
    msg.p = 0.595434942202;
    msg.q = 0.31928065429;
    msg.r = 0.550652906757;
    msg.svx = 0.654414728225;
    msg.svy = 0.0883162569169;
    msg.svz = 0.495981803054;

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
    msg.setTimeStamp(0.712071031879);
    msg.setSource(22972U);
    msg.setSourceEntity(67U);
    msg.setDestination(57743U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.846494946486;
    msg.lon = 0.543854978668;
    msg.height = 0.361360167239;
    msg.x = 0.353165176553;
    msg.y = 0.189011861479;
    msg.z = 0.616623520354;
    msg.phi = 0.0712458079268;
    msg.theta = 0.143616043243;
    msg.psi = 0.74145893879;
    msg.u = 0.443924145987;
    msg.v = 0.200908711821;
    msg.w = 0.970847748905;
    msg.p = 0.288057928015;
    msg.q = 0.118185324734;
    msg.r = 0.29297731439;
    msg.svx = 0.513768438635;
    msg.svy = 0.950879834397;
    msg.svz = 0.977830382768;

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
    msg.setTimeStamp(0.296129603313);
    msg.setSource(54481U);
    msg.setSourceEntity(45U);
    msg.setDestination(16185U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.605070574318;
    msg.lon = 0.816110077593;
    msg.height = 0.809447446572;
    msg.x = 0.668548972426;
    msg.y = 0.182083047924;
    msg.z = 0.595045832142;
    msg.phi = 0.523669278507;
    msg.theta = 0.66610907174;
    msg.psi = 0.0873512353133;
    msg.u = 0.268576144533;
    msg.v = 0.835820751435;
    msg.w = 0.348747126536;
    msg.p = 0.99760006111;
    msg.q = 0.894622691298;
    msg.r = 0.183979768421;
    msg.svx = 0.641834596286;
    msg.svy = 0.218715997725;
    msg.svz = 0.142547047767;

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
    msg.setTimeStamp(0.333082832982);
    msg.setSource(6769U);
    msg.setSourceEntity(226U);
    msg.setDestination(30252U);
    msg.setDestinationEntity(70U);
    msg.op = 59U;
    msg.entities.assign("CBKWVWRLCMPEAEFRYRODSLBDGQSEBFWNPNAXNRCTXEGECIXTPMEYOSLOTQXHHHMGAHQOIDFIKGHMUHUWTKJCNZUKGZ");

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
    msg.setTimeStamp(0.201301200653);
    msg.setSource(10429U);
    msg.setSourceEntity(147U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(45U);
    msg.op = 120U;
    msg.entities.assign("GDOKBIEFTAOCXIKZRYAQDEQQECKPZSDMJESLYGXMVFTFCLEQNHHXXHKJAQNYREBHDHNNCXFVSWNGDOWHDXPQDLQKYDPNSVZIMNMUATGSYSAXGOSVQPOEQLLTGCABRHBIZZXBWCYJJVVWCHLEZSFTJJIWVLPGOTAFLYIRBLUTFCWWKKDZFKMKOQTRURWLONUCVXTPGOBIZAPYBRHEURCVMAKJWFUN");

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
    msg.setTimeStamp(0.660209235527);
    msg.setSource(35168U);
    msg.setSourceEntity(164U);
    msg.setDestination(39904U);
    msg.setDestinationEntity(18U);
    msg.op = 66U;
    msg.entities.assign("VIUTJVIPAYUMISJKCXENQZLZRTTYDYSGEZOBVROYIDKPDFWJKLBWLOCHQLBMHXGHYMJKUDRGFFFMRHEPMQUEEZJHBOCUKYGDXCDOMSBDUHWJRVSHFOXCTYRMGRBBLUINVWWLSNTIZBHPYZAIWEFSPVZFEJCOCGLNCXADPQEZZETWGKAQXNCTXAVGNOEBIKLIRKZLDWVSPUNAPXQFLNRF");

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
    msg.setTimeStamp(0.753598982296);
    msg.setSource(5260U);
    msg.setSourceEntity(186U);
    msg.setDestination(37636U);
    msg.setDestinationEntity(3U);
    msg.type = 45U;
    msg.speed = 40549U;
    const char tmp_msg_0[] = {-9, 24, -61, 17, -105, -107, 49, 52, -28, -38, 7, -31, -87, 54, -76, 84, -99, -45, -58, -72, -78, 57, -48, -65, -82, 43, -79, 22, 118, -98, 66, 86, 52, -34, -14, -78, -21, 55, -122, -100, -46, -81, 48, 18, 11, -65, -85, 23, -90, -20, 15, 123, -74, 80, -108, 122, -122, -117, -41, 125, 33, -50, 91, 0, -128, 73, -95, 116, 80, -31, -52, 24, 85, -89, 54, 33, 71, -42, -79, 13, -6, -4, 97, -67, -52, -52, 29, 77, 12, -107, -10};
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
    msg.setTimeStamp(0.840256802434);
    msg.setSource(16751U);
    msg.setSourceEntity(178U);
    msg.setDestination(51191U);
    msg.setDestinationEntity(241U);
    msg.type = 140U;
    msg.speed = 6611U;
    const char tmp_msg_0[] = {66, 98, -115, 39, -48, -86, -55, 60, -59, 64, -83, 82, 49, 30, -20, 7, 37, -72, -113, 75};
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
    msg.setTimeStamp(0.81600579324);
    msg.setSource(59093U);
    msg.setSourceEntity(166U);
    msg.setDestination(19674U);
    msg.setDestinationEntity(131U);
    msg.type = 75U;
    msg.speed = 19888U;
    const char tmp_msg_0[] = {-109, -89, -62, 40, -120, -32, -61, 125, 24, -72, 31, -41, -58, 8, 12, -44, -7, 104, -81, -26, 51, 54, -98, -22, 60, 48, 121, 66, 88, 78, 26, -14, 1, -114, 84, 113, 69, 81, 94, -5, 34, -98, -107, -59, -9, -101, -92, 44, -64, 121, 64, -97, -78, 121, 89, -66, 105, -110, 64, 3, -66, 51, -86, -111, -96, -119, 104, -68, 84, 65, 17, 1, -70, 33, -118, 25, 35, -74, 4, 79, 6, 92, 108, 41, 60, -83, 50, 89, -118, -70, 36, 89, -10, 64, -67, 123};
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
    msg.setTimeStamp(0.0112682145925);
    msg.setSource(47575U);
    msg.setSourceEntity(204U);
    msg.setDestination(40766U);
    msg.setDestinationEntity(206U);
    msg.op = 69U;
    msg.tas2acc_pgain = 0.956443744587;
    msg.bank2p_pgain = 0.530865351406;

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
    msg.setTimeStamp(0.891999065121);
    msg.setSource(57353U);
    msg.setSourceEntity(212U);
    msg.setDestination(16005U);
    msg.setDestinationEntity(29U);
    msg.op = 104U;
    msg.tas2acc_pgain = 0.501594360903;
    msg.bank2p_pgain = 0.149379101806;

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
    msg.setTimeStamp(0.158326019592);
    msg.setSource(6394U);
    msg.setSourceEntity(38U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(180U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.0774709138023;
    msg.bank2p_pgain = 0.966219212039;

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
    msg.setTimeStamp(0.803374759704);
    msg.setSource(58117U);
    msg.setSourceEntity(99U);
    msg.setDestination(699U);
    msg.setDestinationEntity(237U);
    msg.available = 1149141752U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.698848052877);
    msg.setSource(15241U);
    msg.setSourceEntity(171U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(128U);
    msg.available = 3412788130U;
    msg.value = 151U;

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
    msg.setTimeStamp(0.441469460099);
    msg.setSource(61045U);
    msg.setSourceEntity(196U);
    msg.setDestination(5533U);
    msg.setDestinationEntity(251U);
    msg.available = 3842249317U;
    msg.value = 221U;

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
    msg.setTimeStamp(0.978503909114);
    msg.setSource(63686U);
    msg.setSourceEntity(63U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(106U);
    msg.op = 54U;
    msg.snapshot.assign("MYANTTOHVNJDOYIKWIRUZTQHMAOWLXPMJJUXTEATYGRVFH");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 5U;
    tmp_msg_0.step_number = 214U;
    tmp_msg_0.step.assign("NBZDALCNRZBNUANJQEFWMYTZARESAATRDVDTBTOHKHQAOSXKWXCZVJSUUOETZFSMQRBCRAKUNFHIQLMOYUCBFPKKXMRDJNSDEVVDGPWODTECUILVVJIGZFSHQWBCLLFQKFURCLXFGGSHHJMJEPPGTPMUIYWCYVYHOZNJENLGQBWLTNUBKWKAFQAXMSSEQLHPMBPHIRWIEWHXKOTYIRDRWVVYFOGCEXPJMUZXJYGGZTDNDGILIXYOISCXJVAYZ");
    tmp_msg_0.flags = 10U;
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
    msg.setTimeStamp(0.850651679439);
    msg.setSource(23143U);
    msg.setSourceEntity(122U);
    msg.setDestination(54753U);
    msg.setDestinationEntity(96U);
    msg.op = 216U;
    msg.snapshot.assign("GGIYIXCCRCRBBDUFWWXEQPZMSBSWFPNCDZHVEOPRBMEKIFYLGQMHOOGLEJANJNWKKIMSGNGWZPZRTDHOGIMKBLBFLVSSKFQBCUNXTMTVSHSEQNCDQNJNOVYIVAYTQAKYKRUYBPUHZUULVTXDRXTBSPYTRZVXWJNQDGPEEOFUMRWLSJFYVHPUEMUHUJOWAXKTGBYFSGCCZXHRAQJ");
    IMC::PathControlState tmp_msg_0;
    tmp_msg_0.path_ref = 1952399703U;
    tmp_msg_0.start_lat = 0.759830673495;
    tmp_msg_0.start_lon = 0.69188226646;
    tmp_msg_0.start_z = 0.633528210611;
    tmp_msg_0.start_z_units = 211U;
    tmp_msg_0.end_lat = 0.914086697584;
    tmp_msg_0.end_lon = 0.754538700802;
    tmp_msg_0.end_z = 0.452361909936;
    tmp_msg_0.end_z_units = 188U;
    tmp_msg_0.lradius = 0.894791524959;
    tmp_msg_0.flags = 223U;
    tmp_msg_0.x = 0.309076996472;
    tmp_msg_0.y = 0.963038096554;
    tmp_msg_0.z = 0.24673281771;
    tmp_msg_0.vx = 0.238154909704;
    tmp_msg_0.vy = 0.86023053998;
    tmp_msg_0.vz = 0.898621219941;
    tmp_msg_0.course_error = 0.585561682957;
    tmp_msg_0.eta = 4200U;
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
    msg.setTimeStamp(0.977500647986);
    msg.setSource(43611U);
    msg.setSourceEntity(73U);
    msg.setDestination(48579U);
    msg.setDestinationEntity(220U);
    msg.op = 65U;
    msg.snapshot.assign("MSCAOGABXSDRWUDPQBCLZDTIDVZQBAJWOEEKGYSRXKHUFFRVZALGXGXYJZCQBDYHVYPLYRLMYIKHJOIKEGTUCDLUVANNSLOXIBLCMSHPCECVWNPASAMMGJDWZIHFKIUNVFWRXDYKVMTVTMORFZXUGINCYFFXYPVHUZEEIJSPOUJMBEFQRYXBKQOPCTBAGQKPPJNTNJ");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("YWHZEKZKCUUVSQRUNXQSCMBHXSMDXNJYBJCNYEIOTYUZSLYZUPPQYBLWGZUJJXWGNRQIXOEGFARWMRGVHCUNVVJAYDDZTLCQFHPQJOPSQVEWOSAPTEIYJAWUIVALDBJJFRWIQHALHMSIRWKNHLMKPZMRSCB");
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
    msg.setTimeStamp(0.388975828481);
    msg.setSource(7992U);
    msg.setSourceEntity(236U);
    msg.setDestination(35207U);
    msg.setDestinationEntity(172U);
    msg.op = 223U;
    msg.name.assign("UTCHFRYTZUYSWGIEBFBMITSDXGQBVNEPCADYZAGQIQJNXTPGIMAJCUBZXQFVCRRAJAOHHBGFUHYOLOFTJDVYRVVEWFKWMBOCVYKELSEPETWN");

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
    msg.setTimeStamp(0.0358214232399);
    msg.setSource(56519U);
    msg.setSourceEntity(89U);
    msg.setDestination(14156U);
    msg.setDestinationEntity(139U);
    msg.op = 114U;
    msg.name.assign("ADEQLCWAJBBWXEZYJ");

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
    msg.setTimeStamp(0.893196453539);
    msg.setSource(27438U);
    msg.setSourceEntity(206U);
    msg.setDestination(5616U);
    msg.setDestinationEntity(63U);
    msg.op = 197U;
    msg.name.assign("IMHKWDYUFIHLHOZETKIOHPWSADUMAETQXNMDQRVNGJPKXWEIZCJBSDNJYFNQTKCPJRHUGNJHALYESGKMKOWFVSDWRDHRBNGUYARBZPTCHM");

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
    msg.setTimeStamp(0.551213081322);
    msg.setSource(57580U);
    msg.setSourceEntity(175U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(89U);
    msg.type = 16U;
    msg.htime = 0.0323139711426;
    msg.context.assign("BKYQTWWCNGUDUTNRDVJKPNDWTPLWISFWMNAIPSHTUSECJZZOWPTJQYYOABVSHMUFDZLPBNJABAEKFQHCPKPNCTAZXRODDWGBGGGWSJCRLTXCWIYPJUQBINLQERIYRMMYRJFDXOZCFEUSBAZMKYFEYBRTJLTLHVXSQMEKOU");
    msg.text.assign("DWFCEWAXIQZLCMUQZXUNSCUDEPWFTDREDERCQTDRVXTRYAVLKBQIZKLRZQXYIMFPHMEWKVXBRFITNIJOBATEAVHIWEUGMAFBNOPVPGHHQJLJCKFKRSZVUJHJNLKUOVDBYDMGVCGSPDYKWCPNXFZNCWUOOBBHPFITYRDGXFYL");

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
    msg.setTimeStamp(0.305961373945);
    msg.setSource(48964U);
    msg.setSourceEntity(91U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(7U);
    msg.type = 150U;
    msg.htime = 0.189282748259;
    msg.context.assign("MPVIDGQFWYUOORYHJXHYMULKNEJHDXISWPINIXZFPWZKIAJUCZRAHVLZBVOJVVFVRCOQTHUXXAPWPGGWMJPMQFSKZDBYWBHPKCMQNYREYWTDNDBKPUGEDJQFJUCKZNOSRGJGVFSRCRTZLTVXXQVABEITVLDFQKJAHYWLHHYMMELUKOCIMDXSCZBTITOBPANLFMHNCLTBDOBFESUNIASPEIBTK");
    msg.text.assign("SYZPUGLADEDENRUZWJRUSTCFIRFSHRGCNLSKVDX");

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
    msg.setTimeStamp(0.638222801754);
    msg.setSource(51727U);
    msg.setSourceEntity(129U);
    msg.setDestination(28772U);
    msg.setDestinationEntity(222U);
    msg.type = 123U;
    msg.htime = 0.127216061158;
    msg.context.assign("VSWBBWKIYMVGVTDNYPCCTVWRGFKDDKJKJPPNATFVHDBBCTBRGYVUEUZGGTPEGQWMAWQJJXRLANKXORBRATNDGIOOHMCSQNKZLOLLMZLUEJOQZBOHXZEGRETOFZCJZSXQFKYIJX");
    msg.text.assign("GCKXMVFHQEMGHLQPMUAIQNZYKVGTNJYRDGREOOWXKSYUGHDTEPXUWLHVCQXLSUHNTMNBVMUAUWDWQLCJZGYTKEKXVPOJDEXMTSCVBNIHAQRJKZHEFZTWUIRSPEAXOTNGIOKKJBAIYDRZCLYFCFBALKWJDLDSIANSMSUPOQOWRHPBMWGEQRVBYPINDXFVZTHDFUDFFHJKQLOSYOWIFCGCALIOBI");

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
    msg.setTimeStamp(0.393707743855);
    msg.setSource(28928U);
    msg.setSourceEntity(201U);
    msg.setDestination(41132U);
    msg.setDestinationEntity(53U);
    msg.command = 13U;
    msg.htime = 0.67082692429;

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
    msg.setTimeStamp(0.866704903686);
    msg.setSource(52751U);
    msg.setSourceEntity(3U);
    msg.setDestination(33639U);
    msg.setDestinationEntity(56U);
    msg.command = 155U;
    msg.htime = 0.490581636976;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 71U;
    tmp_msg_0.htime = 0.418924287557;
    tmp_msg_0.context.assign("PSQBLBMCGLTGAHJUMXPNAKMIEFOXGPNHCBOKZHDRBKZKNQCXCPVBKLVXTJIYTOFAGRDLBMECZYXEYTHUHXYPWKPDFJNBDGCVBVUEZSQADSATEDIXJMRLWAAXERMZLULYKGDXSWJFJODUISFHHRVCKCPOSVWNOJDAYZFFTUFKGWMLXISUWUGYWRJHYNRIOVNOCNISWKDWNVLTQLIMQBAZHRBEPGZWJSETQSQMIJP");
    tmp_msg_0.text.assign("VQMTPZXNATYYHJTFSCVVEHXIBCLTWEKODUBPHQMOGKTFDGXRJZWOZRBTHWBAGERFMEJDHZOFUQPIGSGUMSDPJCEVYZBGLYCGKKXFLM");
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
    msg.setTimeStamp(0.831716887126);
    msg.setSource(48860U);
    msg.setSourceEntity(251U);
    msg.setDestination(62360U);
    msg.setDestinationEntity(63U);
    msg.command = 19U;
    msg.htime = 0.764878819028;

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
    msg.setTimeStamp(0.543341455592);
    msg.setSource(33415U);
    msg.setSourceEntity(208U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(6U);
    msg.op = 211U;
    msg.file.assign("XOIEGPJBETBNEDKFQVWBBFORSTWXRZYZQZMSMDKRQRGGKNLJAUUCVOSPNWYMCWMILUQIHMHLJGJLYPCKWVALLSOSGVHNFQCMKATCAVKDXZXYEYXRENSLTWHAEZAZPJTKGDMFGVYEYFZUPIEXKPJUWOVBUIFADIOMRFEHCQDLCQNOTWQRYTDDAFUTJKBOVBSAQZUFNJVHUMXBZCWPNLINO");

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
    msg.setTimeStamp(0.360488676131);
    msg.setSource(3948U);
    msg.setSourceEntity(70U);
    msg.setDestination(27089U);
    msg.setDestinationEntity(247U);
    msg.op = 230U;
    msg.file.assign("JQCVHNCPEDYFDUBKWDMAELXISIFUQKWZFWYSYYFVTPCNPDHMGEBHZYFUGJQZMCOIFMRIPLJKBKSQGISAXZCNVAIMEORQWPLJXOBKVEYNJOGSJALHXGSVDMOLRLRDAYBWWHBMUMSOCWUVDICKNGASJRIRCYUBUPSNCXHGYQXTYKNEDXZUEORHBVRDAVNXIQJQLLPVWTATNVSHOKFFPWZAUAGPLFEXDREZHTMCHUTBLTZQZXJWPZMKTIBTJG");

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
    msg.setTimeStamp(0.463610120539);
    msg.setSource(30024U);
    msg.setSourceEntity(159U);
    msg.setDestination(5866U);
    msg.setDestinationEntity(169U);
    msg.op = 210U;
    msg.file.assign("OZEMHLBHNXMJPLHKJSZDIJGJGNNEUOAXHDEMFVPDTWNZ");

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
    msg.setTimeStamp(0.080778446429);
    msg.setSource(57284U);
    msg.setSourceEntity(153U);
    msg.setDestination(58974U);
    msg.setDestinationEntity(169U);
    msg.op = 223U;
    msg.clock = 0.476346296355;
    msg.tz = -118;

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
    msg.setTimeStamp(0.341215778573);
    msg.setSource(18357U);
    msg.setSourceEntity(151U);
    msg.setDestination(13255U);
    msg.setDestinationEntity(61U);
    msg.op = 29U;
    msg.clock = 0.127527292406;
    msg.tz = 123;

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
    msg.setTimeStamp(0.946940416001);
    msg.setSource(33425U);
    msg.setSourceEntity(208U);
    msg.setDestination(16494U);
    msg.setDestinationEntity(26U);
    msg.op = 117U;
    msg.clock = 0.961028703234;
    msg.tz = 52;

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
    msg.setTimeStamp(0.460799181621);
    msg.setSource(58717U);
    msg.setSourceEntity(196U);
    msg.setDestination(41502U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.854608108385);
    msg.setSource(39157U);
    msg.setSourceEntity(44U);
    msg.setDestination(20003U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.29217606369);
    msg.setSource(53203U);
    msg.setSourceEntity(8U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.547300896445);
    msg.setSource(30493U);
    msg.setSourceEntity(120U);
    msg.setDestination(25414U);
    msg.setDestinationEntity(175U);
    msg.sys_name.assign("FLARWXPJKUBGAIIIZBSGHBPDCEMOTZCYQXCVQWDTAQFCCTNYOSATUZNHYKMTJWHOIRFXVQWQLYNOJGWEVQLOSCVBLSUQAPLATUMRGGMZMOSPZZRRVHIRRDGZTJXPLKYXIHFNQXUVECCUAXEUNRHWXKDUTUPZQAKFLSHQEKBEOZBXGGPYRSJSMOSBYNEPVZVSBDWK");
    msg.sys_type = 211U;
    msg.owner = 38710U;
    msg.lat = 0.548786058244;
    msg.lon = 0.236614833514;
    msg.height = 0.1187570893;
    msg.services.assign("ROSUKBGNCIYVKNWGGZLSXLMNSYWGKPCGWQDCVAWJTDMFEVICELMUMLRTBSSAQFVHUTPOARZVPQZAXERQQEZHKJKTNIRTZYPIBEYIIATRBPINKWHXLFTNZBBNZUPDLJDEVQXOBHOFWCWGPWMUSXEFDKAEYMJFXYDFOFRAONLUQVBZAYJGRUMBOMKO");

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
    msg.setTimeStamp(0.0246328160457);
    msg.setSource(63622U);
    msg.setSourceEntity(73U);
    msg.setDestination(48718U);
    msg.setDestinationEntity(76U);
    msg.sys_name.assign("CDYVETFWTVDLPRDVJSNJHRMLV");
    msg.sys_type = 166U;
    msg.owner = 28044U;
    msg.lat = 0.042725159914;
    msg.lon = 0.622305782981;
    msg.height = 0.964931688411;
    msg.services.assign("FPZMBUGJTIEDYVFIQSMPCSLMAZHXIRUWOATOJVMVPZKRELSHQEJGBAKMOEVUHZNBSYKGQNZCFHOVOKHEALSEOMBXDYUWWHLBBIPQISAWCZAHRSMDGHYCG");

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
    msg.setTimeStamp(0.193739523976);
    msg.setSource(42374U);
    msg.setSourceEntity(53U);
    msg.setDestination(64503U);
    msg.setDestinationEntity(13U);
    msg.sys_name.assign("HSAMYRFFWULCRWSSILJMNPRZNBXRJUAXJWCGLENUBVZKXMHNTPBFCVZYNUAMUQDQYMLVDPQJEHWYHHYFQPOGPSDAHLYCWNENAXBOMNBXAHQOEKOBKGREXBEKXCZLGKVMOLLPOKESWCCEJVVDEITYUIARQLHFFSMPTG");
    msg.sys_type = 223U;
    msg.owner = 30650U;
    msg.lat = 0.212576243581;
    msg.lon = 0.17094015252;
    msg.height = 0.15240056089;
    msg.services.assign("HALFAGHAEGGCODKXMHUQCPLYUVRZFGOHXTHZFWZTESMTEWENVMKEOXONPUIAILEQOGXFIIANPCYJSWKBAZZQBRIYDJGCTKRNDKGDTQCTYKVLSXCYEZKFSJHTAFMVSVGWDBAGSNXPYJQQIUMOXBVWYNJKTLWVLOIWQIMGRYJIJRRNQVFQXBFCY");

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
    msg.setTimeStamp(0.569037587024);
    msg.setSource(29770U);
    msg.setSourceEntity(214U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(16U);
    msg.service.assign("RKTFYROIZSUOLIFLBNEIFAZOJPWHGEBLQROAVJCKKVZNSZNHAJNKAEHZCACWGFBGEQSPVLSXDYGHGENTWUGCHJBPHDPUYFHOTMCJCJADTUJUGZNVGQCNWFYSTOCSUVBDPTENAXGEIZIPUPSHKNZVOWEGZFSIDDYADMJLRDWJSYALQCKZJXVBPOBQTDQRWQCBT");
    msg.service_type = 177U;

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
    msg.setTimeStamp(0.740819177964);
    msg.setSource(42907U);
    msg.setSourceEntity(85U);
    msg.setDestination(50822U);
    msg.setDestinationEntity(84U);
    msg.service.assign("BFPMLJQDDMIGUTVNZBRUFGGCXWZZWUMUDSKHONQSKGXRRCHAYTXTOOWNZSSYIDYWJZPEHRBDSYDUTPNQKEAVKCDUFVNINAYFVTGBQRNMXTXLFESINTARXJJXNGLDERUKWGVYSSLGRJOJYAOBQWMVPAZGWALHIJJFKBMCPCLKONFIL");
    msg.service_type = 153U;

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
    msg.setTimeStamp(0.279799791803);
    msg.setSource(32855U);
    msg.setSourceEntity(79U);
    msg.setDestination(59777U);
    msg.setDestinationEntity(159U);
    msg.service.assign("DYXRGQKTUASWRPYVBIATMIEMBZNLIMJHCDGDGVSFNSRNELOAYDCYLRIZJOLZFASVGQDEPCCISHEOXNQBRWHNPCIKGUJQAPBGRKUXATQXFIXPCSGPHTRKXHEVJHJAGUWFORSVPEUOCBIHZEBTCWMSANPOTADMONELHVWSFDFCFMXWWCBUDEKIQZMVLOYJTTFXQUYQQZKX");
    msg.service_type = 188U;

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
    msg.setTimeStamp(0.505606544132);
    msg.setSource(47660U);
    msg.setSourceEntity(236U);
    msg.setDestination(9542U);
    msg.setDestinationEntity(87U);
    msg.value = 0.817055848453;

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
    msg.setTimeStamp(0.286912997826);
    msg.setSource(64864U);
    msg.setSourceEntity(184U);
    msg.setDestination(43668U);
    msg.setDestinationEntity(19U);
    msg.value = 0.866032902726;

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
    msg.setTimeStamp(0.736726526161);
    msg.setSource(10007U);
    msg.setSourceEntity(227U);
    msg.setDestination(25373U);
    msg.setDestinationEntity(12U);
    msg.value = 0.445064622382;

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
    msg.setTimeStamp(0.796295825088);
    msg.setSource(52054U);
    msg.setSourceEntity(204U);
    msg.setDestination(45602U);
    msg.setDestinationEntity(221U);
    msg.value = 0.176944111745;

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
    msg.setTimeStamp(0.35097823796);
    msg.setSource(12207U);
    msg.setSourceEntity(147U);
    msg.setDestination(37109U);
    msg.setDestinationEntity(114U);
    msg.value = 0.299558687904;

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
    msg.setTimeStamp(0.464803934256);
    msg.setSource(29729U);
    msg.setSourceEntity(155U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(169U);
    msg.value = 0.111594772226;

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
    msg.setTimeStamp(0.317051686835);
    msg.setSource(39024U);
    msg.setSourceEntity(158U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(66U);
    msg.value = 0.985274731545;

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
    msg.setTimeStamp(0.167381659404);
    msg.setSource(62813U);
    msg.setSourceEntity(19U);
    msg.setDestination(51218U);
    msg.setDestinationEntity(31U);
    msg.value = 0.928556432561;

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
    msg.setTimeStamp(0.818970574695);
    msg.setSource(16748U);
    msg.setSourceEntity(76U);
    msg.setDestination(55410U);
    msg.setDestinationEntity(0U);
    msg.value = 0.993105168954;

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
    msg.setTimeStamp(0.157234022541);
    msg.setSource(28050U);
    msg.setSourceEntity(130U);
    msg.setDestination(1167U);
    msg.setDestinationEntity(160U);
    msg.number.assign("ILWVGUSBNQUKGMRJCUKTXFLZBTEELHWDHPIPGSTDGFKOFRFPHXDWOKURPGNMSDJDAXSFTBTMSWMOEUHAAXWSZZYRCMAPIJGQDEYHFYYZAMVFRORTLIAWVYJNEJMPMEULBKSPNOYZTYQTNRAUWODHGCDXSHOZUDMNOQUWGXBC");
    msg.timeout = 52004U;
    msg.contents.assign("LGKTQUEBCGFPNCSWBOGVKSAZRUIVVGWZBEICWLHJIAFBHQYRETNDTJSCZYSDBSFWDAPFOMHHFRMJBJTIGNAYYXGIEBCFVRRGHWXCJMXNWUVUMHZLHKNRFOPTYYGBTTZTQXFJEHLQNHDZFCUAAUIQIKLZRPFOMQILKVAEUKZYRYPLJNAPNDMDKKSLWBOMWITHSUOZDANLECMI");

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
    msg.setTimeStamp(0.16954966349);
    msg.setSource(2486U);
    msg.setSourceEntity(247U);
    msg.setDestination(63108U);
    msg.setDestinationEntity(48U);
    msg.number.assign("FMWEOINDESTTURHMFILKDGGEQMEWNMYPVOAGEDKEGIZWKGMATHZPBGQWPBVGZVAJLRDBXLKKGSIFTJPQZZJOTFVIQSCNNQHADDCFESHBALDAOXMWBZSZYIAUYRTXROPJEZQUNTBXKRPNUYHCOFKHWTSLXAPNYYWAXLBCJVRHMEYPCYGCQXTLKPSVRJOJZIBVGFCSDHDFVBHLOJFOKQCJSRNTQCCNYQWRWKDIINXMPLEUUURBYVXXMOHMIUJ");
    msg.timeout = 60361U;
    msg.contents.assign("YMHGOKLIZUVXGTQEJBBNTJPIVAMSICQWRXCGZRQUWPAYOJTEDOFUCHPZPLNBWYPQKCLKMTQELAYBORCGYZXSKMSUUZLABMVPALLYPQGFCXVUPECFAZNWOFNWBBDDYJWOTBHNDSSDMKADTZYIRSITKU");

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
    msg.setTimeStamp(0.506911100598);
    msg.setSource(38270U);
    msg.setSourceEntity(158U);
    msg.setDestination(49068U);
    msg.setDestinationEntity(88U);
    msg.number.assign("FBHROTNVOXHFQUUADOJRAQEVEFXRVAGSYAJMJYUQZNLWMHFDJCCPWVLNO");
    msg.timeout = 251U;
    msg.contents.assign("NWHNKXAQNWKGPVMISIOEPAQGZRLJSUHMDNTPRKVBHIGAUHLFCRXGZIWTWYUPKRFNFNXJLSKPDTZTBELQSUCQNZEMMCJOJABKJEGOYDFMQKZQCYPBWB");

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
    msg.setTimeStamp(0.667091956299);
    msg.setSource(41883U);
    msg.setSourceEntity(43U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(250U);
    msg.seq = 369987422U;
    msg.destination.assign("NLWMBRTVOEOLCPTGANPFYCEPKCZRRMITFHWHQGZCEKESQWKVCWZDOVVKDLZSOMZDPAXEUIQGJLOOSCSDRUQMHJUZYVARPDLQOCSDERIHWRYJBTTATWQPTXCVDLMJYBUXVIBNQMJBJGXJOXNHYFALHJGPGDLIBUOASFSHUVEYTASKNLZQUFYQFFEZMBNHBNDCXUWYAIQNIPPFKGSKYVRKWVOTBZZJFUGEXWMYNHUDRXMJIA");
    msg.timeout = 53153U;
    const char tmp_msg_0[] = {21, 10, 83, -75, 50, -95, 85, 45, -127, 83, -63, 14, 62, 92, -6, 110, 101, 101, -38, 71, -107, -76, 114, -86, -49, 42, -5, -19, 25, 39, 20, -110, -91, -10, 95, -95, -94, -109, -67, 107, 51, -1, -105, -112, -87, 122, 6, 17, 58, 124, -98, -126, -55, -6, 0, -72, 33, -64, -77, 104, 82, 42, 102, 104, 0, -11, -21, 60, 70, -17, -6, 124, -69, -79, -86, 79, -35, -40, -67, 101, -47, -71, 124, -30, -106, -99, 33, 62, -118, 60, 101, 39, -46, -96, -18, -124, 92, -68, -15, 7, -8, 94, 95, 91, -83, -52, -88, -92, -67, -75, 97, 125, 51, 44, 40, -89, 124, 69, -96, -80, -117, 43, -88, -127, -71, 43, -25, 53, -84, -26, 122, 8, 91, 16, 101, -111, 20, -59, -29, -99, 76, 30, -22, 38, 87, -103, 80, 21, -45, 54, -14, -24, -72, 85, -45, 6, 59, 27, -21, -57, 81, -8, 40, -81, -63, -92, -49, -73, -68, 47, -92, -94, 89, 86, -1, -43, -52, 0, 38, -100, -50, 3, -75, -3, -39, 26, -85, 96, -126, -103, 32, 56, 75, 120, -89, -82, 115, -87, -70, 106, -70, -120, 52, 55, -56, 51, -110, 93, 112};
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
    msg.setTimeStamp(0.884923788844);
    msg.setSource(8859U);
    msg.setSourceEntity(124U);
    msg.setDestination(49519U);
    msg.setDestinationEntity(23U);
    msg.seq = 1953355321U;
    msg.destination.assign("NCSSMTBCOWLGMAPKDPJPTLRLRQHJZUQCYEBDIYDSXIEEPOGDDVDOAFQNTIWYBSKANMATWX");
    msg.timeout = 52106U;
    const char tmp_msg_0[] = {-90, 103, 68, 46, -39, 108, 123, 56, 53, -46, -87, -47, -100, -127, -1, 21, 28, 48, -60, 21, 24, 122, 20, 2, -89, 85, 21, -80, 105, 44, -125, 98, -82, -25, 95, -2, 54, -24, -8, 34, -86, -51, 32, -65, -91, 87, -43, -97, 11, -10, -60, 3, -4, 9, -34, 96, -83, 75, -118, 112, -4, -68, -112, -6, 97, -72, 88, 86, -65, -21, -98, -116, -28, -69, -84, -101, -20, -92, 91, 116, 87, 118};
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
    msg.setTimeStamp(0.253979380355);
    msg.setSource(3815U);
    msg.setSourceEntity(87U);
    msg.setDestination(37113U);
    msg.setDestinationEntity(140U);
    msg.seq = 4234534153U;
    msg.destination.assign("IFYKTPKODQVZZOHJEJBHNNUDEMABSVPIGOIRDWCIU");
    msg.timeout = 55341U;
    const char tmp_msg_0[] = {-41, -9, 124, 63, 80, 27, 23, -93, -33, -108, 100, 115, 50, 9, 7, 31, -33, -111, 78, -36, 126, -90, 69, -39, -39, 71, 117, 105, -126, -59, -2, -40, -120, -6, -96, -120, -113, -37, -71, 102, -32, -26, 96, -22, -109, -54, -92, 102, -90, -61, 29, 58, -96, 19, 60, 15, 32, -96, 46, -84, 118, -105, -31, 126, 82, 101, 97, 57, -96, 122, -52, -23, -7, 52, -20, 55, 0, 119, -41, -103, 114, 83, -37, 75, -67, -6, 65, 21, -81, -51, 56, 1, -85, -61, -126, 27, 117, 36, 103, 14, -47, -118, -104, -16, -30, 101, 41, -43, 86, -37, -90, 29, 126, 123, 110, -86, -57, 45, 110, 57, -86, 34, -69, -37, -73, 4, 46, -122, 13, 80, -19, -76, -7, -33, -59, -125, -38, 34, 83, -79, -119, 49, 30, -88, -79, -49, -123, 78, 29, -25, -63, -48, -94, 0, -8, 115, -77, -86, 99, 64, -96, -95, 119, -126, -12, -73, 52, -8, -41, -57, -13, -77, 29, -67, 73, -73, 66, 28, -96, 36, 112, 28, 122, -64, -73, 23, -102, -45, 54, -121, -115, 10, 82, -14, 94, 38, 36, -50, -33, 3, 99, 74, 64, 117, -30, 79, 23, -109, 97, 39, 35, -4, 44, 23, -37, 59, 32, -53, 42, 14, -64, -35, -32, 75, 73, -113, -82, -24, -59, 44, -65, 82, -44, 47, 124, -47, 94, -115, 116, 111, 69, -88, 7, 53, -75};
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
    msg.setTimeStamp(0.0684766081372);
    msg.setSource(30266U);
    msg.setSourceEntity(168U);
    msg.setDestination(47294U);
    msg.setDestinationEntity(118U);
    msg.source.assign("EVEFFYWMYRODHVGXXXGBCSVUPESKLWPPOCYUSAUQEMDGKEHLOXNSJLDCYPZYRREWGFLBHUQMCDPBVMABZFS");
    const char tmp_msg_0[] = {-70, -62, 41, 108, -88, -53, 12, -81, 118, 38, 17, 50, -71, -68, -68, -121, -25, 2, -60, 4, -8, 13, -35, 115, 91, 45, 104, 4, 122, -100, -74, 125, -119, 83, 54, 45, -83, -95, 94, -80, 82, -95, 56, -122, -82, 20, -21, 109, 3, -37, 8, 77, -98, 0, -40, -6, 6, 121, 107, 11, 73, 64, 54, -66, -100, 88, -68, -74, 25, -59, 81, -103, -102, -126, 119, -3, -35, 125, -64, 2, 53, 60, -72, 87, 20, 105, 7, -92, 14, 32, -67, -2, 17, -98, -128, -82, -92, -5, 80, 27, -117};
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
    msg.setTimeStamp(0.00645532598705);
    msg.setSource(20694U);
    msg.setSourceEntity(1U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(211U);
    msg.source.assign("RKFXABUDVLMZJMNAOENWKRFIZRKRDSPLXHDQGQLFUQCYJXHONDWVLZCUHJJFATHAVSTQHIWEUTLOMLBXESEPPGZFUEQCGUUYOXRYWCBPTSOIMEFQSECGJLJCNNZMSBYVBWXBAAWWINRSXKKCDBIVOGACIDTZYHUQIZYHJPPYTGEXSIKDTZDMVYXLTHJTOGZLHR");
    const char tmp_msg_0[] = {125, 28, -111, -64, -41, -57, -84, 20, 45, 17, 26, -97, -76, -68, -99, 32, -30, -54, 92, 55, 57, 114, 42, -21, 48, -102, 116, -30, 106, -26, 1, -97, 20, 113, -45, 32, -39, 58, -91, -72, 88, 57, 48, -45, -83, 96, -63, 80, -31, 41, 104, -49, 104, -49, -60, 73, 54, -104, -104, 77, 20, 61, -91, -125, -86, 22, 114, -127, 18, 55, 28, -18, -96, 64, 37, 92, -55, -126, 14, 97, -104, -88, 7, 87, -48, 8, 77, -107, 90, -125, -44, -115, -9, -54, 105, 67, 103, -99, 27, 126, -105, 51, 25, 86, 8, 125, 77, -88, -82, -108, -41, -14, 102, 67, 71, 109, -112, -48, 102, -15, -119, 57, -13, -109, 17, 75, 113, 22, 57, 106, 109, 98};
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
    msg.setTimeStamp(0.861436226692);
    msg.setSource(20944U);
    msg.setSourceEntity(133U);
    msg.setDestination(36572U);
    msg.setDestinationEntity(207U);
    msg.source.assign("ZPJUAQIUHFBVVXBCKNEAQSLCPENFMEWOJSZVDETYBKYCYFZLXIIYTZGXXDQMTMJQPHYCFAYRP");
    const char tmp_msg_0[] = {-5, 60, -84, 37, -74, -5, 126, 98, -83, 72, -12, 42, -82, 55, 109, -22, 10, -16, 96, -28, 81, 83, -84, 123, -53, -120, -70, 3, 51, 6, 109, -47, 35, -68, 6, -106, 28, -49, -8, -101, 25, 19, 80, 118, -45, -51, 58, -91, 99, -12, -46, 5, -71, 78, 116, 107, -97, 62, 74, 74, 70, 67, 67, -27, 22, 82, -44, -82, -30, -113, 77, -60, 46, -58, 111, 5, -59, 115, -65, 58, -25, 84, -116, 41, -8, -87, -67, -67, -79, -105, -118, 62, 92, 113, 69, 1, -35, -31, -8, 68, 104, -79, 100, -84, -78, 62, 4, -19, -76, -3, -76, -80, -71, -128, -30, 28, -65, -13, -34, -58, -21, -114, -30, 85, 9, 89, 30};
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
    msg.setTimeStamp(0.535828018564);
    msg.setSource(46491U);
    msg.setSourceEntity(243U);
    msg.setDestination(2670U);
    msg.setDestinationEntity(13U);
    msg.seq = 2356357201U;
    msg.state = 187U;
    msg.error.assign("JSAMQEXTEUSZIZBTORPRCBANCOUBQDSWOPMWDEFISEEEBVKQKBDKCHRDZZAPFEKCVTVXYLDYDTMLXALHDBQKAELNLOXHRCGOVTSWYSXQHMNPHJFHZTIFYGQRVRDUFCNXPGWLMIWZVATJLQYYSYIWJVKHKVYOIBPZGHZDAMUF");

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
    msg.setTimeStamp(0.293421107554);
    msg.setSource(38892U);
    msg.setSourceEntity(48U);
    msg.setDestination(31742U);
    msg.setDestinationEntity(229U);
    msg.seq = 2554020209U;
    msg.state = 19U;
    msg.error.assign("OVUOVBCQLXKROPYMZSWBMNOJGKGIH");

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
    msg.setTimeStamp(0.987990283504);
    msg.setSource(27162U);
    msg.setSourceEntity(175U);
    msg.setDestination(47769U);
    msg.setDestinationEntity(77U);
    msg.seq = 3168481544U;
    msg.state = 59U;
    msg.error.assign("ZNWWAVCDEGZSDFSPWHFFCLWRTGROUJZNSTBLJMICIRTVBMSGZWDVPRMGMJXRXKWBELYJCITIQTFFMOLVLTQPDTWEPNQJAVJVAEYQLVOSCKIMPCQKBZSNEYKXCDBIUHYBFKHFPNAUNKYIJGAUUVWPGZQUDTRFADHWX");

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
    msg.setTimeStamp(0.311128092806);
    msg.setSource(10059U);
    msg.setSourceEntity(124U);
    msg.setDestination(37674U);
    msg.setDestinationEntity(152U);
    msg.origin.assign("GTGSNEXYHQXDSCOOYKGJITQFNKWVDOWYYDRVWZMUABPDVNPWGTHMILKPVWXBFLXPYPABTMLGHWH");
    msg.text.assign("PCERNQGFEAGONOJLGMCJCXLWADZBPPTABULRDAPKUDEONEWPKQCQMJHXQPJRCBNQEUGTXZATJSYZAGQXOAOYUKRV");

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
    msg.setTimeStamp(0.969612893842);
    msg.setSource(11643U);
    msg.setSourceEntity(164U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(109U);
    msg.origin.assign("NCVOYCQJSGVSRYTRHHGRGIWCKISDYUEQKTBWEPPVWKZJPO");
    msg.text.assign("LJYFXYEMQRSWEWUICZIMNGOVJLFGVEGLJCMSNAXDVYWXAVLEOSATYRBPTHPYSNKXRHHPJEKUXVVCCHRQRDMNNPNQRTHKKWXCWEDTJDDMMYHCEQLFTIOBUQBBAZKODMAGMSOSRCXRPNVUPFPMBXOQERLFLBGJFZCDFTFDAAHPKZHXWWIHIYOZVBKKUKSDSZIQAQEFNSJYZHWRJBILFIXQSTBIGTCGOJPKYEZVIZNGUVPGTOUCMOLBWYUUG");

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
    msg.setTimeStamp(0.524194594963);
    msg.setSource(2025U);
    msg.setSourceEntity(158U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("JZQIMYZMQRXIZG");
    msg.text.assign("PSKHQYSWBHFVMOVRWLAVKFDVXIIGTNFBCCWKGOECTYZBCCERCLJNQOPDUPFKUKSMZUFGFOTYWFEZOCWKDDTHSQSIZZJHYIMANXEPGUIILMNNOQEIXOGGXLTVFQSNHLJFPZAJMHIDMQTWRUMUNHCLGYPVUQHABFXAYEUYWWUHZBDLSSAJXRRJWDBJBXMINOJRNTSVPJWJIPBVHXEKLRVKXTDLOEMZRMQLEOZERANKGAYAVSU");

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
    msg.setTimeStamp(0.363006109592);
    msg.setSource(63270U);
    msg.setSourceEntity(41U);
    msg.setDestination(40488U);
    msg.setDestinationEntity(130U);
    msg.origin.assign("QULCWWSCVYXAOELBTMFKFSVNRAKOJACZZMMNPPHGKYEYARDITERVQANIKHIRQNTNBCWICXCDXWQTUBSZBBTLBMJHPWQOUYRDMEUYESVAHRCKYZFSJAVGDJWQS");
    msg.htime = 0.701238733464;
    msg.lat = 0.871230622371;
    msg.lon = 0.446153580649;
    const char tmp_msg_0[] = {8, -99, 4, -69, -106, -118, -27, -87, -20, 3, -104, -24, 115, -69, -89, 63, -20, -45, 110, 87, 6, 5, 107, -57, -46, -1, 64, -60, -29, -98, 87, 97, -67, -45, 90, 62, 111, 96, -111, -93, -125, 19, 7, -100, -17, -10, 123, -101, 31, 112, 87, 35, -15, -45, 49, -126, 82, -49, -116, 32, 126, -122, 120, 104, -34, -115, 6, -2, -68, -25, -19, 24, 62, 66, 23, -64, 83, 119, -72, 123, -98, 7, 32, -89, -107, 41, -39, 12, -25, -32, 71, 86, 66, 35, -73, 33, 59, -83, -44, -48, 20, -12, 109, -94, 5, 76, 76, -32, 41, 56, -104, 125, 62, 34, 109, -89, -105, 71, -45, 0, 99, 115, -123, 58, -12, -60, 59, 98, 103, 64, 2, -18, 39, -48, 69, 14, 110, 13, -7, 99, 25, 88, -102, -90, -87, 59, -12, 25, -38, 66, -54, 84, -73, -74, 15, -36, -68, -30, 122, -104, 86, -74, 88, 0, 35, 88, -10, -83, 125, 114, 67, -91, -81};
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
    msg.setTimeStamp(0.225515389553);
    msg.setSource(60726U);
    msg.setSourceEntity(34U);
    msg.setDestination(21196U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("JKLNKTQVKTQDSFJFCIKPVZWDHKLRWHABGBONOTLMFPJMGKMHFOLDZWODZAUCKEERABLYBHUZIMQZXOCQUEVOMNLHRSWUWYGQASBXPJDNTOVKGDBYGCSAKIOREECNFHUMPMVTHBBWSTUZQXZNLYLUDSZTAGJCPWYRUFZENAIDPRFM");
    msg.htime = 0.798656189778;
    msg.lat = 0.738790687683;
    msg.lon = 0.265287960894;
    const char tmp_msg_0[] = {115, 105, -5, -27, 39, 39, -55, 26, 71, -57, -34, -56, 101, 74, 26, -2, -91, -20, -55, 55, 122, 123, 79, 78, -31, 92, -62, 64, -10, 44, -70, -90, -91, -93, 34, 69, 1, 78, 65, 53, -30, 48, 65, -58, -34, 100, -90, -86, 36, 83, 7, -51, 27, 63, -17, 21, -59, 83, 125, 28, 29, -61, -97, 15, 46, 104, 65, -23, 122, 71, 76, -4, 117, 7, -117, -124, 7, -8, -85, -125, 79, -122, 17, 31, -107, 124, 126, -67, 122, -2, 124, 21, -13, -122, -61, 74, 29, 35, -64, -72, 41, 107, 49, 33, 1, 34, -80, 65, -72, -20, 21, -80, 18, -57, 41, 24, -106, 42, -80, -76, -19, -52, -90, -106, -103, -31, 17, -33, -41, -59, 61, -23, 72, -110, 45, 33, -22, -118, 24, -103, -107, 92};
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
    msg.setTimeStamp(0.642941322773);
    msg.setSource(52803U);
    msg.setSourceEntity(138U);
    msg.setDestination(56391U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("JOEJETELIJQDKXHJINIVLVFNDVZRLTHWYCNZOIQSWLEAGBWONUPNUVHSYIOHJEARITNDNRMFFDLYGESTLSFEXFHXZYPOSXQBGYBZHYRAZRUFKOJBHJZESWCOQGTMKCVJNCRGCSPCQGBQIFDWAVYZDAVRMUXIGDGKAPMFTTIBUQSUVZXMUBFSPMPGWKQHICMQLWVYVKAA");
    msg.htime = 0.791055842726;
    msg.lat = 0.298656889855;
    msg.lon = 0.904372023116;
    const char tmp_msg_0[] = {30, 111, 95, 86, -73, -81, 104, -28, 27, 47, 51, 84, 116, 88, -8, 126, 71, -29, -32, -99, -11, -93, -41, -109, 122, 46, -95, 61, -47, 58, -4, 22, 86, -106, 31, 62, -39, -101, 107, -86, -28, -11, 101, -27, 44, 60, -27, -14, -100, -3, -50, -77, -98, 90, 3, 11, -102, -81, -118, -28, 53, 53, -87, -67, 66, -30, -44, -35, 48, 100, 36, 55, 75, 56, -68, 26, -114, -62, 28, 3, 15, 111, 87, 117, 103, -111, 30, 35, -4, 124, -22, 59};
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
    msg.setTimeStamp(0.560066305815);
    msg.setSource(35690U);
    msg.setSourceEntity(58U);
    msg.setDestination(65248U);
    msg.setDestinationEntity(235U);
    msg.req_id = 6293U;
    msg.ttl = 27747U;
    msg.destination.assign("FEIHDAECHMQZKTPBIBBQKHYIQAQYYGXSFTENKIACDOFQUZSXRNEQHRNYRXWUEXQPRUPWNBDHICBYWMKYJSCKCDTMBSVJPEHXXSEZISYUUGIARAPONWCJOZVFTAPLAMNXDLYPBJKLVSRUALPDTTBPKGIUTZDOYJWFMJNZRKUEZXVFOGVUDTRZLFRHVFDGZAEKWBHVKSWLJBTAGCVQ");
    const char tmp_msg_0[] = {-90, 8, 62, -26, -94, 1, -113, -23, 46, 17, -5, 78, 27, -72, 21, 19, -64, -116, 23, -102, 23, -86, 25, -75, -35, -123, -10, -61, -122, -119, 16, -6, 122, -98, 16, -26, -82, -25, -43, -102, 104, 66, -37, -53, 92, 0, -43, 7, 41, -29, -57, 53, 25, -59, 20, -83, -72, 101, -14, 1, -26, -21, 35, 70, -18, 25, 40, 15, -86, -91, -109, -70, -64, -23, 111, -128, 58, 117, 57, -89, -87, -19, -126, 6, -89, -65, -76, -74, -30, 107, -93, 55, 21, -115, 113, 73, -118, 68, -35, -106, -31, 56, -7, -37, 61, -26, 66, 49, 15, -33, -112, -43, 24, -105, 68, -19, -126, -92, -85, 41, -50, 45, -116, 30, 95, -55, -104, -102, 11, -123, -12, -61, 6, 28, -51, -116, 32, 15, 107, 31, -24, 108, 27, -54, -8, -75, -56, -120, 101, 30, -78, -96, -42, 86, 103, -128, -77, -77, 57, -37, -19, 82, -18, 49, -78, -94, -62, -119, 45, 11, 85, -10, 33, 118, -98, 21, -19, 43, 19, 4, 3, -57, -41, 55, 22, -43, -90, 70, 29, 26, 6, -29, -112, 40, 6, 78, -119, 76, 60, 70, -85, -9, 106, 79, 86, -4, -92, -23, -88, -37, -2, 98, -23, 49, -117, 91, -102, -85, -97, -102, -61, 76, -15, -10, 49, 46, -6, -102, 16, 78, 45, -112, -32, 83, 57, -69};
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
    msg.setTimeStamp(0.825762093435);
    msg.setSource(18502U);
    msg.setSourceEntity(85U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(233U);
    msg.req_id = 1554U;
    msg.ttl = 29425U;
    msg.destination.assign("XNDLHVSPEOLJPZWJWACTPMUNDTLAYNHBGPSFXQJ");
    const char tmp_msg_0[] = {51, 124, 106, -55, -24, -111, 6, -112, -106, 76, -65, 105, 16, 71, -88, -46, -121, -21, -127};
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
    msg.setTimeStamp(0.86223874157);
    msg.setSource(38054U);
    msg.setSourceEntity(197U);
    msg.setDestination(27543U);
    msg.setDestinationEntity(249U);
    msg.req_id = 43205U;
    msg.ttl = 19495U;
    msg.destination.assign("KQANVFMSDUBWSAMFMHODEEDXMTITLOGHZWJTACMCQXHKTNFMHADVKIPSZOLJUUREQXGIUGJJOEGGRXXGWTNGUDWZCNRRLJBSYJWAIZFGYQPSFAQKUYEFVZ");
    const char tmp_msg_0[] = {68, 6, -31, 20, 51, 79, 56, -55, -66, 68, -3, 106, -27, 76, -123, 29, 64, 4, -8, -71, -74, 100, -65, -9, -66, -65, 103, 86, -37, 46, 56, 48, -111, 49, -47, 103, 85, -55, -48, -21, 38, 121, 31, -15, 112, -35, -73, -126, -78, -124, -124, -4, 11, 34, -61, 112, 8, 33, -38, 124, -58, -2, -30, 124, 123, 56, -45, -119, 90, 100, -68, 121, 32, 40, 36, 45, 24, -96, 105, 70, 42, -124, -120, -82, -118, -74, -77, 3, -92, -113, -21, -65, -17, 6, 126, -44, -64, -113, -68};
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
    msg.setTimeStamp(0.945878108638);
    msg.setSource(27863U);
    msg.setSourceEntity(151U);
    msg.setDestination(24112U);
    msg.setDestinationEntity(101U);
    msg.req_id = 41392U;
    msg.status = 10U;
    msg.text.assign("ZKAIOTETNEZEOGQFGDFMXQAKWPLYN");

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
    msg.setTimeStamp(0.869016585315);
    msg.setSource(58073U);
    msg.setSourceEntity(174U);
    msg.setDestination(30961U);
    msg.setDestinationEntity(230U);
    msg.req_id = 55965U;
    msg.status = 194U;
    msg.text.assign("SCBIDVQGWJWRGTVHXASURBVTLAKALILSITPRPJGQEGYGJEBRKBWKZOVDAOTFJDWUNLSRHSAPPIZOTBXRQOXJXVCOBGCFSLZJWTEMPCTKAWNEBYOMPJMVKHXODXVREWZPIUFDJUMTXNDZUQUUWSIENXPAQCDLQACDSOXEFGGYMDILLMKFCOQCFMLRMYUNJMEQBYZPBMQ");

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
    msg.setTimeStamp(0.757028287817);
    msg.setSource(592U);
    msg.setSourceEntity(31U);
    msg.setDestination(52836U);
    msg.setDestinationEntity(234U);
    msg.req_id = 41856U;
    msg.status = 108U;
    msg.text.assign("MINIOYKENEIJIASFWQQTTGIXMODQAVUJFXKAHGXXOULZPZPAAVHIDBLVRJHASXHHVNYOQBQFNQKCXYKZHQIELGCEXDIPCZLCREEDPDWNFJUTMOOPLUWNRQFVMTWYYQBNKUTUTXMLGMB");

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
    msg.setTimeStamp(0.391169731203);
    msg.setSource(652U);
    msg.setSourceEntity(26U);
    msg.setDestination(54547U);
    msg.setDestinationEntity(55U);
    msg.group_name.assign("TJYBTSOWNBEQVSTTGXNDEQICFTBOCKHZMWVMWTFLIYYDJXQDWLFVKYPMYJWBLUUPQECAQNJOSQBEOPAZKZLSXPNWMNITNJUKHHECGXZZGAFPIDCGZXRXLTVRRRDGJFSBJQUGD");
    msg.links = 420363670U;

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
    msg.setTimeStamp(0.500211496961);
    msg.setSource(40017U);
    msg.setSourceEntity(26U);
    msg.setDestination(4622U);
    msg.setDestinationEntity(37U);
    msg.group_name.assign("WJWXHEGAVFMCDHZTZIUSBMCGVSJIMLQOUGKHSOSEPBLPIFIKAFMETRRKELDTURFEHQGLZYMMANAYOQFKZGITBENSDRUVYNULTSYHKHXQXUIQONZBRGCTBXRUUEMNOJTNKJNPDLXLCFPNVGTJLDOJIKVIVAOVICPSWMSDBRWABDSPVJQHOIVJQKQACDWRYUEPQWHDGUYFCLXTHMNFYQWCAAEAJLNXZFVFWBTSBZ");
    msg.links = 3546224520U;

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
    msg.setTimeStamp(0.048298156481);
    msg.setSource(51969U);
    msg.setSourceEntity(65U);
    msg.setDestination(40143U);
    msg.setDestinationEntity(63U);
    msg.group_name.assign("CIBUQVMSPPUUVJSELNUJZPCCQKSWZKZPDEGBICKUXEBYACOTTSYCDMANXHQFWTENZCISPQHZNWQRBIOKVTLBZZBVHYFWGDUNJTIIMTFDAERYKRKFDAFOHPYGLJXOHQOJTNQPENBCNYQSDGSWDPJKVJOZPLGWVWDMLMWFAPSWRRRXFRUMJUE");
    msg.links = 1448794622U;

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
    msg.setTimeStamp(0.195385671501);
    msg.setSource(3054U);
    msg.setSourceEntity(100U);
    msg.setDestination(28376U);
    msg.setDestinationEntity(209U);
    msg.groupname.assign("OFKGSXFCXYZEKZMXAOIKIRDCRDAYHDTPBIHPDURFOACFSSXGQMWFBOGNPJCLADXHOTUIRJBXCDDLNBLRZCYFJNWNZGPUHCSYQLJPENJOYUNWFIVKLUAJNOBBP");
    msg.action = 183U;
    msg.grouplist.assign("WWVTMEPHYSHWCNMUEHXSJOLQQOMWFQZDGFBLPJUGRALULDXDIESXPFUDHRXYMWIMSIQROOAHIXRKNSJUJAVQDTBWEIPENVHYQDAXJZHAGCVCHQYYBEMHJTLGKZMPMJZDQIVAW");

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
    msg.setTimeStamp(0.0620489932036);
    msg.setSource(65168U);
    msg.setSourceEntity(49U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(100U);
    msg.groupname.assign("LHIIFIXQPYWQVNLZCBTSEBVJOYHYKVLXKITMYRELTUWBUPPSSDTMIBNLYKFMMEFJUQCKCRFGUJGTGXBXQJDCEIJWWJPWAPOWUPAVVOEKXTODJXNXSPURTKZSUCAVACHLIVWRFBWSTYEAFDHCPORUZHOIYSHHOKYFNQACKORNLBZZDHNPFRSLQZXNGLSJEUFZLD");
    msg.action = 159U;
    msg.grouplist.assign("GBZHJNHJKRMTTQYMKIKUTPBBWHUJYVOAAIDLUCWKNKRFTPCCIDCVLQNRCMMOLYYRLEZHQAEMDPJLHJJOEIDBWRIRBFZZYSEEFILXNGFONFCQGYDZOUUKPGZBYBGPVA");

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
    msg.setTimeStamp(0.696126345407);
    msg.setSource(52693U);
    msg.setSourceEntity(172U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(215U);
    msg.groupname.assign("RVAILCCYPZDSKOCGXSIQRTLEARYXJUNPAEQOBYYCXXOZFTMXMP");
    msg.action = 14U;
    msg.grouplist.assign("NDIPSUPCZHYLWRWUIGHAVDFTLSYCYPLDJXHAVNRALQOTOFSKPFZKNDMWBQQBNLHIFQTFTALTVUDTOAMEAXUDEXNYTBUXRAC");

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
    msg.setTimeStamp(0.851405525736);
    msg.setSource(48909U);
    msg.setSourceEntity(200U);
    msg.setDestination(62812U);
    msg.setDestinationEntity(134U);
    msg.id = 120U;
    msg.range = 0.189184811056;

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
    msg.setTimeStamp(0.157820549433);
    msg.setSource(14266U);
    msg.setSourceEntity(87U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(66U);
    msg.id = 135U;
    msg.range = 0.8651659568;

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
    msg.setTimeStamp(0.419441245334);
    msg.setSource(61620U);
    msg.setSourceEntity(124U);
    msg.setDestination(12283U);
    msg.setDestinationEntity(186U);
    msg.id = 64U;
    msg.range = 0.144592255899;

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
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.0381197668063);
    msg.setSource(29344U);
    msg.setSourceEntity(113U);
    msg.setDestination(14455U);
    msg.setDestinationEntity(199U);
    msg.beacon.assign("DRYRUSHUUBDEMLRGBVQTUIGDCPLQRRRAVAM");
    msg.lat = 0.729898099646;
    msg.lon = 0.715209758462;
    msg.depth = 0.166786783336;
    msg.query_channel = 130U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 8U;

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
    msg.setTimeStamp(0.348922224667);
    msg.setSource(44904U);
    msg.setSourceEntity(110U);
    msg.setDestination(1697U);
    msg.setDestinationEntity(5U);
    msg.beacon.assign("HWTNYZDHGFXIOCBVFDNPABPAPYVYQGTKUUAGDCMIXDJBYFGRTEOMWSNLMLUCQXHXZUIAOGGWXDQQKROBHNHOMWXIJDVQIBMHJ");
    msg.lat = 0.411928928117;
    msg.lon = 0.910383713495;
    msg.depth = 0.205082340062;
    msg.query_channel = 219U;
    msg.reply_channel = 214U;
    msg.transponder_delay = 213U;

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
    msg.setTimeStamp(0.294573787736);
    msg.setSource(23733U);
    msg.setSourceEntity(107U);
    msg.setDestination(33253U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("GADLGYWVDZMXSYTOUWVMBMVZEEUKCMHNBOBUHQUFIFIRIWTLBSXBYOFAXUKMGVVGPBUSBXJMADPPFJIPIKMOVYJNGWKTPBTKJEARHEGQCTYUVDUTLQGFCANISNEEKZYKVXSGXCQXZJWVDROUSZMYNQNMREPOXQRTJIDAHGAERRWZELNFZAPIDSALKCNIDTCJWZLHWJRHZZLCAVLHYKUWFTHRQRKQXFCSXTCBHDCODBJNHEPGOYSYQLPN");
    msg.lat = 0.711967496821;
    msg.lon = 0.891059642159;
    msg.depth = 0.934012066045;
    msg.query_channel = 87U;
    msg.reply_channel = 201U;
    msg.transponder_delay = 105U;

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
    msg.setTimeStamp(0.453587329531);
    msg.setSource(61817U);
    msg.setSourceEntity(80U);
    msg.setDestination(21020U);
    msg.setDestinationEntity(179U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.0666328448581);
    msg.setSource(56579U);
    msg.setSourceEntity(148U);
    msg.setDestination(42476U);
    msg.setDestinationEntity(133U);
    msg.op = 211U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BSTOVETDYXBNAGIYOWMRJGUQYDSGCHRZHDVLJWTRUMGUQREPCOMJCUUOVFLNJCDAXMVLWKPHMWOWTC");
    tmp_msg_0.lat = 0.977758933908;
    tmp_msg_0.lon = 0.230862479366;
    tmp_msg_0.depth = 0.992090114722;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 237U;
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
    msg.setTimeStamp(0.557990629719);
    msg.setSource(42515U);
    msg.setSourceEntity(13U);
    msg.setDestination(51159U);
    msg.setDestinationEntity(209U);
    msg.op = 223U;

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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.941575268756);
    msg.setSource(7269U);
    msg.setSourceEntity(150U);
    msg.setDestination(33928U);
    msg.setDestinationEntity(202U);
    IMC::AcousticSystems tmp_msg_0;
    tmp_msg_0.list.assign("CKPMIIXAPUFWKMWJAZHZCGNWQPBVZBSBRYCXRMQGGNTSTOQNGBTCEIPSLFGFQKXZFXGEQDBKOVVHMRAUCZONNKITRSUPODOTIMYZNHANHRBZZVLJNSIEOYWPDTEWRUJWESXHRHJDAOFDORCWGKBQDMJDLMQEWUIYKVRGTWHFZTCXKBA");
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
    msg.setTimeStamp(0.264834766781);
    msg.setSource(51095U);
    msg.setSourceEntity(86U);
    msg.setDestination(53345U);
    msg.setDestinationEntity(18U);
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.447207184527;
    tmp_msg_0.lon = 0.54768842693;
    tmp_msg_0.alt = 0.801338594784;
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
    msg.setTimeStamp(0.578597244202);
    msg.setSource(25189U);
    msg.setSourceEntity(197U);
    msg.setDestination(21636U);
    msg.setDestinationEntity(12U);
    IMC::QueryPowerChannelState tmp_msg_0;
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
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.852226984072);
    msg.setSource(12273U);
    msg.setSourceEntity(45U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(96U);
    msg.op = 177U;
    msg.system.assign("AGVIJTRVQDXQCLHXLSJYKZYTUVWDZHFKMJMSNUQWYQSGFFSJRGWPL");
    msg.range = 0.145220942486;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWTLKKJSVNPNWHWLGMQACBXUIVICWNJMKKNGSQPAPQBBSKXHBQWSSMOPCDZBVCJZYQODHWNPDLNAUDXRZDZVYONIGROLLICWITBCXMHGJETEXTIJUQGZDKQTMYHWUTTSDGDVYFPREEIPZZRGBKSALAMEAIZYXAMQOVTJYJHQPOVFHYCYVEUMOWLNNIJTHNUMYPFQBKXUKSUBGECSAGWXLJEFZKIVJFEVCRMGSUFORARXFXRDFEATCBDR");
    tmp_msg_0.description.assign("TQNMWPULCGMQCXLLUZDOABTIKXEROWBSXQXLRROYDGGFMMNANEFWITVYVZHMNEJSQOWPNSEKFGWCASVFNMQCSLQBOOVXHZPRRWBFJOZBKZHJUVHXWLJQBELBLAGCPZNTIRKKYPLEPCCSTBEYVBNVMGKFYUCYNOU");
    tmp_msg_0.vnamespace.assign("DAKPVEVHFWHKWQVKTIWREUMRMIJELYMQYXQZMUZQNNBPTAHGWCCBSWZTTDXAAVFPVSBNRDMYENFDWQQYRICHTEWSECAGNBGZLHEDQHAVHKBIWAUAQJLYTHWCSONMKOGPYKEGDZPOXPCYFZNBBULFRUTJZI");
    tmp_msg_0.start_man_id.assign("YEPZOEHXTEMCGMRKWAFNUGQBTKKYPJOCGKWPDKXHOENRFNLIVIXXNUJVAXOWSSACVATDIRUHUNWMGCZZAEXASMIKDWTIQSQNYUVVDTCSBVQPYNEYZDLRIRCFOPBQJDEYPBVXYMYZIGJOBRMZPFXDFQLGLOGCHJWJFVMWQPFORSDZZOJREQGGRSDHLFABBAPTUHCAJJLWKTLHTTK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("POAANMECMHYOXDOUNGJSHUPFSRQSNJNINHQZYFLAUDVAPGXMKHHFLROBWQQCMBVSKBERJYQVJKFZBBTZDPKZRAMZMTAXWNRYOEIXKYGRKLMRBSIEGQJEPVKJCSVSPTDLFWVLQGXRAKTIZDOZORYG");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 50951U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.396538555865;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.976919175192;
    tmp_tmp_tmp_msg_0_0_0.z = 0.777147341664;
    tmp_tmp_tmp_msg_0_0_0.z_units = 115U;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.438116289151;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.854214830189;
    tmp_tmp_tmp_msg_0_0_0.duration = 36167U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.321153107866;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 219U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.160775899928;
    tmp_tmp_tmp_msg_0_0_0.direction = 34U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("THQXWEKRKQPCESAMEFOODXWVDPWNBJUNOFLVERZDZKMBZYRYBZTZGFMABUGRSOSILHOEAIBSYHDFELFCMTURHNNTOJLVDCZUBVQPSAAGMNCZIUADQKPGHQEZUFILMKRJEZNODPSRPJCGXJXIFJSQTNJIYGAGTZONEHPWDIVMWMDAYYSLBBLIHLQMXUUYJBPXUQBUTJXKFYOTTGSCGHTVMKCKVIWLVYRWYWVQXPFGCNLRXWCIRK");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PathControlState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.path_ref = 3555820382U;
    tmp_tmp_tmp_msg_0_0_1.start_lat = 0.377933340192;
    tmp_tmp_tmp_msg_0_0_1.start_lon = 0.0129032719689;
    tmp_tmp_tmp_msg_0_0_1.start_z = 0.644152503002;
    tmp_tmp_tmp_msg_0_0_1.start_z_units = 5U;
    tmp_tmp_tmp_msg_0_0_1.end_lat = 0.171791417346;
    tmp_tmp_tmp_msg_0_0_1.end_lon = 0.874720230126;
    tmp_tmp_tmp_msg_0_0_1.end_z = 0.00836903977489;
    tmp_tmp_tmp_msg_0_0_1.end_z_units = 184U;
    tmp_tmp_tmp_msg_0_0_1.lradius = 0.720346738447;
    tmp_tmp_tmp_msg_0_0_1.flags = 24U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.585731669689;
    tmp_tmp_tmp_msg_0_0_1.y = 0.890391211466;
    tmp_tmp_tmp_msg_0_0_1.z = 0.725030574942;
    tmp_tmp_tmp_msg_0_0_1.vx = 0.196300894702;
    tmp_tmp_tmp_msg_0_0_1.vy = 0.761521401913;
    tmp_tmp_tmp_msg_0_0_1.vz = 0.315374774009;
    tmp_tmp_tmp_msg_0_0_1.course_error = 0.621573492303;
    tmp_tmp_tmp_msg_0_0_1.eta = 21577U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::FollowPath tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.timeout = 9U;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.522888076842;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.599152175722;
    tmp_tmp_tmp_msg_0_0_2.z = 0.352832589;
    tmp_tmp_tmp_msg_0_0_2.z_units = 101U;
    tmp_tmp_tmp_msg_0_0_2.speed = 0.063170884499;
    tmp_tmp_tmp_msg_0_0_2.speed_units = 189U;
    tmp_tmp_tmp_msg_0_0_2.custom.assign("NPYWAAJZXOYYTWBQLFXCGSGLKHLPSZAHBXRPEJLNBSVILGUNTKQQOYLSUMIEMNOMSCMNUYOGEFHCOJTHJCQISIJVFXWKDPJXEVBXDMPIVGCGOJBAMSOCQFOKKQRRVCMFWEODNAEDLRHARBKMDUKH");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.813517849938);
    msg.setSource(25992U);
    msg.setSourceEntity(92U);
    msg.setDestination(46128U);
    msg.setDestinationEntity(76U);
    msg.op = 53U;
    msg.system.assign("GGFTGTPBWMKBHIDRSCVPOQVQTNAGRSNQAYQXFWYPRXBDSPTONDFPGUZBNEHEOGBMFYCMYOKUJLBRHDSETBCVKBEXNCYZMPCQJMQMEUTJVQLNIWSZLOOLRXYULGOOTISXWXEM");
    msg.range = 0.774889381398;
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.793535539136;
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
    msg.setTimeStamp(0.123743337305);
    msg.setSource(33186U);
    msg.setSourceEntity(4U);
    msg.setDestination(14772U);
    msg.setDestinationEntity(105U);
    msg.op = 69U;
    msg.system.assign("GWBNCKVXOAFFRFTYASHFDLZYBSHWWQVSBNRIYXIGAUVBHMGROEMLOBRTBI");
    msg.range = 0.00806095294385;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 401494285U;
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
    msg.setTimeStamp(0.849961980006);
    msg.setSource(23045U);
    msg.setSourceEntity(129U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.29364891168);
    msg.setSource(13286U);
    msg.setSourceEntity(119U);
    msg.setDestination(65483U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.117984955506);
    msg.setSource(3601U);
    msg.setSourceEntity(250U);
    msg.setDestination(34451U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.646462326319);
    msg.setSource(28511U);
    msg.setSourceEntity(41U);
    msg.setDestination(32084U);
    msg.setDestinationEntity(113U);
    msg.list.assign("NDZMZECVMOKJOJKLYTOZWAMBAZZHUESEOUFDLMMFCBGQCSIGSWXCSZSJPNLJBUNWQHSQLBHYKXKEDDOZKBIDDOIVKPIUKPBNTCAFKNSTWZFUKUQAEJMENGLBANLIHMDWQVHEJXIFRWLRYGTRUVGWXVYYSBFYJVSGXIERADFTE");

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
    msg.setTimeStamp(0.236316733374);
    msg.setSource(46980U);
    msg.setSourceEntity(208U);
    msg.setDestination(8416U);
    msg.setDestinationEntity(149U);
    msg.list.assign("UYWTTLVJVFRZCZGXEBFLOHIFLYWQHEPCIVDPPSPLFIRAOMDYKUZKRRSNNCGREQXXUYQOGXESSVKFWNCVPRHSGBAMSUJTOIUQAKUGMZMCJEINQHALUQERDNETJIXKWANBBXXLUVEBNJZDDGLTZSFWC");

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
    msg.setTimeStamp(0.0252071300259);
    msg.setSource(47229U);
    msg.setSourceEntity(252U);
    msg.setDestination(17999U);
    msg.setDestinationEntity(26U);
    msg.list.assign("MHOAWUHWLJGYJWEYGIQCLNCKCJRBTXMETUQOKWEIRWYRLRACJNURIRUVSLAITVEKJBEVCGGIAYFDV");

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
    msg.setTimeStamp(0.868346091209);
    msg.setSource(45085U);
    msg.setSourceEntity(245U);
    msg.setDestination(307U);
    msg.setDestinationEntity(212U);
    msg.value = -28285;

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
    msg.setTimeStamp(0.227251601626);
    msg.setSource(25060U);
    msg.setSourceEntity(62U);
    msg.setDestination(63279U);
    msg.setDestinationEntity(168U);
    msg.value = 31448;

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
    msg.setTimeStamp(0.362144196941);
    msg.setSource(38543U);
    msg.setSourceEntity(51U);
    msg.setDestination(53469U);
    msg.setDestinationEntity(54U);
    msg.value = 19013;

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
    msg.setTimeStamp(0.803712398945);
    msg.setSource(14932U);
    msg.setSourceEntity(215U);
    msg.setDestination(539U);
    msg.setDestinationEntity(10U);
    msg.value = 0.0644109662665;

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
    msg.setTimeStamp(0.0514073087459);
    msg.setSource(5440U);
    msg.setSourceEntity(45U);
    msg.setDestination(46996U);
    msg.setDestinationEntity(75U);
    msg.value = 0.184806623207;

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
    msg.setTimeStamp(0.791613300801);
    msg.setSource(10439U);
    msg.setSourceEntity(243U);
    msg.setDestination(40284U);
    msg.setDestinationEntity(234U);
    msg.value = 0.276169315226;

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
    msg.setTimeStamp(0.146888905925);
    msg.setSource(15333U);
    msg.setSourceEntity(164U);
    msg.setDestination(57544U);
    msg.setDestinationEntity(135U);
    msg.value = 0.667039976298;

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
    msg.setTimeStamp(0.538378688637);
    msg.setSource(33474U);
    msg.setSourceEntity(157U);
    msg.setDestination(2448U);
    msg.setDestinationEntity(79U);
    msg.value = 0.498193908941;

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
    msg.setTimeStamp(0.978474224892);
    msg.setSource(25070U);
    msg.setSourceEntity(166U);
    msg.setDestination(42268U);
    msg.setDestinationEntity(24U);
    msg.value = 0.0578313605979;

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
    msg.setTimeStamp(0.781950140994);
    msg.setSource(49001U);
    msg.setSourceEntity(1U);
    msg.setDestination(48030U);
    msg.setDestinationEntity(191U);
    msg.validity = 64457U;
    msg.type = 245U;
    msg.utc_year = 27185U;
    msg.utc_month = 242U;
    msg.utc_day = 78U;
    msg.utc_time = 0.173038088335;
    msg.lat = 0.249233115225;
    msg.lon = 0.69141026863;
    msg.height = 0.275395900413;
    msg.satellites = 101U;
    msg.cog = 0.690818325067;
    msg.sog = 0.720138307308;
    msg.hdop = 0.512235664671;
    msg.vdop = 0.713178143374;
    msg.hacc = 0.278112707941;
    msg.vacc = 0.724277769873;

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
    msg.setTimeStamp(0.120493571946);
    msg.setSource(40324U);
    msg.setSourceEntity(100U);
    msg.setDestination(10973U);
    msg.setDestinationEntity(177U);
    msg.validity = 45589U;
    msg.type = 6U;
    msg.utc_year = 26675U;
    msg.utc_month = 222U;
    msg.utc_day = 152U;
    msg.utc_time = 0.726562152421;
    msg.lat = 0.0918416835286;
    msg.lon = 0.774829624817;
    msg.height = 0.650173593031;
    msg.satellites = 90U;
    msg.cog = 0.988523463742;
    msg.sog = 0.786643600272;
    msg.hdop = 0.989590089562;
    msg.vdop = 0.28478342146;
    msg.hacc = 0.628827653236;
    msg.vacc = 0.147947973918;

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
    msg.setTimeStamp(0.508871183161);
    msg.setSource(57202U);
    msg.setSourceEntity(124U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(94U);
    msg.validity = 54967U;
    msg.type = 19U;
    msg.utc_year = 28223U;
    msg.utc_month = 159U;
    msg.utc_day = 236U;
    msg.utc_time = 0.788453011344;
    msg.lat = 0.397864164831;
    msg.lon = 0.98127782672;
    msg.height = 0.480384760275;
    msg.satellites = 131U;
    msg.cog = 0.14220674723;
    msg.sog = 0.0684521036556;
    msg.hdop = 0.358821786556;
    msg.vdop = 0.580001416966;
    msg.hacc = 0.359433611089;
    msg.vacc = 0.177826328417;

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
    msg.setTimeStamp(0.0606503419186);
    msg.setSource(53889U);
    msg.setSourceEntity(190U);
    msg.setDestination(36543U);
    msg.setDestinationEntity(224U);
    msg.time = 0.322142319467;
    msg.phi = 0.83136430143;
    msg.theta = 0.711788121701;
    msg.psi = 0.137543164419;
    msg.psi_magnetic = 0.471041512895;

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
    msg.setTimeStamp(0.549377524458);
    msg.setSource(5793U);
    msg.setSourceEntity(143U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(249U);
    msg.time = 0.0684819754568;
    msg.phi = 0.746562793706;
    msg.theta = 0.878015788108;
    msg.psi = 0.783892669919;
    msg.psi_magnetic = 0.693815275607;

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
    msg.setTimeStamp(0.0471604552279);
    msg.setSource(53108U);
    msg.setSourceEntity(87U);
    msg.setDestination(49475U);
    msg.setDestinationEntity(245U);
    msg.time = 0.698429770617;
    msg.phi = 0.14076329547;
    msg.theta = 0.431705872876;
    msg.psi = 0.740636100849;
    msg.psi_magnetic = 0.0444207257125;

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
    msg.setTimeStamp(0.557270658981);
    msg.setSource(51239U);
    msg.setSourceEntity(187U);
    msg.setDestination(49U);
    msg.setDestinationEntity(198U);
    msg.time = 0.601681580303;
    msg.x = 0.126555532281;
    msg.y = 0.647547368054;
    msg.z = 0.841030363745;
    msg.timestep = 0.851163886969;

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
    msg.setTimeStamp(0.281237800689);
    msg.setSource(16759U);
    msg.setSourceEntity(194U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(252U);
    msg.time = 0.141628575532;
    msg.x = 0.401482777802;
    msg.y = 0.0624878215723;
    msg.z = 0.354428100411;
    msg.timestep = 0.562070163837;

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
    msg.setTimeStamp(0.917030833293);
    msg.setSource(60149U);
    msg.setSourceEntity(210U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(231U);
    msg.time = 0.833182109075;
    msg.x = 0.223283202997;
    msg.y = 0.544503380397;
    msg.z = 0.663056460596;
    msg.timestep = 0.777442400881;

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
    msg.setTimeStamp(0.498858481714);
    msg.setSource(7878U);
    msg.setSourceEntity(14U);
    msg.setDestination(42567U);
    msg.setDestinationEntity(38U);
    msg.time = 0.897093381637;
    msg.x = 0.877280410403;
    msg.y = 0.348435111712;
    msg.z = 0.610815583022;

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
    msg.setTimeStamp(0.222763441777);
    msg.setSource(53415U);
    msg.setSourceEntity(159U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(135U);
    msg.time = 0.397412759475;
    msg.x = 0.598899461599;
    msg.y = 0.811399720424;
    msg.z = 0.125279844522;

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
    msg.setTimeStamp(0.0894914777442);
    msg.setSource(57539U);
    msg.setSourceEntity(73U);
    msg.setDestination(51769U);
    msg.setDestinationEntity(169U);
    msg.time = 0.412669793394;
    msg.x = 0.806878079505;
    msg.y = 0.931257260458;
    msg.z = 0.29368470289;

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
    msg.setTimeStamp(0.00973640582063);
    msg.setSource(34975U);
    msg.setSourceEntity(9U);
    msg.setDestination(29035U);
    msg.setDestinationEntity(96U);
    msg.time = 0.350284864598;
    msg.x = 0.19855968162;
    msg.y = 0.210182461089;
    msg.z = 0.746706401229;

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
    msg.setTimeStamp(0.711599309202);
    msg.setSource(63956U);
    msg.setSourceEntity(105U);
    msg.setDestination(60081U);
    msg.setDestinationEntity(125U);
    msg.time = 0.528491402189;
    msg.x = 0.760050288486;
    msg.y = 0.105137312469;
    msg.z = 0.92072307424;

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
    msg.setTimeStamp(0.911270746383);
    msg.setSource(56813U);
    msg.setSourceEntity(44U);
    msg.setDestination(30537U);
    msg.setDestinationEntity(22U);
    msg.time = 0.82885292554;
    msg.x = 0.0171669129013;
    msg.y = 0.39259193541;
    msg.z = 0.456815468658;

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
    msg.setTimeStamp(0.985954518446);
    msg.setSource(52970U);
    msg.setSourceEntity(194U);
    msg.setDestination(59109U);
    msg.setDestinationEntity(243U);
    msg.time = 0.584030972936;
    msg.x = 0.105801556237;
    msg.y = 0.452821281893;
    msg.z = 0.778014054394;

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
    msg.setTimeStamp(0.787016087982);
    msg.setSource(35915U);
    msg.setSourceEntity(59U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(169U);
    msg.time = 0.655510630315;
    msg.x = 0.582684650219;
    msg.y = 0.305921426032;
    msg.z = 0.103487986548;

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
    msg.setTimeStamp(0.919059581864);
    msg.setSource(24014U);
    msg.setSourceEntity(45U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(87U);
    msg.time = 0.900061410432;
    msg.x = 0.843475500301;
    msg.y = 0.0663431083357;
    msg.z = 0.0510224080207;

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
    msg.setTimeStamp(0.882447310835);
    msg.setSource(7249U);
    msg.setSourceEntity(92U);
    msg.setDestination(63902U);
    msg.setDestinationEntity(41U);
    msg.validity = 140U;
    msg.x = 0.213459425563;
    msg.y = 0.445098096429;
    msg.z = 0.907929055825;

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
    msg.setTimeStamp(0.184525978846);
    msg.setSource(25462U);
    msg.setSourceEntity(250U);
    msg.setDestination(49662U);
    msg.setDestinationEntity(105U);
    msg.validity = 154U;
    msg.x = 0.17198380298;
    msg.y = 0.509505696226;
    msg.z = 0.367329205746;

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
    msg.setTimeStamp(0.863711985668);
    msg.setSource(13061U);
    msg.setSourceEntity(194U);
    msg.setDestination(23367U);
    msg.setDestinationEntity(254U);
    msg.validity = 4U;
    msg.x = 0.747982847076;
    msg.y = 0.209484183967;
    msg.z = 0.678732710901;

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
    msg.setTimeStamp(0.0387031090697);
    msg.setSource(28809U);
    msg.setSourceEntity(50U);
    msg.setDestination(4887U);
    msg.setDestinationEntity(70U);
    msg.validity = 137U;
    msg.x = 0.906860351321;
    msg.y = 0.727865839931;
    msg.z = 0.88678497987;

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
    msg.setTimeStamp(0.394484644122);
    msg.setSource(15889U);
    msg.setSourceEntity(194U);
    msg.setDestination(6534U);
    msg.setDestinationEntity(163U);
    msg.validity = 159U;
    msg.x = 0.902269497553;
    msg.y = 0.153750117868;
    msg.z = 0.282890583589;

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
    msg.setTimeStamp(0.394973869117);
    msg.setSource(46114U);
    msg.setSourceEntity(254U);
    msg.setDestination(12923U);
    msg.setDestinationEntity(58U);
    msg.validity = 40U;
    msg.x = 0.324857172651;
    msg.y = 0.389201104484;
    msg.z = 0.114603122053;

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
    msg.setTimeStamp(0.453260870041);
    msg.setSource(9564U);
    msg.setSourceEntity(23U);
    msg.setDestination(9446U);
    msg.setDestinationEntity(173U);
    msg.time = 0.580964972229;
    msg.x = 0.321980755636;
    msg.y = 0.900631926774;
    msg.z = 0.538907874792;

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
    msg.setTimeStamp(0.197784532502);
    msg.setSource(46549U);
    msg.setSourceEntity(200U);
    msg.setDestination(51390U);
    msg.setDestinationEntity(131U);
    msg.time = 0.773900625392;
    msg.x = 0.705206854965;
    msg.y = 0.0582700401919;
    msg.z = 0.89000387238;

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
    msg.setTimeStamp(0.532838417333);
    msg.setSource(8282U);
    msg.setSourceEntity(90U);
    msg.setDestination(15877U);
    msg.setDestinationEntity(68U);
    msg.time = 0.35546323625;
    msg.x = 0.176736111791;
    msg.y = 0.192660270559;
    msg.z = 0.733195034138;

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
    msg.setTimeStamp(0.85897123067);
    msg.setSource(9631U);
    msg.setSourceEntity(173U);
    msg.setDestination(62119U);
    msg.setDestinationEntity(129U);
    msg.validity = 65U;
    msg.value = 0.0109804795573;

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
    msg.setTimeStamp(0.340278157216);
    msg.setSource(24763U);
    msg.setSourceEntity(225U);
    msg.setDestination(30933U);
    msg.setDestinationEntity(86U);
    msg.validity = 3U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.353376175552;
    tmp_msg_0.beam_height = 0.368871005681;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.241377086181;

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
    msg.setTimeStamp(0.0407486699719);
    msg.setSource(53426U);
    msg.setSourceEntity(233U);
    msg.setDestination(29856U);
    msg.setDestinationEntity(172U);
    msg.validity = 124U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.116435835022;
    tmp_msg_0.y = 0.323627014594;
    tmp_msg_0.z = 0.0993286239399;
    tmp_msg_0.phi = 0.183422106936;
    tmp_msg_0.theta = 0.561339711771;
    tmp_msg_0.psi = 0.948685328725;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.548631781261;
    tmp_msg_1.beam_height = 0.420761219631;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.0659759577528;

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
    msg.setTimeStamp(0.553010737384);
    msg.setSource(52922U);
    msg.setSourceEntity(229U);
    msg.setDestination(43102U);
    msg.setDestinationEntity(114U);
    msg.value = 0.852142026973;

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
    msg.setTimeStamp(0.885438198794);
    msg.setSource(39166U);
    msg.setSourceEntity(61U);
    msg.setDestination(19284U);
    msg.setDestinationEntity(129U);
    msg.value = 0.495403455566;

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
    msg.setTimeStamp(0.869566156751);
    msg.setSource(32749U);
    msg.setSourceEntity(253U);
    msg.setDestination(27537U);
    msg.setDestinationEntity(132U);
    msg.value = 0.427957710795;

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
    msg.setTimeStamp(0.837988076721);
    msg.setSource(779U);
    msg.setSourceEntity(254U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(117U);
    msg.value = 0.429309061574;

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
    msg.setTimeStamp(0.620172912096);
    msg.setSource(29580U);
    msg.setSourceEntity(131U);
    msg.setDestination(32399U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0217299949683;

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
    msg.setTimeStamp(0.346798191967);
    msg.setSource(16997U);
    msg.setSourceEntity(213U);
    msg.setDestination(33618U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0475769100948;

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
    msg.setTimeStamp(0.905773303816);
    msg.setSource(3457U);
    msg.setSourceEntity(144U);
    msg.setDestination(30126U);
    msg.setDestinationEntity(118U);
    msg.value = 0.520187275641;

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
    msg.setTimeStamp(0.306288835871);
    msg.setSource(40245U);
    msg.setSourceEntity(81U);
    msg.setDestination(51900U);
    msg.setDestinationEntity(236U);
    msg.value = 0.422197532516;

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
    msg.setTimeStamp(0.211874123707);
    msg.setSource(25313U);
    msg.setSourceEntity(59U);
    msg.setDestination(10858U);
    msg.setDestinationEntity(147U);
    msg.value = 0.87550834838;

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
    msg.setTimeStamp(0.678921350703);
    msg.setSource(24928U);
    msg.setSourceEntity(212U);
    msg.setDestination(62168U);
    msg.setDestinationEntity(152U);
    msg.value = 0.903156809595;

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
    msg.setTimeStamp(0.291611251372);
    msg.setSource(37167U);
    msg.setSourceEntity(203U);
    msg.setDestination(8280U);
    msg.setDestinationEntity(226U);
    msg.value = 0.443427409165;

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
    msg.setTimeStamp(0.608137926785);
    msg.setSource(17924U);
    msg.setSourceEntity(34U);
    msg.setDestination(61811U);
    msg.setDestinationEntity(122U);
    msg.value = 0.264879972969;

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
    msg.setTimeStamp(0.768994739705);
    msg.setSource(53512U);
    msg.setSourceEntity(225U);
    msg.setDestination(19443U);
    msg.setDestinationEntity(243U);
    msg.value = 0.410733760699;

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
    msg.setTimeStamp(0.700610118029);
    msg.setSource(14451U);
    msg.setSourceEntity(63U);
    msg.setDestination(41903U);
    msg.setDestinationEntity(14U);
    msg.value = 0.388340060737;

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
    msg.setTimeStamp(0.234816619031);
    msg.setSource(51760U);
    msg.setSourceEntity(40U);
    msg.setDestination(24212U);
    msg.setDestinationEntity(174U);
    msg.value = 0.265865570534;

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
    msg.setTimeStamp(0.588757564693);
    msg.setSource(1341U);
    msg.setSourceEntity(223U);
    msg.setDestination(61053U);
    msg.setDestinationEntity(74U);
    msg.value = 0.190330039014;

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
    msg.setTimeStamp(0.263563005076);
    msg.setSource(30018U);
    msg.setSourceEntity(214U);
    msg.setDestination(28958U);
    msg.setDestinationEntity(45U);
    msg.value = 0.871196800939;

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
    msg.setTimeStamp(0.246489228636);
    msg.setSource(32781U);
    msg.setSourceEntity(46U);
    msg.setDestination(47197U);
    msg.setDestinationEntity(101U);
    msg.value = 0.561556965449;

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
    msg.setTimeStamp(0.730777794503);
    msg.setSource(30844U);
    msg.setSourceEntity(77U);
    msg.setDestination(31082U);
    msg.setDestinationEntity(183U);
    msg.value = 0.884530311426;

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
    msg.setTimeStamp(0.880740298514);
    msg.setSource(35729U);
    msg.setSourceEntity(74U);
    msg.setDestination(9187U);
    msg.setDestinationEntity(241U);
    msg.value = 0.247696428722;

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
    msg.setTimeStamp(0.693385331608);
    msg.setSource(25159U);
    msg.setSourceEntity(144U);
    msg.setDestination(9514U);
    msg.setDestinationEntity(224U);
    msg.value = 0.598277660918;

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
    msg.setTimeStamp(0.665893194218);
    msg.setSource(25429U);
    msg.setSourceEntity(226U);
    msg.setDestination(55802U);
    msg.setDestinationEntity(213U);
    msg.value = 0.300681487591;

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
    msg.setTimeStamp(0.884073069106);
    msg.setSource(20304U);
    msg.setSourceEntity(209U);
    msg.setDestination(41312U);
    msg.setDestinationEntity(76U);
    msg.value = 0.631888176229;

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
    msg.setTimeStamp(0.13895674197);
    msg.setSource(17916U);
    msg.setSourceEntity(80U);
    msg.setDestination(11340U);
    msg.setDestinationEntity(59U);
    msg.value = 0.152389463632;

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
    msg.setTimeStamp(0.500499282474);
    msg.setSource(36545U);
    msg.setSourceEntity(204U);
    msg.setDestination(55696U);
    msg.setDestinationEntity(253U);
    msg.direction = 0.365422849923;
    msg.speed = 0.738960293429;
    msg.turbulence = 0.670686925684;

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
    msg.setTimeStamp(0.41032608992);
    msg.setSource(49665U);
    msg.setSourceEntity(91U);
    msg.setDestination(42699U);
    msg.setDestinationEntity(12U);
    msg.direction = 0.0492119719953;
    msg.speed = 0.8668824556;
    msg.turbulence = 0.193729193438;

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
    msg.setTimeStamp(0.0824936499605);
    msg.setSource(44198U);
    msg.setSourceEntity(74U);
    msg.setDestination(43723U);
    msg.setDestinationEntity(210U);
    msg.direction = 0.834376227643;
    msg.speed = 0.0240899610381;
    msg.turbulence = 0.556648398035;

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
    msg.setTimeStamp(0.965704352066);
    msg.setSource(30830U);
    msg.setSourceEntity(232U);
    msg.setDestination(23597U);
    msg.setDestinationEntity(86U);
    msg.value = 0.295554571066;

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
    msg.setTimeStamp(0.667255896232);
    msg.setSource(13384U);
    msg.setSourceEntity(244U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(106U);
    msg.value = 0.823122178756;

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
    msg.setTimeStamp(0.114560221818);
    msg.setSource(58700U);
    msg.setSourceEntity(252U);
    msg.setDestination(48034U);
    msg.setDestinationEntity(209U);
    msg.value = 0.430005393499;

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
    msg.setTimeStamp(0.600565669919);
    msg.setSource(19566U);
    msg.setSourceEntity(43U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(157U);
    msg.value.assign("IMYKQMCGNIZUUJPKHYYVUBVMNGUWCSQTJOXRXDKDYKXVIONWGORCXSJOQDWDXOQILUHXFVFRZJLHBDQZAEPNJEWBBCSPK");

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
    msg.setTimeStamp(0.748016570853);
    msg.setSource(55716U);
    msg.setSourceEntity(89U);
    msg.setDestination(51564U);
    msg.setDestinationEntity(37U);
    msg.value.assign("LTJJIDEWNCALWAINSJIMNFDVHWTFYXOKKWMMESJMVUMPZGYTWXVDDUGHDLCCVZJFKZIFT");

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
    msg.setTimeStamp(0.658875970114);
    msg.setSource(36869U);
    msg.setSourceEntity(141U);
    msg.setDestination(1610U);
    msg.setDestinationEntity(55U);
    msg.value.assign("NUMYLFWXVPLQXXCHLKPRKLMJVTHGEOBTMDURHGOZFHIUGRYQQDCVPCUNEVJCNYKNSYAYSQRRJHDPMUMDWZHCLFSLSAIFJUOZRGNBLTQLSXHVODIJWANUWPOFHGTWRCOQXGUDSVTBDRKTAMYRAOWEQCQNKINJCULEFPFSGYQJAIKIGENXJPPDEOIXKJHZMFGF");

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
    msg.setTimeStamp(0.118623252659);
    msg.setSource(9759U);
    msg.setSourceEntity(131U);
    msg.setDestination(8807U);
    msg.setDestinationEntity(249U);
    const char tmp_msg_0[] = {-83, -126, 42, 98, 62, -125, 41, 22, -23, -16, 66, -61, -113, 57, 33, -52, 1, 93, 97, 33, -89, -73, -8, -64, -2, -113, 102, 46, -81, 84, 42, -99, -17, 27, 50, 9, 126, -35, 116, 74, 13, 117, -49, 53, 78, -29, -48, 12, -19, -6, -49, -80, -123, -56, 74, -64, 34, 118, -25, -13, -102, 52, 99, -81, -108, -114, 122, -97, -44, -61, 32, -124, -63, 125, 69, 24, 45, -103, 112, 47, 42, 31, -122, 35, -63, 81, 21, 40, -8, 27, -69, 125, 54, 48, -41, 107, -31, -62, -108, 18, 61, 88, -75, -120, 124, 116, -18, 46, 15, -41, 94, -47, -91, 78, 50, -41, -40, 54, 38, -121, 111, -86, 65, -94, -80, 100, 114, -69, -88, -49, 95, -98, 58, 8, 85, 6, -121, 18, -16, 27, -90, 67, -62, -40, -40, -85, 35, -97, 49, -49, 31, -29, 81, -113, -84, 63, 27, 10, -86, 7, 78, -107, -92, -3, -100, -36, 27, -78, 97, 92, 122, -104, -53, 95, -14, -83, 69, 1, 99, -11, -92, -65, -12, 67, -12, 66, -67, 49, 95, -73, 97, 61, -26, -7, -123, -81, -53, -24};
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
    msg.setTimeStamp(0.867818558529);
    msg.setSource(3562U);
    msg.setSourceEntity(97U);
    msg.setDestination(16346U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-75, -93, -12, -89, 11, -4, 87, -37, -59, 74, 92, 103, 14};
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
    msg.setTimeStamp(0.899268991291);
    msg.setSource(24971U);
    msg.setSourceEntity(179U);
    msg.setDestination(26317U);
    msg.setDestinationEntity(33U);
    const char tmp_msg_0[] = {58, 93, -115, 96, -9, -79, -101, 60, 0, -101, 111, -67, 32, -87, -20, -96, 62, -2, 104, -46, -124, 96, -102, -117, -103, -118, 68, -66, 72, 26, 103, 88, -126, 116, -71, 4, 33, -45, 107, 83, 107, 53, -57, 78, -30, -10, 93, 39};
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
    IMC::SonarData msg;
    msg.setTimeStamp(0.747602756297);
    msg.setSource(49740U);
    msg.setSourceEntity(19U);
    msg.setDestination(34428U);
    msg.setDestinationEntity(165U);
    msg.type = 84U;
    msg.frequency = 1320335802U;
    msg.min_range = 24633U;
    msg.max_range = 52284U;
    msg.bits_per_point = 32U;
    msg.scale_factor = 0.273930780851;
    const char tmp_msg_0[] = {122, 69, 43, -1, -14, -26, -106, 81, -87, -99, -20, -38, -128, -36, -38, -127, -55, 14, 20, -47, 19, 65, 35, 87, -114, -54, 44, -114, -43, -43, -15, 109, 124, 18, -29, -50, -122, 22, -27, 96, -57, -25, 125, 35, 38, 73, -48, -38, -126, -66, -102, -37, 100, -66, -27, -44, -69, 103, -82, 104, 75, 19, -58, -69, -22, 32, 114, -122, 120, 108, -69, -71, -56, -10, -71, -93, 33, 114, 42, 57, -70, 115, 104, 90, 21, -92, 92, 67, -125, -39, -87, -51, -75, 28, 97, 79, -103, -73, 14, -115, -104, 55, -99, -126, -26, 11, 15, 121, -52, 19, -100, 114, -44, -53, 96, 49, -19, 115, 46, -102, 84, -87};
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
    msg.setTimeStamp(0.912428860398);
    msg.setSource(55927U);
    msg.setSourceEntity(81U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(181U);
    msg.type = 198U;
    msg.frequency = 1115682114U;
    msg.min_range = 30499U;
    msg.max_range = 5837U;
    msg.bits_per_point = 146U;
    msg.scale_factor = 0.729562035371;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.469343831178;
    tmp_msg_0.beam_height = 0.852155124259;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-66, -66, -46, -52, -25, 106, -60, 36, 95, 89, 42, -101, 25, -9, -124, -66, -56, -92, 34, -91, -59, 52, 58, 47, -26, 81, 79, -110, -5, -109, 12, -67, -80, -71, 62, -120, 122, 8, -27, 84, -89, -115, -113, -117, -24, 121, 85, -117, 16, -57, 20, -54, 54, -26, 49, 19, 103, -116, -118, -115, 103, -32, -64, -73, -67, 7, -14, 106, 68, 88, 57, -63, 70, 6, 65, 61, -12, -57, 83, 43, -46, -23, -66, 36, -17, 66, -93, -120, 114, -49, -13, 108, -86, -4, -85, 29, 30, -37, -38, 7, 51, -30, -57, 47, -119, -6, -26, 101, 41, -9, 15, -75, 119, 54, -115, -97, 71, 82, 84, -10, -117, 11, 38, -89, 90, -31, -26, 8, -95, -97, 15, -101, 74, 125, 49, 44, 33, -107, 81, -94, 114, -80, -8, -122, -2, 52, -11, 82, 98, 12, 84, 115, 117, 104, 59, 30, -120, -24, -111, -42, -27, -75, 37, -111, 64, 56, -36, 62, 13, 117, -61, -21, 5, -105, -3, -9, -69, 93, -9, 90, 84, 41, -75, -107, -85, -89};
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
    msg.setTimeStamp(0.625143421553);
    msg.setSource(41304U);
    msg.setSourceEntity(64U);
    msg.setDestination(61776U);
    msg.setDestinationEntity(229U);
    msg.type = 245U;
    msg.frequency = 2167857315U;
    msg.min_range = 21627U;
    msg.max_range = 1378U;
    msg.bits_per_point = 120U;
    msg.scale_factor = 0.234205859957;
    const char tmp_msg_0[] = {-62, -19, -47, -27, 47, 45, -78, -70, 15, 95, -24, -116, -36, 90, 78, 15, -127, 35, 96, -9, 44, 4, -82, 125, 113, -42, -61, 24, -115, 48, 13, -61, 95, 47, 90, -16, -72, -72, -85, -62, -99, -36, 83, 33, 54, -80, -98, 113, 15, 126, -103, -40, 108, -63, -56, -119, -11, -114, -102, 46, 98, 91, 83, -54, -106, 107, -73, -52, 110, 39, -79, -1, -87, -36, -48, -70, -120, 101, 48, -15, 12, 81, -69, -3, 56, -41, 57, -103, 109, -116, -36, -77, -75, -40, 62, -96, 39, -76, -42, 13, -75, -8, 52, -20, 16, 22, 9, -10, 36, 16, 125, 6, -128, 73, 39};
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
    msg.setTimeStamp(0.786903070167);
    msg.setSource(32072U);
    msg.setSourceEntity(193U);
    msg.setDestination(29840U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.183420563568);
    msg.setSource(4006U);
    msg.setSourceEntity(96U);
    msg.setDestination(4140U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.901073941812);
    msg.setSource(44772U);
    msg.setSourceEntity(247U);
    msg.setDestination(34319U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.0915294438902);
    msg.setSource(27533U);
    msg.setSourceEntity(103U);
    msg.setDestination(60626U);
    msg.setDestinationEntity(153U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.230623185268);
    msg.setSource(56705U);
    msg.setSourceEntity(73U);
    msg.setDestination(9991U);
    msg.setDestinationEntity(220U);
    msg.op = 188U;

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
    msg.setTimeStamp(0.684979905253);
    msg.setSource(55972U);
    msg.setSourceEntity(185U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(95U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.0498863614921);
    msg.setSource(12808U);
    msg.setSourceEntity(137U);
    msg.setDestination(63837U);
    msg.setDestinationEntity(18U);
    msg.value = 0.367800433888;
    msg.confidence = 0.76382515511;
    msg.opmodes.assign("DLYSMPUVJJQXYWVYNIKEZMMGNLNHPBBQFAVMHWXNSWYYFTGOAFSCWFGCVVPDJIJZXODKWQSAUDNQKSJWSMXONQOICHYQUEJXGBBZGXKQRWEOKZWPRPLGEJVHOKFGCKWGEODALSABEABRKOCNJQRBOTDRLVUYCTFHHNLMXTAXGIDINLFYPZXIJTDMRIKUVZUDMHBURCSRPZEUAFTLMCEHETRAZCEWXRPVI");

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
    msg.setTimeStamp(0.646649385926);
    msg.setSource(64227U);
    msg.setSourceEntity(7U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(42U);
    msg.value = 0.612197203217;
    msg.confidence = 0.806081273364;
    msg.opmodes.assign("CKOLLWJBNMFQHTWHFLXSKSXMCGTMNEZTVIODJAUEDXQAXBGOLYLCZRPRDKXPPYKNYDNUQCGCZPYVARXWCLJJTZKNOEPWIAWICBVJWFOTZGAEIFQADGPTNMZOMUUGOUSLIELBVBJJWTQJDX");

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
    msg.setTimeStamp(0.131194752914);
    msg.setSource(24542U);
    msg.setSourceEntity(244U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(66U);
    msg.value = 0.798211657224;
    msg.confidence = 0.885771909909;
    msg.opmodes.assign("OSWZZSZCZWVVJRXLBINPDIGQBHMTMWRGAOMGABTFLKSVYCDPIWHQIGJZDLSOJFZFBOMICMPXSYKZRETNKFJBUETLXOXXYLQQHUEUVXNMZTFM");

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
    msg.setTimeStamp(0.125543718609);
    msg.setSource(42394U);
    msg.setSourceEntity(45U);
    msg.setDestination(17126U);
    msg.setDestinationEntity(207U);
    msg.itow = 1234255856U;
    msg.lat = 0.234299624633;
    msg.lon = 0.313968245784;
    msg.height_ell = 0.215261651809;
    msg.height_sea = 0.274582425152;
    msg.hacc = 0.745757759039;
    msg.vacc = 0.485655716127;
    msg.vel_n = 0.185618505886;
    msg.vel_e = 0.816445528506;
    msg.vel_d = 0.549774923425;
    msg.speed = 0.493337204627;
    msg.gspeed = 0.391556622573;
    msg.heading = 0.565313881061;
    msg.sacc = 0.819297399785;
    msg.cacc = 0.376944916305;

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
    msg.setTimeStamp(0.868240565532);
    msg.setSource(5419U);
    msg.setSourceEntity(184U);
    msg.setDestination(9294U);
    msg.setDestinationEntity(17U);
    msg.itow = 4217710402U;
    msg.lat = 0.993606877329;
    msg.lon = 0.371663605998;
    msg.height_ell = 0.972604022365;
    msg.height_sea = 0.795080024315;
    msg.hacc = 0.956435431102;
    msg.vacc = 0.837788608628;
    msg.vel_n = 0.139138632621;
    msg.vel_e = 0.624883282768;
    msg.vel_d = 0.721296975594;
    msg.speed = 0.830700370853;
    msg.gspeed = 0.287668852935;
    msg.heading = 0.468388392939;
    msg.sacc = 0.255059495052;
    msg.cacc = 0.958575472652;

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
    msg.setTimeStamp(0.856387540566);
    msg.setSource(40675U);
    msg.setSourceEntity(90U);
    msg.setDestination(55346U);
    msg.setDestinationEntity(52U);
    msg.itow = 2757505735U;
    msg.lat = 0.297610352616;
    msg.lon = 0.461469809748;
    msg.height_ell = 0.777808036951;
    msg.height_sea = 0.450546116821;
    msg.hacc = 0.881208182605;
    msg.vacc = 0.645038577263;
    msg.vel_n = 0.405068177112;
    msg.vel_e = 0.021104479921;
    msg.vel_d = 0.396127876928;
    msg.speed = 0.225583429363;
    msg.gspeed = 0.260051895961;
    msg.heading = 0.910681989622;
    msg.sacc = 0.701983543243;
    msg.cacc = 0.800437063675;

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
    msg.setTimeStamp(0.59987302074);
    msg.setSource(11351U);
    msg.setSourceEntity(196U);
    msg.setDestination(47599U);
    msg.setDestinationEntity(53U);
    msg.id = 125U;
    msg.value = 0.26551173529;

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
    msg.setTimeStamp(0.765038678473);
    msg.setSource(28130U);
    msg.setSourceEntity(127U);
    msg.setDestination(17672U);
    msg.setDestinationEntity(252U);
    msg.id = 50U;
    msg.value = 0.0255474299848;

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
    msg.setTimeStamp(0.413826719169);
    msg.setSource(56300U);
    msg.setSourceEntity(174U);
    msg.setDestination(49269U);
    msg.setDestinationEntity(214U);
    msg.id = 117U;
    msg.value = 0.886932149955;

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
    msg.setTimeStamp(0.355624169514);
    msg.setSource(8019U);
    msg.setSourceEntity(71U);
    msg.setDestination(57085U);
    msg.setDestinationEntity(232U);
    msg.x = 0.657807136874;
    msg.y = 0.438205906627;
    msg.z = 0.325860929987;
    msg.phi = 0.502971568571;
    msg.theta = 0.783777150977;
    msg.psi = 0.222746580778;

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
    msg.setTimeStamp(0.411851885361);
    msg.setSource(40749U);
    msg.setSourceEntity(170U);
    msg.setDestination(31438U);
    msg.setDestinationEntity(193U);
    msg.x = 0.189484572907;
    msg.y = 0.15576532899;
    msg.z = 0.472430115704;
    msg.phi = 0.49811831654;
    msg.theta = 0.233179288689;
    msg.psi = 0.670864109906;

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
    msg.setTimeStamp(0.19497207056);
    msg.setSource(63774U);
    msg.setSourceEntity(71U);
    msg.setDestination(11497U);
    msg.setDestinationEntity(92U);
    msg.x = 0.329241193289;
    msg.y = 0.710938241511;
    msg.z = 0.128113963729;
    msg.phi = 0.912813919941;
    msg.theta = 0.954928928003;
    msg.psi = 0.783554029694;

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
    msg.setTimeStamp(0.532390345906);
    msg.setSource(64129U);
    msg.setSourceEntity(45U);
    msg.setDestination(60038U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.94144445948;
    msg.beam_height = 0.832771124237;

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
    msg.setTimeStamp(0.367594521565);
    msg.setSource(38910U);
    msg.setSourceEntity(47U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(220U);
    msg.beam_width = 0.326615122092;
    msg.beam_height = 0.0233140418242;

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
    msg.setTimeStamp(0.368132169453);
    msg.setSource(12780U);
    msg.setSourceEntity(151U);
    msg.setDestination(43415U);
    msg.setDestinationEntity(210U);
    msg.beam_width = 0.102667078937;
    msg.beam_height = 0.603161420749;

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
    msg.setTimeStamp(0.992879218426);
    msg.setSource(36924U);
    msg.setSourceEntity(35U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(245U);
    msg.sane = 190U;

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
    msg.setTimeStamp(0.767986708782);
    msg.setSource(4124U);
    msg.setSourceEntity(73U);
    msg.setDestination(33522U);
    msg.setDestinationEntity(86U);
    msg.sane = 61U;

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
    msg.setTimeStamp(0.819748093103);
    msg.setSource(3344U);
    msg.setSourceEntity(233U);
    msg.setDestination(39127U);
    msg.setDestinationEntity(221U);
    msg.sane = 31U;

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
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.410402780455);
    msg.setSource(18837U);
    msg.setSourceEntity(97U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(100U);
    msg.value = 0.730764835239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.713860022721);
    msg.setSource(63278U);
    msg.setSourceEntity(43U);
    msg.setDestination(8135U);
    msg.setDestinationEntity(192U);
    msg.value = 0.15701686692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.215104943282);
    msg.setSource(10238U);
    msg.setSourceEntity(167U);
    msg.setDestination(27209U);
    msg.setDestinationEntity(71U);
    msg.value = 0.281852322995;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.562491917836);
    msg.setSource(64096U);
    msg.setSourceEntity(33U);
    msg.setDestination(11402U);
    msg.setDestinationEntity(82U);
    msg.value = 0.00820914028595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.309721983374);
    msg.setSource(13735U);
    msg.setSourceEntity(213U);
    msg.setDestination(12841U);
    msg.setDestinationEntity(182U);
    msg.value = 0.489048379919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.447487002465);
    msg.setSource(15601U);
    msg.setSourceEntity(122U);
    msg.setDestination(42956U);
    msg.setDestinationEntity(175U);
    msg.value = 0.444334242764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.886230921948);
    msg.setSource(41400U);
    msg.setSourceEntity(142U);
    msg.setDestination(15061U);
    msg.setDestinationEntity(203U);
    msg.value = 0.254037573353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.77768544505);
    msg.setSource(43762U);
    msg.setSourceEntity(18U);
    msg.setDestination(46700U);
    msg.setDestinationEntity(237U);
    msg.value = 0.57511658027;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.0346951699604);
    msg.setSource(55488U);
    msg.setSourceEntity(217U);
    msg.setDestination(51985U);
    msg.setDestinationEntity(137U);
    msg.value = 0.685593222721;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.55225944949);
    msg.setSource(12146U);
    msg.setSourceEntity(85U);
    msg.setDestination(19460U);
    msg.setDestinationEntity(126U);
    msg.value = 0.728627700211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.842904635425);
    msg.setSource(40355U);
    msg.setSourceEntity(30U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(1U);
    msg.value = 0.717223792409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.542064273101);
    msg.setSource(25778U);
    msg.setSourceEntity(56U);
    msg.setDestination(52844U);
    msg.setDestinationEntity(127U);
    msg.value = 0.485081806752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
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
    msg.setTimeStamp(0.251293383539);
    msg.setSource(13615U);
    msg.setSourceEntity(83U);
    msg.setDestination(57867U);
    msg.setDestinationEntity(86U);
    msg.id = 49U;
    msg.zoom = 3U;
    msg.action = 160U;

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
    msg.setTimeStamp(0.591358093294);
    msg.setSource(16601U);
    msg.setSourceEntity(243U);
    msg.setDestination(39525U);
    msg.setDestinationEntity(133U);
    msg.id = 143U;
    msg.zoom = 3U;
    msg.action = 56U;

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
    msg.setTimeStamp(0.571156710722);
    msg.setSource(52683U);
    msg.setSourceEntity(189U);
    msg.setDestination(52578U);
    msg.setDestinationEntity(14U);
    msg.id = 26U;
    msg.zoom = 20U;
    msg.action = 173U;

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
    msg.setTimeStamp(0.641911569853);
    msg.setSource(46680U);
    msg.setSourceEntity(221U);
    msg.setDestination(9543U);
    msg.setDestinationEntity(145U);
    msg.id = 195U;
    msg.value = 0.251307510492;

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
    msg.setTimeStamp(0.125042543046);
    msg.setSource(13389U);
    msg.setSourceEntity(195U);
    msg.setDestination(45805U);
    msg.setDestinationEntity(209U);
    msg.id = 18U;
    msg.value = 0.870818507567;

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
    msg.setTimeStamp(0.765913833256);
    msg.setSource(28107U);
    msg.setSourceEntity(234U);
    msg.setDestination(46296U);
    msg.setDestinationEntity(185U);
    msg.id = 114U;
    msg.value = 0.308583465523;

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
    msg.setTimeStamp(0.44054246621);
    msg.setSource(28866U);
    msg.setSourceEntity(103U);
    msg.setDestination(12610U);
    msg.setDestinationEntity(45U);
    msg.id = 241U;
    msg.value = 0.280059521196;

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
    msg.setTimeStamp(0.641559048994);
    msg.setSource(495U);
    msg.setSourceEntity(13U);
    msg.setDestination(50531U);
    msg.setDestinationEntity(28U);
    msg.id = 100U;
    msg.value = 0.228858657401;

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
    msg.setTimeStamp(0.116492196226);
    msg.setSource(41160U);
    msg.setSourceEntity(211U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(64U);
    msg.id = 63U;
    msg.value = 0.00162543272395;

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
    msg.setTimeStamp(0.165480070872);
    msg.setSource(59843U);
    msg.setSourceEntity(73U);
    msg.setDestination(19107U);
    msg.setDestinationEntity(210U);
    msg.id = 187U;
    msg.angle = 0.366342199802;

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
    msg.setTimeStamp(0.755151254128);
    msg.setSource(39870U);
    msg.setSourceEntity(212U);
    msg.setDestination(53071U);
    msg.setDestinationEntity(6U);
    msg.id = 234U;
    msg.angle = 0.321339236451;

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
    msg.setTimeStamp(0.697525377889);
    msg.setSource(39421U);
    msg.setSourceEntity(121U);
    msg.setDestination(30955U);
    msg.setDestinationEntity(96U);
    msg.id = 63U;
    msg.angle = 0.645571102099;

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
    msg.setTimeStamp(0.964091150536);
    msg.setSource(57289U);
    msg.setSourceEntity(27U);
    msg.setDestination(1027U);
    msg.setDestinationEntity(115U);
    msg.op = 89U;
    msg.actions.assign("TGEISOLNXDAYRYDZWQXZRDUAPFHHQCDQMVICNCMCCRELWJHPTBGG");

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
    msg.setTimeStamp(0.351599702628);
    msg.setSource(17217U);
    msg.setSourceEntity(175U);
    msg.setDestination(40282U);
    msg.setDestinationEntity(47U);
    msg.op = 157U;
    msg.actions.assign("VWIBTAOKOGLRYALFSDRJBELPKZNCVOJIJUDZEHAOQSOMXTFRRDOSVKMKYVOHVONPRQCRDELUAMXBFKRNEFGYLQAEVCXXKHDSLIQDQZLBCAWTXWNVAIZQIFUQGMGWDMEHZYNPGWCPQCTTZG");

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
    msg.setTimeStamp(0.716715016122);
    msg.setSource(52606U);
    msg.setSourceEntity(135U);
    msg.setDestination(6440U);
    msg.setDestinationEntity(201U);
    msg.op = 114U;
    msg.actions.assign("YAJXJEZURILJVZCQCEFPSFUTPYYUYHVFGAETGDBZVEFKOMNXYPKIOZQRUAMUGXVHQAIKMCYBXKWHQJPGRSRHLTHJFLFDFXE");

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
    msg.setTimeStamp(0.0992277533427);
    msg.setSource(30251U);
    msg.setSourceEntity(115U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(138U);
    msg.actions.assign("GDCUIZPMELNENULUITZLGBHVJXEXZLMQKMXQEZSPNVJYFZBYRIBBJRQNZPJXHMWKBWQTLQYXKOQHOXOBHISKDDSRDLULSSDUZINSFHRVXNOOTAHMGAZCOJWZXEWCIYAJQHQEKBDBHJJCVPYICWJSMBNDWDQRTRGATNRTFMWCJFKVYOVTVRMEYPEFKGQAGSCNFYKSLPVGTFTDOULRCCWAYXXEZIAGFAGYAPEBWLPSOUPOVCAFI");

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
    msg.setTimeStamp(0.937237924554);
    msg.setSource(3255U);
    msg.setSourceEntity(48U);
    msg.setDestination(33972U);
    msg.setDestinationEntity(181U);
    msg.actions.assign("YGCICAIVALWHNAFYDPIBGQMKFMENJXJNXXKYYWQQGCAGPWBJUBNDMZUUUYSQIEZFKISRXEKFTNZAAMZREZEOLIGERWLULUVBVBJAZVBVLYQWWRLHKJRDMBWPUCUSWOJRRQIPQLVCYZQDSXTSHKMTKOHHDGBRVEULIFPWJVODPJFMKCOHNSOLPAVZYQTTBXNDXZSWJHXVDASNPTHJZ");

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
    msg.setTimeStamp(0.832502940213);
    msg.setSource(36463U);
    msg.setSourceEntity(208U);
    msg.setDestination(20344U);
    msg.setDestinationEntity(52U);
    msg.actions.assign("SJEEFITERIMZMACAUTPHAVASOWRDWFOMQTBDZRNPWAPOVIJZASRLJMBERNQUTMMAGPWBWJPHKIZJTZHBWQMMPCSRSUUMXXCOLOEUSKMCTZFXCUQPJEZWUFYKKNAGJEHRXONFNETCWUIBDVRI");

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
    msg.setTimeStamp(0.913136249029);
    msg.setSource(27350U);
    msg.setSourceEntity(137U);
    msg.setDestination(30936U);
    msg.setDestinationEntity(34U);
    msg.button = 18U;
    msg.value = 16U;

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
    msg.setTimeStamp(0.826378716055);
    msg.setSource(52243U);
    msg.setSourceEntity(23U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(96U);
    msg.button = 80U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.202152128081);
    msg.setSource(19774U);
    msg.setSourceEntity(152U);
    msg.setDestination(24879U);
    msg.setDestinationEntity(97U);
    msg.button = 164U;
    msg.value = 194U;

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
    msg.setTimeStamp(0.0640086691436);
    msg.setSource(15225U);
    msg.setSourceEntity(84U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(200U);
    msg.op = 30U;
    msg.text.assign("UJFTDKHKFMCPHXKBURPJDEWUIEUSNKXDYPGFAEGDCGJENULHCRJAAWNVCJMHMZPK");

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
    msg.setTimeStamp(0.268033505093);
    msg.setSource(4326U);
    msg.setSourceEntity(217U);
    msg.setDestination(40909U);
    msg.setDestinationEntity(57U);
    msg.op = 220U;
    msg.text.assign("AUNQILHRKBPPBOVXSRFVEZQGWYKKNAGJQDEGPAPCQWMSKEEVNSWURQTKPQRGIDKQPTGMLVWYUC");

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
    msg.setTimeStamp(0.766175654547);
    msg.setSource(6619U);
    msg.setSourceEntity(134U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(139U);
    msg.op = 43U;
    msg.text.assign("YYXJUXPPWSGCGBFDLJWECTAMLWKSXSZ");

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
    msg.setTimeStamp(0.576122083414);
    msg.setSource(29968U);
    msg.setSourceEntity(183U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(218U);
    msg.op = 158U;
    msg.time_remain = 0.675766090271;
    msg.sched_time = 0.466309267023;

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
    msg.setTimeStamp(0.265666678051);
    msg.setSource(21093U);
    msg.setSourceEntity(171U);
    msg.setDestination(43336U);
    msg.setDestinationEntity(94U);
    msg.op = 113U;
    msg.time_remain = 0.175487404067;
    msg.sched_time = 0.323361771604;

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
    msg.setTimeStamp(0.435469717823);
    msg.setSource(50663U);
    msg.setSourceEntity(250U);
    msg.setDestination(11989U);
    msg.setDestinationEntity(96U);
    msg.op = 204U;
    msg.time_remain = 0.489927855165;
    msg.sched_time = 0.594288005076;

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
    msg.setTimeStamp(0.279820175871);
    msg.setSource(5036U);
    msg.setSourceEntity(52U);
    msg.setDestination(63217U);
    msg.setDestinationEntity(102U);
    msg.name.assign("BYCFSTWIXMYXRCJLXYXMPECAQXAVNZKKQSZOIDZMBDADRBMLGFX");
    msg.op = 16U;
    msg.sched_time = 0.237069615587;

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
    msg.setTimeStamp(0.233635114999);
    msg.setSource(13680U);
    msg.setSourceEntity(218U);
    msg.setDestination(14999U);
    msg.setDestinationEntity(67U);
    msg.name.assign("LPKDWNPXZMHR");
    msg.op = 142U;
    msg.sched_time = 0.215402568536;

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
    msg.setTimeStamp(0.513964776471);
    msg.setSource(52891U);
    msg.setSourceEntity(169U);
    msg.setDestination(39144U);
    msg.setDestinationEntity(8U);
    msg.name.assign("BUJKGBXAXHWZHNDHXYQJZYPQXFFABIKILYZTKEIBDCMXSRNXPCOWPMGJVEEWOTRU");
    msg.op = 11U;
    msg.sched_time = 0.685968358233;

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
    msg.setTimeStamp(0.224801430969);
    msg.setSource(33137U);
    msg.setSourceEntity(204U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.623086176294);
    msg.setSource(23919U);
    msg.setSourceEntity(190U);
    msg.setDestination(34656U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.525453877148);
    msg.setSource(53775U);
    msg.setSourceEntity(210U);
    msg.setDestination(40693U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.68896415001);
    msg.setSource(48419U);
    msg.setSourceEntity(144U);
    msg.setDestination(8363U);
    msg.setDestinationEntity(235U);
    msg.name.assign("BUGUWRTHRNMIYMGZDQFXNKDVSDIHRWARCTHYIILEPGWUKPJPLTOJVTEJQYDCJPNAIAKUSGEZWNHTLOSYTXCTWEONLORDXXNFMZCUSMVSOUGPIXVBLQXBMQHOYDBNWGMFSHJVIKEMSURPCMYZCYOQISCZKNSZD");
    msg.state = 239U;

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
    msg.setTimeStamp(0.305732121574);
    msg.setSource(6125U);
    msg.setSourceEntity(188U);
    msg.setDestination(10779U);
    msg.setDestinationEntity(145U);
    msg.name.assign("QTHHJXSZNADKSYBUTYNWCSDMITMBUKUJVPYJGCSWPRQTSEQXFANEDQARVQSOPEMLRHDFGJMZFRYATSFRXBCUGXUZMETZO");
    msg.state = 98U;

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
    msg.setTimeStamp(0.121513060363);
    msg.setSource(84U);
    msg.setSourceEntity(93U);
    msg.setDestination(17119U);
    msg.setDestinationEntity(109U);
    msg.name.assign("MUWTAKSZDMAICZ");
    msg.state = 97U;

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
    msg.setTimeStamp(0.714947113717);
    msg.setSource(48751U);
    msg.setSourceEntity(27U);
    msg.setDestination(56520U);
    msg.setDestinationEntity(12U);
    msg.name.assign("JIERHMKNWMZBHEDJTNBDQMNHDEXGICAXQOGDCZLRWAWUSELFHQLSGDJHBVVTONVHZHJPTYIIXYMFCKVDXAAVPDZOTOHDSSMASLATRYDOWEHCOTNKCVUXLTGOSEWZQHPIPJFUSFKWRAKKSZQCRKULVYBJUKONAITEMACIGQLMBCJLYYZFPUWJBREVXMLYBABFNGJSMEYNNTVCZIQQPZTKMWSQXWOXPXWRGKBRLGIUFBGPVEGJYP");
    msg.value = 204U;

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
    msg.setTimeStamp(0.532687899109);
    msg.setSource(8961U);
    msg.setSourceEntity(90U);
    msg.setDestination(50187U);
    msg.setDestinationEntity(99U);
    msg.name.assign("TNGOHEXLAPZWAIYWHLSPYHQGFVJRYTMWYNUYKMXESDHQZBRUQBVPWLCADKUWMTPPWTRNJLTAHGPYJYEPXVGUZZGDESTHUCHCEAFBILOFCRQDGMFULYOXZRBPHUIQDJUCBSRBTXDKKBKAZVWFCNSOXNIFLCAKMVFCZWENQXHEFEDVHLEIKNJXRITLAMSFIYMDQFGTCJBRORDSOOAIXRWKVVGZSEJCTNXVBJSGMOWPOSILMQVMNQUIZYBZ");
    msg.value = 109U;

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
    msg.setTimeStamp(0.393762246487);
    msg.setSource(50590U);
    msg.setSourceEntity(79U);
    msg.setDestination(43700U);
    msg.setDestinationEntity(223U);
    msg.name.assign("OXXGXJYEMKYYVXKNIHKZPBDCFCWMWEVRYBQCTKMOMQPTBGINQVBVZYARBLRDUGJWFPYJBLTUNNOLEINFTIDGZWGJWUPXHIIKASFVJGUGMNLNTXTAMRDAWAZDEXYHEMCLXJUSKWUOPTZEV");
    msg.value = 179U;

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
    msg.setTimeStamp(0.0255897902534);
    msg.setSource(62037U);
    msg.setSourceEntity(220U);
    msg.setDestination(6853U);
    msg.setDestinationEntity(100U);
    msg.name.assign("NNIYZQOPTOCYEYHOYKGBWZACWIECDVINHRPFTBUJHYPVBJCYEFSELLMUKLWKLKXKILSMFVPCSMHBDSMKIWNXILGLJAAIENDZZCRMGVVTSFWBNSHFBSURFOCOMOXQTMXZBRUHZJGRVOQRKPRIVSBSDUPAXNATEDDUAMGXHEFEJPYJYZPJOAQDXWDKVUFLTHXQNZTFXKGQXMJTRMCCYWOTQEZFEDUGHGIYPGQLWGUNDQBOHZJB");

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
    msg.setTimeStamp(0.698537680608);
    msg.setSource(41729U);
    msg.setSourceEntity(146U);
    msg.setDestination(25522U);
    msg.setDestinationEntity(131U);
    msg.name.assign("VYZXQSMMBXGTJRJETGLZFUDYIQHNTPEAQPYFISJNNCLMYSOMVKQAJRMHSXBRPZPJRQDPSWDZIVZJKBULUCKCEMOUWWQLBPOUTPPKAXGBJZQMVULWISUGCKINCRDOVIHYFNRWNERVKATXSQBRQXHALBEWINACMZZTPOEXRPIZXHFFSBGVRGVMWFODIAECNIVVKCEEHADKYWHT");

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
    msg.setTimeStamp(0.0506048460527);
    msg.setSource(60585U);
    msg.setSourceEntity(237U);
    msg.setDestination(25266U);
    msg.setDestinationEntity(106U);
    msg.name.assign("OYITMICCMLSXLFWNERPYPIQIGAYWCNZIPDGMZVFTGQVBOSAKJVJKGKZHDUNJPOHEMSXABFTTOLLQVAQSLJQBBNUDSDNYDGEVFTNMRXOWBISPYEMBWWSZTFISBAJUHRTCEXDBAXJXK");

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
    msg.setTimeStamp(0.788502644791);
    msg.setSource(420U);
    msg.setSourceEntity(26U);
    msg.setDestination(3385U);
    msg.setDestinationEntity(114U);
    msg.name.assign("CQZFFBRARNFTUIPXNGWRPOVRUJLKLWHREPPVBOQIMQDVHUZPKWRDGLYCGIQVPHYOKCNJUHIAMXVYGMPOGQJSYAGXZTELVFICXHENXBMBAKJSVSMJKWRYCLTCDLTDEDDCAFTBAOSYXTZUJMVBHLGTN");
    msg.value = 117U;

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
    msg.setTimeStamp(0.86815481466);
    msg.setSource(6168U);
    msg.setSourceEntity(76U);
    msg.setDestination(48866U);
    msg.setDestinationEntity(144U);
    msg.name.assign("HUBTFTWMPTDSFKCWXSQNGWVADTMEGXFHKKMAIYPXZPTCYQQZTDMUFQKRCGOJDHQCWLENMBAYXGZWRAYJSRKNOBNALKZTEKDBCLWUSVRASIKJAMSFLGBBOCPQOOIWCLMQVROLQJVUWHCXHEFLVJIYGXAMXNYAKDQJENKNPIUIIRDNBMSYGWELIBOJXFDBXRGE");
    msg.value = 17U;

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
    msg.setTimeStamp(0.825706178374);
    msg.setSource(32625U);
    msg.setSourceEntity(187U);
    msg.setDestination(41492U);
    msg.setDestinationEntity(143U);
    msg.name.assign("DEVLBSSHCUYLFXFLWUIGOZRKXHQDU");
    msg.value = 184U;

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
    IMC::SetPWM msg;
    msg.setTimeStamp(0.436637050305);
    msg.setSource(4489U);
    msg.setSourceEntity(7U);
    msg.setDestination(63374U);
    msg.setDestinationEntity(144U);
    msg.id = 241U;
    msg.period = 1275754130U;
    msg.duty_cycle = 2852836815U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.72563492672);
    msg.setSource(58945U);
    msg.setSourceEntity(194U);
    msg.setDestination(64974U);
    msg.setDestinationEntity(200U);
    msg.id = 165U;
    msg.period = 2972768546U;
    msg.duty_cycle = 3641145494U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.445997015087);
    msg.setSource(46597U);
    msg.setSourceEntity(179U);
    msg.setDestination(60743U);
    msg.setDestinationEntity(160U);
    msg.id = 194U;
    msg.period = 3996335383U;
    msg.duty_cycle = 568047999U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.724062983165);
    msg.setSource(39550U);
    msg.setSourceEntity(73U);
    msg.setDestination(49312U);
    msg.setDestinationEntity(102U);
    msg.id = 227U;
    msg.period = 3444384537U;
    msg.duty_cycle = 1125651496U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.647084838027);
    msg.setSource(7204U);
    msg.setSourceEntity(200U);
    msg.setDestination(29787U);
    msg.setDestinationEntity(15U);
    msg.id = 33U;
    msg.period = 2497896047U;
    msg.duty_cycle = 2671976041U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.447758316362);
    msg.setSource(15464U);
    msg.setSourceEntity(165U);
    msg.setDestination(39646U);
    msg.setDestinationEntity(211U);
    msg.id = 140U;
    msg.period = 2734868787U;
    msg.duty_cycle = 2498588917U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
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
    msg.setTimeStamp(0.86019671018);
    msg.setSource(62272U);
    msg.setSourceEntity(224U);
    msg.setDestination(32144U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.419843911945;
    msg.lon = 0.740979451739;
    msg.height = 0.891612017457;
    msg.x = 0.188453410634;
    msg.y = 0.820596208478;
    msg.z = 0.718885908241;
    msg.phi = 0.417791412167;
    msg.theta = 0.680913566267;
    msg.psi = 0.112774139629;
    msg.u = 0.72744986799;
    msg.v = 0.232056853628;
    msg.w = 0.589352551808;
    msg.vx = 0.59554061681;
    msg.vy = 0.0279634310272;
    msg.vz = 0.839864600738;
    msg.p = 0.873258046063;
    msg.q = 0.81114138736;
    msg.r = 0.481468692449;
    msg.depth = 0.175166559565;
    msg.alt = 0.732890955233;

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
    msg.setTimeStamp(0.728701851674);
    msg.setSource(59083U);
    msg.setSourceEntity(74U);
    msg.setDestination(5043U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.940208576985;
    msg.lon = 0.124833048711;
    msg.height = 0.498649275132;
    msg.x = 0.224922434456;
    msg.y = 0.217164967619;
    msg.z = 0.498215088614;
    msg.phi = 0.717793385989;
    msg.theta = 0.917428179546;
    msg.psi = 0.139934384363;
    msg.u = 0.0553462250357;
    msg.v = 0.87545891003;
    msg.w = 0.290713889495;
    msg.vx = 0.03253993547;
    msg.vy = 0.466098084653;
    msg.vz = 0.0862915269697;
    msg.p = 0.486719171632;
    msg.q = 0.283374301311;
    msg.r = 0.70236606396;
    msg.depth = 0.845597476592;
    msg.alt = 0.444539818091;

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
    msg.setTimeStamp(0.734292950826);
    msg.setSource(54027U);
    msg.setSourceEntity(95U);
    msg.setDestination(50670U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.656043597341;
    msg.lon = 0.550804094869;
    msg.height = 0.564347958595;
    msg.x = 0.0921652850874;
    msg.y = 0.960483884816;
    msg.z = 0.929659694085;
    msg.phi = 0.844148397503;
    msg.theta = 0.977919495148;
    msg.psi = 0.0835074686573;
    msg.u = 0.303077009251;
    msg.v = 0.703243844631;
    msg.w = 0.557552005734;
    msg.vx = 0.899551243724;
    msg.vy = 0.378388227171;
    msg.vz = 0.788858967193;
    msg.p = 0.336953204892;
    msg.q = 0.16714394522;
    msg.r = 0.0906927678913;
    msg.depth = 0.0174731287405;
    msg.alt = 0.690696941873;

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
    msg.setTimeStamp(0.860465680888);
    msg.setSource(22697U);
    msg.setSourceEntity(52U);
    msg.setDestination(12000U);
    msg.setDestinationEntity(222U);
    msg.x = 0.60383218542;
    msg.y = 0.288510973506;
    msg.z = 0.0391524291186;

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
    msg.setTimeStamp(0.927675787898);
    msg.setSource(44551U);
    msg.setSourceEntity(87U);
    msg.setDestination(18032U);
    msg.setDestinationEntity(51U);
    msg.x = 0.592139418741;
    msg.y = 0.98184653921;
    msg.z = 0.300270912473;

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
    msg.setTimeStamp(0.90928798674);
    msg.setSource(29380U);
    msg.setSourceEntity(48U);
    msg.setDestination(52917U);
    msg.setDestinationEntity(30U);
    msg.x = 0.787845944009;
    msg.y = 0.312889629546;
    msg.z = 0.169806627452;

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
    msg.setTimeStamp(0.479685525848);
    msg.setSource(22473U);
    msg.setSourceEntity(69U);
    msg.setDestination(13627U);
    msg.setDestinationEntity(136U);
    msg.value = 0.61578985852;

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
    msg.setTimeStamp(0.120972090452);
    msg.setSource(4888U);
    msg.setSourceEntity(82U);
    msg.setDestination(29115U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0483099243904;

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
    msg.setTimeStamp(0.562432471378);
    msg.setSource(50680U);
    msg.setSourceEntity(115U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(237U);
    msg.value = 0.856176275142;

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
    msg.setTimeStamp(0.240310108884);
    msg.setSource(63095U);
    msg.setSourceEntity(204U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(80U);
    msg.value = 0.940406380494;

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
    msg.setTimeStamp(0.403801120807);
    msg.setSource(4764U);
    msg.setSourceEntity(67U);
    msg.setDestination(4874U);
    msg.setDestinationEntity(228U);
    msg.value = 0.481658308988;

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
    msg.setTimeStamp(0.269479211078);
    msg.setSource(32805U);
    msg.setSourceEntity(22U);
    msg.setDestination(56582U);
    msg.setDestinationEntity(113U);
    msg.value = 0.758815762946;

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
    msg.setTimeStamp(0.755535127755);
    msg.setSource(16056U);
    msg.setSourceEntity(32U);
    msg.setDestination(48285U);
    msg.setDestinationEntity(230U);
    msg.x = 0.907616268353;
    msg.y = 0.0201500503313;
    msg.z = 0.554515494577;
    msg.phi = 0.367670294938;
    msg.theta = 0.10413026774;
    msg.psi = 0.733747136222;
    msg.p = 0.608635636836;
    msg.q = 0.289664604832;
    msg.r = 0.960331365384;
    msg.u = 0.413718728838;
    msg.v = 0.0257543671303;
    msg.w = 0.0112223531897;
    msg.bias_psi = 0.324088447438;
    msg.bias_r = 0.40978868015;

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
    msg.setTimeStamp(0.534813798011);
    msg.setSource(21359U);
    msg.setSourceEntity(178U);
    msg.setDestination(28929U);
    msg.setDestinationEntity(74U);
    msg.x = 0.311753188958;
    msg.y = 0.77610230666;
    msg.z = 0.0621471049429;
    msg.phi = 0.278532284243;
    msg.theta = 0.0187411236102;
    msg.psi = 0.69712478179;
    msg.p = 0.326709802783;
    msg.q = 0.627495696237;
    msg.r = 0.338366798556;
    msg.u = 0.400374115988;
    msg.v = 0.0944706837224;
    msg.w = 0.586143264939;
    msg.bias_psi = 0.328023792332;
    msg.bias_r = 0.813086109872;

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
    msg.setTimeStamp(0.87497809989);
    msg.setSource(8744U);
    msg.setSourceEntity(16U);
    msg.setDestination(6306U);
    msg.setDestinationEntity(189U);
    msg.x = 0.541095170447;
    msg.y = 0.587330036186;
    msg.z = 0.0335824508073;
    msg.phi = 0.185164586152;
    msg.theta = 0.032816655709;
    msg.psi = 0.127803542995;
    msg.p = 0.792702584804;
    msg.q = 0.492220202166;
    msg.r = 0.262077814696;
    msg.u = 0.462692615827;
    msg.v = 0.985011564277;
    msg.w = 0.483133993196;
    msg.bias_psi = 0.725677781618;
    msg.bias_r = 0.420807485352;

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
    msg.setTimeStamp(0.464769689483);
    msg.setSource(59867U);
    msg.setSourceEntity(102U);
    msg.setDestination(63378U);
    msg.setDestinationEntity(21U);
    msg.bias_psi = 0.507763896102;
    msg.bias_r = 0.549747512753;
    msg.cog = 0.458978883999;
    msg.cyaw = 0.910944357155;
    msg.lbl_rej_level = 0.598794417986;
    msg.gps_rej_level = 0.617761207732;
    msg.custom_x = 0.47561341244;
    msg.custom_y = 0.596959847011;
    msg.custom_z = 0.657942913548;

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
    msg.setTimeStamp(0.855985943791);
    msg.setSource(47620U);
    msg.setSourceEntity(62U);
    msg.setDestination(45233U);
    msg.setDestinationEntity(135U);
    msg.bias_psi = 0.920530096874;
    msg.bias_r = 0.80459839077;
    msg.cog = 0.060329748579;
    msg.cyaw = 0.792076874621;
    msg.lbl_rej_level = 0.982404349209;
    msg.gps_rej_level = 0.00407476448527;
    msg.custom_x = 0.424023530932;
    msg.custom_y = 0.149001763276;
    msg.custom_z = 0.349756161986;

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
    msg.setTimeStamp(0.15170146136);
    msg.setSource(20723U);
    msg.setSourceEntity(80U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(57U);
    msg.bias_psi = 0.891190119817;
    msg.bias_r = 0.263141117047;
    msg.cog = 0.267269320955;
    msg.cyaw = 0.0506080695128;
    msg.lbl_rej_level = 0.302611086209;
    msg.gps_rej_level = 0.8469013434;
    msg.custom_x = 0.416692632817;
    msg.custom_y = 0.303058923584;
    msg.custom_z = 0.658527374576;

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
    msg.setTimeStamp(0.267798504194);
    msg.setSource(23480U);
    msg.setSourceEntity(187U);
    msg.setDestination(37638U);
    msg.setDestinationEntity(84U);
    msg.utc_time = 0.356383023439;
    msg.reason = 142U;

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
    msg.setTimeStamp(0.439751391792);
    msg.setSource(2964U);
    msg.setSourceEntity(146U);
    msg.setDestination(5672U);
    msg.setDestinationEntity(76U);
    msg.utc_time = 0.260391072995;
    msg.reason = 168U;

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
    msg.setTimeStamp(0.527854252871);
    msg.setSource(55039U);
    msg.setSourceEntity(118U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.773483827795;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.434452643579);
    msg.setSource(24471U);
    msg.setSourceEntity(179U);
    msg.setDestination(1823U);
    msg.setDestinationEntity(72U);
    msg.id = 146U;
    msg.range = 0.563714808374;
    msg.acceptance = 153U;

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
    msg.setTimeStamp(0.801120523378);
    msg.setSource(32655U);
    msg.setSourceEntity(83U);
    msg.setDestination(63642U);
    msg.setDestinationEntity(160U);
    msg.id = 66U;
    msg.range = 0.502501279039;
    msg.acceptance = 143U;

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
    msg.setTimeStamp(0.611915426051);
    msg.setSource(12449U);
    msg.setSourceEntity(99U);
    msg.setDestination(31199U);
    msg.setDestinationEntity(170U);
    msg.id = 39U;
    msg.range = 0.244218207061;
    msg.acceptance = 167U;

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
    msg.setTimeStamp(0.0731385748056);
    msg.setSource(41191U);
    msg.setSourceEntity(176U);
    msg.setDestination(31006U);
    msg.setDestinationEntity(85U);
    msg.type = 21U;
    msg.reason = 111U;
    msg.value = 0.00721624342678;
    msg.timestep = 0.993947580253;

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
    msg.setTimeStamp(0.765058430329);
    msg.setSource(61973U);
    msg.setSourceEntity(111U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(22U);
    msg.type = 24U;
    msg.reason = 8U;
    msg.value = 0.126654851699;
    msg.timestep = 0.356147096704;

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
    msg.setTimeStamp(0.245878467466);
    msg.setSource(27232U);
    msg.setSourceEntity(13U);
    msg.setDestination(38002U);
    msg.setDestinationEntity(64U);
    msg.type = 127U;
    msg.reason = 106U;
    msg.value = 0.940533059449;
    msg.timestep = 0.668613664938;

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
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.151850960295);
    msg.setSource(28443U);
    msg.setSourceEntity(169U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(114U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RLGHTYWCQJLODCOWQPNJRUHGYGLVPEPRJKMBQKEBVFBUFNNRMHXTGHMWFZIYENHAJROKJTZKSFYZSSLPYSFOZTDAESEYLCTXAPTZXUFIUXILTBAPCQAJCWJJZIBIXAB");
    tmp_msg_0.lat = 0.992950746924;
    tmp_msg_0.lon = 0.0239248090107;
    tmp_msg_0.depth = 0.688404690838;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 246U;
    tmp_msg_0.transponder_delay = 53U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.460913493967;
    msg.y = 0.0369023984177;
    msg.var_x = 0.911739361374;
    msg.var_y = 0.0982892699924;
    msg.distance = 0.64179927162;

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
    msg.setTimeStamp(0.367263326724);
    msg.setSource(18399U);
    msg.setSourceEntity(106U);
    msg.setDestination(2459U);
    msg.setDestinationEntity(93U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZWGCLRQLVNZMSRHAWGIFATAJFJNZCVCOXZIZCZTUMGQOLTSEKHDDEGGISLAWPBRLDFLYYDKEMVXNREIGTJHKBFKBDXKMMVMMXFKBIDBEGNHTRCPMHZEABBUUVUXUGQPAJYGPDIOWXHSVEVSHQVRJJAFTWYILXCPJCXGBWYCOTOSHVYRTURSLPQAQWPXINUFQNYQPQWNCJOSAFSOKOMNTEZUJXWHDPFNZBICEYQTIFAORUDZYHWNDROKVBUEPKM");
    tmp_msg_0.lat = 0.813013538689;
    tmp_msg_0.lon = 0.787813145899;
    tmp_msg_0.depth = 0.861686167926;
    tmp_msg_0.query_channel = 111U;
    tmp_msg_0.reply_channel = 187U;
    tmp_msg_0.transponder_delay = 113U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.870306789018;
    msg.y = 0.999412176502;
    msg.var_x = 0.602188178362;
    msg.var_y = 0.8616193239;
    msg.distance = 0.823323948875;

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
    msg.setTimeStamp(0.214533840151);
    msg.setSource(17766U);
    msg.setSourceEntity(153U);
    msg.setDestination(11174U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LJLEVKTPQMIPEWFLAWESZTASLQHONNCZHUVQIPRFJSVWJQYJIJMULBTVNKZZMTZFRIAWPEOGKDWWHAUMKINQDYCAVNZKXYFCXXNAURJHVQOGREPWOHSDXKILBGLDNDMAWCYQEKBUBOHFBFBVVMFLJGZHDHTYRYEAGKTXXZSKUKOIQPJRSTZCMAPNTWUHCPGDUIRXXCBLERJUQIGYBZOBMAWQPSHRCFOJGEFOXIDYYDMNSNLCGSOMVFTTEVG");
    tmp_msg_0.lat = 0.855329639128;
    tmp_msg_0.lon = 0.381923963693;
    tmp_msg_0.depth = 0.334619601846;
    tmp_msg_0.query_channel = 233U;
    tmp_msg_0.reply_channel = 3U;
    tmp_msg_0.transponder_delay = 64U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.624246885136;
    msg.y = 0.0827662302854;
    msg.var_x = 0.947188273583;
    msg.var_y = 0.58006859878;
    msg.distance = 0.234059234563;

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
    msg.setTimeStamp(0.783090923924);
    msg.setSource(56643U);
    msg.setSourceEntity(69U);
    msg.setDestination(43977U);
    msg.setDestinationEntity(180U);
    msg.state = 234U;

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
    msg.setTimeStamp(0.384006022958);
    msg.setSource(11929U);
    msg.setSourceEntity(215U);
    msg.setDestination(55855U);
    msg.setDestinationEntity(147U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.51362481525);
    msg.setSource(44995U);
    msg.setSourceEntity(44U);
    msg.setDestination(21306U);
    msg.setDestinationEntity(197U);
    msg.state = 8U;

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
    msg.setTimeStamp(0.331990511642);
    msg.setSource(29246U);
    msg.setSourceEntity(173U);
    msg.setDestination(64743U);
    msg.setDestinationEntity(96U);
    msg.x = 0.169540066024;
    msg.y = 0.00609750751405;
    msg.z = 0.926773093939;

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
    msg.setTimeStamp(0.896468379376);
    msg.setSource(12296U);
    msg.setSourceEntity(197U);
    msg.setDestination(3842U);
    msg.setDestinationEntity(3U);
    msg.x = 0.437815449336;
    msg.y = 0.202820528068;
    msg.z = 0.385031134224;

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
    msg.setTimeStamp(0.312047632876);
    msg.setSource(57418U);
    msg.setSourceEntity(165U);
    msg.setDestination(4658U);
    msg.setDestinationEntity(144U);
    msg.x = 0.568299322471;
    msg.y = 0.0252983189051;
    msg.z = 0.379407700107;

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
    msg.setTimeStamp(0.982609808865);
    msg.setSource(28139U);
    msg.setSourceEntity(31U);
    msg.setDestination(34241U);
    msg.setDestinationEntity(253U);
    msg.value = 0.783098128124;

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
    msg.setTimeStamp(0.723110925826);
    msg.setSource(37055U);
    msg.setSourceEntity(169U);
    msg.setDestination(18201U);
    msg.setDestinationEntity(38U);
    msg.value = 0.032011232698;

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
    msg.setTimeStamp(0.0271870171904);
    msg.setSource(9621U);
    msg.setSourceEntity(46U);
    msg.setDestination(46093U);
    msg.setDestinationEntity(204U);
    msg.value = 0.906872557306;

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
    msg.setTimeStamp(0.380917481466);
    msg.setSource(9868U);
    msg.setSourceEntity(147U);
    msg.setDestination(24666U);
    msg.setDestinationEntity(109U);
    msg.value = 0.225023882899;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.975979224645);
    msg.setSource(51197U);
    msg.setSourceEntity(209U);
    msg.setDestination(28561U);
    msg.setDestinationEntity(229U);
    msg.value = 0.403295551379;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.14102900681);
    msg.setSource(36776U);
    msg.setSourceEntity(29U);
    msg.setDestination(38151U);
    msg.setDestinationEntity(73U);
    msg.value = 0.693299850107;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.592028208925);
    msg.setSource(21178U);
    msg.setSourceEntity(14U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(165U);
    msg.value = 0.00157857422266;
    msg.speed_units = 48U;

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
    msg.setTimeStamp(0.552245092676);
    msg.setSource(6951U);
    msg.setSourceEntity(250U);
    msg.setDestination(10639U);
    msg.setDestinationEntity(4U);
    msg.value = 0.582846549212;
    msg.speed_units = 48U;

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
    msg.setTimeStamp(0.206520915706);
    msg.setSource(58159U);
    msg.setSourceEntity(197U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(1U);
    msg.value = 0.0352371243779;
    msg.speed_units = 82U;

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
    msg.setTimeStamp(0.342596326238);
    msg.setSource(47742U);
    msg.setSourceEntity(198U);
    msg.setDestination(42593U);
    msg.setDestinationEntity(232U);
    msg.value = 0.724949207325;

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
    msg.setTimeStamp(0.734310135306);
    msg.setSource(34096U);
    msg.setSourceEntity(54U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(234U);
    msg.value = 0.366252515474;

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
    msg.setTimeStamp(0.348779174851);
    msg.setSource(7757U);
    msg.setSourceEntity(225U);
    msg.setDestination(44070U);
    msg.setDestinationEntity(194U);
    msg.value = 0.350769239081;

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
    msg.setTimeStamp(0.174923505594);
    msg.setSource(59428U);
    msg.setSourceEntity(4U);
    msg.setDestination(51477U);
    msg.setDestinationEntity(99U);
    msg.value = 0.0302142069412;

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
    msg.setTimeStamp(0.256553167131);
    msg.setSource(56925U);
    msg.setSourceEntity(136U);
    msg.setDestination(8727U);
    msg.setDestinationEntity(226U);
    msg.value = 0.0273212542599;

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
    msg.setTimeStamp(0.3285696469);
    msg.setSource(35192U);
    msg.setSourceEntity(219U);
    msg.setDestination(58290U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7581578106;

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
    msg.setTimeStamp(0.0916740959567);
    msg.setSource(641U);
    msg.setSourceEntity(211U);
    msg.setDestination(5625U);
    msg.setDestinationEntity(53U);
    msg.value = 0.0183562483888;

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
    msg.setTimeStamp(0.169403948524);
    msg.setSource(23878U);
    msg.setSourceEntity(76U);
    msg.setDestination(46431U);
    msg.setDestinationEntity(249U);
    msg.value = 0.13201859061;

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
    msg.setTimeStamp(0.994595946892);
    msg.setSource(28284U);
    msg.setSourceEntity(211U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(254U);
    msg.value = 0.341057898377;

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
    msg.setTimeStamp(0.45219297513);
    msg.setSource(25612U);
    msg.setSourceEntity(124U);
    msg.setDestination(40691U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 809317265U;
    msg.start_lat = 0.253245588634;
    msg.start_lon = 0.656407725045;
    msg.start_z = 0.0179125898285;
    msg.start_z_units = 32U;
    msg.end_lat = 0.395392888825;
    msg.end_lon = 0.135400380617;
    msg.end_z = 0.268948975742;
    msg.end_z_units = 156U;
    msg.speed = 0.0530468933725;
    msg.speed_units = 91U;
    msg.lradius = 0.0447424686455;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.943572943852);
    msg.setSource(52562U);
    msg.setSourceEntity(113U);
    msg.setDestination(61827U);
    msg.setDestinationEntity(131U);
    msg.path_ref = 3545775881U;
    msg.start_lat = 0.439043134395;
    msg.start_lon = 0.721667970311;
    msg.start_z = 0.164958958197;
    msg.start_z_units = 152U;
    msg.end_lat = 0.739695920963;
    msg.end_lon = 0.205429738802;
    msg.end_z = 0.633480468043;
    msg.end_z_units = 100U;
    msg.speed = 0.028392251015;
    msg.speed_units = 227U;
    msg.lradius = 0.597503267778;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.884528422513);
    msg.setSource(6271U);
    msg.setSourceEntity(78U);
    msg.setDestination(11161U);
    msg.setDestinationEntity(240U);
    msg.path_ref = 3069912197U;
    msg.start_lat = 0.15330586848;
    msg.start_lon = 0.399550167337;
    msg.start_z = 0.950647694524;
    msg.start_z_units = 195U;
    msg.end_lat = 0.905988794579;
    msg.end_lon = 0.797769285314;
    msg.end_z = 0.817165306065;
    msg.end_z_units = 62U;
    msg.speed = 0.649453205647;
    msg.speed_units = 216U;
    msg.lradius = 0.684243356138;
    msg.flags = 241U;

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
    msg.setTimeStamp(0.545208623137);
    msg.setSource(24774U);
    msg.setSourceEntity(83U);
    msg.setDestination(52483U);
    msg.setDestinationEntity(193U);
    msg.x = 0.426279677456;
    msg.y = 0.0578400969306;
    msg.z = 0.385644084724;
    msg.k = 0.74081038103;
    msg.m = 0.147598388488;
    msg.n = 0.305202826791;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.807098622742);
    msg.setSource(65332U);
    msg.setSourceEntity(160U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(159U);
    msg.x = 0.705228553441;
    msg.y = 0.788040577106;
    msg.z = 0.338488690134;
    msg.k = 0.879895155236;
    msg.m = 0.656693584575;
    msg.n = 0.202548497212;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.816107878088);
    msg.setSource(19100U);
    msg.setSourceEntity(215U);
    msg.setDestination(41422U);
    msg.setDestinationEntity(192U);
    msg.x = 0.23512023684;
    msg.y = 0.788383827865;
    msg.z = 0.665621384024;
    msg.k = 0.964944669933;
    msg.m = 0.0802818680979;
    msg.n = 0.856635519081;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.0632515129038);
    msg.setSource(60807U);
    msg.setSourceEntity(251U);
    msg.setDestination(62668U);
    msg.setDestinationEntity(200U);
    msg.value = 0.505859069015;

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
    msg.setTimeStamp(0.200728471984);
    msg.setSource(43979U);
    msg.setSourceEntity(50U);
    msg.setDestination(32368U);
    msg.setDestinationEntity(51U);
    msg.value = 0.332765354418;

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
    msg.setTimeStamp(0.684872835628);
    msg.setSource(55754U);
    msg.setSourceEntity(244U);
    msg.setDestination(47699U);
    msg.setDestinationEntity(238U);
    msg.value = 0.216932061648;

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
    msg.setTimeStamp(0.93214985666);
    msg.setSource(50520U);
    msg.setSourceEntity(0U);
    msg.setDestination(10408U);
    msg.setDestinationEntity(243U);
    msg.u = 0.599787145816;
    msg.v = 0.879823534055;
    msg.w = 0.152910817683;
    msg.p = 0.282887093104;
    msg.q = 0.128294925792;
    msg.r = 0.155049730125;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.507750513221);
    msg.setSource(33863U);
    msg.setSourceEntity(114U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(1U);
    msg.u = 0.985654172851;
    msg.v = 0.54291118696;
    msg.w = 0.278911193874;
    msg.p = 0.47123468097;
    msg.q = 0.750804713028;
    msg.r = 0.420634997676;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.118718325595);
    msg.setSource(3707U);
    msg.setSourceEntity(111U);
    msg.setDestination(43225U);
    msg.setDestinationEntity(195U);
    msg.u = 0.345830709229;
    msg.v = 0.208280851911;
    msg.w = 0.196454885511;
    msg.p = 0.520535280883;
    msg.q = 0.253479748572;
    msg.r = 0.583021619265;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.694325881818);
    msg.setSource(47549U);
    msg.setSourceEntity(18U);
    msg.setDestination(8545U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 959963093U;
    msg.start_lat = 0.321032700286;
    msg.start_lon = 0.767982700628;
    msg.start_z = 0.992678682957;
    msg.start_z_units = 189U;
    msg.end_lat = 0.100269705214;
    msg.end_lon = 0.914703768681;
    msg.end_z = 0.198909855473;
    msg.end_z_units = 90U;
    msg.lradius = 0.820858740498;
    msg.flags = 220U;
    msg.x = 0.93509525829;
    msg.y = 0.466010396074;
    msg.z = 0.782916126777;
    msg.vx = 0.368261382604;
    msg.vy = 0.0241855122447;
    msg.vz = 0.275956171938;
    msg.course_error = 0.145115817563;
    msg.eta = 50373U;

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
    msg.setTimeStamp(0.535148185698);
    msg.setSource(40623U);
    msg.setSourceEntity(44U);
    msg.setDestination(46713U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 3049171012U;
    msg.start_lat = 0.168006900249;
    msg.start_lon = 0.227102377799;
    msg.start_z = 0.92276584806;
    msg.start_z_units = 220U;
    msg.end_lat = 0.00478770787226;
    msg.end_lon = 0.533462808276;
    msg.end_z = 0.0253169458469;
    msg.end_z_units = 95U;
    msg.lradius = 0.162063739605;
    msg.flags = 184U;
    msg.x = 0.253163062895;
    msg.y = 0.0514095222432;
    msg.z = 0.597581785704;
    msg.vx = 0.992755398588;
    msg.vy = 0.144950721371;
    msg.vz = 0.895715089311;
    msg.course_error = 0.602453736682;
    msg.eta = 54248U;

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
    msg.setTimeStamp(0.850069276274);
    msg.setSource(58645U);
    msg.setSourceEntity(51U);
    msg.setDestination(40405U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 3274162441U;
    msg.start_lat = 0.45502465191;
    msg.start_lon = 0.437544378102;
    msg.start_z = 0.994241199223;
    msg.start_z_units = 90U;
    msg.end_lat = 0.139863008658;
    msg.end_lon = 0.591626076859;
    msg.end_z = 0.607440854162;
    msg.end_z_units = 177U;
    msg.lradius = 0.201308305625;
    msg.flags = 62U;
    msg.x = 0.955840823833;
    msg.y = 0.330590267349;
    msg.z = 0.481199735889;
    msg.vx = 0.956603830105;
    msg.vy = 0.78071137716;
    msg.vz = 0.357636940786;
    msg.course_error = 0.519784300689;
    msg.eta = 15917U;

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
    msg.setTimeStamp(0.416766550134);
    msg.setSource(50266U);
    msg.setSourceEntity(132U);
    msg.setDestination(27497U);
    msg.setDestinationEntity(193U);
    msg.k = 0.0938641814647;
    msg.m = 0.0578769429791;
    msg.n = 0.986628014009;

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
    msg.setTimeStamp(0.552383743565);
    msg.setSource(2588U);
    msg.setSourceEntity(133U);
    msg.setDestination(23651U);
    msg.setDestinationEntity(191U);
    msg.k = 0.387848754281;
    msg.m = 0.778541085033;
    msg.n = 0.274678136313;

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
    msg.setTimeStamp(0.58803358942);
    msg.setSource(13321U);
    msg.setSourceEntity(84U);
    msg.setDestination(30837U);
    msg.setDestinationEntity(139U);
    msg.k = 0.455352421996;
    msg.m = 0.373741914033;
    msg.n = 0.250486555997;

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
    msg.setTimeStamp(0.0551437906748);
    msg.setSource(43235U);
    msg.setSourceEntity(197U);
    msg.setDestination(18362U);
    msg.setDestinationEntity(66U);
    msg.p = 0.875739965633;
    msg.i = 0.599186712777;
    msg.d = 0.111251883226;
    msg.a = 0.533938556226;

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
    msg.setTimeStamp(0.387491771482);
    msg.setSource(11233U);
    msg.setSourceEntity(36U);
    msg.setDestination(62083U);
    msg.setDestinationEntity(153U);
    msg.p = 0.678548379899;
    msg.i = 0.414073151862;
    msg.d = 0.95137710852;
    msg.a = 0.861839347852;

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
    msg.setTimeStamp(0.32489636049);
    msg.setSource(38465U);
    msg.setSourceEntity(48U);
    msg.setDestination(33599U);
    msg.setDestinationEntity(123U);
    msg.p = 0.635914450734;
    msg.i = 0.763733175244;
    msg.d = 0.0188244021377;
    msg.a = 0.618035277882;

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
    msg.setTimeStamp(0.106171198179);
    msg.setSource(1687U);
    msg.setSourceEntity(77U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(33U);
    msg.op = 38U;

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
    msg.setTimeStamp(0.394792835349);
    msg.setSource(58849U);
    msg.setSourceEntity(237U);
    msg.setDestination(44540U);
    msg.setDestinationEntity(213U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.561217207956);
    msg.setSource(56309U);
    msg.setSourceEntity(219U);
    msg.setDestination(27692U);
    msg.setDestinationEntity(6U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.0747969188167);
    msg.setSource(27594U);
    msg.setSourceEntity(126U);
    msg.setDestination(53979U);
    msg.setDestinationEntity(230U);
    msg.timeout = 9174U;
    msg.lat = 0.515727337158;
    msg.lon = 0.872612098708;
    msg.z = 0.108365682909;
    msg.z_units = 220U;
    msg.speed = 0.723629659982;
    msg.speed_units = 87U;
    msg.roll = 0.37132884615;
    msg.pitch = 0.800946772891;
    msg.yaw = 0.714919806037;
    msg.custom.assign("KMQQXAFWOKE");

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
    msg.setTimeStamp(0.311752651928);
    msg.setSource(35746U);
    msg.setSourceEntity(142U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(138U);
    msg.timeout = 25146U;
    msg.lat = 0.59623435884;
    msg.lon = 0.820535382995;
    msg.z = 0.00580300395305;
    msg.z_units = 75U;
    msg.speed = 0.128761909814;
    msg.speed_units = 40U;
    msg.roll = 0.355476359802;
    msg.pitch = 0.0793344459768;
    msg.yaw = 0.171903880374;
    msg.custom.assign("HZRGEIXPRYGBOAYHDSBZJJXQOSXILNBSPFNVKPUKOTLXGKRJLQULOMWQEYGWCADYKKRWXKLFGVVSHWUEJBIKSQQLLMINCSCXGGMRHRJSMJHEDKGEOACNW");

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
    msg.setTimeStamp(0.108971476102);
    msg.setSource(59263U);
    msg.setSourceEntity(72U);
    msg.setDestination(46580U);
    msg.setDestinationEntity(1U);
    msg.timeout = 8719U;
    msg.lat = 0.217459730774;
    msg.lon = 0.231428632747;
    msg.z = 0.188906936311;
    msg.z_units = 72U;
    msg.speed = 0.148349809586;
    msg.speed_units = 87U;
    msg.roll = 0.882709853046;
    msg.pitch = 0.658852954679;
    msg.yaw = 0.00664219099736;
    msg.custom.assign("UIHABUPFRELAHCUQJTSOOGQHKFWIRZZGXRZNVZSWMIPPOEMHDFVUEGNQBMIYQIGYJFMW");

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
    msg.setTimeStamp(0.612768364184);
    msg.setSource(4599U);
    msg.setSourceEntity(17U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(139U);
    msg.timeout = 44968U;
    msg.lat = 0.716163625629;
    msg.lon = 0.246265081926;
    msg.z = 0.971143419213;
    msg.z_units = 35U;
    msg.speed = 0.144670159904;
    msg.speed_units = 149U;
    msg.duration = 60170U;
    msg.radius = 0.531291193441;
    msg.flags = 136U;
    msg.custom.assign("PKVUZAMKGREXLIDHWJEDWPTZZQHLWJOJVYWGZZVMLIDYHVAXCTCOAHBFVETQUTUFGKJBUCRDLIVJFR");

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
    msg.setTimeStamp(0.588895146394);
    msg.setSource(43202U);
    msg.setSourceEntity(122U);
    msg.setDestination(31628U);
    msg.setDestinationEntity(41U);
    msg.timeout = 8709U;
    msg.lat = 0.280256957633;
    msg.lon = 0.792010521425;
    msg.z = 0.833867474078;
    msg.z_units = 127U;
    msg.speed = 0.419251037074;
    msg.speed_units = 179U;
    msg.duration = 9056U;
    msg.radius = 0.751129186861;
    msg.flags = 87U;
    msg.custom.assign("HOIZMGQHVPMMPQIZGTVZOSJOZPZQLXVIUCQJSQGDCNMFWTTZANDBKNYDNWMMOALHSJSWEBYUNLTTCFRIHNOUUGDAQUGDUXXNHKDVKECLURDWLEOAHJIMDMQAZIIKTOJYBZBSJVLVXPCSYCPCUYBBNBSLQIRFSEKEDKXVFCJYGGMLFPRWUTRPCWHYUSRRFGLNYQPEEFVCYWSDAXEFTZMINKRAEVBGQKGJFA");

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
    msg.setTimeStamp(0.196887842252);
    msg.setSource(49476U);
    msg.setSourceEntity(168U);
    msg.setDestination(39429U);
    msg.setDestinationEntity(10U);
    msg.timeout = 34456U;
    msg.lat = 0.809516647559;
    msg.lon = 0.736411180689;
    msg.z = 0.960813062852;
    msg.z_units = 51U;
    msg.speed = 0.687267981169;
    msg.speed_units = 243U;
    msg.duration = 13994U;
    msg.radius = 0.571539831626;
    msg.flags = 121U;
    msg.custom.assign("TWAJGARUFVGKRIXSQLOIMEWGCHFXTYBQNQHZWIDSMAZSJSLZMTHIJTSI");

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
    msg.setTimeStamp(0.187416638639);
    msg.setSource(4189U);
    msg.setSourceEntity(77U);
    msg.setDestination(28636U);
    msg.setDestinationEntity(37U);
    msg.custom.assign("JSOKKNOQXDPPSJZCTQEBFNDQLRVWBAEVFIZGHHUDYLYJFMGN");

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
    msg.setTimeStamp(0.720796875661);
    msg.setSource(19653U);
    msg.setSourceEntity(232U);
    msg.setDestination(34067U);
    msg.setDestinationEntity(241U);
    msg.custom.assign("LUUPMBCALRNXNHYDCINBKTIXCFOZRBPAQNSRGKHGAIJRXVEKETRJAWUVLRJKVLPJLYQSXAEDTTUQKOSTJQPIFOGMFXAGHLXTSXKXKCZZSV");

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
    msg.setTimeStamp(0.462931848528);
    msg.setSource(30970U);
    msg.setSourceEntity(14U);
    msg.setDestination(42361U);
    msg.setDestinationEntity(226U);
    msg.custom.assign("VZLAQGXYPKZMRAOVYJCHDCFBIJXOEQFWGLRKTOJVZBSSHUUFPDDCCOLSPVGFUJWKUQBWBKQEVJPLVFHQYHKTAFPXIAQIHSORVDVFCNMCEZDAOXN");

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
    msg.setTimeStamp(0.963933167684);
    msg.setSource(30903U);
    msg.setSourceEntity(191U);
    msg.setDestination(14871U);
    msg.setDestinationEntity(127U);
    msg.timeout = 5458U;
    msg.lat = 0.733679351121;
    msg.lon = 0.0316714725896;
    msg.z = 0.699201331492;
    msg.z_units = 235U;
    msg.duration = 56959U;
    msg.speed = 0.599971238691;
    msg.speed_units = 2U;
    msg.type = 190U;
    msg.radius = 0.117848743375;
    msg.length = 0.959573180514;
    msg.bearing = 0.414306498787;
    msg.direction = 32U;
    msg.custom.assign("MDZZGJBBPMPXVRGUTNUYANNBSXYTMUTGPAEGLJUIRTGQMFLMPUCAOFGVJFHLLSZVROXJIZSNRCHPRHONQQPZQIYRLJPMQKSXSPXOKOXIVULWGBROIRWXTLJDANVSFYPZCYXYEIJFRFZBYVDAELMKDDNKEWVMOSIYEGACHBMTCPNDKEHCBEZAGQKOHCQBMSWUVUEKFWNDVIWDJJQXWHHWHYAVZIEUQTSNRUCTELXOFBDTZTDBLAKCKY");

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
    msg.setTimeStamp(0.902093979855);
    msg.setSource(11883U);
    msg.setSourceEntity(153U);
    msg.setDestination(65150U);
    msg.setDestinationEntity(108U);
    msg.timeout = 63258U;
    msg.lat = 0.63654385503;
    msg.lon = 0.698149054197;
    msg.z = 0.259464145207;
    msg.z_units = 7U;
    msg.duration = 44195U;
    msg.speed = 0.995960226026;
    msg.speed_units = 216U;
    msg.type = 103U;
    msg.radius = 0.851401149988;
    msg.length = 0.305615715909;
    msg.bearing = 0.829976285851;
    msg.direction = 187U;
    msg.custom.assign("BKVBZSTLPVQS");

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
    msg.setTimeStamp(0.423354193434);
    msg.setSource(5118U);
    msg.setSourceEntity(217U);
    msg.setDestination(21399U);
    msg.setDestinationEntity(88U);
    msg.timeout = 51636U;
    msg.lat = 0.176655084071;
    msg.lon = 0.746914435873;
    msg.z = 0.516832483285;
    msg.z_units = 85U;
    msg.duration = 21405U;
    msg.speed = 0.353900921545;
    msg.speed_units = 187U;
    msg.type = 189U;
    msg.radius = 0.418415180556;
    msg.length = 0.142818931135;
    msg.bearing = 0.378589468436;
    msg.direction = 29U;
    msg.custom.assign("FPAFLOWCZGRJGBNOHYEBUUVLFWKJFTFJMAOOMSVWARUPDYIUBTTLICXHNEGIIPLGEADJYLUAPXOMBVDFMTBPGOHPDBOANKWZQRZEOFQGEQMOCZXGQFIEXTVNWNLCIRNAMXSWSKSJSKRKVKZULRHNQRKDBRZJHSM");

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
    msg.setTimeStamp(0.650248964046);
    msg.setSource(30909U);
    msg.setSourceEntity(67U);
    msg.setDestination(10505U);
    msg.setDestinationEntity(199U);
    msg.duration = 33135U;
    msg.custom.assign("EMBKAPXCCEDKYDKLQYZSBBRBFJBCXUVFNJLVQIMJFLEWAPHBUZBWXOTARKOWHFVXAXQJVIABZCLDWGEHUEGAXTL");

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
    msg.setTimeStamp(0.832709137621);
    msg.setSource(59351U);
    msg.setSourceEntity(250U);
    msg.setDestination(41307U);
    msg.setDestinationEntity(39U);
    msg.duration = 43626U;
    msg.custom.assign("SLDEWNTQAZRPJPXAAWADZGAZEOGWIIDKGTGMINCBDTELYSJRTGFQVUUBKHDZSYWPYFPBOQJCKLRQDNODFEKHTIEUAMCSAMKFVKZPVMJSSFEKRCFOHQDCUOAJZLMXUTYYXJPKHMEVDRZIGYABARBLZWQVTZTBUMCEIUHJXNFWWSHWXBOWHYXPVHXBPGOFULULJSVQTIBFIJLMFIDQCH");

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
    msg.setTimeStamp(0.073416411288);
    msg.setSource(18747U);
    msg.setSourceEntity(78U);
    msg.setDestination(25251U);
    msg.setDestinationEntity(164U);
    msg.duration = 63428U;
    msg.custom.assign("WQZMGZUAMHAKBJGVOZMIOXNADQHAXDPXQFNITWKNNQRCJWULXKYBIKRKXKHETFCRZDJJNFYAVQYHERTACLLFCVZRYWXXMCNIAEWETPOXRVGCHIXDFHVSJSHQJIOSFWEDULSEOJZS");

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
    msg.setTimeStamp(0.779067445378);
    msg.setSource(28468U);
    msg.setSourceEntity(101U);
    msg.setDestination(40464U);
    msg.setDestinationEntity(170U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.0696824800765;
    tmp_msg_0.z_units = 156U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58766U;
    msg.custom.assign("LGZCAURTFLHABDUFKNWKOEKGHZXBVTBLNLWGIYLVLYQBSMICFNIEDSBHSCKWXDQNXRQWIQFQMKTOEDHZYEXXQMASTVJJTZVPCUICIGWCCMPNZOYMRYRJPORPUELNPCGOFS");

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
    msg.setTimeStamp(0.0708616434556);
    msg.setSource(30182U);
    msg.setSourceEntity(98U);
    msg.setDestination(12344U);
    msg.setDestinationEntity(168U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.101258373979;
    msg.control.set(tmp_msg_0);
    msg.duration = 31004U;
    msg.custom.assign("PZINNZKKVGXFVOBRSMVNSUSSOUMFTLCCXANOUIQNARZUDZDNERSRDTYEOFFHBGYGIQAADMOWFWXNVDSOUBQCURNHXKVGEGARJAHLYDQDMEHULNGOPIFYVPBPTHSJWYXEXFVKQJXQSG");

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
    msg.setTimeStamp(0.160751329462);
    msg.setSource(16271U);
    msg.setSourceEntity(234U);
    msg.setDestination(31873U);
    msg.setDestinationEntity(166U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.10710326459;
    tmp_msg_0.z_units = 63U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38157U;
    msg.custom.assign("DHIZBFOPMVQFNFFQSUTBFMIOZKLOQECSXQDKBBRIHKENONLNDPXIZQAVNTYOCKJEYVHYAVRSKMAEZDXGZQVIEGWNTGEGYTGLWKC");

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
    msg.setTimeStamp(0.946058599753);
    msg.setSource(58881U);
    msg.setSourceEntity(221U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(197U);
    msg.timeout = 8009U;
    msg.lat = 0.733455448949;
    msg.lon = 0.29530999058;
    msg.z = 0.0790528512902;
    msg.z_units = 146U;
    msg.speed = 0.603895034593;
    msg.speed_units = 126U;
    msg.bearing = 0.089672827376;
    msg.cross_angle = 0.613647200404;
    msg.width = 0.901617565562;
    msg.length = 0.861692951723;
    msg.hstep = 0.162076873977;
    msg.coff = 111U;
    msg.alternation = 251U;
    msg.flags = 155U;
    msg.custom.assign("HCTZIPLTHZLIMLSFIKORGPUGHFQQFDJWFLTKYRKXAJXDCDUGANMCLXCXKZHANASVGSYBEROJGXIJZSPHFCNBYBTZBOWG");

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
    msg.setTimeStamp(0.96920028813);
    msg.setSource(47157U);
    msg.setSourceEntity(77U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(49U);
    msg.timeout = 50488U;
    msg.lat = 0.119011574109;
    msg.lon = 0.691277473321;
    msg.z = 0.625567439339;
    msg.z_units = 253U;
    msg.speed = 0.822791157388;
    msg.speed_units = 72U;
    msg.bearing = 0.64666003754;
    msg.cross_angle = 0.767760067658;
    msg.width = 0.377069713255;
    msg.length = 0.386449748309;
    msg.hstep = 0.34251078501;
    msg.coff = 220U;
    msg.alternation = 33U;
    msg.flags = 7U;
    msg.custom.assign("RWPALVBKOTJLHGHUGIHMYVMCPDLOEUNPJHKNZFESJSBKFMKQYXFUEQOYJXDBDQFMUCPMNDRQIKRKSZYVELSPA");

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
    msg.setTimeStamp(0.161967204476);
    msg.setSource(34312U);
    msg.setSourceEntity(125U);
    msg.setDestination(61472U);
    msg.setDestinationEntity(89U);
    msg.timeout = 1735U;
    msg.lat = 0.623930981598;
    msg.lon = 0.438658855839;
    msg.z = 0.423926423792;
    msg.z_units = 176U;
    msg.speed = 0.51606753167;
    msg.speed_units = 182U;
    msg.bearing = 0.563150100347;
    msg.cross_angle = 0.974142425239;
    msg.width = 0.456003251267;
    msg.length = 0.363216475674;
    msg.hstep = 0.49947306553;
    msg.coff = 155U;
    msg.alternation = 149U;
    msg.flags = 147U;
    msg.custom.assign("HGZCJZHFJBVCUVDSBBVGKOEORWCVAVQBSEOVUUDZNLLMWBJWATXWJRZYAQLLSKTODSKGVDTPKLRXK");

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
    msg.setTimeStamp(0.113821577112);
    msg.setSource(5185U);
    msg.setSourceEntity(218U);
    msg.setDestination(10733U);
    msg.setDestinationEntity(86U);
    msg.timeout = 7895U;
    msg.lat = 0.350211190908;
    msg.lon = 0.326752546055;
    msg.z = 0.388862054128;
    msg.z_units = 207U;
    msg.speed = 0.211225721223;
    msg.speed_units = 158U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.463339299062;
    tmp_msg_0.y = 0.98699674592;
    tmp_msg_0.z = 0.568976777946;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UBENLXRWARC");

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
    msg.setTimeStamp(0.326237850608);
    msg.setSource(37082U);
    msg.setSourceEntity(5U);
    msg.setDestination(35156U);
    msg.setDestinationEntity(55U);
    msg.timeout = 62466U;
    msg.lat = 0.688481564294;
    msg.lon = 0.583724566242;
    msg.z = 0.6003079409;
    msg.z_units = 146U;
    msg.speed = 0.846205284883;
    msg.speed_units = 73U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.434345327676;
    tmp_msg_0.y = 0.281139863481;
    tmp_msg_0.z = 0.11519910475;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SLLZAFKYUUQLTNJENWPCGZFQEXRIFTHBVHOSVLRAKWYMKKZGRJEXDFRYGLGOXUSCSVIYRQIQIOPIDCKQLDHJCAGMCVBQYRGLDJCQGAVETOQYIXXMAIPMOZBOHCFEOPHUKHHBPMMKTUTNBBIQXSUNYFEAWTFOBLDWPESPZYNCCVWAXEWJUNOSDNVSWAPZJINVXFGQ");

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
    msg.setTimeStamp(0.302533454899);
    msg.setSource(12934U);
    msg.setSourceEntity(41U);
    msg.setDestination(48688U);
    msg.setDestinationEntity(135U);
    msg.timeout = 18318U;
    msg.lat = 0.618960063063;
    msg.lon = 0.275161032146;
    msg.z = 0.130296192286;
    msg.z_units = 142U;
    msg.speed = 0.376524521842;
    msg.speed_units = 253U;
    msg.custom.assign("QWJILAUPTCPFESYWAIUEG");

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
    msg.setTimeStamp(0.211272762948);
    msg.setSource(4390U);
    msg.setSourceEntity(136U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(25U);
    msg.x = 0.626051900613;
    msg.y = 0.830445379847;
    msg.z = 0.34944498094;

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
    msg.setTimeStamp(0.915549609301);
    msg.setSource(1812U);
    msg.setSourceEntity(50U);
    msg.setDestination(5515U);
    msg.setDestinationEntity(35U);
    msg.x = 0.112501143684;
    msg.y = 0.735884381208;
    msg.z = 0.387748742917;

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
    msg.setTimeStamp(0.631502579305);
    msg.setSource(37860U);
    msg.setSourceEntity(180U);
    msg.setDestination(27631U);
    msg.setDestinationEntity(60U);
    msg.x = 0.675001383505;
    msg.y = 0.977568932357;
    msg.z = 0.811384438311;

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
    msg.setTimeStamp(0.0883846856325);
    msg.setSource(57403U);
    msg.setSourceEntity(246U);
    msg.setDestination(53889U);
    msg.setDestinationEntity(137U);
    msg.timeout = 49220U;
    msg.lat = 0.218702318337;
    msg.lon = 0.234729329432;
    msg.z = 0.0606555740309;
    msg.z_units = 76U;
    msg.amplitude = 0.109984036507;
    msg.pitch = 0.0296649316686;
    msg.speed = 0.400595639545;
    msg.speed_units = 171U;
    msg.custom.assign("OXHZJEVCNUAPCEABSJTYRXSULWTNDAGUEHARUPSTPQYWYWRWEHOFLUGFNPBONMIVIXEWMNWVYTRIIMVMCMLDKBKTGXZHFOAPQLEAPZQKJCXLGHUIBBLGNFKZYMCYZDRSBZKSRZLAVNMGTAMCEMDSTELYKTTBGMDCKOA");

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
    msg.setTimeStamp(0.685786776661);
    msg.setSource(6736U);
    msg.setSourceEntity(212U);
    msg.setDestination(14024U);
    msg.setDestinationEntity(193U);
    msg.timeout = 44080U;
    msg.lat = 0.280910312054;
    msg.lon = 0.517031589582;
    msg.z = 0.0914051502825;
    msg.z_units = 123U;
    msg.amplitude = 0.982869313751;
    msg.pitch = 0.0989377453025;
    msg.speed = 0.101803575772;
    msg.speed_units = 72U;
    msg.custom.assign("TJBUHJGXBRXENZWOMXGHXKEPMCTOMZBAZFFRAFIIHQNDRACIUOIGYMBBGYMAEYQNSJGZMEMYPWEYSLCSHVELDDDBMVZSJWFFKKXVLYFCVABCCEILYOHOBUQTIJWVXTYUKDOPHKWWCJIRSJWATITZSPVKQVLSBCNFPNJWDFSGIWFTGQFRPTWTORGPZQJIVXQKNMGKLDKUUAEVDXDRNO");

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
    msg.setTimeStamp(0.0112904778681);
    msg.setSource(14165U);
    msg.setSourceEntity(30U);
    msg.setDestination(34255U);
    msg.setDestinationEntity(122U);
    msg.timeout = 18388U;
    msg.lat = 0.432311588882;
    msg.lon = 0.844816325345;
    msg.z = 0.616908860302;
    msg.z_units = 109U;
    msg.amplitude = 0.665426965783;
    msg.pitch = 0.529831838909;
    msg.speed = 0.708767669196;
    msg.speed_units = 128U;
    msg.custom.assign("ASHRLTKEHQXUZZPEPWCYRAFHKAHTOWLJNLQSQBEYIVMWETRIAQJGOBSVPYNKOYMYTYTTGUUXZRIGFVKDUWLYUZJVJLNDMNZBNXQFPVYCGNJICTFRZAOETXXBSKABJKVAAXXORIEOAWBTEJECIBLDRGHJLXPMLCOVRQMYKKCVFICPOMEFWCGIQBQRDPHRUSVUUWFZHOHSNNUTYLHDBMGPNHDCDGIN");

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
    msg.setTimeStamp(0.220817314452);
    msg.setSource(30897U);
    msg.setSourceEntity(85U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.86769655984);
    msg.setSource(3801U);
    msg.setSourceEntity(62U);
    msg.setDestination(4568U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.0626670146907);
    msg.setSource(7932U);
    msg.setSourceEntity(105U);
    msg.setDestination(64265U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.497213310852);
    msg.setSource(36357U);
    msg.setSourceEntity(148U);
    msg.setDestination(46508U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.150744303908;
    msg.lon = 0.166130286937;
    msg.z = 0.675576654567;
    msg.z_units = 58U;
    msg.radius = 0.162769410845;
    msg.duration = 50670U;
    msg.speed = 0.605792537645;
    msg.speed_units = 142U;
    msg.custom.assign("ATQXWAGLEWDGMHAKOXQGFFDFHMVPPLQWTTQDNEFVSAZVVDZEDJRYWVKZLRBKNGGPZSWFFISRTJIPUXYWVICKUNIFLCFUAQROKSIXLWDXVNQDMIIYNELVYXOMKDNHLRXSTMZGRBBCZWCSOYEMFHUZBOCQFBCTENCKZNZBOPKDBSHQASEWVTGMMGPRYMHLBJQOWIHYPDHJUBLGJXTSANOMCAIJTKPXEUXOROGEAUSLPQC");

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
    msg.setTimeStamp(0.86792274031);
    msg.setSource(28735U);
    msg.setSourceEntity(129U);
    msg.setDestination(4041U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.983873793214;
    msg.lon = 0.474777809847;
    msg.z = 0.216153337093;
    msg.z_units = 18U;
    msg.radius = 0.896257475904;
    msg.duration = 60987U;
    msg.speed = 0.554590642009;
    msg.speed_units = 120U;
    msg.custom.assign("ZMJFBJYXNWEKUALYYFXPEAPBHNGYTLRQZFXDVXJAXVZKMYEFGVSWFYEMTKBFRBPLJDTDWOSZEJHCOIEQXAHNHPQGSSSIUKJMCQUVHMCVBNVRRYUGASOLVNPKXLDHKOVSOTBQYRCGQTOMUPKZFYVMEMLHLGWDGRAIBWUNPDIKUDRWKCBKCOQDNMZHZJJZCBGPUIVERJQAOQTAR");

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
    msg.setTimeStamp(0.965874696428);
    msg.setSource(21972U);
    msg.setSourceEntity(71U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.941929460594;
    msg.lon = 0.650693494118;
    msg.z = 0.0813373593156;
    msg.z_units = 129U;
    msg.radius = 0.748466061544;
    msg.duration = 57429U;
    msg.speed = 0.761002816561;
    msg.speed_units = 108U;
    msg.custom.assign("EZPKSHRTYUXGYNSSLDKHZGZXGXTFFIRDYLZPNWIRSSYUBNGEKWMDIBWJLDSTWMJBDFECQQMOGHVIJUYTXCPCDOXFEWLIQIHDJRKJGBAODUYGEZLDUSJWPQJQBHCURMNSMFATONCDQMVIKIOPALHFTGOVGICZRPAFQTMNYTFJHSEKVWPUVONYEVWNQZRAUXCRVZVCHBYMLLAEKQXPYHAOTKBQNAEHPGKAZAEIBJOXWVCSFMRMKXVTU");

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
    msg.setTimeStamp(0.862947261741);
    msg.setSource(24204U);
    msg.setSourceEntity(172U);
    msg.setDestination(29927U);
    msg.setDestinationEntity(62U);
    msg.timeout = 8037U;
    msg.flags = 209U;
    msg.lat = 0.00509354059196;
    msg.lon = 0.343852553986;
    msg.start_z = 0.557024757032;
    msg.start_z_units = 137U;
    msg.end_z = 0.947383126907;
    msg.end_z_units = 233U;
    msg.radius = 0.950673831825;
    msg.speed = 0.289899455066;
    msg.speed_units = 86U;
    msg.custom.assign("XXPQTPZOIZSTRPPYEDAHCCJETJRNYZBCZZHEQIHPJAKKGPMCBDJ");

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
    msg.setTimeStamp(0.884901909117);
    msg.setSource(63603U);
    msg.setSourceEntity(80U);
    msg.setDestination(8187U);
    msg.setDestinationEntity(108U);
    msg.timeout = 23659U;
    msg.flags = 80U;
    msg.lat = 0.20997143688;
    msg.lon = 0.488827698382;
    msg.start_z = 0.522129114117;
    msg.start_z_units = 169U;
    msg.end_z = 0.541880164923;
    msg.end_z_units = 17U;
    msg.radius = 0.95430985195;
    msg.speed = 0.0068061228781;
    msg.speed_units = 154U;
    msg.custom.assign("DJNHPHUXSDGQZJDJKWSVBEVPJSMTQNINLTFUEDZZKNIEYPWGOZIDBJMBSQRRWEJLLNFKALSERTQHGDFYRKHEXCNDWAU");

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
    msg.setTimeStamp(0.827792158967);
    msg.setSource(62915U);
    msg.setSourceEntity(133U);
    msg.setDestination(26116U);
    msg.setDestinationEntity(19U);
    msg.timeout = 15527U;
    msg.flags = 176U;
    msg.lat = 0.676590830083;
    msg.lon = 0.172643413332;
    msg.start_z = 0.55074873215;
    msg.start_z_units = 176U;
    msg.end_z = 0.15523742563;
    msg.end_z_units = 151U;
    msg.radius = 0.982931150198;
    msg.speed = 0.0887604461966;
    msg.speed_units = 22U;
    msg.custom.assign("TAXEDXPJXFIELIQWTQZZRUYLWIUYNOLISAHUHEGEAXQGSJYBFQQOYPRAJYTHJNCJHLZDSPEHPIAMCHMM");

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
    msg.setTimeStamp(0.479698209424);
    msg.setSource(23579U);
    msg.setSourceEntity(1U);
    msg.setDestination(25120U);
    msg.setDestinationEntity(65U);
    msg.timeout = 46995U;
    msg.lat = 0.393973087839;
    msg.lon = 0.647335270144;
    msg.z = 0.728704457095;
    msg.z_units = 121U;
    msg.speed = 0.234343407637;
    msg.speed_units = 151U;
    msg.custom.assign("FPUKYIDNWFVCATACULBIMITRBGENPGBXBEEDSYQJJSHNUFPEVVJGUOYCOTQHSYXZXPUGZEVHPLTTKEB");

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
    msg.setTimeStamp(0.77756515507);
    msg.setSource(61755U);
    msg.setSourceEntity(45U);
    msg.setDestination(25956U);
    msg.setDestinationEntity(216U);
    msg.timeout = 3497U;
    msg.lat = 0.446627395086;
    msg.lon = 0.0164817357023;
    msg.z = 0.253166758349;
    msg.z_units = 32U;
    msg.speed = 0.937317003368;
    msg.speed_units = 146U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.856107446315;
    tmp_msg_0.y = 0.00273676609881;
    tmp_msg_0.z = 0.318022488938;
    tmp_msg_0.t = 0.682710901679;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MAAWGHNCMNDVXHEMVZQGPEGJWTAIYEGXKGIJUHPZZPXCAIJZYQQDAPLIMGXNPCVRQFBMERUKIVDLVOKURWEPOOZLZRCDLQKMAMSKDORMTQYJIQVCRSOJMVCAEJTPLVJIRDTSBQOCSODFEZPJBIBHZZNKKDETLAFK");

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
    msg.setTimeStamp(0.123163483682);
    msg.setSource(41681U);
    msg.setSourceEntity(63U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(179U);
    msg.timeout = 5717U;
    msg.lat = 0.118755828739;
    msg.lon = 0.261319904775;
    msg.z = 0.274429125126;
    msg.z_units = 3U;
    msg.speed = 0.120016774949;
    msg.speed_units = 136U;
    msg.custom.assign("FOXWQPYIOYVDTKWVZDREPGBHIFXYNNHSIBBJQREKQNFJEUYJRDHZGHAXQUGGKJOYGRTNRBRQAXIJEMIQWRDJCCPDKHFXKSXNMJYJMOXADASVOYTVOAXGJINCHLBKDXQZICBSOTUYALGZVNPEMCLZTMTTWTRDJUBL");

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
    msg.setTimeStamp(0.117523857268);
    msg.setSource(61192U);
    msg.setSourceEntity(128U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(42U);
    msg.x = 0.298474628373;
    msg.y = 0.859486441613;
    msg.z = 0.313107884634;
    msg.t = 0.881571288534;

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
    msg.setTimeStamp(0.132352118147);
    msg.setSource(35476U);
    msg.setSourceEntity(188U);
    msg.setDestination(35709U);
    msg.setDestinationEntity(78U);
    msg.x = 0.0629910519965;
    msg.y = 0.0474705243623;
    msg.z = 0.602167232364;
    msg.t = 0.00728841847695;

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
    msg.setTimeStamp(0.550853480546);
    msg.setSource(51638U);
    msg.setSourceEntity(133U);
    msg.setDestination(49663U);
    msg.setDestinationEntity(168U);
    msg.x = 0.871382112241;
    msg.y = 0.0779659496606;
    msg.z = 0.297437106859;
    msg.t = 0.835900920946;

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
    msg.setTimeStamp(0.0929457179736);
    msg.setSource(42460U);
    msg.setSourceEntity(144U);
    msg.setDestination(30727U);
    msg.setDestinationEntity(144U);
    msg.timeout = 28546U;
    msg.name.assign("JJLVNVJZEKAUWDRBRNVBEVEVHWSLSGPNKGQXPZNCWFCICYFBLKJQQCBNVQXYFWLBDTUJRIUBKRDDFJEIKXXIIMTISTZSQFKJOXJSVMMKZELXMHSYZGOWHZANRHUADRFQAUUOLBUYZFXOCHWHHUTVCJAOM");
    msg.custom.assign("PYFTKZTUGZMYOBFXBWWFBAKXBVVNUGTOPLSPKJKRUTYMZCSOEIFDWGWLVCYACCNMBZESISDELLRPQROYBOZMERAJKSIPNTMHXOPVKRNJVYH");

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
    msg.setTimeStamp(0.992726491093);
    msg.setSource(30808U);
    msg.setSourceEntity(91U);
    msg.setDestination(56383U);
    msg.setDestinationEntity(4U);
    msg.timeout = 54147U;
    msg.name.assign("BVPNROAOIWEKFHMBJKTOYLIPOJQAHHRTJJKIOCTCRWPYRHHQGWMXYGNQVXERMUNZCISU");
    msg.custom.assign("IDUYRDHYSVQHKBOUOMVRSANYVDXHPLJESQKJAEHCPFVJFGOUGKHMRMSAHYECMSUXXAELXVKPISYZLGTTMQFLPBOVFKTMTDJBIUUKEZXKU");

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
    msg.setTimeStamp(0.8095917708);
    msg.setSource(53631U);
    msg.setSourceEntity(172U);
    msg.setDestination(7831U);
    msg.setDestinationEntity(44U);
    msg.timeout = 16193U;
    msg.name.assign("QPXOSWOJBZICXGHOQRAWDXNTEHAQGYDRONKFWIHWKEEQCPFEIKQSNXHRYUGEKBQTZXAIFDDUCZLMZURFHXDLJJRKPVCCBNZJBGQSHKJLYJNOEOMCPNEAELTEQOIXCLWTBMFGDTJUZXAZUMLVNUZDTAUVWRVYZNVJMMFVS");
    msg.custom.assign("FWOTPVNIEBBVBWXSPAFLPYWWFIYGEBGYOCWRCKCZLFUVSVIUPQSWRFMGTPCWSXXHPDGYMPJVBXLAJHHWRZHQEMJKIQESTBTAMTOIDAVIUVKKLYOUDFNAZLGURCYRIUTPEJDGCYDWNNILNSRUJBCBQKEKUJNJKOPMUANIGZZHCETJTLNZHGWK");

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
    msg.setTimeStamp(0.105079810385);
    msg.setSource(63357U);
    msg.setSourceEntity(5U);
    msg.setDestination(54765U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.0624153806063;
    msg.lon = 0.0951783101793;
    msg.z = 0.875462248315;
    msg.z_units = 207U;
    msg.speed = 0.623559144742;
    msg.speed_units = 174U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26572U;
    tmp_msg_0.off_x = 0.616116431864;
    tmp_msg_0.off_y = 0.0188746007125;
    tmp_msg_0.off_z = 0.037870650726;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.814735447497;
    msg.custom.assign("PVIKWKLYUZXWFCDPUXMTSYIQJLZMHZFGDYNIJVMBINEPFIXIHAVCKOBJSGDPWVQWHPTRFQFUGQCOQMBUJT");

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
    msg.setTimeStamp(0.0210455681088);
    msg.setSource(43798U);
    msg.setSourceEntity(216U);
    msg.setDestination(43417U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.816104414937;
    msg.lon = 0.812240384278;
    msg.z = 0.000898038917029;
    msg.z_units = 144U;
    msg.speed = 0.267604508163;
    msg.speed_units = 213U;
    msg.start_time = 0.106033076154;
    msg.custom.assign("DYEKZZAEKVNRLSHXSMT");

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
    msg.setTimeStamp(0.185762597903);
    msg.setSource(17203U);
    msg.setSourceEntity(159U);
    msg.setDestination(56779U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.415727823847;
    msg.lon = 0.297261875233;
    msg.z = 0.663095618954;
    msg.z_units = 7U;
    msg.speed = 0.429724720464;
    msg.speed_units = 210U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.639342701795;
    tmp_msg_0.y = 0.324094483134;
    tmp_msg_0.z = 0.815033079794;
    tmp_msg_0.t = 0.330936534111;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0340656454929;
    msg.custom.assign("WWGMROXGCSPQNSQVZSRVMCHVOKETRFTDSQOWSGLDGOUUQXEXCFVLZKVRMBWNRIRLCKRYGSBTACTCNXQPMDCKXLHKXSBSEJJVQWLHZOFVOAYMFEZUIMQGUCHJYPHWEKHFDBHPDIFBPGYDNIZULXUCJXZVUIQRUZJLHREAFLQNXGAETT");

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
    msg.setTimeStamp(0.992747405096);
    msg.setSource(47956U);
    msg.setSourceEntity(4U);
    msg.setDestination(40609U);
    msg.setDestinationEntity(162U);
    msg.vid = 29072U;
    msg.off_x = 0.73809127257;
    msg.off_y = 0.190927487489;
    msg.off_z = 0.363685559348;

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
    msg.setTimeStamp(0.752391035547);
    msg.setSource(58402U);
    msg.setSourceEntity(214U);
    msg.setDestination(8386U);
    msg.setDestinationEntity(167U);
    msg.vid = 32918U;
    msg.off_x = 0.277099187649;
    msg.off_y = 0.0224571216026;
    msg.off_z = 0.474807816105;

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
    msg.setTimeStamp(0.580297581822);
    msg.setSource(10045U);
    msg.setSourceEntity(78U);
    msg.setDestination(50517U);
    msg.setDestinationEntity(210U);
    msg.vid = 20174U;
    msg.off_x = 0.895540417575;
    msg.off_y = 0.408989070572;
    msg.off_z = 0.43311111452;

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
    msg.setTimeStamp(0.145079584158);
    msg.setSource(64909U);
    msg.setSourceEntity(219U);
    msg.setDestination(43805U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.785551645813);
    msg.setSource(42949U);
    msg.setSourceEntity(147U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.791641759259);
    msg.setSource(16265U);
    msg.setSourceEntity(111U);
    msg.setDestination(53247U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.107782753835);
    msg.setSource(44730U);
    msg.setSourceEntity(48U);
    msg.setDestination(20858U);
    msg.setDestinationEntity(38U);
    msg.mid = 11533U;

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
    msg.setTimeStamp(0.759732226637);
    msg.setSource(6392U);
    msg.setSourceEntity(246U);
    msg.setDestination(38435U);
    msg.setDestinationEntity(126U);
    msg.mid = 64077U;

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
    msg.setTimeStamp(0.258936735024);
    msg.setSource(38827U);
    msg.setSourceEntity(44U);
    msg.setDestination(5264U);
    msg.setDestinationEntity(244U);
    msg.mid = 26676U;

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
    msg.setTimeStamp(0.23127618165);
    msg.setSource(34319U);
    msg.setSourceEntity(147U);
    msg.setDestination(33021U);
    msg.setDestinationEntity(183U);
    msg.state = 175U;
    msg.eta = 11271U;
    msg.info.assign("VYVFNKDWNLAEITDHRPNYLXGVCATMDVJQJKOCPVTLJQMOHUNANUENFBNREOSRENBDCMQXIGRLMOUXXSWZZXTYGYSXPGSTVFTFOAOSEOGTCXIKQLKESBPQOYOHYLHWQZUZAQILKDZIPPUPMFMAZDBBNAHXACJBJGBXSIYBQZZQGSINXZSCPHTIBHIE");

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
    msg.setTimeStamp(0.0532942540136);
    msg.setSource(64677U);
    msg.setSourceEntity(8U);
    msg.setDestination(14753U);
    msg.setDestinationEntity(184U);
    msg.state = 245U;
    msg.eta = 43560U;
    msg.info.assign("MKBVUHSCYUCYZYOXYVZAWQABOFDVRXMUPGAORKPZCWXHWCBASKYBKLSWNBKXOIYHDSODBMOYUPEPQ");

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
    msg.setTimeStamp(0.212387783493);
    msg.setSource(41511U);
    msg.setSourceEntity(100U);
    msg.setDestination(33982U);
    msg.setDestinationEntity(144U);
    msg.state = 158U;
    msg.eta = 52848U;
    msg.info.assign("GOYVKIGVBWSULHPGHWTORBXQYMYZNBVMHXUCMSCJICKMHDDLZFOIZANSCFEVOF");

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
    msg.setTimeStamp(0.112185819265);
    msg.setSource(59860U);
    msg.setSourceEntity(29U);
    msg.setDestination(23782U);
    msg.setDestinationEntity(247U);
    msg.system = 38026U;
    msg.duration = 2528U;
    msg.speed = 0.0454285456974;
    msg.speed_units = 111U;
    msg.x = 0.204688489775;
    msg.y = 0.0488055769254;
    msg.z = 0.702424389231;
    msg.z_units = 16U;

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
    msg.setTimeStamp(0.255488132579);
    msg.setSource(55036U);
    msg.setSourceEntity(190U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(254U);
    msg.system = 8499U;
    msg.duration = 3709U;
    msg.speed = 0.401433326633;
    msg.speed_units = 186U;
    msg.x = 0.64061962329;
    msg.y = 0.0404744133009;
    msg.z = 0.791394147809;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.614136785383);
    msg.setSource(22442U);
    msg.setSourceEntity(86U);
    msg.setDestination(23053U);
    msg.setDestinationEntity(145U);
    msg.system = 34324U;
    msg.duration = 39167U;
    msg.speed = 0.595504447094;
    msg.speed_units = 154U;
    msg.x = 0.75375095019;
    msg.y = 0.539861140315;
    msg.z = 0.186706731887;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.662270729131);
    msg.setSource(38750U);
    msg.setSourceEntity(128U);
    msg.setDestination(26965U);
    msg.setDestinationEntity(71U);
    msg.lat = 0.914040991319;
    msg.lon = 0.611922782138;
    msg.speed = 0.355729439277;
    msg.speed_units = 92U;
    msg.duration = 49496U;
    msg.sys_a = 60119U;
    msg.sys_b = 9446U;
    msg.move_threshold = 0.451937473632;

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
    msg.setTimeStamp(0.764129540271);
    msg.setSource(31042U);
    msg.setSourceEntity(244U);
    msg.setDestination(58966U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.807403175812;
    msg.lon = 0.318655365001;
    msg.speed = 0.491046781895;
    msg.speed_units = 46U;
    msg.duration = 62947U;
    msg.sys_a = 48168U;
    msg.sys_b = 45779U;
    msg.move_threshold = 0.481001605894;

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
    msg.setTimeStamp(0.796039553096);
    msg.setSource(48714U);
    msg.setSourceEntity(72U);
    msg.setDestination(48938U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.116723246084;
    msg.lon = 0.518199924627;
    msg.speed = 0.0820886059994;
    msg.speed_units = 172U;
    msg.duration = 47225U;
    msg.sys_a = 50019U;
    msg.sys_b = 5155U;
    msg.move_threshold = 0.260455939792;

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
    msg.setTimeStamp(0.193190419528);
    msg.setSource(12864U);
    msg.setSourceEntity(197U);
    msg.setDestination(38925U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.200499154543;
    msg.lon = 0.512316657137;
    msg.z = 0.0480974437615;
    msg.z_units = 73U;
    msg.speed = 0.826088118805;
    msg.speed_units = 47U;
    msg.custom.assign("QPUFHDZSAODPBKBJWSKSVCOEXQJZLBWFFOURBUBJVUUMMWZZFGEXLAVSLTUKWYRLYVRBOFZSURXDAJQRYPGSIIMXCDTGNSLZOEQBUVHLTXNJNFYOKMSWNYHBNYEWKCNRIPLXOIKZJQPNMVEBYZFAGIHKQIACOPDXNEZSTIVETDJKPWCTOGXGMTJJIXNMATVPYQGUQTKQGH");

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
    msg.setTimeStamp(0.679683794476);
    msg.setSource(52723U);
    msg.setSourceEntity(73U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.598479918666;
    msg.lon = 0.118830505256;
    msg.z = 0.147770428845;
    msg.z_units = 60U;
    msg.speed = 0.646118182538;
    msg.speed_units = 160U;
    msg.custom.assign("MOXDHFDSTUKGKERCZADYLE");

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
    msg.setTimeStamp(0.897764453896);
    msg.setSource(36213U);
    msg.setSourceEntity(169U);
    msg.setDestination(58153U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.741164507044;
    msg.lon = 0.66796520219;
    msg.z = 0.791498269331;
    msg.z_units = 40U;
    msg.speed = 0.349725451054;
    msg.speed_units = 199U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.901841665442;
    tmp_msg_0.lon = 0.133162540729;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BDEBTNUERLOGKTMEMHKYIOMBTRMJMHWHLVBSMALCFJXALCHZBCXJMHJFGDGIHJSOGPSZRSDQNKRRNDYLPFJFVGCBUZEEHJICSPDGWWXVRKKWYCTRMFHZWOWPTXFAIWKNBZNZGYWMADCHSASOANZLPBVPBYFLDCHNLXZUKWLBIVZQAEVMJGYTFNNOPDYQXXKYSYJIUKEQYORIIZQJPN");

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
    msg.setTimeStamp(0.810077153461);
    msg.setSource(55866U);
    msg.setSourceEntity(154U);
    msg.setDestination(20795U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.683582651586;
    msg.lon = 0.90366094918;

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
    msg.setTimeStamp(0.246752592402);
    msg.setSource(51765U);
    msg.setSourceEntity(89U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.532123333536;
    msg.lon = 0.785880197204;

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
    msg.setTimeStamp(0.588728773048);
    msg.setSource(14296U);
    msg.setSourceEntity(161U);
    msg.setDestination(13767U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.150464341163;
    msg.lon = 0.163524077892;

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
    msg.setTimeStamp(0.249549772207);
    msg.setSource(23350U);
    msg.setSourceEntity(83U);
    msg.setDestination(12721U);
    msg.setDestinationEntity(19U);
    msg.timeout = 56905U;
    msg.lat = 0.411527255408;
    msg.lon = 0.0682285456994;
    msg.z = 0.00625438678111;
    msg.z_units = 137U;
    msg.pitch = 0.730948977393;
    msg.amplitude = 0.200620979423;
    msg.duration = 63272U;
    msg.speed = 0.197849371581;
    msg.speed_units = 15U;
    msg.radius = 0.921609174297;
    msg.direction = 128U;
    msg.custom.assign("LZUMFSQIOQSHGKFFAXGLDAIVPDEPNCKFZYXTEUAWPRWSUBKHMOFKUHDRATSJLGJRODZC");

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
    msg.setTimeStamp(0.0239994471466);
    msg.setSource(60745U);
    msg.setSourceEntity(16U);
    msg.setDestination(21228U);
    msg.setDestinationEntity(224U);
    msg.timeout = 18991U;
    msg.lat = 0.675575195157;
    msg.lon = 0.476577772097;
    msg.z = 0.0601336748394;
    msg.z_units = 13U;
    msg.pitch = 0.72734506013;
    msg.amplitude = 0.107893592156;
    msg.duration = 55862U;
    msg.speed = 0.044671128628;
    msg.speed_units = 87U;
    msg.radius = 0.670585365673;
    msg.direction = 47U;
    msg.custom.assign("XVQKRUZPETSFSRVNZZETBXGAYCDIALRJICIMGQHROQFQWVOQQUNJXCCKHROZGTSPFSHECSADHNEMHKZNLIBNAFYJPYSTZBESZLOWQUQOKBEGBYTJMETHYWBAMKVYXDCWIJNADLZEYPMAMCNAHOYINXRLRXKPNSOGPQBJYETGVTUMJDKCGTSXVVMLFFILVUTWOBKXPOF");

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
    msg.setTimeStamp(0.355035034517);
    msg.setSource(58859U);
    msg.setSourceEntity(40U);
    msg.setDestination(49197U);
    msg.setDestinationEntity(29U);
    msg.timeout = 11574U;
    msg.lat = 0.918063186402;
    msg.lon = 0.9527068389;
    msg.z = 0.324699024514;
    msg.z_units = 26U;
    msg.pitch = 0.44210346891;
    msg.amplitude = 0.920655229014;
    msg.duration = 63006U;
    msg.speed = 0.718617727862;
    msg.speed_units = 157U;
    msg.radius = 0.866347915422;
    msg.direction = 123U;
    msg.custom.assign("AGFRMGNZTZKIIVLASVJKUERBPTKXPMEMTQDYCJTRELOKBHATFYXEGEHOSNYBTWQUCJZJFRONRFNVGBRYQZCBMYAAHXSDMINSKLXSVQH");

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
    msg.setTimeStamp(0.677524264305);
    msg.setSource(10458U);
    msg.setSourceEntity(219U);
    msg.setDestination(46004U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("OLBKOCVPUALKWHHUFUMNXHXYYRTFAYYSFCYBOWINUIJHEXERMJVVAOPAYTCNWNIIBZGVBSMBIAWWEPTXXMSVHOGXETQDSSXBXALPRJVMCGWQBNTWZEACZJLMQCAECZCNTIDGVPOUKRGFXFDEQDSFWDQLUHHZ");
    msg.reference_frame = 84U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45634U;
    tmp_msg_0.off_x = 0.335196266595;
    tmp_msg_0.off_y = 0.360104817086;
    tmp_msg_0.off_z = 0.0726885186311;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WQKEMRNDSIPDNXDWAHYOTGVTLZBCCECFODHTXRRURFLKVIZFZVVKFITBVUAJNLNDDHOFESBFEKQJQXSMVGGQQWPOIGOLRCWPJZYKNMWISARIWFOUYISPCZARDBOXUXCWLVLHHNBWKKYJNTITVNJZAMRHYJC");

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
    msg.setTimeStamp(0.972454711222);
    msg.setSource(14506U);
    msg.setSourceEntity(112U);
    msg.setDestination(2768U);
    msg.setDestinationEntity(166U);
    msg.formation_name.assign("GVBPOUCWVMRAMGRRAHKBSOSFOJHAITOTJQLMRLYSTBPUKQMJNHZJFGVMVRHUNPPFIHKTLATFUMEMUCSDHHINDCNRMQWRXFSYDNBAGSYFIVQYWLOZIKUKJEIEJUFQUVQOWWJDSDTFWBVZZFXYBCFZLZCXLMR");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12529U;
    tmp_msg_0.off_x = 0.649304351897;
    tmp_msg_0.off_y = 0.326135414385;
    tmp_msg_0.off_z = 0.435025253562;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FBPDDOZHKUJNXDIYBILTGFNGUYYSQAFYMBJSZQKOXDLUDYXMJXWLHJAGMNCIJEAFRREYPT");

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
    msg.setTimeStamp(0.441955688172);
    msg.setSource(60794U);
    msg.setSourceEntity(227U);
    msg.setDestination(29202U);
    msg.setDestinationEntity(142U);
    msg.formation_name.assign("PWKYUNYAQCMWKPCVLUASMHUOYIHEHKTNKOODSFRFOFWICCYYVRBRSQVBNHXTFDLNWPSVLCSPDQYMQHPRGUTQWTHRGXURASAKEJXZPYEKZAGQEZVQXLMVUINIJMXABEWNCDBINKVDASJBZEFJVOXGJSQ");
    msg.reference_frame = 132U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52954U;
    tmp_msg_0.off_x = 0.763162019842;
    tmp_msg_0.off_y = 0.645280242532;
    tmp_msg_0.off_z = 0.770457508331;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YOCDUKRPBTDVTMANLZHRGMESFEOJSXCNLURIDEZBBUALEHKRWIKYOXUPESPNFCKGSHWASICIKJXBHLZUDOSEJABHTBWPLAMVWPUNZLTTKGCGTGCMIMVFT");

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
    msg.setTimeStamp(0.553118788262);
    msg.setSource(59272U);
    msg.setSourceEntity(209U);
    msg.setDestination(33548U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("YFSCXEOJOFMUDOGVQHEDIRLJGGPMZOUBPSAUKTNCHYWGZNCL");
    msg.formation_name.assign("VRXBGYSVMVOBLUJWMNYTRIAOEDFBH");
    msg.plan_id.assign("JPKWQCOIEPQRONVCRKPHZJQKLRNSTFOCHFNRQVIVRJOMRKXSFLLUZGWNRYJNVHDEXYIBUGZKQBNLJBWKVGDWZUFEGBZEAUZPBDSVGWPUOYYMXDNEZTERFKZSELMGDTCMHCDXGNOLZQJAAYVKWMTQAUHGMOJHITXJFTYPSJOHXPZLTBUITDIIHCNFATISBD");
    msg.description.assign("PPCPXVLJUWBWYLGCADJVCZPYCMGHTNEWZFHZTCSDDAQERKBAKKGXMAZQTMSVAZIBJLNIBKFVNPEGGNKLIUFRLETDJLYVJNRXLDGNOOUVTBSIRBGWXDCRRMNUWJSMKPWQHZHXDZAYEXRBDAYSXBUQACPEMSETIWXUCDTFIOOQEPQIMAQOVVHNOWCUGBQXHILUTOU");
    msg.leader_speed = 0.611488655964;
    msg.leader_bank_lim = 0.34020792554;
    msg.pos_sim_err_lim = 0.990345900878;
    msg.pos_sim_err_wrn = 0.942176079713;
    msg.pos_sim_err_timeout = 54292U;
    msg.converg_max = 0.687897459457;
    msg.converg_timeout = 34751U;
    msg.comms_timeout = 4570U;
    msg.turb_lim = 0.212395360056;
    msg.custom.assign("SCPYJPKJFGTLEFYIESVRCTQAFNMTHUMVGSAOCXXEXCWWDYNUFQUBIUKHVCDZWJSOCNIXLYAQTTHNYJTGOZZRMBSXPRXUZJQHAFTRQFWHRQBNLNKEPSCIKNMRVSGVBIGBZAWSIXREIMAICQZGYBHBAQEIJHBPYUPQDVKZXDZSLOADLXJONDLNZDRNGKPAWDWRVEOPJLLPHTGHMLO");

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
    msg.setTimeStamp(0.41890773641);
    msg.setSource(51446U);
    msg.setSourceEntity(243U);
    msg.setDestination(15426U);
    msg.setDestinationEntity(232U);
    msg.group_name.assign("WMKCXRBAWFDHKLRGBYOKAJFPSAKSMNMSEEOYKWMUGORLFVUKCQOPHYMEQEIUTXPLGISDGIQTETFVD");
    msg.formation_name.assign("SQJPBKARMEUCBEMTAYQTQEZWCKDCGFSZTZRJAFZGCCROVWWICWXSZOZLCYNYHZOZLXNQDANMGXMEXXLSXYIYISGRATMBDIONPLDUEOUMFOJVDALEALVDCPOVKBYSWPXVQTGFKQMAHTHHKHNUMTXKKVZPMNLPERBZRLEXNVUJGCKGFWJBDMBWPYJBUUCUDEQRPRSOKVHJKFIDRBHOOILSIFLYFTBHYHGPDSITVQFAIXGRQEIVUGQHNJNJYUJWAT");
    msg.plan_id.assign("YXLRAOJVOUFHOJZOTJNAPOGHUWQVGMKQTWZFSUDRNEXHFIAELTYRPDTMB");
    msg.description.assign("KZTVDXYGAYOXQFHGSFKDZBLPXBYYNTBZBSVRDVDJJM");
    msg.leader_speed = 0.316904963121;
    msg.leader_bank_lim = 0.828415067656;
    msg.pos_sim_err_lim = 0.774308438508;
    msg.pos_sim_err_wrn = 0.4232690841;
    msg.pos_sim_err_timeout = 53357U;
    msg.converg_max = 0.289797046932;
    msg.converg_timeout = 53383U;
    msg.comms_timeout = 61438U;
    msg.turb_lim = 0.398719839627;
    msg.custom.assign("RELRABKIJLBNGMBOETXOASOGMSVXUOLECSHDIKNYDQLUENHSQTRJMPNDVBJWGTVVZSQJUWTQIXSAOYBWIYGRYNTPCEWOSUUTCJQWKCYVTWDWVHXQHQAYOYUZCEIDRERTXELNKSFMPMGFCAKBWUBPPLQONPFHKRATPUVHZRHHGFVGISOGLVFDZSBCYAZEILRGYODJAKMNCFTJXVFQJMZXZAHNG");

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
    msg.setTimeStamp(0.57135946856);
    msg.setSource(13420U);
    msg.setSourceEntity(44U);
    msg.setDestination(30151U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("OGZYNNDUGJQWTJDYGIILMEDWZIVXEKYORSUJKDECMDBEAMCANYHPCSASIHPFOBBYCFYTWETEFIDFHYLMPZQLKFESOKMIKNVJTVBMTXDLCJZGQUISXKARPQAAFCZPNPITHZVDJWUDBRQKXBVUQZPWMBCPKGNFMHGJPWLWXBICUAVLOQVJMUGZRMQUUGECRXSDSHAXXNGYGRWQCUQRL");
    msg.formation_name.assign("CNMNMZBBCGPZRXKITNSPMWSDOHUYXOMROUNSXIWUERXFBTCYNVFTKDCCBGLILDSUNMXSBUZQIGRPIVWDGOHTKZJJOZKFRPOTIYNLDFULTQHOAMJBNJUMTVOZAHCPHEKAEHDCVKIFVJCPNGERBUHTBWWVPLJSVWUEGBP");
    msg.plan_id.assign("NRQSFLLZLKOCTCSYTVJVDWZRXPTKQTUCUINEM");
    msg.description.assign("TSYUIOTVHSYDWCNKJZYMEKHEOKRYXACJBJAUSXBUSAOIMJBIELMZIWXEWRVZFZTNQRCYXUDBJLMPTPDRJSVOVUKMIVKFEOPCPFAWEXZTHQRUKGWASNGXPGDVFTQLPPJIJHMDLQBFGHEHFIYVWPFNRVBUYCZOTGDWUXIDNR");
    msg.leader_speed = 0.273432525197;
    msg.leader_bank_lim = 0.82701435542;
    msg.pos_sim_err_lim = 0.402287671439;
    msg.pos_sim_err_wrn = 0.0604424580099;
    msg.pos_sim_err_timeout = 29965U;
    msg.converg_max = 0.89901567976;
    msg.converg_timeout = 14541U;
    msg.comms_timeout = 40761U;
    msg.turb_lim = 0.179697758923;
    msg.custom.assign("RVNRJRTCQZUTYQJEMDCTILNPPVJSK");

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
    msg.setTimeStamp(0.551707228256);
    msg.setSource(8713U);
    msg.setSourceEntity(208U);
    msg.setDestination(56682U);
    msg.setDestinationEntity(78U);
    msg.control_src = 63019U;
    msg.control_ent = 127U;
    msg.timeout = 0.0119980835274;
    msg.loiter_radius = 0.353619585475;
    msg.altitude_interval = 0.651072928275;

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
    msg.setTimeStamp(0.805523046664);
    msg.setSource(47365U);
    msg.setSourceEntity(72U);
    msg.setDestination(52428U);
    msg.setDestinationEntity(221U);
    msg.control_src = 16920U;
    msg.control_ent = 187U;
    msg.timeout = 0.835088299591;
    msg.loiter_radius = 0.792330309951;
    msg.altitude_interval = 0.28202564101;

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
    msg.setTimeStamp(0.804939155878);
    msg.setSource(35607U);
    msg.setSourceEntity(101U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(148U);
    msg.control_src = 51278U;
    msg.control_ent = 159U;
    msg.timeout = 0.0784110763833;
    msg.loiter_radius = 0.80223717243;
    msg.altitude_interval = 0.970262790892;

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
    msg.setTimeStamp(0.280746140151);
    msg.setSource(61991U);
    msg.setSourceEntity(144U);
    msg.setDestination(55506U);
    msg.setDestinationEntity(86U);
    msg.flags = 25U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.693991282162;
    tmp_msg_0.speed_units = 216U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.315141727986;
    tmp_msg_1.z_units = 166U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.532209754865;
    msg.lon = 0.534999493162;
    msg.radius = 0.515164075133;

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
    msg.setTimeStamp(0.0685870112292);
    msg.setSource(4962U);
    msg.setSourceEntity(26U);
    msg.setDestination(20465U);
    msg.setDestinationEntity(239U);
    msg.flags = 169U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.593076159509;
    tmp_msg_0.speed_units = 132U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.113224112792;
    tmp_msg_1.z_units = 64U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0468285511033;
    msg.lon = 0.193855982205;
    msg.radius = 0.568077376563;

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
    msg.setTimeStamp(0.492254155178);
    msg.setSource(30186U);
    msg.setSourceEntity(69U);
    msg.setDestination(21969U);
    msg.setDestinationEntity(213U);
    msg.flags = 48U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.663860666843;
    tmp_msg_0.speed_units = 79U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.518446550798;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.831499830656;
    msg.lon = 0.120935643913;
    msg.radius = 0.197234031772;

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
    msg.setTimeStamp(0.871252193031);
    msg.setSource(40609U);
    msg.setSourceEntity(251U);
    msg.setDestination(5837U);
    msg.setDestinationEntity(90U);
    msg.control_src = 47747U;
    msg.control_ent = 220U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 65U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.489548445142;
    tmp_tmp_msg_0_0.speed_units = 27U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.823678717504;
    tmp_tmp_msg_0_1.z_units = 68U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.582115074905;
    tmp_msg_0.lon = 0.499573753209;
    tmp_msg_0.radius = 0.210279099655;
    msg.reference.set(tmp_msg_0);
    msg.state = 141U;
    msg.proximity = 108U;

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
    msg.setTimeStamp(0.37813476624);
    msg.setSource(47382U);
    msg.setSourceEntity(103U);
    msg.setDestination(18234U);
    msg.setDestinationEntity(179U);
    msg.control_src = 38355U;
    msg.control_ent = 214U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 71U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.540526476289;
    tmp_tmp_msg_0_0.speed_units = 137U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.832877126609;
    tmp_tmp_msg_0_1.z_units = 217U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.196815706357;
    tmp_msg_0.lon = 0.587217317523;
    tmp_msg_0.radius = 0.749413996816;
    msg.reference.set(tmp_msg_0);
    msg.state = 198U;
    msg.proximity = 35U;

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
    msg.setTimeStamp(0.370085755684);
    msg.setSource(19888U);
    msg.setSourceEntity(106U);
    msg.setDestination(14878U);
    msg.setDestinationEntity(167U);
    msg.control_src = 25365U;
    msg.control_ent = 18U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 153U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.983268810289;
    tmp_tmp_msg_0_0.speed_units = 244U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0307682335065;
    tmp_tmp_msg_0_1.z_units = 206U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.694953430149;
    tmp_msg_0.lon = 0.462405891153;
    tmp_msg_0.radius = 0.39388143765;
    msg.reference.set(tmp_msg_0);
    msg.state = 253U;
    msg.proximity = 135U;

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.669622026844);
    msg.setSource(43402U);
    msg.setSourceEntity(119U);
    msg.setDestination(16582U);
    msg.setDestinationEntity(67U);
    msg.ax_cmd = 0.804441803577;
    msg.ay_cmd = 0.858865369741;
    msg.az_cmd = 0.480469988196;
    msg.ax_des = 0.283739315622;
    msg.ay_des = 0.519785330154;
    msg.az_des = 0.946089506464;
    msg.virt_err_x = 0.712082547079;
    msg.virt_err_y = 0.256620434668;
    msg.virt_err_z = 0.186045683183;
    msg.surf_fdbk_x = 0.043324186535;
    msg.surf_fdbk_y = 0.130366720077;
    msg.surf_fdbk_z = 0.502228760167;
    msg.surf_unkn_x = 0.128749170283;
    msg.surf_unkn_y = 0.207575839906;
    msg.surf_unkn_z = 0.704036774826;
    msg.ss_x = 0.792114328873;
    msg.ss_y = 0.300705148095;
    msg.ss_z = 0.160123501145;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KBEYQFDHSBREZEDPZAZLABCPXOZBJDFWMYZGPHWFLZEXKQSVXKEWPKRUTQXMKGJSCMLHSUZFVCRDFHHLZITWMMVXCVYOARRIGLYOIWWHCGQJHNNGAPIOGFBZKTJMQBXYFFQY");
    tmp_msg_0.dist = 0.243724978352;
    tmp_msg_0.err = 0.728119404439;
    tmp_msg_0.ctrl_imp = 0.908490219138;
    tmp_msg_0.rel_dir_x = 0.955240455821;
    tmp_msg_0.rel_dir_y = 0.606847577039;
    tmp_msg_0.rel_dir_z = 0.649419793437;
    tmp_msg_0.err_x = 0.985373229574;
    tmp_msg_0.err_y = 0.361934503595;
    tmp_msg_0.err_z = 0.573638211856;
    tmp_msg_0.rf_err_x = 0.294029587883;
    tmp_msg_0.rf_err_y = 0.76182957133;
    tmp_msg_0.rf_err_z = 0.72279598896;
    tmp_msg_0.rf_err_vx = 0.892064846014;
    tmp_msg_0.rf_err_vy = 0.148637366686;
    tmp_msg_0.rf_err_vz = 0.579298476943;
    tmp_msg_0.ss_x = 0.907095123224;
    tmp_msg_0.ss_y = 0.310864225625;
    tmp_msg_0.ss_z = 0.275496517453;
    tmp_msg_0.virt_err_x = 0.259600253621;
    tmp_msg_0.virt_err_y = 0.823308719042;
    tmp_msg_0.virt_err_z = 0.864649112428;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.136224752688);
    msg.setSource(3917U);
    msg.setSourceEntity(212U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(173U);
    msg.ax_cmd = 0.803067418043;
    msg.ay_cmd = 0.296460365511;
    msg.az_cmd = 0.566781346743;
    msg.ax_des = 0.745493485531;
    msg.ay_des = 0.804953756582;
    msg.az_des = 0.40346417519;
    msg.virt_err_x = 0.278835952636;
    msg.virt_err_y = 0.155243389938;
    msg.virt_err_z = 0.932370637865;
    msg.surf_fdbk_x = 0.414537128823;
    msg.surf_fdbk_y = 0.417293112835;
    msg.surf_fdbk_z = 0.736411062595;
    msg.surf_unkn_x = 0.383972735383;
    msg.surf_unkn_y = 0.522838826095;
    msg.surf_unkn_z = 0.396240447362;
    msg.ss_x = 0.320757344569;
    msg.ss_y = 0.556711039934;
    msg.ss_z = 0.985955102906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.939086612352);
    msg.setSource(29709U);
    msg.setSourceEntity(208U);
    msg.setDestination(58709U);
    msg.setDestinationEntity(94U);
    msg.ax_cmd = 0.287503894395;
    msg.ay_cmd = 0.83019453515;
    msg.az_cmd = 0.481868365954;
    msg.ax_des = 0.833482211895;
    msg.ay_des = 0.2856983223;
    msg.az_des = 0.325105131441;
    msg.virt_err_x = 0.380956862288;
    msg.virt_err_y = 0.945255155431;
    msg.virt_err_z = 0.275324361161;
    msg.surf_fdbk_x = 0.905396083881;
    msg.surf_fdbk_y = 0.0499557054702;
    msg.surf_fdbk_z = 0.874779739854;
    msg.surf_unkn_x = 0.844187647823;
    msg.surf_unkn_y = 0.454348487552;
    msg.surf_unkn_z = 0.790099744654;
    msg.ss_x = 0.312002565168;
    msg.ss_y = 0.267883717516;
    msg.ss_z = 0.583796447918;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.262301051877);
    msg.setSource(34574U);
    msg.setSourceEntity(40U);
    msg.setDestination(43560U);
    msg.setDestinationEntity(190U);
    msg.s_id.assign("FGGFMPEIRJWYTRYGATAXLVODPKZNCGNTBQMZJXGDHLMAKDNCCFWKWGNJXNQDYEANYYRBWISQQSRPKPNRSIOIPJRDPZBDQVLLTCCIAPZRTCACSXLOPZYUXRBHNHEVIEDWRUZDRWXFKQLZSMMHBCMAANIVTYKFMITDGUUSVEHFELOZDUIOBSXMOTQLUUOPBJJJOLYWMAXUFKWJYVVTHWOBTHUSAYHQPQQCVSKXHSEHGIJOVLCVWM");
    msg.dist = 0.996583207235;
    msg.err = 0.961724816397;
    msg.ctrl_imp = 0.885433832911;
    msg.rel_dir_x = 0.639283481865;
    msg.rel_dir_y = 0.441493508918;
    msg.rel_dir_z = 0.748604505015;
    msg.err_x = 0.91458126543;
    msg.err_y = 0.918265857417;
    msg.err_z = 0.747837492709;
    msg.rf_err_x = 0.117058044677;
    msg.rf_err_y = 0.327808931348;
    msg.rf_err_z = 0.51985081275;
    msg.rf_err_vx = 0.968956593245;
    msg.rf_err_vy = 0.253703437332;
    msg.rf_err_vz = 0.146953339194;
    msg.ss_x = 0.615385540855;
    msg.ss_y = 0.13065870562;
    msg.ss_z = 0.815786892069;
    msg.virt_err_x = 0.365399288204;
    msg.virt_err_y = 0.853053061945;
    msg.virt_err_z = 0.648233563154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.654647076721);
    msg.setSource(36906U);
    msg.setSourceEntity(38U);
    msg.setDestination(23417U);
    msg.setDestinationEntity(79U);
    msg.s_id.assign("SHKDRDADCEWQEDBFATBJXMVZFHPNTZUIVZSKJJBMTRVQVRULJSTXPEWVOASRIEWQHXGBZOLWGNEOEJFRPPCHHXXTYLIKQYYSDPUJCFYJQCMESBOOBSZZCPYFQTGNXAQWBYNAIMXHIRSPJHYLLETIGLYRGFRFYDSZUMKFXKAMBKIKWWZLVFTCBHQVHCOCHRDXVOECZ");
    msg.dist = 0.311829405117;
    msg.err = 0.46150267275;
    msg.ctrl_imp = 0.13592633567;
    msg.rel_dir_x = 0.393300866758;
    msg.rel_dir_y = 0.642245290643;
    msg.rel_dir_z = 0.877710039999;
    msg.err_x = 0.964381745072;
    msg.err_y = 0.448447746505;
    msg.err_z = 0.183331846671;
    msg.rf_err_x = 0.693269596265;
    msg.rf_err_y = 0.393241406482;
    msg.rf_err_z = 0.313667416353;
    msg.rf_err_vx = 0.854063972935;
    msg.rf_err_vy = 0.558421686979;
    msg.rf_err_vz = 0.266695457459;
    msg.ss_x = 0.0793586073752;
    msg.ss_y = 0.025121388583;
    msg.ss_z = 0.208270073926;
    msg.virt_err_x = 0.885115999104;
    msg.virt_err_y = 0.870955523368;
    msg.virt_err_z = 0.620860739245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.314162311618);
    msg.setSource(15227U);
    msg.setSourceEntity(247U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(84U);
    msg.s_id.assign("MFGEMRAJMIBUSCPXAOOASHXNUCELVOSMKYIEOWXAZGUKNZHYZDPZGWCQTLTWARCFMGIQUPPBTRZANJUUFANEXUSVBDVPUQIKPYJYOHJETMDRSXTMFJWLRGVNDPNHYKNWVDODMWBHEVDTRLZZCSXUKWQFQTKCCBXQIYYKBLIERWLKSONGTRUQOIGJPNYCJHZ");
    msg.dist = 0.709950342475;
    msg.err = 0.112345020279;
    msg.ctrl_imp = 0.987794949867;
    msg.rel_dir_x = 0.230119665672;
    msg.rel_dir_y = 0.862794525693;
    msg.rel_dir_z = 0.445054228531;
    msg.err_x = 0.770588591861;
    msg.err_y = 0.845699573093;
    msg.err_z = 0.328874427524;
    msg.rf_err_x = 0.585414406973;
    msg.rf_err_y = 0.692123892323;
    msg.rf_err_z = 0.67764438504;
    msg.rf_err_vx = 0.350938443743;
    msg.rf_err_vy = 0.611946443654;
    msg.rf_err_vz = 0.0669846816574;
    msg.ss_x = 0.284009253493;
    msg.ss_y = 0.674936164552;
    msg.ss_z = 0.286434908813;
    msg.virt_err_x = 0.0791600205108;
    msg.virt_err_y = 0.852273447082;
    msg.virt_err_z = 0.045987949729;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.566287200619);
    msg.setSource(2778U);
    msg.setSourceEntity(20U);
    msg.setDestination(56156U);
    msg.setDestinationEntity(185U);
    msg.timeout = 65063U;
    msg.rpm = 0.831524474766;
    msg.direction = 13U;
    msg.custom.assign("HHVTODQQLFGTIWKGMGVPYUJEYJWQZWGFCFLUVOYUCKAEYSTYHKAXLGGDJTAMOTFBZCWADFYGEIKFEYIILNXEPHMBLVAANHWQPROKJZBYTRFDIKEUZEDRBPUUTFCHLWLPXQTNUYSPBNCFSRBSVRONIGIXAYNQNQXAMAGSPTZZZMHQOROPSDQEWMVLXHCSQWPIBMMHOJNOMKTJWHPXDDKUCJIRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.463065290465);
    msg.setSource(10369U);
    msg.setSourceEntity(109U);
    msg.setDestination(24286U);
    msg.setDestinationEntity(149U);
    msg.timeout = 1406U;
    msg.rpm = 0.0601919581755;
    msg.direction = 41U;
    msg.custom.assign("PDSUTUQMQQIPMDGEIDNFXXMHFZWKLCPZVRVTORV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.190178095789);
    msg.setSource(56942U);
    msg.setSourceEntity(204U);
    msg.setDestination(4367U);
    msg.setDestinationEntity(69U);
    msg.timeout = 11066U;
    msg.rpm = 0.609208429582;
    msg.direction = 65U;
    msg.custom.assign("MZSBUPQFBCOQIAKCOWHAZQYUDAJPUNIRIHIPLFPAFPYRVKUUSMOXGGJWVBCOTNINDWFQEEYEHKUHGSQXICDBGHWLABNEHYZVVROSHZSFJXTEZPYVJCUNGKK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.107103957443);
    msg.setSource(6011U);
    msg.setSourceEntity(225U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(10U);
    msg.formation_name.assign("UMNRVABWNGMTCDKPBCYFNIMRLWJFNRVVLWACPRMIZBSKITDQENOOEHFRWHDOUFZDOUZJCWVYKMPCTKIMLQGOGTUSBTISCGOAYEFBDEEFZNLGLYTCPFMXFWSYZXWHNUXOEXHAABQHXQGIEBPZRCWBLZYHHUKJYZKJGPRWPLOJIJXLVSPDGSXQDSBVVGKIFIXVMMKAASRRCEYHEAQTQSHLHJDPTUUKQREUVNNLCZXUQPTAYJNVDKAWSDQI");
    msg.type = 93U;
    msg.op = 171U;
    msg.group_name.assign("URVDQVNWINFPBIBMKILDRHMERJBNOFGPKLEOVDZAPIROBNMTAAJHBKWDGEMKFTSYFYSUDJENFUUYWIRFSCSPXXCARCCUTHLQBTNUBALXQCZLPXKCLAUEVKOQEPQORXLTSBRLDWHVRFTYFMZXZIWGQHQYVMSCMJBICITTOF");
    msg.plan_id.assign("QHEJOEGKNBCRAMOPJOYQLYLYDTOHJZYYBNAFQOMKMGHTXBLAFOTZLPHQDWZSYBRLXQXYWVPYTHCPDFAWXKHEVDUNJDMJAVESCCOOVQKAIFACGIMYIQLNEUMPZHSTFETGRNJRRFXVZUNWNGHDFBDTTVHWDAVIEJ");
    msg.description.assign("QTSKZBONTUHEFONDXMQKIJISFICQBSGHVEVOPLPZVRQDQWBMWEISFNQCUXZWDGLSDFWBAXCHFAUAOOKJKEUKGHNRNSGTXDHIUDIHTJJPUIFOLPPBYXESYEPHJ");
    msg.reference_frame = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 56496U;
    tmp_msg_0.off_x = 0.766578116579;
    tmp_msg_0.off_y = 0.739116394289;
    tmp_msg_0.off_z = 0.749830510505;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0492601073553;
    msg.leader_speed_min = 0.0182520430031;
    msg.leader_speed_max = 0.325731300996;
    msg.leader_alt_min = 0.81082576671;
    msg.leader_alt_max = 0.0677578854646;
    msg.pos_sim_err_lim = 0.794137063766;
    msg.pos_sim_err_wrn = 0.352554957878;
    msg.pos_sim_err_timeout = 36542U;
    msg.converg_max = 0.987107741184;
    msg.converg_timeout = 12700U;
    msg.comms_timeout = 26416U;
    msg.turb_lim = 0.679847279281;
    msg.custom.assign("MIGLDEFDIPAXTBSBRQVMILVSPEWSYHLANVHGVMHBVTFIFTRJXWNOUEKMOPKZMDQGODJNHTXZGHLUWISENALJRTNXYKBAKRAZYOOPJUGZFPJTJRVKJXYEBETRGEUIJBWRKZNGRCLFXBFIHZJXFDUQTGNULDHCRRZQOUDWIACCPSYCELFBYVUCQABSFOKLNSCDQMWVOXKWAFCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.782932263178);
    msg.setSource(58651U);
    msg.setSourceEntity(77U);
    msg.setDestination(36065U);
    msg.setDestinationEntity(106U);
    msg.formation_name.assign("MSKDBQOBWYHDCTSHAMCXMTDQKQFSZCALCFMTGRDZVZNQTVTDDGBUNPTHMCBEPLVLAORUFJQBJYYVYTPOWECNGSBCUWATSGVWOJMRDZNGJLEIHVGVMBJEHWPIEQGLTFUKBQNCXIFWJNXDOSXNKEYPZLUOZEXLUJNR");
    msg.type = 187U;
    msg.op = 123U;
    msg.group_name.assign("YLSBQNBAXYUYSXOGHBEVWIMHKWLXZYANGMXYMFRNEXUTQBTONHHDWNLDORNCLNCAGCEFHIUZJWEXRSCNZPPAQUDVYRNCJRSTGHTTKJUJZSSFLARHGDBDKVPMQCDPJTPVKIMQVWEFIKZXSWEROMYHXQFEAZDBYUEIAGHCKJKMZFD");
    msg.plan_id.assign("JYOFXTAENYAYVINPKSDAPILSNPAKRRJFXTKIYWUUXSTVGXZZIHJCDETBNETOKQIPOBICVWPEACXNYTMWGOELQZAGHQOGKMBUCZVBISOXPIAVYRMEGNJGSGMKCOWZLPJUVDQCRHRRBDJDREFJDZRCSMDPYUZHYBLYNXOYVCLSFGQPESFATEQXJKLETFKTFUVZDNXBWULLHZKRWHQDFVMQKWABUNZLNLBCAGOMBMIQSMJXWUHTH");
    msg.description.assign("VJHXLWUXQPDNQDWBSWSTYIMKRAZPOOEUBGYKTCBMHRYFDE");
    msg.reference_frame = 84U;
    msg.leader_bank_lim = 0.731049965052;
    msg.leader_speed_min = 0.506323882301;
    msg.leader_speed_max = 0.635917398769;
    msg.leader_alt_min = 0.74917372866;
    msg.leader_alt_max = 0.482145311402;
    msg.pos_sim_err_lim = 0.807096690642;
    msg.pos_sim_err_wrn = 0.883734104809;
    msg.pos_sim_err_timeout = 44179U;
    msg.converg_max = 0.861922914127;
    msg.converg_timeout = 17319U;
    msg.comms_timeout = 6317U;
    msg.turb_lim = 0.410000000758;
    msg.custom.assign("ESVMTTLAQXMKDUCPPERXGVMUOHUYBMMCBZEYXRPWXOZYAFDHUVOGRINYBEXBITKIYRJCDQTYFHMLWOGALIYOLJCKFZEVOIWSQNKXTRPWEQKFDNHGJZJTVHULVKVYZOOWLPWFSZZFAWTQJBBRAZIEBDLFIMFIRCGSGSCANPBIGDJKWPPWPCQDJTBDMZSFBHEXNHQJHJSTHUGNMLROACKVKNUCGASTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.209714066908);
    msg.setSource(10367U);
    msg.setSourceEntity(143U);
    msg.setDestination(36937U);
    msg.setDestinationEntity(203U);
    msg.formation_name.assign("EOPXHTDVBKBHYKAGFNLHUNFZVQLABIWTOACZRWRWEJUZDWHUGYIDESRZIJUGRTOWAHXLKJBUQFRNFIMVRJGHDEKNCYPGVCACPPBNMUZUMPQWKJJFAYSJTONRVEKNHGGYQFXRTTICXUBZOIOSPTUSBYMCGEYBNV");
    msg.type = 20U;
    msg.op = 164U;
    msg.group_name.assign("MYKGIBNVDRSRUMPEFMOZYCAWCEWPJZOZOPAANUEFTVBYMREZCNMURUKLBFGTBJZQYHGHNITKWAVNKEDPXGDJVKIHKOIDSXNVISLQPHXSEGAEOCWGKCTSBNHQPY");
    msg.plan_id.assign("KIRHRBCTOAZAZRSMNNLVSTOIRMNNHGCJMQSXKUJJCTCRSYBPCIICKXVJUGAPOBBQMUELQXLTEFGGNAOYCEYTVIWBPZTGOPAEQNKQSNEQHRWFLTWWMCMDUXPQXUBGZSWHHODVBJEDTDAAPTSKYZYOXKDGZIMVUMLNIPAVJMYBFWHNCUJKNFDGWSROCOVLFLKGZUKRUPJPMEEIABPGDITHEAXJQH");
    msg.description.assign("RDMKQTQNLAMHXYTNSWJBBPMKOBFNARIFYAWUKYGBGDNCTHUXBENAUZESIJPIEGOLRPLBVWNHUOKDLUHPWOFSEGSXCJZFDFVCQZRSPERYSDLRVXFJNZSHMTGFHOHKUWKLPRAWERPFOUJXXRZCYKIXKQQVGVXJAVYGLWOVDCYBJIQBTFIXEDQYKSDJTJDWCHAHHTBFGIZWTPUVGVYBOMTVGNKMPQYDAJUZMOMCSCXLMQTLQNLUO");
    msg.reference_frame = 21U;
    msg.leader_bank_lim = 0.0561508557784;
    msg.leader_speed_min = 0.703039329453;
    msg.leader_speed_max = 0.00859598942214;
    msg.leader_alt_min = 0.70261837509;
    msg.leader_alt_max = 0.912771784037;
    msg.pos_sim_err_lim = 0.0346537213374;
    msg.pos_sim_err_wrn = 0.901996064476;
    msg.pos_sim_err_timeout = 15847U;
    msg.converg_max = 0.304161779314;
    msg.converg_timeout = 41360U;
    msg.comms_timeout = 60812U;
    msg.turb_lim = 0.401884276593;
    msg.custom.assign("ZWQGMZHXBDSFUULIHVGLFSDZFRUCYAPYPUCOEFIKDZZCHTMOKODOKOAAMOYABNRQRQCDUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
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
    msg.setTimeStamp(0.833952717871);
    msg.setSource(563U);
    msg.setSourceEntity(35U);
    msg.setDestination(6379U);
    msg.setDestinationEntity(35U);
    msg.op_mode = 117U;
    msg.error_count = 207U;
    msg.error_ents.assign("YRNNKFAINJFGSIMXQATITUOBJEIVENUPWBZPDYVQDVKFWBCMKHWXSNKHGMJGCVTDBWEVBTLZOHSRPNBATLBPSHARYEPANGUFLJFOLEVVDXKRZXIQPNRAMQTHOETJZL");
    msg.maneuver_type = 9632U;
    msg.maneuver_stime = 0.443544251952;
    msg.maneuver_eta = 56357U;
    msg.control_loops = 4210957443U;
    msg.flags = 237U;
    msg.last_error.assign("TGYNGRDCFFLMQGJTHBPLJCARHIKLCSVYMMKHEGYTVCWVDYPWRRLUGXWSUORABSGNKUIEJWEOOWEQICQFBMWYIEXZGBMUNANAUVBAXJBVZHYLOMNHZGEINZVXSTTBLODYQRTQKGZVSUPRIVAASDBUPYDTUPWKBXNYPMMCZ");
    msg.last_error_time = 0.947137039966;

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
    msg.setTimeStamp(0.00933171933484);
    msg.setSource(35047U);
    msg.setSourceEntity(215U);
    msg.setDestination(23575U);
    msg.setDestinationEntity(213U);
    msg.op_mode = 124U;
    msg.error_count = 223U;
    msg.error_ents.assign("AYZFGNSNCNPGHDKFCYCZFDLLLDTEFMGMDTUFPBGVAKUWODIRSSLVVAPCFAUYUMIZOPEHWPJKEEZEQGTJBMKSWCBGLUSGVNUWMBEANJPXISMQKUZZQWCDAEGTIOJOOHLJJKUNQJVAEZOCTWBIQDGPNCRVKNJKWLDVAJZCIHHTOBRDHIRVHIYLINBEHWOSYBYXRSPYXK");
    msg.maneuver_type = 38222U;
    msg.maneuver_stime = 0.389836748506;
    msg.maneuver_eta = 44538U;
    msg.control_loops = 640258916U;
    msg.flags = 62U;
    msg.last_error.assign("JUMWRBEZFGNMOPMFIMDHBFHXPSXDGVBZHQAHYQIVQZHW");
    msg.last_error_time = 0.917481682554;

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
    msg.setTimeStamp(0.00283270142831);
    msg.setSource(19573U);
    msg.setSourceEntity(153U);
    msg.setDestination(45797U);
    msg.setDestinationEntity(251U);
    msg.op_mode = 210U;
    msg.error_count = 53U;
    msg.error_ents.assign("PAVBMCOAHYPVFEFMWZVJZRNJVMGHMACQOYXGBRTWSTJXTCTGRPSCZOXOYZQNREALBKMOANSWDYGWBHXKGEQEBQRRASJMEVLJILTSSLKLYPNJVOEBDSWFOUBSNMIJLAYXDWTSPUWKMULKOBPKHGQJDIIRANIUCSOQDLUXXKEDPNXUKQZJTFXHBPIXGGCMOYHECALJUHFEZFHCUDKTBFYZRVPIFVHWYGN");
    msg.maneuver_type = 5947U;
    msg.maneuver_stime = 0.795484537557;
    msg.maneuver_eta = 46970U;
    msg.control_loops = 1381010545U;
    msg.flags = 52U;
    msg.last_error.assign("LOIOIQDXBTNKUSXAFLVWMIEONUDMPVMPDKYANTGHMDLVBISOGEHXRTYOBQBQWZUHZJSOXRJQVSWGEVHMHGBVCVIPE");
    msg.last_error_time = 0.415066121299;

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
    msg.setTimeStamp(0.722209051264);
    msg.setSource(45671U);
    msg.setSourceEntity(21U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(215U);
    msg.type = 31U;
    msg.request_id = 26761U;
    msg.command = 79U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 57724U;
    tmp_msg_0.lat = 0.138250902948;
    tmp_msg_0.lon = 0.576818499712;
    tmp_msg_0.z = 0.887062875878;
    tmp_msg_0.z_units = 34U;
    tmp_msg_0.speed = 0.0549624050279;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.duration = 63883U;
    tmp_msg_0.radius = 0.265025599835;
    tmp_msg_0.flags = 209U;
    tmp_msg_0.custom.assign("QDNJXKITRLKWCDKNXJEBHCWZKSNOQOVIPIMCJVSDSHEILGKDQJMNRAYBDLWELJXCKRCNHFOBZVFPVQORTFTWRDEIOGOQFSSGBTYJLNWXBRODNQPWRPBEVKUWIDLKTYTILUXVMYUWJTADQXMAATEICPAPOZGZTQPVMGMEHHJZSHMTYYHPJHXXQLOMQBHGGULNVYFFULEDJASF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4215U;
    msg.info.assign("OGCOGWRHQNBHJNKRHIMDPJXATBQVENPRRFAXBNQUZCCLNOUWYBTHEUMNHEYMJGAPNHMIESE");

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
    msg.setTimeStamp(0.717175570035);
    msg.setSource(8619U);
    msg.setSourceEntity(226U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(169U);
    msg.type = 234U;
    msg.request_id = 60535U;
    msg.command = 130U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 31830U;
    tmp_msg_0.lat = 0.931850174847;
    tmp_msg_0.lon = 0.745436060327;
    tmp_msg_0.z = 0.481102542939;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.780267693735;
    tmp_msg_0.speed_units = 140U;
    tmp_msg_0.roll = 0.311524682629;
    tmp_msg_0.pitch = 0.201447051879;
    tmp_msg_0.yaw = 0.257618182096;
    tmp_msg_0.custom.assign("VBDXHBLDTNGJBTTRGCOWOEJDIXLTCENPIVBQHRPIXCIZHWJVXWJWJCKUNWMXMXWGTFYULVXZNRSELBGQDRFZSHESSXEASOZAHXEBQIJZFMTDVAFUWNQANAJMPGLNAKVAISGOUWKPPFFPEBNOSLNRLYVZQMMXORKQYJKBMVCIKREICTIETLYUQRSUFCUFHKPAQURUMAQZM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32701U;
    msg.info.assign("CPKBSKOWGUWZEFUJQYVKOSPASMPFYXWEDCBPGAUMROFQSTFWMFYNDVLHEXQNOEMXTXMZLYTNDCBECJWKOBYBLVSETSAOQJAPGKVNLOZKQVJUHYMRLIGNVTDXXSKZYPHLEHRUWRTOVXDRPZOZULTGDIFAGUVIAZKUXBJLCUNTCCWZLDIMRFNWHQWIYHDPHIJEFCJURLDQFQSIVKJGHOZAMKPCDBYIXGSTERENQXNGHWTBYGBJRAZIMHNAVFM");

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
    msg.setTimeStamp(0.895875161812);
    msg.setSource(46419U);
    msg.setSourceEntity(222U);
    msg.setDestination(65383U);
    msg.setDestinationEntity(57U);
    msg.type = 200U;
    msg.request_id = 54731U;
    msg.command = 93U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 4604U;
    tmp_msg_0.name.assign("RUADMFJZIZUCHDWXEAWVCFGUOYFQHLLGTZNOCYTRGHNCJIWYOPYIPODGEFYTHWKFSHTMRZQGUDAGSVKMGVNRTMTKADGEWEAPDKHRWZFJGRNUOI");
    tmp_msg_0.custom.assign("FHWJXLPRJJRAIZIFRFMNKVWIYSMTZXHPDIEIKQWNWZSBGVFLNWRKBBUNABMIFAJGOOLXCXDBGZAWZYVQPYURBOUDPUVNOBKOHYQPLCQOFVQRTGEFMNDXYKRETCTQJY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10692U;
    msg.info.assign("VAJQRTOMNQIVUMZIDFSLINUBOOIPLKNWBIZAWRRHQKIEPOLDJFGHFEZGFVLTZWFXCKYJBTODEOPQCKFUMYRGSSLYTILDVXM");

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
    msg.setTimeStamp(0.995619032104);
    msg.setSource(56056U);
    msg.setSourceEntity(246U);
    msg.setDestination(13708U);
    msg.setDestinationEntity(230U);
    msg.command = 60U;
    msg.entities.assign("YOBHDICYAIYFAJGELBAOZMJFRQEPPZNXURSHDERPACVMWHWOCJBOEWTGJJENKMUSKMDRSRUXSFQIZGOMNHLGJWWRVQALBBTCLWQNZMRRTVYICUIPBMEJCYSCXMXTXKVTXUHLKYVFFYYKQFLLBCKSTZVPZIPHEAPPDVBTBEQZIEWDCXDDGPDORQJFELONKFITUWVZGOSXOUJZUTMLYCUXAVQVQA");

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
    msg.setTimeStamp(0.192823615187);
    msg.setSource(3634U);
    msg.setSourceEntity(4U);
    msg.setDestination(2086U);
    msg.setDestinationEntity(125U);
    msg.command = 52U;
    msg.entities.assign("VMAFZPSZWCCUNAWETSBHYOYJBGWEMCYEKDKUSPIXANTXZH");

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
    msg.setTimeStamp(0.0306083668502);
    msg.setSource(25497U);
    msg.setSourceEntity(141U);
    msg.setDestination(13983U);
    msg.setDestinationEntity(159U);
    msg.command = 195U;
    msg.entities.assign("EJYKPDCXQLDSJBNLGFWIJLRSMZBGONZOQZEFGIHALZPZTEJQBTMUFJIHZIXNMKREMLWVTIXZGPMAMUQEUEKODOKARJHVYISMHXTIYBWIEFXWNYDXRULBIDMAUCQJZZJLGOYVJQSAPWSHKKUSXOMPQPFSWVWYKCHVCSQKOLGQVYUPYFMGNWVVFHFPTHEROYSQVACCTCNBFLYPTDRHARXGITAVNKBCNEEWB");

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
    msg.setTimeStamp(0.150701446222);
    msg.setSource(18868U);
    msg.setSourceEntity(125U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(50U);
    msg.mcount = 163U;
    msg.mnames.assign("QRGWAUEJIEDAEHQAINKIVFLQKORUXORTCOXBVLWAJEFTZYAEDMUCFHLYKQHORYJXQMXVANBZNNVSQELRCRNRMXGHUDOJLORIYLVJPZKNPMIBMGVWJMGMTWPYHDSZEXFDBDUXLGHYBAYMGPITBLYIOKZDEGJPUFSSJHYFCOTCGQSDKATCFQGTJZCRQKKEIVIZSYHXPSWWNQPFPTVWCKZDMXNBWPOULMUBUUK");
    msg.ecount = 107U;
    msg.enames.assign("FMIOETRXMKSYVFEZUWWAQTXWBHDAZBCNNXNVWLDQVVLKCPXELQJZBNPPEYNURLTDTBYDPKZJWGOEGXXCCSQFEIZKQYIXGGYJICNCCPCZAUWSEVXMHUMMIKMAQIOZLHAE");
    msg.ccount = 105U;
    msg.cnames.assign("QROYDKBFFAQZCLBGRNDYSWQPLPRJAZGDSDCQFMPWIQINHTVKJMZCHHDHEDNGFVHSCSUUNSCJJOOIWUMLZSPWNAHVTRMFDSIWVIHKOIZLFRMVLIFIQMY");
    msg.last_error.assign("CQAKRJERCSPJKDLJGIORQIYEBNQZJZLVSGKADYXSVAXKWGOZVONDCWQYUQXHFINFTUEWUZEKBNNCBLAPOEPDABRNNUOSZJMFQVHRLWDWLWKPJODRZYIETGDHQTTNCSIVOXYVHMWZFROFEWKWBYXQAGOICVFHXHPGLXLRSRMBPCXWCZSZMYHSMMUNKHMZVJDCLELTUNFFSB");
    msg.last_error_time = 0.0460655286316;

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
    msg.setTimeStamp(0.071931959439);
    msg.setSource(1397U);
    msg.setSourceEntity(67U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(74U);
    msg.mcount = 130U;
    msg.mnames.assign("VUQWFPAJSBAJOCSLBKIRLESWTERGZCMNWSJUPADRZVTKCNXGHPBMCCQMGRTQTEDSHU");
    msg.ecount = 9U;
    msg.enames.assign("HNEZTAZGZMGB");
    msg.ccount = 45U;
    msg.cnames.assign("ZXKXAJPAQLNGCWYGGBUKYXKZMENFRICROOJXXVHNIMSKOAPTWSOZOMUHRJCFTGDGWHVOKRJTMQTYRGLPPPZJZVRSWNEJLEBHVPQKFQDITJXVQRKFAVFLNTOBCERGTJYWDBOZQFQAGCDYLCXYXFCPBZCAVAUHBONFUMBOXRUAHEBJIWDCIYFKISQDSHYSUIYSFDGYB");
    msg.last_error.assign("HMXNREMXLDLSGQSSSJJDXVIVRCZIDCMOQOWZFGRUBNCRPZLZO");
    msg.last_error_time = 0.437862807355;

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
    msg.setTimeStamp(0.615043603507);
    msg.setSource(36047U);
    msg.setSourceEntity(174U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(24U);
    msg.mcount = 6U;
    msg.mnames.assign("RSHXWKPZAGSKGIMFQEQYSSRCIEQRRDZAJOWJMZXLVQ");
    msg.ecount = 42U;
    msg.enames.assign("UDSDZNEHUTKVZVHXREZJLGBNIQODGSJCXYDMISDRURZMARPMSBTGTMZDQGOJWNXLJBIOTGNMPYCAUIXETZNYWJWXHNYBKKFCLWBVGAROARKGCZVCRWLGMAZPNUCCHHQRPPHKIEFXLGSQDXYCLWTPEKDWNFMQSOPHRCUTOXTXASVFDBBJYUAHJOPLTZHTIOPYPVQOEYAWBIQFMYMJMNKRYOIAA");
    msg.ccount = 216U;
    msg.cnames.assign("XDUVDQELFVJEVBMUSHYRWAOGJEECGIWYN");
    msg.last_error.assign("IOXDNMDNGUUIBGBLFSPSRGKGKXKQUTRWHPVQLALRNRPCTBLI");
    msg.last_error_time = 0.440504216922;

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
    msg.setTimeStamp(0.423564223248);
    msg.setSource(3286U);
    msg.setSourceEntity(22U);
    msg.setDestination(16964U);
    msg.setDestinationEntity(105U);
    msg.mask = 171U;
    msg.max_depth = 0.534516380499;
    msg.min_altitude = 0.198512227537;
    msg.max_altitude = 0.818345663364;
    msg.min_speed = 0.170254097457;
    msg.max_speed = 0.456977714913;
    msg.max_vrate = 0.0498457431309;
    msg.lat = 0.395174130585;
    msg.lon = 0.463475620303;
    msg.orientation = 0.687881666068;
    msg.width = 0.316889079377;
    msg.length = 0.0233830879316;

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
    msg.setTimeStamp(0.667108146954);
    msg.setSource(37477U);
    msg.setSourceEntity(49U);
    msg.setDestination(3612U);
    msg.setDestinationEntity(156U);
    msg.mask = 190U;
    msg.max_depth = 0.884437699136;
    msg.min_altitude = 0.409504717152;
    msg.max_altitude = 0.979969860283;
    msg.min_speed = 0.126292980645;
    msg.max_speed = 0.437248334418;
    msg.max_vrate = 0.513472686694;
    msg.lat = 0.834736373996;
    msg.lon = 0.323064391315;
    msg.orientation = 0.764623870653;
    msg.width = 0.585702871037;
    msg.length = 0.909771150907;

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
    msg.setTimeStamp(0.269013666835);
    msg.setSource(62670U);
    msg.setSourceEntity(57U);
    msg.setDestination(5583U);
    msg.setDestinationEntity(80U);
    msg.mask = 0U;
    msg.max_depth = 0.800153115142;
    msg.min_altitude = 0.911434246661;
    msg.max_altitude = 0.246839999352;
    msg.min_speed = 0.482813384407;
    msg.max_speed = 0.348182304181;
    msg.max_vrate = 0.214226154419;
    msg.lat = 0.899927978385;
    msg.lon = 0.567229643382;
    msg.orientation = 0.925051658894;
    msg.width = 0.717750944904;
    msg.length = 0.19860970905;

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
    msg.setTimeStamp(0.393317159118);
    msg.setSource(2129U);
    msg.setSourceEntity(219U);
    msg.setDestination(2184U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.134750332039);
    msg.setSource(59994U);
    msg.setSourceEntity(38U);
    msg.setDestination(3207U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.918158854121);
    msg.setSource(17547U);
    msg.setSourceEntity(165U);
    msg.setDestination(58172U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.185511181525);
    msg.setSource(47105U);
    msg.setSourceEntity(73U);
    msg.setDestination(6661U);
    msg.setDestinationEntity(92U);
    msg.duration = 59095U;

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
    msg.setTimeStamp(0.020089248555);
    msg.setSource(40929U);
    msg.setSourceEntity(252U);
    msg.setDestination(14954U);
    msg.setDestinationEntity(133U);
    msg.duration = 57408U;

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
    msg.setTimeStamp(0.0886517279452);
    msg.setSource(6690U);
    msg.setSourceEntity(242U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(55U);
    msg.duration = 10055U;

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
    msg.setTimeStamp(0.782496237771);
    msg.setSource(17660U);
    msg.setSourceEntity(66U);
    msg.setDestination(41928U);
    msg.setDestinationEntity(250U);
    msg.enable = 168U;
    msg.mask = 3864620663U;
    msg.scope_ref = 2165008272U;

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
    msg.setTimeStamp(0.65809901922);
    msg.setSource(57069U);
    msg.setSourceEntity(178U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(100U);
    msg.enable = 123U;
    msg.mask = 2052212222U;
    msg.scope_ref = 1799751205U;

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
    msg.setTimeStamp(0.786151128272);
    msg.setSource(7305U);
    msg.setSourceEntity(96U);
    msg.setDestination(49913U);
    msg.setDestinationEntity(183U);
    msg.enable = 156U;
    msg.mask = 2645278018U;
    msg.scope_ref = 1063339108U;

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
    msg.setTimeStamp(0.56703130121);
    msg.setSource(13306U);
    msg.setSourceEntity(213U);
    msg.setDestination(5401U);
    msg.setDestinationEntity(179U);
    msg.medium = 40U;

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
    msg.setTimeStamp(0.114612130937);
    msg.setSource(20966U);
    msg.setSourceEntity(206U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(31U);
    msg.medium = 143U;

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
    msg.setTimeStamp(0.858848873771);
    msg.setSource(38506U);
    msg.setSourceEntity(239U);
    msg.setDestination(22760U);
    msg.setDestinationEntity(71U);
    msg.medium = 0U;

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
    msg.setTimeStamp(0.5544830183);
    msg.setSource(19024U);
    msg.setSourceEntity(35U);
    msg.setDestination(51157U);
    msg.setDestinationEntity(180U);
    msg.value = 0.84176503668;
    msg.type = 62U;

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
    msg.setTimeStamp(0.211758381394);
    msg.setSource(25608U);
    msg.setSourceEntity(73U);
    msg.setDestination(41604U);
    msg.setDestinationEntity(60U);
    msg.value = 0.513772110668;
    msg.type = 113U;

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
    msg.setTimeStamp(0.614462175989);
    msg.setSource(30644U);
    msg.setSourceEntity(112U);
    msg.setDestination(37643U);
    msg.setDestinationEntity(179U);
    msg.value = 0.50384215067;
    msg.type = 243U;

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
    msg.setTimeStamp(0.878273585887);
    msg.setSource(49601U);
    msg.setSourceEntity(207U);
    msg.setDestination(55356U);
    msg.setDestinationEntity(156U);
    msg.possimerr = 0.121504871098;
    msg.converg = 0.649337739002;
    msg.turbulence = 0.991752942139;
    msg.possimmon = 169U;
    msg.commmon = 191U;
    msg.convergmon = 172U;

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
    msg.setTimeStamp(0.40182131522);
    msg.setSource(2891U);
    msg.setSourceEntity(94U);
    msg.setDestination(14556U);
    msg.setDestinationEntity(35U);
    msg.possimerr = 0.44486674689;
    msg.converg = 0.957699356044;
    msg.turbulence = 0.74465201283;
    msg.possimmon = 88U;
    msg.commmon = 174U;
    msg.convergmon = 122U;

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
    msg.setTimeStamp(0.515363772934);
    msg.setSource(9251U);
    msg.setSourceEntity(16U);
    msg.setDestination(51817U);
    msg.setDestinationEntity(74U);
    msg.possimerr = 0.390462280989;
    msg.converg = 0.67251186478;
    msg.turbulence = 0.659142134818;
    msg.possimmon = 20U;
    msg.commmon = 84U;
    msg.convergmon = 22U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.601183562856);
    msg.setSource(44083U);
    msg.setSourceEntity(81U);
    msg.setDestination(45049U);
    msg.setDestinationEntity(129U);
    msg.autonomy = 128U;
    msg.mode.assign("WDDMOAABFJOLDJDASIREAELJZXMJAKPSGRFRIKUZEELUVAIPKKWTNPWWQTMCXZJIKCQACGJQVUAIRGHQYSVTNSREEVGDBHEVZOIPPYLKRTBWECHRJMGPNYMNLILUQRZKYOPDVXDTZMFGUSHBONWFXOFIEDJXNCMSUBFOBWCQUXGVILYTJHPMLWTGZYFYYGADORKXFBQQZSRQYHSCEDKVXGHNVOZUUHICQWAXSHWBUTCBYOMPFZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.323942215264);
    msg.setSource(4843U);
    msg.setSourceEntity(120U);
    msg.setDestination(61489U);
    msg.setDestinationEntity(91U);
    msg.autonomy = 244U;
    msg.mode.assign("BVRXCQTBCPOILYMJMZLBHSOGQTXYBIUWPZMFOEPOCJLQMIHRNWDJTWIEDUGZFSUCRUTZADOYGPYMPJTGRVJSCZFSGMDXIKDEDIGGSCBHHVKEYWNZKOSXXAENLUBGYHVEPQTNAITTVUHXAMJQLNZUUBQORDBGFHWMEMYCHYSRKTDVNOPDKJLLYTJXWFHUZKASIPQALKGFROONPALXAKQVPNCQBXKVFLJEANBSWFMSXCKVINIZRJWZWYFEHAVWR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.856655865386);
    msg.setSource(19364U);
    msg.setSourceEntity(5U);
    msg.setDestination(40310U);
    msg.setDestinationEntity(103U);
    msg.autonomy = 32U;
    msg.mode.assign("SJOELSJMYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.630469074908);
    msg.setSource(28559U);
    msg.setSourceEntity(58U);
    msg.setDestination(40566U);
    msg.setDestinationEntity(7U);
    msg.type = 27U;
    msg.op = 177U;
    msg.possimerr = 0.0264196361189;
    msg.converg = 0.742221466221;
    msg.turbulence = 0.0796237004339;
    msg.possimmon = 171U;
    msg.commmon = 243U;
    msg.convergmon = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.45269574045);
    msg.setSource(33085U);
    msg.setSourceEntity(79U);
    msg.setDestination(62483U);
    msg.setDestinationEntity(154U);
    msg.type = 124U;
    msg.op = 112U;
    msg.possimerr = 0.644846518336;
    msg.converg = 0.050828429373;
    msg.turbulence = 0.238658781731;
    msg.possimmon = 4U;
    msg.commmon = 160U;
    msg.convergmon = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.995904560386);
    msg.setSource(51673U);
    msg.setSourceEntity(17U);
    msg.setDestination(32869U);
    msg.setDestinationEntity(196U);
    msg.type = 153U;
    msg.op = 67U;
    msg.possimerr = 0.292327613523;
    msg.converg = 0.980669591514;
    msg.turbulence = 0.287694940451;
    msg.possimmon = 70U;
    msg.commmon = 236U;
    msg.convergmon = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.980199078235);
    msg.setSource(9551U);
    msg.setSourceEntity(15U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.328362666455);
    msg.setSource(59550U);
    msg.setSourceEntity(108U);
    msg.setDestination(17261U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.613164387926);
    msg.setSource(1176U);
    msg.setSourceEntity(170U);
    msg.setDestination(19693U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.875799185945);
    msg.setSource(53246U);
    msg.setSourceEntity(229U);
    msg.setDestination(25493U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("UJXPDHPHSPWVNZJUIMMCRWJBDIVEDFOBTLLYYYIZSCOHDWWCGBLRGQHNGBYEMJDOHNEQSRUHKUVIIGUVEOQNXKLVXMYDMJFGXKPRXGQYISZVZLGTXMBAYOTKOAOMLENPZZFPVDQCKRFAPYLWPUDJPXWLEVXRQIMUKUSOQTBAQHWQXCRLTZTFEIFTZWJRFFUYGMKPCDSTCIWNQAHJSJ");
    msg.description.assign("CWUKNCKPQXSVMEFFLTQLGRNDATYGMSUXNQNYXOLFCAFBBCWURAFSJBLDLUOWYEZHHQZOOOXUYN");
    msg.vnamespace.assign("KLAAXRARZDZNQSXTFCUJVOCKPMVSMJROXHAJMTIOYHDMFLGMSVWOIZINTRUUPSOJQUHYWXPNHLWRBILPCPEMRGTDFEWIHZGHXJKKRTQFVBKLJE");
    msg.start_man_id.assign("IWPJQVXISPMUMWYPRVDEMX");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("XWFJHUKOSDBEVADNKFVXFSEBZBDIYLUHNTVZZAEGFQJKPAWQGMEILQLQGMDYDRVYTZKWXAHOHAIEKCIRXMTENXTUZOQMDZPGRNHOYMJWVSTUCIHGRJMWRCGHPEJQDGAGWKYDVWPFTSMLIZNTVHFTVEZJU");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57938U;
    tmp_tmp_msg_0_0.lat = 0.894401433765;
    tmp_tmp_msg_0_0.lon = 0.388149298932;
    tmp_tmp_msg_0_0.z = 0.213498800762;
    tmp_tmp_msg_0_0.z_units = 22U;
    tmp_tmp_msg_0_0.speed = 0.385050134504;
    tmp_tmp_msg_0_0.speed_units = 242U;
    tmp_tmp_msg_0_0.duration = 49862U;
    tmp_tmp_msg_0_0.radius = 0.0750049519514;
    tmp_tmp_msg_0_0.flags = 92U;
    tmp_tmp_msg_0_0.custom.assign("YICXKYGWFOLSKZDEPTMMNLPZMZRDVDVMWEFTWRDOIBBWCDBCDXVLCGFGCJCDGZZUDJBUAMPTNUNLSUPISUEOWGIJKOZIRVOTKADPSRWHUYOKXTXRWQLLSLEQREWJEEJBEMAQIZIYOEGUUOAVZSTVNCFJTMPGAPNXWHLNNIFFPBNFXHHANCRGKFQQKQVFJYHVZRKTMLDSYKHRUOFBNVXHPMBYCZOUQWQPIQH");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::VehicleMedium tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.medium = 106U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SetEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("EKZYGUDRMRBMOLWZRZJONLLRLPYIIFZUOHQHMHXTJKHLCWNZIJRXVEGFONSEJRBSCGPUNOJKEAFFESJXTDSDPLPGYKJCIKYWVAHBMDCAYHGDDWSETTDQFOUHVQTVMUMDRZYNPSEPHXTJRLH");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("TROVHRFBCZUFKSHJPUFDOIYWMXNMCREAHTNSINSPAGXIGNGLZUQFBJFLJH");
    tmp_tmp_tmp_msg_0_2_0.value.assign("OVGEHTCOIVHIGIHQIBHDOGTJBZQXXBQTFXYAXSFYYZMQZAESYUTVRSVCDVSNLWGZQFZDFJMZMUIYAQNHN");
    tmp_tmp_msg_0_2.params.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("VUXLYNTOOBEMGIGUEZYKGYSVRKMDGCBPAJBSAVBIAWZHOVYINNDXFUXMAKMQSTJIAIFUJMNROBGEWLDRKXRBIBDPCKTRYLOVEKQYLXJTEUH");
    tmp_msg_1.dest_man.assign("HEETTEGLTLDTRPZBSYJHFA");
    tmp_msg_1.conditions.assign("HCASKAWJIRCOVCBAICWMLNWZMQUTHVUAKBOXLVAGDRDNEOEWJRMHMSQUFIJDWWYNIVVHRTPDDDPSQMRTPEHJPKPIAJWDVVPYCOTBYYUYBVVAMTEKTYFXLKYNZGJRWLGRKHEYTLLZXDHQWZFUDUZWXKCCXOCJLFEOQPF");
    IMC::AngularVelocity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.time = 0.591794859472;
    tmp_tmp_msg_1_0.x = 0.652488331026;
    tmp_tmp_msg_1_0.y = 0.262212028397;
    tmp_tmp_msg_1_0.z = 0.344289299068;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DepthOffset tmp_msg_2;
    tmp_msg_2.value = 0.471650966522;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.0276168028274);
    msg.setSource(6950U);
    msg.setSourceEntity(18U);
    msg.setDestination(23050U);
    msg.setDestinationEntity(252U);
    msg.plan_id.assign("DQWHMNAZPJKSTTRLMMXEIBEQBXTGOVKLKYLGPHLPKDVJADVPNJEBJXFOSUDFZMGFAERCITRSAYHWWRPVCEYYFYZJYZIVFSBEAWOPGMMRBJAZCBRFDPMZFDXUGCRDOZOYHTMEQCIBALIKHBCVGLIVCTTUENQNZGILWLGORWNZLAAKXHQNQFUNHAQXVKXJRUOWOPSE");
    msg.description.assign("ZSFEPBHQHICLSJTAVHPSKQOAGFVZERCMPFKWFVNFMSBJUYZPVDBALZPHLMIPHXKWFXSCONBZBPPJYIXDXHWIYVQOG");
    msg.vnamespace.assign("LEYKNAVGAUIHWJTBPXZQJYVOGYDTKWOPWRYMDGOMIAEYDWZETUOCGQOBRRYCVFAAVLXXUFIJJDDNFFLYJXLXOKGKUQNMWFKTSDSGWXEZNDXFDSNSFBHPCNNAZMXHSURZTVC");
    msg.start_man_id.assign("SIIDKVZYEZYXMRSJCQDVVJNNIGGUEFYAOWXEIFJFNRKSAPLXUCNKEOBMTZQAQYJGXLBORYXGDZYHULKWCQKGJEBPFGUFTM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TPOBZAQSCHTFIWXBPSBOPRRMKBVWGXJVDXAJAGOVMFOGIOGIHBSSLJPWVOEBNTELBQZRXQHNZLNRJKIRHNKJXLDPXAMZUEASAUYKVUHKHFWSSFKTQABCCRGTNCFPVUUJDYQPFQYSIWMGNICFIKWZEDVGMEKJGQAPUEZNYGZEJWBLGJJIT");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.990476383946;
    tmp_tmp_msg_0_0.lon = 0.848784606422;
    tmp_tmp_msg_0_0.speed = 0.55925853267;
    tmp_tmp_msg_0_0.speed_units = 39U;
    tmp_tmp_msg_0_0.duration = 5724U;
    tmp_tmp_msg_0_0.sys_a = 35089U;
    tmp_tmp_msg_0_0.sys_b = 11565U;
    tmp_tmp_msg_0_0.move_threshold = 0.168515040837;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::EulerAngles tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.time = 0.11520697702;
    tmp_tmp_msg_0_1.phi = 0.480855929002;
    tmp_tmp_msg_0_1.theta = 0.254655758603;
    tmp_tmp_msg_0_1.psi = 0.702091308631;
    tmp_tmp_msg_0_1.psi_magnetic = 0.0621150129823;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("GKAHSUVHHKOQBWKTNKIZAGYEQANKFJDJWJDFAVBNRXCLNGDJHDRDZLWXBHBCTEKRIPCMJVMBCLAHUEZEBORPVNSAQQEUKURYMCKEZLFWOXQ");
    tmp_msg_1.dest_man.assign("CLQETWOYPGCIXLDOTRFFUVGPOGZMKUVVTXDHKQOIESVSEPNNNJWXOPOBBCZHJGHRIPYGBAAXXUVIIAT");
    tmp_msg_1.conditions.assign("VBZSPWBGMTIPHSTULWVMRNJSGRCIZATQPHYFGQYCLZGKHEAADICNWKHAPDKWICZWDJUPDYYHFCNZNSZTZRVTQBOIBLGYQJXTZFUOVJVBVDZWMJKLDYMMOLCXYNLPIJWBULEWOROQLRBOKXSQFDNRKQKDCHNVMGIRGLEUEOJBSXESAQIUSXJNXIWPZQEOASBXARHQMBCFTEKVVEUHHSYDRTAFFYPOUKTKRHXMCYOAPA");
    IMC::PathPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.00727810074514;
    tmp_tmp_msg_1_0.y = 0.80425467376;
    tmp_tmp_msg_1_0.z = 0.383641996209;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SaveEntityParameters tmp_msg_2;
    tmp_msg_2.name.assign("DTOCXQRBBFQYFVBCAERPDFCFPGLVMNJVWSIJVAYWXZQUNLRGWZAPJCZTDFBPUMIMWMVUXGICQC");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::FollowReference tmp_msg_3;
    tmp_msg_3.control_src = 34578U;
    tmp_msg_3.control_ent = 122U;
    tmp_msg_3.timeout = 0.42826626553;
    tmp_msg_3.loiter_radius = 0.0119898993722;
    tmp_msg_3.altitude_interval = 0.143899669159;
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
    msg.setTimeStamp(0.699059584321);
    msg.setSource(14917U);
    msg.setSourceEntity(137U);
    msg.setDestination(45342U);
    msg.setDestinationEntity(156U);
    msg.plan_id.assign("RXBPSWSMQKJMPNOLHUHAA");
    msg.description.assign("MIJRDHTHYKHECEXDDQNCXXNNLGFONGYRLMPPTTULVXBAUKEVCBNTUNYNVVRAFVZKKYZZYRWAQYWSMHWOPRHMILAPXLENHMXFVSSZBQDXTLRUZKOU");
    msg.vnamespace.assign("RMLHLRUVBSCCDAGHKDYSEKBBCDRYUTWWDXMBNNQNDJQVDDMFGKMEZSTBWYIIWWRUUGSFIAJJOLVZZUNTXGIOLXKTAZJUCHPFUQYIWGOTGZXTJFHNAYLRPKIBCEZYHOZVVEAOPIOJNVAFHBEPHPUDR");
    msg.start_man_id.assign("AKRSAMVQVAWVIK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("SFYPDXGHNHZIEGFIJITPWWDXUUVDLPNEMQQEJPATFOXVGJDMAUQWCBBOVRPTLQIEBLGIHWXRVLHJSGTFKEBIPSNSUSUTHORWKWGDBACRBGCFCJEXXAVKFIKZSOJTAKZNNVLRYVSOARWHZRLKQHUJKDJBWVTMXZGCYOSYUMRNVGBUNSTYZVQDPHNFXRMOCDUTEYQOLDE");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 2593U;
    tmp_tmp_msg_0_0.lat = 0.870724905858;
    tmp_tmp_msg_0_0.lon = 0.425091452043;
    tmp_tmp_msg_0_0.z = 0.214509046904;
    tmp_tmp_msg_0_0.z_units = 44U;
    tmp_tmp_msg_0_0.speed = 0.684963849504;
    tmp_tmp_msg_0_0.speed_units = 185U;
    tmp_tmp_msg_0_0.custom.assign("WDAOWFELCWDADJWUTNOVZIZMVGTHGBHSCVUBGVQSRYMDAFXTNHRYZCSOOJYPUBUFEJKQQCZCITEMXFXFMWQRXKESAUPKQWNEKPLELMTFNZTRYAZMAFQXKIEMLCGWVVAXRVCPEXJYKNCJZIFNYGBDRTSUPQSMKOBKURPODIHUOXGJLGGJBLPWETDTPVIFCPJNGNBXRHQCHKLKJISSAZLOHQBQHMRXIIYPOZYSHBAYBSVLM");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7004850797;
    tmp_tmp_msg_0_1.speed_units = 155U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 7548U;
    tmp_tmp_msg_0_2.value = 217U;
    tmp_tmp_msg_0_2.error.assign("GRFMQDORJWPEYKFFQCMLTWGYQFVCLOKTBXVVDMSUFELTAWCGAJNXOMTWTUSVJLHIHBFIZIZBFGDWNVYZTBVSYNMIJKHHUWXWDOUQRIMEIBDXVETZPOLYSNCBBIFLATHUIGKHMUQWXYEZMXACRLICBJKMBRSTNAGCJVWPKHROEWAUESDQHCOP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("XYRXWLYOXLPSUZEGBGTJLCQBZQKCOPPCVTGILQHKCDYRAMRJJAAMVNHBAANILNBGGUWOIGOXSQQKEHDQJABNMZYTKZXZMVEXUTQPFUMZ");
    tmp_msg_1.dest_man.assign("MKNNBXZCQLVDGXIYQXWDAAGHJVISPNCZUFUSVKTECAOQREOPYMLBURIOIVDNNXRJQAIZGGHYUHCDXSLHTDNAHPHARTPP");
    tmp_msg_1.conditions.assign("OLGKQFOYMYGCQSGFILVIZGQCRDXJOSZOFXARTUIRNCYPSDBIEXENNJVUAHMXZHSKBHATZWTOOFZMAFTRKYYWUSJWHCLCHPPEXUIGQNWEIVYTMKBWBVLEISLAXFZMJDBLYLMRSPVRBWETOHZSZGHJVMMDPUXJOHX");
    IMC::QueryLedBrightness tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("SJUOESQTXJFNNLEKHURFTDNVIGWDLQRRCUOZPUQXGBGYTPIVYMZIEBCVLDZBUABVQDWGQXYOMKIQHIYXUWOCZDSHXMKMZJSCNFEIMSRRGQHQFKVYRAAUPEIDFCFLTEOHTYCVSDLJPESTPJMAUIYHQGFJNPKKYOJKPHNBWNSPBDOWXJWLGOIJISBCGGORHUZFDAMGHXFUAXMHTTVMLEVLWWZEPYZBZACORMZJWCKEPQRRNCBKAAFKWXND");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.271661367467);
    msg.setSource(41380U);
    msg.setSourceEntity(120U);
    msg.setDestination(55904U);
    msg.setDestinationEntity(143U);
    msg.maneuver_id.assign("EKJTOQIXNBUUKIVDXRZATFOFABHQDHTJWPQLQRKR");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 6398U;
    tmp_msg_0.name.assign("ETXQBJJQDSTTRBLIJWKSEZLXJGUEBQSBKTPCEAIPFFSJAEKSNCRYDIMTGWAMWLGDFJKYOULVAMZOFVWCHAYONNINPMZPONQHEQEVRMXMOYNHNSWTLPVXBCLWSRXNZXDWZAHQDOTYCWKORUFJYYCACXZAGPFPQIRVEZOTQHOMDMSZRPGJG");
    tmp_msg_0.custom.assign("ALTLNHVBCYLTPXBGZAXBIGVOIZQECXLSZAJXEZVKRQAODVVGUPDOEWNZOOJTDWNVUPTDHWFMJIGFEXYJSCNHUHNSISDYMEGKKURUIOUWGEPEFCSTZBPHXZXNBFFHNKJYKG");
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
    msg.setTimeStamp(0.899159229308);
    msg.setSource(28071U);
    msg.setSourceEntity(143U);
    msg.setDestination(2351U);
    msg.setDestinationEntity(115U);
    msg.maneuver_id.assign("AYBQBYDYYHMRPOMYSLRZBCLEJLWQITENZUXZYMKZGNFFBTQHYKAXKFGJVSPJELOEXFWMKAHUEFOJCDYSRJDXVPVRJNGMWUIJUBBRRNNPGCOQXFDKDVGZHNVQOERWVADNULHZOSGMTWQEIGTWQSMFISEBTPXYZJXJTBHPCIPUAAAXFSXKGGMAQEHWSOCGKKZZSMLM");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 19340U;
    tmp_msg_0.lat = 0.965442166763;
    tmp_msg_0.lon = 0.747315166173;
    tmp_msg_0.z = 0.0888896819334;
    tmp_msg_0.z_units = 207U;
    tmp_msg_0.pitch = 0.243059949164;
    tmp_msg_0.amplitude = 0.101722046472;
    tmp_msg_0.duration = 30255U;
    tmp_msg_0.speed = 0.706370369811;
    tmp_msg_0.speed_units = 1U;
    tmp_msg_0.radius = 0.70864829138;
    tmp_msg_0.direction = 201U;
    tmp_msg_0.custom.assign("WOTXVOBNEYIONSLUUPTQYSDWBWQXDDAQBRMCDCJYLGEZOSCOIISZYJSFXEKFIZOIHVQMTPPKQJHSRUNPXNFBHAXERUAGGJUGRXJCRMGKCIZFSPAEXLJJCFBHDVFDXJWVAVAIAAKIMSLOUEIMBZVHFMZPGBNOXFHPNUHPKZBMVEGFGANFUZSVKTYWNESAMWTTCYQXOMWYLDRYDEZZIBLHULTLQKKKQRBWNG");
    msg.data.set(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("CIEYDOOAXYEKHVUVJACHYKZYKDBLGZDFVQXNRCOWQHAUAPWZZGSGRJRAZEGNIZLLWFFKUHYJLFMHHTDAWLJBDNNECKWLKGWSVCQMEICMXIWFDMBPKTQBKRGEUZXSAGMBDJTISJOPJPIPVIWOVXLNQILKYSXTWDQAJEAXQOFVFMDJXUNOCZBXMPTHJBOFAITCWT");
    tmp_msg_1.service_type = 156U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::QueryEntityInfo tmp_msg_2;
    tmp_msg_2.id = 43U;
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
    msg.setTimeStamp(0.466580215483);
    msg.setSource(63764U);
    msg.setSourceEntity(162U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(84U);
    msg.maneuver_id.assign("QJXHGINTGAHYWOVBVGOUTYNIRFQMLMBDSXEPHJDPDRAVYDTXPJLWHKLHMDKKSWFSLCCBFBFDKOWATCBMNVWTICNBQIELAQZEEQZIEQRKGLPGSNPOFAJWSVACCULRYYGPRWFRIUKPXZMIOZESLMNUHVVADEZPVGINMTHGKHITSEMKKCVUJHCDTOPOTXXOXRQFYHVNBCZBZUMAYXYIRFQSUNAZLWUSEOGRDQXJUJCBXWGQNAFZTKUFOWYLRJSZJ");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 18510U;
    tmp_msg_0.lat = 0.774439239422;
    tmp_msg_0.lon = 0.751803210806;
    tmp_msg_0.z = 0.395785130902;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.689104026156;
    tmp_msg_0.speed_units = 157U;
    tmp_msg_0.bearing = 0.102905426274;
    tmp_msg_0.cross_angle = 0.411463885463;
    tmp_msg_0.width = 0.937527241535;
    tmp_msg_0.length = 0.952529219391;
    tmp_msg_0.hstep = 0.338373462963;
    tmp_msg_0.coff = 0U;
    tmp_msg_0.alternation = 7U;
    tmp_msg_0.flags = 21U;
    tmp_msg_0.custom.assign("LABXZHYLBLRTSQCCHIYHDSEQNSGOXYIVJGMWPOMWKTCRLWFDYEEELGUBNGVQJCABXRQCARMCSPMJYOCJMGLIDFIVGHJJUKFZDLUSDYFBEHTPRWNQVRTFELZGQXGPKWXTHVDTDLYMSYQWJJOIDKZUOEFRWSXPHRKO");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.40910406295);
    msg.setSource(5935U);
    msg.setSourceEntity(95U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(135U);
    msg.source_man.assign("IKRSMAORSLOBNEGSXSIVELDWBDFPYCIMPVMAKUDPHALGZMPAVOEZIQCTQKJXJUKYDIHXTHINCEVEXRBFNOQGTFVQQRTYBZXKNWZCILHHQAULBVSKPGYNQZNJOWGVFBRHYWYFRUAUFODGWESWUKVXCWMXROYSOSRG");
    msg.dest_man.assign("MKUAVWUAFDZYXOSPJECKYJZLFTNQAPWNOLZLCFOBGFUJTMIBOERQZREDDOXPMIRLQUNAELHNJMIILWKWYCBSWHAQZSIOFHICJLNFJUYSDBVABGHFTWQZR");
    msg.conditions.assign("BFJUJFVJRCPHQGNVHRDIHPWVSRKBZNGGGKFQSLGUFSYRZZZGONYOSVMNEEHKETGSQGLPGRCBRNYZCWDHPIPEKKVDDZJXWDAKUODMWGFFBZJSKEETEAQEZCHBNWUBMMYYTSSIUPLOCALMRRTSTXQYHKYHN");

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
    msg.setTimeStamp(0.817134356664);
    msg.setSource(31295U);
    msg.setSourceEntity(44U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(30U);
    msg.source_man.assign("NTUZJIFWGUYFHYMTUTBSVCBGVZHYCPRZUWQCF");
    msg.dest_man.assign("YOHAGVKQMMJRKIPTMXNMBMEATCQADGBVJLHPSWFWKZQWQZLQPCDKKQMUCJCFMNGSOUSQTFRVSIELLDGFMWBCUCRETJPBNNPXQFRTNKKFHOTZYXOUPWSOMRQLGVGHXYGWAIAIFUNXVQKDOJNDBHLEBCXXRYIJJVHZZCLDVIRZDUUUCWYAHVPZSEGLSDKZHYAGLREEWOSLTTNBFXPAOUJBRJ");
    msg.conditions.assign("GJOLGQVXUHPX");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 249U;
    tmp_msg_0.zoom = 10U;
    tmp_msg_0.action = 151U;
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
    msg.setTimeStamp(0.282354975558);
    msg.setSource(35370U);
    msg.setSourceEntity(15U);
    msg.setDestination(15339U);
    msg.setDestinationEntity(214U);
    msg.source_man.assign("JHXOZYPNFUUREXDYRPYFYGQLWBQCXQAGPCXKWLCFYMNTEGJTWOORBADIJJGEVSLIOSATWXHNOMWUNHROMXVZSRUPZTDQOVNCTHHGIFTVDFYEVUJCBMLCMIQMSDKBBAUNKKLZLXUARXJGCHPHSPEYYQNPDZGMFLFOALKQJDCYPKUGMKNTDBZKSSEBWIMPEGSKWHWJRBQIVAHULZFVALXIIOOXZQFQW");
    msg.dest_man.assign("FWCKSKDTQOOOABIYULWAOQRQZIQNZFCRIQTECBTVKBPYJYGEAJQYSFPGSLIRJJGMUNXRUGGCPALAGNQKJJYUMSDZUTRNMEPWANHBUUDFESSZDXHAFEUWHTSYCZXFXPKSRMUZKQMLBHLFYHNRVEWQVYDGKFNNKLONYMDVCONQBPTWKIDWPOLPDVIVRLRBMBGMIEOODKXXSGWHIBCYHXVREBMTAMAXJC");
    msg.conditions.assign("DZHKLZNSEELFPZGXVLSRMKORCGFICISJYXGULQNGSWANOFNEJXTYIIJKDRMMJKJONRTEQNXPRWCOSUFHDHXOGBEWDWJEMFKIAVYQATYMVQMKBGXPFTNIYCWQDHZHKLMISCBXUWAHYUZEJVLOVXTRVPWFVARWKXMLVRUZDZODRTEZOFPBPIMUKNNYGZGIJNVBPCVQHHPUGYFYAQEPKSDQXJUDJCBU");

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
    msg.setTimeStamp(0.331142809008);
    msg.setSource(19343U);
    msg.setSourceEntity(34U);
    msg.setDestination(22087U);
    msg.setDestinationEntity(26U);
    msg.command = 56U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WOXUKGNAGUBONKCFDZXRFVJSIQAROHRWDDGTHNJPKXXLZKQQYJBROIO");
    tmp_msg_0.description.assign("DVONIRMJMAFPYOAVYJAXDJFENTPLUCBXSRBTAPDGQZERDCUOHHOUBNAOZOWRZEVCSVEQWZPQPOLKBJHJQFGJSWIKVCKMGSLMXWVHNYCGLFGFHPKYBSTTDTZMYGNIRZXKYLY");
    tmp_msg_0.vnamespace.assign("HYKTIKYNZMFCLUSTWJRVGWDMWAOEIMHVELNGYQXNBCBFGHVWRBGODFKNPLSZTXBDDMKPQRHUAWOEWHJSJZQFMKEAYMCZCLLIGBKVDUBPSAJZUPTIDCXRSFPHTOXISGMCKMQ");
    tmp_msg_0.start_man_id.assign("EJZYEYSKOCHUNXAXIUPWFKJPLBTDASKYCVFFFBNKSSEJKJGEAQDFFMRGHWPYVAWBDMMHKBUIRSZQZYFEPVYBHJSRDNXCHBLGMMVQXUUKIUMXUILTLRVLKMFRZGNBGHQBTTOOOUZPGWWNUTAQQEPPALZDP");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("VFPSCMOXGVF");
    tmp_tmp_msg_0_0.dest_man.assign("ZPCHTESUNBTGZRGVVWIAZNPNKUMYXYOOYLOUJHRDDFLLMSRORQJQBLISLXJNOHCAHSEFUFCOWTAJDPAWBSZTAQTXHTKGGRCCSNZRKWGBEJPXHEVBZYDLVUBBWFNQNDTPUWJTQIMYHXPYQSGWXOPDYXSZEIGQHDEAQDLNIPLTKADNKHWBUGREIHIDMFQ");
    tmp_tmp_msg_0_0.conditions.assign("WZVIZJVTHFAXMRNSKFVAQDXXVCHCQYFEZABOPAJPKWJSILQHWSMGSFADXMSEMLZIUQZLMHEDCKFQDBYPHUUSLRJIVBDQCDGTMAHTQYZVIOVLWUIPPYTJWNDTLUMGKUIBYOJRMXUYNGLCEKPPBSGDLKPCSQUGGEDTKYZCWOBHVUNWKYTFMFXRSFENBXQBAPTGAOHJEVINOXRYZVGQPNFBXOZJKN");
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.seq = 52527U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("TJOJDHVZICFEOWUQZEYUJOKUYPVDWINZCDXSFBOQIFXFIOAPVAJHWSSRCOVPAPTLFQOMVAODDKBYUTGXNUPNNJNYLMSP");
    tmp_tmp_tmp_msg_0_0_0.flags = 245U;
    const char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {91, 68, -22, 46, 102, -81, -103, -119, 115, -56, 89, 52, 91, -3, 84, 10, -125, 59, -41, 49, 99, 120, -3, 37, 4, -61, 106, 110, 107, -9, 103, -29, -22, -9, 101, -50, -88, 80, -14, 69, -18, -58, 34, -77, 33, -84, 83, 15, 81, -62, 84, 7, -93, 20, 14, 63, 38, 103, 50, -100, -38, 115, -85, 26, 83, -34, 70, -5, 52, 22, -90, -66, 52, -128, -34, -117, 62, 42, 116, -39, 100, -66, 115, -66, 3, -126, 44, 6, 126};
    tmp_tmp_tmp_msg_0_0_0.data.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.649927356752);
    msg.setSource(58087U);
    msg.setSourceEntity(107U);
    msg.setDestination(46252U);
    msg.setDestinationEntity(226U);
    msg.command = 137U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HQWBYPPVXUCWWGPDVKONYQOTKXTNTKASNMFKGQCTZIEMEVYDGZAWUPOICUERMGDUQHYSVFEZVFYWWENXJBFAFZJZLDOTUCTGISXYMVJXVDBRAZAQXPDQGPHIRHHDQYHMS");
    tmp_msg_0.description.assign("ZUPOKGCZGLSXBSXOUNGSOHWPVZHMTQVXEVACCRPZTEZGYBEPHWJWCSVBIAFUSMUIJBJNGHLBLUBTSFFDWIJUKXGDYTNLPKQLJPXPRYAEUQOTPYDMKFEKLSQIVLGSOUULLNZDOAFOXFGBXNDWQYIJOOTKMMRRA");
    tmp_msg_0.vnamespace.assign("VWVVLYRTHFXWQLCYXDJNFOQCQEMNNSTPRYYMRFXPYUNMWEGBEAZCDLJOJNDIQTLGHABBQSHDKQJPOBANHCNMJEVJQXZIIDWKMOCRKFRGLHKONXOLZJSCBDYULUVTIDKIHVGKMGSGTMRAFYEAKBRUBWPPZFHTTWUBZFGEL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UTWANCBVKQRCBTXWMOQVHDYPCIGSBROYLVVSMJKBUQCYENGRIRLKYALRSSPZCFARXSAJUFKGSTJMIPQGDGJBITWGLIVJQUHOPHINPKEWKBHJFNITGJLPZFCIAOWXNYGUVWEZXBHDHEXMPEVFPUGSWMZQJDKZRWWHETLOMUHQZM");
    tmp_tmp_msg_0_0.value.assign("DYYFZCWAPFJUHDYWSRRGMXEQZVGJLZNBBQDKNQBMMTASOTCVOAVRRLOAIHUCJHMNDAFKFEOHKNXUCTVINIXSWXPQQZMMVUWMRTZLYHDRFJPHUMEKIYPDRNAYCGNKUDCFGQLZYWERELUBQTUHITVYCVZGEBCWAYDTTSFXILNJCXZZXXXPUTBASJOEPQSKOMDAWFBOIBKGSWKWXLOSQP");
    tmp_tmp_msg_0_0.type = 100U;
    tmp_tmp_msg_0_0.access = 157U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DPORKGBNQVPWJRMHADUYRXFGCGRVBPLBZLZVZUFDAPWZFMSSXNTJWZNFUXIYJAHZHAJCIJKVSUSOTBEJHQPVTSLACKQPBMYGJCEDQGFUYWTUSINITLMWMDPKMXSOTUGJKDHRVDEOZQUJYCDWPXKHOXFJMEULNDGBNYIOHKCBRZEYWEPXEAVWYXWLF");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WPHDQYCECKLYZNQWWDLBNBUADMLIKHHPMTWGTRMUVYECEISPKTXRXOBTJZKNLPAGIRUCZFKBWSJMKDIWLIOAUUOQIWSGVTPSAQOKRFHOQDHTSHGVCSTGMVUNRYBEZDNMXEQZVLLPBBXYFFZNCUSLOXZQEVEJVNANKRIGYOMDCOXA");
    tmp_tmp_msg_0_1.dest_man.assign("TMXZNSIIGZLNCQFVRSBXPQGJEYEWQCQRAEAHEUJWGVCCFRTURCHQDOHJFAWKOVXFWDRFOPEMEKKFZSCNQANRLRTLLKYPBGTFAYWVUPGZAGY");
    tmp_tmp_msg_0_1.conditions.assign("ATZFTRPCEJCDGSXCSVAUWEOMHCVGMDLQVKBTUCBRDHBJNZWLKQPJDRNJQWYIQFAGZHHLVURWQDAKEGZCBJMFGBXYPLTNIGYXWBJZXTJSTYQWXPPSOWQAALLTKNDZRUNOOHCCZXLOVZMQGHXHDRPVYIMEYMNIOTLAIANSBMKYUSGFPERONJDWVGCKTMPJBUJZFEDRI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.623648817568);
    msg.setSource(23461U);
    msg.setSourceEntity(20U);
    msg.setDestination(26440U);
    msg.setDestinationEntity(55U);
    msg.command = 195U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KVEFTWWKXDXPLUYXPIXBNATUOUUXAJJWENMYRHKMDMVWKHYZKSVOUUNDXFHQZGUKLOOQZWJJMACVTLVUILITYFBJSOCVRNZTHQNATOKCJYMLMKSAZTBVZBLWTNIFKNISGBGTPGFZFKMEVOSHXEFPYMJERG");
    tmp_msg_0.description.assign("FJTVOPSRXECEGOFDDPWWONMGHDVQNEMDVWKRWWGINYKJMIJAXEMYIPXZCMHKRBNTLHUZVHURUJNCXJZJWYYTBRGNDYTYSIABVNXPBFGVJFMMCBSFTQWGUZHGYAQVTZXFSQOUVQURLEXMUKBAOIROTSWJLZBTVCNOHRPHGZKKPCLFASDTDEDKVQOPUAJELSBCDEFCLXGPSKJIYMAKZQOYZFSWTMZABKEGHPRHYLFIULOSHUBXQP");
    tmp_msg_0.vnamespace.assign("TCCQXBPLMIXIOXFSMWGDEZGCJOAVTNNEFPPJKNQPCQRZTPEEDNJRBXPQNPUWL");
    tmp_msg_0.start_man_id.assign("FPRPHPNZXEFSEVHMKUFCSZLUXMUQPYUBZOYNECAGRDKWPTBSTSZSXVVQPHOHVORNSQBNWBMXNGVXFHSBWJIONTZGSAZRAWDMZCVUIIZVJODOKSDUNEYFLKSOTDHVIKKQK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("EYRDHOUWWAKFNKJHQPHIOMBWDRKFURXCWIZIXZTLBQVVGMNXGTDJXXGS");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CQYSTVUQUNYBDCUASOKUKIKWPVBPLIWDMAFVJZTQSWBMXNPPEVXOBLFWMOTNEIHFZ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FollowSystem tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.system = 4246U;
    tmp_tmp_tmp_msg_0_0_1.duration = 54717U;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.301793870011;
    tmp_tmp_tmp_msg_0_0_1.speed_units = 246U;
    tmp_tmp_tmp_msg_0_0_1.x = 0.0957143061744;
    tmp_tmp_tmp_msg_0_0_1.y = 0.461695817109;
    tmp_tmp_tmp_msg_0_0_1.z = 0.23517934642;
    tmp_tmp_tmp_msg_0_0_1.z_units = 0U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.403822477565);
    msg.setSource(40176U);
    msg.setSourceEntity(80U);
    msg.setDestination(21698U);
    msg.setDestinationEntity(110U);
    msg.state = 53U;
    msg.plan_id.assign("INQURFBXBVPADYCTVLZEJCCIGPEORHUJTSVEZSFOYGKDSHQKXUMMKFPDXNPHRMYLKZKNGCAAXNZDOXAFDUEJWWJGYIRPKNVLGNITZDTFQRSBMZAVTXEHODRWAODUIJXCPVBFNYWSIMBCFQYEKOUOAJBYHBUQDLHVPSJTTIMLWQBJFSWAGLZETGKEIKAYZSLCRWYOULOIBRUNVIVZDVBWGSHLG");
    msg.comm_level = 115U;

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
    msg.setTimeStamp(0.891507311562);
    msg.setSource(50824U);
    msg.setSourceEntity(36U);
    msg.setDestination(58484U);
    msg.setDestinationEntity(198U);
    msg.state = 64U;
    msg.plan_id.assign("JUXDGDELNGQERPSWWFKZYYTWQPUZPQKAINHIZRALLXPSEUYOBUYUQJJIEDREZQOBLHJETHXTQZWRIULNQAJC");
    msg.comm_level = 42U;

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
    msg.setTimeStamp(0.882019936778);
    msg.setSource(18105U);
    msg.setSourceEntity(14U);
    msg.setDestination(43195U);
    msg.setDestinationEntity(109U);
    msg.state = 30U;
    msg.plan_id.assign("NHOERVQLXKBNTFFEAXEZQFCETDORYFLGWKOLEBQEGDWCDLSSIWLOFLYTPKMLJJPSIYBIZH");
    msg.comm_level = 233U;

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
    msg.setTimeStamp(0.314321748227);
    msg.setSource(52224U);
    msg.setSourceEntity(250U);
    msg.setDestination(47962U);
    msg.setDestinationEntity(70U);
    msg.type = 27U;
    msg.op = 111U;
    msg.request_id = 61046U;
    msg.plan_id.assign("JIWOIITUADPCZYFVKFOCZGQFYFNMADFSNRBJECUWFAUZMELYSIGXPELHXHUBVYVWYXQBGOMHSCLIKNATGTHAMSYJLFDRVULFRUVBQTCLXUBQGHEKRXKNQRKEWZTRKMWAERDQWGMTREKSTQPOSWXIOQVVJZUIIPZJNNPXANEUOTZAY");
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.op = 61U;
    tmp_msg_0.possimerr = 0.00851905917237;
    tmp_msg_0.converg = 0.852413113247;
    tmp_msg_0.turbulence = 0.281142916785;
    tmp_msg_0.possimmon = 212U;
    tmp_msg_0.commmon = 125U;
    tmp_msg_0.convergmon = 37U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OUPCIXGCTZLIGKAESDANUIQXTBETKXUYLHBSHOQFHBLHTCQNMAAISTRYIWVFPQYDWOUKLMPEHDLZJPBWNWFWHMHWQQZXJPUGICWXRDECJVVESXRGSVDVQOMVQDFUZNNXZCZFAPEYLSWGJEUTFPFZNRRZDRQZKGKLFSGGRPMVYLJBYY");

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
    msg.setTimeStamp(0.762834703555);
    msg.setSource(59853U);
    msg.setSourceEntity(168U);
    msg.setDestination(54009U);
    msg.setDestinationEntity(24U);
    msg.type = 212U;
    msg.op = 35U;
    msg.request_id = 34047U;
    msg.plan_id.assign("CRUSWGFCZBMWEPTALHHBUIAYRMPLIOZKZNEVYTMNUOWVJBLRHBGEIZIFDZWWYNOPMRXMQSUOBEYUITLVUERQDHNSOCQLQNFTIXDZQCDEAMMSFJYTROHWXLHOEFDJGNSDWPXKVRCYXOYHKUUGFALITXCJFPKVQJQZGVFCJTNKPWWCMSMVDIKIKTPXAGGFY");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.245454515486;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GQGSOQAGFLNAUOCPCNGKUTJKOWLHHXBEC");

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
    msg.setTimeStamp(0.174114203348);
    msg.setSource(5260U);
    msg.setSourceEntity(56U);
    msg.setDestination(6243U);
    msg.setDestinationEntity(238U);
    msg.type = 250U;
    msg.op = 212U;
    msg.request_id = 20698U;
    msg.plan_id.assign("EMZDCBCAOTHAHPOCJEPALDTHSMOPIAUFVLUHDMTPLTGJVWVKKHLSROEEDZAQFVWLKRKMSXJHRBKBPSPVEOJFJORXDJCTQFEMBTNIZWTIYFRRUXNVGRQTJB");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.373285454647;
    tmp_msg_0.confidence = 0.0140087989378;
    tmp_msg_0.opmodes.assign("DWJLMYRDQIBJQFPNOYTQBZRXLTFFEOKKOJOLRRAUKSZSHBIVFKIMMOEJAYIABQGGZHPNBMOULYHSQMJRMLWQPFVXPTIBHHVDYFSWBARSJOKOHTXXERWNEXUKRSDDVPPEMSDKLSGTZUU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MRINVHHPYROYNZABNURFNCRWSDXXJGIKQVIADKJUXULCPYYXLBAZTHBAEPULLX");

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
    msg.setTimeStamp(0.789385399451);
    msg.setSource(33997U);
    msg.setSourceEntity(159U);
    msg.setDestination(44386U);
    msg.setDestinationEntity(212U);
    msg.plan_count = 46616U;
    msg.plan_size = 1602463332U;
    msg.change_time = 0.489694562743;
    msg.change_sid = 13716U;
    msg.change_sname.assign("AAEKOSQLDALEVREMJDDQGVBTLSMJYFWHHTGGXWPHPKBXXNJJRZDMHPKFXFGRMDEBIZUFZLTEMCRUVJLAIKYQMTCKWBOIEHCEHQXDPVNBN");
    const char tmp_msg_0[] = {6, -125, 79, -31, -82, 62, 114, 80, 58, 30, 12, -71, -75, -94, 37, -102, -55, -123, -76, -34, -111, -48, 104, 54, 23, -58, 18, -74, -67, 71, -8, -1, 16, -112, -65, -85, -104, 93, -36, -8, 106, -70, 91, 22, -24, 78, 87, 46, 21, 84, -92, 2, -67, 70, -91, -61, 19, -63, 104, -107, -50, 101, 28, -21, -35, 87, -30, -9, -84, 18, 103, 19, -121, -38, -47, -100, 72, -98, -13, 69, -76, 23, -51, -109, 25, 126, -123, 115, -74, 83, 64, -31, 27, -108, -46, -94, 116, -44, -4, -43, -84, 125, 123, 16, -22, 0, 62, 0, -13, 64, -22, 109, -114, -51, 2, 89, -78, -31, 60, 34, 83, 116, 58, 53, 41, -45, -13, -3, -55, 20, -34, -11, -34, -69, 7, -57, -43, 38, 85, -11, 35, 28, -27, -94, -85, -108, -64, 96, -46, 32, 56, 0, 31, 64, -82, -128, 83, 60, 22, -62, 119, -19, -123, -59, -38, -58, -83, 2, -48, 9, -93, 104, -68, -106, 113, -23, 42, -26, -16, -83, 27, -8, 6, 121, -4, -118, 76, -109, -127, -21, 42, -5, -63, 113, 26, 96, 39, -88, -109, -121, 54, -118, 13, -57, -51, -48, -101, -9, 86};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KPFZGVGCNLKACEDIRCACYVWIHMYOOHRGFATUPRQWNLBCENTERUALNGPQQBGDSDQXIBNASVSBZGOTOFGUEFFHWYJUSVUCUPZWKBCHREBOSMLJKSEVILNVEXGCJWHFZDXJDYKTSTBJADZREQZTZFKZANRHOSMRUMQLAIOUSTRUCIKIDPWPHWFKTOI");
    tmp_msg_1.plan_size = 39096U;
    tmp_msg_1.change_time = 0.602509007909;
    tmp_msg_1.change_sid = 25568U;
    tmp_msg_1.change_sname.assign("DHAPAUALILLJAMMRWCBGGKHNWJGWQCWEIZPUNQJZJCEVIFMWOZFYHOBXLXOFYCNXUSRAJZFVLDIVTQPUJOOUONMGDKTKLVRHQRQRBSERXFVKPTHYCPBNARIQZIJSUDRGODMKTHZYRSCVCRQEWVIBECXGKEJIWPNKGXXKUAPAHVZKTTWSKMMEMBGUVOFSQDFNSBXDBNSZYZQAHJUBNFGSTFEYC");
    const char tmp_tmp_msg_1_0[] = {66, 58, 86, -60, -75, -72, -127, -9, 17, 6, 52, 96, -106, -117, -95, -39, 94, -75, 22, -70, 59, 125, -87, -64, -85, 112, -47, 2, 17, -113, -109, -44, -108, -116, -98, 122, -62, 31, 76, -23, 26, 106, 112, 91, 65, -35, 41, -73, 46, 116, 55, -8, 31, 117, -31, -95, -104, 109, 125, -102, 27, 20, -1, 117, -71, -2, 58, -48, -38, -74, 90, 4, 46, -109, -3, -124, 117, 76, -61, 12, -63, 61, 102, -114, 46, -42, 27, 43, -23, 42, 116, -66, -100, -33, 120, -44, 61, -44, -113, -6, 32, 3, 83, -50, -53, 19, -29, -23, -86, -40, 123, -3, -40, 4, 46, -76, -66, -117, 112, -28};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.63599478407);
    msg.setSource(46502U);
    msg.setSourceEntity(146U);
    msg.setDestination(60729U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 22056U;
    msg.plan_size = 2605353771U;
    msg.change_time = 0.980935249699;
    msg.change_sid = 61385U;
    msg.change_sname.assign("JUTULIMPIJTFFTGIBVFVGOSRODUPCTLGSBLJZMSKUJSLXNQNPYHVCTDRWOCDIASMFDHW");
    const char tmp_msg_0[] = {7, 44, -37, 99, 59, 12, 95, -48, 101, 69, -108, 5, 121, 115, 81, -71, 15, -101, -60, 16, 35, 16, 112, -28, 6, 30, -21, -76, -23, 12, 69, 16, 8, 67, 96, 54, -11, -125, -95, 21, -67, -74, -94, -93, 27, -101, 98, 35, 75, 74, -24, 126, 13, 46, 57, -19, 86, 115, -6, 13, 111, 8, 27, -106, -13, -71, 72, -48, 117, 7, -6, -125, 104, 33, 25, 75, -30, 120, 24, -55, 117, 32, 65, -84, -127, -70, -75, 44, 18, 38, 40, 65, 94, -20, -44, 46, 107, 45, -85, -67, 103, 32, 26, -126, 49, -5, -64, -80, -101, 52, -30, 117, 84, -122, 51, 111, 97, -40, 30, 25, 107, 36, 30, -84, -115, -49, -63, 7, -89, -60, -118, 13, 14, -75, 4, -116, 22, 85, -84, -25, -55, 68, 27, 25, -118, -88, 94, 75, 60, 76, 8, 18, -68, -68, -29, -20, -21, 2, -99, 18, 114, -66, 26, 7, 122, 126, 45, -43, -115, 76, -85, 85, 42, -69, -19, -74, 5, 36, 20, 108, -118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TYASAOZEYNVQMIDIXNLSBSHRIZQZJLDNCKFHBTOOGTQFFKVUIXXEUZQRAVKHGDNLDNKNRZYVAPWDTEWOGLBNOYXJIGJDBTQYJMHAYMIWJTKBTXPYBCGLRCTWNZLMBXPMPPUNHADKLWFMYJNQBPSCKZRVXSPIUKSJSVHORFFKWZERVJJHIQUCMHIRSYGECUVGEUWVRPTEJAMEWESWIGUMADALPFFDXLCKQWHBOF");
    tmp_msg_1.plan_size = 51602U;
    tmp_msg_1.change_time = 0.054120946214;
    tmp_msg_1.change_sid = 40378U;
    tmp_msg_1.change_sname.assign("SBJHCQNTJVCDILCCTIHOBQZTMXAXJIKEIPLWPURUONAAMYSFQPKGYRKEEFZWOQBJMCFFWLNTSBOEIVVFOSUHYSDRWJWVYSCXURKMYJEGXQATKXBGJZJZPLCCQKSXUWXTLEHBAZDELJAVPXNPTLNRYTLAYWNMPSNSQUZOEPGDLDRZAKGRMHDRKYQAWIDGUPLFOMTISMOHAGUHZXHEMBRVDBIFWQVB");
    const char tmp_tmp_msg_1_0[] = {-88, -80, -51, -76, -67, 110, -58, -14, 9, -32, -88, 76, -120, 96, -109, -106, 110, -59, -82, 38, -109, 23, -117, -114, 28, 122, 38, 8, 120, 29, -59, -114, -34, -92, -64, 57, 107, -81, 65, -119, 45, 47, -26, 63, -68, -76, 92, 75, 78, -22, -108, -73, 111, -2, 43, 89, -49, -63, 29, 10, -70, 33, -7, 103, -80, 38, 91, -119, 101, 41, 116, -67, 17, -87, 113, -21, 30, 49, 33, 86, 14, -55, -57, 35, -118, 27, 7, 2, 120, -15, -65, -102, -21, -36, 102, -106, -8, 122, 93, 77, -90, 50, 0, -86, 37, -53, 24, -7, 57, 68, 0, 20, -87, 112, -124, -113, 102, -39, -27, -14, 59, 47, -49, 92, -84, 44, 14, 5, -48, 35, -11, 65, 58, -127, 110, -101, 85, -2, -2, 73, 30, 108, 97, -2, 78, 37, 77, 58, -105, -19, -88, -59, 54, 26, 113, 89, 58, -89, -35, 13, 7, -65, -69, 101, 91, 52, -47, -58, 112, 60, -99, 105, 55, -112, -47, -80, -114, -24, 93, 6, 5, -84, -6, -34, 74, -55, -111, -16, 17, 34, -104, -90, -58, -101, 22, -15, -4, -85, 62, 21, 114, -99, 119, 43, -114, -53, 2, 87, 59, 65, -50, 38, -6, 67, 117, -105, -117, -16, -109, -9, 69, -7, 50, -113, -97, 118, -57, 57, -123, 41, -59, -58, 19, 44, 79};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.72950785393);
    msg.setSource(408U);
    msg.setSourceEntity(150U);
    msg.setDestination(37100U);
    msg.setDestinationEntity(36U);
    msg.plan_count = 46979U;
    msg.plan_size = 2317120217U;
    msg.change_time = 0.941243360931;
    msg.change_sid = 41261U;
    msg.change_sname.assign("AXHGNSRZNSINVFKOEFPUISNGJHYGSENJWOUGOKYDMKOUFZLGSYWWCSQCDPDDLZLLQGICERVRXHJTAOTIUQHXLAREGREJLTERFGBKFQOFYMDKIRMXNZZAOXMOODHSQZBAVHEMB");
    const char tmp_msg_0[] = {-76, -2, -62, -7, 33, -29, -66, -123, -108, 27, 118, -68, -58, -74, 60, 65, 18, 87, -43, 38, 120, -100, 108, 34, -13, -48, 7, 0, -38, 55, 92, -94, 101, 122, 117, -122, -115, -5, 116, 60, -64, -20, -21, 125, 14, -86, -71, -15, 102, -81, -74, 66, 36, 18, -1, 79, -128, -26, -52, -111, 98, 82, -102, -49, 59, -110, 45, 14, -2, -46, -84, 98, 6, 34, -24, 116, -27, -55, -91, -69, 79, 15, -54, -2, 37, -70, 89, -54, 54, -27, 92, -24, -90, 23, 67, -97, -114, -28, -69, -48, -72, -99, 59, 13, 116, -87, -26, 75, -23, -64, 13, 81, -66, -66, 2, -77, 18, -54, 65, -20, 96, 33, 50, 24, -78, -93, -32, 44, -62, 25, -54, -92, 123, 41, -122, -12, 109, -22, 123, -83, 53, 44, 105, 46, 47, -43, 80, 102, 103, -106, -51, -61, 64, -49, -13, -54, -70, 34, -42, 19, 43, 104, -57, 68, 90, -55, 2, 60, 126, -65, -3, -97, -11, -94, -114, 10, 105, 67, 0, -87, 91, 37, -117, 5, -119, 31, 67, -26, 49, 109, 93, -25, 61, -99, 22, -89, -81, 0, -79, 32, 95, 66, 55, 90, -75, -37, -47, -83, -6, 31, 36, 121, 13, 4, -73, -68, 25, -54, 22, -81, 69, 39, -124, 47, -108, -109, 64, -81, -39, -4, 117, -122, 80, 95, -49, -82, -41, 65, 88, 121, 61, 45, 126, -17, 98, -46, -102, 55, 14, 124, 92, 25, 26};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.867354483208);
    msg.setSource(33643U);
    msg.setSourceEntity(227U);
    msg.setDestination(42031U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("IBOATFYUTMZZPRWRPKVUVELFINRYWRILNFWGUIQMDQBJXRHNHKYGZLEFTFKEJMKEKNEPHFYWECBCOIGCPBVGMCTUFVXVGXSPAATIPDAVWGQKADBHOYHMYIBHUZLPTRUYNXLSUZRDMPSPDGDPAQCFNCUZGVOICJLVDOHDLJKTQGSALTJN");
    msg.plan_size = 34570U;
    msg.change_time = 0.196015411206;
    msg.change_sid = 27499U;
    msg.change_sname.assign("WHLUVYXEZPVQTECJFADPEHHBTHKCZNQLMFCKVTYSZPCWYGDPPEIENSHHXKTWZIVNKCLKOQLLISGQAQYNYBNXNHFSZTAIGSFZGMSAGEGOQRIOVRCOPLHJJMYJVCEBBUGXPVDVUOUNWQYTAXRXAWYKRGFAEYCARUJUSJMFDWETROWLUJBSDQNUNXHVWTCWMZHTRKKMBQFIODLQXOMSFRZRDPEWAIPZJBJMBYLILORJKFZIGCTFVMUSGBXAKMUP");
    const char tmp_msg_0[] = {101, 80, -33, 32, 87, 45, 35, -96, 87, 72, 75, 99, -64, -95, -34, -108, -78, -6, 72, 1, -6, -72, -8, -84, 55, -3, 116, 112, -17, 51, 15, 73, -30, 59, -13, -38, -114, -61, -25, 39, -102, 15, -2, 61, 20, -93, -110, 94, 59, 61, 124, 70, 97, -68, -93, 32, -62, -99, -58, 84, -58, 8, 123, -122, 46, -37, 77, 67, -28, -4, -45, -2, -65, 105, 38, 23, -30, -14, -31, 12, 114, -51, 4, -73, -91, 99, -34, 98, 122, -125, 107, -35, 122, -119, -119, 54, 106, 90, -96, -54, -25, 92, 80, 71, 125, 1, -64, 74, -82, -32, -87, 52, -60, 7, -80, 15, -54, 113, 93, -109, -29, 8, -66, 47, -107, -24, 62, -76, -80, 30, 102, 39, 52};
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
    msg.setTimeStamp(0.275654970536);
    msg.setSource(39896U);
    msg.setSourceEntity(199U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("CNMYCFRWDRSHHDRALINQWRFCGJNNHPUETEHBAQIPFJTOMYPSRZMLXZXNTJZGFNEFSZXGJVHVSCUCHVXOEJYLQQFIZCQQKMNUUFSOWMATSXYIIGWGFRTMFVWPTERGQJRWVBHLAOLTXHKJHKDKYBCGISKEAZNPEKCDBYKVYVXYIPWATMBDSADXZBNFUWYGJOBLAQJTPRIPXHROWWUIUZXDKM");
    msg.plan_size = 50258U;
    msg.change_time = 0.90120352461;
    msg.change_sid = 43063U;
    msg.change_sname.assign("LFXAHNZYXIYQCCSOMNTXISRAAQUGZOVRMORPEKIKBTFULOCYUWZFUFKXSHQWHJWERWPZMULIWMTQIOWGNGOGDAPKGGAHZWTJLFFQUMZMKEORCDVKJHYKNHLDFLBKYRDWNCPNQMSPPQBXGSNTYWVJSBXZC");
    const char tmp_msg_0[] = {-117, -66, 94, -71, 122, 65, -94, 89, -44, 96, 93, -97, 118, -103, 77, 99, -111, 6, -31, 83, -52, -63, 62, 18, -108, 108, 65, -66, 0, 56, -6, -117, 3, 114, 0, -111, -93, -8, 75, 79, -100, 61, -87, -69, 31, -12, -37, -56, -111, -41, -63, 79, 10, 57, -100, 113, -123, -43, 17, 14, 45, -75, 118, 8, 45, -114, -115, -38, 18, 66, -51, 81, -84, 44, 110, 11, -48, 81, -26, -82, -2, 65, -112, -92, 112, 89, 109, -87, 125, -70, 27, 23, -86, 1, -58, 5, 22, -21, 56, 25, 98, 104, -25, 67, -50, -81, 41, 19, -99, -16, -18, -82, 61, 16, -28, -81, 115, -119, -113, 71, -98, 94, 81, -43, -67, -58, -8, 61, -47, -122, -23, -100, -27, 42, 29, 35, -120, 20, -38, -37, 17, -105, -68, 103, 47, 25, -23, 49, 19, -102, -104, -101, 81, 31, -120, 101, 115, -38, -111, -119, 7, 112, -73, -89, 67, -30, -96, 102, -80, 16, -51, -93, -31, 74, -58, 104, -87, 4, -114, 102, -17, -109, 6, 81, -66, 118, 31, -81, 105, -58, 114, -122, 86, 9, 101, -51, 60, 123, 35, 60, -97, -24, 13, 62, 104, 87, 122, 115, -2, 0, 5, 75, -61, 68, 24, 31, 11, 4, -97, 29, 77, 92, 89, 34, 24, 95, 49, -20, -36, 43, -81};
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
    msg.setTimeStamp(0.412682445675);
    msg.setSource(36066U);
    msg.setSourceEntity(123U);
    msg.setDestination(54627U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("OVYUFEJQFMCGWMHXBRQELAPTHRVMANREYU");
    msg.plan_size = 25154U;
    msg.change_time = 0.716575280131;
    msg.change_sid = 64505U;
    msg.change_sname.assign("AOMCULXYCDAREGOAKMXSEVKTMYHZHJZERCQT");
    const char tmp_msg_0[] = {-64, -85, 96, -81, 41, -57, 91, -68, 12, -116, 101, 71, 41, -82, -69, -108, 124, -33, -110, -114, -11, -86, -106, 83, 62, 32, -75, -80, 87, -40, -39, -125, -6, -11, -107, -54, 37, 37, 67, -38, -36, 93, -105, 123, -108, -88, 114, -68, -110, -105, 90, 95, -120, 70, 97, -54, 33, 63, -99, -63, -54, -72};
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
    msg.setTimeStamp(0.607995587726);
    msg.setSource(22698U);
    msg.setSourceEntity(31U);
    msg.setDestination(15200U);
    msg.setDestinationEntity(82U);
    msg.type = 162U;
    msg.op = 150U;
    msg.request_id = 63475U;
    msg.plan_id.assign("QDNKLTAMMUROFHAFIEQXSKNDKAXEYQAZMJBWHTFAGTLVICCRTGABWDZVDDANYEOCANXURGDLYJTNODCPZRRPHNTLWFQGIFSWJJCZWJJIJXHGLDBRVPHKZPLWFOPCQAXSQKYSQVPLOBEIERCHAHYPCIZWQBXFKLUEJTKZQHORNEWXHTBIVJXVTNMSOUCMBGUXKLZBSZYGWKPXZMMIVUSOUFVPKVDNSMM");
    msg.flags = 25122U;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 245U;
    tmp_msg_0.x = 0.978199147893;
    tmp_msg_0.y = 0.0566330631109;
    tmp_msg_0.z = 0.656856020251;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LGPBFHZKRSXQNNTKHQRZEMYVPXHETYJLTIOBKAYEKKUWTMHSVBCVAEXXRFDDCZSKDVWYJPLGKEGOZWCWEYVDAGXUWZSOKFHJPDOYIFJBQIWZWESUKXICTAOWAMJNMGJPTNNNCIZQVVQJBCICOPIFAPTRTGBYZNOVPHLQUQUCGLJOSFMUBLYJCWUPXAQSSTMVIQFBUAAGD");

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
    msg.setTimeStamp(0.165642273933);
    msg.setSource(8170U);
    msg.setSourceEntity(113U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(20U);
    msg.type = 206U;
    msg.op = 78U;
    msg.request_id = 12117U;
    msg.plan_id.assign("URVRFFVPOFXOQHWRCOOEYXERHSGALFVFJGZGRYPACTAWKEGKNWKUMLCLESC");
    msg.flags = 12513U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 65U;
    tmp_msg_0.tas2acc_pgain = 0.642284352408;
    tmp_msg_0.bank2p_pgain = 0.244329602815;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YKJUHEHEUSRLMDGMLDLAXOVHYYTGLMSFVNEWQCRHBZXPJKMWBILKFTOAVNTRJRQHLSAFMBPXHACPUBPZZPVJRMGORUDBCIQTYPHRUXAVWICINPYVXIPLIWNNCZAODJZOFDUKMQJOITIJWSQXMTGRC");

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
    msg.setTimeStamp(0.425950118962);
    msg.setSource(45549U);
    msg.setSourceEntity(195U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(171U);
    msg.type = 30U;
    msg.op = 235U;
    msg.request_id = 18989U;
    msg.plan_id.assign("OWNLKLMAYMIHMXEARJMCQNBJFMPTWVRXXFNYQKKVVTAIZEAMPGYWDPPKJJUEJEIQHTW");
    msg.flags = 58424U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 57423U;
    tmp_msg_0.control_ent = 241U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.413102053377;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 209U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.0241885125993;
    tmp_tmp_tmp_msg_0_0_1.z_units = 223U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.869412573976;
    tmp_tmp_msg_0_0.lon = 0.882499234885;
    tmp_tmp_msg_0_0.radius = 0.564085256725;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 230U;
    tmp_msg_0.proximity = 97U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YCGBKHMXFPXMSKLGUBXSIIBLJMCCVQWYSFHHGEOPOMTEDGBICVVPSAWZXPTOIIOPBKYQRVDUDSEYSABFRZEHANMVIKOCJMNLMRJFESFFIUIXT");

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
    msg.setTimeStamp(0.161038745622);
    msg.setSource(4681U);
    msg.setSourceEntity(212U);
    msg.setDestination(20630U);
    msg.setDestinationEntity(73U);
    msg.state = 46U;
    msg.plan_id.assign("LNPXRXZQGWMQDZDCPFISPMNAGJCQRWLVAOOZOBKIP");
    msg.plan_eta = 1573478050;
    msg.plan_progress = 0.268316356824;
    msg.man_id.assign("WEAZZTFXPNHOWWWPJNKOXXXHIPFJOTGQMTYBRIHESAPGUQCCVXZHINZMYJQCLPCMYSSUSLKFFRJLPVHDSLBGFODUGOTXXOKDLEDYUWRRCNGQUJFASAMJBFLRCSECDARQNKKODLWLYIIISUSTETNGWVVPKZVEBWHVMOZQAXRYSBKWUVXNLKIRZDED");
    msg.man_type = 54453U;
    msg.man_eta = 415830637;
    msg.last_outcome = 213U;

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
    msg.setTimeStamp(0.486642608884);
    msg.setSource(57698U);
    msg.setSourceEntity(221U);
    msg.setDestination(1553U);
    msg.setDestinationEntity(116U);
    msg.state = 50U;
    msg.plan_id.assign("ZWGMFSNKUKFTYPRGNLAELMSSFJAVOTNRLGBLGBVTWKSPHCQBOLUMQZBIPOYSJHDYNOWILBLCKDLHVIFGCPZICONFITZNYBPDMZDKDYBJXLGUNVDEFKEQAHCARGSONHEMADEPJHTQMTPX");
    msg.plan_eta = -2118503225;
    msg.plan_progress = 0.177505859044;
    msg.man_id.assign("VNGJBVCMMTONCNKNISPZLABXYBLK");
    msg.man_type = 37874U;
    msg.man_eta = 118338953;
    msg.last_outcome = 53U;

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
    msg.setTimeStamp(0.882823431581);
    msg.setSource(26394U);
    msg.setSourceEntity(136U);
    msg.setDestination(52130U);
    msg.setDestinationEntity(22U);
    msg.state = 18U;
    msg.plan_id.assign("QTXFULDDCSXTGMFBSNZSFJWWMSZOXHSAUBTJUOOAAZRTRIOVSEUPKQGJVBPHNKKLRLNOOMQVXLUVDIQ");
    msg.plan_eta = 990424606;
    msg.plan_progress = 0.474544189135;
    msg.man_id.assign("VDAQTTRNHOSFZQFEXUEUEFGWWSBWTGGNQMLBLHVHXBDVQHCVRTKVRMYATWGAOXNNKPVFXEHXPBBWYWLJYFHZDZWIELDKUQCVMYNGPTCIZHMJSLPEIPWCSKTJMCRHVMHZZKVAQLODOSBBONKKUGDMJUGUFDCXKCEYGJSQEUPQZYPGO");
    msg.man_type = 32544U;
    msg.man_eta = -635218548;
    msg.last_outcome = 6U;

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
    msg.setTimeStamp(0.138042965919);
    msg.setSource(38699U);
    msg.setSourceEntity(96U);
    msg.setDestination(22738U);
    msg.setDestinationEntity(203U);
    msg.name.assign("UPIWNIJERZIUONKMADWNRXJFQEMRREWJTZZUNGBDEHKLEVHXQNHLWTKOBHZIJXGJTDXCURMPKPUHVANYSSUTHCRPWAWVTSVLSUPSUIBPUAKYCVCIKFCOJINBPDGGISBDGBMNFSFYOQLXVEGFTZGFATTIRMYOZD");
    msg.value.assign("KEZGKVBUGJKFAEVLXCDOSOHDEGQSXMHZQRZXFKQRJXQORTCYIAWBYMXSTDPWUIMTKDNSTYQDGNZUAEGKVUMNCNDRPIPICPEOOOAHGMIIWQLFWACACMPWFQUSYTKTNUXHRHCNVGPPQTRZLICUTWLYOLNFHRIEKJUKTBFXILSPBZJDVXELHCMWO");
    msg.type = 116U;
    msg.access = 64U;

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
    msg.setTimeStamp(0.974208754643);
    msg.setSource(5839U);
    msg.setSourceEntity(216U);
    msg.setDestination(37792U);
    msg.setDestinationEntity(193U);
    msg.name.assign("JYDLFFWJKPRDZRLCMXJIUYXRNHHHKHNRHAAZBUOMTFGWTAABKFQMHFVJRPEHFEYNWTUGELQTBKNQROXUPOSEERLCTXMBEZXCIVJPYUGGHKQL");
    msg.value.assign("MXRHDYLIFMEZBVDTXSASTIAOELBIIG");
    msg.type = 169U;
    msg.access = 201U;

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
    msg.setTimeStamp(0.538587449866);
    msg.setSource(54647U);
    msg.setSourceEntity(175U);
    msg.setDestination(11305U);
    msg.setDestinationEntity(170U);
    msg.name.assign("MKYXOKWWHRNDXBPYCTIZILYNIBVJEBYSWXDZKALMTTEGSDTKFLIPUAVQCXHHTVWKUNVXNOTUGPMGRLBHEOALSDTQVCKJPUOEOAXFEZKTXMLOOSXFPAGNCWUJKMQKORULJCQJCYXCFESDRFSBBAN");
    msg.value.assign("AYPLEJBJNGAIYVTZTREKWHVGEIFCKG");
    msg.type = 164U;
    msg.access = 59U;

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
    msg.setTimeStamp(0.0720430726682);
    msg.setSource(26035U);
    msg.setSourceEntity(237U);
    msg.setDestination(34930U);
    msg.setDestinationEntity(54U);
    msg.cmd = 182U;
    msg.op = 78U;
    msg.plan_id.assign("JOTCPGBKSHVZARPLZFBDUUAFCAEEGUCCXNBGXQYMSDVNDJRCGFWCCVHEOZIRGSVWDJKYBDUWLIOEVXIFQKNPRNHCOMZRHMGUMYBAYJWSPWRNOJXSULSLBRKVTLIEWYIHCIIPAVJLMAMILFHYTRPTJQQQGFVHWJWKXOPOHHHNWFTVSGQTXNQTKLAXTBICOLON");
    msg.params.assign("DKQPLQMJITXGAKRVUPIHXGQOOVRVRWJKWNOLMHYMYMIAKDARQLAQMBFTCVESNEUPEIIBAVPVEXHBNYGRULJZIQYYQFCZTAMWUKFD");

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
    msg.setTimeStamp(0.195398916658);
    msg.setSource(13670U);
    msg.setSourceEntity(165U);
    msg.setDestination(57386U);
    msg.setDestinationEntity(161U);
    msg.cmd = 128U;
    msg.op = 128U;
    msg.plan_id.assign("PNBPXBKIWPFWZSFDRKHKQAECHPHPISUMQRQRAMTDGHXBJZVJYINCKCIAWNTMFAQY");
    msg.params.assign("KQGQLBMHKISUHPXMUADRLRBTGGQXLMLXVN");

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
    msg.setTimeStamp(0.618791775858);
    msg.setSource(53008U);
    msg.setSourceEntity(101U);
    msg.setDestination(39002U);
    msg.setDestinationEntity(8U);
    msg.cmd = 7U;
    msg.op = 13U;
    msg.plan_id.assign("NSVOEODOUNOAHMUYHPJUSAWGEXHJHDTRTZYZEOXFVUHLJKQUJMWKWJTQBFNSKIXLBJQELCSIWVEHVFRMGQCNMOKSUCIBTPPAQAWBRLKEIWUYHHOYZGYRTPKQQTFKMIBZCNPASBFXKDLZBIJBBRXINHXRXUGQOCF");
    msg.params.assign("XOUIAAVTPIRJCMKHDNGBEZIWQFTLGRHCBDYRKCVKYVBTI");

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
    msg.setTimeStamp(0.573258294895);
    msg.setSource(50223U);
    msg.setSourceEntity(111U);
    msg.setDestination(51401U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("RQGHIFZUSQNAOHETSW");
    msg.op = 165U;
    msg.lat = 0.576086671498;
    msg.lon = 0.813569312918;
    msg.height = 0.971221511907;
    msg.x = 0.73822948012;
    msg.y = 0.389365457771;
    msg.z = 0.782977848365;
    msg.phi = 0.0724569623324;
    msg.theta = 0.649563929451;
    msg.psi = 0.0928499211736;
    msg.vx = 0.602570143885;
    msg.vy = 0.682667275767;
    msg.vz = 0.589165940055;
    msg.p = 0.587331624969;
    msg.q = 0.357033223511;
    msg.r = 0.74232983856;
    msg.svx = 0.662771175129;
    msg.svy = 0.303769082786;
    msg.svz = 0.97384662558;

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
    msg.setTimeStamp(0.484892464755);
    msg.setSource(3365U);
    msg.setSourceEntity(196U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("MSSZNRVZNRCJBHYEHOXEBNAQQBEPZUTZLURLCMWUXJBPTXWKAFLTYCPKTLXUMDUSWYGHYGRJQZAKMTPKUQKAGNRJEIRTEVDZQCMHOCPKAZUNUMHTAWXOSGTYOIFGVCWTJANVCDKRYSQVVWPMPYSAFFBCDBFHGREECBNI");
    msg.op = 184U;
    msg.lat = 0.959983736402;
    msg.lon = 0.192745591231;
    msg.height = 4.72424179971e-05;
    msg.x = 0.0676565355707;
    msg.y = 0.659137242522;
    msg.z = 0.832799896207;
    msg.phi = 0.781323896488;
    msg.theta = 0.383109536279;
    msg.psi = 0.181284669119;
    msg.vx = 0.858585919381;
    msg.vy = 0.10053209114;
    msg.vz = 0.458916045212;
    msg.p = 0.00797431472784;
    msg.q = 0.0984262757312;
    msg.r = 0.630503790538;
    msg.svx = 0.784625120694;
    msg.svy = 0.0366111680573;
    msg.svz = 0.301955809474;

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
    msg.setTimeStamp(0.0762791115148);
    msg.setSource(54887U);
    msg.setSourceEntity(86U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(148U);
    msg.group_name.assign("TKQYPTYYYPQYXQLTOVQEPNWVEPHFZWCPCTUXGLUBRMDIULTTGFSFUIDHHETZJJPMSHSEDOKWCQYZVOAFPXRVUHIFRTCOFAZBKWNKEIXJEONRJRRWAN");
    msg.op = 218U;
    msg.lat = 0.440615546798;
    msg.lon = 0.930150797795;
    msg.height = 0.181313995613;
    msg.x = 0.440248363543;
    msg.y = 0.872209231094;
    msg.z = 0.802357434814;
    msg.phi = 0.00504717864233;
    msg.theta = 0.729219311882;
    msg.psi = 0.7452267105;
    msg.vx = 0.168416961705;
    msg.vy = 0.121772300895;
    msg.vz = 0.649423435752;
    msg.p = 0.403981657354;
    msg.q = 0.506070585132;
    msg.r = 0.788791004441;
    msg.svx = 0.216245304431;
    msg.svy = 0.145750150027;
    msg.svz = 0.933753155044;

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
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.577536844807);
    msg.setSource(37994U);
    msg.setSourceEntity(80U);
    msg.setDestination(13432U);
    msg.setDestinationEntity(30U);
    msg.plan_id.assign("BNSAAJJCDHIMIXHOPKRCYBAUMENGTWPXFHDTEKURRCUTVBQQCODPSEYBIQLWFZVPNGQQUWNZMVWWJLGJWKIGURZWLTHHGOYBLEEEJFEZTSDFRJMXNQUHSCTWJPADOGFPJSLFEDPVDRVMTXIYUMDNCHVVLPTGIOMTAVXKIZXHXCIPYUBDYQOUBZMCBLCXSBGYAZARYEFVIYEOZTGHNZRSGXHAOKWKRAJOARWFBKLSNUJQXY");
    msg.type = 199U;
    msg.properties = 143U;
    msg.durations.assign("ETOATZICYGZWAXIFSMQRESBLNXDIGOUFDWAUWQKVPQGQF");
    msg.distances.assign("MWSVJPADVMRVSYDUYNL");
    msg.actions.assign("VHOXLDBORSIVNPCMJSPYZGOQEGSQMCBZUAGSLIUCBPPASWNVUUJXIKSRXFMNJKUMMPKYITJNC");
    msg.fuel.assign("RUFSJTYLPDACLMHOORYMUAUURVXVMRMHBASOFMQXUAGSVASLTFNRBYGDONWOJZWTZPOWEBJFKNFKJBKTPURQYYAGIAIJZSJSDEWVZCTGBOTZWEEYQPVGLLKKNUIGRMXYDDVZIHQMRUALLPWJQRKOVHKHZTBIEKNVFCEMNHAMVDYRXQCNNPWHJQLCICZPXUIOXDXBGTABMYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.304194804605);
    msg.setSource(46529U);
    msg.setSourceEntity(170U);
    msg.setDestination(25192U);
    msg.setDestinationEntity(126U);
    msg.plan_id.assign("PSDOUUEHKOPWGBXLIZRKQEHEFHAHEWIBFUXJXJNYBMCNRCJQVDOSXPRKVXMOYVTWLDSKTBYVAUHMJPIZZLNGRZVTVTNFTDJLGKHEVQOSTQITLLAREECBXIBFDGGWSQAMKJUFPPUXISCSWNFIFPOLMBMLQYMXGWWTC");
    msg.type = 7U;
    msg.properties = 133U;
    msg.durations.assign("RCDTBSMIUOB");
    msg.distances.assign("QGQDDAPGMDKHAKEUWEPYQVWIYLVJLXBRQPOWBTTEGFUVFDJHLMPHBDKRJTICICUYZCIVMXXYOJFPHXJSZNAOVMGMXTBNWOKAZF");
    msg.actions.assign("JYYJWLTIOKKOJSDGVHJXFLGSEDZUFZWYWKQCIPEEASUXBFIELJPYIKMDXXMVQAGEBYDSHBERJLBBZBWXTNKLQZRGIHMZJDGPMCLZDZRTTFJPEBJTGNWVLAQILXHYARIEFOFVGVWVOOYBWXNMCFHNCDMAXYBYCRMUHSNIQZQCUCONRARLVOITXFKQNPWOMEADQTUKWRGVZSAX");
    msg.fuel.assign("MTOIBLAOIZXNPSMVJHTCMPRBTIOEJNXUJGLNAHTQLNSTUMZXVINRNGBUVBROKCRHLRF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.717104468824);
    msg.setSource(22267U);
    msg.setSourceEntity(213U);
    msg.setDestination(10620U);
    msg.setDestinationEntity(99U);
    msg.plan_id.assign("CZYPIDJPTTFOAOGFJNFKWUIDQVIWDSFLNTCQNSIDKNPNPYQHWAHGSMCUXGMRULUKVLXQDHERILABHHODFWLNFJSKECSEVVDGJGUXPORSKOJEESEGYMOSWBAYUHKZFVZ");
    msg.type = 204U;
    msg.properties = 244U;
    msg.durations.assign("VMQRKPTIMLPCMPZWVZJRHZGRYERWRGLLWPPCAGHVEXEXNNCAGZJXDUGSQZONQZPAMIFTMXXCNFBWUWKALHDMRXGWHDOYJTOBYQTNHOEILDAUPJDQDJUZKIZYFSVVFKGF");
    msg.distances.assign("HOSLSMNLEZOWTPIVKDAQMVIJEFXXOQGRYGWLPLSQZUDEWTIJARCPZAZWNFJBRWOHGCVKCOYZVDVBQLMKMNSCDMYUHBFHYIFTQYEZDFEIKHXHWYDPIEPZBABLPQESJNRZQHRRLXOWTMVGKMCUNNRHQCNUMOYLENUXRTMLJWFBLPDUBJDJATFSIFSDUTZYGAIKRYKXNUGFBOFGAJZIXWJJ");
    msg.actions.assign("XVHUUFNRLGSYNIICRPTAHQGEVAFUIZODEFLJDAAGTICXGIIOEMYLYKBQBUWJBLNAEALIWPYMRCQFQSXEDKCJTVLJKQDNSJBRUJJOROTMBNFQDCKGDPPPAXWWUXBBXSDPTRHZYVEMWSZYOAOMBTTCXQVDVWNQWKTSOMEFAZDNEOUMYLEGWHFHMEZHKHOGBPQGJXMLTVYXIKUFDMYNPBCYJZZVIRTIQORWSCUVJCZGSXKNSVPKHPARNZ");
    msg.fuel.assign("VRFXHBBNVJIOHQZFFEXJFULKNATHAWVOXOERTFTZYUIRDPUYLTQCTLOITKUTPKNPQOWHVGNBYHEUGBCUGDMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
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
    msg.setTimeStamp(0.686121127389);
    msg.setSource(34191U);
    msg.setSourceEntity(151U);
    msg.setDestination(50168U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.382991359044;
    msg.lon = 0.846405081988;
    msg.depth = 0.148404592247;
    msg.roll = 0.1686973579;
    msg.pitch = 0.408622256074;
    msg.yaw = 0.0564375579174;
    msg.rcp_time = 0.412057937907;
    msg.sid.assign("GYSBXCLLBHXGVHGXYMYEHKRMDJICRHNUMQTUMTVKYMZOTWZQSHSTCKPJUIWLZIXAMGOCOIOJLAUJUIGLFPCTVSZGODRYPUCBDFWQDJLDXZADDEDQOLUNWESXEEJMPQKXAQNWYOPYHCFWVENKAMVBCLUPLYWNUFZDZBGTHIZGGTSRFRVGXEKYKNSTRPRJBSWINAKORAQ");
    msg.s_type = 131U;

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
    msg.setTimeStamp(0.669518359686);
    msg.setSource(7775U);
    msg.setSourceEntity(200U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.735664443927;
    msg.lon = 0.835554008307;
    msg.depth = 0.582643889491;
    msg.roll = 0.941584139562;
    msg.pitch = 0.203422797112;
    msg.yaw = 0.235293937425;
    msg.rcp_time = 0.882685368954;
    msg.sid.assign("EENNXBYWRAXVACHPJGLTIBOACONHQTOMFWXAHUIJNQEODGCFWONPYDKVAMXPYKVQOQZXVOGRUCJYDGOYFUBMXKYHLBQQEBHVCMQDKJEMSWRSKPVWZFYBZCPYLCJLSOPRKXSIZWZJKZGMNYUATDCIIJUDTANENWEYIISMEIRAWZGBSUSQHDMRRFGBLWKJTTVGQGVITHSOHFLXRVFTIXZUUWDNFFHPBASXELNJPCMBAVDDPELKTLC");
    msg.s_type = 34U;

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
    msg.setTimeStamp(0.167069681174);
    msg.setSource(40890U);
    msg.setSourceEntity(22U);
    msg.setDestination(1239U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.657706128623;
    msg.lon = 0.409347171475;
    msg.depth = 0.74904959406;
    msg.roll = 0.883118366772;
    msg.pitch = 0.28326964561;
    msg.yaw = 0.345395934279;
    msg.rcp_time = 0.081361910409;
    msg.sid.assign("UCXFLLPINBUDYAKKZWTWKUHOFDCVHVRVBENGFONHNAZTCIZJLIJYENEBIPSXUJMTCSDDNQELAWPBFPSGJULKWCXSQ");
    msg.s_type = 188U;

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
    msg.setTimeStamp(0.269639315125);
    msg.setSource(20809U);
    msg.setSourceEntity(95U);
    msg.setDestination(28930U);
    msg.setDestinationEntity(124U);
    msg.id.assign("IBVZYMHJJDTVPQJAFLFNOVGAUYXFEFURZSL");
    msg.sensor_class.assign("SPRUKCAJSBZPKFCQUQNUDNZBDVVSHXCMQLKHFRKKMSVJGTPHUFAELJHRIFDNVQURDAUJFMJVUTTQGBBGVVIWJYYUPLMCBPXQ");
    msg.lat = 0.971181373397;
    msg.lon = 0.968647106158;
    msg.alt = 0.459182836946;
    msg.heading = 0.521193813453;
    msg.data.assign("HKTTPHJHXLXWMCMBCZPXRNNGVTRICZDBEYVELRNZCOMKOEKOZE");

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
    msg.setTimeStamp(0.542851303311);
    msg.setSource(37717U);
    msg.setSourceEntity(142U);
    msg.setDestination(61927U);
    msg.setDestinationEntity(147U);
    msg.id.assign("PCJGSDPXFLIJMQIOAKKKGZTNBOSWFHGVRVCVNYWEOFZYUF");
    msg.sensor_class.assign("OPDLMSROKNSZOQJOYKKGLGUAGEBWKXVPPVCRLRYPHTFMQOXKRDGVNJIFTECQXRTQWURWUZPREIYYJNHVGISDYTJIXDZTWYDTUCUMBDPRIQNQEUFDQATIGHXLLCZLFOJK");
    msg.lat = 0.153122924106;
    msg.lon = 0.26333567958;
    msg.alt = 0.109570113547;
    msg.heading = 0.406822242336;
    msg.data.assign("HOTJXYSMSAGHVXRYZQYFKVOQIEPKOUSMUZURXDSQTNOPXDWBMADQYYZUTCHTPGMAGJLVZBAJFSBWVZQDXNENDOGUDZTZMIHBEYNURMJHJQQAWPGTJFKYHSCLNLNEXQOCEACEXNZLUTOVBDJRHFIGEVVIYMP");

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
    msg.setTimeStamp(0.546809279215);
    msg.setSource(63531U);
    msg.setSourceEntity(23U);
    msg.setDestination(30710U);
    msg.setDestinationEntity(171U);
    msg.id.assign("CWBUXZJSLYBHIXVXBMUQKSHWJFVQAAHZHQANIVZRYMAUXNOOETQJEVUIKPWIQBYMCFHKWQKCGVROBSDEYZOYMDUNDOQUPMIHJZFATSEFLIOXUGPGMOJPRSZDKKZXHCCBGDLRSYMJSZOAIYOREQPMEZJKNYMQDWAHTWICDGGVGQXWNCGLLJLFFBKCTTXCBTXGDNRMTFPKIFRLWXNPLKNAGUYPVWNFJRTLSCT");
    msg.sensor_class.assign("VTIDFKUXNEPBRPOYIFGMBGMZACTVEBDTNZCBJKSEJDATWYJBGGVEZGZNJJAGTFIRTPKSSSHMXEOSVXDLLOGVONYXHLVIMMAPMXNJQYQOHUAKTOUNWSEOBWQICXPAJZ");
    msg.lat = 0.091102877685;
    msg.lon = 0.787871838157;
    msg.alt = 0.0778956154652;
    msg.heading = 0.256553770767;
    msg.data.assign("FTMBSADKXXQJRIIOBAYWZTZUGNCSZNZTJSLPRLPBAXNOYDWGXRQUUNQFOYGOLCUGPWTTLYVERPHVOGIPSNPVCGWGKCKIVZBHXOLLYMCMXTCPTQLJQGHWTFEMBAOCADWBIDVDHOBSJMESSVMQNLONAQRFBURKDBEKEZIHMPUFIHAGFGXRVEKMWDUEVVEPTYTQEFAD");

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
    msg.setTimeStamp(0.219297845698);
    msg.setSource(3882U);
    msg.setSourceEntity(218U);
    msg.setDestination(45354U);
    msg.setDestinationEntity(204U);
    msg.id.assign("ZBYFVEJHKEYGUOIFIZLIENLRLHBXFLJDBANXTVUNLLGIHTHLYSWCSSTBQPECPTPAXZUNXQITVAUPZMVXGFFXXMWEXTOMCKGFADKDZJIYWBATDOCPVAHHGWSQUIUPNGKIHOCPFJ");

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
    msg.setTimeStamp(0.889423034138);
    msg.setSource(5962U);
    msg.setSourceEntity(86U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(26U);
    msg.id.assign("XLKZLDKVISUPEQFUDNCQCRDYBGSMVBJNQHGXNIIBRIJCJYDRLYGUZMOPDONWDVMJYTQKRAWEZDMQCMHRIXAEXWEWVRFXAEQASTOQSXKFCVVEMNYSHOPASPUEXRFPLDHB");

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
    msg.setTimeStamp(0.0169618028282);
    msg.setSource(39638U);
    msg.setSourceEntity(8U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(109U);
    msg.id.assign("HTPLAGHBVNFVWTQGBWALGDXITKGICQADIYFMWUMDHNZRLPYETBENYPDJSKDEICRMABRLARYWSEEOPNZBXIDTEVXGYYMLESCWUJGZNMGDPLQMRWVPKNXOJMOQHNOJACTFECWGHHJKOM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NVRLSVLOXTIJFIMTBGWUTYKPARRDYPLEROUBNZKDPFJPNCVKSLHFVNOSDPTABMRJBTAUTAUJLKSGKIHMXQLXWZWCNDIYRHKVEDYZXPIEBBWC");
    tmp_msg_0.feature_type = 174U;
    tmp_msg_0.rgb_red = 133U;
    tmp_msg_0.rgb_green = 110U;
    tmp_msg_0.rgb_blue = 244U;
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
    msg.setTimeStamp(0.843175762498);
    msg.setSource(11821U);
    msg.setSourceEntity(53U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(59U);
    msg.id.assign("HPEWSMTDKVRPYJBRHOHEODDJIAKWZLZNJMKHYVGRSIWULK");
    msg.feature_type = 63U;
    msg.rgb_red = 16U;
    msg.rgb_green = 21U;
    msg.rgb_blue = 155U;

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
    msg.setTimeStamp(0.575934329496);
    msg.setSource(45333U);
    msg.setSourceEntity(253U);
    msg.setDestination(23136U);
    msg.setDestinationEntity(149U);
    msg.id.assign("MZUOZDYTGYPQNGOBMOWIIWXFDQKLIJDZSRXEUXHGHIMMCBWRTPCJSKGVCVDYDYAZSMBYEUFTANLZHDKMJUNQLLVIJFGJWNWRDPENRYVJNETQDXBHGZJOEUPYBFDBLQJPTU");
    msg.feature_type = 134U;
    msg.rgb_red = 57U;
    msg.rgb_green = 84U;
    msg.rgb_blue = 70U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.934602152911;
    tmp_msg_0.lon = 0.549052549429;
    tmp_msg_0.alt = 0.265175031867;
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
    msg.setTimeStamp(0.0261681637004);
    msg.setSource(34427U);
    msg.setSourceEntity(163U);
    msg.setDestination(11395U);
    msg.setDestinationEntity(100U);
    msg.id.assign("LXMRCSRCPOWQUIWZMNNDGPVYKGGNEHTLAKUHOEQHZVYHUZYZJVFXISLDQOFBFPHDFAEJNJRPSCOBKDPKRBOSGXYCULQWVAKNQNPPBXODEFJNRTLJCRTUZASGQDXXVINZBHYCGCRHKEGTFUAORPFRGIWFEMBMXNJLZVDEVTQROBYBDIJIEYLEOPI");
    msg.feature_type = 253U;
    msg.rgb_red = 161U;
    msg.rgb_green = 93U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.532288948357;
    tmp_msg_0.lon = 0.219660174591;
    tmp_msg_0.alt = 0.000227861633932;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.330502029139);
    msg.setSource(23032U);
    msg.setSourceEntity(103U);
    msg.setDestination(40613U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.328104366208;
    msg.lon = 0.561744978082;
    msg.alt = 0.624385907027;

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
    msg.setTimeStamp(0.747746637999);
    msg.setSource(30301U);
    msg.setSourceEntity(115U);
    msg.setDestination(59337U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.69052743619;
    msg.lon = 0.373719858423;
    msg.alt = 0.208958459401;

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
    msg.setTimeStamp(0.543406418006);
    msg.setSource(14983U);
    msg.setSourceEntity(254U);
    msg.setDestination(790U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.406716488308;
    msg.lon = 0.616856798594;
    msg.alt = 0.704817025269;

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
    msg.setTimeStamp(0.910046723352);
    msg.setSource(27709U);
    msg.setSourceEntity(190U);
    msg.setDestination(65249U);
    msg.setDestinationEntity(185U);
    msg.type = 30U;
    msg.id.assign("UBJUCBRJNLCTGUUBXLIDBNWWSOKKSBTMHCIEPEFSPKKZDURQPFTRRLMCYTHQSLDPBPHYJCUBVTWGNHNEEQVMFBCTVOEMVKJJGSGWHOPVNIZSLCZSXJITRIQOYMVNLZZYMKMCPCLAZMUUGZAEDDW");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.474854256257;
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
    msg.setTimeStamp(0.862890202686);
    msg.setSource(37723U);
    msg.setSourceEntity(63U);
    msg.setDestination(63917U);
    msg.setDestinationEntity(53U);
    msg.type = 178U;
    msg.id.assign("SEPVZUQJMSMGVEEVFGXLHSHHCSQEQZRZETCWARBYALKRWBVOKJGGYFJOKVEQHNXGFGLWZUEDXLQAPAJFTRAHQLCCCIBVOWKNFSEWKNMBDOIOUVPNMERQZVJXTUYXYTCFONZZUY");
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.420471255484;
    tmp_msg_0.reason = 51U;
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
    msg.setTimeStamp(0.377101706171);
    msg.setSource(38419U);
    msg.setSourceEntity(238U);
    msg.setDestination(59255U);
    msg.setDestinationEntity(8U);
    msg.type = 33U;
    msg.id.assign("BRGDUHQMEFWJMLZUXJQLIDRQLGPFWRDKPCTXWMASTBJERRYAVAMMRVFOLKJBPVCISJCBUEAHOXZYNIBSAXJHPICSDNAQZHXEUQUGVISZWPNCWQVXYKIABGNKMHYZLUBWKHQEHWXZNFANGFUORSXCAFLIGIMVPOIZUZUZAWEIOEOUJKVOXTGKLTHLKDNTN");
    IMC::AcousticMessage tmp_msg_0;
    IMC::FormCtrlParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 89U;
    tmp_tmp_msg_0_0.longain = 0.441371418203;
    tmp_tmp_msg_0_0.latgain = 0.0106090766303;
    tmp_tmp_msg_0_0.bondthick = 1626133220U;
    tmp_tmp_msg_0_0.leadgain = 0.722141421792;
    tmp_tmp_msg_0_0.deconflgain = 0.958387071566;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.58928626646);
    msg.setSource(59154U);
    msg.setSourceEntity(53U);
    msg.setDestination(16623U);
    msg.setDestinationEntity(60U);
    msg.localname.assign("AIRKVJXDUCSAFONVIZTFTDIEQFNIUOKYUDNCRPMJYATSPXRBYZGXUIGTNWCGJBVKLTDYVFJHDSFCSECLVLWYFFEDFZUHMRWFILPHHRZWOBVYMGQBPXQIMVGLPAJYMCWAKUTASBTPKRKUQXNVLZKKDM");

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
    msg.setTimeStamp(0.730667079083);
    msg.setSource(62184U);
    msg.setSourceEntity(245U);
    msg.setDestination(45259U);
    msg.setDestinationEntity(87U);
    msg.localname.assign("THBCOQSSESSJYXEJUOPMOFYUNOCEUMGNKDVFFPNAZGOXTSJRKXBIDLZYGUBFEDXPYNDRLKPVRFBEGWCUKKIHHNTJGHHWBADQYRYVZMTIQYXXEDVRGLTCUIWRQPFBHGVXMZPRNCRODIIWJBHLLZUGWBPZZGXHIWYLPSJACDDMCHOCIOUT");

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
    msg.setTimeStamp(0.147883718742);
    msg.setSource(45607U);
    msg.setSourceEntity(142U);
    msg.setDestination(6743U);
    msg.setDestinationEntity(134U);
    msg.localname.assign("WUFLYNNUYEEFEDBVIXM");

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
    msg.setTimeStamp(0.977643472571);
    msg.setSource(47236U);
    msg.setSourceEntity(180U);
    msg.setDestination(771U);
    msg.setDestinationEntity(27U);
    msg.timeline.assign("XKFOHXAONRPOZNEXTHRGTRSGDQCLPWACQMIKAFXROVEZGIRTLCVNWKJJDHAIDPYQILAGNQWJEDHKVZKEBEHFFSUMBBQSAAJNKKWTUEGNUPMVTVTSOOYCLZYUJREBTRJQOOYWPYPNDUCBUQOLXFAGCZMDPSNXBXEBUCEJNQMMUSKHYZYKVBWECBVGIFSZIAUFLORCZSTYJPMNFQLGVPXMGTCDBVZTYPHXLHFIKGLHLQDMMWSJIH");
    msg.predicate.assign("BTTSKRSLMEZICOYVMQDQWVHGHZCYIRGKAAKSUFMMQOLBZKJCIAJHANCOPUWPYYGSNZPXWYQXYPSNBYLOVDEOROVMFWHANKBZZGPMXWQFIBESPYNSEPIOULHTTWVFNJRWBJZJQXQRGDFYIJZEGGRXTGUCRRXSRKICCCNBUMMQDAHIHUGXFQKJZUACUAJTVSKIRELCHFHTXNDDHOAKUVPEBXVMAFZWKVGDWQMYOBELDUTDPPXJLFOBL");
    msg.attributes.assign("MWHBNSYYMIMUSWTOJVIRVJTFFEBVAUXLZEZCXLZOIGHFBDPZTABGBFTTGYARUNGOGYFMQAZAVQAWKFDWFOAQYUWLKNLIEYYKXXEJCVQKTRGBIJHEPSKTNHVUXHKGLREFBPLQHPBFENRADJISSQDHNCWJDIZHDRRIGWHOLROOZPRTUJMLIXOYUJZRWVPDGSSQGV");

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
    msg.setTimeStamp(0.166352422575);
    msg.setSource(50863U);
    msg.setSourceEntity(32U);
    msg.setDestination(31943U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("MUDWYWECHBVLDOWRDJBFXCDOZFFSHRZGDXWKOANVXT");
    msg.predicate.assign("AMRSLPVTXUYBYYIJGMVQQZVQODPECPJEXKDZDMTDCZXZUXPIFBAJEBPCQANOOQFUGIJBJRHXJUVQZYSNEGYYYUSKNOIFIRJNGANBLUCTZSTWVFKKFOKDHWOSROEKZOPNVRRIIXCMPRQLGTCUJUGDCHERVLWKZWXNDYYFWXBJAMHWIZBAWRAIHZUDMPSMCMMEKTGXRBESHHFNPTTWWUG");
    msg.attributes.assign("EJAAISGPFIXIRDGWABBJWDOFFARZEJUN");

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
    msg.setTimeStamp(0.410209373665);
    msg.setSource(47753U);
    msg.setSourceEntity(13U);
    msg.setDestination(17464U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("FRKEUPKEFCMSDYKYBXAECDVJAKOLEJUSQDTDWCINHIFLGXMDMCQALSZTXOQQKBABBGXXAIBQDLGHOCWRXZGYCIYULNUZEVRRFBM");
    msg.predicate.assign("EUZKVANTPVGIOBMXULOIBGHJPZPCRDQQDXXANFLCIRNFBIMWVFVUETGMCEJZYDNDSCIRLYYTYKYYDMKHRZZTJGKSJHECRFXKJUGIEDXOQRDQJILBEHKXOMQXQKKBVWMSO");
    msg.attributes.assign("KASSDNTPRJTYOHRCCBETLSALKHRZQBPWXBJDOHWNZRAAVFXXXOVPVEVKQFUBRZPAISVWDDNEUUOWIMJQPQMZEIARJWYNOQPWVGAZUCYJUTLUKYUQYJMYFPJMIFHXNIZQXB");

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
    msg.setTimeStamp(0.330388219486);
    msg.setSource(22764U);
    msg.setSourceEntity(122U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(23U);
    msg.command = 209U;
    msg.goal_id.assign("RVQMVHKRPMFYTVONEFKJICOSJEKQBS");
    msg.goal_xml.assign("OEMFRHTUEFUULAPIHIQGZGDPYDPCQCYH");

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
    msg.setTimeStamp(0.282148963986);
    msg.setSource(15073U);
    msg.setSourceEntity(76U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(115U);
    msg.command = 163U;
    msg.goal_id.assign("SSLOSJJCYWUYCXXSHFEABJMGYTDRBGBZIHQYNRXCJONOJDIHOQABIDMVSNFJPFOGWEVZEWFTZWRZPKZLBXOTPCISWYTTKPPVSVHFWVQRWKRKOITPXZKRNMBFBDDHANTD");
    msg.goal_xml.assign("BYNRWLYQUWTSSNYCZVHPTJLIACEKKHLNXPOOLBMOJECWLJAEMETPFYGVEVYIRNMWCGHIAZRDZMTUPJMFZTHKBXXVIBASXIRWTCPHCLNJVUJRNRHIETZVEOWLOTDWFPZXISNQGYNGKGWUCVYTBKDQDRBPVPFJSFALUEBSUXRS");

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
    msg.setTimeStamp(0.340519513822);
    msg.setSource(46770U);
    msg.setSourceEntity(161U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(104U);
    msg.command = 98U;
    msg.goal_id.assign("PWUTTEVSQJLSZIAFKXYTIFDLDASPOBWDNHNYFRVGPNNOAMPYGJHNDMGNJOIBMOBAPUTPZEAEIWLZQKCUYDKLTYYGMQSFOZRNRHOMXDQYGFWCRSHPVFEIZFSBOEKEXTPZCYQTLGSHEKGCORWLHTERUJNJWRVAVVMQAKWIBVRSBXQRWFZXSCCOVMQDUALHTIXJCPRQS");
    msg.goal_xml.assign("FLQQEJNFZKWUOBZPPJXXTNGUTWTGBNWOQ");

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
    msg.setTimeStamp(0.174058796466);
    msg.setSource(27425U);
    msg.setSourceEntity(70U);
    msg.setDestination(55401U);
    msg.setDestinationEntity(218U);
    msg.op = 210U;
    msg.goal_id.assign("VTOKGUPWZERHTJRJIOGUPIKMGQNLMXSZWEFHLFNQKPRPOVVSSZAYDCSOVOYUGAVWJYBTEFLJTBIAJRPURCFOOQIAXJZXRXKFDWAILTGSIBNKBMEYUTMGBHCZGWPFVCY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MRCYLUUHRKUOEMZKBSBULCPHVJVUAIHNXQMNNCATXIMKZGYAANURGOTDWIWBLZGDYCVIPIQHKZJRDWSPTQYVBRWMHFGFBXWYNJQOURIXDOPLJBMFQNQLEIKMZCRMXZJFXVEBBLRJYODWTIKFPBRTXEPCLWJSNXASVKEFUVHKIDBRGLGGETVUGACGVETXZCCZKHFSNIYPPWPDSHFMOAAUODJLNJHFQQTQDDSPSNWOSCQLAYJ");
    tmp_msg_0.predicate.assign("CAAUCNDWMOKSJADMEYGRBVJHDSJQKLXQZFGAIEZUHADUNBEPRVNVQDTJTCBFTAPYICSLIWBBPWBNJLZSOVTXYYCWXSQXOSHSVVAVUJCUXBEBIRDQKEMGSWRHXJYFRYZQAHQLGIYLXTKWVCNCKAKFUPDEHRNHOZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BZEOROZYYIVOOWSSULAUECHQAIKOEOTBMMZMUCQOHTXWPXRVRZZETTSJDTQXKLNEKPQUNLJOGPYFAFUHVWYFWBZFQTQKBDJLSMKYXBLMZFBGLJQKXXRVYRWOBIPHICPEGVHBWJUWZAIDGDGFQCPSUGSRN");
    tmp_tmp_msg_0_0.attr_type = 205U;
    tmp_tmp_msg_0_0.min.assign("BEGXGLJVMYHSUBSFU");
    tmp_tmp_msg_0_0.max.assign("TKDMAEWBCHVNUVGIJOKYPTCRDCHZMIJJQFEVCIXBOZOFEMRUAKDQLFFIZQFCSHMXVQHLRYNTJLOGOUZWUDACBMBTLPOCXTMWQHHRPJYGYBXDJGKPOGGIXOSBRGMNSUWQBJUUBMGAULLQALZASNYTUWPVGAKCNDEVSKHNQHNRJABNQHYLLFSOAXKTEXTNKTWDWGIWYPDZFBRCSHLVPPJEIVFZEZZMJIXWISRKAEVKYQSRPRXY");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.490762993981);
    msg.setSource(14316U);
    msg.setSourceEntity(252U);
    msg.setDestination(26480U);
    msg.setDestinationEntity(26U);
    msg.op = 146U;
    msg.goal_id.assign("YMPZRQTIVLVXXHYBXIWEFYEVKRIPWOQIXYLNWCBKSOZQHYNOTFJGHOTRUWZJGGSSHUQKIKTUCTDHZMEGJEZRWPWQYJFDRMCMVFXMAIMVFALVPKPOHABLFTJDPXEUYLPERQBEAROHBPBSFHKXTOEVVDKTVSNYIHSFLCCWJONNUHZTPMLZBZBFNCGLOESUOGMCZILWPC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YEGNDHFHOPUODZNLEMOLHJSYKQXWNRQIZXXBJMRFAVDHNBSATYUOQASPJAITXLE");
    tmp_msg_0.predicate.assign("EBTWJZWJQMPXGDVIHHCUGJPKKTBJNDAQDVKITYLXEYSYYTPIZGJHBWWHDSCMDLXUJOQGQRFZCPFELXRRSODCSLBSINUPVBFRSPBFBRYIIFZZGLHBPOOYANQQERCSTVLLZOYERXQOHVNGNXEKNXROWDIMEAKNGGMUUBIVHTYCFCUIDETAQOTOPVKKDAZLHUGANJMUFWHMWNKKLMXTXNMGJ");
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
    msg.setTimeStamp(0.0686588431049);
    msg.setSource(17203U);
    msg.setSourceEntity(43U);
    msg.setDestination(55153U);
    msg.setDestinationEntity(110U);
    msg.op = 229U;
    msg.goal_id.assign("YYYVHVHOZPNXXTKUASJDBSHPBNQJWSUCMKGJZKNOAHPKOLVLSDGNKFCBUFGXVZRMINKIURGNVQTIMENRRVJJKCXUDURDNAFMLZDLVEBWOWZWZLHXUDRPPLIIWFSBLOVTBXTQSXRGPXHTGJGIWZJEHMKFDAOQCJMPCOEEVBCYBYTITLZJBEAYUHRUKSQACX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BPPXLFXCIFMKBWRHMRKRHZVXYVSQKIBMMAOBNNQVLVTIDYHHZWDOAPEJBUEWQAGMOCKJVEKHOOPILLJVTUATYNXQZDSTFAGZYHBCUZDUQKGESRYTEPFQCFDEWAGGUETWODMQESJSIRFMGMCAOUXDMVSFALPKYSC");
    tmp_msg_0.predicate.assign("TITOLSKDFJMGPNEXHFBHKAVUBIDVCVRJNXIULQEMYNMLTREAWKLVGGQEPFCSPOGZBECJDWSWTH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OTUQZFRIKQTPSFPDMBWWYDXDXTIDWBGPVQYQWVZUYICLKGCIELOAXYWRANKPQMITAHNXACETVCASASUIWMIJKPFVNMHYTRVCKTKYHOPZYBVBOOLTHLZHMNMNERRXGGVTSCCDQJHHUFZFFKGGUSBLOVSDALKSYTEDJYAOJGCUECEJQXZMGFIQZROWRBSWZFIMJHODPAWOULHDLFEPQKBM");
    tmp_tmp_msg_0_0.attr_type = 5U;
    tmp_tmp_msg_0_0.min.assign("GHXENBCQPNDZFWJYYRRDVMZWUDVJHFZABYKUAEMISHUBU");
    tmp_tmp_msg_0_0.max.assign("WXPAHCCKAWQBBILJSIVJOLEMNIHZGOMUJYSOCHGKFVZCNSUXDHDDOZBNKSMOECGRLSVFIJEILZPBGZRCFJQKGTUZEZRQYGUXZHNYZJCEVAKQVUEFMNRKXRF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.529315808286);
    msg.setSource(2792U);
    msg.setSourceEntity(178U);
    msg.setDestination(15731U);
    msg.setDestinationEntity(178U);
    msg.name.assign("JAFMVFZJPSCSUJIACAJJEYHHWPOTLWJXTBZQUNGETIHIQQHFPGZKIELKLBFZTCRSOIUAMAUTOYPOBLUBLUTNDUKYXXWREVOKMTPNGGASPMRJTOLFBCSRVIIZYHJHOPGSWQDYSFRCKRRAKWTVABEGMWDCYEPBXIDTJMXVBSZNELUNFNVLLFCHDRODZWNDWIGBBVRHCQK");
    msg.attr_type = 247U;
    msg.min.assign("EUWOKLDFANWPFVACBUCYLVQQJTMYMMTAXKHEOGTYTXQPRGLDOLARZSYIZJSCCPDZBUUHYPHFJLJOWIBEO");
    msg.max.assign("VPDXIHCJOZZVDLFLPVRTIBMECJHOLZTUPRJOZNQDLWAPARPPVEMNFQQLVQZCOINFFYSKHHABIUKHMKUPCWGKMEWISYTWJBGYDDCIVEUUXFNAHQPNIRBVCOWKGSSTAVNHTJFBEULOZJMSCI");

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
    msg.setTimeStamp(0.5674781207);
    msg.setSource(21784U);
    msg.setSourceEntity(18U);
    msg.setDestination(28265U);
    msg.setDestinationEntity(139U);
    msg.name.assign("DNEGWLVSBFJOLJVHIG");
    msg.attr_type = 60U;
    msg.min.assign("NFHKGRGOWYNGIMUGRJBKWTYRNOIEUZOFDFHCCBLSRALNUHEBCSMXIDWIZTWSAOCYBXPHTAMKOVMZNMSRC");
    msg.max.assign("FXJQUGHOSNXGCSUNBQHYSEFBYZQSTILPZM");

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
    msg.setTimeStamp(0.0870938835826);
    msg.setSource(42638U);
    msg.setSourceEntity(92U);
    msg.setDestination(12592U);
    msg.setDestinationEntity(1U);
    msg.name.assign("MODWDGYDPETLQRZYXWVFMTIBVDPBNDHFQRBWPMHXGWGEPFACLBSZBGSDZVJFNNNWRWGNOBQKNROIP");
    msg.attr_type = 174U;
    msg.min.assign("VHAIZVMGKYRBJWFWUSJLVRUJKSRDLBRCRPGHZVTCJMITSNIASJGX");
    msg.max.assign("GODFYUPUBBJLVZSKLJXALPZQAPTBHVGFHICZTBPVJJCYIUEDQIPHUGLSOGTKDRGTVFOAWMRELFJDXQORYXNHTISLCCCNPXVARSTWFKDKOWNUBPZMJW");

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
    msg.setTimeStamp(0.780143940648);
    msg.setSource(57785U);
    msg.setSourceEntity(108U);
    msg.setDestination(5346U);
    msg.setDestinationEntity(56U);
    msg.timeline.assign("NYDPEKIAHFSGDKACJMJQFBQXITPGCBXJVEWKPLXPLFSZEHAXQIYEIBOJSLBULPTQOUUFGKIKDOLEGZRVTSUPXKUZSWYNULHPSMHXRMDVOGBRTY");
    msg.predicate.assign("DLUFKNAIOWFJPRRTDRWOISOHGLKJYNZWGITEIBJNLVAXBRGLRYIJBVYRKPGTXZEKMLCUQUQPGZIFWZYIERDGVWHCYFYNUUMSMHMRWWZMSQZPBLABVOLAXQOIJXPBDSKVTHQTCBHNFEFUPEAJPVNVRNHQWCPAEZSHEQKYWSKTVSCAKXSQT");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BXZXKVTVQWHJWUJSJMHRPZGDZMKHAMEMQJDASHBSFSMOEBTVYAGYZVYWJIVTH");
    tmp_msg_0.attr_type = 80U;
    tmp_msg_0.min.assign("VVQIFALOJTOPCQJXIDCMKEDTXJZJIRCRLGHNJGWFGKNQECVGDZLNKQJXLMHNAXJWEGZQLVTEKZUIRFZCATPDIBYQOSBWRDFVIVFSTDAOUOELJJHFBCUYWATXNRHUBBSEUAUWKSTHHRKTGXQDGYSPMXCRQKSMNOCZOALGPMAIELTUBBSGPREIVRFMYWDBKUOFZGWFPQWNMVWLCCLVPYFDAHKXYXRHIDBOSMZKYJOUEAQWUEMIP");
    tmp_msg_0.max.assign("LTSSSSZCKOJWGTRKINHQEDDHQNPPKYEVFUUEZQYSGJPTKJGVRFWNCMGNCFENFJEAHRMZZIRCLVFAMTYFYXGIBZDPFAJEOIPMHNXRFUCWOJQOMDJDIOAQIWWEHTQDAXBXSUXXQBXUYWHSZXJCGGDWNSRMZBQVO");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.741896322545);
    msg.setSource(43696U);
    msg.setSourceEntity(160U);
    msg.setDestination(35380U);
    msg.setDestinationEntity(66U);
    msg.timeline.assign("TYXNDZNCRUWSMOCPEJYOQWMPEDIQCNJRMVWSLKQPWBXTGGIDRAWXOCCVPYHQHRDKAUISGIQQ");
    msg.predicate.assign("SVIWVZEPPNGUFAPXUJSQODYLLIIJRDCEYQNLZINQGNVRSWEOAWQSFCHEXGBZNAYSTUFIUWYYGLTTXCPXCMCBWESFGCEXVLTXWKMRHKQLVSBMNEHEAJPFAQHTDHZZDCSFWDTNECBDHOGCJONVIZHQHZJFFJMMTBKABLGRXCYIYOZBOLZG");

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
    msg.setTimeStamp(0.655055127647);
    msg.setSource(18332U);
    msg.setSourceEntity(32U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(200U);
    msg.timeline.assign("CDPSCOEVHVOXSNMWMYJ");
    msg.predicate.assign("TPHJDYNQGWXKSCPTZKNJSZISDIADJDJTBUUSULPWIRGZGTUNTODFGNNPIMFXPYXJRWLJSXBLKGUOPOOLUTYDCFAENYRVXMCCDHEKZKEDJUNVEWICLMPIXXZRGRYAFVXHYIEYEXKQRAMFOKCOQMUBBTGBSGLZWYFPVZMEKQBVSUFWZKWWIARMIZBHZHVHYLXVQOTQCMHLNAVBTQDYWLSOH");

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
    msg.setTimeStamp(0.821197136639);
    msg.setSource(28981U);
    msg.setSourceEntity(235U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(220U);
    msg.reactor.assign("IYAXFROZSELOPLNUEETRJVNKYBCMLSFVAVHYIGXTFVOOPHAMYNNXCAHSHYLOUJJJLDNLKCXZZBTCARFXDTDQNLASIWXFUZMFSBJDUDUGGSXOLKMIIDRFAEWEBFVVXVN");

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
    msg.setTimeStamp(0.491183213078);
    msg.setSource(12683U);
    msg.setSourceEntity(89U);
    msg.setDestination(45325U);
    msg.setDestinationEntity(51U);
    msg.reactor.assign("ULFUHMTIYNNJMUJBDXZRTZWFBZTECWGCGKWPSKDJRDCORBGBDFJXWBNVXHRMKHZUEIVUUPINSYGZXBWLGHOQEUTLRUMDNQAPEGAEYKGMXJXKQBXHSWJZEQJARBMNQLTCJXAOATOZHEPVGRSKTPTFSDPMVCWJPKIYCIUVCXJZWNALFFNFLLZYBHSLRIOMZCIMDLDSQITWYGQKSVVYYSVNE");

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
    msg.setTimeStamp(0.845419967609);
    msg.setSource(31998U);
    msg.setSourceEntity(0U);
    msg.setDestination(22231U);
    msg.setDestinationEntity(184U);
    msg.reactor.assign("AWIEVFYBPRLZIKRXCJHBSDZCEZFHLOWDNNUTJMTFAGCQEGYPVPEHXKZGSYMLRPURWBGRQNEIIMDNTAXGYQUISVYVBYDZPEUCGKBVTVTOJFDIIDFNWANNVX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FBMDVEOVMWZNFTWNDIWCQYLNMBZXRZFDLZNVBMQUQELXJGWIXYXYOSBLURFJRIAYJKZGHHKTSTPTOKBCNNFIEEVEIACIAVKRZOWBJSWXETCPHXHDLKGRAJSUWLKOJSPONQPRLBFVMQLVDHSVNQTPUKCAQMWUESATFNPZMVTFSOYLGFRHOQWHXYDQIBEHCYJXOGUNKKREVIGICJYLMWKCEBAPYSXCYQMHZJGPUUDDFGGDIJS");
    tmp_msg_0.predicate.assign("EVVXAQZHTYKCRECODQXOVSAFMBNWIWWFIKXAUGBOGVHIPCYKKIEYMPFGVSSKLCZGZRHDLJPNBUEJKKOMCWAZTTNFTHYAXPDNCSWXYTIPDINFKDFTTRRYEJQLUUOAJSLXMPTHZONVGQBPHEELWZQBZQVSJRXSTUYQCMDAQULODGDMMJXSRACZJYHMVMXOEPKLOJRGBHLZVHKCIFGBNLJDBWPGQBBQNAI");
    msg.tokens.push_back(tmp_msg_0);

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
    IMC::Event msg;
    msg.setTimeStamp(0.37977051735);
    msg.setSource(46292U);
    msg.setSourceEntity(154U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(118U);
    msg.topic.assign("EBVREGMOKZOVNVTQYNFXRSZBGPZLFGJSRSHFXJCSOBNOCPUDBDEBHHIFKPMZGGCKYUZDLAJDQFWSJRTGSMAFPOFCPBCHNJHXIBPUURTAAYZLVTVYLSCCRJVMBEQWDODYQRERQVTAKOIYAAVGWIFAWXUIQWJURWTHLXGDWIOMLSCHMWPNJGUXQYMPZEQBTFIKUWTIMXLEEQNSTMPNUN");
    msg.data.assign("JHRIEMZJUJAHEIJGKLBQZKPSQITBBNCZCMEMNVDWFVUKNTJPITJTAQNEWKSCWYWYDURXASRPIOJUOKPZWXOTTFHHDAFVOGAFVFRFMOGQDBZXOGJZYRDHUXXLGAHLVUAJFZQISDGVHDYOCREMBSCLHCNVYYVKXGLQNDBUOFDROGPXLVTHYICPNSUNCLTTBRNXIPKWEWOZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.303945408391);
    msg.setSource(40046U);
    msg.setSourceEntity(84U);
    msg.setDestination(59654U);
    msg.setDestinationEntity(209U);
    msg.topic.assign("FYOQIYJSKSJGBKJHTLIXLZOWMGEGLRLNQFVPPJYMQMNHWSHOTJ");
    msg.data.assign("VFZOPXAEUEGSXMISMBMMOYGEYGDLYFCTMWHEFEAAKGSXBCZWYBCKHLDPODYEKRAVAYIJSJNZPQFDBQPTNSGLXKQLNPJQTTIHZWISNHCBLFVOVUPCTBICHTPJTJDMCFXULAOZOXRGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.698814709967);
    msg.setSource(7761U);
    msg.setSourceEntity(121U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(134U);
    msg.topic.assign("KHCEJMIFJJSOCSEJPBGEZWYFFSXWFRSNMRUCUYWUWGBKPVQTWDRSFYMICKUELJGNXAXIDJZKOVLLMYFRVKGVTUQX");
    msg.data.assign("DWZNBBUHHRPSCVJFVJWOONKHGFBEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
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
    msg.setTimeStamp(0.179226125699);
    msg.setSource(19878U);
    msg.setSourceEntity(33U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(227U);
    msg.frameid = 72U;
    const char tmp_msg_0[] = {-75, -86, 116, 74, 116, 98, 83, -1, 5, 103, 5, -41, -71, 48, -66, -7, -66, 82, 124, 61, -19, -1, 77, 47, -52, 111, 79, -22, 11, -37, 119, 119, 87, -41, -123, -109, 98, -117, 51, 76, -26, -33, -72, 96, 18, -44, 41, 26, 33, -22, -30, -105, 26, -47, -4, -93, 30, -13, -42, 20, 91, -70, -54, -86, -61, -45, 71, 68, 64, 95, 109, 120, -80, -125, 49, 67, 56, -71, -17, -64, -77, -39, -54, 94, -98, -19, 47, 77, 62, -8, 70, 45, -111, -50, 20, 114, 100, 110, -22, 22, -86, 2, -62, 31, -57, 73, -12, 73, -84, -120, 40, 1, 15, 90, 16, 18, -121, -5, 102, -100, 72, 84, 74, -69, 85, 101, -128, 106, -92, -107, 65, -42, -72, 54, -97, -39, 78, -69, -10, 47, 82, -93, -47, -109, 97, -68, -99, -128, 126, 44, -89, 80, -51, 9, 74, 112, 11, -52, 48, -39, 50, -126, 17, -25, -69, -19, -42, -91, -80, 52, 104, 58, -91, 26, 13, 80, -85, -86, 110, 103, -101, -109, 91, -109, 44, -121, -91, 120, 41, -9, 87, 112, -120, -21, -5, -88, -21, -125, 125, 95, -103, 4, -92, -94, -104, -49, -101, 22, 94, 54, -2, -60, -98, -24, 84, -84, -10, -99, 19, 113, -2, -48, -51, -34, -43, 86, 26, -62, -17, -106, -2, -101, 90, -79, 0, 61, -113, -18, -128, 5, -91, 69, 120, -111, -7, 112, 35, -11, -22, -104, 125, 107, -121, 62};
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
    msg.setTimeStamp(0.457346907125);
    msg.setSource(34490U);
    msg.setSourceEntity(25U);
    msg.setDestination(54739U);
    msg.setDestinationEntity(10U);
    msg.frameid = 155U;
    const char tmp_msg_0[] = {-82, -9, -105, -50, -52, -71, -7, -91, 120, -94, 37, 3, -24, -95, 103, 85, -32, -107, -104, 8, 71, 15, 26, 32, -126, 96, -77, -7, -59, -78, -64, 120, 97, 82, -39, -127, -59, -69, 103, -108, 37, -12, 111, 14, 46, -22, -115, 35, 113, 85, 124, -72, -10, 104, -103, 96, 99, -68, 22, 50, -51, 50, 41, -126, -85, -113, 109, -114, -6, -27, 96, 29, -20, 86, 113, -3, -32, -116, 5, 110, 24, -109, -78, 9, 73, -94, 33, -8, 126, 125, 34, 16, -56, 64, -89, 102, -17, -84, -21, -99, 88, 80, 62, 55, -128, 78, 87, -41, 55, -123, 88, -126, 30, -107, 49, 23, -53, 72, 84, -77, 98, -36, 80, -112, 122, -21};
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
    msg.setTimeStamp(0.712651692711);
    msg.setSource(45358U);
    msg.setSourceEntity(86U);
    msg.setDestination(44188U);
    msg.setDestinationEntity(215U);
    msg.frameid = 146U;
    const char tmp_msg_0[] = {54, 105, 36, 76, -93, 65, -19, -23, -100, -40, 75, 58, -3, 35, -9, -15, -20, -58, -21, 44, 95, 91, 7, 28, -42, 33, 24, -2, -94, -51, -33, -30, 6, -80, 30, 13, -8, -126, 1, -87, 92, 112, 97, 37, 77, 95, -110, 76, 82, 28, 26, 123, -8, 11, 58, 46, -98, 84, -3, 47, 63, 70, -125, 20, 19, 25, 40, 82, 24, 105};
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
    msg.setTimeStamp(0.263372592257);
    msg.setSource(6390U);
    msg.setSourceEntity(189U);
    msg.setDestination(50056U);
    msg.setDestinationEntity(12U);
    msg.fps = 74U;
    msg.quality = 108U;
    msg.reps = 176U;
    msg.tsize = 53U;

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
    msg.setTimeStamp(0.68639522371);
    msg.setSource(63848U);
    msg.setSourceEntity(116U);
    msg.setDestination(44753U);
    msg.setDestinationEntity(21U);
    msg.fps = 238U;
    msg.quality = 50U;
    msg.reps = 211U;
    msg.tsize = 6U;

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
    msg.setTimeStamp(0.0991643646619);
    msg.setSource(1787U);
    msg.setSourceEntity(218U);
    msg.setDestination(19987U);
    msg.setDestinationEntity(122U);
    msg.fps = 8U;
    msg.quality = 178U;
    msg.reps = 133U;
    msg.tsize = 210U;

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
    IMC::HyperSpecData msg;
    msg.setTimeStamp(0.214960048512);
    msg.setSource(36380U);
    msg.setSourceEntity(18U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(252U);
    msg.wavelen = 0.498967476653;
    msg.gain = 0.755867629781;
    const char tmp_msg_0[] = {12, 111, -79, 1, 57, -28, 78, -121, -122, 87, -83, 78, -92, 5, -26, -76, 99, -112, 64, -54, 5, -75, -110, 20, 25, 101, -30, -107, 18, -101, 116, -95, -125, -59, -101, 99, 55, -22, -12, -44, 14, 57, 113, -71, -66, 83, -124, -31, 22, 43, -113, 51, -89, -21, 126, -48, 107, 69, 2, -126, -40, -97, -109, 112, -39, 47, 29, 64, 82, 13, 33, -122, -72, -107, 55, 82, 112, -39, 11, -52, 107, 123, 118, -95, -29, 23, 41, 93, -76, 33, 75, -100, 33, -5, -84, 122, 56, 83, 76, 33, 97, -66, 7, -49, 64, 79, 36, -105, 18, 99, -69, 120, 109, -117, 76, 30, 83, -80, -29, 81, 0, 36, -90, -94, -117, -113, 18, -28, -65, -7, 50, -4, -79, 102, -70, 118, 99, 111, 2, 100, 123, -75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSpecData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSpecData msg;
    msg.setTimeStamp(0.93327403634);
    msg.setSource(44942U);
    msg.setSourceEntity(81U);
    msg.setDestination(37923U);
    msg.setDestinationEntity(65U);
    msg.wavelen = 0.126051173294;
    msg.gain = 0.185295982318;
    const char tmp_msg_0[] = {-108, 11, 119, -79, -92, 91, -102, 77, -3, -125, -31, -90, -22, 27, -16, 18, 48, 101, -93, -55, 34, -65, 112, 112, 22, -109, 35, -97, -7, -85, 70, 57, 78, 58, -102, 6, -3, -30, 44, 109, 49, -111, 8, -11, 126, 22, -94, 67, -80, 92, -98, 126, 120, 104, -45, -3, -21, -105, -56, 27, -31, -19, 33, -37, 14, 49, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSpecData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSpecData msg;
    msg.setTimeStamp(0.505250014935);
    msg.setSource(2130U);
    msg.setSourceEntity(252U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(193U);
    msg.wavelen = 0.83392372422;
    msg.gain = 0.438866652388;
    const char tmp_msg_0[] = {-66, 87, -103, -102, -18, 56, -58, -39, 124, -103, 55, 43, -80, -96, -26, -3, -95, 108, -111, -80, -123, -59, -36, -113, -39, -95, 69, 116, -22, 34, -25, 80, -29, -40, -10, 38, 7, -51, -13, -70, -51, -95, -25, -109, 97, 125, -55, 66, -87, -76, 30, 1, 48, -7, 17, -12, -62, -27, -37, -5, -127};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSpecData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapshot msg;
    msg.setTimeStamp(0.587916783886);
    msg.setSource(20186U);
    msg.setSourceEntity(247U);
    msg.setDestination(42552U);
    msg.setDestinationEntity(51U);
    IMC::HyperSpecData tmp_msg_0;
    tmp_msg_0.wavelen = 0.610152425196;
    tmp_msg_0.gain = 0.47339119189;
    const char tmp_tmp_msg_0_0[] = {-115, 32, 116, -52, 121, -61, 106, -58, 88, -109, -112, -128, -76, 56, -72, 74, -106, 79, 73, 74, -17, -60, 29, -121, -47, 115, -89, 50, 10, 122, 102, -95, -116, -20, 72, -70, -117, -84, 104, 37, 20, 17, 93, -101, 120, -8, -117, 28, 61, 1, 84, 8, -103, 123, -27, -103, 79, -72, 64, 42, -88, 72, -55, 63, 81, -36, -21, 22, 94, 91, -3, 50, 72, 0, 69, 111, -90, -39, 86, 93, -87, 46, 14, -45, 111, -127, -108, 94, -7, -44, -1, 79, 101, -59, -70, 103, 76, 74, -79, -118, -17, -122, 98, -115, -87, 110, 65, -83, -78, 119, 71, 111, -116, 75, -1, -108, 10, -120, 94, -80, 71, 96, 109, 6, 116, 34, 66, -114, 86, 43, -90, 60, -46, -80, -5, 30, 121, 63, -35, 107, 84, -84, 47, -67, 29, -38, -31, 125, 101, 71, 41, 35, -7, -65, 107, 121, 125, -79, -37, 45, 58, 32, -10, -112, -79, 34, 80, -23, 3, -126, -109, 6, -64, -16, 76, 84, -21, 45, 103, -108, -33, -12, -22, -19, -95, 88, 85, -101, -19, -58, 37, -51, 87, -94, 12, 95, -47, 104, -27, -111, 38, 31, 58, -18, -15, 94, -25, -128, 23, -93, 97, 105, 0, 92, 19, 54, -9, -16, 37, -15, -115, -96, 84, -126, -45, 69, -23, -24, 78, -72, 94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapshot #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapshot msg;
    msg.setTimeStamp(0.677377700227);
    msg.setSource(36710U);
    msg.setSourceEntity(226U);
    msg.setDestination(42270U);
    msg.setDestinationEntity(109U);
    IMC::HyperSpecData tmp_msg_0;
    tmp_msg_0.wavelen = 0.181238084265;
    tmp_msg_0.gain = 0.816076396136;
    const char tmp_tmp_msg_0_0[] = {113, 75, -6, 74, -126, 18, -21, -59, -85, -88, -28, -70, 67, 36, -96, 73, -15, -113, -1, -28, -104, 107, -50, -72, -18, 102, -22, -85, -13, -78, 113, 87, 66, 125, -23, -97, 77, 75, -73, 64, -17, -50, 15, 101, -14, -59, 63, -21, 26, 42, 35, 3, -120, -87, -120, -33, 58, 58, 28, 64, -95, -85, 4, 19, 57, -56, -12, -67, -88, -114, 14, -4, -115, -44, -122, 118, -98, -126, 118, -96, 116, 36, 8, 10, 97, 67, -108, -63, 32, -70, 17, -25, -113, -106, 2, 85, -38, -10};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapshot #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapshot msg;
    msg.setTimeStamp(0.880028637437);
    msg.setSource(49305U);
    msg.setSourceEntity(203U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(78U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapshot #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapRequest msg;
    msg.setTimeStamp(0.404840411172);
    msg.setSource(51727U);
    msg.setSourceEntity(209U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(8U);
    msg.wavelengths.assign("NEPQTUCRDXKHJKXARNESYDVAZLOTOJXTAOFTEIBKDIVZNXESOLMCVMZFTIGAWWDIIDLWFBYMDNZGMHYUFHUCEVFRUUGOSSLKKKJXXUPKVMEHHZPFPJDZMRNOCTCSWQVSOYAILFJGROTAQTQXPPISWJLAMBKDDIRMHBPSAQWXRZBBCKDWXUQLGCBSTEOYPMNWHNMVSRARLHUFZYGGFLCBAVPXCPWEWJULUJIFQJYKIYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapRequest msg;
    msg.setTimeStamp(0.540489153847);
    msg.setSource(62445U);
    msg.setSourceEntity(41U);
    msg.setDestination(23358U);
    msg.setDestinationEntity(6U);
    msg.wavelengths.assign("SCVXHQAMZMIEUKYAKKLVQWYLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HyperSnapRequest msg;
    msg.setTimeStamp(0.15017147153);
    msg.setSource(25472U);
    msg.setSourceEntity(58U);
    msg.setDestination(41287U);
    msg.setDestinationEntity(54U);
    msg.wavelengths.assign("NZSWIWIVFPFFCWHDGDSOGASRKSKVUJGKPZAMNIPRHGJESLMXLKLYIJQPMPGCBLZZREAPNEZLQOOJTAFYQJNEYWNDMZDBRGXWEHUDURTNTGPOKBKHUFBLDDSQVH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HyperSnapRequest #2", msg == *msg_d);
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
    msg.setTimeStamp(0.591464317934);
    msg.setSource(46637U);
    msg.setSourceEntity(154U);
    msg.setDestination(61047U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.628847710654;
    msg.lon = 0.798211489674;
    msg.depth = 52U;
    msg.speed = 0.567981418766;
    msg.psi = 0.96843927135;

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
    msg.setTimeStamp(0.608367936767);
    msg.setSource(35228U);
    msg.setSourceEntity(25U);
    msg.setDestination(9748U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.758936854638;
    msg.lon = 0.2022189288;
    msg.depth = 24U;
    msg.speed = 0.636613122238;
    msg.psi = 0.889654421635;

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
    msg.setTimeStamp(0.331849728228);
    msg.setSource(41949U);
    msg.setSourceEntity(177U);
    msg.setDestination(39900U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.434380181487;
    msg.lon = 0.383832782986;
    msg.depth = 232U;
    msg.speed = 0.618576969523;
    msg.psi = 0.312533301428;

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
    msg.setTimeStamp(0.206075419766);
    msg.setSource(45258U);
    msg.setSourceEntity(50U);
    msg.setDestination(36538U);
    msg.setDestinationEntity(246U);
    msg.label.assign("ZIGBJZSLIPKTWNAWSKOTDIHIESIGGVRTL");
    msg.lat = 0.845609081875;
    msg.lon = 0.0357068004892;
    msg.z = 0.454049042591;
    msg.z_units = 6U;
    msg.cog = 0.622851404604;
    msg.sog = 0.962470969053;

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
    msg.setTimeStamp(0.993468271351);
    msg.setSource(60492U);
    msg.setSourceEntity(8U);
    msg.setDestination(46140U);
    msg.setDestinationEntity(139U);
    msg.label.assign("GDGKELUGADCBWBMOMNFWNKEABJTHFYLZMVTIVWKUIEBNRYGJPUMPSBYMUPDNVLGAGOFOYGIHTGNYWQXRZCIFDZOIBZWTESJMFWDPZONTPRWCBTIYCERSHWZACQIEXPMQYLIBHHWVSYUQQHCVLHXMJKCRDRFKAXRNOJLZEADIOUXXZJNOUEKBVUNKVYAQKJTYPMAXZPEXOGTBVJSEHNJSRCQUFTUISQKC");
    msg.lat = 0.346732192081;
    msg.lon = 0.51273883611;
    msg.z = 0.140949171988;
    msg.z_units = 248U;
    msg.cog = 0.728890461418;
    msg.sog = 0.833264468461;

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
    msg.setTimeStamp(0.388434093578);
    msg.setSource(40687U);
    msg.setSourceEntity(243U);
    msg.setDestination(470U);
    msg.setDestinationEntity(157U);
    msg.label.assign("NUFKUSZLSYACZKWONUGCXLFWPLDYPSTGQXNIZAG");
    msg.lat = 0.665909308178;
    msg.lon = 0.617976076897;
    msg.z = 0.504340340089;
    msg.z_units = 66U;
    msg.cog = 0.816459648193;
    msg.sog = 0.10230581846;

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
    msg.setTimeStamp(0.349410142228);
    msg.setSource(20462U);
    msg.setSourceEntity(200U);
    msg.setDestination(39667U);
    msg.setDestinationEntity(228U);
    msg.name.assign("SIQEYNMBFIEQUCKSRNJMPZZEMWDCNRPOAKPSSENRDMBWPRKUEYOGQBFJMTZITOJOIHBXLMOQTGTNAZLMYWOBZZBYPLKHTZAEJHCLKWIPNUINCMQPFFORFJKPIFVHFPXSDQYMAILGBVCWXXARDTOGGDNTKFCQVUBRZGJISVYXFOLVCKHFXDUUDOVX");
    msg.value.assign("PIOQRMIFWZXGUZHDQSTRKEVWQEFZDCYYPAZXPGGHMGMGUAXANWBRKVQQCALCAIFKLLYRGTZVY");

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
    msg.setTimeStamp(0.304716009884);
    msg.setSource(9796U);
    msg.setSourceEntity(164U);
    msg.setDestination(7199U);
    msg.setDestinationEntity(130U);
    msg.name.assign("ZYYMKPLAZULUGMUEOWMMVYROKJHRRROOUSOVTJOQUGJVFRKPBBZHBTCQTZQLCRQGKRIHQBNF");
    msg.value.assign("JWDPNSNJBWUWTVUYQUJSULLASBNHXPUHQIAKXIOSHNTHSDLEMWZEMOSBFNYCVXVKLWJGINKPMECROXPZALGRQLYRBMQSWFWBNVCVDSETTZDICBMGVEAFGQQEPDEUBQVPMCUYXLCAKWMUYDTHNCWLYYVOPSGEFZMTJBSJFRRZCYFIXKQBUPROOQ");

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
    msg.setTimeStamp(0.661593104716);
    msg.setSource(5511U);
    msg.setSourceEntity(213U);
    msg.setDestination(33779U);
    msg.setDestinationEntity(116U);
    msg.name.assign("STWLVAOSDHRXLFVBLVQGMXQYPCUCIOMLJJCFQUSMQGKLJLCAJDIKTSSZYDLJRNCJIEBZHXPELNGRVHTDTNTWKBSBKKHYCUMYIIUEBNBZMUOCOZYOXRXPVZAXUXGJEXTPPCEZEFIAOYUO");
    msg.value.assign("CPGTLHAZWVXZMWBMNWHLCIIHCJYMLFYZPSWEXRZDQUXPHLHOBXKFPAILIKWNAQJBIPOGGKUHKCOQEASEJDMCLTXEGGDXENYUOUKRWOFCFIYGDRILTDSMGQFWNNVJPAVOVYBWFIYSUBHESNQKDTZKWBYHQFX");

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
    msg.setTimeStamp(0.630593696862);
    msg.setSource(18891U);
    msg.setSourceEntity(158U);
    msg.setDestination(57348U);
    msg.setDestinationEntity(56U);
    msg.name.assign("EHFJDXUFUTUCJTRWFOGYINLVNADFMVULASPIKAONAKEZYZYZRCQOFXGALNBDRSGRZM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LPICMRBHVCWFPMHSVVANJWNUBETCIWBBRFTCAWZKJAPGVAOXLUBCRVKQRMJDBCUGMDFSLJWTX");
    tmp_msg_0.value.assign("DPHSAJNUMHNXPQGFJBNRDVPGAX");
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
    msg.setTimeStamp(0.503490284076);
    msg.setSource(46978U);
    msg.setSourceEntity(94U);
    msg.setDestination(38148U);
    msg.setDestinationEntity(37U);
    msg.name.assign("RSVSBMVHQEMGVGUHLDZWFIPLVHVXHIXYUMFFWSOGHPJTQQBSUIOOGKXIRXLGKQBZGJHWXYZONZWIQLVODYRCDUYQXSALOZPOVGPEQAMTHRXDRYGYMNEGKXOGANAIMCYLEERMZANEJBCENAVTFTDNDSZJEJAPNUFTFPAOBTNZLYNIDMFJUEKQJCLRBLZSWTSRQWKXSCOI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UHRRXMPFVXWVCNAYPAPBKCOFQSETHRBNQSCHCSJIQQBAOTDGPJRMPHBWIENVVXUHETUIOVFDKA");
    tmp_msg_0.value.assign("PWEEGAFGFLPIHTCYHKYCUZSVMHGAVJXZHHNBZDFQBRAVTQPVCAUPUNBKMQELXKHYHZQZMZSGNVDDBKXHWXMNGJTRUDSDYWEOTWALMLOEAOROMKGTBRIJGDOJLEOSTIPLCCPQBLV");
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
    msg.setTimeStamp(0.305232242777);
    msg.setSource(26356U);
    msg.setSourceEntity(85U);
    msg.setDestination(29652U);
    msg.setDestinationEntity(53U);
    msg.name.assign("CYNHGUJWSETDANWMAHJWGIVNTAOUFXZ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PIFXVNRJOFSXPGWNYRMMGVAHHGRGVVZOYGAKCOOFKOSILTMBCJTYLBQJNTTMTBIMVBZHENRZBKXSEQKUOZYVEVXXCDSUUMELJEQNDVYHKYBVZEDCYGDWPJJJQZQANEWPMSZLDUFWQUHDHDRWRXUYGQPIVBPNABZRRDLSFUXWHMOTQHWHXO");
    tmp_msg_0.value.assign("SPHNORJEMIUOKQKZQTELLCVVYHIOTQNJRSCFLHEKENGPWWFPZJKQIQSSXCEPDDYGLTDGTVPMZAFOYCWMJJJUVUUTGZFCWBFSUSWDMCLJGUNKYOVBSIMWEKOQXBJGDRLETQYXHQMRTXYSRBFXNSNITHAWVAHGGGVNIWACRWXDGJPBLUPIKBMLDDRQVEAXJHIBNXY");
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
    msg.setTimeStamp(0.328021643567);
    msg.setSource(46526U);
    msg.setSourceEntity(70U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(145U);
    msg.name.assign("KUOEXIRAWIMUTLLHVQCNFNZFKIEFTXQQUSIDDPPWGRPZTIFTRBUYOZCWLLUHBWYXAYXRBEYGLXQURTHLYQIJSVKSNYZXFJ");
    msg.visibility.assign("BVGWWOYWAPTKGDMASISRSBTHJUBMCYCHLRSKAWWIOUTDKNRPWAJKNYLSZWCDDDIBMCARLNYPGKEULVPEOGZSDTFZHFQLQEALJHNMQNJKQPHAUHCBTIVVWVEQQVBHXXZPCTRMTQZYUZLYYKEGKCZRFQPICCTOKFVLOFADBYJREGIEIDBXDNLPMEJFXXOFGIRMMM");
    msg.scope.assign("ULDAYADUKLJWCKEEGKQUDPOXFBPLOUCNNNQWGHMJGVKBZJQKBYYCCDHFTXSREKCVTLEICGHQMVPMTZMIUWTYAASHLXITKQXY");

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
    msg.setTimeStamp(0.371752136633);
    msg.setSource(57065U);
    msg.setSourceEntity(236U);
    msg.setDestination(19712U);
    msg.setDestinationEntity(24U);
    msg.name.assign("FJXJGNQGNYLDBKWVSUPOJSJYOSKCCSXKCYRPWWUENPXTKLZDWETTUQDBXMYPINSBGCFOEHUTMQJUAWYAJFBLIGZHNWPLINFWEOGBTIYYSODQOMCUHFFJLZBRKLMGAWNDHPLPBEAHREELXOXOMXZKRLINHBVIVAQNWKSSCUHANJTTDXUBVOAZAQHRREDMVMQGFXBVRLYKAVIZGZDXYFGZSOFITKDJCVMQHRKEUPIZGEZMAPQVDCSTVQTCHIFY");
    msg.visibility.assign("HBMTJDDUANWQYBEFPSTAKLPQPGHRGJLFINIAUTMVCRBYUFIHGKOEWTMDIECYIWYURATNUYVEKWTRGFQXUTFDLMGPUOFNBASWBVLVYPZJOZSAQXCISZFQZIVXTKCTNBPHOZJXRSMEMDOWOXFCDOHFPIMNYGJEWLMJAVHRLSAZZECLBLESKMJNDNWM");
    msg.scope.assign("LZKQGRCBWPGZSTKSMVHKKZAXAESZBZEIVXQQLMLGJSSPXYVLCCSYOWEUSHJDUKVJHCQGNOROJXNQJPYYBIPYWOMNUFDBGEMTPPAMTFMFMXJERAVEEDENUUIX");

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
    msg.setTimeStamp(0.762291356126);
    msg.setSource(43211U);
    msg.setSourceEntity(108U);
    msg.setDestination(16568U);
    msg.setDestinationEntity(234U);
    msg.name.assign("OMXXKLWQKXEDBYKZTVPLSUAZBFBCDYIHFAHZASHUSZUUCWZELIFMRGNGULSNRKHBHNOHNJDIXVIQXYGMNFXPWPWURPORAFATSYDEWVSLQACBNQPXDVMQOMAEVYEJBBGAVIDTSPRUSKTNZZITJRHXOEJUATDOTBJILGZJKUTAGHMSCNNDQGPOFELTDFFJKXRYCUBLWIJWCIWHWFSVZRCMFYKJKDEPRYWZQOOYECIXJMKMOVP");
    msg.visibility.assign("HBKEQSEGVZWTXYKIXASJKLJMLFAXZRIZDMNDOAIYNKCBODSUU");
    msg.scope.assign("ZDKJMSBAJDAWLVZWJFWZTMDIDRQUSMVIYOOWHBXMHRYGQHESKCUKHCBVIGQFOKEDCUXFBPNZRMWYZTMXRYOBKQRGFPUDMCMZMGSJXAIHLCPLLYGPUQT");

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
    msg.setTimeStamp(0.4110734874);
    msg.setSource(36870U);
    msg.setSourceEntity(16U);
    msg.setDestination(41004U);
    msg.setDestinationEntity(61U);
    msg.name.assign("WTJTAUVUQOVYXRMAIROTIZDBRGLLUTMUIXKCSNOPTYPFLSVBXCQKZOUHSNOERMBZEXSRFHEAAJPAMLL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("URENVTRTELXPCJRUNEZXHXDAQIGQFAHMWDTOMKEQIWAPHDKZXRKNXVLKQJQNCSUOPISQAMTIUXSFGGSPTXDURJYWFLLNOLWXTZRHPCHWKCCMOEWIFHRYDOSOIKZYQGPKJVCAMBTQABTZCJCLVWYJELBSFGFPZBQNMIPGJVXXHGLKFITIWCOKPSAWWBYBVAYQODDYBATFHUUB");
    tmp_msg_0.value.assign("DJXURQLIRZVEJSSATHLGHOKFJUZYFIDOSCSHEXTUDPBPLNIIAKRDTCIWQRISMMBEHGKZGYADLGFBYOYHMNCRXVNQUUKXKASDLFDYEVUEMTEACAPJSTQBJXMJVVLUQMBZCSQIWTBOJHIJVPEKECZDMBFTBPYUNWFFRCLBVTQGPEXYCIQNXZXDUWWKMTGHOKORZHUJFTMRAZARWPEOVWKPJNVDFNCWOGIXWOZHGHNPZGAMKBCYANSLNYFOVLXQSR");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.101627930637);
    msg.setSource(27120U);
    msg.setSourceEntity(92U);
    msg.setDestination(13934U);
    msg.setDestinationEntity(205U);
    msg.name.assign("VKKDEMIPSWVEUFBJRJAHZT");

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
    msg.setTimeStamp(0.115255456539);
    msg.setSource(6455U);
    msg.setSourceEntity(58U);
    msg.setDestination(62684U);
    msg.setDestinationEntity(55U);
    msg.name.assign("NIFYLVNYYPIYRGKCZALXVFGAJEFEXVFWJOHOTDUQMIQZADXMBMPBP");

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
    msg.setTimeStamp(0.941537678737);
    msg.setSource(53904U);
    msg.setSourceEntity(99U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(195U);
    msg.name.assign("DAEGWMJFLLIMZFQGYLBKENOEZZJLMKIYHEHFZUGJKODDRKLKCERRMFDUVBQSBQJJMFRXKIVVCULAAGXPPCOISOVXYERNATBVVATWCMWGTQPRSYCZAENGTTQKUXWWTCYFQTPIRFBJAENVETZZNWWDVJXQBODHNHYCXYCOPPRIOZPDINKXBZGUSHTDPRQPMHWHYHURLJOSSDLMTSBQDIUGAH");

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
    msg.setTimeStamp(0.580499664269);
    msg.setSource(63621U);
    msg.setSourceEntity(121U);
    msg.setDestination(46780U);
    msg.setDestinationEntity(65U);
    msg.name.assign("GXYKFHWBJVONFBFZZSHLWOOYRKZSEDAUP");

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
    msg.setTimeStamp(0.522398803409);
    msg.setSource(34006U);
    msg.setSourceEntity(31U);
    msg.setDestination(22507U);
    msg.setDestinationEntity(77U);
    msg.name.assign("SCXUZQCEWSIZNLVGUTQKHVIIYLVQWGROETMSDUPCJCVHTWMSSFJEDFQWOQHKYTFRECWDEMIOINXPYKQBGIPBHZKKCLWUGVOXWANBCODTAJUFOUBJKYJNWUDAHZYVCEPMRPRPFCYGZGDPWBJMVLEZDRVPABLIOTXSHVJDOAQFWAJODXDTQBYKBYZZVFHLPKLJIAXBMXFYUPXMNEZBXAGIXQHTOYGSKKITHNQZUENLEFSLT");

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
    msg.setTimeStamp(0.550253823419);
    msg.setSource(1535U);
    msg.setSourceEntity(84U);
    msg.setDestination(37640U);
    msg.setDestinationEntity(222U);
    msg.timeout = 2450937704U;

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
    msg.setTimeStamp(0.350232699074);
    msg.setSource(55895U);
    msg.setSourceEntity(174U);
    msg.setDestination(20128U);
    msg.setDestinationEntity(76U);
    msg.timeout = 1750706678U;

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
    msg.setTimeStamp(0.209039495911);
    msg.setSource(57853U);
    msg.setSourceEntity(57U);
    msg.setDestination(5892U);
    msg.setDestinationEntity(3U);
    msg.timeout = 735659919U;

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
    msg.setTimeStamp(0.105583264413);
    msg.setSource(40102U);
    msg.setSourceEntity(139U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(204U);
    msg.sessid = 2017661974U;

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
    msg.setTimeStamp(0.913535483515);
    msg.setSource(65U);
    msg.setSourceEntity(9U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(254U);
    msg.sessid = 2601391006U;

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
    msg.setTimeStamp(0.898138199127);
    msg.setSource(45818U);
    msg.setSourceEntity(183U);
    msg.setDestination(46450U);
    msg.setDestinationEntity(69U);
    msg.sessid = 2359355431U;

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
    msg.setTimeStamp(0.188439099511);
    msg.setSource(42625U);
    msg.setSourceEntity(190U);
    msg.setDestination(2323U);
    msg.setDestinationEntity(16U);
    msg.sessid = 4268024225U;
    msg.messages.assign("GETXZIMDSIYVYFSOOTNWFETJEBSOKUYDSRHZBTNCTUJJTYISNGEWZBKGPPQCZWLTRGLQYRLAPXVEPWSLPDMHYDIFCLEOVUFAPOSHARDKWAFXJVKKJKBNNPFJRPIYHQTOYXCIFQKGVZEGELDNWF");

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
    msg.setTimeStamp(0.945536152847);
    msg.setSource(53004U);
    msg.setSourceEntity(10U);
    msg.setDestination(33726U);
    msg.setDestinationEntity(217U);
    msg.sessid = 221024196U;
    msg.messages.assign("YXQWYJZHICSGQWHCFVOKOZSXYKHLWHPIXGMSRIITKQGLTNRBOFOZBVDNMISEZKFYNDPFEGBNZBQOOPEHERCQOVMSVJWTDOGLUVFHBXLYGKPBUXZBDONPYIRKLTIPFQJYKFQLUAAXDIXEUZ");

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
    msg.setTimeStamp(0.925871476897);
    msg.setSource(51723U);
    msg.setSourceEntity(67U);
    msg.setDestination(10886U);
    msg.setDestinationEntity(251U);
    msg.sessid = 692765870U;
    msg.messages.assign("GCCZJLUQGARTZBCNAPQFLYLLFZOBQFDREPEQGOVTZDSHSQDKOJLZGWYVHMIFAQAZHTGXTDXMJFYYZAMTHKSWUQ");

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
    msg.setTimeStamp(0.0363327639304);
    msg.setSource(2386U);
    msg.setSourceEntity(72U);
    msg.setDestination(9278U);
    msg.setDestinationEntity(85U);
    msg.sessid = 3808512756U;

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
    msg.setTimeStamp(0.185171402109);
    msg.setSource(16751U);
    msg.setSourceEntity(16U);
    msg.setDestination(23260U);
    msg.setDestinationEntity(39U);
    msg.sessid = 2970507303U;

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
    msg.setTimeStamp(0.157731965976);
    msg.setSource(18657U);
    msg.setSourceEntity(60U);
    msg.setDestination(65365U);
    msg.setDestinationEntity(138U);
    msg.sessid = 1125257670U;

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
    msg.setTimeStamp(0.921079279964);
    msg.setSource(31875U);
    msg.setSourceEntity(84U);
    msg.setDestination(8175U);
    msg.setDestinationEntity(243U);
    msg.sessid = 3372587659U;
    msg.status = 77U;

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
    msg.setTimeStamp(0.624344440154);
    msg.setSource(58529U);
    msg.setSourceEntity(22U);
    msg.setDestination(46131U);
    msg.setDestinationEntity(135U);
    msg.sessid = 3821653437U;
    msg.status = 131U;

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
    msg.setTimeStamp(0.305286332998);
    msg.setSource(49999U);
    msg.setSourceEntity(92U);
    msg.setDestination(16926U);
    msg.setDestinationEntity(206U);
    msg.sessid = 2448910674U;
    msg.status = 103U;

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
    msg.setTimeStamp(0.142411784686);
    msg.setSource(58684U);
    msg.setSourceEntity(93U);
    msg.setDestination(28058U);
    msg.setDestinationEntity(138U);
    msg.name.assign("PYIVNNDGHGTMLTPNDUTFAXHEOYMBSZJXTCBWNQJZPSOSWGNGGIFVVUUSIRVSLEDZLRSGLXIBLDIPQVMBHADJUFFLPQWCXARIPJQNDRGDTVEEHYKKYVJMYEGKOTYPQOCKOCFWHNWWJSLNAQQQCKSTBKRVGQIABEIDKYORP");

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
    msg.setTimeStamp(0.90994138136);
    msg.setSource(5551U);
    msg.setSourceEntity(135U);
    msg.setDestination(51551U);
    msg.setDestinationEntity(16U);
    msg.name.assign("NRZABSAYLHGJCSXXFQNCPLIKXVBBDRKFVSUEHCHLCKEOUVTWACJUMHOFUYUTZFJMWIZBYXPOMBZTEIJGLNELZGKUTIIWEJFTSFEPODKKMHWBFZHSZKRDPHJXGUTQMBAXMGSFQXOPOQZSMIJODGANYHEENGRAVDCNCHUGRVDYQYXWQWTMDLCVIRACVPWLXIRRHTKYDY");

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
    msg.setTimeStamp(0.192037937382);
    msg.setSource(23193U);
    msg.setSourceEntity(38U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(203U);
    msg.name.assign("MSMJABKNXJIXDKWUFSMLIPHCRNMH");

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
    msg.setTimeStamp(0.0104175687017);
    msg.setSource(46510U);
    msg.setSourceEntity(13U);
    msg.setDestination(25810U);
    msg.setDestinationEntity(51U);
    msg.name.assign("YZHPGTQLANOZKGZWCAYNRBRCQBUAFUFUFRNLSGJQODXJFBAYZVDSPKSYZBVXQEVDE");

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
    msg.setTimeStamp(0.278350421514);
    msg.setSource(50964U);
    msg.setSourceEntity(197U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(49U);
    msg.name.assign("TDHCOGRMSGQQEAIGODXKCWIPGDMLEATJLNQCWOPLIEOYTVOWCBLMVTWZXHQQSOMXUJUYQKQVXNOSWQESTRLNLVYPYJHELDQGDHKYKJTAMAAJDUVHHYIMFYRXSUM");

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
    msg.setTimeStamp(0.558096579281);
    msg.setSource(38486U);
    msg.setSourceEntity(52U);
    msg.setDestination(64564U);
    msg.setDestinationEntity(91U);
    msg.name.assign("APSDWEJFEFHETARWUJLQWQLSVEDSKJUIQXHDNFCEDNFKRHKOTYQPZPAZZLZATLYVMBRLDTVJGZEHKYYMONIXUZIBMFHJMTXZZFNKXPRCNTGVLAXONLCITWSFU");

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
    msg.setTimeStamp(0.0209333525925);
    msg.setSource(56925U);
    msg.setSourceEntity(1U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(20U);
    msg.type = 112U;
    msg.error.assign("SPWCDJWEFILGCRKNWMDIRGMAQMWMYAOGODANIMFUBZXPBNAKQQQQCCAXOETBVLRUOSEGFJKUEITVRPTQRNYSZENZFZUYOSM");

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
    msg.setTimeStamp(0.643855572273);
    msg.setSource(22521U);
    msg.setSourceEntity(3U);
    msg.setDestination(5881U);
    msg.setDestinationEntity(55U);
    msg.type = 1U;
    msg.error.assign("NXAJZECNTBQIQPDBPZDCLVNOWIKMYYFVGPCCNWLKAPNJUOIFMNNRHSJHJHFPYLAZRKIBSSWOWGGOQACURUEWXCQPRGTSKQGKCPTUPDEDIGLHJYBEOZESQBNBAGKTVVXZSYBWZRKSVRRWOXMXXYMPTHMFMGKDZEQXRLNJQTSGDDACZWMUFMCZULDWYJAJMETAVSOAIVYKOUKALLXCVEJIQGRXFSONVYDPU");

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
    msg.setTimeStamp(0.516145501862);
    msg.setSource(62277U);
    msg.setSourceEntity(36U);
    msg.setDestination(50681U);
    msg.setDestinationEntity(138U);
    msg.type = 124U;
    msg.error.assign("BBIACSJOWUVZNETOGPMZQKYITCOHQKZJPZGJNUQASXQOAJNDBESFXLLMVBUSDLLPHFGRTYCEFVDGUXNDHTRJCOPRJUHWTOYWFKVRABOIJXXKGBYWGNGMSIBKLQZDFLLISXTYWWPCMVVMRNVTMTVPRKIFAZNMOYDLTHAAJFTYKOHXUQV");

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
    msg.setTimeStamp(0.253998560095);
    msg.setSource(7663U);
    msg.setSourceEntity(125U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(225U);
    msg.seq = 49077U;
    msg.sys_dst.assign("UEAQZHODTHKNZEGMWNMWOPJXRCLXCIXBUEOSNVGIZAFGMFBSHYKSCNCBVKGXLQLDLBSHRVLSUUBMNEQIGGVCYYNOPHUYSTCIUIUYKPOLDGQFIVXFB");
    msg.flags = 77U;
    const char tmp_msg_0[] = {-64, -29, 23, 89, -59, 64, 82, 49, -67, 82, 73, 23, -18, 61, -87, -61, -33, -105, 113, -98, -73, 73, -69, 30, 94, 101, -73, 96, 102, -40, -49, 33, 15, -70, -39, 119, 44};
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
    msg.setTimeStamp(0.683918965905);
    msg.setSource(14552U);
    msg.setSourceEntity(205U);
    msg.setDestination(28649U);
    msg.setDestinationEntity(135U);
    msg.seq = 56000U;
    msg.sys_dst.assign("BJTVMICVUSDOLTRMSIYFGJANHUTAUSZGTZBADEQNFNFQMWFUSSLNKYOFBXLSPKUGPBRZDAAPUMZLOYRKLHBGOPZBODNILSREHGRXYXJQPIAPYKOZJRDKYOTEFFITCHDZHAWNCZBWXKUHWBRIGACLYKLCIMTIEEVNZSXVJPPCHCATWITQGDGWSRJOQSXDPHQYQMJOJBIPXUYOYJRHEEMVCUQKRFLEXMNNWVXVCXCEVW");
    msg.flags = 224U;
    const char tmp_msg_0[] = {-53, -47, 24, 113, 83, 101, -12, -83, 9, 74, -86, -3, -15, 40, 113, -84, -110, 120, 49, 50, -35, 47, -39, 64, -28, 57, 75, 52, -118, 29, 119, -117, 109, 105, 12, -78, 52, -110, -93, 15, 77, -85, -59, 92, -31, -39, -98, 21, 67, -102, -87, -4, -53, -48, -53, 75, 88, 77, -101, -128, -4, -23, 116, -31, 13, -95, -79, 96, -38, 113, -41, 103, -54, 71, 51, 94, 59, -32, 74, -89, -46, 126, -80, -22, -62, -89, -24, -92, -107, 32, 71, 11, -128, 9, -83, 62, -67, -108, -101, -67, -9, -80, -48, -86, 14, -67, -73, 86, 5, -73, -11, -81, 8, -83, -6, -78, -73, -96, -24, -102, 84, -80, -96, 116, 118, -106, 48, -119, 84, -38, 36, 111, 108, -103, 120, 61, -17, -49, -78, 89, -42, 120, 26, -110, -51, 5, -97, 58};
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
    msg.setTimeStamp(0.331169275573);
    msg.setSource(54757U);
    msg.setSourceEntity(10U);
    msg.setDestination(21195U);
    msg.setDestinationEntity(60U);
    msg.seq = 14790U;
    msg.sys_dst.assign("DWIEUNCBMGHYRWZKKJQWDTVILNXRJUIKVHSTPORXXIXCFXKCRODYJAQ");
    msg.flags = 246U;
    const char tmp_msg_0[] = {-34, 91, 101, 46, 126, -27, 8, -36, -118, -33, -59, 85, -11, -78, 66, -36, 106, -68, -121, 96, -61, 122, -21, -102, -14, 21, 75, -35, -76, 23, 10, 5, 44, -50, 97, -48, 63, 114, 77, 90, 55, -109, -96, -78, 61, -116, 54, 43, -72, -26, 39, 89, 73, 37, 18, 125, 56, -25, 125, -118, 110, -120, 35, -104, -104, -128, -77, 97, -101, 21, -87, 108, 53, 111, -39, 43, -100, 100, -83, 100, -40, -73, 100, -70, -78, 120, -116, 99, -3, -31, 55, 123, -73, 117, 101, -27, -47, 85, 53, 3, -23, -54, 51, 48, -109, 76, 14, 124, -98, -51, 3, -102, 50, 94, -95, 78, 39, 92, 94, 90, -65, 88, -109, 70, 55, -49, 54, -104, 12, 120, 8, 24, -37, -58, 96, -113, 90, 66, -93, -89, 48, -76, 91, 19, -6, -21, -68, -12, -90, 126};
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
    msg.setTimeStamp(0.966596510351);
    msg.setSource(62366U);
    msg.setSourceEntity(126U);
    msg.setDestination(56816U);
    msg.setDestinationEntity(144U);
    msg.sys_src.assign("EVHUAQBHQPWE");
    msg.sys_dst.assign("KWKNYDOTEIXWHVSUOXMNAQQCWUKDLBJLNWILWPWRHSJHHJEXGFMTQQXVZVDAWWTVCQJCIXBRKHMUOJKEQOUAASIYVOCEREMBCEYYNDYUGZWIIFSOZBXRZFMJXMTIKCHBUTKAIEFKCZAZNURCELFGTRVBIOQGJSPUFYURASDXCFZHHLVZGIGJDRSOBJCQEPVPDUAWGGPRLDHGPFSNJELPBMMFNHL");
    msg.flags = 64U;
    const char tmp_msg_0[] = {-93, 96, -62, -92, -59, 69, 59, 78, -107, -112, 23, 34, -40, 107, -100, -67, -5, -38, -94, 64, 84, 123, -20, 13, 120, -27, -117, -78, -97, 65, -68, -51, 32, -61, 53, 119, 51, 13, -100, 92, -83, 101, 93, -10, 23, 50, 110, -78, -3, -5, -4, 34, 101, -114, 94, -85, 84, -106, -97, -60, -117, 11, -111, -88, 31, -12, 26, 35, 102, 74, 54, 70, 114, 1, 37, -114, -121};
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
    msg.setTimeStamp(0.602838157891);
    msg.setSource(52130U);
    msg.setSourceEntity(245U);
    msg.setDestination(61942U);
    msg.setDestinationEntity(72U);
    msg.sys_src.assign("PEAWOSKCGPOIGTOHFLFBHFWTIIEAAMTZATFVNRPEPTHJVAFDMLMOIPPTFBNWBGJJTZNVWYPLDYLANTUCUGOIBBOMNEKUAYTELUISYSUHZLCYVOHKFDTHIFZXDIZNRHVXRKOWNJANXWCXQFGKLBBPDWQZMIESBG");
    msg.sys_dst.assign("YNIYSYAUTNBZKKHAZASVWPXSF");
    msg.flags = 2U;
    const char tmp_msg_0[] = {67, 48, 93, -61, -66, 19, 36, 95, 58, 88, 89, 8, -73, 126, -73, -66, -43, 60, 63, -73, 100, 37, -46, -29, -30, -38, -21, 126, -50, -19, 81, 85, 49, 106, 42, 91, 67, -82, -128, 33, 90, -126, 107, -62, -102, 67, 10, -58, -125, 38, -83, 13, -101, -46, 31, 1, 40, 84, -14, 59, -102, 14, 23, 86, -24, -100, 124, 60, 69, 54, 65, -39, 86, 70, 109, 27, -8, 9, -42, 63, 50, -88, -15, -49, -73, 70, 86, -59, 85, 21, -33, -122, -58, 96, 37, 89, 75, -128, -30, 60, 115, 102, 100, -4, 44, -24, -1, 5, 17, 92, -97, 16, 117, -95, 28, 7, 23, -60, 15};
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
    msg.setTimeStamp(0.0750566582729);
    msg.setSource(1869U);
    msg.setSourceEntity(37U);
    msg.setDestination(60494U);
    msg.setDestinationEntity(136U);
    msg.sys_src.assign("DSLZQYFOXUZNNAHNSEAPOACVLKRJLUZTARHJFUWLHAIHPTVMTEOPNKVVNLPTCWIKWNZWYCJOGYJMTCXWDBPJMDBVEFSMSOLJCAGATYI");
    msg.sys_dst.assign("HLJRXZQYPUSVFDUXILRPQBDTOO");
    msg.flags = 146U;
    const char tmp_msg_0[] = {94, 16, 3, 67, -21, -31, -50, 111, -50, -19, -53, -122, -64, 122, -71, 20, -50, -103, -80, -99, 40, -39, 104, 69, -15, 22, 56, -82, -128, 58, 92};
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
    msg.setTimeStamp(0.74768848744);
    msg.setSource(58752U);
    msg.setSourceEntity(119U);
    msg.setDestination(23296U);
    msg.setDestinationEntity(36U);
    msg.seq = 11459U;
    msg.value = 231U;
    msg.error.assign("CFIGQOATLCDLWSJCQRBCMYGRKXHFINJEEPYDONNXWIQICKVYPAQQLIPHRAMSVUFSWTGZEXGEZWTNETFBIPHOGLZXJVWCRSMLNEVDWYYNAFPEWUOMZBQQSJLFNBUTLUHRNLVXZLGCVXSYFRALTMYKDGHSGFKUFWVPOVMAWQOHDXSBKJVUBOKJASKXYOZZC");

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
    msg.setTimeStamp(0.489841986285);
    msg.setSource(12474U);
    msg.setSourceEntity(50U);
    msg.setDestination(56479U);
    msg.setDestinationEntity(232U);
    msg.seq = 14221U;
    msg.value = 252U;
    msg.error.assign("LXFBBSTINBPWNFQNJUIYPXQXPJEVFUSJQUXZFKUGCRTSMWOSRSOXOGVWRDUEVMJRSAVCQKZFTRKAAIQGAEELWRCYZTDVWXWGQYMAQJJJCGMCYHOZIKQILZZCPHLAMAHAHMMZOGKPDWBLLDYDVWFOYCSIOHQHN");

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
    msg.setTimeStamp(0.805413336141);
    msg.setSource(16392U);
    msg.setSourceEntity(3U);
    msg.setDestination(38556U);
    msg.setDestinationEntity(162U);
    msg.seq = 40190U;
    msg.value = 211U;
    msg.error.assign("NMWABPGKZNELWYQXZFOTTHWQRCHWDJIOKDPMUIGTGARVAAARNSTQUGHJBVDSQLDBTNDJCISXZOZYEAESENCOVLKYOVTUMNKECOTAFEMXHFVXXJHDLPFNPKSYUWHWRYQRRJSQPFVUMLOEXZOCBKLPWWLB");

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
    msg.setTimeStamp(0.738997661486);
    msg.setSource(7485U);
    msg.setSourceEntity(188U);
    msg.setDestination(9332U);
    msg.setDestinationEntity(48U);
    msg.seq = 46486U;
    msg.sys.assign("SOGKWMTENVVXPGEYQWKHDJNUXLJKFEWZQHEBGTRXSDXBZFCIARBMYZVKBAQHYFTCJQPNLQQZCLGXMVNQAMNHWYUAXVSBOAZLJIEJIUORWTSRRUUQLFEYBFBFJECVGNLQYMYAGDWESGFBXYNZUINEZHRMKCU");
    msg.value = 0.964181324916;

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
    msg.setTimeStamp(0.350850526306);
    msg.setSource(31579U);
    msg.setSourceEntity(201U);
    msg.setDestination(58723U);
    msg.setDestinationEntity(243U);
    msg.seq = 43697U;
    msg.sys.assign("YGELXVDDVHDQOQFCCAPUWA");
    msg.value = 0.769618828079;

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
    msg.setTimeStamp(0.114234344358);
    msg.setSource(38026U);
    msg.setSourceEntity(98U);
    msg.setDestination(39583U);
    msg.setDestinationEntity(199U);
    msg.seq = 22474U;
    msg.sys.assign("DWWBJWCJMFQBMGNVVHJCXFSSERVZLFLFVRTUQSYAQXUCLPPCDFLWLMTPORXBCZYKMXRIAKGYFRJXVXKMERJZDUIUSZISPFVYGWYYXNGLCKEYZTDGKITKONOTPSNPOHOBTAYTJWAKXJHYOAVGIMCXPTIIEKCMNJUAQIHMAELIGPFBZEMUQFEMLDDLUUSRGZOAKJHTGWBOHILTEGKEWRCWNPNPZ");
    msg.value = 0.143722914105;

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.035520601814);
    msg.setSource(64854U);
    msg.setSourceEntity(87U);
    msg.setDestination(54051U);
    msg.setDestinationEntity(35U);
    msg.action = 95U;
    msg.longain = 0.885868809844;
    msg.latgain = 0.912795936344;
    msg.bondthick = 1765743194U;
    msg.leadgain = 0.140930150339;
    msg.deconflgain = 0.66144562109;

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
    msg.setTimeStamp(0.694238715204);
    msg.setSource(8609U);
    msg.setSourceEntity(247U);
    msg.setDestination(24350U);
    msg.setDestinationEntity(173U);
    msg.action = 85U;
    msg.longain = 0.81081630764;
    msg.latgain = 0.209500481913;
    msg.bondthick = 642994182U;
    msg.leadgain = 0.181219178716;
    msg.deconflgain = 0.973069443063;

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
    msg.setTimeStamp(0.279513844822);
    msg.setSource(42928U);
    msg.setSourceEntity(196U);
    msg.setDestination(20722U);
    msg.setDestinationEntity(221U);
    msg.action = 241U;
    msg.longain = 0.628952004749;
    msg.latgain = 0.86979173277;
    msg.bondthick = 2526754984U;
    msg.leadgain = 0.253226416348;
    msg.deconflgain = 0.696932451174;

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

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.425789139073);
    msg.setSource(37739U);
    msg.setSourceEntity(178U);
    msg.setDestination(20270U);
    msg.setDestinationEntity(41U);
    msg.err_mean = 0.235420592238;
    msg.dist_min_abs = 0.162487083836;
    msg.dist_min_mean = 0.0422710751933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.0982429119435);
    msg.setSource(60955U);
    msg.setSourceEntity(182U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(166U);
    msg.err_mean = 0.478656735096;
    msg.dist_min_abs = 0.737164806961;
    msg.dist_min_mean = 0.642652337626;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.137596906439);
    msg.setSource(40421U);
    msg.setSourceEntity(248U);
    msg.setDestination(60960U);
    msg.setDestinationEntity(67U);
    msg.err_mean = 0.526641823533;
    msg.dist_min_abs = 0.858405222077;
    msg.dist_min_mean = 0.189522679078;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.819924057457);
    msg.setSource(36394U);
    msg.setSourceEntity(143U);
    msg.setDestination(41863U);
    msg.setDestinationEntity(215U);
    msg.action = 90U;
    msg.lon_gain = 0.59351358364;
    msg.lat_gain = 0.715211326748;
    msg.bond_thick = 0.763624954554;
    msg.lead_gain = 0.819722994955;
    msg.deconfl_gain = 0.327846120234;
    msg.accel_switch_gain = 0.540992698431;
    msg.safe_dist = 0.584278989967;
    msg.deconflict_offset = 0.358168320342;
    msg.accel_safe_margin = 0.792841020233;
    msg.accel_lim_x = 0.566825045695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.861076460152);
    msg.setSource(39317U);
    msg.setSourceEntity(200U);
    msg.setDestination(45697U);
    msg.setDestinationEntity(28U);
    msg.action = 220U;
    msg.lon_gain = 0.304741681195;
    msg.lat_gain = 0.505784437506;
    msg.bond_thick = 0.200013187326;
    msg.lead_gain = 0.319395702835;
    msg.deconfl_gain = 0.292507104359;
    msg.accel_switch_gain = 0.414034279687;
    msg.safe_dist = 0.0594066652103;
    msg.deconflict_offset = 0.536905053357;
    msg.accel_safe_margin = 0.621782923437;
    msg.accel_lim_x = 0.584353655272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.394846336906);
    msg.setSource(17644U);
    msg.setSourceEntity(175U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(128U);
    msg.action = 5U;
    msg.lon_gain = 0.875427800951;
    msg.lat_gain = 0.878510731311;
    msg.bond_thick = 0.103082296337;
    msg.lead_gain = 0.789665002594;
    msg.deconfl_gain = 0.989581903871;
    msg.accel_switch_gain = 0.403510356176;
    msg.safe_dist = 0.954532651438;
    msg.deconflict_offset = 0.804763571187;
    msg.accel_safe_margin = 0.889398580363;
    msg.accel_lim_x = 0.683803868607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.725230242626);
    msg.setSource(53814U);
    msg.setSourceEntity(154U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(117U);
    msg.type = 77U;
    msg.op = 62U;
    msg.err_mean = 0.503340337767;
    msg.dist_min_abs = 0.995431991195;
    msg.dist_min_mean = 0.612126380574;
    msg.roll_rate_mean = 0.519197572412;
    msg.time = 0.671013083289;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 157U;
    tmp_msg_0.lon_gain = 0.391398737756;
    tmp_msg_0.lat_gain = 0.907870726913;
    tmp_msg_0.bond_thick = 0.124066941487;
    tmp_msg_0.lead_gain = 0.808548757675;
    tmp_msg_0.deconfl_gain = 0.268816817947;
    tmp_msg_0.accel_switch_gain = 0.539829134916;
    tmp_msg_0.safe_dist = 0.232433740707;
    tmp_msg_0.deconflict_offset = 0.935468268838;
    tmp_msg_0.accel_safe_margin = 0.378945210132;
    tmp_msg_0.accel_lim_x = 0.430674088864;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.305440341265);
    msg.setSource(25834U);
    msg.setSourceEntity(39U);
    msg.setDestination(27564U);
    msg.setDestinationEntity(158U);
    msg.type = 5U;
    msg.op = 153U;
    msg.err_mean = 0.116282482393;
    msg.dist_min_abs = 0.889691031337;
    msg.dist_min_mean = 0.94561586029;
    msg.roll_rate_mean = 0.612593165413;
    msg.time = 0.761888594881;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 234U;
    tmp_msg_0.lon_gain = 0.00547308107489;
    tmp_msg_0.lat_gain = 0.768673569297;
    tmp_msg_0.bond_thick = 0.548161454612;
    tmp_msg_0.lead_gain = 0.209962915085;
    tmp_msg_0.deconfl_gain = 0.0654702548595;
    tmp_msg_0.accel_switch_gain = 0.999316168218;
    tmp_msg_0.safe_dist = 0.501504394811;
    tmp_msg_0.deconflict_offset = 0.298558728714;
    tmp_msg_0.accel_safe_margin = 0.439041744587;
    tmp_msg_0.accel_lim_x = 0.0640846337714;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.817704282076);
    msg.setSource(35923U);
    msg.setSourceEntity(52U);
    msg.setDestination(6197U);
    msg.setDestinationEntity(235U);
    msg.type = 187U;
    msg.op = 29U;
    msg.err_mean = 0.767338272755;
    msg.dist_min_abs = 0.191537270572;
    msg.dist_min_mean = 0.636770120025;
    msg.roll_rate_mean = 0.791690874422;
    msg.time = 0.816094346589;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 231U;
    tmp_msg_0.lon_gain = 0.225844438427;
    tmp_msg_0.lat_gain = 0.431319473148;
    tmp_msg_0.bond_thick = 0.313753211124;
    tmp_msg_0.lead_gain = 0.151942405942;
    tmp_msg_0.deconfl_gain = 0.856834604955;
    tmp_msg_0.accel_switch_gain = 0.550622310555;
    tmp_msg_0.safe_dist = 0.48097370638;
    tmp_msg_0.deconflict_offset = 0.502042905772;
    tmp_msg_0.accel_safe_margin = 0.27656430048;
    tmp_msg_0.accel_lim_x = 0.115224359172;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.281986512988);
    msg.setSource(48013U);
    msg.setSourceEntity(172U);
    msg.setDestination(14020U);
    msg.setDestinationEntity(147U);
    msg.uid = 153U;
    msg.frag_number = 119U;
    msg.num_frags = 155U;
    const char tmp_msg_0[] = {110, -74, 9, 86, -76, -116, -115, -59, 1, 96, -76, -82, 55, 123, -82, -56, -61, -108, 31, -61, 44, -26, -64, -50, -39, -56, -120, 81, -124, 103, -88, 79, 7, 5, -29, 108, 100, -30, -6, -53, -66, -7, 2, 9, -12, 105, -45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.511485995887);
    msg.setSource(7791U);
    msg.setSourceEntity(184U);
    msg.setDestination(22201U);
    msg.setDestinationEntity(14U);
    msg.uid = 40U;
    msg.frag_number = 99U;
    msg.num_frags = 89U;
    const char tmp_msg_0[] = {-49, 100, 8, 58, -31, -94, 80, -108, -28, 35, -79, 70, 52, 120, 50, 33, -48, -29, -56, 124, 25, -84, 4, -13, 77, -125, -40, -80, -53, 109, 105, 3, 15, 84, -50, 18, 69, -52, 54, 47, 9, 14, 87, 108, -65, -78, 13, -82, 3, -68, 35, -75, -114, -3, -111, 123, 111, -69, -92, -57, -124, 76, 82, -93, 107, 90, 65, 63, -120, -100, -100, -54, 57, -43, -53, 23, -44, -104, 100, -35, -58, -80, 3, -122, -97, -32, 69, -47, -109, 80, -24, 0, -49, -18, -57, -119, 126, -81, 33, -114, -28, -111, 85, -78, -126, 68, -98, -62, 65, 60, -50, -52, -97, -76, 111, 96, 45, -79, -101, -71, -71, -29, 38, -66, -55, -120, -99, -70, 8, 83, -110, 21, 53, -29, 59, -114, 79, -93, 70, -60, -109, 40, 116, 37, 78, 69, -54, -60, 119, -87, 86, -1, 59, 68, 101, 66, 111, 111, -110, -101, -123, -31, 53, -76, 19, -47, 111, 80, -103, -88, 3, -93, 11, 20, -39, -54, 87, -19, -4, 115, 52, -18, -67, -35, 4, -3, 25, -80, 17, 80, -35, 64, 90, -109, -65, 2, -6, -127, 75, -85, -78, -119, -111, -83, 115, -101, -10, -84, -114, -103, 45, 111, 73, 125, 47};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.643375026786);
    msg.setSource(12519U);
    msg.setSourceEntity(247U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(4U);
    msg.uid = 169U;
    msg.frag_number = 23U;
    msg.num_frags = 242U;
    const char tmp_msg_0[] = {113, -19, -13, -68, -114, 6, -9, 4, -37, -91, 33, 80, 91, -82, 121, 123, 31, 112, -14, 37, -110, 70, -92, -66, 32, 25, 70, -121, 27, -74, 36, 31, -101, -6, -61, 106, -14, -61, -78, 74, -108, 72, -24, -1, 78, -123, 16, 85, -48, -27, -38, -71, 36, 73, -63, -1, 98, 10, 122, 109, -37, 33, 36, 82, -80, 82, -2, 33, 116, -9, -99, 59, -10, -33, 83, 54, -53, -34, -104, 52, -14, 77, 110, 20, -117, -1, 36, 73, -98, -25, -82, -19, -112, 116, -22, -67, 24, 57, 18, -58, -113, 72, -73, -78, -49, -121, 61, -96, 24, -12, 19, 38, -27, -48, 68, -7, 70, -87, 59, -69, -40, 4, 56, 63, -69, 110, 113, 14, -81, -27, 108, 44, -67, 15, -43, 80, -76, -90, 52, 52, 101, 20, -50, -102, 36, 19, -15, -122, -58, 88, -29, 46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.786515087641);
    msg.setSource(24081U);
    msg.setSourceEntity(80U);
    msg.setDestination(63800U);
    msg.setDestinationEntity(97U);
    msg.content_type.assign("EHWVKOTQIPUTKXHTWXFMZTSJUVNDLAEWPSLCJHCPLXCMXBJXNIOGRZCQYROCRFOSICJARVQMMQYMTLBBHHLLAKQEEYKXENTMZBYDSKDRWV");
    const char tmp_msg_0[] = {90, 30, -127, 87, -66, -50, -122, 41, -118, 64, 79, -81, -90, -88, -60, 18, -48, -19, 10, 3, -66, -117, 17, -22, -11, -18, -59, 5, -96, -86, -82, -10, 101, 85, -18, -110, 112, 68, 95, 67, 75, 45, -95, -66, 83, 96, -104, 110, -4, -4, 14, 84, 65, 106, -116, -55, -40, 118, 107, 113, 16, -42, -63, -90, 126, -125, -82, 23, -1, 123, -104, -62, -83, -63, 4, 10, -18, 103, 84, -115, 20, -87, 94, -94, -23, 98, 114, -57, 100, 31, 70, 125, 113, 64, -90, -102, -83, -6, -53, -90, -2, 99, 126, 26, -9, 40, -116, 98, -3, -74, 92, 39, 36, 59, -10, -33, -127, 103, 55, 32, 66, -86, -100, -44, -13, -6, 77, 58, 101, -74, 5, 8, 114, -95, -40, 23, -7, 87, 76, 118, -111, 106, -78, -29, 97, 22, 109, -78, 90, -64};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.493156975041);
    msg.setSource(59437U);
    msg.setSourceEntity(119U);
    msg.setDestination(33017U);
    msg.setDestinationEntity(134U);
    msg.content_type.assign("NTUPEIVOFQKNQXMWMWEZ");
    const char tmp_msg_0[] = {115, -61, -94, 83, -115, 122, 79, 21, -1, -43, -126, 88, 78, -80, 8, -43, -120, 37, -55, 0, 115, -61, 60, 31, 65, -94, -18, -123, 38, -59, 91, 30, 20, 42, 0, 72, -103, -114, 123, 74, -87, -29, -8, -80, 123, -125, -54, 66, 54, -32, -95, -114, 113, -108, 117, -46, -113, 84, -65, -81, 42, -77, -100, 32, -112, 11, 8, -61, -85, -58, 30, -12, 99, 37, 21, -25, 78, 114, -122, -75, -32, 67, -19, 120, -28, 94, -89, -42, -123, 103, -22, -83, 35, -20, 73, 68, -71, 118, 126, -18, -125, 3, 82, -123, -17, 2, -99, 41, 108, 59, 103, 20, 74, -25, 22, -70, -94, -66, -73, -81, 116, -85, -62, -79, -109, 80, 105};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.439876053949);
    msg.setSource(8143U);
    msg.setSourceEntity(74U);
    msg.setDestination(43157U);
    msg.setDestinationEntity(113U);
    msg.content_type.assign("QGMQQPBGXVEPFQEBFKDMRXWELCCGJAZSLDYTFZRYXMXZOSOUCXPZBOFLUPEWQKWTEYZUWDBAQUILVHCRDFBNONMXZIGIUTKFODMGLGNHWNKSTJWCGVMSWDDBWNNCQAACJYRTMSIKNKFJKKEHRRFJUCZQXRWPTHRYHBJISOYFVGOZUANVPSDJUHWLYEIMXTHSZHLTJNUYBVOHB");
    const char tmp_msg_0[] = {-7, 69, -119, 19, -30, -127, -103, 43, -77, -72, -123, 42, -28, 5, 5, -24, 109, 93, 75, 9, 90, 6, 21, -26, 12, 18, -61, -43, -126, 60, -22, -8, 12, -80, 95, -41, 8, 59, 8, 120, 67, 32, -116};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.417271018369);
    msg.setSource(5028U);
    msg.setSourceEntity(88U);
    msg.setDestination(41061U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.132135688545);
    msg.setSource(23189U);
    msg.setSourceEntity(231U);
    msg.setDestination(34571U);
    msg.setDestinationEntity(230U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.473877471502);
    msg.setSource(28539U);
    msg.setSourceEntity(130U);
    msg.setDestination(46945U);
    msg.setDestinationEntity(9U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.578960696499);
    msg.setSource(60949U);
    msg.setSourceEntity(108U);
    msg.setDestination(15098U);
    msg.setDestinationEntity(235U);
    msg.target = 5037U;
    msg.bearing = 0.127842954817;
    msg.elevation = 0.123478812219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.834627216618);
    msg.setSource(7696U);
    msg.setSourceEntity(65U);
    msg.setDestination(51713U);
    msg.setDestinationEntity(117U);
    msg.target = 57337U;
    msg.bearing = 0.689658209252;
    msg.elevation = 0.956131288432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.945220247209);
    msg.setSource(3123U);
    msg.setSourceEntity(26U);
    msg.setDestination(36636U);
    msg.setDestinationEntity(46U);
    msg.target = 15042U;
    msg.bearing = 0.861176683994;
    msg.elevation = 0.964083725316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.405305589553);
    msg.setSource(2324U);
    msg.setSourceEntity(195U);
    msg.setDestination(21451U);
    msg.setDestinationEntity(124U);
    msg.target = 34671U;
    msg.x = 0.527882404446;
    msg.y = 0.18316508672;
    msg.z = 0.342559254376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.228992785059);
    msg.setSource(25687U);
    msg.setSourceEntity(52U);
    msg.setDestination(55822U);
    msg.setDestinationEntity(80U);
    msg.target = 47636U;
    msg.x = 0.200109426696;
    msg.y = 0.253609362048;
    msg.z = 0.736387519544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.276097146078);
    msg.setSource(28691U);
    msg.setSourceEntity(43U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(124U);
    msg.target = 42671U;
    msg.x = 0.870486322285;
    msg.y = 0.647668554172;
    msg.z = 0.235473189451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.775124623316);
    msg.setSource(44224U);
    msg.setSourceEntity(49U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(79U);
    msg.target = 41286U;
    msg.lat = 0.827486087518;
    msg.lon = 0.679441962239;
    msg.z_units = 82U;
    msg.z = 0.571280324633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.790357383922);
    msg.setSource(51699U);
    msg.setSourceEntity(90U);
    msg.setDestination(43002U);
    msg.setDestinationEntity(17U);
    msg.target = 28682U;
    msg.lat = 0.286440132911;
    msg.lon = 0.716980174182;
    msg.z_units = 237U;
    msg.z = 0.842266766994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.1698616658);
    msg.setSource(36648U);
    msg.setSourceEntity(133U);
    msg.setDestination(57934U);
    msg.setDestinationEntity(179U);
    msg.target = 14951U;
    msg.lat = 0.0582620358026;
    msg.lon = 0.278576196357;
    msg.z_units = 148U;
    msg.z = 0.997850678348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.411062192783);
    msg.setSource(5672U);
    msg.setSourceEntity(11U);
    msg.setDestination(39281U);
    msg.setDestinationEntity(7U);
    msg.locale.assign("AACGYACFRAELLWFKMEWUGERIAYGIPXVPFSQEFPBGSQODNZPBKCLJWUUEBJYTYTBWBDHRJFXOQODDVXBMSSNTDXHYVOTOTDLTXPJIFXIJ");
    const char tmp_msg_0[] = {-73, -27, 27, -49, 48, -83, 25, 80, 113, 11, 7, 57, -85, -105, -27, 13, -95, -27, 102, 12, -118, -123, -19, 13, -45, 77, 43, -39, -57, 117, -102, -85, -32, 8, 12, -117, -56, -79, -73, 114, 103, 21, 37, -106, -98, 26, 92, -50, -118, -19, -113, -82, 98, -54, -60, -16, -65, -69, -10, 103, 72, -31, -126, -18, -54, 27, 86, -26, -118, -48, 25, -123, -24, 62, 5, 77, 64, -113, 20, -94, 118, 72, 84, -14, 78, -50, -55, -3, 100, -95, 21, 56, -37, -42, 40, 34, -93, 71, 7, -78, -33, -89, 111, 113, -52, 41, 37, 77, -122, 74, -69, 86, 111, -27, 114, -16, -116, 93, 58, -72, 58, -52, 83, 116, 46, 0, -93, -92, 102, -103, -117, -81, -128, 19, -121, -64, 88, -70, 117, 102, 91, -87, -71, -8, 12, 123, 83, -31, -43, -46, -10, 42, 55, -95, 53, -59, -31, -39, -6, 92, 9, -89, 44, 103, -69, 112, 66, -53, -75, 109, 62, 27, 115, -53, -1, 85, -79, 28, -10, 84, 12, -97, 20, 2, 2, -52, 29, -33, -74, 52, 25, -76, -74, 102, -75, -121, 101, 113, -79, -49, -66, -28, -99, -64, 38, -74, 108, -11, -61, 102, 92, -34, -101, -44, 34, -39, -39, -104, 122, 76, -113, 36, 122, -66, 28, 58, -18, 87, -102, 107, -73, -54, 80, 92, -94, 83, 48, 96, -63, -29, 74, -44, 19, -69, 122, 44, -99, -114, -19, -42, -37, -68, -65, -108};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.0172479018807);
    msg.setSource(99U);
    msg.setSourceEntity(77U);
    msg.setDestination(48753U);
    msg.setDestinationEntity(233U);
    msg.locale.assign("RUXAKSNNEKHHLMGOVOFAPLEDHSJQVFSGKAGHKWQEZKSHVDOTNWOCOJIJPQLOQPRTDPZDOHYFCIQPCRGKAIJFTZMDTAAPVHJXOYBUUZFKLRXVPNSUIR");
    const char tmp_msg_0[] = {-31, 120, 55, 59, -51, -27, 0, -90, 53, 58, 45, 123, 27, 106, 85, -49, -26, 122, 26, 58, -125, 109, -69, 15, -36, -113, -45, 22, -105, -122, -23, 66, -18, -106, -120, 61, 23};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.275517750157);
    msg.setSource(42061U);
    msg.setSourceEntity(222U);
    msg.setDestination(56710U);
    msg.setDestinationEntity(226U);
    msg.locale.assign("SQJTYLNNWDPZKBZQIOHPHZUFFNTMGINQEIZDWUDXEGPLAXCFAGIKLOEGOGLCYRCDVWFWYVCMX");
    const char tmp_msg_0[] = {-93, 100, 88, -18, 26, -15, 76, 101, -74, -34, 61, 57, 73, 45, -119, -87, 11, 6, -18, 124, -88, 102, -88, 90, -15, 66, 123, 2, 0, 85, -100, -48, 123, -25, -108, 52, 82, -103, 8, 24, 48, -119, 43, 126, 83, 26, -30, 112, 61, -70, 73, 24, -21, 66, -110, 68, -122};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0374863430379);
    msg.setSource(33211U);
    msg.setSourceEntity(24U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.527970120852);
    msg.setSource(54455U);
    msg.setSourceEntity(186U);
    msg.setDestination(26635U);
    msg.setDestinationEntity(139U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.417991972486);
    msg.setSource(1283U);
    msg.setSourceEntity(29U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
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
