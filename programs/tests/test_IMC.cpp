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
    msg.setTimeStamp(0.37637673759790813);
    msg.setSource(8489U);
    msg.setSourceEntity(90U);
    msg.setDestination(15275U);
    msg.setDestinationEntity(24U);
    msg.state = 125U;
    msg.flags = 108U;
    msg.description.assign("HTLAYUNQAVTSIRHGJQPMNFYZKPUDJCBZIOHWFWMVRKIJUMQVFHKLYMLGSXJOQFCPFRTSPTXVBRWAUGGMFHEYERACJXLKNLKNDZJZULXWBMEBENZECTRIWRQSADEKYOBNOPVOQQSVOAGPZWEHHCVPRDQ");

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
    msg.setTimeStamp(0.10361243357802519);
    msg.setSource(11027U);
    msg.setSourceEntity(0U);
    msg.setDestination(29968U);
    msg.setDestinationEntity(116U);
    msg.state = 193U;
    msg.flags = 181U;
    msg.description.assign("MWWWTWVMUVPPGUGMWATCQTOETRQJKBYJMYMICFBVTPLXLRGDBLPQUZWELHHBCCOZISEIDJIRKELIMSQEUAIJGVUVJCRZBXYNRPHYROHIVNVQTFJJULZOTFINZDCQXLZONANYDBKGMJSDGAGJYAKUNSKFQGXWHZFKBIYOYEZWJFURRZEAMPWEPSKVSLSS");

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
    msg.setTimeStamp(0.5508567915726612);
    msg.setSource(55786U);
    msg.setSourceEntity(244U);
    msg.setDestination(48429U);
    msg.setDestinationEntity(209U);
    msg.state = 224U;
    msg.flags = 205U;
    msg.description.assign("DXSYEYNZNFXEGQRZSIEEPYIEKQECSYJONBFGEMCGRIWOXCGHMKAZTPXGMHDDJC");

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
    msg.setTimeStamp(0.5100431425185403);
    msg.setSource(39678U);
    msg.setSourceEntity(156U);
    msg.setDestination(41536U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.16671834184245216);
    msg.setSource(14373U);
    msg.setSourceEntity(168U);
    msg.setDestination(56469U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.10643150467196572);
    msg.setSource(3746U);
    msg.setSourceEntity(91U);
    msg.setDestination(54611U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.6110572077550067);
    msg.setSource(44923U);
    msg.setSourceEntity(29U);
    msg.setDestination(18476U);
    msg.setDestinationEntity(184U);
    msg.id = 198U;
    msg.label.assign("ANWGQPQMFOLDKONRUX");
    msg.component.assign("PDUOISJMJPJTPQXYZMTCQZXHNDRNUOXKXYLLQWOUJNCSDBXEWYSOKJQYGMBTWOMIVGVJDXFDVHADUEKREHYT");
    msg.act_time = 19038U;
    msg.deact_time = 53365U;

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
    msg.setTimeStamp(0.7928168589474);
    msg.setSource(1802U);
    msg.setSourceEntity(60U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(200U);
    msg.id = 17U;
    msg.label.assign("AQLTCZBAZDKAMOYUGPURQIBOKWIQIJGVXRKSNUAVJRKGOUNHLXIQRGKADMKIZBFTDQXFAGRRXNLBIGBPHXEPRNLUJMJEOLUFCPSDPSFCWMAQDUDJOITPJNUGQTVPHLTSCSADCERMTQWYBYMTJYTKTBIYIHHZYFEELSVHWNZHBZPWYBKZOEXVZFQCXWEMXSNACMOOO");
    msg.component.assign("MGNVVJASETYTTGTVZZRTZNHUOKEXVZDIMXRSNPNIMBFAIOA");
    msg.act_time = 15939U;
    msg.deact_time = 50235U;

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
    msg.setTimeStamp(0.9857844014776901);
    msg.setSource(55145U);
    msg.setSourceEntity(118U);
    msg.setDestination(46786U);
    msg.setDestinationEntity(190U);
    msg.id = 31U;
    msg.label.assign("PQLQAJOZMFJLZAVYECUWTVQOFLKSNJYPWMGHFIHTKJIDTXRBDEDZBXKERFQXYNLRAOHNVGCKPZSRSDKLA");
    msg.component.assign("DIPNMWNSWBOYONSIPDQQWRFRFIPUYJXWDCNABFMFYGROKAHOLGNREZPUDFMPMSICIGNHPWEULCZCKHHFEXSUBLLTQIJUTBPOQVNFGQTLBAXYIFSRHUACAOYDMTARVNUZXZKCQOHXVUHIVFCEPBJVOESAXRWGT");
    msg.act_time = 15407U;
    msg.deact_time = 3945U;

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
    msg.setTimeStamp(0.3429261394478337);
    msg.setSource(52491U);
    msg.setSourceEntity(247U);
    msg.setDestination(26918U);
    msg.setDestinationEntity(19U);
    msg.id = 158U;

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
    msg.setTimeStamp(0.9441425917284754);
    msg.setSource(4516U);
    msg.setSourceEntity(177U);
    msg.setDestination(39062U);
    msg.setDestinationEntity(47U);
    msg.id = 8U;

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
    msg.setTimeStamp(0.320742128736597);
    msg.setSource(59576U);
    msg.setSourceEntity(122U);
    msg.setDestination(62105U);
    msg.setDestinationEntity(163U);
    msg.id = 190U;

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
    msg.setTimeStamp(0.03111976573202757);
    msg.setSource(61807U);
    msg.setSourceEntity(183U);
    msg.setDestination(46771U);
    msg.setDestinationEntity(148U);
    msg.op = 67U;
    msg.list.assign("UELOJRAILZPEZNIGZVPRKYXKMCULFWRGRAKXDBOOVSUMHMPUUNIRIKIBFOJFDSFINZLTLADOUNYAVXEHJBSMJDBPPONGMPQBKVAYEXRXHTWGOEAUYDAKHNWXCGWYVBFCVRASQPTZHSKYWLLTJRKQNZQWLESDAWPQHJALJPVCLCEV");

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
    msg.setTimeStamp(0.5061954947940067);
    msg.setSource(120U);
    msg.setSourceEntity(88U);
    msg.setDestination(39657U);
    msg.setDestinationEntity(212U);
    msg.op = 184U;
    msg.list.assign("VWVDGOEAGDZEHMAINBVXUSIHGHW");

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
    msg.setTimeStamp(0.009452235189039038);
    msg.setSource(49088U);
    msg.setSourceEntity(33U);
    msg.setDestination(3941U);
    msg.setDestinationEntity(31U);
    msg.op = 233U;
    msg.list.assign("RUFWBVKIDSRZDPOTJSGJFGARKZKJFKJUSHIURYTPNTYKLOWLBMAOCMSZNOJEGARLQDEPIXGBWVBZERFQUTOISEOGVVYUETTHTFIDFMMVZDQNQNTVMXHFALJZIRRXKGCYZKKEKSMAAEDPPUWYGTCYMWACSWDGOPAFLXNZRZHWYBIDJMCQPLLOJBPFLJQOHECPUOZVWLCIBHTUYEHNHCXGAM");

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
    msg.setTimeStamp(0.8324878390272277);
    msg.setSource(4606U);
    msg.setSourceEntity(168U);
    msg.setDestination(12982U);
    msg.setDestinationEntity(13U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.6427625909184513);
    msg.setSource(25861U);
    msg.setSourceEntity(117U);
    msg.setDestination(34385U);
    msg.setDestinationEntity(211U);
    msg.op = 91U;

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
    msg.setTimeStamp(0.4078754189493513);
    msg.setSource(39597U);
    msg.setSourceEntity(187U);
    msg.setDestination(3259U);
    msg.setDestinationEntity(218U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.6065842573808942);
    msg.setSource(19597U);
    msg.setSourceEntity(192U);
    msg.setDestination(25326U);
    msg.setDestinationEntity(231U);
    msg.value = 205U;

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
    msg.setTimeStamp(0.5865020345778517);
    msg.setSource(30732U);
    msg.setSourceEntity(65U);
    msg.setDestination(15266U);
    msg.setDestinationEntity(136U);
    msg.value = 22U;

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
    msg.setTimeStamp(0.2524450591505496);
    msg.setSource(13532U);
    msg.setSourceEntity(46U);
    msg.setDestination(5323U);
    msg.setDestinationEntity(96U);
    msg.value = 16U;

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
    msg.setTimeStamp(0.304793419791917);
    msg.setSource(48373U);
    msg.setSourceEntity(47U);
    msg.setDestination(20006U);
    msg.setDestinationEntity(64U);
    msg.consumer.assign("RJPWLMKILUURHWFHVCGIYQATDFJTSBJVXPEPCHGPAQWXGIVVKHEBIBJKPDCSNVYFBULGWYGWZSXRKSQPCJLJOWUMHMOKSPCJNEOFRQLZZYIATNSMZUCBK");
    msg.message_id = 1006U;

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
    msg.setTimeStamp(0.4917781318893407);
    msg.setSource(44363U);
    msg.setSourceEntity(51U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(86U);
    msg.consumer.assign("HUBJXIFYOCJEYKSGQZKZDSBRDDWHYEKRISTGHRIVBJMJVEMDYUVMBXQDGAWTLXGUTEMNZOAFDLJLUHVUYLNHBCSZWASCWYPGKCAPORNXQRPFZLXRLEODLYPIQVEVNMUZMAVJGSZZVCNNJITWSZAOGFCHQQNHPSDQWHTCJEIQVIHPWDMAFIFBWOASBKFXYKIJPHRKEOBEXGJM");
    msg.message_id = 20261U;

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
    msg.setTimeStamp(0.04037594714534487);
    msg.setSource(55672U);
    msg.setSourceEntity(179U);
    msg.setDestination(38038U);
    msg.setDestinationEntity(3U);
    msg.consumer.assign("GLFTLLMCATXDEUIGWJFMWD");
    msg.message_id = 16288U;

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
    msg.setTimeStamp(0.6433051940417672);
    msg.setSource(38713U);
    msg.setSourceEntity(2U);
    msg.setDestination(646U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.6463706294680301);
    msg.setSource(9232U);
    msg.setSourceEntity(213U);
    msg.setDestination(53292U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.6665635317537062);
    msg.setSource(13692U);
    msg.setSourceEntity(206U);
    msg.setDestination(38045U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.16564201565697456);
    msg.setSource(34205U);
    msg.setSourceEntity(66U);
    msg.setDestination(43760U);
    msg.setDestinationEntity(31U);
    msg.section.assign("NVDUYGDNEDXMXSWBAULATUTFAHTQRQBLKXMBSYHIBSFYGWLBYIMIIVMZUBZOACELVJGRUPHCRJVTHQPEEOUOSBCOZFILQUMKNOJJHWSKZNHYYUBWIFTPFXVPUKIMCRGQONLAMJLZSMAPWKGAWBQTPVRIJSSCZXZJQEFK");
    msg.param.assign("ZODHYROQALDCKUTSFEJAUBVPANTSCPRMOQLWWYYRIIZIMMOXJGETCDQIQBKDFGIAEHXQVCDZFKBQPXVYSFZZQLNDUFVIXOKJMSTHKTIHMQVKNRJRPZNJESYCLSECLJXDMBOZHOHMKLDNYULMOPIXCCZFCUBVFBITAADYNYKAXDFWFMVSHYWVUNFRTOVBTXBNGZLIWAGUWOEBQSUGRJE");
    msg.value.assign("TVJNKNANELFYMEUMPSUXUZFHZWOTFZPQQXRSGUMNRMPYFGDWGKIQWPZLXSCMDYJOOTBIORBPVKZAXEGKARCNXRFYGOUXQRWOVGACHWRDWCVIWEXZHFHAVDUWKVJWHQOJINXCNVTMKKSIQQHGFAEEBDAWBOCTFYMLCLDVNYLJBBGGLJMSKEJVHEBSDUZYKPEJLYPUARTLJCYCBSEZDBUJTGQTKPXDONXSCQZQSVHUIBY");

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
    msg.setTimeStamp(0.11651579983216542);
    msg.setSource(1058U);
    msg.setSourceEntity(81U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(108U);
    msg.section.assign("BXZGQWQJCSBHFOAUQBFVVGSYJZSPUHRHXLMAQQUOPEYSDUMDREOCHUUKJAUNGPBQTRECKGPWOZHA");
    msg.param.assign("MSRWHBSINAGHFNAEWWBDOTLUSETTYVBPVWRKGGWYICJRFZCNYBIFSOSDMBEZDYSIANPZERLGUIQMMXGOMQGXOQQUCYVRVCPGFTHVOHFCQRDBWXWXYAUKIV");
    msg.value.assign("QYOZEDZBPMUIFRLXSWIXCIKUMFYDLVZEIGLVNHNVWSORFOQNWTQDDGGQJPELCPJHUGWJKHCP");

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
    msg.setTimeStamp(0.5487969779622722);
    msg.setSource(12985U);
    msg.setSourceEntity(23U);
    msg.setDestination(13984U);
    msg.setDestinationEntity(208U);
    msg.section.assign("AGMKTRQLFHFUGBLOMCKBQA");
    msg.param.assign("PGHHUQIGDFJSKCOUISCZXCLZEBFFMFKMLAODQHZCYBXMVOBKIS");
    msg.value.assign("WGEDDHLAORFMFXRGXHRDBFWNSUTBJXJRXQDQUIFQQWLGAJWPFMWUJSDECMEFJEMOMDLTLGLWMPZCYRJWICHZP");

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
    msg.setTimeStamp(0.9271001043227203);
    msg.setSource(13634U);
    msg.setSourceEntity(49U);
    msg.setDestination(38005U);
    msg.setDestinationEntity(139U);
    msg.op = 246U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("RVBHEOYVOZHK");
    tmp_msg_0.param.assign("LQTDXLMDACUHJHWXIESYTGPXCUKTIPYXEDVUHBNJAUJGNBHVZRSK");
    tmp_msg_0.value.assign("DNSHXROLSXNDWUGPEZPBQGMRUAHXLJBRZFEAQMYOCDBNWROFZTTWXPTVHBEIFOKIVVRWGTYUOIARQIFGKSPPYXMORMFFIFOKHEBZVOKEMHWSEWGKJYJTGKLNHGACAYGRGADXTLFYQIUVDMEHPIZS");
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
    msg.setTimeStamp(0.740580770172941);
    msg.setSource(26623U);
    msg.setSourceEntity(86U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(105U);
    msg.op = 66U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("ARUCLQSJGPJUXCRXRHUFVJVXKAGFRBYKZBMXGHVAYDY");
    tmp_msg_0.param.assign("NFEJQXMAUDRQLAMXMFLXSDIKPMCVMANLALNCOHHGKOHJQDBVVHLZEQENUKEDWUZBZICYFUMBFMK");
    tmp_msg_0.value.assign("WQLPHMEDOKYSTJNMEEGWHUUDFNXNKFNUEJZWRXJVRIVVBFHCBJGAUAMAXAIEEZMLNBRITSGKECVPDJZQIRQGIOCEHQALSYPPCHPTUUQWYWIEJSOKRFZPZAHZNZYQDYTMCGGTFOWBYPBLVKGJKUOZXILWUNQCUODHCVTX");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.23819545642447337);
    msg.setSource(33184U);
    msg.setSourceEntity(209U);
    msg.setDestination(56745U);
    msg.setDestinationEntity(175U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.6759907902208236);
    msg.setSource(22581U);
    msg.setSourceEntity(71U);
    msg.setDestination(42696U);
    msg.setDestinationEntity(186U);
    msg.op = 229U;

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
    msg.setTimeStamp(0.5229039543933917);
    msg.setSource(64336U);
    msg.setSourceEntity(18U);
    msg.setDestination(10759U);
    msg.setDestinationEntity(108U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.5597168529365635);
    msg.setSource(5588U);
    msg.setSourceEntity(116U);
    msg.setDestination(27912U);
    msg.setDestinationEntity(140U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.3693501540210131);
    msg.setSource(45150U);
    msg.setSourceEntity(137U);
    msg.setDestination(20403U);
    msg.setDestinationEntity(168U);
    msg.total_steps = 108U;
    msg.step_number = 60U;
    msg.step.assign("PLVEJARXBBJRBFCVOTKVXAFKRXMKYLTGHWNSWREAPMZTIVQUJVBGOFZHDYRYUOJVN");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.6107815500427605);
    msg.setSource(40781U);
    msg.setSourceEntity(92U);
    msg.setDestination(15097U);
    msg.setDestinationEntity(141U);
    msg.total_steps = 128U;
    msg.step_number = 154U;
    msg.step.assign("OSCMLXZJCYKEKXYODQDPIAKRQVWVWQUFHSJGJJVHPLHBUILZXPZOCETSDCPOXLTOUGOSIVGEB");
    msg.flags = 224U;

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
    msg.setTimeStamp(0.45565574398888886);
    msg.setSource(24164U);
    msg.setSourceEntity(252U);
    msg.setDestination(6079U);
    msg.setDestinationEntity(80U);
    msg.total_steps = 101U;
    msg.step_number = 146U;
    msg.step.assign("LSQRTNJVRTHFSVCKDIMQTAZBAKWRXJPDMIHAFMADXQDYQPYZPFKIZXXJXQMOXQYUWFMTKNJKCUEVNBEGNNSJVTOICKULSELZXECUDZEVOLJPOZRSLUTOFMFDAXWRTYEOLNHKGHJHWBPMQFWBWBLBCRAJHDZOYBJRYGPGGHUYEQZQYKQSVVILNWOPNKVAWPNIUSTTAGZFEUZWSGDGVCNTBHUBMCISVYCJ");
    msg.flags = 54U;

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
    msg.setTimeStamp(0.2600143114911627);
    msg.setSource(7186U);
    msg.setSourceEntity(94U);
    msg.setDestination(26235U);
    msg.setDestinationEntity(181U);
    msg.state = 114U;
    msg.error.assign("KPFSWKVTABFIHEYXSCUNDWHRBWYKGFWVIKRZIBCLTAUJEYDUZVLGIWGBLNLLMTKPGRUSZBQAWIAKQMZFACORE");

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
    msg.setTimeStamp(0.32813020124040304);
    msg.setSource(52200U);
    msg.setSourceEntity(219U);
    msg.setDestination(49570U);
    msg.setDestinationEntity(23U);
    msg.state = 145U;
    msg.error.assign("YTOJXDJUXMCYRDVPFGCGQXUIASNEFHRGQLVWGNJGYUVKBAEHWZZRJJVRZGKILCVKWFAXLXCKEDTKVPHD");

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
    msg.setTimeStamp(0.33664379241108944);
    msg.setSource(7427U);
    msg.setSourceEntity(16U);
    msg.setDestination(45158U);
    msg.setDestinationEntity(205U);
    msg.state = 177U;
    msg.error.assign("OPGBEYFTFRNGMIDOGHYYCXFMLEZXBYMPKJIQBJFVYRRLQZCWUTWKVGPDTNJCSIRDBFTPEDHMCMTTNQXIIVXQPGDASHDUHVBSL");

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
    msg.setTimeStamp(0.7779245020456651);
    msg.setSource(39239U);
    msg.setSourceEntity(24U);
    msg.setDestination(49131U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.48166077524494244);
    msg.setSource(14285U);
    msg.setSourceEntity(101U);
    msg.setDestination(21349U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.28445605582977873);
    msg.setSource(48284U);
    msg.setSourceEntity(104U);
    msg.setDestination(41327U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.22584143657648115);
    msg.setSource(7291U);
    msg.setSourceEntity(62U);
    msg.setDestination(3625U);
    msg.setDestinationEntity(177U);
    msg.op = 158U;
    msg.speed_min = 0.7742501330408761;
    msg.speed_max = 0.388601656286362;
    msg.long_accel = 0.9496820255419886;
    msg.alt_max_msl = 0.30533907811915584;
    msg.dive_fraction_max = 0.4722818409695121;
    msg.climb_fraction_max = 0.36175096696790754;
    msg.bank_max = 0.8386236689787268;
    msg.p_max = 0.9023879418528644;
    msg.pitch_min = 0.005359959250307078;
    msg.pitch_max = 0.9641080761138038;
    msg.q_max = 0.04951450459426321;
    msg.g_min = 0.7018137355951478;
    msg.g_max = 0.34181790207813323;
    msg.g_lat_max = 0.27612258932226563;
    msg.rpm_min = 0.8958231747996795;
    msg.rpm_max = 0.992271946024791;
    msg.rpm_rate_max = 0.3342786495977732;

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
    msg.setTimeStamp(0.12392023550297238);
    msg.setSource(57848U);
    msg.setSourceEntity(37U);
    msg.setDestination(15366U);
    msg.setDestinationEntity(140U);
    msg.op = 54U;
    msg.speed_min = 0.9764488210731803;
    msg.speed_max = 0.17029347256392957;
    msg.long_accel = 0.8535521412569959;
    msg.alt_max_msl = 0.43154148044534824;
    msg.dive_fraction_max = 0.6677763703590641;
    msg.climb_fraction_max = 0.6254600561273408;
    msg.bank_max = 0.7077989295105939;
    msg.p_max = 0.22210741238611764;
    msg.pitch_min = 0.9257834563161284;
    msg.pitch_max = 0.08190754368285502;
    msg.q_max = 0.153737839682902;
    msg.g_min = 0.11120607607666966;
    msg.g_max = 0.006490405661477627;
    msg.g_lat_max = 0.1785288060023681;
    msg.rpm_min = 0.09506446401093405;
    msg.rpm_max = 0.5325737010841535;
    msg.rpm_rate_max = 0.6868787654690652;

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
    msg.setTimeStamp(0.23056827168227634);
    msg.setSource(9332U);
    msg.setSourceEntity(10U);
    msg.setDestination(60161U);
    msg.setDestinationEntity(203U);
    msg.op = 91U;
    msg.speed_min = 0.43936010554652116;
    msg.speed_max = 0.6652716679129269;
    msg.long_accel = 0.5017487788647365;
    msg.alt_max_msl = 0.43204053230998063;
    msg.dive_fraction_max = 0.8317321773563152;
    msg.climb_fraction_max = 0.8602404607075682;
    msg.bank_max = 0.5223916769674494;
    msg.p_max = 0.4500345923607063;
    msg.pitch_min = 0.16934696982684605;
    msg.pitch_max = 0.9360306685646078;
    msg.q_max = 0.17650056352483556;
    msg.g_min = 0.4204015353358461;
    msg.g_max = 0.9902305276925637;
    msg.g_lat_max = 0.5793135408880218;
    msg.rpm_min = 0.7413640517272189;
    msg.rpm_max = 0.19433234597784854;
    msg.rpm_rate_max = 0.9504549691972087;

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
    msg.setTimeStamp(0.9541515745911854);
    msg.setSource(52778U);
    msg.setSourceEntity(207U);
    msg.setDestination(60667U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.07293768402870904);
    msg.setSource(52949U);
    msg.setSourceEntity(223U);
    msg.setDestination(39575U);
    msg.setDestinationEntity(162U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 11064U;
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
    msg.setTimeStamp(0.6552008951590724);
    msg.setSource(40627U);
    msg.setSourceEntity(17U);
    msg.setDestination(47691U);
    msg.setDestinationEntity(215U);
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 53U;
    tmp_msg_0.list.assign("NDTMEBJEEBIKCMUL");
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
    msg.setTimeStamp(0.5247537277227067);
    msg.setSource(12334U);
    msg.setSourceEntity(31U);
    msg.setDestination(6690U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.9695258789246348;
    msg.lon = 0.5761581768898761;
    msg.height = 0.49260580027854584;
    msg.x = 0.011380163468759807;
    msg.y = 0.3964070865259265;
    msg.z = 0.41720026173596225;
    msg.phi = 0.740589267032003;
    msg.theta = 0.1742010434052118;
    msg.psi = 0.9586754703292996;
    msg.u = 0.2230013501810516;
    msg.v = 0.6623017138851535;
    msg.w = 0.041888586553317175;
    msg.p = 0.8605008359674958;
    msg.q = 0.1945199983136483;
    msg.r = 0.5614929178493636;
    msg.svx = 0.6609787616243442;
    msg.svy = 0.7573434500230096;
    msg.svz = 0.9127376461418137;

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
    msg.setTimeStamp(0.6786553807029887);
    msg.setSource(16580U);
    msg.setSourceEntity(11U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.4827659861197303;
    msg.lon = 0.8891951866652275;
    msg.height = 0.33945488661861445;
    msg.x = 0.5050858852829857;
    msg.y = 0.37547207455111153;
    msg.z = 0.09878299466904439;
    msg.phi = 0.24073850250351903;
    msg.theta = 0.5983418613678242;
    msg.psi = 0.19793999407547258;
    msg.u = 0.8974753019271818;
    msg.v = 0.13936726782666775;
    msg.w = 0.4711816630276744;
    msg.p = 0.014742166846990368;
    msg.q = 0.5534406152288002;
    msg.r = 0.9226054590786574;
    msg.svx = 0.30126515963211975;
    msg.svy = 0.9229816846876681;
    msg.svz = 0.04275479134560456;

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
    msg.setTimeStamp(0.8551458658547418);
    msg.setSource(16654U);
    msg.setSourceEntity(128U);
    msg.setDestination(7545U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.6242781913215428;
    msg.lon = 0.7964500994701759;
    msg.height = 0.15938267496258018;
    msg.x = 0.025657231811665793;
    msg.y = 0.44737250224233316;
    msg.z = 0.9360522216408653;
    msg.phi = 0.5399314394467846;
    msg.theta = 0.14341194427423876;
    msg.psi = 0.6587305149591567;
    msg.u = 0.10728780377979275;
    msg.v = 0.4484919731225232;
    msg.w = 0.1314510819065885;
    msg.p = 0.32727845121465127;
    msg.q = 0.250638750395616;
    msg.r = 0.48445446286745886;
    msg.svx = 0.02777786737168708;
    msg.svy = 0.4998825849334678;
    msg.svz = 0.8680043972232212;

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
    msg.setTimeStamp(0.8930675216126779);
    msg.setSource(1785U);
    msg.setSourceEntity(20U);
    msg.setDestination(23624U);
    msg.setDestinationEntity(71U);
    msg.op = 215U;
    msg.entities.assign("XLUENRCCTRAFWJXKDXTHGYOEFFFKYHPRWCUDJOHFCIHTMVDGMOMCZKZSXGZTDGRUOKCFPTAJNTINECUKCORQYHIJVQEQMNZEMPPFWDKPWOWQXDHBBYLPKFWYWCZNETONJJIVHQUNSBMZVEKNRDYQIPBLFSJLIVZXAEJUNKPZAVGLQKTWABGXIIXBDMBOSQQSUQVAGAVRYBPSLSBBASGLYPMGRURYZNCVIEXMLUGDUYWAHAHSREZSTIDJMV");

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
    msg.setTimeStamp(0.3903457236123228);
    msg.setSource(6643U);
    msg.setSourceEntity(171U);
    msg.setDestination(22812U);
    msg.setDestinationEntity(241U);
    msg.op = 3U;
    msg.entities.assign("XMRHMYGCADCPLWGQOWMSXCFZBVXRASQCZWNTZJDAJARWMRUDCEETSBFMIXNDLEZDZSODUOKPYTQBHELSDHSUIAPKHUAXNWMPVIYKTBVVBJFNUHVLE");

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
    msg.setTimeStamp(0.5785793070535716);
    msg.setSource(25433U);
    msg.setSourceEntity(102U);
    msg.setDestination(6092U);
    msg.setDestinationEntity(220U);
    msg.op = 186U;
    msg.entities.assign("WSBODJQABGPSKDKRVZVAFQQRBENBDN");

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
    msg.setTimeStamp(0.549309172778935);
    msg.setSource(33703U);
    msg.setSourceEntity(95U);
    msg.setDestination(50042U);
    msg.setDestinationEntity(9U);
    msg.type = 92U;
    msg.speed = 6048U;
    const char tmp_msg_0[] = {-100, -42, 80, -50, 56, 45, -128, 111, -118, -97};
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
    msg.setTimeStamp(0.03919381044657899);
    msg.setSource(18525U);
    msg.setSourceEntity(219U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(23U);
    msg.type = 156U;
    msg.speed = 46165U;
    const char tmp_msg_0[] = {75, 76, -75, -1, -20, 76, -36, -13, -91, 13, 114, 99, 118, -90, -45, -57, 6, 115, -107, -81, 110, 116, 9, -78, 83, 89, 85, -30, 19, -108, 19, -17, -59, -98, -41, -72, -104, -24, 107, 118, 24, -89, -27, -1, -35, 105, 8, -8, 33, 70, -15, 89, -119, 3, -71, -95, 45, 42, 83, 90, 35, 23, -13, -127, -92, 18, -27, -123, 74, 38, -95, 126, 22, 70, 49, 45, 119, 35, -77, -60, 110, 52, -109, -66, -44, 88, -119, 59, -91, -46, -12, 0, 101, -52, 102, 22, 97, -117, 73, 116, 104, -72, 51, 37, -75, 49, 55, 4, -27, 0, -115, 13, 54, -9, 126, 0, -46, -55, 84, -35, 27, -93, -19, 84, -44, -37, 43, -29, 2, -93, -82, 46, 34, 85, -128, 108, 81, -15, 45, -110, 88, -28, -57, 68, -104, 5, -6, 5, 28, -110};
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
    msg.setTimeStamp(0.7378956090344857);
    msg.setSource(1708U);
    msg.setSourceEntity(166U);
    msg.setDestination(3129U);
    msg.setDestinationEntity(225U);
    msg.type = 88U;
    msg.speed = 27726U;
    const char tmp_msg_0[] = {-5, -55, 84, -36, -38, 17, 47, -72, 124, 124, 87, -20, -98, -51, -100, 15, 20, 104, -66, 36, 48, -65, 63, 110, -42, -55, -17, 69, 64, -124, 22, -81, -61, -83, 106, 15, 5, -6, 10, -84, 92, 72, -53, 74, 55, 78, 56, 59, 63, -10, -18, -74, 41, -31, 16, -120, -26, -79, 75, -21, -121, -28, 22, -61, 75, 106, -18, 95, 74, 93, -57, 15, 92, -117, 49, 101, -97, 124, 41, 41, -15, 74, -4, 24, 30, -111, -21, -63, -81, -110, -26, -41, -62, -59, -44, 79, 66, 9, -22, 67, 94, 9, -90, -116, 106, -99, -81, -60, 120, -84, 17, -45, -5, 53, -90, -19, 9, -68, 125, -107, -53, -50, -112, 47, -52, 82, 113, -96, -105, -17, 49, 56, -111, 4, 73, 89, 107, 66, 52, -90, 81, 67, 93, -21, -57, -37, -41, -15, 99, 91, 30, 5, 35, 29, 4, 25, 81, 57, -19, 118, -28, -56, 118, -119, 33, 126, 7, 8, 72, 108, 79, 102, 70, -59, 29, 29, 49, -86, -60, 86, 29, 24, -74, 116, 39, 117, -50, -7, 98, 68, 66, -120, -8, -51, -52, -120, 108, -114, 67, -102, -18, -40, 79, -52, -99, -7, -122, 33};
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
    msg.setTimeStamp(0.9506344994105512);
    msg.setSource(12873U);
    msg.setSourceEntity(230U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(139U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.6349694498304761;
    msg.bank2p_pgain = 0.9008420722336059;

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
    msg.setTimeStamp(0.3336284450671887);
    msg.setSource(45954U);
    msg.setSourceEntity(226U);
    msg.setDestination(31031U);
    msg.setDestinationEntity(161U);
    msg.op = 134U;
    msg.tas2acc_pgain = 0.9526917129124789;
    msg.bank2p_pgain = 0.7759646590908167;

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
    msg.setTimeStamp(0.27460138433709735);
    msg.setSource(33067U);
    msg.setSourceEntity(171U);
    msg.setDestination(59464U);
    msg.setDestinationEntity(209U);
    msg.op = 154U;
    msg.tas2acc_pgain = 0.36568014037217367;
    msg.bank2p_pgain = 0.20294866524969313;

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
    msg.setTimeStamp(0.6263088504552495);
    msg.setSource(28114U);
    msg.setSourceEntity(185U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(251U);
    msg.available = 617298894U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.6483744611594321);
    msg.setSource(16616U);
    msg.setSourceEntity(167U);
    msg.setDestination(55976U);
    msg.setDestinationEntity(248U);
    msg.available = 1946055678U;
    msg.value = 69U;

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
    msg.setTimeStamp(0.8942499470728391);
    msg.setSource(37102U);
    msg.setSourceEntity(112U);
    msg.setDestination(60277U);
    msg.setDestinationEntity(181U);
    msg.available = 1933385589U;
    msg.value = 64U;

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
    msg.setTimeStamp(0.790851244550978);
    msg.setSource(50539U);
    msg.setSourceEntity(240U);
    msg.setDestination(33456U);
    msg.setDestinationEntity(204U);
    msg.op = 109U;
    msg.snapshot.assign("JMMBZKKQDBQPCXMAETWOGOTQSGEDPGFYUMERCPGKTDZUISVVBROZILSBJMEWASDXLDVHLEL");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 103U;
    tmp_msg_0.clock = 0.9950910390549752;
    tmp_msg_0.tz = 49;
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
    msg.setTimeStamp(0.21048123306571154);
    msg.setSource(57303U);
    msg.setSourceEntity(195U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(24U);
    msg.op = 240U;
    msg.snapshot.assign("AWDXBIUKOFXMLRXNUHOGCUJM");
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 108U;
    tmp_msg_0.zoom = 214U;
    tmp_msg_0.action = 57U;
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
    msg.setTimeStamp(0.5623141370343459);
    msg.setSource(48454U);
    msg.setSourceEntity(156U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(43U);
    msg.op = 29U;
    msg.snapshot.assign("LEMZEWMECNYMBHVWNYAQPT");
    IMC::AcousticRange tmp_msg_0;
    tmp_msg_0.address = 90U;
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
    msg.setTimeStamp(0.0889239506196271);
    msg.setSource(42756U);
    msg.setSourceEntity(199U);
    msg.setDestination(32225U);
    msg.setDestinationEntity(70U);
    msg.op = 246U;
    msg.name.assign("WAMSFKSHECFYGGXKRHQWYEMMKOZXMWONHNOJLTFWBJQODBTIKNVVKRUIVBVJVLUGGCOIWSHTAVOEQRUAKXQSBTAFDFWYPYCUAFLHUGFZABEVACLRXAQDMPTNKESUESZNHOSZOCIWHIQQMYCIDZPITPBVYZRPDDPCWCBJCEEHRJJXQTIKJRSKARD");

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
    msg.setTimeStamp(0.2940228322155106);
    msg.setSource(5807U);
    msg.setSourceEntity(140U);
    msg.setDestination(14789U);
    msg.setDestinationEntity(101U);
    msg.op = 241U;
    msg.name.assign("BAFCPUAIFVIDDBBVBLFUKQLOGHAMHUZGAMMRCKPICFNXRZOIQNRWSUUMHVRYNOGPNNNCZCTYCCVKMWSWEZVVOYMNBTRPQEUQSGUUZAWYJJWMQHAHKDKJSWPFCXLEJMKRJZEVBQQGIBQILPWXHIVP");

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
    msg.setTimeStamp(0.9977310371999938);
    msg.setSource(44518U);
    msg.setSourceEntity(178U);
    msg.setDestination(60100U);
    msg.setDestinationEntity(36U);
    msg.op = 169U;
    msg.name.assign("FLXZHCGBNMQPMBRYSURGFNNCHK");

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
    msg.setTimeStamp(0.11366584336619856);
    msg.setSource(29501U);
    msg.setSourceEntity(175U);
    msg.setDestination(46925U);
    msg.setDestinationEntity(237U);
    msg.type = 132U;
    msg.htime = 0.6050208166807175;
    msg.context.assign("PVLZNVMRFHVRNKLCQXUNHOSWKJXXVKAHVFIBXHPEOPJGLUTOQSFANIYFKZZHQTETMFVLSEUBCXRYDZSZRPQHKJJCLQYGJMXLAELYEELYYSYRIBJJZBDUMMGANUWCOSMPKCIWEJXXOXPWQCBWPAEFEBDGWTCDKRRDIJUYMZMWV");
    msg.text.assign("RZZIJEAUTBQELPVHTHLDAESDNCVYOIKHIWJPOPZKMPPDDFTXEAZNNCSQHRYOLYVGJQVGVIGXPVUXSKW");

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
    msg.setTimeStamp(0.13881019447093257);
    msg.setSource(22198U);
    msg.setSourceEntity(6U);
    msg.setDestination(29494U);
    msg.setDestinationEntity(58U);
    msg.type = 99U;
    msg.htime = 0.3791540601866564;
    msg.context.assign("JJDUFZLDJLCILJJCBOX");
    msg.text.assign("LFPCIFMWMJUDUMRSDFSHGBCFLOAUQTVCDQWERWABNLFTXECWAMTMHHVNEQTNCGSFVCJICYTUFBKFAWODOGYZWZBEDYDQNJIXSWKESQWFXIIXKIHKZNSUGGIERTUQAKROLPYPSKUCXTOOERPSCNAXKPAZIZOEBLNHG");

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
    msg.setTimeStamp(0.392527464153252);
    msg.setSource(22904U);
    msg.setSourceEntity(136U);
    msg.setDestination(345U);
    msg.setDestinationEntity(55U);
    msg.type = 126U;
    msg.htime = 0.7671629983922948;
    msg.context.assign("TOXOPXPCEWBESUCHFLORDD");
    msg.text.assign("EMFSFEMUCDUUHBLIIQNWXPUBWOTNWPJPGHJCRMKTWQFEPSFUGIVCPNWQBTKCAVHGOZRQOXOARQWSTHNSZATOBFYKFDBJHXHSGHKGKJYEEHQKLTLJARGQTRYSONGMDDKLIVBXUXMSVLFJDZQXDYMNTIVZMLNOZXJYFARXPNXWCZVIFDCZTDJJUPLCEMRIKPYVIOVEJBEEAPSWPYZLSOYLIIFSBZANOCQBCZBQLDURKXRRAWEHMUKTY");

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
    msg.setTimeStamp(0.9750225513546237);
    msg.setSource(10339U);
    msg.setSourceEntity(125U);
    msg.setDestination(27771U);
    msg.setDestinationEntity(215U);
    msg.command = 31U;
    msg.htime = 0.022789226853474287;

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
    msg.setTimeStamp(0.8559907871092037);
    msg.setSource(17635U);
    msg.setSourceEntity(78U);
    msg.setDestination(2785U);
    msg.setDestinationEntity(39U);
    msg.command = 34U;
    msg.htime = 0.08591046605244324;

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
    msg.setTimeStamp(0.6441918268202049);
    msg.setSource(29284U);
    msg.setSourceEntity(89U);
    msg.setDestination(12784U);
    msg.setDestinationEntity(177U);
    msg.command = 31U;
    msg.htime = 0.6654100404705496;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 117U;
    tmp_msg_0.htime = 0.7006086947739282;
    tmp_msg_0.context.assign("BFSXOOMPLOUORORZADDHSYBHETJMWCOVVWBGVMLFVGMHYSBKZULGIPZZXFIEAIJFBPLTFQLIHGIRMDUVEYHNRXRFQCUKHXHIGBXTYCBPMIVI");
    tmp_msg_0.text.assign("BLPPBOVINZGAFWDVBULPOOMJSTORIXCIGLDHVPKOTQVNDFUVZDGAJHXESVHPSCSYBFMBEWWPTOWZYMHTLSUUGWHXCAYKA");
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
    msg.setTimeStamp(0.14251870699921065);
    msg.setSource(44311U);
    msg.setSourceEntity(50U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(246U);
    msg.op = 141U;
    msg.file.assign("GIWZXNBWAMLVRTPIHOTLLUTCHVIIKVGFVGQCROOEQAPISPYRTJKXLSYPTFJJBQXZZYTEYEBC");

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
    msg.setTimeStamp(0.4716397972657287);
    msg.setSource(23613U);
    msg.setSourceEntity(131U);
    msg.setDestination(22590U);
    msg.setDestinationEntity(79U);
    msg.op = 124U;
    msg.file.assign("KCDUEWHVQQRIFDBVALADKUURVDNUAJOSGAZFXRBJXYSSVPGNHPTGXWMHQDWYOGCRPWUEMZMYUBDTDLNQPAKBQEISLIAEEQSXKGRKHYBOXWMANIKRRKAPJNHMNJUVTOFJRPZCJQNIKVMGTLIHVBNZGPYXBCQDPOEZSXKGCPOOTZWULFFPJGRNXMATNZLLFWWXTZJHHVOBFLWQOCIVGJZCKEMZYVAFSYYJLRSFBUDSEXTQUDLTFB");

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
    msg.setTimeStamp(0.04349593998626977);
    msg.setSource(22959U);
    msg.setSourceEntity(206U);
    msg.setDestination(39626U);
    msg.setDestinationEntity(246U);
    msg.op = 84U;
    msg.file.assign("SRKHETNYDSGMNFWNFBTWGGYMBJYVAEDSVUOVDATZSAICRQZWOOSEMFWRWPMACMBIOPYKYRVRCPRSMEPZXUEIHSOVSCINNQJYUEZVXXJHRGVBFNJDTPETKUZCGQCMAPDHWJQBINAPQAYKLTPEUJNUHDLFNHUKDFXMTIHHZFKDIBVAZJEZBWB");

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
    msg.setTimeStamp(0.46371470017707306);
    msg.setSource(38249U);
    msg.setSourceEntity(249U);
    msg.setDestination(64467U);
    msg.setDestinationEntity(246U);
    msg.op = 237U;
    msg.clock = 0.9898027284888083;
    msg.tz = -17;

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
    msg.setTimeStamp(0.039120575569286165);
    msg.setSource(43660U);
    msg.setSourceEntity(44U);
    msg.setDestination(30657U);
    msg.setDestinationEntity(6U);
    msg.op = 201U;
    msg.clock = 0.5224895199160297;
    msg.tz = -2;

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
    msg.setTimeStamp(0.3590660536805933);
    msg.setSource(49189U);
    msg.setSourceEntity(248U);
    msg.setDestination(25753U);
    msg.setDestinationEntity(194U);
    msg.op = 219U;
    msg.clock = 0.2827099220648073;
    msg.tz = 46;

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
    msg.setTimeStamp(0.037390002541693446);
    msg.setSource(19065U);
    msg.setSourceEntity(156U);
    msg.setDestination(24305U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.4286413249868072);
    msg.setSource(38549U);
    msg.setSourceEntity(214U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.602367443138455);
    msg.setSource(42168U);
    msg.setSourceEntity(221U);
    msg.setDestination(45361U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.8947319259231938);
    msg.setSource(39900U);
    msg.setSourceEntity(62U);
    msg.setDestination(40669U);
    msg.setDestinationEntity(150U);
    msg.sys_name.assign("TGRQXQEQKBBJHMY");
    msg.sys_type = 247U;
    msg.owner = 31215U;
    msg.lat = 0.9446390657909881;
    msg.lon = 0.17525013671006284;
    msg.height = 0.894871523044603;
    msg.services.assign("GUIQRSKJBRMPJLKYXVAGFVQAKWLYHGJWOIIDXQSEZUQTZSPKLQBAHNEQNYNTUWPFBBIHHSITVOMEVLWVLFYQWPMTRUKMFIWNZLLPEAFAMTODEJCFNZEROTYZKRMOJTFDGMXUURVCDGIBFZOFRUCQHJHQDXXPXCRCDEKYYODSMJKIMFLWABIJMCXEAHPLBRRGGXXYASGASBYIOWOVHZNWHW");

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
    msg.setTimeStamp(0.18276261324171228);
    msg.setSource(28379U);
    msg.setSourceEntity(136U);
    msg.setDestination(19120U);
    msg.setDestinationEntity(154U);
    msg.sys_name.assign("FHKIECMZFVYEKYBBCMXREWIAXAQOAHIQPHMWSAROAGXYYUDHTESBZWQQGNPJLIFSCMSCZEDZWGDVKKZMYRNZLYUXRURKDILUXAJTFBLMQCQDNCOVQYIPWOJOWMGTUUNHNTWBWXSJFKRFMZBKGDYRHICFDVEJJKUGOPTWJSGVSQZLEKPJAY");
    msg.sys_type = 12U;
    msg.owner = 51111U;
    msg.lat = 0.6282926032008582;
    msg.lon = 0.7315401526634993;
    msg.height = 0.2901709762177951;
    msg.services.assign("WCAKYUOHXTJPDEMUDZDGGRNSMGLBTXMGNDFJPXWXZFOAFGUZIVUDFWESDLKORIXLRWQABRXROYDPRNHVIYHTXPHLSCYCIJWMAPXUNNVZVTBRUNFLYACQBBMRWBPAQZVPMSQVQBGEVMPIMHSMELHJZZIJKOZOQOIMIFYJTTHBEPKANTEHECHJ");

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
    msg.setTimeStamp(0.6625008969298073);
    msg.setSource(40173U);
    msg.setSourceEntity(161U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(208U);
    msg.sys_name.assign("ZDHFCUKFNEOQBSEBOGVWWAUOAJIBWFWUAGLHSQSCYLMYVQZNLXXYPWIUHBAJQRFKGVEOXTHGDJBBGQXNVYJLCLUWRTITPRDSHUSVADYXCMMBUJ");
    msg.sys_type = 216U;
    msg.owner = 63472U;
    msg.lat = 0.8610952552930854;
    msg.lon = 0.5394549940672282;
    msg.height = 0.5956664821636425;
    msg.services.assign("FFYZYUIFHDVOYBZLNRRXWVDNVMDEYFZMQXCEOGAGAEWJNMLWDBKQOSHFMPOKQLUHBBVQJNVPXAXZUXBSPGNJOPQIONCIIDSBSXCXPWFSHAARSVQLIWYBUESTDTTMOJKSATRQIKWYYQKHAYTWPZGMBEHF");

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
    msg.setTimeStamp(0.8165302878384891);
    msg.setSource(50961U);
    msg.setSourceEntity(192U);
    msg.setDestination(51370U);
    msg.setDestinationEntity(109U);
    msg.service.assign("UWPZGOYFBDQFZEY");
    msg.service_type = 112U;

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
    msg.setTimeStamp(0.13743983206291466);
    msg.setSource(11475U);
    msg.setSourceEntity(150U);
    msg.setDestination(26334U);
    msg.setDestinationEntity(191U);
    msg.service.assign("XXBQTGWJZJGFYAAYESHLRCXCZTYCPGBISYOMYGEPHWLYMMBHKBFBVVLNDMYKNGMIFPIQSMSDTQGHRAXOHGLGIHEQJNJAKPLWXPVTDRQXFKWHOQY");
    msg.service_type = 101U;

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
    msg.setTimeStamp(0.9649899239882616);
    msg.setSource(56230U);
    msg.setSourceEntity(39U);
    msg.setDestination(8199U);
    msg.setDestinationEntity(15U);
    msg.service.assign("NEISDUHPDVGNKAYOAEBRKBUNTKVWHDZEYMFIMFNPFXDJXBOIYVERWMTXLRUHTZFSSYTQAUIYOZMUJWKOPRIEBQPLELEOMYXHAQTKFWHCGKDRVWRGYFRNCRPIHZNWZXIKHNQIQVKWAUCFPGJJLPAASVOZGUMOJRLSWCCFFSTZAZEVDXYLGRKSBBUTBQJCSJYLEDDGLTCHBLOQOCWMHJCXVPONXSAGHDBXVPIGDPKTAUJQFITCLEQ");
    msg.service_type = 146U;

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
    msg.setTimeStamp(0.8792256287673209);
    msg.setSource(56922U);
    msg.setSourceEntity(61U);
    msg.setDestination(15324U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6768448908802327;

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
    msg.setTimeStamp(0.9614379620686789);
    msg.setSource(31880U);
    msg.setSourceEntity(28U);
    msg.setDestination(62166U);
    msg.setDestinationEntity(23U);
    msg.value = 0.04778084237848057;

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
    msg.setTimeStamp(0.19576153981355027);
    msg.setSource(51333U);
    msg.setSourceEntity(205U);
    msg.setDestination(33921U);
    msg.setDestinationEntity(210U);
    msg.value = 0.6712508890476226;

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
    msg.setTimeStamp(0.2653588270408864);
    msg.setSource(29934U);
    msg.setSourceEntity(68U);
    msg.setDestination(57970U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5657890242226731;

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
    msg.setTimeStamp(0.200809381890097);
    msg.setSource(42582U);
    msg.setSourceEntity(235U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3807733531934835;

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
    msg.setTimeStamp(0.8642524645070419);
    msg.setSource(41214U);
    msg.setSourceEntity(90U);
    msg.setDestination(63989U);
    msg.setDestinationEntity(168U);
    msg.value = 0.1967831732738088;

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
    msg.setTimeStamp(0.6173377811815488);
    msg.setSource(19709U);
    msg.setSourceEntity(74U);
    msg.setDestination(4888U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9010712102313106;

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
    msg.setTimeStamp(0.3790595831239194);
    msg.setSource(22011U);
    msg.setSourceEntity(132U);
    msg.setDestination(28169U);
    msg.setDestinationEntity(51U);
    msg.value = 0.11264108797803274;

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
    msg.setTimeStamp(0.9472971946604436);
    msg.setSource(43808U);
    msg.setSourceEntity(234U);
    msg.setDestination(20202U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8511559425810127;

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
    msg.setTimeStamp(0.21561400917991191);
    msg.setSource(6486U);
    msg.setSourceEntity(236U);
    msg.setDestination(59385U);
    msg.setDestinationEntity(247U);
    msg.number.assign("VRJAXOXKHULH");
    msg.timeout = 56499U;
    msg.contents.assign("BQJVYLLHHMCWEEKDWTCLIDQZKSFDNWQSWNNOZMNEPBUPBEAVCYCEIQUUQTDTMXHCOJQHXARMTNFVDKUXJCGAPVQMDUOJRMWZRQIJVUXYXVLZVCIKSBXJLBRUBFLWZHATRLOOPHOJIRIAPREBYGVGZW");

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
    msg.setTimeStamp(0.13510437870780256);
    msg.setSource(6790U);
    msg.setSourceEntity(249U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(105U);
    msg.number.assign("GFISOWHHCWJQHX");
    msg.timeout = 14105U;
    msg.contents.assign("UOOEIALMWHMJNUFBKEXRXZBHIVDOQXHK");

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
    msg.setTimeStamp(0.29559692644141267);
    msg.setSource(39017U);
    msg.setSourceEntity(40U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(188U);
    msg.number.assign("TUFVPWYUSLGZRFWBMIBJVIIZBAHMSECXWFXDJIFIQRLRQUHCKACEYATTRAMYHNVXMOLXWOQCPLOKIIVJQXSWZQIQPISRXTJNDNDDQKYZDYTLUHZOBVMFBZPOBXFJTNCEHSFJPGFYLGTKASEREMLKHQDRZKKJANDTRLGTPUGWHVHCMVCHEPSRZUBGUPUZLWVDYEULRBBQTNXHJOXCOXFNADUJWZK");
    msg.timeout = 23411U;
    msg.contents.assign("EYHQXXYTAIAXTMXFXYOTDDLHJNNHWFROBCDVSPGVHKMWOPSLQQXUVTNNMCH");

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
    msg.setTimeStamp(0.929538543125004);
    msg.setSource(58385U);
    msg.setSourceEntity(50U);
    msg.setDestination(2442U);
    msg.setDestinationEntity(128U);
    msg.seq = 3118658010U;
    msg.destination.assign("VHOHMMAVQQMCMSPPWWTIMTXYEUPBNREXZICJCRAHNNYKJFDHWJNLKPGLELMKSTZQIZVZQGWWOKNAUBZEJYDLIJFEHXBLCXRCCYZOHSGTDAOQFDDLWDAGFSJXBUMYBIKBYJPPOHREIRPVWRSBOUVVEDZWHWMTFFLYUMGJ");
    msg.timeout = 55811U;
    const char tmp_msg_0[] = {-87, 76, -74, -118, -97, -120, 71, 120, -30, -91, -35, -2, -54, -87, -31, 34, 58, 71, 78, 106, 45, -68, -87, -4, -72, -35, 47, 80, -16, -79, 96, 4, -64, -15, 5, -2, 107, 117, -54, 77, -57, 75, -43, 29, -74, 32, 63, -17, 86, 25, -3, 122, 57, 11, 115, -88, 79, -72, -18, 85, -101, -111, -19, 56, 56, -124, -99, 3, -82, 66, 92, -117, -118, -114, -91, -30, 74, -99, -100, -57, -89, 81, 55, 89, -72, -77, 97, -101, -38, 74, -20, 99, 113, 101, 64, 87, -4, 107, -96, -65, 111, 62, -122, 42, -43, 65, 37, 80, 100, -120, -81, 123, 100, 124, 108, -5, -1, 16, 119, -84, 104, 45, -122, -127, 104, -60, -62, -71, 40, -99, 18, 28, 27, 120, 55, -113, -32, 31, 49, 111, -119, -59, -26, 82, 100, -73, 118, 125, 88, -46, 97, -110, 53, 36, -100, 18, 39, -14, 17, -75, -93, -36, -27, 12, -95, 66, -46, 16, 63, -112, -2, 69, 17, -29, 83, 57, 81, -59, -2, -62, 89, 58, 85, -76, -111, 72, 42, 62, -63};
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
    msg.setTimeStamp(0.7557194301530432);
    msg.setSource(48438U);
    msg.setSourceEntity(35U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(29U);
    msg.seq = 4140318560U;
    msg.destination.assign("DAVSOWVLTKUPCCQULXFAWHGXETQVROQBUMTJLKCDWIBIZCFUYTZHORIMBHEYXEUINSEBCXZVOFSVPLOYQGIRIJPZMCSSQNYTDNKVQAARFFFQBRXMPMTJV");
    msg.timeout = 65354U;
    const char tmp_msg_0[] = {-52, -4, 6, 59, 33, -90, -119, -115, -57, 54, -30, -104, -52, -88, -113, 77, 71, 38, 64, -75, 101, -68, 3, 14, 63, -116, -77, -126, -23, -9, 42, -62, 70, -113, -126, -3, -118, 64, 111, -97, -67, -78, -21, 50, -12, -115, -106, -6, -45, -45, 110, 81, -65, 76, 98, 102, 30, 106, 6, -42, -89, -46, 71, 45, 29, -87, -51, -36, -22, -27, -3, 41, 9, 72, 121, 48, 39, 76, -109, -50, -75, 38, 87, -101, -70, -12, -84, 10, 113, 124, -23, -5, 78, -29, -14, 22, -16, -105, -74, 28, 0, 33, 7, -55, -66, -96, -97, 121, 9, 54, -15, -66, -35, 41, 103, -103, -37, -78, 123, -110, 57, 85, 82, 82, 51, 126, 99, -1, 68, -70, 42, -56, 105, 70, -75, 105, 102, 82, 109, 98, 70, -124, 89, -116, -125, 47, -20, -127, -85, -53, -105, 33, 54, 18, -107, 96, 77, 43, 11};
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
    msg.setTimeStamp(0.787708979180232);
    msg.setSource(39974U);
    msg.setSourceEntity(184U);
    msg.setDestination(46708U);
    msg.setDestinationEntity(163U);
    msg.seq = 2203011723U;
    msg.destination.assign("KFHONFUYKMZBUCYMFASKKQBUXYONVVPMZDBKXQXCBYQSHQSEDDJHTKHNSOBEWIMFDRPRDLIXGYDFVYPDVGCXGSIXRLCLPAEERMVLTEOWUWGFPOVWGQPNRLXXARHUFUAGFIUBWJIAXMJQGZSBVGKCCERZSYMTSZRQVBHBOCHTYNRIIJCMUWCFENJIOJ");
    msg.timeout = 24627U;
    const char tmp_msg_0[] = {-35, -11, -18, -33, -96, -18, 52, 96, 118, 86, -45, -96, 95, 102, -39, -107, -110, 94, -46, 29, -60, 118, 81, -40, -114, -89, 25, -101, -89, 34, -25, -57, 67, -88, 22, -6, 49, 33, 59, 56, 57, 104, -72, -1, 50, 70, -110, -17, -91, 39, -3, -119, 47, 104, 8, 113, 60, 76, -110, 53, 78, -64, 118, -57, -65, -87, 120, -103, 37, -60, 30, -37, -104, 32, -122, 23, 40, -17, -53, -20, 88, -8, 23, 65, -34, 10, -17, -121, -121, -49, -128, 26, 7, -62, 15, -14, -4, 73, 102, 99, -119, -110, -67, -70, 19, -94, 10, -76, 37, -72, -118, -85, 102, -86, 94, 117, 15, 3, 9, 55, 48, 15, 82, 121, 125, -13, -80, -17, 108, -29, 24, 78, 32, -98, -37, -64, 26, 36, 14, -49, 105, 126, 24, 33, 115, 119, 96, -58, 6, -120, -53, 116, -42, 60, 104, -11, -67, -16, -67, 125, -42, 30, -45, -59, 24, 41, -72, -116, -58, -90, -105, -127, -15, 18, 49, 80, 21, -40, -106, -72, 6, 97, -15, 27, -84, 66, 107, 37, -105, -88, 108, -67, 120, -14, 73, -23, 9, -80, -92, 40, -98, -78};
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
    msg.setTimeStamp(0.10209149310651477);
    msg.setSource(39687U);
    msg.setSourceEntity(122U);
    msg.setDestination(12278U);
    msg.setDestinationEntity(66U);
    msg.source.assign("XKHXJBBSWGYGFCKGCRAZBUMLIVFDUTKPXILGDOKVKYUNJLTYNZILBXJDJJUVEXDPOZZVREFFCRCDESWTYDNWESSAQXTPPMHICWNFRGOYWBSMYSLZPOIQTVNAOAIQBKHKTFWMARZSEOGZPGGFEPOENJHOGMLTO");
    const char tmp_msg_0[] = {-94, 95, -106, -68, -56, 114, -18, 56, -14, -39, 66, 28, 34, 124, 31, 54, 15, 121, 98, -76, -53, -99, -45, -26, 71, -7, -37, 23, 117, 79, 17, -39, -85, -47, 26, 108, -120, 37, 19, -96, 94, 61, -87, -97, -86, 74, 41, 18, -51, 124, -10, 90, -80, -96, -21, 64, -45, -38, 61, 108, 18, -70, 16, -116, 9, 84, 87, -77, 30, -6, 41, -74, -128, -106, -108, 8, 87, -27, -49, 103, -128, 33, -74, 94, -106, -29, -37, 52, -105, 20, -54, 23, -63, -114, 67, 96, -62, -3, 4, 69, 86, 50, 50, -65, -18, 86, -37, 14, -119, -71, -107, 19, 105, -80, 70, -97, 12, -108, -98, 97, 37, 59, -17, 51, 38, 5, 90, 77, 104, 120, -45, 59, -65, 99, -74, -118, -94, 48, 74, -31, -16, -68, -100, -71, -120, -55, 14, -22, -69, 27, -90, -104, -51, -4, 46, -96, 33, 40, 52, -71, -113, -17, 56, -16, 29, 47, -128, 82, 51, 0, -45, -88, 31, 12, 82, -101, 61, -8, -115, 20, -35, 74, 37, -31, -28, -42, -125, -56, -87, 35, -100, 98, 97, 10, -76, -3, 94, 85, 112, -33, 31, -65, -79, -120, -81, 109, 51, 36, -62, -125, 12, 39, -53, -68, -83, 93, -21, 12, 116, -103, 92, 101, -118, -5, -93, -54, -27, -95, -46, -93, -40, 102, 71, -84, 92, 117, -45};
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
    msg.setTimeStamp(0.82003255071626);
    msg.setSource(55052U);
    msg.setSourceEntity(186U);
    msg.setDestination(41897U);
    msg.setDestinationEntity(205U);
    msg.source.assign("PVPLCBYAKIWCMTPVONSXJHDDKPHQMBBETFXWFAZIZHUCXUZUMIEYQLYODGBJGWTUMUIJUDVQOZLRFCNTBONMGYKGUIPWPPXMZYGNDSLPAKCDXFHXNMOXSMIQXZVJRNERRLFREFBJZLDIVEVAGBZXRSWIFYWICYJUWVDCWOFKESDHOAUJYOWFTSECGXAKPQQRSQHNLBNZ");
    const char tmp_msg_0[] = {-57, -64, -69, -84, 122, -113, -114, 23, 105, -10, 32, -125, 109, -61, 9, -125, -26, 91, -17, 33, -106, 7, -22, 76, 49, 112, 22, -81, 52, 54, 46, -96, -16, 70, 116, 125, 120, 44, -123, -37, -65, -76, -79, -53, 126, -27, 2, -35, 7, 38, -43, -22, 34, 58, -111, -42, 21, 53, 97, 102, -97, -120, -59, 0, -110, 6, 68, 126, -97, 69, 6, -52, -10, 57, -52, -90, 108, -97, -56, -76, -65, -37, 116, -77};
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
    msg.setTimeStamp(0.980547069798181);
    msg.setSource(55105U);
    msg.setSourceEntity(209U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(247U);
    msg.source.assign("NZWEYPTUKJBXJUAIXBMMXSX");
    const char tmp_msg_0[] = {65, -111, -65, 40, 63, 115, 27, 83, -19, 119, 112, 124, -13, -23, 72, -28, -19, -96, -39, -40, 69, -114, 91, -72, -68, 91, 70, 92, 102, -75, -52, 59, -27, -15, -90, -41, -88, -51, 13, -123, 17, 110, 27, -12, -80, -89, 18, 63, 96, -35, 117, -89, 93, -67, -127, 85, -46, -35, -79, -74, -110, -4, 76, 40, -46, 12, -45, 53, 125, -97, 40, 118, -95, -61, -39, -56, -27, -26, 13, -32, -1, -92, -27, 18, -41, 73, -14, 64, -96, 65, 6, 83, -23, 57, -19, -81, -18, -14, 85, 11, 84, 105, -22, -116, 60, 62, -57, 14, 75, 16, -84, -28, -121, 17, 69, -37, 71, -67, 31, -111, 34, -30, 121, 72, -23, 22, 19, 73, -99, -81, 105, -11, 91, 46, 18, 85, -12, -35, 80, -44, -48, 46, -113, -71, 58, 126, -114, -40, 10, 95, 59, 84, 78, 116, 63, 46, -107, 80, 41, -61, 41, 74, -17, -26, 79, 126, -14, 23, -69, -103, -53, 1, -82, -75, 77, 121, 30, -17, 0, 21, -105, -126, 68, 59, 113, 77, 51, 64, 88, 27, -125, 50, -108, 52, -34, 3, 50, 103, -7, -80, 125, -50, -93, -123, -64, 2, -89, 10, -127, -68, 27, -120, 12, 65, 76, 14, -71, -16, -22, -93, -120, -75, 7, -21, 103, 7, 59, -12, 125, 81, -93, 39, -72, -125, -105, -17, 24, 80, -15, -119, -20, -45, -38, 61, -78, -55, -69, -23, -98, 105};
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
    msg.setTimeStamp(0.5742631643136049);
    msg.setSource(63956U);
    msg.setSourceEntity(190U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(162U);
    msg.seq = 1131519712U;
    msg.state = 41U;
    msg.error.assign("PXRGOYHULUMPEVDMGYJXABTPYKRZPVZCKQLDOSFIVHJOCJMCBFNUAZUUSFKWUKYECLMQLIBRSRZQTADLCRGNRTXXNNUUYFRALESEGPQJNZWOLNSVBSHSYRIWHHMTXEWUETWPAFSEWBRNNIMWDACTEAJLDHKEOTGIGKQZMDQIIVVZQ");

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
    msg.setTimeStamp(0.6099723386348281);
    msg.setSource(2701U);
    msg.setSourceEntity(159U);
    msg.setDestination(41447U);
    msg.setDestinationEntity(240U);
    msg.seq = 105832291U;
    msg.state = 175U;
    msg.error.assign("DOTOMNASZWV");

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
    msg.setTimeStamp(0.8316401635549269);
    msg.setSource(34182U);
    msg.setSourceEntity(61U);
    msg.setDestination(55917U);
    msg.setDestinationEntity(159U);
    msg.seq = 2253737863U;
    msg.state = 112U;
    msg.error.assign("QZSCHLXIMBWTDXYVECFGQFTUZNCNJVSWUGFIOBMXNFRUZLWTSVHV");

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
    msg.setTimeStamp(0.18376609584872372);
    msg.setSource(29556U);
    msg.setSourceEntity(119U);
    msg.setDestination(10432U);
    msg.setDestinationEntity(48U);
    msg.origin.assign("IRTCNMPYZTGYWZOZXLETPFTBZWFJMCGNJHBLMFPBZFLVVMESRKSHBJFYJHVAMOROLPVZOGHLILSZISFVQDKWSNFSPCATPLFFEMOGIVP");
    msg.text.assign("NIIZBECDMPFHCDAGHFBODRVKODZSIFYJCVWJUSAUGNJNTUYOZUESHTYSAYHFXTGCUXRTMOKSDECRPWNEXAKZPVINPBJVKQLIHAKFJBBPL");

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
    msg.setTimeStamp(0.12791263020610266);
    msg.setSource(44279U);
    msg.setSourceEntity(29U);
    msg.setDestination(22726U);
    msg.setDestinationEntity(146U);
    msg.origin.assign("CGNZGTHHQFUMROEUICQPHHSILSWMBLPKFTCDKVCIPNCOUXGJYRFKTTCVMDYOWVSFDUSFSLALDWQNYATYKXAAXOVLRXBOPVBQKQXAISJHLSGNCIPBUYDCFTLGZIXCFJZWGTIYXEBMMEGPHOKA");
    msg.text.assign("CVSPJHIBBQIRVBPHLXPITVKJMLSEWYJFNGOTSGDMCCFUWIQOCRNMZKBJBMU");

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
    msg.setTimeStamp(0.4528411680324982);
    msg.setSource(26203U);
    msg.setSourceEntity(45U);
    msg.setDestination(7680U);
    msg.setDestinationEntity(183U);
    msg.origin.assign("WJUHIMRDFZYPNJOKXIQAJRMFRIOENESCMSBFCJCOXPYDINNYUZCECWQHTDRMXDVEADLLLPBTLHLFYQFZPKYMMKBSGTAVAERSFPYCHQJANOLQXOTMAVVHPUIBKIGRUIRZGXBPPJKHYIRXQEAKNOGFPRIZWCUBCOAAVFYYSJOWTIDLDWWEHXZTFES");
    msg.text.assign("MLZCPWMOBGCSXJGANIIXAVIHEOLRRWCHVWFFVWQYVLOGOTRNGYJDIUXVRVSHMPQDSHCKSDPECJBHJTBDSAUNXEIIPTYJTRHOWQRTPSDHLRCBEDZMYUMUMUPKWAUHXFODBSCIKZYZATXPEDAFQVQMZEYOFAUXYWJDYZOWTRBMAIGFNLZRBLFTEQUHLYLEBNCQZGBWNXUOEGNMBVKSKSLKXPNQGISGJGTMLYHURXKFDNZNAKCVCPKPIEOWKQJTJ");

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
    msg.setTimeStamp(0.3144186152749493);
    msg.setSource(59118U);
    msg.setSourceEntity(49U);
    msg.setDestination(19396U);
    msg.setDestinationEntity(126U);
    msg.origin.assign("HSMZQTPIZBMFSPFQMPEXFSANNTXMFSODJBGUMCLVYZCYCVMTAURHGNBABBMDWIQCAHYKYIHJOFFC");
    msg.htime = 0.36062018290826403;
    msg.lat = 0.9301659635454582;
    msg.lon = 0.9161996230773044;
    const char tmp_msg_0[] = {-116, 63, -49, 56, -53, -35, 109, -30, 76, -30, -17, -115, 76, -80, -31, 94, 45, -27, 118, -39, -16, -121, -121, 63, 62, -86, -117, 105, 63, 37, -31, 98, 47, 102, -125, 77, 93, -25, 47, -114, -109, -40, -104, -115, -65, 18, 42, -12, 110, -92, -64, -7, 82, 88, 53, 119, 21, 41, 3, -40, 95, 116, 11, 8, 66, 67, -10, 124, 115, -60, 93, -46, 19, -60, 112, 90, -109, 106, -8, 117, 105, 95, 111, 22, 7, -99, 33, 16, 6, -112, -83, 46, -43, 0, -4, -62, -72, 70, 88, 36, -2, -79, -42, -50, 7, -107, 116, -9, 82, -68, 13, 89, -55, 91, -110, -1, -10, 42, 26, 64, -119, 76, -25, 20, -68, 49, -112, 85, -106, 90, 113};
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
    msg.setTimeStamp(0.9619037477407738);
    msg.setSource(35128U);
    msg.setSourceEntity(214U);
    msg.setDestination(20773U);
    msg.setDestinationEntity(4U);
    msg.origin.assign("VIOJILWULJGMBBFMNVGNQYBKQZNIKDWZHIETKESPYYYRXNGPJRHWETJSGVRCACAWQOBZDCNOYIGDKFPUNZNIOLDLVPYDNMRUSATLOBJWQETCZSQZVGKIWXOWQKWCFPSKAGLMRMTKAVCKUYCQZKGFVCJSUOGUQHGBXAFBJHWFMISASUIQEXDWEDMNOVPQ");
    msg.htime = 0.02969936732126388;
    msg.lat = 0.866643741125133;
    msg.lon = 0.8252901234956267;
    const char tmp_msg_0[] = {25, 108, 6, 125, 115, 77, -71, 27, -112, -74, 98, -85, 22, -14, 58, 65, 120, 68, 45, -23, -81, -111, -18, -79, 43, 71, 18, -47, 88, 104, -125, 65, 25, 33, -18, 69, -59, -12, 90, -93, -1, -83, 123, 5, -47, 90, -34, 64, 98, 85, 91, -74, -92, 120, -14, -59, -41, 8, -79, -32, 34, 95, 71, -1, 106, -69, 5, 78, 17, 33, -45, 121, -114, -72, 75, -75, -112, -95, -60, -6, -51, 24, -97, 70, -96, -86, 65, 49, -21, -10, 64, -33, 85, 81, -126, 21, 58, 104, -115, 57, -128, 65, -123, 58, 3, 5, -22, 95, -1, 34, 53, -69, -47, 83, -11, 49, 21, -9, 110, 15, 43, 15, -76, -72, -49, 50, -78, 121, 97, 111, 75, -53, 79, 8, -38, -107, -94, 9, 5, 98, 121, 72, -100, 86, 99, -42, -105, -24, 46, -74, 115, 1, -128, 92, 10, -44, -93, -125, -29, 86, 28, 45, -48, -53, -77, -86, -39, -117, 54, -58, 15, 112, -25, -66, -51, 48, 53, -56, 67, 2, -56, -2, -59, 110, 66, 116, -99, 123, 27, 87, -61, 27, 28, -68, 120, 114, 52, -97, 82, 85, 23, -68, -71, -128, 36, -117, 59, -35, -25, -37, 51, -48, 30, 24, -94, -46, -54, -95, -50, -6, -8};
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
    msg.setTimeStamp(0.10038724597884374);
    msg.setSource(59873U);
    msg.setSourceEntity(31U);
    msg.setDestination(31283U);
    msg.setDestinationEntity(27U);
    msg.origin.assign("ZKKNDQTMGDVESXMWYCYFNWYGHGHVWWSCHBCRNAUCIKJLFAOJELSBZLCEBWQVPSTZNNXQDYJKOIGFQFYKCXRBYOFMHBMSOTBDJSPWMTWURSHDPCZXAEUTOCVRIHBZXNLHODUTMTRDZAEZKFCFIKOAIJXGIGUNDYEDQADHOZNJRISNGBERMKYOURBVAXAPUCPWYEJQFYPSJVHVOMUMQUGTLFURZGLLVNL");
    msg.htime = 0.12712430685376697;
    msg.lat = 0.6277035855013384;
    msg.lon = 0.1648491549161285;
    const char tmp_msg_0[] = {50, -103, 73, 115, 41, 81, -7, -9, -20, 3, 108, -41, 29, -21, -31, 57, -120, -120, -10, -32, -48, 12, 25, -86, -5, -1, -41, -16, 0, 20};
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
    msg.setTimeStamp(0.28949881571312697);
    msg.setSource(14720U);
    msg.setSourceEntity(99U);
    msg.setDestination(48161U);
    msg.setDestinationEntity(22U);
    msg.req_id = 450U;
    msg.ttl = 64698U;
    msg.destination.assign("HIVTRKJTAGZCNOTRVJMXNYENAEGBEHPFESGJIPWVLLCKBUMYWSUXDIDSNGPOFLFBTSABBWSDOVYKLYHJWFOBUHTKLJMMXZI");
    const char tmp_msg_0[] = {-23, 49, -91, 80, 33, -37, 51, 7, 47, 93, 119, 82, 16, -95, -117, -13, 4, 97, -87, -47, -5, -117, -53, -17, -52, -52, -89, 32, 23, 113, -20, -46, 28, 19, 27, -68, 118, 31, -61, 28, -64, 112, 67, -118, -33, -35, -117, 81, -93, 39, -81, -13, 3, 1, -127, 26, -26, -16, -41, 50, 80, -28, 11, 47, 27, 44, -103, 77, 46, 114, -24, -51, 95, -49, 49, 24, -79, -75, 108, 97, 41, -7, -128, -87, 88, -7, 91, 43, 69, 105, -97, -16, -89, -37, 57, 20, 102, 107, -89, -55, -52, 57, 68, -98, 106, -32, -128, -101, 95, -95, 56, -70, 96, 74, -122, -98, -112, -95, -82};
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
    msg.setTimeStamp(0.8112378744507807);
    msg.setSource(24108U);
    msg.setSourceEntity(230U);
    msg.setDestination(24208U);
    msg.setDestinationEntity(15U);
    msg.req_id = 58020U;
    msg.ttl = 33977U;
    msg.destination.assign("XNROKGWISVFREJGBUGGBWNXCDQPRPSMEGPCVKUREJBDMWPVYTWZJCMGFOPTZYBLUVXIKXXBUOJXXQASEUYHEQUQDEOGLOFRQWBHODGRCIDCHKSKSWNNBUUMSLQWRFNSALRLHAFDIDZFKXAHDTOUKYJWFMHTBVEDAFZQTEQCPKVDGCXZPSFHZLNCJVJ");
    const char tmp_msg_0[] = {-100, 36, 59, 93, 4, 80, 28, 32, -26, -127, -108, -32, -25, -50, 22, -8, 98, -75, 61, 81, -75, -5, -89, 77, -37, -55, -25, 62, -55, -122, 117, -125, 31, -106, 64, 94, 60, 52, -123, -128, -81, 81, 30, -80, -126, 59, 27, -34, 80, -103, -128, -29, -128, -102, -112, -33, -13, -121, 20, -60, -118, 80, -75, 58, -117, 22, -101, 42, -14, 118, 92, -5, -41, -46, -101, 68, -92, -22, 91, -26, 51, 87, 86, 44, -14, 107, 51, 73, 40, 73, 69, 124, -26, 125, 21, 11, -90, 62, -23, -40, 84, 115, -46, 34, -48, 96, 35, 98, -125, 101, 88, 100, -57, 86, -105, 23, -12, -34, 71, 68, -92, 23, 59, 57, 44, -110, -99, -22, 45, -75, -49, 66, 85, -81, -33, 107, 76, 96, -98, -20, 97, -30, 96, -114, 104, -38, 42, 18, 110, 15, 110, -9, -22, 73, 90, -50, -73, -82, -99, 53, -110, -69, -6, 68, 30, -114, -100, -12, 107, 41, 37, 48, 21, -104, 13, 3, 56, 11, 69, -85, -120, 119, -72, 49, 11, 55, 68, -23, 69, 22, -65, 81, 35, -28, 30, -103, -17, -69, 84, -27, 24, -124, -118, -88, 57, 100, 77, 123, 50, -113, 10, 71, -29, 33, -12, 10, -121, -109, 118, -76, 20, -3, -53, -112, 17, -23, 106, -93, -76, 56, -4, 77, 92, -25, 40, -20, -79, -100, -69, -101, -128, 30, -46, 38};
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
    msg.setTimeStamp(0.6388964289054812);
    msg.setSource(9275U);
    msg.setSourceEntity(136U);
    msg.setDestination(40256U);
    msg.setDestinationEntity(76U);
    msg.req_id = 2708U;
    msg.ttl = 23464U;
    msg.destination.assign("PVGGEYAWHJVRO");
    const char tmp_msg_0[] = {70, -126, -72, -84, 56, -22, 16, 82, -107, 121, 17, -120, 125, 59, 87, -120, 50, -61, -92, 75, -77, -100, -122, 31, -37, 10, 67, -53, -11, -32, -39, 7, -33, -8, -14, -57, 12, -95, 84, -92, 59, -76, -55, -74, 91, 20, -55, -96, 70, 61, 77, 122, -123, -64, -67, -106, -58, 119, 1, 102, 3, -86, -53, -80, 8, 51, 107, -29, 117, 109, -83, 96, -55, 2, -58, 119, 54, 44, 2, -5, -94, 71, -51, 57, -91, 126, -126, 116, -70, 57, 120, 68, 119, 73, 78, 84, 33, 47, -123, 121, -23, 57, 55, -7, 12, -119, 74, -102, -113, 107, -69, 34, -37, 39, 1, -52, -26, 108, -127, -110, 68, 50, 41, -96, -74, 56, 88, 40, 96, 7, -52, -60, 47, 35, -2, -106, 12, 9, -33, 25, -68, -20, 108, 67, -35, -15, 125, -69, -87, -56, 57, -65, -103, 40, 97, -102, 124, -36};
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
    msg.setTimeStamp(0.7077500787147499);
    msg.setSource(45808U);
    msg.setSourceEntity(18U);
    msg.setDestination(8706U);
    msg.setDestinationEntity(226U);
    msg.req_id = 42201U;
    msg.status = 224U;
    msg.text.assign("MDSECXGXGHQCYATUWQWKVWSBACLMGHORELFMIEVRVSSZSTOKQHIIVDKRZIOZWUFLRZZYYJCZXGUVSQPPLOEADCFOAEUBCP");

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
    msg.setTimeStamp(0.8936325173128261);
    msg.setSource(17654U);
    msg.setSourceEntity(35U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(250U);
    msg.req_id = 29812U;
    msg.status = 2U;
    msg.text.assign("HDDAFMZIXJOWVOZVGPDSDBIKJRZVBRQTCDHQEWKLNXBSXVLDCPZGJTWVISEPHNMAALFJAJXKQAEBMFWRPKHIOQJFYWEJRQNDABZZSELNPWTNFEIROUQIGEYZLNGAGJGHDSDIPCCTZSEKGHABLYVZYBFOAKXOKXVQMCBNMUFSKWUSOLTLEITQRUXKMSOMFHHUUCNPRUZVOXJYHIYXUPIWNBWRTLPCCYSAKFTUJYERNCVOYRLMXMQBYGMD");

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
    msg.setTimeStamp(0.9903653357043031);
    msg.setSource(20536U);
    msg.setSourceEntity(134U);
    msg.setDestination(15463U);
    msg.setDestinationEntity(175U);
    msg.req_id = 51373U;
    msg.status = 214U;
    msg.text.assign("FZFNEXDWVUESFVTCJXPZPTGLJAYAJP");

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
    msg.setTimeStamp(0.33623500234109893);
    msg.setSource(41892U);
    msg.setSourceEntity(224U);
    msg.setDestination(52718U);
    msg.setDestinationEntity(86U);
    msg.group_name.assign("ELNKYCDJTQMOYIFSQQJZGPNSPRYECCRRBQSBSCTPNJJFQSEGZFBKHYPZXBSKLJNUMZLWMTANCUHAEFGWOTBMDKKZGEERDXZMUAJAIDKLLGUHSHNXENVWFBLAQIXXKFJZTWDZGVPLOYLWPFTEAZDOZMWWLRVBYTKTGIYTVEHIUBVUFNHFHVNOBSIYKODOKIAAOGOWMHIMQPCERJPJDUQQXDHBWCRNCYFPXHIAPDAVYCSJUVCUOMXVRRQSXU");
    msg.links = 2140104028U;

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
    msg.setTimeStamp(0.7221290829015393);
    msg.setSource(28867U);
    msg.setSourceEntity(254U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(242U);
    msg.group_name.assign("MMNXSNDEIZVRHMTCCGGXQNEGKEEQCUUBSDSTYSKSC");
    msg.links = 700449796U;

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
    msg.setTimeStamp(0.10862574711231643);
    msg.setSource(29949U);
    msg.setSourceEntity(90U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("ELJPUCWNETDGIRMSGVRIIVJSOHOZJNIDMSRIKQYKDVHQQHBMEOVKPZKGCEPADDFEUMJINCNLFPNLMRWPHBOZEIFXEESGRQTOGSDAYBBREAAXRPKZYMMMBKSXGIUCAIQYRQNBWMSJPXDUVFVQXSRIYFKWTOTFUVFYPFJNOZCGXZXAGLSAMCUFJFTVAYWBGKWHQKVTPOKECWNLALPWCC");
    msg.links = 3561753191U;

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
    msg.setTimeStamp(0.9382415004982956);
    msg.setSource(35343U);
    msg.setSourceEntity(210U);
    msg.setDestination(64296U);
    msg.setDestinationEntity(239U);
    msg.groupname.assign("YIDGFZCDCBFFJZVBTIJYOEZBXYHIJQINGWVLMKKPOGQCLDCHOGYRSJSXKEVKWUUQPGCGASUNBPPNJTREMUJCZYAIHCLQDWBEYETNSXLYFARMZVCRIZKNMZIGQPURWDHEXXFGANJORQHAMOKGHMSVUHJTHPWUMLPNBVVZQEZPLDLNXVWIYVKUTUGFXHTSPWQYB");
    msg.action = 178U;
    msg.grouplist.assign("IKYIRAXJAJVVGDOBNQQTBKUBSVWTEVRHTWRHBKCQJBUKWTPASGFWQTCGVGUMPXQPBKXUDJQEBTZVXOIERTWCAZNNYLPKJXZYSEACCAVRZBMNSDIUUISJLTRQLHXEE");

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
    msg.setTimeStamp(0.19542501824216219);
    msg.setSource(35305U);
    msg.setSourceEntity(179U);
    msg.setDestination(785U);
    msg.setDestinationEntity(161U);
    msg.groupname.assign("ONKBWCEEMPJFXBMUVAWUURCPQIUGONPFYKLDKSFFUKLJKYJRQVAUBVTRMWLGUUYDPGARGKYVATSMGTXFCAPKDRGTYQIOQDXYFPMYSCHXGWTLSBWSZLIMYZEJUDWJGRIFZZTLXCRUEJZXIMZALYRAXFJOVWREVNNIDVBHXZOECQKPWTKOIPTBSOHTGCTOCAHSNJNILSDQQVYQNXHBZWNFGAMCLW");
    msg.action = 211U;
    msg.grouplist.assign("VHRZCWBLMNEDDEBRLHAQUGVIOVROTTJUNLHYTKPYDNOBOEHBMJDPYSWJFIKXQZWYWXGWAPMZKLPGTDLSCEJNHSHQFXCYKWKFMVYFEBGNTYOCSNQAJGEGQQUILHJGTIRXRNLDNJHYZEPLFCTKAXEYSUOUMBUCXJAUOGXHNMKPKGQZLZISAMUBRNJVCDRF");

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
    msg.setTimeStamp(0.518083820526886);
    msg.setSource(50674U);
    msg.setSourceEntity(140U);
    msg.setDestination(64178U);
    msg.setDestinationEntity(87U);
    msg.groupname.assign("GHLMBOMANXJLHUAZOMZPRKAQUCPVIIFXPKFFLEKTYTKJXCRCTQROHULKIIWDQWRQKAFQRJYJPLILNVWYMGEBDJZYXVZJOWJNF");
    msg.action = 237U;
    msg.grouplist.assign("VIAOKDSGNFTWPWLJNFBSYIPLBWPQLVKKBUWLHIMIAOSJZWRLNLWEXAJDXHYHSVRTOCAJTDRZRGOPBCIHFEYXNMNECRGUMKZKWFPGTYXHRXYGJRQLSBHBUNJCUIYVUNSCPCHZUXM");

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
    msg.setTimeStamp(0.22108899057463993);
    msg.setSource(38529U);
    msg.setSourceEntity(22U);
    msg.setDestination(6793U);
    msg.setDestinationEntity(36U);
    msg.id = 221U;
    msg.range = 0.5022290022359323;

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
    msg.setTimeStamp(0.81860782825003);
    msg.setSource(58411U);
    msg.setSourceEntity(201U);
    msg.setDestination(44396U);
    msg.setDestinationEntity(179U);
    msg.id = 148U;
    msg.range = 0.24748562465182;

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
    msg.setTimeStamp(0.7102590441941541);
    msg.setSource(26869U);
    msg.setSourceEntity(197U);
    msg.setDestination(15316U);
    msg.setDestinationEntity(143U);
    msg.id = 122U;
    msg.range = 0.17475692877808802;

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
    msg.setTimeStamp(0.9558128110621297);
    msg.setSource(20573U);
    msg.setSourceEntity(48U);
    msg.setDestination(29437U);
    msg.setDestinationEntity(79U);
    msg.tx = 213U;
    msg.channel = 77U;
    msg.timer = 25742U;

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
    msg.setTimeStamp(0.9917213931284018);
    msg.setSource(11219U);
    msg.setSourceEntity(96U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(55U);
    msg.tx = 205U;
    msg.channel = 43U;
    msg.timer = 29670U;

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
    msg.setTimeStamp(0.7594947668509503);
    msg.setSource(7996U);
    msg.setSourceEntity(225U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(215U);
    msg.tx = 60U;
    msg.channel = 62U;
    msg.timer = 8235U;

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
    msg.setTimeStamp(0.48461400743963523);
    msg.setSource(51074U);
    msg.setSourceEntity(186U);
    msg.setDestination(50812U);
    msg.setDestinationEntity(185U);
    msg.beacon.assign("QMFPBECVJUUIOXQEORARHGUJECJCHGTWJXXCNCDURWVQVVGUYACAMLKYGSHPDNBNDHEZWNQKVJBWZLVPOTUCGBWATPAOEHQEYJRRGAIYQNHOMSWFNXDRKYHJWIGPFGPCFOMQFFZXBL");
    msg.lat = 0.8411510497571286;
    msg.lon = 0.8985441100894519;
    msg.depth = 0.7188697960789766;
    msg.query_channel = 202U;
    msg.reply_channel = 210U;
    msg.transponder_delay = 232U;

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
    msg.setTimeStamp(0.5674721816637515);
    msg.setSource(15192U);
    msg.setSourceEntity(52U);
    msg.setDestination(11136U);
    msg.setDestinationEntity(111U);
    msg.beacon.assign("SGDHEEITAIZMRJQRVVRYZBHFSKHNJFXVBGNIGKMHWDOQTSTAAIRHEBWMHFMZZRBSEMNYHJKKJLGZKLQSOXLJYMJGLPBWASUSWAQQDEYMQUGPOPXBXWCUKQJIWQOLYKUKEUDUFXOURTPSUWDVYFOTDBCOSLVUBBELJEGQMNNZNZ");
    msg.lat = 0.07861451243874074;
    msg.lon = 0.7308682642377036;
    msg.depth = 0.5860396450684255;
    msg.query_channel = 0U;
    msg.reply_channel = 187U;
    msg.transponder_delay = 111U;

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
    msg.setTimeStamp(0.5800984803094876);
    msg.setSource(42990U);
    msg.setSourceEntity(57U);
    msg.setDestination(5487U);
    msg.setDestinationEntity(152U);
    msg.beacon.assign("TRKIQIOFLKRQABEXUEIFVWNRUOSOFPGIGVEWXTTHMYFBGXZIOGWEVHKCHHBJJQWQQVIRNBEJBMSJJYEMSXAYRSLCCDEDZHJZESZUATOSXHDTJQVSBKQCNXENIXTYAKXPYJKNPVTUOLFASEWTRZFKRDGFVNGZCJBUQDHMMZGFIWUMJLKSXCGUVTCZYPHYPO");
    msg.lat = 0.16609085622652708;
    msg.lon = 0.7102794822782034;
    msg.depth = 0.8454157464553397;
    msg.query_channel = 169U;
    msg.reply_channel = 167U;
    msg.transponder_delay = 4U;

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
    msg.setTimeStamp(0.5884664272279271);
    msg.setSource(12056U);
    msg.setSourceEntity(212U);
    msg.setDestination(25344U);
    msg.setDestinationEntity(87U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.7015006984563907);
    msg.setSource(38971U);
    msg.setSourceEntity(2U);
    msg.setDestination(37974U);
    msg.setDestinationEntity(47U);
    msg.op = 189U;

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
    msg.setTimeStamp(0.7562313639886735);
    msg.setSource(52190U);
    msg.setSourceEntity(223U);
    msg.setDestination(14444U);
    msg.setDestinationEntity(237U);
    msg.op = 52U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FPZQKCLXBWTGALCYNGCVRUXUKWMXWIDTPGQGZKZIOYYVBATWTQHVBXSDEUNBIVSCZUXSMJCBYTPFNESAMFFSRQZDPESECEHOVISRVRGJYKCGELYJJYFNARHMABWXPFNKCWNUHSWBQHOROJUGVOZEODCOAPBUZLLUYBFRQFPOAOIMJMRZPHTXYTQINPXWHJZKEANLZVHEYETSPCILTMHLDG");
    tmp_msg_0.lat = 0.9845101424952957;
    tmp_msg_0.lon = 0.007608546820095818;
    tmp_msg_0.depth = 0.14875143039986793;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 211U;
    tmp_msg_0.transponder_delay = 11U;
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
    msg.setTimeStamp(0.7110066475142323);
    msg.setSource(37148U);
    msg.setSourceEntity(86U);
    msg.setDestination(51229U);
    msg.setDestinationEntity(17U);
    msg.address = 146U;

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
    msg.setTimeStamp(0.6713053161404249);
    msg.setSource(1589U);
    msg.setSourceEntity(253U);
    msg.setDestination(52736U);
    msg.setDestinationEntity(110U);
    msg.address = 66U;

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
    msg.setTimeStamp(0.00451006835507306);
    msg.setSource(31468U);
    msg.setSourceEntity(209U);
    msg.setDestination(41719U);
    msg.setDestinationEntity(138U);
    msg.address = 17U;

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
    msg.setTimeStamp(0.4767852600407547);
    msg.setSource(56814U);
    msg.setSourceEntity(158U);
    msg.setDestination(61341U);
    msg.setDestinationEntity(246U);
    msg.address = 235U;
    msg.status = 153U;
    msg.range = 0.4735800172355482;

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
    msg.setTimeStamp(0.01059217135142132);
    msg.setSource(7766U);
    msg.setSourceEntity(241U);
    msg.setDestination(9874U);
    msg.setDestinationEntity(231U);
    msg.address = 25U;
    msg.status = 59U;
    msg.range = 0.26417397000510945;

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
    msg.setTimeStamp(0.8782468515904167);
    msg.setSource(54966U);
    msg.setSourceEntity(88U);
    msg.setDestination(23733U);
    msg.setDestinationEntity(49U);
    msg.address = 29U;
    msg.status = 0U;
    msg.range = 0.7580644949531062;

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
    msg.setTimeStamp(0.09010274970838494);
    msg.setSource(39294U);
    msg.setSourceEntity(239U);
    msg.setDestination(6446U);
    msg.setDestinationEntity(170U);
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 163U;
    tmp_msg_0.actions.assign("MCMXAKSPBWKICYZGBJDFWMDCRPBGWNQZIIHGLLMULTDFRYREALXQAVELQPIRTKSVUSGZCKJSVMWHXPQZOEOSCEHWIJXHQXJHKITTBNRAVECJZFQBEPHQNFJWTSZQAOGDVOYCBOLXUVHPHAGURMFNBGLJYCKOXFUTJZYDLOOPRREOPMRVLARVMDQPZTTFHTAMGIKNTSIUIDBWSKWYXFXLFZBJNNVPG");
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
    msg.setTimeStamp(0.424729809612891);
    msg.setSource(17083U);
    msg.setSourceEntity(192U);
    msg.setDestination(57269U);
    msg.setDestinationEntity(123U);
    IMC::AbortAcked tmp_msg_0;
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
    msg.setTimeStamp(0.20737437128343061);
    msg.setSource(18332U);
    msg.setSourceEntity(112U);
    msg.setDestination(40944U);
    msg.setDestinationEntity(224U);
    IMC::Abort tmp_msg_0;
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
    msg.setTimeStamp(0.25281275203039677);
    msg.setSource(57662U);
    msg.setSourceEntity(77U);
    msg.setDestination(53229U);
    msg.setDestinationEntity(239U);
    msg.enable = 140U;

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
    msg.setTimeStamp(0.34550756839036045);
    msg.setSource(8651U);
    msg.setSourceEntity(232U);
    msg.setDestination(9012U);
    msg.setDestinationEntity(253U);
    msg.enable = 96U;

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
    msg.setTimeStamp(0.44828767157626737);
    msg.setSource(14979U);
    msg.setSourceEntity(241U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(187U);
    msg.enable = 248U;

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
    msg.setTimeStamp(0.4398249671302519);
    msg.setSource(5159U);
    msg.setSourceEntity(108U);
    msg.setDestination(9395U);
    msg.setDestinationEntity(106U);
    msg.summary = 203U;
    msg.level = 68U;

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
    msg.setTimeStamp(0.2797635490500996);
    msg.setSource(51375U);
    msg.setSourceEntity(155U);
    msg.setDestination(21686U);
    msg.setDestinationEntity(43U);
    msg.summary = 113U;
    msg.level = 236U;

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
    msg.setTimeStamp(0.5484262058825854);
    msg.setSource(60583U);
    msg.setSourceEntity(236U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(143U);
    msg.summary = 244U;
    msg.level = 49U;

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
    msg.setTimeStamp(0.6252943518577843);
    msg.setSource(27011U);
    msg.setSourceEntity(229U);
    msg.setDestination(32139U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.22804523634456664);
    msg.setSource(64803U);
    msg.setSourceEntity(252U);
    msg.setDestination(9702U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.1994405033707053);
    msg.setSource(12000U);
    msg.setSourceEntity(249U);
    msg.setDestination(38561U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.8400551823905299);
    msg.setSource(35739U);
    msg.setSourceEntity(46U);
    msg.setDestination(52900U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.9915436435035662);
    msg.setSource(37493U);
    msg.setSourceEntity(75U);
    msg.setDestination(30694U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.7872185568382003);
    msg.setSource(24901U);
    msg.setSourceEntity(29U);
    msg.setDestination(12658U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.9602224134428475);
    msg.setSource(21064U);
    msg.setSourceEntity(103U);
    msg.setDestination(28849U);
    msg.setDestinationEntity(197U);
    msg.op = 114U;
    msg.system.assign("LDVOADONFZEQNWAKIKBTREISYSGYVMKMLVIAMWJUGIXNNKLLTSTRGEFMOZMHVDY");
    msg.range = 0.6585944898321039;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("HHTCBZBMDOYCSACWARICMYXWURUFEWPVGLNBKQNQETYGYQMIGPZRIJEKXDKUZONFPKEJTOJNDUIUFRVXZKSVNZMMFMVBTLDCXLHQSCQZLRYJQYEFMRNXVQEYUXDIMIKOFGNEAWGZPATGQZGZGLDLTMQFUTWTBGOHLLXGEJNWOFJKTFAHNRYCJBATDHYXUXVDWBSCPRSJIHVJIBPHONVSCSWSOLHWHKMP");
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
    msg.setTimeStamp(0.38123625297619756);
    msg.setSource(4988U);
    msg.setSourceEntity(186U);
    msg.setDestination(52155U);
    msg.setDestinationEntity(36U);
    msg.op = 128U;
    msg.system.assign("MSQAYTJCWGTNUWEDHHEVNDQUOZBNJOROGUADZKLDBAETGYTHHWPMBOLGMBBLJDSLWVWORGU");
    msg.range = 0.3444629796840859;
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.8793085898213829;
    tmp_msg_0.confidence = 0.972403953289646;
    tmp_msg_0.opmodes.assign("UFNHRTIWJVNSNLBTOEZZHQEAWHHXFABXAFXHNXTZHZMMTBXMLQWLDJQTKDADYYYSKJ");
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
    msg.setTimeStamp(0.10018135365732328);
    msg.setSource(45050U);
    msg.setSourceEntity(214U);
    msg.setDestination(45849U);
    msg.setDestinationEntity(242U);
    msg.op = 105U;
    msg.system.assign("UVKSFILAMMECBAMMZUASXWH");
    msg.range = 0.7981063097831682;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 104U;
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
    msg.setTimeStamp(0.8748313353475472);
    msg.setSource(64300U);
    msg.setSourceEntity(192U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.22295870384969596);
    msg.setSource(46916U);
    msg.setSourceEntity(122U);
    msg.setDestination(36686U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.6100567237001838);
    msg.setSource(33075U);
    msg.setSourceEntity(129U);
    msg.setDestination(8745U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.7894543814633914);
    msg.setSource(54055U);
    msg.setSourceEntity(193U);
    msg.setDestination(36245U);
    msg.setDestinationEntity(107U);
    msg.list.assign("UGRRWGYRJWX");

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
    msg.setTimeStamp(0.14628668155745883);
    msg.setSource(25083U);
    msg.setSourceEntity(133U);
    msg.setDestination(44665U);
    msg.setDestinationEntity(61U);
    msg.list.assign("BXWWTPGLDIJTHGMUOGPMCYJOXNSYVABITRGXGBLRIFYZJIPEERQXPQEDYVMFRCCHKQEAVCNIAKQINMEJTVSDGBBYKEHDHWZTRDCYMQQPGEWKNTLRUSOVZYMEFXFMJWVNBGOLOUDDDLN");

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
    msg.setTimeStamp(0.046296808078281404);
    msg.setSource(65022U);
    msg.setSourceEntity(125U);
    msg.setDestination(55023U);
    msg.setDestinationEntity(161U);
    msg.list.assign("ZEXQSLLWVOTAFPFRXZXXKVYONYGAJGNHDZXUREEUZRRDQJXVEMVKCKJZWDANPMLUHNQEVKUHPIUSUZAZHLSGFYWRIYOBZKNPPFEKAPTJTGVUWXSYDLBFCC");

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
    msg.setTimeStamp(0.4482600443086707);
    msg.setSource(27899U);
    msg.setSourceEntity(70U);
    msg.setDestination(54742U);
    msg.setDestinationEntity(254U);
    msg.value = -1088;

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
    msg.setTimeStamp(0.4509581925786582);
    msg.setSource(7637U);
    msg.setSourceEntity(49U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(72U);
    msg.value = 13138;

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
    msg.setTimeStamp(0.07800115223542736);
    msg.setSource(30836U);
    msg.setSourceEntity(185U);
    msg.setDestination(32102U);
    msg.setDestinationEntity(29U);
    msg.value = 15239;

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
    msg.setTimeStamp(0.8478678414977805);
    msg.setSource(15353U);
    msg.setSourceEntity(72U);
    msg.setDestination(26819U);
    msg.setDestinationEntity(198U);
    msg.value = 0.23509406390081866;

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
    msg.setTimeStamp(0.576848540303179);
    msg.setSource(48723U);
    msg.setSourceEntity(52U);
    msg.setDestination(13825U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5609564289778766;

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
    msg.setTimeStamp(0.1496022580482318);
    msg.setSource(46595U);
    msg.setSourceEntity(186U);
    msg.setDestination(16483U);
    msg.setDestinationEntity(124U);
    msg.value = 0.47499165149268996;

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
    msg.setTimeStamp(0.562296196587357);
    msg.setSource(11812U);
    msg.setSourceEntity(208U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(167U);
    msg.value = 0.42008689349443284;

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
    msg.setTimeStamp(0.994202119625696);
    msg.setSource(48701U);
    msg.setSourceEntity(3U);
    msg.setDestination(31206U);
    msg.setDestinationEntity(119U);
    msg.value = 0.3207005168918222;

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
    msg.setTimeStamp(0.9564239417556726);
    msg.setSource(64744U);
    msg.setSourceEntity(19U);
    msg.setDestination(63182U);
    msg.setDestinationEntity(167U);
    msg.value = 0.19955041696065667;

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
    msg.setTimeStamp(0.7817189974908935);
    msg.setSource(19916U);
    msg.setSourceEntity(50U);
    msg.setDestination(50999U);
    msg.setDestinationEntity(30U);
    msg.validity = 61525U;
    msg.type = 146U;
    msg.utc_year = 65034U;
    msg.utc_month = 17U;
    msg.utc_day = 134U;
    msg.utc_time = 0.6106804998841158;
    msg.lat = 0.38304952327352104;
    msg.lon = 0.9277332679402283;
    msg.height = 0.3376457016828983;
    msg.satellites = 101U;
    msg.cog = 0.557914015583103;
    msg.sog = 0.24839926955946845;
    msg.hdop = 0.6367991865951337;
    msg.vdop = 0.2707888087962448;
    msg.hacc = 0.10236592135176581;
    msg.vacc = 0.634429470044241;

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
    msg.setTimeStamp(0.4802275110317107);
    msg.setSource(33572U);
    msg.setSourceEntity(8U);
    msg.setDestination(33049U);
    msg.setDestinationEntity(162U);
    msg.validity = 64595U;
    msg.type = 148U;
    msg.utc_year = 62701U;
    msg.utc_month = 20U;
    msg.utc_day = 132U;
    msg.utc_time = 0.9401534855280981;
    msg.lat = 0.9211179633505038;
    msg.lon = 0.8438329429070391;
    msg.height = 0.40181472478831226;
    msg.satellites = 236U;
    msg.cog = 0.28404116596339024;
    msg.sog = 0.37441014510676485;
    msg.hdop = 0.4020135882135746;
    msg.vdop = 0.5353165363464566;
    msg.hacc = 0.7163840939902916;
    msg.vacc = 0.17884850910531824;

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
    msg.setTimeStamp(0.9456212117391266);
    msg.setSource(15148U);
    msg.setSourceEntity(200U);
    msg.setDestination(25111U);
    msg.setDestinationEntity(186U);
    msg.validity = 37065U;
    msg.type = 59U;
    msg.utc_year = 3871U;
    msg.utc_month = 27U;
    msg.utc_day = 99U;
    msg.utc_time = 0.9020958707917089;
    msg.lat = 0.7334425202051448;
    msg.lon = 0.18709874106683433;
    msg.height = 0.3532066550505423;
    msg.satellites = 26U;
    msg.cog = 0.7329919605176138;
    msg.sog = 0.5941662517808459;
    msg.hdop = 0.2978516176539787;
    msg.vdop = 0.014618372745235031;
    msg.hacc = 0.2753099294570901;
    msg.vacc = 0.3550597281751636;

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
    msg.setTimeStamp(0.12134561065401528);
    msg.setSource(64348U);
    msg.setSourceEntity(72U);
    msg.setDestination(11078U);
    msg.setDestinationEntity(147U);
    msg.time = 0.7137079699434115;
    msg.phi = 0.04161167402490529;
    msg.theta = 0.19351924792052122;
    msg.psi = 0.7094801049461682;
    msg.psi_magnetic = 0.8522566892327875;

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
    msg.setTimeStamp(0.3706154452536752);
    msg.setSource(55870U);
    msg.setSourceEntity(64U);
    msg.setDestination(61432U);
    msg.setDestinationEntity(49U);
    msg.time = 0.6171327756711938;
    msg.phi = 0.6223902589988944;
    msg.theta = 0.45872373977079783;
    msg.psi = 0.7175996549080185;
    msg.psi_magnetic = 0.37469918378628675;

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
    msg.setTimeStamp(0.17129332228788274);
    msg.setSource(46821U);
    msg.setSourceEntity(124U);
    msg.setDestination(26592U);
    msg.setDestinationEntity(155U);
    msg.time = 0.3537197271375796;
    msg.phi = 0.41607737738204387;
    msg.theta = 0.8159704043710174;
    msg.psi = 0.24550372597856396;
    msg.psi_magnetic = 0.9351926542105297;

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
    msg.setTimeStamp(0.02578484886671928);
    msg.setSource(56967U);
    msg.setSourceEntity(94U);
    msg.setDestination(56491U);
    msg.setDestinationEntity(163U);
    msg.time = 0.5730839636757515;
    msg.x = 0.8134583866089244;
    msg.y = 0.3756660164350627;
    msg.z = 0.49300256483544214;
    msg.timestep = 0.8182619024714647;

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
    msg.setTimeStamp(0.8760252212139586);
    msg.setSource(51469U);
    msg.setSourceEntity(31U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(63U);
    msg.time = 0.3682770564947304;
    msg.x = 0.7832927366374236;
    msg.y = 0.9061771129860169;
    msg.z = 0.9068369674308338;
    msg.timestep = 0.3235716578782095;

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
    msg.setTimeStamp(0.021628812384637208);
    msg.setSource(46451U);
    msg.setSourceEntity(180U);
    msg.setDestination(58038U);
    msg.setDestinationEntity(46U);
    msg.time = 0.5614097034352016;
    msg.x = 0.16770337096030918;
    msg.y = 0.34418703247492155;
    msg.z = 0.7454183283833348;
    msg.timestep = 0.7955023178096333;

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
    msg.setTimeStamp(0.8168926968010495);
    msg.setSource(62972U);
    msg.setSourceEntity(122U);
    msg.setDestination(47222U);
    msg.setDestinationEntity(237U);
    msg.time = 0.5488967132582242;
    msg.x = 0.20618666196225766;
    msg.y = 0.6884990759759276;
    msg.z = 0.006123828352515015;

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
    msg.setTimeStamp(0.15391022358288664);
    msg.setSource(16725U);
    msg.setSourceEntity(23U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(3U);
    msg.time = 0.5164988649098938;
    msg.x = 0.7413291356973831;
    msg.y = 0.14790110789023458;
    msg.z = 0.20544331863667964;

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
    msg.setTimeStamp(0.3131469567285716);
    msg.setSource(55013U);
    msg.setSourceEntity(79U);
    msg.setDestination(62716U);
    msg.setDestinationEntity(36U);
    msg.time = 0.5818725109587084;
    msg.x = 0.5285087124664622;
    msg.y = 0.9030433400555523;
    msg.z = 0.3983487118989756;

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
    msg.setTimeStamp(0.9961436404524251);
    msg.setSource(22483U);
    msg.setSourceEntity(138U);
    msg.setDestination(2411U);
    msg.setDestinationEntity(40U);
    msg.time = 0.6064067741080718;
    msg.x = 0.17582860989773375;
    msg.y = 0.6014994842756131;
    msg.z = 0.4198882424491601;

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
    msg.setTimeStamp(0.041865444487208525);
    msg.setSource(24512U);
    msg.setSourceEntity(107U);
    msg.setDestination(34300U);
    msg.setDestinationEntity(130U);
    msg.time = 0.8683640618253466;
    msg.x = 0.2858712451538826;
    msg.y = 0.6238855764561354;
    msg.z = 0.18770382372663397;

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
    msg.setTimeStamp(0.5718841107035906);
    msg.setSource(52173U);
    msg.setSourceEntity(170U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(101U);
    msg.time = 0.27773779636526386;
    msg.x = 0.14711283369084394;
    msg.y = 0.7553309312266965;
    msg.z = 0.8985124443554309;

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
    msg.setTimeStamp(0.39880993660527175);
    msg.setSource(8853U);
    msg.setSourceEntity(192U);
    msg.setDestination(11041U);
    msg.setDestinationEntity(3U);
    msg.time = 0.8294093141165745;
    msg.x = 0.41309603923862925;
    msg.y = 0.9860269779753029;
    msg.z = 0.7448151235032535;

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
    msg.setTimeStamp(0.11797377472066073);
    msg.setSource(7009U);
    msg.setSourceEntity(152U);
    msg.setDestination(5834U);
    msg.setDestinationEntity(62U);
    msg.time = 0.6525379165216835;
    msg.x = 0.3732219853957449;
    msg.y = 0.9474819501067505;
    msg.z = 0.8715319533826652;

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
    msg.setTimeStamp(0.20326353605747094);
    msg.setSource(20826U);
    msg.setSourceEntity(103U);
    msg.setDestination(56530U);
    msg.setDestinationEntity(6U);
    msg.time = 0.862313709848309;
    msg.x = 0.05481625205986351;
    msg.y = 0.47263670863689455;
    msg.z = 0.4519142183042;

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
    msg.setTimeStamp(0.6215395581307648);
    msg.setSource(2431U);
    msg.setSourceEntity(177U);
    msg.setDestination(50001U);
    msg.setDestinationEntity(125U);
    msg.validity = 123U;
    msg.x = 0.9672269310471906;
    msg.y = 0.03880261767809878;
    msg.z = 0.4118409655544768;

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
    msg.setTimeStamp(0.3259896074437232);
    msg.setSource(20602U);
    msg.setSourceEntity(43U);
    msg.setDestination(35669U);
    msg.setDestinationEntity(187U);
    msg.validity = 180U;
    msg.x = 0.0644120752746572;
    msg.y = 0.22219586174946404;
    msg.z = 0.15825605506524099;

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
    msg.setTimeStamp(0.14530126668154575);
    msg.setSource(20933U);
    msg.setSourceEntity(84U);
    msg.setDestination(56797U);
    msg.setDestinationEntity(81U);
    msg.validity = 221U;
    msg.x = 0.4977748967607396;
    msg.y = 0.4128658062165297;
    msg.z = 0.6992653981718682;

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
    msg.setTimeStamp(0.29446074990365256);
    msg.setSource(36893U);
    msg.setSourceEntity(152U);
    msg.setDestination(58545U);
    msg.setDestinationEntity(217U);
    msg.validity = 161U;
    msg.x = 0.7993556859663417;
    msg.y = 0.4858764098832846;
    msg.z = 0.6695172110682516;

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
    msg.setTimeStamp(0.9348184667018474);
    msg.setSource(49450U);
    msg.setSourceEntity(44U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(55U);
    msg.validity = 132U;
    msg.x = 0.5977473704266746;
    msg.y = 0.5513904866273468;
    msg.z = 0.7165665968256372;

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
    msg.setTimeStamp(0.7162743857237851);
    msg.setSource(57931U);
    msg.setSourceEntity(139U);
    msg.setDestination(40651U);
    msg.setDestinationEntity(172U);
    msg.validity = 91U;
    msg.x = 0.26566672316439066;
    msg.y = 0.3145200125279143;
    msg.z = 0.5326073070738219;

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
    msg.setTimeStamp(0.03164589949464358);
    msg.setSource(16330U);
    msg.setSourceEntity(107U);
    msg.setDestination(31287U);
    msg.setDestinationEntity(140U);
    msg.time = 0.6886377219172569;
    msg.x = 0.3225106820516652;
    msg.y = 0.26351801955966914;
    msg.z = 0.4199540971958021;

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
    msg.setTimeStamp(0.17946501719021468);
    msg.setSource(3517U);
    msg.setSourceEntity(100U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(228U);
    msg.time = 0.10439644820591087;
    msg.x = 0.6444619416649006;
    msg.y = 0.39925691004390385;
    msg.z = 0.025387932716191774;

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
    msg.setTimeStamp(0.7483768692836981);
    msg.setSource(58644U);
    msg.setSourceEntity(123U);
    msg.setDestination(14528U);
    msg.setDestinationEntity(247U);
    msg.time = 0.36782732769728277;
    msg.x = 0.5811576489831923;
    msg.y = 0.7090439445563782;
    msg.z = 0.538309098533308;

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
    msg.setTimeStamp(0.8757358278785436);
    msg.setSource(21345U);
    msg.setSourceEntity(20U);
    msg.setDestination(45081U);
    msg.setDestinationEntity(211U);
    msg.validity = 173U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.08529992024561672;
    tmp_msg_0.y = 0.9045370178900722;
    tmp_msg_0.z = 0.6201203512383281;
    tmp_msg_0.phi = 0.5677783116122684;
    tmp_msg_0.theta = 0.2733148941150072;
    tmp_msg_0.psi = 0.9813865378279736;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.006669752543091989;
    tmp_msg_1.beam_height = 0.3912863180616396;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9601439941800634;

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
    msg.setTimeStamp(0.9441266998199465);
    msg.setSource(27588U);
    msg.setSourceEntity(108U);
    msg.setDestination(51813U);
    msg.setDestinationEntity(206U);
    msg.validity = 160U;
    msg.value = 0.8613684593725329;

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
    msg.setTimeStamp(0.18925697410416664);
    msg.setSource(11760U);
    msg.setSourceEntity(221U);
    msg.setDestination(5678U);
    msg.setDestinationEntity(55U);
    msg.validity = 214U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 6.47944489193808e-05;
    tmp_msg_0.y = 0.3691953325579108;
    tmp_msg_0.z = 0.7115394013681089;
    tmp_msg_0.phi = 0.5762465526376513;
    tmp_msg_0.theta = 0.44799436630089295;
    tmp_msg_0.psi = 0.13373793673714862;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.4292566555147679;
    tmp_msg_1.beam_height = 0.1769955182410602;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4929233544366559;

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
    msg.setTimeStamp(0.5928761366911418);
    msg.setSource(1269U);
    msg.setSourceEntity(143U);
    msg.setDestination(64904U);
    msg.setDestinationEntity(223U);
    msg.value = 0.9970720231179477;

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
    msg.setTimeStamp(0.9396691211430652);
    msg.setSource(18007U);
    msg.setSourceEntity(148U);
    msg.setDestination(9359U);
    msg.setDestinationEntity(17U);
    msg.value = 0.8108892899833808;

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
    msg.setTimeStamp(0.13215237548075554);
    msg.setSource(47259U);
    msg.setSourceEntity(49U);
    msg.setDestination(42852U);
    msg.setDestinationEntity(3U);
    msg.value = 0.6107958087860741;

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
    msg.setTimeStamp(0.05519400506715055);
    msg.setSource(63285U);
    msg.setSourceEntity(209U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(56U);
    msg.value = 0.07926621628340913;

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
    msg.setTimeStamp(0.9886787611351341);
    msg.setSource(1860U);
    msg.setSourceEntity(67U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(227U);
    msg.value = 0.6647636607733016;

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
    msg.setTimeStamp(0.14286738101569374);
    msg.setSource(33089U);
    msg.setSourceEntity(198U);
    msg.setDestination(55075U);
    msg.setDestinationEntity(109U);
    msg.value = 0.1251102993649128;

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
    msg.setTimeStamp(0.3407415944870238);
    msg.setSource(65408U);
    msg.setSourceEntity(143U);
    msg.setDestination(14610U);
    msg.setDestinationEntity(105U);
    msg.value = 0.37140197225453764;

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
    msg.setTimeStamp(0.6344511268657549);
    msg.setSource(30822U);
    msg.setSourceEntity(38U);
    msg.setDestination(34176U);
    msg.setDestinationEntity(239U);
    msg.value = 0.6510131322636825;

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
    msg.setTimeStamp(0.7561714269729455);
    msg.setSource(49062U);
    msg.setSourceEntity(250U);
    msg.setDestination(25706U);
    msg.setDestinationEntity(133U);
    msg.value = 0.006707634753399083;

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
    msg.setTimeStamp(0.9592846343447077);
    msg.setSource(28703U);
    msg.setSourceEntity(80U);
    msg.setDestination(27125U);
    msg.setDestinationEntity(237U);
    msg.value = 0.029934639788855466;

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
    msg.setTimeStamp(0.6467035936548149);
    msg.setSource(16930U);
    msg.setSourceEntity(163U);
    msg.setDestination(21091U);
    msg.setDestinationEntity(28U);
    msg.value = 0.3154510480449856;

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
    msg.setTimeStamp(0.9098398253370455);
    msg.setSource(63330U);
    msg.setSourceEntity(105U);
    msg.setDestination(38297U);
    msg.setDestinationEntity(94U);
    msg.value = 0.013273988442467521;

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
    msg.setTimeStamp(0.7576162054123696);
    msg.setSource(63357U);
    msg.setSourceEntity(20U);
    msg.setDestination(13908U);
    msg.setDestinationEntity(176U);
    msg.value = 0.6099754222172246;

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
    msg.setTimeStamp(0.24090962194855714);
    msg.setSource(34797U);
    msg.setSourceEntity(150U);
    msg.setDestination(22573U);
    msg.setDestinationEntity(244U);
    msg.value = 0.3188125458915908;

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
    msg.setTimeStamp(0.8512487711265917);
    msg.setSource(18182U);
    msg.setSourceEntity(60U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8414893771937684;

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
    msg.setTimeStamp(0.37296534611746934);
    msg.setSource(10646U);
    msg.setSourceEntity(193U);
    msg.setDestination(1176U);
    msg.setDestinationEntity(35U);
    msg.value = 0.7615412020959129;

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
    msg.setTimeStamp(0.18962618534126596);
    msg.setSource(18895U);
    msg.setSourceEntity(0U);
    msg.setDestination(22510U);
    msg.setDestinationEntity(231U);
    msg.value = 0.6160145430650011;

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
    msg.setTimeStamp(0.18284149878498968);
    msg.setSource(3000U);
    msg.setSourceEntity(212U);
    msg.setDestination(46023U);
    msg.setDestinationEntity(249U);
    msg.value = 0.045809969552280116;

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
    msg.setTimeStamp(0.547297386214052);
    msg.setSource(58717U);
    msg.setSourceEntity(97U);
    msg.setDestination(22341U);
    msg.setDestinationEntity(134U);
    msg.value = 0.6296161514132039;

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
    msg.setTimeStamp(0.9649688106405893);
    msg.setSource(18696U);
    msg.setSourceEntity(71U);
    msg.setDestination(37855U);
    msg.setDestinationEntity(161U);
    msg.value = 0.2164304043342531;

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
    msg.setTimeStamp(0.0013046643807563818);
    msg.setSource(61775U);
    msg.setSourceEntity(40U);
    msg.setDestination(3319U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6065688262465116;

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
    msg.setTimeStamp(0.5953752703323515);
    msg.setSource(32106U);
    msg.setSourceEntity(235U);
    msg.setDestination(10115U);
    msg.setDestinationEntity(99U);
    msg.value = 0.18472775303061362;

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
    msg.setTimeStamp(0.6161485773223393);
    msg.setSource(38102U);
    msg.setSourceEntity(221U);
    msg.setDestination(64958U);
    msg.setDestinationEntity(188U);
    msg.value = 0.35784343748733405;

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
    msg.setTimeStamp(0.7050798540212924);
    msg.setSource(33181U);
    msg.setSourceEntity(30U);
    msg.setDestination(64281U);
    msg.setDestinationEntity(224U);
    msg.value = 0.1800704580647181;

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
    msg.setTimeStamp(0.11495139246095654);
    msg.setSource(41493U);
    msg.setSourceEntity(178U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(101U);
    msg.direction = 0.6570786845712281;
    msg.speed = 0.540221461318572;
    msg.turbulence = 0.6268384825134066;

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
    msg.setTimeStamp(0.7731226416113851);
    msg.setSource(45495U);
    msg.setSourceEntity(101U);
    msg.setDestination(17589U);
    msg.setDestinationEntity(211U);
    msg.direction = 0.06902083714960605;
    msg.speed = 0.554618434716849;
    msg.turbulence = 0.4436521118119323;

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
    msg.setTimeStamp(0.1627359725049965);
    msg.setSource(39252U);
    msg.setSourceEntity(40U);
    msg.setDestination(18499U);
    msg.setDestinationEntity(204U);
    msg.direction = 0.28116734165844237;
    msg.speed = 0.8761626166400744;
    msg.turbulence = 0.3250353563383792;

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
    msg.setTimeStamp(0.020818667428415094);
    msg.setSource(38075U);
    msg.setSourceEntity(176U);
    msg.setDestination(41689U);
    msg.setDestinationEntity(192U);
    msg.value = 0.784220176402465;

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
    msg.setTimeStamp(0.15834615719340883);
    msg.setSource(62980U);
    msg.setSourceEntity(145U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(207U);
    msg.value = 0.12462386513069701;

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
    msg.setTimeStamp(0.2891384368212786);
    msg.setSource(60285U);
    msg.setSourceEntity(102U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(169U);
    msg.value = 0.47071556492341704;

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
    msg.setTimeStamp(0.006916930881176175);
    msg.setSource(15540U);
    msg.setSourceEntity(185U);
    msg.setDestination(33058U);
    msg.setDestinationEntity(172U);
    msg.value.assign("EGVOGZHGZMEBKCWSPWZ");

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
    msg.setTimeStamp(0.5953460052272429);
    msg.setSource(21276U);
    msg.setSourceEntity(26U);
    msg.setDestination(31147U);
    msg.setDestinationEntity(144U);
    msg.value.assign("KNELLOEQSROGDRYBIWVUGXIMLNHLHKTQIWZXYPWPOGCHQJTSFFHPSYTFZBDFTZZKKAJWZFUADQCVBICAGOSUNXALMTOEJYFPZVJR");

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
    msg.setTimeStamp(0.4287433438433652);
    msg.setSource(30465U);
    msg.setSourceEntity(237U);
    msg.setDestination(9005U);
    msg.setDestinationEntity(26U);
    msg.value.assign("LGONLSNHLJMXQJOAWHAAWDWTTQBSJQFIOFJULSJIRDPQXTHQRWVGZPYOFSOFRVCZGDCIFYRVETDBBMCCKCAQIYPSZVGTZNADESANZHIVMEMVEAXODOHTEZGPJKHLTXWKDYTECMPGAGRRVURIUFOPNYIEHSQUDNKXHWBWIKRBKJUHW");

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
    msg.setTimeStamp(0.16966999608043176);
    msg.setSource(37587U);
    msg.setSourceEntity(90U);
    msg.setDestination(58082U);
    msg.setDestinationEntity(213U);
    const char tmp_msg_0[] = {-81, 91, -32, -61, 76, 8, -13, 74, -51, 58, 19, 23, 113, -101, -63, -116, 82, -106, 84, 40, -88, 63, -91, 101, -86, 38, 126, 65, 91, 75, 89, -111, -128, 2, -12, -100, -117, 18, 38, -114, -10, -1, -68, 63, -33, -127, 70, 36, -20};
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
    msg.setTimeStamp(0.8810753441631484);
    msg.setSource(27134U);
    msg.setSourceEntity(101U);
    msg.setDestination(10166U);
    msg.setDestinationEntity(132U);
    const char tmp_msg_0[] = {-42, 91, 116, 105, -96, -119, -92, 115, 36, -20, 61, 24, 45, -15, -67, -53, 1, 59, 16, -118, 7, 117, 94, 17, 62, -43, -57, -16, -17, 0, 19, 11, 33, -90, 16, -30, -58, 25, -4, -95, -77};
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
    msg.setTimeStamp(0.3565825650428075);
    msg.setSource(65340U);
    msg.setSourceEntity(97U);
    msg.setDestination(19847U);
    msg.setDestinationEntity(184U);
    const char tmp_msg_0[] = {37, -39, 13, -4, -128, -42, 113, -42, 80, -90, 2, 1, -123, -9, -24, 64, 5, 55, 81, -67, 21, 92, -19, -47, -104, 45, 15, -103, -38, -88, 125, -21, 28, -8, 90, -6, 95, 97, -20, 19, 113, 23, 122, -15, -71, 122, 119, -109, -108, 14, 110, -59, 103, -113, 10, 86, -51, -120, -126, 56, -24, -54, 41, 106, -71, 78, -124, -99, -95, -47, 69, -100, 78, -63, 28, -84, -56, 104, 27, 76, -1, -47, -61, -34, 97, -106, -58, -126, 76, 46, 4, 22, 93, -47, 86, -117, -16, -31, 38, 5, -49, 91, 94, -78, 61, 117, -119, -77, 35, -117, 122, -47, 24, 120, -95, 126, -114, -47, -128, 73, -7, -33, 122, 29, 104, 91, -52, 28, -59, 67, 67, -57, 122, -11, -46, -63, 5, 91, 119, 64, 85, 67, 77, 25, -44, -9, 74, 16, 112, 5, 11, -9, 90, -29, -64, 1, -98, 94, -97, -113, -18, -31, 115, 9, -6, -87, 89, -119, 115, 15, -91, -87, -42, -29, -21, 34, -126, -13, 25, -32, 42, 97, -51, 113, -50, 101, 102, -84, -74, -60, 64, -83, 40, 60, -88, -76, -52, 9};
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
    msg.setTimeStamp(0.8756978566496204);
    msg.setSource(9917U);
    msg.setSourceEntity(217U);
    msg.setDestination(39500U);
    msg.setDestinationEntity(154U);
    msg.frequency = 3306263031U;
    msg.min_range = 41142U;
    msg.max_range = 57109U;

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
    msg.setTimeStamp(0.08185099702321652);
    msg.setSource(12319U);
    msg.setSourceEntity(117U);
    msg.setDestination(12062U);
    msg.setDestinationEntity(166U);
    msg.frequency = 629012753U;
    msg.min_range = 16005U;
    msg.max_range = 59603U;

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
    msg.setTimeStamp(0.6982701083023968);
    msg.setSource(11322U);
    msg.setSourceEntity(92U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(51U);
    msg.frequency = 2042053548U;
    msg.min_range = 13502U;
    msg.max_range = 56672U;

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
    msg.setTimeStamp(0.3781970824954214);
    msg.setSource(12576U);
    msg.setSourceEntity(221U);
    msg.setDestination(29048U);
    msg.setDestinationEntity(67U);
    msg.type = 232U;
    msg.frequency = 2823090020U;
    msg.min_range = 6817U;
    msg.max_range = 36110U;
    msg.bits_per_point = 13U;
    msg.scale_factor = 0.45346396485737916;
    const char tmp_msg_0[] = {-88, -34, -63, 115, -28, 73, 115, 82, 48, -12, -51, -87, 85, 51, 103, 117, -22, 111, -122, -85, -88, -126, 49, 59, -121, 33, -35, 10, -100, -16, 120, -89, -43, 97, -126, -119, -86, 103, 59, 84, 82, -98, 72, 12, -128, 109, 89, -23, -29, -46, 23, -33, 107, -55, -82, 75, 114, -93, 32, -125, -6, -76, 43, -108, 126, 11, -82, 118, -57, -46, 42, -50, 126, 91, 4, -50, 52, 27, -74, 25, -95, -106, 4, 46, -12, 120, 60, 33, 48, 74, -73, 72, -38, 122, 72, 94, -100, 6, -16, -53, -14, -95, -70, 111, -48, 47, -15, -6, 44, -79, -31, 14, 82, 44, -7, -15, -9, -79, -89, -56, -93, -20, 56, -102, 23, -45, 43, -8, -17, 20, 14, 53, -68, -114, -33, -127, 85, 5, -123, -3, -82, -92, -92, -88, -51, -25, 22, 93, 36, -20, -51, 30, 44, -57, -117, -67, -38, 114, 51, 37, -113, 29, -62, -34, -110, -94, 9, -28, 105, -65, 64, 4, -110, -78, -111, 26, 66, -48, -121, -59, -19, -79, 89, -3, 17, 63, 117, 9, -26, 0, 115, -103, -89, -95, 107, 52, 79, 104, -18, 51, 66, 27, -33, -88, -72, -54, 23, 119, 119, -47, 40, -40, 51, 62, -47, -58};
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
    msg.setTimeStamp(0.4241635303906597);
    msg.setSource(29178U);
    msg.setSourceEntity(71U);
    msg.setDestination(13935U);
    msg.setDestinationEntity(206U);
    msg.type = 237U;
    msg.frequency = 3392599012U;
    msg.min_range = 42862U;
    msg.max_range = 39594U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.2403060215234497;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5497004219374729;
    tmp_msg_0.beam_height = 0.6721983048652348;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-44, 34, 74, 95, -95, 95, 104, 125, -92, 59, 119, -22, 88, 1, 53, -127, 116, 13, -109, -64, -102, 107, 16, 82, -22, -85, -30, -83, -115, -1, -24, -34, 57, -34, 115, 115, 46, -20, -109, -35, -112, 37, -57, 96, 22, -54, -35, -102, -86, 115, -64, -25, 114, -112, -30, 126, 117, 49, -114, -104, 103, 85, 124, 94, 12, 72, -57, -100, -97, 88, -57, -86, 34, 98, -22, 87, -78, -19, 41, 45, -123, -77, -105, -97, 73, 37, 65, 22, -76, 40, 33, -9, -109, 122, -67, -74, -87, 50, 72, -13, -37, 107, 60, -8, 17, -112, 119, -116, -28, -50, 82, -99, -26, -49, -57, 31, 62, -60, 94, -118, -20, 108, 9, -100, 81, 12, -48, -51, -99, 119};
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
    msg.setTimeStamp(0.8833598707302466);
    msg.setSource(30228U);
    msg.setSourceEntity(103U);
    msg.setDestination(38733U);
    msg.setDestinationEntity(139U);
    msg.type = 169U;
    msg.frequency = 4078501231U;
    msg.min_range = 36204U;
    msg.max_range = 20811U;
    msg.bits_per_point = 134U;
    msg.scale_factor = 0.7670961395765598;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.10270971863036704;
    tmp_msg_0.beam_height = 0.6688600115262379;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-13, 21, -6, 77, 60, -83, -27, -82, -18, -63, 115, 57, -79, 40, 101, -121, 94, 82, -106, -110, 17, -18, 49, -27, -115, -64, -97, 16, -44, -19, -35, -22, 104, 40, -39, -92, 50, 2, 55, 25, 70, 119, -68, -34, -97, -87, 95, -25, 71, 8, -36, -24, 18, 121, -54, -40, 32, -60, -107, -48, -73, -44, -15, 108, 117, -17, 104, -95, -50};
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
    msg.setTimeStamp(0.1603589582201882);
    msg.setSource(7520U);
    msg.setSourceEntity(135U);
    msg.setDestination(65050U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.10393450210637745);
    msg.setSource(12176U);
    msg.setSourceEntity(178U);
    msg.setDestination(62043U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.745931134821572);
    msg.setSource(23468U);
    msg.setSourceEntity(171U);
    msg.setDestination(3397U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.8762655605421896);
    msg.setSource(32836U);
    msg.setSourceEntity(42U);
    msg.setDestination(55996U);
    msg.setDestinationEntity(218U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.5060328122051544);
    msg.setSource(62343U);
    msg.setSourceEntity(12U);
    msg.setDestination(23223U);
    msg.setDestinationEntity(19U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.195187126823691);
    msg.setSource(10627U);
    msg.setSourceEntity(249U);
    msg.setDestination(57091U);
    msg.setDestinationEntity(149U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.15574304921844806);
    msg.setSource(47624U);
    msg.setSourceEntity(156U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7481544888552216;
    msg.confidence = 0.8730318895173608;
    msg.opmodes.assign("UMOSOOIOKSMQMFLDBETJKXAQQIUEDWCVOEVPLXCXHPTIOQIYNMXCMUGHERVVZGFTYIRZBFXSTZWHAAUPKNGSMZCJXLWIWTNAYNUPEIHDVOSYDWINGNYSSEFCPXRSJGZHWHANFUGRVQBFTFNVMDZFPYKPYRAHGEQOKBBAQFLJRKWKDDZRVHLTJAKUWXJMUYLRXLDJWQYLCSCELZVMDTUSLJUZBGEJVITBRCCINPJWZECKPBTBQHPOGHADMFNXOK");

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
    msg.setTimeStamp(0.050728597713085244);
    msg.setSource(48222U);
    msg.setSourceEntity(29U);
    msg.setDestination(38937U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3290211024914086;
    msg.confidence = 0.09669922073035209;
    msg.opmodes.assign("HCNHXVYUYZFCNZJWJBTJPGVHYGGJKEHJUGTWRPKPIOXQJZERLEINWCARRLCDODXFWQFESCCJWAWKTKRXXO");

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
    msg.setTimeStamp(0.8856260173647724);
    msg.setSource(47642U);
    msg.setSourceEntity(160U);
    msg.setDestination(40946U);
    msg.setDestinationEntity(147U);
    msg.value = 0.8466317091902433;
    msg.confidence = 0.7570750518139338;
    msg.opmodes.assign("CNOTAEKKFWXPMENGITSJZOVQEPVUGVYRZQXNHBXZVWTZZIPVIGCZQKJYJYFICMRJRBCYDIVSIRSYDLNGZUTPJXWUBBHDPAPYWROCCTNHPMULXOXJFGDAYLNEHSOEPKSWUMOMROTKQNAHGEHNTAVVMQFMHSHEFLLEBRZDVIRCBSBTMWOLAEKAXRLNXCMRGZPIUHDWVQGDJDLTPFASTZAKSUFJDOJCUQBYKYQBWLKYBNXAIWOJWMQIFUXSGKECF");

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
    msg.setTimeStamp(0.3951837408408062);
    msg.setSource(8891U);
    msg.setSourceEntity(121U);
    msg.setDestination(47794U);
    msg.setDestinationEntity(26U);
    msg.itow = 2934380252U;
    msg.lat = 0.03166912063477334;
    msg.lon = 0.3277674461550317;
    msg.height_ell = 0.4537667071934861;
    msg.height_sea = 0.7571270042223963;
    msg.hacc = 0.7475503444998168;
    msg.vacc = 0.7041468271815775;
    msg.vel_n = 0.2916241424602327;
    msg.vel_e = 0.0738834250740541;
    msg.vel_d = 0.6849824682521047;
    msg.speed = 0.9725447024999294;
    msg.gspeed = 0.26648415701757133;
    msg.heading = 0.007388824114562098;
    msg.sacc = 0.25331190103448953;
    msg.cacc = 0.8611213196038879;

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
    msg.setTimeStamp(0.347649715408307);
    msg.setSource(25481U);
    msg.setSourceEntity(35U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(35U);
    msg.itow = 1485639316U;
    msg.lat = 0.06571431759542357;
    msg.lon = 0.4401542374518139;
    msg.height_ell = 0.2522872322602637;
    msg.height_sea = 0.15949743890900347;
    msg.hacc = 0.5968959270151719;
    msg.vacc = 0.16019295055969662;
    msg.vel_n = 0.1438313234166303;
    msg.vel_e = 0.20685345286066237;
    msg.vel_d = 0.5045279564773619;
    msg.speed = 0.020434873234190465;
    msg.gspeed = 0.8928216909120085;
    msg.heading = 0.2011380072149066;
    msg.sacc = 0.8824921718426127;
    msg.cacc = 0.37046411574031535;

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
    msg.setTimeStamp(0.4620055394024176);
    msg.setSource(43210U);
    msg.setSourceEntity(252U);
    msg.setDestination(25333U);
    msg.setDestinationEntity(110U);
    msg.itow = 4122405348U;
    msg.lat = 0.24033655987768998;
    msg.lon = 0.5655240396294718;
    msg.height_ell = 0.1724434682097804;
    msg.height_sea = 0.8875345498882266;
    msg.hacc = 0.4279967375603472;
    msg.vacc = 0.20875943689496956;
    msg.vel_n = 0.8601297506556247;
    msg.vel_e = 0.2956082270694128;
    msg.vel_d = 0.36091598908886735;
    msg.speed = 0.15950066545129304;
    msg.gspeed = 0.651890636349233;
    msg.heading = 0.5149806937798789;
    msg.sacc = 0.5300961314560154;
    msg.cacc = 0.24890726332944502;

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
    msg.setTimeStamp(0.9621106388998047);
    msg.setSource(50308U);
    msg.setSourceEntity(98U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(203U);
    msg.id = 60U;
    msg.value = 0.4454979708473962;

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
    msg.setTimeStamp(0.44211833751740426);
    msg.setSource(14899U);
    msg.setSourceEntity(139U);
    msg.setDestination(469U);
    msg.setDestinationEntity(223U);
    msg.id = 243U;
    msg.value = 0.8475477077926358;

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
    msg.setTimeStamp(0.7943167475501577);
    msg.setSource(56947U);
    msg.setSourceEntity(229U);
    msg.setDestination(3560U);
    msg.setDestinationEntity(42U);
    msg.id = 102U;
    msg.value = 0.8310361146611005;

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
    msg.setTimeStamp(0.3420851637636366);
    msg.setSource(95U);
    msg.setSourceEntity(61U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(109U);
    msg.x = 0.5233183528607022;
    msg.y = 0.4032654176675824;
    msg.z = 0.10409064389040446;
    msg.phi = 0.9619701511094263;
    msg.theta = 0.8875317016723359;
    msg.psi = 0.2788518635258874;

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
    msg.setTimeStamp(0.786857066573283);
    msg.setSource(51885U);
    msg.setSourceEntity(27U);
    msg.setDestination(837U);
    msg.setDestinationEntity(164U);
    msg.x = 0.525604002160002;
    msg.y = 0.6308003844759322;
    msg.z = 0.856442968736014;
    msg.phi = 0.654500069052826;
    msg.theta = 0.8903516568066533;
    msg.psi = 0.508716159091277;

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
    msg.setTimeStamp(0.7706045318066821);
    msg.setSource(48073U);
    msg.setSourceEntity(33U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(154U);
    msg.x = 0.8568750740895734;
    msg.y = 0.4995003212998369;
    msg.z = 0.9986385989822686;
    msg.phi = 0.7584206251943649;
    msg.theta = 0.7020425821287225;
    msg.psi = 0.4894558341957622;

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
    msg.setTimeStamp(0.647693173013849);
    msg.setSource(6747U);
    msg.setSourceEntity(116U);
    msg.setDestination(22627U);
    msg.setDestinationEntity(186U);
    msg.beam_width = 0.19547187431357826;
    msg.beam_height = 0.04855374948701541;

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
    msg.setTimeStamp(0.8360874317145929);
    msg.setSource(54248U);
    msg.setSourceEntity(153U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(92U);
    msg.beam_width = 0.41118119226411953;
    msg.beam_height = 0.22633374571537668;

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
    msg.setTimeStamp(0.8945562912916457);
    msg.setSource(52113U);
    msg.setSourceEntity(237U);
    msg.setDestination(36918U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.2118503733764051;
    msg.beam_height = 0.9270033153672196;

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
    msg.setTimeStamp(0.2790862839590569);
    msg.setSource(25374U);
    msg.setSourceEntity(96U);
    msg.setDestination(19345U);
    msg.setDestinationEntity(120U);
    msg.sane = 195U;

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
    msg.setTimeStamp(0.28124292167763565);
    msg.setSource(39405U);
    msg.setSourceEntity(199U);
    msg.setDestination(13768U);
    msg.setDestinationEntity(172U);
    msg.sane = 148U;

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
    msg.setTimeStamp(0.49713476213292973);
    msg.setSource(37163U);
    msg.setSourceEntity(80U);
    msg.setDestination(29284U);
    msg.setDestinationEntity(168U);
    msg.sane = 15U;

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
    msg.setTimeStamp(0.07492309684278986);
    msg.setSource(3014U);
    msg.setSourceEntity(47U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(68U);
    msg.id = 146U;
    msg.zoom = 93U;
    msg.action = 15U;

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
    msg.setTimeStamp(0.2724854960326948);
    msg.setSource(576U);
    msg.setSourceEntity(15U);
    msg.setDestination(56473U);
    msg.setDestinationEntity(179U);
    msg.id = 100U;
    msg.zoom = 225U;
    msg.action = 79U;

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
    msg.setTimeStamp(0.006715704442482373);
    msg.setSource(42176U);
    msg.setSourceEntity(189U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(39U);
    msg.id = 121U;
    msg.zoom = 96U;
    msg.action = 21U;

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
    msg.setTimeStamp(0.20974082280886686);
    msg.setSource(32080U);
    msg.setSourceEntity(183U);
    msg.setDestination(13049U);
    msg.setDestinationEntity(178U);
    msg.id = 105U;
    msg.value = 0.39954272920443;

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
    msg.setTimeStamp(0.9147819033734881);
    msg.setSource(24816U);
    msg.setSourceEntity(42U);
    msg.setDestination(47635U);
    msg.setDestinationEntity(174U);
    msg.id = 205U;
    msg.value = 0.4379538910350188;

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
    msg.setTimeStamp(0.9064060786579736);
    msg.setSource(41194U);
    msg.setSourceEntity(36U);
    msg.setDestination(24482U);
    msg.setDestinationEntity(157U);
    msg.id = 156U;
    msg.value = 0.22574563831769123;

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
    msg.setTimeStamp(0.07104595661006807);
    msg.setSource(34739U);
    msg.setSourceEntity(77U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(151U);
    msg.id = 60U;
    msg.value = 0.797736554087801;

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
    msg.setTimeStamp(0.2483443378267951);
    msg.setSource(38205U);
    msg.setSourceEntity(6U);
    msg.setDestination(41171U);
    msg.setDestinationEntity(116U);
    msg.id = 57U;
    msg.value = 0.7547157023359446;

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
    msg.setTimeStamp(0.5910596946534846);
    msg.setSource(58860U);
    msg.setSourceEntity(94U);
    msg.setDestination(41142U);
    msg.setDestinationEntity(195U);
    msg.id = 139U;
    msg.value = 0.39726557518602124;

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
    msg.setTimeStamp(0.6523907642563676);
    msg.setSource(46320U);
    msg.setSourceEntity(184U);
    msg.setDestination(3046U);
    msg.setDestinationEntity(156U);
    msg.id = 162U;
    msg.angle = 0.5664945535165149;

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
    msg.setTimeStamp(0.28339383440910526);
    msg.setSource(55432U);
    msg.setSourceEntity(125U);
    msg.setDestination(2855U);
    msg.setDestinationEntity(186U);
    msg.id = 161U;
    msg.angle = 0.3445791750859031;

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
    msg.setTimeStamp(0.15464459591238977);
    msg.setSource(28024U);
    msg.setSourceEntity(234U);
    msg.setDestination(17086U);
    msg.setDestinationEntity(49U);
    msg.id = 167U;
    msg.angle = 0.22575761819853013;

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
    msg.setTimeStamp(0.44771435397257775);
    msg.setSource(32152U);
    msg.setSourceEntity(179U);
    msg.setDestination(31928U);
    msg.setDestinationEntity(71U);
    msg.op = 204U;
    msg.actions.assign("BGELDETFRPWJPCWLTXGZALGRLOVJ");

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
    msg.setTimeStamp(0.647271327293971);
    msg.setSource(18884U);
    msg.setSourceEntity(140U);
    msg.setDestination(11067U);
    msg.setDestinationEntity(155U);
    msg.op = 193U;
    msg.actions.assign("RZYGIMTEHPLXHKDYHFKWUNVZNYHWPKWMAENWKIYZXUGJFRPRPXOIQHX");

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
    msg.setTimeStamp(0.31448642329313614);
    msg.setSource(8414U);
    msg.setSourceEntity(122U);
    msg.setDestination(3639U);
    msg.setDestinationEntity(114U);
    msg.op = 232U;
    msg.actions.assign("OCXFKJYZZDARTMRCOIHUOKLRTYSVPUQSQSHJSXBAMFVPXGOAANTFJOUUISSPHIOMIQMQNDSKPDFLFUFMKRIUBHPDSLNKQXGHYXTQWCBWLZZLVBJLEGCNUTXELRINPXACQJZTKRVZS");

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
    msg.setTimeStamp(0.6410427364522852);
    msg.setSource(57276U);
    msg.setSourceEntity(55U);
    msg.setDestination(59902U);
    msg.setDestinationEntity(101U);
    msg.actions.assign("FMFKJABXQQSUSIDYTAWLGSHFJLEUGTHAJPRKABHAHXHUEJUWRYCLSOZKYSFSZWMBYWEVYCEZNTAIILPGHRJOBNPXNTGLMNVJLTDICOHJUIKSIUQGUSPBAKQKIONXQMFZGQOOZ");

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
    msg.setTimeStamp(0.7940292392315216);
    msg.setSource(30221U);
    msg.setSourceEntity(231U);
    msg.setDestination(34493U);
    msg.setDestinationEntity(198U);
    msg.actions.assign("CSZZJKHMFKE");

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
    msg.setTimeStamp(0.03783173037151644);
    msg.setSource(60972U);
    msg.setSourceEntity(13U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(162U);
    msg.actions.assign("UGIXYUPXSSUAJHLCCADRWFHINPCXKFYEIRDFBEMLYWYCDQJDVZSFYVPZBGA");

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
    msg.setTimeStamp(0.20016103315368694);
    msg.setSource(35644U);
    msg.setSourceEntity(215U);
    msg.setDestination(9625U);
    msg.setDestinationEntity(220U);
    msg.button = 198U;
    msg.value = 27U;

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
    msg.setTimeStamp(0.6948952315108188);
    msg.setSource(14755U);
    msg.setSourceEntity(56U);
    msg.setDestination(35712U);
    msg.setDestinationEntity(161U);
    msg.button = 173U;
    msg.value = 29U;

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
    msg.setTimeStamp(0.8199176389193649);
    msg.setSource(54524U);
    msg.setSourceEntity(206U);
    msg.setDestination(52913U);
    msg.setDestinationEntity(100U);
    msg.button = 28U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.9897202051714857);
    msg.setSource(1476U);
    msg.setSourceEntity(158U);
    msg.setDestination(54884U);
    msg.setDestinationEntity(98U);
    msg.op = 136U;
    msg.text.assign("GMJDLDWEFZVZVDLZIFSRGPVTCYIGKYGZSSLJBMFCKZEZVQAQMCOCAXYTFXTFQJFEPOIQPIOCLGOHEAPHHIHIUTKPDUHMQYTXZEFKUWRNGTMEQVWNNTXVQ");

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
    msg.setTimeStamp(0.939756578443454);
    msg.setSource(10632U);
    msg.setSourceEntity(62U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(111U);
    msg.op = 78U;
    msg.text.assign("QURZYSPVERIVJTOUKTPUHJHLLSVYHBFTEWJWTOSHFRTXXNMVBVFMGADOJMGEXFZTQSNVAKMNMQFJISDBQKPCOKYUOQKQJBBLEQCUHMPXIKTNLJOQWFXUGGXZYWKBXDFOLSEMPZEKFERXSRKDKDGFHYHRYVWLC");

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
    msg.setTimeStamp(0.6226240130161464);
    msg.setSource(33101U);
    msg.setSourceEntity(94U);
    msg.setDestination(22095U);
    msg.setDestinationEntity(180U);
    msg.op = 215U;
    msg.text.assign("YQXRVWESMMTDLMOFIAYUUHQEKKPDLTPVKBUQJPSGIKIZVRJNEAXKFYWDXYESQGCTAROYLGQZLEEVAJAHVCFPUCNBWRUBUHTGLLYIQJPFUIBKWSKFTZZNCWYJLXGOYHWVACFSQQIHDOAWMSYJSELNDMRPHXVTBQOIEDHRIPAMTFSRCGJLEMUJWHOWOMGXXTXFSKFXHUVPWMNNUYBDCCAORZBPIBVZZGZDIPNOCZRNLVDRCABFDOJHGKZTNEMNXK");

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
    msg.setTimeStamp(0.3463704236284725);
    msg.setSource(50375U);
    msg.setSourceEntity(144U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(15U);
    msg.op = 235U;
    msg.time_remain = 0.9464984593940049;
    msg.sched_time = 0.985137809924286;

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
    msg.setTimeStamp(0.2716017490003293);
    msg.setSource(16656U);
    msg.setSourceEntity(150U);
    msg.setDestination(25464U);
    msg.setDestinationEntity(123U);
    msg.op = 98U;
    msg.time_remain = 0.02969761701068907;
    msg.sched_time = 0.3327396456299243;

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
    msg.setTimeStamp(0.04123699439576356);
    msg.setSource(25492U);
    msg.setSourceEntity(138U);
    msg.setDestination(15851U);
    msg.setDestinationEntity(96U);
    msg.op = 26U;
    msg.time_remain = 0.18431031716100565;
    msg.sched_time = 0.43141539265668116;

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
    msg.setTimeStamp(0.5770676088621162);
    msg.setSource(26920U);
    msg.setSourceEntity(82U);
    msg.setDestination(16296U);
    msg.setDestinationEntity(94U);
    msg.name.assign("BRXICCTEJFKBQSZQWKZVLHMHOPZPCXYWRUWEBBLALYGGSCBBAAKJDBFU");
    msg.op = 198U;
    msg.sched_time = 0.986907117339126;

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
    msg.setTimeStamp(0.5955607858232169);
    msg.setSource(30032U);
    msg.setSourceEntity(108U);
    msg.setDestination(11193U);
    msg.setDestinationEntity(179U);
    msg.name.assign("PDRENYVYSBANEJYARGUCULSKGNINLDCIRVFNHXHGOZDIBESZS");
    msg.op = 128U;
    msg.sched_time = 0.4149664594892011;

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
    msg.setTimeStamp(0.7935523978819611);
    msg.setSource(8864U);
    msg.setSourceEntity(125U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(243U);
    msg.name.assign("BQYFINQVCIUNOVJXMOZHWCXEVTTRGKDIOICAJKBJXYSWPXFFUKTPQCHXJIGKECDFLMJQDSOAMYTJDYXHJLBWOVQZZVOAZWPVBMBZDOKNTCMMETDUKBGEPAJREHAFQSMGGPHG");
    msg.op = 215U;
    msg.sched_time = 0.451176110088772;

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
    msg.setTimeStamp(0.903386936374199);
    msg.setSource(41915U);
    msg.setSourceEntity(56U);
    msg.setDestination(26759U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.21750516320537627);
    msg.setSource(3676U);
    msg.setSourceEntity(92U);
    msg.setDestination(59736U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.9473711251521839);
    msg.setSource(53918U);
    msg.setSourceEntity(30U);
    msg.setDestination(49898U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.9511009371276551);
    msg.setSource(18819U);
    msg.setSourceEntity(145U);
    msg.setDestination(19982U);
    msg.setDestinationEntity(61U);
    msg.name.assign("AUHCPDSLUCQEJWLOBPODGGMYOLZYVHSSERMIETRPQQFAWUNFSXBDWQBIREFCIMCFARXGUIZBQPYXRN");
    msg.state = 222U;

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
    msg.setTimeStamp(0.7213237582112433);
    msg.setSource(61130U);
    msg.setSourceEntity(61U);
    msg.setDestination(55088U);
    msg.setDestinationEntity(123U);
    msg.name.assign("EHXKLFZJPLFBWCUIUGZYYPQCDNBUXTEOQPMXJUDDEMSVFSHZTOTCHPYGGMQJZWAXZIQWVMXHLYLSSTHFONVARGSPYPXTBWRXZCFKAHJOTKTAJDBUCZBGKQLDWTPWQLUWFIADRBGRR");
    msg.state = 80U;

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
    msg.setTimeStamp(0.755644512790401);
    msg.setSource(61587U);
    msg.setSourceEntity(156U);
    msg.setDestination(50306U);
    msg.setDestinationEntity(106U);
    msg.name.assign("BBLXPVTHUURWYONZJWZGRGPMTVQAPGKQ");
    msg.state = 252U;

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
    msg.setTimeStamp(0.7912311589492979);
    msg.setSource(419U);
    msg.setSourceEntity(110U);
    msg.setDestination(15838U);
    msg.setDestinationEntity(40U);
    msg.name.assign("AZLLXOTKMRYBHZABMCKOMZVAFWWQZUBSBHNDLNDOCXPSSZVIPEJGQVWFNJPIOMFVSFXSBQFGUDJTTQPEYNCFQSJGSKSHXXJKAVIDWVLVETRIDQXZQLSLFWGCGECDOEOUEENEIKQAPYCGJUBDPIFPMEOBHZAQYXCBDIUXPMNURZYMKAARKYJAJHCMRLOWWXCPONGLFQWYVTTTOIUTNJJVIGDTZFYZHHHGE");
    msg.value = 247U;

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
    msg.setTimeStamp(0.9574274470048395);
    msg.setSource(37276U);
    msg.setSourceEntity(139U);
    msg.setDestination(49182U);
    msg.setDestinationEntity(46U);
    msg.name.assign("KESWXCFFAZBGHWUOYMBOONDQQHSELUZCNCDJHLJZKGHBVEIDXATDIYQHOUMSPDYQDJQZOVRAWAXBMIJZGQSRSWTNONTRFAITBKHCZVNFEWHFJURDSBEM");
    msg.value = 180U;

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
    msg.setTimeStamp(0.21651308176685646);
    msg.setSource(15523U);
    msg.setSourceEntity(170U);
    msg.setDestination(43160U);
    msg.setDestinationEntity(249U);
    msg.name.assign("HSOMUURSAHJBVEAXKWIMJQGTRGXZTPFIGTEYKWUPPRPCCDOFHAFABENJGTJKDJXTKKPDHZCVQEQFYQRLORGWKOLSXCHGGI");
    msg.value = 90U;

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
    msg.setTimeStamp(0.12072714006922713);
    msg.setSource(64322U);
    msg.setSourceEntity(16U);
    msg.setDestination(40169U);
    msg.setDestinationEntity(236U);
    msg.name.assign("GLKYMBLFOXQCJDWCFCRSYEIZTKMAHVNESSAUBHBMTFPDKGDXEKMBSAZJVQFZFWXLRJLGDCZMYCJHBQGZVJOATYIVRBJWCBIFQPMXLBKIYWXXTCSCPZMRNKTXYUPLTYTEQUEDUVRFIKJEGZTJDQYIVVVRODSNOGWBMHKMNXEVFAEOAHYQLJHGXQGPNWXVJPHRDOUNKPLWEBQHDASQIIAEPYRTDWAON");

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
    msg.setTimeStamp(0.6573864229545934);
    msg.setSource(57173U);
    msg.setSourceEntity(23U);
    msg.setDestination(57718U);
    msg.setDestinationEntity(1U);
    msg.name.assign("OSEIXTRBXRYQBCPAGQFHIUZKTQJSNNPHQXCTWWQOIAJQWPEICJVOCWMUDIMBLKYFGDZCCYGMZVGHVPDIBYAVFWDUKTEJVSZUZFHYJDHDZHRXJTPVXJUE");

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
    msg.setTimeStamp(0.1326679525904232);
    msg.setSource(9499U);
    msg.setSourceEntity(58U);
    msg.setDestination(32900U);
    msg.setDestinationEntity(21U);
    msg.name.assign("JYYMHUVBDJZNAZIBWIRVGFFWWVZUJDKPGQRHVXDRRHUNWGHTFLEIMKKTHNFIESCQOJBOXFXCJARYVJTTEUDRBEEHDBAFKVAEDLJMRXXLNNEPKAGMOGNBMJXSYPZYCDPGDLZTFISTQQFOZWCURGXBALWAULXUYHECPNEGQNGAGOCXIYEUASQQYWVMKIDJTOBZPNKHPVCFOOILNZSWTMQMVJ");

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
    msg.setTimeStamp(0.45059486283044603);
    msg.setSource(19558U);
    msg.setSourceEntity(194U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(183U);
    msg.name.assign("YBYFWXKTEDWSBKOPLFGIAFHJLLENTMGEDJPMELIOVIEKRGJCXNTXMDKZMWSZMAUAFDOJZABQSEXNUENIYEAIGBIBKVTDODRPQEWKQROPORNKYHXBPECZUPNISUTWOJVGJHCRVALIPVDLKHRFSPHQVQZAYYJMZUSPCOMWUCFSQTDGICWRQVNCU");
    msg.value = 247U;

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
    msg.setTimeStamp(0.3372363051664825);
    msg.setSource(30786U);
    msg.setSourceEntity(136U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(219U);
    msg.name.assign("KOSRFINHGPFWNHNCLXCZBDCBXDAKXJHOOITNMSDOCJCTYVTGKJWBMHSYGTUQKXUIOJTBLDVMQFEDFTGNDQIAEMHFSIIBLFMRTVBUFQN");
    msg.value = 32U;

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
    msg.setTimeStamp(0.5133372797332678);
    msg.setSource(12295U);
    msg.setSourceEntity(87U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(186U);
    msg.name.assign("LSRQMBMGFJJTJSGEGMLFCJRZWJWURFHGBQXUYMFKLZGPIANXOLCKEQNAKAWODXHTWHUSFPCTJHCQOEHWRQWNSNVOBHKYUSLDLUKEFLYNYXDUGPBWSTMCRMTFIYVMFVXZHOWKMPKTDIUKCPSBZLNAYLZUVAPCDPYLDVBDQIZJIKQHIORSYDGETNZAMYIVGZZUKTUNOXVNEIFBHDZTEVRRJPIBGVNACCODQYEM");
    msg.value = 74U;

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
    msg.setTimeStamp(0.9724948366194162);
    msg.setSource(49941U);
    msg.setSourceEntity(176U);
    msg.setDestination(42086U);
    msg.setDestinationEntity(60U);
    msg.id = 228U;
    msg.period = 256027889U;
    msg.duty_cycle = 1471764522U;

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
    msg.setTimeStamp(0.36699967449859117);
    msg.setSource(12475U);
    msg.setSourceEntity(33U);
    msg.setDestination(28562U);
    msg.setDestinationEntity(228U);
    msg.id = 45U;
    msg.period = 4161406074U;
    msg.duty_cycle = 2266041625U;

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
    msg.setTimeStamp(0.6619345722563302);
    msg.setSource(21855U);
    msg.setSourceEntity(215U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(215U);
    msg.id = 240U;
    msg.period = 506717226U;
    msg.duty_cycle = 3386544830U;

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
    msg.setTimeStamp(0.5549779092579052);
    msg.setSource(30458U);
    msg.setSourceEntity(237U);
    msg.setDestination(33545U);
    msg.setDestinationEntity(119U);
    msg.id = 75U;
    msg.period = 3470612390U;
    msg.duty_cycle = 3546040274U;

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
    msg.setTimeStamp(0.7453736192735626);
    msg.setSource(62103U);
    msg.setSourceEntity(43U);
    msg.setDestination(18801U);
    msg.setDestinationEntity(98U);
    msg.id = 113U;
    msg.period = 2908699678U;
    msg.duty_cycle = 3822512836U;

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
    msg.setTimeStamp(0.5277340684711868);
    msg.setSource(10527U);
    msg.setSourceEntity(87U);
    msg.setDestination(62796U);
    msg.setDestinationEntity(20U);
    msg.id = 208U;
    msg.period = 1506590355U;
    msg.duty_cycle = 1706200477U;

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
    msg.setTimeStamp(0.2729534131443345);
    msg.setSource(45444U);
    msg.setSourceEntity(139U);
    msg.setDestination(32279U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.025168674781953282;
    msg.lon = 0.844380362972607;
    msg.height = 0.018495955183421287;
    msg.x = 0.6992291247356008;
    msg.y = 0.8134766930854772;
    msg.z = 0.5095056930839725;
    msg.phi = 0.6819011533481814;
    msg.theta = 0.7370093128979559;
    msg.psi = 0.8192541552621759;
    msg.u = 0.6653716712957796;
    msg.v = 0.2589283069334808;
    msg.w = 0.44901470808591504;
    msg.vx = 0.6138696697066132;
    msg.vy = 0.7657795926783894;
    msg.vz = 0.7684253336710632;
    msg.p = 0.5858357249968752;
    msg.q = 0.7791290364119867;
    msg.r = 0.8726410654651815;
    msg.depth = 0.4221781978040281;
    msg.alt = 0.8154723995731312;

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
    msg.setTimeStamp(0.9581482543617216);
    msg.setSource(23622U);
    msg.setSourceEntity(151U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.005249590909227053;
    msg.lon = 0.6791271769688727;
    msg.height = 0.6232860815643384;
    msg.x = 0.12231587790904208;
    msg.y = 0.12801286597363948;
    msg.z = 0.9009261440151278;
    msg.phi = 0.4475267386498747;
    msg.theta = 0.3611997521723296;
    msg.psi = 0.808892090311065;
    msg.u = 0.47295981446394963;
    msg.v = 0.049236387483402866;
    msg.w = 0.13512040658375357;
    msg.vx = 0.5617954670454024;
    msg.vy = 0.08547553991791312;
    msg.vz = 0.4808191314660276;
    msg.p = 0.06670113827234203;
    msg.q = 0.7632256591174392;
    msg.r = 0.8929461719793819;
    msg.depth = 0.14869137599264526;
    msg.alt = 0.060119798982406825;

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
    msg.setTimeStamp(0.9771030063198237);
    msg.setSource(34716U);
    msg.setSourceEntity(106U);
    msg.setDestination(17026U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.602504764325916;
    msg.lon = 0.22117114405873972;
    msg.height = 0.07563929344439624;
    msg.x = 0.46298341957678235;
    msg.y = 0.7435796781753633;
    msg.z = 0.8089369197780683;
    msg.phi = 0.28216380146105546;
    msg.theta = 0.7705727295090588;
    msg.psi = 0.33182904541887626;
    msg.u = 0.02644469504654623;
    msg.v = 0.9946494105858182;
    msg.w = 0.42190330384160013;
    msg.vx = 0.5958310560344752;
    msg.vy = 0.46293991390836;
    msg.vz = 0.3063678725478871;
    msg.p = 0.07159805079201043;
    msg.q = 0.660479012282021;
    msg.r = 0.5601886351594165;
    msg.depth = 0.46032253852704363;
    msg.alt = 0.9385534793871734;

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
    msg.setTimeStamp(0.7932633327230367);
    msg.setSource(59953U);
    msg.setSourceEntity(213U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(26U);
    msg.x = 0.797421603282998;
    msg.y = 0.8392322886329596;
    msg.z = 0.11125172340105993;

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
    msg.setTimeStamp(0.6271814552044513);
    msg.setSource(63284U);
    msg.setSourceEntity(194U);
    msg.setDestination(49354U);
    msg.setDestinationEntity(72U);
    msg.x = 0.5884226196399963;
    msg.y = 0.5928213632267447;
    msg.z = 0.8458247998299742;

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
    msg.setTimeStamp(0.7685210294908038);
    msg.setSource(38643U);
    msg.setSourceEntity(141U);
    msg.setDestination(62231U);
    msg.setDestinationEntity(202U);
    msg.x = 0.7009055864963136;
    msg.y = 0.8441675573813338;
    msg.z = 0.18950836574677699;

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
    msg.setTimeStamp(0.8400701901660378);
    msg.setSource(27977U);
    msg.setSourceEntity(13U);
    msg.setDestination(29643U);
    msg.setDestinationEntity(185U);
    msg.value = 0.37998363191672424;

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
    msg.setTimeStamp(0.3243707257881874);
    msg.setSource(39767U);
    msg.setSourceEntity(218U);
    msg.setDestination(41162U);
    msg.setDestinationEntity(118U);
    msg.value = 0.634842078410694;

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
    msg.setTimeStamp(0.8570034616971913);
    msg.setSource(37826U);
    msg.setSourceEntity(209U);
    msg.setDestination(34491U);
    msg.setDestinationEntity(84U);
    msg.value = 0.48245405709108324;

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
    msg.setTimeStamp(0.07094453316020166);
    msg.setSource(13146U);
    msg.setSourceEntity(192U);
    msg.setDestination(9375U);
    msg.setDestinationEntity(79U);
    msg.value = 0.978908757001252;

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
    msg.setTimeStamp(0.19073915234837557);
    msg.setSource(4838U);
    msg.setSourceEntity(138U);
    msg.setDestination(64729U);
    msg.setDestinationEntity(130U);
    msg.value = 0.497318513453321;

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
    msg.setTimeStamp(0.029713116844901855);
    msg.setSource(41842U);
    msg.setSourceEntity(67U);
    msg.setDestination(16674U);
    msg.setDestinationEntity(248U);
    msg.value = 0.11481218335916266;

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
    msg.setTimeStamp(0.18251912187870145);
    msg.setSource(24027U);
    msg.setSourceEntity(59U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(52U);
    msg.x = 0.42886918135451846;
    msg.y = 0.35283775737991585;
    msg.z = 0.3730129808542598;
    msg.phi = 0.28137383939748295;
    msg.theta = 0.24868823389943795;
    msg.psi = 0.3390652988680789;
    msg.p = 0.9419390126640877;
    msg.q = 0.26867117874727264;
    msg.r = 0.8637969736132273;
    msg.u = 0.07415491264000296;
    msg.v = 0.4468071917967912;
    msg.w = 0.7381366810574563;
    msg.bias_psi = 0.7152036379888546;
    msg.bias_r = 0.9084058174564162;

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
    msg.setTimeStamp(0.6037320262125236);
    msg.setSource(29329U);
    msg.setSourceEntity(103U);
    msg.setDestination(62370U);
    msg.setDestinationEntity(24U);
    msg.x = 0.7658722756642645;
    msg.y = 0.3236868252432983;
    msg.z = 0.7478720268501864;
    msg.phi = 0.8715585152382603;
    msg.theta = 0.5774832652695323;
    msg.psi = 0.7658869905807638;
    msg.p = 0.7728564842778234;
    msg.q = 0.9069436387764609;
    msg.r = 0.1276683572613363;
    msg.u = 0.9534328262276971;
    msg.v = 0.05181755857133674;
    msg.w = 0.1244125192386083;
    msg.bias_psi = 0.7438780439301491;
    msg.bias_r = 0.3771365597063294;

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
    msg.setTimeStamp(0.23836217079695066);
    msg.setSource(58193U);
    msg.setSourceEntity(67U);
    msg.setDestination(50618U);
    msg.setDestinationEntity(249U);
    msg.x = 0.7943997125301986;
    msg.y = 0.5648837207495537;
    msg.z = 0.9921398635335359;
    msg.phi = 0.6102324922147913;
    msg.theta = 0.27529951647628315;
    msg.psi = 0.6857841182027604;
    msg.p = 0.9686173603452383;
    msg.q = 0.8197570301928302;
    msg.r = 0.18757565956107525;
    msg.u = 0.45703216549808123;
    msg.v = 0.6199277116560273;
    msg.w = 0.6813565141056761;
    msg.bias_psi = 0.13162997408492494;
    msg.bias_r = 0.7101491329374876;

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
    msg.setTimeStamp(0.7446722892346715);
    msg.setSource(48420U);
    msg.setSourceEntity(177U);
    msg.setDestination(6419U);
    msg.setDestinationEntity(134U);
    msg.bias_psi = 0.57627080238436;
    msg.bias_r = 0.3790075471807034;
    msg.cog = 0.7665726156426973;
    msg.cyaw = 0.9883329790357877;
    msg.lbl_rej_level = 0.6512192398479342;
    msg.gps_rej_level = 0.3184229191454063;
    msg.custom_x = 0.2899443904154323;
    msg.custom_y = 0.4653996210560386;
    msg.custom_z = 0.509304978971334;

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
    msg.setTimeStamp(0.7374491167947171);
    msg.setSource(55888U);
    msg.setSourceEntity(154U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(228U);
    msg.bias_psi = 0.3236555105523601;
    msg.bias_r = 0.2737769196495412;
    msg.cog = 0.2490586441376963;
    msg.cyaw = 0.3242716569396955;
    msg.lbl_rej_level = 0.0241656829733482;
    msg.gps_rej_level = 0.4474821024297182;
    msg.custom_x = 0.8035552587660126;
    msg.custom_y = 0.020360159731442118;
    msg.custom_z = 0.8749501740284128;

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
    msg.setTimeStamp(0.21142422849776465);
    msg.setSource(40389U);
    msg.setSourceEntity(88U);
    msg.setDestination(44451U);
    msg.setDestinationEntity(128U);
    msg.bias_psi = 0.1521348736066339;
    msg.bias_r = 0.21161019350033694;
    msg.cog = 0.18465842949972477;
    msg.cyaw = 0.6089903658439868;
    msg.lbl_rej_level = 0.6166976806109166;
    msg.gps_rej_level = 0.538103568048126;
    msg.custom_x = 0.6071243058776954;
    msg.custom_y = 0.5015049752134779;
    msg.custom_z = 0.06483940960476531;

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
    msg.setTimeStamp(0.4202921858992702);
    msg.setSource(21209U);
    msg.setSourceEntity(167U);
    msg.setDestination(39983U);
    msg.setDestinationEntity(42U);
    msg.utc_time = 0.8509522681949336;
    msg.reason = 177U;

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
    msg.setTimeStamp(0.03663559841238784);
    msg.setSource(48456U);
    msg.setSourceEntity(82U);
    msg.setDestination(45436U);
    msg.setDestinationEntity(189U);
    msg.utc_time = 0.4685738251198607;
    msg.reason = 193U;

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
    msg.setTimeStamp(0.4972139766485081);
    msg.setSource(25108U);
    msg.setSourceEntity(129U);
    msg.setDestination(9311U);
    msg.setDestinationEntity(225U);
    msg.utc_time = 0.1328502354790455;
    msg.reason = 222U;

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
    msg.setTimeStamp(0.2800666690477097);
    msg.setSource(45743U);
    msg.setSourceEntity(79U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(159U);
    msg.id = 174U;
    msg.range = 0.05199241718829639;
    msg.acceptance = 112U;

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
    msg.setTimeStamp(0.4978613290086804);
    msg.setSource(39235U);
    msg.setSourceEntity(177U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(57U);
    msg.id = 197U;
    msg.range = 0.6241758886436338;
    msg.acceptance = 129U;

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
    msg.setTimeStamp(0.0618739700613854);
    msg.setSource(34826U);
    msg.setSourceEntity(70U);
    msg.setDestination(42815U);
    msg.setDestinationEntity(168U);
    msg.id = 21U;
    msg.range = 0.09497321994475083;
    msg.acceptance = 62U;

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
    msg.setTimeStamp(0.4297830025343723);
    msg.setSource(23893U);
    msg.setSourceEntity(50U);
    msg.setDestination(52151U);
    msg.setDestinationEntity(153U);
    msg.type = 182U;
    msg.reason = 87U;
    msg.value = 0.5696747808334872;
    msg.timestep = 0.44609974544876174;

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
    msg.setTimeStamp(0.8823670462458426);
    msg.setSource(6316U);
    msg.setSourceEntity(24U);
    msg.setDestination(19590U);
    msg.setDestinationEntity(226U);
    msg.type = 2U;
    msg.reason = 49U;
    msg.value = 0.15297141726774133;
    msg.timestep = 0.6501750596055927;

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
    msg.setTimeStamp(0.18506535846757388);
    msg.setSource(10400U);
    msg.setSourceEntity(116U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(59U);
    msg.type = 155U;
    msg.reason = 142U;
    msg.value = 0.6425592652670612;
    msg.timestep = 0.6526795143367422;

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
    msg.setTimeStamp(0.35519995483567623);
    msg.setSource(50757U);
    msg.setSourceEntity(107U);
    msg.setDestination(54634U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.9978859615984623);
    msg.setSource(11U);
    msg.setSourceEntity(241U);
    msg.setDestination(43246U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.3357498984585827);
    msg.setSource(7495U);
    msg.setSourceEntity(107U);
    msg.setDestination(49145U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.5217770261217454);
    msg.setSource(3508U);
    msg.setSourceEntity(188U);
    msg.setDestination(52372U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OBKKIXUQWAJERUCEWIABKEYXSVHYLPCBBYUQZUMNGFXWJGONIRPQQETTIKLGGBXCPDMVOLHFLAKNLTDKXGBSXCLZRWNRVHJYPLSYUJPSKUMEFEDKHWSZRQKCYDJTIFGPVWEFITHHSZJHUDVFODTENTHLRQMXXEZRJIWOUHZMODVESYAOWONPCORPCAQBFGLQPWJNBYAMDAIVZMXAWNDVPVDUXNOICMKSTZRZLFCTMYMBVAZCASGGRUSQFJT");
    tmp_msg_0.lat = 0.8315121625734405;
    tmp_msg_0.lon = 0.11804440483455936;
    tmp_msg_0.depth = 0.9619136073209765;
    tmp_msg_0.query_channel = 30U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 167U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3843573013159256;
    msg.y = 0.5685138936842626;
    msg.var_x = 0.2253524153069193;
    msg.var_y = 0.232279031120329;
    msg.distance = 0.0010804648022573193;

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
    msg.setTimeStamp(0.4614499924255141);
    msg.setSource(59615U);
    msg.setSourceEntity(103U);
    msg.setDestination(16098U);
    msg.setDestinationEntity(173U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JQIAUJDOPVCYILZXLETQVAYGMJYXMQFEQNWBATHEGNNFDTWUADOCJAZFAMLUGXRE");
    tmp_msg_0.lat = 0.4195625871311186;
    tmp_msg_0.lon = 0.667200654869543;
    tmp_msg_0.depth = 0.8047783930812362;
    tmp_msg_0.query_channel = 237U;
    tmp_msg_0.reply_channel = 96U;
    tmp_msg_0.transponder_delay = 65U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.041932183638949905;
    msg.y = 0.9266054933278453;
    msg.var_x = 0.9125842095147189;
    msg.var_y = 0.16715833911017364;
    msg.distance = 0.723058710080352;

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
    msg.setTimeStamp(0.9754929707210608);
    msg.setSource(21189U);
    msg.setSourceEntity(213U);
    msg.setDestination(14445U);
    msg.setDestinationEntity(119U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZCTBYVIJJLXTINYDEDES");
    tmp_msg_0.lat = 0.8966517585709214;
    tmp_msg_0.lon = 0.25963729722826656;
    tmp_msg_0.depth = 0.12297903192461068;
    tmp_msg_0.query_channel = 2U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 13U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7078658264977896;
    msg.y = 0.45958980733183086;
    msg.var_x = 0.6824073525054922;
    msg.var_y = 0.680645872450548;
    msg.distance = 0.842083824228267;

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
    msg.setTimeStamp(0.8530695749320825);
    msg.setSource(42713U);
    msg.setSourceEntity(191U);
    msg.setDestination(41609U);
    msg.setDestinationEntity(237U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.8540576591077478);
    msg.setSource(40264U);
    msg.setSourceEntity(49U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(138U);
    msg.state = 199U;

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
    msg.setTimeStamp(0.8534169493297951);
    msg.setSource(63726U);
    msg.setSourceEntity(185U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(65U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.03341836650038876);
    msg.setSource(48967U);
    msg.setSourceEntity(29U);
    msg.setDestination(2863U);
    msg.setDestinationEntity(0U);
    msg.x = 0.6146713038811753;
    msg.y = 0.8091241292352496;
    msg.z = 0.7001475814875672;

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
    msg.setTimeStamp(0.0028860590130144192);
    msg.setSource(55451U);
    msg.setSourceEntity(86U);
    msg.setDestination(11770U);
    msg.setDestinationEntity(27U);
    msg.x = 0.9933251093075958;
    msg.y = 0.44849493361070136;
    msg.z = 0.6454970972288154;

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
    msg.setTimeStamp(0.9005174091201331);
    msg.setSource(50074U);
    msg.setSourceEntity(83U);
    msg.setDestination(26940U);
    msg.setDestinationEntity(39U);
    msg.x = 0.33817275406426517;
    msg.y = 0.5666446647041057;
    msg.z = 0.866083904172813;

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
    msg.setTimeStamp(0.5277728683353325);
    msg.setSource(51983U);
    msg.setSourceEntity(90U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(47U);
    msg.value = 0.6152871756891186;

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
    msg.setTimeStamp(0.3963576898363298);
    msg.setSource(62765U);
    msg.setSourceEntity(241U);
    msg.setDestination(54875U);
    msg.setDestinationEntity(102U);
    msg.value = 0.886384182094974;

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
    msg.setTimeStamp(0.9949155232953706);
    msg.setSource(36686U);
    msg.setSourceEntity(159U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6449763747774622;

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
    msg.setTimeStamp(0.4936539164906911);
    msg.setSource(45098U);
    msg.setSourceEntity(215U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(174U);
    msg.value = 0.403404046409195;
    msg.z_units = 222U;

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
    msg.setTimeStamp(0.29997196166434836);
    msg.setSource(20619U);
    msg.setSourceEntity(72U);
    msg.setDestination(52057U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5261612589052244;
    msg.z_units = 13U;

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
    msg.setTimeStamp(0.7452405927634714);
    msg.setSource(6639U);
    msg.setSourceEntity(245U);
    msg.setDestination(25223U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8534356102818476;
    msg.z_units = 104U;

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
    msg.setTimeStamp(0.37562362320535325);
    msg.setSource(30083U);
    msg.setSourceEntity(43U);
    msg.setDestination(34328U);
    msg.setDestinationEntity(212U);
    msg.value = 0.5198437303307805;
    msg.speed_units = 14U;

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
    msg.setTimeStamp(0.07022440797317409);
    msg.setSource(30382U);
    msg.setSourceEntity(37U);
    msg.setDestination(5591U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8023610740335092;
    msg.speed_units = 114U;

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
    msg.setTimeStamp(0.037172392643151086);
    msg.setSource(44923U);
    msg.setSourceEntity(39U);
    msg.setDestination(25272U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6145344520944086;
    msg.speed_units = 190U;

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
    msg.setTimeStamp(0.14284343213438633);
    msg.setSource(48880U);
    msg.setSourceEntity(129U);
    msg.setDestination(37613U);
    msg.setDestinationEntity(15U);
    msg.value = 0.22739069285933244;

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
    msg.setTimeStamp(0.5893310615336118);
    msg.setSource(47076U);
    msg.setSourceEntity(237U);
    msg.setDestination(899U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5970683269428513;

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
    msg.setTimeStamp(0.7049094956724727);
    msg.setSource(57938U);
    msg.setSourceEntity(43U);
    msg.setDestination(11514U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9235287446440618;

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
    msg.setTimeStamp(0.33971491864852366);
    msg.setSource(62422U);
    msg.setSourceEntity(49U);
    msg.setDestination(37781U);
    msg.setDestinationEntity(66U);
    msg.value = 0.38270951265510655;

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
    msg.setTimeStamp(0.6238954680576753);
    msg.setSource(62929U);
    msg.setSourceEntity(202U);
    msg.setDestination(63217U);
    msg.setDestinationEntity(105U);
    msg.value = 0.40980060023689235;

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
    msg.setTimeStamp(0.3237210559360052);
    msg.setSource(21395U);
    msg.setSourceEntity(218U);
    msg.setDestination(37403U);
    msg.setDestinationEntity(51U);
    msg.value = 0.1995946835572785;

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
    msg.setTimeStamp(0.907796626229536);
    msg.setSource(19095U);
    msg.setSourceEntity(142U);
    msg.setDestination(32906U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9937418149687788;

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
    msg.setTimeStamp(0.0405121674749509);
    msg.setSource(41037U);
    msg.setSourceEntity(168U);
    msg.setDestination(56771U);
    msg.setDestinationEntity(33U);
    msg.value = 0.3470227469562246;

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
    msg.setTimeStamp(0.6182199274808647);
    msg.setSource(62170U);
    msg.setSourceEntity(43U);
    msg.setDestination(20837U);
    msg.setDestinationEntity(54U);
    msg.value = 0.10303170916205784;

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
    msg.setTimeStamp(0.6907467916687374);
    msg.setSource(30040U);
    msg.setSourceEntity(185U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(110U);
    msg.start_lat = 0.4426171615985127;
    msg.start_lon = 0.7255817612082556;
    msg.start_z = 0.08480901896861326;
    msg.start_z_units = 63U;
    msg.end_lat = 0.4676681900804386;
    msg.end_lon = 0.41037355877660187;
    msg.end_z = 0.34210608584430313;
    msg.end_z_units = 123U;
    msg.speed = 0.7966462402375363;
    msg.speed_units = 222U;
    msg.lradius = 0.09096520656369533;
    msg.flags = 49U;

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
    msg.setTimeStamp(0.9338056670537961);
    msg.setSource(24795U);
    msg.setSourceEntity(141U);
    msg.setDestination(48589U);
    msg.setDestinationEntity(11U);
    msg.start_lat = 0.8109113293698412;
    msg.start_lon = 0.39687403126293397;
    msg.start_z = 0.2946326429736079;
    msg.start_z_units = 190U;
    msg.end_lat = 0.6539363689901342;
    msg.end_lon = 0.15332422238569499;
    msg.end_z = 0.823011070518945;
    msg.end_z_units = 161U;
    msg.speed = 0.6307484775605261;
    msg.speed_units = 237U;
    msg.lradius = 0.9664220262597413;
    msg.flags = 114U;

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
    msg.setTimeStamp(0.7915178984105521);
    msg.setSource(58832U);
    msg.setSourceEntity(15U);
    msg.setDestination(20429U);
    msg.setDestinationEntity(126U);
    msg.start_lat = 0.11087962557776831;
    msg.start_lon = 0.675389174555647;
    msg.start_z = 0.027769622055230703;
    msg.start_z_units = 80U;
    msg.end_lat = 0.80577755303043;
    msg.end_lon = 0.3089480616419339;
    msg.end_z = 0.6083199126508945;
    msg.end_z_units = 162U;
    msg.speed = 0.6798758515073704;
    msg.speed_units = 41U;
    msg.lradius = 0.6090028114333941;
    msg.flags = 170U;

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
    msg.setTimeStamp(0.7454773465602508);
    msg.setSource(36222U);
    msg.setSourceEntity(76U);
    msg.setDestination(17626U);
    msg.setDestinationEntity(8U);
    msg.x = 0.8335245159796598;
    msg.y = 0.8273947659807634;
    msg.z = 0.3433508993551786;
    msg.k = 0.5158252610722411;
    msg.m = 0.27999310566292457;
    msg.n = 0.005075737870538832;
    msg.flags = 59U;

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
    msg.setTimeStamp(0.7174915920694447);
    msg.setSource(48292U);
    msg.setSourceEntity(234U);
    msg.setDestination(19540U);
    msg.setDestinationEntity(36U);
    msg.x = 0.7918989319642391;
    msg.y = 0.15883400763879651;
    msg.z = 0.478228331446797;
    msg.k = 0.5314536638460737;
    msg.m = 0.49630369475300795;
    msg.n = 0.33078039152726435;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.4605740449258553);
    msg.setSource(45110U);
    msg.setSourceEntity(214U);
    msg.setDestination(25611U);
    msg.setDestinationEntity(85U);
    msg.x = 0.1479771093789385;
    msg.y = 0.539463225973321;
    msg.z = 0.15494133627016504;
    msg.k = 0.5957093900629066;
    msg.m = 0.7668517842788972;
    msg.n = 0.9576296737858506;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.6508850396848734);
    msg.setSource(35281U);
    msg.setSourceEntity(94U);
    msg.setDestination(50239U);
    msg.setDestinationEntity(254U);
    msg.value = 0.7425902788850559;

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
    msg.setTimeStamp(0.37893460990186734);
    msg.setSource(25167U);
    msg.setSourceEntity(25U);
    msg.setDestination(39721U);
    msg.setDestinationEntity(102U);
    msg.value = 0.03723853446906389;

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
    msg.setTimeStamp(0.4594662535428824);
    msg.setSource(31261U);
    msg.setSourceEntity(76U);
    msg.setDestination(40807U);
    msg.setDestinationEntity(54U);
    msg.value = 0.41701782199520177;

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
    msg.setTimeStamp(0.7243976586744014);
    msg.setSource(790U);
    msg.setSourceEntity(104U);
    msg.setDestination(53854U);
    msg.setDestinationEntity(224U);
    msg.u = 0.008298373359321931;
    msg.v = 0.4185300025505767;
    msg.w = 0.2587426815823649;
    msg.p = 0.07505551514642472;
    msg.q = 0.749114181526988;
    msg.r = 0.47778900410903824;
    msg.flags = 32U;

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
    msg.setTimeStamp(0.1969413455713962);
    msg.setSource(12050U);
    msg.setSourceEntity(101U);
    msg.setDestination(53401U);
    msg.setDestinationEntity(66U);
    msg.u = 0.9377621111935763;
    msg.v = 0.6189916174011892;
    msg.w = 0.8587971797360727;
    msg.p = 0.24736150387385603;
    msg.q = 0.6245840856858293;
    msg.r = 0.21676464074187707;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.8754080463015597);
    msg.setSource(26412U);
    msg.setSourceEntity(125U);
    msg.setDestination(42545U);
    msg.setDestinationEntity(247U);
    msg.u = 0.5023416960909334;
    msg.v = 0.3243111397468702;
    msg.w = 0.9817813163721614;
    msg.p = 0.1608379234201437;
    msg.q = 0.6880844480412004;
    msg.r = 0.3277532109960134;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.4561094117783385);
    msg.setSource(24490U);
    msg.setSourceEntity(84U);
    msg.setDestination(58392U);
    msg.setDestinationEntity(179U);
    msg.start_lat = 0.0035166630404012134;
    msg.start_lon = 0.4409033173850002;
    msg.start_z = 0.6070067663177884;
    msg.start_z_units = 91U;
    msg.end_lat = 0.6470878881330876;
    msg.end_lon = 0.6557204643192994;
    msg.end_z = 0.9156355088094696;
    msg.end_z_units = 1U;
    msg.lradius = 0.9870560293600649;
    msg.flags = 254U;
    msg.x = 0.5742374990065426;
    msg.y = 0.5181138892654394;
    msg.z = 0.7904595389332729;
    msg.vx = 0.33197652098900987;
    msg.vy = 0.024730804033455178;
    msg.vz = 0.24047292294585332;
    msg.course_error = 0.14867684385623914;
    msg.eta = 47608U;

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
    msg.setTimeStamp(0.33942941091521994);
    msg.setSource(34882U);
    msg.setSourceEntity(102U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(199U);
    msg.start_lat = 0.004555242296384487;
    msg.start_lon = 0.30285871281597987;
    msg.start_z = 0.6163795937472144;
    msg.start_z_units = 29U;
    msg.end_lat = 0.9057596124050914;
    msg.end_lon = 0.8622409259612277;
    msg.end_z = 0.7419217195122318;
    msg.end_z_units = 79U;
    msg.lradius = 0.13348858249723938;
    msg.flags = 56U;
    msg.x = 0.2935291346150617;
    msg.y = 0.7372460388523517;
    msg.z = 0.696366311939129;
    msg.vx = 0.25700549288603736;
    msg.vy = 0.6692641711259366;
    msg.vz = 0.9002114266596589;
    msg.course_error = 0.6938656245692317;
    msg.eta = 62939U;

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
    msg.setTimeStamp(0.4129318179817608);
    msg.setSource(35619U);
    msg.setSourceEntity(19U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(35U);
    msg.start_lat = 0.12421188887346757;
    msg.start_lon = 0.6357272145211812;
    msg.start_z = 0.4132525899079589;
    msg.start_z_units = 234U;
    msg.end_lat = 0.08547414837996714;
    msg.end_lon = 0.9607475258718944;
    msg.end_z = 0.6329614365806475;
    msg.end_z_units = 149U;
    msg.lradius = 0.18616323141219515;
    msg.flags = 118U;
    msg.x = 0.4060655260187863;
    msg.y = 0.5709181202452958;
    msg.z = 0.8323735055222041;
    msg.vx = 0.37648791334565046;
    msg.vy = 0.07554903689731529;
    msg.vz = 0.2317952185499137;
    msg.course_error = 0.9001377469574245;
    msg.eta = 44672U;

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
    msg.setTimeStamp(0.19506542611813504);
    msg.setSource(9534U);
    msg.setSourceEntity(88U);
    msg.setDestination(9556U);
    msg.setDestinationEntity(217U);
    msg.k = 0.3435773324937659;
    msg.m = 0.45878502697590096;
    msg.n = 0.6514412608164326;

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
    msg.setTimeStamp(0.49294436273885);
    msg.setSource(57100U);
    msg.setSourceEntity(184U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(123U);
    msg.k = 0.06255880598841101;
    msg.m = 0.2810502986463215;
    msg.n = 0.3786432346160056;

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
    msg.setTimeStamp(0.4024399450267111);
    msg.setSource(50351U);
    msg.setSourceEntity(12U);
    msg.setDestination(55995U);
    msg.setDestinationEntity(158U);
    msg.k = 0.8729038248032853;
    msg.m = 0.6793533530081611;
    msg.n = 0.6737995623549553;

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
    msg.setTimeStamp(0.6535681322383126);
    msg.setSource(5759U);
    msg.setSourceEntity(78U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(13U);
    msg.p = 0.5430957330675525;
    msg.i = 0.44504595501315125;
    msg.d = 0.03109430309752692;
    msg.a = 0.31794392006895267;

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
    msg.setTimeStamp(0.595762883567996);
    msg.setSource(62054U);
    msg.setSourceEntity(93U);
    msg.setDestination(34544U);
    msg.setDestinationEntity(238U);
    msg.p = 0.85668456883317;
    msg.i = 0.22440396803754759;
    msg.d = 0.8752514710945221;
    msg.a = 0.7650288419251292;

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
    msg.setTimeStamp(0.9097629263260577);
    msg.setSource(18599U);
    msg.setSourceEntity(224U);
    msg.setDestination(13529U);
    msg.setDestinationEntity(41U);
    msg.p = 0.3896769797684887;
    msg.i = 0.6074867126173938;
    msg.d = 0.3411194409883811;
    msg.a = 0.746412909385556;

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
    msg.setTimeStamp(0.9590293826084398);
    msg.setSource(9663U);
    msg.setSourceEntity(157U);
    msg.setDestination(52617U);
    msg.setDestinationEntity(243U);
    msg.op = 106U;

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
    msg.setTimeStamp(0.13543333623466214);
    msg.setSource(44938U);
    msg.setSourceEntity(25U);
    msg.setDestination(54196U);
    msg.setDestinationEntity(219U);
    msg.op = 128U;

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
    msg.setTimeStamp(0.46761513899495344);
    msg.setSource(43469U);
    msg.setSourceEntity(109U);
    msg.setDestination(14782U);
    msg.setDestinationEntity(11U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.3649232099881522);
    msg.setSource(48754U);
    msg.setSourceEntity(150U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(4U);
    msg.timeout = 13176U;
    msg.lat = 0.5857342270794722;
    msg.lon = 0.70082424509671;
    msg.z = 0.54173865878557;
    msg.z_units = 8U;
    msg.speed = 0.015751019027976376;
    msg.speed_units = 24U;
    msg.roll = 0.21126219131252166;
    msg.pitch = 0.9800301982494675;
    msg.yaw = 0.19773453257690055;
    msg.custom.assign("ATFJLYUOFBXPMMHKLKWHHQYAEYZUGHASTWIUVZMOCDAEDNYNQILZYEOCMFULCYYAZXGJYWT");

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
    msg.setTimeStamp(0.8001186504652139);
    msg.setSource(25706U);
    msg.setSourceEntity(5U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(166U);
    msg.timeout = 45957U;
    msg.lat = 0.41543129762814746;
    msg.lon = 0.3552926026347083;
    msg.z = 0.7446553437751176;
    msg.z_units = 172U;
    msg.speed = 0.9199232748643436;
    msg.speed_units = 188U;
    msg.roll = 0.2007807099651101;
    msg.pitch = 0.2846520881009973;
    msg.yaw = 0.4323859763104104;
    msg.custom.assign("VWQZJAUYHVCSTHKGBZFJYETTWCFNUFNYZSMSKGGUSLUKFXVQQUQHITBANRUNEZUKTDEGEFP");

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
    msg.setTimeStamp(0.6215771666285925);
    msg.setSource(52613U);
    msg.setSourceEntity(252U);
    msg.setDestination(37696U);
    msg.setDestinationEntity(124U);
    msg.timeout = 59476U;
    msg.lat = 0.49980871825391127;
    msg.lon = 0.6825885950227232;
    msg.z = 0.6785035280642866;
    msg.z_units = 237U;
    msg.speed = 0.05797003905427234;
    msg.speed_units = 199U;
    msg.roll = 0.7045376981783289;
    msg.pitch = 0.019809550098996542;
    msg.yaw = 0.4428828184174879;
    msg.custom.assign("NDXRUYQOVZXMQGMQYHDGXMKPSNWZYZGNLCHUMSIDCGNVAKZFJAPOXKXBUHBIODYOBZCVRRKQOASVVCSUJDPSGZBWIWKXKCICEYMFMWUEFSHRJFPZPGQXMFDTPMPUUFAXHVJYIAORLQEHLIFENNWPVTFSXTLVEEARYWKAKMZOIYWJGUCJTYQZNLDZBPSYNWDKCLLHCGUTGSBWJETQSFHDRVMTOTVBUTONJXTGBIRBCHPERQIAQIRLLFK");

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
    msg.setTimeStamp(0.232703942837737);
    msg.setSource(55608U);
    msg.setSourceEntity(50U);
    msg.setDestination(32873U);
    msg.setDestinationEntity(78U);
    msg.timeout = 2375U;
    msg.lat = 0.597934815969682;
    msg.lon = 0.868890887663806;
    msg.z = 0.0692773372068145;
    msg.z_units = 154U;
    msg.speed = 0.025193891780071698;
    msg.speed_units = 94U;
    msg.duration = 41131U;
    msg.radius = 0.38095276435379744;
    msg.flags = 135U;
    msg.custom.assign("VYWGFMTUMKSPYOSEMEOBZGIPJZCDRTQQBAIDXFDAQMUZSQZXLIXGHELNAOSIGKWGRPHNTMCDYUYARJNKHRJYBMFWYZNCXKVUSRBOUUELIERXHCHDLIZC");

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
    msg.setTimeStamp(0.16601894547408502);
    msg.setSource(28051U);
    msg.setSourceEntity(245U);
    msg.setDestination(45421U);
    msg.setDestinationEntity(39U);
    msg.timeout = 9044U;
    msg.lat = 0.04376108323541905;
    msg.lon = 0.23013532118158342;
    msg.z = 0.8511258782938176;
    msg.z_units = 160U;
    msg.speed = 0.15348111607581572;
    msg.speed_units = 217U;
    msg.duration = 26702U;
    msg.radius = 0.8022133689529416;
    msg.flags = 6U;
    msg.custom.assign("OCMVWZSFGVLIDGDWCMNWPQBKNCNKOJDUHA");

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
    msg.setTimeStamp(0.02225606627923027);
    msg.setSource(48716U);
    msg.setSourceEntity(134U);
    msg.setDestination(51884U);
    msg.setDestinationEntity(69U);
    msg.timeout = 21001U;
    msg.lat = 0.4629154264992412;
    msg.lon = 0.4900921021692439;
    msg.z = 0.7338405874294104;
    msg.z_units = 99U;
    msg.speed = 0.5679867873347481;
    msg.speed_units = 32U;
    msg.duration = 56673U;
    msg.radius = 0.8552059967929329;
    msg.flags = 111U;
    msg.custom.assign("NHKUWZDKQR");

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
    msg.setTimeStamp(0.7112576807785707);
    msg.setSource(11666U);
    msg.setSourceEntity(135U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(2U);
    msg.custom.assign("RLMQSQTARSQZKBYIJKHDYCSEBDIHTJSQGCZOJBAPNYASNWVTLJJUOHTJVXPKPOKZJJPQKWSTOIMLAPMM");

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
    msg.setTimeStamp(0.7875907384365914);
    msg.setSource(26456U);
    msg.setSourceEntity(167U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(204U);
    msg.custom.assign("OGNFHHHDFBTQKKGUIUMEHLJRWPXRXCLNGDWFYACRKENUMWPODDAESHCUZPWAIHAJYXPHCOGLTRJZYQBHAWNFJCFXMVZEBBKUOZAKYOXSZKGCLLFMVAXPVPJWNXMQRYTYNMSSYHSBQQQJREQUOBUCEPZGDIEXFYSLMITVVKTFRMJZGQNUSFIKJIWZMRXOVVDARUJJYTTSSBVBNZMLDINBYGNCUPHD");

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
    msg.setTimeStamp(0.9919981258291608);
    msg.setSource(12357U);
    msg.setSourceEntity(184U);
    msg.setDestination(6570U);
    msg.setDestinationEntity(139U);
    msg.custom.assign("WFOBRTRDWTYDNFNRVERTSHLQZFHJZSJ");

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
    msg.setTimeStamp(0.8991003180467096);
    msg.setSource(10701U);
    msg.setSourceEntity(250U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(218U);
    msg.timeout = 33034U;
    msg.lat = 0.7597902130877344;
    msg.lon = 0.844687291224632;
    msg.z = 0.23801864122363114;
    msg.z_units = 228U;
    msg.duration = 31076U;
    msg.speed = 0.9083144879934546;
    msg.speed_units = 111U;
    msg.type = 78U;
    msg.radius = 0.23429050143210406;
    msg.length = 0.15506316355828342;
    msg.bearing = 0.10879811336117684;
    msg.direction = 233U;
    msg.custom.assign("UTDMFIEWIZHSBTOPFPGEARGHQKFHBXGCOVLHIWJGCUMQQXVICSVABGMUFZRPOAYOKPVTAJHIBJBVKFBKYWNCSS");

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
    msg.setTimeStamp(0.38554737087353563);
    msg.setSource(25874U);
    msg.setSourceEntity(56U);
    msg.setDestination(50516U);
    msg.setDestinationEntity(48U);
    msg.timeout = 36208U;
    msg.lat = 0.29368335529999656;
    msg.lon = 0.6849282786676645;
    msg.z = 0.3887439963063102;
    msg.z_units = 199U;
    msg.duration = 5412U;
    msg.speed = 0.930161975185744;
    msg.speed_units = 103U;
    msg.type = 85U;
    msg.radius = 0.16245725713410042;
    msg.length = 0.10294472772970498;
    msg.bearing = 0.01911939416628372;
    msg.direction = 189U;
    msg.custom.assign("OKBDRFQIPECKYLVETWSXLRGKXFTUCUFPQVJSHLFWIRVAWVSDMFQBARUZLMMJLUXHMTQGZABBFOCSVTNAGIYIDXBYJIYCMHQMIXTJHZDESNOTHKEXEGRXBYILGCOWEHICHBCMBZTYHUMJALALWGPRZKDFYJSOCKOIVZPRNUJAAZPUUNGOITUDWLAHLPSMKNXYWWVWNFEZNJEGQOJZ");

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
    msg.setTimeStamp(0.12868912481094152);
    msg.setSource(17877U);
    msg.setSourceEntity(209U);
    msg.setDestination(40576U);
    msg.setDestinationEntity(173U);
    msg.timeout = 53912U;
    msg.lat = 0.3793186758544532;
    msg.lon = 0.5626913910731636;
    msg.z = 0.5760234081112051;
    msg.z_units = 128U;
    msg.duration = 32020U;
    msg.speed = 0.07283934228960776;
    msg.speed_units = 199U;
    msg.type = 206U;
    msg.radius = 0.47398825823328417;
    msg.length = 0.03494846160480802;
    msg.bearing = 0.7588622246562776;
    msg.direction = 91U;
    msg.custom.assign("USUKZXYLEGFTEBWXPPRSWMQNXGULCJWCYJVIBMHNBVLJAXOVVNDUSKBPSQCKGTFOHZJJPBZUUDJOGQXFPEGQTQVAELDQSCPMQCCIPDIZHAAONTLKLAJZIWRADOFROTYBYNXBLJVDVNCIEMEBKZETNLKYUBQLTMHYPIERYOHGMKMEJDNHSXWOFZGSIVGNDCDFGKRACPF");

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
    msg.setTimeStamp(0.4195900063542778);
    msg.setSource(31468U);
    msg.setSourceEntity(121U);
    msg.setDestination(31664U);
    msg.setDestinationEntity(205U);
    msg.duration = 54281U;
    msg.custom.assign("ZEEGHFUDOMMHFUAPNPUGRJCDBHFRKFVGWBLBZKXFRGNGPWGWWHFNVOXSELXQYPRADSOFKJILLDYKZJQ");

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
    msg.setTimeStamp(0.9570460000303019);
    msg.setSource(30758U);
    msg.setSourceEntity(178U);
    msg.setDestination(21783U);
    msg.setDestinationEntity(190U);
    msg.duration = 60570U;
    msg.custom.assign("MYVKWNJPSLORFULXAQMSHVICK");

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
    msg.setTimeStamp(0.4407947302792439);
    msg.setSource(25611U);
    msg.setSourceEntity(220U);
    msg.setDestination(25026U);
    msg.setDestinationEntity(240U);
    msg.duration = 56692U;
    msg.custom.assign("JXTBXSUNMOSFWNZCTQLLOFOEPUAKJPRTCMHVIUIEFNMHUFBJOCKXJPYZYCRRDVEBSOYWRZVSFYGCUXDDXAHGNBUVWTHPOPKLIIUDVTOQTKMGLQDKGBJEQARAHFGGYLXVGFZOCZASVNNKWITICSPRXSQZVJJRFMZAQXQWZXBHAOYNHIQUGCLWLLSBENTTEMHMWYGKBMCDAJCBAJPLOMIKKEQEPRDDZAQFMHSFLKGPNDYNUJUWZYTWI");

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
    msg.setTimeStamp(0.4414258868563784);
    msg.setSource(7146U);
    msg.setSourceEntity(16U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(153U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.46211124023657535;
    msg.control.set(tmp_msg_0);
    msg.duration = 28602U;
    msg.custom.assign("HTUTQMNNZRVVRUUENVWENXACEOHKVZYHRHWBPUNIYKOOMYXQCPPZKEPYXDJIBPDTSQZRWLJUYAMNKQXHTOFASLKOOVHMDQGVSZQSZGLFFODBFXRDIIJLADXABWCXLTGGMZBWFGEWMLCIEVJDBTJURWJNVXMG");

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
    msg.setTimeStamp(0.6769924345823655);
    msg.setSource(54362U);
    msg.setSourceEntity(131U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(179U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.2234259450120254;
    msg.control.set(tmp_msg_0);
    msg.duration = 11219U;
    msg.custom.assign("MLWAFSPXZBEFBEPDSNCUFCYEULHHWUHDTLJRLEZDUINUFXCQZACHHNIKDTJFGFPJZZCMGSN");

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
    msg.setTimeStamp(0.22765189477155579);
    msg.setSource(39995U);
    msg.setSourceEntity(95U);
    msg.setDestination(35551U);
    msg.setDestinationEntity(88U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.6489076855818547;
    msg.control.set(tmp_msg_0);
    msg.duration = 53733U;
    msg.custom.assign("NXYOKHSFDCIFGSIMQRCRHY");

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
    msg.setTimeStamp(0.6394759415602527);
    msg.setSource(29938U);
    msg.setSourceEntity(4U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(83U);
    msg.timeout = 43934U;
    msg.lat = 0.4701518026002135;
    msg.lon = 0.021602322431423238;
    msg.z = 0.7618778839340408;
    msg.z_units = 189U;
    msg.speed = 0.6116572129963991;
    msg.speed_units = 207U;
    msg.bearing = 0.06139075465170296;
    msg.cross_angle = 0.9183527709178272;
    msg.width = 0.39688807817999927;
    msg.length = 0.8981451636592441;
    msg.hstep = 0.15978735617379258;
    msg.coff = 13U;
    msg.alternation = 41U;
    msg.flags = 35U;
    msg.custom.assign("RDHFMAAAEESRYUGFYPFSCHSWUUJJCSBZKXIMAQBUGFWMVLHMJNJJPNWLLEUOLXBWDUTFDTOYFOQIYCSZBGRBXMCNWYEKEIVDHCNLGJDMNHOEYQVSPQUIYKQOOISRVICAVXVRHZTDYRPVHQLPNXLYXCMGAYDBFUWKLUQWPTJWDZXSEOIORQKHFVRIBCZFZRQEMJXBZCBEZBFAMSPHVKZTALWPKTNSKGAHTNMXOVWGTNZ");

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
    msg.setTimeStamp(0.49680765377198377);
    msg.setSource(5767U);
    msg.setSourceEntity(110U);
    msg.setDestination(15397U);
    msg.setDestinationEntity(173U);
    msg.timeout = 31149U;
    msg.lat = 0.39212733234946207;
    msg.lon = 0.8536279736795918;
    msg.z = 0.8634729562764389;
    msg.z_units = 50U;
    msg.speed = 0.8146079064336278;
    msg.speed_units = 58U;
    msg.bearing = 0.16370635465529793;
    msg.cross_angle = 0.6999317614330884;
    msg.width = 0.417335480007778;
    msg.length = 0.926979755551879;
    msg.hstep = 0.9770654728245207;
    msg.coff = 207U;
    msg.alternation = 237U;
    msg.flags = 62U;
    msg.custom.assign("RCMCLZVROOPUWAJZSUCZFHXECGPYLBAVXURCKRGSAPHRBW");

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
    msg.setTimeStamp(0.3929687973257636);
    msg.setSource(52507U);
    msg.setSourceEntity(227U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(232U);
    msg.timeout = 6046U;
    msg.lat = 0.9644994321812638;
    msg.lon = 0.5640140101350533;
    msg.z = 0.21755806282748236;
    msg.z_units = 29U;
    msg.speed = 0.5259709489651485;
    msg.speed_units = 106U;
    msg.bearing = 0.6184025356299971;
    msg.cross_angle = 0.8633736447851272;
    msg.width = 0.7899402157586248;
    msg.length = 0.09926391313365812;
    msg.hstep = 0.47957878903756435;
    msg.coff = 158U;
    msg.alternation = 104U;
    msg.flags = 158U;
    msg.custom.assign("LJNOGLXFSEGCETFTDFXXUOJQHAZFIBITYVLLRUNYKJRFFUNRWHCMMDXUEGMDCQFHADTKCMC");

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
    msg.setTimeStamp(0.8644297840365031);
    msg.setSource(25359U);
    msg.setSourceEntity(48U);
    msg.setDestination(29618U);
    msg.setDestinationEntity(163U);
    msg.timeout = 2246U;
    msg.lat = 0.7388138370159476;
    msg.lon = 0.3614281745767942;
    msg.z = 0.11166796905169452;
    msg.z_units = 93U;
    msg.speed = 0.3288283785335705;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.024352721627777685;
    tmp_msg_0.y = 0.3012954848534247;
    tmp_msg_0.z = 0.40208027441812044;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OKJRBDWQDLJUGVIEXAWCLDTGYSWRUYXPGJZMNWOGIOXIEJURYNODBHRLHQIIWOLEWVSACKHNPNPLRZTVSWHLZMAVKJBDDVMSDMRYDFYTRZJMKZXVPMFZOKHNKF");

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
    msg.setTimeStamp(0.739978342461776);
    msg.setSource(10560U);
    msg.setSourceEntity(170U);
    msg.setDestination(7167U);
    msg.setDestinationEntity(173U);
    msg.timeout = 65130U;
    msg.lat = 0.3501397425438031;
    msg.lon = 0.21740322300851966;
    msg.z = 0.35063302708508737;
    msg.z_units = 240U;
    msg.speed = 0.015456885370394802;
    msg.speed_units = 178U;
    msg.custom.assign("ILNWMZJWXPAPOJGQYIAFDVEWVXGYPUXCHBAMSVTBFEDHQIPKLPQCTLFZUDFIUJUKCQTNAMZOKSL");

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
    msg.setTimeStamp(0.2472770182366748);
    msg.setSource(45329U);
    msg.setSourceEntity(90U);
    msg.setDestination(21382U);
    msg.setDestinationEntity(196U);
    msg.timeout = 46609U;
    msg.lat = 0.09728982488688176;
    msg.lon = 0.009812415873302616;
    msg.z = 0.23103395911691882;
    msg.z_units = 66U;
    msg.speed = 0.8685326679072588;
    msg.speed_units = 254U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.46111008854388713;
    tmp_msg_0.y = 0.8915165262905964;
    tmp_msg_0.z = 0.15350987267402805;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SFFHUVSPVJKUPXVCHMBBKBPNXMZKTLAQKMAKWKKWIVLTAYMUWSPNCYGBSGHIVLMGDECSDREEUBZXRYILCQROQVHEFTGEZWQBTWCJDHEADZDJAOMRLTKTQOAGJPXRYUYCMNOZQZEHFIUFGGAJUSIFPDQDNOZGMDLZTCLHOYRBNIIXLHTCPSEQVWGOUYXYPFNXZWDUDNXEOOIHIKFYLESJJBJQAWNWV");

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
    msg.setTimeStamp(0.0008656255525039125);
    msg.setSource(63925U);
    msg.setSourceEntity(118U);
    msg.setDestination(3803U);
    msg.setDestinationEntity(147U);
    msg.x = 0.29621240378016467;
    msg.y = 0.808871220492103;
    msg.z = 0.01319284556434841;

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
    msg.setTimeStamp(0.12046421824581821);
    msg.setSource(35443U);
    msg.setSourceEntity(37U);
    msg.setDestination(7027U);
    msg.setDestinationEntity(169U);
    msg.x = 0.5229521250478059;
    msg.y = 0.6669027113115734;
    msg.z = 0.713355366280777;

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
    msg.setTimeStamp(0.4533487321570765);
    msg.setSource(57480U);
    msg.setSourceEntity(68U);
    msg.setDestination(24385U);
    msg.setDestinationEntity(151U);
    msg.x = 0.03649710269640105;
    msg.y = 0.08206225468806416;
    msg.z = 0.018976269832960524;

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
    msg.setTimeStamp(0.09423630263773175);
    msg.setSource(33999U);
    msg.setSourceEntity(59U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(134U);
    msg.timeout = 41970U;
    msg.lat = 0.6010971647349547;
    msg.lon = 0.0712311964095158;
    msg.z = 0.4468723434839976;
    msg.z_units = 32U;
    msg.amplitude = 0.03572981157362343;
    msg.pitch = 0.7552654029046085;
    msg.speed = 0.4859935942230861;
    msg.speed_units = 218U;
    msg.custom.assign("EXCQLJKVARIGFFTRLYSTUKUGPBIBFDOAJKVWZVJCFGHHPMRMNXEONTQIPYFSOGZJSHFNMSDQIHQEONBZFQKSHGBZPIILNWAWRIAKERLVMHEVXZYIFTEVITRY");

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
    msg.setTimeStamp(0.9013605278859028);
    msg.setSource(46956U);
    msg.setSourceEntity(125U);
    msg.setDestination(34210U);
    msg.setDestinationEntity(212U);
    msg.timeout = 9204U;
    msg.lat = 0.9759644825928451;
    msg.lon = 0.5341171853247588;
    msg.z = 0.5664977970337017;
    msg.z_units = 87U;
    msg.amplitude = 0.7843733825293738;
    msg.pitch = 0.5180731810218941;
    msg.speed = 0.3971010095803308;
    msg.speed_units = 63U;
    msg.custom.assign("IFYXFEQXGPTBSZCZABUILBIHQIJEUJGJHTEHIJZWARFHEXHKZMLIIJGTIOWDPDJNZTULVCUKSYGDOJSBMDIKLVDRLLVEDFQZCPMJWLRTTKYRNEXQYDUNOKVWDSQIGKCZPPKNOYMFB");

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
    msg.setTimeStamp(0.7422866649999095);
    msg.setSource(5432U);
    msg.setSourceEntity(72U);
    msg.setDestination(42543U);
    msg.setDestinationEntity(94U);
    msg.timeout = 33816U;
    msg.lat = 0.702999094143628;
    msg.lon = 0.52747623114372;
    msg.z = 0.5669930677954419;
    msg.z_units = 9U;
    msg.amplitude = 0.12870594935912982;
    msg.pitch = 0.899542734630446;
    msg.speed = 0.08682955947871474;
    msg.speed_units = 24U;
    msg.custom.assign("AMFAGCWDPCIJBIHMJPTVOECRUWVSOOHOHQLICQMPVSSCAGESLOPGDHFXAKKEDOSACYMKVOGXJZAXDKRRULLZPCYYMXTDYPEWUERVDRSSNIZYDMWFUIUVMQNWBJRKMFXWLUTJNF");

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
    msg.setTimeStamp(0.7723031221898065);
    msg.setSource(30258U);
    msg.setSourceEntity(238U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.8179509671029895);
    msg.setSource(1274U);
    msg.setSourceEntity(197U);
    msg.setDestination(17957U);
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
    msg.setTimeStamp(0.1772420360945165);
    msg.setSource(33452U);
    msg.setSourceEntity(59U);
    msg.setDestination(8915U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9814337430153485);
    msg.setSource(50807U);
    msg.setSourceEntity(7U);
    msg.setDestination(35774U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.36357650145272646;
    msg.lon = 0.5591375422886538;
    msg.z = 0.8775268281449862;
    msg.z_units = 219U;
    msg.radius = 0.25262807440827706;
    msg.duration = 48963U;
    msg.speed = 0.9133429523942757;
    msg.speed_units = 35U;
    msg.custom.assign("TMHLJAIBWB");

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
    msg.setTimeStamp(0.27387185917518087);
    msg.setSource(50554U);
    msg.setSourceEntity(15U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.5892008432162865;
    msg.lon = 0.8288051829995022;
    msg.z = 0.6694754987439451;
    msg.z_units = 217U;
    msg.radius = 0.4535070029417958;
    msg.duration = 39711U;
    msg.speed = 0.9849444501123692;
    msg.speed_units = 105U;
    msg.custom.assign("DMNHHGXTXSJEOKTEYTDEBXZYJINXAJAULNBZWUQPRRYHCRKRCFXJXMDEKLCMKBXPDPKNNGOADQQKWEPCVOLWKTMFAKWQSGSQFVPZRS");

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
    msg.setTimeStamp(0.7502653232257928);
    msg.setSource(9516U);
    msg.setSourceEntity(251U);
    msg.setDestination(8942U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.5133795063759443;
    msg.lon = 0.3787856857375792;
    msg.z = 0.4109865066544298;
    msg.z_units = 227U;
    msg.radius = 0.8475126746297299;
    msg.duration = 37640U;
    msg.speed = 0.9953034934041769;
    msg.speed_units = 11U;
    msg.custom.assign("CRFKZAKSXXZFXQFOYGQHBTSQAJCGCRHUJYMKPRLPIJJQYBSHQIYDVIRJGQDMETBLNSTTITQYNUMWEWO");

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
    msg.setTimeStamp(0.8085756585788265);
    msg.setSource(25948U);
    msg.setSourceEntity(118U);
    msg.setDestination(8376U);
    msg.setDestinationEntity(95U);
    msg.timeout = 62732U;
    msg.flags = 209U;
    msg.lat = 0.741487694723852;
    msg.lon = 0.14757973016782033;
    msg.start_z = 0.24964780260348596;
    msg.start_z_units = 242U;
    msg.end_z = 0.804216441971614;
    msg.end_z_units = 253U;
    msg.radius = 0.5351626351626025;
    msg.speed = 0.8126539352258064;
    msg.speed_units = 119U;
    msg.custom.assign("ZMJFWXVGAMFLIVMMNLC");

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
    msg.setTimeStamp(0.8663131594625115);
    msg.setSource(54240U);
    msg.setSourceEntity(22U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(103U);
    msg.timeout = 60251U;
    msg.flags = 169U;
    msg.lat = 0.8148805182546133;
    msg.lon = 0.5865514283182536;
    msg.start_z = 0.8522017916094282;
    msg.start_z_units = 145U;
    msg.end_z = 0.4950040004093754;
    msg.end_z_units = 29U;
    msg.radius = 0.9170279471137798;
    msg.speed = 0.06454152743531272;
    msg.speed_units = 179U;
    msg.custom.assign("PEQOVCZLPBFIUIHSGOUHVUYARBBMRKKOZCZONKWJPMNSCCFFSZJEPTMUWUFGMKPGQKJKNRJYDKTHUQNNZISMFLOXEIJRNHOFSUGHHDEJDRIWYCIZTMBOALPJCGTYBSVJKDQDTVWVSDVUQRCLZCBSLNWQQQNRKPMAYXXJZOMTECHFEQVNJFKBDWVGRITRSYUHLNTVRQBBXIG");

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
    msg.setTimeStamp(0.5723161183998274);
    msg.setSource(14468U);
    msg.setSourceEntity(143U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(165U);
    msg.timeout = 27855U;
    msg.flags = 93U;
    msg.lat = 0.2897674193131975;
    msg.lon = 0.609522850779215;
    msg.start_z = 0.8430932693764072;
    msg.start_z_units = 24U;
    msg.end_z = 0.1704610567251721;
    msg.end_z_units = 38U;
    msg.radius = 0.7813435351415515;
    msg.speed = 0.4274758511833745;
    msg.speed_units = 141U;
    msg.custom.assign("OOQDRUIIKTJRSCTFZJCYET");

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
    msg.setTimeStamp(0.317472381587906);
    msg.setSource(49483U);
    msg.setSourceEntity(209U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(141U);
    msg.timeout = 44182U;
    msg.lat = 0.9149464636761244;
    msg.lon = 0.4338766240822911;
    msg.z = 0.7122499110626552;
    msg.z_units = 30U;
    msg.speed = 0.07555242021441333;
    msg.speed_units = 120U;
    msg.custom.assign("VCLHKLJNRFYOCGUBZLTKXPTEWFNTAWQSTGFCPAQRMEPUODHDJZBBRHESZOKG");

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
    msg.setTimeStamp(0.9174933979401335);
    msg.setSource(65068U);
    msg.setSourceEntity(246U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(88U);
    msg.timeout = 53081U;
    msg.lat = 0.06499600226202129;
    msg.lon = 0.9278717386904712;
    msg.z = 0.6415894889354378;
    msg.z_units = 236U;
    msg.speed = 0.3782604204732477;
    msg.speed_units = 86U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8405629818742153;
    tmp_msg_0.y = 0.9256479344654945;
    tmp_msg_0.z = 0.3532324014319863;
    tmp_msg_0.t = 0.745314865776907;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YAXAYNWRCKQEXGDSZHPSESLPOQB");

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
    msg.setTimeStamp(0.6249208025234673);
    msg.setSource(3401U);
    msg.setSourceEntity(126U);
    msg.setDestination(7276U);
    msg.setDestinationEntity(139U);
    msg.timeout = 4143U;
    msg.lat = 0.6374136659017655;
    msg.lon = 0.3815545578671672;
    msg.z = 0.7036372658772425;
    msg.z_units = 35U;
    msg.speed = 0.006027123787985755;
    msg.speed_units = 229U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7158902355787564;
    tmp_msg_0.y = 0.7911816791301296;
    tmp_msg_0.z = 0.7809092923976696;
    tmp_msg_0.t = 0.9622654492239333;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NQXQQDDUQFZKMDDJBJLJDVTGHMPTU");

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
    msg.setTimeStamp(0.13167939224739955);
    msg.setSource(1564U);
    msg.setSourceEntity(76U);
    msg.setDestination(50591U);
    msg.setDestinationEntity(180U);
    msg.x = 0.20846221954121258;
    msg.y = 0.7576725951012953;
    msg.z = 0.5434347463580825;
    msg.t = 0.3704962051713254;

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
    msg.setTimeStamp(0.8830741118683085);
    msg.setSource(27866U);
    msg.setSourceEntity(59U);
    msg.setDestination(29919U);
    msg.setDestinationEntity(148U);
    msg.x = 0.5916233364526386;
    msg.y = 0.4013090587626478;
    msg.z = 0.929898340244051;
    msg.t = 0.1694049889409096;

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
    msg.setTimeStamp(0.02230624559943095);
    msg.setSource(39991U);
    msg.setSourceEntity(197U);
    msg.setDestination(64453U);
    msg.setDestinationEntity(134U);
    msg.x = 0.18532269136683954;
    msg.y = 0.7660078130516982;
    msg.z = 0.6029617562050571;
    msg.t = 0.4124105252160768;

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
    msg.setTimeStamp(0.13190101358312556);
    msg.setSource(59763U);
    msg.setSourceEntity(106U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(101U);
    msg.timeout = 49425U;
    msg.name.assign("BXACOPUAKIBFTCHJOHEKWCISREXFXPJDZAAFEQDUXWHQPTBNOXRWMCPGKW");
    msg.custom.assign("RSNMOTWZQIXKEQIMEYK");

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
    msg.setTimeStamp(0.4938578523706346);
    msg.setSource(28404U);
    msg.setSourceEntity(161U);
    msg.setDestination(61335U);
    msg.setDestinationEntity(15U);
    msg.timeout = 43891U;
    msg.name.assign("NWXIZMVQTLROPVEABPWLPQSTCNFJRSJCKGLMGMQOWDMLUKFZGHGVLISSCTDECBFQDPVHSPVMLFOHXDHKWPNAHCJWHJLXBXQCKWNXCAZQEOYWIJOEELXVRQFJGWZQXMTITGDKXMGADKUAGRFTBPUVATKNOVGEWSTHFAJNBZJDRJMP");
    msg.custom.assign("RKSUXZGIVXJKCETTYVQPTYSSUZDAMUVMTJRBMPFOERGNBPXGTYQTZDYW");

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
    msg.setTimeStamp(0.4017784055400473);
    msg.setSource(26331U);
    msg.setSourceEntity(54U);
    msg.setDestination(25831U);
    msg.setDestinationEntity(192U);
    msg.timeout = 7097U;
    msg.name.assign("TMXCEMZLFIPOEMBECESYZCTWBLYKIZVYKBKXYTRFTRPXSNKELMOUIMLZEIRWENJUJAUOVTHRCMPNUVKOVOGPOYVHMPMLXOTQGHJHCLQQTHKIQYGTDRHBSSDWJRBN");
    msg.custom.assign("ITGQCQBJYTOQGHLXZSAXFW");

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
    msg.setTimeStamp(0.38497361488592663);
    msg.setSource(55953U);
    msg.setSourceEntity(189U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.4923559914477885;
    msg.lon = 0.19804231825082774;
    msg.z = 0.9505519487647004;
    msg.z_units = 176U;
    msg.speed = 0.685004214531345;
    msg.speed_units = 184U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.17054441931474162;
    tmp_msg_0.y = 0.2806898088749692;
    tmp_msg_0.z = 0.24934655725821853;
    tmp_msg_0.t = 0.591730195577943;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 32510U;
    tmp_msg_1.off_x = 0.6478063238524199;
    tmp_msg_1.off_y = 0.906354161506517;
    tmp_msg_1.off_z = 0.1755269442907691;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.4222296265558324;
    msg.custom.assign("DJIRVEPUAKB");

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
    msg.setTimeStamp(0.19728348038173793);
    msg.setSource(15515U);
    msg.setSourceEntity(13U);
    msg.setDestination(63277U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.3439222268047679;
    msg.lon = 0.3355868579886607;
    msg.z = 0.14697680076790398;
    msg.z_units = 185U;
    msg.speed = 0.16478712821866648;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.25323160401444034;
    tmp_msg_0.y = 0.3729843766337494;
    tmp_msg_0.z = 0.5177137246286128;
    tmp_msg_0.t = 0.41411624145217574;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.17367344805641605;
    msg.custom.assign("LYXOAAVJOBUGUXEXBCKDKSAROVRNBZNDPUSFCRLKNPSWLGJWHWVGCZRSMKNFWPAMYLMQMICLHTXKBTELPEQARFWJHOXSCZJMVFEBZHEVCIDIBLKUBOIOTARMMOZXRCWPGDZWXBLMUGEATRUHGJYEJKP");

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
    msg.setTimeStamp(0.6218524226808136);
    msg.setSource(41154U);
    msg.setSourceEntity(178U);
    msg.setDestination(12356U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.5841431432997655;
    msg.lon = 0.49715327436266854;
    msg.z = 0.9682290524140684;
    msg.z_units = 46U;
    msg.speed = 0.8025476842958624;
    msg.speed_units = 161U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8975460925685502;
    tmp_msg_0.y = 0.2689339410745153;
    tmp_msg_0.z = 0.09718697456349423;
    tmp_msg_0.t = 0.9079867459906473;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 55006U;
    tmp_msg_1.off_x = 0.762740321101589;
    tmp_msg_1.off_y = 0.60542277959022;
    tmp_msg_1.off_z = 0.2542787021656415;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.1064585793435131;
    msg.custom.assign("KRZDKZFFTQSJIGYAEVDZGELIXCRIXOTLCMWBGKKGPPEGFJELFYQTHQJAWIAUXXLLVNPDWRHFPNOU");

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
    msg.setTimeStamp(0.3579701698858665);
    msg.setSource(17663U);
    msg.setSourceEntity(232U);
    msg.setDestination(19619U);
    msg.setDestinationEntity(93U);
    msg.vid = 52495U;
    msg.off_x = 0.3049580751993174;
    msg.off_y = 0.3815365114492776;
    msg.off_z = 0.27593039448000667;

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
    msg.setTimeStamp(0.5155732212893864);
    msg.setSource(54185U);
    msg.setSourceEntity(161U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(225U);
    msg.vid = 31450U;
    msg.off_x = 0.9870282569690059;
    msg.off_y = 0.4236810988745514;
    msg.off_z = 0.38410211954931484;

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
    msg.setTimeStamp(0.7029509739362765);
    msg.setSource(33727U);
    msg.setSourceEntity(247U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(221U);
    msg.vid = 7273U;
    msg.off_x = 0.7579676874350242;
    msg.off_y = 0.45903789735258693;
    msg.off_z = 0.35337866573942045;

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
    msg.setTimeStamp(0.4653741215968552);
    msg.setSource(36567U);
    msg.setSourceEntity(235U);
    msg.setDestination(39888U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.62017327098337);
    msg.setSource(35161U);
    msg.setSourceEntity(203U);
    msg.setDestination(61759U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.31770938559081285);
    msg.setSource(34715U);
    msg.setSourceEntity(8U);
    msg.setDestination(3734U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.5556891093215105);
    msg.setSource(21238U);
    msg.setSourceEntity(228U);
    msg.setDestination(14279U);
    msg.setDestinationEntity(96U);
    msg.mid = 55096U;

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
    msg.setTimeStamp(0.579559389291422);
    msg.setSource(23590U);
    msg.setSourceEntity(78U);
    msg.setDestination(54566U);
    msg.setDestinationEntity(229U);
    msg.mid = 34060U;

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
    msg.setTimeStamp(0.5637917923635979);
    msg.setSource(2903U);
    msg.setSourceEntity(20U);
    msg.setDestination(37913U);
    msg.setDestinationEntity(74U);
    msg.mid = 49798U;

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
    msg.setTimeStamp(0.10049455894212389);
    msg.setSource(27459U);
    msg.setSourceEntity(195U);
    msg.setDestination(54612U);
    msg.setDestinationEntity(183U);
    msg.state = 31U;
    msg.eta = 41324U;
    msg.info.assign("RWKXWBTRVPLJYFCHQKQPMOXBCRBLJMNKVNWUUGEWEOSSMDOPWYNKUAAIJWUEIBRMURSHCXUDQSOCBGPBGAEAODCSZPOXPKGHUWIOAJHZVYFNAHMSTHNEHEFLROYLGA");

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
    msg.setTimeStamp(0.07607599341563065);
    msg.setSource(5395U);
    msg.setSourceEntity(102U);
    msg.setDestination(58806U);
    msg.setDestinationEntity(203U);
    msg.state = 78U;
    msg.eta = 58643U;
    msg.info.assign("RRPNDUGYVCJYYLURFHIKRMTCEIEBUZNRTGNMQQKCQOJYFNYFCJUZKYDSXFHEHXKLIXTNAWFMGTKDNCAAMNDUPIVVGBUWIOJJBASGRPLSHSSAEAGFIVKFPXTDZXGJHZQWDIQRHJJWJVEWOQSICGTSEMZP");

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
    msg.setTimeStamp(0.6794040754680307);
    msg.setSource(49081U);
    msg.setSourceEntity(4U);
    msg.setDestination(19000U);
    msg.setDestinationEntity(240U);
    msg.state = 33U;
    msg.eta = 34627U;
    msg.info.assign("IEPXELXTOMVQKOWTBRPTTFNOWVZVARXWUCWHFOQKDGHUSSS");

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
    msg.setTimeStamp(0.2797208874851276);
    msg.setSource(58493U);
    msg.setSourceEntity(44U);
    msg.setDestination(30730U);
    msg.setDestinationEntity(219U);
    msg.system = 54296U;
    msg.duration = 41836U;
    msg.speed = 0.7927631716907343;
    msg.speed_units = 127U;
    msg.x = 0.34969595545542986;
    msg.y = 0.7651533428613647;
    msg.z = 0.30770398866968973;
    msg.z_units = 48U;

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
    msg.setTimeStamp(0.4734142156090313);
    msg.setSource(50855U);
    msg.setSourceEntity(214U);
    msg.setDestination(26015U);
    msg.setDestinationEntity(50U);
    msg.system = 11349U;
    msg.duration = 61797U;
    msg.speed = 0.74604490324625;
    msg.speed_units = 157U;
    msg.x = 0.6065136195231821;
    msg.y = 0.5231026427934498;
    msg.z = 0.0018804296110424001;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.013478548381980593);
    msg.setSource(49770U);
    msg.setSourceEntity(18U);
    msg.setDestination(53718U);
    msg.setDestinationEntity(109U);
    msg.system = 5613U;
    msg.duration = 65469U;
    msg.speed = 0.27722410688465116;
    msg.speed_units = 100U;
    msg.x = 0.4124616528194204;
    msg.y = 0.1568236768286574;
    msg.z = 0.6354057310367583;
    msg.z_units = 191U;

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
    msg.setTimeStamp(0.061785634527239064);
    msg.setSource(30431U);
    msg.setSourceEntity(118U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.7339266643570043;
    msg.lon = 0.2456742533277524;
    msg.speed = 0.7439603572818707;
    msg.speed_units = 69U;
    msg.duration = 1013U;
    msg.sys_a = 27232U;
    msg.sys_b = 6536U;
    msg.move_threshold = 0.18284694039853144;

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
    msg.setTimeStamp(0.42270423620758546);
    msg.setSource(17577U);
    msg.setSourceEntity(217U);
    msg.setDestination(48832U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.05301063765552427;
    msg.lon = 0.35184947412498513;
    msg.speed = 0.6553321112308677;
    msg.speed_units = 221U;
    msg.duration = 56023U;
    msg.sys_a = 53515U;
    msg.sys_b = 53347U;
    msg.move_threshold = 0.7936495853567687;

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
    msg.setTimeStamp(0.8723307836608507);
    msg.setSource(21854U);
    msg.setSourceEntity(216U);
    msg.setDestination(27976U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.9801865251150889;
    msg.lon = 0.3957098816115746;
    msg.speed = 0.5574272915499925;
    msg.speed_units = 68U;
    msg.duration = 1386U;
    msg.sys_a = 30771U;
    msg.sys_b = 18392U;
    msg.move_threshold = 0.25653530121593937;

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
    msg.setTimeStamp(0.4051208999744662);
    msg.setSource(5297U);
    msg.setSourceEntity(221U);
    msg.setDestination(956U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.28480898087953066;
    msg.lon = 0.9292358238368842;
    msg.z = 0.6150515585966034;
    msg.z_units = 182U;
    msg.speed = 0.08359314658858319;
    msg.speed_units = 244U;
    msg.custom.assign("UPBGXVQMJCAZGOVCTMZFYYJONNZEJJZMHDPXBIIYLFYOAQOHGATGPCAVXKXOXQSOMSGLBWLCXSFUZZKJLMMVEIRIRBTWHKIVBWFXDVCDMMGCJKARHFUDWGEFJHGHVLPAQKVCRLNBHMSSAJVSQDDCK");

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
    msg.setTimeStamp(0.07273668335219063);
    msg.setSource(14306U);
    msg.setSourceEntity(130U);
    msg.setDestination(49563U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.8478495821502272;
    msg.lon = 0.35527230080762906;
    msg.z = 0.4542413699658656;
    msg.z_units = 107U;
    msg.speed = 0.8055569804921109;
    msg.speed_units = 39U;
    msg.custom.assign("LSULXDXZZIMKSDTOINANEZVOQHHWICPTPUCCYBBEFXURACGJFSHIEINOZROXZATMFBYEKQJRKUPQJZYGJWUIJNNRMXRBZSJW");

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
    msg.setTimeStamp(0.35098091189854663);
    msg.setSource(5428U);
    msg.setSourceEntity(175U);
    msg.setDestination(56053U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.38602989042935454;
    msg.lon = 0.8834074109057392;
    msg.z = 0.48968924975836536;
    msg.z_units = 253U;
    msg.speed = 0.04411516918316505;
    msg.speed_units = 86U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9073190882086919;
    tmp_msg_0.lon = 0.8714681243578419;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("KQLYIEIZRTYBAXPDVTCMZAXSPWNVPFOPYJGXLWEGCCINHOCPMFRDVUYOJHLDRBJQKGRNNYADBSADYTFRVPUNFSIGWKZDYKVMOQHAROWIYEPILCJBJHVLAAQOSBQKZCZARGZEBEFLTNFIMVRIKGDUYTSVGSWJWMNENWIUMUSZANLGHZFOOKHKCPMBNPBETSFUXGT");

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
    msg.setTimeStamp(0.2671429551301142);
    msg.setSource(37462U);
    msg.setSourceEntity(21U);
    msg.setDestination(54984U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.8521050110632201;
    msg.lon = 0.8264876307587574;

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
    msg.setTimeStamp(0.36530503018906235);
    msg.setSource(1746U);
    msg.setSourceEntity(39U);
    msg.setDestination(20160U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.4440249862396992;
    msg.lon = 0.4321719128091873;

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
    msg.setTimeStamp(0.3271132666797095);
    msg.setSource(5684U);
    msg.setSourceEntity(244U);
    msg.setDestination(31817U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.18947341489550462;
    msg.lon = 0.9708373832742335;

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
    msg.setTimeStamp(0.5820351211023547);
    msg.setSource(6178U);
    msg.setSourceEntity(43U);
    msg.setDestination(42574U);
    msg.setDestinationEntity(189U);
    msg.timeout = 52832U;
    msg.lat = 0.9452810012250031;
    msg.lon = 0.23274398532268414;
    msg.z = 0.7163419618454209;
    msg.z_units = 89U;
    msg.pitch = 0.24156000597686644;
    msg.amplitude = 0.6112129957575022;
    msg.duration = 2776U;
    msg.speed = 0.07435071690438955;
    msg.speed_units = 153U;
    msg.radius = 0.2646516924309992;
    msg.direction = 45U;
    msg.custom.assign("EGPDSSNOPEZRYTCTTFPRIVVGCDHPBGGNMNXYLODDIENLJOLWOSPWZDNFHRNWAKLZCFLRUKUEKBAWPIEUMQAXOXYYSIOUVQHCTVBWPFMOIAAJHFIESGRIJJVKWCRVANZZGJCAZJSKJPRXXCQEMHHZGUUMMAJBIYFKOBORZAGVBENQSHKLZHXQSWLQTUTAFWL");

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
    msg.setTimeStamp(0.4866854290630368);
    msg.setSource(34270U);
    msg.setSourceEntity(249U);
    msg.setDestination(5350U);
    msg.setDestinationEntity(229U);
    msg.timeout = 31191U;
    msg.lat = 0.5401515633134951;
    msg.lon = 0.3650716934462723;
    msg.z = 0.0021717261041499514;
    msg.z_units = 41U;
    msg.pitch = 0.7460599540913264;
    msg.amplitude = 0.5982869815797291;
    msg.duration = 65026U;
    msg.speed = 0.5624398095260711;
    msg.speed_units = 88U;
    msg.radius = 0.4854889193705938;
    msg.direction = 102U;
    msg.custom.assign("ACAFTXPLJMCEDDAFQYJTUUPOGMRWWYOIWUHGRBGBEKGWKPZOUQONEHXUBHXTB");

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
    msg.setTimeStamp(0.8766134630860477);
    msg.setSource(53247U);
    msg.setSourceEntity(102U);
    msg.setDestination(16710U);
    msg.setDestinationEntity(242U);
    msg.timeout = 57897U;
    msg.lat = 0.6657926710778415;
    msg.lon = 0.26198600253235826;
    msg.z = 0.6683677311832321;
    msg.z_units = 20U;
    msg.pitch = 0.48155835656203605;
    msg.amplitude = 0.7421605434720542;
    msg.duration = 12164U;
    msg.speed = 0.874615032977762;
    msg.speed_units = 12U;
    msg.radius = 0.9432248544876367;
    msg.direction = 107U;
    msg.custom.assign("JSRDFAOHUCKPUTUDTDOXRPXFQPGAUAXXJXSVFKLUQCLDXJAOIRSMFFODNGWUCIRSSFIUBLHEHKFBNMETZIPWXRGYVXPVNXJETZDCGWMCYISCZHQEQTJKJDESAHMHB");

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
    msg.setTimeStamp(0.16408214499574114);
    msg.setSource(36892U);
    msg.setSourceEntity(148U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("MUEIWJHNZYHFPXMKEZUMMSSLHYOJTRORYHKKMQDSOHTVGVYGDXPZDGZSEHRPXQBINQESRPSSKIOWDSKPXVQOYYRIJIEJGVURMPMRIAYPPLVFBYCLUCCIBFFQBMZGOEPDADYCVRTIDZFTGB");
    msg.reference_frame = 73U;
    msg.custom.assign("RYELWCZCTNJGVPEMLLIJRIBBLAQFPYWCDNRPHRKLJSZEEIGPJXDPKSWKJMQAEIFVUMHGTVGVBRGQYFBONZFLOQEPHDUEWWUAAPOTWDXMKSUBQYSDKQIFFVVZJYMVANXKUMHNEQXDUFZPFXHKCJTLMVOWGPXIUYSDWSYPDLDHZ");

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
    msg.setTimeStamp(0.4715412160770218);
    msg.setSource(58670U);
    msg.setSourceEntity(131U);
    msg.setDestination(37633U);
    msg.setDestinationEntity(118U);
    msg.formation_name.assign("IYTPXNVMPPPQCQJMZTFGKIAUFQDRFELDZWLMQCDONFFNCHBHZFRBZFDJKHZQYGSOUWGTXHEIVMBIMTZKCRDSEURNJGTUBUIXIBPAALNLFACOEIXHBGACUMESRMDLZCJTDCWJOPQPMHRQGKSSGYYTJSINCKGOSNASEKRBIRWLWXAJHDEJMSVAWPLYEUKBEIWPYHELVMOQULGUDQWUYFJHTZQVWGOAKNRXHVY");
    msg.reference_frame = 155U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 14937U;
    tmp_msg_0.off_x = 0.12856357733021562;
    tmp_msg_0.off_y = 0.4386741026647226;
    tmp_msg_0.off_z = 0.9003605980599453;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CJRCMMNWGFONYKULQOBGIKXUPVRSFDJYYCJYYIJJEHXWBLBKRFGVQHZPRQZPRGZLXMUAOHLITMXIXHATMAEDPNEBSFWEBUTGDSW");

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
    msg.setTimeStamp(0.5588070640549903);
    msg.setSource(12355U);
    msg.setSourceEntity(136U);
    msg.setDestination(17397U);
    msg.setDestinationEntity(5U);
    msg.formation_name.assign("VZNJQNMDCCKYZRIMXZYWFUUSVG");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46130U;
    tmp_msg_0.off_x = 0.3199767192448961;
    tmp_msg_0.off_y = 0.8935711413976771;
    tmp_msg_0.off_z = 0.32041601359146943;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OHKRKSUDJSPLURIAEPIOZXBBSLZRKWUYHJPRUDVLJOFMRQREAJUVSEBMVVWNPXLGBRUMPYLAKMCAMBFIWLGYVDUQATKMZTHTCIRHZNVUATHFSJEGWKELKYCWPZSFTOJDZUYSTBRGZOMIJNOKPQDXVSZGSFLFIKFXNCPWEEFMJIGBNIQHWQDCYGWYSDTQNBOPJWT");

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
    msg.setTimeStamp(0.33971482333353986);
    msg.setSource(11617U);
    msg.setSourceEntity(27U);
    msg.setDestination(55523U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("MRPQQNALUFGRYVNSR");
    msg.formation_name.assign("HXPGXZBYDOTRXSHZWVCLDQFMFOAHCLNOJDLKSORRXCXDWEVKOHGNBBZEHKIWIGTRVZIFJFYWFYLJKUCANOJVEKLYGFATQQFJUTPWQIZCCBQYMLNNXDIMKMHIEGWCSYXSRYGJTQAIQVQDRCQNEJKTRNXFXMAYJSAAHMTBLBEHUDHEWRDVUJTAEPCWGUBFZEWVJSSPRRASIMPVPOGOKGTVOPSIXFAPBNNTDYIHMLVULYPSZBEK");
    msg.plan_id.assign("YAXKGCVNTJYKRMKJROKEMFXQIIJYQNWNJSDLTXOFURCOCSSIKBEAILLRDGYELZEFQUFHPKIYUWRSWLXTTYXGABQKBEJZJWPXHYALABFWGV");
    msg.description.assign("FRHQZXPEHPAIQNKKIPUSQEQYCUWUJLMCOYRNVGBAOTXGDXEAPKMUOMDOEQPBUTVLTETMPPBVCQXSMO");
    msg.leader_speed = 0.6614922760540988;
    msg.leader_bank_lim = 0.6034917624556662;
    msg.pos_sim_err_lim = 0.3075629922453147;
    msg.pos_sim_err_wrn = 0.3824398636015557;
    msg.pos_sim_err_timeout = 31642U;
    msg.converg_max = 0.3464309937290425;
    msg.converg_timeout = 59076U;
    msg.comms_timeout = 48888U;
    msg.turb_lim = 0.1464938856647069;
    msg.custom.assign("HURSGJTXNHMQDONACQQYTLOCKHWSUXBUMCPFZGRZLDQKVCPMJCPFOLESRRFRYNVYNTHLSOMUKFFOLZFVPWHHZIHIZFGMSVIXZVRDFOTJBVXMGJTZYYQSTWHPGBDRCJVKHJEXBLNYMLIDEJLAWIBPKTLEVCNKWVODWZNQPXBQPGHUIEZTCIFREJUFPRSEMOUXYIXCGNLEPDDU");

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
    msg.setTimeStamp(0.7641935604666229);
    msg.setSource(35217U);
    msg.setSourceEntity(251U);
    msg.setDestination(47860U);
    msg.setDestinationEntity(138U);
    msg.group_name.assign("NSGGRICKZVTSPMBIFLPOPDILBZSZAHBCITIJZKNUVSMQTWUVJRQVXSZPAEDYNXRKZXYYJFKRHEVQNGJNDGETQWBTRJPAXLDWRJOVAFFMHEUISJTMRUIGWFLNYDCVKCQWSOTPBXPQXQFMIECHZLJAMWKMLAKGXCYSOLCLHMFCHADLNMXYCQBKDONEJBEGOPTZNHNUHKOX");
    msg.formation_name.assign("DVNKQJXTSMNOBSDUZWMEIOWVRJCBTHRUWPLGKULOPDZJPEWSUBIHHRJFWXVRHJDXFSQHZAFYDVSHWZCQDLANRXSRCENTWPRVFLODMIBP");
    msg.plan_id.assign("JPFDYLSKTRVYXYVRHLKUCTXSKNYFMZTUKZQQWGARQWPDMKXMAJHINCPAVCMJBEUQJRGLHWTPCQZAGADPOFVXWXETADOVEHLMBTFSHJCQIDEZYFLHKFXIGYHBVYDMZBUMNOECOGBMVBINDSQCELNSXJNKURAWOMZYIIISURSZUPKWIPVRSBWHO");
    msg.description.assign("EZVUGCMHASCTDEBE");
    msg.leader_speed = 0.46660858991794296;
    msg.leader_bank_lim = 0.5472083314907962;
    msg.pos_sim_err_lim = 0.9184713865707758;
    msg.pos_sim_err_wrn = 0.009185203981054157;
    msg.pos_sim_err_timeout = 21443U;
    msg.converg_max = 0.44406524782444046;
    msg.converg_timeout = 46387U;
    msg.comms_timeout = 20901U;
    msg.turb_lim = 0.1487010297743312;
    msg.custom.assign("BCMGDZNRLPWAMTTDSERQLYIVVLLGFUSWURALYICWWRUXVUVYTCLPHJAEOSAOCDBCDXQERHTUDJKPGZFQEBAKIJEXAYBDTUKCXKMDSUXWHH");

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
    msg.setTimeStamp(0.0718547379014951);
    msg.setSource(37683U);
    msg.setSourceEntity(252U);
    msg.setDestination(27924U);
    msg.setDestinationEntity(223U);
    msg.group_name.assign("VMLIMNPTIVHXJSUGZGTAVYGSYUJHITYNTEFEDGRJWSFTEAZWQYARJHEKDMNXQXQVBRAPAQRFDZATNXIWBIRRHTPMEANQURNFJXMBCHUOCWQOUAAUFPDPHYDUUMOBUKIOFDQKGVOZXZZBTESOEJLCOFWVNBKIHGDMHPZOWCIPSLKYKXWPNGSL");
    msg.formation_name.assign("QTDIUNUBELPMBXVJIWWELUFQRNMLACTWTCQCSJEDYSPIGNKLWYQORHEZXNZQMWFBXVCVVYKDG");
    msg.plan_id.assign("QOYMJRHOXKCCVCQZRNWDLXAZIAUVVCZFIJWIRAWEBTJHNNEUOSANSQRTCYCQPIJANGZDKRZVAUPRSMDDYWBQKNLLXWFRZBUPIGYESOWPJMXKWCIDJUGXCHRIYEDFNQGEZUKLETNSPVBBLQSMVDDCTPNOGLSVPZIAXJET");
    msg.description.assign("HAQCIVRMTOVSDZHXGPOQIAFONKEHMUCNPIRLUZGXUGUBC");
    msg.leader_speed = 0.186746473591476;
    msg.leader_bank_lim = 0.5705342745744919;
    msg.pos_sim_err_lim = 0.8689596522834766;
    msg.pos_sim_err_wrn = 0.056760213239680946;
    msg.pos_sim_err_timeout = 44621U;
    msg.converg_max = 0.3223354203442702;
    msg.converg_timeout = 20295U;
    msg.comms_timeout = 18336U;
    msg.turb_lim = 0.6487924866663319;
    msg.custom.assign("OULRFNVAONXSWSTWKZHRCQTQUGZNOEBUFGRAFYTCCWRTDOCRXFLQOSGKOHESGDYYULCEXGMXZDKMRIJFCVVDMMQGWQQECHHEUIRPWYTZKWZNCLAOBUNIBXEULAWSVNRT");

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
    msg.setTimeStamp(0.6537522950232145);
    msg.setSource(48501U);
    msg.setSourceEntity(232U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(200U);
    msg.control_src = 61594U;
    msg.control_ent = 198U;
    msg.timeout = 0.674604548733857;
    msg.loiter_radius = 0.8309898306778062;
    msg.altitude_interval = 0.6780655977327573;

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
    msg.setTimeStamp(0.2924154726752113);
    msg.setSource(53822U);
    msg.setSourceEntity(73U);
    msg.setDestination(52047U);
    msg.setDestinationEntity(225U);
    msg.control_src = 2587U;
    msg.control_ent = 14U;
    msg.timeout = 0.025705409103811472;
    msg.loiter_radius = 0.10541892500437433;
    msg.altitude_interval = 0.594266520212363;

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
    msg.setTimeStamp(0.2894916884158111);
    msg.setSource(6254U);
    msg.setSourceEntity(235U);
    msg.setDestination(17189U);
    msg.setDestinationEntity(149U);
    msg.control_src = 59904U;
    msg.control_ent = 23U;
    msg.timeout = 0.5402258172582615;
    msg.loiter_radius = 0.776498375331469;
    msg.altitude_interval = 0.8267458979849186;

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
    msg.setTimeStamp(0.9688573008332849);
    msg.setSource(30419U);
    msg.setSourceEntity(127U);
    msg.setDestination(16784U);
    msg.setDestinationEntity(227U);
    msg.flags = 29U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9089338602235859;
    tmp_msg_0.speed_units = 98U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9325970014830058;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6402349044116074;
    msg.lon = 0.8183243605928127;
    msg.radius = 0.17842415452497118;

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
    msg.setTimeStamp(0.05832119594708274);
    msg.setSource(7925U);
    msg.setSourceEntity(193U);
    msg.setDestination(17965U);
    msg.setDestinationEntity(76U);
    msg.flags = 114U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5772289925629414;
    tmp_msg_0.speed_units = 186U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.1562158063862078;
    tmp_msg_1.z_units = 222U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.01454315701329767;
    msg.lon = 0.7416031245437592;
    msg.radius = 0.15657015785214645;

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
    msg.setTimeStamp(0.08534596578428022);
    msg.setSource(10094U);
    msg.setSourceEntity(184U);
    msg.setDestination(31648U);
    msg.setDestinationEntity(107U);
    msg.flags = 240U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.008910148293910458;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07619572500200689;
    tmp_msg_1.z_units = 105U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5583753873516138;
    msg.lon = 0.1646626876821069;
    msg.radius = 0.8608322764001681;

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
    msg.setTimeStamp(0.012965594859869367);
    msg.setSource(32641U);
    msg.setSourceEntity(206U);
    msg.setDestination(26163U);
    msg.setDestinationEntity(187U);
    msg.control_src = 26504U;
    msg.control_ent = 31U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 58U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.11877742686955906;
    tmp_tmp_msg_0_0.speed_units = 61U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.45775849659350054;
    tmp_tmp_msg_0_1.z_units = 18U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.534446069303526;
    tmp_msg_0.lon = 0.21021996753029215;
    tmp_msg_0.radius = 0.5181018062743563;
    msg.reference.set(tmp_msg_0);
    msg.state = 20U;
    msg.proximity = 174U;

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
    msg.setTimeStamp(0.9411817059033402);
    msg.setSource(20888U);
    msg.setSourceEntity(111U);
    msg.setDestination(32187U);
    msg.setDestinationEntity(161U);
    msg.control_src = 48309U;
    msg.control_ent = 252U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 45U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1655023721487905;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3204358851859621;
    tmp_tmp_msg_0_1.z_units = 171U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8816823392909231;
    tmp_msg_0.lon = 0.7104120035820886;
    tmp_msg_0.radius = 0.1608169842069287;
    msg.reference.set(tmp_msg_0);
    msg.state = 186U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.06755608102511568);
    msg.setSource(33053U);
    msg.setSourceEntity(105U);
    msg.setDestination(50576U);
    msg.setDestinationEntity(43U);
    msg.control_src = 26045U;
    msg.control_ent = 222U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 218U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6782202199531446;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.08862579987860197;
    tmp_tmp_msg_0_1.z_units = 138U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5147816412046844;
    tmp_msg_0.lon = 0.8218031783211339;
    tmp_msg_0.radius = 0.6822620938916905;
    msg.reference.set(tmp_msg_0);
    msg.state = 46U;
    msg.proximity = 213U;

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
    msg.setTimeStamp(0.3944512949994934);
    msg.setSource(38366U);
    msg.setSourceEntity(89U);
    msg.setDestination(45366U);
    msg.setDestinationEntity(98U);
    msg.op_mode = 202U;
    msg.error_count = 63U;
    msg.error_ents.assign("LBXRIICDLVPRMGFBWOMRBPICGBCRZGBJDNOOTOYZUZTAXVIVGTKMZZHHELKQHNUNLHSCQYMAWYHAGJHVZSFDKJFDCWPSTCSVNGPNQSQTLNKXUOBLYJHKZJDPSIFWURQWVOTFVIEGMOLBWRJSJEXUEWCEPOUNCEVTJDMCLKAKUQEAKPXNJOIBWABSGERKOEJADHDZWISXGFQQYURPSFYDFMIUDWXAPNMMAYVIQPTZ");
    msg.maneuver_type = 29556U;
    msg.maneuver_stime = 0.5556807224182042;
    msg.maneuver_eta = 65218U;
    msg.control_loops = 3815375008U;
    msg.flags = 18U;
    msg.last_error.assign("SRWHVMSFFAWHALRYABBNHXBBBSMKRZQGTOZUJZPGMXRMVLSFIPTEPTUGWSLHODFOQEHZCAIEEJMUEHJDOWIEJFYZGTSGYIRHAKCHDIFEXWTNPFPZYGQIIUVNTNBBCBKOQKRICYHWDJZDLZACELLYOHAALYWLXMDRNGDTYVWSEXXXFWXCUQQNFLKIXOUZLYRKVJGTZYCUKOM");
    msg.last_error_time = 0.16457730915139712;

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
    msg.setTimeStamp(0.4991041522051721);
    msg.setSource(48035U);
    msg.setSourceEntity(81U);
    msg.setDestination(42015U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 89U;
    msg.error_count = 163U;
    msg.error_ents.assign("CKEHJLXCYXXSQNEUMPKCCTDSLPQWIDEIAFJXGSYDNEYDJTVFPJKTPHNZARAOEIPABYMNDWGAKRFHVKTANBWMHHKXUVNLPUGYNUTHAVZWDKJVGJTHOQPORLLIEOIDXBGOCLCRJXZMLRQKBCWXZBXJDIBASVERZYOMVHMVFIG");
    msg.maneuver_type = 35175U;
    msg.maneuver_stime = 0.2828168607626961;
    msg.maneuver_eta = 14379U;
    msg.control_loops = 2196495556U;
    msg.flags = 195U;
    msg.last_error.assign("TJDFQTZEZTZLYDGWLDAGAFVUOKAQKSKDSOASRGPHHXXICEVUHQEXROIIUYGVPVTVND");
    msg.last_error_time = 0.08679115829498707;

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
    msg.setTimeStamp(0.5227174122268173);
    msg.setSource(34982U);
    msg.setSourceEntity(55U);
    msg.setDestination(38309U);
    msg.setDestinationEntity(28U);
    msg.op_mode = 101U;
    msg.error_count = 244U;
    msg.error_ents.assign("QYDFPPTKFVPQDLXNTP");
    msg.maneuver_type = 60611U;
    msg.maneuver_stime = 0.5384335981634921;
    msg.maneuver_eta = 54000U;
    msg.control_loops = 2926872383U;
    msg.flags = 251U;
    msg.last_error.assign("EVYFVYSBVEVFMNRBSTJZHVYWUQRFOPLTEZQTHNJWBLKPBZLGFFMGTTRJXVCWUIZSWEPTUMWMLCGZSKDYMUKDYKBNC");
    msg.last_error_time = 0.7528945704457808;

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
    msg.setTimeStamp(0.7024577132698592);
    msg.setSource(35878U);
    msg.setSourceEntity(44U);
    msg.setDestination(34766U);
    msg.setDestinationEntity(46U);
    msg.type = 141U;
    msg.request_id = 6577U;
    msg.command = 52U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 61869U;
    tmp_msg_0.lat = 0.6395708902268454;
    tmp_msg_0.lon = 0.42483249262506406;
    tmp_msg_0.z = 0.31517320536286286;
    tmp_msg_0.z_units = 253U;
    tmp_msg_0.speed = 0.9914214366942081;
    tmp_msg_0.speed_units = 41U;
    tmp_msg_0.custom.assign("WJXMRBFHEVACC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36308U;
    msg.info.assign("FDXZZPDMSYQQJUFIRSIOQTAXFZAKTFJYAGTDYDZVWAWHWINIUFTLMBKRXJNBAUIPZA");

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
    msg.setTimeStamp(0.47870597502016154);
    msg.setSource(65376U);
    msg.setSourceEntity(254U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(78U);
    msg.type = 144U;
    msg.request_id = 34501U;
    msg.command = 168U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.5603439814052509;
    tmp_msg_0.lon = 0.0005335103802538432;
    tmp_msg_0.z = 0.34864896591199324;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.radius = 0.8091202407440747;
    tmp_msg_0.duration = 62084U;
    tmp_msg_0.speed = 0.6603745432506651;
    tmp_msg_0.speed_units = 20U;
    tmp_msg_0.custom.assign("KWFLGPVTNSTQOEFEVOZTMJCYGRUATIGFNHYRZZAKUFPLRBSICMKYFQLSWYAMUWBHVRVDVCNEBWUUYBTXGKNIFRHCXCUVAQZEIOWKPX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 61679U;
    msg.info.assign("ESELFDEQSMLIMRXNFDIWPWQCSNMSKUOEASSCYICGUHRRSMRPAUMYHNYEQOBZPQJVCKSOJFGZXLZDBJOIWNNUKFTXFRIKVNRPMAUHASOXYBZFURKGODMHNAPQ");

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
    msg.setTimeStamp(0.9214110225068458);
    msg.setSource(62954U);
    msg.setSourceEntity(3U);
    msg.setDestination(28991U);
    msg.setDestinationEntity(103U);
    msg.type = 165U;
    msg.request_id = 51326U;
    msg.command = 172U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("CFOCZAYFTWECXWKLGAAOXQCUTAKIDRUVOJKTVZVOTCRYERMNCBUMDP");
    tmp_msg_0.reference_frame = 210U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 17953U;
    tmp_tmp_msg_0_0.off_x = 0.026437028667322005;
    tmp_tmp_msg_0_0.off_y = 0.9268263631530076;
    tmp_tmp_msg_0_0.off_z = 0.5739273416196817;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("MUGKSEAQBEKEQZFAWDRRMWUVNYGNHICQMTSZCHLMITSNEPXXZQIDBBUVLXRODOKAXTFJCBMGAXMNWYIWDHLPIZDMCSPGTCAV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4615U;
    msg.info.assign("XKUIPBLJYCMYSLWMCQXZUASLBXEDGQNXFRVBJKLUVFNBPQEJYWBUTDQJOTXECCYTBAYVYOONWRFZJGFKNDADRFSPMDVRHIRSYHLIKPKLJHKVGINVVSRBZTJORMQRZFMYVTWLJNAQUUTTLTDB");

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
    msg.setTimeStamp(0.5927430616340225);
    msg.setSource(59227U);
    msg.setSourceEntity(193U);
    msg.setDestination(30085U);
    msg.setDestinationEntity(220U);
    msg.command = 254U;
    msg.entities.assign("DDCUWWLVOZPPFXRPJZNVOVSAFWZRCUIDPIAYSISVBSEOVANIPWIGVHEJAQNKCHQAGOACGCNUCOZLMVGZIJXLDJGBFXJRJSBHFXVNTPCSFLNKMSYYRBIUYIQOPQPVMKOLGEQOBMEORTEMEHBDTLAQXNWTYHISMZDGZVXLTBJYYLHTFKRAYWOYWUDRMUGNTQGTXKBMURUAPNXHLJWKXCHEC");

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
    msg.setTimeStamp(0.7791261215926457);
    msg.setSource(10610U);
    msg.setSourceEntity(202U);
    msg.setDestination(6712U);
    msg.setDestinationEntity(242U);
    msg.command = 49U;
    msg.entities.assign("MGHNYFPDVMDVENOKINPQAWSBDGJWGBHMGFKZFDUWLPKBZLCZVVXHSQJZNSUBUYZOLZVPHLGZCYBCYMJNWMJUS");

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
    msg.setTimeStamp(0.2849061183047924);
    msg.setSource(6570U);
    msg.setSourceEntity(152U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(134U);
    msg.command = 188U;
    msg.entities.assign("CGHDXNSOIEAMYDBIVBFEZTPGCHUSSAQUBCXLBFWIZXXOTYX");

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
    msg.setTimeStamp(0.7564123557563257);
    msg.setSource(24478U);
    msg.setSourceEntity(230U);
    msg.setDestination(23993U);
    msg.setDestinationEntity(14U);
    msg.mcount = 10U;
    msg.mnames.assign("PNZRJKZIDBNSUIMGRFDKILVLMSHNCRUVYGEZHHYJDRUPAJNFHJL");
    msg.ecount = 253U;
    msg.enames.assign("TNXLBBSAWVRUOPIADJQEGBXTLPXCZOPRFMHCJTJJAYVICAIRXGGPPUSKVDPBGMSHHTGKOOSSLAKJVKLHHFJIEWTOIUYQQBHITNJOZOFYFALMTUXOQWREMBCDEILZLBYFKERZDAHUTFPQNJDMGUVCQRCCNGZAALMZYHNYFGQEYVEKFBCDQXHIPLA");
    msg.ccount = 56U;
    msg.cnames.assign("GRUWZIRUPGHGQUAHUMEHTFPNVGMYJKZHPNKMTWCDPDAXRABQQBDBMJIDNVQLRE");
    msg.last_error.assign("LQYPPSGVNFKUOTJEUL");
    msg.last_error_time = 0.5777944438032889;

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
    msg.setTimeStamp(0.7580832231230834);
    msg.setSource(6640U);
    msg.setSourceEntity(140U);
    msg.setDestination(1484U);
    msg.setDestinationEntity(44U);
    msg.mcount = 144U;
    msg.mnames.assign("SBRUOQKTPTRWMCYXMGUQWCUDYCIUARIQGEQZAKAPUOEBQMGZPHTWJFYPCDANBRVLQMJEJKZNLGIJJTHLKCALVEQFJDNZQOMOHGAPHFLAGEELVRSIGACIRQYMBBWZNJEBTGDBDPMTGXEPAXASXWHNFUUFOYKSXPXVFO");
    msg.ecount = 242U;
    msg.enames.assign("ZLOKAULNKKCLJGKSVMIESPDRRLXSBIZCDXTZUAJHPGUCESLMQDZCHOGPADEMPYCQDBTXGOLYHYNBKPYUYOMNFGCEGBJSLTAZEBQRXFKDNBKOTCPAFVNJXBYPQPZHFSMBVMWGFJOWSIYEQHMJRTIQWCQLIDPAGWNKBJREOIEVXNWVJHFLYITBROGMZSFUUIXTAYE");
    msg.ccount = 122U;
    msg.cnames.assign("IDDXENLPDMYDJUIVOEPJATEW");
    msg.last_error.assign("CISHDDRMVGNNGONLXIRMRKSATHATMEKSLIVASQRDYJHFYWBVTRYXRCRYDCYQZFMDKZJIGPJZCAIZHNKFEKCULJBVHPJMLQG");
    msg.last_error_time = 0.0782355943604115;

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
    msg.setTimeStamp(0.3091814351333284);
    msg.setSource(57243U);
    msg.setSourceEntity(126U);
    msg.setDestination(53106U);
    msg.setDestinationEntity(128U);
    msg.mcount = 79U;
    msg.mnames.assign("VOMLTNKOEYUNRKZWFFMDIXDSRXVSNETNKJYKYDUBVECBJZBVRXXTCIAZVPDZYKWRKQEOYDYRPXAVLIHZNLAMJTYQHYPJMCUBCBKTWOWKPFSDCOFZITZUJQPIRNNPMOAJXHMD");
    msg.ecount = 70U;
    msg.enames.assign("REOABVYSFFFHLGOMATNMIRGXVKRYOEQWEVTAUWEGZUVCDETAFLDLJWVVMEXCKXKKVDWSZNAWCKRZNDMHTYIRJPHQSNHFASKJHXUDXURCGKKQBYLPRLPHLWPQ");
    msg.ccount = 172U;
    msg.cnames.assign("XBKLAYFRDBQHSWUZKLYQQHXBPGNAMXMGFBFIMDZRAHULDWSOXULJDGIINYXOCPZGWECFAJPCLAOAZFGEBPFBCKSMWTTHZRQMSRCKLYMACXHJWTIVGWTNPVHGYHWHYO");
    msg.last_error.assign("QFWTDLNMGJHQQFUVLRWINGEITU");
    msg.last_error_time = 0.40610043452712097;

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
    msg.setTimeStamp(0.9508649420551947);
    msg.setSource(61073U);
    msg.setSourceEntity(138U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(116U);
    msg.mask = 64U;
    msg.max_depth = 0.029550635968967898;
    msg.min_altitude = 0.10133808984215387;
    msg.max_altitude = 0.7437068213571671;
    msg.min_speed = 0.6452339768311799;
    msg.max_speed = 0.3097698841459652;
    msg.max_vrate = 0.43488488428106753;
    msg.lat = 0.5401428910913223;
    msg.lon = 0.456199262716393;
    msg.orientation = 0.08194196076054217;
    msg.width = 0.32954293498189957;
    msg.length = 0.770204489393274;

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
    msg.setTimeStamp(0.8302038648453676);
    msg.setSource(3855U);
    msg.setSourceEntity(99U);
    msg.setDestination(28075U);
    msg.setDestinationEntity(76U);
    msg.mask = 164U;
    msg.max_depth = 0.8386806924380165;
    msg.min_altitude = 0.444446168857618;
    msg.max_altitude = 0.8637422291493184;
    msg.min_speed = 0.46985104582254655;
    msg.max_speed = 0.36638935031973296;
    msg.max_vrate = 0.19976140411449173;
    msg.lat = 0.8265794529249137;
    msg.lon = 0.24590025989736009;
    msg.orientation = 0.1293453076409592;
    msg.width = 0.09675631742014223;
    msg.length = 0.6104082769918893;

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
    msg.setTimeStamp(0.24411388448652305);
    msg.setSource(38887U);
    msg.setSourceEntity(145U);
    msg.setDestination(27652U);
    msg.setDestinationEntity(52U);
    msg.mask = 56U;
    msg.max_depth = 0.8274877768384814;
    msg.min_altitude = 0.32304814620996913;
    msg.max_altitude = 0.026296665695787702;
    msg.min_speed = 0.04819398780128614;
    msg.max_speed = 0.8949139436877487;
    msg.max_vrate = 0.9535663583354651;
    msg.lat = 0.348540996342775;
    msg.lon = 0.1750035520018628;
    msg.orientation = 0.2818992436652542;
    msg.width = 0.5425722140450916;
    msg.length = 0.5240289838178348;

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
    msg.setTimeStamp(0.12415712020804015);
    msg.setSource(58697U);
    msg.setSourceEntity(216U);
    msg.setDestination(63305U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.8598526892402648);
    msg.setSource(64698U);
    msg.setSourceEntity(44U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.5745993238531759);
    msg.setSource(64376U);
    msg.setSourceEntity(234U);
    msg.setDestination(52329U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.010689238989307848);
    msg.setSource(50290U);
    msg.setSourceEntity(188U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(156U);
    msg.duration = 61441U;

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
    msg.setTimeStamp(0.5166829687108497);
    msg.setSource(52971U);
    msg.setSourceEntity(185U);
    msg.setDestination(42787U);
    msg.setDestinationEntity(162U);
    msg.duration = 15752U;

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
    msg.setTimeStamp(0.2025494528745445);
    msg.setSource(61031U);
    msg.setSourceEntity(67U);
    msg.setDestination(40894U);
    msg.setDestinationEntity(159U);
    msg.duration = 9834U;

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
    msg.setTimeStamp(0.7484836268135049);
    msg.setSource(53655U);
    msg.setSourceEntity(46U);
    msg.setDestination(64398U);
    msg.setDestinationEntity(238U);
    msg.enable = 220U;
    msg.mask = 3161681341U;
    msg.scope_ref = 1573244047U;

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
    msg.setTimeStamp(0.8635359193239202);
    msg.setSource(43655U);
    msg.setSourceEntity(99U);
    msg.setDestination(61747U);
    msg.setDestinationEntity(161U);
    msg.enable = 228U;
    msg.mask = 3059577498U;
    msg.scope_ref = 621580563U;

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
    msg.setTimeStamp(0.8878034527464416);
    msg.setSource(12914U);
    msg.setSourceEntity(151U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(8U);
    msg.enable = 232U;
    msg.mask = 2890460377U;
    msg.scope_ref = 1445571100U;

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
    msg.setTimeStamp(0.3437033025452382);
    msg.setSource(49235U);
    msg.setSourceEntity(175U);
    msg.setDestination(23739U);
    msg.setDestinationEntity(206U);
    msg.medium = 118U;

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
    msg.setTimeStamp(0.9419193450506014);
    msg.setSource(19873U);
    msg.setSourceEntity(149U);
    msg.setDestination(30744U);
    msg.setDestinationEntity(197U);
    msg.medium = 191U;

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
    msg.setTimeStamp(0.3189438917778711);
    msg.setSource(35176U);
    msg.setSourceEntity(41U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(159U);
    msg.medium = 29U;

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
    msg.setTimeStamp(0.14680483861182503);
    msg.setSource(23900U);
    msg.setSourceEntity(21U);
    msg.setDestination(40770U);
    msg.setDestinationEntity(182U);
    msg.value = 0.08808337887135276;
    msg.type = 67U;

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
    msg.setTimeStamp(0.5407703464724035);
    msg.setSource(45319U);
    msg.setSourceEntity(4U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7210977905501293;
    msg.type = 137U;

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
    msg.setTimeStamp(0.7927960043364016);
    msg.setSource(6868U);
    msg.setSourceEntity(223U);
    msg.setDestination(9859U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8347858816039506;
    msg.type = 217U;

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
    msg.setTimeStamp(0.8900489326810983);
    msg.setSource(49502U);
    msg.setSourceEntity(68U);
    msg.setDestination(64530U);
    msg.setDestinationEntity(195U);
    msg.possimerr = 0.09697900372431278;
    msg.converg = 0.94196897666182;
    msg.turbulence = 0.7799888521613035;
    msg.possimmon = 195U;
    msg.commmon = 65U;
    msg.convergmon = 197U;

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
    msg.setTimeStamp(0.09970621256181933);
    msg.setSource(24421U);
    msg.setSourceEntity(193U);
    msg.setDestination(24322U);
    msg.setDestinationEntity(134U);
    msg.possimerr = 0.39616386965972117;
    msg.converg = 0.3140648860308678;
    msg.turbulence = 0.8765510760851027;
    msg.possimmon = 228U;
    msg.commmon = 190U;
    msg.convergmon = 246U;

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
    msg.setTimeStamp(0.7378041399391824);
    msg.setSource(63754U);
    msg.setSourceEntity(20U);
    msg.setDestination(24306U);
    msg.setDestinationEntity(111U);
    msg.possimerr = 0.2836857169563387;
    msg.converg = 0.7692882463949728;
    msg.turbulence = 0.6594126527407489;
    msg.possimmon = 217U;
    msg.commmon = 138U;
    msg.convergmon = 64U;

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
    msg.setTimeStamp(0.1441310980942737);
    msg.setSource(64958U);
    msg.setSourceEntity(118U);
    msg.setDestination(80U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.05155253611075705);
    msg.setSource(7861U);
    msg.setSourceEntity(120U);
    msg.setDestination(62024U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.49535874138609015);
    msg.setSource(36207U);
    msg.setSourceEntity(220U);
    msg.setDestination(7851U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.6272098889538568);
    msg.setSource(31687U);
    msg.setSourceEntity(84U);
    msg.setDestination(3339U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("EOIQPKWFDNABDLHVZOEQFOPURTTXUDLXMKPGQUBOTQLFHNAXPYUJFBSCKSZCUQMMGKNSFURISGMIYLVPOAEKJGZZLVBWZDJWZXIQFJHPSBEHWNAOCBPIG");
    msg.description.assign("MQMKJYYSJJMKGCQTUHYURVKSGVPPCTLYMFQVZIFONOHXWAQWEOHHSMELTEHEEQBKVAXWFKZGPUDZWQBJEXKHWTKFSCZQPUUMHAQYDZDWTNNLOGWMFVRXQJXAULAVJXNDPWKTAQRMEGNFZGVCNEISJGBRGRDGHLKRVFLRHLBTAYIOVPDSDRHCTXYAUODSWYNBDIFTBYWLOSPGZJROFBZMBSEYZIIICEPULDZPFUURVXNCX");
    msg.vnamespace.assign("EKEVZKRQXDCIATSXDPAHXHFWUABQSBZFMUGJWNPMLSCVTSTVKTEGKZ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("FYJHHCSGNRKFQBNMYIWOFSHAUEUYTMRTBDLDRQJWMDNPEKQVJQXASHVYKNTTELNRGUYYFEQMSHBVFLYJHOKTEMCHPXWGUYBIXWGNNZCIYEKFSJEDCVJFUJPNAKARUZGHXPESGUIBIXWBQLQHXOLLINJRZOQWOOSHZPCTMIRCAXIDOYWUWLKDVUSXMCBAPXVAAZCDTBKMDAKLFITQGCBEQVOXDTGLGPGDARRWVFZMBUZRZL");
    tmp_msg_0.value.assign("JSVMCSMBQGGRFPUVHBIZAFHLTATSL");
    tmp_msg_0.type = 74U;
    tmp_msg_0.access = 107U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZDMYWAVCGLCXQHZZCVQRTEVRXGMOPCQDNCSLWAMNASSDJIYULWZKAGGRLDQYIWXQUEUVIOWAHZCJFAPOIGZFSRNTBAKDDLUHPBZIIALWGMTQUCHHIEDJWOKZYAGCXYVTYAFNIFFWXZKRUEGLBHSQKKSFHMJXMOBTPOEVMBMLNYQJREIJURSHFTOQWJNIFWUUJOLBPVTOGTYNRFVLXENGDVFUJPHTEQVBBPTYKP");
    IMC::VehicleLinks tmp_msg_1;
    tmp_msg_1.localname.assign("RLCNFHQFPXZUCEDZOVJWHLZPIRCTELEQKBAMBMXFTABJUJPMKEIHSEXBADCLRFLGWJBSOBAMGNDCF");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.604255780666043);
    msg.setSource(61082U);
    msg.setSourceEntity(118U);
    msg.setDestination(17890U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("PQLAUIHVZQBZEJOOZQLURXRFNZCYJSUHJIANHIMJNDYHLDTBJGUQKGMTKUMPITTCJPWIQVGPHHMERSYLJTGGZRZFBIWMFALSJFBNDWVKXFOCQZPAXXWXVHASXDCBWYXSCNFPYGEQEHSKT");
    msg.description.assign("EUHIZQPFXEHOIDOXPBATENKBMHCNKDXMMGQCQCNRFMQTUPNSWRUCLQCWJPZVNFACOAHENPABUTJAZSJIZAWYOQESYOEVCNNBWJAWXZZUXRLS");
    msg.vnamespace.assign("DQGCKDXKOPMHOKWLFOSEYCCYDRACOZAANCEUYWEQLGXSWBCSXNFWUPGQREMHFZSYE");
    msg.start_man_id.assign("BWAIZOXRMFFYYLQSPJEIEVZKRZUSYAWYANOCTKBTHBCIDQLMABZDDMSTGMSKTRXADCBCYPGLTPRJTFNGPKYJKDGMEK");
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("SIBLFJFOUMXCEKJGNXFLAUWYBRGAYJCMYLHZUORWEKNSWRTZFHYIDARJLGFSAHGGDKNLSBMIZGIDUBKEFOHJQBWCYVBARBHAPNDVWGERWXDQOPKTZCTXLTAYDQSRZTVDQMKCPVVBOQEZATHNCBAQEBOOSAIRUHUZFIIPVTNKILMOPCWLQNGRJCXKIJJPZMHQXUZUCJLDSXMYPDUVVRPIYEJTSLHTVOGFWXEQXPMTSYXFFNWKUZNPQHSKNMCWV");
    tmp_msg_0.text.assign("AFYREHXBDQAVULKWNHQKIGOOBXSCEPIAYSOZVPDVVCIEBMHMBTJUYPDUPLGTCQIKWWFIRTJYIELZZHOHSUVCNUTHIVDJHWMKTLNWPARNDJRALCEJZGOKAEDYQTAQLYTSIJDEOFSICARWZKPLX");
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5824596771109795);
    msg.setSource(49769U);
    msg.setSourceEntity(240U);
    msg.setDestination(625U);
    msg.setDestinationEntity(80U);
    msg.plan_id.assign("JJKOHKORNDYBKHETOPXMENNPOAAQRNRNYWSADNSNJDRYPHZZVCWBLDPHWIFEFFJLSMKZVXRAIPEDQCJBSHTFMNQGDLALYCXASGTCCRSFVDKQWEZHXPVMKCTCFVJLLMIXLBCIIUOBQQKJOUUIXOIFQGJBUZPHSQSRYGFGVDFDYUEVUTEWMGGEMBZZTXDYQWBCNYLCYEGHIQH");
    msg.description.assign("ATHOYUOVJVKQNRQBPJVVVDYFZQLCICZTXFGXIHGTBTVQZGKZUCUDOIGQNAOZYDWFTKNCRRSNGDFYFUXOLWHEXRIMNCOJWVDYBBNABHLJFYMMJGRYESSQN");
    msg.vnamespace.assign("SCHUEWETUCYJXBPRSZKFOAH");
    msg.start_man_id.assign("TGHVJTVOMZVLQAPBMAYWUNGXXGVAJEKEDCTTAMJYWQCXLMXINEACZGDVJNYDFVUMQAWHDDDLKDASBCYESOTGBKZSVLNDCRTGYUZVDUARHQSIWFEOOKXXJJCPPSNMTIFBXYBBSJHQYITZIJIRGSECXHKFYFTLIKTUWRULRPOYMRGHQNG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("QKLTAYMIBLWYBUOWIMNVPEXBXVFOCMHHGZWJTORKDZITFDPDJKPWHVTWIZSPKEILBARCNKBAJYQTMBOVRQUFXLIKJXFAECNOXJSODVXULPJKKYRANNRBXHWQDJARFDCDBQMKOOECZZUFGUKGYPVHQMZQHWMGLNGFNPELUWDPYLPNCAXLJPCBHHCVEACACSFYYQUMBHIXTZ");
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.duration = 21378U;
    tmp_tmp_msg_0_0.custom.assign("ZMYMBCBLLLHSDBIRFFZGCKPGJWABELNQNFUUBDDHFLJTOUXGEZSNBBYJIWPFZFRIMNTPQURNMPASQEP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AcousticPing tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Depth tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.18786243025704286;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AJBMDNYJYYDUGEMXDEQNCJSMSQMHMTFBZCRFHUIVSXQDJLKTGVJBENCPDYBYILFPALOHKNXRAYFZOGOPYAQPXHUTJBAFICDCETBVOHIBRCGJFLWPVRWBKSYCHLZFQXUESGIKKNLATWSEMQZIWMBOPKHOEGPODVSUNQKWXUHCBOROKGNRHI");
    tmp_msg_1.dest_man.assign("ZAWDNDZLSEABERPMPTXPBGFSKMEUJKUBDDRPXGTPVROIRMDKVFNENHPZMWHXNFYZPXNICARLXVIOGJTQMEUMCXOSGHYGDJUYJYYBHDXMWIZCFELHLVRUJZGSFNDASIHTQMOANJEQHAYTSOZQYKIXHWHZLQQLQWFCLJMCSBXTNZSKPEDBOUSA");
    tmp_msg_1.conditions.assign("MHCAPLUINHDSBAGKDFLQYDCKNYWCYIFIAQZAERGRKAWLDHQTSTXCDTQSQAXUGBWXBSPFLKETEMVJYLRATCBSPCIMVFXDMEDTICZLDMQOVVMUVHUUEWXUJGYFURJGXUEFKLZWZOROGIKERG");
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
    msg.setTimeStamp(0.20123605082239537);
    msg.setSource(46907U);
    msg.setSourceEntity(72U);
    msg.setDestination(17675U);
    msg.setDestinationEntity(253U);
    msg.maneuver_id.assign("JCFIRYIGETXUGTMJPPSELUHLSPRZ");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 41870U;
    tmp_msg_0.lat = 0.7099974731472664;
    tmp_msg_0.lon = 0.8466703025609781;
    tmp_msg_0.z = 0.5517633145433192;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.pitch = 0.04870233648300348;
    tmp_msg_0.amplitude = 0.9737307456999886;
    tmp_msg_0.duration = 26604U;
    tmp_msg_0.speed = 0.6615127195331786;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.radius = 0.8389999393046665;
    tmp_msg_0.direction = 197U;
    tmp_msg_0.custom.assign("OYMQLNZZJPXOTOCISPUPIZOMLNQMHADUXFGVDUXKTPBAVSUBATOBILSSKVEIMLZAORIYFAMOHHEHPRUFTHJLLQPH");
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
    msg.setTimeStamp(0.17111215527502177);
    msg.setSource(45636U);
    msg.setSourceEntity(225U);
    msg.setDestination(63269U);
    msg.setDestinationEntity(8U);
    msg.maneuver_id.assign("AGZHROLKAYUOGEHNYOLRWMEMBMBEPSTADKUZTOCFXGKKVMFPZEJNDMRBDNXRSQJAHFLYHYDBDYGEMJCLBJYECHSKGUYUXBGJZPGCHCQMKOVRXWRTQTFTQSSNRNEOALRVKGEKZWLKUCSLVDSARAJOVZEOPVWWYFNHWOFLIZSFAKGTNFDFISBCVTIYPJNHMXQP");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 18708U;
    tmp_msg_0.lat = 0.7122167166994109;
    tmp_msg_0.lon = 0.4524900938997559;
    tmp_msg_0.z = 0.734883669544514;
    tmp_msg_0.z_units = 37U;
    tmp_msg_0.amplitude = 0.6289726443480357;
    tmp_msg_0.pitch = 0.11346059171907052;
    tmp_msg_0.speed = 0.5172722655958726;
    tmp_msg_0.speed_units = 234U;
    tmp_msg_0.custom.assign("YFFBTCTCSMWA");
    msg.data.set(tmp_msg_0);
    IMC::RawImage tmp_msg_1;
    tmp_msg_1.width = 11092U;
    tmp_msg_1.height = 16490U;
    tmp_msg_1.channels = 207U;
    tmp_msg_1.depth = 63U;
    const char tmp_tmp_msg_1_0[] = {83, -104, 74, 109, -28, -63, -26, -101, -44, -67, 70, -59, -52, 18, -99, 51, -110, -5, 55, 55, 65, 30, 77, -69, -114, 73, -74, 13, -123, 12, -18, -53, 11, -26, -37, -32, 14, 52, 69, 48};
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
    msg.setTimeStamp(0.8385615985162389);
    msg.setSource(25130U);
    msg.setSourceEntity(2U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("BQJFJBZZRCXKICIKIDVMMAJLRTTDMYNMAGPZVHUAHCVKEMPKTLHQCXBQIWECRSUEXANWAQIYFMYGMUBPIBRGCWXMYLZJEOEWNLPWPFUDGJCRPOXLZZDBAHGITVSSRBYYSQBSJFNSOYWPASHSEUZOCBXZFPEUGATTPYGRJTOANOTQNKDEDDAQYLFTEPUSMNKNOWXLUSZIQQDWQHFVHFW");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 33539U;
    tmp_msg_0.lat = 0.06168120981862901;
    tmp_msg_0.lon = 0.02100305817934134;
    tmp_msg_0.z = 0.8866209409344757;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.amplitude = 0.9360604032286545;
    tmp_msg_0.pitch = 0.536312531160167;
    tmp_msg_0.speed = 0.5047244678349104;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.custom.assign("IOJQCIQZHEQNFXZTNDRNDWBYOSABDLLBBGMOKDRMIDZSDWVAKAYTSHFPLNWKIELDKEFCWKIGNSRCUZMCNJLLYDKETHVEUOHXKMNPIVUMNZW");
    msg.data.set(tmp_msg_0);
    IMC::VideoData tmp_msg_1;
    tmp_msg_1.id = 24U;
    tmp_msg_1.width = 27701U;
    tmp_msg_1.height = 32287U;
    tmp_msg_1.widthstep = 34625U;
    tmp_msg_1.channels = 190U;
    tmp_msg_1.depth = 123U;
    tmp_msg_1.finaldata = 127U;
    const char tmp_tmp_msg_1_0[] = {11, -121, 51, 119, -105, 99, -66, -86, 80, -43, -65, -106, 0, 113, 32, 20, 19, -52, 46, 87, 4, 45, 16, 78, 27, -47, 79, 109, 76, 20, -18, 73, 40, 118, -124, -113, -110, -111, 103, -97, -77, 1, -9, 27, 72, 111, 19, 120, 68, 106, 27, -62, 74, 68, -28, -15, -59, 99, -16, 45, 16, -42, 70, 82, 54, -81, -47, 92, -68, 71, -58, 120, -5, -9, 30, 122, 98, -97, -7, -70, -75, -38, 8, -108, 116, -78, -5, 22, 30, 125, 66, -72, 26, 54, 91, 33, 58, -54, 114, -48, 89, -96, 89, -104, -26, 24, 61, -117, 52, -26, 105, 26, 99, -69, -1, 10, -88, 97, 61, -119, 86, -25, 14, 82, -71, 112, 11, -58, -114, 89, 26, 122, -24, -46, -45, -16, -84, -81, 33, 40, 123, -7, -26, 53, 88, 117, 30, 83, -105, -56, 86, 19, -30, -104, -111, -52, -107, 67, 16, 116, -60, -53, -29, -48, -53, 71, 79, 37, 2, 6, 8, -105, -100, 87, -122, 102};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::SimulatedState tmp_msg_2;
    tmp_msg_2.lat = 0.24361534974330912;
    tmp_msg_2.lon = 0.5929892471344776;
    tmp_msg_2.height = 0.565330652154718;
    tmp_msg_2.x = 0.9982076640792992;
    tmp_msg_2.y = 0.8048051045258884;
    tmp_msg_2.z = 0.914134764150427;
    tmp_msg_2.phi = 0.8655272289339292;
    tmp_msg_2.theta = 0.4172167439210708;
    tmp_msg_2.psi = 0.0851969800729937;
    tmp_msg_2.u = 0.1163758405519929;
    tmp_msg_2.v = 0.96081371047947;
    tmp_msg_2.w = 0.17695595147597032;
    tmp_msg_2.p = 0.5040359746225173;
    tmp_msg_2.q = 0.3550421636057032;
    tmp_msg_2.r = 0.2902283913902669;
    tmp_msg_2.svx = 0.5472720707412552;
    tmp_msg_2.svy = 0.36332416633309605;
    tmp_msg_2.svz = 0.9045885537579623;
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
    msg.setTimeStamp(0.8207325463551925);
    msg.setSource(52292U);
    msg.setSourceEntity(169U);
    msg.setDestination(39749U);
    msg.setDestinationEntity(181U);
    msg.source_man.assign("JBJDBDUPLWVCZLDCNAIQVLVXNTLAKYNEJGIXHRZCHXBNLGWMHSYGOPSZVEXUFYYGORYIPJTSYERZSXUINRMEVHSJKNPILPKPWNNSEDOXHBRDALMDDKYQXDJRKAOWKIPTBQOGGREAZOVITEZMUCSQBQIDEBNWCDWCYOFCMSAUHUFVFVHPLTCOKRZJVMBXEGWYMCZOBFTRVXJFMQLSWQZIHGSAUFPKKTTZAILPRMB");
    msg.dest_man.assign("CTGUWHYQOXDBYGPIMLEFPRVBULQUWWARAWGHTNSBNRLFBLMJJABITRXLDVASNWHHSDSCAGXZABYUVLQKHEKFMUXWPRJZFXSDEIODNMBFEJHOOCRQKVJRMYVDJPPGVAKYKKHGVRATZULEPGLZDTOM");
    msg.conditions.assign("WGIYZSQDBRMXQUOBJHNKKPQJTTJFYEXLSQFASCCAENDTBTEXUBJEKXCGWWAQZHWENDOER");
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 315767164U;
    tmp_msg_0.messages.assign("NGKWNLVMZBWOUJRTGDWFOVGNQHQJKQRZXEYXJCMXRKLFWQPIGXCKLOIFJFDEUAEMSABAXSEKARYZJJCHTKSRBNOIILUUXHKUGCCPZKYXVOVUWRWZSGZBZQDFVLNWPBMAIDOAXRGIBNUCASNQAPTFSVTLUNFUSYHQONLRAPNQRRTBDHJQDHAFEOTVP");
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
    msg.setTimeStamp(0.5222865846654432);
    msg.setSource(22308U);
    msg.setSourceEntity(90U);
    msg.setDestination(36824U);
    msg.setDestinationEntity(69U);
    msg.source_man.assign("SGZWCFHMVBVZLGOKQEAMVXSYIXDDNGNPHIZINQNAEQKUXWWPNWRIRHLOKOOMAJFFKPFBTFJIFUSBMKUTVSPASRJMCAFERHJCYBXNKOJJOTUDMOXPNPYLLWWWAMQZXMUEWPNYJVOFSEZQSAYVGGHC");
    msg.dest_man.assign("MCCZPMKIKDUJKXPJPDXVAOVRRRSQREUAESNLXHCEUKFVNOBSLIIWYDWQIUNEPYPYZMGPBOCXGWHZOWOFZTVGRHMFNDLCJVHZQFJATALONNVMFGXSBYMCHNAQOFOETQGYIUZWVUIMPJDDZAGILGBSPNFHWKUVYXBKTAPHJRWHLHDWMYDLQQUTZRYDUQKXSLJLRECYXNMPLIATKBRFGRGEAEOIOHFKXGXWMAJWEN");
    msg.conditions.assign("OYWESGKXIMBXCYBDMHFGMRKTCILXVURHYZGEFAZOFPBEDDGDXKIYPTHXOAGIENVLJILJLOOVKDWZYTTEIGRHMQHFYFVQJAQIZYRMRLHQPBIGNBZKWP");

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
    msg.setTimeStamp(0.5239282643923113);
    msg.setSource(19103U);
    msg.setSourceEntity(199U);
    msg.setDestination(39876U);
    msg.setDestinationEntity(228U);
    msg.source_man.assign("DQNWICCZOTTRYDKGACCXZNQMPBSUYCRUHKLEOSHUFFWDEDZFCVDOSQCIXNLTJSNHQRPYENWZLATATEGUHHOEADVAWIEPZVTWBBGBRPIYRZORJGLEVAZH");
    msg.dest_man.assign("PHPBVKWSJNRQHZMPFWHE");
    msg.conditions.assign("BEDWVCNYUSAKLQOYJHTFHSFKCUON");

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
    msg.setTimeStamp(0.038853065501368245);
    msg.setSource(4660U);
    msg.setSourceEntity(203U);
    msg.setDestination(58129U);
    msg.setDestinationEntity(43U);
    msg.command = 60U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NQPXEVTEYIVKMPZOSNXDJSQBUJOTSPFCGUNJXHVUADQMCMIVIHYYYKIHAEZOPMEJSNCHKKLYYUGXMXURALPCBK");
    tmp_msg_0.description.assign("BJHPFSFBAJWTZAQPLHSNBNTDHONKIGFPVNXXVZMBUJJHILOWKAAIIBRFVAFYCXFAMRRRBSEHEPYQTTMJOZVMDRXUWLSMVLLDRXQDYWDLSVYLYUNONWXXKGOJEBEKONQRDGKIDVLEGYICDZCCQPEKYPTNRQSYZAMRQBUBGOVLCIKGVNQGUGDKKNAYZSSPHIPUJCTQEKHHTYXQMXBWCAWPTFPE");
    tmp_msg_0.vnamespace.assign("XXRDJBGLEZBLLCKAHIIQZDYYIBEKFCTAXJGGECVFUJCXFJBEFDPKHTQVJAQENBRYIPRSXQKUNKKVHXEPFWAXWFOOAAIOPXETSZIFHOLARJKDGLTRHSFHCJUIVQSLMNBNWCWBOGJOUGUSNUODUDMCTHKPMYBVENTYZRVBTIMZFDQWWAMQPNMIYXZNDYTVROPFCQCNKZMVLYBSLATUPMWZRAUGWOJS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IQVXIZUSVFXCLCPWAYNNFJYWTLTXRPNEDVACUONSTSUUJVYQXSUTZOIBJHMXJZRLFBDOICCKGTKPFRHNXZKPFQLICACKSLEGQ");
    tmp_tmp_msg_0_0.value.assign("KOYGRQGMQVYOCUTTHABCRUWFKHFZQINFTTXWYWCIRCPJPBVXLEOBXGJXGGJDVKSNCVVYZAHKMFDCLTTXBLFNZCVZIKDNXRDPJBMA");
    tmp_tmp_msg_0_0.type = 103U;
    tmp_tmp_msg_0_0.access = 139U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("SFLNXNCGFIKWHEHQAOXSSTDFCYBSXLKVCUMRKZVMHBWETEFAIIJMVXJTBARYYAHREPFRCOQOQXXKDYGIKUNACUDQTDQBPRYMGTVTTWZVLUSMFHNQEDPWMLASXUQGWIFYBKPNBHPPBLJLMXRCSYZEZOOYDHGIDJNURHJAKLVEJZWOMHCREXMGYPDMZKPFGGALVENTFIVUHUNBZSESPOBR");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QKMXPSGLJQNQHDYHMSUEMMTFZHFGWWVGADUYYWYRPFXGNCXIFDAULKMFBIJQOQBPOLEUINSAHAOBHKLOTEJHLASIRKIEAYDQWRZZWHJKBFHJSENTRCBKKMP");
    tmp_tmp_msg_0_1.dest_man.assign("SIPKOKGLENEDCQBASHTUFDNILGZBTRTYGYLPPKMIRTWNJPYTGLSHQOZZWWZAEGXXKJYHKJBDRJJHZ");
    tmp_tmp_msg_0_1.conditions.assign("CFVMQMKGAJTESHJWUYFHIMKPWTLPKXOHPOQHLYDKPDMDOKWSRQWBBBQVNNULWZQHFFLRZGAXD");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 17130U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 40U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.36172244287203914;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.9221202622544026;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.04022324984031922;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::AllocatedControlTorques tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.k = 0.9581316468591327;
    tmp_tmp_msg_0_2.m = 0.9435292118734704;
    tmp_tmp_msg_0_2.n = 0.3101053021988407;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::FollowPath tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 6763U;
    tmp_tmp_msg_0_3.lat = 0.06749975137126207;
    tmp_tmp_msg_0_3.lon = 0.8275765949826804;
    tmp_tmp_msg_0_3.z = 0.8507134601591881;
    tmp_tmp_msg_0_3.z_units = 152U;
    tmp_tmp_msg_0_3.speed = 0.1910838299866784;
    tmp_tmp_msg_0_3.speed_units = 244U;
    tmp_tmp_msg_0_3.custom.assign("UHOOQEOGVQQAEDJBLAYLLCRZLTULYKNFLCGZFCJYIYUAJJKZGRQTFFLZRAWMIRQVNTKBDSNDSEOZSRNAJPOOJXQGFCTUXPYYAPBMGOZYDZRPCHCXIVYQGECUXINPZEDGNAWMKDEZRKXHPONWMVHOMBPMESTUKMWVELIFVWNEMRJSSFHLCMCVAVOXDJHLTHUYJSBBDGKNXKZQQPNHTTVYSSABJPWRWKXGAKXH");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.6508948717385371);
    msg.setSource(22272U);
    msg.setSourceEntity(139U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(38U);
    msg.command = 74U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("YDMGVIZCZSAEQOUQIGHFDHZYNUBXBNZCYVLGBLFGBKMBILJZLWKDRGWGCOJXLSOSCYHBLTBMYIVQVVNDOHKZEIKZGYFKXOJGTMCVVXXKPXXTDRQSUZCFHLAQQAEUQQWRADNHN");
    tmp_msg_0.description.assign("TPOHJYSKPEPGFFGREXJVOWAPIXUHJFBKDJNPNKDYIOZITZZGQAWCGSUKMTRYHLNWMLIFNBIWYZWBBTOSODVBQERCNANYKAZEIBZYVPWAXXNDTBSKRORAMSOQFJQDMVESARQISPOXMSBOAQRFGMQVFTHCOGWUVYPWDELDYPCFDZPJRHZACRUFAEUVSUHELKGTENWHHNMRKJG");
    tmp_msg_0.vnamespace.assign("OWFZSCNHVQHGCWPRKGVCTTEOGXXVOHOLSFOBPUGRJUMBSPCKDLVVDNNZNJBIMBRCJKBAMOXAB");
    tmp_msg_0.start_man_id.assign("VQLRLFWRBOUHNWPLWIMSJFZPVAJJWRHITPMTGEQUXGWJGEJUFWJGVPDBIFSHZEJTHKIQXGRTMDNSVZTUVEQYBASKYTXIPMTGRUHDBBIKPNAWFYGICZMAZHB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("TTBQDVTLMRIQDLLXNFJTBNAOCCNVFUGUQYCSKWRZUUVOHIHAWATJLMEOBZFPNKKWCUYDSSQBYJQLSSFGPLVOEBMHARJVERMDMIYPWJBZVGDFRIGFCVQWHTQLSHEADJSOHPOHKODBCXNJVMYEKRWVUFCRTCZIGXSWXPK");
    tmp_tmp_msg_0_0.dest_man.assign("GTXUYRYDGSEWZBKBKRYMEPJXDXCHZHCFGZWCKCWTLYMNQGBURPDQNCHDHNAQAVDDMGYWUQMKBNNBNLPMFAUXOVBXLIXYZLVFMBOPIWMEUHGZZZFIIKUSRTCFJSDPDKHOVQJEHQBVIXVSFFUUMIXAKLFAJHWXPIVCGNUDQBJRJCQLTCLQPSFWTTRZPJBIGHMWJSZNNAYWROJKSLI");
    tmp_tmp_msg_0_0.conditions.assign("OEGQQUXCSPLMEOZESBVHKPXVVFRTTGEFODBJTHPQUZJMLSFAVLKAWZDTZAVQMJPD");
    IMC::Distance tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 116U;
    IMC::DeviceState tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.5301444221249516;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.5115615942163486;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.24281076764476983;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.phi = 0.3579750590193823;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.theta = 0.5045977984579539;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.psi = 0.7118948661135069;
    tmp_tmp_tmp_msg_0_0_0.location.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.value = 0.31973841570387684;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SetEntityParameters tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("HWOVELEFFJWICZNTFPQHZFRHQBPEMGGOHZJWUAKEPINWVUXSAGFTMWXONCYYWOGKTTMTZJWMUVDDTXRQDZJMOUGKXIPCAABNSELNWGID");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("LHKPUETEYXWNLUTLKZOQABPEFVFTCTLASENBRDEOQCLYYIUILLKDINVCCAHIEZKVFASGFTIVZCTNMHCWAMUUPSJSDCUBPMXQKBSQOHLWMIBFDMGMOKAPUXWSGRVNCCYJZJDLGHWBCIQOTRXJWBQRIWASASNHBJNYWEGYAXXJMKPOKIFGJNHDXRJZKMPIFTVZWRBFHLVRZBMURUNRHVHPFYNZVMYGZPQDTGOKTZDAQESDG");
    tmp_tmp_tmp_msg_0_1_0.value.assign("CJLQEJRVMFJL");
    tmp_tmp_msg_0_1.params.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryEntityParameters tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("IUIQQUDCDOPABGWCEGTODHBRXIXESICABFWOCSFFUDUVPMJHGLEBDRPSIWCGCHCBTNZWESUFZYMDLXVAMJKRCHJNNXENMLMPPVWWJIFTRZHHNULCFKBJTNWXGELNFQODBGOAQRLNSBIHFZKXVRAYAMIZLRBXMQZYNPWAKTAWQKFHJWPUBYXUGPNOUSHKJKSGDYSQDZAELELV");
    tmp_tmp_msg_0_2.visibility.assign("YCPJOUFRECLKAHTKZFMPGYSMTBDLWRANGIKJQPDJDSRNAHSWFDOMSELZUUARWWBYHFNNBEOIGUJMOUOJMUKWILGPAIBTKEYTLEAMAMEFPKSIJZZFMHVTPYJGKHVHOYZSNSAQOLXDPSVQVIEQLHGKTHVHHVOGXPMVNIADYRVXXZRJGCNCXXXYWIZOFCTVXGZKNQZNCXRUZBQJYSNJDBRSMLATILWGKFFCDRQIXRTW");
    tmp_tmp_msg_0_2.scope.assign("XSOIQUJLQGAXO");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.9965055601424264);
    msg.setSource(58057U);
    msg.setSourceEntity(218U);
    msg.setDestination(8787U);
    msg.setDestinationEntity(222U);
    msg.command = 66U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OHXEXLGCBUXDAADLNAJMYIWDQOKXTBRORZPFSMONBVWVEWHAQJCFMIFGPZTEBEWZNPTMCUDSDJZAMFXGRCVBANXDCGZEKVMMTIYQGGZHNFIRVKCUKUHYUZYWLJKIGGBHIAEINPGFYWUHQFTCZORWVMBIOQKXOUHANPSTQDDXTDFRELJECTRYEULJWQFPQJNMQSVOLRYRXYZKSLOFDBNUVPNHZWVBSIPJKL");
    tmp_msg_0.description.assign("PQYJULQERUUSEKFDPCTCVRODXHTUYNXWIWBUATMIFRJZFWXABSQSVNYQURMJANEGBRCUBPENXCVAHSYLTLYOMOLKJHSAPHAOYFJMLUJZWGLEPVBHWWYKFBMQ");
    tmp_msg_0.vnamespace.assign("CPVMRMWJQWNT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EOSODUIFUPNGPHRZENGATSXQKDIOTGMRETLHNIPEGVWWZOGDFXVNJDVRHJAYKOKQAFJCBOTUELLMJQIVLLNCVIZYZCALFQRYZYEMNRSYNOACYRZHTKEDTGQJJOBKLIZKLUMUWLHGDFFZWDSUCHEOSIYXDMKGVWAKUCUPKAJCAWFVPXYIBSMXJNPHBSPMWNQXXOSBTWZMBMBVKRQEVHWBCTXRMGTXTRJRYCSQYNSEUZAGIHWBBFLDPIUHFD");
    tmp_tmp_msg_0_0.value.assign("NCEJGSIDPKFNCULBGNUDXGNRTJFMSSQATAHLMBGEIFRBMYSRCCQBDJFWZPXQXPDITYYDHLKYVGVAYHYZTOVLPTWFOHLGMTSGHGNERHNVXOXOHIBDONEWYVOPPCKPEANUEKFUIVIZLIYJRRZTDZKQCNTSZHILCCEOKOFMDJREFOQWIEKXXURBMVEGHATQBWOIQLWPXLKSYWUJKZKWBYDAASCUZZMBPVAUBV");
    tmp_tmp_msg_0_0.type = 252U;
    tmp_tmp_msg_0_0.access = 64U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RGMAUAZEHXFHLHWTNYMVQQJOVSGHNWAYDCPTLIEHIJDJERREPRQRXFBSQFXMTDCQQGIKVVXOREXCROOZBIWZYKIFXKDRMWNJIJJTUZSYKBEJPNGJTDBSEVRHTUYWAVAVCWYDNKFCLTAYPCICWOIFMGEZKLSFLLAHLYKRSGMMB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FERFLTGQIYXVQCDIGFNBMIWOCUMZDQOWFZMUNBOXOJPWHGDEOQMXFZYLBNDDCXWPHYTJRWXCQVQWAKRCAVIHFXRCPLIKGSHLGAHVKHJISNNZEKUEZQMVHGZUTPASPFZYWCXHENVJGGYLEKURELDYJFOCTVDPGARLPOPTTMSCRPRJEFNB");
    tmp_tmp_msg_0_1.dest_man.assign("ACUQLIHJTNMSASVEJTKRZPQLDEPVGVQVZGSPYMOWAAEQBUGCPSTRXNPYMQOWZNTRKGRLGIOTJHQGXOEOHXECFSBWZLRHTZUWDMBYJFFMFTUNNOGRGUPBFGOPADQINYFNAKXVWDZSZAKBBOUYHVYIXDBHXAWGEYHXSTRLWCENYOALQ");
    tmp_tmp_msg_0_1.conditions.assign("GYNLLFBXCBAEIMLMLPUKNVIZWHNZUKTP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FormCtrlParam tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.action = 69U;
    tmp_tmp_msg_0_2.longain = 2444443953U;
    tmp_tmp_msg_0_2.latgain = 3491295187U;
    tmp_tmp_msg_0_2.bondthick = 2774160404U;
    tmp_tmp_msg_0_2.leadgain = 2212815796U;
    tmp_tmp_msg_0_2.deconflgain = 1943505857U;
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
    msg.setTimeStamp(0.5809253162204807);
    msg.setSource(1240U);
    msg.setSourceEntity(130U);
    msg.setDestination(1986U);
    msg.setDestinationEntity(123U);
    msg.state = 60U;
    msg.plan_id.assign("VIUTONLHPBCKXMYTYXMGTJN");
    msg.comm_level = 169U;

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
    msg.setTimeStamp(0.16695349891925249);
    msg.setSource(39723U);
    msg.setSourceEntity(53U);
    msg.setDestination(19183U);
    msg.setDestinationEntity(205U);
    msg.state = 79U;
    msg.plan_id.assign("SECVDOXLLNXSMXGZOSJIJUCKLYDWWDWNTZKFXUUGYDFILASHLTOUEQMJQPIUIXYNHQBTKGUAVZVAPVISNEKRFQAOHBHMZGTAHQKMFBDIPDFLSVZEFVKEBGKPCRMXGJCXWYQKUSRYSCTCKVFFECNYPALWGTRRAJOIDSJDATHGRCNOUXZONU");
    msg.comm_level = 155U;

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
    msg.setTimeStamp(0.9130613328441001);
    msg.setSource(8675U);
    msg.setSourceEntity(160U);
    msg.setDestination(35728U);
    msg.setDestinationEntity(204U);
    msg.state = 64U;
    msg.plan_id.assign("YTXFGMGAQFGK");
    msg.comm_level = 5U;

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
    msg.setTimeStamp(0.9841932912563599);
    msg.setSource(50830U);
    msg.setSourceEntity(221U);
    msg.setDestination(31496U);
    msg.setDestinationEntity(244U);
    msg.type = 112U;
    msg.op = 202U;
    msg.request_id = 40368U;
    msg.plan_id.assign("UKGCSEFBPVQOXCJJNDAJASYDTQWIYXRRSYBEPRISEFMNKSUTRPQFWJAHIAKFYROPVEORVKHMKHIRHKZPCKYMQSQMOQDSAAJAJBXEDOGIFDFUWJLSKUTAVLXCZLOLDFVLNCI");
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 125U;
    tmp_msg_0.angle = 0.9118589072226497;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NIEYOADMAOWJSJUUQEPWSRDCYTXGTNLEHQUANPOFJVWYVYRPXACBXBAIYYIIKXWSJLWVOEMGXIUNVJKIUZWTCDALZORNLZHTMVAMUWRDICTLDKHWWXSXTNDTCHFOHBPFBNYQLBDYCFKTREXHSDEOPQLCSLPMODJNJBSCHFEXBGPGVILFOIDPLFHMRQANSRQNVFHAWZVMTGAJTUVFCEZQKBKRQPPVBUKZ");

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
    msg.setTimeStamp(0.8494675936631761);
    msg.setSource(22514U);
    msg.setSourceEntity(179U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(127U);
    msg.type = 162U;
    msg.op = 240U;
    msg.request_id = 55770U;
    msg.plan_id.assign("SUWCOYZUISTBOBDROAALCVMHTYYSODAHSGJRQGLEBDLXRVJVMYVZMUOFWUDVCJJLTXRWQPMUAUQQVNSNTZEEJHWIXJPGZGQVMDAHPRHHKYNNNRQIYCYLAIZRCFLJIRDGGQTNNLUZTIWVBKSXXWJZIQZCSSVEPREJPDKFBTEKLPYDUHTEL");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 10565U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWNQMDSGYYLIZDKWNPCIJOWZRNLGJCBOIYEJFGZYKQRZUHMFYMECS");

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
    msg.setTimeStamp(0.0875676190060376);
    msg.setSource(12082U);
    msg.setSourceEntity(144U);
    msg.setDestination(1355U);
    msg.setDestinationEntity(217U);
    msg.type = 28U;
    msg.op = 46U;
    msg.request_id = 57950U;
    msg.plan_id.assign("VCBGPGQZXLBTIEFTLLYRVGSGVQELQPMMBOECZUSFYKLEHOPRQAIWMOMXIAYXRGTMWXQYKZSNYUVWNASEZTAKCVFZSJBHIKDWZJNHONNDTEZQURLBCNODRLTBCGSAPFS");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 98U;
    tmp_msg_0.max_depth = 0.18898462980160557;
    tmp_msg_0.min_altitude = 0.21510846648451365;
    tmp_msg_0.max_altitude = 0.9011227105724289;
    tmp_msg_0.min_speed = 0.6499477827985097;
    tmp_msg_0.max_speed = 0.9388414750213442;
    tmp_msg_0.max_vrate = 0.9490826504248354;
    tmp_msg_0.lat = 0.1404595904145498;
    tmp_msg_0.lon = 0.23597038729221376;
    tmp_msg_0.orientation = 0.8196304387672505;
    tmp_msg_0.width = 0.7359690914629272;
    tmp_msg_0.length = 0.09023961114829826;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QSBJRXGDXPSBDZQQMDOFMFACGGPJKYOQKOEAYCTCYNKMGZIIVJCMRXQHZDSOVVNTXUTWGLNCEIBDYJFZPAUHMDXUZMPEOIZSKHEXBMZJQFRSEHEVGHYTEOORAPAKUFEFUMYGAFWZBIPWMXTLYHNXILAAUDKNCWVLWDPKQKUCHCBSNDGSLFRH");

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
    msg.setTimeStamp(0.29108800532481527);
    msg.setSource(26189U);
    msg.setSourceEntity(5U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(61U);
    msg.plan_count = 34493U;
    msg.plan_size = 2417106707U;
    msg.change_time = 0.042650645031426127;
    msg.change_sid = 9726U;
    msg.change_sname.assign("QAATNKNCBZYZHWRTUVSLCLNWLDOFAQCWRBJLYPNRMVBFQVNFTGZTIOYDNFJBYOKIJSBYICSOTYOXQJFPASEDMJVHUIZNWRPLOOCAHVGEHKTZEEOYLIGXCJFCDMYRTAKPNLBUGJKABWLJPEHIDQDHBANXXHEJMQDHMPOVGU");
    const char tmp_msg_0[] = {99, 16, -21, 57, 117, 105, 62, -98, -32, -24, -107, -38, 12, -54, 113, -70, -32, 80, 60, -87, 22, 55, -33, -52, -122, -29, -5, -70, 22, 81, -39, -52, -110, 126, 76, -104, 41, 77, -99, -65, -33, -32, -35, 60, -128, 5, -126, -37, 87, 106, 65, -109, -118, 11, -118, 38, 51, -54, 122, -41, 78, -118, -14, -74, 13, -78};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FLCHTNCUXPIVQBSQFHWXTROVMOUDMGMSYVV");
    tmp_msg_1.plan_size = 15285U;
    tmp_msg_1.change_time = 0.24127275921638924;
    tmp_msg_1.change_sid = 54995U;
    tmp_msg_1.change_sname.assign("ZWPMGFWCQECUUCPMBGJZSYAVIDPBVTRKVDEHAPNXOTXXFWZKNFZFDNLMWHDLKUKYLDMNYIYSJDOZKRTTKJIWJALYEAXQIAAOHAJEXKIGVCSTYBDUNNOHHZSCQLLCHEYQBIPTJDKZFWWCEPIXVQUDELCKFHMVPHIQOLHGLXJUTPMNUJRZSUVEUMBRGYNBOWGKWBRLXPGFBVGITQEAJRCZSSBQOASXVRXMFZTDMOGROAJGTNWYRNBESPRSFFYO");
    const char tmp_tmp_msg_1_0[] = {93, 15, -83, -12, -69, 17, -14, -66, 25, -15, -69, 107, 53, 7, 56, 42, -100, 56, -75, -52, -121, -44, -100, 97, 102, 42, -124, 29, -32, 57, 117, 84, -105, -106, -120, -117, -29, 7, -10, 28, 16, 41, -126, -112, -61, 112, -22, 118, 1, -41, 124, 10};
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
    msg.setTimeStamp(0.9308874876010196);
    msg.setSource(16081U);
    msg.setSourceEntity(67U);
    msg.setDestination(39334U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 25930U;
    msg.plan_size = 1843240806U;
    msg.change_time = 0.8179044650012958;
    msg.change_sid = 1069U;
    msg.change_sname.assign("TZXMJBYFNCCGVMTIQKFVUNKHDEXEDYSKSVNSQSHAOAYBLUBXKGLENUUEDDPQCUJRLEXZRXOZUWTRJOWQSPZWEQJPWGKEADCGGDU");
    const char tmp_msg_0[] = {-44, 3, -70, 77, -45, 37, -60, 38, -92, -41, -84, -18, -99, 76, -103, 42, -97, 64, 31, -82, 96, 61, -65, 78, 119, 61, 23, 32, 58, -51, -39, -97, -115, 9, 93, 78, -59, -60, 102, 15, 68, -105, 112, -94, -38, 53, 47, -72, 33, 104, -70, -89, -41, -107, -23, -3, 26, -36, -3, -17, 108, 55, -105, 63, -69, -82, -127, -107, 117, 18, -101, 114, 23, -37, 87, -15, -119, -91, 4, -114, 59, -122, 121, 104, -14, -93, 55, -73, 76, 23, 96, 111, 80, -126, 8, -119, 88, -117, 95, 48, -57, -11, -98, -7, -11, 69, -116, -111, -9, 10, -119, -48, 115, 25, -59, -71, 121, 90, 112, 45, 92, 26, -107, 26, 1, 119, 100, -9, -8, -3, 88, 101, 30, 54, -69, -17};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XGIOTQZTMIVHZDZXKGVXPFMAARKYZWAPAYOOVFKTFFNVHBCHZQKEJQSCISFJHJYKSEMWSPMYIDRDELHCKEJNMZLGTWDEUVLPBBRHUCICZBGERXDXWNVKGMRJPUXKBXJFWZLFUJAREIPMSMTRDAQVAKJGTR");
    tmp_msg_1.plan_size = 26351U;
    tmp_msg_1.change_time = 0.6215562248790629;
    tmp_msg_1.change_sid = 17207U;
    tmp_msg_1.change_sname.assign("YMWBCCIQAJVIWGUPLUTKAQOYLYLRUIQJJXEWHDUNZYTSUKHMHZRFPCURVYX");
    const char tmp_tmp_msg_1_0[] = {116, -105, 91, 39, 0, -108, 53, 100, -74, -41, 36, 38, 103, -128, 53, -2, 101, 91, -54, -14, 10, 51, -126, -68, 56, 76, 90, 62, 28, 9, -47, -47, -123, 113, -52, -87, -45, -113, 82, -57, -97, 42, -126, -88, -61, -8, -89, 34, 101, -2, 101, -69, 64, 34, -76, 61, -67, -127, -31, 84, -99, -17, 17, 97, -121, -121, 111, -26, -90, -77, 15, 7, -101, 51, -27, 66, 37, -110, -34, 34, 33, -76, 28, 73, 100, 101, -128, 67, -56, -11, -45, 12, 49, -57, -16, -86};
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
    msg.setTimeStamp(0.4390492109706676);
    msg.setSource(18641U);
    msg.setSourceEntity(226U);
    msg.setDestination(46579U);
    msg.setDestinationEntity(58U);
    msg.plan_count = 49624U;
    msg.plan_size = 1331805619U;
    msg.change_time = 0.3493811888067968;
    msg.change_sid = 23276U;
    msg.change_sname.assign("ECUOTIEQXCKFPTBMFIANJSEKODLRASTTABYXASHZJHRQYNLZWYWBLUWMZBRLOEPBUFXTSRDTPRMXEIFGVIBFCQYJNAHLLPQDEMPDDNHXABDJVCDYOWPMWJKDSDWGUCOIQNCUDXEVKAKLJGCLGIAXKFYJNXVQVBE");
    const char tmp_msg_0[] = {-22, -42, -83, -57, 66, -36, -39, -66, 87, 47, -87, -65, 65, -17, -52, -58, 41, -40, 46, -91, 100, 5, -50, -97, -103, -106, 77, -114, 88, -60, 43, 43, -29, 34, -7, -52, -120, -96, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ZMDYFCGALSUQFHUWGVIBTTJKSVVBKILTGBGJUXFNDVHYUYBZPXWENDACFALRPWHZXXTMOELYLOAYEBGNWMPIDYNXEEPYOYXEQKJRQQLCEQTFATJOCJCGRLXKMZEIGGSBEODRZTMNJHSPFBVMRUAGABJWSMBIDSAXZLHZPCZVJCYCUWQIVGRPNRNDMBUKINQEQUSHFYKVJIVOKWTFKZ");
    tmp_msg_1.plan_size = 62911U;
    tmp_msg_1.change_time = 0.7390315374506357;
    tmp_msg_1.change_sid = 33960U;
    tmp_msg_1.change_sname.assign("QAQFSHKVSDDETWVGRANGIYSEYMTOIKKYZXBNUCCWCPMWDJIGZOKSXLQSXCAUALUTGWUIFUNQPRVZMKPCMEHXGESFKQLCHODVNRPAEXFQOIEGRYOTIDBPXKGYDAJQPCVDDYHSDUYRYJFGTSEMEHMMZRJWBIZDBLMJBGHJVTFRIBYIJXL");
    const char tmp_tmp_msg_1_0[] = {66, 78, -92, 35, -109, 91, -92, -50, -34, 9, -84, -13, -105, 85, 84, 115, -4, -2, -7, 87, -100, -81, 23, -104, -25, 7, 60, 102, -13, -43, -76, 17, -55, -119, -111, -20, -27, 9, 80, 11, 6, -50, -35, 64, 119, 114, 81, 33, -25, 106, 120, -42, -109, -19, -54, -16, 48, -26, -119, -6, 12, -41, -103, -62, 68, -56, 126, -97, 100, -35, -25, -71, 14, -2, 85, 87, 2, -111, -35};
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
    msg.setTimeStamp(0.5500090282042889);
    msg.setSource(63981U);
    msg.setSourceEntity(62U);
    msg.setDestination(63190U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("NKEKFJXBCUHHDISMLYOZTBRKKXIUYOMNDEIDJWEHCJWKZCFQGJIRPQMFOVTUHMQCJPGPEHMXFZJYTQ");
    msg.plan_size = 7471U;
    msg.change_time = 0.5500001794763834;
    msg.change_sid = 5674U;
    msg.change_sname.assign("HYUVVNRDBXBKFZQXXGNNOSRRYBGRWCOZCLAXOVMFACGDGSRMDVEUTCPIKAQNPAEVLDURCYFZN");
    const char tmp_msg_0[] = {61, 12, 50, -81, 101, -105, -99, -23, 77, -122, 23, 44, -57, 8, -69, 87, 102, -111, -69, -24, 51, 82, 50, -118, -27, -70, 11, 102, -91, 79, -51, -99, -55, -45, 50, 73, 80, 106, -5, -60, -1, -28, -88, -111, 72, -27, -55, -128, 61, 81, -99, -35, 27, -78, -71, 116, -1, -12, -35, 81, -12, 55, -86, 106, -39, 61, -54, 104, -108, 33, -16, -42, -98, 6, -21, -83, 24, 23, 26, 11, -71, -1, -90, -122, 105, -71, -113, 92, 63, -8, -87, 24, -56, -16, -96, 0, 20, -92, 99, 110, -75, 51, -106, -119, 74, 62, -70, 24, -20, 16, 43, 0, 39, 77};
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
    msg.setTimeStamp(0.06884077581654091);
    msg.setSource(27539U);
    msg.setSourceEntity(131U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("DOYKNIROADZVAVXFOZHRTNHNNVGQEUXYAKMFWRXSUFJXYHASLNBWEKSNLZEPPBDQCH");
    msg.plan_size = 5910U;
    msg.change_time = 0.20559088548240545;
    msg.change_sid = 16281U;
    msg.change_sname.assign("SXNUTQGXIIQBTVQUUPIQYIXPETARESNWNFQJXLZEDRQLJBEDYKJRJMWBGQDAXZKHXNIYSXKDKXAJHSXNPUGTTZLSVYVZFRUNEMVMDZCPLOWCKBWNGFBGFULMQAI");
    const char tmp_msg_0[] = {41, -99, 107, -72, -63, 98, 78, 119, 84, -94, 82, 19, -76, 124, -98, 30, 105, 97, -73, 31, -94, -97, 95, -125, 56, 18, -79, -70, -125, 23, -33, 74, -124, -53, 89, -43, 81, 105, -110, -5, 39, 76, -40, 63, 52, -16, 5, -119, -100, 107, 68, -91, 49, 94, 22, -107, -63, 100, -28, 93, -72, 2, 33, 110, 12, -18, -66, -117, -4, -24, -91, -110, 11, -104, -90, -109, -70, -115, -61, -27, 94, 62, 25, -103, -73, 111, 1, 39, 2, -56, -41, -33, -96, 61, 22, 32, 2, -54, -71, 32, -120, -101, -74, -24, -8, 89, -104, 80, 86, 106, -5, 37, -48, 80, 66, -24, -59, -6, 95, -95, -109, -120, 103, 10, -34, -32, 50, 87, 13, -113, -38, 74, -18, -119, -38, -117, -93, -60, -28, 118, 86, -43, 68, -20, -11, -23, -123, -15, 3, 36, -61, 115, -112, 39, 78, -114, -24, -43, -72, -11, 1, -66, -16, 103, 63, 45, -18, 120, 111, 98, -82, -98, 64, -87, -69, 69, -22, -53, -66, -31, 21, 106, -73, 72, -23};
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
    msg.setTimeStamp(0.0017661682045511107);
    msg.setSource(44235U);
    msg.setSourceEntity(100U);
    msg.setDestination(27740U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("ULYTKPLOJMDASCYNGEJXGNCBSIBWQUDFLIZRTVFTMHEXEFHCTZZNWYINGLNIQPIVMUGBLLBSG");
    msg.plan_size = 58399U;
    msg.change_time = 0.705970868272196;
    msg.change_sid = 22565U;
    msg.change_sname.assign("BNMQQFXRFUMKNQALIXMEZFJSCMAOLIPLJJXHFUBNLVFGWYIPSHUNRUKKHUVLRIWOIDMTGENHWRWEVRSVCPQBSKYUFUILGEGOYKCJDEETTUSNWSBWYYNLPZYLBQOKHDROCADCWAPATFMXAFIXLZXOZQOKBPZZPTBDSCEQLDGIVHJSJTGRCXVTZZWEDXDKWRFTTTAPYCBHZAFHVHMCXJMEW");
    const char tmp_msg_0[] = {-30, -122, 89, 108, 45, -37, -30, -112, -88, 97, 114, -112, 73, -116, 28, -2, 29, -46, -44, 74, -30, -81, -72, 5, 36, 72, -5, -36, -86, -60, 126, 83, 89, 27, 4, 110, 25, -103, -78, -48, -94, -58, 60, -88, 118, -31, -41, 7, 80, 98, 118, -47, -64, 37, -17, 0, 22, -6, -3, -11, 55, -58, -121, 126, 125, 62, 79, 46, -51, 96, -106, -25, 44, 73, 48, -71, 45, 96, 89, -34, 125, -67, -45, 122, 57, -108, 72, -17, -116, 93, -17, 33, 53, -53, 101, -101, 97, -30, -126, -28, 30, -63, 67, -48, 101, 52, 9, -2, -52, -48, -126, 55, 90, 72, -123, -103, 87, -115, -46, -118, -36, 116, 45, 5, -60, 36, -117, -30, -38, -17, 117, -34, -27, -101, 13, -49, -14, -90, 80, 115, 124, -123, -126, 76, 38, -65, -52, -118, 118, 41, 95, 104, -104, 126, -90, 60, 21, 19, 46, 40, 95, -119, 111, -67, -32, 55, 65, 87, -68, -93, -96, -111, 49, -123, -55, 44, -62, 21, 3, -121, -95, -42, 26, 50, -88, -31, -84, 94, -38, -112};
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
    msg.setTimeStamp(0.05021483746963007);
    msg.setSource(334U);
    msg.setSourceEntity(27U);
    msg.setDestination(1121U);
    msg.setDestinationEntity(159U);
    msg.type = 125U;
    msg.op = 253U;
    msg.request_id = 44291U;
    msg.plan_id.assign("WHIAYBUVQYFQAXTDJZPNNMZYUYEYZRAOSRVPMKRVZPMJKMHFFNKRXPPCAPJEDTBFWFNNUXEINFSAQAMUTDOQGDHSOLCNNLHCRPJWGGRAQBWIGLUVLORHGHSKDBCUBBEBTWFHPALCQYGTTKXFILEYIXDMLSOMQOBEZIIVIZMIKQWVBGHHGJRKVZYZCSEXDDYSQAFWTROPOHWYAJNJJQZOXDUECVLPUCTTUJGDXUVFGLMKTSB");
    msg.flags = 63660U;
    IMC::SmsTx tmp_msg_0;
    tmp_msg_0.seq = 4130621576U;
    tmp_msg_0.destination.assign("VXJOXTYWVWWTSIREPEHKXPUUHVBYAKREKIKBWUJAVQPJSQJQCDBCWRXDMLDJLEBFVUHUARDMQLDFTOMNSGUORDDTDAPLVJBYAAPQIHGITLBBXMCXYWJIWPIBUCBHTNNFRYYOHVBMK");
    tmp_msg_0.timeout = 64893U;
    const char tmp_tmp_msg_0_0[] = {-1, 64, -121, -63, 52, -79, -45, -19, -30, 3, 82, -53, -61, -74, -17, 87, 31, 30, -86, 71, 38, 126, 83, 67, 28, -48, -86, -18, 102, -12, -99, -56, -33, 126, 29, 92, 64, 66, 24, 9, 27, -60, 15, -112, -31, 101, -100, 109, -38, -102, 92, -32, -117, -42, 84, 34, -29, -88, 95, -45, -70, 18, 45, -73, 60, 108, 106, -70, -109, -96, 89, -13, -24, -65, -9, -46, -58, -63, 121, -9, -57, 49, 73, 96, -46, 102, -75, -5, -15, 120, 98, 68, 126, -29, -23, -95, 42, -78, 74, -14, 64, 13, 26, -27, -124, -68, 38, -115, 60, -11, -103, 3, 73, -109, 10, 63, 123, 52, 55, -49, 111, -11, 4, -10, 23, -77, 9, -114, -56, 79, 111, -44, -63, 6, 73, 2, 107, 3, 30, -14, -21, 30, -2, -89, 99, -111, 119, -48, -108, 3, 10, 30, 56};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GLYCUOKKELKXRLSTHNPPDCONTRFAYQURIWXJLWGHRHSQPBCKIAEPWTFBJDYYFLVVMFUULYGETCZSXCNYCWXTOEUHVLOYJNKYTEAMTZXLMGRZSJNPQISHADLAQTQVIAMZRR");

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
    msg.setTimeStamp(0.3911639548467448);
    msg.setSource(55864U);
    msg.setSourceEntity(187U);
    msg.setDestination(55623U);
    msg.setDestinationEntity(79U);
    msg.type = 247U;
    msg.op = 168U;
    msg.request_id = 42450U;
    msg.plan_id.assign("KCURYRANYQKHVAQTOPTXUCSJGQMHDWBUPHMTYVVFSHFKYLNXEEQMKXYRWWBIJOCUDGFRFWTUIELPAGMMUBGEOJAJRZSIQZHEWEGXLXMZJZNMRTSKLOTVDSXHCMGQZWAXHUBOLZPQXWOKJWXNNVGIGBPUCZIFOEC");
    msg.flags = 27330U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("UFGWVXLOFJINUAYBUTVGLASXTZKDROMCVXWKUILVJTMUVWMFSQHRYLTXNYJSGKEDMNXLDQFGQQTQWIOBXHTBFOKAHAXGIEGVTBCGKPRRWFYVBWXHNLOAPZSSERXSPEZRQIMEZEDFPMCWJYWAVTACNZBCYHONLSZJSVDKRNSQDHEUPWIDOKKPQYWTCL");
    tmp_msg_0.formation_name.assign("LVDXAGPZNXVKQUHSBMTCEUBEJMTJFYQQHEGMAHUAHFHFWMBNAEBJQNYPHRTSNTGZLVCJCNZRSADXTOFLHOFGEKFKFXLUTUNXWDIQBLFKNCURRQYCVHQXDELSAIRVCZXEJIKWTOWMUCBPZPTQDXPBMZEQVGMWVLUCZYZDDRVWGWVGAYAFOPIONYDXIIIZWCYIHUOJKNYSEVSQRRJXLGRDHOSKSLEAKMNMSIRPBFD");
    tmp_msg_0.plan_id.assign("DLAZXZFFWYNFJHSGULXGFSTGMBM");
    tmp_msg_0.description.assign("MIVSQYSUJRPZDJJKTPHCVTUOSELSFDFSMCFLHEKGWPYIBUWZCBVRHNBKLGYGQVYLGUSJUXCLRXQZARXTNOAUWXWUFIEWDYIVCPQKDKZPEGFVMKHTEK");
    tmp_msg_0.leader_speed = 0.9716825945049461;
    tmp_msg_0.leader_bank_lim = 0.5420043912517184;
    tmp_msg_0.pos_sim_err_lim = 0.6876475534421832;
    tmp_msg_0.pos_sim_err_wrn = 0.6271155227389734;
    tmp_msg_0.pos_sim_err_timeout = 6511U;
    tmp_msg_0.converg_max = 0.5320237044358869;
    tmp_msg_0.converg_timeout = 60162U;
    tmp_msg_0.comms_timeout = 22258U;
    tmp_msg_0.turb_lim = 0.6205719867137405;
    tmp_msg_0.custom.assign("XSRATMNUHVFGDPFGSMJQJDCWGTFPGMAIECZNZGYEKIBBWQXBOMHHKHKISDEAXKJILFAZQLMAWUQVFCBMRPHIGUJQLWLNWUKCWOISAJFVHMSPDBTNOLXDITLTXTCSNCFONEYHRYOZMZYMYXTZHKQNCAVKTGPIRFRDBFXVOKXOGKV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDRKXLYPGBMUMCTOEFPTZKVHAHYVMMRZAWZQNWEJJQDSQUVUEBTJGWBDFGLEODQEYUTKTPD");

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
    msg.setTimeStamp(0.163493070877332);
    msg.setSource(1211U);
    msg.setSourceEntity(227U);
    msg.setDestination(39235U);
    msg.setDestinationEntity(231U);
    msg.type = 164U;
    msg.op = 228U;
    msg.request_id = 40935U;
    msg.plan_id.assign("GMHMBCFKSYCDRSASBUINCSUKLYKEZCOXNYNLWGUOOQHNHHHFDDWQXRJKIROJEHNDCAVAYFVWGPMHWGMURMOZOQMWIAWPIOCICLGPEBSBFSTTEEOURLEZEXNYTWXGVPGVLBNMKCVTJDLJJDRPDTAIBOQUUSIFQTKFZJQIITDNYPKFVMBZUXALSETMYXPXSBAWAYWKDVYHZJZQHGONQVRZBTWCEVERLTADIUJPFXLZKCSYXBRLJ");
    msg.flags = 5203U;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 58U;
    tmp_msg_0.op = 187U;
    tmp_msg_0.request_id = 2684U;
    tmp_msg_0.plan_id.assign("SDYIXNSEAQXQMMUSTVBMZWTPJDLLUGNVJEKXXCVOJXGBBRCTXDFODNIFPNMMPEGRUVTIYLDOSZZRURLBLHLTDLOEHJYSAHAXHOQRYZZEQTPFNPKWKLIGSFYPPWUKCKCVIXFBNQPQJPESQYMJUPGCKALHWVERCBZMACOUCYJKRWTCWJWKTBNGDHGHNWJIWNIKC");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GMIPTZKYYUCTQXZALMESCOJWDXZQZCMBYPDBHFXBNZFHHWQNJZXJFRIAOACFPRBVULJAASVGMIFXOXWYMOMESJRWIHRGIUEXODSQYWIIAETVYPPTXVGEOUSJVOBYSZLDVVKCBNLDCVBWAMROPKNGKTKLGYFTXHODEMLHSNBIMPWGUNJCRDZFQRKTEONAQFSSBKKTZPKJHKQYLTLHENPGAJDVECHTWLNQHUFJGFMIZRGUQUU");
    tmp_tmp_msg_0_0.attr_type = 46U;
    tmp_tmp_msg_0_0.min.assign("YTCWHFJYNSLPLFMOAPASLUHVPEZHUEFDVCUOIBSCVEJYOXLIMLAYLATZMMCADPFATRIWGVRVUYPBGQDBQZXAVRTJIRKGTLWIFKRPOSNNUVUEMOMROJKXZKYOAWZIMJDFRYMBBFMCIGYQFWXKLQHUNIXVXUJVTLDHSVOOBTZTPHQGCCADXJFGSEDHQEKEQOKSBWTRSUECPQHKGHZGNNDJAJGHKPRCIN");
    tmp_tmp_msg_0_0.max.assign("KPJPEJTMBTCNQFWCYVKJGANJHPRVWZBMVYRVUGXVJZUCDNBICAFQOXSAL");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("TYWUXIKQKOYGYADFRKVZFNBADEHTLWRHBJKRUVLMATFGPMXKUCBHXSGGMEQHNTNQQCAXUYZBUNCVHITUGSDSFHPGXAGTVHKZSFZVJGVDJCDRBEOKMYOPSRCNJEIQQRPPBMUQLAQNIMKZYWKUDIPCZATMAAOYEELNLTALCF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MZBQORBHOGYZBQDXVXHRGYXERLFXGDTBEEUWOSSDPFWNWARCDKFLHKDISKHWSMVHPPJPZTYUBANZIVAYAYIPSZGELZJ");

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
    msg.setTimeStamp(0.6134622639892321);
    msg.setSource(40562U);
    msg.setSourceEntity(139U);
    msg.setDestination(54395U);
    msg.setDestinationEntity(128U);
    msg.state = 189U;
    msg.plan_id.assign("GKIPZZBXMKHSUYUDUZNDWEITQHXLQAGHHWPRDBVXJHFJQTYEKCOIONWJXWYGUSEQKMKDYVEILRVFLUZCFLRFTWKLAMRXKSRVNSCFZIIQCRNLEGXPVAPSWOQYOHRWTEJDNAPDASPFMOYDTBJZLFBGTIHNQOVVVLYIHGMSAMCPRWCUGYJUYZBTSEBHFUMAZNJOVWBKMEXVADPPZBWAZGMJXADGXDQHCJBBNESRQKYOFXCNTJT");
    msg.plan_eta = -1863006152;
    msg.plan_progress = 0.41070777664660385;
    msg.man_id.assign("LGLOUUUFYTOBYAIHNBLQHDTSTNNLEWCHEQMCAXEJGDFBMXBOHV");
    msg.man_type = 8010U;
    msg.man_eta = 416720365;
    msg.last_outcome = 198U;

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
    msg.setTimeStamp(0.8334613876234516);
    msg.setSource(10310U);
    msg.setSourceEntity(219U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(15U);
    msg.state = 226U;
    msg.plan_id.assign("EERKQJVLTSIQVRXRHWZOKKMSXPGBTOFCTFTGKYOVKWOYBZBJLTUHJUDIZVYSJXIFAWDKBFQTPJOFUHDPEFFHIZZNKXEGJBCRDYRNBALULXUVVCMRHOQBPPUEZCZLTITBANENYZMWCPFTBPCDESGUICQGSNLPSSDAMRNJLIVOSZMWVAWKPDLDRJLAVIZHTMHGONQEXOWUNQMYVUHQA");
    msg.plan_eta = -930796521;
    msg.plan_progress = 0.036164797113666936;
    msg.man_id.assign("YJXYEGJUAFULFFNYTDYDECGUBVKDGZLDKRYAZBGRCYIZSNTKXGBQRLKQZZWJMXGTXKZLURTOEGTXWLOFHRDCXHRZPUIYVLUQJPBWNPOAUCJYXCYFSZNOTTMHWBMIVEHEJJCJDCMUIMPSMRNLSVHZEHEOELSSIFXHDVRLOPNQBITKIVXFWQKAWRBLKOCAGHITKWASAWBIPQXOQQHQPGAVUYEJIFJNADP");
    msg.man_type = 45376U;
    msg.man_eta = 1943067715;
    msg.last_outcome = 39U;

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
    msg.setTimeStamp(0.3977415298665262);
    msg.setSource(23319U);
    msg.setSourceEntity(180U);
    msg.setDestination(55610U);
    msg.setDestinationEntity(40U);
    msg.state = 140U;
    msg.plan_id.assign("UWORCZLUVYWOXIWKLSSVNGEIYCULGSZMHKPHVIDEAQEZPWQLCXFTAHSNUPTMXDNAASXKCMMVGVQJPAVCHJKTYBZHRXCHNIVQIEFFZKQLLJXNBUQXLJLGLYIBXPRJPROFGPDHTQBZKUUDJRPUUDMLWGFTNFBBIOVKYREEJONATWCJBNQZKTNMGPBIWRYZNTVBIOMYHZRMWKFVGATYEETFXDCREACOGIOGHRB");
    msg.plan_eta = 387234405;
    msg.plan_progress = 0.7663292511560549;
    msg.man_id.assign("JHYXYUPHCWMVMOOSUNSZTPYTNHDJGLBMVQMGTQCADDZEQFUWFZOHCYORRUBCLJZLYCGIAXUSYLFEEXABXKMAZWPBBYZYQITXRNHUGCIJNGFVKEVTSAPLBKOELZIFTFIAXPPGDKMJWRRXJWDVASCCFOMSRHIKQGJQ");
    msg.man_type = 49796U;
    msg.man_eta = -1451083757;
    msg.last_outcome = 224U;

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
    msg.setTimeStamp(0.034684086787151736);
    msg.setSource(21421U);
    msg.setSourceEntity(45U);
    msg.setDestination(25871U);
    msg.setDestinationEntity(28U);
    msg.name.assign("HKZPFPZYLBYPAKSURREERTDPJQHZVKCINYIIFTGUMHH");
    msg.value.assign("NHWKMZCMZAFZPVVYDTQNIZEGNEVMDQKELCJQSIWUEGYYTCATHWOLFGRHVRXMFXUYTEOACMYFKMVXXPRCIFODUIFHMAIPJZRBWVNLIMRNCAQTCKEZINHIWRBBNUGQDXBVQPUHBSGLPHWOEHNXPZYYGJTTCKHEZADQSAFOSNQLBXVJFGBSLJLANXTGROWQYLWSEAWDOTUC");
    msg.type = 100U;
    msg.access = 121U;

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
    msg.setTimeStamp(0.5098298859058665);
    msg.setSource(1912U);
    msg.setSourceEntity(240U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(48U);
    msg.name.assign("RKBVZCRSWNNCXMAERWPWBTJMUPGNMLAKYFSJFRBRDVIFGHLXNHYPVDAPEUCEENHVKSTCEXMSFZDDFQUGORSYORAUVIYSKNFSKXPWBQTZNMJYWQPNIULAYRKFUDDTKTOJQCHUISSEOULVZMWIASBIZQAZGXQQVVTVDHMLXOHAEOWHMFKZXGQOOQPNUPEWRHDCMORDBLIBHHYZJZFTKYEMYGJXGNJJC");
    msg.value.assign("RYJSSJTMGNTOOSWQYRUWDQDKDOAEBWWVNXHVSUNSVJAYBWOKKJTIFWUXOVXKTQXNNN");
    msg.type = 225U;
    msg.access = 158U;

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
    msg.setTimeStamp(0.594949295416427);
    msg.setSource(61069U);
    msg.setSourceEntity(159U);
    msg.setDestination(8256U);
    msg.setDestinationEntity(55U);
    msg.name.assign("GIAFNIUYLEIIPMBPOAZUREVMQKQTFNCPKOCXDVIDOUJSRGKDLSFFUSHEOYLQCYGLGHGKWRWYSUWJVDFWURTFAAFXBNWJLRFBFSOCQTEBJPYCHIONSHMWDGZLHFKPAKQMRHDAYMDWNICWMBWBTBMPTLNJQXGNSXVKQVKOOPBMHGTJEZUXZAESYNRQKLZMICDPEXPYIHVEZQEVNZTHZGXZXVPUWBKVSYCRUEHIJCASUTXZYJRBROTVQJXGCDOLL");
    msg.value.assign("UUYPRCIPOKBSSCKVBXLKCBSREGXEFTSNWGMJIEWUQIUHAZJWEMFHADFEVZYDJBZXUGDSSWNHNURLDMZBZJNJCDFKBIAISYUJDPHVATRVPKKEAZEJNMHPMTMRHRVLFPZOTKYDVYGCHWLCKXDREGWQTAMQFCXNVAOQKRC");
    msg.type = 131U;
    msg.access = 203U;

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
    msg.setTimeStamp(0.6189691705992323);
    msg.setSource(10383U);
    msg.setSourceEntity(190U);
    msg.setDestination(21862U);
    msg.setDestinationEntity(244U);
    msg.cmd = 156U;
    msg.op = 18U;
    msg.plan_id.assign("CIDRIHRMUAZVVIAEUAXYLLXGNSPQGFHUDWLPRZMTBMUPPVWSSEQTICHXYWOOZUUTYNHDNTPZRANOFSXZSTOBNKPSMWQXDAUUXBRXWRDMOCBKDKMCAQLHFHJGPPCGHFSVEXBLKYJVJFIRWWNFWDJQEDAQOKAPKITJOGFJGZKNGCLLMVLYCIGTQLTVVBSZUNJORE");
    msg.params.assign("VDYQHYEKJDXBLPHOXMCARBHXIHCSKNFAOMDOQQFUPSPVGWAKNACJDDCJFVYRGVFBSOWRUXZPIHWZYOUYJCQNKWESVGZBNYGOLFLSKTACXCOWMKV");

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
    msg.setTimeStamp(0.048836681500191936);
    msg.setSource(51623U);
    msg.setSourceEntity(124U);
    msg.setDestination(24914U);
    msg.setDestinationEntity(183U);
    msg.cmd = 234U;
    msg.op = 10U;
    msg.plan_id.assign("JEZNKWBRASFUEGRORKTSJFRGILQXSUDLYTNELUXNBRBQKSYTCOKJGUWYLMTBZHGBKRZZMLDNZITMSGWJWTAMOOMVLBVSQDKENURUPPXDFAVXMFFMHQXWFCSEEEBBNIRYPHAXEZEGVWWCIIXZYVXW");
    msg.params.assign("OCGOLFRXGKDYMDACOXZZLJHXVAOCOHNQIWJASDDYFDPYLGSMAEHAQWEIUPNLBTZWDSFEGYWSNMTGV");

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
    msg.setTimeStamp(0.6995440978829256);
    msg.setSource(24557U);
    msg.setSourceEntity(233U);
    msg.setDestination(37423U);
    msg.setDestinationEntity(61U);
    msg.cmd = 155U;
    msg.op = 148U;
    msg.plan_id.assign("ZQJRZOSDPLNXFUPAUVSLGIYYOQJFWXLQMDHOUZKKLIRGZXMWPHJISRJVAAE");
    msg.params.assign("QDSVUTSMLDVLJOKFZCZDFRRZISXWCNEHSHIBOBMACJFKLNKLYWBAWEDZTBUEBGTGSBXGQNNRVJAUHFUIAQKTZCOQPXOIEYCPXMOVNPLIBUJIHZMLKUHIRDPTFDBWJKWHRFANJVBTMKQRRCQPZYTQPKPLOUXAENVVQXEQJOJPYKASHTTIKWUMYYWODGXGNXFVBNRMYHEIGFOVGSSJHEGLZYQUZT");

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
    msg.setTimeStamp(0.26314154116686506);
    msg.setSource(22521U);
    msg.setSourceEntity(126U);
    msg.setDestination(51336U);
    msg.setDestinationEntity(158U);
    msg.group_name.assign("QMWVTCXLUXRIGOXHGCQZVYPPDPGMBEXNVSKJDDEJSKRVRZUCWTXPPBOVGIYKYFRIEYFRODLQDMNZEJYGNZVOAXECLHGYDHMDHCRNTAGUFCJBKJJVEIKAOHMXTQWBEHQZTUKLAUHSLQT");
    msg.op = 62U;
    msg.lat = 0.4964608441174775;
    msg.lon = 0.6641579166749314;
    msg.height = 0.0704281314765891;
    msg.x = 0.697687161021355;
    msg.y = 0.5075704551069656;
    msg.z = 0.8711871781443816;
    msg.phi = 0.8911274904531291;
    msg.theta = 0.5001462331971933;
    msg.psi = 0.21552348407485789;
    msg.vx = 0.30687782730426494;
    msg.vy = 0.8769901803926844;
    msg.vz = 0.5146220399687417;
    msg.p = 0.10339558128956872;
    msg.q = 0.3766395224846111;
    msg.r = 0.3953355296602352;
    msg.svx = 0.0424298292568861;
    msg.svy = 0.8552232980396531;
    msg.svz = 0.3415578768420424;

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
    msg.setTimeStamp(0.6302469815518592);
    msg.setSource(53342U);
    msg.setSourceEntity(78U);
    msg.setDestination(19813U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("XNFPDIWGFEKLUVLRUVUFFOABPJHNZDIYJTWLQEZWTZFWSQTCSRKZPHACXBJFUIBACBGZMTPIHCKGDSAVARIQLOSYCVHMOEORUTAENLGXINYENHQUIDKLETDPKHBOJCBCOETYXPVNYCHTMQRSFGHGVPYEOKMGJKBMM");
    msg.op = 227U;
    msg.lat = 0.0558603610901699;
    msg.lon = 0.08101144316736908;
    msg.height = 0.529686106161993;
    msg.x = 0.6871846840992155;
    msg.y = 0.3738282731881606;
    msg.z = 0.0046484850352093154;
    msg.phi = 0.9449277526766935;
    msg.theta = 0.32525747775741587;
    msg.psi = 0.4328203312162898;
    msg.vx = 0.38440825969442693;
    msg.vy = 0.06057812722077083;
    msg.vz = 0.8899474982223934;
    msg.p = 0.3517898063166106;
    msg.q = 0.8244978279136521;
    msg.r = 0.019379403060780898;
    msg.svx = 0.7233300047451848;
    msg.svy = 0.7908743870003966;
    msg.svz = 0.6543991055788987;

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
    msg.setTimeStamp(0.9376454993912098);
    msg.setSource(1590U);
    msg.setSourceEntity(62U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("CYUUAFVSWGLIHARNZGCZYMBJYXVXUKXWTLUZAEOIQFADHNYIZXOTIURQSPIFIOEXKKACFBHVBTEPPZSDXKKXHQVQVMXCSYQODPFJJEEBHGK");
    msg.op = 18U;
    msg.lat = 0.742339854390876;
    msg.lon = 0.30827627361859444;
    msg.height = 0.17795169273812017;
    msg.x = 0.382208638755988;
    msg.y = 0.23162165714392258;
    msg.z = 0.6781812961592216;
    msg.phi = 0.08955517634271093;
    msg.theta = 0.3897898967686153;
    msg.psi = 0.9913987827935141;
    msg.vx = 0.3985020030656946;
    msg.vy = 0.6123821026422707;
    msg.vz = 0.7854077824218975;
    msg.p = 0.44428122828773187;
    msg.q = 0.8086716927914974;
    msg.r = 0.32088669814872395;
    msg.svx = 0.8435978093315967;
    msg.svy = 0.8326780698714441;
    msg.svz = 0.39884130822919484;

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
    msg.setTimeStamp(0.07996136857540925);
    msg.setSource(43662U);
    msg.setSourceEntity(186U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.5468052602209422;
    msg.lon = 0.9189365970296646;
    msg.depth = 0.5973549245008558;
    msg.roll = 0.3429748414045781;
    msg.pitch = 0.6613938101778741;
    msg.yaw = 0.6974479746287137;
    msg.rcp_time = 0.409340251864064;
    msg.sid.assign("VWJXDNYJLIZCFDUCNZEXNIDFFIDSVXWMWVSIDFSPUOJXMLHYAHVBFSTVPPJSNKBZRWOAPUZRFTAAAWLWDUJQCCKPYQNMNTPKTZARC");
    msg.s_type = 190U;

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
    msg.setTimeStamp(0.020499421611559043);
    msg.setSource(44511U);
    msg.setSourceEntity(97U);
    msg.setDestination(33620U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.48574115645319826;
    msg.lon = 0.3227096185566467;
    msg.depth = 0.9775048152190744;
    msg.roll = 0.536039524152515;
    msg.pitch = 0.5263217703918219;
    msg.yaw = 0.1031458738483455;
    msg.rcp_time = 0.5745918890981482;
    msg.sid.assign("RULMZLNJTBFMTBEJESRSVOYPPZADGXJJJNTG");
    msg.s_type = 52U;

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
    msg.setTimeStamp(0.49358805896954305);
    msg.setSource(60170U);
    msg.setSourceEntity(30U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.7697241730858343;
    msg.lon = 0.22849677515310907;
    msg.depth = 0.8883673642790996;
    msg.roll = 0.5983709111020651;
    msg.pitch = 0.3626304566226727;
    msg.yaw = 0.7114645392552932;
    msg.rcp_time = 0.7643417505348128;
    msg.sid.assign("AGMLRIIFFWSCZVVURKOSPNYUBCGJUWZDKZBHPWABUYCIKALSIQCFBTFEZOJWFVFWLGIKJCHSCQDGOETZFFHOAZXTRYVXXWVWKSQUDMSFLQNJBVQBTHQJMYPMCOEATKQDNRNUNBYWNDHRHTLEBEOTDMTLHCXJIKQSRZLYEAMKYXUEPVDNWVLDJHXSSHZPGPXROITMMBJYXEIWGPVGA");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.4508594402764672);
    msg.setSource(18155U);
    msg.setSourceEntity(217U);
    msg.setDestination(3243U);
    msg.setDestinationEntity(104U);
    msg.id.assign("VJOHCBSGKSFVBYQFRAJIXYRZYBNVFXNVQXVZRHYDLLMJWBHDIVLIVDETKIMIDWMFJECOTCIHEJTVSAHUJVNLODMMZSNYXWHQEWAKTIWNYDPCFZS");
    msg.sensor_class.assign("ARRIZLLDNOQAEGUPWHMUCYBQGWRJXVTINMRZPGHRTYUSDTEJCHLNYXPGPLHORGAUTGSSFMQIWXCJCFIDUAO");
    msg.lat = 0.5278951155364758;
    msg.lon = 0.45890277675645363;
    msg.alt = 0.15206373870710643;
    msg.heading = 0.372201483562306;
    msg.data.assign("OAFISXDBSNSTTEDBGJMAWIXHGDWPNTTBRBXOCGCOEYCMVJGTZTVOHZIYLVQIQYDAZQQEXZVYHJYFBLHKZMWBMDBPGQJLJXMEEBSIONNKWRYYDVRILJZKTKJUDZOAABCESWFXPGTIPKFIUSRKPCQMKTMYMHWAOKKHCCUFOVQGUMPUBFLTRHLCLLGSDUUWZERULWFRVPPCYIWIEXQVKGXROHSCMGQJQFAENAFXJPYJAWOH");

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
    msg.setTimeStamp(0.9526571156642429);
    msg.setSource(42826U);
    msg.setSourceEntity(127U);
    msg.setDestination(17196U);
    msg.setDestinationEntity(94U);
    msg.id.assign("WTSONQHHCNKZCOTELKXONAPHGERIYMETGSYEFRAUPLUJUXKUAKRJUVAYFRYBTMZCRHDWUXJLGILZIGDKBMFVSEHUJXLIIGKTXCFJAPMATOUJJFFZNSKQWCHJENASRPDSDIGGJMSHHMXPROZDNQQAVOKMSSERZVVICWQBFHKLXYRBDQBVYWJRVEFVWPI");
    msg.sensor_class.assign("AOAOKSFYSBQOUJEAXIQUXWHMYYDZZATLFRDTUXQLQFBBBMMOIRELPJUEZLYBSKYHGCITPILDSZNZDNNWKNSNNTOLZJINOKCOZUFRCWUKKBDMTAOEDYEHCLUVIXWOVXTUEPHDGKHYPGGEYZUVXPSMKDCMRNUKTGVYFVQDCFVMAOMPPRJQBDWLCQMPKVGSERXAVNRBHGMGQWFTVQWVBFXCCALSIRCHRGSJLBFIIWSHNZJXQPHZGJH");
    msg.lat = 0.2801563857432413;
    msg.lon = 0.8063400880987357;
    msg.alt = 0.5763414323143268;
    msg.heading = 0.26444843998994283;
    msg.data.assign("STVBQPPFVYJTUPLZFIOLJHPCWMFMAIYUJSEYSASFMGNRQRENQILCKOKAMRBIEBIKQOMBOZJGHCNEUZVLZTJCZZWDEUAPLPQUIVV");

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
    msg.setTimeStamp(0.6821132420029371);
    msg.setSource(32636U);
    msg.setSourceEntity(215U);
    msg.setDestination(32860U);
    msg.setDestinationEntity(189U);
    msg.id.assign("YDISLLKLXMECMEOYEIRUXMMVQHPWNWLVKZLXGUSTQTQMTSBAESWOAGFIFYUMBBKXVKSGGERZCZTRHLPMSNLNTPNNICJDOZWDBANPBUSXVV");
    msg.sensor_class.assign("XOWSMHVBDTZGRQPTMSBZYGWFOYBNRROJUOLOPTQXJILIEAELERADLMXAWSVZNNULOHBKJTMKWKSUAEQCFCFHZGNHQCNKXQJUYWXZPCXOMQBQJBKIBRBFCHYEJUUTTDWKYLKGMAPZJPZPOBRDMVYICSAFETWFQMDUYLVHSXUDZRIGTYYNEGRRLAHCPSSIUGFARVISAOEZGDQVNVJMFQVTVYTBILJWSU");
    msg.lat = 0.37490016624383793;
    msg.lon = 0.06508473986945607;
    msg.alt = 0.27446140761497484;
    msg.heading = 0.9349016693574852;
    msg.data.assign("RDMZVFEHKJLTBQZLYEAQFVMMOJBVHCAXSQDLTOASFPRRMXGHMLOGFERUHWRYCPXWZWBWKUTINDSBCMUGIHJUEXNZNCTSQJCATAEZUIQGLKYIJTRFGNTJGOSCXHZKJBXPQ");

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
    msg.setTimeStamp(0.9834003941086389);
    msg.setSource(36658U);
    msg.setSourceEntity(85U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(120U);
    msg.id.assign("OYCISEIIRTMPRCFWAGORFSKNJCOZSFDPMRXGJQWWHVLFSHKKJEDTHLSEXMYKBQTOCKIMLWNJDRCGRVDLOXUELYETHVMNXHYNJATCEHAPFYPRGTJOZAIKGOFTOCQALRBAVUVKUBJHBLPUBPBINQXYLNSCJXHTZZKBQDXXGOSVDSBGBLCVVUGFXURMTKWPUVWWMIHEJTNYDGGUMZDNIZCXMPSZWFKSRFWZQWUQUHYZEPZAQADYEFQJLNDVQINEOY");

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
    msg.setTimeStamp(0.5079876137295891);
    msg.setSource(23058U);
    msg.setSourceEntity(185U);
    msg.setDestination(32495U);
    msg.setDestinationEntity(232U);
    msg.id.assign("KAIIVCFEUNTKHMBMYCJSCEZOCFPLMRYMGNNPKBEOYBIALWVERXHWZQQXVJQTKCYVRQAPVMEEVSXIARUFXNKRISHYDWJOPBXAUVYPZRRUMISIEYNTAPWMVDGXNAODUFHHLJDRZQTKACNWKXFGZCFHPWZUDODBLTLUHSMYPIJGWMGBVOE");

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
    msg.setTimeStamp(0.16264103841663013);
    msg.setSource(59415U);
    msg.setSourceEntity(246U);
    msg.setDestination(57480U);
    msg.setDestinationEntity(118U);
    msg.id.assign("VQYKJPPWFCXIUZAUIMNHTDHQQPLMOYYDSJTINFYRGKXHSHUYKVAPDSAGSDDKXFAQEUCEDRCQVAPMUTWQVIGSXQETGBLBKTIZBTGZYNHBZILLJDISOSRVNPRCFJALXGYLU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NUPSDWTACUHXCKARFVKFXEBALSWXKLJEIJOUZSDRKECSOMQOQFHVRREXWIRBHLVBTDYGPZLKUBYSJRPZWQHZLNMYYMHJBPPQNAUBCPHTHGAORUKYVPAALNNWRYCCTZWSNIQCOWVZMAK");
    tmp_msg_0.feature_type = 153U;
    tmp_msg_0.rgb_red = 40U;
    tmp_msg_0.rgb_green = 95U;
    tmp_msg_0.rgb_blue = 211U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2253040526342015;
    tmp_tmp_msg_0_0.lon = 0.914372133504095;
    tmp_tmp_msg_0_0.alt = 0.012056467929203118;
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
    msg.setTimeStamp(0.5179098091229368);
    msg.setSource(28280U);
    msg.setSourceEntity(214U);
    msg.setDestination(64905U);
    msg.setDestinationEntity(218U);
    msg.id.assign("HHVCEVSSHPVFMWZRLYWRLEUWLMVAHQAAXDPQDIBMKOQCSWTHBDOEKGKAFPFQLTRMXCZFPFMPRRHIXVWFXEQYSZLVBQXJGDCNJDBRBGRTBGTTEHQMNDYAVFLXOCYXAIE");
    msg.feature_type = 187U;
    msg.rgb_red = 108U;
    msg.rgb_green = 163U;
    msg.rgb_blue = 107U;

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
    msg.setTimeStamp(0.268503247647083);
    msg.setSource(55195U);
    msg.setSourceEntity(68U);
    msg.setDestination(47829U);
    msg.setDestinationEntity(217U);
    msg.id.assign("UDLVBHYMIPXWBKEOMMGCEMHFWROULCJHZVBGCANPMYASDOQODKRCHOIYBVXHOGSAFTDFIQJBLDWUQEQHSZANZOCWZYFSPTGPAKBPXTNGEKEHFXKTFJORYBJPWZJSGJLDKASLOSNRACWJTTZGVXHBTTDHQBDMLNYQULNTMUXQDPRNOJVKJEEVXCGIZYSTRXACRNXUNVCNFVMGQVKCLZEZSRUKKUI");
    msg.feature_type = 208U;
    msg.rgb_red = 34U;
    msg.rgb_green = 99U;
    msg.rgb_blue = 108U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7803313023254881;
    tmp_msg_0.lon = 0.32460921909651275;
    tmp_msg_0.alt = 0.1013687474253041;
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
    msg.setTimeStamp(0.8500207492579651);
    msg.setSource(26909U);
    msg.setSourceEntity(83U);
    msg.setDestination(59053U);
    msg.setDestinationEntity(63U);
    msg.id.assign("ZEQDPGLYHC");
    msg.feature_type = 175U;
    msg.rgb_red = 21U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 163U;

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
    msg.setTimeStamp(0.05487835528535412);
    msg.setSource(34865U);
    msg.setSourceEntity(33U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.0784718117931742;
    msg.lon = 0.8751900920397254;
    msg.alt = 0.6487780519935504;

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
    msg.setTimeStamp(0.6298255377917332);
    msg.setSource(21337U);
    msg.setSourceEntity(148U);
    msg.setDestination(60565U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.6439487404554419;
    msg.lon = 0.5391260931779459;
    msg.alt = 0.9523723351999154;

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
    msg.setTimeStamp(0.3243649825381144);
    msg.setSource(2585U);
    msg.setSourceEntity(201U);
    msg.setDestination(47996U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.0911962707884536;
    msg.lon = 0.00961751032776259;
    msg.alt = 0.34322649590009446;

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
    msg.setTimeStamp(0.5878565964518577);
    msg.setSource(62973U);
    msg.setSourceEntity(0U);
    msg.setDestination(57561U);
    msg.setDestinationEntity(111U);
    msg.type = 143U;
    msg.id.assign("FZMTSQWPMCDEEPAHEVRFWWETRSCGJCCRLQOLQYPKSUAWYGIHHFJQDKVYDXYBEUCKBJKPKUFVWULATMPHXUMGIFBAHTRBYDNCTNVRNHOJQRTOZDJA");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 62983U;
    tmp_msg_0.control_ent = 5U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 152U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.1731802460345918;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 55U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.4576543777849865;
    tmp_tmp_tmp_msg_0_0_1.z_units = 144U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.6381715752694092;
    tmp_tmp_msg_0_0.lon = 0.5664201514967552;
    tmp_tmp_msg_0_0.radius = 0.7361283896549307;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 182U;
    tmp_msg_0.proximity = 187U;
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
    msg.setTimeStamp(0.3052871517529969);
    msg.setSource(32903U);
    msg.setSourceEntity(53U);
    msg.setDestination(55396U);
    msg.setDestinationEntity(64U);
    msg.type = 116U;
    msg.id.assign("HDSSKAPVEXAAWKHQTIHLHTZFDZGIYPRJAYTZPVDJRGIEYPRXADLDFNSOTWHVLYZTQCXQ");
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 9158U;
    tmp_msg_0.value = 104U;
    tmp_msg_0.error.assign("UCIZDRAEBJVZQXRAFJCVVOMMUSMDTZBTWORYMEAIJFLCMOTLXQNKNEGASFZVYJY");
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
    msg.setTimeStamp(0.04268133950361119);
    msg.setSource(40066U);
    msg.setSourceEntity(28U);
    msg.setDestination(39137U);
    msg.setDestinationEntity(135U);
    msg.type = 244U;
    msg.id.assign("ZLVOHZKOBOQWGNLBWASAYHMXOASKBLTONRNHWNNPMPQBPTBNWDFVKWVVGRBXHTDOFWIDBWNUDSJFIUVQGJRAMAJQNVUMLGIC");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("KKWGGLWUMJJVXVTCLNILKQVCVEYVWMBWUIHHXIZBZXBEXLJYJUAGQDRLATDPSDDJZMXQKLNGCUSCSWXVUCADMNZFOERJSEXUEVPNUJTHVFAKEEWPIHYMCNFHLKZBYVKMAFBIRYTONTSHPLTZZKOTYRCNJVAPUIDM");
    tmp_msg_0.visibility.assign("WPHUZYAEHLPBSEKGCLAKEGSPCQGBXDCXCVFZOJMHGVFSONTEPWKYYQZTJSVJXFYSMOEPHWTWXYHQQFAHOGRNBVOWZULZYKOFQWRFKDWDJVDBUZJGVVIDCYLDILDUCXHQBSRQZX");
    tmp_msg_0.scope.assign("ETRYQMZUJPBM");
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
    msg.setTimeStamp(0.6636038124704469);
    msg.setSource(34510U);
    msg.setSourceEntity(13U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(91U);
    msg.localname.assign("QLSTUQVAORCHNTCXXSZMRAVSFPNJQUAYJSJXGQWKEGEECYZKCVAFCLTPERDQFVTZNIXLOHGCBRRICGLDINIXBFUOYMNITZAFXCDMKLCYJIOHGMDVZIWDCUWEJAMPWTGNKWNYTHHOYQFZONVQQKTDPKKMEZNSWPVFOJDEBLMAHUKBIOXWDKRSYEH");

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
    msg.setTimeStamp(0.5069979923891743);
    msg.setSource(52063U);
    msg.setSourceEntity(115U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(22U);
    msg.localname.assign("MAHETQHWOCCFOXGWRXFSXCNXOORYDZBTPYRSFEOETAWEGASMKLGDWNYELOIDUKNTNUJVTJJWTWZDXVIAIZGZVXPKDVQYVSHHYZRPUIZPVPXIVQEFMUEBULWM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RXNQIRHJNZJWOLXCWQGKQVD");
    tmp_msg_0.sys_type = 229U;
    tmp_msg_0.owner = 52696U;
    tmp_msg_0.lat = 0.7792437411343157;
    tmp_msg_0.lon = 0.9096563414975934;
    tmp_msg_0.height = 0.44829690712620307;
    tmp_msg_0.services.assign("GZXWYQXFNRFCTBMZODQXXNLLTVJJHNDYOAFMFENXPWDSEECQLMRCCUHHWVVHZFSCCWNEVYQOTEIMNUFPVHYFBQIHWNNRAZAPREJUFIGU");
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
    msg.setTimeStamp(0.07830516181454061);
    msg.setSource(36551U);
    msg.setSourceEntity(69U);
    msg.setDestination(38147U);
    msg.setDestinationEntity(54U);
    msg.localname.assign("DSBVWBJNNBPLAQPLWGXROAVNSTHZFPICRYVOYAHOKEDNOOLMJFJAVADRCIYUFIKAHUOLIEEGWGVEIXUTDCVUGRXDWLYOYWMULBMXYJGBSWFSCCTFVNRKYJARXHXWVGKECQYCGWVOTYQRN");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WCNBZICPMVMMVLTZHKBIAZXSLFLBCTSPBPUIVXNNKJLJGORWPFDLGIQKHWEMBNESEQSYNKWCTVZDPTADLOVRTVQPDRUEFUG");
    tmp_msg_0.sys_type = 127U;
    tmp_msg_0.owner = 28739U;
    tmp_msg_0.lat = 0.5098928973905307;
    tmp_msg_0.lon = 0.8356091581603329;
    tmp_msg_0.height = 0.8283599797942083;
    tmp_msg_0.services.assign("EUDPGDREZQPDOQFPMOQQMFFBTDPEQTNEZZNKLLJCRMDBGKLVXTYWVQNIWFVINDYNJLYIMIKAACMQYYPBYKKOLWMNUTMBAEXAQKFMRSEJUGXFNZOIKVWSBGCGRSEHCYASRKBTVXGBTZPJRIUJJWCCAVLUSZHRDTZUFGKCXUIWDHJRPFVKVHMYJLZYHAIDAOWTBSPEZGXWW");
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
    msg.setTimeStamp(0.3686993576765386);
    msg.setSource(4291U);
    msg.setSourceEntity(61U);
    msg.setDestination(15908U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("KNYSEEKJMZIGWGPHSCNIRJMXOKNGASCAZMVWEHQQPPXYRMKDDTFMBHWEDJGKFUMDUITTMNYBLPBXLJQUZVXQBQJZCCDZIGHLNGBYOUVWCTOLYINRXRINRVEFFEHBNKMONKKCCZTASQVZRPJHWEOKPRPJZFPQBWLXBVTJRPMWDOWOATGWUCGIDFYSYRISSQFQUAVAGNCSSODBYXIELLKUXEJALVAGHJHDO");
    msg.predicate.assign("DQQSGWVDWPWVKLWBZUPXKOTMQLJMALGADORDPHGNBYRAUWDHDFHXLWIEMTTGJJAXIOQRXPMOKRERIOXMZZZYFJBCCHISIYDHHKCHICHKPYXFGQUXZYVKLLXQBMPDWBZVAACANJJGSPYZCEVGSYQRTUUWMYBALJVOLTYUTBFHLSGWNBZRTSTKNCZWGOENUCSFXFSPVFNYJFZETXM");
    msg.attributes.assign("KMKVQXPCOAZBLAEASFIQHRPUOCCGOTMNGNYBTIKETLNYLYGZWMFFDWKOPWXJJWKIRKTUKDIWHGCRRVELQNGPHFVUUXCTNXBQRAHIGSZOVNWKJUQOLCSGQSDPNOZEXSZRPAIQZDJTMRAYLKMWBISQLTZYUMEONTMSUSXGYCDDKQUHZAHVACNFPIECAVPDJMSDGXEFNZRHJWJCQRIBEVU");

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
    msg.setTimeStamp(0.3377658147232777);
    msg.setSource(42525U);
    msg.setSourceEntity(123U);
    msg.setDestination(38508U);
    msg.setDestinationEntity(94U);
    msg.timeline.assign("DRYQYPVSGMDAEHWJVWNSUMAKFUEIDKFYAXOBPQXOBXULOGWJQROHPMTMETLZLUAEYVFDHTZTFOIIDSDKBVOYGPFEVSPQUCEPMOCIJLFBMJZBUJGAUKWRDRBVHOJMKBNWSERXCNGHCYXCHNZREBLPVWTTKATGULZNHAZWMNPQIIXITNAOBZUKQXMYTGUIBFERRVEPFFLSXDAGFGCKRDJ");
    msg.predicate.assign("YFDJGDGEHSIOLVSHULJLXBVKYMFSFFYETNBQRZOJKRWCPLVOZWC");
    msg.attributes.assign("TFESFASXIUDQUPDFRBKWSEPQMZPRTFDCYLEYUYGIKFWUPPOXQNOBQNYCMIMAROPHUVSBMEJSUGJYHGLIIJVWKREMMCCLGFGEPNTFCJADOBYONHBRX");

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
    msg.setTimeStamp(0.9938506232680195);
    msg.setSource(28159U);
    msg.setSourceEntity(158U);
    msg.setDestination(17709U);
    msg.setDestinationEntity(109U);
    msg.timeline.assign("HWLKLKTXQYITRNIFEF");
    msg.predicate.assign("EATOQFXNINEZKNGXSYIPIHWPDTPPTUTUUPBGSERTCMERDDJEUQRDQXDOJNVJIKYFWJFVOPLPQBGJKUDDRKAQILZNIFNLJMMF");
    msg.attributes.assign("OXPPEMLQVLDOBGRAKLDVWR");

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
    msg.setTimeStamp(0.05548564407881518);
    msg.setSource(37005U);
    msg.setSourceEntity(91U);
    msg.setDestination(11046U);
    msg.setDestinationEntity(201U);
    msg.command = 125U;
    msg.goal_id.assign("CIGTWLTTAUFSQUSAUWAPLDRFDQISZWJXUBNXRDGAMXOEVEFKCEVVRHIZXMCHBDZRQYONTEOZOJAIRNPZJBCEYVDGITCWMMZVAMTMAOWSJWLJQQXKGXISLRVYGOEZFJPPPAQEJOSYBTINFABRLFWBQSKTDKYXCMJJXVYRIGVXYBRFPHUYQGKHTSYLCEUKZIIZYBFJPGOMHLHCNDNR");
    msg.goal_xml.assign("QIBQMDHETANTVLSXLOEBHFDPXTDFRXUTGIFMEYPSYDNIVDWGWEEMHKORRQQKHVIPTOKCUTZIRWJYUZQXLMWSIAAV");

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
    msg.setTimeStamp(0.09119772363359002);
    msg.setSource(40735U);
    msg.setSourceEntity(169U);
    msg.setDestination(43371U);
    msg.setDestinationEntity(64U);
    msg.command = 152U;
    msg.goal_id.assign("QTPKQXNOHUPMFIKWIPAYMSEKQPANLPJSIUYPGFCKIRSTMBWTZPTVNXCLZCYTNUTFXVVKRWKVZYGCQNHWMYDOHHEDRCMMHLEJQSPKCQIUJVDGRMATSODMOXAF");
    msg.goal_xml.assign("ARIRNDZYMBIHVGYJBBGOPRGEAEBRTHFDKNNRWTKUIQIXOSTAZYLPWDDXMPTPKQPEBOWSLSDEKLDZYPOOTALNITJBXVZSWQVAHJRJIKDCOHWIFWYJOYVNWZELFKCBUXSRDKDPTIXTLRGQQFCMHNGVLDCCAUVZZAXNCABUYNASVZONMRYIXPNELFUYFMKFREHSCZSGUKOHTHGEYOMFXTWMVMBEPXQJQLWFJZCMJSGUHGQQPWQVCFXEUAKVJ");

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
    msg.setTimeStamp(0.4830227794378168);
    msg.setSource(47321U);
    msg.setSourceEntity(183U);
    msg.setDestination(25679U);
    msg.setDestinationEntity(139U);
    msg.command = 188U;
    msg.goal_id.assign("VJCZWTIOJYLBGL");
    msg.goal_xml.assign("FZJRBAIJZEIAINVWNQBSKYHKCRJTLLHHZRRJJGQLJCYVMEOUOQFMSMREUKIMHOPTOTWODEPHHPNTNJLXOQFWLMDFSTMGVPIFUZHBTXNCLRYUYQCBUEAPAWCINYJDCZMQJAOTYTZPSAOUKXRSNFPFBKW");

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
    msg.setTimeStamp(0.8855903191252291);
    msg.setSource(15046U);
    msg.setSourceEntity(152U);
    msg.setDestination(7021U);
    msg.setDestinationEntity(243U);
    msg.op = 105U;
    msg.goal_id.assign("ABVHRNSZHODCRUPBHVUADEVWWIMHGTYMTGRHDLAOAVWFJZMRWRXBIILMDZSCNWZNNPOAYQAVNJCIBMAFIVCEXFHPFCPDPSLLLOWCTCYMQPNESMIYBOTQGTQUWZJJRJSRXODHFZGKVFUMDVZTHPIOGHINOPGAQOJXKMCANZFRLCQLYUFEMNYQKUKJUWW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBQECZNCUPIJBJAZREPCENFQGXGOIYTDGFE");
    tmp_msg_0.predicate.assign("ZNVGZDOHLUDMBUNFGIRXTAOSIKVSDDSWVHEEARSMKRADPITJCUBQCIKKNHABJIANDPGDAANXVUWQXFPCLJFXQOBTIUEYQGXEZOTNMPCCZUHXSSONXMIWGGGMEFTZZHAWVCBLFJSYVOYPRRWRYWYBNJPAMEWUIYVJSFRJHMVKMDDPKILTEAKKJXETQQWFBLHBWFXOCQZTRZLZLCUGORULXBSKMHHNGSPLFMOBCDYLQO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DSYPGQUQKLORIHPPLVMJYMINDJSWGOSCZPOXQDKLHVVAVJHRBKSPERZOZJXFDGMCZWMAIOACEJFOXYNBABHSJYDKLMYTKTN");
    tmp_tmp_msg_0_0.attr_type = 121U;
    tmp_tmp_msg_0_0.min.assign("BWLZSGIYMWEIOHEDPMIMKAKIKUXOFAXWVZGHKBDZFYYFEAXVCFVHNEJKINAOOACPTZJDHAXRUCGEXCTHYLZWMOSBQPJXRXDCBNYIYUQUNHVBGVXHZQQLYNCPUWNQBLMPPSCPNPWAMFBNUPSGNYR");
    tmp_tmp_msg_0_0.max.assign("IEQMLPAQKFQMJLAPTXBTUIZQBMWZWJIFLTAKAULEVNLHXCIFBXOHFBKMEPWAXTVFBOSLFGVPHQMMJONUIBTWIGDEYTXVJTIZHDWCENYESYSRSOGFWY");
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
    msg.setTimeStamp(0.4597093429480392);
    msg.setSource(35186U);
    msg.setSourceEntity(54U);
    msg.setDestination(18617U);
    msg.setDestinationEntity(119U);
    msg.op = 8U;
    msg.goal_id.assign("POILLNBFZSOGNHGBHLODFVZCQKTNJKWHUZLQPTTFEEJFWSXKIJMUJJVBCYXDRHKBNSLHAOQPTXWAZUVBVNVOGIIYYYPUBTFOFEEIWMZRQWPJXFDNMTLHAHCEMBEIOQEIGYNXOASM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XKYIWNPCTPNOCSRLZEDBGHZDOHKVJJVOUXHDJWJXJQEESKPFRLFNHVXXKJCEYAMIYGETCKDMSULMDOMRMQDCLFLZZEXFTYVGZLUZDBPHUVCKADFKAAGGIVIWRVZVNZKRFGCRTBAPWLYABPNLSOYESTNRSGASDJQUIQWMUWHOOOXCTQABNSRKYHMYEGTPXTJIUBPBFBBFAVSNZXNTQDHQWHVGIXQIPFRUMJCIECFBWNRSHGZ");
    tmp_msg_0.predicate.assign("YPWXXJLRWHMAGUVQGJOPKLPZCBCFLKPVDPTTJHWAWQTVGVFEUDDSUBFNXUEOJHBCIDBCVYPTYIRGNMBEJBDZZSVOAKNAZEQEOZLYFAISKO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZYTPSAELDOZYKUFCREWPUTEHBDYBCUAFPXMCZJEMGEWKQVGXVHBHDXSKENMVOAIWOUFQPWJNVOGMVGRVRCZGOKKFNZORGFIQISLVKKAYPUHOYDWTKCXBYBJJKOXGHSFFYLQSXTLGUVELNZJQNVVULLXJGHTIPIDAWMBMQHTXDPMSOEUXZNCMBISGWJZSSXORHNQICMWRCETDIFYTJ");
    tmp_tmp_msg_0_0.attr_type = 183U;
    tmp_tmp_msg_0_0.min.assign("YCSJYHXIBZQUZVGHGVPXONDLRNQFBYNYWVSFLZPEVKDMGKBTIBWEKWKPYJUUTDSDQLXHAWCWYGEDQZSLLIQSPELUXFGJNBJRMTEBYAVCEMKTOEBIHVJNJDRAXMCLONGOXUNWZFCNRHKLMFCYVOPCIITSMZNRJCGUIHPAZUUNRXLIAMESHFZWLQVRFSDIMPPHDFBPQAQRHFATDKMXY");
    tmp_tmp_msg_0_0.max.assign("BIOCZUKTRTFAEXGJFOFEMTMOKWJFWZDJXDUDHUGITNECSGECXJXNMKOJKTUYMTAKEAOBEYUBVMRHRJKHSUFILNSQRCPUBLYVEBSDBVWOZQAZD");
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
    msg.setTimeStamp(0.976159284374871);
    msg.setSource(4411U);
    msg.setSourceEntity(181U);
    msg.setDestination(33740U);
    msg.setDestinationEntity(144U);
    msg.op = 42U;
    msg.goal_id.assign("VUWTRUQBAYGFRFVWQIRFPBXHARAGZBHNLCHYDWSXAJMFUAJBPSSZZNZUPGZEMPWJACFOJFODKQECKSOUMKWEPDEMBYTJHIDGIWSRCSHXPBEIEHITPLRJJIEFNTZUVAXMVWARVQHXJELHICDQDTWQDXYQGNYMTXBYMXOPCYHROVMZVUSVXCACZDRYKTTLZVYKGKLGXNZIUUEWICMT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BWHITSYFBJPFEBPCGZPVKMZMAKLGAUYGVEGYNDELLSOACRAIIUJDCOXXTJSPUSUOUQICGFFHWLYGMUDINMUJWPSYJAEVMPAHDTVENBXKYATTXRXHEMBCETVVPNTQEWPMOJQLBNJWRPLKSLWJFIZOQFTOOMIGFHXAZYDQQYHHDVFUSKXKZBVKZRJOEDLGKISQWQQFOCURHLV");
    tmp_msg_0.predicate.assign("DTEESXYWJCBWRHKPQDJFAYRSLRWVMJQBYOVZVYNSJIUGKZAEOTACLDWEXGAWDCQUYMEILMFXYCHHMBXRBDLDNJUHZKHXBYEOWPUDNXZMDWZCNUFWATKBXCRVYXUVPZTSYLSERRPFUABECOSJSZYMVAGDUTLMRPM");
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
    msg.setTimeStamp(0.4869217199198206);
    msg.setSource(58763U);
    msg.setSourceEntity(167U);
    msg.setDestination(44425U);
    msg.setDestinationEntity(165U);
    msg.name.assign("SWCJDLWRLAAOSYJCVTITPOFSQXSZTAKGVWQQHZHRMLEVTJAZXMVYEOBYCVLVHSDAXMZKEMVZWUNRIKERPPFCYAUPRHGMMDQFICFLFXG");
    msg.attr_type = 241U;
    msg.min.assign("KUUHEIMRCLBRDBMHBOHWOIGCACGIJANWVZFILENGLRAZPPMGRMVLZJBZCYRDCNXIKDQDYZYGEJHITOPVWYASRNJDNQALRDEJFIMPLJYWDUJSNOFCKPXJOADTEDXBUIUOKFRVVUFWPW");
    msg.max.assign("SYWQXCXWRFOFIODHMQOCMDARMWHAPNWPUJSHVOTFEOFJDDKGFEMCGLZRIYZHIPPMIEYYCFCHRZRSAX");

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
    msg.setTimeStamp(0.03682305530288288);
    msg.setSource(46477U);
    msg.setSourceEntity(78U);
    msg.setDestination(53969U);
    msg.setDestinationEntity(7U);
    msg.name.assign("ASFWZEIKHIJNFGHGRDUUMQSOPUQGPJMTPXMHLRYEXELOSJXBBCQR");
    msg.attr_type = 1U;
    msg.min.assign("JTLMPDHFNZMTHBSLPLCKSPLSOGVVVNDEAXKHTBTQSWHNXIEQWMTAHJACQZNBLALEDUPQSRFORZKSZCFJMYOONRVKKMNJSGNKFXHPUBWRGHLPAVVMBKGRNBPOWIKIZFBGJETAZEUIXDYJOEHLUCEUYHGYRQRKIWIUMELXPCQFIDDFWCJAMYDIZBXAYUYWEMFAYZFPYXVSQJTLQCUNRYRIOOCAD");
    msg.max.assign("FMORKLOGMHPFDSSFHEYDEKJZNRJBCYPIAKQSUBTPZAVXDSFWZTGAGZRGBSJQJLPXMQO");

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
    msg.setTimeStamp(0.6397640556007587);
    msg.setSource(28846U);
    msg.setSourceEntity(231U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(25U);
    msg.name.assign("LORVDRDWSJGZNYWZOJKUEIPBAFSYKAEFCTCABPBSCRHSUXMZEMPARNKFIPTFRMLQCZEIOWAXDMZDAKSVWUBZWZKGGRXTLPUVJNVXSNIJGGUOTCKUDMSNUEFGMOYYQCCUGHDA");
    msg.attr_type = 221U;
    msg.min.assign("REYVJQDUWHQPKZNWWERCLEYBXWZFQGYDJXBOHIYIKJTAOMDIRQECRCSJKFJDDMUVBOHZSHHZNWKFPUANQUJWCAEWZGPUBDIVUBTLLIZSEVLHKNDFBITNIBFAPYLLYKSQSXX");
    msg.max.assign("WYDRBNABLCKEGCNFSIIVTAUXHBMXCUFQONIYCFIQKHXHGMBGAZVVXHSXMRIKITFPSIZUVHQHZERJRNTAAELTGFDBFEESOUKAMKJKGPMVDLTNOHMPVWZRXOZWCUVRMJOFCCOBLKTRZSPMSJZVLWYNEGEDDSXVCYTROLNZLJJM");

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
    msg.setTimeStamp(0.698015334209134);
    msg.setSource(19083U);
    msg.setSourceEntity(117U);
    msg.setDestination(14382U);
    msg.setDestinationEntity(99U);
    msg.timeline.assign("OBSQTYNGVCUHLSVTEWEDMYICWKDUKHMRCKVVYFPPNAWXZHCXFKHZJUOEELTGZOHPSSUFJVFIDSBKMPPWPPTLXVCNYANGIQIEDWOAOUBZXIYBLR");
    msg.predicate.assign("OPYPRIREMWYNQBNBRJQKUASGOVPVNPVISCEGMZMTORQCXSAUXEAGASICMDZHGJUBWONISWCATYQFPTLMEKRWFLVSNHVJBNTAVH");

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
    msg.setTimeStamp(0.4536947944346198);
    msg.setSource(54501U);
    msg.setSourceEntity(209U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("CFMYJVYARODPWIPDSINZRN");
    msg.predicate.assign("CEGJIPALOKRWQSILSDENRZUJUWUETCDMIYFOWRGXCQNKMGJPGCXDDOPQDDBKBQOEAUHSVBSASMYNFM");

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
    msg.setTimeStamp(0.5129499779279945);
    msg.setSource(64226U);
    msg.setSourceEntity(98U);
    msg.setDestination(34928U);
    msg.setDestinationEntity(59U);
    msg.timeline.assign("CKJLUKGSNDXOCQYRNMWMAPVGHQRXFJ");
    msg.predicate.assign("ZAXHDHVGJESCFTYJUWGKEIPFZUXCSHZYDPEGTDAAJEMYZRFNJTRBOBAMDOBKXVGIEBTWTFRIPELFVVPVXNMRXABFRRCIYB");

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
    msg.setTimeStamp(0.9420479732711463);
    msg.setSource(24678U);
    msg.setSourceEntity(116U);
    msg.setDestination(8980U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("LJYHTQCMHSZZCWMLNHTUTEEFKWZYWJIAJXRPQDLUELXNNGWKRHXOOKTIOQJOPVBZIBCEIZHCBMEVUEGWVQSPIGNDKHTAPMJWUDKAVXTMSFHZLDQDNDRYHLDVGCNEBGPZFSVXWDRRRCUBYIPTXOTZUFYEOOKSAIYCVPAOYIBSILXTXLJGQAONVZEBDRWQGYVRZGYJFS");

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
    msg.setTimeStamp(0.7963031511404299);
    msg.setSource(9986U);
    msg.setSourceEntity(24U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(143U);
    msg.reactor.assign("ZIPMZBWGUUKPGOTJMRZKYGWRXBYXMDQEYXFYJNIGRMFJRHSUESTPDOKOQNNQIKCWVICBMTHAY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KXFRAGEWRBJBEDOXMZIKXNDAIUDPLHHJMRNPHRLAXTSE");
    tmp_msg_0.predicate.assign("GVANIIMPSMCDPDNVXQHONKRGULNLPYLAFMJBWKIDRGBLCCXEMMITAVHUEPOGDRAYALYGOYECPUFQUFBBRXEEAGULMOKUIZKTKWISUDYSIHMSRCGDSNSCTFXJHWBBFPAEJYEJRTTZDXGEWAX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UUQNAWGSHJFAJIKQQLKUPKBEFDVMAGKMAIKSTSB");
    tmp_tmp_msg_0_0.attr_type = 184U;
    tmp_tmp_msg_0_0.min.assign("UJMOZAHSAFZBSSPGLKUQXMVXEGCOZSUEDNGNXPPNKBWWVJDMIUINWLFGRWKUIIJSVOHETRPSIYDTYLNGVWAQRFXISOHVMNFBIYFXVZAWQVLRHPGTJLVMFSCNRUYBJJZMSJDIGXWQDDEUVJCTUERRBSHGKFYZVFOZYKRQKROFJDHIXMTBMAEXCACOEDTPCNKEBQBUKAPYBNWPPZLOUTCICTQDEHDLXTOZOBHQFTK");
    tmp_tmp_msg_0_0.max.assign("DVBUFYTVGXUPLAOARLREVHCHPCHRKPFOAFUQJAJKEXWCTUIUXELYOZWTUBQWTEF");
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
    msg.setTimeStamp(0.0741278512249336);
    msg.setSource(34955U);
    msg.setSourceEntity(224U);
    msg.setDestination(63618U);
    msg.setDestinationEntity(51U);
    msg.reactor.assign("LEEQRNYONFVCHEYLKVKIVIYLBHWXSBBZTJMOAUGMTKGTYOPDATSMCDGNZINHJJAYMROZDUZVTIQUUCYGSYTBEMYPQWBWOCZFNRJULRLWQNZZASITPPUOUGMTFGKWULCRFMQXCVFHWNXCMRZLJHXQJAKIUIEEASOUDPDBNKVO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKDRECGQBXLXTGGJYPYUUGWFUVCNRPOFDQYJLLKNIAODSVGAXJOQAVVASQPSENKSWXJHYZTPEFDUXRKNJGCDUIWHQBHZUAIFDFYCDTPBZOMJKAQCDSNVTWWASFRMICCIOVXPKVPZADSGQYNTUGHGZMPEIKZTWLLBHNGYEOYRUICMXFOMZVOSFZCKRLMJLXTWREIFHJWQXEMMTHHBBKPYINYMHUELJWRNBSBBVPBAOILOKETNRQ");
    tmp_msg_0.predicate.assign("CBQKISGZMKHOOQJSSU");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.6719381238440099);
    msg.setSource(30300U);
    msg.setSourceEntity(230U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(252U);
    msg.id = 186U;
    msg.width = 50703U;
    msg.height = 14369U;
    msg.widthstep = 43023U;
    msg.channels = 205U;
    msg.depth = 148U;
    msg.finaldata = 156U;
    const char tmp_msg_0[] = {-99, 46, 29, 45, -95, 119, 7, -82, 43, -122, -21, 44, 48, 117, 20, 29, -74, -35, -16, 56, 75, -111, -76, -84, -55, 90, -9, -66, -7, 120, 81, -90, 95, -120, -115, 97, -56, -81, 4, -18, 52, 28, 10, 69, 120, 106, -7, 126, -9, 6, 64, -1, 20, 90, -33, 66, 65, -86, 56, 31, -115, -64, 67, -48, -43, -70, 96, 105, 11, -84, 79, 36, -51, 94, -114, -25, -16, -28, -30, -76, 87, 114, -67, -114, -93, 96, 22, -19, -24, -109, -57, -90, -46, -100, 68, 75, 45, 37, -4, 52, 70, -43, -94, 16, -81, -44, -79, -7, 91, 10, -105, 38, -16, 6, 57, -26, -113, 17, 86, -60, -3, 24, 80, -51, -53, -76, -71, -99, -20, -42, 64, -101, 116, 116, 113, 126, 61, 33, 93, 30, -98, 45, -19, -76, 105, 102, 36, 78, -81, 81, 15, 48, 115, 49, 12, 50, -102, -79, -111, 77, -127, -109, -62, -92, -15, 38, -107, -82, -90, -77, 45, 13, 75, 27, 108, -45, 99, -81, -108, 85, -116, -113, -99, -15, 1, -23, 4, 9, -17, -8, -48, 41, -4, 38, 99, -54, -8, -111, -24, -126, 46, -90, -83, -106, 55, -15, 96, -55, -128, -76, 53, 33, -125, -76, 94, 73, 9, 42, 124, -21, -79, 111, 16, -113, 111, -67, 47, -47, -29, -79, 35, 80, -120, 32};
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
    msg.setTimeStamp(0.6990743785255071);
    msg.setSource(14179U);
    msg.setSourceEntity(85U);
    msg.setDestination(13423U);
    msg.setDestinationEntity(130U);
    msg.id = 102U;
    msg.width = 36039U;
    msg.height = 32771U;
    msg.widthstep = 46281U;
    msg.channels = 205U;
    msg.depth = 238U;
    msg.finaldata = 112U;
    const char tmp_msg_0[] = {-82, -61, -50, -37, 3, 81, -106, -89, 117, -63, -28, -29, -17, -60, -34, 8, -7, 86, -66, 76, 97, -128, 7, -40, -93, 4, 39, 43, 70, 110, -74, -23, -80, -113, -115, 28, -106, 101, 20, -43, 73, -83, -125, -102, 89, 53, -118, 121, -128, -86, -19, -118, -122, -54, -60, -47, -36, 10, 34, -54, 115, 79, 20, 31, -73, -15, 47, -6, 54, 8, -25, -38, 11, 40, -30, -105, 30, 50, -98, -92, -108, -76, -37, -23, 77, 54, -122, 48, 95, 17, 0, 61, -9, -95, -48, -24, -12, 91, -42, 15, -12, 6, 100, -4, -28, 121, 92, 123, -92, -75, -4, 111, -114, 53, -64, 109, 69, 103, 54, 81, 2, 96, -14, 31, 80, 18, 7, -123, 7, -70, 24, -89, 42, -42, 104, -44, -9, -14, -64, -52, 22, 83, 22, -48, 10, 115, -55, 51, 70, 93, 48, 63, 43, 108, -79, -30, -4, 80, -100, -35, -120, -37, 15, -111, -28, -70, 95, -75, 66, -106, 58, 83, -81, -9, 8, -99, 120, -69, -34, -120};
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
    msg.setTimeStamp(0.255230652665978);
    msg.setSource(38514U);
    msg.setSourceEntity(229U);
    msg.setDestination(41111U);
    msg.setDestinationEntity(169U);
    msg.id = 187U;
    msg.width = 18249U;
    msg.height = 5964U;
    msg.widthstep = 11476U;
    msg.channels = 144U;
    msg.depth = 200U;
    msg.finaldata = 132U;
    const char tmp_msg_0[] = {-117, -7, -112, -64, -71, -65, -110, -78, -70, 57, 56, 37, -125, -7, -64, -8, 20, 112, 91, 42, 92, -124, 43, -12, 36, -119, 110, 53, 7, 2, 101, 27, -126, 21, 62, 24, -61, -70, -116, 75, 112, -28, 33, 99, 112, 77, 33, -37, 114, 69, -86, 0, -64, 15, 111, 65, -15, -9, 95, 54, -59, -99, -2, 35, -46, -9, -2, 126, -49, -118, 93, -90, 42, -66, 77, 64, 121, 19, 31, -78, -52, 76, -24, -65, -111, -39, 125, -89, 124, 51, -57, -111, -108, -65, -11, -31, 121, -51, 78, -31, 10, -82, 60, -30, 112, 121, -11, -119, 120, -82, -42, -100, 67, -19, -87, 0, 9, 17};
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
    msg.setTimeStamp(0.26338270257280594);
    msg.setSource(31889U);
    msg.setSourceEntity(7U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(153U);
    msg.width = 64643U;
    msg.height = 29405U;
    msg.channels = 218U;
    msg.depth = 235U;
    const char tmp_msg_0[] = {114, 86, 98, 112, -88, -1, -110, -44, 112, -89, -83, 16, 17, 121, 75, 23, -45, 1, -87, 64, 81, -84, -40, -127, -6, -43, -45, 124, 33, -17, 64, 91, 95, -91, 32, -21, -112, -8, 94, 23, -69, -3, 43, 21, 112, -32, -61, 92, -55, -78, -92, 79, -120, 92, 2, -73, -15, 50, -5, -84, 100, 1, 67, -87, 111, -122, 88, -68, 95, -54, -114, -79, -10, 89, -45, -33, -9, -52, 120, 74, 37, -20, -61, 115, 0, -40, 114, -36, 63, -16, 1, 39, 80, -76, 20, 57, -120, -22, -40, 66, -34, -4, 58, -66, 36, 72, 99, -16, 38, 54, -34, -35, 108, -52, -10, 33, -39, 48, 85, 82, 44, -112, 112, -92, 29, -28, 89, -97, -27, -19, -120, 13, 116, 37, -28, 51, 74, -47, -73, 24, -95, 12, 34, -80, 95, -94, -103, 37, 29, 12, -105, -70, -53, -102, 48, 105, -121, -54, -40, 116, 116, -80, -12, -110, -25, 50, -62, -81, -53, -61, 109, 37, 82, -37, -28, 34, -38, 101, 3, -54, -28, 111, -105, -102, 58, 2, -18, -20, 44, 2, -48, 23, -73, -25};
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
    msg.setTimeStamp(0.6488711428189616);
    msg.setSource(25178U);
    msg.setSourceEntity(136U);
    msg.setDestination(4961U);
    msg.setDestinationEntity(55U);
    msg.width = 16347U;
    msg.height = 40629U;
    msg.channels = 159U;
    msg.depth = 26U;
    const char tmp_msg_0[] = {-39, 96, -35, -126, -45, -26, -119, -33, -73, -86, 42, -27, -125, 17, 103, -121, -1, -8, 37, -75, -79, -10, 10, -62, 66, -32, -19, -19, 84, 113, -10, -50, 7, -64, -94, 118, 4, 106, 22, -21, -30, 107, -30, 22, 108, -117, -37, -122, 67, -113, -65, 24, 48, 71, -25, -87, 1, 70, 43, -28, 63, -58, 121, -16, 92, 19, 111, 70, -100, -1, 18, -2, 57};
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
    msg.setTimeStamp(0.09324299399884262);
    msg.setSource(34707U);
    msg.setSourceEntity(175U);
    msg.setDestination(52078U);
    msg.setDestinationEntity(7U);
    msg.width = 38702U;
    msg.height = 4720U;
    msg.channels = 67U;
    msg.depth = 34U;
    const char tmp_msg_0[] = {88, 45, -28, 0, 45, -86, -84, -55, 39, 8, -125, -113, 48, 104, -117, 96, 117, 61, -106, 42, -121, -92, 51, -116, 9, -6, -47, 58, -55, 73, -81, -107, -49, 71, -15, 124, 101, -73, -64, -34, 66, -26, 79, -98, -123, -2, -3, -100, -73, -116, -18, -121, 126, 65, -84, 6, 107, -40, 81, -43, -3, 82, -55, 90, -108, -116, 69, 36, -56, 80};
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
    msg.setTimeStamp(0.11043172752983921);
    msg.setSource(10860U);
    msg.setSourceEntity(163U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(13U);
    msg.frameid = 30U;
    const char tmp_msg_0[] = {103, 79, -20, 83, 115, 61, -97, -32, -40, -96, 4, -12, 62, 33, -34, 63, 30, -58, -75, 41, 93, -125, -123, -75, -13, -90, 111, 14, -21, -62, -122, -72, 122, -28, -8, 59, 22, 94, -105, 84, -109, 19, -1, 89, 41, 55, 47, 11, -46, -82, -17, 9, 78, 49, 5, -26, 4, -36, -109, -111, -62, -58, 16, 13, 88, -120, -81, 20, -43, -11, 11, -66, -68, 30, -57, 115, -3, -118, 78, 30, -80, 14, -74, 17, 20, -38, -18, -14, 72, 20, -65, -88, -102, 57, -128, 95, 54, 97, 55, -105, -68, 26, 87, 124, -2, 67, -85, -128, 123, 100, 43, 101, -110, -77};
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
    msg.setTimeStamp(0.37852332673251177);
    msg.setSource(23593U);
    msg.setSourceEntity(201U);
    msg.setDestination(42610U);
    msg.setDestinationEntity(249U);
    msg.frameid = 174U;
    const char tmp_msg_0[] = {-108, -47, 54, 85, 84, 1, 99, 43, 118, 62, -119, 92, -39, 8, -32, 120, 96, -50, 95, -79, -7, -96, 91, -49, -21, 13, 18, 71, -119, 38, -44, 25, 45, 36, -107, 67, 65, 45, -10, -92, -39, 110, -28, -57, 96, 119, -70, -61, 30, 48, -64, -8, 87, -45, 67, 88, 90, -73, 120, -59, 11, 55, 110, -27, -98, 120, -50, 30, -104, 22, 45, 8, -66, 93, 124, -11, -47, -4, -127, 95, 111, 52, 116, -49, -101, -75, 106, 16, -67, 66, -89, 28, 30, 79, -108, 61, -96, 56, 113, -73, 67, -52, -85, 24, 125, -114, -23, 67, 36, 119, -44, -107, -70, 112, -19, -80, -94, -28, -123, 102, 97, 81, 39, 36, 18, -66, -5, 69, 41, 126, 4, 81, -110, -57, -89, -5, -11, 126, 23, 121, -54, 52, 7, 75, -65, -28, -126, 21, 32, 54, 48, -67, -84, 61, 65, 125, -62, 57, -34, -17, 120, -127, -12, 121, -14, -59, -68, 103, 63, -10, -81, 43, -125, 39, 19, 41, 49, 54, -76, 92, -11, -10, -77, 51, -69, -126, -110, -14, -125, 67, -50, -101, -120, 21, 101, 43, -61, -40};
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
    msg.setTimeStamp(0.9361454915479113);
    msg.setSource(55U);
    msg.setSourceEntity(26U);
    msg.setDestination(58763U);
    msg.setDestinationEntity(119U);
    msg.frameid = 6U;
    const char tmp_msg_0[] = {113, -112, -58, -35, 104, 57, 121, -9, -113, 28, 126, -56, -120, -46, 56, 73, -16, -32, 10, -88, -29, 83, -15, 55, 25, -75, -60, 14, -32, -53, -78, 78, -61, -59, -71, -68, 18};
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
    msg.setTimeStamp(0.3848675757671378);
    msg.setSource(48475U);
    msg.setSourceEntity(162U);
    msg.setDestination(56811U);
    msg.setDestinationEntity(233U);
    msg.fps = 24U;
    msg.quality = 208U;
    msg.reps = 203U;
    msg.tsize = 57U;

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
    msg.setTimeStamp(0.10647579898456172);
    msg.setSource(58685U);
    msg.setSourceEntity(2U);
    msg.setDestination(43774U);
    msg.setDestinationEntity(51U);
    msg.fps = 242U;
    msg.quality = 147U;
    msg.reps = 234U;
    msg.tsize = 68U;

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
    msg.setTimeStamp(0.7916690812837562);
    msg.setSource(3911U);
    msg.setSourceEntity(150U);
    msg.setDestination(49573U);
    msg.setDestinationEntity(77U);
    msg.fps = 177U;
    msg.quality = 153U;
    msg.reps = 108U;
    msg.tsize = 42U;

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
    msg.setTimeStamp(0.24193711655860373);
    msg.setSource(7737U);
    msg.setSourceEntity(160U);
    msg.setDestination(37029U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.39049772588125786;
    msg.lon = 0.10108058701796918;
    msg.depth = 216U;
    msg.speed = 0.7906509321010711;
    msg.psi = 0.11913674188383228;

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
    msg.setTimeStamp(0.6651088965746195);
    msg.setSource(55705U);
    msg.setSourceEntity(116U);
    msg.setDestination(60904U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.5265276420060945;
    msg.lon = 0.36945708402639765;
    msg.depth = 248U;
    msg.speed = 0.25194528961921125;
    msg.psi = 0.010179086854289698;

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
    msg.setTimeStamp(0.9021450738528045);
    msg.setSource(29207U);
    msg.setSourceEntity(206U);
    msg.setDestination(1329U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.7872760923070278;
    msg.lon = 0.4208588980401622;
    msg.depth = 22U;
    msg.speed = 0.9007510407927678;
    msg.psi = 0.40780647652741764;

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
    msg.setTimeStamp(0.15106077166188114);
    msg.setSource(22013U);
    msg.setSourceEntity(33U);
    msg.setDestination(47314U);
    msg.setDestinationEntity(103U);
    msg.label.assign("JJUNUFDXCMOIAHZUTHTQGCEWBKNOKVVZQWSOIWHQSBPIPTYCDZMBTGOG");
    msg.lat = 0.43009110554482344;
    msg.lon = 0.4395674156015461;
    msg.z = 0.45449203078337297;
    msg.z_units = 151U;
    msg.cog = 0.23336793048660942;
    msg.sog = 0.11437665740422132;

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
    msg.setTimeStamp(0.7288608027797826);
    msg.setSource(15311U);
    msg.setSourceEntity(101U);
    msg.setDestination(34538U);
    msg.setDestinationEntity(244U);
    msg.label.assign("TCIPYKMITNHGXHDJFZLMLUJZPLQNYEAUJZLAYXVS");
    msg.lat = 0.8801429384925424;
    msg.lon = 0.25240907189601847;
    msg.z = 0.6503444648013915;
    msg.z_units = 92U;
    msg.cog = 0.8962313400772897;
    msg.sog = 0.5071360026362092;

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
    msg.setTimeStamp(0.9235235841655065);
    msg.setSource(29984U);
    msg.setSourceEntity(45U);
    msg.setDestination(59967U);
    msg.setDestinationEntity(38U);
    msg.label.assign("DELIVZNWTWHKPNRJFAIWOHSGESYTYCOFVYFFUZTUEAXTDBLPOLXWNDKHNHZTQMQENDZFVWENQWSLITUWMGHPLVAKASVCGURR");
    msg.lat = 0.3826246021937568;
    msg.lon = 0.36442764948618056;
    msg.z = 0.5149624090072764;
    msg.z_units = 27U;
    msg.cog = 0.8593217474070893;
    msg.sog = 0.27610632521015754;

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
    msg.setTimeStamp(0.10477174686630908);
    msg.setSource(28653U);
    msg.setSourceEntity(95U);
    msg.setDestination(48343U);
    msg.setDestinationEntity(153U);
    msg.name.assign("TXMMSGRXROBIPCQEYFWWJIAQVKTMDADDKSPOOESDLBDPYXUWQXLWJACOULBZGOKBHLGBOPCZKVCZEERJCSUMNRFPSQHPEIGYLZUIPCNMXFAQWNQBENDVKGULQGHYKYJYXFXUZALMXCUZNGASAIREMMZKNTHHVWHNUSYHPUIYJBFKQDLCPJUJROHJVVLMPCZDINWVNFRWDHVGBRFTWBVRO");
    msg.value.assign("KGUKDEDBIVORVQSZWZYRSIVEATTDFBGXONHRSSHRBSAAWKTZLPTFYBAKPGXAUTOJIQGVPXAJGDWYMCRUMTUWOTEJEQZJXCDBNSXCXHMMILJICFDHKGQLQYPIZEWMXDBUCHNMYNEVNBSFWEKXGHVRCFMULXWKZRWPYQFMAACOJVIGDPNVNEJQQTKHRLJYRTDQHWANRBCFTJUSXVDSPZPLPMSFOOLLHJAQLFGFKBHOZIGBINYLUCMIVZZEONEYYK");

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
    msg.setTimeStamp(0.4940504148149507);
    msg.setSource(33781U);
    msg.setSourceEntity(32U);
    msg.setDestination(21992U);
    msg.setDestinationEntity(155U);
    msg.name.assign("KBOSBYUSMFU");
    msg.value.assign("MGEKCNXKTNOGPNTGPABRXLJUAPVNRARJJP");

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
    msg.setTimeStamp(0.33593833394512174);
    msg.setSource(12082U);
    msg.setSourceEntity(11U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(218U);
    msg.name.assign("NTAITQUDRYKJSYOZBKMDNIFCMQTIJPOVRPIGKEMTXNMANXRNLUUUSGYYYCSFTXPQFZMCYZLELOQQGUZRHRLIKCWZVENCLXWJHJOSPDVHEGNDHVBQHDRJEAFKZGREQPCGD");
    msg.value.assign("UJQMSQWKGCPTDQXFJCJPRGARQACLYPMGQOWVKHLWDJSINEZFHXZYN");

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
    msg.setTimeStamp(0.5079305935273295);
    msg.setSource(17591U);
    msg.setSourceEntity(191U);
    msg.setDestination(9861U);
    msg.setDestinationEntity(153U);
    msg.name.assign("HEADRNIUTBWXSJOGUPLBJCAFUNDHNTYSLOHWTEHOKJIXQBRCPJNMYMIRCETODZEKPQZZYLMCUTETA");

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
    msg.setTimeStamp(0.2236160440307483);
    msg.setSource(30266U);
    msg.setSourceEntity(89U);
    msg.setDestination(57802U);
    msg.setDestinationEntity(187U);
    msg.name.assign("NXTEQJYTPXCUKZKKOBUBEVRQDREMFSJXBLZONSNZUZAQWPWOTITLLTYZYVUYZDMOVWGFBERJPALBXOHMKIQYFEPSHIVZXFSFEANRUYMNQVZNVIRHDOLVUVGXHANLFHYTUTAHFEDGOHGWSJTEBICKXABCADIFKRWJQCMWALNVQGEDJOQUZXOSAWQMLWDVKCSR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PCRRDDQJRJLAXTEEWVYNAJPVHBDNFBHIAGLJGGMXVJKKUXEWHIXTDEDXUBTHLSSKKGMZUNNUBJCMSZAKPYWUDKQXQIKBXHJWVDGQUKLBQTVNYZXCSSQVGLILVTXJBGOSHOTPPWZMZIBBETFJZQCOLEWXMNVEEMTF");
    tmp_msg_0.value.assign("RMESYKNYITRPKHVWMVYCUGWVQLCGQJLXMUAYUFCOTLKJRMPOQLIGBPADEWDHPZUKXATFLHMDW");
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
    msg.setTimeStamp(0.887803217582373);
    msg.setSource(20914U);
    msg.setSourceEntity(206U);
    msg.setDestination(22256U);
    msg.setDestinationEntity(28U);
    msg.name.assign("TIUKBPMQIINFGHSOGKAEAXDFRQJQYLLTXPHBRDSOWLMYCHUNDSDMVVDEKEDULYUPLPNIMPDTRBIYJYJSNKUQKDACYSSOEQCLKJUCFXZGNHUMACJKYEJUWMGAAGVVPXVLXFMNWKEVQUZMIEWRWBWAIHZOJQZWLHBVSNTORCXZMBONHHCAEKATZJFF");

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
    msg.setTimeStamp(0.4903387671372127);
    msg.setSource(11010U);
    msg.setSourceEntity(92U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(52U);
    msg.name.assign("EXTLIFWAJKRKURUPIZLJLYIQCXWWMTNINZDAYGXNHEHPJMOKZXREPOTYTQIFYFAEDUSMGSZJSRAQBSATIRLVGPKRSRYEOVNEBFTXVQHLTDGXGUMQSUZEDLEVDYOKOSBHFJVGWASZWIYBJBUUCHAZYVQXDEGTNUWXCRGNOFGVKMKCVRKHKWIFEPPMT");
    msg.visibility.assign("NVLEWWVTDEBVQGPEDIYDXEQUIFTNHKCUGKSLDHWENWCJLXNKIVSUYFFLQISZGOGTSQXPQOVFBPIDERCWTXJGDJBLEROBANUFRGYTXBOWDLYWMWEPPRNYDURCTMYIWE");
    msg.scope.assign("SXGUODCPSKDISLTVOEZGQGYROLKZGANPOWBZWRUOYRTNNVHBAHCXKQQBJNMUEMBXFSSPRLRSKGKYSVZXBETWRHFZXHHQDZWQWHGNJUVUVNQIMUCCEKZBFJHOYFZVYMANJTJFPAILZGLIWYFUOEXPDVCDKXWGMPTJLAQJJRFPRFSKEDCWYASIINAUBJDBYKQFXAOFWVBINECLBPIVHLEXTADL");

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
    msg.setTimeStamp(0.6113555668457452);
    msg.setSource(3628U);
    msg.setSourceEntity(134U);
    msg.setDestination(8016U);
    msg.setDestinationEntity(168U);
    msg.name.assign("UNSBEZCZZBMDOBRTLEFZHDMHGCHRTEZKJWXJGEEQILEUWTZPQRDVGERPBFTAGVLIEKRNNOVLZQVVZKNZDYTXDGHCJIIDKFKXPIGEIQPQVOAWXIRNLGX");
    msg.visibility.assign("BLVYLFORRYHQKMWYONFEUUOVCBHRQVKMNRBPWNWGJWTQQOSWKUGZVVGNRVRASBTTFZEGJHIZDGBGNFDRCZSSFUCGXUBNTMEEYCIXIAJJPOHIT");
    msg.scope.assign("XOHGEXIOWPEPQTXJLXJJQSVAPVOFBHCILHRLFCKUYBTHSZRPVQADDDDWARXIHJGTSNUZDANANSROOXTYDCWUNRGFEOFEVASQYJNICZVICURFIXIZOSGVEMUVYWQMJLPYTKZAHAVYGBPSMFOMMLBRYANHTNQQDLNKPWLBRCZPMEYFHQZISKWHKQCVMJZU");

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
    msg.setTimeStamp(0.19713033702576865);
    msg.setSource(35464U);
    msg.setSourceEntity(200U);
    msg.setDestination(50104U);
    msg.setDestinationEntity(74U);
    msg.name.assign("VXKLYSTIWTIBVQSGVFPQLYHDIGLEYJYIFIDUKEEJAOZFNGDKRHOZBOFWKWCCJDUYRAQVVWOKFQLXGZRUNSUVRSPVWBOHKDQTBTHNEQLEOJLZTPQDPFVMKF");
    msg.visibility.assign("XQUVBAQJUTRJGMXFTZUPWUGWAAUGZZKHBSPZNCGQRVXRYIECSORNSROATHDBGJATLLWFPOTOGHFEYQZQISCOYITRBZOEVQTFCYDSCBGFDSMAJBHIPRMAJVOUCXVNKFRBCNQWDILBAKB");
    msg.scope.assign("GPYQLRLYIYZJPEXNNDZWPNYINAHNHPCTZVEFEFCWKVYWMJIHCRYAILGAVARGGKBTUWUKLMLAIOFLBSQROXLHGSETDKSZPDHFZNXAVFMBBMDAVIEJXTXLFXRRPHYQTBQJDCSPRZCXYIUYVKUQWFSIPZDSOCHSOKGXUODHKJGTUZZJGBHCTUVQMLAROAEDQPMJBRQOWMMDOVRJMVKJNQZSFKOLXNQWWWUSUGAMCBTBEIWEVUYD");

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
    msg.setTimeStamp(0.4949401346407645);
    msg.setSource(10099U);
    msg.setSourceEntity(209U);
    msg.setDestination(10986U);
    msg.setDestinationEntity(197U);
    msg.name.assign("HPGLTUJUCSMQTEGDZWSHYOCPQABWXEXZDDCCPKEHOUAOVCBMIPGZFIIVTIQNKLBWDUGKWVTXKGFLSTCVHDOVIATNDJWJFSFFPYXSQBGUZYCKGDHAYJXBOKNBMWNVRNEZM");

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
    msg.setTimeStamp(0.5484447788133653);
    msg.setSource(16619U);
    msg.setSourceEntity(155U);
    msg.setDestination(16337U);
    msg.setDestinationEntity(84U);
    msg.name.assign("JWEJERULVHYXUOJSKYIWVUBAHEIJMRCCGBARDEBHYWIPZAHDKIJYXUCUKRIFGNTFFBZYOMIMDSOXCZKQIZKOWLNFAOLXPQJRDCTRGSSJOPADCTPSRUNVTTDEPDIWWGALABXFJYNZGACLMHQBPSYNRKHENPCZLWMTEFGFYBGDLSVQIGBNQYXQAFRHKZXILEDDVLM");

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
    msg.setTimeStamp(0.9287396739876993);
    msg.setSource(37036U);
    msg.setSourceEntity(8U);
    msg.setDestination(53858U);
    msg.setDestinationEntity(33U);
    msg.name.assign("TAZNJTVKUHWVNOQURDABVDHARFFKZVBTHQTLREJXFCEYUPIRJYJKSADOHIIGKSCLOYDCNJTDCHFPVEOPBWEKXZDGBSPIKGQAJQOFGVMUTZBJXSHRJXMGYZCLSWXEOGMYGQVGFITNJC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BGTGZOQQHAMPQMRQLRTTNLTLYZEJBRQCDSGRAUCJCBPHNUSLIQQJOVYSGUWAPBPARKRNFXPMMWLFWVOOBEJBDFZQIWJRFZCISREVJOZUVWNFKMKSYWGLTMYEKXRIHHOEHCAEBIDNYTWWLCYYCEVLCABADKDXYXOOFIGMCES");
    tmp_msg_0.value.assign("MBUGTMJYLWNTVXYXIVRPJDICRFCSUUAGULTOGFTHEOPGKFOFKDOTFKEWATYRDRUPZBREQXXTHSDPAGMBSYHGIRBKBZQ");
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
    msg.setTimeStamp(0.30853819283367234);
    msg.setSource(39222U);
    msg.setSourceEntity(183U);
    msg.setDestination(25627U);
    msg.setDestinationEntity(139U);
    msg.name.assign("DDWVSJRIIKASVJZCSTEZDXQXSKVHCCHRMYTIAOYOYBKNEUGQGOCVZWPEVQCRNPTZ");

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
    msg.setTimeStamp(0.027402035047811246);
    msg.setSource(12857U);
    msg.setSourceEntity(106U);
    msg.setDestination(27867U);
    msg.setDestinationEntity(15U);
    msg.name.assign("JQEUXJKQMKJTTSEQVXDCPOTAYEFBXEUFJAYOPGLVILDNWYHKCASMUWNCFL");

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
    msg.setTimeStamp(0.1773422466428355);
    msg.setSource(64640U);
    msg.setSourceEntity(206U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(143U);
    msg.name.assign("TJXGEIXGSTCGYVRGQLJNXPAEXBHCFQNGLYBHYOYMBOGWJHAMTBWPRWRQIEAAZIAFJNMFPZKGKMKITBFTXCFVTHPUNSDRBHWOLEYZ");

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
    msg.setTimeStamp(0.5859988490880446);
    msg.setSource(19971U);
    msg.setSourceEntity(136U);
    msg.setDestination(8665U);
    msg.setDestinationEntity(8U);
    msg.timeout = 3031079425U;

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
    msg.setTimeStamp(0.964213991982454);
    msg.setSource(13333U);
    msg.setSourceEntity(81U);
    msg.setDestination(60573U);
    msg.setDestinationEntity(206U);
    msg.timeout = 4060500104U;

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
    msg.setTimeStamp(0.01869450629636682);
    msg.setSource(25809U);
    msg.setSourceEntity(29U);
    msg.setDestination(34577U);
    msg.setDestinationEntity(226U);
    msg.timeout = 2269174214U;

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
    msg.setTimeStamp(0.1994172726278256);
    msg.setSource(53245U);
    msg.setSourceEntity(251U);
    msg.setDestination(21490U);
    msg.setDestinationEntity(15U);
    msg.sessid = 3844008851U;

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
    msg.setTimeStamp(0.8923452416887769);
    msg.setSource(3149U);
    msg.setSourceEntity(91U);
    msg.setDestination(57485U);
    msg.setDestinationEntity(80U);
    msg.sessid = 2185975574U;

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
    msg.setTimeStamp(0.5579314984521182);
    msg.setSource(44259U);
    msg.setSourceEntity(242U);
    msg.setDestination(64714U);
    msg.setDestinationEntity(161U);
    msg.sessid = 2956464275U;

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
    msg.setTimeStamp(0.6154406023547289);
    msg.setSource(51960U);
    msg.setSourceEntity(236U);
    msg.setDestination(29849U);
    msg.setDestinationEntity(206U);
    msg.sessid = 3653531177U;
    msg.messages.assign("ZPEYVHLEDAEISIUBPIEHNASWJZZFLRTBMUDZQJWAKAYEXGATSNWNOCRWQBWRYSUDYIIDFPZGTSLVKDPCJHAWJTGNXRKOQFQHPIVRKMODMUNOVUXCHYTFOWRZYWSHJMTCKGFEIBGV");

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
    msg.setTimeStamp(0.7475689532434877);
    msg.setSource(46580U);
    msg.setSourceEntity(94U);
    msg.setDestination(16994U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3778884017U;
    msg.messages.assign("LGKQPNDYNZXXHCHROJQVXVODBCOUTICIIYZFWEDASVYIBQFSBHLOXZYJFZJLCKZIEQWFDWMAROJTNUYNKUTMXECYKLFIRPEFDZPWOUIMAYUAGTBVJRIBAMDMZNWZSSGTFQHAGJTPALSPPBZNUGBPUSEWJ");

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
    msg.setTimeStamp(0.1701925801567934);
    msg.setSource(25771U);
    msg.setSourceEntity(7U);
    msg.setDestination(61480U);
    msg.setDestinationEntity(243U);
    msg.sessid = 1736100791U;
    msg.messages.assign("RTAXRBPNMTWUURCJEYSGKXLFSBRMFTCDZ");

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
    msg.setTimeStamp(0.9013231899378595);
    msg.setSource(10240U);
    msg.setSourceEntity(182U);
    msg.setDestination(64710U);
    msg.setDestinationEntity(92U);
    msg.sessid = 3101276391U;

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
    msg.setTimeStamp(0.0054127204541507545);
    msg.setSource(3793U);
    msg.setSourceEntity(192U);
    msg.setDestination(377U);
    msg.setDestinationEntity(170U);
    msg.sessid = 2207654402U;

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
    msg.setTimeStamp(0.9401456087444187);
    msg.setSource(24301U);
    msg.setSourceEntity(251U);
    msg.setDestination(47650U);
    msg.setDestinationEntity(181U);
    msg.sessid = 1269155063U;

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
    msg.setTimeStamp(0.27712198161547474);
    msg.setSource(20949U);
    msg.setSourceEntity(232U);
    msg.setDestination(5348U);
    msg.setDestinationEntity(118U);
    msg.sessid = 2283385094U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.07215464045621278);
    msg.setSource(13347U);
    msg.setSourceEntity(245U);
    msg.setDestination(23304U);
    msg.setDestinationEntity(177U);
    msg.sessid = 2732899752U;
    msg.status = 37U;

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
    msg.setTimeStamp(0.028228424534523122);
    msg.setSource(22970U);
    msg.setSourceEntity(110U);
    msg.setDestination(14132U);
    msg.setDestinationEntity(142U);
    msg.sessid = 188135290U;
    msg.status = 252U;

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
    msg.setTimeStamp(0.7379339032053926);
    msg.setSource(59228U);
    msg.setSourceEntity(244U);
    msg.setDestination(21561U);
    msg.setDestinationEntity(44U);
    msg.name.assign("LNCSNBXDKRGLHAWZLVMWDGGMFKFR");

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
    msg.setTimeStamp(0.7032649237241424);
    msg.setSource(53126U);
    msg.setSourceEntity(34U);
    msg.setDestination(59063U);
    msg.setDestinationEntity(112U);
    msg.name.assign("RXWXOUIJLQDPYWOPBYJLLJKBCGYNXFIATISHZWYRRJQSNCFCDCFTNUHTFATGKVRNI");

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
    msg.setTimeStamp(0.6145020801610566);
    msg.setSource(32440U);
    msg.setSourceEntity(157U);
    msg.setDestination(55221U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AAQJBPRGQUQYGZYGHIJIVQPJWLCTUBALHSNTUJMWPZNRWHQLEATZXVDEGASFISJPVIJHAMSXUXOBPCXEECETMWMFV");

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
    msg.setTimeStamp(0.5000010868918249);
    msg.setSource(22113U);
    msg.setSourceEntity(251U);
    msg.setDestination(16991U);
    msg.setDestinationEntity(242U);
    msg.name.assign("ELATHCLSSUZTGRMDLVZUIZHDSWSEUPTYPKQJNIGCUOYKEFZUDHYIAMVWJDUQFFUJPCZDDVCKNXTYCNHLECKRGOBKVOGPLSRMXPMPVJNFFFFBELYIFOMTHRWHIOENBGGSXIRWOGXCRXQAXNZFXAAEDKBQTARCLNBCNVALPSYYZJHKOZBITZMGMMETMXEOJCDURHNBQSPQZBWHABXVORYMPVFTVJKUTQJBDKSGOXQLNWWQKWUALQJIW");

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
    msg.setTimeStamp(0.10855616962415293);
    msg.setSource(21594U);
    msg.setSourceEntity(189U);
    msg.setDestination(8886U);
    msg.setDestinationEntity(111U);
    msg.name.assign("GNYUNVYWXTLRIVPUGGARIQDLLHWTNDKHXFFNZALMADBXEHTFJLUQMYFQPCDYDMEVNMHBYLZPZK");

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
    msg.setTimeStamp(0.9738233095473511);
    msg.setSource(46536U);
    msg.setSourceEntity(1U);
    msg.setDestination(64311U);
    msg.setDestinationEntity(242U);
    msg.name.assign("KUIXOSIFVFYBDJYPXRXHAMVZCIGKJUP");

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
    msg.setTimeStamp(0.5317811587597875);
    msg.setSource(26307U);
    msg.setSourceEntity(182U);
    msg.setDestination(64367U);
    msg.setDestinationEntity(126U);
    msg.type = 126U;
    msg.error.assign("RJIMVZJENWUVZTYHEPHOJPNUSCILRGULWAUSQHOTEYWQPMYFFFKKRTJBESABXPHLZERFQSVNUJIPCDWKPVHYOBIMXBVRHZXZRPPZNUQSBHWILKMNAGXUZKBLXPNGYYTCALAAANFHOQCBAOVLVOFXKXJDCBZWNBLOXTSJKDQFQOGWRWMJKWLSMCHFERTNMIDOJAXIYQ");

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
    msg.setTimeStamp(0.3742152994446495);
    msg.setSource(1561U);
    msg.setSourceEntity(104U);
    msg.setDestination(39145U);
    msg.setDestinationEntity(141U);
    msg.type = 209U;
    msg.error.assign("TADVESCLRMRFZBFBTOVIIUJHAUCIMGOZYUBUOMGVYGZQYGLTYEYZKPAIJTOQNQHDFXKGOLNSDVHEPJRSNWYOOVMPJQKURKENWSZISLSSVLEGRBWTCSSCAWVJEIYUEDFWZVYCHAPACAXMOHBLZMACGPCUQBOIWHNCWXYNZEBPWTRVZCLFTBXKUJQJWJIFLBGYMKXQK");

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
    msg.setTimeStamp(0.8032945669002466);
    msg.setSource(57429U);
    msg.setSourceEntity(214U);
    msg.setDestination(43055U);
    msg.setDestinationEntity(86U);
    msg.type = 15U;
    msg.error.assign("SDZKFEWBSQACVQCBPVLZUORBDTXFFWUGTQRXNKFEGXJVIKRYDWTGXFVYDIPOTUMCBSVFIRVUMEAUMJKKNQDNPDPKMVWAAHKIERPWSL");

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
    msg.setTimeStamp(0.1833499885768045);
    msg.setSource(12894U);
    msg.setSourceEntity(142U);
    msg.setDestination(48875U);
    msg.setDestinationEntity(9U);
    msg.seq = 44958U;
    msg.sys_dst.assign("LCDCOYROUOMAGFJHNQQASHHPHSUKKXJGFFWPYHSAKHFBABZEHILNJEUGBBQMTCJEWALBZMMYYEFOQYQNLUJLHXSZTSMDWGFQXRTX");
    msg.flags = 24U;
    const char tmp_msg_0[] = {43, -110, 119, 86, -18, 17, 8, 61, -111, 94, -97, 5, -24, -6, 44, 24, 87, -47, -4, -21, 86, -57, 46, 39, -104, 65, -79, 23, -7, 32, -21, 45, -100, -58, -69, -6, -123, 98, 36, 62, -87, 102, -23, -121, -39, -55, 66, -49, -45, 1, 41, 95, -13, 48, 20, -113, 15, -53, 78, -18, 24, -101, -5, -22, 126, 78, -82, 108, 56, -58, 123, -121, 7, -103, -114, 49, 35, 95, 82, -122, 110, 75, 121, -32, -117, 117, -106, -35, -102, 20, 77, -11, 100, -18, 122, -107, 40, 123, -124, -42, 76, 58, -33, -41, 93, 119, 42, 32, 89, 116, -113, -45, -60, 11, 87, -66, -103, 95, 58, -66, -88, -126, 126, -22, 52, 70, 103, 111, -107, 31, -103, 116, 37, -55, 118, 78, 124, 95, 112, 121, -36, 90, -21, 15, -116, 59, 99, 105, 87, -6};
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
    msg.setTimeStamp(0.3494058295536744);
    msg.setSource(64693U);
    msg.setSourceEntity(149U);
    msg.setDestination(39226U);
    msg.setDestinationEntity(50U);
    msg.seq = 17718U;
    msg.sys_dst.assign("QOCNDTFDDGKFGIUWBLKPSEICBUSUKSQKFTWWYCOYLFOPAZCTWVBECFGEIUNZRBZOIDZTSEHJNINTYNPVFDHPIEVVAJNRVXPXAJGHJYUABMGXFGMEWQLZAYKFBJHNCTUXPDZZADIBLZBQKSNQRX");
    msg.flags = 0U;
    const char tmp_msg_0[] = {29, -39, -84, 73, 79, -114, 121, -47, 7, 2, 94, -32, 109, 19, 57, 114, -81, 66, 0, 20, 63, -128, 94, 15, 33, 63, 102, 32, -92, -77, 32, -94, -62, 82, -126, 56, -25, -27, -16, -65, -118, 63, -123, -127, -6, 114, 59, 31, -15, 31, -2, -26, 2, 105, 102, -99, -36, 95, -24, 94, 43, 0, 7, 21, 59, 56, -3, -102, -69, 124, 119, -99, -54, -62, -92, 80, 97, 94, 4, 120, 79, -49, -71, -14, 99, -17, 92, -42, 104, 65, -101, -51, -97, 63, -85, 122, 86, 73, 43, 108, -27, -102, 115, -80, 51, -18, -109, 44, 119, 6, 78, 19, 100, 43, 114, -105, -5, 68, -41, 61, 113, -81, 79, -23, 91, -95, 32, -93, -21, 73, 40, -116, -64, -62, -114, 30, 40, 19, -66, -86, 6, -72, -53, 72, -66, -28, 21, -38, -111, -3, -17, -65, -6, 23, 79, -113, 116, -87, 25, 62, -123, -127, -3, 123, -112, 30, 109, -23, -19, -26, 119, 87, -50, 106, -57, 31, 40, -81, 75, 95, 89, 86, -76, 82, -126, 55, 72, 105, -22};
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
    msg.setTimeStamp(0.7315457886763389);
    msg.setSource(25705U);
    msg.setSourceEntity(171U);
    msg.setDestination(45902U);
    msg.setDestinationEntity(206U);
    msg.seq = 37416U;
    msg.sys_dst.assign("KFUPUDPZDIQHVCXWAKLXHQYBPFGUNUYTOEYYDORGKSJPUUEDOVDHDMKSZCBWSDFXLCBGLENOLGRQIAOVSAVZCBSMFQRCQWXRMCQMGFJGJXCRXIPQFJWUYPFQICBESOETSEZEBLTABNSWVNNDHGOUHJRFOH");
    msg.flags = 107U;
    const char tmp_msg_0[] = {-112, -84, 40, 116, -54, -95, -42, 93, -81, 21, -56, -100, -20, 109, 67, 69, 98, 94, 52, -57, 41, 116, -44, 38, -79, -71, 42, -107, 124, -83, -7, -65, 44, -75, -118, -42, -53, 21, -105, -3, 0, 124, 109, 108, -30, 12, -91, -116, -80, -71, -78, 68, -83, 82, -61, 115, 108, 43};
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
    msg.setTimeStamp(0.9805788957089664);
    msg.setSource(11021U);
    msg.setSourceEntity(97U);
    msg.setDestination(37196U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("DEBNBBGQDBJHSBMUKIIPUOPFWSWAZCAIVCYMLDQKPMKNHRXNHSOXRWBZNPESQDKJUPKSUTUDVVUFGGPFZJOASPDTRGGBFHYYAXLWEAHOLROUYXGIH");
    msg.sys_dst.assign("ZRZKXCXWBIIWRPQQZUVLXSRHTMOKSDABNVFWCZUNJGUPJZMEQFDVVZFJYGG");
    msg.flags = 179U;
    const char tmp_msg_0[] = {-18, 25, 125, 105, 38, 25, 16, 31, -58, 8, 83, -93, 114, 0, -114, -122, 33, 57, -116, -75, -74, 104, 24, 75, -100, 109, -118, 19, -98, -120, -2, -93, 45, -38, 60, 47, -16, 55, -83, 107, -62, -60, -107, 6, 49, 73, -101, 66, -96, -121, -105, -94, 124, 25, 90, -35, 63, -64, 74, 88, -118, -123, -76, 80, -113, 113, -50, -126, -125, 41, 97, 93, -41, 20, -67, 124, -77, 8, -87, -46, 117, -29, -73, 18, 25, -5, 70, -100, -101, -26, -73, 84, -97, -119, -44, -37, -51, -11, 54, -108, 46, 116, -78, 85, -64, -10, 57, 37, 70, -77, 98, 3, 76, 56, -44, -97, -5, -40, 35, 18, 21, -122, -24, -113, -8, -26, -21, 67, 120, -111, 74, -76, -21, 108, 96, 113, -111, -21, 21, 107, 78, 110, -62, -57, 10, -8, -46, 24, 39, -110, -19, 106, 115, -111, -83, -16, 106, 113, -105, -17, 92, 89, 32, 83, -105, -123, -48, 58, -69, -92, -2, -105, -93, 15, 31, 65, 0, 111, 2, -3, -67, 33, 36, -6, -121, 100, 126, -121, -116, -62, -27, -76, 112, 10, 106, 93, 70, 124, 47, -15, 79, 98, 56, 93, 33, -16, -100, 111, -25, 50, -100, 71, 119, -43, 42};
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
    msg.setTimeStamp(0.6696957508780399);
    msg.setSource(16933U);
    msg.setSourceEntity(247U);
    msg.setDestination(52602U);
    msg.setDestinationEntity(181U);
    msg.sys_src.assign("ROHUBOBFICMCDTYPOGAUF");
    msg.sys_dst.assign("GWWBHPXYNRAWURXBKNVOKHFWFOZQHQGJRMJTDAHPJAKJFJOSSVPODLMUFZZAWDNYCBBJADAENPEXRILKNOOZVEEYPQKFGUXFIKCSYPECCUWSRQHVIQYTAMFBLUBHUMZUKDUTGXETHGBLRGZNXHORLOPCNXMSJLIWNTFASIVYTWVXL");
    msg.flags = 50U;
    const char tmp_msg_0[] = {82, -57, -73, -49, -127, -43, -45, -79, -41, -30, 65, 90, 62, -123, -18, -16, -65, 48, 111, -122, -82, 39, 14, 23, 102, -118, 76, 27, -93, 14, 96, -127, 91, 37, 101, 124, -17, -27, -126, -84, -3, -89, -60, 6, 23};
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
    msg.setTimeStamp(0.9573352644033492);
    msg.setSource(15548U);
    msg.setSourceEntity(124U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("HVULOWUEPQZMSCGQYQCRVINFKTVOTXLAAJESAECXJYTSHEANBZOMOSGDOSMGTJTWIXUZWXRGTSYCXEYUAOHZORMYYINMSGMDALQWMFCKZLNFTHHTPIYLPKQLWBBOKIEABDVFYRCPZLLJJVSHAJQOJWYYXPVXHDFLFRMGBMBIEUKBFQPTRKNDHKEZCABINUHKDAQPNRVHCQIGUDZSJIOBKXUBWVKPWZFDSIURDJCVEMFDENNGCVLGRQWJNZRUW");
    msg.sys_dst.assign("HIIVCDZBAGHDFZDWUDMKUQGWBVIRSJCZJIXTSXPEMBYBWRPFGZTXQYMNVWQVKRUJYRCNRMIFKWVJUFENMYINEQMNVNOMWHFXKUCZKXFZUHPOGQLPRJTQOBHOBLXRCRALALMZPDIFDDJORCVGSCDZJMLOWPISWSCXJYAJNTOEHBLSOHLDMSKEKPLBEWWAJYFUGTUAYGLGTGPUHNKXBGNQ");
    msg.flags = 229U;
    const char tmp_msg_0[] = {-70, -6, -75, 33, 44, -77, -58, 7, -101, -114, 10, 83, 119, -6, 96, -89, -51, 125, -49, -55, -104, 110, -27, -34, 16, -27, 1, 41, -86, -16, 96, -127, 116, -103, 98, -45, -109, 118, 48, -123, 3, -60, 24, 50, 10, 96, 48, -78, 109, 114, 35, -41, 98, 111, -57, 76, -111, 30, -118, -107, -84, 67, -40, 96, 19, -90, -111, -93, -61, 35, 58, -114, 94, -48, 6, 30, -1, 67, -4, 72, 57, -79, 102, 96, 59, 26, -112, 80, 25, -52, 26, -48, 99, 10, -14, 111, 34, -65, 86, 28, -19, -116, -70, -84, 28, 45, 28, -41, 60, 116, 103, -31, -44, 87, -103, -119, -3, -127, -80, -76, -72, -32, -49, -108, -86, 75, -46, 104, -119, 103};
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
    msg.setTimeStamp(0.8039101243282495);
    msg.setSource(25931U);
    msg.setSourceEntity(252U);
    msg.setDestination(38719U);
    msg.setDestinationEntity(221U);
    msg.seq = 53806U;
    msg.value = 58U;
    msg.error.assign("KTMVHAJWRNNOZPCGAQHYSTDDFKRYJIJWBIAUXBRKVNLUDNIPVOBRYTGKUZYWSFYWZIPUJQILAEFXGWXCERMNSHMMQHOZARGHULATEKGDNOWMNOGBDDBBPQFXRECWIH");

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
    msg.setTimeStamp(0.027295497010573433);
    msg.setSource(43292U);
    msg.setSourceEntity(121U);
    msg.setDestination(49350U);
    msg.setDestinationEntity(185U);
    msg.seq = 36918U;
    msg.value = 151U;
    msg.error.assign("DPJCBKDVBSRHPWKMQGWDEYEGKLYLDIVMCTSNNMARWHEBEWARQNFZFMUFGAZXCMTOEHIUEOMZPGLXZOTTAJKIXDZUQXCBTBLFLPVHWAJYTGQLYSIXJAWTMQNMJWENHUJRPNFGVCRHPZINWSOXCKOVADYFCRQBKQUILDDXHAVPJGHTKWHCGFSOAVOUPKGZFNYPXQLUOQNZJPRBRFZWJVRIYQFUDYZJKERVSBCIYAEDLHNTKBTSIMI");

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
    msg.setTimeStamp(0.5052941857731252);
    msg.setSource(59485U);
    msg.setSourceEntity(228U);
    msg.setDestination(19846U);
    msg.setDestinationEntity(84U);
    msg.seq = 47878U;
    msg.value = 234U;
    msg.error.assign("JYAZXEXXDKYJSRRVFZZXUHQOYCFPHWMMQJQPNYGBSVOILHFGMTIMLGBEPODVOJBUDMLRNNI");

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
    msg.setTimeStamp(0.6621211574273392);
    msg.setSource(31019U);
    msg.setSourceEntity(174U);
    msg.setDestination(7862U);
    msg.setDestinationEntity(189U);
    msg.seq = 20025U;
    msg.sys.assign("YCUSBOJVBNDEXCWPLYTJY");
    msg.value = 0.5316919492238505;

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
    msg.setTimeStamp(0.9018686732245937);
    msg.setSource(30U);
    msg.setSourceEntity(217U);
    msg.setDestination(6985U);
    msg.setDestinationEntity(186U);
    msg.seq = 53019U;
    msg.sys.assign("PKDFPSRCOJWLZFLNWGLRKKTPEDFDIBTJGNDEOHODXHIQYINNTNEMEBMVQZJPCJZQLYVITKZXLBAVIGRGGPFWPBPHAQYYITBPKZHJ");
    msg.value = 0.2167704320598941;

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
    msg.setTimeStamp(0.748981375080169);
    msg.setSource(36501U);
    msg.setSourceEntity(59U);
    msg.setDestination(60138U);
    msg.setDestinationEntity(124U);
    msg.seq = 22221U;
    msg.sys.assign("PTTCIPCGYUEFMQHAFZKDQIRYKZBKXJAEQHJMSABDDIFPHILXIFBVLXKIOROZVQAPSJYTJNNUEKVYYTPYTOVZZNTMUIWILVNGCLRUQOGLPAAUAJOMCFMZQRYXGETGBORDQEBBTQDSEJKZHMBHBKUJNMOHQUHLHNNXXWNFCSWYRRUJAKLLNDNPGTSXJCTAPRZ");
    msg.value = 0.03964282076614456;

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
    msg.setTimeStamp(0.10422570142952814);
    msg.setSource(63332U);
    msg.setSourceEntity(126U);
    msg.setDestination(39671U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.943496364897955);
    msg.setSource(17958U);
    msg.setSourceEntity(12U);
    msg.setDestination(4233U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.7162339281759608);
    msg.setSource(28374U);
    msg.setSourceEntity(229U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.5329420297471673);
    msg.setSource(16290U);
    msg.setSourceEntity(33U);
    msg.setDestination(10529U);
    msg.setDestinationEntity(72U);
    msg.action = 209U;
    msg.longain = 923022647U;
    msg.latgain = 2751129253U;
    msg.bondthick = 1382248124U;
    msg.leadgain = 2401324577U;
    msg.deconflgain = 3945778683U;

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
    msg.setTimeStamp(0.6150244609489005);
    msg.setSource(16583U);
    msg.setSourceEntity(101U);
    msg.setDestination(46354U);
    msg.setDestinationEntity(62U);
    msg.action = 212U;
    msg.longain = 2749908521U;
    msg.latgain = 3674170250U;
    msg.bondthick = 3904885831U;
    msg.leadgain = 1373265278U;
    msg.deconflgain = 3190073395U;

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
    msg.setTimeStamp(0.9130089883479647);
    msg.setSource(21351U);
    msg.setSourceEntity(29U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(176U);
    msg.action = 231U;
    msg.longain = 3044503070U;
    msg.latgain = 340920824U;
    msg.bondthick = 3346811093U;
    msg.leadgain = 3299768293U;
    msg.deconflgain = 134676790U;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.15912390393161802);
    msg.setSource(10363U);
    msg.setSourceEntity(138U);
    msg.setDestination(18141U);
    msg.setDestinationEntity(159U);
    msg.uid = 3U;
    msg.frag_number = 171U;
    msg.num_frags = 230U;
    const char tmp_msg_0[] = {49, 104, 12, -10, -104, 118, -29, 53, 30, -54, 91, -13, 43, -86, -7, -89, 75, 118, -26, -48, -64, -95, 104, -35, 121, -12, 52, -74, -113, -38, -81, -73, -65, -24, -11, -70, 110, -105, -90, 18, 121, -103, 16, 50, -21, -35, 73, 58, -42, -28, -38, 35, -104, 24, 80, -116, -17, 62, -107, -1, -11, -3, -30, -77, -78, 79, -117, -69, 116, -90, -90, 126, -73, 69, -40, -99, -79, -67, -17, 59, 90, -53, 11, 117, -100, 37, 17, -109, 53, 8, -9, -43, 23, -86, -97, -124, -66, 20, 111, -102, -111, 22, -2, 54, -82, -40, -74, 5, -91, 40, -80, 76, -56, -101, -25, -52, -50, 30, 54, 13, -31, -73, 120, -88, -97, -1, 65, -125, -49, -2, -116, -124, -17, -65, 42, 107, 125, -97, -53, 75, -75, -89, -11, -53, 90, 57, -48, -7, -1, -72, 65, 4, 70, 88, 80, 119, -53, 125, -113, 52, -84, -16, -52, -34, -15, -40, 49, 41, -10, 7, -73, 18, -64, 124, 124, 55, 114, -39, 1, 52, 123, -106, 98, 48, 65, 102, 19, -100, 98};
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
    msg.setTimeStamp(0.2715690883180343);
    msg.setSource(25404U);
    msg.setSourceEntity(95U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(167U);
    msg.uid = 94U;
    msg.frag_number = 250U;
    msg.num_frags = 218U;
    const char tmp_msg_0[] = {-28, 57, -103, 74, -6, 22, -93, -9, 91, -17, -25, -13, 0, 55, 40, -22, -75, -99, 60, -109, -118, 124, -122, -21, -33, -12, -51, -97, -93, -54, 98, -101, 26, 90, 97, 11, 22, -38, 123, -35, 74, 5, 111, 15, -29, 109, 37, 37, -67, 115, -18, 117, 80, -101, -128, -76, -127, -62, -54, -77, -93, 71, -106, 33, 64, 14, -21, 57, 36, 94, -63, -63, 87, -83, -123, -95, 79, 52, -65, -79, -20, 28, -24, 119, 64, -89, 106, -109, -97, 93, -55, -96, 103, 0, -64, -59, -48, 97, -60, 19, 61, 48, -34, 23, 33, 106, 36, -38, -68, -51, -17, -97, 59, 61, 55, 5, 88, 103, -97, -117, 74, -64, 78, 123, -38, -112, -25, -1, 59, 14, 89, 83, 54, -6, 107, -9, -113, 74, 87, 124, 58, -35, 12, 84, -55, -54, -7, -7, -65, 82, -123, 56, -120, 62, -80, 21, -18, -126, -120, -40, -106, 99, -51, -13, 45, -53, 84, 47, -38, -85, -87, -107, -83, -33, -117, -12, -69, 50, 60, -106, -19, -95, -11, -55, 83, -65, -40, 72, 118, 34, 90, -85, 19, -120, -54, -29, -13, -54, 4, -13, 78, 111, 71, 17, 74, -50, 57, -19, 50, 121, -37, 108, -53, -13, -116, 49, -22, -118, 108, -76, 47, 66, 119, 84, -44, 68};
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
    msg.setTimeStamp(0.9771661790772488);
    msg.setSource(28108U);
    msg.setSourceEntity(203U);
    msg.setDestination(31458U);
    msg.setDestinationEntity(71U);
    msg.uid = 24U;
    msg.frag_number = 86U;
    msg.num_frags = 233U;
    const char tmp_msg_0[] = {1, 110, -63, -63, 122, 84, -91, 61, 3, -26, -12, 96, 17, -49, -96, 104, -103, 12, 15, -112, 110, -45, 52, 107, -94, 62, 49, 107, 58, 99, 31, 112, -68, 29, -127, -111, -76, -81, 69, -64, 52, -14};
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
    msg.setTimeStamp(0.7255411374451);
    msg.setSource(52975U);
    msg.setSourceEntity(232U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(247U);
    msg.content_type.assign("SOBQCVFMZRNSMKVCYUQXFVSWQBICDRWGDTKLXMTCSBQCZEYURMCGXROVEWUNCBVJIZZIH");
    const char tmp_msg_0[] = {-2, 53, -104, -84, -36, 49, -106, -100, 24, -119, 102, 19, 80, -31, 24, -14, -49, 125, -49, 122, 111, -42, 52, 35, 64, 33, -1, 115, 70, 97, -21, -64, 37, -45, 43, -93, 86, -87};
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
    msg.setTimeStamp(0.0028469551477930954);
    msg.setSource(9490U);
    msg.setSourceEntity(7U);
    msg.setDestination(9989U);
    msg.setDestinationEntity(18U);
    msg.content_type.assign("SKDMVZTPZAWAREGFYRMEZNTUQEKXTXLTUJPGGGXUCPEKQVDYULBUCNQCSZVZHMUCKLEWTFDHSJTPFOLKNRAVDNNSOFZSYNPGJEEPXBWNJJNYYVBXSIDSAPKLCHXCSWXQJYGDFCORUOGIAEUKMRFRMZWLAWZBJIRXVBEMWHPDQVQHYALBUIJRBLTXEHLHFVMSBOMDUJWHYCFBAFWIIIRCDTKKNKOHGDXWIOQVOTQFYTALIZBMPNHCYZGVQGSJOP");
    const char tmp_msg_0[] = {48, -118, 83, -64, -113, 47, -123, -96, 47, 85, 51, -113, -84, 81, 109, -120, 95, -109, 73, 10, 8, -82, -35, -32, 108, -46, -109, 13, 79, 30, 19, -90, 12, 101, -38, 3, 75, -82, -33, -63, -48, 95, 104, -113, -70, -10, -17, 25, 55, -31, 114, 99, 32, -99, -92, -24, 65, 30, -42, 62, 126, 93, 117, 26, -50, 99, 21, -6, -57, 64, 35, -115, -100, 65, -119, -41, 122, 69, -74, 99, 102, 57, 80, -116, -109, -93, -126, 97, 28, 45, 119, -71, 27, -6, -99, 116, -8, -127, 24, 109, -101, 105, 64, 62, 95, 54, -13, 76, 73, -82, 85, 45, -31, 90, -16, 83, -115, -13, 19, 77, 49, -55, 75, -87};
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
    msg.setTimeStamp(0.0716766124733782);
    msg.setSource(41080U);
    msg.setSourceEntity(45U);
    msg.setDestination(57835U);
    msg.setDestinationEntity(153U);
    msg.content_type.assign("ZBHVDIRZOHIGEXBLTABMXUYLHJLIXMKYFESNWJOAGJCDYQLXPHXBZAKDWFJWPSFSV");
    const char tmp_msg_0[] = {-60, 71, -19, 124, -73, -32, 123, 121, 111, 50, 24, 20, -91, -50, 75, -57, -110, -8, 38, 125, -31, 2, 48, -54, 5, 124, -69, -79, -33, 41, -122, 8, -120, 13, -85, -65, 44, 110, -36, -106, -120, -62, -34, 113, -60, -108, -45, -45, -20, 104, -120, -30, 28, -29, -79, 123, 8, -17, -107, -70, -49, 119, -4, -52, -68, 110, 23, -72, -92, 34, -93, 17, -52, -10, -59, -44, -47, -33, 38, 126, -90};
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

  return test.getReturnValue();
}
