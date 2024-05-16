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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 41f8f44f0c06349333beaee983a7e0ae                            *
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
    msg.setTimeStamp(0.4681537370107498);
    msg.setSource(14480U);
    msg.setSourceEntity(30U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(81U);
    msg.state = 216U;
    msg.flags = 94U;
    msg.description.assign("TJSWXDWPUJPYL");

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
    msg.setTimeStamp(0.21384465584831458);
    msg.setSource(40073U);
    msg.setSourceEntity(224U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(133U);
    msg.state = 23U;
    msg.flags = 213U;
    msg.description.assign("NJTJFLQFYODHBDBFRASWYIZNRNJEAUHLGUNZXEPBLBKFAMOZOMC");

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
    msg.setTimeStamp(0.639565523094732);
    msg.setSource(3283U);
    msg.setSourceEntity(162U);
    msg.setDestination(31706U);
    msg.setDestinationEntity(10U);
    msg.state = 83U;
    msg.flags = 137U;
    msg.description.assign("KOWRRXVCIOSILXCFYGIQESHTBZHSUFGXLYTDRIHMRNGGSUOFYRLRZKKJPUNVOZDAJIJZTPVDJLDMIRLHITWAXAUIMQGCPJWMRLYJHFZQUTDPUGXQZIZNOLWMTMTBCCBPFWQTHHSBOFDVNSWXDEAEZQVXRLEJCRCYWNLMKLKXEVNUXNDHBYBCCEBECKGPSUYDANOBWP");

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
    msg.setTimeStamp(0.3872053100494043);
    msg.setSource(52601U);
    msg.setSourceEntity(84U);
    msg.setDestination(50897U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.7878232343169118);
    msg.setSource(36743U);
    msg.setSourceEntity(71U);
    msg.setDestination(34364U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.4684237574937913);
    msg.setSource(46501U);
    msg.setSourceEntity(38U);
    msg.setDestination(62648U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.28822175822936713);
    msg.setSource(15418U);
    msg.setSourceEntity(45U);
    msg.setDestination(26926U);
    msg.setDestinationEntity(0U);
    msg.id = 150U;
    msg.label.assign("SXOULPUPHGAOIFBKKKWHQJTIBQMENNTBEKAQOUDTCGZZYLEDJEGZPIDHODZFGRVGBHCERMYBXTXOEIMRHYNCBLOLTKJNTCYZHQBMFFWYJTFIKABDACZKECMSPVASAORWKWWPMXHJWCYIYYVXQVCDRUSP");
    msg.component.assign("FFHSLDFVSHHIMQEEQWCLRKYTITRVLJYZGZYVXPASJJSLHDTRTLHTIIOSOQBGUAXHNGPQICXSOQDYFUCELWCTTPXBPOMAXBTSCFBQOZPBTIEWOOGNCZRENHUCUNYXKFAKRRVHGEQBFH");
    msg.act_time = 25272U;
    msg.deact_time = 27246U;

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
    msg.setTimeStamp(0.012570148868432551);
    msg.setSource(14751U);
    msg.setSourceEntity(139U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(53U);
    msg.id = 136U;
    msg.label.assign("CMSIEBYCSMREVLKIPZMFLROHGRAWXLWTJYNHEWEHHSZRYBTHGJASYSYBYDGPAP");
    msg.component.assign("MREWESVMKGPMMJWKIRNAWXPYBFSQHTOLNGCZOOVDPRNVSHRTZZZOTLBGEYBMBUSJREEHOSTGUUGFYLBXPACJZNM");
    msg.act_time = 34135U;
    msg.deact_time = 9750U;

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
    msg.setTimeStamp(0.15058338821297923);
    msg.setSource(46444U);
    msg.setSourceEntity(190U);
    msg.setDestination(10948U);
    msg.setDestinationEntity(39U);
    msg.id = 116U;
    msg.label.assign("ZHBGARQFBXSXXOGMILJHXYRZMMFCGIRWFHNIZBUZJDPLLYCOJDDGDPCJWNWESXZWELITDXRNOQHLUYOBVFVXBIKWNIQKLXSKMYTDYARNVQNAMSTTUBTFDMKDRBHVEYCUXGWIABVGJKTVHOJCIOCEPEGLFZARGQLUAJINGDCEOVNSRTEYJQMZGCHQOURAUJWFCKSPPZLFKFJPRVCOPSWKPNZSWVUETXSESYAHYAQOYQEHPIWDMPBMQ");
    msg.component.assign("PZNPKFSAXXKKSXCYDYBTLAMBXRVLIMCBSKWAABYALMAVWXYSVAAYYMBUZRJGZUOORPZIFLXDEYJHBEMAIFOQDDCRIMGUJKRFIFENGJSPGXWPTUKBNLNHQSPFMPHUZLTHIUVOUMEJJEZXELQTGWDIUAVVSYHZGCNPFVCEZVFTDPKODG");
    msg.act_time = 44884U;
    msg.deact_time = 29302U;

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
    msg.setTimeStamp(0.8954854959252779);
    msg.setSource(18303U);
    msg.setSourceEntity(99U);
    msg.setDestination(9677U);
    msg.setDestinationEntity(44U);
    msg.id = 45U;

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
    msg.setTimeStamp(0.9480473949247606);
    msg.setSource(36992U);
    msg.setSourceEntity(193U);
    msg.setDestination(56152U);
    msg.setDestinationEntity(187U);
    msg.id = 180U;

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
    msg.setTimeStamp(0.018920247366655096);
    msg.setSource(5072U);
    msg.setSourceEntity(200U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(148U);
    msg.id = 33U;

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
    msg.setTimeStamp(0.9221151620720849);
    msg.setSource(56779U);
    msg.setSourceEntity(15U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(37U);
    msg.op = 1U;
    msg.list.assign("HPGKWJMQWZNCUVONJRTFCDBUSEAHJQQAMXTFZAJBALGKQTYRLBNMRACAUDCIWFRHVENMXQYIYKUKGNZYOGALVVKLBIEYZVEGSIETEVRV");

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
    msg.setTimeStamp(0.44802333060820965);
    msg.setSource(56008U);
    msg.setSourceEntity(62U);
    msg.setDestination(6877U);
    msg.setDestinationEntity(179U);
    msg.op = 191U;
    msg.list.assign("VVNTCJMADFTNPFFSLYYOXCIJRSWJXZXBKOYPSMSQLTODGKKUIVEUKAIMTCXNGOOHPHWKMBFKVLEZZFCVAKVFLIBARYCKCEDHSJILQWEMUUPRIBRVWXDLJABVADUAGRBNQJFHNNXFUQBIW");

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
    msg.setTimeStamp(0.9249988574143104);
    msg.setSource(9784U);
    msg.setSourceEntity(76U);
    msg.setDestination(24304U);
    msg.setDestinationEntity(154U);
    msg.op = 34U;
    msg.list.assign("KGZCJDEETTVMQSZUJMOCWOWWBHLMESTWTRQJANOLDBTPYCEJYSEWPEHCLLWPLADAJVZUQBMURURXPGFXQAYLASUYIADBKDZAJ");

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
    msg.setTimeStamp(0.1976065110307712);
    msg.setSource(47650U);
    msg.setSourceEntity(100U);
    msg.setDestination(56874U);
    msg.setDestinationEntity(59U);
    msg.value = 165U;

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
    msg.setTimeStamp(0.31959410196763915);
    msg.setSource(38251U);
    msg.setSourceEntity(207U);
    msg.setDestination(11679U);
    msg.setDestinationEntity(120U);
    msg.value = 154U;

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
    msg.setTimeStamp(0.33312234725613676);
    msg.setSource(23844U);
    msg.setSourceEntity(124U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(160U);
    msg.value = 57U;

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
    msg.setTimeStamp(0.13403265024969324);
    msg.setSource(55442U);
    msg.setSourceEntity(58U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(254U);
    msg.consumer.assign("LVNNWSVQKZNOVLPPYUVPZITEZSYOIGXNXUUHSDVVFEEPBBONCGHDYE");
    msg.message_id = 21706U;

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
    msg.setTimeStamp(0.7532613560092751);
    msg.setSource(41167U);
    msg.setSourceEntity(230U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(51U);
    msg.consumer.assign("EPKDUKKUFAEOCHQEGLIFVZZQWOHUTIDWAYQBVLAYAZTOZRXNFMYNWSNOHMXXZPKX");
    msg.message_id = 10479U;

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
    msg.setTimeStamp(0.7540654569109759);
    msg.setSource(40274U);
    msg.setSourceEntity(42U);
    msg.setDestination(43172U);
    msg.setDestinationEntity(235U);
    msg.consumer.assign("ZRWXGQNIAFYBNOKMXDMSWLMVINRCXDCGQDIBNUNDGASTDHVONYFMBOCSSOQZVGGVQGKHN");
    msg.message_id = 40683U;

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
    msg.setTimeStamp(0.005920355426198509);
    msg.setSource(43041U);
    msg.setSourceEntity(84U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(84U);
    msg.type = 177U;

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
    msg.setTimeStamp(0.4598227569671036);
    msg.setSource(39566U);
    msg.setSourceEntity(39U);
    msg.setDestination(31740U);
    msg.setDestinationEntity(58U);
    msg.type = 194U;

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
    msg.setTimeStamp(0.08014330292528449);
    msg.setSource(19829U);
    msg.setSourceEntity(113U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(162U);
    msg.type = 184U;

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
    msg.setTimeStamp(0.439616618862953);
    msg.setSource(15417U);
    msg.setSourceEntity(233U);
    msg.setDestination(39884U);
    msg.setDestinationEntity(167U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.26199588341170366);
    msg.setSource(14763U);
    msg.setSourceEntity(58U);
    msg.setDestination(34532U);
    msg.setDestinationEntity(34U);
    msg.op = 129U;

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
    msg.setTimeStamp(0.6950375343294464);
    msg.setSource(64881U);
    msg.setSourceEntity(175U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(54U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.580567214569718);
    msg.setSource(30079U);
    msg.setSourceEntity(129U);
    msg.setDestination(24957U);
    msg.setDestinationEntity(5U);
    msg.total_steps = 75U;
    msg.step_number = 23U;
    msg.step.assign("EPQYMLQROJSFGHLMZAWFBPJIJMLLFIDZGLENFRDJMOLTNBHGRXRPPRXBZWHUKZKVNEISCNVOWLTSEFDGHEAZYXVZJXUBKKPEYTBRIOYNVCAJOEVPVKMNOYCQPWWXTUVPATTVKEKIRWBDSQYQGAXIHBFOFGCDOKCIYAOBXLMZCWBQDGVUGCQFUQRCWDTXY");
    msg.flags = 206U;

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
    msg.setTimeStamp(0.6438571717120949);
    msg.setSource(21342U);
    msg.setSourceEntity(37U);
    msg.setDestination(60689U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 247U;
    msg.step_number = 213U;
    msg.step.assign("MRODMBHROXEIBLDACRSYPKZFLRKJEZBVXNYRQLXWQESYSPNKTARPUYTQGLOJIQACPTVHQJFSVVNFJJWAPEWJUOCZDYNSAUQGTCEIZVMKTENRMLPIKGGOGRAWWGHWHZJATH");
    msg.flags = 91U;

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
    msg.setTimeStamp(0.058562741321614875);
    msg.setSource(57236U);
    msg.setSourceEntity(16U);
    msg.setDestination(17651U);
    msg.setDestinationEntity(101U);
    msg.total_steps = 178U;
    msg.step_number = 104U;
    msg.step.assign("SYTDTXHBGYLHBIIUKNBTJUEARVPMZUQRQILKJZWDYQZEDAGSOTOVUQQJPQFKLMSHAGIMVYQXKXYHIPACNJFMASLDYCZVKLWMLOIIY");
    msg.flags = 171U;

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
    msg.setTimeStamp(0.9468387302926067);
    msg.setSource(51729U);
    msg.setSourceEntity(227U);
    msg.setDestination(23759U);
    msg.setDestinationEntity(112U);
    msg.state = 167U;
    msg.error.assign("FQMJCFLBSQWRDETONEHYRLMTPDCUOJVIGCOFZBQAZKRWPMIVZOEGLCAYAGDEWVFXCTYHSVSRSAIGWQBKTKXRTISVCJOXKMHFLDBFZPAGYVZHKQPXJRYGNMNWBENRMLPN");

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
    msg.setTimeStamp(0.8155242402649229);
    msg.setSource(24305U);
    msg.setSourceEntity(145U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(145U);
    msg.state = 31U;
    msg.error.assign("HXFODCNBEYGTSSDRNXMVPMHQVGMUOIKFCPUQXRQPNZGBYSMDTCJLCAAKCROHYUYFASKPLLVVRRNJFHURNBTQJXCDGWPVCYKMGUMSTGIWESXFEIXTHZIDJAMWWTOBWGLIMFFMHAWJGDGAZ");

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
    msg.setTimeStamp(0.02040455323528234);
    msg.setSource(54961U);
    msg.setSourceEntity(205U);
    msg.setDestination(12319U);
    msg.setDestinationEntity(126U);
    msg.state = 111U;
    msg.error.assign("FPHRCGOGULBRNYZISYBGDLSXVIVJTEJZTYFHCAJUKQKO");

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
    msg.setTimeStamp(0.3698827651054414);
    msg.setSource(43623U);
    msg.setSourceEntity(153U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.10517251387269566);
    msg.setSource(27280U);
    msg.setSourceEntity(134U);
    msg.setDestination(15117U);
    msg.setDestinationEntity(148U);

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
    msg.setTimeStamp(0.9379876184646726);
    msg.setSource(20434U);
    msg.setSourceEntity(114U);
    msg.setDestination(6183U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.9771082071226558);
    msg.setSource(43904U);
    msg.setSourceEntity(211U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(5U);
    msg.op = 220U;
    msg.speed_min = 0.5300729870029058;
    msg.speed_max = 0.9189192611407998;
    msg.long_accel = 0.13697373234180144;
    msg.alt_max_msl = 0.6989875043518077;
    msg.dive_fraction_max = 0.9110331825882065;
    msg.climb_fraction_max = 0.35279799638897247;
    msg.bank_max = 0.38900606890865685;
    msg.p_max = 0.8619309137359525;
    msg.pitch_min = 0.10557783590499614;
    msg.pitch_max = 0.8706583220332373;
    msg.q_max = 0.9187948670960935;
    msg.g_min = 0.39654097743993755;
    msg.g_max = 0.225931650612901;
    msg.g_lat_max = 0.39597855559503536;
    msg.rpm_min = 0.3630588675779215;
    msg.rpm_max = 0.045179509135195084;
    msg.rpm_rate_max = 0.32573330094338415;

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
    msg.setTimeStamp(0.9880281091605626);
    msg.setSource(3223U);
    msg.setSourceEntity(115U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(194U);
    msg.op = 43U;
    msg.speed_min = 0.14127762256941723;
    msg.speed_max = 0.5805121521381706;
    msg.long_accel = 0.23835459473817666;
    msg.alt_max_msl = 0.8624367370279756;
    msg.dive_fraction_max = 0.6571737851279932;
    msg.climb_fraction_max = 0.49140646722421477;
    msg.bank_max = 0.25723489234259533;
    msg.p_max = 0.7527729444815963;
    msg.pitch_min = 0.47374541845574625;
    msg.pitch_max = 0.8369488476521679;
    msg.q_max = 0.38767790971284377;
    msg.g_min = 0.2138213372291804;
    msg.g_max = 0.611263927449194;
    msg.g_lat_max = 0.6135230131851914;
    msg.rpm_min = 0.12668809244284485;
    msg.rpm_max = 0.8934503586319609;
    msg.rpm_rate_max = 0.29426475468711133;

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
    msg.setTimeStamp(0.13730465787288926);
    msg.setSource(63973U);
    msg.setSourceEntity(100U);
    msg.setDestination(23639U);
    msg.setDestinationEntity(217U);
    msg.op = 152U;
    msg.speed_min = 0.3832769927117311;
    msg.speed_max = 0.9672544931908146;
    msg.long_accel = 0.9073811187496433;
    msg.alt_max_msl = 0.8809200622675605;
    msg.dive_fraction_max = 0.3006002187093004;
    msg.climb_fraction_max = 0.542521167497251;
    msg.bank_max = 0.9219851148442655;
    msg.p_max = 0.14325078856939155;
    msg.pitch_min = 0.4205617977941418;
    msg.pitch_max = 0.8873378846063206;
    msg.q_max = 0.8624853628102802;
    msg.g_min = 0.9100510771053216;
    msg.g_max = 0.586642333574036;
    msg.g_lat_max = 0.42391980233457527;
    msg.rpm_min = 0.4321863585403636;
    msg.rpm_max = 0.5948732256401602;
    msg.rpm_rate_max = 0.8849250494010114;

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
    msg.setTimeStamp(0.3810236157471488);
    msg.setSource(45520U);
    msg.setSourceEntity(54U);
    msg.setDestination(40828U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.6467888026794766);
    msg.setSource(33902U);
    msg.setSourceEntity(22U);
    msg.setDestination(21192U);
    msg.setDestinationEntity(197U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 244U;
    tmp_msg_0.eta = 28640U;
    tmp_msg_0.info.assign("RDIAFAKGYSEJSXVA");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.117882577161461);
    msg.setSource(11984U);
    msg.setSourceEntity(99U);
    msg.setDestination(6620U);
    msg.setDestinationEntity(85U);
    IMC::TransmissionStatus tmp_msg_0;
    tmp_msg_0.req_id = 29228U;
    tmp_msg_0.status = 106U;
    tmp_msg_0.range = 0.5368693701580041;
    tmp_msg_0.info.assign("FKVOJDYUGDMKNYZYJDUCJILCBGWEODRYIR");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.899350310740278);
    msg.setSource(43624U);
    msg.setSourceEntity(96U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.21427113977295587;
    msg.lon = 0.0630035417468493;
    msg.height = 0.5920845263104261;
    msg.x = 0.22613264483184536;
    msg.y = 0.19474443053855306;
    msg.z = 0.0034680332970898897;
    msg.phi = 0.7974997015339391;
    msg.theta = 0.08607218812477035;
    msg.psi = 0.9221282142405305;
    msg.u = 0.7160921893196256;
    msg.v = 0.1753343554072878;
    msg.w = 0.1849795926050274;
    msg.p = 0.12128526150981345;
    msg.q = 0.9376450269976208;
    msg.r = 0.5914161680756841;
    msg.svx = 0.3943394433562417;
    msg.svy = 0.36439612227248686;
    msg.svz = 0.09723002064642594;

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
    msg.setTimeStamp(0.08931258702608635);
    msg.setSource(418U);
    msg.setSourceEntity(144U);
    msg.setDestination(16495U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.07683881717152852;
    msg.lon = 0.7799304006889625;
    msg.height = 0.2899364895489651;
    msg.x = 0.7167080857579647;
    msg.y = 0.9550304067479624;
    msg.z = 0.45386140218652304;
    msg.phi = 0.7049668048057994;
    msg.theta = 0.9629774472645164;
    msg.psi = 0.7454062613565212;
    msg.u = 0.08336234014060817;
    msg.v = 0.7610943302834551;
    msg.w = 0.1328382221695994;
    msg.p = 0.9931557380889636;
    msg.q = 0.6424031457932221;
    msg.r = 0.0509706926699961;
    msg.svx = 0.5739874269919181;
    msg.svy = 0.720394071584984;
    msg.svz = 0.5318349650802127;

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
    msg.setTimeStamp(0.0202394780829509);
    msg.setSource(17400U);
    msg.setSourceEntity(21U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.8328377742387582;
    msg.lon = 0.9070297150181594;
    msg.height = 0.6000588365906353;
    msg.x = 0.13196594263235184;
    msg.y = 0.4911092790427526;
    msg.z = 0.9928124899135632;
    msg.phi = 0.8289088110113529;
    msg.theta = 0.7908407949020919;
    msg.psi = 0.35749857596347046;
    msg.u = 0.018309769953431254;
    msg.v = 0.5213804963826022;
    msg.w = 0.017016519551502074;
    msg.p = 0.836655216127882;
    msg.q = 0.6446073936109278;
    msg.r = 0.8764771016045045;
    msg.svx = 0.23467490316168882;
    msg.svy = 0.6637963337869714;
    msg.svz = 0.16635077701016898;

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
    msg.setTimeStamp(0.7118500861807214);
    msg.setSource(12761U);
    msg.setSourceEntity(238U);
    msg.setDestination(34123U);
    msg.setDestinationEntity(160U);
    msg.op = 148U;
    msg.entities.assign("VXAUHCFKYRZAFITPETCJXRYOYGBFWHHYTVREMTFVPXERREWIVYSBEZXNGQVZBPXKPGQTDUWVPSMYROUKMLUWGOGZQUECKKLIORTIVYFNBYOBTBKHCAIHNGIHOCPK");

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
    msg.setTimeStamp(0.9597710548665863);
    msg.setSource(26329U);
    msg.setSourceEntity(171U);
    msg.setDestination(20279U);
    msg.setDestinationEntity(176U);
    msg.op = 222U;
    msg.entities.assign("NPMEKUSDRJGUNQKCYADTJCRKMKHPGAFQLBXXDCUYYZUKMUHOSWOSYVOGTVCVJSPBSRUOUQOBNEKLXGCJCRWTXPQLTCTABGIAWTJDQFXGWSCQHJRPQVDBQFPBGHAXMVCEIWEDLLKIELZIKA");

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
    msg.setTimeStamp(0.7429750270524048);
    msg.setSource(46323U);
    msg.setSourceEntity(99U);
    msg.setDestination(9511U);
    msg.setDestinationEntity(168U);
    msg.op = 101U;
    msg.entities.assign("SHUBOIAOXUUWNARQNASAUYCTBBTYMRYDGMBBBLCMPQDJOLHDJNXFEOVELWQMPPDLCJGZCDEBZHOSY");

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
    msg.setTimeStamp(0.01639473114631007);
    msg.setSource(25072U);
    msg.setSourceEntity(52U);
    msg.setDestination(27410U);
    msg.setDestinationEntity(174U);
    msg.type = 32U;
    msg.speed = 8888U;
    const signed char tmp_msg_0[] = {-102, 19, 49, -87, -30, -61, 12, 43, 70, 106, -59, 49, 95, 36, 97, 13, -44, 40, -79, -102, 68, 0, 61, 105, -4, -37, 65, -30, 50, -32, 68, -112, 96, 33, 92, -112, 38, -114, -100, -83, -68, 35, -53, -114, 2, -118, 71, -93, -90, 93, 51, -91, 81, -17, 22, 88, 65, -69, 58, -57, 100, -118, 118, 78, -111, -102, 125, 55, -18, -92, -93, -63, 56, 4, 97, 12, -11, 118, -54, 0, 26, 113, -109, -49, -55, 70, -14, -64, 118, 115, 16, -65, -79, 40, 96, 97, -73, 108, 91, 75, 26, -112, 120, 26, 91, 122, -19, 25, -117, 93, -17, 25, 14, 24, 97, -69, -61, 103, 99, -70, -122, -5, 58, -90, -104, -29, 65, 77, 99, 23, 30, -64, 125, 113, -45, -114, -100, 92, -31, -123, -31, 101, -15, 117, -10, -97, 35, 101, 85, -13, 117, 46, -122, -33, -10, -125, -103, 15, 44, 9, 117, -3, -11, -11, -90, -9, -60, -123, 101, 55, -43, -60, 88, -13, -72, 109, 41, 15, -86, -20, -15, 79, -3, 16, 6, 90, -118, -51, 63, 10, 113, 32, 89, 5, -24, 43, 3};
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
    msg.setTimeStamp(0.7265234097114985);
    msg.setSource(5863U);
    msg.setSourceEntity(235U);
    msg.setDestination(5592U);
    msg.setDestinationEntity(208U);
    msg.type = 114U;
    msg.speed = 26626U;
    const signed char tmp_msg_0[] = {-6, 42, -89, 78, -3, -123, -41, 113, -86, -13, 118, -18, -85, 32, -94, -53, 41, -28, 22, 116, 116, 3, -11, -95, -119, 116, -102, -33, 118, 108, -118, 31, -100, -78, -53, -72, -57, -111, 69, -127, 11, -98, -111, 11, 98, -46, -98, -114, -30, -7, -81, -59, 97, -44, -41, -101, -123, 90, -126, 27, -85, 24, -108, 63, -25, 11, 114, -120, 107, 118, 11, 116, -127, 20, -44, 83, 8, 30, -31, -51, -48, -71, 118, 71, 76, -126, 67, 43, -10, -111, -72, -67, -73, -8, 6, -91, -122, -82, -39, 18, -19, -125, -37, -13, -100, 21, -12, 89, 24};
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
    msg.setTimeStamp(0.08261356223679595);
    msg.setSource(19125U);
    msg.setSourceEntity(204U);
    msg.setDestination(34288U);
    msg.setDestinationEntity(127U);
    msg.type = 249U;
    msg.speed = 29264U;
    const signed char tmp_msg_0[] = {-72, -99, -55, -94, -57, 63, 30, 53, 97, -102, -3, -84, -78, -110, -51, -63, -97, -58, -40, -47, -110, 69, -34, 114, 83, 6, -128, 48, 96, -23, 16, 18, -59, -77, 40, -87, 121, 82, 28, 99, 47, 124, -33, -70, -85, 33, 1, -38, 43, 50, 36, 101, 126, -22, 74, -57, 16, -19, 23, -78, 120, 25, 48, 41, 101, -67, 37, -30, 119, -86, 24, 106, 95, 106, -40, -96, -122, 35, 47, -123, -68, 82, 106, -55, 27, 38, 67, -10, -10, 98, 106, -44, 73, -4, -80, 12, 118, -55, 61, -20, 17, 103, -88, 122, 55, 30, -118, -51, -50, -84, -78, -12, -103, 60, 1, -2, 19, -102, -80, 4, -68, 110, 56, -18, 88, -42, 7, -58, -107, -103, -57, -91, 29, -95, 61, 65, -116, 49, 14, -71, -108, 26, 126, 71, 81, 99, 43, 124, -44, -45, 53, -46, 18, -110, -25, 125, 14, -32, 52, -99, -82, -128, 20, 38, -7, -96, 112, -93, -73, -41, 42, 114, -103, -66, 107, -48, 71, -71, -60, 99, -74, -77, -103, 61, -14, 3, 8, 2};
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
    msg.setTimeStamp(0.14020874614255685);
    msg.setSource(21951U);
    msg.setSourceEntity(23U);
    msg.setDestination(35336U);
    msg.setDestinationEntity(183U);
    msg.op = 71U;
    msg.tas2acc_pgain = 0.5711181380988265;
    msg.bank2p_pgain = 0.5422976736114354;

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
    msg.setTimeStamp(0.5480985544112388);
    msg.setSource(47639U);
    msg.setSourceEntity(133U);
    msg.setDestination(42537U);
    msg.setDestinationEntity(214U);
    msg.op = 82U;
    msg.tas2acc_pgain = 0.49983055082815553;
    msg.bank2p_pgain = 0.9145935675553488;

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
    msg.setTimeStamp(0.328926959857456);
    msg.setSource(39215U);
    msg.setSourceEntity(18U);
    msg.setDestination(46398U);
    msg.setDestinationEntity(68U);
    msg.op = 230U;
    msg.tas2acc_pgain = 0.22841688177860064;
    msg.bank2p_pgain = 0.04417318079446675;

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
    msg.setTimeStamp(0.6885575649047481);
    msg.setSource(41563U);
    msg.setSourceEntity(203U);
    msg.setDestination(15679U);
    msg.setDestinationEntity(87U);
    msg.available = 2902471387U;
    msg.value = 234U;

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
    msg.setTimeStamp(0.68750626468552);
    msg.setSource(6719U);
    msg.setSourceEntity(153U);
    msg.setDestination(59415U);
    msg.setDestinationEntity(204U);
    msg.available = 2798942959U;
    msg.value = 127U;

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
    msg.setTimeStamp(0.10602861709778244);
    msg.setSource(27889U);
    msg.setSourceEntity(147U);
    msg.setDestination(10137U);
    msg.setDestinationEntity(201U);
    msg.available = 2998279011U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.7690834118020061);
    msg.setSource(469U);
    msg.setSourceEntity(185U);
    msg.setDestination(11333U);
    msg.setDestinationEntity(63U);
    msg.op = 193U;
    msg.snapshot.assign("YEKDMTRUGZQZAAIZMYNMAKAFWCUDKYJPIZM");
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4363460385179714;
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
    msg.setTimeStamp(0.559557422230182);
    msg.setSource(4622U);
    msg.setSourceEntity(12U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(199U);
    msg.op = 118U;
    msg.snapshot.assign("TYRMZTIBNZHDATDTPYUXGCHKFOOWIESMWEWJCMUWDQWVPMPURIXGQ");
    IMC::Phycoerythrin tmp_msg_0;
    tmp_msg_0.value = 0.2323892952426858;
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
    msg.setTimeStamp(0.5568051986215435);
    msg.setSource(20395U);
    msg.setSourceEntity(176U);
    msg.setDestination(51399U);
    msg.setDestinationEntity(217U);
    msg.op = 152U;
    msg.snapshot.assign("ZOHFLTYPZSKZJWIPZTKWKAKJJURPGTCNQRBVPYXURKETNGJKMRIUSAKOWCSNRXVMEJQWCHBPAAQQEXBYWFETEFHYCDKHTFQCXOEDSUYFOOLJVWZBGHKHMXKUMJZQEBUQDOPHLWVZMFXCUVLZVQAQIOYYORSDG");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3797476621U;
    tmp_msg_0.start_lat = 0.8051871209343945;
    tmp_msg_0.start_lon = 0.4763717285499781;
    tmp_msg_0.start_z = 0.7214538337489428;
    tmp_msg_0.start_z_units = 208U;
    tmp_msg_0.end_lat = 0.5546924831599839;
    tmp_msg_0.end_lon = 0.4809237258135748;
    tmp_msg_0.end_z = 0.7082491810769975;
    tmp_msg_0.end_z_units = 127U;
    tmp_msg_0.speed = 0.1442606918579883;
    tmp_msg_0.speed_units = 91U;
    tmp_msg_0.lradius = 0.49058974982864956;
    tmp_msg_0.flags = 120U;
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
    msg.setTimeStamp(0.23750521093367594);
    msg.setSource(38661U);
    msg.setSourceEntity(100U);
    msg.setDestination(44864U);
    msg.setDestinationEntity(95U);
    msg.op = 40U;
    msg.name.assign("UPDYCNEXFHGQWSTILXVDZCRMGAKTUIFRQAWNMJGSCUJBOVKDOGZYXCPVRIREXYWKFTQVOGIHQMQWZSFNMSKXBWWIWCBIBTWSNVZAMFZLHKFWLEXAJHVSCBPGPNNGLPLYXBPEBKOBFSPAQLQBNSIWKFNJTAIAPHHQLJHDULMTPYTIKAYFXUZEJYOVTOZRKNBDYVJMULKMOSRRHPHJJCAMVEODEDDITRHXZJUFQGCCUOGZGYERDUNDCLOM");

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
    msg.setTimeStamp(0.6180699792940499);
    msg.setSource(46538U);
    msg.setSourceEntity(65U);
    msg.setDestination(21500U);
    msg.setDestinationEntity(52U);
    msg.op = 12U;
    msg.name.assign("MDBSDTJKZMTPJZZGXSIMOVHHNGXSDXDALQARAALQSRTCBFWGDVFNSSNKYPWXNGAPGYWHCJZYKOQJHLYWIPLTBQPVVAWWECLSJVPPHKEOGSKUONNLRIVITHYFIYKGFKDZIXBMORK");

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
    msg.setTimeStamp(0.32703148161673257);
    msg.setSource(27600U);
    msg.setSourceEntity(16U);
    msg.setDestination(61674U);
    msg.setDestinationEntity(45U);
    msg.op = 124U;
    msg.name.assign("DRSJZHVZDAWMKTBWBBUXYDYBQTQLGDZAWXSDRMLBJQJBVOWYCZWKFYZEVYHMCFFISKSUZTOLUWUCSQWQONQNCSLAETGHOBNRPRJSKVYJPVCEBJBIIRAZOCEESFCKHWVOOFXDKZRGVHTVOUZONGLHLGUZFLERQECMNYSAMHPLEKQMPMYJMDSJXPWHNFIJDNUVIRFPHTXUIGUNBVGCJAETGQKAMXGXPNKXMGRXIPDPEFXROCQYDTU");

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
    msg.setTimeStamp(0.0881180708678101);
    msg.setSource(15173U);
    msg.setSourceEntity(168U);
    msg.setDestination(60775U);
    msg.setDestinationEntity(60U);
    msg.type = 45U;
    msg.htime = 0.02854548373482968;
    msg.context.assign("CQARBZJYLXAEFIZRSPZXOQRWOORSPDNXANCPWCKZTYUHGTGBJGNTWRJJOGTACFILHBKLKNIANYMYIPTBAFJZIWHQYUNVUACTVHVBUMCOXQSEMFKJPGHHEBVHEMPDTCQFMDRCSECSVNQWHRXIHDWYVNKSXIVVLVSLOLBYRXDUKLGGZEBRSMQAOKXIAFDTWZZPZLEYQWDNQYJCOMVSOPH");
    msg.text.assign("WKRYXVDAUTAORDZKGJJTAWWTZATKSPBFLDQGJPRKEMCUCMLFFXVZXEFNIHWCEIJAIRSHMHOMDXPCBKCPNXVIVKZBJPPAGYWBHRPSCRFWTBUQHXTONRWZZKEFHRJTMUCHIXVSGLLDGVSYQZRBOSICXDLCLLTQIEPGOZ");

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
    msg.setTimeStamp(0.5701532293809761);
    msg.setSource(26879U);
    msg.setSourceEntity(210U);
    msg.setDestination(41076U);
    msg.setDestinationEntity(249U);
    msg.type = 1U;
    msg.htime = 0.3367836154190853;
    msg.context.assign("JOQDNVFTAGAWBJPBLILEHRRAOVZ");
    msg.text.assign("VZNGZNEPFFRTTWUYSBGMQHOFHPJHZBIYXSDSGQDNBNOGXZFXNOVUJTQZKWFXBLEKROROPBQKDVSCAEJONEQURQXRKVIWEFOWOWQETYYXKKZMCAYIMPAMMNEXCODZGDFMGUEHRINCYULVHULEJHWKPCFWJRLCAZVIGJDURHAHBNQSRSYQHAUZMVWPHJLIFDUMPAIOXAPKFXPMSYKWGJQCBIC");

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
    msg.setTimeStamp(0.9536381187934444);
    msg.setSource(32773U);
    msg.setSourceEntity(55U);
    msg.setDestination(5267U);
    msg.setDestinationEntity(250U);
    msg.type = 30U;
    msg.htime = 0.132782640917541;
    msg.context.assign("KQVDTKHLXJCHQJRYZRWBTUGGMDQEPZFTOSBWFYELNCXPZVAINWMROSKQYCUHDVHHWFEZOKGFCCJMUQACAVUE");
    msg.text.assign("VVXVKIEYSOHSRPMSCRUBFPRVSFILNXRVNNUCXAJBLNBRSYNGTVHCOPMMQXIOWAZBDFXNOMZDXSPSGGQTQFCKJVCWEHXEHEFBIICNKDAXUGUPZMYUYYDWHVIQAGBOZCL");

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
    msg.setTimeStamp(0.8320191325086276);
    msg.setSource(9039U);
    msg.setSourceEntity(123U);
    msg.setDestination(19873U);
    msg.setDestinationEntity(94U);
    msg.command = 67U;
    msg.htime = 0.8678146290579242;

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
    msg.setTimeStamp(0.045126179005082756);
    msg.setSource(41U);
    msg.setSourceEntity(203U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(51U);
    msg.command = 31U;
    msg.htime = 0.10923202086076478;

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
    msg.setTimeStamp(0.13191002301277166);
    msg.setSource(7352U);
    msg.setSourceEntity(32U);
    msg.setDestination(27603U);
    msg.setDestinationEntity(83U);
    msg.command = 115U;
    msg.htime = 0.6376831957308404;

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
    msg.setTimeStamp(0.20896319981526623);
    msg.setSource(3058U);
    msg.setSourceEntity(114U);
    msg.setDestination(42848U);
    msg.setDestinationEntity(153U);
    msg.op = 3U;
    msg.file.assign("ZIDPGDSPPVKQORVHWXMERXONHGBGBEHPOARPEMOCBJMWZGYISDXXMJLZTCTIRIDBEXFYLTFYGRLQZFKPSRNYFKDYTTYNUUKVUWIPNRFCMZUPZEIXCFJGXUQSUBODFHJBAREMUASVYCONHSJQVVEBAUHPZUJKEGDTERTLFR");

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
    msg.setTimeStamp(0.8029213579160032);
    msg.setSource(43352U);
    msg.setSourceEntity(183U);
    msg.setDestination(50125U);
    msg.setDestinationEntity(133U);
    msg.op = 67U;
    msg.file.assign("AVLDGLWAEOFFGGKMTSLGXNMNYXCJKRGPJMITJMXPQCJ");

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
    msg.setTimeStamp(0.30091721168491803);
    msg.setSource(24331U);
    msg.setSourceEntity(89U);
    msg.setDestination(22017U);
    msg.setDestinationEntity(216U);
    msg.op = 167U;
    msg.file.assign("HPDJUDFJMMYBZAFCWQQEWGEERUZVUGKKTZVQBJGRRKWXYNBJXNLADHMLGKXYNZTEQWOOAHNCLKSIRULYERQQSUEPTTKXOCXMSHDWKDIVAGRHHCCEBXYQMYSYMZCARHPFZJMIYCSIABJFSUWFYVHVJGIFLWOGCFTVOQNNGKZITH");

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
    msg.setTimeStamp(0.6779625492283623);
    msg.setSource(19742U);
    msg.setSourceEntity(143U);
    msg.setDestination(20977U);
    msg.setDestinationEntity(230U);
    msg.op = 219U;
    msg.clock = 0.3709487505308039;
    msg.tz = -61;

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
    msg.setTimeStamp(0.1286435421834965);
    msg.setSource(45153U);
    msg.setSourceEntity(7U);
    msg.setDestination(23109U);
    msg.setDestinationEntity(209U);
    msg.op = 160U;
    msg.clock = 0.1142216889654698;
    msg.tz = 86;

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
    msg.setTimeStamp(0.22721313808012433);
    msg.setSource(52183U);
    msg.setSourceEntity(221U);
    msg.setDestination(41993U);
    msg.setDestinationEntity(201U);
    msg.op = 82U;
    msg.clock = 0.7330321250682098;
    msg.tz = -42;

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
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.44443968871683215);
    msg.setSource(23321U);
    msg.setSourceEntity(102U);
    msg.setDestination(63998U);
    msg.setDestinationEntity(65U);
    msg.conductivity = 0.39198796115413825;
    msg.temperature = 0.7371440883165131;
    msg.depth = 0.8220887036741873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.8496881537177119);
    msg.setSource(52915U);
    msg.setSourceEntity(85U);
    msg.setDestination(7393U);
    msg.setDestinationEntity(111U);
    msg.conductivity = 0.24432562016349713;
    msg.temperature = 0.38736885538427346;
    msg.depth = 0.8712541786257497;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.9807825462207741);
    msg.setSource(33463U);
    msg.setSourceEntity(245U);
    msg.setDestination(46657U);
    msg.setDestinationEntity(151U);
    msg.conductivity = 0.4281537205627126;
    msg.temperature = 0.10743587748727101;
    msg.depth = 0.31439821736865625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.12450158928077115);
    msg.setSource(36463U);
    msg.setSourceEntity(203U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(171U);
    msg.altitude = 0.8659601024522335;
    msg.roll = 2753U;
    msg.pitch = 37873U;
    msg.yaw = 7918U;
    msg.speed = -16128;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.7862786868807822);
    msg.setSource(46676U);
    msg.setSourceEntity(199U);
    msg.setDestination(2242U);
    msg.setDestinationEntity(127U);
    msg.altitude = 0.4217631825513527;
    msg.roll = 24766U;
    msg.pitch = 17701U;
    msg.yaw = 15324U;
    msg.speed = 29737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.22740909497744644);
    msg.setSource(64067U);
    msg.setSourceEntity(19U);
    msg.setDestination(10501U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.4377933477274215;
    msg.roll = 51335U;
    msg.pitch = 37710U;
    msg.yaw = 36062U;
    msg.speed = -14700;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.9460186827448139);
    msg.setSource(32926U);
    msg.setSourceEntity(188U);
    msg.setDestination(38682U);
    msg.setDestinationEntity(122U);
    msg.altitude = 0.7892826976486734;
    msg.width = 0.7333892303070713;
    msg.length = 0.2507238944089413;
    msg.bearing = 0.6795414209981315;
    msg.pxl = -22443;
    msg.encoding = 154U;
    const signed char tmp_msg_0[] = {-27, -40, -106, 67, -50, 25, -123, -57, 80, -103, -11, 35, -92, -68, 50, 56, 123, 46, 37, 74, 83, -14, -124, -93, -42, -13, 102, 10, 5, -72, -78};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.711168643067879);
    msg.setSource(21125U);
    msg.setSourceEntity(253U);
    msg.setDestination(7079U);
    msg.setDestinationEntity(113U);
    msg.altitude = 0.24512584142629812;
    msg.width = 0.7847196498022886;
    msg.length = 0.706467728965654;
    msg.bearing = 0.6529429121026518;
    msg.pxl = 5314;
    msg.encoding = 73U;
    const signed char tmp_msg_0[] = {-109, 70, -75, 98, 123, 114, 16, 20, -3, -105, 45, -68, -47, 23, 27, 26, 125, 51, 4, -97, -16, -39, -26, 37, -98, 119, 88, -128, -87, -43, -95, -111, 53, 105, -7, -128, -122, 44, 111, 64, -99, -126, 17, 91, 29, -17, 86, -41, -85, 47, 22, 61, 86, -72, -117, -7, -104, 53, -59, 30, 44, -95, -103, 95, 110, -14, 32, 90, 43, 121, 108, -110, -41, -110, 112, 51, -98, 29, -93, 122, -87, 10, -74, -121, -52, 19, 124, 118, 53, 110, 49, -121, 62, -118, 23, 43, 36, 2, 70, -113, -123, -38, -59, -97, -73, 80, -67};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.8268533519975728);
    msg.setSource(7852U);
    msg.setSourceEntity(32U);
    msg.setDestination(42595U);
    msg.setDestinationEntity(11U);
    msg.altitude = 0.06220066082793774;
    msg.width = 0.19493940595930737;
    msg.length = 0.6238714552564604;
    msg.bearing = 0.2025666755505603;
    msg.pxl = -26280;
    msg.encoding = 68U;
    const signed char tmp_msg_0[] = {-59, 98, 95, 66, -1, 75, -11, -36, -5, 11, -72, -78, -110, 26, 56, -73, 90, -104, -128, 64, -40, 85, -69, -52, -38, 82, 34, 88, -12, 32, -115, -113, -17, 85, -115, 41, 3};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.0823966714673312);
    msg.setSource(35064U);
    msg.setSourceEntity(14U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(63U);
    msg.text.assign("YJPJLXXGYKOJHEWDIUTZWYTSRHPARRPBMNKJYAIMGZNMKXOINJLHLWTBZWDFIABHSNBVBFOCFVEALNSQJBPW");
    msg.type = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5235310279644112);
    msg.setSource(6585U);
    msg.setSourceEntity(246U);
    msg.setDestination(29412U);
    msg.setDestinationEntity(22U);
    msg.text.assign("PJSOHNLHNRXJXKFQTCYBHLRHHVGXXAJMWTPZYTJCOHYTZNEZPWVPWLCHMBGNAEHBROMCJWQXKSLZGSQXGUDARTEDQYBAPKUIJEQSXOWAAOLDUBNIMFKWWDAQVTOSAQGFPOFRTLAYHIZVPXOPMFRMKQDPCXTSPRMQSJTUNNGMKBFNUCGSXELZIJRFWHTMYVBEFKNRYVYEMDVDICZZULDUZRYISUKJBZGEGOVLJWFCSIBEGEAKVUYLDKIDCCUIFW");
    msg.type = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.8384318471278747);
    msg.setSource(37891U);
    msg.setSourceEntity(155U);
    msg.setDestination(11598U);
    msg.setDestinationEntity(55U);
    msg.text.assign("JQFEGIYVPRBQPDZYURELKRNFNEYTXCFACCOMNZZZVKZUBRWSOTROBGVXEYEBJQEAXJHFXYMBPNHVINTCIDODOKZWYEMSUEAHZETJMLAGBSAQBDGRKQNNFSAHYKUTZONOKCJURDRIXDWWMRLGPQXGLNGPTIJHWEFICLVADCSUUTQYRANBGPIKDVVZSSJPZJLSUXGJOXKMWPOQDLWVFQBBTODMYFMTHXLWMSPHXSKLQHLHVAVWUMT");
    msg.type = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.3398101730052002);
    msg.setSource(41641U);
    msg.setSourceEntity(242U);
    msg.setDestination(26664U);
    msg.setDestinationEntity(152U);
    msg.parameter = 33U;
    msg.numsamples = 36U;
    msg.lat = 0.07797148828439227;
    msg.lon = 0.0756116413214657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.14052933594166117);
    msg.setSource(2019U);
    msg.setSourceEntity(125U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(195U);
    msg.parameter = 91U;
    msg.numsamples = 88U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 58940U;
    tmp_msg_0.avg = 0.25189236420544614;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.24532858614478148;
    msg.lon = 0.6209552321697563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.972408743585553);
    msg.setSource(31814U);
    msg.setSourceEntity(15U);
    msg.setDestination(29734U);
    msg.setDestinationEntity(225U);
    msg.parameter = 150U;
    msg.numsamples = 128U;
    msg.lat = 0.7513124864162847;
    msg.lon = 0.011624861270473241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.16810111721401177);
    msg.setSource(4511U);
    msg.setSourceEntity(64U);
    msg.setDestination(25570U);
    msg.setDestinationEntity(112U);
    msg.depth = 37421U;
    msg.avg = 0.8255425331756023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5627346022176946);
    msg.setSource(105U);
    msg.setSourceEntity(112U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(210U);
    msg.depth = 9433U;
    msg.avg = 0.7825724769366127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.7804763680304375);
    msg.setSource(27285U);
    msg.setSourceEntity(70U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(130U);
    msg.depth = 6011U;
    msg.avg = 0.7209888570932417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
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
    msg.setTimeStamp(0.005583928370735958);
    msg.setSource(54204U);
    msg.setSourceEntity(229U);
    msg.setDestination(24224U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.027126939539926842);
    msg.setSource(14413U);
    msg.setSourceEntity(69U);
    msg.setDestination(4524U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.5390180686906986);
    msg.setSource(32063U);
    msg.setSourceEntity(202U);
    msg.setDestination(38516U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.16431044970851705);
    msg.setSource(53530U);
    msg.setSourceEntity(7U);
    msg.setDestination(28950U);
    msg.setDestinationEntity(46U);
    msg.sys_name.assign("DONXMYWAMTNLIXRYCKJJTWEGIAXTBPCYUKGHUZGDLCIHGQZVNIRETJCUNPYWFRTVLBXMZWTFDSMQXSEZXGPYEGGLZKQOIBJEHYPFJNHCVPFWRUPPPFQCDDKVDIK");
    msg.sys_type = 167U;
    msg.owner = 49914U;
    msg.lat = 0.8260059222114332;
    msg.lon = 0.776352860163035;
    msg.height = 0.7553592189248687;
    msg.services.assign("ZXHXLFLOGMVRBNHTRVZJUPVDHXQYIWHPMDXQRSTVGQH");

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
    msg.setTimeStamp(0.01991557973327507);
    msg.setSource(20284U);
    msg.setSourceEntity(68U);
    msg.setDestination(31545U);
    msg.setDestinationEntity(190U);
    msg.sys_name.assign("XEWSKVWMETZNOQQOTLJNUIXNSPRXQRFXYLJJTZBGQVIQFR");
    msg.sys_type = 155U;
    msg.owner = 55580U;
    msg.lat = 0.6827576582351216;
    msg.lon = 0.8954168547405674;
    msg.height = 0.1133658083712048;
    msg.services.assign("NYTADOTIJWKQPSHRLQVLTMASNYTGAVRCKDBORYYEZFJQKJPNJIWLMFWSVACDEEBZXNUXQHDIJEIWIEGZLYXMRFWNEDOPJPTHGBIUPHLVSGXRADFPBFSSVXCSWTROPONTIOGDQCUGXERHYKKFMKTBUUUAYJCHPUGRCBWFBVDIUHHUZSPKQDZFRAWVLMZNUXLCZKGKAMMCENSZLTBBEVCSDMQVJBFI");

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
    msg.setTimeStamp(0.32992890528457175);
    msg.setSource(27938U);
    msg.setSourceEntity(82U);
    msg.setDestination(54263U);
    msg.setDestinationEntity(209U);
    msg.sys_name.assign("CDGSZIZAXYAEVFDYEZPQ");
    msg.sys_type = 171U;
    msg.owner = 24767U;
    msg.lat = 0.9839469922820445;
    msg.lon = 0.6224976385994011;
    msg.height = 0.7896931792179499;
    msg.services.assign("ITFNFYEQQUJOECWUNDYRRKXBZWLZXFJAAKJEZSGERMFCSOLMPMGALNNRDNYNUPLJQRTTKHXQOBOSRREQGBPSVFYIXWBETXPOZUXNGZJYTWXHWMSBAMBIDXWQBSHLMZKHCUDCOGQLTLYGVIWUNOMNVBYJVHJFIHAYJYSPLOTAIKS");

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
    msg.setTimeStamp(0.6793427180165243);
    msg.setSource(24631U);
    msg.setSourceEntity(163U);
    msg.setDestination(54596U);
    msg.setDestinationEntity(22U);
    msg.service.assign("GHIXDMWIVTSOMDBSNGIUESKATRKXCIWXMDMSAPZCUZIKRRALEHRZKHJGBGCUPOYRBYDNZDSKQOTUSZLTXJXACWMGYPKQJ");
    msg.service_type = 249U;

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
    msg.setTimeStamp(0.6974431269421025);
    msg.setSource(55910U);
    msg.setSourceEntity(135U);
    msg.setDestination(36098U);
    msg.setDestinationEntity(195U);
    msg.service.assign("RTQVTRJHPGIGFGDCPQXRTJQLEFOPIHZZVNIBTNZOTHNDYRSZZYEIIYFQCYWTDBEMECQYWKRVSGLSBMFLUZOFFXVECPXHZTJVDDWAWGRJNBXLHYUOPIBKSMOPANCKBJTDNXGLKUHHESMXJYQALUKYOAP");
    msg.service_type = 172U;

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
    msg.setTimeStamp(0.2867476252136295);
    msg.setSource(59552U);
    msg.setSourceEntity(234U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(136U);
    msg.service.assign("YYDAMHQHJLVJMPDBYSGYKLKLSZIQQMHRAXTVGQZYJJUEOFBANHPFGZOKTNNMMMQNWYTRBYODKFKBAKJESIVDOATIGQRQPYGNJAFZVJZNUNRMBOSVTQUXNIXVNFDCTMHACTPKUHWESBUCYGLPRGWXWQMECOUKGYFLTVRXIBTZRLSBFIZVOIPSAQHWBBOWXDRHWNCCVDPMSJDCHEGZUEXEWGOLREUXFJSRKZOLWTIXFSFDCJVPEPZX");
    msg.service_type = 226U;

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
    msg.setTimeStamp(0.862728463552051);
    msg.setSource(17905U);
    msg.setSourceEntity(72U);
    msg.setDestination(25019U);
    msg.setDestinationEntity(114U);
    msg.value = 0.3976706684256046;

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
    msg.setTimeStamp(0.195376984156173);
    msg.setSource(27813U);
    msg.setSourceEntity(164U);
    msg.setDestination(43141U);
    msg.setDestinationEntity(13U);
    msg.value = 0.16698256339405915;

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
    msg.setTimeStamp(0.9263913190136415);
    msg.setSource(58073U);
    msg.setSourceEntity(97U);
    msg.setDestination(59202U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6977521742271161;

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
    msg.setTimeStamp(0.4615383702813184);
    msg.setSource(16916U);
    msg.setSourceEntity(136U);
    msg.setDestination(36845U);
    msg.setDestinationEntity(48U);
    msg.value = 0.2273468940870924;

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
    msg.setTimeStamp(0.28021254173807764);
    msg.setSource(55569U);
    msg.setSourceEntity(153U);
    msg.setDestination(63102U);
    msg.setDestinationEntity(73U);
    msg.value = 0.24778266532478;

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
    msg.setTimeStamp(0.4928716875401663);
    msg.setSource(45162U);
    msg.setSourceEntity(80U);
    msg.setDestination(10940U);
    msg.setDestinationEntity(175U);
    msg.value = 0.06440918077088764;

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
    msg.setTimeStamp(0.3536758257946562);
    msg.setSource(60350U);
    msg.setSourceEntity(236U);
    msg.setDestination(60482U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6042162919989679;

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
    msg.setTimeStamp(0.4181929650406032);
    msg.setSource(26299U);
    msg.setSourceEntity(59U);
    msg.setDestination(46997U);
    msg.setDestinationEntity(114U);
    msg.value = 0.2553013230253396;

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
    msg.setTimeStamp(0.3815801568308177);
    msg.setSource(5740U);
    msg.setSourceEntity(53U);
    msg.setDestination(63383U);
    msg.setDestinationEntity(2U);
    msg.value = 0.7961613050580474;

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
    msg.setTimeStamp(0.25854093831993674);
    msg.setSource(40067U);
    msg.setSourceEntity(217U);
    msg.setDestination(55821U);
    msg.setDestinationEntity(195U);
    msg.number.assign("VLMTUDGBXCTVEXHEPRFVW");
    msg.timeout = 28308U;
    msg.contents.assign("VLMXQKLMKDKLGUVXTFWOGNZBDOKVZVDFWPJHPWUDNXMRNMRQXRBANJZJLHEIDIGDYCSTGKHUWNAQJCYPERRHYVYHDZIAYVWKRKMACNBYMHGZPULOSXIFOQIPJWQCFMVQYOKXEVAEVFTRJZSZZLFRGTUGSTOOZUJCJNXWPWCEBNAESIEBHWSFBTBSLBXTPNFFCUQTNDEMQVYHECAI");

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
    msg.setTimeStamp(0.6575907707062442);
    msg.setSource(11287U);
    msg.setSourceEntity(16U);
    msg.setDestination(47350U);
    msg.setDestinationEntity(228U);
    msg.number.assign("GKHRSDSUOGCYLUWKSOGFURWOJEWRCSYKDFTQKLNQYUZEGDCNZKTIRQCPGPMMGIOIJBMCJAURFGXTNXVZHRNEHINSBJMT");
    msg.timeout = 18755U;
    msg.contents.assign("TTMQKGDVXMFWLYWOTWHJZNCBWEVBHZFNLOUQQICINNVJQHNDQRV");

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
    msg.setTimeStamp(0.5269040098304628);
    msg.setSource(45729U);
    msg.setSourceEntity(139U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(75U);
    msg.number.assign("JQVVJCTSWHUPTZILFTSRXUWYUWJMFAXDB");
    msg.timeout = 37966U;
    msg.contents.assign("KBLJVMNBWHLKLXXEOPZUVIYXJUSPXCFEQGUBEIJCTDWKLLAEBMIBFANYROWKORDHHODKTDBRIBXQAOGQNVVPCMHWWAECQEGZAARZEGFOINBRNVPJDVVLSUQBNHPONFRPXBZTVCHDHTHQJWQGYMWKJATFMZAXJLZVIOFMKCUGJTUYDOPSLWTSOMQPDKFRSJZH");

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
    msg.setTimeStamp(0.08512072918945757);
    msg.setSource(3143U);
    msg.setSourceEntity(166U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(40U);
    msg.seq = 711188070U;
    msg.destination.assign("OSIGMJNGWBOOYJIDQAXFVXWUWPMDXPKQUBXKKCQTGFJHIWZYHEZHGZTUOLIAPSKMMAEVDXEZLR");
    msg.timeout = 14656U;
    const signed char tmp_msg_0[] = {-111, 126, -96, 76, -107, -105, 97, -127, 46, -56, -32, 80, 71, -7, -57, 60, 76, 117, -7, -78, -108, 93, 97, -72, 11, 77, 31, -54, 2, -28, -33, 93, 104, -114, -55, 55, -61, 111, 14, -85, 106, 14, -105, 106, -85, 48, 22, 72, 92, 24, -112, 98, 68, 31, -78, -38, 72, 33, -68, 87, 65, 116, 126, -95, -76, -7, -123, 98, 26, 4, 20, 106, 3, 100, -105, 122, -45, -70, -95, 89, -47, -15, 27, -59, -125, -10, -50, 23, 108, -86, -49, 75, -3, -70, 60, 101, 16, -82, -52, 123, -121, 72, -112, -92, -90, -76, 90, 121, -112, 103, 56, -116, 94, 114, -19, -13, -50, -25, 72, 59, -84, -5, 95, -39, -87, -106, -24, -57, 96, 91, 85, -51, -56, -92, -118, 71, 37, 51, -102, 62, 84, -39};
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
    msg.setTimeStamp(0.7527501339741423);
    msg.setSource(53982U);
    msg.setSourceEntity(150U);
    msg.setDestination(44410U);
    msg.setDestinationEntity(88U);
    msg.seq = 1608994109U;
    msg.destination.assign("ETVFJRHXMBHHABSFGDASHYYOHELFZACXJRZBKCWWMGBTGPDQNMUUKMAGPXCGQNTKVTWVSLJZVXPMYPQESUBYCJSZYDIOLIFLOZQCAIZKJVYTFEROUFCXHACRMIGHMNNCP");
    msg.timeout = 55597U;
    const signed char tmp_msg_0[] = {-88, 48, -4, -85, -63, 31, 21, 89, -8, 8, -92, -20, -27, -18, -91, 26, -90, -66, -83, 81, -20, 77, -88, 13, 15, 6, -84, 33, -49, -84, 30, -70, -28, 76, 68, 79, -15, -103, 10, 102, -68, -41, 34, 87, 114, -6, 90, 105, -128, 45, -63, 84, 10, -42, -62, 80, 40, 44, 51, -25, 41, 124, -25, -3, -21, -40, -106, 58, -128, -113, -36, 45, 60, -63, -69, -24, -69, 101, 42, -88, -83, -14, -38, -58, -13, -119, -38, 91, 65, -30, 67, 69, -47, 101, -75, 60, 9, -40, -121, -75, 104, 37, -13, -117, 48, -116, 70, -52, -40, -117, 0, 118, 7, -18, 25, -22, 82, -88, -114, 61, 17, 69, 122, 27, -93, -107, -19, -121, 91, -21, 71, -40, -83, 13, 103, 26, 8, -87, 126, 19, 81, -62, 95, 29, -41, 29, 62, -35, 30, -29, -29, 18, -27, -113, -43, -36, 112, 28, 79, -122, -31, -125, -117, 23, 10, 82, 5, 32, -104, -62, -101, 54, -79, -44, -45, -78, 62, 111, -106, 68, -80, -119, -37};
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
    msg.setTimeStamp(0.9325537316662256);
    msg.setSource(10528U);
    msg.setSourceEntity(97U);
    msg.setDestination(22234U);
    msg.setDestinationEntity(147U);
    msg.seq = 4231514837U;
    msg.destination.assign("AHFRKKSREXCGGJBRKKOMBGNMVEQZKWHCLKHRZRLJEIUEOKSYUVOFLVNFXQTMAXVCNOUBFTRDEXINKUANZXPJIHLDHUBIWJIMGMOLMDSOILZCRPZEHBZQZBAJFDEFVZMSUNYIDUAQKTNFSNTTPJYLUELYGAWDXSAGZCOWPDEXXYWWBTQHSCBBBAFQVVYCEOAVYDZKHWDGCWUPLNRSLMTYIOPPUVGNVCHQJTSWPTARFQXITCWOJ");
    msg.timeout = 9344U;
    const signed char tmp_msg_0[] = {106, 79, -119, -32, -54, 75, -46, 124, -111, -108, -90, 69, 117, -26, 91, 6, 99, 104, 92, 33, 112, -12, -118, -59, 29, -70, 66, 91, -42, 4, 13, -32, -126, -82, 121, -30, 49, -60, -63, -76, 18, -108, -127, 22, -122, -61, 92, -37, -122};
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
    msg.setTimeStamp(0.9786439795629807);
    msg.setSource(38614U);
    msg.setSourceEntity(16U);
    msg.setDestination(25478U);
    msg.setDestinationEntity(102U);
    msg.source.assign("XAJZRFPEYASWEZTUMYUQIMMEKVBNHXXTIWENVHGIJBGKUDRGZPYDCCHJKYTAYNPRIQVRZRYCGOBLHZDXSFNGUAORWLKLDSFILJTXQJSHTSYDPORFMWUMBWSHNKEITFCMT");
    const signed char tmp_msg_0[] = {38, 23, -126, -34, -46, -98, -58, 69, 80, 112, -2, 5, -122, -100, -117, 47, -28, 102, -27, 42, 57, -45, 35, -127, -111, -20, 30, -44, -71, -113, 95, 25, -113, -108, -61, 124, -107, 80, 24, 21, 76, 43, 25, 50, 94, 24, -89, 71, 81, 86, 35, -13, -71, 4, 123, 37, -69, 60, -106, 106, 44, -34, -38, 47, -35, 59, -63, -17, 100, -27, 99, -21, -111, 40, 52, -109, -66, 92, 66, 69, 30, -62, 100, -52, 110, 79, -115, 47, -115, -90, -128, 52, 89, -107, 37, -39, 9, -41, 42, 81, 110, 45, 48, -105, -101, 41, -126, 39, -95, -18, 115, -100, 76, 36, -55, -91, -8, -26, -114, 0, 99, -94, 37, 82, 30, -11, -48, 90, 88, -103, -121, 34, 114, -80, -105, 124, -25, -84, -17, -31, -31, -35, 30, -85, 87, 103, -8, 7, -17, -53, 71, -103, -102, -108, 95, 110, 86, -40, 6, 95, 60, 117, -91, 39, -18, 68, 61, -35, -28, 49, 75, -117, 37, 83, -20, 24, 62, 15};
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
    msg.setTimeStamp(0.5214011105006865);
    msg.setSource(8266U);
    msg.setSourceEntity(2U);
    msg.setDestination(29371U);
    msg.setDestinationEntity(178U);
    msg.source.assign("UDYNBHPQZCKZXPQKHPLNEOAPEVAHWVBCUSVUHLFEYXDJSUIXBVKNZVAZGCXDIYLDBQLRFSCTRILJEFWRNACKSESZZBGQYLTUIVGAXOYXIGWFMJJQSUPEFNMLFRWKTIZFTTNMTRKQDDWBZYMKUOMYCSTDXWFHMNZYJYMGOZPCWGFMYXUCOAQTPBJVIIMITCXHERLRJFRSDVPSOHHKVKLDAOAGQEWHJJOMIDGCOHWLRRX");
    const signed char tmp_msg_0[] = {-61, 75, -88, 116, -56, 65, 36, 41, -88, 85, -27, -110, -102, 117, 26, 37, -110, 7, 54, -120, -24, 45, 121, 58, -75, 43, -11, 39, 89, 45, 110, 30, -64, -106, -47, 117, 105, -34, 10, -100, 100, -111, -22, -121, -42, -128, -3, -23, 105, 24, 76, 11, -73, -78, -9, 9, -3, -89, -91, -41, 35, -63, 38, -12, -85, 125, 124, -124, -19, -32, 38, 83, -27, 54, -72, 49, 96, -100, 77, -14, 67, -93, 88, 54, 63, -100, 29, 29, -94, -106, -37, -90, 23, 54, -94, 112, -103, -48, 12, -55, 125, -85, 83, -76, -116, -19, 48, 51, 68, 8, -54, -111, 57, -117, -126, 122, -115, -96, 78, 57, -37, -28, -6, -89, -123, -16, -111, 3, 69, -46, 26, 104, 121, 30, 107, 11, 106, -30, -121, -79, 30, -109, -5, 9, -114, 40, -103, -2, 18, -103, -72, -18, -52, -8, -2, -94, 2, 68, 19, 21, 21, 76, 13, 96, -107, -54, -57, 29, 22, -86, 119, -22, 51, -36, 39, 66, -87, -124, 23, 9, -86, 113, -12, -10, 23, 106, 125, -5, -44, -17, -60, 10, 95, 68, -9, 30, 55, -23, 27, -74, -45, -83, 5, -9, -113, 52, 68, -16, -111, -95};
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
    msg.setTimeStamp(0.8807654741412216);
    msg.setSource(52544U);
    msg.setSourceEntity(146U);
    msg.setDestination(16673U);
    msg.setDestinationEntity(124U);
    msg.source.assign("LEHGFQHKEESMCJDNHPIZCDCMHFOAAUHXBIRCOGNWLRQFQALDHUUTAIXSMFRBCVVHIXKTEXUIOQFCMGVJRXBPSYGYAWPLHKOBMFQZXDDWZSKVJGEWKNDSAYPDWHLBIZKFENDCGOYPTJOUUINTVQIQVXRPBJNGTWTGHNJRRXWYIPMWSUWPKRMDJVJGEELOTKYAQVFTSNLYRFZCBAZIVMQETAXWELKDBRUBSYBSVY");
    const signed char tmp_msg_0[] = {67, 109, 79, -62, 53, -61, -88, 111, -39, 116, -48, 51, -1, 68, -35, 72, 63, 11, -39, 121, -21, -124, 50, -75, 61, -105, -71, -116, 44, -86, 19, -2, 39, 10, -113, -37, -113, -78, -128, -8, -103, -89, -16, -77, 35, 102, -23, 102, 31, -121, -64, -110, -85, 45, 64, 20, 58, 116, 29, -53, 23, -46, 66, -113, 126, 21, -112, -71, -52, 54, -127, 120, 85, 49, -124, 96, -116, 53, -113, -16, -34, -28, 42, -128, 7, -6, 35, -20, 113, -89, 100, -11, -73, 81, -119, 35, -85, -93, 74, -34, 78, 21, -14, -14, 109, 38, -15, -61, 55, 117, 1, -22, 47, 39, -28, 97, 63, 58, 74, -125, -103, 112, 25, -24, 101, 83, 45, 44, 50, -42, 44, 100, -50, 11, 92, -16, 2, 50, 111};
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
    msg.setTimeStamp(0.5176428878607244);
    msg.setSource(38843U);
    msg.setSourceEntity(196U);
    msg.setDestination(13249U);
    msg.setDestinationEntity(80U);
    msg.seq = 2949176828U;
    msg.state = 94U;
    msg.error.assign("BEJKATBFNHNVEPDZKVBTIPALQYIUHVOYGGXAUFXGMSWEUKXRHDKWJPWLDPIUMBZVFYOSADHRCBRLJWIZZPDDQGKWPVCVMQ");

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
    msg.setTimeStamp(0.42186653526389506);
    msg.setSource(47701U);
    msg.setSourceEntity(94U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(19U);
    msg.seq = 2776291570U;
    msg.state = 53U;
    msg.error.assign("MZFXEZQVDQNUOH");

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
    msg.setTimeStamp(0.13651862079163102);
    msg.setSource(44588U);
    msg.setSourceEntity(126U);
    msg.setDestination(27716U);
    msg.setDestinationEntity(115U);
    msg.seq = 1049424804U;
    msg.state = 66U;
    msg.error.assign("FBJDVESAHLICJAWQVMTHQDSSGHDNBYSXKAEILVCCNVCSEOYAEOQSCFYOQMJEJVLTZREPSPDYOPAXKZNCOZQXTNBKBMYIRRCOUUMDQMMGGENLZRVKWDNOYJHRKHVAFQUXCWHKYVYJFKFTRXBHMROPZTIQUDGLEPTBEWLUSIHXDPLOZ");

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
    msg.setTimeStamp(0.7315826976937445);
    msg.setSource(8783U);
    msg.setSourceEntity(2U);
    msg.setDestination(33290U);
    msg.setDestinationEntity(32U);
    msg.origin.assign("EMUZWNMISDJBTPYEFROEMLYMLWVETWRCOHDLAQSLNISZCYWGXHPARDBLXWMOPOEMZFVVCQIQRTJPVRKRKLYCAANTLRHKKGOCIYYTFFDBKGNDQELGNWUZZJUSRNJIPIXBBGSCPFDOUHXHAPZZLJNJGWHGACGFETAVHXFQTVEIUVQFPZUOGAFXIPUQBBMXNWAKDDVSTHHVCBAUJMYZXIODCHRXYUPKKTFWMJQUMJWSBKYDGEQSSCVSNL");
    msg.text.assign("VCPGBNTLYQTSVRDCGWSUIYRAEXKKSDCCEYOMXZCOYTQLALTJGDUWNQBUJTKMRKHGUYJWRHTKOGQIEAIDVBNFTBWAMLXMGLVFMRXKFSUJRKGRXUAXSLAIYUZHMFQNGPJIBCPFTHOTDOYLOAWYVWFPRUZMSKEHCHGOYZOWFLCDQFPME");

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
    msg.setTimeStamp(0.853976491098193);
    msg.setSource(59341U);
    msg.setSourceEntity(30U);
    msg.setDestination(7799U);
    msg.setDestinationEntity(7U);
    msg.origin.assign("ATYMCXTMLNULJQWWMKULQAFDYRHWJGWFCJZWUWINZYKWIHPYECNKLGCEJGKDDGDPORKORRETSAYBKHRZOUOBVDCVTJBWQHTBMJEBSEVKXBQHIBDRYQJKTHOVTMATHDLDNLSFI");
    msg.text.assign("QXSUMPHQJRFOEEDUJJTWBUWJKSCBFHCKNAIDIITCFGXSAIUUCJURLXTKHGQPWATNYTNNVEYDEERYVIVAEWQWVXADMQLRIOSBJFOUHYDRKFANMGNJKGGMVIQMPPXASWVLHIXVXTJTDGHZKFAYQXCCLECUHYAFZTJLOZVWCPUKBJSZLCTBDDMIRHYXOSOWSOQDCR");

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
    msg.setTimeStamp(0.9345152027991812);
    msg.setSource(51501U);
    msg.setSourceEntity(143U);
    msg.setDestination(29635U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("KPGLINQMXTZGGGDPHAPAWJRINJMVDYUMFTJRZSXBKBWQHUXLLKKAVBXIDVDMCRFFHBTBNBMZFPDLYEQWFACPWUQWNVEVRZLGZYHIXYVITPGVSCUOZKJHCMRRWDJOPSCGHUJZKNQOEBSVOUFFIYP");
    msg.text.assign("TAWQYICAAATVWEJRHCVAUPTFPMWOJJZ");

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
    msg.setTimeStamp(0.012086461467932241);
    msg.setSource(39209U);
    msg.setSourceEntity(33U);
    msg.setDestination(52004U);
    msg.setDestinationEntity(40U);
    msg.origin.assign("EVNSSPDDEZONUJFLNGUPIPDJHLDNDKBJWYMZJAHTLUXGQXPFIKNDZOCSFTTIMGQWLIKLWFFRCMIXEFLNUQWCMBURQINXPRKBOTBPDTNRHMPZJOCKAWHRDFEARFXCBLITVVODZXBRJHNQWSAVGREGGZKQKZUIJMBZEPAUVYSIRBXVYEHWBSVOKWQMEWHXJAAYGKGCTUWLGSUXRCZFNSVOZBYDQU");
    msg.htime = 0.3048600052409256;
    msg.lat = 0.7413850149348161;
    msg.lon = 0.28871447230340386;
    const signed char tmp_msg_0[] = {-55, -63, -73, -21, 68, -25, 53, 47, 97, 4, 27, 97, 22, 56, -10, 79, -42, 64, -24, -97, 50, 119, -120, -15, -103, 65, -72, 102, -62, -125, 121, -66, 40, 104, 15, 30, -41, -56, 64, -33, 31, 17, -106, -100, 16, 72, 43, -34, -99, 95, 4, -109, -8, 21, -117, 80, 123, 21, -87, -77, -122, -102, -40, -117, -81, 22, 22, 82, 72, 12, 69, -122, -17, 59, -103, -48, -56, -40, -72, -62, -17, 25, -105, -108, 32, -37, -40, -26, 70, 84, -75, 116, 13, -100, -14, -40, 30, -72, -13, -113, -38, -80, -95, 16, -14, 5, -43, 109, -12, -22, 82, 24, -14, -110, -18, -65, 14, -25, -27, 125, -35, 95, 87, 3, -52, -73, 35, 125, 64, 116, 72, 27, -101, 43, -56, 67, 41, -123, 115, 30, -58, -40, -4, -71, -123, -50, 92, -54, -23, -16, -101, -15, -93, 69, -112, 103, 75, 107, -121, -95, -20, 97, 123, -66, 85, 75, 75, -56, 88, -3, -45, -46, 91, -43, -53, -123, -21, 45, -108, -109};
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
    msg.setTimeStamp(0.7806007817723473);
    msg.setSource(11789U);
    msg.setSourceEntity(193U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(71U);
    msg.origin.assign("QEMQLRPWVNHPKJLRNKPRHTCJNDALBFFQZAULOCXAVII");
    msg.htime = 0.7898437653798407;
    msg.lat = 0.9268375452725216;
    msg.lon = 0.10369315368130982;
    const signed char tmp_msg_0[] = {24, 108, 7, 47, 110, 48, -107, 114, -18, 40, -38, 38, -75, 87, -114, 92, 16, 0, 122, 10, 4, -66, 26, 76, -106, 42, -79, 105, -14, 104, 60, 9, -116, -96, 25, -14, -99, -98, -100, -16, -111, -94, 116, 115, -42, 120, -69, 113, -80, 124, -98, -43, 39, 32, -44, -36, -8, -90, -77, -3, 15, 10, 57, -89, -43, -65, -114, 96, 23, -53, 64, -79, -90, -53, 58, -48, 81, 80, 32, -36, 12, 124, 24, 95, 40, -34, 20, 7, -64, -74, -44, 98};
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
    msg.setTimeStamp(0.9080974668187366);
    msg.setSource(48749U);
    msg.setSourceEntity(155U);
    msg.setDestination(56976U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("EXDRHRWOBTAACBRALGXVXCYPGAKHLWTDCYYLOOSUQNFOOYYKIYOWSLZSZSTEVKAPGSFXEBIKKDMOHYVPFPRIGDMLZEQFJMFSDDVQNRHGLRXZLMEKWPEJPIFFPCKEVALXBSCUIWQKTVJQUHOYBCGBMJZNIYWGCFISTHDEYZIWBRDXJPNRAXXXNFWJGLIECNTMBTBZUASMUHGGUNNTDULQMDEPZJBHCIFPAJKROCQZVRNTAKV");
    msg.htime = 0.843099044631242;
    msg.lat = 0.17602595873090676;
    msg.lon = 0.09857404891195665;
    const signed char tmp_msg_0[] = {-89, -105, -99, 119, -29, -43, -33, -76, -47, -70, 6, 63, 56, -3, 35, -51, 126, -114, -106, -5, 80, -119, -49, -28, -79, -69, -77, 22, 28, 7, 5, 86, 11, -109, -124, 96, -23, 54, 17, 51, 80, -70, -77, -89, 120, -118, -2, -21, -4, 75, -1, 100, 122, 36, 5, 53, -24, 79, 6, -78, 65, 80, -15, -121, -93, -88, 110, 2, 35, 34, 39, 52, 16, 118, 70, 35, -17, -71, -11, -79, -2, -117, 96, 27, -59, -126, -21, 25, -101, -45, 121, 110, -88, -5, -81, -22, 3, -119, -113, 25, -65, -96, -29, -35, 109, -28, 22, -96, 114, 97, 56, 36, 98, -45, 125, -53, -38, 27, 102, -75, -38, -27, -6, 86, 4, 2, -125, -85, -37, -4, -71, 115, -82, 60, -88, -98, 29, -128, -61, 107, -45, -45, -74, -29, 98, 61, 104, -114, -5, -70, 61, -10, -60, -104, -14, 117, -12, 124, 120, 76, 80, -122, -93, -48, -69, 121, -66, -35, 17};
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
    msg.setTimeStamp(0.9817466925586402);
    msg.setSource(38747U);
    msg.setSourceEntity(130U);
    msg.setDestination(4407U);
    msg.setDestinationEntity(116U);
    msg.req_id = 42209U;
    msg.ttl = 37498U;
    msg.destination.assign("SFPDSLJHMHLZYIWLTBYUPIVQQMTDCXKRHGLYPQRVPMFQUZGCZQTKPGEVXAGIOKPJACUYPNITYTURTBRLWYZVUJUXWVAXTKANILFHOGOXFJJNUBYELZAFBXAAZZBWPLDYXFNEWZKVYGSMEDESORJNRHAQCCOHHVLLWCWNTORQA");
    const signed char tmp_msg_0[] = {-84, 70, -51, 29, -94, -47, 121, 8, 59, 62, 101, 31, -72, -120, 64, 44, -106, 83, -92, -128, -86, -15, 126, 60, 125, -24, 69, 3, 15, 87, -21, -34, 98, -38, -117, 114, -23, 52, -99, 25, 42, 49, 102, -37, -54, 23, -69, 33, -119, -104, -26, 83, 110, 35, 108, 73, 101, -120, 70, -1, 75, 111, 7, -38, 44, 104, 120, 33, 60, 27, 34, -121, -64, -115, -28, -109, 59, -93, -103, 25, 21, -30, 83, 73, -44, -99, 92, 90, 61, -85, -105, -62, 66, -100, -37, 39, -86, -77, 104, -68, 42, -107, -54, 72, 50, 89, -92, -6, 42, 14, 59, 65, 57, -75, 33, 74, -98, 109, -14, -110, 68, 70, -60, 2, -94, 82, -8, 82, 65, 104, 75, 58, 117, 26, 88, -71, 42, -122, -46, -124, 116, 111, -72, 2, 56, 82, -15, 74, 16, 95, 105, -80, 100, 107, 109, 39, 89, -15, -86, 112, -128, -55, -111, 56, 73, -96, 59, 112, -99, 100, -81, -13, -85, 114, -38, -113, 61, 43, 121, -118, 51, -63, 36, -16, -49, 24, -10, 22, -1, -32, 111, 41, -57, 52, -58, -8, -128, -97, -102, 42, 22, 67, 8, -73, -103, 103, 75, -114, 117, -56, -57, 109, -95};
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
    msg.setTimeStamp(0.3524546492127535);
    msg.setSource(58181U);
    msg.setSourceEntity(242U);
    msg.setDestination(46567U);
    msg.setDestinationEntity(75U);
    msg.req_id = 39662U;
    msg.ttl = 22407U;
    msg.destination.assign("QATFYSXBWTUWSUDFBMYBNDUNTKPOMPRYRLVAAONUNCTIVAUIJLXIHMAOYXBIHJLFBCLXCCIEKSQUPCYYMO");
    const signed char tmp_msg_0[] = {102, 10, -57, -75, 53, -62, -63, 38, 57, -50, -116, -91, 87, 93, -22, 32, 33, 60, 70, 74, -3, 106, -94, -67, 109, -33, 28, 111, 95, 1, 60, -58, -20, -96, -26, 41, 56, -83, -76, 37, 34, -38, 93, 40, -82, 41, 91, -111, 70, -65, 85, -59, 51, 58, 24, 113, -93, -96, -120, -77, 26, -78, -56, 27, -54, -24, -63, -42, 56, 80, -34, -119, 54, -89, -81, 97, 38, 72, 89, -121, -35, 71, 40, 90, 44, -38, -43, -74, 29, 36, -23, 90, -20, 100, -18, -115, 100, -10, 123, -66, 1, 36, 111, -71, -1, -125, -48, 115, -22, 66, 111, -90, -88, -2, -56, 45, -63, -90, -114, -76, -81, 87, -85, -14, -1, -56, -59, 98, 23, 57, 64, -53, 126, -77, 124, 4, 36, 29, 1, 14, -68, -75, 105, 34, 120, 62, 51, -36, 31, -76, -85, -57, -28, 25, -84, -108, -107, -92, 122, -127, 53, -72, 101, -93, -123, -28, 79, -60, 81, -113, -89, 30, -90, -88, -67, -53, 44, -23, -55, 51, 52, 106, 73, 13, -110, -42, -59, 11, -5, 66, 34, 46, -100, 92, 96, -127, 69, 67, 40, -91, 82, -47, -6, 74, 47, 126, -70, 125, -72, 44, 74, -59, -127, -109, 60, -101, 124, -101, 70, -61, -64, 70, 34, 8, -88, 33, 62, 27, 11, 103, 50, 111, 38, -28, 12, 27, -24, 110, 90, -103, -103, -29, 95, -51, -118, -34, -29, -124, -18, 57, -22, 54, 109};
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
    msg.setTimeStamp(0.38431787440017895);
    msg.setSource(10118U);
    msg.setSourceEntity(254U);
    msg.setDestination(22069U);
    msg.setDestinationEntity(229U);
    msg.req_id = 45557U;
    msg.ttl = 36051U;
    msg.destination.assign("PYPYSNMRZAGIZRXDPQXQXQDLSQMWSQNIJXJYDRVNAZBTPLTQGJOVBHWZXCFEKUMSJYEWGNGRAGYTCKKKFLYUOODHCTVRIACUBOIMTASODZJCEBLLFCVFASBPVYDNHYWIZMTFFUBWVFUZMHJFRJEDUSDHYILXDYTRLGLEHXSAKGQZOPAUWMKCJTP");
    const signed char tmp_msg_0[] = {-18, -105, -116, -114, 11, 95, 94, 96, 104, -14, -82, -113, -98, -23, 11, -61, 44, -9, 52, 44, -120, 22, -26, 41, 26, -69, 29, -13, -109, -6, 39, 119, -6, 63, 24, -122, -88, 54, -31, 10, -94, 46, -34, 20, -53, -4, 33};
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
    msg.setTimeStamp(0.7599323599006904);
    msg.setSource(42943U);
    msg.setSourceEntity(161U);
    msg.setDestination(8611U);
    msg.setDestinationEntity(154U);
    msg.req_id = 59063U;
    msg.status = 46U;
    msg.text.assign("XLNNWNKOOCEWIRBIEGPJTSLFZVAKIYBQSIMCAUEMF");

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
    msg.setTimeStamp(0.08035784150824499);
    msg.setSource(6919U);
    msg.setSourceEntity(242U);
    msg.setDestination(30646U);
    msg.setDestinationEntity(88U);
    msg.req_id = 60906U;
    msg.status = 162U;
    msg.text.assign("VGBDPHPPZPXDEZIYGHZQNIAAXKVPIFSCHATUNPWXHBQYUGCFLKJAUOKTTIDLILFROZXVBABRGKKDKKHFWNBAVAFNGZLDBEHFSCBVQQFKHQKDRGJDYZNRPLYPYSSTMXWONFWCOMXMWMQUCXOJYVUISJTRFEZJJNZFOWLRXEDYWVGRIGHTQCYNOHMESUZXCNSHQTOEODEYUVEIVCLMLSPCJ");

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
    msg.setTimeStamp(0.7129492874022442);
    msg.setSource(58489U);
    msg.setSourceEntity(249U);
    msg.setDestination(35485U);
    msg.setDestinationEntity(141U);
    msg.req_id = 42279U;
    msg.status = 47U;
    msg.text.assign("XMGXFINVPCBVPIPGTIJUQAQSJVMUYDOUCUJFNUOEFMWTQYJOHOYQBTENIEPDTVIXAWVDJXXNEKTRSMPLSHRJSNNXBWRIITDQLHJWQGMNWAHLEMDAWPUYYODECICCTSPOAACSZTXUGYEQZVZAHKZ");

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
    msg.setTimeStamp(0.1535438321323518);
    msg.setSource(21396U);
    msg.setSourceEntity(158U);
    msg.setDestination(47040U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("XVTTZWMEPHBKZSWNYFRRODMIZGFSMTQSEWOEIGAFTQCMVYKCFDIDXQ");
    msg.links = 2626007676U;

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
    msg.setTimeStamp(0.5508085399157894);
    msg.setSource(14970U);
    msg.setSourceEntity(222U);
    msg.setDestination(25409U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("SLLWNBZGWDJOZZYLGEWTKYUHLJCEULSUAFJSOAHCXTQKSABDLCAPIEDFZVYMLGDFZPBHJZKAIOBIRVLOATFXKDUKIPFMTUSAPAEWDWLVERCQXBCUBOEWMRBKRHZJNCMUMKGXJTQCFKXITHQVJEQDRGPNNYQMCNDTJECQWEGWXYPGINWOJXQDKVHVMQSJTXZHFNRVIHOAUBBOBPTZPLVASKPFUMCSSMNVRYOHXRQIRYNGDIYGYSERVFYN");
    msg.links = 3583310870U;

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
    msg.setTimeStamp(0.5991745191625765);
    msg.setSource(37416U);
    msg.setSourceEntity(148U);
    msg.setDestination(55050U);
    msg.setDestinationEntity(93U);
    msg.group_name.assign("RSTWVDATBSORXMUNWNLBKMDXTXWWJGTUSFFOQAMCGUCYYDBOJDNL");
    msg.links = 677249667U;

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
    msg.setTimeStamp(0.22203796827972255);
    msg.setSource(56532U);
    msg.setSourceEntity(122U);
    msg.setDestination(20429U);
    msg.setDestinationEntity(70U);
    msg.groupname.assign("IQKTZXFKJYIPOINSLTQAPUDZNSCDYZHBOFFPBVFMABQOVRWVOMSCPPOWAFMEGVZPUJWIYDBZZYPXCYWCQHAMNBTELVHWXGAAYSKKJVIJGEXEJJCRFPBZMJRHROIFDZTWYRIWGJDMDZLXYVRHROMWHPXKEMTYHKQQNEMVWZNORESSCGAUULLBKLOIKNCIBSDJFKLLGCCAVOFXWJXNSDIGKUYHHHCNUFTEQPEGUQSTUXDAXGBLTB");
    msg.action = 6U;
    msg.grouplist.assign("ZVQKIHDLKUTYFWWSYXYYSRHJFFUMCQRGDNCCEWOLXNWFZADKSORZIQBOVWUZHJBRIIEJVYZZTTXNAJMRSFLABHNOYOBRPXEVWBWQALPQIIOQAQGDDGKVTPRHSNBX");

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
    msg.setTimeStamp(0.9159507465284142);
    msg.setSource(60640U);
    msg.setSourceEntity(157U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(134U);
    msg.groupname.assign("NNGFDWWEFUSRAJZQJCTEAOHXCGPPLAQDZBJOISBPTLBGKUYKKCVHYYCTAXLASIWXPIISTNERVEUJEWWCURZYQFVKBSKQOPJMO");
    msg.action = 63U;
    msg.grouplist.assign("FZQIOZCBXT");

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
    msg.setTimeStamp(0.7944524631765557);
    msg.setSource(40942U);
    msg.setSourceEntity(5U);
    msg.setDestination(46471U);
    msg.setDestinationEntity(30U);
    msg.groupname.assign("POPAOHGQIMVKDBYCRXMXAHCYSDNINZLRMOYXOZQJQXIHLEZFZJCQKEKHWTGHEKRDPLWUWYXOWLARAMMJBWZFDUWDWPKGOITMGVZSHSORLSOSRXBQEYHXKQTVTZRHTUTFAXCAUNKYVVCFCGSFEEDBBEZJWYTIJFNIICMAFAZWWXNGNIJCHPSEJNFBPYPNUPULCUALJENSLB");
    msg.action = 84U;
    msg.grouplist.assign("ILATJOEQLVDTGLVAJQUEJLMHOOVPZLGZXBHPIMKIGWTXNZNSWSSVDHRSTKEZCTCXYQTKQCDUFQLRWFJIXZKCEMEGYBMKVCOXEZHONRFEAXQAIBDRVQUXHYRJFGANMJVBCMRXNOPMTUWFDUMAOBYZAJCLSSWUNIJIFYLMSVPHDRCCSXPJUFKMFXQNKCDKFPPDWNATLNGYSDBVGWHOHZHGRDKEITUIFGUZERYWUNKGOPOHBTYABQPYWIYW");

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
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.259097859732082);
    msg.setSource(49951U);
    msg.setSourceEntity(18U);
    msg.setDestination(52956U);
    msg.setDestinationEntity(201U);
    msg.value = 0.11569299283642265;
    msg.sys_src = 40551U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.5552924363980318);
    msg.setSource(59185U);
    msg.setSourceEntity(131U);
    msg.setDestination(10251U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7591780021721932;
    msg.sys_src = 55343U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.015124116473758997);
    msg.setSource(33808U);
    msg.setSourceEntity(38U);
    msg.setDestination(29224U);
    msg.setDestinationEntity(244U);
    msg.value = 0.13679508073926128;
    msg.sys_src = 56460U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.1054489411932531);
    msg.setSource(2784U);
    msg.setSourceEntity(150U);
    msg.setDestination(21829U);
    msg.setDestinationEntity(130U);
    msg.value = 0.06342731269947954;
    msg.units = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.6285494306314567);
    msg.setSource(42343U);
    msg.setSourceEntity(21U);
    msg.setDestination(34695U);
    msg.setDestinationEntity(6U);
    msg.value = 0.3809401838700536;
    msg.units = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.12100715346309499);
    msg.setSource(51087U);
    msg.setSourceEntity(157U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(167U);
    msg.value = 0.17992116047549944;
    msg.units = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.37712048155780487);
    msg.setSource(47093U);
    msg.setSourceEntity(105U);
    msg.setDestination(61446U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.5778277751640553;
    msg.base_lon = 0.7770306705984497;
    msg.base_time = 0.9810603697553717;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 19352U;
    tmp_msg_0.priority = 106;
    tmp_msg_0.x = 3598;
    tmp_msg_0.y = -2505;
    tmp_msg_0.z = 10506;
    tmp_msg_0.t = -28747;
    IMC::LcdControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 39U;
    tmp_tmp_msg_0_0.text.assign("DNABGQUAHTHFHYESEZIIMFLLEMJIQTGOALZYVFRTYRQZJENBNICNECHJFBQPKQGUXGIOVHJXCXXYWMNYRXBTWVCBCLMVBNSNOEMGBMUTDVRGIWSZOVXOADYRKOXUDKLLKSDPRSCUKEREPZAIIXARYJHMIUAPTLOVPDDJMOUXUBHMSLTKZOMFBXAVLHGPZJCTDHFFKAPJFWZGDSRVWVTWWWEHFNPFYUYLEGQCCKJAQDPSGWOPQRNQ");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.2996392976865704);
    msg.setSource(21461U);
    msg.setSourceEntity(48U);
    msg.setDestination(46045U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.7602090853638688;
    msg.base_lon = 0.6174062642722726;
    msg.base_time = 0.21665409600349894;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 40638U;
    tmp_msg_0.priority = -94;
    tmp_msg_0.x = 20884;
    tmp_msg_0.y = -7753;
    tmp_msg_0.z = -25792;
    tmp_msg_0.t = -2142;
    IMC::CcuEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 239U;
    tmp_tmp_msg_0_0.id.assign("IBQMFTPBUZQBAMOOJFEBKFXEWVZKKUPJSJYUKJRWHLWRIGIMHIEUHWHPWKPSCNSAURSFELACRZCLFGSGYOLVTLTGTHSKPNCCMVRALIVQBQAWBZIXHIJQHDFCDDCMYQNNEKQTYSPMXNXVRGWIOAODDJHXGEQHSXGVBEFCUWRPZLZKMUVLSYEPGRWFZEJJJJADCSMGRODUENUWKPYDHTZQTXTAVLX");
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("MAISJZPXSABQREDBGUMXUBWXAEOQQQNBVYVFMVBYDYCFONLSUYJUACJGZLZSKUGCXIIXNDJTRMLTKXKDBNHHPRGZDWIXWPVPLKESHPYIMYFNJMOHAKOEANZIFIZUSYCEVOVJJHRJCEVQBBPQWMAWXGZFTFNYGGKXSCUJVHSCTKITUVNMSWN");
    tmp_tmp_tmp_msg_0_0_0.visibility.assign("QXNQLBRLCGTGXZQSPFYFSUOKDSBTEDGLSPIGWLXWNGESSDIORRGOTMKTKXHAECJIVIBHVDNPRBNHFBQWXVPXMWTSVPIB");
    tmp_tmp_tmp_msg_0_0_0.scope.assign("QVWRDEOZOPMETLITDVABQRNCKHRHIWUSRDXQYGFEPUPCBUHDKWWWUITEOZDDSPKIXGMFFJGAFGFCNMESVYIMFZNQYKZZHBVTVKXJLHZLFJHSORANCYIHKIJDCXSOOTXBWBYUCRXTHJSXAIJRMZL");
    tmp_tmp_msg_0_0.arg.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.6374203539964433);
    msg.setSource(5253U);
    msg.setSourceEntity(196U);
    msg.setDestination(57160U);
    msg.setDestinationEntity(189U);
    msg.base_lat = 0.49104906279029015;
    msg.base_lon = 0.15706719724070173;
    msg.base_time = 0.9883753388114571;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 43916U;
    tmp_msg_0.destination = 35543U;
    tmp_msg_0.timeout = 0.1745971544566156;
    IMC::Redox tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2656921395877503;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.026695800437023354);
    msg.setSource(48946U);
    msg.setSourceEntity(8U);
    msg.setDestination(14299U);
    msg.setDestinationEntity(223U);
    msg.base_lat = 0.9168353372374112;
    msg.base_lon = 0.8263544454687126;
    msg.base_time = 0.2650486245615933;
    const signed char tmp_msg_0[] = {105, -56, 16, 109, -61, -112, -111, -112, -102, 63, -110, 108, 0, -127, -63, -62, 49, -101, 76, 23, 3, 107, -120, 109, -46, 100, -53, 9, -66};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.26240977975569846);
    msg.setSource(62597U);
    msg.setSourceEntity(39U);
    msg.setDestination(19306U);
    msg.setDestinationEntity(12U);
    msg.base_lat = 0.4105575336901527;
    msg.base_lon = 0.5236116097356314;
    msg.base_time = 0.040301316345142224;
    const signed char tmp_msg_0[] = {69, -71, 110, -83, 42, -82, 109, -25, 17, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.09578193778636224);
    msg.setSource(11578U);
    msg.setSourceEntity(38U);
    msg.setDestination(5323U);
    msg.setDestinationEntity(187U);
    msg.base_lat = 0.0014791413319231728;
    msg.base_lon = 0.08140749254408375;
    msg.base_time = 0.09936830837703015;
    const signed char tmp_msg_0[] = {93, -100, 7, -122, 91, -73, 121, 74, -61, -16, 4, 86, 20, 125, 69, 69, 77, -55, -53, -74, 71, 126, -64, -54, -13, -115, 102, 49, -3, 46, -123, -114, -128, -30, -20, -69, -8, -38, 91, -122, -65, -4, -74, -107, -123, -116, -15, -126, -84, -37, 75, 19, -127, 41, -38, 18, 40, 11, 19, 15, -119, 124, -93, -113, 3, -104, 106, -25, 38, 0, -97, 59, 79, 87, -98, -122, -117, -88, -70, 6, -62, -58, 84, 52, -35, 97, -83, -38, -41, -123, -19, -109, -111, 75, 6, -94, 9, -46, -115, -20, 101, -112, -66, 45, -81, -16, -67, -42, 2, 46, -42, 27, -89, 122, 39, 75, 69, 52, 102, -101, 74, 88, 73, 21, -86, 124, -53, 33, -79, -126, 100, -123, 98, -69, -104, -13, -121, 31, 60, -39, 16, -42, -111, -116, 88, 88, -109, 21, 40, -72, -27, 14, 18, 102, 20, 66, 87, -2, 100, 84, -82, -42, 14, 12, -90, -74, 55, 38, -86, 70, 80, -114, -25, -89, 82, -52, 92, 96, 44, -51, 1, 56, 70, -119, -31, 64, -118, 1, 75, 34, -98, -76, -121, 86, -67, 1, 114, -94, -82, 90, -99, -126, 45, 114, 122, 121, -107, -100, 116, 41, 91, -99, -109, -113, -71, 12, -48, -107, -52, -27, -75, -74, -81, 78, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.7927703520329835);
    msg.setSource(29938U);
    msg.setSourceEntity(19U);
    msg.setDestination(39855U);
    msg.setDestinationEntity(99U);
    msg.sys_id = 64862U;
    msg.priority = 11;
    msg.x = 13255;
    msg.y = 21700;
    msg.z = -28704;
    msg.t = 30382;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HESVTVJNDNJGYIFJHSRJWPEEUXGJAAVRDGNOOKDCBNWIFLTRKJPEZQRQUXQVQTVRZPNFXIMPKIADJSVHTAOIWSQTLNVJTBVGHQVPUUQGMUPMYCLYLOZYWXYEYKACJDSLQLPOIGD");
    tmp_msg_0.dist = 0.6522358375208759;
    tmp_msg_0.err = 0.7989358468164831;
    tmp_msg_0.ctrl_imp = 0.07821091203950448;
    tmp_msg_0.rel_dir_x = 0.26537751320927383;
    tmp_msg_0.rel_dir_y = 0.787908616862319;
    tmp_msg_0.rel_dir_z = 0.7301576294197084;
    tmp_msg_0.err_x = 0.13432079800529806;
    tmp_msg_0.err_y = 0.16310971955242826;
    tmp_msg_0.err_z = 0.9702475524070541;
    tmp_msg_0.rf_err_x = 0.3071494894150102;
    tmp_msg_0.rf_err_y = 0.630795113443904;
    tmp_msg_0.rf_err_z = 0.18363023066929718;
    tmp_msg_0.rf_err_vx = 0.7564913010756419;
    tmp_msg_0.rf_err_vy = 0.8200839825742271;
    tmp_msg_0.rf_err_vz = 0.4944375255454505;
    tmp_msg_0.ss_x = 0.5925805064808762;
    tmp_msg_0.ss_y = 0.6794003207091726;
    tmp_msg_0.ss_z = 0.8966251673654209;
    tmp_msg_0.virt_err_x = 0.48363893778669864;
    tmp_msg_0.virt_err_y = 0.9100934687193821;
    tmp_msg_0.virt_err_z = 0.5792351565111661;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.05595695827515745);
    msg.setSource(3849U);
    msg.setSourceEntity(185U);
    msg.setDestination(35391U);
    msg.setDestinationEntity(219U);
    msg.sys_id = 26842U;
    msg.priority = -1;
    msg.x = -26624;
    msg.y = -10620;
    msg.z = -7442;
    msg.t = 15005;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 136U;
    tmp_msg_0.value = 0.0034032836427463353;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.6544110435841459);
    msg.setSource(27260U);
    msg.setSourceEntity(238U);
    msg.setDestination(62502U);
    msg.setDestinationEntity(76U);
    msg.sys_id = 36928U;
    msg.priority = -7;
    msg.x = 20798;
    msg.y = -14183;
    msg.z = -14275;
    msg.t = 22224;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 30233U;
    tmp_msg_0.lat = 0.3640510948052834;
    tmp_msg_0.lon = 0.6809319547046746;
    tmp_msg_0.z = 0.3400436366134839;
    tmp_msg_0.z_units = 168U;
    tmp_msg_0.speed = 0.5533444054648226;
    tmp_msg_0.speed_units = 248U;
    tmp_msg_0.bearing = 0.9777315179398364;
    tmp_msg_0.width = 0.5792561654911067;
    tmp_msg_0.direction = 221U;
    tmp_msg_0.custom.assign("IHSQHLEYIOPPVBMHJHZXNZNDTXKB");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.7297113112105039);
    msg.setSource(36923U);
    msg.setSourceEntity(155U);
    msg.setDestination(12467U);
    msg.setDestinationEntity(158U);
    msg.req_id = 59479U;
    msg.type = 187U;
    msg.max_size = 56793U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.06517283670600094;
    tmp_msg_0.base_lon = 0.8161373467915825;
    tmp_msg_0.base_time = 0.9095949064488362;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 24582U;
    tmp_tmp_msg_0_0.destination = 5732U;
    tmp_tmp_msg_0_0.timeout = 0.3355045328821058;
    IMC::ReportControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 208U;
    tmp_tmp_tmp_msg_0_0_0.comm_interface = 101U;
    tmp_tmp_tmp_msg_0_0_0.period = 39440U;
    tmp_tmp_tmp_msg_0_0_0.sys_dst.assign("XZFRKEJENBMHTRVEOUPDRTDDYSACZSTAJWEBZGVWBSUQKISFKVDZSCYINHXACLZEARDWUFBPQPSFF");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.8679214483803038);
    msg.setSource(58120U);
    msg.setSourceEntity(156U);
    msg.setDestination(30587U);
    msg.setDestinationEntity(95U);
    msg.req_id = 52249U;
    msg.type = 84U;
    msg.max_size = 29922U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5189793520568294;
    tmp_msg_0.base_lon = 0.7107363067662853;
    tmp_msg_0.base_time = 0.07448434251090075;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.6225386048580198);
    msg.setSource(56550U);
    msg.setSourceEntity(4U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(21U);
    msg.req_id = 33542U;
    msg.type = 172U;
    msg.max_size = 32355U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8985680552283758;
    tmp_msg_0.base_lon = 0.8129678310070118;
    tmp_msg_0.base_time = 0.24812735493486737;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 56962U;
    tmp_tmp_msg_0_0.destination = 16525U;
    tmp_tmp_msg_0_0.timeout = 0.2121096889072217;
    IMC::Current tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.6847434660165665;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.24353841416761346);
    msg.setSource(40281U);
    msg.setSourceEntity(26U);
    msg.setDestination(25676U);
    msg.setDestinationEntity(195U);
    msg.original_source = 11343U;
    msg.destination = 4880U;
    msg.timeout = 0.12288478736913766;
    IMC::SatelliteRequest tmp_msg_0;
    tmp_msg_0.req_id = 17074U;
    tmp_msg_0.destination.assign("HZVPUVCIHUZZOKBIXNUNKFTCIFHMBOPMVDFBHXGXGMJZNYQHAQHRNKYVBBCOOKJYBRFJZTREUDJLRCNTMQFWLIATMHYF");
    tmp_msg_0.ttl = 37603U;
    tmp_msg_0.type = 20U;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 24356U;
    tmp_tmp_msg_0_0.priority = -21;
    tmp_tmp_msg_0_0.x = -21314;
    tmp_tmp_msg_0_0.y = 27036;
    tmp_tmp_msg_0_0.z = 1491;
    tmp_tmp_msg_0_0.t = 5188;
    IMC::CcuEvent tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 196U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("PBCWJERABJMBDYODASSMUJXVTUIUXEBLKXFXTAWXIVEJTOHWFYWOAHRVHRVAIETCZXUZWKZYTHOCPLXFLTVUKZOFAQMJZYLIMVCQRHFKTIGGTQPIFEXNFBWJLHAQQRPNDDLZPQKGZEPEHNSYDMCXIELPWMKNRWDLMIGMYPODEFCSNDLHYBVNQRBVDBNCDGNMYPOMKSEKIVSUNLICOWYCKOYJSJPCGGRFWAUSQJTKOZSHXUQFNAAUUZQVBZB");
    IMC::PowerChannelControl tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("ZLNOXTCOLIMLKVBHEOSRAXESYZYTXNYEIDDVDGTIDGOJNMRGAKKJSMCLHVRUURZYSNPSKKVRKPXCQELOMBDFRECJGYJEPBHHZHUJMCMBWOEEBNAQOOPILHIAGVWYCJUOSHNBPQ");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.op = 193U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.sched_time = 0.7415967385145165;
    tmp_tmp_tmp_msg_0_0_0.arg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.04388206056280497);
    msg.setSource(11722U);
    msg.setSourceEntity(65U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(132U);
    msg.original_source = 49934U;
    msg.destination = 2784U;
    msg.timeout = 0.9848752929643964;
    IMC::VehicleMedium tmp_msg_0;
    tmp_msg_0.medium = 93U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.7273544796518996);
    msg.setSource(50667U);
    msg.setSourceEntity(98U);
    msg.setDestination(47131U);
    msg.setDestinationEntity(26U);
    msg.original_source = 33244U;
    msg.destination = 17733U;
    msg.timeout = 0.050947552812800834;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.09101013308555939;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.9153678527563083);
    msg.setSource(61270U);
    msg.setSourceEntity(121U);
    msg.setDestination(43273U);
    msg.setDestinationEntity(156U);
    msg.type = 28U;
    msg.comm_interface = 50095U;
    msg.model = 23583U;
    msg.list.assign("PXPJDQMJMLPTOSHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.3199988381277734);
    msg.setSource(13670U);
    msg.setSourceEntity(196U);
    msg.setDestination(46097U);
    msg.setDestinationEntity(151U);
    msg.type = 47U;
    msg.comm_interface = 36961U;
    msg.model = 27459U;
    msg.list.assign("NOHCSSOGJXRRFNMJCTEEQVKBUYJLCKUAELATUGLFFEUQGDYPTVYCYWHBOBWJQKNRSMPEYKNXWASONRQDGLPGMXZLRLCMWGWGJIXJCVHFGZPTISGGZEANAJTCCBSHPKFZUVSLOIAMPQSTEKIHZLWDDTYPKRDVYHMOSDJXQJXYQXNUUXHTDBEZIMLHCBBIQOFZKFWFPF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.020749271624860732);
    msg.setSource(28323U);
    msg.setSourceEntity(67U);
    msg.setDestination(10209U);
    msg.setDestinationEntity(237U);
    msg.type = 231U;
    msg.comm_interface = 36110U;
    msg.model = 58902U;
    msg.list.assign("RESAFKSKDOGTLYRJRFAJYUNBHDEJBUOQNHCGSPELHBXLDTFUPQCUGOCMFRZYTMODKYWFWGBZPOIWEOUCNQVLQMDDETEDPYVGLNBLBWTHBQVZQMJCRNIRJIEWDSHZPZKRHWTSWUMOPPTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.44050717134311645);
    msg.setSource(55101U);
    msg.setSourceEntity(50U);
    msg.setDestination(21015U);
    msg.setDestinationEntity(232U);
    msg.type = 185U;
    msg.req_id = 1106650264U;
    msg.ttl = 3971U;
    msg.code = 58U;
    msg.destination.assign("AXQAVHRTOXGGUYNSNCEDEENWWBCKFEYCXAPRZPSLPPDKJIGVEYXMETXKWIROGJFEIDJSZGLIQMTQRVNBBIGVPHYYNDQRUFHBCJMLXKMULMZVWLCGHIOCCQB");
    msg.source.assign("NKRLGHZEONEWTQB");
    msg.acknowledge = 188U;
    msg.status = 57U;
    const signed char tmp_msg_0[] = {12, -23, 10, 81, -65, 51, -62, 81, -120, 30, 67, 80, 14, 80, 52, 38, 17, -57, -70, -72, 74, -45, 14, 18, -25, 38, 15, 47, 65, 21, -112, 76, -123, 118, -1, -58, -61, -66, -33, 22, 63, -29, -71, 4, 12, 54, -122, -11, 77, -49, -105, 118, 104, 34, 116, 76, -116, 77, -28, 108, 91, -88, -82, 107, -73, 119, 113, 56, -42, 124, 1, 65, -16, 27, -127, -28, -29, 53, 15, 9, 117, 31, 122, -59, -122, -88, 53, -55, -80, 17, 9, 24, -6, -43, 106, 111, 52, 38, 26, 68, -54, -124, -96, -119, 124, -32, -83, -99, -58, -16, -20, -70, -29, -73, 73, -113, 45, 23, -66, 102, 1, 60, 110, 9, 124, -20, 64, -75, -10, 113, -24, -120, -41, -100, -99, -108, -40, 67, 111, 56, -38, 13, -121, -68, -23, 68, -87, 1, 33, -41, -125, -102, -61, 0, 37, 91, -82, -3, 87, -11, 44, 7, 116, -57, -30, -44, 74, -14, 56, 65, 80, 56, 114, -10, 47, 58, -15, 68, 47, -83, -100, -121, -67, -41, -83, 90, 115, 26, -114, -57, -71, 81, -126, -43, 105, -56, -67, -46, 30, 121, -13, 64, 36, 16, 51, -36, 42, 17, 31, -7, -48, 24, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.9245328280901368);
    msg.setSource(61827U);
    msg.setSourceEntity(235U);
    msg.setDestination(21139U);
    msg.setDestinationEntity(100U);
    msg.type = 164U;
    msg.req_id = 1374862622U;
    msg.ttl = 20993U;
    msg.code = 35U;
    msg.destination.assign("QJXEKDREOFELGYDFAIILCTWBTZORUSJRWPSVACCXNNQKSKLRQSHKNWOSGOWFHVWTMIDFQDFIXDOPLUGIRHHTOUSBHQJCYQYFGUMZOAZGGTFMMOTJDYUYQAPBKQTEXBOXZZRKQLAAXTLDBMKNFNAGXBBYHTY");
    msg.source.assign("WJLIHUTPHFTHMJYYYGSEYNWNFXGOAJCPHLYSIQORKPLQIQKDKFUCMRRJUXQJVESFUCDIEKNBQKSZWLZKWOUJUCIQFAACQVBQPTXNN");
    msg.acknowledge = 201U;
    msg.status = 9U;
    const signed char tmp_msg_0[] = {-11, 111, -2, 98, -20, -123, -120, 28, 55, -6, -67, 97, 107, 34, -124, 46, 0, 93, -23, 37, -7, 23, 74, 53, -29, 36, 86, -47, 100, -119, -98, 100, -9, -105, -104, 13, -21, -93, 79, -75, 102, 26, 76, -82, 39, 121, -14, 17, -91, -103, 51, 113, -77, 121, 117, 32, -12, -3, -70, -60, -16, -75, -81, -97, -106, -77, 15, 36, -67, 53, -102, -12, -12, -77, -22, -108, 93, -111, 45, 31, -84, 7, -115, -21, 110, -67, -25, 112, 116, -35, 57, 65, 63, 63, -86, 81, 82, -16, 77, -4, -113, 107, -29, 78, -86, 20, 122, -70, -42, -43, 55, -20, 89, -58, -117, -27, 91, -100, -78, 32, 24, 58, 99, -124, -94, -42, 60, 63, 70, -52, -68, 84, -6, 63, 107, 71, -65, 61, -36, -49, -118, 36, 24, -112, -106, 121, -78, -65, -3, -90, -56, 80, 15, 113, -104, 84, 45, -31, 118, -52, 41, -35, 122, 92, 70, -82, -55, 45, -67, 37, -69, -103, -47, -123, -56, -40, 26, -60, 33, 46, -82, -37, -125, 36, 81, -37, -9, -67, -111, -43, -2, -25, 68, 92, 64, 99, 112, -54, -120, 121, -80, 84, -82, 13, 83, -57, -14, -98, 33, 52, -49, -91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.187095578191669);
    msg.setSource(49348U);
    msg.setSourceEntity(155U);
    msg.setDestination(23510U);
    msg.setDestinationEntity(32U);
    msg.type = 5U;
    msg.req_id = 3188221856U;
    msg.ttl = 54119U;
    msg.code = 72U;
    msg.destination.assign("EAUHFCRIBQCGKYDEJGHWJDOVTODSHGEXJLHFEEXZNCTXDOQUHGNLGVFMUOKWMRJHWTSYMKSMFQVSBKLNRFIUSDLVDITEYGOBZOFYIXBMDZLYUC");
    msg.source.assign("AMFACXCKBZSVRFRUUSEVBBDNWWETXIQPQDYWJIUVQLANBSYKGBPKMNNSCNHIVKYWAOIDHHGEKPNTMKJGFHXRXTQNYJFELPQIBZTOEPUXGSZWJXIOXZVSVVBLYFWFUMFDJCPCOETJZRRZWCJQOLKCWV");
    msg.acknowledge = 80U;
    msg.status = 194U;
    const signed char tmp_msg_0[] = {-62, 71, -120, -55, -61, -120, 33, -59, -124, -99, 94, 120, -104, 29, 101, -24, 120, -29, 19, 54, 62, 123, 14, -119, -29, 87, -82, -26, 120, 2, 58, -53, -89, -25, 126, 59, 48, -78, 90, -26, 111, -42, -95, -99, 13, -124, -27, 69, -116, 39, -57, 89, -74, -100, 96, 51, 26, -15, -91, -32, 42, 56, 21, 5, -83, -69, -37, 80, 98, -7, -88, -52, 83, 78, -28, -13, -77, -107, 56, -55, -63, 112, -27, -110, -87, 73, -103, -74, -77, 79, -65, 110, -18, -78, 126, 46, -68, -104, -97, -66, 28, 100, 2, -88, -57, -123, -127, 102, -30, 105, 21, -71, -15, 65, -116, -72, 19, -86, 22, 77, -73, 111, 121, 65, -60, -41, -97, 68, -50};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
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
    msg.setTimeStamp(0.49242128415890807);
    msg.setSource(5674U);
    msg.setSourceEntity(169U);
    msg.setDestination(2487U);
    msg.setDestinationEntity(53U);
    msg.id = 161U;
    msg.range = 0.6538192793214579;

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
    msg.setTimeStamp(0.14629883923929277);
    msg.setSource(52403U);
    msg.setSourceEntity(245U);
    msg.setDestination(44837U);
    msg.setDestinationEntity(117U);
    msg.id = 165U;
    msg.range = 0.06946523690523021;

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
    msg.setTimeStamp(0.1500260833827275);
    msg.setSource(50105U);
    msg.setSourceEntity(137U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(145U);
    msg.id = 85U;
    msg.range = 0.426911484383496;

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
    msg.setTimeStamp(0.16761472355925755);
    msg.setSource(33196U);
    msg.setSourceEntity(29U);
    msg.setDestination(13014U);
    msg.setDestinationEntity(39U);
    msg.beacon.assign("RUYDUMHJPUZGYLDBCOBAZAOILAXYJNRZHQNMAVKEAVQNYKEEFWJLRNTBFBDRVCFMTWIXMFJSHKHMXHTAIOEGLWFSDFKQEHAIPYVYOGVFWNGIQQXUGGDNUTWCKJTRSOWBYVBKBNDOSXQNYXVURJJUPXLVGZGCICDGAEMIODKSJWWBWYYLCDULTSSHENQQSPREZFIPZBZONCIMCOPKPUWTSRURIKEP");
    msg.lat = 0.0755600888333593;
    msg.lon = 0.37807171212682444;
    msg.depth = 0.9394199613565322;
    msg.query_channel = 87U;
    msg.reply_channel = 110U;
    msg.transponder_delay = 79U;

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
    msg.setTimeStamp(0.34651231937396576);
    msg.setSource(37382U);
    msg.setSourceEntity(102U);
    msg.setDestination(37773U);
    msg.setDestinationEntity(16U);
    msg.beacon.assign("RTEJAQAANDMYXQQRXSMSAZBEDQVLWNRLVOTTDWRPVACUZIMMBVPOYTURYQZTBROIXIWKBNFQKGTHYPKZGGKWYCFKYFDUSSMXUDYVAEIXSLWOUOPJHFHSTLQPLTDPBQLHYXIDYVVCVFJVMUBUCMJNECYONEC");
    msg.lat = 0.5108347468266697;
    msg.lon = 0.2087176731690824;
    msg.depth = 0.0661366285885211;
    msg.query_channel = 30U;
    msg.reply_channel = 134U;
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
    msg.setTimeStamp(0.6173164188813791);
    msg.setSource(26335U);
    msg.setSourceEntity(156U);
    msg.setDestination(38773U);
    msg.setDestinationEntity(51U);
    msg.beacon.assign("SZEHKAIUDRDIDJEFABCWXGNVPWTOJXRIFCXSMGFPLLWOEBHXSTHJTSADUHERNEBGULLRZONASYCITAPDDLWYIFVFQOKKNWUNPCPVVKLTVHLYXPSNQRIINZYETGMEMTCEFMQZXLMQHXQGCAVBZKROWOGFLDYGIZYZBBUWTUVQPOJGKFRWTBNRMOHXPRYJKCQGCMUZCGIVSAOSKHVSIQYWEJUWZPPAKJQBVMHSODKRUFBMTEXXHUNLBCJDMQ");
    msg.lat = 0.4154505982372816;
    msg.lon = 0.8922633822021567;
    msg.depth = 0.7838690008100428;
    msg.query_channel = 240U;
    msg.reply_channel = 82U;
    msg.transponder_delay = 236U;

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
    msg.setTimeStamp(0.9858272549449443);
    msg.setSource(34009U);
    msg.setSourceEntity(52U);
    msg.setDestination(9566U);
    msg.setDestinationEntity(83U);
    msg.op = 225U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NSIBUVAAXJEDXDECBYNMWXSUICDRHAQQGKFTJPXTZKWKQLBHQNCFJQOMKKKLTYBZMMLWSGUCCHIMBIUTR");
    tmp_msg_0.lat = 0.040132680746052696;
    tmp_msg_0.lon = 0.20382946209512842;
    tmp_msg_0.depth = 0.5095367948172815;
    tmp_msg_0.query_channel = 70U;
    tmp_msg_0.reply_channel = 98U;
    tmp_msg_0.transponder_delay = 6U;
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
    msg.setTimeStamp(0.15383615984569798);
    msg.setSource(50279U);
    msg.setSourceEntity(18U);
    msg.setDestination(15949U);
    msg.setDestinationEntity(55U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.11606065611769245);
    msg.setSource(52915U);
    msg.setSourceEntity(37U);
    msg.setDestination(45917U);
    msg.setDestinationEntity(19U);
    msg.op = 12U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZMCQVDZAFZBUIQFEDVTRZQ");
    tmp_msg_0.lat = 0.7791795367139098;
    tmp_msg_0.lon = 0.12356303604655605;
    tmp_msg_0.depth = 0.39566890610430705;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 95U;
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
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.5965891000815324);
    msg.setSource(11085U);
    msg.setSourceEntity(105U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(236U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.919837426923995;
    tmp_msg_0.speed = 0.6550736511574354;
    tmp_msg_0.turbulence = 0.026930082418057943;
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
    msg.setTimeStamp(0.7674228953244564);
    msg.setSource(52192U);
    msg.setSourceEntity(94U);
    msg.setDestination(50294U);
    msg.setDestinationEntity(174U);
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("PCSUEFECNDJDURVXVSUKTYJGVYSXVWTMZZOIPNROHCFTWBHNHXCHAZXHDJALEEUTBWHXAGQVUOJCXIFLDFITNKLIEACNUVPWJNAJSMMIDTYVFONRPGDWCFGPCULMTYXBFZASLOSJQDNFTRYTXRKYVMZBICIMGRAQGBCWEQHTZWAPKLAIOKGKLWRRZPEUON");
    const signed char tmp_tmp_msg_0_0[] = {-127, 76, 110, -70, 122, 96, 91, -2, 82, 97, -96, -10, -87, -128, 40, 87, -82, -30, -27, 43, -125, -86, 104, -10, -99, 105, 67, -14, 48, 52, -75, -75, 12, -84, -86, -100, 84, 37, 29, 7, -127, 16, -107, -83, -19, 77, 99, -124, -8, -70};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.2448975344220311);
    msg.setSource(1535U);
    msg.setSourceEntity(48U);
    msg.setDestination(3277U);
    msg.setDestinationEntity(169U);
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("QJTTYJPKKBEVTSFJFOMRADWLMGOVJYPSAOQIYXBLHGJIUZERQKJVCDFQTQCOMMZSADERZOLVNOUMYJUGMLEAPAGBOGAOZKLMSQNKVVT");
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
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.530598502907486);
    msg.setSource(14027U);
    msg.setSourceEntity(3U);
    msg.setDestination(24559U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.261327129379215;
    msg.lon = 0.8152658117271497;
    msg.depth = 0.24940564503786522;
    msg.sentence.assign("LJYTTQQSCJGFZEJEPQOGWZSENGCPXYDFEWLYLNCAHJRHJYGUAPSVLSVIPCXMIQQYXIZZAFIDGYPPOBCGLUQUWEQMKAITBDTHLXKQGIRMVQHPNPMRIZUOBVAYTAIBKCDOMDXXYJOOJDCUWTCRWZVUSIDDNCRVSYLRSVTEEMXEBKJDRHXATFBWCBGVWPFRJBOKMHRAWBTKZNHNOMNIZFPHMEGXUZS");
    msg.txtime = 0.1241700854681177;
    msg.modem_type.assign("RVNSXOQGJQIHVCMWZFTABYUXQCRZDXJNYGRWZAUJCWMDIGEOYFBXRDKGIJNVBRDLJBDNUSZKIEVFHMQNZWAUPHILNMJASKHKVHGHJOFEAKOTZOBYYBLRBPWQPOYWZMXGPTSPWMCMCPGEQTQZASLARPUSLTMNAVDITBEUCKDOZDCJXJSVVWNVPXGMCYSQLTUBRKAKAGWYHYDFWPDLYFCEPQFEMKX");
    msg.sys_src.assign("BKOIQHUJFWRNBGYIFHSQVGXZHQTTUZKEMULRRAVHDUBNCUEWZZWWAGGRMRQHXSHEJUXASVBENLKRDEYJXNATXYMWQDGOFNJZTYIFQPDCRSLOAAKKQUINPYJFZZKTAPVHDBVCTYDFUKXGMAMLXOCPFUMNQRYCQCXITWZCSFEQIYSDRFFWLPGENHLOHLJDTKJCABVBWMRVOPGIPCJUE");
    msg.seq = 3628U;
    msg.sys_dst.assign("DKVTOMAINIGFKDJHVPMSBZEXMOWWYEXWEADQAFLOKPRHOIDTUJTSHVDNLBELJKVYERMTOESURCRGEZTFWWLCQBWQYXJSDWNWKTXCZJDMGHTXHQPHOSUNFALZIEBBKOVMUGYAGMCLCBJQXAVEKAMFLIFIOJPRSTJPGNPDLSLBAMRYXUPBMPUDRCUUKYYRJSBWQZFNZBPXZKHHJOFRPUAHYXGCQYINYGICDSIXGFVUFC");
    msg.flags = 193U;
    const signed char tmp_msg_0[] = {-36, 7, 75, 103, 88, -35, 1, 54, -125, 36, -90, -109, -117, 32, 30, -62, 81, -57, 34, 30, -112, -100, -58, 78, -91, -104, -123, 48, -55, 8, 46, -17, 76, 24, -23, -69, 10, 124, 19, 120, 48, 39, -54, -73, -93, 96, 33, 18, -126, 3, -31, 98, 30, -18, -100, -86, -117, -86, -18, 27, -23, -36, 1, 79, 47, -14, -12, 102, -121, -32, 2, -108, 28, 76, -50, 84, -101, -33, -128, 82, -24, -115, -115, 107, -120, -17, -25, 93, 88, 77, 21, -66, -76, -105, 55, 106, 12, 97, -120, 58, -71, -126, 24, -18, 32, 23, -82, -87, -114, -97, -88, -8, -80, 1, 109, -12, 36, -39, -12, -52, 8, 122, -59, -49, -121, -97, 58, -34, 72, -79, 67, -52, 116, 83, 81, -27, -61, 64, 86, 19, -118, 61, 61, 28, -118, -77, -105, 83, 51, -43, -89, 54, 42, -52, -11, 71, -94, -57, -68, -8, 23, -109, 12, -126, 66, -106, 35, -71, 20, -84, 39, 71, 116, 5, 24, -88, 8, -38, 7, -8, -45, 63, 103, -56, -122, 54, 124, -62, -17, 87, 41, 28, -88, -7, 63, -104, -4, 70, -67, 37, 106, 99, 21, 5, 44, 20, -21, 108, -18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.005591653466403557);
    msg.setSource(8558U);
    msg.setSourceEntity(89U);
    msg.setDestination(9615U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.9734057543342808;
    msg.lon = 0.6814438845210321;
    msg.depth = 0.5253110301139264;
    msg.sentence.assign("IXHVFCOHOLTREBNGHQOGHEUYYRKXISMELBQOFMYVJHGGHDZAVASMZJTAWMSVSTPTKPVIXLJUXRLVUIKEQQUFIUXKCUYIWOLHYMMPUAMQFUFPUCQSRVBOFEGWBNNJWWVPZJGAMGIELFFGYJTTZGNBZZWOXREABIPWYASCTYCB");
    msg.txtime = 0.49950400119266514;
    msg.modem_type.assign("BMMPWBPSUQWRODHLDZLLUHKTKVECGUWONHFEGXYQXHDKMDZQYPBJVWPJRFPXVGXGMHRSOJUOKRVACQSUIGYINOUMWNTFNCTCYMWRBOEBDZTYFJTXFXLCTSLJVAKRANYGTGSCMEKVJQLCPHWIQRPATNANEALQENEXFAKQSEABLIUBK");
    msg.sys_src.assign("PVIUVWTAQTRDRVHLEKRABJYVFSHFEZGONQ");
    msg.seq = 26988U;
    msg.sys_dst.assign("HUERWKZFPYPXTFAZYWVVIBCHF");
    msg.flags = 19U;
    const signed char tmp_msg_0[] = {92, -50, -77, -79, -56, -109, -93, -18, 94, 125, 90, -10, -14, -103, 124, 52, -67, -46, -40, -101, -42, -126, 83, -122, 125, -56, 87, -22, -42, -30, 122, -112, -20, -69, 104, 97, -50, -10, 74, 75, -65, 106, -39, 55, -1, -22, -58, 16, -96, -41, -13, 102, 112, 0, 66, 46, 48, 6, -120, 86, -82, -71, 70, 81, -38, -114, 0, -80, 102, 65, -63, -118, 2, 9, -80, -100, -20, 74, -40, 56, 86, 57, 39, -46, -64, -128, -31, -72, -38, -69, 47, 27, 17, 93, 63, 116, 58, -65, 62, -127, -61, -70, 105, -127, 62, -61, -37, -78, -80, 19, -116, 31, 124, -114, -121, -13, -4, 100, -50, -74, -61, -100, 58, 35, -120, -82, 69, -120, 39, -18, 116, -57, 105, -10, -94, 33, 97, -121, 51, -112, -54, 56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.4931260933766466);
    msg.setSource(63509U);
    msg.setSourceEntity(90U);
    msg.setDestination(16834U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.72518613248796;
    msg.lon = 0.7893185679198548;
    msg.depth = 0.5000335123816294;
    msg.sentence.assign("JGMWPFFGUVSPVVAOCFGICFVXGSEJOEMDFYQHBCRBLJPIMWFLOOJHBBITUNLXMDNCOMREEDCZJDWUUQAIPLRTZVNPHATKHVEBXNNKCFNJSLDYMXKVDGHUNEDIIKOGOBQHLQLPHJTIDREZFPGOUOCYQWQSUFQKPBXJWTQHGLUWYKBTFWUREZRVHKTSXT");
    msg.txtime = 0.7959270534519847;
    msg.modem_type.assign("YEXGDRADFJGKQJPUBKOGEAWITKOBKHVXJDTMREIMQANQTQYZRQMDVXWNMQZWYUSNPHRBLLLOMMKIJTNXWFLCTJPULEGMMYGGULPYAIBPCRFSSGAYAFRNAFNXCIP");
    msg.sys_src.assign("RDDRDDVQHPFUEMFKUJLSVKZVTJBYCYJXGSIVOXMBLHTQZOGIJXFLAXHVAIEZOBLXPJACUNEYTUNUPULCTJWOQEEAZDXBNRNHZEYZFWCLVCPGINCQOPCEJRYTORJWASLXAIPPWCZAGTVUGABWDXKFMFZFYLSVMU");
    msg.seq = 15175U;
    msg.sys_dst.assign("ZBARACQNBZBJUJDGPBYILLVMGMDXRSTVKFJZZUPWBEUXOALBOJFXHKITQNCKXRTDYFJOJNYSPFYQCPSUHDLMCNBK");
    msg.flags = 249U;
    const signed char tmp_msg_0[] = {115, 28, 96, 53, 55, -66, -125, 9, -14, 32, -29, 10, -112, -84, -124, 31, 4, -23, -18, -42, 102, 50, 40, 107, -3, 68, -32, -64, -108, 92, 109, -103, -75, -13, -91, -108, -20, -41, 93, -114, -9, 63, 95, -97, -94, -85, 69, -42, 12, 16, -94, 89, 28, -51, 100, 110, -92, 93, -119, -43, -59, 88, 0, 108, 2, 117, 34, -68, -112, 35, -78, 113, -63, 78, 26, -119, 9, 31, -97, -42, 58, 71, -124, 110, 59, -53, 91, 100, -106, -8, -87, -92, 114, 103, 103, -78, 2, -77, 125, 65, 4, -48, 39, -65, -56, 59, 118, -17, 121, 87, -45, 119, -44, 120, 81, 108, -31, 58, -50, -95, 9, -118, 91, -101, -10, -92, 51, -35, 52, -102, 52, -4, -73, 35, 110, -61, -113, -51, -123, -117, 2, -32, 60, 14, -22, 25, -20, -78, -110, 121, 84, 88, 2, 11, -98, 58, 11, 8, 95, 81, -96, -67, 5, 49, -65, -35, 34, -41, -10, -106, 118, 108, 97, 82, 44, -10, -46, 51, -66, 3, -107, -47, 62, 38, -70, 99, -109, -22, -17, 6, -12, 45, 94, 36, -31, 23, 104, 29, -86, 31, -10, -101, -35, 106, -11, 104, 80, -117, 7, -53, 99, 57, -46, -125, 115, 22, -72, -100, -83, 68, -74, 85, 49, 119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.668798693094512);
    msg.setSource(22745U);
    msg.setSourceEntity(179U);
    msg.setDestination(41438U);
    msg.setDestinationEntity(173U);
    msg.op = 154U;
    msg.system.assign("LDTDHDMQAMATRWCPNZUKPVUJWPGZYLMGFIWYUHXGQIVNQXISBSJSMBP");
    msg.range = 0.9639655412571573;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 38107U;
    tmp_msg_0.duration = 41999U;
    tmp_msg_0.speed = 0.8067785331024543;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.x = 0.864674279992509;
    tmp_msg_0.y = 0.7415423314995373;
    tmp_msg_0.z = 0.2414504796578526;
    tmp_msg_0.z_units = 243U;
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
    msg.setTimeStamp(0.7768280862241034);
    msg.setSource(34441U);
    msg.setSourceEntity(46U);
    msg.setDestination(55750U);
    msg.setDestinationEntity(207U);
    msg.op = 61U;
    msg.system.assign("MHCDUZAXXAFSLPOQHYBORYLAGDEIGBUXFCTVJGCNOIUNFYJUCLUIJVYICICMHX");
    msg.range = 0.1182909685477661;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 31U;
    tmp_msg_0.quality = 226U;
    tmp_msg_0.reps = 51U;
    tmp_msg_0.tsize = 11U;
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
    msg.setTimeStamp(0.03548915914598871);
    msg.setSource(37827U);
    msg.setSourceEntity(84U);
    msg.setDestination(39887U);
    msg.setDestinationEntity(154U);
    msg.op = 110U;
    msg.system.assign("NFDWQZTELVJDEKJCOLDFQVAGCSKUFXBPJTWNAMHZNNILXFJBLEZBXAHOXOJZYFHVHAKSNVBHEVOKATMUNWZISSGGIYZKRUAFUPCTIJFUQGOMYHWFMNBUTKZIERRPGECHYHORATBHCIDLSSPMMMWWEDJLQTAPKQCWTPPCIWLSOEXSWDBPJSURLSFQYIYZQODHXFKXVNQVOUYOTM");
    msg.range = 0.5488082884363633;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 223U;
    tmp_msg_0.ncells = 171U;
    tmp_msg_0.coord_sys = 239U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.5945824969927701;
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9496512497704637);
    msg.setSource(12380U);
    msg.setSourceEntity(51U);
    msg.setDestination(46547U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.5930268549427569);
    msg.setSource(1331U);
    msg.setSourceEntity(175U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.8703296632762213);
    msg.setSource(35721U);
    msg.setSourceEntity(40U);
    msg.setDestination(7113U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.8738717843094388);
    msg.setSource(51431U);
    msg.setSourceEntity(69U);
    msg.setDestination(28954U);
    msg.setDestinationEntity(200U);
    msg.list.assign("QSOIAZRNBWCMFJRRVZJLEDSGVYXZLRBYXLRJYYBFGEWLUABBODNUKOWZFIOZCPXZOIUCQVWBSIAHEUVZUYAKIGITGYGDWTRTASXGVDJHBUHOJGKRKZPFZSMDXDFKEBMAZQMROTMCMCKWAR");

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
    msg.setTimeStamp(0.3143550838179021);
    msg.setSource(44056U);
    msg.setSourceEntity(186U);
    msg.setDestination(57619U);
    msg.setDestinationEntity(90U);
    msg.list.assign("TOGETWOBLXWWCLOFTBTFBYXNXHRDCSLBPHVNEMMRQHLMUNQINZIZEMDSLKYSVTVSYNEZFYMDEFAUXOXKAIZZQQHQNGEBTJAYGEMKNNRTMCGAKCDJFZIHAKWUQHNAQZTDRULJPIKOVSKAFURMUASMHWXUIEROYXQHJKTQBUVZKVIJGDKJPDRLAFOCCDYHIFGEVOPWSVINCLWDJBFLWCP");

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
    msg.setTimeStamp(0.07590598360795486);
    msg.setSource(29470U);
    msg.setSourceEntity(127U);
    msg.setDestination(51922U);
    msg.setDestinationEntity(162U);
    msg.list.assign("FXXMRJHRNRVNOGMEKFJYESPCECGLSXUENEWUFPSXTQPHOFFMMDEZRYOWCAXGKFBMUQBJTWQSGIJKRLBOCDGQSFLIKXBTOLKOAUKPSDDLNQICZQPRZMHWU");

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
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.9146487784722254);
    msg.setSource(54087U);
    msg.setSourceEntity(161U);
    msg.setDestination(52572U);
    msg.setDestinationEntity(31U);
    msg.peer.assign("KASFKSKCDGJTVWQHQZBKXPEBPXBUEEDNRKJHSBZXVPPFLNHAROVNOMLIUCILRZGZWWKKJDDUQSPDFAXRSZCUNBDIDLP");
    msg.rssi = 0.5319090371336385;
    msg.integrity = 12405U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8316287375042184);
    msg.setSource(38804U);
    msg.setSourceEntity(252U);
    msg.setDestination(24644U);
    msg.setDestinationEntity(140U);
    msg.peer.assign("OZLFVPYMREREQYYRWXEYXKNPLZDPJNORLZQHUMPFTLTCEGSYWGXBBRDURZSHXBWLFSVATVVMFJDUUQXOUHHBUWDILAKIMDYXASMHNKHLUIHDTO");
    msg.rssi = 0.012295377008453734;
    msg.integrity = 58762U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.4890653144053446);
    msg.setSource(26411U);
    msg.setSourceEntity(164U);
    msg.setDestination(35865U);
    msg.setDestinationEntity(2U);
    msg.peer.assign("BDXHPTHFOX");
    msg.rssi = 0.353588223002276;
    msg.integrity = 39461U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.7607792245097507);
    msg.setSource(7513U);
    msg.setSourceEntity(29U);
    msg.setDestination(14267U);
    msg.setDestinationEntity(193U);
    msg.req_id = 23612U;
    msg.destination.assign("EFYYZRUBSNHTMVRBAKRLEFNFHSVNLMOYATOEIVECAJRKFDKQBRRCNPNROXGYICOMTMMXZQLOSDPWSACFLDODNQWMPNBSZGJVZWFLTLVWZKY");
    msg.timeout = 0.5581774891433603;
    msg.range = 0.7005037880406062;
    msg.type = 110U;
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.4401368859511483;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.14188825340491595);
    msg.setSource(43663U);
    msg.setSourceEntity(91U);
    msg.setDestination(56541U);
    msg.setDestinationEntity(137U);
    msg.req_id = 6992U;
    msg.destination.assign("JXMXDYFEIJPNONAIDMKBGGOLDOZIDETQVXBUKEVESQRFDNLBLSEZYNJPHRJTHNVSBELKQGDBAZCTHYDLRVSIPARTZNCUDMCFHK");
    msg.timeout = 0.3458466501343398;
    msg.range = 0.29437718213381125;
    msg.type = 243U;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 120U;
    tmp_msg_0.longain = 0.3307463335008093;
    tmp_msg_0.latgain = 0.5399300100445296;
    tmp_msg_0.bondthick = 2169321466U;
    tmp_msg_0.leadgain = 0.44887891823093595;
    tmp_msg_0.deconflgain = 0.18997809948960254;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.7927621709941062);
    msg.setSource(62682U);
    msg.setSourceEntity(81U);
    msg.setDestination(64622U);
    msg.setDestinationEntity(91U);
    msg.req_id = 42263U;
    msg.destination.assign("YBIBBDWCPCDHPJOTYFSWKGKNCUWQIQJRCWFCBEOSJFYUNXQGPRDKIZIACKHOXSUUZENTZVKMAJHZVWDCILASUEUSNBKPTDYZLVTRWDGZHNNFMFGXOGVFIUZNHIPVEJODZLSLKFGTVHLRAALDGAFVPBKTQIHMXPEZVCUBCWESVRPFAIRORRQYNKQCNLRJXELLIMYGKOQOATOMWXWNQYSLTVGXJGYEJXTUQY");
    msg.timeout = 0.8619046166020141;
    msg.range = 0.31947942897967585;
    msg.type = 205U;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5449312143605332;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.17379410994531375);
    msg.setSource(4368U);
    msg.setSourceEntity(201U);
    msg.setDestination(4634U);
    msg.setDestinationEntity(249U);
    msg.req_id = 34352U;
    msg.type = 151U;
    msg.status = 13U;
    msg.info.assign("TGMPGBXHSWUINOJRGXAOWFWNOIWQMTFDAKQRVSSCEREKAEALCYUJFMNFECFALWRICDXNBJQTMKITYLKLSFRKGGBDYZOVQJUEZBRDSCHKHSKZIPYFPGEMPTUGNZLPWCHMHHUNTWRVCCHMVXJKJDUORUHGAUEWOIJZOLXBNWSAAMZFLSKYTYJ");
    msg.range = 0.7649676430744445;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.6134464968997745);
    msg.setSource(27209U);
    msg.setSourceEntity(177U);
    msg.setDestination(32556U);
    msg.setDestinationEntity(30U);
    msg.req_id = 14594U;
    msg.type = 115U;
    msg.status = 241U;
    msg.info.assign("BXYPQAXJPOTEJXYCUVKBXXVAOAAQVRAPWQXLYWRZFSSVFTAZXGGCARLWNUDQOMNJSCUDNPKNQRIYLWXLCGQNDXJBGEMZVWGIUDUZBOMHFMTJGCCCKWDMFXYPWHZKTHVNSBIEJJINBIHMQKOVDKSVSRMZKLZPEZIHYMPSOISADGEDNZIWMLWKEJR");
    msg.range = 0.14137750934723503;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.6838681926262289);
    msg.setSource(28649U);
    msg.setSourceEntity(204U);
    msg.setDestination(26441U);
    msg.setDestinationEntity(200U);
    msg.req_id = 2213U;
    msg.type = 186U;
    msg.status = 155U;
    msg.info.assign("SKOVAFJLTZHEGUYFOVTOLQJJDVJWFLQFXJUQGBGPFMTZHUIZYPLYA");
    msg.range = 0.9327110544750297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.3525572758084389);
    msg.setSource(14549U);
    msg.setSourceEntity(227U);
    msg.setDestination(24578U);
    msg.setDestinationEntity(196U);
    msg.system.assign("MBYGVLFNFLLMIKKATFWKRHHMFZARUVXEDAYAMPNHYGUUQPTJSOIZCETIZXYGXUITCARXAQBXEXEWKOGHYQGDNZHRCNSDNBSLULVJONVBTALWDQWKQSKT");
    msg.op = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.9155279190598722);
    msg.setSource(47561U);
    msg.setSourceEntity(181U);
    msg.setDestination(35906U);
    msg.setDestinationEntity(79U);
    msg.system.assign("WJIWTJTSJZ");
    msg.op = 111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.3977049587171245);
    msg.setSource(52994U);
    msg.setSourceEntity(122U);
    msg.setDestination(4473U);
    msg.setDestinationEntity(82U);
    msg.system.assign("JCRBAZNHZMWFWIKTMJPWQJGCYXGOERPBKKFZQGFNSEPKJTYEXYCMAYTOBISCOZJRCUVNLIGQIMJXZCERNWXQQUPNHUPRHXZAJDKEYAXDISJTUCMODWAEUVLSQUGNLSHXHPRZGYFLPQGDFZSMGULEOCYVIWLIFNOKBHIIAWKJR");
    msg.op = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8898274911010242);
    msg.setSource(62529U);
    msg.setSourceEntity(115U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(171U);
    msg.value = -1253;

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
    msg.setTimeStamp(0.9510099390422879);
    msg.setSource(11842U);
    msg.setSourceEntity(94U);
    msg.setDestination(30155U);
    msg.setDestinationEntity(5U);
    msg.value = -12066;

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
    msg.setTimeStamp(0.5865618259544179);
    msg.setSource(65504U);
    msg.setSourceEntity(122U);
    msg.setDestination(51538U);
    msg.setDestinationEntity(225U);
    msg.value = 24133;

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
    msg.setTimeStamp(0.3939953905914799);
    msg.setSource(47394U);
    msg.setSourceEntity(114U);
    msg.setDestination(44052U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8126880587866125;

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
    msg.setTimeStamp(0.11550497481700772);
    msg.setSource(9060U);
    msg.setSourceEntity(124U);
    msg.setDestination(61989U);
    msg.setDestinationEntity(63U);
    msg.value = 0.3969536017593984;

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
    msg.setTimeStamp(0.978220715304075);
    msg.setSource(11360U);
    msg.setSourceEntity(248U);
    msg.setDestination(42976U);
    msg.setDestinationEntity(129U);
    msg.value = 0.17791162147832018;

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
    msg.setTimeStamp(0.8362129905789002);
    msg.setSource(25005U);
    msg.setSourceEntity(150U);
    msg.setDestination(27178U);
    msg.setDestinationEntity(130U);
    msg.value = 0.2984873695806026;

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
    msg.setTimeStamp(0.13573934912168673);
    msg.setSource(60926U);
    msg.setSourceEntity(134U);
    msg.setDestination(58738U);
    msg.setDestinationEntity(45U);
    msg.value = 0.16464961114579568;

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
    msg.setTimeStamp(0.2534003037697997);
    msg.setSource(16776U);
    msg.setSourceEntity(243U);
    msg.setDestination(8991U);
    msg.setDestinationEntity(197U);
    msg.value = 0.4466211905378902;

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
    msg.setTimeStamp(0.47031897261783495);
    msg.setSource(11079U);
    msg.setSourceEntity(14U);
    msg.setDestination(21763U);
    msg.setDestinationEntity(210U);
    msg.validity = 57830U;
    msg.type = 3U;
    msg.utc_year = 41215U;
    msg.utc_month = 137U;
    msg.utc_day = 27U;
    msg.utc_time = 0.24414733435202185;
    msg.lat = 0.8933464452029884;
    msg.lon = 0.7200581182958364;
    msg.height = 0.525518174951439;
    msg.satellites = 117U;
    msg.cog = 0.8540363568771095;
    msg.sog = 0.058248011349169015;
    msg.hdop = 0.9035016063239908;
    msg.vdop = 0.08925634847194086;
    msg.hacc = 0.4472715267884263;
    msg.vacc = 0.16406385629541176;

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
    msg.setTimeStamp(0.8478470475879925);
    msg.setSource(35945U);
    msg.setSourceEntity(241U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(66U);
    msg.validity = 13986U;
    msg.type = 148U;
    msg.utc_year = 56060U;
    msg.utc_month = 142U;
    msg.utc_day = 250U;
    msg.utc_time = 0.2093728651003275;
    msg.lat = 0.42633822478776606;
    msg.lon = 0.7743148818459314;
    msg.height = 0.8549481475395507;
    msg.satellites = 59U;
    msg.cog = 0.9781564398942707;
    msg.sog = 0.8365703298199058;
    msg.hdop = 0.5632863137415156;
    msg.vdop = 0.6696983234001642;
    msg.hacc = 0.8565392629556935;
    msg.vacc = 0.17623513256919987;

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
    msg.setTimeStamp(0.8206808136350736);
    msg.setSource(6864U);
    msg.setSourceEntity(159U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(64U);
    msg.validity = 2926U;
    msg.type = 67U;
    msg.utc_year = 47634U;
    msg.utc_month = 60U;
    msg.utc_day = 68U;
    msg.utc_time = 0.5866267022552454;
    msg.lat = 0.5396838107192337;
    msg.lon = 0.006667421028926701;
    msg.height = 0.9566621980256892;
    msg.satellites = 130U;
    msg.cog = 0.9593777162390577;
    msg.sog = 0.7353771585082922;
    msg.hdop = 0.04810100541860407;
    msg.vdop = 0.0385005034762379;
    msg.hacc = 0.7152981499922304;
    msg.vacc = 0.9912915880625036;

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
    msg.setTimeStamp(0.6896176933397944);
    msg.setSource(4661U);
    msg.setSourceEntity(108U);
    msg.setDestination(34740U);
    msg.setDestinationEntity(157U);
    msg.time = 0.1832541872021456;
    msg.phi = 0.9676420799665798;
    msg.theta = 0.5328656872872334;
    msg.psi = 0.568600868793543;
    msg.psi_magnetic = 0.772337715313267;

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
    msg.setTimeStamp(0.48545755290915893);
    msg.setSource(21720U);
    msg.setSourceEntity(170U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(229U);
    msg.time = 0.4788649029575146;
    msg.phi = 0.9924758642712747;
    msg.theta = 0.3076521913424497;
    msg.psi = 0.5416678155800126;
    msg.psi_magnetic = 0.7383478875774859;

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
    msg.setTimeStamp(0.8293481681163869);
    msg.setSource(38500U);
    msg.setSourceEntity(233U);
    msg.setDestination(34863U);
    msg.setDestinationEntity(240U);
    msg.time = 0.7454811950870364;
    msg.phi = 0.06117188425826359;
    msg.theta = 0.8413009242896867;
    msg.psi = 0.4415677297481444;
    msg.psi_magnetic = 0.9110372119505061;

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
    msg.setTimeStamp(0.5550612261514859);
    msg.setSource(54652U);
    msg.setSourceEntity(171U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(171U);
    msg.time = 0.9496324701421562;
    msg.x = 0.9953819848915028;
    msg.y = 0.06545300598286652;
    msg.z = 0.22399181964533543;
    msg.timestep = 0.8642558364894628;

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
    msg.setTimeStamp(0.014900047876716505);
    msg.setSource(33732U);
    msg.setSourceEntity(47U);
    msg.setDestination(19983U);
    msg.setDestinationEntity(211U);
    msg.time = 0.6272574395859226;
    msg.x = 0.1895721851333777;
    msg.y = 0.020358217353038444;
    msg.z = 0.809519444174552;
    msg.timestep = 0.2520219302907629;

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
    msg.setTimeStamp(0.6283652166414841);
    msg.setSource(35112U);
    msg.setSourceEntity(136U);
    msg.setDestination(3463U);
    msg.setDestinationEntity(156U);
    msg.time = 0.8854251734955702;
    msg.x = 0.08721705504325983;
    msg.y = 0.31084782817239087;
    msg.z = 0.6964888882094507;
    msg.timestep = 0.47795555689681546;

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
    msg.setTimeStamp(0.587815372052278);
    msg.setSource(62130U);
    msg.setSourceEntity(164U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(55U);
    msg.time = 0.1840835708170966;
    msg.x = 0.5385263940514774;
    msg.y = 0.33654637221446493;
    msg.z = 0.051736593491264804;

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
    msg.setTimeStamp(0.012318741016000057);
    msg.setSource(34360U);
    msg.setSourceEntity(30U);
    msg.setDestination(37873U);
    msg.setDestinationEntity(14U);
    msg.time = 0.5719811443473671;
    msg.x = 0.07967138704391452;
    msg.y = 0.05287009289179012;
    msg.z = 0.6045560044759797;

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
    msg.setTimeStamp(0.40562054098045475);
    msg.setSource(54901U);
    msg.setSourceEntity(151U);
    msg.setDestination(7546U);
    msg.setDestinationEntity(245U);
    msg.time = 0.29986216470432125;
    msg.x = 0.3287047768591075;
    msg.y = 0.21136054113931824;
    msg.z = 0.6214335609347994;

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
    msg.setTimeStamp(0.553082506772892);
    msg.setSource(57225U);
    msg.setSourceEntity(140U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(217U);
    msg.time = 0.12173038449072682;
    msg.x = 0.8751527452896867;
    msg.y = 0.3144191847569665;
    msg.z = 0.03906034334477304;

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
    msg.setTimeStamp(0.7774045599283118);
    msg.setSource(14107U);
    msg.setSourceEntity(248U);
    msg.setDestination(36793U);
    msg.setDestinationEntity(54U);
    msg.time = 0.6016956709175334;
    msg.x = 0.5285069382308205;
    msg.y = 0.20434061018232708;
    msg.z = 0.01694544887924543;

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
    msg.setTimeStamp(0.03511383723151662);
    msg.setSource(53882U);
    msg.setSourceEntity(183U);
    msg.setDestination(42546U);
    msg.setDestinationEntity(173U);
    msg.time = 0.6141734764557938;
    msg.x = 0.5750735310010796;
    msg.y = 0.39832295503349324;
    msg.z = 0.825836647098752;

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
    msg.setTimeStamp(0.3966153843662579);
    msg.setSource(26844U);
    msg.setSourceEntity(126U);
    msg.setDestination(30259U);
    msg.setDestinationEntity(253U);
    msg.time = 0.4461981038534173;
    msg.x = 0.24071724035478004;
    msg.y = 0.11048503530281018;
    msg.z = 0.21777416015075657;

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
    msg.setTimeStamp(0.7476257103216527);
    msg.setSource(13006U);
    msg.setSourceEntity(219U);
    msg.setDestination(135U);
    msg.setDestinationEntity(224U);
    msg.time = 0.2506454246259978;
    msg.x = 0.29614200223902565;
    msg.y = 0.20327427835370926;
    msg.z = 0.970385502847309;

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
    msg.setTimeStamp(0.7729333128903233);
    msg.setSource(12631U);
    msg.setSourceEntity(58U);
    msg.setDestination(18738U);
    msg.setDestinationEntity(95U);
    msg.time = 0.4867726600855875;
    msg.x = 0.5685669547672018;
    msg.y = 0.29444882337397715;
    msg.z = 0.15229271982713588;

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
    msg.setTimeStamp(0.6819948706121729);
    msg.setSource(17309U);
    msg.setSourceEntity(79U);
    msg.setDestination(57076U);
    msg.setDestinationEntity(13U);
    msg.validity = 182U;
    msg.x = 0.2827326949086725;
    msg.y = 0.15951949428040957;
    msg.z = 0.3550213843423906;

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
    msg.setTimeStamp(0.8318700880242785);
    msg.setSource(11344U);
    msg.setSourceEntity(224U);
    msg.setDestination(15109U);
    msg.setDestinationEntity(36U);
    msg.validity = 81U;
    msg.x = 0.12240905631949761;
    msg.y = 0.488199397436227;
    msg.z = 0.11251792378544834;

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
    msg.setTimeStamp(0.4047825233836573);
    msg.setSource(53867U);
    msg.setSourceEntity(10U);
    msg.setDestination(45358U);
    msg.setDestinationEntity(27U);
    msg.validity = 79U;
    msg.x = 0.9648294988450135;
    msg.y = 0.7285326368447563;
    msg.z = 0.6896816927039414;

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
    msg.setTimeStamp(0.2874116569196402);
    msg.setSource(31095U);
    msg.setSourceEntity(136U);
    msg.setDestination(55969U);
    msg.setDestinationEntity(23U);
    msg.validity = 208U;
    msg.x = 0.45278753563334906;
    msg.y = 0.08134766121675518;
    msg.z = 0.23967375666075097;

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
    msg.setTimeStamp(0.9764014985645793);
    msg.setSource(52444U);
    msg.setSourceEntity(157U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(124U);
    msg.validity = 228U;
    msg.x = 0.563535998192668;
    msg.y = 0.42284128580478075;
    msg.z = 0.31077018498275777;

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
    msg.setTimeStamp(0.17677815396220076);
    msg.setSource(61974U);
    msg.setSourceEntity(29U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(195U);
    msg.validity = 88U;
    msg.x = 0.746679517652806;
    msg.y = 0.9132465556945076;
    msg.z = 0.7441768435131992;

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
    msg.setTimeStamp(0.4834634461750419);
    msg.setSource(25826U);
    msg.setSourceEntity(237U);
    msg.setDestination(57427U);
    msg.setDestinationEntity(157U);
    msg.time = 0.6523720359612479;
    msg.x = 0.08264839651567846;
    msg.y = 0.13263735084649597;
    msg.z = 0.7089115418633798;

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
    msg.setTimeStamp(0.03134803691339294);
    msg.setSource(33801U);
    msg.setSourceEntity(224U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(87U);
    msg.time = 0.305943010283264;
    msg.x = 0.0025130595337763406;
    msg.y = 0.36388361816025594;
    msg.z = 0.6900007737402066;

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
    msg.setTimeStamp(0.980323433999468);
    msg.setSource(24651U);
    msg.setSourceEntity(210U);
    msg.setDestination(65373U);
    msg.setDestinationEntity(140U);
    msg.time = 0.4248564388315996;
    msg.x = 0.16488692147677741;
    msg.y = 0.3717001368509907;
    msg.z = 0.4362213316328186;

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
    msg.setTimeStamp(0.611184366506673);
    msg.setSource(14632U);
    msg.setSourceEntity(55U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(245U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.07427694646486216;
    tmp_msg_0.y = 0.17528562071552645;
    tmp_msg_0.z = 0.9484573482862626;
    tmp_msg_0.phi = 0.616572703580039;
    tmp_msg_0.theta = 0.09525577479643454;
    tmp_msg_0.psi = 0.6505379360150262;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.9444755507576731;

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
    msg.setTimeStamp(0.49459894511795166);
    msg.setSource(32794U);
    msg.setSourceEntity(18U);
    msg.setDestination(64936U);
    msg.setDestinationEntity(236U);
    msg.validity = 215U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.13084224945060074;
    tmp_msg_0.y = 0.11351852770822868;
    tmp_msg_0.z = 0.8537484904569878;
    tmp_msg_0.phi = 0.24019222168919996;
    tmp_msg_0.theta = 0.2334189976684321;
    tmp_msg_0.psi = 0.6170952978907398;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.6449513962698722;

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
    msg.setTimeStamp(0.4140695537470406);
    msg.setSource(51847U);
    msg.setSourceEntity(142U);
    msg.setDestination(45385U);
    msg.setDestinationEntity(84U);
    msg.validity = 28U;
    msg.value = 0.5064811803040271;

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
    msg.setTimeStamp(0.26523465713879624);
    msg.setSource(30796U);
    msg.setSourceEntity(246U);
    msg.setDestination(65385U);
    msg.setDestinationEntity(224U);
    msg.value = 0.5598177392613823;

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
    msg.setTimeStamp(0.33588787950281107);
    msg.setSource(8011U);
    msg.setSourceEntity(17U);
    msg.setDestination(52630U);
    msg.setDestinationEntity(229U);
    msg.value = 0.8321712625495309;

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
    msg.setTimeStamp(0.7118602124832222);
    msg.setSource(2098U);
    msg.setSourceEntity(233U);
    msg.setDestination(50562U);
    msg.setDestinationEntity(243U);
    msg.value = 0.7180901812841716;

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
    msg.setTimeStamp(0.6618107067282198);
    msg.setSource(24448U);
    msg.setSourceEntity(151U);
    msg.setDestination(16992U);
    msg.setDestinationEntity(249U);
    msg.value = 0.10748106399729962;

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
    msg.setTimeStamp(0.6663627501751328);
    msg.setSource(49060U);
    msg.setSourceEntity(11U);
    msg.setDestination(34002U);
    msg.setDestinationEntity(147U);
    msg.value = 0.3136805299224077;

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
    msg.setTimeStamp(0.7578254018729378);
    msg.setSource(17423U);
    msg.setSourceEntity(101U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(201U);
    msg.value = 0.1699610087144917;

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
    msg.setTimeStamp(0.6543451054895908);
    msg.setSource(53012U);
    msg.setSourceEntity(253U);
    msg.setDestination(23066U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5797408290125438;

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
    msg.setTimeStamp(0.045654747049036604);
    msg.setSource(64989U);
    msg.setSourceEntity(179U);
    msg.setDestination(35502U);
    msg.setDestinationEntity(215U);
    msg.value = 0.5572958281059525;

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
    msg.setTimeStamp(0.34730055035271434);
    msg.setSource(39518U);
    msg.setSourceEntity(12U);
    msg.setDestination(826U);
    msg.setDestinationEntity(54U);
    msg.value = 0.44727674373349335;

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
    msg.setTimeStamp(0.9103201838526824);
    msg.setSource(53650U);
    msg.setSourceEntity(187U);
    msg.setDestination(9310U);
    msg.setDestinationEntity(233U);
    msg.value = 0.20145655525449713;

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
    msg.setTimeStamp(0.17894100872013186);
    msg.setSource(50333U);
    msg.setSourceEntity(249U);
    msg.setDestination(49787U);
    msg.setDestinationEntity(231U);
    msg.value = 0.008329422568626454;

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
    msg.setTimeStamp(0.7832004510961199);
    msg.setSource(25192U);
    msg.setSourceEntity(169U);
    msg.setDestination(50202U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9733548487367474;

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
    msg.setTimeStamp(0.6074261955145568);
    msg.setSource(29462U);
    msg.setSourceEntity(146U);
    msg.setDestination(40689U);
    msg.setDestinationEntity(108U);
    msg.value = 0.28522689868037243;

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
    msg.setTimeStamp(0.301768542474407);
    msg.setSource(56067U);
    msg.setSourceEntity(107U);
    msg.setDestination(26042U);
    msg.setDestinationEntity(82U);
    msg.value = 0.42239807282298736;

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
    msg.setTimeStamp(0.40575496551581625);
    msg.setSource(62454U);
    msg.setSourceEntity(217U);
    msg.setDestination(58272U);
    msg.setDestinationEntity(94U);
    msg.value = 0.9422289377837799;

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
    msg.setTimeStamp(0.6396380600289915);
    msg.setSource(14450U);
    msg.setSourceEntity(232U);
    msg.setDestination(57690U);
    msg.setDestinationEntity(15U);
    msg.value = 0.667881827888303;

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
    msg.setTimeStamp(0.3525503869472546);
    msg.setSource(37208U);
    msg.setSourceEntity(197U);
    msg.setDestination(64984U);
    msg.setDestinationEntity(63U);
    msg.value = 0.5383501803596757;

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
    msg.setTimeStamp(0.6929975242012058);
    msg.setSource(61188U);
    msg.setSourceEntity(200U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3475986918316051;

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
    msg.setTimeStamp(0.3885579807519155);
    msg.setSource(32857U);
    msg.setSourceEntity(9U);
    msg.setDestination(37726U);
    msg.setDestinationEntity(156U);
    msg.value = 0.23072921877064823;

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
    msg.setTimeStamp(0.9480361200884447);
    msg.setSource(7206U);
    msg.setSourceEntity(11U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6144155904423926;

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
    msg.setTimeStamp(0.9008188829414228);
    msg.setSource(49325U);
    msg.setSourceEntity(166U);
    msg.setDestination(65200U);
    msg.setDestinationEntity(96U);
    msg.value = 0.4224674417599996;

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
    msg.setTimeStamp(0.5788049252636355);
    msg.setSource(49237U);
    msg.setSourceEntity(173U);
    msg.setDestination(47437U);
    msg.setDestinationEntity(187U);
    msg.value = 0.04010736163439255;

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
    msg.setTimeStamp(0.025059281310949477);
    msg.setSource(60132U);
    msg.setSourceEntity(232U);
    msg.setDestination(48861U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5004711917580873;

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
    msg.setTimeStamp(0.4898453444536781);
    msg.setSource(41276U);
    msg.setSourceEntity(241U);
    msg.setDestination(36203U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9640112936778233;

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
    msg.setTimeStamp(0.5568918954301819);
    msg.setSource(18173U);
    msg.setSourceEntity(178U);
    msg.setDestination(64365U);
    msg.setDestinationEntity(200U);
    msg.direction = 0.3839306214112925;
    msg.speed = 0.7480416479324693;
    msg.turbulence = 0.702699050802556;

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
    msg.setTimeStamp(0.21638022446778926);
    msg.setSource(49390U);
    msg.setSourceEntity(171U);
    msg.setDestination(64084U);
    msg.setDestinationEntity(166U);
    msg.direction = 0.627306447618198;
    msg.speed = 0.7550722472256335;
    msg.turbulence = 0.8428495019269696;

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
    msg.setTimeStamp(0.8737881895772138);
    msg.setSource(57058U);
    msg.setSourceEntity(167U);
    msg.setDestination(41364U);
    msg.setDestinationEntity(58U);
    msg.direction = 0.6979448311070899;
    msg.speed = 0.22326686381270966;
    msg.turbulence = 0.14645074111335976;

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
    msg.setTimeStamp(0.2694558107608821);
    msg.setSource(14377U);
    msg.setSourceEntity(237U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8219888942101891;

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
    msg.setTimeStamp(0.6509513197591028);
    msg.setSource(7604U);
    msg.setSourceEntity(215U);
    msg.setDestination(64877U);
    msg.setDestinationEntity(228U);
    msg.value = 0.1632113258827539;

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
    msg.setTimeStamp(0.44978485942927016);
    msg.setSource(47172U);
    msg.setSourceEntity(253U);
    msg.setDestination(50081U);
    msg.setDestinationEntity(250U);
    msg.value = 0.37270294442854957;

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
    msg.setTimeStamp(0.3028013422374024);
    msg.setSource(37393U);
    msg.setSourceEntity(164U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(207U);
    msg.value.assign("BQUFGTAJKSEYEZHKPECENMDZDOTDNNGKCOLRNYPTTOHTISCIYLYXREKZCYIWOKSBAREWALXWMUASOFKXZTXPCJBZTQTAEMFYKSPNCKNDSGACVVLNIHOEIIPHSLHOMXRV");

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
    msg.setTimeStamp(0.19286059806861366);
    msg.setSource(21100U);
    msg.setSourceEntity(163U);
    msg.setDestination(57493U);
    msg.setDestinationEntity(131U);
    msg.value.assign("ZSHDGFMLOUPMHVSHYINSFNBGQOKNRPMZLHFCICHZAVDNQRTKKYYXUQWWEFSWTTXLWDATEHPCOJXCYVICZFFLMEWYUORXRHRXQNORYSYGJKVLKQAXZUIZLRDKRWUXGAAXMDQDPBEGQSCYJENVIVSDUNLGRBFBCIOHAUMHFKVVVKDPIXHBFJQRTECJUPSDTZ");

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
    msg.setTimeStamp(0.9955232039791438);
    msg.setSource(7573U);
    msg.setSourceEntity(99U);
    msg.setDestination(32127U);
    msg.setDestinationEntity(71U);
    msg.value.assign("ZRJNMOGOHEUSDQBDWSLWZVVIUEMIBZ");

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
    msg.setTimeStamp(0.5605490670139833);
    msg.setSource(31759U);
    msg.setSourceEntity(134U);
    msg.setDestination(20131U);
    msg.setDestinationEntity(94U);
    const signed char tmp_msg_0[] = {59, -103, 6, -74, -123, 76, 83, -32, -41, 3, -92, 39, 112, 107, -70, 106, 64, 98, 76, -112, -65, 0, 97, 35, -70, -56, 6, -7, 71, 21, -8, 78, -31, -24, -58, -99, 68, -38, -127, -8, 38, -113, 94, 113, 55, 53, 11, -73, 126, -110, 64, -114, 82, -27, -108, 19, -81, -121, 40, 13, -76, -60, 54, 90, 35, 102, -75, -40, 126, -69, -94, -122, -65, 48, 63, -73, -81, 110, 4, -95, 39, 88, -101, -64, 117, 70, -128, 45, -94, -21, 15, -36, 114, -65, -7, -100, -65, -21, -13, 72, 7, -112, 68, 29, -49, 2, 59, 49, -26, -3, 111, 55, -91, 12, -74, -32, -5, 97, -48, 90, 7, 82, -58, -60, -116};
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
    msg.setTimeStamp(0.04613145093172977);
    msg.setSource(31321U);
    msg.setSourceEntity(49U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(167U);
    const signed char tmp_msg_0[] = {-125, -84, -68, 90, 42, -62, -125, 57, 36, -113, 21, -1, 46, -99, -3, -96, 74, -93, -17, 106, -103, 81, -2, -76, 69, -17, 27, -79, 16, -89, 101, -37, 25, 50, 116, -4, 17, -77, 126, -65, -94, 82, 45, -38, -4, 62, 103, -85, -82, -51, 85, 110, 77, 114, 122, -5, -3, 18, -123, 29, -60, -55, 93, 102, -35, 109, -10, -30, 78, 81, 8, 33, -31, -87, -33, 96, -95, 62, 104, 18, -75, -2, 70, -27, 88, 112, -120, -78, 53, -69, 68, -75, 55, -38, 67, -13, 17, 37, -92, 87, -99, -87, -86, -99, -28, 87, 7, 117, 50, 113, 21, 112, 101, 104, 64, 68, -107, 92, 56, 20, 29, -128, 7, -8, -37, -122, -15, -35, 117, 86, -16, 110};
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
    msg.setTimeStamp(0.056566663854108024);
    msg.setSource(57018U);
    msg.setSourceEntity(244U);
    msg.setDestination(57565U);
    msg.setDestinationEntity(106U);
    const signed char tmp_msg_0[] = {-102, -128, 28, -92, -110, -23, 62, -41, 121, -38, -17, 33, -113, 49, 97, 49, -117, -36, 29, -30, -122, -84, -61, -105, 39, -75, -84, -15, 41, -68, 49, -118, 53, -50, 32, 41, 29, 65, -70, -14, -9, -89, 56, -106, 29, -44, -115, -28, 107, -120, -72, 64, -43, 7, -121, -19, 118, 103, 31, -4, -18, -101, -88, 114, -24, -17, 6, 75, 43, -117, 62, 52, -6, 119, -23, -37, 60, 124, -36, -92, 81, -94, 32, -51, -67, -125, 125, -16, -52, 100, -7, -58, 43, 16, 47, 7, 65, 119, 58, -7, -84, 30, 112, -79, -20, -112, -78, 92, -22, -67, 97, 14, -100, -5, -94, 116, 77, 97, 12, -64, 98, 104, 57, 105, -55, 77, -74, 97, -123, -1, -84, -107, 29, -7, -52, -4, 16, 102, -124, 91, 76, 52, -84, 59, -106, 57, 89, 7, -90, 23, 125, -105, 46, 98, -69, 44, 93, 0, -48, -118, -115, 119, 118, 113, 40, 50, -116, 11, 126, -88, -78, -117, -65, -93, 59, -48, 112, -46, 99, 91, 105, 45, 55, 38, 117, 4, 41, 31, -39, -99, -33, 24, -124, 94, -124, 26, -43, 110, -51, -48, 71, 34, 59, -110, 31, -10, 67, -25, 32, -12, 88, 7, 109, 100, -15, 83, -39, 63, 15, 72, -26, 15, 123, -83, 120, 104, 102, 8, 105, -59, -123, -1, -87, 0, -29, -7, -4};
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
    IMC::Force msg;
    msg.setTimeStamp(0.22845761096164874);
    msg.setSource(24455U);
    msg.setSourceEntity(8U);
    msg.setDestination(51795U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7837248219318982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.050568381933773665);
    msg.setSource(63745U);
    msg.setSourceEntity(66U);
    msg.setDestination(45764U);
    msg.setDestinationEntity(164U);
    msg.value = 0.715693900250773;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.9914460272447919);
    msg.setSource(61239U);
    msg.setSourceEntity(41U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(64U);
    msg.value = 0.22662359016950484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
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
    msg.setTimeStamp(0.40730568814209434);
    msg.setSource(58111U);
    msg.setSourceEntity(229U);
    msg.setDestination(13677U);
    msg.setDestinationEntity(80U);
    msg.type = 115U;
    msg.frequency = 35889333U;
    msg.min_range = 51014U;
    msg.max_range = 49298U;
    msg.bits_per_point = 230U;
    msg.scale_factor = 0.8382852610928151;
    const signed char tmp_msg_0[] = {-124, -110, 47, 55, 22, 1, -86, -39, 92, 43, -57, -45, 48, -31, -78, 126, -53, 53, -103, 101, -122, -77, -63, -116, -99, -106, -77, -85, -38, -27, 21, 14, 47, 17, -50, 96, 47, 24, 118, -37, -104, 23, -3, 42, -95, -121, 116, -38, -88, 24, -29, -67, 18, 79, 115, -70, 70, 3, -115, 109, 111, 118, -105, 1, -128, -111, -116, 46, 36, -62, 67};
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
    msg.setTimeStamp(0.5387211721990386);
    msg.setSource(53578U);
    msg.setSourceEntity(215U);
    msg.setDestination(56744U);
    msg.setDestinationEntity(131U);
    msg.type = 105U;
    msg.frequency = 16671629U;
    msg.min_range = 49112U;
    msg.max_range = 62182U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.43981122216970636;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5919476572291312;
    tmp_msg_0.beam_height = 0.5003398665691664;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-19, 122, 112, 124, 36, -56, 71, 81, -10, 87, -72, -47, -51, 42, 87, 110, -104, 103, -64, -53, -57, 118, -66, 17, -93, -93, 123, -66, -84, -40, 97, 108, 125, -61, 2, 43, -19, 47, 66, -89, -92, -128, 54, 12, 39, -77, 87, 68, 56, 24, 38, 70, 20, -86, -28, 37, 74, -39, 88, 104, -82, -97, 126, 109, 89, 96, -20, 91, -45, 13, 21, 51, 110, 61, 126, -127, 33, -38, -16, 11, 88, 96, -82, -104, -42, 73, 43, 52, -44, 107, 20, 13, 93, -95, -91, 39, 15, 73, -98, 105, -86, -71, 53, -46, 117, 8, -83, -115, 14, 124, -1, 51, 75, -79, -18, 33, -128, 51, -94, 59, 110, -22, 84, -33, 7, 117, -97, 75, 115, 66, -68, -8, -18, 29, 92, -64, 105, 119, -98, -95, 110, -103, 71, -29, -109, -7, -80, -61, -102, 37, 62, 97, -30, -99, -21, -48, 94, -81, -35, -121, -128, -102, 114, 68, 52, 84, -22, 11, 24, 37, -86, 74, -93, 72, -121, 100, -124, -64, -74, -127, -90, -35, -67, 104, -13, 109, -58, 78, -41, 61, -49, 125, 8, -47, -70, -113, -98, -17, 99, 77, 31, 43, -6, -50, 125, 121, -86, -46, 98, 77, 25, 18, -87, 21, -116, 112};
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
    msg.setTimeStamp(0.2535849320784369);
    msg.setSource(63584U);
    msg.setSourceEntity(138U);
    msg.setDestination(20020U);
    msg.setDestinationEntity(196U);
    msg.type = 110U;
    msg.frequency = 3130732403U;
    msg.min_range = 9690U;
    msg.max_range = 12411U;
    msg.bits_per_point = 114U;
    msg.scale_factor = 0.008144881160373041;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.006201275120318539;
    tmp_msg_0.beam_height = 0.8933184443604284;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-85, 21, 8, 93, 78, -91, 82, -89, 50, 108, -12, -16, -55, 72, -48, 87, -18, -76, 44, -119, -32, 105, 88, 69, 126, 111, 23, -82, -117, 33, -99, -39, -120, 57, -82, 45, 45, -13, 92, 47, 117, -94, 30, -113, 14, 18, 81, 3, 52, -114, -94, 58, -87, -26, -65, 83, 73, 59, 32, 57, 105, 28, 13, -37, 79, 53, 62, -49, 29, -72, 37, -5, 25, -80, -68, -42, 51, -101, -11, -62, 83, 67, 45, 117, 114, 78, -71, -8, 86, -115, 30, -79, -36, 13, -56, 116, -20, 69, 104, -67, 73, -87, -106, 14, -101, 28, -84, -37, -113, -15, -15, -31, -29, 107, 57, -84, -120, 61, -99, -124, 26, -45, 105, 38, -88, -24, -37, 57, -37, -33, 115, 75, -13, 46, -14, -107, 27, -65, -53, -119, -45, 1, -29, 115, 61, -31, -21, -84, 101, 33, 95, -69, -33, -50, 60, 93, -75, -68, 87, -112, 93, -2, 77, 16, 41, -52, -26, -70, -56, 62, -44, -128, 105, -77, 42, -101, 48, 31, 4, 55, 17, -38, -74, -70, 68, -46, -81, -120, 19, -115, 110, 120, 91, 49, 25, 11, 60, 62, 34, -128, -95, 8, 54, 51, -33, 55, -23, -17, 58, 91, 12, -100, -68, -106, -13, 83, 9, -81, -16, -117, 63, 65, -55, 111, 27, 65, 52, -26, -22, 42, -109, -88, 120, 25, 38, 26, 124, 65, -4, 121, 58, -80, 110, -90, 64, -18};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.16866814995411228);
    msg.setSource(16679U);
    msg.setSourceEntity(93U);
    msg.setDestination(49694U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.6469384532050624);
    msg.setSource(48003U);
    msg.setSourceEntity(67U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.16545817091978676);
    msg.setSource(43275U);
    msg.setSourceEntity(7U);
    msg.setDestination(8750U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.8779153465927919);
    msg.setSource(9107U);
    msg.setSourceEntity(43U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(193U);
    msg.op = 15U;

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
    msg.setTimeStamp(0.636329154996301);
    msg.setSource(3870U);
    msg.setSourceEntity(126U);
    msg.setDestination(10360U);
    msg.setDestinationEntity(90U);
    msg.op = 200U;

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
    msg.setTimeStamp(0.18735036386839155);
    msg.setSource(33858U);
    msg.setSourceEntity(79U);
    msg.setDestination(12320U);
    msg.setDestinationEntity(40U);
    msg.op = 166U;

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
    msg.setTimeStamp(0.7812806066999209);
    msg.setSource(31111U);
    msg.setSourceEntity(106U);
    msg.setDestination(4672U);
    msg.setDestinationEntity(162U);
    msg.value = 0.54797048626179;
    msg.confidence = 0.3891940726233747;
    msg.opmodes.assign("HJCHGSGDRPDRBEOCRJKPWFNJTISFAEZKCLHQUXMKEVCZDMQXCOPEUKLAXWJRMBLFKHHDTIDHUSVPSVQUGLQVZEIC");

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
    msg.setTimeStamp(0.12796606193130045);
    msg.setSource(29215U);
    msg.setSourceEntity(36U);
    msg.setDestination(12695U);
    msg.setDestinationEntity(150U);
    msg.value = 0.5096057388434755;
    msg.confidence = 0.9521957568619372;
    msg.opmodes.assign("AOTNPEOIMPNVDUYPUUGSCVZJOYNBDAXSOZBPJLJBIVPKTUJMCSVHRFDNGWWGRQPPRZNXDYTKROKWTVUFFAHFQLAZKLQEKSMFWEWAGJNYCPOLWFYUYMQUSVFCXAKBHEBEILJIGBVAGJOXQNWBGNNQJKTCCKZTCEQUOTITVLERLALSBZMBACMZMYIZYLYUIPETJDQZDLHSGZVYRREMMTKSDXNUSSWWBDQXERFHXKOJHOHFIXXDQHAMGRRXVP");

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
    msg.setTimeStamp(0.10404458332089417);
    msg.setSource(53219U);
    msg.setSourceEntity(122U);
    msg.setDestination(14276U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5645765496240501;
    msg.confidence = 0.75937499124421;
    msg.opmodes.assign("BSNDNVDKFDQWCILXXPVVIPQSCNQSAXKSYFJHTTLQUHVJFLVAQUKVMFBOLLOKADGXMPIMTDSUXFMPDNBWHVBVQYJOR");

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
    msg.setTimeStamp(0.5592418758021698);
    msg.setSource(555U);
    msg.setSourceEntity(49U);
    msg.setDestination(2583U);
    msg.setDestinationEntity(203U);
    msg.itow = 1619839538U;
    msg.lat = 0.4996390964470697;
    msg.lon = 0.16076837077838702;
    msg.height_ell = 0.038184409286349474;
    msg.height_sea = 0.9673667295757897;
    msg.hacc = 0.17972520143269344;
    msg.vacc = 0.036825952544671026;
    msg.vel_n = 0.5628924525506154;
    msg.vel_e = 0.263338089308339;
    msg.vel_d = 0.8659861677057277;
    msg.speed = 0.7580192200624223;
    msg.gspeed = 0.9614727740752634;
    msg.heading = 0.379194821923435;
    msg.sacc = 0.47955263337815357;
    msg.cacc = 0.1732200713528369;

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
    msg.setTimeStamp(0.6877861896568284);
    msg.setSource(52070U);
    msg.setSourceEntity(74U);
    msg.setDestination(31261U);
    msg.setDestinationEntity(25U);
    msg.itow = 2949967407U;
    msg.lat = 0.22704355536456688;
    msg.lon = 0.7066552835275345;
    msg.height_ell = 0.5802156265181936;
    msg.height_sea = 0.5594692909785812;
    msg.hacc = 0.208873941484792;
    msg.vacc = 0.11404481471789407;
    msg.vel_n = 0.5221041839363064;
    msg.vel_e = 0.03375955475518422;
    msg.vel_d = 0.8983049753060791;
    msg.speed = 0.8880514303621982;
    msg.gspeed = 0.6878037466802512;
    msg.heading = 0.6501483222284854;
    msg.sacc = 0.9002540568590943;
    msg.cacc = 0.36180595667531634;

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
    msg.setTimeStamp(0.22204389053689322);
    msg.setSource(41620U);
    msg.setSourceEntity(27U);
    msg.setDestination(47431U);
    msg.setDestinationEntity(71U);
    msg.itow = 3438962599U;
    msg.lat = 0.5407722209494129;
    msg.lon = 0.7399745904072076;
    msg.height_ell = 0.38673238924072495;
    msg.height_sea = 0.13772558693149228;
    msg.hacc = 0.4163258114689087;
    msg.vacc = 0.6797801447733776;
    msg.vel_n = 0.05919680506905678;
    msg.vel_e = 0.0656531302925758;
    msg.vel_d = 0.26124581901778177;
    msg.speed = 0.5292178035624894;
    msg.gspeed = 0.0032583868692223072;
    msg.heading = 0.7684620221645673;
    msg.sacc = 0.8202164269563003;
    msg.cacc = 0.7329872065792051;

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
    msg.setTimeStamp(0.29007328571623137);
    msg.setSource(24786U);
    msg.setSourceEntity(166U);
    msg.setDestination(7052U);
    msg.setDestinationEntity(120U);
    msg.id = 1U;
    msg.value = 0.3918247048785497;

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
    msg.setTimeStamp(0.8005099017438226);
    msg.setSource(9860U);
    msg.setSourceEntity(214U);
    msg.setDestination(52818U);
    msg.setDestinationEntity(77U);
    msg.id = 92U;
    msg.value = 0.21447298810313764;

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
    msg.setTimeStamp(0.057488649186392515);
    msg.setSource(60623U);
    msg.setSourceEntity(37U);
    msg.setDestination(59551U);
    msg.setDestinationEntity(141U);
    msg.id = 7U;
    msg.value = 0.3770790623943129;

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
    msg.setTimeStamp(0.983565175363084);
    msg.setSource(45833U);
    msg.setSourceEntity(160U);
    msg.setDestination(40791U);
    msg.setDestinationEntity(92U);
    msg.x = 0.6602312545287345;
    msg.y = 0.10832096641253164;
    msg.z = 0.6514147288818404;
    msg.phi = 0.8373047789551961;
    msg.theta = 0.7265716133645418;
    msg.psi = 0.25766882937284463;

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
    msg.setTimeStamp(0.44183479066121745);
    msg.setSource(62789U);
    msg.setSourceEntity(211U);
    msg.setDestination(36493U);
    msg.setDestinationEntity(233U);
    msg.x = 0.1967000514199505;
    msg.y = 0.16146355850421124;
    msg.z = 0.8132198060150921;
    msg.phi = 0.7872376090190862;
    msg.theta = 0.5280341579382818;
    msg.psi = 0.38704983459850595;

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
    msg.setTimeStamp(0.8536811143195158);
    msg.setSource(35311U);
    msg.setSourceEntity(195U);
    msg.setDestination(54944U);
    msg.setDestinationEntity(211U);
    msg.x = 0.3803979851764988;
    msg.y = 0.881014590834747;
    msg.z = 0.042349277370625105;
    msg.phi = 0.9948936249158072;
    msg.theta = 0.6267041131087031;
    msg.psi = 0.44984217753880595;

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
    msg.setTimeStamp(0.8749624487121814);
    msg.setSource(46041U);
    msg.setSourceEntity(53U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(24U);
    msg.beam_width = 0.3545169385826209;
    msg.beam_height = 0.2180660257837077;

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
    msg.setTimeStamp(0.339074690071256);
    msg.setSource(30021U);
    msg.setSourceEntity(16U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(144U);
    msg.beam_width = 0.5111138030432815;
    msg.beam_height = 0.9531495277833885;

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
    msg.setTimeStamp(0.012884256172288833);
    msg.setSource(57550U);
    msg.setSourceEntity(242U);
    msg.setDestination(13282U);
    msg.setDestinationEntity(149U);
    msg.beam_width = 0.9898155343739872;
    msg.beam_height = 0.611543975958861;

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
    msg.setTimeStamp(0.9973811348916636);
    msg.setSource(48577U);
    msg.setSourceEntity(194U);
    msg.setDestination(21500U);
    msg.setDestinationEntity(100U);
    msg.sane = 148U;

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
    msg.setTimeStamp(0.24483513579073046);
    msg.setSource(19804U);
    msg.setSourceEntity(101U);
    msg.setDestination(6282U);
    msg.setDestinationEntity(194U);
    msg.sane = 24U;

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
    msg.setTimeStamp(0.8360614924659442);
    msg.setSource(21946U);
    msg.setSourceEntity(29U);
    msg.setDestination(30669U);
    msg.setDestinationEntity(193U);
    msg.sane = 34U;

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
    msg.setTimeStamp(0.36826236517144995);
    msg.setSource(13305U);
    msg.setSourceEntity(40U);
    msg.setDestination(14400U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5222235694566967;

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
    msg.setTimeStamp(0.11130807201904858);
    msg.setSource(34819U);
    msg.setSourceEntity(122U);
    msg.setDestination(34053U);
    msg.setDestinationEntity(217U);
    msg.value = 0.43515912745752605;

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
    msg.setTimeStamp(0.221005456026667);
    msg.setSource(48298U);
    msg.setSourceEntity(151U);
    msg.setDestination(59461U);
    msg.setDestinationEntity(110U);
    msg.value = 0.32038992160020996;

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
    msg.setTimeStamp(0.12177670384347206);
    msg.setSource(10300U);
    msg.setSourceEntity(155U);
    msg.setDestination(44977U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8956169272801388;

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
    msg.setTimeStamp(0.07293079268266434);
    msg.setSource(34717U);
    msg.setSourceEntity(115U);
    msg.setDestination(50868U);
    msg.setDestinationEntity(111U);
    msg.value = 0.08767796390975979;

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
    msg.setTimeStamp(0.8320385112087963);
    msg.setSource(5119U);
    msg.setSourceEntity(219U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6670399282306322;

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
    msg.setTimeStamp(0.7963415347498431);
    msg.setSource(44118U);
    msg.setSourceEntity(9U);
    msg.setDestination(58657U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9637384911818834;

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
    msg.setTimeStamp(0.7246768985933323);
    msg.setSource(15968U);
    msg.setSourceEntity(187U);
    msg.setDestination(23786U);
    msg.setDestinationEntity(241U);
    msg.value = 0.6688223232650685;

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
    msg.setTimeStamp(0.4882716155123913);
    msg.setSource(61398U);
    msg.setSourceEntity(96U);
    msg.setDestination(56162U);
    msg.setDestinationEntity(92U);
    msg.value = 0.24756909956621542;

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
    msg.setTimeStamp(0.374047654257454);
    msg.setSource(20357U);
    msg.setSourceEntity(111U);
    msg.setDestination(42350U);
    msg.setDestinationEntity(154U);
    msg.value = 0.03513438251130652;

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
    msg.setTimeStamp(0.9425178401814601);
    msg.setSource(3542U);
    msg.setSourceEntity(21U);
    msg.setDestination(49194U);
    msg.setDestinationEntity(209U);
    msg.value = 0.024458959298785055;

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
    msg.setTimeStamp(0.7250192954481807);
    msg.setSource(33376U);
    msg.setSourceEntity(24U);
    msg.setDestination(57482U);
    msg.setDestinationEntity(133U);
    msg.value = 0.9958029308764444;

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
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.05362830539347829);
    msg.setSource(44630U);
    msg.setSourceEntity(152U);
    msg.setDestination(54856U);
    msg.setDestinationEntity(12U);
    msg.value = 0.6181642558457138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.9665504236123761);
    msg.setSource(54257U);
    msg.setSourceEntity(252U);
    msg.setDestination(17881U);
    msg.setDestinationEntity(184U);
    msg.value = 0.12788635992262654;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.7439123140114191);
    msg.setSource(60706U);
    msg.setSourceEntity(209U);
    msg.setDestination(2471U);
    msg.setDestinationEntity(254U);
    msg.value = 0.428118891177088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.3608874347035165);
    msg.setSource(4842U);
    msg.setSourceEntity(199U);
    msg.setDestination(47485U);
    msg.setDestinationEntity(161U);
    msg.value = 0.5642117909733975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.7130103950764343);
    msg.setSource(28184U);
    msg.setSourceEntity(102U);
    msg.setDestination(28172U);
    msg.setDestinationEntity(160U);
    msg.value = 0.8171085845877271;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.40300339672525765);
    msg.setSource(40930U);
    msg.setSourceEntity(102U);
    msg.setDestination(49497U);
    msg.setDestinationEntity(118U);
    msg.value = 0.48547265480067936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.909836949258939);
    msg.setSource(52979U);
    msg.setSourceEntity(14U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(101U);
    msg.value = 0.36597121958406575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.2424767885620911);
    msg.setSource(21306U);
    msg.setSourceEntity(241U);
    msg.setDestination(39407U);
    msg.setDestinationEntity(129U);
    msg.value = 0.6742330463114223;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.6060457799793811);
    msg.setSource(25031U);
    msg.setSourceEntity(32U);
    msg.setDestination(28948U);
    msg.setDestinationEntity(245U);
    msg.value = 0.12425349828992938;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.8846966159341696);
    msg.setSource(53633U);
    msg.setSourceEntity(205U);
    msg.setDestination(36982U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7257628638569475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.327528429004157);
    msg.setSource(46240U);
    msg.setSourceEntity(247U);
    msg.setDestination(39598U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9249429354629858;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.6106421960065239);
    msg.setSource(13045U);
    msg.setSourceEntity(73U);
    msg.setDestination(62279U);
    msg.setDestinationEntity(136U);
    msg.value = 0.9761427842132558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.569658762730976);
    msg.setSource(16948U);
    msg.setSourceEntity(200U);
    msg.setDestination(16891U);
    msg.setDestinationEntity(160U);
    msg.validity = 10450U;
    msg.type = 191U;
    msg.tow = 3913825583U;
    msg.base_lat = 0.09578094205056575;
    msg.base_lon = 0.9177822889355375;
    msg.base_height = 0.4286304703363587;
    msg.n = 0.062049504272899236;
    msg.e = 0.021013847940002384;
    msg.d = 0.7176196224090106;
    msg.v_n = 0.21521109792849102;
    msg.v_e = 0.6631705077896611;
    msg.v_d = 0.6931291406383138;
    msg.satellites = 191U;
    msg.iar_hyp = 21907U;
    msg.iar_ratio = 0.968032530677786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.8594330524957193);
    msg.setSource(31098U);
    msg.setSourceEntity(94U);
    msg.setDestination(20183U);
    msg.setDestinationEntity(253U);
    msg.validity = 61671U;
    msg.type = 197U;
    msg.tow = 2180252439U;
    msg.base_lat = 0.8950967464047408;
    msg.base_lon = 0.7691106217206607;
    msg.base_height = 0.48240799525286227;
    msg.n = 0.6117219128988517;
    msg.e = 0.1336672949868134;
    msg.d = 0.16566079681833423;
    msg.v_n = 0.4603887415117779;
    msg.v_e = 0.11090651709774302;
    msg.v_d = 0.3535725444713371;
    msg.satellites = 214U;
    msg.iar_hyp = 49490U;
    msg.iar_ratio = 0.4100390450029777;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.09905384134127593);
    msg.setSource(32456U);
    msg.setSourceEntity(88U);
    msg.setDestination(13746U);
    msg.setDestinationEntity(215U);
    msg.validity = 24782U;
    msg.type = 145U;
    msg.tow = 538804869U;
    msg.base_lat = 0.381929923802813;
    msg.base_lon = 0.6533631120973122;
    msg.base_height = 0.6175446538751973;
    msg.n = 0.8015232351395982;
    msg.e = 0.9746961768738863;
    msg.d = 0.748208846320966;
    msg.v_n = 0.14921346663141366;
    msg.v_e = 0.06459294142339012;
    msg.v_d = 0.7905251510148615;
    msg.satellites = 131U;
    msg.iar_hyp = 17703U;
    msg.iar_ratio = 0.2593427262125979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.139260079390641);
    msg.setSource(21930U);
    msg.setSourceEntity(17U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(165U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7747481632947681;
    tmp_msg_0.lon = 0.301044526779382;
    tmp_msg_0.height = 0.34909394408495364;
    tmp_msg_0.x = 0.7667550679841945;
    tmp_msg_0.y = 0.2069702458414029;
    tmp_msg_0.z = 0.6905360368067279;
    tmp_msg_0.phi = 0.07155435273116495;
    tmp_msg_0.theta = 0.10781318811049756;
    tmp_msg_0.psi = 0.7422909194991376;
    tmp_msg_0.u = 0.6147563279291454;
    tmp_msg_0.v = 0.3228316786746054;
    tmp_msg_0.w = 0.4888668175450619;
    tmp_msg_0.vx = 0.41969246716927266;
    tmp_msg_0.vy = 0.4914700133648571;
    tmp_msg_0.vz = 0.9357673702536539;
    tmp_msg_0.p = 0.3908318888274803;
    tmp_msg_0.q = 0.5994590651258443;
    tmp_msg_0.r = 0.4521203915703218;
    tmp_msg_0.depth = 0.865318952054628;
    tmp_msg_0.alt = 0.5252517618646948;
    msg.state.set(tmp_msg_0);
    msg.type = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.19568799215612054);
    msg.setSource(24741U);
    msg.setSourceEntity(230U);
    msg.setDestination(18821U);
    msg.setDestinationEntity(17U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3660586260050238;
    tmp_msg_0.lon = 0.6795233478427029;
    tmp_msg_0.height = 0.20337734406438623;
    tmp_msg_0.x = 0.8338363871540082;
    tmp_msg_0.y = 0.9796751138793443;
    tmp_msg_0.z = 0.18606713597988966;
    tmp_msg_0.phi = 0.08767953031618514;
    tmp_msg_0.theta = 0.08262679464061484;
    tmp_msg_0.psi = 0.7477398961145884;
    tmp_msg_0.u = 0.8023380383203843;
    tmp_msg_0.v = 0.025272304519285638;
    tmp_msg_0.w = 0.9656292340875499;
    tmp_msg_0.vx = 0.7398255175450519;
    tmp_msg_0.vy = 0.8228363329727912;
    tmp_msg_0.vz = 0.51533549278937;
    tmp_msg_0.p = 0.50066197200265;
    tmp_msg_0.q = 0.6754986209518092;
    tmp_msg_0.r = 0.8805341822674319;
    tmp_msg_0.depth = 0.836588318708306;
    tmp_msg_0.alt = 0.5250073060608671;
    msg.state.set(tmp_msg_0);
    msg.type = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.3876047606868328);
    msg.setSource(44200U);
    msg.setSourceEntity(186U);
    msg.setDestination(258U);
    msg.setDestinationEntity(195U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.40914342199776643;
    tmp_msg_0.lon = 0.7065516855292169;
    tmp_msg_0.height = 0.8960865133086029;
    tmp_msg_0.x = 0.058942590781586146;
    tmp_msg_0.y = 0.2216478542487884;
    tmp_msg_0.z = 0.582727066847215;
    tmp_msg_0.phi = 0.3577045329906351;
    tmp_msg_0.theta = 0.11905573129227598;
    tmp_msg_0.psi = 0.1670825232920251;
    tmp_msg_0.u = 0.22795561797952502;
    tmp_msg_0.v = 0.19112058931387832;
    tmp_msg_0.w = 0.27063279579259414;
    tmp_msg_0.vx = 0.415629696838962;
    tmp_msg_0.vy = 0.739770223106068;
    tmp_msg_0.vz = 0.5725017306709612;
    tmp_msg_0.p = 0.08360340925217002;
    tmp_msg_0.q = 0.7400016918602369;
    tmp_msg_0.r = 0.7590328716012427;
    tmp_msg_0.depth = 0.7030519680234198;
    tmp_msg_0.alt = 0.9317619366602589;
    msg.state.set(tmp_msg_0);
    msg.type = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.3664700258604876);
    msg.setSource(9390U);
    msg.setSourceEntity(145U);
    msg.setDestination(22463U);
    msg.setDestinationEntity(95U);
    msg.value = 0.4122157433187207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.4957850249488849);
    msg.setSource(61600U);
    msg.setSourceEntity(118U);
    msg.setDestination(60886U);
    msg.setDestinationEntity(200U);
    msg.value = 0.2868516651192178;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.21699268363268887);
    msg.setSource(7949U);
    msg.setSourceEntity(125U);
    msg.setDestination(28155U);
    msg.setDestinationEntity(57U);
    msg.value = 0.9906951591366221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.37307261489770327);
    msg.setSource(63673U);
    msg.setSourceEntity(33U);
    msg.setDestination(6707U);
    msg.setDestinationEntity(241U);
    msg.value = 0.019103764155309455;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.3512516676032085);
    msg.setSource(30228U);
    msg.setSourceEntity(102U);
    msg.setDestination(43618U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7362633939906342;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9711310189449603);
    msg.setSource(21681U);
    msg.setSourceEntity(122U);
    msg.setDestination(20507U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2786759747137034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.47626017366123996);
    msg.setSource(49191U);
    msg.setSourceEntity(60U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(78U);
    msg.value = 0.16230312989253692;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.2667987154622);
    msg.setSource(46474U);
    msg.setSourceEntity(20U);
    msg.setDestination(26584U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7739774338594114;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.769957015538233);
    msg.setSource(56428U);
    msg.setSourceEntity(25U);
    msg.setDestination(19202U);
    msg.setDestinationEntity(155U);
    msg.value = 0.12918442682186337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.011094582115753315);
    msg.setSource(18726U);
    msg.setSourceEntity(158U);
    msg.setDestination(41587U);
    msg.setDestinationEntity(222U);
    msg.value = 0.2796897835840201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.7871415492917173);
    msg.setSource(12129U);
    msg.setSourceEntity(134U);
    msg.setDestination(58323U);
    msg.setDestinationEntity(19U);
    msg.value = 0.8039757099151907;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.39974021015089245);
    msg.setSource(57668U);
    msg.setSourceEntity(117U);
    msg.setDestination(15855U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8666364599389081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.34710613206560403);
    msg.setSource(2022U);
    msg.setSourceEntity(188U);
    msg.setDestination(32417U);
    msg.setDestinationEntity(36U);
    msg.value = 0.8090217316165259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.7174278563899317);
    msg.setSource(63440U);
    msg.setSourceEntity(251U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(232U);
    msg.value = 0.7709590455718991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.055895998671496305);
    msg.setSource(63336U);
    msg.setSourceEntity(246U);
    msg.setDestination(43006U);
    msg.setDestinationEntity(191U);
    msg.value = 0.08032093792142736;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5679373393066761);
    msg.setSource(34909U);
    msg.setSourceEntity(31U);
    msg.setDestination(59058U);
    msg.setDestinationEntity(39U);
    msg.id = 240U;
    msg.zoom = 170U;
    msg.action = 108U;

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
    msg.setTimeStamp(0.1196364496110549);
    msg.setSource(13805U);
    msg.setSourceEntity(150U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(227U);
    msg.id = 20U;
    msg.zoom = 61U;
    msg.action = 1U;

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
    msg.setTimeStamp(0.8501081446468117);
    msg.setSource(24694U);
    msg.setSourceEntity(190U);
    msg.setDestination(40426U);
    msg.setDestinationEntity(123U);
    msg.id = 101U;
    msg.zoom = 124U;
    msg.action = 174U;

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
    msg.setTimeStamp(0.017085368126773526);
    msg.setSource(49067U);
    msg.setSourceEntity(9U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(149U);
    msg.id = 99U;
    msg.value = 0.8800974229310699;

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
    msg.setTimeStamp(0.007732549456658799);
    msg.setSource(21411U);
    msg.setSourceEntity(4U);
    msg.setDestination(43995U);
    msg.setDestinationEntity(254U);
    msg.id = 19U;
    msg.value = 0.6038490829498961;

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
    msg.setTimeStamp(0.051194828777238466);
    msg.setSource(53980U);
    msg.setSourceEntity(36U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(100U);
    msg.id = 40U;
    msg.value = 0.3901836503329815;

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
    msg.setTimeStamp(0.9214098241649398);
    msg.setSource(32773U);
    msg.setSourceEntity(226U);
    msg.setDestination(53507U);
    msg.setDestinationEntity(172U);
    msg.id = 185U;
    msg.value = 0.5892306406735941;

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
    msg.setTimeStamp(0.9104382756774989);
    msg.setSource(40566U);
    msg.setSourceEntity(127U);
    msg.setDestination(46689U);
    msg.setDestinationEntity(254U);
    msg.id = 179U;
    msg.value = 0.4069235550894451;

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
    msg.setTimeStamp(0.8508659283258629);
    msg.setSource(52547U);
    msg.setSourceEntity(53U);
    msg.setDestination(40967U);
    msg.setDestinationEntity(210U);
    msg.id = 163U;
    msg.value = 0.6175578817276475;

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
    msg.setTimeStamp(0.9403879349665307);
    msg.setSource(4433U);
    msg.setSourceEntity(9U);
    msg.setDestination(7810U);
    msg.setDestinationEntity(204U);
    msg.id = 74U;
    msg.angle = 0.9730635140136079;

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
    msg.setTimeStamp(0.08769703647033122);
    msg.setSource(40303U);
    msg.setSourceEntity(248U);
    msg.setDestination(13896U);
    msg.setDestinationEntity(80U);
    msg.id = 6U;
    msg.angle = 0.5260605725090844;

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
    msg.setTimeStamp(0.5989358473599112);
    msg.setSource(35339U);
    msg.setSourceEntity(102U);
    msg.setDestination(30537U);
    msg.setDestinationEntity(189U);
    msg.id = 23U;
    msg.angle = 0.9545113474499823;

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
    msg.setTimeStamp(0.4357868793659412);
    msg.setSource(32321U);
    msg.setSourceEntity(30U);
    msg.setDestination(46573U);
    msg.setDestinationEntity(16U);
    msg.op = 72U;
    msg.actions.assign("ZSVNUMNRYGVKMESQOTSEWGXBAR");

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
    msg.setTimeStamp(0.6347797832624668);
    msg.setSource(43709U);
    msg.setSourceEntity(38U);
    msg.setDestination(58884U);
    msg.setDestinationEntity(99U);
    msg.op = 252U;
    msg.actions.assign("XQQNRYZLGHHVEMJXGRMTRV");

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
    msg.setTimeStamp(0.7847687099986156);
    msg.setSource(33047U);
    msg.setSourceEntity(75U);
    msg.setDestination(50825U);
    msg.setDestinationEntity(48U);
    msg.op = 199U;
    msg.actions.assign("QKFGOPTPWCKHXPDSXGFGWMOCHJCDSZZQUXAIZOSDDBNWUMQUGNXSDLSMWPEMJZGNLTVEGCVSTFWORKBJPRUECYHILUJOANXFRHVGNEBJAFEVMNAUKFHMLASZVTURFXVCHEWFGJOTMONTYRDLBJTTKRRFHIOZDQ");

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
    msg.setTimeStamp(0.4318163131346229);
    msg.setSource(14856U);
    msg.setSourceEntity(149U);
    msg.setDestination(43209U);
    msg.setDestinationEntity(62U);
    msg.actions.assign("VFJMNLMHMVRFKLQHHZKJXTURYYHVYKQLBWMOSTNZLBOKGWIVWSTWFTARBDHPGGJNZFPBCLOVSVFYACBIWQEXPUJAARNEPGCJHVTPQCZSQMPEWQJCEMHSDOBTLTDXPJSLFAQUHHLXGBZIZYGNCZEWJLDDOEYNSCAPTNIXTIVEREKFWFMVYAISZMOWPJD");

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
    msg.setTimeStamp(0.24408096496773457);
    msg.setSource(720U);
    msg.setSourceEntity(40U);
    msg.setDestination(8540U);
    msg.setDestinationEntity(42U);
    msg.actions.assign("QTAEMPPWFVVHYBXWJNOVWSKNYBKJDDZIPXZANBUVIAFDQBQJYHPZLCKIKUXRSUENZYDRXGAFTVRFGHMTYMEMORTFXNMWFXQHSZTOFBVCJAEPUNCRY");

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
    msg.setTimeStamp(0.03930186168901262);
    msg.setSource(5820U);
    msg.setSourceEntity(249U);
    msg.setDestination(62885U);
    msg.setDestinationEntity(250U);
    msg.actions.assign("NNZEBGUJGZXGKZMVQHUGOYDRKJJAKHKSWHQGJTATHFDYNTOLPQANSZIVHFXPAZEFMUYCLTWKLFEYMSHXJVYO");

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
    msg.setTimeStamp(0.4292593948201766);
    msg.setSource(35663U);
    msg.setSourceEntity(212U);
    msg.setDestination(40397U);
    msg.setDestinationEntity(130U);
    msg.button = 11U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.7179791601250745);
    msg.setSource(48038U);
    msg.setSourceEntity(142U);
    msg.setDestination(26851U);
    msg.setDestinationEntity(87U);
    msg.button = 230U;
    msg.value = 164U;

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
    msg.setTimeStamp(0.8911635402883444);
    msg.setSource(3024U);
    msg.setSourceEntity(156U);
    msg.setDestination(43174U);
    msg.setDestinationEntity(137U);
    msg.button = 108U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.09947382358741574);
    msg.setSource(36228U);
    msg.setSourceEntity(53U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(190U);
    msg.op = 138U;
    msg.text.assign("EIFLDTNRCYPKESVFBHHFZNFNXHAUVTAKQIQEVJVLLIZOCEMRPPIWHRUERXOSVGSAIQEIKVMWRSKYZATEPTRXNHWJAAIRGXNCMMOGMPTJOHMZKHGWCMXUHVESPNWTHUVTBDCQJBDAVOBCGBPGFXOOFDERAYNCDMXXZGJYWDFLEJUMIILPBYDRDODWSSQKTSWLCXHSXQFCBUO");

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
    msg.setTimeStamp(0.8460318782206937);
    msg.setSource(17036U);
    msg.setSourceEntity(211U);
    msg.setDestination(57649U);
    msg.setDestinationEntity(178U);
    msg.op = 103U;
    msg.text.assign("ZTUGMOFBQVY");

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
    msg.setTimeStamp(0.3100771210404447);
    msg.setSource(41601U);
    msg.setSourceEntity(108U);
    msg.setDestination(43029U);
    msg.setDestinationEntity(123U);
    msg.op = 164U;
    msg.text.assign("KNLGOYVVXGYZAHBTGNTDFTSWOFNERWJJWGIWOUNOBGLJYYPGXAPYEHXDDLTHASQBBZNVYIRIPESMDXEYKCQAWJUMMSRWFBMSNVRVYQIBSQUACCZXTFVJOZKOUFGVKWCHQIQTTCGCTZEYSPPJURWRMJMEXQSKSGPANMFRKTKIBQAALFPLCWHUPOXZRHFKBDIPIIYCBRCMZJXNDOZBLTNUDUXLNPAXSZOGUV");

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
    msg.setTimeStamp(0.1113399454238253);
    msg.setSource(63389U);
    msg.setSourceEntity(165U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(63U);
    msg.op = 103U;
    msg.time_remain = 0.8281723130022391;
    msg.sched_time = 0.28762884314997217;

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
    msg.setTimeStamp(0.03854085556026299);
    msg.setSource(30588U);
    msg.setSourceEntity(150U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(179U);
    msg.op = 90U;
    msg.time_remain = 0.2626477744171679;
    msg.sched_time = 0.3226085495200538;

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
    msg.setTimeStamp(0.3578065800183634);
    msg.setSource(21305U);
    msg.setSourceEntity(153U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(40U);
    msg.op = 45U;
    msg.time_remain = 0.21742352830472822;
    msg.sched_time = 0.8170413541664344;

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
    msg.setTimeStamp(0.27139877911452237);
    msg.setSource(34150U);
    msg.setSourceEntity(116U);
    msg.setDestination(63705U);
    msg.setDestinationEntity(29U);
    msg.name.assign("GPLUZVHAEAUOFCVGPQYSPWZHKUYVNVWOKSSGFKVKKDMMOYYLIVWIOICPBEREMGCTGHJFQQFZKOBXGSENQXYDHUJJHOILBDWXCL");
    msg.op = 78U;
    msg.sched_time = 0.1613952421426067;

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
    msg.setTimeStamp(0.25044125883927437);
    msg.setSource(43571U);
    msg.setSourceEntity(102U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(1U);
    msg.name.assign("PYRKMIAWQFKTANBTNSNOTGEZFDZNUQXWTLWPOMBPYWQSACGVVLWKOQJKTUZPSIJUVSUSOBFBBFHJZELRQBBRVXDJHRCOIJNTNLSJGXIMZAKAICKXBYYDFVUJPORKHZHGBMZYWJGZDGQFALWSJMLDDLGAXGGRVYCVXNQRTACPOTFPOORWMHTD");
    msg.op = 11U;
    msg.sched_time = 0.6402834364539359;

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
    msg.setTimeStamp(0.2052233399418636);
    msg.setSource(44438U);
    msg.setSourceEntity(150U);
    msg.setDestination(44062U);
    msg.setDestinationEntity(214U);
    msg.name.assign("XEXCYGOYYHKHXOUQEBZVHRUIKRWEEMWRIBYLWRMNMQGMLTNSOPNZFXJWGSIAUJFXMPDBNUSBDBEVSWZDHKAVAMILAWETAFCSBYNQYTKOFKUXLGCBKDFOCREKCZUNNIHQJZMUIVHNSGBUDJZYLSERJIDJBRFVRVMACCPRKTXOIDGQZOOLJRTPTCAHTCLDOAPJOWVWVSFKPPUQZWSGDPHKFMQTZCIQNAGHQLYGNVJPXTF");
    msg.op = 193U;
    msg.sched_time = 0.292076482867463;

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
    msg.setTimeStamp(0.3769596410509778);
    msg.setSource(53949U);
    msg.setSourceEntity(19U);
    msg.setDestination(2881U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.8070865502586115);
    msg.setSource(31738U);
    msg.setSourceEntity(154U);
    msg.setDestination(45312U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.9982963977107564);
    msg.setSource(11997U);
    msg.setSourceEntity(212U);
    msg.setDestination(53934U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.05063502847530965);
    msg.setSource(30902U);
    msg.setSourceEntity(210U);
    msg.setDestination(51667U);
    msg.setDestinationEntity(29U);
    msg.name.assign("HKVALCRATROHAYSRDOALZNJPGDFOQLMUXTALYFBSLBHTXWNIWCDDFSWEUCZJFTJPEVHWKGPRXMBTWKJIWQMNMIUWAWEEZLPPHCKVIFGHYFMFTFV");
    msg.state = 211U;

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
    msg.setTimeStamp(0.3481580899378349);
    msg.setSource(39178U);
    msg.setSourceEntity(202U);
    msg.setDestination(48600U);
    msg.setDestinationEntity(46U);
    msg.name.assign("PQEHUPXPYZDHRSHYEUJXWJVBEGVWJLXSITXDOICLNVGOKARCDMQSGABZMCVPAANEMYMMBKBQRTZDQCUJYFCIUQHJZZFCVSHDCOJWYYGJEFIHOSOGLYWFTFVRGYOPNVVXILWCLPKFBDAMFNJDXPSULRNFXKKBZXLEQX");
    msg.state = 182U;

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
    msg.setTimeStamp(0.635973693532031);
    msg.setSource(54787U);
    msg.setSourceEntity(99U);
    msg.setDestination(16197U);
    msg.setDestinationEntity(60U);
    msg.name.assign("KNSKPMAHBQEVVTJYXPBGFHDMAWAVIRLHRPIUNMKLSSOYGRAOTEZCTKJCYWIZUBRUNDWOMFNVJHWVALOTDLTIUCOFXWUSGLSDZRAWFJZINKOIVGXEAAIAFFNTUEYDPRQDBOHYVVSQLEPQBBZXJQMPSGCYJHCXOMNIGVLPEDFCTKMXODMPWFGYYCBQXRCPLTJSTKWHBOMQDRZKBUQNFVEUGZHQCZUFSJWW");
    msg.state = 53U;

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
    msg.setTimeStamp(0.19996417185766946);
    msg.setSource(1621U);
    msg.setSourceEntity(26U);
    msg.setDestination(8057U);
    msg.setDestinationEntity(89U);
    msg.name.assign("FUBCNTAQASQALZMPVOVOGPREFZYGHJVTGSUGPRYNIUKNREWKVQCJWFRBBOLCFIWMJJLYRXZKCENHKKMOLQTZIJJQYTSGDUIIOQBLRUKNCGPMHAUCIBXTGJUUFVETNDKLHRAWPZWJSXPHYALV");
    msg.value = 241U;

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
    msg.setTimeStamp(0.5285418358221455);
    msg.setSource(36627U);
    msg.setSourceEntity(45U);
    msg.setDestination(13085U);
    msg.setDestinationEntity(191U);
    msg.name.assign("FHXGARQALLD");
    msg.value = 35U;

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
    msg.setTimeStamp(0.8775051969451637);
    msg.setSource(59881U);
    msg.setSourceEntity(176U);
    msg.setDestination(31935U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ZDUIPHXASHEIBGS");
    msg.value = 201U;

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
    msg.setTimeStamp(0.515893469485984);
    msg.setSource(5006U);
    msg.setSourceEntity(98U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(58U);
    msg.name.assign("TMVRTMVDMBGSEJVEBXGOBKYCIRGYVICERUQNTWANXDHZIGMAHETNQPXXJDZKAORJYEFDQPIYWCJSOYLLZAZIUPARPCSZEHDCFGQ");

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
    msg.setTimeStamp(0.15961434816345488);
    msg.setSource(56345U);
    msg.setSourceEntity(122U);
    msg.setDestination(16389U);
    msg.setDestinationEntity(75U);
    msg.name.assign("BWEVLVPGRSGYOGKJUZMNFEQVYPFSXTFDSTLZNCSHNTWGXRDVXUOZMXIYQVRNAUYHGADGZNJUPEFIMUXCBOFLOBLUJZPMTAHDJTCGQUKBDOHGZRFXWNFLSVKOPTWWCZJXAQNPSELQKBAASDLYQHMIOEWPPV");

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
    msg.setTimeStamp(0.3365096734764699);
    msg.setSource(54456U);
    msg.setSourceEntity(238U);
    msg.setDestination(61094U);
    msg.setDestinationEntity(244U);
    msg.name.assign("HWUAELLGIEEHVDPBZIRSJYIVOJYDVZAYVXAECZAWVLUDLZMRNYAWTKBTGEPWRHXNMGVRAJMQUUWUSJMXBAVSSWSRNTOBAIMDKTOPRFQYZZXSREJXCDIBNFYEHQCYOCUCMXXCISRHMUONXJDKVZUPHFLNXWJWDDHFTCMHHUGFJQGGTBBSFTKNMKLOKTKEQONIYDFBGGSVH");

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
    msg.setTimeStamp(0.30902572080674096);
    msg.setSource(19673U);
    msg.setSourceEntity(231U);
    msg.setDestination(61516U);
    msg.setDestinationEntity(113U);
    msg.name.assign("JWCPDRYYPTCHCFTZCEZJNRQOVQZNLTPVOXJBIFQFSKWMKSTQDAWAYMPXPBJGSLVCRMKSUUVZXRTAUDZGXHVXZTKXPXNSNESFBIHROLYLNCSPDNTJOLBRGFJYHZQMKQMXGMDYVUEFLKARWOINYJAENRFNGUGHIUQJVLSHAOGBIHNPLIIFGBEZEDWMAUWIJIWPGESVKYCYUAOHKIACMLGZRQFJR");
    msg.value = 39U;

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
    msg.setTimeStamp(0.4257143104004907);
    msg.setSource(59526U);
    msg.setSourceEntity(211U);
    msg.setDestination(45120U);
    msg.setDestinationEntity(28U);
    msg.name.assign("YMQRJCCWUYWJUARUICZNLVBCKUWUYIERHUVMHGBPARICFHDFAXZGYVZRXATIUDXJSMLB");
    msg.value = 129U;

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
    msg.setTimeStamp(0.21499844234512422);
    msg.setSource(57950U);
    msg.setSourceEntity(128U);
    msg.setDestination(27248U);
    msg.setDestinationEntity(218U);
    msg.name.assign("BORCCBPMQWIOZEHOONAEAQZTIXKDWAFPVLFRYSBXVBLWLMXNMLZJHDXKJORGZNHINHUXEKDJJMJWBQKRZJMFHWKGUALEBNCUROZWZLUQUFYMZOSCDYIKVKBROS");
    msg.value = 232U;

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
    msg.setTimeStamp(0.6918513811847458);
    msg.setSource(49229U);
    msg.setSourceEntity(10U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(59U);
    msg.id = 187U;
    msg.period = 3449427827U;
    msg.duty_cycle = 2260632195U;

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
    msg.setTimeStamp(0.06911989379235961);
    msg.setSource(2312U);
    msg.setSourceEntity(161U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(173U);
    msg.id = 243U;
    msg.period = 2299005604U;
    msg.duty_cycle = 1579606948U;

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
    msg.setTimeStamp(0.8810992700705333);
    msg.setSource(23668U);
    msg.setSourceEntity(19U);
    msg.setDestination(3499U);
    msg.setDestinationEntity(42U);
    msg.id = 248U;
    msg.period = 3224013658U;
    msg.duty_cycle = 4195283991U;

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
    msg.setTimeStamp(0.3769452983193343);
    msg.setSource(62989U);
    msg.setSourceEntity(158U);
    msg.setDestination(40379U);
    msg.setDestinationEntity(45U);
    msg.id = 120U;
    msg.period = 514641018U;
    msg.duty_cycle = 3745769565U;

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
    msg.setTimeStamp(0.5726498616484637);
    msg.setSource(41095U);
    msg.setSourceEntity(15U);
    msg.setDestination(16866U);
    msg.setDestinationEntity(92U);
    msg.id = 252U;
    msg.period = 3422715708U;
    msg.duty_cycle = 2320769431U;

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
    msg.setTimeStamp(0.21383243274767416);
    msg.setSource(19617U);
    msg.setSourceEntity(205U);
    msg.setDestination(23169U);
    msg.setDestinationEntity(241U);
    msg.id = 153U;
    msg.period = 3465879734U;
    msg.duty_cycle = 637689009U;

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
    msg.setTimeStamp(0.7219623368953171);
    msg.setSource(51718U);
    msg.setSourceEntity(217U);
    msg.setDestination(5003U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.7219764589728579;
    msg.lon = 0.6804626703767164;
    msg.height = 0.2860702094601538;
    msg.x = 0.06039807976924505;
    msg.y = 0.39631053883015455;
    msg.z = 0.9311396311236482;
    msg.phi = 0.7528478103834859;
    msg.theta = 0.9613774259758979;
    msg.psi = 0.6640076420226233;
    msg.u = 0.006948591105498947;
    msg.v = 0.17670245361364678;
    msg.w = 0.026160837348786936;
    msg.vx = 0.8686960737737183;
    msg.vy = 0.32365243499982776;
    msg.vz = 0.41075415022356965;
    msg.p = 0.48636057512105646;
    msg.q = 0.8213847168450535;
    msg.r = 0.7667738597833318;
    msg.depth = 0.3591372911185017;
    msg.alt = 0.8000944518773648;

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
    msg.setTimeStamp(0.40084177908679863);
    msg.setSource(53220U);
    msg.setSourceEntity(136U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6234274295418746;
    msg.lon = 0.2311546771856856;
    msg.height = 0.9348652050375917;
    msg.x = 0.887066353739378;
    msg.y = 0.04455262686277128;
    msg.z = 0.6000799969531158;
    msg.phi = 0.781656585819498;
    msg.theta = 0.5849464514732065;
    msg.psi = 0.9581894399970768;
    msg.u = 0.7153562952573046;
    msg.v = 0.9005052701733629;
    msg.w = 0.6059221737696506;
    msg.vx = 0.5025813408330693;
    msg.vy = 0.5809390958538548;
    msg.vz = 0.112740583332399;
    msg.p = 0.028732647428358127;
    msg.q = 0.275727165234135;
    msg.r = 0.9796271941867766;
    msg.depth = 0.876757434531359;
    msg.alt = 0.21185372676219583;

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
    msg.setTimeStamp(0.7326336222305053);
    msg.setSource(48920U);
    msg.setSourceEntity(52U);
    msg.setDestination(45257U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.5253971229743905;
    msg.lon = 0.520204974888886;
    msg.height = 0.0038632329208398986;
    msg.x = 0.6500810705081026;
    msg.y = 0.38466086441753655;
    msg.z = 0.29212734251323147;
    msg.phi = 0.28059104169993687;
    msg.theta = 0.1915613079140519;
    msg.psi = 0.1498472897344597;
    msg.u = 0.8549918207288885;
    msg.v = 0.0500603214586578;
    msg.w = 0.1459855325489452;
    msg.vx = 0.3127991180071894;
    msg.vy = 0.8552817773386392;
    msg.vz = 0.515283269059338;
    msg.p = 0.9529346976752544;
    msg.q = 0.2112112195445438;
    msg.r = 0.9101899890431645;
    msg.depth = 0.14128861457585562;
    msg.alt = 0.2031326134382354;

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
    msg.setTimeStamp(0.28882211917088096);
    msg.setSource(60047U);
    msg.setSourceEntity(96U);
    msg.setDestination(13877U);
    msg.setDestinationEntity(241U);
    msg.x = 0.4446199967503275;
    msg.y = 0.7901580348329559;
    msg.z = 0.2545955647664143;

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
    msg.setTimeStamp(0.4978696328593464);
    msg.setSource(61638U);
    msg.setSourceEntity(129U);
    msg.setDestination(51475U);
    msg.setDestinationEntity(133U);
    msg.x = 0.03472764934473316;
    msg.y = 0.04424355295207383;
    msg.z = 0.6268336245881303;

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
    msg.setTimeStamp(0.694508891932984);
    msg.setSource(9491U);
    msg.setSourceEntity(131U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(40U);
    msg.x = 0.03950299289385517;
    msg.y = 0.36554868038700683;
    msg.z = 0.9823014100793893;

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
    msg.setTimeStamp(0.5376973950836378);
    msg.setSource(39948U);
    msg.setSourceEntity(243U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(128U);
    msg.value = 0.6081974839195435;

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
    msg.setTimeStamp(0.5460213838256135);
    msg.setSource(19995U);
    msg.setSourceEntity(7U);
    msg.setDestination(56009U);
    msg.setDestinationEntity(246U);
    msg.value = 0.328820532488338;

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
    msg.setTimeStamp(0.32966902485025884);
    msg.setSource(60302U);
    msg.setSourceEntity(157U);
    msg.setDestination(25656U);
    msg.setDestinationEntity(3U);
    msg.value = 0.3090517742249974;

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
    msg.setTimeStamp(0.662184099423529);
    msg.setSource(3799U);
    msg.setSourceEntity(206U);
    msg.setDestination(11581U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9818138560415476;

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
    msg.setTimeStamp(0.20454899012825645);
    msg.setSource(58713U);
    msg.setSourceEntity(43U);
    msg.setDestination(21440U);
    msg.setDestinationEntity(238U);
    msg.value = 0.043425193879696566;

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
    msg.setTimeStamp(0.91832105783706);
    msg.setSource(63224U);
    msg.setSourceEntity(147U);
    msg.setDestination(37421U);
    msg.setDestinationEntity(218U);
    msg.value = 0.9149273073527663;

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
    msg.setTimeStamp(0.8014203928626316);
    msg.setSource(60637U);
    msg.setSourceEntity(7U);
    msg.setDestination(52642U);
    msg.setDestinationEntity(173U);
    msg.x = 0.8194177115775488;
    msg.y = 0.5230036389167033;
    msg.z = 0.8397465662452948;
    msg.phi = 0.29068819760156295;
    msg.theta = 0.996526694619939;
    msg.psi = 0.5528783790341204;
    msg.p = 0.8498629265075636;
    msg.q = 0.7159321779024909;
    msg.r = 0.3571255941957364;
    msg.u = 0.8363026371281761;
    msg.v = 0.14346027325368838;
    msg.w = 0.42745466445957325;
    msg.bias_psi = 0.6609357424068529;
    msg.bias_r = 0.6973367090198124;

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
    msg.setTimeStamp(0.6166777789402255);
    msg.setSource(26174U);
    msg.setSourceEntity(80U);
    msg.setDestination(32548U);
    msg.setDestinationEntity(217U);
    msg.x = 0.7208546301701526;
    msg.y = 0.14958861207501883;
    msg.z = 0.7936588372070081;
    msg.phi = 0.18656058502018125;
    msg.theta = 0.6626160366844843;
    msg.psi = 0.9184069739022342;
    msg.p = 0.8020513184494644;
    msg.q = 0.41529939012602557;
    msg.r = 0.1258163922036477;
    msg.u = 0.18043934947664197;
    msg.v = 0.4401072247827166;
    msg.w = 0.537251650395122;
    msg.bias_psi = 0.319060409337824;
    msg.bias_r = 0.14161543742075544;

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
    msg.setTimeStamp(0.45829747127034226);
    msg.setSource(57668U);
    msg.setSourceEntity(6U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(222U);
    msg.x = 0.7577019221274579;
    msg.y = 0.42571476211872616;
    msg.z = 0.7221973735167305;
    msg.phi = 0.4589084004105547;
    msg.theta = 0.30870344247115444;
    msg.psi = 0.02695973171025634;
    msg.p = 0.7307296465786915;
    msg.q = 0.17184963101668094;
    msg.r = 0.8365455484589995;
    msg.u = 0.8533457180646612;
    msg.v = 0.4610736169308238;
    msg.w = 0.7706662715026862;
    msg.bias_psi = 0.6566750463573159;
    msg.bias_r = 0.8404026999482496;

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
    msg.setTimeStamp(0.8795987764395239);
    msg.setSource(4368U);
    msg.setSourceEntity(232U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(116U);
    msg.bias_psi = 0.5820525034516534;
    msg.bias_r = 0.034309470443501855;
    msg.cog = 0.4791954279909775;
    msg.cyaw = 0.9231162241883875;
    msg.lbl_rej_level = 0.850699233418966;
    msg.gps_rej_level = 0.3992629225460851;
    msg.custom_x = 0.16287471524257324;
    msg.custom_y = 0.06339477280755879;
    msg.custom_z = 0.5983176323885934;

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
    msg.setTimeStamp(0.6690302854225659);
    msg.setSource(10643U);
    msg.setSourceEntity(193U);
    msg.setDestination(37481U);
    msg.setDestinationEntity(212U);
    msg.bias_psi = 0.8245343772551479;
    msg.bias_r = 0.9180213186623574;
    msg.cog = 0.17593313057519488;
    msg.cyaw = 0.11828932641498158;
    msg.lbl_rej_level = 0.2436214292240768;
    msg.gps_rej_level = 0.7234964967319091;
    msg.custom_x = 0.7714764999033156;
    msg.custom_y = 0.601346802785925;
    msg.custom_z = 0.709357369910583;

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
    msg.setTimeStamp(0.08981147787918786);
    msg.setSource(9921U);
    msg.setSourceEntity(247U);
    msg.setDestination(31676U);
    msg.setDestinationEntity(217U);
    msg.bias_psi = 0.6236806405455766;
    msg.bias_r = 0.9046552457997619;
    msg.cog = 0.674857820128155;
    msg.cyaw = 0.5172334667459261;
    msg.lbl_rej_level = 0.9554979391828962;
    msg.gps_rej_level = 0.07913173622468705;
    msg.custom_x = 0.6428951583386517;
    msg.custom_y = 0.8493923270803257;
    msg.custom_z = 0.22660660352984185;

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
    msg.setTimeStamp(0.5653691823683489);
    msg.setSource(22805U);
    msg.setSourceEntity(181U);
    msg.setDestination(30112U);
    msg.setDestinationEntity(231U);
    msg.utc_time = 0.03191678895355754;
    msg.reason = 58U;

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
    msg.setTimeStamp(0.23675050052225866);
    msg.setSource(1703U);
    msg.setSourceEntity(241U);
    msg.setDestination(21529U);
    msg.setDestinationEntity(246U);
    msg.utc_time = 0.1994559075406387;
    msg.reason = 170U;

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
    msg.setTimeStamp(0.7396477864925711);
    msg.setSource(59920U);
    msg.setSourceEntity(28U);
    msg.setDestination(39500U);
    msg.setDestinationEntity(228U);
    msg.utc_time = 0.14291334867023853;
    msg.reason = 106U;

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
    msg.setTimeStamp(0.4645842519185144);
    msg.setSource(43527U);
    msg.setSourceEntity(131U);
    msg.setDestination(58948U);
    msg.setDestinationEntity(27U);
    msg.id = 126U;
    msg.range = 0.4360456695622439;
    msg.acceptance = 194U;

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
    msg.setTimeStamp(0.12817993087469948);
    msg.setSource(41396U);
    msg.setSourceEntity(34U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(35U);
    msg.id = 41U;
    msg.range = 0.5784350341611978;
    msg.acceptance = 116U;

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
    msg.setTimeStamp(0.4056555542658782);
    msg.setSource(27391U);
    msg.setSourceEntity(112U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(50U);
    msg.id = 18U;
    msg.range = 0.4430794961316308;
    msg.acceptance = 88U;

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
    msg.setTimeStamp(0.2379434993185766);
    msg.setSource(4778U);
    msg.setSourceEntity(66U);
    msg.setDestination(47599U);
    msg.setDestinationEntity(64U);
    msg.type = 31U;
    msg.reason = 146U;
    msg.value = 0.5091315543520363;
    msg.timestep = 0.13837620560682795;

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
    msg.setTimeStamp(0.5004087709371272);
    msg.setSource(9289U);
    msg.setSourceEntity(8U);
    msg.setDestination(15518U);
    msg.setDestinationEntity(212U);
    msg.type = 167U;
    msg.reason = 175U;
    msg.value = 0.6362934833708217;
    msg.timestep = 0.11845286025726731;

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
    msg.setTimeStamp(0.6771555506153238);
    msg.setSource(14223U);
    msg.setSourceEntity(163U);
    msg.setDestination(43604U);
    msg.setDestinationEntity(23U);
    msg.type = 50U;
    msg.reason = 46U;
    msg.value = 0.5546166516187712;
    msg.timestep = 0.1169824468729086;

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
    msg.setTimeStamp(0.6989450132538586);
    msg.setSource(35919U);
    msg.setSourceEntity(32U);
    msg.setDestination(13272U);
    msg.setDestinationEntity(68U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QZSHCGGUDYRSIXQRDLIVPKEKOYNZZBGJCPRIABUDGUJFHPJTCSBBZXAQAYTNFHMCBGMXJXERKLMAXXJPQESLEVQMECHKDUKVTBLLOUWAOOANITTNZVRWFNIPDDBKQUHEACOJPMHYQBNROXRARRFSTWYLVLTHXEOFPTUYAUHQV");
    tmp_msg_0.lat = 0.6195905686027722;
    tmp_msg_0.lon = 0.6596964268843764;
    tmp_msg_0.depth = 0.08447870073530328;
    tmp_msg_0.query_channel = 232U;
    tmp_msg_0.reply_channel = 34U;
    tmp_msg_0.transponder_delay = 6U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5773478551134057;
    msg.y = 0.6947452226334769;
    msg.var_x = 0.34679525630609764;
    msg.var_y = 0.31408761137577845;
    msg.distance = 0.18197798549849353;

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
    msg.setTimeStamp(0.5559113778534737);
    msg.setSource(10590U);
    msg.setSourceEntity(247U);
    msg.setDestination(29108U);
    msg.setDestinationEntity(147U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IDCZYGFKRUXSXVZRWDDHCTTEYZATVEPFWJWMWDEPTRJPCRNUPVKLLJSFAKUQQBMSRTONYBEOSEOEBILFOYHMOSPGLQASVGEOOJKSAMOHDRLZFIHWPKCKVLBHZYYZQFVJTUZXZYDWNBNITKHGNCLNISVDQGXXQFUBUAMGMRRC");
    tmp_msg_0.lat = 0.44856869141600897;
    tmp_msg_0.lon = 0.9303504993901665;
    tmp_msg_0.depth = 0.4767277494682737;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 75U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18385249544867177;
    msg.y = 0.7780497695950372;
    msg.var_x = 0.0369732598704936;
    msg.var_y = 0.4744128886880856;
    msg.distance = 0.43167224497945955;

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
    msg.setTimeStamp(0.7055137933338388);
    msg.setSource(60512U);
    msg.setSourceEntity(48U);
    msg.setDestination(43815U);
    msg.setDestinationEntity(126U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SWFSTZQHXLRNOJWEEAJUXHYOVOWAGDXBRXTIPRLKPKZUKQLUSCYCPUCAKHDBHQYACJWVGCARXPYYFBIUEZBCXHMNPMJLGDODSVETPILJVEFBSBQIRIFKCTTOTEOIYQDUWULBQALNBHFFLJKWMXMTHYLRUNMOMRTNOZDNVGCRHZPKUDPBSNDPAFGVHQDDFQFSSSOKSIGNVZLEBMWMZGOITFQ");
    tmp_msg_0.lat = 0.9055762571167156;
    tmp_msg_0.lon = 0.8011037394282905;
    tmp_msg_0.depth = 0.8144110404185912;
    tmp_msg_0.query_channel = 33U;
    tmp_msg_0.reply_channel = 164U;
    tmp_msg_0.transponder_delay = 181U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0763358415480887;
    msg.y = 0.4614210463245647;
    msg.var_x = 0.7032854631939905;
    msg.var_y = 0.27231352648600504;
    msg.distance = 0.11929058287166483;

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
    msg.setTimeStamp(0.1005209237360426);
    msg.setSource(61263U);
    msg.setSourceEntity(77U);
    msg.setDestination(64652U);
    msg.setDestinationEntity(203U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.5786399141057759);
    msg.setSource(30942U);
    msg.setSourceEntity(214U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(180U);
    msg.state = 184U;

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
    msg.setTimeStamp(0.14082758646799287);
    msg.setSource(27208U);
    msg.setSourceEntity(249U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(234U);
    msg.state = 185U;

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
    msg.setTimeStamp(0.8853391810590472);
    msg.setSource(27800U);
    msg.setSourceEntity(172U);
    msg.setDestination(25250U);
    msg.setDestinationEntity(218U);
    msg.x = 0.32045685409267366;
    msg.y = 0.8142019005194252;
    msg.z = 0.6790799023938991;

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
    msg.setTimeStamp(0.7308947840098213);
    msg.setSource(4181U);
    msg.setSourceEntity(239U);
    msg.setDestination(7879U);
    msg.setDestinationEntity(177U);
    msg.x = 0.8925920894798571;
    msg.y = 0.28087556203614084;
    msg.z = 0.19051954030471396;

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
    msg.setTimeStamp(0.8638868264756078);
    msg.setSource(5829U);
    msg.setSourceEntity(139U);
    msg.setDestination(16840U);
    msg.setDestinationEntity(238U);
    msg.x = 0.6887433750514951;
    msg.y = 0.7031176381859154;
    msg.z = 0.26225481212189017;

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
    IMC::Airflow msg;
    msg.setTimeStamp(0.9180002830000836);
    msg.setSource(8438U);
    msg.setSourceEntity(80U);
    msg.setDestination(23392U);
    msg.setDestinationEntity(118U);
    msg.va = 0.9119463667493555;
    msg.aoa = 0.5742882695685586;
    msg.ssa = 0.4387316808939926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.06955433356073237);
    msg.setSource(40285U);
    msg.setSourceEntity(61U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(38U);
    msg.va = 0.4424128838563537;
    msg.aoa = 0.34489720451276396;
    msg.ssa = 0.5910623259966046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.985851355603454);
    msg.setSource(16069U);
    msg.setSourceEntity(108U);
    msg.setDestination(21217U);
    msg.setDestinationEntity(252U);
    msg.va = 0.14688499689679635;
    msg.aoa = 0.5229705779859047;
    msg.ssa = 0.45514164578794314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8905836698649902);
    msg.setSource(17867U);
    msg.setSourceEntity(221U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9313800463072892;

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
    msg.setTimeStamp(0.04962532978436618);
    msg.setSource(24245U);
    msg.setSourceEntity(144U);
    msg.setDestination(40333U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6175296000169122;

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
    msg.setTimeStamp(0.5050191168031261);
    msg.setSource(15974U);
    msg.setSourceEntity(2U);
    msg.setDestination(22816U);
    msg.setDestinationEntity(155U);
    msg.value = 0.24488138211527444;

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
    msg.setTimeStamp(0.5901366288577148);
    msg.setSource(56882U);
    msg.setSourceEntity(11U);
    msg.setDestination(16673U);
    msg.setDestinationEntity(32U);
    msg.value = 0.5425385325712486;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.8472522987705899);
    msg.setSource(6U);
    msg.setSourceEntity(240U);
    msg.setDestination(21656U);
    msg.setDestinationEntity(161U);
    msg.value = 0.61382500712673;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.09299376176235086);
    msg.setSource(12566U);
    msg.setSourceEntity(180U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9083395492394679;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.04732826884969765);
    msg.setSource(3020U);
    msg.setSourceEntity(145U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(250U);
    msg.value = 0.31519302401192373;
    msg.speed_units = 73U;

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
    msg.setTimeStamp(0.730685206959204);
    msg.setSource(45614U);
    msg.setSourceEntity(73U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(227U);
    msg.value = 0.18191692714068075;
    msg.speed_units = 61U;

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
    msg.setTimeStamp(0.35480753724683645);
    msg.setSource(51340U);
    msg.setSourceEntity(247U);
    msg.setDestination(64740U);
    msg.setDestinationEntity(160U);
    msg.value = 0.08169440274762252;
    msg.speed_units = 161U;

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
    msg.setTimeStamp(0.9123874915593171);
    msg.setSource(26838U);
    msg.setSourceEntity(4U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(107U);
    msg.value = 0.6597585844540282;

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
    msg.setTimeStamp(0.8680702925522544);
    msg.setSource(3550U);
    msg.setSourceEntity(83U);
    msg.setDestination(15554U);
    msg.setDestinationEntity(113U);
    msg.value = 0.18870657179631933;

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
    msg.setTimeStamp(0.8136055910841928);
    msg.setSource(65226U);
    msg.setSourceEntity(3U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(70U);
    msg.value = 0.3799808191152959;

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
    msg.setTimeStamp(0.7076260851205495);
    msg.setSource(39422U);
    msg.setSourceEntity(133U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(169U);
    msg.value = 0.15397046395594494;

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
    msg.setTimeStamp(0.19167114253189244);
    msg.setSource(8238U);
    msg.setSourceEntity(202U);
    msg.setDestination(53236U);
    msg.setDestinationEntity(145U);
    msg.value = 0.4086586968832069;

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
    msg.setTimeStamp(0.3298108232668381);
    msg.setSource(9411U);
    msg.setSourceEntity(38U);
    msg.setDestination(25650U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5416647483883928;

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
    msg.setTimeStamp(0.33472693137033427);
    msg.setSource(37068U);
    msg.setSourceEntity(103U);
    msg.setDestination(49480U);
    msg.setDestinationEntity(190U);
    msg.value = 0.13594793282579432;

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
    msg.setTimeStamp(0.2256444326732565);
    msg.setSource(40676U);
    msg.setSourceEntity(199U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(7U);
    msg.value = 0.2880595778096565;

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
    msg.setTimeStamp(0.8445363851216107);
    msg.setSource(19972U);
    msg.setSourceEntity(222U);
    msg.setDestination(32142U);
    msg.setDestinationEntity(203U);
    msg.value = 0.7121544171710732;

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
    msg.setTimeStamp(0.35328328945353826);
    msg.setSource(14828U);
    msg.setSourceEntity(128U);
    msg.setDestination(65501U);
    msg.setDestinationEntity(77U);
    msg.path_ref = 3026854576U;
    msg.start_lat = 0.6011084212983616;
    msg.start_lon = 0.29902603023270746;
    msg.start_z = 0.17311022442668011;
    msg.start_z_units = 212U;
    msg.end_lat = 0.005547913029526286;
    msg.end_lon = 0.8339734414570646;
    msg.end_z = 0.20526640637083582;
    msg.end_z_units = 176U;
    msg.speed = 0.062041632551241066;
    msg.speed_units = 91U;
    msg.lradius = 0.7152359730015205;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.6054344531556654);
    msg.setSource(63331U);
    msg.setSourceEntity(191U);
    msg.setDestination(63150U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 1852388484U;
    msg.start_lat = 0.30528992870898297;
    msg.start_lon = 0.6928895319289226;
    msg.start_z = 0.5967979663116119;
    msg.start_z_units = 40U;
    msg.end_lat = 0.9396173248625552;
    msg.end_lon = 0.3209727810463431;
    msg.end_z = 0.04940843388637228;
    msg.end_z_units = 88U;
    msg.speed = 0.2565765164146423;
    msg.speed_units = 247U;
    msg.lradius = 0.461560487623327;
    msg.flags = 44U;

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
    msg.setTimeStamp(0.9230930388643712);
    msg.setSource(3106U);
    msg.setSourceEntity(201U);
    msg.setDestination(63181U);
    msg.setDestinationEntity(184U);
    msg.path_ref = 3352858702U;
    msg.start_lat = 0.03553667538720229;
    msg.start_lon = 0.9547056888496779;
    msg.start_z = 0.6476302094424623;
    msg.start_z_units = 109U;
    msg.end_lat = 0.7017707084417417;
    msg.end_lon = 0.8592415174530791;
    msg.end_z = 0.7547756620361524;
    msg.end_z_units = 87U;
    msg.speed = 0.7719664967396881;
    msg.speed_units = 169U;
    msg.lradius = 0.48787604816759633;
    msg.flags = 150U;

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
    msg.setTimeStamp(0.5672004980476194);
    msg.setSource(62429U);
    msg.setSourceEntity(201U);
    msg.setDestination(24336U);
    msg.setDestinationEntity(162U);
    msg.x = 0.3662536513946074;
    msg.y = 0.18065110794649242;
    msg.z = 0.7771256374304282;
    msg.k = 0.6345219975835639;
    msg.m = 0.08258593046871754;
    msg.n = 0.8279042815697754;
    msg.flags = 142U;

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
    msg.setTimeStamp(0.7991116256901645);
    msg.setSource(48628U);
    msg.setSourceEntity(244U);
    msg.setDestination(35006U);
    msg.setDestinationEntity(103U);
    msg.x = 0.5304486006784711;
    msg.y = 0.9302528630315174;
    msg.z = 0.8000327518917996;
    msg.k = 0.7163373919692911;
    msg.m = 0.42538255809782355;
    msg.n = 0.899646972071967;
    msg.flags = 156U;

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
    msg.setTimeStamp(0.7251426023952234);
    msg.setSource(35305U);
    msg.setSourceEntity(134U);
    msg.setDestination(44891U);
    msg.setDestinationEntity(28U);
    msg.x = 0.3786056548655886;
    msg.y = 0.4460869869078643;
    msg.z = 0.36745098158239264;
    msg.k = 0.6687750799586296;
    msg.m = 0.7071638671488618;
    msg.n = 0.09690297500902578;
    msg.flags = 19U;

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
    msg.setTimeStamp(0.10949170944767928);
    msg.setSource(49442U);
    msg.setSourceEntity(199U);
    msg.setDestination(39043U);
    msg.setDestinationEntity(184U);
    msg.value = 0.34699062383985935;

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
    msg.setTimeStamp(0.29318789074261065);
    msg.setSource(18533U);
    msg.setSourceEntity(86U);
    msg.setDestination(2401U);
    msg.setDestinationEntity(205U);
    msg.value = 0.4473205447829415;

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
    msg.setTimeStamp(0.6099391655469988);
    msg.setSource(45643U);
    msg.setSourceEntity(206U);
    msg.setDestination(9280U);
    msg.setDestinationEntity(133U);
    msg.value = 0.600504761647706;

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
    msg.setTimeStamp(0.005361147401884869);
    msg.setSource(27065U);
    msg.setSourceEntity(0U);
    msg.setDestination(35043U);
    msg.setDestinationEntity(3U);
    msg.u = 0.3502292797412577;
    msg.v = 0.18982992507675422;
    msg.w = 0.9239620482876442;
    msg.p = 0.5676494217296901;
    msg.q = 0.9250539382331958;
    msg.r = 0.6784965410789109;
    msg.flags = 54U;

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
    msg.setTimeStamp(0.14772935811664334);
    msg.setSource(22409U);
    msg.setSourceEntity(142U);
    msg.setDestination(8522U);
    msg.setDestinationEntity(66U);
    msg.u = 0.6529225205252385;
    msg.v = 0.1930337824125815;
    msg.w = 0.5398610662128468;
    msg.p = 0.11954590180839919;
    msg.q = 0.7480963062430149;
    msg.r = 0.3081509986810146;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.6613565977110855);
    msg.setSource(15672U);
    msg.setSourceEntity(24U);
    msg.setDestination(13297U);
    msg.setDestinationEntity(149U);
    msg.u = 0.415505458999207;
    msg.v = 0.7645666209816355;
    msg.w = 0.5359906195651513;
    msg.p = 0.8991765036963211;
    msg.q = 0.14418377736007326;
    msg.r = 0.5153162197497764;
    msg.flags = 164U;

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
    msg.setTimeStamp(0.49894072569990244);
    msg.setSource(60407U);
    msg.setSourceEntity(89U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(157U);
    msg.path_ref = 10650035U;
    msg.start_lat = 0.7762338532229924;
    msg.start_lon = 0.8242789571610178;
    msg.start_z = 0.8380176568010471;
    msg.start_z_units = 19U;
    msg.end_lat = 0.21469889768102213;
    msg.end_lon = 0.21819194330035363;
    msg.end_z = 0.5004770854634153;
    msg.end_z_units = 13U;
    msg.lradius = 0.5100492567875475;
    msg.flags = 164U;
    msg.x = 0.28672442330409287;
    msg.y = 0.4403452931234929;
    msg.z = 0.2773565701572889;
    msg.vx = 0.6774540712352826;
    msg.vy = 0.32360288229206147;
    msg.vz = 0.8699871619405375;
    msg.course_error = 0.17720108378019594;
    msg.eta = 25335U;

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
    msg.setTimeStamp(0.5999892136752987);
    msg.setSource(7460U);
    msg.setSourceEntity(104U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 966567254U;
    msg.start_lat = 0.5158566882904262;
    msg.start_lon = 0.3026423376552133;
    msg.start_z = 0.7885408211376581;
    msg.start_z_units = 252U;
    msg.end_lat = 0.27648920001331767;
    msg.end_lon = 0.09787868702223612;
    msg.end_z = 0.2073893518243538;
    msg.end_z_units = 59U;
    msg.lradius = 0.03530293570684606;
    msg.flags = 215U;
    msg.x = 0.6890192477468616;
    msg.y = 0.7991675348616665;
    msg.z = 0.6185901143213166;
    msg.vx = 0.5413179848575065;
    msg.vy = 0.3789014259124801;
    msg.vz = 0.5588343391450524;
    msg.course_error = 0.9748405333780977;
    msg.eta = 30636U;

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
    msg.setTimeStamp(0.43835098675412654);
    msg.setSource(484U);
    msg.setSourceEntity(147U);
    msg.setDestination(41778U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 3080744200U;
    msg.start_lat = 0.2848157475843627;
    msg.start_lon = 0.8185716142863695;
    msg.start_z = 0.20960721191515863;
    msg.start_z_units = 254U;
    msg.end_lat = 0.8783907168671359;
    msg.end_lon = 0.8886186777494958;
    msg.end_z = 0.6233155010186221;
    msg.end_z_units = 159U;
    msg.lradius = 0.8411632141270601;
    msg.flags = 154U;
    msg.x = 0.6147127290472046;
    msg.y = 0.4057906513314702;
    msg.z = 0.0887417542863781;
    msg.vx = 0.9469944147009581;
    msg.vy = 0.5692707650668576;
    msg.vz = 0.5069692442861603;
    msg.course_error = 0.9905237743369495;
    msg.eta = 20778U;

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
    msg.setTimeStamp(0.12098246478891816);
    msg.setSource(51562U);
    msg.setSourceEntity(90U);
    msg.setDestination(15371U);
    msg.setDestinationEntity(57U);
    msg.k = 0.1848338559498055;
    msg.m = 0.1730636120669905;
    msg.n = 0.6731386022707883;

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
    msg.setTimeStamp(0.5159541847525714);
    msg.setSource(1484U);
    msg.setSourceEntity(90U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(43U);
    msg.k = 0.37868002846679405;
    msg.m = 0.4217321617477202;
    msg.n = 0.3052641807668406;

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
    msg.setTimeStamp(0.9490875573941183);
    msg.setSource(41873U);
    msg.setSourceEntity(161U);
    msg.setDestination(21025U);
    msg.setDestinationEntity(91U);
    msg.k = 0.2892466995481724;
    msg.m = 0.16519351958401418;
    msg.n = 0.4874134425395006;

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
    msg.setTimeStamp(0.7380516726128441);
    msg.setSource(24549U);
    msg.setSourceEntity(221U);
    msg.setDestination(21879U);
    msg.setDestinationEntity(244U);
    msg.p = 0.3632118381677063;
    msg.i = 0.6746657462108584;
    msg.d = 0.48589134064754647;
    msg.a = 0.3739213750261796;

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
    msg.setTimeStamp(0.36249219315446657);
    msg.setSource(12794U);
    msg.setSourceEntity(22U);
    msg.setDestination(8372U);
    msg.setDestinationEntity(43U);
    msg.p = 0.0332098979481007;
    msg.i = 0.22874222636428732;
    msg.d = 0.345827920185223;
    msg.a = 0.5420788030195618;

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
    msg.setTimeStamp(0.16627354223446333);
    msg.setSource(176U);
    msg.setSourceEntity(19U);
    msg.setDestination(59078U);
    msg.setDestinationEntity(238U);
    msg.p = 0.8486889475543677;
    msg.i = 0.7927638264734964;
    msg.d = 0.5243814710353246;
    msg.a = 0.4163651122594946;

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
    msg.setTimeStamp(0.1677099651571039);
    msg.setSource(14636U);
    msg.setSourceEntity(208U);
    msg.setDestination(2207U);
    msg.setDestinationEntity(85U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.8443875874009542);
    msg.setSource(45139U);
    msg.setSourceEntity(111U);
    msg.setDestination(23084U);
    msg.setDestinationEntity(80U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.12037913850078907);
    msg.setSource(6935U);
    msg.setSourceEntity(169U);
    msg.setDestination(33444U);
    msg.setDestinationEntity(116U);
    msg.op = 198U;

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
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.18448989427383855);
    msg.setSource(53602U);
    msg.setSourceEntity(20U);
    msg.setDestination(3928U);
    msg.setDestinationEntity(20U);
    msg.x = 0.1189677877565547;
    msg.y = 0.18689957406461577;
    msg.z = 0.1243709604943023;
    msg.vx = 0.25411366384300926;
    msg.vy = 0.24019336325526364;
    msg.vz = 0.507308367198828;
    msg.ax = 0.9389344958304663;
    msg.ay = 0.11036948109572742;
    msg.az = 0.6795437771401648;
    msg.flags = 62479U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.46174158972575385);
    msg.setSource(31216U);
    msg.setSourceEntity(223U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(226U);
    msg.x = 0.9808722235936187;
    msg.y = 0.9826048854827096;
    msg.z = 0.3089538379182022;
    msg.vx = 0.05953921121244099;
    msg.vy = 0.9988574422033052;
    msg.vz = 0.5275116205215449;
    msg.ax = 0.8460608163947297;
    msg.ay = 0.7026962301454883;
    msg.az = 0.8049481241727696;
    msg.flags = 29471U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.144820106180503);
    msg.setSource(59529U);
    msg.setSourceEntity(223U);
    msg.setDestination(62239U);
    msg.setDestinationEntity(178U);
    msg.x = 0.2878479138253134;
    msg.y = 0.02736373703681383;
    msg.z = 0.04946385107345297;
    msg.vx = 0.9924129270906543;
    msg.vy = 0.052700966579739994;
    msg.vz = 0.4688764004010322;
    msg.ax = 0.1386331620601019;
    msg.ay = 0.3657470424367536;
    msg.az = 0.14952601823100975;
    msg.flags = 59322U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.9441515681571192);
    msg.setSource(44917U);
    msg.setSourceEntity(154U);
    msg.setDestination(31892U);
    msg.setDestinationEntity(104U);
    msg.value = 0.11896322752704802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.05377274307067925);
    msg.setSource(17792U);
    msg.setSourceEntity(4U);
    msg.setDestination(4972U);
    msg.setDestinationEntity(54U);
    msg.value = 0.761405498642097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.5369438955920828);
    msg.setSource(44367U);
    msg.setSourceEntity(174U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(251U);
    msg.value = 0.3488378408307491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9041396427184444);
    msg.setSource(34658U);
    msg.setSourceEntity(152U);
    msg.setDestination(31276U);
    msg.setDestinationEntity(207U);
    msg.timeout = 12178U;
    msg.lat = 0.18696485461278944;
    msg.lon = 0.019956845480030294;
    msg.z = 0.3548093140546029;
    msg.z_units = 145U;
    msg.speed = 0.6001634702588883;
    msg.speed_units = 63U;
    msg.roll = 0.932759002961681;
    msg.pitch = 0.5560183623554329;
    msg.yaw = 0.4112487031372397;
    msg.custom.assign("OYHDQJCEGKOQVGZPNCDFSI");

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
    msg.setTimeStamp(0.14963166627147284);
    msg.setSource(45890U);
    msg.setSourceEntity(253U);
    msg.setDestination(38957U);
    msg.setDestinationEntity(197U);
    msg.timeout = 48269U;
    msg.lat = 0.39176616111504714;
    msg.lon = 0.458698499795234;
    msg.z = 0.12083525078237678;
    msg.z_units = 50U;
    msg.speed = 0.712338478071311;
    msg.speed_units = 26U;
    msg.roll = 0.07791744491815533;
    msg.pitch = 0.5681143389114591;
    msg.yaw = 0.02653340180889685;
    msg.custom.assign("IZAQHZXMSFWKADUTCOO");

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
    msg.setTimeStamp(0.24306729033168117);
    msg.setSource(33168U);
    msg.setSourceEntity(166U);
    msg.setDestination(6964U);
    msg.setDestinationEntity(213U);
    msg.timeout = 15963U;
    msg.lat = 0.5690133022699669;
    msg.lon = 0.6214616613004896;
    msg.z = 0.7208426053959114;
    msg.z_units = 150U;
    msg.speed = 0.9464222809780591;
    msg.speed_units = 248U;
    msg.roll = 0.7076800403094271;
    msg.pitch = 0.28453484396260775;
    msg.yaw = 0.031692705373253194;
    msg.custom.assign("BYZHVAYZEYNUBHEUEWNKDJEKNWUDFWMAIKYAUSOUWGGZYRYKCMPBRAEDOOBTVJTEDSJIGLSXTVRWJWXVJZWIMNXBMGLLVOJHIDFTCTYKRDZIAIXBBPJJILYFXMEXGOSPQXQUSKZPSHFKLDKCPAPJZP");

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
    msg.setTimeStamp(0.6890644572372719);
    msg.setSource(13854U);
    msg.setSourceEntity(84U);
    msg.setDestination(42859U);
    msg.setDestinationEntity(130U);
    msg.timeout = 53410U;
    msg.lat = 0.8983368579030471;
    msg.lon = 0.031600460586140855;
    msg.z = 0.20078530142672169;
    msg.z_units = 44U;
    msg.speed = 0.03875379607081608;
    msg.speed_units = 49U;
    msg.duration = 7706U;
    msg.radius = 0.8920297627344909;
    msg.flags = 59U;
    msg.custom.assign("LCWWASAYFVHVBXZAZACTZEMWMZTCIUHRDRPDHQIOQIQZEOIPTXPAGJ");

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
    msg.setTimeStamp(0.2495972809108622);
    msg.setSource(7877U);
    msg.setSourceEntity(46U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(201U);
    msg.timeout = 26695U;
    msg.lat = 0.9397722169321491;
    msg.lon = 0.8146462954960714;
    msg.z = 0.47816967459803705;
    msg.z_units = 89U;
    msg.speed = 0.6494762943955732;
    msg.speed_units = 242U;
    msg.duration = 54950U;
    msg.radius = 0.5986738726172794;
    msg.flags = 128U;
    msg.custom.assign("ISNQHKWVMNOIBDJSZSXDPXAYGGYOJBMRWJDWZYEOUPHPHFPRRPZUKSTDMOIJFLDHYTYYGTQPNCYSEIAUKSZNFSVHTYGPLHMQKZUEACVMKSXOEJRKCQXRIXWARDVVHYQFCLNTQTMW");

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
    msg.setTimeStamp(0.947895559069714);
    msg.setSource(51984U);
    msg.setSourceEntity(148U);
    msg.setDestination(4893U);
    msg.setDestinationEntity(122U);
    msg.timeout = 5734U;
    msg.lat = 0.6618026639513672;
    msg.lon = 0.3368539198577758;
    msg.z = 0.24428867009354593;
    msg.z_units = 104U;
    msg.speed = 0.8576159663617849;
    msg.speed_units = 155U;
    msg.duration = 60289U;
    msg.radius = 0.9909907032842299;
    msg.flags = 7U;
    msg.custom.assign("OBDEMPRKDAXIAQSRCBIJHVYDPTIUTCKXFSZXKSWNUCSEICWHBVYUPZDJNSFITJYJYUQKKJUGFEBWJNZRQPUWXKVKJTELWWOZDRZXOYZHPJCQGARHCNGKIPDXQGMEPYGOFMMVOMAFABULROTCSKEDEITIGVFDSPVOCASPVBNZDVHGTQ");

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
    msg.setTimeStamp(0.36559130362654246);
    msg.setSource(64073U);
    msg.setSourceEntity(199U);
    msg.setDestination(64047U);
    msg.setDestinationEntity(17U);
    msg.custom.assign("IYQUWOOAIGALZEGNRMTXEDQOUWOLFSOYVIVFBWWQPLBYDXCAOBFSQVZJTHNAKTSRKFUMDXJTGCLKAEVMIUUAZIDEBGTFTVJDVLPUHMHQREYFEULSIQKZOPBRFNESVYBEHCQDFXHTHIPCSCKJZHVOMEIZUPNSLWRGJPKSBJQMP");

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
    msg.setTimeStamp(0.8365782836133934);
    msg.setSource(32311U);
    msg.setSourceEntity(83U);
    msg.setDestination(11321U);
    msg.setDestinationEntity(137U);
    msg.custom.assign("HOBKVOXZTFHRYIVPBDHJUVTRDVOJVYYMSHMMGFEVHSCYAUZSDRFNJWHLNLUCKBQPFNTIJLBREWAUXQTMXOGJMIINKPWPDFQKRBOVRAUQGCCXTL");

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
    msg.setTimeStamp(0.32884793657766076);
    msg.setSource(32527U);
    msg.setSourceEntity(225U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(228U);
    msg.custom.assign("ZIRNSGLJOLGGFYALBWMHNAHONUTVNVKPBQPNWEDRVHWXRXIVOBFFDGIAXCHPBUQBADXSUYROUS");

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
    msg.setTimeStamp(0.5745974919169539);
    msg.setSource(4809U);
    msg.setSourceEntity(192U);
    msg.setDestination(53361U);
    msg.setDestinationEntity(124U);
    msg.timeout = 37541U;
    msg.lat = 0.8508378476234139;
    msg.lon = 0.40984105333314136;
    msg.z = 0.34472485369171935;
    msg.z_units = 177U;
    msg.duration = 57697U;
    msg.speed = 0.6277540666129741;
    msg.speed_units = 33U;
    msg.type = 11U;
    msg.radius = 0.1639209421900193;
    msg.length = 0.43578939078269796;
    msg.bearing = 0.46313877357194433;
    msg.direction = 42U;
    msg.custom.assign("YRWFGEOYELHDTXVAEBMOFAKBPTQTYNPCQSVBPFWOWQFWMKCZYLIVJBSVQMMOEKZDARJEJICAZUOCZQHGTBRXRIRIOORIPVXNNDSKWSDUXYUFUIKUSRANGGXNJVRMLYFWNUAXZTPDLDAJGPULZIOAWJZLJUYDPWEHYHMAZTQOTVYMCKLHGIJPNVEHQBGMMXSGKULCFEZPIBJCJTVWFESXHNZVKFSITFELWHKQNDQS");

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
    msg.setTimeStamp(0.0036094994307347417);
    msg.setSource(55085U);
    msg.setSourceEntity(40U);
    msg.setDestination(23408U);
    msg.setDestinationEntity(48U);
    msg.timeout = 20288U;
    msg.lat = 0.6827490183561823;
    msg.lon = 0.5653515800870691;
    msg.z = 0.6063103105763259;
    msg.z_units = 252U;
    msg.duration = 40891U;
    msg.speed = 0.3860814564277839;
    msg.speed_units = 169U;
    msg.type = 215U;
    msg.radius = 0.26389140154223967;
    msg.length = 0.5240252682429403;
    msg.bearing = 0.24991364633944335;
    msg.direction = 96U;
    msg.custom.assign("IHEAPUFXKNACSCGQCMMTJJYDELVWMUISSHXPBFIFFJEYGLCWEHZQPFVDKAZPSVALQOBNTWTUKMNHSZQGYAXYRGUKORJWAWCRTGDNL");

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
    msg.setTimeStamp(0.36069396098740747);
    msg.setSource(29287U);
    msg.setSourceEntity(3U);
    msg.setDestination(15925U);
    msg.setDestinationEntity(146U);
    msg.timeout = 31966U;
    msg.lat = 0.8385640409808978;
    msg.lon = 0.7376093662995714;
    msg.z = 0.041402625269187476;
    msg.z_units = 163U;
    msg.duration = 13510U;
    msg.speed = 0.9641489379315242;
    msg.speed_units = 248U;
    msg.type = 243U;
    msg.radius = 0.05290795108873236;
    msg.length = 0.4330277642177177;
    msg.bearing = 0.48625612951339203;
    msg.direction = 50U;
    msg.custom.assign("AZXMRLTCLIZCSMBXQBCFTNYEWGDVZTMYFSHRHQTWQPCYXAMOINVDQHGOJHPOTCNGUKLNKRBIFJZXFYDJFHVHEOMGBFSPYYWUMGAWDUVTLJRMOUUKBIUCRVDXASJEQREPYPUWAEOMVFJGROSDP");

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
    msg.setTimeStamp(0.37785143791426334);
    msg.setSource(12724U);
    msg.setSourceEntity(208U);
    msg.setDestination(21040U);
    msg.setDestinationEntity(0U);
    msg.duration = 49944U;
    msg.custom.assign("GHCETHPSKABWYCNRWIXOCFXNNRGNDYALGDBAQKNVOSPRYQABSSJWFHOVCMEUWPZTZXFUMTKJEEKTYFPQVCKEDMUJNUWTBLQAQPCYTEZKNQIJGJTHNFZVSUVXFRDPASQYOWMHVWADXXSIZLJVWCMJFSQFTGXFIPWMPDKBABDGOGKNZZVHPMREIOUBXIQCROLRRYJLULGYESBOILROFWHVAGIJXCZQYZJMHSUVEMDTBILDKCHEOUGNIURZY");

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
    msg.setTimeStamp(0.7302678652007312);
    msg.setSource(28615U);
    msg.setSourceEntity(164U);
    msg.setDestination(33006U);
    msg.setDestinationEntity(40U);
    msg.duration = 29051U;
    msg.custom.assign("RQINVWZMAQFMJGWSUBHXUOPPCLTHFBEQLAEXGSKSUDLNNKYOTUZRSWSXTVBJEILOJQJWNTMQZELTFRWMHUMGDGAPOAVTJPCYBHBDKLBQIRQGFQSDODIDCIOLZNWOHRBMRHWPJEXEUGKWRDZAVGXZQNULVLPCFRFGXOKPANYQCUJYXMUPIJYSENHMAV");

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
    msg.setTimeStamp(0.5968999662898757);
    msg.setSource(8118U);
    msg.setSourceEntity(198U);
    msg.setDestination(30946U);
    msg.setDestinationEntity(51U);
    msg.duration = 62212U;
    msg.custom.assign("WKJRDRPDNKMKHOCUELURJGEESZNDFSXBUGRXJIJEANOHYVVLGRUZIAUHRLUAKHTBJREVZYAFDIWYTMGZPNHDWQPMYWBBXXOQNUQQLIKXWBVGZGWPKHNSMORTDNJFOPHCEQCSOETBLXUEJMWMWDIOSYVEMJIMYVGASFGIRWVLQBCFYOACEZSDBIXKSFVZVQXB");

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
    msg.setTimeStamp(0.25099108993099295);
    msg.setSource(22327U);
    msg.setSourceEntity(181U);
    msg.setDestination(33204U);
    msg.setDestinationEntity(118U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2241810604U;
    tmp_msg_0.start_lat = 0.10141138665760308;
    tmp_msg_0.start_lon = 0.24178187108453175;
    tmp_msg_0.start_z = 0.05763618151110905;
    tmp_msg_0.start_z_units = 227U;
    tmp_msg_0.end_lat = 0.11524834645450255;
    tmp_msg_0.end_lon = 0.5057052253659741;
    tmp_msg_0.end_z = 0.5525422734473397;
    tmp_msg_0.end_z_units = 190U;
    tmp_msg_0.speed = 0.23799888660471602;
    tmp_msg_0.speed_units = 82U;
    tmp_msg_0.lradius = 0.8781519206015592;
    tmp_msg_0.flags = 81U;
    msg.control.set(tmp_msg_0);
    msg.duration = 22798U;
    msg.custom.assign("SZSKDDLTTJXSBULRGELNPYZHFAHINYDQUMLPZDFSYEZXJOOTYVIIKAWJMQAINVEKHVMMHBTHHWGYJUWAZIKKPOLTWNBQVOEKYSSNWXVPDRWDGCLETNLEKYA");

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
    msg.setTimeStamp(0.5420115057705482);
    msg.setSource(3533U);
    msg.setSourceEntity(172U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(76U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.25441552501733666;
    tmp_msg_0.z_units = 144U;
    msg.control.set(tmp_msg_0);
    msg.duration = 5540U;
    msg.custom.assign("EXDZNKFDTENTXHBDLXSEOLWDNYPO");

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
    msg.setTimeStamp(0.9767144836380127);
    msg.setSource(37842U);
    msg.setSourceEntity(156U);
    msg.setDestination(18165U);
    msg.setDestinationEntity(122U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.34429774977854755;
    msg.control.set(tmp_msg_0);
    msg.duration = 36910U;
    msg.custom.assign("JHPMGZGZCQSBLMZVPLFEQSWCFHDPFIEZZEPRCLEEKTNDIQJMHALAIMGNBRZZNIKVPSWJHOXPMUTYOIKRXKOBUKXWUJORGAIQKPBDYQJPNGFWLTNDARCEPANTBBEDDZSMKYGLOGSQTVOYUNTXXDWSWJOZRMWVSCJHWKFCBTXXRQFSWVDHXPMVNLXGAFWVDETIUCLYOJYMBBAXHVSUAFTROIBEVYUYEMGLKHRFQURHGAJVSCCOQNZYJLAFDKUC");

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
    msg.setTimeStamp(0.936684725405333);
    msg.setSource(31189U);
    msg.setSourceEntity(80U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(192U);
    msg.timeout = 33671U;
    msg.lat = 0.2364852094813097;
    msg.lon = 0.27923927074756716;
    msg.z = 0.54288754708012;
    msg.z_units = 33U;
    msg.speed = 0.11355492857510563;
    msg.speed_units = 99U;
    msg.bearing = 0.939710354058689;
    msg.cross_angle = 0.7362077278011013;
    msg.width = 0.16726589944757775;
    msg.length = 0.35264388948309955;
    msg.hstep = 0.022921889119463135;
    msg.coff = 133U;
    msg.alternation = 68U;
    msg.flags = 242U;
    msg.custom.assign("UOALJIVNRVQSRYNUYDIGHMUJZLZBVGPNYJLPGCAZSFBLKVCBUEIAXZBHHXMWYZPVUXPBHGTTIFUUSXNTQSUKMKXNPBRROMCZDQPOMLYWRDNXVXQWFRILZRORDDIZDXEVQUEEIHSTWYWJQVWAAPQEAIYQYCOHDHCKAECHBTKTMSOBCIDQDSNKIFENOWRVCPYNFKLCFLGMWVHTAFGPPRKXTEJJJAEMBDMUBMWFJSHNXJYGGEOFAZGWGSFKKOLJ");

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
    msg.setTimeStamp(0.3895533753316718);
    msg.setSource(45251U);
    msg.setSourceEntity(224U);
    msg.setDestination(48350U);
    msg.setDestinationEntity(50U);
    msg.timeout = 51855U;
    msg.lat = 0.023003628117868824;
    msg.lon = 0.1042782238304818;
    msg.z = 0.9664632185985513;
    msg.z_units = 64U;
    msg.speed = 0.34547919592532794;
    msg.speed_units = 227U;
    msg.bearing = 0.11024431470471296;
    msg.cross_angle = 0.12242097258028939;
    msg.width = 0.8065172632525437;
    msg.length = 0.8426180082146989;
    msg.hstep = 0.9379382720154351;
    msg.coff = 119U;
    msg.alternation = 56U;
    msg.flags = 74U;
    msg.custom.assign("FNPYOOVFFRJBUZPWQARCPCGAGIRCBKUJSBNXLJAZCFTYJAJQND");

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
    msg.setTimeStamp(0.19476305609144962);
    msg.setSource(30051U);
    msg.setSourceEntity(118U);
    msg.setDestination(1989U);
    msg.setDestinationEntity(246U);
    msg.timeout = 46637U;
    msg.lat = 0.5628155382672941;
    msg.lon = 0.0019045070256857866;
    msg.z = 0.8327300013341846;
    msg.z_units = 171U;
    msg.speed = 0.6018654181392706;
    msg.speed_units = 32U;
    msg.bearing = 0.32728645320005156;
    msg.cross_angle = 0.4097343140783949;
    msg.width = 0.2779189032996813;
    msg.length = 0.6111784261868707;
    msg.hstep = 0.5745515863692527;
    msg.coff = 169U;
    msg.alternation = 105U;
    msg.flags = 174U;
    msg.custom.assign("TEPACGNSLIPZROLOLEOVAFNHUBFUNMLDFGTWLEYDBDYGZKJTUXKYVEOBBPYWMBXGWCYHKDLLEWHSHVEHODEUVRAWPBADVPTZNLQHUKRPKBCUOMAIJRJZJZNOD");

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
    msg.setTimeStamp(0.6392133372076105);
    msg.setSource(27237U);
    msg.setSourceEntity(20U);
    msg.setDestination(63563U);
    msg.setDestinationEntity(86U);
    msg.timeout = 42976U;
    msg.lat = 0.3274039902790229;
    msg.lon = 0.9907735131383737;
    msg.z = 0.887619785546341;
    msg.z_units = 153U;
    msg.speed = 0.4120711382828125;
    msg.speed_units = 105U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9700797494414864;
    tmp_msg_0.y = 0.8994716905123414;
    tmp_msg_0.z = 0.5323650586882502;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DTPQQWNRZNFXHBYVRQAZCLFKSMMNOEPPDCRIJDOVIAJMNTTWZETSURYGGXZBXFKFUYFCAKPTCHTVVYSZJICTZEKYGBLSGMSLKEGEUCBMRNOYHOPIKWTHXNVM");

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
    msg.setTimeStamp(0.061704209018971334);
    msg.setSource(15920U);
    msg.setSourceEntity(121U);
    msg.setDestination(38135U);
    msg.setDestinationEntity(75U);
    msg.timeout = 5644U;
    msg.lat = 0.9930227687168328;
    msg.lon = 0.8625986095032081;
    msg.z = 0.9328063794558954;
    msg.z_units = 6U;
    msg.speed = 0.48695009299057357;
    msg.speed_units = 64U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6428044681076565;
    tmp_msg_0.y = 0.5334999044155273;
    tmp_msg_0.z = 0.5065266612855549;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KXXJLWUOCLLGOSEOEDTCSUNUMWIMLWBPBCAELQCCUBQPNYWSKLXRRLDLYSR");

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
    msg.setTimeStamp(0.11210893706208791);
    msg.setSource(51661U);
    msg.setSourceEntity(241U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(139U);
    msg.timeout = 61220U;
    msg.lat = 0.4850030936349057;
    msg.lon = 0.6781333601130974;
    msg.z = 0.36347449743681215;
    msg.z_units = 7U;
    msg.speed = 0.3388773643347113;
    msg.speed_units = 104U;
    msg.custom.assign("AXTNUCCWHXWBQXYUYIZKCKNVTKGNAWGECJ");

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
    msg.setTimeStamp(0.7641712413341545);
    msg.setSource(35108U);
    msg.setSourceEntity(8U);
    msg.setDestination(1840U);
    msg.setDestinationEntity(53U);
    msg.x = 0.482465692214781;
    msg.y = 0.30731004358601743;
    msg.z = 0.7111214283514127;

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
    msg.setTimeStamp(0.39864063975746833);
    msg.setSource(40805U);
    msg.setSourceEntity(61U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(94U);
    msg.x = 0.5558229405807674;
    msg.y = 0.9282370921236739;
    msg.z = 0.553791838255219;

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
    msg.setTimeStamp(0.6625273099875536);
    msg.setSource(37069U);
    msg.setSourceEntity(207U);
    msg.setDestination(50394U);
    msg.setDestinationEntity(99U);
    msg.x = 0.7420963289542395;
    msg.y = 0.22488307256348505;
    msg.z = 0.9453985267342703;

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
    msg.setTimeStamp(0.3316477367741356);
    msg.setSource(18368U);
    msg.setSourceEntity(38U);
    msg.setDestination(64471U);
    msg.setDestinationEntity(191U);
    msg.timeout = 12219U;
    msg.lat = 0.2094618559205782;
    msg.lon = 0.27900170833539506;
    msg.z = 0.9540312313226248;
    msg.z_units = 57U;
    msg.amplitude = 0.6562945247417041;
    msg.pitch = 0.18347483567192557;
    msg.speed = 0.14438059129958636;
    msg.speed_units = 115U;
    msg.custom.assign("IAEEYSTZNGXNKOUQVMRTXHXYTPWWTZTCHLEMZGWPBOHLEMGRNQOPYEUQSKMZVULBOAIUZUBPHBMQLNKYVVQWSSRQFOBJZWPECGERJRVBEVAKCARTPSJZQJIGAYFSMWKYFPFNAMICDVGAOXFRXHIUNBRMWPOHUMBHILYPLDVUF");

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
    msg.setTimeStamp(0.9644952684992257);
    msg.setSource(46701U);
    msg.setSourceEntity(200U);
    msg.setDestination(35372U);
    msg.setDestinationEntity(130U);
    msg.timeout = 39709U;
    msg.lat = 0.8035748893358542;
    msg.lon = 0.34829516122458437;
    msg.z = 0.059067429141477;
    msg.z_units = 137U;
    msg.amplitude = 0.9212655029663607;
    msg.pitch = 0.6400799783927139;
    msg.speed = 0.32872413368925746;
    msg.speed_units = 238U;
    msg.custom.assign("JRCBLWHNLUJMTKOACSCLKITZDPDQYHZKGAUSFJMTSWYPECEXGUITBYLZMBPFCVYKYBNGZHTMQPURIBUVKXEXFFUWRZLKTUDWEKGXVZLPWHSYRBOZNFWNUORNXAHNQFGDAWTTBQOGFFHGA");

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
    msg.setTimeStamp(0.784394967296037);
    msg.setSource(59940U);
    msg.setSourceEntity(75U);
    msg.setDestination(61050U);
    msg.setDestinationEntity(49U);
    msg.timeout = 20505U;
    msg.lat = 0.4523707925728381;
    msg.lon = 0.6343051110117368;
    msg.z = 0.4070005614899468;
    msg.z_units = 206U;
    msg.amplitude = 0.10035852347708063;
    msg.pitch = 0.9526892309644858;
    msg.speed = 0.7907312441276036;
    msg.speed_units = 87U;
    msg.custom.assign("VTIUJKQHLLXPBOULUPUDVENUXBLCRRYFKMOEXGHHMZSPGUJFBLJONBPWTYCFEIASGLNGQSPYGXANBMWDFMDUVHLOJWQFIZDJHEJZIECIFAWWFRDDUPKCFGTYXOAIKKXWFDTABQIQZUMXYAKMXHNRNTJGNASTGNTEUVSLRAMQBCJQOBBVJZSOVTTECDWMPY");

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
    msg.setTimeStamp(0.15657194102260896);
    msg.setSource(58618U);
    msg.setSourceEntity(78U);
    msg.setDestination(36935U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.862931121170687);
    msg.setSource(41152U);
    msg.setSourceEntity(224U);
    msg.setDestination(44381U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.573962307637596);
    msg.setSource(26207U);
    msg.setSourceEntity(97U);
    msg.setDestination(44025U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.8989712199094236);
    msg.setSource(27217U);
    msg.setSourceEntity(2U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.579271161875556;
    msg.lon = 0.7502333602897334;
    msg.z = 0.7593562332134479;
    msg.z_units = 212U;
    msg.radius = 0.5411056628378327;
    msg.duration = 17503U;
    msg.speed = 0.10593302027111062;
    msg.speed_units = 214U;
    msg.custom.assign("ATAEFPQMZLXIMDVZIRSDIDBTOCFTRIBPZUGFGJGSNPORAYYEXKXYEAAYMQXNLMJWMHIUOUENOJRBNWKPGWBUSPKEWQZNNQBXITAFTSXTBWXKWSOQSLKZWVL");

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
    msg.setTimeStamp(0.3947855316721538);
    msg.setSource(24585U);
    msg.setSourceEntity(96U);
    msg.setDestination(51156U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.8971626650000187;
    msg.lon = 0.8759705694956104;
    msg.z = 0.8735658385652447;
    msg.z_units = 125U;
    msg.radius = 0.8088765277933723;
    msg.duration = 39422U;
    msg.speed = 0.09067187164820567;
    msg.speed_units = 22U;
    msg.custom.assign("HRGHNPKKDUXDXVIIPVGJUCVZGQRPDJSPOZCONQYKHWNXRAKPSYWAZMSFXCFOESDGWEBDWUOXOVTIBCWIYULXOGZYIHGOWIHDZXDFFSU");

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
    msg.setTimeStamp(0.6786584163318446);
    msg.setSource(3407U);
    msg.setSourceEntity(17U);
    msg.setDestination(39376U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.3123599450877119;
    msg.lon = 0.7826702224111632;
    msg.z = 0.6053150752789174;
    msg.z_units = 110U;
    msg.radius = 0.749464219627103;
    msg.duration = 57967U;
    msg.speed = 0.04000588297609131;
    msg.speed_units = 82U;
    msg.custom.assign("ZOYJHXVSQWZSGMPKHKJDCTILMLUIDVZXOUTSWMMJAMZEBYWPUXENPVTLRNAHSUVXDSYJAEGOIGXPWLWMKBXWKIZAFNNOEFGPAVTZAYQOFOJDAMYUYKNNYFIKKAHEZMOBNVVUCBNICQPWEDEHSTLBJDERCRUXSZPZRBWWXBONECWFIRDDGHJBYRQFXFCVPXURBAINITFAVQSKLTGJLKOLL");

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
    msg.setTimeStamp(0.8372526610595961);
    msg.setSource(59903U);
    msg.setSourceEntity(236U);
    msg.setDestination(40525U);
    msg.setDestinationEntity(166U);
    msg.timeout = 51540U;
    msg.flags = 253U;
    msg.lat = 0.17442983110412957;
    msg.lon = 0.508887857719009;
    msg.start_z = 0.7228547643221658;
    msg.start_z_units = 231U;
    msg.end_z = 0.6348834491251168;
    msg.end_z_units = 17U;
    msg.radius = 0.37415881831273234;
    msg.speed = 0.6791947060594726;
    msg.speed_units = 41U;
    msg.custom.assign("ZGKVOHFKPAQGCUSJDHKCQJYMLEGYXEPEWLAVLYRFXKWJSW");

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
    msg.setTimeStamp(0.28905808574864833);
    msg.setSource(9862U);
    msg.setSourceEntity(148U);
    msg.setDestination(34060U);
    msg.setDestinationEntity(48U);
    msg.timeout = 54585U;
    msg.flags = 195U;
    msg.lat = 0.1232102547430668;
    msg.lon = 0.8495717525144282;
    msg.start_z = 0.04639635584213997;
    msg.start_z_units = 33U;
    msg.end_z = 0.020592729942149557;
    msg.end_z_units = 88U;
    msg.radius = 0.46567467917805605;
    msg.speed = 0.8230515642071302;
    msg.speed_units = 114U;
    msg.custom.assign("LQSEZTJKSSANVFINNBCVSGNKWXXRIHQIUEYDBJXTHBHRDUSEGKUAYCWHYPVKCWHWOZ");

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
    msg.setTimeStamp(0.1285552208830063);
    msg.setSource(43343U);
    msg.setSourceEntity(143U);
    msg.setDestination(36670U);
    msg.setDestinationEntity(195U);
    msg.timeout = 9045U;
    msg.flags = 63U;
    msg.lat = 0.14519313790249944;
    msg.lon = 0.8120013163215479;
    msg.start_z = 0.4794670468069542;
    msg.start_z_units = 10U;
    msg.end_z = 0.736744738653562;
    msg.end_z_units = 154U;
    msg.radius = 0.21725556504573185;
    msg.speed = 0.5360435326110873;
    msg.speed_units = 251U;
    msg.custom.assign("SYFNQCNCJHAOVHEPRIYLGWMEYKASXDQPOLIZNIQSEYSZMHWZJSAKWLCDWCTDERKUTPBVGYWDIINJMPXBGMTTYQBZRTLURKSKMBIHJBQSDOVUDTGGFVEQJDHYAVNEDEOHHZGAOWGRWLUPVEOVOGYLXHRMNWXUSFTNJMFXFNBIPNVFYMLRXKRPPCCOFJGWIQCPJSNECUACADZLUFFQIXM");

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
    msg.setTimeStamp(0.314937693820026);
    msg.setSource(3618U);
    msg.setSourceEntity(238U);
    msg.setDestination(18865U);
    msg.setDestinationEntity(225U);
    msg.timeout = 60489U;
    msg.lat = 0.23686988858958147;
    msg.lon = 0.19988691573649853;
    msg.z = 0.21371098110621434;
    msg.z_units = 62U;
    msg.speed = 0.30515926849635644;
    msg.speed_units = 117U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.599327813152286;
    tmp_msg_0.y = 0.5617193341824779;
    tmp_msg_0.z = 0.17928983147868094;
    tmp_msg_0.t = 0.14222499512972286;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MMJIVLOZJKRFXCZLQZHQSYLXVIAHHJXSEIQBLBPLICFWNUZKQPBJTOETWLIFYTVHXQIJENBMGEVPDTKMWDSTNBNTSGMSENGWNDUAINXKJIBECJGRPGYYAXSGKWKGAGDHOWHAHVMEYJYUNWEVDYVACPKCTZPDWGDSVORPJFDDTPBFADFCKYOCAAUCRUOAPMUOQTUHBFXRQVRYBWHOKSZLOXNJZCEHOMGTQRMLQYFXMQRWKLUUIUN");

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
    msg.setTimeStamp(0.14109119766189782);
    msg.setSource(22008U);
    msg.setSourceEntity(81U);
    msg.setDestination(53352U);
    msg.setDestinationEntity(174U);
    msg.timeout = 8338U;
    msg.lat = 0.7441208730960488;
    msg.lon = 0.8329180427868049;
    msg.z = 0.7378574154825219;
    msg.z_units = 18U;
    msg.speed = 0.5862370841010003;
    msg.speed_units = 11U;
    msg.custom.assign("GOHEKRETGQPFWWKXAMTLZIDORMYMUUMCLMBYUIQR");

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
    msg.setTimeStamp(0.8618531122819747);
    msg.setSource(33262U);
    msg.setSourceEntity(47U);
    msg.setDestination(22992U);
    msg.setDestinationEntity(125U);
    msg.timeout = 10869U;
    msg.lat = 0.41551973468881964;
    msg.lon = 0.5953652915460981;
    msg.z = 0.7147360717550945;
    msg.z_units = 32U;
    msg.speed = 0.5775670780164195;
    msg.speed_units = 181U;
    msg.custom.assign("ALVTDNGCSMXJVIEXGIRBTLLSMYQETRLUFQEWTOWDSLZCSNDGIJHBUAIOPFPHPJSKHPOCZYMTGPGDROSJUAJDUQIYEWBIQYBXBZWZGMCOJWFBQOUZGMEZZBXVSTNVNWVWMRSNDQHGUDYEFVBKKAJCIKQTRHAUEZLRQBSLKEOGVCKPDKXHNXTUMJRFPKAIQJHUUWPZYLSOFAW");

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
    msg.setTimeStamp(0.883444094441928);
    msg.setSource(33403U);
    msg.setSourceEntity(90U);
    msg.setDestination(57668U);
    msg.setDestinationEntity(52U);
    msg.x = 0.15143195480424687;
    msg.y = 0.4436907607842512;
    msg.z = 0.6282722858009946;
    msg.t = 0.14456481706438495;

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
    msg.setTimeStamp(0.11320904042460611);
    msg.setSource(44575U);
    msg.setSourceEntity(200U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(72U);
    msg.x = 0.3875767146962392;
    msg.y = 0.13120595749043973;
    msg.z = 0.7595817265245587;
    msg.t = 0.5034300984718941;

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
    msg.setTimeStamp(0.9482758975693052);
    msg.setSource(48969U);
    msg.setSourceEntity(78U);
    msg.setDestination(62338U);
    msg.setDestinationEntity(214U);
    msg.x = 0.30421335715328857;
    msg.y = 0.3400062167199931;
    msg.z = 0.502267289071455;
    msg.t = 0.648739721009101;

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
    msg.setTimeStamp(0.7430092295775016);
    msg.setSource(46446U);
    msg.setSourceEntity(61U);
    msg.setDestination(48545U);
    msg.setDestinationEntity(219U);
    msg.timeout = 54409U;
    msg.name.assign("ULSQGILPAHHRXGDECBCTYLKVEBTAWZJCRAMWIFQQAPFGSGPNTHCWIWHMCNNHAOXLCZUVGVZPINXPMTTWEFZYAQVYQ");
    msg.custom.assign("SVWRCZLEUILYVIDGMEQLDMSOXERWWKSFEUZOMZKXYBFTKRYJSPRVNWCCPWOXUTEQJDQUBGFJZWVVHDTDHKOXAXFMBG");

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
    msg.setTimeStamp(0.7756646354970491);
    msg.setSource(16069U);
    msg.setSourceEntity(44U);
    msg.setDestination(60497U);
    msg.setDestinationEntity(73U);
    msg.timeout = 33516U;
    msg.name.assign("EGSVLAPTCHPGUQZVIAJZKNTHOMRYJSZVWCDDOTLXPQMKVSJFEWASDTLEMLAMNZJXEUFNAYFPLIBXNDHDHLKCKZXOKCPNRVCKGWTESNQIIGACLCVWYNSQHUUYTBPXLXQBTPVONRKEHJIIGWGRDWIFEOZVESYBHQYFAAPOKYUH");
    msg.custom.assign("LXHTDLZJLSANHEOQEDNZQNAYXFAGXRPOEBIGITQCWSEGSOMTSMBWCUMHWCAKTRPGMVGELKUCKKRFJVWJBJPPOMOE");

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
    msg.setTimeStamp(0.78502920870236);
    msg.setSource(49593U);
    msg.setSourceEntity(121U);
    msg.setDestination(49460U);
    msg.setDestinationEntity(159U);
    msg.timeout = 48601U;
    msg.name.assign("HLWSWQLZCQLNTVCZEYVFNDKBIGVDLGXMYZZLRQYFKYUKJJVOPPHADXYSSKUMDJINDQIQGBGXJGSMGTHHPTYCNSRIGPSKEYAFJMEZCHOFVWYUBPSFXQMZDQDTERYXAJJGIONAMXPSBUBHKAFUFXVNVPDAPZIKBOUBKMHUWCMRBWTOELFMEAGJVQCRNCTFLLDTQRHXOUIWUIRKV");
    msg.custom.assign("BFDGIQBYWOLUSUJEHSGQACMXRBZZMLIUTNKKQLKFMPGTTLAQEJDOQLORYSFQFMVNMHALFYBTWPNUUVUBZVGZIGOVBXPFZIHPGTFTXKACXIJDDBSJDLQMWZLYVDWRRUWEGGFWQ");

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
    msg.setTimeStamp(0.5768469467274955);
    msg.setSource(21559U);
    msg.setSourceEntity(215U);
    msg.setDestination(5339U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.7326683384041697;
    msg.lon = 0.5353201196406727;
    msg.z = 0.7466109072874674;
    msg.z_units = 138U;
    msg.speed = 0.5093302842967422;
    msg.speed_units = 140U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.19391173978606013;
    tmp_msg_0.y = 0.8148004325859377;
    tmp_msg_0.z = 0.08229047314598004;
    tmp_msg_0.t = 0.8904866110077776;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 12315U;
    tmp_msg_1.off_x = 0.36421037304980663;
    tmp_msg_1.off_y = 0.7954156299027905;
    tmp_msg_1.off_z = 0.9968437615393247;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.24669465200698226;
    msg.custom.assign("GRSEZPYOGYODCMQRJIBMYJUJNBDPEHLVTVXBJSUNIUZWVTNKVYBIHUMLPFVTWFCLZTDZKJVEDHKPEQOIXSEFPCJJQLMAPYQMJCNWTZANWMLENXKRGCQRNFWTGHRPBHVZAYJCXEBVUYENOTQKOGRUQALKNCXDYGDBRKHFXDVBSXICFSQHMRKEXCXLHUIPXODIBWMPFDAWGDQLMZRKMTSWUOAGIAZETQZHIHZYUJVAPSGLTYASWFK");

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
    msg.setTimeStamp(0.1313905590153246);
    msg.setSource(50965U);
    msg.setSourceEntity(95U);
    msg.setDestination(5690U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.42110459974169834;
    msg.lon = 0.07281434258307551;
    msg.z = 0.08367183766833164;
    msg.z_units = 68U;
    msg.speed = 0.5250472539937361;
    msg.speed_units = 185U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26270U;
    tmp_msg_0.off_x = 0.3940257480583912;
    tmp_msg_0.off_y = 0.4668202944793248;
    tmp_msg_0.off_z = 0.08491125641812247;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.37926352167513944;
    msg.custom.assign("CNXCMXYPZPYOMOZNHJHKDTGSPIMCGENQTAJYQTSELVFVLKXBKWVRGAOUGPUGHXRHNOLNHWEFOUUNWLGHHTANEJMTZKLZRTSRFQDZJWKAWSIADBMQFQBUCIHVRGCZBPFEVMOXNSUHYLETSWVQOGSSDIJDPYHOCJKBTCXRQFI");

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
    msg.setTimeStamp(0.01580861581131754);
    msg.setSource(17335U);
    msg.setSourceEntity(203U);
    msg.setDestination(30450U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.7064908502035552;
    msg.lon = 0.4879420377167666;
    msg.z = 0.29459574959590973;
    msg.z_units = 116U;
    msg.speed = 0.39693034866447174;
    msg.speed_units = 221U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6125341856516248;
    tmp_msg_0.y = 0.2260064973420841;
    tmp_msg_0.z = 0.25093444642660234;
    tmp_msg_0.t = 0.3200990728792257;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5888U;
    tmp_msg_1.off_x = 0.3312058922671295;
    tmp_msg_1.off_y = 0.4306755542883781;
    tmp_msg_1.off_z = 0.9410533330815347;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8438274620561408;
    msg.custom.assign("FBHYYSKWNNJBLOJQRIRMGASKMSBLKGLLCQRUSJNGQZERJEBQUZACGNXIROPYPPVXPITOLVKRWEJBFPOWSLPDUCEJLTTMAXZUAMISXNHZSVOATDRSOHCLZQTOBQFBKICNKIHWEQPXHYPCKUXJIVAJN");

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
    msg.setTimeStamp(0.6046959862161234);
    msg.setSource(4633U);
    msg.setSourceEntity(42U);
    msg.setDestination(24172U);
    msg.setDestinationEntity(42U);
    msg.vid = 53515U;
    msg.off_x = 0.5549674019587352;
    msg.off_y = 0.44224179814740316;
    msg.off_z = 0.8224177963636484;

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
    msg.setTimeStamp(0.3617099867368879);
    msg.setSource(49539U);
    msg.setSourceEntity(38U);
    msg.setDestination(59552U);
    msg.setDestinationEntity(55U);
    msg.vid = 54202U;
    msg.off_x = 0.4321140057874874;
    msg.off_y = 0.9331960294507176;
    msg.off_z = 0.05452478927746318;

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
    msg.setTimeStamp(0.6245331092082204);
    msg.setSource(33911U);
    msg.setSourceEntity(90U);
    msg.setDestination(29252U);
    msg.setDestinationEntity(153U);
    msg.vid = 59273U;
    msg.off_x = 0.05936860743606831;
    msg.off_y = 0.65113726487166;
    msg.off_z = 0.8907344266738266;

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
    msg.setTimeStamp(0.7813925784704118);
    msg.setSource(19509U);
    msg.setSourceEntity(97U);
    msg.setDestination(4490U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.5844631421930333);
    msg.setSource(37146U);
    msg.setSourceEntity(96U);
    msg.setDestination(22322U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.04587637734860117);
    msg.setSource(12133U);
    msg.setSourceEntity(243U);
    msg.setDestination(29094U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.4190744438589673);
    msg.setSource(60381U);
    msg.setSourceEntity(29U);
    msg.setDestination(22569U);
    msg.setDestinationEntity(59U);
    msg.mid = 741U;

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
    msg.setTimeStamp(0.6551903844173055);
    msg.setSource(8321U);
    msg.setSourceEntity(163U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(48U);
    msg.mid = 42706U;

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
    msg.setTimeStamp(0.642655984530538);
    msg.setSource(39602U);
    msg.setSourceEntity(143U);
    msg.setDestination(58619U);
    msg.setDestinationEntity(93U);
    msg.mid = 40249U;

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
    msg.setTimeStamp(0.4084255151856587);
    msg.setSource(64867U);
    msg.setSourceEntity(198U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(142U);
    msg.state = 175U;
    msg.eta = 27322U;
    msg.info.assign("ENFRLCSPWICQDWTAEJULAKLFZPYPGNFHPYBSUJQZHROQLTUYKIZGJRKOEGLIJDYQNYVABBHOSLDVDSACUPUFMKEGOTWTCIFHHIZAVCIMKUHXTWCNGUXVKAFLVWSJBPXCHSNOBMMCLEFOXAAIFYQWZBTRMTHQSOUPDEVXRBIYTAIGXWXQADYMQPMLBMKVUMBHCR");

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
    msg.setTimeStamp(0.12915698455967406);
    msg.setSource(44347U);
    msg.setSourceEntity(56U);
    msg.setDestination(11867U);
    msg.setDestinationEntity(137U);
    msg.state = 65U;
    msg.eta = 46361U;
    msg.info.assign("WQVSAGIMLYNUUNBPHQIJKFFADCMHQQDOQHSOLMIEKRRMIPUCLSCJNWZYEEYAASJBVYMZWMIGYQLWBFYQLRFLYGTDXXSXLMIGSJOVAEPKPPEXCFUEUJTTOAS");

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
    msg.setTimeStamp(0.19489604330517551);
    msg.setSource(6983U);
    msg.setSourceEntity(160U);
    msg.setDestination(31886U);
    msg.setDestinationEntity(117U);
    msg.state = 126U;
    msg.eta = 26325U;
    msg.info.assign("LOTDZKCLVEDEVLZVDYHRZWYZVAUCLUDJPDWVIAQBXYPRWMKSIOQZRCWZUGJWZULNJVQCRNTMJPDSTYEKKGOWROYDQNFFAAWMGCANXYMJYTVYHLKWIO");

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
    msg.setTimeStamp(0.1365788826740213);
    msg.setSource(9458U);
    msg.setSourceEntity(125U);
    msg.setDestination(32199U);
    msg.setDestinationEntity(194U);
    msg.system = 25047U;
    msg.duration = 41485U;
    msg.speed = 0.42333564065688856;
    msg.speed_units = 191U;
    msg.x = 0.7890999258906594;
    msg.y = 0.982533262513398;
    msg.z = 0.13490728037682542;
    msg.z_units = 189U;

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
    msg.setTimeStamp(0.9139578533534105);
    msg.setSource(55514U);
    msg.setSourceEntity(128U);
    msg.setDestination(8626U);
    msg.setDestinationEntity(248U);
    msg.system = 41053U;
    msg.duration = 47587U;
    msg.speed = 0.7712473470275599;
    msg.speed_units = 166U;
    msg.x = 0.6798267988644151;
    msg.y = 0.06923087786647841;
    msg.z = 0.7630238446100172;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.9509528911626303);
    msg.setSource(33321U);
    msg.setSourceEntity(253U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(68U);
    msg.system = 26131U;
    msg.duration = 52602U;
    msg.speed = 0.4466086911502787;
    msg.speed_units = 227U;
    msg.x = 0.8509935298275452;
    msg.y = 0.08156218664059722;
    msg.z = 0.29326648048467985;
    msg.z_units = 174U;

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
    msg.setTimeStamp(0.4521779271864058);
    msg.setSource(8871U);
    msg.setSourceEntity(76U);
    msg.setDestination(20645U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.5511626889757438;
    msg.lon = 0.5340158371631707;
    msg.speed = 0.07632940108331432;
    msg.speed_units = 88U;
    msg.duration = 36143U;
    msg.sys_a = 11609U;
    msg.sys_b = 59720U;
    msg.move_threshold = 0.6042160032138647;

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
    msg.setTimeStamp(0.5401884764622633);
    msg.setSource(22537U);
    msg.setSourceEntity(112U);
    msg.setDestination(54247U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.13004540611084991;
    msg.lon = 0.902247031103924;
    msg.speed = 0.9869959220695336;
    msg.speed_units = 127U;
    msg.duration = 48581U;
    msg.sys_a = 44969U;
    msg.sys_b = 49875U;
    msg.move_threshold = 0.17127679996618805;

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
    msg.setTimeStamp(0.7724808782151272);
    msg.setSource(15448U);
    msg.setSourceEntity(142U);
    msg.setDestination(43265U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.36133028504156994;
    msg.lon = 0.9684627940813;
    msg.speed = 0.41280806355666544;
    msg.speed_units = 40U;
    msg.duration = 8755U;
    msg.sys_a = 56267U;
    msg.sys_b = 41011U;
    msg.move_threshold = 0.7751139349777291;

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
    msg.setTimeStamp(0.851016170844293);
    msg.setSource(56207U);
    msg.setSourceEntity(13U);
    msg.setDestination(42588U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.06216571197003751;
    msg.lon = 0.6519177579054641;
    msg.z = 0.47739297172021833;
    msg.z_units = 157U;
    msg.speed = 0.07320449933760476;
    msg.speed_units = 125U;
    msg.custom.assign("WHCMXEURRCYAGULJQTKZJTVNFJOUDWXYZQUAQFLGWVHUQARSUDZRSEAFYUQGPINAFIMRPWSXLOPOPYHZSASMMILKVJKBBSQNOBYOZNEGQWGVVMLQXOABHNGEIHFLUTYFCTQIRKHSTZBNKOTEECDAEIGOGRKBJMODZCYTLFBLVWTXDJYKXPQZCODAWPLPXHJCPPCXXXDRNJUMWSNVCZSYMERMTZHRJIPVNGHIAUTKVBSWI");

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
    msg.setTimeStamp(0.26858203444729667);
    msg.setSource(58336U);
    msg.setSourceEntity(197U);
    msg.setDestination(64867U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.9254340118668146;
    msg.lon = 0.18293850620822572;
    msg.z = 0.5562758583104769;
    msg.z_units = 133U;
    msg.speed = 0.10692373165174207;
    msg.speed_units = 125U;
    msg.custom.assign("ESNZRXYYATPXCKBNKTOHOWYADMUIIMBENFABPRXOOMUJNSBHEGIUDIEFTNSZCIT");

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
    msg.setTimeStamp(0.7288731209609726);
    msg.setSource(42395U);
    msg.setSourceEntity(40U);
    msg.setDestination(30080U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.5619859283672859;
    msg.lon = 0.38460328625042084;
    msg.z = 0.3812840339748952;
    msg.z_units = 78U;
    msg.speed = 0.6807015038940175;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7765732493132681;
    tmp_msg_0.lon = 0.09701639964922515;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VYVFRBULQCIPHDBFDAUODEOIYIUQQISOXGVFTAFBRIVPVSQFPYISTWSIWUVDYHTOYUASGWWXTBAEXFVXKXFRNZHGBEDRWXRDWCQZFPGEW");

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
    msg.setTimeStamp(0.3302674272014776);
    msg.setSource(9175U);
    msg.setSourceEntity(161U);
    msg.setDestination(9980U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.9418622434847929;
    msg.lon = 0.15347087097883516;

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
    msg.setTimeStamp(0.4760240899728797);
    msg.setSource(8570U);
    msg.setSourceEntity(226U);
    msg.setDestination(35465U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.0585112710758815;
    msg.lon = 0.11143801932731467;

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
    msg.setTimeStamp(0.5259954323203412);
    msg.setSource(1909U);
    msg.setSourceEntity(14U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.38088455391151377;
    msg.lon = 0.2902210738102605;

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
    msg.setTimeStamp(0.4802189958274745);
    msg.setSource(24389U);
    msg.setSourceEntity(239U);
    msg.setDestination(37214U);
    msg.setDestinationEntity(132U);
    msg.timeout = 20865U;
    msg.lat = 0.043586326085958804;
    msg.lon = 0.3722145145201303;
    msg.z = 0.8380988547316508;
    msg.z_units = 160U;
    msg.pitch = 0.20123982653443817;
    msg.amplitude = 0.17186940433483155;
    msg.duration = 42375U;
    msg.speed = 0.6464576225267606;
    msg.speed_units = 23U;
    msg.radius = 0.6034250456482867;
    msg.direction = 243U;
    msg.custom.assign("VDBNKGASZDTQQXWLCFVUPMOLVPOUNMNMDWKYCCIXTHFIOCKXVVQHGZGMRDJEIKRMWLPMSYRMXSEQJWIOSTGGNUBABVSUYEGUMSXUJOSJAFTHBHZEJFAHVNCXZRFHNQYWYNBEDBVJRQHIBIDKTKYOYQDSXMFMXWZINTDPIUGAQNSTAEOETNGJPWCELKKHCTDROGLUZWEZXTLJIVDJPLRZLPPBFGFPZRHKXBRFFYOYCSBZCACAAQUH");

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
    msg.setTimeStamp(0.15760234020877129);
    msg.setSource(18734U);
    msg.setSourceEntity(8U);
    msg.setDestination(61558U);
    msg.setDestinationEntity(129U);
    msg.timeout = 22504U;
    msg.lat = 0.17978896821774182;
    msg.lon = 0.9068167350238179;
    msg.z = 0.27215247291220745;
    msg.z_units = 35U;
    msg.pitch = 0.21563417228631743;
    msg.amplitude = 0.8676367088364834;
    msg.duration = 2253U;
    msg.speed = 0.9281520631169006;
    msg.speed_units = 116U;
    msg.radius = 0.12065527704480772;
    msg.direction = 171U;
    msg.custom.assign("OAXTZBDTPFQXYQRUDSFFDMXJPAFDMFHQMGNDMERTUPNVJZOHYAVWMAQYZQXNICDLHHT");

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
    msg.setTimeStamp(0.33420938483300155);
    msg.setSource(15634U);
    msg.setSourceEntity(44U);
    msg.setDestination(42679U);
    msg.setDestinationEntity(71U);
    msg.timeout = 46514U;
    msg.lat = 0.29554074364633287;
    msg.lon = 0.828733705890627;
    msg.z = 0.2838891026409802;
    msg.z_units = 104U;
    msg.pitch = 0.08904976520935393;
    msg.amplitude = 0.2089801493344038;
    msg.duration = 53880U;
    msg.speed = 0.4653539904540791;
    msg.speed_units = 39U;
    msg.radius = 0.4349531685906173;
    msg.direction = 59U;
    msg.custom.assign("CYRGWPKFJPFENBRBRSWVQZDLLFSKXPXEMMUBQOVOYNJGUWHKZSAUOEHBNNIUTOZCMESDKAUECAWRTCCZCOFHLIOONJRQFRDOFEHTFBCQKYPDMVKGGZPXDHYYIBBDYZYGZGWWGYVALIXECQRLSXPNA");

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
    msg.setTimeStamp(0.8146184407971304);
    msg.setSource(54821U);
    msg.setSourceEntity(22U);
    msg.setDestination(14661U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("WACXZJOHQKDUSTNGCIFKPGTHSSTWFIQYPDIMFQHAMDLXOSIELZCXZMNGIUPJXCMZWGOJVRSYZECEQATJDGPIPOIQYBOKIGBLNZLRSKLLFXEELACPUCWWDEYJGVHAHKTBYHZDFAZDTMCNXYVRVOMBEKXVHFETLQATWKLOUIQAZHUJVBPIAUGUSCVFNUOPDXBWNPYJAG");
    msg.reference_frame = 115U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4604U;
    tmp_msg_0.off_x = 0.9500343273516665;
    tmp_msg_0.off_y = 0.3248491362390211;
    tmp_msg_0.off_z = 0.5640725042045516;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("QFXQXDSJKNRJTVFYMXZYYPHDVTURYGVNKNWSEPOKZVQWCDJQOPAZAFOQNRKZNSIJPERCLSBLCGTBTLIEMBKOEXXAWYAQBKSNPDYCTZYMXXUMVTDDAANHWUEHUEHFWBVTIEINECEAJCBNRTLGBSMUMLXHJZIODGHRSPOGGZPHLKRLJUHIQCKDWUFGWQVNQGIVPLXZJKPRJSAKSHAVBPCEDTOXCQIFUBFVRHWGMDMCYI");

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
    msg.setTimeStamp(0.3456325400641814);
    msg.setSource(19676U);
    msg.setSourceEntity(169U);
    msg.setDestination(8784U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("UKKBHPOQUOYYXLBPGMHPRSLXNSVVPWYISFJAXDVYLNLLSHEFZFBERYFRTUGDYUBMOCTJUXXVR");
    msg.reference_frame = 165U;
    msg.custom.assign("PLNILMDVFAZBGMMPQODWGVANTLHDYJMKQHMTMXQCKEVCVRJWSXYVAFQWGZJQTKMFUYDYRLSRYRCYLBMAHCBRFGCDNYHLRBBYXUCSDZSKJBNHWSGIYQUEUOMFTOCATOXAZEHDXFNGJDDEXXDLZMKKEFGBNTVVNFHJPAFNJESAOREZIQHXGUPTQHUZBKZPUAWUVGSWOFZSCOEUNHKVSRLWBPIJEUOASXRRWOKLIET");

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
    msg.setTimeStamp(0.8068446544891643);
    msg.setSource(50395U);
    msg.setSourceEntity(155U);
    msg.setDestination(46880U);
    msg.setDestinationEntity(31U);
    msg.formation_name.assign("OGUADUADUAHLTDLWFBJMNYJKEYJNYLWPWYDQUVYIKCZOKHVEAYVJLNKKXQPSFXRUZWSUHZXCKSBQVHJPYUUIMZYIVBLIBDGTCWOCRVCKHSPBHSXZSFFMVRKPHNZWXDJHNPRGLTBOASKDMTBQNOEYWKNDIPDQCJGFNQEAGJNRBGMLZLQLFZPOCMQHEUTXTMIXBXASOMPZ");
    msg.reference_frame = 70U;
    msg.custom.assign("NGVAERZXQKVGRLQLTLHNICAXCWRCSEOSPSWYNJY");

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
    msg.setTimeStamp(0.5748744927165225);
    msg.setSource(36891U);
    msg.setSourceEntity(100U);
    msg.setDestination(8535U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("MUVPTQRXYWOIQYUJLMOUFIFBLFODQJFRTGRJSDWUMZANXWNEXJEFVHJLFKEMHSDVUBUHNCUQUCOGGRDWWEGMQLIVPVZXVNHGMOSXMTET");
    msg.formation_name.assign("ZARWEYLQORWSJQASUZVRUQGGDKJWLDBENCHDFWZVUTHSPR");
    msg.plan_id.assign("WPBKHJJBVTBLDNRDGUKXZCGBSLWWSLMHXFEKDPPUIDYNQHNKIJVIVKLXKKYOMCVVWAQIKFEBSAFHGNDWUBJOTXHUMAEMIERAQAQFCLFXZDYSSVHSKRQODVYZBZXHIGJPAS");
    msg.description.assign("GAGIWDUIUDPSKYDIMVQFJGDVBERVJMOFQRXSNFSKJEMOBUYOAKYCTEIWNQYQTQDJQEGQCCPWEXOLRUJAVNYNOXNZSPVNMMCBDZDCLSJLQBWCORBALRYUEORYZLHXNVPAMNLDEKMZWVOTEHXPTHRAZ");
    msg.leader_speed = 0.5128694338057426;
    msg.leader_bank_lim = 0.6411543174675227;
    msg.pos_sim_err_lim = 0.7117125114783792;
    msg.pos_sim_err_wrn = 0.768825496746615;
    msg.pos_sim_err_timeout = 30250U;
    msg.converg_max = 0.05411236859238011;
    msg.converg_timeout = 19003U;
    msg.comms_timeout = 25010U;
    msg.turb_lim = 0.7711559588794454;
    msg.custom.assign("HCWSCKEPEARKOSHGMHULAWEINXFSQDGMDFTNCWVECDPEJYEGXMPAAXSVMFFTBGRIVTBBNWVLOCLUIAGGYRBLDHJLJVAAS");

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
    msg.setTimeStamp(0.8875966464899102);
    msg.setSource(21023U);
    msg.setSourceEntity(179U);
    msg.setDestination(27481U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("BQVOTASOVZGZXRNWEUIIMDRJAUZSKZISLQDTZAYWVODHCKEVSLLFYCHNGMVTUNBPJQYTQJEWLUTRBFXJHCXITLZSWTKROYVZDBEMHCUCGOKPUZEIDKLGCSXXXYGJXQXEUVGMNACKJDMVRTUSWMHGPHMLCQIFFFEITPGRPSAXAZXNBHBQNDBPHONBMAVPJEWFCLSYSMJBLAORFNQURZPYEDTKQFCKNMIONDJHBWGRUYVJDIHEQWPOKAPAFI");
    msg.formation_name.assign("FOPWIUEGDLPXRBNDDYCVJUUIHIMBEBAGCOKZEHQSNUSCJKYIIKUATGE");
    msg.plan_id.assign("TWYBWGBPKYKCOKQOLEAWIYUGVXZJVF");
    msg.description.assign("VMCRKMLQCYTRRFPDEHRHRGCHWDMLVKPLPYHNBMGZFVKJYICQIBYQNHUFOQXNSYWBBNFFEJTLGTGRLAVEXEKIEJAOLVUHSP");
    msg.leader_speed = 0.7616685751901241;
    msg.leader_bank_lim = 0.1603989113835219;
    msg.pos_sim_err_lim = 0.1628064371442588;
    msg.pos_sim_err_wrn = 0.7404604057854917;
    msg.pos_sim_err_timeout = 14906U;
    msg.converg_max = 0.841338982097908;
    msg.converg_timeout = 20635U;
    msg.comms_timeout = 62915U;
    msg.turb_lim = 0.6870175669744514;
    msg.custom.assign("VLGADGWRZLZWJMBBKNFVDTCEWYSMAQAUQSGTSCHXKHBUFKXRXBERGFAETMHOEUWFIIJLZYVWPONHOKKCAJIJFLCJRBXVQNFUYFTAQKDXRGXROPWQJNZOSLDETVBTCRXPZBWVUUSFSNHNHDLCMUZCYOLFPNZMDTVPPGYDTQNAKNJRWXCUOTGVEODQHMPJOFRZZKMPBEDGVILQU");

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
    msg.setTimeStamp(0.39960261673504194);
    msg.setSource(34482U);
    msg.setSourceEntity(62U);
    msg.setDestination(47268U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("KIJXWMLCGRYXEZQXVLEAAGBNYLDXEICBATUMFJXOALZFKGRWLWCSFRQTRJSDDPNMYKJUNHXPDKOKISDFTFNLFCHQJFEWXPIPKUJHDTWNUTINIRYCCMHVVCZPNIQQGEHGTDAVYLQBWSWJRTHNDZHL");
    msg.formation_name.assign("YDMSPSEPPXLVMXVZBRNNXAZGDRXADFLRNWFGTNYZYAMKUAIJQWOLDJFDKEMFQKPTWICXTOWNNZJZTJBVCWTSHGBHBGBIOHUJZREWMPLPIKMKOKVYEMNLIXVHAGZFLDYNJUQLVIFWCMNQCRUDSBHESVL");
    msg.plan_id.assign("NRDYJDWOPMAXRXBAKGTNBWQKYHNMTTKWWKXVEXLOOLLCEYNDTMPOALCGPSDHDISQFZZBURBBSIFYBFCXYCKIOLPWMYHDUVICQCWSWCVRCVZXJGFVGQDPEEZPEINXTUNYANGEPRPOQTEEAFHGYSAQPFBVRYJFXHGFOMJGSLLHKLQVVOZBGMKHRV");
    msg.description.assign("REDSNYLHKXPKGXRYCCOLILOBCGQTIJAPJMYUMUOHHTDBKGWWXYLWXLRZWNFSXENTEBEQGYWMVIGKXJCTYQTVCMYHQBSGAGVVRITDVDKJALSXXWXOM");
    msg.leader_speed = 0.6627630747935215;
    msg.leader_bank_lim = 0.3255391004022141;
    msg.pos_sim_err_lim = 0.7523713349601173;
    msg.pos_sim_err_wrn = 0.8716029439534687;
    msg.pos_sim_err_timeout = 5739U;
    msg.converg_max = 0.2881590136237152;
    msg.converg_timeout = 25925U;
    msg.comms_timeout = 34663U;
    msg.turb_lim = 0.28361407492154345;
    msg.custom.assign("GRJIMQFYGEVFYQSFPSZMJXXQYEODAIUBVYWWTPPIWEGCBASJDZGTDXKAHCHVBLDORBBUWQDOLOBEGJONSGMBAKOTIPVSPUINWVLIYMDGLTPRJHVLGAKAH");

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
    msg.setTimeStamp(0.77925390787996);
    msg.setSource(364U);
    msg.setSourceEntity(215U);
    msg.setDestination(58221U);
    msg.setDestinationEntity(219U);
    msg.control_src = 9236U;
    msg.control_ent = 236U;
    msg.timeout = 0.49828280194688546;
    msg.loiter_radius = 0.32071403472498483;
    msg.altitude_interval = 0.27295799360646633;

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
    msg.setTimeStamp(0.8071751586543092);
    msg.setSource(63774U);
    msg.setSourceEntity(226U);
    msg.setDestination(37223U);
    msg.setDestinationEntity(169U);
    msg.control_src = 5872U;
    msg.control_ent = 204U;
    msg.timeout = 0.057635641185235564;
    msg.loiter_radius = 0.5483936057605375;
    msg.altitude_interval = 0.728175972241548;

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
    msg.setTimeStamp(0.3800177135911852);
    msg.setSource(21419U);
    msg.setSourceEntity(233U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(254U);
    msg.control_src = 7237U;
    msg.control_ent = 228U;
    msg.timeout = 0.7922053385523736;
    msg.loiter_radius = 0.34829272959459956;
    msg.altitude_interval = 0.8268635001072278;

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
    msg.setTimeStamp(0.7393874395234146);
    msg.setSource(10716U);
    msg.setSourceEntity(144U);
    msg.setDestination(37157U);
    msg.setDestinationEntity(119U);
    msg.flags = 107U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1558317072065829;
    tmp_msg_0.speed_units = 231U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.19418480102963342;
    tmp_msg_1.z_units = 80U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.24293539814933185;
    msg.lon = 0.8923060609176162;
    msg.radius = 0.6337754037595545;

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
    msg.setTimeStamp(0.5879058481362844);
    msg.setSource(59512U);
    msg.setSourceEntity(163U);
    msg.setDestination(13240U);
    msg.setDestinationEntity(96U);
    msg.flags = 250U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09598878002456568;
    tmp_msg_0.speed_units = 182U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.35366487342225006;
    tmp_msg_1.z_units = 82U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.43106722547859333;
    msg.lon = 0.015522988313229735;
    msg.radius = 0.40924620780984666;

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
    msg.setTimeStamp(0.17587718694871013);
    msg.setSource(28332U);
    msg.setSourceEntity(254U);
    msg.setDestination(39862U);
    msg.setDestinationEntity(27U);
    msg.flags = 128U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6718430403242865;
    tmp_msg_0.speed_units = 146U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.01402262359396611;
    tmp_msg_1.z_units = 143U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8300015205654533;
    msg.lon = 0.49625861881029565;
    msg.radius = 0.008545884578283536;

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
    msg.setTimeStamp(0.7485423114377275);
    msg.setSource(4127U);
    msg.setSourceEntity(228U);
    msg.setDestination(60268U);
    msg.setDestinationEntity(119U);
    msg.control_src = 15323U;
    msg.control_ent = 134U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 26U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6954983418703797;
    tmp_tmp_msg_0_0.speed_units = 39U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.29737361287897757;
    tmp_tmp_msg_0_1.z_units = 159U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.09119346372202275;
    tmp_msg_0.lon = 0.7974087729138539;
    tmp_msg_0.radius = 0.4178795786791002;
    msg.reference.set(tmp_msg_0);
    msg.state = 110U;
    msg.proximity = 22U;

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
    msg.setTimeStamp(0.47824727347436713);
    msg.setSource(50512U);
    msg.setSourceEntity(13U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(155U);
    msg.control_src = 33284U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 3U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8537691012038162;
    tmp_tmp_msg_0_0.speed_units = 198U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7343110204029868;
    tmp_tmp_msg_0_1.z_units = 179U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3672211471747404;
    tmp_msg_0.lon = 0.8827716511172399;
    tmp_msg_0.radius = 0.45757558996478664;
    msg.reference.set(tmp_msg_0);
    msg.state = 100U;
    msg.proximity = 228U;

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
    msg.setTimeStamp(0.6847193988343706);
    msg.setSource(4392U);
    msg.setSourceEntity(141U);
    msg.setDestination(6764U);
    msg.setDestinationEntity(195U);
    msg.control_src = 20298U;
    msg.control_ent = 232U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5113075591961157;
    tmp_tmp_msg_0_0.speed_units = 84U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.1854772795744134;
    tmp_tmp_msg_0_1.z_units = 145U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7596964454183776;
    tmp_msg_0.lon = 0.5479104779628694;
    tmp_msg_0.radius = 0.05352162037695429;
    msg.reference.set(tmp_msg_0);
    msg.state = 26U;
    msg.proximity = 202U;

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
    msg.setTimeStamp(0.005793494589798831);
    msg.setSource(51887U);
    msg.setSourceEntity(164U);
    msg.setDestination(993U);
    msg.setDestinationEntity(30U);
    msg.ax_cmd = 0.9133744291632356;
    msg.ay_cmd = 0.5880942293690785;
    msg.az_cmd = 0.10554724361267398;
    msg.ax_des = 0.0044078023045101;
    msg.ay_des = 0.4181683874767793;
    msg.az_des = 0.33555914409697274;
    msg.virt_err_x = 0.036676534679753736;
    msg.virt_err_y = 0.6782266211668755;
    msg.virt_err_z = 0.6377345711224763;
    msg.surf_fdbk_x = 0.12608589462656006;
    msg.surf_fdbk_y = 0.8518658970270591;
    msg.surf_fdbk_z = 0.530469817787893;
    msg.surf_unkn_x = 0.6965842055888094;
    msg.surf_unkn_y = 0.10428571797668407;
    msg.surf_unkn_z = 0.5809887091077824;
    msg.ss_x = 0.5066285555225507;
    msg.ss_y = 0.2128246704761262;
    msg.ss_z = 0.01927552672691968;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GEIVTDNELPBDBFRCCLRQULWTIQTYIFPNCNBKWXGYZWAAWFMHXVMKPJOTLKIFFEMURTHGIZRGKQCYGRNMXYDHDMZKRYVWBXVSZRJLHLIYJPBORPAYNTYAMBUHKPVIHAPOEQWSHSBZGIPPZRSJCCCXZHTNUFWQHUVDODHAWKXNSOQ");
    tmp_msg_0.dist = 0.18266097215334898;
    tmp_msg_0.err = 0.6847940260444478;
    tmp_msg_0.ctrl_imp = 0.6475437439234849;
    tmp_msg_0.rel_dir_x = 0.26812663181761065;
    tmp_msg_0.rel_dir_y = 0.9900543276753062;
    tmp_msg_0.rel_dir_z = 0.4957501880633046;
    tmp_msg_0.err_x = 0.12843509864928337;
    tmp_msg_0.err_y = 0.56098900409962;
    tmp_msg_0.err_z = 0.538867838712137;
    tmp_msg_0.rf_err_x = 0.6690397295771263;
    tmp_msg_0.rf_err_y = 0.3315084306747159;
    tmp_msg_0.rf_err_z = 0.8616712921526766;
    tmp_msg_0.rf_err_vx = 0.21486270150321896;
    tmp_msg_0.rf_err_vy = 0.7007333467168533;
    tmp_msg_0.rf_err_vz = 0.7679897907294286;
    tmp_msg_0.ss_x = 0.8188318591240451;
    tmp_msg_0.ss_y = 0.09280919505017504;
    tmp_msg_0.ss_z = 0.43890862315060086;
    tmp_msg_0.virt_err_x = 0.10843326340434134;
    tmp_msg_0.virt_err_y = 0.08127444751188218;
    tmp_msg_0.virt_err_z = 0.20717872246979085;
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
    msg.setTimeStamp(0.1858198440157698);
    msg.setSource(28261U);
    msg.setSourceEntity(70U);
    msg.setDestination(11034U);
    msg.setDestinationEntity(170U);
    msg.ax_cmd = 0.8909886924083091;
    msg.ay_cmd = 0.7945838058662709;
    msg.az_cmd = 0.8056051622057055;
    msg.ax_des = 0.4171855632724448;
    msg.ay_des = 0.2747383857204174;
    msg.az_des = 0.2565200907404458;
    msg.virt_err_x = 0.39668967012920253;
    msg.virt_err_y = 0.9548721592029003;
    msg.virt_err_z = 0.581423898151853;
    msg.surf_fdbk_x = 0.5034520826565089;
    msg.surf_fdbk_y = 0.7146867002371858;
    msg.surf_fdbk_z = 0.3154793160985381;
    msg.surf_unkn_x = 0.08561209049191365;
    msg.surf_unkn_y = 0.4990284136283494;
    msg.surf_unkn_z = 0.9560978856636405;
    msg.ss_x = 0.972974840530716;
    msg.ss_y = 0.7823241912356923;
    msg.ss_z = 0.27636531292012445;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("JSUTMWIEPQTEMJXRGBPFNZQEIXTBBLBYLUHHEWLEJJDRWSVVVFMPLKBBEALDJOOFRTNOTAKXSDZQQVECKFQPARIWFUUCFTNVREUGXJCGNZAYSGKGWRDKGWMZGNHMXHHBZGLKEWOQVYBPQYAQNINRPZYSCBKDTGUSTMDNTRXLESFSOHRWUKVICNMXHTVMYCFDMAHHJXUBVZDP");
    tmp_msg_0.dist = 0.7172415819320485;
    tmp_msg_0.err = 0.26862561149307607;
    tmp_msg_0.ctrl_imp = 0.09816716720722807;
    tmp_msg_0.rel_dir_x = 0.5817800045794294;
    tmp_msg_0.rel_dir_y = 0.4110574738884255;
    tmp_msg_0.rel_dir_z = 0.34396828453091577;
    tmp_msg_0.err_x = 0.716318332347287;
    tmp_msg_0.err_y = 0.7996977898701118;
    tmp_msg_0.err_z = 0.3930599776662822;
    tmp_msg_0.rf_err_x = 0.601794634642725;
    tmp_msg_0.rf_err_y = 0.3060033627649916;
    tmp_msg_0.rf_err_z = 0.10955390094332196;
    tmp_msg_0.rf_err_vx = 0.5988082352093828;
    tmp_msg_0.rf_err_vy = 0.09525167840050319;
    tmp_msg_0.rf_err_vz = 0.3650228382508124;
    tmp_msg_0.ss_x = 0.7162718187357844;
    tmp_msg_0.ss_y = 0.1672089974953731;
    tmp_msg_0.ss_z = 0.5080966455274527;
    tmp_msg_0.virt_err_x = 0.07169949916587148;
    tmp_msg_0.virt_err_y = 0.29979831615811225;
    tmp_msg_0.virt_err_z = 0.9566986095074238;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.48151846965986855);
    msg.setSource(45184U);
    msg.setSourceEntity(77U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.013042248463629225;
    msg.ay_cmd = 0.4438560130529917;
    msg.az_cmd = 0.40352508777053864;
    msg.ax_des = 0.3964552222236021;
    msg.ay_des = 0.8867240005743722;
    msg.az_des = 0.28772991681830673;
    msg.virt_err_x = 0.3507678401220078;
    msg.virt_err_y = 0.9404868145798652;
    msg.virt_err_z = 0.03974597304796379;
    msg.surf_fdbk_x = 0.5181007631297588;
    msg.surf_fdbk_y = 0.015394870576146524;
    msg.surf_fdbk_z = 0.007875688565530337;
    msg.surf_unkn_x = 0.392786106800747;
    msg.surf_unkn_y = 0.39440329540076624;
    msg.surf_unkn_z = 0.03287366878252529;
    msg.ss_x = 0.6375527390792795;
    msg.ss_y = 0.9960305741594523;
    msg.ss_z = 0.502812975339356;

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
    msg.setTimeStamp(0.6733281935952481);
    msg.setSource(31413U);
    msg.setSourceEntity(72U);
    msg.setDestination(10021U);
    msg.setDestinationEntity(105U);
    msg.s_id.assign("TEXDGYAWFFCSABDFXQPYIHRMMFYHPLLYCXGJN");
    msg.dist = 0.8575339245430851;
    msg.err = 0.6341502839811359;
    msg.ctrl_imp = 0.9901884898730765;
    msg.rel_dir_x = 0.7957317549074252;
    msg.rel_dir_y = 0.4536523923213108;
    msg.rel_dir_z = 0.5680375716218836;
    msg.err_x = 0.21427774814616107;
    msg.err_y = 0.980876397816262;
    msg.err_z = 0.8205166339573489;
    msg.rf_err_x = 0.026598348338531808;
    msg.rf_err_y = 0.8541316170617949;
    msg.rf_err_z = 0.02211893197370085;
    msg.rf_err_vx = 0.23869699158543245;
    msg.rf_err_vy = 0.1237937669329996;
    msg.rf_err_vz = 0.3768529171712467;
    msg.ss_x = 0.523004691276009;
    msg.ss_y = 0.3517008883990663;
    msg.ss_z = 0.0934240711374783;
    msg.virt_err_x = 0.18296340845383707;
    msg.virt_err_y = 0.7366201605837446;
    msg.virt_err_z = 0.7359763374373218;

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
    msg.setTimeStamp(0.9337907581644218);
    msg.setSource(56955U);
    msg.setSourceEntity(5U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(66U);
    msg.s_id.assign("XEQMMKEKUFLEYKFJTRKTWQHBYAPJJHCQGYIVIWZBZLUUCFAWIXRYMYFQYHRVGUAIXCZWPTASKIDHIAJCAVSOMHIPFXNSSGBJOQGOLMXNXGDTNEULJZRMKBBXLRE");
    msg.dist = 0.5737690844992834;
    msg.err = 0.9688993747258388;
    msg.ctrl_imp = 0.04251369484957013;
    msg.rel_dir_x = 0.5547760158779614;
    msg.rel_dir_y = 0.7831423667986304;
    msg.rel_dir_z = 0.8412700953239046;
    msg.err_x = 0.5479503814233446;
    msg.err_y = 0.19178497531662464;
    msg.err_z = 0.7743385563467725;
    msg.rf_err_x = 0.0930157062683249;
    msg.rf_err_y = 0.520693307915779;
    msg.rf_err_z = 0.20289781644996552;
    msg.rf_err_vx = 0.5944648767916356;
    msg.rf_err_vy = 0.10885948594971795;
    msg.rf_err_vz = 0.19491626887397495;
    msg.ss_x = 0.3677187108139889;
    msg.ss_y = 0.9524642293719058;
    msg.ss_z = 0.29514537575209077;
    msg.virt_err_x = 0.863964519282489;
    msg.virt_err_y = 0.7126783421579986;
    msg.virt_err_z = 0.49433569399007204;

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
    msg.setTimeStamp(0.8479358017289917);
    msg.setSource(9609U);
    msg.setSourceEntity(172U);
    msg.setDestination(2564U);
    msg.setDestinationEntity(235U);
    msg.s_id.assign("VZPQKALRRDCBEJGXQLOQQFZWWVKLMRZRYCNYEZUUJAXFOWDLQIHGBCWRWSVZUKCJEVKETPOXVUUEHSBQL");
    msg.dist = 0.3520890132223289;
    msg.err = 0.23050915404674266;
    msg.ctrl_imp = 0.1735815488531962;
    msg.rel_dir_x = 0.04080186743308922;
    msg.rel_dir_y = 0.45615187328232243;
    msg.rel_dir_z = 0.6706038822557652;
    msg.err_x = 0.5092280253893806;
    msg.err_y = 0.16014335516012979;
    msg.err_z = 0.6155845227945206;
    msg.rf_err_x = 0.8079399918100505;
    msg.rf_err_y = 0.41643282321349684;
    msg.rf_err_z = 0.6840123276823824;
    msg.rf_err_vx = 0.9779434917350337;
    msg.rf_err_vy = 0.2103908769851488;
    msg.rf_err_vz = 0.9580065231138813;
    msg.ss_x = 0.7701964006242101;
    msg.ss_y = 0.8816362807267684;
    msg.ss_z = 0.13025731630146287;
    msg.virt_err_x = 0.37346818686750083;
    msg.virt_err_y = 0.29036567096026267;
    msg.virt_err_z = 0.3326552432271853;

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
    msg.setTimeStamp(0.44886290479915847);
    msg.setSource(26426U);
    msg.setSourceEntity(242U);
    msg.setDestination(19109U);
    msg.setDestinationEntity(30U);
    msg.timeout = 16383U;
    msg.rpm = 0.5236492340726334;
    msg.direction = 67U;
    msg.custom.assign("FLMCLVKXDFXHYUNXVFJCGITZVMQTNTDIJDGBNTCRWZISCWPUFDKSOHAYUEWRRTRLQJGIEVNE");

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
    msg.setTimeStamp(0.08236307339589477);
    msg.setSource(64646U);
    msg.setSourceEntity(226U);
    msg.setDestination(56889U);
    msg.setDestinationEntity(182U);
    msg.timeout = 9152U;
    msg.rpm = 0.7892152250444736;
    msg.direction = 218U;
    msg.custom.assign("HAWGAKCAQUXEBUQLG");

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
    msg.setTimeStamp(0.8557771646925242);
    msg.setSource(5868U);
    msg.setSourceEntity(150U);
    msg.setDestination(46364U);
    msg.setDestinationEntity(94U);
    msg.timeout = 59942U;
    msg.rpm = 0.0009548029716234252;
    msg.direction = 154U;
    msg.custom.assign("PFPLJALVMJMJJLZULKAFGWRGGYYVPSFNIHQZCXUUXNYOATQMDNKDTBZCCRYZEFSTXLWWREQQDTPYGEOTBJANHMKECOXXXRIEGANPHZWPMWHMJLYNWMASIDDPGQ");

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
    msg.setTimeStamp(0.15985634849221197);
    msg.setSource(7630U);
    msg.setSourceEntity(152U);
    msg.setDestination(9564U);
    msg.setDestinationEntity(188U);
    msg.formation_name.assign("FIBKJNSILGHQOSESSXBJQETHXFFATVBCGJQDFVPJZBXDFUIZVJNVXWYNCLYPAQKHTKNLXHLJICTOUPWZALWHUHBUGMGSLDEHJZUXAUEEEYJZRELODRYRBNSEAHKGSRVCPDPUIITMCGDJLYCVFUDRXMIMSUGTPMBTYXWECCQJTEYKVKZFMADQBBIKPOXSZDVPOKQLUAOWXMFTNWZMRWRFHZD");
    msg.type = 15U;
    msg.op = 108U;
    msg.group_name.assign("XYHLWEZEFOGI");
    msg.plan_id.assign("JIWIHOLARCDQIXKMMUPXTDGSBKOQYYXRONYFHAUPIZOHLTCMVJVFXWDBKTTZGFPSGVEFSVPDBNQOLPHRXDZIGCDYKFQBMOAJMEUVMPODJQFVXF");
    msg.description.assign("TTODUSSHBONBTOWXIMKQCPQWQLUYDDZRNRPKEVCYXINKCUJBYTIVFKSWDPXRVWXDFPRRCKXREJJTYVFUUGAFDZHECPGTFKNOVMSOERWZTSWZFSFHFIKLPCLKCIYQQNEMAEATUAHRSIBUZDOVDEBRLAVYSGUCSPGQMABXQXGHOMNNSPFJJMEVHIIYZOEZYVGZWHGAXTCBHNA");
    msg.reference_frame = 214U;
    msg.leader_bank_lim = 0.45568886809363296;
    msg.leader_speed_min = 0.8439418746026657;
    msg.leader_speed_max = 0.7999265640610629;
    msg.leader_alt_min = 0.579344870031174;
    msg.leader_alt_max = 0.2234949764752362;
    msg.pos_sim_err_lim = 0.25100739646519177;
    msg.pos_sim_err_wrn = 0.14003832293654062;
    msg.pos_sim_err_timeout = 52147U;
    msg.converg_max = 0.705978829083371;
    msg.converg_timeout = 13119U;
    msg.comms_timeout = 4637U;
    msg.turb_lim = 0.3718281661079028;
    msg.custom.assign("PNSYROAZPEJSYTKVNLANJAHGMMKTEWPSHKHLFSHEGCXBRTWXGOQOJUR");

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
    msg.setTimeStamp(0.44810620833201564);
    msg.setSource(50614U);
    msg.setSourceEntity(45U);
    msg.setDestination(32652U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("LQJGSJFHHBZHRTGRDNVBPCJMTGLJJQUMFNOYKYLIPYSTILZXZDZVHRKGLRFDWLSGMEVXOVWUEHUARWAKTCSZVHITCPJNCUTJVXKANVKMNDMQZNFZQGJMUPFDUBOFBDJNDXEDDYTOQOERRKRQAIAZQMAUVVKCIJUWQNLIOPMLWSTMGHIAFVPOI");
    msg.type = 216U;
    msg.op = 113U;
    msg.group_name.assign("PKZTLQGGPWOCAUPQVHIVBDNNLFCRGHEKRIDHYQMKTXKUVYPTDZMHHFW");
    msg.plan_id.assign("POINQXDCGISOYBYXNHIRRZYAJLDQMXXPQYXTRJKJPOWJEVFZPSEMIPBVFHWWUZHAGGEYSTLKLASAGFOJBCNRUOBBQXDA");
    msg.description.assign("WCLVAQZYDOYSXVIVMXAQGPHEMRUALFFUTANPUUAEERGFTSBOFQNTGIHIRRNXMMSAWCPHDXLQRGVJCXJSYSIKGFUAPMZGTVXHFGQLHSNPQFWEENBDPOBHYMXOCQPKNOOTJPFXBAMTZEHNCOWROGNKYAK");
    msg.reference_frame = 233U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 62865U;
    tmp_msg_0.off_x = 0.37757846802130846;
    tmp_msg_0.off_y = 0.7902859299109488;
    tmp_msg_0.off_z = 0.7550541685992235;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.2866362430128607;
    msg.leader_speed_min = 0.629417959481815;
    msg.leader_speed_max = 0.13982986727965963;
    msg.leader_alt_min = 0.4270172071960804;
    msg.leader_alt_max = 0.11235256334910548;
    msg.pos_sim_err_lim = 0.3172076923617566;
    msg.pos_sim_err_wrn = 0.47355533602071986;
    msg.pos_sim_err_timeout = 40685U;
    msg.converg_max = 0.9101657629302241;
    msg.converg_timeout = 55529U;
    msg.comms_timeout = 7582U;
    msg.turb_lim = 0.002747937302967851;
    msg.custom.assign("RZIWXMCOORABXUKEAEMYMFHLKFCOSLQHVVFDRDISBWGB");

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
    msg.setTimeStamp(0.5293482459916579);
    msg.setSource(15889U);
    msg.setSourceEntity(81U);
    msg.setDestination(49472U);
    msg.setDestinationEntity(116U);
    msg.formation_name.assign("FCUMGFKQLIRRSMMHWSZPGOPFZUTEWPQPGRJPYAYOYGXSMQHQCYETNZUCJITNAMLOKPZOFFZVONDMGWVG");
    msg.type = 237U;
    msg.op = 189U;
    msg.group_name.assign("QXYCPSWQTMZOOPTDZZNACMBVQJZGHWTUOMSLKKSIHJZTJHTEAGAQIYREIRCDOXLRSVRXYZDUNVKURJFFKGQYPFYEXDWWJYAEKWRSHWHNLPWQIDODVCUVILBFFRJBWSUVFSRSMCEAGNHBCYTGIDXCBBZSOKFZEGCJYXMKNALZAOBTTHBLIVDPVIHBPVRNAZMJXLQPMLEJYPOMAEFKEOQHOPIJQFLRCGUWNMUKKCN");
    msg.plan_id.assign("TQEQEYGBLVZOJGPMHRNHUTHQRVQDYARWGTUOQCRWXKMCSPSTLBPXPBOWFJZOSCSOPOEQGCDKNYTKBJKRIZMWUZINIEKLSLOMVPFNUVRQYIUTXDIYSFV");
    msg.description.assign("TJQTOVUZUHUJDZOZNITCPAYPXZQIAWETXWWTODOQYAADQXHVKLYBKUPKZASKACILNPRXSBUWPCLPRQVUYEARSBEHSXBZBUAVQHRMQJHGPFPGLWL");
    msg.reference_frame = 156U;
    msg.leader_bank_lim = 0.588550595115589;
    msg.leader_speed_min = 0.3573881006513173;
    msg.leader_speed_max = 0.16824823873686623;
    msg.leader_alt_min = 0.7524423106382818;
    msg.leader_alt_max = 0.6689210414298354;
    msg.pos_sim_err_lim = 0.13898126031859048;
    msg.pos_sim_err_wrn = 0.9845414868131575;
    msg.pos_sim_err_timeout = 17896U;
    msg.converg_max = 0.3214209872928584;
    msg.converg_timeout = 34419U;
    msg.comms_timeout = 29283U;
    msg.turb_lim = 0.9642815508126125;
    msg.custom.assign("QIHBGZMSVSKPKUXPOHLRFHOBPJJPSNOPIUMETYVYLNFCRMQCYFMSBTG");

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
    IMC::Launch msg;
    msg.setTimeStamp(0.29714621636615446);
    msg.setSource(62157U);
    msg.setSourceEntity(18U);
    msg.setDestination(55396U);
    msg.setDestinationEntity(204U);
    msg.timeout = 19810U;
    msg.lat = 0.09829365621280095;
    msg.lon = 0.6357005602688873;
    msg.z = 0.5511299249957358;
    msg.z_units = 239U;
    msg.speed = 0.8764545466652258;
    msg.speed_units = 205U;
    msg.custom.assign("KSAZJBRBQEPZTTMQMCZHBFIILQGGELSPGFVZZWUIYUNRVLHRQQOCCAGVLGHIDMTJTDBMFJDWZUBQQHYHNDFUWOWESPDJRGCBAAEEVXUGIRSKFXMKKFEPQYTKSYDDFXENORWOIUTIIDQCYWRSBYGOMKXVSTBJAITJZCFKNZECOPMSERAUPZJZNHLLSWPVUBXHAHMJDLNTWONLNVVTWPLFNPJAEHUUCKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.3088653761968225);
    msg.setSource(32057U);
    msg.setSourceEntity(0U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(206U);
    msg.timeout = 8880U;
    msg.lat = 0.9566365532308144;
    msg.lon = 0.1641023811597342;
    msg.z = 0.531010166465236;
    msg.z_units = 55U;
    msg.speed = 0.12181161222962666;
    msg.speed_units = 183U;
    msg.custom.assign("PDMPJMCLVRNKHXESBKAZHKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.41272989009076966);
    msg.setSource(13521U);
    msg.setSourceEntity(3U);
    msg.setDestination(30545U);
    msg.setDestinationEntity(3U);
    msg.timeout = 7339U;
    msg.lat = 0.559603332763053;
    msg.lon = 0.04857987932694119;
    msg.z = 0.5638732904783064;
    msg.z_units = 106U;
    msg.speed = 0.787738512077437;
    msg.speed_units = 180U;
    msg.custom.assign("SJYKZCJVKTWXZDSLQIDHJECMTHMBXOVIJBDHFBTYTXWMVGTZURBXEOJLWSRFYIJOKKCNRSYRMQYYNBNJXKZRVGVVZLIPXKHSSSUUAORMCSFIJZRXTTOLPOJINELMXNBNWPSHLUAMMMEZHRLOEVNWEZAWQPXXLOGKADUZEGUPZASPWJVFAHKOPQKCNCHUWFGFDGTDVDELBDUMCYVHNTNIAQQQUCFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.6787782049015966);
    msg.setSource(21489U);
    msg.setSourceEntity(201U);
    msg.setDestination(7575U);
    msg.setDestinationEntity(29U);
    msg.timeout = 6169U;
    msg.lat = 0.7757260581440221;
    msg.lon = 0.4255596949720766;
    msg.z = 0.21848270476384601;
    msg.z_units = 205U;
    msg.speed = 0.1884484856011176;
    msg.speed_units = 33U;
    msg.custom.assign("HITCDSIXPPWZHVXGJQAFWTYJNKKHXOYQSIUPMESWFLDTGPZGCYUUQYNTMTDSLURRAJMQJJKKXIGCSCYBYLPODBGOJTBBNOYRORYHEFDSEHFZNHUUICBJQHENQHORAFZUWMVTDPMVTKETQRAAKVVLWHQQKKVBSZGTRLZZNOPFXJPHCCLUFIXBCAWOKZJNMWXCIAJMULVAVWRSENMZYEXYEPWIDMBGLKPCVLGDBUEAMENOQIRSSNGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.014861275076625047);
    msg.setSource(37561U);
    msg.setSourceEntity(31U);
    msg.setDestination(59441U);
    msg.setDestinationEntity(235U);
    msg.timeout = 11370U;
    msg.lat = 0.885783230567338;
    msg.lon = 0.1129754144898849;
    msg.z = 0.7394224147823205;
    msg.z_units = 117U;
    msg.speed = 0.5019097373277976;
    msg.speed_units = 110U;
    msg.custom.assign("ZMHBOBTPLFESSLFDWDWEKQVTMUFPYEOYKNBYIJOAJHKLTQCQGNACZCEDUUBSOLHAWGRDTJWIKJBTDRBIZKDGIOHAPRQBBQQXIEXARXGZMFROARROZSWGWCDJIZCYXFVUWVFULEXBVIJXNPHAMYTGPTLNGNJOJYHPFSDKEVTCZPWYSQSVLYUYGUDWNQJTAGXIUHEKVMTFHHQEPRLHJYMMZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.21373564031397452);
    msg.setSource(10815U);
    msg.setSourceEntity(2U);
    msg.setDestination(53523U);
    msg.setDestinationEntity(17U);
    msg.timeout = 9038U;
    msg.lat = 0.013032612827047707;
    msg.lon = 0.9341701168676505;
    msg.z = 0.8839296531583792;
    msg.z_units = 133U;
    msg.speed = 0.682087382475526;
    msg.speed_units = 220U;
    msg.custom.assign("WMJDUXBSWIRPZDGPWOVJAJZLXIABWASYSJMDHBUGKFQTCTDIBBHCYJOEBCOFQNPXCSLSUZINBJPQZJTGPJKAXGCUFFPOENMCYAESIZWRWHSCBCQFRIVYNGNAFHRUVFODDTYCHTKEXIOUYKGGOZZQKBWWEXOTSQPSTLXKDAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.029992765270686172);
    msg.setSource(53449U);
    msg.setSourceEntity(121U);
    msg.setDestination(25064U);
    msg.setDestinationEntity(208U);
    msg.arrival_time = 0.08740081784934706;
    msg.lat = 0.552485057070509;
    msg.lon = 0.7222065986652924;
    msg.z = 0.7284362650049471;
    msg.z_units = 222U;
    msg.travel_z = 0.7768675618713423;
    msg.travel_z_units = 11U;
    msg.delayed = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.16502861269440838);
    msg.setSource(56723U);
    msg.setSourceEntity(136U);
    msg.setDestination(57086U);
    msg.setDestinationEntity(144U);
    msg.arrival_time = 0.913054773379183;
    msg.lat = 0.0773365242589501;
    msg.lon = 0.4793212043634676;
    msg.z = 0.500975433465935;
    msg.z_units = 153U;
    msg.travel_z = 0.09292237209299103;
    msg.travel_z_units = 231U;
    msg.delayed = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.18823784828673196);
    msg.setSource(17369U);
    msg.setSourceEntity(139U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(216U);
    msg.arrival_time = 0.9577022845593559;
    msg.lat = 0.12140521118524517;
    msg.lon = 0.5253985675819552;
    msg.z = 0.899085514388298;
    msg.z_units = 198U;
    msg.travel_z = 0.8651743760497311;
    msg.travel_z_units = 130U;
    msg.delayed = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.27638218023115646);
    msg.setSource(6400U);
    msg.setSourceEntity(39U);
    msg.setDestination(25135U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.3252252411661364;
    msg.lon = 0.1887730429462685;
    msg.z = 0.1163122580379371;
    msg.z_units = 212U;
    msg.speed = 0.5439073175492266;
    msg.speed_units = 7U;
    msg.bearing = 0.2084830465158798;
    msg.cross_angle = 0.8696314142970746;
    msg.width = 0.09518089056919965;
    msg.length = 0.38921862327366363;
    msg.coff = 109U;
    msg.angaperture = 0.9167886975962801;
    msg.range = 35725U;
    msg.overlap = 220U;
    msg.flags = 249U;
    msg.custom.assign("BPWGJTIWKDCKUZCZRWZTORDIGIRXFSJNLPWQDFSQMDJVFOOYCLKMKMOQSEZZXEMVUYGVNLYQNEMJWPITBEDTJRCYIUXVJVAZQSBRDLDKEOCTDGUHWXZSSFIVMAPKHFYESOBPKYPMPGCHRQLATSWANFAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.7521368427073449);
    msg.setSource(38633U);
    msg.setSourceEntity(65U);
    msg.setDestination(29895U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.09668835946258092;
    msg.lon = 0.7054406499602048;
    msg.z = 0.2636114184944617;
    msg.z_units = 95U;
    msg.speed = 0.6004619452695116;
    msg.speed_units = 186U;
    msg.bearing = 0.6317503309822591;
    msg.cross_angle = 0.6432573641765056;
    msg.width = 0.9221522093210334;
    msg.length = 0.43233979100864006;
    msg.coff = 48U;
    msg.angaperture = 0.36780840597470554;
    msg.range = 45903U;
    msg.overlap = 184U;
    msg.flags = 29U;
    msg.custom.assign("EPOJJQNDPBZXXSUDSRAZCTPHYJXKJZEGCMQUQVLCZPABBWBHTZBQKAAGYQMQAYCUAFTREYKGLSVGGEEOQMADLEXGUXNGKAZNMANOLSROOFVFRJTILPLBNVCZKPXGXTZTYKYPQNTDEBIKXSRLSIXLHMCZCWIRBCMUDRKYUSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.016234964211627623);
    msg.setSource(6469U);
    msg.setSourceEntity(126U);
    msg.setDestination(34652U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.868908668187624;
    msg.lon = 0.9516257355428075;
    msg.z = 0.1908184898180738;
    msg.z_units = 6U;
    msg.speed = 0.7512286226854815;
    msg.speed_units = 240U;
    msg.bearing = 0.8186240884336066;
    msg.cross_angle = 0.07887396422170978;
    msg.width = 0.18263835446829269;
    msg.length = 0.34744133610093275;
    msg.coff = 223U;
    msg.angaperture = 0.7817762356939135;
    msg.range = 2674U;
    msg.overlap = 82U;
    msg.flags = 110U;
    msg.custom.assign("QFIQYAUEENQZCXFMYLSKIJILRAXWXNZEVHBWL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.9761258802773828);
    msg.setSource(17044U);
    msg.setSourceEntity(55U);
    msg.setDestination(48577U);
    msg.setDestinationEntity(91U);
    msg.timeout = 53822U;
    msg.lat = 0.4248033159929643;
    msg.lon = 0.2908970772703938;
    msg.z = 0.7266787650025949;
    msg.z_units = 83U;
    msg.speed = 0.22513364076927733;
    msg.speed_units = 228U;
    msg.syringe0 = 134U;
    msg.syringe1 = 82U;
    msg.syringe2 = 211U;
    msg.custom.assign("PBMPNKTHVKACPRVVGGPTSKIPIFONEYULSXDRGUFCLDGUDQRFNHFVYFWPTLSIMCJCOOMPIQFQLBYJUWEQDUARFDJJJIUJMKNKGWTVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.437944138037089);
    msg.setSource(14437U);
    msg.setSourceEntity(174U);
    msg.setDestination(48671U);
    msg.setDestinationEntity(9U);
    msg.timeout = 38672U;
    msg.lat = 0.37828963404720817;
    msg.lon = 0.7676650597884018;
    msg.z = 0.6592339149927563;
    msg.z_units = 24U;
    msg.speed = 0.8833462441766514;
    msg.speed_units = 66U;
    msg.syringe0 = 225U;
    msg.syringe1 = 71U;
    msg.syringe2 = 205U;
    msg.custom.assign("GFFTBLTDAHNGYNGFNYXHIONAGRXLMEQAUEZLDXXWOLNSLCJVTTVUXUWRGSBGJDVUPSRQCZBRWAMYDGXYREQDXNOPKZQOQIGJWKTPSUADINKQBWIWBMJOHJYRHAFKXIAZREBIKUIQRERTDCYYMATXUKHDCWVMEHXJHMMMPSULHUZUSPYKFODZNBJYZCPSFVOQTPKLARWCQWNGPVVESKGITVDYNJVLLOFEJFKBCMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.847551944446238);
    msg.setSource(60284U);
    msg.setSourceEntity(195U);
    msg.setDestination(47740U);
    msg.setDestinationEntity(203U);
    msg.timeout = 38238U;
    msg.lat = 0.5364598106128783;
    msg.lon = 0.12588916999810773;
    msg.z = 0.9526631486340508;
    msg.z_units = 108U;
    msg.speed = 0.3420217595256486;
    msg.speed_units = 3U;
    msg.syringe0 = 205U;
    msg.syringe1 = 208U;
    msg.syringe2 = 29U;
    msg.custom.assign("FNCONVXSFOFDOJMFAOUZQAHBIJLBSILG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.11229706901131031);
    msg.setSource(44537U);
    msg.setSourceEntity(137U);
    msg.setDestination(23163U);
    msg.setDestinationEntity(91U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.8986031368803435);
    msg.setSource(17954U);
    msg.setSourceEntity(117U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(174U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.8324505040631748);
    msg.setSource(49341U);
    msg.setSourceEntity(88U);
    msg.setDestination(62959U);
    msg.setDestinationEntity(5U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.9245714081684545);
    msg.setSource(27095U);
    msg.setSourceEntity(130U);
    msg.setDestination(40718U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.8249527770391768;
    msg.lon = 0.8401801665977661;
    msg.z = 0.1776450826843976;
    msg.z_units = 14U;
    msg.speed = 0.9178158831858271;
    msg.speed_units = 46U;
    msg.takeoff_pitch = 0.15500591106976291;
    msg.custom.assign("GNBGNATSTYOZWKMIGIQKQFKJAKFYLISLVCMIPQFNLIHWPYTDAELYTDUATWMHXRWURHFDFLWQQLNSWLVXURFZXLATFYXAEAOZVMTRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.6723499656404104);
    msg.setSource(22599U);
    msg.setSourceEntity(97U);
    msg.setDestination(20564U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.9671338319662567;
    msg.lon = 0.9217441751756864;
    msg.z = 0.7499568216143513;
    msg.z_units = 16U;
    msg.speed = 0.08367699532136497;
    msg.speed_units = 113U;
    msg.takeoff_pitch = 0.6343938935566943;
    msg.custom.assign("HOXLDPAWGTTBQIOMJGXVPRRSVSIAYRTWRGWKWSMKIJIPXBCTTQZCDQYOYIEIPKCUBPZFGLKDYQWFUOVUKFKBJFULTAHLQNUPWVMQANZKORNWYUCAMOMVTGHJCVMNNPJLGJHSHXXSSPRCSUWBWTNEVOZETJBDHRFVQUDYUZRINEZYQMOEABXOGWRHDFKLBFZECHFSIBXCVKLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.30306737797625904);
    msg.setSource(53623U);
    msg.setSourceEntity(99U);
    msg.setDestination(42860U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.9701754054037515;
    msg.lon = 0.9125253006760977;
    msg.z = 0.8643674977339991;
    msg.z_units = 12U;
    msg.speed = 0.020655014802536842;
    msg.speed_units = 239U;
    msg.takeoff_pitch = 0.001119702344742457;
    msg.custom.assign("YJJDZMJMOEKENPLHGTRECGUMPCPZYPMUQDEHUBUVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.2794782978025493);
    msg.setSource(41257U);
    msg.setSourceEntity(253U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.541007347752781;
    msg.lon = 0.3349677400290533;
    msg.z = 0.13794602359813535;
    msg.z_units = 226U;
    msg.speed = 0.23763102312047857;
    msg.speed_units = 139U;
    msg.abort_z = 0.5785355451960909;
    msg.bearing = 0.847754995277372;
    msg.glide_slope = 170U;
    msg.glide_slope_alt = 0.9892210477386059;
    msg.custom.assign("AAWHADYJKCBYTJWNVHZXEGXVDBIEQKVHLMUMIPGQABRQWMZNVLAWITVCLSEQSOVSQQRXJDBNWVOALOPZTBAHFCRHECTQZVWNYXTZYJTTKCGOYFFYITYMOMNPTSKSYGNJAWSFGEUXEDSDZCZJAWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.9543071638642171);
    msg.setSource(58253U);
    msg.setSourceEntity(184U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.5441651294356716;
    msg.lon = 0.01464702012369512;
    msg.z = 0.10544151557181958;
    msg.z_units = 37U;
    msg.speed = 0.025353414429206023;
    msg.speed_units = 186U;
    msg.abort_z = 0.1509887385430927;
    msg.bearing = 0.25100339919909864;
    msg.glide_slope = 158U;
    msg.glide_slope_alt = 0.26036140462668;
    msg.custom.assign("HJACHIKCTHQBOWFKAIWRQYGKJOFZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.41526957636930595);
    msg.setSource(53031U);
    msg.setSourceEntity(104U);
    msg.setDestination(46464U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.11394159788609348;
    msg.lon = 0.9898875677041112;
    msg.z = 0.2806605614806861;
    msg.z_units = 231U;
    msg.speed = 0.379411923589705;
    msg.speed_units = 246U;
    msg.abort_z = 0.0033172036178886755;
    msg.bearing = 0.5394855406402913;
    msg.glide_slope = 79U;
    msg.glide_slope_alt = 0.5121219221742265;
    msg.custom.assign("SMACJXKSHVPIVNLIMWTKIIBDXQUITWFXLBMLVGHTOOAZPKBCHTAMMIAQPKUVYNVQRJLXVFNJCIZESTRQBRJQSJEXVNCWTNMGFHDRFZNNFZWREUUKYDQPHJEAEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.8883546997803284);
    msg.setSource(37541U);
    msg.setSourceEntity(13U);
    msg.setDestination(29388U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.07004985129113295;
    msg.lon = 0.3246473602071632;
    msg.speed = 0.7169855882677267;
    msg.speed_units = 140U;
    msg.limits = 218U;
    msg.max_depth = 0.8677301080734646;
    msg.min_alt = 0.10309700687937373;
    msg.time_limit = 0.049624448904766916;
    msg.controller.assign("RSGDGEVJAKTGAEWXBBOCVRWLPFZRBQXDYUJFLDSFWJDYCFXRQMLKPCOBYLUOFFBQEKQTEZJWRDGLISVBNNWOTRHNWEAHUTHFOULKDCVLNYIVAZMHYAIQJVCBQMCKNURXXGDNZHTRRLYOGTFWIUNTIPXPPKJQIBXLPQWAECSJJFTTDMPYMSYUJWTHKIAZWOZO");
    msg.custom.assign("UBKRRCNMLXITEBMVQVXDLCVJTOLMZGTHHMWDKBTTBEXLHIUEZQCPEFQCIWTYAWLZGIGSBBHDCCQYHPUNGMXARVVQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.3011785423895166);
    msg.setSource(26942U);
    msg.setSourceEntity(117U);
    msg.setDestination(16863U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.34100744128246074;
    msg.lon = 0.7405306061099519;
    msg.speed = 0.5665591726047591;
    msg.speed_units = 243U;
    msg.limits = 17U;
    msg.max_depth = 0.2299307777163132;
    msg.min_alt = 0.19298238584367944;
    msg.time_limit = 0.5645267395440825;
    msg.controller.assign("SRFVXRVJOLLXSDSMERQBCPKGGXIJFKFJJILELFTXMAPCPOPLHRYFZEOYVNUUMQUTFAHDPARYYZRLHCHWFYDQWWBYKPCXWLKUBDJSBLJQWFZNNWHZGSZQAOZTNCJIQJVAOEXBVDVXPBAHONKDMAMDGIHWCTYMBNRSKYLCVHSRMWATQBJQMFPVSDDEZVZFBSRMUUQEIPMRYCNAEHZKTOGIQIIUJGOEHCZGNNBEOT");
    msg.custom.assign("GRSOLXWCIEMVJNHNNETCKBVYXIILCWBMSTTAJBTKHTGIMRVSDMEVSHFGUBLWIFODVQFZZMZYDDVSYPUXAYKZSOANOUOSHFZHDXGNMENGUWDRTFZOXPMRAHZULLERUQALWCFRCJPPIXWWRXULYJBCEHEUTLORYRWKNZVQYCAFAAVJEDQGXZKPTPDJVTHQQIYIJHRGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.7184364837645938);
    msg.setSource(18587U);
    msg.setSourceEntity(42U);
    msg.setDestination(41678U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.7419232204877042;
    msg.lon = 0.9280705807920734;
    msg.speed = 0.8171721398041908;
    msg.speed_units = 124U;
    msg.limits = 229U;
    msg.max_depth = 0.32573448348661793;
    msg.min_alt = 0.06589219449310801;
    msg.time_limit = 0.5465430817722743;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5283083503361626;
    tmp_msg_0.lon = 0.514664852607272;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("TZRAOXTVQONEBFYHTKVYYSEHXMSWPSELZWSJBICZVJLBORWASAFFSWMQSIVMLEWGOIJEQPUNHJDESPQGTXRDIZOPMZLCUWJRJDKUAGTYKVTIUMQAWT");
    msg.custom.assign("KODSQLUTVTTSEZXFATXCPVSBQHFHOHHIMJIGCZATYHCXZFEEVNGKSPYOTPOQCBGSRYZCVPNLMYFWKAHFSXUCLXMCEUPQDPZKUXMGDOYWVIVISFLTYNGBLAEMDJDNKRJMSYBNUYMGQGCOWBMLWZAPSTIOGKXXQRWRJFLRDJCDRZDEKEDUALYQSJZGXJPAWODBHVIIWQTNQKJPXBROVNAHRPBQJINYAHKCUMOBFAFEBTFHMUVKEIVWRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.5730855298991271);
    msg.setSource(1018U);
    msg.setSourceEntity(198U);
    msg.setDestination(64999U);
    msg.setDestinationEntity(185U);
    msg.target.assign("YVKVBEDBZJDCAZOCWESWSSJBLYGAGBSXLFMORNVWBFUNXIFJOGYFUTGEHMICGMEKJDUSHNYOXFAJEDNZJCXFAWRAKQHZDWSRRAQCXJEPAFTPGPDTVUUQVWAHRIFRQVLRWVELKNEXIKKAQMJBXGDUYOGKLHNIDROXJMQOTOLQHCLZYSYTHRUDVLICMPSJWPTNFKQLZVGSVUMZUPXHTUSYCPPPWTZDQLBECAFBNKMTIIIZWQ");
    msg.max_speed = 0.2744894856991884;
    msg.speed_units = 14U;
    msg.lat = 0.5455981982923809;
    msg.lon = 0.3276263390463179;
    msg.z = 0.06574822663708058;
    msg.z_units = 42U;
    msg.custom.assign("QDIOCUZKARMXDTNQVUVPGKPMCYGAPOPTQWMFFCJTDUOZNZXAPBJFVJQNDYXSWWRMCEHSGLQISQAZSAHHJCKHPGDZXFYNWFLIPUIBKRHEPBKRHPOGISCSVUEJMLETGXYEAZWZLZYQEFTMQAXITRUBTHKICGENKBSCMWAYFAHXZFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.09337618282326343);
    msg.setSource(32422U);
    msg.setSourceEntity(83U);
    msg.setDestination(12287U);
    msg.setDestinationEntity(84U);
    msg.target.assign("DTBACLJECHWWBYPSZLNREXBXWJMUZOVUSBOQSTHESDMVAZRCEWENWZYYKIQACYKMDDREKOQ");
    msg.max_speed = 0.3791262713516461;
    msg.speed_units = 36U;
    msg.lat = 0.22726835076598817;
    msg.lon = 0.6797687283901725;
    msg.z = 0.7525595862124518;
    msg.z_units = 229U;
    msg.custom.assign("KNYFUFUCBHOLDNYXDQXBRXXRNTHBPPFGDVHLKOGIWQPGWBMPINVLOIECYQJTERUSCHLZYPYXQBFNWYEUQCZTZNQGTFNOHRZQHDASIMPSATYCBUWJNTAEHOMZQBJXWFFJKWVVMLGHZTFOCPRHMCWIVZACSGTVLSKBNPYOGAKGMZAGHMNLWMVAIIBKEVEORJYULXJECFLZYZJGUJRTEAKAXOKRKDVDJEPJSQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7011466358043795);
    msg.setSource(10245U);
    msg.setSourceEntity(205U);
    msg.setDestination(60948U);
    msg.setDestinationEntity(49U);
    msg.target.assign("KFAIENWZOZTFLRCZMHXJAYIFZGMEBMYRZREVFTVHXCEFIAUZEFXWVDQYGIKTYNUYQJOTHGWIJDBSAJLWMPGNSGBPCRXGTSDVSHGOMDLQKPEUKIQSUESCCSNYRKOTDHUUVVQBXGJUNU");
    msg.max_speed = 0.9867839511426134;
    msg.speed_units = 221U;
    msg.lat = 0.0795242951156625;
    msg.lon = 0.025259559859792002;
    msg.z = 0.6824050300073179;
    msg.z_units = 66U;
    msg.custom.assign("CWRBBXIDXZIGZKAWACTRHYUQLHFQJDGZIHBFABWZJVCTQYDUSGEXTHFDZLNBPMNDIIJEDJEMWVFSQKKLGIXEASSKUECGOWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.6556627765031336);
    msg.setSource(35782U);
    msg.setSourceEntity(178U);
    msg.setDestination(53043U);
    msg.setDestinationEntity(158U);
    msg.timeout = 29981U;
    msg.lat = 0.43275180564558935;
    msg.lon = 0.9016535697329188;
    msg.speed = 0.39447009832774627;
    msg.speed_units = 70U;
    msg.custom.assign("LMPEMRFRFPMVHGZONPWGVVNOAWSYTVTZLBBDUGFTHMQUCSZACVZNSSSXUIJAFMTPOSIFBQWUXJOVWBUAQAHQMWIHCHZHYTRPHXWYBFCWZLVDRJIY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.792877973006766);
    msg.setSource(45640U);
    msg.setSourceEntity(184U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(209U);
    msg.timeout = 55203U;
    msg.lat = 0.08247649842323745;
    msg.lon = 0.03421556216707933;
    msg.speed = 0.6530845967363509;
    msg.speed_units = 83U;
    msg.custom.assign("YVUGNFAKAPAUAHSTPVZSZBDIEJYQSVMMBZUUGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.2048105673656604);
    msg.setSource(42164U);
    msg.setSourceEntity(69U);
    msg.setDestination(11035U);
    msg.setDestinationEntity(236U);
    msg.timeout = 48545U;
    msg.lat = 0.22540147477470884;
    msg.lon = 0.9237908039940838;
    msg.speed = 0.48618978925920275;
    msg.speed_units = 104U;
    msg.custom.assign("BKQDFOIDLUUNFWWCEIXHCYTAGGTNOBCILIDZQTZBPKNKJHPXRABVXRPUHCWYIEPXRXIQMADEKGHEVRIKKAY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.26529304575079304);
    msg.setSource(60411U);
    msg.setSourceEntity(38U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.43917348418482416;
    msg.lon = 0.05179737320835143;
    msg.z = 0.6525376511321797;
    msg.z_units = 186U;
    msg.radius = 0.21543171069619504;
    msg.duration = 15661U;
    msg.speed = 0.1442057926320438;
    msg.speed_units = 238U;
    msg.popup_period = 18271U;
    msg.popup_duration = 12952U;
    msg.flags = 180U;
    msg.custom.assign("KLMDZTFRRJEVVEUAZIEKTNSBJFOVUBNUUXLWLJKLLOMTSOZVCMDNCTURMGBAQFXMPHATIAXUXVWBLGBVSGYFOFSZLIXWRHPZQURMHIYSTZDLKHBCEPEHIKGKFVMBSFGOTFSJDECCEJCPVDIDPVQPPNJJDHGJNYKTADYHCIQZEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.3574167143377385);
    msg.setSource(5139U);
    msg.setSourceEntity(166U);
    msg.setDestination(60512U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.5636795434069174;
    msg.lon = 0.010355982509266948;
    msg.z = 0.9670588761007605;
    msg.z_units = 3U;
    msg.radius = 0.6348867465287791;
    msg.duration = 30482U;
    msg.speed = 0.09078863526468484;
    msg.speed_units = 48U;
    msg.popup_period = 5705U;
    msg.popup_duration = 47815U;
    msg.flags = 1U;
    msg.custom.assign("JOUDCIFKKXMQOXKQBVUNXMOHJPFEJIPHJTCLNROKAADUMMNRMGXFSIZDBBHZJKYCBVMBDRCRHRAISFSTZFSCYRRWBJMPFDZJDLKBJYVITRCHAQGLHGNITVVWZUGACPCSRKZAACBLJFXLSNUEMDNQAEBXHFEPFG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6245333466548666);
    msg.setSource(61660U);
    msg.setSourceEntity(15U);
    msg.setDestination(61167U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.8339807535782219;
    msg.lon = 0.39088965988144597;
    msg.z = 0.22502869089532274;
    msg.z_units = 94U;
    msg.radius = 0.2907973117281959;
    msg.duration = 41273U;
    msg.speed = 0.21925061491520825;
    msg.speed_units = 103U;
    msg.popup_period = 3152U;
    msg.popup_duration = 21119U;
    msg.flags = 41U;
    msg.custom.assign("TQINHRIEDKBPNFTKRNRAUDAEKWCMPDKURXMJLHYGQGPUYRONMKLCQLIGRBHPFXFWSEWEUFVXRADWFPMSPZEZFKIQYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.562330180496326);
    msg.setSource(53693U);
    msg.setSourceEntity(230U);
    msg.setDestination(58613U);
    msg.setDestinationEntity(127U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5274498175874751);
    msg.setSource(48718U);
    msg.setSourceEntity(114U);
    msg.setDestination(36754U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.37869285330883706);
    msg.setSource(52956U);
    msg.setSourceEntity(197U);
    msg.setDestination(10533U);
    msg.setDestinationEntity(87U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.580105854748791);
    msg.setSource(15489U);
    msg.setSourceEntity(239U);
    msg.setDestination(18905U);
    msg.setDestinationEntity(209U);
    msg.timeout = 27352U;
    msg.lat = 0.9765499546891792;
    msg.lon = 0.11178530662609298;
    msg.z = 0.5970371689856141;
    msg.z_units = 149U;
    msg.speed = 0.5213986310263574;
    msg.speed_units = 171U;
    msg.bearing = 0.8097921403976984;
    msg.width = 0.5919433864751815;
    msg.direction = 205U;
    msg.custom.assign("MUIXWDMAIHMSHTFIYQNULMZRMHSBQVAHSQYYFTFVQLBBIVOJQBOTIWNXFKYXVWKDNLLMQPRWCDLRERPZSIANGERRITOSWLJXSAWTOGHWXEXPYVFMFCQNUTTLPEJHZQCYUCBCNSYGFZJSGFBTWXYNIUEKZMJHJNXRKTODBWQKBCJCADZVFZRHICJLXX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.9684599960845918);
    msg.setSource(23193U);
    msg.setSourceEntity(41U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(106U);
    msg.timeout = 46336U;
    msg.lat = 0.2747252959304276;
    msg.lon = 0.2453660781270649;
    msg.z = 0.925844546574799;
    msg.z_units = 123U;
    msg.speed = 0.5719882568584402;
    msg.speed_units = 106U;
    msg.bearing = 0.8656819913700959;
    msg.width = 0.22375588984425576;
    msg.direction = 241U;
    msg.custom.assign("DEYUCIRKMJQVNEFPLZPYRWDCRRBUSXMBTCNLAYZXYUGAAUJYHCALMRTIPFBUYQWBHDJTJDLLLJALFRYDAAIPFMKFNFMWEIURKCBYXHUVNAEWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.012040624819499413);
    msg.setSource(31735U);
    msg.setSourceEntity(61U);
    msg.setDestination(51488U);
    msg.setDestinationEntity(75U);
    msg.timeout = 19750U;
    msg.lat = 0.01635444167764566;
    msg.lon = 0.6389196273883526;
    msg.z = 0.4478078565445718;
    msg.z_units = 37U;
    msg.speed = 0.7190576124025695;
    msg.speed_units = 152U;
    msg.bearing = 0.3427033375887868;
    msg.width = 0.24313976210436938;
    msg.direction = 106U;
    msg.custom.assign("QVOPZBNRQRLNTRUIDBUPGBUBBNDYKJCTHVQZXNSLJMLGWOZDDLACGHDMCHIJUGFZIMZASWILVWMEWXJLNKHEHFABDKPVIWTVMFGGWYMGZCZSQBXQKRHXYDOMXVSCSGCPSORTZDCFZAIVTIJTAERNPJJAGYLPBWNIJUKEQLPIALUQUYCKOPRFUJPSCHHQOISOFGTNEWXHSNTYFNWYTDREYHVMQBBOAXUODJUXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5863919641171456);
    msg.setSource(44264U);
    msg.setSourceEntity(120U);
    msg.setDestination(21685U);
    msg.setDestinationEntity(231U);
    msg.op_mode = 103U;
    msg.error_count = 99U;
    msg.error_ents.assign("XQETGGUQBKHYFZRICOMPIKXYTOXHOVLGKUHHZSKMNOKQXRNCHXZBEVMOEIBZETFWJJZXACLBJFVSLUGSYCTTNOAHOVWQHEYJUJWDDSFFBUUGDQSLZRQYLDLWFDOXANEEPKUTVT");
    msg.maneuver_type = 9438U;
    msg.maneuver_stime = 0.9185869352563257;
    msg.maneuver_eta = 53680U;
    msg.control_loops = 1902367016U;
    msg.flags = 39U;
    msg.last_error.assign("ADMXRSXLCKFGPDDWGVQDLHEMZNSFYGIKTFFJEKNYRVBFGDJUQRLYYMUVHHRUKOCJHDTEGTLXBTJIZKLNUBXMBQQA");
    msg.last_error_time = 0.9793507479802772;

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
    msg.setTimeStamp(0.8531629305690057);
    msg.setSource(51973U);
    msg.setSourceEntity(167U);
    msg.setDestination(33487U);
    msg.setDestinationEntity(126U);
    msg.op_mode = 130U;
    msg.error_count = 248U;
    msg.error_ents.assign("UBZQNFDZGFNGXJYXGOIFPUUXXWZGIVFBQBBNWJLLCAK");
    msg.maneuver_type = 11905U;
    msg.maneuver_stime = 0.07429397263414761;
    msg.maneuver_eta = 17020U;
    msg.control_loops = 2649798025U;
    msg.flags = 218U;
    msg.last_error.assign("ITLBTJMLQHASNUBMSEVMGPBEDHQ");
    msg.last_error_time = 0.956946996893601;

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
    msg.setTimeStamp(0.35585588732239004);
    msg.setSource(24576U);
    msg.setSourceEntity(88U);
    msg.setDestination(21638U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 198U;
    msg.error_count = 70U;
    msg.error_ents.assign("QFZTLKDWBJQJGBTNMFZNHAEBJKZZXEOQJCDDPAOAOPALTRAWNBYGWNZOYHJADWIVUJPRPUOMBWAXOKMBIMXRCSXPIZXILEUTKIHVQHDBGRCMUQRTCPQXYWEDRCPFHZJMYFRD");
    msg.maneuver_type = 22625U;
    msg.maneuver_stime = 0.04901433958842116;
    msg.maneuver_eta = 42526U;
    msg.control_loops = 469602278U;
    msg.flags = 97U;
    msg.last_error.assign("QOZGUXXTLSKUAOFUYCFJTVPXKANBSDDAHKAGOWLQMMSPGIBVJXPMCWWRISPWZZBPLHGJHZMBBYODHPRMVYBIRTWEQEDORCRNZYZCOTLRRTUQWUVNTLUYZJEKYXSHQPIIJZTWJBWJCAXOTKLGREVVRFEYASCZCKBYQJAMXPEAOHMLFDJIQAUMAVIFSZFIMSVDHDJCPQCOYKLELDCNPXEWNNHDIVNUYGRGDVEEHF");
    msg.last_error_time = 0.24654814890409937;

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
    msg.setTimeStamp(0.447314686238256);
    msg.setSource(58123U);
    msg.setSourceEntity(202U);
    msg.setDestination(52425U);
    msg.setDestinationEntity(248U);
    msg.type = 83U;
    msg.request_id = 37379U;
    msg.command = 250U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.7622135003562251;
    tmp_msg_0.lon = 0.7963499501394742;
    tmp_msg_0.speed = 0.010773687439867619;
    tmp_msg_0.speed_units = 196U;
    tmp_msg_0.duration = 46807U;
    tmp_msg_0.sys_a = 35862U;
    tmp_msg_0.sys_b = 57647U;
    tmp_msg_0.move_threshold = 0.20601558956633204;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 8438U;
    msg.info.assign("BGEEWQYFPMCTGTJVVUUHALKHIPDIDXVFBHUGAUQOPUJNYZJLJXLXAPOUBSSQEVPZWXLQONHRKLWOEFKIDKGMRIQSNGJNCKJOZEEMGDSMCMNRRVFPOZCUFFIODWWHNTLNSVWZSCCERZGHU");

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
    msg.setTimeStamp(0.7104639962061623);
    msg.setSource(7953U);
    msg.setSourceEntity(37U);
    msg.setDestination(42646U);
    msg.setDestinationEntity(4U);
    msg.type = 118U;
    msg.request_id = 28820U;
    msg.command = 137U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 11605U;
    tmp_msg_0.lat = 0.9066729862432016;
    tmp_msg_0.lon = 0.228507215586907;
    tmp_msg_0.z = 0.5661879294691626;
    tmp_msg_0.z_units = 161U;
    tmp_msg_0.pitch = 0.01738067706198454;
    tmp_msg_0.amplitude = 0.708397153502843;
    tmp_msg_0.duration = 20048U;
    tmp_msg_0.speed = 0.5020219550552152;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.radius = 0.7591314391867361;
    tmp_msg_0.direction = 198U;
    tmp_msg_0.custom.assign("KGYGOGBLCBMGIPRCCJTAHCDIFWWOCRDYBPLSKAHFWNXUCSPPMMCBWQFFCZKGJEYZSRJVJTVRMSUBAAQSIOAYSOZSDPLMOIPPLRENNVTYHZGJHTTJUAIDQVTFETOKUUNJNULZZOZNNKSLDX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62735U;
    msg.info.assign("OFCJDFQEDQTRSVKRAPNOIWZOKRVTVUDYXHJFFBTQLBEGMUABEYYFUYSSAZRJWPHHPPXFUKDKLMOFNAFPQDDASORKGAQQJCPJZVUTZNZBWRIXMKCRBXEIGTQMLCMEOQXCXBCNISIMNTTOWJTLLEOISJAHRWMPOWSTPGLLGBIIGLHEMZGVEJIMJXXPZUAYDRWGBSW");

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
    msg.setTimeStamp(0.37777850014464553);
    msg.setSource(48576U);
    msg.setSourceEntity(247U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(54U);
    msg.type = 156U;
    msg.request_id = 47859U;
    msg.command = 29U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 33236U;
    tmp_msg_0.control_ent = 180U;
    tmp_msg_0.timeout = 0.3832215303177289;
    tmp_msg_0.loiter_radius = 0.30915048085214336;
    tmp_msg_0.altitude_interval = 0.3226232363285172;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62795U;
    msg.info.assign("ANWAJKIEJDBBCOYERBGJEZULUNYTXGNYPXXMKWIFGOFSXKOCBDIDGJVCUNJECUODKBNXAEILRSIPWGUOUZMVWAZATSLMQOEEWXNGVTXHGYTCZTTRFTJNRSQWZHFVLNYJAZCUUQBVTMDMAVFKSJMRXDBPKOPWPLOLYIHAHRTJBPDCHMQLZQMIHKOF");

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
    msg.setTimeStamp(0.06939712778112306);
    msg.setSource(36437U);
    msg.setSourceEntity(218U);
    msg.setDestination(40653U);
    msg.setDestinationEntity(165U);
    msg.command = 35U;
    msg.entities.assign("EPHWHZUYQBKQNDHZIYOAWKKZUCMQORGKCHWIGAZLVSRVJUQLGZQNSOLJFYPBDABCNSUBXQYSVIQNULGYCMIZWZKG");

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
    msg.setTimeStamp(0.5428582900804478);
    msg.setSource(58674U);
    msg.setSourceEntity(23U);
    msg.setDestination(56057U);
    msg.setDestinationEntity(170U);
    msg.command = 205U;
    msg.entities.assign("QLYTPCLLYUZGGCXEFDLUCNZFIZFNKIODNMDXTOWOCPBTQOUCAICLZWGJRPRTQIQQUABWVKZZFUJICEQMRAOXTRYBZWHVDPIKILHTVKYEOJZMAUPFQPLXHEXEVCBLQBRNYRYEWYLNSPAOUSBKABKNGSMWMTVRXDZRRBENSHFEPJHGGWKJXVHFNJHIUOWHQFMSHGYGTIASMEOHMUOFXGWJBYXTDVS");

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
    msg.setTimeStamp(0.36084304673358014);
    msg.setSource(9190U);
    msg.setSourceEntity(235U);
    msg.setDestination(60868U);
    msg.setDestinationEntity(188U);
    msg.command = 81U;
    msg.entities.assign("RXVIPPHEIJFSLPKWOFHWSMIAXTVDSPCGXXQAZMDWUYZIZHFTHLOMJBUYNCYYUNNLCWIYCNCCIVYAWKMZXQIZEABOQSIISWJEKGJDNZKSKYJFUZBMHNWFXEMNMBZDGXUKUNLLOPRMFNPPDDQCUTDRBAAOJREJMRVHSJNHLTGQGPKRYSHXGUVVSFBURYDBFBILUEWMSTQWTDVTRLPAGBHXTZAXQCKZLWQOCJGRTFEFEAOKPD");

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
    msg.setTimeStamp(0.02188643795856393);
    msg.setSource(56640U);
    msg.setSourceEntity(207U);
    msg.setDestination(16941U);
    msg.setDestinationEntity(60U);
    msg.mcount = 142U;
    msg.mnames.assign("IAQBBJOCAQSZWVIEINORPLHBAWJAVXJPKGZIKZLIBNPUNDOVWZYQQYMORQPIUYEWMUFGDFCVCSTKIFPGQBHXHFMSLYWYBGXJQUHRNH");
    msg.ecount = 106U;
    msg.enames.assign("UPYRKCDIFGUHXIBHU");
    msg.ccount = 33U;
    msg.cnames.assign("LRAPWLFATQJOCBJJUWEYEURGNKTMQDMAFDZQTSOOTVXBFOUPWXAB");
    msg.last_error.assign("AYTTZMMJLQKTOMLVHNMATFEYSSASTTTEJUSWINHVSHQPHVNQPUPONDQRXYKWBUJIYSZBKOIJRJIVCLXQLUHGGNWXWVDURELSBDZVWJZLMFIPCCOGJPHJZFMVWYKUMHTKCBPBBZFALZACREEOQDYMNOWSUORAVGWYSREWGQRUPQPNEFOPXHXLKVKSUXTP");
    msg.last_error_time = 0.9708076525010721;

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
    msg.setTimeStamp(0.29094779431563345);
    msg.setSource(30165U);
    msg.setSourceEntity(53U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(37U);
    msg.mcount = 177U;
    msg.mnames.assign("BORJEEOSLHMFZKDNQCUJMWULKXBXBXCRETAJZLWUKUVWLYPNITUYQDMLKPZURDJFGGAMIKYTLKIDFJORTTXHXAYIUZNOOZWKHOCWLFPURPTBHSPYEZIDIRNNHTCNDOWPDWMMMCFYQVPVXRSAQOIFRHGLECJD");
    msg.ecount = 9U;
    msg.enames.assign("FZMKLPNBKOXOJGQBBMKRAFHZR");
    msg.ccount = 96U;
    msg.cnames.assign("FHHLFOMKMNRDVQIXVVCTKCYARTLESRTOFKQIJZNSWUXABOLSIGHKRLQ");
    msg.last_error.assign("OGJXLGMIWLDKUGDZJKNPNIPCAXETZLONTXLJOGWJDUOYVWZEYPSYXOEJKYVIFCKCRMHCUAIKSHAXTAEYPPIUIJQOLHHJZOFVPQSERFLGRB");
    msg.last_error_time = 0.6397682149481212;

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
    msg.setTimeStamp(0.10529519606602844);
    msg.setSource(1007U);
    msg.setSourceEntity(126U);
    msg.setDestination(47720U);
    msg.setDestinationEntity(97U);
    msg.mcount = 139U;
    msg.mnames.assign("DYSRIWMUXWROVRJAVAXFMPBXEBPSAOMNTRJQHNFCKCQYZORBJ");
    msg.ecount = 55U;
    msg.enames.assign("GSWHLQEVGGQSOALBURXSAWMKHGIWEXKYDWBILGULYPRUYWERHEZUSSWJWIEOQIRHPJXCAQSVAFCTWPKIGLDNUPWZDPMHTLGCQPIIDFEJMLDOQAAZESYVXQKMQRNSKNXVUDOTFUQHOKCDKIMAPCHMTUJJMJYIY");
    msg.ccount = 41U;
    msg.cnames.assign("MCWNBSRZOISFXZZQKZNVWAUEUWUNOURZEWEFOHIGOVGSGGGOTGFNTETOAFIOBZMTIRE");
    msg.last_error.assign("WXEETQXCUQBLKHNXWCCYSLEKORSZOMOMUXMAJDDPUBQXMIPYFHLRPQAIQBHBXSHRYHKLNWVIORNZNFFJGRYHCGGCAUWROZGKFTWIISEVABZVYTLPFSCEGDLVHXZHEPBQAGAPXFOKOZGWEFWMPUBVOATVEQCC");
    msg.last_error_time = 0.4918873860557612;

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
    msg.setTimeStamp(0.5463990558465756);
    msg.setSource(48720U);
    msg.setSourceEntity(64U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(127U);
    msg.mask = 73U;
    msg.max_depth = 0.6771809845704152;
    msg.min_altitude = 0.16949815720309203;
    msg.max_altitude = 0.18285632316668055;
    msg.min_speed = 0.26307601092629007;
    msg.max_speed = 0.668039807823096;
    msg.max_vrate = 0.6336571352410943;
    msg.lat = 0.6066127605882516;
    msg.lon = 0.028155877835586818;
    msg.orientation = 0.6177427965652507;
    msg.width = 0.520999512330571;
    msg.length = 0.9472291064722226;

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
    msg.setTimeStamp(0.28970334320615687);
    msg.setSource(64594U);
    msg.setSourceEntity(152U);
    msg.setDestination(56571U);
    msg.setDestinationEntity(147U);
    msg.mask = 33U;
    msg.max_depth = 0.12504229997712835;
    msg.min_altitude = 0.20031006886652314;
    msg.max_altitude = 0.293699276931515;
    msg.min_speed = 0.8125344662211551;
    msg.max_speed = 0.718427188230347;
    msg.max_vrate = 0.24613119842204678;
    msg.lat = 0.46631518503330716;
    msg.lon = 0.7220855490523044;
    msg.orientation = 0.7573478890945483;
    msg.width = 0.5974671448387844;
    msg.length = 0.22923926584091492;

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
    msg.setTimeStamp(0.7828491579669022);
    msg.setSource(40540U);
    msg.setSourceEntity(23U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(165U);
    msg.mask = 87U;
    msg.max_depth = 0.26441835831404803;
    msg.min_altitude = 0.6396756670235628;
    msg.max_altitude = 0.8767386245799056;
    msg.min_speed = 0.8456272662731257;
    msg.max_speed = 0.11447893539609955;
    msg.max_vrate = 0.10340353767304067;
    msg.lat = 0.9907110360184531;
    msg.lon = 0.865243473019246;
    msg.orientation = 0.35255124209788335;
    msg.width = 0.7660116649581207;
    msg.length = 0.5079861342571741;

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
    msg.setTimeStamp(0.7026150275209248);
    msg.setSource(26361U);
    msg.setSourceEntity(232U);
    msg.setDestination(62413U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.0849009436547653);
    msg.setSource(13903U);
    msg.setSourceEntity(108U);
    msg.setDestination(41651U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.50436059472621);
    msg.setSource(8921U);
    msg.setSourceEntity(167U);
    msg.setDestination(53918U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.2363903585846442);
    msg.setSource(61935U);
    msg.setSourceEntity(138U);
    msg.setDestination(27356U);
    msg.setDestinationEntity(44U);
    msg.duration = 43759U;

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
    msg.setTimeStamp(0.01782046232673007);
    msg.setSource(31790U);
    msg.setSourceEntity(200U);
    msg.setDestination(51024U);
    msg.setDestinationEntity(0U);
    msg.duration = 12380U;

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
    msg.setTimeStamp(0.8501882600858266);
    msg.setSource(32106U);
    msg.setSourceEntity(50U);
    msg.setDestination(55692U);
    msg.setDestinationEntity(228U);
    msg.duration = 28866U;

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
    msg.setTimeStamp(0.6051570888336882);
    msg.setSource(13756U);
    msg.setSourceEntity(122U);
    msg.setDestination(17279U);
    msg.setDestinationEntity(65U);
    msg.enable = 207U;
    msg.mask = 1606953127U;
    msg.scope_ref = 1075720939U;

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
    msg.setTimeStamp(0.7741825587927169);
    msg.setSource(56894U);
    msg.setSourceEntity(105U);
    msg.setDestination(19372U);
    msg.setDestinationEntity(240U);
    msg.enable = 90U;
    msg.mask = 1408189108U;
    msg.scope_ref = 1507740832U;

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
    msg.setTimeStamp(0.5448400084580594);
    msg.setSource(45359U);
    msg.setSourceEntity(196U);
    msg.setDestination(54897U);
    msg.setDestinationEntity(0U);
    msg.enable = 130U;
    msg.mask = 829092674U;
    msg.scope_ref = 1056946598U;

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
    msg.setTimeStamp(0.3374880164854027);
    msg.setSource(36781U);
    msg.setSourceEntity(4U);
    msg.setDestination(48045U);
    msg.setDestinationEntity(19U);
    msg.medium = 241U;

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
    msg.setTimeStamp(0.3662375139378754);
    msg.setSource(13085U);
    msg.setSourceEntity(181U);
    msg.setDestination(59966U);
    msg.setDestinationEntity(86U);
    msg.medium = 12U;

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
    msg.setTimeStamp(0.6626055986965736);
    msg.setSource(47536U);
    msg.setSourceEntity(251U);
    msg.setDestination(18484U);
    msg.setDestinationEntity(214U);
    msg.medium = 26U;

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
    msg.setTimeStamp(0.21791966515520445);
    msg.setSource(9031U);
    msg.setSourceEntity(135U);
    msg.setDestination(15090U);
    msg.setDestinationEntity(79U);
    msg.value = 0.3845969496385693;
    msg.type = 211U;

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
    msg.setTimeStamp(0.7293413586608747);
    msg.setSource(12566U);
    msg.setSourceEntity(112U);
    msg.setDestination(49593U);
    msg.setDestinationEntity(161U);
    msg.value = 0.43223683683104563;
    msg.type = 253U;

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
    msg.setTimeStamp(0.5786459769320006);
    msg.setSource(29771U);
    msg.setSourceEntity(214U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(143U);
    msg.value = 0.23124296766140073;
    msg.type = 114U;

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
    msg.setTimeStamp(0.574175169660141);
    msg.setSource(42189U);
    msg.setSourceEntity(87U);
    msg.setDestination(37289U);
    msg.setDestinationEntity(155U);
    msg.possimerr = 0.26242903728727496;
    msg.converg = 0.4388233718647937;
    msg.turbulence = 0.2696477790633629;
    msg.possimmon = 12U;
    msg.commmon = 120U;
    msg.convergmon = 227U;

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
    msg.setTimeStamp(0.5547213003788154);
    msg.setSource(60391U);
    msg.setSourceEntity(117U);
    msg.setDestination(17156U);
    msg.setDestinationEntity(238U);
    msg.possimerr = 0.5420668625110763;
    msg.converg = 0.6098477759840945;
    msg.turbulence = 0.9178246247821042;
    msg.possimmon = 237U;
    msg.commmon = 42U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.07721400571447601);
    msg.setSource(61316U);
    msg.setSourceEntity(34U);
    msg.setDestination(26487U);
    msg.setDestinationEntity(76U);
    msg.possimerr = 0.2730434856483803;
    msg.converg = 0.8732350269708118;
    msg.turbulence = 0.8464179316894707;
    msg.possimmon = 234U;
    msg.commmon = 213U;
    msg.convergmon = 74U;

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
    msg.setTimeStamp(0.6072080005043885);
    msg.setSource(1870U);
    msg.setSourceEntity(57U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(179U);
    msg.autonomy = 56U;
    msg.mode.assign("KAEFZVCXICWGQAKRPRBWXZCSCFMHNQDBHUIYWKZPOQHXOPKXRXADIFSYHXWRILPIMFJOWJYHPPBLMGVWGJVLUUIEKOECRDPRLWYNJOUMJSLNWRSUOQVNNYMYPGNCDKDFAYBQCYQOFAUJKBTQGGSEYSRCTSSTZFPUTADXHNWUXMDQLREJTTZTANMVQVXKQMZGPOKNBHVLCTGUEB");

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
    msg.setTimeStamp(0.6484426680416504);
    msg.setSource(2003U);
    msg.setSourceEntity(112U);
    msg.setDestination(26422U);
    msg.setDestinationEntity(125U);
    msg.autonomy = 131U;
    msg.mode.assign("XJINFHERTEWRRCCCVNUFHSILALHRKQEUUDLPAYOHIQHCJKXHHAVKCJKRVOGKJONNSBWJZAGYBPEPUMETQJADIBLCZBFRPPMARTUBVFEMQFBYEERNUZLGYGXZNXMHFDWLMBIUXICCTZDWCLRUDGKTTPJOPLXWPOQFBTSEMDGKFADHNMDWKLXWXAYNSSZHZDGOBVJUZYOTSGNOIMVQAVTA");

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
    msg.setTimeStamp(0.07850981379955702);
    msg.setSource(36657U);
    msg.setSourceEntity(176U);
    msg.setDestination(57957U);
    msg.setDestinationEntity(151U);
    msg.autonomy = 248U;
    msg.mode.assign("SBWDEFVOPTGTGDOODRHHNWCFRHLAMRJQGEJGUSEVWBJKGFSBLWLILIRKTXNZQSHVDLHUZZICOZYXMJYBNJQDDADVMWTPKEPQETSXNOPJYGQXMVCUYCWEPKGAQNGSEPEYITFKSQWSLVCEZABNKMKBLRFUGFBCMXTMIIJRWRYAQFDYLSFFHPBOVDZUIGUWJNJICVCKXZTTAOIBERHHLMAZXKPYITNOKAPUXSA");

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
    msg.setTimeStamp(0.5977424511596815);
    msg.setSource(18735U);
    msg.setSourceEntity(197U);
    msg.setDestination(38217U);
    msg.setDestinationEntity(70U);
    msg.type = 20U;
    msg.op = 143U;
    msg.possimerr = 0.9915652051486228;
    msg.converg = 0.08729895477567273;
    msg.turbulence = 0.774967475016946;
    msg.possimmon = 241U;
    msg.commmon = 40U;
    msg.convergmon = 33U;

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
    msg.setTimeStamp(0.6631655405420624);
    msg.setSource(11206U);
    msg.setSourceEntity(69U);
    msg.setDestination(59053U);
    msg.setDestinationEntity(194U);
    msg.type = 30U;
    msg.op = 176U;
    msg.possimerr = 0.17772317693239625;
    msg.converg = 0.1807907362554435;
    msg.turbulence = 0.11501953965731537;
    msg.possimmon = 65U;
    msg.commmon = 120U;
    msg.convergmon = 94U;

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
    msg.setTimeStamp(0.9438840912719357);
    msg.setSource(13864U);
    msg.setSourceEntity(150U);
    msg.setDestination(53098U);
    msg.setDestinationEntity(230U);
    msg.type = 192U;
    msg.op = 118U;
    msg.possimerr = 0.5796709819042573;
    msg.converg = 0.3540347252610315;
    msg.turbulence = 0.8999409103171017;
    msg.possimmon = 233U;
    msg.commmon = 168U;
    msg.convergmon = 49U;

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
    IMC::ReportControl msg;
    msg.setTimeStamp(0.4203164899900014);
    msg.setSource(2250U);
    msg.setSourceEntity(53U);
    msg.setDestination(10246U);
    msg.setDestinationEntity(157U);
    msg.op = 244U;
    msg.comm_interface = 82U;
    msg.period = 11485U;
    msg.sys_dst.assign("AZFXQGCEGHXHHNOGGTRRZDCJDJRZUPMWUNWAISTVWNWYTEQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.13746674345551346);
    msg.setSource(49027U);
    msg.setSourceEntity(114U);
    msg.setDestination(55312U);
    msg.setDestinationEntity(184U);
    msg.op = 117U;
    msg.comm_interface = 95U;
    msg.period = 22392U;
    msg.sys_dst.assign("OYTMWJBSHVNMYIEBPEKAZRDFDHMHAGOBSFLHRTOYGFMDMUCKWJXIZWFBBURNSUFNCWRPZKOTFVWGZKKUGPYKCGETHGEGDJZLLINIJSXZATHCRMQVQAKKPKPQJPHBYDILVYLNUSJTLBCDQIZALMYPQGVXDEFZCOPHVRQWFJRMCOCTAADSALAGNXW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.2776496963727486);
    msg.setSource(37925U);
    msg.setSourceEntity(135U);
    msg.setDestination(48557U);
    msg.setDestinationEntity(42U);
    msg.op = 232U;
    msg.comm_interface = 177U;
    msg.period = 36931U;
    msg.sys_dst.assign("BNRDMCCXKNHBFPEKEUGSEMUNAXPWADRTMUGFIUUCNMSATTUJSQQIBJUTPFLOXESGHRGNSPAXAILAIXQPSZJFDKLQLBJTXPEORXPLYBEIETOBTVZOFAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.1084718900799162);
    msg.setSource(31972U);
    msg.setSourceEntity(215U);
    msg.setDestination(12769U);
    msg.setDestinationEntity(6U);
    msg.stime = 1683343832U;
    msg.latitude = 0.07180039567470664;
    msg.longitude = 0.7032832249710268;
    msg.altitude = 43329U;
    msg.depth = 22876U;
    msg.heading = 49266U;
    msg.speed = -9200;
    msg.fuel = -33;
    msg.exec_state = -93;
    msg.plan_checksum = 51203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.5427836158214406);
    msg.setSource(44275U);
    msg.setSourceEntity(190U);
    msg.setDestination(60677U);
    msg.setDestinationEntity(49U);
    msg.stime = 2385103434U;
    msg.latitude = 0.04623552602788916;
    msg.longitude = 0.5457780774651037;
    msg.altitude = 4089U;
    msg.depth = 54797U;
    msg.heading = 60914U;
    msg.speed = 26541;
    msg.fuel = 66;
    msg.exec_state = -92;
    msg.plan_checksum = 64022U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.31362613498324576);
    msg.setSource(6558U);
    msg.setSourceEntity(150U);
    msg.setDestination(30160U);
    msg.setDestinationEntity(212U);
    msg.stime = 3575448389U;
    msg.latitude = 0.6865188980346526;
    msg.longitude = 0.05893289138012758;
    msg.altitude = 6683U;
    msg.depth = 61270U;
    msg.heading = 17964U;
    msg.speed = -13103;
    msg.fuel = 25;
    msg.exec_state = 114;
    msg.plan_checksum = 5074U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.18618649901181528);
    msg.setSource(3999U);
    msg.setSourceEntity(44U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(236U);
    msg.req_id = 21609U;
    msg.comm_mean = 214U;
    msg.destination.assign("KJIRRTJPAFJVDDMPDBUQYNAFADJTFIQJZEFIMNVVOURWHMQFLGRTZZOZHNYPDINMVRPACWSWAGHYLDYBVTBWSEXXMQTQLKSCMQPHUYGWNZSLIVOKKHLKYXMGVYANEFZFFCJOZIIPFTLQNGEWCRYBOXQCAEBTWDXERENKXJZQLDHOV");
    msg.deadline = 0.9821981754477765;
    msg.range = 0.8375569820924375;
    msg.data_mode = 36U;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 109U;
    tmp_msg_0.plan_id.assign("FLEMKUIYAPVKCQLNGSHDNOLDPCACHCPHNIUOJWBBFHXQUGUCIPKEDJNJHIODMQBDMEZZAANTLJSJOLTSOVOYBVPWQDITXKURTMSMLGANEQBGTEHSYPAHKCTAHLRWYQNKBFLAEZESNJDJYZFXCFBSYFJZKTEJXOMIRWXGFMVYXVGMQYYDIQUPUVOATAUBNRRZRIEKXUWXIWVDVUEBRGSFVSKIXFVGGFPHZPTMWRTCQLOCDRQRJPSH");
    tmp_msg_0.plan_eta = 654056401;
    tmp_msg_0.plan_progress = 0.2431742788881176;
    tmp_msg_0.man_id.assign("YYKJBZFUFWGCTWLRPHJXFMMSHNDMGOYLIPRCETHOBEJONNAQDXKORIXOWNUYKLAUQNDVCZPRUAZACNMSTPPOPIOUSACCUTTSYRYDDOILVQQWRECISDQGFKLEVJZHUBZZIIEFCVLAOGHFVMRXXQTMFIV");
    tmp_msg_0.man_type = 40197U;
    tmp_msg_0.man_eta = 1260618596;
    tmp_msg_0.last_outcome = 240U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("YZQIROSGRSPLVNHULHYDFD");
    const signed char tmp_msg_1[] = {-76, -36, -77, -48, -105, 110, -80, 119, 83, 80, -107, -93, -41, -56, 37, 115, -17, -16, -98, -20, 112, -51, -100, -52, 100, 98, 38, -59, -36, 72, 20, 8, 43, -88, 98, -54, 95, -98, 36, -41, -49, 97, 98, -10, 126, 72, 105, -29, -121, 74, 87, -74, -101, 88, 79, -104, 107, 25, 99, 31, -8, -70, 60, -25, 3, 121, 73, -121, -85, 90, -10, 89, -22, -15, -82, 20, -114, 6, -72, 20, 82, 1, -51, -91, 21, 71, 84, -16, -63, -119, 92, 25, -30, 97, 38, -57, -114, 106, 2, -76, 78, -53, 117, -97, -66, 15, -109, 47, -123, -113, -81, -47, -58, -23, 89, -111, 34, 7, -114, -7, -92, -15, 45, 118, -29, -18, 67, -40, 90, -32, -88, 65, -104, 8, 119, 98, -63, -59, 117, -123, 80, 69, 60, 90, 15, -111, -29, -24, -112, -51, -80, 123, -51, 108};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.1866299913089169);
    msg.setSource(32725U);
    msg.setSourceEntity(100U);
    msg.setDestination(47668U);
    msg.setDestinationEntity(151U);
    msg.req_id = 57697U;
    msg.comm_mean = 7U;
    msg.destination.assign("HURDKAIDEGBSLEGNMOBNNYBYEWQVWCSDPZRMDPBHGZCYTPMGLQTGOAJDFVIWRJVOWIHIRXYLMSKZTPPAWOSBGJLHHUSJWNYJGLKXOEFCUPPRPVOCSOBVFSGNIKPHWHCLDXMMRQXAJCAIWBGCXDQTLYNNDZCFMDAASKCTUXAZEUKIZAZAUJKIWQYKXVYUMVQUH");
    msg.deadline = 0.6791383117133296;
    msg.range = 0.30226753456016187;
    msg.data_mode = 132U;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("YEXKWGZNFLFRJHJZTOKXVUAPRUVHPNUDSYMPGBRIRBNQYMTXTEFOFWAPLIAWCFCRTZSZKZIYG");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("GIWQVHFDDCWJMMOBVLAGRARABCTFKJVSKMQLIYJKBUNMZERTXPNDVHBDKBFTYFZCFOTPWUMLRZAWQLWDVMLYRSHGNQVNCSGXNZPSZUJAOJXPHXBHJPQYPFXVEIPIPFUZUOEEICNLQTEZHREFRJCYDAAW");
    const signed char tmp_msg_1[] = {6, 67, -104, 115, -17, -52, -114, -31, 10, -117, -71, -119, 78, -45, 64, 110, -1, 47, -112, -99, 90, 60, 15, 78, -30, -1, 96, 20, 14, 10, -4, 9, 52, 86, 110, -78, 60, -68, -7, 38, -63, -91, -109, -106, 85, 70, 82, 56, 114, 7, -1, -89, -43, 108, 30, 126, -78, 31, -31, -27, -103, 52, -29, -12, 22, -94, -80, 46, -30, -57, 72, -92, -84, -105, -30, -5, -119, -48, 47, 39, -71, -124, -13, 104, 93, 81, -123, 125, -59, 91, -59, 54, 23, 98, -49, -67};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.7428465560325509);
    msg.setSource(10366U);
    msg.setSourceEntity(111U);
    msg.setDestination(13259U);
    msg.setDestinationEntity(150U);
    msg.req_id = 58869U;
    msg.comm_mean = 100U;
    msg.destination.assign("WKLNWMPBYGEJEKQPTOWUAETCHHMIIOVUVNXEKLXKMWRZGAYYGSFMOXBVNEBZZDRUJQTIZSBWOGNCJWXSDPLGXPRAVKUTDHYFFSLHVTDILETNIADAKUORQCEVZJXWHZLNQHYIMGEFKUYKXDI");
    msg.deadline = 0.4300343855919708;
    msg.range = 0.11537266834882831;
    msg.data_mode = 83U;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.3795382508388383;
    tmp_msg_0.width = 0.34787155079043;
    tmp_msg_0.length = 0.8200850319032466;
    tmp_msg_0.bearing = 0.4209198460683107;
    tmp_msg_0.pxl = -351;
    tmp_msg_0.encoding = 136U;
    const signed char tmp_tmp_msg_0_0[] = {85, 26, -74, 50, 50, -81, -84, 122, -116, 61, -63, -93, 2, -42, -111, 51, 101, -86, -111, -103, -79, 53, -35, -23, 90, -81};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("LTKTYMPISDRKJTNMBRJVVZDIRQLFZBTJDMEFXCVEWANNQHHMPUUFIWOWBWPSY");
    const signed char tmp_msg_1[] = {66, 68, 108, -26, 90, 75, -83, 58, -58, -29, 5, -13, 19, 21, 66, -25, -28, 18, -67, 42, 5, 113, 89, -20, 72, -98, -25, -73, 98, -9, -106, 50, 92, -114, -28, -11, -53, 76, 67, 108, 119, 119, -12, -10, 116, 120, -57, -14, 121, -25, -28, -84, 121, -90, 11, -118, -128, -93, -82, 77, 40, -3, -119, -31, 83, -93, 34, 87, 92, -102, -94, -113, -84, 73, 80, -33, 85, 68, 31, -74, 5, 126, 14, -85, 82, 84, -12, -48, 112, 37, -45, -65, 110, -58, -102, -1, 95, -49, -64, -82, -110, -56, -15, -120, 44, 5, -8, -3, 55, -104, 61, 27, 49, 112, 26, 36, -33, -10, -58, -13, 121, 26, 80, -48, 83, 38, 110, -20, -120, -48, -119, 86, -16, -31, 83, 110, -15, -123, 20, 103, 11, -115, 75, -8, -84, -97, 57, 26, 49, -10, -101, 40, 82, 120, 73, -78, 77, 35, 10};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.5030107550784325);
    msg.setSource(51922U);
    msg.setSourceEntity(204U);
    msg.setDestination(25470U);
    msg.setDestinationEntity(250U);
    msg.req_id = 55003U;
    msg.status = 218U;
    msg.range = 0.6946150284482202;
    msg.info.assign("KUWUSPYFEEBJPEABZXAFNCGVQBPSNYIXMIPTSDHUOJDPTTWHTNSMQEPZSCKQRFXYEABNVQXDROILGCZYMJDRCXFHCITICNJPLWBKAHNHRHAYLZALZDNSSRCNCUODMRVQZMMJDTFGJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.6523791081089791);
    msg.setSource(8755U);
    msg.setSourceEntity(11U);
    msg.setDestination(10226U);
    msg.setDestinationEntity(71U);
    msg.req_id = 55389U;
    msg.status = 93U;
    msg.range = 0.5257875508053061;
    msg.info.assign("QYGSYUWQBBIGELICDZEZPWKVNXZCWFDAURXCONMXDCSSRLZXGTASVBWIPONDTTRTMWXWKVBUZCEAVITNEYYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.571750119939737);
    msg.setSource(17377U);
    msg.setSourceEntity(105U);
    msg.setDestination(14029U);
    msg.setDestinationEntity(105U);
    msg.req_id = 7574U;
    msg.status = 100U;
    msg.range = 0.30490931379540653;
    msg.info.assign("IKMSGDZYNVOPRJRZXYQEASVDEKOFSWEEPUDLJREPFZBAZJCOHMEMQLARCTJSFDXIBHSYWCWRUCMPITLMNLAHZMMNQKDUVIOPLJNAYDTXKVBCBCTKVOTVRLXQIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.8577047501030989);
    msg.setSource(51362U);
    msg.setSourceEntity(126U);
    msg.setDestination(2207U);
    msg.setDestinationEntity(91U);
    msg.req_id = 7871U;
    msg.destination.assign("ZRAQCGUQOFCGSGWVHKCMVZTGNCOJMNLTUWJLQHXZPRIDGJWPUVUESGYPQOQUTFKXSSNEOPTFERFJULZWBZEYPIPREAEQMCHBHZYVCNBEMETOAIAXQUHKPNJHAUOLCVILDJMTBKFKLRMIFXTNLYCQIDRIMCJNEBSWYVNKLVAZGYVXBSFKAFKQAUOEDILRZMAWZWOHKXBAFJMDXYWLDDGVUCQPHFIIXBVS");
    msg.timeout = 0.25031905210919114;
    msg.sms_text.assign("OQGPGHGSTWEJBCDIWFUECGHISWWE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.2626739749345066);
    msg.setSource(14685U);
    msg.setSourceEntity(129U);
    msg.setDestination(17151U);
    msg.setDestinationEntity(97U);
    msg.req_id = 43448U;
    msg.destination.assign("BPRNQZEOPVAOOAFWCI");
    msg.timeout = 0.7763899671436909;
    msg.sms_text.assign("QRYJSUDXLUOZZFNYRAXICYWRGVISTQXQJDKFWYMSRSETWDBRMBVCGOZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.6828404856326535);
    msg.setSource(33211U);
    msg.setSourceEntity(70U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(189U);
    msg.req_id = 15861U;
    msg.destination.assign("NMLGZSHVKKHQKFCWPBOIUEVXXTRKXTLLQWSHJQAYVUFAMOWITEGIBCYGVHBZOEUGFCOIBMMZXWCASWYPCYZXNTBOJYKECVFLDFKWIZMFIDRJNOGMYFPZXVTSYWLVADDMZXSLQOUUXGCGMJJIXDQTTRAESRHBQOUIPKJUUYNAPOBLPKFPNYCNEGVSLGOKBWJPAUQVGTZJFV");
    msg.timeout = 0.7435073160013316;
    msg.sms_text.assign("FTHONMXJBUQUHTUSJOFIOGAWBGDRVQGCCFYKOFMZIGRGKEMMBEIHHLALIAZLAGZIDLED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.6296791823519763);
    msg.setSource(44716U);
    msg.setSourceEntity(26U);
    msg.setDestination(27958U);
    msg.setDestinationEntity(96U);
    msg.req_id = 53019U;
    msg.status = 137U;
    msg.info.assign("SHITLLWIEBNJKEMUFGDQFQLODAAOELSCPCSNRCEIJJOBLTYZURCYRBISJWHTZWDOYGFCYFJLKMIBWIVOISNORTHXQTPAXYKBTEFIUNTPGWEVGDYSDFPGXVZAZEAVGUKCGHGWWEAZPRMHVJHRELRVYNSNCXEYTCJBSGUFOKVLHWIPAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.7233155186295283);
    msg.setSource(28240U);
    msg.setSourceEntity(165U);
    msg.setDestination(38058U);
    msg.setDestinationEntity(141U);
    msg.req_id = 25566U;
    msg.status = 21U;
    msg.info.assign("HZECJRVDKXBOOSTXAEQCGXWGYYWXZWVLXHDQTNSUGGJVTYYAGMFWCZASPXROSIBOSTRYCXDXAUISYFEZSBCKJIHLQSXRCBRVNOPKUFFFURQTOUWNEKPOKLKIZUDJTZGIMCMXFAWQLNPRTFQVZMQHNDOAJRABVWSYPKHDQKIERLYJWRCNMTVGQDJVTILIPWUPLOIVBFGZYMLDZQNHIGGJMPTDUHPMUAAEJYNWEBMEVFKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.022028915172387364);
    msg.setSource(60746U);
    msg.setSourceEntity(144U);
    msg.setDestination(20555U);
    msg.setDestinationEntity(58U);
    msg.req_id = 36217U;
    msg.status = 218U;
    msg.info.assign("WAEBGDGQFWBYMBTLWAZUOCIJOPSMVBYSLTOCCYQECHEKBGVGRFJBHUSLRTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.20091935997858867);
    msg.setSource(2195U);
    msg.setSourceEntity(189U);
    msg.setDestination(46867U);
    msg.setDestinationEntity(20U);
    msg.state = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.16370690614108518);
    msg.setSource(21710U);
    msg.setSourceEntity(185U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(58U);
    msg.state = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.5173203251381034);
    msg.setSource(6852U);
    msg.setSourceEntity(120U);
    msg.setDestination(19571U);
    msg.setDestinationEntity(141U);
    msg.state = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.6619591517014549);
    msg.setSource(47501U);
    msg.setSourceEntity(7U);
    msg.setDestination(55384U);
    msg.setDestinationEntity(235U);
    msg.state = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.3576871538106573);
    msg.setSource(34283U);
    msg.setSourceEntity(235U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(63U);
    msg.state = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5449479792560893);
    msg.setSource(9854U);
    msg.setSourceEntity(33U);
    msg.setDestination(50195U);
    msg.setDestinationEntity(108U);
    msg.state = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.5403604500679127);
    msg.setSource(24039U);
    msg.setSourceEntity(66U);
    msg.setDestination(48063U);
    msg.setDestinationEntity(217U);
    msg.req_id = 60251U;
    msg.destination.assign("ZONQBIFIKDGLCKLQEEUSBBRDDAWPYLXCZOPNZCBKFAWKWPQHRJRXTTCHNPMXNUEAMPEIXAMJMSATHCASOCFTFABGCKLBUEOLHJZPULTVRGWWQVDRZYSNTSICZSVWVLUMEQXCWDKYJFREYNQGSGKYBBMPHVGXDVXRDDUIOJLVWEYHMPJRNQMLF");
    msg.timeout = 0.99314377282645;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 188U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("MOLKZJXYWIUGCDJVFWACXBQCSRVYDMCVOYTQXASEEBTBEZFYDKBFFRRNXASCDVNRSPSZOAFXEKCQVUMBMWPKHIKTVHEHTLNJYKPYLPIAQUIQCWLBUYHNZOCTSVXFMRQMQJODARLPK");
    tmp_tmp_msg_0_0.description.assign("EKFUOFUWYLCYCKXZGJEIBJILKWEHYPMDQWDPPACZBVIOXGFHLCTKIPBBSXAUVGJMZHZZXODVJXGHSLJOVIOFHHOGIVLNADJTCBDUGRSUJNLWTTKRADHBVTOXOCAAWTUGRQYXPYQMEDXZIH");
    tmp_tmp_msg_0_0.vnamespace.assign("OQRWJMFLUNUARAYMZFZDPTJKLEKWRYNIHPWKOFEOSGVSUVRPPOIHPAWOMIJLJTWNQEYIKDCKHPHETGFXCXEAYOOSESTODMGOCXIGUVYKGGHBUVZJZQXUVXLUWXLSGRFKMQXBKRTRAYOTQUWQVRJAABTGJVDBBYPYJUHBNTARSQATSCLGMQBDQXDLKDHFEEHCIYFNUENSCWCSLXMHTNNNYIHFPAWBZEGCZIMMZFPDQRWPIMVJFVBDDBLC");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("JQOFNXSTMABEYRSDOCVTPTPBKJSGMJZEVGNAETEYSSQXKOVIBJVDHQNOIGMQFONUAPNZIXWJJKROFPCBRGDECUUSWXWLDZZLTHPMLFQOVRFOGWDULFMOCDUGZAXIYZCQWQAWUZWJYEAVCNKAVYGBKMZIJDTCHYXXDTKHQQFUOSEKIPDRHWVFHMIJHTZNEXBYQVRPLERYCWLILSZKTGJMLGRKBWPLAVUUCIRHSIBBPHXTYYPUNEBNLFKG");
    tmp_tmp_tmp_msg_0_0_0.value.assign("KOGXBLWZVWWCBTHHVDVYZLTNJGIGDNSRLRWPNDLYAYLHMMLMJZXYBFPUBYCIUFKVNAORCNDEQQLDGSOJEWNVKBMWCJOYGRZOQGKFUZPFWIEPQCIOBXJCUEHQGRXBINEQMMHOVKDOARSJVXIHDTCTQGTPXESXNPDMKMZAUEDFXDAPUSLMRPRKUKXCVEZSVIITEVIPAHYKANRWTJ");
    tmp_tmp_tmp_msg_0_0_0.type = 207U;
    tmp_tmp_tmp_msg_0_0_0.access = 35U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("UDVFBIANPYBDJFWFZQXKNWYWSOBARWWKMEEUXUVXTTIOBYFXNNPGJRZIFJLYZREKEWUHGRZJBRSOIRGDWOHRLTLETIEQNQYWMJPSUEDPGVUFKVCLWMMBTOKJDMHAJHKCXILKZIOHLJMASTTHPARCTXMNVSJOZWCZCRLDAUYIQVYGCUBSSFGYXPDBHIQJDMOHHYCQGQDKGLCKSSPVGFYEALC");
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("TKZTTQUMHMSZZLYJWICTXHBJVVCMRHESKLYKRZOSGYY");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("KTIMSONUPBAUXKDJIESTLZUVTCREPQZRMLTMRPFIKWWRFEXGNVWZLPBEPZNQWVZBXSROHYQAJHGNBEGHBZZCOINYQVFUUKPAIGHDSZOCDGUFUSLIYGBFUOOELKGYHAXPMYX");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("GQGAYIHWWZDNEXIDQVPOVTYHMQFGVUFLKGESDKZIUJPTFAKXREOKWKUBMZZURBLGDEZNFQRFTEIBTSJGPMSNJHRZKLMOVBYJNOYRVCTBUPHUKAHDCPFPAGUQOABSITWXOFWPELDBFXENQMAYCNNCOOXYILSDIDQWQRMGEPJOYGXZVFCCOLYJZUHFCATTAJLNKAMMMPXE");
    IMC::EntityState tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.state = 58U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.flags = 86U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.description.assign("JOWZNBMELQGGEYNMILOIWYURVCSUWXOTJTKTNJJGMORCPLTVYORFQMHQQUIUQWBOIQZPDJZPGBQJNPNJIYYGZGLSIEUPJLDYJNCHCEZZBAGSFKVHEKTDKBTFXDYUKXHVEWLUVKDZHFIXZDQSQXWFCEEDIRNEBFXAAVZKFMSHSWSTRYGSCACJXTCGOUALNAFVQAPNFMXVVHPDBOORVPMMRSGMRDHWKASOUWBBIPEZPM");
    tmp_tmp_tmp_msg_0_0_1.actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.758673033021126);
    msg.setSource(51867U);
    msg.setSourceEntity(92U);
    msg.setDestination(27413U);
    msg.setDestinationEntity(50U);
    msg.req_id = 5018U;
    msg.destination.assign("YUKSZGVXNUMAZALWRJHWBBMDEPIMXHHNEYXHBYBKTUKQPIOYFOXKHJPPJKAKYIYVONMTEZBDPMSGVKTARHJJDZMWUFHAZLYGZWXVJTBSCFEARIVJBRZOIJTEEDUCLCPJWIKAYASSIZGTONEDQQFNGFOTJHEKSLNRGWGCLRUXRPODSUOSOTKVCLXDVYVQUPLQHLBMANIWEWDRQNNUSTPCRPXFAHCWFCBGEUNMGTZQCLOFQGXLSVMIFMZ");
    msg.timeout = 0.0500938706910844;
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 113U;
    tmp_msg_0.mode.assign("XCECGYFFPXQWTBJSWFLQZCQSUIIMKXEMHKMQKQDCVBBHNAOSWGBDDWQVJDZPGRCFMQGAZVXVMCIQZCAVOSTIDRPAYLLSJYGONPVUIXAXTOFGDLRCKAADOLKBF");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.3087337325149707);
    msg.setSource(27708U);
    msg.setSourceEntity(7U);
    msg.setDestination(24491U);
    msg.setDestinationEntity(96U);
    msg.req_id = 63903U;
    msg.destination.assign("QQDIWIVTZYKKXIYMFKOMACSVWZLDZXTCHOUUHEUSPNRJSKZFYDIKMRBYFHJVMRWXCNGBSWEJLLEXTWGURPMHVQYTGFZHZNNSXRCRAHEPNZYWWUVSBOWSNAIQPMLEYLMVUNCLTTQMKDRRGHSBLBDXAOAODDAD");
    msg.timeout = 0.6798021251144148;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("BMYGAPQIHIVOOJLNPEVLKASGZOSMYYJLATKQNXWKFOXONDXIROAEPSUNIUTAYFCLURNOEIBIMVGCJLZMTDFFEHNPQTZCRMLXAKWRYRDEBYZIWPQOGFUTPASWWCKTQYBEBUUWZBCMQHSTRDDZDZMPHRFKVQPUGQDDGFLRAIQJKHOKVYFFHABLTHWEERGJXMWTXWN");
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.2509896428270415);
    msg.setSource(27174U);
    msg.setSourceEntity(218U);
    msg.setDestination(13912U);
    msg.setDestinationEntity(51U);
    msg.req_id = 18817U;
    msg.status = 217U;
    msg.info.assign("YGEYWEXTVSDEMCHHFBWNVKUXLDYDWFAVDFRRECVEUGLOZQJJWANTYSVRLQKBYFKGCNQYCJUJZATCNWSFGVIABAOSJZLLHTDGRIOUPLLKNHMEBZUWPHLREPTPWESIGTHYHQTJKJDDCGHFNJQMDIUBOOFGYMXSHQNIVMOMYGXIZVPWOTKFBXVAEBXCSEIUWQJYPBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.369522858051636);
    msg.setSource(56382U);
    msg.setSourceEntity(10U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(34U);
    msg.req_id = 37289U;
    msg.status = 159U;
    msg.info.assign("CMMORXKEOLLYZHIUNYTDDXFPJGOSIXYWCVGGFHZRLTYBKYMAGAZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.12934266658486504);
    msg.setSource(35750U);
    msg.setSourceEntity(72U);
    msg.setDestination(12301U);
    msg.setDestinationEntity(35U);
    msg.req_id = 10667U;
    msg.status = 25U;
    msg.info.assign("ZPGHHANDFOVFEBJXNPGKNKWQQXMJIMWHGQHOURYQLNZXPUIECZIUWAIFUTDGALNLNUYOZXSTMPBASLKMCMGAOYCHEULTZMRGFHVLXTWITKUTWHLRNDNNOKHKGXXXDFQFJJPMVPEJOYKWYOBAJSZYDMCUOVAVLSIIQMCBKIQFVJSEAAYBWERNACBMBOQZSPDPLCFGBYDRZS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.6647638052178116);
    msg.setSource(2755U);
    msg.setSourceEntity(230U);
    msg.setDestination(34433U);
    msg.setDestinationEntity(3U);
    msg.req_id = 50268U;
    msg.destination.assign("ZEFBMNSYJMAEJCLQKAMGTTXDBVUSFBFOFPKSJHDJUMEJCIBWRVMRLCQXQIOPSABMOZGQLNHNTYFGAKUZQDLJVNWXFCIWCJQIIIHRZLGSTHXPOATRKWNPKAOUNYCKGXQYEXWYOEVLNM");
    msg.ttl = 12355U;
    msg.type = 224U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.2772152893617408;
    tmp_msg_0.time_next_service = 0.23157262817080904;
    tmp_msg_0.time_motor_next_service = 0.8950225014413611;
    tmp_msg_0.time_idle_ground = 0.4892627899601265;
    tmp_msg_0.time_idle_air = 0.5459578194448091;
    tmp_msg_0.time_idle_water = 0.6222383984287574;
    tmp_msg_0.time_idle_underwater = 0.34320452932818324;
    tmp_msg_0.time_idle_unknown = 0.36562844007025785;
    tmp_msg_0.time_motor_ground = 0.37420555631595365;
    tmp_msg_0.time_motor_air = 0.0073318657256675746;
    tmp_msg_0.time_motor_water = 0.8385591969657749;
    tmp_msg_0.time_motor_underwater = 0.492924774762455;
    tmp_msg_0.time_motor_unknown = 0.21695901098018955;
    tmp_msg_0.rpm_min = 17270;
    tmp_msg_0.rpm_max = -10624;
    tmp_msg_0.depth_max = 0.27299839727362785;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.9702790498440709);
    msg.setSource(47625U);
    msg.setSourceEntity(127U);
    msg.setDestination(60829U);
    msg.setDestinationEntity(190U);
    msg.req_id = 55671U;
    msg.destination.assign("ASOBPSZNCMVJCQOLLGFENUDUARMORCJWYVBRXKYSJSFQNZCVLQKTBKF");
    msg.ttl = 30487U;
    msg.type = 181U;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.49795903469426805;
    tmp_msg_0.lon = 0.09736346397797635;
    tmp_msg_0.height = 0.24633101823481118;
    tmp_msg_0.x = 0.5514116746796656;
    tmp_msg_0.y = 0.038509628454474476;
    tmp_msg_0.z = 0.921078418517649;
    tmp_msg_0.phi = 0.04561809432865638;
    tmp_msg_0.theta = 0.11330817106024849;
    tmp_msg_0.psi = 0.2863749206216163;
    tmp_msg_0.u = 0.42313092987999124;
    tmp_msg_0.v = 0.5115984232108213;
    tmp_msg_0.w = 0.7777659374365004;
    tmp_msg_0.p = 0.6486877331571304;
    tmp_msg_0.q = 0.5209350768394425;
    tmp_msg_0.r = 0.8287858020317902;
    tmp_msg_0.svx = 0.7062446330753038;
    tmp_msg_0.svy = 0.5037787268582347;
    tmp_msg_0.svz = 0.06691238018926327;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.9468374380537203);
    msg.setSource(57271U);
    msg.setSourceEntity(10U);
    msg.setDestination(12545U);
    msg.setDestinationEntity(2U);
    msg.req_id = 15369U;
    msg.destination.assign("RIODWUJWDHV");
    msg.ttl = 52753U;
    msg.type = 75U;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 19U;
    tmp_msg_0.goal_id.assign("AKNKBWVYOXTGHXKTAYUNICUTBPHTAUUQGUBTLBDRVBSOXVIWORCNBVTNRIKUCQPXIMNQHLQKZTFDFDVETSFGPMACDYNNMWPGYZOYXRECHKYTRGJJDFLDPPSGEDKYZZMYRIOJNVEZMLEDVBHQPLWJKCVHEBIATGRWNDQLWAFQPPIWAWKLMSFEFJSRQXSEDSZYZHLVYAJOFEXUJHWJCGOOWZGIOMXSZQXSPMAHUCMJBLNULHGXKIFFIE");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("QKUEHNMQWWRVB");
    tmp_tmp_msg_0_0.predicate.assign("GBRQAFHXISSOMBEWMIDMFDUNGWRGJSUFDDPTRBTWSHHUPDMCCEZKNXZBTPYCJIGAVNLYVLZVHMHUZKBRTMELFSAYCAHKQDLZBACDMIJXRGABABOXLAQDXRQPVILJTITJQPDRMKVKCMXWZZANVUOWYEWKCVFPOSGSEUISDEOTZYOWXGOEJSIGGCFLUCVQPORTCWWUQREROPNIQTNBNQHFUJKGFPBNHLNMYKHYLEHUIVFPJY");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("HIRREIPVGFXHWOSHAHQBQJTDWKOQTYPBXUMAWMGFXCCOEBGHXSMULTTZMNRFJNVCERCFVHLDYBBVUNTABWIRWCRKKQXPDVHAYWLUEOBQQVKMQVSYRFEOXLLZQLMBNXMUGBJMOZTXKHUNPEARWSRLJAYWVCSVDUZGIFXSFIMEWHNKDTCKPASKO");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 20U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("WGWQPNLPVCVUCZIGCRQPRXMQYXQEEQNXONGOJPIBDCX");
    tmp_tmp_tmp_msg_0_0_0.max.assign("TYBRHCXUBOHKGJRGFHQENNZIOBYOXXDL");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.8355932212492654);
    msg.setSource(55576U);
    msg.setSourceEntity(35U);
    msg.setDestination(49064U);
    msg.setDestinationEntity(204U);
    msg.req_id = 47501U;
    msg.status = 80U;
    msg.info.assign("ZDHTJIBPCHYPPXOLFRDQUUJZDWOOEEPOHEIWZWSVIJXABISPBQURNCIQJUEXJZPZTBSMTHYVCSSHEVKYYMYOCLRGHA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.3941667555711539);
    msg.setSource(64254U);
    msg.setSourceEntity(241U);
    msg.setDestination(339U);
    msg.setDestinationEntity(174U);
    msg.req_id = 41555U;
    msg.status = 97U;
    msg.info.assign("QTCEPKWBTXGCZHOPKVDJOIERVGHCCLFVLEKKZVWFSZQDPPJWOBYBREXUAIRAYYIFXFENXNLNDTPBSSTIUMLVGHTLAQSVMSRDAUJCEJNWZQSLGXDRLKFSFSDXZQSHWTVUTIVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.9732988908099566);
    msg.setSource(1435U);
    msg.setSourceEntity(179U);
    msg.setDestination(17138U);
    msg.setDestinationEntity(62U);
    msg.req_id = 56951U;
    msg.status = 215U;
    msg.info.assign("NMIVNDMIEUDGNZFQRSVTQZLJOYZJIPVWVRYLJZUAADHXEZXMUYLBQMPSCSHFOTTECJDVFMZJHWVXRWTGXPZFYSRUIHKMGEXSFCTVWHGREPPFOQCHZKKOCPVTAYTBUBUDDBNGBFEGJNLWCXULHRAALYJNXYLGHRVJTGADEMIBQIQRXQFQLPWIOEMLZUYWAYBVEUI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6311254562027037);
    msg.setSource(39213U);
    msg.setSourceEntity(197U);
    msg.setDestination(37611U);
    msg.setDestinationEntity(251U);
    msg.name.assign("LDBBYQPAGQZXNZRHDYKLWTBEYTDIOADEXIYMOVKLHGCPMRXSTVBUKXTMGBKNHGIQUUBDEGIRSFLDWWAIETNVJCAJLLAFIHJKVJMUHHFWYPMFFGREAFMQWXKCQPOVASMRIYNULOBOZHCPNVSTQBKFDJARLUVW");
    msg.report_time = 0.048765037141526024;
    msg.medium = 67U;
    msg.lat = 0.11169357361277332;
    msg.lon = 0.8729250705094301;
    msg.depth = 0.04045045245758494;
    msg.alt = 0.8386131802222135;
    msg.sog = 0.023619257387074932;
    msg.cog = 0.42796160409730155;
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("BCVJVMVHBDDGOYUQKMPWYZUIAPCDKGVTFZDLXNVGABAELKOAP");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.5862336341876299);
    msg.setSource(46553U);
    msg.setSourceEntity(105U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(87U);
    msg.name.assign("DIQADYFMBJRWDMAPXJDQFLUXBQQHYWXHSGGTKXGRMWLLRSXEAEXPBUMYVSIVXSWXPKCISYAPZNTYRNLZLOBYJEKOGRSMGADYQIVVNKTHZDLZKBMLTDQWCDUKUVJJGLNMWFQZHIPFAVKFOKOZFCRVBETKBHVUQGEFTTCVJIZFFOCE");
    msg.report_time = 0.13208351472065738;
    msg.medium = 4U;
    msg.lat = 0.8571827726667881;
    msg.lon = 0.7139185364045275;
    msg.depth = 0.19102150162049225;
    msg.alt = 0.9213906385578259;
    msg.sog = 0.7115072478230501;
    msg.cog = 0.05108607960207956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.5277590203813122);
    msg.setSource(62577U);
    msg.setSourceEntity(227U);
    msg.setDestination(19444U);
    msg.setDestinationEntity(21U);
    msg.name.assign("QFVORJFXGRJWBHBAYXTLWGOPFQNLOCOZETVAXKCOWPKQEMXWJAHXWRXCLVCLKEUELVQDKYZNJUAEDZYQQSIKUOTXIRGALTCQOTOMYBUDYWHRRHLGHMCDIZIGVRDGZFFDKNVFANIEXLMIGGPRMBXUTGHMUNIZEOZLSDCMRGNFPUSSINNTHBFEHWJPAEQIHFAKS");
    msg.report_time = 0.8612245613535648;
    msg.medium = 106U;
    msg.lat = 0.3565234952039551;
    msg.lon = 0.734251698343168;
    msg.depth = 0.5161758801331958;
    msg.alt = 0.522576632128586;
    msg.sog = 0.5919753203227418;
    msg.cog = 0.7425121564252807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5122151612643231);
    msg.setSource(12117U);
    msg.setSourceEntity(172U);
    msg.setDestination(48216U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.13730428121795102);
    msg.setSource(44314U);
    msg.setSourceEntity(111U);
    msg.setDestination(24249U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.8613523593357866);
    msg.setSource(21797U);
    msg.setSourceEntity(49U);
    msg.setDestination(7203U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.0439460212658096);
    msg.setSource(38676U);
    msg.setSourceEntity(129U);
    msg.setDestination(31132U);
    msg.setDestinationEntity(220U);
    msg.plan_id.assign("YZIUDVGJJCEIURKOQOOXVFMXWXETPOQHXNVTZASPADWAVRLHMZCUWBBKSKAYGQBRPGBPXHVJNYQYGPTCOAYISDRHIMRRUQPWEITYEVFMIOEADMGFFRZVTYLGTJDLWDDXZNLCEHUQINGXFYLQRGBCXMXHV");
    msg.description.assign("XJMQYHGJHDBQHKYRHIGXNEAUTZTTPKMHMUIAHUXGMSCPVQDJTLYNKOKZMZEORUVJISCADQTSSCICUCSBSPECLDWGWWXXYPEKYWYTXNJYRUWALJAAFFPKWXQEBLOVHMFDCATDNKUFRTVBGLRGKVXWPCWGBGPOAEQCAUDNELSPFPDXFZOQTZBRVSDWEXFIRNIFFLUAMNZFDEGSEZYMQMZKLHNPHMINJVORYOGJCVBZBLYORQVOIBSKBLU");
    msg.vnamespace.assign("YTTBQPXFTMHDMZYGCSURGKVSAJWWUTEYUFHHQZRUFIKBIXIHGUVCYEMQBDAWLCXPGQSJGSHWZNMUMIZPNVPUNDSJYFLYBOQMQXNBSJGMRKOJKCGXPWTAUPFVHERBUBBKIFRZYOKJRJAWCNWPMALAOOCESTEFQSCXEZDOMNTU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("OWBOXDMMCSAIMKHKPADDOJXVPPKTWFABJVQIGYEHFJJPJWXCELXVPSEVNRLTSFDOJKHACXMTYQHXKOWBJBNWDZGAMEFQERMUVZRIJFTPGBNTICSRHZFRPZZKKULMNZCIYBYWLNHAUMQBQUJGHHWNTKVNCSCOYWOSGIGASUUZSLNSFREXLTTXKDHVJFULIWRDBXPDRQPETQYKLNUUEXAQISFGFVEGRCIM");
    tmp_msg_0.value.assign("ADNHBTYMXRYNBYXZNBAMQRCWIGARLOCILAPRFZNSAHCNUENAOWUGEOCHHOOXFRKUOMZKCBCHITDAFEMZH");
    tmp_msg_0.type = 163U;
    tmp_msg_0.access = 113U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LLCJRYVTVNOACTSFIRXBBYIBNTVKQHTIOJBVTJQXCDWLOWLIJGTXQYYGLLNPAWJKK");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WXEIGNSNDUWUSJKGWUKGAOPYHLJGBDEEVJVVWYNWRGKIZAFCXVFFMRKPIGUNCDOEOLBNKMITWPTWEEZSSAHITXOIPPSOGVJWYCRABHQOASQLTOJTCBVRMCPZICAQYJFXHQOUEBRHDWQZNGPXHKRLBMLUKDJVXHLYMFCPKNPADHTF");
    tmp_msg_1.dest_man.assign("ZAUICSWHREIMSEUVLVLHBTUCXWYDSQAUOCKMPGPXGPOFDOSUNBQPZPSXBGHCYWUKDIBYCJMQIGIWUFFDLJEXQEYLJFTVGTOZZOPLCHUDTTTMEXNTNBVGTAPFXAARRQVIYINZ");
    tmp_msg_1.conditions.assign("SOTHTBNRJCIUSPCVPILFVJFMPZKLEMGNEPOTIWWAENZCNNTXHOFXRRIHBBBTVDSYURVSOMILFQLGKFYMVAEAOLDNYGQBQPKDXCJLBVSHAZLACLSKJRFAUKJFUUZBPJPNF");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Takeoff tmp_msg_2;
    tmp_msg_2.lat = 0.23750193362632022;
    tmp_msg_2.lon = 0.2315897420026498;
    tmp_msg_2.z = 0.6338992693278426;
    tmp_msg_2.z_units = 126U;
    tmp_msg_2.speed = 0.8101919673337176;
    tmp_msg_2.speed_units = 110U;
    tmp_msg_2.takeoff_pitch = 0.11936273036629819;
    tmp_msg_2.custom.assign("QBWHKVDEXIWQDVBRNFTQGVOTKCTELLZMPVAFWAIEQIVKNDCLBRNCOCKBXVAGHJTFKRESVZPNCPYSMNMFMUGKPKUCLJRBJXZZBFMABMMJTHXXYXCAODUSXDJHHEQQGEYPULDPOSHDOSXMZCOSYJZCPEPWNGMXRBFAYFSICQPLOVWYXDIIAHRGAWTUZZOVELJQVEKUAZYTFWGADLHTBWPYQKLONSGIRFTIQJMTYNKJFUYSWHGRJSNWUBU");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::FormationControlParams tmp_msg_3;
    tmp_msg_3.action = 87U;
    tmp_msg_3.lon_gain = 0.27017747017354843;
    tmp_msg_3.lat_gain = 0.7437178910807024;
    tmp_msg_3.bond_thick = 0.8290381679196445;
    tmp_msg_3.lead_gain = 0.6892815286761711;
    tmp_msg_3.deconfl_gain = 0.05974518005967855;
    tmp_msg_3.accel_switch_gain = 0.5871908526470023;
    tmp_msg_3.safe_dist = 0.8502153580973324;
    tmp_msg_3.deconflict_offset = 0.41053181953680107;
    tmp_msg_3.accel_safe_margin = 0.8336280459014277;
    tmp_msg_3.accel_lim_x = 0.5364533485542621;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.19572841546632758);
    msg.setSource(45086U);
    msg.setSourceEntity(12U);
    msg.setDestination(5426U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("JKJDLGDWCNBZKSBONJJHXMARNANAOUVVZJGMOXQ");
    msg.description.assign("IRRIEJATJHUGJVXGXLBIDQZHKCXHKJHFGBWVWYJAAWVGXFCTXPTRBMKTTXRBGLYIIDXHQZMDYCVKYONLCCZVJOESWTVOSAMWZHCUKSEXQGGMEWWGZNIEDNBDUQNEDHDBONCPQRSVGURCOMIBKTVAUJSPOEKEFOROSQFFZLYDGSRMSVTWAMPUSWIZMFZIBPHZLAFFQKNQUQEAPULLQJKFYDNCYRZYNAPUELWRTFMLJYIVSHT");
    msg.vnamespace.assign("WHKKMGPHYAXOQTEEASHRZYLCQDRQTEZYUFWNPAGJDDYAJKXNTPUFBW");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LYOUJSQLMJTQQROENIUKWHFFKVDKTEREERCPYSCFSFWCAZPXYWYQIMPCBUSWJQARRWIGFHQFNHGSATAHUPKUXQOFQKGDBGBSXJVXGLEMEJZZTFDRHADDYNYOGENXXUHCMWLDLZTUBBMMGOLHRXVUHNVJMUS");
    tmp_msg_0.value.assign("BSLZXYADYQIDKVFUOONWKFKAUTMEYBRVOMQGECBUNMGXZTHXOMCOABWLWMHFMWPIZPVLXMNGJDKYQODQ");
    tmp_msg_0.type = 85U;
    tmp_msg_0.access = 63U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FGZTVKWEWSALICOPAKZHPZPPYYSCMLIZEGKMMKEKAXHMFREYQUGCDNZTHLURAADNJUDRRBDDDLRZFOGAIDQWCGVYAMENRUQMQMPXDZLLSBZRDJDIXLWJBFOGAOSQICWBOPXOXVTXTEYMQSHOCGJXVUBOBFUFLYUQRJYSTVV");
    IMC::Redox tmp_msg_1;
    tmp_msg_1.value = 0.41061060030195706;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UsblPositionExtended tmp_msg_2;
    tmp_msg_2.target.assign("SLNQYZNQBJCXHYIIGXMUKPEDIHFXEMMOZGDKYXMOLFNQWJHKUJZEPSUGXULTRITZGUABZBNJRTDVPCCFXSSEGVBRV");
    tmp_msg_2.x = 0.6899080954259541;
    tmp_msg_2.y = 0.2333213920539633;
    tmp_msg_2.z = 0.657285715495774;
    tmp_msg_2.n = 0.5144616963531605;
    tmp_msg_2.e = 0.5114399025152387;
    tmp_msg_2.d = 0.246365559906776;
    tmp_msg_2.phi = 0.3406868294242045;
    tmp_msg_2.theta = 0.16307273702500635;
    tmp_msg_2.psi = 0.6325949930876357;
    tmp_msg_2.accuracy = 0.13173407362981016;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.649607290796439);
    msg.setSource(64317U);
    msg.setSourceEntity(250U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("THMIAXMZCHHTKC");
    msg.description.assign("MKXEGLMUKGKQNNBBYMQLZVQFEHUJHMODYISQXNVCARNUAKDSJPBXMKSIOFLZPHZYLNFGPMWSXJGOHYACEZDYNDSAFRVDWWBVRBNWCMAZDXSIGOAGEMFJTIJPIIYLEKYQVJKJODW");
    msg.vnamespace.assign("HURZKTMXBGIHTHINJCUFWGOUZQNCHAVDUFSQIZBGNLLTSCMERMVYEEZWONLJFKOLPPVYBTKELWIRRHBUKNGCZLUEREFVWGPAYDZOUDEHYVFKPRWGKPSMSSVZHYBOVIRGJIEGOYNDTNBAJQA");
    msg.start_man_id.assign("LYWRZFMIXWEZDZOOTYDQLJVLMNSDMIGCX");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.7041819028480298;
    tmp_msg_0.x = 0.08967641572988849;
    tmp_msg_0.y = 0.5420844741950459;
    tmp_msg_0.z = 0.09707918305429186;
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.20183479028480877);
    msg.setSource(56019U);
    msg.setSourceEntity(42U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(54U);
    msg.maneuver_id.assign("LVXWGMFQMMMOJLYRZSUOXCNADRYGTDUXYAKQFWKBTITCHDJQEJFKZURZDJVGZVAHAKKOCTGWRJUJQBVYCGERPVELGPPBIABPUDODULKPJEEFRHMVMZLWUSJIKYANURGMEWEXR");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 50530U;
    tmp_msg_0.lat = 0.02426747953302899;
    tmp_msg_0.lon = 0.09159444866393951;
    tmp_msg_0.z = 0.5216971930741131;
    tmp_msg_0.z_units = 163U;
    tmp_msg_0.pitch = 0.5337744179519038;
    tmp_msg_0.amplitude = 0.08425573592872604;
    tmp_msg_0.duration = 22335U;
    tmp_msg_0.speed = 0.7930614290282562;
    tmp_msg_0.speed_units = 153U;
    tmp_msg_0.radius = 0.6469139768136142;
    tmp_msg_0.direction = 225U;
    tmp_msg_0.custom.assign("PNOPMLXGREQXRHQHGKALMAEDVRSTLMTKPVKVFKSSZDLSZUDXKLNZYCZTJORWJKNRLXWGJYQUYCIAQUGVAWIIKDWHUUGHCPIIYMOSUROF");
    msg.data.set(tmp_msg_0);
    IMC::EulerAnglesDelta tmp_msg_1;
    tmp_msg_1.time = 0.5233997375879954;
    tmp_msg_1.x = 0.08337384746511867;
    tmp_msg_1.y = 0.6198724059449899;
    tmp_msg_1.z = 0.8162854630767186;
    tmp_msg_1.timestep = 0.4271085104455411;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.365093175170088);
    msg.setSource(56003U);
    msg.setSourceEntity(117U);
    msg.setDestination(49536U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("IKRAVRDOENVFTZRQEREBGRYIAUZYYOMVNWYMSGZENQQDJVTIFLCSPJONVTBILABAWLCFQJQNOWVGCSHNYCCETMZLMQXACPWBPBALGKLJZFMAMOEUCUXEKKIDMPSQTUE");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.46991310064576286;
    tmp_msg_0.lon = 0.33471452927294676;
    tmp_msg_0.z = 0.44990916597133923;
    tmp_msg_0.z_units = 64U;
    tmp_msg_0.speed = 0.3082512477168613;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.abort_z = 0.7110877306209561;
    tmp_msg_0.bearing = 0.5775182877324289;
    tmp_msg_0.glide_slope = 248U;
    tmp_msg_0.glide_slope_alt = 0.8955854640491293;
    tmp_msg_0.custom.assign("LNGRIHYMSDHPWSWYETVIIGNZAJKIOFTXNGVUQFZSADAKFWBRLPLNLTYQPJEBSZYXKDEXGUECLXYCCFMEBHFOBFOVNUQIPUESJOZHTAVTRRSVATNDUYLLQSZCMKLOZQJCNAKSJBHBBUDIDRJNGKIHRRIXOYVQG");
    msg.data.set(tmp_msg_0);
    IMC::CompressedHistory tmp_msg_1;
    tmp_msg_1.base_lat = 0.7201877223175712;
    tmp_msg_1.base_lon = 0.4056473237206044;
    tmp_msg_1.base_time = 0.40841119720412455;
    const signed char tmp_tmp_msg_1_0[] = {104, 29, -14, -97, -88, -4, -46, -40, -125, 26, -62, 54, 99, 70, -56, -128, 30, -43, -95, -69, -100, -51, 113, 12, 17, 52, 59, -31, 96, 9, -89, 108, 24, 112, 72, -66, -34, -65, 59, -49, -99, 87, -91, -61, 38, -84, 1, 2, 33, 56, 28, -48, -112, -59, -91, -9, 32, -99, 86, 18, -91, 95, -5, -27, 16, 66, -31, 90, -90, -101, 52, -85, -93, -102, 64, -99, 33, -45, -114, -16, 125, -5, 111, -21, -110, -28, -39, 31, -67, -24, 105, -37, -11, -95, -4, -91, -121, 48, 60, 121, 26, -69, 122, -97, -28, -7, -88, -2, 125, -23, 7, 32, -77, 30, 7, -53, -71, 12, -41, -36, 30, 57, -56, -90, -66, -102, 0, -67, 52, 12, -75, -126, -60, -113, -66, -71, 72, 62, -1, -18, 52, 6, -70, 12, -121, 63, 64, 61, 77, 27, -12, -81, -11, -83, -85, 70, -54, -69, 29, 36, -110, -84, 114, -36, 108, -47, -82, -70, 117};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.37485481797612596);
    msg.setSource(26784U);
    msg.setSourceEntity(225U);
    msg.setDestination(21665U);
    msg.setDestinationEntity(211U);
    msg.maneuver_id.assign("TPOOAYDADMJEFLLQSPUQWIFKOEQOAMPYBFKZUIXOYBCZGKJOUSVIHIDDFWXUSSQGGMQWSIERNMFOMRHXXSBSRTPZTTBBAVXKNYZNQQAHEHHJKNDYRTWJPPVNZDVGM");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 50996U;
    tmp_msg_0.custom.assign("WQOQAOFXTKNIZBCAJUUWMHEUFKRCYKDOLEPGSMLIDHHSVTNZJVQITVTFWBIJKPHDEYJJPPPSDGBBQUTQBVTLEKPFXNDQLNSWWGAYTSBUJRRVIOOYHRQDOXHQXYSHNDVKERPCBATVCRXWMNJVIQSIURZQHWMGJZXUCSUJLUPMGLILICFACXMMFJSVXAFABWZVWBYHAGOFYZMSAECEWAZYKGORGGCZDYNMM");
    msg.data.set(tmp_msg_0);
    IMC::UamRxFrame tmp_msg_1;
    tmp_msg_1.sys_src.assign("GTZYXIMIJAAHMNNOVMDDHDQBGVURSBSOJAUVWRCCNIAHXMNRBZSUDBNNFTBKCMPHPILTLSCPWZPKCPZYWQTFPRZGBMLXVDLBFCLHORDDWUHFXNZIMPOVRKAITEBAIWOAYRYPUJXDKNXTCUGSIWSHUMGBKTENYUZCOGWIYZHUFXSL");
    tmp_msg_1.sys_dst.assign("RBJONUALEWSTOEWQHVEYZHSMRONFZDVHYOXINBMMCZSOGYAOMJDXKVBLFKJDIYAUBHZTGGKCHRYSSFNUOGPWYKKOXOCKDZEQUUZLIDXXILILQYNIXNFHYWKCPLERLJXCEDMFQAXCVSIDHIURUP");
    tmp_msg_1.flags = 230U;
    const signed char tmp_tmp_msg_1_0[] = {38, -77, -120, -99, 8, 36, -6, -65, 89, -51, 26, -54, 103, 109, 34, -40, -25, -47, 73, 45, 18, 57, 55, 51, -77, -81, -87, 112, -56, -68, -31, -37, 85, -112, 87, 24, 62, 16, -89, 119, 41, 24, -44, -94, -64, -52, -62, 79, 116, -124, 14, -74, 12, -87, -32, 82, -11, 39, -101, -9, 26, -114, 96, 3, -43, -7, -40, -123, 6, -123, -51, 49, -121, 4, 38, 56, 117, 19, 119, -26, 70, 119, 95, 77, 10, 125, 47, -94, 83, -127, 82, -82, 62, 104, -22};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9817114292454987);
    msg.setSource(2809U);
    msg.setSourceEntity(176U);
    msg.setDestination(40633U);
    msg.setDestinationEntity(211U);
    msg.source_man.assign("WSRNLVGLLCFFKUXTCGCCOYHSWQIQGHMVNOPTAYKCVRESNHFRUHHJQDBBJNOIYLUBDPBXDPFT");
    msg.dest_man.assign("RNBVJKQWTQJQJRKXLAWBCAANHDKISZCHKBOVUFNOYUMMRTPDSCPSNDJGGLUKUHYWRNEYGLYHNXEMHVFXVBJTQXEHBYWTLMEWQBPSJAUMIQUZDMLWODEWXCLAJIPVTYOGKZV");
    msg.conditions.assign("FZXJQIFYUZGYQJNGZFFLCRPQPVYBKJNRRDTSMOTTCXWDOZAOVXBIAQBUEFLGYKMJWBYAAWLHVEKYNFHTRQTUPRGHADVWIIHCAGLXQHWCBTSKRBREHLEOAMJIIOOIBIVLYUGXWJCMQNVRVSIDSEYLHXWOBSMSRKNUWBJUXQPTPIEGQDYVLCCKNXPLWYZZPNEJGHKECXMJZCGVPHVPJUZM");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9280498452340469;
    tmp_msg_0.lon = 0.29033073813809873;
    tmp_msg_0.z = 0.5420689584224271;
    tmp_msg_0.z_units = 76U;
    tmp_msg_0.radius = 0.667527540953651;
    tmp_msg_0.duration = 43354U;
    tmp_msg_0.speed = 0.019951627165909147;
    tmp_msg_0.speed_units = 254U;
    tmp_msg_0.custom.assign("MELOGSLILIQWSAACFDQBIDHWZZJAEIQYCHNE");
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
    msg.setTimeStamp(0.5102945219771111);
    msg.setSource(12325U);
    msg.setSourceEntity(146U);
    msg.setDestination(22833U);
    msg.setDestinationEntity(10U);
    msg.source_man.assign("IUBSFBRMIBLEHQVTLWDHXIRMGERXSXZGUAINGMEATTEDFDNAZVFQPUDBTAYGIWZZYSMSCFRFKMTLKRSZYWLSENWFKDBLOBVSZAMAQVXKXINJUSWLRDKAPTSWYHBOKUWNOYYJQREUXCWZJNCFCBIJNCWMELXPFJUHGNYQOLKZJPVKUHEGMVONWPIOXXCCLTQOAPHPZVCDMVIHTUQUJE");
    msg.dest_man.assign("WWAPZZHXRLXVZVZGCYJUQMURLSJPJDCLYWKWCVPNJPGKTFAXFFISNUXEDEEWWWOHTJDSNXDIYPFVXNKUPSNAXHTVLOECWHKYBMDFVEQFMUUMKHDKLFAGRMABERZBZKCGGQYSUAFKJSLIMSUGSDVOYHGLZLRCVBCHWAARNYTAATBUJCXHXRBBVJQSOFORPQTNQGET");
    msg.conditions.assign("VLJOPXQXITHHIZWMKXVCSIHAWZIFFDEQPSNRYSAPNANMPBLLIFTDXNVMKFVOEMIBCSABDOBVDWPVTJMJESQTBGEJSLDYKTJWLXKRAAQRYUVHDMRWNUIWYLVPPETONVODUCUAURDYFXNBDNZXZGYUQCAYKUPZGBPQNEIRUGCHXBZOCLYGKTPOTMHTAFUFMSEQFAQWFBRCJGKCQXSZHOZGEFIHCRUWXMBECOLMZRJJHNJWKLKDGSYJ");
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.24921044199223985;
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
    msg.setTimeStamp(0.6830386964584558);
    msg.setSource(47484U);
    msg.setSourceEntity(22U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(98U);
    msg.source_man.assign("TDCLVMYNQVEEKBGNLSHEULPFGCXRLGXKWYCMQJVWAHITGKIAUDQYPPBRCOXOFARWMGLMQQZZOVVDZSQYIMZXNNWAAOMYGKNFSYEJJTXDMTEDIQPSNKZSWB");
    msg.dest_man.assign("SVNLQOSEDMQJHPUTHRNWTUPFOWLWCQILSCUODNWAXEHGWYMEZORURQASEQCZNXVAJSDAGASBOJFGUKRQXECBPKDNSEWPHZJTILPXKHJAXLFIJKJZAMOTQUXKERYGQYQFUDDOOXBOZZKUFCLMHDRGYKTMPKIMJWKT");
    msg.conditions.assign("WAXFBLMQGOZSBOTJSWNCDSVXODXNYEVZEPVRNFMKWRCMQGLONQBFGSZUQTTLVHXERFZIKVZRCCSYDPAKOAVYLGRQKYAHYNFRUDWJBJAXDCEZBVJMBRDLLHJPVGUABIRPCPAIQU");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 224U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8973398769626624;
    tmp_tmp_msg_0_0.y = 0.6294163322560581;
    tmp_tmp_msg_0_0.z = 0.9660968088060818;
    tmp_tmp_msg_0_0.phi = 0.34873210332743887;
    tmp_tmp_msg_0_0.theta = 0.8699961553871214;
    tmp_tmp_msg_0_0.psi = 0.3535225391458875;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.05838213779399559;
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
    msg.setTimeStamp(0.8157131067932901);
    msg.setSource(27777U);
    msg.setSourceEntity(4U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(193U);
    msg.command = 129U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YEZLNQIJEJCEZNGUAPVJIIODXSUHAVLAATFDYFDMAIBFNCVVHMQXGEJJEGWZZVAQMQTMLOUDIFTBHUDBKNPQLQOFGVSSQXLCSZDTPBKENKVBGKRBOSDSIXSMRHUASVFEN");
    tmp_msg_0.description.assign("QAKUHVTOATVYYQYPGBUVZHDIWFTWIFASGBFSCEHJXIPHIERJNGRDPNTPCWXPZJLZKWNJYVDRFWGYLIREDJCJJBUCIZVKAMEQQKSDJGKGTTOSHNWQDSOBDKR");
    tmp_msg_0.vnamespace.assign("JLVILBEXKRJGTJRNMRYWZCODCNACMIWDGIYWFDFMVEHQQDDUWMWAJAQPNSDPKBXMUBCCQIVLHDBMJRCEFTCDEQVU");
    tmp_msg_0.start_man_id.assign("CCMIZNOEQSXNRWGJZGWOGSYSTJOCQFOKORSASPTVKFBVFDABDXNLNDAVCVAECTYRSGNJWKACAOEVWQVTNARXXNCUXXEPJMVWKIZLUUGNHZUBTPMPDHBQYHZBBUDHLIIBMWLEIFBZOFSRPYSTVIQBYLHUJRQMIYXTJTHLFYPJKEDRLPAEPHTFISZOLK");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IMSYWYRNMX");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.7717475456881733;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.24151675585319476;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8126382451576283;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 28U;
    tmp_tmp_tmp_msg_0_0_0.limits = 56U;
    tmp_tmp_tmp_msg_0_0_0.max_depth = 0.8818067935994843;
    tmp_tmp_tmp_msg_0_0_0.min_alt = 0.3299747754295299;
    tmp_tmp_tmp_msg_0_0_0.time_limit = 0.23202549722897825;
    tmp_tmp_tmp_msg_0_0_0.controller.assign("ERQJCORODRKLQMBYFXUNUEGESWJZHTEFRURSDKIGXEVKHJNJWHYASYQXDLLZFOMDIHOKAUTAIOANHGRSMZNHUFGZPJVQVAVYAGWQUESWBBIMJSIKWNBJDFQFCYTMRFEZHT");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BRVWQYETBUTGIRHUSRLNORVFKWUJUJTOBADTWVOORVXIZBPTKCXLSOGSSXZLHBUUHZFNZTCDCCBEOEKJRGPGJYDDDJPFQAEZYUWMICMTKIOPYLFVMWKTIYYJFDAQBBWPVEFSXNXFSAGZGYLAIWHDMNAKSXDGDDINHNVLBMIPLTOLXCRZSQBUIWWHPXXRVKMQGYRJEAJQMGVZMQZANNNQLOWOMEYQPPHKUA");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::LowLevelControl tmp_tmp_msg_0_1;
    IMC::DesiredRoll tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.3902024415875581;
    tmp_tmp_msg_0_1.control.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.duration = 58963U;
    tmp_tmp_msg_0_1.custom.assign("OWLCXUQKDYCHNAAXREQDXFYNLHUZQSLEBUAQSYXFJGLEKYLIKWRDNMFVDXNJJJIGQLLPWXJOSOYTCCHOEVWKR");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.25412220866339197);
    msg.setSource(59465U);
    msg.setSourceEntity(73U);
    msg.setDestination(52197U);
    msg.setDestinationEntity(49U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KNXAKBBSJWFSAZVRICYWSRZUAJHMANOWEHKMSSLYFLVOJUBXABPGNPREJGDVLFNPZQVRGBRVTQTCIVXMDSGGMLVBPBRCPVSWYXCKRLOTJKMIOYIUHULTHIEJGFKFZLBAHTWWJOAQDQOWFPCTVAUUKIZKPBYLICQEDGOCSHKBE");
    tmp_msg_0.description.assign("SRGSGKOBTFIZHYVBSFPMUYDTZYCNLNYKEYCCIQTBALCQXXVIRDMMWFZKPOZSRYHDNPVAVZWMPZWZHGPSXAHBMCCCQDHGQRWJBLPDKARGIKFLLLJEJHHCVTEVJXEYRSQUDJUXWRFUGVAYJHETTUAUOFKSQDGMUZTAKAVTMRKYKUMLIGVFKXNTLQWCIWOBLQXPWNPNVOIQBEOE");
    tmp_msg_0.vnamespace.assign("GXGCETEWBAJFTALTWOVQGLAEEPXIEYNVCJIDQYZVYVAOXFNZTKYARBVBGZRMAUYRSMHHQPQZPNGSWCUDVJZXVFXRJLDZVCOTMOKUXWIMSMGCPHBUSFYNKZOUPZQQUDLJOHCYTWEKMLUFDIFCYP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("STIHEJWLCPZZLECDJWHFVRAXTSPNIRVDQJORTPKBBMQMSWLQAHHMXAEVKFSTUYFWWEBVZAVSUWYUZIFKIONNYUJNQXZOEOL");
    tmp_tmp_msg_0_0.value.assign("XRPGFIPAAUVDVXZVLUPLMGKOGLDHHVQCAQYXBQZPWQFCYZZGJBOWTETUKIJEDPYPTBGLKORGOHPQAWTWFDSEYSZKJDHKQYMBDIMPHXCCYJKEBNVWTHDDYRUQNFFZISJHNAXQFLFIISFACTWLSYJZLDVCNQKJMSCRXQBIWAOSGEVOSKPYAIEUYMWDJOS");
    tmp_tmp_msg_0_0.type = 71U;
    tmp_tmp_msg_0_0.access = 241U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NVUECHMAHZOJFNBYKXIQTPZWIRNELFKWPAARZMVIRDOUJCWXZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WHDFDHZLZQXPMRHQCCKQFEGKJCXECTGGRYIDYSZWWFXZEPFCBZPUDRJYIHXVZEDVEGHBWMUMETKOQMXEAFIHOUNPGIQRMSAOJSJQIPRVNHMTKSKAYCIKPNSDOOXMWHQGYIHBBFTMSKK");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8006000475543257;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7128133225833544;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.5530616578143551;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 195U;
    tmp_tmp_tmp_msg_0_1_0.duration = 11242U;
    tmp_tmp_tmp_msg_0_1_0.sys_a = 21474U;
    tmp_tmp_tmp_msg_0_1_0.sys_b = 28929U;
    tmp_tmp_tmp_msg_0_1_0.move_threshold = 0.060834038235251575;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("DZYRBEHAGDUMXGXANSHJVWNIVXQFIRVARQKVMVDOCIATQYWAVRHKTSKCDDTFMPFQLCPWXUDVWPYBOIHZABQOSUFZEZWSKXVNTYAOMKEYLNOLMPKGOPWYKLMJLXEUBUUONFJJQBTXLSHRTCJMQNGJZYXERGHGZINCYBFUODEJEMGQCMTXHFQDIIVASKNLJFITTNHSZYWRVARHJWSLFUDHCYOCRGSBCEL");
    tmp_tmp_msg_0_2.dest_man.assign("RPAQBZGOHUVFNLYLHXIPURDZWJOCWLPDBVNHGUXZCILRKTIVREOBUHELMISKPUJPATETUSMGRHTINUKWSFAPCADIXNXHSCFCJSRJHJACDGZKYWMEDYOOOJKDCQNHZMESOABSIFTHLTUWIWWFSCWTQBVDLALGTJGQYKVWBNZMXBOLQIFGCZBMPZFRHTDJMUXQZMYDCNAWJBYLROVEGFSJVEKMGNXRSUKRAFPFVETBVVKPNZKQYPYQXXEYENY");
    tmp_tmp_msg_0_2.conditions.assign("IKWSICEXPCOBXQQKHWVHLXIULMEYRQZJBQOZYAODOCBZPPSAWUUNCFOOHMNPHUTNYBQJMVMTHWCONMCBHWREFHCVNAFBNFUWKRPRSQXLKEWSDVKJXTAUGBMDBDIISNZODMPQWLZLOGTZJGBNGHSTQXRARDFKWSHFNPVAIMPTAVEKNYXTCADYRVWXLVQJVGFLEEJFUXIIFRJKTFMYDZMIBEUE");
    IMC::AcousticSystemsQuery tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.20847111219599634);
    msg.setSource(26979U);
    msg.setSourceEntity(150U);
    msg.setDestination(58429U);
    msg.setDestinationEntity(127U);
    msg.command = 75U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RHWQHFREFWEFUIN");
    tmp_msg_0.description.assign("HIQUUDBBHGEJRETXSBOTVNZJRYJXKIEWOCGQGMBRTIACYJDZEMNBCMRUSAWTXHOSLUFYWYDUONYAWSHTAGAEUMJRSWKRJXQFTUOFCFQZYVTCPZXRFJDHTBNIDPNJHKCONIPOLYCJH");
    tmp_msg_0.vnamespace.assign("OWPYMWXSBPYHRDXEZQCKZBIMGKGNZMZRDCALLOFDKKAPQTBKQCOYHSFLZKBKWJJNHVMSTQLYJRXEVIMPRZHQJRGUWECNGRNVRXGSTLHZOMLCJAJDDPVNUQKLOVWZKBMUAEOIGUGTDWADAIYTARUSJFFMQUFIEDVICQSCIVBJXTEMIS");
    tmp_msg_0.start_man_id.assign("RMIHDUTOBLEAXSVMXFNPWWOHQGGQICYQBQPVAXIDRCKUZNHBKFLCQMTHUKJQMPNUVEYZXONELFSHJKARYDSMXCGLOYRECLERVUQVSWTYTYKEMKTWBRPYYAJQTGDLRDHJBUDPZWIUMPPJTGDVBJJATGVCNRGANSFKOCS");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("ZDCIVIUCWAZTYAMXZDWYHILQVAJBXMZKFNAZMHBJCTOEVKFLWIXJEIEPJBFFTCYDYHEWTZYNRGWOQSVFIBFJVWHHZQTMCDDRPDKJVGTLXNHKSKIRYBMTZLOGMEYILVRGNFENHRYEDSCSHNUTUYUKJUBMAOMCERDRNPNDCVAWXPOMCQGXKXAGBWUGASNDQLUCBPKPHYPLABSTLNUUXHJOKQPLZSIGFBOLAT");
    tmp_tmp_msg_0_0.dest_man.assign("DANFNFNGDLSBTHSIVSJTJOYSZSXZCPHTINDGVJNOYQWELRIMCPBJBNOBMJYOXAFYKDOZTRZKICPPLCLQLHDUPTVILKIJGAGDEFQTWECEMMZGXAUVIUBRWFUHQEWYTOXIORRZXLDMBQCFKXGKHSISYDLAOCVPGFXZGKPWUFRWYNJVHYWLEJKMWQKTBQGCDREXSUVAFDZULORHGYWCQVEBZPFATUWPH");
    tmp_tmp_msg_0_0.conditions.assign("XHCHQWTDLGZGIROEWJQZCXYGILWKQBBBFEJZVUTCUXMRQKNTYQPXBPHFLCDDEVCCMRVBSDJTHNLKWEOURLNMPKXAJFSPHKBGPWFLIIJKTLIOJIDKWSVMGZOLSZKBRNDDAENBYZCRAGYQPVVEVXPAGHKFRQAYYOCSYWXHIZJSAMWJVFYZUGOXTPLUKDWCUSOOYEYDXURSOIHFCVVFNNIQUEGGUBXDTATQAN");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DynamicsSimParam tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 1U;
    tmp_tmp_msg_0_1.tas2acc_pgain = 0.5459624712932545;
    tmp_tmp_msg_0_1.bank2p_pgain = 0.6097043740326497;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::ExtendedRSSI tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.7292844038384412;
    tmp_tmp_msg_0_2.units = 14U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.7934307576335665);
    msg.setSource(16280U);
    msg.setSourceEntity(70U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(141U);
    msg.state = 208U;
    msg.plan_id.assign("DCWTNLMAZFGMUWUDXROVEIJUVEUZWSXBGYVRHDEFBUSIETWKZVBUCXOYTLEMLDKMHJJGAJMOSZAKLXTCBCWBLKIIMJXFCGJXAYHPEBOMEYQRRKVRQPUNZNTGQLITSAQXIFQAZHQLGNSGCWHEJCPTRRHKXFOSHRZRKPVOJDFWECQKKHVDYOWYEDMNQNANFMUG");
    msg.comm_level = 207U;

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
    msg.setTimeStamp(0.7176594204517472);
    msg.setSource(18574U);
    msg.setSourceEntity(50U);
    msg.setDestination(58608U);
    msg.setDestinationEntity(57U);
    msg.state = 177U;
    msg.plan_id.assign("CUJEUMWAVUUWAILIOFBULTSDBMGDTTBRHIFXZMLQDNPXLRNHZTGDUGWEFWTXKQTSNDYZRNBCQTAVKPCYYWUOHVVUZCYISPIBZHFTNDCJYCGXQXXRLWHLQFGTODLRVWOQTPSSUEJYDHYXWPKRSPYHAMEVHREAHFOXKFGRKUJZNKPVGKOQCVIKFIJSJFLSBCBSEDKJVZOBABGWGWOZKMDSHMEVZQYABNZPLNGYMMOPJNQEEMIJQXNRXCOA");
    msg.comm_level = 78U;

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
    msg.setTimeStamp(0.5084973349198665);
    msg.setSource(46502U);
    msg.setSourceEntity(188U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(86U);
    msg.state = 42U;
    msg.plan_id.assign("PZKHZHYEXOZOCXDWLZQFCPOMEUGXQQQIJDECMGQHJANLPGTMTIFPRHVINWEBXCKMEDIZKXTPYTTTIBFJBCNMJEMIUVWTNQUIMJDLPFNLRVSRBAVDHASYIFYPVPYRKUJKUHKWSGWFIWAUBRHJMO");
    msg.comm_level = 82U;

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
    msg.setTimeStamp(0.33123767494971934);
    msg.setSource(53411U);
    msg.setSourceEntity(84U);
    msg.setDestination(48369U);
    msg.setDestinationEntity(63U);
    msg.type = 82U;
    msg.op = 169U;
    msg.request_id = 33100U;
    msg.plan_id.assign("JSPZKEJBDEQMQDKTLNUUTXXWFXGBBHYRTRHQKRBFGVMZQTKZOMUAEPZWBCPHRSOKIVOSZNPXXSQVCWQJZGYCQSUCYYRMQZEJVOFDPEIHKTWIONUVBPNSAVBADSLGWNAUZAFDNNRLAHBGUJTIPALSWYGCMXBIFUIJDCYHAPDMWDITORTQEYKYEX");
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.05408848667713606;
    tmp_msg_0.y = 0.6721923045089473;
    tmp_msg_0.z = 0.15884481283372254;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FMQSDCYXAKANFSTNJTKOEWFNYEQRBBCSGAJTVXDVRNSCPUMLWITOIAYGCKEOMAAFZLFZWCPBAHXNWCLVZOJUXKJDHKZRIXNPTSYGXHMTWWWXOQDUREBSFAUEFNRXMLGLENGPVZQAKSZQPNIVRBMUWOFUKGXJQICVDPMBLRVJYDWJEPBYSUFQLAGBTDVMILYIHOYFKVUKPCDZETGGZOBQSPJBHHIHQEXJIDCSVKPMNQHGLDZJLTOUCHYZUE");

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
    msg.setTimeStamp(0.5089323101769627);
    msg.setSource(23437U);
    msg.setSourceEntity(167U);
    msg.setDestination(62761U);
    msg.setDestinationEntity(208U);
    msg.type = 214U;
    msg.op = 86U;
    msg.request_id = 60312U;
    msg.plan_id.assign("UNRCZHPBQZUJLTCLXPFDCAHIIOEPVJGLKZMTKLHNTDUKLLABMCIKXYHVSDEAAGUKOUCNTHFUMSLZOKVXGEGZIRSEDRXSRVPGIOPMW");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("HMVAWWBFOWCLMGFAPRQTXPGCVFUVVSLYWRARXADDBHHZRLQACDKEEHILHNEBIBUWDYTYRBNCJLMKURTTBRUDWEKJXFOIJYZLVRBUG");
    tmp_msg_0.sys_dst.assign("CFIKQISATLQWPEOXUFGJLDRFAHMELVCLQOBRKGYRDRMNZQRTNWSOWVPCMZRNYDEDLCXPNBAFICPDJSYMYKHSZFUNEHZWUEPJBKQXJASQGOQFXBNYUNEOYKMHKIRJUEGMYVIVGWULTBQZLRYPIGBVPXPBTYXNXDINUOODKMCGSHLJAZABOPNKTDZHPHFFSWBVKYCLOWSUGXCQWATVERRZDTJIMJJF");
    tmp_msg_0.flags = 17U;
    const signed char tmp_tmp_msg_0_0[] = {116, 36, -82, -116, -47, -62, 53, 113, 101, -80, -100, 70, 76, 58, -55, 70, 13, -63, 59, -7, 100, 5, 125, 109, -21, -13, 42, -106, -79, 20, 91, 27, 81, 44, 105, -76, 32, -31, 51, 99, 0, 77, -10, -62, -48, 27, 7, -123, -92, -45, -37, -15, 119, -88, 119, -80, 37, 2, 31, -93, -51, -14, -18, 30, 10, -38, 61, -6, -120, -41, 97, -115, -55, -28, -127, -73, -67, 8, -126, -107, -37, -110, -116, -18, 80, 58, -60, -24, 124, -111, 61, 73, -126, -97, -53, 121, -103, 109, 52, -42, 20, -81, 122, -55, 82, 62, 104, -11, -105, 117, -45, 29, 38, -48, -121, 25, 126, -65, -27, 14, -12, -65, 5, 52, -91, 45, -100, 86, -14, 64, -87, -121, -31, 19, -84, -18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YECEKNKVXWVGJZASHILDWMRFNIYUYSWPIXSLDCBAGKPZKVOUDGJGCBTPSNBMNYJZTOHANRJVTMENSDWIQOHQKZKVHWURQMNQEWEWQHBOCPAWTIHAPUGORMOGQBECNFFCFTKXHQRQALLBTDDGCDFREHGTNEEFUGSFMMKFBYVVYWAXYVHRRXHIZLDQVOCEJTJ");

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
    msg.setTimeStamp(0.2526491086488244);
    msg.setSource(52018U);
    msg.setSourceEntity(199U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(137U);
    msg.type = 51U;
    msg.op = 8U;
    msg.request_id = 5326U;
    msg.plan_id.assign("ADXGOBGURMKKCNXBVPPTHRXVJPGWSOYSFVOEZWTZXIIUSJGUVTBMIZOVFCZFCN");
    IMC::Redox tmp_msg_0;
    tmp_msg_0.value = 0.002949137246140432;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AHDKAPQVNYHBVDYLWOMNFVTLCSVUEBQFMDCRIYPLSLNVHIESTQYUNVJEYDJIFSNEMXEGNOUBQWAVKSMIBFZYFBDSSLJPUMCLHMYGQDZ");

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
    msg.setTimeStamp(0.7046477418048136);
    msg.setSource(65395U);
    msg.setSourceEntity(135U);
    msg.setDestination(38954U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 44085U;
    msg.plan_size = 3441742490U;
    msg.change_time = 0.10151168774742125;
    msg.change_sid = 23978U;
    msg.change_sname.assign("HSNUVQKSXEOIAXHQIEPKMEHMNCRFGVSYAODJKZFAYNILZIQTCELOBDBLTGUASLLODGWTQDUZYICHYLFTAQOHQWPWLKNWSHYCFII");
    const signed char tmp_msg_0[] = {-127, -109, 55, -26, 54, 106, 68, 126, -1, 66, -55, 93, -75, 39, -23, -16, 103, 28, -122, -52, 74, -52, -81, 105, 115, -85, -96, 98, -104, -36, 35, -123, 34, -72, 56, 103, 109, 106, -4, 21, -6, -60, -100, 75, 104, 49, 105, 0, 5, -52, -2, 122, 78, -122, 96, -19, 73, 76, -13, 76, -23, -36, 17, 44, 43, -61, -68, -84, 56, -90, -36, 34, 23, -101, -112, -112, 3, 103, 26, 50, -118, 123, 36, 71, 65, -75, 52, 59, -43, -86, 6, -26, -71, 42, 19, 116, -3, -68, 92, -110, -37, -48, 77, 19, -116, 117, 71, 4, -8, -109, 78, -18, 126, -121, 19, -61, 110};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("VWBZVGIKGYZPAXAAWWZJNJJBQMLYBRIAZGDGWPUKYVIHLKYOZMSTINEHFCCXYFTHIQRFLMJMEABETHUOOPKDSIUKBQRHUSDMGNSLFUAFVKXLVLGWYENXQFQWHKDCSKNOSCTCZARWBHEXPUCNHEYTMSPYDUPIRCBGWORPJEPYTLMRNZVCPFWVELWJP");
    tmp_msg_1.plan_size = 58298U;
    tmp_msg_1.change_time = 0.4915249724899763;
    tmp_msg_1.change_sid = 7730U;
    tmp_msg_1.change_sname.assign("JOXHCINROLRSHJDQDEQNBVRQNSNPBLTPSOFXHTPBWDRIJKAZEZGAXRBJKMLZYCOVUDJCRIEEZAUOEDWLRMMFQSUUQOEXKFCAGOXAMELNNAGVQHDOAQWHMFUHRPFPVFKEZJZN");
    const signed char tmp_tmp_msg_1_0[] = {122, -102, -117, 107, -120, 36, 3, 113, -28, -18, 16, 1, 94, -124, 48, 49, -33, -4, 5, 29, -13, -126, 65, -75, 44, -41, -118, 25, -39, 30, -62, 32, 122, 113, -5, 33, 10, -69, -72, 111, -20, 102, 38, 1, 103, 34, -38, -107, -53, -4, -47, 98, 80, 45, -2, -81, -5, -42, 49, -98, 55, 39, -59, -43, 13, -40, -91, 46, -117, -28, -118, 105, 57, 9, -3, 68, -63, 76, 15, -121, 41, -89, -61, -116, -121, -15, -77, -109, -87, 81, -5, -109, 55, 90, 97, 107, -48, -3, -10, -102, 98, 81, 42, -117, -30, 30, -1, -3, 77, -48, 9, 109, -34, 35, 1, 113, -16, 44, 49, -39, 109, -29, 43, -14, -33, 106, -25, -74, -40, -68, 47, -85, -102, 107, 5, 106};
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
    msg.setTimeStamp(0.12205041841820785);
    msg.setSource(32396U);
    msg.setSourceEntity(35U);
    msg.setDestination(35613U);
    msg.setDestinationEntity(214U);
    msg.plan_count = 17956U;
    msg.plan_size = 2254658320U;
    msg.change_time = 0.1257296796327002;
    msg.change_sid = 40712U;
    msg.change_sname.assign("NHCDQJWEXGJKMPUMADFPKLIQKWRRUTPCVCFMJVSURIAFHAVKMTHXOREBCCOZPYSELISTFBGKONPYHYZHQNUSBXMWXCILDOCJYDRYNLWNAMGFIQUDSTRGTXFZWAZYJ");
    const signed char tmp_msg_0[] = {70, -6, 123, 105, 42, -42, 25, 105, 67, -8, -3, 76, -12, 84, -101, -117, 79, 91, 79, -89, 122, 0, -13, 112, -106, 31, 119, 112, -39, 10, 46, -62, -28, -58, -97, 20, 123, 40, -22, 26, 46, -116, -33, -71, 51, 42, 102, 23, 103, -122, -79, 59, -80, 33, -102, 20, -64, -10, -89, 13, 17, -42, -7, 45, -38, -32, -74, 14, -114, 70, -124, -117, -13, -72, -59, -66, 121, 14, 45, 75, 87, 39, -49, -89, 10, 4, -39, -72, 38, 126, 67, 101, -66, -98, -40, -94, -90, -115, 16, 85, -110, 70, -118, -21, -35, -122, -74, -114, 65, -124, -98, 63, 101, -91, 42, 52, 65, 1, -106, 40, -7, -11, 92, 76, 116, 93, 107, 2, -67, 80, 30, 101, -42, -43, 56, -23, 110, -119, -24, 4, 22, 115, 107, -58, 95, 16, 62, 61, 6, 4, 104, 92, -68, -29, 36, 0, 10, -74, 78, 84, 91, -66, -107, 12, -15, 40, -33, -5, -39, -35, 95};
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
    msg.setTimeStamp(0.4106463394670684);
    msg.setSource(5963U);
    msg.setSourceEntity(57U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(98U);
    msg.plan_count = 17246U;
    msg.plan_size = 1918518452U;
    msg.change_time = 0.5194459946403833;
    msg.change_sid = 52298U;
    msg.change_sname.assign("FGNHXZRZVOBPSXLGOFNCNLAFMNIWCPMIXXYPQFNRUUOWMNKYTDTSGGKPAEMXLQPDJIEOHVCLBNXJPHEZWILSXRJMDJDVABPFTYDHVFRAHNMJAEJAYETXEZKRYBGLWCZUKSIUUVWQTQCBLYYJGWRCHSTGUPSLKVRAVWQZSQDCCMUPRWOMGALQFFECHYXNOSVNKVAYMOMBUBZOLEOZUSEDCJBGTD");
    const signed char tmp_msg_0[] = {43, 11, 22, -7, 12, 125, 28, 98, -36, -50, 51, -58, -80, 7, 66, -31, -109, -41, -93, -37, 101, -81, 88, 16, 120, -99, -78, -32, -63, -99, -115, 66, 3, -70, 55, 32, 79, 89, 93, 64, -48, 5, 85, 17, -45, 79, 71, 31, 5, 4, -107, -14, -17, -85, -36, 61, 35, 39, -17, 31, 13, -117, 4, -91, 39, 99, 70, -70, -49, 33, -57, 62, -38, -1, 16, 67, 84, 111, -65, -123, -28, -63, 94, 39, 44, -52, -17, 89, -113, 55, 38, 55, -39, -60, -57, -82, 63, 86, 126, -108, 40, -90, -13, 0, -67, -100, -45, 114, -77, 9, -10, -4, 98, 69, -19, 29, -27, 1, 55, 27, -46, -108, -2, -50, -58, -20, -21, -54, 77, 59, 4, -58, 65, -90, 25, -35, -100, 10, -123, 31, 120, -41, 102, -96, -125, -73, 22, 24, 40, 49, 84, 92, 67, -66, -58, -105, 23, -47, -103, -17, -13, 57};
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
    msg.setTimeStamp(0.23074330743637905);
    msg.setSource(25436U);
    msg.setSourceEntity(179U);
    msg.setDestination(29412U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("JZXSTDIDGWHVPYIMTGOLZASKSZQLPRRQCVZZLVCCELNIMTMBZZGYAPWIWRUCBRUKFSSHNCO");
    msg.plan_size = 58256U;
    msg.change_time = 0.5668072545232222;
    msg.change_sid = 45229U;
    msg.change_sname.assign("YFVHCPIPIUBUFXKOZEOYUHYLKLZEGTEZPLTMIQDSJKEPCICIAAXKGJOKNWKYNBVTAPTVWVBAMQCEZQLTLVDQLQFVFGWWJZLDAVDYTDTRNWHTYFMHJGHBSRKPXBJQXGMHWPZSXXISDFDGBXDGIYTKJLONXAWVZWYFOHKSURZEUZR");
    const signed char tmp_msg_0[] = {112, -119, -12, -114, -4, -64, -51, 101, 120, 66, -97, -84, -96, -61, 121, -18, -93, 79, 48, -30, -116, 45, -69, 11, 56, -25, -7, -58, 82, 76, 48, -92, -61, 74, -73, 112, 22, -40, 109, 80, -58, 70, -32, -69, 29, -110, -46, 103, -83, -70, -122, 24, -98, 117, -76, 1, 112, -70, -53, -9, 41, 87, 27, 91, -37, -81};
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
    msg.setTimeStamp(0.39254116689638163);
    msg.setSource(58762U);
    msg.setSourceEntity(206U);
    msg.setDestination(34614U);
    msg.setDestinationEntity(49U);
    msg.plan_id.assign("QZDTCAQJXHMVIDSYUOWAXCSYVNOTIZHLWVMONBJLCBEMYUJQMFFFPVWJWQHXETXT");
    msg.plan_size = 34067U;
    msg.change_time = 0.020343798121970735;
    msg.change_sid = 28776U;
    msg.change_sname.assign("ICJMNERXRLIFHRDJYGSIZHHMCUWUVDPWRPYJCFOLQHQGSTCNGTWUWZQUARNHCOOGJTDYDFSQBBMFNRYMFVNEAMYLAGDEWMQZUSKGLQPNHTIMMKXXJZOIWKYYAWKUPOFSLRFVCJCOEYDXZVVKHDZEWZVBBDJWJXQRDPHVSXUUNBVABBMFUNTLDKEKIYTF");
    const signed char tmp_msg_0[] = {15, 12, -95, 56, -58, -55, 76, 29, 47, -8, 57, -102, -59, -102, 88, 54, 116, -60, -36, 71, -49, 53, 32, -28, -118, -13, -66, 6, -102, 15, 44, 66, 120, -17, 90, -116, -91, -66, 44, 34, 45, 66, -22, -108, -11, -59, -50, 39, -51, 42, 24, -76, 79, 91, 76, -40, -88, 16, -32, -67, 58, -26, -92, -75, 4, -44, 118, 19, 44, 40, 95, -97, 55, -28, 1, 26, -15, -120, -45, -114, 16, 90, 46, -127, 45, -13, 105, -83, -97, -81, -59, -30, 28, -108, -80, -69, 69, -12, 93, -88, 72, 82, -27, 66, 13, -119, 101, -89, -71, 90, 56, 82, 49, -30, 59, 61, -53, 82, -94, 87, -77, 85, -60, -106, 51, -5, -49, 25, -75, -8, -15, 88, -87, -113, 39, -57, -97, -29, 74, 43, -41, -75, -74, -92, -38, -2, -65, -57, -61, 42, -77, 77, -49, -91, -127, 106, 35, 81, -128, 9, 16, 63, 93};
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
    msg.setTimeStamp(0.9264866987396622);
    msg.setSource(27265U);
    msg.setSourceEntity(187U);
    msg.setDestination(48692U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("RMGLLDSYRGIHJMFMXJJORIKFVRLZVFLSIVZPXHITUKPSAWAXJFUHPGWDATJETQFQTGWOESVDKXESGZBACLPKRSDHORNYTASQBWMNOFJLCGMBIZUFWZPARCPKNNWBYNHTKVYYXEORLSHYHDENLLNQZDRVQEMCXTBOROPJZULGCOBXI");
    msg.plan_size = 9460U;
    msg.change_time = 0.2944064098639444;
    msg.change_sid = 62492U;
    msg.change_sname.assign("OTCPDWUQROMGNXKEQNICSLYONCEGDIAXLFGMEHLHRSGBPWWIKTLKAFPORAQVKQJZECNESKZMEKZLSJRSHJJENTGBTQDYJXTNXQBUIXUBHCTMPJBMTFOXACRTNDSWPBBJUCFLRUHASXHVPNKYJDAHYDVPOIUYZFVAKMZPICXRGKXOIQVSWE");
    const signed char tmp_msg_0[] = {34, -128, 36, 98, 70, 55, -52, 52, 102, 74, 59, -9, -34, 79, -11, 67, -59, -12, 113, -103, -105, -11, -35, 49, 65, -102, 42, 71, -11, -36, -51, 115, -45, -111, -121, -3, 18, -27, 117, 87, -14, -88, 93, 79, -120, -31, -36, -82, -38, 125, -58, -29, -114, 26, -8, 57, -110, -23, -3, 60, 50, 60, -127, 115, 93, 64, -82, -21, 113, -92, 72, 11, 54, 111, -117, -34, 51, -104, 96, -45, -113, -127, 92, 74, 119, -88, -117, -86, 101, -33, 26, 17};
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
    msg.setTimeStamp(0.08495101253952386);
    msg.setSource(22070U);
    msg.setSourceEntity(109U);
    msg.setDestination(41527U);
    msg.setDestinationEntity(145U);
    msg.type = 55U;
    msg.op = 215U;
    msg.request_id = 37869U;
    msg.plan_id.assign("FPFOYZLMQXAZCYQGUKLEQEKMHCTXVRIQWKGUBCNTIUUQBNYLOHNJTPDVNTNRQSIPMJVVJRLLPFNHBARPYDQWWSYZETGYGHGDOAHUEYSMIEIVRLOFLWXDPMCYGDLTAMWFKVCDHROANKXSWJBUCNDFUYAIQJEIAZKPKJSHXZXXQIOYAPXBZTFSHIXVCUGLCBQWAOWOTNEEBCMAGGEMRZMRNKZKEOXVMGJVSFRJPSJDBWBWFZKTRULTSOJBHU");
    msg.flags = 7881U;
    IMC::Turbidity tmp_msg_0;
    tmp_msg_0.value = 0.9501489061889281;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OBXHPKNWFRAKYKLADNCLIMPXMMWTIBGCGRKLSLDXANVBOPVQFQYIXVASWDAUGMGPMLEBHEPMKQSZHOIFZZKUEDCFVWQNSGFKCSSPQLCFNBYZUAMTKGWXQEVZMABYJHEYODYLOFJIHPQEHLHUWPACZNYYAFNTJUXTHDVICWPXJJBRDRBOVEJDNIOINZDOUDY");

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
    msg.setTimeStamp(0.3523706679679527);
    msg.setSource(13443U);
    msg.setSourceEntity(160U);
    msg.setDestination(9161U);
    msg.setDestinationEntity(2U);
    msg.type = 246U;
    msg.op = 80U;
    msg.request_id = 28859U;
    msg.plan_id.assign("CSKVFWYLUL");
    msg.flags = 8727U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4918245910685284;
    tmp_msg_0.y = 0.6488588800282994;
    tmp_msg_0.z = 0.40593951909457726;
    tmp_msg_0.phi = 0.09700405452757399;
    tmp_msg_0.theta = 0.16669597191426677;
    tmp_msg_0.psi = 0.787131527787697;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PPRTPPKXZYISWSJVOIBTWIBIDYFEYNTZMJULCFYQDKMKJVDSRCMOVGWGNXYLNFZKUUGWXJGOJBGSEOADTNBJHSYWWJUVNQIKBXZLFGRGIQARIKDHPYHAMROHLPJQWTFFALTSZUGFCRKTPWXXLNOCZNCOEMZINHRBALELGCUMOECTQMZVOHEBAQMKVTZPEVDUCSLMCKEUXPEXQVHDQXGVLCTOAYUENSBKDRXBFWWHYHRDJRQUQVAYS");

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
    msg.setTimeStamp(0.4615095658666891);
    msg.setSource(20189U);
    msg.setSourceEntity(197U);
    msg.setDestination(60318U);
    msg.setDestinationEntity(124U);
    msg.type = 22U;
    msg.op = 216U;
    msg.request_id = 3720U;
    msg.plan_id.assign("WKGWSHYFKAFLCVDNHMTBUCEZPUWUGMBCNGLBHBHJMWCVJESUDDTGSFURQARPPUOLEYXTABDQNXYOULISBBYAHEOESGMYGIIJREWYNLPWIQVNEAXHUCAFDQVDNZVLOYNDZQQESZYRKDGRRSJFRZJQZTHXDUVXKZTWAOLXHBYYNOSEIMUFZMXLNQTVRJIFFQTIOKWVKNFLCKSRJVPMFVGBIEXZXJQMLAOAHR");
    msg.flags = 59220U;
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.5214520095093557;
    tmp_msg_0.converg = 0.06139134804876134;
    tmp_msg_0.turbulence = 0.9854390739203224;
    tmp_msg_0.possimmon = 203U;
    tmp_msg_0.commmon = 82U;
    tmp_msg_0.convergmon = 202U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LXXIBJIKJVBUZSTLTJPDCXDZCVTIFPPSSATPYLIIVATWNJHZKLUZDCFGSXLRBEMVPCWKWFVMYMHMNJODLHFZDCYVCFWKQGPEHWRRPRRGKIGZTQNGCOKUMHONOJWNKXOQQNWEFQOV");

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
    msg.setTimeStamp(0.07362487015513641);
    msg.setSource(56840U);
    msg.setSourceEntity(163U);
    msg.setDestination(59265U);
    msg.setDestinationEntity(229U);
    msg.state = 174U;
    msg.plan_id.assign("MPPKBHRAHMKVAZPLYOBBGBIXABUXIHZXVDMWPSJQQNXIEMTOVUSQMQAQLZZXUSDHCDPBTKRAXVUMFZDKWVRCTRMTBLOOEAXKHVFKRLCDZEZTCUORJJUSIFABJTSWVELYDYUCPGSMRWBFTLPHTQHLHNXYQDDGALYPHUEJIKEYTGGNSZWURXSNQKYVXRNVGFWOPCOTABN");
    msg.plan_eta = -186605037;
    msg.plan_progress = 0.7063411871925319;
    msg.man_id.assign("EOVPPGNQQOTYYCLYBWXJZRQDZAPSGTVMYSEMWFSOLZPDKAFTBDYHNCKMDHGGZCZOTZXHABSICYJQIXLUISALEMCOIDRMVMHAWOLZGSQSRRKVXUPOASKPUEIDZVGQKXTPBANUXPQAFZRAEAEURJFXBBFLPMRCLJNVVGJRMKTKENEUDWPSKNUJUQIBQHLHQOSKWIORBYHJHWUV");
    msg.man_type = 48944U;
    msg.man_eta = 223677700;
    msg.last_outcome = 84U;

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
    msg.setTimeStamp(0.7581989678835145);
    msg.setSource(6682U);
    msg.setSourceEntity(65U);
    msg.setDestination(25961U);
    msg.setDestinationEntity(9U);
    msg.state = 222U;
    msg.plan_id.assign("IUDKABSRVEOMFUPFUTYEPNQLHEIGRMWTWLVWGYJAAZAHERLBUJGDJEFBDCZOZUQROBYCXOEBMDIQQLWZTBATQCBZYCKXYXFGYUCZGKTN");
    msg.plan_eta = 1535692805;
    msg.plan_progress = 0.9683910856394322;
    msg.man_id.assign("VQINMSEGRIMZXODHJVNOQBMAOATTNTSDIVFFYJFVRCPCQXLOSGHMJZGOFAREXHGBMGECDQBGREUUMUUPWXJYEZSPPBBATWQARAZQHMJBVGPKNXKWDVDFKSTGTRRZOXLBFLQJCQE");
    msg.man_type = 9042U;
    msg.man_eta = -1224660490;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.18966666674408317);
    msg.setSource(19957U);
    msg.setSourceEntity(82U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(18U);
    msg.state = 109U;
    msg.plan_id.assign("IELDDCTYKMJMLDRASLHLYRTCAVMOQIHFKXJMFZKKMJGAFHDLRCQIANMRYHZBONNIZSPHWXSV");
    msg.plan_eta = -1986185469;
    msg.plan_progress = 0.44310614257911163;
    msg.man_id.assign("LNZLJKYRTJEOIMEFWNGRFATJYFNHKNYKOYGCBWMCSEEZSHKUHITDQBIAHIPT");
    msg.man_type = 46439U;
    msg.man_eta = 1503655159;
    msg.last_outcome = 19U;

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
    msg.setTimeStamp(0.19626807614139585);
    msg.setSource(18137U);
    msg.setSourceEntity(181U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(224U);
    msg.name.assign("JQCZYKQNTKMOLCSSYTSXFQUZRIUEQCPNFGI");
    msg.value.assign("NGMOEEOYEQESUCWWQBKPQWLGMQJLKFPTFAJAZMMDZWGHKCFTXICFUNEWZTRIDHECSYKXIRIMTTFVGVRVDICXQNGQXIJUZLABFSZCBJSRRPQSDYGVGLEZFYUOHDYKHWUTDOHSHSPFTNGD");
    msg.type = 133U;
    msg.access = 44U;

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
    msg.setTimeStamp(0.14938416866944426);
    msg.setSource(7641U);
    msg.setSourceEntity(193U);
    msg.setDestination(47833U);
    msg.setDestinationEntity(188U);
    msg.name.assign("RUJFIZWRCFLBKLXGEIIVGJZXSWRNUCOXFKKPGWQCZTQHDNNJBYLKQNXTPLVNGNEEVPIDGYADAZFMURSZIWDGCBCYRBKESHHMJTSMIHBLLBOFSAVVFGISOEJRAHTIJTUIXYJPMLMVZZPCDHHUVIWQOPAXLUYSSVBAMHAYMNWSQYTJCFJGHDPQKUUWRETNWAKWDOOUCRFBCZ");
    msg.value.assign("NKZGWRUMHFIEVYDXJYJXXMTKYTZPDQHQQGMNKRWEYXTEZINKFADVFWRHNXHCRNDOLGWIJUBBACYHNDSVKLQJBSJXSTROISWTJUCLIVBKLEFWGXR");
    msg.type = 185U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.6801733477348852);
    msg.setSource(10413U);
    msg.setSourceEntity(110U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(110U);
    msg.name.assign("MOYLMMETDDCHERWGCGOQIKZZORXLHUPMZSUKJVHCVPHCKJMJNKFBIFSCWNXFYIAJBWQXNGTASTRHEPELQEYHRQZQRDQJUPKTLUTINQRQLYGOAVNOXALPLFMLIZIMSPMJBNNULERODBJZLBBAGQEMJWAGFTUVDHTYDWHCPEFOPB");
    msg.value.assign("SZYRGBSUUZJVHSOVBLVCBEWYNWFGHNJAKNXALFUQZG");
    msg.type = 119U;
    msg.access = 241U;

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
    msg.setTimeStamp(0.2809444037488197);
    msg.setSource(17764U);
    msg.setSourceEntity(118U);
    msg.setDestination(21751U);
    msg.setDestinationEntity(234U);
    msg.cmd = 33U;
    msg.op = 89U;
    msg.plan_id.assign("FUAODDHRPRKLBABHQLKMTNSTDTEECNZSCQMOQTXEKHJQRBGUTRXXDBDCXZUFELM");
    msg.params.assign("WINDJOTKZSXGVAPHFARHLNUXFCWNILLHWSXQDZXIMFVCAVOODEHQZZAUYGFITNEWZGGJBYRBYAPCHIDEWTKPWZNAFSVZMPKZHDNWISJOR");

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
    msg.setTimeStamp(0.7106152036502984);
    msg.setSource(4118U);
    msg.setSourceEntity(13U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(113U);
    msg.cmd = 125U;
    msg.op = 48U;
    msg.plan_id.assign("RBEBBFEZYMZSUQXZKEQNQKHYJJMAWFMYCGVBESTWYMIXDXKUWHIAHSYTMAVBQGUXRGBLHXAFUNENFUPAFCVBEQVAKJNPQOJHLKOTHWYCRKTDOCFNZRZDAHKIJRNWCLTVLGSOSBDSUCBMXOWPLITGPSVYJMNMZIDQNTKYMYXGIQRKNHOSCHUFEVTOOILTXDRUIRAESQG");
    msg.params.assign("KXGKXPCMCZCQFXWZWFAASOOTJARQADONFIFDUMWUTSYBPROIJGWLGTPIZCBZEGISRWMPPRPKNYEALMSCIYYFLALVLNBKLDZQJNUTTXXQHFVTOJEOZGK");

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
    msg.setTimeStamp(0.3818075722846822);
    msg.setSource(22589U);
    msg.setSourceEntity(184U);
    msg.setDestination(19878U);
    msg.setDestinationEntity(198U);
    msg.cmd = 135U;
    msg.op = 91U;
    msg.plan_id.assign("QPSQKZREXJJHDHCKNKWAHOUBGSOOZMUCROLZQMGEFLTAAFXDWINQWHRGSYLFCVQUTSNOYZUJOSJIGPBBZLZKQWDXEIFJTTUMSZXPDMGUDKYDNAZJUVNUJFTIYCEIWEFGMBNHHMJHJWLEXTPPZVBHKSWKDGVRCEGBMERAABKXQF");
    msg.params.assign("BEXCEVWZRICWMFBMMGDIGNWVORGQILEWHSWBTIMHOXRKUAGQBEUVQPHTAWNCAAXQCSJHYSQEJEDVOXTMKRERQSALRMUPSVGANZQFMYDKYWVZCSIJI");

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
    msg.setTimeStamp(0.26947801976896935);
    msg.setSource(52671U);
    msg.setSourceEntity(81U);
    msg.setDestination(10220U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("SXUSEXAGQARKOBYILIWBDGBQUSXIKADYJMCGRMPFYOTUNFOLWBWBMMGZHYXEZYGZIRPFIKOLXHNPYZOJVEOZZUOFUHTFJFDCODJDBANLUMBPLRUDDQGTRBGCRIQGNHPNYYVJVKWVMUFKVXKWDWPEVTHFCCZSHC");
    msg.op = 4U;
    msg.lat = 0.8652799581894708;
    msg.lon = 0.678422964607115;
    msg.height = 0.8093576338341885;
    msg.x = 0.7163270665956929;
    msg.y = 0.03042279876848375;
    msg.z = 0.1759140962817194;
    msg.phi = 0.13717871092484846;
    msg.theta = 0.9411466217445771;
    msg.psi = 0.041000419467797866;
    msg.vx = 0.8120194091554706;
    msg.vy = 0.296945078328095;
    msg.vz = 0.67874618857689;
    msg.p = 0.4440860353578818;
    msg.q = 0.3032336877725068;
    msg.r = 0.0684972977729067;
    msg.svx = 0.8350411029325078;
    msg.svy = 0.9288380315700862;
    msg.svz = 0.18495950878897405;

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
    msg.setTimeStamp(0.46573662979705066);
    msg.setSource(57290U);
    msg.setSourceEntity(231U);
    msg.setDestination(54036U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("ZODOLCZGAKGLTIKJBEXEVSBOAAHISVTTXDCSXUQVNPDAUNFSTFACSRKEUUTJKZPTWXEDMZLUSCKVQMTILEWWTYQAPORPKNJRPKLBBRPIORFHGNLUXPNNWXXOHANISCVXMSGKDAVYYZVZGBQTHRKGCHMMOJYBQJNBJCEEJAQYNJXVGRUZSJQIFGLMEOZIKMEFHHWBWMFMIWSOUCPHYVXGBPTRZOFWRHWBYZYLQJYDGWFHUFCEVUIIF");
    msg.op = 157U;
    msg.lat = 0.45717560641915067;
    msg.lon = 0.9622147417041085;
    msg.height = 0.9669656045889189;
    msg.x = 0.8043777633342034;
    msg.y = 0.8865303251832647;
    msg.z = 0.42640432310710563;
    msg.phi = 0.4887941620546563;
    msg.theta = 0.7395581177979582;
    msg.psi = 0.37139982412105776;
    msg.vx = 0.5089312645672055;
    msg.vy = 0.6180539590865054;
    msg.vz = 0.39553954910695366;
    msg.p = 0.24669593033752701;
    msg.q = 0.023147332157748113;
    msg.r = 0.7591627911812339;
    msg.svx = 0.5516958522914235;
    msg.svy = 0.4647247811792793;
    msg.svz = 0.6983052016820197;

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
    msg.setTimeStamp(0.8561573499973808);
    msg.setSource(16931U);
    msg.setSourceEntity(96U);
    msg.setDestination(50580U);
    msg.setDestinationEntity(12U);
    msg.group_name.assign("SNKPCAVMSFZIGDWJWGRULXLKQPWKEHYESVJVOCRYMLEROHBETSQGIUEWZXHXACQOMMFAV");
    msg.op = 13U;
    msg.lat = 0.9877797957133032;
    msg.lon = 0.01179614479451363;
    msg.height = 0.3617922753866879;
    msg.x = 0.14957130597461576;
    msg.y = 0.7469764270452828;
    msg.z = 0.47913341962010314;
    msg.phi = 0.44315764286349757;
    msg.theta = 0.25964841824748586;
    msg.psi = 0.9346711529563151;
    msg.vx = 0.40983289281645807;
    msg.vy = 0.23431749566866888;
    msg.vz = 0.7593412477245145;
    msg.p = 0.5443186469848548;
    msg.q = 0.6313482179435221;
    msg.r = 0.6303329005543724;
    msg.svx = 0.2605289265135582;
    msg.svy = 0.9502542086213577;
    msg.svz = 0.6851434241021442;

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
    msg.setTimeStamp(0.0909537611414929);
    msg.setSource(17346U);
    msg.setSourceEntity(179U);
    msg.setDestination(58320U);
    msg.setDestinationEntity(128U);
    msg.plan_id.assign("EPQZFZCPQLMSGAXDAXUGRNAVOBSFXUJELDFXWVYIXAACBZTTNTYARYPAPFXNHLJJRXYRLWDGZPHMXTYPEOHWOESLQNDWLQYUSUGCNDINOYWRSTMEAGIELBWOEQVFKZMTEKFIHVAMHPZKWSKBJQTBWMOBZFITQJWSJOYRTVNDKGXYDCBCBDVGLJKIGGMVUIOFHSCUNDSXIJGAMNCTDKUYNHFZKB");
    msg.type = 232U;
    msg.properties = 170U;
    msg.durations.assign("PYMSUXUOULKVVFWLLAKRHMBCMSTBWCMJIBJJFMHUMTLEXKZGSCYWGNWEZZAMNXCARTRIGOVPKMXETJUQRRDZWQVOLVDAHCCBQPLGHRZXESQGWZHJJKQENOOHCFQOQYJSIAKNEQPNVJGKAJJYKVDAXZRYTWCVYGPUSSDYYNHNFSIVGBCLTKDLMEERFFSRTIOYBZXT");
    msg.distances.assign("XSFRIVABAVQJPKKNQNNLCHWIJHDALRHWUQODTPFDEXYKNDQOLAZUPIDMBXMWZOCYTKZUPFWSPLTOFYDBIOCKIOVPWRNBZORGSPPLGKBYEDMEGHHVNGHNZYSRLTUGMCABVZQYXRMPYGRFEYPQLJUDRZMUJFUCACXHEUFQYCRQGGOBNEKUZGFSAMXSSENBBIFSSTTKYMTMJCSKFELJXWZXJKUHWIJWLHVEQIOXVDVNAQRTJXZCJOVVIDTCAWHIGT");
    msg.actions.assign("SHPNGHUSBSUCLMOOMUSJBKLCKGBDVXGWHUQEIOJBSRZHAIHHDYDVZPYONTLTJFVVPDNAWVQEIIJBWDQARLOKKGNGRTIZWHIHXMOVLTXEGFL");
    msg.fuel.assign("MTZHHFAPWCMOHRPWNBGUFOKEGCTCUFVCVQSXHLRFRIMYIDPMVEMOBROAFKJKYIJVBBYXNICYXAIDLEVCZOUXJDSHWPJGKSJUWUYITQYSELRCGMSENSDFQHPGA");

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
    msg.setTimeStamp(0.5365352818936682);
    msg.setSource(3608U);
    msg.setSourceEntity(180U);
    msg.setDestination(41398U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("TJJHVZKOVCHGYXDNYRPMQQXMZWIPABKVZRIBSUVNLECECDBRTJQKKAWRSXQEWQBXRSSNMWSGLTTSDYTSKBHRVFIWODMJAKFS");
    msg.type = 221U;
    msg.properties = 81U;
    msg.durations.assign("KCTCRZGNAYQJPFUIUOCKWYRGEBOBHAXFZJSZXIGZXNEYTY");
    msg.distances.assign("BRNVCZBOUSXZTXAXLKWTPZPRIYRIUQSJGVSILLWGYUOBWADDKSJPOAWWXUJFHRCFBTWPPIMKJUEMHDVEEHHGTETMAZNBZNHFMXCLURYILPKOKAEGOUCOHDSQODKUVEQIYTAAMNYOZTJGDYXQYCBNZEHWLTQVNGZDRYROLZQKMLLAGVKACFFEUXDQJIQPNGLJKCVBRMKGFBMNSVYFX");
    msg.actions.assign("JJXIPWGTJHPATPXOURYKNLNJASAVCTHMUMECQQBJOTVXHNVHMRZNQPUA");
    msg.fuel.assign("FEBQMGBRCVNOPOJDHOBORIGRWHEPHNZLPEAVNGIPPDYCJGCJMNUEDHJAJDZGYKXSIDLHTZRVXWDTPLBQMIKLXFO");

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
    msg.setTimeStamp(0.7464161986743079);
    msg.setSource(40854U);
    msg.setSourceEntity(59U);
    msg.setDestination(8310U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("HIHQZEKHFATFFLXFXNVXNXLWYGKADDMICXRTIGSHKDKJEVYHBLLQGSPWRPRQVBOQYHWGRPHBUUMZCKSCWEYSCJEQSNAMJCHUWSXOYZGPPGTBNTJCAGGNOJDJREBEVEQALJYYIBPGZUXZLSWYARDVFIZLTKPFDBIRVUXCJLKNNTADNUUCWYMCUOJTMTPDFVFOFHGXLVVKQALWODAVMIEIOFSMDJMMTW");
    msg.type = 23U;
    msg.properties = 131U;
    msg.durations.assign("AZXVGCJOGUILHCAZSLOBTIFUNRKTUVBMGOIZHLNHQAUSZMZEFJDVVELBWXRCM");
    msg.distances.assign("FKCULUITAFHNRGOLZARXGVMBYYXEEHQRNWCQMIZOFMJNPELVDGGJKZBORJNGDJYYHKAMOAUUXKRSPGVVUFIZXNCKXYFJDSQLEBHMMEFNZEOENKV");
    msg.actions.assign("SCISAECUCUWEFFQAJFCOTNCOFFGGTZJMUQWLMBQPSLYYOCVJRNYXSVHKGOFWCDQXEIMPCKXNZJVWLQ");
    msg.fuel.assign("BXITBQJRJCLYQCRUWKILZTHAORESGSSPDZXPEIPQVNZDOQNHLM");

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
    msg.setTimeStamp(0.6711859707393344);
    msg.setSource(58328U);
    msg.setSourceEntity(230U);
    msg.setDestination(9878U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.8881870955047958;
    msg.lon = 0.3122467165281485;
    msg.depth = 0.39727759879789504;
    msg.roll = 0.7807689179932253;
    msg.pitch = 0.5909093713968392;
    msg.yaw = 0.5235961314948198;
    msg.rcp_time = 0.5627791470209533;
    msg.sid.assign("HVVHKQJKPJDODUYXSPYRNFKKODSZLEDGWLCNWDRWPWCXWOCFILPBIVLJGJUFIMBNWUEATMGETHKBDOSRHXUXFZEKVUMXKUAORSODXZNVBYLSNMEGKQJRHBFBKMMIEFJOZHSQTZNCVPZSAJGASUAAZRYPZBNQCNTCRXBGTWIJPYFUYQME");
    msg.s_type = 228U;

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
    msg.setTimeStamp(0.24764129293927806);
    msg.setSource(9801U);
    msg.setSourceEntity(23U);
    msg.setDestination(12422U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.47585551505436363;
    msg.lon = 0.4283736732959449;
    msg.depth = 0.08172357736660307;
    msg.roll = 0.2877452995781886;
    msg.pitch = 0.6401170311614487;
    msg.yaw = 0.22101005899663828;
    msg.rcp_time = 0.9736752661236028;
    msg.sid.assign("DUYBXMWHUPLZQUZKFCRKZIYNRFNXREXUULSDHSTMOSHKNBWJLEECYYYBGJLWTQABQXNSFHRPVRPWKVTSUWFUJGORHHCZYQPVNQ");
    msg.s_type = 223U;

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
    msg.setTimeStamp(0.5785539406547459);
    msg.setSource(15221U);
    msg.setSourceEntity(38U);
    msg.setDestination(38407U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.4218967091613608;
    msg.lon = 0.4837912756843664;
    msg.depth = 0.7538267415391934;
    msg.roll = 0.567426300380392;
    msg.pitch = 0.22580720497473727;
    msg.yaw = 0.3589095685974506;
    msg.rcp_time = 0.5602916924775976;
    msg.sid.assign("NCJVBERKTGEVCGBYGRQFKQLEDGNWXWHWKIVQLKVYVFBKAHHLIUHDRCHHDPAFRMEPVYGBTOZWPLQQXPB");
    msg.s_type = 60U;

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
    msg.setTimeStamp(0.6312246523501245);
    msg.setSource(12331U);
    msg.setSourceEntity(53U);
    msg.setDestination(39084U);
    msg.setDestinationEntity(107U);
    msg.id.assign("UFHOUPIZMPAULQTPHTHKZNGNWIPPXNRXWXPSUJNOQCRWADJHVJDQIVYHJZSEGBREVUDNOBEDUMJQVRKIBGQMAIDNNSEGFSHMTAUZRCMLZTCLEB");
    msg.sensor_class.assign("FFLQNCXWAMSWNQVXFPDWIIDGPHUMJEXIKDZFJGZPSWFAWHNPYSYKUSDQUXNROIPFQLCZRHCYTBFSJIGBYILKTDSJLZCJW");
    msg.lat = 0.2522959872557834;
    msg.lon = 0.3290131299308683;
    msg.alt = 0.7057765243013006;
    msg.heading = 0.08393187890856069;
    msg.data.assign("NGVQIEVXZOQLIOZGXFRCZJYWOPWFRJGORMUKSOVHNSPK");

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
    msg.setTimeStamp(0.84093027006329);
    msg.setSource(24493U);
    msg.setSourceEntity(95U);
    msg.setDestination(30999U);
    msg.setDestinationEntity(246U);
    msg.id.assign("ZYBJSYQDLRSSNGMYBJBUBAOVCEQICROYRWNAJJTJRMVFIAUQZXASTUMGVDGEPOWFDCBGTKNEWKXLQDKLLPBLKVQURVZRNWPONEPSTHIKZAWEHMSEYPUDPQFBSFCLRUDFLZSFCDYCIVNINWPGQHYZBKGXGWHTYBJIEKJCTZDAAQWFCQCXRMRIYVTULWFILKGXATKUXVGOECXKIEJHOJYMHFFTROPMUUJVMPAO");
    msg.sensor_class.assign("CKYLWHGJFTPXCEUAGVAUHEHTZCLJGYFEGKZUJITYPNXYGKOZRDOSMXFXJDXKSWNBCNZVUQIJDOZYWDKBQBCSDSMNDMNIYXVOEMEYFVARBWQOOSAJBPVIQSFLLGBVQAELDQAFCSOKWTCFRMYAPGLCUTTRMFXQHFOXMKZWQVWUOHIRTDWFVINRCRHMPDTRCZNKWUWIQSMPARIUYJPKQUELNPLBKZZGPIJBEVEUBOBGGMHJXEILNSJHZHNL");
    msg.lat = 0.4598371316190959;
    msg.lon = 0.05477282756354407;
    msg.alt = 0.4321214932066234;
    msg.heading = 0.9133184110977195;
    msg.data.assign("YLHMVBRKGAQOQHXFWSUZLUPLLESXGKULJMEXSQAINPEFBZWHICRBRGMCSDKAGFBJKNOEVVVEZNAZTSDCNDSEUJBNUYZTUWZVXMEFWPXFKPWVXYPRQHYIJROYCWJTUPTNCDJIPRDMDLQFVZAGKQYAHSGOYLSRJFTPOCOBASMGRCXLHHONYDKBIGEKVWRFXJVALTTHZKEQGWNMXZAFDUDCTKGXOTNCIUUBLIHPTFJEZOI");

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
    msg.setTimeStamp(0.8315456764696622);
    msg.setSource(36340U);
    msg.setSourceEntity(140U);
    msg.setDestination(43642U);
    msg.setDestinationEntity(26U);
    msg.id.assign("RBMORXRMJWWHZUKEQNPLNWDXBUHLSNAPQTQDCOHXHCZCZLXQYRSIRWXGEJFVJDPKOGEXHOKTPHNCE");
    msg.sensor_class.assign("SEAWZXXNJTQLDAICJFYUEYJNAQWWUEPYXWDCJLHJDZHGVQSVMDLHWVZGVLSQYNFNKXKDGES");
    msg.lat = 0.7321679976277777;
    msg.lon = 0.016682745244942065;
    msg.alt = 0.157314041861375;
    msg.heading = 0.31114167109361046;
    msg.data.assign("FEKQXSCJVFPSKBNUGUTSZEVFIUQKMGGDDKWREFEAKLSZTMJATPFCCHXULHVTYHGUCGPWVFEFHQZNHWZAANPIPATBYQPIRRURDMZJJRSFXISYOCDLYXNIOLKQCXYOCHWGJTSMAGDLCKCYIWKUQATBSAHXSODVRTJWMFPTJBRLLINPLYKVMULWXQBZHVUONXYBXNZCPHBLID");

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
    msg.setTimeStamp(0.624891031369605);
    msg.setSource(63113U);
    msg.setSourceEntity(120U);
    msg.setDestination(19766U);
    msg.setDestinationEntity(245U);
    msg.id.assign("XWWXDFCAELLLTAVRJOCETGGZPXHIVYUVDECRNGABCHTFHOBJHSDKFIPHXIEZMBVFLKTYWYFGVSJYEIEXOMMHNRKUNXWJTBEUYPDMQKIMODASYQUJBJDSTCKZIMGRNANIAFXQQJCJBDLMMWVLOKFYUZRKKJDYKQYEVUBDSPFWJRXGUONFSHFGCXGMZGAUXSILEPWWTVZQWSTZGQQPNSQAVNKAOTODULTBBMPZPOLIWQO");

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
    msg.setTimeStamp(0.44288637273518305);
    msg.setSource(52569U);
    msg.setSourceEntity(158U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(222U);
    msg.id.assign("JBTDIPTCVUREQQIEOQDRAZUAZVVXDTMCUGHGZZZPSBTDZOIACYBGLUQBJMOGAHPJSLCUESFJCKRCHBPCQOVJYHTDESTKHOIUFWYLMJKTFDHNVXPZCEOBYDPLORMSBPJIERAAKETUVANRNKWYXFLXJPJDCXFWYFQSINOYNGVWGQKYFLGZHRWGPXJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HWCTDQVARXJZKRWPDUACTHAFAKFQSQLJTGKMTQOETTXUZBZBPKHBLQSYECXVQBSBUOEDCRYZGUFYCILIDHRUXVSDBAFDJHRNGHPXNNELKOIAUOUVLYRCCBPKOSMGHKEPANCYDYJVJGILLKIT");
    tmp_msg_0.feature_type = 0U;
    tmp_msg_0.rgb_red = 228U;
    tmp_msg_0.rgb_green = 43U;
    tmp_msg_0.rgb_blue = 64U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7219774905531982;
    tmp_tmp_msg_0_0.lon = 0.7959764109432546;
    tmp_tmp_msg_0_0.alt = 0.18756693085033893;
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
    msg.setTimeStamp(0.08023410099651718);
    msg.setSource(5251U);
    msg.setSourceEntity(120U);
    msg.setDestination(54502U);
    msg.setDestinationEntity(53U);
    msg.id.assign("UPALCDWPWWMOKHBRQFRSBJMDGHCDAINEJQYWEGFUM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FFDGUYUPWRCLGAUFNMRKYXWSGHXRRSULBEKJTIPIZVZZMKWEVTZDWOBNZVEBOMFYIKZSSMIBSXGQCEODAZIKMOZDRHLUDVLNYPBXIOPSKIPYCNCICHBEYJSAWTEXAGFWOHYHNJWEQGRNEQQQKOSTJYTDVTXPRGHVTGYNAEKJPOJFAJLYXJDTXSVLBQBLMNHLJMSQRRVAFTORWZGBKMLPGMCKVTBNU");
    tmp_msg_0.feature_type = 222U;
    tmp_msg_0.rgb_red = 236U;
    tmp_msg_0.rgb_green = 185U;
    tmp_msg_0.rgb_blue = 225U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.18862726839595556;
    tmp_tmp_msg_0_0.lon = 0.060361120406754565;
    tmp_tmp_msg_0_0.alt = 0.2550442514700796;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.08614095855825599);
    msg.setSource(43256U);
    msg.setSourceEntity(98U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(136U);
    msg.id.assign("EYWHIVVUENLGWMAMVONFKFMZMJZFXJQHDUBXJOGYXJGLRTLFWLITKPCZDWZBNEBMSGLQOJBSHGUJUAOPATUQZQVYWPYPALHQAWACBRIXHNZEKMKKWLZPIMQHIADCXTJVGGYOVVCTVXSNPJVNMHIFJXPDLFIKDOTQIDFFKBDOMETUOEAHCYEASHFSWWSVKZUYUNLEQBOXN");
    msg.feature_type = 67U;
    msg.rgb_red = 82U;
    msg.rgb_green = 10U;
    msg.rgb_blue = 163U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.5841287631181596;
    tmp_msg_0.lon = 0.2744546018414562;
    tmp_msg_0.alt = 0.9818000276125999;
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
    msg.setTimeStamp(0.17020753510970754);
    msg.setSource(6511U);
    msg.setSourceEntity(137U);
    msg.setDestination(22719U);
    msg.setDestinationEntity(179U);
    msg.id.assign("XEPWBNKZHJDFKFWQVLDIIMGMAYCCEXAVYPBJIKJHJBACRKZSGDYOFVKQTPLTTZGUMPTRLOMHPDDWDCXUPSKWXUNXORWEZSEYRXKQTXNMFOAONFAGGLRFJUICHYYERRCAVBEWCHDCDKIVOABLEHYPQBNAOHINLJZQUEABBNEZGPZZMWSNLYVVMRGQOJTSTRLZHVXWMKLDEIUFHWFSIZOXVQUQCHPMUGJXSTJC");
    msg.feature_type = 236U;
    msg.rgb_red = 216U;
    msg.rgb_green = 206U;
    msg.rgb_blue = 6U;

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
    msg.setTimeStamp(0.6478763047359405);
    msg.setSource(6867U);
    msg.setSourceEntity(250U);
    msg.setDestination(40146U);
    msg.setDestinationEntity(222U);
    msg.id.assign("XJJCOCOKYMBBQSQGYTTADXGRMDCUVPGPTEEJIWQGRHFYRYTHNVOIBRSMEBLSZMRFYQAAZHVVNWDRUMWHKAPPCNHCWQRUCNMRNUTQZYAJEFGLTILSZSYXJGAZLBUQWLRPOAPJBXVMICPZOFHKDCGD");
    msg.feature_type = 199U;
    msg.rgb_red = 10U;
    msg.rgb_green = 110U;
    msg.rgb_blue = 21U;

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
    msg.setTimeStamp(0.4486427224828572);
    msg.setSource(14682U);
    msg.setSourceEntity(12U);
    msg.setDestination(47521U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.1663559978235526;
    msg.lon = 0.6086858326677785;
    msg.alt = 0.7569687935464628;

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
    msg.setTimeStamp(0.6993068205557728);
    msg.setSource(45682U);
    msg.setSourceEntity(176U);
    msg.setDestination(23326U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.588161284503664;
    msg.lon = 0.4346561192533651;
    msg.alt = 0.1020989709229474;

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
    msg.setTimeStamp(0.9656270721133089);
    msg.setSource(25050U);
    msg.setSourceEntity(225U);
    msg.setDestination(16401U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.24424087705522957;
    msg.lon = 0.6792462567485056;
    msg.alt = 0.9336540198061976;

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
    msg.setTimeStamp(0.14437578724705946);
    msg.setSource(44311U);
    msg.setSourceEntity(60U);
    msg.setDestination(12175U);
    msg.setDestinationEntity(18U);
    msg.type = 22U;
    msg.id.assign("AXTEQOSFGQYFEWGLICPMHHBOTVTDPYNZWAWAPECNUBJRVBYMHSDPJYIUEMGSQROLXFVFTWDZJVCVTCWUUCPEDTGZAQSZYUZYXINDKSXY");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.5898704277050567);
    msg.setSource(29614U);
    msg.setSourceEntity(4U);
    msg.setDestination(17961U);
    msg.setDestinationEntity(20U);
    msg.type = 208U;
    msg.id.assign("HEJAMQAMXPLCEEBCYVJWGDPQBCTZGLMSMCFFTFAFWJRJKLTMCAUWGPZLOMYTJ");
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.8508549066581343;
    tmp_msg_0.converg = 0.08213203168960015;
    tmp_msg_0.turbulence = 0.8811552289705764;
    tmp_msg_0.possimmon = 169U;
    tmp_msg_0.commmon = 67U;
    tmp_msg_0.convergmon = 244U;
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
    msg.setTimeStamp(0.6289636451780375);
    msg.setSource(20845U);
    msg.setSourceEntity(117U);
    msg.setDestination(55709U);
    msg.setDestinationEntity(134U);
    msg.type = 214U;
    msg.id.assign("LOEDLRGUDJGPPCFXVXUENGTPGFUEAMSKJUNWEQJHTWJORKTIVYXOIESKNNGXUEVHADJDHXMDFLYQFKTNZCASMBYYAMZFZFTEGOTBNUYBXUTPQDHDCPCLPHRWZIBVCLRGQQFRBIUGRAIWDSMJHZSDEHOPSWXRBZJJMIOIZAFXWXODHS");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.923196211567758;
    tmp_msg_0.lon = 0.609399586914514;
    tmp_msg_0.depth = 0.6377795057832808;
    tmp_msg_0.roll = 0.8766879330274115;
    tmp_msg_0.pitch = 0.28696570451130865;
    tmp_msg_0.yaw = 0.40566438224442847;
    tmp_msg_0.rcp_time = 0.39233134216391563;
    tmp_msg_0.sid.assign("OKEVCHKYZAOYFZXSSNPTBHTSMVMKQVCDSZDTDIPPATOKJKIWAAEMCUWFHUGVHCGDRHKUCEJXTTEXIZQZDGZFJMRHFSRNJEIMTXDYLWGWRUVROEJNEXTVYGHFPGI");
    tmp_msg_0.s_type = 37U;
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
    msg.setTimeStamp(0.6902215414218285);
    msg.setSource(41839U);
    msg.setSourceEntity(166U);
    msg.setDestination(34030U);
    msg.setDestinationEntity(184U);
    msg.localname.assign("SUHXKYFCLMHOAXHADWDEZDMLDVYLKKUPRCVMAX");

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
    msg.setTimeStamp(0.8289232923667477);
    msg.setSource(35882U);
    msg.setSourceEntity(35U);
    msg.setDestination(46018U);
    msg.setDestinationEntity(224U);
    msg.localname.assign("TUXIQRNRDZTEAIKNSTXRAYPOQFXYRWSHLZXKFPHUGGHNXUZBREBNTCAAUTDEZ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HIHUTZCSPWNUGTKRMVBYPNNKOOFCPCZMRZCOYIUMDHNJGQHBIMTGGPPCRQQJEGTZRVJSVQLIHDQXPZQHKEAUBYADGCLWALKBUFRBNHVWTMOBMIQOYKTKHLKPAXZDULQJTBDDYIAIRSLFEUYLFSGNMXOEXVSWSDCIMWFWDXCH");
    tmp_msg_0.sys_type = 85U;
    tmp_msg_0.owner = 5487U;
    tmp_msg_0.lat = 0.9742974903058446;
    tmp_msg_0.lon = 0.6073221801341719;
    tmp_msg_0.height = 0.031684413862381744;
    tmp_msg_0.services.assign("JVZAQNOJGST");
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
    msg.setTimeStamp(0.8681702217186378);
    msg.setSource(32669U);
    msg.setSourceEntity(90U);
    msg.setDestination(22960U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("GGDUZHVSUHMIHYZJKXBGIJNECUGXESDWLLCNRPQWOKLXERLOQNILZTKQXMMZXKPXRQJRUBMGXCEBWQFPZPJIWCSZKPHIZFWZJFCMDEFRHPVCYFPDJTUSDNUASXWJPCXOJORGENFUVTHFSSTYMBKUYELEYDUORCQHVEBPXQJCDPFQHSVAGLVVYDGKKADTDSGWOHMMSZTJVFTOWA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MLBFAKIQIMDOHGUMOWHQSRFUXGQSIOPDAMTMAXNOJKHOYTRJTZGPRNYFKEJAWKEVQHNSSGFNSXUDHIDZMLXXIVEHZBGFUQOCUITHVRWFHFTYNTDIQXZIJBQDDHMNTYDLVEZVKPIFGPBECAVSNNYWUUWEOCJOYCWRMZPLNABWH");
    tmp_msg_0.sys_type = 160U;
    tmp_msg_0.owner = 52566U;
    tmp_msg_0.lat = 0.49314075723760653;
    tmp_msg_0.lon = 0.6270885248185105;
    tmp_msg_0.height = 0.6339360824977461;
    tmp_msg_0.services.assign("YZZJUTMDRJG");
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
    msg.setTimeStamp(0.5928176404458403);
    msg.setSource(44249U);
    msg.setSourceEntity(173U);
    msg.setDestination(25494U);
    msg.setDestinationEntity(159U);
    msg.timeline.assign("ZPDPZMTOSLWYEMWYLKTGTXULUCJTKKEXXQMNIVLUZWIVCZVOOYHMCIVEDPABZSHPALKQMKKMAVUYLKVTHYBCHCGDAWBBNLXEIHTFXACRKWGRHFJPPQOSNBJAIDAOBCUMCHVFNMSGGEZPNQEJEIICJFMAKXUHYYDIOOGLELKOBCWAJZHQQUNVJWGX");
    msg.predicate.assign("WMPQDGVRDYXITHVLRODTTVMAPWRLIQIKYFZDDZCNYLOAKBIORQGMYSYQHGICNBCCZXBNWTPTOEBZOEPQOWRMFHXLXEHUTMJZSTXVQEKHKSKS");
    msg.attributes.assign("ZZMDANVRRKTPLYCFOKGNTLHBKBUXVSADDJVISCMWYDQIPTCRDGCQBLNFHZQBCEAQMXRJBWALUGARNYCRWIVVIQWANUHPYROPLDSENBCJZYHLFICXUPKGYHMESVIFAXQVPEEOGXAQMWDIATZYLTOSSDCKUJBFQVCQZYNGNDFFPVMJBSOOSTUWUI");

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
    msg.setTimeStamp(0.8380521516477056);
    msg.setSource(22586U);
    msg.setSourceEntity(196U);
    msg.setDestination(17538U);
    msg.setDestinationEntity(154U);
    msg.timeline.assign("VWYDEIVGUNHCYRBKIPZIDLBYTFDEBYGXAOFSONZQYROMJOPBLGEMWDHNUQRLBXGDMGWVSKHCEHIHD");
    msg.predicate.assign("YEORLZKWDAIGDMUTZOJFMQFCAKRKUWKDBRSOIWHHTVWCCJASQZASLBNRHZECKPATRYOHOXUEZTVOSBXCFKNWIPU");
    msg.attributes.assign("ALDTAYBPBUNHMZMKBVNCOXGBKMSSEMERVCGXASXTDYUIOBHBQCKAQNUJVECA");

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
    msg.setTimeStamp(0.1938740388667074);
    msg.setSource(45485U);
    msg.setSourceEntity(50U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("OHWTUWHBPJUIFOOIUSKVECWUBLXOLPPQRCBLZKUDUINDNIEQQGZCHHHBJAQBJBWHEVOEQQPSLYRIWFOQCPYZAPXATPYTRUWVVMXPT");
    msg.predicate.assign("FPSVIIOEMZHFFFVAQQYIZXADUQPSUVTKWXUNVMHBCYRZYWAUPCBQEKGFNOHUNRXJULDMXTUXKPWPXFYEROEBCHNBGDXDNQBMWXDEZURKZONVTSDCIGZPILCHRDONFSVWGJTYHZKWWSKYILLSKHRYJLHMWRQELNBZUXTZEIQPEGYPFOSWVTGSMGMILTIUCZGSDJLAACIALJFATSABNKERBPWXMMBCGVCMJHJGRBYOVQHVJOQQYLONK");
    msg.attributes.assign("EKRHNNXPWZDLVBBUDDPAOULPPAWTNHETGNARLKYLMZDCYJYPBBCQKCBNRWHZRXODRHURSJLVJZM");

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
    msg.setTimeStamp(0.6851491476643603);
    msg.setSource(16749U);
    msg.setSourceEntity(204U);
    msg.setDestination(48769U);
    msg.setDestinationEntity(56U);
    msg.command = 51U;
    msg.goal_id.assign("RTLKXLLHADHMYJEUJOUXUAYPSQPGV");
    msg.goal_xml.assign("BQEMVLAZLOTIENEAIJJXICHBRG");

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
    msg.setTimeStamp(0.13761881000999243);
    msg.setSource(61954U);
    msg.setSourceEntity(82U);
    msg.setDestination(26336U);
    msg.setDestinationEntity(4U);
    msg.command = 112U;
    msg.goal_id.assign("TXJHJUCHLQNYLKUFNFQIQXNYEGXVWBZZDEZCYSPYXAZGBLDDUQBFMPJEISMBTBWROPUDLQGJPTNLKUSFBJVPRRSOZK");
    msg.goal_xml.assign("DSIMBRHNXATSCLNBJUPQHQNGVAGQBCRSZHKEITPPGAPIPJMOVVCFNUBMGWPLFJJYCYVXTJUOOZAIULMQHTXXELQIUYEYBTPHFHRESMEAEHZQDGOCJIDBNKLUZLAXVEOPRFWT");

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
    msg.setTimeStamp(0.8418516616689372);
    msg.setSource(65435U);
    msg.setSourceEntity(234U);
    msg.setDestination(8947U);
    msg.setDestinationEntity(166U);
    msg.command = 19U;
    msg.goal_id.assign("NUJZQSWLVEVBKYRVDRRWPDTYSIQHONCBJFWIANGXQVKUZOZHQSOMGCUAHVPENCNIKLVTBGUEUCG");
    msg.goal_xml.assign("QCLCRSSSJYFQUFNASLCOIQQRRMZIHQMELASBUICTCKVPUNDCGXBSVMUBKZMJNEPZXGWULAFJXOMSLNEHWYOGMVD");

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
    msg.setTimeStamp(0.21999156267055675);
    msg.setSource(65463U);
    msg.setSourceEntity(146U);
    msg.setDestination(6525U);
    msg.setDestinationEntity(203U);
    msg.op = 197U;
    msg.goal_id.assign("VOFTSZQHMQSJZHVELYOFQNOEJVUVSMNXILRGGBYQUCLZFJIIPQTHIBPYUNPLZGRAKUYDXDBWSEBLEDDPVSGGNDXFLICHCJCEKFOXSBCKRXMLDSSWPXHHAREYGDOPIZXGOKEIQKAQTMEYPWASNBMUGZNYHHJOHFOJQIDWIHZTCYUYTKVRNRPMQJWRUACATAUPFBLCMYQPBRXAZWGBTFZWFZTXVCDOKCSWFENBRONAKWTGVAUJJIWXKJNL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CPNDLDNOYPAFVHLHEEGLPEVTRZWNKUMMEXNZYW");
    tmp_msg_0.predicate.assign("XDEXWOBZKPURGFOUYMCRPRXRLVFFANHFAKYUWTCTWJOXGSYBPQBGFGGLZAWSEXJSSSYOZGWIRNAFOTFNYIVJFXQCIEIIKJMLNOLHBYVYFQJUCTUFJKTVMWYSLDDDVDGRDDYQCABNHEVMCEGEPCLEBROHQUPIPWHKJMTMXCUDKPQCAIQHZNKWOAGZTJLZTQWRJLBXRQDTEVUBBOPMLZHNMAQNZCHJLSIK");
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
    msg.setTimeStamp(0.7970819025826098);
    msg.setSource(28927U);
    msg.setSourceEntity(143U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(6U);
    msg.op = 122U;
    msg.goal_id.assign("KCBVPTHRSMINYDJYOHUFHDJTWVYQUWMIMUKYWHMYWQAQLDCO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NTMHJGNTFMJWQUKWLLZRAJMUIXGSQSECQZARYBEVJVYFMHNNVGAMJDMAIBQDICFSSEHQNEORSUANRVYLOVEIXTATFWZUCFABBPGULZZMEEEXFYIUIWDLXYCVYJRKKRSOJFDZSYOVMCGKBDVKBZIUUQBHOZILCYNADEYCTKDWPNYAOVHFPKFRLXGCISSDHKGPOJAKDZHEDMPLKPCQHOXTXB");
    tmp_msg_0.predicate.assign("XHKFOHMLWNJNDKCVKDGDYGJSFPIQBIVLEZXPEXKTJBHLUCKRXZECXLYQZTJILPIBXJAQMRQEALDVZCEMRHJBKPCAUZFFQYSVHOSSKSEIXGWMNVIQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UVJZLZQISKYSMTXUPZMTQSHJVLKUYRKELEERUKHFVNZBOHXETMRPLRYTWGGHPYZTLRDULQCBCGNZNMEQZZYHRMOUKJSGWXGWICRKTWCQAQGAIABSUYGBPXXWJFUPFMEVQFNDSWOKICFCBXAOSGDPCGKBTGIINCEFDALNRMWNWISDAIVK");
    tmp_tmp_msg_0_0.attr_type = 79U;
    tmp_tmp_msg_0_0.min.assign("OHCXSSBVLPALYRTWBDOOWVHAVTJCLRWUMUQFEQANCCCXDCRSGQFPJIYNTTUHGDPJKVMFBAKZQUXEULMRISGNDKNGVRBPTSMEKEJUENZKGKDUYHYCFEFNOZFOPWXQURGPAFMAZOIVMQYTTUMQYAWXVKJMLQLYJODIGNYFSIHKVXPKTBLWBUITADERJLMFDVIZNSCJORSMEVGOJKHDPLQSX");
    tmp_tmp_msg_0_0.max.assign("NONXZIKELZKTFGKRPVNXTIFLMHEXMWPQU");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9366473290863646);
    msg.setSource(46227U);
    msg.setSourceEntity(31U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(220U);
    msg.op = 24U;
    msg.goal_id.assign("TECAKFNYDHWWMNUDRZZWEAWLWYREVRLJSKGGHDAONMNXIROUQNOYXHRKMMSMYVOSCOJLILTFPIQGZFPDKHWJADSPEUEJQVKVOVITRIXKIBQKBFVZMECJGNUAGJNSEZRJLGCIF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YTRCLUYUIWXJKNXQMDRKPWISAJHXMLLQYRGJUTABHAGTFMMUQIOLRJWFRIBDYLDYTEELWFQKOVCAZSNEVOATMNHQBGVPZFQUSPAFTXZMSZKCFXABCNIYGURLMFZNPGUUGNZVNNIWBRDOSEOHNYQDSTWULDJCYTJLDNCHIWGOPJJXRBKOEQSPKGZKHSK");
    tmp_msg_0.predicate.assign("CRBKAICVQDMDNZHWPYEEOGZSBGZLPSWMPDHHALCPRGWBDZVAPRTGVQSHRNLFOIBHZJJEGXAYOIYFWDVXPVRSSQOJIQUJVVSJ");
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
    msg.setTimeStamp(0.05291241971924121);
    msg.setSource(17037U);
    msg.setSourceEntity(205U);
    msg.setDestination(18102U);
    msg.setDestinationEntity(173U);
    msg.name.assign("FXSPFQBRVICZGQHSLSARMRMNLOBDNFRGNMJZTSXZBQXYKSVBABJEHWQTJNWXKJAYCFYEYZUCWORPXIOELZUBVGPTZXFUJDMWMPTCAFUTQWRPUIUYMYKJLTTIHWQGYUDPQBQJELOFNNXJMLCLFDLVGOKOAUPHFPNNOJSHVXBCKVMZGWKZA");
    msg.attr_type = 225U;
    msg.min.assign("EMCIXZQODHILJABYFRQAMUOZKEHQCBGIUCAYYC");
    msg.max.assign("DZMSPVHQLHYPUOTRBNBWWYXTLYBRDBDOAZKPYIOALUNENTJNHKBPQVQWIAPCFFWTRIVQDUPGUVAT");

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
    msg.setTimeStamp(0.4428676239290632);
    msg.setSource(2332U);
    msg.setSourceEntity(86U);
    msg.setDestination(29603U);
    msg.setDestinationEntity(23U);
    msg.name.assign("TRNOVLFPFLO");
    msg.attr_type = 19U;
    msg.min.assign("GAUTXJTOJUDNPWQRHCVBXMDJNLNKWHHVKAGZKSVLACPUKCEZFPAXIXDPLITMRNMVKSWTQFOYTYMCZRKNHBSGFHJIFPLYSUSFJLUUWGBYXSTTIXZYUGJLJVJLNMFBFIOZWOAWYSQCMWQRBXMWVIEUHGKKXBZYVFMPQSUDOGEIMCSOHTQDGVNAODDADEEJHHIACVRAOLESRBZFRIENMQRPCZ");
    msg.max.assign("LCMVJNFQSPCPKQYLHEIFKGTXADMPXTZANBPBRHQGRLZBAESMIZDHZMUVKJGMWDGBOTNPWKGCGPIWURVRTBXKNAJDFMNRMSIBASROEVARTNBOYCILHVLOHCAEKDCURKUXWNCDLCSWEIUFUTWZQBJMYLSDYLFDLQSXJFZEPIHQGFLFQWTICHVRPOSXJUSYXFGZBUQTDVEAAQWVWEKYVKPWEJTM");

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
    msg.setTimeStamp(0.753417164329065);
    msg.setSource(56728U);
    msg.setSourceEntity(230U);
    msg.setDestination(52644U);
    msg.setDestinationEntity(171U);
    msg.name.assign("DCWCGOXPFTFPCPPJVULGZHWKRQVHSXUTZITLJLMBUMCNCUBELTEWKSZTBCWVARKEJBIVDAIYDWTNURZSFNHRRQPIAAHRGNBZ");
    msg.attr_type = 125U;
    msg.min.assign("HBPTSCMEDWPEEFYXSITISWRLQKKNMDDRXOVRSLRCRSGTJOUMHHKNRKAGAAWFEYIQBHPAFPPMSQMGJYBXIRHPWPONAVCGBSLTWZLUBLDEKEBMXAFQGHGUWXQCIZENNJGJNFJEXNOFCUCTQOEKAZJALUUMMV");
    msg.max.assign("GRPPMHCZGJLGUUDINYRWWDSUTVRYTFOSGUUYLUQLKANWIDKEYIJKTZEHKKOMXRPHDYBRZRECQKSHVEELNWFKAMTXGPECPPQHMV");

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
    msg.setTimeStamp(0.08154768883300445);
    msg.setSource(51783U);
    msg.setSourceEntity(11U);
    msg.setDestination(56306U);
    msg.setDestinationEntity(71U);
    msg.timeline.assign("BFIBRKTOQCBTXTNEOGSAYZAOMRGZUKSWZAHMAEJGODASVKJGVYJVLDYQGOFCYWZCCQAVQPJXRVDWVYVEHWQTPVAPXEKBBCDUNYMUNHAWIUFMZMQWKWLCSXFHPBFBPTDIRLSCD");
    msg.predicate.assign("EQKJKVJATSZJNHECNIEYYWVWLPVZVCASMNMYOHBTTZAZHTXXYOUERGVBFQCSACKRNDUGNDYLGFVQHALLOXINBBDUEJKQJYIPRWFVUPXTMOKAXNTOXHXPTMRVPBJFTHGPXWCZQZSWEEUHVLBQMIDKZRDBAPDUGXZWYMBQJVYQAKLJMLSIGDGQMKLFSCXAMOGELROZSFGNUCDSIRHRFTWHJFBNRUSWZNTQIK");

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
    msg.setTimeStamp(0.5238495719288918);
    msg.setSource(19952U);
    msg.setSourceEntity(161U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(76U);
    msg.timeline.assign("UDZMQSSZQSOXKAGAJLYAISZOFTCLAQXSJEAHKZDNGDTXGPGBVALWYDONSJWRAEFJOZVVTOFGHKRUDQWMLTGVKCXAPLJWLIINRQCKKMMMNHVFXXODDZKGFOCOZYHKJZGCMWQGIPULBEWIQQBTITLSXWD");
    msg.predicate.assign("ENDIGNDTUZHPBUPNZKLYSIZJTPJSFYMXLQMBIFLERDFTZGHK");

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
    msg.setTimeStamp(0.04840504317367522);
    msg.setSource(32572U);
    msg.setSourceEntity(233U);
    msg.setDestination(60689U);
    msg.setDestinationEntity(105U);
    msg.timeline.assign("RBLTBKXYHYTECNGZXPHTN");
    msg.predicate.assign("BHCDYIIWJTQGXPQVHPTMJTOBHCDLJMFUSALVUPVWAMLQVWSFKKFUKRJWCIOAFIXVMFCRZNJRFYZDLOINZGHLKNDHVUGXKHXQZTSTSKODURZPWGNDPBLDIYFVXRTNSOMCOHFAZXCCLUHVPYGGZESYBPGEYGJFBXVKRLNHMBYGKQRNIQODYQRICTYQBBQABSNEOWZWLCAXAOISJPAEXPO");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EVHEAGWEWEDNZJQWAPEZJVKNZTJOGCYXLKBUXHLBWIVMCUSHLBGIOKFWNYFNKGTEKGOCMCJRDKTIIRJGCYOAZQNPMIKSAIPREITPSFURUPVASVXTDCQTQFDXLLXCZUOGHYPAVVEOZHHMWQLXQIFRPASFOHBYVOPGMTXDUYVVYJWFUJXIURKDOORBDZZRHWSPW");
    tmp_msg_0.attr_type = 234U;
    tmp_msg_0.min.assign("IJABRUMMZKQRQGTSXFDIZXCP");
    tmp_msg_0.max.assign("BOGXSUPNJXZEHNLTA");
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
    msg.setTimeStamp(0.04834813950727612);
    msg.setSource(34868U);
    msg.setSourceEntity(252U);
    msg.setDestination(41986U);
    msg.setDestinationEntity(68U);
    msg.reactor.assign("TCQAISXYELZBJKYTGOFLBLNJTOVGMHLPBQWKNAXOVXXDCPGLIFZWGUHNDNYLSWMZCKYMZGZVXQKPBEDHWHZXWIQFCNOYMKIDILHTSJTRHBQISTEKMFOVEACHQRNEBPNIFPVW");

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
    msg.setTimeStamp(0.4388725403057563);
    msg.setSource(6683U);
    msg.setSourceEntity(67U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(159U);
    msg.reactor.assign("QYAEFJDUZRACGVNOORNMTVGPIZMKYQFCYHSWQEEWFLBXIAWEFRXSIRACLJYZZETCTVCTXSOLPGLDVEZKSGEDMKMPOKXGWQSJVLXTPTJIQANOYGYAMUIBWHSHDIJRJTWNXNKNHEWJRWLBJICRINZSZDFFFQCUGCJBDHMWCPBURLUMFIVANKQASCHSVPESLUQXXURTZGMQHYYXBPUOLAHUBPNZOMKYREKWUJGZBHTPBLKDYKHATOD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NDUAXYYUVJWTOFJDRZELXWBNLFYONYQVJIGFXZCAMMJFZRTEKLUZLPQLYCIDXHGKMZCPIQTPMWKTYVSOHQAFJSNXVSFEZUSTLLSIMCDSPEIVADVADDCBGWKWMQTRHRGXKDTYLEKBNIASBHXQYXVGMQGBKPJXWOLLOXMIJBKKZQRRFAJTVFAHIBAFUO");
    tmp_msg_0.predicate.assign("XNMUDYWORKCQGBKKZLWZVXOYDPQAHNYKKDFTEGGIUQSYUMZUEJHQYJBAVDOHCARQLTIGDMXCMQFPTGWIIKBUMZCVDJXMJRCAJDYXRKXFXWNBYTLLEIPYOZVUUTQHN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BQQRMFDOPXLYSCJNFTQKLMWJIAIYHPUYZFFVZOQPDHDZTBUANGSVOSPTJZWRQLFEVLJSICORYHVEGEPSXZYATEVRGZSADNCZIPNAEWJUBOKWONMYGBXDRJBMCVLRFNHTLPBMUXTSEHXDCKWBZXQTQJIWMESGZMGJJYTLKVKLVXIRABGCDIOUHIYKQUPMEVOCTGQKHSLUNACTPNESYNQUW");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("AVHJSWOHMGKCHDTIGDDBXFCMGLTRBVZULWXNBUISFAMVYIOUSBNDTSQPSJMREGDNLGFZKLPYYYYCRRAUJEHJUPNTCVRFPZAISDHXFQWWBNOKPIJAXNNTUKWXCXEGBQOSVLIDEZMLLKOQPGHNAKJVARQVEJNYOVQLQPGYZYRWWCARORQXIIOTBAOULZTEJSACBVWTPHQCNDUHFHUXL");
    tmp_tmp_msg_0_0.max.assign("MICBLWIYOPBWKPLEJBLSXKOFGUNYPMCXTPUXQFFUJ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.29688774572557497);
    msg.setSource(53062U);
    msg.setSourceEntity(48U);
    msg.setDestination(40777U);
    msg.setDestinationEntity(234U);
    msg.reactor.assign("MEWKLYSWIHJLJBMLFZOTXCEGUJPNAEUMGZFLCVBQVBBFVRPQEPFHSIGUDKCHYVXDIVQOOKQUKYZGLFUCIPXDSYLJBWFRMMWCEHZRFSDBAQYSPNXLAMINTQFTEWGISREMXDOVKCSTHUAHZWXWDCJNARZWIDYAYOJPAAXRBXW");

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
    msg.setTimeStamp(0.4295326543763842);
    msg.setSource(33517U);
    msg.setSourceEntity(24U);
    msg.setDestination(31307U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("FHCYAQZQDFPWMTMXJTDUBGGOUXNGYMDLKFIVBJVOKOWOEKTSLALIRCEPUPSMEHSSRKCRWGVQLMZENBORDINPCTIQMVKDXFFZYZPNZYUJHEJOUXMDCATTWBJHAGRKXYYLQCVANWEGWVUCHISSFSZLJBTOLZGANRBQDUIFPOQOXDTXKWNRSTVHVIRHMYRZPVWWEZGQAIJLZ");
    msg.data.assign("TYEKNSXOGQZMXICWPQHHXTDVAJSMUNTLDGKHIYFQJGXIEANOLCUPOWMEFYATCRTABUUJZEWDXIWWZHKQEYIJBNFNSUMGONAQPDMLHNFRLTIUROQCRCZHPLWAVIHVSZCFQEFYLPGDVPZPOZSQGPJKJFESMSVJKAKWOYPUTBRLHOKXPZTDELJSCXWZJBVLHTSNQ");

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
    msg.setTimeStamp(0.9895486669909729);
    msg.setSource(18569U);
    msg.setSourceEntity(181U);
    msg.setDestination(48250U);
    msg.setDestinationEntity(240U);
    msg.topic.assign("CXWAJYXQKBZEYXZTHNUUNEQVJAPONZBZWQDATDACMYMGVOKJJMYSOCVUSDKSXNIKMRJVRDVCAIWTXJLAJFREXLBZBRDANRELYIFWCNPWNOVPUXQFEOBCOPIGOMQULAIYHMKQDRHKZSAJHXXRLZTGSTEZUICUFECCKMHHVHWBLEITAUOYVORFDBMWGWYP");
    msg.data.assign("TWQKWRNEKFRDBYPZGGHGTEODXUUDCFMPKPYZGBZDJYHZQBNXIIXGHBUFGIQUWYZOTYAXIPUJVMLDLSGKABTKCWIZKSQOVRNPDHPKXEANI");

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
    msg.setTimeStamp(0.9811966309893079);
    msg.setSource(27908U);
    msg.setSourceEntity(163U);
    msg.setDestination(61064U);
    msg.setDestinationEntity(0U);
    msg.topic.assign("ZPNWGSFSLVMARJWDTXLJYYIFOEDHECUDEPZHNSXICLRWRXVHWIZQYOWOQOYRHJBVNCJXJZMYCRTBMCFAVUPUXKAGSUYULUONDBVGWMNBFAQBMXOXGJABBDSAIFLCPFZFPOPFRECEWHNSGHKQAQEELLETDRPKOJKIGNTKPKFTCNNGVEBOHHWSIUTVKUKILQHNJMXYUIMQWIVRYZQMAFW");
    msg.data.assign("CMVYYIFKCCCDHBPLRRAPFRHTZKNTVNAUXITWRYZTSMYUHGONAOGDEHSFDZVHYVQWQETQEQWLIFPGBKFRGJDYPTHWGCEYEKMMFFLDIZJQBAQRGUZLXIMWOLJDNLMBSAHDULDSIPZJRDHFEXVAGILSNXACXCVJPGOHCGMPOYOXFIWUNJNVUKGRBLMMKAXQUCIECWKSBITWZAKUJR");

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
    msg.setTimeStamp(0.14321677413867517);
    msg.setSource(54727U);
    msg.setSourceEntity(41U);
    msg.setDestination(11698U);
    msg.setDestinationEntity(188U);
    msg.frameid = 7U;
    const signed char tmp_msg_0[] = {-48, -45, 33, -4, -59, -98, -16, 68, -55, -17, 77, -71, -62, 14, -50, 121, 81, 123, -73, -56, -37, -2, -15, -24, 108, -126, 93, 57, 41, 51, -95, -60, 7, 95, -112, 1, 103, 60, 11, -14, -41, -64, -113, -34, 115, -60, -69, 56, 108, 126, -116, 56, 41, 45, -70, 27, -53, -33, -81, -90, 73, 44, -70, -98, 105, 8, -4, -1, 73, 57, 15, -22, 2, -22, 90, -9, 105, 96, 30, 124, -67, -101, -90, -34, 61, 39, 77, -48, -90, 12, -90, 55, 126, -82, 12, 74, 61, 82, -125, 90, -101, 87, -36, 53, -7, 56, 54, 27, 46, -93, -2, 119, -119, -113, 87, 66, -80, -85, 89, 80, -75, 34, 121, -36, -47, 68, 15, -58, 15, -126, 38, 114, -55, 77, 81, -39, 28, 16, -71, 91, -20, -96, 106, 36, 8, 83, -37, 96, -123, 13, -128, -28, -49, -61, 30, -57, 35, 97, 30, -28, -29, 49, 73, 97, 6, -41, -112, 81};
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
    msg.setTimeStamp(0.8435620514081995);
    msg.setSource(26504U);
    msg.setSourceEntity(176U);
    msg.setDestination(26752U);
    msg.setDestinationEntity(31U);
    msg.frameid = 99U;
    const signed char tmp_msg_0[] = {-26, 8, -58, -69, 71, 25, -20, -102, 107, 85, 105, -1, -7, -114, -56, -75, 126, -3, -70, -79, 45, 38, -91, -93, -34, -125, 50, -61, 91, 32, -24, 90, 95, -83, -88, 125, 83, 71, -51, 64, -63, -72, -40, 113, 114, -21, -74, 2, -48, -17, -43, -89, 68, 19, 91, 48, 126, -50, 114, 85, -115, 38, 115, 13, -84, -74, -91, 43, -66, 99, 93, 6, 28, 63, 10, -48, -123, -7, -44, 100, 125, -61, -114, -26, -43, -119, -121, -75, -25, -118, 55, 10, -17, -90, -105, 68, 21, -22, 83, -22, -115, 5, 39, -87, 89, -118, 114, -25, 32, 120, 37, -85, 30, 20, 45, -44, -45, -12, 58, -36, 57, -117, 103, 96, 90, -89, -75, -68, 88, -12, -31, 112, -102, -122, -18, -75, -50, 25, 126, 46, 51, 88, -16, 17, 112, 110, -89, -80, -88, -89, -3, -28, 25, 35, -6, 13, -85, -66, 12, 108, -9, 75, 50, -43, 73, -127, 125, 35, -106, -70, 52, -55, -42, -107, -93, 39, -52, 80, 29, -114, 25, 38, 78, -51, 91, 66, 65, 2, -114, -36, -2, 45, 111, -105, 79, 119, -122, -21, -50, 23, 7};
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
    msg.setTimeStamp(0.8840241197881841);
    msg.setSource(8505U);
    msg.setSourceEntity(49U);
    msg.setDestination(2857U);
    msg.setDestinationEntity(16U);
    msg.frameid = 67U;
    const signed char tmp_msg_0[] = {-50, -11, 82, 48, 27, -65, 52, 45, -21, -22, -115, 41, -36, -118, 77, -84, 86, 121, -108, -10, -45, -79, -49, 57, 87, -105, -23, -24, -8, -9, 36, -60, -24, 94, -36, -76, 12, -102, -89, 42, 10, 40, 29, 42, 29, -67, -51, 93, 71, 109, 65, 30, -100, -80, 120, -17, -45, 10, 33, 34, -113, 106, -109, -87, -82, -124, -105, -89, -59, 54, -49, -97, -44, 60, 90, -72, 77, 11, -5, 96, 68, 23, 49, -42, 83, -106, 121, 126, -113, 25, -112, 88, -90, -72, -17, 48, -48, 29, -101, 65, 86, -120, -21, -27, -40, 79, 26, 62, 76, 2, 50, -36, 122, -60, -57, -119, 112, -125, 25, -96, -40, 80, -70, 38, 87, -15, 87, 20, -3, -127, -64, 103, -37, -28, 26, -116, 35, -87, -18, -114, -39, 116, 38, -126, -112, 2};
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
    msg.setTimeStamp(0.7705372347469086);
    msg.setSource(13101U);
    msg.setSourceEntity(143U);
    msg.setDestination(3753U);
    msg.setDestinationEntity(168U);
    msg.fps = 173U;
    msg.quality = 162U;
    msg.reps = 175U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.29571473195346476);
    msg.setSource(52115U);
    msg.setSourceEntity(241U);
    msg.setDestination(3516U);
    msg.setDestinationEntity(25U);
    msg.fps = 63U;
    msg.quality = 204U;
    msg.reps = 162U;
    msg.tsize = 162U;

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
    msg.setTimeStamp(0.4476328236114898);
    msg.setSource(18709U);
    msg.setSourceEntity(25U);
    msg.setDestination(42509U);
    msg.setDestinationEntity(65U);
    msg.fps = 5U;
    msg.quality = 11U;
    msg.reps = 232U;
    msg.tsize = 232U;

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
    msg.setTimeStamp(0.25540110370039015);
    msg.setSource(64387U);
    msg.setSourceEntity(231U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.8572791406584848;
    msg.lon = 0.40143906425399345;
    msg.depth = 195U;
    msg.speed = 0.9205037451662916;
    msg.psi = 0.9544826120876203;

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
    msg.setTimeStamp(0.480843169015179);
    msg.setSource(63344U);
    msg.setSourceEntity(190U);
    msg.setDestination(57408U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.2708995287489878;
    msg.lon = 0.723816223363155;
    msg.depth = 130U;
    msg.speed = 0.0418994301335216;
    msg.psi = 0.8114983141797604;

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
    msg.setTimeStamp(0.09475094496682757);
    msg.setSource(23970U);
    msg.setSourceEntity(155U);
    msg.setDestination(29844U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.9756886093296318;
    msg.lon = 0.4948790384464711;
    msg.depth = 242U;
    msg.speed = 0.5854082519522051;
    msg.psi = 0.28868167539361456;

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
    msg.setTimeStamp(0.9714778266414602);
    msg.setSource(12680U);
    msg.setSourceEntity(146U);
    msg.setDestination(15381U);
    msg.setDestinationEntity(140U);
    msg.label.assign("MJHBFJWQBLDDWHLYRVNRHSDFUJCWAYBRVPJKLNNWRISQUVHGPTPCGOQUBLUSIYOCKUYDVIVFMEPVAWTPNMXSVSSAWBCXKEVPJWETMQTZJZKCOXXHKUUJCFATTPZHFOTGWLXWKPCFXDRZSYEWQIAXGJDEAGJHVDZZAIFARBOHIMPPUMTOHREENISGGFBYZDH");
    msg.lat = 0.7643688285233747;
    msg.lon = 0.42420131989118215;
    msg.z = 0.5350357582139424;
    msg.z_units = 141U;
    msg.cog = 0.33560420320524753;
    msg.sog = 0.3012470587789887;

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
    msg.setTimeStamp(0.4748235370682333);
    msg.setSource(16105U);
    msg.setSourceEntity(205U);
    msg.setDestination(54822U);
    msg.setDestinationEntity(143U);
    msg.label.assign("LLHQZTSMPYNGFYURVXPWAWIOFDLRKTTRNADCMVJZXEJHHKSEGFJIKJHFLZDOFLORKFNJACKYPIHSWHHROWUXWUXOBPVFXCWPDDMNSYVTXTGYMKXYASWMJNOJIWCQKGVBCNGMJBIVEUABQXUIZEZJPGEBSFQKBACKDYDVFQUENPAF");
    msg.lat = 0.910522775922817;
    msg.lon = 0.009410320786710225;
    msg.z = 0.6399491861318729;
    msg.z_units = 35U;
    msg.cog = 0.07504378383832067;
    msg.sog = 0.7095557453074386;

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
    msg.setTimeStamp(0.9993439663256237);
    msg.setSource(10645U);
    msg.setSourceEntity(148U);
    msg.setDestination(284U);
    msg.setDestinationEntity(59U);
    msg.label.assign("PHEZZVHMDYOBATXJUJFMSAGZWGEOZRXAHVTBEBTNFVLLNNEMLBCOZIXJPSCWTRBIDMZHXGIAMXYJELEFVPLAUHWSKGMQFQIJLURCPKNWDTAYGLDUEPHBQORGSSHFPXIBRVCURTPXFSCNQDJJLBOSOTQMVIYMLNFKOMVFGWTUHYNDXFECTQIMJKCAZBQZEWDKOAOYTNSKAJWQPURQCVKEKBOWYFLYNVZPWRYYX");
    msg.lat = 0.9461508158445875;
    msg.lon = 0.09288558317383888;
    msg.z = 0.03029505193222337;
    msg.z_units = 79U;
    msg.cog = 0.5142156129514064;
    msg.sog = 0.4726244631129849;

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
    msg.setTimeStamp(0.5926269616866294);
    msg.setSource(2225U);
    msg.setSourceEntity(133U);
    msg.setDestination(33480U);
    msg.setDestinationEntity(234U);
    msg.name.assign("OBIRGUMHCWMZHTZEDVNZRGQWQWLWCYYP");
    msg.value.assign("PSTDOMLXIHYTOPDPMDCTLWTKAKBOKPBKDACAFEEGZLQHISTCVOBCDJOZZVSXXRUEZRLRCGYMSAMJIBYPFGOTJFAHTCYQGYWDMKBFAFATCUQMSIWKJOXIQFUCLVFSHLJNZFGWQCGKUPQLX");

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
    msg.setTimeStamp(0.7294970865100258);
    msg.setSource(22914U);
    msg.setSourceEntity(132U);
    msg.setDestination(55064U);
    msg.setDestinationEntity(40U);
    msg.name.assign("YRYQBRYDQYHNOCJRNMFFSWXAVUDSRSZFBVTEDYGPFZZUKRFOKUAJEFJMKUZUFOHEXODPDVGWVLGUIHACKQNBIBGRVDIVIKXTSKBTBJJPAAYUQNPIOPRCGTXQHTI");
    msg.value.assign("CDNSAGCZVBQVPIJTSIFZUEXNYLGMAPZTSYWLUOEOBFXWKBFIJGYDVCRXGSTJWMJCPYRILHVUYHOVFRMJRDOISOASQMGTPQHAYFZBNOVAMGTZXGHHUEDKCBMPOCLJLXOTWCGRZDEXIVKBDJJMYHNAZLEFWUSTMNHNTEBTFWWDERPIDUFIZQNPQYKNCQJLMCGLRLYHXUBEQKCVKAQOG");

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
    msg.setTimeStamp(0.04200579620545597);
    msg.setSource(60552U);
    msg.setSourceEntity(220U);
    msg.setDestination(56996U);
    msg.setDestinationEntity(163U);
    msg.name.assign("RPXQIFAKMTAWPNVLSZZNYDAZJOUKCTAHWKGCTNRMDARNFNEBZEAMQHTVBIECCPOQTKMHFVJIMXXXQEFLVYDYWDLXLNVNMFMLMBKDRPQPQYYBVGALCYXQROSDCQOSTDKJSTWVIFSZABIXQZEJWIRVXSJZOJKFHOSHGHWTGDUSGOEYLWDYJXSQPIGYPCGTPVZHBCBMLEUUIKUJLFKHECNGUGRJIRPGUWRWAUINPAKVFXOHLMHYTFCZ");
    msg.value.assign("QBPPWKRGUIUBOFJLBHJZXYGSQEFHEBPGKZTOMIGRMVFZDYQIQMWRMDCMZMRPYKKEWVUSWCLOKWRZNVUNGBKBVMURHYOTFFOSXFJSRNRBWXYFFZ");

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
    msg.setTimeStamp(0.4183267973977307);
    msg.setSource(57090U);
    msg.setSourceEntity(121U);
    msg.setDestination(30501U);
    msg.setDestinationEntity(195U);
    msg.name.assign("KDMPPRXSOVWTYDVBNFWPSOWUEDVVUOZJJIGNPATBISTYKCWIKXLXSZFPVYCHRYTWJAMBKBOADHZZPRCIUHKDLPZTLEBYDLZGGBFQSZEFKEYOXZFBWCEC");

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
    msg.setTimeStamp(0.7330900548480778);
    msg.setSource(2170U);
    msg.setSourceEntity(239U);
    msg.setDestination(12465U);
    msg.setDestinationEntity(29U);
    msg.name.assign("CPXCOBCRSACSLANPVTRAELYQVYGVYSGKJWECOGHMEXGQBOOKJZWQFJXJXQRNWYXXBLQCHTUGUK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HALJOCYTMMRHPLSDGGFSXJFWIAQVHNJKSWVHXXQROOVQVKYZNMCIIQAKSEQNNZGDJAOURIBBUHJRKWKHGKGFBSDVWEUFEPTWXGZLJGWEJDTWYIJSACYRVBYRFBPVTAHTZPRMZBYVGJOEXLPYTOPIMFRCTFPQGNXZYCWOHARLISYEULCFZTQCVUDLNLQKIXZTBDDXWNALZKCGSMMFENDSDBDSPKYVUCUMPHENFZMLQABPUAMOJX");
    tmp_msg_0.value.assign("XQVIBTPPLIUWDUZAYLSWXFSATUJTRMDANOFYEIZCOACQCVMCCYBFZUPZLHCBFRKCJDURIOQSJNTKFJZEBHNLEMYQYRMEUKYVRLZOTGONQYDUVWIJZFZTVKGAWHMOKIQSRJULOSDPXCIFFUABVSXGPNNTWXMHESYWBOKVGQNOPYCPKCBVTDHHEPXPLQOPFZTIEHHQX");
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
    msg.setTimeStamp(0.722767235129784);
    msg.setSource(12465U);
    msg.setSourceEntity(163U);
    msg.setDestination(21089U);
    msg.setDestinationEntity(169U);
    msg.name.assign("NDMYXTUORRMUNQNUIVCEFWNDDAMJWLGZPVIFUMPLCOVOMHABQZCQNXPYELXTJCGYERROCGECHKGGLZDBFUXWSIUASUBDYHFMAXHJQC");

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
    msg.setTimeStamp(0.4177141517042915);
    msg.setSource(15142U);
    msg.setSourceEntity(87U);
    msg.setDestination(14048U);
    msg.setDestinationEntity(123U);
    msg.name.assign("WZZGDILNBMUQDSSFNHQGKYWLPUNDDPOQXRXEJCSMQMETVAVPTW");
    msg.visibility.assign("LHUJNYTUKZPYZDAGXKVLITFSTAGDNTKRVCWXBVWALNNPJHYNGMCFDTFIVRSOK");
    msg.scope.assign("GRLLFBNZHIMZMIXGUODCMDJKKWBLWWMXAEDVUYQVLOZLUYZXEPFZNTSRRFPAERMKYXQKWUQFTYQDTOHWNUQPZKJNHVHCJVELUAIUKZNRFDWXBYFIQWGTCSNLSAPSCWJBOSWRVPJIZANDHCQMYGIOPVHLNEXEKCRUOGOSEDSCQFUBKSGVEZTAGZPODM");

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
    msg.setTimeStamp(0.0015477867111557408);
    msg.setSource(18385U);
    msg.setSourceEntity(31U);
    msg.setDestination(11487U);
    msg.setDestinationEntity(76U);
    msg.name.assign("HWRJVKQJZBYBLOBBLCMSVUNTFJRUUXDHQHYREPOSWNDACIZAXTDYHCDJDLEBPYGSWUVFOMXSOXTGSGHFLNZLUPYMMOCRYVNGJILQMNKEEFHOIVICASTMJBZOKVQGQAWVEFRRWQBJZMCQJVOMETMZRADMJTAGRSEGTFVWIEPEXKCYQFDSPHGKUIUBQPKLNXABFNYDKGSOHYDSKUZPBJQWPNAHTIFKZNULRZPWIIAKCGFOX");
    msg.visibility.assign("SAOHRBNKSGIPBBRKQWKVKVYVWNPDCWQUYJODFJXLHVRXATBPPEXJEGRBGOHLMVYOIIFZPCWJJHFUISDAMHGXAPATVWIDTSKCAONTMKUAWQSOMFUURMCKNMTNPSXFEZZFKYJYXMTQHVGIYHRNQWMUEGWBSLCIWZVXCDYDSPRILXEHMPAUEVNZZOAHUZCQBTHIBCQTGQOEGRMWQSXGACOYLRJYJDNEJYGFTUKEETFXBDV");
    msg.scope.assign("YHSDIOFNIVKAUOUXBZCUPXQPDWJHYUTJXQULSORSLKVSIBCHLBNGVTILEEPMCRNN");

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
    msg.setTimeStamp(0.90455873117379);
    msg.setSource(61546U);
    msg.setSourceEntity(29U);
    msg.setDestination(56124U);
    msg.setDestinationEntity(138U);
    msg.name.assign("IVIJIYIPNABCPVWVBQPVSRGGOUWINOABSLBRGRLSGZYVEMWSELZRZPEPUGXHJDNMQIOZBQJZEZJQQYCXXFCQEDWVSINLTNEKMUHDUXSZBHNWADZKYZSRGTTPUCJFFMLYFLSHTLYZOBCIRTNJALWRWGGKSAOTPCEAGMXKDCFYAMOXYTUB");
    msg.visibility.assign("SLCRXRKCLHXLFKODWYBQGTFMZTRSSDCLRSZTGPOTUTDYHAVYMNDGHVDJNJHCXBMJEMOAZVND");
    msg.scope.assign("MFSWLUJIWIZUMOKKBUCQHVHKWGBGOZFWDTORYOUZRDNTQAKVZIGSAVJUQFUNSPHONRYAQDEFCXCPAIXLRCVBFNZJDJGCDRF");

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
    msg.setTimeStamp(0.6966688976824941);
    msg.setSource(9829U);
    msg.setSourceEntity(117U);
    msg.setDestination(30321U);
    msg.setDestinationEntity(150U);
    msg.name.assign("LRPEEBMGVLNZSICRCJROAULRIWNEUPGJNKTVBTMJNJPEBHRPGZPTZAHKHFIFWXTBXGZHFIVBTLHZYKSYJRFUSBOLOAADLDY");

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
    msg.setTimeStamp(0.9441266184988393);
    msg.setSource(7729U);
    msg.setSourceEntity(125U);
    msg.setDestination(61447U);
    msg.setDestinationEntity(9U);
    msg.name.assign("GIDKANSTDAWVEXOLSAQZMCXPKOTUYFTWISUNYEOGYLDQMFQDZWBIGDMIWNMUOFHBOZPGJKURVEHQBJXSNCHFSLWQAKQFUEZTXXLSLNQAVTMJPVCOWJRULFULAEGGOKBQDBGIJOJNFRQFCEHSXJMMCPOZQIBRHVTTGUEBBHZMNHVKHWNXCEJKS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DVWODZNKATPKPZSERROEXILUGSQHUZCBSJRFPYUOOWZBXGZVNCKNTURMSRWVAZPGYXMJNNSOEZLGAUMLBDLWVTOFQUWGHTYDPEMLYWALBGDLCRFFLQIKETOQVBJXZZPVQLPEVOXUWBXKNQIYSMMWHCAFJUOAFTAIIEKATYSGGWPJCDTRYHTIJKYJIHRNDNMPYAKWIHZTXBNJGNJVVCRSIMCBUXGCQVHLDHHU");
    tmp_msg_0.value.assign("VUCGURPZOEMCITIXUJLFPJFOVRDBZEECTUPJJFODGSCZCWMHTEWAZCALVFQLHUUVYLNXRUNYHKBMAJMHFXYIGBUKEQSJRXVRWCMTQOHNNFMOEPQLLSOARAZBHKUWMAJYNBWYMTRKKTPJQPYONZFVWNBXNGKASEQFHQSITOEPTLIAVEQIVWGPABYGPXCJXNOGKGRMWMZVCWELBSKKOFYGTXRDDDGKDSDACXYZSPII");
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
    msg.setTimeStamp(0.7945077461344712);
    msg.setSource(62279U);
    msg.setSourceEntity(213U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(222U);
    msg.name.assign("RPWZXKURYDOFXJDNDADCDLEWUTALLANKVZI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NISNACQKRPC");
    tmp_msg_0.value.assign("RSOLUTWIGNGTJJZEGLVESEYORGDGSRKLFBOVRWAXQQQWGEVMPZUUNPRXRTLSFJJIHCXWJUSDCGNEYGHYOAWZTYLARHXRUGYLPQBPVAIZCXOMSCZFFXDHSQOBBHASFDINKMVNCIPWIMJPBTPQIQRAWCABSKVTMOEENFIWKHUNKPEZNUQJFYYYKKHMNSTDJBZVBYBKTCZCLLWOVPIZEJKTXCCDDKDLJMH");
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
    msg.setTimeStamp(0.46621990130994495);
    msg.setSource(26247U);
    msg.setSourceEntity(123U);
    msg.setDestination(62794U);
    msg.setDestinationEntity(29U);
    msg.name.assign("SBCEPMVAQOIPJSSDSWWYXCXYILGXRZFNTJHYCJBGWIPMWJEBCOAKXUCBXHUUWLVUQUHGPEKPTVRSKEORMTRNPSNQURAFUVDKNDSGZCBOFTYWERBFQKHMAXNTNGXYBFDDVRDAISFOOBTEIVKZFZFIWLSGLYINCVTESACNEHHDZHJADPMRTPGKVOXDYJVHZJXNHJ");

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
    msg.setTimeStamp(0.5194180900162982);
    msg.setSource(42597U);
    msg.setSourceEntity(211U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(250U);
    msg.name.assign("AQDSGZADVLGBEXMLXSJMOGHSHOTHYXARNPTUJEUFQSGXCKVLXZDSQR");

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
    msg.setTimeStamp(0.9183505224076907);
    msg.setSource(468U);
    msg.setSourceEntity(48U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(48U);
    msg.name.assign("KSROWXLBUHFYWUDWCNTZGZEFIRZUZCALUSQSMLRYZYDWHGQMNKNVXEKWJMQVLPTWNQUIOKGSFNRHWGOTFMZNVHMBCVDYEDWEYTQSSMLBYHJDGXTJICHWUSJQLTKJHYPIJROBZIGQJZTTCADGXGOZKFMPAMDKRCLLSBBPBJFNQFKUICHFOUPEAAKGJXWIOAAMGFQXETVXLOVKTSZBEPDRHBRXCPDVIVBXUDFIYPYVICSNXNQVAAHCREUROLE");

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
    msg.setTimeStamp(0.8475133373874534);
    msg.setSource(46846U);
    msg.setSourceEntity(2U);
    msg.setDestination(44883U);
    msg.setDestinationEntity(254U);
    msg.timeout = 2118577793U;

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
    msg.setTimeStamp(0.7520158292385948);
    msg.setSource(10265U);
    msg.setSourceEntity(24U);
    msg.setDestination(4625U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2455999406U;

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
    msg.setTimeStamp(0.522208561151466);
    msg.setSource(53475U);
    msg.setSourceEntity(206U);
    msg.setDestination(9316U);
    msg.setDestinationEntity(22U);
    msg.timeout = 3524254604U;

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
    msg.setTimeStamp(0.8867188317326211);
    msg.setSource(639U);
    msg.setSourceEntity(104U);
    msg.setDestination(14281U);
    msg.setDestinationEntity(117U);
    msg.sessid = 3737138585U;

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
    msg.setTimeStamp(0.48669508006821915);
    msg.setSource(30190U);
    msg.setSourceEntity(140U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(190U);
    msg.sessid = 2891729818U;

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
    msg.setTimeStamp(0.689748890045749);
    msg.setSource(23933U);
    msg.setSourceEntity(176U);
    msg.setDestination(21236U);
    msg.setDestinationEntity(224U);
    msg.sessid = 255610066U;

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
    msg.setTimeStamp(0.9609182697332489);
    msg.setSource(60195U);
    msg.setSourceEntity(60U);
    msg.setDestination(52710U);
    msg.setDestinationEntity(95U);
    msg.sessid = 413931601U;
    msg.messages.assign("WLQVCQYPHJZUNGEYKASCOPGPRKCPITZBFYDNJPMRXWANDLLLLRHEVHZZFSMAEXBSMHOHYMJWCBKXPSKIVWAXNGRISAANJUAIGKTECURUVOOKJVSGYQLFYGMTDQTIWPPCYIFATMFDNWJFQNZIFKDBVRTVIOVBBHDHXMXZEEJLRQATBTZFKIYCCKQFGXGCLMWWPPSVUCHLQQDSEWWOUXTROAQUGDYEMNRMSORJOKZTXJHGUUE");

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
    msg.setTimeStamp(0.028503112690611898);
    msg.setSource(31577U);
    msg.setSourceEntity(167U);
    msg.setDestination(9619U);
    msg.setDestinationEntity(185U);
    msg.sessid = 1289591663U;
    msg.messages.assign("VNEFFXHAJCVYOGYMEEACQOKUFAAPXJLQWDWFFHIQLNUYGLSAWVMRTSJCDRGOIMHDZSFTVIZRYCQULUIJVRXTANPWPPVVBHTLCLSNHKTBZIAGIAMTNHCTYASUKIMFCUXVSOSOMODFWWTMEZHQINTGCDZXSHKQJCHMGRVOZZQSSD");

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
    msg.setTimeStamp(0.5769066393405853);
    msg.setSource(3308U);
    msg.setSourceEntity(62U);
    msg.setDestination(40338U);
    msg.setDestinationEntity(20U);
    msg.sessid = 3328597933U;
    msg.messages.assign("XSZIOLLWVXGJSCPWASPMAFXYOJQSEJWYKYRIALURV");

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
    msg.setTimeStamp(0.807003194301214);
    msg.setSource(44317U);
    msg.setSourceEntity(233U);
    msg.setDestination(28762U);
    msg.setDestinationEntity(17U);
    msg.sessid = 586617446U;

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
    msg.setTimeStamp(0.5694561819723601);
    msg.setSource(3624U);
    msg.setSourceEntity(214U);
    msg.setDestination(60806U);
    msg.setDestinationEntity(79U);
    msg.sessid = 424321039U;

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
    msg.setTimeStamp(0.013031830316907245);
    msg.setSource(14088U);
    msg.setSourceEntity(211U);
    msg.setDestination(16678U);
    msg.setDestinationEntity(73U);
    msg.sessid = 4168857580U;

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
    msg.setTimeStamp(0.05411544623555542);
    msg.setSource(28271U);
    msg.setSourceEntity(46U);
    msg.setDestination(38227U);
    msg.setDestinationEntity(71U);
    msg.sessid = 2154683852U;
    msg.status = 76U;

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
    msg.setTimeStamp(0.9355512284749553);
    msg.setSource(2589U);
    msg.setSourceEntity(213U);
    msg.setDestination(8765U);
    msg.setDestinationEntity(19U);
    msg.sessid = 3945157988U;
    msg.status = 244U;

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
    msg.setTimeStamp(0.45633053347347374);
    msg.setSource(23561U);
    msg.setSourceEntity(231U);
    msg.setDestination(53440U);
    msg.setDestinationEntity(104U);
    msg.sessid = 3499170461U;
    msg.status = 27U;

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
    msg.setTimeStamp(0.2912613163380021);
    msg.setSource(61081U);
    msg.setSourceEntity(115U);
    msg.setDestination(7448U);
    msg.setDestinationEntity(127U);
    msg.name.assign("XFYNVXDIDKDGZEOUGHHKIEIBACPAUYOLQQUHZBREHFSTMBVLRPYRJEQACVBFFFCOJNUKERRSRTLUOOEDWJGZNYMUOAREWLBLZSCKVLSTXWDQTGPVSYQOVUAWXCSYTZITQEQQDSRMRCTCJPOEBAGVEYMYXXHNALKGTC");

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
    msg.setTimeStamp(0.6759679470636365);
    msg.setSource(37011U);
    msg.setSourceEntity(14U);
    msg.setDestination(9921U);
    msg.setDestinationEntity(242U);
    msg.name.assign("LEPGVEPTRCCZPEGVIRAKULPDYMZMIEYJHXAAQYZLDGMQKNFTQIVNYFQSSNKWZYVPUAERAGHZEHGHMSOGZTZWNEXJANERCBRPYFKGPFUOXDCNVTOJFLIPJQGHHKMDFQDAJXSOLSYXHCF");

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
    msg.setTimeStamp(0.0174213726718897);
    msg.setSource(45245U);
    msg.setSourceEntity(250U);
    msg.setDestination(44397U);
    msg.setDestinationEntity(22U);
    msg.name.assign("KTHCMZIESGOCYFKDASHMXJUTIIAOOUUTWLABMLDINWPRCBTQEJAFOIAXGHZCHTJCHIA");

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
    msg.setTimeStamp(0.2230906493992636);
    msg.setSource(49352U);
    msg.setSourceEntity(111U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(13U);
    msg.name.assign("WBZGPPLMOJDNXLRJIRBGNIOOOKSTJHUFUOLBYNXQCDIGCTZAYQFWBXEDBYF");

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
    msg.setTimeStamp(0.9932088633428979);
    msg.setSource(2215U);
    msg.setSourceEntity(89U);
    msg.setDestination(14714U);
    msg.setDestinationEntity(67U);
    msg.name.assign("UCXLHKTTRXFGJIXPRIIEHBYJXUKOILRHDJPLQEJVQRFROTVKMVQBEPNJLVOSWAARUFSMKAYFTZGXQYZMTLVZMHZGEUIKNDYDWTBLACSZBJHTIFNCKIBSVMOGGUNPYLYGQNNHAZIMPZCFVHHUGQDQFSANXVYUKLFPVQFTROMBUSANUBMIARODDYKHCDPJJDROZWGEEEGPWSXCCTOOMXFWZCBWWGIUP");

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
    msg.setTimeStamp(0.8160325583812212);
    msg.setSource(34913U);
    msg.setSourceEntity(36U);
    msg.setDestination(60065U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HJGGXNALWUHPNIITYHWDWIISUDVKLBUNGEJDTYBZCFJWMQMCIMMURHYKUAPHAYIFBTCONYQGNTLRSKYIWNCSQZLJOVEPUYJCARCSSZZJUEQBQH");

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
    msg.setTimeStamp(0.617576837906908);
    msg.setSource(1891U);
    msg.setSourceEntity(241U);
    msg.setDestination(23710U);
    msg.setDestinationEntity(157U);
    msg.type = 18U;
    msg.error.assign("BBZRKBTZOQPVZNNSJGSJAGWGLHHRWQNEYKMAUCPSRMJYAFKQGVYPEHWYQEWGZURUHSLNFCQDLZXOCLVBXMXDRENRLASODPTNDJJQTC");

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
    msg.setTimeStamp(0.9046614930609135);
    msg.setSource(61616U);
    msg.setSourceEntity(47U);
    msg.setDestination(15552U);
    msg.setDestinationEntity(153U);
    msg.type = 76U;
    msg.error.assign("XAAZXADWCTIHHDPFRUWQYHJHZNOVJNKRQLGUUBAKBMFXOZWKHTQDPRIYNFHWAYUOWQPBOLZEMD");

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
    msg.setTimeStamp(0.6811204005398475);
    msg.setSource(4143U);
    msg.setSourceEntity(164U);
    msg.setDestination(38582U);
    msg.setDestinationEntity(202U);
    msg.type = 43U;
    msg.error.assign("MYXPZQPFDHVSYM");

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
    msg.setTimeStamp(0.11816684453730308);
    msg.setSource(64304U);
    msg.setSourceEntity(158U);
    msg.setDestination(21349U);
    msg.setDestinationEntity(224U);
    msg.seq = 60469U;
    msg.sys_dst.assign("SEPAJHQVLTZIFPQXTHWMGXMPBGNLLRDFTEDVTKBAPDGAEZKXNSNVYAKXLISPSOCDTBZUAENENXECECYTUWEBBZNJRTTOWRORHTHQKUOILCFOCIKMJGJLUDOMGWGAOFWUJUVKPCGKAPRWNFSDVNCKBHIUYYBKYCFZVVTKSIIXHBLPJNIRJHXLWCQXQQRIQYUFHLFQZSNSWYOSPGVHQZVMXAFUEX");
    msg.flags = 204U;
    const signed char tmp_msg_0[] = {-115, -56, -114, -55, 44, -73, 83, -3, -3, 50, 25, 120, 69, -12, 79, -38, 112, -25, -34, -40, -84, -48, 62, 85, 30, 106, 114, -70, 31, -7, 41, -80, 82, 66, 126, 110, -115, -95, 80, -128, -104, -39, -63, 33, -8, 76, -76, -72, 9, -33, 125, 52, -43, -68, -33, 21, -84, -27, 88, 106, -11, -108, 68, 0, -98, 13, 38, 95, 76, 62, -88, -54, 43, -15, -83, -127, -24, -88, -66, -56, 25, -95, 32, 35, -10, 80, 15, -22, 20, -125, 40, -77, 69, 124, -40, 72, 51, -44, 96, 59, 117, 98, 99, 43, -102, 117, 63, 14, -49, 22, -121, 125, 8, -11, -97, 26, 21, 94, -125, -44, 28, -50, 84, 2, 2, -58, 42, -90, -92, 43, -40, -51, -18, -105, -57, 111, 41, 75, 73, 87, -5, -78, -18, 48, -32, -88, 57, 87, -20, 3, -91, 96, 1, 97, 63, -19, -74, 73, 81, -12, -60, 64, 90, -83, 111, -125, -21, 112, -117, 78, -108, 75, 77, 38, 76, -117, -109, -41, -78, 81, -42, 83, 107, 0, -63, -13, 53, 2, 19, -1, 101, 37, 90, 36, -80, -63, -114, -35, -35, 75, 76, -123, 96, 36, 123, -102, 70, -25, 104, -13, -5, -118, 44, 70};
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
    msg.setTimeStamp(0.8432218095796273);
    msg.setSource(1584U);
    msg.setSourceEntity(64U);
    msg.setDestination(43829U);
    msg.setDestinationEntity(42U);
    msg.seq = 45256U;
    msg.sys_dst.assign("GVBPLEHUKGDEFAFURPOYVBKXBJCBDLQRCGNCPUMTSVNJWYXVTWGOETEMCHSSOOERKFIUUACAZTPVKJTCSNTRFOMRPYJRHPXHDSWZQRXDKSJQDZLNGREOTNWADZMJFBAFZCNCLNKLAX");
    msg.flags = 90U;
    const signed char tmp_msg_0[] = {-102, -86, 11, 105, 9, -17, -65, -108, -16, 69, -80, -125, 76, -103, 87, -79, 53};
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
    msg.setTimeStamp(0.15396467439642192);
    msg.setSource(56990U);
    msg.setSourceEntity(123U);
    msg.setDestination(53294U);
    msg.setDestinationEntity(119U);
    msg.seq = 45358U;
    msg.sys_dst.assign("DUFJOSKLDWHJYGWCWVKFLWQRDXVNBZCNQUOPOSZZTWNOGNPYRWIRWHSHOYECURBAXTTZVFUHDPPDVTILPQAXJEREVHGCRJFNLPLBNQCZBCEELFYAVSVXIODCTGOYMSWIQMMSQIOXSSIABXJKNVJJSLMUJAOFHLQZCBHGUIVMKAIIQJYRXKDQTMBRGGTXKBGLAFTKOGXYNEAFQGPNDFPKEMZCDXUZPKUZWBSINTYMAPLYVKURJA");
    msg.flags = 115U;
    const signed char tmp_msg_0[] = {-118, -116, -65, 41, 58, 38, 16, -23, 44, 50, 28, 82, -92, -98, 34, 84, -81, -100, -99, -71, 0, 85, 34, 103, 41, 108, -96, -26, -7, -110, -98, -11, 97, -16, -51, 111, 83, 12, 36, 15, 39, -30, 123, -103, 126, -119, -78, -25, -84, 23, -100, -80, -60, -6, -31, -113, 110, -92, -107, 21, 78, 75, -8, 59, -12, 57, 21, -36, 71, 104, 92, -37, -19, 99, -19, -72, 99, 62, 114, 120, -119, 83, 20, -119, 99, 117, -98, -52, -60, -83, 54, 84, -42, -62, -117, -88, 56, 34, -123, 106, -89, 104, 112, 124, -14, -116, 93, 6, 47, 93, -66, -78, -97};
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
    msg.setTimeStamp(0.9005135703834233);
    msg.setSource(15124U);
    msg.setSourceEntity(157U);
    msg.setDestination(19373U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("GZYKXSSIVSTCNXEUCSLUWOYVOEKFQTPAMUYDHYVFAXO");
    msg.sys_dst.assign("THFLIYJCMSCYYHBMIFDEMVPRTLFHYXNEDQDPSWAKTDLUICWNEFGCUODRRLITHTCDGXUKZABSACGRHLATKOSTKMJQIQUIJJNZUMAUXNLZRXYTLMKFUTSQLZPEBBYNOSUQZFZOOWQRANWRZ");
    msg.flags = 177U;
    const signed char tmp_msg_0[] = {100, -96, 66, -101, 70, -105, -65, 103, 33, 84, 20, -46, 81, -68, -38, 65, -5, 51, -11, -122, -81, 114, -20, 86, 99, -106, -103, -77, 74, 115, -87, 44, 124, -7, -100, 10, 124, -26, -80, 122, -64, 89, 77, 68, 55, 36, 40, 35, -36, 52, 3, 126, -73, -71, 68, 113, -52, 102, -79, -13, 113, -54, -78, 116, -74, -97, -96, -29, -26, -28, 94, 31, -123, -7, -87, -49, 43, -97, -111, 107, 18, -75, -73, -116, -101, -94, 49, -94, 91, -25, 54, 119, 75, -75, -11, 124, -40, -5, -83, -95, -82, -116, -66, -126, 5, -98, -99, -17, 18, 56, -106, 13, -25, 15, -114, 11, 119, 83, -113, -22, 54, -81, -119, 125, -57, -26, -70, -125, -7, -20, -42, -41, 122, 78, 122, 8, -9, 93, 103, -58, -125, -81, -45, 12, 32, -64, 7};
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
    msg.setTimeStamp(0.4387290028804326);
    msg.setSource(53182U);
    msg.setSourceEntity(225U);
    msg.setDestination(30132U);
    msg.setDestinationEntity(93U);
    msg.sys_src.assign("VKQJYFCWATFPWBFLGJIPCYQKGWJPVKGJAWOYOBOGHSALNMSKTIESATARNIYALNUULJDDMTPVRTEMOJXNALRMJBBMKZH");
    msg.sys_dst.assign("QVDGTUJOYQRWLYTEDHLRIETGFHJZSZFDAUPSEPQEKUTQDJWXFLRFJCRBMINELDOBGLZNKERNBVLUCTZVCMASWQQSSVTVXYAKKVCHKXYIAGAWGMHAHAXNXMWOIUZRKBCYYGIRMSOMRLVAFFKWKNCWFJBCJEEOCEHBSXEJKPHPDZGFFYPXXDDRZMNOGNLMLNJMHFUIPSKAZTMBZSQHI");
    msg.flags = 7U;
    const signed char tmp_msg_0[] = {-58, -74, -72, 13, 82, -8, 78, 33, 24, -95, -46, 99, 81, 82, -16, 59, 23, 29, 31, -56, -87, 58, 73, -89, -101, -12, 52, -37, 63, -68, -100, -34, -69, 55, 64, 73, 48, 109, 67, 15, -34, -92, 38, -101, -11, -100, -86, -123, -46, 124, 99, 96, 62, -119, -93, 61, -88, 46, -118, 24, 33, 45, 105, -74, -84, 40, -110, 59, 16, 0, -73, -17, -76, 105, -50, 56, -21, 3, 104, 35, -99, -122, 103, 68, -57, -33, -42, -86, -35, -106, 48, 64, -26, -26, 35, 7, -15, -4, 18, 29, 53, -82, 106, 65, -99, 76, -28, -67, 82, -78, -30, 14, -2, 67, 30, -73, -43, 25, 6, -124, -12, -107, -62, 105, 78, -115, -10, 61, -87, -103, -121, 31, -22, 81, 93, -101, -98, -31, -56, 62, 119, -122, 102, 48, 82, 17, -38, 105, 94, 1, -2, 27, 33, 121, 44, -25, -44, 6, 103, -91, -16, -112, 16, 97, -77, 10, 2, 51, 85, 9, 14, -5, 77, -106, -1, 10, -35, -87, 91, -95, 121, 21, 121, -48, 82, 98, -96, -89, -105, 24, 4, -63, -54, -110, 78, -64, 126, 43, 102, -99, -55, -106, -89};
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
    msg.setTimeStamp(0.796999035638052);
    msg.setSource(60700U);
    msg.setSourceEntity(242U);
    msg.setDestination(33370U);
    msg.setDestinationEntity(226U);
    msg.sys_src.assign("AXJMWKSFHKPYZWXSPHMELZUNZEVSOBJNPBIBBFCACGJNDCNBTFUYFCLOWVDJRCCUTOXTGPAFBNFGSISEOZAEPQJRZGDVWGMCR");
    msg.sys_dst.assign("VVCEYPCOXGMCQCGSJDAEIDJYVVOAJQGAXFASKQLCYJWTRBUYKHHRUBVUBANMFQEOSBRIWZMOTDWVHIDIPOFGTIDJWBKXBLSUBMTIDHCZPDHXNNKNXSQBJLRDWOOPZLOUHQZLIHKWRUMTNXWPR");
    msg.flags = 164U;
    const signed char tmp_msg_0[] = {-126, 88, 124, -108, 39, 120, -73, 29, 77, 19, 67, -110, -29, -1, 89, 86, -68, 23, -46, -31, -74, 119, -109, 94, -35, 97, -99, -98, -16, 88, 124, 31, -78, -25, -43, -63, 101, -48, 20, 0, -54, -107, -116, -64, 81, -56, -122, -50, -27, 4, 58, 73, -97, -37, -36, -75, 34, -81, -86, 0, -127, 90, -4, -36, 109, -93, -74, 125, 113, 14, -121, -59, -19, 102, -124, -58, 41, -53, 35, -22, -1, 39, -67, 77, -1, 107, 69, -27, 32, 79, -22, 49, 62, -117, 22, 124, 5, -7, -66, 66, -59, 29, 95, 71, -98, -4, -37, 79, -95, -124, -90, 1, 48, -22, 6, 60, -117, 66, -65, -4, 43, 24, 86, -18, 50, 100, -67, -68, -62, -67, 27, 77, 60, 34, -87, -14, -114, 27, -82, -11, 111, -21, -75, 23, 87, 117, -128, -99, 57, 24, -95, 14, 84, -97, -121, -48, 125};
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
    msg.setTimeStamp(0.49485882947570625);
    msg.setSource(37488U);
    msg.setSourceEntity(159U);
    msg.setDestination(49677U);
    msg.setDestinationEntity(22U);
    msg.seq = 54850U;
    msg.value = 205U;
    msg.error.assign("WOTHDSRDPEAOOWCSUBPMQDAFCJIUKKODLPERCBKJHHMQRTQUFIWUQPUHRRSSKJYWSXWIOJQSZYNWNURKCMKENAEHLVJPFSIHKCIINPVDYLJXVNCJWBDECDGNZNBOVUALCBNGUVPBMXYTORJZVYJFBIBIZPDWLMIKDFGVGTZGQHDTHZRZXMWXZVVKTTTFUOJXLGZVEYTEHOFTSFEAMKEAYXOGLGQ");

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
    msg.setTimeStamp(0.6244028132093609);
    msg.setSource(33059U);
    msg.setSourceEntity(49U);
    msg.setDestination(56747U);
    msg.setDestinationEntity(19U);
    msg.seq = 3204U;
    msg.value = 220U;
    msg.error.assign("YQKAXGEUBYDFOIMRUDHAAJGYHFELJMZFZTZEZFXNCVVQVTCUGLSZSYUBRNIKRFDUJXFBMCTJWVVPBYJKWOOZXPBNJHPIRKWYDESUMESTSNLCQXSQBOTCCWXPRQBBBYAACKVUHGREKSDDOAEWLAHROWQILFFRLYZSVHRPPDWQVNPTSITGCYKENVONUJYXEWTA");

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
    msg.setTimeStamp(0.6981889299973374);
    msg.setSource(26023U);
    msg.setSourceEntity(212U);
    msg.setDestination(55083U);
    msg.setDestinationEntity(64U);
    msg.seq = 21639U;
    msg.value = 107U;
    msg.error.assign("GOAVZDJVIHDKFUABTYDRNXAZFBVOTEBNCTOEIRPHKVWQUTGXJZBXKWLGBASLAYHDRNNPHMOEQDNXMQYMSXUEVRUKHSYWILYNXHDCRNVLIFYNLTYLLEKMLGCJMQFTYHDKVAQPFTAMWPKJRUDXYXBBG");

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
    msg.setTimeStamp(0.39883339539065843);
    msg.setSource(20078U);
    msg.setSourceEntity(194U);
    msg.setDestination(13928U);
    msg.setDestinationEntity(183U);
    msg.seq = 3797U;
    msg.sys.assign("OAWFYFRJIEBLLT");
    msg.value = 0.4486666682803572;

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
    msg.setTimeStamp(0.7645958789018521);
    msg.setSource(48349U);
    msg.setSourceEntity(200U);
    msg.setDestination(16859U);
    msg.setDestinationEntity(157U);
    msg.seq = 1517U;
    msg.sys.assign("XVFURJJIQEBHTSWWIBECKAPMOQBOQJPAHOYRPSUFJFBBKZIQONCMZZ");
    msg.value = 0.41328250525749;

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
    msg.setTimeStamp(0.5155989739514021);
    msg.setSource(53201U);
    msg.setSourceEntity(103U);
    msg.setDestination(16878U);
    msg.setDestinationEntity(235U);
    msg.seq = 49520U;
    msg.sys.assign("LLTLMRYAWULDYEJEVJXFQGOVEJWEASRPVCSIIFNNRXTHAKBDKZFXAHYETIUTTWLHARDKOIYHMQFMPMRPSIHMOKOCYXDOIIUOJWZOYQHKJGSDPTQVVARTZDNCENUYURRBBSCPUDTGKJMVNQQJFLYNNPXMFCFULRAOHCFZQCTMRNEAWSYVHPXOLTCIZIXVQQNBQDHBWJMBPJWZUCYSVWBUIPGBKOXKNALMGGSLKWUDSGZVAGEXEZ");
    msg.value = 0.6473403467795722;

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
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.5777146339840521);
    msg.setSource(16915U);
    msg.setSourceEntity(194U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(117U);
    msg.seq = 4637U;
    msg.sys_dst.assign("BGZRLFTBHEYVNFMESENPQVJHBTASRDLMOS");
    msg.timeout = 0.01657556785320724;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.5761630618264624);
    msg.setSource(24800U);
    msg.setSourceEntity(219U);
    msg.setDestination(51768U);
    msg.setDestinationEntity(189U);
    msg.seq = 1924U;
    msg.sys_dst.assign("HFXTCKHLNIQFBSDCTNDBRLOKHJBWGEGUKVUFPDJVJFBXPHVZPHDUEEZHSUIXFLPLKVYMMTSBHDEBJMQMWKOGFTUATIRZAUHYJMDSMCFCDFSCANUQNCOOYWMLQTPOSVFZRLSUQTNYJVPAIQXAJEFACVSRIVNKVYXBGWUBYBQGKTGAAXICGRW");
    msg.timeout = 0.8173393681042467;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9354290823423297);
    msg.setSource(64592U);
    msg.setSourceEntity(95U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(88U);
    msg.seq = 50753U;
    msg.sys_dst.assign("NUNRJRWTKJKGAHIPGKQWEQNYNQRDRMDLINGRVGYEFRNYSSLDZFMASPZDHHHBLOBUKAHBSTGBPMWVOLEWARDVUEQVFCUQORWRZCERKIXYVNOYVXXBKFIEPVVOIUMY");
    msg.timeout = 0.7169522392241411;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
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
    msg.setTimeStamp(0.06746027842095248);
    msg.setSource(18633U);
    msg.setSourceEntity(240U);
    msg.setDestination(20242U);
    msg.setDestinationEntity(149U);
    msg.action = 128U;
    msg.longain = 0.06663203986828548;
    msg.latgain = 0.4155383418731572;
    msg.bondthick = 83981047U;
    msg.leadgain = 0.9963425182687514;
    msg.deconflgain = 0.8450363624527529;

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
    msg.setTimeStamp(0.5344616695319028);
    msg.setSource(40449U);
    msg.setSourceEntity(9U);
    msg.setDestination(55306U);
    msg.setDestinationEntity(40U);
    msg.action = 165U;
    msg.longain = 0.47378411025362366;
    msg.latgain = 0.9555108524417071;
    msg.bondthick = 2263458582U;
    msg.leadgain = 0.9014943511515333;
    msg.deconflgain = 0.7983345724866548;

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
    msg.setTimeStamp(0.439214955262781);
    msg.setSource(63626U);
    msg.setSourceEntity(131U);
    msg.setDestination(50067U);
    msg.setDestinationEntity(30U);
    msg.action = 63U;
    msg.longain = 0.4982444712251871;
    msg.latgain = 0.049834840396297264;
    msg.bondthick = 1460623827U;
    msg.leadgain = 0.6351923142302676;
    msg.deconflgain = 0.9628003642283238;

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
    msg.setTimeStamp(0.5995429718261);
    msg.setSource(39304U);
    msg.setSourceEntity(16U);
    msg.setDestination(32187U);
    msg.setDestinationEntity(253U);
    msg.err_mean = 0.3231627351289589;
    msg.dist_min_abs = 0.27689684561069505;
    msg.dist_min_mean = 0.15031401933124444;

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
    msg.setTimeStamp(0.43535512791162023);
    msg.setSource(22985U);
    msg.setSourceEntity(83U);
    msg.setDestination(51541U);
    msg.setDestinationEntity(194U);
    msg.err_mean = 0.24146326439129517;
    msg.dist_min_abs = 0.17650987952124286;
    msg.dist_min_mean = 0.8064880811043862;

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
    msg.setTimeStamp(0.8269111405293543);
    msg.setSource(40075U);
    msg.setSourceEntity(252U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(232U);
    msg.err_mean = 0.9269876942159451;
    msg.dist_min_abs = 0.22136510351898797;
    msg.dist_min_mean = 0.7641767487401602;

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
    msg.setTimeStamp(0.715780032220725);
    msg.setSource(47022U);
    msg.setSourceEntity(182U);
    msg.setDestination(34434U);
    msg.setDestinationEntity(76U);
    msg.action = 104U;
    msg.lon_gain = 0.040114132271008796;
    msg.lat_gain = 0.015772681809327338;
    msg.bond_thick = 0.6570172443970156;
    msg.lead_gain = 0.13759431122603338;
    msg.deconfl_gain = 0.5293901360284394;
    msg.accel_switch_gain = 0.05107228036419065;
    msg.safe_dist = 0.12185947303881617;
    msg.deconflict_offset = 0.5293338750949196;
    msg.accel_safe_margin = 0.5378773247832428;
    msg.accel_lim_x = 0.9070494395168922;

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
    msg.setTimeStamp(0.06293655363836892);
    msg.setSource(41254U);
    msg.setSourceEntity(14U);
    msg.setDestination(51833U);
    msg.setDestinationEntity(236U);
    msg.action = 122U;
    msg.lon_gain = 0.04788112055691185;
    msg.lat_gain = 0.907380845134529;
    msg.bond_thick = 0.7115416880675846;
    msg.lead_gain = 0.30289536222163027;
    msg.deconfl_gain = 0.5645595897500634;
    msg.accel_switch_gain = 0.08588677798595468;
    msg.safe_dist = 0.6689012708553654;
    msg.deconflict_offset = 0.07420251429066183;
    msg.accel_safe_margin = 0.9323986968528606;
    msg.accel_lim_x = 0.11853997854655085;

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
    msg.setTimeStamp(0.7184293265606081);
    msg.setSource(44220U);
    msg.setSourceEntity(174U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(222U);
    msg.action = 189U;
    msg.lon_gain = 0.02401651131676319;
    msg.lat_gain = 0.21140901540483947;
    msg.bond_thick = 0.3286988198514941;
    msg.lead_gain = 0.6916540475001339;
    msg.deconfl_gain = 0.28555006832526464;
    msg.accel_switch_gain = 0.5501023228986465;
    msg.safe_dist = 0.9992512078424614;
    msg.deconflict_offset = 0.018443204575401717;
    msg.accel_safe_margin = 0.3854516182823359;
    msg.accel_lim_x = 0.34508741966041045;

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
    msg.setTimeStamp(0.6664895740181188);
    msg.setSource(62049U);
    msg.setSourceEntity(63U);
    msg.setDestination(21305U);
    msg.setDestinationEntity(96U);
    msg.type = 234U;
    msg.op = 103U;
    msg.err_mean = 0.46993511650840114;
    msg.dist_min_abs = 0.3908133070537403;
    msg.dist_min_mean = 0.12395366756255799;
    msg.roll_rate_mean = 0.45220563742537123;
    msg.time = 0.9951728642390522;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 84U;
    tmp_msg_0.lon_gain = 0.07552701022058994;
    tmp_msg_0.lat_gain = 0.03260714001146625;
    tmp_msg_0.bond_thick = 0.49652323720147973;
    tmp_msg_0.lead_gain = 0.04947122091954359;
    tmp_msg_0.deconfl_gain = 0.1877107300463594;
    tmp_msg_0.accel_switch_gain = 0.9234926194184212;
    tmp_msg_0.safe_dist = 0.644129979672924;
    tmp_msg_0.deconflict_offset = 0.7681150535898291;
    tmp_msg_0.accel_safe_margin = 0.9672405782442733;
    tmp_msg_0.accel_lim_x = 0.3322241338404017;
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
    msg.setTimeStamp(0.43644477646851176);
    msg.setSource(7990U);
    msg.setSourceEntity(248U);
    msg.setDestination(24884U);
    msg.setDestinationEntity(99U);
    msg.type = 156U;
    msg.op = 99U;
    msg.err_mean = 0.6169422082015205;
    msg.dist_min_abs = 0.8136656916574213;
    msg.dist_min_mean = 0.34249894114951274;
    msg.roll_rate_mean = 0.7745625035668605;
    msg.time = 0.4337717526356203;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 98U;
    tmp_msg_0.lon_gain = 0.8897231259001778;
    tmp_msg_0.lat_gain = 0.6241974001647341;
    tmp_msg_0.bond_thick = 0.3382922177962526;
    tmp_msg_0.lead_gain = 0.561147736303806;
    tmp_msg_0.deconfl_gain = 0.829008254928724;
    tmp_msg_0.accel_switch_gain = 0.015182515018062004;
    tmp_msg_0.safe_dist = 0.34502764582639356;
    tmp_msg_0.deconflict_offset = 0.05850514789476591;
    tmp_msg_0.accel_safe_margin = 0.68352436399038;
    tmp_msg_0.accel_lim_x = 0.9194981126095879;
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
    msg.setTimeStamp(0.7080784581236149);
    msg.setSource(39523U);
    msg.setSourceEntity(108U);
    msg.setDestination(56938U);
    msg.setDestinationEntity(52U);
    msg.type = 59U;
    msg.op = 84U;
    msg.err_mean = 0.8016091242804613;
    msg.dist_min_abs = 0.020925824962201522;
    msg.dist_min_mean = 0.9834959900006119;
    msg.roll_rate_mean = 0.437885623783803;
    msg.time = 0.6836104160438559;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 204U;
    tmp_msg_0.lon_gain = 0.581968044401351;
    tmp_msg_0.lat_gain = 0.0017668576752357668;
    tmp_msg_0.bond_thick = 0.6232996493150942;
    tmp_msg_0.lead_gain = 0.3049277193473806;
    tmp_msg_0.deconfl_gain = 0.03386705257156164;
    tmp_msg_0.accel_switch_gain = 0.9457857260634377;
    tmp_msg_0.safe_dist = 0.908805321259943;
    tmp_msg_0.deconflict_offset = 0.17453252081477932;
    tmp_msg_0.accel_safe_margin = 0.4618951084920896;
    tmp_msg_0.accel_lim_x = 0.5234914946845509;
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
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.32656883857377894);
    msg.setSource(17738U);
    msg.setSourceEntity(58U);
    msg.setDestination(51899U);
    msg.setDestinationEntity(206U);
    msg.lat = 0.38098005248154243;
    msg.lon = 0.0865504247268728;
    msg.eta = 1462224185U;
    msg.duration = 35137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.03216222747044206);
    msg.setSource(10677U);
    msg.setSourceEntity(135U);
    msg.setDestination(14196U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.6667815053846785;
    msg.lon = 0.31456008745185937;
    msg.eta = 2006937926U;
    msg.duration = 29360U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.06170901353865388);
    msg.setSource(3061U);
    msg.setSourceEntity(161U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.6934697773434808;
    msg.lon = 0.15843389431215738;
    msg.eta = 1579070043U;
    msg.duration = 11666U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.9126662362151212);
    msg.setSource(50180U);
    msg.setSourceEntity(190U);
    msg.setDestination(46532U);
    msg.setDestinationEntity(131U);
    msg.plan_id = 18759U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.14954705750554886;
    tmp_msg_0.lon = 0.12744785909771794;
    tmp_msg_0.eta = 986867137U;
    tmp_msg_0.duration = 49335U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.32963722446824695);
    msg.setSource(42747U);
    msg.setSourceEntity(236U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(218U);
    msg.plan_id = 17638U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.3249962279551297;
    tmp_msg_0.lon = 0.2611044771701191;
    tmp_msg_0.eta = 4057489413U;
    tmp_msg_0.duration = 53473U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.04590208448065858);
    msg.setSource(3825U);
    msg.setSourceEntity(124U);
    msg.setDestination(22360U);
    msg.setDestinationEntity(34U);
    msg.plan_id = 10090U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.29349027028333263);
    msg.setSource(64206U);
    msg.setSourceEntity(230U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(241U);
    msg.type = 10U;
    msg.command = 169U;
    msg.settings.assign("SMFZMAGKPWDAJNWBTFNESLDLAGHXMFEYXWOEENSSHVBURAQVTYIIBIEBWOQXEQYLUYHKIEHBCZQIISZFLKGLCSVGNYLF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 2175U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9207518931875444;
    tmp_tmp_msg_0_0.lon = 0.5453279373417892;
    tmp_tmp_msg_0_0.eta = 3237693078U;
    tmp_tmp_msg_0_0.duration = 7181U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AMWFJXSEGSHSPENAZWZEDQFTVCTUKCAOQYLJBIJROPGCILDPLFAWDYHRLOIGFIFATUMLYZQJZCBZKMCVMOAKQGJIDSWJXBHDLOQKBVXJPXOWNUTYUYJXIYXHVGVEQEMHPSNGGXQVFCKTTNYFPURCGEDPHZFSNUVSERHTLDKUJHVOZPWBISROX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.7612595522969312);
    msg.setSource(36295U);
    msg.setSourceEntity(208U);
    msg.setDestination(15442U);
    msg.setDestinationEntity(34U);
    msg.type = 139U;
    msg.command = 33U;
    msg.settings.assign("EGJZALUHFYRNOAQFNZXQZKOMCBGSDYVXCLCYQEGCVRWGAWORFUQJCPTBWGSGITUDAKVWKMBUXVHLFFSPMDPVPYZMOSARHKJVMHTCOAEOIKSSIQMZEEIYIJDBDENFLXIYHLOTGBUSNBLJXSAGGKNZVJORXXMAKKBZTQBCCWXMDRVNUDHOKZSWHVJMNCBLPQELDMWUE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 32663U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8243980475909276;
    tmp_tmp_msg_0_0.lon = 0.293070818825378;
    tmp_tmp_msg_0_0.eta = 3258908134U;
    tmp_tmp_msg_0_0.duration = 61479U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QAOUPREQYPTICBCSLWRUAFJDHTMODQEMHLHRIDGEHXLZCJNDQSMFYQZUFHCVVNZRXVDOJLTWWBXGVGFYNDKAKFNQVPHOXKZUWSLBDBNYXEHPBPDKFUOJAURWTVZBHZEFHAGLRBYHCJBLZWOPSQYSWCPNNMRIGMKSVJIORBKUVYFMRKZXANSDYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.9270684906034081);
    msg.setSource(62766U);
    msg.setSourceEntity(41U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(224U);
    msg.type = 196U;
    msg.command = 223U;
    msg.settings.assign("FZZNUPTSMNHFFRPQHXPYIVKNIWZDEZUVQBBOZUODOUWEOSKOBQBYDGIHYSJKZLWBQYPCJLLRROFMOANEDDEVSZPHL");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19196U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LKAIPGUPFGYRLCJWYFUMUSEPSVHPFLQIIVVRQOBKZSCPDAMSPZEEBQNCEPTPKUREBJINJWQLHFMMGTMXYFSGHRWXJLYDQAHAWHURZHNBZJOHLWUIXVAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.6998104753477655);
    msg.setSource(58432U);
    msg.setSourceEntity(125U);
    msg.setDestination(65146U);
    msg.setDestinationEntity(180U);
    msg.state = 58U;
    msg.plan_id = 47348U;
    msg.wpt_id = 182U;
    msg.settings_chk = 51493U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.09216282877746806);
    msg.setSource(11449U);
    msg.setSourceEntity(47U);
    msg.setDestination(7946U);
    msg.setDestinationEntity(140U);
    msg.state = 224U;
    msg.plan_id = 49683U;
    msg.wpt_id = 84U;
    msg.settings_chk = 56731U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.9545054335266846);
    msg.setSource(64438U);
    msg.setSourceEntity(37U);
    msg.setDestination(50272U);
    msg.setDestinationEntity(84U);
    msg.state = 169U;
    msg.plan_id = 34914U;
    msg.wpt_id = 109U;
    msg.settings_chk = 52824U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
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
    msg.setTimeStamp(0.8276076472857227);
    msg.setSource(22652U);
    msg.setSourceEntity(109U);
    msg.setDestination(15827U);
    msg.setDestinationEntity(161U);
    msg.uid = 226U;
    msg.frag_number = 218U;
    msg.num_frags = 6U;
    const signed char tmp_msg_0[] = {37, 107, 35, 98, 63, -13, -102, -72, 80, 101, 33, 90, -56, 71, -57, -75, 115, -33, -86, 116, -28, 99, -27, 103, -125, -42, -9, -48, -89, 70, 113, -48, -37, -40, 112, -28, -40, -108, -40, 119, 79, 91, 2, 41, -111, 111, 31, -46, 74, 29, -46, -104, 16, 56, -124, -24, 13, 126, 84, 22, 26, 113, -43, -79, 38, 79, 102, -16, 114, 2, -70, -76, 63, -16, -32, 82, 26, -95, 123, 50, 97, 105, -8, 56, 89, -3, 46, 66, 100, 20, -83};
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
    msg.setTimeStamp(0.542451952832406);
    msg.setSource(54875U);
    msg.setSourceEntity(12U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(191U);
    msg.uid = 154U;
    msg.frag_number = 76U;
    msg.num_frags = 147U;
    const signed char tmp_msg_0[] = {76, 30, 53, -65, -109, 105, 46, 113, -67, 107, 93, 70, -33, 76, -101, 113, 4, -30, -70, -67, -22, 72, 60, -96, 80, -21, -95, -41, 8, -125, -74, 120, 49, -37, -34, 125, -50, -1, 12, 71, -83, -18, -27, 60, -124, -66, 122, 11, 11, 43, 108, -58, -120, 89, 22, 80, 6, 11, 108, -109, -118, 65, -32, 58, -31, 84, 106, 86, -6, 91, 43, -91, 71, -36, 74, 91, 6, 89, -75, -84, -86, -127, 26, 108, -101, 105, -110, -7, -97, 55, -25, -77, 37, 96, 97, 97, -54, -23, -16, -49, 29, 91, -27, -25, -111, -63, -13, -78, 13, -84, 19, -15, -26, -42, 51, 55, -63, -123, -77, -90, 54, -20, 4, -28, -71, -6, -83, -76, -34, -78, 108, 28, 26, -77, -99, 108, -91, -78, 24, -39, -3, 52, -13, 115, -30, 25, 48, -128, -14, -97, 1, -42, -80, -27, -35, -9, 70, -121, -71, 93, -85, 86, 62, -19, -69, -96, -13, -88, 63, -92, 6, -62, 112, -110, -70, -124, 116, -95, -48, -73, 75, -63, -93, 26, -90, -5, 79, 107, 62, -25, 39, -103, -11, -13, 36, -93, 55, -87, -66, -29, 121, -78, -38, 76, 111, 44, -86, 39, -13, -38};
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
    msg.setTimeStamp(0.33942794732246817);
    msg.setSource(23615U);
    msg.setSourceEntity(188U);
    msg.setDestination(61299U);
    msg.setDestinationEntity(75U);
    msg.uid = 212U;
    msg.frag_number = 253U;
    msg.num_frags = 134U;
    const signed char tmp_msg_0[] = {-38, 114, 89, 111, 31, -37, 1, -56, -75, -18, -99, -77, -8, -111, -10, -47, 99, 124, 79, 79, -86, 83, -67, 57, 24, -17, 107, -121, 73, -39, -36, -69, -8, 121, -94, 64, -6, -90, -105, -120, 65, 52, 27, 30, -50, -56, 19, 57, -46, 77, -105, 117, 67, -17, -83, -34, 23, 80, 22, 49, 39, 9, -25, -10, 18, -29, 102, 15, -6, 27, -49, -26, 36, -24, 46, 25, 77, 56, -72, 56, -95, 34, -99, -24, -59, 87, 93, -67, 62, 91, 78, 46, 90, -24, -7, 77, 115, -12, -116, -101, 34, 14, -107, 122, -13, 76, 103, 98, 72, 78, 21, 76, -73, 57, -109, 1, 41, -18, 115, 36, 113, -126, -20, 19};
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
    msg.setTimeStamp(0.16403501018936384);
    msg.setSource(47035U);
    msg.setSourceEntity(214U);
    msg.setDestination(13206U);
    msg.setDestinationEntity(156U);
    msg.content_type.assign("DVFUSBKGLFXZINAPKBPXKWEGJQYRZSRMDXLGGXSNZCJSTDWHRPAABKCTHQFBOJUXVWLAWIHQMGKEISXNEQCRYSW");
    const signed char tmp_msg_0[] = {-87, -87, 44, 63, 11, -86, -78, 60, -2, -96, 30, 107, -33, -110, 48, -109, 30, -95, 74, -67, -49, 104, 97, 125, 55, -28};
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
    msg.setTimeStamp(0.8005732721204328);
    msg.setSource(8742U);
    msg.setSourceEntity(34U);
    msg.setDestination(48783U);
    msg.setDestinationEntity(92U);
    msg.content_type.assign("PQDFBYEYEBQGCRJFSBSCIJNMKFXXTXGOTZSROJXWLHIWBXJHJALUTBLRPHRBOAKBUDLTNNIPUNWUIMTPVIQVXVNFWWPVKLPLNGZQAVSZHQYECQNIZFJGOOSXCGKIDPHKOATNKAM");
    const signed char tmp_msg_0[] = {25, -7, -26, 57, -91, 108, -63, -47, 6, 63, -80, 16, -86, -126, 34, -89, 87, 70, -61, 114, -120, -86, -123, 37, 39, -62, -45, 33, 117, -29, -78, 114, 22, 65, -16, -25, 103, 109, 114, 28, 107, 71, 26, 52, -89, -69, 67, -19, 114, -95, -47, 14, -82, -106, -97, -28, -11, 46, 32, -11, -17, 47, 9, 32, -58, -124, 48, 119, -30, 13, -63, 17, 120, -46, -13, -115, -81, 85, -53, -24, -12, -104, -35, -20, -62, 53, -122, -50, 114, -54, -116, -22, 4, 3, -67, -9, -16, -61, -70, 65, 50, -125, -24, -89, -89, -4, 91, -62, -103, 54, 97, 42, -58, -41, -79, -113, 3, -36, -101, 37, -56, 112, 27, 68, -70, 16, 15, -124, 66, -81, -101, 72, 42, -49, 100, -33, -121, 3, 113, -96, -116, -126, -51, 82, -31, 109, 59, -96, 69, 68, -65, 124, 102, 80, 80, -107, -104, -110, -83, 64, 68, 106, -109, 35, -119, -20, -88, -62, 34, 1, -71, -18, -44, 72, 80, 49, 61, 85, 110, 29, 56, -73, 7, 109, -39, 112, -76, 76, -25, -53, 107, -28, 35, -127, 52, -99, 2, 50, 45, 19, 120, 70, 110, 95, 114, 94, -46, -87, 91};
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
    msg.setTimeStamp(0.23786307756272607);
    msg.setSource(2402U);
    msg.setSourceEntity(168U);
    msg.setDestination(21069U);
    msg.setDestinationEntity(83U);
    msg.content_type.assign("BNLGZAAXTHOSLFGTOTRPISENOPQOFZHTRUMWBYDZXWBQCIEKAWHNYFVBVFKC");
    const signed char tmp_msg_0[] = {-56, -122, 75, 46, -125, -18, -9, -10, -110, 14, -66, 24, 16, -121, 104, 79, -51, -108, 44, 76, -34, -58, 14, 43, 72, -50, -116, 120, -85, 96, 82, -82, -14, -88, 82, -92, 44, 43, -22, -15, -46, -56, -70, 15, 100, 28, 68, 59, 66, -43, 122, 48, -107, -75, 116, 5, -77, 111, 104, -69, -98, 0, -47, 117, 91, 118, -118, -64, -31, 1};
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
    msg.setTimeStamp(0.27456022226995025);
    msg.setSource(60115U);
    msg.setSourceEntity(194U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.0939034981689505);
    msg.setSource(46420U);
    msg.setSourceEntity(108U);
    msg.setDestination(15201U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.4315189209892578);
    msg.setSource(34259U);
    msg.setSourceEntity(223U);
    msg.setDestination(16086U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.5726525194421708);
    msg.setSource(7919U);
    msg.setSourceEntity(54U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(232U);
    msg.target = 44833U;
    msg.bearing = 0.9624252458622087;
    msg.elevation = 0.2826658545720949;

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
    msg.setTimeStamp(0.2963878269401533);
    msg.setSource(54450U);
    msg.setSourceEntity(241U);
    msg.setDestination(51442U);
    msg.setDestinationEntity(40U);
    msg.target = 29548U;
    msg.bearing = 0.43548096349143706;
    msg.elevation = 0.47302149847124086;

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
    msg.setTimeStamp(0.14510060683753412);
    msg.setSource(51064U);
    msg.setSourceEntity(168U);
    msg.setDestination(37722U);
    msg.setDestinationEntity(246U);
    msg.target = 18660U;
    msg.bearing = 0.6344262317897466;
    msg.elevation = 0.6302346355251088;

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
    msg.setTimeStamp(0.29385792064556304);
    msg.setSource(18628U);
    msg.setSourceEntity(21U);
    msg.setDestination(47347U);
    msg.setDestinationEntity(198U);
    msg.target = 65369U;
    msg.x = 0.8615555738203816;
    msg.y = 0.45818806322438166;
    msg.z = 0.5961483768493303;

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
    msg.setTimeStamp(0.7823882428729118);
    msg.setSource(28350U);
    msg.setSourceEntity(119U);
    msg.setDestination(2735U);
    msg.setDestinationEntity(74U);
    msg.target = 29372U;
    msg.x = 0.2074355680304527;
    msg.y = 0.2233155158107999;
    msg.z = 0.2930815170028873;

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
    msg.setTimeStamp(0.0041540177925278865);
    msg.setSource(59442U);
    msg.setSourceEntity(254U);
    msg.setDestination(23383U);
    msg.setDestinationEntity(157U);
    msg.target = 9565U;
    msg.x = 0.061425637577972925;
    msg.y = 0.5094877456507185;
    msg.z = 0.8194679545491921;

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
    msg.setTimeStamp(0.7898822654969666);
    msg.setSource(60218U);
    msg.setSourceEntity(146U);
    msg.setDestination(10242U);
    msg.setDestinationEntity(132U);
    msg.target = 22055U;
    msg.lat = 0.6904402493592239;
    msg.lon = 0.08646517964192679;
    msg.z_units = 14U;
    msg.z = 0.7016781965835056;

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
    msg.setTimeStamp(0.8275732784703247);
    msg.setSource(37467U);
    msg.setSourceEntity(231U);
    msg.setDestination(1158U);
    msg.setDestinationEntity(163U);
    msg.target = 6510U;
    msg.lat = 0.14868878480301517;
    msg.lon = 0.11154759315456975;
    msg.z_units = 79U;
    msg.z = 0.7519879374190581;

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
    msg.setTimeStamp(0.08018794055509992);
    msg.setSource(63240U);
    msg.setSourceEntity(13U);
    msg.setDestination(22095U);
    msg.setDestinationEntity(172U);
    msg.target = 29118U;
    msg.lat = 0.8595773984435695;
    msg.lon = 0.4090148105587381;
    msg.z_units = 65U;
    msg.z = 0.7476443153469484;

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
    msg.setTimeStamp(0.2189030178359863);
    msg.setSource(10367U);
    msg.setSourceEntity(51U);
    msg.setDestination(9122U);
    msg.setDestinationEntity(221U);
    msg.locale.assign("HKEMPNITROKXOWMPCHWYGQWIOZEGZMPRYZWAGASPSGYKQBFFSRMYUQXHZKZIBNVUGKMKXWTLCZJBVCXELBFGRHEFJVMFAUQSANDNFUGNOWKDGLTEVIADPBQSILQSNZDZMAVNDWJIYUSCACPHLHNEKEDEITVVWZBDRHDJHSXHJOQOJLFSFAOYBXIIDYPTIBTFCGFZUMDEXYRWURVRYTXOVYULCOBOVJCWMQCEUTPJRM");
    const signed char tmp_msg_0[] = {86, 86, -88, 75, 32, 29, -12, 104, 26, 105, 4, 56, -53, 124, -26, 114, 108, -1, 113, -13, 79, 40, 126, 44, 33, 37};
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
    msg.setTimeStamp(0.24706168065712508);
    msg.setSource(5431U);
    msg.setSourceEntity(230U);
    msg.setDestination(42023U);
    msg.setDestinationEntity(174U);
    msg.locale.assign("OOBFAYCJMNWRRPLJPEUPSAHDLBKZOXNTBCHKFIUXCQMATOGVPXBROTYQJEQICVXZWYHRUBMBVFMNTHXKYVRNIS");
    const signed char tmp_msg_0[] = {-22, 15, 122, 59, -109, -51, 72, -24, 11, -1, -98, 106, -9, 119, 55, -88, 71, -80, -83, 11, -29, -60, 29, -96, 74, -122, 56, -13, -59, 62, 66, 66, 42, -81, 111, -31, 5, -117, 68, 81, 6, -46, 32, 74, 73, 102, -50, 29, 45, -63, -1, -121, -37};
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
    msg.setTimeStamp(0.34310543380028125);
    msg.setSource(15842U);
    msg.setSourceEntity(0U);
    msg.setDestination(2071U);
    msg.setDestinationEntity(1U);
    msg.locale.assign("BYVVYLHYXXTXBFZEDUZUCCDXZKNGLOOUCI");
    const signed char tmp_msg_0[] = {26, -104, -126, -98, 8, -54, 63, -15, -122, 35, -32, -89, 49, 15, -3, 102, -111, -69, -25, -62, -44, 43, -80, 107, 23, -17, 79, 38, 51, 44, 60, 13, -111, 17, 37, 12, 114, 97, 83, 98, 15, -22, -75, -50, -75, -64, 106, 101, 95, -98, -84, 110, -11, 72, -122, 2, 33, -81, 116, -78, 37, -95, 71, 63, -106, -67, -92, -124, -110, -2, -113, -79, -121, -29, 93, 41, -31, 39, -77, -70, -52, -54, 120, 115, 90, 50, 76, -81, -39, -33, 16, 118, -32, -92, 116, -17, -21, 44, 72, -74, 67, 66, -22, -104, -51, 58, 77, 56, -95, -68, -34, -111, -68, 125, 108, -69, 107, -90, -122, 71, 12, 69, -10, -38, -69, 63, -21, -114, -4, 41, -100, -42, 122, 124, -61, 68, 120, 80, -27, 62, -62, -115, -83, -102, 89, -11, -53, -6, 58, -80, 117, -46, 17, -112, 26, -82, -17, 75, 113, 21, -38, -49, -56, 101, 89, 79, -1, 17, -121, -110};
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
    msg.setTimeStamp(0.770753889618422);
    msg.setSource(8978U);
    msg.setSourceEntity(117U);
    msg.setDestination(63803U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.5994923003951899);
    msg.setSource(23207U);
    msg.setSourceEntity(34U);
    msg.setDestination(43676U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.5105073550361544);
    msg.setSource(16657U);
    msg.setSourceEntity(118U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(184U);

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

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.6878405152115352);
    msg.setSource(40115U);
    msg.setSourceEntity(218U);
    msg.setDestination(27528U);
    msg.setDestinationEntity(239U);
    msg.camid = 16U;
    msg.x = 20495U;
    msg.y = 25683U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.23225668475012406);
    msg.setSource(8701U);
    msg.setSourceEntity(188U);
    msg.setDestination(43601U);
    msg.setDestinationEntity(113U);
    msg.camid = 11U;
    msg.x = 48568U;
    msg.y = 18673U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.39259749945880074);
    msg.setSource(31757U);
    msg.setSourceEntity(157U);
    msg.setDestination(40997U);
    msg.setDestinationEntity(95U);
    msg.camid = 152U;
    msg.x = 8998U;
    msg.y = 16016U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.19777778789528822);
    msg.setSource(57322U);
    msg.setSourceEntity(32U);
    msg.setDestination(4496U);
    msg.setDestinationEntity(126U);
    msg.camid = 53U;
    msg.x = 24821U;
    msg.y = 28773U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.7065571994675496);
    msg.setSource(64433U);
    msg.setSourceEntity(105U);
    msg.setDestination(4087U);
    msg.setDestinationEntity(76U);
    msg.camid = 160U;
    msg.x = 27017U;
    msg.y = 62002U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.3119105393825974);
    msg.setSource(34392U);
    msg.setSourceEntity(137U);
    msg.setDestination(25727U);
    msg.setDestinationEntity(214U);
    msg.camid = 99U;
    msg.x = 50706U;
    msg.y = 50723U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.1661980257231621);
    msg.setSource(58564U);
    msg.setSourceEntity(159U);
    msg.setDestination(39606U);
    msg.setDestinationEntity(24U);
    msg.tracking = 42U;
    msg.lat = 0.15488041912696326;
    msg.lon = 0.5162168618724796;
    msg.x = 0.2314478603012302;
    msg.y = 0.4281484223076657;
    msg.z = 0.982441078715891;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.7492806065556119);
    msg.setSource(57500U);
    msg.setSourceEntity(86U);
    msg.setDestination(221U);
    msg.setDestinationEntity(104U);
    msg.tracking = 120U;
    msg.lat = 0.6721537088347558;
    msg.lon = 0.7475115039850513;
    msg.x = 0.026139280611207405;
    msg.y = 0.1594160926260958;
    msg.z = 0.7398057278732433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.12006506867841149);
    msg.setSource(51662U);
    msg.setSourceEntity(254U);
    msg.setDestination(2300U);
    msg.setDestinationEntity(134U);
    msg.tracking = 236U;
    msg.lat = 0.19429783780458132;
    msg.lon = 0.655465853999896;
    msg.x = 0.6490400535917085;
    msg.y = 0.9584345466995013;
    msg.z = 0.9888183926486879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.47284900628401794);
    msg.setSource(13109U);
    msg.setSourceEntity(17U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(33U);
    msg.target.assign("FDCVAGFLZGFMBRRGJWPYUQKSCAOTWZQDUNQPXDTPMCGTBHESBJAXGAHVDLCCAUVAFWPUHPSRALCIOLOTAMBKGYNTRNMFLXVXIQFZBYRQHCEGKNHKDMVXGQNIDBSLTSTTBZLMKSWJFG");
    msg.lbearing = 0.1669063182165016;
    msg.lelevation = 0.5516637706939014;
    msg.bearing = 0.23253951019955332;
    msg.elevation = 0.683640483797121;
    msg.phi = 0.9487029006890284;
    msg.theta = 0.32866040053742185;
    msg.psi = 0.7776200954298363;
    msg.accuracy = 0.24342070551460804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.20045042124699508);
    msg.setSource(2766U);
    msg.setSourceEntity(134U);
    msg.setDestination(4419U);
    msg.setDestinationEntity(145U);
    msg.target.assign("ZJDKMIAFUDLXIUFXMYQRIFLVAUCPXHAVTNJRWGURQWGWUEJSAPHCFPNDAUGOFGMHUSTNQNSGXJYDAKBOQYVDBOCSNNJKVXEJHRPQWSNXMDXSFBVZMVKHLCWQEYOYQDLOPTOYIHYEOIBFGVSPUZDKZIEIVZADEEJMLOXCMXRULBNOCZHYRBA");
    msg.lbearing = 0.13992320965583116;
    msg.lelevation = 0.3684300824097042;
    msg.bearing = 0.09612873535772992;
    msg.elevation = 0.41040215112377676;
    msg.phi = 0.22066423414171255;
    msg.theta = 0.885017531452155;
    msg.psi = 0.9718674907237317;
    msg.accuracy = 0.5688756360355524;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.5159079079806295);
    msg.setSource(37537U);
    msg.setSourceEntity(124U);
    msg.setDestination(20935U);
    msg.setDestinationEntity(161U);
    msg.target.assign("GAVMILURCHNTPPFIRXFZSFYHFWQSGGHZLBDTFEAFGFILABBREWBVFJJBDWJZPNZKFZCZYMPUDLLRWBSJIKQPVZDXYUQKOAQX");
    msg.lbearing = 0.5713814300142025;
    msg.lelevation = 0.35641584381536107;
    msg.bearing = 0.8504851960222068;
    msg.elevation = 0.5569481370232447;
    msg.phi = 0.7164227630966946;
    msg.theta = 0.8693639552748679;
    msg.psi = 0.5099672531822738;
    msg.accuracy = 0.2487640143697526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.48853302875991245);
    msg.setSource(49209U);
    msg.setSourceEntity(234U);
    msg.setDestination(55515U);
    msg.setDestinationEntity(81U);
    msg.target.assign("HKWOUJCTVWUMUWGBGTTZXAACMOEARQTCRPWCZXUYSBAPVVXIAVNQXKEIDODK");
    msg.x = 0.24005167865163357;
    msg.y = 0.6117299227292499;
    msg.z = 0.3341736492532892;
    msg.n = 0.770310704361749;
    msg.e = 0.8066035551962842;
    msg.d = 0.8390533563944372;
    msg.phi = 0.6530400509409011;
    msg.theta = 0.8926151929609031;
    msg.psi = 0.755798567600124;
    msg.accuracy = 0.05310858772446969;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.9944991585245672);
    msg.setSource(16158U);
    msg.setSourceEntity(250U);
    msg.setDestination(18592U);
    msg.setDestinationEntity(236U);
    msg.target.assign("CFCRPXCLHJKKYAYPHWSBCLHKBUFKGLVLKXDYHYFOVWSWWJZEVEWGFRRSHQEVXOJCQMINSXXJQFWTRGJCSJCOVYDBURZKVJCZLSAM");
    msg.x = 0.29790512727622676;
    msg.y = 0.7179896227280661;
    msg.z = 0.39494404692865914;
    msg.n = 0.513402093811335;
    msg.e = 0.6322900813134611;
    msg.d = 0.8164119245046829;
    msg.phi = 0.5599843434036238;
    msg.theta = 0.21619687869763238;
    msg.psi = 0.30678479318254714;
    msg.accuracy = 0.9375176368640673;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.32178550762878577);
    msg.setSource(19330U);
    msg.setSourceEntity(40U);
    msg.setDestination(26842U);
    msg.setDestinationEntity(65U);
    msg.target.assign("CNSFQKKQRTVGQHEZUZQXKVYYAHRRGQRCGRMXLYAPDTKZNSJMEIHOFUGNFBFMIPBHIEDEMVDBLGEYMLJMDYAVNXPLKOQOZFLLUIHNVMAHJSWMMAITLZBKYKVZGWOBTSVJSDEAXDPCTCJDPBZWLMUN");
    msg.x = 0.7543333689545002;
    msg.y = 0.13748776138538332;
    msg.z = 0.10357581696253204;
    msg.n = 0.028982313005926685;
    msg.e = 0.5068610543556107;
    msg.d = 0.29509908678274266;
    msg.phi = 0.9479181559804755;
    msg.theta = 0.7143405992281731;
    msg.psi = 0.5202083494047898;
    msg.accuracy = 0.017235616687462763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.9411259718278203);
    msg.setSource(22509U);
    msg.setSourceEntity(42U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(213U);
    msg.target.assign("VNNCSILOZROOCONPUDGVWUOU");
    msg.lat = 0.3813983560054558;
    msg.lon = 0.4272265910072217;
    msg.z_units = 8U;
    msg.z = 0.9924589428455717;
    msg.accuracy = 0.13527160877339806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.9676881652193978);
    msg.setSource(62159U);
    msg.setSourceEntity(71U);
    msg.setDestination(87U);
    msg.setDestinationEntity(52U);
    msg.target.assign("WJGUHONATSPHFSUZTEGPBYDGBBISDHWDXKEPEWKNGILRXZIHKYKPPRDDRSVUJAQXYWZRSGMLKZXLVMANCMRRYVPWEUMIDBZAFLLACQDRMFQLCETBXUOGCDOOFTWHAYYFEZRLYONQNTPJVJFOMWKJWVVUYZOFCBNJNHHCJOJVBPHGGULSXHFUAJRMXSEDKQMPKGUEAZVWTEXPTENCXBAIJMKQCQINFQZOVSTTIXIZVH");
    msg.lat = 0.6436599316532076;
    msg.lon = 0.020849515930023155;
    msg.z_units = 219U;
    msg.z = 0.37113490707082053;
    msg.accuracy = 0.2651972561315261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.5211819049562044);
    msg.setSource(37062U);
    msg.setSourceEntity(185U);
    msg.setDestination(41798U);
    msg.setDestinationEntity(3U);
    msg.target.assign("YPLOXESNQGVDHIUKURLUMOIPEQFGOPJXGRDEMSRWVRQZAPXJANREYARYFJIDHQWEFKKELHKLNNTLTQKHODOSWZANUHKPBJWNPEN");
    msg.lat = 0.04670885438069794;
    msg.lon = 0.914713864903801;
    msg.z_units = 15U;
    msg.z = 0.4856639282517333;
    msg.accuracy = 0.34284474095343853;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.21590721701682714);
    msg.setSource(38839U);
    msg.setSourceEntity(146U);
    msg.setDestination(60992U);
    msg.setDestinationEntity(128U);
    msg.name.assign("PPPFPZMELQVRAAHJIAGRTFJVCYWSNCLBGYCNKUPDOVIHZJBKUTOBEGGZYTBTSIEORXMTEFJOIDHWVBQSCKUHYXSWVWXORBXOLLMAWCSUPQNGYAOVHUMRFSKQBESRLMSWKJTQDCXWPPCAYYU");
    msg.lat = 0.4724034149035109;
    msg.lon = 0.25247786980341513;
    msg.z = 0.22168487037732754;
    msg.z_units = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.8776553234860563);
    msg.setSource(32410U);
    msg.setSourceEntity(45U);
    msg.setDestination(1770U);
    msg.setDestinationEntity(158U);
    msg.name.assign("AJNVJQWWAHOLFWFQAEVQPOYPWKHUMBVUWGRIBVTTQOOFNADANCJHAMCBVQXOXYJIHBBMRHIXVRGXLZSQBUZUZEKNYKCCTBAKECWNJSPCMEGZRXIFDEUOS");
    msg.lat = 0.6328543574219846;
    msg.lon = 0.2676180637912978;
    msg.z = 0.12795447813603444;
    msg.z_units = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.47107230577802695);
    msg.setSource(57716U);
    msg.setSourceEntity(162U);
    msg.setDestination(33803U);
    msg.setDestinationEntity(23U);
    msg.name.assign("UYYQPFIVGXWKHZSBTBQRBZKQRVHNYBPOTUQOEYRALLRICADICMXSNHJURNHNCWIFMFLCSYAXZZIFWZTILTEJJCOXNPGKVWTASJWDDUEVHIXSQDZTXPOZYKSLYBAEFFKNQBYTWMTOLBGVSPBPGLORWYXRFNKCRXMEXMUHMZISYJMUUEJFTRCQXBAJZGVNEWNAVDIQKKLDHEGCRMWMSPFJOLDBKDPZPWPHGVOVCFJGHGQKA");
    msg.lat = 0.5704721604097212;
    msg.lon = 0.1546061201797181;
    msg.z = 0.4532141460113631;
    msg.z_units = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.19903228486309754);
    msg.setSource(20316U);
    msg.setSourceEntity(236U);
    msg.setDestination(26461U);
    msg.setDestinationEntity(14U);
    msg.op = 20U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.6145667317351113);
    msg.setSource(54987U);
    msg.setSourceEntity(132U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(141U);
    msg.op = 123U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IJGKMWFOKLJQMAANAQLUMDIRICBULTUIVTYGOQPPYLXRVROEIENWFGDENKSBRWUZJBQFEDLHNCNDAYHPQOTPURAMNOHPXYWJQTPRVTCUPKV");
    tmp_msg_0.lat = 0.5666819190474918;
    tmp_msg_0.lon = 0.10667931937483055;
    tmp_msg_0.z = 0.44812562246589893;
    tmp_msg_0.z_units = 23U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.9100538075744067);
    msg.setSource(7537U);
    msg.setSourceEntity(219U);
    msg.setDestination(31291U);
    msg.setDestinationEntity(130U);
    msg.op = 143U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("IGVWINIYLOTABSVYJZWPBMSNPNLKZIACSGELUUTQGNAKEAWZJQUBNSTDOYFGKKSGHVJURCJDMMDWQGKJNRTTTXEMUADCBPOOMINVRCPPSBXCHDLOYBUIVFGZARCLCQURXBNFFFVFZSAZKICHRYWXXPHCRZVGEVEZANWZLHFYOFYXHRQDQUEJSTLYQSOVTOLMJM");
    tmp_msg_0.lat = 0.5589970469856691;
    tmp_msg_0.lon = 0.5536556608510855;
    tmp_msg_0.z = 0.9570305268825446;
    tmp_msg_0.z_units = 54U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4783181302317374);
    msg.setSource(8843U);
    msg.setSourceEntity(85U);
    msg.setDestination(61573U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6875534025037825;
    msg.type = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6064119607183573);
    msg.setSource(46932U);
    msg.setSourceEntity(127U);
    msg.setDestination(21052U);
    msg.setDestinationEntity(197U);
    msg.value = 0.5511724775258042;
    msg.type = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.09072008182306746);
    msg.setSource(2358U);
    msg.setSourceEntity(83U);
    msg.setDestination(22830U);
    msg.setDestinationEntity(175U);
    msg.value = 0.07216704066691249;
    msg.type = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.28278426656082545);
    msg.setSource(37540U);
    msg.setSourceEntity(114U);
    msg.setDestination(21045U);
    msg.setDestinationEntity(148U);
    msg.value = 0.07378722322535514;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.7660135112187152);
    msg.setSource(6276U);
    msg.setSourceEntity(179U);
    msg.setDestination(61389U);
    msg.setDestinationEntity(175U);
    msg.value = 0.9157100006445327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.19186151619198566);
    msg.setSource(22542U);
    msg.setSourceEntity(86U);
    msg.setDestination(37745U);
    msg.setDestinationEntity(80U);
    msg.value = 0.4826136319088573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.8586220898137965);
    msg.setSource(30400U);
    msg.setSourceEntity(250U);
    msg.setDestination(35480U);
    msg.setDestinationEntity(14U);
    msg.timestamp_last_service = 0.9096723038699973;
    msg.time_next_service = 0.3897900135179049;
    msg.time_motor_next_service = 0.44470771876354287;
    msg.time_idle_ground = 0.6893189840557546;
    msg.time_idle_air = 0.7555093335245783;
    msg.time_idle_water = 0.5270346009890055;
    msg.time_idle_underwater = 0.7195855107994391;
    msg.time_idle_unknown = 0.8162189568411783;
    msg.time_motor_ground = 0.9696541085926337;
    msg.time_motor_air = 0.6096346112594647;
    msg.time_motor_water = 0.14404813241844294;
    msg.time_motor_underwater = 0.17005295736594228;
    msg.time_motor_unknown = 0.7620153430528593;
    msg.rpm_min = -11384;
    msg.rpm_max = 15112;
    msg.depth_max = 0.045541385830947356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.0026408788992633436);
    msg.setSource(51691U);
    msg.setSourceEntity(211U);
    msg.setDestination(17249U);
    msg.setDestinationEntity(169U);
    msg.timestamp_last_service = 0.9316434268630901;
    msg.time_next_service = 0.015225183849155721;
    msg.time_motor_next_service = 0.30364298262937417;
    msg.time_idle_ground = 0.9605693707737204;
    msg.time_idle_air = 0.9639828950609709;
    msg.time_idle_water = 0.35254025042103;
    msg.time_idle_underwater = 0.6733722159109791;
    msg.time_idle_unknown = 0.8801812680794531;
    msg.time_motor_ground = 0.11913300278061723;
    msg.time_motor_air = 0.30344606279338815;
    msg.time_motor_water = 0.4757217415802939;
    msg.time_motor_underwater = 0.7467010206883664;
    msg.time_motor_unknown = 0.10183055137283126;
    msg.rpm_min = -18130;
    msg.rpm_max = -24233;
    msg.depth_max = 0.6839570864534346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.6737840215216189);
    msg.setSource(5086U);
    msg.setSourceEntity(43U);
    msg.setDestination(33423U);
    msg.setDestinationEntity(139U);
    msg.timestamp_last_service = 0.9486150254104436;
    msg.time_next_service = 0.31920728333587944;
    msg.time_motor_next_service = 0.6196140869302171;
    msg.time_idle_ground = 0.22905786099870995;
    msg.time_idle_air = 0.21904967753128302;
    msg.time_idle_water = 0.9562398487825498;
    msg.time_idle_underwater = 0.06674786662401222;
    msg.time_idle_unknown = 0.27429427701961806;
    msg.time_motor_ground = 0.007606576593801928;
    msg.time_motor_air = 0.9969404837747249;
    msg.time_motor_water = 0.2768930943735636;
    msg.time_motor_underwater = 0.44865717540868266;
    msg.time_motor_unknown = 0.3411079533700898;
    msg.rpm_min = -16590;
    msg.rpm_max = -14134;
    msg.depth_max = 0.5204073602875885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.226038263086497);
    msg.setSource(18246U);
    msg.setSourceEntity(130U);
    msg.setDestination(18348U);
    msg.setDestinationEntity(211U);
    msg.severity = 173U;
    msg.text.assign("QDAYJOREYGSPQSOBQTOWAFMKKZVPXKGCVJTKLOHGXMLHTLAVTDBNYPYNFAXSQRHZHKIXZCPUABUQBUWIOQWVHALDLBZCCKMKJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.055969953116996596);
    msg.setSource(32758U);
    msg.setSourceEntity(84U);
    msg.setDestination(32442U);
    msg.setDestinationEntity(110U);
    msg.severity = 181U;
    msg.text.assign("OVGKDWQWPBJQX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.991461933830712);
    msg.setSource(34274U);
    msg.setSourceEntity(238U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(97U);
    msg.severity = 244U;
    msg.text.assign("JMIKAOADUCIYETXDZTVBRSWFLBSNPJXCWOVXPDLNWUHPKJJFHPZWXDGWEFNUSNZHGSTAHPWAKQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.8027441433341134);
    msg.setSource(77U);
    msg.setSourceEntity(252U);
    msg.setDestination(45757U);
    msg.setDestinationEntity(146U);
    msg.channel = 41;
    msg.value = 1819771355;
    msg.gain = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.5448217086969288);
    msg.setSource(43809U);
    msg.setSourceEntity(114U);
    msg.setDestination(29225U);
    msg.setDestinationEntity(96U);
    msg.channel = -118;
    msg.value = 1477739607;
    msg.gain = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.9951691005798725);
    msg.setSource(50652U);
    msg.setSourceEntity(52U);
    msg.setDestination(40445U);
    msg.setDestinationEntity(176U);
    msg.channel = 48;
    msg.value = 1329187072;
    msg.gain = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.24554913524306454);
    msg.setSource(5155U);
    msg.setSourceEntity(117U);
    msg.setDestination(28664U);
    msg.setDestinationEntity(91U);
    msg.ch01 = 0.9844202153114405;
    msg.ch02 = 0.5127489226325814;
    msg.ch03 = 0.5271951213984186;
    msg.ch04 = 0.19938452303082677;
    msg.ch05 = 0.887947267289319;
    msg.ch06 = 0.9534644729122216;
    msg.ch07 = 0.7815384260607057;
    msg.ch08 = 0.0857007019622602;
    msg.ch09 = 0.28742399392108053;
    msg.ch10 = 0.9398909514648309;
    msg.ch11 = 0.29709059156809214;
    msg.ch12 = 0.890044557280999;
    msg.ch13 = 0.11846149056557553;
    msg.ch14 = 0.47996265513515557;
    msg.ch15 = 0.6176290766324667;
    msg.ch16 = 0.8515439463456244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.6793227846210377);
    msg.setSource(51592U);
    msg.setSourceEntity(151U);
    msg.setDestination(20728U);
    msg.setDestinationEntity(10U);
    msg.ch01 = 0.4586032847237139;
    msg.ch02 = 0.7873003741343895;
    msg.ch03 = 0.7019759484058372;
    msg.ch04 = 0.2253124953453871;
    msg.ch05 = 0.3916047937898731;
    msg.ch06 = 0.14455655671500423;
    msg.ch07 = 0.33818518830976907;
    msg.ch08 = 0.10059936085486942;
    msg.ch09 = 0.03564929995151267;
    msg.ch10 = 0.9056714667241302;
    msg.ch11 = 0.1677192215035599;
    msg.ch12 = 0.09675009879195262;
    msg.ch13 = 0.6987097029269377;
    msg.ch14 = 0.919527551172306;
    msg.ch15 = 0.33756511612359663;
    msg.ch16 = 0.7004669843298126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.9723670494707916);
    msg.setSource(23863U);
    msg.setSourceEntity(191U);
    msg.setDestination(31949U);
    msg.setDestinationEntity(73U);
    msg.ch01 = 0.1321481660137206;
    msg.ch02 = 0.9286062234742789;
    msg.ch03 = 0.8299936889857835;
    msg.ch04 = 0.11130952918988157;
    msg.ch05 = 0.27395241222320077;
    msg.ch06 = 0.4957728503208825;
    msg.ch07 = 0.16175623738040135;
    msg.ch08 = 0.37932833608906014;
    msg.ch09 = 0.5918892386514486;
    msg.ch10 = 0.7967986376543968;
    msg.ch11 = 0.6971175961776764;
    msg.ch12 = 0.27884446277634045;
    msg.ch13 = 0.09189832022451394;
    msg.ch14 = 0.4761170717330435;
    msg.ch15 = 0.5905894920471239;
    msg.ch16 = 0.4835123518129305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.18841233388247303);
    msg.setSource(56446U);
    msg.setSourceEntity(50U);
    msg.setDestination(33593U);
    msg.setDestinationEntity(230U);
    msg.op = 156U;
    msg.lat = 0.5951923048839849;
    msg.lon = 0.11758839285385903;
    msg.height = 0.6847474387103323;
    msg.depth = 0.6946686161153767;
    msg.alt = 0.40405586344251543;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.9336548485373936);
    msg.setSource(28973U);
    msg.setSourceEntity(187U);
    msg.setDestination(48592U);
    msg.setDestinationEntity(134U);
    msg.op = 43U;
    msg.lat = 0.2741167057544507;
    msg.lon = 0.10996127236782371;
    msg.height = 0.7364399963839181;
    msg.depth = 0.0027734742373770604;
    msg.alt = 0.0471806033513168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.9451910958345627);
    msg.setSource(47448U);
    msg.setSourceEntity(100U);
    msg.setDestination(32021U);
    msg.setDestinationEntity(231U);
    msg.op = 183U;
    msg.lat = 0.9273546652630088;
    msg.lon = 0.8257468455328036;
    msg.height = 0.4262011252096932;
    msg.depth = 0.8218819466402274;
    msg.alt = 0.4207456051121029;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.31973283741750924);
    msg.setSource(45364U);
    msg.setSourceEntity(0U);
    msg.setDestination(15472U);
    msg.setDestinationEntity(59U);
    msg.nbeams = 156U;
    msg.ncells = 57U;
    msg.coord_sys = 249U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.317539598389298;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.4469506205461057;
    tmp_tmp_msg_0_0.amp = 0.6307981838126799;
    tmp_tmp_msg_0_0.cor = 248U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.5525271707816236);
    msg.setSource(49572U);
    msg.setSourceEntity(6U);
    msg.setDestination(57593U);
    msg.setDestinationEntity(212U);
    msg.nbeams = 75U;
    msg.ncells = 52U;
    msg.coord_sys = 121U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5022343173838393;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6305074601035935;
    tmp_tmp_msg_0_0.amp = 0.5495855566342697;
    tmp_tmp_msg_0_0.cor = 169U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.05768916192653073);
    msg.setSource(1752U);
    msg.setSourceEntity(211U);
    msg.setDestination(39194U);
    msg.setDestinationEntity(158U);
    msg.nbeams = 47U;
    msg.ncells = 42U;
    msg.coord_sys = 66U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4614840779286624;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8270740336862118;
    tmp_tmp_msg_0_0.amp = 0.5658133439869351;
    tmp_tmp_msg_0_0.cor = 40U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.969882393418112);
    msg.setSource(50540U);
    msg.setSourceEntity(102U);
    msg.setDestination(54214U);
    msg.setDestinationEntity(187U);
    msg.cell_position = 0.8342513805498273;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.22108563394925862;
    tmp_msg_0.amp = 0.5917049398092272;
    tmp_msg_0.cor = 57U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.7319770468845533);
    msg.setSource(24295U);
    msg.setSourceEntity(218U);
    msg.setDestination(63972U);
    msg.setDestinationEntity(127U);
    msg.cell_position = 0.1221015784650833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.8903298619367602);
    msg.setSource(29199U);
    msg.setSourceEntity(141U);
    msg.setDestination(16459U);
    msg.setDestinationEntity(17U);
    msg.cell_position = 0.34102074487486367;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.45838731040525316);
    msg.setSource(15007U);
    msg.setSourceEntity(10U);
    msg.setDestination(3855U);
    msg.setDestinationEntity(68U);
    msg.vel = 0.006964878173042033;
    msg.amp = 0.16311502326547367;
    msg.cor = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.5963827277942821);
    msg.setSource(23849U);
    msg.setSourceEntity(219U);
    msg.setDestination(60076U);
    msg.setDestinationEntity(30U);
    msg.vel = 0.2625804242112382;
    msg.amp = 0.7330108612869191;
    msg.cor = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.6606218383126293);
    msg.setSource(22860U);
    msg.setSourceEntity(227U);
    msg.setDestination(7018U);
    msg.setDestinationEntity(146U);
    msg.vel = 0.10635125095022468;
    msg.amp = 0.6661072824747466;
    msg.cor = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.5071353715071827);
    msg.setSource(43763U);
    msg.setSourceEntity(34U);
    msg.setDestination(18016U);
    msg.setDestinationEntity(220U);
    msg.name.assign("UYDBDRJLKYLPRJKGEIWLCGEYICVCXFTFIUXIBILTZGCIKXXKAZQVSKGWCMTHDBVOMGABNKCWIXHNPEGJHAJHSNLNKPUUZZRQEOOVQVSICZIOVVHAXOFEUDRLSTFBOHYQYQILFDCMRAAFWEADTZPDWHEG");
    msg.value = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.18961628241146977);
    msg.setSource(34645U);
    msg.setSourceEntity(59U);
    msg.setDestination(57772U);
    msg.setDestinationEntity(6U);
    msg.name.assign("JFIFBEVJAEVBPH");
    msg.value = 190U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.20998345396086093);
    msg.setSource(47271U);
    msg.setSourceEntity(87U);
    msg.setDestination(30741U);
    msg.setDestinationEntity(119U);
    msg.name.assign("HWGSLPVTBKLNGNNREMES");
    msg.value = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.7154481058818497);
    msg.setSource(14371U);
    msg.setSourceEntity(37U);
    msg.setDestination(51628U);
    msg.setDestinationEntity(43U);
    msg.name.assign("CDKBOXIRHBHUIPLRSWGIBDJJYTCNWKKTVARLKMQWFBQEGRZVTZTBBBGKIIAWX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.5923226333782661);
    msg.setSource(34085U);
    msg.setSourceEntity(214U);
    msg.setDestination(65351U);
    msg.setDestinationEntity(206U);
    msg.name.assign("VCWFVXXERHHBNKNVGYDOJHDOIHGFRGFPYKBLOCEQSZTLUEWDKELHEBOAGKACITVZWRUARONYIYQNMSDMAJEGQOJFCOQZCMTDRLQIGZBMMQCYSDHMGEUPKSUPKWKSPWQGQFNDCNRUPFUZOQJLDJYBTJZVICTTYXKRJUHJUCIPVFPXSORRLWWVAUTVENAGAFDSKSXALW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.5726895862085455);
    msg.setSource(35741U);
    msg.setSourceEntity(53U);
    msg.setDestination(18825U);
    msg.setDestinationEntity(164U);
    msg.name.assign("YVRETAGECTCHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.0713514554319592);
    msg.setSource(31622U);
    msg.setSourceEntity(166U);
    msg.setDestination(41806U);
    msg.setDestinationEntity(55U);
    msg.name.assign("EFXWWNYGZNSTIHWIMQDXHWASADKKYHKDKJVEANETNQRNYELNUDXJKINMUBEFDDAGBYXSEDJGCBYLPBXTULAOWLNCROZELQOYZMRNJFZCSMZIQFTWQIQTFJARIIVHPOPSSXRCFZFGHQQOUGJRFRHUSYLZBMUOUSKBTMRTBVGRLNPJVBDVMPMKAQSGXPFTLEUBIPXZIICHYULHWGVQOWJCMLTYYVAKCXSJDKGOCGZHDOC");
    msg.value = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.3008103445418675);
    msg.setSource(9859U);
    msg.setSourceEntity(141U);
    msg.setDestination(45930U);
    msg.setDestinationEntity(15U);
    msg.name.assign("ITSIMZAGBAEHTQOPJFYYNYLCZPTLKESDDJZHGOJNFOGLSTU");
    msg.value = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.5638762947858579);
    msg.setSource(40321U);
    msg.setSourceEntity(110U);
    msg.setDestination(59809U);
    msg.setDestinationEntity(249U);
    msg.name.assign("OQUQFNBBNSLIHHKPAIVBGZEGCKYQUITFUERPRXWEEKCPVSYDWIBWQCMZUBJIFJFHTVSDHWIKTYPSKMZYZOXXFWGWLSCUZULGDOPUKQYLPTAXDFOZMKRZNAFJWQSYUVDHRJCKWVGHYPOEHI");
    msg.value = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.665383245997238);
    msg.setSource(28866U);
    msg.setSourceEntity(115U);
    msg.setDestination(35205U);
    msg.setDestinationEntity(109U);
    msg.value = 0.3921951567794444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7816995090130796);
    msg.setSource(38290U);
    msg.setSourceEntity(58U);
    msg.setDestination(38650U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7189763948842494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5715691560340538);
    msg.setSource(10217U);
    msg.setSourceEntity(134U);
    msg.setDestination(43956U);
    msg.setDestinationEntity(76U);
    msg.value = 0.9154026508376706;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.5509388209960346);
    msg.setSource(25650U);
    msg.setSourceEntity(108U);
    msg.setDestination(49644U);
    msg.setDestinationEntity(179U);
    msg.value = 0.10124811788321231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.960028718618897);
    msg.setSource(24046U);
    msg.setSourceEntity(26U);
    msg.setDestination(8437U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9483889890812393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6598613942770514);
    msg.setSource(19555U);
    msg.setSourceEntity(156U);
    msg.setDestination(2309U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6023138180388107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.12955871067223912);
    msg.setSource(50519U);
    msg.setSourceEntity(157U);
    msg.setDestination(6675U);
    msg.setDestinationEntity(149U);
    msg.value = 0.3951039669502686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.49791903268304427);
    msg.setSource(62868U);
    msg.setSourceEntity(137U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(117U);
    msg.value = 0.5821401331036186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.07421603082755346);
    msg.setSource(43033U);
    msg.setSourceEntity(121U);
    msg.setDestination(55111U);
    msg.setDestinationEntity(106U);
    msg.value = 0.9261386728217217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.11743497204749087);
    msg.setSource(27788U);
    msg.setSourceEntity(151U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(87U);
    msg.restriction = 30U;
    msg.reason.assign("ISOYKMLXVAGIOOJUCUGWIRTYEPYMKXZGUCCKLZLFJIOSPMZTUYFRERWENZBCOOQPVINAVXJEHYIRUMRXFASRWYIZBKQGXCOMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.3632460409604876);
    msg.setSource(22247U);
    msg.setSourceEntity(145U);
    msg.setDestination(39396U);
    msg.setDestinationEntity(138U);
    msg.restriction = 80U;
    msg.reason.assign("XZXTEBONNENREZZGTCZFRSQNYLUESOAKMJYCCASICKVSJMYRWBGNHGLPOUURJGNZLAIPWBAQHBYSSNTVKJPXJMDCQKHGYWPJLBMEWGLRDEIYDABLHINRMHGUFBZHUPAFSDZKXOBFJGSVQKIDTYQBUTUXJWIEQPFLTMXNZPVOVAMVXUREWHDWVURTTGUQRCOADVHKEKIFCXNCXIPPBWLIHYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.25082700861716556);
    msg.setSource(63290U);
    msg.setSourceEntity(134U);
    msg.setDestination(17764U);
    msg.setDestinationEntity(81U);
    msg.restriction = 201U;
    msg.reason.assign("EKOMWRPEQKOGCPVMTGQTHGLLHFXFNJROFYZDIPONXHZSNBPDQTCINLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
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
