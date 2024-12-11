//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 3c15430a350255d75629fe352bdc3ac7                            *
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
    msg.setTimeStamp(0.10252158178670534);
    msg.setSource(29391U);
    msg.setSourceEntity(229U);
    msg.setDestination(39755U);
    msg.setDestinationEntity(8U);
    msg.state = 198U;
    msg.flags = 60U;
    msg.description.assign("OIBJDFVICM");

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
    msg.setTimeStamp(0.8505635218146868);
    msg.setSource(50826U);
    msg.setSourceEntity(226U);
    msg.setDestination(25069U);
    msg.setDestinationEntity(243U);
    msg.state = 23U;
    msg.flags = 45U;
    msg.description.assign("JYCGZAEUFJCAOLYCPSBECWCKJBPAICTGFRAZPFQMNGRYCZQEKCQDRHELZRBPITVSIGREIMUKEMWDTDDOQEQLTMKOCMMVXUMAOXVUYFVKPPKYDBYUZYEHBNMZQHODWSYORINXKRSFWNNZOLJNCHTJVNVSDGLIBATL");

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
    msg.setTimeStamp(0.6815797511642048);
    msg.setSource(61634U);
    msg.setSourceEntity(175U);
    msg.setDestination(13211U);
    msg.setDestinationEntity(13U);
    msg.state = 26U;
    msg.flags = 204U;
    msg.description.assign("HQIOACYJJZHVGDVTHPWSDAFKLYRZBFIAYIOTVCWVTXHKHDGOLMYMPKJKUNXIYHRMEXOFBWMAZFQDANTZDORSLBBPURFZUEVLCEYEOPLKWFDCTGKSXYJDSNGYAVPENEZZJXUXJISXLMFCBORPLNHKDHLNKURQCPWGVUFKABIOTGNXICMRUGQZCQPWBAZTSBEMMFQZVSNEQGLCNTRXSTJEIUWFGBNO");

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
    msg.setTimeStamp(0.814491495061197);
    msg.setSource(12343U);
    msg.setSourceEntity(1U);
    msg.setDestination(4597U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.9753126759635804);
    msg.setSource(3796U);
    msg.setSourceEntity(246U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.4871578492927445);
    msg.setSource(35438U);
    msg.setSourceEntity(190U);
    msg.setDestination(38683U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.1809057188960681);
    msg.setSource(25340U);
    msg.setSourceEntity(159U);
    msg.setDestination(3515U);
    msg.setDestinationEntity(96U);
    msg.id = 162U;
    msg.label.assign("MBRSRNYIJUYEGHOSYHSTFUHUFPNBTEKVIKPABVMPZM");
    msg.component.assign("TFGGPGHSOEXCHZQJIEDGTECREXSIAADBURKNFZSMIXJLEEDFLFYGHMHPVJKQQWXNHGIVBRSFYDFTMAZAWMJXMZLUZOOQEEFYUKTJSFKQNCLUQLTBKAFPWGQPUVIAICZIYLSICLBSZWOYCJVVHNMPRRYXJAUPYONKTREODGCVMSWBDQNKANXJRAHBHWNMUHEGVNUBYHP");
    msg.act_time = 40267U;
    msg.deact_time = 45048U;

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
    msg.setTimeStamp(0.3714337690956243);
    msg.setSource(29101U);
    msg.setSourceEntity(146U);
    msg.setDestination(2380U);
    msg.setDestinationEntity(164U);
    msg.id = 127U;
    msg.label.assign("VUSHLQHUYNOXZNLIIWRJFZAXEULKNDCVXEOJJRTDHRDBIOANJCKPFXKTUSISPPHNWABLDLSCVELRWXFDHKZAYBIUDSTOWZJBGRKZLTSZOPAHMYUWEXEGJJCGJ");
    msg.component.assign("SHEOKUSXPHKXRIXBOZEFDLXMCZE");
    msg.act_time = 32477U;
    msg.deact_time = 49709U;

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
    msg.setTimeStamp(0.7709176660946121);
    msg.setSource(29744U);
    msg.setSourceEntity(120U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(250U);
    msg.id = 139U;
    msg.label.assign("NOFJERLAAKPTDQVXVJDFRN");
    msg.component.assign("QJWCLNBZYGBXGVNAQZTPXFNBFLPWONKWTLGAWUMPLFRIERUMZVFWUKVSFBCNYXSIQKEJQZTKSZZXVXBRBENHTRECNIDWXPCHGFVYLNEAOMOOKKDYHIHQGTCAZGPCKDYDUYQVBUOAIQIZURFOJYOHKMHSDYVIPRJHXIADTEQAWTSF");
    msg.act_time = 12007U;
    msg.deact_time = 37971U;

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
    msg.setTimeStamp(0.08559750308575587);
    msg.setSource(19355U);
    msg.setSourceEntity(221U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(244U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.19815669337946518);
    msg.setSource(28230U);
    msg.setSourceEntity(132U);
    msg.setDestination(55148U);
    msg.setDestinationEntity(195U);
    msg.id = 52U;

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
    msg.setTimeStamp(0.5199371769780593);
    msg.setSource(3245U);
    msg.setSourceEntity(58U);
    msg.setDestination(39471U);
    msg.setDestinationEntity(157U);
    msg.id = 39U;

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
    msg.setTimeStamp(0.6967543777984121);
    msg.setSource(49835U);
    msg.setSourceEntity(70U);
    msg.setDestination(15825U);
    msg.setDestinationEntity(251U);
    msg.op = 49U;
    msg.list.assign("RGREXNGMYOXTFXKTSCZYOREFBOPSSWZXZFGQQTCJTAL");

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
    msg.setTimeStamp(0.9938692501267522);
    msg.setSource(20271U);
    msg.setSourceEntity(69U);
    msg.setDestination(62321U);
    msg.setDestinationEntity(179U);
    msg.op = 36U;
    msg.list.assign("KTMYIZIJOTSTKNMEOKFJGCSLLKNPIMPUTLCFHUAAUZGSCDOCUDVXEEYMSNBLWQIKQHTZALSRSQXUJHTYLDHGXCFYAZOSNERBWJY");

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
    msg.setTimeStamp(0.7711221751534418);
    msg.setSource(5452U);
    msg.setSourceEntity(202U);
    msg.setDestination(52679U);
    msg.setDestinationEntity(105U);
    msg.op = 178U;
    msg.list.assign("ZAVVDWIOTRATQEFZVLVPCLGNUCYKNYGHBHJAQLAASTNSJTROTDCGPRYEJKODQKBWMXGWUYLVNWLVFVMRFQBEKZCOIFYASA");

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
    msg.setTimeStamp(0.5316184056407017);
    msg.setSource(25740U);
    msg.setSourceEntity(128U);
    msg.setDestination(65366U);
    msg.setDestinationEntity(114U);
    msg.value = 250U;

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
    msg.setTimeStamp(0.4383582017244635);
    msg.setSource(49951U);
    msg.setSourceEntity(185U);
    msg.setDestination(65143U);
    msg.setDestinationEntity(97U);
    msg.value = 183U;

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
    msg.setTimeStamp(0.0015695556219655904);
    msg.setSource(58702U);
    msg.setSourceEntity(63U);
    msg.setDestination(31556U);
    msg.setDestinationEntity(115U);
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
    msg.setTimeStamp(0.4148037739074928);
    msg.setSource(45771U);
    msg.setSourceEntity(41U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(8U);
    msg.consumer.assign("RFFMVRMNIUNYFEKQAOATUVJBWOZFTLXEZGCQGXMDHSODQEYJUCQGJICKPHJGEJIBCURXOHSDLZDRUXXNLYBEQQKBKFSKCIPYZDTSKGYTMQYMWEXLIXVC");
    msg.message_id = 39121U;

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
    msg.setTimeStamp(0.5820620411704436);
    msg.setSource(59935U);
    msg.setSourceEntity(244U);
    msg.setDestination(35026U);
    msg.setDestinationEntity(166U);
    msg.consumer.assign("NIPQLEZEZHZBMFADPGMEIQEZDKWQZAOLNIVSRNXETJWBHNBYFHOHHCJMMAMVDGRPTKLCUHTZRPBIWOUVYAORODKZDXQOLUWXRKYCNQDJOTIWTBMRYBAGVKEDSZNXKGNHVIIJHVJWQRLKPUSKRMAFQWSDCTIUJNYYMBAFVIYLXWPVCJICFGLDSFNGKZWRYXZQSXSGLCURSBHYJSWTPFKEHOTTVGEALQTPBXX");
    msg.message_id = 40143U;

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
    msg.setTimeStamp(0.42349592588970564);
    msg.setSource(32362U);
    msg.setSourceEntity(116U);
    msg.setDestination(27574U);
    msg.setDestinationEntity(227U);
    msg.consumer.assign("IYYNEERZHBOCWURERZDDDACQTRTASCWJPMFXGMGSJU");
    msg.message_id = 31817U;

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
    msg.setTimeStamp(0.16445487896973432);
    msg.setSource(9997U);
    msg.setSourceEntity(42U);
    msg.setDestination(32144U);
    msg.setDestinationEntity(253U);
    msg.type = 149U;

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
    msg.setTimeStamp(0.21894590732483665);
    msg.setSource(5748U);
    msg.setSourceEntity(178U);
    msg.setDestination(38656U);
    msg.setDestinationEntity(251U);
    msg.type = 124U;

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
    msg.setTimeStamp(0.35342606464083026);
    msg.setSource(26553U);
    msg.setSourceEntity(238U);
    msg.setDestination(24342U);
    msg.setDestinationEntity(214U);
    msg.type = 19U;

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
    msg.setTimeStamp(0.2925768886569161);
    msg.setSource(16U);
    msg.setSourceEntity(21U);
    msg.setDestination(47021U);
    msg.setDestinationEntity(231U);
    msg.op = 211U;

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
    msg.setTimeStamp(0.02443835658524718);
    msg.setSource(64789U);
    msg.setSourceEntity(89U);
    msg.setDestination(37442U);
    msg.setDestinationEntity(115U);
    msg.op = 67U;

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
    msg.setTimeStamp(0.1421819226430613);
    msg.setSource(832U);
    msg.setSourceEntity(229U);
    msg.setDestination(50165U);
    msg.setDestinationEntity(212U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.45799955609381804);
    msg.setSource(12852U);
    msg.setSourceEntity(42U);
    msg.setDestination(10974U);
    msg.setDestinationEntity(103U);
    msg.total_steps = 250U;
    msg.step_number = 177U;
    msg.step.assign("XOPZCUFOMPTKMCBSEKNQSYSFXQMNVVCUAAUBLNVUSGAGVWDNUYOKKIQPADREMXFWUQVIYDGGHLSWMBJNRZCRXTKJZIMULUZLKFPOFCZMDDLBNYMFNXGZSDWFCNELMGVLSAJXPAGMYWBTATOXDHLBPNYJYVEPFOWCQXPUWERGATDNZXKHELFVIHYKHIAHQRJTLJJQQOYRTHWREUPWBDGKZIFIOJQQPRH");
    msg.flags = 114U;

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
    msg.setTimeStamp(0.5968808526397453);
    msg.setSource(7849U);
    msg.setSourceEntity(227U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(138U);
    msg.total_steps = 173U;
    msg.step_number = 93U;
    msg.step.assign("MKLFHPJHSIWNXWXHCPAOLZUZNZYOSVZBIVIOOXQHIGHCMWAHJRQFSPKFXXQWBJTCEOXVLZTLGUAJDMULGBKAWIRBDCECSSMZHQKLIJIZVLGLYBSCSYJVUMHJDMAXCTQTNEXEWZVKWBPDGQNWKOPBNRVIKTYDFMATL");
    msg.flags = 216U;

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
    msg.setTimeStamp(0.0027699429335946713);
    msg.setSource(48667U);
    msg.setSourceEntity(208U);
    msg.setDestination(25916U);
    msg.setDestinationEntity(98U);
    msg.total_steps = 192U;
    msg.step_number = 206U;
    msg.step.assign("XCKCLMVFSESWNBMPYPKBHPCSVJPJKITFKDAHGKHS");
    msg.flags = 80U;

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
    msg.setTimeStamp(0.4206570795604391);
    msg.setSource(21639U);
    msg.setSourceEntity(191U);
    msg.setDestination(28885U);
    msg.setDestinationEntity(237U);
    msg.state = 19U;
    msg.error.assign("TRKVQTLSNIKWYAMSOPXKERYBRVWOULMLHODHXKATQUUXJULMVNFDEER");

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
    msg.setTimeStamp(0.5023177513716299);
    msg.setSource(54995U);
    msg.setSourceEntity(241U);
    msg.setDestination(47146U);
    msg.setDestinationEntity(157U);
    msg.state = 105U;
    msg.error.assign("ZZNNTFAQYZTFQALCMDATHVPATGSJPNZYVDELHSZXWOGKRDFPLOUURNMV");

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
    msg.setTimeStamp(0.5243142181756516);
    msg.setSource(19523U);
    msg.setSourceEntity(236U);
    msg.setDestination(7765U);
    msg.setDestinationEntity(8U);
    msg.state = 57U;
    msg.error.assign("VGQWLXKZTHWSCUHRRCCPWYEGXUCKOROHZRVDSUBDIAZCLXMQQLBGSFKBOHKOYTXDWQYRTBEQVAFBLRENFEHYKKJAVJAXVSLYMGPMRZHPUMECWNWTBNPFDXMSKJMPAVPTNXHQG");

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
    msg.setTimeStamp(0.12331470020518054);
    msg.setSource(8170U);
    msg.setSourceEntity(62U);
    msg.setDestination(62556U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.27994544431068513);
    msg.setSource(57431U);
    msg.setSourceEntity(197U);
    msg.setDestination(54261U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.2103964569579011);
    msg.setSource(51260U);
    msg.setSourceEntity(74U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.4678585618473927);
    msg.setSource(51505U);
    msg.setSourceEntity(41U);
    msg.setDestination(59247U);
    msg.setDestinationEntity(111U);
    msg.op = 143U;
    msg.speed_min = 0.525308818881151;
    msg.speed_max = 0.23387080369494218;
    msg.long_accel = 0.7271681467667206;
    msg.alt_max_msl = 0.5200722589608715;
    msg.dive_fraction_max = 0.4244669872927527;
    msg.climb_fraction_max = 0.6866881600337149;
    msg.bank_max = 0.19005490371562872;
    msg.p_max = 0.7666893191687693;
    msg.pitch_min = 0.6712952030911856;
    msg.pitch_max = 0.04877939572027812;
    msg.q_max = 0.948521071977939;
    msg.g_min = 0.7353973037930949;
    msg.g_max = 0.09138628391106152;
    msg.g_lat_max = 0.6768503202855255;
    msg.rpm_min = 0.2018440501256905;
    msg.rpm_max = 0.7871916873140515;
    msg.rpm_rate_max = 0.906496256632911;

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
    msg.setTimeStamp(0.864125071547654);
    msg.setSource(41174U);
    msg.setSourceEntity(59U);
    msg.setDestination(28238U);
    msg.setDestinationEntity(189U);
    msg.op = 9U;
    msg.speed_min = 0.9164865365824353;
    msg.speed_max = 0.9435516321188937;
    msg.long_accel = 0.07754019441813154;
    msg.alt_max_msl = 0.8481510694339143;
    msg.dive_fraction_max = 0.7863671390612933;
    msg.climb_fraction_max = 0.8493466602589305;
    msg.bank_max = 0.07208930509585065;
    msg.p_max = 0.5455134417238625;
    msg.pitch_min = 0.8503757678087223;
    msg.pitch_max = 0.9647729202439544;
    msg.q_max = 0.5164890336726145;
    msg.g_min = 0.3520159947639514;
    msg.g_max = 0.7923247605127139;
    msg.g_lat_max = 0.46371841957573423;
    msg.rpm_min = 0.5612119384999322;
    msg.rpm_max = 0.9817037451535915;
    msg.rpm_rate_max = 0.11248126421141447;

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
    msg.setTimeStamp(0.9318565118154665);
    msg.setSource(42370U);
    msg.setSourceEntity(69U);
    msg.setDestination(24082U);
    msg.setDestinationEntity(55U);
    msg.op = 151U;
    msg.speed_min = 0.5222989213541394;
    msg.speed_max = 0.6014982069899056;
    msg.long_accel = 0.6458008718960335;
    msg.alt_max_msl = 0.25538225121535274;
    msg.dive_fraction_max = 0.5309426959557867;
    msg.climb_fraction_max = 0.7392638044833002;
    msg.bank_max = 0.19799650315693695;
    msg.p_max = 0.9695206482963865;
    msg.pitch_min = 0.2897443062453414;
    msg.pitch_max = 0.5027793491405412;
    msg.q_max = 0.29006519478855486;
    msg.g_min = 0.48876950930922425;
    msg.g_max = 0.7319183953994635;
    msg.g_lat_max = 0.9787649738340777;
    msg.rpm_min = 0.9277039153287483;
    msg.rpm_max = 0.5583404347311697;
    msg.rpm_rate_max = 0.9858831577670636;

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
    msg.setTimeStamp(0.07191105746739668);
    msg.setSource(15276U);
    msg.setSourceEntity(218U);
    msg.setDestination(4574U);
    msg.setDestinationEntity(13U);
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("OHOILKSVAUGUZJPWKGFECUNSCFLQXRPBABYJUREAPQXSUVEHSGIRKLMGTAIPDYCIZTYEHJJFHXMYAQGMRITZOVSQYYMFMDENRVUADFZYNELXQPBGZXBQVBPACFCWNZXIXBJHRQWORPSBMSAWEXERJSWJONU");
    tmp_msg_0.type = 129U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6300276650557537);
    msg.setSource(35897U);
    msg.setSourceEntity(230U);
    msg.setDestination(21702U);
    msg.setDestinationEntity(158U);
    IMC::FormState tmp_msg_0;
    tmp_msg_0.possimerr = 0.20350851536129266;
    tmp_msg_0.converg = 0.14614943513392842;
    tmp_msg_0.turbulence = 0.06589802238078035;
    tmp_msg_0.possimmon = 147U;
    tmp_msg_0.commmon = 210U;
    tmp_msg_0.convergmon = 155U;
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
    msg.setTimeStamp(0.8926482607663041);
    msg.setSource(19679U);
    msg.setSourceEntity(86U);
    msg.setDestination(23373U);
    msg.setDestinationEntity(7U);
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 227U;
    tmp_msg_0.ncells = 173U;
    tmp_msg_0.coord_sys = 133U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.8002898609292033;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.4407973341185959;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.8105734430533794;
    tmp_tmp_tmp_msg_0_0_0.cor = 41U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7231713471861964);
    msg.setSource(28368U);
    msg.setSourceEntity(169U);
    msg.setDestination(45248U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.776557628281534;
    msg.lon = 0.8555700390079315;
    msg.height = 0.8388974218996108;
    msg.x = 0.7846901323507487;
    msg.y = 0.5172510157659708;
    msg.z = 0.7462332157079845;
    msg.phi = 0.9532839243171244;
    msg.theta = 0.520026305768722;
    msg.psi = 0.704829413425121;
    msg.u = 0.4420143225894929;
    msg.v = 0.8260875547678421;
    msg.w = 0.22550648944941387;
    msg.p = 0.3957838942923536;
    msg.q = 0.6870637939335533;
    msg.r = 0.73834881096389;
    msg.svx = 0.04413273515459104;
    msg.svy = 0.9032924783072995;
    msg.svz = 0.07385606177696469;

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
    msg.setTimeStamp(0.5707428466336338);
    msg.setSource(18460U);
    msg.setSourceEntity(70U);
    msg.setDestination(63222U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.2114743410453832;
    msg.lon = 0.0966838021487687;
    msg.height = 0.5656638068383104;
    msg.x = 0.9857364774578302;
    msg.y = 0.4222343008056527;
    msg.z = 0.7938414134541123;
    msg.phi = 0.017342251225353933;
    msg.theta = 0.5464542831563038;
    msg.psi = 0.2652447645246996;
    msg.u = 0.2690745795734343;
    msg.v = 0.9503225055867659;
    msg.w = 0.663858895675015;
    msg.p = 0.6292022097967555;
    msg.q = 0.7282574232288981;
    msg.r = 0.982078396762881;
    msg.svx = 0.8530215773627168;
    msg.svy = 0.42417493905295733;
    msg.svz = 0.7459500590944868;

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
    msg.setTimeStamp(0.3220995491700338);
    msg.setSource(13913U);
    msg.setSourceEntity(252U);
    msg.setDestination(9550U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.9794115289777503;
    msg.lon = 0.9690004747819722;
    msg.height = 0.5927630006860347;
    msg.x = 0.6040030416822646;
    msg.y = 0.9760328121005988;
    msg.z = 0.7254990903509859;
    msg.phi = 0.3348325479368677;
    msg.theta = 0.7458163589940356;
    msg.psi = 0.8750900040192092;
    msg.u = 0.300279457449095;
    msg.v = 0.07438023400069949;
    msg.w = 0.565726711810221;
    msg.p = 0.12623895737934532;
    msg.q = 0.47093256545063766;
    msg.r = 0.6594678924503687;
    msg.svx = 0.2248228035138896;
    msg.svy = 0.5007301242155588;
    msg.svz = 0.030311823036811125;

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
    msg.setTimeStamp(0.574562463350237);
    msg.setSource(25423U);
    msg.setSourceEntity(67U);
    msg.setDestination(26249U);
    msg.setDestinationEntity(181U);
    msg.op = 70U;
    msg.entities.assign("FSUNSDLSEIZSUFJRZTKQKUZFNMPRJWYIPHGKNDZEQVNKKLLSEKORVSFIOIHZONRGQWTGDPAWWGTVJZPUUNGZJUAOBCGEXLLSQYTUORMNPAYICBWBJWKBZVOBDBCMUHXTXYGICEVZPFCMQSKFTKDIHPCGXRMPEATMHLYQZOJOMBCGWJECXIYMUQEBXATCIANAAHHUFNVJVXBDGQMDKNYQYLRHLMSRJRQWERXLVFWYDHDTOWFYA");

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
    msg.setTimeStamp(0.4917170738001667);
    msg.setSource(37670U);
    msg.setSourceEntity(115U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(74U);
    msg.op = 111U;
    msg.entities.assign("OQFGADXTPMIODPITTEJETYZZSCAKFKCLGHPAPECJUVDMKHWSYRSXGZBSZFKIOJZSFRRLFHGYQGXUBGQXDILVPNMXROVHLWAFIEBLSWSFRNGDBKPSBJRXUVSTGKBJMNKVQIXWRVCW");

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
    msg.setTimeStamp(0.263559587546056);
    msg.setSource(19828U);
    msg.setSourceEntity(245U);
    msg.setDestination(61438U);
    msg.setDestinationEntity(175U);
    msg.op = 120U;
    msg.entities.assign("FQLGBJAPFLSAHBFMSCYUAPPLNRMREKWPRURWISOLAHMCUFVUVLMPXUAGWCSXOKTSPSKIOGBLECJVDZBTQDDRWHFOMJUTHFRMSPHYZWXEQEDXOJCRJJZCIODYJQRYRBENIWMZALVAGNVUKCATLOCNFTKUTGTBOQISPJUELZIYPAEMXKKEQNVXQFIHNTQVSYOBWXGFZPDNYDIARHGSQOBYBYWNBQWXZDTXW");

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
    msg.setTimeStamp(0.2679659133732043);
    msg.setSource(48574U);
    msg.setSourceEntity(248U);
    msg.setDestination(44642U);
    msg.setDestinationEntity(245U);
    msg.type = 181U;
    msg.speed = 15620U;
    const signed char tmp_msg_0[] = {58, -123, 107, -61, 119, 39, -31, -70, -13, -93, -88, 7, 59, 122, -40, -53, 32, -119, 62, 70, -25, -49, -71, 41, 66, -70, -87, 98, -124, 122, -38, 108, -102, -23, -113, 101, -81, -71, -52, -86, -20, -10, 51, -88, 38, 35, -66, 29, -17, 80, -42, 71, -8, -22, 96, 27, 108, -93, 91, 106, -15, 87, -36, 12, 119, 57, 101, 123, 52, 25, 92, -55, 44, 30, -121, 39, 62, -85, 13, 80, -87, 3, -98, -119, -31, -81, -77, -78, -113, -29, 86, -108, -100, 8, 66, -94, 54, 98, -114, 93, -116, -114, -29, 27, -102, 105, 90, 125, -30, 8, -78, 56, -71, 70, 84, 23, -99, -85, 33, -54, 1, -29, 121, 66, 17, 31, -14, -116, -112, 75, -120, 21, -125, -11, -4, 115, 77, 121, -44, -13, 90, -35, -44, -32, -81, -111, 91, 114, -54, -90, -80, -103, 90, 109, -56, 7, -80, -115, -27, -82, 126, -64, 29, -38, 44, 32, 79, -106, 59, -12, 65, -23, -125, -69, 126, 84, 15, -84, 60, -39, -103, 41, -107, 120, 25, -82, -80, -17, -90, 42, 28, 87, 125, 116, 10, -85, 46, -107, -78, -68, -56, -32, 112, 74, 32, -52, -119};
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
    msg.setTimeStamp(0.35796690682110377);
    msg.setSource(37693U);
    msg.setSourceEntity(152U);
    msg.setDestination(54837U);
    msg.setDestinationEntity(21U);
    msg.type = 119U;
    msg.speed = 57518U;
    const signed char tmp_msg_0[] = {1, 68, 118, 36, -35, -8, -63, -30, -28, -119, 20, -28, 82, 2, -100, -123, 121, 76, -84, 45, -32, 126, -52, 71, -16, -33, 51, 72, -37, 1, -52, 100, -58, 111, -4, 118, -38, 36, 58, 66, 74, -95, -26, -62, -63, -11, 66, 82, 16, -113, -89, 15, -23, 70, 0, 19, 22, -67, 51, 57, 29, 13, 12, -75, 102, -87, 51, 16, -20, 97, -125, -83, 101, 99, 71, -25, 48, 21, 76, -123, -125, 22, -115, 105, 123, 104, 9, 103, -108, -49, -39, 60, 122, -122, -72, -58, -50, 47, 38, 82, -125, 46, -110, 52, -85, 120, 86, -25, 8, -42, -45, 18, 6, -86, 7, 108, 117, 19, 55, 51, -16, -88, -87, -48, 56, 118, 109, -30, 112, -19, 38, -50, 120, 79, 54, 0, 51, 9, -119, -17, -52, 99, 79, 90, -62, -126, 97, 98, 99, 118, -62, -50, 89, -42, 23, -30, -31, -8, -96};
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
    msg.setTimeStamp(0.7616734446901935);
    msg.setSource(26232U);
    msg.setSourceEntity(59U);
    msg.setDestination(12703U);
    msg.setDestinationEntity(15U);
    msg.type = 230U;
    msg.speed = 14745U;
    const signed char tmp_msg_0[] = {-13, 43, -32, -90, -53, 47, -86, 87, -30, 103, 0, 121, 121, -101, -118, -122, 30, 48, 99, 114, 90, 76, -45, 121, -107, -87, 69, 84, 58, 99, 30, -15, 107, 52, -79, -106, 37, 3, 108, 39, -41, 22, 19, 14, -24, 55, 46, 35, 49, -100, 88, 67, -84, -11, 0, 126, 43, 103, 73, 43, 30, 99, -37, 53, -110, -68, -85, 44, -115, -117, -12, 125, 29, 59, 71, 96, 24, 15, -17, 115, 32, -73, -119, -125, -44, -121, -24, 89, -63, -65, -29, 111, -52, -66, -118, 43, 95, -59, -73, -29, 89, 77, -45, -55, 109, 70, 83};
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
    msg.setTimeStamp(0.8155791908026636);
    msg.setSource(3387U);
    msg.setSourceEntity(39U);
    msg.setDestination(51957U);
    msg.setDestinationEntity(72U);
    msg.op = 197U;
    msg.tas2acc_pgain = 0.23348769791234503;
    msg.bank2p_pgain = 0.3166445128558102;

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
    msg.setTimeStamp(0.5531055387000957);
    msg.setSource(23806U);
    msg.setSourceEntity(203U);
    msg.setDestination(39906U);
    msg.setDestinationEntity(14U);
    msg.op = 162U;
    msg.tas2acc_pgain = 0.6678901004480251;
    msg.bank2p_pgain = 0.3912547135606965;

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
    msg.setTimeStamp(0.031814759276974414);
    msg.setSource(33821U);
    msg.setSourceEntity(224U);
    msg.setDestination(42085U);
    msg.setDestinationEntity(112U);
    msg.op = 67U;
    msg.tas2acc_pgain = 0.8519365798067159;
    msg.bank2p_pgain = 0.3066331930601415;

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
    msg.setTimeStamp(0.014393079722447966);
    msg.setSource(51610U);
    msg.setSourceEntity(204U);
    msg.setDestination(38229U);
    msg.setDestinationEntity(215U);
    msg.available = 3594489067U;
    msg.value = 115U;

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
    msg.setTimeStamp(0.925863436476682);
    msg.setSource(38337U);
    msg.setSourceEntity(24U);
    msg.setDestination(49257U);
    msg.setDestinationEntity(7U);
    msg.available = 1864807600U;
    msg.value = 128U;

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
    msg.setTimeStamp(0.9938073473002821);
    msg.setSource(14637U);
    msg.setSourceEntity(146U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(135U);
    msg.available = 2151916621U;
    msg.value = 178U;

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
    msg.setTimeStamp(0.6984347006654806);
    msg.setSource(28932U);
    msg.setSourceEntity(99U);
    msg.setDestination(36691U);
    msg.setDestinationEntity(252U);
    msg.op = 74U;
    msg.snapshot.assign("ZJRIOFKNCEURKXDDHQGOBPLUCSPVUZBBGSDAGMPYMZXGDVYEOJEINF");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 70U;
    tmp_msg_0.actions.assign("JVNPQYRNYMJHWXGOOXNCTHBTFFXRJBQTCAXYKVKLYHDNEYUCBITLJWRSPFHXPMYSCCPGRBZHFWCXLWKKIVFTMLUALZXEFODFSWGVZSLXBOBZQISJZOTPHJAMDRNJPDMWVUITCEIYGNFVEGUUFQSMLLGMIEGEQMQAANHTJWARZNXYFEDHRUWTGWSKGPYOASLV");
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
    msg.setTimeStamp(0.33928025955235186);
    msg.setSource(32000U);
    msg.setSourceEntity(29U);
    msg.setDestination(33881U);
    msg.setDestinationEntity(84U);
    msg.op = 195U;
    msg.snapshot.assign("KGRASJMRJEVSJOFQVMWDDIZJZIIZYKRPYFGCJLANFIPSYUSCCEWASDGFOWRZKJPEXNTGGACKWRQVDIQMMSVYJMNMQZGYIKPYBUPBVEDXBBWDFKOUHHDGTEEBAPQXVOVKJTUE");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 7613U;
    tmp_msg_0.sys.assign("QAHOBRWCEYUHPVCCZKDYGCMNOKEKJQIACQZSTHIXENGWBLEHQYSXMUKPNPMUTTYLCPAUNQKAISNUSUDTRTXWRNBXIEGQFJQRGFPFWEUVOIOHJWWPIYJKMI");
    tmp_msg_0.value = 0.6690319408647606;
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
    msg.setTimeStamp(0.8248423381626423);
    msg.setSource(61142U);
    msg.setSourceEntity(19U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(219U);
    msg.op = 28U;
    msg.snapshot.assign("KVWISEJUVBFAPAAOJCORRBZTPSTVMOVLKQQ");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("GFPTMGZEVHIJIIYBOUWAYFUWUDVCICWQPBTBLNJQSBCLVOP");
    tmp_msg_0.service_type = 203U;
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
    msg.setTimeStamp(0.6102765440463847);
    msg.setSource(17876U);
    msg.setSourceEntity(103U);
    msg.setDestination(12364U);
    msg.setDestinationEntity(24U);
    msg.op = 111U;
    msg.name.assign("RUUYGFBJOVQQBNTHIYCUIAMBPGLRZDGUKGRLSAENVJCESBAGTYJTDQRHIXVXOIAIVJHWYWIVDJZLKHNWPVVSHKKWYMJEBYGBCLOEDMZYPSOAPXSSCERZMGWOGFVOJONRLOCWIKPZHELTQUNQDCAFFQNHXXKTRYKRBQUMDNOMBXTMNMPCTEZFFQDTUZXPMALJWJFXPGENAIDHXKFJICZSWIXKQTSBSKMOUDBPNSHEUWTVZZWLYFYLDFQARR");

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
    msg.setTimeStamp(0.24889236972548445);
    msg.setSource(9514U);
    msg.setSourceEntity(75U);
    msg.setDestination(3443U);
    msg.setDestinationEntity(112U);
    msg.op = 89U;
    msg.name.assign("KARBYMOHUGEUVWBXQUEBBGNXQIBTVFDBUQRIFIZVWANACKCNPEFZHXF");

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
    msg.setTimeStamp(0.6145402549028585);
    msg.setSource(29742U);
    msg.setSourceEntity(31U);
    msg.setDestination(32545U);
    msg.setDestinationEntity(224U);
    msg.op = 68U;
    msg.name.assign("UZGYUGLSAZIMOQQBQKVWMKUQKVMKOJSFIXDWIMSRANNZJZLLPHLTLTTXCIZFOMVYVXHDIWSNAWHYVRBTFWAFRUEDEKNSYIUNXGUWTKKNCPHAWIEJBLRGTOBMFSJSSRFQMDEBBZCEGHXDQBKGGGSFFXPXDPTHAIJORQULCNUDRVUCTZZLCXCVRYWPHOPNQPCYUDOXMIZDJJOYSOHAKVGEGPDREPWAETYEEVKBWNCCF");

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
    msg.setTimeStamp(0.8826876353822167);
    msg.setSource(28700U);
    msg.setSourceEntity(37U);
    msg.setDestination(44528U);
    msg.setDestinationEntity(209U);
    msg.type = 191U;
    msg.htime = 0.22294479584211102;
    msg.context.assign("IKNJHVMKZURHMCHXLETDUNGUGAQYGCZLQMACCXAOYTQZVZOAQXFOPAOUEVRTWHSEDZDLLJRCSNXEZFLASLGGDMNZDFIHULULYKKSQJEALSCNNQJOTFKJIHVSDRQWGBQWBAPFRKODXVXMRHREPYXPEBJHJTRCUISDWWFMOWGYJNOFGBTBMYFEHSQITJNRVZ");
    msg.text.assign("XKPLJMBNBVXLOEWPEEAIXMGVLRIUHUWTAWKNUJOSMJCVPQHBXVNOCNNZAKRFBNYZZOZQTTSBAJRBDPTKPLSOHZCQRDDRSSGYYQWEPJLFBGELDLNOWNMFPGVYTSQKLCFQJQXMMUKYIRYRCYIADEIKACBUOHJEATTJVWJTDZFWZAYDFZGUKTEEDZVBXHZCYFHCGSIRAHCXWLMNGFQJMUDRTDHUOQSAPQX");

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
    msg.setTimeStamp(0.8982024036547934);
    msg.setSource(33104U);
    msg.setSourceEntity(136U);
    msg.setDestination(45567U);
    msg.setDestinationEntity(74U);
    msg.type = 247U;
    msg.htime = 0.9514843159590448;
    msg.context.assign("VPNOXCWCFDTBYKSTUJDQKULXWDRXHNUKZAYEXVFNIGLHFTYNHOJGDBBJIRJAOADSNMAPTHERJOCWBJNNBTWBJZWEMWMYDKGTVKZMIXVCHRIYEHEKLPRXGQNKHYFSPPSCRIOAQZOSQOLDIXAUAIDYJMMSKFVSGBQIFU");
    msg.text.assign("QQXKBLNBGLFUMBVSMQJCHXVRBIIALOPYAOQXKFTSIZVVCANHCESMSAKBSDEOHJSKTPQCPMWRULSEGBYNWKYIIEVOYNQZDWEQIKFGJVZISRBIJHUKTTPYGGXWEEWPGZSWAMHRAHUWQTUFIQQL");

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
    msg.setTimeStamp(0.6507221133637937);
    msg.setSource(26128U);
    msg.setSourceEntity(133U);
    msg.setDestination(45899U);
    msg.setDestinationEntity(250U);
    msg.type = 171U;
    msg.htime = 0.673166083401146;
    msg.context.assign("OOMPGIRCLHDEQOAKPIQZHIAJAWWMYVKXLVTTHVXPSFZKMGSUAPHCZTDVPWWJLFTGABYOJNJSATFYXUACHVWWMRLDUUFFBKXDTQUGHVHZQGRTLPZIINDCSCSEEKBICIIQONUAKZMMSLBEBEYRRLSSGTUJRFMMHVNHUJINAYXNZQFEVFSRBEOBNRWAFXJECVXFPGKTSLDXUBYDNROEWOUZWXBDQLZYKCZCKLKPVXNGGYYIONYQDB");
    msg.text.assign("ASWLQCKEWGWSNZIJLFWUOJHREXSUMJRYHJFHUVNBTKREUBCPDMRTDWYIRISGESUTZXKYFGDVNDNZRSKNJYQCANSTTGYOEKQZCDKFFPJBLFXEDTOYMIVPGLEPVXLLMGEHKMKNQAGVCOHFPQPBWHLABODNMQLQDTUGXBQVUBVCWIH");

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
    msg.setTimeStamp(0.14896980316178188);
    msg.setSource(32431U);
    msg.setSourceEntity(158U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(117U);
    msg.command = 254U;
    msg.htime = 0.4627829381430406;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.htime = 0.22756791408681332;
    tmp_msg_0.context.assign("LXGPUEDKZYRMFRPQXZBBWZZSKOTMHDBSXOFRHFOJMUSCNZVXPMREFTLAKPRTYQULUFLKSXAWJEBRSCI");
    tmp_msg_0.text.assign("XTUKLYLXBFWSAEJIKTXYKRXMROWJCDYXGANZDOATVZNOEJPJLBVRKMVJNGLMPMCIUJDHRWTFDFPCRPKXOIOLHYPOMYIAIEDFACWTPRNQCISDOFTNUMYXZWNMYPWEZQBJVKEXUGKIQCIQUJNQABQM");
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
    msg.setTimeStamp(0.5491708340362381);
    msg.setSource(56270U);
    msg.setSourceEntity(127U);
    msg.setDestination(37481U);
    msg.setDestinationEntity(172U);
    msg.command = 68U;
    msg.htime = 0.8398361642593667;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.6823877414190903;
    tmp_msg_0.context.assign("ULVHJGVLBMBSKDNJTIWUWEAJXHINCHXXOHYRIEFMCWSWGLFZCIX");
    tmp_msg_0.text.assign("CIFOUCEXPFGBUKDFSNAOOSAANCMQNOUOMRQIKELWSSPEBVGCFCKVMDHBNQHSUVAIXVLSBYZHOCJOWPYBKDEWXATYDYCPSTVJAEBHRJWBJIOQSLORFXWPEQKWJJFTMXIVDEIRZMGMLUUNYKAXPLTJLVGMYBFRCLFVFWXPZIKGITZZNGRRZJTGMRANWLTPKWKUQUXQTYRUGZHQGKCSNCMHSOLQZP");
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
    msg.setTimeStamp(0.8744405451652074);
    msg.setSource(18392U);
    msg.setSourceEntity(207U);
    msg.setDestination(43254U);
    msg.setDestinationEntity(251U);
    msg.command = 170U;
    msg.htime = 0.17610688238669303;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 248U;
    tmp_msg_0.htime = 0.7189896283268951;
    tmp_msg_0.context.assign("KUHQGBPWWOUNLDJOKCECNSAICMUPOVYWAKPJIEDQQTQXQVUWSYLMVGVBCAAOHLNLZDPAFHAXFRVMNIYFDEMTIDFIQCZSUDTLIFOPJDSYBYGIFVFLTPORHTZPCSEWJMKZWXJUEHVRFBMRBCRETQAJGHAJTPHJMKRTXSHSHGVIEWXKFYZZORLUJSXAZPPCOKZWYTXOLGNUNBRFZGKYMOBZIJVNBDKGNXXYWUSEDNS");
    tmp_msg_0.text.assign("KXXFVXURFAIFCTYBDHMZUYRYAYAEJRGRFMPYZHJKMBNYPWKHMNSTAXFCGBVBKLIKAZMVTULBNERYSUQPZQHAIEFHLAGSQVMNWASBOPDSNLZLWRKSHRTVJTXVOLRTSGOCJMPMRTJJLVIFQQMLKUWQVCUZGQZHHLBOXVIGZXRPCP");
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
    msg.setTimeStamp(0.9573287385108384);
    msg.setSource(28739U);
    msg.setSourceEntity(245U);
    msg.setDestination(29466U);
    msg.setDestinationEntity(192U);
    msg.op = 167U;
    msg.file.assign("FHWLVDOVQGZOIHUJVJZQJPUHYHBXTMDKDLHKQJLEYXAVFYZHJVOMIXNLDGSFCRTBTZQXWWHJMIEYYQLSGUREASSBKHEAFFNMDEREBNFUVLZYAYOWPILPSTQAWANBWYRPWRKMOONISJKTGGRGAUITLCKGFLPHC");

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
    msg.setTimeStamp(0.2912184232298468);
    msg.setSource(28502U);
    msg.setSourceEntity(27U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(35U);
    msg.op = 252U;
    msg.file.assign("NXVBSRSJWOCGNBQYIGPQXVXTVPAHPMIWLLZSPKFDQOIHEAHMMPQLSAVMV");

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
    msg.setTimeStamp(0.6925992220839214);
    msg.setSource(62535U);
    msg.setSourceEntity(233U);
    msg.setDestination(58958U);
    msg.setDestinationEntity(82U);
    msg.op = 148U;
    msg.file.assign("SVWMLAIVNWCSLBHLTYUFVHZTVGZTQJXJRSXHYDNYAOZDGULDNTXFFQQSTNJBFSJDHCFABAIMNJVLAWEEMHYLKYFOKITFEIFTAWDYQGGXMKGZXFQVPTCPVAPSZROGUPEESLMUBZRNRYUUODANPKNGZJZAQBVSBIUMIPUJQKMBXKQGRCGQPPMLEWOHYIRNDKSWHQUX");

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
    msg.setTimeStamp(0.6169056443874953);
    msg.setSource(39408U);
    msg.setSourceEntity(39U);
    msg.setDestination(6680U);
    msg.setDestinationEntity(104U);
    msg.op = 57U;
    msg.clock = 0.022520829877328397;
    msg.tz = -84;

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
    msg.setTimeStamp(0.18203116652467222);
    msg.setSource(58607U);
    msg.setSourceEntity(208U);
    msg.setDestination(51358U);
    msg.setDestinationEntity(173U);
    msg.op = 80U;
    msg.clock = 0.10313542600787617;
    msg.tz = -20;

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
    msg.setTimeStamp(0.08188482937588715);
    msg.setSource(45712U);
    msg.setSourceEntity(118U);
    msg.setDestination(35651U);
    msg.setDestinationEntity(209U);
    msg.op = 84U;
    msg.clock = 0.951693203777305;
    msg.tz = 35;

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
    msg.setTimeStamp(0.5119646129811553);
    msg.setSource(60410U);
    msg.setSourceEntity(60U);
    msg.setDestination(17430U);
    msg.setDestinationEntity(38U);
    msg.conductivity = 0.8797569667185924;
    msg.temperature = 0.655541034480827;
    msg.depth = 0.816664662488124;

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
    msg.setTimeStamp(0.7414506040931922);
    msg.setSource(6901U);
    msg.setSourceEntity(88U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(23U);
    msg.conductivity = 0.03242535142767489;
    msg.temperature = 0.5276510603957518;
    msg.depth = 0.7858090989203388;

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
    msg.setTimeStamp(0.1421560377044334);
    msg.setSource(8766U);
    msg.setSourceEntity(26U);
    msg.setDestination(45715U);
    msg.setDestinationEntity(84U);
    msg.conductivity = 0.7185394140263986;
    msg.temperature = 0.7030939318787612;
    msg.depth = 0.14162109136299228;

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
    msg.setTimeStamp(0.6371950835776444);
    msg.setSource(16165U);
    msg.setSourceEntity(174U);
    msg.setDestination(2174U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.23862216202875497;
    msg.roll = 25384U;
    msg.pitch = 25317U;
    msg.yaw = 63408U;
    msg.speed = -5640;

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
    msg.setTimeStamp(0.4696137677317309);
    msg.setSource(23495U);
    msg.setSourceEntity(185U);
    msg.setDestination(23427U);
    msg.setDestinationEntity(95U);
    msg.altitude = 0.6840232673308413;
    msg.roll = 43906U;
    msg.pitch = 55873U;
    msg.yaw = 49376U;
    msg.speed = 471;

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
    msg.setTimeStamp(0.33043306475282785);
    msg.setSource(59003U);
    msg.setSourceEntity(130U);
    msg.setDestination(32216U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.04801979594235872;
    msg.roll = 7012U;
    msg.pitch = 16687U;
    msg.yaw = 21023U;
    msg.speed = 5869;

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
    msg.setTimeStamp(0.5925376571086635);
    msg.setSource(7583U);
    msg.setSourceEntity(60U);
    msg.setDestination(8062U);
    msg.setDestinationEntity(221U);
    msg.altitude = 0.9312738201482393;
    msg.width = 0.034406760727186514;
    msg.length = 0.2298343072597705;
    msg.bearing = 0.0667141636054861;
    msg.pxl = -4492;
    msg.encoding = 163U;
    const signed char tmp_msg_0[] = {50, 115, -92, -78, 121, -39, 87, 38, 126, -102, 110, 18, 12, -90, 52, -69, 98, -82, -117, 3, -63, 105, 102, 112, -33, 65, -36, 47, -19, 95, -13, -71, -115, 104, 94, -119, 69, -97, -95, -84, 77, 110, 119, 49, -1, -26, -12, 21, -35, 110, -102, -117, 74, 115, -26, -47, -103, 122, 31, 71, 22, -77, -99, -71, 53, 48, -41, 112, -103, 2, -39, 92, 47, 120, 13, -109, -13, -29, 38, -63, -60, 106, 26, 86, -103, -110, 79, 68, 38, 32, -1, -59, -47, -61, 26, 109, 20, 67, 99, -78, 117, -54, -49, -110, -123, -60, -32, -56, -128, -66, -86, -91, -98, 5, -33, 83, -90, 18, -77, -14, 116, -121, 51, -104, -105, 1, 3, 24, 33, -105, 50, -126, -109, -111, 78, 70, -27, 83, -75, -103, 36, -49, -121, 82, -112, -112, 89, -29, -126, 30, -84, -100, 108, -75, -69, 11, 6, 115, 41, 115, -31, -86, 60, -16, 83, 62, -65, 91, 114, 37, 63, 115, 78, 5, -116, 36, -53, -42, -37, 45, -44, 29, 70, 86, -46, 119, -4, -122, -107, 26, -96, -107, -102, -66, 124, -81, 76, -55};
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
    msg.setTimeStamp(0.30377869025640014);
    msg.setSource(58144U);
    msg.setSourceEntity(151U);
    msg.setDestination(39124U);
    msg.setDestinationEntity(236U);
    msg.altitude = 0.1199203096542214;
    msg.width = 0.42169757241645656;
    msg.length = 0.999540869858743;
    msg.bearing = 0.4312774471996479;
    msg.pxl = 21720;
    msg.encoding = 208U;
    const signed char tmp_msg_0[] = {67, 18, 46, -54, -106, 0, -102, 106, -88, -125, 45, -26, -28, -8, -114, -127, 109, 61, 65, -77, 56, -105, 105, 31, 109, -70, 27, 32, 93, -2, -3, -36, 5, -63, 52, -83, 67, -127, 121, -34, -70, 107, 82, 44, -67, -99, 106, 26, -7, 10, -53, 126, 102, 74, 92, -20, -8, -17, -47, -64, -2, -113, 85, 14, 23, -72, -34, -17, -16, 67, -31, -96, 80, -10, 59, 99, 60, 39, -44, 17, 97, 48, -20, 42, 33, -106, -19, 100, -98, -31, 113, 4, -100, 44, 18, 63, 98, -106, -35, -93, -19, 101, 41, 26, 56, -102, -39, 22, -3, -94, -30, 26, 76, 76, -43, -39, 73, 50, 4, 121, 15, -58, -81, 65, -35, -128, 126, -114, 113, 95, 30, 18, 17, -69, 43, 21, 95, 40, -89, 43, 56, -127, 99, 12, -1, -116, -30, -38, -95, -63, 63, 42, 18, 28, -30, -115, -40, -41, -122, 76, 110, -71, 48, 107, 64, 49, 71, -110, -109, 99, -113, -38, 36, -24, -47, 21, -7, -116, 11, 68, 109, 97, -2, -119, -55, -116, 76, -94, 47, -70, 94, -119, 36, 121, -65, -120, -79, 0, 58, -50, 25, 58, 31, 112, -21, -52, 125, -103, -21, -120, 21, 51, 66, -10, 106, -57, -86, -91, -21, -21};
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
    msg.setTimeStamp(0.13219116085494065);
    msg.setSource(4373U);
    msg.setSourceEntity(110U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(149U);
    msg.altitude = 0.9880183038509097;
    msg.width = 0.8365398721626641;
    msg.length = 0.3047288409749018;
    msg.bearing = 0.42449145290217527;
    msg.pxl = 7575;
    msg.encoding = 228U;
    const signed char tmp_msg_0[] = {-21, 105, 102, -35, -1, 81, -50, 15, -37, -112, -37, 116, 45, 98, 50, 48, -81, 74, -73, -104, 119, -74, 100, 5, 46, -51, 109, 32, -85, -75, -122, 80, 107, 25, 55, 4, -11, -99, -113, 42, -115, -101, -119, -3, 47, 32, 112, -78, -21, 122, -33, 62, 6, 58, 68, 30, 60, 18, -108, -56, 125, -52, 80, -120, 94, 2, 41, -3, -50, -30, -24, 16, -5, 65, 17, 81, -62, -119, -111, -65, -126, -39, 32, -111, 94, -61, -20, -67, 91, 32, 76, -53, 86, 104, 5, -125, -80, 37, 118};
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
    msg.setTimeStamp(0.20652801471601567);
    msg.setSource(15241U);
    msg.setSourceEntity(221U);
    msg.setDestination(32388U);
    msg.setDestinationEntity(50U);
    msg.text.assign("RACHWWLBKWAYESSYODZELPRJOOJUSBHJNKPVUHAFRJIBIZQJIKNKUGQXFSKTCERUCNTUKSPBNPFVCZFRVUJGXIMMIDTZJLQWTTFQXDNTBLGYVAHCZFDCLYXJAFAGKHYMHGHCRLOYDMGIWFUICBALWCVATNEOPDORNPHSVSZNKDXVEXABTDMOKZPMWQNVY");
    msg.type = 17U;

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
    msg.setTimeStamp(0.39319434868582626);
    msg.setSource(47340U);
    msg.setSourceEntity(244U);
    msg.setDestination(9965U);
    msg.setDestinationEntity(47U);
    msg.text.assign("FTYGFTMRBEIGZGYLUXKHEXDSSOQDMZAJZIGSBGAOLKHMISNTPSRZHWUDNRXWDRJMDQDTBYKSBWNUAEEPBILTBCYBSZQJJPWAMWFFMWZFQWHPQJSQLOCRONXHVQDYKPKRELVFBWLVKAXANNIHUYTCD");
    msg.type = 221U;

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
    msg.setTimeStamp(0.11735845724597638);
    msg.setSource(39227U);
    msg.setSourceEntity(204U);
    msg.setDestination(64993U);
    msg.setDestinationEntity(66U);
    msg.text.assign("EMMIJQSRKZWXQOSYFLXDUZDRACJLNTPUNMYIQDFRVHFEWQQXDHNSAZQWKKEGEVTMOMMLNFRXDOCKQIPZHYLC");
    msg.type = 176U;

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
    msg.setTimeStamp(0.692095122773363);
    msg.setSource(45205U);
    msg.setSourceEntity(1U);
    msg.setDestination(12247U);
    msg.setDestinationEntity(180U);
    msg.parameter = 30U;
    msg.numsamples = 163U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 491U;
    tmp_msg_0.avg = 0.32157881977566316;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5011200001454582;
    msg.lon = 0.8247559917379719;

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
    msg.setTimeStamp(0.5112306150273496);
    msg.setSource(3146U);
    msg.setSourceEntity(22U);
    msg.setDestination(32427U);
    msg.setDestinationEntity(121U);
    msg.parameter = 3U;
    msg.numsamples = 33U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 19430U;
    tmp_msg_0.avg = 0.2143420890654194;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3073495613771945;
    msg.lon = 0.5722001000693742;

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
    msg.setTimeStamp(0.0829315419957487);
    msg.setSource(14496U);
    msg.setSourceEntity(74U);
    msg.setDestination(8071U);
    msg.setDestinationEntity(0U);
    msg.parameter = 140U;
    msg.numsamples = 193U;
    msg.lat = 0.926324529100144;
    msg.lon = 0.7853942141809674;

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
    msg.setTimeStamp(0.9736666460580772);
    msg.setSource(5399U);
    msg.setSourceEntity(158U);
    msg.setDestination(18349U);
    msg.setDestinationEntity(18U);
    msg.depth = 27442U;
    msg.avg = 0.812688040956632;

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
    msg.setTimeStamp(0.42465871387997767);
    msg.setSource(4826U);
    msg.setSourceEntity(245U);
    msg.setDestination(2944U);
    msg.setDestinationEntity(188U);
    msg.depth = 7086U;
    msg.avg = 0.5997775185117176;

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
    msg.setTimeStamp(0.18372109515404556);
    msg.setSource(17692U);
    msg.setSourceEntity(149U);
    msg.setDestination(2373U);
    msg.setDestinationEntity(66U);
    msg.depth = 40849U;
    msg.avg = 0.40438691643232216;

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
    msg.setTimeStamp(0.4083233127034278);
    msg.setSource(28848U);
    msg.setSourceEntity(24U);
    msg.setDestination(16142U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.19936026076374114);
    msg.setSource(21009U);
    msg.setSourceEntity(157U);
    msg.setDestination(61366U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.19534153613147265);
    msg.setSource(52291U);
    msg.setSourceEntity(211U);
    msg.setDestination(28511U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.2054513981121221);
    msg.setSource(28436U);
    msg.setSourceEntity(135U);
    msg.setDestination(16838U);
    msg.setDestinationEntity(47U);
    msg.sys_name.assign("HEPIEUVQMWIRQFAWRQRJNNQDNOAUQVJWVDGHHEFTKBLORSLNTVIDLPOFTGYUTDCPMZSTSMAGKPLPEXCOJQEYURHBVNYQWPDBUKXVMKIPOWHSUXYBZCDXHYYLSJGRXLXUNYSHUXEOFDIEBOXRSFIKMBEZDUYPCLTZAQWOAAYNJQSE");
    msg.sys_type = 86U;
    msg.owner = 55173U;
    msg.lat = 0.29863244001435896;
    msg.lon = 0.4939768766985687;
    msg.height = 0.38093295038659647;
    msg.services.assign("QOSNSRWMJSBQFLCGXLASNMFEFERKPCZIIPTHAQINESPVSXDYTCNNRGCZWYRSNFRUIWAIUPCDDQOFBTEYQPJOEFXQROUCHAHDGYXDKVWOCDIHHV");

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
    msg.setTimeStamp(0.4464358299035802);
    msg.setSource(20500U);
    msg.setSourceEntity(150U);
    msg.setDestination(22494U);
    msg.setDestinationEntity(28U);
    msg.sys_name.assign("VBLGZYGKMCLWGZVOAWAFNAJBRSPKBXTPSDXNHTRESEQJYNFMVYMEKSOCILYJGXSAIRWPINKULQNBFLPPYTMMOZMKXHUPZRCUVPTEEQZEULAMUDXIHBDTUYDULAOQTONUAFWOTM");
    msg.sys_type = 85U;
    msg.owner = 60099U;
    msg.lat = 0.5866909225360535;
    msg.lon = 0.6423114423686589;
    msg.height = 0.28609207305083884;
    msg.services.assign("KWESCGZYSVPNAQMOLZZXQVVTSPXJENOBYMHQZSGCHFMTVBRLYSXAFGEQTNXTFRDWVNERBYDLXXTOVCBEMKDXSIPYJBXGOMQNWLOYOUTFWJPGKPTDMQTGPIJWZHMIWURWJBNVJBFMIHVES");

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
    msg.setTimeStamp(0.9288494311099695);
    msg.setSource(45601U);
    msg.setSourceEntity(195U);
    msg.setDestination(37U);
    msg.setDestinationEntity(81U);
    msg.sys_name.assign("HJDQNHGXLETBCPQPIZWODTIHUWXFVBBQOYBKOJTICV");
    msg.sys_type = 25U;
    msg.owner = 24951U;
    msg.lat = 0.18731829227436236;
    msg.lon = 0.06687961216463267;
    msg.height = 0.6624935001032862;
    msg.services.assign("TYSCBYKWDOSUWTSEAXRUMCDGWKNQYILGIMIUQXOXQJDRPEFNJNHWITHLMLWDBVCJVBQVFMAKXKCVDKPLZHAYQZEMOKPNZFRTTTQHLOGIT");

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
    msg.setTimeStamp(0.25364203279867426);
    msg.setSource(885U);
    msg.setSourceEntity(203U);
    msg.setDestination(449U);
    msg.setDestinationEntity(42U);
    msg.service.assign("QIRDYIMCZBOIPRFYBLHCVNSCPQHAJZTYMUZMVYWNHMEVSGCGTUPEBWFAVKDTZLATLAHLUJNIYLJBRWBOQOEVVDCLUPOUJNFGWHKOPZCXXGJZLBKKFWMPGQJACQFXFPDTIHIDLQISZSOBUJDQTJSOTYGSCNBBFIWHEGCWAGRDNSZNYYWOETJPGXBIHVAKLNOFAARVLWCKRJRSMENYXFXEOFRWEKDUMXSRKDM");
    msg.service_type = 254U;

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
    msg.setTimeStamp(0.41160813210971514);
    msg.setSource(49148U);
    msg.setSourceEntity(222U);
    msg.setDestination(6582U);
    msg.setDestinationEntity(113U);
    msg.service.assign("HPARYJTJDWEKYMGCNVNBVJSBCEMHUAVCLGQCPIHDBGQLWPMRSJMRHJGMBNVXZFQDHSTNWXAMASBVCBYKVAKIKYFEMPSHXEBFURXYYJXQ");
    msg.service_type = 225U;

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
    msg.setTimeStamp(0.5046760267080433);
    msg.setSource(53769U);
    msg.setSourceEntity(83U);
    msg.setDestination(40114U);
    msg.setDestinationEntity(124U);
    msg.service.assign("PECSMNZUHXEKYMWJHNWQGQCSOPCNBTZFSHBCLAKBTVRWOUXVIQPNVDFXKHGVKFRAQLPJFVKZYPXJSCXUUUNPRHOQBEYXITPXCXXCHCDISOQRUGRMLBI");
    msg.service_type = 219U;

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
    msg.setTimeStamp(0.9562234800203854);
    msg.setSource(17151U);
    msg.setSourceEntity(10U);
    msg.setDestination(37699U);
    msg.setDestinationEntity(45U);
    msg.value = 0.8493478803144097;

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
    msg.setTimeStamp(0.20854499407194516);
    msg.setSource(49289U);
    msg.setSourceEntity(135U);
    msg.setDestination(20464U);
    msg.setDestinationEntity(174U);
    msg.value = 0.05688957880571166;

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
    msg.setTimeStamp(0.651227956244644);
    msg.setSource(23305U);
    msg.setSourceEntity(244U);
    msg.setDestination(874U);
    msg.setDestinationEntity(92U);
    msg.value = 0.20665379043923715;

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
    msg.setTimeStamp(0.8879367423530902);
    msg.setSource(34953U);
    msg.setSourceEntity(90U);
    msg.setDestination(50434U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0061542517741234315;

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
    msg.setTimeStamp(0.3065977076815799);
    msg.setSource(23131U);
    msg.setSourceEntity(139U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(186U);
    msg.value = 0.7950466203458562;

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
    msg.setTimeStamp(0.6254210081179545);
    msg.setSource(27059U);
    msg.setSourceEntity(182U);
    msg.setDestination(3565U);
    msg.setDestinationEntity(194U);
    msg.value = 0.29250261475350015;

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
    msg.setTimeStamp(0.8409565711218697);
    msg.setSource(63641U);
    msg.setSourceEntity(8U);
    msg.setDestination(64108U);
    msg.setDestinationEntity(230U);
    msg.value = 0.26097925867582306;

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
    msg.setTimeStamp(0.4327993117745157);
    msg.setSource(25726U);
    msg.setSourceEntity(20U);
    msg.setDestination(12870U);
    msg.setDestinationEntity(116U);
    msg.value = 0.47884883100909126;

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
    msg.setTimeStamp(0.9065677213437173);
    msg.setSource(7877U);
    msg.setSourceEntity(124U);
    msg.setDestination(64881U);
    msg.setDestinationEntity(131U);
    msg.value = 0.41782965210074086;

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
    msg.setTimeStamp(0.5110095545204218);
    msg.setSource(24468U);
    msg.setSourceEntity(35U);
    msg.setDestination(8232U);
    msg.setDestinationEntity(146U);
    msg.number.assign("KWANZLBTABYPYVROOAYHMIOEZIEPAVSSOQOPJLOTRLFDREHAWYJYMKMMQJPQSBLAUFF");
    msg.timeout = 42092U;
    msg.contents.assign("DTZEPLSMFFUHEE");

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
    msg.setTimeStamp(0.9917067779827019);
    msg.setSource(5670U);
    msg.setSourceEntity(177U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(242U);
    msg.number.assign("NIHHUHIWUOYSJWTBTDYLIFENICPXVZPNCEFWSDFUFKGSBJHIJELCKOQOWGUDMSSBTZAAGEUVFXRJYGVOGKSOTKXVFAGRYSVJMNMCJCQGHUARPXQADERZZSCHEKEPBMOOTLTXLNRIXOBBRKTPNQTYULSZLAWEAVERMVIPCBQPFIGSNMDWWYGPJPHXDOIDZFYKVHVQVMRMBQXJMPLLCHWGJKNYIRQXRBDUTULLY");
    msg.timeout = 55429U;
    msg.contents.assign("DZCAQBNGJNTXTDMWAFWVSRKYMREAWHCYHJEZUOIDXEDKDUQPGJ");

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
    msg.setTimeStamp(0.016944338558306793);
    msg.setSource(42039U);
    msg.setSourceEntity(190U);
    msg.setDestination(1818U);
    msg.setDestinationEntity(26U);
    msg.number.assign("ZHDASJDCVFRXTYSYDTFHACZWXQHMUZOWAHQEFUGWGQWDPANLLMJUXYMOXYOECPMIHKFRELVYBZZHRYBLJFKSBBBVJCILKWRQEBXSPTVSFNAGFEPONKGUVIUDNDUGCMVIEDWCPSZKCYXESMBTJWUCOIIGPQUVIWJXBRKTGRCLYWVNALALRUASTQKJMOUZTOOKGZFKJKMJPNELOQMBPNORJQENYZLHTSZ");
    msg.timeout = 52046U;
    msg.contents.assign("NPPDLGTQTGICRIXAORIEXNNPPMNDGLLYSMSFYPAVKJPKXSRDJHKQDHIBYUIBZFAYTCIOMRJNWACIOTHXJQOEBSFHAS");

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
    msg.setTimeStamp(0.7819790983850777);
    msg.setSource(46392U);
    msg.setSourceEntity(140U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(31U);
    msg.seq = 3009958608U;
    msg.destination.assign("ZWCVHVUTJIAYBHEJSVPBIHCMZRFAWLRZGTDURODZHIDVPMXKQULUVWEROZQVMUSPOGYIKYWRTYTUCLPFECYADJJHGBHVESUSTQQ");
    msg.timeout = 44217U;
    const signed char tmp_msg_0[] = {42, -20, 78, 69, -27, -78, 32, 107, 115, 25, -18, 15, -127, 53, 95, 52, 17, -34, -95, 60, 64, -109, -125, 117, 87, -120, 45, 87, -119, 105, 19, -89, -89, 112, -123, 15, -41, 113, 63, 117, 71, -42, 77, 82, 77, -24, -62, -64, -47, -116, 40, 15, 33, 93, 41, 71, 83, 20, -73, -61, -107, -127, -45, 22, 56, 51, 101, 117, 101, 5, 126, -111, 67, 84, 56, -23, 104, 88, 15, -8, 18, -22, 122, -11, -125, 5, -17, -79, -70, 58, 45, -51, 113, 14, 102, 30, -107, 2, -94, -53, 97, 105, -100, -75, 17, 2, 44, 112, -16, 79, 112, -1, 109, -7, 27, -7, 70, -86, -74, -78, -33, 20, -12, -13, 112, 9, 2, -50, 82, 97, 117, 28, -47, -80, 33, 0, 90, -74, 64, -67, 66, 20, -56, -27, 27, -120, -100, -15, -65, 108, 9, -49, 71, -24, -83, 37, -68, 57, -110, 29, 15, 59, -128, 113, 104, 31, -31, -20, 22, 55, 73, -85, -65, 68, 15, 90, 34, 104, 40, -59, -49, 116, 33, 46, 100, -18, -84, -71, -105, 5, -37, 85, -86, -55, 34, -59, 57, -18, 97, 123, 3, 29, -71, -61, -118, 27, -55, -112, 75, 92, -46, 122, -39, -60, 43, -20, -51, 118, 20, -123, 110, -4, 102, 107, -78, 105, 126, 17, -86, -37, -67};
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
    msg.setTimeStamp(0.38067906259972806);
    msg.setSource(42998U);
    msg.setSourceEntity(88U);
    msg.setDestination(43292U);
    msg.setDestinationEntity(217U);
    msg.seq = 2425074890U;
    msg.destination.assign("YQIWPGZXSFMKCJWDVSNQKPDEHCNTDVDRBHRGJ");
    msg.timeout = 8349U;
    const signed char tmp_msg_0[] = {110, 70, 112, -84, 65, 24, -41, -9, 25, 87, -60, 17, 21, -6, -98, -39, 90, -15, -82, -75, -8, 53, -42, 19, 80, 41, -48, -124, -22, 72, -80, -107, 52, -123, 71, 2, 66, 43, -9, 28, -102, 112, 67, 90, -110, -18, -43, -38, 89, -48, -59, 35, -111, 65, -124, -40, 57};
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
    msg.setTimeStamp(0.19550736129911195);
    msg.setSource(45099U);
    msg.setSourceEntity(11U);
    msg.setDestination(41315U);
    msg.setDestinationEntity(180U);
    msg.seq = 2156641743U;
    msg.destination.assign("VCERMOLZFWTXWBQTOIHIIBNLDSKFICRHXQTFJFUILUNXUAZVNYMSNWZBPGGGRJRAMWELFIYDPXKLGHUSGNQAPANVIUVYDUGQBSKIZDCCQUKHRARDODFDLPMZEC");
    msg.timeout = 37047U;
    const signed char tmp_msg_0[] = {-11, 50, -38, -65, 122, -70, 65, 88, -53, 25, 100, -39, -126, -56, 6, -52, -71, -40, -115, 69, -7, -35, -71, -90, -51, -15, -47, -69, 68, -122, 54, 34, 81, -107, 48, -89, -1, 31, 87, -125, 13, -34, -47, -89, -13, 12, 3, -90, 2, 14, -87, -10, 51, 103, 103, 11, -57, 77, -78, 56, -31, 108, 97, 118, 87, 26, 80, 33, 31, -120, 102, -117, -69, 106, -109, 90, 59, 14, 81, 79, 36, 66, -89, 35, 63, -109, 114, 12, 67, -41, 84, -12, 38, 69, 90, -108};
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
    msg.setTimeStamp(0.4521465074558648);
    msg.setSource(7009U);
    msg.setSourceEntity(33U);
    msg.setDestination(12898U);
    msg.setDestinationEntity(10U);
    msg.source.assign("FGBCXGAFEBIVRNTNSHDDDBCUHLWIINRRFAAGPWGMQNUQMBREGUXFIKOICAGGTDHEYAKJRTZMZTPLRRSHTCCJXWYMXUUHCCAWXKTFVYHEJFZXHKVUEBMZIQPYQDZVPGLKRMNYZMBHKKEOMBLOTITPXWYOGKVVQJWPAVJNGWPICURZNQSUFZHMDD");
    const signed char tmp_msg_0[] = {-46, 109, 111, 91, -102, 119, -126, -84, -40, -91, 125, -21, 61, -117, -12, 118, 47, -118, -33, 1, 31, -104, -29, 97, 82, -11, 79, 82, 79, -126, -126, -28, 112, -44, -48, 126, -16, -124, 42, -113, -36, 93, 5, 89, 87, 60, -118, -22, -93, 94, -128, -15, 88, -59, -58, -102, -82, 20, 124, -41, 21, 115, 47, -126, 35, -44, -37, -33, 107, 119, -66, -40, 33, -63, 116, 93, -40, 64, -46, -21, -96, -36, -72, 117, -88, -11, -119, 115, -79, 57, -107, 29, 119, -115, 11, 88, 2, 100, -2, -110, 13, -87, 87, 33, 14, -76, 90, -114, -65, 14, 16, 41, 64, -109, 59, -117, -13, 116, 6, -84, -25, -2, 69, -73, 55, 53, -55, 68, -25, -113, 54, -124, -70, -121, -75, 70, -95, -45, -84, -83, 82, 86, 23, -2, -125, 70, 51, 118, -39, 68, 47, 96, 89, -123, -27, -4, -56, -33, 50, -6, -6, -115, 114, 77, 42, -84, 60, 93, 15, 126, -71, -100, -113, 80, -25, 69, -104, -25, -101, -97, 105, 93, 73, 59, 72, -100, 47, 89, 13, -112, 121, 101, 75, 74, 48, -55, -72, -17, 19, 80, 72, -106, -79, -86, -81, 47, 16, -84, -1, -94, 43, 19, -98, 68};
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
    msg.setTimeStamp(0.19130858814277996);
    msg.setSource(43071U);
    msg.setSourceEntity(223U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(6U);
    msg.source.assign("BAVIJKWFOHJVTMWPTGMLWBSWPKQQYKRJCAUHNKANYRHWERBXEJSCMZTIFKAHZRNAVAGEJEFMVBBDQRRLMTXOSYHNGPZFFQUSOIERVBGDEXUZUSSBYIVPNUQXADPJGPDDUORJRMBMBSUKKFZVSXOVENNXDOLYLZHWHIPQMNXLTENOFFQPVPLOSFAJUCITZOKTOZUICAQ");
    const signed char tmp_msg_0[] = {19, -50, -64, -96, 115, -11, -102, 102, -55, 43, 5, 92, 27, 71, -44, 15, -111, 58, 95, -29, -1, 94, 34, -119, -98, -100, 101, 6, -14, -104, -34, 101, -104, -119, -93, -1, -6, -89, 3, -87, -51, -8, 73, -15, -34, 21, 56, -109, -33, -54, -19, -69, 121, 104, -13, 97, 64, 38, -20, 91, -108, -48, -24, 109, 18, 76, -10, -32, 87, 66, 74, -103, -76, -43, -21, -92, -58, 7, -71, -43, 39, 111, -76, -115, 86, 19, -6, 102, -95, 15, -124, 3, 41, -89, -113, 110, 9, 91, -6, -13, 65, 37, 79, 4, 25, -94, -59, -36, 17, -69, 45, 26, 12, -85, -14, 120, -75, -119, 5, 20, 16, -26, -113, -8, 75, -28, 32, 21, 17, -68, 1, 107, 118, -26, 72, -101, -24, -4};
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
    msg.setTimeStamp(0.11695893654714085);
    msg.setSource(40579U);
    msg.setSourceEntity(21U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(109U);
    msg.source.assign("VBNGPFXTZMOSUUWMBBITDBLURCHNUATIWFFCFTKVORGGEPEYNREWNAQYDERJMQVTOKGRJIDUSQZLNOUUSIXNUKGDPWPTYLJHIDZJVQBSINCBCJPRACQEEALHWLHRYSMFA");
    const signed char tmp_msg_0[] = {-6, 123, 58, 61, -47, 123, -97, 96, -12, -40, -72, 117, -110, -92, 107, 44, 97, -27, -86, 6, -31, 123, -46, -104, 95, 82, -41, 90, 73, -124, 100, -19, -99, 62, 46, 107, 79, -106, -100, -64, -70, -125, -96, -53, 84, 32, 10, 58, 74, 18, -44, 56, 109, -127, 14, 40, -26, -35, 65, 82, 103, -119, 82, 88, 24, 59, -72, -104, 40, 33, -94, -119, -90, -76, -41, 112, 46, -76, 113, -67, -26, -89, -55, 67, -96, 86, 61, -45, -96, 104, -105, 102, 38, -24, -55, 109, 46, -101, -64, 11, -91, -83, 88, -116, 24, -8, -20, 120, 53, 96, 88, 16, 87, -45, -124, 60, -32, -103, -73, 85, 89, -34, 126, -111, -42, 51, -44, -5, 61, -24, 71, 46, -92, -64, -97, -58, -82, -54, 17, 101, -121, 85, -95, 56, 32, 114, -12, -128, 61, 27, 99, 106, -101, -35, 87, -1, -14, 70, -15, 25, -31, -21, -83, -87, 40, -73, -70, 80, 37, 123, -91, 47, 62, 66, 92, -13, -119, 5, -38, -20, -101, -65, -114, -123, -27, 12, 115, 114, -95, 113, 110, -4, 111, 4, -94, -23, 109};
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
    msg.setTimeStamp(0.5417650818586105);
    msg.setSource(42574U);
    msg.setSourceEntity(237U);
    msg.setDestination(61030U);
    msg.setDestinationEntity(134U);
    msg.seq = 574016769U;
    msg.state = 147U;
    msg.error.assign("QRQXLGVMDJQBPYPAKNUCNBNVWUNVHNAXJCKEEVKAN");

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
    msg.setTimeStamp(0.21232873953880727);
    msg.setSource(60720U);
    msg.setSourceEntity(124U);
    msg.setDestination(59082U);
    msg.setDestinationEntity(124U);
    msg.seq = 2729841197U;
    msg.state = 104U;
    msg.error.assign("RIYOJCTIPXZKZDFTWKASHYUJAYUZMBJBXFMXCGUONYVCDMERZFQSPACMSURZQFTZCAEOLJDQQOBFKIVTGEJFKCSYIZCSXEMRUOGHVOBGRSANHQTLPBHWGQAUUEKVHSQKXOJPWXXLVZVDDCBXXPMLJKFIMBWUYWOAVFSWNJBNPDYPDSIWGNRHHEHFPQNGLTHEITEOYRGDPBUAALWRBOJUTWVLM");

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
    msg.setTimeStamp(0.17349516096622775);
    msg.setSource(59165U);
    msg.setSourceEntity(184U);
    msg.setDestination(26255U);
    msg.setDestinationEntity(213U);
    msg.seq = 4130969660U;
    msg.state = 0U;
    msg.error.assign("IWAVMPKOUVBBALFLNCVBMKIFQMKBMWWJEJTWKJUGCUTOBLPQFXR");

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
    msg.setTimeStamp(0.5330754812402257);
    msg.setSource(61514U);
    msg.setSourceEntity(34U);
    msg.setDestination(10347U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("KRHLSDDPDSDJAHTIAIANMJBXBRVXYNQGCWWOZCTJBFSLSKFBSEMYCGFXDPREHNXQSAVBTUMEHQBPXTDUMXWFDYLLFCZMGNYQPDWYESIZHTDLDYWENVYGTATZAQPZZQOTJMJLLBUGHJTKVMVOKUBEUZIBCYNGFAJAXBFCMGZIKLERPYOOINOJKQAWSGWWTKWOKRIUVUFVFLEOVVFXXSKPC");
    msg.text.assign("YYZXBPFPEZKGQMBGSASHYIFOTXESNVZGQIEJOBPNHCCCFEA");

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
    msg.setTimeStamp(0.7019992388098507);
    msg.setSource(61747U);
    msg.setSourceEntity(175U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(62U);
    msg.origin.assign("GEGNSVQWHCZNNBGYDCGCDTYJJGPBHXXBCTHHKNAFRKOJPRFZIOJPBPFJYFLEYENWFSDRULNRLCOUXDPWNCFRZGHBKUBOKLBAUVYDBLXEEQIGOMHOBSAPVACQZLQHVCWHBTLLSVVZVS");
    msg.text.assign("ATYUBLJKJLAKPRLWORDNKTPZHZVXSFCUPJHQVYSBUGHIPBYUZIOARDHUEJHTJMSYHMFEGJQWWWUDBSRYPKKEBGCAKYNUXNGCDNCBOMECBHKDZNNEQDODHNZJRRITZXMIQPFOTMVZNCMDVLMPGINUCIQTPQGMTRZRXOLWSXPIINSHLXQFQEJYOQGWSFVBMAGMYXLPFSOBWADHSXKOEVTDIZCLRBYVWLOXFYWUCAVEJSTRAIQGAFLZ");

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
    msg.setTimeStamp(0.9519396093656632);
    msg.setSource(10715U);
    msg.setSourceEntity(59U);
    msg.setDestination(62002U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("HMDEKQOEZYRDEQJBLQGZDUSZWSEOIGDBTVOANBITZPWUWWVIAWZPCJPLBGNNLDEWEFFJJUWYHYFSBZUTWCBOKKCVVOZPXJVDQOJKFHKPBQDKBBRYLONCYHRGTMHJVNTJEWSXH");
    msg.text.assign("VECFYEJNNTNVNXBHZPIUYSXTGATKEFTYLKVLVQVWMMDBHVDDURWQRWYYZDNYZXLXOXWAWTQOCNLIEG");

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
    msg.setTimeStamp(0.5001117844709052);
    msg.setSource(16547U);
    msg.setSourceEntity(108U);
    msg.setDestination(47543U);
    msg.setDestinationEntity(52U);
    msg.origin.assign("NNHRODJEPJEXALYKZSOFJWIHVBDLDESQKEYINPJBNQNFNTMTTDJOEXGWOTMBYUIVSCMGVAWQJHXCWPWMMHURDHSZXLFTU");
    msg.htime = 0.5677546747481924;
    msg.lat = 0.433755226031863;
    msg.lon = 0.9876042731843282;
    const signed char tmp_msg_0[] = {-118, -83, 53, 56, 0, 27, -68, -127, 57, -70, 74, 68, 3, 96, -111, -33, -59, 40, -86, 59, 35, -41, 43, -16, 112, -28, -124, 15, -18, 70, -50, 4, -57, 17, -64, -47, -42, -77, 24, 97, -59, 54, -127, -19, -99, -2, -39, 30, 75, 32, -3, 42, 91, 50, 1, 8, -74, 56, 122, -56, -77, 126, 51, 34, 106, -123, -26, -30, 21, 51, -36, -80, -19, -3, -71, 15, -47, 78, 6, -110, -88, 34, -7, 113, -79, 55, 63, -119, 76, 49, 70, 118, -13, 122, -61, -58, 110, -89, -52, -70, 47, 34, 118, -90, -6, -81, 20, -15, -101, -18, 66, 15, 101, 64, -8, -116, 17, -17, 53, -12, 123, 8, -43, -81, 90, 114, -44, -124, 40, 120, 43, 80, -93, -43, -109, 6, -97, 7, 17, -81, 100, 107, 96, 3, 49, -44, 63, 25, -100, -69, -36, 6, -85, -52, 71, 66, -117, -102, -72, -31, -22, 100, -114, 5, -120, 80, -32, -43, -22, 19, 44, -92, 40, -37, 34, 109, 61, 6, -109, 18, 6, -40, -89, -51, -4, 38, 18, -5, -41, -54, 51, -54, 99, 82, 71, -6, 13, 117, 46, 101, -59, -82, 85, 125, 5, 97, -86, -59, 115, -117, 112, -89, 66, 38, -117, -6, 41, 110, 10, -98, -108, -15, 42, -62, 109, -40, -105, 39, -32, -105, 24, 120, -44, -46, 84, 64, 29, 68, 81, -58, 73, 31, 47, 30, 82, -100, 42, -105};
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
    msg.setTimeStamp(0.7301840964636712);
    msg.setSource(32695U);
    msg.setSourceEntity(219U);
    msg.setDestination(14469U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("YYFAHGPWESZJPDKDNRKFRZKACTJFYUCLAQWJYQIFXESIAEGWRJYBNTXVQOFMPXXPQHEIWFSARFFTSLPFQHZVPNROQHIEYLIDGCDQVUKEZUMDXAGCUPGNHTNWMEAEERONNGAOUNVDXQXSLCQMXVDOMSAYRSLMJZIZMZCWPIGMOVBCIWZUKTMHFJJOJPCCQBDJGUOWURNVOPRVZWHBBKVZSTBSGHKVKTRBUHK");
    msg.htime = 0.1452295036440393;
    msg.lat = 0.4013986024746041;
    msg.lon = 0.36502234402169254;
    const signed char tmp_msg_0[] = {-22, 25, 78, -18, 14, -75, -63, 107, 66, -121, 66, -12, -110, -36, -44, 3, 96, -118, 0, 11, 83, 74, -13, -33, -92, -43, -84, 88, 34, 36, -27, -107, -117, -76, -107, 71, -23, 80, -104, -122, -121, -81, 106, -111, -88, 88, -24, 2, 20, -58, 2, -66, -92, -115, -56, 73, -106, -67, -44, 21, -74, -83, -98, 41, -28, 110, 68, 116, -93, -41, 26, -22, -125, -25, 77, -6, 24, -116, -61, -27, -75, 47, 21, 116, 70, 81, 15, -86, 119, 59, 13, 115, 39, -102, 87, -123, -97, -41, -77, 41, 8, 112, 116, 108, -77, -18, -53, 52, 25, 20, 44, 12, 97, 13, 37, 46, 2, -54, -25, 7, -10, 24, 95, -49, -114, 92, 81, -12, 32, 116, 125, -9, 3, 8, 60, -106, -118, 98, -95, -122, 80, 69, 41, 117, -88, -65, -122, -40, -31, 14, -18, -34, 3, 122, -36, 85, -60, -20, -69, 108, -17, 67, -114, -74, -110, -12, -102, 79, 26, 49, 100, 92, 34, 23, -104, 61, -19, -113, -37, -26, -81, 57, -2, 52, 81, 76, -54, -28, -87, 112, -110, 107, -128, 10, -42, -67, 112, 122, -109, -102, 6, 83, -76, 36, -128, 39, -107, -119, -2, 44, -121, 56, -64, 61, -5, 17, 24, -8, -30, 61, -60, 2, 89, -21, 117, 34, -19, 92, -10, 64, 109, 119, 118, 10, -94, 53, 124, 29, 84, 91, 66, 63, -6, -73};
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
    msg.setTimeStamp(0.16869527432294407);
    msg.setSource(21245U);
    msg.setSourceEntity(143U);
    msg.setDestination(58439U);
    msg.setDestinationEntity(30U);
    msg.origin.assign("HLRHGHNYZBRZDCXFEKFFPJFKCZWTDSLBFYIESJGZGRLTQKPIKNEPUUAMOTIAEHRUMODROYQSIVMZBTTYCWCUDGEJDDXNWMFNDORWHEWCMDLSAUKAPCUINZIBIXHLITBWVMGFQCNSJEZXHXXBYYAQVBHFHZGMMVTLCDYYOPPNBOVKWQSJEXRQL");
    msg.htime = 0.2722141961122734;
    msg.lat = 0.5243658135000319;
    msg.lon = 0.625728231457778;
    const signed char tmp_msg_0[] = {65, 78, -69, 48, 110, -47, 28, 9, 122, 29, -50, 4, -74, 85, 14, -14, -41, -2, 118, -6, 73, -105, -1, -50, 88, -79, -31, -92, -36, 5, -44, 82, -10, -16, 98, 91, 6, -57, -47, -80, -119, -9, 95, 67, 39, 17, -41, -1, -56, -44, -13, 75, -70, -78, -122, -86, 77, 44, -109, 81, 120, 13, 40, 23, 67, -88, 75, 90, 102, -24, -98, 106, 8, 76, 78, -80, 28, -116, 58, 104, -117, -67, 101, 43, -122, 93, -2, 36, 78, -51, -112, -55, -22, 5, -109, 38, 52, -72, -115, -120, -2, 122, 52, 75, 68, 64, -19, -126, -64, 79, 19, 69, -96, -86, -17, 74, -41, -57, 103, 67, 122, 20, -89, 6, 62, -7, -86, -26, -12, 120, -102, -3, 103, 93, 105, -49, 44, -109, -126, 69, -64, -95, 14, 74, -111, -72, -106, 3, -46, 87, 30, -32, -68, -52, -35, -97, 45, -83, -50, -114, 79, 3, 24, 56, 94, -36, 7, 0, 104, 78, -26, 0, 70, 59, -119, 72, 57, -61, 100, -37, 70, 122, -90, -86, 86, 26, 47, -21, 24, -65, -106, 104, -126, 71, 55, 8, 71, 33, 103, 82, 64, -24, -40, -25, -126, -126, -82, 119, -113, -111, 21, 116, -114, 79, -14, -5, -86, -113, -37, -45, 119, -118, 92, 78, 79, -116, 99, -31, 126, 53, 10, 113, 118, -16, -65, 123, -75, -116, 88, -105, -77, 56, 5, -30, -126, 50};
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
    msg.setTimeStamp(0.48113462860898537);
    msg.setSource(15918U);
    msg.setSourceEntity(107U);
    msg.setDestination(27726U);
    msg.setDestinationEntity(127U);
    msg.req_id = 50809U;
    msg.ttl = 26410U;
    msg.destination.assign("GATXKGIHEJAYOKJHIICMSPCJTAB");
    const signed char tmp_msg_0[] = {110, -122, 113, -21, 90, 60, 75, -124, 13, -92, 106, 35, 23, -85, 11, -50, -115, -19, 59, -117, 2, 110, -49, 60, 78, -127, 72, -128, 62, 124, -12, -53, 94, 20, 29, 101, -56, 70, -78, -70, -49, -54, -78, 93, 17, 124, 81, -100, 72, 116, -58, -99, -35, -84, 2, 46, -8, -93, -108, 99, 55, 3, -31, 5, 111, -97, -82, 39, -5, 85, 96, 94, 100, -9, -19, -89, 78, 27, -83, -13, -127, -23, -109, -37, -59, 18, 57, 104, 67, -74, -3, 101, -124, -69, 67, -100, 105, -16, -18, -66, -22, -43, -113, 82, -25, -35, -100, 29, 80, -42, 27, -92, -8, -101, 84, 75, -124, -33, -69, -10, 90, -115, -55, 96, 77, -80, -102, -54, -68, -90, -20, -126, -24, 69, 105, -36, 15, 88, 16, 40, -126, 8, 81, -123, -93, 38, 4, 80, -55, -11, -43, 31, 79, -95, 102, -26, 77, -68, -125, -72, 6, -113, -58, -82, -35, 90, 26, -67, 4, -112, 75, -92, -75, -125, 110, 0, 108, 53, -108, -115, 53, -31, -27, 69, 42};
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
    msg.setTimeStamp(0.7279533537802273);
    msg.setSource(64944U);
    msg.setSourceEntity(14U);
    msg.setDestination(46272U);
    msg.setDestinationEntity(104U);
    msg.req_id = 3388U;
    msg.ttl = 3990U;
    msg.destination.assign("GUVZJUIFBOUVURQGTYIGBZMNHDREBOBCVASUFYGRFAHKWDGKDIBXNQEHYHJFSHCDVXVHRYFLIXHIRJNPQWRLVB");
    const signed char tmp_msg_0[] = {-79, -93, -101, 66, 11, -96, -36, 58, 119, -23, 117, 40, 30, -88, -100, -95, 97, -128, 52, -47, 2, -91, 116, 56, -58, -60, -89, -28, -98, 77, 3, 87, 11, 124, -107, -115, -101, 40, -71, 39, -103, -89, 69, -58, 36, 66, -50, 9, 110, 125, -33, -76, -58, 42, -44, 86, -89, 52, 70, 67, 72, 8, 111, -44, -73, -110, -57, 28, -25, 98, -107, -114, 43, 115, -47, 27, -52, 102, -42, 11, -63, 112, 43, -34, 55, -78, -67, -33, 39, 55, -50, -72, -62, -37, -14, -12, 37, -49, -28, 82, -6, -19, -36, 118, -54, -82, 7, 121, -41, -69, 112, -37, 46, -73, -73, 115, 74, 77, -47, -123, -106, 120, 63, 68, 123, 4, -79, -117, -47, 111, 38, -2, 92, 93, 101, 46, 53, 72, 107, 42, 29, -90, 54, 36, -34};
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
    msg.setTimeStamp(0.690204488609883);
    msg.setSource(54601U);
    msg.setSourceEntity(34U);
    msg.setDestination(1816U);
    msg.setDestinationEntity(186U);
    msg.req_id = 34820U;
    msg.ttl = 43757U;
    msg.destination.assign("UDUXETFLJJIWKMDHSBVZOOBAXKHGRYQDWWYCJDXEQHIEIYFAREXNTCOYXFAVSBUZOPZKFOAQCLWRZSBZRFLADPVDMMTJLIETOYNZSFWUDVRCSXPKTCXUYLHQMQAHASBRLDH");
    const signed char tmp_msg_0[] = {116, -42, 93, 46, -31, -108, 37, 69, -36, 86, 110, 112, 72, -36, 48, -3, -44, -71, 11, -54, 28, -8, -29, 44, -107, -95, 56, 8, -96, 63, -11, -85, -113, 23, -7, -15, -113, 30, 113, 59, 120, 89, 12, -11, -113, -106, 69, 10, 114, -41, 11, -73, 87, 94, -17};
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
    msg.setTimeStamp(0.343190314259573);
    msg.setSource(6462U);
    msg.setSourceEntity(185U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(60U);
    msg.req_id = 21639U;
    msg.status = 112U;
    msg.text.assign("QKOVCJMTBOFNIQHIXFSNILXFQUZPFWOJTKUOQVJKRZYMQPUSOQVHSTPWRUUAKSRKYRHKOPVAJKNATSBNBXLPDHGPELHVBGUECLD");

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
    msg.setTimeStamp(0.9225038631614536);
    msg.setSource(3628U);
    msg.setSourceEntity(248U);
    msg.setDestination(57701U);
    msg.setDestinationEntity(188U);
    msg.req_id = 46621U;
    msg.status = 24U;
    msg.text.assign("HVKNHHSJWTTTAECBHJSXMOYPZUQJZBPENLWIQEWJAVUBEJRGQEZIRDGQATTOLXUQRBCGJTEIXSFMECQOOAHSNPHMWKXLLBCTWFBVUAQUTYHRFVZFHYNLKVTXZWBXNZLQXXRVDFIRYYLJSEUQJAOMZGUGPRIYKSZDWFYVUPGKCOAPLBDYFIPPJLNBVKFEMDSICZTYEKBDIGRIVCXGWNOUHWKJFXSPGMGZWCSAMDHYVMAOIMK");

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
    msg.setTimeStamp(0.2826530997174257);
    msg.setSource(12693U);
    msg.setSourceEntity(247U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(157U);
    msg.req_id = 39791U;
    msg.status = 181U;
    msg.text.assign("LZEUITHUNPLKJZUOCESDAGTBKFLKUMMMDXLGNWDNQDCXMLBRZRRCJWCMTNFEUIZKIILLYSHHFWJVENSKGBFAHZTSCGQO");

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
    msg.setTimeStamp(0.163155540996757);
    msg.setSource(22084U);
    msg.setSourceEntity(10U);
    msg.setDestination(55638U);
    msg.setDestinationEntity(154U);
    msg.group_name.assign("UITTYQPXOWJWZCJXOYETXLOUSAYGDEBLEEBQEAGHUFSNEPHMDVXFZCQETBFJPOAMFZMJNIWVNRCNVUUHKCJRXYYLTHSHGIBMANUPPZNSWKMNSRJVYFAIALDONFNWWXOIOOBWKVZEKHFCUUXIQDSXBPRRCNABGGGVZCXPIHLADD");
    msg.links = 3274980460U;

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
    msg.setTimeStamp(0.2967655323604115);
    msg.setSource(59655U);
    msg.setSourceEntity(43U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("LEHUNFRTCKBRKOIQYZCXNHXJYBVTCLPYVTDWOGWHAIKVGHZZDXNIBETJHDKRRWZRKCPLPOQRNSSEJXDOVMLHNQMYANISXUIBTIMTMGZEUBULVZOTICVJAYRRQAOTMQ");
    msg.links = 3066549292U;

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
    msg.setTimeStamp(0.3335929388983542);
    msg.setSource(10488U);
    msg.setSourceEntity(184U);
    msg.setDestination(44390U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("FXTHGSTSSKVWWPOCQRIDOSPLMZFIRYNUBNQTMCDNCZBWFEZYUAUKRFQFYVKFIPXKQGDAREGVNLQLDMCHPOWBBHWITEXIYAHENVOVZLPDQRRSMIWZODGVB");
    msg.links = 1906738153U;

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
    msg.setTimeStamp(0.5406109871968999);
    msg.setSource(41291U);
    msg.setSourceEntity(218U);
    msg.setDestination(16038U);
    msg.setDestinationEntity(40U);
    msg.groupname.assign("OADYNVLWWRAKRVOEPWVJGHMMTOMAKNBWJEVHZQCTFIPBBICFNPUNVBSTOVRCXUBIMPMRNDDHIPL");
    msg.action = 54U;
    msg.grouplist.assign("VBROIMIJAUYOFGTYJHGDKRGLNHCUNUBFCSMGDBQHKXVHBLYKXBLYUVALJINKHTPBCFJDDMNMGQDWWQZSLJKFWWNSTROIZTQPNZKRYJTLWDGMSEPWWMDBHVZVEHBUSUCXCLCFCUOQHZVEKDQDCZRZAGSPQWENEPZVKLXXJEIRFATQAZJTYMRPMIXFAKPEWSPNKRNYMPIAOVOUSIZEICMXPXRLOGRWNUTGBEAOVYFUFOXSJCATTYSGE");

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
    msg.setTimeStamp(0.2021086348410418);
    msg.setSource(24552U);
    msg.setSourceEntity(240U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(144U);
    msg.groupname.assign("KAQLYTHCWLVMHUKNBJSLTXJTTYVVWCOVTOHQISPOPKEVWISNWQWLWOVRGYREXBKZXFUJMSGSXGERGMYDXZAHQMFXAGVBOSCKKPLCYAFUPRHKNZDPLZRJKEFJKYZDPHMSOOIAEOQLBBRGHZGVMQNAPICQYJAUNUWHTBPYJZJBLCBHRCCNXGEPRIDCJIBXIGINWAQAMHLMXZYMVANDRTFSENVRCZEJWFOGUZFEUIXTTKQ");
    msg.action = 230U;
    msg.grouplist.assign("DMDBCHFOYUWPSJTHPJEPXSTTFYKXBXYYQFYSXHLHYIRVGTSFADSRJXCMKIUHWZOWZFQJCADJUMXIKLYTIELWKFRERDGBWKGIGQPCNAPDDAHPVNMIMGDEA");

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
    msg.setTimeStamp(0.9200643738198405);
    msg.setSource(50832U);
    msg.setSourceEntity(230U);
    msg.setDestination(7753U);
    msg.setDestinationEntity(56U);
    msg.groupname.assign("VCQUGAMBIDXACOPXREXRVHTUAUNVABOWKXQDJRYADQFHYAKPHBETVHHFUG");
    msg.action = 107U;
    msg.grouplist.assign("XJUKKRFFGJGJRQNZNKOFFNUMCNJOYFAFMHISFAYNUVQP");

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
    msg.setTimeStamp(0.04905109689874487);
    msg.setSource(11574U);
    msg.setSourceEntity(203U);
    msg.setDestination(64382U);
    msg.setDestinationEntity(190U);
    msg.value = 0.09184006108780329;
    msg.sys_src = 9171U;

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
    msg.setTimeStamp(0.7466119841664255);
    msg.setSource(7147U);
    msg.setSourceEntity(93U);
    msg.setDestination(46955U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7172435399568962;
    msg.sys_src = 37300U;

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
    msg.setTimeStamp(0.714834678878559);
    msg.setSource(58877U);
    msg.setSourceEntity(46U);
    msg.setDestination(21504U);
    msg.setDestinationEntity(141U);
    msg.value = 0.8886072202847874;
    msg.sys_src = 56841U;

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
    msg.setTimeStamp(0.17113225551681777);
    msg.setSource(23294U);
    msg.setSourceEntity(16U);
    msg.setDestination(16769U);
    msg.setDestinationEntity(15U);
    msg.value = 0.40972848087744984;
    msg.units = 222U;

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
    msg.setTimeStamp(0.6418151463337446);
    msg.setSource(30442U);
    msg.setSourceEntity(125U);
    msg.setDestination(5441U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3933518035467314;
    msg.units = 71U;

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
    msg.setTimeStamp(0.29170561127777306);
    msg.setSource(42253U);
    msg.setSourceEntity(51U);
    msg.setDestination(34799U);
    msg.setDestinationEntity(39U);
    msg.value = 0.15319754739821756;
    msg.units = 145U;

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
    msg.setTimeStamp(0.9148073512714405);
    msg.setSource(58078U);
    msg.setSourceEntity(0U);
    msg.setDestination(50445U);
    msg.setDestinationEntity(21U);
    msg.base_lat = 0.3880010438546281;
    msg.base_lon = 0.34738423471036584;
    msg.base_time = 0.2833943902252116;

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
    msg.setTimeStamp(0.24835612449917044);
    msg.setSource(14884U);
    msg.setSourceEntity(221U);
    msg.setDestination(9626U);
    msg.setDestinationEntity(150U);
    msg.base_lat = 0.5231500046979219;
    msg.base_lon = 0.9247339736190062;
    msg.base_time = 0.5099186438778588;

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
    msg.setTimeStamp(0.7413049810564218);
    msg.setSource(10076U);
    msg.setSourceEntity(122U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.484062645215378;
    msg.base_lon = 0.6319125667648957;
    msg.base_time = 0.8110148742306229;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 45153U;
    tmp_msg_0.destination = 21350U;
    tmp_msg_0.timeout = 0.7076259860242214;
    IMC::PlanControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 37U;
    tmp_tmp_msg_0_0.plan_id.assign("JVNQXIQJLBGBEBZDBNURPLDTVUZYSCVTGYIPRELAVMMWAOIJZDGUCUCHWBEHFVPWQTFNXTOPFGFJAXOHZDRGHUCKFJCFLMIZWNAKEQZXGIGHKYAPYMKCMNLZQACYDQDOTLKRVFVBHBTISORUJJMIOLXFLKXXOKRFNIJPG");
    tmp_tmp_msg_0_0.plan_eta = 578027582;
    tmp_tmp_msg_0_0.plan_progress = 0.32180496843724504;
    tmp_tmp_msg_0_0.man_id.assign("ECQMFORNUCAVOTEWWFPNOSAYEQFDYWIAMMOGUKARJBHXKDALOLKSVARMKGIMTWWLR");
    tmp_tmp_msg_0_0.man_type = 5743U;
    tmp_tmp_msg_0_0.man_eta = 421670664;
    tmp_tmp_msg_0_0.last_outcome = 174U;
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
    msg.setTimeStamp(0.6066283833587716);
    msg.setSource(35765U);
    msg.setSourceEntity(57U);
    msg.setDestination(53629U);
    msg.setDestinationEntity(82U);
    msg.base_lat = 0.46548751851948444;
    msg.base_lon = 0.1823712372285905;
    msg.base_time = 0.1972237203175914;
    const signed char tmp_msg_0[] = {50, -9, 120, -29, -67, 98, 4, 55, 81, -120, -108, 107, 79, 46, 88, -122, -68, -71, -54, -70, 27, 76, -73, 17, -13, -122, 57, 33, 21, -19, -31, 34, -11, 66, 57, 97, 94, -105, -25, 53, 126, -19, 124, -84, 72, -70, 68, -112, -83, -6, -51, -113, 53, 15, -100, 91, -19, 40, 116, 91, -102, 66, 36, -28, 102, 35, 35, -69, -94, 109, -42, -24, 75, 55, 65, -30, 90, 120, 118, -78, 51, 80, 89, -13, 2, -41, -8, 87, 96, -79, 77, -44, -38, 58, 95, 49, -127, 57, 81, -13, 66, 8, 100, -40, 46, 64, -74, -47, -24, 102, 105, -6, -95, -50, -56, 68, -25, -69, 125, 111, -46, -59, 44, 48, 100, -18, 44, 52, 51, -95, 40, -49, 45, -74, 34, 83, 1, 10, -23, -77, 75, -40, -68, 27, -104, -22, -68, 77, 81, 108, 54, 17, 100, 67, -88, -31, 41, -86, 20, -115, -13, 34, 103, 35, 69, 64, -93, 70, 47, -33, -10, 11, -41, -16, -123, 76, -76, -44, -44, 9, -108, 26, 87, 111, 71, 73, 61, 51, 121, 44, 27, -74, -13, -73, -79, 18, -73};
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
    msg.setTimeStamp(0.8465836047368693);
    msg.setSource(49821U);
    msg.setSourceEntity(144U);
    msg.setDestination(12948U);
    msg.setDestinationEntity(70U);
    msg.base_lat = 0.5197376659635157;
    msg.base_lon = 0.40078998558794077;
    msg.base_time = 0.12993651245691884;
    const signed char tmp_msg_0[] = {-85, 112, 14, 18, -123, 79, 26, -49, -71, 50, -33, 121, -11, -95, -86, 44, -42, 97, 86, 92, 24, -58, 18, 86, 33, 110, -74, 35, 45, 118, -123, 38, -98, -11, 16, -57, -41, 49, 13, -61, -98, -121, -111, 85, -61, -100, -122, -4, -29, -17, -41, -22, 93, -120, -102, 67, -114, 106, 22, -81, -50, 30, -74, 69, -120, 86, 56, 54, -120, 11, 73, -83, -53, 94, -96, 29, -67, -1, -25, -70, -110, -44, 9, -102, -66, -35, -102, -102, -120, 95, -92, 97, -97, 100, 61, -127, -41, -67, -65, -50, -77, 34, 42, 58, -59, -68, 45, -118, 13, 50, 35, -73, -54, -36, -9, -30, 38, 105, -117, -80, 2, -33, -124, -59, -93, 101, 53, 20, 101, 35, 62, -51, -106, -9, -80, 115, -8, 30, 74, -104, 117, -100, -62, 123, 120, -47, -80, -66, -122, 121, -44, -115, 8, 120, -23, -128, -100, -35, 20, 5, -75, -84, -79, -40, -36, -19, -91, -5, 14, 84, -15, 87, 19, -114, 6, -42, 91, -12, -21, -57, -93, 36, 116, -81, -66, 79, 117, 59, 87, -74, 79, -32, -18, 95, -90, 45, 14, 113, 86, 92, -75, 1, 27, 89, 80, 50, -105, 63, 9, 43, -16, -33, -125, -87, 2, -117, 45};
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
    msg.setTimeStamp(0.9688900433237408);
    msg.setSource(2547U);
    msg.setSourceEntity(165U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(162U);
    msg.base_lat = 0.2911799872466513;
    msg.base_lon = 0.23864395513365;
    msg.base_time = 0.5850443671888844;
    const signed char tmp_msg_0[] = {-42, 52, -6, 15, -116, 23, -96, -17, -26, 93, 28, 85, 87, -55, -100, -56, -29, -9, -13, -110, 15, -56, -25, 58, 63, -67, 97, 31, -127, 81, -53, -123, -51, 60, -51, -122, 18, 125, -16, 29, 18, -75, 72, -31, -24, -94, 103, -121, -25, 50, -127, -74, 81, -59, -83, -13, 30, 72, -53, -112, 94, -116, 67, 8, -56, 69, 117, 86, 76, 13, 106, 16, -106, -62, -99, 69, 61, -105, -37, -101, 100, -13, 37, -3, -47, -61, -52, -125, -6, 116, -8, -1, -128, 112, 70, -17, 88, -79, -126, 13, 62, 68, 60, -113, 59, 89, 29, 56, -20, -77, 88, 21, -80, -65, 72, 11, 56, 18, 24, -91, 13, 71, 50, 54, -115, 90, 35, 106, -38, -110, -70, 84, 23, 125, 104, -62, 22, 82, -62, -77, 70, 24, -106, -107, 1, 37, -53, 57, 66, 107, -111, 24, 59, 51, 115, 79};
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
    msg.setTimeStamp(0.04870188743810533);
    msg.setSource(25781U);
    msg.setSourceEntity(242U);
    msg.setDestination(31306U);
    msg.setDestinationEntity(132U);
    msg.sys_id = 62630U;
    msg.priority = 51;
    msg.x = -31110;
    msg.y = -11768;
    msg.z = 30992;
    msg.t = -5561;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 40U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("MAQUSFZDFYHEEREGIWSTWWACELKHXVMPJYAWQDJQTGNEJWTYPWKFUZGLXOJFWCOQBUMXHYSAFUKEZTFXGDTIOBUXNOHITCAXVSGKQMVKPDFNFGDZRIBLKWLXXMDQDXPLS");
    tmp_tmp_msg_0_0.description.assign("LEUWKLNFHZKWVZQQHYXRIZOLFHXZGPOYIUZXUPOZIKTRBMBHWOD");
    tmp_tmp_msg_0_0.vnamespace.assign("ERQNXUMYZCPMXOKASTCVLXFVWBKWTKLPBMUVLEUZBJOMYIVBIQJPFBBTRPAQAFTFLUXKRSWRUPLIFDOJOZKA");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("YRABFJSJUUKILHFQNLMPNACOBSFKWMYHISGGALOKNESWZISFQWEZAOZDXRXSJXQCKADEUQMRXCYVBJQLCNONHDOFZHLUBTWPOSTJPRGYYSMHXXNVUJTQLOBNXTDWECUHIJQEEGZFKCELPBRVOGHDATDLRJYVFIMTTHAW");
    tmp_tmp_tmp_msg_0_0_0.value.assign("IZELPMDJQVTOZPCBFPEKQAMDIOJRSVYYCXTPVNQUPIGGFLWQBVBSVCHJYILCYBHMHROENBLRKOWKIZFTEUJAD");
    tmp_tmp_tmp_msg_0_0_0.type = 97U;
    tmp_tmp_tmp_msg_0_0_0.access = 95U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("RKMBQWNTSMJGXEMFTWKRNAMCZVIENOGMCYFEKUSNCDQYUGTNSBPTJXFGNFLYARMBVOAUWLCTIUCATBLGEEBAZ");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("PJTMDASYKWTATZKURQIONDSKIOXXSHGCLFQIVXYLYWFTRNBLPPSUJOMHMRKBONEKLKSLFRBGEQQHSEANDQAADYEUHUMRQBKWFQOUGVCXDNXZEJACROPWQZDJFIMZHHEMNLOKGYJFT");
    IMC::StationKeepingExtended tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.06146895708515665;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.15299428262207848;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.21579176443611303;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 248U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.radius = 0.20158864629147344;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.duration = 38266U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.44820615322312307;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 222U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.popup_period = 37666U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.popup_duration = 37815U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.flags = 15U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("JZKTOMODKMVIWAZNAQDUGHBVKZCKCDEQASHMCUEAKVEJERCHFBERUCWQYUPAITPZTDFPCNVNSSTBGWRBYATIILTSMQORMTPMDKXVJVZJYHLHRKNHQIRGQLYGMZXPLGISWPFWTESLLOOFHEDVHHONKACLXFXUVIAWQKGXDGIXWBCGLZORFUJBKGVSQTPBDBGMPCYYJPWJTMXJUAOMDZFPSEBSRZRJANVRYULDFXNWYXYFEZCY");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::FormationEval tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.err_mean = 0.5446929389733118;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.dist_min_abs = 0.8897401261241659;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.dist_min_mean = 0.5812841347564383;
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.source_man.assign("BLGSNAXVWPGJWBMAJNMIPRHJSOQBODTJPEHYNUVGFRKEJBNTUKEZEQLFCYDHYPDDNWBKLFOCDDWNXDZFKCHELRAZYGSMTFKUIQRWLTLPXCBQBAGTVGEPQBYFTHLIKHFLLARWNUVWNAOIRXPISWAPRYASEXUYQSJGCPSNROXTSYDVISZVUSQZFHXTZKMTVMQMOIAIXIROCQUAHHBJNMPZKGGJXELZJCFEEVQWGZUCMCYKWOC");
    tmp_tmp_tmp_msg_0_0_2.dest_man.assign("PELEWDITCGRHWQUUUUMIFKDWEFRBJPFXHBWPIORNIT");
    tmp_tmp_tmp_msg_0_0_2.conditions.assign("ZBEBTMMZUIVAALNVWMYQSACFAPRQOYUTSMYVNENYSMNVBJPQFHTZUGGRBDIHZSLSWSGMFHUCCCWUIUOZWJVSEXACLWRGH");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_2);
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_3;
    tmp_tmp_tmp_msg_0_0_3.enable = 196U;
    tmp_tmp_tmp_msg_0_0_3.mask = 3285846033U;
    tmp_tmp_tmp_msg_0_0_3.scope_ref = 1196836470U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_3);
    IMC::FollowRefState tmp_tmp_tmp_msg_0_0_4;
    tmp_tmp_tmp_msg_0_0_4.control_src = 58970U;
    tmp_tmp_tmp_msg_0_0_4.control_ent = 6U;
    IMC::Reference tmp_tmp_tmp_tmp_msg_0_0_4_0;
    tmp_tmp_tmp_tmp_msg_0_0_4_0.flags = 36U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_0.value = 0.7862750153238514;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_0.speed_units = 40U;
    tmp_tmp_tmp_tmp_msg_0_0_4_0.speed.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_1.value = 0.6902852487292036;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_1.z_units = 188U;
    tmp_tmp_tmp_tmp_msg_0_0_4_0.z.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_4_0_1);
    tmp_tmp_tmp_tmp_msg_0_0_4_0.lat = 0.5114712307702378;
    tmp_tmp_tmp_tmp_msg_0_0_4_0.lon = 0.39321604042346814;
    tmp_tmp_tmp_tmp_msg_0_0_4_0.radius = 0.41322526887921285;
    tmp_tmp_tmp_msg_0_0_4.reference.set(tmp_tmp_tmp_tmp_msg_0_0_4_0);
    tmp_tmp_tmp_msg_0_0_4.state = 135U;
    tmp_tmp_tmp_msg_0_0_4.proximity = 191U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_4);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.26167072917281864);
    msg.setSource(50586U);
    msg.setSourceEntity(42U);
    msg.setDestination(63233U);
    msg.setDestinationEntity(252U);
    msg.sys_id = 3373U;
    msg.priority = -90;
    msg.x = -11160;
    msg.y = 28478;
    msg.z = 1901;
    msg.t = -1551;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.14549409059509022;
    tmp_msg_0.lon = 0.29748172286054253;
    tmp_msg_0.alt = 0.7056812577896032;
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
    msg.setTimeStamp(0.27236932841163797);
    msg.setSource(47627U);
    msg.setSourceEntity(220U);
    msg.setDestination(8185U);
    msg.setDestinationEntity(61U);
    msg.sys_id = 35905U;
    msg.priority = 125;
    msg.x = -29344;
    msg.y = 24358;
    msg.z = 7951;
    msg.t = -20124;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.11546981768191211;
    tmp_msg_0.base_lon = 0.8167513349541717;
    tmp_msg_0.base_time = 0.7570974106712978;
    const signed char tmp_tmp_msg_0_0[] = {-113, 57, 86, -128, -34, -72, 93, -101, 89, 69, 119, -94, -46, -70, 42, -43, -58, 67, 16, 65, 98, -17, -127, -88, 49, 97, 29, -29, 29, -48, 66, -65, -50, -15, -51, -2, 30, 104, -121, 52, 6, 95, -108, 22, -51, 43, -15, -72, 20, -65, -95, -16, -55, -79, 35, 14, -98, 8, 106, 11, 22, -19, -100, -32, -3, -81, 35, 5, 21, -29, -49, 46, -33, -92, -47, -57, 114, 76, 96, 67, 50, -18, -59, 21, -67, -119, 110, 66, -61, -105, 115, -37, -34, -30, 113, 22, -29, 46, -101, -41, -89, 101, 71, 21, -84, 63, -127, -20, 73, 97, 32, -43, 27, -23, 57, -86, 41, 68, 45, 55, -113, -76, 7, 47, -86, -115, -4};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7255776188411474);
    msg.setSource(48293U);
    msg.setSourceEntity(141U);
    msg.setDestination(6185U);
    msg.setDestinationEntity(123U);
    msg.req_id = 41868U;
    msg.type = 229U;
    msg.max_size = 7570U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9788086800766544;
    tmp_msg_0.base_lon = 0.7467185183760183;
    tmp_msg_0.base_time = 0.017564198980688395;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 41805U;
    tmp_tmp_msg_0_0.priority = -30;
    tmp_tmp_msg_0_0.x = -28540;
    tmp_tmp_msg_0_0.y = -12545;
    tmp_tmp_msg_0_0.z = -4468;
    tmp_tmp_msg_0_0.t = 2911;
    IMC::Pressure tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.6547146237816601;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.31073364900140144);
    msg.setSource(9515U);
    msg.setSourceEntity(20U);
    msg.setDestination(5207U);
    msg.setDestinationEntity(238U);
    msg.req_id = 17544U;
    msg.type = 56U;
    msg.max_size = 10746U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8462343789950149;
    tmp_msg_0.base_lon = 0.9792639962860741;
    tmp_msg_0.base_time = 0.9272122018426924;
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
    msg.setTimeStamp(0.8253240920802942);
    msg.setSource(41381U);
    msg.setSourceEntity(218U);
    msg.setDestination(11527U);
    msg.setDestinationEntity(225U);
    msg.req_id = 58931U;
    msg.type = 145U;
    msg.max_size = 51773U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.7433688845220868;
    tmp_msg_0.base_lon = 0.887101060359078;
    tmp_msg_0.base_time = 0.16839408030678393;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 7949U;
    tmp_tmp_msg_0_0.priority = 16;
    tmp_tmp_msg_0_0.x = -21488;
    tmp_tmp_msg_0_0.y = 10657;
    tmp_tmp_msg_0_0.z = -15013;
    tmp_tmp_msg_0_0.t = -15538;
    IMC::GroundVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.validity = 117U;
    tmp_tmp_tmp_msg_0_0_0.x = 0.7565674996273097;
    tmp_tmp_tmp_msg_0_0_0.y = 0.5931440322833982;
    tmp_tmp_tmp_msg_0_0_0.z = 0.864751030254677;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.8134603408867307);
    msg.setSource(1607U);
    msg.setSourceEntity(242U);
    msg.setDestination(23610U);
    msg.setDestinationEntity(98U);
    msg.original_source = 36956U;
    msg.destination = 20391U;
    msg.timeout = 0.6177566642501909;
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5674153288196926;
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
    msg.setTimeStamp(0.9881094902129568);
    msg.setSource(11098U);
    msg.setSourceEntity(161U);
    msg.setDestination(41607U);
    msg.setDestinationEntity(52U);
    msg.original_source = 64530U;
    msg.destination = 45886U;
    msg.timeout = 0.5485006767508841;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.4175872648083524;
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
    msg.setTimeStamp(0.3885263308592496);
    msg.setSource(33693U);
    msg.setSourceEntity(17U);
    msg.setDestination(53765U);
    msg.setDestinationEntity(207U);
    msg.original_source = 18539U;
    msg.destination = 24359U;
    msg.timeout = 0.889946684332371;
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 124U;
    tmp_msg_0.file.assign("ZZWSPIFSEIVIOZIKVXP");
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
    msg.setTimeStamp(0.030307797772717637);
    msg.setSource(30764U);
    msg.setSourceEntity(4U);
    msg.setDestination(62539U);
    msg.setDestinationEntity(63U);
    msg.type = 41U;
    msg.comm_interface = 48054U;
    msg.model = 53508U;
    msg.list.assign("SJGADZKZLGYUCCCKLDQA");

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
    msg.setTimeStamp(0.9910745749609705);
    msg.setSource(65432U);
    msg.setSourceEntity(137U);
    msg.setDestination(42384U);
    msg.setDestinationEntity(104U);
    msg.type = 224U;
    msg.comm_interface = 47704U;
    msg.model = 45711U;
    msg.list.assign("EUUAWEGUFAVJFYNZVUETHDELDNKAKPBJERAZRUPHTIKBSOTUQWZXQGVLEPDVAFQCYUMMWTUPCFGVUSINAUWSKQFIJGWRZIWQNMARVECMSWOEBXZLMHLN");

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
    msg.setTimeStamp(0.72207922322231);
    msg.setSource(44498U);
    msg.setSourceEntity(27U);
    msg.setDestination(8143U);
    msg.setDestinationEntity(108U);
    msg.type = 25U;
    msg.comm_interface = 9222U;
    msg.model = 45023U;
    msg.list.assign("LSNRDTILUXEDSQCLFKEXRHRBZCSTOHDUESPHVMMUABBRAGGBPNDTYXGSQVMWVKRCFAFXYTNDWYXFQTFGVWBJYYTPHWMLJCAVRKHZVKGJHZQJHJOBKBBECERISUITTJWPZKFEL");

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
    msg.setTimeStamp(0.7754205384267258);
    msg.setSource(16719U);
    msg.setSourceEntity(64U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(3U);
    msg.type = 206U;
    msg.req_id = 3076871662U;
    msg.ttl = 32641U;
    msg.code = 44U;
    msg.destination.assign("XHZBFYOKDJZDFCIZLJEHIULMJKJGJEVYOVGRDADCWNMPCNSTPZYINLPDHFUMMJXSRKLEDSDDXISJNWAUZSKFVPRHANWCTGNEEGSTWJRMTAWWUJOLQBUMGNRYXAVHIIORCFBVHGORKCGCQQUNHQV");
    msg.source.assign("AMMSOUADEHYFUIKLHBQZOEECRHOZLNFMSXVKUDKCQJQYNEADCGZOUPLMTRYVPJIFHLKPWOELYNAFQVKTMNIZKMJJIDAVISRWXLZAODOXHARXHDZTFPGXCNHEQZBMECQVBEVIIGDYUHQVQURAZGJQDKUFFEUBSSGWCZTPWJJUWXHEJNGWPVDGRXQYGNCYFBWTWMICSTJXOYOSWHKFBSLNRBYNRTMKFACWXMOILUILSRPLTDXNVPRVYJKBBGASBP");
    msg.acknowledge = 34U;
    msg.status = 31U;
    const signed char tmp_msg_0[] = {-125, 63, 61, 52, 105, 51, 102, 10, -124, -88, 119, -10, 102, -40, 74, 5, 103, -39, 88, 109, 74, 108, 51, -68};
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
    msg.setTimeStamp(0.9882869457706621);
    msg.setSource(22968U);
    msg.setSourceEntity(130U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(181U);
    msg.type = 136U;
    msg.req_id = 2147422391U;
    msg.ttl = 6706U;
    msg.code = 117U;
    msg.destination.assign("FWPOFLDCNVPFAGKHGYXNWWRHAWZEKJYAIALAWXVOXPYLQBYPBRVRCDLYRARNUNDJXISIOXUDMUZJBWQWTCQNSYSQIVKLOZCNJBBJSHZASGKGDHREMGJIREOMFOUTLMHTKDORKLIHSKPPZCTIYHC");
    msg.source.assign("OYGRECFHCJMLUXXLPWKRVYKJILXWTRAIZBMNPTKQUSYDJTILBQLXXORMYBIGOWQONCVVNWYODYFVU");
    msg.acknowledge = 30U;
    msg.status = 73U;
    const signed char tmp_msg_0[] = {-18, 94, 64, 91, -105, 86, 25, 53, 107, 23, -108, 110, -33, -56, -48, -73, -72, 110, 126, 15, -15, 28, 12, 114, 84, -39, -87, -108, 34, -10, 70, 36, -46, -32, -56, 22, -112, 79, -2, 55, 115, 38, 13, 90, -12, -101, -2, 64, -16, 31, 8, -68, -114, -64, 31, 86, 22, -10, 122, -116, 8, 41, -73, -31, -109, 0, -106, 111, 46, -120, -68, 36, -37, 86, -71, 18, -6, 126, 101, -54, 94, -28, -99, 40, 106, 120, -68, 72, -25, 67, 112, 42, -46, 93, -51, 113, 119, 20, -20, -13, 32, -10, -71, 98, 12, -58, 78, 95, -11, -19, -121, 9, -56, -107, 4, 90, -104, -73, -40, -46, -42, 103, -72, -9, -36, -76, 118, 34, 59, -20, -4, 72, -6, -74, 15, 63, 16, 44, -102, -49, 86, 110, -24, -120, -102, -117, -121, -18, 17, 21, -9, 101, 63, 20, 25, -20, 107, -111, -25, 15, 99, 79, 38, -112, -110, -73, 70, 67, -11, -41, 112, -10, -27, -2, 66, 106, 56, 11, 49, 1, 0, -66, 49, 12, -113, -97, -60, -15, 96, 96, -83, 56, 86, 35, 40, -14, 56, 110, 30};
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
    msg.setTimeStamp(0.40428031829431);
    msg.setSource(12638U);
    msg.setSourceEntity(43U);
    msg.setDestination(45818U);
    msg.setDestinationEntity(210U);
    msg.type = 61U;
    msg.req_id = 911836719U;
    msg.ttl = 5903U;
    msg.code = 39U;
    msg.destination.assign("PWIVWMTDROVJNPLCIDZXXIKNHMJHGKOEXCHYZSUFOXAGQIXDSU");
    msg.source.assign("WMWHSVNSCEFNGLUNYTOGBNCWMJHRHQYEAIKOFMIQUNJMYOWQUHFEUHXDMNHEZLNWPDKJCISKTJPKYTB");
    msg.acknowledge = 76U;
    msg.status = 134U;
    const signed char tmp_msg_0[] = {51, -90, 12, -63, -5, 57, -61, -65, -28, 37, -99, 100, -2, -110, -60, 126, 23, -126, -124, 53, 118, 65, 0, -39, -47, -54, -102, 88, 11, 54, 89, -62, 28, -112, 52, -1, -57, -13, 86, -47, -19, -110, 125, 117, 21, -24, 97, 14, -38, -122, 59, -89, -28, 62, -122, -15, 47, -79, 59, 80, -80, -118, -30, 81, -1, 108, 23, 82, -55, -103, -120, -67, 34, -39, -17, -114, -87, -105, -12, -123, -35, -41, -103, -80, -61, -100, 27, 4, -39, -61, 98, 16, 86, -72, -67, -32, -26, 76, 66, 24, -32, 54, 41, 64, 10, -1, -103, 87, -94, -90, -33, 73, 60, -35, -115, 52, 14, 16, -68, -76, 88, 57, -94, 119, 107, 11, -128, 23, -46, -76, -13, -61, -78, 124, 90, -46, -94, -27, 72, 45, -1, -84, -31, 74, -19, 121, -104, 55, -26, -15, 83, -92, -125, 78, -65, 4, -24, -33, -115, -78, -12, -28, -24, 33, -75, -73, -66, -84, 16, 120, -78, 110, -40, 110, 115, 52, -83, 116, 16, -95, -128, -67, 19, 91, 70, -14, -98, -49, 117, 104, 95, -112, 53, -29, 39, -97, -1, -87, -96, -96, 68, 17, -101, 30, -63, -16, 117, 122, 14, 64, 106, -50, 19, 4, 70, 12, 125, -17, -55, 56, 109, 110, 48, -55, 27, -94, -37, 36, 103, -22, 0, 92, 78, -39, -77, 60, 113, 97, 105};
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
    msg.setTimeStamp(0.43374802372106336);
    msg.setSource(61871U);
    msg.setSourceEntity(95U);
    msg.setDestination(57145U);
    msg.setDestinationEntity(111U);
    msg.id = 143U;
    msg.range = 0.43795231720602046;

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
    msg.setTimeStamp(0.9617261594315639);
    msg.setSource(26417U);
    msg.setSourceEntity(148U);
    msg.setDestination(44227U);
    msg.setDestinationEntity(101U);
    msg.id = 129U;
    msg.range = 0.6909683546654879;

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
    msg.setTimeStamp(0.5158407267781068);
    msg.setSource(36320U);
    msg.setSourceEntity(0U);
    msg.setDestination(55121U);
    msg.setDestinationEntity(92U);
    msg.id = 123U;
    msg.range = 0.16251137298518192;

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
    msg.setTimeStamp(0.33542952578635565);
    msg.setSource(21817U);
    msg.setSourceEntity(107U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(120U);
    msg.beacon.assign("CQKGDTAZIUIGTPVTEMFCEFDDVHEMBKACYICUPWZHSSZZAJOHREPATJSRJUXCWBFLGOMUJYGCRZGNEAOJDYZKCHHZMTGORODBMTLXDWI");
    msg.lat = 0.7976683742160618;
    msg.lon = 0.2090468688477255;
    msg.depth = 0.982567832930196;
    msg.query_channel = 22U;
    msg.reply_channel = 53U;
    msg.transponder_delay = 128U;

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
    msg.setTimeStamp(0.8937113218748162);
    msg.setSource(58617U);
    msg.setSourceEntity(100U);
    msg.setDestination(64806U);
    msg.setDestinationEntity(241U);
    msg.beacon.assign("ROFBDFERZBBYHAGXKTRQAKXIOXKLBYLWEICNLULLTQUJHURDHQZFDSBZYLSAZCFRHOUHYXPNKOHUKOCGPGJJMPOHCFMSSCAVNPLCCWKDFXMJNVTVAVOAVISQDNTTVDYQEIBFFJJYFTELXOSTIPGAGWJIXYOIAQCMMYMADNZJVBLXNWQTZXUSPLZNJFRZEXKEWEGHGQBQGSMAPWRCKVZUEDUTERKSHWGQETIZVGSWIYBDPUW");
    msg.lat = 0.7845293062334406;
    msg.lon = 0.34179728356624084;
    msg.depth = 0.8442481204826747;
    msg.query_channel = 151U;
    msg.reply_channel = 184U;
    msg.transponder_delay = 208U;

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
    msg.setTimeStamp(0.4577544671490339);
    msg.setSource(9012U);
    msg.setSourceEntity(76U);
    msg.setDestination(55901U);
    msg.setDestinationEntity(163U);
    msg.beacon.assign("ZGLFKJSQXTCAGSWVFYOWMERRHHRXPHISDMDJIKJZEEXUXJKEGYYTRAURUHNPGUCNLDIZAENZWJNMGNETRAWDEFKNBWLUYLREQIVYCOPDHLYSKTSKRBETFTPVNMPDQFPXOZKXSUWIGBVLALPWNYWVKMUKFHFTIJMDQMHBQOVQTBCBQQFMUGZUYOAAPVTAUZBKSLDSBBTPXFICGHCRVOCCA");
    msg.lat = 0.9670328928482853;
    msg.lon = 0.9293922708316702;
    msg.depth = 0.481505263990471;
    msg.query_channel = 21U;
    msg.reply_channel = 102U;
    msg.transponder_delay = 8U;

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
    msg.setTimeStamp(0.3262670220003654);
    msg.setSource(47352U);
    msg.setSourceEntity(183U);
    msg.setDestination(61432U);
    msg.setDestinationEntity(57U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.9929194799480413);
    msg.setSource(64793U);
    msg.setSourceEntity(126U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(69U);
    msg.op = 187U;

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
    msg.setTimeStamp(0.5360579719498609);
    msg.setSource(49582U);
    msg.setSourceEntity(197U);
    msg.setDestination(21625U);
    msg.setDestinationEntity(9U);
    msg.op = 53U;

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
    msg.setTimeStamp(0.7365500697822412);
    msg.setSource(33698U);
    msg.setSourceEntity(93U);
    msg.setDestination(632U);
    msg.setDestinationEntity(124U);
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("KVVTXJWRPYIOWPXUBBZJFDUYKWFALBWQYJVTDJUJAIENNZMYMLSUGCALUAURRKPHRHPHAEDFNNCVIWVIMRFLOMZWNEKRWXDIAMGFBWZMSZHYGCSIGUPCXXSEOQUQWPOKJQTCMEIOHCLECYANLUZZHCGFLXVMQRJPYPNCLEHAOYFFRBPBOJSRITFFQVTNYKDQGKQQHHZABDTOUCDTJRSVGMOGIBPDZSSTXSKKVAHQ");
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
    msg.setTimeStamp(0.6532413244989785);
    msg.setSource(8931U);
    msg.setSourceEntity(130U);
    msg.setDestination(29251U);
    msg.setDestinationEntity(137U);
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.3198012799011205;
    tmp_msg_0.bias_r = 0.695267887765997;
    tmp_msg_0.cog = 0.8580168977937728;
    tmp_msg_0.cyaw = 0.2526249264899242;
    tmp_msg_0.lbl_rej_level = 0.02633536102418499;
    tmp_msg_0.gps_rej_level = 0.7194189774125282;
    tmp_msg_0.custom_x = 0.16233887751486742;
    tmp_msg_0.custom_y = 0.5637273762551253;
    tmp_msg_0.custom_z = 0.5714194715958142;
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
    msg.setTimeStamp(0.7529257495054581);
    msg.setSource(16818U);
    msg.setSourceEntity(122U);
    msg.setDestination(46137U);
    msg.setDestinationEntity(86U);
    IMC::MsgList tmp_msg_0;
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 52742U;
    tmp_tmp_msg_0_0.control_ent = 166U;
    tmp_tmp_msg_0_0.timeout = 0.746466137122538;
    tmp_tmp_msg_0_0.loiter_radius = 0.4321831329485334;
    tmp_tmp_msg_0_0.altitude_interval = 0.8463770273420067;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7038294569036964);
    msg.setSource(10732U);
    msg.setSourceEntity(118U);
    msg.setDestination(49554U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.6090752009570384;
    msg.lon = 0.7067492383858991;
    msg.depth = 0.24663010662944418;
    msg.sentence.assign("DWUHHHQRCCBYECMEXPWYUIJNXIDKFOJASMGYNTAYXNRQBGLCEWTAJVCPULHUXVILHMLCZFKITCAOZMGJNWASSALIYZORACKKRVFJPQTKEBLABWFZWSXLXSRRDBETLUPDEAPGTNWUBEOZVPDVQMNYDOKJXYQGBTTVZKOXMNHQEZHTUGBOWDFWJGNIBDGZGFPMVEQCZKMZRSKJIPOORIILPDYYAFMNFNHVPXOSGQQMVKRD");
    msg.txtime = 0.09971601371097938;
    msg.modem_type.assign("YHCLPPFWIOCZNFIORRXBLPHTIOMWOATKTTWODGUUJMGVSAEIMUCYJTCECXWUUCZZJYQWPSPTEBKYJHOBLVJNVHVKCNLMTQLV");
    msg.sys_src.assign("RGTEYILGHVQWGKVXBMMTJHZBYAFFXICNGRUGMONTEQEIAZDCXOVAYABPRUTAPZPYEIOMMIPZPWCLSFJDZSGVVTYBNOCMNCABKSTUEWYZEKXVSIHLMKWBVVRCTGOHLMFIBUTKQJSYCXAYJSWPQNFQ");
    msg.seq = 43342U;
    msg.sys_dst.assign("SKQOYZDOYAIRREMCLFFQCFANWZNPDNABYUIDFXTUMUQYDEXAJARITZBQVXNGWFDJBVSDIUEHKBELSXSPSRKUVUJVIJZG");
    msg.flags = 167U;
    const signed char tmp_msg_0[] = {-100, 19, 12, 22, -37, 109, 72, -104, 70, -21};
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
    msg.setTimeStamp(0.7315207971468918);
    msg.setSource(42496U);
    msg.setSourceEntity(235U);
    msg.setDestination(51503U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.4428527074984292;
    msg.lon = 0.15697523108788092;
    msg.depth = 0.41827713561451885;
    msg.sentence.assign("OAEIUUVGJFUDRPSVQWTASSMALZEJARPXZKXILYAAASJRFEDXFKSJRWORODGSNLCPRIOJYOBMT");
    msg.txtime = 0.3661434024858484;
    msg.modem_type.assign("ONPYBOXHLLESAMMYAPZNRZBWCRUZBOTOWPDLNOMIKVHVXHTTEYQVZWNURFBQSSKBTSZFJBDUVDUPNAPIWUIRLSYEDMAEIVUQQSMIJJCXEHPGCPMHWUNFXEIXTFD");
    msg.sys_src.assign("ETHXKBACLHTSGIKOELICCXJBLYHEHVVQGCJZIMFVSNUGQRMZBABOPLPEAKJHHPTDKPVDIOCXQJVANOBTRDZIAFCFXFTIQNL");
    msg.seq = 4036U;
    msg.sys_dst.assign("LGWILVXLOAFKORTJKYCMEDIVGBTMCYZYMNONGASYRYKHEGPGSDDERHJZXOQRRCMCXUAMQVPVRHGLUGFXTCDSOIBPYCZVUNDMBDUAENSVSWVRWHNFPTUTXWEBYBNOVIBRMBRPEJZUOEYULVGKLIUOIDZEBSAJHBBFIJNHZPFDCXAGAOMAFZ");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {90, -127, 94, -37, -84, 2, 102, 106, -5, 104, 73, 28, 23, -122, 96, -58, 73, 85, -37, 44, -30, 18, -54, -83, -78, 18, 99, -14, 58, 73};
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
    msg.setTimeStamp(0.8071811175100431);
    msg.setSource(18264U);
    msg.setSourceEntity(78U);
    msg.setDestination(24275U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.9474907348293264;
    msg.lon = 0.21166935001767995;
    msg.depth = 0.16112974877307507;
    msg.sentence.assign("SYRZEFAQCSXDIAPEPLRJJHYTVLEMAFUTLQTXPSHZUIWWYMUSMKFPWYZNAIGBPKPVLYTCQQHBKTDOFPRQNCGTGIMGLRXLIKNOHJUCVUZERPYHRFAZMAJISLS");
    msg.txtime = 0.5044770534701783;
    msg.modem_type.assign("MVUMTMJOKYMCWTPWXVNFIRJQCXCODSXZEIOHGBMGYSLYBHUTDPWPAWKNEZFNIQMEFDPSCIFPRRODVAKEVDCXUFNFEHBUIHTKOLZISYEALRKHARCBJNWTZDTUIBRBJYUQHATDYMPVFCEWSHOOVSIXEGFHJZIVEMZCNAXCGAOGXUMY");
    msg.sys_src.assign("VLBKIFURVFGXPQTCAUZJSKYXDXNWITXQCNMOXODCKMUJQSNMBPRZJULNTWPYWHKSQIGEQTJRUZFFHSKJABKJOFVRERTPZMXHWOEOMOPMVHOBXBIZCGELQEWIGTLQLCHAMUFKVGCWCFORTVELIKYGZABYDLHHEGWUBBTSMPJNDSMVEPDVEPASWRBGLLKWZHKJPNNDAQQLFVQUBYZYRHZUMITSXATXUXFYNPINDSGJCDZRRHAFIANIAOCDDYGS");
    msg.seq = 11473U;
    msg.sys_dst.assign("ODHOOEZYLBSRRXSUXZEAWCUAJVPOMULLBXMHFQCPMZVYKWRUWEGB");
    msg.flags = 238U;
    const signed char tmp_msg_0[] = {-45, 96, 10, -115, -80, 84, 84, -69, 50, -120, 122, 17, 87, -20, 55, -100, -42, 36, -51, 123, -50, 102, -58, 79, 3, -28, 13, 29, 88, 19, 107, -125, 42, -104, -26, 18, 63, -30, 98, -119, 21, 43, 122, 103, 39, -26, 74, -19, -75, -43};
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
    msg.setTimeStamp(0.28231507899929775);
    msg.setSource(7168U);
    msg.setSourceEntity(163U);
    msg.setDestination(16848U);
    msg.setDestinationEntity(5U);
    msg.op = 134U;
    msg.system.assign("LJVJKHXMOQHFXIYPPCEVAINGTNGUNABKTNEQGTPBICHCNJGYNQKUWVAFYWAYCNWOLKUJFCDFLCXOASDSHPFNEIRMNWRIILMAOY");
    msg.range = 0.6482155127824331;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("RCIIDCJNVUCLSQPWBWWFVFHQKMDJJOTSSKANQDJGNOPSBSFRZHJXDKZJ");
    const signed char tmp_tmp_msg_0_0[] = {8, -33, 113, 102, 57, -5, 54, 57, 57, 98, 35, 12, -126, 27, 115, 91, -11, 87, 102, -103, -77, -33, 17, 101, 22, -125, 98, -94, -23, 13, 30, -89, -62, -120, 59, -51, -109, 115, -48, -45, -67, -47, -63, 122, -55, -88, -36, -71, -72, -82, -57, 100, 16, 19, 54, -92, 80, 32, -100, 46, 17, -99, -25, 41, -88, -12, -70, -59, 14, -36, 58, -34, -28, -36, 67, -76, 74, 110, -8, -52, 46, 72, -83, 86, -84, 114, 9, 75, 60, -123, 24, -10, -126, -100, -88, 106, -16, 33, -96, 72, 120, 2, 17, -37, -76, 8, -64, -52, -6, -5, 21, 90, -68, 91, -29, 72, -83, -73, 13, -44, 74, -86, 34, 38, 113, 121, -105, 89, -71, -107, 85, -114, 56, 111, 114, -42, -95, -111, 2, -46, -118, 42, -81, 39, 86, -40, -93, -125, 46, 66, 66, 86, -82, -43, 58, -23, -60, 24, 1, -112, 74, 116, 87, 81, 46, -38, -116, 95, -56, -35, 101, 121, -37, -22, -87, -28, -67, 76, 60};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.03376643719334316);
    msg.setSource(39241U);
    msg.setSourceEntity(172U);
    msg.setDestination(593U);
    msg.setDestinationEntity(4U);
    msg.op = 61U;
    msg.system.assign("HGBGMCPBINPNXQVTXMUZNPEHRFVIDZCBOKKNISLHQSOUWLHBFTUHXVTYHENRUAULJAQFWRTFKQKWLCTBNYIDAEMTYWLKAWAJBZDHIIKOSOMNZSPFYAVUJFVXTLIJSCPPRHUVXWPAZCRSTVYQWGNBFGGYQXJUUEERZGNWDGDMJFMKBDTCOAMDCOROJZOJGMVUYYRYGMKCFENCKVIZEXWYOKMZLRBIEVDJQEDSQCJSBLPXOSW");
    msg.range = 0.32507034907677435;
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 124U;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.294589292290124;
    tmp_tmp_msg_0_0.beam_height = 0.6957781188042172;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.value = 0.9290969474070973;
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
    msg.setTimeStamp(0.014438303425232335);
    msg.setSource(12477U);
    msg.setSourceEntity(124U);
    msg.setDestination(37532U);
    msg.setDestinationEntity(237U);
    msg.op = 2U;
    msg.system.assign("UCYQAOFSUTFNCVQKFLAWEQWPDKLMJKVNIGADRCVRXFFMCFUCUZBVAYDQMXHHCFRVRHHWEEULVELXIBYRBJKQRQIGUUEUPCUXSLXWBDLYKSVQGSHABZDXTZTGMZIVTEENDHTCWPYMWJPXOSPHJTKKOSBJRLTPTJGTYTCOYZIYOIJLJABBZDI");
    msg.range = 0.10489915174622644;
    IMC::GpioStateSet tmp_msg_0;
    tmp_msg_0.name.assign("BPRKLSVHXTMAGZROXNMYDPQJXXGDZLADYAIVUPEGSMCYJSSFC");
    tmp_msg_0.value = 90U;
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
    msg.setTimeStamp(0.17789218464777257);
    msg.setSource(14284U);
    msg.setSourceEntity(2U);
    msg.setDestination(2231U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.5484253127797527);
    msg.setSource(20463U);
    msg.setSourceEntity(185U);
    msg.setDestination(44965U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.4771315765271462);
    msg.setSource(39885U);
    msg.setSourceEntity(32U);
    msg.setDestination(9371U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.6821929833254484);
    msg.setSource(30761U);
    msg.setSourceEntity(19U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(60U);
    msg.list.assign("QTRHLMAOQBWBFUUMYCCBDQIZWZTMGHMPPVQAGKTMVPBNIFDFLZNFTVKJBJMCESCPOLRIKUBGSZOTBVEJTXTQYJOGGLBYXOZ");

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
    msg.setTimeStamp(0.7940288550890157);
    msg.setSource(55028U);
    msg.setSourceEntity(232U);
    msg.setDestination(50066U);
    msg.setDestinationEntity(119U);
    msg.list.assign("YPKRTLUKAQVJ");

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
    msg.setTimeStamp(0.22087948371134558);
    msg.setSource(53896U);
    msg.setSourceEntity(220U);
    msg.setDestination(2307U);
    msg.setDestinationEntity(190U);
    msg.list.assign("ONQMIENRZBSQIZKEGADFZMQXFJDZJHHUVEOUIPLWQBEUVJTYQCAQBDYAAJYJDJNEPHCWNBKNXHFVKPFTGRORPPWWWYZLFBQIOLXGUVCOUBXRSALPVXRECNOGWMPKSUWBRCDERTZLAQJZPQFTLCVWHTKPMNKCXZCXFNYTDUDISBGSWODDRJIVBUKPOHMKIXVXYSHKIENSTEMNASSAFDTIMOLYZFLCGTGJUGJA");

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
    msg.setTimeStamp(0.9424523527000114);
    msg.setSource(18572U);
    msg.setSourceEntity(156U);
    msg.setDestination(36191U);
    msg.setDestinationEntity(135U);
    msg.peer.assign("FWVSTAVJLSIMXAGNGNRGCVAUTSZAYPEDFSBGWNIQQRFBTNPEIEFHPZEGTWHADHZPVDBHQEYLPCDBCRUCKYJALXZKLOBLFFOJAJOEWZYQAJNBZGC");
    msg.rssi = 0.2416329978397117;
    msg.integrity = 41217U;

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
    msg.setTimeStamp(0.03312077960815685);
    msg.setSource(38669U);
    msg.setSourceEntity(236U);
    msg.setDestination(19094U);
    msg.setDestinationEntity(206U);
    msg.peer.assign("ADZDHQXJNIHTNDNSJAVIPKHAXDGBOJLBTIBNKHGSBSAAKGDCBFEGKJQNEITJDYPG");
    msg.rssi = 0.8992372210138193;
    msg.integrity = 2201U;

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
    msg.setTimeStamp(0.4657412025997629);
    msg.setSource(39571U);
    msg.setSourceEntity(186U);
    msg.setDestination(27775U);
    msg.setDestinationEntity(62U);
    msg.peer.assign("SZBCLWTYITAGUBKVSNUOKTXFSRUPUJYWVVRNWXWSADGDARKYXMPIIZLXCYHJYVJIAFSEGFRC");
    msg.rssi = 0.6885677942058747;
    msg.integrity = 39634U;

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
    msg.setTimeStamp(0.8093131824008021);
    msg.setSource(33235U);
    msg.setSourceEntity(157U);
    msg.setDestination(3572U);
    msg.setDestinationEntity(66U);
    msg.req_id = 58958U;
    msg.destination.assign("SREXJDICYHVSHORQGVKGVCDZPMNHIGXFGBRWTGPEMNZMKJETELDHVCOMEWNWCODHUZPAULYYCPISBCCDZPUORUJVOAREOHUAWYQZZKQPNYSZJWSPFXLTQZMULRGINQFFBBXCBQAFKDSOAQXITRMIQNUIFNLCBHSGDYHJRNYGEBFAWDKQABMHLPEIKTLMLDN");
    msg.timeout = 0.25498635780535495;
    msg.range = 0.0188638815844826;
    msg.type = 104U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("WVRYQPQKXXSBLZMKDFUJKYJBUYEPEAACTZPYFRSNAGPONTVWFIEOMRKLAEPDAHHNLQKNQOWDSOFCTHJZLGVECYFMQTMBFCRACMBGSTHNCOVZETJXITXDQJPSFGLUYKJIBVJUMIKCUWTOGKQIYCNBMZFUHNUEHWDRZXRWYGEXEIHITCIWWGHNUXCMBUYDXRTZPRJVOLZAHLAXJOYK");
    tmp_msg_0.service_type = 68U;
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
    msg.setTimeStamp(0.12624733115065367);
    msg.setSource(16412U);
    msg.setSourceEntity(159U);
    msg.setDestination(1441U);
    msg.setDestinationEntity(16U);
    msg.req_id = 13091U;
    msg.destination.assign("NATAMWEOJYOTOVIVACSDJTKXNGDVNFRJBUPYYVNIEAB");
    msg.timeout = 0.6895401482752491;
    msg.range = 0.19480260739773858;
    msg.type = 162U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("YDEAFIZHBXNOWYWXWVUX");
    tmp_msg_0.formation_name.assign("INAJIABKMZLZBMEYOUMVCHSFTCKIAZLEQVCLMUYEAAGHRQGVGYEHSTRXIRFLEUBWXQCVMDPSUJPNZJAOJCCPYSOPXOKQEEG");
    tmp_msg_0.plan_id.assign("QHSLGTQBMWRBSACVYFCAZCJORHHJQWOFIEGTUQNHCVNUUZLTVDULFTIWJITCXJIIQVVVKBPKNXYKVUJSAGBKPLKCOMXQDSUOZRNYBYQJQPQZXGNCERZVZCPESSXZLAMFLPUTWGWTEJMRAFDCWRKYAOKYGNYKIMOISPWFXYQMEXPJLXLGRTDNMVNZLPXYSDJFMMWASKJPHFAGNGBHLZOEWFKBRVUING");
    tmp_msg_0.description.assign("JVJLPYDVAFWTUSGFCRXTENVHZQXLFRTZLVFKPWKSWQUWXZIGMFCUZGXPQVHHTCUHODQQJRSXKCJDNWQKYSCJZOXAVAPOXPGIDRGNKZKLNUMMYUJZDLKENYABIOGJBHEWHDZUMRSMWUFLVDICFPIDTEEZJWCKOQK");
    tmp_msg_0.leader_speed = 0.7657922876593124;
    tmp_msg_0.leader_bank_lim = 0.7873600402644307;
    tmp_msg_0.pos_sim_err_lim = 0.7235862821349608;
    tmp_msg_0.pos_sim_err_wrn = 0.2964184149961109;
    tmp_msg_0.pos_sim_err_timeout = 49575U;
    tmp_msg_0.converg_max = 0.4796491067910805;
    tmp_msg_0.converg_timeout = 6910U;
    tmp_msg_0.comms_timeout = 8580U;
    tmp_msg_0.turb_lim = 0.45456404892421076;
    tmp_msg_0.custom.assign("WQSQPUNCSZHEEXELUWAPWKBFBSGTKEQENYHIVCZCJNRMPHVFCQOEQYBKUCLQZBER");
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
    msg.setTimeStamp(0.7211287013350245);
    msg.setSource(57686U);
    msg.setSourceEntity(166U);
    msg.setDestination(47417U);
    msg.setDestinationEntity(59U);
    msg.req_id = 18881U;
    msg.destination.assign("XUVVPOGHRQKUWUZYNCBGEAFMAZLRQLHZDVUIMJIOQGTXNVNOUALHCPPTNNCEIMBDNRLIGDKNHFPVVSSUAVEKLSZBTKTOQEJHRJRAEMJM");
    msg.timeout = 0.7875948410057305;
    msg.range = 0.1571342623101173;
    msg.type = 92U;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 212U;
    tmp_msg_0.value = 101U;
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
    msg.setTimeStamp(0.2887036864021676);
    msg.setSource(21998U);
    msg.setSourceEntity(236U);
    msg.setDestination(43515U);
    msg.setDestinationEntity(34U);
    msg.req_id = 31264U;
    msg.type = 86U;
    msg.status = 243U;
    msg.info.assign("BXXOMZIQNTHGUMFBWRYZLIFVBQHVMRAWWDKXSMEBBBPWHFKJPYCGQIXCNVURUOESLIVCFDJBQBWJATBKIHSCDCZTJNLFOPZGKNDXJXQCIKWYZJGCRDVEHOKHJMDRRKL");
    msg.range = 0.5933808567188479;

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
    msg.setTimeStamp(0.07688310120387432);
    msg.setSource(59568U);
    msg.setSourceEntity(248U);
    msg.setDestination(11709U);
    msg.setDestinationEntity(121U);
    msg.req_id = 32454U;
    msg.type = 66U;
    msg.status = 100U;
    msg.info.assign("VDOPDRWFYRKOEIEZSSZFEROTYOUVKJJLIAVXVCEMLZIWVDEQYCBCHHMPPCDQJHSVBGGIFJWIXMGWDHDAIMAKJHAJXTKGUQXCRBWRFLPXLEMTUTAUNZHYMTDKQGYPDCVAQGLSJWWFQARHJSTELOTWZION");
    msg.range = 0.31540004584679415;

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
    msg.setTimeStamp(0.8116971225055143);
    msg.setSource(42544U);
    msg.setSourceEntity(164U);
    msg.setDestination(53456U);
    msg.setDestinationEntity(235U);
    msg.req_id = 33219U;
    msg.type = 180U;
    msg.status = 122U;
    msg.info.assign("VMCJZHSNPRQZJTOTJAMIJQNWHJVNTGZUPYGROGMLIPDLBULPTLSBRBZQMAFOFBHNMMSZLEASPWSHIXLNKRWBIXAERGKVBTXZLALFDKXUCKESGMHGGAUOINNQTIIYPIAJCYODRNEDGRMYIHPSPXKRONEERSOHGCDTXQUEDVCLCHEZZSMZXQTYVKUKBWYCWVOHEYVPWATHFSCBDFWYQDRMWOQJUUQDKUFOFUJWGFBWVAXQVJEZKXNBC");
    msg.range = 0.6606166425842408;

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
    msg.setTimeStamp(0.15913274757213558);
    msg.setSource(39874U);
    msg.setSourceEntity(206U);
    msg.setDestination(7331U);
    msg.setDestinationEntity(130U);
    msg.system.assign("INYFTFENFZSLTGAXWSILL");
    msg.op = 130U;

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
    msg.setTimeStamp(0.4382384440301851);
    msg.setSource(53656U);
    msg.setSourceEntity(88U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(185U);
    msg.system.assign("SPFJDPGNXRHAPL");
    msg.op = 163U;

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
    msg.setTimeStamp(0.633451323714761);
    msg.setSource(47715U);
    msg.setSourceEntity(159U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(210U);
    msg.system.assign("NYNVXNHLYZROYVMKKEAFXEGUDQXIVZMWUTIDXJHZBZCTQXOPCLJREIHCUUCGFPPXSOUSZAPDDJVQTBSDOKEDWKNVETTCF");
    msg.op = 194U;

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
    msg.setTimeStamp(0.3237794745395588);
    msg.setSource(17869U);
    msg.setSourceEntity(131U);
    msg.setDestination(26129U);
    msg.setDestinationEntity(35U);
    msg.value = 4609;

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
    msg.setTimeStamp(0.01767074453828532);
    msg.setSource(19375U);
    msg.setSourceEntity(238U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(156U);
    msg.value = -20282;

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
    msg.setTimeStamp(0.04746704740719776);
    msg.setSource(11733U);
    msg.setSourceEntity(252U);
    msg.setDestination(50083U);
    msg.setDestinationEntity(123U);
    msg.value = -30622;

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
    msg.setTimeStamp(0.20894231053362755);
    msg.setSource(63084U);
    msg.setSourceEntity(223U);
    msg.setDestination(22685U);
    msg.setDestinationEntity(246U);
    msg.value = 0.01448642082650009;

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
    msg.setTimeStamp(0.2848689046660384);
    msg.setSource(18951U);
    msg.setSourceEntity(64U);
    msg.setDestination(14870U);
    msg.setDestinationEntity(28U);
    msg.value = 0.6120756516051912;

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
    msg.setTimeStamp(0.25713160939555446);
    msg.setSource(21521U);
    msg.setSourceEntity(171U);
    msg.setDestination(39213U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9803687332302362;

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
    msg.setTimeStamp(0.6077107636530051);
    msg.setSource(38433U);
    msg.setSourceEntity(125U);
    msg.setDestination(7200U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8714551779450347;

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
    msg.setTimeStamp(0.6339504651044952);
    msg.setSource(30028U);
    msg.setSourceEntity(156U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(86U);
    msg.value = 0.057556468244948644;

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
    msg.setTimeStamp(0.5299260985039357);
    msg.setSource(43776U);
    msg.setSourceEntity(213U);
    msg.setDestination(52433U);
    msg.setDestinationEntity(89U);
    msg.value = 0.44995333395613546;

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
    msg.setTimeStamp(0.5280987564056877);
    msg.setSource(30412U);
    msg.setSourceEntity(4U);
    msg.setDestination(56488U);
    msg.setDestinationEntity(222U);
    msg.validity = 47577U;
    msg.type = 2U;
    msg.utc_year = 36559U;
    msg.utc_month = 148U;
    msg.utc_day = 195U;
    msg.utc_time = 0.22609384835332458;
    msg.lat = 0.804099850230121;
    msg.lon = 0.9490659788785698;
    msg.height = 0.654190801792004;
    msg.satellites = 171U;
    msg.cog = 0.7958154953495157;
    msg.sog = 0.6164655657101561;
    msg.hdop = 0.8769707692724437;
    msg.vdop = 0.37620965946885465;
    msg.hacc = 0.41032891855356257;
    msg.vacc = 0.8826433471920493;

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
    msg.setTimeStamp(0.408570752023106);
    msg.setSource(21487U);
    msg.setSourceEntity(209U);
    msg.setDestination(46031U);
    msg.setDestinationEntity(228U);
    msg.validity = 49471U;
    msg.type = 13U;
    msg.utc_year = 19724U;
    msg.utc_month = 156U;
    msg.utc_day = 106U;
    msg.utc_time = 0.4768453776105539;
    msg.lat = 0.2147714829999865;
    msg.lon = 0.22579303263203787;
    msg.height = 0.1733190896036051;
    msg.satellites = 166U;
    msg.cog = 0.59874357688831;
    msg.sog = 0.2714405139124235;
    msg.hdop = 0.1606851709909819;
    msg.vdop = 0.7488202354018622;
    msg.hacc = 0.3612085190539497;
    msg.vacc = 0.5803504448305594;

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
    msg.setTimeStamp(0.5279064266337005);
    msg.setSource(23860U);
    msg.setSourceEntity(137U);
    msg.setDestination(21702U);
    msg.setDestinationEntity(242U);
    msg.validity = 52335U;
    msg.type = 18U;
    msg.utc_year = 28816U;
    msg.utc_month = 205U;
    msg.utc_day = 169U;
    msg.utc_time = 0.18128922975568829;
    msg.lat = 0.12176552483610648;
    msg.lon = 0.13050381455845395;
    msg.height = 0.989803440348654;
    msg.satellites = 202U;
    msg.cog = 0.8194064327540196;
    msg.sog = 0.5979481160490177;
    msg.hdop = 0.20464413913333557;
    msg.vdop = 0.884950420313078;
    msg.hacc = 0.3675955864507947;
    msg.vacc = 0.544713406894382;

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
    msg.setTimeStamp(0.02497405986693857);
    msg.setSource(2125U);
    msg.setSourceEntity(175U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(206U);
    msg.time = 0.7447029931813752;
    msg.phi = 0.07577187976045108;
    msg.theta = 0.6116371948207575;
    msg.psi = 0.9991488073081849;
    msg.psi_magnetic = 0.32787741056634057;

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
    msg.setTimeStamp(0.0866057378767604);
    msg.setSource(34124U);
    msg.setSourceEntity(138U);
    msg.setDestination(22406U);
    msg.setDestinationEntity(63U);
    msg.time = 0.8398123455098155;
    msg.phi = 0.12411060099251725;
    msg.theta = 0.6877641766520369;
    msg.psi = 0.13332793304851354;
    msg.psi_magnetic = 0.5632165243559933;

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
    msg.setTimeStamp(0.593323974433311);
    msg.setSource(42053U);
    msg.setSourceEntity(89U);
    msg.setDestination(28413U);
    msg.setDestinationEntity(212U);
    msg.time = 0.13514740208904652;
    msg.phi = 0.2673557948389099;
    msg.theta = 0.26783455528586797;
    msg.psi = 0.4121037954333878;
    msg.psi_magnetic = 0.03549155657376213;

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
    msg.setTimeStamp(0.23676671091607304);
    msg.setSource(7628U);
    msg.setSourceEntity(200U);
    msg.setDestination(14234U);
    msg.setDestinationEntity(217U);
    msg.time = 0.5005739534889276;
    msg.x = 0.9688882527461725;
    msg.y = 0.15933127494590482;
    msg.z = 0.7533218789596302;
    msg.timestep = 0.7741708048191023;

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
    msg.setTimeStamp(0.7569885637595927);
    msg.setSource(39833U);
    msg.setSourceEntity(32U);
    msg.setDestination(64397U);
    msg.setDestinationEntity(51U);
    msg.time = 0.1300110012375043;
    msg.x = 0.636673131536964;
    msg.y = 0.7608928689216292;
    msg.z = 0.44181639792119476;
    msg.timestep = 0.9675249049403064;

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
    msg.setTimeStamp(0.4694964283356161);
    msg.setSource(41273U);
    msg.setSourceEntity(230U);
    msg.setDestination(43762U);
    msg.setDestinationEntity(82U);
    msg.time = 0.627755642094764;
    msg.x = 0.11469490377590374;
    msg.y = 0.5086012487669428;
    msg.z = 0.08376546339562718;
    msg.timestep = 0.6842180219681513;

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
    msg.setTimeStamp(0.18542673570914625);
    msg.setSource(26754U);
    msg.setSourceEntity(59U);
    msg.setDestination(12201U);
    msg.setDestinationEntity(9U);
    msg.time = 0.7417508289470071;
    msg.x = 0.0255716135537305;
    msg.y = 0.8110621299735329;
    msg.z = 0.6353637753330574;

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
    msg.setTimeStamp(0.7029670233131751);
    msg.setSource(54666U);
    msg.setSourceEntity(3U);
    msg.setDestination(21099U);
    msg.setDestinationEntity(164U);
    msg.time = 0.720563436269167;
    msg.x = 7.313154702881519e-05;
    msg.y = 0.12619808707089364;
    msg.z = 0.1979550098288131;

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
    msg.setTimeStamp(0.6642009313920989);
    msg.setSource(12731U);
    msg.setSourceEntity(96U);
    msg.setDestination(55160U);
    msg.setDestinationEntity(52U);
    msg.time = 0.3710473525378081;
    msg.x = 0.4408806488285657;
    msg.y = 0.03570635534230915;
    msg.z = 0.43153366979941077;

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
    msg.setTimeStamp(0.9499260330577036);
    msg.setSource(3186U);
    msg.setSourceEntity(115U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(99U);
    msg.time = 0.283542714791039;
    msg.x = 0.4314646892712033;
    msg.y = 0.5865165755737274;
    msg.z = 0.8064224755043539;

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
    msg.setTimeStamp(0.22726867234641246);
    msg.setSource(22051U);
    msg.setSourceEntity(127U);
    msg.setDestination(9409U);
    msg.setDestinationEntity(139U);
    msg.time = 0.4964131581708391;
    msg.x = 0.2899631548407088;
    msg.y = 0.7975581903199589;
    msg.z = 0.1153686890187795;

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
    msg.setTimeStamp(0.9958706893217707);
    msg.setSource(37050U);
    msg.setSourceEntity(229U);
    msg.setDestination(6376U);
    msg.setDestinationEntity(206U);
    msg.time = 0.0475013292252876;
    msg.x = 0.2581762994164214;
    msg.y = 0.0599844322042985;
    msg.z = 0.5900304912778896;

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
    msg.setTimeStamp(0.7382506356195191);
    msg.setSource(36164U);
    msg.setSourceEntity(92U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(176U);
    msg.time = 0.15241099528590896;
    msg.x = 0.2964135537554632;
    msg.y = 0.483572716309972;
    msg.z = 0.18934056783340047;

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
    msg.setTimeStamp(0.9894329508260702);
    msg.setSource(3307U);
    msg.setSourceEntity(54U);
    msg.setDestination(26028U);
    msg.setDestinationEntity(176U);
    msg.time = 0.8164632974789584;
    msg.x = 0.1929707312980452;
    msg.y = 0.7902688289317495;
    msg.z = 0.8518130909802484;

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
    msg.setTimeStamp(0.8080038017121571);
    msg.setSource(21038U);
    msg.setSourceEntity(9U);
    msg.setDestination(50487U);
    msg.setDestinationEntity(179U);
    msg.time = 0.8936522266647946;
    msg.x = 0.5093552970489132;
    msg.y = 0.6499949181080515;
    msg.z = 0.09439305090497385;

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
    msg.setTimeStamp(0.6567989843175982);
    msg.setSource(62950U);
    msg.setSourceEntity(89U);
    msg.setDestination(11937U);
    msg.setDestinationEntity(250U);
    msg.validity = 6U;
    msg.x = 0.1855173820594176;
    msg.y = 0.28223425253538936;
    msg.z = 0.8161991966648017;

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
    msg.setTimeStamp(0.3005471854424502);
    msg.setSource(51614U);
    msg.setSourceEntity(220U);
    msg.setDestination(52570U);
    msg.setDestinationEntity(210U);
    msg.validity = 173U;
    msg.x = 0.023554588104805374;
    msg.y = 0.3773710428137319;
    msg.z = 0.05692778140945076;

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
    msg.setTimeStamp(0.15466199974301664);
    msg.setSource(63645U);
    msg.setSourceEntity(132U);
    msg.setDestination(63898U);
    msg.setDestinationEntity(206U);
    msg.validity = 241U;
    msg.x = 0.8357147203027758;
    msg.y = 0.41095928523111835;
    msg.z = 0.9013885112995085;

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
    msg.setTimeStamp(0.18790883198544317);
    msg.setSource(18959U);
    msg.setSourceEntity(192U);
    msg.setDestination(45436U);
    msg.setDestinationEntity(7U);
    msg.validity = 75U;
    msg.x = 0.6007059809316878;
    msg.y = 0.13832674876673245;
    msg.z = 0.06600079184123964;

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
    msg.setTimeStamp(0.2468066765509308);
    msg.setSource(57794U);
    msg.setSourceEntity(145U);
    msg.setDestination(14253U);
    msg.setDestinationEntity(196U);
    msg.validity = 97U;
    msg.x = 0.9873984862539352;
    msg.y = 0.4675754765292417;
    msg.z = 0.7103317515249836;

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
    msg.setTimeStamp(0.29682691103081327);
    msg.setSource(44286U);
    msg.setSourceEntity(121U);
    msg.setDestination(31165U);
    msg.setDestinationEntity(249U);
    msg.validity = 134U;
    msg.x = 0.6530721279605969;
    msg.y = 0.7198505264980756;
    msg.z = 0.21485791005577726;

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
    msg.setTimeStamp(0.7663528559944764);
    msg.setSource(48770U);
    msg.setSourceEntity(120U);
    msg.setDestination(9246U);
    msg.setDestinationEntity(52U);
    msg.time = 0.5198936455754661;
    msg.x = 0.3788466502408424;
    msg.y = 0.8914983381199293;
    msg.z = 0.7479198961276616;

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
    msg.setTimeStamp(0.3090159106401996);
    msg.setSource(55796U);
    msg.setSourceEntity(251U);
    msg.setDestination(49190U);
    msg.setDestinationEntity(105U);
    msg.time = 0.9612611906599609;
    msg.x = 0.15716191640798216;
    msg.y = 0.9682368620105589;
    msg.z = 0.11663710685033701;

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
    msg.setTimeStamp(0.2430650678994304);
    msg.setSource(1842U);
    msg.setSourceEntity(110U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(91U);
    msg.time = 0.07492540179702334;
    msg.x = 0.6089235592739197;
    msg.y = 0.10457093378859994;
    msg.z = 0.24563843000286856;

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
    msg.setTimeStamp(0.15546445504857687);
    msg.setSource(1732U);
    msg.setSourceEntity(234U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(59U);
    msg.validity = 210U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2286766587207042;
    tmp_msg_0.beam_height = 0.5342650799985944;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4200780215594354;

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
    msg.setTimeStamp(0.6958468220003243);
    msg.setSource(27210U);
    msg.setSourceEntity(27U);
    msg.setDestination(15152U);
    msg.setDestinationEntity(117U);
    msg.validity = 247U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5856321343599209;
    tmp_msg_0.y = 0.6618658035673666;
    tmp_msg_0.z = 0.6813452984619413;
    tmp_msg_0.phi = 0.09085776835730874;
    tmp_msg_0.theta = 0.46496913011917984;
    tmp_msg_0.psi = 0.7615627934859263;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8880225003318296;

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
    msg.setTimeStamp(0.29660867973912375);
    msg.setSource(52052U);
    msg.setSourceEntity(53U);
    msg.setDestination(15790U);
    msg.setDestinationEntity(86U);
    msg.validity = 51U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6495826091847123;
    tmp_msg_0.y = 0.0989597611693519;
    tmp_msg_0.z = 0.717581311385508;
    tmp_msg_0.phi = 0.2394257092665667;
    tmp_msg_0.theta = 0.26472412636615417;
    tmp_msg_0.psi = 0.5172507875118705;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9385009210331116;
    tmp_msg_1.beam_height = 0.6572022643383009;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9430929236501775;

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
    msg.setTimeStamp(0.9982324583753338);
    msg.setSource(16058U);
    msg.setSourceEntity(53U);
    msg.setDestination(11463U);
    msg.setDestinationEntity(36U);
    msg.value = 0.16127913055183163;

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
    msg.setTimeStamp(0.2921413474796807);
    msg.setSource(61078U);
    msg.setSourceEntity(44U);
    msg.setDestination(34426U);
    msg.setDestinationEntity(100U);
    msg.value = 0.45651313066737587;

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
    msg.setTimeStamp(0.18497591798898028);
    msg.setSource(39840U);
    msg.setSourceEntity(171U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(222U);
    msg.value = 0.25251749402812795;

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
    msg.setTimeStamp(0.6300712957528035);
    msg.setSource(26563U);
    msg.setSourceEntity(141U);
    msg.setDestination(12939U);
    msg.setDestinationEntity(72U);
    msg.value = 0.15172179848596312;

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
    msg.setTimeStamp(0.38802507000749853);
    msg.setSource(43603U);
    msg.setSourceEntity(206U);
    msg.setDestination(62260U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8673063333058886;

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
    msg.setTimeStamp(0.9211724754409037);
    msg.setSource(60381U);
    msg.setSourceEntity(69U);
    msg.setDestination(21005U);
    msg.setDestinationEntity(148U);
    msg.value = 0.40340247017903463;

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
    msg.setTimeStamp(0.6620760141450873);
    msg.setSource(42357U);
    msg.setSourceEntity(95U);
    msg.setDestination(7843U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5143164914555234;

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
    msg.setTimeStamp(0.8879575924424357);
    msg.setSource(464U);
    msg.setSourceEntity(75U);
    msg.setDestination(60737U);
    msg.setDestinationEntity(111U);
    msg.value = 0.9185658731998849;

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
    msg.setTimeStamp(0.48230342794078185);
    msg.setSource(25148U);
    msg.setSourceEntity(234U);
    msg.setDestination(61932U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6564339803901337;

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
    msg.setTimeStamp(0.823930980325682);
    msg.setSource(62489U);
    msg.setSourceEntity(217U);
    msg.setDestination(33398U);
    msg.setDestinationEntity(2U);
    msg.value = 0.48739186126517275;

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
    msg.setTimeStamp(0.9433361230855905);
    msg.setSource(32046U);
    msg.setSourceEntity(158U);
    msg.setDestination(39939U);
    msg.setDestinationEntity(17U);
    msg.value = 0.5200575064247559;

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
    msg.setTimeStamp(0.38963691837627445);
    msg.setSource(12819U);
    msg.setSourceEntity(48U);
    msg.setDestination(43741U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7881299337085571;

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
    msg.setTimeStamp(0.21779010848661984);
    msg.setSource(60656U);
    msg.setSourceEntity(14U);
    msg.setDestination(10698U);
    msg.setDestinationEntity(179U);
    msg.value = 0.014217378807827363;

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
    msg.setTimeStamp(0.21062758204770116);
    msg.setSource(29265U);
    msg.setSourceEntity(26U);
    msg.setDestination(12469U);
    msg.setDestinationEntity(188U);
    msg.value = 0.036646961695971036;

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
    msg.setTimeStamp(0.02262078956651581);
    msg.setSource(56584U);
    msg.setSourceEntity(64U);
    msg.setDestination(49674U);
    msg.setDestinationEntity(38U);
    msg.value = 0.5220055548178079;

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
    msg.setTimeStamp(0.7752832640983948);
    msg.setSource(35208U);
    msg.setSourceEntity(161U);
    msg.setDestination(16037U);
    msg.setDestinationEntity(82U);
    msg.value = 0.17222151326079582;

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
    msg.setTimeStamp(0.9571975733151558);
    msg.setSource(11893U);
    msg.setSourceEntity(216U);
    msg.setDestination(4285U);
    msg.setDestinationEntity(236U);
    msg.value = 0.952355867545164;

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
    msg.setTimeStamp(0.06925835581552953);
    msg.setSource(55335U);
    msg.setSourceEntity(184U);
    msg.setDestination(43776U);
    msg.setDestinationEntity(198U);
    msg.value = 0.14401572163531706;

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
    msg.setTimeStamp(0.050641796726941024);
    msg.setSource(52849U);
    msg.setSourceEntity(49U);
    msg.setDestination(23772U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8833406260493041;

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
    msg.setTimeStamp(0.2548483620273291);
    msg.setSource(230U);
    msg.setSourceEntity(56U);
    msg.setDestination(21435U);
    msg.setDestinationEntity(246U);
    msg.value = 0.954247302407569;

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
    msg.setTimeStamp(0.7972902909145656);
    msg.setSource(62567U);
    msg.setSourceEntity(117U);
    msg.setDestination(9290U);
    msg.setDestinationEntity(73U);
    msg.value = 0.0643899651329568;

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
    msg.setTimeStamp(0.015358058512804362);
    msg.setSource(53102U);
    msg.setSourceEntity(65U);
    msg.setDestination(28845U);
    msg.setDestinationEntity(241U);
    msg.value = 0.86883779388669;

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
    msg.setTimeStamp(0.9631123024379405);
    msg.setSource(31731U);
    msg.setSourceEntity(243U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(72U);
    msg.value = 0.3287379482243814;

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
    msg.setTimeStamp(0.5380855726627483);
    msg.setSource(47479U);
    msg.setSourceEntity(30U);
    msg.setDestination(5317U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9207811798294769;

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
    msg.setTimeStamp(0.90608405803906);
    msg.setSource(47683U);
    msg.setSourceEntity(152U);
    msg.setDestination(50185U);
    msg.setDestinationEntity(58U);
    msg.direction = 0.4210494342612937;
    msg.speed = 0.2394955265426295;
    msg.turbulence = 0.6290402400207962;

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
    msg.setTimeStamp(0.028145255435075955);
    msg.setSource(52478U);
    msg.setSourceEntity(190U);
    msg.setDestination(64121U);
    msg.setDestinationEntity(35U);
    msg.direction = 0.21700343348806106;
    msg.speed = 0.9364561504607855;
    msg.turbulence = 0.6728206682420632;

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
    msg.setTimeStamp(0.7113644782649307);
    msg.setSource(6577U);
    msg.setSourceEntity(69U);
    msg.setDestination(42708U);
    msg.setDestinationEntity(14U);
    msg.direction = 0.8956677365283311;
    msg.speed = 0.8510921092124036;
    msg.turbulence = 0.541251323293343;

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
    msg.setTimeStamp(0.15730082971233694);
    msg.setSource(30215U);
    msg.setSourceEntity(247U);
    msg.setDestination(10130U);
    msg.setDestinationEntity(220U);
    msg.value = 0.13603378401770616;

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
    msg.setTimeStamp(0.19147170920020729);
    msg.setSource(41230U);
    msg.setSourceEntity(196U);
    msg.setDestination(58750U);
    msg.setDestinationEntity(85U);
    msg.value = 0.04368687716803599;

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
    msg.setTimeStamp(0.23504937657827507);
    msg.setSource(37764U);
    msg.setSourceEntity(1U);
    msg.setDestination(59272U);
    msg.setDestinationEntity(31U);
    msg.value = 0.39714605840443606;

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
    msg.setTimeStamp(0.4041327605394617);
    msg.setSource(29978U);
    msg.setSourceEntity(45U);
    msg.setDestination(41813U);
    msg.setDestinationEntity(125U);
    msg.value.assign("DOSVUGXODSLKQEPZLWIMY");

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
    msg.setTimeStamp(0.8894657336363267);
    msg.setSource(31559U);
    msg.setSourceEntity(245U);
    msg.setDestination(14286U);
    msg.setDestinationEntity(217U);
    msg.value.assign("BTEZQJADFNDNIPSAAOZKBMHVTMYYWYWZJCBESUSQKUQZBUF");

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
    msg.setTimeStamp(0.4980983607799311);
    msg.setSource(30115U);
    msg.setSourceEntity(77U);
    msg.setDestination(9526U);
    msg.setDestinationEntity(7U);
    msg.value.assign("PNKFRQBNIFVMUVDPGJQBEBGGHPAVZIUJFTEXSBOTOYGVCNTNKNXEAYUGUUOALZCBTJWQYXKJNOGPVLSGSYICWWHKWJWDXVEHAHQSCTKROGDIIQBDLOASGQSUTTVDPRHPAEZHZATHUHKGBSYADFODAXIOR");

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
    msg.setTimeStamp(0.5952684023195877);
    msg.setSource(61794U);
    msg.setSourceEntity(186U);
    msg.setDestination(11468U);
    msg.setDestinationEntity(53U);
    const signed char tmp_msg_0[] = {-119, -69, -42, 68, 65, 21, -4, -41, -22, 43, -17, -127, -32, -83, -92, 24, 124, 95, -112, 33, 29, -29, -76, 36, 0, 19, -95, 76, -78, 77, 18, 96, -98, -118, -73, 85, -112, -98, 50, -67, 110, 33, -66, 41, 83, -4, -30, 108, 104, -44, 33, 39, -50, 20, 70, -99, -79, 101, -78, -108, 107, -48, -41, -6, 24, 3, -35, 73, 116, 16, 23, -12, 102, 103, -50, -92, -103, 75, 11, -88, -29, -111, 27, -25, -57, 3, -18, -69, 61, -35, 101, -79, 82, 66, 45, -98, 101, -86, -115, -77, -33, 4, 118, 41, -23, -23, -62, -13, -76, -128, -33, -98, -118, 78, -100, 62, -3, 81, 124, 35, 71, 110, 10, 40, -98, 76, -113, -90, 3, 33, 6, 37, 75, 65, -72, -126, 84, 22, 48, 59, 15, 67, 73, 124, 77, 60, -124, -100, -111, -6, -97, -98, 72, -51, -117, 62, 22, 14, 16, 95, 17, -49, -94, 6, -26, 4, -15};
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
    msg.setTimeStamp(0.3200707682611361);
    msg.setSource(31352U);
    msg.setSourceEntity(19U);
    msg.setDestination(44493U);
    msg.setDestinationEntity(177U);
    const signed char tmp_msg_0[] = {-23, 65, -92, 34, -9, -70, -1, -32, 11, -14, 90, 26, 26, -91, 46, -10, 10, -6, 42, 67, 41, 70, -15, 1, 61, -30, 13, -66, 31, 28, -92, 58, -53, -62, 29, -1, -51, 12, -2, 27, 78, 116, 114, 44, -68, -103, -26, 56, -11, 20, 102, -45, 103, -76, -69, 51, 10, -55};
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
    msg.setTimeStamp(0.037552267340222434);
    msg.setSource(9527U);
    msg.setSourceEntity(96U);
    msg.setDestination(10385U);
    msg.setDestinationEntity(6U);
    const signed char tmp_msg_0[] = {69, -70, -38, -94, 83, -100, -42, -25, -114, -70, -35, -68, -62, 110, 96, 43, -60, -37, 6, -62, -69, -17, -17, -37, -33, -114, 15, -84, -32, 56, 18, -35, 110, 0, -73, -123, 107, -125, 106, -40, 65, 74, 70, 91, 10, 16, -90, 81, -26, 74, 110, 73, 122, -95, -31, 69, 111, -19, 113, -16, 112, 126, 101, -115, 16, -31, -48, 122, 20, -42, 21, 3, -26, -72, -76, -40, 1, -11, -77, 125, -84, 74, 50, 51, 5, -32, 16, -62, -25, 36, -45, 0, 7, 29, 81, 110, 79, 84, 125, -62, 55, -64, -5, 38, -108, -48, -82, 23, 124, 80, -19, 10, 14, 8, -18, 82, -1, -96, -108, 120, -17, 45, -26, 114, -45, -69, 100, 95, 2, -96, -37, 27, -25, 51, 8, -90, -85, -63, -98, 83, -43, 102, 85, -78, 39, 3};
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
    msg.setTimeStamp(0.129077491297237);
    msg.setSource(55424U);
    msg.setSourceEntity(178U);
    msg.setDestination(59368U);
    msg.setDestinationEntity(21U);
    msg.value = 0.1493517973675228;

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
    msg.setTimeStamp(0.2821209413378124);
    msg.setSource(52075U);
    msg.setSourceEntity(115U);
    msg.setDestination(33276U);
    msg.setDestinationEntity(2U);
    msg.value = 0.8941336709147406;

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
    msg.setTimeStamp(0.7381161536037831);
    msg.setSource(3418U);
    msg.setSourceEntity(145U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(61U);
    msg.value = 0.41864983174049897;

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
    msg.setTimeStamp(0.879051505313695);
    msg.setSource(51982U);
    msg.setSourceEntity(121U);
    msg.setDestination(29313U);
    msg.setDestinationEntity(31U);
    msg.type = 108U;
    msg.frequency = 331264762U;
    msg.min_range = 19434U;
    msg.max_range = 12660U;
    msg.bits_per_point = 106U;
    msg.scale_factor = 0.7379314129720678;
    const signed char tmp_msg_0[] = {42, 11, -45, -43, -75, -12, 69, -108, -23, -87, -73, -73, -107, 90, 86, -64, 109, 29, 105, -94, -34, -19, 110, -6, 78, -77, -48, -91, 62, 5, -50, 52, 24, -63, 92, -22, -120, 84, -112, 18, -65, -42, 16, 2, -47, 43, -8, 22, -56, 19, 87, 44, 32, -12, 0, 54, 9, -29, 24, -82, -124, -71, -45, -70, -24, 120, 114, -61, 8, 81, 37, 11, -51, 80, -71, -32, -50, 91, 31, 3, 56, -2, -99, -95, -67, 51, -68, 59, -61, -108, 109, 50, -122, 93, 106, -27, -24, -75, 25, 65, 88, 62, 4, 46, -1, -60, 85, -92, -23, -78, 75, 107, 102, -64, 113, -70, -33, 105, -111, 19, 73, 31, -59, -115, -96, 78, -119, 45, -109, -46, 2, -57, -32, 63, 82, -92, -71, -77, -108, -18, -58, 64, 74, 100, 94, -59, -37, 15, -121, 124, 108, 122, 104, 58, -22, 117, -76, 26, -65, -71, 12, 110, -95, 74, -113, 84, -17, -71, -30, -74, 54, 119, -6, 35, 57, 65, 54, 43, -4, -110, 120, 43, -79, 11, -107, 10, -77, 76, 36, 62, -28, 105, 5, 76, -123, 80, -14, -35, 123, 88, 73, 42, 88, 83, -71, -44, -118, -12, 11, -28, -57, 126, -14, -50, -61, 8, 101, 8, -65, 20, -43, 7, 72, 2, 2, -25, -68, -84, -119, 74, 98, 101, 123, 92, 31, -111, 45, -63, 78, 50, 64, -69, -37, -8, -107, 11};
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
    msg.setTimeStamp(0.27530952672412345);
    msg.setSource(22102U);
    msg.setSourceEntity(50U);
    msg.setDestination(9908U);
    msg.setDestinationEntity(224U);
    msg.type = 20U;
    msg.frequency = 1493086209U;
    msg.min_range = 49313U;
    msg.max_range = 51488U;
    msg.bits_per_point = 165U;
    msg.scale_factor = 0.30371965346328056;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15996587959000474;
    tmp_msg_0.beam_height = 0.7655908661992358;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {60, 82, 125, -115, -126, 124, 58, -91, -110, 90, 119, -49, -92, 31, -118, 123, 78, 74, -52, -27, -67, -114, 98, 5, -99, 125, 116, 125, -114, 76, -108, 105, 58, 84, 55, 62, -28, 55, 44, -82, -48, 18, 33, -98, -30, 97, -14, 109, 92, -45, 85, 37, -60, -18, -22, -103, -80, -5, 74, 8, 50, 11, 97, -88, -18, -14, -26, 66, -109, 50, 77, -31, 105, 100, 13, -110, 119, -51, -71, 26, 92, 102, -6, -82, 56, -67, -68, 9, 74, 80, -99, 11, -15, 91, 91, -108, -34, -108, 56, -25, -29, 8, -73, -100, 66, -79, 104, 47, 0, -35, -38, 76, 66, 25, 86, -22, -11, -108, 25, 111, -110, 102, 97, 20, 94, 118, -73, 35, -38, 103, 42, 123, 90, -31, -125, 13, -64, -19, -78, -74, 29, 92, 84, -127, 4, 111, -60, 64, -114, 34, -70, -4, 124, 88, -126, -76, 1, -91, 69, -86, 5, -24, -73, 22, -50, -64, 40, -121, 87, 11, -30, 94, 59, 22, 62, 66, -121, -107, 98};
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
    msg.setTimeStamp(0.40386470146599496);
    msg.setSource(43524U);
    msg.setSourceEntity(195U);
    msg.setDestination(48670U);
    msg.setDestinationEntity(207U);
    msg.type = 23U;
    msg.frequency = 522277622U;
    msg.min_range = 28012U;
    msg.max_range = 4700U;
    msg.bits_per_point = 63U;
    msg.scale_factor = 0.41228232934737974;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7410029194149931;
    tmp_msg_0.beam_height = 0.2157538096358177;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-13, 99, 63, -102, -113, -76, -7, 54, 72, -119, 47, -76, -84, 3, 19, 71, 77, -79, -33, 61, -4, 6, 123, -80, -66, 23, 3, 70, 104, 56, 111, -58, 57, 41, -108, -43, -35, -22, 117, 112, -51, 9, 22, 101, 73, 120, -117, -57, -104, -38, -17, -7, 33, -64, 26, -77, 88, 71, 100, 43, 58, 34, 17, 123, -127, 17, -112, 95, 119, 51, 33, 23, 44, -14, 100, -98, -90, 73, -107, -45, -126, -73, -13, -19, -61, -68, -91, 31, -75, 17, 70, 83, 78, 36, 37, 47, 55, -9, 23, 55, 49, 71, 39, -18, 117, 54, 111, -23, -128, -7, -39, 34, -121, 89, -86, -100, -39};
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
    msg.setTimeStamp(0.6517950718404839);
    msg.setSource(1445U);
    msg.setSourceEntity(23U);
    msg.setDestination(33995U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.4685947948227557);
    msg.setSource(29627U);
    msg.setSourceEntity(211U);
    msg.setDestination(43883U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.9074002584535721);
    msg.setSource(43718U);
    msg.setSourceEntity(208U);
    msg.setDestination(8436U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.5805685611698378);
    msg.setSource(60270U);
    msg.setSourceEntity(234U);
    msg.setDestination(42083U);
    msg.setDestinationEntity(111U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.08514451572199921);
    msg.setSource(22286U);
    msg.setSourceEntity(115U);
    msg.setDestination(13118U);
    msg.setDestinationEntity(63U);
    msg.op = 83U;

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
    msg.setTimeStamp(0.14197921313658401);
    msg.setSource(9957U);
    msg.setSourceEntity(228U);
    msg.setDestination(40048U);
    msg.setDestinationEntity(20U);
    msg.op = 201U;

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
    msg.setTimeStamp(0.8923202849448374);
    msg.setSource(40148U);
    msg.setSourceEntity(198U);
    msg.setDestination(56597U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5453438075576663;
    msg.confidence = 0.3859766214242889;
    msg.opmodes.assign("UGYQSLJSOEDAICXPITDGEGBSZRDEBBOROTHLAICIRPOLHUTCRDAGKJEEZTPKEAMABMOFKWDPPUZLOUGGVXUYFHYXDFGHUMNLVMNRLQGVQZQHAIXJMHJTPDIYYKKXE");

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
    msg.setTimeStamp(0.7764738290859543);
    msg.setSource(23506U);
    msg.setSourceEntity(7U);
    msg.setDestination(13888U);
    msg.setDestinationEntity(183U);
    msg.value = 0.04981144513492308;
    msg.confidence = 0.4404755106594579;
    msg.opmodes.assign("VXHGSJCVLODCCUAZOGYQJMFBKOZHTQJOTOGESWUUPWENFSZRFBZRZHDAPMHWLNTEBLYPICNXCNKQKOWOFVKEJOVFLHDRIBHFTVNMPQEJQBXWPYYZRKHZQAZU");

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
    msg.setTimeStamp(0.7702589737017506);
    msg.setSource(61097U);
    msg.setSourceEntity(42U);
    msg.setDestination(37813U);
    msg.setDestinationEntity(106U);
    msg.value = 0.546363681300447;
    msg.confidence = 0.8592405043622761;
    msg.opmodes.assign("FPUVCDDBVYUIMSZWYELIKNSOPXZGABUWKZDQCQLFZRZCXHMJMJYBVTRGUKVYHDAADHXPWCGTLFHVYDUKJQLDFSIHQVKXRERTRUWIWTPIAAUNTLKXSMENYAQTQEMLDZDNXIORQLMXYNAFVGHWOUAILOXSZPDHKCRASZYUSNCQAREGBIHRKYBMFPEQSTBGEOJOVTZFYTOJJHIMCJXCMGSHZEJBGLOMLBFCFVXSWNQEJNNKWPVCGUEPPWFIBT");

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
    msg.setTimeStamp(0.40187290051499835);
    msg.setSource(32724U);
    msg.setSourceEntity(3U);
    msg.setDestination(15199U);
    msg.setDestinationEntity(7U);
    msg.itow = 3999456340U;
    msg.lat = 0.10521224514123573;
    msg.lon = 0.7782912676584144;
    msg.height_ell = 0.48984438366610095;
    msg.height_sea = 0.14954891867873554;
    msg.hacc = 0.9015534856614373;
    msg.vacc = 0.08974310936924401;
    msg.vel_n = 0.7607451500065849;
    msg.vel_e = 0.6489898585269127;
    msg.vel_d = 0.24675604498395132;
    msg.speed = 0.6170948748040066;
    msg.gspeed = 0.4268684081733769;
    msg.heading = 0.08026027054550411;
    msg.sacc = 0.6330704988750683;
    msg.cacc = 0.2409317061821753;

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
    msg.setTimeStamp(0.512199402764057);
    msg.setSource(31633U);
    msg.setSourceEntity(176U);
    msg.setDestination(1935U);
    msg.setDestinationEntity(41U);
    msg.itow = 377430058U;
    msg.lat = 0.011459510098733028;
    msg.lon = 0.8557541826049461;
    msg.height_ell = 0.2660170019539154;
    msg.height_sea = 0.5794217049494598;
    msg.hacc = 0.3290535636211128;
    msg.vacc = 0.22647190874931955;
    msg.vel_n = 0.12067800423375719;
    msg.vel_e = 0.6188614076072634;
    msg.vel_d = 0.38030192500438176;
    msg.speed = 0.9794516743010785;
    msg.gspeed = 0.34454868156746077;
    msg.heading = 0.5795740730417654;
    msg.sacc = 0.4123737245194802;
    msg.cacc = 0.5293753863885692;

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
    msg.setTimeStamp(0.44012062136371377);
    msg.setSource(38725U);
    msg.setSourceEntity(120U);
    msg.setDestination(38017U);
    msg.setDestinationEntity(64U);
    msg.itow = 2605652050U;
    msg.lat = 0.9004344945169285;
    msg.lon = 0.09179502334521528;
    msg.height_ell = 0.6212417301349694;
    msg.height_sea = 0.8725764123847779;
    msg.hacc = 0.9078095788687167;
    msg.vacc = 0.3107156277983213;
    msg.vel_n = 0.8315157008113412;
    msg.vel_e = 0.5902425175456513;
    msg.vel_d = 0.5670390171476011;
    msg.speed = 0.6330032463931962;
    msg.gspeed = 0.25491267361572656;
    msg.heading = 0.037251612343029206;
    msg.sacc = 0.13427096437781527;
    msg.cacc = 0.813523773289768;

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
    msg.setTimeStamp(0.35385715509125704);
    msg.setSource(16922U);
    msg.setSourceEntity(86U);
    msg.setDestination(35037U);
    msg.setDestinationEntity(189U);
    msg.id = 22U;
    msg.value = 0.09311326267538944;

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
    msg.setTimeStamp(0.38495691244866015);
    msg.setSource(53401U);
    msg.setSourceEntity(27U);
    msg.setDestination(6219U);
    msg.setDestinationEntity(0U);
    msg.id = 252U;
    msg.value = 0.5199761695534254;

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
    msg.setTimeStamp(0.9079198720451549);
    msg.setSource(43496U);
    msg.setSourceEntity(210U);
    msg.setDestination(59971U);
    msg.setDestinationEntity(143U);
    msg.id = 192U;
    msg.value = 0.7844992586352866;

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
    msg.setTimeStamp(0.06289914401040697);
    msg.setSource(31996U);
    msg.setSourceEntity(247U);
    msg.setDestination(41644U);
    msg.setDestinationEntity(240U);
    msg.x = 0.4422828384742845;
    msg.y = 0.5573706639013398;
    msg.z = 0.36993753418456576;
    msg.phi = 0.5396471417217186;
    msg.theta = 0.5174933268098693;
    msg.psi = 0.8194830866751768;

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
    msg.setTimeStamp(0.5780156975713944);
    msg.setSource(4352U);
    msg.setSourceEntity(70U);
    msg.setDestination(10291U);
    msg.setDestinationEntity(177U);
    msg.x = 0.3307385977734597;
    msg.y = 0.9788548629464434;
    msg.z = 0.9220565021121352;
    msg.phi = 0.8668654939183098;
    msg.theta = 0.808000901240172;
    msg.psi = 0.6137922543108119;

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
    msg.setTimeStamp(0.3558678927476442);
    msg.setSource(49284U);
    msg.setSourceEntity(14U);
    msg.setDestination(62585U);
    msg.setDestinationEntity(46U);
    msg.x = 0.5926020683010305;
    msg.y = 0.19713675676242326;
    msg.z = 0.5974003821458251;
    msg.phi = 0.9221473169363607;
    msg.theta = 0.3452364785050812;
    msg.psi = 0.1585774445793401;

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
    msg.setTimeStamp(0.6151265305916715);
    msg.setSource(48891U);
    msg.setSourceEntity(233U);
    msg.setDestination(44243U);
    msg.setDestinationEntity(115U);
    msg.beam_width = 0.41118682455172495;
    msg.beam_height = 0.4578458268257156;

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
    msg.setTimeStamp(0.06081839750671869);
    msg.setSource(54522U);
    msg.setSourceEntity(158U);
    msg.setDestination(54730U);
    msg.setDestinationEntity(126U);
    msg.beam_width = 0.4642566856300766;
    msg.beam_height = 0.2450634010449686;

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
    msg.setTimeStamp(0.4615139851223309);
    msg.setSource(19295U);
    msg.setSourceEntity(2U);
    msg.setDestination(26128U);
    msg.setDestinationEntity(16U);
    msg.beam_width = 0.9326379013580595;
    msg.beam_height = 0.5488665722561915;

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
    msg.setTimeStamp(0.2925700834079651);
    msg.setSource(27597U);
    msg.setSourceEntity(13U);
    msg.setDestination(40184U);
    msg.setDestinationEntity(242U);
    msg.sane = 203U;

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
    msg.setTimeStamp(0.8918259497849992);
    msg.setSource(44610U);
    msg.setSourceEntity(105U);
    msg.setDestination(40634U);
    msg.setDestinationEntity(211U);
    msg.sane = 244U;

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
    msg.setTimeStamp(0.3054288020836764);
    msg.setSource(43730U);
    msg.setSourceEntity(224U);
    msg.setDestination(601U);
    msg.setDestinationEntity(246U);
    msg.sane = 66U;

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
    msg.setTimeStamp(0.40058889553980803);
    msg.setSource(7114U);
    msg.setSourceEntity(251U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(3U);
    msg.value = 0.9413061881363172;

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
    msg.setTimeStamp(0.31815744731805995);
    msg.setSource(29897U);
    msg.setSourceEntity(19U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(165U);
    msg.value = 0.8424088589042181;

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
    msg.setTimeStamp(0.24986678674502638);
    msg.setSource(64163U);
    msg.setSourceEntity(192U);
    msg.setDestination(29006U);
    msg.setDestinationEntity(36U);
    msg.value = 0.756616373893514;

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
    msg.setTimeStamp(0.040525976588155266);
    msg.setSource(26618U);
    msg.setSourceEntity(166U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9049469065305817;

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
    msg.setTimeStamp(0.4124359533543607);
    msg.setSource(20203U);
    msg.setSourceEntity(47U);
    msg.setDestination(41310U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5312197472707222;

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
    msg.setTimeStamp(0.646141612983535);
    msg.setSource(22021U);
    msg.setSourceEntity(222U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(178U);
    msg.value = 0.1181520470102736;

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
    msg.setTimeStamp(0.6273342795032493);
    msg.setSource(20248U);
    msg.setSourceEntity(251U);
    msg.setDestination(212U);
    msg.setDestinationEntity(12U);
    msg.value = 0.7460708119211258;

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
    msg.setTimeStamp(0.3520617012511069);
    msg.setSource(52889U);
    msg.setSourceEntity(169U);
    msg.setDestination(28959U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2542954698823485;

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
    msg.setTimeStamp(0.39783472297083955);
    msg.setSource(58779U);
    msg.setSourceEntity(184U);
    msg.setDestination(12926U);
    msg.setDestinationEntity(136U);
    msg.value = 0.486779135554663;

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
    msg.setTimeStamp(0.39308550037262113);
    msg.setSource(52020U);
    msg.setSourceEntity(139U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(63U);
    msg.value = 0.350592251623148;

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
    msg.setTimeStamp(0.7582229937718511);
    msg.setSource(56935U);
    msg.setSourceEntity(242U);
    msg.setDestination(21492U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5800019388711847;

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
    msg.setTimeStamp(0.12196072684116888);
    msg.setSource(49291U);
    msg.setSourceEntity(191U);
    msg.setDestination(13271U);
    msg.setDestinationEntity(83U);
    msg.value = 0.8144067649522302;

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
    msg.setTimeStamp(0.0015293676246933563);
    msg.setSource(32174U);
    msg.setSourceEntity(31U);
    msg.setDestination(42544U);
    msg.setDestinationEntity(207U);
    msg.value = 0.6658240426280849;

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
    msg.setTimeStamp(0.23689808274734503);
    msg.setSource(35848U);
    msg.setSourceEntity(24U);
    msg.setDestination(55107U);
    msg.setDestinationEntity(163U);
    msg.value = 0.4150965327961551;

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
    msg.setTimeStamp(0.7026128324030979);
    msg.setSource(40107U);
    msg.setSourceEntity(117U);
    msg.setDestination(27782U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9983034178563599;

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
    msg.setTimeStamp(0.8207264920983127);
    msg.setSource(62342U);
    msg.setSourceEntity(180U);
    msg.setDestination(2789U);
    msg.setDestinationEntity(226U);
    msg.value = 0.32382263248735343;

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
    msg.setTimeStamp(0.43925500077760815);
    msg.setSource(53163U);
    msg.setSourceEntity(102U);
    msg.setDestination(38993U);
    msg.setDestinationEntity(18U);
    msg.value = 0.684615655403729;

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
    msg.setTimeStamp(0.15004709582449882);
    msg.setSource(4938U);
    msg.setSourceEntity(197U);
    msg.setDestination(34578U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7772392635560615;

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
    msg.setTimeStamp(0.07916449802060865);
    msg.setSource(34772U);
    msg.setSourceEntity(104U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(36U);
    msg.value = 0.5985295033522293;

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
    msg.setTimeStamp(0.5451313557987192);
    msg.setSource(4427U);
    msg.setSourceEntity(47U);
    msg.setDestination(37476U);
    msg.setDestinationEntity(166U);
    msg.value = 0.13732801445699816;

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
    msg.setTimeStamp(0.41499236068152945);
    msg.setSource(64573U);
    msg.setSourceEntity(69U);
    msg.setDestination(37361U);
    msg.setDestinationEntity(195U);
    msg.value = 0.07085235852023308;

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
    msg.setTimeStamp(0.7539338634906266);
    msg.setSource(10839U);
    msg.setSourceEntity(132U);
    msg.setDestination(50250U);
    msg.setDestinationEntity(121U);
    msg.value = 0.30818730326869637;

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
    msg.setTimeStamp(0.4881071777676158);
    msg.setSource(41848U);
    msg.setSourceEntity(52U);
    msg.setDestination(5429U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8748384459648548;

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
    msg.setTimeStamp(0.9982013247346853);
    msg.setSource(12622U);
    msg.setSourceEntity(41U);
    msg.setDestination(262U);
    msg.setDestinationEntity(189U);
    msg.value = 0.31523916434725574;

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
    msg.setTimeStamp(0.7643386802068544);
    msg.setSource(55527U);
    msg.setSourceEntity(182U);
    msg.setDestination(20762U);
    msg.setDestinationEntity(66U);
    msg.validity = 43878U;
    msg.type = 128U;
    msg.tow = 1962372417U;
    msg.base_lat = 0.28295032697771094;
    msg.base_lon = 0.7963302124407758;
    msg.base_height = 0.8322205303379583;
    msg.n = 0.2556953725738432;
    msg.e = 0.4151598243614847;
    msg.d = 0.4778704449979073;
    msg.v_n = 0.7393390394812778;
    msg.v_e = 0.08608960347186834;
    msg.v_d = 0.21490000589855274;
    msg.satellites = 107U;
    msg.iar_hyp = 7726U;
    msg.iar_ratio = 0.4680447198177571;

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
    msg.setTimeStamp(0.1621676008879841);
    msg.setSource(54869U);
    msg.setSourceEntity(106U);
    msg.setDestination(21717U);
    msg.setDestinationEntity(235U);
    msg.validity = 60941U;
    msg.type = 60U;
    msg.tow = 4199910808U;
    msg.base_lat = 0.10365642493907579;
    msg.base_lon = 0.3190587982057491;
    msg.base_height = 0.5998428472476312;
    msg.n = 0.32955493741970376;
    msg.e = 0.4272827615693473;
    msg.d = 0.6541392711573888;
    msg.v_n = 0.6950538928487267;
    msg.v_e = 0.37128310261703124;
    msg.v_d = 0.6170961330004008;
    msg.satellites = 116U;
    msg.iar_hyp = 30735U;
    msg.iar_ratio = 0.9785782335208997;

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
    msg.setTimeStamp(0.5904056721673937);
    msg.setSource(17843U);
    msg.setSourceEntity(37U);
    msg.setDestination(20498U);
    msg.setDestinationEntity(142U);
    msg.validity = 811U;
    msg.type = 29U;
    msg.tow = 3009982297U;
    msg.base_lat = 0.4020106094968643;
    msg.base_lon = 0.7526941188784626;
    msg.base_height = 0.5076489393076936;
    msg.n = 0.6519844962906852;
    msg.e = 0.6855861088364016;
    msg.d = 0.22303325333797064;
    msg.v_n = 0.09761665990612367;
    msg.v_e = 0.0863257131602777;
    msg.v_d = 0.1995897644508582;
    msg.satellites = 154U;
    msg.iar_hyp = 30328U;
    msg.iar_ratio = 0.9262358549048588;

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
    msg.setTimeStamp(0.49047655717828564);
    msg.setSource(39705U);
    msg.setSourceEntity(24U);
    msg.setDestination(44551U);
    msg.setDestinationEntity(24U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7090128001094347;
    tmp_msg_0.lon = 0.8347356931645847;
    tmp_msg_0.height = 0.14608994418429344;
    tmp_msg_0.x = 0.9497366028562978;
    tmp_msg_0.y = 0.9918640475084217;
    tmp_msg_0.z = 0.8276108835325579;
    tmp_msg_0.phi = 0.04487768594336816;
    tmp_msg_0.theta = 0.977178021580363;
    tmp_msg_0.psi = 0.038107505350126525;
    tmp_msg_0.u = 0.9764639321196247;
    tmp_msg_0.v = 0.11202097104528663;
    tmp_msg_0.w = 0.2972451938711901;
    tmp_msg_0.vx = 0.8839096989978832;
    tmp_msg_0.vy = 0.3806944947392811;
    tmp_msg_0.vz = 0.8216356921035771;
    tmp_msg_0.p = 0.7885652292374575;
    tmp_msg_0.q = 0.9119813710562862;
    tmp_msg_0.r = 0.6734487084819765;
    tmp_msg_0.depth = 0.7305223189263211;
    tmp_msg_0.alt = 0.25437730444009565;
    msg.state.set(tmp_msg_0);
    msg.type = 221U;

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
    msg.setTimeStamp(0.8498592426918321);
    msg.setSource(4071U);
    msg.setSourceEntity(230U);
    msg.setDestination(25579U);
    msg.setDestinationEntity(55U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.3787036090802085;
    tmp_msg_0.lon = 0.24452047818501454;
    tmp_msg_0.height = 0.362560974387828;
    tmp_msg_0.x = 0.7805067561280086;
    tmp_msg_0.y = 0.1436863222097502;
    tmp_msg_0.z = 0.6866623491375402;
    tmp_msg_0.phi = 0.9667117764911426;
    tmp_msg_0.theta = 0.2844004560116382;
    tmp_msg_0.psi = 0.16007213472280035;
    tmp_msg_0.u = 0.23005066660023732;
    tmp_msg_0.v = 0.11040958372439158;
    tmp_msg_0.w = 0.9566428523235396;
    tmp_msg_0.vx = 0.3486247529540252;
    tmp_msg_0.vy = 0.11459366131721593;
    tmp_msg_0.vz = 0.24971092199060163;
    tmp_msg_0.p = 0.7791603106681771;
    tmp_msg_0.q = 0.41646357220127916;
    tmp_msg_0.r = 0.8098155524107243;
    tmp_msg_0.depth = 0.8475105859662745;
    tmp_msg_0.alt = 0.5586991178662926;
    msg.state.set(tmp_msg_0);
    msg.type = 19U;

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
    msg.setTimeStamp(0.31553134698345486);
    msg.setSource(1872U);
    msg.setSourceEntity(186U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(40U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4947709068308498;
    tmp_msg_0.lon = 0.2360451271517543;
    tmp_msg_0.height = 0.5714573707178542;
    tmp_msg_0.x = 0.7523754412340655;
    tmp_msg_0.y = 0.6920398509684054;
    tmp_msg_0.z = 0.005221098399658675;
    tmp_msg_0.phi = 0.6756763035978111;
    tmp_msg_0.theta = 0.38279449533015164;
    tmp_msg_0.psi = 0.8181235093955199;
    tmp_msg_0.u = 0.6442157856787764;
    tmp_msg_0.v = 0.5104638242064288;
    tmp_msg_0.w = 0.1252072578073664;
    tmp_msg_0.vx = 0.6141366423401299;
    tmp_msg_0.vy = 0.10304153561949059;
    tmp_msg_0.vz = 0.904081390281072;
    tmp_msg_0.p = 0.4846354561917293;
    tmp_msg_0.q = 0.4585351100816202;
    tmp_msg_0.r = 0.3575560717549514;
    tmp_msg_0.depth = 0.61913964814712;
    tmp_msg_0.alt = 0.30471567830841906;
    msg.state.set(tmp_msg_0);
    msg.type = 114U;

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
    msg.setTimeStamp(0.9696303133205018);
    msg.setSource(42084U);
    msg.setSourceEntity(68U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(159U);
    msg.value = 0.038970368224800156;

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
    msg.setTimeStamp(0.5096644773471198);
    msg.setSource(31139U);
    msg.setSourceEntity(213U);
    msg.setDestination(30432U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7044243265991833;

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
    msg.setTimeStamp(0.571580246893307);
    msg.setSource(45689U);
    msg.setSourceEntity(176U);
    msg.setDestination(46500U);
    msg.setDestinationEntity(11U);
    msg.value = 0.4569056679407064;

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
    msg.setTimeStamp(0.048002375122125684);
    msg.setSource(4066U);
    msg.setSourceEntity(123U);
    msg.setDestination(20237U);
    msg.setDestinationEntity(236U);
    msg.value = 0.9493716846665953;

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
    msg.setTimeStamp(0.5489471210449539);
    msg.setSource(16388U);
    msg.setSourceEntity(249U);
    msg.setDestination(63514U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6013349893042655;

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
    msg.setTimeStamp(0.9206317884401136);
    msg.setSource(15529U);
    msg.setSourceEntity(70U);
    msg.setDestination(43795U);
    msg.setDestinationEntity(31U);
    msg.value = 0.1101766786001871;

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
    msg.setTimeStamp(0.014898167851454591);
    msg.setSource(31500U);
    msg.setSourceEntity(81U);
    msg.setDestination(13089U);
    msg.setDestinationEntity(39U);
    msg.value = 0.218947296127462;

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
    msg.setTimeStamp(0.2671102767465636);
    msg.setSource(49995U);
    msg.setSourceEntity(156U);
    msg.setDestination(62197U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9938961432058845;

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
    msg.setTimeStamp(0.589749894572671);
    msg.setSource(17079U);
    msg.setSourceEntity(25U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(84U);
    msg.value = 0.9254148793831853;

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
    msg.setTimeStamp(0.6954393433256145);
    msg.setSource(49312U);
    msg.setSourceEntity(62U);
    msg.setDestination(23083U);
    msg.setDestinationEntity(27U);
    msg.value = 0.9854360005500614;

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
    msg.setTimeStamp(0.2973489259214629);
    msg.setSource(14270U);
    msg.setSourceEntity(214U);
    msg.setDestination(25675U);
    msg.setDestinationEntity(144U);
    msg.value = 0.21659034160992074;

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
    msg.setTimeStamp(0.21935850516587507);
    msg.setSource(17434U);
    msg.setSourceEntity(11U);
    msg.setDestination(34000U);
    msg.setDestinationEntity(27U);
    msg.value = 0.4936683654196776;

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
    msg.setTimeStamp(0.6359908496722612);
    msg.setSource(15522U);
    msg.setSourceEntity(25U);
    msg.setDestination(2889U);
    msg.setDestinationEntity(225U);
    msg.value = 0.679070892615942;

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
    msg.setTimeStamp(0.945838516991458);
    msg.setSource(1789U);
    msg.setSourceEntity(160U);
    msg.setDestination(22392U);
    msg.setDestinationEntity(203U);
    msg.value = 0.44671235583928093;

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
    msg.setTimeStamp(0.7779183027891512);
    msg.setSource(64813U);
    msg.setSourceEntity(95U);
    msg.setDestination(26209U);
    msg.setDestinationEntity(153U);
    msg.value = 0.08671129663371913;

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
    msg.setTimeStamp(0.06003990616266919);
    msg.setSource(1612U);
    msg.setSourceEntity(66U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(116U);
    msg.id = 239U;
    msg.zoom = 192U;
    msg.action = 253U;

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
    msg.setTimeStamp(0.8417557468555976);
    msg.setSource(50122U);
    msg.setSourceEntity(130U);
    msg.setDestination(45995U);
    msg.setDestinationEntity(159U);
    msg.id = 10U;
    msg.zoom = 179U;
    msg.action = 137U;

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
    msg.setTimeStamp(0.9543014688192125);
    msg.setSource(12637U);
    msg.setSourceEntity(54U);
    msg.setDestination(38517U);
    msg.setDestinationEntity(23U);
    msg.id = 85U;
    msg.zoom = 140U;
    msg.action = 213U;

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
    msg.setTimeStamp(0.8984877617741478);
    msg.setSource(1402U);
    msg.setSourceEntity(206U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(11U);
    msg.id = 113U;
    msg.value = 0.40662600799401216;

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
    msg.setTimeStamp(0.29674099119814734);
    msg.setSource(64830U);
    msg.setSourceEntity(229U);
    msg.setDestination(55845U);
    msg.setDestinationEntity(175U);
    msg.id = 120U;
    msg.value = 0.14967366346005184;

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
    msg.setTimeStamp(0.07352925435796653);
    msg.setSource(49635U);
    msg.setSourceEntity(70U);
    msg.setDestination(60295U);
    msg.setDestinationEntity(135U);
    msg.id = 97U;
    msg.value = 0.9130194891766814;

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
    msg.setTimeStamp(0.6119366678612429);
    msg.setSource(64758U);
    msg.setSourceEntity(61U);
    msg.setDestination(36577U);
    msg.setDestinationEntity(182U);
    msg.id = 147U;
    msg.value = 0.07803807200275537;

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
    msg.setTimeStamp(0.0900880816603522);
    msg.setSource(13406U);
    msg.setSourceEntity(97U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(212U);
    msg.id = 64U;
    msg.value = 0.2191507143185667;

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
    msg.setTimeStamp(0.3873226569645556);
    msg.setSource(11339U);
    msg.setSourceEntity(217U);
    msg.setDestination(56453U);
    msg.setDestinationEntity(58U);
    msg.id = 206U;
    msg.value = 0.08963410731998223;

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
    msg.setTimeStamp(0.38445564088336226);
    msg.setSource(27201U);
    msg.setSourceEntity(161U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(175U);
    msg.id = 162U;
    msg.angle = 0.7740588561006467;

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
    msg.setTimeStamp(0.7982950236953267);
    msg.setSource(40730U);
    msg.setSourceEntity(46U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(206U);
    msg.id = 182U;
    msg.angle = 0.3353497106972738;

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
    msg.setTimeStamp(0.9917778660387918);
    msg.setSource(37460U);
    msg.setSourceEntity(245U);
    msg.setDestination(30204U);
    msg.setDestinationEntity(252U);
    msg.id = 211U;
    msg.angle = 0.35010788176720375;

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
    msg.setTimeStamp(0.3293594758497361);
    msg.setSource(48593U);
    msg.setSourceEntity(190U);
    msg.setDestination(40505U);
    msg.setDestinationEntity(146U);
    msg.op = 51U;
    msg.actions.assign("LBYLSTGCEGOKTVCAGORNOIIRCLLDNTVYBHOSKQMWLJEMPFZDJDHWOREGUQIVYFTGHMFTEQKSCQEWOXCJHXRXRSSMYWIOTYUOYLGGTIPDIFAAKSIAALMEQPZNMSJWNYKYJKNWSGHFJCKFFVUUCUINTUPQUVYHLJRVTEQJAMLTKBYKCDFQBUOZWJNJPMXFLVWXPIXDPENRNNPDXVXZQDADDRHBABWRKVHZUZBZWACZEZXPQCGPZFS");

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
    msg.setTimeStamp(0.5952636705237222);
    msg.setSource(56744U);
    msg.setSourceEntity(18U);
    msg.setDestination(56555U);
    msg.setDestinationEntity(206U);
    msg.op = 185U;
    msg.actions.assign("NZNFSFPHPOTFPKQVWGSDZUYCPRAJXZFI");

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
    msg.setTimeStamp(0.35535149509377106);
    msg.setSource(44067U);
    msg.setSourceEntity(150U);
    msg.setDestination(35503U);
    msg.setDestinationEntity(123U);
    msg.op = 93U;
    msg.actions.assign("EFPHNYOZICRVZPLTVEPSLNCRUAARRPQFURAWHVEFMEGTIFFJABWJSXHQJFQAMLZWGIUKOOHFIVDQVNXHCFCFBRBTVYCCOLJBUTUVD");

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
    msg.setTimeStamp(0.2475120584757623);
    msg.setSource(50174U);
    msg.setSourceEntity(26U);
    msg.setDestination(47553U);
    msg.setDestinationEntity(243U);
    msg.actions.assign("RYOCJDTUOZRRPWEAFDNSPILAWDGPGFMLDFZAFQQXMXWPJFKVKNBVKCALFBTUSYQMUUXQHEIWGJJPQZUUEVYLBNPRYDLAYEEBIDVOZMKLMHONJJTZIXIMIGMBXAKKTSLCVIROTOSKQRAWTHEGDTLHJSZTBVGMZZWKRALYZLUCF");

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
    msg.setTimeStamp(0.9981989380363111);
    msg.setSource(27425U);
    msg.setSourceEntity(15U);
    msg.setDestination(12534U);
    msg.setDestinationEntity(33U);
    msg.actions.assign("WWHMMINUYPVYSEGDXVVOZSTKCGHWRUMCZZCQQGMWYCSIVLKOXIHWKKIERHOTZKYNEKMDODSWPLCLRFZWEXFRNKCPWVTJIQDBSAQELBVBHBEFGARABFXISQVJJJMNXLRJDHOGEQTTBFNQXWRUGSXUALJVPFJHISMTCEYLTWJPCQMTXPEVYRBONIZCDQXOGVPUROYNOAXAHUULDMDIAZSJR");

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
    msg.setTimeStamp(0.8780345430154952);
    msg.setSource(54517U);
    msg.setSourceEntity(118U);
    msg.setDestination(21982U);
    msg.setDestinationEntity(197U);
    msg.actions.assign("ECEXLEYQCANVJKCSYWYGNTUYGSFQCUKEIYKINVPRMPWINZFCXKUUKPXOALLSZSGDCLNIDGUQZBJJWZJIWWWGGRZVIEMVGYWERHRVZHJNJHKQUNXZYHFDYJMJXOKHCOQRNOBQVSPANAOGBPXZOUFPBAGDCXRDLQSMFTOTTOMTQLIHKHXAPSCBFEYULXTHE");

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
    msg.setTimeStamp(0.530273066961764);
    msg.setSource(59294U);
    msg.setSourceEntity(114U);
    msg.setDestination(19049U);
    msg.setDestinationEntity(166U);
    msg.button = 166U;
    msg.value = 189U;

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
    msg.setTimeStamp(0.005637481402358091);
    msg.setSource(57916U);
    msg.setSourceEntity(73U);
    msg.setDestination(45757U);
    msg.setDestinationEntity(249U);
    msg.button = 205U;
    msg.value = 152U;

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
    msg.setTimeStamp(0.8190835385546579);
    msg.setSource(29028U);
    msg.setSourceEntity(63U);
    msg.setDestination(62602U);
    msg.setDestinationEntity(223U);
    msg.button = 2U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.5290156002507959);
    msg.setSource(12180U);
    msg.setSourceEntity(113U);
    msg.setDestination(64731U);
    msg.setDestinationEntity(245U);
    msg.op = 81U;
    msg.text.assign("ELBRWIMMHYAQCHQASWJGURGMLHBGHYBIXGWDVWDSDWEISJYVTEDKXHEZNJABUAXFJESPYEZSLWMRGDVKPPBVBJFZRKECBYFUMUVGKJCSSRLNQYUBWKQSPUHHGZQKMOXLLYOCHSXMXDIOTTPHPMDPBCTDKKNAVXTQFNULFCXIUQVWNWZJZLOCUOADRTONTXVPQCFUYRKQZENFGJAECZJA");

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
    msg.setTimeStamp(0.7316430953164598);
    msg.setSource(43705U);
    msg.setSourceEntity(147U);
    msg.setDestination(52636U);
    msg.setDestinationEntity(31U);
    msg.op = 146U;
    msg.text.assign("GTGIXDSLIRTEYXCLVSRKJYBNDJNUWHQQMIHFZWPNSHYOIOBUHQOZLMDFVGAJGYYBASLRAOKZTDFDNDRZROVGUNWPIYSOWPWCDHUTFOBOTKDQXGVCJZWXSTYEOKPUMXZWRLGAHFEZJETQ");

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
    msg.setTimeStamp(0.6065219331009424);
    msg.setSource(30014U);
    msg.setSourceEntity(208U);
    msg.setDestination(39266U);
    msg.setDestinationEntity(60U);
    msg.op = 121U;
    msg.text.assign("VNEHJISWFCIDZPAKXEPUIYMAGAKKRXGGTMJVDOXQNDNYHOZUFDOEHWCUDLPSHKTRHZGNPCBBGSQVDMAILLLPQCNGTQVPRYHFOJMFQMRMCUKETGYIDJBJFXZKJLFXQQVEXHPWDRQEGYUTWKRBZGYVUCWWRPRYNWEWFOOQBVRFXACMMBLFSVZJZHSUMHJFEOYNIAATTTEUOXDPYIZTDASVRANS");

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
    msg.setTimeStamp(0.28631323748675563);
    msg.setSource(33765U);
    msg.setSourceEntity(234U);
    msg.setDestination(26925U);
    msg.setDestinationEntity(29U);
    msg.op = 183U;
    msg.time_remain = 0.03627658633267283;
    msg.sched_time = 0.5919878768869371;

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
    msg.setTimeStamp(0.9634253656242627);
    msg.setSource(21218U);
    msg.setSourceEntity(248U);
    msg.setDestination(53340U);
    msg.setDestinationEntity(12U);
    msg.op = 173U;
    msg.time_remain = 0.323729516791344;
    msg.sched_time = 0.05172519083894844;

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
    msg.setTimeStamp(0.8381696213380211);
    msg.setSource(15000U);
    msg.setSourceEntity(241U);
    msg.setDestination(57109U);
    msg.setDestinationEntity(233U);
    msg.op = 171U;
    msg.time_remain = 0.7710417001735279;
    msg.sched_time = 0.6686447339362778;

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
    msg.setTimeStamp(0.5349076820260331);
    msg.setSource(55911U);
    msg.setSourceEntity(98U);
    msg.setDestination(39233U);
    msg.setDestinationEntity(115U);
    msg.name.assign("HXYTIQLLDXHTQMZVPDWQQDOVXGX");
    msg.op = 134U;
    msg.sched_time = 0.4819748396003297;

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
    msg.setTimeStamp(0.5043459650045266);
    msg.setSource(64391U);
    msg.setSourceEntity(214U);
    msg.setDestination(4689U);
    msg.setDestinationEntity(178U);
    msg.name.assign("XODAJCQTDDHXNIRWBXFRUECZBEIPSCVFGXSXJJMGBHSMXZQFWLGGKMKAOULNQORFYLJGBFAOPRGTBSBKNWJEZTKNTVOBFQOGPSWMJDNLPKFAVNERDLLUEKAZEYHYPNQJJWPUSDXRLGHADWAKNTFIQPNKFZKVYPYGWZTVWIYVVUNEJIHJHVAPWMBUEZYLZWMQVEHMOUVGTIAIBCODHZUYTYQUQMMDFCHSTSCLOZSRHCAEPRILKRSCCQXXUIRTI");
    msg.op = 142U;
    msg.sched_time = 0.04237075531540291;

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
    msg.setTimeStamp(0.27472310387257626);
    msg.setSource(19714U);
    msg.setSourceEntity(210U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(3U);
    msg.name.assign("YSPWSDCRGEEZMPDQAPUVBKUWLTZGCYEQSNXHNKXFAWVRICIFLYOHRTTKWPYZIDNCVGJGKSHUTJMFDJBBXRXW");
    msg.op = 51U;
    msg.sched_time = 0.36825245862218814;

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
    msg.setTimeStamp(0.8710971128290536);
    msg.setSource(32715U);
    msg.setSourceEntity(173U);
    msg.setDestination(51388U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.9548406791015359);
    msg.setSource(28272U);
    msg.setSourceEntity(75U);
    msg.setDestination(54057U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.9785046130260612);
    msg.setSource(27683U);
    msg.setSourceEntity(108U);
    msg.setDestination(56534U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.29309106500497495);
    msg.setSource(62444U);
    msg.setSourceEntity(7U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(5U);
    msg.name.assign("AQOHAYHGVOIBYRGKVNZDPXQPHNFCRXQTYOVWDTNCPGSVYWNWDXSMHEAHJTMZYRTMOAFEETTKEZMRZIZYVBSRLVAGFKIDWIFNAYPQGLCJPZUUKILCQ");
    msg.state = 190U;

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
    msg.setTimeStamp(0.19374133331074894);
    msg.setSource(23972U);
    msg.setSourceEntity(106U);
    msg.setDestination(18173U);
    msg.setDestinationEntity(169U);
    msg.name.assign("CQGGOXMICLUAAXXGZYKEJSOZCBLBMCMKEDHRBNWGANFUPXEPVUVSUKTFEWHSAJRLLFINKWQVGJDKYSWHGFSHOOFJRTQTRIXXJOLPZHHIOUCUTPDJTQNWEKQLVPNMSKZKVZWTQYYG");
    msg.state = 119U;

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
    msg.setTimeStamp(0.8944270057650654);
    msg.setSource(63452U);
    msg.setSourceEntity(33U);
    msg.setDestination(55181U);
    msg.setDestinationEntity(3U);
    msg.name.assign("DBGLOSVVIOXYZGOTRVXMMXFVVSOZZKLEIEJXFWQJUGCQMDVRGZTKXDCHCWRKEXIUJYTWHDALDABLDTWMACJNTQVYCHHBQNCORPAMMGDOQBQFSBWLRMVSXPHHQVULAWNNZNFCYJZDRFURKBWEHTPAXIM");
    msg.state = 116U;

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
    msg.setTimeStamp(0.3736414515053951);
    msg.setSource(61388U);
    msg.setSourceEntity(35U);
    msg.setDestination(16456U);
    msg.setDestinationEntity(241U);
    msg.name.assign("SAVSZJARCHLXKBYBKVFFCJRCKNIZOQDVHDTZHCNKLQOU");
    msg.value = 194U;

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
    msg.setTimeStamp(0.6876203191211342);
    msg.setSource(56100U);
    msg.setSourceEntity(73U);
    msg.setDestination(35494U);
    msg.setDestinationEntity(102U);
    msg.name.assign("TYBNZIQRASAEIDNPDMWDECZKVFXQWDFWMYLIBCVPDKTRPNVHZDZJUZRAFFKYLSQECOJKXQGMWGOPTHNGUXZWVYOQTJKYLQJPJUYUHYDGTPPKEUPVKYMBRUBWZ");
    msg.value = 5U;

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
    msg.setTimeStamp(0.25897426947271307);
    msg.setSource(41788U);
    msg.setSourceEntity(24U);
    msg.setDestination(38243U);
    msg.setDestinationEntity(181U);
    msg.name.assign("OGPSLTLSKAMVWJBZNSUHUSHDISLLIPPDRQIATOMXHODANZCUXEPITKEQWCVBEIKJLMXQJRLRTBSGGAOZUNGDRJVMFUYNYFRIJOHIEGVWOMCNDZVLABHMNVCTNCN");
    msg.value = 20U;

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
    msg.setTimeStamp(0.8711590613744445);
    msg.setSource(98U);
    msg.setSourceEntity(214U);
    msg.setDestination(34001U);
    msg.setDestinationEntity(210U);
    msg.name.assign("KWXASODGVJYCFBNRJCYCFEMVYNIBJJDZLPFWLJXDRVDXRTGUQZWDZIHXRDTENEPSPQIWHXAFFYPZGHBOEKVHVAAOYFVSBYUTTJKPOIXFXBOMTILTMLKIJLHLVDSQUSCKRRRFRNUWJVMPWMRJKABSGI");

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
    msg.setTimeStamp(0.919538505144558);
    msg.setSource(40116U);
    msg.setSourceEntity(72U);
    msg.setDestination(18636U);
    msg.setDestinationEntity(86U);
    msg.name.assign("BJJPLVMSDLPXABQEYWKDJJDATHYCKQRVZDDKJQOKIIJTLKPWAZJIMFQBZQNVNKZEPQHXCEYUAKCRDPVFUHLDMFDWXBICWLARRQKNFMQCDAHXOYBIRKUUCPVZOUZBVGOZOOSHHOFBFERNGBXWWTFJFTAOYNYQNPEPLRWGOFSLVXBGLIQUNKVUBETUHYNGIPMIAZFYUWPRMZRSUEMGEGESTMTYNELNSCZGXCOT");

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
    msg.setTimeStamp(0.9362521331980745);
    msg.setSource(17849U);
    msg.setSourceEntity(203U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(10U);
    msg.name.assign("XWPWXHIGEOYADAWWULBGWSRJGFBZMHPBFGQLRUERMLISNIOVMSQYENMFRHDVUDVIQAHIOTDEQDJIWGKBZKMMBLRKYZCTBPREPVPQAHXOMLWETPLJNZIFNRCEJNYTKCNFGATUHVTSOVGIUJUHUXVTXPRCZQDYVEKXKDHZOUZCLDLYSGKVCJMAQFSFTFUGFMLJAXJOSGVCIKECWCNMALOROYEDUSAWQBNCHZOKZZSPHQNKRABXY");

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
    msg.setTimeStamp(0.6631562556640228);
    msg.setSource(62947U);
    msg.setSourceEntity(142U);
    msg.setDestination(12801U);
    msg.setDestinationEntity(144U);
    msg.name.assign("ERDAAKNGIRSCVBIYOOLLDZITFQKLJYGVDDOIFXRPUQDWZYFQCASYDLJXVHULMIISWDXNMJLEVXXWETJJZKJGAPBYPKODIPJWRZEPTBZOLPWTLWNOPUAROVVVMRRWXTOIIDLASZQQNVEFCJQOUKFGE");
    msg.value = 132U;

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
    msg.setTimeStamp(0.08660095748121477);
    msg.setSource(63224U);
    msg.setSourceEntity(135U);
    msg.setDestination(37532U);
    msg.setDestinationEntity(1U);
    msg.name.assign("EWYALXPBKXHACCQJKXUOFIMIVPHDUGILDAQUHFVRQAOHJMYACLWIZMWHVXJLEPNHZSTXEWUNNXGRQRGEYTFJCMZCDQSAPSZCAZVTBBUEHCMDCNUYXYJFORGDPFVGLBGRWNJRVWQKYBFLSTYBXV");
    msg.value = 24U;

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
    msg.setTimeStamp(0.6126525286411868);
    msg.setSource(45131U);
    msg.setSourceEntity(244U);
    msg.setDestination(30442U);
    msg.setDestinationEntity(184U);
    msg.name.assign("OZBRAUBLCIWXKDGPINKHFINFGRWWMGYLLIHEOGVRKOJRCJJEGBHAGGCTWDVYYEAYJWPFKQJLZSRTXAMDMSSELJJTNKT");
    msg.value = 108U;

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
    msg.setTimeStamp(0.3162915747300481);
    msg.setSource(57490U);
    msg.setSourceEntity(227U);
    msg.setDestination(16184U);
    msg.setDestinationEntity(7U);
    msg.id = 28U;
    msg.period = 907512980U;
    msg.duty_cycle = 333152703U;

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
    msg.setTimeStamp(0.9731475073869055);
    msg.setSource(55970U);
    msg.setSourceEntity(140U);
    msg.setDestination(3882U);
    msg.setDestinationEntity(248U);
    msg.id = 95U;
    msg.period = 11666983U;
    msg.duty_cycle = 4175553823U;

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
    msg.setTimeStamp(0.16636790037329918);
    msg.setSource(20262U);
    msg.setSourceEntity(153U);
    msg.setDestination(41066U);
    msg.setDestinationEntity(107U);
    msg.id = 189U;
    msg.period = 185544549U;
    msg.duty_cycle = 294611087U;

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
    msg.setTimeStamp(0.5468580312355238);
    msg.setSource(63872U);
    msg.setSourceEntity(246U);
    msg.setDestination(46785U);
    msg.setDestinationEntity(123U);
    msg.id = 158U;
    msg.period = 2047185297U;
    msg.duty_cycle = 820724350U;

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
    msg.setTimeStamp(0.5207683803126586);
    msg.setSource(65139U);
    msg.setSourceEntity(73U);
    msg.setDestination(41199U);
    msg.setDestinationEntity(47U);
    msg.id = 73U;
    msg.period = 1564034689U;
    msg.duty_cycle = 2097190628U;

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
    msg.setTimeStamp(0.1052718083879528);
    msg.setSource(33965U);
    msg.setSourceEntity(68U);
    msg.setDestination(63965U);
    msg.setDestinationEntity(195U);
    msg.id = 155U;
    msg.period = 2583406928U;
    msg.duty_cycle = 2378741659U;

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
    msg.setTimeStamp(0.07202275038431738);
    msg.setSource(58413U);
    msg.setSourceEntity(164U);
    msg.setDestination(54002U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.9493736751638632;
    msg.lon = 0.03074574274656916;
    msg.height = 0.9793588027166846;
    msg.x = 0.06392026990550437;
    msg.y = 0.8289273060488856;
    msg.z = 0.5123410189081194;
    msg.phi = 0.4303160820480658;
    msg.theta = 0.1395862205065187;
    msg.psi = 0.9234292941398814;
    msg.u = 0.49933138101239904;
    msg.v = 0.7162017647232067;
    msg.w = 0.652269543727847;
    msg.vx = 0.12466474168596609;
    msg.vy = 0.325052812223671;
    msg.vz = 0.05453177366128614;
    msg.p = 0.6122921850499358;
    msg.q = 0.4941507863048076;
    msg.r = 0.25323028623932153;
    msg.depth = 0.13638020935555983;
    msg.alt = 0.14561451087078747;

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
    msg.setTimeStamp(0.4778900606710046);
    msg.setSource(55814U);
    msg.setSourceEntity(133U);
    msg.setDestination(15073U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.30111854677366257;
    msg.lon = 0.5488166204628827;
    msg.height = 0.11473637535650794;
    msg.x = 0.5198067747687432;
    msg.y = 0.6296894780475976;
    msg.z = 0.8687094361581469;
    msg.phi = 0.9017795996041391;
    msg.theta = 0.8445552577712478;
    msg.psi = 0.9150191309791047;
    msg.u = 0.20234849602498406;
    msg.v = 0.7150836271191295;
    msg.w = 0.5027415168865811;
    msg.vx = 0.6128688628643586;
    msg.vy = 0.5432038657574715;
    msg.vz = 0.45626107822247297;
    msg.p = 0.8824088447225187;
    msg.q = 0.19357089464703514;
    msg.r = 0.7306679533706909;
    msg.depth = 0.5817207304399976;
    msg.alt = 0.7985489769379983;

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
    msg.setTimeStamp(0.15448804668520288);
    msg.setSource(4462U);
    msg.setSourceEntity(190U);
    msg.setDestination(6402U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.519574165693803;
    msg.lon = 0.5857833124647348;
    msg.height = 0.04437056000496731;
    msg.x = 0.540164022587417;
    msg.y = 0.6419251399834944;
    msg.z = 0.23113421164650627;
    msg.phi = 0.37863338156552817;
    msg.theta = 0.08468368092651557;
    msg.psi = 0.22226230928436563;
    msg.u = 0.4284873562190842;
    msg.v = 0.5482368120894857;
    msg.w = 0.40384051457245007;
    msg.vx = 0.14692129094931283;
    msg.vy = 0.5207870534379001;
    msg.vz = 0.048352443689553715;
    msg.p = 0.4444917624836602;
    msg.q = 0.5060775714053554;
    msg.r = 0.9708288138712482;
    msg.depth = 0.8948287824577631;
    msg.alt = 0.23924321197943854;

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
    msg.setTimeStamp(0.4031989138222072);
    msg.setSource(16374U);
    msg.setSourceEntity(143U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(149U);
    msg.x = 0.5552423716559328;
    msg.y = 0.08829312715914672;
    msg.z = 0.5388668212018315;

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
    msg.setTimeStamp(0.057040476978157506);
    msg.setSource(2734U);
    msg.setSourceEntity(165U);
    msg.setDestination(19504U);
    msg.setDestinationEntity(41U);
    msg.x = 0.2910893147633503;
    msg.y = 0.620327069170425;
    msg.z = 0.3916398105464448;

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
    msg.setTimeStamp(0.7268406153370542);
    msg.setSource(40699U);
    msg.setSourceEntity(24U);
    msg.setDestination(7991U);
    msg.setDestinationEntity(23U);
    msg.x = 0.9069392047874959;
    msg.y = 0.44317040152833875;
    msg.z = 0.8320975437840544;

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
    msg.setTimeStamp(0.09671366683559157);
    msg.setSource(56837U);
    msg.setSourceEntity(218U);
    msg.setDestination(48338U);
    msg.setDestinationEntity(194U);
    msg.value = 0.09394590688578042;

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
    msg.setTimeStamp(0.4222106782488946);
    msg.setSource(9323U);
    msg.setSourceEntity(217U);
    msg.setDestination(927U);
    msg.setDestinationEntity(64U);
    msg.value = 0.18615915863602117;

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
    msg.setTimeStamp(0.9237800475352657);
    msg.setSource(39007U);
    msg.setSourceEntity(228U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(4U);
    msg.value = 0.780549521798766;

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
    msg.setTimeStamp(0.3864886561088182);
    msg.setSource(35404U);
    msg.setSourceEntity(186U);
    msg.setDestination(58097U);
    msg.setDestinationEntity(102U);
    msg.value = 0.27699247039577635;

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
    msg.setTimeStamp(0.7052918304784301);
    msg.setSource(21556U);
    msg.setSourceEntity(216U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(178U);
    msg.value = 0.2935310365203547;

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
    msg.setTimeStamp(0.03440450712704546);
    msg.setSource(730U);
    msg.setSourceEntity(160U);
    msg.setDestination(50855U);
    msg.setDestinationEntity(151U);
    msg.value = 0.9772696190823454;

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
    msg.setTimeStamp(0.3951346378352333);
    msg.setSource(50042U);
    msg.setSourceEntity(252U);
    msg.setDestination(27480U);
    msg.setDestinationEntity(209U);
    msg.x = 0.18541093261574504;
    msg.y = 0.5697688711914833;
    msg.z = 0.731286139201568;
    msg.phi = 0.5380896162735707;
    msg.theta = 0.11678500845138085;
    msg.psi = 0.4249963423041838;
    msg.p = 0.14604903357889598;
    msg.q = 0.1807863171854477;
    msg.r = 0.9116423567865424;
    msg.u = 0.9005025463878172;
    msg.v = 0.3827578777322306;
    msg.w = 0.3757639093024092;
    msg.bias_psi = 0.6808298749571909;
    msg.bias_r = 0.8502318876010716;

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
    msg.setTimeStamp(0.08997796537240377);
    msg.setSource(40232U);
    msg.setSourceEntity(0U);
    msg.setDestination(331U);
    msg.setDestinationEntity(23U);
    msg.x = 0.13756503735811176;
    msg.y = 0.4469274987384476;
    msg.z = 0.23766745240105924;
    msg.phi = 0.8580845794839862;
    msg.theta = 0.009590739394423675;
    msg.psi = 0.2979759476844751;
    msg.p = 0.012801258284865003;
    msg.q = 0.9745050345593627;
    msg.r = 0.10818636553695582;
    msg.u = 0.3470194178220044;
    msg.v = 0.3836517932176874;
    msg.w = 0.26794233373794984;
    msg.bias_psi = 0.8144849556918939;
    msg.bias_r = 0.6559567208977428;

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
    msg.setTimeStamp(0.35514799993164925);
    msg.setSource(48061U);
    msg.setSourceEntity(15U);
    msg.setDestination(45845U);
    msg.setDestinationEntity(102U);
    msg.x = 0.41812053421401807;
    msg.y = 0.9271175118782128;
    msg.z = 0.7212675069013886;
    msg.phi = 0.3397010127848705;
    msg.theta = 0.27790169017035127;
    msg.psi = 0.588132511618728;
    msg.p = 0.8327788723497793;
    msg.q = 0.41252677465974696;
    msg.r = 0.3692129617096709;
    msg.u = 0.5096570251975735;
    msg.v = 0.43227666729857883;
    msg.w = 0.08901592693592453;
    msg.bias_psi = 0.6277227274889546;
    msg.bias_r = 0.2450168271656762;

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
    msg.setTimeStamp(0.8782811636962796);
    msg.setSource(20552U);
    msg.setSourceEntity(149U);
    msg.setDestination(34822U);
    msg.setDestinationEntity(4U);
    msg.bias_psi = 0.4939128753383383;
    msg.bias_r = 0.1727618610703946;
    msg.cog = 0.33631736174068083;
    msg.cyaw = 0.2841907850177976;
    msg.lbl_rej_level = 0.9739577555026316;
    msg.gps_rej_level = 0.5474426639423573;
    msg.custom_x = 0.5932574608660446;
    msg.custom_y = 0.8257805988709898;
    msg.custom_z = 0.9399105180242892;

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
    msg.setTimeStamp(0.8776516904129025);
    msg.setSource(18076U);
    msg.setSourceEntity(192U);
    msg.setDestination(23545U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.25348071300728126;
    msg.bias_r = 0.5078658786540203;
    msg.cog = 0.7765305723558659;
    msg.cyaw = 0.2302219429932042;
    msg.lbl_rej_level = 0.5343810379997489;
    msg.gps_rej_level = 0.8925002747665208;
    msg.custom_x = 0.7361529071910042;
    msg.custom_y = 0.5267853365698523;
    msg.custom_z = 0.8928545748091045;

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
    msg.setTimeStamp(0.12608308346749975);
    msg.setSource(5836U);
    msg.setSourceEntity(21U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(155U);
    msg.bias_psi = 0.49689485216773976;
    msg.bias_r = 0.40798673489613635;
    msg.cog = 0.1260309456709624;
    msg.cyaw = 0.40777872714653096;
    msg.lbl_rej_level = 0.06260996483335945;
    msg.gps_rej_level = 0.5666755084285561;
    msg.custom_x = 0.3837373222346403;
    msg.custom_y = 0.5138859082097054;
    msg.custom_z = 0.16496254677200173;

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
    msg.setTimeStamp(0.6203991048123199);
    msg.setSource(58147U);
    msg.setSourceEntity(12U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(169U);
    msg.utc_time = 0.7822676184692691;
    msg.reason = 251U;

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
    msg.setTimeStamp(0.8393909378167275);
    msg.setSource(53931U);
    msg.setSourceEntity(81U);
    msg.setDestination(24756U);
    msg.setDestinationEntity(77U);
    msg.utc_time = 0.05657125774007721;
    msg.reason = 227U;

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
    msg.setTimeStamp(0.32575061170418795);
    msg.setSource(18004U);
    msg.setSourceEntity(55U);
    msg.setDestination(53149U);
    msg.setDestinationEntity(14U);
    msg.utc_time = 0.24170534515064168;
    msg.reason = 125U;

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
    msg.setTimeStamp(0.31885182928995404);
    msg.setSource(27687U);
    msg.setSourceEntity(90U);
    msg.setDestination(1711U);
    msg.setDestinationEntity(219U);
    msg.id = 16U;
    msg.range = 0.035658662266427665;
    msg.acceptance = 119U;

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
    msg.setTimeStamp(0.9446131983712335);
    msg.setSource(12444U);
    msg.setSourceEntity(4U);
    msg.setDestination(45598U);
    msg.setDestinationEntity(74U);
    msg.id = 187U;
    msg.range = 0.41580657355950335;
    msg.acceptance = 44U;

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
    msg.setTimeStamp(0.1913185105114481);
    msg.setSource(41319U);
    msg.setSourceEntity(210U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(241U);
    msg.id = 190U;
    msg.range = 0.24787847333122326;
    msg.acceptance = 51U;

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
    msg.setTimeStamp(0.34724779891954005);
    msg.setSource(2330U);
    msg.setSourceEntity(76U);
    msg.setDestination(47785U);
    msg.setDestinationEntity(124U);
    msg.type = 253U;
    msg.reason = 47U;
    msg.value = 0.39802606356481895;
    msg.timestep = 0.013704162602959924;

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
    msg.setTimeStamp(0.892547339944803);
    msg.setSource(61676U);
    msg.setSourceEntity(191U);
    msg.setDestination(65065U);
    msg.setDestinationEntity(206U);
    msg.type = 206U;
    msg.reason = 54U;
    msg.value = 0.5635875106942656;
    msg.timestep = 0.8831077771113567;

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
    msg.setTimeStamp(0.4084023379265799);
    msg.setSource(62787U);
    msg.setSourceEntity(225U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(10U);
    msg.type = 167U;
    msg.reason = 4U;
    msg.value = 0.6955749090960573;
    msg.timestep = 0.4758437487104662;

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
    msg.setTimeStamp(0.9428199186147905);
    msg.setSource(8453U);
    msg.setSourceEntity(29U);
    msg.setDestination(26087U);
    msg.setDestinationEntity(211U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("THJXYZFEBN");
    tmp_msg_0.lat = 0.6225124365979388;
    tmp_msg_0.lon = 0.8293400572415514;
    tmp_msg_0.depth = 0.8782582698941122;
    tmp_msg_0.query_channel = 69U;
    tmp_msg_0.reply_channel = 110U;
    tmp_msg_0.transponder_delay = 190U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7391202607445435;
    msg.y = 0.3574663320169109;
    msg.var_x = 0.6685863360273007;
    msg.var_y = 0.9289345393642922;
    msg.distance = 0.7227735856614846;

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
    msg.setTimeStamp(0.267464428789964);
    msg.setSource(1275U);
    msg.setSourceEntity(149U);
    msg.setDestination(35187U);
    msg.setDestinationEntity(162U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IQXGADHUBAWGTDLWVQFTARZHPPZYPWVACEJIOLO");
    tmp_msg_0.lat = 0.32083187638835253;
    tmp_msg_0.lon = 0.27021135601269064;
    tmp_msg_0.depth = 0.40533467136286827;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 228U;
    tmp_msg_0.transponder_delay = 241U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.188830352626021;
    msg.y = 0.17346693711334316;
    msg.var_x = 0.7970739494698761;
    msg.var_y = 0.586614447090287;
    msg.distance = 0.1986418962769918;

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
    msg.setTimeStamp(0.9037082969986329);
    msg.setSource(38096U);
    msg.setSourceEntity(154U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(88U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XHJIGQEBONLUEJNPFTWDPLKJHMWAECFJSRHQTXAVNYFEHD");
    tmp_msg_0.lat = 0.48812786906386474;
    tmp_msg_0.lon = 0.4827813177096716;
    tmp_msg_0.depth = 0.08608494170695746;
    tmp_msg_0.query_channel = 22U;
    tmp_msg_0.reply_channel = 131U;
    tmp_msg_0.transponder_delay = 119U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8769398492560162;
    msg.y = 0.931832747284521;
    msg.var_x = 0.13028724447711482;
    msg.var_y = 0.05255756295197944;
    msg.distance = 0.9094312712619178;

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
    msg.setTimeStamp(0.659475496496278);
    msg.setSource(4804U);
    msg.setSourceEntity(52U);
    msg.setDestination(13112U);
    msg.setDestinationEntity(168U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.28462813736581416);
    msg.setSource(21123U);
    msg.setSourceEntity(239U);
    msg.setDestination(56712U);
    msg.setDestinationEntity(252U);
    msg.state = 28U;

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
    msg.setTimeStamp(0.6223338222815854);
    msg.setSource(57096U);
    msg.setSourceEntity(160U);
    msg.setDestination(26099U);
    msg.setDestinationEntity(248U);
    msg.state = 152U;

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
    msg.setTimeStamp(0.10921707376891299);
    msg.setSource(20658U);
    msg.setSourceEntity(30U);
    msg.setDestination(22117U);
    msg.setDestinationEntity(110U);
    msg.x = 0.0127360126388536;
    msg.y = 0.6882456889175788;
    msg.z = 0.8279046522362782;

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
    msg.setTimeStamp(0.5151232523124656);
    msg.setSource(5097U);
    msg.setSourceEntity(179U);
    msg.setDestination(22352U);
    msg.setDestinationEntity(82U);
    msg.x = 0.9530929686569009;
    msg.y = 0.8407712845375009;
    msg.z = 0.29193336446167095;

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
    msg.setTimeStamp(0.18192251100035706);
    msg.setSource(27940U);
    msg.setSourceEntity(95U);
    msg.setDestination(47514U);
    msg.setDestinationEntity(149U);
    msg.x = 0.22130221998631494;
    msg.y = 0.8265095447613386;
    msg.z = 0.7635274130565346;

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
    msg.setTimeStamp(0.6810365387030928);
    msg.setSource(44642U);
    msg.setSourceEntity(215U);
    msg.setDestination(31905U);
    msg.setDestinationEntity(48U);
    msg.va = 0.12464766377329439;
    msg.aoa = 0.8681063177862829;
    msg.ssa = 0.5195039387180175;

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
    msg.setTimeStamp(0.5289745997996846);
    msg.setSource(12648U);
    msg.setSourceEntity(74U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(67U);
    msg.va = 0.12415881798094497;
    msg.aoa = 0.18079764079311844;
    msg.ssa = 0.9513233972150196;

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
    msg.setTimeStamp(0.2776489424679768);
    msg.setSource(54375U);
    msg.setSourceEntity(12U);
    msg.setDestination(54824U);
    msg.setDestinationEntity(210U);
    msg.va = 0.9159024999940075;
    msg.aoa = 0.29373032281425804;
    msg.ssa = 0.8909069270751163;

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
    msg.setTimeStamp(0.07088995956856992);
    msg.setSource(61181U);
    msg.setSourceEntity(19U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(214U);
    msg.value = 0.40658781762081897;

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
    msg.setTimeStamp(0.5740393728477254);
    msg.setSource(56192U);
    msg.setSourceEntity(44U);
    msg.setDestination(50806U);
    msg.setDestinationEntity(211U);
    msg.value = 0.00103188023087597;

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
    msg.setTimeStamp(0.611157665965442);
    msg.setSource(33618U);
    msg.setSourceEntity(66U);
    msg.setDestination(55673U);
    msg.setDestinationEntity(66U);
    msg.value = 0.6757107135205528;

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
    msg.setTimeStamp(0.985192258469896);
    msg.setSource(54346U);
    msg.setSourceEntity(123U);
    msg.setDestination(22177U);
    msg.setDestinationEntity(153U);
    msg.value = 0.9469277798863995;
    msg.z_units = 158U;

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
    msg.setTimeStamp(0.5273654592280269);
    msg.setSource(19500U);
    msg.setSourceEntity(248U);
    msg.setDestination(54824U);
    msg.setDestinationEntity(180U);
    msg.value = 0.11642357364615252;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.656486061170116);
    msg.setSource(11952U);
    msg.setSourceEntity(186U);
    msg.setDestination(4828U);
    msg.setDestinationEntity(183U);
    msg.value = 0.6625272358070408;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.9659279016307422);
    msg.setSource(34178U);
    msg.setSourceEntity(243U);
    msg.setDestination(35477U);
    msg.setDestinationEntity(40U);
    msg.value = 0.14575148986466546;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.3211481132871976);
    msg.setSource(4754U);
    msg.setSourceEntity(146U);
    msg.setDestination(46923U);
    msg.setDestinationEntity(201U);
    msg.value = 0.9265412914500668;
    msg.speed_units = 94U;

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
    msg.setTimeStamp(0.8602936347025638);
    msg.setSource(32637U);
    msg.setSourceEntity(119U);
    msg.setDestination(34527U);
    msg.setDestinationEntity(75U);
    msg.value = 0.016141677251661046;
    msg.speed_units = 80U;

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
    msg.setTimeStamp(0.838453011273184);
    msg.setSource(13302U);
    msg.setSourceEntity(180U);
    msg.setDestination(2102U);
    msg.setDestinationEntity(195U);
    msg.value = 0.7391573557039761;

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
    msg.setTimeStamp(0.13059411374361118);
    msg.setSource(22686U);
    msg.setSourceEntity(170U);
    msg.setDestination(51400U);
    msg.setDestinationEntity(75U);
    msg.value = 0.12966035973922463;

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
    msg.setTimeStamp(0.9447638113438426);
    msg.setSource(41994U);
    msg.setSourceEntity(7U);
    msg.setDestination(54568U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4974732675423138;

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
    msg.setTimeStamp(0.4123551859380902);
    msg.setSource(19088U);
    msg.setSourceEntity(5U);
    msg.setDestination(29141U);
    msg.setDestinationEntity(53U);
    msg.value = 0.239012293132434;

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
    msg.setTimeStamp(0.39814995134313114);
    msg.setSource(62861U);
    msg.setSourceEntity(211U);
    msg.setDestination(22324U);
    msg.setDestinationEntity(235U);
    msg.value = 0.4209452929646398;

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
    msg.setTimeStamp(0.8090657346808895);
    msg.setSource(42428U);
    msg.setSourceEntity(207U);
    msg.setDestination(38095U);
    msg.setDestinationEntity(24U);
    msg.value = 0.6582666790229671;

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
    msg.setTimeStamp(0.19439407394772457);
    msg.setSource(44391U);
    msg.setSourceEntity(101U);
    msg.setDestination(1474U);
    msg.setDestinationEntity(239U);
    msg.value = 0.7848057859597357;

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
    msg.setTimeStamp(0.23934455912358532);
    msg.setSource(15064U);
    msg.setSourceEntity(145U);
    msg.setDestination(1681U);
    msg.setDestinationEntity(227U);
    msg.value = 0.9555284059416854;

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
    msg.setTimeStamp(0.3813685155002987);
    msg.setSource(39933U);
    msg.setSourceEntity(47U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(104U);
    msg.value = 0.3077559437928924;

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
    msg.setTimeStamp(0.11022400201558047);
    msg.setSource(3820U);
    msg.setSourceEntity(247U);
    msg.setDestination(63736U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 113325775U;
    msg.start_lat = 0.3197312683533938;
    msg.start_lon = 0.8053260349177372;
    msg.start_z = 0.8264719833714268;
    msg.start_z_units = 70U;
    msg.end_lat = 0.2533430571994182;
    msg.end_lon = 0.2389334745688424;
    msg.end_z = 0.4771807660253794;
    msg.end_z_units = 180U;
    msg.speed = 0.6594151184818655;
    msg.speed_units = 241U;
    msg.lradius = 0.03785310762268268;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.7881901095312882);
    msg.setSource(46640U);
    msg.setSourceEntity(5U);
    msg.setDestination(42901U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 2587399159U;
    msg.start_lat = 0.7597980972957923;
    msg.start_lon = 0.9772190930102702;
    msg.start_z = 0.15194675219538134;
    msg.start_z_units = 5U;
    msg.end_lat = 0.12276600554989692;
    msg.end_lon = 0.01561952794750765;
    msg.end_z = 0.5757397136768396;
    msg.end_z_units = 121U;
    msg.speed = 0.44401479534813093;
    msg.speed_units = 160U;
    msg.lradius = 0.8822151150300153;
    msg.flags = 123U;

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
    msg.setTimeStamp(0.10027907529761004);
    msg.setSource(43721U);
    msg.setSourceEntity(207U);
    msg.setDestination(10270U);
    msg.setDestinationEntity(203U);
    msg.path_ref = 2505775411U;
    msg.start_lat = 0.05888243649610747;
    msg.start_lon = 0.36429121065665926;
    msg.start_z = 0.9000871607764873;
    msg.start_z_units = 64U;
    msg.end_lat = 0.8296928948919211;
    msg.end_lon = 0.4191428142579732;
    msg.end_z = 0.7944136981485035;
    msg.end_z_units = 106U;
    msg.speed = 0.9220057229391825;
    msg.speed_units = 155U;
    msg.lradius = 0.386602215903292;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.6033832061648048);
    msg.setSource(36039U);
    msg.setSourceEntity(104U);
    msg.setDestination(16569U);
    msg.setDestinationEntity(254U);
    msg.x = 0.6659588331164972;
    msg.y = 0.8373482453497176;
    msg.z = 0.13193384220865856;
    msg.k = 0.06444117841898778;
    msg.m = 0.420365314767594;
    msg.n = 0.7419562905223905;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.5399276592480944);
    msg.setSource(6107U);
    msg.setSourceEntity(58U);
    msg.setDestination(34040U);
    msg.setDestinationEntity(247U);
    msg.x = 0.36534761371576674;
    msg.y = 0.28282963834876684;
    msg.z = 0.7019254715248034;
    msg.k = 0.20568376407828048;
    msg.m = 0.5672537329087345;
    msg.n = 0.6401714277067642;
    msg.flags = 173U;

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
    msg.setTimeStamp(0.014741197985323806);
    msg.setSource(54532U);
    msg.setSourceEntity(97U);
    msg.setDestination(52396U);
    msg.setDestinationEntity(252U);
    msg.x = 0.13723180102840182;
    msg.y = 0.7411846114477942;
    msg.z = 0.20804144282583892;
    msg.k = 0.6068585564557698;
    msg.m = 0.2549566484579049;
    msg.n = 0.8076662656188475;
    msg.flags = 131U;

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
    msg.setTimeStamp(0.3753371958825611);
    msg.setSource(43492U);
    msg.setSourceEntity(197U);
    msg.setDestination(57642U);
    msg.setDestinationEntity(248U);
    msg.value = 0.3234818696738768;

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
    msg.setTimeStamp(0.13784551527437494);
    msg.setSource(44515U);
    msg.setSourceEntity(11U);
    msg.setDestination(37308U);
    msg.setDestinationEntity(232U);
    msg.value = 0.21419067295245897;

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
    msg.setTimeStamp(0.5362716956754493);
    msg.setSource(36046U);
    msg.setSourceEntity(154U);
    msg.setDestination(8921U);
    msg.setDestinationEntity(188U);
    msg.value = 0.4835612231838481;

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
    msg.setTimeStamp(0.7067703098483492);
    msg.setSource(50618U);
    msg.setSourceEntity(136U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(97U);
    msg.u = 0.33584386973958635;
    msg.v = 0.48954356770676677;
    msg.w = 0.4369335434494336;
    msg.p = 0.899753409783596;
    msg.q = 0.5083589082928063;
    msg.r = 0.8331888658600436;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.9895269264599185);
    msg.setSource(1756U);
    msg.setSourceEntity(151U);
    msg.setDestination(18264U);
    msg.setDestinationEntity(195U);
    msg.u = 0.5363375812597024;
    msg.v = 0.3854866209426835;
    msg.w = 0.46293653541871715;
    msg.p = 0.8542377590263001;
    msg.q = 0.3469305172787591;
    msg.r = 0.2561197522361712;
    msg.flags = 243U;

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
    msg.setTimeStamp(0.639068111962258);
    msg.setSource(39045U);
    msg.setSourceEntity(212U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(122U);
    msg.u = 0.27931745746697356;
    msg.v = 0.20589363831833896;
    msg.w = 0.040771746525447794;
    msg.p = 0.5361478959302738;
    msg.q = 0.9013172582880776;
    msg.r = 0.6755435183528449;
    msg.flags = 102U;

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
    msg.setTimeStamp(0.24600750740896338);
    msg.setSource(53379U);
    msg.setSourceEntity(119U);
    msg.setDestination(5121U);
    msg.setDestinationEntity(162U);
    msg.path_ref = 503866666U;
    msg.start_lat = 0.2652761656645113;
    msg.start_lon = 0.15063451725553434;
    msg.start_z = 0.76359914025593;
    msg.start_z_units = 254U;
    msg.end_lat = 0.1176339701877529;
    msg.end_lon = 0.12074400536186436;
    msg.end_z = 0.14731178166159553;
    msg.end_z_units = 136U;
    msg.lradius = 0.23467517513053693;
    msg.flags = 19U;
    msg.x = 0.37989569667744594;
    msg.y = 0.6660335011299351;
    msg.z = 0.019122165537500013;
    msg.vx = 0.05734124921799544;
    msg.vy = 0.854121044569425;
    msg.vz = 0.24067008987668081;
    msg.course_error = 0.3264909654636923;
    msg.eta = 45313U;

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
    msg.setTimeStamp(0.6187882158737328);
    msg.setSource(58138U);
    msg.setSourceEntity(145U);
    msg.setDestination(60568U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 3410443582U;
    msg.start_lat = 0.9189267327394604;
    msg.start_lon = 0.10763899607778293;
    msg.start_z = 0.37563094628324545;
    msg.start_z_units = 64U;
    msg.end_lat = 0.2765637505391443;
    msg.end_lon = 0.09586940393586796;
    msg.end_z = 0.5601431438643582;
    msg.end_z_units = 101U;
    msg.lradius = 0.8840206976336584;
    msg.flags = 71U;
    msg.x = 0.3998409525969411;
    msg.y = 0.535922720060753;
    msg.z = 0.8751842597394547;
    msg.vx = 0.6859232963487917;
    msg.vy = 0.7720225243645491;
    msg.vz = 0.019785769805464093;
    msg.course_error = 0.08145522660599713;
    msg.eta = 65380U;

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
    msg.setTimeStamp(0.461928549539669);
    msg.setSource(26019U);
    msg.setSourceEntity(196U);
    msg.setDestination(677U);
    msg.setDestinationEntity(178U);
    msg.path_ref = 1557257685U;
    msg.start_lat = 0.9220194547938696;
    msg.start_lon = 0.38648709578635787;
    msg.start_z = 0.5307996465030829;
    msg.start_z_units = 168U;
    msg.end_lat = 0.15165510690591177;
    msg.end_lon = 0.018305424209450694;
    msg.end_z = 0.0903641995655281;
    msg.end_z_units = 181U;
    msg.lradius = 0.6913671117307467;
    msg.flags = 28U;
    msg.x = 0.5222799090787881;
    msg.y = 0.9308067453565576;
    msg.z = 0.11275097530253742;
    msg.vx = 0.6756345908420327;
    msg.vy = 0.30227845491210736;
    msg.vz = 0.9017097855641796;
    msg.course_error = 0.41278135481159905;
    msg.eta = 40493U;

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
    msg.setTimeStamp(0.6717995554888786);
    msg.setSource(15832U);
    msg.setSourceEntity(248U);
    msg.setDestination(51009U);
    msg.setDestinationEntity(21U);
    msg.k = 0.6367991577872616;
    msg.m = 0.5982733766096732;
    msg.n = 0.21397570933650878;

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
    msg.setTimeStamp(0.9201016552247394);
    msg.setSource(18014U);
    msg.setSourceEntity(147U);
    msg.setDestination(51934U);
    msg.setDestinationEntity(37U);
    msg.k = 0.7122437006194158;
    msg.m = 0.8599696929181073;
    msg.n = 0.8575238140936156;

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
    msg.setTimeStamp(0.5831640374046099);
    msg.setSource(9215U);
    msg.setSourceEntity(54U);
    msg.setDestination(32703U);
    msg.setDestinationEntity(166U);
    msg.k = 0.31813580557993926;
    msg.m = 0.3289940942137337;
    msg.n = 0.7028386643928852;

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
    msg.setTimeStamp(0.7669011601716635);
    msg.setSource(13958U);
    msg.setSourceEntity(83U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(102U);
    msg.p = 0.529365573777528;
    msg.i = 0.053153577842435684;
    msg.d = 0.0979872930524377;
    msg.a = 0.44540668607643075;

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
    msg.setTimeStamp(0.39151239093322876);
    msg.setSource(63160U);
    msg.setSourceEntity(85U);
    msg.setDestination(28599U);
    msg.setDestinationEntity(152U);
    msg.p = 0.3999774083586445;
    msg.i = 0.49952193896252883;
    msg.d = 0.19717386993584574;
    msg.a = 0.998632580043075;

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
    msg.setTimeStamp(0.3479918678407573);
    msg.setSource(58503U);
    msg.setSourceEntity(110U);
    msg.setDestination(6594U);
    msg.setDestinationEntity(190U);
    msg.p = 0.707565845306174;
    msg.i = 0.05482248435968673;
    msg.d = 0.8150024906735404;
    msg.a = 0.4079026316800932;

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
    msg.setTimeStamp(0.27500275817250264);
    msg.setSource(22475U);
    msg.setSourceEntity(161U);
    msg.setDestination(9074U);
    msg.setDestinationEntity(53U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.43529339777193343);
    msg.setSource(4585U);
    msg.setSourceEntity(97U);
    msg.setDestination(11587U);
    msg.setDestinationEntity(118U);
    msg.op = 85U;

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
    msg.setTimeStamp(0.09513065388039255);
    msg.setSource(60982U);
    msg.setSourceEntity(157U);
    msg.setDestination(34081U);
    msg.setDestinationEntity(169U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.373111057979837);
    msg.setSource(2097U);
    msg.setSourceEntity(79U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(218U);
    msg.x = 0.36397843426866305;
    msg.y = 0.3056553437367542;
    msg.z = 0.15489752307744697;
    msg.vx = 0.47230151799202924;
    msg.vy = 0.8183806991375306;
    msg.vz = 0.8314311395743653;
    msg.ax = 0.6019533716367761;
    msg.ay = 0.2440276698073074;
    msg.az = 0.7481489220850573;
    msg.flags = 28891U;

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
    msg.setTimeStamp(0.333497631267474);
    msg.setSource(63183U);
    msg.setSourceEntity(21U);
    msg.setDestination(48412U);
    msg.setDestinationEntity(118U);
    msg.x = 0.847573317796327;
    msg.y = 0.1199531449642619;
    msg.z = 0.43041229216922394;
    msg.vx = 0.7349274680742742;
    msg.vy = 0.00027026085076498063;
    msg.vz = 0.8937044505779169;
    msg.ax = 0.8227850382750991;
    msg.ay = 0.7837968620757076;
    msg.az = 0.41447778762120524;
    msg.flags = 21515U;

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
    msg.setTimeStamp(0.21670826768704565);
    msg.setSource(14471U);
    msg.setSourceEntity(182U);
    msg.setDestination(46340U);
    msg.setDestinationEntity(80U);
    msg.x = 0.41490483969719294;
    msg.y = 0.14304257390816932;
    msg.z = 0.14125493885014961;
    msg.vx = 0.16618802712610214;
    msg.vy = 0.43840908454832417;
    msg.vz = 0.7177582903528046;
    msg.ax = 0.5750889149119579;
    msg.ay = 0.21189287837922643;
    msg.az = 0.5879154332684488;
    msg.flags = 6869U;

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
    msg.setTimeStamp(0.09985375191565515);
    msg.setSource(7504U);
    msg.setSourceEntity(40U);
    msg.setDestination(16556U);
    msg.setDestinationEntity(152U);
    msg.value = 0.06242974435222193;

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
    msg.setTimeStamp(0.49883117587357595);
    msg.setSource(41141U);
    msg.setSourceEntity(205U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(0U);
    msg.value = 0.2855119804470977;

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
    msg.setTimeStamp(0.6391892306885435);
    msg.setSource(4706U);
    msg.setSourceEntity(2U);
    msg.setDestination(10655U);
    msg.setDestinationEntity(172U);
    msg.value = 0.7278676227348484;

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
    msg.setTimeStamp(0.41780458145635957);
    msg.setSource(58073U);
    msg.setSourceEntity(169U);
    msg.setDestination(2195U);
    msg.setDestinationEntity(137U);
    msg.timeout = 4634U;
    msg.lat = 0.6690571316426387;
    msg.lon = 0.30060244541001024;
    msg.z = 0.9612218662429216;
    msg.z_units = 25U;
    msg.speed = 0.49039544088777054;
    msg.speed_units = 79U;
    msg.roll = 0.5039720226380056;
    msg.pitch = 0.9457796573547355;
    msg.yaw = 0.09177666576365229;
    msg.custom.assign("DSGXZWHXEIAJKKQZSAZOYNJSLBDIVBQKHHXCHFZAQRIXVSLEYYYIYGBMHJBTSULPYMVXTCLSMLNEVNYZPCEOWDWFVPMEIRRPTUHALAOMNNSBLOBZXUAFVCWMEOGUTAXAIVRUDQFXFMJN");

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
    msg.setTimeStamp(0.3129724959590562);
    msg.setSource(61777U);
    msg.setSourceEntity(34U);
    msg.setDestination(11999U);
    msg.setDestinationEntity(193U);
    msg.timeout = 62640U;
    msg.lat = 0.7567291898055514;
    msg.lon = 0.04502576307471362;
    msg.z = 0.6559259309679276;
    msg.z_units = 58U;
    msg.speed = 0.6813846371661866;
    msg.speed_units = 19U;
    msg.roll = 0.0375196219524454;
    msg.pitch = 0.7248820576134726;
    msg.yaw = 0.3140011669665199;
    msg.custom.assign("LPZJJEDJCTNZPEKEEGAEVXFTNLBGLDRSUDGTHASKFITYAHBPRSGMMRBTFESECVABMQGCVEXBUHFMDWRLNOXRSWTCPSXUMQIOWAIXJVUPTCHPZOKKZZNK");

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
    msg.setTimeStamp(0.7440326039888825);
    msg.setSource(39773U);
    msg.setSourceEntity(249U);
    msg.setDestination(34447U);
    msg.setDestinationEntity(247U);
    msg.timeout = 12094U;
    msg.lat = 0.1320101093850442;
    msg.lon = 0.5719102229890906;
    msg.z = 0.8472052463184344;
    msg.z_units = 234U;
    msg.speed = 0.04082763377341736;
    msg.speed_units = 142U;
    msg.roll = 0.17524479859466957;
    msg.pitch = 0.5774107350845474;
    msg.yaw = 0.6294715204270961;
    msg.custom.assign("FCKHBDTQRBQYWKBYZRMEUKIJOSKLPXRZCYJCVTQBIWCFIZBIPKKAFMCIRUSYUOCRUTDNAHUZBXREEQIFWDRJHNUA");

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
    msg.setTimeStamp(0.5630665141682316);
    msg.setSource(45549U);
    msg.setSourceEntity(235U);
    msg.setDestination(3102U);
    msg.setDestinationEntity(96U);
    msg.timeout = 49739U;
    msg.lat = 0.9469857428986858;
    msg.lon = 0.42432099711880233;
    msg.z = 0.04094975059883421;
    msg.z_units = 252U;
    msg.speed = 0.8181694120006838;
    msg.speed_units = 157U;
    msg.duration = 10535U;
    msg.radius = 0.6227197356760437;
    msg.flags = 15U;
    msg.custom.assign("GNQDBWJLDCWLFVXSZVDYNFRASZIDQGUDTBCYZLJQESMPKGMZRARHXAQPFAPYNBUPOTMGYWEOBOAHFIWJGOBUZKTISQKIXRWJOJNZDJKTZMYCWXDQTYBEUXKTVAMHGBQYFTRNOLSYUWCMNAQTEWNIUXZRCLYDCFZEPAGTRVMLOBCGNETWNXCUBLHVPIHHGRLPAJXRCLUIIMHFRMYSSPVVXEOESSJKDKSEK");

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
    msg.setTimeStamp(0.38500118895504853);
    msg.setSource(44254U);
    msg.setSourceEntity(106U);
    msg.setDestination(43167U);
    msg.setDestinationEntity(248U);
    msg.timeout = 19303U;
    msg.lat = 0.0437712022391854;
    msg.lon = 0.5269572936072644;
    msg.z = 0.9086737925998574;
    msg.z_units = 142U;
    msg.speed = 0.6504890820769434;
    msg.speed_units = 9U;
    msg.duration = 33054U;
    msg.radius = 0.6333976297633036;
    msg.flags = 129U;
    msg.custom.assign("HWHYMNHPESDKUZNBXORDOQYUFOZPTGWFAXSCSWNWGJPDXXECOSRDXEBGIGSQGENVCYYFBFVKWCXVJISDFJSCIPASQGJZELEXBGLNFYHTCAKYRLNRHJBQATDNHJWLFLMULOXOAMRIOUIKGQPQOTBUVQLTILAHPGZIYDKZXZOARBRIUNEJBVEKMKFVYUIHEGXRNPVZNKMMWFHUC");

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
    msg.setTimeStamp(0.8684356443126148);
    msg.setSource(19281U);
    msg.setSourceEntity(62U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(210U);
    msg.timeout = 41565U;
    msg.lat = 0.38163379381233786;
    msg.lon = 0.30841005081675055;
    msg.z = 0.5804486272236636;
    msg.z_units = 52U;
    msg.speed = 0.2945949814013099;
    msg.speed_units = 102U;
    msg.duration = 26433U;
    msg.radius = 0.22599153885156908;
    msg.flags = 232U;
    msg.custom.assign("CTHGJDMBDPKNBXDGZROVAXSWHHIALUWNFQJNKMZONFO");

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
    msg.setTimeStamp(0.436058460951562);
    msg.setSource(58244U);
    msg.setSourceEntity(129U);
    msg.setDestination(42388U);
    msg.setDestinationEntity(112U);
    msg.custom.assign("ZIXWUSIRRFEG");

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
    msg.setTimeStamp(0.4951225726906495);
    msg.setSource(51221U);
    msg.setSourceEntity(19U);
    msg.setDestination(358U);
    msg.setDestinationEntity(76U);
    msg.custom.assign("MQKVWNZCUBLHYTAXWPDXSDJQFGONLKXUCCOANXRIFKOTPUAZKVEAEAOKELRQRPUVVXKHL");

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
    msg.setTimeStamp(0.6478527820575924);
    msg.setSource(21823U);
    msg.setSourceEntity(220U);
    msg.setDestination(45182U);
    msg.setDestinationEntity(180U);
    msg.custom.assign("KUUTYXOPYBTIJGZONGBSVEANUAWPO");

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
    msg.setTimeStamp(0.3653527895551473);
    msg.setSource(42887U);
    msg.setSourceEntity(13U);
    msg.setDestination(58103U);
    msg.setDestinationEntity(109U);
    msg.timeout = 16642U;
    msg.lat = 0.5912156964173599;
    msg.lon = 0.5060234564894086;
    msg.z = 0.3642496512663319;
    msg.z_units = 2U;
    msg.duration = 60506U;
    msg.speed = 0.3085629291332692;
    msg.speed_units = 46U;
    msg.type = 91U;
    msg.radius = 0.448174210129648;
    msg.length = 0.9013479433458464;
    msg.bearing = 0.6917471392603926;
    msg.direction = 1U;
    msg.custom.assign("SLKPDELHJZJZIXEUDNVDLBRBYMYQMZWFMKRBRWKLPMQOIYKWZFZOSGXXFATIDDDEHCFVOMLBKYRNPSHIUJGAMGQQRXHZKSLEXHZAONWUCEVGW");

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
    msg.setTimeStamp(0.6649019525203057);
    msg.setSource(13676U);
    msg.setSourceEntity(205U);
    msg.setDestination(53140U);
    msg.setDestinationEntity(140U);
    msg.timeout = 27567U;
    msg.lat = 0.41629904078995417;
    msg.lon = 0.5933185371761539;
    msg.z = 0.17993705888896572;
    msg.z_units = 192U;
    msg.duration = 63209U;
    msg.speed = 0.11013444823501439;
    msg.speed_units = 121U;
    msg.type = 115U;
    msg.radius = 0.3759800027922702;
    msg.length = 0.824323234715916;
    msg.bearing = 0.17342948087733978;
    msg.direction = 244U;
    msg.custom.assign("CSYUBTQPUGMUNKAOFJDINDLGJMMALKKCJURIHUPKGZEVDOZZLYJXVDYXPATOYNEJQHPLJCQQXFXBLSAEJRIVRITBLNECVOQECKDQQNEEAMNSTEPGRIPWOLN");

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
    msg.setTimeStamp(0.8143006893078681);
    msg.setSource(37483U);
    msg.setSourceEntity(52U);
    msg.setDestination(11355U);
    msg.setDestinationEntity(63U);
    msg.timeout = 31471U;
    msg.lat = 0.5178755481069206;
    msg.lon = 0.8020644029866327;
    msg.z = 0.1396459654321306;
    msg.z_units = 84U;
    msg.duration = 14939U;
    msg.speed = 0.9521310539007524;
    msg.speed_units = 70U;
    msg.type = 157U;
    msg.radius = 0.45540891880840473;
    msg.length = 0.6743251568805765;
    msg.bearing = 0.26809930569260876;
    msg.direction = 190U;
    msg.custom.assign("OGTGLOIMWNLIKSIFVYTKQTKGSEZYWAQBDRNLQWIKFTSORJBVBXVJEYFTNNTJRYWMPRDAXAMSAZXQYDUCCJLOQPIWZRDXUGLAHEYKAOGDDVOPDNVZFEMVYCKASFOGZGQRIURBMGZHZCICPCWXLYPLBHDQUVBTEMNHWDCHJXHQKYXFUMCUCQLJANKERSRXKEJASEBJROFVDIYEOBFPHJUFLMPSCGTHNMHTHUFNWPVZXJQK");

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
    msg.setTimeStamp(0.4031772822797859);
    msg.setSource(37311U);
    msg.setSourceEntity(25U);
    msg.setDestination(27988U);
    msg.setDestinationEntity(49U);
    msg.duration = 14456U;
    msg.custom.assign("HKWJEVEXJVZHCLQWYCTTNMYDIQLFSKPSLXQEXUNIZQCIAPDSRFXOKWUMZNQKNGMAALKHKVSAIJFMJVXYXRTAPIQWYZJWUNMGOSWXTBVTVKEWZJTBSDCLBODERRDHTFGIMFPFCQCVVXFUBGWKUBIYZAGEYHNDPJLXJEYRBLCSSTFYDJDZYMVMZAAPRGCODRJCUHRUOHONBBKO");

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
    msg.setTimeStamp(0.23047379762682485);
    msg.setSource(59585U);
    msg.setSourceEntity(52U);
    msg.setDestination(57898U);
    msg.setDestinationEntity(77U);
    msg.duration = 50527U;
    msg.custom.assign("ATYVIERUPNSOWXAYRVRAKUZBCPOESRHBRXFZUHEZTPYXKSBEAVIGWXQMRCHYNFBHQNRZMGPCYJISGCHXAECMVLZKMKJT");

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
    msg.setTimeStamp(0.7365516692864098);
    msg.setSource(65102U);
    msg.setSourceEntity(112U);
    msg.setDestination(46738U);
    msg.setDestinationEntity(182U);
    msg.duration = 44626U;
    msg.custom.assign("RGXVMDLZAFMIONHJRQXGOWYDVEXOGULGQUBHDMQXNEHZZIJDUZOTHQXJUMJWAKPLBNIHFHJQPFRLPWLCYOZVPWBTGGHTZFQRQDMAVMIMD");

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
    msg.setTimeStamp(0.04797836751629192);
    msg.setSource(55839U);
    msg.setSourceEntity(126U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(31U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2250158967U;
    tmp_msg_0.start_lat = 0.29767144021609915;
    tmp_msg_0.start_lon = 0.6688007784641113;
    tmp_msg_0.start_z = 0.549834523598247;
    tmp_msg_0.start_z_units = 228U;
    tmp_msg_0.end_lat = 0.29569095167362514;
    tmp_msg_0.end_lon = 0.7529084111604392;
    tmp_msg_0.end_z = 0.19331993802481562;
    tmp_msg_0.end_z_units = 19U;
    tmp_msg_0.speed = 0.6326157122758596;
    tmp_msg_0.speed_units = 231U;
    tmp_msg_0.lradius = 0.21108927374391284;
    tmp_msg_0.flags = 245U;
    msg.control.set(tmp_msg_0);
    msg.duration = 57983U;
    msg.custom.assign("JDCUSZPJJMKQZVXHCMUXNHZYUYTQTMBGQOBNFPDTARROTTPUYPGKDFNHEJEGZHLAPJLIHRMWHBXUMKDRYSJOLDJWRTPGGANQOOBAWKIMLVMWUATBIGUFXLBMPJFQKOQIINYJCEQICGMEUTNSGZHEYERWSXNSVYARKVEFUOLRCKEPQSFNBLYVILSERAAZZGWPKIXJCGFRIOSWVDXACCBKLOXVZFZAVWVT");

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
    msg.setTimeStamp(0.9171018441588127);
    msg.setSource(20674U);
    msg.setSourceEntity(79U);
    msg.setDestination(19147U);
    msg.setDestinationEntity(81U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1778837105U;
    tmp_msg_0.start_lat = 0.5060284423769769;
    tmp_msg_0.start_lon = 0.09786384906750212;
    tmp_msg_0.start_z = 0.11504264566935962;
    tmp_msg_0.start_z_units = 156U;
    tmp_msg_0.end_lat = 0.2396670858719484;
    tmp_msg_0.end_lon = 0.5864309635911337;
    tmp_msg_0.end_z = 0.913622089296276;
    tmp_msg_0.end_z_units = 157U;
    tmp_msg_0.speed = 0.24604577249191018;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.lradius = 0.12250144841311617;
    tmp_msg_0.flags = 58U;
    msg.control.set(tmp_msg_0);
    msg.duration = 50380U;
    msg.custom.assign("ONNGPMCRKBGOQUWULLUT");

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
    msg.setTimeStamp(0.674814263020358);
    msg.setSource(59785U);
    msg.setSourceEntity(212U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(100U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7920374131168458;
    tmp_msg_0.speed_units = 51U;
    msg.control.set(tmp_msg_0);
    msg.duration = 55985U;
    msg.custom.assign("ZTLSYETQDGRWMJVQNOPGZBFUQYAWUVSOJPFCSFGGTQTKEXARINZVFQNPAPTPHQDIYVXBNNZKETHWMEANOZGKHTATYLZTLBENHDZLSBFONVBIFGKILRRUSYMAOCRXXRADSDBOCCWWQABOYXRICPEUBXRQBFWZJLSQYHLHRASWQCIHJXUTJYLPDCSUKMGLHKEUNHDZPGJPCPIEGCJODUVLDWMVMMXJHKFMXKXOOVKIJK");

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
    msg.setTimeStamp(0.6979186377399924);
    msg.setSource(61334U);
    msg.setSourceEntity(181U);
    msg.setDestination(60498U);
    msg.setDestinationEntity(14U);
    msg.timeout = 26358U;
    msg.lat = 0.6973401984690866;
    msg.lon = 0.7410726391665209;
    msg.z = 0.8827274398738253;
    msg.z_units = 184U;
    msg.speed = 0.09629096083448407;
    msg.speed_units = 53U;
    msg.bearing = 0.3020676550549404;
    msg.cross_angle = 0.38422829862592545;
    msg.width = 0.08516175984272178;
    msg.length = 0.404206470907169;
    msg.hstep = 0.6904305485424708;
    msg.coff = 250U;
    msg.alternation = 55U;
    msg.flags = 169U;
    msg.custom.assign("CWNFTQMBBWLYDRMHODAYBGGBHJNDOTZDWF");

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
    msg.setTimeStamp(0.17148589606204567);
    msg.setSource(1682U);
    msg.setSourceEntity(162U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(219U);
    msg.timeout = 55976U;
    msg.lat = 0.013665459750747733;
    msg.lon = 0.9009611854072708;
    msg.z = 0.13346223420640446;
    msg.z_units = 39U;
    msg.speed = 0.6443634423739216;
    msg.speed_units = 83U;
    msg.bearing = 0.05704497046809298;
    msg.cross_angle = 0.8882476652957212;
    msg.width = 0.42885601429646614;
    msg.length = 0.5631014470095873;
    msg.hstep = 0.7096891230824333;
    msg.coff = 3U;
    msg.alternation = 250U;
    msg.flags = 182U;
    msg.custom.assign("MASLDEZEZWI");

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
    msg.setTimeStamp(0.5449365636238658);
    msg.setSource(61086U);
    msg.setSourceEntity(132U);
    msg.setDestination(25490U);
    msg.setDestinationEntity(77U);
    msg.timeout = 54652U;
    msg.lat = 0.5367846975947032;
    msg.lon = 0.5986223035387749;
    msg.z = 0.1934655592976685;
    msg.z_units = 43U;
    msg.speed = 0.07003996143694546;
    msg.speed_units = 241U;
    msg.bearing = 0.3671236369475033;
    msg.cross_angle = 0.37919476580857037;
    msg.width = 0.6227186630456223;
    msg.length = 0.6483156342409576;
    msg.hstep = 0.15223684732108678;
    msg.coff = 240U;
    msg.alternation = 100U;
    msg.flags = 250U;
    msg.custom.assign("KACTILQPAHMMYIYUMZOFRIDEREUHQUZPGYDJDRGQYOLKHWHWYECJVFTPLYBQXUEOXZCLIDOC");

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
    msg.setTimeStamp(0.5184171532930602);
    msg.setSource(5027U);
    msg.setSourceEntity(178U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(179U);
    msg.timeout = 10644U;
    msg.lat = 0.033704251661924145;
    msg.lon = 0.39279269569733144;
    msg.z = 0.10533488901377186;
    msg.z_units = 207U;
    msg.speed = 0.10007425054485242;
    msg.speed_units = 197U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.4395381658775436;
    tmp_msg_0.y = 0.447523872475307;
    tmp_msg_0.z = 0.6826632241867502;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZCOUAFXCSENXVBKRQNZIKSANWGFEOGIMMZJQHDTKDGRVKRBRCRWJPVCCELPBSTSPHNCPZVDHTEISYGWJYLUYUKHEXXOLKAWIPDNVLDRHDIAOKRQMMIQHFMMATYQCFFEQKCYJMZTCLXVFJFFOWUU");

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
    msg.setTimeStamp(0.4840974423585288);
    msg.setSource(17553U);
    msg.setSourceEntity(178U);
    msg.setDestination(62305U);
    msg.setDestinationEntity(154U);
    msg.timeout = 8557U;
    msg.lat = 0.14853196702658578;
    msg.lon = 0.1542664470873778;
    msg.z = 0.12806550634467306;
    msg.z_units = 66U;
    msg.speed = 0.23673199227736408;
    msg.speed_units = 109U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.5447583777112883;
    tmp_msg_0.y = 0.38052159344449277;
    tmp_msg_0.z = 0.8961501964636092;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XRUFLKWLDQXWZSWLIQJKBOBPMGEIQLFXCDDHQVPOCBADBWJROISSRNGGINWZIKVLXMEAKTXCJTCCCJPTOAYJTM");

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
    msg.setTimeStamp(0.6316757949312646);
    msg.setSource(24402U);
    msg.setSourceEntity(126U);
    msg.setDestination(50988U);
    msg.setDestinationEntity(187U);
    msg.timeout = 52324U;
    msg.lat = 0.463177278499016;
    msg.lon = 0.8734364658334179;
    msg.z = 0.06331993403149516;
    msg.z_units = 198U;
    msg.speed = 0.7443385371735445;
    msg.speed_units = 159U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6076146682932252;
    tmp_msg_0.y = 0.5484888879435095;
    tmp_msg_0.z = 0.9380831785614643;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FCRCKLTAEOKXUJNBUCJIYQFWV");

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
    msg.setTimeStamp(0.6513358057338849);
    msg.setSource(55030U);
    msg.setSourceEntity(138U);
    msg.setDestination(11851U);
    msg.setDestinationEntity(62U);
    msg.x = 0.03285388296955227;
    msg.y = 0.6039668597404833;
    msg.z = 0.4573724360129452;

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
    msg.setTimeStamp(0.0775737260941165);
    msg.setSource(61694U);
    msg.setSourceEntity(121U);
    msg.setDestination(6635U);
    msg.setDestinationEntity(102U);
    msg.x = 0.8960407955560389;
    msg.y = 0.827486747888985;
    msg.z = 0.19113260572128643;

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
    msg.setTimeStamp(0.9640638734548576);
    msg.setSource(23944U);
    msg.setSourceEntity(13U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(66U);
    msg.x = 0.09018241078463651;
    msg.y = 0.8085428036429692;
    msg.z = 0.4188062279361796;

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
    msg.setTimeStamp(0.5975142628456441);
    msg.setSource(40878U);
    msg.setSourceEntity(110U);
    msg.setDestination(35589U);
    msg.setDestinationEntity(49U);
    msg.timeout = 62558U;
    msg.lat = 0.06770367265975585;
    msg.lon = 0.07626190040193803;
    msg.z = 0.8974072163315489;
    msg.z_units = 104U;
    msg.amplitude = 0.7405021499562461;
    msg.pitch = 0.6242119064029954;
    msg.speed = 0.2635420370062328;
    msg.speed_units = 142U;
    msg.custom.assign("DVPHOBXOJDTPASHWRPGIWZMEIQZCVLSOJRALRVKVB");

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
    msg.setTimeStamp(0.9286239871915163);
    msg.setSource(17032U);
    msg.setSourceEntity(215U);
    msg.setDestination(4377U);
    msg.setDestinationEntity(13U);
    msg.timeout = 17748U;
    msg.lat = 0.9538206253470758;
    msg.lon = 0.4965013011342202;
    msg.z = 0.17486648370047186;
    msg.z_units = 233U;
    msg.amplitude = 0.1630324023644556;
    msg.pitch = 0.3571606821223956;
    msg.speed = 0.8735673042614218;
    msg.speed_units = 44U;
    msg.custom.assign("OEHSXOHGMXVHVVBJSVFWCKAUCCQMERDLYWGHGTIXMNHSETGBMIORAEAXNCPLDLJXZSQZZINWEMUYWKULYVQAJQCYUIHJPPTNUCKHLKNSGLDAZNDNERGPYXYVYIKAUSCNXBXBFAKQDUBEILAWFTAZDPMTZOUSYBPRJYTCZQKLVGSZNVMJOQZ");

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
    msg.setTimeStamp(0.6945849459350117);
    msg.setSource(41082U);
    msg.setSourceEntity(21U);
    msg.setDestination(52876U);
    msg.setDestinationEntity(66U);
    msg.timeout = 64521U;
    msg.lat = 0.04584941197944825;
    msg.lon = 0.7642395789962866;
    msg.z = 0.5001231000666833;
    msg.z_units = 207U;
    msg.amplitude = 0.6005565305021513;
    msg.pitch = 0.9403591079153486;
    msg.speed = 0.8053604707641986;
    msg.speed_units = 79U;
    msg.custom.assign("ROLJCWMRRHMEIPOSEUBNTPYPZQ");

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
    msg.setTimeStamp(0.2422747741964818);
    msg.setSource(43041U);
    msg.setSourceEntity(241U);
    msg.setDestination(42273U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.9596561672274385);
    msg.setSource(65280U);
    msg.setSourceEntity(182U);
    msg.setDestination(30390U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.7604107299533577);
    msg.setSource(47410U);
    msg.setSourceEntity(26U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.7363807393310297);
    msg.setSource(32470U);
    msg.setSourceEntity(58U);
    msg.setDestination(29250U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.5014782651209483;
    msg.lon = 0.6285513300379425;
    msg.z = 0.24766641864852756;
    msg.z_units = 189U;
    msg.radius = 0.6866516582307897;
    msg.duration = 34648U;
    msg.speed = 0.21409664609220103;
    msg.speed_units = 12U;
    msg.custom.assign("XVNEKRNCDUHMLFIZRXMTNXVDBZPQCZSLIQGACLZRHNRTOIHPLGPYBYDRXDZCHODUTOSYEEGYIPEFUWUVAZDTTQOB");

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
    msg.setTimeStamp(0.5910354865311221);
    msg.setSource(49665U);
    msg.setSourceEntity(29U);
    msg.setDestination(64348U);
    msg.setDestinationEntity(48U);
    msg.lat = 0.40716732861795424;
    msg.lon = 0.07621300540001541;
    msg.z = 0.02794696681717257;
    msg.z_units = 95U;
    msg.radius = 0.8004276518549577;
    msg.duration = 41787U;
    msg.speed = 0.2668995883605224;
    msg.speed_units = 2U;
    msg.custom.assign("DJVPCVIVOGUUZVKMYWZFVIFRX");

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
    msg.setTimeStamp(0.624671239193743);
    msg.setSource(15929U);
    msg.setSourceEntity(57U);
    msg.setDestination(43603U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.8560934659536158;
    msg.lon = 0.27482281790094454;
    msg.z = 0.6513520417760846;
    msg.z_units = 40U;
    msg.radius = 0.42355901495293957;
    msg.duration = 26143U;
    msg.speed = 0.4220320209813092;
    msg.speed_units = 251U;
    msg.custom.assign("ADAWQSEDLIUPBOQBIKBLTSSKNPANRLQMKTHQZJMXPNQUTXZNNSYMRXMNYUMCZBNRUJLNAXGMTMCXQPBKPCLJGCUHUGIEOELHWDQHQVOBVARXXFGFSRVZUFTJOPDRSMDGAVFWBVWREEDDSNUPTZGCRBVXFIHAJTBVOLKRZGCGPIFLEWOFHRSIJJYTECJCGIDEYXKHQYQYIHELOPZN");

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
    msg.setTimeStamp(0.18536139065970159);
    msg.setSource(58312U);
    msg.setSourceEntity(218U);
    msg.setDestination(12211U);
    msg.setDestinationEntity(144U);
    msg.timeout = 53617U;
    msg.flags = 159U;
    msg.lat = 0.2745127292861075;
    msg.lon = 0.5607439063039659;
    msg.start_z = 0.3896809294555257;
    msg.start_z_units = 38U;
    msg.end_z = 0.23794265826629923;
    msg.end_z_units = 147U;
    msg.radius = 0.29515694856209507;
    msg.speed = 0.5736907837953108;
    msg.speed_units = 133U;
    msg.custom.assign("XAFUNKXPMXXGDFKFUL");

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
    msg.setTimeStamp(0.05229326516006361);
    msg.setSource(49416U);
    msg.setSourceEntity(149U);
    msg.setDestination(42571U);
    msg.setDestinationEntity(25U);
    msg.timeout = 25759U;
    msg.flags = 33U;
    msg.lat = 0.043940495671483726;
    msg.lon = 0.4467344312741379;
    msg.start_z = 0.15511929984415218;
    msg.start_z_units = 140U;
    msg.end_z = 0.2524028302057436;
    msg.end_z_units = 7U;
    msg.radius = 0.3375743396830204;
    msg.speed = 0.24618727158187959;
    msg.speed_units = 175U;
    msg.custom.assign("CSCZEOSKEWUDIJNRGEZIFZXZCMYTGHIVOLUOXPPVTWHOROBTVHDEYXISWGAUJMM");

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
    msg.setTimeStamp(0.7839755507088079);
    msg.setSource(61501U);
    msg.setSourceEntity(185U);
    msg.setDestination(11190U);
    msg.setDestinationEntity(122U);
    msg.timeout = 36849U;
    msg.flags = 0U;
    msg.lat = 0.4701715669777796;
    msg.lon = 0.7699986190758976;
    msg.start_z = 0.9445778017326087;
    msg.start_z_units = 0U;
    msg.end_z = 0.9096043475168665;
    msg.end_z_units = 169U;
    msg.radius = 0.8313649439513184;
    msg.speed = 0.0019950019453914836;
    msg.speed_units = 24U;
    msg.custom.assign("DGHSDXMASRGVSMNWERNCSYXCSVJFKMUKCXVTGOUZNNBFIHBMIILCOZLBZBWVEDKEXHYWGKECIQEBNVVJSREJBALD");

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
    msg.setTimeStamp(0.9590473195812848);
    msg.setSource(1396U);
    msg.setSourceEntity(115U);
    msg.setDestination(61363U);
    msg.setDestinationEntity(246U);
    msg.timeout = 2284U;
    msg.lat = 0.43398422301442974;
    msg.lon = 0.3227124691537203;
    msg.z = 0.19496945727356818;
    msg.z_units = 180U;
    msg.speed = 0.9803929433302151;
    msg.speed_units = 170U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.1970469590334738;
    tmp_msg_0.y = 0.6086750803861506;
    tmp_msg_0.z = 0.8341696489686318;
    tmp_msg_0.t = 0.8662809059010077;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TYUKOKIBPRCYXALNCEPVSTGKUOCLMSTAHSUHDFWVALATNRUMEHE");

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
    msg.setTimeStamp(0.48346707816117884);
    msg.setSource(13941U);
    msg.setSourceEntity(105U);
    msg.setDestination(35681U);
    msg.setDestinationEntity(251U);
    msg.timeout = 29911U;
    msg.lat = 0.5295112845376305;
    msg.lon = 0.3212557571181729;
    msg.z = 0.19507398140587107;
    msg.z_units = 164U;
    msg.speed = 0.36528672465721723;
    msg.speed_units = 210U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.059897438592439456;
    tmp_msg_0.y = 0.8159867205501212;
    tmp_msg_0.z = 0.23686112826162153;
    tmp_msg_0.t = 0.45909680590684554;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TLNPZZWXWVIGVNAECFCIOJFAKQCEWNSKFMDLAEGVTJQNENZATOZQKZKHDMUJKNADOUQGOHYVRFWMMYTKSVJVTUFIEUAIREYSYFQBTMVDFGDLRLRCLMJQXGMOOXLHCIUCKFGYRGHSOBYTZQLVJUYLBROLQBYMRIUYBKAXLDFQKJTPMJXBSPXPBHXGDWCIBWSWEVHDZXAZHTINEUOSEJCBURZJBSDWEISPHGFPCUSK");

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
    msg.setTimeStamp(0.6040376790043992);
    msg.setSource(61069U);
    msg.setSourceEntity(6U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(83U);
    msg.timeout = 37111U;
    msg.lat = 0.0202997893811232;
    msg.lon = 0.592553175263156;
    msg.z = 0.9344691838548699;
    msg.z_units = 53U;
    msg.speed = 0.5928792596153004;
    msg.speed_units = 173U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.33943546496715793;
    tmp_msg_0.y = 0.9604919684300433;
    tmp_msg_0.z = 0.05612732029149847;
    tmp_msg_0.t = 0.05661001368290808;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GNWGKGRBZSGCWJFXHVZSXDVNLVXWBYTKAGBKCACYOIXMTOSEEEURKGJECUXZHILYWFNIZOZKSCUAFXIXCUWEPOTEVRVGMUJTVPPUOZKDJJWMPDRJYEQQMEMWTDQKFVADFBBDIEHYSSZHRNJANQBMDPMYVKCKPEFMLWORJXRCTJOQVTSCHLXPQAPQJXUIBYPNIHYYHFFU");

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
    msg.setTimeStamp(0.39593212018023316);
    msg.setSource(19901U);
    msg.setSourceEntity(241U);
    msg.setDestination(50751U);
    msg.setDestinationEntity(119U);
    msg.x = 0.8778906596344712;
    msg.y = 0.14599956520564283;
    msg.z = 0.7002591489243495;
    msg.t = 0.8767634807728703;

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
    msg.setTimeStamp(0.876194479010285);
    msg.setSource(51431U);
    msg.setSourceEntity(230U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(116U);
    msg.x = 0.12050400037231834;
    msg.y = 0.05925541465705686;
    msg.z = 0.9571419728648949;
    msg.t = 0.8816928269060533;

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
    msg.setTimeStamp(0.7866568224622192);
    msg.setSource(10977U);
    msg.setSourceEntity(240U);
    msg.setDestination(28076U);
    msg.setDestinationEntity(59U);
    msg.x = 0.07041963656965766;
    msg.y = 0.18785319667724143;
    msg.z = 0.19189454808779827;
    msg.t = 0.19342675872248993;

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
    msg.setTimeStamp(0.16954777882481997);
    msg.setSource(32740U);
    msg.setSourceEntity(240U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(71U);
    msg.timeout = 31559U;
    msg.name.assign("FSISREXVTEBPVRCSDTMDNRWWHBXLKGIJTJXOQMNEAMFCXBLQWDRAPZIAUJQATBGLWJJEORAKRVCWNAUSQEQPQ");
    msg.custom.assign("ISMSHPSBKOTWI");

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
    msg.setTimeStamp(0.04280335521372891);
    msg.setSource(30855U);
    msg.setSourceEntity(210U);
    msg.setDestination(9098U);
    msg.setDestinationEntity(57U);
    msg.timeout = 29108U;
    msg.name.assign("DONAVDHGEVQARQDEOZQTKHXLBYNGSRQIVLHXECFVWARBGJCUZTBIZWVNCRKYXNOCSFSMUERBBKKGUHESRMUBMAWO");
    msg.custom.assign("XFBTGQLUBUKGYILVDVCDBAEXXOOXKAMNCGPDYZCEGOWGHNJCSMARHFXCLQRMEZYVRMNKHHWFHFHSTMOITTAFUKBBDDVXFWBICVWFAHKURTQIKOBPKFXRDUXPQZCURQILUJGPYILNTYFWJGEOVTHIEBVATHNMKPRNCGZGWMEEYIWAKQAZLOTN");

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
    msg.setTimeStamp(0.9199910396506388);
    msg.setSource(57369U);
    msg.setSourceEntity(99U);
    msg.setDestination(49254U);
    msg.setDestinationEntity(240U);
    msg.timeout = 42731U;
    msg.name.assign("ANSCSZMFVKMZGRCMGKWCEIKAKB");
    msg.custom.assign("FPFDMJRNZKFIVQXRIGJCNDGTTDVCNWTESONGASEAWUDALSPVWFNCNPLBVKSLYGLKLQROKOGTLFVJZLZCDKPHZDDNZTNJSPDNXWOQWYUFBKJRXFGMHALLSVCWKBBAIHIUIMCMUZDCPMOKNRXQHUFXWBZLUVOMYRJBCRVETFFIC");

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
    msg.setTimeStamp(0.42210882460533794);
    msg.setSource(8962U);
    msg.setSourceEntity(252U);
    msg.setDestination(5253U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.9602923100530096;
    msg.lon = 0.65649212515784;
    msg.z = 0.7861020516626018;
    msg.z_units = 139U;
    msg.speed = 0.8856129615564464;
    msg.speed_units = 242U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42101U;
    tmp_msg_0.off_x = 0.004985181115270021;
    tmp_msg_0.off_y = 0.9100281054656788;
    tmp_msg_0.off_z = 0.0508820289136529;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.09656667631891358;
    msg.custom.assign("TVCLMMFXAEOSLIBYZIKAHMIHNSLMAPAWQMWSBPOETKEEDRXDCRUNVNILTSVGOZLPBUNUHSGLEAUDPMKZFZVUDQBZGODPNJOHIBJNOIVOQRYKDLQWBZMFXQZMECXEKWIZCDSGAGJTNCUNVDZWFJRVEAMVBWXFQWHROOPSWRBJDUXGMQHLHYYTJGLTKFIIJGCJYGNHKXYKTPQWWCGEOPQPJAZJEFTKCUIFNXXSYRLRYQXT");

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
    msg.setTimeStamp(0.7658122090756309);
    msg.setSource(44119U);
    msg.setSourceEntity(90U);
    msg.setDestination(57121U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.9286660153097219;
    msg.lon = 0.6271639679939635;
    msg.z = 0.5996909509462377;
    msg.z_units = 71U;
    msg.speed = 0.4483017080497719;
    msg.speed_units = 118U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5962217885747162;
    tmp_msg_0.y = 0.19143379876379596;
    tmp_msg_0.z = 0.16282872553054628;
    tmp_msg_0.t = 0.2192172095733672;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.969563997864416;
    msg.custom.assign("PBLFOIRUJYONERXBFTJDINSWQHSOYNGMWWGZLKFQKNWTVBEMBOANPDWCPXVDXOGUEWSCNBMMRHCZBQUSPI");

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
    msg.setTimeStamp(0.1277293649693949);
    msg.setSource(42362U);
    msg.setSourceEntity(221U);
    msg.setDestination(37312U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.20961823381600442;
    msg.lon = 0.034037406439457074;
    msg.z = 0.4214876539050587;
    msg.z_units = 180U;
    msg.speed = 0.9301806686694234;
    msg.speed_units = 131U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3811704301398563;
    tmp_msg_0.y = 0.8763341084505458;
    tmp_msg_0.z = 0.11150816317053314;
    tmp_msg_0.t = 0.43715650904453995;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 16844U;
    tmp_msg_1.off_x = 0.8182053512029;
    tmp_msg_1.off_y = 0.7139519114662967;
    tmp_msg_1.off_z = 0.754217755819581;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.36697634358165065;
    msg.custom.assign("ZUZWPRBGBRHVNIQAEMMNOTVWRVMVZBSCFDULVMWLWNEHFITYKJHMOYXAYJQZAX");

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
    msg.setTimeStamp(0.9778902144635969);
    msg.setSource(29161U);
    msg.setSourceEntity(9U);
    msg.setDestination(11028U);
    msg.setDestinationEntity(86U);
    msg.vid = 8177U;
    msg.off_x = 0.7854636757426461;
    msg.off_y = 0.4891337764387095;
    msg.off_z = 0.10739332577602323;

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
    msg.setTimeStamp(0.18771460260296569);
    msg.setSource(57427U);
    msg.setSourceEntity(74U);
    msg.setDestination(64556U);
    msg.setDestinationEntity(98U);
    msg.vid = 56966U;
    msg.off_x = 0.9772634809046151;
    msg.off_y = 0.8810176688641504;
    msg.off_z = 0.04287102799143949;

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
    msg.setTimeStamp(0.7327494564656595);
    msg.setSource(17862U);
    msg.setSourceEntity(109U);
    msg.setDestination(21655U);
    msg.setDestinationEntity(180U);
    msg.vid = 61187U;
    msg.off_x = 0.2795153967805787;
    msg.off_y = 0.14296537361851958;
    msg.off_z = 0.11682222123146246;

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
    msg.setTimeStamp(0.562495545064615);
    msg.setSource(23544U);
    msg.setSourceEntity(254U);
    msg.setDestination(20114U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.10711597668837314);
    msg.setSource(17569U);
    msg.setSourceEntity(226U);
    msg.setDestination(31840U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9732876741515831);
    msg.setSource(13767U);
    msg.setSourceEntity(219U);
    msg.setDestination(15171U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.37965477156476624);
    msg.setSource(55578U);
    msg.setSourceEntity(16U);
    msg.setDestination(2318U);
    msg.setDestinationEntity(95U);
    msg.mid = 47577U;

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
    msg.setTimeStamp(0.900974238979427);
    msg.setSource(30416U);
    msg.setSourceEntity(178U);
    msg.setDestination(48774U);
    msg.setDestinationEntity(170U);
    msg.mid = 33237U;

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
    msg.setTimeStamp(0.2944582889924793);
    msg.setSource(26663U);
    msg.setSourceEntity(139U);
    msg.setDestination(41363U);
    msg.setDestinationEntity(35U);
    msg.mid = 2845U;

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
    msg.setTimeStamp(0.558208762078775);
    msg.setSource(46592U);
    msg.setSourceEntity(79U);
    msg.setDestination(45521U);
    msg.setDestinationEntity(12U);
    msg.state = 24U;
    msg.eta = 50252U;
    msg.info.assign("SKZRXFUGSAGWVZTZPLPYUZUJVFCKWSAOLMHCQLSBDXYAUHNVNOOBMCJALMBASIRLKTNDRBEVPXNFOQWXAXHQTIGMOBRZOXKZDOIRIRBWHCJMPNIDTLAGJQTQGUPRESSHTJVVTFVWECBQSCEUCIFMKWDZGLUNTJ");

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
    msg.setTimeStamp(0.5443560361369103);
    msg.setSource(20184U);
    msg.setSourceEntity(250U);
    msg.setDestination(7640U);
    msg.setDestinationEntity(9U);
    msg.state = 89U;
    msg.eta = 10660U;
    msg.info.assign("BDYIEROUIOKCSALNRYZFOUKRIQHQZYZFPVAJEFSHQNDXPITHALWBHZVYBLRSLD");

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
    msg.setTimeStamp(0.7710461644830495);
    msg.setSource(64139U);
    msg.setSourceEntity(131U);
    msg.setDestination(41707U);
    msg.setDestinationEntity(191U);
    msg.state = 203U;
    msg.eta = 35885U;
    msg.info.assign("FPVADIWYERQNWYETIMSYCGXBOSCTSOUGGUSONIF");

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
    msg.setTimeStamp(0.08182231404561302);
    msg.setSource(28806U);
    msg.setSourceEntity(190U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(95U);
    msg.system = 45905U;
    msg.duration = 17700U;
    msg.speed = 0.387726652193941;
    msg.speed_units = 79U;
    msg.x = 0.4754196824225806;
    msg.y = 0.7121747212008553;
    msg.z = 0.21568610316625192;
    msg.z_units = 216U;

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
    msg.setTimeStamp(0.6215504240266697);
    msg.setSource(16112U);
    msg.setSourceEntity(109U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(136U);
    msg.system = 55480U;
    msg.duration = 30121U;
    msg.speed = 0.6737852212607609;
    msg.speed_units = 147U;
    msg.x = 0.8805560373998788;
    msg.y = 0.45277866046754245;
    msg.z = 0.9025262681653065;
    msg.z_units = 231U;

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
    msg.setTimeStamp(0.28142222844933573);
    msg.setSource(46300U);
    msg.setSourceEntity(124U);
    msg.setDestination(46061U);
    msg.setDestinationEntity(31U);
    msg.system = 47924U;
    msg.duration = 61261U;
    msg.speed = 0.6537739847552321;
    msg.speed_units = 63U;
    msg.x = 0.2733860230964835;
    msg.y = 0.6544545168696712;
    msg.z = 0.1920409440786952;
    msg.z_units = 252U;

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
    msg.setTimeStamp(0.25165217570894827);
    msg.setSource(36090U);
    msg.setSourceEntity(254U);
    msg.setDestination(11966U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.12486330173252658;
    msg.lon = 0.04521350457304785;
    msg.speed = 0.2438059301167873;
    msg.speed_units = 165U;
    msg.duration = 7883U;
    msg.sys_a = 25931U;
    msg.sys_b = 7802U;
    msg.move_threshold = 0.5566422665633936;

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
    msg.setTimeStamp(0.2534862570849843);
    msg.setSource(20742U);
    msg.setSourceEntity(221U);
    msg.setDestination(20508U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.1100291312775119;
    msg.lon = 0.4813216985784876;
    msg.speed = 0.5518187045266345;
    msg.speed_units = 204U;
    msg.duration = 20165U;
    msg.sys_a = 7505U;
    msg.sys_b = 23606U;
    msg.move_threshold = 0.1532052825293737;

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
    msg.setTimeStamp(0.35915063995734076);
    msg.setSource(18164U);
    msg.setSourceEntity(101U);
    msg.setDestination(64267U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.6062012034862934;
    msg.lon = 0.28623177892894336;
    msg.speed = 0.8500751625552465;
    msg.speed_units = 80U;
    msg.duration = 1113U;
    msg.sys_a = 31839U;
    msg.sys_b = 12873U;
    msg.move_threshold = 0.8439716225436457;

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
    msg.setTimeStamp(0.11729242791760564);
    msg.setSource(24216U);
    msg.setSourceEntity(200U);
    msg.setDestination(15183U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.28386545224257176;
    msg.lon = 0.7817215241273896;
    msg.z = 0.5296515605930883;
    msg.z_units = 155U;
    msg.speed = 0.3950465461138798;
    msg.speed_units = 183U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0036301005078684945;
    tmp_msg_0.lon = 0.3295397928218754;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("DSYDHRCTLBCLVDHDEDIGNWHRLWQUDQFKKIKOMWTPRSJMK");

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
    msg.setTimeStamp(0.9645495610228076);
    msg.setSource(26923U);
    msg.setSourceEntity(176U);
    msg.setDestination(9089U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.6601645338271459;
    msg.lon = 0.9888510603071351;
    msg.z = 0.6701357594457183;
    msg.z_units = 204U;
    msg.speed = 0.18543824870650416;
    msg.speed_units = 205U;
    msg.custom.assign("QPJGIVWVZDZRAKPVHEYQCMKPJIVYJYNAZAKPMXIKMMMTHFOGRMEFHXLSJRMUCKDGFPDEDJXZOOAWUOJPDXMLQUWSNFIIEFCOHCGSWZQWRPHUHIMRUVZWSQQQEGUOAVFCRBDTXBLTTXBELKCPSFDJVJTTVNPQUHOTSIGAQXOOWIBJHPEGWDUEYAFNDAGBKHTSGRCIKXTKFSAIZRNW");

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
    msg.setTimeStamp(0.023802206970522266);
    msg.setSource(1588U);
    msg.setSourceEntity(182U);
    msg.setDestination(33683U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.3689332407801331;
    msg.lon = 0.33374738077301136;
    msg.z = 0.781660986119811;
    msg.z_units = 97U;
    msg.speed = 0.6878416296668689;
    msg.speed_units = 116U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.19762533815180827;
    tmp_msg_0.lon = 0.057877328555454466;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TGBGPOUVCXUJHXVBQECUNUSNWWCSWIGLBIIRAYYTDHEYDHJSTZXVKPJKMUNEIQKMSITQJNFQDUXZSROYZNDWUOXAAGPNXMZWXHTGTBRTODQWQCHNIDJQSZXOFELMXFACDEMFJBFRZRCCWEMSAASBGOWBPCGVKLFMVOGWVGQAOVLZVEYRIVBUKPNILHQFMLU");

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
    msg.setTimeStamp(0.9743583496587183);
    msg.setSource(37587U);
    msg.setSourceEntity(108U);
    msg.setDestination(33520U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.15795188576414887;
    msg.lon = 0.6563602078375602;

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
    msg.setTimeStamp(0.3125365386036587);
    msg.setSource(32037U);
    msg.setSourceEntity(176U);
    msg.setDestination(18272U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.9280852004982811;
    msg.lon = 0.6769381551993293;

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
    msg.setTimeStamp(0.19500049118036944);
    msg.setSource(31421U);
    msg.setSourceEntity(198U);
    msg.setDestination(8295U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.34716912360090957;
    msg.lon = 0.29373995498221617;

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
    msg.setTimeStamp(0.8417583135930709);
    msg.setSource(39411U);
    msg.setSourceEntity(236U);
    msg.setDestination(25826U);
    msg.setDestinationEntity(1U);
    msg.timeout = 12350U;
    msg.lat = 0.7737619869875065;
    msg.lon = 0.6095670154776831;
    msg.z = 0.6387619061550184;
    msg.z_units = 165U;
    msg.pitch = 0.22027918424955917;
    msg.amplitude = 0.5707813525206397;
    msg.duration = 37211U;
    msg.speed = 0.16759652159816685;
    msg.speed_units = 72U;
    msg.radius = 0.7405598892629026;
    msg.direction = 42U;
    msg.custom.assign("FNRQJUAZVRYELTEKDGTQNSGWARCETEXWJRVUINQHVNYISZTBGUBRCSVIPMJPIOBDIOCFODZOHGPOMNJRMXTPJIBWVAZQUJIDBAWCVXZBTZVLEGPLNIPHYUXGKOGWHQDMSQZAXBRGTHKLYAXHNYAKYFWEALOSSWKRI");

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
    msg.setTimeStamp(0.652825019670261);
    msg.setSource(3291U);
    msg.setSourceEntity(30U);
    msg.setDestination(7004U);
    msg.setDestinationEntity(215U);
    msg.timeout = 42944U;
    msg.lat = 0.313878393958373;
    msg.lon = 0.5695678811125262;
    msg.z = 0.08616626180439979;
    msg.z_units = 160U;
    msg.pitch = 0.3065275153775834;
    msg.amplitude = 0.895103195473648;
    msg.duration = 62973U;
    msg.speed = 0.41562983848180624;
    msg.speed_units = 245U;
    msg.radius = 0.03159512675660858;
    msg.direction = 183U;
    msg.custom.assign("AGCEUOWQSLALVZOLXBFGXGJMZYSMKHZTJHJHZODXIZRCOIZEDMUYXQELPILRAEVDBNVXUUIKQQBSRIWPHCYTFUNF");

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
    msg.setTimeStamp(0.3917104602574052);
    msg.setSource(12042U);
    msg.setSourceEntity(114U);
    msg.setDestination(22206U);
    msg.setDestinationEntity(130U);
    msg.timeout = 27768U;
    msg.lat = 0.9779963358890004;
    msg.lon = 0.5590228535060179;
    msg.z = 0.2396478557851799;
    msg.z_units = 35U;
    msg.pitch = 0.21643377865668123;
    msg.amplitude = 0.7422038074261093;
    msg.duration = 21950U;
    msg.speed = 0.021458311261137397;
    msg.speed_units = 129U;
    msg.radius = 0.027132214018244172;
    msg.direction = 103U;
    msg.custom.assign("XMOGJGHZOGPHURMWYSFSCEEIYHEMQRSAMZENIRBGLBYEWLXFKWDQKUZSKGCLDOKQRAFNJJCTHNMMTCVVXVASZVQECAQMMDRTRJCOKOPHTWCSXVMIEBUNOJSRNUFHIALTXNKZTLNUHZIYOWJLKQDTAPXAXPFASLDLPPIXKXDVWGRONWLPVYEGAOHWZKHOQVTBIPZQIVYCTJINZDVCUEEJBJJBU");

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
    msg.setTimeStamp(0.3987103453881893);
    msg.setSource(3084U);
    msg.setSourceEntity(105U);
    msg.setDestination(30390U);
    msg.setDestinationEntity(172U);
    msg.formation_name.assign("YMHSXERSBLULAOMJOZSRRZCVWKQZRSAIFFWTKHLHTMDIAULDIGYPNIEIHDEBIEZQXRPTERTKDAKFYFQMRFXDSGCQWEEJWBVHVOKKFUHGWUKGXEAOJLBLCPJDVNQTAJNOUXRRSJLPVYNXPTQLCCGBSGZBCNDBVXHHJDUYNCQRMFTFT");
    msg.reference_frame = 195U;
    msg.custom.assign("QQXNQFYXTNEZLEQMCVMYVANFQDZGQGKSSRHC");

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
    msg.setTimeStamp(0.4936694433038644);
    msg.setSource(12937U);
    msg.setSourceEntity(171U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(237U);
    msg.formation_name.assign("QMCAFATNLZREJVEVZMLEUHRISZBTPOGQAADGBSQDATMPKLWJWPNZMOZSCGIUGXLDSWKOZHKVYDERTLILEKCZWTJUVLMRFYQXYZLJJIOOPOIYXWB");
    msg.reference_frame = 36U;
    msg.custom.assign("KCUSPUPYUGDXFJRJQILIAEMFX");

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
    msg.setTimeStamp(0.31503451506896063);
    msg.setSource(23813U);
    msg.setSourceEntity(75U);
    msg.setDestination(14200U);
    msg.setDestinationEntity(53U);
    msg.formation_name.assign("FVGYBNQDMXDASAHUMYDQKFYVXAXAKNEZRZZGQSCSYEBATPCUHDXRPWRWWWZIIPUGBSOWUIOPUUJNS");
    msg.reference_frame = 110U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15647U;
    tmp_msg_0.off_x = 0.5649618330047713;
    tmp_msg_0.off_y = 0.29216326882942756;
    tmp_msg_0.off_z = 0.27057337439240925;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("LMKQZYLHXRPSLUCYXKUYIYUTKFQGV");

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
    msg.setTimeStamp(0.6446934469579497);
    msg.setSource(34330U);
    msg.setSourceEntity(146U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("ARTHYACRDDXBNBVUYLFYKVJUCDRXLZXACMUKCBFHGJZMDRTBNZSMXQJHFLUYBISSUFTWMOPPDTIVFPHIGOOLKCYBJLRDARRI");
    msg.formation_name.assign("ZWUONEHTDKGGLHWUWZTJLJNJYASGLQVCZQFVWNMJJRXMDPUGZHCJSPRWIRABCMTKQOUXQGBOYJIEPQAFYKCUZLILRTABLVEARDCHIFVUYCBCNZIYFQBNAIVXXMBHNCBWCDPSYGRBSWFNEGSQDPXFTSZTYSATGTAQSRKVHUOELCZFIWDNEOLXSHRNEHVDDOQUFYEWGDKMTEQKBOMRJPHKXNJMBKMKVMHOXTUJXVDIWPKL");
    msg.plan_id.assign("NRGYEZKDHHDTVRISELRXOXEOSBGMYJCIJOKBNENCWBNDMTXCIYTFDMUCUDIIOVXJYGULKBKNQMPPDZRISQAIQRQEAILHVQUARBYEUVKFFOJZRATUBFKYSTWKZZPVSRQDMCRHTJCETWYPWEGUHWQPWFXNIMVPSZTSGLVJHAJWZALHBADLYKQ");
    msg.description.assign("PJHDRKRPBWMAQPVAOGOVGODFDUNUVUAIRGDFOCSVQOOJRGFQGTKWYMYDNMGNEJNFPESCNJEIWKLDTNUFGZPO");
    msg.leader_speed = 0.05978701837178391;
    msg.leader_bank_lim = 0.38642922620542963;
    msg.pos_sim_err_lim = 0.1909671071883704;
    msg.pos_sim_err_wrn = 0.2505722853891953;
    msg.pos_sim_err_timeout = 3804U;
    msg.converg_max = 0.8004135024562088;
    msg.converg_timeout = 50997U;
    msg.comms_timeout = 12818U;
    msg.turb_lim = 0.2057891220456829;
    msg.custom.assign("NUPFAPYTKHRBYHMLEHCQGJATHIZXAEZQDUDTKLKJLYBENJXKJPSBCITVCUVOJMKEAYPNDFIGTCKWNPRQONWBJAJAWOVONSQFBUCUOPDYXFDUAMIIKPVGLCPTZGQXYEVAIZPQYZSVMEZJAJQUIYBCIKCDSSYKILEDRGWSREZXHGHBRV");

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
    msg.setTimeStamp(0.43175763316715365);
    msg.setSource(2337U);
    msg.setSourceEntity(193U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(45U);
    msg.group_name.assign("WJTINGTZYPZGTBAIBLCEVPRXTTV");
    msg.formation_name.assign("ILAKCGXQYOKJEJQWKKLQLZPMCUZEXQGSNKFTOFJYYNRVHBQEOGWTWDGIJACSEPOYCSZSOKIEALFINBLUOXTACIDHYZWXKKNHTQLVMKXRUQUNOOCYUAXHUVGVDXESGULP");
    msg.plan_id.assign("ZOQAIGUQPWXKKNPCSBFYZILRTBIRUJPOXOSFURTAUXJCMOGPEFDSXKQZGWTIXJPNGRQRZFZTERKQCVMLJSBYBXHMYJPHAZYUKHVAHFWAIXDXIYZTWIKGKFNTHKDLDDHHRNCGEXMCGEVYMMQTOVJCWEVPUIIJOVJLENAWGBTMQBVSGLXHLOFAGZNSUBWOBIDEVLYBTPWOSRWMSDDZZULPLAQYNNVTALKCFJRKUYQVDEQAJ");
    msg.description.assign("EBMMFJTYKLNOIESWRZCCCVRINOXSKRBJIYSXLGKPNYEKJSCPSHOOBUIYKDDRKRBQOPE");
    msg.leader_speed = 0.11650722600624108;
    msg.leader_bank_lim = 0.7474884058435801;
    msg.pos_sim_err_lim = 0.024175630407924587;
    msg.pos_sim_err_wrn = 0.7939676107511078;
    msg.pos_sim_err_timeout = 5093U;
    msg.converg_max = 0.5060808342897837;
    msg.converg_timeout = 65297U;
    msg.comms_timeout = 51141U;
    msg.turb_lim = 0.45739996356123014;
    msg.custom.assign("EOLNYACCKTUTIJPGVMHUQHCNVKPBUXNYBKDCASHKNWJIVPJZWAUVTVVGXNZKNCGRLABIWTGRYNJZEPKLYSGSZDSOICOTFMSMFGDDNSLDSBCUBXWYOXODREYLOEBWFRUIAMXUGEHIXDALGLMELPRVUZKZBQOFAPQXMJSLXAGQTESQYSIUYTPHXOYKOWWHJRTQWFJHZHEFRVUXPMRTFHQJDQAAMKPRIDZINFFWGDZFQKEEBCIVB");

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
    msg.setTimeStamp(0.8339279393658254);
    msg.setSource(33160U);
    msg.setSourceEntity(22U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(50U);
    msg.group_name.assign("BSYPHRPDQNTK");
    msg.formation_name.assign("JCQVVCHPENKAGREEWFEGQMKLKSVGGBYUAYQVCYUSGSMQTZLSNXWZTMPBIUIHUIYOXNCJNU");
    msg.plan_id.assign("UWDGEDMJKMWHFAZDBUQJBZSBAFNLULFBYIGJVHTOPLXVCKNPTTYEQISUBUWNLXNURBKEASTCOFFBPTPEPOYYMRXYNDKWFMVPQKDGGDAQDSMZKJOEKRWNBKXVGFZQCVVHZTJKEZQBJPSOXXVWSYXJRNEYLEXQSANUCELRMUGCZWOSJADTHNHAJMV");
    msg.description.assign("CHKRPXNRGVIFBPEXENUZPOWLMSTCYRTZTDEMWKXLPBDLSQWRROPBBJGWKYTLBUOCQHQDEAEQSWGROZFNFUDFSJMRSZMHQZBIQTODPSKZUCUTIJWJVLPHI");
    msg.leader_speed = 0.9914058789755551;
    msg.leader_bank_lim = 0.6329930274009041;
    msg.pos_sim_err_lim = 0.7322107612306723;
    msg.pos_sim_err_wrn = 0.14862513038526848;
    msg.pos_sim_err_timeout = 23717U;
    msg.converg_max = 0.970786746390875;
    msg.converg_timeout = 54301U;
    msg.comms_timeout = 38080U;
    msg.turb_lim = 0.12151772025045982;
    msg.custom.assign("WOOAYBBTKJAOLFLPYMINRRSXOHSBYSBTBTABJUXJTRJWPSSHCNMFLSSIHKYCBGALLVVDFQZLAZBVYDFVMYHIDW");

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
    msg.setTimeStamp(0.8002247384398415);
    msg.setSource(42906U);
    msg.setSourceEntity(88U);
    msg.setDestination(64484U);
    msg.setDestinationEntity(196U);
    msg.control_src = 59129U;
    msg.control_ent = 24U;
    msg.timeout = 0.9003834647119731;
    msg.loiter_radius = 0.7389780809328479;
    msg.altitude_interval = 0.8096399941026559;

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
    msg.setTimeStamp(0.7347196247929271);
    msg.setSource(19404U);
    msg.setSourceEntity(218U);
    msg.setDestination(29428U);
    msg.setDestinationEntity(183U);
    msg.control_src = 43834U;
    msg.control_ent = 158U;
    msg.timeout = 0.9072350326501873;
    msg.loiter_radius = 0.0058977099488090046;
    msg.altitude_interval = 0.2019974051851242;

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
    msg.setTimeStamp(0.40162428515465387);
    msg.setSource(5660U);
    msg.setSourceEntity(168U);
    msg.setDestination(43042U);
    msg.setDestinationEntity(74U);
    msg.control_src = 17717U;
    msg.control_ent = 77U;
    msg.timeout = 0.32692832548006434;
    msg.loiter_radius = 0.2579886749488197;
    msg.altitude_interval = 0.14090134622620543;

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
    msg.setTimeStamp(0.9475379445809764);
    msg.setSource(17236U);
    msg.setSourceEntity(98U);
    msg.setDestination(60642U);
    msg.setDestinationEntity(33U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6238837390514057;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.954737768450231;
    tmp_msg_1.z_units = 12U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8973487440740814;
    msg.lon = 0.2056849567396597;
    msg.radius = 0.9345538589791199;

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
    msg.setTimeStamp(0.7626632860313188);
    msg.setSource(11850U);
    msg.setSourceEntity(12U);
    msg.setDestination(18410U);
    msg.setDestinationEntity(103U);
    msg.flags = 72U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.730267739024198;
    tmp_msg_0.speed_units = 213U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9796911750995171;
    tmp_msg_1.z_units = 81U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5888121522246061;
    msg.lon = 0.20708939885333977;
    msg.radius = 0.8930089444998782;

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
    msg.setTimeStamp(0.38227820519441535);
    msg.setSource(8983U);
    msg.setSourceEntity(148U);
    msg.setDestination(55477U);
    msg.setDestinationEntity(248U);
    msg.flags = 202U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.08668521763795178;
    tmp_msg_0.speed_units = 194U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.610891873090764;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2383169811345084;
    msg.lon = 0.3574779392607267;
    msg.radius = 0.7079159837491231;

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
    msg.setTimeStamp(0.9841249950012252);
    msg.setSource(54335U);
    msg.setSourceEntity(248U);
    msg.setDestination(54292U);
    msg.setDestinationEntity(13U);
    msg.control_src = 38107U;
    msg.control_ent = 206U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 56U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6569606651632216;
    tmp_tmp_msg_0_0.speed_units = 135U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.31065903615758717;
    tmp_tmp_msg_0_1.z_units = 138U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6766782893339053;
    tmp_msg_0.lon = 0.5747353499379074;
    tmp_msg_0.radius = 0.13822945274707066;
    msg.reference.set(tmp_msg_0);
    msg.state = 155U;
    msg.proximity = 184U;

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
    msg.setTimeStamp(0.09426281341771114);
    msg.setSource(54521U);
    msg.setSourceEntity(112U);
    msg.setDestination(50653U);
    msg.setDestinationEntity(8U);
    msg.control_src = 6739U;
    msg.control_ent = 53U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 56U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9717501186775802;
    tmp_tmp_msg_0_0.speed_units = 92U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9002753064616655;
    tmp_tmp_msg_0_1.z_units = 82U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.86920086671849;
    tmp_msg_0.lon = 0.4573829566433264;
    tmp_msg_0.radius = 0.5976053059805672;
    msg.reference.set(tmp_msg_0);
    msg.state = 166U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.6149104679643899);
    msg.setSource(7247U);
    msg.setSourceEntity(50U);
    msg.setDestination(29008U);
    msg.setDestinationEntity(45U);
    msg.control_src = 57552U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 149U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7858646865386152;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.20895783594017792;
    tmp_tmp_msg_0_1.z_units = 12U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15917805972118482;
    tmp_msg_0.lon = 0.9348781225910789;
    tmp_msg_0.radius = 0.6918792649999241;
    msg.reference.set(tmp_msg_0);
    msg.state = 207U;
    msg.proximity = 177U;

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
    msg.setTimeStamp(0.32535212864638896);
    msg.setSource(46824U);
    msg.setSourceEntity(57U);
    msg.setDestination(52289U);
    msg.setDestinationEntity(247U);
    msg.ax_cmd = 0.7061503584136882;
    msg.ay_cmd = 0.6485472117643664;
    msg.az_cmd = 0.7716519032939992;
    msg.ax_des = 0.3549650181298504;
    msg.ay_des = 0.972815351352835;
    msg.az_des = 0.8711927508204625;
    msg.virt_err_x = 0.37590169926500405;
    msg.virt_err_y = 0.9079708498102194;
    msg.virt_err_z = 0.6166545047682437;
    msg.surf_fdbk_x = 0.8427028187640564;
    msg.surf_fdbk_y = 0.1298026414643686;
    msg.surf_fdbk_z = 0.18457456061656052;
    msg.surf_unkn_x = 0.9114763437038629;
    msg.surf_unkn_y = 0.02636469523089424;
    msg.surf_unkn_z = 0.7170844710325454;
    msg.ss_x = 0.1246545902140298;
    msg.ss_y = 0.3440543424518241;
    msg.ss_z = 0.8562800628652877;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IZNLUGSKYDJHCEVARZUAQINVDMXWTRDLLDAFJLQPERFGAFBVUZOFTSNPFSEJFSPQZDCRSGOPJXKAKBXLTWAHZCMXBINKUKQQIHKGMFWTBBHTIFUKUXCMLJWWGG");
    tmp_msg_0.dist = 0.8804695639790375;
    tmp_msg_0.err = 0.28470745707609457;
    tmp_msg_0.ctrl_imp = 0.5408642807303985;
    tmp_msg_0.rel_dir_x = 0.09194834423983644;
    tmp_msg_0.rel_dir_y = 0.8806586272902296;
    tmp_msg_0.rel_dir_z = 0.2961964542897306;
    tmp_msg_0.err_x = 0.40438015132267435;
    tmp_msg_0.err_y = 0.4978412540540409;
    tmp_msg_0.err_z = 0.3613915031169205;
    tmp_msg_0.rf_err_x = 0.1768935409253508;
    tmp_msg_0.rf_err_y = 0.30518948138447866;
    tmp_msg_0.rf_err_z = 0.6121313182999978;
    tmp_msg_0.rf_err_vx = 0.014426612391401639;
    tmp_msg_0.rf_err_vy = 0.3919399059117983;
    tmp_msg_0.rf_err_vz = 0.7621006935421853;
    tmp_msg_0.ss_x = 0.11641621241228206;
    tmp_msg_0.ss_y = 0.7629311825991422;
    tmp_msg_0.ss_z = 0.8315662373934836;
    tmp_msg_0.virt_err_x = 0.03220205396934428;
    tmp_msg_0.virt_err_y = 0.7034014508002193;
    tmp_msg_0.virt_err_z = 0.9186312130514181;
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
    msg.setTimeStamp(0.32869039614876805);
    msg.setSource(61599U);
    msg.setSourceEntity(40U);
    msg.setDestination(48669U);
    msg.setDestinationEntity(252U);
    msg.ax_cmd = 0.9134784898457493;
    msg.ay_cmd = 0.8574953243409441;
    msg.az_cmd = 0.20010465177637327;
    msg.ax_des = 0.35954043072114283;
    msg.ay_des = 0.1896383161701578;
    msg.az_des = 0.3208592289201212;
    msg.virt_err_x = 0.8968386138339342;
    msg.virt_err_y = 0.5855017037140231;
    msg.virt_err_z = 0.9757434719891048;
    msg.surf_fdbk_x = 0.6508864608100617;
    msg.surf_fdbk_y = 0.34704709481535034;
    msg.surf_fdbk_z = 0.22652526434504416;
    msg.surf_unkn_x = 0.7880112645706191;
    msg.surf_unkn_y = 0.23370202659077666;
    msg.surf_unkn_z = 0.12040079157944239;
    msg.ss_x = 0.9221264163395597;
    msg.ss_y = 0.9784409503423831;
    msg.ss_z = 0.6962662971815967;

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
    msg.setTimeStamp(0.7191724883117225);
    msg.setSource(16820U);
    msg.setSourceEntity(165U);
    msg.setDestination(23838U);
    msg.setDestinationEntity(122U);
    msg.ax_cmd = 0.6515852644710877;
    msg.ay_cmd = 0.1902998378864219;
    msg.az_cmd = 0.3761340613550679;
    msg.ax_des = 0.1478305612718448;
    msg.ay_des = 0.7119117530562709;
    msg.az_des = 0.789693087065575;
    msg.virt_err_x = 0.35496535307213417;
    msg.virt_err_y = 0.5427459380579049;
    msg.virt_err_z = 0.9772555191427651;
    msg.surf_fdbk_x = 0.06338610874885497;
    msg.surf_fdbk_y = 0.29969167841757993;
    msg.surf_fdbk_z = 0.722167993945487;
    msg.surf_unkn_x = 0.021111061734287784;
    msg.surf_unkn_y = 0.07305585183328067;
    msg.surf_unkn_z = 0.1335809787947485;
    msg.ss_x = 0.8111475647447459;
    msg.ss_y = 0.41310398822755745;
    msg.ss_z = 0.931316429299425;

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
    msg.setTimeStamp(0.5342841063472707);
    msg.setSource(28954U);
    msg.setSourceEntity(146U);
    msg.setDestination(167U);
    msg.setDestinationEntity(46U);
    msg.s_id.assign("XYLMSJODEGLVWQFQTRXFGQMDACNRQKCARMSFREJZQHVWTYHLCYUEUVDONMWDWFBKOAWTVPUDWFDCTAXRJRVEHVZOGRLWLA");
    msg.dist = 0.42543736420401834;
    msg.err = 0.5721390268329125;
    msg.ctrl_imp = 0.948297499337211;
    msg.rel_dir_x = 0.5025436194027921;
    msg.rel_dir_y = 0.5968013427433924;
    msg.rel_dir_z = 0.3153731217785214;
    msg.err_x = 0.13744731529124699;
    msg.err_y = 0.37087027829648167;
    msg.err_z = 0.012938171906456852;
    msg.rf_err_x = 0.7226183625923998;
    msg.rf_err_y = 0.8547075091149444;
    msg.rf_err_z = 0.2468141938014431;
    msg.rf_err_vx = 0.7894071577488351;
    msg.rf_err_vy = 0.02184815179337163;
    msg.rf_err_vz = 0.4654742225039926;
    msg.ss_x = 0.48582088777532395;
    msg.ss_y = 0.06337168902460988;
    msg.ss_z = 0.7966407860206273;
    msg.virt_err_x = 0.4727633973281884;
    msg.virt_err_y = 0.18818221879637054;
    msg.virt_err_z = 0.9630520018008774;

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
    msg.setTimeStamp(0.981576757308772);
    msg.setSource(52405U);
    msg.setSourceEntity(182U);
    msg.setDestination(21633U);
    msg.setDestinationEntity(78U);
    msg.s_id.assign("LQLCHOAJASNWHZLBKDHIHUSGQXMMVPTRUMOUTTOSXCNNWWWSIAYBQNZBVWJWMOXRMDYFLOZKPUFYXLH");
    msg.dist = 0.25581299473190133;
    msg.err = 0.9842766036956203;
    msg.ctrl_imp = 0.16289683490364226;
    msg.rel_dir_x = 0.7799409745734666;
    msg.rel_dir_y = 0.29021926604456905;
    msg.rel_dir_z = 0.426657413277423;
    msg.err_x = 0.768482133512335;
    msg.err_y = 0.8189613608664269;
    msg.err_z = 0.4672425447896782;
    msg.rf_err_x = 0.358930823157825;
    msg.rf_err_y = 0.8481009267742284;
    msg.rf_err_z = 0.4989247885151671;
    msg.rf_err_vx = 0.9164629314453278;
    msg.rf_err_vy = 0.8598820492306044;
    msg.rf_err_vz = 0.7477623803417034;
    msg.ss_x = 0.5315796011261436;
    msg.ss_y = 0.21928163980203963;
    msg.ss_z = 0.015206445835153182;
    msg.virt_err_x = 0.11518578722306971;
    msg.virt_err_y = 0.08573176920782344;
    msg.virt_err_z = 0.9557874489362345;

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
    msg.setTimeStamp(0.20147763430315924);
    msg.setSource(3577U);
    msg.setSourceEntity(54U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(19U);
    msg.s_id.assign("ACETUAQQCYSFOMQNIAJSYJJCGKIMEUUHNEIXFNXFVOQASZCSLBLVLHDRAKMSOTZUMQFGXHFHPTIQBJPRVJNEBZWEDXSXPYZQURBWCMSFKPYMIROBGRMEVVLWDCIUFGTVRXTD");
    msg.dist = 0.4228570116783119;
    msg.err = 0.7047597821711363;
    msg.ctrl_imp = 0.8158969206101488;
    msg.rel_dir_x = 0.2295675065995375;
    msg.rel_dir_y = 0.49054635438746164;
    msg.rel_dir_z = 0.5971620268452305;
    msg.err_x = 0.8908969832778201;
    msg.err_y = 0.2597754344198142;
    msg.err_z = 0.731441489699085;
    msg.rf_err_x = 0.9461436191910254;
    msg.rf_err_y = 0.6759823175120435;
    msg.rf_err_z = 0.6284681487917189;
    msg.rf_err_vx = 0.1579803745263456;
    msg.rf_err_vy = 0.4436041690780297;
    msg.rf_err_vz = 0.16699943789392624;
    msg.ss_x = 0.28477946529485065;
    msg.ss_y = 0.37056730554901096;
    msg.ss_z = 0.105307551650769;
    msg.virt_err_x = 0.8331416768088636;
    msg.virt_err_y = 0.03073253684914723;
    msg.virt_err_z = 0.5337124233881856;

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
    msg.setTimeStamp(0.28841982707782454);
    msg.setSource(26170U);
    msg.setSourceEntity(49U);
    msg.setDestination(19080U);
    msg.setDestinationEntity(193U);
    msg.timeout = 59726U;
    msg.rpm = 0.17071661207390343;
    msg.direction = 29U;
    msg.custom.assign("OAYRAMFBMEASJBLHEHVPIEETAJBDWBQEYOCDSWPYLTNWNAOXYXIMJFMZARKYLEGHUOXPGPSOGJZQTIWKKHTXMRTGEUMYXZQJZJRQYHEQLSCKFFAEDPBUOGSWMNKZCBVCCDTJWGMGLZXOWOCDKRHFZDFYIPDBIDINHUKLLMYDUFWRWSPKQUJIVSYXWHONBMVQCNCF");

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
    msg.setTimeStamp(0.8532025343220289);
    msg.setSource(1437U);
    msg.setSourceEntity(239U);
    msg.setDestination(12951U);
    msg.setDestinationEntity(36U);
    msg.timeout = 28101U;
    msg.rpm = 0.5938765411177449;
    msg.direction = 99U;
    msg.custom.assign("IISHQSEQVADRDZGXNBHQUOHBWCCPYTWUEVALMUWOFGOUWXOVEDAUIMLYLPMWMNIQNEGIAEBRKJZYQYDFEXVZASPOKFBJCNYHSSHLUPXOIUWKBTZOGVPFZLLHCCNEYTKPVJRAGMYGSCSVQGJZNUVMDHUBLFFBHXPXWJDHGDMRASYKKFISTNNL");

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
    msg.setTimeStamp(0.4512989478848406);
    msg.setSource(22723U);
    msg.setSourceEntity(25U);
    msg.setDestination(55939U);
    msg.setDestinationEntity(86U);
    msg.timeout = 16633U;
    msg.rpm = 0.5042971522436696;
    msg.direction = 78U;
    msg.custom.assign("AIGTRKNWCJAOKIUZBHULZXNTMFXSUTKEDABHJOWVSDEIAJQOXRFBRGTRYIMKTWW");

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
    msg.setTimeStamp(0.6631098197862054);
    msg.setSource(37097U);
    msg.setSourceEntity(19U);
    msg.setDestination(31600U);
    msg.setDestinationEntity(176U);
    msg.formation_name.assign("CGRFNRYQESIOHWVRFUGCCGRONQYXRXMFZFDCPSYNRWVDFYJCEBIKQSCHBEKNFBOFPEZSAIJNJZGFKVHGAEDOACWDJCIAUSZXHIXHXWLJLDISBQVMHMTZNXPGNAPYSVHVQGXOSMUBOMGTYZVMRUPPDVQNBWZOQOLABKJQIMUYTHSAKTURZOCIETTQPQRIWZHBJEP");
    msg.type = 56U;
    msg.op = 55U;
    msg.group_name.assign("OTEVMUNIZVMGLDGGGZDQHUYERVRQPBOXOUEFVZJLWPAPQTBNFAHFDLOMFBNDCSKJFFKSIBZJWLAHXBHDSAJMLFYGTSGIUAHWHQRSGRNZMAIZUGXCZMUJFPNCRIJTAYYHWOCPCUMOXDNDVCTSIOPKIIJITRSUHNTVYGXZLKDPRCCTJYLYOBQWPKQEBYLEJFVQAYUESIA");
    msg.plan_id.assign("KOKIDHMYGWGWXNWSKTWZLGJUCAFGJJAOTXSDIPPSQECXAKJERBBCOIODPRMTIRMKJYHQXCVBLXOVRYRYPQKTMRLUCTHZSKMYDZVUQXNUAYLLQHMEIYVDCDPIVIALSHWULOAOQSBZUXIWRVGAOULSCPWBQTAEQKVBTNBT");
    msg.description.assign("QAJLMWCSVPLGMFIDGHDBXOLYK");
    msg.reference_frame = 50U;
    msg.leader_bank_lim = 0.7373061578392913;
    msg.leader_speed_min = 0.7410997628921467;
    msg.leader_speed_max = 0.6514561004370144;
    msg.leader_alt_min = 0.5450553038959933;
    msg.leader_alt_max = 0.06344125213425589;
    msg.pos_sim_err_lim = 0.9936410263329669;
    msg.pos_sim_err_wrn = 0.9576754326197762;
    msg.pos_sim_err_timeout = 12242U;
    msg.converg_max = 0.3310279306987468;
    msg.converg_timeout = 7780U;
    msg.comms_timeout = 29194U;
    msg.turb_lim = 0.2721106502565497;
    msg.custom.assign("WLRNGNBESKEAFVKTHQPZEMDMYOJTHDRKSDCZSLYTUGLZVFDAEGBGQYOIFJZMGMV");

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
    msg.setTimeStamp(0.1630772172929017);
    msg.setSource(25841U);
    msg.setSourceEntity(155U);
    msg.setDestination(8104U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("YRBGZWRXJNJNOCOOMTUXTMXUADSWVUCYFQTJTHJPWPHTKJMWDHSSSHLKFQIDDDDVTNSZXNTEAACLQDYIIZREJKHBRGBELIVTCYCQSZDCLQBHBZFUFXFGRGKEIWOZYYOKLORNROMMGXIEZFEPAFNTEYCRHOSOPSCVAUZUQKKWXGI");
    msg.type = 4U;
    msg.op = 181U;
    msg.group_name.assign("RNLCYUOWDGMLFYCPGFXFBOSVLCYZYYYSWHBXZRQYVERUDNDXTIFBKBZHRXDSEXVFRAXPMFPHENLQBXBJBQSHEJCPLJEXCZLHIVYKWBFJQITKDWZKUTKWTGISIBVSRJUUACOZVFHOZLWKIGCRAWOHCVOHTPFWJNOMNKQNUDRQAOMZAHQQMUUEJZDVAPKJQGKTGGIWMGNSYHGXSVBNXNWOAME");
    msg.plan_id.assign("LNPYPRASSTEMNHZDOOBOFWIDJQJXKUOIFCVPGHXVAHVYTBBSBJRCTELJFSUDNFLDHQPKNZRAYXEAHSEGOPGCFQKGLXPNWSMZATYDQYMIDUJAJWLZAULNSENQEIYGYFLMCQPQKQSWEKOJCUIXWKCPLXTSBVOAKRWRGDRRHBCEVWIMHBMTYTBBIZGDWVDEUUGFZMRVOKUWVPYIRAZFGQJ");
    msg.description.assign("EGGAMHLITUSUIEBV");
    msg.reference_frame = 65U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5891U;
    tmp_msg_0.off_x = 0.7894486471486728;
    tmp_msg_0.off_y = 0.6999881374705111;
    tmp_msg_0.off_z = 0.8753465982290056;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.4392947737030092;
    msg.leader_speed_min = 0.16244933490033742;
    msg.leader_speed_max = 0.4393095319811462;
    msg.leader_alt_min = 0.7906486666978223;
    msg.leader_alt_max = 0.4536752939084421;
    msg.pos_sim_err_lim = 0.2056474912472771;
    msg.pos_sim_err_wrn = 0.4666150063186597;
    msg.pos_sim_err_timeout = 32482U;
    msg.converg_max = 0.39333918075190966;
    msg.converg_timeout = 57610U;
    msg.comms_timeout = 3034U;
    msg.turb_lim = 0.44481965144717794;
    msg.custom.assign("LLFNSDPVHPIGFLIYLNAOSUTOSKYIDF");

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
    msg.setTimeStamp(0.741745080788889);
    msg.setSource(33408U);
    msg.setSourceEntity(46U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(0U);
    msg.formation_name.assign("VPMTJZDNHKVUCCIETNEUHRTPQMJJIFVXKNJODGQBEEOAMOIYUHPCWYLQFKRVGYDGIZCPS");
    msg.type = 17U;
    msg.op = 226U;
    msg.group_name.assign("RBWADXZKNNWGJWETOLSBHISDCDITFDABYZKEVRCWVUQHUXUAYGLQMOVJOEOBMLJSYUNVSEFEXGMJNJXNHURJLKMKECFAYPOMNTIPTQTHOQLHQCYWNYGYPGOCRBPWMETVXBGYEVXRKHGDXKWFHWZUJXGCPQSVDCZSOIUCERVKMPJZDZH");
    msg.plan_id.assign("LIJVQADVRZRCLKSZDONCGPYZGBBZHSDWQEPSYSXRLZTZBZFMXQUGKWPEFQMRJXVKAJAKTHFUXQYVOFBGDAGNEOXHPWTQBMDTHMXENRUPCTLTNUVCSBJBVCGNEAAMSOYCEUQPKFCWXP");
    msg.description.assign("AZDOQPUBQJTPDIVBVXHOUTEGNCEIZYHSVYTJSJJEAKTJLWAELGPYIFGWMTYGMHDEEYRRARGNSFCLZZLUONZCNNDVRBUPWWFQMFYLRCRCXEPSCYWPUOZQZPPJQNWLAXISVDMDHKVLDNEXYWLQBUFABXOQGIXMOAVSGBKOBGBFHXSNXHRWKZDSRNCJMWSEHUVATAJLQTPKJXKGDJLIIFTOHHPMKBKIMGRVWYUIFOXKFZUQ");
    msg.reference_frame = 144U;
    msg.leader_bank_lim = 0.1380399469511463;
    msg.leader_speed_min = 0.8617198229577544;
    msg.leader_speed_max = 0.3405361857785092;
    msg.leader_alt_min = 0.39094836937499344;
    msg.leader_alt_max = 0.7106211718665854;
    msg.pos_sim_err_lim = 0.2538843427616193;
    msg.pos_sim_err_wrn = 0.12195246355611533;
    msg.pos_sim_err_timeout = 58272U;
    msg.converg_max = 0.516107225555711;
    msg.converg_timeout = 50839U;
    msg.comms_timeout = 7804U;
    msg.turb_lim = 0.6183931125506934;
    msg.custom.assign("IOPVGVECTZSNSKMRPROPMLMBHOIOBAQOLAXDESKUYD");

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
    msg.setTimeStamp(0.8023491331784478);
    msg.setSource(5809U);
    msg.setSourceEntity(170U);
    msg.setDestination(52003U);
    msg.setDestinationEntity(40U);
    msg.timeout = 1624U;
    msg.lat = 0.8592896914077777;
    msg.lon = 0.7064974069919882;
    msg.z = 0.11844797781580996;
    msg.z_units = 8U;
    msg.speed = 0.4050161796966891;
    msg.speed_units = 52U;
    msg.custom.assign("PKHNIZBURFYKXSCBZTPHAXCLUBSCQHDLORSZXMQEXXVUPBRHXTGWZKZAODDJMFCIMWQG");

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
    msg.setTimeStamp(0.6554399995580488);
    msg.setSource(11888U);
    msg.setSourceEntity(33U);
    msg.setDestination(2896U);
    msg.setDestinationEntity(79U);
    msg.timeout = 33958U;
    msg.lat = 0.5312827361658276;
    msg.lon = 0.5312350554647096;
    msg.z = 0.07763232942249387;
    msg.z_units = 65U;
    msg.speed = 0.2715694618060003;
    msg.speed_units = 250U;
    msg.custom.assign("MOWLYZUTFHAIKDIDFANABCWQRJDFZKQCSQWUGFMCROIGCXQXRVCVKXKOJGMV");

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
    msg.setTimeStamp(0.441992465303672);
    msg.setSource(28204U);
    msg.setSourceEntity(1U);
    msg.setDestination(51951U);
    msg.setDestinationEntity(245U);
    msg.timeout = 34410U;
    msg.lat = 0.8693525336578647;
    msg.lon = 0.566192412573474;
    msg.z = 0.14618315455667263;
    msg.z_units = 208U;
    msg.speed = 0.9531923165215866;
    msg.speed_units = 225U;
    msg.custom.assign("RLCOSHMRJHAULKSBZLDHOIKCXSOZRATCAETWVZQLBZXIRYUKVEHTPFQOVFQCCOITNOJPSTMSQYTFVND");

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
    msg.setTimeStamp(0.860780425856392);
    msg.setSource(26084U);
    msg.setSourceEntity(254U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(100U);
    msg.timeout = 60823U;
    msg.lat = 0.38022663999556494;
    msg.lon = 0.4031946281044343;
    msg.z = 0.6020492009819064;
    msg.z_units = 131U;
    msg.speed = 0.03898455437182957;
    msg.speed_units = 186U;
    msg.custom.assign("FVYBCYYAVBEYGKBZSGJSTPIGBPVTWHCLGJFLKYNFTDITAIFGVCQWGJDTHGWZFDTIDUPUAIHEBJZQSUVZFKLYQMETJWSCBPSMQSIKMZJ");

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
    msg.setTimeStamp(0.10124832303028053);
    msg.setSource(30648U);
    msg.setSourceEntity(136U);
    msg.setDestination(47465U);
    msg.setDestinationEntity(196U);
    msg.timeout = 32111U;
    msg.lat = 0.6286056365180165;
    msg.lon = 0.6003550061145981;
    msg.z = 0.6234616481180234;
    msg.z_units = 232U;
    msg.speed = 0.6366467899727919;
    msg.speed_units = 188U;
    msg.custom.assign("MTIHTFKXFKXVINTYPWMCICNZPCBFYZZQQRXODUALOZSNAMLPBSHRPXRRHS");

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
    msg.setTimeStamp(0.6258879920055281);
    msg.setSource(6054U);
    msg.setSourceEntity(153U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(24U);
    msg.timeout = 19761U;
    msg.lat = 0.03758492571678895;
    msg.lon = 0.2292897052076085;
    msg.z = 0.7375510550917234;
    msg.z_units = 166U;
    msg.speed = 0.5998903136118415;
    msg.speed_units = 157U;
    msg.custom.assign("AGEKCBSBWPQQOCQNFOJILOADRRGIOCRLTFATYJKHNHELZMCSPZGEZMMHJXGFKSUBPWWFXUDDHJWBYYORVOUKSMXYLV");

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
    msg.setTimeStamp(0.5463251114011899);
    msg.setSource(30702U);
    msg.setSourceEntity(84U);
    msg.setDestination(1650U);
    msg.setDestinationEntity(111U);
    msg.arrival_time = 0.5695583877539578;
    msg.lat = 0.19728832043465971;
    msg.lon = 0.9454465352800923;
    msg.z = 0.9081435565905764;
    msg.z_units = 95U;
    msg.travel_z = 0.5765785231565039;
    msg.travel_z_units = 224U;
    msg.delayed = 217U;

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
    msg.setTimeStamp(0.809414826466501);
    msg.setSource(32688U);
    msg.setSourceEntity(136U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(129U);
    msg.arrival_time = 0.5723298332726797;
    msg.lat = 0.929727743124692;
    msg.lon = 0.857330486987502;
    msg.z = 0.23585257124219872;
    msg.z_units = 176U;
    msg.travel_z = 0.1702488691556695;
    msg.travel_z_units = 234U;
    msg.delayed = 98U;

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
    msg.setTimeStamp(0.637838484011192);
    msg.setSource(24718U);
    msg.setSourceEntity(191U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(131U);
    msg.arrival_time = 0.44243780440758096;
    msg.lat = 0.839113836185655;
    msg.lon = 0.65161314542834;
    msg.z = 0.8753114174698502;
    msg.z_units = 185U;
    msg.travel_z = 0.04139519645548151;
    msg.travel_z_units = 72U;
    msg.delayed = 170U;

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
    msg.setTimeStamp(0.9907085047589904);
    msg.setSource(17840U);
    msg.setSourceEntity(66U);
    msg.setDestination(59899U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.7359514631406449;
    msg.lon = 0.4963690296912955;
    msg.z = 0.9682101131551066;
    msg.z_units = 11U;
    msg.speed = 0.3765205950286442;
    msg.speed_units = 161U;
    msg.bearing = 0.6234452458232698;
    msg.cross_angle = 0.7800961064110017;
    msg.width = 0.5742681004998793;
    msg.length = 0.7514656074252214;
    msg.coff = 47U;
    msg.angaperture = 0.5276006332778583;
    msg.range = 3189U;
    msg.overlap = 229U;
    msg.flags = 72U;
    msg.custom.assign("YKZISLKGQFVJKWEAVHZEVNJTTDTRPAUNIHAKDQXFCZUMCSIUDGPABKHOTLATUKYPVGMGXQNMWUSCRBUICJEYESCOMLHANWXLJLBWNMEZJPXGDKPOSIOJHEWJYVTDPHDZFQJCQNCVOECFJRXSIGVNRRONDOFJDDPEYTLWNYGMHFIXD");

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
    msg.setTimeStamp(0.3555132176391964);
    msg.setSource(22261U);
    msg.setSourceEntity(221U);
    msg.setDestination(61437U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.03252449477688657;
    msg.lon = 0.6319372480745833;
    msg.z = 0.9309184812000874;
    msg.z_units = 24U;
    msg.speed = 0.7525690834364673;
    msg.speed_units = 87U;
    msg.bearing = 0.727529419709723;
    msg.cross_angle = 0.3510798900370018;
    msg.width = 0.3228756976591467;
    msg.length = 0.9718058413924836;
    msg.coff = 201U;
    msg.angaperture = 0.2040804520608802;
    msg.range = 64655U;
    msg.overlap = 247U;
    msg.flags = 241U;
    msg.custom.assign("JLXLMCIPQPKQNABEKTODTKEJLVOFVEMOJAPNLPVMUDZNLUIXGRAXVGLDGMZUSREQUHGOFERUFGPUYIAJQOWFNAKSNZPHFVSTBZIDWVDLPAZWKSDBSREAYEBTFCBBRMTJAYDYCCGQRIJWQYMKUOLWLWKVPGSNIAUKTXTHXHHYNVSSCYUDHXENIAUZTDNWBRBNCIHMWXCZCXCRYHHHXXV");

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
    msg.setTimeStamp(0.6352884048044735);
    msg.setSource(6533U);
    msg.setSourceEntity(114U);
    msg.setDestination(31763U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.19566639710553257;
    msg.lon = 0.00822979826527137;
    msg.z = 0.06590005822031131;
    msg.z_units = 34U;
    msg.speed = 0.7425619590354204;
    msg.speed_units = 48U;
    msg.bearing = 0.7937599383271763;
    msg.cross_angle = 0.5890338066308286;
    msg.width = 0.6562122213364052;
    msg.length = 0.2252531527877557;
    msg.coff = 100U;
    msg.angaperture = 0.9347309867349822;
    msg.range = 41621U;
    msg.overlap = 100U;
    msg.flags = 38U;
    msg.custom.assign("PKKIUHCRJENXCLKEIVUDJHBIRRDSIPTYUYSVDBQAPWFZJNXPGWUXKHXCZUXT");

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
    msg.setTimeStamp(0.01997506540565852);
    msg.setSource(64082U);
    msg.setSourceEntity(242U);
    msg.setDestination(25151U);
    msg.setDestinationEntity(245U);
    msg.timeout = 27692U;
    msg.lat = 0.03405325708408735;
    msg.lon = 0.955376674068322;
    msg.z = 0.9620869932701797;
    msg.z_units = 152U;
    msg.speed = 0.10838371109970357;
    msg.speed_units = 29U;
    msg.syringe0 = 127U;
    msg.syringe1 = 25U;
    msg.syringe2 = 253U;
    msg.custom.assign("BLEBVPRBEWHSOSTJWMQXJVYHORZCYFIRQGMCGZEUSMJANMDRSPYJOAQWBBTSNZDVGQDLEDNYDSUBFOEOAXNUVWWJPUQXXCQXVFCMWZHXDIDQROGSEPGYFYHOMFQQTNMLCKKLNTUJHFZNLOUKZAHCRNMQDCAVGGTCDFJLTVVHKZRHEBRRSSBZNDVSFKMMKAUPZRXGANIOYYUWWILBEJKIKATXTTIKCGTXXYYHELGWPCJHI");

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
    msg.setTimeStamp(0.3270759059188155);
    msg.setSource(10098U);
    msg.setSourceEntity(147U);
    msg.setDestination(30166U);
    msg.setDestinationEntity(122U);
    msg.timeout = 54771U;
    msg.lat = 0.0846165075755474;
    msg.lon = 0.9914372682352003;
    msg.z = 0.6353382198271584;
    msg.z_units = 166U;
    msg.speed = 0.20493799817186087;
    msg.speed_units = 10U;
    msg.syringe0 = 239U;
    msg.syringe1 = 70U;
    msg.syringe2 = 87U;
    msg.custom.assign("VIDOSODBLIXHCMBDVYWFHLJULQIBEFORAENGOWDYVMQBFHPOAWAHBGSCPXKSXZUEWVAEXELTGZTSNBSCNIPGZLGAIMKNVXPXQSHFMYTYFSWEJNRCMEMCPYIYDXFNFUVPCETTDGWCJGRWNTNQKENIDVLSHVQHFUKZUDRIIJPRWZOXQJPTQGODQY");

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
    msg.setTimeStamp(0.5378695027354793);
    msg.setSource(492U);
    msg.setSourceEntity(19U);
    msg.setDestination(49383U);
    msg.setDestinationEntity(253U);
    msg.timeout = 17293U;
    msg.lat = 0.835935409501538;
    msg.lon = 0.7102227591430584;
    msg.z = 0.6484586701406135;
    msg.z_units = 121U;
    msg.speed = 0.08333081219528038;
    msg.speed_units = 216U;
    msg.syringe0 = 137U;
    msg.syringe1 = 156U;
    msg.syringe2 = 3U;
    msg.custom.assign("EYGZCFOSXMCVHLXAXQWZJTIHTAETXQFTPFWHATEOQUXTBKBJXSERYMUUWNQPUQAAZIMVDCELNJPOBGWYWJIZSDEOUJLMNHKRKRSDHMZEOJSQDCUZQEDZDVMLWNOIXAXKITSTYCDWYZGBPXSPONHNUKQJYCROTRBMKFGHAMWPUKGIYLVVBENINPOYGILYXRIJHTFURMKCKNHSBQ");

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
    msg.setTimeStamp(0.8650301287698372);
    msg.setSource(10571U);
    msg.setSourceEntity(89U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.908340774125369);
    msg.setSource(6138U);
    msg.setSourceEntity(93U);
    msg.setDestination(31538U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.43251017105216416);
    msg.setSource(4120U);
    msg.setSourceEntity(126U);
    msg.setDestination(43275U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.6707302538170974);
    msg.setSource(31336U);
    msg.setSourceEntity(105U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.1585659613728414;
    msg.lon = 0.8160772909558044;
    msg.z = 0.5968054554708807;
    msg.z_units = 21U;
    msg.speed = 0.34108975976200073;
    msg.speed_units = 148U;
    msg.takeoff_pitch = 0.7097301777824443;
    msg.custom.assign("VMZTHEEYIGVZZQRHHWBETJJLKZWYEUZKAVPCDBEIIGPPLACTVUEPVQRTCFYVJCBPUVGSBMSU");

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
    msg.setTimeStamp(0.4386005005394984);
    msg.setSource(39885U);
    msg.setSourceEntity(195U);
    msg.setDestination(3726U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.9186610934800749;
    msg.lon = 0.863690625794325;
    msg.z = 0.030462635963210083;
    msg.z_units = 25U;
    msg.speed = 0.28792764756438016;
    msg.speed_units = 84U;
    msg.takeoff_pitch = 0.23020290364186924;
    msg.custom.assign("ERDUPMABJGQNRKAZDVXODRQMLYPZTHXZZNKWUOLWGYUYKFJTXLDUBLEVABTUOQSLYBCKBPTOZEQULYMWAHWPWRGGGEJSGHSRVOHAKTGBGNIECZFAEYHRXECJTCKPIOMYNLVCWEWYDWVUDSQJUTRPKAIIZKARUARHBSNMPVXQFFJMLOXMTNQWDIBXIXCCBACLPSDHZVCJWVEFMPRFTHDJJ");

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
    msg.setTimeStamp(0.22923668947022158);
    msg.setSource(12777U);
    msg.setSourceEntity(207U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.30818552299465873;
    msg.lon = 0.9950618051049472;
    msg.z = 0.08285971438328232;
    msg.z_units = 136U;
    msg.speed = 0.824418183465401;
    msg.speed_units = 249U;
    msg.takeoff_pitch = 0.7686684707860859;
    msg.custom.assign("FFQWMQTBAIGXZZXPHARXXFFEONUJQSEMJKOLNUKOORGTOJKYIIJPFPQHSNCHNYTSNHDMCRDQVZEBQETSBWUXXINBMIMPYMNWZXIYCJK");

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
    msg.setTimeStamp(0.9077313243496072);
    msg.setSource(24246U);
    msg.setSourceEntity(41U);
    msg.setDestination(21391U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.07165591028809981;
    msg.lon = 0.7798766822065186;
    msg.z = 0.6813230904299655;
    msg.z_units = 5U;
    msg.speed = 0.4556647965715861;
    msg.speed_units = 229U;
    msg.abort_z = 0.5130207740256363;
    msg.bearing = 0.820282598763766;
    msg.glide_slope = 93U;
    msg.glide_slope_alt = 0.6963217130196437;
    msg.custom.assign("FMDZDPBJZMANQBIFDYHCRIMPUYUBNBZUHGAQGGGXQPJJZLW");

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
    msg.setTimeStamp(0.7861274935402818);
    msg.setSource(11066U);
    msg.setSourceEntity(182U);
    msg.setDestination(63505U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.4866748353105028;
    msg.lon = 0.8489088289806752;
    msg.z = 0.9191961324643964;
    msg.z_units = 213U;
    msg.speed = 0.610384880733414;
    msg.speed_units = 214U;
    msg.abort_z = 0.06734636063231791;
    msg.bearing = 0.1085636118431208;
    msg.glide_slope = 10U;
    msg.glide_slope_alt = 0.07907368976007856;
    msg.custom.assign("YKFWBXCQXISBYLETODVKNNQBORQSLKIMYGUNKWGIYINWKVKDWNVGOILAPZISUTUFVJPAZQALGFGDLRKDRXCPYXPUFCXOQSIMNIBYCZFDZXMJIQHQZWWGFDOCAGTXUWZTWLYOXCHYQLRMLUUCARBOEFHFJIHLGUGRVNAJKRTEZJSHAEJTPVJZDEDMTHSFNPEAFRBSZKPXBCVNCDSEP");

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
    msg.setTimeStamp(0.06241251953859395);
    msg.setSource(9583U);
    msg.setSourceEntity(15U);
    msg.setDestination(47422U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.7950640105475179;
    msg.lon = 0.9486349197057311;
    msg.z = 0.5662349983857599;
    msg.z_units = 30U;
    msg.speed = 0.2099014382351252;
    msg.speed_units = 61U;
    msg.abort_z = 0.6551398114968311;
    msg.bearing = 0.3277366849783768;
    msg.glide_slope = 89U;
    msg.glide_slope_alt = 0.022721650244853397;
    msg.custom.assign("EFJNDGWKPDHQSRCFKZHZERHSAPARQTLAKNVGXRFXXVFAAMBRWQRGJIEOSWPGQUUWCORTQFRMSWIYWJXIYCYMWVZIOTBDPYMOXVICQZHONJROIVDEXBBJGNMULKEZVDFOPOVCYJHZVUVUCIIFWITH");

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
    msg.setTimeStamp(0.05076435095056986);
    msg.setSource(26884U);
    msg.setSourceEntity(164U);
    msg.setDestination(12120U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.40658781942888655;
    msg.lon = 0.34806768260106713;
    msg.speed = 0.34706243694694017;
    msg.speed_units = 111U;
    msg.limits = 141U;
    msg.max_depth = 0.9427973851003985;
    msg.min_alt = 0.3863933490388871;
    msg.time_limit = 0.894408398351389;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.769635202160522;
    tmp_msg_0.lon = 0.6273273870143637;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LVMANHCAUOMKZBMVOVNJBKVMBAETRPDFHJPCMIKWADMXJQEVLYOPMXIUKFHOLZWCHCNUHBOJCHUBSFVWOWWDPUSNSGMLRIELISOHICJYYVRHDCTRBRXTQWXPTRUNGNUSJQRWLTWBKTNFZGPGAYWDTTGQZSEYEADRGELZATHJWVBDLDENUDYQSSZKQIMZKACFJXEAXXBIELAFYGBJYGSKVQYVIOXRKXFCFGRHFIPIZC");
    msg.custom.assign("SYEQLPTRXAZXRGXIFVGECGWPOAHJMLZLBTSOVYIBDPGFUGFJWBYYPCUAPKOCWWHSQXUVTAVEKJHYWCEPNXVNOQYSSEDBKXTCNFEHGKHNGUNTCDRZWZFQCHWSYKJBDZSBRJFQEJOFYNBYSQKOFODIRIUDYGNZS");

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
    msg.setTimeStamp(0.8260042227553919);
    msg.setSource(50033U);
    msg.setSourceEntity(197U);
    msg.setDestination(36734U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.3853290873650934;
    msg.lon = 0.9120772864294071;
    msg.speed = 0.1671306711227485;
    msg.speed_units = 201U;
    msg.limits = 128U;
    msg.max_depth = 0.6244015124155362;
    msg.min_alt = 0.20803039110794297;
    msg.time_limit = 0.14218898022926152;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.011805258270569663;
    tmp_msg_0.lon = 0.45773939539120556;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("MDYNGDWYQEGNDGTRNTRWANTISXCTSPSEYAJGLZFFPVEIMOOHFWUPBSXDLJLCWJORMPHOJWVFEWNNTLJIZYLXJDCBDCVIAHGPPVUUIHEMQOJQTDFSCUMCMSCQKQZJVVXEYXADUZJDSUYLMIHWNKZNZBKXPKGBRLLUFBOIVIZMLEBXGYMHAGYBKVQUXRTYWAQRCRNYRD");
    msg.custom.assign("HPPKCDLDBQZADJENXUSCOYWMJGQGGYNBRWRPOMLSQYOLPZSVUKJXQVJNCJDHRVDSIYTZIMVOXCGSJQWUTIDTFIWHHETYZHKLSPZOKUQUOAKATSCNLMKGPJXIFLBINFCEAUXZAPTVMGNMVIWGRYKXNUBREOZQMPDTCLIFXZFUKKOBYMKTILDXRQFEVJQSGAFGHHJXDYOTGHMCVNHRURHFOJRVBZSYESWWENDEAPBLCLPFMNECUWRBBETVIXZ");

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
    msg.setTimeStamp(0.0022803030857849738);
    msg.setSource(62303U);
    msg.setSourceEntity(169U);
    msg.setDestination(19193U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.676149662025191;
    msg.lon = 0.029672780461754034;
    msg.speed = 0.863153544060625;
    msg.speed_units = 168U;
    msg.limits = 221U;
    msg.max_depth = 0.6849938670906578;
    msg.min_alt = 0.28745393437995603;
    msg.time_limit = 0.8575316742835103;
    msg.controller.assign("OWNFQVWYBBQMKADQCPICSODTBNTLPXFLSYHHJDCLXNBMUHWWSKVEATKEYKVJXYVLRVXUHKDXIZZZRXGXZFSOGIDUCIEZFCMVGQNREXAFYTGUDGNRKRBJWKHNOYAZRGALPEFESGCZBSHQDFUEPPYYKMJMHVCTBZWWIAXJPEUHELVGOQBPDPKITSUUYTBVALUETMLWJCGMOFOUDRGLIIVOOCRKAHYXNMFALCISRZQBIQFQDWMNNSRZHTWP");
    msg.custom.assign("IWBVWQKTFHGZMJYCSBILXDJHVPOOCXNNMRFCKGXYNMGNBIWPQFUEAEVWSMLOMPTZUGDORYYZMZIRHJQKHCTGLTAZKLCNURKBMUKZAZYPAHNXQTDPVUWDBZDSLWOPOZVJGFFSUFHAJKMNIQUAORTMGXGNTIKLYAGTRQFIHEQLQAHWRRUWVXVYCWBBYQXEHEMOBD");

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
    msg.setTimeStamp(0.040235898887467925);
    msg.setSource(27343U);
    msg.setSourceEntity(201U);
    msg.setDestination(11046U);
    msg.setDestinationEntity(239U);
    msg.target.assign("PZULQYCSJIIPJLNDQKJNLZVODWMFYKVVBJRIEALCMQDAOQWVKWCJSSHHXOUCVEWMLPCEVTECRUKFMBZDIXQHKGTPRRXFAEJCYYMIHXUGENWCXIJSVGYDLFPKBARJXXORJAUHNPZNYGQOGOWZBMTAFQGFAYLASTEGUNFRBEQTSOTQMGGYNDVRCLZMBKHZHP");
    msg.max_speed = 0.16353261763949833;
    msg.speed_units = 53U;
    msg.lat = 0.3633838491226177;
    msg.lon = 0.07570211695053364;
    msg.z = 0.36319151405884853;
    msg.z_units = 23U;
    msg.custom.assign("PQCZXTUKMGQDKUWATZBHBYPFKSVJZVTHYYXIRNFYQNEFMAXUHBIEQVRUWWGDHBIGNCJNBEKBFRZQYOAIHVS");

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
    msg.setTimeStamp(0.08440881771119313);
    msg.setSource(2862U);
    msg.setSourceEntity(90U);
    msg.setDestination(47115U);
    msg.setDestinationEntity(107U);
    msg.target.assign("XYKYUEIQBXPBHRADAZOLBPCWFTJHSFBWNMYUPIKKNCSUNQKQYDUTFEKWTQAQOPTRGCWPBMOAIKHCXUNRRLOMDXNMGIAMQIPVFXYPFIDVQIYRZOCDWGVOOUHVEPYPBOXQAJGIVPJXMFZLRK");
    msg.max_speed = 0.5994614974464435;
    msg.speed_units = 54U;
    msg.lat = 0.12355056804710485;
    msg.lon = 0.4316460466584614;
    msg.z = 0.9572213041702822;
    msg.z_units = 14U;
    msg.custom.assign("JVFKWUGGVBSXISYLYOXRWHFCUUACDMXWPBEDHQUBVCQDRENSLTXFUQZFMLYWZWBOVLVDSZNMOLMCWESGJUYKBHRMYAKJIJAZPKZQOXAIAYQTICPYZTZIPXJ");

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
    msg.setTimeStamp(0.03773642266868382);
    msg.setSource(10937U);
    msg.setSourceEntity(254U);
    msg.setDestination(63448U);
    msg.setDestinationEntity(231U);
    msg.target.assign("XSPOZDHJCGXTYSHXKRGWQVKPLUYMUFNJFRFTHQQGLPCLLKCNLJVXKUNOYUBLBZOKONJVDWSPGJIPWMTICCHSYVMIDUCKHXLWFRTEAYCGSZWTVTHFABTRHRIFNVMVDIOLWKDAPAIVWMWFOUCABMQMEPOMNEXVJTFKUCZXNBLHDZJIOEEQHBDBXSSADVABGBERGEUZAYAQGQNNPG");
    msg.max_speed = 0.30914431044832713;
    msg.speed_units = 190U;
    msg.lat = 0.0295449042902588;
    msg.lon = 0.31483393448312236;
    msg.z = 0.788767425920856;
    msg.z_units = 244U;
    msg.custom.assign("XBFYUMWJOLYAZHVRCCZRDGBUZBSGFETVGXSJLHIMCHPVNMDXOUKIE");

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
    msg.setTimeStamp(0.44166326450103366);
    msg.setSource(2696U);
    msg.setSourceEntity(148U);
    msg.setDestination(18299U);
    msg.setDestinationEntity(15U);
    msg.timeout = 41935U;
    msg.lat = 0.26589146124076024;
    msg.lon = 0.7780330023880124;
    msg.speed = 0.5614411404233901;
    msg.speed_units = 213U;
    msg.custom.assign("GAODDWSKHSUGUFLRRXRBDWCQTDJXFJQCNAQKPSECJHUHKKWOKASWZVTCPUNPXUZMTGOMMAVPCHUJVQPIEQBQRTYFUNPKNOFVIVMZLHVQFLXVE");

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
    msg.setTimeStamp(0.7859620419014691);
    msg.setSource(16056U);
    msg.setSourceEntity(50U);
    msg.setDestination(34015U);
    msg.setDestinationEntity(202U);
    msg.timeout = 42168U;
    msg.lat = 0.2771799902166061;
    msg.lon = 0.8104469833752234;
    msg.speed = 0.8377097677400536;
    msg.speed_units = 226U;
    msg.custom.assign("PZPINKTBDNOOGLSWHKAHMNYJWGRAFMLFGURXXCINQMVEQZAGTDLVPSUTASXJDSOIKKLINDFVEOBBZZRJKBCOEKHYUBSSWKYCGFCPBNZURQPBPJXFELFYITKQIELCEEHCASPILSZQNMMFIHHONFYKYFDEJJLVRWCVQIRNIYVZUSEDBOPGHUXWBTAXTUTRMGPLOCMRFYXBYTRJJSVLDZTHDGUMVGOOWHGWRQUVHCXYQWPMXMVQKTDNQ");

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
    msg.setTimeStamp(0.993938473400977);
    msg.setSource(2709U);
    msg.setSourceEntity(39U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(189U);
    msg.timeout = 42538U;
    msg.lat = 0.5625043715423357;
    msg.lon = 0.7622489739369722;
    msg.speed = 0.02441240022417368;
    msg.speed_units = 252U;
    msg.custom.assign("JISVXJJNERYUBXMDAJQHOMBXWFNCRFDAWDLCSOIGNAUIILXQNLQNOAGBOXDTDSFGRTPMIXELLEYWDIOCLYRHETCXOIXVSRFYVAQHJJVDPMJWPRFNFFUWRTPNVHKKZMARHYWMB");

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
    msg.setTimeStamp(0.8773039328127518);
    msg.setSource(9351U);
    msg.setSourceEntity(243U);
    msg.setDestination(37421U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.04267541916668116;
    msg.lon = 0.9223663227516864;
    msg.z = 0.9545767704438601;
    msg.z_units = 237U;
    msg.radius = 0.0049465304504549;
    msg.duration = 52541U;
    msg.speed = 0.5111989553875793;
    msg.speed_units = 141U;
    msg.popup_period = 25747U;
    msg.popup_duration = 38625U;
    msg.flags = 7U;
    msg.custom.assign("EMHOBYDSTCVQPIUMVCNSALPRAXBZKRZYNEOLFUIKDWEMNWEPULZQNCWVNXOVFQGGJZDWDJPZIMCXIEDSCU");

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
    msg.setTimeStamp(0.2484214061109492);
    msg.setSource(13980U);
    msg.setSourceEntity(158U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.6913027765776361;
    msg.lon = 0.023910130450061073;
    msg.z = 0.8863496650880595;
    msg.z_units = 120U;
    msg.radius = 0.8003865599544798;
    msg.duration = 6320U;
    msg.speed = 0.5961277560561081;
    msg.speed_units = 174U;
    msg.popup_period = 23173U;
    msg.popup_duration = 51666U;
    msg.flags = 78U;
    msg.custom.assign("OVXQGMBCCZQGUUHJLIQZIHNIADLDJYYOMKQUEBEALGRYSUGAXASIYCRDKSQPTFPHPUKYGOGYXIYMCNASBFZBWXJLICMFJXNTIOOQENNZRNUQWIEZOMVKXFJTMWKTPFEBLHKDTUQWBFFHVFDHKJOTLYKHZETIFAZXUCWPFHDUSXM");

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
    msg.setTimeStamp(0.825065308123921);
    msg.setSource(42409U);
    msg.setSourceEntity(232U);
    msg.setDestination(30240U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.31494480571451666;
    msg.lon = 0.9193226791308683;
    msg.z = 0.9912415036842589;
    msg.z_units = 193U;
    msg.radius = 0.3404427370350087;
    msg.duration = 22983U;
    msg.speed = 0.6069713947073856;
    msg.speed_units = 214U;
    msg.popup_period = 31320U;
    msg.popup_duration = 31271U;
    msg.flags = 5U;
    msg.custom.assign("QKCOTIOMNUAZHNAVNLQBHVRLSLPAXCMKGMLBNFCHYZSKEYOLEUYHIJLUWOMHNTKJHDOGALIREXGZLIVEWJMGRPQGWEHPPXFNDHJXFKDINUPKBDKOJQOYWSZ");

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
    msg.setTimeStamp(0.6111248466753708);
    msg.setSource(49977U);
    msg.setSourceEntity(92U);
    msg.setDestination(56318U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.6327207575312214);
    msg.setSource(54411U);
    msg.setSourceEntity(199U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.22438349427400006);
    msg.setSource(62565U);
    msg.setSourceEntity(182U);
    msg.setDestination(5160U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7347762820030933);
    msg.setSource(21645U);
    msg.setSourceEntity(198U);
    msg.setDestination(42104U);
    msg.setDestinationEntity(62U);
    msg.timeout = 8904U;
    msg.lat = 0.5143585797889585;
    msg.lon = 0.060357633731853544;
    msg.z = 0.27662038018704294;
    msg.z_units = 241U;
    msg.speed = 0.9364381732239525;
    msg.speed_units = 232U;
    msg.bearing = 0.9867526319868023;
    msg.width = 0.49337755990147725;
    msg.direction = 144U;
    msg.custom.assign("GMUZIVBGSZOLWYUESRHOKIURKYRGRJNGKVZHJSDBPLUWQFFBHNWOBEJNCCXKFQLRSWALPTANQKSIBXFQVHOPTYIIUTXPJHPGAAFR");

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
    msg.setTimeStamp(0.44435066829998926);
    msg.setSource(23574U);
    msg.setSourceEntity(155U);
    msg.setDestination(61369U);
    msg.setDestinationEntity(154U);
    msg.timeout = 53390U;
    msg.lat = 0.16468827330521485;
    msg.lon = 0.7991112666488406;
    msg.z = 0.36368635054364273;
    msg.z_units = 138U;
    msg.speed = 0.3680604960127266;
    msg.speed_units = 102U;
    msg.bearing = 0.6183190995502359;
    msg.width = 0.028674596390355855;
    msg.direction = 45U;
    msg.custom.assign("VTHNLZSLPVZZYBVKYBSFJMYOMJCYDUAJGWIU");

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
    msg.setTimeStamp(0.536665110212902);
    msg.setSource(18922U);
    msg.setSourceEntity(162U);
    msg.setDestination(24416U);
    msg.setDestinationEntity(148U);
    msg.timeout = 21453U;
    msg.lat = 0.6912623492619897;
    msg.lon = 0.36433653315323833;
    msg.z = 0.7741489336030858;
    msg.z_units = 38U;
    msg.speed = 0.6919372904041676;
    msg.speed_units = 16U;
    msg.bearing = 0.13739324640076367;
    msg.width = 0.49530403657147704;
    msg.direction = 137U;
    msg.custom.assign("UOMFPKYHDCLMRRTHLPPTAKTTABPVUDBXSQPFEPQPYNETMIMEKEJBKLDVSTOGRBJZGIDECHAQCBYGOFGVUDNWFRPGUQQKLBOVNPWIMWDTNYQOFNXSWNNZGONKSJLIOMYAKJVFYFYHXLEZIWDJSDQVXIFZRBYQGQLNFZAKIHCHWECKIMGUVZLEOWAWMZWIHLTTUXSNSYVOIBJBAHAMSHJZRDRTCWESUJUZYDRCSHXELZQAAJRGBGXXVVRCXUC");

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
    msg.setTimeStamp(0.551569291389998);
    msg.setSource(41938U);
    msg.setSourceEntity(16U);
    msg.setDestination(4794U);
    msg.setDestinationEntity(59U);
    msg.op_mode = 250U;
    msg.error_count = 164U;
    msg.error_ents.assign("XGAUDGYHMDJFWPZTVRWDKTYMKGJTMYAGSUNEJQVDOAIAHIIAYYPAGFEUVIOUGNM");
    msg.maneuver_type = 9323U;
    msg.maneuver_stime = 0.5831218297216169;
    msg.maneuver_eta = 5185U;
    msg.control_loops = 1499536891U;
    msg.flags = 1U;
    msg.last_error.assign("IXYTFBRSUACGXBHZCUKLIALCEVIEKLRCWIHEZKIVECKMHJPJDHXZGVMWBAJZYZAYRXNADRN");
    msg.last_error_time = 0.8042768988346951;

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
    msg.setTimeStamp(0.23604613974373623);
    msg.setSource(56746U);
    msg.setSourceEntity(57U);
    msg.setDestination(17244U);
    msg.setDestinationEntity(173U);
    msg.op_mode = 76U;
    msg.error_count = 130U;
    msg.error_ents.assign("WICTLTRAAFSJSZ");
    msg.maneuver_type = 55358U;
    msg.maneuver_stime = 0.17921858145476233;
    msg.maneuver_eta = 58164U;
    msg.control_loops = 1616103685U;
    msg.flags = 62U;
    msg.last_error.assign("RKQVRZOZWNCWOCDOMHWYLMUQRLPKERNYAOKUZHPBRFWSRDFQMYDTHPKJKNAHDHCSWRLQMHGCMIFXXAQDDINUFJFQKBFDBXZDPNQJXFLXRAVMITOK");
    msg.last_error_time = 0.953465666491226;

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
    msg.setTimeStamp(0.2562812649179391);
    msg.setSource(49009U);
    msg.setSourceEntity(55U);
    msg.setDestination(14799U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 247U;
    msg.error_count = 189U;
    msg.error_ents.assign("RVLMBPFUVEXQLTIQYISWSUEJZZKBJEDDUPAQDHVLVYCZDBDQWGNBGJFBBNCSZZYWLXTZMCXCFHIQCIMLXENSEOUOJTARVKSLTURHWRDJMCDPZNHNGGULUFPPKMVPKKWGKNVTOLTBOWYSGGVIXZEXUCWTSVRDIFYWQHPLAMQNGFFRGEKPIRJPSUCXDRANUHNHAYIMPHXJLWOJMXBTHVYTOMZIAEMNYARFQOCAEOXTJKQAFJREBSOHSAKWQ");
    msg.maneuver_type = 41077U;
    msg.maneuver_stime = 0.02634712990605237;
    msg.maneuver_eta = 56953U;
    msg.control_loops = 2868124855U;
    msg.flags = 167U;
    msg.last_error.assign("KCGMYKDEIRPFIBGYUQBWIABEJTYOSFRGAQQOYRZSHWVWMGAATYYLHIGUVDPXXFHYXOVQOHXZHZYQBENWFZCROXPPJNMVEZRILSTHRNAXYWQNDQTGWCMUUVIKVEZOJSMITWCREMFXQRVSLZJHSOKZXPKJWQFKE");
    msg.last_error_time = 0.2773187818734899;

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
    msg.setTimeStamp(0.4808506501887647);
    msg.setSource(31323U);
    msg.setSourceEntity(33U);
    msg.setDestination(32627U);
    msg.setDestinationEntity(90U);
    msg.type = 10U;
    msg.request_id = 23089U;
    msg.command = 146U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.944580803772164;
    tmp_msg_0.lon = 0.9874428063696171;
    tmp_msg_0.z = 0.002448639504761596;
    tmp_msg_0.z_units = 149U;
    tmp_msg_0.speed = 0.36169411772087845;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.takeoff_pitch = 0.7602512767641624;
    tmp_msg_0.custom.assign("NQTMCFJLCS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4599U;
    msg.info.assign("YXCNUXHDWBKCBPGOEHFNJNLWOUNJBESFUKZPQOVHTGOVRT");

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
    msg.setTimeStamp(0.3167925274622746);
    msg.setSource(27474U);
    msg.setSourceEntity(190U);
    msg.setDestination(44180U);
    msg.setDestinationEntity(159U);
    msg.type = 52U;
    msg.request_id = 42001U;
    msg.command = 120U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9622118470399486;
    tmp_msg_0.lon = 0.027979822756842077;
    tmp_msg_0.z = 0.05129642668541112;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.radius = 0.6104494037828903;
    tmp_msg_0.duration = 2800U;
    tmp_msg_0.speed = 0.32486402816450966;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.custom.assign("WVWOKBFEUHAFULNCUJYZFFHMQPGSLFHCRAOYAROIAIJNGNOGYVWCYSXPCKLDGBSCPADKOKDXRCVBBYYZINDEJHQTTJXZGAHEQWKBIMSSCSEY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 11620U;
    msg.info.assign("ULHNWURIPWDPDJLDMTAEBUMSSFHYTNAAEGWWOZFCBAWVOZAJCOCLPRMCCUQYNQFZWLKPHIBIGCTBLOCNMYMUPAYVOFOKMIQMOTHUTYPERITZUGGZLXCXIKHSKXYZAQOHPINSKGFRVVSGENFQRYJXVDIXRKATEQYRZSMQXSDKOTFTEWLHPHGIJJXJMEAFVEBBFVHJJNISBQNRPEXJRGMULHWKQQPVZGNDVDDDBCDXXRLTAKLCUN");

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
    msg.setTimeStamp(0.8686688956573128);
    msg.setSource(40920U);
    msg.setSourceEntity(151U);
    msg.setDestination(24673U);
    msg.setDestinationEntity(164U);
    msg.type = 94U;
    msg.request_id = 46127U;
    msg.command = 221U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 6694U;
    tmp_msg_0.lat = 0.3598792507602504;
    tmp_msg_0.lon = 0.5001768536750135;
    tmp_msg_0.z = 0.3398401844112643;
    tmp_msg_0.z_units = 43U;
    tmp_msg_0.duration = 1142U;
    tmp_msg_0.speed = 0.369886159425881;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.type = 212U;
    tmp_msg_0.radius = 0.22022603641784777;
    tmp_msg_0.length = 0.5644079225364486;
    tmp_msg_0.bearing = 0.8517783551066106;
    tmp_msg_0.direction = 211U;
    tmp_msg_0.custom.assign("RFGXUOPAKYAAFMEUFLIOHAYPTTTOVIVHLSQKGQZLTDALPFDZPMCPIXLVUZREZDWWEGPHUJLZHDYIAWKAZYGHGIFCIJFUOZSCMXKEYIBDQSNHWKMHSVMQNXDWLGNDOHPXYXURNDJBPEQYHCNEYBRBXVBBIVNBSQCSFGQUMNTUNKAILOUZBRZHKNVTKWQXCJFLIYJLGSXWPVDBETOWCKMJCCJYVGRSOPTSMFFQJAREEVNTRGMQEWMOJBZXKAS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6248U;
    msg.info.assign("JMTZDDLCPCHXPSIXHSIGLLAMFEAT");

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
    msg.setTimeStamp(0.09786227374316236);
    msg.setSource(13917U);
    msg.setSourceEntity(33U);
    msg.setDestination(8067U);
    msg.setDestinationEntity(144U);
    msg.command = 136U;
    msg.entities.assign("LVEEDXNMQZNLJEYVIULCPZFBTMIBWMCLKZPKZERSIPQGBUKOQKSZIIAXYMAGSEODEQXOYCJYWNBXWGAFYVCHHYBAIJJATFCLLDNWDUDWACKSKTHDCVRXGPHDXMNSEFEPPKRDQUYAJAMVQHQURGMTEAWFCCJRIBPPGWWVOWOJFDMHGOPXOBUIZZAIRNZOGJBFTRKP");

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
    msg.setTimeStamp(0.5282817230039266);
    msg.setSource(2323U);
    msg.setSourceEntity(152U);
    msg.setDestination(58973U);
    msg.setDestinationEntity(140U);
    msg.command = 128U;
    msg.entities.assign("CZGXWOBERPCJZGTCUWAJRENOYKBJWN");

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
    msg.setTimeStamp(0.4213465593822714);
    msg.setSource(61755U);
    msg.setSourceEntity(130U);
    msg.setDestination(34298U);
    msg.setDestinationEntity(70U);
    msg.command = 181U;
    msg.entities.assign("LMGEHYFJJZLOXVSKHLXRLHONCHUVCJECNKLTXGNYKFFMBVZNSSTNCDQJFYPXNSLGKPHHCRIUGDTEDAIEPIQZOBFAFOMDMRUPWYUVBTSBEWRPWKEQZIAPTUNBJQDVEKPJHTCPWWFZSA");

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
    msg.setTimeStamp(0.16608881747810522);
    msg.setSource(61378U);
    msg.setSourceEntity(169U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(157U);
    msg.mcount = 245U;
    msg.mnames.assign("EWIHOITKODYXYCXDLLEABKWTCCQHKXNLXOQGMCDFEJNZCPQFVUJRRMKTNUFKAETMRCYJAMAWAKDTDGGOUZBKBFVZSVPQZTSTQTXGVCKMXYOEYHBVILBNHFELHPAVJLLBVIPGQHKYMSIKHUQIWDIZUGGWSWFYGLRRBTOMUIAXQHEJCZIZVYURVCZFSNSXNDJILUSOGHDJXZQWQOPJRYVRSPPNRFFOWYTX");
    msg.ecount = 132U;
    msg.enames.assign("NVRYPFSZDYHTOUUGTYKMVJMYBAYJTQMHONRWSTVYHJJVZIYPWPIPXNNNQAGQKSSLXGCOGCRIRONEAVOIBHUDQWKAIYORQUCEXABJDXLLBFDXMMGRLROUJVCJBKKEKPQCIELUGCPSPSINZLDJBZWDTHTQSGBUFDENQZPIDLHRZPTHVCE");
    msg.ccount = 108U;
    msg.cnames.assign("EARXUQKQZGWLZBXSKZWLBTMWONJOTNDMEUHBEVIFVMUSGPWFBYQBSQSIHPWODSAYVMTFKRGLITJZAUZJJLPLSEPIBLPCYMAQKTFJZWGMGYMISUCQJUNDMTPFNCSFLYVXPILORUXVBZNUYKXEZCARVIRYAQRNQTEOR");
    msg.last_error.assign("ZYEIZMTWSWLGKMHAOYSZIFMNVSCGHNOXOLWXYPPDZUQNYRKUWMNNYECSZOXDARUPZJINENROVWJGAFWVBUDESEZTJSUCBJTDQCYX");
    msg.last_error_time = 0.18149416154172904;

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
    msg.setTimeStamp(0.23039181951798016);
    msg.setSource(214U);
    msg.setSourceEntity(66U);
    msg.setDestination(37807U);
    msg.setDestinationEntity(18U);
    msg.mcount = 142U;
    msg.mnames.assign("WUYHJDZGZSIEWGGCKMUTZFYLXWTDYMGAXBMIJVMCUVBRFOVWDXTMWUUGERLDROJIWZSDYIZVRDPYVFKBSVFQDNFCHQTULOZAKHMLZXNNMLNEXNEPOGHISQEAFQXWIYLRURQTLBGGCMPCIEKYQMNQGONQDSVOJANSCABFHRDCTEKZCQSXGRYHTHRAXVHAKUBPJAPLKVYDXJYBEJFTENROUPOIECQNHAMTFAILCUBOLFZSWPHSKBOZT");
    msg.ecount = 243U;
    msg.enames.assign("JBHOJBXOIMMZGHUIUYOPZSSUPFXHLCOOVDJVBPXRFFBAVWEBRMUADWNPEAYFFGPRKGTXGIOILEGWGALYCUIEIVUBCPH");
    msg.ccount = 47U;
    msg.cnames.assign("XUDZLWGKBZRUGBLAQLQDLVQVSAUCCWAJFFAOTMFRSBFUDY");
    msg.last_error.assign("ZLRNNVPHQQJLAAZYBAHCGIDHTCTUQQFQZOLBITDWVTESXRGQRZKORSNXUFKMCJRMBJFCY");
    msg.last_error_time = 0.9706587820166166;

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
    msg.setTimeStamp(0.8467987462498502);
    msg.setSource(57981U);
    msg.setSourceEntity(122U);
    msg.setDestination(40557U);
    msg.setDestinationEntity(60U);
    msg.mcount = 75U;
    msg.mnames.assign("BVGHOYNTBAMOIMENSYYWHFVOKHHCDLUUPDBQQJJHQZLAEIDIDKZIQEXUMLPRGMEDFBDJVKLWBVRZWEQDRXFOIGGKRPTGRNWWZZKAXABADLJMPCJPFQOWTRWVXFUTAIYXFJPCQNSXZACXISINWOQPSTT");
    msg.ecount = 85U;
    msg.enames.assign("DFPEFXDVGLPIRSXLXIEXTKLGNQOCVJHGTFHNQGUBNHREBAFVCBDSSOFZIWJJSOQEWNTBHZRKNSWALQZPPARDYNWRWMTGSJYQOQPKINUCDFMUXKXZWUPBJLZXBVAUVKTEBMPKWSQIGZTBLIQELOCANFVNKMAYRUUZYWFSLECDOHCJADTSZNIBRIMGMBEJHQLFGKOXZUYZYWJPCAHSHVVCJMYIDPOTPKDYTXMHQGURHDWVEXR");
    msg.ccount = 165U;
    msg.cnames.assign("JTYFVDLQRLUQVRAVHHPAPLCWASKLDBJZPOHMUUOAPZNRTFKITEGNZERIXADMPLWAJFELNMGEIOBQDXLGQKFUBVHHBCNYSPNHKWZLYOCEXAEJSXIUZVSVJWKSFWCXESHORTPWLGBWJEUSCBRZPXTOVKSGJLDADRRVZOJDNFYMIOAZWYMDTMCWTMTNXHYMEDBDIFPCGBQNQKGFUQQIXSYBXGCMGYKRSUBQEWYIVNHIG");
    msg.last_error.assign("OPWCJVOLLLNSMNZSMOIOKBJEUEKBOCWZHAILKZUQDWQSIYMIERPUGTEPQFXSRXDNGYGRGZTDZDLFWKFQZQSXSCVOJQAE");
    msg.last_error_time = 0.727584525172748;

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
    msg.setTimeStamp(0.5291963612893036);
    msg.setSource(6430U);
    msg.setSourceEntity(75U);
    msg.setDestination(22559U);
    msg.setDestinationEntity(137U);
    msg.mask = 200U;
    msg.max_depth = 0.7335040488140258;
    msg.min_altitude = 0.7535038322890258;
    msg.max_altitude = 0.15699791399641505;
    msg.min_speed = 0.6287982898976097;
    msg.max_speed = 0.3066796846368143;
    msg.max_vrate = 0.2613100890138478;
    msg.lat = 0.756785771817117;
    msg.lon = 0.33054066173942864;
    msg.orientation = 0.9590509584563987;
    msg.width = 0.9808083836686515;
    msg.length = 0.43652732649304204;

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
    msg.setTimeStamp(0.3495308489775436);
    msg.setSource(64653U);
    msg.setSourceEntity(99U);
    msg.setDestination(63578U);
    msg.setDestinationEntity(180U);
    msg.mask = 181U;
    msg.max_depth = 0.003912355938908263;
    msg.min_altitude = 0.7235673912965382;
    msg.max_altitude = 0.4524038482385704;
    msg.min_speed = 0.9932180295219689;
    msg.max_speed = 0.37745632490049164;
    msg.max_vrate = 0.4970893093894182;
    msg.lat = 0.09352527846541914;
    msg.lon = 0.8690951648679275;
    msg.orientation = 0.9491445250120183;
    msg.width = 0.1853634827314623;
    msg.length = 0.5986905625470974;

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
    msg.setTimeStamp(0.1866743506242302);
    msg.setSource(18257U);
    msg.setSourceEntity(39U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(96U);
    msg.mask = 202U;
    msg.max_depth = 0.06398898748997606;
    msg.min_altitude = 0.44925429544805595;
    msg.max_altitude = 0.11895785742812492;
    msg.min_speed = 0.3872205866679541;
    msg.max_speed = 0.7689910729264959;
    msg.max_vrate = 0.2753701750039973;
    msg.lat = 0.8509924129262691;
    msg.lon = 0.5867355290588367;
    msg.orientation = 0.010877855067891629;
    msg.width = 0.14169345808490663;
    msg.length = 0.309691281983312;

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
    msg.setTimeStamp(0.062058013805434964);
    msg.setSource(57758U);
    msg.setSourceEntity(193U);
    msg.setDestination(15610U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.7760471877756773);
    msg.setSource(61786U);
    msg.setSourceEntity(248U);
    msg.setDestination(62697U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.12755243441776087);
    msg.setSource(28634U);
    msg.setSourceEntity(240U);
    msg.setDestination(52427U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.42880114446577766);
    msg.setSource(60564U);
    msg.setSourceEntity(0U);
    msg.setDestination(64701U);
    msg.setDestinationEntity(228U);
    msg.duration = 7583U;

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
    msg.setTimeStamp(0.8686785104036364);
    msg.setSource(36024U);
    msg.setSourceEntity(65U);
    msg.setDestination(59806U);
    msg.setDestinationEntity(42U);
    msg.duration = 37214U;

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
    msg.setTimeStamp(0.11236906683834225);
    msg.setSource(19349U);
    msg.setSourceEntity(111U);
    msg.setDestination(25561U);
    msg.setDestinationEntity(39U);
    msg.duration = 6306U;

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
    msg.setTimeStamp(0.6860321966275834);
    msg.setSource(12052U);
    msg.setSourceEntity(44U);
    msg.setDestination(39465U);
    msg.setDestinationEntity(147U);
    msg.enable = 50U;
    msg.mask = 1410779038U;
    msg.scope_ref = 4053177670U;

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
    msg.setTimeStamp(0.8875523424538879);
    msg.setSource(62298U);
    msg.setSourceEntity(153U);
    msg.setDestination(15483U);
    msg.setDestinationEntity(23U);
    msg.enable = 93U;
    msg.mask = 1967236440U;
    msg.scope_ref = 2774721301U;

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
    msg.setTimeStamp(0.35200505930859705);
    msg.setSource(41274U);
    msg.setSourceEntity(245U);
    msg.setDestination(40209U);
    msg.setDestinationEntity(8U);
    msg.enable = 229U;
    msg.mask = 2667064801U;
    msg.scope_ref = 2811912640U;

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
    msg.setTimeStamp(0.7627950310775738);
    msg.setSource(25073U);
    msg.setSourceEntity(68U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(203U);
    msg.medium = 68U;

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
    msg.setTimeStamp(0.7844143327567898);
    msg.setSource(10315U);
    msg.setSourceEntity(193U);
    msg.setDestination(40667U);
    msg.setDestinationEntity(16U);
    msg.medium = 116U;

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
    msg.setTimeStamp(0.6505877472048086);
    msg.setSource(45662U);
    msg.setSourceEntity(223U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(90U);
    msg.medium = 2U;

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
    msg.setTimeStamp(0.39604683428911847);
    msg.setSource(50448U);
    msg.setSourceEntity(95U);
    msg.setDestination(9727U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8043534394614467;
    msg.type = 223U;

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
    msg.setTimeStamp(0.44023938929108475);
    msg.setSource(25431U);
    msg.setSourceEntity(215U);
    msg.setDestination(65167U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9922802045887144;
    msg.type = 166U;

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
    msg.setTimeStamp(0.0771319732954514);
    msg.setSource(19410U);
    msg.setSourceEntity(30U);
    msg.setDestination(23429U);
    msg.setDestinationEntity(25U);
    msg.value = 0.015509543053914054;
    msg.type = 75U;

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
    msg.setTimeStamp(0.7433504247062945);
    msg.setSource(44850U);
    msg.setSourceEntity(161U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(236U);
    msg.possimerr = 0.3728252686488335;
    msg.converg = 0.7382018588913981;
    msg.turbulence = 0.46016394869515376;
    msg.possimmon = 47U;
    msg.commmon = 196U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.0728798205270832);
    msg.setSource(9267U);
    msg.setSourceEntity(66U);
    msg.setDestination(24871U);
    msg.setDestinationEntity(49U);
    msg.possimerr = 0.057717184304906466;
    msg.converg = 0.575979217431949;
    msg.turbulence = 0.30401702713543166;
    msg.possimmon = 110U;
    msg.commmon = 48U;
    msg.convergmon = 154U;

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
    msg.setTimeStamp(0.11748107896608784);
    msg.setSource(42982U);
    msg.setSourceEntity(156U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(106U);
    msg.possimerr = 0.7053388085575659;
    msg.converg = 0.15669567426320286;
    msg.turbulence = 0.47013778507553783;
    msg.possimmon = 174U;
    msg.commmon = 130U;
    msg.convergmon = 190U;

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
    msg.setTimeStamp(0.7808982184720648);
    msg.setSource(52810U);
    msg.setSourceEntity(84U);
    msg.setDestination(31751U);
    msg.setDestinationEntity(178U);
    msg.autonomy = 12U;
    msg.mode.assign("GEMSXQGPWIUIMKBOAMSOOGYCKCRMUWGBHALOICBZCFBNZWRALKTPRXPDDQLJLQTHCMUIATXNDAQYLFFIFNKBVLAITXZATSHZYWUUTJUOVSEQBLHSVXWV");

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
    msg.setTimeStamp(0.45914382202080184);
    msg.setSource(11425U);
    msg.setSourceEntity(27U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(85U);
    msg.autonomy = 149U;
    msg.mode.assign("DSGOCBISLDOSPPNKMKILDOGUDQFFNNNHBHWAJGYBRICSIVLNTYRHPCX");

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
    msg.setTimeStamp(0.7560050802124672);
    msg.setSource(28765U);
    msg.setSourceEntity(231U);
    msg.setDestination(50712U);
    msg.setDestinationEntity(103U);
    msg.autonomy = 149U;
    msg.mode.assign("NBXLWLEUCVGETHYI");

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
    msg.setTimeStamp(0.19175251670798443);
    msg.setSource(65453U);
    msg.setSourceEntity(148U);
    msg.setDestination(30654U);
    msg.setDestinationEntity(147U);
    msg.type = 34U;
    msg.op = 109U;
    msg.possimerr = 0.9535107382089121;
    msg.converg = 0.26560454426336266;
    msg.turbulence = 0.41802373243628876;
    msg.possimmon = 175U;
    msg.commmon = 183U;
    msg.convergmon = 194U;

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
    msg.setTimeStamp(0.36145585734316354);
    msg.setSource(32119U);
    msg.setSourceEntity(242U);
    msg.setDestination(53452U);
    msg.setDestinationEntity(181U);
    msg.type = 40U;
    msg.op = 40U;
    msg.possimerr = 0.683478618984506;
    msg.converg = 0.1619332322986068;
    msg.turbulence = 0.08797549060371213;
    msg.possimmon = 144U;
    msg.commmon = 34U;
    msg.convergmon = 124U;

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
    msg.setTimeStamp(0.2632160615340534);
    msg.setSource(16197U);
    msg.setSourceEntity(66U);
    msg.setDestination(18277U);
    msg.setDestinationEntity(185U);
    msg.type = 237U;
    msg.op = 118U;
    msg.possimerr = 0.9302288665690381;
    msg.converg = 0.6795618923454023;
    msg.turbulence = 0.7810338840565988;
    msg.possimmon = 247U;
    msg.commmon = 186U;
    msg.convergmon = 72U;

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
    msg.setTimeStamp(0.45316917031140036);
    msg.setSource(49458U);
    msg.setSourceEntity(187U);
    msg.setDestination(63786U);
    msg.setDestinationEntity(104U);
    msg.op = 166U;
    msg.comm_interface = 163U;
    msg.period = 9900U;
    msg.sys_dst.assign("DJPSLVCHWETZWCUUYUYSXLZZISU");

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
    msg.setTimeStamp(0.11974842582004308);
    msg.setSource(37607U);
    msg.setSourceEntity(198U);
    msg.setDestination(32844U);
    msg.setDestinationEntity(205U);
    msg.op = 208U;
    msg.comm_interface = 12U;
    msg.period = 24904U;
    msg.sys_dst.assign("ULAUMVWJZJKGJSIHXPPTBOJUHFCOGFVVKI");

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
    msg.setTimeStamp(0.8496441276501366);
    msg.setSource(31034U);
    msg.setSourceEntity(42U);
    msg.setDestination(50187U);
    msg.setDestinationEntity(13U);
    msg.op = 59U;
    msg.comm_interface = 208U;
    msg.period = 23936U;
    msg.sys_dst.assign("TWXCWYNAQGIQKFYWJVAZBCGOCBKLPTUEAKBTFIHQPGAJTJWLXTOSRZIZKCMVJFOCVIBNPYBWYEERFYTUCDUBDWCTPYSXQU");

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
    msg.setTimeStamp(0.1025868328678381);
    msg.setSource(57892U);
    msg.setSourceEntity(119U);
    msg.setDestination(61830U);
    msg.setDestinationEntity(144U);
    msg.stime = 3862569537U;
    msg.latitude = 0.6432887873780784;
    msg.longitude = 0.5665985534389915;
    msg.altitude = 6629U;
    msg.depth = 18761U;
    msg.heading = 3602U;
    msg.speed = 30026;
    msg.fuel = 44;
    msg.exec_state = -125;
    msg.plan_checksum = 35366U;

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
    msg.setTimeStamp(0.143618093205225);
    msg.setSource(21879U);
    msg.setSourceEntity(167U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(8U);
    msg.stime = 3582296538U;
    msg.latitude = 0.8772146897092545;
    msg.longitude = 0.2092118385214029;
    msg.altitude = 1809U;
    msg.depth = 4385U;
    msg.heading = 50301U;
    msg.speed = 22576;
    msg.fuel = -97;
    msg.exec_state = 44;
    msg.plan_checksum = 47691U;

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
    msg.setTimeStamp(0.5060150072136271);
    msg.setSource(37033U);
    msg.setSourceEntity(184U);
    msg.setDestination(62034U);
    msg.setDestinationEntity(70U);
    msg.stime = 2138197453U;
    msg.latitude = 0.1238544680708854;
    msg.longitude = 0.4795273627014883;
    msg.altitude = 58759U;
    msg.depth = 7679U;
    msg.heading = 63001U;
    msg.speed = 6000;
    msg.fuel = -71;
    msg.exec_state = -115;
    msg.plan_checksum = 13099U;

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
    msg.setTimeStamp(0.38061671538004194);
    msg.setSource(55060U);
    msg.setSourceEntity(58U);
    msg.setDestination(5538U);
    msg.setDestinationEntity(152U);
    msg.req_id = 37992U;
    msg.comm_mean = 247U;
    msg.destination.assign("HNLZWISWJYFCLAMIGHSMUBEQFHSGAVOGSRLDZSPNWAMUBDCYQKRQOVJIMSURTMIGVXLKETTKXKCZACEXCZRZFCMWPRZCJNEAWVWJEKTBMRAFGAKXNFDQYGJUHDVXDZFMHPKSFJNUTXHDABRVKSNPBXBIEMXCYLESDVHCSVQIQULZZOATTYCFAYVTGBHLBHJILKFDGQWDWPTBIHJZOPJQORUGRNLUYUPKEQGEWPYXOQNIEDPYJ");
    msg.deadline = 0.7462278866632176;
    msg.range = 0.08196936896984719;
    msg.data_mode = 51U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::QueryLedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KWIRQQNDAKWSJJIZKVIIJALHBSFITOYZPBXVEWONRHAZSGKSDAUYHDZEZNCWTMKEHXOTOUYVKTKRWAXOXCAZMWELADTPEXJJZGHDBPXPGXFBLNULYIURBNPSFDGWQBJRLOWGQGAIUSDTBMRAMQHVKXGTUYCTSFMXIPPSYYBDCRMDJQUJRLTYEZK");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JKLRNGCXNBUQKGXWEOFLZUUFBIBUYNAGZYQREEJTQXRPYSZFGIMAIYDCIUSZHJKJAAUFNSQOVPTNNTOORNZUVLEACSEMMIPFLDPKIJLZFWOOHMJHXKITMWUHOTKVEDRJRMMMBSXLQNDKIHVFQYFQTBUCVHDTDSAQFSHZPLMWXTJRIRRDWXXBKYOSAKXTLOYBGBPWGGJCCCLLEAWRNVFBCAGYU");
    const signed char tmp_msg_1[] = {-128, 33, -4, -101, -39, 1, -20, -104, 12, -95, 8, -82, 34, 70, -71, -114, -67, 79, 104, 25, -91, -102, 6, -15, 87, 70, 60, 0, -104, 93, -100, 47, -121, -70, -89, -25, -18, 106, 103, 21, -5, -105, 71, 7, 1, 5, -43, 10, -89, -43, 111, -116, -92, 93, -25, 24, 41, 1, 126, -46, 26, -62, -116, 12, 122, 34, -6, 59, -69, 15, -50, 12, 26, 80, 42, 21, 48, -4, 86, -128, 102, -39, 100, -4, -103, -89, 15, -104, -23, 39};
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
    msg.setTimeStamp(0.5475824205649634);
    msg.setSource(54228U);
    msg.setSourceEntity(171U);
    msg.setDestination(44031U);
    msg.setDestinationEntity(14U);
    msg.req_id = 1543U;
    msg.comm_mean = 170U;
    msg.destination.assign("YQLOBBXPVCQVOCFOYYVOJUXEEWJMSBRATQZJXPPGDAJDSNBOVBZRBEEHHMDHCGRJSQNRWENILRDDSIHIHFEUTFRTAGICJTZKMFOQNHZWIKWFILOZBDPGJAZBVGQDYDHIWWWXWFLTGVXLAHLCOVFTJRTJBYEXUSUNSNMAIUFKKWNZSNXRKPTKBX");
    msg.deadline = 0.2916543495508034;
    msg.range = 0.11072411110592861;
    msg.data_mode = 121U;
    IMC::SmsRequest tmp_msg_0;
    tmp_msg_0.req_id = 95U;
    tmp_msg_0.destination.assign("OZPLXWVBQHPQNVXQALKHBQBBKFMRMKGGTRZWLYMERSDGCYGRVDINGIHDUEVEPTUHPVCATUCEUOTUNKYUIASQZYUNOAOJRNKWLARVBOIOGSX");
    tmp_msg_0.timeout = 0.007744295144549773;
    tmp_msg_0.sms_text.assign("TXKLZUYJFNMMWGYDLLNFASJTZUICATIKERPGHBHYUQDAFVYEOOTBQHKFBEJPCNXIGNWIGOISKFHTUZHHPCZJVJBYXICVFVBOIGZAORMZZQZGNTKRGMSEBWXVWOPJTLCURYLMDHWPPJMDQPUGXXKCNQKKCCVBSJLISFQNXXHSGURSWXEUVAAEAWMOTLYFDN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JVXCDOJPRYYBAHAHXXTTNZMTQMADRCKVATWHPEFWYVYNNVSFDKMHGZXSYGROOLGMOIGJUTCUOHMEV");
    const signed char tmp_msg_1[] = {-40, -114, 118, 34, 123, -7, -66, 59, 23, -87, 91, 37, -74, 120, -62, 98, 24, 77, -71, 68, 27, 86, -73, 74, 67, -99, -95, -15, 41, 84, -114, 122, 15};
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
    msg.setTimeStamp(0.40066459071192195);
    msg.setSource(35432U);
    msg.setSourceEntity(99U);
    msg.setDestination(32422U);
    msg.setDestinationEntity(30U);
    msg.req_id = 64190U;
    msg.comm_mean = 155U;
    msg.destination.assign("UITKKECOVHHRTGNSYZCFKDNHTSZGVIPCRGUDVEZRITWDZVAHXLQARBDJSTMIFBAWQQWROPFXXHFNWYJWLWJSUESZMFKFMXVMWTENVMTLKUXFGBJOYEYZPJPVZKHQQYLZEJINALXFGPVQMCDPSPKZPEKWUNMRORXTMODBUJOXERGHOZCCWKVHUKIEBYFNYMXLJBQUCCLSCSBGIHTBIO");
    msg.deadline = 0.615201588077707;
    msg.range = 0.9750713056196544;
    msg.data_mode = 123U;
    IMC::Airflow tmp_msg_0;
    tmp_msg_0.va = 0.25994794846671965;
    tmp_msg_0.aoa = 0.8565554918552902;
    tmp_msg_0.ssa = 0.3250100506768697;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("INMTXUCHABHFEEQWZSFCLFVJOLDBBNEKGTGOBXTDLAEYLYKJAVNFSOXQDQSTXIAPRECZWWMDDQZWKGICXGUUUJQJYYQTMLJOVYDKJTLPASIXUCBXBRBUDNFZZSPDYCTZSXHPHFGNTJVVACNIGLGKQPRIJOCTBGQFHFQNSVZ");
    const signed char tmp_msg_1[] = {-35, -87, -127, 29, -1, 53, 62, -83, -102, 11, 55, -115, 53, 87, -64, 125, -30, 69, 26, -90, 11, -125, 25, 58, -1, -105, 47, -92, -102, 39, 99, 21, -121, -110, 59, 34, -115, -65, 18, 112, -123, -45, -126, -45, 61, -93, 115, -48, 0, 93, -23, -45, -125, -85, 117, -94, -93, -36, -126};
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
    msg.setTimeStamp(0.9679206615644355);
    msg.setSource(61938U);
    msg.setSourceEntity(236U);
    msg.setDestination(9453U);
    msg.setDestinationEntity(47U);
    msg.req_id = 4781U;
    msg.status = 165U;
    msg.range = 0.4140971685209024;
    msg.info.assign("XJCWDPZSBRPFULHKNWQBXUSBCZYXEUTBRVZWTVLOILAEZMMJXPBYFPAIJFMKZEIKOSHQEWUYEIRCKLMVGHXVWHSLXADQDBGTNHEAVDOFQQJDHPNUJELEXFOENGBZDNNYDMVDPQUXYELGSYSYTCIIDOJGTLWRQOFUICFMONAOTZ");

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
    msg.setTimeStamp(0.9991457383701203);
    msg.setSource(63279U);
    msg.setSourceEntity(115U);
    msg.setDestination(44199U);
    msg.setDestinationEntity(127U);
    msg.req_id = 32940U;
    msg.status = 163U;
    msg.range = 0.5447784667765238;
    msg.info.assign("KKFEVWUMZUOXFIUDEMSLALMTPZWAAIXNNOBHEZLWJDDRMSFTTWRIUICHOCEXXVPQQMLADLQUSKJZXNSDBNTIXGJDGXCONKKSKAPCHHMLAQVTBCVRBNVFEQRRVGOPHPCMBRSRFXJFQHPUYGQQHWHKYKKWOJSIDVZCLLBGWYEQGTQPAAYWYCEGJUFZEUMVKGNOHEZBYVJLYGGPPOZSCXZDZATDRBN");

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
    msg.setTimeStamp(0.12755060140925323);
    msg.setSource(19879U);
    msg.setSourceEntity(4U);
    msg.setDestination(56602U);
    msg.setDestinationEntity(159U);
    msg.req_id = 19286U;
    msg.status = 129U;
    msg.range = 0.21774844047860042;
    msg.info.assign("ECXJFJWHCBCMIDEFNVAPJXYPBESFYRSLEVCLNKPZIRGZLKWUISNCQJAPYFDTHQGZKHFBEOVBTLAIHXQAYVCHUGHEOYNDPAUZFBAFZBTHQWHSCZITVIKMODFKRILXTRZVSHMRZOUNQTWEYYVEW");

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
    msg.setTimeStamp(0.9055406487400347);
    msg.setSource(10718U);
    msg.setSourceEntity(105U);
    msg.setDestination(64493U);
    msg.setDestinationEntity(124U);
    msg.req_id = 35351U;
    msg.destination.assign("NAXTOHFJHPSUHTQPITZNWDSZSUKZIANIHYGRTCLBLZCPGRFBOGICIDBOVKYTQJKPEGNPDYJNUMTJJXDQIPOXDEC");
    msg.timeout = 0.5924742486936669;
    msg.sms_text.assign("LVQFVFXZCIBWHEZQODEYYTINJDIOTBTUFDNVSKBNXUGYZJXPHRDVRFNFALFHROSXWYTGRCXEDXOYKWXSMOMKXMMQSLPOALQRYKCJGPUNVGGHQBWFCAHSRZDMIZEJIISQTFHDVHSNLCTBVXWPNSMTOUXASBINKPBJYPFCJBCPCFRHVMVRRAATQOQEUKRAPJDEKPCEKAHEUSBWAQUWLAUTEEVZIYGZP");

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
    msg.setTimeStamp(0.05532976755815877);
    msg.setSource(48967U);
    msg.setSourceEntity(99U);
    msg.setDestination(45635U);
    msg.setDestinationEntity(110U);
    msg.req_id = 39198U;
    msg.destination.assign("WYKFJGTSEUQJAYXEIPCFRGATMVGHKJSARGBOCQLAOWJKZMYIMTZXIOT");
    msg.timeout = 0.621697337367226;
    msg.sms_text.assign("HDREPIYDNCDU");

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
    msg.setTimeStamp(0.060490957039112);
    msg.setSource(37190U);
    msg.setSourceEntity(16U);
    msg.setDestination(26999U);
    msg.setDestinationEntity(175U);
    msg.req_id = 20627U;
    msg.destination.assign("FQXXFTPFWWULPSDSLPXKJMCCFFPGPUHVAONYAMYJHYWEBAYJSLTEMGXMCIGYZEIZMITUWZPMOVUMTVXXYQGRVFONLCAVTIGKZOBWRDZBKBSMHR");
    msg.timeout = 0.8534009376536345;
    msg.sms_text.assign("OJGDQYAYHNDNASCHPMMWTAJKHPTGTTRQYHNPZFXLVOAUSIYLVWFIEMOKBLHUCXMDSSEOIRHXUDECZUZWHBPJBCQGWYCLJWMVGILWUGNTKKDWBZPG");

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
    msg.setTimeStamp(0.41286069248702284);
    msg.setSource(39475U);
    msg.setSourceEntity(62U);
    msg.setDestination(31598U);
    msg.setDestinationEntity(7U);
    msg.req_id = 8599U;
    msg.status = 30U;
    msg.info.assign("PQFZOCKGBVMUHBPZTYJTTATHYNOYDZEQZQGPYLTXOGTUMXXTRVSNXSBRTDQXRRZNMKJDVKSYLELUZGOYJHZDGLRKMVIGIHSVAJDCOUJXUAPVWXDZHIXXDRIJBDQFMKWBSNFNNKRZFCIRJUALHMBHQLRHGGIQEKFMFCDRXSAAEBWWELPIBNJOFOYYSLCTOEWAFMCKEUFQCJNBIQSPGVVWEVWCJPZIPUMIPMHCVWWQYCUYBEPOOKA");

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
    msg.setTimeStamp(0.029315134932448306);
    msg.setSource(64064U);
    msg.setSourceEntity(95U);
    msg.setDestination(58225U);
    msg.setDestinationEntity(62U);
    msg.req_id = 205U;
    msg.status = 116U;
    msg.info.assign("NQJRTVGUREPVDLXAZPJXXKQSWXE");

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
    msg.setTimeStamp(0.5651671810145664);
    msg.setSource(15552U);
    msg.setSourceEntity(67U);
    msg.setDestination(29612U);
    msg.setDestinationEntity(74U);
    msg.req_id = 14294U;
    msg.status = 40U;
    msg.info.assign("EPJVFASRUIYQELZHQKOEFIXOGQFWGVQWJOYQSETLYWARWAAJRUUGDOUSIAABZWEIHKQYZOFJKZCJJBPBVYLUIJOPYJHCDPTMSSFL");

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
    msg.setTimeStamp(0.21360003522567406);
    msg.setSource(46158U);
    msg.setSourceEntity(54U);
    msg.setDestination(42446U);
    msg.setDestinationEntity(85U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.04398854372038308);
    msg.setSource(22992U);
    msg.setSourceEntity(224U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(119U);
    msg.state = 148U;

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
    msg.setTimeStamp(0.18856035712042685);
    msg.setSource(43407U);
    msg.setSourceEntity(116U);
    msg.setDestination(21511U);
    msg.setDestinationEntity(237U);
    msg.state = 55U;

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
    msg.setTimeStamp(0.3515578260401302);
    msg.setSource(24689U);
    msg.setSourceEntity(12U);
    msg.setDestination(63243U);
    msg.setDestinationEntity(61U);
    msg.state = 1U;

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
    msg.setTimeStamp(0.08286717365162688);
    msg.setSource(25517U);
    msg.setSourceEntity(133U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(59U);
    msg.state = 225U;

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
    msg.setTimeStamp(0.09388556330419029);
    msg.setSource(29196U);
    msg.setSourceEntity(234U);
    msg.setDestination(190U);
    msg.setDestinationEntity(217U);
    msg.state = 4U;

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
    msg.setTimeStamp(0.5943795807680746);
    msg.setSource(13294U);
    msg.setSourceEntity(145U);
    msg.setDestination(22999U);
    msg.setDestinationEntity(70U);
    msg.req_id = 13117U;
    msg.destination.assign("JWKEZIGKBPYSRFWEEOVIGOKGQSRBDSTEJVUCWPDAZDWNYWYOWCMAKVMFVXV");
    msg.timeout = 0.018604123392790606;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 138U;
    tmp_msg_0.frag_number = 164U;
    tmp_msg_0.num_frags = 110U;
    const signed char tmp_tmp_msg_0_0[] = {87, 64, -114, -95, -73, 11, -124, -100, -77, -111, 52, 88, 33, -55, -15, 96, 91, -51, 49, 95, 97, 6, -127, 49, -27, -10, -24, 4, 125, -30, 101, 34, -122, 10, -91, 53, 13, 121, 126, 14, -54, 92, -115, -97, 73, -78, -79, 12, 119, 27, 53, -20, 73, -48, -58, -72, 0, 89, -104, 110, -15, 50, -8, 48, -72, -91, -107, 114, -66, 43, 25, -55, 78, -93, 89, -120, -40, 75, 52, 27, 89, 60, -113, -76, -27, -1, 13, -55, 15, 121, 81, 10, -26, -42, -112, 82, -99, -44, -115, -30, 75, -77, -18, 19, -104, 19, 125, 82, 67, -22, 78, -23, 114, -100, -4, 40, -28, 76, 110, 39, -45, 120, 48, 123, 58, -89, -32, -20, -4, 67, 47, -11, 39, 9, -74, 110, -128, -64, 3, 25, 21, -32, -78, 44, -36, -23, -69, -26, -16, -4, -86, 97, 125, 98, 96, -86, -126, -18, 19, 61, 24, 81, -49, 40, -83, 17, -12, 66, 122, 7, -108, -106, -33, 17, 20, 97, 120, 74, -84, 20, -32, 84, -122, 58, 101, 42, -108, 70, -128, -103, 20, -94, -112, -5, 14, 41, -110, -29, 12, -101, 103, 69, -73, -50, 95, 37, 22, 88, -46, -31, 74, -43, 17, -104};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4503042404349462);
    msg.setSource(63178U);
    msg.setSourceEntity(174U);
    msg.setDestination(62157U);
    msg.setDestinationEntity(204U);
    msg.req_id = 51366U;
    msg.destination.assign("OMDQGXZJUMRCYUDZRQWTPYLZLCURKTOHDZEQVJIHUYFLVIENCEJGEJCLPLDAUNDWVTCRPIPKITKDQALBMKRORHISWRNVEOXGFAEKKSEVPUSSSATTZWYADRYPBMKLJFQVBREGTMUCOGQXZWAVCOSXBNTZKVGFGHXWBNEFNKGAFOXGQXIJYALHFHMZIFOTIWBI");
    msg.timeout = 0.1652965616693749;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 142U;
    tmp_msg_0.error.assign("DSTUALALCIHVLHTEZSNOBBQWUDUVUROFHVSNFMPJMLWYNOVECPSXTHHNILGYGNJRUBYSIRLCPQPSMVYELAOIMQHZRBNKWPDXQFAXPTPQIJJP");
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
    msg.setTimeStamp(0.05617047792127139);
    msg.setSource(55598U);
    msg.setSourceEntity(175U);
    msg.setDestination(53592U);
    msg.setDestinationEntity(27U);
    msg.req_id = 319U;
    msg.destination.assign("OETXOERAXTEPRARYVHGPLLMUTWGIKWDRIZDSKWHQUGUUEUMYJHGTMCKJWRUDBNTNQPEJVMGNBXVBLSLPLDRAAZJOHITCFKKBIZPYPEOVSNOKENMFJVCSGPHWFQHEOBAOYMQBKZZQCTDNXSREHWFVGFVDCFSMXWFQ");
    msg.timeout = 0.2941900560514298;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("SATLHTVBVEFLDVDWVGPQZPOCDTCTSVYPIDWHICXRXPRQMNGVTFYZBULKOFYDAEIRLGECYNZZMJYUAIKWIJFJZVNZQOXTFFNYPWBQEUHTBRQRDUKLVUGFQFJURNMHXGOEEBNBKLOGUCKYCNLCGIFWYKKNMQQYAXXOKZGFICPWAQZJHYDMUEMASJPHXADOIRJPOZG");
    const signed char tmp_tmp_msg_0_0[] = {11, -60, -20, 34, 77, -3, -80, -124, 47, -76, -123, -2, -108, -56, 40, -80, 86, -124, -18, 43, 55, -42, 107, 53, 6, 64, -95, 94, -88, -125, -95, -2, -32, 70, -124, 93, 37, 83, -39, -64, 118, -127, 62, -126, -31, 118, -38, -62, 61, -17, 109, -124, -104};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7246820613103806);
    msg.setSource(51174U);
    msg.setSourceEntity(240U);
    msg.setDestination(35837U);
    msg.setDestinationEntity(137U);
    msg.req_id = 9825U;
    msg.status = 219U;
    msg.info.assign("VXMEVCONJCGKGSUZPIJJIFPHWULYEYPZCRZHRYIVEKBGZZDVRLHMDHCXBIIRQAWTWZDEUCIGFSDYUOEWXRLUNEFMJNVMQGWRAPTBSBKAFTYQSMPXSABSUEZYLRLTLZGVQBNNOODHXJHDPKFVVHSWOUINJMDAUJROQHVDMEAIGRATGTBJPANCBWUONQEQSQUAAMXYGXFKJOVKSFMFCQTPC");

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
    msg.setTimeStamp(0.6160704510126452);
    msg.setSource(13466U);
    msg.setSourceEntity(13U);
    msg.setDestination(37700U);
    msg.setDestinationEntity(108U);
    msg.req_id = 1008U;
    msg.status = 73U;
    msg.info.assign("QSFXLGHGDREFOMQKQTZKMIZGKPCXCHBYZYWSGZROWBQRUDITYJVBGPYUSKBGXKXRCUVSUPPHYTTABMNHCWPONIPLSZKWTMLHWICYOEMONQBWXNPQIYKMMHLJUKRCQYSSYLFNUXBDORLRERLUHIBPWFXWJUBVTMZOTJVXLU");

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
    msg.setTimeStamp(0.769772467222043);
    msg.setSource(55150U);
    msg.setSourceEntity(218U);
    msg.setDestination(36256U);
    msg.setDestinationEntity(17U);
    msg.req_id = 3625U;
    msg.status = 139U;
    msg.info.assign("AKYRLXQJRKSJF");

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
    IMC::AssetReport msg;
    msg.setTimeStamp(0.6058914591517417);
    msg.setSource(9490U);
    msg.setSourceEntity(243U);
    msg.setDestination(55618U);
    msg.setDestinationEntity(1U);
    msg.name.assign("WPIEKMKNPQKGPVFMQTZCLOYEKDIAIZDJNUIKTBFXZUCUWHRCBXMOVMSBQGFYSDPSADIGMWEHCERRULNMALXTRZJAAYTTNGTUBBOOBAVUGVZEZKIYBDNFDRGXJZQAHDHTRCIBASHMUXCVWMXWCELJDZPQORCWQBLCKVQVYALDXTOVOFSRWEGXQPJFFVCQYKXMWPOFHHLOSHVQNTDNPHZIMLWYEHNLFISJJUXPYSSTUFIKRU");
    msg.report_time = 0.04120497507337095;
    msg.medium = 123U;
    msg.lat = 0.008630573042074818;
    msg.lon = 0.42338471068213857;
    msg.depth = 0.40693195232994994;
    msg.alt = 0.47519273876015933;
    msg.sog = 0.7441173168159095;
    msg.cog = 0.6165047415448508;
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 24877U;
    tmp_msg_0.lat = 0.46329513858706506;
    tmp_msg_0.lon = 0.9201855557172566;
    tmp_msg_0.speed = 0.28949985708760995;
    tmp_msg_0.speed_units = 252U;
    tmp_msg_0.custom.assign("GORNOYOVYXXJHGFMPZXWVUYILIBKEXONJRBTUTFIZZDRTXIXEHGYYSTBFSQKJWGCPDSPMTNSUJQKBIEMTQHBZXWFGKMJHQPOFHZCJWYLWLHCFYJIVZXPLMZBOVTSFWCTCKFMTNBANEKORBQNUHXGHNLIOFLAAASVAQENGDZAWCAILKAZLEPNORNESRBXVUWUPQSGVLRDHK");
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
    msg.setTimeStamp(0.9301224665516755);
    msg.setSource(37821U);
    msg.setSourceEntity(26U);
    msg.setDestination(31864U);
    msg.setDestinationEntity(192U);
    msg.name.assign("WFJCVWTHGVUHFRGTGYDXQXBYOYTOWJOMZJOLPHHFSUJHMKEPFNRAXMBWIQGYKZWMGNQBZUADZJVWMXMIOTSJDEHLCIQPKDGPLVBWVDZKEVPKBDCQYUCGMPEQEZRNPIKHYSJINBTACZBQQFPDSCMDLZYKEJK");
    msg.report_time = 0.4085105873904692;
    msg.medium = 232U;
    msg.lat = 0.6269946855882897;
    msg.lon = 0.12404193854516954;
    msg.depth = 0.13953271289085722;
    msg.alt = 0.32020531028516697;
    msg.sog = 0.9000403027592284;
    msg.cog = 0.5796006872250914;

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
    msg.setTimeStamp(0.5984225848933893);
    msg.setSource(10121U);
    msg.setSourceEntity(17U);
    msg.setDestination(7305U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MZGUTBUJAZXHZFQOLRGHXBGBPQE");
    msg.report_time = 0.5169446440402434;
    msg.medium = 116U;
    msg.lat = 0.21749385734018922;
    msg.lon = 0.8197328114482412;
    msg.depth = 0.6173079603625773;
    msg.alt = 0.951230004051189;
    msg.sog = 0.6907475994428507;
    msg.cog = 0.02107139110999867;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("UFKKODGXBGHBMYKJUSNMAIQFAKTUXQNQRHAMHFXLWHXTRUPHPZZUWRPHRJQNVXZMTBDFDUSNXRBGVWDGLMVJJHWQTACOXOYYVLGKESNPYTDCWKOWRXMN");
    tmp_msg_0.value = 30U;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5718120344366914);
    msg.setSource(18232U);
    msg.setSourceEntity(63U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.2941814781956814);
    msg.setSource(27384U);
    msg.setSourceEntity(87U);
    msg.setDestination(48429U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.5822525283800297);
    msg.setSource(51804U);
    msg.setSourceEntity(159U);
    msg.setDestination(5972U);
    msg.setDestinationEntity(179U);

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
    msg.setTimeStamp(0.41270587778891477);
    msg.setSource(57806U);
    msg.setSourceEntity(249U);
    msg.setDestination(23693U);
    msg.setDestinationEntity(107U);
    msg.plan_id.assign("IQLQVTHULBKPBMRWSEYXJICAFHXSGERUOITBAMANZQSGPCJCZARSISVOWTFLABOYMN");
    msg.description.assign("TTFALCPPQHEWQIJEWMCDMBDJRHNUDFDCSFFNJEXNHVSCGVKTHVIKKYXEYYBZZGFOPKVQUZSJHYYMGNULZUYLFTAYAKCVPQLIQBLLFTKIISAPMENJTVHRRPAYKNRIDERLECKDBIGRSVWACOMZKNOLWOVPHOGBXQMXGTYBJGBNUIOAWXJXECZNMAPCISVWBQBXYHLGGRHWFOVOIUOZRSTASP");
    msg.vnamespace.assign("QYHSPANJURDRPBLOAAUAKYLUJVKUZXNRJJPVPXJYETBQPYQITOVXYSLEQNBIMWWOGGKTCDW");
    msg.start_man_id.assign("OOYYDQPTXYQARZDQOABWLCMJLSECDLICJGMURSZNYKTHSDDSPMDKABDPUUXKZXHAVGXWJJBIUIUTQWGEQGTJIHLNLTKQWLVGYOVWBKQSOMBVLXDLPUTFMAGREYJZUCROAR");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("OBPETBWRSFCNKTEFKEXQUFDZIZURHTXNHJLYGJQQXGKASDFLRHCAJBBXTTXIZYPUXXJDZNNUPIVDVPLICFOBBZWLNMVRUSMOEUMGYKSYVRHGVFGQUOUJRCYTVAPFEDTYMHHMJSCSDDPNWSVZRAJLMWVZNCFIPVEFHMKPAKXQQJTCGROQOCNNMOMAQQIKEHLMGGDHJIEPOWEZSWJYRBBYSORIZUXOWTBZIBWPTVHEWCAKYNXDDKIGLSAQALYGUA");
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6313900822763665;
    tmp_tmp_msg_0_0.lon = 0.5040358489561656;
    tmp_tmp_msg_0_0.z = 0.029838485222606015;
    tmp_tmp_msg_0_0.z_units = 66U;
    tmp_tmp_msg_0_0.speed = 0.43551937790608186;
    tmp_tmp_msg_0_0.speed_units = 232U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.17365804554221742;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7704329843388401;
    tmp_tmp_msg_0_0.polygon.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("NLZRFECMJSOVZXIRFCQXWURMEJEBRYYJTTEJTRIYYXDNSZBHMJEGAMFLGEZLBGQQOXUXNRYPVTHUYWIQIOTIUHFSCIBHDSPOJVXYFMWDVGZLYSLVKYWLBXHUBJICRCIBXOMMGQMGKAQRDGQVWKFIZHNAZATQXPRPENOVKDVNGQDKFZSWCTPCLHUBPDQIANBXAGJWAUSYPZJSBKLGAF");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrexObservation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeline.assign("VKUSUNZSTSTVBEYCWNFCJQFZDVHPZRYDHLZGKCUWPVDXHWBTBCISLRZQYJMPAMYYTDCJUZFXZWKXRSWHPVMMUDJOYFSQXJKITLETONXEAOGVFNAYDBIAJFQWYFBGBBSOJGNKVOFCRMOMEOPUVMMCGPK");
    tmp_tmp_msg_0_1.predicate.assign("APFNVGLTAVLXQRELIKUPKBABSWXMQOZJAKOJRUAOEPCIBPOMCURXTUUXQCEZSACBRJCVDVRQWYMNLHGXIACYRUBZGVKTR");
    tmp_tmp_msg_0_1.attributes.assign("OQPPFYQCRLMXKUJRSWDNOMBFXFQRJXUZWQIOBNGLGLIEERLMYSXPMAQDTWPVRBCJRXTHJBVUXFWYPEUIADAIYEZEPORJBFAQUZGOSHPWBBYTLWYFBZIRVTLHBMFOCZ");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Tachograph tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timestamp_last_service = 0.16166188694007233;
    tmp_tmp_msg_0_2.time_next_service = 0.8820897159296587;
    tmp_tmp_msg_0_2.time_motor_next_service = 0.7256010164847508;
    tmp_tmp_msg_0_2.time_idle_ground = 0.46533399380610674;
    tmp_tmp_msg_0_2.time_idle_air = 0.44789448191971404;
    tmp_tmp_msg_0_2.time_idle_water = 0.7020508713375913;
    tmp_tmp_msg_0_2.time_idle_underwater = 0.8346997114502037;
    tmp_tmp_msg_0_2.time_idle_unknown = 0.05454204928928674;
    tmp_tmp_msg_0_2.time_motor_ground = 0.40115312742626563;
    tmp_tmp_msg_0_2.time_motor_air = 0.7077543492253244;
    tmp_tmp_msg_0_2.time_motor_water = 0.14599162353508666;
    tmp_tmp_msg_0_2.time_motor_underwater = 0.7738179398407032;
    tmp_tmp_msg_0_2.time_motor_unknown = 0.6248030922332009;
    tmp_tmp_msg_0_2.rpm_min = -13742;
    tmp_tmp_msg_0_2.rpm_max = 17275;
    tmp_tmp_msg_0_2.depth_max = 0.8636077047963755;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::ProfileSample tmp_msg_1;
    tmp_msg_1.depth = 36227U;
    tmp_msg_1.avg = 0.9248434453308118;
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
    msg.setTimeStamp(0.734073298873056);
    msg.setSource(30204U);
    msg.setSourceEntity(8U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("NNOASHGHOYDCGQAZQXSFWICGNBHZTMRLLQWZEOSWKLGKWEIKDDNRVKMJSZQECLBMEFHAIQEXLMTGRWPNHNEDIDOCFZBSZBMPUCKHOZQ");
    msg.description.assign("SDSRZMITJZLIZGYNZTMYUZMWBJANWJTOIBCTX");
    msg.vnamespace.assign("YYYQDMMLUQNTRPXVZWPTJWWJUZOJRPCAHYNHAQOIBBWMEWFBDFOZGXEUKMFJJQYVQGDUDBKCXFOPCLAKPTZHUTASCFMHOXLLGUGPWQSCZZRSLKOQUVRVCXHWOYDEEXKAJYCHKVSERPVHSRESANCJTTPNFLRKEUXIOISJEZSDCB");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NIOAZECACNWXEMOFSPXVGZFRLNKVCVHKMGZUAWTSAAMVOICLGUWVZIFEPRBLZDPQDFCXVBKZXPRKOETPDSLSPJYOEYWBEYTQGOGUBHNPYJEWJRKYWSLCDYGPMRQCQBHJYVIKQMNXRBNQFKJDQPZVJINTIXHMMHDTOWBWCUKHYGQVULSWUDOJYSRDJNXKOLTIENZTHMAIZWGIXSEMYNA");
    tmp_msg_0.value.assign("ZNOLDCDDHCFXUPFBZNHEIPNNZMLVSHGQAUCOVCYZKUFZCHVCVJUWRDFTPNARBNPJBYEY");
    tmp_msg_0.type = 155U;
    tmp_msg_0.access = 16U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PKXXUVBZIGGIZRMPZYTR");
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.20726355216652925;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.070144831681206);
    msg.setSource(9488U);
    msg.setSourceEntity(142U);
    msg.setDestination(58610U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("FJWWYBBBPOFEZOZUKZVWUFMTJCPVQCJZRJOUGRHTEGCKSMHRIZRSUMXQGAALTPBQGSGUYGPIZCIGXQAOWZITXFUVSXEEMIHBRQNWCDTDJHKMNPVMGUHMSDHOFRHVKEGZPBKVNWVLMBNOMYJFTPPDAZKBLVDNKPNKKXXHFJYCASALWJSEQNBICNBSIRXDQIEHTPENQATXECQFUUOWRVYDRFOLUXSWEVNIYADYDYTYOZXJTA");
    msg.description.assign("NWRVDZIIJUZWEZTAHCOZHMDMVZQJHBESBPVXDWYFELPFTHEMXOYYXGCOGQVTINOQBPTFMZSLNQFHUMDNKWRHQPXJNEARDGSUMOJCVLBZOQLFBCASUKBWAUDYIVOSCHFQPJZWEXKFYZMCQTXBRRGVMJLZWVJKAATWUNMMSQATOQSIDTKCNIYGCS");
    msg.vnamespace.assign("XLUDBOSBMNRRFHWTERETCIQGUJXQCAXIOSGMWWHJRBLJUDSQCHRKFQTIAEMKYAPPBCGNWCLNDHZWYLTAIIHVNRBDSERFBRVCDOTSHNCJXARMFXBGUSKVAVOQZYKBFKZIKIWDBOLKHUYZLTJSJCPCAEPGYHJPYJTKLXOSBVVMKVUMFLSFXENEIEOQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PSAXUDQHLSYFNASVEVUWDFQNYVPWRORSNOQPXSADOHLCCEBTYDEBNLOZCBGEGORJZVKCZUXWMVUDJEPEFVYHWTUEYKXAWELDFMQTJNGYQAIIQBWDKUCBIMGRBENQOLGVXCIFSLJZAOVKRICWYZJIHFVJMDKY");
    tmp_msg_0.value.assign("LBBSYOLYRRYHCTFLUMCHQKBVHGESWRDQQURAEPEUKFWDQJXZDDRFIVCNQPGYDOEXAJVTUQBAGWMFFOANXTDENKGOUUFKOOKNHTVGTSDXZIYEKLCSAAINVUBCNZP");
    tmp_msg_0.type = 60U;
    tmp_msg_0.access = 23U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HWCPBOLRLRVYZWQGQFTUKLBNXYSKISXTUUYYQFMEQYJLTMZWOGLWUKUBZYBEAPJMIDIODYITPGVREANNDWFSBBSQHDXKORAPCECYSHSXNNOKMZPBVIOZEFNJCCDJEDKSCVWJCEJFAVGVSQZXYAGUKZUNIIQGVULUEZDROPFAHFISETODRCJYXRCPQHHPCTZGWRXFMANBGRKMLAZBIHLGTWFLHAHVIMUPQTRLTXXJXEDNFKVMTOJM");

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
    msg.setTimeStamp(0.6852577829265021);
    msg.setSource(20499U);
    msg.setSourceEntity(235U);
    msg.setDestination(61967U);
    msg.setDestinationEntity(168U);
    msg.maneuver_id.assign("LQHHEFBLAGAJNSPWOIWCIHNASXJCRPOXYLAJVDGKYDODNACTUYWKMPKXOOUUUJDR");
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 51957U;
    tmp_msg_0.lat = 0.4171786964099363;
    tmp_msg_0.lon = 0.717758077622335;
    tmp_msg_0.z = 0.6039067053241287;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.speed = 0.8819819016715118;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.bearing = 0.28259680647888885;
    tmp_msg_0.width = 0.36405278451941225;
    tmp_msg_0.direction = 192U;
    tmp_msg_0.custom.assign("RLHAWZJKRCDQUTAXWIAPRGVUCNXRFFJHGPCLQVEYKJKEBKEJOBYUGVJESPDSUCBNVTUTQSKNSMFDSMYFFDPTTTHYPCXZFTUHIHKMYNHPSPXSOWNZXVAAAOMOYQKULVFWENVBCIBNRLLVGEWBQGXONXDDZIZQDXUHIKBWBMNCRRKMPVMESHZLZQLROGHGIOYJWPFLIDWAWIYJTMBTTYEVESIFQEAIJFBHLG");
    msg.data.set(tmp_msg_0);
    IMC::TrexPlan tmp_msg_1;
    tmp_msg_1.reactor.assign("PFWLJCYCGUYUJATKPRECIZALHOFGXXGLZUTTWENZJNKLXNRQUBQOLZTQOAPGHNBQXEAFYUYQUSYSHRSQMYXZRHEANHD");
    IMC::TrexToken tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeline.assign("EUOOLHTENJNDZIJYPDIFDMOFADKNXKVISIDWMLEQMGJWCARGPQKOSZFKFEPHBXEXIRXEWHTRRSOBXMWXPRFMZCKMPRHSBBAKQDUXNGBMMULTKUGSCVZLEOXSCUDBTWEFGZQHNFSQAMJITFLYCXMCVZPLTPRZNIUJOTYYABQZTQOGDHDKRFIXNNVDVVCHWZLSUYHHESNQBANCLYSQCYOJTWIGWWKCGQVHYKVJPYPIJVRULZ");
    tmp_tmp_msg_1_0.predicate.assign("MIZPCHRQDBYDOXYTCAWSLLRQMPRCKDXPIFNBXELNRVZNWDGFYENJFRDBTMSWBHYTGOZTFQGLPJRSZJXGPDOHUOQSGYILQVKA");
    IMC::TrexAttribute tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.name.assign("NHRPAPHZWNAIWPQVVYZUKZHGEUOJDMGUVDNXEVDRBKWIAJBILNGBNTFVKMOUPFECEYKNCMVZJFESOQRCTPUDRMMTFZBELTXQYRALDMMJSQTXGWYWVHYHBHPOZOWGCOLAISEHWBXOEKRIJPZNBPTKPCAMGXYSYOAJVZGSWXRLVXXJNILGOYZCFSBQ");
    tmp_tmp_tmp_msg_1_0_0.attr_type = 237U;
    tmp_tmp_tmp_msg_1_0_0.min.assign("PKPYYMMWWDRVJYCVDBCHLBSXQKJRRSJOTTZNWFRRHQPXTNEPQHVMDNUBEZGLNIQGKHILGUISKZUISZRJDGOORIVAWVGTJWCASEWQCLBQSACQTKGYOENKNJATMLYHHDBVCXVYTFXDUNMMDVRGJDRUOOGPQXMPSUNPABZELWTIKPIOZMWEFEIXLCUUNWDDKCOHGYBRSKEQLFEAHJWONYTAIAXXHIEFJJOVUYCFMPPVFZXBBKTLXZFMLYHFGAA");
    tmp_tmp_tmp_msg_1_0_0.max.assign("CKZDLYDUJJVEMEABUUZREGDWWODWHHPXXXVXLYPTRGNSRQSEGRIW");
    tmp_tmp_msg_1_0.attributes.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_msg_1.tokens.push_back(tmp_tmp_msg_1_0);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.4008393582461376);
    msg.setSource(16240U);
    msg.setSourceEntity(126U);
    msg.setDestination(11148U);
    msg.setDestinationEntity(135U);
    msg.maneuver_id.assign("BHRDLLFWVJSDZJBSQUYKMXZVUPFNZIFWSRJMQWWORKYUTGHQSYUKTFPLIEZUYHLYSWRHMBHHLCJKUOFUTKJEEDHPTNESIGPYXIICDGUUFZHGEYBEFOWDZNJNXXKMRQKVOBIAYCQMOHIAVJCEMICOOWKXIABMZNQGPCGDVXZLFSWBDQPKQNNCTMGZHFPCEAXJVLNJMSPDBXRCXGARPPARYYVTNARBAN");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 48725U;
    tmp_msg_0.lat = 0.4883321372062237;
    tmp_msg_0.lon = 0.11846967202153247;
    tmp_msg_0.z = 0.21509144490452814;
    tmp_msg_0.z_units = 136U;
    tmp_msg_0.speed = 0.35262387956518704;
    tmp_msg_0.speed_units = 235U;
    tmp_msg_0.syringe0 = 210U;
    tmp_msg_0.syringe1 = 85U;
    tmp_msg_0.syringe2 = 229U;
    tmp_msg_0.custom.assign("EAWDMQOYXBTGDQXKMSUIGJWAZNXYRRMXPVJJBKVUSGPSUKNQVMBTROJGSSJAGEXYVXEZDWBIWAQEGYXQFPFZJKKYMWLIHZYZDDRECLEGYSFLIVOUDHRIWVFDLJGRAEPZVPKGCBZHNGUKRWSLIVUPABOYFNHAHENFTRMQCZDBETTOMMSLFBOFNHZRIJDCQIFBCLHNJJPOSNVMXBXHYOYELWCIZDTCXITKAUPWACQKUMPFTATQHVOOSPCCUUWT");
    msg.data.set(tmp_msg_0);
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_1;
    tmp_msg_1.value = 0.1284445935755405;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9855304203490552);
    msg.setSource(19702U);
    msg.setSourceEntity(43U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(216U);
    msg.maneuver_id.assign("BLDPZHXSPDMLGXLFKUDMTYRDPSVAMZRFDVJYKVMAGYWAENWIFCKLSOAQXZTMNBHFOQSBGVABHYZQEZUIGAWBIJTWDEPRUOPMCAJNUGIWWRSFVVWZSBHZKTVPVCBPUXCTTCDHYZOVRNPWEKNGUUYHXEITMKQEQRQNZLFDLXIDPESOQCOBHLKGOELKYWZKEOFXTHGQKGFRSEJCXIJJCR");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.664934780462042;
    tmp_msg_0.lon = 0.9671339227771059;
    tmp_msg_0.z = 0.3129873484062202;
    tmp_msg_0.z_units = 58U;
    tmp_msg_0.speed = 0.21791779157659097;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.abort_z = 0.7946505376918407;
    tmp_msg_0.bearing = 0.7134261170438069;
    tmp_msg_0.glide_slope = 40U;
    tmp_msg_0.glide_slope_alt = 0.6043914099666836;
    tmp_msg_0.custom.assign("APEGFBHKSUISCENIGLQWUADUDIZVHTHYKXPLRGOVZTFZSQMTKCXIMWRBNTNTGSDCRKAUJHQKGGQCPVANZONLWMUJTBYOLUONWVXLCMKHLMGURTAPMJBXBIBJYBANPOQYBHTYKPLRNPSWRWDGUSDFHZWUAEGLZBSQCEHCSPFEJOHLAKFJXQIFYDWMAVVEROEDWKBFVZIUEDOJSWGTIYVXYEFADER");
    msg.data.set(tmp_msg_0);
    IMC::ImageTracking tmp_msg_1;
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
    msg.setTimeStamp(0.6822148929093976);
    msg.setSource(13206U);
    msg.setSourceEntity(221U);
    msg.setDestination(41808U);
    msg.setDestinationEntity(226U);
    msg.source_man.assign("JQLSZXKRRIGLYSCDDLFUZJJLRZQRGSYAVRITKHOYUAFCPTSEKQXRDOFHURBEACJQBWUMBCXYNNTKODGPIYJORMPHVMYNORAFNXEPPJXAFVBSQQGPUEPGIFHCUQKWTGSBGIDCWFTXUMZSAMFVWEKGKNOKEUTNSBEQPVZWBIHFVHKVNEWZMTTLCMKOJNAQEMNZZW");
    msg.dest_man.assign("RXPCSEIADWGJBTNYHWELQDILFTGTFJISMDZOUQQTEXYLVJLZXKLTUBGCMUPEKZNHKEZIHLPOYBQVDSTAYFRKCPJXMCPGLVXBPYNWMUMBWHFZNPOLWXAWVTTITYZOZNESDGBHDVSAMHOFOYQRWPRJOKNUACNFQGHOQGJVOQWKIAEUDX");
    msg.conditions.assign("FFKWAMSTKEWLXEKFSHNIVEQPIKEPUNSHVIJIDRIYQYGQDJIQYUIXDMNHBMWBBTBDCDYGYJBEWRUOGVJUVCBSYRGYCEJVDFHKEVXOWGAQQOXSZMZBQEJTVOSZNPU");
    IMC::ImageTracking tmp_msg_0;
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
    msg.setTimeStamp(0.6318126924279612);
    msg.setSource(48993U);
    msg.setSourceEntity(142U);
    msg.setDestination(57698U);
    msg.setDestinationEntity(201U);
    msg.source_man.assign("TVYMMWUDAUZKIVETUYFJUQZQCHCNEOKDQERSEEYDYLGBBRBHYVJFZNRFHZDZXCEDLNELFMSXWNENHAPKLZXKEBVRUKLIHRSCTSGPBOWMMFAFBAUXQSGBWQZXRIRZQUVKXGIGQUSTBDCCOAXJSPMVCCTJORP");
    msg.dest_man.assign("XTDDTLWVQXOQAUMBGCUNZCSLGCVHYTJNJFMIBEVCRMPUYPHOZZJQPEAUWFRKFTAFNTJDZBPEOHLBRWJWXBHDDAPEPPNWYNQRYUVPCQSKKWGNXBLYBQKV");
    msg.conditions.assign("ROFGJRAIBXDTQPDCHIZUBRXVZJMQGYQCLSOOEAARUQXFSBKEHRKSCQQCQGXPXLILEUBIIHNNTBZQWJJLMWOFRTKTLLTZOHUCIPOIGWTKUKUWFMNEXFGMMISVJIWDDVCENTHMGBHMYBAQDVATVJWEYWYJOZUHZYUXFUTWPYZUJDXSFSIVPJDHVJAGOYOAMESXSBNLRYCRGEKNFVDMZLDQVKYNBKZXNAPKAHGGSOLZCYPWADCRFNVMNESERCP");

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
    msg.setTimeStamp(0.20925577195859058);
    msg.setSource(19082U);
    msg.setSourceEntity(179U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(115U);
    msg.source_man.assign("WLTHSTEDNDKSOGTYXTJYXJUFPRHRLFBTOIZNTCQMWHEXGWXOPQWYBYJALMNFAXNKZALWDVHIRVWBGLHZMJJOVMBSAADNXJGWFIUZCIIURHAUHDKGYVNCGLWKVPKDUOCGMPOWITEUPPQI");
    msg.dest_man.assign("BVTCEEOTJYJVQQRSRBLFCCYBXLKUBXDZGHUAKXUSPGRKVOIQKLQGWLGUDOJXNJIUWTGYZYWZHNTHCCSINOYIEPWYEWELXQIHPADJTMPONJQVKWYYBZZELT");
    msg.conditions.assign("FOERAOGKZMUTTNZXXNGBKRHOYICDZLSQDGMCDAYAV");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 247U;
    tmp_msg_0.actions.assign("ISHHMDPOJAANJOWZQMSPOYGTIXJRKCDNWTLELDRLW");
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
    msg.setTimeStamp(0.5624997938736787);
    msg.setSource(8318U);
    msg.setSourceEntity(95U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(173U);
    msg.command = 109U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NRJBFHVWITDKCKEQPXOZUGVTRCTCPEFOPERMAUSZVJXGBNXDBLMEDVKSTRHUYORUKPLEIJXHKZTSJ");
    tmp_msg_0.description.assign("OSHYWGLLMESFCNAEB");
    tmp_msg_0.vnamespace.assign("IYTWWDRUVNVXYXZAOGQJCMSYCJAPEVAJVVBOESVGOIMDZACRXWPGESGIQPBILQTMCDVIHCEGJLCHFENUFRSAVUJAHBKOFPRNRTNTWNXYTVVJYQINZCHKKQXMDIUKXWWRDFZFKMIJTPWAHBGZDBYTGFHBBKDNZEOETPGQDMOJLHFPMPMLKESUXSTOQLSRYJLDUUNYLCQZFFUNLZPGWYRMBCOYS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZAFCVDEIMKEWSRRSWYTPGXAFYSJEU");
    tmp_tmp_msg_0_0.value.assign("YILEXDBTXDAWCLCJQFYHSDVDMTJBCVJBNLBCNML");
    tmp_tmp_msg_0_0.type = 57U;
    tmp_tmp_msg_0_0.access = 190U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("VWCRZJFRCLLSLQNYAVXOQNXLOGXAYKIBJAERENCZYKOEHNHPBRYMCZOIGMOZMCJBI");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BNEZQQGPYHQLGSCQSLSVXFKNAXAQXCKQCDFUGRTXXQAANOMILEUFMBXPLUHEPHCWYWKPRIRLZXMVOOJPLGOJZSDNHW");
    tmp_tmp_msg_0_1.dest_man.assign("EHJODDMYXAULNPGBTSPRESHVFEWQWYSGGMPOSAIFDCQGRQLOTBCAUVZLXJMLAFSYNATWUTKUCKXQVCWGAFMNJAPHTYNSDWYBOFABNABCRPLNVHRDQVMIFOMNRZQRCIZZMRYFUNYVCSIGYXYBPZGZIBSOETIKRYWVUKVXPCTUKFSMXLOHJKDERJQAHKFE");
    tmp_tmp_msg_0_1.conditions.assign("AVVIBFBYUWYYHGTSIKSUAAAOQMVKRUCTVWEWHSDIJYOLXKVNLRLOYWPJZUBRCFGWIICWWNUNXPITTNRZJTRJPGSMCXUCGKLLVSKCBJGTCDXEIEPDIHMCGVOUIYEKTLRJUFAQBPLUZNFHSXNKOGQBPXGFLTD");
    IMC::IndicatedSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.6792751734649518;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CpuUsage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 69U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8663362712229143);
    msg.setSource(36876U);
    msg.setSourceEntity(10U);
    msg.setDestination(59534U);
    msg.setDestinationEntity(247U);
    msg.command = 74U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VYITPRSAYCSAXQBXGHPDUWAENYOUTPZTHJ");
    tmp_msg_0.description.assign("UWUIGXQOAYNZMIXPDROHSIOKFSGPUYXAVNKWQHYQEMWEPVTCYIOPNHSVDKXPMYZKTWPFZPEJOXTIPELHTYYEAULRGDHUYVMAFCVBGHWEOAVCHHEBPVSJKRNGCQIBIRLHCQZLCTTQDJXWBSUOQQMIULCEBDCSGJFMWBRTOZPRJRQFZFOUINXKDTLDDGWASHEFJVONLMZURZCAZSTBJNKLNSRFFMZMGAJLDJDJYWAXMKFGBNEAWTC");
    tmp_msg_0.vnamespace.assign("BQVQJFZDNORJDJSQRTWKQTSTPHHMZWLYRQVAGKWKAMLIUBSERYMILPQGKGZLXPHGUIBNUERDPUODYBMUWOTNJXQGTEJUNJM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TLRNZKOSSUIFELWWPHQVSFJLZCGBJPHOYGHMVIIXQDP");
    tmp_tmp_msg_0_0.value.assign("TEOWYHYXOEEARQBKHALKSZSBHFIAUDOZGOXTJJOCZLLWOGTWWNTXYXPELEJZBNTTHUNVXINHUVYRWDGSPQMUBPVKCSYQUMBLPHHDBVDHNJDVGPAMTDHNIIFLNFQDVDCALLJTNCRIKZFCEORLUKBXSTPBQRKJFGYQSGKYQMFLNQVTOBAFZWIPEKCUAMJHAGMMGMIADJUFGZUQOWYSVIYRCVXUPDEWFPKCZXMSPZKQFIECSJCXS");
    tmp_tmp_msg_0_0.type = 51U;
    tmp_tmp_msg_0_0.access = 119U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("JEGUQHSKLBDPPHZTCTLKPMSGNZNJWHKYLVLMABEHOWTYWCHCYYTSVTNWPVXAJOTUMGFWRXCBYRNBAWAUJKEDZVGCHLRMIBIWEBVUUWLHBWKOCMXJQPHWFGNZIVEQGQQFUQXLIPCUENRBRDNDKCIBEVXUSIMRXKIASAFXCIROFMMRYKDQRPGQTFZEJYESQTNJZAZGLFJZINNXFAOSSRECKUYMOODFOVLHDOY");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QBUZCHYZVJZSGRXVOHFBRQXIPXUAOUWLJATCXIWWTCCEKFNGKPCTVQGQPLIBQKWJLUBHOZFWFYSMECYOVEFBFNUPMTOSOHKIBHAGMRARXCFQEVNKDPFYJHJRLTVUJUOEXOWZATMECDWIKYNRBNVQGRHQYSYDAVRJKJJPLIKGTDXFIHUADHGSAZYWQRFWNALSYZANNSPORZOBMDHGBSTIVKDIGTDJSPMXLLKMCELUZXEESM");
    IMC::Takeoff tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.8717069720024577;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6861173437921895;
    tmp_tmp_tmp_msg_0_1_0.z = 0.29398124596387265;
    tmp_tmp_tmp_msg_0_1_0.z_units = 241U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6226547570194576;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 0U;
    tmp_tmp_tmp_msg_0_1_0.takeoff_pitch = 0.8132593250643537;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VNJAFXUHNHLLWXQPUNFYEPUKOSMQMVHQSLKRKYWOMAOSTYPMHXLUIXWQEBSJCNCSLESQKNCLOAUIJYPDDFJBBGIDMAIZAJCEMDHGGKWRPAXECRKAYOGRTCUNTGGJQRZQRAJXIHKHXFFBEZRNYZZJFZJQKMZBLDETTGFDIPVLEBVNRIOOCBIDUYDFCHKPRCBQ");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TCPStatus tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.req_id = 29927U;
    tmp_tmp_tmp_msg_0_1_1.status = 228U;
    tmp_tmp_tmp_msg_0_1_1.info.assign("VROHDSQTOMLPSWWAVUWYSHUDFWMGUFJXAAXZWJREBAIIZAFNYLMBIHKTXYHJSDVTRRUFAGZRIFEURSUEDDZYCEVHECQGLZORIPWSXBIYIKLEOSBXQNFJYMWXNHRVCYKMVQNNC");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::StopManeuver tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::SmsStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.req_id = 46175U;
    tmp_tmp_msg_0_2.status = 154U;
    tmp_tmp_msg_0_2.info.assign("NMEHZXQRIPVWSWTQOMVOSCBJXCEVKWEHSDGCOYLGMESAIASZTXNMLUUFCSTFNYFGUMBOQXMUFIGRNIOPZLDYDNHPUUYCOSNZWJULIZRKVYKCUCJHRPHRMEA");
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
    msg.setTimeStamp(0.819694347968136);
    msg.setSource(18374U);
    msg.setSourceEntity(162U);
    msg.setDestination(5027U);
    msg.setDestinationEntity(191U);
    msg.command = 169U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ABYTQZHDEKBLMGEUNUBPSJZJKDJPSYKGCMPRCFVAOSPNFDXROBEMCUSTAWCRRERPSGZASGMRCYQDTZFDUNQPGQSTVWHJIHKFWVOMIFPDGLOVYJMEPBTFJJWIGJBZHXYLWUPVHNLADCKKETAERNLVJAOZ");
    tmp_msg_0.description.assign("VMZWCIVCJHNNRKFOCMWIDQFEZRWOJISXGYUUJVFTIPXRLCBAQFXPOALUOWMCKENOBJGZYZH");
    tmp_msg_0.vnamespace.assign("BNBLBNLRBHURJBYDXFQAMMWZKEIRBLZRVGILPCJHSXYRKTPHYUTKQFTXEYGOJCLEUSZMGAVICOTOKCXWZJQNJDGCTEWXJHWRMNBOMAPSUYHDVOIKGQIMOPTZQITPALWLVIDSXAJYNZIAYHCGNQODAOFBMRFNECOWSLZEPIDDNUXXKCWHSAPXG");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TQLPETIAWSCRETATNKIVSMIUBWULUYQRB");
    tmp_tmp_msg_0_0.value.assign("FCPGKYTMOPBZULZMTQCPTQSGXNDSTLXRMRUPZJAKVEJFEOQCXYBUUAIIJLWDBQYXIAZWWCARVMJHTPDJNCDRSIJJGUVEYXDTMZHXWHOHUQCMYQUVBDSMQNZLWDKBNOGIAAORRFEONZFVWFRTHCXIOFXGLEMZAYSFVSAFSYLGWAPDVCOPWXKMCBDSPDHREJRTNICQBYLNTVGSYUGHNQVBHIZAYBEPVUJNFKRUOLBH");
    tmp_tmp_msg_0_0.type = 243U;
    tmp_tmp_msg_0_0.access = 145U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RQBGKOGTOIBHSGBQOBNZMXGLTHANVJPDRTCXEYQWRAENDDJCQOELABPRVAAZLVOPOPWIVMXKKMUDMSSWZPUHVCOYZUNKAFSXXYPRQJYAHZDAWXQLFUEHRYTPCJWIJFQFUFCJADJEUVGTNSGZLMTB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JMNVKIMTVIEZQGIFDJPEGAOMCANZAUCKUMYXQVAYEFSHXHCAUBIKITKTKUOLDSBJRPN");
    tmp_tmp_msg_0_1.dest_man.assign("CFWAUBMZJMTPIOHOIUFBTMPCRYDXMALTKYAUWIDGZNAOBRGKVVNOMNYHLTQKEXQVFOWPPPDMRJLSIJYPWXFQJGQ");
    tmp_tmp_msg_0_1.conditions.assign("SCMJBEMULQYTEVOAZZGZJWCKWIMLLVRJNKNNYOQYAVBXOWSVHQARTVUMPLRDBTGWFYHDDCDUSMBCWJTTXVSQVDJAGTMFUACKDAFXEJQUZNEXROHGOAXYPWHVPQLHIEZ");
    IMC::UsblConfig tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 60U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CreateSession tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 2133095584U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.22573346041727083);
    msg.setSource(56370U);
    msg.setSourceEntity(62U);
    msg.setDestination(21989U);
    msg.setDestinationEntity(47U);
    msg.state = 126U;
    msg.plan_id.assign("KUGDNZUPASHZPVFJNMCMGEKOGQATYYCJJEVXQOZEIFYXEZANDXAKPKYWHQWVIBYRAMPCORUUEAIMASCATCHQSVKDLVTIFDRRRZTCUVNOLLWOGKYVPTWODINCUHIXHKBBXMZSTCXXCMEFOOLWYEFGWGTQOBNPLXHBSDSHLUUVJTFYQHMLHTPOYRQWAPNVDZIYEJQQFGMJBGSRZRTNJBKASLUBZJCWJPXIS");
    msg.comm_level = 195U;

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
    msg.setTimeStamp(0.8439077722036151);
    msg.setSource(1489U);
    msg.setSourceEntity(225U);
    msg.setDestination(48218U);
    msg.setDestinationEntity(237U);
    msg.state = 21U;
    msg.plan_id.assign("MYLEOCWEZVHAGWEIACPWJCBDWNNUMDAOEYRRTEDVBEZXPPTMTDNZOPAJRINWILGJNQUIKSRBXBCQCFKLSVKCQDFRRPRUJKJBVSMCWMICHNUXRVGVTFFEBWKMTMPOSTGSQWELIUGSTWOKUJBODHDMQNLAYSGCHRYNXHHLFQZVEZFNOFOZUBIVQXFGHUSXOVYPBMLGQQJQKOUGMZIYTZLIYPXTXHRDEUKHAKJSJAZYXLPBNJWYYHI");
    msg.comm_level = 10U;

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
    msg.setTimeStamp(0.14343660659348934);
    msg.setSource(24262U);
    msg.setSourceEntity(116U);
    msg.setDestination(46995U);
    msg.setDestinationEntity(149U);
    msg.state = 171U;
    msg.plan_id.assign("XHMNDXPSACOBQHXJGUHTYPZCTVUXNIROTSZDBSVLMXCOUECFDFAWEVUBHJJJSCNGWQOJTSXLAZTDYTAILOIUIKYJPKVDPZYAMIEZHQJHNEOYBCXRMGLUIVPJGQMERRFDNLABEQWQHEZWRUKBNMKKGZVTNSUWRPBWOZNXVJOFLRFNBIUMQEUKSATYD");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.6412002338139077);
    msg.setSource(33212U);
    msg.setSourceEntity(89U);
    msg.setDestination(11724U);
    msg.setDestinationEntity(153U);
    msg.type = 138U;
    msg.op = 38U;
    msg.request_id = 6480U;
    msg.plan_id.assign("IEAUUOPATKWXZFMLPOBMJBWVIZFAVNDEGSPITEQAOJCCSIRHYNUCNTFEGLIXODIOTDRCEVCTHPQURKPHATWFOJNCLCDUMAAZZHGTJXPYVYAWIFEQLNTBBKQXWFMMBPNZWYRUXCMGYTOZWDXHFZNRBSJAIQCUBGRRRNYQLVGLVPJSUYAFGMFYOKDYEKY");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4706972365223857;
    tmp_msg_0.lon = 0.9034140829987437;
    tmp_msg_0.height = 0.4780218750508657;
    tmp_msg_0.x = 0.014854168745988106;
    tmp_msg_0.y = 0.6064080172058306;
    tmp_msg_0.z = 0.8594637185596572;
    tmp_msg_0.phi = 0.8463970462133094;
    tmp_msg_0.theta = 0.010783154896290892;
    tmp_msg_0.psi = 0.530911478165682;
    tmp_msg_0.u = 0.1496960419268688;
    tmp_msg_0.v = 0.49196875279568353;
    tmp_msg_0.w = 0.5961049226436163;
    tmp_msg_0.vx = 0.16630897031733427;
    tmp_msg_0.vy = 0.8650152759249137;
    tmp_msg_0.vz = 0.3177167636464294;
    tmp_msg_0.p = 0.13650637265630783;
    tmp_msg_0.q = 0.7093505404327025;
    tmp_msg_0.r = 0.10317840699702152;
    tmp_msg_0.depth = 0.5623018252928086;
    tmp_msg_0.alt = 0.9730261922997822;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DRBEFSPIOHBZLWZRATPHLGBVEYFDDGMLCCDAJUXBCZCENVOLTXLRGYFSWQOTRYRCDLFAJAKTBVINHCDJZHDVCSWDMKEERPHMTPNRWELVVMAFSGUOSMNZFFJQAGQLHATBIJINMQHUSKGAYZPNNKYUXWVNIGGOZNXYJAWIBPECKBLIHWVGBXSZYKATQPGPSIQIOJRHQOCEEMTUONPXXY");

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
    msg.setTimeStamp(0.24406727607841072);
    msg.setSource(46721U);
    msg.setSourceEntity(197U);
    msg.setDestination(49903U);
    msg.setDestinationEntity(109U);
    msg.type = 14U;
    msg.op = 160U;
    msg.request_id = 48267U;
    msg.plan_id.assign("ZJNPYPMSSHBKQJKXOQBCWMIURZUVGMZGRHPOVRIPURSKJENIYIEUIJQDXEWTWIFNVASJBLGNZPDJDYOLBWJFYAQLYVNLUOWACRDHJBKQMJWLUQOVFG");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 29803U;
    tmp_msg_0.lat = 0.9148240194804442;
    tmp_msg_0.lon = 0.774431574170004;
    tmp_msg_0.z = 0.697804514380664;
    tmp_msg_0.z_units = 214U;
    tmp_msg_0.pitch = 0.14282716858825473;
    tmp_msg_0.amplitude = 0.6416646122580717;
    tmp_msg_0.duration = 24711U;
    tmp_msg_0.speed = 0.8984317315195135;
    tmp_msg_0.speed_units = 249U;
    tmp_msg_0.radius = 0.620331427910819;
    tmp_msg_0.direction = 29U;
    tmp_msg_0.custom.assign("SNYWMDQKPCOMUIFXANRWQBVELOGTURYWXIWNPIASAZQMLAGCDEFHTBBPLNUVUBLOYWUKSJYACPZIWYMZYSTUVRKIKHESQQQQZAB");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FATXKDIWYWDBVNVPMLGAQSNUCWAAEYRJUTLOHSEMDDPOKZVYEKHBQSLAXYJKMJZMHPTQDQREXXXVSRZBWHGOCPRBALYVYHPUHXWIZQTVJSOITTBCKQLZICQUUBKXLGQAPXUVMMNFCCSGPSNNZFSIYDFWAIZFEGORAJWWPKSRPXKUKUNHJFDAGN");

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
    msg.setTimeStamp(0.3282247405064198);
    msg.setSource(24150U);
    msg.setSourceEntity(32U);
    msg.setDestination(19954U);
    msg.setDestinationEntity(242U);
    msg.type = 177U;
    msg.op = 120U;
    msg.request_id = 21485U;
    msg.plan_id.assign("LLMTYZRJZFSNBTXTPQSNAEMEVIQQEWZXOSNYEBCZODTNGIUKRLPRWMCTJYTQLGCEPFMGFTPNPXUNEHJETGNEAGWJULLUQVQHQVKEDBMOFLZHHAIXUDDYMRGDWIZBOIVDYGJXSKKMWBHAJRWZIBOSKSOYICFXJJJVNAFLTPSVECATCPXKHVYWPMWVHYUBOFLASKZAGMXFIDRCQU");
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 164U;
    tmp_msg_0.ncells = 160U;
    tmp_msg_0.coord_sys = 60U;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.3966551889249549;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.30645391946081024;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.629595078096817;
    tmp_tmp_tmp_msg_0_0_0.cor = 36U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.profile.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RJKQVOMECBIKJRLRNJFTVXHOSSXQCAYTECYFMUTJLSMLWKEDTKUJXSEQOBFQOGKGYQBRZWILRMDAMCEAHDNVDBY");

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
    msg.setTimeStamp(0.1475467874560784);
    msg.setSource(16419U);
    msg.setSourceEntity(78U);
    msg.setDestination(3563U);
    msg.setDestinationEntity(245U);
    msg.plan_count = 28200U;
    msg.plan_size = 3633858230U;
    msg.change_time = 0.1784378512825382;
    msg.change_sid = 58764U;
    msg.change_sname.assign("JQHVJNFDCGPPNEGUHCLCDKIQDHBCZGEKYIUKRLRWTROPHSVYSPMZYBOIPPUSKEJDXPJTRCCTMVAQLUVXTJZLRWFLNWLRNBVALXZBDCLLXZYNJAMSTQKSMBBUHOAFGBUVEJXERNUSHPATQTVOTOIMBFOVMRAQRXYOGWOCIBJMHTDZEUDJVCHIIWYPGKWSXZNAXSWADEEQCOEQKLXTX");
    const signed char tmp_msg_0[] = {78, 27, -107, 27, 48, -84, 110, 5, 47, -125, 45, -38, -74, -124, -95, 122, -45, 82, 122, 107, -9, -84, 95, 98, 116, 43, 94, 108, -82, 6, 108, 76, 121, 1, -37, -43, 46, 21, -50, 39, 13, 111, -122, -118, 104, 44, 90, -64, -103, -58, 81, 63, 25, 47, 26, 8, -23, 16, 46, -59, -30, -78, -10, 95, -94, 59, 14, 14, -89, -122, 119, -47, 6, 21, 41, 38, -39, -101, 98, -35, 44, 120, -74, -128, 77, -36, -90, 51, -7, 106, -48, 41, 62, 101, 29, -83, -10, -72, -90, 81, -115, -73, -3, 63, -94, 113, -64, 16, -101, 47, 70};
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
    msg.setTimeStamp(0.25841699537666996);
    msg.setSource(6754U);
    msg.setSourceEntity(142U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(169U);
    msg.plan_count = 46361U;
    msg.plan_size = 811844377U;
    msg.change_time = 0.8101775614015934;
    msg.change_sid = 6814U;
    msg.change_sname.assign("SDSFPVYPHRTTGFYGZUERHHUCHDUBD");
    const signed char tmp_msg_0[] = {-43, -55, 17, 86, 92, -107, -106, 72, -25, -83, 63, -4, 118, -56, 114, 61, -22, -104, 109, -46, -19, 42, -1, 89, -45, 7, -68, -40, 37, 5, -1, -25, -2, -124, 77, 91, -91, -87, 38, 3, -115, -63, 21, 73, -76, 43, 103, 54, -49, -10, -94, 56, -110, -25, 92, -19, -115, -9, 74, 74, 124, 44, 59, 81, 25, -74, -86, -102, -11, 7, 31, 28, 103, -78, -54, 115, -22, 41, -13, 126, 90, 43, -86, 77, 37, -77, 94, 10, 42, -3, -116, 100, -7, 54, 68, -58, -20, -51, 76, -59, -89, -128, -9, 79, 83, -48, -7, -128, -72, 13, 32, 96, -103, 121, 72, 116, -52, 89, 109, 102, -103, 50, 122, -120, -103, -16, -16, 72, -60, -63, -44, -72, -43, -57, 37, -111, 24, 45, 26, 58, 116, 76, 53, 28, 3, -119, -69, 44, 93, 95, -50, 21, -115, 125, -10, 2, 45, 9, 24, 114, 79, -90, -122, 24, 101, -16, -17, 105, 65, 16, 78, 9, 62, -118, -78, -81, -22, 32, 97, 59, -41, -46, -109, 67, -14, -115, -34, 100, -95, 87, -36, 61, 22, 2, 107, -73, 57, 70, 94, 10, -81, 112, -69, -2, -97, 97, 42, 99, -103, 18, 108};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ODNPPYKTUBOQCLPZHDFSUNUABELDBVEZPRPVDVIMWOTWDHZUHVKFHECNOWVJZZYNZUMRACTIYQQRFIQZMWIATVACJRIGKWWNDAOWVLGEBJIAUCPFXGURSJFLNCJUFFGTPDPWRJGHXVNGSKIXLPAXIQTHEOCSXTSYTAOIFNYNXEMJNKKMIQYGBRMRHSWUKQZTAHVGMYVJDYPMWAGKMBOLZQYBBGSXLBZOJLLUSEBLYEMDSHDXFKEQOTEFXS");
    tmp_msg_1.plan_size = 23617U;
    tmp_msg_1.change_time = 0.8922584996057552;
    tmp_msg_1.change_sid = 15789U;
    tmp_msg_1.change_sname.assign("OXQRTAYXVTJXFRMZKSWHZJNQJAAGWUHRTEQELSFI");
    const signed char tmp_tmp_msg_1_0[] = {56, 55, -47, -92, -81, 84, 69, -92, -9, 11, -4, -51, -14, 53, -107, -91, 76, 123, 83, -32, 14, 63, -3, -71, 64, 126, -13, -127, -81, 49, 115, 69, 31, 29, 36, 69, -60, -113, 2, -124, 118, 51, -75, 17, -75, -103, 88, -90, -49, -66, -2, 53, -63, 84, -126, 80, 2, 54, 6, 56, 109, 58, -100, -52, 9, -120, -32, 74, -95, -55, 78, 47, 92, 13, 5, -33, 40, -127, -61, 119, -88, -110, 19, 38, -5, -65, -99, 23, -94, 16, 85, 110, 4, -41, -99, 43, 119, -8, -1, -91, -30, -107, -122, -105, 16, -57, 21, 43, 105};
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
    msg.setTimeStamp(0.5721759558809948);
    msg.setSource(56267U);
    msg.setSourceEntity(245U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(40U);
    msg.plan_count = 37160U;
    msg.plan_size = 2295231784U;
    msg.change_time = 0.07117133976029177;
    msg.change_sid = 23260U;
    msg.change_sname.assign("FVKNCKRREYUMACLDODPKDMHPEVNAQXIFUOSVHFOLATVTGVOBOSTWQWLWETZUBQZYBXXSKHRJYHUSIPEWFYCGOXNKJQWREMVTPAMDKJTUWHFASSZJIEIGKFNXAMTOXIBBYCWGTLHDUPBYCNPQCNCGVVNIJPZYIWYDLXYVNADRLCBUKZABUARPGKCOIQVEQZF");
    const signed char tmp_msg_0[] = {61, 93, 18, -87, -33, 119, 43, -66, -102, 122, 80, 118, 78, 24, -108};
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
    msg.setTimeStamp(0.578463978137319);
    msg.setSource(22129U);
    msg.setSourceEntity(119U);
    msg.setDestination(60393U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("HCFUPVJUFEKQXNAPKNQODOUGPCXXYAQKTVEZHBNGEDOWOMXYVAGPJBMIECZNVCSMDYSUVODECXUYRJJAFGVIDNWXMXRLBO");
    msg.plan_size = 53144U;
    msg.change_time = 0.17000844437999174;
    msg.change_sid = 6832U;
    msg.change_sname.assign("EDLNNHJBMMDTKNQPLWAKORLKVWJKMZOPGWQFJLYRZBOWXJOGEJQVPNYGEYNVFABCRUMHLIINFBXLMUTOTXBAEBVFSDDKHROSFSJPSPJZYMHCZSZIRASPUVWQEGDTXGBEXTLOULUTGYHPAIUZOVHNCSREARCKCWKIGLEMDZHCOM");
    const signed char tmp_msg_0[] = {-26, -107, -62, -47, 34, -116, -52, 15, -18, 23, -112, -40, 1, -114, 114, -88, -56, -91, 53, 87, -32, -25, -2, 123, -100, 88, 33, 35, -100, 56, -110, 54, 106, 59, -96, 54, 53, -60, 22, 56, 85, 121, 98, 83, 9, 46, -23, -78, -97, 87, 42, -23, 78, 85, 78, -4, 50, 35, -15, 82, -108, 76, 25, 125, -98, 37, -59, -52, 53, -82, -107, -93, -67};
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
    msg.setTimeStamp(0.2726491028978342);
    msg.setSource(33405U);
    msg.setSourceEntity(102U);
    msg.setDestination(63276U);
    msg.setDestinationEntity(27U);
    msg.plan_id.assign("KGCHHTVLRKJGEV");
    msg.plan_size = 7406U;
    msg.change_time = 0.6924737046066696;
    msg.change_sid = 1412U;
    msg.change_sname.assign("GYYVTOEKDTRTBRRMVUQPQIHPRUVWYFXBJRINONBSDMKHCTJYXZENWJKFFMXRDJHBGPBDJVQLJMQTRALJFGAQNIHLGAEJIUPGCVZXZELBFLCBXZCMBNOPZLHDNTSFWAGCXQHYDMLKNSAMEAIPWHWQTPKMVZXUUWAYUNSGFJWWGLSKJDHXO");
    const signed char tmp_msg_0[] = {-60, 22, 38, 60, -67, 13, 50, -126, -109, -91, -82, 66, -81, 90, -119, -123, 105, -31, 96, 28, -18, 116, 89, -51, -44, -11, 9, 125, -36, 92, 89, 20, 118, 52, -106, 47, -98, -75, -45, -40, -15, 98, -82, -120, 94, -50, -76, -36, -59, 28, 85, 122, -38, -106, -39, -124, 3, -86, -73, 66, 58, -91, 66, -114, 69, 68, 55, -91, 73, 65, -99, 24, 82, -105, 91, 107, 80, 14, -95, -15, 58, 126, 3, -127, 19, -37, -82, 105, -71, -72, 34, 115, -108, -54, -127, 90, -61, 126, -36, -119, -128, -104, 21, -126, 45, 63, -38, 83, 113, 56, -92, 94, 116, 67, -116, 2, 12, 84, 86, -86, -60, -82, 95, 87, 118, -81, 83, -94, 104, -45, 38, 1, 80, 96, 112, -51, -106, -73, 94, -115, 36, 32, -98, 6, -33, 1, 112, 120, 58, -127, -8, 91, 116, -31, 83, 39, 69, -62, 55, -124, 45, -49, 99, -26, 120, 95, -122, 60, -24, -105, 67, 102, -64, 25, 101, -124, -112, 3, 55, -80, 41, -114, 10, -49, 113, 110, -79, -32, 10, 52, -33, -42, -24, 12, -22, 76, -78, -44, 48, -31, -50, 48, 68, -99, -31, 74, -51};
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
    msg.setTimeStamp(0.5112265668451658);
    msg.setSource(24225U);
    msg.setSourceEntity(91U);
    msg.setDestination(53079U);
    msg.setDestinationEntity(6U);
    msg.plan_id.assign("YNFUUPVVGXYJDYIIXTWBAOOKFMSBZUPYZDHVSMSGLXFMJAJPHRGCKCDATWZCXBGWUARFGGWQDTYNQMPZUOGBOXFASTNWCIOTOXESLXSHJIEVASWFWXZKPIEYQPLEXQLKVEVEHCHJEWZTBPZKFDNBDJRRWSUQVYQJSRDPNZKAGCADBFGOTIYOJVSF");
    msg.plan_size = 54885U;
    msg.change_time = 0.6213479068658504;
    msg.change_sid = 24558U;
    msg.change_sname.assign("RVTJYVRJWKFWWCBRDXVDTFYINZUENUCPMUTMZVIGCTICXSNSYPTAAFIGLAAINIHXJUMRNMUNTBZDBRHRWWWYLOGBBPESENFJDPYZVAVJTFOQLPDE");
    const signed char tmp_msg_0[] = {126, -84, 120, -4, -74, 52, -123, -41, -67, -28, 38, 53, -11, 93, 43, 54, 57, 99, 50, 48, -18, 3, -106, -18, -114, -51, -10, 17, 90, -124, -21, 20, 75, 120, 44, 39, -50, -47, 15, -27, -124, -77, -91, 15, -127, -10, -71, -67, -12, 94, 120, 75, -26, 114, -103, -119, -1, -60, -2, 48, 6, 56, 42, 123, 19, 71, 31, 112, -62, -42, -27, -2, -22, -82, -24, -75, -109, 43, 73, 41, -65, -82, 106, 65, -80, 61, -104, 118, 31, -89, 109, -23, 10, -1, -99, -54, 66, -116, 114, 10, -43, -14, -109, -69, -62, -96, 53, -83, -79, -26};
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
    msg.setTimeStamp(0.43960020177028447);
    msg.setSource(15970U);
    msg.setSourceEntity(193U);
    msg.setDestination(30890U);
    msg.setDestinationEntity(174U);
    msg.type = 231U;
    msg.op = 67U;
    msg.request_id = 485U;
    msg.plan_id.assign("IIDISWKPRQQGFPUBJFAPHGGLVCXRXEHKPUDKYRWDTEWRZBHNPAMSFJSVSOZNBSAQBPYULZHEBCFZIOJULOUYFZZ");
    msg.flags = 50339U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 99U;
    tmp_msg_0.request_id = 47382U;
    tmp_msg_0.command = 62U;
    IMC::FollowPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("ABTZGQWMYVRAHVBELOKFZKJJPPLJQKCURQTNQFLECSRNHFKXCDNTJQXGAKXIROUJEBMKHYYWNSFPSMJZXESNCUPVIGQASULQI");
    tmp_tmp_msg_0_0.max_speed = 0.6336067385174708;
    tmp_tmp_msg_0_0.speed_units = 46U;
    tmp_tmp_msg_0_0.lat = 0.4965243848973181;
    tmp_tmp_msg_0_0.lon = 0.4949274245366233;
    tmp_tmp_msg_0_0.z = 0.6276496220339884;
    tmp_tmp_msg_0_0.z_units = 112U;
    tmp_tmp_msg_0_0.custom.assign("WMYTRGDGZVCWQHSJZOEIFLINAMMAZQSYQPNDPWFRESLZBZNUGXIQBKPCBCFXMWMWYMNEGEVQAEM");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 31251U;
    tmp_msg_0.info.assign("XGYKGWQAJDJONAUNCTJIVZCFXPIJA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NMWEEDPODRBGRYFVJPRJLUSEJBDGLSAPEMTTZLMCWLADSFRHLCHINMYJCVNXHWCCDVUFTEUXSZJDYXQBKUKPJCNSGILFZPKYCQLWDHPZTZGGHTVRTAOGDBMAXROJHNWPYFAEMSOIOFXLXM");

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
    msg.setTimeStamp(0.5943516787958779);
    msg.setSource(1982U);
    msg.setSourceEntity(146U);
    msg.setDestination(10558U);
    msg.setDestinationEntity(72U);
    msg.type = 229U;
    msg.op = 40U;
    msg.request_id = 48027U;
    msg.plan_id.assign("DDPOWWYLSUTDPEALJSNAGMRXMGLDFXHGPEJLFOGUIWENWUIOMJTDLXLGMAFCYTHBRQRVGAUANWAZQWQOAGZQNJKBCJEBRKHXPKHVNHVZMFZAWKDCQ");
    msg.flags = 4334U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::UsblAngles tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 27227U;
    tmp_tmp_msg_0_0.bearing = 0.24574689669197491;
    tmp_tmp_msg_0_0.elevation = 0.47210006670729177;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YLNXZQZEEOTUEVSWMPQPBDXHGFGODNQIQHFYFKNRMZJXRBEFWKOALNFHGTFBDGGULTHFSEQVKGFJTFJWKAHQNVOKZRASRBLUOVIHGYIOMNBSECVJXDXGAASAAOYZIHUHJJWVJVZYAQPGKXDCICRFOKITNGARIBUPMHPDRPXJINQUXUKWNTQPBWY");

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
    msg.setTimeStamp(0.5778101102251358);
    msg.setSource(24071U);
    msg.setSourceEntity(236U);
    msg.setDestination(11787U);
    msg.setDestinationEntity(19U);
    msg.type = 97U;
    msg.op = 12U;
    msg.request_id = 51178U;
    msg.plan_id.assign("RNLWIABMONBPJVDDFSPHPYEVKWOFPIOFLQHOWHORJGJQEDGTKRGWUAKIMCRUFFMZAPCNTORVKWESBDLIKDBPQBUGXFNAEUVUSAXRFGDJGHYWOOTKQXSVZDDWSIFLAEFCDEAUJXRXYGZTFUJCSHHCGZWDR");
    msg.flags = 43072U;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 6849U;
    tmp_msg_0.priority = 77;
    tmp_msg_0.x = 11642;
    tmp_msg_0.y = 12340;
    tmp_msg_0.z = 15870;
    tmp_msg_0.t = -16832;
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("MKRAHXMWYCVHPIBPCIYKRDZVNFZHOLKO");
    tmp_tmp_msg_0_0.feature_type = 149U;
    tmp_tmp_msg_0_0.rgb_red = 29U;
    tmp_tmp_msg_0_0.rgb_green = 12U;
    tmp_tmp_msg_0_0.rgb_blue = 78U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FHFUDCRKGIYXFBZGLRKZUPVWUKAISPECHFASPMDDZCELTHYRPXNMWSTQIQZXPJHKJVPJXQQIGGKOHIJULBVFEVNDFZEVM");

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
    msg.setTimeStamp(0.4870697471757891);
    msg.setSource(16319U);
    msg.setSourceEntity(176U);
    msg.setDestination(15630U);
    msg.setDestinationEntity(80U);
    msg.state = 224U;
    msg.plan_id.assign("ZGCHQUTKAZRQXMVLWTAVWGJIJSKCMNZLFLEOCGOXFELXVDDTPVSMTDCWELADPEB");
    msg.plan_eta = -13288474;
    msg.plan_progress = 0.991372820391946;
    msg.man_id.assign("MODQYTFTPRTVMEGEXWZKLJGKBACXJUXRQUODIMTZUVYSEYHCMD");
    msg.man_type = 35847U;
    msg.man_eta = 101489737;
    msg.last_outcome = 135U;

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
    msg.setTimeStamp(0.6138421111833686);
    msg.setSource(40027U);
    msg.setSourceEntity(195U);
    msg.setDestination(24437U);
    msg.setDestinationEntity(215U);
    msg.state = 195U;
    msg.plan_id.assign("DFVBQWUEHLTLBOWEWBSAIQTONQSDMOGWOCLRDQQPKVMZNEMOZPFDMQKMWZLLUDTCTFFJGYCGRJRSCPPVYGPXHVGJYVIHLKEMSESSIJBNZETIUGGIKOPTODXNJHLFZHDYKVOZNEIZYNABXHBGARYBJLQLAAMDLRWFM");
    msg.plan_eta = 1376435213;
    msg.plan_progress = 0.8657816651020629;
    msg.man_id.assign("AEOIXWNHOHRASCYEEQJOFVCPJKPKVGWGFVNYONCPQDCMUXEPDFRPTUJZKIWQLLBOMSTZMNAYHCSURBWYHYZ");
    msg.man_type = 5114U;
    msg.man_eta = 1831678119;
    msg.last_outcome = 186U;

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
    msg.setTimeStamp(0.14496578876757737);
    msg.setSource(49472U);
    msg.setSourceEntity(161U);
    msg.setDestination(49933U);
    msg.setDestinationEntity(180U);
    msg.state = 247U;
    msg.plan_id.assign("DSIBVNTHKKTGBIRJTSCJXMTHPSVMRUALCMIPXWGFIUQVJYCPTLIZQQOXENZNSCEEJZGKWVXTUOPRRQYFORWANNXIMQLNVYYSBWYORBGHURZDLMFXDHLRDOTEBZZVE");
    msg.plan_eta = -1053382272;
    msg.plan_progress = 0.037480613484420444;
    msg.man_id.assign("RRMQNSQWHXPJNWJINFFPRSMLXIDFGHUINJQELNVWWLPKGFBQDYMPZUMPGAWXYOUAXTCASMDXZBTEEWVTYFIYWATIZZJWDZOMFNOCYGESRBGGCBUQTEUOTDQNSRTMSHMOCWEUZYDRKRHICEOJBRNTYDZFDQGPDZXHFLKSDUCPVQCJFOIJRBLUQUAAACOKYKKPEOHNEKYLJKNCVABUJBPASHVSPBLVOFHTLCGHIEVTZ");
    msg.man_type = 40228U;
    msg.man_eta = -133587945;
    msg.last_outcome = 83U;

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
    msg.setTimeStamp(0.6171087250465808);
    msg.setSource(60908U);
    msg.setSourceEntity(117U);
    msg.setDestination(48935U);
    msg.setDestinationEntity(58U);
    msg.name.assign("UVWJSDEHZLZSXSMQODJJABPSBEOUUNQISWIMGOGCCYUGNXNVNKXTKDFOLUPIWMFJKSVCYKCWOFBBWFYOPHACYHRKDGUYIEZNEGMXKKYLAGZBSEJDTWVHCKVXYNJVGTXNFJFHPIADGBRCQVEZADIEBIGLCEAGQHXRYTUMQODTZJZOWOFMZPJZAAVLXSQMHQHCPLPSRQILHWVBBRTFWIXMLILRWRLD");
    msg.value.assign("EXCOVHBUQPXCNROTAWJRFMXLNKIFQCANPVSFLORQCXLXTPIKVPVNIZLJHRLIJGBPKBOODGPFAETUSXDEWTUCXPDGQHWDWUZWMMHNLOMQBQSJWMHEXVNLZDRGSVGKXHMLIZQANNJTITEHDHERAIJYAOIOFVJBZXYCMTPMEBYUBUSCB");
    msg.type = 201U;
    msg.access = 89U;

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
    msg.setTimeStamp(0.4737826353906287);
    msg.setSource(39024U);
    msg.setSourceEntity(86U);
    msg.setDestination(33412U);
    msg.setDestinationEntity(127U);
    msg.name.assign("DYNOSBLYSLHQCQTSTFXJQHCZLIVMCEUOYBDAQMIZBPKRIGJOKFFFSOZWSBNKAWJOZJPNPFKQAXSGILYEKBXLZYSMXCSIYIRHMUTLGUFEVVCLSJEAMEOKDHHTFPTMTNMQDNTVGRZOHWHRLDEUWLJJRQUPXYUUFUMZPVGWNTGXEVMXJVTRZYNLIIZOSCHGHKEDXPECBXVFNWBDOAQAC");
    msg.value.assign("KAQHOXJOYXTCYWKAUEDLOQVNPAFKDJBZPECNCZKLTVHXODNLRQNMUVYGBSVFJJVJIUOOLVXBYQYGYDRPNONIFBMFUGCGQAKSZERWKFWGUJBIMMECHMNSSZQUETSMHHSLYPYWPTTQYKNRRTNLVPCRIXKSOJDXPNQIGJUHCTZDTXAGUFYFFGMBDWPTZFMGHKEVLZARVOBZHABHWSSKOEIEMLMXXHCRRVBWDGPAWWQSLW");
    msg.type = 161U;
    msg.access = 17U;

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
    msg.setTimeStamp(0.9026346702652077);
    msg.setSource(61126U);
    msg.setSourceEntity(168U);
    msg.setDestination(46896U);
    msg.setDestinationEntity(111U);
    msg.name.assign("RBLPLVPKHTMXTVZCODVHVTHLEMGBSPGYRJATRHQNZGNBKYNEZDNBNQUUCZUAFRXTYJBLZOFPFJWMYOGSKMFOJAUWNUJKQPJISIPTKTBBOXGUPBMCCGIRYVNRSQEOQCXTCTHEVOFHIUDQKDSQRHVIWXGXPOZENLWMEKZSCVLCJDRZSEKAQNLHDDBDFMREUZHASJYXAZKFWAYKGSUWSWWRFPMJTBQYXADVFGMELIYLIVAYUACMWXIPXNCFWIJO");
    msg.value.assign("WLIETWLHJVUBPYHCFDEOZMJLUBWXBISHPZSKBVJSCAFAGYNSNXNMQJGPCVUNPIIMYAZYOGTMMZDQYCSTWTTUWETRVUKCAJOAACYSMRWVXWINBIGVJMFKUNHCRKRVOGMENHOFMLRKTHXSFRLWRLRTSFQGJDLOREIUNTQWKHCKCFGLVZHZMIXJEPYUIHAWXRZDOKOFVDZKYKOTDDBGQZGQSQXBNEJ");
    msg.type = 217U;
    msg.access = 76U;

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
    msg.setTimeStamp(0.1821388466401811);
    msg.setSource(60016U);
    msg.setSourceEntity(66U);
    msg.setDestination(30897U);
    msg.setDestinationEntity(108U);
    msg.cmd = 184U;
    msg.op = 126U;
    msg.plan_id.assign("YRUAACZJLVXIQJJQIAKYUPCASAY");
    msg.params.assign("VFNRMBLUCBNMLFMWXMZOIIIFVJFDWHHAKVRJNPJZKSTGYFEDZUCCWLUXZEPYISOYIAIMLGJRIFJRDAMWK");

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
    msg.setTimeStamp(0.32651913016512724);
    msg.setSource(5835U);
    msg.setSourceEntity(212U);
    msg.setDestination(37774U);
    msg.setDestinationEntity(223U);
    msg.cmd = 230U;
    msg.op = 171U;
    msg.plan_id.assign("HHBUMOMPQKYHMODCFZOVJRDIQJHDTVPAYYONGWKAGFJIEVQZWTATJUOASPJQDWSLXRNZLCSGHLFTRNQJZFABMAPHDECLMPVXFALXUAJVGGEDZKEIQRMCXKKWWXYTOIYUTBINBNOEJMPLLZIDAZGZJUSBODOKURUCCPVWBCGELSFTPBVMGPSXCSCVQKWKEFVEK");
    msg.params.assign("NIYEVQLCWODBBSVQKUMKITTAWGLZJRDXOHPSUFPECWAHIJDITXKFVGDQADISLEWBWLJTVGFZVUTAYFCGCZWMMHLHXDVQZPMMPKRXQRLEWUTJNYYIDXLXFGXQFCOQJOCRFBECTDJGNJHGAURA");

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
    msg.setTimeStamp(0.060897223327779804);
    msg.setSource(2251U);
    msg.setSourceEntity(43U);
    msg.setDestination(59420U);
    msg.setDestinationEntity(28U);
    msg.cmd = 63U;
    msg.op = 121U;
    msg.plan_id.assign("HRWZPNHOMUDZGBLYZHCSBGWDGFFBWNAYRSLKGZUSJRJKRARDYVXGFQIEUYQYUFXVLLCOAPSTSWBNAGSZBIHDEDMAMQGOAJFRVNUXNKPXUCVEECTNBXDOOBFXVOOOKAYSJBIMPKOHMWEHVIZXGXPDYXLRVQZYKNEALTCBGHKRFTFNLQUCQQJRD");
    msg.params.assign("GKGQIPMLLHFOTJOSSBGSJNZMIWRMKACNPVYVPPFXNZYWBDQVYYCSCZWNQSHLRVPUEZJIPBNCDXZFTWGRRQAOEXVHZAEIAHHEQDUAUSYSLWPXBJXNGDHFODNDDKSJZTQBDELZMJFEJTLUPBVOIGXMOCMOSGYGOYKCMGXBAJVINRHUVIVJAQXUITTFXFTIBCOHLRKWMVNBEBGQOI");

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
    msg.setTimeStamp(0.8539708391825157);
    msg.setSource(2638U);
    msg.setSourceEntity(204U);
    msg.setDestination(34441U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("FAWZIAKBWAQPMCLFVDXJCHOHPNLWURCVXCSEZZPIDEFNKKZDTIYRGTQTDGOBTOSRWVANZVPSCXKLRDOZHWTOBOJVQEGUCYIUYXZKOMPBPGXBFQMKEQYSUTIZJZXLQGYRWTBDWGNPGAITMKJLRBNCWOMFV");
    msg.op = 75U;
    msg.lat = 0.8164325027997928;
    msg.lon = 0.04717114252640564;
    msg.height = 0.4491853295230799;
    msg.x = 0.5070393783401734;
    msg.y = 0.1279709133122091;
    msg.z = 0.5962022769154959;
    msg.phi = 0.3276264070773469;
    msg.theta = 0.7644915451250808;
    msg.psi = 0.5038369769459748;
    msg.vx = 0.2571636798906376;
    msg.vy = 0.608567593965764;
    msg.vz = 0.0948384863407683;
    msg.p = 0.2065716256246095;
    msg.q = 0.9059108377599885;
    msg.r = 0.9172216046534798;
    msg.svx = 0.4502029435728059;
    msg.svy = 0.8516514355641646;
    msg.svz = 0.6559536087974773;

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
    msg.setTimeStamp(0.4819110584580648);
    msg.setSource(7147U);
    msg.setSourceEntity(195U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("VAQINOZIFTGDZXBUAQOQDYLZKOZZMARPMOMIBMGRSOIHDSPZTKRKTFOVVGFQTTILYWBVQBVQFADSWSDSXREYHXMBHTCUPQLBSNFONWWNJEWIVODXNBYCBDGMHRVSJKNWYUXCUEBZCAQBTKGMAEHCEMRGKMHXGSJGRIJIZUKPPNXCCYUJEXYDPRRACPQOSGLXFVLLKJGDJWTJTAMWFN");
    msg.op = 150U;
    msg.lat = 0.26375024444997586;
    msg.lon = 0.6364029127442651;
    msg.height = 0.40671988532965253;
    msg.x = 0.8105526007497218;
    msg.y = 0.6322425071979174;
    msg.z = 0.709744404988979;
    msg.phi = 0.5969790816967456;
    msg.theta = 0.7477371439825694;
    msg.psi = 0.7357048373487042;
    msg.vx = 0.5497577072947674;
    msg.vy = 0.9066346060026275;
    msg.vz = 0.4250726260915051;
    msg.p = 0.148150718299917;
    msg.q = 0.20330046439158234;
    msg.r = 0.947836938059887;
    msg.svx = 0.9262735475186907;
    msg.svy = 0.7873955376307693;
    msg.svz = 0.24258132085143813;

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
    msg.setTimeStamp(0.5977025458866415);
    msg.setSource(65251U);
    msg.setSourceEntity(17U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(35U);
    msg.group_name.assign("PGXTBHAHIMUNFXGGDLCSZZFOBBJNWIVNDXUBTPMPTHVXAXJMDGFOUGMEBQZXVJJZYFXSJFTYLRWHEPGFVZNYNEBMGUOQDQXVQZTHWPUIQODFXITLRBEBPKAZLTTOJXCCPRCVNGFNRIHKDLGJISUCPOWVOYUMCKWSQSMONWDORRZRLMQQDQCKTSHKDPBRRKG");
    msg.op = 50U;
    msg.lat = 0.002917037155661717;
    msg.lon = 0.4147490869352277;
    msg.height = 0.97704946075479;
    msg.x = 0.49220048563483465;
    msg.y = 0.41799643635691985;
    msg.z = 0.6403807554179272;
    msg.phi = 0.8711456877701989;
    msg.theta = 0.1992717410834598;
    msg.psi = 0.034088693840158446;
    msg.vx = 0.8839265474240058;
    msg.vy = 0.9147755403564278;
    msg.vz = 0.392937619723557;
    msg.p = 0.9864350528574435;
    msg.q = 0.5591025101889384;
    msg.r = 0.29382354640458264;
    msg.svx = 0.909779973508605;
    msg.svy = 0.17244800232520896;
    msg.svz = 0.808213883302313;

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
    msg.setTimeStamp(0.3587181936954189);
    msg.setSource(14233U);
    msg.setSourceEntity(139U);
    msg.setDestination(39950U);
    msg.setDestinationEntity(100U);
    msg.plan_id.assign("LGPCEPVKWVKOJGNTCNEIWLLSTZZPDTXCUCIXWIXVYJYLIJGZPUYUNMDGANKRXKTMASTFUFZBETAHVCAHSAZMHNCGIOOMDQEMLVSOJWVIQOOPJJBERHFJXVGAFQINTLVHQUEVSHQASDYYDDQRCPKRHZBEJLLMCGZXU");
    msg.type = 162U;
    msg.properties = 236U;
    msg.durations.assign("MDDAZJTLCXKMFOEZULKPBGXLYCLVJZJUHKNNGPKAEJRMCJWAPKQUBEUFHGNSRIMFIDUMBZDPQWGILNOBGBRSGZCASOXAWQGKYSOXKZDINRPYYEYRMOGZOFUJSVWBALMJ");
    msg.distances.assign("FIDUSPOGWSDQSLNKRCUHLBVFXGLNYZLNXQJGHNZBHJFCMSHCRFASNMTJQJUDNKOIQMGYLCOVUJMLEXPJXBFIRQTUWTHDKRXHWXJAINAUAEMPOKAQHZCBZXGXJVDZTYNZTXOYWRFGQTPGEHYVMLIARPNXRYYBSIEPJWLPBNPULUPGBOCOADRAKTREEBIZMFVVAS");
    msg.actions.assign("WEBRSWNUPVTYYELWGKIKOYDLVPVNFCNATPCXMHCUWWNIQJGUOJXHJBFPOVGSWAZHMUGRAXNGTHRLPZBQFOMUQPQDMQDUQVGDI");
    msg.fuel.assign("MLCEJGEYSNHLACQSIYZQXLKABJHTEJXFJUVDRTQEBZIVPEVGMUILTNGFCAPHYQHTNPOXZKDPGDSWCHMGOPFLKDFEMYUMIQXBCRXWMJDWOGNMPFIYVQALPKKCRYKSSNXEKGOHJHBFCOBIJZBVDLTZPKIJBNSQZCJIWTAEX");

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
    msg.setTimeStamp(0.7984929650841193);
    msg.setSource(64401U);
    msg.setSourceEntity(20U);
    msg.setDestination(27564U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("GSFTBISKMMHMIEXQRAEIDPUSINUVTEKCWDLPYKQHFTTRAL");
    msg.type = 15U;
    msg.properties = 202U;
    msg.durations.assign("YJYXQVCSZNKBAYRKGRXMCEXWDCAZIUVEFYRVEIMLCYETGTZIHFTSSOSPJRZLNDMPKQVMERIDNETMEGRDONJERQQVOMQWDPBOCFIUQOZRXFPZWJSUMVGUTTWWBQJGFBCAUTSXGTGKQHFYNXHQYWBSHOVHIHMDZCUJFODWSMCNVFAXDBPKLSALB");
    msg.distances.assign("XYPCHQRCXKRPDTPSALSBXXVYJSHHJJMGKVDFXZIUAGWKDPMJYHHZBWSXUCALTNQEPFAGSUEPZTHJHHQHJVOZLNWZXMCFCOZEMWOKZGCODWUIOCNDGVCVTOYTISCYAEQZGIOFAEXJNVSWNLBANQFTGRDIUTEIMQFQLEANLPMBOQRGRXPVDWZBKBQBEWBCTLORFM");
    msg.actions.assign("TSWPTCZPVJAAMUIARRPQDEOZJKBVQFFJZXIRGBZGSQXHXIPIBJYRFSGVCIQSBXLTMRWMGNSYKYGQMXJWUJIHKRUFOQSFGTDZVUTZMCNECCNOSRMNLPOPTUE");
    msg.fuel.assign("HBWVFHMRIGDREKVDJFYCXCDGPXYSKDQNCNIEEUSHLILHOXGCJAHVTDRHQAOGJCLYDJLKAHRSBIHJCNKUPETUOSUWTCHNELVLQCXISSTQYWKLKXFUKGTGSRDMOKFAY");

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
    msg.setTimeStamp(0.706202390875115);
    msg.setSource(14245U);
    msg.setSourceEntity(115U);
    msg.setDestination(31605U);
    msg.setDestinationEntity(50U);
    msg.plan_id.assign("RFNUZIJWHTGMROCYPVUEWZQDIFXCKRWQUGKLYCVWXNASWOXEYIJHNEJEEWOBNQTUWHVJCXBBGORWGDVJGMSTYBKAOLSTRYNVKFKTFOVDXQPCSCMHDAZRPZVNHOFPPQMYDDSMCLUYKSEXNMHLAKMXUZIPTBUMITPOZGECIVEZKVFQYFZPIISAOUZAGYXYLJHLPMGNDALSQXZXDLFQBTATTHIHBWCJDIMGKDJBQVBCAGRPQRWSKSLHFLFUN");
    msg.type = 237U;
    msg.properties = 120U;
    msg.durations.assign("GZRXDFPTYPWYLTLIYRUQRWCTUFHZMKNBVSQJHIQXUYDTMR");
    msg.distances.assign("UHZGKJGKAHXZWZJKBCCI");
    msg.actions.assign("OSFDRAGALMOYXYAGYVLQTXMKPOZJKFSQLWBTQTEFUYVSINWGFQGVSSCTVURNIBUZ");
    msg.fuel.assign("NXRLWPAAXHADKEIBFTJYTGRBUXURJGBUEHDKOAYYQFDUXONQYORSWKVPPDDIWUNOSJZUSXQPXYMIMBJYGEIRZWOKVINZBRYWTFCFGQQZMPOMIFMNWBIYODHVEXLZZHQSEVNJWCTRLDLCSWEOVSCFUZVNPLIOANJDAZMPFQWKTBVEBADQMBSGXLATLTCNVLGVCUMJXRIA");

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
    msg.setTimeStamp(0.7281433055063711);
    msg.setSource(54480U);
    msg.setSourceEntity(132U);
    msg.setDestination(7896U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.4254578850937175;
    msg.lon = 0.848587342900075;
    msg.depth = 0.20445831957370264;
    msg.roll = 0.8371890196048747;
    msg.pitch = 0.564155863701597;
    msg.yaw = 0.5698117598772577;
    msg.rcp_time = 0.47933694295547313;
    msg.sid.assign("MGWZFJGSITXBS");
    msg.s_type = 14U;

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
    msg.setTimeStamp(0.23553138334986745);
    msg.setSource(25616U);
    msg.setSourceEntity(142U);
    msg.setDestination(13852U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.3704477849242489;
    msg.lon = 0.4802438869830684;
    msg.depth = 0.5716625987902338;
    msg.roll = 0.6162870212863089;
    msg.pitch = 0.7093580252630128;
    msg.yaw = 0.31004252726809567;
    msg.rcp_time = 0.24706091359086912;
    msg.sid.assign("PSNAEEPQEDBQOREYZTZBVPDVCCJXSLSFYUNUKYIMFHOWWIFYOCRXIAXTETDZBWNDCLKMDDKRW");
    msg.s_type = 129U;

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
    msg.setTimeStamp(0.23208459236425372);
    msg.setSource(64226U);
    msg.setSourceEntity(132U);
    msg.setDestination(13985U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.9155062826459222;
    msg.lon = 0.8599248878646834;
    msg.depth = 0.6823538604848131;
    msg.roll = 0.1959610431754243;
    msg.pitch = 0.85455140660764;
    msg.yaw = 0.19845874188825519;
    msg.rcp_time = 0.7597630152683423;
    msg.sid.assign("LEAITEQWHRSYVYXEEJUPJEOCUBDZMBSGXBPXOOSIKQDCQYNDTPPVMUWAVOGRJNFZMDUYVRKYKGJTZANHFGFOXFPFKYZBXKBRZHQPRLPAIXHQBQTYUCIQESSAIFIHBSZAAXPLGEZ");
    msg.s_type = 161U;

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
    msg.setTimeStamp(0.33679606382758864);
    msg.setSource(3630U);
    msg.setSourceEntity(174U);
    msg.setDestination(37545U);
    msg.setDestinationEntity(52U);
    msg.id.assign("CJJNUWNXKNQCDSBMCPEZFIHHGSUUMBASRGVRLXGOAYKQKDCCXPIVVZMYWLUSJRONAMIP");
    msg.sensor_class.assign("GYUVVRTZZNAIEVSRFQIBXQHHLCNHFQLDLYOUOIOSNCTFPMRVHHWLDYQGSDAKTUANUQOTOCLCAPTBJSUIJZMGGPF");
    msg.lat = 0.41241374308352363;
    msg.lon = 0.2525192082136135;
    msg.alt = 0.7018933838460019;
    msg.heading = 0.27852191285623695;
    msg.data.assign("ENEXDKUNWNIZXRDLYQJETSZXPRPYJSYVWOAFEZKMJDFRBFWQWQV");

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
    msg.setTimeStamp(0.7399149343309944);
    msg.setSource(52342U);
    msg.setSourceEntity(3U);
    msg.setDestination(63629U);
    msg.setDestinationEntity(53U);
    msg.id.assign("ZAXYKUWBLJTGOVJCR");
    msg.sensor_class.assign("JMXARSBFIEVZPVQCTIAZTQJQJJCGNHGVYZEJAVIKSYASYIZNWBNKCIAFJDSMJPXKMHAPGDVRMTBZNEDISYFKYAHKXPYNSHVTEGDUQXGGUYDMERVKJXFYSWLRUQZXEDLXFDNZGQOKTLUMBRUENLBWVTMJSHWVZQCHVFOTOLQDPLOLNJSBWKOUXIRYX");
    msg.lat = 0.8016086774890306;
    msg.lon = 0.27930755775118477;
    msg.alt = 0.3381320148013569;
    msg.heading = 0.4402165957991597;
    msg.data.assign("FZXTXPVZXSMJLVAIMKVCISLWONIPZEOUNUMSCJWRGUUFYWGZDAQTXKNSLBJKTFTKPMDIHDJCJIHIUGLPSABLNENLRQYRKFMEHIYHVVRGEXYLCOFCOPVEYYOFMQWGDMVCBQHDXUKHLBPRLTDUQZMCITDXAXOZSRBGBAJPQKAWCRUBRUVBOCDQVRKXZEHZFOQAPYSYEX");

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
    msg.setTimeStamp(0.9416199090766799);
    msg.setSource(37543U);
    msg.setSourceEntity(42U);
    msg.setDestination(48886U);
    msg.setDestinationEntity(45U);
    msg.id.assign("WJNVYQFLBJEDXMKNRRTBQOMEDEHEXQGFEYPQALLOGIOBQDEAPYCOBJEWSLTATWPKMFSCOIKZIOVUTPUYCPCSJNANYLVXVZFQSHVISRYUACWGAPZJSFVXQXGRHMZJFPYAJHIWTOEUQNBEGYNDGXX");
    msg.sensor_class.assign("YOSRVHMNYQGIUWQTEDGOJBNSTVOITNKSRJDAPPLVJMABHZUZRJUCCPJJOZYRNQBBTKLEWEDHJSKKAORLFHPTSMIEWQXAMUZWMVIYDRWRHZFRLSAGYPOKXQPFTDEGXSKPFUCZZXJNNQFEMAMMLCBUBDRFEXHCOFWHAKUODGINWMPNBXMPGVYTIRDEZODUUJNQLCJVLBASIXIAYSHTSHZLWCHGGGQVFXIEYF");
    msg.lat = 0.7336377121158678;
    msg.lon = 0.6655414997917702;
    msg.alt = 0.9507302381488294;
    msg.heading = 0.801399543048848;
    msg.data.assign("HRSFTPLRYANKHFVFTUKEYNBSWSVJQAMBTKYZARYJPQAYKPBCXIHJYZDUHVGOMEPRJDEVUOUZGXRMHUHZOSQYSOO");

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
    msg.setTimeStamp(0.7812870888777269);
    msg.setSource(40816U);
    msg.setSourceEntity(110U);
    msg.setDestination(18200U);
    msg.setDestinationEntity(223U);
    msg.id.assign("RHCCNSGGVQWXCBIZFBIMERGOOXQDWIVFZLVGWUVITKTUFQRXEBSJVWVLENTKZFOONSHYVWDPUWHHYIULRQJPUIGNTUWAQCERPMPIKSWCTUVXHIJDZQDLYXPFQAZBDXSMCPJKLJZMIYJTFYYKALLZGRFLBMKNABDLXSHKATFTDRZVKEUABGETWOEGNYZCYMMJAPJ");

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
    msg.setTimeStamp(0.5503384151254783);
    msg.setSource(25882U);
    msg.setSourceEntity(248U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(217U);
    msg.id.assign("IJTUAQYOCFSFTQGHTGYOOXEJHMXRMRLDXXKCQZHCFJRNVBDMK");

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
    msg.setTimeStamp(0.2505235124300971);
    msg.setSource(21680U);
    msg.setSourceEntity(53U);
    msg.setDestination(40309U);
    msg.setDestinationEntity(170U);
    msg.id.assign("JCRSIUGAFXFEUFTR");

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
    msg.setTimeStamp(0.62227767887609);
    msg.setSource(54053U);
    msg.setSourceEntity(87U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(212U);
    msg.id.assign("KXEYNFVYEJMZDPLMKVYZHUKJGEDSBXOPXESQDXUISZZZFSCBNTCMWGFTWQNIPAVSIXGJESMJFBAQAACZUGCHBPXKOILMBVMUSUMMEMVOGNACDKUEIQTBPZNPGXLOJGNUNCQWHLDIFYWRDKLMXVKGCFOSANTPWVQJVJRHFS");
    msg.feature_type = 87U;
    msg.rgb_red = 214U;
    msg.rgb_green = 157U;
    msg.rgb_blue = 61U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.42720365887154366;
    tmp_msg_0.lon = 0.27806270609797457;
    tmp_msg_0.alt = 0.409562403867771;
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
    msg.setTimeStamp(0.8114817247852305);
    msg.setSource(55026U);
    msg.setSourceEntity(188U);
    msg.setDestination(1762U);
    msg.setDestinationEntity(75U);
    msg.id.assign("VKRWIPFOCNMGQOZBMQEYWJQSSORPWESRAYRIOEIFWCXKOHWSMSFASUQBUJOVPCXLKGJPPAJNLODLKMMMVXIHQPDX");
    msg.feature_type = 109U;
    msg.rgb_red = 234U;
    msg.rgb_green = 71U;
    msg.rgb_blue = 11U;

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
    msg.setTimeStamp(0.5471120752998497);
    msg.setSource(4141U);
    msg.setSourceEntity(6U);
    msg.setDestination(3414U);
    msg.setDestinationEntity(30U);
    msg.id.assign("JZNPWAOSBXJKRGLHIKVFCFFZQJUUCDFTGBYUOFGDCUQPNWCISVYVZCDIELTSAEZRCMMKXRQUWPRQIJSKMMLIRMPATBUCATWQATELJFXVNOMGYFMODDNNEEYIAVVHYHOJSSNGNDJBXWLQISUSHTEUQLXRLWXPRHIVSVLGPCYYOHRSGXYJDNGTLWEKKHE");
    msg.feature_type = 65U;
    msg.rgb_red = 118U;
    msg.rgb_green = 249U;
    msg.rgb_blue = 220U;

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
    msg.setTimeStamp(0.10326870156137291);
    msg.setSource(5057U);
    msg.setSourceEntity(11U);
    msg.setDestination(58695U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.43065191990496854;
    msg.lon = 0.7139180946380353;
    msg.alt = 0.9136884934601971;

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
    msg.setTimeStamp(0.3290119412388949);
    msg.setSource(3848U);
    msg.setSourceEntity(25U);
    msg.setDestination(44751U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.29736271510982804;
    msg.lon = 0.47812895888830675;
    msg.alt = 0.5477778605895247;

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
    msg.setTimeStamp(0.8023764828798866);
    msg.setSource(63143U);
    msg.setSourceEntity(44U);
    msg.setDestination(57015U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.7779702940978505;
    msg.lon = 0.380833369924389;
    msg.alt = 0.9268869407460101;

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
    msg.setTimeStamp(0.22837346508163736);
    msg.setSource(1394U);
    msg.setSourceEntity(254U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(194U);
    msg.type = 152U;
    msg.id.assign("LRRTQXUYALSJEBQCNIMMSHWHHYZMZXC");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.12808964605974105;
    tmp_msg_0.x = 0.8561501254118487;
    tmp_msg_0.y = 0.14223183806526485;
    tmp_msg_0.z = 0.776002170523669;
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
    msg.setTimeStamp(0.8165959898097965);
    msg.setSource(8653U);
    msg.setSourceEntity(107U);
    msg.setDestination(41324U);
    msg.setDestinationEntity(188U);
    msg.type = 254U;
    msg.id.assign("LNBZFDYDTFHEMDEPQJAATRKMRTUFBXWBJFBRCHYYAYLHCOEQHAOMRNPSSMKNNXQLZAUGACWJXPCXJBCBVWLNSXQHBYJTICGWLBDRKAGQTGIUYJVYPSMPVKFDRSVMKKEUARFNNTHLZOMAOTWWVLJVZURHUKVOMEZGKPMIGXDEODBTQOIZKXIQFIDXBVYRQQXFGEEOOPCQSUJZPIJLCGINVSDIJYNPECXWVF");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 39U;
    tmp_msg_0.text.assign("PNVZTPMKWZKVTMVHXAEIALNQGGHSJDLPPCXYIMIZFDVJ");
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
    msg.setTimeStamp(0.01541792026933042);
    msg.setSource(7497U);
    msg.setSourceEntity(226U);
    msg.setDestination(40491U);
    msg.setDestinationEntity(20U);
    msg.type = 88U;
    msg.id.assign("IUZHLUSOEPPLYEHICBRCKMAPPQLAXRNBDBCVSNWXAMYBZIDDOWAHPIJTEYMYQJYJENJFALXSJQFUTDKYQKTKRAIMBU");
    IMC::UsblPosition tmp_msg_0;
    tmp_msg_0.target = 28190U;
    tmp_msg_0.x = 0.6739550628506009;
    tmp_msg_0.y = 0.000489588559598908;
    tmp_msg_0.z = 0.3746588818767499;
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
    msg.setTimeStamp(0.6206044819844156);
    msg.setSource(12306U);
    msg.setSourceEntity(203U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(120U);
    msg.localname.assign("ILZOJXUNATJKSTEPMNTFBESBBQYQFNBZVQYQSOPAPJZOXYEPWWQKCUAWEDPIROMXRRRPWLBUUEXZLGKGJZIFEVCFBDMHZRFNEMGHPHSVTSKLAVDYQJULOGYHYAVTSELOHNGOIIABDDIDJFAQWXQERVXZLMNYYDDHOGWPNHTYMCLFUCTMEZCMXQZOMISGCTNFXAVDSXKUTRWSFICNJVJCJKHJUGRCKXRIMVGUVR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("YTUHBITZBSUSHYVDYEEZNUUQXWLAVFKQZLMIWLRQFQYGDBSWJHLYVFEIMGDTLJYOQDFXCFPNADIBHNXFJHYRSJEMPVJKVFTKYPBMHPIAYGWHEIGKMVZVWAOGCLHRMBODCXNIIPEMKTQDUXPSSPVQJUARD");
    tmp_msg_0.sys_type = 203U;
    tmp_msg_0.owner = 62216U;
    tmp_msg_0.lat = 0.3954876190838287;
    tmp_msg_0.lon = 0.2980102841556652;
    tmp_msg_0.height = 0.1911720860737316;
    tmp_msg_0.services.assign("HQXUYCBYGFBKWLCNQUJQOFZGKNKURAWOIOOOYFTARJSIWWZHJZTLLYJFZOUKCQNSVPDHRYFSVFXNDADBMSMAPYCKULEXWQOQDXYMBXVLGEJSCIFWHIKRNUQSGZGUTDIVEKMMVPQAXJNIYZFDIHPMQVTEBBSSVCHAKVVHNZXRNQAGUEURTRXKJWTJZNTTIPDEOFGEBBXGERDNAHPMJCHIIOCEG");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3358707427341421);
    msg.setSource(2585U);
    msg.setSourceEntity(222U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(64U);
    msg.localname.assign("FODWJAJYOGFSYRLGLRHPONBCFYQFVZAJHZYURYFUUXQIMSYUEHWZWQYTMCTEVWNMKFXRIRBCWUPZDVXSURIATAOPCILEHTCKAKQGENOUITEAJYKBVBSSGNRWIBZNQTHYXUDDRLIQEJEJNPCDO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DZIHXWQEGOXQPWXLENEYTZOTRXRJQGTNLIAPDTSYKOBNLGWFVPZRFCOPZVGSULHHMKSAEBBVRJYSLDZKHSKTINJMIKLCRVQXRRRH");
    tmp_msg_0.sys_type = 138U;
    tmp_msg_0.owner = 49432U;
    tmp_msg_0.lat = 0.49581282850015507;
    tmp_msg_0.lon = 0.3982242721681527;
    tmp_msg_0.height = 0.89320520415788;
    tmp_msg_0.services.assign("VGPDUTFGZUJIWWQETXNRQPSFRZTIZBLOBCFRLTGJZQXAJBIANOQYCIFCYAEEFDVEJKOVKQFMEVYEPWGKBDLXCRKYWLLZJHKSSGBMVXSWXEOBSHRPAUNRIIUMPTAYVBQHDKOXAJTVINJWKCLGAUXOZMAJYDLGYQZXJGNDPCOLPONKCSVBLUTTKMYDPRCPATHBXQNSCHMJUEMTZRNSFHOHXUQPECDHHGMDNFROGAYWKWFSWFZIYUNBMWIRMULVQ");
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
    msg.setTimeStamp(0.13875853479256228);
    msg.setSource(36818U);
    msg.setSourceEntity(122U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(84U);
    msg.localname.assign("ULPXXQDQNQPRY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DTNBTHDCQLJQUQXGYOIPUNNREDRKSOYJWESEEMQQHRPAVKGYBSBLHHIMVKBETFCTTHPDDUGWIUJROFNQYUICQTPDQWUVJKYWGCRYMHZNZMZVMJRMPVDLXTHZEUZOHQLFPGYFALFSOAZPOTAIIXBNWXMLAOAVKBNLXUHTHEISYSJZPZKWVGJGCXDSPKMAGBWXNDFMMSRKBJCFBVS");
    tmp_msg_0.sys_type = 139U;
    tmp_msg_0.owner = 49926U;
    tmp_msg_0.lat = 0.7286637801681506;
    tmp_msg_0.lon = 0.9217013251527698;
    tmp_msg_0.height = 0.6884669003311693;
    tmp_msg_0.services.assign("TVMUAURWSLDVAZWZDILUSRESXYJUQCXVZCEMQYSTJFMDIJZNQIFIOAXNIJSRZARYLBVHLPUOFXQPCLYNZZMPIYGSNYBLKEKYKCOCFVPNGKBUWIXKVWF");
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
    msg.setTimeStamp(0.14749801226517556);
    msg.setSource(47140U);
    msg.setSourceEntity(242U);
    msg.setDestination(17598U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("SHIBMGHCCJEJPJDHIFGFWYCBHAPZZATITGXCAJNJMRWMCJKZOVYNULECPOHPOOYFAEZYKHDDRQHSDBEDIRTKMZIAUMQKLSSZGNQNFLXQ");
    msg.predicate.assign("KOVFYDVXYRMPLEAEXMJCLCCEGWFBOVCDDGZCZDRCORCAOSLLFPIRQNJDLZYHYTNVWRVSAHGOPTSHIEYKAXUSGYJIIJLRASQGTJRBMHEAUNTPVCKSXZXQBXNZHEIZTAFOXWWPMLQFDVFRKJTPWEDTBYNQDFJMZYGHMBWUZWWVRGMEEGUUWMHPFPJODXNKVOZCJICSIKLGQBALNIITQTHSUBKHXYAGWQLUQBVXNA");
    msg.attributes.assign("BUCGOYOKHWICDIPQFEKWRJABGRDMNINBLXDISQESPNVWVONTITHWZULISQKWUGGJKIPDMYFUBTQVJGFYURZAZTLTZOMBGKCVVEMUSBWEGUAQMYQXDYPPWBONTXNYFHXFWQCMGVYCNFCZNKLKSOIDXASTPOKLSALPJPXSHUQREWNZXOYOAZRHSHJRHVZEPJRCZKUEDDCJFPLVTVCRJIBGXZSMJHHWRALMNAHGXTDFAXYCVLFFRE");

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
    msg.setTimeStamp(0.2426574523788173);
    msg.setSource(4769U);
    msg.setSourceEntity(20U);
    msg.setDestination(40875U);
    msg.setDestinationEntity(100U);
    msg.timeline.assign("MFRZMQJOGSTVXDKOSKJVPFWCQLBIAOEUVUMJCADPIKRACFYPTUIQRRNJLP");
    msg.predicate.assign("AYYXQQQLYBKJBIDTTHCHNZHUAVPELQEEIJWITKOYZUZCRYMKCNVOBSRFIUENIPZRJUOWIWSSUKLEGFWGWDPPQXQJNHPYFGQORUPEGVXGFTIAZRXLCLQPXTTDCKERFZDCFDDESQZMKBYKBVIPVSVUJTOKABJCQRVXYBFEWDPCOJKWTZXLLBSLMMUGRMYTSTHNSJEWXYVRACZRMGKUZNAFANSFAIJDBIHAXLGV");
    msg.attributes.assign("BCBXSTOMIKGUVFCKCHFMURQFVWPTZSVYGNBMCCJUKZDQLGOSVWHGSJAVMTORIPKDUONFCDEPOPXVAOLWHGJUELIYLGGMLZZRSTKJIHQKCNPRTUTQZRMOCJAMHQFUN");

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
    msg.setTimeStamp(0.4821506175269903);
    msg.setSource(31534U);
    msg.setSourceEntity(118U);
    msg.setDestination(18882U);
    msg.setDestinationEntity(199U);
    msg.timeline.assign("LAYYXHYBQUKHTSVPREGGKAVCVRJOODRSQURNBGOLQCZOVSYPUZZNTEUYMPCDCMAEBXBQEWOMPDNGMXLNBNKFOHHSSDUKVNJWZXXPGSBWWIYIEGAMMDGCIOMMPUCACIXBTLEIUYRTKLOAPDIIVQXJHCSLFHAQWGRHHVTFQTJUAJFVBXNUVJSSKJKJYLGQZHFTTCAWWPBZMROKHIKKTENFWLJPWLORERJGVAUQDSLZYZ");
    msg.predicate.assign("ZHOSTPKOJIMELHQMEOBOEJJHBPHBUWRRWIYCYGDZXNVYMJLJUSLJJDKPKQDXYXQQCUCIVGCATNDVZHCOIHLYQNHSAIXZPTCGRGVNWFXYSIAPFWULBMABDCMP");
    msg.attributes.assign("RMSXWXHYKEXYNKDZLLDGVZBVXRCNGBGBXALNCYDOFCNSKHOHMUFXBJFRIABQTSIZJWCWFXIPOZYTCFYGJNEWQHVLGBEATVRLIPAHNVQXRASLDURSSWYMVZJKLKJUWCBCVPEGAURHMNGOZQTKKSORPMHNVIDUGZPWTJLHT");

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
    msg.setTimeStamp(0.16290550200208787);
    msg.setSource(5836U);
    msg.setSourceEntity(43U);
    msg.setDestination(3446U);
    msg.setDestinationEntity(200U);
    msg.command = 57U;
    msg.goal_id.assign("UZZPSJVJUVQCRJYEGOUTFHXLRONZXNCIWTYLVKKKCBLFXOFVOZAKEZBXYXCJAMRMHBKLADPJEBIBXVGRTOIGWUPQKWEYUHSNNRUEWOZVRFNXAHHPGCQPWRBGTZSFIDFMJPVAMBGUXIVIFTCSCTBYVQWDPHHJPOCFMVKESWCJZISPMBQHHNLMERWDSQKMUWILLSOATPKOKRJZTGILEDEDTBYUGYXQDQDFNAAENWOG");
    msg.goal_xml.assign("EKWRDMSJDQIPEIBLRWXZBHIQPHVNTBGKHLYDFISSTLUTRVMJSXLDFKHGYKZPONNXUZDVESETZQLEXGCTCQYANWFZCMBIPSPQAYMUFUCDNHCVZ");

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
    msg.setTimeStamp(0.20300408721036978);
    msg.setSource(30558U);
    msg.setSourceEntity(32U);
    msg.setDestination(65359U);
    msg.setDestinationEntity(140U);
    msg.command = 17U;
    msg.goal_id.assign("AHYLVBIGNTHJNASMWCFGLBZECKYKKEFYQAUSOALVYBPXEXOIDHHVHMKUFUBCAPBYSMOONUPAUEGXIPXTNKEMMZRJVYTETMYNSDZULZCWRVFZXAIDLQBTVKBCESUADOPPMVHSERFQHFKFRJGNTWS");
    msg.goal_xml.assign("HTFUOCRXDKCWACATPHDIDFMPTJGWUTVAJIYIAFAPWVZMBAGIGSRYLOCMHNXMJVGKKVXDOHYFUWPQEQJYBFLIDYBXNNPUFMATTYMOVWOYXWMJDIMGGOVMDZEEVBUXUGTKDROVBVSKLSTCFO");

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
    msg.setTimeStamp(0.2755665167523571);
    msg.setSource(34476U);
    msg.setSourceEntity(110U);
    msg.setDestination(25860U);
    msg.setDestinationEntity(156U);
    msg.command = 162U;
    msg.goal_id.assign("SBVMNUPFUCJBPKBDYEOIFLSNMITJF");
    msg.goal_xml.assign("EHTEGQGZHMJCTORZYDWZUENDFZWWQEAKXTOWDZDFJAQYRVWUNPSBXIONXOEBWFMQRVGZLJLEVIGKERIFXPWVCRDJALBTXCFFGBRHJHDRPFGPYQTVGPGYSYCHSMZIQLLKYSPMVAPVMCUDQRKUESXAOOLVIPHOOYNRDNUMAWQXGILGKTJZHEBCRNISKUKAPUJMDTAFZCBVCJUUXNSMIXWKYQAJPQSBNVYML");

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
    msg.setTimeStamp(0.9770655937208187);
    msg.setSource(14565U);
    msg.setSourceEntity(7U);
    msg.setDestination(43816U);
    msg.setDestinationEntity(142U);
    msg.op = 31U;
    msg.goal_id.assign("JMMNATXROVUQLGUCTMDQDFATIPICEHTEWYOFSXWKHHQSLDTQFXCDFSCUPNQXDEVWYCCPFGVEFWYHVJBQKOQPXENHJZMUAVCDAMJPUKLULYKPBRBPXVWGMJIRRRZNPNVSNSLHARFWIFRRZJKKZAXKYBSDSTHGKMTZOGGGFXBYZRQUYSTEOMVBDQGCWJOXUOEDBLEMBVALNZIYSJFCEYUPVKECBZIAGAHHWHLZQILTWNIIWNOSZY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LJTZOXRXMPI");
    tmp_msg_0.predicate.assign("FBSYFHOLZZJSSNGTMDMAHXYRLWKENGQORBAVSKTCBWGCOHTPVLZDVKXMVPXSULSKTLLVCHSXQWLHUCAJKFIWPQGEZPRNKMDFZPIHGCGABFYKWZYFXBETQYCYEECOWLJXHJQVEDPTWNUNPQAMKEQWAVQRJJVYDAUEZRTROXMNBXIRZDSFUZHWRDMNCYDOPRFATHUNUEOBJMPQSJPB");
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
    msg.setTimeStamp(0.18709810796037463);
    msg.setSource(41669U);
    msg.setSourceEntity(231U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(147U);
    msg.op = 242U;
    msg.goal_id.assign("HXVVIIUXSDQSKJWVFRBKLPVDETJHCWEBFBEQVBTBGHZIDMUWNCDRCFOJPQJYGNRZNUAIJAGIUMGKNCOT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QCCSPTKYLDNOFEJEACFJVUGLCMNDQTAXUDYDAMWEJWTNTMVURHDPYEXEFLXSZEIBIXLNZZGLHQIUVWBGYDUSZGMMOKVPZBKCXYBNTMTWQWOAZQPXFYOXKM");
    tmp_msg_0.predicate.assign("KFFZROQXHXDKMDHTRQOFGFHLXWKNDLCUVZSJPZSYRIUNEWGCTCFNYLIGMOMMCIL");
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
    msg.setTimeStamp(0.40433194067886224);
    msg.setSource(11586U);
    msg.setSourceEntity(181U);
    msg.setDestination(63856U);
    msg.setDestinationEntity(23U);
    msg.op = 88U;
    msg.goal_id.assign("CCMGWIEXBUB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OCCIWGIDKTMHKQTPHMGUYYXWHMVHUJVAYOLNARLIQLBNJSUGDRXKREDQTKFBXVSNXZQSMPFREADCICFAWHRKTOJTMHFLPJWZBUWHOYADPOLXMFQETOLUEQDGSSBEYGVIXZEAOXCLIKZFPMZGIKCWJZWWPAFBGYZDTNRZQZOJAMOUEFRKVGJPRNTXDYUKTBWODUNBJSIPYFYIACL");
    tmp_msg_0.predicate.assign("MDGABUFNWWITMWXHGLHBJPTMNREBNBZLYIFANKWXQJMNOHGLLKOAPJWKESSOEIFDCGBHJTWCIHXNRVFDYPYZETYLMRDQKMFKKALYKRCPYDDJGJTVPAWDZFZJSUDUUUPFXSMGHQISTKNJAUGVQUFEEOZLHPRFN");
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
    msg.setTimeStamp(0.2633400090446374);
    msg.setSource(21054U);
    msg.setSourceEntity(76U);
    msg.setDestination(16242U);
    msg.setDestinationEntity(216U);
    msg.name.assign("XGPJASBPOBUAUDKALSHTHITUKYFMKLGZYDRVZKPQSXANTWCICWLFWFJYQVYHZNULJJVENUDZFGLRQJNKTPDFWRBONBIQAWCXHISIIXOXEQEDPCCJOPZCMXTMNHLBYOM");
    msg.attr_type = 234U;
    msg.min.assign("RZIPKGOLGFCLBAOFWDWHVKCZDZKIPDNEVLLKRIBNHKQLSOLLCIQFEZRJQQPFXMAZEUTUPCFIXTUGVMOBWPMCBRSKJOUNFAMYYVGUSUIXURBEQXKYZNEIMTXSGJWJOMYYBRFGXSPPNJMWCAYXLMQIGVDODTNBNRWGZYGQDDRQULCABYUEJMCVBXAPLHFSFTPUEAWNXWTSCJDHJCDHIWZDORZHMHQSEASPEIVFAAVEKXBNYKVHGTKNJHORTOTQZ");
    msg.max.assign("YZFPKYNZWZSGXJWACIFIVPGXMATPNEHJFALCBECVJVRRLVMHIVUEZSVHURHTCCUBMYWWASZNVQBCJKQNMKWIWTFCHSOLXTEWKABEZUF");

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
    msg.setTimeStamp(0.6356697632507939);
    msg.setSource(59379U);
    msg.setSourceEntity(168U);
    msg.setDestination(64095U);
    msg.setDestinationEntity(137U);
    msg.name.assign("JQVSTAEEUNJTZXBASKCFLUOULKXPNMOTIYZXAQTIVGAXIRKWKNERKCCHMHEIMLOKBDNFHSLJZPZKNLADYVARGZXCUPXQOOGENHIDPOLRSBQWCFHYOXTYWMRABPJDLVYFECBMNBOHPGDFGZMWCOCZTXRXEFIMYBHJTFYSSPFSTGTUMVVWELAWIFCYSU");
    msg.attr_type = 174U;
    msg.min.assign("RUPYEOABYKAUFHEUSLWROPJIUXZHQCWWJEIXQDBQYDVMKUVLQYXRBNYPFCGGJUDCFXQZM");
    msg.max.assign("FHCCJBDGNTFQJRUXPAJBMNNKTULUSWFHDBUHSACTMXBGSUQ");

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
    msg.setTimeStamp(0.6473430080577748);
    msg.setSource(26925U);
    msg.setSourceEntity(214U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(143U);
    msg.name.assign("FWBMCNXZGSAWVAOHEUPPLJYJLGDBASIGAHHJGAJAEZYFTWSSNZQMRNOZUMUKPKNQXFRLLGOKEENOMFHQGUPALBBIOSVSDONYMYFDHMXRSYQRZUTWXYIJ");
    msg.attr_type = 105U;
    msg.min.assign("VTOHQHYPMTXCLNFJAQWIPTUDUKLIRRIWQMLJRZGYLTMETBXPYMRICAHFSTIFXUSUBMUKEGGWVO");
    msg.max.assign("SYPMWEFRCRVFYFRZBPANDRGKNOKFHCJVHDQEMCILXZDXEUGGJREXYJRYFUSWHQAVAUINWWSYGTKEZLRBQDDOZENOSBTPXBAVWRUDZVPUJKWKFLZXMCOPLQBSHIZJHLRXBGOQPCQFDGJHUAUZYPXIYNIOYCLWJLUJDMSGBOTPKBBPQCTFRHDAKCIVUI");

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
    msg.setTimeStamp(0.2503011705613225);
    msg.setSource(9370U);
    msg.setSourceEntity(51U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(24U);
    msg.timeline.assign("POTSSRRQMLERTQBJNOFTEGQUHLQWYQYBMUCJGPOLXWSGCLDVEHC");
    msg.predicate.assign("NEUERFHOGUOJNSGXLZAIPFGEXTSXWAVCWKLZSKYLTYIIBTBEEPDGEXGPCHBRAOPJAVNDRJPGILNBVDPHZDNLCWYKZUFFYTHDSHAHVXTLBQCNORPOZXUCXOKQUUWKAVZEPJHWLBAVJMSTIGBVA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CSNTFFUMFAXWXLZXGGGOBTLJXNZFDPKUAVDQUTGRTTKSRAXNLKFTOLLKJUWRVICROBDSMKVBZMUIKNCWZPHTESMEPBMOLSEUJWQEQEWQYLPNJAUWMWHSNXXZAPDOBJICCLQIHIJBFLBNARYUXIPPCZVGFGPDXZYEHWEFFYOBAVXDYRMPBJKQRYNQAQMJUHODBOVIKOHKUWWNFDRECVCTH");
    tmp_msg_0.attr_type = 80U;
    tmp_msg_0.min.assign("SQURZRXTPIDELTRCANACLKWORFUSETMKOYKVBXSHLGLAGORIFVJYCDZWOPLDTEANPJKRUUEBZJYFNQGXOGZICJTBEOBPPFDSGLF");
    tmp_msg_0.max.assign("NLWMDGSQHSXMPDAWYDTIIMJKHFGMXHGXQIBVJX");
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
    msg.setTimeStamp(0.5273430856549872);
    msg.setSource(47824U);
    msg.setSourceEntity(9U);
    msg.setDestination(44978U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("XIXZKRFOUSDLZRKYKOPGXI");
    msg.predicate.assign("FPRJNSUFWCSMWLIIHQLFJQQSSRMOTCCMRGFDAKDOUDTMZYHEJVUEAYDXXXJNYNIXHSVBLCBNUTNALKRVZSRUKIJAZJIPGGKFGAFTNHHDVCUZYOHMGZKFBHITTIXYMMLLPOTAP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZDEXXTIMHUGYANDUSFTBQJPSJYTSSXEOVNJVOIRFFUINFWWLEMPBNPNNNQZJFUWODMMBMFGAQNHRGGBEBLIKBHQCBTHGKYRDEXSZBQPFGHGWSRGIHLJPNAOIARKYOMXAMOPEVUDVUVLEKZWYYDKPCPGGLERVCAYTAAUXRVSKOADQFXRUQUZHATTTOYJVKQKHCJHXVBMKLXWKDVWRCOICNSLQJWJZCDTPCCXELIIYUWPDZISMJLCOLEZZ");
    tmp_msg_0.attr_type = 109U;
    tmp_msg_0.min.assign("PZVVUKCAERBMCNJZEDXFQWNYHTBUIHWVJUZYVTCGAQDOOCJXCDNIBQWQINNZSZBKDYSMXMOUAJLYDNSZYLWMOGKWPLQPOZFADEWXQSHRXGKFNRTKJTMSLHOKWRNISEIOPLEM");
    tmp_msg_0.max.assign("UZJTMEUMATQIILAJYTTXUQSNGTRLLJHAPSJIJHSVXRUDNSNZWPLYNENVSHCTTROJNEWDWLBAFXGKBXWSCOEGCECLHO");
    msg.attributes.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.17474501896563377);
    msg.setSource(24825U);
    msg.setSourceEntity(29U);
    msg.setDestination(21266U);
    msg.setDestinationEntity(210U);
    msg.timeline.assign("OLWUEQHHOLBTEUSBPZMMSTRKYPNDTHKADEWFYQDBMSHZMVGBRQONUXWZUDZEAAWCZRLAYPMXFLFEQQBQXPZGLHXDJTNNCALFLQHTKXSHIINYFJMTTRPTVIFDRGZCEGJWBMCOPQBNJJICQDFRKWKFRIJEVFNOCUZLMTGEXWJKVBVPMLAFAIUWSRYAKDCHUIYBEUSVCGVAUYSGUSJDDOHXNNWJAOMVZO");
    msg.predicate.assign("DFZYEISYCJBSWMOTROCXFRVBDHRKTXUHKBCAWOZSTMRVEAWHSOZXYSRXFFZCQDKCEPLYWNFEROJZXBWTEZPNSTPRAABRFXJALPJRGVPYWNEGBKCLVSDQCNMHXDKTQLCAQUARUTLTL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("YTIFUCXLITYJWHXIOKDWMGYDCSIQJQTRAHMJJMZIWEHOZJWXPKTRBNZNZUCGZSOBPLYZSADEDQQNGAMOFUCVOYMWXNBXEAVZHORIRQFOKIGMCLAOKQMLHDUCNKTNBVEJQPEZJJKXXUFDUXCEWAPFFWBRRGWGPSHVKEZHLPESASDPTVXFLG");
    tmp_msg_0.attr_type = 233U;
    tmp_msg_0.min.assign("KWMMNYTENVIFUEQNLZHCYTWBMNMKZMDWQTPOWQUFHCJOLRHRGJXROYKTBVSWNPMNQAHSRCDSDNOTOCYYQIGEIGUTCKAALXXJJQGAGLFOCIRQYLEWBBQFKDXGJEVBGYSPPTGFWNTVPFSXOIHJUKHOBTPAYNHJZVFMDFCSXDVWSZIDUBNYUDSGVLAJRAXRVUE");
    tmp_msg_0.max.assign("NOQHKBEOKWAWYZYRIGDDFPTKTFKFMJ");
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
    msg.setTimeStamp(0.6614257321465309);
    msg.setSource(14665U);
    msg.setSourceEntity(165U);
    msg.setDestination(5255U);
    msg.setDestinationEntity(203U);
    msg.reactor.assign("YGEBJXGGFAPWSKXUOQSDKWGKKHVYUISBYYONSLXZCSEHNCZEDYHXPAEIOWBIEYMDQDOPGYITBIYTCJHZAJZGJALDJEWVXNWKQALBOXHIVIBMBNRGMASFOQMVRRAWCRLUPLMUBBLLCJSPKRTPPLZOZSFFRQDWRCDJGTVKQUYLCUMTCHDBVOTLHVDSAQZCERXQZHNSMAMEOJZVNGFXZUDENKVRPXHPWHGWMUUOTVIFFJNWNFQKFJIIQRTTCMEFP");

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
    msg.setTimeStamp(0.454370034598389);
    msg.setSource(18582U);
    msg.setSourceEntity(192U);
    msg.setDestination(20846U);
    msg.setDestinationEntity(166U);
    msg.reactor.assign("YQJSBTYIILQORTIXWNGMPEBRBPIGDAUFYWDPXTUCGWUAWEAQQPVXHMFFZSHXDYSYSZZETPBVNWMDHDMHCLPNBIMRHVWAWKCVRRWLAZJFFRRQXPUR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BOQIGDPXHENZBBJQUUBSZSIAVIOWACDFTOOPXHZVQKFLWWIEJPPLXHYWZRMRQFRYPHSFKEBBSGPRWRZSBZPSHJAMNBVQGYAYYQCLQGLIENDSAREMBWOAJLFSCMKTJYRYUCODOCTDPJXMIVJDEXVHSCGXGTCMHNJZDYVHFKPZJOUZGEQZBFTTWULFWVNLMMCKGRAHIFLNXGAJMNVNAGDUQXWHKTS");
    tmp_msg_0.predicate.assign("WXDEZUMYRHEWAINEDMJHKJIODMCGIMSQYPBYELWLGSOBPWQPXVSKTZSMRVVZGOWGJAYMVTHVGBXFCEFHDDMFJCQYKTETTLIKYMIXRETHSRENDBKJVXKZLNYOTDKBCNPQHJGLNCAUOHDSIQFLVOCAZPWUATAPBQOMBDAZKVURCOYQFJPIKZNCUBJUXQIHBIVLEGSNOQBNGFRFIHNDYRFXLQRG");
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
    msg.setTimeStamp(0.8137731088896333);
    msg.setSource(52713U);
    msg.setSourceEntity(99U);
    msg.setDestination(33648U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("KAENVJYRMXCNFKHFFDIQPOUERPAEJECCZXJUMLWTLEMWKCOQYLXVFNAZJVWMPDDTHTQPRRXAKWVFNTJENQNICIDJUVVQMDKORGDPZVBTZCXCPUYOTROLXYRSJWTBQTWTVZBKZQYUWSBQRDYBGDXHSYCXSFGZJOAGUAIYDABMFCIBSFLULIQFHIEGOPSCMVHSPHLZMFUHOLIBGYKJMPWNPS");

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
    msg.setTimeStamp(0.7467092404013886);
    msg.setSource(22933U);
    msg.setSourceEntity(9U);
    msg.setDestination(56791U);
    msg.setDestinationEntity(197U);
    msg.topic.assign("VGMZTANVNBJYPKBCXQNMASVTQRYBPFIUYGRQJJLZCMHHDXMROXVTGFPX");
    msg.data.assign("AYDNQQNFITIURXVLAZQQVOPWCLOWRYLNZTJDMXKJCPERBOHZWBIUMNYFNTOBIRUTIJDFHBHCGERWXXACCVYTGMOCFJTWVDGJZCAHUCKQUQZSYUZPQMKHSPBSZXOEALPASRTODVSKHJEEBVKGNYXLMMMBGMOKVUJTPHPCUARFKEDGLYSZXRWDYXSKSNUZJDERGFAYNBEIKWWPGPVVFQFHLNZILLXBFIGOAMJDEAYKNHHPQMGFSURJLBWQXWTSDV");

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
    msg.setTimeStamp(0.24448332845046827);
    msg.setSource(17185U);
    msg.setSourceEntity(254U);
    msg.setDestination(37607U);
    msg.setDestinationEntity(211U);
    msg.topic.assign("WBBQNUHXNJJLVHHMWLZRADOAPIHBVIKUYUUBJEWESNIFTHDKEWZCYQUSFXRDQOGOGQMVAZKWFAMQYZLPABARTKHICOXSCPLJDSJNSOFLZMDMLBDAZECLPAXOIGVXQCCTHUENYIUFABDTHYUXKGJTALQREVSXKECSN");
    msg.data.assign("PBZAVQMVWXXSSWDRYRMGOIJMVFCCFNWLCVLHQADFSYJYOKAIFCNFZVZZEXHEJODOWQPVRAWKMGEUHSUHACYKXYHTHKBQZFMMKLLBXUYJARRJZBTCTPPGYMVRRNQXFTQWJVGTYOINIGQHQOHSZGNGCOSGLKENWPLOVITNJSIQDNLPWPOXHULBDUJBEDITOMKZXLBAIDGCSADUUFERWDWVPBPJUAYSCUAMFSTP");

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
    msg.setTimeStamp(0.11221725023705076);
    msg.setSource(11996U);
    msg.setSourceEntity(123U);
    msg.setDestination(63131U);
    msg.setDestinationEntity(17U);
    msg.topic.assign("ETFIMRQXTAZWKUZCHFAITCUMSZQPZKGVHFVMSBYXXORLPIVJQNOXZKRAZHQCCHAHVIBINGQMAAPNXOLDLMNHBIVKEYKZBTCNJRBCRRGNDALCGODTJJNQUCTWVJWYWUVOPHFYFJYEI");
    msg.data.assign("HLKUOPZZYTDKPPYLPXKZUJBIBPHGRRBUFLFBPRQCYUYEUJXOONTMLXGEWSLEKKYIOANKVWHLHELWXDCSTJDMADXZCQCJZWHJQXDWCFZMUMHTVZGAUUDSYEIGJXDAMDYKAQEQWBPBTQWLVQNRZMJUHNBHJCESEFMTTVFAUVIYXDTPVTNISZPORWZIIFKGREWKVOGEONBSVHBRPIQ");

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
    msg.setTimeStamp(0.5850223309283646);
    msg.setSource(14812U);
    msg.setSourceEntity(62U);
    msg.setDestination(7168U);
    msg.setDestinationEntity(156U);
    msg.frameid = 206U;
    const signed char tmp_msg_0[] = {23, -39, -13, 117, 71, 75, 2, -71, 103, -81, -123, -53, 114, 96, 13, 30, 32, 16, 25, -7, 93, -87, -71, 108, 55, -96, -70, 58, 111, -75, -86, -107, 39, 78, -20, -55, -96, -3, 32, 65, -80, 1, -3, -82, -69, 57, 87, 36, 62, -11, 105, -111, 79, 67, 37, 96, 98, 7, 29, -55, -65, -94, -34, -97, 124, 96, 100, -104, 31, 88, -4, -70, -101, -11, -5, -87, -23, 13, 93, -28, -63, -92, 38, -36, 48, -99, 95, -29, -100, -106, 68, -112, 51, -13, 120, -38, 31, -74, 83, -80, 87, 108, 43, 108, -47, 120, 70, -78, 94, -94, -51, -47, 26, 69, 39, -1, 111, 13, 37, -106, -124, 115, 124, 13, -113, -126, 124, -32, 121, -59, -57, 42, -50, -98, 119, -87, 94, -109, -62, -54, 77, 76, 70, 4, -107, -28, -109, -47, 79, 40, 34, -67, -94, 87, -12, 42, -91, 88, -122, 1, -1, 52, -118, -111, 45, -18, -104};
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
    msg.setTimeStamp(0.5459857816706196);
    msg.setSource(27722U);
    msg.setSourceEntity(129U);
    msg.setDestination(18170U);
    msg.setDestinationEntity(163U);
    msg.frameid = 197U;
    const signed char tmp_msg_0[] = {24, -23, -95, -89, 9, 96, -36, -85, -5, 81, -29, 90, -7, 58, -81, 52, 64, 40, 21, -79, -40, -15, 74, 59, -94, -122, 116, 100, 51, -11, 109, -111, -2, 81, 82, 4, -107, -49, -66, 42, -120, -23, -7, 69, 55, -78, 57, 4, -54, 31, 86, -64, -98, 54, 25, 102, 79, -52, 17, 6, -3, 32, 48, 121, -99, 42, -104, 38, -8, -29, -65, 35, 67, -128, 98, -44, -69, 70, -19, 112, 27, -110, -34, 49, 94, -103, 82, -91, 10, -39, 22, -84, 3, -35, 98, 115, 124, 97, -104, -90, -116, -45, 1, -120, -66, 85, 111, 10, -118, -123, -122, 39, -1, 122, -60, 74, -70, 100, -128, 68, 100, 18, 52, -19, -66, -101, -39, 19, 67, -10, -35, -90, 110, -3, 77, 37, -98, 67, -43, -83, 106, -40, -123, 17, 121, -33, -6, -86, -72, -18, -125, 96, -33, -91, -121, 96, 22, 51, -39, 101, 65, -9, -67, 42, -101, -89, -84, 43, 20, 100, 63, -94, -21, -94, -3, 44, -93, -58, 76, -37, 39, 27, -107, 114, 125, -87, -78, 13, 4, 60, 111, -46, -54, -94, -67, 25, 98, 38, 26, -14, 40, -47, 19, -15, 105, -9, -113, -87, 23, -72, 54, 68, 33, -125, 109, 1, -2, -117, 66, -61, -37, -11, 64, -65, -102, -61, -29, -87, 44, 122, 26, -5, -117, -113, -101, -102, -22, 75, 24, 89};
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
    msg.setTimeStamp(0.4206733527782588);
    msg.setSource(25762U);
    msg.setSourceEntity(63U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(52U);
    msg.frameid = 174U;
    const signed char tmp_msg_0[] = {-53, -98, 108, 114, -118, 25, 85, 68, 83, -115, -56, 64, -93, 49, 65, -66, 48, 3, 96, 125, 15, 64, 20, 125, -86, 98, 78, 111, -27, -128, 20, 29, -111, -70, -124, -63, -22, 57, 16, 7, -71, 122, 74, -106, -128, -60, -66, 108, 122, -106, 43, 107, 94, 33, 72, 93, 22, 63, -47, 17, -84, -48};
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
    msg.setTimeStamp(0.3852203406553374);
    msg.setSource(683U);
    msg.setSourceEntity(208U);
    msg.setDestination(63039U);
    msg.setDestinationEntity(142U);
    msg.fps = 246U;
    msg.quality = 2U;
    msg.reps = 94U;
    msg.tsize = 11U;

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
    msg.setTimeStamp(0.8230932664288771);
    msg.setSource(38162U);
    msg.setSourceEntity(213U);
    msg.setDestination(35134U);
    msg.setDestinationEntity(6U);
    msg.fps = 211U;
    msg.quality = 175U;
    msg.reps = 106U;
    msg.tsize = 51U;

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
    msg.setTimeStamp(0.8510249865378148);
    msg.setSource(15197U);
    msg.setSourceEntity(96U);
    msg.setDestination(522U);
    msg.setDestinationEntity(48U);
    msg.fps = 81U;
    msg.quality = 240U;
    msg.reps = 43U;
    msg.tsize = 95U;

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
    msg.setTimeStamp(0.106486654630917);
    msg.setSource(17711U);
    msg.setSourceEntity(39U);
    msg.setDestination(3445U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.3786678980932633;
    msg.lon = 0.40811745642272645;
    msg.depth = 165U;
    msg.speed = 0.07469408576659498;
    msg.psi = 0.1016485250055007;

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
    msg.setTimeStamp(0.1471297766284898);
    msg.setSource(62799U);
    msg.setSourceEntity(186U);
    msg.setDestination(64058U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.804820267519458;
    msg.lon = 0.2102533524737067;
    msg.depth = 117U;
    msg.speed = 0.2840112995227404;
    msg.psi = 0.8737225273089559;

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
    msg.setTimeStamp(0.3463055239044285);
    msg.setSource(19709U);
    msg.setSourceEntity(37U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.8354566408601335;
    msg.lon = 0.5931130469130431;
    msg.depth = 168U;
    msg.speed = 0.12348634894822297;
    msg.psi = 0.5161634101056944;

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
    msg.setTimeStamp(0.7773222793968931);
    msg.setSource(38886U);
    msg.setSourceEntity(80U);
    msg.setDestination(46855U);
    msg.setDestinationEntity(163U);
    msg.label.assign("NLOALPMYFHNJUBIYAUGWXQYCQTINUSPANNSQDWWGEBUBDTTVAGOWVHUVRWEQBWYXBBZGMWUFRRSZYXBNOGEMMCPLOKSFEKJIPLSXVMJCVKLYFVDBDFRHSOENTRXXNTTHHDBCZCONFIKLJKTM");
    msg.lat = 0.9806012011448969;
    msg.lon = 0.8536171076952827;
    msg.z = 0.79073687178597;
    msg.z_units = 68U;
    msg.cog = 0.13595756165964046;
    msg.sog = 0.0178826282769442;

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
    msg.setTimeStamp(0.8994869342891769);
    msg.setSource(31372U);
    msg.setSourceEntity(35U);
    msg.setDestination(405U);
    msg.setDestinationEntity(221U);
    msg.label.assign("PMHKESALAUXDBZZZNHWYUBTOGVUCMCKJZXPJTSMAPTEEBAOIIXSUQHUCBBIIODO");
    msg.lat = 0.4853286083448448;
    msg.lon = 0.5015584856277608;
    msg.z = 0.3769781354705952;
    msg.z_units = 214U;
    msg.cog = 0.524092607835027;
    msg.sog = 0.9033880108812388;

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
    msg.setTimeStamp(0.05581809015047212);
    msg.setSource(49668U);
    msg.setSourceEntity(146U);
    msg.setDestination(64299U);
    msg.setDestinationEntity(10U);
    msg.label.assign("TXYKFNZPWWPOAGRTPBMJDCOSHHWSZELIQJLFJWMGWRKBNFZXZLUCIHSVSFPEIEMSAWAZBYDLSGQJVABBIAOILXDTUUCSC");
    msg.lat = 0.4557923731023077;
    msg.lon = 0.8056905732458037;
    msg.z = 0.04565536063966369;
    msg.z_units = 158U;
    msg.cog = 0.19998226539993802;
    msg.sog = 0.13550845947402124;

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
    msg.setTimeStamp(0.10331852279191789);
    msg.setSource(18324U);
    msg.setSourceEntity(20U);
    msg.setDestination(22630U);
    msg.setDestinationEntity(58U);
    msg.name.assign("GPRGRBXEAMTVDTEASMDHTEASORKZYICZUXEYCMHCBURYVUWRXOXOWTEAYPHFUXNROZNL");
    msg.value.assign("DQWLQFBOYIEVVRVIXZWUAOAPMIXJTLQIPAMLXACRFYXKBKGDKBXCHPCOKVBTYTDLSQTDMHZNGYCHMOB");

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
    msg.setTimeStamp(0.25153898738941305);
    msg.setSource(32986U);
    msg.setSourceEntity(220U);
    msg.setDestination(38593U);
    msg.setDestinationEntity(21U);
    msg.name.assign("CAFIIKJCJFJAMP");
    msg.value.assign("NXFWCBKMAL");

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
    msg.setTimeStamp(0.18519614431673403);
    msg.setSource(43345U);
    msg.setSourceEntity(123U);
    msg.setDestination(17198U);
    msg.setDestinationEntity(169U);
    msg.name.assign("CAYHXZIRRLAXKJELNAJZFUMNTQHBOWTYRLINYPSMPJVQNESYGZQYEEARMGCZPFVUNKUEPKMMKHIXSUBSTEWIBUQJAJFNTDBDPRSFEVHBHYSDWCBIUYEGFZRMJGKTCZIXAFDZLBCDVJVGZDQMDGDZNHLJ");
    msg.value.assign("KMLSGTCJMCCWIEIEGSQEGCGTARHVXDQRDZZDUVYDTWSCEJIQFNSIXYFWRUBIEGVUKALLCWCTFPUKMLUWJOHCOVQFAHASJBXC");

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
    msg.setTimeStamp(0.4767734009863194);
    msg.setSource(47861U);
    msg.setSourceEntity(57U);
    msg.setDestination(57895U);
    msg.setDestinationEntity(215U);
    msg.name.assign("URABMUHRQZBUDOIYTSUNWLJLBOPKSFNTNYVUGESEOXTEKKLJJXQRHUIBSKPJHDDQKJRAFWLKYTHBGPLDNTQGMIFPLXCAJPXOKL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QLOTHJOFINMGXREJWITGTRYALNCMHZYZVY");
    tmp_msg_0.value.assign("ZEVIVNCODLUNXODVJLVFGTURADOZNBRBVBPBVQXNXROPIHSHZTIZSVGKBDHUILQTZFIPXBDMYUMXTGBUNHFNSVPAFYQUFQOZNKCSUOSJLY");
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
    msg.setTimeStamp(0.28430369839691716);
    msg.setSource(23555U);
    msg.setSourceEntity(12U);
    msg.setDestination(65434U);
    msg.setDestinationEntity(213U);
    msg.name.assign("RVNNBLNLWYGZPKFZIQTHVNHOBBFGPLVPJNSSSTMRAKQCZCNRYMGUDCJJDHFYOVDWBLZHIRJETZKEQDXCEITXEBLXGCFQITRIJIUMLKBIEIIGOANDEYURPQHXWTNACXCWHYAVVFMJMOMFVPQQUWJKLZU");

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
    msg.setTimeStamp(0.7365905836448162);
    msg.setSource(33655U);
    msg.setSourceEntity(23U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(212U);
    msg.name.assign("VWSQINXPSSCLKYIUOSNBPHHAEXBQOCWPCPMSNPQBMZBJDKDNZBDVFEDZTDZRPHGSBAMMOZQYHIRFAEJOZEDLMEJPVXGAPBXXCYWKDTKOWXOLUIATSKZMTAFMWLYOHLUFUVBUGQTEBRPJESTUKCCVFIHYMRFMRMWREFOVNGANLRFUKGXYRXQIJAHCRJYCEKPDWSGUDHGXTCLVIJHQDKTYYJVZVUNQWI");

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
    msg.setTimeStamp(0.12842418773875208);
    msg.setSource(64609U);
    msg.setSourceEntity(140U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(117U);
    msg.name.assign("OSUIFTYRBTPXFVKZNJEQIWW");
    msg.visibility.assign("VOZHJRKFOFFCRNNKUDWJEJLVLUAVSXCEMYYPZLYVAQQUNHPBGLZXFSOJMTXXFXZLHEXSYQSGZFEDWHUYXDDUMASGQZJXOWAIBXTVNQVBFIGWTDCLSZFQTRNWIBAEQOSAYZWRZEHENUTGCMNITPJKNMDHQSOLONJCEOKPKHTJKVPHBIURGMIKOSEJANUXLKRDCBDRTEUMSG");
    msg.scope.assign("MJWQFAIGSGBLRTPLAEECGRBLCYKNSKIUAKDVQSHFUTCIZUPGMBKVMOTASEVYZYLSXAFGNWQMZVJYRPKVAWCDWHQAMEVUGGPNBBWLQMNEZJKDSOOGUZJPKTCXISQRYIBHYPFIOTBCFXTRKKMYEESOCPWYDFGVXTLALRPXZNEFIJRDWHTDDTXMGLDIZMBNQNWOQFJLHQFHASOZDNHZYNHXRBYRUJJUTXXEPWCUPSVOAZKQVHLMIDIJOFRWXEJNCV");

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
    msg.setTimeStamp(0.632646115240588);
    msg.setSource(45316U);
    msg.setSourceEntity(14U);
    msg.setDestination(25084U);
    msg.setDestinationEntity(9U);
    msg.name.assign("FZNCJYASZIGXSQYZJOMYHWHXEYLWWRYEMGGFUJXCNIMTOEXGAMKTYFPWUKBMGXLFSNETRSFAAENKGIBNVRSCLELMWHAOVLBIYVZIKPFDIAU");
    msg.visibility.assign("MVMBOJYWZYGFFZHKUBRCCKOIEGVGKOGXHAVIGSLKRVVIDPZVTBCREPUPZSDRFFHWSSBNENRDHRWMXKWOIQLXUUORUCOXXYWBVNYGQFTMIJLJVDEJCIIILSFEJFLBTNCJMKPWHTUDDMAYYNAYMELZRITNMYCDUNATLYPDSWFSEDXQUSNGRQVEKTPAZMZAQUSQJDARHWKZUPZNEYTBWBCGXLTO");
    msg.scope.assign("BFTYCZOQXUVHHWKFYMRGWKQZKROXHFFNSMRPAECSZVLICAALQSXHBMHFOXVNDEDWDENIHTRQAYUMAVIXEXMWPXRRGRMUJUBFMPKMUYPPVYJCTITCEGKNNAISFUCADDHZVEAGDZKHISTTJKSWFLJDOJPJRLDOSNKOSGBGOWXUQVYCJPEVBOOCNTZBNBLXEGJYJBIALPBVFYBURQNWZUSTGFCQWWIGCDQSLDYIPOUXKVRAWHTQLENTIMGZMPZELJ");

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
    msg.setTimeStamp(0.616036868439695);
    msg.setSource(35671U);
    msg.setSourceEntity(116U);
    msg.setDestination(40027U);
    msg.setDestinationEntity(187U);
    msg.name.assign("OCKNXNIBCTWDPAGOHWWIGNPOLTMGGVXNRLQTRJTZCNKQYOOLUWMZKIRDFSSPFWLGSIPZQQIFZVTAEKCUWZHWJYJMDJEAHYVHOLXPDYMSAYJWLIZKHCRBBYFYONDXQCJMUUDORXFJEHPJIEVKUHPCQZQUSYFEYGHSBMUXRGPAJBTUCKLGBSDKDVXMBXLVLJNGPFCPNDUEUZKNFZBRVATKSQASOHWRXEYOARIBB");
    msg.visibility.assign("JELSAMPXKUZMPZFCMMLJSENEGTQBFUFSSPDALXXVTWPHBTLOYIXVEHUBUZHJOKJHRDKWSUGCRRZCFFGYPGRGZVGPSTWMNYZFBRXNJQIVOQLOCADDCVKVAASZAPWUFYBKEUGFJKBFTZQPVZOQXHII");
    msg.scope.assign("XYJAGHQUBLEQCNYZFGCHWJNKZFKNIWRWMXIYFHLZHVWDWSMZUOUBSTZTYQMCLSYPDESNVADLOCMEOQK");

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
    msg.setTimeStamp(0.8100321008286141);
    msg.setSource(25198U);
    msg.setSourceEntity(149U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(12U);
    msg.name.assign("QLMFJQELXQMKSJEVFQGCOAJGXSNMXZWINVRMJPQXBIPWCBZIBVUYVBZQAUTTABQX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TCNTPIKJYUWLOMADKATMQOUCPRMMTYRHXLRBLYGPVLDNRSYBHOTEJGCKBXSGYLOKCJUGSOZYWCVEBWFWMBATOWGLZBKQKVSOZELALJWHXMSFQNTQPAFIYDHIUCMM");
    tmp_msg_0.value.assign("ZPRQYOJLJFIIWEGMRFGKCPBSOSTAYNYKKQIWHDAUDQKYXEOOWGBHLRXRUWGFMGXLTTQPVSOQPIYDQWUVMKVANSRKMBFIQANTXCHDTUQLZQVPBZCVKVHNWFIHJVLYJRULCNLXNFPCZJAXOHUZVEGXUZNUADEYZODLEPCYEVBEJSPJBKGSQLNOGKAMBJWXCBROEZFDTNCMRXCZCDEIVFFGY");
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
    msg.setTimeStamp(0.030969267833830916);
    msg.setSource(51105U);
    msg.setSourceEntity(134U);
    msg.setDestination(43123U);
    msg.setDestinationEntity(230U);
    msg.name.assign("FOMFLXZPPAYBORHSV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YUVMSPPWOJATCIHIUVRINSANNYKZKVUIGWXGMHDGZCWMBCSLXEKKBZMTPYOYNQLCMAQNBETXPAQMBTSJXMCDJRWCDLAREHTQMWYFNBAOUNGZHJMKONBTSZPZXMDDLGDGBOZAVBQYESWHPXIY");
    tmp_msg_0.value.assign("ENLOBIVJDSAETFBIVWDIGYLYYOWOOFBWMKQDDLYMVDRGDTITPCLYDRPQYQUNNLFKLU");
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
    msg.setTimeStamp(0.8216575354401037);
    msg.setSource(37026U);
    msg.setSourceEntity(19U);
    msg.setDestination(32963U);
    msg.setDestinationEntity(36U);
    msg.name.assign("KGMRWBNZYBLVBJPIYQNLZYJOLGHWIDSBDNTNEWAGEHTSACJKQXWZNJXBVWNABBJKRMDDGZDEYWRJVOMMBSMDIDIGSZQNKYSHCPZTTPWNQHIFRUQREAPDLLUTKZCHQFVFQOFKQVGKXOYIMNCSSFRXTPRMIESULUKUAJNLJHBMHTZJFHICXOSGFAX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QJHSHJSEMUSLPPBHBYOWVBZBVTWKPTCGVYGHLABZNOJMITDYMALUWOFFRSAPLTQLEQZIGYVOZVGJRMXUWOTXQPQQACNKKQKJTPMKZURTELJALGAOFIOTZXAUHRMKQUVVUDMDYCKXRBRAMLSSBYFOCMKQDFLWIUNZYYTDIJGXEGNTJMNEPRNCFFIXPKIFFWQURSBGIPRDSGWPVXZFLVWDCNSNANOYCUXBGHDJAEIYHCWHJ");
    tmp_msg_0.value.assign("LKPEDEGFCPGUKEGFHHSKZCYKGJIQUVFUAFNLUXNGSLVAXUBRIYZEVNTBZUFMWDRYQXCJYQHSRMSPWTKCJBVYDSEQZLWFDIXLNPRCEKXLWIHBYAMGKHJKNIFOOPAJDJBMGHRWWHKFUAMRMTTRPOVCNAIYCACMTTSASHASGDZOQTCLTOLNDRQZLBABOYIXZZYVDVPPPWUPYMQQWUIIMBBOOXFXRRJQEZSNTKJOHGVTMXNBFDE");
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
    msg.setTimeStamp(0.8250282235652722);
    msg.setSource(48001U);
    msg.setSourceEntity(169U);
    msg.setDestination(14600U);
    msg.setDestinationEntity(137U);
    msg.name.assign("KYWBJGVFPMTJGAYTEFXTZUUCHQLLCXQAYWWVLSDYCREDIJPIIPIMMXRQHKNQDFOLRYTNBAXHJAXIZSSNWYOESMXENOMUZKKDBDMAVKZSIFDXJPMRUPAVGEKIGEQUCOLESBZABNXTTPTEWAWDDOHBAGOISVRJYVWYWBVCTZGNZSTRLQCPNDOIJBCNHCUMHPGFLKUACQDORZW");

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
    msg.setTimeStamp(0.30955969179347287);
    msg.setSource(58381U);
    msg.setSourceEntity(55U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(187U);
    msg.name.assign("BPCMFMBIIIKPCSNMTMHSLRYUCO");

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
    msg.setTimeStamp(0.5025799897204621);
    msg.setSource(59766U);
    msg.setSourceEntity(125U);
    msg.setDestination(11739U);
    msg.setDestinationEntity(238U);
    msg.name.assign("VGBXATKLEBYJJKLDEHGYWBYLBSHFOUYTOU");

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
    msg.setTimeStamp(0.1676711085460979);
    msg.setSource(22223U);
    msg.setSourceEntity(156U);
    msg.setDestination(60088U);
    msg.setDestinationEntity(161U);
    msg.timeout = 834752814U;

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
    msg.setTimeStamp(0.762767744382782);
    msg.setSource(9978U);
    msg.setSourceEntity(66U);
    msg.setDestination(42759U);
    msg.setDestinationEntity(234U);
    msg.timeout = 4287150008U;

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
    msg.setTimeStamp(0.9880241350907466);
    msg.setSource(23614U);
    msg.setSourceEntity(151U);
    msg.setDestination(44042U);
    msg.setDestinationEntity(50U);
    msg.timeout = 2596188464U;

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
    msg.setTimeStamp(0.11477097470980069);
    msg.setSource(35502U);
    msg.setSourceEntity(87U);
    msg.setDestination(38308U);
    msg.setDestinationEntity(220U);
    msg.sessid = 3672895566U;

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
    msg.setTimeStamp(0.16731073404881702);
    msg.setSource(43206U);
    msg.setSourceEntity(210U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(24U);
    msg.sessid = 2788962392U;

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
    msg.setTimeStamp(0.20071977249344264);
    msg.setSource(25388U);
    msg.setSourceEntity(219U);
    msg.setDestination(19354U);
    msg.setDestinationEntity(118U);
    msg.sessid = 868999462U;

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
    msg.setTimeStamp(0.42900028302589066);
    msg.setSource(5856U);
    msg.setSourceEntity(65U);
    msg.setDestination(13639U);
    msg.setDestinationEntity(164U);
    msg.sessid = 593240793U;
    msg.messages.assign("CQTRBZDYGYXCHRSTKIGLEVTSIXAXKXGTKUUPVNITCCBRMNUBHNPWNDMAPOVAFSTYJVBIGKBUHBBZVRAFRMYWKDAUDEQLICPMQDQCBPQSEHYGJOHOPNAOJFJRFJIESQDWBSNGSGWFJINJZCPFGJTRIHAKKGOTANKHPOGCVWQMNDXALLZXIEMPFFHVRDNCOQHMJEXURWLUWZQPVEEKTYOWMZQXIXBZUYDZLEZLKLROYV");

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
    msg.setTimeStamp(0.5106535123188133);
    msg.setSource(13905U);
    msg.setSourceEntity(60U);
    msg.setDestination(51463U);
    msg.setDestinationEntity(192U);
    msg.sessid = 1606657090U;
    msg.messages.assign("MDOTIAEMYVLDFRZNRYNPQZHXOXKZNVHGJAJSGHPEKPFVNYOXKJRCULOGTGBZHDHQYPSQNFQEQLCGQGTILWVHQOCBIIBIJRRJGOQTCEXBQGWEMXQVKUKKHAFACRYKSPOHGFZWYXJDUUESMNDPMYRFYMMCZNLTPOFCBGUKILLVBTNXRDSEVVLTWAUAMDPBUODBKDYEHARSN");

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
    msg.setTimeStamp(0.812905120864691);
    msg.setSource(22354U);
    msg.setSourceEntity(161U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(23U);
    msg.sessid = 661932231U;
    msg.messages.assign("IYJGIXMFRQZGKCCICGTJDITOLXBXNAZAFMCEICHEIOTWZIFRLJKBMTFRESMVVAVOBKMMVYRWPGELGSKATDSXMLQOHNIWLIMSBPRABFYUDQWHPGFNYFNUKEJOSJHSSRUPNTSVRHYJHZJUPKOLGFVEPJLWH");

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
    msg.setTimeStamp(0.4644366782863417);
    msg.setSource(9152U);
    msg.setSourceEntity(74U);
    msg.setDestination(47086U);
    msg.setDestinationEntity(87U);
    msg.sessid = 4222085987U;

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
    msg.setTimeStamp(0.7604572967542608);
    msg.setSource(18864U);
    msg.setSourceEntity(203U);
    msg.setDestination(2268U);
    msg.setDestinationEntity(107U);
    msg.sessid = 757899525U;

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
    msg.setTimeStamp(0.4111843142236302);
    msg.setSource(57263U);
    msg.setSourceEntity(8U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(146U);
    msg.sessid = 3129231939U;

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
    msg.setTimeStamp(0.7685270889644209);
    msg.setSource(42848U);
    msg.setSourceEntity(203U);
    msg.setDestination(16263U);
    msg.setDestinationEntity(140U);
    msg.sessid = 1155021423U;
    msg.status = 183U;

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
    msg.setTimeStamp(0.6973354234601863);
    msg.setSource(25237U);
    msg.setSourceEntity(84U);
    msg.setDestination(35560U);
    msg.setDestinationEntity(138U);
    msg.sessid = 127500570U;
    msg.status = 65U;

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
    msg.setTimeStamp(0.4977082828211036);
    msg.setSource(52701U);
    msg.setSourceEntity(166U);
    msg.setDestination(65207U);
    msg.setDestinationEntity(221U);
    msg.sessid = 3468446997U;
    msg.status = 150U;

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
    msg.setTimeStamp(0.08600172513521076);
    msg.setSource(52978U);
    msg.setSourceEntity(15U);
    msg.setDestination(49114U);
    msg.setDestinationEntity(183U);
    msg.name.assign("PNURPUSBVBBZNZEKKOTVCQVKTEFUMWTKPESRKIXMHCHFMIHSWCWMJZLQWJNPHLDCKLNBRGQFXGLWKIMLUMEDLGOLGXGTIDXCQLBJDNJZDUAQLUAOOGDCYKY");

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
    msg.setTimeStamp(0.8080668194981884);
    msg.setSource(57036U);
    msg.setSourceEntity(148U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(23U);
    msg.name.assign("FMNECMROXUCZYWKZCELIFUYJSJJSMQFIVXXRWUALENQGNHXDPOHRQMABQSBHACCYOCBTVZNOWZHAKPIBKYSVQQJGZDIUQGGKISPEUOJJKUKRX");

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
    msg.setTimeStamp(0.9434330849203107);
    msg.setSource(20528U);
    msg.setSourceEntity(42U);
    msg.setDestination(14547U);
    msg.setDestinationEntity(202U);
    msg.name.assign("FBZARBJRFQKQNNGSRXZCXOUAVTNVTHLSYDKWUAIRINWVPIRRVBGQPICOFKYCGTUYYVYGPNNRTETGCXXPHEJAUDCDBHMJEAJGLZHWULE");

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
    msg.setTimeStamp(0.3343523580569928);
    msg.setSource(7081U);
    msg.setSourceEntity(100U);
    msg.setDestination(42344U);
    msg.setDestinationEntity(59U);
    msg.name.assign("ZNUULLYVNCTYFXRJUOJVVIIBUWXTBZOUMWYUKFLMZMHGERTODMYYNHFFNOAZAWKUSPIBREATSCZWVEJHKLWSA");

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
    msg.setTimeStamp(0.5153513553142149);
    msg.setSource(49293U);
    msg.setSourceEntity(105U);
    msg.setDestination(142U);
    msg.setDestinationEntity(82U);
    msg.name.assign("WIRSUAOFUDMPFZTNWBQHFYSOXYBSRTUIHXHJVYZKTOALUOGMUJJQWCMAGKCSKNNNSQKFKVMWANSZTWOCOLEZLGRNFLQYTKRESEVEARUCSRXDHPMEKZGAPMPFCRJVGCIWBQPJICGKIRHTCDTPIOUJINZNFQWWYYYBHABEEWNSPEMYSILJQGZPMVTGTYQKFFVDLDXWCDCQAIHAARXVJDBZBOZGLZMMXODPUJI");

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
    msg.setTimeStamp(0.44128223791221377);
    msg.setSource(3575U);
    msg.setSourceEntity(193U);
    msg.setDestination(39625U);
    msg.setDestinationEntity(77U);
    msg.name.assign("XBHQTFAFVPLVHRUGLQZKNZHZUMBTRLJUXQYMKDIMBQDPXNYPFGXEOVKPLUMMNYRXVH");

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
    msg.setTimeStamp(0.2895471635389303);
    msg.setSource(45704U);
    msg.setSourceEntity(5U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(237U);
    msg.type = 12U;
    msg.error.assign("PQSBRUFSRXJRUIJNLGRH");

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
    msg.setTimeStamp(0.6814746842653318);
    msg.setSource(8335U);
    msg.setSourceEntity(182U);
    msg.setDestination(48280U);
    msg.setDestinationEntity(93U);
    msg.type = 146U;
    msg.error.assign("XJZUXPRSPESDRACBVDRTVRMUOMEOIGDJMFRSQHZJVNPDJAPZEEYBDRZOPCWEAHWYLITYUWWFBXYFZEZSZKOASILKMCWWUVZMNKBIQTAGSDCPPHXOJIVGTGFQNISRGFXAXOANQYTXULUOSEKLVKUICTUBVYMWELHJKBAGWKGZLXIEMMHGABLTROJB");

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
    msg.setTimeStamp(0.26229715076568194);
    msg.setSource(11279U);
    msg.setSourceEntity(40U);
    msg.setDestination(22738U);
    msg.setDestinationEntity(228U);
    msg.type = 27U;
    msg.error.assign("PRQIEMVVGUYXRQOJCUGWBHLLPJUGTYZDRDWLKXHCFRGBKDCDLWJDEUTSEAECUBAYIKQXZTXFSYBWNVWVKHNINBLPFRJKWDIFSUVMQKZNCEHHISFZAJHFOQGWJDILXEAOGYATOXHNYHQZKTAYWZBGMCIB");

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
    msg.setTimeStamp(0.3906133399399847);
    msg.setSource(13982U);
    msg.setSourceEntity(230U);
    msg.setDestination(25329U);
    msg.setDestinationEntity(165U);
    msg.seq = 3985U;
    msg.sys_dst.assign("SLDCMCQLSYQHDPVAJLZMVHIZWVRSNUNHQFDEEVXXCEXNSWRFUCUWOCFLMRCBTIVMQZRPJDPEDNYEHURRYAIRGKPWEIHZJOYVHQGIBUPLBGUVXXABQALEFIGMLMNDSJ");
    msg.flags = 250U;
    const signed char tmp_msg_0[] = {64, -114, 14, -93, 8, -119, 6, -69, 56, -92, -95, 55, 36, 41, -71, -47, 117, -60, -27, -111, -62, -4, -109, -43, -81, 99, -52, -75, 120, -51, -30, 105, -116, 123, -92, 18, -11, -71, 42, 72, 57, 115, 1, 92, -35, -44, -36, -93, -22, 5, 48, -112, -89, 115, -120, -98, 46, 87, 80, 33, 123, 25, 70, 78, 62, 54, -32, -71, 91, -120, 3, -121, -93, -100, 49, 3, -35, -1, 68, -13, 105, -80, -85, -98, 112, 73, 117, 1, 84, 28, -2, -67, -14, 66, 43, -18, 113, -31, -86, -114, -8, 77, -48, -112, -50, -43, 119, -43, -99, 103, -79, -101, 38, 85, 76, -118, 61, 47, -1, 114, 35, 35, -37, -106, -6, 22, 95, -1, 36, -31, 14, -56, 61, 35, -24, 39, -30, 31, -14, -79, 105, 123, -84, -37, -99, 9, -20, 112, 10, -121, 75, -67, 38, -67, -31, 80, 47, -44, -29, -115, -28, -102, 33, -2, -98, 57, 78, -30, -114, -124, 10, 116, 98, -73, 15, 116, 102, -53, 59, 106};
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
    msg.setTimeStamp(0.7291648314090682);
    msg.setSource(64851U);
    msg.setSourceEntity(183U);
    msg.setDestination(33468U);
    msg.setDestinationEntity(222U);
    msg.seq = 11236U;
    msg.sys_dst.assign("NOHIZIWIHRWLVFXBLZGGJRFKEGYLIPQURAAGSQGF");
    msg.flags = 217U;
    const signed char tmp_msg_0[] = {60, 79, -11, -22, -22, 52, 112, -6, 73, -63, 22, -63, 9, 44, 24, -52, -105, -39, 106, 47, -94, -66, 4, -83, 96, 46, -106, -110, -77, -81, -68, 126, 6, -123, 25, 18, 7, 30, -16, 78, -89, 109, -57, 22, -85, 55, 30, 118, -41, -53, 39, -45, 99, 95, -127, 91, 46, -43, 52, 93, 120, 89, 45, -125, -50, -54, 5, -63, 110, -113, -115, 83, -60, 47, -89, -74, -121, -72, -79, -76, 31, -12, -118, -99, 15, -96, -33, -113, 53, -6, 55, -47, -56, -49, -92, -71, -126, 29, 97, -8, 99, -48, 60, -62, 42, 121, -128, 26, 19, 96, -10, 38, -30, -93, -66, 124, -91, 25, 107, -72, -63, -89, -127, -121, 64, -85, 16, 96, -33, 100, 89, 109, -74, -28, 69, -13, 7, 0, 83, 121, 94, 97, 64, -41, 33, -38, 91, 26, 56, 98, 53, 54, -72, 62, 86, 6, -100, -12, -62, -65, 64, -51, -93, 74, 84, -67, -91, 78, -24, 74, -7, -1, 24, -76, -66, 41, -76, -87, 68, 51, -115, -97, 122, 2, 80, 103, 29, 117, 61, 46, -91, -58, 83, 73, -66, -9, 114, -106, -74, 25, -68, 110, 53, 26, 99, -92, -17, -88, -72, 54, 95, -68};
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
    msg.setTimeStamp(0.1312689248148209);
    msg.setSource(16818U);
    msg.setSourceEntity(115U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(176U);
    msg.seq = 49688U;
    msg.sys_dst.assign("WMWLWKFQNNKHWTXECETUPLGAEGZNIVYDADXFIIPVWQOKGBHGHRBWWJTQRDXVJGSOCLOAJUBEQATMYABUUTMCYPXKUGS");
    msg.flags = 147U;
    const signed char tmp_msg_0[] = {40, -30, 123, 109, 24, -67, 60, -44, -79, -51, 3, 122};
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
    msg.setTimeStamp(0.04342761537342932);
    msg.setSource(1458U);
    msg.setSourceEntity(101U);
    msg.setDestination(33629U);
    msg.setDestinationEntity(45U);
    msg.sys_src.assign("GXPYRSNQWIJLUPKZLWFNRYFDNJYKTXKOWIM");
    msg.sys_dst.assign("SFCEURCBRJCNLSAYTZPUITGLNYWTAXOLXJHCEZPAHUWUXCGCRIDKJJZSTWRISVCPBWMXKVPYBQDSSYMBWTFORNLYKNQUZLXVVUTFCAPJKFJLJNNESWAZWILIKWMISRQMLOFK");
    msg.flags = 238U;
    const signed char tmp_msg_0[] = {-86, -81, -24, 26, -108, -105, -123, -83, 11, -49, -19, 23, -84, -86, -69, -22, 40, -40, 107, 8, 12, -96, 54, -55, -84, 80, -58, -6, -67, -119, 120, 51, -43, 37, -27, -110, 17, 18, 1, -76, 12, 102, 93, -125, 125, 39, -38, -59, 20, -107, 18, -72, 34, -3, 119, 29, 63, 120, -84, 118, 36, 57, 49, 107, 43, -40, -25, -93, 122, -119, -69, -81, 45, 46, 94, 31, 66, 119, 51, -65, -122, 34, 110, -112, -101, -1, -116, 80, -76, 93, 5, -76, -81, 35, 13, -127, 67, -51, -67, -65, -106, -116, -38, -16, -13, -122, 112, 46, -47, 118, 10, -15, 125, -79, 75, 61, 37, 9, -17, -17, -16, 69, -128, -105, 43, -90, 103, 2, -124, -41, -80, 92, -86, -45, 81, 17, 2, 96, -116, 27, 73, 91, 51, -62, 92, -30, -87, -112, 80, -77, 116};
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
    msg.setTimeStamp(0.18025764796704935);
    msg.setSource(3073U);
    msg.setSourceEntity(102U);
    msg.setDestination(49937U);
    msg.setDestinationEntity(43U);
    msg.sys_src.assign("CXDIRCDRDKFTVAEPWOIQHHNZFVZXFBLXQFPOUCLYBJRVPGPEKBZEVXMAMDSVYDWSZYUQSUNZNDUUXEXGBTLJEJFEBHGVKPFUMFCRTDOQEKWNNAOMILOUVINYNGSCIBWOKTNLIEGKGIMNJALQTPYHSAOWDJSUSACPYGXTMOZCUHSMZAQTBVKJEKGDPWCBYAOMJYLZHRJHBKWGFGRCULRE");
    msg.sys_dst.assign("DUZHMZEMJCFEAHTRUNVMXPBS");
    msg.flags = 210U;
    const signed char tmp_msg_0[] = {-58, -70, -111, -104, -34, 108, -28, -27, 7, 36, 110, -80, -97, -63, 104, -34, -54, -38, -106, 101, 47, 80, -37, 69, -88, 26, 58, 31, 3, 94, 3, 26, 110, -35, 53, 33, -9, 103, 1, 0, 12, -102, -36, -87, -54, 74, -34, -37, -20, 119, -94, -36, 57, 6, -89, 40, 115, 0, 47, -8, -126, 100, 66, 110, -27, -58, -47, 69, 39, 6, 123, 95, -116, 40, 126, 11, -126, 17, -26, -12, -111, 92, -98, 26, 34, -70, 107, 123, 37, -90, -55, -88, -2, -77, -14, -87, 27, 17, 59, 27, -76, 68, -15, 41, 89, 16, 80, 64, 126, -63, 43, -87, -64, 50, -24, 124, 14, 2, -87, -29, 45, -74, 116, -116, -33, 74, -87, -29, -68, 111, -45, -118, 87, 53, 40, -117, 17, -102, 29, -33, 9, 103, 102, -95, -124, 65, -7, 9, 68, -17, 91, 112, 60, 113, 100, -61, -27, -26, 92, 56, 45, -108, -7, 4, 114, -122, 121, -43, -65, 89, -119, -55, -32, 12, 27, 102, -105, 17, 90, 87, 10, -92, 8, 64, -54, -62, 78, 111, 61, 42, -82, 57, -2, -80, 102, -81, 117, -50, -48, 64, 25, 59, -41, -30, 17, -109, -61, 10, -10, -49, 116, 70, -110, 97, -121, -4, 1, 110, 91, 9, 104, 22, 119, -51, 108, 49};
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
    msg.setTimeStamp(0.28529542155530463);
    msg.setSource(47455U);
    msg.setSourceEntity(34U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(187U);
    msg.sys_src.assign("XDXBVMRSNVHNGZCNCLTIOKBNACHRAIQLVLYHKWQDWTLRNTHCVYAHORKJERXKWMBHEVJPTSZQLYFFLYOMEDIZDMKHGSZSLDODUUEBGWXFEBWG");
    msg.sys_dst.assign("RSTNGTNZLVMCRWNSFSTCQYADAQUTAIYZOBHHKKOFACQXOEXPWJRFGSESPUJWCJYLBEPVZCQCFPPAZPPNPZVLWKBTQOHDURVQZNGBMYXWIIDFXYDMDLUHAZLNZHYNGBCEMXJODWKXVECKMVMGORXLAQRGJRDINBOMAOFBIGNUXIRHSBMWDCGPSWTBRWKHXLHQUEJUHMKCUZKXT");
    msg.flags = 119U;
    const signed char tmp_msg_0[] = {84, -33, -49, -26, 13, 124, 1, 71, 51, -16, 0, 105, 61, 76, -2, -43, -99, 31, 87, 7, 24, 30, 107, -35, 125, -18, -106, 123, -55, -50, 65, 11, 68, 107, -85, 14, -104, -1, -123, 10, -72, -124, 63, 16, 90, 77, 113, 92, -41, -110, -46, 40, 54, 102, 71, -4, -96, 22, -30, -76, 9, 96, -32, -21, 86, -67, 16, -47, -76, -21, -53};
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
    msg.setTimeStamp(0.12114846712706717);
    msg.setSource(29363U);
    msg.setSourceEntity(115U);
    msg.setDestination(53765U);
    msg.setDestinationEntity(117U);
    msg.seq = 51437U;
    msg.value = 104U;
    msg.error.assign("ZIGSYGTCILOVACNVSGLFOMRFUYNCBCKSMFBHJHNIXDG");

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
    msg.setTimeStamp(0.7112461910406953);
    msg.setSource(49906U);
    msg.setSourceEntity(219U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(114U);
    msg.seq = 54203U;
    msg.value = 44U;
    msg.error.assign("VKOYMDCXABQUKLGCHVYVOVGHSNKAIRIJIOXCWZLTSSWSKZEBQPBUJGZOZFNZJVGPHWPPNTDTZYBDLMREJQGUAJXQUWQYMYNTTSWONFJAQCNLMSVUGKUUBZDUADHYQEOQJEGJZHAPGDHWASRM");

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
    msg.setTimeStamp(0.6567175633500529);
    msg.setSource(29222U);
    msg.setSourceEntity(37U);
    msg.setDestination(46875U);
    msg.setDestinationEntity(56U);
    msg.seq = 60596U;
    msg.value = 175U;
    msg.error.assign("TXMJTZNCYOREIPXHXP");

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
    msg.setTimeStamp(0.7142429743991059);
    msg.setSource(14148U);
    msg.setSourceEntity(87U);
    msg.setDestination(4349U);
    msg.setDestinationEntity(94U);
    msg.seq = 44073U;
    msg.sys.assign("CEQMZIGSXSDMTQOOKHQYYZMRHEPHAKXPOZMQCWADENFPEZOOUBJGYJBPAUJDZWGKCPXXQJGIUYBMQVMWYDTKRLDAVAJVOBBLRBITECMBEOVIFFLJVLYGHCAMKFPHMOUVNKXZDNKXFEALWIUVSNBFIYCSNSXSVRXHAJWPHLIFKXXSJPQNVRRTQIGWUGQEBF");
    msg.value = 0.4353747913475726;

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
    msg.setTimeStamp(0.8772772191881295);
    msg.setSource(6662U);
    msg.setSourceEntity(183U);
    msg.setDestination(55391U);
    msg.setDestinationEntity(8U);
    msg.seq = 24672U;
    msg.sys.assign("YCASOXJORDSWIJCYMBFKPBFIEHGGVOJAQBCGRUKYGMGWJKVHVYDRTQDHGPSVZGQPWTTLCQHWMLFQJASRJKBRSEBF");
    msg.value = 0.25222839215392745;

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
    msg.setTimeStamp(0.03513730352701372);
    msg.setSource(24383U);
    msg.setSourceEntity(176U);
    msg.setDestination(57081U);
    msg.setDestinationEntity(125U);
    msg.seq = 60591U;
    msg.sys.assign("NQTJZAWILUCPIRUKVSVLRKAJWYRLMNKUBKWXOBZYQYBGWCLXOCSHFJIHVAFGCPQVDNDDSDBFSOVYFMPAVGXVQCJUBEHHSNNYHORYEHWBPCCSEIQIOPDEUJVZGXHPFLTMZVZHHENQKYWLKOUNZGUMKITRFXPTRQQNXFDTCZZDTALAWUFJPORFEEPMTOXFXZJENZBIKYJPBBGTATRGXMRDBWALUXUACJMVGIIHLNMRMCG");
    msg.value = 0.3175046889931822;

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
    msg.setTimeStamp(0.3387647693794834);
    msg.setSource(54706U);
    msg.setSourceEntity(60U);
    msg.setDestination(53496U);
    msg.setDestinationEntity(137U);
    msg.seq = 59472U;
    msg.sys_dst.assign("SNLHMXROGDKWRXLLWDNUVCJGFSICVUSTNKKYRXKVQDVAUBNBTCBYIUGLDUUSIZOPDVDEHIJXPUWSBKXNJJTNARTDHOZPZPQAMYAFERCCFHQMGUMCHJDLLSEQRINLYOCQZQKJXXXJKERHOSOQQZOSPHCPLAGSXUTLJPIIBQWYZFBZVNZIEAFMBHKGWRDRWCNBAWKOG");
    msg.timeout = 0.08319148139927957;

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
    msg.setTimeStamp(0.6511635656221687);
    msg.setSource(35703U);
    msg.setSourceEntity(145U);
    msg.setDestination(47673U);
    msg.setDestinationEntity(231U);
    msg.seq = 21097U;
    msg.sys_dst.assign("QGOEEFTJOXUWYUCLUBSABWMTSMSKPNSILHYXQKZDXCOSCDMCTOOYB");
    msg.timeout = 0.6253084304627975;

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
    msg.setTimeStamp(0.4614082341047486);
    msg.setSource(9816U);
    msg.setSourceEntity(203U);
    msg.setDestination(16397U);
    msg.setDestinationEntity(6U);
    msg.seq = 25597U;
    msg.sys_dst.assign("YZFEOMAXWYZSESRKIQNEVCHGOBV");
    msg.timeout = 0.3904011042603952;

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
    msg.setTimeStamp(0.6770648720928331);
    msg.setSource(46801U);
    msg.setSourceEntity(215U);
    msg.setDestination(34654U);
    msg.setDestinationEntity(164U);
    msg.action = 3U;
    msg.longain = 0.19131468060761014;
    msg.latgain = 0.11490045580397246;
    msg.bondthick = 4188852281U;
    msg.leadgain = 0.17898145128552223;
    msg.deconflgain = 0.20678550353012637;

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
    msg.setTimeStamp(0.4572185917715691);
    msg.setSource(29646U);
    msg.setSourceEntity(74U);
    msg.setDestination(1547U);
    msg.setDestinationEntity(109U);
    msg.action = 248U;
    msg.longain = 0.12595532638525397;
    msg.latgain = 0.3407209235039548;
    msg.bondthick = 3106861595U;
    msg.leadgain = 0.31247336841874385;
    msg.deconflgain = 0.7140331264064937;

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
    msg.setTimeStamp(0.42006829755389685);
    msg.setSource(49760U);
    msg.setSourceEntity(180U);
    msg.setDestination(165U);
    msg.setDestinationEntity(155U);
    msg.action = 206U;
    msg.longain = 0.305437032746253;
    msg.latgain = 0.43398447951562746;
    msg.bondthick = 2755379074U;
    msg.leadgain = 0.04950914684019536;
    msg.deconflgain = 0.6030330640635069;

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
    msg.setTimeStamp(0.9611248462910593);
    msg.setSource(22479U);
    msg.setSourceEntity(173U);
    msg.setDestination(32356U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.8124709017200514;
    msg.dist_min_abs = 0.9756943976515442;
    msg.dist_min_mean = 0.9620791393487019;

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
    msg.setTimeStamp(0.49179036919750674);
    msg.setSource(12441U);
    msg.setSourceEntity(130U);
    msg.setDestination(629U);
    msg.setDestinationEntity(90U);
    msg.err_mean = 0.568123073451508;
    msg.dist_min_abs = 0.7383676917393637;
    msg.dist_min_mean = 0.7914343476201439;

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
    msg.setTimeStamp(0.3814913864327415);
    msg.setSource(65491U);
    msg.setSourceEntity(118U);
    msg.setDestination(62128U);
    msg.setDestinationEntity(219U);
    msg.err_mean = 0.9956857825002852;
    msg.dist_min_abs = 0.5859231565179579;
    msg.dist_min_mean = 0.4428529364422704;

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
    msg.setTimeStamp(0.6239413669173769);
    msg.setSource(55727U);
    msg.setSourceEntity(17U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(217U);
    msg.action = 14U;
    msg.lon_gain = 0.9995098547351182;
    msg.lat_gain = 0.2088453618141981;
    msg.bond_thick = 0.25162523698333217;
    msg.lead_gain = 0.18645828406165177;
    msg.deconfl_gain = 0.2235639180043879;
    msg.accel_switch_gain = 0.847667418281852;
    msg.safe_dist = 0.1653764667959986;
    msg.deconflict_offset = 0.035174406816373405;
    msg.accel_safe_margin = 0.41235484453134574;
    msg.accel_lim_x = 0.9035248117859896;

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
    msg.setTimeStamp(0.28187601762097403);
    msg.setSource(49704U);
    msg.setSourceEntity(47U);
    msg.setDestination(8293U);
    msg.setDestinationEntity(5U);
    msg.action = 242U;
    msg.lon_gain = 0.5101264272066566;
    msg.lat_gain = 0.1323105324904763;
    msg.bond_thick = 0.20555412829084618;
    msg.lead_gain = 0.48660107290419574;
    msg.deconfl_gain = 0.5316307712063291;
    msg.accel_switch_gain = 0.9169932085823952;
    msg.safe_dist = 0.20928331277015633;
    msg.deconflict_offset = 0.9479412742470698;
    msg.accel_safe_margin = 0.007230984645378635;
    msg.accel_lim_x = 0.7230346816479951;

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
    msg.setTimeStamp(0.24111105365605312);
    msg.setSource(19232U);
    msg.setSourceEntity(90U);
    msg.setDestination(17364U);
    msg.setDestinationEntity(72U);
    msg.action = 33U;
    msg.lon_gain = 0.5301052421770592;
    msg.lat_gain = 0.620121867945909;
    msg.bond_thick = 0.15954548302725413;
    msg.lead_gain = 0.14374810181077113;
    msg.deconfl_gain = 0.4939370443905645;
    msg.accel_switch_gain = 0.3873016608085944;
    msg.safe_dist = 0.45401005272508166;
    msg.deconflict_offset = 0.4885839722414582;
    msg.accel_safe_margin = 0.4124042751760576;
    msg.accel_lim_x = 0.6775621597918363;

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
    msg.setTimeStamp(0.9689176430681157);
    msg.setSource(38252U);
    msg.setSourceEntity(33U);
    msg.setDestination(14926U);
    msg.setDestinationEntity(7U);
    msg.type = 252U;
    msg.op = 173U;
    msg.err_mean = 0.6429418012794595;
    msg.dist_min_abs = 0.7021412700094869;
    msg.dist_min_mean = 0.577305121955107;
    msg.roll_rate_mean = 0.7445119604340741;
    msg.time = 0.23766105029100226;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 162U;
    tmp_msg_0.lon_gain = 0.5603818762612216;
    tmp_msg_0.lat_gain = 0.01465236411887294;
    tmp_msg_0.bond_thick = 0.01270327497688084;
    tmp_msg_0.lead_gain = 0.8835120866622287;
    tmp_msg_0.deconfl_gain = 0.9417007222761231;
    tmp_msg_0.accel_switch_gain = 0.9871657077222872;
    tmp_msg_0.safe_dist = 0.1285882216650187;
    tmp_msg_0.deconflict_offset = 0.10603343576708502;
    tmp_msg_0.accel_safe_margin = 0.17704725951287748;
    tmp_msg_0.accel_lim_x = 0.5850283787098728;
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
    msg.setTimeStamp(0.30424164268222664);
    msg.setSource(58708U);
    msg.setSourceEntity(49U);
    msg.setDestination(16888U);
    msg.setDestinationEntity(17U);
    msg.type = 38U;
    msg.op = 193U;
    msg.err_mean = 0.9653480888013394;
    msg.dist_min_abs = 0.3142857178684886;
    msg.dist_min_mean = 0.7277300751415868;
    msg.roll_rate_mean = 0.049401694324243794;
    msg.time = 0.22946236125468877;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 202U;
    tmp_msg_0.lon_gain = 0.36675969872598435;
    tmp_msg_0.lat_gain = 0.9068201831332325;
    tmp_msg_0.bond_thick = 0.147203317401584;
    tmp_msg_0.lead_gain = 0.11142265310701194;
    tmp_msg_0.deconfl_gain = 0.7984076756705153;
    tmp_msg_0.accel_switch_gain = 0.006526654773619134;
    tmp_msg_0.safe_dist = 0.29862041266354267;
    tmp_msg_0.deconflict_offset = 0.5694117836280479;
    tmp_msg_0.accel_safe_margin = 0.29417777262118516;
    tmp_msg_0.accel_lim_x = 0.6286014904079863;
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
    msg.setTimeStamp(0.944092137664371);
    msg.setSource(2908U);
    msg.setSourceEntity(157U);
    msg.setDestination(55674U);
    msg.setDestinationEntity(158U);
    msg.type = 104U;
    msg.op = 116U;
    msg.err_mean = 0.803172838888274;
    msg.dist_min_abs = 0.36801821941179136;
    msg.dist_min_mean = 0.6745367542898416;
    msg.roll_rate_mean = 0.8982483243827533;
    msg.time = 0.8804031425237037;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 109U;
    tmp_msg_0.lon_gain = 0.07011558742222257;
    tmp_msg_0.lat_gain = 0.9673688953202603;
    tmp_msg_0.bond_thick = 0.8589184151487949;
    tmp_msg_0.lead_gain = 0.557203590761469;
    tmp_msg_0.deconfl_gain = 0.6659447671224406;
    tmp_msg_0.accel_switch_gain = 0.7305393524786252;
    tmp_msg_0.safe_dist = 0.9027025498163419;
    tmp_msg_0.deconflict_offset = 0.4717256528132646;
    tmp_msg_0.accel_safe_margin = 0.7525181408364793;
    tmp_msg_0.accel_lim_x = 0.9288268907421467;
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
    msg.setTimeStamp(0.04389403068879916);
    msg.setSource(2478U);
    msg.setSourceEntity(204U);
    msg.setDestination(9079U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.5038274771957011;
    msg.lon = 0.14147940413518523;
    msg.eta = 2335326558U;
    msg.duration = 40390U;

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
    msg.setTimeStamp(0.5087317404210684);
    msg.setSource(61831U);
    msg.setSourceEntity(210U);
    msg.setDestination(40084U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.8180386885227522;
    msg.lon = 0.9389233614306196;
    msg.eta = 3773794747U;
    msg.duration = 49866U;

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
    msg.setTimeStamp(0.9621269948266071);
    msg.setSource(36270U);
    msg.setSourceEntity(79U);
    msg.setDestination(8583U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.4393359753204874;
    msg.lon = 0.6900169123005048;
    msg.eta = 1679904984U;
    msg.duration = 55174U;

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
    msg.setTimeStamp(0.3396119319019737);
    msg.setSource(54524U);
    msg.setSourceEntity(165U);
    msg.setDestination(20173U);
    msg.setDestinationEntity(80U);
    msg.plan_id = 62196U;

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
    msg.setTimeStamp(0.19327252445012522);
    msg.setSource(29456U);
    msg.setSourceEntity(33U);
    msg.setDestination(53458U);
    msg.setDestinationEntity(103U);
    msg.plan_id = 42919U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.02959515972569149;
    tmp_msg_0.lon = 0.9047402888605625;
    tmp_msg_0.eta = 3190302432U;
    tmp_msg_0.duration = 50554U;
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
    msg.setTimeStamp(0.4578531530972403);
    msg.setSource(11770U);
    msg.setSourceEntity(183U);
    msg.setDestination(18829U);
    msg.setDestinationEntity(60U);
    msg.plan_id = 44574U;

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
    msg.setTimeStamp(0.6666906874846867);
    msg.setSource(50251U);
    msg.setSourceEntity(188U);
    msg.setDestination(33310U);
    msg.setDestinationEntity(21U);
    msg.type = 37U;
    msg.command = 45U;
    msg.settings.assign("XPTHOBXACJIKDSUEHDECAKEIDGRZVVYQZO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 1176U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7520278994659724;
    tmp_tmp_msg_0_0.lon = 0.05674939249858568;
    tmp_tmp_msg_0_0.eta = 3841076469U;
    tmp_tmp_msg_0_0.duration = 7562U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CRAUQLYXIICFMANBOYTIRFSAJVEIRLFAONSVQSDOWHNVTATUHLKGYYRKXQHUVYBDLFRQZPEKLUOTXLRCOAIQVS");

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
    msg.setTimeStamp(0.7372716572984065);
    msg.setSource(48221U);
    msg.setSourceEntity(31U);
    msg.setDestination(32611U);
    msg.setDestinationEntity(238U);
    msg.type = 142U;
    msg.command = 138U;
    msg.settings.assign("RMIJXBITVSWGUQSCSQOAOUQPFYYALNOVRRYLACDAKCNPZFCBRCSWHLZJIUTSPQZEVRFIXGHZIFXVBGZWXFQWJGQNREXDVFABIKLKWDDCGPUUSBPPHFNDABYOXUJHGERRJYKKLJDPKHFZCGINREWRTOQMILYTSSXJYDVMVAFDGEDOTZZTWOETMUACSXMAMECHQTNFEBUEBXYTNOGZKBHMGPJWDOYNNUCY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 58411U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2707444301231592;
    tmp_tmp_msg_0_0.lon = 0.5164102742547966;
    tmp_tmp_msg_0_0.eta = 2829543308U;
    tmp_tmp_msg_0_0.duration = 28789U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZEFKPMAJINX");

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
    msg.setTimeStamp(0.8520948666022817);
    msg.setSource(36662U);
    msg.setSourceEntity(161U);
    msg.setDestination(6232U);
    msg.setDestinationEntity(216U);
    msg.type = 123U;
    msg.command = 163U;
    msg.settings.assign("NMZCCZEQLIEUUHXLTBOATSIFYLVNBGFKIDYSZAPHOBKORGNLBFUPMRFMGIDGDYWGEPAPKUTCMCDJMZAUXEXYQDKNOBFDXJSEFHPVALLCTQEESMKVNRWCRFARYGPVIZQUGKXZOQZLQMFCINERWPWYNTWDGQBFLOJWKYJTCLMQHHUIKTRFWWJQAXZISZGUSVOJXEHLSIXZWBJIENBPQXVMBRPYNCAOPDHDOHBWTNUX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34243U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GHWVXIKEBGVCBYCSHJELHEWQKRPELIUOHUMFUFVCUXTPHPBOGYTZCVTKITMTGESQWMTUAXIAJXLODMCDLLOLZWLCYJSJZZQEMAVUJBSYXMGAQMZVDINKSTKIHZOJICFXFHNDBCARZFUPNUPYRVGXYJSZNNNYWYBBPRJGNVNBPFSMRQAWBACGKPDIRQDOKXOODRHDZREWHUOVPVFKEIYLLEBIWTQFLFAKQPSKXHXYNDOM");

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
    msg.setTimeStamp(0.2768003026473168);
    msg.setSource(37732U);
    msg.setSourceEntity(156U);
    msg.setDestination(36479U);
    msg.setDestinationEntity(100U);
    msg.state = 73U;
    msg.plan_id = 40813U;
    msg.wpt_id = 116U;
    msg.settings_chk = 44969U;

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
    msg.setTimeStamp(0.01773147880631365);
    msg.setSource(10860U);
    msg.setSourceEntity(201U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(57U);
    msg.state = 106U;
    msg.plan_id = 64350U;
    msg.wpt_id = 205U;
    msg.settings_chk = 36837U;

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
    msg.setTimeStamp(0.7048450118259021);
    msg.setSource(17060U);
    msg.setSourceEntity(81U);
    msg.setDestination(39035U);
    msg.setDestinationEntity(129U);
    msg.state = 224U;
    msg.plan_id = 27741U;
    msg.wpt_id = 237U;
    msg.settings_chk = 24815U;

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
    msg.setTimeStamp(0.36785832655226347);
    msg.setSource(32719U);
    msg.setSourceEntity(172U);
    msg.setDestination(2200U);
    msg.setDestinationEntity(56U);
    msg.uid = 16U;
    msg.frag_number = 27U;
    msg.num_frags = 234U;
    const signed char tmp_msg_0[] = {-128, -107, -23, 103, 67, 30, -120, 93, -122, -16, 111, -100, 111, 29, -41, 108, 67, 112, 106, -64, 8, -83, 89, -103, 88, -78, 21, -57, 89, 60, 43, -51, 96, 0, 111, 69, -35, -78, 63, 125, 4, 8, -2, -45, -27, 68, -126, -108, -86, -95, 85, -23, -7, 34, 15, 74, -12, -42, 89, -30, 43, 113, -8, -44, -22, 60, 22, -123, 27, 70, -7, -68, 41, -87, -109, -34, 82, 57, 79, -32, 56, 50, 1, -10, 26, 112, 26, 56, 108, 124, 100, -94, 8, 96, -38, 88, 84, 27, -28, 47, 103, 101, -45, -42, 5, -98, 17, -11, 118};
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
    msg.setTimeStamp(0.688292108017088);
    msg.setSource(24368U);
    msg.setSourceEntity(114U);
    msg.setDestination(30867U);
    msg.setDestinationEntity(5U);
    msg.uid = 122U;
    msg.frag_number = 12U;
    msg.num_frags = 9U;
    const signed char tmp_msg_0[] = {91, -22, -78, 37, 57, -103, -107, 59, -14, 45, 58, 46, 23, -25, -84, 57, 118, 121, -13, -98, -72, -50, -53, 17, -112, 114, -117, 0, 91, 41, 59, 12, 40, -45, 54, 43, 82, 97, -1, -80, 23, -51, 11, 48, -125};
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
    msg.setTimeStamp(0.854767718791994);
    msg.setSource(19065U);
    msg.setSourceEntity(65U);
    msg.setDestination(30172U);
    msg.setDestinationEntity(174U);
    msg.uid = 12U;
    msg.frag_number = 86U;
    msg.num_frags = 222U;
    const signed char tmp_msg_0[] = {-77, 25, 46, -77, 36, 122, -117, -60, -92, -108, -58, -101, 124, 18, -124, -94, -1, 123, 93, -31, -125, -92, 21, -25, -38, 72, 72, -117, 20, -52, -105, 90, 23, 57, -94, -50, -49, 28, 66, -49, -88, 108, 37, -74, 6, 85, 84, 40, -7, -44, 75, 57, -50, -64, 60, -102, -126, -50, -124, -68, -22, 123, -36, 53, 90, -79, -10, -71, 121, 86, -78, -127, -69, -9, -45, -15, 87, 72, -123, 52, 11, -71, 31, -91, 51, -93, -28, -21, -6, -85, -1, -23, -118, 3, -71, -14, 73, 33, -110, -13, -107, 47, -94, -3, -29, -75, -95, -23, 67, -90, -67, -43, 87, -109, 103, -10, 115, -81, 54, 74, 36, 122, 51, -13, -104, -107, 1, 46, 26, 92, -64, -106, -107, 65, -105, -125, -64, 30, -24, -101, 89, -66, -95, 55, 114, 14, -93, -46, -38, -78, -106, 122, 125, 108, 107, -58, -95, 98, -102, 58, 18, -35, -120, 57, 83, 37, 120, -53, 50, -54, -65, -51, -100, 105, -125, 61, 111, 8, 56, 100, -102, -37, -55, -8, -69, -5, 109, 77, -120, 124, -1, 24, 72, 123, -7, 102, -64, -64, 94, -36, -58, 26, -71, -112, 42, -75, 102, -114};
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
    msg.setTimeStamp(0.8194957703242257);
    msg.setSource(30151U);
    msg.setSourceEntity(41U);
    msg.setDestination(26607U);
    msg.setDestinationEntity(128U);
    msg.content_type.assign("LDZPNXQKZY");
    const signed char tmp_msg_0[] = {112, 102, -45, 95, 12, -118, -38, 22, 23, 41, -17, -74, 30, 44, 106, 90, 84, -75, 126, -62, 54, 9, -15, 97, -99, -86, -24, -106, -126, 17, -119, 55, -128, -84, -123, 99, 80, -27, -56, -58, -1, 8, -104, 93, 56, 99, 8, -5, -30, -3, -54, 13, 52, 14, 59, 53, -67, 97, -93, -109, -78, -106, -12, 82, -58, -120, 59, -85, -118, -57, -31, 78, 78, -59, 108, -127, -94, -127, 67, -22, -21, 45, -42, 50, 93, 40, 88, -76, 8, -77, 5, -116, 41, -90, -7, -53, -101, 64, -106, 10, 114, -6, 45, 91, 106, -54, 105, 13, 57, -99, -76, -36, -78, 96, 69, -67, 31, 104, 85, -39, -10, 105, -31, -84, 118, -50, -41, 57, -30, -91, -48, 13, -33, -10, 59, -55, 14, -32, -33, -72, -16, 75, -109, -35, -33, 22, -62, -25, -11, 25, 13, 51, 10, 104, 67, 54, 121, -111, 117, 65, 126, -97, 93, -62, 56, -35, 18, -70, 48, 14, 103, -16, -125, -35, 44, 102, -52, 44, 5, 35};
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
    msg.setTimeStamp(0.5186323457883558);
    msg.setSource(23527U);
    msg.setSourceEntity(174U);
    msg.setDestination(27960U);
    msg.setDestinationEntity(209U);
    msg.content_type.assign("WVALQEKJTBQFVLNMOGZZFQPRSQDTUXESMOQZAPPIANRAWNYCOUUYXMZGNSHZLCPUTNZVCPVHKRWIUQYOZYNYFHWOEMDCWXGKQGWSMALTUXWQYPKLRXEISFKDKJCOBYIVDXRGHB");
    const signed char tmp_msg_0[] = {92, -32, -110, 67, -15, 62, 106, 11, -33, 53, -81, 2, 80, -44, -44, -69, -90, -28, 107, 72, 16, -80, -89, -68, -109, 65, 118, 72, 1, 104, -70, -87};
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
    msg.setTimeStamp(0.28344869059557465);
    msg.setSource(47928U);
    msg.setSourceEntity(208U);
    msg.setDestination(45026U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("XTDDFTOIGYIYPHVFLVGMVXJWYKTKKSLEEZGJSKKQGBQPWZGZIOKJF");
    const signed char tmp_msg_0[] = {121, 69, -112, -102, 104, 38, 101, -52, -81, 89, -44, 9, -45, -21, 104, 28, -72, 49, 84, 4, 32, 46, 0, 25, 88, -35, -119, -80, 124, 102, 12, -40, 45, 102, -112, 124, -30, -29, -122, -94, -43, 41, -82, 81, -17, 77, 0, -71, 20, -118, -58, -77, 46, 6, -38, -29, 57, -71, -69, 40, -82, 81, -3, -78, 124, -52, -75, -126, 121, -88, -56, 40, -35, 71, -19, 110, -28, 4, 59, 6, 19, 40, -64, 50, -91, 67, -8, -47, -38, -29, -58, -118, 10, 45, -68, 19, -72, -87, -103, 55, 82, 77, 33, -97, 116, 46, 112, -9, 9, 65, 101, -41, 24, 62, 88, -6, -65, 115, -89, 108, -67, -52, 105, -53, -64, -46, 123, 107, -31, -13, 20, 67, 27, -75, -116, 8, -91, -37, 36, 86, 0, -100, 65, 3, -88, 48, 16, 18, -87, 47};
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
    msg.setTimeStamp(0.6154977270148);
    msg.setSource(5747U);
    msg.setSourceEntity(236U);
    msg.setDestination(14680U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.9055053647567567);
    msg.setSource(27007U);
    msg.setSourceEntity(104U);
    msg.setDestination(60471U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.7450058218993222);
    msg.setSource(11027U);
    msg.setSourceEntity(170U);
    msg.setDestination(30672U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.4132736968905495);
    msg.setSource(41624U);
    msg.setSourceEntity(197U);
    msg.setDestination(46324U);
    msg.setDestinationEntity(224U);
    msg.target = 62949U;
    msg.bearing = 0.6656131018277622;
    msg.elevation = 0.3816305614172535;

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
    msg.setTimeStamp(0.044746123927537296);
    msg.setSource(55440U);
    msg.setSourceEntity(208U);
    msg.setDestination(5128U);
    msg.setDestinationEntity(92U);
    msg.target = 63234U;
    msg.bearing = 0.30363336164136123;
    msg.elevation = 0.9460982584973766;

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
    msg.setTimeStamp(0.5125752818249526);
    msg.setSource(21163U);
    msg.setSourceEntity(161U);
    msg.setDestination(56129U);
    msg.setDestinationEntity(129U);
    msg.target = 47978U;
    msg.bearing = 0.6217907019047476;
    msg.elevation = 0.2908486918764668;

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
    msg.setTimeStamp(0.5257702915575507);
    msg.setSource(9261U);
    msg.setSourceEntity(96U);
    msg.setDestination(2927U);
    msg.setDestinationEntity(41U);
    msg.target = 3886U;
    msg.x = 0.19316815909492435;
    msg.y = 0.3787328594935345;
    msg.z = 0.8560116642558191;

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
    msg.setTimeStamp(0.9388657470798477);
    msg.setSource(12196U);
    msg.setSourceEntity(173U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(160U);
    msg.target = 32633U;
    msg.x = 0.20641662999635224;
    msg.y = 0.06857409706679185;
    msg.z = 0.4572692053018236;

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
    msg.setTimeStamp(0.8775429787649469);
    msg.setSource(5935U);
    msg.setSourceEntity(165U);
    msg.setDestination(55497U);
    msg.setDestinationEntity(199U);
    msg.target = 24468U;
    msg.x = 0.7143997263374191;
    msg.y = 0.32097676495034566;
    msg.z = 0.41993868507646637;

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
    msg.setTimeStamp(0.26114579650268144);
    msg.setSource(16364U);
    msg.setSourceEntity(239U);
    msg.setDestination(51270U);
    msg.setDestinationEntity(47U);
    msg.target = 37125U;
    msg.lat = 0.8713155866125255;
    msg.lon = 0.40783359937246655;
    msg.z_units = 147U;
    msg.z = 0.6152659624427406;

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
    msg.setTimeStamp(0.253024985914556);
    msg.setSource(46426U);
    msg.setSourceEntity(188U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(163U);
    msg.target = 16777U;
    msg.lat = 0.5302915393565536;
    msg.lon = 0.5541695717196073;
    msg.z_units = 104U;
    msg.z = 0.8189219109829994;

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
    msg.setTimeStamp(0.825827605248757);
    msg.setSource(40410U);
    msg.setSourceEntity(209U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(181U);
    msg.target = 46185U;
    msg.lat = 0.43616586230260024;
    msg.lon = 0.2375157091943293;
    msg.z_units = 122U;
    msg.z = 0.7352092858445846;

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
    msg.setTimeStamp(0.6275796221775171);
    msg.setSource(47552U);
    msg.setSourceEntity(106U);
    msg.setDestination(27326U);
    msg.setDestinationEntity(10U);
    msg.locale.assign("FMVKBZTTGOUIFHQMXWNNMBPUBVFSQETSKDIGDPIJBKGRXXBCJJJHNZCEUANXOSLSHFOHGPAIVVPPQFRYRWGDQINMZYWLDXHYBTX");
    const signed char tmp_msg_0[] = {-127, 1, 36, -16, -34, -84, 82, -18, -115, 102, 125, 50, 85, -67, 60, -7, 125, 2, 72, 11, -86, -86, 42, -45, -30, -52, 74, 55, 14, -22, -22, 74, 115, -72, 88, -29, 21, 78, 98, -115, 38, 59, -42, -26, 3, -31, 35, 102, 23, -61, 14, -30, 78, 49, -96, -120, 96, 59, 74, -41, -120, -102, 25, 89, 74, 108, -48, -54, -117, -13, -88, -77, -13, -92, -19, 80, 2, 54, -80, 98, -31, -124, -120, 31, 77, -111, 58, -62, -113, 103, -67, 106, -61, -87, -99, 26, 110, 126, 72, -46, -18, -25, -66, 10, -107, -103, 59, 93, -108, -9, 75, -79, -9, 47, -99, 93, -105, 36, -81, -72, 63, -123, 39, -95, -88, 13, 44, 12, 75, -85, -34, 109, 109, 66, -103, 86, -76, 36, -26, -31, -46, -13, 122, 73, 45, -12, 46, -119, 100, 96, 124, -53, 108, 102, -76, -111, 115, 99, 40, -85, 87, 9, -27, 83, -26, -57, 72, -113, 53, -107, -89, 41, -22, 22, 33, 61, -104, 44, -86, -94, 123, 37, 103, 112, 41, -79, 41, 113, -31, 71, -27, -44, -43, 111, -38, -62, 9, 59, -95, -68, 113, 20, 36, 7};
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
    msg.setTimeStamp(0.3134637587641438);
    msg.setSource(60678U);
    msg.setSourceEntity(241U);
    msg.setDestination(15447U);
    msg.setDestinationEntity(142U);
    msg.locale.assign("RPGZOVNKGAEVOCBTTRADTWPFYITMXETKBPULEXACAQORIHJXMDKRQEKYGOHXENQTMBDWMCABODXZIGQRKGPGMGAOMOBIWOYPKSDHICJVCWNSTWLNLNBRYXFZZJJTKYLSFWJHKSZVAJY");
    const signed char tmp_msg_0[] = {99, -86, 42, 9, -87, 97, 84, -15, 2, -89, 92, 39, -16, 72, -126, -120, 82, 8, -34, 25, 112, -44, -3, -34, 114, 40, -120, -4, -84, -1, -75, 47, 54, -91, -48, 26, -125, -27, -89, 21, -69, -76, -60, 17, -113, -126, 63, -118, -69, -24, 108, 6, -48, -123, 73, -85, -82, -9, -37, -75, -92, -89, -89, 78, 95, 18, 56, 107, -56, 18, 106, -107, -60, 48, -11, 99, -126, -76, -59, -68, -9, -84, 99, -102, 38, -75, -38, -47};
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
    msg.setTimeStamp(0.7633652720906158);
    msg.setSource(33250U);
    msg.setSourceEntity(215U);
    msg.setDestination(42632U);
    msg.setDestinationEntity(241U);
    msg.locale.assign("NTUHXXWBNPKBXTYCHKSHAUTZLYZVRNUKJKPSWSHMDHFZJKFEDODOFHCRIDFMEJBJDYMAMJSVCNVLEZGRXPADPLPAZNSCIJEAQPKVYSOPAUTEDMKMWRLLYNIRURUGFGLQTWJXUBWLWEUGIWTQKHESBJYGPRKMGPZWDIVCVXZCNQURGXDVECGFIRZHO");
    const signed char tmp_msg_0[] = {23, 31, 10, -66, 7, 67, -56, 104, -64, 48, -63, 59, -111, -57, 88, -38, 77, 67, 50, 13, 58, -93, 62, 102, -73, 8, 54, 55, -80, 40, -45, -89, -105, -100, -71, 26, 80, 29, -69, -84, 8, 92, -105, 121, -101, 60, -39, 5, -64, -23, -73, -113, -117, 10, 61, -67, -90, 115, 25, 90, 69, 81, -102, -34, -107, -13, -47, 83, 8, -65, -43, 115, -20, -66, 40, 0, -18, -88, 99, 78, 99, -83, -115, -29, 66, 63, -75, 17, 24, -116, -113, -120, -14, 90, 52, 32, -110, -113, 66, -75, -55, 36, -49, -97, 124, 98, 9, -111, -92, -19, -7, -6, 54, 95, -95, 21, 81, 110, 15, 31, -39, 111, -45, 11, 122, 59, 12, -68};
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
    msg.setTimeStamp(0.5197468456103075);
    msg.setSource(7813U);
    msg.setSourceEntity(234U);
    msg.setDestination(15499U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.24195703972194293);
    msg.setSource(37078U);
    msg.setSourceEntity(74U);
    msg.setDestination(33729U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.9967569290552641);
    msg.setSource(63492U);
    msg.setSourceEntity(51U);
    msg.setDestination(31880U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.23683920831667027);
    msg.setSource(36057U);
    msg.setSourceEntity(235U);
    msg.setDestination(56876U);
    msg.setDestinationEntity(233U);
    msg.camid = 9U;
    msg.x = 28715U;
    msg.y = 1006U;

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
    msg.setTimeStamp(0.12973794112696346);
    msg.setSource(24398U);
    msg.setSourceEntity(202U);
    msg.setDestination(2701U);
    msg.setDestinationEntity(163U);
    msg.camid = 182U;
    msg.x = 28566U;
    msg.y = 36081U;

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
    msg.setTimeStamp(0.23185120456095887);
    msg.setSource(28225U);
    msg.setSourceEntity(238U);
    msg.setDestination(31054U);
    msg.setDestinationEntity(21U);
    msg.camid = 159U;
    msg.x = 788U;
    msg.y = 32943U;

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
    msg.setTimeStamp(0.9225428372791669);
    msg.setSource(34907U);
    msg.setSourceEntity(167U);
    msg.setDestination(3615U);
    msg.setDestinationEntity(57U);
    msg.camid = 1U;
    msg.x = 29290U;
    msg.y = 35857U;

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
    msg.setTimeStamp(0.4267891377914881);
    msg.setSource(9699U);
    msg.setSourceEntity(144U);
    msg.setDestination(33442U);
    msg.setDestinationEntity(51U);
    msg.camid = 2U;
    msg.x = 17490U;
    msg.y = 13106U;

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
    msg.setTimeStamp(0.7211612038968589);
    msg.setSource(32016U);
    msg.setSourceEntity(62U);
    msg.setDestination(23189U);
    msg.setDestinationEntity(219U);
    msg.camid = 141U;
    msg.x = 20854U;
    msg.y = 63468U;

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
    msg.setTimeStamp(0.03392459123011693);
    msg.setSource(49129U);
    msg.setSourceEntity(10U);
    msg.setDestination(59935U);
    msg.setDestinationEntity(48U);
    msg.tracking = 174U;
    msg.lat = 0.5157631673309568;
    msg.lon = 0.7647381529265694;
    msg.x = 0.05346463207080776;
    msg.y = 0.05474432303053234;
    msg.z = 0.7040861791965292;

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
    msg.setTimeStamp(0.871310078887402);
    msg.setSource(51363U);
    msg.setSourceEntity(81U);
    msg.setDestination(6259U);
    msg.setDestinationEntity(140U);
    msg.tracking = 69U;
    msg.lat = 0.555358471050834;
    msg.lon = 0.9849843449087369;
    msg.x = 0.32840408852281355;
    msg.y = 0.7197558055973953;
    msg.z = 0.19844167592055295;

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
    msg.setTimeStamp(0.21864395691263105);
    msg.setSource(13528U);
    msg.setSourceEntity(71U);
    msg.setDestination(13726U);
    msg.setDestinationEntity(228U);
    msg.tracking = 117U;
    msg.lat = 0.761708203853013;
    msg.lon = 0.013258651008188127;
    msg.x = 0.4968696965140028;
    msg.y = 0.05236679079323081;
    msg.z = 0.3779620195541634;

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
    msg.setTimeStamp(0.919185044095391);
    msg.setSource(57744U);
    msg.setSourceEntity(219U);
    msg.setDestination(62843U);
    msg.setDestinationEntity(44U);
    msg.target.assign("AGUDVVYEPYIRZVFIOVYDWAWPIQZMASXRISCKDXSEEKJEMPPOFUOZHPSYALYQDEIORWWATTABHYCKFBSTUNYNPQNPZWRFHQJY");
    msg.lbearing = 0.4838011026366692;
    msg.lelevation = 0.22423903509212795;
    msg.bearing = 0.22761707240018159;
    msg.elevation = 0.5950448823712404;
    msg.phi = 0.2878152781590445;
    msg.theta = 0.737585300071314;
    msg.psi = 0.16887018208811966;
    msg.accuracy = 0.2415408899617547;

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
    msg.setTimeStamp(0.1338302425737926);
    msg.setSource(18625U);
    msg.setSourceEntity(4U);
    msg.setDestination(28618U);
    msg.setDestinationEntity(234U);
    msg.target.assign("CKFKNQAPRBUPPFEJYEWHULPNNETWRUNTJMFZHBDTFXYAPXSKBAKMDNRDEYCSYELGSLVOSTFUZDZGVDWAEVPFGJIJXBYNDCGHXOOVIMDMVIVVCQURWGWDBUFEXRBHHTDPIYTBWZWAARHEZZCZCWRCOBEUKSKLGSQNSGTJVSLZWQZASHVXJRKMTBIIOQAHIMQPDGEOXNTQJLKBUMXQLOFIQCPOKYACKUXJSNJWLFOMLIYARFNQOHJXH");
    msg.lbearing = 0.8034219769711728;
    msg.lelevation = 0.9623556208048922;
    msg.bearing = 0.6685833467303026;
    msg.elevation = 0.5520155740251013;
    msg.phi = 0.12070603192973295;
    msg.theta = 0.4658194274389209;
    msg.psi = 0.9610008853758233;
    msg.accuracy = 0.8122329896153745;

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
    msg.setTimeStamp(0.13447252002790955);
    msg.setSource(47622U);
    msg.setSourceEntity(177U);
    msg.setDestination(49143U);
    msg.setDestinationEntity(102U);
    msg.target.assign("QNKYHGUJWVUWYIAGBCZKPQASGBZZSPORCIINOORFMXYGKQBQOASHCJLGDATWLJIZRGPNQMBTWMOSUPWFLHFGMXRNZXBWJEPYXTKSVHFFVHRENTYALXZLDILEVGUXSFPCVPDODKCMTQABQPDURJDFKMNXSOAKEEBBZGFJIEWWLHKSJZEMMQHFTRIVXICVQSBJTUKCOA");
    msg.lbearing = 0.7859116400041047;
    msg.lelevation = 0.5658231138438847;
    msg.bearing = 0.7579141599142455;
    msg.elevation = 0.14722068712245107;
    msg.phi = 0.8532382947303299;
    msg.theta = 0.5724685009150132;
    msg.psi = 0.21741807700130888;
    msg.accuracy = 0.998052654823924;

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
    msg.setTimeStamp(0.6636049568692988);
    msg.setSource(50232U);
    msg.setSourceEntity(15U);
    msg.setDestination(55966U);
    msg.setDestinationEntity(84U);
    msg.target.assign("MGHWHZDMOIOGOEWGCJAVTBBXUMSULXKLYFIVCML");
    msg.x = 0.5817976489093298;
    msg.y = 0.37704501878316266;
    msg.z = 0.508028583112945;
    msg.n = 0.18223525852974243;
    msg.e = 0.4804415563066875;
    msg.d = 0.43469250407837057;
    msg.phi = 0.3557243982424382;
    msg.theta = 0.7779373650284934;
    msg.psi = 0.9065133883438563;
    msg.accuracy = 0.5336930066051265;

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
    msg.setTimeStamp(0.38969168667764476);
    msg.setSource(13401U);
    msg.setSourceEntity(151U);
    msg.setDestination(51291U);
    msg.setDestinationEntity(203U);
    msg.target.assign("BJUBDFWVYBDBPVOWUVIUJZTDPMEROWKLAYCFGTUDJTWJJHN");
    msg.x = 0.5580306386074596;
    msg.y = 0.16933624829325988;
    msg.z = 0.25070880715784916;
    msg.n = 0.6920522427098666;
    msg.e = 0.09109496172633325;
    msg.d = 0.5054869268669826;
    msg.phi = 0.021126425528139703;
    msg.theta = 0.26122210096514775;
    msg.psi = 0.08618808802877886;
    msg.accuracy = 0.7275166148343968;

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
    msg.setTimeStamp(0.23908756368638517);
    msg.setSource(46696U);
    msg.setSourceEntity(27U);
    msg.setDestination(39755U);
    msg.setDestinationEntity(122U);
    msg.target.assign("JHYBHROPFDPOZKECQTFFICOUXKGSXULSTNASVQYTAKLTABJKXJDXACKNAHNWMUFCRCNADHDAGHRLJEMTRISX");
    msg.x = 0.9387580130872487;
    msg.y = 0.56816762107634;
    msg.z = 0.8740419185203111;
    msg.n = 0.881893631052953;
    msg.e = 0.9940609751640256;
    msg.d = 0.8815040748878673;
    msg.phi = 0.8972596939007488;
    msg.theta = 0.9882623034774011;
    msg.psi = 0.6945225752542186;
    msg.accuracy = 0.705109932084941;

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
    msg.setTimeStamp(0.47851495597672733);
    msg.setSource(55527U);
    msg.setSourceEntity(144U);
    msg.setDestination(18073U);
    msg.setDestinationEntity(124U);
    msg.target.assign("EVBDORMPYLBUQFDGIFMAODWWZXHKQDSLESZYDPITHUUTKVNDLSVMTYQVENBTFRNJEZXHYXOFSMZLDUOWRYTAPJBCJFKNGGSTBZXKIWCH");
    msg.lat = 0.33609524930557255;
    msg.lon = 0.7736002157636305;
    msg.z_units = 207U;
    msg.z = 0.27314947520925303;
    msg.accuracy = 0.26495681655541414;

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
    msg.setTimeStamp(0.20117537975329625);
    msg.setSource(16716U);
    msg.setSourceEntity(178U);
    msg.setDestination(19580U);
    msg.setDestinationEntity(186U);
    msg.target.assign("IBCAQELUYCIBRLHJAEPXYKIUKJUFXAMWAZXMHDGTXEFYTUVOYHGZRNDYNADQLUXZEDSRMGTENOYSJQTENBWEPGOKKGUAECWSFSALSWVYOYLREKGTNHRKVOVGLZOMGNB");
    msg.lat = 0.6839534889105058;
    msg.lon = 0.13353420239957559;
    msg.z_units = 200U;
    msg.z = 0.5392263196041105;
    msg.accuracy = 0.5009166071712337;

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
    msg.setTimeStamp(0.3415853093492197);
    msg.setSource(57247U);
    msg.setSourceEntity(160U);
    msg.setDestination(60955U);
    msg.setDestinationEntity(192U);
    msg.target.assign("YKZHGIOIHBRREYZVAGEQSCKJNAUBQRWMUHSQOESGXQJPYUWJKVFWWNOTZDSVRMITNFEVFGRQGDNNPCTYCXMHPEOZYXUJABZUYNUQYDQLTKTEMECRNYIXHSTIIICUFWSSPFJBPWJGOLOHKPSUZBXNLCHNLDGRSFOVBAGTWAMVWMFVO");
    msg.lat = 0.2824965344559617;
    msg.lon = 0.9507442063932545;
    msg.z_units = 113U;
    msg.z = 0.9914025689582024;
    msg.accuracy = 0.1802473912452841;

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
    msg.setTimeStamp(0.3781468332666539);
    msg.setSource(25272U);
    msg.setSourceEntity(139U);
    msg.setDestination(8905U);
    msg.setDestinationEntity(4U);
    msg.name.assign("MJZWDGMUARWZUYMUFTTSEEONBYRXTXHWRJJQZIKJBBONCIQLIIAGQRGYZYPTQXSCVUODLFXGCUHYTCINHLPAOUIFWKTHXQKHAZREFAZUHRKWVCCWJDOIZOLABLZ");
    msg.lat = 0.24990792599647704;
    msg.lon = 0.14429597379220838;
    msg.z = 0.008564181451456876;
    msg.z_units = 55U;

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
    msg.setTimeStamp(0.5379339294629377);
    msg.setSource(50207U);
    msg.setSourceEntity(62U);
    msg.setDestination(35762U);
    msg.setDestinationEntity(199U);
    msg.name.assign("LCCZXTYONWUWIEPTMVSYABBTTDQISNSHYKPYCYKUIMOOSMMNEGJDCISJCAXADNIJKIBRVIFUPBORFPOZGYTGXGMPESVLXMHQDGMXBUEXNAVTLIDTWXCBOKWAUQVEDEXJHWJ");
    msg.lat = 0.5532690743422276;
    msg.lon = 0.48240517260813065;
    msg.z = 0.058233074378801875;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.9552295810113539);
    msg.setSource(64936U);
    msg.setSourceEntity(21U);
    msg.setDestination(22966U);
    msg.setDestinationEntity(15U);
    msg.name.assign("FHERJFXSLYLXDRCXTYKWUCTUVOQHLVLOXWUEUSQDYIRVMSAPUIBHMKVLNIGYQMHBN");
    msg.lat = 0.48797166652998725;
    msg.lon = 0.18461462065074352;
    msg.z = 0.2450076969996059;
    msg.z_units = 178U;

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
    msg.setTimeStamp(0.459803505510997);
    msg.setSource(15180U);
    msg.setSourceEntity(44U);
    msg.setDestination(37856U);
    msg.setDestinationEntity(148U);
    msg.op = 37U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EYDJXPSHHQGUSWGZHYTREVYNODXHWGCSJMRRUCKQTYKUVVLHZCKCZMWHEDUQVDLFUXMNGQAKILR");
    tmp_msg_0.lat = 0.6879870520437947;
    tmp_msg_0.lon = 0.05198109929171724;
    tmp_msg_0.z = 0.6894141568788912;
    tmp_msg_0.z_units = 23U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.1478799983993878);
    msg.setSource(38369U);
    msg.setSourceEntity(123U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(13U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.3766588642900972);
    msg.setSource(35338U);
    msg.setSourceEntity(172U);
    msg.setDestination(40932U);
    msg.setDestinationEntity(124U);
    msg.op = 76U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JQELGIGFALYZNKUYMDVNJZMPBWPDQFAMNFVZXOTKWDUJUNWHCOXUWWYXCPHZRCFTIPUGSLAO");
    tmp_msg_0.lat = 0.4783361888562213;
    tmp_msg_0.lon = 0.00758600540192178;
    tmp_msg_0.z = 0.9420234019485655;
    tmp_msg_0.z_units = 238U;
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
    msg.setTimeStamp(0.03770266193169203);
    msg.setSource(4959U);
    msg.setSourceEntity(170U);
    msg.setDestination(3892U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6417082870112194;
    msg.type = 47U;

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
    msg.setTimeStamp(0.4112958212026242);
    msg.setSource(5580U);
    msg.setSourceEntity(69U);
    msg.setDestination(32236U);
    msg.setDestinationEntity(143U);
    msg.value = 0.11129166898157339;
    msg.type = 98U;

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
    msg.setTimeStamp(0.7320066083565417);
    msg.setSource(4476U);
    msg.setSourceEntity(250U);
    msg.setDestination(34281U);
    msg.setDestinationEntity(20U);
    msg.value = 0.4056017238984144;
    msg.type = 91U;

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
    msg.setTimeStamp(0.07339442204287683);
    msg.setSource(49075U);
    msg.setSourceEntity(176U);
    msg.setDestination(53727U);
    msg.setDestinationEntity(143U);
    msg.value = 0.39181951492921074;

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
    msg.setTimeStamp(0.7228137758928116);
    msg.setSource(23847U);
    msg.setSourceEntity(222U);
    msg.setDestination(38360U);
    msg.setDestinationEntity(62U);
    msg.value = 0.20249737369110732;

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
    msg.setTimeStamp(0.21288607914340485);
    msg.setSource(8331U);
    msg.setSourceEntity(187U);
    msg.setDestination(5266U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8373277234078262;

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
    msg.setTimeStamp(0.6196735629144066);
    msg.setSource(25225U);
    msg.setSourceEntity(171U);
    msg.setDestination(35330U);
    msg.setDestinationEntity(82U);
    msg.timestamp_last_service = 0.12901822831400966;
    msg.time_next_service = 0.7860339548017701;
    msg.time_motor_next_service = 0.10371428503228886;
    msg.time_idle_ground = 0.6803751309730816;
    msg.time_idle_air = 0.28491562224674394;
    msg.time_idle_water = 0.008648061718518396;
    msg.time_idle_underwater = 0.2301476679612786;
    msg.time_idle_unknown = 0.05495918991244941;
    msg.time_motor_ground = 0.9309404786816123;
    msg.time_motor_air = 0.8151491538482627;
    msg.time_motor_water = 0.7620914059859825;
    msg.time_motor_underwater = 0.759647112828279;
    msg.time_motor_unknown = 0.03274422787447406;
    msg.rpm_min = -23750;
    msg.rpm_max = 30153;
    msg.depth_max = 0.835560584683161;

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
    msg.setTimeStamp(0.4786383992881481);
    msg.setSource(49882U);
    msg.setSourceEntity(83U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(237U);
    msg.timestamp_last_service = 0.31068515901151617;
    msg.time_next_service = 0.16598944474465993;
    msg.time_motor_next_service = 0.21433110130554012;
    msg.time_idle_ground = 0.4225045717950968;
    msg.time_idle_air = 0.09466345134306942;
    msg.time_idle_water = 0.4822865937421136;
    msg.time_idle_underwater = 0.5052048003483435;
    msg.time_idle_unknown = 0.47277215816291673;
    msg.time_motor_ground = 0.6186558945149963;
    msg.time_motor_air = 0.6000131673827993;
    msg.time_motor_water = 0.23112574228297889;
    msg.time_motor_underwater = 0.47376395985108966;
    msg.time_motor_unknown = 0.9793222149378366;
    msg.rpm_min = -4663;
    msg.rpm_max = -9477;
    msg.depth_max = 0.07281167339336336;

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
    msg.setTimeStamp(0.517379635614285);
    msg.setSource(6976U);
    msg.setSourceEntity(252U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(26U);
    msg.timestamp_last_service = 0.8006226477911127;
    msg.time_next_service = 0.8572773348333604;
    msg.time_motor_next_service = 0.40746173147261466;
    msg.time_idle_ground = 0.1640227984824033;
    msg.time_idle_air = 0.030268893842731903;
    msg.time_idle_water = 0.6797222526336782;
    msg.time_idle_underwater = 0.7383045099409586;
    msg.time_idle_unknown = 0.09091751140013127;
    msg.time_motor_ground = 0.6177832919249728;
    msg.time_motor_air = 0.3327432756777655;
    msg.time_motor_water = 0.3631677934169052;
    msg.time_motor_underwater = 0.24691836550119461;
    msg.time_motor_unknown = 0.4179613148478676;
    msg.rpm_min = 27108;
    msg.rpm_max = 20505;
    msg.depth_max = 0.6860986460765015;

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
    msg.setTimeStamp(0.07399773016590827);
    msg.setSource(609U);
    msg.setSourceEntity(117U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(52U);
    msg.severity = 113U;
    msg.text.assign("VNAMAOHHNQESOJDMBQDWTIBVCOQVFEICAABRSUNFMPSWPMTXPAWZTGMETJGJPIUQZHTJYIWLTKNCKWCWVLJYIUGLUOOXVBVSQSFDHNRQENWBCFUGIYVUZZOXPAAJZHGKTXFWLFDYPPFMNMGRRZEEBRLYLZSBGUQFCSQJFDQITMGEORVDRWSFEALGEBYDXDBUXHJNTTMIWJYSKZRKZHYE");

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
    msg.setTimeStamp(0.4572316378435356);
    msg.setSource(43804U);
    msg.setSourceEntity(134U);
    msg.setDestination(22485U);
    msg.setDestinationEntity(158U);
    msg.severity = 40U;
    msg.text.assign("GOKABORHWTDTSLLNZHALAHLIXWAWDOCJEJISMKINYIAZXFWPBSCUFVUZACGFQBIKSJFJQTBVYOIYBKPFNLPXHBX");

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
    msg.setTimeStamp(0.371415174629937);
    msg.setSource(5063U);
    msg.setSourceEntity(105U);
    msg.setDestination(41166U);
    msg.setDestinationEntity(140U);
    msg.severity = 248U;
    msg.text.assign("FERNLVERPHVOOVIZQKDNWGTVQBDNFSNSCMHGBAHOOLGXFOSQLBNNDUJUHLWPXKEWQKBXQOLMAHIHVYFOUPVQCCJZNKHKQCXYJWLZSESBWFFGJAKMMNEXFGSUPEZITCVJMTMITDYLTXWITKGVRXEDBXZOVWTUIFCDTCSIUWJBSQPAZUYPJYGRDJAUVYACMLBJRUGRYMBFRZQAFIXZPEKLINGWYSKTEHJZOCPMNZRADAPKASUMLHBCRTDXOH");

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
    msg.setTimeStamp(0.47594900612397417);
    msg.setSource(35754U);
    msg.setSourceEntity(220U);
    msg.setDestination(4458U);
    msg.setDestinationEntity(64U);
    msg.channel = -108;
    msg.value = -1101666937;
    msg.gain = 181U;

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
    msg.setTimeStamp(0.8389699989833009);
    msg.setSource(18981U);
    msg.setSourceEntity(212U);
    msg.setDestination(45061U);
    msg.setDestinationEntity(37U);
    msg.channel = -27;
    msg.value = -1987063728;
    msg.gain = 169U;

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
    msg.setTimeStamp(0.6068955071581473);
    msg.setSource(60168U);
    msg.setSourceEntity(81U);
    msg.setDestination(31017U);
    msg.setDestinationEntity(208U);
    msg.channel = -124;
    msg.value = 789246817;
    msg.gain = 102U;

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
    msg.setTimeStamp(0.41539850432786773);
    msg.setSource(19189U);
    msg.setSourceEntity(237U);
    msg.setDestination(23299U);
    msg.setDestinationEntity(215U);
    msg.ch01 = 0.5633662599216069;
    msg.ch02 = 0.08910620550584802;
    msg.ch03 = 0.7728166481777349;
    msg.ch04 = 0.49716191366420603;
    msg.ch05 = 0.07044738586980182;
    msg.ch06 = 0.15195468190839767;
    msg.ch07 = 0.8844602698253766;
    msg.ch08 = 0.5721845133817698;
    msg.ch09 = 0.44660153053460494;
    msg.ch10 = 0.6793767338335153;
    msg.ch11 = 0.5428145042183762;
    msg.ch12 = 0.5897602096117484;
    msg.ch13 = 0.7817194502119938;
    msg.ch14 = 0.4706959822810075;
    msg.ch15 = 0.16245043521089886;
    msg.ch16 = 0.44220775298099313;

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
    msg.setTimeStamp(0.9454415783258469);
    msg.setSource(59307U);
    msg.setSourceEntity(94U);
    msg.setDestination(32187U);
    msg.setDestinationEntity(91U);
    msg.ch01 = 0.06438142961689453;
    msg.ch02 = 0.3427147995784041;
    msg.ch03 = 0.08491812929865228;
    msg.ch04 = 0.2602065063351554;
    msg.ch05 = 0.8499388884733766;
    msg.ch06 = 0.8706303717195581;
    msg.ch07 = 0.8795559327476995;
    msg.ch08 = 0.3386478307347268;
    msg.ch09 = 0.6844602354287044;
    msg.ch10 = 0.3691931470600479;
    msg.ch11 = 0.9910388730630845;
    msg.ch12 = 0.11995563478358073;
    msg.ch13 = 0.9054822616178634;
    msg.ch14 = 0.9864322927354803;
    msg.ch15 = 0.9046483305053732;
    msg.ch16 = 0.06895190874052493;

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
    msg.setTimeStamp(0.3822384507698784);
    msg.setSource(27878U);
    msg.setSourceEntity(121U);
    msg.setDestination(62951U);
    msg.setDestinationEntity(139U);
    msg.ch01 = 0.6119885259090937;
    msg.ch02 = 0.069594136191798;
    msg.ch03 = 0.22655215455889888;
    msg.ch04 = 0.5628824071319998;
    msg.ch05 = 0.7723432116006164;
    msg.ch06 = 0.3022049711934204;
    msg.ch07 = 0.13395992436363457;
    msg.ch08 = 0.6893533796487726;
    msg.ch09 = 0.6670288420291322;
    msg.ch10 = 0.08143976426987531;
    msg.ch11 = 0.9239713739470267;
    msg.ch12 = 0.26825835354170147;
    msg.ch13 = 0.0811483402155797;
    msg.ch14 = 0.5147529342091758;
    msg.ch15 = 0.31303729249924883;
    msg.ch16 = 0.845022515814934;

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
    msg.setTimeStamp(0.826962197120531);
    msg.setSource(65411U);
    msg.setSourceEntity(20U);
    msg.setDestination(13752U);
    msg.setDestinationEntity(176U);
    msg.op = 60U;
    msg.lat = 0.8288500327666104;
    msg.lon = 0.1337377965441794;
    msg.height = 0.777540518628841;
    msg.depth = 0.2755800778719042;
    msg.alt = 0.45627313901397537;

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
    msg.setTimeStamp(0.8172916735571544);
    msg.setSource(10850U);
    msg.setSourceEntity(148U);
    msg.setDestination(8447U);
    msg.setDestinationEntity(236U);
    msg.op = 241U;
    msg.lat = 0.6149851769088229;
    msg.lon = 0.8089563027311711;
    msg.height = 0.4693245396471467;
    msg.depth = 0.35099386359553053;
    msg.alt = 0.8235961585607416;

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
    msg.setTimeStamp(0.24585760962556957);
    msg.setSource(20620U);
    msg.setSourceEntity(137U);
    msg.setDestination(39553U);
    msg.setDestinationEntity(61U);
    msg.op = 8U;
    msg.lat = 0.38668401756034687;
    msg.lon = 0.2062610728941474;
    msg.height = 0.4792701746274086;
    msg.depth = 0.1870452594015285;
    msg.alt = 0.18937765606902257;

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
    msg.setTimeStamp(0.0031902578525294656);
    msg.setSource(58335U);
    msg.setSourceEntity(186U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(21U);
    msg.nbeams = 91U;
    msg.ncells = 177U;
    msg.coord_sys = 181U;

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
    msg.setTimeStamp(0.21147783362115613);
    msg.setSource(55237U);
    msg.setSourceEntity(71U);
    msg.setDestination(9969U);
    msg.setDestinationEntity(47U);
    msg.nbeams = 213U;
    msg.ncells = 241U;
    msg.coord_sys = 57U;

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
    msg.setTimeStamp(0.06554985591322338);
    msg.setSource(2744U);
    msg.setSourceEntity(54U);
    msg.setDestination(5128U);
    msg.setDestinationEntity(151U);
    msg.nbeams = 86U;
    msg.ncells = 206U;
    msg.coord_sys = 194U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.29408449478841414;
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
    msg.setTimeStamp(0.0019714349104388296);
    msg.setSource(2028U);
    msg.setSourceEntity(225U);
    msg.setDestination(62924U);
    msg.setDestinationEntity(2U);
    msg.cell_position = 0.49723194606190935;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8947627014050665;
    tmp_msg_0.amp = 0.62478041560465;
    tmp_msg_0.cor = 137U;
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
    msg.setTimeStamp(0.07626337663130267);
    msg.setSource(19754U);
    msg.setSourceEntity(75U);
    msg.setDestination(18746U);
    msg.setDestinationEntity(238U);
    msg.cell_position = 0.04865047119498822;

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
    msg.setTimeStamp(0.642718546352236);
    msg.setSource(28111U);
    msg.setSourceEntity(188U);
    msg.setDestination(12538U);
    msg.setDestinationEntity(163U);
    msg.cell_position = 0.1855719318217911;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.20675862157439073;
    tmp_msg_0.amp = 0.9585571349749112;
    tmp_msg_0.cor = 205U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0174744576565089);
    msg.setSource(40037U);
    msg.setSourceEntity(22U);
    msg.setDestination(27187U);
    msg.setDestinationEntity(38U);
    msg.vel = 0.793202561832366;
    msg.amp = 0.19874050280556887;
    msg.cor = 194U;

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
    msg.setTimeStamp(0.9637976166191103);
    msg.setSource(32109U);
    msg.setSourceEntity(124U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(207U);
    msg.vel = 0.9948002231715585;
    msg.amp = 0.35024774254229485;
    msg.cor = 226U;

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
    msg.setTimeStamp(0.3324643737392007);
    msg.setSource(22932U);
    msg.setSourceEntity(163U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(61U);
    msg.vel = 0.39710489621445777;
    msg.amp = 0.7723527613341017;
    msg.cor = 61U;

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
    msg.setTimeStamp(0.6456855214108688);
    msg.setSource(57568U);
    msg.setSourceEntity(134U);
    msg.setDestination(13334U);
    msg.setDestinationEntity(74U);
    msg.name.assign("GBEQFWXWALADEJKGU");
    msg.value = 136U;

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
    msg.setTimeStamp(0.4583071791452239);
    msg.setSource(62640U);
    msg.setSourceEntity(20U);
    msg.setDestination(47353U);
    msg.setDestinationEntity(81U);
    msg.name.assign("KEVYINBQSLKEDRATUPASFQRXNNJLHBEKKSBJFFOVNOIEBUIDWSDGMDCCHXMWVUHZAGKHVYOPIAUIGQCBXEZGQYFAHJWTCXSYMOBYHBYJXOUMDYFULFLTDWTITNZCMRZFJPQVPVDLETCBOMGSCXOPFMACVFKRNUVXEYWMWJXCGITJHARQPNK");
    msg.value = 116U;

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
    msg.setTimeStamp(0.5215805583318749);
    msg.setSource(45087U);
    msg.setSourceEntity(64U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(108U);
    msg.name.assign("QZQZWYJZCRRMSDQQQIEPRMUBBFXGJVOXXBAYUPAGNSYRBLYYFCQNTHLPPATKUUESWEDQVFZLHLSDCNR");
    msg.value = 60U;

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
    msg.setTimeStamp(0.5941142545459218);
    msg.setSource(22858U);
    msg.setSourceEntity(50U);
    msg.setDestination(10533U);
    msg.setDestinationEntity(2U);
    msg.name.assign("HPGCAJMZGLRXZDOOEHKXOOBQXZBEQDEJNWLUYYOWUUDWJCKHSTTBVRXHXXURTMQPEJDSHXOAPUMPQGGGWULYVDBEDXYECCJVYERQEFGSBTDPTQIYDASDSAKYLZUHHYUBLKASFMMNTLRVVEUIZNKT");

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
    msg.setTimeStamp(0.43351069879679627);
    msg.setSource(26899U);
    msg.setSourceEntity(141U);
    msg.setDestination(30284U);
    msg.setDestinationEntity(24U);
    msg.name.assign("IWHMJLKMREYWCGLZEIFYEJWWTSARMQFVBGFTTDLRQSCUQISEVBANUJHFFDRUARVJZLMBPDZDZDSXVSSCCCPLTPAHAASKPDZPAZAKQLYFXWMBOKHZFNERIUVGTNSXQJWZWKTKGWIYVGN");

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
    msg.setTimeStamp(0.13772734278259136);
    msg.setSource(50647U);
    msg.setSourceEntity(140U);
    msg.setDestination(13041U);
    msg.setDestinationEntity(18U);
    msg.name.assign("IDUJCWDPQFVBRCKCXIEWUXOGMGAKODSABSUTGSLKFDCJDLEDGNLUOVMOKNORDFKZDPMQHBPIOMQERBVSPSAAIXZRLAWJPPPCFOFEKWYSTZTQRVBCPQHMVNHGJGULKBHCYNVTGHHRRCMJGXAJI");

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
    msg.setTimeStamp(0.8072192205078879);
    msg.setSource(32982U);
    msg.setSourceEntity(19U);
    msg.setDestination(9242U);
    msg.setDestinationEntity(247U);
    msg.name.assign("QZUDBRKPDTFYCVDWOUTBOIETBDXEOWSNGUBQLXQOQUYMMRHDIZVVECUMFKFLJWZKWZRPPWOVZDASKGITXXNFLEGMAHJEVIJCYOVBWYHFWIARONHJQNR");
    msg.value = 55U;

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
    msg.setTimeStamp(0.18983666953350864);
    msg.setSource(36377U);
    msg.setSourceEntity(223U);
    msg.setDestination(40459U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ANHVGYIEKDWKFLTNSXTXVYCSKMQLLVQIIUHVQGTDPHXEVOBABCQRKCSAKGQOVHZZMABERKJIEGFFGPUOZLGODZBTAMSWNNOEDYFTSFBYZOIHMOGXPGMLOXRGPPEQRKMJPEKAXTBKNSYXTVSDCLYRJUFUWFUYHCNBMHFANMWIHVQKSUMWLSDBJNYDEWQICTPRYBEXPIJLX");
    msg.value = 0U;

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
    msg.setTimeStamp(0.9266513965101651);
    msg.setSource(9557U);
    msg.setSourceEntity(127U);
    msg.setDestination(18529U);
    msg.setDestinationEntity(139U);
    msg.name.assign("CXCSVVQLJYRLQEJNTBOZDILLMOUIKEBGFPXJHNMMSSOELCNDCBHRAMLFBWPYJETLNKZWIEFRMTWYPMUMHJWEGRBYYZJQSXXIUKZYXAOTQCGOVBFIJJWIEOSGUCGWSGYNZJSANZZHUUGCWNHODMQYWUBAHPKJYWDTNMDFV");
    msg.value = 132U;

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
    msg.setTimeStamp(0.787614475481276);
    msg.setSource(5543U);
    msg.setSourceEntity(242U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(49U);
    msg.value = 0.16443331489254154;

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
    msg.setTimeStamp(0.177049138530868);
    msg.setSource(9657U);
    msg.setSourceEntity(119U);
    msg.setDestination(36346U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7346566780131231;

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
    msg.setTimeStamp(0.15139145354314265);
    msg.setSource(53092U);
    msg.setSourceEntity(157U);
    msg.setDestination(25976U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6131416410910104;

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
    msg.setTimeStamp(0.03493445249415206);
    msg.setSource(44922U);
    msg.setSourceEntity(103U);
    msg.setDestination(60237U);
    msg.setDestinationEntity(85U);
    msg.value = 0.44373349336811596;

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
    msg.setTimeStamp(0.7977895110487561);
    msg.setSource(22558U);
    msg.setSourceEntity(73U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(130U);
    msg.value = 0.620234972525671;

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
    msg.setTimeStamp(0.6818835757862413);
    msg.setSource(31002U);
    msg.setSourceEntity(6U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7968586503214661;

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
    msg.setTimeStamp(0.4957957042422967);
    msg.setSource(26483U);
    msg.setSourceEntity(176U);
    msg.setDestination(26208U);
    msg.setDestinationEntity(56U);
    msg.value = 0.8541099319131077;

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
    msg.setTimeStamp(0.2926182985057876);
    msg.setSource(9773U);
    msg.setSourceEntity(239U);
    msg.setDestination(3012U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7037024595140428;

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
    msg.setTimeStamp(0.799388819522693);
    msg.setSource(10283U);
    msg.setSourceEntity(115U);
    msg.setDestination(404U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7235538373917024;

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
    msg.setTimeStamp(0.26652489197572005);
    msg.setSource(33304U);
    msg.setSourceEntity(4U);
    msg.setDestination(31103U);
    msg.setDestinationEntity(105U);
    msg.restriction = 116U;
    msg.reason.assign("IYIMNSRVXADTDSTFHELYOVHIWBKFOMIZVFSJXCKZVSWKNAPJCWNDOAWPYUDQHIAKPUOMSDKQFGCPVWRYQRJJXZDSUVCEEHTLBQEKMVRMVMSAPFBTFJLOTONPGHTTFOMOAEDZXZMKBHYQ");

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
    msg.setTimeStamp(0.13069799596353981);
    msg.setSource(16191U);
    msg.setSourceEntity(101U);
    msg.setDestination(55407U);
    msg.setDestinationEntity(13U);
    msg.restriction = 30U;
    msg.reason.assign("MBGLIJATDFDKNCYJLTPBQTEJTCLKCPIMHIIMLNYLWOFJPFOXAZOXFZVQETTMOYIZNPNCBHBDECHMNCPEPXVTQRIXUYOWJIGIJKGELJHNQIYFYBYWMDZTQLUBBPOHEZEBAPAAKKUKUJCKGHXUSSSRAFDDSGGMDUTC");

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
    msg.setTimeStamp(0.7466360226203727);
    msg.setSource(12095U);
    msg.setSourceEntity(236U);
    msg.setDestination(42871U);
    msg.setDestinationEntity(40U);
    msg.restriction = 39U;
    msg.reason.assign("FTMFDSHTZXDWNLIBFPLVQJMAONBMKVCDDVLLVQHRDOCFBKHWBWXZJLLRLZOCKOWFGZODMDCYYCRGKUPWMEOMEXEZMCTYAQXJGIJNBWWUQXOBULAKUXEZIYSVEQSAPPNBNRINJZHPUTKHJMTMCPNUXZOSJLOMRAZXYYASSUEYSJVNQQRSARTPGJCNHFPHXERWGUITHFVPXJEA");

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

  {
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.2069506446474203);
    msg.setSource(19427U);
    msg.setSourceEntity(7U);
    msg.setDestination(29356U);
    msg.setDestinationEntity(206U);
    msg.topic.assign("HJSEJFTTDVUQDIORHNYQWPFQSYCQYOJFYPJVNAKERPMWQECZBVQC");
    const signed char tmp_msg_0[] = {-68, -40, 102, -20, -100, -89, 70, -54, -81, -90, 3, -4, 30, -75, 35, -109, -122, -86, 50, 10, 105, -53, 60, -91, 28, 65, 5, -127, -17, 40, 19, -116, 85, -77, -112, -9, 116, 17, -23, -4, -109, -7, -44, -10, 121, -88, 9, -81, 79, 82, 48, -8, 67, -80, -105, 89, -72, 13, 76, -32, 42, 50, -65, 13, 108, 89, -93, -112, 34, -87, 71, -121, 13, 123, 41, 104, -114, -49, 41, -57, -97, -52, 126, -71, 66, 104, 47, 100, -51, 99, -99, 32, -17, 9, -4, -66, -111, 59, -25, 78, 11, 98, 74, -19, 126, 69, -119, -84, 59, 126, -34, -1, -37, 92, 71, 83, 71, 46, -16, -20, -68, -15, 16, 8, 20, -54, 91, 95, 69, -37, 98, 125, -47, 53, -81, -79, 102, -127, -9, 6, 125, -89, -79, -103, 54, 21, 120, 102, -76, -103, 7, -67, 52, -76, -12, -27, 25, -3, -1};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.21434283003164212);
    msg.setSource(19243U);
    msg.setSourceEntity(139U);
    msg.setDestination(48513U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("MEGRMAAGPTQIMSVHZLRWGUJBJULECZUSHQSOPAJWDKEXZDVAVNNOECSTSKAZTEMLQNPYGHVADFEGFPTHVBWQWVDXWWYLNUASMPIIBJTFKYYCVUJYZQUQHSRGGKKIQXVTXKJFDKMJURGDPACIERMHILNXWLXC");
    const signed char tmp_msg_0[] = {77, -54, -109, 114, 67, 125, -104, 60, 58, -66, -40, -18, -123, -81, 18, -108, 82, -122, -72, -68, 56, -25, 36, -91, 56, -92, -4, -69, 108, -87, 109, 7, -41, -114, 120, -44, -104, -93, 110, 35, -16, 104, -32, -57, -85, -6, 14, 79, -122, -75, -83, -67, -71, 115, 44, -28, -95, -52, 7, 117, -26, -80, 51, 35, -124, 92, -2, -13, 58, -96, -79, -96, 113, 49, 66, 60, -124, 55, -27, -124, 51, -94, 32, -121, 49, -100, 42, -89, -41, 62, 85, -63, -19, 4, 18, 58, -58, -61, 121, -107, 120, 8, -35, -59, -60, 2, 2, -34, 37, 66, -89, -75, -2, 61, 49, 47, -44, 87, -118, 77, 90, -37, 101, 50, 115, 48, -62, 102, -83, 43, -9};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttTXFrame msg;
    msg.setTimeStamp(0.935593339806361);
    msg.setSource(15669U);
    msg.setSourceEntity(86U);
    msg.setDestination(59328U);
    msg.setDestinationEntity(152U);
    msg.topic.assign("ELXCZSNTUUNTRXWHAJBAKZGDDCZMNKFEYFPIDRRAZZB");
    const signed char tmp_msg_0[] = {18, 40, 48, -9, -42, -54, 60, 61, 25, -97, 51, 23, -46, -73, -63, 28, -121, -18, -64, -64, -17, 46, -83};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttTXFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.6800807177566716);
    msg.setSource(23981U);
    msg.setSourceEntity(254U);
    msg.setDestination(59629U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("ILBFQCMFZESQRFLBNQTUBXASTVNUESGLIFQPODOZNDWRWBYAGQOJYCYPXFVYGHYEXWEWPJUVFVSLEYNVAGNFEPZLREXBYIHRNZLUOVLTJJTUZUZKUKSRKHHOMHUXPEANG");
    const signed char tmp_msg_0[] = {14, 17, 6, 34, -36, -37, -22, 59, 95, 116, -66, -11, -109, -50, -69, -114, -119, -95, -40, -6, 54, -61, 14, 91, -59, 80, -9, 19, 47, 69, 103, -76, 74, -80, 78, -82, 55, 125, 86, 38, -85, 37, -53, 14, -66, -52, -43, -128, -36, -12, -118, 20, -47, 24, 8, -64, -100, -54, -76, 64, 106, 120, -20, -17, -61, -27, -122, 3, 24, 79, 14, 93, -118, 1, -26, -55, -5, -79, -22, 39, -86, 16, 25, 50, 18, -18, -2, -96, 39, 24, 36, -79, -69, 7, 43, -30, 81, -1, -95, 94, 61, -91, -44, -70, -62, 100, -120, -111, 118, -13, -9, -124, 110, 48, -52, 45};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.5295871028933969);
    msg.setSource(57782U);
    msg.setSourceEntity(207U);
    msg.setDestination(21917U);
    msg.setDestinationEntity(145U);
    msg.topic.assign("CMAQVKILZPNYOUKNMROEGSBFEEXUZQPRLQBRVIKWFWHWTUZJJDSVQVAIBJVXORCTGKNABALTDZZYCUPXHDBIFJPLTLPTZEWYXJMONTVSMOQPFKLLEOHCMWXNSJPCMPFTELLK");
    const signed char tmp_msg_0[] = {72, 64, 90, 18, 24, -121, -16, -15, 22, -34, -81, 101, 49, -100, 119, 44, -92, 76, -16, -127, -34, -8, -89, -66, -99, 81, -2, 29, -54, -118, 115, 94, 54, 121, 81, -85, -92, -123, -98, -24, 71, -96, -49, 66, 55, 99, -26, 67, 38, 121, 98, -27, 93, -124, 45, 52, -60, 93, -88, -124, 4, -50, 48, -79, 26, 44, -98, -76, -113, -13, 75, -95, -122, -105, 87, 12, -34, -63, -76, -49, -51, -83, 104, -67, 81, 7, 34, -88, -20, -58, -113, -7, 72, -113, -60, 94, -6, 72, -33, 27, -43, -97, 47, -111, 64, 106, -19, 67, -22, 66, 14, -94, 39, 125, 31, 21, -14, -29, -66, 121, -18, 29, -57, 80, -65, -81, 105, -115, 95, -11, -96, -23, -2, -40, 27, 33, 13, -38, -126, 23, -37, 92, 126, -77, -125, 97, -86, 24, 102, -127, -18, -108, 0, -42, 40};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MqttRXFrame msg;
    msg.setTimeStamp(0.23304041850158452);
    msg.setSource(29934U);
    msg.setSourceEntity(74U);
    msg.setDestination(48971U);
    msg.setDestinationEntity(132U);
    msg.topic.assign("QIZEWAHHVKSDXZOXHXCOXEIWGSLAHMOCVUPTSKYPWNUCABNJEEXQMIJIFPUORLFOEFGQJCKLTJKQRRTQOTMDW");
    const signed char tmp_msg_0[] = {-126, 75, -102, -21, -125, 118, 73, -110, -68, -46, -9, 80, 52, 110, 125, 6, 124, -39, -102, -41, 16, -69, -7, 84, 63, -70, -109, -96, -63, -34, 61, 121, -103, 89, -122, -29, -14, 111, 53, 49, 24, 38, -118, -52, -62, -87, -117, -102, -37, -104, -65, 36, 2, -53, 95, 73, -93, 9, -71, -60, -21, -45, 118, -33, -100, 70, -51, -114, -120, -44, -85, 70, -101, -127, -51, 94, 40, 6, -10, 106, -26, 115, 102, 12, 116, -92, 113, 115, 89, 33, 88, 20, 35, -33, -53, -94, -119, -35, -110, 89, 36, 2, -128, -63, -1, 85, -85, -71, 93};
    msg.payload.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MqttRXFrame #2", msg == *msg_d);
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
