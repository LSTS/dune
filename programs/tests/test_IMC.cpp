//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: c49b27aa4bcdc6ad012fe602fbe29bb8                            *
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
    msg.setTimeStamp(0.63990713829);
    msg.setSource(42579U);
    msg.setSourceEntity(66U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(225U);
    msg.state = 223U;
    msg.flags = 39U;
    msg.description.assign("PNQSKYIAHTNPUTNSNJPEIEWBKTBNTFWMRQOMRGDTJFTDFYUUMKXUBXCOUKKPUGAAWIVVIPXVKAHARSXZQYIILNGFWTDMZLXCTWCDXLPGAJHSVBQAOMHHDZNSOBUKLQGPFXIGREJZMFYHZYWRDUJRLWJCWEHOGJMLCPKJQYUTEMALIXEDDKMMVPAYVTEFZOVZPHCZJJYRQAYLERIRRENZBCSBFCWHHVLYFGSOBKQCXODVBBNWOSGDG");

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
    msg.setTimeStamp(0.335656717433);
    msg.setSource(45581U);
    msg.setSourceEntity(27U);
    msg.setDestination(46550U);
    msg.setDestinationEntity(196U);
    msg.state = 89U;
    msg.flags = 70U;
    msg.description.assign("KQZTXGCJDLVFDSVHMUGADCPPWVJUAOUJKTQGDVHPWZKYWNCYGYTLPOQAVJDBTBYEVHRSYNBRJRYAGRHXWQGACQLCSZBXPAIFBOSLQSWTIUBENZFCIRNFXIXRHEKQIHZOEKBYYEKUSPMLGFHDTVNLSNKZXMOMLCGUVCAEKCMEDQVGXJYFZOLURMKIIINFOHGATAEDQTZFJRBUPTXDRMEARNOZPPMUC");

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
    msg.setTimeStamp(0.0436536272595);
    msg.setSource(27414U);
    msg.setSourceEntity(15U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(184U);
    msg.state = 11U;
    msg.flags = 64U;
    msg.description.assign("YOVWDVVMMLIVAAJBGWJKCZHBRGSEPYRLKHBPAQPZHYRQHUWKATRWLZXVFGYNCNAMKXLFXDKOZUXWRLJIFKDZCSFNTTFMW");

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
    msg.setTimeStamp(0.15833777512);
    msg.setSource(32702U);
    msg.setSourceEntity(132U);
    msg.setDestination(26637U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.422457013737);
    msg.setSource(20306U);
    msg.setSourceEntity(116U);
    msg.setDestination(19037U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.785089248681);
    msg.setSource(64385U);
    msg.setSourceEntity(118U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.369190573842);
    msg.setSource(3848U);
    msg.setSourceEntity(1U);
    msg.setDestination(57278U);
    msg.setDestinationEntity(253U);
    msg.id = 65U;
    msg.label.assign("NDIWBHSFJOUANIFCPJTQDJEPXLXLBZYAOJDDSJGQZSWVYUG");
    msg.component.assign("LDNMGFPSZBTDOIJWZBFXXFEIOIWJQVBVHRETQ");
    msg.act_time = 59983U;
    msg.deact_time = 37047U;

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
    msg.setTimeStamp(0.750531857435);
    msg.setSource(16955U);
    msg.setSourceEntity(18U);
    msg.setDestination(32398U);
    msg.setDestinationEntity(89U);
    msg.id = 250U;
    msg.label.assign("VMOTGUVAULHKFXUXBTNPKVDWCSDNAIGATEBHHDJCEZBWALTKMWYNIAELUYPCNWZHZBOMFITLREEZGPTZXPPKWOAONIXPYRPZOQIXRDPJWXJYJEKMCHDRFEYFKUZUNRSIRYQCOQHXPSOEBSLJYQCGQMGBSEWQJVQOCFGNKGCMQDVZWVBKQYJBLY");
    msg.component.assign("FLBOMLLFQUFEUKZSKMJRKIGRNNWIAUYAVTPBBVUUVZZGKGEDACTMOYNHAAHMVMLSIYSCTFVQMJEEHIHDIZLNIFQXCEPGHJCVTPDUYXFOKGQWZUKHZEOYCDXGARDWYBJCIOHVMWOTPALEDOCKBWDINKGWFLNVSXYRKWCLCNFXUSBAJUHPRFZALZRQT");
    msg.act_time = 61162U;
    msg.deact_time = 16747U;

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
    msg.setTimeStamp(0.193391963837);
    msg.setSource(19569U);
    msg.setSourceEntity(46U);
    msg.setDestination(17659U);
    msg.setDestinationEntity(246U);
    msg.id = 49U;
    msg.label.assign("RHODVICYIFOTNLMHDMFXERFORAFYBOCYUYJLVQYZTRZPDSMUKVYWP");
    msg.component.assign("QFQYUTOFVSAPEDZNDABDYBMVYRYXPZZQZKSACLTKHPEQIXARSVKEFTMFWBXFTUCLOHKTQMDGMNPNJOZFPZBXSONBXOHOZUOROGNRDSVWRMACLBVQRSJLIIVJSMCHUYUSGAWCXYLJTCIICFPKZNVKNOJKURLQHTLPYFSGUWHRHVJKNYHNUIUDKEEHG");
    msg.act_time = 31309U;
    msg.deact_time = 4441U;

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
    msg.setTimeStamp(0.484319374524);
    msg.setSource(10367U);
    msg.setSourceEntity(76U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(254U);
    msg.id = 33U;

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
    msg.setTimeStamp(0.295511893036);
    msg.setSource(61793U);
    msg.setSourceEntity(196U);
    msg.setDestination(47307U);
    msg.setDestinationEntity(83U);
    msg.id = 164U;

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
    msg.setTimeStamp(0.343977388027);
    msg.setSource(64241U);
    msg.setSourceEntity(251U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(227U);
    msg.id = 89U;

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
    msg.setTimeStamp(0.171688245829);
    msg.setSource(15068U);
    msg.setSourceEntity(198U);
    msg.setDestination(33858U);
    msg.setDestinationEntity(6U);
    msg.op = 31U;
    msg.list.assign("TNAVLZCKXWRBJOLHGUPDJDDHLOMGJZCUCEOZCEGVTFSVHDSQZWGMYRRIUSONONCEOVDXEFIRWMGNLLPYFABLBFIQSUAHEKEUNPRBUFOBLGVJXXBZIKVEVYIPNXJCAEKZVAMSQNCNNQKOPHQHTERURXILYWGKIFQ");

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
    msg.setTimeStamp(0.696147135638);
    msg.setSource(22208U);
    msg.setSourceEntity(253U);
    msg.setDestination(36401U);
    msg.setDestinationEntity(44U);
    msg.op = 80U;
    msg.list.assign("GNDEHOMBIIEXLWOTVESCBYJBCHGJEYAIUKYBMZYMLHMFLGKWXFGSPHGQKJFNBOWXNLYRBWDUVHVPDNPSZAPUFFIAJOHXXXKTNUCIWORGASWCAZIQRPOYUJKIKBMQRMHGMHVFJQYZPEYOUCWZWNFPSLVGALNJDDL");

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
    msg.setTimeStamp(0.312154262403);
    msg.setSource(35952U);
    msg.setSourceEntity(234U);
    msg.setDestination(56997U);
    msg.setDestinationEntity(147U);
    msg.op = 125U;
    msg.list.assign("OOCMDXPSTKAGDIIWRZQYLCZEYJWZPNMUYXYDRKJGAMZNXQOHNTLMOSGKVOCCKUIAUVPUTFPNROFWCMQV");

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
    msg.setTimeStamp(0.352660351206);
    msg.setSource(48061U);
    msg.setSourceEntity(163U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(80U);
    msg.value = 253U;

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
    msg.setTimeStamp(0.638278382794);
    msg.setSource(9852U);
    msg.setSourceEntity(105U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(27U);
    msg.value = 94U;

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
    msg.setTimeStamp(0.464834372302);
    msg.setSource(64411U);
    msg.setSourceEntity(138U);
    msg.setDestination(54329U);
    msg.setDestinationEntity(51U);
    msg.value = 170U;

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
    msg.setTimeStamp(0.531153291986);
    msg.setSource(51440U);
    msg.setSourceEntity(175U);
    msg.setDestination(47636U);
    msg.setDestinationEntity(86U);
    msg.consumer.assign("GDZLMJXQPPHYOTCSYETHKEOVAKKFMRMLADHZNJMVPRCHFTYFXCZATNBPROKRJSOAEWHEAHYUIH");
    msg.message_id = 50426U;

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
    msg.setTimeStamp(0.417188162398);
    msg.setSource(36478U);
    msg.setSourceEntity(194U);
    msg.setDestination(56967U);
    msg.setDestinationEntity(33U);
    msg.consumer.assign("DENDADPHLTSEKXAJQPFJBASQZBMWKEBMSQWVEGVVWYOBXSWXEUITGK");
    msg.message_id = 55316U;

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
    msg.setTimeStamp(0.69821133433);
    msg.setSource(36939U);
    msg.setSourceEntity(157U);
    msg.setDestination(32910U);
    msg.setDestinationEntity(90U);
    msg.consumer.assign("SREPYEFKJPAWSDPVNILEIARHWWOJXJASHSMXVBOROMQZJFYBBGEWIYWGHEMYTCKKYMZDSFCQACGQVLXRHNQFRGVAFEDBGBUGJNYORZWJYOFNQOMJBAITPZHYCQVDGMWZKAKVKIZXKUCIWMTBQTLEQUYZPLOUJBSRRDOWVNHQNRKHLSED");
    msg.message_id = 9053U;

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
    msg.setTimeStamp(0.414388480064);
    msg.setSource(33980U);
    msg.setSourceEntity(55U);
    msg.setDestination(24338U);
    msg.setDestinationEntity(130U);
    msg.type = 9U;

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
    msg.setTimeStamp(0.534786832456);
    msg.setSource(50627U);
    msg.setSourceEntity(154U);
    msg.setDestination(31485U);
    msg.setDestinationEntity(156U);
    msg.type = 181U;

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
    msg.setTimeStamp(0.743585132905);
    msg.setSource(39790U);
    msg.setSourceEntity(2U);
    msg.setDestination(62239U);
    msg.setDestinationEntity(79U);
    msg.type = 209U;

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
    msg.setTimeStamp(0.856089056626);
    msg.setSource(43988U);
    msg.setSourceEntity(236U);
    msg.setDestination(37155U);
    msg.setDestinationEntity(20U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.699287277348);
    msg.setSource(54897U);
    msg.setSourceEntity(234U);
    msg.setDestination(5257U);
    msg.setDestinationEntity(25U);
    msg.op = 77U;

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
    msg.setTimeStamp(0.104458605696);
    msg.setSource(20912U);
    msg.setSourceEntity(209U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(108U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.855895579404);
    msg.setSource(44471U);
    msg.setSourceEntity(135U);
    msg.setDestination(17536U);
    msg.setDestinationEntity(41U);
    msg.total_steps = 127U;
    msg.step_number = 140U;
    msg.step.assign("BWVHLSHQHDLFPELJMONROQJKOEZNDMLHNPFEQYUCTVOSILXEDHMHTJQCGPKXSFZVSKXZDZYWXBUGQITJCURRVPLMPVPZSGFCKSOCLPLEEGONKRVIEGRNBVUHCYU");
    msg.flags = 97U;

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
    msg.setTimeStamp(0.750967631935);
    msg.setSource(42350U);
    msg.setSourceEntity(93U);
    msg.setDestination(32728U);
    msg.setDestinationEntity(127U);
    msg.total_steps = 72U;
    msg.step_number = 37U;
    msg.step.assign("UECBSHOZEIESIEQSJERTAWQPSLAZJPWUKDLLDYHGNELNTHFLFPMCZXPQBCTSOKGQDNBBZXSGFCDTJZYVJMIUYJOWYKNXXGXEBHNMHTSZRAQXUSFLTWCEHJWIOJKCYCUZZYEQRRYGQVCVSUMNZXBMBTVRFAXIFNDMNKBHBQIOXUTOKRRGWVKPYKJ");
    msg.flags = 52U;

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
    msg.setTimeStamp(0.257124984675);
    msg.setSource(5173U);
    msg.setSourceEntity(235U);
    msg.setDestination(35544U);
    msg.setDestinationEntity(7U);
    msg.total_steps = 80U;
    msg.step_number = 198U;
    msg.step.assign("DLQPJYRYTYEKGFZXKFHDZOJQUEWHSBAPVXOJYAGIILJND");
    msg.flags = 82U;

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
    msg.setTimeStamp(0.691565736768);
    msg.setSource(1481U);
    msg.setSourceEntity(196U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(210U);
    msg.state = 20U;
    msg.error.assign("ZWUJBLERLXNIKDXGHYMUQMEDKZZFAQPYOEGXHYELSMHVNVGXF");

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
    msg.setTimeStamp(0.542180766061);
    msg.setSource(49881U);
    msg.setSourceEntity(235U);
    msg.setDestination(24241U);
    msg.setDestinationEntity(242U);
    msg.state = 88U;
    msg.error.assign("MMUPWYFLAMAKSFCEAKXLLREZIJXGGROWZBLQWTXHXYRBIVAVEVWCVGLJHPCJATHKVQJNENYBUMITJLCXFBQFIJVBUYCFEGFQIWQFNMLEPDSMIUKQNADDVLFHJKNKHAGUDHOONFYOZUGSDZFNVCXGMGZUGHTRRQNPHBMDWOPBPPTWYQXSUIO");

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
    msg.setTimeStamp(0.493711245914);
    msg.setSource(33012U);
    msg.setSourceEntity(149U);
    msg.setDestination(60936U);
    msg.setDestinationEntity(188U);
    msg.state = 114U;
    msg.error.assign("QTTXGSLMFVAMCLJLORKECMBBIVKGABFMEZJSSJYNSFWBJZSH");

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
    msg.setTimeStamp(0.273793097291);
    msg.setSource(65503U);
    msg.setSourceEntity(28U);
    msg.setDestination(28175U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.478229085222);
    msg.setSource(57796U);
    msg.setSourceEntity(224U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.677920011685);
    msg.setSource(41224U);
    msg.setSourceEntity(190U);
    msg.setDestination(32945U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.781032443305);
    msg.setSource(57718U);
    msg.setSourceEntity(155U);
    msg.setDestination(63596U);
    msg.setDestinationEntity(140U);
    msg.op = 230U;
    msg.speed_min = 0.931288356151;
    msg.speed_max = 0.668478170094;
    msg.long_accel = 0.245228372849;
    msg.alt_max_msl = 0.254622087274;
    msg.dive_fraction_max = 0.0105445378035;
    msg.climb_fraction_max = 0.767101050721;
    msg.bank_max = 0.470135863907;
    msg.p_max = 0.810976934563;
    msg.pitch_min = 0.53444943933;
    msg.pitch_max = 0.712936497847;
    msg.q_max = 0.797769559137;
    msg.g_min = 0.879303876568;
    msg.g_max = 0.395816304731;
    msg.g_lat_max = 0.2123201913;
    msg.rpm_min = 0.749510896073;
    msg.rpm_max = 0.465307588391;
    msg.rpm_rate_max = 0.0900333710619;

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
    msg.setTimeStamp(0.135299390864);
    msg.setSource(51626U);
    msg.setSourceEntity(204U);
    msg.setDestination(35205U);
    msg.setDestinationEntity(127U);
    msg.op = 87U;
    msg.speed_min = 0.379031560334;
    msg.speed_max = 0.4547371402;
    msg.long_accel = 0.930121130743;
    msg.alt_max_msl = 0.925822247754;
    msg.dive_fraction_max = 0.112227193137;
    msg.climb_fraction_max = 0.745001653342;
    msg.bank_max = 0.283149117591;
    msg.p_max = 0.779922733829;
    msg.pitch_min = 0.577336900831;
    msg.pitch_max = 0.873866961661;
    msg.q_max = 0.723040444651;
    msg.g_min = 0.761385383318;
    msg.g_max = 0.235989097348;
    msg.g_lat_max = 0.44354496473;
    msg.rpm_min = 0.802735005655;
    msg.rpm_max = 0.331911707005;
    msg.rpm_rate_max = 0.313183513796;

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
    msg.setTimeStamp(0.991302627702);
    msg.setSource(14255U);
    msg.setSourceEntity(240U);
    msg.setDestination(64932U);
    msg.setDestinationEntity(244U);
    msg.op = 135U;
    msg.speed_min = 0.0895055107735;
    msg.speed_max = 0.24301526536;
    msg.long_accel = 0.0074918502523;
    msg.alt_max_msl = 0.0241233118783;
    msg.dive_fraction_max = 0.30554062877;
    msg.climb_fraction_max = 0.530586683953;
    msg.bank_max = 0.0109976036789;
    msg.p_max = 0.824213324909;
    msg.pitch_min = 0.497401803039;
    msg.pitch_max = 0.865390535543;
    msg.q_max = 0.478286237557;
    msg.g_min = 0.710691804231;
    msg.g_max = 0.12193483251;
    msg.g_lat_max = 0.844848183836;
    msg.rpm_min = 0.512042598281;
    msg.rpm_max = 0.629872738807;
    msg.rpm_rate_max = 0.28357469629;

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
    msg.setTimeStamp(0.984655630115);
    msg.setSource(63586U);
    msg.setSourceEntity(139U);
    msg.setDestination(4369U);
    msg.setDestinationEntity(135U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 58997U;
    tmp_msg_0.status = 162U;
    tmp_msg_0.text.assign("ZKUXPJWQWHIAGVAWGKSQCBCRPIBMJKQBXMIWQKHJOYYTMZCQKGUFRTQAJUATBMEATANJVGPGJZQTFDDIQOWPGEBJIYQMRBYLRBTANELNYRTZEGIBXRFNWAEBOLDHIXYOFMTYDNQFNXOIMRDCWOCOERCSHSSAKHUDYKIHVDEDUXPLUVSWFUGD");
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
    msg.setTimeStamp(0.765705903185);
    msg.setSource(1953U);
    msg.setSourceEntity(30U);
    msg.setDestination(44919U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.0208317288037);
    msg.setSource(12680U);
    msg.setSourceEntity(9U);
    msg.setDestination(57986U);
    msg.setDestinationEntity(74U);
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredZ tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.783558984849;
    tmp_tmp_msg_0_0.z_units = 107U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 57329U;
    tmp_msg_0.custom.assign("LWBHNEPUWZPYXWKCROZGUUENMASFBXXHAMBEAEGJXNCKZNOFXCFNIFHQYNSPDZPUQIOZTHARIWTDCDRQLQSJMHRROLKJGSSLMEUQGSBHQADCMEYLMDWJKHFPWRGTGVRTKYZFERCVVVZDNFYBKPYERRPHVOIUFVUYQSMLJJYPSDZBYUGVQIAGXVFPOOTKXKXLBQ");
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
    msg.setTimeStamp(0.365588269249);
    msg.setSource(61331U);
    msg.setSourceEntity(24U);
    msg.setDestination(52068U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.165434964755;
    msg.lon = 0.460735487232;
    msg.height = 0.744262823212;
    msg.x = 0.622296123618;
    msg.y = 0.912366168446;
    msg.z = 0.489354331407;
    msg.phi = 0.902529844564;
    msg.theta = 0.745908712797;
    msg.psi = 0.876617014332;
    msg.u = 0.743742274893;
    msg.v = 0.511476421576;
    msg.w = 0.699803099305;
    msg.p = 0.403049239416;
    msg.q = 0.625969983602;
    msg.r = 0.654716846807;
    msg.svx = 0.495597750787;
    msg.svy = 0.598549084857;
    msg.svz = 0.500413086878;

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
    msg.setTimeStamp(0.882327688903);
    msg.setSource(5492U);
    msg.setSourceEntity(215U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.373073651168;
    msg.lon = 0.530797460349;
    msg.height = 0.703545569381;
    msg.x = 0.127988070537;
    msg.y = 0.319022830657;
    msg.z = 0.21760466972;
    msg.phi = 0.419407888395;
    msg.theta = 0.312652636594;
    msg.psi = 0.226603941539;
    msg.u = 0.613625671746;
    msg.v = 0.608324503287;
    msg.w = 0.495774887752;
    msg.p = 0.0597484287717;
    msg.q = 0.77408794358;
    msg.r = 0.168515659322;
    msg.svx = 0.336439029684;
    msg.svy = 0.920396251521;
    msg.svz = 0.351981279077;

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
    msg.setTimeStamp(0.442768398854);
    msg.setSource(7212U);
    msg.setSourceEntity(114U);
    msg.setDestination(12147U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.295986011452;
    msg.lon = 0.00960117816021;
    msg.height = 0.685759079519;
    msg.x = 0.999322595347;
    msg.y = 0.205861198527;
    msg.z = 0.688598358873;
    msg.phi = 0.695550310859;
    msg.theta = 0.401807818719;
    msg.psi = 0.973805175288;
    msg.u = 0.507727201816;
    msg.v = 0.380595566565;
    msg.w = 0.94530549131;
    msg.p = 0.833521247224;
    msg.q = 0.725350362562;
    msg.r = 0.538428453226;
    msg.svx = 0.991024490361;
    msg.svy = 0.911805947266;
    msg.svz = 0.157345556587;

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
    msg.setTimeStamp(0.206223973979);
    msg.setSource(40262U);
    msg.setSourceEntity(83U);
    msg.setDestination(4359U);
    msg.setDestinationEntity(138U);
    msg.op = 203U;
    msg.entities.assign("DFTZKFACFJLAIHXVEZMS");

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
    msg.setTimeStamp(0.88341012939);
    msg.setSource(39946U);
    msg.setSourceEntity(135U);
    msg.setDestination(18503U);
    msg.setDestinationEntity(5U);
    msg.op = 180U;
    msg.entities.assign("TWXXNCPAUSOXNUCDIZRFBOZFUHUGLDTPKNTXGRJLQBWSCENZGJWHDAJKNRCMHTLWEQJIMZOXEQKDSYSIWLRHMVVGAORUESZHZFYURVELSABNTGTDMHMJKJQQJ");

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
    msg.setTimeStamp(0.370794580136);
    msg.setSource(39232U);
    msg.setSourceEntity(63U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(222U);
    msg.op = 35U;
    msg.entities.assign("EHNVTDVPOODGAOJFSVFRZKXFWSMAITCQGCOKKKZHYILYXIGDBQUJUJKQQMQUJM");

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
    msg.setTimeStamp(0.947309236232);
    msg.setSource(9455U);
    msg.setSourceEntity(189U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(77U);
    msg.type = 115U;
    msg.speed = 18639U;
    const char tmp_msg_0[] = {-114, 121, -36, -61, -120, 18, 97, -66, 108, -118, -47, -92, 96, 28, 70, -34, -92, 29, 115, -76, 87, -114, -113, -87, 38, -83, 105, -1, -17, -37, -33, 72, 36, -70, -41, -36, -106, -12, 51, -46, 57, 11, -100, -58, -27, -63, 100, -93, -56, 74, 94, 4, -119, -64, 107, -75, -32, -106, 96, 68, -118, 52, 21, 59, -83, 16, 96, 32, -52, 21, -72, 43, -113, -25, -25, -128, -114, -51, -8, 78, 93, 103, 92, 103, -53, -23, -56, 116, -81, -43, -31, 8, 122, -44, -76};
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
    msg.setTimeStamp(0.586111940885);
    msg.setSource(24816U);
    msg.setSourceEntity(26U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(28U);
    msg.type = 111U;
    msg.speed = 38995U;
    const char tmp_msg_0[] = {123, 8, 111, -67, 60, -106, 69, -44, -77, 82, 70, -73, -19, 124, -18, 26, 90, 33, -99, -38, 57, 92, -51, 9, -53, 100, 10, -7, 107, -40, 101, -126, 54, 35, 111, -15, -64, 33, -101, 29, -13, 108, -98, 45, -12, -120, 91, 76, 94, 102, -77, -59, 106, -111, 59, -127, 0, 88, 16, -21, 81, 65, 72, -59, 41, 121, -13, -25, 105, -93, 108, 111, -127, -2, 59, -103, 99, -59, 111, 7, 44, 2, -74, 32, 70, -27, 108, -26, -18, -21, 64, 0, -5, 83, -90, 2, 40, -57, -62, 24, 83, -98, 24, -122, 101, -121, -26, -112, -28, -72, 89, -26, -115, -26, -20, -115, 48, 76, 93, -119, -127, 21, 83, 78, -15, -56, -84, -77, 122, 0, -94, 65, -61, -110, -91, 88, -66, 39, -117, 13, 54, -27, 113, -68, 45, 7};
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
    msg.setTimeStamp(0.554644220413);
    msg.setSource(46796U);
    msg.setSourceEntity(253U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(77U);
    msg.type = 249U;
    msg.speed = 15623U;
    const char tmp_msg_0[] = {8, -117, 42, 46, 85, 82, 65, -94, 123, 29, 114, 114, -11, -26, -71, 102, 6, 17, -47, -71, 39, -25, 49, -56, -33, -103, -103, 82, 84, 111, -2, -46, 30, 52, -13, -46, -50, 88, 117, -25, -58, -30, 66, -85, 101, -99, -101, -30, 47, -34, 90, -35, 90, -32, 52, -1, -63, -89, -123, -53, -46, 47, -119, 45, -40, 23, 13, 109, -96, -116, 81, 108, 86, 64, 48, -100, 55, 120, -33, -101, 6, -48, 81, -124, 56, -2, 39, 8, -39, -12, -127, -70, 86, -67, 90, 126, 81, -127, -124, 96, -91, -49, 27, 55, 123, -48, 44, -124, 19, 41, -32, -68, -82, -28, -118, 76, -118, -125, -33, 32, 31, -37, -44, -83, -79, 24, 42, -84, -61, 9, -123, 122, -48, 126, -93, -67, -25, 40, -101, -25, 39, 9, -36, -88, -37, 16, 124, -57, 58, -122, 95, -86, -38, -52, 20, -88, 76, -24, 115, -65, 121, 87, 49, -63, -112, 115, 106, 48, 37, -15, -126, -101, 64, -47, -77, 20, 108, 85, 98, 66, -62, -68, 98, 12, -40, 108, -7, -45, 19, -45, -80, 44, 3, 11, -89, 46, 22, 65, 46, -62, 87, -2, -21, -18, 54, 37};
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
    msg.setTimeStamp(0.680662529276);
    msg.setSource(42599U);
    msg.setSourceEntity(167U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(38U);
    msg.op = 169U;
    msg.tas2acc_pgain = 0.64928752894;
    msg.bank2p_pgain = 0.920980511751;

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
    msg.setTimeStamp(0.0135431503539);
    msg.setSource(10198U);
    msg.setSourceEntity(208U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(214U);
    msg.op = 201U;
    msg.tas2acc_pgain = 0.11948275592;
    msg.bank2p_pgain = 0.391835784413;

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
    msg.setTimeStamp(0.338193401627);
    msg.setSource(24831U);
    msg.setSourceEntity(229U);
    msg.setDestination(19136U);
    msg.setDestinationEntity(243U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.69343406168;
    msg.bank2p_pgain = 0.489369079398;

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
    msg.setTimeStamp(0.209811596077);
    msg.setSource(6969U);
    msg.setSourceEntity(4U);
    msg.setDestination(42584U);
    msg.setDestinationEntity(66U);
    msg.available = 543785607U;
    msg.value = 36U;

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
    msg.setTimeStamp(0.66653881235);
    msg.setSource(50680U);
    msg.setSourceEntity(231U);
    msg.setDestination(51602U);
    msg.setDestinationEntity(184U);
    msg.available = 4039203952U;
    msg.value = 42U;

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
    msg.setTimeStamp(0.840785575733);
    msg.setSource(61351U);
    msg.setSourceEntity(38U);
    msg.setDestination(8369U);
    msg.setDestinationEntity(157U);
    msg.available = 481639722U;
    msg.value = 252U;

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
    msg.setTimeStamp(0.810021502547);
    msg.setSource(41304U);
    msg.setSourceEntity(34U);
    msg.setDestination(43237U);
    msg.setDestinationEntity(126U);
    msg.op = 79U;
    msg.snapshot.assign("DOCGERLQQBZ");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.295844391186;
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
    msg.setTimeStamp(0.757571777011);
    msg.setSource(47492U);
    msg.setSourceEntity(107U);
    msg.setDestination(61054U);
    msg.setDestinationEntity(150U);
    msg.op = 32U;
    msg.snapshot.assign("FOOCIVKFKSPXIUAWITYRBLQAAJERXPYHXJMUQIKAWLOGGBUXBZDQPGUWDCSEPEMQXCTT");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.601777018304;
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
    msg.setTimeStamp(0.346667649709);
    msg.setSource(22196U);
    msg.setSourceEntity(175U);
    msg.setDestination(6384U);
    msg.setDestinationEntity(138U);
    msg.op = 134U;
    msg.snapshot.assign("TOAAMKSUBAXMAPQUNILV");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 337316372U;
    tmp_msg_0.lat = 0.750837035893;
    tmp_msg_0.lon = 0.0834968591777;
    tmp_msg_0.height_ell = 0.111304829468;
    tmp_msg_0.height_sea = 0.549378372681;
    tmp_msg_0.hacc = 0.752496315779;
    tmp_msg_0.vacc = 0.465003063263;
    tmp_msg_0.vel_n = 0.976571593593;
    tmp_msg_0.vel_e = 0.268055554399;
    tmp_msg_0.vel_d = 0.212549949502;
    tmp_msg_0.speed = 0.146909051164;
    tmp_msg_0.gspeed = 0.75486155653;
    tmp_msg_0.heading = 0.521518053185;
    tmp_msg_0.sacc = 0.0438532724931;
    tmp_msg_0.cacc = 0.262732734693;
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
    msg.setTimeStamp(0.639000725043);
    msg.setSource(51252U);
    msg.setSourceEntity(101U);
    msg.setDestination(64036U);
    msg.setDestinationEntity(223U);
    msg.op = 201U;
    msg.name.assign("DIZAKSTIXRVEYPHZHCLFXXWUBOTTOBUBRSCLMZMGGOWQNNDBQMFYHCMUZQYKOJAWVDVGUVPWDWNWRLNANPUWFMZCORYATQYFCIUWDQQJJTDDKVUXKBIWICLFSRSENSAUAIGHLLMOBHRQFGPZPUNPDIXOYESHTYZKPAORSOSKJXXGFLUQPFVJHFYPEVAGGZZAHXCXM");

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
    msg.setTimeStamp(0.788373617457);
    msg.setSource(41636U);
    msg.setSourceEntity(130U);
    msg.setDestination(28397U);
    msg.setDestinationEntity(4U);
    msg.op = 18U;
    msg.name.assign("BJAOOADYXZHMXOIILEDLGCTBCIXEZXHLEXXJQYQDTWFWDKSIHWPTHLCASVQZBOPYWNGMRDKHSJNIRARKNZLNUVMQAJGTSXJJLZEFYCLDJIQNVERYHUNPKFDFMJQWEV");

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
    msg.setTimeStamp(0.71401069248);
    msg.setSource(17504U);
    msg.setSourceEntity(27U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(133U);
    msg.op = 23U;
    msg.name.assign("LUNODFMXIKWGLZZYABOVDEXPQDGTLRQMLZRAROKMSBZPGTBZVVICIJNBDNYTSNONERBQZYGKPHECAGEBLKTVORINFFSFHQUJHNEPAWRTYFGCLRMFMSPYWSZMNFJDTUAUTIYRJAEEXXZVKQIYCITDSKUBJP");

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
    msg.setTimeStamp(0.294755795198);
    msg.setSource(1406U);
    msg.setSourceEntity(205U);
    msg.setDestination(36831U);
    msg.setDestinationEntity(231U);
    msg.type = 51U;
    msg.htime = 0.544886905547;
    msg.context.assign("TSORRWRMMIKZAEFPDWBHBUDRLDKCQJJLXZOLFXTOQUBISVACQHXJECWRLUSYGZGSIWHLAXSKKVIFMAMGTUWDYQJWSEBXZSCJYZPZACUKP");
    msg.text.assign("ZFPXIWWVKMQRMSTMTTGHVFWOSWVWIQLCLECLDEAEINZGYFKOFMBVTPIJNROMZKOXODSGRKTYCNGLOCMPXMKULEFPBQSUUPKYUHUOIBWYOJUQVEONKCELOPXMZNRDRGDRTJDASTVVRHEYCAFTABESDSEVJLJSRBGNBYZZQNXNUHIJJRBCHUNHSAHFVQEXIJPB");

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
    msg.setTimeStamp(0.127224261423);
    msg.setSource(48346U);
    msg.setSourceEntity(216U);
    msg.setDestination(61051U);
    msg.setDestinationEntity(16U);
    msg.type = 108U;
    msg.htime = 0.32912305996;
    msg.context.assign("UXASYOHNMZMTDCPBHFQWNHKYQJSNZDEICPKAITUCGEJBJMVDQAZLHDFYVEFAVGFGRAKFVKYUBTTHOMNGKPJMYLRVJIEKSIXLEVXCMQIGTGEONCRWFLJITFDXFSQPKILUBYDNGYNWMFCELQIGWRAMTLPIB");
    msg.text.assign("JCQUUUZFNUELNQHLVDMECFXTMBVVEJGYPWEVFRGOOJDTKABYSJZFKMXBZLNWLARC");

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
    msg.setTimeStamp(0.455947831066);
    msg.setSource(28875U);
    msg.setSourceEntity(42U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(232U);
    msg.type = 114U;
    msg.htime = 0.695973709194;
    msg.context.assign("BENUHFTABZFSSJRKOEJMQIC");
    msg.text.assign("CQMFORXJSIZFCNYKFHWFGQSDXOLSTNLZOREZSWSTFJOWRIJYBSTDNANEDUFSLWPIBQJKOXXLRKKWEKQVUBQGHZXTVCMTHCFUULIVNPIBQXBRHLDGYDZPZJAGUDOOTNZRXEHVYDKPKROYAMEACELXIBWVDCFPDIAEIQVMEVZYTCMOUVUIMQYKVTASNNAGCMGLPMFQMSYWHZMUGAVJRXHTGJPUBHOHBAKJIYSBWUFH");

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
    msg.setTimeStamp(0.135826589316);
    msg.setSource(36514U);
    msg.setSourceEntity(49U);
    msg.setDestination(54969U);
    msg.setDestinationEntity(162U);
    msg.command = 58U;
    msg.htime = 0.39770775668;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.0962074549069;
    tmp_msg_0.context.assign("TWBWPUAASQAPPGAUFKKBOSCOWPHHBQIDRGIZFDLLETHJGVWZOJPIVGKNSGVBAOCSUSGXDCHMSLNIIBMKTFDHEIHMXYRLXSLZPJZZSMMVURTNAZDBNBKZCERLMNAHVLZKWRCFWWTQXDMJOVFVCIEHF");
    tmp_msg_0.text.assign("BEYADBUQQVEULYXTRPZVGLKEQETWHPGSRFTIASFQWWJCCOGCFRGOJVPBRJBHMSTIMAJDFDSBSNIFP");
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
    msg.setTimeStamp(0.419442449424);
    msg.setSource(14834U);
    msg.setSourceEntity(39U);
    msg.setDestination(18975U);
    msg.setDestinationEntity(143U);
    msg.command = 246U;
    msg.htime = 0.412574703096;

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
    msg.setTimeStamp(0.79908931547);
    msg.setSource(11354U);
    msg.setSourceEntity(44U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(232U);
    msg.command = 82U;
    msg.htime = 0.521627066697;

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
    msg.setTimeStamp(0.828532563999);
    msg.setSource(63821U);
    msg.setSourceEntity(46U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(71U);
    msg.op = 156U;
    msg.file.assign("FVCMAMFBIJCKQOPHJWBKJATSAQZKWLYANEINDKVUPOCDKARTEESUV");

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
    msg.setTimeStamp(0.00725275870391);
    msg.setSource(27314U);
    msg.setSourceEntity(19U);
    msg.setDestination(27002U);
    msg.setDestinationEntity(115U);
    msg.op = 69U;
    msg.file.assign("TVCSLJXTQEZSEBATQIGNLJIJCCOQXECCGSTMSLIAYBKQDYGXIFRPCVQFDVJBBFHVPDCGZNNLHJUKRZQWOEXNMTDGIGZKSXWOBPWERUEPZJZJDIUVFHXCDGFMJBNQGDWBLBURAMPVSKYGARXJKNAQFLMBNNWYXIWIFTUYDJSETVQPPOFOZIREHOOHRLQZSUFCXMAYSWMPGKKDAOHLUVULBKRTOFAREKYZV");

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
    msg.setTimeStamp(0.945333186715);
    msg.setSource(46166U);
    msg.setSourceEntity(186U);
    msg.setDestination(6617U);
    msg.setDestinationEntity(3U);
    msg.op = 180U;
    msg.file.assign("AWQXHQAWUEFYYPSABZGNBRQLVLJTVODSJVUZWMQDSYCXRMEIGNCDSVUPVMTNFYWUJOTRJGYPQPFLBAJUEDMRYEBZNCOFIBJWPJEXMZDDZSXNJAIGLMYOWNCEBHTSDFJOSDKAOWHTQVMCQGYSHUVAHYZRTAELEDPKGEFKMWCBQXUYKHGGVAZHIXSLSXQPDRXOPKHNORTFZKI");

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
    msg.setTimeStamp(0.806406073176);
    msg.setSource(44308U);
    msg.setSourceEntity(149U);
    msg.setDestination(19927U);
    msg.setDestinationEntity(24U);
    msg.op = 143U;
    msg.clock = 0.145467984756;
    msg.tz = 35;

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
    msg.setTimeStamp(0.703236824169);
    msg.setSource(27854U);
    msg.setSourceEntity(20U);
    msg.setDestination(14386U);
    msg.setDestinationEntity(150U);
    msg.op = 72U;
    msg.clock = 0.683944198107;
    msg.tz = 65;

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
    msg.setTimeStamp(0.650287765155);
    msg.setSource(5420U);
    msg.setSourceEntity(107U);
    msg.setDestination(22968U);
    msg.setDestinationEntity(26U);
    msg.op = 112U;
    msg.clock = 0.0948181553021;
    msg.tz = -4;

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
    msg.setTimeStamp(0.0753048402256);
    msg.setSource(29512U);
    msg.setSourceEntity(40U);
    msg.setDestination(34954U);
    msg.setDestinationEntity(196U);
    msg.conductivity = 0.966686353584;
    msg.temperature = 0.380400265877;
    msg.depth = 0.743934713616;

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
    msg.setTimeStamp(0.194975690601);
    msg.setSource(9312U);
    msg.setSourceEntity(34U);
    msg.setDestination(1196U);
    msg.setDestinationEntity(33U);
    msg.conductivity = 0.466065282826;
    msg.temperature = 0.388697741109;
    msg.depth = 0.468268718561;

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
    msg.setTimeStamp(0.578137710465);
    msg.setSource(55396U);
    msg.setSourceEntity(44U);
    msg.setDestination(27169U);
    msg.setDestinationEntity(108U);
    msg.conductivity = 0.352773911629;
    msg.temperature = 0.921812853031;
    msg.depth = 0.0267442500468;

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
    msg.setTimeStamp(0.92962190522);
    msg.setSource(25477U);
    msg.setSourceEntity(8U);
    msg.setDestination(45683U);
    msg.setDestinationEntity(202U);
    msg.altitude = 0.787397947082;
    msg.roll = 11067U;
    msg.pitch = 63126U;
    msg.yaw = 60391U;
    msg.speed = 25988;

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
    msg.setTimeStamp(0.0743834189997);
    msg.setSource(17595U);
    msg.setSourceEntity(82U);
    msg.setDestination(7045U);
    msg.setDestinationEntity(166U);
    msg.altitude = 0.199032337977;
    msg.roll = 15996U;
    msg.pitch = 45262U;
    msg.yaw = 1032U;
    msg.speed = -12322;

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
    msg.setTimeStamp(0.459723444144);
    msg.setSource(65528U);
    msg.setSourceEntity(26U);
    msg.setDestination(41103U);
    msg.setDestinationEntity(247U);
    msg.altitude = 0.0474656123278;
    msg.roll = 45421U;
    msg.pitch = 35376U;
    msg.yaw = 45453U;
    msg.speed = 22703;

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
    msg.setTimeStamp(0.597919010277);
    msg.setSource(29753U);
    msg.setSourceEntity(23U);
    msg.setDestination(34928U);
    msg.setDestinationEntity(7U);
    msg.altitude = 0.486708034705;
    msg.width = 0.186849681096;
    msg.length = 0.309297588705;
    msg.bearing = 0.206508084097;
    msg.pxl = 28868;
    msg.encoding = 224U;
    const char tmp_msg_0[] = {69, -8, -124, -57, -51, -23, -89, 42, 19, 42, -75, -47, -8, 28, 76, 92, 13, -49, 13, 4, 6, -68, -9, 4, -115, 62, -95, 49, 16, 97, 4, 16, -78, -83, -128, 72, 56, 114, -76, -83, -92, 29, 121, -72, -86, -8, -10, -1, 85, 38, -91, 37, 124, -68, 104, 90, 39, -59, -68, -9, 40, 68, -76, -37, 64, -50, 57, 123, 113, 19, 65, 51, 2, -68, 81, -113, 19, -54, 72, 1, -105, -100, 10, 9, 77, -12, 60, 39, 63, 75, 18, 92, -86, -72, -83, 30, -102, 88, -43, -14, 107, 2, -74, 90, 125, -49, 121, -71, -15, -43, 24, 122, 64, 90, -103, 74, 98, 63, -35, 87, 30, -87, 61, -85, -8, -96, -95, -3, -81, 83, -19, 25, -71, -58, -60, 81, 87, 20, 18, 49, 74, -19, 20, 73, -122, 88, -89, -78, -50, -11, 33, 117, -22, -36, 18, 53, 54, -127, 41, -63, -61, 31, -80, -18, -83, -36, -31, 58, -80, -34, -59, -57, 2, 66, -38, -46, -27, 95, -87, -105, 59, 78, -72, -72, 43, 12, -1, -111, 107, -122, 1, 11, -104, 9, -26, 103, -125, 20, 8, 85, -87, -13, 11, -33, -108, -21, -48, -44, -27, 56, -127, -59, -99, -52, 86, -61, 119, -21, 114, -40, 76, 86, -89, 112, -23, 35, -11, 102, -56, -1, -80, -27, -101, -15, -23};
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
    msg.setTimeStamp(0.544291397892);
    msg.setSource(29549U);
    msg.setSourceEntity(240U);
    msg.setDestination(2734U);
    msg.setDestinationEntity(20U);
    msg.altitude = 0.256317444447;
    msg.width = 0.866011449139;
    msg.length = 0.105246526791;
    msg.bearing = 0.546171036693;
    msg.pxl = -4824;
    msg.encoding = 189U;
    const char tmp_msg_0[] = {-31, -79, 105, 78, -84, -58, -16, 81, -21, 47, 32, -97, 82, 57, -99, 0, 11, 26, -56, 76, 106, 94, 18, 1, -88, -104, -12, -27, -119, -9, 111, -59, -120, -58, 68, -49, -73, 107, 124, -98, 17, 96, -85, -100, -110, 69, 114, -97, 96, -92, 101, -125, -47, -113, 54, 51, 118, 85, -103, -27, -127, 38, -104, -80, -124, -9, 15, 53, -94, -35, -77, 64, 28, -111, 62, 48, -7, 94, -23, -64, 106, 42, -14, 28, 42, -86, -17, -125, 126, -100, 14, -71, 107, 45, 113, 66, 10, -124, 22, -112, 69, -8, 25, 0, -76, 18, 115, -67, -62, 120, 105, 81, 115, -36, 25, 124, 23, -45, 22, -105, -97, -86, 38, 103, 42, -40, 60, -31, 53, -18, 9, 68, -104, 27, -32, 31, -91, 99, 97, 64, -56, 29, -81, 86, 19, 12, -73, -25, -108, -121, 35, -32, -102, 108, 44, -128, -70, 90, 63, 6, 114, -108, -62, -114, 78, 22, -5, -121, -75, -42, -111, 31, 94, 45, 17, -2, -126, -32, 97, 120, -68, -118, -28, -94, 113, -14, -49, 117, 82, -32, 117, 34, 34, 67, -84, 44, -54, -82};
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
    msg.setTimeStamp(0.956691742016);
    msg.setSource(61654U);
    msg.setSourceEntity(91U);
    msg.setDestination(31081U);
    msg.setDestinationEntity(38U);
    msg.altitude = 0.927627806651;
    msg.width = 0.449315384226;
    msg.length = 0.597140119655;
    msg.bearing = 0.676795277787;
    msg.pxl = 19220;
    msg.encoding = 4U;
    const char tmp_msg_0[] = {81, 51, 30, -9, 88, 97, 38, -43, -90, -110, -58, -49, 56, 117, -100, -89, -64, -117, -88, 118, -30, 110, 50, -63, 96, 117, -96, 103, 124, -57, 73, 5, -15, -17, -123, 69, 10, 123, -72, 21, 99, -93, 71, 72, -90, -46, 105, -87, -28, 108, 61, 25, 15, -101, -99, 98, -29, -66, -85, -8, -63, 11, -6, 77, -93, 42, 126, -118, 109, -101, -115, 17, -9};
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
    msg.setTimeStamp(0.450271312247);
    msg.setSource(42315U);
    msg.setSourceEntity(151U);
    msg.setDestination(55533U);
    msg.setDestinationEntity(70U);
    msg.text.assign("UCGHSVDHLQCINZXCHJRLPMDWOOWSALNEFWPSVYLECBXGGZKZNKOKJAABKBPRTQQLEGINJGAMDFWPEJLRWWBQZTVMZMIYDBUPBXZFSTOKOMIGQMVBPSPXCUPCGKFDTFUBXQNMPTIWDNKWZEKITQETHGTNRDHSFOKSAUGVRVYVXFUUQDHOBLCEGCNJZMYWEXCJYILRIYNTIFKCA");
    msg.type = 239U;

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
    msg.setTimeStamp(0.714288137051);
    msg.setSource(57565U);
    msg.setSourceEntity(88U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(46U);
    msg.text.assign("SDCTXXLQBKOHQLOIXUCUWOWCUSBDEHAJBZFRXLHQZZQRNNMNBMUAJNYXUHGLNOYFVDYDVCMDLQUKPFMTBIFTKERWVGFAOUYZEPTQDZHWAAIPRJVJUQKAKXSGSSNNIILCSUHCMOOFHXOUEPTCDAAVDSGWBFLPKEZTXYWMTOQJGSRTWMRBVNGMDOJPWCITFYREXPSRNZJYIIQHANWKRXRM");
    msg.type = 100U;

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
    msg.setTimeStamp(0.0803438021965);
    msg.setSource(19410U);
    msg.setSourceEntity(70U);
    msg.setDestination(59468U);
    msg.setDestinationEntity(76U);
    msg.text.assign("RRGDNLXMGNATGVIHSIYSPGOQPCXQSIWQJVOHYAYLNPFFFCZDQCYNFLVXOMZMDFQEUNMPOHFBJYUISCSWDTMLAYPTREABCNMLRWDZSJWKYLKHKLELSKEDDFEVDNVRGCPAHWHYUAQUPSXBFREJNEONTPZCUTZ");
    msg.type = 42U;

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
    msg.setTimeStamp(0.350985555863);
    msg.setSource(22981U);
    msg.setSourceEntity(207U);
    msg.setDestination(41524U);
    msg.setDestinationEntity(134U);
    msg.parameter = 89U;
    msg.numsamples = 8U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 28436U;
    tmp_msg_0.avg = 0.560399187602;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.158059235413;
    msg.lon = 0.686622870853;

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
    msg.setTimeStamp(0.180023157117);
    msg.setSource(1645U);
    msg.setSourceEntity(21U);
    msg.setDestination(59409U);
    msg.setDestinationEntity(147U);
    msg.parameter = 243U;
    msg.numsamples = 240U;
    msg.lat = 0.249451985331;
    msg.lon = 0.391698845256;

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
    msg.setTimeStamp(0.333939347861);
    msg.setSource(51992U);
    msg.setSourceEntity(251U);
    msg.setDestination(62211U);
    msg.setDestinationEntity(250U);
    msg.parameter = 221U;
    msg.numsamples = 133U;
    msg.lat = 0.474876543701;
    msg.lon = 0.836620062901;

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
    msg.setTimeStamp(0.753728649881);
    msg.setSource(244U);
    msg.setSourceEntity(34U);
    msg.setDestination(28264U);
    msg.setDestinationEntity(122U);
    msg.depth = 9849U;
    msg.avg = 0.673280117181;

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
    msg.setTimeStamp(0.744330139472);
    msg.setSource(31884U);
    msg.setSourceEntity(83U);
    msg.setDestination(49357U);
    msg.setDestinationEntity(184U);
    msg.depth = 56512U;
    msg.avg = 0.488862669929;

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
    msg.setTimeStamp(0.632800935166);
    msg.setSource(14756U);
    msg.setSourceEntity(122U);
    msg.setDestination(2397U);
    msg.setDestinationEntity(145U);
    msg.depth = 16304U;
    msg.avg = 0.158728273017;

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
    msg.setTimeStamp(0.413381490639);
    msg.setSource(65191U);
    msg.setSourceEntity(118U);
    msg.setDestination(22299U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.650398260562);
    msg.setSource(12844U);
    msg.setSourceEntity(12U);
    msg.setDestination(22477U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.202259869923);
    msg.setSource(64640U);
    msg.setSourceEntity(13U);
    msg.setDestination(40201U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.566031440894);
    msg.setSource(54791U);
    msg.setSourceEntity(16U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(223U);
    msg.sys_name.assign("FMQSNVPXPGXSQLJOSGHURTHZRPJRALLFMBBCTXYXVJBCUWGALOCKXUDRAHEVOZYAJTNJQMGDNRMWTHQIKFGVNPJZMHSQULINKRCCAMAPUEQCWLFGBRULERXBSYOXBNFEGZJWYOKYGMRCOZKBFXPJDIDEZMQEDSAUJIDWOTIZCXTWDSTGYFYWWBJIAXEUEIPDTWNDQEVLVMLHQKIPKSVSUCKPZIY");
    msg.sys_type = 195U;
    msg.owner = 5007U;
    msg.lat = 0.0461096962932;
    msg.lon = 0.863548224676;
    msg.height = 0.53358781462;
    msg.services.assign("UVROXLQKKJIYLZOMVZHWQQPUIBGMSDMCBZZMKXFDYWZOUNVIABADSPINDFXSYPQTJHQETOKDGWJZCCVSO");

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
    msg.setTimeStamp(0.721450101869);
    msg.setSource(24724U);
    msg.setSourceEntity(222U);
    msg.setDestination(32695U);
    msg.setDestinationEntity(35U);
    msg.sys_name.assign("HROWWJDONZEUQEQAWCVMQRQZLODNHRWBBLIEKMAESMJFFPXUNUTQFSYYYKEMLVZCXFTDUNIRSYNOXVQHVTAMHXGXOCZLYMRUPXHSCVNZCSPS");
    msg.sys_type = 38U;
    msg.owner = 52921U;
    msg.lat = 0.190779390713;
    msg.lon = 0.699526679354;
    msg.height = 0.368437238941;
    msg.services.assign("QGYBIHPQZBIIBJRISLGHHLJHTEFYEOEMBKUASWPAORNRJWYQZTDLRMHRDYUMTCCPSCTZXNM");

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
    msg.setTimeStamp(0.332941292174);
    msg.setSource(5452U);
    msg.setSourceEntity(197U);
    msg.setDestination(13405U);
    msg.setDestinationEntity(126U);
    msg.sys_name.assign("HZKTJMFSVFLKUOYHBAWXBAQCCZWHQTERQEQYOBLJRKJRUYOANGIVIBSOUSUMKFSRXSTCZLWGBGLLXJIOQABRCTREHMAPOEHNMJSZFMXMLUOQNQZYYBWQKPVXOHFEXVNJREPUIPPGSMGXNNGEFQTCWAZILYXAPNBITRWZVZGDDVCPNCTSMAPEPRUAXDMGGCDJELHTWKOWJDVFHBKCDQUZUDNHEIDB");
    msg.sys_type = 33U;
    msg.owner = 51806U;
    msg.lat = 0.0618002359699;
    msg.lon = 0.518351515382;
    msg.height = 0.0236061913008;
    msg.services.assign("ENHISLKQRDUPDLGCGJOPSSKWXJFFPWVPIOIOJHTKXMHXIVHMMNLYXONLUUIAUXJBVQZTKMJDSJHCMMZFAWYETIBCEKQXMTXPAUZSBATGMINEGXCRRBYGZCUXVAQKOBQGARAEYLWRVZFJJRKWZLENUVDYRDEQDNVBZAANYHCKGPCQORYFSNVHKCWUVCOSZIZYFQVJDULWCSMNTOJHUD");

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
    msg.setTimeStamp(0.185623299011);
    msg.setSource(20112U);
    msg.setSourceEntity(37U);
    msg.setDestination(50452U);
    msg.setDestinationEntity(111U);
    msg.service.assign("DSOPWUTSIJMTNMYXRKCDEUOZTEODJZHHFOQDZUAQDXWNWXVAOVJBGCMBJFCIKIUGVTVCYLGBKMVOBGQFPFNPRHTBMUFCMCJAUKSKAXFAKESLDALUZUPDNCYVPLKHEYCBNEQIHGAORXNTETCZWOZLXIHNUOTYLQEQVJPYPLMHLJWXWNWZSYJVGRAYXRSRBSEJINWQXZBVFSPJKZHEYB");
    msg.service_type = 50U;

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
    msg.setTimeStamp(0.519158169148);
    msg.setSource(22123U);
    msg.setSourceEntity(57U);
    msg.setDestination(27285U);
    msg.setDestinationEntity(44U);
    msg.service.assign("LTRORFBHDPXRHHJIYQOQLNYZDVASJSBEMTCYXLENPKDGSYCIVKCRROXBRJTDLQCVUXBMPEYKVDBWOFXJWFO");
    msg.service_type = 23U;

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
    msg.setTimeStamp(0.661244145066);
    msg.setSource(65305U);
    msg.setSourceEntity(171U);
    msg.setDestination(17359U);
    msg.setDestinationEntity(104U);
    msg.service.assign("SBDTBAJLLYXDJAGFNFDWXYWPAWMHYQOXGUIRWNYKNXNRJVIIFZQKMCTIEUVBHCES");
    msg.service_type = 5U;

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
    msg.setTimeStamp(0.821752195618);
    msg.setSource(9018U);
    msg.setSourceEntity(123U);
    msg.setDestination(22131U);
    msg.setDestinationEntity(229U);
    msg.value = 0.424235145665;

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
    msg.setTimeStamp(0.148525555714);
    msg.setSource(47868U);
    msg.setSourceEntity(89U);
    msg.setDestination(49564U);
    msg.setDestinationEntity(137U);
    msg.value = 0.449870276186;

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
    msg.setTimeStamp(0.442920198236);
    msg.setSource(7432U);
    msg.setSourceEntity(68U);
    msg.setDestination(44377U);
    msg.setDestinationEntity(132U);
    msg.value = 0.623109319666;

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
    msg.setTimeStamp(0.616745241517);
    msg.setSource(11742U);
    msg.setSourceEntity(30U);
    msg.setDestination(56987U);
    msg.setDestinationEntity(124U);
    msg.value = 0.544144846652;

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
    msg.setTimeStamp(0.475888098201);
    msg.setSource(51582U);
    msg.setSourceEntity(94U);
    msg.setDestination(47936U);
    msg.setDestinationEntity(91U);
    msg.value = 0.443117217988;

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
    msg.setTimeStamp(0.228663123749);
    msg.setSource(51033U);
    msg.setSourceEntity(126U);
    msg.setDestination(61182U);
    msg.setDestinationEntity(141U);
    msg.value = 0.259206455131;

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
    msg.setTimeStamp(0.834517279824);
    msg.setSource(37711U);
    msg.setSourceEntity(86U);
    msg.setDestination(33994U);
    msg.setDestinationEntity(250U);
    msg.value = 0.779529935879;

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
    msg.setTimeStamp(0.112557547489);
    msg.setSource(7941U);
    msg.setSourceEntity(24U);
    msg.setDestination(10820U);
    msg.setDestinationEntity(202U);
    msg.value = 0.840176398833;

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
    msg.setTimeStamp(0.153203706988);
    msg.setSource(39909U);
    msg.setSourceEntity(163U);
    msg.setDestination(54417U);
    msg.setDestinationEntity(215U);
    msg.value = 0.85388033065;

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
    msg.setTimeStamp(0.557132837192);
    msg.setSource(10164U);
    msg.setSourceEntity(179U);
    msg.setDestination(16655U);
    msg.setDestinationEntity(106U);
    msg.number.assign("IPALZYITGTZMMTAGCEDAEQG");
    msg.timeout = 23191U;
    msg.contents.assign("BWKYPMZLPIGHKOKJHDJFBNILHANTRHFVZDZWBDGNQTBLYMTCRHAIXRHTTUVFGBJUNBPZLVOVQXZEEWCUYYVSCFIRCZFCHDKQUSSPLAGQFXSDLUIEMKVQYBGNQJIWMMOJYJMEZGLABGCNONRNRBTBKJAEGOPZYXAWXTTAIXKHVDRWVEFPKJCLSHNLMOEXSERJUFQZOXQCVPTIIAKARUYSFTCWSMRPPZQDU");

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
    msg.setTimeStamp(0.554541999555);
    msg.setSource(60887U);
    msg.setSourceEntity(5U);
    msg.setDestination(33098U);
    msg.setDestinationEntity(52U);
    msg.number.assign("LANBZMCJTBQELQVNLUPWJFWIEKLDPGULTZYIYBXIQSGHTXIGHEODPNDRRDAJIZJYFIYTKEHKBIRGXNBDCAGAKWZBTKUUCUNLAVRAFHDQNCKNPWTXZPJDRBBXGCJUICJHSTLROGYVOLSMIWHFOMOORSGHMZUSFAYZVMTFRKXTQYEOEWW");
    msg.timeout = 64260U;
    msg.contents.assign("QDBVIGGOPAPYXIOCDAVJRTBKSRZDBAGUDCVNIQKZPPXTEAMMJFFQDRDHJUMHTGPKYFIVVKLWZRYPRFMEFCZSCLWWNO");

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
    msg.setTimeStamp(0.0251301797473);
    msg.setSource(2610U);
    msg.setSourceEntity(132U);
    msg.setDestination(17172U);
    msg.setDestinationEntity(225U);
    msg.number.assign("NDSIHGEPYRKWPFCJPEURJAUMRQCRQUVFGNVOQXWXXBZTDNAHHNBTGOUVEZPUYVREOECUJDVDLVKXILPFSLMCTJJZLCGARLVXCEYZTUMZYTFKMSFROWAKPSQCASXLYH");
    msg.timeout = 4789U;
    msg.contents.assign("NPKWKAUETIKTLPHOLDCRJDBYOAOQIAOMHRDTCDQIXLMICNGGVZCZOKLLSXJKFQKKJBVGWHBHDIYGTBSGTF");

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
    msg.setTimeStamp(0.179273515058);
    msg.setSource(57565U);
    msg.setSourceEntity(60U);
    msg.setDestination(9321U);
    msg.setDestinationEntity(148U);
    msg.seq = 3798320792U;
    msg.destination.assign("SYQZAEQVYYPQMTVBVUVMBFTGUYECCNEJLXPJAWKHLRNBSJUAVDQGQAHHNYGHFCWRACWVHWZTKMOKNOMVDTSTYPPCONDXZGXPRNKEPLGVCAPMJNSRLXPDQOXTKFMHJIYSDSJYRBIWHHICG");
    msg.timeout = 61621U;
    const char tmp_msg_0[] = {88, -93, 13, 118, 101, 7, 9, 94, -74, -89, 64, -11, -73, 19, 113, 124, -50, 124, -7, -97, 24, 84, -109, -127, -85, 100, 106, -84, 51, 5, -19, -83, -48, -42, 10, 104, -125, -42, -96, -62, 119, 22, -31, 111, -10, -85, 88, -98, 119, 67, 80, 4, 124, 99, -104, -70, 82, -74, -45, -108, 60, 13, 69, 107, 29, -48, -37, -77, 62, 11, -39, -17, -31, -4, -68, -64, 35, -39, 124, 114, 8, 32, 94, 1, -14, 93, 84, 68, -71, -121, -116, -54, -98, -82, -27, 94, 57, 112, -15, -22, -23, 42, -75, -50, -1, 86, 65, -20, 79, -102, 71, 121, -22, 44, 90, -42, 45, -13, -13, 61, 37, -106, 22, -44, -78, -123, 86, -87, 31, 14, -125, -59, -92, 119, 6, -127, -120, 0, -52, 50, -45, 63, -15, -110, 16, 78, 68, -110, 28, 87, -66, -27, -32, -11, -54, 86, -54, 83, -83, 99, 114, 53, -16, 56, 98, 32, -17, -114, 101, 77, -35, -91, 10, 30, 9, 37, -127, 59, -78, 30, 41, -40};
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
    msg.setTimeStamp(0.650666876423);
    msg.setSource(21791U);
    msg.setSourceEntity(32U);
    msg.setDestination(37776U);
    msg.setDestinationEntity(234U);
    msg.seq = 823028396U;
    msg.destination.assign("CYXTXXUYDZTJIHODXVHONANJNBHHMEAUVXARCYNPGNAGYSCVOVFKKZEQLEHHYMGRVWNSOMFBOHKZMLUNSQTZMLURJJBBNQJYD");
    msg.timeout = 50469U;
    const char tmp_msg_0[] = {103, -117, -112, -48, -48, -100, 83, -123, 1, 63, -31, -120, 107, -89, -114, 36, 125, -93, -101, -6, 88, 30, -33, -105, 52, 79, 2, 113, 75, -97, 24, -33, 5, -85, -101, -4, -56, -7, -87, 25, 108, -58, -87, 99, 1, -90, 28, 19, 63, -74, 88, 77, -72, 5, -27, 95, -99, -55, -25, 0, -96, 125, 55, 70, 83, -110, 21, -107, 1, 98, -84, 24, 115, -73, 13, 104, -21, 22, 46, -61, -24, 100, -100, 42, -57, -56, -91, 89, 76, -72, 72, -28, 21, -53, -2, 126, 18, 7, -17, -1, 99, 90, 4, 79, 58, -14, -3, -19, -73, 110, 52, -41, 51, -101, 6, -41, -81, 109, -97, 80, 98, 100, -107, -119, 5, 76, -42, 80, -34, -32, -18, -126, -50, -86, -39, -80, 126, -20, 89, -24, -59, -19, 23, 115, -24, -77, 112, 50, -6, -18, 81, 93, 112, -39, -104, -37, -91, -114, -59, 74, 89, -32, 43, -83, 99, -91, -97, 56, -51, 56, -111, 44, 57, -19, 111, 96, -86, -57, 53, -65, -68, -86, -42, 21, 118, 46, 28, -34, 34, 29, 48, 13, -47, 114, 85, -38, -121, 49, 50, -26, -69, 114, -107, -94, -112, -61, -16, 106, -66, 74, -102, -92, -2, -44, -57, 91, -67, -105, -41};
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
    msg.setTimeStamp(0.989497934761);
    msg.setSource(31975U);
    msg.setSourceEntity(248U);
    msg.setDestination(40013U);
    msg.setDestinationEntity(220U);
    msg.seq = 3021463428U;
    msg.destination.assign("IVLTDWHFBYY");
    msg.timeout = 30203U;
    const char tmp_msg_0[] = {15, 85, -30, 105, 24, 96, 36, -99, 81, 119, -6, -126, -87, -14, 75, -128, 71, -10, 113, 51, -120, 56, 14, -51, 69, 30, 118, -1, -55, 33, 29, 68, 108, 16, 63, -2, 57, 55, -59, -40, 43, 103, 37, 8, 102, -66, -12, -97, 23, 42, 122, 71, -94, 64, -65, -107, -127, 51, -95, 110, -63, 69, -115, -54, -126, 103, 74, -41, 125, 12, 103, 83, -40, 90, 77, -95, -108, -51, -106, -91, 52, -89, -127, -96, -3, 122, -46, -80, 64, -55, -3, 85, 69, 10, -44, 10, -25, -56, 53, 126, 65, 65, -28, -123, 80, 99, 9, 27, -11, -65, -49, -26, -46, -77, 92, -21, -62, 113, -121, -51, -103, 76, -30, -102, -47, -124, -1, -48, 63, -60, 90, -38, -87, 80, -8, 9, -87, -53, 93, -82, 46, -40, 21, -19, 48, 23, 12, -62, 94, -28, -22, -125, 123, -58, -91, -52, -108, 54, 14, 10, -127, -87, -71, 113, 101, -85, -79, -1, 37, -38, -54, -30, -15, 36, 64, 73, 3, 49, 113, 77, 6, 17, -5, -19, 105, -61, 25, 28, -33, 90, 121, 50, 71, -66, -53, -85, -73, 6, -37, 118, -59, -117, 124, 9, -57, -2, -92, -59, 4, -127, 26, -104, -20, -80, 24, 125, 120, 92, 79, -3, 11, -104, 57, 101, 111, 78, 103, 3, 84, 116, 52, -35, -56, 66, 60};
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
    msg.setTimeStamp(0.476269723569);
    msg.setSource(21610U);
    msg.setSourceEntity(228U);
    msg.setDestination(35522U);
    msg.setDestinationEntity(155U);
    msg.source.assign("QBAVVTKRKXJSSSRHDLZJKLPEVVNEBTXWWAEGUFDMGALHAEJETHFBORMMVSKIGZJQQPAMLRVQVSICFUBCIPYFSZJRDNKHONIGFKHOOYUPMIEVRBDGZTCNHCFJUSACQBFGRMBRESEUWJPUPDJXEQHMUYYWR");
    const char tmp_msg_0[] = {105, 115, 32, -66, 19, 11, -27, -53, -34, 46, 61, 28, 48, 112, 57, -67, 28, -56, 3, -62, -40, -49, 94, -89, -124, -28, 30, -89, -82, -27, 94, -50, -119, -9, -62, 23, 85, 52, 56, 93, -92, 2, 17, -29, 15, 5, 94, -104, 106, -121, -100, -110, -26, 87, -39, -18, -128, -123, 111, -32, 9, 65, -96, -68, -18, 48, -87, -112, -37, 117, -96, -40, 63, 68, 14, -35, 111, -73, 103, 18, -120, 77, 118, -121, 40, 94, -124, 0, 0, 28, -78, 64, -87, 126, 68, -77, 75, -118, -65, 82, -61, 74, 55, 5, -60, 26, 124, 115, 48, -117, -58, 6, 115, 45, -105, -2, 9, -34, -11, 103, -60, 63, 17, 93, -58, 73, -95, -88, -87, -99, 99, -73, -68, 44, 70, -95, 3, -118, -101, 57, 28, -89, -64, -1, -105, 71, -37, -86, -122, -123, -78, 106, -84, 122, -89, -49, -122, -115, 95, -105, 19, -6, 38, -22, -47, 56, 47, 95, -44, -75, 33, 23, 121, -13, 74, -12, -26, -49, -97, -64, -93, -62, -52, -60, -21, -61, 116, 100, -94, 125, 111, -76, 18, -126, 22, -11, 51, -72, -27, -43, -60, 0, 115, -95, 82, -38, -97, 16, -78, 17, 103, -114, -59, -103, 104, -127, -3, -55};
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
    msg.setTimeStamp(0.266555760975);
    msg.setSource(18945U);
    msg.setSourceEntity(139U);
    msg.setDestination(7277U);
    msg.setDestinationEntity(63U);
    msg.source.assign("LEYZWEWWEKPZQGLPSCGZELSPWRDMHRIZWJRLYJOBJBFHHYYXBULXPVDJSRTNDAPPVIFDMJVGFRPTCESTLOSNJKYVGMCXOQTFJCVIPSXHDMZZPWCBQSOQYUQLEDAQHDRFVGMOANRIWBKUMTUSCLTHJKDUYMTAVUHIUJGZOCPLBUIHIEKFNXTXIAJMGVBAEZQRFORQHFEFBMSAZNGAWCVKKOGIUCRDOXKUENYOZKWNSGHAAYDIQX");
    const char tmp_msg_0[] = {-61, 121, -51, -30, 19, 51, 121, -102, 119, -101, 76, -70, -55, -42, 40, -44, 16, -71, -30, 38, 48, 1, 106, -34, -110, -112, -24, -62, 39, 28, 47, 114, 91, 104, -110, 33, -45, -6, 98, 36, 26, -111, 77, -31, -121, -56, 75, -8, 45, -26, 107, 114, 36, -3, 52, -127, -9, 20, -87, 45, 51, 86, -1, 60, 45, 89, -29, 16, -17, 6, 86, 67, 41, -86, -21, -11, 122, -101, -80, 82, -84, 102, -79, 49, 100, 111, -88, -110, 36, 51, 100, -66, -65, 82, -36, -86, 122, 27, 87, 68, 49, 71, -40, 106, -125, 25, 42, -41, 30, -55, 100, -79, -43, 74, -16, -89, -106, 11, 116, 62, -87, -36, -9, 107, 101, 73, 25, 26, -105, -72, -67, 41, -62, 121, -121, 26, 108, -47, 99, -123, -45, -101, -111, 126, 2, 73, -35, 34, -91, -118, 86, -73, -72, -113, -51, 70, -71, -127, 116, -62, -44, -112, -102, -127, -119, -69, -11, -13, 43, 43, 123, 63, -8, 89, -123, -62, 72, -27, 126, 118, 98, -17, -18, 117, 50, -78, 73, -125, -15, 58, 110, 41, -15, -78, 64, 63, -109, -9, 1, 42, -35, 112};
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
    msg.setTimeStamp(0.0695347093716);
    msg.setSource(8488U);
    msg.setSourceEntity(88U);
    msg.setDestination(4693U);
    msg.setDestinationEntity(169U);
    msg.source.assign("RCSHENUJCQWHTJCPAZESMJWTKMKLRFPSMINNBJCPQHKODNAOCVVCCJLWZNAYECIBVRDHZTWZFQXGPWIQDGGYDVPAWUBROEKZNAPWZFFJGHGBXJMSPGGYFQIYQOMBRFFCVOHUEBDVMZKEPVHYESEVSXWQWKBDXJTXUHZKXARMQPINJBXLOYZQXOUITIHYTIXKR");
    const char tmp_msg_0[] = {-33, -52, -27, -50, 29, 7, -78, 78, -79, 9, -125, 5, -17, -27, 52, 80, -39, -46, -113, 48, 87, 1, -53, -61, 113, -37, 94, -99, 120, -20, -94, 108, -40, -57, 113, -108, -27, -125, 78, -57, -112, 24, 15, -93, -65, 37, 4, 60, -77};
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
    msg.setTimeStamp(0.589551023722);
    msg.setSource(34377U);
    msg.setSourceEntity(196U);
    msg.setDestination(11398U);
    msg.setDestinationEntity(61U);
    msg.seq = 2057220243U;
    msg.state = 205U;
    msg.error.assign("QDVUYSRQCSZMIQWJKPNTEZMZNAMPXXFDDUZGIMRFBJWEWNGRROHUIAUMBEKHUEGUYVZGCEFKKJBLJUGOLANAOLZFLSWRMIYNDIQQSNSUCGDVMYTJQQICYZYKHFOVYIQT");

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
    msg.setTimeStamp(0.834461155413);
    msg.setSource(44724U);
    msg.setSourceEntity(83U);
    msg.setDestination(57503U);
    msg.setDestinationEntity(91U);
    msg.seq = 246072541U;
    msg.state = 204U;
    msg.error.assign("MPCMKEVSLFAVXDLHYDWACLKAJXMNTNFZBKZZZLJNGSDRIGOBHAYGMONUFWQCAHZGVOEIKXHIZWSYUDRVBEBCXGLTMMFZEJCINYEZNJZWIYGQXTUFOMYGMGEYXUTFKENPPRPPXRNRVILNECSVKXRRTQQDGXQCUBKWPDWOIHALHBFTDQBWJNEOPFSSBOUZYISTMUVTWRDHVUHOISJLLVSTIJQHPQBCKOUKOYEAPARVHTCGBQSKLFUYQRJAAJXDWJ");

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
    msg.setTimeStamp(0.0481392458856);
    msg.setSource(56839U);
    msg.setSourceEntity(39U);
    msg.setDestination(15132U);
    msg.setDestinationEntity(117U);
    msg.seq = 1330300963U;
    msg.state = 244U;
    msg.error.assign("OVNMRLGFNQNGBDXFKSKQQXGFCBKJGPRZCCWPPNCGVPFVAMWRIFERPFYHRXXAZALATTDEVIJCKAMKJMREBTVDSKQDIRYUIJGOIDZSBYHXUDYFPCPGUSHHXND");

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
    msg.setTimeStamp(0.169466796603);
    msg.setSource(27382U);
    msg.setSourceEntity(13U);
    msg.setDestination(18352U);
    msg.setDestinationEntity(176U);
    msg.origin.assign("MXDKLBZICWLSNAEMNGOQTAAXBPCFFTYJWTLFWVIDNUPHTPCSRRWLQINDXLKANAGKBVOEHYXCPANLVKULSHAQHLOHMPDYHKVFGEFBESSJDGFUXDIFYDBMOBFBRFZMNZIOISLBUEPSTPCUEJYNJGNKTQQWZWKRUMGXLUEACOGW");
    msg.text.assign("IFANZTWHZBVEHDAJDIQKTYNLRNVJJDDSQAJPCEJQAVPHIZVYCHLFAGILHXPHUBFGTBQDIQUXEHZKCRUSGIRFNPLYAYQOEFWXSDVLJJJXUDSRYKZZMGHEBPKCPEWOKHQBOGNDNARESWLCAXQIUHTGNXYCZFMQMYTDORFWOVVVEGWRBZPMKCSUMUGMTBVULNXJVKNP");

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
    msg.setTimeStamp(0.0277746599813);
    msg.setSource(4948U);
    msg.setSourceEntity(224U);
    msg.setDestination(22996U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("DPYKZCLYXILKSX");
    msg.text.assign("CLANHOKYBADDLEMJMJUC");

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
    msg.setTimeStamp(0.502019098251);
    msg.setSource(63860U);
    msg.setSourceEntity(159U);
    msg.setDestination(11795U);
    msg.setDestinationEntity(168U);
    msg.origin.assign("XFCCMHZUIGFKJMLBYRZBXOZIXGJVNVRRODRGTZTZFIIIKIDMGTXDFXXPRHOTKWFDCJIBEKCUDAPTRFCASOYMEZQGJCNUNJVLCEVAQETFDKWAKPUVVLSALJAVMKGMEWSRDZVYYWXJZSBTBODNPZGSPPA");
    msg.text.assign("RVMTCZCVBZCYZXUMEOJKLVUBRHDUSFGYFFFQDNVCTFXWVFGCQWIIVPFHYZIGSJJKNHOTNMSOSTBBKVLOIIOQYROHJEPGNACYDEYZAXSAGZEOEKHPUKMYQAMWJMDLEPQTNTKJHAPSMGSROQOTZKKFSQRGDSLURRJUELXMNPVHYVTAEMBW");

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
    msg.setTimeStamp(0.292291373255);
    msg.setSource(47409U);
    msg.setSourceEntity(67U);
    msg.setDestination(28870U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("KOTKPJUFCKGKEQYVYSMGMRKJJPCOJTWYURVZSNYYUVVQKXQSGDKAXDGFGNZCTOPQMDU");
    msg.htime = 0.0655766870974;
    msg.lat = 0.772964055046;
    msg.lon = 0.150210215089;
    const char tmp_msg_0[] = {107, -56, 43, 106, -15, -121, -98, -8, -21, 10, -28, -117, -105, -21, 116, -44, -72, 18, -17, 51, -72, -19, -97, 39, 101, 100, -99, 95, 29, 58, -104, -110, -62, -10, 94, -111, 113, 82, 44, 126, 108, -38, -79, -68, 57, -40, -99, -6, 101, -10, 44, 108, 125, 24, -17, -56, -94, 64, 5, -100, -81, 105, 7, 36, -64, 36, -126, 83, -118, 61, 83, 67, -51, 97, 74, 64, -10, 12, -50, 95, -120, -15, 122, -113, -6, -14, 49, 66, 93, -32, 68, 100, -17, 115, 11, -125, 56, -124, -81, 29, 89, 25, -33, 31, -111, 98, -35, -88, 124, -119, -39, 81, -48, -26, 102, -77, 66, 39, -110, -126, 48, -41, -68, 112, -33, 121, 73, 57, -26, 56, -81, 96, 106, -29, -109, 11, 67, 69, -122, 78, 119, 92, 109, -84, -17, -74, 47, -61, -86, -7, -95, -54, 45, 104, 80, -13, 43, 0, 110, 8, -60, -1, 37, -5, -43, 50, -69, -112, 111, -65, 74, 102, -57, -8, 71, 30, 36, 2, -124, 7, -24, 2, -91, 42, 93, 23, 50, 5, -56, -85, -10, 52};
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
    msg.setTimeStamp(0.482235257896);
    msg.setSource(58210U);
    msg.setSourceEntity(240U);
    msg.setDestination(46458U);
    msg.setDestinationEntity(86U);
    msg.origin.assign("DWDBCXGKUKDVHHKVRAYNCBGY");
    msg.htime = 0.843215208539;
    msg.lat = 0.609970481108;
    msg.lon = 0.961468460588;
    const char tmp_msg_0[] = {-4, -61, 42, 64, -3, 60, -11, -26, 94, -36, -102, -30, -107, -2, -111, 73, 44, -60, -89, -102, 5, 46, 88, -106, -18, 106, 22, -123, -69, 116, 23, 9, 116, -54, 110, 121, -106, 61, -94, 73, -44, 40, 87, 71, 80, 40, 121, 56, -78, 115, 101, 68, 81, 31, -44, 28, 64, 81, -83, -105, -95, 46, -45, 123, 7, -10, -63, 39, 14, 124, -41, 22, -111, -82, 27, -49, 119, 86, 49, 75, 10, -65, 60, 8, 11, -60, -125, -126, -2, 1, 11, 36, 53, -3, -35, 99, -78, -23, 1, 64, 27, -113, 52, -42, 114, 107, 47, 119, 60, -91, -65, 108, -120, 22, -10, 0, -102, 65, -24, 64, -22, 89, 74, 121, 106, 74, 37, 15, 38, 16, -126, -79, -40, 89, -99, -79, -54, 75, 49, 77, 91, 114, 4, 40, 1, 60, -73, -62, -45, -82, 46, -13, -60, 29, 100, 67, 10, -17, -22, -21, 78, 95, -125, 4, 82, 22, 32, -52, 109, -31, 64, 52, 79, -53, 63, 71, -80, -122, 124, 45, -19, -16, 64, 31, 23, -126, 66, 48, -35, 47, 55, -28, 77, -8, -126, 93, 63, -97, -98, 113, -26, -83, -59, -68, -78, 11, 45, -3, 11, -25, -84, 17, 82, -119, -101, -69, 22, -71, -31, 77, 41, 37, 39, 6, 64, 124, -6, 105, 100, 68, -115, -124, 27, -35, -94, 88, -55, -32};
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
    msg.setTimeStamp(0.690076329181);
    msg.setSource(55829U);
    msg.setSourceEntity(16U);
    msg.setDestination(57325U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("UBCSXRLGZZBUDDYKIJSQJVWGUFCDOJVCHTHYKVGUQELNANRAHSZGFRXELIZYTAMPXPIQLPYVACWTJLAORXOYIFSEOEEFMUADUZCLNCZUBSWQBHBTYQIMLCLCRWWQIKPNDPHFGTWCREUPWMXDVQSZTHFOKONYJOETESBXF");
    msg.htime = 0.20085509785;
    msg.lat = 0.0559736444894;
    msg.lon = 0.968197647355;
    const char tmp_msg_0[] = {44, 93, 27, -67, 51, -126, -4, 82, 120, 26, -76, -118, 20, -108, -3, 8, -116, 91, 91, 118, 104, 27, -120, -89, 104, 90, -40, 32, -111, -98, 94, 29, -57, 62, -121, 67, -13, -120, -59, -103, 18, 78, 53, 108, -127, -68, -118, -50, 27, 110, -95, -110, 71, -125, -103, -113, 33, 56, -23, 35, -5, -68, -19, -25, -110, -127, -64, 31, -66, 9, 109, 88, 27, 61, 64, -93, -89, -5, 12, 13, -34, -7, -73, -114, 16};
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
    msg.setTimeStamp(0.711690345576);
    msg.setSource(52737U);
    msg.setSourceEntity(203U);
    msg.setDestination(55119U);
    msg.setDestinationEntity(191U);
    msg.req_id = 21330U;
    msg.ttl = 16896U;
    msg.destination.assign("MAQRAQQRKFZRXCMVBIKQZOVIWYGJXFKOPJOVHVEFIWFHGJDTEKTSODLXQVQHIUYLPAPKMWOTMBWMVOHQOBLECATYLMJYLLSGPJVLBJRMFZNBDGZKJZGPIUARVDDUPNQDQESEEQBIHTPGUSAKDXTFWCZAXUDTEHYKNZCHYUOCNBLNWSINHRRBBMFNTKWU");
    const char tmp_msg_0[] = {-88, 97, -77, -121, -45, -71, 114, -26, 31, -127, 72, 67, 0, 88, 107, -15, 99, -62, 83, -128, -76, 91, -40, 101, -76, -81, 85, -47, -78, -121, -52, 102, 70, -69, -93, -40, -116, -124, 76, -57, -28, -50, -107, -95, -94, -48, 17, 55, 57, 56, 88, -81, -21, 17, 36, 80, 1, 25, 86, -71, 32, 125, 7, 124, -79, -42, 86, -4, 102, 57, -80, -113, -126, -118, 13, 70, 96, -55, 87, -79, 10, -97, -51, -93, -103, 49, 24, -111, -92, -4, 67, 69, 51, 87, 61, 17, -6, -83, -32, -40, 118, 59, -126, 114, -23, -14, -34, 86, 45, 38, 99, -120, -91, 15, 82, 17, -42, -20, 3, 12, -64, 98, -10, 110, -103, 63, 15, -128, 74, -127, 2, 32, 6, 91, -98, 48, -1, 17, 55, -17, -86, -42, -34, 96, -15, -60, -3, 26, -52, -89, -22, 16, -99, -8, 87, 7, -126, -29, 82, 27, 42, 114, 73, -55, -69, 57, 41, -125, 89, -87, -97, -110, -125, -65};
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
    msg.setTimeStamp(0.455964328944);
    msg.setSource(30543U);
    msg.setSourceEntity(61U);
    msg.setDestination(2261U);
    msg.setDestinationEntity(207U);
    msg.req_id = 54974U;
    msg.ttl = 30625U;
    msg.destination.assign("UUZINZDKXXABSHPWHDOWPDIRCELYXAGNVABHEEJTTPHRSAKZLECFMKWEXNTIL");
    const char tmp_msg_0[] = {-66, -15, 59, 24, 67, 50, -67, -36, 82, -10, 94, 123, -35, -124, 61, 61, -3, 110, 4, -9, 115, -119, -104, 67, -2, 28, 61, -66, 110, -24, -118, 86, -90, 54, 9, -107, -98, 45, -6, -28, -9, -36, -108, -102, 120, -85, 35, 91, -80, -80, -20, 63, 117, -49, -20, -34, 43, 58, -29, -98, 105, -44, -55, -45, -19, 17, 52, 26, -108, -96, -75, -69, 5, 108, -67, -101, -10, 34, -116, -95, 12, -111, 7, -119, 108, -56, -106, 116, -16, 4, -46, 112, -54, -31, 58, 25, -37, 103, 23, 76, -74, 79, -69, -80, 9, -56, -39, -6, -48, -57, 3, 28, -11, -72, -96, -128, 21, 45, -18, 66, 5, 121, -19, -36, -62, -89, -14, 64, 2, -102, -58, 62, -85, -108, -22, -33, 95, 4, 66, -76, 118, -65, 85, 107, 41, 109, -6, -90, -11, -73, 11, -111, -115, 109, 113, 70, -127, 18, 50, 63, -122, 78, 117, 65, 83, 47, 94, 39, -55, -84, -40, -74, -109, 77};
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
    msg.setTimeStamp(0.871848386513);
    msg.setSource(60438U);
    msg.setSourceEntity(6U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(129U);
    msg.req_id = 39348U;
    msg.ttl = 38323U;
    msg.destination.assign("BRTVVCNNCXPOZLLWWJXZBOXGUKIYGIDSHFTFGOKMLNROMNJSDKPUFXOONAFPPZVVLIBTB");
    const char tmp_msg_0[] = {58, 81, 107, 4, -61, 86, 13, -81, 61, 103, -103, 109, -52, 13, -89, -109, 10, 110, -53, -84, -37, -84, -92, -76, 114, -45, 35, -16, 96, -68, -64, 101, -22, -11, -24, -78, -15, 107, -45, 91, 61, 79, -38, -60, 67, -87, -105, -105, 75, -57, 44, -59, -47, 93, -33, -62, 56, -78, -123, 109, 116, 63, 33, 51, -43, -71};
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
    msg.setTimeStamp(0.354003633676);
    msg.setSource(39032U);
    msg.setSourceEntity(132U);
    msg.setDestination(1914U);
    msg.setDestinationEntity(118U);
    msg.req_id = 6009U;
    msg.status = 142U;
    msg.text.assign("WUQFEIONYRLZKFVVPCCN");

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
    msg.setTimeStamp(0.681265500756);
    msg.setSource(18504U);
    msg.setSourceEntity(199U);
    msg.setDestination(30164U);
    msg.setDestinationEntity(91U);
    msg.req_id = 16962U;
    msg.status = 149U;
    msg.text.assign("RRJQOZZQRVLSNSNPJORSCGADTTWZAVZIXFECOMKGNZWOJCRPGCVXAWJAYRSWZPMAUIRAEBJCHDCHBLVWIXYQJRSNVHASMPGRUQBWCYFIBOEFUGITYYPESPWUBQYKZJEDDKI");

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
    msg.setTimeStamp(0.148096811358);
    msg.setSource(12476U);
    msg.setSourceEntity(213U);
    msg.setDestination(42537U);
    msg.setDestinationEntity(178U);
    msg.req_id = 49660U;
    msg.status = 131U;
    msg.text.assign("LXYBCBWHRYIZLIBFDVSIUWQYDALGTEPNQAPZYNUWYODEVNDTPQDQNPQEOWBAKQUCXUTZIDAFYXCNSRLFDTMEQTMOPZKJHJKI");

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
    msg.setTimeStamp(0.414989703263);
    msg.setSource(53416U);
    msg.setSourceEntity(4U);
    msg.setDestination(23826U);
    msg.setDestinationEntity(104U);
    msg.group_name.assign("AJRNPFWYCZQOFDROHYHPUDBXUTTYRYSEPHUJKWVALQDNRTEQMOJDFYIRDQZBFCPASMHPDLDKELRPMTEXYUAJVSEEPBICCBGLHHPSIJQKLVIIKYTTJOTWZQQGHRXEQTKI");
    msg.links = 2234418312U;

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
    msg.setTimeStamp(0.280347157208);
    msg.setSource(29932U);
    msg.setSourceEntity(91U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("NVPYCTQSBHXVQYBXDMHUGVDEMOYPSBACCPNUFTRFOOORKAOZAVCWBJBGZINSJOLLLQPKLBUYWJUTQYDKZVEXXWXUMXGSZTLTIAXZDFORQRNKZRKBHHKFTVSGSJACHOPXFGMAGEKVPBTWCDLEEQGLRDQJWLWLRUJSIJAIMCQYEWHSRWUYZPKLIDJCRSSFPREIJNMVZIBGATCPYEKAIMWUWDZNONMTIFAVHGBNHDHFYTGMYDVENKMOPN");
    msg.links = 2849915585U;

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
    msg.setTimeStamp(0.659257210285);
    msg.setSource(44861U);
    msg.setSourceEntity(206U);
    msg.setDestination(62246U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("XLAPLZPHJENXSLBDHCNCWNJUNXSXOULQSKTKTYGDGWMHFVDFHKFZCBQQPRLRRTVEZMNVQAAGTMVAFYIXTEIIUYHOKQOYESBINUIABVJDQODVNYAOFRAWLPOKEZVLIWOSJCRUTHCOLQCPMRTWQTHKKEBJNAPEV");
    msg.links = 3937257328U;

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
    msg.setTimeStamp(0.716827683512);
    msg.setSource(56843U);
    msg.setSourceEntity(65U);
    msg.setDestination(21207U);
    msg.setDestinationEntity(133U);
    msg.groupname.assign("ULLECHCHXJAUZRCJSEPGPMCYJSKHURPQCOFBHGGEXLGKYTWFBOGMGFWWDUBIVBBNSCCCWPPSUNYVLUROQRHQULHJKXWNYEBZHGIVRFIBPOZFCTNMEPMOVVIMNGTYIETTPQAYNFGNLWERSMWYJBSEXZCODDTJWTVDDOASLRQZHKATZLDXJMLAQGMSKVLXOKIWIAIDQA");
    msg.action = 101U;
    msg.grouplist.assign("YYSFGNVHELEHBZHMIZMQWMGKMTFXVSMYKYBBFIRJPBAQQXIJNXGDWORXRXCTIRFYUWGOHGNSIQXTZGECPCDOPLGWREQFYFFIXPULJYWOBAASBWKHCREZPWZOVDFLMFIULAVCIYVCGRSCMNDIDXOHTOEBKKMZAVMFSVPDLURSHTVEDRAPHEYUTTALJXPUGBRJJDLDPHGWZLECLKZQSTDTNOZWQUU");

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
    msg.setTimeStamp(0.496508103382);
    msg.setSource(38461U);
    msg.setSourceEntity(128U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(234U);
    msg.groupname.assign("OCEYVJOOZUBLYKUALRZSHUTEKBZGVPTLVNGAVSRPGEOLAZXAEBDAPWOVXBIZVCZEDHIMQUOMRFIFIABIZKTQNNNTJCGDWHBWLFCKWFUFVXPKRAUYSPMTTJDVSHXMHTOGYBKKQZWHIDGYRABXNCTYGQRJIUHDNYHJTXXOSIFWQNDGFPRMJJZPJBVEABEGWIFGYWZYPMSDDMCSWAWMIFQQCQSEOCTRNSLNDVHUHRXEKCYMUM");
    msg.action = 18U;
    msg.grouplist.assign("CIDHKGSIKAPIWAGMTIDXWKNSTLRGOSQDSMQEITUKEXCYTWVFHKOKPCZHNRXTNUJBAFRJQNZQKUBNQDWORHDEFRYBGXWLZJEVXUDBQMZXLBVPIOFGMTLUPJHNFQ");

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
    msg.setTimeStamp(0.358056961365);
    msg.setSource(25698U);
    msg.setSourceEntity(81U);
    msg.setDestination(806U);
    msg.setDestinationEntity(73U);
    msg.groupname.assign("JVILACZIBFDKNSQZRTNHUMYJADNJGKFNUCAKUHNPZF");
    msg.action = 186U;
    msg.grouplist.assign("XCDPHHMZIDLINJSWJSFZUWGVTVINNPFMVHKTWYNULLALPWDAXUTGBVYIMMONEEKFMPPOWGBJOIGAKQPWUREDJEKUVHQNXTFHERXQPUVNJQVQJENBLIIMFZQARQVSLRKTXE");

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
    msg.setTimeStamp(0.0962065480285);
    msg.setSource(50209U);
    msg.setSourceEntity(222U);
    msg.setDestination(26829U);
    msg.setDestinationEntity(71U);
    msg.value = 0.925413907439;
    msg.sys_src = 50579U;

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
    msg.setTimeStamp(0.40343742904);
    msg.setSource(44690U);
    msg.setSourceEntity(247U);
    msg.setDestination(30988U);
    msg.setDestinationEntity(107U);
    msg.value = 0.445843161289;
    msg.sys_src = 49538U;

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
    msg.setTimeStamp(0.0318167225389);
    msg.setSource(23046U);
    msg.setSourceEntity(192U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(120U);
    msg.value = 0.234217458558;
    msg.sys_src = 443U;

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
    msg.setTimeStamp(0.227104350435);
    msg.setSource(17140U);
    msg.setSourceEntity(79U);
    msg.setDestination(63135U);
    msg.setDestinationEntity(119U);
    msg.value = 0.700946398679;
    msg.units = 89U;

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
    msg.setTimeStamp(0.985420257701);
    msg.setSource(57276U);
    msg.setSourceEntity(48U);
    msg.setDestination(16896U);
    msg.setDestinationEntity(122U);
    msg.value = 0.433690951959;
    msg.units = 179U;

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
    msg.setTimeStamp(0.402568529688);
    msg.setSource(45443U);
    msg.setSourceEntity(44U);
    msg.setDestination(15343U);
    msg.setDestinationEntity(228U);
    msg.value = 0.94767956875;
    msg.units = 232U;

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
    msg.setTimeStamp(0.630170531999);
    msg.setSource(36278U);
    msg.setSourceEntity(177U);
    msg.setDestination(30625U);
    msg.setDestinationEntity(8U);
    msg.base_lat = 0.458372131462;
    msg.base_lon = 0.958391072453;
    msg.base_time = 0.734275476661;

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
    msg.setTimeStamp(0.82109791811);
    msg.setSource(29993U);
    msg.setSourceEntity(245U);
    msg.setDestination(45182U);
    msg.setDestinationEntity(157U);
    msg.base_lat = 0.160547523957;
    msg.base_lon = 0.818999533415;
    msg.base_time = 0.136623856425;

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
    msg.setTimeStamp(0.766422914835);
    msg.setSource(51736U);
    msg.setSourceEntity(53U);
    msg.setDestination(4346U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.208210107213;
    msg.base_lon = 0.467220280025;
    msg.base_time = 0.54731660671;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19621U;
    tmp_msg_0.destination = 64198U;
    tmp_msg_0.timeout = 0.75349943596;
    IMC::AutopilotMode tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.autonomy = 57U;
    tmp_tmp_msg_0_0.mode.assign("NXPWRNCVYXSFGDLUHBNPBASYSJVPDEWLOZYSLJVRRAQBRMZUJKAMBHIGIISIXEWNGFMCNTZDBXHZYZQAKSLHJXYRUKPTEUAOHAEDMSXCUIGPHFKNSDCOCLQMZNFLPTCGJLTXGYADPBGHTEQYIVRLCKJGBFGQJUTOJKVNNIWBVLYRMFVTHEWAQXEKSRUQOQDNDWOLMRCP");
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
    msg.setTimeStamp(0.93250645355);
    msg.setSource(2950U);
    msg.setSourceEntity(173U);
    msg.setDestination(30899U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.133317651763;
    msg.base_lon = 0.0872538977759;
    msg.base_time = 0.459010080797;
    const char tmp_msg_0[] = {-35, -87, 70, -53, -96, 6, 56, -64, -66, 42, -11, -55, -31, -124, 14, 100, -128, -82, -74, 50, -26, 113, -88, 36, 66, -115, 48, 43, -75, -113, -48, -60, -124, -80, 30, -113, -35, -68, 17, 71, -105, -70, 97, -103, 79, 82, -90, -22, -74, 71, -80, -25, -16, -114, -73, -30, 121, -25, -51, 35, 61, 103, 58, 24, 25, -29, -46, 23, 93, -4, -55, 96, -59, 19, 123, 72, -94, 59, 89, -53, 6, 23, 116, 15, 80, -33, -40, 20, 90, 30};
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
    msg.setTimeStamp(0.0170142796172);
    msg.setSource(25528U);
    msg.setSourceEntity(169U);
    msg.setDestination(58796U);
    msg.setDestinationEntity(38U);
    msg.base_lat = 0.107101778539;
    msg.base_lon = 0.795255061574;
    msg.base_time = 0.831026214126;
    const char tmp_msg_0[] = {-80, 75, -84, -87, -94, 110, 45, 61, -17, 18, 3, 105, -25, 73, 44, -91, 12, 57, 83};
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
    msg.setTimeStamp(0.605517615414);
    msg.setSource(54712U);
    msg.setSourceEntity(68U);
    msg.setDestination(29224U);
    msg.setDestinationEntity(88U);
    msg.base_lat = 0.903530690448;
    msg.base_lon = 0.185517252482;
    msg.base_time = 0.871913576464;
    const char tmp_msg_0[] = {39, -122, 46, 90, -81, -15, 76, 52, -1, -83, -122, -25, 39, 44, -86, -103, -91, 54, -53, 95, 21, 35, -56, -81, -72, 30, 99, 31, 1, -94, 77, 37, 50, -33, 99, -14, 119, 0, 29, 17, -118, 109, 97, 41, -84, 94, -104, -63, 3, 82, -21, 45, -13, 61, -76, 65, 1, 71, 37, -80, -42, -9, -65, -123, 43, -76, 24, 51, 58, 13, -24, 115, 96, 15, -56, -24, -106, 19, 62, 33, -119, -24, 49, -31, -65, 9, 117, -117, -70, 69, -3, -72, -42, -117, -24, 97, 1, -59, 108, -27, -51, -42, -89, 55, -98, -79, 112, 114, -26, 41, 61, 39, -55, -123, -46, 100, 96, 91, -91};
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
    msg.setTimeStamp(0.859059713657);
    msg.setSource(34298U);
    msg.setSourceEntity(241U);
    msg.setDestination(64499U);
    msg.setDestinationEntity(156U);
    msg.sys_id = 19104U;
    msg.priority = -39;
    msg.x = 6398;
    msg.y = 27418;
    msg.z = 10499;
    msg.t = 13007;
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.172488073552;
    tmp_msg_0.y = 0.871397687699;
    tmp_msg_0.z = 0.197566466312;
    tmp_msg_0.k = 0.787434769983;
    tmp_msg_0.m = 0.524955919132;
    tmp_msg_0.n = 0.863932889474;
    tmp_msg_0.flags = 73U;
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
    msg.setTimeStamp(0.584285129605);
    msg.setSource(29435U);
    msg.setSourceEntity(253U);
    msg.setDestination(51141U);
    msg.setDestinationEntity(39U);
    msg.sys_id = 44994U;
    msg.priority = -41;
    msg.x = -11272;
    msg.y = 29197;
    msg.z = 25127;
    msg.t = -3451;
    IMC::HistoricSonarData tmp_msg_0;
    tmp_msg_0.altitude = 0.360827641885;
    tmp_msg_0.width = 0.741643698387;
    tmp_msg_0.length = 0.81718300031;
    tmp_msg_0.bearing = 0.33450788378;
    tmp_msg_0.pxl = 17126;
    tmp_msg_0.encoding = 60U;
    const char tmp_tmp_msg_0_0[] = {121, -20, -20, 29, -57, -125, 9, 9, -95, -17, -96, 17, 103, 31, -128, -81, 92, 14, 54, -38, 16, -99, 19, -125, 31, -100, 5, -5, -99, -70, -38, -61, -87, 102, 9, 67, -84, 22, -46, 66, 25, 41, 40, 93, -110, -114, -8, -83, 125, -64, 30, 40, -46, -12, 126, -119, 120, -77, 99, -16, -55, 79, 60, -39, 24, 25, -105, 111, 88, 110, 59, -102, -84, -92, 102, -116, -24, 71, 4, -83, 102, -101, -58, -12, -19, 98, 15, 92, -88, 62, 51, 13, -92, -127, -105, 50, -71, -91, 114, -86, 116, 8, -51, -3, -38, 25, 110, 57, -82, -70, 40, -69, -18, -37, -57, -60, 10, 73, 35, 122, 79, -72, 60, -99, -106, -82, 34, 14, -24, -88, -57, -70, 103, -103, -124, -54, -96, -122, -36, -22, -78, -101, 15, 55, 79, 8, 42, -107, 105, 120, -118, -53, 100, 62, -97, -38, 100, 57, 21, -62, 62, 7, 13, 55, -54, 81, 121, -122, -42, -20, 5, -50, 35, -112, 38, 102, -49, -12, 46, 64, 59, -83, -44, -54, 1, 75, -28, 120, 14, -116, -39, 58, 49, -37, 114, -9, -112, 43, -128, -34, 31, 115, -58, -114, -80, -6, 66, 88, -110, -21, -70, -121, 121, 26, 66, 113, -77, -50, -50, 58, 26, 80, -6, -28, -116, 84, 119, -88};
    tmp_msg_0.sonar_data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.528087191366);
    msg.setSource(32523U);
    msg.setSourceEntity(6U);
    msg.setDestination(22730U);
    msg.setDestinationEntity(235U);
    msg.sys_id = 13735U;
    msg.priority = -123;
    msg.x = 15680;
    msg.y = 29248;
    msg.z = -16393;
    msg.t = -11509;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49809U;
    tmp_msg_0.off_x = 0.1635287227;
    tmp_msg_0.off_y = 0.456100639173;
    tmp_msg_0.off_z = 0.706104466634;
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
    msg.setTimeStamp(0.718338136561);
    msg.setSource(28669U);
    msg.setSourceEntity(221U);
    msg.setDestination(65176U);
    msg.setDestinationEntity(16U);
    msg.req_id = 12907U;
    msg.type = 164U;
    msg.max_size = 64658U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.934913695589;
    tmp_msg_0.base_lon = 0.500248019887;
    tmp_msg_0.base_time = 0.724465002737;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 24712U;
    tmp_tmp_msg_0_0.destination = 28125U;
    tmp_tmp_msg_0_0.timeout = 0.737678448073;
    IMC::FormationControlParams tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.action = 117U;
    tmp_tmp_tmp_msg_0_0_0.lon_gain = 0.632023465993;
    tmp_tmp_tmp_msg_0_0_0.lat_gain = 0.711224610462;
    tmp_tmp_tmp_msg_0_0_0.bond_thick = 0.700428238469;
    tmp_tmp_tmp_msg_0_0_0.lead_gain = 0.796070673334;
    tmp_tmp_tmp_msg_0_0_0.deconfl_gain = 0.543864012088;
    tmp_tmp_tmp_msg_0_0_0.accel_switch_gain = 0.513086457737;
    tmp_tmp_tmp_msg_0_0_0.safe_dist = 0.267018924175;
    tmp_tmp_tmp_msg_0_0_0.deconflict_offset = 0.818039446159;
    tmp_tmp_tmp_msg_0_0_0.accel_safe_margin = 0.911098949813;
    tmp_tmp_tmp_msg_0_0_0.accel_lim_x = 0.14391158288;
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
    msg.setTimeStamp(0.271723649982);
    msg.setSource(47178U);
    msg.setSourceEntity(125U);
    msg.setDestination(31695U);
    msg.setDestinationEntity(173U);
    msg.req_id = 12224U;
    msg.type = 20U;
    msg.max_size = 64114U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.648513614419;
    tmp_msg_0.base_lon = 0.466827788872;
    tmp_msg_0.base_time = 0.890623364006;
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
    msg.setTimeStamp(0.816029049884);
    msg.setSource(20095U);
    msg.setSourceEntity(114U);
    msg.setDestination(13744U);
    msg.setDestinationEntity(125U);
    msg.req_id = 31142U;
    msg.type = 153U;
    msg.max_size = 50850U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.643372047895;
    tmp_msg_0.base_lon = 0.0776835968321;
    tmp_msg_0.base_time = 0.447015587184;
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
    msg.setTimeStamp(0.739602221022);
    msg.setSource(50145U);
    msg.setSourceEntity(102U);
    msg.setDestination(282U);
    msg.setDestinationEntity(112U);
    msg.original_source = 11846U;
    msg.destination = 25669U;
    msg.timeout = 0.273043093051;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.0125688203418;
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
    msg.setTimeStamp(0.347127237678);
    msg.setSource(64582U);
    msg.setSourceEntity(67U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(59U);
    msg.original_source = 4563U;
    msg.destination = 16172U;
    msg.timeout = 0.467961868574;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UTWYTKRDRLQCAOFCEKCMSRETMTUBZDUQFPUALIPRFPAMBQUOXTOHMLVYIHNTGWYZVNRWULKEKOKNHZGIPVHPWVIKMMHJMBQECTOBWEJEYZQJUAJYAJCAWGFGTXPRBDYYLRBESDZCESGDGOFRXLABKVTJXCUTGPSQAYDUKNJM");
    tmp_msg_0.attr_type = 181U;
    tmp_msg_0.min.assign("OROWEAGKBZTHQTNZFKCHPSMBPBUDNXTKQVIASWTPEQSKGPIVJZFRLJNCBQOTQEOQMPXURYSUKEWNNLNHLWJHHTINGAHVWCWCXXOBCLJTMQRAKXEFSIZVYFOXROUHRFVTTDQBQLGQJCHPUGXUJCELWXOPLYHGZSIMPC");
    tmp_msg_0.max.assign("FHJKZRBGIPTFUDWPWWRHXJSADSDXGWUPIGAPMKNNFSPPVEQSTZDGHELSQFTLMXNVUCPIOKBEHNRVLOLSNQYHEAHYUKCTUPGIWYDKVIFMXIKXXKWLMCWNLABCNAMRVDWYQAFOWHQBNFPYOJTYURILVJXLJYZLFXHRYDTRFESZGRQEICNOSRICGCTOXYEVKJEMUAQQKZNCTOBGCHEJMZBZATBJDUHWPOC");
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
    msg.setTimeStamp(0.626936984873);
    msg.setSource(35392U);
    msg.setSourceEntity(132U);
    msg.setDestination(10591U);
    msg.setDestinationEntity(162U);
    msg.original_source = 28069U;
    msg.destination = 24914U;
    msg.timeout = 0.871093193146;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 3251800704U;
    tmp_msg_0.state = 167U;
    tmp_msg_0.error.assign("UUMTIXIZZNSXMLYJKOPDDJMNPWRORCKWISBXYGOJGTDPPOGGHNELYIYZTVJJBIREUIUCDLSACHGJKJSOVKNBTGFCFAUMPEWSZDHZVCKQRBRNJUGUHKQIRSKKHBMMQSTSSJPEEUFYFRTAXIPXZXNLKHNQBPSLQKVWAGHYQTFEBOMQVOXYYEBWXVOHARLBLMWTFCYGWQZRVDZZEDIFFHFDNQWMGLETBJADVACCL");
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
    msg.setTimeStamp(0.434559529309);
    msg.setSource(31433U);
    msg.setSourceEntity(146U);
    msg.setDestination(57683U);
    msg.setDestinationEntity(20U);
    msg.type = 4U;
    msg.comm_interface = 33619U;
    msg.model = 30670U;
    msg.list.assign("RXBLAZOPUOOVSFEUPEORLTTDBXKHTKRMXZMFAACI");

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
    msg.setTimeStamp(0.058590610171);
    msg.setSource(8345U);
    msg.setSourceEntity(196U);
    msg.setDestination(12645U);
    msg.setDestinationEntity(213U);
    msg.type = 135U;
    msg.comm_interface = 31336U;
    msg.model = 48931U;
    msg.list.assign("UJIWIQODBMNYXJYBIZAGSNIDKJTRZSGAQQQJOMQNNFAYLXXVPHIDXUHZUDBPDUQTJCIWPYUJLEABBZYHVTKOCBDO");

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
    msg.setTimeStamp(0.566600229468);
    msg.setSource(14528U);
    msg.setSourceEntity(33U);
    msg.setDestination(26902U);
    msg.setDestinationEntity(87U);
    msg.type = 0U;
    msg.comm_interface = 42282U;
    msg.model = 45431U;
    msg.list.assign("MKFNSABFVCUIWTKAXTNPDKJFCLCNQNCRLVIWBNUORTYIKYBWXEEHAXNNHJKOSTKZMFEOLICRCYSQWOQDYZDJZKDNGDHWTBHSIUBMKKVIIHSUPYVEVSAREPQPOGHQZCPXOZXGVMYQBGSRWWAEUPJPYHQHLRMYJ");

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
    msg.setTimeStamp(0.782650124859);
    msg.setSource(31869U);
    msg.setSourceEntity(145U);
    msg.setDestination(14385U);
    msg.setDestinationEntity(248U);
    msg.type = 21U;
    msg.req_id = 3168049387U;
    msg.ttl = 49393U;
    msg.code = 147U;
    msg.destination.assign("BMNCQYZWWONOQJYBAEZPDQIEUMAUHZXJKUKKDOHQEFIACHUGSXMKQBRGWSJGJVMLVDRRVDUXCGIVAPNKKYZWXEYXYPSFCGARVOHNHPPBVFSDURNDPJTQZIQRJTZORPIUKJTLCBCJSNRZLXLHARHYSWQMFAJBECRILP");
    msg.source.assign("GKJQKLPQFEUXEJBXVZZUXSVLGNJXGIRXMHWDNEVMTSKHAILZMCBOPXUBNCRPZWSLEYRHZDQEOJEPMYXOI");
    msg.acknowledge = 33U;
    msg.status = 65U;
    const char tmp_msg_0[] = {64, 0, 95, -57, 16, 108, 35, -96, -55, -41, -95, 22, -91, 90, -101, 11, 98, 82, 50, -71, 6, 38, -23, 74, -42, -114, -85, -85, -34, 47, 63, -103, -34, 58, 104, 100, 67, 31, 104, 80, 81, -34, 56, -122, 97, -112, -114, 106, -49, -8, 49, -126, 36, 24, 79, -63, -85, -111, -71, -45, -48, -31, -8, -123, -116, -63, 9, 92, -56, 38, 5, 39, -30, 24, 32, 97, 110, -86, -71, -21, -109, -1, 115, 81, -125, 6, 30, 54, 32, -87, -109, -115, 88, 83, 93, -106, 91, -96, -110, 21, -61, -37, 36, 45, -12, -73, 65, -93, 112, -122, -27, 99, -92, 0, -104, 83, 79, -98, -33, 112, -38, 102, -52, -119, 22, -69, -79, -120, -18, 60, 18, 16, -42, 44, -112, -39, 34, 13, 50, -18, 18, 125, 50, -53, -8, 6, 126, -92, -97, -98, 11, -46, -32, 61, -59, 79, -36, 72, -51, 118, 121, 15};
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
    msg.setTimeStamp(0.327115731521);
    msg.setSource(50745U);
    msg.setSourceEntity(34U);
    msg.setDestination(15290U);
    msg.setDestinationEntity(99U);
    msg.type = 172U;
    msg.req_id = 3633986438U;
    msg.ttl = 41336U;
    msg.code = 228U;
    msg.destination.assign("HYEQFTZGTDJISCNCCXGNGXJAALHHSUMROUBWFEJGTTBPXIBKQKMCREJPCOJTXLMGNVIIYRYPOGPRHYALWGACTNNMJBOLQJRBNKOXESSDJMDTSAJDZYFDUBKWCCIOMKPHVPKVZRKEUSLCIMQUDVHVUXJLIBAKPWRDOAANYUPINMDHSUEXTEDFFWHMXPQBGDVWXIOTFVQYFSPNFRRZZASOQVHZKNZWZFZEVYYWZQQ");
    msg.source.assign("AQTWQQYKAAAVYYJEGHPALFGMRJRDNLCSHOWBYXYPDCXOFWWXOLKRYFBNJCNDHKVEBDITQDWBPDVGFQBYFDRHSPKFXZZHHGCBIEOMZXTTCUUHSBTZKJCXGNVUHTUAXLLFOSAQSPIDQPFPJNVCSC");
    msg.acknowledge = 128U;
    msg.status = 158U;
    const char tmp_msg_0[] = {1, -65, 72, 106, 105, -126, 54, 27, -10, 122, 73, 125, 18, -95, -56, 85, 72, 100, 76, 122, 32, -105, 108, 25, 60, -2, 77, 103, 42, -6, 118, 96, -48, 98, 24, -71, -86, 74, 60, 87, 45, -86, -82, -116, 93, 22, -103, -32, 97, 119, -24, -75, -62, 60, -70, -5, -55, -4, -10, -62, 29, 59, 35, 26, 15, 43, 47, -56, 39, -29, -9, -118, 79, 113, 113, -67, -85, 20, 25, 32, 66, 25, 77, 109, -98, 111, 74, 59, -27, 35, -56, 30, -82, -36, -29, -74, -1, 121, -23, -3, 10, 30, 67, 122, -39, -25, -100, -118, 114, -75, -86, -82, 72, 102, 123, 5, -121, 46, -15, -96, -84, -68, 108, -73, -44, 94, 119, 122, -46, 29, 38, 7, 38, 19, -8, 24, -48, -38, -116, -2, 29, -28, 112, -116, -123, -87, 122, -3, -50, -125, 4, 114, 92, -36, -80, 113, -57, -71, -33, 95, -108, -84, -10, -27, -19, 4, -48, 37, -34, -20, 107, 117, 7, -30, -64, -95, -43, 47, 123, -124, 1, 9, -74, -14, -65, 27, -60, 20, -4, -41, -69, 101, -38, 57, 118, -29, 20, -58, 36, -24, 29, 12, 57, 125, -27, -13, -96, -68, -72, 41, -27, 39, 108, 67, -72, -1, -10, -34, -82, 77, 19, 78, 5, -99, -29, 39, 62, -64, -119, -32, -88, -10, 50, 34, -11, -22, -116, 90, 5, -83, -45, -36, 9, 10, 9, -17, -124, -90};
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
    msg.setTimeStamp(0.0193478072841);
    msg.setSource(10954U);
    msg.setSourceEntity(119U);
    msg.setDestination(4468U);
    msg.setDestinationEntity(156U);
    msg.type = 26U;
    msg.req_id = 3041521974U;
    msg.ttl = 52204U;
    msg.code = 222U;
    msg.destination.assign("WSMKODSUJHMHLBLTDFDUCWKQFNNROEWNRSZXXDVZADLWSYPUFZTYZHELUEIHUMROEAKEOVUNQDQUCMVWPVMDNFXAIQSQSWCIRLIGGPOESHQBUBLYZBCVMEFRJRRGOYFYHONDIVBNKWRESHPAYKMPENMJACCGSBXYFHVPAUVJNTBCKAKWPZXWRTTDQKTXKOHQHYJTTAPGJFOIAIZZOSPCEQPBBYXGXAMJJZNIJUGBIGLFL");
    msg.source.assign("UHRQYMPNZACNFRAQWNHGGYDHAWNFWLYVCINZSVPCONIMIJVQFDFEEVJFMKSEHDVKFSSDQUBTPHGGVQPOOQHYZMTSBEPXUT");
    msg.acknowledge = 235U;
    msg.status = 164U;
    const char tmp_msg_0[] = {-98, -108, 121, -21, 101, 77, 28, -86, -98, -97, -54, -98, 43, 25, -86, -7, 100, -85, -86, 52, 110, 3, 111, 43, -84, 76, 58, 27, -98, 121, -63, -50, 12, 28, 70, -104, -99, 62, 14, -59, 78, 41, 7, -74, 117, -89, -10, 102, 61, 24, -62, -47, 126, -23, -28, 20, 112, 125, 29, -55, -43, 22, -23, -59, 12, 38, -39, 84, 38, -37, 4, 78, -103, -19, -77, 23, -3, 9, 65, 10, 85, -55, 70, -14, -121, -83, -105, 109, -5, -37, -100, -122, 109, -49, 59, 125, 61, 73, -78, -99, -86, -75, -113, 94, 119, -84, 56, 11, -48, -69, 104, -33, 74};
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
    msg.setTimeStamp(0.34492100484);
    msg.setSource(56610U);
    msg.setSourceEntity(230U);
    msg.setDestination(48970U);
    msg.setDestinationEntity(155U);
    msg.id = 240U;
    msg.range = 0.825109068559;

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
    msg.setTimeStamp(0.468311323795);
    msg.setSource(50740U);
    msg.setSourceEntity(90U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(96U);
    msg.id = 214U;
    msg.range = 0.0415274130423;

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
    msg.setTimeStamp(0.00403799626692);
    msg.setSource(57134U);
    msg.setSourceEntity(103U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(209U);
    msg.id = 134U;
    msg.range = 0.839225887896;

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
    msg.setTimeStamp(0.566946758409);
    msg.setSource(3113U);
    msg.setSourceEntity(168U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(116U);
    msg.beacon.assign("KHEAIDUTQDFNBYVJDPZSIJDOWRQPBELTZIYCDRNTBSXXEKPMGALKJLMPYGDZYVLQAXIMYEBGSSVQBGANQDHQBHOMPWXZZYKCXBYTRSGRMLEDCBV");
    msg.lat = 0.851664652025;
    msg.lon = 0.0745011855248;
    msg.depth = 0.466225712983;
    msg.query_channel = 133U;
    msg.reply_channel = 156U;
    msg.transponder_delay = 174U;

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
    msg.setTimeStamp(0.244036140791);
    msg.setSource(59836U);
    msg.setSourceEntity(66U);
    msg.setDestination(33609U);
    msg.setDestinationEntity(142U);
    msg.beacon.assign("TFSTWZEKOOYRZIMRSHCVPVJLQIHXZYTPIAPWATIVWVPUSWATNJSTHNWLXVGHAUUVJTBMP");
    msg.lat = 0.860805060176;
    msg.lon = 0.483637668585;
    msg.depth = 0.517551141416;
    msg.query_channel = 4U;
    msg.reply_channel = 52U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.0106522729658);
    msg.setSource(28071U);
    msg.setSourceEntity(126U);
    msg.setDestination(47798U);
    msg.setDestinationEntity(8U);
    msg.beacon.assign("WOUZAGIICZNYFWKMXUQDJBNHNAHTTPHGPKAPYBSFDXQTLMOVIHVQVCRENGGCNDBMIIZTZWGZIAEKMFKSBERKVHXDYJRYPDWLVJKCIOOWBAERJSJSNDHEOBLGMURMUNGYCWJAOM");
    msg.lat = 0.944356217199;
    msg.lon = 0.334326053156;
    msg.depth = 0.511885648332;
    msg.query_channel = 250U;
    msg.reply_channel = 95U;
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
    msg.setTimeStamp(0.693211915401);
    msg.setSource(9425U);
    msg.setSourceEntity(42U);
    msg.setDestination(30304U);
    msg.setDestinationEntity(32U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.835333993807);
    msg.setSource(38338U);
    msg.setSourceEntity(252U);
    msg.setDestination(17197U);
    msg.setDestinationEntity(171U);
    msg.op = 209U;

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
    msg.setTimeStamp(0.302094007998);
    msg.setSource(53520U);
    msg.setSourceEntity(56U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(92U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.991362393123);
    msg.setSource(36648U);
    msg.setSourceEntity(64U);
    msg.setDestination(51559U);
    msg.setDestinationEntity(145U);
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.626876539401;
    tmp_msg_0.lon = 0.752336716696;
    tmp_msg_0.z = 0.0456490459567;
    tmp_msg_0.z_units = 237U;
    tmp_msg_0.radius = 0.211507045415;
    tmp_msg_0.duration = 55475U;
    tmp_msg_0.speed = 0.410661356289;
    tmp_msg_0.speed_units = 55U;
    tmp_msg_0.popup_period = 53305U;
    tmp_msg_0.popup_duration = 18024U;
    tmp_msg_0.flags = 135U;
    tmp_msg_0.custom.assign("NQRXCVBMPSBMTZSVKTEHWFVAKJAPAPFYTN");
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
    msg.setTimeStamp(0.619985927871);
    msg.setSource(13337U);
    msg.setSourceEntity(9U);
    msg.setDestination(6432U);
    msg.setDestinationEntity(139U);
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.922850310912;
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
    msg.setTimeStamp(0.351352614497);
    msg.setSource(43780U);
    msg.setSourceEntity(238U);
    msg.setDestination(62408U);
    msg.setDestinationEntity(108U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 38289U;
    tmp_msg_0.lat = 0.464094526543;
    tmp_msg_0.lon = 0.11145658007;
    tmp_msg_0.z = 0.665731023789;
    tmp_msg_0.z_units = 148U;
    tmp_msg_0.amplitude = 0.571655855086;
    tmp_msg_0.pitch = 0.0502000746185;
    tmp_msg_0.speed = 0.750486914234;
    tmp_msg_0.speed_units = 228U;
    tmp_msg_0.custom.assign("OBKDFTGTPNRYEIFIDYHDCVKELSVGIRSTDTSULQVDXCUQHTBCQGHBPOAGZZGQEFJMOWAMVRNERUIXKQYXSVRNVCLQCILJXPEZRBYVWWZITNJMCVJNWSPLFYBJKFJNYWXEDKYOYLTTUGFMSXHPUZGXUDSPOSWOLZK");
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
    msg.setTimeStamp(0.413024940156);
    msg.setSource(23523U);
    msg.setSourceEntity(81U);
    msg.setDestination(17263U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.120329861419;
    msg.lon = 0.490074782981;
    msg.depth = 0.68732835342;
    msg.sentence.assign("WZKPJDJIRYKFJGTAVUMAWFYJTBWXCMAGCOETVISBHASLBWHWVCPLJDZPLBUMJFYYSQLAGRCIFDD");
    msg.txtime = 0.262680281845;
    msg.modem_type.assign("SAFWIRQGKFFPNKEOAIORMLQAHJKLYXEYVDDGSVGPJFRPSVHNTJKXWDNWUOUYZLAKBQPFQMEROLKJMFXEBP");
    msg.sys_src.assign("RMCIQXPJELCBBDBVYQEDARIWQWZACFSKHFJRMQDXWSRZVNYKGMCRFASIHORIMDTWGDOLBGOUTFCWN");
    msg.seq = 49935U;
    msg.sys_dst.assign("LATCDDQRGHCURPSCXCNJFMQAKEMWNUXJD");
    msg.flags = 43U;
    const char tmp_msg_0[] = {50, -15, -13, -102, 58, -59, 98, -98, -27, 98, 87, 38, 56, -82, 35, -60, -45, -106, -94, 43, 24, 22, 34, 39, -80, -18, -111, -11, -23, 121, 54, -11, 125, -6, -58, -108, 2, -30, -94, 106, 51, 107, 122, -36, -56, 63, 87, -62, 18, -117, -79, 114, 81, 94, 105, -53, -31, 83, 68, -82, -24, -66, -126, 66, 24, -82, -109, 125, -1, 4, -17, 26, 34, -84, 70, 55, -96, 105, 42, 104, 124, 61, -7, -57, -123, 94, 79, 0, -28, 54, -112, -47, 52, -97, -38, -70, 102, -45, -83, 102, -104, 118, 24, -82, 36, -124, 13, 45, 0, 59, -116, -81, -95, 74, 73, -8, -47, 48, -41, 87, -59, -21, 36, -60, -14, -27, 78, 39, 27, -83, -24, -113, 102, 33, 104, 38, 121, 76, 99, -59, -65, 84, 67, -72, 37, -53, -83, -121, 80, 105, -54, 122, 86, 16, 56, -30, 78, -79, -38, -48, -126, -33, -123, 28, 123, 26, 126, 69, 11, 84, -104, 21, 19, 123, -88, -126, -97, -36, 52, -121, -97, -58, 20, 113, -30, -18, 10, 102, 42, -5, -92, 7, -17, 90, -14, -123, 109, -115, -107, 15, 56, -125, 96, 24, -127, 48, 54, 92, -50, 73, -87, -10, 42, 76, 6, 83, 102, 104, -10, 120, -53};
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
    msg.setTimeStamp(0.194742046175);
    msg.setSource(62325U);
    msg.setSourceEntity(17U);
    msg.setDestination(41536U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.531594045852;
    msg.lon = 0.577746334484;
    msg.depth = 0.717747280609;
    msg.sentence.assign("XPCWHVRETIQDYCWABGFWAQWQXORUDSLMYIYVDNLUDJZCPIEZKTGITUGDUCYQECNXBBEKNAMHRUEMPOTKSLIEZIAHLEGVVKSTXLGVDLNBOAPTMNMNPURKIZOJJRBHDSNYFZCGMCTDKRFFLGWEZQWQOFWQQAJJIWHRTUFKSVGXDIDYJMVNQTBBRLMZPTSYLAABXF");
    msg.txtime = 0.584615461268;
    msg.modem_type.assign("RGATSCBZADJVRNTQZUCEOHBFNDHGVAAVMYJMJKWBBJNWDAINDZWSBXUWDJMYAEBITXQBPSYLQTIVPJULCPYFQTIAXZBFSRREPPRJEWLQOZNXI");
    msg.sys_src.assign("JZWYKWUOZJUSWUXPBMJECBGYMQUGMQBFDBFYXEPHAUESZKHPDNJSEFCRSXYTQTAFIDIZYKHSARBRXGQVTYJIVTMDNQOLEDNTVVQUSLRNKBFPHAAUORCVQJSOLLSVANYMPCMRGSAWDQIIAZEXPETKNDPUTFWHCDIVRMWEXVILLIZWKWLGYLGPHHBKDKXMWOXLGNEJHOHPFVNCNHLRZNCCZFOAPKVOYBTZXJGBMK");
    msg.seq = 9587U;
    msg.sys_dst.assign("IKLINFDYYSYLCLZPSSBJRQGDMBFKQOCGMBCQEEKAJUSOZXIUEH");
    msg.flags = 85U;
    const char tmp_msg_0[] = {25, 40, -35, 97, 33, -3, -112, -30, -94, 35, -107, 46, 103, 54, 31, 38, -73, -99, -104, -54, 86, -47, 60, 42, 89, -99, 30, 51, -94, -127, -128, -3, 6, -14, -25, -98, 103, -83, -106, -99, 109, -86, -9, -109, 8, 117, 109, -119, 109, 51, -9, -56, -72, 20, 28, 75, 14, 79, -75, -12, -15, -69, 57, -113, -83, -102, -124, -87, 88, 110, -31, -46, -110, 72, 104, 66, 91, 41, 109, -63, 86, 78, 13, 51, 116, -67, -47, 39, 22, 113, 39, 97, 86, 76, 85, 71, -47, -94, -7, -37, 85, 86, 80, -19, -101, -122, 79, -96, -109, -25, -36, -12, 0, 19, 79, 105, -107, -2, -62, 40, -97, -43, 73, -41, -106, 7, -87, -128, 101, -91, -111, 49, -89, -124, -65, 125, -79, 114, 126, -33, 0, 105, 23, -31, -72, -56, 47, -73, 4, -62, -57, 79, -66, -99, -6, 12, -89, -119, -14, 107, -74, -55, -30, 92, 125, -55, -30, 26, -82, 63, 119, 112, 18, 54, 108, 98, 14, -10, -40, -15, 40, -18, -97, -3, 111, -7, -105, 63, 113};
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
    msg.setTimeStamp(0.870588238139);
    msg.setSource(38582U);
    msg.setSourceEntity(3U);
    msg.setDestination(24987U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.292845520903;
    msg.lon = 0.676943214042;
    msg.depth = 0.160264225155;
    msg.sentence.assign("WELIKWPUZZVVCALDHDCPVLQETNMPTNXKUQVYAEELWROUWBGUYHSUDZHVXDHBTDNROAODFFKMSFQYVXXOGSZXRQVYKPQOSPRCCNJRIMJUMQILYMDFXQTHPFETG");
    msg.txtime = 0.527100612591;
    msg.modem_type.assign("TYUDFPCIZDHUBAXCLVULKOYBGGEYTLIXZOIPRYAJIVHFTIRQOATQWHUYBRCXMQZESAZRAHLHCGMDTKJJRBXMFEGPVBUQKXFDYYXPRNZAVYSHSYNEINPWTJOKBBTVMJAASCQOZUNOWMNRKRWSPIKMCFBVMFNISEQWOBMZRPNZNVHGGHTUKOWOFEJGDWNQLHJYSLODSKGCCAQWLUQFUXXSPPTPFTMXGKXEBAWESIZVQVDLZRJDJCMDE");
    msg.sys_src.assign("KZXNSKCMPDOUIAZINTHLYMFMDKTLWWQAYGGKOPVMLUJNEIHEGJBVAUXJVWEHRVMFLYKTWLFDTTCXMHAPTYCIVZWSYNJFDHQJMXYRDREOZYLXFZUSUFNQVQTQGASSOAXXQYCFZCNQCGYFMMHIXPG");
    msg.seq = 1748U;
    msg.sys_dst.assign("CZHBFJHXLDSJAVK");
    msg.flags = 144U;
    const char tmp_msg_0[] = {17, 0, -84, 49, -124, 16, 104, -102, 93, -122, -22, -56, -39, -61, -125, -113, 38, 18, 104, 110, -40, 41, -12, 32, -18, -67, -92, -25, 54, 96, 51, 98, -49, -107, -65, -83, -28, -91, -93, 92, 18, -73, 117, -67, 28, -25, 89, -125, 23, -109, -56, 63, -123, -56, -71, 74, 103, -125, 87, -122, 58, -82, -122, 114, -2, 12, -97, 61, -60, 53, -80, -119, 33, 31, -21, 123, 83, -48, -66, -96, -113, -124, 3, -12, -30, -124, -14, -30, 0, 77, -73, 125, -70, 18, 87, -110, 109, 112, -55, 19, -38, -75, 74, -28, 89, 74, -16, 124, -120, 26, -107, 100, 116, 95, 113, -77, 83, -37, -116, 63, -105, 51, -116, -53, 52, 63, 97, -41, -34, 38, 66, 67, -61, -56, 54, -54, -16, 68, 83, -53, 0, 83, 65, -57, -52, -46, 65, 96, 7, 8, 12, -5, -108, 96, 83, -52, -82, 57, 126, 96, -42, -123, 16, -97, 78, 51, 105, -81, 97, -108, 90, 121, 108, -78, 62, -36, -113, 111, 21, 81, 60, -46, -112, -53, -127, -26, 84, 116, -8, -62, -98, -64, -92, 46, 49, -52, -23, -92, 122};
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
    msg.setTimeStamp(0.792777822147);
    msg.setSource(16305U);
    msg.setSourceEntity(131U);
    msg.setDestination(47457U);
    msg.setDestinationEntity(158U);
    msg.op = 49U;
    msg.system.assign("QJXEXUUTLOYOIJP");
    msg.range = 0.352611721442;
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 0U;
    tmp_msg_0.x = 0.935585020025;
    tmp_msg_0.y = 0.879805507269;
    tmp_msg_0.z = 0.951672552154;
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
    msg.setTimeStamp(0.250615496556);
    msg.setSource(25775U);
    msg.setSourceEntity(112U);
    msg.setDestination(31960U);
    msg.setDestinationEntity(220U);
    msg.op = 58U;
    msg.system.assign("JXBUBKFGLAFWSEQNPMOUGXTTIEAECGTCBDOKOVQKVRIPVENAIMBQQZHRIAMELYUNCFRCKP");
    msg.range = 0.424015144317;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.275320917016;
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
    msg.setTimeStamp(0.687677075049);
    msg.setSource(54864U);
    msg.setSourceEntity(23U);
    msg.setDestination(22686U);
    msg.setDestinationEntity(233U);
    msg.op = 197U;
    msg.system.assign("XGMKYODQULJRJBZINANOHURYZGZYWVORCZSOAIWXHESAHCYPPPCUMFIIICRAMCSATBEIEGWXUGNGXKINVYLWBSQAWTQMPVJUXFRDUVBFUCDBJHVJBXDKZEYOLKQBFGMONHLRAPTHDYTILHWAWUPDZNUEWFQMBXTPDCXVPXTYCNKNAQTQYPGJTFFJDSMUECOMDLXRCZLWQVIHKBZYEEKRWVESDSTJLSFKRKZQAFPGSBKHEMSRQIVLZGNOJJHLN");
    msg.range = 0.264166038089;
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HBSLBRBUNZQTGRNYYTQGTLEKGJGDIHDEVGYOHVVWPSTXUFDJZW");
    tmp_msg_0.value.assign("WWNVTLTURVJQUEUTCSCMUNLNODKUYOXBXSZHPBBLCFGQKHBHZYZCPCKRXSYNQTSDSWDXTZQQTCMEENVMYTAVRZXXDAMMIHTETVBAAOPWFSJIHLJIBYPWAMPSUVOMQJNRZZLVORRQZKDOALKAKAPYSDGCYFTJZQRGOGVRMIFCICBMSDAYODHQWDLEXSJPHJNGIXFEUFWDGEWKINRYBXPUFPVBCYMFGOEONJAKLHK");
    tmp_msg_0.type = 159U;
    tmp_msg_0.access = 98U;
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
    msg.setTimeStamp(0.00482369045585);
    msg.setSource(31683U);
    msg.setSourceEntity(18U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.717591557848);
    msg.setSource(21318U);
    msg.setSourceEntity(78U);
    msg.setDestination(63953U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.150741729363);
    msg.setSource(6987U);
    msg.setSourceEntity(43U);
    msg.setDestination(22887U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.122956602547);
    msg.setSource(22574U);
    msg.setSourceEntity(36U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(158U);
    msg.list.assign("JTSOWPPICCHUMECVIIPAJARKNHXQXBDFUAZZXMLPEMOQLVNFCUWCTFDRUNBYJUXXKFFRAXQJOYXFLPYBIXFDWOAJHKSBOCSYFBKNHGTEUVNEMDICEJHRYLSYMQIOGQLDWGAZYXLZPOWKVOKWVVQSUAHORMWYULTVIYJRADLVRGHGRBLRLPTUZJZNDCNENIGPGHDT");

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
    msg.setTimeStamp(0.99327277094);
    msg.setSource(17749U);
    msg.setSourceEntity(100U);
    msg.setDestination(58529U);
    msg.setDestinationEntity(99U);
    msg.list.assign("TURZVWXMGVMQYABXCGAYHUYPWDJWHOVYXOMOIPIHTKMHEFHLYAIBEWBGGEHESSZJEFMTCTBQQLIKPYBUGWRDGYIQWONENJRSVVLVPDABYPRTONANBTCGJZSQKRXOXUEMXCKGZWNMCZLK");

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
    msg.setTimeStamp(0.798323052918);
    msg.setSource(9189U);
    msg.setSourceEntity(32U);
    msg.setDestination(10544U);
    msg.setDestinationEntity(3U);
    msg.list.assign("ITJAHVUHJCMBRBDJDRFCRTEKYTLSELWUPBSTLWHCKMXZKDZOEBUMFBNUNODFPADEIHZCWBGACIGACSTLLKUNLUVPVGTWKIPKIGJFVNYZKSXEXSIIEVPACJNFZREOWMRQYYFDQGQXWMGXXFPYIGRWTQJZDLBNVCMEZCNABBQUMQOZQMRAMHZQHONLYD");

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
    msg.setTimeStamp(0.413586870764);
    msg.setSource(46096U);
    msg.setSourceEntity(18U);
    msg.setDestination(12921U);
    msg.setDestinationEntity(224U);
    msg.peer.assign("WWQAQHPPMRNDQXNXAXDZBPYMRESXBSECRYUULJDCPBCVYGJOGIHTTQFPNOLJTNPRKMXARYEDBEILYEIHCKXHPJRHUVTUTWSWFJDJUEFXSPXLUYVWOHDACCDHFKNGGJMQYVGAKNNYDLKHIVRVTJYEDXTGQEVRMCZFUGBPZTBCIUALIHKVFIWS");
    msg.rssi = 0.465719875673;
    msg.integrity = 44355U;

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
    msg.setTimeStamp(0.826878034346);
    msg.setSource(32562U);
    msg.setSourceEntity(231U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(165U);
    msg.peer.assign("QLVURVHDGODUNODICMOKJYBNGEBMWHAUGQHPCVRRWLBWEGNECQFDBAKXKWMSBCXQPQTUEZ");
    msg.rssi = 0.789901386323;
    msg.integrity = 18491U;

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
    msg.setTimeStamp(0.0930738566218);
    msg.setSource(11803U);
    msg.setSourceEntity(17U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(233U);
    msg.peer.assign("PKWBGZEEOWAANICPFKNVULJDCFRPKHCKNMREMGOSSGLEKCMXBOZFXOQFMKRACZZQMTPVOIQCITDHURNSMUPLWJDFBNVUMHKXHUEJLPLXDUYMYAWGJHXDIFXBIHZBOITNNLHDRWEDTTZYGPEAWOMVHHWDTYJXBQGCIAEYRUQJNBUSGJPLIGZBYQDBFYPVVTVKAKSQXFEUVOQROYTCSEKJNUZRTLAXSPBWGLSATQZWLAYGCRNDZMWSIFJVVOJCIF");
    msg.rssi = 0.139654979527;
    msg.integrity = 24843U;

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
    msg.setTimeStamp(0.647110286601);
    msg.setSource(600U);
    msg.setSourceEntity(68U);
    msg.setDestination(17370U);
    msg.setDestinationEntity(192U);
    msg.req_id = 1185U;
    msg.destination.assign("GWWWKDAZOCIZKAIRQMZQTQLGOSTCLMTOJZVMSSECBGQWEWUXUWJLNEBHGTKUPDKGCDPCLQNXFUVVEBASAUKVHTJZENIBRFYYHVIAWTBLLRXFJSCTZODKIVWMPEZDOEIXMYJYMBHRUXDYXBOPZZEXRYBZYVFRLXGUEQKJOTPSGVSJSJKVQCQFPFDCRSTPOKMJYXCLNEFFNSOYGHNWRABMIXHJPPAAVFDHPWBMNUQ");
    msg.timeout = 0.914745403445;
    msg.range = 0.959070765932;
    msg.type = 214U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 8065U;
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
    msg.setTimeStamp(0.200012965006);
    msg.setSource(3028U);
    msg.setSourceEntity(31U);
    msg.setDestination(3173U);
    msg.setDestinationEntity(44U);
    msg.req_id = 24429U;
    msg.destination.assign("ZVQLGPYURBWAWOTWBOLDBTJGCKWWHXQJAOQEMVONKXZLGSSAAEVWNCXKAUZNRMQXUBYPFHANTRTNDVFNUJMFKJMBEZPIPXQLQKXOASIWJMBLKPUUFKYQCDSMXMSDLFEBDNLTIXSDCIBROGRYZBEJMHRFTCXTIFWEDCNRPZUOKQPSXHTADSIETGUJGRVYWKVPIKYGCFEIQCTOINBYVOAUHHLHVNIDYZHLYERH");
    msg.timeout = 0.632106567121;
    msg.range = 0.138330299757;
    msg.type = 133U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.0966577259572;
    tmp_msg_0.lon = 0.240621317495;
    tmp_msg_0.z = 0.382185624775;
    tmp_msg_0.z_units = 186U;
    tmp_msg_0.speed = 0.728825695084;
    tmp_msg_0.speed_units = 203U;
    tmp_msg_0.takeoff_pitch = 0.229773032001;
    tmp_msg_0.custom.assign("OPKQTFFOJODISAXFXGTLSVNRRISCRTEBVIUXQRQPBVNGMNKNBSY");
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
    msg.setTimeStamp(0.172187182733);
    msg.setSource(35640U);
    msg.setSourceEntity(106U);
    msg.setDestination(60925U);
    msg.setDestinationEntity(186U);
    msg.req_id = 63336U;
    msg.destination.assign("UDEDWMSZFUVPQLEJSCZRYQBBTAWVFZJNLMOGIZBYNXBIQRGYIZKXQCWDNOVJOFMAQJJWETTZVWARSNHIUNCRNQMDNGTMMUAKUEAULNHIDOGKYNSJRWCINPEPDYVOUFZOPADFBXZYRDYLGFBPR");
    msg.timeout = 0.895798915669;
    msg.range = 0.0347386372716;
    msg.type = 71U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 58470U;
    tmp_msg_0.flags = 56U;
    tmp_msg_0.lat = 0.80641117019;
    tmp_msg_0.lon = 0.0279911097614;
    tmp_msg_0.start_z = 0.877583357283;
    tmp_msg_0.start_z_units = 75U;
    tmp_msg_0.end_z = 0.929375109383;
    tmp_msg_0.end_z_units = 173U;
    tmp_msg_0.radius = 0.733481908916;
    tmp_msg_0.speed = 0.808506269203;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.custom.assign("NMOBDYWXXBKXSADOYSFGTFXFSYHQIGEFLNVVPGGKYRWOEHPKDZTYCVHDWNCGTYPOIROIMCTWLOFBXEALWDTGMVEIATJWESSAUGYWCIQMYONCOSZPRIUZR");
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
    msg.setTimeStamp(0.737533198356);
    msg.setSource(2426U);
    msg.setSourceEntity(202U);
    msg.setDestination(59841U);
    msg.setDestinationEntity(101U);
    msg.req_id = 42753U;
    msg.type = 151U;
    msg.status = 60U;
    msg.info.assign("TAPQTUMAQAULXTYOOFQHQAEDILKNNPTPSTXJCPHINZCDAACHVSPUYVZMDYERJDQGDQFERLYZVRMLTGJWDYGZJLPVMBANFBAYRSBVKWFKFWXIWWLFSETPMNIIXAISCDZRGHFVYOUJLYIWDODNUGQJKUIRRHODMPEWMYOOHLBELTVSZGNLZOSSGKVWYMXJRIXCTXECBWOCRBGXBGZUFHC");
    msg.range = 0.609871247471;

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
    msg.setTimeStamp(0.674624982589);
    msg.setSource(32088U);
    msg.setSourceEntity(16U);
    msg.setDestination(11588U);
    msg.setDestinationEntity(93U);
    msg.req_id = 57087U;
    msg.type = 216U;
    msg.status = 23U;
    msg.info.assign("DMQWZYTAOGSTXWBZOMVERDMBQZRNXVIRXKKFQFFHIBIFNHXLEGLFFMKYRANTYQDCECVMIWAXGKRHLGRUBOJESIFMSISWCOCRLCZYEALEPEEOQLYYGNBRLNWIQDRZGHBIMQMJTPPAADSVULTOVPXCSSSPPXAUHVZXRBBCTSVEKUKUQDNGBJJH");
    msg.range = 0.19110168831;

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
    msg.setTimeStamp(0.847496249135);
    msg.setSource(40294U);
    msg.setSourceEntity(109U);
    msg.setDestination(41841U);
    msg.setDestinationEntity(229U);
    msg.req_id = 55139U;
    msg.type = 159U;
    msg.status = 215U;
    msg.info.assign("KTCVEUZNEUSTTUOGFIAJSWIXQLUNPPCBMCDHXQBANMVJBITYJETOWEITQMHZISGXZUMXOGPBHDDKFUYMQUTIGXFCFWYSDBURBLGREWJTBRJDEVYIHWZFSMVLLSSOCYHWLQRYWZVZLTQJUYIGXDIYDJHNNAAYZXZHCSVPCMRHMUDQXTPOLJRBFOZOEAMYRWOGGRVXDESCQPHBWLGNHVAGERNLWKJZA");
    msg.range = 0.530475378455;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.233155379983);
    msg.setSource(6884U);
    msg.setSourceEntity(136U);
    msg.setDestination(59983U);
    msg.setDestinationEntity(18U);
    msg.value = 26502;

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
    msg.setTimeStamp(0.5030571843);
    msg.setSource(50379U);
    msg.setSourceEntity(214U);
    msg.setDestination(13080U);
    msg.setDestinationEntity(9U);
    msg.value = 19164;

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
    msg.setTimeStamp(0.256898212456);
    msg.setSource(47329U);
    msg.setSourceEntity(125U);
    msg.setDestination(37304U);
    msg.setDestinationEntity(0U);
    msg.value = -22490;

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
    msg.setTimeStamp(0.354886694275);
    msg.setSource(28543U);
    msg.setSourceEntity(57U);
    msg.setDestination(27451U);
    msg.setDestinationEntity(45U);
    msg.value = 0.756956148025;

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
    msg.setTimeStamp(0.29659553857);
    msg.setSource(33596U);
    msg.setSourceEntity(19U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(193U);
    msg.value = 0.843578645843;

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
    msg.setTimeStamp(0.0837630999618);
    msg.setSource(43027U);
    msg.setSourceEntity(247U);
    msg.setDestination(40736U);
    msg.setDestinationEntity(9U);
    msg.value = 0.782326356755;

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
    msg.setTimeStamp(0.322508298484);
    msg.setSource(2934U);
    msg.setSourceEntity(185U);
    msg.setDestination(48131U);
    msg.setDestinationEntity(181U);
    msg.value = 0.740852076832;

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
    msg.setTimeStamp(0.139806064555);
    msg.setSource(45868U);
    msg.setSourceEntity(235U);
    msg.setDestination(22948U);
    msg.setDestinationEntity(204U);
    msg.value = 0.30889118303;

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
    msg.setTimeStamp(0.0399035647558);
    msg.setSource(14916U);
    msg.setSourceEntity(208U);
    msg.setDestination(32073U);
    msg.setDestinationEntity(181U);
    msg.value = 0.319883453443;

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
    msg.setTimeStamp(0.884000657256);
    msg.setSource(50908U);
    msg.setSourceEntity(36U);
    msg.setDestination(14494U);
    msg.setDestinationEntity(92U);
    msg.validity = 54954U;
    msg.type = 83U;
    msg.utc_year = 43048U;
    msg.utc_month = 31U;
    msg.utc_day = 239U;
    msg.utc_time = 0.821486880732;
    msg.lat = 0.19714581851;
    msg.lon = 0.0370180610413;
    msg.height = 0.414957616582;
    msg.satellites = 205U;
    msg.cog = 0.801696630687;
    msg.sog = 0.125069956044;
    msg.hdop = 0.742304277268;
    msg.vdop = 0.389155164276;
    msg.hacc = 0.0966781153153;
    msg.vacc = 0.372875909369;

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
    msg.setTimeStamp(0.344734124627);
    msg.setSource(22738U);
    msg.setSourceEntity(84U);
    msg.setDestination(4670U);
    msg.setDestinationEntity(61U);
    msg.validity = 64094U;
    msg.type = 93U;
    msg.utc_year = 45092U;
    msg.utc_month = 82U;
    msg.utc_day = 224U;
    msg.utc_time = 0.0250661877378;
    msg.lat = 0.868982285227;
    msg.lon = 0.27917931268;
    msg.height = 0.648261448784;
    msg.satellites = 31U;
    msg.cog = 0.550910015846;
    msg.sog = 0.83151620103;
    msg.hdop = 0.879713641608;
    msg.vdop = 0.797188350915;
    msg.hacc = 0.846692533004;
    msg.vacc = 0.247630995346;

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
    msg.setTimeStamp(0.171591834909);
    msg.setSource(45923U);
    msg.setSourceEntity(177U);
    msg.setDestination(56838U);
    msg.setDestinationEntity(167U);
    msg.validity = 58310U;
    msg.type = 251U;
    msg.utc_year = 5186U;
    msg.utc_month = 101U;
    msg.utc_day = 147U;
    msg.utc_time = 0.631811520443;
    msg.lat = 0.470393713507;
    msg.lon = 0.656372943525;
    msg.height = 0.258820501772;
    msg.satellites = 143U;
    msg.cog = 0.515741853269;
    msg.sog = 0.715868704334;
    msg.hdop = 0.972647865885;
    msg.vdop = 0.237914110776;
    msg.hacc = 0.649179486572;
    msg.vacc = 0.224372439134;

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
    msg.setTimeStamp(0.994404284979);
    msg.setSource(26413U);
    msg.setSourceEntity(207U);
    msg.setDestination(48075U);
    msg.setDestinationEntity(82U);
    msg.time = 0.00708443337897;
    msg.phi = 0.219781026282;
    msg.theta = 0.787882615102;
    msg.psi = 0.637476725294;
    msg.psi_magnetic = 0.67372780564;

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
    msg.setTimeStamp(0.739237033818);
    msg.setSource(63999U);
    msg.setSourceEntity(88U);
    msg.setDestination(8122U);
    msg.setDestinationEntity(186U);
    msg.time = 0.636758609588;
    msg.phi = 0.45292511375;
    msg.theta = 0.825038734838;
    msg.psi = 0.842421377505;
    msg.psi_magnetic = 0.408551290228;

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
    msg.setTimeStamp(0.430176393405);
    msg.setSource(59826U);
    msg.setSourceEntity(51U);
    msg.setDestination(47048U);
    msg.setDestinationEntity(177U);
    msg.time = 0.124049556791;
    msg.phi = 0.534965352919;
    msg.theta = 0.700997460797;
    msg.psi = 0.585991448948;
    msg.psi_magnetic = 0.239806294857;

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
    msg.setTimeStamp(0.664064908663);
    msg.setSource(212U);
    msg.setSourceEntity(43U);
    msg.setDestination(51035U);
    msg.setDestinationEntity(228U);
    msg.time = 0.790631278816;
    msg.x = 0.922864132131;
    msg.y = 0.520018716193;
    msg.z = 0.859257808829;
    msg.timestep = 0.22375630787;

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
    msg.setTimeStamp(0.362689727551);
    msg.setSource(25861U);
    msg.setSourceEntity(95U);
    msg.setDestination(59661U);
    msg.setDestinationEntity(137U);
    msg.time = 0.0940048660919;
    msg.x = 0.674108777702;
    msg.y = 0.328063013525;
    msg.z = 0.925066082424;
    msg.timestep = 0.979040691131;

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
    msg.setTimeStamp(0.634830051356);
    msg.setSource(58510U);
    msg.setSourceEntity(63U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(149U);
    msg.time = 0.400527142181;
    msg.x = 0.48223219705;
    msg.y = 0.719787485336;
    msg.z = 0.791002862142;
    msg.timestep = 0.465393841709;

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
    msg.setTimeStamp(0.0460282491527);
    msg.setSource(2469U);
    msg.setSourceEntity(119U);
    msg.setDestination(22701U);
    msg.setDestinationEntity(105U);
    msg.time = 0.401555573007;
    msg.x = 0.889964333728;
    msg.y = 0.364475082252;
    msg.z = 0.00395253649963;

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
    msg.setTimeStamp(0.745653243117);
    msg.setSource(63462U);
    msg.setSourceEntity(120U);
    msg.setDestination(55748U);
    msg.setDestinationEntity(161U);
    msg.time = 0.371566891133;
    msg.x = 0.4961625092;
    msg.y = 0.368432244073;
    msg.z = 0.888118981626;

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
    msg.setTimeStamp(0.664278917673);
    msg.setSource(24536U);
    msg.setSourceEntity(17U);
    msg.setDestination(59808U);
    msg.setDestinationEntity(128U);
    msg.time = 0.248885640185;
    msg.x = 0.794670199019;
    msg.y = 0.240516375181;
    msg.z = 0.706491581929;

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
    msg.setTimeStamp(0.194396399131);
    msg.setSource(24520U);
    msg.setSourceEntity(226U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(23U);
    msg.time = 0.327428806443;
    msg.x = 0.141778116005;
    msg.y = 0.913841490072;
    msg.z = 0.595743810587;

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
    msg.setTimeStamp(0.764089608031);
    msg.setSource(30211U);
    msg.setSourceEntity(107U);
    msg.setDestination(13563U);
    msg.setDestinationEntity(128U);
    msg.time = 0.0248354322618;
    msg.x = 0.328000529328;
    msg.y = 0.0924329661055;
    msg.z = 0.3976279731;

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
    msg.setTimeStamp(0.171984680069);
    msg.setSource(36645U);
    msg.setSourceEntity(154U);
    msg.setDestination(27364U);
    msg.setDestinationEntity(196U);
    msg.time = 0.525304712993;
    msg.x = 0.0737347123054;
    msg.y = 0.74949973479;
    msg.z = 0.695426227064;

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
    msg.setTimeStamp(0.352386063881);
    msg.setSource(5663U);
    msg.setSourceEntity(169U);
    msg.setDestination(12986U);
    msg.setDestinationEntity(55U);
    msg.time = 0.509513250227;
    msg.x = 0.695704594934;
    msg.y = 0.747938020064;
    msg.z = 0.63992727341;

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
    msg.setTimeStamp(0.612682752653);
    msg.setSource(8281U);
    msg.setSourceEntity(168U);
    msg.setDestination(2341U);
    msg.setDestinationEntity(172U);
    msg.time = 0.654790413048;
    msg.x = 0.567599940332;
    msg.y = 0.380319627372;
    msg.z = 0.526102111946;

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
    msg.setTimeStamp(0.328415963514);
    msg.setSource(23619U);
    msg.setSourceEntity(129U);
    msg.setDestination(28385U);
    msg.setDestinationEntity(238U);
    msg.time = 0.495591043368;
    msg.x = 0.615818971601;
    msg.y = 0.587165337546;
    msg.z = 0.195859869409;

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
    msg.setTimeStamp(0.139990849779);
    msg.setSource(4438U);
    msg.setSourceEntity(186U);
    msg.setDestination(13612U);
    msg.setDestinationEntity(56U);
    msg.validity = 169U;
    msg.x = 0.554452074182;
    msg.y = 0.054981284235;
    msg.z = 0.612644609073;

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
    msg.setTimeStamp(0.155300912651);
    msg.setSource(41483U);
    msg.setSourceEntity(146U);
    msg.setDestination(23015U);
    msg.setDestinationEntity(116U);
    msg.validity = 48U;
    msg.x = 0.330651373062;
    msg.y = 0.929893696443;
    msg.z = 0.682419601235;

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
    msg.setTimeStamp(0.970594747278);
    msg.setSource(9590U);
    msg.setSourceEntity(40U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(151U);
    msg.validity = 177U;
    msg.x = 0.702357936484;
    msg.y = 0.667365239279;
    msg.z = 0.899835510185;

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
    msg.setTimeStamp(0.208406504292);
    msg.setSource(60758U);
    msg.setSourceEntity(170U);
    msg.setDestination(12966U);
    msg.setDestinationEntity(3U);
    msg.validity = 69U;
    msg.x = 0.126936483916;
    msg.y = 0.457439878121;
    msg.z = 0.707340944641;

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
    msg.setTimeStamp(0.811170161625);
    msg.setSource(17549U);
    msg.setSourceEntity(15U);
    msg.setDestination(65433U);
    msg.setDestinationEntity(90U);
    msg.validity = 54U;
    msg.x = 0.851216224632;
    msg.y = 0.119583237594;
    msg.z = 0.104513017013;

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
    msg.setTimeStamp(0.419719107673);
    msg.setSource(8905U);
    msg.setSourceEntity(175U);
    msg.setDestination(59895U);
    msg.setDestinationEntity(51U);
    msg.validity = 249U;
    msg.x = 0.523859254762;
    msg.y = 0.508803170035;
    msg.z = 0.595727418987;

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
    msg.setTimeStamp(0.579584401602);
    msg.setSource(35356U);
    msg.setSourceEntity(3U);
    msg.setDestination(38745U);
    msg.setDestinationEntity(8U);
    msg.time = 0.664193260606;
    msg.x = 0.691991700137;
    msg.y = 0.798318280766;
    msg.z = 0.0472282851463;

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
    msg.setTimeStamp(0.0868114831119);
    msg.setSource(24138U);
    msg.setSourceEntity(11U);
    msg.setDestination(52104U);
    msg.setDestinationEntity(114U);
    msg.time = 0.451317993918;
    msg.x = 0.467151538133;
    msg.y = 0.0722423614245;
    msg.z = 0.190645298772;

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
    msg.setTimeStamp(0.0900071936065);
    msg.setSource(38039U);
    msg.setSourceEntity(37U);
    msg.setDestination(56442U);
    msg.setDestinationEntity(187U);
    msg.time = 0.649406551557;
    msg.x = 0.991121517552;
    msg.y = 0.371416435138;
    msg.z = 0.547644955281;

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
    msg.setTimeStamp(0.743493304491);
    msg.setSource(53841U);
    msg.setSourceEntity(127U);
    msg.setDestination(13254U);
    msg.setDestinationEntity(126U);
    msg.validity = 130U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.520826876364;
    tmp_msg_0.y = 0.783762475882;
    tmp_msg_0.z = 0.836792487527;
    tmp_msg_0.phi = 0.22428029499;
    tmp_msg_0.theta = 0.455043249477;
    tmp_msg_0.psi = 0.752920317845;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.637423904592;

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
    msg.setTimeStamp(0.473425556204);
    msg.setSource(26702U);
    msg.setSourceEntity(56U);
    msg.setDestination(14887U);
    msg.setDestinationEntity(48U);
    msg.validity = 207U;
    msg.value = 0.0417088853962;

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
    msg.setTimeStamp(0.566075359134);
    msg.setSource(54041U);
    msg.setSourceEntity(19U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(192U);
    msg.validity = 42U;
    msg.value = 0.147660742612;

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
    msg.setTimeStamp(0.414592738386);
    msg.setSource(59627U);
    msg.setSourceEntity(226U);
    msg.setDestination(37003U);
    msg.setDestinationEntity(254U);
    msg.value = 0.456450632392;

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
    msg.setTimeStamp(0.0230796071392);
    msg.setSource(35812U);
    msg.setSourceEntity(106U);
    msg.setDestination(35739U);
    msg.setDestinationEntity(65U);
    msg.value = 0.323956548473;

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
    msg.setTimeStamp(0.0125656214091);
    msg.setSource(34455U);
    msg.setSourceEntity(78U);
    msg.setDestination(14060U);
    msg.setDestinationEntity(12U);
    msg.value = 0.677184600148;

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
    msg.setTimeStamp(0.6503953337);
    msg.setSource(5923U);
    msg.setSourceEntity(66U);
    msg.setDestination(10191U);
    msg.setDestinationEntity(200U);
    msg.value = 0.189950487687;

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
    msg.setTimeStamp(0.387750671731);
    msg.setSource(38008U);
    msg.setSourceEntity(219U);
    msg.setDestination(53482U);
    msg.setDestinationEntity(29U);
    msg.value = 0.095794502802;

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
    msg.setTimeStamp(0.891692503754);
    msg.setSource(4794U);
    msg.setSourceEntity(101U);
    msg.setDestination(35776U);
    msg.setDestinationEntity(6U);
    msg.value = 0.105065269259;

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
    msg.setTimeStamp(0.935031460773);
    msg.setSource(11410U);
    msg.setSourceEntity(34U);
    msg.setDestination(8550U);
    msg.setDestinationEntity(225U);
    msg.value = 0.713248560472;

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
    msg.setTimeStamp(0.711193471351);
    msg.setSource(38178U);
    msg.setSourceEntity(14U);
    msg.setDestination(21669U);
    msg.setDestinationEntity(124U);
    msg.value = 0.214559381809;

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
    msg.setTimeStamp(0.470916110862);
    msg.setSource(29234U);
    msg.setSourceEntity(227U);
    msg.setDestination(49298U);
    msg.setDestinationEntity(46U);
    msg.value = 0.852873931459;

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
    msg.setTimeStamp(0.633322222109);
    msg.setSource(10200U);
    msg.setSourceEntity(129U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(177U);
    msg.value = 0.182336792693;

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
    msg.setTimeStamp(0.366384298341);
    msg.setSource(21825U);
    msg.setSourceEntity(136U);
    msg.setDestination(4489U);
    msg.setDestinationEntity(81U);
    msg.value = 0.269704139465;

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
    msg.setTimeStamp(0.552747179954);
    msg.setSource(20565U);
    msg.setSourceEntity(101U);
    msg.setDestination(6467U);
    msg.setDestinationEntity(6U);
    msg.value = 0.194464334977;

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
    msg.setTimeStamp(0.634273305136);
    msg.setSource(54871U);
    msg.setSourceEntity(67U);
    msg.setDestination(51113U);
    msg.setDestinationEntity(123U);
    msg.value = 0.0193314554372;

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
    msg.setTimeStamp(0.271104464208);
    msg.setSource(50904U);
    msg.setSourceEntity(197U);
    msg.setDestination(55065U);
    msg.setDestinationEntity(244U);
    msg.value = 0.755244797612;

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
    msg.setTimeStamp(0.241435341662);
    msg.setSource(35646U);
    msg.setSourceEntity(243U);
    msg.setDestination(49342U);
    msg.setDestinationEntity(94U);
    msg.value = 0.535238920974;

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
    msg.setTimeStamp(0.916151464318);
    msg.setSource(13649U);
    msg.setSourceEntity(139U);
    msg.setDestination(24433U);
    msg.setDestinationEntity(111U);
    msg.value = 0.193762000097;

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
    msg.setTimeStamp(0.555766209743);
    msg.setSource(22144U);
    msg.setSourceEntity(7U);
    msg.setDestination(25093U);
    msg.setDestinationEntity(86U);
    msg.value = 0.220620207699;

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
    msg.setTimeStamp(0.494868177782);
    msg.setSource(56346U);
    msg.setSourceEntity(89U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(203U);
    msg.value = 0.0103139516741;

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
    msg.setTimeStamp(0.0540826455693);
    msg.setSource(36820U);
    msg.setSourceEntity(197U);
    msg.setDestination(43736U);
    msg.setDestinationEntity(193U);
    msg.value = 0.262814184268;

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
    msg.setTimeStamp(0.810646616217);
    msg.setSource(27540U);
    msg.setSourceEntity(175U);
    msg.setDestination(10384U);
    msg.setDestinationEntity(11U);
    msg.value = 0.604236962986;

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
    msg.setTimeStamp(0.641099902613);
    msg.setSource(64188U);
    msg.setSourceEntity(71U);
    msg.setDestination(23241U);
    msg.setDestinationEntity(111U);
    msg.value = 0.800874823363;

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
    msg.setTimeStamp(0.291142490053);
    msg.setSource(2478U);
    msg.setSourceEntity(140U);
    msg.setDestination(52487U);
    msg.setDestinationEntity(114U);
    msg.value = 0.729257603997;

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
    msg.setTimeStamp(0.0813051197613);
    msg.setSource(7442U);
    msg.setSourceEntity(60U);
    msg.setDestination(43450U);
    msg.setDestinationEntity(239U);
    msg.value = 0.696060881783;

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
    msg.setTimeStamp(0.982741352869);
    msg.setSource(1408U);
    msg.setSourceEntity(139U);
    msg.setDestination(8343U);
    msg.setDestinationEntity(30U);
    msg.value = 0.442070099445;

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
    msg.setTimeStamp(0.7995397314);
    msg.setSource(30095U);
    msg.setSourceEntity(241U);
    msg.setDestination(59600U);
    msg.setDestinationEntity(200U);
    msg.direction = 0.680843769094;
    msg.speed = 0.265329111827;
    msg.turbulence = 0.745887389603;

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
    msg.setTimeStamp(0.804134107206);
    msg.setSource(60470U);
    msg.setSourceEntity(32U);
    msg.setDestination(29164U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.805659100124;
    msg.speed = 0.9442440285;
    msg.turbulence = 0.37678048673;

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
    msg.setTimeStamp(0.52962773267);
    msg.setSource(48614U);
    msg.setSourceEntity(15U);
    msg.setDestination(65386U);
    msg.setDestinationEntity(129U);
    msg.direction = 0.203239312252;
    msg.speed = 0.235881223337;
    msg.turbulence = 0.20360601735;

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
    msg.setTimeStamp(0.398535441803);
    msg.setSource(39147U);
    msg.setSourceEntity(221U);
    msg.setDestination(28402U);
    msg.setDestinationEntity(115U);
    msg.value = 0.138396438756;

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
    msg.setTimeStamp(0.895975934501);
    msg.setSource(49489U);
    msg.setSourceEntity(167U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(62U);
    msg.value = 0.218303076474;

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
    msg.setTimeStamp(0.690272899169);
    msg.setSource(24539U);
    msg.setSourceEntity(72U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(190U);
    msg.value = 0.620026380376;

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
    msg.setTimeStamp(0.181040890389);
    msg.setSource(6267U);
    msg.setSourceEntity(245U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(226U);
    msg.value.assign("RKINZSTNCZONGMEJRDLGFMGRMGLMDIOBXRCKFWJMSYGEVELQDVCHFFZHYSXHAQVFLGPWZ");

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
    msg.setTimeStamp(0.462553125236);
    msg.setSource(1494U);
    msg.setSourceEntity(221U);
    msg.setDestination(39081U);
    msg.setDestinationEntity(149U);
    msg.value.assign("TDDAKCFVLKQOQQUBTCMOYGSNQJWDXSAYZNJUZPOFNZCPJIBMLFR");

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
    msg.setTimeStamp(0.103252548447);
    msg.setSource(8827U);
    msg.setSourceEntity(227U);
    msg.setDestination(18147U);
    msg.setDestinationEntity(230U);
    msg.value.assign("KUTLCWGIAIYZWMAJL");

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
    msg.setTimeStamp(0.225684419233);
    msg.setSource(6284U);
    msg.setSourceEntity(205U);
    msg.setDestination(11029U);
    msg.setDestinationEntity(137U);
    const char tmp_msg_0[] = {60, 123, 83, -118, 88, 106, 27, -58, -107, 13, 97, 101, -80, -13, 71, -87, -59, -92, 28, 82, 75, -8, -14, -72, 11, 68, 98, 115, 53, -47, 67, -82, 115, -15, -98, 83, -28, -75, -73, 85, -101, -38, -127, -36, 83, 59, 111, -87, -123, 125, -57, 106, -123, 51, -42, -2, 54, -66, 28, 75, -47, 119, 14, 122, 33, 113, -117, 78, 76, 69, 1, -93, -80, 28, 86, -74, -5, 99, 42, 117, 126, -38, 83, -48, 65, 16, 17, -30, 47, 110, 113, -62, -76, -2, 82, -119, -36, 99, 58, 67, -67, 88, 71, 5, 8, 6, 114, 118, -73, 26, 4, 102, 118, 26, 20, 114, 117, 52, 106, -75, -115, -82, -98, -105, 69, -99, -63, 102, 111, 79, 122, -111, -68, 35, -58, -40, 76, -24, 4, 5, 34, 97, 94, -112, -67, -103, -84, -59, 73, 23, -32, 41, -8, 86, -1, -32, -96, -108, -117, -105, -7, -3, 38, -2, -101, 30, -103, 79, 31, 81, -102, 82, 116, 83, 64, 29, -74, -119, 65, -80, 118, 88, -20, 100, 7, 79, 83, 3, -74, 63, 2, 111, 111, -11, -55, 116, -5, -51, 84, 88, 24, 13, -18, -62, 110, -19, -96, 68, 30, -18, -122, -93, -49, -114, -127, 123, 86, 36, -102, -77, 121, -51, 31, -79, 99, -84, -78, 31, -27, 46, -100, 60, 49, -56, -113, -77, -47, 28, 38, 11, -27};
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
    msg.setTimeStamp(0.291473451202);
    msg.setSource(55407U);
    msg.setSourceEntity(44U);
    msg.setDestination(42479U);
    msg.setDestinationEntity(185U);
    const char tmp_msg_0[] = {-15, 120, 115, 101, -71, 115, 117, 105, -8, 25, -9, 96, 54, -50, -119, 90, -27, -78, -61, -3, -49, 110, -45, 112, -24, 7, -79, -80, 33, -33, 115, 17, -103, -30, -99, -2, -4, -65, -52, -7, 108, -90, -3, 7, -115, -9, 79, -3, 39, 38, -49, 54, -67, 89, 50, 75, 70, 109, -67, 93, 84, 81, -77, 53, -43};
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
    msg.setTimeStamp(0.182278800785);
    msg.setSource(6091U);
    msg.setSourceEntity(210U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(117U);
    const char tmp_msg_0[] = {68, 102, -15, -87, 83, -3, 73, -124, 112, -56, -50, -104, 35, -37, -109, 51, -29, -40, -120, -2, -2, -42, -28, -30, -9, 120, -87, -33, 48, -90, -15, -93, -62, 21, -15, -5, 10, -52, 51, 35, -36, -58, -126, -78, -42, -26, -111, 17, -59, 35, -11, -59, 110, 20, 6, 114, -77, -78, -124, 28, 86, -5, 19, 66, 75, 119, 6, -49, 72, -128, -49, -4, 101, -75, 54, 39, -73, 125, -80, -54, 75, 125, -25, -39, 20, -125, -87, -54, -106, -46, 15, -84, -46, 13, -97, -14, 18, 80, 33, 93, 97, 65, -92, 82, 48, 27, -14, 39, 48, -120, -25, -113, 107, 124, 93, 84, 94, 27, 91, 25, 41, -23, -27, 4, -32, 123, -48, -53, 47, 65, -89, 20, 57, -94, -66, 104, 95, 0, -40, -89, 33, -115, -125, -111, 58, -73, -30, -105, 74, 24, 34, 6, 72, -64, 55, -9, 66, 85, 123, -61, 100, -48, 40, -83, 122, 110, -121, 119, 55, 50, 113, 44, -83, -48, 14, -116, -72, -64, 40, -74, 68, 41, 85, -99, -47, -13, 121, 70, -13, -23, -25, 99, 108, 47, 119, -23, 88};
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
    msg.setTimeStamp(0.873061958853);
    msg.setSource(56699U);
    msg.setSourceEntity(204U);
    msg.setDestination(9951U);
    msg.setDestinationEntity(147U);
    msg.value = 0.900276312631;

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
    msg.setTimeStamp(0.93024492112);
    msg.setSource(20077U);
    msg.setSourceEntity(195U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(158U);
    msg.value = 0.43215917821;

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
    msg.setTimeStamp(0.261942509508);
    msg.setSource(60160U);
    msg.setSourceEntity(122U);
    msg.setDestination(54501U);
    msg.setDestinationEntity(154U);
    msg.value = 0.262381400091;

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
    msg.setTimeStamp(0.279825222568);
    msg.setSource(53218U);
    msg.setSourceEntity(245U);
    msg.setDestination(37145U);
    msg.setDestinationEntity(78U);
    msg.type = 50U;
    msg.frequency = 3096043335U;
    msg.min_range = 13411U;
    msg.max_range = 64578U;
    msg.bits_per_point = 214U;
    msg.scale_factor = 0.548706612399;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.462123441758;
    tmp_msg_0.beam_height = 0.636885161762;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-36, 100, -74, -38, 34, 28, -47, 106, -114, -30, 55, 108, -101, 50, -104, -87, 2, -17, -117, 32, 115, 113, 20, 71, -23, 81, 33, 11, -52, -22, 44, -95, 91, 79, 91, -41, -94, -28, 0, 95, 53, 37, 83, 73, -105, -21, 120, -18, 100, 31, 30, -23, -1, 29, 75, 54, 109, 59, -127, -118, 112, 35, 68, 22, 64, -14, -38, -25, 118, 13, 126, 119, -41, 103, -97, -83, 105, 122, 42, -126, -111, -69, -91, 21, -37, -38, 5, -30, 109, -119, -47, 73, -41, 23, 121, -34, -33, 88, 103, -37, -99, -114, -89, -110, -82, -123, 108, -49, 125, 125, -52, 30, 7, 118, -46, 13, -65, -106, 46, 8, 41, 14, 82, -102, 97, -98, 62, 2, 72, 45, 86, -114, 65, 84, -35, -49, 85, -6, 114, -69, 59, -48, 78, -110, 72, 36, 20, 65, -63, -44, -107, -38, -52, -86, -11, -125, -49, -61, -125, -122, 58, 64, -39, -122, 3, -76, 93, -79, -50};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.0638672084947);
    msg.setSource(64835U);
    msg.setSourceEntity(52U);
    msg.setDestination(5063U);
    msg.setDestinationEntity(211U);
    msg.type = 106U;
    msg.frequency = 2258035131U;
    msg.min_range = 38404U;
    msg.max_range = 47665U;
    msg.bits_per_point = 24U;
    msg.scale_factor = 0.746651474016;
    const char tmp_msg_0[] = {-54, -90, -122, -64, -48, 71, 47, 85, -3, -23, 51, 74, -98, -111, -126, 86, -100, -83, -62, -85, -106, -17, -80, 13, -99, -21, -121, -17, 3, -17, -92, 106, 45, -71, -122, 47, 100, -65, 8, 65, 49, 7, 16, -22, 49, 106, -56, -19, -11, 75, -62, -87, 70, -77, -29, -6, 38, 104, -67, -56, -74, 46, -3, 76, 9, 11, 59, 46, -30, -108, 75, 82, -97, -28, 115, 8, 104, 54, 66, 35, -64, 126, -28, 104, -60, 25, -8, -122, 114, -45, -65, 17, 116, -8, 32, 119, 28, -63, -35, -79, 54, -9, 124, 23, 11, 120, -89, -5, -14, -75, -46, -114, -111, 51, -113, -105, -63, -115, -2, 46, -67, -61, 116, -81, 82, 71, -18, 44, 94, 60, -102, 78, 33, 22, 53, 91, -80, 122, -11, -85, 72, -21, 63, 32, -54, -54, -82, 54, -46, 44, 15, -93, 65, 29, 38, -88, -80, -17, 120, 3, -21, 112, 119, -89, -106, 53, 102, 115, -112, 41, -81, 69, 37, 77, 120, -92, -94, 57, -43, 76, -92, -64, -7, 34, 62, -64, 57, -99, 61, -80, -48, -41, 10, 68, 73, -71, -123, -14, 15, -75, -37, -84, -24, 41, 6, -74, 106, -90, -74, -72, -116, -6, -89, -1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

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
    msg.setTimeStamp(0.7753476946);
    msg.setSource(59178U);
    msg.setSourceEntity(135U);
    msg.setDestination(40562U);
    msg.setDestinationEntity(11U);
    msg.type = 187U;
    msg.frequency = 725734174U;
    msg.min_range = 8327U;
    msg.max_range = 24847U;
    msg.bits_per_point = 23U;
    msg.scale_factor = 0.728676109396;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.136916819696;
    tmp_msg_0.beam_height = 0.226568970884;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-79, -112, -3, 24, 95, 78, -60, -69, 12, 85, -69, 43, -86, 81, 117, -35, -6, 73, -71, -26, 41, 69, -128, -92, 48, 101, 95, -77, -36, -78, -83, 71, -115, 6, 35, -112, -86, -31, -83, -47, -63, -78, -78, 95, -42, 89, 120, 103, -78, -103, 47, 19, 20, 91, -3, 103, 120, -120, 89, -93, 87, -105, 15, 55, 84, 54, 105, 40, 36, -14, -28, 28, -51, 12, 15, -33, 45, 22, 87, 65, 86, 106, -88, 7, -90, -66, 87, 28, -52, 88, 66, 80, -96, -49, -50, -44, 102, 126, 102, 6, 111, -33, 106, 38, 43, 51, 1, 81, 38, -91, -108, 115, 69, -107, 121, -86, 19, -56, 38, -128, -45, -66, 119, -14, -42, 0, -100, 123, -67, -83, 36, -27, -1, 33, 104, 116, 66, 59, -46, 113, 45, 62, 121, 21, -64, -120, -49, -41, -94, -3, 21, -24, 3, 67, 85, -41, -120, 120, -64, 86, -100, 92, 11, 10, -80, 12, 25, 104, -87, 79, -105, 8, -80, 8};
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
    msg.setTimeStamp(0.572888971935);
    msg.setSource(41270U);
    msg.setSourceEntity(234U);
    msg.setDestination(16366U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.569762075907);
    msg.setSource(38541U);
    msg.setSourceEntity(109U);
    msg.setDestination(15886U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.986035807985);
    msg.setSource(50211U);
    msg.setSourceEntity(146U);
    msg.setDestination(60166U);
    msg.setDestinationEntity(146U);

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
    msg.setTimeStamp(0.154503413641);
    msg.setSource(23953U);
    msg.setSourceEntity(4U);
    msg.setDestination(23295U);
    msg.setDestinationEntity(22U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.848187003123);
    msg.setSource(26672U);
    msg.setSourceEntity(215U);
    msg.setDestination(17857U);
    msg.setDestinationEntity(208U);
    msg.op = 33U;

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
    msg.setTimeStamp(0.73731937765);
    msg.setSource(50391U);
    msg.setSourceEntity(248U);
    msg.setDestination(38449U);
    msg.setDestinationEntity(154U);
    msg.op = 20U;

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
    msg.setTimeStamp(0.678056732212);
    msg.setSource(28359U);
    msg.setSourceEntity(175U);
    msg.setDestination(1487U);
    msg.setDestinationEntity(191U);
    msg.value = 0.438287839407;
    msg.confidence = 0.909175736774;
    msg.opmodes.assign("AUXLZCRIVWQTOORWNOUMBVRDCDIEUWLXFPTHPBXMCOXWEEPAVCWLICKZVXJNHYAISCABTCSDQGRMLRFFVMYNIOZLAEOQTSSYJEHYBFQMQSXJLHMTPGBIPRZXBUWDTUWBDZRPQDZUYTQIGJFAODEIFIPOAUNSLVYDITUSWMLHKLAVFNHKFVPJQKRCFAMBLQYWTRBFYXGJYASGJZVKEWGQOMBJUTRVZKSGNPEEXKGZNPKGKHNKNHSCEUNY");

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
    msg.setTimeStamp(0.793190771578);
    msg.setSource(39993U);
    msg.setSourceEntity(99U);
    msg.setDestination(47147U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0993170574241;
    msg.confidence = 0.23909902707;
    msg.opmodes.assign("VUYHZCTOALNHMW");

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
    msg.setTimeStamp(0.105449772968);
    msg.setSource(25120U);
    msg.setSourceEntity(183U);
    msg.setDestination(27184U);
    msg.setDestinationEntity(62U);
    msg.value = 0.00260449259734;
    msg.confidence = 0.804937308088;
    msg.opmodes.assign("CTITFRGZNVEKRZDUYUDCJNRMCYUBTQDOVHPTEKPWRMJOTAMWMSCKORNHXNPYLQGQOKLIXHH");

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
    msg.setTimeStamp(0.782774385988);
    msg.setSource(40216U);
    msg.setSourceEntity(245U);
    msg.setDestination(51578U);
    msg.setDestinationEntity(116U);
    msg.itow = 91414543U;
    msg.lat = 0.407777524092;
    msg.lon = 0.0720600290278;
    msg.height_ell = 0.406078048688;
    msg.height_sea = 0.205907761925;
    msg.hacc = 0.80618331051;
    msg.vacc = 0.848853544835;
    msg.vel_n = 0.355936448302;
    msg.vel_e = 0.956019016879;
    msg.vel_d = 0.662431317771;
    msg.speed = 0.687980979219;
    msg.gspeed = 0.119133612808;
    msg.heading = 0.541957353306;
    msg.sacc = 0.336638688825;
    msg.cacc = 0.532978628717;

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
    msg.setTimeStamp(0.301362272742);
    msg.setSource(8215U);
    msg.setSourceEntity(254U);
    msg.setDestination(57702U);
    msg.setDestinationEntity(148U);
    msg.itow = 1663383230U;
    msg.lat = 0.696866534237;
    msg.lon = 0.712111627741;
    msg.height_ell = 0.631480302602;
    msg.height_sea = 0.62563458342;
    msg.hacc = 0.295356576651;
    msg.vacc = 0.0745047909652;
    msg.vel_n = 0.675615353458;
    msg.vel_e = 0.555626998039;
    msg.vel_d = 0.724220866075;
    msg.speed = 0.725029312268;
    msg.gspeed = 0.14200273452;
    msg.heading = 0.294041635117;
    msg.sacc = 0.332211386637;
    msg.cacc = 0.953492454206;

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
    msg.setTimeStamp(0.411039414722);
    msg.setSource(64497U);
    msg.setSourceEntity(4U);
    msg.setDestination(9208U);
    msg.setDestinationEntity(31U);
    msg.itow = 2193731695U;
    msg.lat = 0.0729604402178;
    msg.lon = 0.439011266287;
    msg.height_ell = 0.923335751688;
    msg.height_sea = 0.226616783983;
    msg.hacc = 0.0250055639797;
    msg.vacc = 0.983783084581;
    msg.vel_n = 0.285744466366;
    msg.vel_e = 0.518830958165;
    msg.vel_d = 0.285657445883;
    msg.speed = 0.404277401896;
    msg.gspeed = 0.441403285097;
    msg.heading = 0.938800631689;
    msg.sacc = 0.654059069236;
    msg.cacc = 0.498867721455;

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
    msg.setTimeStamp(0.831889338544);
    msg.setSource(31225U);
    msg.setSourceEntity(166U);
    msg.setDestination(18458U);
    msg.setDestinationEntity(145U);
    msg.id = 93U;
    msg.value = 0.394146672615;

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
    msg.setTimeStamp(0.262636188615);
    msg.setSource(55857U);
    msg.setSourceEntity(133U);
    msg.setDestination(21882U);
    msg.setDestinationEntity(79U);
    msg.id = 224U;
    msg.value = 0.675578127361;

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
    msg.setTimeStamp(0.659691420432);
    msg.setSource(8481U);
    msg.setSourceEntity(195U);
    msg.setDestination(41885U);
    msg.setDestinationEntity(7U);
    msg.id = 85U;
    msg.value = 0.273627830428;

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
    msg.setTimeStamp(0.4258773694);
    msg.setSource(5447U);
    msg.setSourceEntity(236U);
    msg.setDestination(57258U);
    msg.setDestinationEntity(35U);
    msg.x = 0.207689768393;
    msg.y = 0.232727384377;
    msg.z = 0.474978752557;
    msg.phi = 0.795931778107;
    msg.theta = 0.920730544363;
    msg.psi = 0.161539471838;

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
    msg.setTimeStamp(0.538378232843);
    msg.setSource(18795U);
    msg.setSourceEntity(165U);
    msg.setDestination(55596U);
    msg.setDestinationEntity(242U);
    msg.x = 0.927469497074;
    msg.y = 0.702077702931;
    msg.z = 0.307671362232;
    msg.phi = 0.393148802643;
    msg.theta = 0.446085019814;
    msg.psi = 0.687281638186;

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
    msg.setTimeStamp(0.602128600939);
    msg.setSource(27241U);
    msg.setSourceEntity(152U);
    msg.setDestination(33298U);
    msg.setDestinationEntity(165U);
    msg.x = 0.241744784275;
    msg.y = 0.156982421434;
    msg.z = 0.812069822654;
    msg.phi = 0.959915872772;
    msg.theta = 0.562584660154;
    msg.psi = 0.156144061567;

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
    msg.setTimeStamp(0.466204153601);
    msg.setSource(4736U);
    msg.setSourceEntity(209U);
    msg.setDestination(20381U);
    msg.setDestinationEntity(231U);
    msg.beam_width = 0.352910128562;
    msg.beam_height = 0.211369654216;

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
    msg.setTimeStamp(0.930822750054);
    msg.setSource(36298U);
    msg.setSourceEntity(228U);
    msg.setDestination(27915U);
    msg.setDestinationEntity(107U);
    msg.beam_width = 0.412104915413;
    msg.beam_height = 0.250259012309;

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
    msg.setTimeStamp(0.785589174605);
    msg.setSource(12191U);
    msg.setSourceEntity(130U);
    msg.setDestination(57854U);
    msg.setDestinationEntity(141U);
    msg.beam_width = 0.12807901391;
    msg.beam_height = 0.189751837908;

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
    msg.setTimeStamp(0.968652912991);
    msg.setSource(25713U);
    msg.setSourceEntity(246U);
    msg.setDestination(13098U);
    msg.setDestinationEntity(5U);
    msg.sane = 244U;

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
    msg.setTimeStamp(0.23852931883);
    msg.setSource(1308U);
    msg.setSourceEntity(199U);
    msg.setDestination(49308U);
    msg.setDestinationEntity(211U);
    msg.sane = 253U;

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
    msg.setTimeStamp(0.558355925837);
    msg.setSource(41314U);
    msg.setSourceEntity(115U);
    msg.setDestination(28U);
    msg.setDestinationEntity(56U);
    msg.sane = 166U;

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
    msg.setTimeStamp(0.0195772252587);
    msg.setSource(31741U);
    msg.setSourceEntity(236U);
    msg.setDestination(39422U);
    msg.setDestinationEntity(140U);
    msg.value = 0.416525712148;

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
    msg.setTimeStamp(0.236236904593);
    msg.setSource(55740U);
    msg.setSourceEntity(73U);
    msg.setDestination(34097U);
    msg.setDestinationEntity(44U);
    msg.value = 0.723839074678;

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
    msg.setTimeStamp(0.2707301502);
    msg.setSource(34425U);
    msg.setSourceEntity(26U);
    msg.setDestination(64813U);
    msg.setDestinationEntity(237U);
    msg.value = 0.142211565342;

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
    msg.setTimeStamp(0.644533802367);
    msg.setSource(13626U);
    msg.setSourceEntity(25U);
    msg.setDestination(23960U);
    msg.setDestinationEntity(241U);
    msg.value = 0.0207875410562;

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
    msg.setTimeStamp(0.206222458423);
    msg.setSource(60795U);
    msg.setSourceEntity(136U);
    msg.setDestination(13201U);
    msg.setDestinationEntity(254U);
    msg.value = 0.460978580913;

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
    msg.setTimeStamp(0.561004720529);
    msg.setSource(27523U);
    msg.setSourceEntity(15U);
    msg.setDestination(234U);
    msg.setDestinationEntity(229U);
    msg.value = 0.0608324100267;

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
    msg.setTimeStamp(0.388961482056);
    msg.setSource(17419U);
    msg.setSourceEntity(134U);
    msg.setDestination(5175U);
    msg.setDestinationEntity(164U);
    msg.value = 0.723475210036;

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
    msg.setTimeStamp(0.160021307091);
    msg.setSource(52429U);
    msg.setSourceEntity(190U);
    msg.setDestination(25118U);
    msg.setDestinationEntity(64U);
    msg.value = 0.331689036424;

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
    msg.setTimeStamp(0.00981008148766);
    msg.setSource(24204U);
    msg.setSourceEntity(213U);
    msg.setDestination(35156U);
    msg.setDestinationEntity(108U);
    msg.value = 0.00668344072772;

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
    msg.setTimeStamp(0.845118403307);
    msg.setSource(34632U);
    msg.setSourceEntity(4U);
    msg.setDestination(37385U);
    msg.setDestinationEntity(163U);
    msg.value = 0.914325902691;

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
    msg.setTimeStamp(0.0997585650915);
    msg.setSource(14543U);
    msg.setSourceEntity(183U);
    msg.setDestination(38615U);
    msg.setDestinationEntity(210U);
    msg.value = 0.629384253149;

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
    msg.setTimeStamp(0.241930054629);
    msg.setSource(25339U);
    msg.setSourceEntity(4U);
    msg.setDestination(18570U);
    msg.setDestinationEntity(207U);
    msg.value = 0.721635264477;

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
    msg.setTimeStamp(0.118779619621);
    msg.setSource(42645U);
    msg.setSourceEntity(41U);
    msg.setDestination(26017U);
    msg.setDestinationEntity(186U);
    msg.value = 0.658480783107;

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
    msg.setTimeStamp(0.334337318927);
    msg.setSource(2831U);
    msg.setSourceEntity(122U);
    msg.setDestination(21474U);
    msg.setDestinationEntity(96U);
    msg.value = 0.470624731774;

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
    msg.setTimeStamp(0.548058223779);
    msg.setSource(8755U);
    msg.setSourceEntity(124U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(111U);
    msg.value = 0.99113450184;

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
    msg.setTimeStamp(0.564819880009);
    msg.setSource(27007U);
    msg.setSourceEntity(88U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(147U);
    msg.value = 0.0158624488552;

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
    msg.setTimeStamp(0.580915050442);
    msg.setSource(7767U);
    msg.setSourceEntity(230U);
    msg.setDestination(6845U);
    msg.setDestinationEntity(120U);
    msg.value = 0.137817271204;

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
    msg.setTimeStamp(0.0663068296706);
    msg.setSource(43220U);
    msg.setSourceEntity(55U);
    msg.setDestination(26589U);
    msg.setDestinationEntity(140U);
    msg.value = 0.152337617167;

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
    msg.setTimeStamp(0.62917966966);
    msg.setSource(54230U);
    msg.setSourceEntity(46U);
    msg.setDestination(38109U);
    msg.setDestinationEntity(225U);
    msg.value = 0.00901247436315;

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
    msg.setTimeStamp(0.00624240601602);
    msg.setSource(13264U);
    msg.setSourceEntity(225U);
    msg.setDestination(21066U);
    msg.setDestinationEntity(86U);
    msg.value = 0.640022405508;

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
    msg.setTimeStamp(0.845328369123);
    msg.setSource(10025U);
    msg.setSourceEntity(149U);
    msg.setDestination(56921U);
    msg.setDestinationEntity(170U);
    msg.value = 0.432049475617;

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
    msg.setTimeStamp(0.364874169934);
    msg.setSource(41274U);
    msg.setSourceEntity(72U);
    msg.setDestination(29603U);
    msg.setDestinationEntity(76U);
    msg.value = 0.992691835753;

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
    msg.setTimeStamp(0.498692419494);
    msg.setSource(51870U);
    msg.setSourceEntity(144U);
    msg.setDestination(41341U);
    msg.setDestinationEntity(99U);
    msg.value = 0.427248058677;

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
    msg.setTimeStamp(0.816967429437);
    msg.setSource(29738U);
    msg.setSourceEntity(141U);
    msg.setDestination(10009U);
    msg.setDestinationEntity(200U);
    msg.value = 0.615438585251;

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
    msg.setTimeStamp(0.51490428165);
    msg.setSource(449U);
    msg.setSourceEntity(125U);
    msg.setDestination(23033U);
    msg.setDestinationEntity(42U);
    msg.validity = 12064U;
    msg.type = 104U;
    msg.tow = 2937149295U;
    msg.base_lat = 0.0186352672077;
    msg.base_lon = 0.113589282149;
    msg.base_height = 0.906375531492;
    msg.n = 0.656841710625;
    msg.e = 0.288027640083;
    msg.d = 0.9261700513;
    msg.v_n = 0.17262096606;
    msg.v_e = 0.856090115088;
    msg.v_d = 0.571381923894;
    msg.satellites = 133U;
    msg.iar_hyp = 20776U;
    msg.iar_ratio = 0.431468093371;

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
    msg.setTimeStamp(0.0638975455241);
    msg.setSource(21388U);
    msg.setSourceEntity(227U);
    msg.setDestination(61741U);
    msg.setDestinationEntity(198U);
    msg.validity = 43390U;
    msg.type = 245U;
    msg.tow = 49703009U;
    msg.base_lat = 0.563234137912;
    msg.base_lon = 0.388024407591;
    msg.base_height = 0.581006956156;
    msg.n = 0.398497724101;
    msg.e = 0.051178188346;
    msg.d = 0.0728648756781;
    msg.v_n = 0.966107239361;
    msg.v_e = 0.751248895447;
    msg.v_d = 0.562584823483;
    msg.satellites = 220U;
    msg.iar_hyp = 61516U;
    msg.iar_ratio = 0.87759342406;

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
    msg.setTimeStamp(0.37068340031);
    msg.setSource(21824U);
    msg.setSourceEntity(31U);
    msg.setDestination(65477U);
    msg.setDestinationEntity(20U);
    msg.validity = 46100U;
    msg.type = 57U;
    msg.tow = 1868516233U;
    msg.base_lat = 0.821033513062;
    msg.base_lon = 0.474620379957;
    msg.base_height = 0.471562952259;
    msg.n = 0.726883200203;
    msg.e = 0.877630578867;
    msg.d = 0.981154961664;
    msg.v_n = 0.922225221286;
    msg.v_e = 0.892580753251;
    msg.v_d = 0.45681068656;
    msg.satellites = 244U;
    msg.iar_hyp = 38172U;
    msg.iar_ratio = 0.297962660782;

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
    msg.setTimeStamp(0.93951747872);
    msg.setSource(52836U);
    msg.setSourceEntity(204U);
    msg.setDestination(40771U);
    msg.setDestinationEntity(236U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.148609259162;
    tmp_msg_0.lon = 0.511112756854;
    tmp_msg_0.height = 0.985763078961;
    tmp_msg_0.x = 0.179827686366;
    tmp_msg_0.y = 0.36994831393;
    tmp_msg_0.z = 0.779260667831;
    tmp_msg_0.phi = 0.657425433012;
    tmp_msg_0.theta = 0.200955164336;
    tmp_msg_0.psi = 0.946578391997;
    tmp_msg_0.u = 0.272246519358;
    tmp_msg_0.v = 0.882809199784;
    tmp_msg_0.w = 0.618854875759;
    tmp_msg_0.vx = 0.341585747025;
    tmp_msg_0.vy = 0.598779947996;
    tmp_msg_0.vz = 0.129436528512;
    tmp_msg_0.p = 0.141436079024;
    tmp_msg_0.q = 0.00432157467031;
    tmp_msg_0.r = 0.53670176327;
    tmp_msg_0.depth = 0.0795890245231;
    tmp_msg_0.alt = 0.483981995168;
    msg.state.set(tmp_msg_0);
    msg.type = 57U;

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
    msg.setTimeStamp(0.297657238687);
    msg.setSource(49872U);
    msg.setSourceEntity(184U);
    msg.setDestination(18438U);
    msg.setDestinationEntity(1U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.188424189194;
    tmp_msg_0.lon = 0.377279641025;
    tmp_msg_0.height = 0.108705529851;
    tmp_msg_0.x = 0.0380353257673;
    tmp_msg_0.y = 0.831775236754;
    tmp_msg_0.z = 0.00642997319322;
    tmp_msg_0.phi = 0.766674975709;
    tmp_msg_0.theta = 0.786796260726;
    tmp_msg_0.psi = 0.626491346911;
    tmp_msg_0.u = 0.394202840085;
    tmp_msg_0.v = 0.742211430653;
    tmp_msg_0.w = 0.0140160284847;
    tmp_msg_0.vx = 0.884655877501;
    tmp_msg_0.vy = 0.642361250137;
    tmp_msg_0.vz = 0.373442115095;
    tmp_msg_0.p = 0.715314667246;
    tmp_msg_0.q = 0.0930102502933;
    tmp_msg_0.r = 0.382332414088;
    tmp_msg_0.depth = 0.454882800398;
    tmp_msg_0.alt = 0.805528712034;
    msg.state.set(tmp_msg_0);
    msg.type = 81U;

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
    msg.setTimeStamp(0.0246838107879);
    msg.setSource(51012U);
    msg.setSourceEntity(204U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.557138308348;
    tmp_msg_0.lon = 0.736640603749;
    tmp_msg_0.height = 0.665094959136;
    tmp_msg_0.x = 0.0348858525262;
    tmp_msg_0.y = 0.389075989797;
    tmp_msg_0.z = 0.602259843989;
    tmp_msg_0.phi = 0.351513921324;
    tmp_msg_0.theta = 0.617621930145;
    tmp_msg_0.psi = 0.788415547636;
    tmp_msg_0.u = 0.780971789614;
    tmp_msg_0.v = 0.556102748653;
    tmp_msg_0.w = 0.629387162862;
    tmp_msg_0.vx = 0.291462447041;
    tmp_msg_0.vy = 0.132909292169;
    tmp_msg_0.vz = 0.26464758912;
    tmp_msg_0.p = 0.534015552378;
    tmp_msg_0.q = 0.363267935627;
    tmp_msg_0.r = 0.73523629946;
    tmp_msg_0.depth = 0.0107269541189;
    tmp_msg_0.alt = 0.97980541626;
    msg.state.set(tmp_msg_0);
    msg.type = 98U;

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
    msg.setTimeStamp(0.597694362679);
    msg.setSource(24935U);
    msg.setSourceEntity(236U);
    msg.setDestination(34821U);
    msg.setDestinationEntity(105U);
    msg.value = 0.971393027032;

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
    msg.setTimeStamp(0.884344427186);
    msg.setSource(21904U);
    msg.setSourceEntity(116U);
    msg.setDestination(32653U);
    msg.setDestinationEntity(252U);
    msg.value = 0.0869235542443;

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
    msg.setTimeStamp(0.921362403362);
    msg.setSource(20627U);
    msg.setSourceEntity(169U);
    msg.setDestination(65420U);
    msg.setDestinationEntity(138U);
    msg.value = 0.368070338494;

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
    msg.setTimeStamp(0.325554696399);
    msg.setSource(49738U);
    msg.setSourceEntity(219U);
    msg.setDestination(3916U);
    msg.setDestinationEntity(175U);
    msg.value = 0.389809257324;

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
    msg.setTimeStamp(0.748746285016);
    msg.setSource(57739U);
    msg.setSourceEntity(192U);
    msg.setDestination(28580U);
    msg.setDestinationEntity(57U);
    msg.value = 0.0712083683539;

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
    msg.setTimeStamp(0.475789890166);
    msg.setSource(38920U);
    msg.setSourceEntity(28U);
    msg.setDestination(53581U);
    msg.setDestinationEntity(151U);
    msg.value = 0.699396497398;

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
    msg.setTimeStamp(0.47802988846);
    msg.setSource(14962U);
    msg.setSourceEntity(97U);
    msg.setDestination(18578U);
    msg.setDestinationEntity(20U);
    msg.value = 0.950810623061;

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
    msg.setTimeStamp(0.611329319292);
    msg.setSource(56310U);
    msg.setSourceEntity(131U);
    msg.setDestination(15389U);
    msg.setDestinationEntity(103U);
    msg.value = 0.00567556192411;

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
    msg.setTimeStamp(0.211028900871);
    msg.setSource(22895U);
    msg.setSourceEntity(45U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(197U);
    msg.value = 0.242413305225;

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
    msg.setTimeStamp(0.24649360579);
    msg.setSource(5090U);
    msg.setSourceEntity(130U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(143U);
    msg.value = 0.494514909214;

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
    msg.setTimeStamp(0.742014406541);
    msg.setSource(26965U);
    msg.setSourceEntity(190U);
    msg.setDestination(5890U);
    msg.setDestinationEntity(67U);
    msg.value = 0.480755821266;

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
    msg.setTimeStamp(0.83424154844);
    msg.setSource(8107U);
    msg.setSourceEntity(47U);
    msg.setDestination(58914U);
    msg.setDestinationEntity(155U);
    msg.value = 0.624064214495;

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
    msg.setTimeStamp(0.976685443244);
    msg.setSource(6096U);
    msg.setSourceEntity(52U);
    msg.setDestination(43274U);
    msg.setDestinationEntity(93U);
    msg.value = 0.886804643159;

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
    msg.setTimeStamp(0.911930195953);
    msg.setSource(26308U);
    msg.setSourceEntity(194U);
    msg.setDestination(61161U);
    msg.setDestinationEntity(85U);
    msg.value = 0.982370754375;

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
    msg.setTimeStamp(0.188555738932);
    msg.setSource(42035U);
    msg.setSourceEntity(237U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(155U);
    msg.value = 0.517272932136;

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
    msg.setTimeStamp(0.53015283902);
    msg.setSource(19465U);
    msg.setSourceEntity(126U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(132U);
    msg.id = 254U;
    msg.zoom = 58U;
    msg.action = 242U;

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
    msg.setTimeStamp(0.515983531503);
    msg.setSource(35958U);
    msg.setSourceEntity(156U);
    msg.setDestination(47582U);
    msg.setDestinationEntity(15U);
    msg.id = 103U;
    msg.zoom = 99U;
    msg.action = 36U;

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
    msg.setTimeStamp(0.450491464173);
    msg.setSource(10534U);
    msg.setSourceEntity(171U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(177U);
    msg.id = 177U;
    msg.zoom = 244U;
    msg.action = 185U;

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
    msg.setTimeStamp(0.615841669218);
    msg.setSource(4321U);
    msg.setSourceEntity(24U);
    msg.setDestination(11844U);
    msg.setDestinationEntity(66U);
    msg.id = 199U;
    msg.value = 0.550724157396;

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
    msg.setTimeStamp(0.707249282999);
    msg.setSource(52476U);
    msg.setSourceEntity(30U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(210U);
    msg.id = 95U;
    msg.value = 0.38033630189;

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
    msg.setTimeStamp(0.868244197252);
    msg.setSource(63907U);
    msg.setSourceEntity(36U);
    msg.setDestination(21330U);
    msg.setDestinationEntity(148U);
    msg.id = 129U;
    msg.value = 0.570402531666;

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
    msg.setTimeStamp(0.758649986359);
    msg.setSource(17516U);
    msg.setSourceEntity(172U);
    msg.setDestination(28106U);
    msg.setDestinationEntity(172U);
    msg.id = 120U;
    msg.value = 0.970415988482;

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
    msg.setTimeStamp(0.0534450617189);
    msg.setSource(60999U);
    msg.setSourceEntity(14U);
    msg.setDestination(39535U);
    msg.setDestinationEntity(154U);
    msg.id = 133U;
    msg.value = 0.546085415513;

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
    msg.setTimeStamp(0.55428362625);
    msg.setSource(35440U);
    msg.setSourceEntity(23U);
    msg.setDestination(34881U);
    msg.setDestinationEntity(132U);
    msg.id = 39U;
    msg.value = 0.475992139345;

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
    msg.setTimeStamp(0.718792339348);
    msg.setSource(18747U);
    msg.setSourceEntity(72U);
    msg.setDestination(6717U);
    msg.setDestinationEntity(138U);
    msg.id = 198U;
    msg.angle = 0.00202811249547;

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
    msg.setTimeStamp(0.558845463715);
    msg.setSource(17813U);
    msg.setSourceEntity(253U);
    msg.setDestination(41212U);
    msg.setDestinationEntity(241U);
    msg.id = 195U;
    msg.angle = 0.249718651536;

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
    msg.setTimeStamp(0.814407890607);
    msg.setSource(56607U);
    msg.setSourceEntity(120U);
    msg.setDestination(57905U);
    msg.setDestinationEntity(145U);
    msg.id = 113U;
    msg.angle = 0.808628710833;

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
    msg.setTimeStamp(0.123600525011);
    msg.setSource(36060U);
    msg.setSourceEntity(54U);
    msg.setDestination(37280U);
    msg.setDestinationEntity(251U);
    msg.op = 200U;
    msg.actions.assign("UIJRSWBVCZOYYTKBDTCQBPGXSDIPDCZL");

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
    msg.setTimeStamp(0.987751836005);
    msg.setSource(11740U);
    msg.setSourceEntity(28U);
    msg.setDestination(27745U);
    msg.setDestinationEntity(132U);
    msg.op = 137U;
    msg.actions.assign("THIVOZROEWJZZLQARUBCBIEXPGEECQKQJZCAYTOLDWYISUNTLNXSTWPVCVNVSLOGCNIOFXSSUGTDDBYBWXCWDDMXPQHRJBSGWHEBHJFPYJNGFOFYMVGHAGGFVJFWHMKSHYBARLTSKKKZIKVECVCGQNOSFEDHHVOWQEQQRHMKFUIRSMYNAPXRNZJZAIXUUVBTLXRYDPKUQJDFTBUEPANYNZCPJIAZPIORWOTXJQDAGAKUFM");

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
    msg.setTimeStamp(0.724936541478);
    msg.setSource(5103U);
    msg.setSourceEntity(213U);
    msg.setDestination(12005U);
    msg.setDestinationEntity(252U);
    msg.op = 166U;
    msg.actions.assign("MHWPMLOJFVFWEPMRVSEUPTMGOMYNTGRLUFQZLWIQORTXLYVIDBRUGABRPJOARICHEOJVLCMZXIAUUHBDQQCZTAHHDURTGLLU");

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
    msg.setTimeStamp(0.795094173641);
    msg.setSource(13166U);
    msg.setSourceEntity(232U);
    msg.setDestination(22074U);
    msg.setDestinationEntity(42U);
    msg.actions.assign("TOCBZEGWRHDUNIXVQTCGIGCMSWRPKVVKGHBQVFBUXWSROQZMBLNXEQHPBPXRIMLLFUDPEYATBLIYSRIXGBKPFERJTAOMPWHXHNEZMBEAQDHKGAFSPKBPTJLWERTQXNYLBYUIKWKALPYQAJSQMZDFHUTUW");

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
    msg.setTimeStamp(0.463069422085);
    msg.setSource(49579U);
    msg.setSourceEntity(252U);
    msg.setDestination(1485U);
    msg.setDestinationEntity(114U);
    msg.actions.assign("XAKWTYPADGPUINJGUSICHGWLYNYPUCLBKFEDPRKKHBQAKHCMCZRBPRVKTUKUJZTHQQWDKNMRSRTJOMFXCAJMYOVSYMLXHZOJBBLDZZPHGKHRVGMOVHNGYHJMMECWDMVVWZIORSVXBLSMEJCTZEQIWFINGWWPSEXDBXVLLEQL");

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
    msg.setTimeStamp(0.637066746503);
    msg.setSource(5325U);
    msg.setSourceEntity(204U);
    msg.setDestination(45788U);
    msg.setDestinationEntity(4U);
    msg.actions.assign("EVMHWXGKYRTRZDBSCUVPNDOXKNGTZUANDOQFAHAOTOQKOFKZQWWPHMHTYBBNJYPCVEEVLRCPEFKPHTPLVANMIGMBUWBJGTZERRLXSCDVGDXLJADJCAZSBJGSXUNQMYICMKOCUHQYQWWMIQPPSCTEYKFFUQLBXEQJSNLEUFHYMAVEFHHZ");

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
    msg.setTimeStamp(0.680625492045);
    msg.setSource(56132U);
    msg.setSourceEntity(224U);
    msg.setDestination(46373U);
    msg.setDestinationEntity(143U);
    msg.button = 44U;
    msg.value = 13U;

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
    msg.setTimeStamp(0.510476486138);
    msg.setSource(23598U);
    msg.setSourceEntity(38U);
    msg.setDestination(27849U);
    msg.setDestinationEntity(137U);
    msg.button = 204U;
    msg.value = 104U;

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
    msg.setTimeStamp(0.957890945178);
    msg.setSource(25691U);
    msg.setSourceEntity(102U);
    msg.setDestination(38307U);
    msg.setDestinationEntity(215U);
    msg.button = 65U;
    msg.value = 141U;

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
    msg.setTimeStamp(0.694057879513);
    msg.setSource(28595U);
    msg.setSourceEntity(140U);
    msg.setDestination(42575U);
    msg.setDestinationEntity(105U);
    msg.op = 235U;
    msg.text.assign("TWOSAZFZSLJGGYUNRZHQIKFRJHQFBXZGAELCPOSPQTLRRZYKNIXWWFRZLUHNDJDWERJLXYXWCIUDDCMNAMKEPBOKWCGJEAYUVOGYQVTIEIKDWKGNUSBUXOHAMXLZGFIM");

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
    msg.setTimeStamp(0.882421205556);
    msg.setSource(35616U);
    msg.setSourceEntity(106U);
    msg.setDestination(13997U);
    msg.setDestinationEntity(125U);
    msg.op = 108U;
    msg.text.assign("BXOQEGAXFOZHVEVWBGIEARWFYJFVXFDSOWSMAIOKKOZNGINXMEXBMCASMRDTNTFUSLMKIVKFRTYACYHXJUHOEKHZYUYSMMTRJWUHDCRECJSJLZYMRWXOFMEPDDHQQGITUCVUXTUIPPNRCWSGAYPYBCLYKDGHPKQDJBGSQSEWKCLUHQJLXVVXIFAFBDICWPBKNNOHZDKJOPRZZZGMUPALZJNVYGWVNQFETRLZBLUTPJTA");

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
    msg.setTimeStamp(0.0288837048112);
    msg.setSource(63978U);
    msg.setSourceEntity(243U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(57U);
    msg.op = 159U;
    msg.text.assign("ORWPGANJRUNVLIOLXHEBFYILOKCPUGHCQAUPKAXGCNJBUDTJSQXECHPQIILYMJYXWQZTMXIBSMLBETEFKYZADTMKVGCWQSOVROUGADFYTTCDWRVYRYNALGAXKJVGWZLDHKIUJ");

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
    msg.setTimeStamp(0.690224122395);
    msg.setSource(10685U);
    msg.setSourceEntity(93U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(165U);
    msg.op = 91U;
    msg.time_remain = 0.86672803165;
    msg.sched_time = 0.413387293656;

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
    msg.setTimeStamp(0.8157528607);
    msg.setSource(40196U);
    msg.setSourceEntity(16U);
    msg.setDestination(3088U);
    msg.setDestinationEntity(97U);
    msg.op = 201U;
    msg.time_remain = 0.975289382873;
    msg.sched_time = 0.85883081113;

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
    msg.setTimeStamp(0.921249346994);
    msg.setSource(52062U);
    msg.setSourceEntity(104U);
    msg.setDestination(16293U);
    msg.setDestinationEntity(58U);
    msg.op = 11U;
    msg.time_remain = 0.812935940986;
    msg.sched_time = 0.40132367499;

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
    msg.setTimeStamp(0.952091269009);
    msg.setSource(39985U);
    msg.setSourceEntity(5U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(181U);
    msg.name.assign("CSXFDELICFNUJUU");
    msg.op = 59U;
    msg.sched_time = 0.96358219762;

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
    msg.setTimeStamp(0.476861858642);
    msg.setSource(54128U);
    msg.setSourceEntity(122U);
    msg.setDestination(44758U);
    msg.setDestinationEntity(248U);
    msg.name.assign("HFPIEBVAJXTNLDOXEXLKFHNTBSYRFPHCXQJSKWPAOAHUQDMJPGRFNFVNAEBBIPMWKDRCDEMAKYEEFOCIMVZXOZGORMRBUBCYZMWK");
    msg.op = 174U;
    msg.sched_time = 0.989847008958;

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
    msg.setTimeStamp(0.474625949847);
    msg.setSource(62027U);
    msg.setSourceEntity(138U);
    msg.setDestination(19190U);
    msg.setDestinationEntity(81U);
    msg.name.assign("WKYUCPDCWHSUEHYNXLAQTFIRXBERZGFWIRYTGCGQAEVDVLIGNHGCIRMVWOPNVWXGSMELTKUYVCSHLDBFGBSBONWKNMJAWFHAKBNYNJTSHEC");
    msg.op = 139U;
    msg.sched_time = 0.558240182209;

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
    msg.setTimeStamp(0.861201429934);
    msg.setSource(9671U);
    msg.setSourceEntity(11U);
    msg.setDestination(47400U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.215770052172);
    msg.setSource(34655U);
    msg.setSourceEntity(7U);
    msg.setDestination(18370U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.755055335676);
    msg.setSource(49979U);
    msg.setSourceEntity(182U);
    msg.setDestination(26573U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.56031379049);
    msg.setSource(12640U);
    msg.setSourceEntity(18U);
    msg.setDestination(34231U);
    msg.setDestinationEntity(188U);
    msg.name.assign("EZEDZYDJGFUPELKIBQYTTLUVTNXOJWLMXIMSYYWTWFBICCXSTRSJKYCIOPHSLYIHVGCOTIMZFSEDGHQ");
    msg.state = 49U;

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
    msg.setTimeStamp(0.455389848079);
    msg.setSource(27827U);
    msg.setSourceEntity(188U);
    msg.setDestination(16112U);
    msg.setDestinationEntity(124U);
    msg.name.assign("GZFRXJSVUTWZXGXAISAWWBIHEGEDZNFOQYXGPDLTRHEMKZCZVKMHMKRRDSCAVRFSHNIAJIEJVMYQNVLXQIMJWLYYWTLPAOBXRDVRCPRNJFLUINAKSZZGQLYOAQGTEORCZTSLPFFAZECGBSMUNXWDJPMGJXAVOOMOVQFUFPMTTDXKUPBKPEQBOWDFLPTNEWKBQSURDGKWBGYOFSHBIYCLUJHBAIULIQKJDHYNWCOEHE");
    msg.state = 232U;

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
    msg.setTimeStamp(0.529020027778);
    msg.setSource(48791U);
    msg.setSourceEntity(95U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(205U);
    msg.name.assign("KLLTEOCFQADIJQTSWWIHF");
    msg.state = 239U;

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
    msg.setTimeStamp(0.446185924021);
    msg.setSource(61887U);
    msg.setSourceEntity(60U);
    msg.setDestination(43575U);
    msg.setDestinationEntity(64U);
    msg.name.assign("LENNJACTVJBDTIGHATFLMZZMDAGIQAGOBWBIRQDNRVYDNOMYFPXESHFVDYELKMPYGOTICEGRCKUVCWQHJVIBWPIEWIWESCLUBZNEVVKSTRDXHJHTHAYQFNXYYZKHY");
    msg.value = 43U;

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
    msg.setTimeStamp(0.983213267106);
    msg.setSource(18090U);
    msg.setSourceEntity(58U);
    msg.setDestination(58676U);
    msg.setDestinationEntity(98U);
    msg.name.assign("LODZWTSONVXFUZPCWFMXFWFZRPEBPEUMVNLNRUAQYADSIUQLCTBEQPZYDJFJZFHLBLJTQEJNUANMWSXFKWATRNOVSBAYVUSSVOLPRGOGCKGYADXCB");
    msg.value = 219U;

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
    msg.setTimeStamp(0.840584272968);
    msg.setSource(54319U);
    msg.setSourceEntity(7U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(236U);
    msg.name.assign("RLRKLCIPDWUEAKKPEVYZYXRQGFSNMSYQRLKIJTR");
    msg.value = 53U;

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
    msg.setTimeStamp(0.554961561245);
    msg.setSource(62816U);
    msg.setSourceEntity(206U);
    msg.setDestination(21432U);
    msg.setDestinationEntity(22U);
    msg.name.assign("TCAZUOPIEMVCLTRUCJBAUCXMJXNW");

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
    msg.setTimeStamp(0.456809368772);
    msg.setSource(65414U);
    msg.setSourceEntity(13U);
    msg.setDestination(61690U);
    msg.setDestinationEntity(242U);
    msg.name.assign("KXNLASFXXDUWKSWCWEIEZHAUBBFNKEWVGDTUTZGA");

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
    msg.setTimeStamp(0.643131177715);
    msg.setSource(11130U);
    msg.setSourceEntity(186U);
    msg.setDestination(50288U);
    msg.setDestinationEntity(9U);
    msg.name.assign("NTTLFRWMXWDHEOKHNBJZCYVDBTRXENLOCVYUUPMLSQVETIZRPUKMAEKRWSSGIYCYBYGAURSLXAKIHJLXCCPJICAPGTZJAXHYLWIFEISFAADBDMHBNREFPNINMNVZKUOOWGDPMUBDMAKQGBDRBI");

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
    msg.setTimeStamp(0.0495537719947);
    msg.setSource(37307U);
    msg.setSourceEntity(89U);
    msg.setDestination(55902U);
    msg.setDestinationEntity(48U);
    msg.name.assign("LQPGJGCYUZEAMQHFTILNKPIMZYHVLMQDPTBCGIMKAUJKKOWEXCBXLOAXBYGLEDSSPVLWSBNNTKIMETWERWWYFUGFAWGXDXYTOKAZAWZHPGVVASUZBQDSJQJSRMTMRNAVEHNDFCLMRVHCQVXHHIYRUCECA");
    msg.value = 131U;

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
    msg.setTimeStamp(0.311349052592);
    msg.setSource(27108U);
    msg.setSourceEntity(248U);
    msg.setDestination(1211U);
    msg.setDestinationEntity(199U);
    msg.name.assign("PFMUGJCTVFXCJWYXBMLLNJQJPUZ");
    msg.value = 5U;

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
    msg.setTimeStamp(0.0862153606086);
    msg.setSource(47610U);
    msg.setSourceEntity(214U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(71U);
    msg.name.assign("DTIXMBPQSUSH");
    msg.value = 136U;

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
    msg.setTimeStamp(0.118442434175);
    msg.setSource(60825U);
    msg.setSourceEntity(87U);
    msg.setDestination(36811U);
    msg.setDestinationEntity(127U);
    msg.id = 6U;
    msg.period = 39793137U;
    msg.duty_cycle = 3154997622U;

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
    msg.setTimeStamp(0.54620048655);
    msg.setSource(25765U);
    msg.setSourceEntity(20U);
    msg.setDestination(54782U);
    msg.setDestinationEntity(193U);
    msg.id = 127U;
    msg.period = 1058045250U;
    msg.duty_cycle = 2443638730U;

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
    msg.setTimeStamp(0.414412091753);
    msg.setSource(410U);
    msg.setSourceEntity(46U);
    msg.setDestination(43447U);
    msg.setDestinationEntity(205U);
    msg.id = 42U;
    msg.period = 885340508U;
    msg.duty_cycle = 3215734604U;

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
    msg.setTimeStamp(0.242230235578);
    msg.setSource(61809U);
    msg.setSourceEntity(2U);
    msg.setDestination(50625U);
    msg.setDestinationEntity(137U);
    msg.id = 206U;
    msg.period = 2077333583U;
    msg.duty_cycle = 3362865681U;

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
    msg.setTimeStamp(0.976614779682);
    msg.setSource(21285U);
    msg.setSourceEntity(215U);
    msg.setDestination(14472U);
    msg.setDestinationEntity(70U);
    msg.id = 1U;
    msg.period = 330686077U;
    msg.duty_cycle = 2463383308U;

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
    msg.setTimeStamp(0.845471235586);
    msg.setSource(17419U);
    msg.setSourceEntity(20U);
    msg.setDestination(23336U);
    msg.setDestinationEntity(19U);
    msg.id = 80U;
    msg.period = 4120617937U;
    msg.duty_cycle = 2200818387U;

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
    msg.setTimeStamp(0.935713548514);
    msg.setSource(45810U);
    msg.setSourceEntity(162U);
    msg.setDestination(49813U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.408369287733;
    msg.lon = 0.0921314975793;
    msg.height = 0.519657642431;
    msg.x = 0.462520340764;
    msg.y = 0.395875195177;
    msg.z = 0.546656049438;
    msg.phi = 0.220765617344;
    msg.theta = 0.647310718431;
    msg.psi = 0.0837619124816;
    msg.u = 0.703862207931;
    msg.v = 0.0624787226662;
    msg.w = 0.900280451925;
    msg.vx = 0.874001932571;
    msg.vy = 0.975824105061;
    msg.vz = 0.830257298348;
    msg.p = 0.907920430111;
    msg.q = 0.265044223126;
    msg.r = 0.998227195894;
    msg.depth = 0.0686537042805;
    msg.alt = 0.265499757117;

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
    msg.setTimeStamp(0.858417258196);
    msg.setSource(869U);
    msg.setSourceEntity(176U);
    msg.setDestination(31273U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.223180978321;
    msg.lon = 0.0880625390089;
    msg.height = 0.197642645992;
    msg.x = 0.350481028123;
    msg.y = 0.152982446821;
    msg.z = 0.366441646517;
    msg.phi = 0.197882321449;
    msg.theta = 0.496697157541;
    msg.psi = 0.331793703062;
    msg.u = 0.116751039172;
    msg.v = 0.0330779862802;
    msg.w = 0.436792615589;
    msg.vx = 0.876395737909;
    msg.vy = 0.432483613323;
    msg.vz = 0.0232964945397;
    msg.p = 0.981127308716;
    msg.q = 0.495480195051;
    msg.r = 0.398081985844;
    msg.depth = 0.0245153152749;
    msg.alt = 0.935788891432;

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
    msg.setTimeStamp(0.334578539438);
    msg.setSource(12364U);
    msg.setSourceEntity(27U);
    msg.setDestination(23269U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.157344257752;
    msg.lon = 0.86561615469;
    msg.height = 0.769817151035;
    msg.x = 0.130035330356;
    msg.y = 0.71616373891;
    msg.z = 0.404074109535;
    msg.phi = 0.112508059374;
    msg.theta = 0.944448065571;
    msg.psi = 0.593482437143;
    msg.u = 0.88456966258;
    msg.v = 0.33422081663;
    msg.w = 0.675544270715;
    msg.vx = 0.907931357874;
    msg.vy = 0.0773550598156;
    msg.vz = 0.331495170582;
    msg.p = 0.288453170275;
    msg.q = 0.324954420242;
    msg.r = 0.629368764981;
    msg.depth = 0.208571362291;
    msg.alt = 0.500942520971;

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
    msg.setTimeStamp(0.932455251562);
    msg.setSource(59171U);
    msg.setSourceEntity(178U);
    msg.setDestination(4884U);
    msg.setDestinationEntity(180U);
    msg.x = 0.554694415338;
    msg.y = 0.0186517292456;
    msg.z = 0.914507503236;

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
    msg.setTimeStamp(0.767905082831);
    msg.setSource(5662U);
    msg.setSourceEntity(43U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(170U);
    msg.x = 0.861091296596;
    msg.y = 0.799278041577;
    msg.z = 0.354099566122;

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
    msg.setTimeStamp(0.329931707906);
    msg.setSource(13435U);
    msg.setSourceEntity(229U);
    msg.setDestination(33343U);
    msg.setDestinationEntity(197U);
    msg.x = 0.802772354496;
    msg.y = 0.524278299107;
    msg.z = 0.991624225222;

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
    msg.setTimeStamp(0.741887570583);
    msg.setSource(15378U);
    msg.setSourceEntity(250U);
    msg.setDestination(14314U);
    msg.setDestinationEntity(83U);
    msg.value = 0.137749927174;

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
    msg.setTimeStamp(0.350185851927);
    msg.setSource(11775U);
    msg.setSourceEntity(216U);
    msg.setDestination(10827U);
    msg.setDestinationEntity(131U);
    msg.value = 0.36670726983;

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
    msg.setTimeStamp(0.0456112600972);
    msg.setSource(14113U);
    msg.setSourceEntity(251U);
    msg.setDestination(23930U);
    msg.setDestinationEntity(35U);
    msg.value = 0.938152631208;

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
    msg.setTimeStamp(0.173252765474);
    msg.setSource(10711U);
    msg.setSourceEntity(110U);
    msg.setDestination(1199U);
    msg.setDestinationEntity(239U);
    msg.value = 0.0283072478461;

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
    msg.setTimeStamp(0.845761982506);
    msg.setSource(50335U);
    msg.setSourceEntity(151U);
    msg.setDestination(13609U);
    msg.setDestinationEntity(198U);
    msg.value = 0.967189673351;

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
    msg.setTimeStamp(0.572274954824);
    msg.setSource(41558U);
    msg.setSourceEntity(187U);
    msg.setDestination(35953U);
    msg.setDestinationEntity(49U);
    msg.value = 0.263474177796;

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
    msg.setTimeStamp(0.470226211957);
    msg.setSource(15356U);
    msg.setSourceEntity(110U);
    msg.setDestination(48449U);
    msg.setDestinationEntity(225U);
    msg.x = 0.711672602172;
    msg.y = 0.627395595906;
    msg.z = 0.8131949871;
    msg.phi = 0.672077030083;
    msg.theta = 0.0416452205501;
    msg.psi = 0.950137617081;
    msg.p = 0.924634809016;
    msg.q = 0.528844856974;
    msg.r = 0.817703570914;
    msg.u = 0.526593527694;
    msg.v = 0.149533396815;
    msg.w = 0.0723448701352;
    msg.bias_psi = 0.542832759881;
    msg.bias_r = 0.697153043696;

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
    msg.setTimeStamp(0.940707115389);
    msg.setSource(56559U);
    msg.setSourceEntity(41U);
    msg.setDestination(1915U);
    msg.setDestinationEntity(3U);
    msg.x = 0.677721585951;
    msg.y = 0.0969235452315;
    msg.z = 0.352187756316;
    msg.phi = 0.0798020427341;
    msg.theta = 0.953267565427;
    msg.psi = 0.460483756015;
    msg.p = 0.182482686815;
    msg.q = 0.449709054337;
    msg.r = 0.0252466516657;
    msg.u = 0.627911415133;
    msg.v = 0.914145073995;
    msg.w = 0.881553967407;
    msg.bias_psi = 0.456577939594;
    msg.bias_r = 0.546874395848;

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
    msg.setTimeStamp(0.411978040437);
    msg.setSource(56557U);
    msg.setSourceEntity(239U);
    msg.setDestination(14593U);
    msg.setDestinationEntity(234U);
    msg.x = 0.408149066353;
    msg.y = 0.943807704268;
    msg.z = 0.812690455725;
    msg.phi = 0.70717044071;
    msg.theta = 0.665468286064;
    msg.psi = 0.15388837061;
    msg.p = 0.136558750528;
    msg.q = 0.220999814889;
    msg.r = 0.30354954758;
    msg.u = 0.864791464051;
    msg.v = 0.46690224117;
    msg.w = 0.915537140809;
    msg.bias_psi = 0.797248516317;
    msg.bias_r = 0.253719746257;

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
    msg.setTimeStamp(0.654711826815);
    msg.setSource(49685U);
    msg.setSourceEntity(224U);
    msg.setDestination(55824U);
    msg.setDestinationEntity(205U);
    msg.bias_psi = 0.830659080742;
    msg.bias_r = 0.858462436411;
    msg.cog = 0.864875621288;
    msg.cyaw = 0.659651435832;
    msg.lbl_rej_level = 0.0303477788022;
    msg.gps_rej_level = 0.969805621007;
    msg.custom_x = 0.625168888453;
    msg.custom_y = 0.181288829855;
    msg.custom_z = 0.822495721892;

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
    msg.setTimeStamp(0.579954892206);
    msg.setSource(63657U);
    msg.setSourceEntity(232U);
    msg.setDestination(43156U);
    msg.setDestinationEntity(83U);
    msg.bias_psi = 0.251477878871;
    msg.bias_r = 0.907234735446;
    msg.cog = 0.110385972339;
    msg.cyaw = 0.697246885737;
    msg.lbl_rej_level = 0.219087990741;
    msg.gps_rej_level = 0.208706610135;
    msg.custom_x = 0.544662266694;
    msg.custom_y = 0.699936411678;
    msg.custom_z = 0.679803615727;

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
    msg.setTimeStamp(0.271660026128);
    msg.setSource(54102U);
    msg.setSourceEntity(213U);
    msg.setDestination(29271U);
    msg.setDestinationEntity(194U);
    msg.bias_psi = 1.94339120897e-05;
    msg.bias_r = 0.445594258424;
    msg.cog = 0.930568466757;
    msg.cyaw = 0.311696418085;
    msg.lbl_rej_level = 0.320588867691;
    msg.gps_rej_level = 0.409394196092;
    msg.custom_x = 0.987994251042;
    msg.custom_y = 0.783321982952;
    msg.custom_z = 0.543842415515;

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
    msg.setTimeStamp(0.414113353682);
    msg.setSource(23339U);
    msg.setSourceEntity(207U);
    msg.setDestination(19932U);
    msg.setDestinationEntity(145U);
    msg.utc_time = 0.707688511716;
    msg.reason = 232U;

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
    msg.setTimeStamp(0.830548507497);
    msg.setSource(6894U);
    msg.setSourceEntity(134U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(246U);
    msg.utc_time = 0.936453484364;
    msg.reason = 252U;

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
    msg.setTimeStamp(0.844632674853);
    msg.setSource(34336U);
    msg.setSourceEntity(244U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(41U);
    msg.utc_time = 0.610175765027;
    msg.reason = 163U;

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
    msg.setTimeStamp(0.320958398737);
    msg.setSource(19479U);
    msg.setSourceEntity(136U);
    msg.setDestination(37620U);
    msg.setDestinationEntity(208U);
    msg.id = 119U;
    msg.range = 0.646030806809;
    msg.acceptance = 102U;

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
    msg.setTimeStamp(0.683742144678);
    msg.setSource(32247U);
    msg.setSourceEntity(124U);
    msg.setDestination(53367U);
    msg.setDestinationEntity(175U);
    msg.id = 58U;
    msg.range = 0.860681556945;
    msg.acceptance = 69U;

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
    msg.setTimeStamp(0.36648837405);
    msg.setSource(37569U);
    msg.setSourceEntity(183U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(232U);
    msg.id = 87U;
    msg.range = 0.689069704162;
    msg.acceptance = 70U;

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
    msg.setTimeStamp(0.525518994137);
    msg.setSource(32833U);
    msg.setSourceEntity(144U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(211U);
    msg.type = 178U;
    msg.reason = 185U;
    msg.value = 0.193238342882;
    msg.timestep = 0.36083802576;

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
    msg.setTimeStamp(0.339456252193);
    msg.setSource(24152U);
    msg.setSourceEntity(190U);
    msg.setDestination(30079U);
    msg.setDestinationEntity(235U);
    msg.type = 199U;
    msg.reason = 15U;
    msg.value = 0.571184506193;
    msg.timestep = 0.859331566657;

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
    msg.setTimeStamp(0.0458163999564);
    msg.setSource(59680U);
    msg.setSourceEntity(93U);
    msg.setDestination(23500U);
    msg.setDestinationEntity(221U);
    msg.type = 96U;
    msg.reason = 251U;
    msg.value = 0.50486572261;
    msg.timestep = 0.879570999525;

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
    msg.setTimeStamp(0.0320004245948);
    msg.setSource(64523U);
    msg.setSourceEntity(33U);
    msg.setDestination(65283U);
    msg.setDestinationEntity(26U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PPWUYLTVIMJBAJFFVIUARJGFEHZXTNIJTAQTNXATEXHBSLPYTWQCMBDEVQPBXTDVKMJFQLNHPXGAECQZECUYSAPCDGMMKYWDCZDZRYYZYMCSQICBVILEPRGKJIQSTDXKGNIRPRSZBAQGVWEAUPWJMFWCEMHWNTZCDMIYLDSUNZFBSOJHKLOLFSDDOGL");
    tmp_msg_0.lat = 0.447595098172;
    tmp_msg_0.lon = 0.00496642660282;
    tmp_msg_0.depth = 0.690690962974;
    tmp_msg_0.query_channel = 64U;
    tmp_msg_0.reply_channel = 107U;
    tmp_msg_0.transponder_delay = 202U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.842130602287;
    msg.y = 0.05339837422;
    msg.var_x = 0.09509899907;
    msg.var_y = 0.805938597088;
    msg.distance = 0.804514126254;

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
    msg.setTimeStamp(0.196206000012);
    msg.setSource(3765U);
    msg.setSourceEntity(124U);
    msg.setDestination(22483U);
    msg.setDestinationEntity(234U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KHMEFSTAHBPXXGSXTNRYCGKPWLALGQVYKFRBJJQNP");
    tmp_msg_0.lat = 0.177698492098;
    tmp_msg_0.lon = 0.87882305153;
    tmp_msg_0.depth = 0.167580994131;
    tmp_msg_0.query_channel = 212U;
    tmp_msg_0.reply_channel = 213U;
    tmp_msg_0.transponder_delay = 201U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.378894615841;
    msg.y = 0.660100821017;
    msg.var_x = 0.268991979021;
    msg.var_y = 0.0254109636357;
    msg.distance = 0.867047932312;

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
    msg.setTimeStamp(0.00736537362133);
    msg.setSource(50616U);
    msg.setSourceEntity(223U);
    msg.setDestination(14809U);
    msg.setDestinationEntity(187U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YPEOUSRBZLPYUOVOSVYHNUHDZIEGFPGWAOYUIKAHMILDMISUT");
    tmp_msg_0.lat = 0.370878039475;
    tmp_msg_0.lon = 0.977237853606;
    tmp_msg_0.depth = 0.899321492033;
    tmp_msg_0.query_channel = 103U;
    tmp_msg_0.reply_channel = 203U;
    tmp_msg_0.transponder_delay = 245U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.989700066074;
    msg.y = 0.86334168613;
    msg.var_x = 0.564236943378;
    msg.var_y = 0.255970739177;
    msg.distance = 0.568526649293;

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
    msg.setTimeStamp(0.999210159798);
    msg.setSource(4306U);
    msg.setSourceEntity(48U);
    msg.setDestination(43856U);
    msg.setDestinationEntity(146U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.40338136333);
    msg.setSource(50304U);
    msg.setSourceEntity(188U);
    msg.setDestination(2736U);
    msg.setDestinationEntity(248U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.00917604630147);
    msg.setSource(21016U);
    msg.setSourceEntity(219U);
    msg.setDestination(47348U);
    msg.setDestinationEntity(211U);
    msg.state = 230U;

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
    msg.setTimeStamp(0.338537458301);
    msg.setSource(54227U);
    msg.setSourceEntity(1U);
    msg.setDestination(19400U);
    msg.setDestinationEntity(77U);
    msg.x = 0.386928850502;
    msg.y = 0.0487510865074;
    msg.z = 0.568656440081;

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
    msg.setTimeStamp(0.656922957562);
    msg.setSource(368U);
    msg.setSourceEntity(215U);
    msg.setDestination(14548U);
    msg.setDestinationEntity(19U);
    msg.x = 0.0268519195503;
    msg.y = 0.550838168591;
    msg.z = 0.167643757984;

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
    msg.setTimeStamp(0.145580400484);
    msg.setSource(42313U);
    msg.setSourceEntity(240U);
    msg.setDestination(40286U);
    msg.setDestinationEntity(178U);
    msg.x = 0.0175068723668;
    msg.y = 0.158623769604;
    msg.z = 0.275192289304;

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
    msg.setTimeStamp(0.684268633442);
    msg.setSource(3695U);
    msg.setSourceEntity(92U);
    msg.setDestination(27913U);
    msg.setDestinationEntity(185U);
    msg.va = 0.174842468692;
    msg.aoa = 0.89660421904;
    msg.ssa = 0.716862604223;

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
    msg.setTimeStamp(0.544740623454);
    msg.setSource(57919U);
    msg.setSourceEntity(90U);
    msg.setDestination(15178U);
    msg.setDestinationEntity(17U);
    msg.va = 0.144157510699;
    msg.aoa = 0.992873780436;
    msg.ssa = 0.065696507924;

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
    msg.setTimeStamp(0.364916964631);
    msg.setSource(36151U);
    msg.setSourceEntity(173U);
    msg.setDestination(26565U);
    msg.setDestinationEntity(87U);
    msg.va = 0.858534536182;
    msg.aoa = 0.204596592245;
    msg.ssa = 0.693593068711;

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
    msg.setTimeStamp(0.499166307568);
    msg.setSource(59716U);
    msg.setSourceEntity(212U);
    msg.setDestination(47302U);
    msg.setDestinationEntity(65U);
    msg.value = 0.586433638077;

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
    msg.setTimeStamp(0.343791076769);
    msg.setSource(47883U);
    msg.setSourceEntity(30U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(213U);
    msg.value = 0.69028491165;

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
    msg.setTimeStamp(0.322058538709);
    msg.setSource(43210U);
    msg.setSourceEntity(50U);
    msg.setDestination(62207U);
    msg.setDestinationEntity(57U);
    msg.value = 0.789710288501;

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
    msg.setTimeStamp(0.902571293915);
    msg.setSource(34583U);
    msg.setSourceEntity(60U);
    msg.setDestination(8655U);
    msg.setDestinationEntity(245U);
    msg.value = 0.966983741905;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.94405984285);
    msg.setSource(44185U);
    msg.setSourceEntity(23U);
    msg.setDestination(18920U);
    msg.setDestinationEntity(194U);
    msg.value = 0.660316369333;
    msg.z_units = 80U;

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
    msg.setTimeStamp(0.364268771305);
    msg.setSource(1405U);
    msg.setSourceEntity(104U);
    msg.setDestination(14741U);
    msg.setDestinationEntity(136U);
    msg.value = 0.490471836111;
    msg.z_units = 91U;

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
    msg.setTimeStamp(0.14999230359);
    msg.setSource(18438U);
    msg.setSourceEntity(206U);
    msg.setDestination(25462U);
    msg.setDestinationEntity(2U);
    msg.value = 0.791197308579;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.191938752367);
    msg.setSource(3936U);
    msg.setSourceEntity(46U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(195U);
    msg.value = 0.496058115668;
    msg.speed_units = 239U;

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
    msg.setTimeStamp(0.727176867418);
    msg.setSource(55481U);
    msg.setSourceEntity(103U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(232U);
    msg.value = 0.844175762006;
    msg.speed_units = 123U;

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
    msg.setTimeStamp(0.9927215246);
    msg.setSource(6668U);
    msg.setSourceEntity(102U);
    msg.setDestination(40670U);
    msg.setDestinationEntity(86U);
    msg.value = 0.745464610645;

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
    msg.setTimeStamp(0.906087127143);
    msg.setSource(5919U);
    msg.setSourceEntity(1U);
    msg.setDestination(38031U);
    msg.setDestinationEntity(26U);
    msg.value = 0.0267539277065;

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
    msg.setTimeStamp(0.177772723256);
    msg.setSource(2321U);
    msg.setSourceEntity(40U);
    msg.setDestination(42378U);
    msg.setDestinationEntity(232U);
    msg.value = 0.873204630348;

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
    msg.setTimeStamp(0.773459160146);
    msg.setSource(4799U);
    msg.setSourceEntity(180U);
    msg.setDestination(34813U);
    msg.setDestinationEntity(130U);
    msg.value = 0.886672984641;

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
    msg.setTimeStamp(0.98025242709);
    msg.setSource(58529U);
    msg.setSourceEntity(248U);
    msg.setDestination(32022U);
    msg.setDestinationEntity(174U);
    msg.value = 0.48477760898;

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
    msg.setTimeStamp(0.00140156441077);
    msg.setSource(50977U);
    msg.setSourceEntity(94U);
    msg.setDestination(25968U);
    msg.setDestinationEntity(194U);
    msg.value = 0.60691273215;

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
    msg.setTimeStamp(0.992144102813);
    msg.setSource(5588U);
    msg.setSourceEntity(28U);
    msg.setDestination(30660U);
    msg.setDestinationEntity(87U);
    msg.value = 0.875292254996;

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
    msg.setTimeStamp(0.995912856239);
    msg.setSource(54993U);
    msg.setSourceEntity(97U);
    msg.setDestination(18823U);
    msg.setDestinationEntity(58U);
    msg.value = 0.227423412592;

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
    msg.setTimeStamp(0.0226044618317);
    msg.setSource(5969U);
    msg.setSourceEntity(231U);
    msg.setDestination(34611U);
    msg.setDestinationEntity(161U);
    msg.value = 0.279895441612;

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
    msg.setTimeStamp(0.521741232071);
    msg.setSource(28482U);
    msg.setSourceEntity(78U);
    msg.setDestination(53673U);
    msg.setDestinationEntity(177U);
    msg.path_ref = 3213577643U;
    msg.start_lat = 0.28216453742;
    msg.start_lon = 0.936377520044;
    msg.start_z = 0.0388738427986;
    msg.start_z_units = 190U;
    msg.end_lat = 0.169951305693;
    msg.end_lon = 0.248659048081;
    msg.end_z = 0.185195894738;
    msg.end_z_units = 35U;
    msg.speed = 0.762629948426;
    msg.speed_units = 73U;
    msg.lradius = 0.672452310601;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.44942026325);
    msg.setSource(58357U);
    msg.setSourceEntity(72U);
    msg.setDestination(53178U);
    msg.setDestinationEntity(171U);
    msg.path_ref = 1914585387U;
    msg.start_lat = 0.498926956191;
    msg.start_lon = 0.712360568319;
    msg.start_z = 0.678788677199;
    msg.start_z_units = 203U;
    msg.end_lat = 0.827615136144;
    msg.end_lon = 0.7117986064;
    msg.end_z = 0.920790354392;
    msg.end_z_units = 148U;
    msg.speed = 0.976838823841;
    msg.speed_units = 144U;
    msg.lradius = 0.732856587428;
    msg.flags = 191U;

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
    msg.setTimeStamp(0.559263422953);
    msg.setSource(56276U);
    msg.setSourceEntity(211U);
    msg.setDestination(44036U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 3083226831U;
    msg.start_lat = 0.546681725072;
    msg.start_lon = 0.970842003545;
    msg.start_z = 0.665613826438;
    msg.start_z_units = 108U;
    msg.end_lat = 0.297572235293;
    msg.end_lon = 0.248160995646;
    msg.end_z = 0.561130082541;
    msg.end_z_units = 66U;
    msg.speed = 0.902785282132;
    msg.speed_units = 15U;
    msg.lradius = 0.648097525902;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.158976349872);
    msg.setSource(44549U);
    msg.setSourceEntity(53U);
    msg.setDestination(11979U);
    msg.setDestinationEntity(1U);
    msg.x = 0.606135228276;
    msg.y = 0.880027860337;
    msg.z = 0.146419957828;
    msg.k = 0.229906485297;
    msg.m = 0.96168115423;
    msg.n = 0.233328656405;
    msg.flags = 80U;

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
    msg.setTimeStamp(0.595114587519);
    msg.setSource(61032U);
    msg.setSourceEntity(22U);
    msg.setDestination(12162U);
    msg.setDestinationEntity(175U);
    msg.x = 0.333380244555;
    msg.y = 0.261711139614;
    msg.z = 0.810806611204;
    msg.k = 0.061014352551;
    msg.m = 0.164068823921;
    msg.n = 0.492980096126;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.0242830052421);
    msg.setSource(45739U);
    msg.setSourceEntity(43U);
    msg.setDestination(42580U);
    msg.setDestinationEntity(232U);
    msg.x = 0.206455457248;
    msg.y = 0.725557855341;
    msg.z = 0.969576095173;
    msg.k = 0.701644964718;
    msg.m = 0.824924286759;
    msg.n = 0.115541452985;
    msg.flags = 117U;

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
    msg.setTimeStamp(0.135154800872);
    msg.setSource(55942U);
    msg.setSourceEntity(128U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(217U);
    msg.value = 0.948758703998;

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
    msg.setTimeStamp(0.689385380094);
    msg.setSource(14224U);
    msg.setSourceEntity(100U);
    msg.setDestination(45061U);
    msg.setDestinationEntity(120U);
    msg.value = 0.383142388467;

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
    msg.setTimeStamp(0.944567892752);
    msg.setSource(35822U);
    msg.setSourceEntity(9U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(49U);
    msg.value = 0.740304449771;

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
    msg.setTimeStamp(0.0262620325232);
    msg.setSource(2242U);
    msg.setSourceEntity(98U);
    msg.setDestination(13397U);
    msg.setDestinationEntity(46U);
    msg.u = 0.834487297019;
    msg.v = 0.0782315777424;
    msg.w = 0.698006192458;
    msg.p = 0.441771543214;
    msg.q = 0.31344941376;
    msg.r = 0.871823270546;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.0489870714288);
    msg.setSource(51384U);
    msg.setSourceEntity(70U);
    msg.setDestination(15979U);
    msg.setDestinationEntity(145U);
    msg.u = 0.203214812075;
    msg.v = 0.753890386182;
    msg.w = 0.827464431004;
    msg.p = 0.610545157222;
    msg.q = 0.289366493959;
    msg.r = 0.126628600684;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.921288368424);
    msg.setSource(63037U);
    msg.setSourceEntity(219U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(100U);
    msg.u = 0.736137556429;
    msg.v = 0.241260745006;
    msg.w = 0.460568089355;
    msg.p = 0.269106525104;
    msg.q = 0.334726941935;
    msg.r = 0.820053557547;
    msg.flags = 24U;

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
    msg.setTimeStamp(0.353602995698);
    msg.setSource(5181U);
    msg.setSourceEntity(123U);
    msg.setDestination(57181U);
    msg.setDestinationEntity(252U);
    msg.path_ref = 4226147200U;
    msg.start_lat = 0.572745654211;
    msg.start_lon = 0.440792894693;
    msg.start_z = 0.964657709795;
    msg.start_z_units = 244U;
    msg.end_lat = 0.0504359280363;
    msg.end_lon = 0.621959519231;
    msg.end_z = 0.669107997156;
    msg.end_z_units = 148U;
    msg.lradius = 0.650569094044;
    msg.flags = 187U;
    msg.x = 0.310229222729;
    msg.y = 0.699312092619;
    msg.z = 0.226052908259;
    msg.vx = 0.0746399847132;
    msg.vy = 0.860399675418;
    msg.vz = 0.699037431924;
    msg.course_error = 0.258387934656;
    msg.eta = 19488U;

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
    msg.setTimeStamp(0.812303026877);
    msg.setSource(16120U);
    msg.setSourceEntity(181U);
    msg.setDestination(48464U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 1980355651U;
    msg.start_lat = 0.277714962936;
    msg.start_lon = 0.441781592175;
    msg.start_z = 0.214083625484;
    msg.start_z_units = 135U;
    msg.end_lat = 0.802950589492;
    msg.end_lon = 0.952723560434;
    msg.end_z = 0.994514044803;
    msg.end_z_units = 66U;
    msg.lradius = 0.776118481489;
    msg.flags = 52U;
    msg.x = 0.114056690517;
    msg.y = 0.847024931521;
    msg.z = 0.310887134521;
    msg.vx = 0.986137485604;
    msg.vy = 0.661701556459;
    msg.vz = 0.994813332618;
    msg.course_error = 0.330017231947;
    msg.eta = 35685U;

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
    msg.setTimeStamp(0.893959627062);
    msg.setSource(28086U);
    msg.setSourceEntity(100U);
    msg.setDestination(1448U);
    msg.setDestinationEntity(42U);
    msg.path_ref = 2888830850U;
    msg.start_lat = 0.879964321843;
    msg.start_lon = 0.289638008094;
    msg.start_z = 0.072282470934;
    msg.start_z_units = 240U;
    msg.end_lat = 0.823584057536;
    msg.end_lon = 0.758029215902;
    msg.end_z = 0.257595071402;
    msg.end_z_units = 1U;
    msg.lradius = 0.264021786595;
    msg.flags = 190U;
    msg.x = 0.584034874935;
    msg.y = 0.179757643937;
    msg.z = 0.244335102784;
    msg.vx = 0.245381319847;
    msg.vy = 0.746097526747;
    msg.vz = 0.397921954736;
    msg.course_error = 0.896687066211;
    msg.eta = 60230U;

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
    msg.setTimeStamp(0.379336580513);
    msg.setSource(54581U);
    msg.setSourceEntity(42U);
    msg.setDestination(58263U);
    msg.setDestinationEntity(242U);
    msg.k = 0.501606825052;
    msg.m = 0.234672671864;
    msg.n = 0.148165720072;

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
    msg.setTimeStamp(0.826290760314);
    msg.setSource(21466U);
    msg.setSourceEntity(196U);
    msg.setDestination(5911U);
    msg.setDestinationEntity(105U);
    msg.k = 0.968151350866;
    msg.m = 0.394998211213;
    msg.n = 0.258081340426;

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
    msg.setTimeStamp(0.608371259292);
    msg.setSource(56998U);
    msg.setSourceEntity(234U);
    msg.setDestination(52312U);
    msg.setDestinationEntity(211U);
    msg.k = 0.0683350222507;
    msg.m = 0.777384030578;
    msg.n = 0.27264994689;

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
    msg.setTimeStamp(0.764806357193);
    msg.setSource(26367U);
    msg.setSourceEntity(247U);
    msg.setDestination(54243U);
    msg.setDestinationEntity(253U);
    msg.p = 0.0924774837922;
    msg.i = 0.190906014934;
    msg.d = 0.615703356789;
    msg.a = 0.314597172456;

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
    msg.setTimeStamp(0.378403030507);
    msg.setSource(25913U);
    msg.setSourceEntity(101U);
    msg.setDestination(5565U);
    msg.setDestinationEntity(151U);
    msg.p = 0.260085435164;
    msg.i = 0.742036578728;
    msg.d = 0.533543644534;
    msg.a = 0.471680441327;

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
    msg.setTimeStamp(0.393445252522);
    msg.setSource(54178U);
    msg.setSourceEntity(245U);
    msg.setDestination(43314U);
    msg.setDestinationEntity(198U);
    msg.p = 0.74568421936;
    msg.i = 0.177129810426;
    msg.d = 0.241657616358;
    msg.a = 0.0995404592862;

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
    msg.setTimeStamp(0.493569573844);
    msg.setSource(10647U);
    msg.setSourceEntity(7U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(78U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.858234831446);
    msg.setSource(9569U);
    msg.setSourceEntity(144U);
    msg.setDestination(58883U);
    msg.setDestinationEntity(5U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.864474114976);
    msg.setSource(37870U);
    msg.setSourceEntity(67U);
    msg.setDestination(38955U);
    msg.setDestinationEntity(150U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.119309452383);
    msg.setSource(57469U);
    msg.setSourceEntity(2U);
    msg.setDestination(27595U);
    msg.setDestinationEntity(161U);
    msg.x = 0.763484236531;
    msg.y = 0.152061796135;
    msg.z = 0.824632636878;
    msg.vx = 0.797753421677;
    msg.vy = 0.16559271892;
    msg.vz = 0.11054160521;
    msg.ax = 0.337322189882;
    msg.ay = 0.443765365245;
    msg.az = 0.842057716489;
    msg.flags = 7330U;

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
    msg.setTimeStamp(0.0492003371875);
    msg.setSource(17274U);
    msg.setSourceEntity(25U);
    msg.setDestination(33846U);
    msg.setDestinationEntity(8U);
    msg.x = 0.392320936439;
    msg.y = 0.971221050102;
    msg.z = 0.0474075329394;
    msg.vx = 0.643608890138;
    msg.vy = 0.631085575498;
    msg.vz = 0.27209859127;
    msg.ax = 0.68968224505;
    msg.ay = 0.366060496654;
    msg.az = 0.499082355342;
    msg.flags = 58700U;

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
    msg.setTimeStamp(0.686505775806);
    msg.setSource(3561U);
    msg.setSourceEntity(16U);
    msg.setDestination(24722U);
    msg.setDestinationEntity(171U);
    msg.x = 0.952256955341;
    msg.y = 0.541931524675;
    msg.z = 0.288157026433;
    msg.vx = 0.725079982952;
    msg.vy = 0.186839715444;
    msg.vz = 0.354869758014;
    msg.ax = 0.407276829437;
    msg.ay = 0.510873517207;
    msg.az = 0.868746954194;
    msg.flags = 19813U;

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
    msg.setTimeStamp(0.835379104881);
    msg.setSource(46319U);
    msg.setSourceEntity(35U);
    msg.setDestination(11463U);
    msg.setDestinationEntity(76U);
    msg.value = 0.350907310066;

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
    msg.setTimeStamp(0.287645203118);
    msg.setSource(290U);
    msg.setSourceEntity(14U);
    msg.setDestination(61853U);
    msg.setDestinationEntity(11U);
    msg.value = 0.730570916083;

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
    msg.setTimeStamp(0.861362920667);
    msg.setSource(12186U);
    msg.setSourceEntity(185U);
    msg.setDestination(27203U);
    msg.setDestinationEntity(197U);
    msg.value = 0.286520716629;

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
    msg.setTimeStamp(0.580316785723);
    msg.setSource(54843U);
    msg.setSourceEntity(154U);
    msg.setDestination(23815U);
    msg.setDestinationEntity(73U);
    msg.timeout = 53414U;
    msg.lat = 0.494471794586;
    msg.lon = 0.163871237588;
    msg.z = 0.585970378297;
    msg.z_units = 42U;
    msg.speed = 0.643634971026;
    msg.speed_units = 52U;
    msg.roll = 0.836329545833;
    msg.pitch = 0.280316175812;
    msg.yaw = 0.699338910091;
    msg.custom.assign("ASZLNOYPOWBYXRNGMIOBOKDESVMKTOXTEQTDZYUGKABMFFWOQQHPSEHJCJGBXLWVSLUXKPPMYNLWRLOLFKSYZCMRCYPMYSNUNOVRQXEVDBOTAJDGWPMQCYEQDEGWYKMTFTSHZBJDTKGNPQSZOBZVGWRHMHJQFHNLRAGUCRQIHDPAAIVPJILRTREWXHU");

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
    msg.setTimeStamp(0.981109662389);
    msg.setSource(7448U);
    msg.setSourceEntity(22U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(63U);
    msg.timeout = 47169U;
    msg.lat = 0.653514296112;
    msg.lon = 0.788647958576;
    msg.z = 0.583482775103;
    msg.z_units = 97U;
    msg.speed = 0.00975224826706;
    msg.speed_units = 107U;
    msg.roll = 0.831832052565;
    msg.pitch = 0.226133159247;
    msg.yaw = 0.43068416712;
    msg.custom.assign("GJFLOFVOMOBNQSWIINQKUMVYLRTYCQKEZSJBADNFCPPDHHAWDHWJKTYTZVJYDIAGVWCVHSAOPZMUGXUTNAOGPKNQKVSATXFZZIIENRXR");

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
    msg.setTimeStamp(0.49717258466);
    msg.setSource(49395U);
    msg.setSourceEntity(180U);
    msg.setDestination(54152U);
    msg.setDestinationEntity(166U);
    msg.timeout = 18199U;
    msg.lat = 0.121679742751;
    msg.lon = 0.386454001847;
    msg.z = 0.819020281536;
    msg.z_units = 71U;
    msg.speed = 0.938570469892;
    msg.speed_units = 190U;
    msg.roll = 0.317962682772;
    msg.pitch = 0.161091106927;
    msg.yaw = 0.0769951174713;
    msg.custom.assign("TUJKARDNJJKZEXSRCJIQHOJGBSIYHWXACZCZADJKYDYLQFNXZQZVMTVTCUIKRYXKMBRGCF");

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
    msg.setTimeStamp(0.0201557859055);
    msg.setSource(64057U);
    msg.setSourceEntity(6U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(204U);
    msg.timeout = 5764U;
    msg.lat = 0.711629994177;
    msg.lon = 0.441559388771;
    msg.z = 0.704624890922;
    msg.z_units = 160U;
    msg.speed = 0.679773837326;
    msg.speed_units = 150U;
    msg.duration = 4117U;
    msg.radius = 0.019596410463;
    msg.flags = 107U;
    msg.custom.assign("GHJVUNEOAWARSYLSHLGBPRGTSFOAWPGRHVIOMDQIKEFIOEHQKPGQRUIULOHEUXGDYNFSNSACTUSBYPPYTJYUHTXDEN");

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
    msg.setTimeStamp(0.0220671399684);
    msg.setSource(32727U);
    msg.setSourceEntity(162U);
    msg.setDestination(43878U);
    msg.setDestinationEntity(25U);
    msg.timeout = 8021U;
    msg.lat = 0.615290515386;
    msg.lon = 0.89982921336;
    msg.z = 0.00552197581225;
    msg.z_units = 36U;
    msg.speed = 0.988937570341;
    msg.speed_units = 96U;
    msg.duration = 54286U;
    msg.radius = 0.110084512255;
    msg.flags = 41U;
    msg.custom.assign("HRUOBWZIJDIOOWCDKXNYWOWOAYVMHPWAEFYBSYZIDABWLLQVCLHUSJPQVDDZIKRTAQVBUTAJXMRTWDEQKZGWUOHEHLKRUXIZCXTMAWBGFMGDRIFYOBBJQGGOSHNKEJCFNTNGLTKVLUPXPMRYUBDPEZLDKGPWEIPEFPCFSTVVKMXYQAXO");

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
    msg.setTimeStamp(0.184569238577);
    msg.setSource(37528U);
    msg.setSourceEntity(180U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(23U);
    msg.timeout = 12252U;
    msg.lat = 0.878993364549;
    msg.lon = 0.663072131279;
    msg.z = 0.9756119568;
    msg.z_units = 50U;
    msg.speed = 0.162521203289;
    msg.speed_units = 115U;
    msg.duration = 54897U;
    msg.radius = 0.676970907048;
    msg.flags = 175U;
    msg.custom.assign("YMQRKZBJUYKGBMARQAACBMHAKPHDSABOYGOYHGOCWGBKCVPWGUDZMCQQDL");

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
    msg.setTimeStamp(0.059828905603);
    msg.setSource(22372U);
    msg.setSourceEntity(161U);
    msg.setDestination(6665U);
    msg.setDestinationEntity(103U);
    msg.custom.assign("UAMLPXUJOKIXIHQLKQGGFJMOHIWICZLXMTIFUBYCSUUDNYWQEGBOAKGJLNKODNESVFTNIKEGROUCEVTBJHBFSVRLEOACMYPWPCADBHMFEIRFHBLLNOHTISVQWEPGIYZSJXQRPXWOBZHNPMXDQYCKJUVDUZTQYIREBRSYNATKCBMJYUSUGSZOFJMKRHAC");

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
    msg.setTimeStamp(0.276534597993);
    msg.setSource(12335U);
    msg.setSourceEntity(62U);
    msg.setDestination(26077U);
    msg.setDestinationEntity(101U);
    msg.custom.assign("PJQEDYRLARIVDQUIEMVWVPJNVCHMMJXPLFZJLTRKFTMYPOBBWATFCDCJYALFWGEWAOUDNWUUPRUYRQHKUHESGBVXXLWDHLEACATOHIKBDIVPCLFNNYERMONZKHHUBVLMNRXKGXFKNZDWZJIAQIZFSQGASTFFYMMBVMOXZTCXIZSESGBNSJOCOKQPPUQWJJHTSICPNUYXPVEOQQKRHKCNYZLERMGAVYTXW");

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
    msg.setTimeStamp(0.204641722055);
    msg.setSource(40336U);
    msg.setSourceEntity(196U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(251U);
    msg.custom.assign("UULXMZYQJGOKXXWCLNNUPRXZFNMBKEADJRJTBKFINOSZBLDASCZBLOSYUWUJQXHGCVFTQBIPGQC");

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
    msg.setTimeStamp(0.927973111835);
    msg.setSource(27620U);
    msg.setSourceEntity(179U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(19U);
    msg.timeout = 54180U;
    msg.lat = 0.916151495268;
    msg.lon = 0.354832409962;
    msg.z = 0.789072525391;
    msg.z_units = 44U;
    msg.duration = 28153U;
    msg.speed = 0.731654836252;
    msg.speed_units = 93U;
    msg.type = 87U;
    msg.radius = 0.854320660448;
    msg.length = 0.720376684549;
    msg.bearing = 0.476495239847;
    msg.direction = 253U;
    msg.custom.assign("VWKSVQSHPXCLWALDPJRQBKAWXFFQAMULHJBDOWMJNKVEUREDDORBQZMCDTYOHGZUSZPWJBRGRGTUFAGGDNVILQCKQPOUFHBTGKOTRYLTZARILPNFWZBVJIQIJONLNKAECYCIDJBJFGXYELONMIWOKYJTQXMZUQLJMYXTCCGILUNAADZHBZYHOCXYMMDAINROEEPENSEHFAYVSWXHPNFPKFXEXTX");

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
    msg.setTimeStamp(0.27280412555);
    msg.setSource(47173U);
    msg.setSourceEntity(0U);
    msg.setDestination(45563U);
    msg.setDestinationEntity(75U);
    msg.timeout = 6838U;
    msg.lat = 0.816743580574;
    msg.lon = 0.51663212854;
    msg.z = 0.373867342044;
    msg.z_units = 7U;
    msg.duration = 62678U;
    msg.speed = 0.0665421522144;
    msg.speed_units = 128U;
    msg.type = 167U;
    msg.radius = 0.0454859780329;
    msg.length = 0.380238419792;
    msg.bearing = 0.395672207447;
    msg.direction = 248U;
    msg.custom.assign("ZPIBBYVTZNLSUGXTAFHZUBKYKPECKDXQFJRMSGXRNQXEJAESO");

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
    msg.setTimeStamp(0.543874515192);
    msg.setSource(57175U);
    msg.setSourceEntity(245U);
    msg.setDestination(50120U);
    msg.setDestinationEntity(233U);
    msg.timeout = 59756U;
    msg.lat = 0.653056131951;
    msg.lon = 0.387199542269;
    msg.z = 0.596269225559;
    msg.z_units = 222U;
    msg.duration = 26414U;
    msg.speed = 0.667106081409;
    msg.speed_units = 105U;
    msg.type = 107U;
    msg.radius = 0.95117744299;
    msg.length = 0.617669294136;
    msg.bearing = 0.587358489023;
    msg.direction = 37U;
    msg.custom.assign("XBWTZYVXQVTJDWBKJAPFZFODNBPTUVCBCLUAEKXZGWZTDWKLEPMAHTWOSILKMSCQAOFBAJRISSNPBFHGEMGDXMWYFYTEGGYORMZCEOOSCPRRDTXKGLIDWMVNUMJIKILEQPSNICAJXQRTZYXKGJQARHJLRMRIHALEGUQHCZHJPYIGWBIWQBSNUFYZVQFNVBENHQJLUODHKRXSMVO");

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
    msg.setTimeStamp(0.216359330182);
    msg.setSource(23409U);
    msg.setSourceEntity(7U);
    msg.setDestination(47212U);
    msg.setDestinationEntity(75U);
    msg.duration = 19534U;
    msg.custom.assign("YZQHAVCPKFSVRZRMMRZKFBMUPBOEOHFUTUKGCJHDWCPVGFQCGEJYLYUENNTPPHQNAFUNPIODEESXLTHQCXQXQBDWIEUNNVVKZAJIZGUMONCKWLQWBSTROKYPEAILACQFEQDTMJKIECYMTXYPPVFOOGBSLEKLHNVSNCMUHJZMCZDSBFGNXHRXMAIAWABUJZMZXBYFTBOSZKJUY");

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
    msg.setTimeStamp(0.0866671520048);
    msg.setSource(48770U);
    msg.setSourceEntity(172U);
    msg.setDestination(26552U);
    msg.setDestinationEntity(65U);
    msg.duration = 36021U;
    msg.custom.assign("XNACLVBPLYTVQLJQQIIMNULJKXOMFWCQLABTXPTDVGDQNFMNHYEPRSGKBJMGPUDZHZKAOWVUONKPTUPGYLBKKVLUWASMJVYWPIHXZQRDQSWENKVKHIOLEBGEQRDRNXXFYAGUDCMFIWCFOMFITCRMQCUJVHI");

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
    msg.setTimeStamp(0.269870445172);
    msg.setSource(1045U);
    msg.setSourceEntity(176U);
    msg.setDestination(55709U);
    msg.setDestinationEntity(25U);
    msg.duration = 10244U;
    msg.custom.assign("TSSVRLCGIKXRNBWFOJZCANXIDFIKTCGQRKWJXFYNFHPOEVCSXYPHZOBABLIOTLGTGRJEHFMPNYQXTOQ");

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
    msg.setTimeStamp(0.575699969842);
    msg.setSource(39509U);
    msg.setSourceEntity(248U);
    msg.setDestination(45334U);
    msg.setDestinationEntity(220U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.599505065992;
    msg.control.set(tmp_msg_0);
    msg.duration = 20028U;
    msg.custom.assign("AWXTRGQJTTIUHIBKWRMLLJLELQTSGUHXYEHAQSINFHXTXGEKEZBADMJWDMOVGOKXJZVMPSVUAUTCUVRJPWBFFASPIWCNOMKYZNQPMNWLQFWTOAARWIERVLQPTVASFHENSPYNKCPVYPXOIOZHDHBIQEQBJEGDSOCOKZYIQXRZFBXCIYMSBDCVDUFVLRSXMHMDUCSAURGEGYOURPAZNQFVNCBLTKUTNYHIOXPDKNEKG");

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
    msg.setTimeStamp(0.563044796029);
    msg.setSource(27444U);
    msg.setSourceEntity(121U);
    msg.setDestination(1641U);
    msg.setDestinationEntity(174U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2566047691U;
    tmp_msg_0.start_lat = 0.492785634476;
    tmp_msg_0.start_lon = 0.465044376461;
    tmp_msg_0.start_z = 0.482053519133;
    tmp_msg_0.start_z_units = 31U;
    tmp_msg_0.end_lat = 0.0363320513564;
    tmp_msg_0.end_lon = 0.905496061598;
    tmp_msg_0.end_z = 0.648139441985;
    tmp_msg_0.end_z_units = 157U;
    tmp_msg_0.speed = 0.719294813495;
    tmp_msg_0.speed_units = 169U;
    tmp_msg_0.lradius = 0.664614545568;
    tmp_msg_0.flags = 230U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10011U;
    msg.custom.assign("HBVLCKGIEALYPVLSOBADZMGOYWZDRHKFPWVNVKSQEWUVMWKYOFJRVKYALMBUCWNCREPXTUDVZBDSZYDLPPCXSQLGAPXJEOX");

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
    msg.setTimeStamp(0.889709720149);
    msg.setSource(21246U);
    msg.setSourceEntity(61U);
    msg.setDestination(58299U);
    msg.setDestinationEntity(132U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 288295908U;
    tmp_msg_0.start_lat = 0.808382156049;
    tmp_msg_0.start_lon = 0.309194754293;
    tmp_msg_0.start_z = 0.163701156396;
    tmp_msg_0.start_z_units = 176U;
    tmp_msg_0.end_lat = 0.835535715864;
    tmp_msg_0.end_lon = 0.94394286753;
    tmp_msg_0.end_z = 0.965748423992;
    tmp_msg_0.end_z_units = 79U;
    tmp_msg_0.speed = 0.111586514272;
    tmp_msg_0.speed_units = 109U;
    tmp_msg_0.lradius = 0.344885545349;
    tmp_msg_0.flags = 8U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10485U;
    msg.custom.assign("SFHYKSOUMZAREPIWVKEQKJIXPESFWLAWWXEFYBBNHLXJTHCNBMRDFODRLQLCDFMEXPVZJAXKIRQIAPYBNYRLYNRTZBQMPMFCOCEKVXSYYLKQCWTTUMWHZENFPSLHUZGHIDCOJMKVJVGPOBDOAIEXTDAUUDFMNZGVPASJUGYVTQJDJQIJBZWIYRRHDOHDUU");

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
    msg.setTimeStamp(0.00726830606599);
    msg.setSource(47323U);
    msg.setSourceEntity(62U);
    msg.setDestination(43591U);
    msg.setDestinationEntity(11U);
    msg.timeout = 51532U;
    msg.lat = 0.0363017575716;
    msg.lon = 0.444464716124;
    msg.z = 0.7012667366;
    msg.z_units = 196U;
    msg.speed = 0.96707810767;
    msg.speed_units = 227U;
    msg.bearing = 0.632313015513;
    msg.cross_angle = 0.391638991494;
    msg.width = 0.473741811963;
    msg.length = 0.110714022168;
    msg.hstep = 0.468469852761;
    msg.coff = 57U;
    msg.alternation = 162U;
    msg.flags = 181U;
    msg.custom.assign("SLKEUUNHFALVAZWMFLTDQNXDLCYMRBFPWUKJHTKNXERQCYCBRAZMYLCHCHROISEONJVTHUBSJZNJWCMAEGIRTGIVMPVBZYDSWHORJEYOWNBDXSBUQKLPMFBOU");

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
    msg.setTimeStamp(0.399661078509);
    msg.setSource(18609U);
    msg.setSourceEntity(86U);
    msg.setDestination(3735U);
    msg.setDestinationEntity(68U);
    msg.timeout = 15975U;
    msg.lat = 0.207016299265;
    msg.lon = 0.467336799192;
    msg.z = 0.512511847453;
    msg.z_units = 187U;
    msg.speed = 0.376938061623;
    msg.speed_units = 231U;
    msg.bearing = 0.393937032485;
    msg.cross_angle = 0.258162562169;
    msg.width = 0.760367960983;
    msg.length = 0.137845140676;
    msg.hstep = 0.133741305153;
    msg.coff = 132U;
    msg.alternation = 82U;
    msg.flags = 81U;
    msg.custom.assign("VUSWVGPTRCLYGTUQDZPHCHXVAYBMMSKGOBLZWLJHHUMVVRNPQKSIJWWIFLJDBEOIMRPLXMXRQFDXJIFHUIYNVZMTLAKQUGTGLPNEKGXIOTWEDSNJLQJZODJHUSINOXWAUFIFNCHOSVTADOUTHXVQYEYKETBCABGCYDPYSLZJCCRNXPRFUQVZEAOLKDKFRYOWFKARZGPUBMBWKTDWFNJGQIEE");

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
    msg.setTimeStamp(0.373983076745);
    msg.setSource(36960U);
    msg.setSourceEntity(49U);
    msg.setDestination(32169U);
    msg.setDestinationEntity(214U);
    msg.timeout = 47693U;
    msg.lat = 0.960290932554;
    msg.lon = 0.458990220513;
    msg.z = 0.784027555614;
    msg.z_units = 140U;
    msg.speed = 0.625751644645;
    msg.speed_units = 244U;
    msg.bearing = 0.699731964642;
    msg.cross_angle = 0.722783404152;
    msg.width = 0.758114333982;
    msg.length = 0.0705517378874;
    msg.hstep = 0.479620568315;
    msg.coff = 173U;
    msg.alternation = 140U;
    msg.flags = 248U;
    msg.custom.assign("YCISWTXZWNPMPVBDNDBPUCMUGYBCGRXRIAIRVUMGWEXSSOYKIJVHRQLQFHHFHAUJMYBOKWKZCPLEDGLMAKIVIZQORTAQFZJGEPOOCBVDOCQYLQZBMMMXNLVNRJGQYSTSFNTGARPQJNWNCTTFBIQPLFUDXMDNTKFAXHECXYTZRUJNZEVFPFSUBSJRYZXIOVDOUNGDPEJWTZHBXTAILWECDXYOAICJWAQSHKKHOLBHELKSVZPWVLUDAW");

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
    msg.setTimeStamp(0.643283500722);
    msg.setSource(35058U);
    msg.setSourceEntity(188U);
    msg.setDestination(30924U);
    msg.setDestinationEntity(223U);
    msg.timeout = 6227U;
    msg.lat = 0.361982339047;
    msg.lon = 0.331686152001;
    msg.z = 0.37336450525;
    msg.z_units = 17U;
    msg.speed = 0.866739929711;
    msg.speed_units = 123U;
    msg.custom.assign("NRJLAEVDSNLJFHBMYPFJSIWHYMDPGTCUPLSGHGUETXODQRRPXSLZZKQHHBWWYXUXKCOBGUQKOBZAMUZZTFZTEFPKVIELLDLANNALULGOEKIYFHJBFWDXEHMQIMWZRKQXTZMSSJRJKUNCCBOKSBTRCPMCOGIVWYHKOVPDUINSQCEDMVYRNDQVFSFLJOQTXCVCHOXAWYIFYTCPNMBXVDIUWV");

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
    msg.setTimeStamp(0.338028435364);
    msg.setSource(13688U);
    msg.setSourceEntity(223U);
    msg.setDestination(48290U);
    msg.setDestinationEntity(100U);
    msg.timeout = 17291U;
    msg.lat = 0.999586589396;
    msg.lon = 0.68380506372;
    msg.z = 0.0510705725041;
    msg.z_units = 176U;
    msg.speed = 0.495425509831;
    msg.speed_units = 157U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.375062675089;
    tmp_msg_0.y = 0.264697674803;
    tmp_msg_0.z = 0.388543217713;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WNYPEATOGDNXDGKZRLCTGTRBF");

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
    msg.setTimeStamp(0.0164552886424);
    msg.setSource(10654U);
    msg.setSourceEntity(44U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(106U);
    msg.timeout = 62467U;
    msg.lat = 0.676181680765;
    msg.lon = 0.272786059705;
    msg.z = 0.130322265607;
    msg.z_units = 229U;
    msg.speed = 0.407274259583;
    msg.speed_units = 157U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.276636748387;
    tmp_msg_0.y = 0.869087913077;
    tmp_msg_0.z = 0.281512229842;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KBKBPNWMQEPUWINNFJDFGMUCMHBIAZSTEEFWGQTTPXRUCWCFIOYLZREZSORJDWTOSFMHROBINGBLXZUSKWDXIQXYUMMASOKRYQNIFQAPDDIBRXKBCGFVDAXCUETSVMJRQYDBQNAEBPQTJCYGIXAAJFESHMFNNRKJGAPPUJQYFOVHJIWHZHVCVGLTMOUXOHDSLCKVWOPTGXICKLUQ");

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
    msg.setTimeStamp(0.456800294017);
    msg.setSource(32387U);
    msg.setSourceEntity(135U);
    msg.setDestination(19793U);
    msg.setDestinationEntity(141U);
    msg.x = 0.102365915171;
    msg.y = 0.990448380397;
    msg.z = 0.584260094056;

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
    msg.setTimeStamp(0.465828137354);
    msg.setSource(29965U);
    msg.setSourceEntity(254U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(64U);
    msg.x = 0.336132718307;
    msg.y = 0.0553792283055;
    msg.z = 0.134308213807;

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
    msg.setTimeStamp(0.461247189434);
    msg.setSource(53074U);
    msg.setSourceEntity(159U);
    msg.setDestination(36996U);
    msg.setDestinationEntity(7U);
    msg.x = 0.360836667029;
    msg.y = 0.503912529997;
    msg.z = 0.125502722418;

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
    msg.setTimeStamp(0.669823853574);
    msg.setSource(61645U);
    msg.setSourceEntity(219U);
    msg.setDestination(60580U);
    msg.setDestinationEntity(98U);
    msg.timeout = 11784U;
    msg.lat = 0.714124314625;
    msg.lon = 0.683581381707;
    msg.z = 0.561750694219;
    msg.z_units = 101U;
    msg.amplitude = 0.813779686812;
    msg.pitch = 0.145763527296;
    msg.speed = 0.312672922934;
    msg.speed_units = 243U;
    msg.custom.assign("FSVKQUYNVCKVGDAPPTMXZEOWDSKNVSRHRGRUHMWZBHTRWVIBHL");

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
    msg.setTimeStamp(0.435634988681);
    msg.setSource(29072U);
    msg.setSourceEntity(126U);
    msg.setDestination(24590U);
    msg.setDestinationEntity(241U);
    msg.timeout = 22823U;
    msg.lat = 0.267829808557;
    msg.lon = 0.920229116745;
    msg.z = 0.297391378471;
    msg.z_units = 141U;
    msg.amplitude = 0.733808984143;
    msg.pitch = 0.00519501306468;
    msg.speed = 0.510455883553;
    msg.speed_units = 246U;
    msg.custom.assign("YDQDXUGMWRQBPFRJHWAQXTSJCIOERBARZJCF");

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
    msg.setTimeStamp(0.458675004729);
    msg.setSource(29886U);
    msg.setSourceEntity(81U);
    msg.setDestination(37958U);
    msg.setDestinationEntity(65U);
    msg.timeout = 20801U;
    msg.lat = 0.0930383305295;
    msg.lon = 0.223779510398;
    msg.z = 0.116629733953;
    msg.z_units = 38U;
    msg.amplitude = 0.642685705929;
    msg.pitch = 0.0368498092578;
    msg.speed = 0.601782307027;
    msg.speed_units = 198U;
    msg.custom.assign("VITKPFPFMFMBPCKAAGFTHTBNMXNXZWTJODUOPIPSRWIBAYVAUZWSJBYQYNGDMRXWYYUGELOBWJTXKJZLOBCUFSLUZYMQEPNHHIOAXFMEMGEUQOJRTQBNHPJXIVLTXJHVEEQHULR");

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
    msg.setTimeStamp(0.608974761492);
    msg.setSource(62455U);
    msg.setSourceEntity(131U);
    msg.setDestination(23613U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.0178329887979);
    msg.setSource(7245U);
    msg.setSourceEntity(236U);
    msg.setDestination(36496U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.06530933547);
    msg.setSource(63653U);
    msg.setSourceEntity(27U);
    msg.setDestination(47563U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.921456284954);
    msg.setSource(58797U);
    msg.setSourceEntity(160U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.590665551582;
    msg.lon = 0.0933474749421;
    msg.z = 0.137751605499;
    msg.z_units = 245U;
    msg.radius = 0.292954092492;
    msg.duration = 59555U;
    msg.speed = 0.513087889636;
    msg.speed_units = 214U;
    msg.custom.assign("ZDSBAUNASNZFBOZIJHEBIRJNIVZBZKNKYMMCIDCLLFWUJVGLRLTM");

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
    msg.setTimeStamp(0.445978153751);
    msg.setSource(44994U);
    msg.setSourceEntity(234U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.512199103618;
    msg.lon = 0.312702178522;
    msg.z = 0.0945013713664;
    msg.z_units = 40U;
    msg.radius = 0.729019044673;
    msg.duration = 13608U;
    msg.speed = 0.288545701021;
    msg.speed_units = 20U;
    msg.custom.assign("OSVNPSLQMVYBQDRKZXNKYPPFJXXYSSNHIUOVUWQDJFAEHHDZKLDWJRZURKGIBKSTIZDDFEZXYHCYEUCOHDYMGATOGABGEQDPUQVUFZLVSFUIITAAWQWQGNNCMHBXMJECLJO");

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
    msg.setTimeStamp(0.632043950438);
    msg.setSource(12739U);
    msg.setSourceEntity(245U);
    msg.setDestination(59196U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.870903055439;
    msg.lon = 0.596222941614;
    msg.z = 0.648673068122;
    msg.z_units = 84U;
    msg.radius = 0.961602646261;
    msg.duration = 63622U;
    msg.speed = 0.176904110338;
    msg.speed_units = 242U;
    msg.custom.assign("KIFWAQXKDVUZCPXQSWDCINOLHUEIECWVDWCSFJFCPRNYYIWVRUUYLGORCBIWHERJXGQVVDHJCQADXZPPWYFMJQNZAEBSDGPDZOHLUXKFTUTBBMLMPALVYKYTLPCBEIZKZEHFHCANUVSUGVJBKLKOSXFWTOOGXFYXRNSROFVFA");

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
    msg.setTimeStamp(0.102770282797);
    msg.setSource(31931U);
    msg.setSourceEntity(72U);
    msg.setDestination(28577U);
    msg.setDestinationEntity(83U);
    msg.timeout = 56900U;
    msg.flags = 45U;
    msg.lat = 0.868212175904;
    msg.lon = 0.689631964831;
    msg.start_z = 0.553661491271;
    msg.start_z_units = 119U;
    msg.end_z = 0.76241796795;
    msg.end_z_units = 158U;
    msg.radius = 0.755503839378;
    msg.speed = 0.404361048685;
    msg.speed_units = 26U;
    msg.custom.assign("GXVBAYSNOFTEHCPNELYKIGYRSXJKXVOQUWYBCQEAFEGCMDPMUDQHOVAVLNHTAAVDOFUQORDOFCGJAMJEYWCILSQISTHZBETDQZQVWXRSMFABIERMNCNHGGMGQZBXNUGYIGTYDEHICIUFDLVOPILZWJIAZJSZZFGAXRMFNCWPLYRBTHITQBVORLTUULSTK");

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
    msg.setTimeStamp(0.169405626611);
    msg.setSource(51493U);
    msg.setSourceEntity(200U);
    msg.setDestination(30339U);
    msg.setDestinationEntity(128U);
    msg.timeout = 4724U;
    msg.flags = 14U;
    msg.lat = 0.635982531777;
    msg.lon = 0.345435321604;
    msg.start_z = 0.509856942919;
    msg.start_z_units = 160U;
    msg.end_z = 0.166844974663;
    msg.end_z_units = 69U;
    msg.radius = 0.757718403423;
    msg.speed = 0.0539927456508;
    msg.speed_units = 153U;
    msg.custom.assign("IRVJCBMYOSEVAOKRDANQJVTKKRTFZ");

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
    msg.setTimeStamp(0.368239939946);
    msg.setSource(59762U);
    msg.setSourceEntity(108U);
    msg.setDestination(60167U);
    msg.setDestinationEntity(75U);
    msg.timeout = 8615U;
    msg.flags = 210U;
    msg.lat = 0.215158273951;
    msg.lon = 0.547320481017;
    msg.start_z = 0.164965166418;
    msg.start_z_units = 137U;
    msg.end_z = 0.827497845577;
    msg.end_z_units = 200U;
    msg.radius = 0.95525081793;
    msg.speed = 0.621059688097;
    msg.speed_units = 140U;
    msg.custom.assign("FTVTFEFETNDUPQAXDGCGCNEDJZOHDVJMNOCKNQYROSQAUHHIARMMWTQOOALXVYIKEYXUQXWPIZFTXOOXUYBOQIGSPBWHEEMRZWBKCUFZCRMHPOAWUFYPSYSXBVJNHCYMMRCRRUFAZJUVVGKDMEJWBGKJJTREZIGWSDKLHEWATKKPYIBBGLPQFTSBRIMSVJ");

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
    msg.setTimeStamp(0.778353519578);
    msg.setSource(48594U);
    msg.setSourceEntity(128U);
    msg.setDestination(16675U);
    msg.setDestinationEntity(169U);
    msg.timeout = 53219U;
    msg.lat = 0.937125714695;
    msg.lon = 0.0141785099574;
    msg.z = 0.449889614431;
    msg.z_units = 79U;
    msg.speed = 0.333637501626;
    msg.speed_units = 28U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.916149756771;
    tmp_msg_0.y = 0.853898844199;
    tmp_msg_0.z = 0.940029214142;
    tmp_msg_0.t = 0.108653728977;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LXQLCMYPCDUBBQHOJQOVUUAQPKGHPRATJDIGPINQEFUDKCPEKLQZTVRAQHFLOURMIGKINBSZFLSZCWAXAJXGEJLIZFWMHCMRC");

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
    msg.setTimeStamp(0.255505436314);
    msg.setSource(23597U);
    msg.setSourceEntity(226U);
    msg.setDestination(22536U);
    msg.setDestinationEntity(46U);
    msg.timeout = 43726U;
    msg.lat = 0.695326622748;
    msg.lon = 0.384862721589;
    msg.z = 0.810417105701;
    msg.z_units = 135U;
    msg.speed = 0.543347311762;
    msg.speed_units = 220U;
    msg.custom.assign("NZQESSEDEKBAZRKADVUDVAUXUIEVYMOUQSIPWTSEWTWMPGHFAGJBIFOXGWCXIJHPSFETLZQEYUGHXQGJPJCASBNMFQCMOXMPKZYHBRHAVVRDCIMPACCIFBDHPNYCNCZZVRIXQJXHPTVTBZGUGDXWFTRZORC");

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
    msg.setTimeStamp(0.990817459148);
    msg.setSource(31247U);
    msg.setSourceEntity(108U);
    msg.setDestination(31066U);
    msg.setDestinationEntity(95U);
    msg.timeout = 9968U;
    msg.lat = 0.129576712103;
    msg.lon = 0.838380425198;
    msg.z = 0.239668910725;
    msg.z_units = 24U;
    msg.speed = 0.182514010678;
    msg.speed_units = 158U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.285589122719;
    tmp_msg_0.y = 0.0568263682421;
    tmp_msg_0.z = 0.991182903579;
    tmp_msg_0.t = 0.256828775645;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("HSLKJIDMYXUDYHLYAWPNGOHJICRZZDJLZYYQVISQMVQIJRSGXEONHTSVUXLBWUBMPMKTSACAPKZDGWGMJTPOSTYPSUBZXUUGVQBRNWMT");

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
    msg.setTimeStamp(0.328277192407);
    msg.setSource(55350U);
    msg.setSourceEntity(13U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(166U);
    msg.x = 0.934017049725;
    msg.y = 0.00945982546732;
    msg.z = 0.908644296949;
    msg.t = 0.240413978245;

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
    msg.setTimeStamp(0.937400409452);
    msg.setSource(33519U);
    msg.setSourceEntity(29U);
    msg.setDestination(18542U);
    msg.setDestinationEntity(21U);
    msg.x = 0.491242340022;
    msg.y = 0.470454570321;
    msg.z = 0.504764311762;
    msg.t = 0.292514867744;

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
    msg.setTimeStamp(0.510586252535);
    msg.setSource(44437U);
    msg.setSourceEntity(159U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(250U);
    msg.x = 0.223031662065;
    msg.y = 0.48456462163;
    msg.z = 0.718927355738;
    msg.t = 0.498332794894;

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
    msg.setTimeStamp(0.538397028788);
    msg.setSource(58168U);
    msg.setSourceEntity(231U);
    msg.setDestination(65034U);
    msg.setDestinationEntity(84U);
    msg.timeout = 17358U;
    msg.name.assign("OBHNMGZPGKXTVXTBKDDZUWTLSLUGUVMDIJWBRWKOSFICVYSDPNKTWYQVBSZZEGNKJDHRXZXFWFWKJCGETQ");
    msg.custom.assign("BTUAEOGHWHEYZALDTCUJNKRACSTKZWFCBHKBPKXOSWUDBMIEPJMVEHG");

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
    msg.setTimeStamp(0.396814781871);
    msg.setSource(36882U);
    msg.setSourceEntity(139U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(141U);
    msg.timeout = 51047U;
    msg.name.assign("TGEGZFNIKWLWHULKRFVPERVYPHDSZBKBBYHYCAVBIHWZATCCLIFOQDMVEOCTAIGMLMNKEOBQAIVXZOZJZFOONLXXH");
    msg.custom.assign("ZGAUSQLPQCNPIYSCHBDTJFDLBJCKONFMLPFMUZRMOXSPEWRERRZLIAUHEIRHZGTMNTNAUELDFJQSZBJJCEOAMMAIYRZOBGOBACFWWIJNTBCSNOPSEWBVAISJXXVJTEVXSYVIXXPDWGHHQUPVIXZQYAKOCXNGYVBQLYGEHZJAETXSQDTNYJDWEWPTZKUMVOUYIKRFZLVQNXYIHGOKUWTHLUNWP");

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
    msg.setTimeStamp(0.820254639607);
    msg.setSource(39592U);
    msg.setSourceEntity(18U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(66U);
    msg.timeout = 35603U;
    msg.name.assign("LRAZNGTIOUUSFYFJQJIFLDVPSBOMMXTPVBWSYXRAKNECILJPEXTSWTWFGGXZTDOKAKPOIKFHARNYZFMJRWDKQSQMWLBDJVULOFGZGCVAUBHINCZJRBCKLYZRGAOUSPQZUJRHKXHJUECZHPLMUCATCYEEJZDMCRYCOEVTAGNFSAITKOEUWIPBVYKVFRIVHNNEQDSQSYYHDNDB");
    msg.custom.assign("UDDEOOBLPMKCIIYKTBKCMEPACNOCRVQXH");

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
    msg.setTimeStamp(0.300707064949);
    msg.setSource(53702U);
    msg.setSourceEntity(200U);
    msg.setDestination(46748U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.611992885347;
    msg.lon = 0.537791544378;
    msg.z = 0.72774274557;
    msg.z_units = 227U;
    msg.speed = 0.568780815627;
    msg.speed_units = 154U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34829U;
    tmp_msg_0.off_x = 0.342096417827;
    tmp_msg_0.off_y = 0.792500084446;
    tmp_msg_0.off_z = 0.873405391719;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.393373562385;
    msg.custom.assign("ULYDLMXDYKWBHGXFULCZTCUOPBWWRKCYTNPSVCRAKIIAXZIQMOEJDOGBNPAKFPXFFPNVHNTEEXOHEPKDCLJDSJZBQGHQKCQWXKNSUZVKBEOQAAPZVUMJRTTALGNFNTAKRHIFYTSUWMYGDVMIWRYVAJEPLJLJQRSRPBQEHLFSGSZZQBFIXSARY");

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
    msg.setTimeStamp(0.188137739758);
    msg.setSource(45872U);
    msg.setSourceEntity(81U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.582385900989;
    msg.lon = 0.0627367444029;
    msg.z = 0.922522880538;
    msg.z_units = 78U;
    msg.speed = 0.046485217369;
    msg.speed_units = 32U;
    msg.start_time = 0.796424886756;
    msg.custom.assign("IJQDWRGLDQPEBTUCNXHABHSQRYWXJVBCPJETGMYVACGJULYEXSEPEKWUOSKTMWKKBIEZJFOEHLCTFOINQQBYVMLPIWPSRXAVWKVWHFZXQGVUKPTUGFMLIEIFYRKYCXGUXRMYAUMCMMFZOPHMDVREGPVHCMFCNOVXAEGLTJLRUOWSCHLNZHGVFAFZKNOJZNYPJYRRQQNSZDXQTL");

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
    msg.setTimeStamp(0.892793791015);
    msg.setSource(40466U);
    msg.setSourceEntity(173U);
    msg.setDestination(38552U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.738740199623;
    msg.lon = 0.603155952826;
    msg.z = 0.54986632066;
    msg.z_units = 108U;
    msg.speed = 0.771462086897;
    msg.speed_units = 33U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.203979107966;
    tmp_msg_0.y = 0.407075380692;
    tmp_msg_0.z = 0.553914184181;
    tmp_msg_0.t = 0.0594439942868;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5531U;
    tmp_msg_1.off_x = 0.66163772904;
    tmp_msg_1.off_y = 0.418120278912;
    tmp_msg_1.off_z = 0.0503930848252;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.637720773375;
    msg.custom.assign("BWYEEDAWNRZAIMIBMHCJNARQPCGOBPXLBTNYYUOSKVCLYLULDEXVORXNAWFGNUFUHPEBIELJZKOOVVWGEHLOECPSQPTMDDYRDJIUGTGRWMTUZXVPAKUSSWYTXHHZZVCQAFJQQIYYUKIDMKQMQSTRWMJLZOECAMLDXLZPBCJTRRBAXWHFLZDEJMJWXTFVNKVFOPGQNFYSPBNTAOKRHHWBCX");

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
    msg.setTimeStamp(0.185313899028);
    msg.setSource(57344U);
    msg.setSourceEntity(231U);
    msg.setDestination(36393U);
    msg.setDestinationEntity(105U);
    msg.vid = 43680U;
    msg.off_x = 0.352592190466;
    msg.off_y = 0.770061180368;
    msg.off_z = 0.566446736414;

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
    msg.setTimeStamp(0.753941429935);
    msg.setSource(45919U);
    msg.setSourceEntity(73U);
    msg.setDestination(9320U);
    msg.setDestinationEntity(209U);
    msg.vid = 50745U;
    msg.off_x = 0.665535420844;
    msg.off_y = 0.688030275921;
    msg.off_z = 0.379328939572;

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
    msg.setTimeStamp(0.582215043732);
    msg.setSource(48722U);
    msg.setSourceEntity(54U);
    msg.setDestination(27535U);
    msg.setDestinationEntity(174U);
    msg.vid = 30353U;
    msg.off_x = 0.354584687329;
    msg.off_y = 0.576561966992;
    msg.off_z = 0.775625092051;

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
    msg.setTimeStamp(0.615764053202);
    msg.setSource(54296U);
    msg.setSourceEntity(35U);
    msg.setDestination(43636U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.144741820138);
    msg.setSource(44437U);
    msg.setSourceEntity(245U);
    msg.setDestination(52426U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.111207648124);
    msg.setSource(54475U);
    msg.setSourceEntity(218U);
    msg.setDestination(26258U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.351188886155);
    msg.setSource(48810U);
    msg.setSourceEntity(29U);
    msg.setDestination(26860U);
    msg.setDestinationEntity(248U);
    msg.mid = 45079U;

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
    msg.setTimeStamp(0.284978795049);
    msg.setSource(56469U);
    msg.setSourceEntity(165U);
    msg.setDestination(24886U);
    msg.setDestinationEntity(210U);
    msg.mid = 52292U;

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
    msg.setTimeStamp(0.261204271404);
    msg.setSource(28688U);
    msg.setSourceEntity(189U);
    msg.setDestination(46743U);
    msg.setDestinationEntity(94U);
    msg.mid = 42357U;

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
    msg.setTimeStamp(0.0351590015949);
    msg.setSource(51373U);
    msg.setSourceEntity(166U);
    msg.setDestination(62508U);
    msg.setDestinationEntity(168U);
    msg.state = 61U;
    msg.eta = 44276U;
    msg.info.assign("ZGNLEORFSYMEGUULPLMNXRPPJGAESOMTGWSRSZUHHBTQVEAOVZNHBIWAALYINUUAQPFQDMPVAQILTHCKCIXVDPTXXJFJBINEFVQHZFYVDSHGMKOENDGYMGIJDAZTFSJZRXUBUTWMCAKPZTUVZYQOATEOCYUSKLYSDFFYDVPWRRJBOWMWIIXJYGZSUHDHEPAS");

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
    msg.setTimeStamp(0.466195216935);
    msg.setSource(28659U);
    msg.setSourceEntity(8U);
    msg.setDestination(54965U);
    msg.setDestinationEntity(47U);
    msg.state = 139U;
    msg.eta = 20637U;
    msg.info.assign("PAAZHNSQBXUYENRQCWXDFSUHQFSNBPGFREQKEZKTDFXGKTNWHWLBKYMHACJSICLEMSXJSUOFHAKTASYELQAQHPCAOIVDBZZONZQLCVZIWHMTILBRCMQZQFISGTDMXHOORB");

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
    msg.setTimeStamp(0.423269441615);
    msg.setSource(59265U);
    msg.setSourceEntity(63U);
    msg.setDestination(43505U);
    msg.setDestinationEntity(31U);
    msg.state = 21U;
    msg.eta = 34040U;
    msg.info.assign("XBJDCZCASCKDBNUYOPZDIDFGNBNPEZEVUOXWQUWWTEVBFTPNAIKBTZYWUVHHKIYAJJXXVNRHVMHLERIKGPXMEPAABNOGLRNHQKWJKUSOSQSQGTYHYFRJATWMBPMZHCAVGORAWDQCEMPHZYSJFLLMSCMUFQWOUFVGQZQQAMAFLUDGTRYZDJHGDKPIRIVVE");

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
    msg.setTimeStamp(0.242425506707);
    msg.setSource(11254U);
    msg.setSourceEntity(86U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(234U);
    msg.system = 40360U;
    msg.duration = 13530U;
    msg.speed = 0.0598528951792;
    msg.speed_units = 30U;
    msg.x = 0.671242990259;
    msg.y = 0.853471594782;
    msg.z = 0.914038845693;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.0529242781523);
    msg.setSource(33516U);
    msg.setSourceEntity(235U);
    msg.setDestination(34713U);
    msg.setDestinationEntity(218U);
    msg.system = 54017U;
    msg.duration = 56203U;
    msg.speed = 0.856359726818;
    msg.speed_units = 128U;
    msg.x = 0.164754472775;
    msg.y = 0.645535890376;
    msg.z = 0.880095757207;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.0772318384779);
    msg.setSource(15404U);
    msg.setSourceEntity(49U);
    msg.setDestination(5230U);
    msg.setDestinationEntity(107U);
    msg.system = 63729U;
    msg.duration = 44350U;
    msg.speed = 0.973169514798;
    msg.speed_units = 33U;
    msg.x = 0.586772570076;
    msg.y = 0.601582761468;
    msg.z = 0.789774185827;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.219706711593);
    msg.setSource(16198U);
    msg.setSourceEntity(7U);
    msg.setDestination(10767U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.808982256114;
    msg.lon = 0.844782730851;
    msg.speed = 0.593867203491;
    msg.speed_units = 146U;
    msg.duration = 35221U;
    msg.sys_a = 39249U;
    msg.sys_b = 65254U;
    msg.move_threshold = 0.849847642562;

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
    msg.setTimeStamp(0.698527481808);
    msg.setSource(21054U);
    msg.setSourceEntity(118U);
    msg.setDestination(37016U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.815236753984;
    msg.lon = 0.799085323551;
    msg.speed = 0.362126640746;
    msg.speed_units = 2U;
    msg.duration = 45432U;
    msg.sys_a = 27792U;
    msg.sys_b = 61642U;
    msg.move_threshold = 0.303820815168;

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
    msg.setTimeStamp(0.140189359101);
    msg.setSource(53768U);
    msg.setSourceEntity(92U);
    msg.setDestination(3833U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.374026677177;
    msg.lon = 0.793754383335;
    msg.speed = 0.791888939751;
    msg.speed_units = 209U;
    msg.duration = 52305U;
    msg.sys_a = 60443U;
    msg.sys_b = 16161U;
    msg.move_threshold = 0.645662099712;

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
    msg.setTimeStamp(0.0123324969033);
    msg.setSource(22932U);
    msg.setSourceEntity(111U);
    msg.setDestination(57969U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.43347265213;
    msg.lon = 0.462183719234;
    msg.z = 0.298247657533;
    msg.z_units = 36U;
    msg.speed = 0.206149175493;
    msg.speed_units = 116U;
    msg.custom.assign("PCQVULFVCHTZENCORBOPDTDUDBBNAIDNTVPMUUMLWMZHTMXWTZPIBCQPLTGLKRYQWMQYYOBWKSAESBNULYIMULVJEQFIZWCNUJZGOJSAZRHJYNYGMRFFJNWSZLLOHKESADDILIIRYVPPMPFKMFNTVVPUHRKJKTZSXHVAFKABAWXIDXGDJKHSFKQQNAGVCWGXGGOCCPZKEWSJSJAEXHTFHCRREOZQXFAYMJWTOYSXQUIDXRNIEOEQVBDUGEXLYR");

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
    msg.setTimeStamp(0.963417712789);
    msg.setSource(37540U);
    msg.setSourceEntity(5U);
    msg.setDestination(18854U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.900824102074;
    msg.lon = 0.313831038257;
    msg.z = 0.895653958028;
    msg.z_units = 73U;
    msg.speed = 0.614219601045;
    msg.speed_units = 123U;
    msg.custom.assign("TDZAQPBMWFCDJOUJPKFQLAKLXRCHUGULWGKSZ");

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
    msg.setTimeStamp(0.375871634443);
    msg.setSource(29341U);
    msg.setSourceEntity(140U);
    msg.setDestination(30875U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.782453418642;
    msg.lon = 0.156873896996;
    msg.z = 0.829114068343;
    msg.z_units = 192U;
    msg.speed = 0.665113004766;
    msg.speed_units = 162U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.879120747114;
    tmp_msg_0.lon = 0.89309307536;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RIAWMPWCLZWTJQDUAVDYSZFLRYUPLQXIVOCPZHDLBTAYNFZEFAXDFOSVKVVMENWWLLOKRTRSTW");

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
    msg.setTimeStamp(0.0165177618653);
    msg.setSource(45892U);
    msg.setSourceEntity(144U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.602234454661;
    msg.lon = 0.927625160464;

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
    msg.setTimeStamp(0.981177898094);
    msg.setSource(153U);
    msg.setSourceEntity(160U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.115463277355;
    msg.lon = 0.00771675626667;

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
    msg.setTimeStamp(0.248429258686);
    msg.setSource(14085U);
    msg.setSourceEntity(146U);
    msg.setDestination(24831U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.500787390636;
    msg.lon = 0.325572134484;

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
    msg.setTimeStamp(0.729389284988);
    msg.setSource(64484U);
    msg.setSourceEntity(217U);
    msg.setDestination(48896U);
    msg.setDestinationEntity(49U);
    msg.timeout = 43695U;
    msg.lat = 0.947691054802;
    msg.lon = 0.465604970171;
    msg.z = 0.769106252191;
    msg.z_units = 116U;
    msg.pitch = 0.020740323709;
    msg.amplitude = 0.320922007043;
    msg.duration = 35440U;
    msg.speed = 0.756080287318;
    msg.speed_units = 154U;
    msg.radius = 0.928226255346;
    msg.direction = 137U;
    msg.custom.assign("COMFVEYOSBOXYGIQWMIAHPU");

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
    msg.setTimeStamp(0.776556779975);
    msg.setSource(4021U);
    msg.setSourceEntity(21U);
    msg.setDestination(8478U);
    msg.setDestinationEntity(44U);
    msg.timeout = 64157U;
    msg.lat = 0.172589125148;
    msg.lon = 0.136130076534;
    msg.z = 0.212115342508;
    msg.z_units = 222U;
    msg.pitch = 0.164656909466;
    msg.amplitude = 0.336086668262;
    msg.duration = 12902U;
    msg.speed = 0.738419295417;
    msg.speed_units = 173U;
    msg.radius = 0.363167380527;
    msg.direction = 94U;
    msg.custom.assign("VYMDXVGRQYHTKKALTKJUHUADRZSWKLBVVXSPBXOBNOFWIHBNTDZLWKZFCJVRGTOUNWNRIFWMHYDQKGCPINPEZEPXMUHFOTUQYMOROUDHSXMGHQDJTMDPQWMYONPQANBCB");

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
    msg.setTimeStamp(0.12821937195);
    msg.setSource(39345U);
    msg.setSourceEntity(27U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(192U);
    msg.timeout = 29005U;
    msg.lat = 0.491786858145;
    msg.lon = 0.130720868225;
    msg.z = 0.180346147357;
    msg.z_units = 27U;
    msg.pitch = 0.221858764484;
    msg.amplitude = 0.0626839662197;
    msg.duration = 57534U;
    msg.speed = 0.613757290999;
    msg.speed_units = 222U;
    msg.radius = 0.783584769974;
    msg.direction = 236U;
    msg.custom.assign("JEACZHLNJQFEQAKQICBQPHGODGSTDXWIUUFNLNQHPLTZHXDSFSLFILBYJWCGKJOEZ");

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
    msg.setTimeStamp(0.683805247338);
    msg.setSource(26829U);
    msg.setSourceEntity(184U);
    msg.setDestination(27680U);
    msg.setDestinationEntity(176U);
    msg.formation_name.assign("LKLZIBJOAFOOSFNZLORPLKTQZCWKZOAQYQCWFCPRCMUYGITBNNGXEHAMDRLHXMBGZIMUCILWUYKDPRYHAOBRLDEATKNCFXYJYZBCJRJWEVHBDUPRMPQKOOEQUHNBAGIHTFWTGFNEDHQHZYUGUGAEMYSSSIFYFPXCSJXRQBSJXUIFDWKVRVWNJUAEVEJWYIDEXDMKMAZGRNSTSPZNJLVBKMKVCOXZTJTVUDPVVT");
    msg.reference_frame = 189U;
    msg.custom.assign("GMFHBZSBKNDVCIXGWTPCFLHZJRSNPIQKK");

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
    msg.setTimeStamp(0.0769611429001);
    msg.setSource(63319U);
    msg.setSourceEntity(103U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(169U);
    msg.formation_name.assign("HYOYRRMMSFYHJJFMQOPKUXPRIFKYGTANTWXSAXASZMQJOOLNCAMGIOFIVGWUXVTVGCINZHZHKHEZBFLFVVLERKTDDHLGZPDIIBQPMFGCPBTLDCRSUBMWPQLQAEVRCJDEUQRWLWFVFVQZWYIATEJIMCLOKOILEPMBNLQSTGUGJKXHY");
    msg.reference_frame = 190U;
    msg.custom.assign("TDDOVOYDWJUEYABGQEIZVDEAPHWVELCKQ");

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
    msg.setTimeStamp(0.023365336308);
    msg.setSource(15741U);
    msg.setSourceEntity(77U);
    msg.setDestination(29485U);
    msg.setDestinationEntity(162U);
    msg.formation_name.assign("VGCGYDSNLXMYQIUZABMWYHVDOCKNGALWGHXKXORGTKETHIHKHYJOXXUCMIJYLJOCBATNCQTDTWWIESHPFXLSXUICEJAPXSUDIQRIAGD");
    msg.reference_frame = 127U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 34548U;
    tmp_msg_0.off_x = 0.585826655389;
    tmp_msg_0.off_y = 0.795810296196;
    tmp_msg_0.off_z = 0.544598140095;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("FTJPYSKONHXUKWRCZFBPYQHJMLFHDFIKLZXNDNGTWZRKZSAPENJRWIDSQXEEKVRCGSLQOBQQPCHKADHSGPMVYAFLWPEBUOQCTOIEZTFRGLFIXNRBMRUBZYXFTDJOQEKRNJYHTEQWPATEPUMKYLCTVZLGCURAQWBXLOZEUOJCUIHYVDNXC");

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
    msg.setTimeStamp(0.945616087923);
    msg.setSource(28956U);
    msg.setSourceEntity(73U);
    msg.setDestination(25136U);
    msg.setDestinationEntity(15U);
    msg.group_name.assign("XQIMILPVGXSAYJODHJEILXNPNVEGZQVZUQUBPLKICFKHFCWRSGRGXZJIQZMRYSEOCTEDGSIFDX");
    msg.formation_name.assign("JJHJCHKSKDWIRQDYUHBXHFYYLAKLSKOPQMFIBFVDPDVDJBFSCEPRMTREYITNGLOKUZDZVTWZOYMXTOUDSXTTAJOEKBPZRZGJSAQSXIWNYUEMUCEHZNXCQBVHNQICXLMHEIVEDJOOGQUCZWHAPMNFOLLXPVWFFOFVXUSGERNLCRLWZIVKLNAFPHPNJQIJAMDSZAQWSPTUAPKGEFMWOXNRUCXDLRQGYUKVRWQYBSWMGNT");
    msg.plan_id.assign("XWIDVRZBTPFACHMMYUVAGDDTYWXLVMGQZUGWPELXZRMCMHHFSCWUBVMADLOCAVTWSHKMEVNNPAEONPKHHQYBXYQFKPPRYLUIJOAXPIJQKFLGILDTCWLSZMEDXIKRIWUYJSJAPIFVIOS");
    msg.description.assign("TFMVQSLGCENOKY");
    msg.leader_speed = 0.367231805231;
    msg.leader_bank_lim = 0.63321311931;
    msg.pos_sim_err_lim = 0.193434842883;
    msg.pos_sim_err_wrn = 0.635353192816;
    msg.pos_sim_err_timeout = 28869U;
    msg.converg_max = 0.065241596333;
    msg.converg_timeout = 4956U;
    msg.comms_timeout = 36550U;
    msg.turb_lim = 0.531643893674;
    msg.custom.assign("QGFNCZHADKWZFXQBNZFBYKHNHDYQWURCQCALUWHPBUQAXONWKSMTJERUEVIRZWQPVZWTUNCJDOIJROMARKIDEEEBDHUMOINVXSVFXJCFORPRSPUEXUMJVLTYEQOTBQOYBNIBDYZLBAXKJCSZZJARSQWWVECTGTDGAMOBVLNXJPWGBCSDHXQMILG");

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
    msg.setTimeStamp(0.522358364802);
    msg.setSource(19885U);
    msg.setSourceEntity(98U);
    msg.setDestination(60773U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("BPKYCFFLWVCIKDAZQDIOTSCGAMQENEGUESJQZAZYWZQWOZQYKRUQSKMRKIRURJLDDVLCKJDFHWHZHOPWQBWJYDIFESXZMHTPMOUYVHUTEBEDZLGCGJXXEMYLKBZRDGSXNMFKCJRQOXXLBOGWXUBIXBMHEJPFYPSHYWPININLFTMDPEJY");
    msg.formation_name.assign("NAAYOPPZDHDROBTYEVYLTCDFKVYIICXTJIZQQNCPTGUBJRAHMDEU");
    msg.plan_id.assign("VRFUCGMARIBLPTEEJDUTPCRQWMNMVTGGMAZBTGNVUGIBNZJTBEONSKDCPLYEDDLJFLZIHVKMDRRGBFIAVQPWOHUZKXIIDILCDDRYEWZ");
    msg.description.assign("ZWRIQTQKMPVDLYECXDVDKXDLUWNCCVHZTHLXLQXFRSFRJKDWVZJQYFWJIABTHSQMWVRHPVGGVKYXEMMPDFNHJUNDYOJKMFPBFIOQPETUREJJNXDKBXEGPSLYEOSMOHATNLAGBHIBGEVUMASTOOFKUWQZJGWCAGRXDYMERSCIYPYPQNPCCLUZULFNTPIUJAZNHSKADZXHBQRWSGIFKCNZCYBLBOR");
    msg.leader_speed = 0.0930463275921;
    msg.leader_bank_lim = 0.0800006861994;
    msg.pos_sim_err_lim = 0.916489632398;
    msg.pos_sim_err_wrn = 0.00203173025209;
    msg.pos_sim_err_timeout = 62982U;
    msg.converg_max = 0.464592164981;
    msg.converg_timeout = 52236U;
    msg.comms_timeout = 11319U;
    msg.turb_lim = 0.189586649635;
    msg.custom.assign("OUWXMHFDEDEDLCBDEKFVQUIXJNGCJNMSBPGUPTYWXCUKBUVQZWONAWZEBIOBVRQIGBDJRXBPPCIOSQTUZVDKQXHWFUZXENFXCDFREXYQIBWTHMALLZGXRUJVASPJMGRJIPVSTLOVBJRTYMWMQYJFVPOC");

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
    msg.setTimeStamp(0.689054277576);
    msg.setSource(31203U);
    msg.setSourceEntity(56U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(133U);
    msg.group_name.assign("DMFOUOUWCJLOLKMMAWWWXEOCNHTAMJSPSEVGQIXQZGHBYVWZDVRRXWGJQEKBFIZEXIJYDUQVAMIYTYSHFAEKYI");
    msg.formation_name.assign("MFKXIOGOOHDJAMXWBJVLZTAIBIDVNMZFYRIOPGFBCXETVDNNBWSQCNAVJJNVSLOSYRUCFZQGDCQKUTROHJSASHMQPZDHDSKIUUEJGKBTZFLGPCYEICSYCEGUTMCNOWFZTPHSEZAOLXWVBJIWVPDDXOUUBYELIMGMCFYRASZSRMIHEAIYXTLXNQTBFTEHVF");
    msg.plan_id.assign("XEOBNUWYPJJEKJVSYJDBQWWWKEFAHUOBLIJMSGSEMWFHDMTACRMBOGYHXVCBIUXFQDTDCAKLYGRYLGPWHPIFWUNSSHSZAPTIOUNNXFPOQCMQOAYORBBGODTTFZVKONNFNMMZCLXRSMUFRWLDJCIBEZYVAEIKBDM");
    msg.description.assign("BMQFCLQASWEAUWTPDDIUPVOAPYVUNPJCIBKXXZRBEKPMWHROQ");
    msg.leader_speed = 0.151115443144;
    msg.leader_bank_lim = 0.961677582644;
    msg.pos_sim_err_lim = 0.74173844056;
    msg.pos_sim_err_wrn = 0.815341661225;
    msg.pos_sim_err_timeout = 56133U;
    msg.converg_max = 0.701458410231;
    msg.converg_timeout = 55390U;
    msg.comms_timeout = 43909U;
    msg.turb_lim = 0.464194776706;
    msg.custom.assign("JRYSTBCBGKAOAPEVXPKKWWVJXJZMTLUWFPSUSUGUOYVIWGWALXLZSHXECQCKQRAZBDXCSZZKYYNQVORJIULQYVSIVBUOEFTMXMGNNMOQRFCQSHTJIIRXZWONACTHHBQDPEZNRMRDKYJQDBHITHMPHLVREZWAGPHMEOYDLZQUJOIHRIPTKLUMFNXCTYQWVGLBBEHCSMJNKPGGCSDJAFVYENDUFLAFXPAEBWKGUTXIIFODNTDRBCLNPSJOM");

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
    msg.setTimeStamp(0.83322230094);
    msg.setSource(44748U);
    msg.setSourceEntity(116U);
    msg.setDestination(62854U);
    msg.setDestinationEntity(116U);
    msg.control_src = 25754U;
    msg.control_ent = 38U;
    msg.timeout = 0.0494258575558;
    msg.loiter_radius = 0.0265760566817;
    msg.altitude_interval = 0.326031736835;

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
    msg.setTimeStamp(0.559908937171);
    msg.setSource(54932U);
    msg.setSourceEntity(119U);
    msg.setDestination(42525U);
    msg.setDestinationEntity(128U);
    msg.control_src = 35175U;
    msg.control_ent = 174U;
    msg.timeout = 0.705999000262;
    msg.loiter_radius = 0.536889930444;
    msg.altitude_interval = 0.062209689038;

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
    msg.setTimeStamp(0.833700967754);
    msg.setSource(58430U);
    msg.setSourceEntity(150U);
    msg.setDestination(44539U);
    msg.setDestinationEntity(163U);
    msg.control_src = 41038U;
    msg.control_ent = 184U;
    msg.timeout = 0.776008049411;
    msg.loiter_radius = 0.830580921106;
    msg.altitude_interval = 0.278165891723;

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
    msg.setTimeStamp(0.22394709387);
    msg.setSource(60061U);
    msg.setSourceEntity(148U);
    msg.setDestination(169U);
    msg.setDestinationEntity(92U);
    msg.flags = 239U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.238328906607;
    tmp_msg_0.speed_units = 77U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.431246817033;
    tmp_msg_1.z_units = 132U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.131040409736;
    msg.lon = 0.100216376624;
    msg.radius = 0.262998821262;

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
    msg.setTimeStamp(0.0723511824978);
    msg.setSource(12614U);
    msg.setSourceEntity(24U);
    msg.setDestination(52911U);
    msg.setDestinationEntity(160U);
    msg.flags = 236U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.990591637129;
    tmp_msg_0.speed_units = 10U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.898813283032;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.29820388442;
    msg.lon = 0.487489537914;
    msg.radius = 0.929784826817;

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
    msg.setTimeStamp(0.766225690264);
    msg.setSource(59829U);
    msg.setSourceEntity(93U);
    msg.setDestination(43291U);
    msg.setDestinationEntity(213U);
    msg.flags = 167U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.609326901534;
    tmp_msg_0.speed_units = 188U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.135087481982;
    tmp_msg_1.z_units = 171U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.611067355325;
    msg.lon = 0.312297514982;
    msg.radius = 0.802930199043;

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
    msg.setTimeStamp(0.678162991055);
    msg.setSource(58745U);
    msg.setSourceEntity(79U);
    msg.setDestination(31762U);
    msg.setDestinationEntity(123U);
    msg.control_src = 42983U;
    msg.control_ent = 10U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 69U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.951008633571;
    tmp_tmp_msg_0_0.speed_units = 108U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.990486882678;
    tmp_tmp_msg_0_1.z_units = 63U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.267697872368;
    tmp_msg_0.lon = 0.0563647265777;
    tmp_msg_0.radius = 0.319924409827;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 219U;

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
    msg.setTimeStamp(0.621071411404);
    msg.setSource(22159U);
    msg.setSourceEntity(111U);
    msg.setDestination(16828U);
    msg.setDestinationEntity(235U);
    msg.control_src = 54460U;
    msg.control_ent = 102U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 216U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.223990339936;
    tmp_tmp_msg_0_0.speed_units = 179U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.476019155419;
    tmp_tmp_msg_0_1.z_units = 134U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.275687186789;
    tmp_msg_0.lon = 0.199343879365;
    tmp_msg_0.radius = 0.170493210865;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 99U;

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
    msg.setTimeStamp(0.399584684404);
    msg.setSource(29009U);
    msg.setSourceEntity(181U);
    msg.setDestination(45518U);
    msg.setDestinationEntity(246U);
    msg.control_src = 35453U;
    msg.control_ent = 85U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 11U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.598984524079;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32669448645;
    tmp_tmp_msg_0_1.z_units = 150U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.382415809943;
    tmp_msg_0.lon = 0.431493784014;
    tmp_msg_0.radius = 0.3312522556;
    msg.reference.set(tmp_msg_0);
    msg.state = 57U;
    msg.proximity = 30U;

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
    msg.setTimeStamp(0.855047994879);
    msg.setSource(12568U);
    msg.setSourceEntity(36U);
    msg.setDestination(51403U);
    msg.setDestinationEntity(58U);
    msg.ax_cmd = 0.128871886798;
    msg.ay_cmd = 0.486443073814;
    msg.az_cmd = 0.966455170707;
    msg.ax_des = 0.805190372858;
    msg.ay_des = 0.787597407469;
    msg.az_des = 0.246564334249;
    msg.virt_err_x = 0.917581033647;
    msg.virt_err_y = 0.923505857981;
    msg.virt_err_z = 0.435656525418;
    msg.surf_fdbk_x = 0.215112907076;
    msg.surf_fdbk_y = 0.43246358177;
    msg.surf_fdbk_z = 0.374964249961;
    msg.surf_unkn_x = 0.0796386731041;
    msg.surf_unkn_y = 0.887209052876;
    msg.surf_unkn_z = 0.508053487046;
    msg.ss_x = 0.0890275317141;
    msg.ss_y = 0.629851648198;
    msg.ss_z = 0.884328613253;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("XDJYTXHUCPMWSZCIUYXHRGYRABPJPODWPWSQNKCSZYWPSMZNPNHPYELCPPJYUFNNAEITEDYPCNQGLLCYBZOVRSAKOLOKK");
    tmp_msg_0.dist = 0.668730837488;
    tmp_msg_0.err = 0.497102059987;
    tmp_msg_0.ctrl_imp = 0.072799450326;
    tmp_msg_0.rel_dir_x = 0.441963240085;
    tmp_msg_0.rel_dir_y = 0.953935692058;
    tmp_msg_0.rel_dir_z = 0.315907616148;
    tmp_msg_0.err_x = 0.169374701242;
    tmp_msg_0.err_y = 0.253761136251;
    tmp_msg_0.err_z = 0.807794053081;
    tmp_msg_0.rf_err_x = 0.882303438169;
    tmp_msg_0.rf_err_y = 0.696705408119;
    tmp_msg_0.rf_err_z = 0.35649725392;
    tmp_msg_0.rf_err_vx = 0.85853051842;
    tmp_msg_0.rf_err_vy = 0.797371042415;
    tmp_msg_0.rf_err_vz = 0.902327790348;
    tmp_msg_0.ss_x = 0.623516556032;
    tmp_msg_0.ss_y = 0.961616400593;
    tmp_msg_0.ss_z = 0.0619947495302;
    tmp_msg_0.virt_err_x = 0.407492256803;
    tmp_msg_0.virt_err_y = 0.0935078251752;
    tmp_msg_0.virt_err_z = 0.345962854903;
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
    msg.setTimeStamp(0.206740450471);
    msg.setSource(41223U);
    msg.setSourceEntity(96U);
    msg.setDestination(51827U);
    msg.setDestinationEntity(22U);
    msg.ax_cmd = 0.00389091387868;
    msg.ay_cmd = 0.0440906484883;
    msg.az_cmd = 0.824626736362;
    msg.ax_des = 0.687545370809;
    msg.ay_des = 0.282598162786;
    msg.az_des = 0.32338480446;
    msg.virt_err_x = 0.198203914373;
    msg.virt_err_y = 0.461590646206;
    msg.virt_err_z = 0.561928014271;
    msg.surf_fdbk_x = 0.703573112002;
    msg.surf_fdbk_y = 0.682506918246;
    msg.surf_fdbk_z = 0.89122536796;
    msg.surf_unkn_x = 0.383245471494;
    msg.surf_unkn_y = 0.430403771178;
    msg.surf_unkn_z = 0.911152107051;
    msg.ss_x = 0.826883395135;
    msg.ss_y = 0.976263149802;
    msg.ss_z = 0.36238320369;

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
    msg.setTimeStamp(0.8633278474);
    msg.setSource(22085U);
    msg.setSourceEntity(91U);
    msg.setDestination(60792U);
    msg.setDestinationEntity(245U);
    msg.ax_cmd = 0.839628866795;
    msg.ay_cmd = 0.82790787037;
    msg.az_cmd = 0.571033489195;
    msg.ax_des = 0.782848192957;
    msg.ay_des = 0.882562355213;
    msg.az_des = 0.370991733345;
    msg.virt_err_x = 0.621344714006;
    msg.virt_err_y = 0.882777967746;
    msg.virt_err_z = 0.272482520806;
    msg.surf_fdbk_x = 0.826130899728;
    msg.surf_fdbk_y = 0.493795580195;
    msg.surf_fdbk_z = 0.784656493395;
    msg.surf_unkn_x = 0.692898677274;
    msg.surf_unkn_y = 0.608004272105;
    msg.surf_unkn_z = 0.642693823759;
    msg.ss_x = 0.638367943552;
    msg.ss_y = 0.332517551856;
    msg.ss_z = 0.649923614363;

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
    msg.setTimeStamp(0.60355035838);
    msg.setSource(24812U);
    msg.setSourceEntity(92U);
    msg.setDestination(52855U);
    msg.setDestinationEntity(127U);
    msg.s_id.assign("BTUXBAGIHEJOEKRQVVFSLVWSRTTLMUFCQEPMIKUQSQGYAPNHPPJNRZOKSSSGPYORIXKBKPPHDUZRESYWTZYBOANNDMFOHAJYLQMYYBAAVZAIOYIMDBTJFDUFLMBKNWUGWNMRFSTWGRLDWWXHAGKOJFQBCGUQJDZEHTWWDJYXTEXROQVHXUFZMINLQXMAMUPIHVVCEGKFTEHCFJBQDRCPLJCGJZRICNPEXCADKCDVK");
    msg.dist = 0.298760680376;
    msg.err = 0.412285540704;
    msg.ctrl_imp = 0.9459307483;
    msg.rel_dir_x = 0.112747351373;
    msg.rel_dir_y = 0.13879784585;
    msg.rel_dir_z = 0.602117807202;
    msg.err_x = 0.9642129262;
    msg.err_y = 0.92494293101;
    msg.err_z = 0.618497707306;
    msg.rf_err_x = 0.988836229692;
    msg.rf_err_y = 0.0570670366688;
    msg.rf_err_z = 0.999761384467;
    msg.rf_err_vx = 0.105216869292;
    msg.rf_err_vy = 0.405918668414;
    msg.rf_err_vz = 0.0648983452053;
    msg.ss_x = 0.623967779271;
    msg.ss_y = 0.301458340857;
    msg.ss_z = 0.179687120087;
    msg.virt_err_x = 0.358662040071;
    msg.virt_err_y = 0.954350983679;
    msg.virt_err_z = 0.980830818293;

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
    msg.setTimeStamp(0.526608392024);
    msg.setSource(32230U);
    msg.setSourceEntity(34U);
    msg.setDestination(36182U);
    msg.setDestinationEntity(184U);
    msg.s_id.assign("KRUNIPXHNOXUQLVHPZWJYNKFRGLTIALEHAGMJZPNLBAXTJBTIMFBUVYVQYXKSIQNHLMUNCFFOKKDLNFJBPYTWRJOZTDVVMOGDEC");
    msg.dist = 0.129597009018;
    msg.err = 0.902539833161;
    msg.ctrl_imp = 0.0537225493396;
    msg.rel_dir_x = 0.209468343944;
    msg.rel_dir_y = 0.698782016004;
    msg.rel_dir_z = 0.216595527262;
    msg.err_x = 0.0271711298493;
    msg.err_y = 0.982651984397;
    msg.err_z = 0.71145952362;
    msg.rf_err_x = 0.446067810074;
    msg.rf_err_y = 0.17740832708;
    msg.rf_err_z = 0.0279816742545;
    msg.rf_err_vx = 0.931908875225;
    msg.rf_err_vy = 0.877412393315;
    msg.rf_err_vz = 0.93922730795;
    msg.ss_x = 0.143978521504;
    msg.ss_y = 0.85347725574;
    msg.ss_z = 0.250318029604;
    msg.virt_err_x = 0.0944272038715;
    msg.virt_err_y = 0.511115308834;
    msg.virt_err_z = 0.110076146375;

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
    msg.setTimeStamp(0.581904342483);
    msg.setSource(51461U);
    msg.setSourceEntity(118U);
    msg.setDestination(7131U);
    msg.setDestinationEntity(184U);
    msg.s_id.assign("ARYSZGARPGFAVBRWHOZNHRSXIUQTANLHDKFCSKYDOJADRGTXDOSYTRXKVKLNPUGDWJGBHEXODTOOBYCQBAFYTCHNZAGYOUPIIRCIUNZHQAQYIPMBHCMBLLFWJNSETMWSXTLQQYKMJLVZINJTEQZEJCWSIFDJPMKOGHMHSRLNMOXQLBXREPUYGVZWS");
    msg.dist = 0.976160939994;
    msg.err = 0.474635655934;
    msg.ctrl_imp = 0.0318689964098;
    msg.rel_dir_x = 0.687297593369;
    msg.rel_dir_y = 0.0290679358046;
    msg.rel_dir_z = 0.522817020746;
    msg.err_x = 0.269514591028;
    msg.err_y = 0.52831744485;
    msg.err_z = 0.774299340611;
    msg.rf_err_x = 0.152777881145;
    msg.rf_err_y = 0.571267786959;
    msg.rf_err_z = 0.590794675003;
    msg.rf_err_vx = 0.923743287168;
    msg.rf_err_vy = 0.667231631172;
    msg.rf_err_vz = 0.347373560218;
    msg.ss_x = 0.659872955043;
    msg.ss_y = 0.997675632627;
    msg.ss_z = 0.261277469585;
    msg.virt_err_x = 0.655147250335;
    msg.virt_err_y = 0.283798785448;
    msg.virt_err_z = 0.527286082158;

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
    msg.setTimeStamp(0.818665119641);
    msg.setSource(9333U);
    msg.setSourceEntity(138U);
    msg.setDestination(36421U);
    msg.setDestinationEntity(113U);
    msg.timeout = 5906U;
    msg.rpm = 0.978838456083;
    msg.direction = 252U;
    msg.custom.assign("NKQFCEYTCJIXCAGSYVFQRZUHAUXRIJCYWVLWMLVPPBXRHRWMQXTFFDSKRYBWKJIUNPMNARLFHYXQBOHYUACPGEIHMAJVQRDTEESEHVETDIKJVUODMKBSDXMERNHNZDMOBBTPQN");

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
    msg.setTimeStamp(0.0522640554394);
    msg.setSource(15749U);
    msg.setSourceEntity(212U);
    msg.setDestination(41857U);
    msg.setDestinationEntity(79U);
    msg.timeout = 4878U;
    msg.rpm = 0.986676667105;
    msg.direction = 139U;
    msg.custom.assign("SKQPTEBARHQMHIGICHE");

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
    msg.setTimeStamp(0.129740572572);
    msg.setSource(10818U);
    msg.setSourceEntity(204U);
    msg.setDestination(8979U);
    msg.setDestinationEntity(77U);
    msg.timeout = 39536U;
    msg.rpm = 0.662499918744;
    msg.direction = 102U;
    msg.custom.assign("TWDOCRIETSAOPCRZKKTBUKYGVRSYWRZLLVLTLHQCOFIZDIZHJXEPIOGFHOFNQLNKGULQMBWQMACIZIOZZNZUHDXVVFSBVPJEYNRERTRGNPHLSUGJSFKKDJSBKVHSXYQMTKMUYDWNMHAZSOPUGUJAJQPBNLEIXPCYLDPNDMSQSQQKUCEAXEWADFOWWBITDMVGCIFMCECVTBRFXBXNZFHBWTXPGYKVRB");

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
    msg.setTimeStamp(0.688322222665);
    msg.setSource(65216U);
    msg.setSourceEntity(102U);
    msg.setDestination(31852U);
    msg.setDestinationEntity(122U);
    msg.formation_name.assign("QLYIUYUHZZTBQVBJTVLJFMGBGBNUBGSHCODUMHFOTDEAVVXZRSKRJRGYGMQAUOAQDSWEXPSAOFLWKFNRIXTAPJQMWMRZXVUZNQYSLHSZJPGRSJCEOSVPIEQFGWRTAILYQCKZHWECKAYTCMF");
    msg.type = 179U;
    msg.op = 132U;
    msg.group_name.assign("MYVFYZXQDLANFAQLNUTJEIXKNUPDSJSDYXPL");
    msg.plan_id.assign("KDBQAYMJDBWGMALFTVDIZZQLKJSYMXLABJNSZLNPDKRZGTEY");
    msg.description.assign("UYDTYTJPWUEEAELTVZVGQIGBVSNVBONMMOSPKCHTKALBUTKQBCDJKCSXRJFXNSJHAXXQSWDHWXQLRMHQDUCYOIMBUZIONBNYXLIRWHYDDOYRFGTCBFRHRWZEGMVDZWYOLPLONGKTYJWXSRSGSAEAQFIILSNPCWUYQIAZCPAZEFUGGHPBUPDFEKVVMLZHQTAPLHMQQZBZVWSJXLJCMUTNJFXFRYRIDIJGDPVMZKEKKVEXEAGJAMRFINHON");
    msg.reference_frame = 41U;
    msg.leader_bank_lim = 0.544757155188;
    msg.leader_speed_min = 0.837786245625;
    msg.leader_speed_max = 0.716254051974;
    msg.leader_alt_min = 0.386295156872;
    msg.leader_alt_max = 0.35665740342;
    msg.pos_sim_err_lim = 0.845171828338;
    msg.pos_sim_err_wrn = 0.324180171255;
    msg.pos_sim_err_timeout = 20340U;
    msg.converg_max = 0.160329209268;
    msg.converg_timeout = 21695U;
    msg.comms_timeout = 10803U;
    msg.turb_lim = 0.557172548552;
    msg.custom.assign("VNEKWPNMUXSGFJBOCLDLGBQPKRFVUCJDEDSFCTVDPZKYSATIJCZWPILRIIB");

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
    msg.setTimeStamp(0.525165181058);
    msg.setSource(26390U);
    msg.setSourceEntity(177U);
    msg.setDestination(33605U);
    msg.setDestinationEntity(218U);
    msg.formation_name.assign("BIPJPTYBHIARSNDGZGRQUZGIWTXSNEMCMIFLYNV");
    msg.type = 66U;
    msg.op = 10U;
    msg.group_name.assign("JZVISPDBAYUIBWMQECKHVVRVYROPUSRSTHLGUXNZUCHJUPEWIPBLCRAZNDMXJGKKCETHEAKNXJZJWUHZFVGSMVXREYNYTBAKCMYXGZGOTIDLQFTPTBKMLKUTCFQMIFBUOAUFOWODCNCXLLPVGHNKYYANJSQAWMGEFENDYJJOGMWIVYPARL");
    msg.plan_id.assign("TMOABLDIHCAPKBJRDWMYKLIWRLFQJNHTDTHKXDSPJCULZKEYMJXGKYNVONXCECTJUKEVHZBSWPCFFTVU");
    msg.description.assign("FOFLFUULIUJSJFRSSSHJCJHVKEYFEXIGARAIRCSQGJ");
    msg.reference_frame = 203U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54518U;
    tmp_msg_0.off_x = 0.67010395388;
    tmp_msg_0.off_y = 0.598329975161;
    tmp_msg_0.off_z = 0.551420973609;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.190444039211;
    msg.leader_speed_min = 0.522569582275;
    msg.leader_speed_max = 0.385147357191;
    msg.leader_alt_min = 0.131353102164;
    msg.leader_alt_max = 0.658033158406;
    msg.pos_sim_err_lim = 0.898957064689;
    msg.pos_sim_err_wrn = 0.0978920174629;
    msg.pos_sim_err_timeout = 47722U;
    msg.converg_max = 0.863203810948;
    msg.converg_timeout = 25246U;
    msg.comms_timeout = 24883U;
    msg.turb_lim = 0.20202682963;
    msg.custom.assign("GHWYORWFYHYNZGFQVKBMQUUZEEYVIHCRQUIPV");

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
    msg.setTimeStamp(0.487368228812);
    msg.setSource(19335U);
    msg.setSourceEntity(50U);
    msg.setDestination(717U);
    msg.setDestinationEntity(151U);
    msg.formation_name.assign("WSIEYBLCVMAHREOZMQQGQZRHZMOOCXNKRJTMWEQFBSTMTWSUVCZYEYOXGZLFAFWUFDJVPGLFRMJDOFZCXNMSGFYZARBKYGVKARTVDYLCUKTMNPCHKODDXBZJDQNHHWFJSBNYGEROOUPNTT");
    msg.type = 145U;
    msg.op = 213U;
    msg.group_name.assign("AAVJAUNACQGMKYMLBKOZCJDWGVIRXLMCXZOPXLPFCERIMQIADBYJXYHDUCBUUFFTSVSLRTWVUPAKJHIKSDXIQVCQTFPMWZXCSDNNWRDHIWUZKOIAVUGVOEZPXRHFNECFALPNEQ");
    msg.plan_id.assign("MMSVHMUTIBOSPBUXLRQEBDSRZXEMNRWPGWWQYHATSJLBXRATTOALXBCPLSNUYLZZQKZWKVYKORJPAGQMCCLEEUQZXXGVPILWQYUGSNOMKNFFVRDQBWCKDMGOYDOZNRELUYDAGHFPFAHMCGVCKVRZEOZIPCAARISDEFOMFNCUTDVXWNIDDSCPIFIYJCWTJEWYQHXJUSO");
    msg.description.assign("OXQHAUYEMSZKTDYDNHIFKXYKBICRYVOGAZLFTNFYKAOTIBGCMWZOVMVYCRGQROQIYIIMDKHPZVSKBTROPEFKHLWMWQBSXXEQZEOGWQWLLMFMDFHLHWRZEUPAUGSVLQVBVRMNFQJEJPCRIAKSSUELQXNCECDRBSYGFSZYJVFKIGZITPHPHWNBOAATBELCO");
    msg.reference_frame = 40U;
    msg.leader_bank_lim = 0.205407001314;
    msg.leader_speed_min = 0.114578094853;
    msg.leader_speed_max = 0.850701141155;
    msg.leader_alt_min = 0.0787709750251;
    msg.leader_alt_max = 0.967077340526;
    msg.pos_sim_err_lim = 0.297499079092;
    msg.pos_sim_err_wrn = 0.649736299561;
    msg.pos_sim_err_timeout = 47836U;
    msg.converg_max = 0.736497638524;
    msg.converg_timeout = 32119U;
    msg.comms_timeout = 25490U;
    msg.turb_lim = 0.905578212274;
    msg.custom.assign("LEKPZVUWPVZFYKXADTZNYDPCEGKBLBNUBHAONVE");

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
    msg.setTimeStamp(0.272875969933);
    msg.setSource(14862U);
    msg.setSourceEntity(98U);
    msg.setDestination(3464U);
    msg.setDestinationEntity(68U);
    msg.timeout = 11643U;
    msg.lat = 0.66074296284;
    msg.lon = 0.645964798645;
    msg.z = 0.220987216456;
    msg.z_units = 35U;
    msg.speed = 0.375066301186;
    msg.speed_units = 222U;
    msg.custom.assign("AVSPRRQNDVELJPOZNQAKVUPEHNHBVTFKMTRYBSNBQMPGRJLTWMEXODQXZBFFTELSVHXJBMITWWPCYOAXVBRPCZONHUDCNBDDJYEZTZYCKAAKLFGWWGTYSJGIETE");

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
    msg.setTimeStamp(0.612598604827);
    msg.setSource(52449U);
    msg.setSourceEntity(73U);
    msg.setDestination(55790U);
    msg.setDestinationEntity(131U);
    msg.timeout = 28056U;
    msg.lat = 0.762127957466;
    msg.lon = 0.17597174528;
    msg.z = 0.677588603269;
    msg.z_units = 28U;
    msg.speed = 0.267181432804;
    msg.speed_units = 211U;
    msg.custom.assign("TCFFBFQUCGPHFII");

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
    msg.setTimeStamp(0.59841263638);
    msg.setSource(63581U);
    msg.setSourceEntity(223U);
    msg.setDestination(49920U);
    msg.setDestinationEntity(6U);
    msg.timeout = 40589U;
    msg.lat = 0.374152127771;
    msg.lon = 0.36257385165;
    msg.z = 0.956255890272;
    msg.z_units = 6U;
    msg.speed = 0.775275335902;
    msg.speed_units = 27U;
    msg.custom.assign("WWCPRLAIPRKYWHUBZPFDDCRSAEQIONXTGVNABMBRKJMBJGXKPQXJYSUVEFANXPNXHNBOBDNXYYTQCYZI");

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
    msg.setTimeStamp(0.658144433093);
    msg.setSource(27687U);
    msg.setSourceEntity(50U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(41U);
    msg.timeout = 1527U;
    msg.lat = 0.991190686226;
    msg.lon = 0.229026815588;
    msg.z = 0.236937602213;
    msg.z_units = 79U;
    msg.speed = 0.244248698367;
    msg.speed_units = 129U;
    msg.custom.assign("DAHAHYPYYEIMJDKSOLUYZPJNFHUXVURTZFWXIW");

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
    msg.setTimeStamp(0.799507721749);
    msg.setSource(38075U);
    msg.setSourceEntity(230U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(30U);
    msg.timeout = 31983U;
    msg.lat = 0.202620119209;
    msg.lon = 0.27840738914;
    msg.z = 0.555037366171;
    msg.z_units = 75U;
    msg.speed = 0.708369864613;
    msg.speed_units = 119U;
    msg.custom.assign("RGGBQGYERWLABCBGIHYWHSDBYJZFNLJYNUVZEGVLZLUTXGXKQOSIMNYGPYDUVEHVCLOYVDIRBIXQNZAUMZWFEDZCTHERZBXXHVOWRPIMSWYDROCMHMSOXKOALCKJZAKWTJXKXNAJMRISOYOTWRPXPPYPOIGTDMFJLSDOCCNCIUQATSFHSFUQRPMKHQSLVVGKXPUJFNTCZWNTWFUEEEIHMFFUMEQTPZSEVWKLAJKTDBAQPHJLAJQGDRB");

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
    msg.setTimeStamp(0.792382016672);
    msg.setSource(61103U);
    msg.setSourceEntity(81U);
    msg.setDestination(41335U);
    msg.setDestinationEntity(196U);
    msg.timeout = 24509U;
    msg.lat = 0.239412824971;
    msg.lon = 0.309688194227;
    msg.z = 0.702084813242;
    msg.z_units = 182U;
    msg.speed = 0.0271304454199;
    msg.speed_units = 242U;
    msg.custom.assign("MHPGFLVIZVYLJAAZQBEZDBDITOFNHLJTWJQZHWQEIOMVUOBNTKCMGKGADHMIARYYCRRAKOPXBEQBUQFUMLPHNCEAAUROLVSXPVYFKUUHZMXUDJEITGGVOFQXSJFOZCWFSGRGLUNYFTODLNCNBQLRWXTATCCUXBIOMLPGDRRJZJPGUVMYWELAYS");

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
    msg.setTimeStamp(0.194460233803);
    msg.setSource(22063U);
    msg.setSourceEntity(22U);
    msg.setDestination(18603U);
    msg.setDestinationEntity(50U);
    msg.arrival_time = 0.737969445038;
    msg.lat = 0.146771071388;
    msg.lon = 0.146463234643;
    msg.z = 0.901806634386;
    msg.z_units = 166U;
    msg.travel_z = 0.715993308495;
    msg.travel_z_units = 153U;
    msg.delayed = 35U;

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
    msg.setTimeStamp(0.757698226179);
    msg.setSource(31972U);
    msg.setSourceEntity(125U);
    msg.setDestination(3966U);
    msg.setDestinationEntity(18U);
    msg.arrival_time = 0.430864447054;
    msg.lat = 0.371560553784;
    msg.lon = 0.923721115614;
    msg.z = 0.906364694181;
    msg.z_units = 209U;
    msg.travel_z = 0.465373127516;
    msg.travel_z_units = 247U;
    msg.delayed = 11U;

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
    msg.setTimeStamp(0.749680331424);
    msg.setSource(46108U);
    msg.setSourceEntity(199U);
    msg.setDestination(32677U);
    msg.setDestinationEntity(90U);
    msg.arrival_time = 0.350664918054;
    msg.lat = 0.653305718065;
    msg.lon = 0.690012575944;
    msg.z = 0.949742667591;
    msg.z_units = 177U;
    msg.travel_z = 0.209663959193;
    msg.travel_z_units = 166U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.858305338097);
    msg.setSource(25052U);
    msg.setSourceEntity(89U);
    msg.setDestination(316U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.480476505199;
    msg.lon = 0.836806140471;
    msg.z = 0.463960659929;
    msg.z_units = 35U;
    msg.speed = 0.489668458317;
    msg.speed_units = 29U;
    msg.bearing = 0.490347872226;
    msg.cross_angle = 0.516718828307;
    msg.width = 0.716685397616;
    msg.length = 0.797259121699;
    msg.coff = 7U;
    msg.angaperture = 0.781508731303;
    msg.range = 45668U;
    msg.overlap = 185U;
    msg.flags = 31U;
    msg.custom.assign("LYJAAQEVZCOJKFYZLBIKNMKNMDTTAAOFVOHZDBHRBURDYBNURWDOJKKWIQDINVLBYVCYFPHII");

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
    msg.setTimeStamp(0.994595042967);
    msg.setSource(50512U);
    msg.setSourceEntity(179U);
    msg.setDestination(54386U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.0181242288674;
    msg.lon = 0.436975680098;
    msg.z = 0.304223950862;
    msg.z_units = 190U;
    msg.speed = 0.668723553502;
    msg.speed_units = 4U;
    msg.bearing = 0.244128503443;
    msg.cross_angle = 0.759844813194;
    msg.width = 0.85330469073;
    msg.length = 0.150551199196;
    msg.coff = 66U;
    msg.angaperture = 0.604519976953;
    msg.range = 18645U;
    msg.overlap = 111U;
    msg.flags = 50U;
    msg.custom.assign("NAJSPPUFSUBZXISRCFVWIXDKDBFTHOLOMSWGF");

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
    msg.setTimeStamp(0.961691978361);
    msg.setSource(62448U);
    msg.setSourceEntity(164U);
    msg.setDestination(51191U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.289480828284;
    msg.lon = 0.510862015507;
    msg.z = 0.937471691496;
    msg.z_units = 23U;
    msg.speed = 0.831492455013;
    msg.speed_units = 150U;
    msg.bearing = 0.261357809181;
    msg.cross_angle = 0.328891533722;
    msg.width = 0.588302477364;
    msg.length = 0.482733811279;
    msg.coff = 109U;
    msg.angaperture = 0.676762590767;
    msg.range = 15060U;
    msg.overlap = 151U;
    msg.flags = 187U;
    msg.custom.assign("YJSTTQXRLWKLJHSNXYQAAVRLDBZVMMSOODULVHGZFZACRBLQIAJPCEPPABKGSGKEUIOUCKGWRNLEXUBMJUZIXVHYEPQJWSTIHRLPXJWVDNWQBWKULZVOOTMBFFJDPTTKVOXRXNZDUTNUCFQWUFHMUGIHVJYCSIMIDDLNRYMPXYYHAXCXSOOERBKQNEDKEZGTNNTBMMJOP");

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
    msg.setTimeStamp(0.131439557785);
    msg.setSource(15144U);
    msg.setSourceEntity(109U);
    msg.setDestination(51593U);
    msg.setDestinationEntity(124U);
    msg.timeout = 44500U;
    msg.lat = 0.0323699942455;
    msg.lon = 0.606372456637;
    msg.z = 0.779432462294;
    msg.z_units = 145U;
    msg.speed = 0.416655124572;
    msg.speed_units = 84U;
    msg.syringe0 = 49U;
    msg.syringe1 = 227U;
    msg.syringe2 = 241U;
    msg.custom.assign("XYAQLJTPDHEKLVUGWVCHUOAFXOBMFTFENPMNUORMDWEIUWUXQATBIIMVOCVZSGUVSBKAHDFANELVQEXHUYNDZJJMGWKTTAKYZCASPJF");

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
    msg.setTimeStamp(0.0492148349144);
    msg.setSource(46161U);
    msg.setSourceEntity(93U);
    msg.setDestination(40737U);
    msg.setDestinationEntity(18U);
    msg.timeout = 47569U;
    msg.lat = 0.0506327074629;
    msg.lon = 0.598771471738;
    msg.z = 0.665165241204;
    msg.z_units = 114U;
    msg.speed = 0.757159995051;
    msg.speed_units = 153U;
    msg.syringe0 = 208U;
    msg.syringe1 = 252U;
    msg.syringe2 = 36U;
    msg.custom.assign("QVZWYOAWAYJGZOLIXZYXDZPUQIBWPOLJNRSNBMEQWCQUZQCNBIFNJVNWWNRE");

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
    msg.setTimeStamp(0.472542860908);
    msg.setSource(62427U);
    msg.setSourceEntity(175U);
    msg.setDestination(19594U);
    msg.setDestinationEntity(114U);
    msg.timeout = 420U;
    msg.lat = 0.42213400509;
    msg.lon = 0.90106327264;
    msg.z = 0.346892352124;
    msg.z_units = 75U;
    msg.speed = 0.394692321032;
    msg.speed_units = 231U;
    msg.syringe0 = 246U;
    msg.syringe1 = 103U;
    msg.syringe2 = 23U;
    msg.custom.assign("FHRFTDZHFVQZGBEWOQLNJMVTNUIVKRUQAUHHOQRLNUGKVLARFBYNRJPNNNFUGXSVYMCCWFESOOUGKEOTVQALDZMTXNAUSMZEATZHUZHYMHCHQUGLTBYGFXWJZJPTSKOBOCMCVDEXPJBKXPIGYRAOSGW");

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
    msg.setTimeStamp(0.151774449994);
    msg.setSource(59271U);
    msg.setSourceEntity(210U);
    msg.setDestination(23899U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.570101283899);
    msg.setSource(56613U);
    msg.setSourceEntity(35U);
    msg.setDestination(33835U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.645033712695);
    msg.setSource(24899U);
    msg.setSourceEntity(90U);
    msg.setDestination(28952U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.892172032026);
    msg.setSource(57546U);
    msg.setSourceEntity(44U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.134026760347;
    msg.lon = 0.913864777348;
    msg.z = 0.315425381357;
    msg.z_units = 53U;
    msg.speed = 0.97275603611;
    msg.speed_units = 175U;
    msg.takeoff_pitch = 0.0446712118028;
    msg.custom.assign("YUHRVZLQKIDWMMPZJMJJWGJQPOEFIGCTFFOVYCAIXUHNNRTELUQMYYETQJKXNUBGKCPFISLZIKIGZHOHXBAILORNAQGPOMTLOLVWLZFTZOXISVZERCXKUMHBNBXABPDBDSHBYQDQDEDHEAUVZASADNUNJYIRMJDCTZVPQOFSGFBXPYMGWHFEMZXYSNHWWQNTL");

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
    msg.setTimeStamp(0.0553894808576);
    msg.setSource(21957U);
    msg.setSourceEntity(42U);
    msg.setDestination(43913U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.199037729598;
    msg.lon = 0.614683479903;
    msg.z = 0.941445669481;
    msg.z_units = 122U;
    msg.speed = 0.490002839161;
    msg.speed_units = 118U;
    msg.takeoff_pitch = 0.516457835171;
    msg.custom.assign("HWHEBYUGBTWAMTIXAMOKMRMRQVRHTYKLPRMPNKFPOKUZVEYJZVSIBNUTZBNMHBDWCAHFXMSPLJFWBARWWVJYNWQTHLCFZLWGXNZRNSDUOBDQGJVJXFDEJQUQEHMSDVZKQOTQ");

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
    msg.setTimeStamp(0.88667718423);
    msg.setSource(53754U);
    msg.setSourceEntity(45U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.859965669099;
    msg.lon = 0.853418002233;
    msg.z = 0.691665910844;
    msg.z_units = 102U;
    msg.speed = 0.900213784542;
    msg.speed_units = 192U;
    msg.takeoff_pitch = 0.624794728651;
    msg.custom.assign("MXTDCZTWTIQZJNVOHAREKFZUY");

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
    msg.setTimeStamp(0.917319453731);
    msg.setSource(29900U);
    msg.setSourceEntity(0U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.527231632055;
    msg.lon = 0.544585678732;
    msg.z = 0.235207028153;
    msg.z_units = 241U;
    msg.speed = 0.126908811377;
    msg.speed_units = 53U;
    msg.abort_z = 0.907168703832;
    msg.bearing = 0.554857920112;
    msg.glide_slope = 130U;
    msg.glide_slope_alt = 0.227370862831;
    msg.custom.assign("MZCDOFZNGCFSJRNYCMPEKXAHSWKYXTTQFPSUXNRTHNNXPUKKUQQAGZKCYSQAAVJI");

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
    msg.setTimeStamp(0.119161578453);
    msg.setSource(20302U);
    msg.setSourceEntity(200U);
    msg.setDestination(35536U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.632874774171;
    msg.lon = 0.638575178839;
    msg.z = 0.261577071343;
    msg.z_units = 156U;
    msg.speed = 0.875338623232;
    msg.speed_units = 46U;
    msg.abort_z = 0.951313358113;
    msg.bearing = 0.367775829363;
    msg.glide_slope = 196U;
    msg.glide_slope_alt = 0.961242375575;
    msg.custom.assign("EGETPDUMKRZCJUWPDYPMMLQYNQRPKXOSBYCHIZYUMMQRAJBWCFWHEVUGMNSJHXXUZUZL");

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
    msg.setTimeStamp(0.279659754502);
    msg.setSource(45210U);
    msg.setSourceEntity(86U);
    msg.setDestination(19860U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.191165206819;
    msg.lon = 0.460145242866;
    msg.z = 0.61022334663;
    msg.z_units = 96U;
    msg.speed = 0.606754197308;
    msg.speed_units = 178U;
    msg.abort_z = 0.916143840623;
    msg.bearing = 0.859922321439;
    msg.glide_slope = 221U;
    msg.glide_slope_alt = 0.30161146498;
    msg.custom.assign("LYJYABQAODZOUKUFHLIFWDQWXAUAMNROGAJRKDNBKKMTXJPZFJGJOJJBVAPHTGWGTFYTGSNTGONMEERHBIZLYTQCKRXCRDKBYRHUXSCPLUWOOZIQKHCICYVGJJEWFLWTSKVLWBOMGGMXMCPYDQPUPNPAZDMESUSVXURACSZGVHZVVKSAUXILDDNFYIYNZIZPN");

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
    msg.setTimeStamp(0.496258118769);
    msg.setSource(1969U);
    msg.setSourceEntity(190U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.676414731886;
    msg.lon = 0.683089014564;
    msg.speed = 0.0780827457373;
    msg.speed_units = 168U;
    msg.limits = 167U;
    msg.max_depth = 0.584819101288;
    msg.min_alt = 0.818564083041;
    msg.time_limit = 0.12300463198;
    msg.controller.assign("SZHLPRGWEYTGHNUSBLIOYWYFKRHLTJBAZOBURZPHTTDOBJTNBOKVWHQJENNPJBZLMXBGCMDXSISMFGNRDFVWEMOGRFRAZWAEZJPHXXODPICKUHKELCDCU");
    msg.custom.assign("KFMBQEJYAKUXGKKQZFPSPCMEZTKLHDOMQIBYUZGIBOLINDGRSEJEKWLWSQWYXAYFDQYPHVNTRPSANADRGTWCHKKMWWEUDGMARDEVHVHWDNOBUAHBYLGHIUCBVFEXZIOVQPG");

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
    msg.setTimeStamp(0.506699464886);
    msg.setSource(52293U);
    msg.setSourceEntity(31U);
    msg.setDestination(55077U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.374523642863;
    msg.lon = 0.360022127961;
    msg.speed = 0.812975843563;
    msg.speed_units = 215U;
    msg.limits = 219U;
    msg.max_depth = 0.00988022464204;
    msg.min_alt = 0.463929706278;
    msg.time_limit = 0.459814456449;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.412843489113;
    tmp_msg_0.lon = 0.222928101454;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("RBPBZRJBBTSIWROHQLNWKASGCTGEVTOMHQGVDEZWA");
    msg.custom.assign("RVLUDWQQRYTZCZHMIUZLFVXJUAKYRSNSMHFXNWGBQUQJBACACQPXWSRJQALDYVYFULNNWZJPUWQPTCFNETTUSREIKGTWCMLKI");

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
    msg.setTimeStamp(0.188321919213);
    msg.setSource(54699U);
    msg.setSourceEntity(201U);
    msg.setDestination(44895U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.129283938184;
    msg.lon = 0.988032716161;
    msg.speed = 0.871138543916;
    msg.speed_units = 108U;
    msg.limits = 109U;
    msg.max_depth = 0.163388579486;
    msg.min_alt = 0.169209792495;
    msg.time_limit = 0.353611014465;
    msg.controller.assign("MVSBRDBHJMXAUEUVYRMZKJDHPVPHMPYVQGFGXPHLDCSEXFZGGWFQVBOFQAGNKJVIVGXVJYROHLCYTXWUVSPSHODJTMWHYKHFHZLFCSANAMUQEDPGUXICONUDOJQATIYFGDKCGRAQTCNBQADNNVXRALPOUWYLDECJMFTEBWTSQZRLLMNPLDIKNTCJBBMXCRIU");
    msg.custom.assign("WFNXGMSYHCVQITUVLNETNDQCEMLNTPYMIQTWLGZCGYFRFBLOVFGQFVLRNSTDGVWNXMCLLVCHYFCPNSQCPZYYUEPEKOXHKUMUSOHGUDBVBMYDTVSXBLIIJPQOMEPCOMUJRIQHRIBAJEAB");

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
    msg.setTimeStamp(0.111208435518);
    msg.setSource(21381U);
    msg.setSourceEntity(19U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(77U);
    msg.target.assign("KIOBQMMBVOBOXOUZVBAHVQOHIZSTYNFMCDORKMZSYHVRVDQWKGAXDSVNYBAQNKJKJEGPDRZDLDEXLHQAEXXQKVSKUAUXLKPJGTSRHUPBMPZSDOCZNDRNNFMQLVHIKVBJRPSTHGCHLTUEZCPNWUUGALMFMPCIIZOEOD");
    msg.max_speed = 0.580401312552;
    msg.speed_units = 30U;
    msg.lat = 0.0429523907067;
    msg.lon = 0.397230627254;
    msg.z = 0.234144748843;
    msg.z_units = 151U;
    msg.custom.assign("MNRMCHERYHCUXHBMOJILIZYNGIZGBVVJDHLTBPLLEUTLXXVPGWTEMANAZUC");

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
    msg.setTimeStamp(0.320083326729);
    msg.setSource(24381U);
    msg.setSourceEntity(28U);
    msg.setDestination(37176U);
    msg.setDestinationEntity(16U);
    msg.target.assign("SKXKAAHZGVGETCEXQLKTBVRQZJWIXBYCEFNBXUHRMLARFPJUYNZSUCMBXIMJPTKWOYGFSTHXHPUKBINFMDCALDOXEUFGVVDICFLNFGPTPOPYEBCEJWNHPDKCJAWKWRLPUJRRIYHLWFRQCIQMWSSJFZ");
    msg.max_speed = 0.722023691641;
    msg.speed_units = 205U;
    msg.lat = 0.230984731215;
    msg.lon = 0.504908505542;
    msg.z = 0.717555208361;
    msg.z_units = 131U;
    msg.custom.assign("YCLBUFQSZODKGVTQUSCLCTJKDDJGCLZDAZWMOWXJBTDKJYRCWHRGMGPANGWIMIHWGIKEQVSARJURNLFSCOJTBOMZYTNCXPOMDSWNWYAAAMDRXXVDEIVYECLPOLUENKXBKFDZQGPANAJPKJNPQIOVIHCQVJWVWMEGZKRHRXUFPYGZWEHDNLVZHFNLJFEFVXZHPUQBSLAQMHQEYFOXKRMGKTRUISFUZIHSOIMYTSBTBBQYNRVHUEBYABPXTIFET");

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
    msg.setTimeStamp(0.946735570038);
    msg.setSource(5401U);
    msg.setSourceEntity(17U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(117U);
    msg.target.assign("IXZNMJDTBTUAMVNBUYDMFYFEKQZDYTPGKDBWWHVGZIVTWWSODNLERLSTWFKXVIMMRHDKABXMBCTWAXNBNCGGUKXOHCTFEBSFWDXNUPRAXGCRJFZYPYQQRXHPVCJAFMUYOLRXJHUYFPCRZHVGLFCONKSTRKQOJLQKDEVEERMRSTEHINYDAEXYUZKLVGIBIJHTSGLOSHCOQBUWANULMHWNQQUJ");
    msg.max_speed = 0.694112220179;
    msg.speed_units = 176U;
    msg.lat = 0.721950770905;
    msg.lon = 0.37849574166;
    msg.z = 0.984736804148;
    msg.z_units = 50U;
    msg.custom.assign("ZWBLPAPNZUFABFULZRQFEMVTFSEKSVVOJXXODXKLEWTYEGBAIMYDAUGGRKAXIKSPAJQZSDFENFZPTIFQXKCNDQXYFNBOLOJURJLTYLZIEIVSBKHW");

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
    msg.setTimeStamp(0.274042797698);
    msg.setSource(42721U);
    msg.setSourceEntity(9U);
    msg.setDestination(39549U);
    msg.setDestinationEntity(62U);
    msg.timeout = 22739U;
    msg.lat = 0.345045515936;
    msg.lon = 0.725860922461;
    msg.speed = 0.922922746921;
    msg.speed_units = 196U;
    msg.custom.assign("QIQYVYMWUEEXNBDULUPJRHKMXDYVSQSWYONYOYICKNNLIKYPUNMIVYFIJWLHHCNRJOKATEHSWCDPQZTXPHAPEWFXHCYJBRVRFALKPUAXZVGHQHDFCUFPRPSZBJCSWIXDTXFOKCOGXBSEAETQEDIMDGSKCGLKRPJXTUGBEBATBHMJOWOZTLUZEGFVJFZQWKOGOMNZVNVLFYANGGHBEQPTMRFBQATZBR");

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
    msg.setTimeStamp(0.690763804305);
    msg.setSource(49973U);
    msg.setSourceEntity(53U);
    msg.setDestination(12812U);
    msg.setDestinationEntity(115U);
    msg.timeout = 5846U;
    msg.lat = 0.142511571024;
    msg.lon = 0.619170034392;
    msg.speed = 0.84149883544;
    msg.speed_units = 33U;
    msg.custom.assign("TLQUDJLMOCRBUGXEIHMQRMEURRKFBKHVMPRPAJFPAMMLYZNUZIOPULSHPGWSLACHFLQBKSYNZIXXWVNARDGZRTQQEWDTDIXTZKCUVAZOGCKEWBIBLVVDWJMSCNYKDJUWAKGMYCJFS");

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
    msg.setTimeStamp(0.551527629198);
    msg.setSource(33641U);
    msg.setSourceEntity(99U);
    msg.setDestination(38112U);
    msg.setDestinationEntity(231U);
    msg.timeout = 44067U;
    msg.lat = 0.454241075427;
    msg.lon = 0.998808716188;
    msg.speed = 0.231224166592;
    msg.speed_units = 151U;
    msg.custom.assign("JPEHNGSZRRPCLGNBQFAVTBXLS");

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
    msg.setTimeStamp(0.48489784623);
    msg.setSource(42790U);
    msg.setSourceEntity(187U);
    msg.setDestination(25573U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.203815838332;
    msg.lon = 0.481662081507;
    msg.z = 0.733356502704;
    msg.z_units = 94U;
    msg.radius = 0.151499387348;
    msg.duration = 55539U;
    msg.speed = 0.205437847584;
    msg.speed_units = 211U;
    msg.popup_period = 21204U;
    msg.popup_duration = 47517U;
    msg.flags = 23U;
    msg.custom.assign("XRBYFFJSAQCILZHHQPDZJYLNHTZRMUKPHSRMECDWVKDQJSDBYOGUATNIISNFBGBBQEXTVIWFPOJNVTZRLXNZOEMULLFORWIIPKMXUCZJAAKQDFIOAJIWPGAYHUTGPRPCUEGIYVHCYJLMPXVLRGYIXKWBEGXVAJQZGOTDOCXDRTRKVQM");

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
    msg.setTimeStamp(0.738222648269);
    msg.setSource(53994U);
    msg.setSourceEntity(45U);
    msg.setDestination(40370U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.801950970607;
    msg.lon = 0.200021940709;
    msg.z = 0.969276216695;
    msg.z_units = 140U;
    msg.radius = 0.998073271792;
    msg.duration = 42971U;
    msg.speed = 0.145994620662;
    msg.speed_units = 124U;
    msg.popup_period = 32631U;
    msg.popup_duration = 3728U;
    msg.flags = 36U;
    msg.custom.assign("CTTPYUBDWJXOTDABHRLSOUPSDMFZPXITIVOVTEAKJWKWCCVFUQQPSETXBLONDDWQIOUFUPNJSQBJCLTZYZLDGCETEXSAXLIIVUYRKSNWNRNJFHVUMZNRLUIYKGHGJKAGYDVIZQJDZRXGMMAGVOEQKUKHEFQN");

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
    msg.setTimeStamp(0.489477202896);
    msg.setSource(15529U);
    msg.setSourceEntity(160U);
    msg.setDestination(225U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.371524652406;
    msg.lon = 0.444078866063;
    msg.z = 0.596513095714;
    msg.z_units = 25U;
    msg.radius = 0.0717659631356;
    msg.duration = 40985U;
    msg.speed = 0.585007576913;
    msg.speed_units = 140U;
    msg.popup_period = 19807U;
    msg.popup_duration = 16653U;
    msg.flags = 39U;
    msg.custom.assign("BDZBIQDHPJZVFYPTBDKUHAQLWXLJUFVHBKZEXIMRBQSCBGJQDMEKVYYVGWVWYGTTGXGPCNLAFGTWGTNOPGBIJFMYCCHCADNHAIXSRWOOVYJTFMQCYKMFSCLXPUTUULGREZSXBUCDQMOJNSIRDIZZAOJNTFINELHJKNLMAH");

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
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.0034398296869);
    msg.setSource(34068U);
    msg.setSourceEntity(64U);
    msg.setDestination(35936U);
    msg.setDestinationEntity(174U);
    msg.timeout = 12409U;
    msg.lat = 0.243014906334;
    msg.lon = 0.714813726322;
    msg.z = 0.624260302026;
    msg.z_units = 212U;
    msg.speed = 0.132538396811;
    msg.speed_units = 133U;
    msg.bearing = 0.610835105752;
    msg.width = 0.827261372144;
    msg.direction = 46U;
    msg.custom.assign("RYGURMOXBZXNTWHDRIJNOJNOEJDVCKLYCTMCGRRSQEHVTWGCZPLNYBWKBHTCFWYHZZBZIFICPEVGLILOVZAALXXGIWQXJQPSUDXGVZSTOBDPQAYVWMILKSSPLDZTXIAWPJUWKIKOBYE");

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
    msg.setTimeStamp(0.704935629531);
    msg.setSource(39246U);
    msg.setSourceEntity(44U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(53U);
    msg.timeout = 16451U;
    msg.lat = 0.0975118938675;
    msg.lon = 0.711612761556;
    msg.z = 0.799582845225;
    msg.z_units = 204U;
    msg.speed = 0.289282595564;
    msg.speed_units = 90U;
    msg.bearing = 0.739414574605;
    msg.width = 0.483911986831;
    msg.direction = 93U;
    msg.custom.assign("VCSJWNEEDSBGTNYMXWUJAOOWNGGXVAGHCRPTQCCURNZUSQRQCUMWJLFTSSAECYESQJRNFGOJICDYTWZRHHSFYHDEZZYZOUDKNBJDBKAYZRFLQFQOEKNRZVZCLIVPSQIAXCLIPMMYTZTEIAKXPQBOIUMONHLMZNVDEKTKXPXFWKFPGCUGVMTMVRHINBKOUQIHYQIKBEBVXKIHUYLYPJLPTWASRJBAVALXXBGLDVRUPGMJJ");

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
    msg.setTimeStamp(0.836568953186);
    msg.setSource(25077U);
    msg.setSourceEntity(252U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(55U);
    msg.timeout = 8042U;
    msg.lat = 0.781926628752;
    msg.lon = 0.249143389322;
    msg.z = 0.850698193181;
    msg.z_units = 236U;
    msg.speed = 0.720741763068;
    msg.speed_units = 104U;
    msg.bearing = 0.268747043144;
    msg.width = 0.264360218961;
    msg.direction = 166U;
    msg.custom.assign("QDIRIKNQBDUGKP");

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
    msg.setTimeStamp(0.0837634248213);
    msg.setSource(390U);
    msg.setSourceEntity(229U);
    msg.setDestination(17601U);
    msg.setDestinationEntity(146U);
    msg.op_mode = 95U;
    msg.error_count = 32U;
    msg.error_ents.assign("FORLJKOWXFPIXRTPVMZUBWTXLHGKCAIZLVXZWLIGYUGAMHKVDTHYMSCJNFMNPBWCCZDKJXYOCWTZBWCVGANLEOQBAAEMHIPAOWFMIOOYCIQBRQDKMOUBVKBUUPGRXGJNFLOARVSRMPWFHJCFEDKDFAEVYT");
    msg.maneuver_type = 62532U;
    msg.maneuver_stime = 0.00934815624368;
    msg.maneuver_eta = 26480U;
    msg.control_loops = 1002784892U;
    msg.flags = 233U;
    msg.last_error.assign("UYJFGDDADFVLYVUUYIOSFGYYSUKTOLIOGVTGSQHQUAKX");
    msg.last_error_time = 0.200622717175;

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
    msg.setTimeStamp(0.285158315306);
    msg.setSource(21634U);
    msg.setSourceEntity(63U);
    msg.setDestination(51613U);
    msg.setDestinationEntity(221U);
    msg.op_mode = 152U;
    msg.error_count = 112U;
    msg.error_ents.assign("WVPGWFYGEPWLRJMVWMYXNZQVAUHODHFSRBWNKDEDWCITZKKAJOAKLSQPBAOIFEZXNGTOFZBERSLTHADZRCZPXJKZYMNLKNLGAXVOIIMQEQZPVOIQJVBODGLWHTRHIVJBQMUYJARRHXDKCYEKPCYVNIFSESLVETEQTMGCIFHNUSRAURKUSYAUTUQLYGOWTLVQXQXIN");
    msg.maneuver_type = 58347U;
    msg.maneuver_stime = 0.663842313617;
    msg.maneuver_eta = 6010U;
    msg.control_loops = 2754026732U;
    msg.flags = 50U;
    msg.last_error.assign("OZMFMHDZALHWQAGAGDKJRTZRXOHCYICIFVUQQIPZSSXETNXMJGLNPSHUNKABQBOCFNRGMRMQTNUEACICXFTMFXMZFPGYDFCGAWVYBXSIIVUBCGCPXWLTMK");
    msg.last_error_time = 0.369158615561;

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
    msg.setTimeStamp(0.7366155519);
    msg.setSource(37482U);
    msg.setSourceEntity(219U);
    msg.setDestination(40692U);
    msg.setDestinationEntity(164U);
    msg.op_mode = 109U;
    msg.error_count = 193U;
    msg.error_ents.assign("QSQERPFTWOZTGBLOIXKVMHKSTHGKRTLCBZCUADJCTJFTVLVOVMGUMWUEMVJQHDQSFIPAGWMZNXDEYPXNMOIPGNESLWLREIKLDTHEWQICJKQSYBMRISNRVYUZDPUVMBFHALJONWLUBYKCIYGSYGQINNICHXMKSAAEHEGVBZCKXGMZWIX");
    msg.maneuver_type = 21579U;
    msg.maneuver_stime = 0.824980568598;
    msg.maneuver_eta = 39980U;
    msg.control_loops = 3993665262U;
    msg.flags = 101U;
    msg.last_error.assign("QTTSEQJCZDYKFLCXETPQXYBQUOWKUDPLWLDGFIKMGEHZOXNVDZHIFBODXHAIJYZWPLTAQUZIICGYL");
    msg.last_error_time = 0.89157434498;

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
    msg.setTimeStamp(0.38799988411);
    msg.setSource(56156U);
    msg.setSourceEntity(202U);
    msg.setDestination(22174U);
    msg.setDestinationEntity(198U);
    msg.type = 131U;
    msg.request_id = 23968U;
    msg.command = 253U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 4805U;
    tmp_msg_0.lat = 0.787643362456;
    tmp_msg_0.lon = 0.537148439572;
    tmp_msg_0.z = 0.0227321777246;
    tmp_msg_0.z_units = 44U;
    tmp_msg_0.speed = 0.575368200403;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.custom.assign("IVDPYYHCROKDFLNQGAUMEAXPMOJBOYHKIDVAHPDQMNWKLPUTRVOQKFDWMLPXLRGHAPSEKJLWZANDMUWOKLDSYAJLEVWTYQQUYGOJVVXHNFVBPOWTFXMBCYGFRZSWDFKJUXHCLTRBAGORVUYENGBTGJIXWQNCUEGMECBISKBKQFZEVTIZGJOPZCHNXNMQSSNZXZDZYSZRAVSSFUTIFKHETIURURCCHP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50339U;
    msg.info.assign("XCJQDEKQFQLUJUJVVPDWJFHKVLONEGI");

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
    msg.setTimeStamp(0.560174033864);
    msg.setSource(52378U);
    msg.setSourceEntity(123U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(32U);
    msg.type = 11U;
    msg.request_id = 34250U;
    msg.command = 210U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 4945U;
    tmp_msg_0.lat = 0.129760581547;
    tmp_msg_0.lon = 0.43210732627;
    tmp_msg_0.z = 0.572149270045;
    tmp_msg_0.z_units = 220U;
    tmp_msg_0.amplitude = 0.861871479796;
    tmp_msg_0.pitch = 0.531204660818;
    tmp_msg_0.speed = 0.147911406989;
    tmp_msg_0.speed_units = 23U;
    tmp_msg_0.custom.assign("CYOQHOLTQKKHIVYIRQWMBHGXRVLKPSXREWWOUPDDXRNUEJZTJBBEZWIGVNVFNPWAYHCKUASCPLRIIKNBSDCOESEAMTAFMMWPOAUZFOOQXBTGPCERNYJACNSDTDLJUMYORKALUNDFVOBXSGORMTCBIKHEZUQDYYQWIULQZJZKQYCJTQZVFNSHXJDEWXTIGLITFVNSRBHSVC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20214U;
    msg.info.assign("FHCDKQKEBNOYOSCVSFNIURVRVKZTXMDJWCAVHIKIEJEQGQNMXVKJFKYVTNZETPGSXRRZOAKFLBUNSMESHIVTLIXTEFWEPGTJUQZBYWWHABGZJFVBWPUYPOMDNKTTJJQPSRFSLZHFGXBGT");

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
    msg.setTimeStamp(0.735774485279);
    msg.setSource(10483U);
    msg.setSourceEntity(48U);
    msg.setDestination(47242U);
    msg.setDestinationEntity(64U);
    msg.type = 191U;
    msg.request_id = 56759U;
    msg.command = 204U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.212566305707;
    tmp_msg_0.lon = 0.191307412548;
    tmp_msg_0.speed = 0.530854314448;
    tmp_msg_0.speed_units = 60U;
    tmp_msg_0.limits = 131U;
    tmp_msg_0.max_depth = 0.263112067195;
    tmp_msg_0.min_alt = 0.985498427289;
    tmp_msg_0.time_limit = 0.931016508273;
    tmp_msg_0.controller.assign("KLJEGHOAXCZHPTVFXKYBPYMGSCIDMPBXLNZLJWPDVTCMYSDYVPITMDBGHFGVHGSQQICLMOMOJJCLGZRUQBTTUCODWVPFLISFJVNNFABRCWUAFEWTAMQZXPSZURBSCVEFBKAMWQTFSSYXJWKNQNOAGAKDODVSIXERCXB");
    tmp_msg_0.custom.assign("TPSMFJTAWCBRZOGDZYGFLOYHGATZAJIMMHBM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52640U;
    msg.info.assign("ZXHOVBQUSAWPVWLMKLLATCTQUKTGVLEVWITOCOTQIMDYMHTGMPWJJHFYSZQIXIDWCHLSWPMZXZTAXYKHCPNRFJIEYZORYXNOJESCSUVPDUBNHQWTGFMVSQEAFUWXRLMGKGPDBGEMRORFDRRSKKJCGFCSEHUREXJYPFYKUTDZCSIPDNIHBCBOKEDJSUZAPNEFHVBJAIFRNHYVJQDCQGNMLUXKBXNNK");

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
    msg.setTimeStamp(0.0984067830638);
    msg.setSource(37995U);
    msg.setSourceEntity(55U);
    msg.setDestination(17430U);
    msg.setDestinationEntity(16U);
    msg.command = 28U;
    msg.entities.assign("XLOXIDEEIBKKHHLZCAUZALFEESNNOWPQSHRIDRVBAGGPOFUKPAPEGPBQNFPJCPSIFGLWRVQSWXZUGXQSIWADGCZNUFRAMGLOHU");

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
    msg.setTimeStamp(0.469707741689);
    msg.setSource(33930U);
    msg.setSourceEntity(28U);
    msg.setDestination(24218U);
    msg.setDestinationEntity(41U);
    msg.command = 211U;
    msg.entities.assign("ALBKJLEAXHNCGRWFBUZMDICTXFBNTAWWLNVPAHHZAGUGCYWBIEXJKVMDLVQWBGZTIMUOKQUXJZTLFPMIIOOJCYTVYCDXCHGJDRAKNMOLSHYSOITDLHNGYFMUECFVOQYQHPMNWNVQCJECGUUREKMXVRRZZXKAALK");

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
    msg.setTimeStamp(0.0436301205716);
    msg.setSource(12283U);
    msg.setSourceEntity(18U);
    msg.setDestination(45667U);
    msg.setDestinationEntity(239U);
    msg.command = 133U;
    msg.entities.assign("VIJJKZKZCKQKBZHOHMEGDXMNPEMRULOULUCQZFBPWGCNTAXFWPODFECRFYA");

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
    msg.setTimeStamp(0.300265393964);
    msg.setSource(30108U);
    msg.setSourceEntity(133U);
    msg.setDestination(62236U);
    msg.setDestinationEntity(60U);
    msg.mcount = 36U;
    msg.mnames.assign("KCQJUPLHQYVINGQCTRIFIZUMOXVPEDDFPFJZMPGQWFEKAAAAWZXSWTLOLVESMCNUVQKEPSVJYBSCIFNHBOGTBNHGHSOWLOMYOFEHBIDUYZHIWJJBBODYWQKIAXLRFXZROWTENPQSKYOPUUURSBLIRKQLNPOQYTCXZLWCXKLWW");
    msg.ecount = 14U;
    msg.enames.assign("SINHTPLKDBPRSUADIKTHNDMUSEPYSQREUQIFRFTXVGHJYCODPHZARPXUKHUKWCLQCPMZPAFMBQNTYTYSKUPVZLXDCJHOVMYCKZELYOHQFHLCRHOJMWPFFBBXDBZUUGVQEFPWOSJWMGVI");
    msg.ccount = 8U;
    msg.cnames.assign("WHHAIXRSNXKQMWSYCJJNOHAJGNYJVRGLGZBPLDMYGNRWZBAVXIRADJATAOFMPRNGFXIYPDBSBHVZKXUPQVNZYUCNMCQOUWPJRCIQDQGGWEYCCCRIUVQIOGFTACRWBMRBUVNFKUXFPSTCIHFLZEEHIT");
    msg.last_error.assign("EWVCCQMIYWBSCTDRRMXMQACHYOVDBWFQHDPGHWZHKCNXVJPNISXBDNKTXDJZDPPJBGZQCDVHMEFQTQLROWKWZFUEXVFYWIEHYFKUBXLPBZBHGKYVSVJFMODXOAOOLSCJFSWPTKIZYUQKUTLXZTBAFAFMSNGWRSAUTJLLRQUSDLNZVERAQAKGICOJEZTMBPAULIPQNJLCEYYDYXNO");
    msg.last_error_time = 0.449167954973;

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
    msg.setTimeStamp(0.109820441753);
    msg.setSource(58007U);
    msg.setSourceEntity(128U);
    msg.setDestination(59395U);
    msg.setDestinationEntity(49U);
    msg.mcount = 251U;
    msg.mnames.assign("SSVOCBBRFIPJKLXVCKUWNWEBPMKNENIDSFSTUAFNKB");
    msg.ecount = 141U;
    msg.enames.assign("VQSSFPXKPIUXPWHRBPWIMDNLZWBGEPWRLHVLWTCVQJKGZCDJOEGTQYELCTZYLOLTUOSYSEYEMFAZJHNAIUFQARTIOQSNASIGGKCOECSVYSEQVXNRJBYQVDOXWFGCMUKLHBSHZTXFHBFCBOFADCLNBUXPNMDPZGKZWINRYANVFYIOQWOKMPXJVDFYLTJUCJGNHTEOCXDMHKBEMTJKJDFAZMKMK");
    msg.ccount = 115U;
    msg.cnames.assign("LCTLBZJVMGIHDLRREUR");
    msg.last_error.assign("RKDTHVCXETNZMMVLLUURNXDBIMLXSTLVSILOMKPZQGEAJCBDYGFFXWWRYUGMGEVKXKFGNOKZZQQOQNJNREXPLHZZDRXVLZHCQVMJBHUGROAIDOMTHAIJYZFOQGVPTWOSBJUYSBDFPZSAURCYUACHTHWESBNIVXIPYEUFSQLRJPPZINSDGDMFCGFAOLQQHJOUKPWBPRHT");
    msg.last_error_time = 0.540144287247;

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
    msg.setTimeStamp(0.941126223801);
    msg.setSource(17035U);
    msg.setSourceEntity(64U);
    msg.setDestination(38809U);
    msg.setDestinationEntity(196U);
    msg.mcount = 145U;
    msg.mnames.assign("SJLCSYKPJURGPZYZSUQRCF");
    msg.ecount = 141U;
    msg.enames.assign("ZCPTHFTFYHMPNMLVUBKYELSVGDPHWNUJTUBOVJNXZCRYPCVENYQWTYMXWNBJZYICCSWKDQMGFVDEXKQVAKBOBGDITGAXXTPBLQCKYIDQHNGFHHABRERWTXGHIUSSCVCEGFYECBXHZYTUUAOELKLDNVYJOCIFGWIZSZMADJ");
    msg.ccount = 34U;
    msg.cnames.assign("TMNMPEVUNZDOPGIHR");
    msg.last_error.assign("HOTEWKWVQNNNAOJAQACOQCIMGROUBCHGVDOXXDBDUZYOYWHGOLTPBMERRCQJMRZWCDGCSERTPKSKWSAAPZCRTBWVVLIXXJYJHRQETSNVLKIBTFIJULSCLBF");
    msg.last_error_time = 0.466730591562;

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
    msg.setTimeStamp(0.127980332268);
    msg.setSource(48749U);
    msg.setSourceEntity(146U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(248U);
    msg.mask = 34U;
    msg.max_depth = 0.215541979896;
    msg.min_altitude = 0.192165325886;
    msg.max_altitude = 0.137778740495;
    msg.min_speed = 0.170977714285;
    msg.max_speed = 0.848378803847;
    msg.max_vrate = 0.789836848046;
    msg.lat = 0.788343272705;
    msg.lon = 0.630433984811;
    msg.orientation = 0.394618144051;
    msg.width = 0.74739476804;
    msg.length = 0.213430302438;

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
    msg.setTimeStamp(0.258125711336);
    msg.setSource(56575U);
    msg.setSourceEntity(232U);
    msg.setDestination(37620U);
    msg.setDestinationEntity(154U);
    msg.mask = 67U;
    msg.max_depth = 0.756641601347;
    msg.min_altitude = 0.219701145878;
    msg.max_altitude = 0.0104184623607;
    msg.min_speed = 0.517456077794;
    msg.max_speed = 0.77776278983;
    msg.max_vrate = 0.367873001925;
    msg.lat = 0.114419253168;
    msg.lon = 0.477403531765;
    msg.orientation = 0.0574811613452;
    msg.width = 0.400662968615;
    msg.length = 0.943384189494;

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
    msg.setTimeStamp(0.0856725043306);
    msg.setSource(60744U);
    msg.setSourceEntity(36U);
    msg.setDestination(51146U);
    msg.setDestinationEntity(216U);
    msg.mask = 55U;
    msg.max_depth = 0.091664290217;
    msg.min_altitude = 0.792866803178;
    msg.max_altitude = 0.548521947629;
    msg.min_speed = 0.89105296659;
    msg.max_speed = 0.751435224;
    msg.max_vrate = 0.364247209714;
    msg.lat = 0.651900575806;
    msg.lon = 0.141662964574;
    msg.orientation = 0.541781372615;
    msg.width = 0.562610015262;
    msg.length = 0.38149126547;

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
    msg.setTimeStamp(0.361002560403);
    msg.setSource(22136U);
    msg.setSourceEntity(191U);
    msg.setDestination(64360U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.64090898099);
    msg.setSource(8094U);
    msg.setSourceEntity(170U);
    msg.setDestination(57943U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.866747098413);
    msg.setSource(16967U);
    msg.setSourceEntity(114U);
    msg.setDestination(50208U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.611246854305);
    msg.setSource(57346U);
    msg.setSourceEntity(67U);
    msg.setDestination(3451U);
    msg.setDestinationEntity(119U);
    msg.duration = 58420U;

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
    msg.setTimeStamp(0.00142527759933);
    msg.setSource(56057U);
    msg.setSourceEntity(5U);
    msg.setDestination(50663U);
    msg.setDestinationEntity(172U);
    msg.duration = 1314U;

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
    msg.setTimeStamp(0.394988772302);
    msg.setSource(37265U);
    msg.setSourceEntity(58U);
    msg.setDestination(38144U);
    msg.setDestinationEntity(220U);
    msg.duration = 47906U;

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
    msg.setTimeStamp(0.107694415793);
    msg.setSource(39933U);
    msg.setSourceEntity(51U);
    msg.setDestination(10040U);
    msg.setDestinationEntity(118U);
    msg.enable = 96U;
    msg.mask = 1937174604U;
    msg.scope_ref = 3154494394U;

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
    msg.setTimeStamp(0.505597340706);
    msg.setSource(3850U);
    msg.setSourceEntity(186U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(67U);
    msg.enable = 216U;
    msg.mask = 211344995U;
    msg.scope_ref = 908754551U;

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
    msg.setTimeStamp(0.961062502142);
    msg.setSource(19439U);
    msg.setSourceEntity(95U);
    msg.setDestination(57105U);
    msg.setDestinationEntity(31U);
    msg.enable = 162U;
    msg.mask = 793628835U;
    msg.scope_ref = 2189202615U;

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
    msg.setTimeStamp(0.601996322836);
    msg.setSource(5800U);
    msg.setSourceEntity(207U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(229U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.549269520522);
    msg.setSource(26904U);
    msg.setSourceEntity(59U);
    msg.setDestination(19905U);
    msg.setDestinationEntity(168U);
    msg.medium = 28U;

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
    msg.setTimeStamp(0.988581321384);
    msg.setSource(9278U);
    msg.setSourceEntity(156U);
    msg.setDestination(45138U);
    msg.setDestinationEntity(234U);
    msg.medium = 245U;

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
    msg.setTimeStamp(0.937522690599);
    msg.setSource(34002U);
    msg.setSourceEntity(113U);
    msg.setDestination(14852U);
    msg.setDestinationEntity(111U);
    msg.value = 0.812883563854;
    msg.type = 220U;

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
    msg.setTimeStamp(0.436382488725);
    msg.setSource(14492U);
    msg.setSourceEntity(53U);
    msg.setDestination(56106U);
    msg.setDestinationEntity(130U);
    msg.value = 0.234341842271;
    msg.type = 159U;

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
    msg.setTimeStamp(0.031621491545);
    msg.setSource(3172U);
    msg.setSourceEntity(56U);
    msg.setDestination(55869U);
    msg.setDestinationEntity(175U);
    msg.value = 0.225783034256;
    msg.type = 230U;

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
    msg.setTimeStamp(0.417806149309);
    msg.setSource(26700U);
    msg.setSourceEntity(141U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(37U);
    msg.possimerr = 0.601210495621;
    msg.converg = 0.859674824566;
    msg.turbulence = 0.410224226865;
    msg.possimmon = 155U;
    msg.commmon = 159U;
    msg.convergmon = 238U;

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
    msg.setTimeStamp(0.659025898754);
    msg.setSource(18464U);
    msg.setSourceEntity(171U);
    msg.setDestination(45147U);
    msg.setDestinationEntity(69U);
    msg.possimerr = 0.404045074454;
    msg.converg = 0.070673160679;
    msg.turbulence = 0.647431611038;
    msg.possimmon = 178U;
    msg.commmon = 170U;
    msg.convergmon = 51U;

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
    msg.setTimeStamp(0.252856948231);
    msg.setSource(24357U);
    msg.setSourceEntity(10U);
    msg.setDestination(52873U);
    msg.setDestinationEntity(59U);
    msg.possimerr = 0.407812693799;
    msg.converg = 0.00175761738965;
    msg.turbulence = 0.944783452704;
    msg.possimmon = 57U;
    msg.commmon = 55U;
    msg.convergmon = 167U;

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
    msg.setTimeStamp(0.756794244365);
    msg.setSource(37905U);
    msg.setSourceEntity(107U);
    msg.setDestination(37056U);
    msg.setDestinationEntity(186U);
    msg.autonomy = 248U;
    msg.mode.assign("YYGOGYMXUJAZQAFRBKFCXPPDMWGCTKVFWQTYAYIZNJIRXJICRHWPHBLULCYUBBZJOUPNGWTIPAGQNLAUYWCFUXIBTVFKMXOVAEVHVHRYKZXDIEKCARSYTMGCMTODEZWJFKZMTNSNFKZEQSECJVSNQFOIJISLOPGZDMKXMVILDHHKBXMPMBHGWVQOAQLDVRKSSGDUDOBLEAQRXFAEPGWWFYCEORHPTNHDEIHJSOUJCLZUN");

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
    msg.setTimeStamp(0.0409548390964);
    msg.setSource(63025U);
    msg.setSourceEntity(49U);
    msg.setDestination(40874U);
    msg.setDestinationEntity(76U);
    msg.autonomy = 11U;
    msg.mode.assign("UIWFUVHBHXULGPAGYYKYHLBVMVRDNVNVWDCXJCJYFQPTKTCVDEXIJIQEUKNDRPQYMZXZCPWTBYYNLIHTWNTUKKOGWZNKXRBZNOLJVBODOKHOSMUHIRQVZEDP");

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
    msg.setTimeStamp(0.0967868165717);
    msg.setSource(64947U);
    msg.setSourceEntity(155U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(215U);
    msg.autonomy = 65U;
    msg.mode.assign("WQETIFNHJMQPGJXKTIKJBJEQWDFIJXNBZZENXIUYRBYJHTGSAMJALRDHFSCEBYLYHPGYFMZYTZVOPVQQBDBURFVILFAWVEDAMIXLOWOTDFTWBUSOKNXDZWOHEALOXSMNADQVKMDYCHVIGBXZGKCUMIGKVTPMCXUUARGE");

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
    msg.setTimeStamp(0.364427567934);
    msg.setSource(25392U);
    msg.setSourceEntity(20U);
    msg.setDestination(56758U);
    msg.setDestinationEntity(251U);
    msg.type = 42U;
    msg.op = 208U;
    msg.possimerr = 0.0906578765029;
    msg.converg = 0.121791432942;
    msg.turbulence = 0.287435421708;
    msg.possimmon = 51U;
    msg.commmon = 234U;
    msg.convergmon = 99U;

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
    msg.setTimeStamp(0.980496767463);
    msg.setSource(60226U);
    msg.setSourceEntity(66U);
    msg.setDestination(5070U);
    msg.setDestinationEntity(240U);
    msg.type = 180U;
    msg.op = 241U;
    msg.possimerr = 0.1716677886;
    msg.converg = 0.261728348895;
    msg.turbulence = 0.0318486637242;
    msg.possimmon = 156U;
    msg.commmon = 44U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.22964008197);
    msg.setSource(36239U);
    msg.setSourceEntity(205U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(186U);
    msg.type = 43U;
    msg.op = 94U;
    msg.possimerr = 0.479695868032;
    msg.converg = 0.370459036985;
    msg.turbulence = 0.785679166795;
    msg.possimmon = 154U;
    msg.commmon = 233U;
    msg.convergmon = 183U;

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
    msg.setTimeStamp(0.547973782383);
    msg.setSource(51739U);
    msg.setSourceEntity(77U);
    msg.setDestination(5694U);
    msg.setDestinationEntity(146U);
    msg.op = 124U;
    msg.comm_interface = 156U;
    msg.period = 2054U;
    msg.sys_dst.assign("TFFOQYOIOXGVGXXJZJKMNYXNOIZVXZSORXX");

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
    msg.setTimeStamp(0.283504265726);
    msg.setSource(9300U);
    msg.setSourceEntity(190U);
    msg.setDestination(32419U);
    msg.setDestinationEntity(236U);
    msg.op = 81U;
    msg.comm_interface = 145U;
    msg.period = 4153U;
    msg.sys_dst.assign("KVRCZRJMMWHHYTMVEXYFWMGTZJYGEBDNOUNA");

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
    msg.setTimeStamp(0.813254736874);
    msg.setSource(52968U);
    msg.setSourceEntity(193U);
    msg.setDestination(6020U);
    msg.setDestinationEntity(224U);
    msg.op = 182U;
    msg.comm_interface = 72U;
    msg.period = 19934U;
    msg.sys_dst.assign("IQYOPFBXPZVTATCOLACEBCIYRRREPYXBVOOKIMOWFTJBHDXEXWMUDDKKUIFBQZXGFVTHOPUJMGDQZAOANMCRSMGFFRQLDWITNNPEQN");

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
    msg.setTimeStamp(0.0126370913853);
    msg.setSource(26169U);
    msg.setSourceEntity(80U);
    msg.setDestination(19224U);
    msg.setDestinationEntity(42U);
    msg.stime = 367211509U;
    msg.latitude = 0.0596869163284;
    msg.longitude = 0.89031249884;
    msg.altitude = 26675U;
    msg.depth = 54494U;
    msg.heading = 20737U;
    msg.speed = -13541;
    msg.fuel = 3;
    msg.exec_state = -47;
    msg.plan_checksum = 34836U;

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
    msg.setTimeStamp(0.412102814189);
    msg.setSource(56592U);
    msg.setSourceEntity(36U);
    msg.setDestination(54520U);
    msg.setDestinationEntity(203U);
    msg.stime = 699932864U;
    msg.latitude = 0.329672847222;
    msg.longitude = 0.741759455185;
    msg.altitude = 11796U;
    msg.depth = 65353U;
    msg.heading = 8504U;
    msg.speed = 28402;
    msg.fuel = 108;
    msg.exec_state = 51;
    msg.plan_checksum = 54731U;

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
    msg.setTimeStamp(0.732068312867);
    msg.setSource(2207U);
    msg.setSourceEntity(205U);
    msg.setDestination(39111U);
    msg.setDestinationEntity(246U);
    msg.stime = 1254006529U;
    msg.latitude = 0.814107950559;
    msg.longitude = 0.478041201619;
    msg.altitude = 3752U;
    msg.depth = 55361U;
    msg.heading = 58873U;
    msg.speed = 21076;
    msg.fuel = 90;
    msg.exec_state = 58;
    msg.plan_checksum = 25113U;

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
    msg.setTimeStamp(0.863981457197);
    msg.setSource(46082U);
    msg.setSourceEntity(15U);
    msg.setDestination(13809U);
    msg.setDestinationEntity(197U);
    msg.req_id = 21635U;
    msg.comm_mean = 10U;
    msg.destination.assign("PSEWDBYNTMKHZBJUWF");
    msg.deadline = 0.123564392363;
    msg.range = 0.908339269526;
    msg.data_mode = 12U;
    IMC::TotalMagIntensity tmp_msg_0;
    tmp_msg_0.value = 0.814953324766;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("DEXPJGAIZNMXWWKDFAUYSBCMCIIPFLLDAFHVSEYBQSGPQHARSWWBJJWBNAOIFAJQFGUYRXKVWOHCXWYPJQGZZFCEPGBUPNHZAUQGVWUHOLXOCPSZNMMDOMOSBOIEKAZRXNTLLYRDCOTYZGYJEFLLKVIQFNMBWIYKTORGVCTINCMGTZL");
    const char tmp_msg_1[] = {71, -78, -59, -126, 87, -96, -53, -19, -108, -120, 26, -78, -25, -17, 78, 116, 46, 30, 118, 25, 84, 43, -87, 24, -109, 82, -41, 22, 29, -15, -100, -29, -58, 33, -106, -36, -79, 104, -41, -25, 31, 75, 75, -90, 50, 117, 98, -29, -9, 67, 123, -95, -29, -13, -46, 57, -5, 94, 7, -39, 97, 85, -62, -37, 104, 114, -119, 97, -89, 4, -70, -20, -19, 90, 97, 48, 14, 36, 124, 95, -110, 88};
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
    msg.setTimeStamp(0.458919543621);
    msg.setSource(19974U);
    msg.setSourceEntity(127U);
    msg.setDestination(1197U);
    msg.setDestinationEntity(107U);
    msg.req_id = 4090U;
    msg.comm_mean = 192U;
    msg.destination.assign("WUUEOVTJFPMWSRANAFAXWFZPQXAQERJPBFXMTAMETTULR");
    msg.deadline = 0.974752826256;
    msg.range = 0.525403161156;
    msg.data_mode = 241U;
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 97U;
    tmp_msg_0.frag_number = 157U;
    tmp_msg_0.num_frags = 152U;
    const char tmp_tmp_msg_0_0[] = {-21, -121, -124, 115, 101, 87, -120, -45, -25, -1, 103, 4, -31, 58, 68, -45, 64, -116, -89, -18, -111, 70, 113, -17, -92, -126, -87, 94, -90, -85, -124, 99, 5, 126, 41, 97, -71, 29, -100, -31, 4, -97};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IQLVGDJCPFPPPMWKCOJGDOXBPIHYTOEMITWTHYXUGWTOIAKKQOREUMSBMQGTCLSHEIBEMLLRASSPVWHEAGPNFUZFCYYFBEJQ");
    const char tmp_msg_1[] = {1, -11, 7, 57, -24, 3, 90, -4, 6, 93, 0, -73, 4, -55, 12, -42, -80, -55, -82, 56, -25, -114, 68, -46, 70, 98, -15, -113, -74, -126, -41, 111, -114, 89, -7, -98, -46, 66, -32, 54, 49, -108, 28, 116, -26, 4, -115, 61, 35, 67, -3, -56, -42, 118, -20, -128, 93, 44, -60, -85, -110, -2, 4, -27, -59, 1, 8, 115, -37, 104, -36, 67, 30, 71, 13, 80, -42, 100, -124, 2, -8, -122, -102, 26, 42, 80, -90, 87, -90, -77, 37, 116, -101, -71, -72, -3, 5, 126, 32, 21, 96, 37, -96, -23, 99, 102, 100, 47, 60, 48, -122, -11, -7, 101, -124, -71, 110, -10, 110, 77};
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
    msg.setTimeStamp(0.159438257404);
    msg.setSource(6362U);
    msg.setSourceEntity(167U);
    msg.setDestination(59430U);
    msg.setDestinationEntity(198U);
    msg.req_id = 7382U;
    msg.comm_mean = 207U;
    msg.destination.assign("WHWCOQKQXMOZTKMFUXYWNVSUIRADWOOJXNZDHCHXNNMMRDFEHHLYOXVKIQSALBCMBJRBXPAFUHBCVEPRISUWYANCESBVTWWGPZZOGUKJCELFGKIOGGIDQYKZHYGUYGNDAYNCZTFJTZIPSEUOELWFJPZXMJU");
    msg.deadline = 0.500192300251;
    msg.range = 0.451357998406;
    msg.data_mode = 252U;
    IMC::UamTxStatus tmp_msg_0;
    tmp_msg_0.seq = 8412U;
    tmp_msg_0.value = 253U;
    tmp_msg_0.error.assign("JHIIBCEMUEVEKDFJSRHIZGHPSEUMTRWJUUSVKUAJDTOQGUACSWGZSJQIHYBMDZOZEACNTQXPFWZEFLZAXMXMQNQSGVNOXYDQWYLWPPCQTUBGXEKAJAXBFGHLSMWYRKPNXIGRFZOVZLTRNLHPVSF");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OJKBDTYFVNVIGGTYMJWGNMCFNYECIGPACUXOHVOWOXTFQPSFOOLFQBSNZRAWDRVZUXGCSRAKCOMUTOTFPL");
    const char tmp_msg_1[] = {90, -72, 64, -50, 113, -91, -18, -26, 24, -110, -113, -48, -101, 102, -16, -25, -121, -82, 6, -51, 105, 118, 90, -31, -49, -112, 88, -65, 110, 120, 5, 90, 31, -74, -68, 16, 91, 102, -87, 8, -104, -80, -124, 89, -108, -45, 65, -89, 51, 21, 14, 118, -103, -9, 94, 115, -88, -37, -103, -14, -91, -48, -102, -110, -78, 13, 74, -50, 74, 23, 107, -59, 98, -34, -97, -19, 5, 89, -128, 12, 27, -18, 74, 83, 126, -31, -9, -100, 2, 64, 67, -41, -27, 123, -10, -20, -16, 59, 65, -96, 90, -66, 123, 125, -10, -60, -38, 113, -91, -124, -36, -107, 75, 60, -105, 48, -50, 20, -118, 19, 62, -126, -9, 82, -33, 43, 101, 90, -3, -71, -113, -110, -114, -50, 52, 23, 45, 0, -81, -57, -41, 103, 111, 73, -55, -30, 107, -58, -102, -50, 102, 58, 75, -68, -108, -34, -79, 10, 56, -87, 28, -16, 22, 27, -87, -49, -34, -9, -5, 91, -28, -77, 61, -89, -74, 33, -59, 52, -47, -121, 10, 88, 115, 42, 119, -114, 115};
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
    msg.setTimeStamp(0.32686995599);
    msg.setSource(25147U);
    msg.setSourceEntity(98U);
    msg.setDestination(38969U);
    msg.setDestinationEntity(2U);
    msg.req_id = 13618U;
    msg.status = 130U;
    msg.range = 0.0812187129108;
    msg.info.assign("KYKOXRYGHROKUZLFNMAQMBHREAQSJMWOWDYDHQEWURFJPQLQSFVDGMAUGXRNLHFCABBLUCEJHWOJBGSZPKBIXXQRRBKKMVTCOWGEIRQJBDFJWMSTDWRXDGZGICFAKNBXMPLIIVXIJUSQNWZXTNCUOYETOPTEAYUNJOPNPIYDTDVZXGLFESQNPPAUIZSIYJVCVDZSMTFXSVOHNEAPLKJFNCUFHIGLWHTVDG");

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
    msg.setTimeStamp(0.90170605981);
    msg.setSource(49117U);
    msg.setSourceEntity(212U);
    msg.setDestination(31060U);
    msg.setDestinationEntity(176U);
    msg.req_id = 32484U;
    msg.status = 174U;
    msg.range = 0.497410781825;
    msg.info.assign("MBGAATNSKGZXRFPUBKHCQTYRIFWYJRMOIRWZXCWKEHIJUBGEDQKMYHLDKDZCLUCXYHWNPNKEQPDVPLBKUUGXJAHYLXZVBALTEHLBSNFTOQANCMGKOFESJWJOWSUZDYZMEROVGIAFLBSDNODQTUWHPVQCVJFZTABAPQPRBTDKDXSXCHZEYJOTJCRLKGYCUIPSJIGQNMWNNYVOREQUAVNHAMIL");

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
    msg.setTimeStamp(0.845454103968);
    msg.setSource(12117U);
    msg.setSourceEntity(214U);
    msg.setDestination(17531U);
    msg.setDestinationEntity(120U);
    msg.req_id = 58480U;
    msg.status = 43U;
    msg.range = 0.751893783483;
    msg.info.assign("SLROHVBMABMUDVAZKRQHYQQGUSXCPXPARJXNCRRVCNFCINPCEUXYHBSASLUGMMEKMECGQPGOYSRWLKDWDAYCAFZHEGCZGNZZTYHLJJRNGSJFLTKVIWUJIDVNZLYXOVIBLYWBTYMPXHGNETSDH");

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
    msg.setTimeStamp(0.951002274118);
    msg.setSource(50950U);
    msg.setSourceEntity(214U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(213U);
    msg.req_id = 47141U;
    msg.destination.assign("MKTYMQHLXOUVXCENQCATGYPPUTRQEPRVTDOKEHCCDOZBVJKYURXMWRDMHBZHMBFWSWRGLFFIVIKUACJBHDOATPNHVARZRXIKRCPUWAQUWBIQDGZXGJVVLSIRBKZOFKTQKPSPOXEJPOHXJMJUELJDETIQLBUXSGFMWNWXLNXWZYIKFJNHPL");
    msg.timeout = 0.212962252605;
    msg.sms_text.assign("WOOFLOPDLEFTBVWUESJEXPVFADMGRXIXBGCUKKBRNSQYUIWDNAIOADCUHMGBDCOVARFKCIQDPNN");

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
    msg.setTimeStamp(0.976715704977);
    msg.setSource(21907U);
    msg.setSourceEntity(182U);
    msg.setDestination(39632U);
    msg.setDestinationEntity(28U);
    msg.req_id = 25898U;
    msg.destination.assign("HXDYQLKCRYNFKBWLDOYAHGCALHSFJXALNPVZGVWJVUSTLZEVSARRXMOSTJMYGEUFEVCGOPMBJIETUZGAKRNHFTKDWIPENFHQYSUQDTZXXVBDHHICCOOCNDBPXRBKQURFODJJFMDPTOADUHQCCXEIMSPRNZZTVJBAHUMJXWJNIEBNJUYWLULNBWIMEOQMKFHBRKITVYZKIYVXACGTAIEWSWCFGMPZG");
    msg.timeout = 0.985467944217;
    msg.sms_text.assign("ODMHYMJNIMGBSBHCPPECSEPPBAMEBTXRRUSYAXGBRIVTNPYLAOSHZSWAQMDRXMDXUTZKEVQQWBQTLWCYDKVJPNQUWWKTYRDDQBHJLJKTKEKGALIJUTWZISOZNXOIELSVMKUNQIXWSOGTHNICOGXRPJPFXXCXANUYGIFHAYFBOZQMFAFAHZYDCVZLUAZEUY");

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
    msg.setTimeStamp(0.12986061647);
    msg.setSource(43114U);
    msg.setSourceEntity(186U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(185U);
    msg.req_id = 54925U;
    msg.destination.assign("SWIEZPPAQHSBINNUKMJYXJLUYVAJCXYCFSGLUSWKGAWGNQPKWPECXQUVDWTVJSZHQOGBKFCIRRNNRQLBELRKKRIBFYPKZLIDPMFHMJUAOAHMDCTNLFJHNEGETMCGOBKNORFWQTGPS");
    msg.timeout = 0.197095569713;
    msg.sms_text.assign("NPOQIVNAQQWDXABBHIFGRKHCHLNBZNTMTTFWPDLZBOQJSEIUZIFQSCUXZMQBCHJNOIPUQUZWJJQBGJHBYHQLLZZK");

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
    msg.setTimeStamp(0.934119025027);
    msg.setSource(48808U);
    msg.setSourceEntity(209U);
    msg.setDestination(27807U);
    msg.setDestinationEntity(85U);
    msg.req_id = 4245U;
    msg.status = 199U;
    msg.info.assign("WBZNDTDVNKVYZDTBOHLQPUHQREKA");

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
    msg.setTimeStamp(0.330633064608);
    msg.setSource(43635U);
    msg.setSourceEntity(220U);
    msg.setDestination(4108U);
    msg.setDestinationEntity(155U);
    msg.req_id = 42441U;
    msg.status = 86U;
    msg.info.assign("FDJHNXOGXWHODITGPFGGSVVWJQPOUNBYDWDHKFAFWRJYSBMKESPSMHUIU");

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
    msg.setTimeStamp(0.844818468957);
    msg.setSource(30726U);
    msg.setSourceEntity(7U);
    msg.setDestination(45601U);
    msg.setDestinationEntity(52U);
    msg.req_id = 59218U;
    msg.status = 241U;
    msg.info.assign("PLNTSWPRCMWPAPPEYVVYN");

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
    msg.setTimeStamp(0.903586347961);
    msg.setSource(2376U);
    msg.setSourceEntity(17U);
    msg.setDestination(4453U);
    msg.setDestinationEntity(234U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.161003526114);
    msg.setSource(35144U);
    msg.setSourceEntity(126U);
    msg.setDestination(2339U);
    msg.setDestinationEntity(250U);
    msg.state = 59U;

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
    msg.setTimeStamp(0.423061140903);
    msg.setSource(39556U);
    msg.setSourceEntity(236U);
    msg.setDestination(6433U);
    msg.setDestinationEntity(193U);
    msg.state = 4U;

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
    msg.setTimeStamp(0.568414614234);
    msg.setSource(53122U);
    msg.setSourceEntity(112U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(155U);
    msg.state = 105U;

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
    msg.setTimeStamp(0.927307823442);
    msg.setSource(44146U);
    msg.setSourceEntity(235U);
    msg.setDestination(28300U);
    msg.setDestinationEntity(181U);
    msg.state = 155U;

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
    msg.setTimeStamp(0.0446974299999);
    msg.setSource(55319U);
    msg.setSourceEntity(62U);
    msg.setDestination(5467U);
    msg.setDestinationEntity(239U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.0107381604844);
    msg.setSource(51166U);
    msg.setSourceEntity(247U);
    msg.setDestination(58031U);
    msg.setDestinationEntity(23U);
    msg.req_id = 31906U;
    msg.destination.assign("OJJGSFFCXUQUVLRZDWVGNYAQWXCADRSALOBZUAGLYVSXKPWOURLIJMQVABTXHNXLZGIWTYKQIGMJLIJKUIGWBSMOZMHEDNSZJPEJSMFRQVZXFFCULEWMRNCTGYPEPXPUCYFWEBEKQNLLITHCQVZRPKBCAOJONRKJDIMOVATEENFBKFRXCXDVNOBBSNGTTSFIKLSMZYFEWHOUHKMDBYAYYHMHTITHCDPPW");
    msg.timeout = 0.90649590485;
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.404607266217);
    msg.setSource(58696U);
    msg.setSourceEntity(163U);
    msg.setDestination(25912U);
    msg.setDestinationEntity(178U);
    msg.req_id = 17824U;
    msg.destination.assign("YAUMAHTLLRRCINPCNCVMLTBGUCGKLJZRHCYKFBPJMOWOCUJJCATFTOHEMKTGMKBYAYNBOJKDCJXVMFZOHFQFVBEJEYPKMPBLQIMOLNANLIHDJXGRREUXKXMHDDPSGQGLGPQBSBYRCFUWETEUTDWWZQAXPDGLVESVRYKAHDHOXXRBDHNPIIXFIFJQXPASZLIVJWZWWNUOQQEGSWPZBUSEZSDAROFSVVYNQINMZV");
    msg.timeout = 0.246103414431;
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 76U;
    tmp_msg_0.eta = 16024U;
    tmp_msg_0.info.assign("QFPPPAFWLTIMXMCCRCCFYVBDTIOSDHRWWEKGBHGAFYBIWKZEKEWFNCGAHUJRKQSTAIDJSNEFNSLUUBWYXAOXVTETMXKYUNRXVQLWYZVHHZVNYZCKBDZBK");
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
    msg.setTimeStamp(0.257695218298);
    msg.setSource(59713U);
    msg.setSourceEntity(230U);
    msg.setDestination(40770U);
    msg.setDestinationEntity(225U);
    msg.req_id = 35522U;
    msg.destination.assign("ONZVGLHTUATEPBGJMGQWSBDLVWHEVXJUVMKTAJVJJFRGFJQPNDBZKPEGUQTLTNYJYZDHWEDNDGYLOSCWIXRITSQCCJKBNCVLUQPCUKBRXELZUSMEEXKBCFSKNTOHPXAFXYOWQQMRZHQXISDNOZIIYRIHHIOZEORXAHAKDRQHKRDCWVMEZFEMLLOMUCRAFBKPOBFSWLSVSYPIMXUTYMACOJCIUFQGPUPFANWDNKMTFRVVTPIYXSABLZGY");
    msg.timeout = 0.82602978739;
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 229U;
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
    msg.setTimeStamp(0.346731888954);
    msg.setSource(38067U);
    msg.setSourceEntity(229U);
    msg.setDestination(11908U);
    msg.setDestinationEntity(71U);
    msg.req_id = 9265U;
    msg.status = 227U;
    msg.info.assign("ADSQIEJYOR");

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
    msg.setTimeStamp(0.318930619944);
    msg.setSource(4478U);
    msg.setSourceEntity(205U);
    msg.setDestination(17775U);
    msg.setDestinationEntity(132U);
    msg.req_id = 29422U;
    msg.status = 169U;
    msg.info.assign("AWEMGZFWTWUFJKMVVWFHJFPQMAIKYVZCLGMRYWPLHXJBNEMTDIJJVCITTSPOFXTOBNCNRRUBFOGLZIWQXENFHOKKKUXMDGASF");

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
    msg.setTimeStamp(0.0916277778055);
    msg.setSource(42227U);
    msg.setSourceEntity(195U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(90U);
    msg.req_id = 48593U;
    msg.status = 224U;
    msg.info.assign("ZERBDGJQPNJHLGQRSYAVZMHQOLCTZLIKBAQVWIQYOEKTDXSLXWJRLCRSDBZPIGTUPSQYYPJYDXXZUSENLFETGEJZXHLHEOIXIDCELUPGJNWMVKNNPXMVTCGTMJSHRWXET");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.653808159212);
    msg.setSource(25758U);
    msg.setSourceEntity(87U);
    msg.setDestination(44879U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.980391089881);
    msg.setSource(65386U);
    msg.setSourceEntity(76U);
    msg.setDestination(30111U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.713134236688);
    msg.setSource(62623U);
    msg.setSourceEntity(97U);
    msg.setDestination(26741U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.294600723631);
    msg.setSource(48090U);
    msg.setSourceEntity(22U);
    msg.setDestination(65362U);
    msg.setDestinationEntity(79U);
    msg.plan_id.assign("WPDAXEKFUFNVZPHICNWKIEVRFSHUTBWPXAAJDBHJXVARTWLYFMRIWRZJQTSELJTVKOVZJFGFASRZIEESBNOUJLXBOYSSOIAKQJJIKMNTHYGEHSIOSWWZBDYKNUYNPNCOAWZYJYNEVRCBQCUUGPHAQCVPXDCMLLEFCKUZBOMLQYCIQGFPRWRDXW");
    msg.description.assign("NXVYRDHOVQPSWFDFLFNLXSZEINWCPYSIDEVAJZNLOYPMBTHTBBLPTZKWXJGXAGABCDRBKREYTUILXKKASPRTFHPEBRQCMJKPAMUZGULAHFWERNGGLOIRHCVRGWZEQTRXUCZKLVQATEOSVYTYEDQMLHTKIBYKLFGHQXFJXMHNUVMOADQOSTXGUWODIFSBYVWAIJBNM");
    msg.vnamespace.assign("LOISSGEIGUDDBXPNZIKXKOPABZABKGANCEBVKUCPKEADEPQNUKXJBFIUQLOBSLQUIBZUAFDNXQYCAGRDJVGXCYNMMMVGJMRELYVJSWQUGNGAIZWYYDMAZIPXBFLZOUVYCKENFQCZQSJXKTXTGHEFMOKHQDYRLOTEZRIFMVPLNNFJFHHSPRBHPCSOOSWSWVONLTRAFTXUWVHCHWYYIYMHHIWOWWPVMJDRTPFMRHTAJELJXDTBJSCUQ");
    msg.start_man_id.assign("PTCVFXFJVFPWTTIBMVWOFIHKJHHRIMBNTBOTWKQWYCKDLBURXDZTYUDAFNZGNDROFSAPBDACNSPQNKXIBUCXVEWZOEPSFEPCEWPGOZBWOSVPZJFYQHCHXXMHZEOZIGRHKKQSGQYJKHWASUTJUTXRJVPLENQLLMNAVYDLTLQIGYEZTCJUDGYIEKAXNNSQFVMQBOAVBLLW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NHLSADLHZYWITCSIJFZPKZLKHCIABNWRSVWSHJFDQWQQSUFYWCSXVTUUAAEPXKXLOILLGRBCWFWOELUNYFTMXUADFBTMSWIQEDFKDRDLQYVVORCXXEHGCOGQOGPKBJMRZTWJUGFGTGDTZBAVVRRBOECMNQ");
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 54819U;
    tmp_tmp_msg_0_0.lat = 0.570800702395;
    tmp_tmp_msg_0_0.lon = 0.623615992421;
    tmp_tmp_msg_0_0.z = 0.146575254935;
    tmp_tmp_msg_0_0.z_units = 14U;
    tmp_tmp_msg_0_0.speed = 0.536777848049;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_tmp_msg_0_0.custom.assign("KXMCDVQJKGHBFIUCSYPBWHMYUXFLRBVJASGGHKEMNLZHSVSFSLQSNCIZTQHGZELEZBKORKUHTFDGVPYZVWOUQPUQTDFXWCBNDTRKLBNWMIHPXWDQB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TransportBindings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.consumer.assign("ZHMHEAMEPVGFKBJCQSXSXKQAHGTUDZTZNYVQMSGKVDVNBQOOIBPRJFHOGREAPSDIRRRAVPTUUXXXBTECTHUVDKJIAKCHXZJRETUUEZILLNSBBHCRUGTYXWMSRDPVXZFCFWZYCNIPAVXLTJACWSWBGSDFKOQZGWIWQBUAMNHOCOPMBOHGZJULNLLQFJLGPFNNIAKKIILYHOFYEPSYIVYWYJCEQDYVJXZTKOGDTNAUWRSQM");
    tmp_tmp_msg_0_1.message_id = 23856U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SmsTx tmp_msg_1;
    tmp_msg_1.seq = 3299136952U;
    tmp_msg_1.destination.assign("ETZPHSXWAMQHXTWDYLZFTZNCRGBKLDBFNEHALOPZYQOXQFKQTHFJMDSRRSACUOYOMJMGSKEVIAKXSFOTPRBKMIVDOPSKNZCBEEJOSLWWRVFXWCLMPEJGCAJQFUNYNAETBRIVCMFJVTHCCAJIBJHEWURZYNRCVKMBBNLCYQXWLHUPPGFGQZIUKBDNZIDWXEJZSZDGHKGOGNAPVKGVLUMFUPVTDYUXJLOSVORQUAXYG");
    tmp_msg_1.timeout = 40990U;
    const char tmp_tmp_msg_1_0[] = {-28, -95, -84, 12, 80, -49, -114, 20, 113, 61, 76, 58, 27, 8, -18, -11, 89, 122, -113, 70, -32, 68, 93, -21, -57, 97, -116, 124, 95, -90, -87, 112, -118, -62, 21, -86, -43, -37, 35, -4, -126, 122, -27, 99, 112, -46, 60, -39, -7, -63, 79, -20, -86, 73, 105, 29, -113, -124, -34, 105, -54, 121, -8, -77, 66, -88, -98, 36, -113, -72, 108, 21, -111, 41, -49, 27, 112, -114, -55, -101, -86, -7, -72, 110, -56, -75, -36, 94, -113, 59, -127, 83, -69, -79, -119, 66, -100, 1, -123, 47, 0, -109, 8, -33, -118, 81, -14, -81, 10, -35, 40, -31, 53, 19, -94, -106, 18, -35, 46, 13, 8, 104, -12, -122, 46, -48, 66, -25, 71, -8, 101, -65, -67, 78, -98, 18, -33, -7, -90, -114, 62, 29, -87, -116, -59, -45, 30, 106, 93, 53, 1, -33, -55, -78, 86, -87, 118, 95, 94, -19, -118, 45, 66, 94, -62, -91, -125, -87, 123, 54, -75, 120, 32, -34, -56, -86, 3, -98, 3, 61, 26, -68, -99, -64, 3, -126, 119, 3, 118, -14, -5};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
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
    msg.setTimeStamp(0.0828767647133);
    msg.setSource(27050U);
    msg.setSourceEntity(57U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(233U);
    msg.plan_id.assign("MQDVFOHXCVNDUFCUQGZPBDFDPXIVXHJANHIXXRELHRLJFSNYAZLWCWYMMBRLYFMABGIMEPMENSGZTFURXHOMWXQNJTDWZAGAOPQPUGCYYGSLRACHKBBOEXOBJYZWUGPIOQNYTHJTUUYKERTSUVSCMMJAITULKLQPKKNSNBHYJGDVPITDKZWWOCRQRQDTXOZTZELRQZILKONFENSKIKCGFKF");
    msg.description.assign("FJLURMVAGGQDEXJORNCPQEIBRDTWSTDVFOAWPJVWRYGRCSFWNUUMEEYPGZJXSUFAHXYILJBCMOWAOXENKYWSUFUEFULADUPFHOPNDCGQJXZVBNVNSZEBGNRBVDGCMHGDCKJKHXLOZCIRXBBTXLU");
    msg.vnamespace.assign("BAMYUHBODOKQKQYHOEDJZAJPGHIRRNGVWSCYRHWFUDEBUCJDEDNPCQFPRYNSNYAZXMXSCXLAXJVLCQTDMA");
    msg.start_man_id.assign("WCYLCYOXJODHJCEDDBRDNRXNIAMQZPBINUWCMDYXQNQUTVKIAGPGPXBIHHSHPMGFQTZKTQHSGYKLOVRRUHLAUIYGENVESDGSDUMTEKOJWAHJBTBCVEURSHIAOOSOJBEMMPLPKHAVKMXTXHONUPQML");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("GMWCRZPMLQSYHHQEXYYSISMUAOQHOVJGPTRCVCOKUIYXYVHWEWKDRMWNRBMAJNHASYZTQIWNCWDEMLFBULKDQEYHZPAXWXWCSHMVXVXZTLLETGROFNSVAZONDERFJAXUSPGUFQKTWCHNMZNXFCFXHBQJUPKERKWJCRZIJVKUJIBVDQYAIFCTBXIB");
    IMC::ScheduledGoto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.arrival_time = 0.849281765183;
    tmp_tmp_msg_0_0.lat = 0.114729474859;
    tmp_tmp_msg_0_0.lon = 0.281770443298;
    tmp_tmp_msg_0_0.z = 0.525039817263;
    tmp_tmp_msg_0_0.z_units = 188U;
    tmp_tmp_msg_0_0.travel_z = 0.748055606632;
    tmp_tmp_msg_0_0.travel_z_units = 108U;
    tmp_tmp_msg_0_0.delayed = 102U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::IndicatedSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.274627419974;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::SystemGroup tmp_msg_1;
    tmp_msg_1.groupname.assign("LJRZWQNWMDDLLFSZUBQSSTBIOUAIBMJQZFZVTCXPRAAQYJEENXOGGYAPBFIXUPKEFTRGHHBYXWLMAVEMTXVUFUEIVZKZBGZCQNAPYHMQHXEWNJOOHCVYPGLLDDSWRYTIFPKFLKXGUNOMFUSWOUSVRPKEHDFOA");
    tmp_msg_1.action = 126U;
    tmp_msg_1.grouplist.assign("ETLFXSWUNKZKYKJJUUQCXJSGIAGZRBNDDVMMPKOCJFOAXOTTSBMIQSLVPVJJIUMFGPBGACFAPHCQQHRLEGRHWLYHFCUIXYLZUEWMLPVM");
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
    msg.setTimeStamp(0.761917519279);
    msg.setSource(32936U);
    msg.setSourceEntity(222U);
    msg.setDestination(53790U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("MKSMIJBZZUDACMBGUCPMDVEOCNWSZNDZXEAOGJUHAEOAHOOGDDCSZWCGHRFQINHIYIMNVFPQRPUYKAZFCWZTDMNKLRRSJUWOWVFADRKRBWDTGSRGMIJYXXUYPIVJNGXFYAEYGLLLLVWKPFEUSJPNSRMBIESLQLOECNDVFWLGQHBUTHFAPNCUOSTFKKBTQHQNBEERX");
    msg.description.assign("YDEULKUEWAMPPIVOQRAQMUUIJENJFXKWDQMPLSVJUAOCBIHYZCWSYFTWQZLCCHXBCONQBIJDUKFGAFAVGTI");
    msg.vnamespace.assign("YWDQNUSWZLDTEIYQJIXFHEQMBYTLNXGNEFMQ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ENAWLDEPXUDFTFKRBSQWZNFXHAPINOMVEGWFIKXBRMMAZZQBNZTUZJLRTZGKQMPRKSUISGRDZVQBEOUFJCESYNCUYIOMCSHYAYCNKBJDKVVXPYJXJARHWRCKEEMOCYXDVKRMODHNLZXGUFAYLLPOXIUDPIWDTJAGEBOPQF");
    tmp_msg_0.value.assign("JUJETLXGDYGZFHGDVCVNABNEFOQAPEHUWVCJCICBWPGPXSOCXOUKGRRNBZZIMGJHCYOYYTZZFBSVDKMNQVEYUERHLYENENRTIZSUAXLMTX");
    tmp_msg_0.type = 54U;
    tmp_msg_0.access = 67U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AWVMKUFTLGHQJMEBGXWUIKYMBIIYOAFYUQJGQPFPZJJOOYKBHCCDRMI");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("USXXXTCLXJWAINMJUZOBYZCKVLVDKNKOCNZHEWTSHFPXBCTFEIIMBYSHLFWOLFEUPKVZMQMSIHOLGTUARDMTUHZXFIBRQNAXUBQZXVRZQWUAANHNQYGWGZDLWRBBREOFMJDTGJYPGDET");
    IMC::FormationPlanExecution tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.group_name.assign("JRPKCUJSEJZZPTCFNNPFSKUDILVMBEPHYEBTWMSGSIOVGSYXKWEHUQZXTLJRQMZNUSNELDCOWRLXFRBIVYEYXNOGOSEZTMBHCVDNVRWUQAAEBCAQCAHVJMIYULRJZOVMUCMLLQLKRCTHFMDFJTBHGWTKYCABKOZYKWHQIXMWNYYTVBAMGTDEGZFOLDQFFJNRWKQGTPPUAGKPXDXJZGZXBDLIF");
    tmp_tmp_msg_1_0.formation_name.assign("CVIZHVIHBNCFAUUHAMMDMRZUQKXCAYEHZOGPLJMRYKGDFTMWLINTBLMOHOLOVFKSDTEATPKODDSAFVSHBFDRAJHXGUBTRCGBUDCTPEBXKTJMKBPQCXNAPLYEIWPAJFSYGGINUPWHQQOJPNNOWHJDHJIPNYWKWRJRJCSGCVYFJUEIYZRXGVZSWLBKYXNMWUVKDVZQALIXY");
    tmp_tmp_msg_1_0.plan_id.assign("KGFXIAJHIQCWOQFTMXCNDOTTDVVGFKCABCDPDMQHHGWPDSAYLSVOAVMEX");
    tmp_tmp_msg_1_0.description.assign("XCNFMZVVMXBLMIYAIRCDTEDAQUCUBKDOSNQSMQGGHLLPYFIJTNNZP");
    tmp_tmp_msg_1_0.leader_speed = 0.595156245359;
    tmp_tmp_msg_1_0.leader_bank_lim = 0.956172078625;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.669998187062;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.674857547215;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 2354U;
    tmp_tmp_msg_1_0.converg_max = 0.484451583913;
    tmp_tmp_msg_1_0.converg_timeout = 59116U;
    tmp_tmp_msg_1_0.comms_timeout = 20538U;
    tmp_tmp_msg_1_0.turb_lim = 0.452030689221;
    tmp_tmp_msg_1_0.custom.assign("XRQJCUYJQHHXMREUWMKZLSWYRJNMNBDFKKRWQJDMHSEEPUUHQSOOZICYXMSECSSXPLUIASKXIHWGZOZHGNGEAJIDSGVBTIWVRVSWLPHTEAWQCDPKNNEYLQEGOLRDGBAEAKBGNZKOVXCNGUDIMFAPJIGFFHDOPTJYTVIYDMFATFVKCFKUDFMQVCLYZNSOABTQBZYJXKMPRPLFUCZVWLOJMXXUCBNBRPOCZBWZAHD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredRoll tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.0136146729676;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0631043777021);
    msg.setSource(18462U);
    msg.setSourceEntity(35U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(22U);
    msg.maneuver_id.assign("BVSDLWNAIZVANHRGLORLLCMMTJFGYAMYEITVFTWZYSOFDSXUDBXKTCXJWWYHKEAUHXRPZGNKECECLZGUSWNSNPHKMEZHZQKSRURIFLGLLKQPAXOBBQRYOXSJDCUKPHPCXRWJBVGNPBHVUQCY");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.456233405712;
    tmp_msg_0.lat = 0.74365154572;
    tmp_msg_0.lon = 0.451394076752;
    tmp_msg_0.z = 0.462733359954;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.travel_z = 0.886827020052;
    tmp_msg_0.travel_z_units = 112U;
    tmp_msg_0.delayed = 12U;
    msg.data.set(tmp_msg_0);
    IMC::PlanControlState tmp_msg_1;
    tmp_msg_1.state = 106U;
    tmp_msg_1.plan_id.assign("BGBVHBVFGEELNYMEMKLW");
    tmp_msg_1.plan_eta = -615078977;
    tmp_msg_1.plan_progress = 0.593364538882;
    tmp_msg_1.man_id.assign("XKAMKWEFGNLPEWLADZJQTZRJURKZTQIEYINRHZPHTUYHUFIDPPIKWQRSTLADTIANVKUSHBDTLBEJEGN");
    tmp_msg_1.man_type = 12617U;
    tmp_msg_1.man_eta = -1891003518;
    tmp_msg_1.last_outcome = 174U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Distance tmp_msg_2;
    tmp_msg_2.validity = 48U;
    tmp_msg_2.value = 0.415237383454;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.616593792128);
    msg.setSource(59128U);
    msg.setSourceEntity(108U);
    msg.setDestination(9654U);
    msg.setDestinationEntity(223U);
    msg.maneuver_id.assign("KMFLNZGHIBDDVXGRZAUURRLLUWBSOZEUBPFHBIMDNHUJWCGAFPXHLYCSHKACVDZYVLJVPXJNCMGJADWRMQNPBWCDTXGPDHHAKBTMIUCBEXYODIKSZXWAZQRGYTELHJQKVMQYUULGVKS");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 9202U;
    tmp_msg_0.control_ent = 114U;
    tmp_msg_0.timeout = 0.510426538895;
    tmp_msg_0.loiter_radius = 0.77905230532;
    tmp_msg_0.altitude_interval = 0.324916349963;
    msg.data.set(tmp_msg_0);
    IMC::Formation tmp_msg_1;
    tmp_msg_1.formation_name.assign("MHHBKTWXINUBDTHOEHYFYIOVLDGQCVRYFTOMIBXYSROBRVPJSTRSCHBUYSJGUTUJFLUEVWEGMUAKJSJZCZSYYEHPRVQIAXLJMGPGKRISADDEHCEBJLQRPVTWDAOXWFNFXLZKMWFPZMYHEATCYNDPWUOKCOPPODWRPZB");
    tmp_msg_1.type = 109U;
    tmp_msg_1.op = 133U;
    tmp_msg_1.group_name.assign("FZSWOAXUAJXWPLYAHAPDQHDFHPTVKMGWMBMGLGVPYEJQRSTTYBWOUKWVAQ");
    tmp_msg_1.plan_id.assign("TFBCRJXTFCBPKZFVFXNMMNL");
    tmp_msg_1.description.assign("NJVVCCSUMXJTUMSLQTPHGMFVRCUMFJNBNGWPTAWLDSNOXKAOSIQIOXDGIGWRLGLVCQUZZWWDYDIBDEQKQIZPEAQTAYNFWVYRRYJRRCBROXHNVQZWZKUAXUJTDCSRFTJKOOFTCNXAOTAWVTSGASYMNXJGHPXOHREYLBTYHHIOFKYLASQBFLCKZBENEZPHMMWEVULKJDECLGDHK");
    tmp_msg_1.reference_frame = 113U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.vid = 45857U;
    tmp_tmp_msg_1_0.off_x = 0.25063956835;
    tmp_tmp_msg_1_0.off_y = 0.772842984571;
    tmp_tmp_msg_1_0.off_z = 0.507546433376;
    tmp_msg_1.participants.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.leader_bank_lim = 0.593862398783;
    tmp_msg_1.leader_speed_min = 0.255829528334;
    tmp_msg_1.leader_speed_max = 0.394254333319;
    tmp_msg_1.leader_alt_min = 0.38455621332;
    tmp_msg_1.leader_alt_max = 0.785304507537;
    tmp_msg_1.pos_sim_err_lim = 0.931045864202;
    tmp_msg_1.pos_sim_err_wrn = 0.0380449608673;
    tmp_msg_1.pos_sim_err_timeout = 3053U;
    tmp_msg_1.converg_max = 0.613211808448;
    tmp_msg_1.converg_timeout = 7908U;
    tmp_msg_1.comms_timeout = 28554U;
    tmp_msg_1.turb_lim = 0.361743694103;
    tmp_msg_1.custom.assign("VTMPXILBNGTWIUYNOBATOZBYAJPQWZCDWWRFDREMERXSSODIPENGCILMWRGTPWVQICULCTHMNFTRC");
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
    msg.setTimeStamp(0.745979882334);
    msg.setSource(27728U);
    msg.setSourceEntity(130U);
    msg.setDestination(38913U);
    msg.setDestinationEntity(203U);
    msg.maneuver_id.assign("CVNNANYAWJYIVKYNJBDRBACK");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 12729U;
    tmp_msg_0.lat = 0.295339760061;
    tmp_msg_0.lon = 0.822455747712;
    tmp_msg_0.z = 0.153176271651;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.duration = 6368U;
    tmp_msg_0.speed = 0.16647043186;
    tmp_msg_0.speed_units = 85U;
    tmp_msg_0.type = 65U;
    tmp_msg_0.radius = 0.496814803238;
    tmp_msg_0.length = 0.937928447397;
    tmp_msg_0.bearing = 0.906268606564;
    tmp_msg_0.direction = 97U;
    tmp_msg_0.custom.assign("NZOXQXJJWXLJXBLEJAPIWAVJDZGCRZTVIMNORUCBMCQRVWKFCIGHRKFAEXNXZSQAHJVSELQAFNLTXPBNPCFURFHUIPUAIVXIEWHIOJQGEKXWBIVQMECGHPMKCJSIULWXFVKGBGZGMDDQUAPDQDRDPTSJJLSNSTAOEWSSPZZDKVVHGYDTBCQYK");
    msg.data.set(tmp_msg_0);
    IMC::PlanSpecification tmp_msg_1;
    tmp_msg_1.plan_id.assign("CNMYLUBYVNBWYUQCSVPYZEBAHANLHXJITNFBYJKCGNZADTYEMSXABTSOJEXXCYGPDUVVXXHDARTTXH");
    tmp_msg_1.description.assign("OSHFFTEANFKEHCGGBUTYQYBGLRUIRIZEHJPRSTTOOTABTZAPKBWKOQYMJMMKYMFLZOCRQESFZQAMQHESZVIHJAPWCDWZRVHBWQDBTWXMWFIXEEJIYMJJFZGOMGCONGYLPBQX");
    tmp_msg_1.vnamespace.assign("LSDTPFQUSJWEUUFKSDQAEKGWXXHADOVOSMKQPWVYRAKUZSLVPYGOFHFPMXQWHVKXI");
    IMC::PlanVariable tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("QGMXHSFYGLXJUYQREXGWERAEIHHZCMV");
    tmp_tmp_msg_1_0.value.assign("IOPFEPLVPMMWCKTHFHIUANRSCYWRNQJVPJVQMLQIGCREJEDMKMXUWVCMAFGTBBXFTBTIJVWQDTEMODLBTFPSJNMGFGYASXBCWKFKRPFHGOKVAXIWAMUEBPAOBODXFHQFLDRLLYNUYBCZT");
    tmp_tmp_msg_1_0.type = 117U;
    tmp_tmp_msg_1_0.access = 74U;
    tmp_msg_1.variables.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_man_id.assign("ZICFIZMURNYKLWGSPBWNTMDGHLAGYHMQTZECSHCYXBSVKDCQLFGLWOEMSRMFVQPQYBHFAFKFQYDTOLXVUTAFGOUHY");
    IMC::PlanManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.maneuver_id.assign("ACOTBEIRDKUDDVSGMEJDUFAFZHCRAHKBRTBIJVMHZKYLJOUYGCDOQDQNXDEEOCIQXXSYOVJIMXJKIMSFALIBHTHITWBCYWSREPXYNWWRQULSPJXZHWKOYUHUTLIOSKGAVKQWRGTKPNNBAPGT");
    IMC::RowsCoverage tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.lat = 0.000156322770629;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.483442090566;
    tmp_tmp_tmp_msg_1_1_0.z = 0.0147743359438;
    tmp_tmp_tmp_msg_1_1_0.z_units = 98U;
    tmp_tmp_tmp_msg_1_1_0.speed = 0.0182056640711;
    tmp_tmp_tmp_msg_1_1_0.speed_units = 8U;
    tmp_tmp_tmp_msg_1_1_0.bearing = 0.134415066978;
    tmp_tmp_tmp_msg_1_1_0.cross_angle = 0.652462174388;
    tmp_tmp_tmp_msg_1_1_0.width = 0.157279739517;
    tmp_tmp_tmp_msg_1_1_0.length = 0.890379571118;
    tmp_tmp_tmp_msg_1_1_0.coff = 231U;
    tmp_tmp_tmp_msg_1_1_0.angaperture = 0.517773506034;
    tmp_tmp_tmp_msg_1_1_0.range = 59772U;
    tmp_tmp_tmp_msg_1_1_0.overlap = 24U;
    tmp_tmp_tmp_msg_1_1_0.flags = 69U;
    tmp_tmp_tmp_msg_1_1_0.custom.assign("VKJIPNYFXKJGXBXSTQ");
    tmp_tmp_msg_1_1.data.set(tmp_tmp_tmp_msg_1_1_0);
    IMC::LblConfig tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.op = 110U;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_1_1_1_0;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.beacon.assign("LETRTLGWLGMRMHGQIGSHFKUFOAWMSYAFWJCZNJXOMDXCH");
    tmp_tmp_tmp_tmp_msg_1_1_1_0.lat = 0.89801075314;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.lon = 0.697114080349;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.depth = 0.360211140277;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.query_channel = 180U;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.reply_channel = 41U;
    tmp_tmp_tmp_tmp_msg_1_1_1_0.transponder_delay = 99U;
    tmp_tmp_tmp_msg_1_1_1.beacons.push_back(tmp_tmp_tmp_tmp_msg_1_1_1_0);
    tmp_tmp_msg_1_1.start_actions.push_back(tmp_tmp_tmp_msg_1_1_1);
    IMC::FormationParameters tmp_tmp_tmp_msg_1_1_2;
    tmp_tmp_tmp_msg_1_1_2.formation_name.assign("GBZSVDEGALKVJAFMBLMZJIGMXYSSIYQDOMBADGRVQNWYHQCEHCTQQIXNLBTSMPXUDLBPIFIQEVKZMVVURVFTMGFJDJFBEFHFXNXHNORZTPCGPSTKUSSJICEAYECQOIYORYJPZEXWCAENUPJYCMNHYZKOZVOJVUBCPLJWFAWXMDURCCNBUFRNLHZPYQDRSROAALHUFBSLLSHTIKLGBX");
    tmp_tmp_tmp_msg_1_1_2.reference_frame = 178U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_1_1_2_0;
    tmp_tmp_tmp_tmp_msg_1_1_2_0.vid = 16278U;
    tmp_tmp_tmp_tmp_msg_1_1_2_0.off_x = 0.988991652759;
    tmp_tmp_tmp_tmp_msg_1_1_2_0.off_y = 0.251273234572;
    tmp_tmp_tmp_tmp_msg_1_1_2_0.off_z = 0.733948399058;
    tmp_tmp_tmp_msg_1_1_2.participants.push_back(tmp_tmp_tmp_tmp_msg_1_1_2_0);
    tmp_tmp_tmp_msg_1_1_2.custom.assign("ATUHKSHXLFKUGWQPNKGRZEIDAQTGVVWRGCMEUBKXECUDUOILGPHXVNRLPYSMJBLHUIZNIRWMPVBCZFHVIC");
    tmp_tmp_msg_1_1.end_actions.push_back(tmp_tmp_tmp_msg_1_1_2);
    tmp_msg_1.maneuvers.push_back(tmp_tmp_msg_1_1);
    IMC::Throttle tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.value = 0.77382249743;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_2);
    IMC::DesiredZ tmp_tmp_msg_1_3;
    tmp_tmp_msg_1_3.value = 0.747345222357;
    tmp_tmp_msg_1_3.z_units = 238U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_3);
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.428798630715);
    msg.setSource(61145U);
    msg.setSourceEntity(118U);
    msg.setDestination(8090U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("RVSHMOEOFOSRQDIYSAAOWNNVCXQQGPGOZHZRDOKKXBCMSKARJVCEMBNTYZJKRNHVMQENSSQEXPDYCAPIRFTPJJXZDRDNKANHTIOMUEWPUJKZQUFEWUQSKJMLBVVZFREGPXVLIWTLKAUPUHMVULCLPYGYWIILH");
    msg.dest_man.assign("BDRMUAQBDYKLJZZKROCVYYZHXZUHSRJDXOYEWZHPENDIEOAKIKMIBAEATGPRIPLHPKXAIMITXTDOKTNDNMFWTXVKRFDZZNMHBAQIOPSRGXPBECGHEUBFDWZLNFMVOJFJQZGLKTTUULVBDUSGRNKRTLZLVQWGCSCXQPAECMOLQJWXPFHFIAELYSVBWQNHFSMGSUHYLAXXVQJCPYTA");
    msg.conditions.assign("ETDIPZUESFVGJEZKGITKDMOQHRYNYWZBYWAXZCYQRBAULXHVSJDFDEAVDTZRDKPOJABUYTLFHGHNGNDOVBIKNRFJABMSQCEXQBTVCIAQYNGRLISFPWOWPCZQUMKVJDHXKMQBRXMCRTQEPLVMVOCHMBLJJYFHZXSGONRWBMSDSQBOZKOWPUCZUZPNWJ");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.22802937562;
    tmp_msg_0.x = 0.317127472816;
    tmp_msg_0.y = 0.984039986318;
    tmp_msg_0.z = 0.885338820346;
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
    msg.setTimeStamp(0.218727921861);
    msg.setSource(43078U);
    msg.setSourceEntity(11U);
    msg.setDestination(5308U);
    msg.setDestinationEntity(253U);
    msg.source_man.assign("JOWZLCNFJFSZORUIFEXJYLOBPRJNIRYNRGIXERZMSBWRHHKGUZLUFUNLEZVWVTVBUGFEYVFBKHUAHSCMFCWMZUMDCNIJOHOZNXQFWZTYLCYFEXOLFCTJTMUGXSSLRDYAPQGHSRVWKYSHXSDOZOHHWPITMAYAEWPIXOIPSMIPUDWBPQAIDQVIYKLQGHLJEJKAEVMLDKGBBRVXGSVJQJKBTNDTCQNNKMXKRDQAVCPQABNTCQWPOT");
    msg.dest_man.assign("WYHMPLKPRDFVWYKRMQGKHOTKZLVWRLJVDKHSUDLCSFJYYMKFIEEQOEQYEWXLNBUZTIWEJAQZBYSNHOBZOLCRCLCCVNRDWDJOBTVUBROZJNASXMQASBUCUROGTCOQFAJTNHJODXYQSNSUFEKHUNMWBVGIFPEMAFHFSZHFXEUWXRPZJEVIISMXPXKXVZPNMVLDRBANEICKGAXXKLYWTIYTGMBAIGAWHUULNRCPATTDZHQDYGBQG");
    msg.conditions.assign("RCGABRRJXJZQGNVQIFESNTWVJKPYLHNZQFROPDYNYAUDPSBTCTEFFGHMYEJKQBDQVNNFGFXEQEMBVUYWDIXALDAFGWKTKNFJVIIAAGGOPYZXKPVKNUYCCMWSRILAMBROMTVLZUMCWHHJKZTEWORSKFHQIPRTDDUDSHPT");
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.660140344647);
    msg.setSource(60060U);
    msg.setSourceEntity(16U);
    msg.setDestination(23596U);
    msg.setDestinationEntity(242U);
    msg.source_man.assign("TWEHFNVOOCMZZWZMXPBIYPEVNVQHMKMBWEJMXDFCECLOQQYDWSORTOMSHHBGURTRQYQKCOZXUNJCFXJSULV");
    msg.dest_man.assign("ATXLZGVEPWNDBPTIKENKOJFZIJJEXLUABHCQAEBTBERGDNMFFCPHKDURHVLWTLJWKMAPUSOVYZMGEWDDNNMRQIYATOFGYKCHZXNALRDWIVCFOCQWLVMIVAPYJQUARYSMTGMNFDJUUWDYWEKGQPUSTEFMLVGSZOXZGCQRHVVKSQAOYCRWHCKOBSXZHECQXMXOJNITFPBPSPXTKIXNHEUZABICUBIJSLFOTZGZJYMRWKOYBDRSIPBJUQFRHX");
    msg.conditions.assign("IJCBTZDJUYXOTHOAFCQAAMKTDOUNFP");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 37U;
    tmp_msg_0.op = 106U;
    tmp_msg_0.err_mean = 0.545400991723;
    tmp_msg_0.dist_min_abs = 0.97259303774;
    tmp_msg_0.dist_min_mean = 0.936211451595;
    tmp_msg_0.roll_rate_mean = 0.331100691706;
    tmp_msg_0.time = 0.867010945155;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 176U;
    tmp_tmp_msg_0_0.lon_gain = 0.85102790741;
    tmp_tmp_msg_0_0.lat_gain = 0.0503454484598;
    tmp_tmp_msg_0_0.bond_thick = 0.313538669441;
    tmp_tmp_msg_0_0.lead_gain = 0.346319759172;
    tmp_tmp_msg_0_0.deconfl_gain = 0.941371596747;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.75187497273;
    tmp_tmp_msg_0_0.safe_dist = 0.45717916851;
    tmp_tmp_msg_0_0.deconflict_offset = 0.0212064259951;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.586798503237;
    tmp_tmp_msg_0_0.accel_lim_x = 0.452515623589;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.413627066522);
    msg.setSource(25087U);
    msg.setSourceEntity(72U);
    msg.setDestination(6178U);
    msg.setDestinationEntity(166U);
    msg.command = 221U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NRSBLUVOAYVZVAUTDZTRNMVQIBWZMJOP");
    tmp_msg_0.description.assign("ANUNBXPYOVTENUIWZSGLKUCXKSXESAVE");
    tmp_msg_0.vnamespace.assign("ROXQNOLUBZVBAQCLVQVWIOABZECHZNDIUIMLLTWQMGBVBSYSTCSDKAZMYUAFNEPTPYGYWPIOWBKLYMECKEBTXDADFKJLNOXNXFFWPPONLTRAUPODRTNJTDQEESKIEPUXYSBIJKMVEVGMATCDJTCDMGEN");
    tmp_msg_0.start_man_id.assign("LWSEVGYFDFWWSREZCPBVOSUBSZBAEMQSLNHOAXDOINKMNLRIWWFAHPLHTGROKGKCGFVZGBURSKHIXCARYLUPYETBTGQKYHMADENVUNPUDQEEJKXZOYXJLDGTRLWKVQOMVBSXYKQHNZFMISUHDMQQCBFGEJIAGLPTTUDXNRCXMZDRJOQBVFTOVRUJ");
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
    msg.setTimeStamp(0.0802560855731);
    msg.setSource(20389U);
    msg.setSourceEntity(105U);
    msg.setDestination(5910U);
    msg.setDestinationEntity(195U);
    msg.command = 170U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPKDCZKSCWACYZJFFLJMKINPXEVOMQDWANRGBTUMHCEXZPICLYQFBRGELJDBCVSSBYROPWUSFQU");
    tmp_msg_0.description.assign("OMYCODHVXOZCBZZJSQJUNBRWTKNYXDTOBPQKSYHIXLMOHFVQSNMWMXKDHIWEFQAVKUKUGTRTNLCJRJZLYEFSFBGIORFDYHWXRWMWBQIOLEDNUHVMJCPTMSAURKMRADBAPMDHWPKRGOBULPEWXTGQUVGILEXZGPCCFQNKPZEYR");
    tmp_msg_0.vnamespace.assign("KXJKHNCNDTAKRWMYLFIBNVZTIMFXMATCDYLEEZQITOPQVVUVCKGFTBGW");
    tmp_msg_0.start_man_id.assign("DKWKCCWZRXNRRIPYAVHMYOYBENFXMCPOJGAQSOGDONCZGLVFOCJLENSZSFMQHLWVNREBQAHRRFYKQXRAOMLTFUCMGHLZLWESUSDQPPCNYYQXDEYJILAHLVGISCJWZGBJEIOKATSDWEUZILSHPDABVOETMJKUAHQTGEMVZUQFHIWMPSJQPVKVIJGFSXDPNKVMYRXBBTGZONUIPRTYXBHIPTBVTJOAJBXC");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("YPXNMHOKOUPIDRQVRZMHQJWGMIMANJBRJINEXNRNVWAOKUDABGKHWFKXDVEDQLTWKMFFJOQTSOTPMVEFTQNTPGTAHXZEFFGLKIFCYETJCHZPHCGYAWWQLHHEUEYCPBCCMOSXZGUBY");
    IMC::PopUp tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 16735U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.420667916351;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.572689171831;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0477858114771;
    tmp_tmp_tmp_msg_0_0_0.z_units = 68U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.22935374917;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 93U;
    tmp_tmp_tmp_msg_0_0_0.duration = 41881U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.490181641209;
    tmp_tmp_tmp_msg_0_0_0.flags = 58U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DVDUJYCJHMXXWLSSMXSJQOHOEMVZNDDJOQTUXPDTHQFDGNETLIKIJFPUMAKYQKTZPVVZJIEEYALJGGCLLRQFRFDOOIGWZVHAOXCEOZXGSCTPMUTIRZXKWCRPGRSIYCMAIOANMWWLPCHDYBFRXYLEXLSIRNBKRVNENZKTCSGUJQAUVXUPROPQHHDSLTB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::LblEstimate tmp_tmp_tmp_msg_0_0_1;
    IMC::LblBeacon tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.beacon.assign("PEUJKLYXHVJNBWVEGRKHYNPUWKFGBYWZFIHWEVQKHSLVWGMDIANIIBYXPACTHOHWGDSSPTUXZGIXARZJLNLQIWVHMTLIGDIUXMPMLXZFFFXZYTSTFPRONBCFLCNCVRBSFCKQTSTYMGERPKSQDIRNOOHTBPGRGOSZOJQHEKEVDURETVOALNALDYKAZSNUJYJVWJGCKPCBQPFQMQZXQIUZBZWMEAJMKASAODYCDCUEVXQ");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.205948080405;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.527907935906;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.depth = 0.49086365572;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.query_channel = 42U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.reply_channel = 162U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.transponder_delay = 215U;
    tmp_tmp_tmp_msg_0_0_1.beacon.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_tmp_msg_0_0_1.x = 0.491294739071;
    tmp_tmp_tmp_msg_0_0_1.y = 0.201324957152;
    tmp_tmp_tmp_msg_0_0_1.var_x = 0.445113146576;
    tmp_tmp_tmp_msg_0_0_1.var_y = 0.352304142582;
    tmp_tmp_tmp_msg_0_0_1.distance = 0.888711382266;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::ClockControl tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.op = 23U;
    tmp_tmp_tmp_msg_0_0_2.clock = 0.619196340263;
    tmp_tmp_tmp_msg_0_0_2.tz = -49;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FollowReference tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.control_src = 964U;
    tmp_tmp_msg_0_1.control_ent = 88U;
    tmp_tmp_msg_0_1.timeout = 0.634092648744;
    tmp_tmp_msg_0_1.loiter_radius = 0.194251385837;
    tmp_tmp_msg_0_1.altitude_interval = 0.251665108214;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::SoiWaypoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.626837200805;
    tmp_tmp_msg_0_2.lon = 0.409237848197;
    tmp_tmp_msg_0_2.eta = 4161537403U;
    tmp_tmp_msg_0_2.duration = 18607U;
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
    msg.setTimeStamp(0.791120579442);
    msg.setSource(62635U);
    msg.setSourceEntity(67U);
    msg.setDestination(6612U);
    msg.setDestinationEntity(148U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GQREAPHHNQOWYPZJZUNJEUCFDIRAIVWBFGRXSCOAXSQOWFWISYNRWJHGGYIMDLETOROTWHTDMAKOGUQGZLFAHBZQIAHBFCVBWWCNMQQMLALXTCSTNLVYEKMZBYNIGMZTUDIFSUGPHACOZSIUJXYBEDNXCSVPLBVAVOKPJJRINDCPERUCSKOXVZMCKJTPWNRUERGDHGDKMSFJXZTLFXOPKRYQ");
    tmp_msg_0.description.assign("WBSUJJJAMWLNCOQDAPRHVLPBYPXLQSTLTYGGWPKUVOTQOACXDBFCBFQOVRZFXIDRKQFFSLZVEWRSXOZAAAZYINXDVGUCFSDWGIHKFUXARKNVKHYWWIHHMBOCOTCMIYTNRKRHJOKFWHEXMPUGBLRCNTPCKXVEUAEYFIYKHYSIDZQBAKBMXGMQTOJJCQRJYWJEPGENNTLPSBIHGLEUVDPDTMALMNXGUBMDC");
    tmp_msg_0.vnamespace.assign("RNBTGXPHDLJLVQPPVSORUJESENXIXFRQHKCBAZNKHDIYDOSCLZIEPVFRVJOQDAOGSAQVOONFE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GXXKBEQEKMJCYLLYGFNQJDRAWTKIMPPLOBQVPZZFHVCXZFNEGBAUJVHHSVMRW");
    tmp_tmp_msg_0_0.value.assign("UEADJSRKXWJZEIFPOPNQFBJLREXOBBZQGDKNWEBPFGNGLSKLUDLKQTCHZRXKNIXIPJOVCCXYYNSOAGMJBEJIFCIYPERURKEAHAAGOPKCVVDUYBHIWAZASBVXSVWTIYSMYAQSWHORUDHNVDVWTELBKHZOWMEMIKGATWWITCNITLFHSTYPSCYMQMNOTUFRQJXMPGBHCZCFMPUOZUNLQTTXVFRGZDXGHJLDVRCKMPMBJDXLRUZQE");
    tmp_tmp_msg_0_0.type = 190U;
    tmp_tmp_msg_0_0.access = 140U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CIAAVLQINUBOZEBEKPXOZNNQOOPZYTXOBUWIVNZLTMCRRZUDHQTFFDLRBSLOXKOVCYPYMHYBVFDZUTUKWJGEEWOWWLKZATTAXIPHRAAHRGLSYMKVIFGQEDVAREWDNNBSFXFUJPHQZXBCENCMMKCESJDSESVPNSCDJXPIGJRTTKWWYJUNFYNYMSJKLRVAHUHWBFYDGLRJMBISGPKMUGCDLHBXQFHTGZMIHLUWTYCQIK");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JIWBQZVKKYHIBJLZRYKCHNLJSJVT");
    tmp_tmp_msg_0_1.dest_man.assign("WCXHKNGLTOOKOBUGVEBRVLJFOMXESPMYKAMTZBFGJDNFAJDFIEGJSWZUEAWBKHJRHRXTBPHTUGYHOIZSMLYVKTIRNIUJJLZLRTDMAOLMOYGUDHCWWKEXBCUQWPTFNCHQKYPGGNSYZQVXNSFYOHAAFJDZUBSDNIKDRCKMDTUPQNIULASEZVEAZYZQBMJMIRMPDLALWV");
    tmp_tmp_msg_0_1.conditions.assign("UTXDNGTMPKVSRWRCBKIWPRDYHWPDLXDTKBNKSJDGDZAOEMDXMRVRUSZXFGRJESAYYRFJFTSHZMLIPGDMJANLEKKWIUVDTHOQVWTWN");
    IMC::SadcReadings tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.channel = -67;
    tmp_tmp_tmp_msg_0_1_0.value = 1693492116;
    tmp_tmp_tmp_msg_0_1_0.gain = 90U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CacheControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 89U;
    tmp_tmp_msg_0_2.snapshot.assign("VHSOFEQHXAWUXUIVWYHESVOZMLBTKKAXAWIJINDLRUMEYEFWXXFMJYBHNMNSUXXRGTSRUDAXPVGZOCVQXDTZRAFUBIOEOQRTNIFTRKMLAIGETCDCZJJLAESCKPINHCBFHZINZLQCOOMZWNERHQPPMGYQBTCWQPJRKRLOBRKTYJ");
    IMC::DvlRejection tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.type = 131U;
    tmp_tmp_tmp_msg_0_2_0.reason = 254U;
    tmp_tmp_tmp_msg_0_2_0.value = 0.67774419637;
    tmp_tmp_tmp_msg_0_2_0.timestep = 0.666008697143;
    tmp_tmp_msg_0_2.message.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SetEntityParameters tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("LIWHYVDBDAZHPYIEWVTSUOJIBEQHORMJBNGLYORXGBFSTEBQKFGSIAPUUOVAKTMYDK");
    IMC::EntityParameter tmp_tmp_tmp_msg_0_3_0;
    tmp_tmp_tmp_msg_0_3_0.name.assign("WYQRQJCDZYXBKKNDZZTOBPASOHBVRTBSUNOOUWJHFIRIVKSBTSEMBFSDNIZOAJREJWUJRRQDUTJFYFCNECALYYH");
    tmp_tmp_tmp_msg_0_3_0.value.assign("RZXVPDACCUCVDPSIRVUCVNUTPJESUUCFYXUHIAILYAOEFXWQJEHZFQKGAMSSSLWTFQNPCWBRJZOBFPQQCQJKXGAIKTNSIHQTFZJBROBNYZBQPTGKBVZNIWBENEMWSTRKHGDRILWYRVUDKPCMAXZHFXYK");
    tmp_tmp_msg_0_3.params.push_back(tmp_tmp_tmp_msg_0_3_0);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.334252056688);
    msg.setSource(19217U);
    msg.setSourceEntity(181U);
    msg.setDestination(45482U);
    msg.setDestinationEntity(18U);
    msg.state = 84U;
    msg.plan_id.assign("HAUNEIBHYEOOFTIPMGTMQLHNBZDSEFRNDXKDVCXSZQRQKTKGPXYJFZFNKNRIJBSIUIWJSEMUXYCXJCQGUDDIUAXSDYUCKMLGOXYWTPPHBVASZDJTRTRLMYHSKYNKELOMQBTAIPSBACFJVWTQPDWUIUOEWOLELCVTMAFOGGAXWQCRGZHGBLFVWPSVBZJBHLOEUBMGTVPNCJNAEOWZMYXKCRZHHUXIAEASLZKVVRDIY");
    msg.comm_level = 186U;

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
    msg.setTimeStamp(0.693534340481);
    msg.setSource(33144U);
    msg.setSourceEntity(52U);
    msg.setDestination(44383U);
    msg.setDestinationEntity(227U);
    msg.state = 246U;
    msg.plan_id.assign("PMREAPBOIZXOTGIKWCWKGXSA");
    msg.comm_level = 76U;

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
    msg.setTimeStamp(0.0643483021228);
    msg.setSource(44307U);
    msg.setSourceEntity(79U);
    msg.setDestination(52857U);
    msg.setDestinationEntity(229U);
    msg.state = 24U;
    msg.plan_id.assign("NRMKKZNKQDAFGGIQBNVTVRTNXVAWMGTMUSWRRHXYRFJUWZZOSHJCXCROGYPWPL");
    msg.comm_level = 229U;

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
    msg.setTimeStamp(0.458752404318);
    msg.setSource(31391U);
    msg.setSourceEntity(144U);
    msg.setDestination(2630U);
    msg.setDestinationEntity(13U);
    msg.type = 57U;
    msg.op = 139U;
    msg.request_id = 59733U;
    msg.plan_id.assign("IWELFMAOXUMAIQZWPZQWLNHCFBUMTENTUGDEKJIOYIBNKYBAGDBIYXSOTSUQVRKCLBIWPCKOZKLFVVVRXHDNPSBVMHUURJETVMBEXCPGGOVOUELFONVYCDRXPSODNSXFZFRQEKAIBZYPTNTLRHFPZXSYJEBMMTHGZIHGFILKEUVOILXQWXPGSDSTHCYJOGRRQRWJQLWTMTKGPMFYVFGDAJDZNCDQAZJQJWAKUXLDHAYHHRWESZCANBWSA");
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.84759038503;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IFEZWYSAWYYUEVNVLUUEYYVXIJLEBPEUXRCUOKPLUYRXFJTICZVKCLTFZMSSAMVTBBGDSBQNGBMLZJQUPXWXTWOCLBZHJKHTHCGDKFEVEXDZDRSLIEVUNPDSSMRNCIFYTTINZINRGMAPTKJMZCIHUHILVPOVOVBZYNQFNGDQXBGSKHXROAAJAXAQQDRQSWOPWHJEMOJPMKGARYWKDJKYRHGTFOFWTFLSQDHIOGCWONFKWBCBRCPL");

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
    msg.setTimeStamp(0.850446879696);
    msg.setSource(54608U);
    msg.setSourceEntity(191U);
    msg.setDestination(24942U);
    msg.setDestinationEntity(74U);
    msg.type = 109U;
    msg.op = 199U;
    msg.request_id = 32885U;
    msg.plan_id.assign("LPNFHCYYCGXQPRQZGNBGUVOJVZPVNKNNKIHIKUKCSQJZNVEKODSMUWIFHHAARUJJFMTFTYYMCYBSWLZJBDOZEOXEGUMWDFOVVCRWNHBPWGLRCLLZJNCKSUATIUCTXYBEPVONSHA");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 37130U;
    tmp_msg_0.lat = 0.646731557819;
    tmp_msg_0.lon = 0.0312975231475;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.z = 0.13105759703;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZIFLRYUJMIWUAOTTBBQFBYDEI");

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
    msg.setTimeStamp(0.202939647769);
    msg.setSource(16346U);
    msg.setSourceEntity(122U);
    msg.setDestination(11024U);
    msg.setDestinationEntity(138U);
    msg.type = 56U;
    msg.op = 124U;
    msg.request_id = 1398U;
    msg.plan_id.assign("FVPUSDUABPYWRIMFDNOOOLDACROHFEJSENGXLJHXVEGFVYTMJIYXFXFPMTSFJZSIXPUMBRNKZSAMRNJQILTHTWQBJFPTOXPNKYMDHLCXRVGLYZZZGIKHQTIYF");
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 1U;
    tmp_msg_0.time_remain = 0.412775640737;
    tmp_msg_0.sched_time = 0.727074984399;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZZRDIWJEUPLOHGQVTMRGTOUERPUVGHRAXKYUQNOWRABHPZNKSEBFGRZZSWCIXIWMUYDXWQPWOSLLHXMZZWBVOAZKIKECCMSKYDLNJEJWSFUTXYKINHGQ");

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
    msg.setTimeStamp(0.556446820514);
    msg.setSource(17886U);
    msg.setSourceEntity(15U);
    msg.setDestination(9163U);
    msg.setDestinationEntity(86U);
    msg.plan_count = 43199U;
    msg.plan_size = 3089044051U;
    msg.change_time = 0.448090323856;
    msg.change_sid = 1073U;
    msg.change_sname.assign("KLSSDJUZRHTMBHUUOGJGPRLUCBJQRLHAWUIQKJSZWOIVYXXBPDOUYTGLSFRLRTWKCGFYWPKNCEEWIAWAMVXYOYZRDVOKHBMMHTTOUMNFPTEPDDVDNWKZTEQQFHWITGCDABPOUYFDAHLLBVAJBJFNNVUIXSCYQSLOGZXZZCXKPXFJRKJMSZFZHZYQSTEJRMN");
    const char tmp_msg_0[] = {-117, -111, 45, 44, -49, -58, -110, 102, 85, 0, 48, 99, 22, -51, -96, 79, 2, 38, 121, -10, -83, -104, 40, -87, 119, 39, 81, -6, 37, -5, -98, 91, -2, 43, -91, 123, 118, 25, 18, 22, -117, 126, -8, -32, -67, -98, -17, 5, 1, -118, -14, 119, -13, -85, -104, 67, -34, -61, 33, 97, 59, -107, -58, 0, 8, 60, -78, 20, 18, -51, -65, 50, 58, 47, 61, 48, -43, -111, -102, -89, -80, 96, 17, -82, 2, 78, -119, -30, 76, 122, -1, -84, -55, -90, -109, -87, -36, 57, 28, 12, -56, 7, -25, -5, -65, -43, 87, -43, -45, 32, 86, -116, 52, 16, 96, -105, -42, 10, -66, 62, -8, 39, 1, -24, 10, -92, 120, 108, -79, 9, -11, -127, -86, -53, -16, -111, -122, 101, -9, 93, 121, -41, 46, -23, 109, 77, -40, 5, -36, 49, 12, 58, -60, 99, 61, -50, -10, -128, -47, -100, -72, -57, 18, 79, -51, 54, -78, 1, 49, 30, 18, -32, -111, 25, -16, -123, 68};
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
    msg.setTimeStamp(0.369730710502);
    msg.setSource(1664U);
    msg.setSourceEntity(121U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(179U);
    msg.plan_count = 4131U;
    msg.plan_size = 1925528598U;
    msg.change_time = 0.197647004795;
    msg.change_sid = 23525U;
    msg.change_sname.assign("RIRKFHTKVSEBHWPFCGKLMCWXTLSRSVCFCSDRRPWNCTJMPWQMNG");
    const char tmp_msg_0[] = {-4, 14, 89, 78, -118, 47, -26, -36, 81, 102, 108, 45, 29, 76, 52, 50, 121, -50, 120, 20, -102, 112, -85, 111, -116, 35, 58, -89, -74, 97, 8, -76, 119, 64, 38, -101, -59, 10, 29, 101, -101, 110, 91, 97, 93, -7, 63, -112, -110, -107, -41, -127, 49, 66, 113};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PZLGQZVVKHUCJCMGKIQXXXASUMAFFHQINOHGZEVVVLMOVVITPBYROSLUWWUFGFANMEMBNSHCMDDYKZKNDGZVLELNSRHZHEPITRKSDXOXOEHEFTEYWDJXMESBRIQVBHMTMGNXYWKDLJADIZLFELCUNBRTTEHJAJOHBROCWTYAXJBDCNXTJPQWJOQBCCNFAOLC");
    tmp_msg_1.plan_size = 32830U;
    tmp_msg_1.change_time = 0.827951094352;
    tmp_msg_1.change_sid = 3240U;
    tmp_msg_1.change_sname.assign("MUXKSXMXEBLVWVHAAESIJUBZQKGNTSVZIEDETNRWNDIOUMKJLAFPXPHDWAVLNJDEYJOOKMPYNVCYFBWPMYHIHJWETIBVCWJJGQWBLNATOYBKCFRPGUYFTFHVCZA");
    const char tmp_tmp_msg_1_0[] = {113, 58, 23, -75, 38, 124, -50, 54, 49, -34, 32, -39, -89, -2, 3, 125, 3, -128, -112, -43, -94, -18, 126, 57, -13, 78, -41, 23, -53, -20, -113, 67, -86, -115, 69, 23, 105, -84, 117, 56, -76, -66, -106, -114, -75, 49, -47, -4, 20, 55, 78, 78, -81, 38, 35, 33, -91, 49, 51, -76, 45, 98, -68, 6, 20, -96, -101, -72, 74, 89, 101, 71, 3, -104, -89, 28, -91, 95, 96, 63, 90, 39, -55, -51, -78, 104, 42, -30, 72, 39, 113, -50, 66, 40, 68, -127, 124, 116, -35, -114, -67, -73, -56, -110, 82, -5, 47, -6, -7, 25, 42, -41, 53, -38, 18, 86, -45, 8, 80, -113, 117, -75, -92, -20, 56, 80, 104, -21, 100, 12, -117, -29, 104, -89, 80, 104, -84, -53, -78, 113, -91, 54, 42, -87, -69, 95, 119, -103, 14, 90, 48, -12, 82, 5, -42, 55, -95, 20, 47, -13, 67, -9, 50, -97, -10, 109};
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
    msg.setTimeStamp(0.996873607631);
    msg.setSource(45096U);
    msg.setSourceEntity(100U);
    msg.setDestination(5049U);
    msg.setDestinationEntity(103U);
    msg.plan_count = 28253U;
    msg.plan_size = 3464857170U;
    msg.change_time = 0.0519247453344;
    msg.change_sid = 61197U;
    msg.change_sname.assign("JXWSPPXVRJRFGDNGCBGCRKJTVICTFDEDQLYRYWAWRTLAZZMKLYHWYNSINJJMUMPUBDJLRDFTEGHMFAXVKKPWPTUNFYVQPVGCOUNZLMYIBZVDHSFUANEOADPIHCOSTMGLBFIFEIEFPRGKUHUCKOJPSAHUMRI");
    const char tmp_msg_0[] = {82, 4, -18, 112, -22, 98, -113, 83, -68, -44, 94, 11, 95, 91, -49, -114, 5, -23, -96, -38, 88, 42, -15, 93, 47, 4, 68, -126, -16, -87, -95, -7, -45, -6, 118, -27, 25, -84, 14, 87, -60, 14, -114, 2, 90, 97, -128, 103, -24, -42, -51, -52, -63, -38, 113, -11, 86, 62, -59, -77, 46, -68, -43, 82, -91, 37, 1, -86, 81, -23, -19, 8, -98, -51, -116, -40, 89, 123, -81, -80, -33, 111, 60, 62, 70, 71, 61, -116, -111, -74, -80, -62, -16, -29, 41, 23, -125, 34, -5, -40, -3, -10, 2, -38, -19, 100, -63, -102, 39, -15, -16, 117, 14, 102, 88, 110, 110, 27, -108, 44, 122, -97, 51, -29, 121, -71, 123, -65, -82, -12, 35, 49, 28, 12, 94, -8, 105, -119, 0, 74, 60, -9, 54, -112, 121, -97, 58, -101, 63, -123, -121, 14, -57, 69, -117, 31, -37, 121, -116, -39, -1, -43, 55, 82, 67, -41};
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
    msg.setTimeStamp(0.779453378837);
    msg.setSource(65452U);
    msg.setSourceEntity(174U);
    msg.setDestination(50154U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("AVUVODKLGZMLHGQFVIMYNAUPVGAFGLRRELRTJLMDVCFBXDJPJYXSRWZJQZXPMOUBPXCPV");
    msg.plan_size = 58692U;
    msg.change_time = 0.590154252514;
    msg.change_sid = 3319U;
    msg.change_sname.assign("ZOHAOBIMNXDVKXYZRGIWVQHOKXTEWJUJYSCACNOFUECNLASPCFKYJOAOBLYTYPGLUKSMXGBFFZGKPSSNREBPLWTHVCKJXBERL");
    const char tmp_msg_0[] = {88, -10, -103, -96, 67, 100, 116, -116, -65, -98, -35, -93, 61, 126, 36, 52, -39, -83, -117, -87, -82, -18, 1, 52, 44, 121, 97, 49, -43, -17, -23, 76, -18, 55, -75, 15, 67, -47, 50, -26, -125, -44, -93, 1, -38, -33, -11, 90, -92, -83, 3, -128, -66, 10, 110, 105, -55, 25, 83, 93, -74, -36, 124, 40, 63, -97, -33, 109, -72, -25, 1, -60, -6, -78, 39, 109, -106, 70, -4, 13, 93, 12, 66, -63, -109, 71, -55, 39, -79, 116, -39, 74, 17, -95, -14, 41, -78, -32, -115, 103, 111, 103, -9, -35, 63, 81, -88, -24, 88, -54, -96, 70, 44, -61, -35, -51, 57, 83, 106, 29, -80, 40, -63, 52, -15, 121, -18, -105, -68, 106, -62, 94, -127, -113, 26, 66, -8, -2, -60, -41, 66, -37, 106, -17, 3, -90, 86, 5, 69, 72, -57, -127, -19, 77, -65, 123, 23, -104, 52, 108, -14, -110, 77, -38, 36, 106, 32, 18, 10, 15, -79, 90, -59, 14, -5, 86, 54, -57, -99, -12, 14, -13, -78, 78, 114, -94, 6, -24, -67, -66, -65, 94, -118, -95, -7, -105, 99, 74, -125, 80, -74, 92};
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
    msg.setTimeStamp(0.576766751762);
    msg.setSource(30124U);
    msg.setSourceEntity(109U);
    msg.setDestination(44771U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("VHQLBCHALGXIXIHYLKGAOGODVOISWLPYZMBVFQALHONWDJYXOZZAHXRFWSAFXYCNYURGRPMAGIYXQJHAWETDRPMNELDQKGWITMFBENTGEIGZSJAHVEDKDVTDBWJIRSTCDLBZTBMNPEUQOQEUZA");
    msg.plan_size = 14803U;
    msg.change_time = 0.549796718997;
    msg.change_sid = 11124U;
    msg.change_sname.assign("QKNNCFLMGYBHLNBJZHPPQEFFKUTMNTAZAKVRMWKVMBJVIFFLF");
    const char tmp_msg_0[] = {86, -88, 28, 18, -24, 82, 56, 7, 63, 87, -85, 123, 49, -60, -59, 75, -89, -128, -42, 115, -54, 31, -44, 26, -16, -88, 14, -75, -56, -24, 60, -114, -124, -48, 65, 23, -37, -5, 22, 52, 91, 98, -73, 47, 17, -59, -18, -94, -126, 107, -17, -65, -13, -2, 85, 0, -12, 32, -117, -8, 117, -104, 100, -14, -10, -16, -70, 73, -2, -48, 75, -105, 9, 61, -30, -8, 81, -46, 108, 52, 4, -119, -10, 119, -102, 41, -85, -109, 24, 36, -54, 28, 32, -31, 40, -102, -91, 10, 9, -12, -13, -94, -93, 111, -96, 39, -17, -114, -74, 118, -70, 122, -76, -86, 121};
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
    msg.setTimeStamp(0.0684367535844);
    msg.setSource(29329U);
    msg.setSourceEntity(100U);
    msg.setDestination(16767U);
    msg.setDestinationEntity(227U);
    msg.plan_id.assign("BWOYYMJRWB");
    msg.plan_size = 35932U;
    msg.change_time = 0.0210886728818;
    msg.change_sid = 18753U;
    msg.change_sname.assign("OJBOZBKTCJZDIDTXOFGMSTEGMPWCVYOGGAHPCPPSR");
    const char tmp_msg_0[] = {-20, -55, -7, 86, -8, -46, 33, 34, 13, -89, -40, 1, -117, 32, -45, 57, -75, -29, 34, 36, 10, -17, -18, 100, 20, 108, 115, 70, 6, 112, 36, -16, -86, -40, -85, -39, -21, 24, -69, -37, -67, -65, -72, -72, 23, 39, 27, -128, 39, 9, 58, 116, -60, 9, -44, 96, -93, -25, -66, 91, 53, -78, 111, -112, 13, 86, 89, -86, 37, 23, 123, -38, 9, 65, 114, -97, -47, 76, -49, 103, -63, 119, -24, 90, 26, -104, 23, 68, 45, -19, -33, -118, 49, -20, -114, 99, -105, -95, 33, 113, -32, -50, -25, -49, -124, -120, -98, 110, -15, 102, -36, 9, 38, -1, 54, -90, -68, 57, -73, -26, -122, 47, 93, -9, -35, -31, 78, 82, -66, 10, 126, -5, 98, 65, 17, -75, -14, 74, -24, -48, 108, 22, 96, 126, 84, 64, 72, -31, 60, -18, -126, -76, -108, 61, -105, 75, -49, -11, 66, 31, -11, 98, -57, 82, 87, 11, -26, 83, -26, 124, 68, 86, -27, -84, 126, 90, 89, 106, 63};
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
    msg.setTimeStamp(0.848292803917);
    msg.setSource(3720U);
    msg.setSourceEntity(100U);
    msg.setDestination(45474U);
    msg.setDestinationEntity(46U);
    msg.type = 55U;
    msg.op = 254U;
    msg.request_id = 31102U;
    msg.plan_id.assign("RMMEUFSAYCVEHATKJIKKGMVQJLJGEO");
    msg.flags = 58190U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.956405859271;
    tmp_msg_0.lon = 0.459310220349;
    tmp_msg_0.speed = 0.976311300998;
    tmp_msg_0.speed_units = 44U;
    tmp_msg_0.limits = 27U;
    tmp_msg_0.max_depth = 0.232240804028;
    tmp_msg_0.min_alt = 0.163786618854;
    tmp_msg_0.time_limit = 0.973879417098;
    tmp_msg_0.controller.assign("HXSWNIVGBHSSHFYUJULUIOPQKMDTXRAURTZZCOMKZWOXIHJCUPWJYZEFUHHRBCBDLWTAGQOLIYAYQBASCUDZSQVWYSDJQGDBCRANAQBWCXKKOTJILVBNYQEPNSMEWMFNZVOICRRTPLKAIGPXTKEQVEVFYZPRRSBUYIOXMXMVFFGNAFEODKIOVJZAPNEYDSQCHJGGLUPDMFTINBVVXNLGWKHMEBJXWDMOGLH");
    tmp_msg_0.custom.assign("ZCFOQSFLFCLANVLKJORMEJCTOZECTOYGEWUHTTKDVMJKBLDAYUMUPVHKGICNKYZFORWXSIBEFWVBAIPDPQCBNFVWTVXMPZXIZLLRJUS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JPWDSPUCAFPOFISHKWIAYYIXNRUBQIKREKVFDEYQAZXCBHZJTGTCVAQKHOZLJJEPMMCKFXXWNDXDZUVIAJMHCJSSAITCLRUPUZHTBGTQEPMWLIJMDCWTSOVFNNDOFUEQSIOWGAYQOXCALHBTQNNPRGZSVLYJUUOLYERIFGAVERRNHHYNPVMEBRKVQXUXMNRVGFBGFBMKZJGSBVCCWYKLYMPKHELOAFXQKOLRZDUODEHWIMTGQLPDYZGT");

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
    msg.setTimeStamp(0.66180612013);
    msg.setSource(59722U);
    msg.setSourceEntity(221U);
    msg.setDestination(20152U);
    msg.setDestinationEntity(208U);
    msg.type = 124U;
    msg.op = 118U;
    msg.request_id = 15255U;
    msg.plan_id.assign("UYGJPMOPALXFOHZXJUIAAJCFSRKYGCZVWCWKJKNEGIHZOSPWBLRKJUHXKFRQVIZTWLUIZSVINIMVFEDRDMTRVBM");
    msg.flags = 19566U;
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.494226191874;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SQHTGRGFYVWKLXIKXWIQVJQYRXODPEYVIINSVOEYFZKSSURHMHLTWRMBJAQQDSLAJIAANAQWHJDMXWOGHFEDUVCLMONUBJGSOCKMRDWKAPNXJYMSEAPATGLNIKTXYBFJNV");

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
    msg.setTimeStamp(0.96949474052);
    msg.setSource(38941U);
    msg.setSourceEntity(27U);
    msg.setDestination(45028U);
    msg.setDestinationEntity(167U);
    msg.type = 217U;
    msg.op = 61U;
    msg.request_id = 26932U;
    msg.plan_id.assign("BNZTINNPGCSHGKXBBDZPVKAMXJOWUHETENCAWXYTFESJCYEXKGYBXEMQRTZEDQHIOLNILMIZZWGOSRRLBAOLVGDKCWPITZQIXUYGLQJRFRFDVYKGWTPREPTKIIFAKCNFLWTHUDKJNOAOUIEYUZMWPSGB");
    msg.flags = 60903U;
    IMC::EulerAnglesDelta tmp_msg_0;
    tmp_msg_0.time = 0.293594482877;
    tmp_msg_0.x = 0.0350892443337;
    tmp_msg_0.y = 0.799216942416;
    tmp_msg_0.z = 0.016941272854;
    tmp_msg_0.timestep = 0.274194637743;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UHCZXCTIXUFSSOHMAVOSNXZACLPWHZOMTRRZGQFLSTPZHKTJYBAIWPECKBGDGVGIIXDNAXLXWAFBMERPQDYVWXIUVWKVBFKKFVTNLGTSDEEXMRGJJDUSXMFULTGNXRDYZEKYASLKEJZLYJQMMHQGAYPCLFOWGQCYJYUYKBNHQPPNASESFWOENOTZKWPESLRHCOMDNHHIVQJKAWMJCUNZ");

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
    msg.setTimeStamp(0.571476521358);
    msg.setSource(52932U);
    msg.setSourceEntity(232U);
    msg.setDestination(31430U);
    msg.setDestinationEntity(207U);
    msg.state = 30U;
    msg.plan_id.assign("MTDTVKTXEUWXIHRFVTSFMCOZGOSFNBEOQNGRSBAZJPIHWOBJWSMZBZDJFLEDNQXVZUCKLUJ");
    msg.plan_eta = -281122054;
    msg.plan_progress = 0.870831065816;
    msg.man_id.assign("XOEGEUSYNOLJIHFWETOXTIYMVDMLENRQPRPHWTABESBKJYCVRFURKLCIBQBRCYJDCFQXZPWSCMHHDVTTECHNFGRAAOWNTPNZMIZPMADENARXXYWUCIWOPJOMGDLBJUALLEKROKHOPEZMFMAVKGUJHZXEFXZVJLPGQZNTPYSRJDWMFLVGTWIQC");
    msg.man_type = 54214U;
    msg.man_eta = 613720794;
    msg.last_outcome = 12U;

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
    msg.setTimeStamp(0.383748765638);
    msg.setSource(21524U);
    msg.setSourceEntity(168U);
    msg.setDestination(5948U);
    msg.setDestinationEntity(240U);
    msg.state = 175U;
    msg.plan_id.assign("RNSCFXVRCWSONXAACABPESRWQPKCTIOWHGQAWJEISOMUZJGGSKLTXFVFUDOMJDMZZUNKEGHGXYWPKHUQDWHPXJZMBUODZDUPYJBSQURLZQJARMVYZGBHEWUESHPTBENMONAVQXGILTJZUJPGRPMVLDXQOWINVRSEYPKNAQEDIL");
    msg.plan_eta = 1632935834;
    msg.plan_progress = 0.749937580888;
    msg.man_id.assign("IAFDSYSQWEQFEHFMAMIOUXITOAJZIBJIIRKKCZUZHJTRHOWQCLNATVGCZXVBXQSRWFKFVEKURAGQXGDMRLGZJNOMXPMADVLPROEXBJGVCKCOVBHGTRNFBIUATRUACTWQPLULMELHUYUYJMFLPIFVSYXAOLGQJKOLKWSNUDY");
    msg.man_type = 59536U;
    msg.man_eta = 1478054569;
    msg.last_outcome = 227U;

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
    msg.setTimeStamp(0.301537450753);
    msg.setSource(62290U);
    msg.setSourceEntity(166U);
    msg.setDestination(10078U);
    msg.setDestinationEntity(231U);
    msg.state = 194U;
    msg.plan_id.assign("ENPKNWGMAHFJWJPFEXHPZBDTYBRPQZYUESTTOZLABGHRHPKGMBNIWLITWFOHFVVRQAWLZYGDSIKRCADAUGNEXSAGBOFSYVLXYQCUEGCJHCORLRLNBQUFINCZBPNTKRFEGLTZSYDBOTMEVGWNQXSHDYZYTPQMOKYVOAQSZAVUJXRQLUWQNEIDKJDMTGS");
    msg.plan_eta = -251633546;
    msg.plan_progress = 0.407022121379;
    msg.man_id.assign("BCRPQASRAGMZLLVRKGOVWXBUTRZMEEYQUABMGVCXRZFJISMAJCNDSSMSVAYUJBWNSLUJEQOXPIDKKEOEMKLDFLKSOQFXIHZYTHBQZJTQWWFFEYTHGUCCJRDOPWSOWFRVLTTODRAYGPDLEVXFNJHHPRRPWIIPICHLCC");
    msg.man_type = 17644U;
    msg.man_eta = 1314280901;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.354545733316);
    msg.setSource(51514U);
    msg.setSourceEntity(96U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(80U);
    msg.name.assign("OQCWIYSIAMVLUIFRRNH");
    msg.value.assign("VCYRSTGZXTLQVVIXDFECIWXAOXKUQDCQFOIAVRBUZGGZXWJENCMIHQHODFOLEUWENUFXSRRTBGEYWLHQYJLBCYIGSBTJTAPIXSQNBYTOYAZLJDOXRFSFKHSHDSROHUDCHYAADLITKCMGOJIQSPLHPUUETAKUSTHQPALUMKCYYMVDPKAPEFOACMSNBZPGVJTNMGWXZUVMNZNQEDNOKGWKLXPMZBKBIMP");
    msg.type = 114U;
    msg.access = 168U;

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
    msg.setTimeStamp(0.235988539767);
    msg.setSource(2777U);
    msg.setSourceEntity(31U);
    msg.setDestination(9123U);
    msg.setDestinationEntity(77U);
    msg.name.assign("LMQMISVSBBFGFEKVAOINPGACGTCZIWVHFXJEEYMJABKNVOIEZQZUVLGHSBEFYCXALTUSXUPTRKFHJCMURFMODLWYMQKOPXNKVNYQOIHVSXHFLRWCJDWSDSXUXZECQTRSDGKINLQEMXYWLUXWVFIRYBRJDPCWTBGSANRZEX");
    msg.value.assign("WPMMXFUTMXILWPSTICOQGGCNESYVEJJHWQOJIGVGSJDYTDKLVNNCIHXVMSMXRRSEFFRGTHWALSCOLAWAQDNLXZHOKHIUEEQPR");
    msg.type = 165U;
    msg.access = 211U;

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
    msg.setTimeStamp(0.976355485677);
    msg.setSource(19599U);
    msg.setSourceEntity(242U);
    msg.setDestination(9345U);
    msg.setDestinationEntity(42U);
    msg.name.assign("RMIGVABCGOMUXEQCTGXQXYXPSWATBVVHYHWAKPXJTZWDCYRZRCMTJFYDEZURPDNIGTKEUMXVQDKSKSVZBINNAJQFODDZRDNONFNOJVSDYFPCYLQWUJRPLIIUZKJUTLKVMGAQOGQQJPFHEBPDBCMTESEGDCBVWRLAFRAVPJSOUBHKKNHSBWYRYHLJGWMTPRZTKXISZLIPEXEMZEFIOIHOXWWMLYBFFGWOXQUINYLTHAUN");
    msg.value.assign("FZTIGZPDIXADIPGBKSXCUTPBISUCKZBTGWMFWAICQSUXSHXOCUOEUKWYHEQBVDQJOMOJPVUCPDEXAWLRMJLYVDAXULZRHSJZCNMFBTNIHTYQWTMERSKZQUJNOKCOZTSQQTLUJGXNOVDYIPGGBNHDZAGYNTWHEXTSRYRPGHKLIMKBVPSJNPMLHXNCJXVVRKZZYCICQ");
    msg.type = 87U;
    msg.access = 28U;

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
    msg.setTimeStamp(0.824370909298);
    msg.setSource(63181U);
    msg.setSourceEntity(241U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(8U);
    msg.cmd = 111U;
    msg.op = 43U;
    msg.plan_id.assign("AIZNFSJTKEWFTNXMBYCRPSQJHTGJRGGOQSYIFXRQVVJUNRBORZZODDKKFHIVPNZRKHAAZYNMLIFKLVGYUZEDBOCQWYZFQUUEDRLNGGLYHCDVPTLJESTDNSVMSUCTMAIYGVMHCCSWQTUXVLWDXXZFKXHTOIEUJ");
    msg.params.assign("UGPFGYNCOYXJDYSXCOSWULPCDTNUUPGACRQAFSXEIXAFKPEYSZHKKVTBHHJMQVICXTGR");

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
    msg.setTimeStamp(0.590325711453);
    msg.setSource(15493U);
    msg.setSourceEntity(91U);
    msg.setDestination(23323U);
    msg.setDestinationEntity(174U);
    msg.cmd = 129U;
    msg.op = 74U;
    msg.plan_id.assign("SOJUMABOBCYSRBSKOSZEWFWGAJANXOYKFYVGDITVEHXTFCDNGIUNCKDSBQHWBZKSH");
    msg.params.assign("WSHLMVHSHPQRIEKFLLGSBJICZNBIYMTECKRYGYLMFCJDVCQWPYMBGYQXFYKAPENQUSBNHVQPYJBGLAZTZPHHEYKIAOJNETGDXMPUALHJTLOARRWMWVXSOBGXJOPRKOUMLVNGZUYPUTAOZGBTXJBNTVCRJZIKSDFQAIBDRKUWZIHXDGQISXVEAWUWZOGWURVBACQLCEWCTEVOW");

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
    msg.setTimeStamp(0.0913077272808);
    msg.setSource(14693U);
    msg.setSourceEntity(143U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(97U);
    msg.cmd = 43U;
    msg.op = 100U;
    msg.plan_id.assign("GKNAAUTHNAKVSLKWEBNZYXZTHCXMXEBKAENJIJAAZQRFHSNEIQGLLJGPQYPJYZHHCVWDODVDVIMVOUNEGVWQDSJMQPSVFOBQPCUXWSOQIRRZFTBFRFHFGQKUEBULCMIUBWHMGSPBDWUZLIUBXSHADYZKFUGQCBERYPMKWRP");
    msg.params.assign("BYDEQLBDBUNJOPGBEWVV");

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
    msg.setTimeStamp(0.904246047997);
    msg.setSource(44391U);
    msg.setSourceEntity(252U);
    msg.setDestination(61236U);
    msg.setDestinationEntity(11U);
    msg.group_name.assign("GOQBIKBUYKKAZPMVTRPHRXNFPIYGLOXSHQZWKURLLCATJGEWBUHRJXVRIHPDRALOQBNVLAYXAXUQYDCKHCXAJHZUUDJYHPIOCVINQFZ");
    msg.op = 154U;
    msg.lat = 0.168040043661;
    msg.lon = 0.659867698776;
    msg.height = 0.168691940444;
    msg.x = 0.149924636574;
    msg.y = 0.914802405872;
    msg.z = 0.910585024822;
    msg.phi = 0.406720029061;
    msg.theta = 0.999783076679;
    msg.psi = 0.447262868463;
    msg.vx = 0.458427754613;
    msg.vy = 0.77608872408;
    msg.vz = 0.0667556756315;
    msg.p = 0.0706764236242;
    msg.q = 0.128767181117;
    msg.r = 0.852284918368;
    msg.svx = 0.442488108765;
    msg.svy = 0.161514539198;
    msg.svz = 0.227337982055;

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
    msg.setTimeStamp(0.196666973628);
    msg.setSource(50288U);
    msg.setSourceEntity(38U);
    msg.setDestination(9863U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("GTKVYDVPHGRVLGJCEQCKQFNFQPPACBWZFCUNHBJIJQLVPWSFTRXGJTPMDFMXWVNBMKTZMXAAFBEIQQOIJZKQUCKSCGMUHOWHIOARLZEMTEZWYWIFGLHXOYCZFCLXMNALZLOKPRYJPYSSYUPG");
    msg.op = 133U;
    msg.lat = 0.689210053587;
    msg.lon = 0.250406296242;
    msg.height = 0.518253236689;
    msg.x = 0.657703038222;
    msg.y = 0.91448895031;
    msg.z = 0.338939960098;
    msg.phi = 0.712472157519;
    msg.theta = 0.245248812253;
    msg.psi = 0.159692802468;
    msg.vx = 0.202201546201;
    msg.vy = 0.185766377891;
    msg.vz = 0.707846402927;
    msg.p = 0.255510981574;
    msg.q = 0.310468224841;
    msg.r = 0.877074855651;
    msg.svx = 0.603725212891;
    msg.svy = 0.982834744466;
    msg.svz = 0.982893803723;

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
    msg.setTimeStamp(0.0251188118884);
    msg.setSource(22461U);
    msg.setSourceEntity(84U);
    msg.setDestination(29860U);
    msg.setDestinationEntity(67U);
    msg.group_name.assign("WVCZVJYDWBHPQWIQRWLGUMOZRBFHVMXXAEWGLTRYMUXVUMGDASAVPPYMPOLGODHXONKSJWKSEHWPFDVOYPEQAEUHGCWVEGMMGOJIJGUQMFUZNZKKIEFGKENSXHXBALYZTKHXOFQJCFPSTCAVJJSRYWBRLMINRHCLCTJBUXQQTRZPCUDKZILBODFLQTBRDEIIQZECLKDBGTVSNYIYAKU");
    msg.op = 13U;
    msg.lat = 0.612538183049;
    msg.lon = 0.639761595836;
    msg.height = 0.723693803743;
    msg.x = 0.0089501006942;
    msg.y = 0.830077173228;
    msg.z = 0.668181771672;
    msg.phi = 0.575993800379;
    msg.theta = 0.419271296638;
    msg.psi = 0.856253378314;
    msg.vx = 0.575355035695;
    msg.vy = 0.306391403083;
    msg.vz = 0.493139017979;
    msg.p = 0.863349395337;
    msg.q = 0.594946579382;
    msg.r = 0.854502776855;
    msg.svx = 0.782329879346;
    msg.svy = 0.501413243436;
    msg.svz = 0.632812670783;

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
    msg.setTimeStamp(0.299291012176);
    msg.setSource(10548U);
    msg.setSourceEntity(170U);
    msg.setDestination(56032U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("AOGYEXOMUXYTXFUDEEPLZCQZKCFRGCLSGBCLAWAJCKPDZDNRIEFHDIDYTFVTWUFNKPKJAVXIGSCFLHEGJLRSHIAKOVUZSHLWHVJWIOLUBMMYQDGQJMVTSWHCBGPXPNWZJFSIWQKTNXAKXBRPQNYCWBYOUQBTHMFOQRBOJNTQYDSPILAIRMIMVEXYNHVUDGKOZLYSCZEVYMSBGPONKHZUQWSXTBJLWP");
    msg.type = 95U;
    msg.properties = 175U;
    msg.durations.assign("MIURXUCOELBEKHRJEQYYBKDLMTKHMPSIEGSUAFPTXQSJCMMMUNDRXZOGVWVOOGLPPEFRHDFAXZONLWNOWXNDUBVSKPCIJVGJDQRTWRIVZWHQLAYXCVXIVBHZJXFYHSFNOKYDNTOVAGDSWFGBEQMNAFZZPTINTFOGAEESEAHSISCUUOCTGYZNRCALFTTRZYVG");
    msg.distances.assign("FHAILCXPHYNNNVHPGUQOLALKSWAUNBBDHE");
    msg.actions.assign("GPHPKSYRYUPENHQEPWCTISLRXPXFZCGVSWWXHPDLLBARRLTBEEBHNGXKIEUYTXUJLHMKZIITRPHUGMFAYKFJZABEAWMFXORMMBPHVCGXDVXSTFRQYLKYPKKXBGKNWMAZCSICOVVOEMDHCGZWNKJODJSLQNYQQYOLAYCVFBNFDRJDWDNNQZRZAUCIJEDOOAMOTYMXWSGQ");
    msg.fuel.assign("XYYEBTQPPAGUWBWSIXWKMBXZJOAMUSVMQFDTWKFSLRNYRE");

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
    msg.setTimeStamp(0.685253638693);
    msg.setSource(35275U);
    msg.setSourceEntity(62U);
    msg.setDestination(15617U);
    msg.setDestinationEntity(108U);
    msg.plan_id.assign("DDTVRJYAPIPZWSZFNAOLKJDVKQDXWHYQIEALSTMXQEDKFJUQXRHLTJFICWEBUOYVV");
    msg.type = 174U;
    msg.properties = 210U;
    msg.durations.assign("LLKJXODRVP");
    msg.distances.assign("HPNDXBXWQPDT");
    msg.actions.assign("HRRNGEZFHMEQSMTZGCJRUVOWTOZQOMJEUFJSJEGAIXDRJKVGPHYRKQVGNFNVGKHBATRJDZYMXXBAXAUAQIYNYHBIPLEWLLUDUPPLJJWLMWAPLXGQCCOVBBWECXWLNUASKURBOSAACPFYZEHN");
    msg.fuel.assign("JDIZKADCUOHBQATGKLKWHYCVZNQWUNXLKXTHJJAOHVSZBOICPNBOGYXFAQEFXIGYHMJEFADYSD");

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
    msg.setTimeStamp(0.900162794025);
    msg.setSource(6602U);
    msg.setSourceEntity(199U);
    msg.setDestination(15631U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("ULUTOONGRHSYMOSPEDYLIOPFBETASWNRSQLSTMKKABDHVUUFCLJOFVTVNHNMMYCXQGARYDCOPDJNRRZAQOTZVDEJRGTTWVPEXB");
    msg.type = 207U;
    msg.properties = 67U;
    msg.durations.assign("BIKSJUWDNAYKUFBBSJTDPXXF");
    msg.distances.assign("CXRFUKXRLMRENBXYLYUVPGXEHCAHVQAACQKKOAFWYEBNCEOWJISOFGNMXJWTLGDLCVZQFYUXQEDQFUBJJIMZCYJRWNOFYVNFVPMPWUWTTPSSKPJHAAMDENRKTSOSJQIWTQDWKKDVTXVKOQYHLRIUJZFWIVONGT");
    msg.actions.assign("WPMXJKKETZPGKFEDYKCOXMYZKIWNNCGZYHNVSLRVHOZ");
    msg.fuel.assign("EWZAWJXVLHFIWKXUIWPAUUVLGRHPZRUGCRLKNIJUNPWXHLPVYTTKAYZYLFOINCJGEOAWIQQMQDFWBTXAYMQNJCSMELBMLOPDANVDHQXYQEKBRGDSOSKNXBJGIIBETTHEXVSIMINNMOZSCPELYZPMZYCQWBBHSIBPTLETSGZRHBVUKORFDVUAVJAFRSXMDTFYEDFUMFZG");

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
    msg.setTimeStamp(0.798564615551);
    msg.setSource(14144U);
    msg.setSourceEntity(51U);
    msg.setDestination(46304U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.99599343672;
    msg.lon = 0.804848476257;
    msg.depth = 0.42139022557;
    msg.roll = 0.97073152247;
    msg.pitch = 0.779475315738;
    msg.yaw = 0.38012805973;
    msg.rcp_time = 0.959412493323;
    msg.sid.assign("ISLZYOJYEAVZSP");
    msg.s_type = 51U;

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
    msg.setTimeStamp(0.0180325620665);
    msg.setSource(3144U);
    msg.setSourceEntity(134U);
    msg.setDestination(54637U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.36565260341;
    msg.lon = 0.232082006752;
    msg.depth = 0.446592351232;
    msg.roll = 0.681168543306;
    msg.pitch = 0.620541032777;
    msg.yaw = 0.792094341015;
    msg.rcp_time = 0.517986890718;
    msg.sid.assign("UDFRJBKFFNFOXWTOAXUVJJHNNZUPNLRRUKGLNUOUNWLYQTTB");
    msg.s_type = 71U;

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
    msg.setTimeStamp(0.00872244363854);
    msg.setSource(30338U);
    msg.setSourceEntity(78U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.965179028152;
    msg.lon = 0.843996786167;
    msg.depth = 0.0383480363024;
    msg.roll = 0.290893692232;
    msg.pitch = 0.760648693008;
    msg.yaw = 0.792689277868;
    msg.rcp_time = 0.855028154021;
    msg.sid.assign("XWHIOBODLAQCBQZAOLJ");
    msg.s_type = 127U;

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
    msg.setTimeStamp(0.550672962464);
    msg.setSource(65208U);
    msg.setSourceEntity(235U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(49U);
    msg.id.assign("RVJXHBCSOKPIBEGNWPTRFVQXLOUHDUWYYLKJZJAOLBXMFITUKMPGOCUIHOXKMLXIPPDEREUYJZITMZTIIFQOC");
    msg.sensor_class.assign("FMEUAAQIHGYWTWJTJXCPZJLLDMZFNJBGUCSMJVGPYYKSAWXRSNWVPJAFLUYDNPFMPNLAOKBTMIOSJDIZKTBPDXSCDVNXXMRKEYSNWJUCKDRTNZUZQOQWCHGMWLBJEQUIBFABQTOESAQLYFNHQD");
    msg.lat = 0.28421860077;
    msg.lon = 0.965141070021;
    msg.alt = 0.172790501003;
    msg.heading = 0.739582178625;
    msg.data.assign("EONJELKQCNNBOXOZVEODIRHZKMOWKSFZPQWYXDCMZXZBNFFNGFDIVQWEGPXIOAYQLPLHWUDDHVHYYBPZFNSATVBCVUWRUKSDVTABAMLZRIRHQJNADYXTQHIJSLISLUYOJWWREMBFSXAFLXSPSPKLQBERXOGMUUGPGLTFJZSTIGTQDTOMMUUJCUREJKOBPCSPYGHIRTJWNVVJGKLGECXUW");

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
    msg.setTimeStamp(0.121512129741);
    msg.setSource(44519U);
    msg.setSourceEntity(28U);
    msg.setDestination(54573U);
    msg.setDestinationEntity(196U);
    msg.id.assign("GDTQWTZGYZPFYRIYCKYFRHJPZSVSSWWLJDMDPVKOGSHAWVZYEYNZDADVLQTRKURAKODNBGCNPALFVBMIJTJNTFEHNLQXKSXDAAXIOEIMLEUIXMUJXDGPVVMXEFYFOQEXFZZ");
    msg.sensor_class.assign("UXAHVBHYZLRGMJFFAPEXLFFPHWUUUGDDVNWXIDIDZSJNMZMAQBRDRJBISCKKHYGTCYCRESEVBCGRJUVXIPRWLLJGKPPXISJVQNWOYQTTDTTOYNY");
    msg.lat = 0.94735633174;
    msg.lon = 0.488941996904;
    msg.alt = 0.389477960015;
    msg.heading = 0.769733316333;
    msg.data.assign("EUGDHVMEHBKFXLWYMQNBDOYSQJWLMRDTLPSPLAETSUAHVQOTFJONFCFEKPYCTFKGDAUIPXLKXAAOFOQJTIOAYRUEPMMGHVIZCJERDZUQVKEGNXVDNIUXTPAHWMIPSKAEK");

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
    msg.setTimeStamp(0.418516940224);
    msg.setSource(19539U);
    msg.setSourceEntity(76U);
    msg.setDestination(16938U);
    msg.setDestinationEntity(203U);
    msg.id.assign("VWILOKQXFYDNJISFTMSTXSBHUZCUVQWTXUWQFGMAFEJOVANHSYKMCDKWSPABJNBPMXXWNQVKNWFSRPIQNSLWEZYTIDMMEKDEBXHBCNIOHVLWPPJLYOYXGDZYQJHKGTARGHDMGEHXTZWVQFEUDTZZPIUOVCGPAUSABKLRLLRCDSZROHBQYJMRJCHQFMEITORNARKFJOPLUKOIRZBVMAJGQYFAWPPCBGYHGVKDTCLINNOZBUEL");
    msg.sensor_class.assign("FEILJRIOBNYOIJDYQXUWZFZOVRZGSLAUQHHVAVIWPOOTTDWFXSMWLNUKRKAX");
    msg.lat = 0.800913539497;
    msg.lon = 0.564471665696;
    msg.alt = 0.363601683488;
    msg.heading = 0.0849202354356;
    msg.data.assign("RFLSXMMZCKLQKHCAISANETSDLBZGOTLCYEVWXDZZYRDZPCRPFQWLEGVONAYXBUPYQNRZUCZDNRISEHQUEFTUVWTTMKXGKXIWBJPKMHSGBPFKPTCJSQYSUGXHYVUBWDHHSBGAYPQRMIXFRUSVIFDFEWQJNRTUHCNCBWMPLILTVOMWAVAXAVMDOUXWXDTQJKOJIDJJJNON");

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
    msg.setTimeStamp(0.667865859979);
    msg.setSource(53273U);
    msg.setSourceEntity(214U);
    msg.setDestination(53101U);
    msg.setDestinationEntity(162U);
    msg.id.assign("WIRSMKXQVGYFADAZFEMKJAJCQLCALNXPDOCTQJIRRWHWGMYXSNQAVWUK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("QWZPZYGXWEAMSOKXHUVOUFGULPUXIIATQSRAHWRNJIETXRLWBLOBVEBOQPDDUZKSALTRHFJFTDDLNBWPQGRVBPIJFSNJYWJUFXMMDZXLGZSYVZHOEBXMMNCOCVJNXHEPOSDGKLHVMARAKLGYVXQQGVKJCHFHHPWTIBDYNKQQMJYKUSVZZMEUFEMCVOI");
    tmp_msg_0.feature_type = 54U;
    tmp_msg_0.rgb_red = 37U;
    tmp_msg_0.rgb_green = 151U;
    tmp_msg_0.rgb_blue = 240U;
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
    msg.setTimeStamp(0.573921824);
    msg.setSource(20618U);
    msg.setSourceEntity(74U);
    msg.setDestination(41171U);
    msg.setDestinationEntity(78U);
    msg.id.assign("UXZLXQBJBHPYTYAEVJRERPDQUFBMYQJZKGCUMVVCGMQIAWTSRFDSQLIKISMZRCJXLXMTLSZMTFVIZSDWCLPGHQOAKSWFNXZNUSUHITIFIEOVDEJLGSGFMOBOFOZKHLZJETVMETPNHCKBXZGGWXRELWMVHYHQHSINYGATBFDRLNDCPNBXIAVPXW");

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
    msg.setTimeStamp(0.664429879158);
    msg.setSource(18082U);
    msg.setSourceEntity(4U);
    msg.setDestination(52935U);
    msg.setDestinationEntity(112U);
    msg.id.assign("SPQFOXHJMMQTPDROIHIHNKFVJZGQWVXAHJAGMSZHXIOSBWDQSCZGBGUEJJVEHBHPFJPIPUXODEHZIFQAJSZCBKWEBRQTGIAKYPGSRZCFYVDKWAILDFYNLFOQOMODPKCUCSUMNTEREZLBZRYBXCCEFLXHNUGTRAEWUHNKPRAAXKCNTUYCMWNQDRYYJBUKMV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("EPOMMNLXAUXVKWWCLRDSTLUKKSNZICRFOMUCUIAQBYTCTCYYDPPJUSTFZQWQSSTDYLBHOAG");
    tmp_msg_0.feature_type = 12U;
    tmp_msg_0.rgb_red = 242U;
    tmp_msg_0.rgb_green = 193U;
    tmp_msg_0.rgb_blue = 158U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.702965150984;
    tmp_tmp_msg_0_0.lon = 0.435183091282;
    tmp_tmp_msg_0_0.alt = 0.576148645584;
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
    msg.setTimeStamp(0.181618978137);
    msg.setSource(30739U);
    msg.setSourceEntity(163U);
    msg.setDestination(2868U);
    msg.setDestinationEntity(200U);
    msg.id.assign("ASFYOCFUYJEPSIQEVFBSHZZEKNMVUBJUGDCXLMPMUZTCGSWGENNKYVJVDYDDOCOQBXJZLIRIWKJIQPVTQLKEPGSXBUHAGTKEOEOIUAWWNCGDATORYTHJPQSNWLMPAWPXBDIOYKEYRRJMRIUXFSQRJZXSTMFZNGCCWELKBVYMRINORDVLUDZPHUPELYQXG");
    msg.feature_type = 238U;
    msg.rgb_red = 243U;
    msg.rgb_green = 195U;
    msg.rgb_blue = 239U;

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
    msg.setTimeStamp(0.549966581838);
    msg.setSource(25399U);
    msg.setSourceEntity(57U);
    msg.setDestination(31714U);
    msg.setDestinationEntity(64U);
    msg.id.assign("XBWSUKRWKSGVCBGEXMNPVDKGNIHOVPAZSKRZEAHBJXGSVIYQXQDTMLKVJYEDPMIVDOAWDZRBQEJFBNOQUIICOGORLCSGOALBFFJCYHOLWLAQPSYHUIPUSNY");
    msg.feature_type = 89U;
    msg.rgb_red = 109U;
    msg.rgb_green = 30U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.930928340075);
    msg.setSource(10203U);
    msg.setSourceEntity(9U);
    msg.setDestination(47535U);
    msg.setDestinationEntity(2U);
    msg.id.assign("OGBQZJZUQEIJGWEVMGODWTQHVSQPAHSJSMROYDAXMKOTCLNCHRUVTYZSHBYLJSQBWMGJDEHLUNPIKCJASKBNTPKMPNYIVOEKPZOYBCNCOVLGEGSRFEUDWTWFYZHTKQKEZRGRJEFFUURXZMNDLCAFBXNSTQZZFZRNGBMIFDXAY");
    msg.feature_type = 110U;
    msg.rgb_red = 201U;
    msg.rgb_green = 172U;
    msg.rgb_blue = 233U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.0577199165054;
    tmp_msg_0.lon = 0.724403104802;
    tmp_msg_0.alt = 0.108453962573;
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
    msg.setTimeStamp(0.718230495997);
    msg.setSource(34800U);
    msg.setSourceEntity(87U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.537395809908;
    msg.lon = 0.710154193947;
    msg.alt = 0.682679801105;

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
    msg.setTimeStamp(0.1173616969);
    msg.setSource(40863U);
    msg.setSourceEntity(84U);
    msg.setDestination(27104U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.6750449753;
    msg.lon = 0.770221175262;
    msg.alt = 0.224290415359;

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
    msg.setTimeStamp(0.167066881886);
    msg.setSource(54998U);
    msg.setSourceEntity(195U);
    msg.setDestination(19716U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.671581316829;
    msg.lon = 0.511261131316;
    msg.alt = 0.868769993448;

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
    msg.setTimeStamp(0.647132778712);
    msg.setSource(42587U);
    msg.setSourceEntity(231U);
    msg.setDestination(50419U);
    msg.setDestinationEntity(97U);
    msg.type = 147U;
    msg.id.assign("RCHZRLHNLWVPITGIRKXNYJLGQGZVVGRFHNQTFIBDSTEZAYWOHZUYVKJRUWBDMXXRTLDWU");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 50525U;
    tmp_msg_0.lat = 0.677326046625;
    tmp_msg_0.lon = 0.416303525794;
    tmp_msg_0.z = 0.0330655158477;
    tmp_msg_0.z_units = 20U;
    tmp_msg_0.speed = 0.951419315534;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.roll = 0.542548642374;
    tmp_msg_0.pitch = 0.797038344242;
    tmp_msg_0.yaw = 0.349197915677;
    tmp_msg_0.custom.assign("KWCKEJCQXUVQABFBCXSGPZFWLMWNVYNYTLIHISVBEOUJKSOJVDUORWQZXXCEEKIGBSXKYIXHMLRGTFMZZFYQOHMXOKIBXRTMINPODWJROHAYMJFVZYTPKASQGVAIJVVQUMLCUXSQVFKDBWCERUALQOBYTEATTZBMFSVQSFIWLGKZIAPCJAORWAGTSRNNKHNCXQGDPODU");
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
    msg.setTimeStamp(0.476403609347);
    msg.setSource(47459U);
    msg.setSourceEntity(233U);
    msg.setDestination(55635U);
    msg.setDestinationEntity(28U);
    msg.type = 73U;
    msg.id.assign("XCMSIYBAVBTN");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57153U;
    tmp_msg_0.off_x = 0.148503208823;
    tmp_msg_0.off_y = 0.682292955702;
    tmp_msg_0.off_z = 0.669270709746;
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
    msg.setTimeStamp(0.488182508074);
    msg.setSource(5542U);
    msg.setSourceEntity(52U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(61U);
    msg.type = 186U;
    msg.id.assign("JOGWOONLITYXPAVOPZNXEKWTTHQIBAVBRYHETTCQNLTUAC");
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.311626303838;
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
    msg.setTimeStamp(0.0623958084595);
    msg.setSource(1351U);
    msg.setSourceEntity(156U);
    msg.setDestination(23629U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("BMRYZMNMOGQZBVHCNXJIIVAMJWUHFJLLEKVIXLUGVBTNTQRGIWDHSWOYDLCHBYOKSLBXOFUPFZPFZSCJOKJGUWVIVLPOHRXKSQGOFCXNZDCDGJCKGYEUENHWWUMRUAANIIHQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QYBCHFINUCCWEKQLAGBVGAMNZRYZIHKTWFCBJOXEZOJWTHXJXYAQXIFGFPVHFTNNMRKPXUECOATMNEHKMNDTNSSWNWTSQRAODMWPVKEFTVVLHIGUPJLKXQRLDSOWOBIGSBHJLCEKIJGHFBRLSXVZFSJLPAJLYKAWQNPAYGUYFHMZQSORIEZRVZDPYVBXDDBDZLGRALUUBSRBCUEMSTJFMEOY");
    tmp_msg_0.sys_type = 32U;
    tmp_msg_0.owner = 27457U;
    tmp_msg_0.lat = 0.862911666844;
    tmp_msg_0.lon = 0.103809925199;
    tmp_msg_0.height = 0.654947643356;
    tmp_msg_0.services.assign("FILJQANHHWWURKRXWTIEMSICIKRVNCAOYEYYANBQAPNXDLYOQGRBHKTYCLVITQGNUSDSPUVOHZKOHFLGPJXMDGWVDZYNSFPJWLWKSOXUXPQQ");
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
    msg.setTimeStamp(0.918279758779);
    msg.setSource(2820U);
    msg.setSourceEntity(113U);
    msg.setDestination(22485U);
    msg.setDestinationEntity(69U);
    msg.localname.assign("TMLPLLUTERMWCSYVYASDKYWNSPKNIYPQVQMICHQXHPELHOBGSYZNDVWUAGFQFPTYG");

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
    msg.setTimeStamp(0.957751982653);
    msg.setSource(59350U);
    msg.setSourceEntity(186U);
    msg.setDestination(10579U);
    msg.setDestinationEntity(40U);
    msg.localname.assign("FDPJJKSRFDIQA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KMPBUXAISQFBKUXPWNMAJHXTTOGCWAKXCLFNQZQFBFIJMSZKPUDURKQRGRVJGXKGGSVROTSVTVCEICJZVLYFJLXKFUXBIEVYSCBTUIXLQOLHMZIGGPVITDWNYHGBNPEYTGNYHKPPQZCYDLBWASZFFGEBAEMUBRADPWHIANSOQELHLDCUUTFKWZMCMKZSDTHJRPRJNYOOJN");
    tmp_msg_0.sys_type = 149U;
    tmp_msg_0.owner = 23969U;
    tmp_msg_0.lat = 0.0984424915034;
    tmp_msg_0.lon = 0.11004744328;
    tmp_msg_0.height = 0.440302103732;
    tmp_msg_0.services.assign("FADLGWBLZFLVYTTPCXJXHAMYAGPRHFVCICNZGYEAEGYXCFGRO");
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
    msg.setTimeStamp(0.136561756275);
    msg.setSource(34046U);
    msg.setSourceEntity(91U);
    msg.setDestination(46178U);
    msg.setDestinationEntity(191U);
    msg.timeline.assign("XGDMWSNIBRCIETKTFOUBWTMFJPQPFXFUSBMZUANEDWKVOASYAZOZXWLNPBWYRKKCOCOOJJXMBZCLQOUARXFVDLXGIMCKEJJXSCNZZKSRQHMVLDZQMEEZHQWFTXSBNAYERDAMVSVNPKBNVJGHWOLHEGJOKUAGKZKQVLPHNDRDYUJBRHGVTJPWT");
    msg.predicate.assign("WOTZOIOGVKPFUMCLHHAH");
    msg.attributes.assign("ZQDPEQGGDSCDFHKFMOGACSYQRABIWVFNBRRXLSJKLUYMBAKHTKRJNIZBFAZBFINRPYLQSVMSWPYCIHWELSUETOMNBIOCBLPLNUVKYFIWJOGDVXJDOSHQYELOUGXYTYDIMAKHEPTCMLPUPEAIVDSNAEMEVWAZRKBQJFCHNOHZQRLFCCYMWVHXSYOAFDKCBNKMARCQUWXZXGTGOPTTVGUVHE");

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
    msg.setTimeStamp(0.810503962896);
    msg.setSource(7078U);
    msg.setSourceEntity(87U);
    msg.setDestination(28615U);
    msg.setDestinationEntity(8U);
    msg.timeline.assign("LUZBQERHYCWWKUGVVIYDAGN");
    msg.predicate.assign("JEUZWDKAVHWXTREAYZSQDTPWOIQSHYKVCAYNHPTOCENFGKHMMSCNJCNTICBQCYOLHUGVELJMQXVMOALSPOBDPJEFBZUIRPDUABBGVVYZCJBDMQXAIZANIIFXIKUPSNKPEQYOADBDFWGLHMAZEKRSYQFUVSZEUJAKLTLCOOGOWJRYMUFXXUPWGHDTTFHKVLNVDVWQIWQX");
    msg.attributes.assign("PYUJJMZVTRHZOCYWPXABIOEMLDFOYOIMSRQCUVFNEBXGXURRWVAMLZBPOZKGLIDKCOWNXGFSDSCLINBCULFIBGLACRHFGYCEXPYUFMKMAIIWGQVUXQWHVNCJTYWABPNJFRXKUKQYXWSEBOVKPQLPDNHEVBSDVTNZYHTHNJHIEHEUOMJXUGGKDANLOGWFFVLJZNTDAPASMJERRQIDUSPEFDJXQDZRWSMQCLHATJPCTOMSHZAZIZQWKQBEKY");

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
    msg.setTimeStamp(0.527727434037);
    msg.setSource(23874U);
    msg.setSourceEntity(133U);
    msg.setDestination(10790U);
    msg.setDestinationEntity(3U);
    msg.timeline.assign("FJYOJUWERIZQCYDHQZLNHHFYHQRIKACSPCZJKNACANOUZMIKFAAXYAPXUIWSGXIBMDMOXEYUWUNBIXOWYLGNYLXBFHRTDESVEVQOBCZCMGWKMPONTRDQBLVUJUZEEIBSUNGJKTDLKKWPHQAMSJVEPZFHWJVCAF");
    msg.predicate.assign("DMRBVVXJGKFRRWROMWDACZQIRAPJNTHZEHVWWGHVHBJSGPDAYVIYIMEGAQVCPW");
    msg.attributes.assign("NDQVZGGNVEXYINOHKRRFZTOWFZVMECYKQQTKBGNRMPFOTOZSNLNUHFVKWXXUVAZSGPMPCIQREPYUBEWUFT");

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
    msg.setTimeStamp(0.395305508169);
    msg.setSource(33504U);
    msg.setSourceEntity(90U);
    msg.setDestination(37329U);
    msg.setDestinationEntity(133U);
    msg.command = 61U;
    msg.goal_id.assign("XABICKAYRKEEOPFCGMFQBRPSGFNVGDGTUFZXZEALVHBLJKKHICJPLIRQYMFKAZOUTZCUQ");
    msg.goal_xml.assign("UOJNAINDYWSTEKGSRFYHUDQKNXFZCMXVZPLGKEQNSRFTYDEGNDCOMDDLNZHQDCXJQBPKGLSY");

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
    msg.setTimeStamp(0.0292269982551);
    msg.setSource(2693U);
    msg.setSourceEntity(193U);
    msg.setDestination(9962U);
    msg.setDestinationEntity(91U);
    msg.command = 234U;
    msg.goal_id.assign("IDAPCMTULQHLIZPQNDKLYFIYUGXUAGUUBXEWFFAYKLYUBBZCYSTMSSFVIZRDCLCCJNIXDNCHVBIFSWKAZMTVOJKZKUYDEONRFTJWURHSJYSGGLTMWOIOLGPGZBHGBSXQTXABGTQPUQJRTCGORTYSQMUBHNWZZJZPYDFWCEVNIJAAXPKPMTSLVEQWRFFXXEAQEEBFVSKVLHXVPDXIMEKEPDDCMHHLJZAQNDNOV");
    msg.goal_xml.assign("BEYMZQQGSFFINUXALWDBKBAJJGQQNIPTBEMKGMOIVIXWLFQJEGLTZQIEPYEXCXHSLFMAWRLPZCVCSJZDCUATPYHQ");

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
    msg.setTimeStamp(0.147653848324);
    msg.setSource(63433U);
    msg.setSourceEntity(159U);
    msg.setDestination(7633U);
    msg.setDestinationEntity(113U);
    msg.command = 155U;
    msg.goal_id.assign("PWTDFWLMWXRSWANXKPVQNGJBBAKOLKTCMVRXCYYZFOHHTWTIXFLXOQXTLHPKRISDEUZUWAGOZGDHVMFVWIGFAYSKPNDPOXNEPXVYAQPBAAQSDPDUHAFFJEJPWVGRGVIFZATCGHZVYRNSETCQUGKBSSMJYHWKCQFNLJIDYETCBOSIUBSLYBZLCJKROTEMQXLJGSNM");
    msg.goal_xml.assign("QWZMEMPICUYKXHWYOFZFIXSLTKBETHNMZBWIFLQSFJEDMSSDRBCNSGANJHPUNZCTJJGKQNXKXBSPPUAALWIARVAVYLUQFNGKQLAQEMENVMGAPOUWIRLZXEDCIJHLWHEJLNRTZWTSWPGHXCAYMGKFRCVIQZZBDZQGHZBKBDUODSFDOCSVBIRTJYYAXCVTCYFNAQVTPLHUUWKIJKMWOOSOOY");

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
    msg.setTimeStamp(0.00642957803474);
    msg.setSource(35560U);
    msg.setSourceEntity(220U);
    msg.setDestination(18424U);
    msg.setDestinationEntity(114U);
    msg.op = 14U;
    msg.goal_id.assign("JOYPBLCRDYGQAYUYFLAUQWSOCFNALHEWNNOIXBTSJMBVCUGLGVKZNMJRWKMTCVSZBZWRIKHLVYDRRHTOXPTQVXBZSIRIKSQZEETBYERHMNPKGFZDWPIQBXRWIWPKJFSDSZOKSYEGAZMQCBNUCAFTFTEXOLNUAEPYMHTIUJODPWAJDJHJPRUHMXFUUXHODEGWYGFATTNJGCQSPRJIK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UECABLPNKTLYDTHWLEOCUNPNZBJCDXTDIIKXJNKSPYTWFPBUGSSFWEWXORNNOKZOHJMOKPZRRDQTGRJUDELWEWIXXZTSIVNUALMIKKQFRCOXQSUCBHJAZDOFHSSZUYQZJSYXVQCGMVFWDBWPCILPEGLVFYTABEGOPAFKCXTAZVMQZTHSHGMRBYAAYIJLXAEHHUEDNFJIUJUDRNNQDZOOK");
    tmp_msg_0.predicate.assign("ZOJPLFHVGNXWQICXYAIUDIOKTJSQLIMNKZZXRVNHQRNZGPDTZSSVYYIVGLAESJDLFMPPCTHXEWMZMRHQOAWLKXFCBGHAYXVMCVFMPBPUSXIEAGCQAOLTUSWPELFTRMXSCLWPDM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EHBVZIJNMDYMQXWCUNVCQEPLGPHYYUYGLBMBQOEOZTVBMLVIKRVNRORRWDFDBOOJPSLBZYGXYWQGANKIMGUKNDWFUOIRMKVTLTRJPZJFKDQLLYLCYICJYEEYMSQXCWPFPZOSHOBBAQWNFRSAOKKGEZHJTIMSZETHESR");
    tmp_tmp_msg_0_0.attr_type = 73U;
    tmp_tmp_msg_0_0.min.assign("HCKIPFYXEDUKCBUWNLZSUIODOWJDQTZSPOMZPKMBSIRYHXNQYWDFACWVMBLNEJIDUUIWNFGPJVEAZMVRAETTDGGPSDXBSXWRHSKDCPGBLMMCOCJUYNXVHNVEQIKGETWXMGLVQASQYYOTVLHEEJPWTMLRQANRKZJKXUZ");
    tmp_tmp_msg_0_0.max.assign("WNWQXDSLKNFYVUQCCLTATMZYLHPBAXPJYWOHOU");
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
    msg.setTimeStamp(0.236822441435);
    msg.setSource(42223U);
    msg.setSourceEntity(83U);
    msg.setDestination(3162U);
    msg.setDestinationEntity(72U);
    msg.op = 138U;
    msg.goal_id.assign("DRDGOTWDEGGTMIZAHHYPJEPFQDMWZKITCEFRQGSBFBSKWQERTEZVIDRFAZLVRIBLHUVVEMCXSJDNJALLVUPPMIXFBHCNKLBIJQZUNBIZHYBVLQLWDGFBTUYKFHWRCYNAIPOTNIQHRFJMEWXZFNYTBOGWDMAYXZAGFCRNVXONKSHAMOQCOW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CTGTNIUVLFGRCVQSGMENGYNAXREDRXBSLHFRTBPUKSKNLOBWUVTPIVZCIJQIHBDBJMAPKBPDHHYG");
    tmp_msg_0.predicate.assign("HQYOQWLDEFBPGOIVTDQFCKUGABZVCTDKIWENFYHIRDXTCEYDGQJJGNVPSKECUKTKHJZMAPSYYN");
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
    msg.setTimeStamp(0.496752149401);
    msg.setSource(27258U);
    msg.setSourceEntity(152U);
    msg.setDestination(61010U);
    msg.setDestinationEntity(235U);
    msg.op = 120U;
    msg.goal_id.assign("JVHJKPKRZSHOTNQGKYBQHBIZLFOYTWZPCENMDNQGEXWLXKTTHTTLCXWAIBOCUHZDULPYJCRRSNVFMNYGIRYBCZEGIHGQEGLBUVGWQKQZNAXXMOOEMORSPQAYHABRAQMLIYCDIMZIWACFUHVAMPLTWFKBCIDYNVXVSFMUHWURODXVZIROEKQNZYXWUKEJSGPUASSMRDITJVLOTUTDYSEPFFSEDMCUNJZFBJVKJLGWP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GHUZBMUROBYJUHINXYSUMPMLWODMHSORWAV");
    tmp_msg_0.predicate.assign("BZYGLTXTUSKRKIGIKJPLDYMCGEFEHTNLTUVGQSYSBEMHOTGUINTRYMNNDXWXBGZJYCHISVQHWXJODJKZSJHAIZHZWCFECLVDPAXSQXFLJPWTAIFTZUABRBUJOUWPOABFXHPSVKVANXQXJMRDZHMEQXVEUEL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZFRNIEVATEHWMFIVIDHARZTNZVBNKTICRKONDCFXEGBDXDYKFDIHHJGTGVDLLOHTGIEMLQYVVRUPUYCOBQBWAPTSUEUYIKWCCBANEOBKMCSJAROSHFKCGXJKSDNUWGQMSMQUMPKMXGOKHJSHXBEAAQWQUNXLLAXUYMKGVUAYEWENNZZFLYFJDTRHNZOJZDBZJYTTIRLMXEAJOBCLCYXPU");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("HUFRCPNPYYIQVEMOIAUVYUXHXEKADBFGWBLLEZSBYTNYIDHIBEJHUGLQPFXRCKPGNF");
    tmp_tmp_msg_0_0.max.assign("ZMSQTZMZOGFRXHKAHXWAEMVWPBYATUUGLPQNCIACSVNXYJGYFZULVAXKSZHEKIBCKVUFJLHGEMPRFMWNDJQYBQXLNHDGKZVTYWOUSFGHZCYPDOBHWYCZBKAPSBWLOFRLNQKZIT");
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
    msg.setTimeStamp(0.0668279821762);
    msg.setSource(13059U);
    msg.setSourceEntity(199U);
    msg.setDestination(21154U);
    msg.setDestinationEntity(118U);
    msg.name.assign("CRSMATUFRPWNMOXOEVIDPHSGCEBEAZLMGYVTLAGROPMTMANKNJBTRVVFZFDBQOQCKXSRYZKKUGXLTDFBKOICYRWWOSGAANUZGNF");
    msg.attr_type = 168U;
    msg.min.assign("KXUHDFCQPRCVXDGYSXGFSPCHHQMMMZYZRBWSYXLRBHNVTIPQKYIHAVZZKMGWLOJYTGHYSPEZBW");
    msg.max.assign("SCMQXCVSREPQMNEDXZUDTUVQKSMLSBNYDIGPWYGJPWLBBOJIHMWCAEUVTTK");

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
    msg.setTimeStamp(0.516070833976);
    msg.setSource(54605U);
    msg.setSourceEntity(136U);
    msg.setDestination(31116U);
    msg.setDestinationEntity(28U);
    msg.name.assign("MCFIJSNYTMJWQAXBDHWVXRBLMHDOM");
    msg.attr_type = 231U;
    msg.min.assign("YVUEEYFDNCXQHLXAOMRGJOOEWNBCBSXCSDLMYCQDMNWRKWKIWGQKOBJI");
    msg.max.assign("YKCJBXTCMEXTHLMBBXULEKPZYQMTTWCAYVFNNVAPJKGMIDDXQBUEJMSUWLQHZQLTDUTVGGPEUHWDIQOZIVWCNRFRUWUBNOSYPSCHDVKVELSSBOVQWZJCPOVLYMNFFYBZDTLRUGXXHVSAXOXJEFKDRVSJIORMAHPMC");

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
    msg.setTimeStamp(0.492519109853);
    msg.setSource(58416U);
    msg.setSourceEntity(247U);
    msg.setDestination(25740U);
    msg.setDestinationEntity(99U);
    msg.name.assign("HRVIKTQERQDPWVGCPVQOOEKNBYMEPXDZSPOMVCUCUTVBUVOIRBCKFICEXNXLSGNRXXFLUYORAUKYSTFVJLTIFPXAOPLEGQSOIEORQFGQCIXDXHTFVWMABJUDHEQHGJIBJXDETUUZXAMPGWSUEBFBDBHJAJDSAFPICFBYTZAKHHZNEJOZGYWHNFKWIGMRSJZGADCPVDTTWVMMABWWJNNRLYMHJLWKSLQNMKZTQQYRPLMYSHRNAD");
    msg.attr_type = 76U;
    msg.min.assign("KEJZVINLQYJSMFMLKWUCEATHVXKGRQLJJGLQAIZCCCWBZFXZRPONRXPOMGDJRHXVPCYHZNEDBDXTM");
    msg.max.assign("HDMXAIIGEJJULECAKDSOTYUIUCFLZXJAQQDTIQDYHMGRTFNIBOVVPBXRSPOZNBIFAYCWVBRONUMMCIRNPWNHDVTYUVLXTSXDIGHUPWKUFEYZALRDQEJUAWKCCKLKXXCPRXABAHGQYOENLJCCPKZMSJISGBKAVXBPODNKHUHEMWRTKPJZSSQSQLINGCYTFGPMNDGYSZTEFWEGVMMTEYQFVNUOYQJEFBKDVTPLGVWZOWZLRFWFWMJLBJSBZQ");

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
    msg.setTimeStamp(0.632010041355);
    msg.setSource(55312U);
    msg.setSourceEntity(120U);
    msg.setDestination(46326U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("VCSHGTYLEAYZMRCTZRFDCIYMBJDMLMPSPLNI");
    msg.predicate.assign("PQTZPNVHXMTEZTLIGLKQWALVKMTJWBHOVYDCPBHVHLSHOCBBPANYZHMCYTOVSXRFSMODGGJHQIIEIVBEZFYKCGAUPFJSSEKWRDNPJXBOJXEKRNJWAQXDUKIRXWYQNSEMCYJOJMAXUYCIMSRXFLRFCGTUJRDAUUBVBNXEQYQ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("TPLFLGYIOLOKRKFDLJCXYRXIQYMOICIZAGULFJULQBTLTTMGCISEOICWBXIJVKTCHONEPMUMIGDHZLCMGSIRNYZTEWSDBHJXZVPMCYKHIESEAWKJNOFNRASCZJPHYNDCZTONGAQPDKHWTFUQHWBASAOGBZDXKQPXEKXZTUUS");
    tmp_msg_0.attr_type = 102U;
    tmp_msg_0.min.assign("YWQLOLLTTNJVHCERFTDDGSADWSKHZHAIPXICUIZURBLLXSBEAMHTOCHGOGOOVODQTGSTMKOUXCWELGFREJABHRDNFUQYJAXDLIYLTMPUULQUZLNKNISBKIYAJWBVMUBRERKVNOEUVYANDGVDBKFVEGRHRWQCJBFAFJQQSEHNXHPXWPKDYMA");
    tmp_msg_0.max.assign("RCHDVLKKKIWLRQEPOHAYRRPUPMIWNFLCAOTLYROQGANNZDSZ");
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
    msg.setTimeStamp(0.853778194771);
    msg.setSource(55871U);
    msg.setSourceEntity(140U);
    msg.setDestination(1994U);
    msg.setDestinationEntity(23U);
    msg.timeline.assign("QSGZUGBSQJEDTFMXMWRBDVSIXTCILWZXZFJADXGZMIIBNLRMDPMOROOBYYXLWAYKSYUKYEAKHFXKXAPMFKCBPEUIAEHNQTOJWCSPGFRDMQMKHPUQCUJXGBQNBCVDQSTFKQKYHATXJSYNEACIVRRSSNEWUZLZZWWAVHLVVNQFAYHTJGOGZPOHUVTZDTGLJRJGIUBECKPORRNPQLHBWTVPFNAVLDYJENBCUOC");
    msg.predicate.assign("QABMNKINQHAXPASWEOECURSFEGIMXHCCNSSWUWDIOTPWNNDOFQFCWZGFPUULIZTFODMTRXBGRHKYSTUJJVAKGYVXFYFDUNBLZYAPLLUBHZOJUMHMBZTZGPELILJXOWDKWCGPXUMVVRSVYZNFWRMXEARRKIOIS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UUKQQXLZILORXXKGXGPRQJBGKMJLZIGRDF");
    tmp_msg_0.attr_type = 217U;
    tmp_msg_0.min.assign("NAZYHTOQIGKFJPQNJLKXFGEBEXQIHTDUNGLHNNHRWCBHSBHDGCTOARVYSUJHZSIWMIGEAYLXTLIRZTSXABQYBJSQUATFRCHPZORLVMGVKKMDOWICDCJWF");
    tmp_msg_0.max.assign("VIDGEIBGWIDPTVTOKADEVBLSQATGXYKCVQKWEMA");
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
    msg.setTimeStamp(0.984270743818);
    msg.setSource(38884U);
    msg.setSourceEntity(237U);
    msg.setDestination(43947U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("FXSGOVDHDAIYGMVIJKGOZEKQISDICWPSLPAUBWPCQJTAHOMUSMEYMGDTNAU");
    msg.predicate.assign("RTQJOOUBYLGDSMUEWVUCCBLGQGSZKQHHFMMJJNPKCCVLTYJINPWILWRYIAMSMMEWWRUXVSFYNOWNOBPVDTUHDXDRRDCVMVTVREAKHSYRFHAGQPZRQDNFPEJNZZUCNHKSZPNCOZMP");

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
    msg.setTimeStamp(0.341449567303);
    msg.setSource(38506U);
    msg.setSourceEntity(244U);
    msg.setDestination(31093U);
    msg.setDestinationEntity(158U);
    msg.reactor.assign("KUCSJMHFYWQZNVOUKWHANLJECYCRDEDGRMFMNQBAPETPIIOPVSTMMOYEM");

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
    msg.setTimeStamp(0.167219579371);
    msg.setSource(55364U);
    msg.setSourceEntity(23U);
    msg.setDestination(63538U);
    msg.setDestinationEntity(247U);
    msg.reactor.assign("ETNQKEMUYPIWRJLDNXYMZJTYUTJPIVKXROUMGANKSQUOJINUFZWMSACEENJASGYLXUOXRJIIVUXDETRKRYOFTOAHTMSZHJOAXBDFQSZRPXNQUXVYFZBWGLOSGSKTZZLHPXLPOGHICGZBMYRDPQEPVDVNGIPHPBDLKVMFWQYHADCXWVKCVCETQBCSYFLHAMBYTIZJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PXINHTBHWGWQOZCLDTKBXNSGZAINONHDCVFRIQLWJKZZKDZUURVEYYKITHPWQBIVSGPDOZEOEALTFYKHWZGVLGDMHBWTPCSMYUEAIWYDJWXAPXBPVQTXHT");
    tmp_msg_0.predicate.assign("RDYYLGUNBZTRTQETRLHMQWVFSMGFSUGANQXIQFANKFBRSYTRXVTCNSXEXMKSPIKIQYTSUCBVAWRGYPVWZIPQEOZCFMPPJNMNRLWZEJPJEWBOUXABM");
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
    msg.setTimeStamp(0.668740637402);
    msg.setSource(63073U);
    msg.setSourceEntity(124U);
    msg.setDestination(7945U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("CJZVACLPNSFEBBYSWVTQSRTEQDXBUOYDCUWEJNWOBGWDXLNGRDKXZHPGFQVKOWMIQUEZZJUTBNEMZVLMXUKNNQMOAJBFKBIYFSPCUOHOHJKJTQPOTDWNAJCIXMIKQHSIFLNZNGGNTFVHAZEZXKHJDQUKESHHLRVLKLIWUXAGPROLARMMIZPTYCGGMFFDPAREUTWCXBRKHQPJYY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AOSZYIIBJVHPJOLKYGIDRUJJJWFWTOOOXSFSKLSDCWVARSZICVFNJKGCQGUHRKUHZRPPAUQWTLQIEOGWIHUTEZIVLCZAPHTDPXQYSBOWXEMEMRZTXUWVEPUPCYAJJEFBJRYZGOL");
    tmp_msg_0.predicate.assign("CSZVICKHFOGAKRUXDPWPEATPPYXIB");
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
    msg.setTimeStamp(0.314860456312);
    msg.setSource(2147U);
    msg.setSourceEntity(204U);
    msg.setDestination(13730U);
    msg.setDestinationEntity(184U);
    msg.topic.assign("VPZKZYBGOIKUQOAUEBYKGYUWHMWQIBRQRXZCEWEGRIRCSGZJWBIJAPNUTOWMPDZVRLBGKTAURVQPQTLDPVPCFAVJYXDROYCEQLMJVWLVFSCHBHFHTLDECYWNX");
    msg.data.assign("IFAQDHIKGEABJMELRSXNMHWCBOELFSWJACWJYQRJVWIBKUNJUYPYHMPBCLKZZOWHRVCPFVXLQSDAFDTRFJNMVCHCZXTHXOYOXELFPZBXIDPUPSSCTMBWJKNPEGUCYFICSMHUSTZRUHKUFOGTSQDGAGJXOBZVTGQALVRQATPVXWQAYIEXCMYJRMBKFWKIKBTKADXAYERILSDHYOWUYDUNLKGIODQPTZHZVQNMN");

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
    msg.setTimeStamp(0.412968587204);
    msg.setSource(59460U);
    msg.setSourceEntity(45U);
    msg.setDestination(53001U);
    msg.setDestinationEntity(16U);
    msg.topic.assign("LOTKJGBAYOBOAUHONFDALKQYKNWIMGLJPQNTQXAVHEJGBSTYYTA");
    msg.data.assign("XSJZIPCQQPHRZMZAOSVYPBTBFNNTKDJDANKJLMPRXFNBMXLUCTYYRDDVURTPELPGEJLMRFAQUQPVPNXAWPLGBKVGTXCLKHUNQUGSIOXVUSCFJTSSJFVQMWWKU");

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
    msg.setTimeStamp(0.790732647728);
    msg.setSource(59755U);
    msg.setSourceEntity(23U);
    msg.setDestination(4254U);
    msg.setDestinationEntity(132U);
    msg.topic.assign("XTLRJSTJYHKHSXOEWFEPALQXWPVGSIQZLZLBVJVHBIUYRVBPKGNZMYCOBEXECEROIPWYSVRJTOPUDVWATLNHWGTMRCLUWUFZCAIDFOFKIJHCNVNSECEQZMXBXOICVIBMXFGWDBPZCNKXIGFDMYPQJTNTCXOUNIRRFRQYVIWWCAGYMMKB");
    msg.data.assign("APRWHSNUSQQVLMGAJCFLMPLPUVTVWTJQBIORYOAEGJFETEFBWNXQJLDZUSIZHHREHWYPMXXKTUJHLPNSTSRLYRSKPOBXGOENOZMTZSZOZIDDJYBTERIHFCYRRADJMWUIANQCYGYEDGWOPKEVWJMQQFXWAAMUBEKBFAXFBFACBCNHCSNBOIVKMNCXDFVDGRLZICGQCVXTVPUZTODKNWGGDZSKGABYJQHHYWQDNIEIIKLLRVUUKJS");

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
    msg.setTimeStamp(0.871650525031);
    msg.setSource(17611U);
    msg.setSourceEntity(177U);
    msg.setDestination(28207U);
    msg.setDestinationEntity(9U);
    msg.frameid = 237U;
    const char tmp_msg_0[] = {87, 71, -100, -111, 64, 82, -126, 96, 69, 4, 51, 94, 22, -127, -108, 81, -121, 61, 63, -38, -31, -98, 21, 17, 126, 76, 47, 111, 49, 114, -114, 73, -108, -69, -80, 38, -46, 61, -104, 115, -41, 57, -26, 63, -46, -4, -89, -51, 14, 14, 109, 47, -36, -28, 39, -86, -62, 63, 8, -102, -62, -88, 59, 84, 5, -37, -44, 70, -13, -3, 76, -6, 33, 121, -51, -69, 30, -61, 29, -109, 36, -79, -33, 106, 46, 19};
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
    msg.setTimeStamp(0.230588101907);
    msg.setSource(9639U);
    msg.setSourceEntity(159U);
    msg.setDestination(22962U);
    msg.setDestinationEntity(105U);
    msg.frameid = 237U;
    const char tmp_msg_0[] = {-88, -77, 105, -53, -11, 5, -70, 19, 68, 117, 102, 38, -29, 111, -51, -55, 34, -24, -105, -124, -38, -34, 0, -19, 45, -93, 7, -38, 8, 47, 47, -44, -39, -107, 90, -17, 21, 44, 60, 95, 78, 70, -100, -102, -92, 32, 51, -121, -58, 53, 44, -87, -62, -112, 15, -98, -43, -115, 2, -111, 69, -28, 34, -81, 54, 83, 116, 82, -93, 117, -106, -112, -94, 55, -57, -43, -51, -101, 100, 106, -23, 79, 43, 2, -106, -125, -39, -24, -95, 48, -73, 48, -44, -85, 57, 104, -83, -90, 66, 17, 1, -115, 54, 24, 79, -70, -94, 91, -78, 56, 116, 4, 9, 54, -21, 19, -103, -28, 18, 106, -75, -20, 20, 118, -4, 17, 56, -52, 63, -52, -5, 38, -30};
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
    msg.setTimeStamp(0.296117871053);
    msg.setSource(53835U);
    msg.setSourceEntity(181U);
    msg.setDestination(44387U);
    msg.setDestinationEntity(238U);
    msg.frameid = 37U;
    const char tmp_msg_0[] = {-110, -51, -2, 106, -3, 126, 84, -102, 40, 36, -116, 43, 116, -41, 58, 51, -67, 104, 70, 12, -23, 33, 102, 17, 109, -2, -55, -90, 31, 8, -92, -57, 57, -31, 36, -93, 20, -82, -12, -66, -49, -113, -51, -24, 44, -66, 31, -108, 45, 60, -38, -124, 20, -40, 105, -84, 2, 15, -80, 120, 112, -107, 123, 74, 67, -81, 30, 124, -3, -82, 31, -26, 79, -72, -19, 85, 126, -121, -104, 118, -67, -37, 74, -49, 32, 92, 99, 35, 120, 23, 91, 33, -46, -25, -13, 115, -49, -63, 83, -96, -110, 102, 97, -49, 98, 18, -121, 33, 79, 118, -82, 71, -83, 7, 30, -12, -59, -117, -101, -106, 52, -123, 76, 76, -67, 56, -60, 85, 102, -92, 88, 11, 2, 65, 97, 50, 106, -2, 107, -100, 0, -88, 63, 36, 21, -43, -47, 7, -7, 87, -77, -59, -95, 89, 64, -11, -59, -52, 66, -111, 64, 8, -100, 118, 111, -87, 78, -114, -93, 31, 47, -110, 100, 34, 17, 109, 74, -80, -22, 28, -78, -40, -49, 23, 95, -119, 54, -7, -81, 81, 32, 19, 14, -13, -37};
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
    msg.setTimeStamp(0.295432704173);
    msg.setSource(27417U);
    msg.setSourceEntity(143U);
    msg.setDestination(63476U);
    msg.setDestinationEntity(53U);
    msg.fps = 104U;
    msg.quality = 109U;
    msg.reps = 131U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.924452890147);
    msg.setSource(50450U);
    msg.setSourceEntity(43U);
    msg.setDestination(14853U);
    msg.setDestinationEntity(146U);
    msg.fps = 41U;
    msg.quality = 191U;
    msg.reps = 62U;
    msg.tsize = 184U;

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
    msg.setTimeStamp(0.739021831377);
    msg.setSource(28603U);
    msg.setSourceEntity(212U);
    msg.setDestination(36035U);
    msg.setDestinationEntity(78U);
    msg.fps = 134U;
    msg.quality = 144U;
    msg.reps = 191U;
    msg.tsize = 148U;

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
    msg.setTimeStamp(0.397378099195);
    msg.setSource(14638U);
    msg.setSourceEntity(0U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.199886654886;
    msg.lon = 0.761956035255;
    msg.depth = 111U;
    msg.speed = 0.125335069845;
    msg.psi = 0.0196985071457;

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
    msg.setTimeStamp(0.399738500279);
    msg.setSource(28759U);
    msg.setSourceEntity(55U);
    msg.setDestination(39610U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.605215332175;
    msg.lon = 0.758849797909;
    msg.depth = 78U;
    msg.speed = 0.673675160035;
    msg.psi = 0.187301115113;

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
    msg.setTimeStamp(0.831362066718);
    msg.setSource(45207U);
    msg.setSourceEntity(239U);
    msg.setDestination(60048U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.0456234502521;
    msg.lon = 0.555051450653;
    msg.depth = 222U;
    msg.speed = 0.126077598877;
    msg.psi = 0.544787264897;

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
    msg.setTimeStamp(0.0163225850801);
    msg.setSource(1268U);
    msg.setSourceEntity(197U);
    msg.setDestination(35612U);
    msg.setDestinationEntity(33U);
    msg.label.assign("LYZZOKROEPEZBMUGVUMJMEIXHKNCCVRLBHGYBRYOYTNAXSTDCFGJWSHTTWXQWUMBPZLJEQUDKMXQXGWOFNYXUXIVNFRZRVCKUAGNHSPZTEXSDSQGBKISPPXDJDIVQVLFDECHMPBICUDBULITNXAD");
    msg.lat = 0.658159716235;
    msg.lon = 0.698447525691;
    msg.z = 0.345565390068;
    msg.z_units = 68U;
    msg.cog = 0.287851795308;
    msg.sog = 0.677127622764;

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
    msg.setTimeStamp(0.436672361457);
    msg.setSource(13916U);
    msg.setSourceEntity(235U);
    msg.setDestination(64766U);
    msg.setDestinationEntity(199U);
    msg.label.assign("KAYNXWHTRMYSPTLMIFSEWHFUHAJOJNFUCVEAQBWPGJUZWGRWVIQMAXUXKDFILPSRTZOHMHZBVYAUGWCWZRFIXUXUFXZZBSCIOGNRKPXDDXHQEJHFDCGAVERYMKYPXKRLIWRDLSBQEEBPBBYTQOONZZNFTTKDEFNGJYQCOVZXGQAPWGBLMELSQCTUVTDQEHJFUKTGODMIEHMZALOSUJ");
    msg.lat = 0.0539822666134;
    msg.lon = 0.568797710745;
    msg.z = 0.160635129775;
    msg.z_units = 182U;
    msg.cog = 0.699482285729;
    msg.sog = 0.310525454271;

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
    msg.setTimeStamp(0.304429872802);
    msg.setSource(9333U);
    msg.setSourceEntity(242U);
    msg.setDestination(18139U);
    msg.setDestinationEntity(240U);
    msg.label.assign("TVRHYMHVOOZYSQJFKZMETOKIHKGNGFTOHRDSGSMKWSBURGZLDHTIBGFPXBYMVYXOBQSBLXWKCNERENSFNPMPQJWTYZKVLCZSRCMYAENNWESGPIYPRDTTUPMKSYLXQZARDUOHLGELPAPZAACXKRFOVHFJYWQXOHLQJBC");
    msg.lat = 0.165628697597;
    msg.lon = 0.694665925675;
    msg.z = 0.727826171279;
    msg.z_units = 89U;
    msg.cog = 0.412476225535;
    msg.sog = 0.473763380436;

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
    msg.setTimeStamp(0.152588388047);
    msg.setSource(23234U);
    msg.setSourceEntity(86U);
    msg.setDestination(968U);
    msg.setDestinationEntity(112U);
    msg.name.assign("ZAIQJQHYEVZSNKWCVALERYEANHSMKNRZHZNTVYNSMQFZTEBJJJVJJVBWFFKRIAHDCNNJUIGVNMLZYWFDHPVTLPGOUGVGDYYRXUFFDMIHXPCCXVOPIBPUSFGOEQFZIELIPDGGMZKCZYOKQUPXTAAOICTHVTJKPSDCRSMLMXWEWLCA");
    msg.value.assign("NWWITZZSMFKLSACH");

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
    msg.setTimeStamp(0.887777992283);
    msg.setSource(21555U);
    msg.setSourceEntity(180U);
    msg.setDestination(53886U);
    msg.setDestinationEntity(142U);
    msg.name.assign("NBCGZIWNNSATYGZUDORESLXUDYKCYCMTPTKNUQQMVDIRDBNPWBOFRIZXVAKMJOFVVFWHJLPJFLRMDXSQKWGZSESFVORKUC");
    msg.value.assign("NMEBHLDJLSJTWGIRZSTXFAHFPDZKBMBXRKFSPBOFWFYSEALGJZVBOBKD");

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
    msg.setTimeStamp(0.459964567378);
    msg.setSource(34126U);
    msg.setSourceEntity(196U);
    msg.setDestination(44648U);
    msg.setDestinationEntity(166U);
    msg.name.assign("JYCSQJHLMAHRRROBGNLKEHTFDSE");
    msg.value.assign("ZDHXYIYOBVQRSZKMQFHLSWWECRWLVWHUBEZKNWSFXIJTFFQCESKAIKBQTEHABULAUBTJTKKFYUHNUMCLWOPOZJJZHOMGNOTLVHUWELXTADJCVJLENSGMTUCIKDWPPXYFZJECJRDNWLRZMPBMFIKYPJHAXGPXDFDSOBUITTNNLRENIGSQBQQGPSRAMVFIRYVNXVDQRAJYHHUBZCGZWKTUGDFYOPSGNVRQXCAXISY");

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
    msg.setTimeStamp(0.549439609355);
    msg.setSource(14967U);
    msg.setSourceEntity(219U);
    msg.setDestination(49561U);
    msg.setDestinationEntity(125U);
    msg.name.assign("TWMUXPKZJCPDCNDGQGVLBGHRKEQKPKTSIBNASWYZVSSHJUKNTLEPLIRRYWCFIWZNLFXMPVUBSJAW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("EQVLLSNQHBIPBSYLIUWSRHKGHRCALRPFKXN");
    tmp_msg_0.value.assign("HYSBNCFVOYTSIQFVKPPVARGEEFYHQNBSVTNMEDEJUJIMHQHHCFGPJQFNZLATJYXLSWQLUYLYUSGTUKBJVOCMNEXIRFSBRLFPVSTOVRNRRCXULVADBORIPZXSEKUDPRXHHWQPLQXLJMCBKZWFNPAVYCDWIKTNQKOGJMZBRGFEXJOZUTCDPXWEICYZOXGIBAQGPGKAAYHOMVMZDDLQUOBGWXTDDCBWMWKGILOERWHKTWCZSHTJANIYSMIDEFNKJ");
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
    msg.setTimeStamp(0.149127125706);
    msg.setSource(18440U);
    msg.setSourceEntity(228U);
    msg.setDestination(9346U);
    msg.setDestinationEntity(52U);
    msg.name.assign("TFBTBQYCKRPFYTNT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SXIBVWULMBGQBGTBCWBONDJMXWZRTCZYBQUZVMSILODONFACMIJUVFNSWRLJMLWBYGETGWFNRMMKLZFQJNBQKQXRJASYIWQZEIZTNSRXUKXJYLRKPXEIY");
    tmp_msg_0.value.assign("MGLINXNPCRXHLWBOLNAUJFQIGHKAJQTZHPTAYGXJIWORLUVGVSWSUYQFUNMDLBBPTDSTDLAXVIXZZHVCVGSZJDTSSLBDRCPSTFEAZERFQAHFZHKJFNQUWOIWUNHTMCSHZRDYGXETHLDKOIFLEOMMMCHBJEDUPPQRGPXMOYSENBAEJROPIPXOVRVWQJECKOMFGWGWAFIBWZANVWYJR");
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
    msg.setTimeStamp(0.967257125532);
    msg.setSource(26746U);
    msg.setSourceEntity(216U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(155U);
    msg.name.assign("VSMVACFCIOJKUOEKVVGSNUWULISZWKGEMIIKEEMFHBRHZDYSTZAJLPNUXGYMRMJQCANSUXBFLBXZJIYKOWLEWGXRTCVVWBRYMSDH");

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
    msg.setTimeStamp(0.467996154468);
    msg.setSource(305U);
    msg.setSourceEntity(190U);
    msg.setDestination(61145U);
    msg.setDestinationEntity(88U);
    msg.name.assign("PWWDYQUZKPEYWSMBOFGPYXUEKPCWGDHKQSSATHQDDWEVCTTZQAFIHEWCJHAFQHJKRQJJZDWCFDLYUPFKJGPMFMGVNCFCSCRBVLAINEVOXLKZLJEVXWBRXBVTPEOLDUMATYRFCX");
    msg.visibility.assign("USDYLVWUZDCCAJKNCBWFSXCLNPKPHBVAYSONQTEBZKHOEBLZWUEULFSEMGPXZGIFMGBDJXRBHXZYMRMNIEMYDOKTBFSVRQIAOSCWFJJQNBXYGIKGBSRLPVXWXCTTAHRJRQVETNAEHWYGOKHWDYNAIRGUFVZQJRPWWMGGLSSWKLODTCURZIMZHJYJAHUJFUPONQOADIMEVFXKARIQDMYNMUVHPLPLSTHPFEFC");
    msg.scope.assign("TKPWXRMVMQIHIMASLIHBJCA");

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
    msg.setTimeStamp(0.976078730689);
    msg.setSource(52250U);
    msg.setSourceEntity(200U);
    msg.setDestination(23040U);
    msg.setDestinationEntity(31U);
    msg.name.assign("ICFYCHYQVDFODYPVIJHFBJCHAMAQOTHTYCCXKKUYCOOBBNDZYPLREDTNNLRXZFUWJEEREOPMSXMJGYHGEYBKUXSWQNBBXNLGZZTRZKLLJKTKDGHVVUFWWLRZSBEPVFSYSLJUFQNQONAXIYDLCBEAPTZAQQGVZROAMDENTSIGXGLPMGODVFSHHNPHANIUGPJGQWSDSIACKWVUPIWIJUWOSW");
    msg.visibility.assign("XRAQYEOMKMSKQHGEHWXBHJITZHPGDOSFVKNNGDJIAJUDCPNXFGFODLMCVWNKTWHJBCWWZIXIDYZTUUEOLWMQCBEHSPDSRTKFVXDMPFJLVOSSQAPJIPYGBAUOCMDXTWPNNEAOCZNSELWUQXQBSMOUGJXRZRPXLKBURHGGUNFEXVTAELABYSQFZCOVVJTBJLHYYFPZYFGCUASDCMRNOGMIT");
    msg.scope.assign("YQOXUYEQYJNVYDJUPAUFOEWDBOEJRASGRPGJFLYPVZFCKJUGLYFTKBXMFLMRAQURWCNSINKVUYLCEHKVVSACCTFDGQVP");

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
    msg.setTimeStamp(0.724672313786);
    msg.setSource(11638U);
    msg.setSourceEntity(19U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(46U);
    msg.name.assign("GKZSTAMIYWGUZJAMLWPPZQJEKTXDNUIABOGDDMSGIRNYJQYZIKRSHYFFZXAMDCLPBCOJTNIAPPQWSEKAOIEZUZKTAXBGRPXFQSUTYDUOYWSSVJUCDJIMDEQVZRQVPFNLBMHXDCBOTSYHVNFQORCQUO");
    msg.visibility.assign("VASOSSMDWBQVLETBNNPJGLZVDKMRXIJIEXXAHHKVMDIZXPFQGKEOUWPQDABNNTHSWZOCLTGZHCAFWFNLIDVJKQHBCJFQKXPBIYHFNTSBOMEKZSVGOMLRBZUYEMFUEHAQVEEXECKLDT");
    msg.scope.assign("RSQOYHODXVFPWDJKXTUNYYBRZIKTEOYKBAHEKODFXIHLIIYUSFTNHCXHDZRHWDOBQDEOMMVPIBUENW");

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
    msg.setTimeStamp(0.177630358475);
    msg.setSource(62393U);
    msg.setSourceEntity(150U);
    msg.setDestination(34982U);
    msg.setDestinationEntity(251U);
    msg.name.assign("TTSFUFMEJGOUZGWRTNICNJERSBGRKRVYOMULAXJYSWLQYTJYDPBZVDXQFPAAOQYKGDKWSPQRBHNPLBJOCXEMRHRKFSEYKTEMPKPJDOVHZCEAWSSCAJJTHRXUWBCLNCJYCZRMLZUXQLZFWAUUFWM");

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
    msg.setTimeStamp(0.929064305154);
    msg.setSource(6299U);
    msg.setSourceEntity(195U);
    msg.setDestination(52468U);
    msg.setDestinationEntity(92U);
    msg.name.assign("MRUIORBAQOMMTEXYGYGXAVUPPWLTIINYADJTDHHOUHZEPDVYNTGLZMLHFKCXHUXOYCYPRZJORC");

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
    msg.setTimeStamp(0.796417958887);
    msg.setSource(60323U);
    msg.setSourceEntity(166U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(119U);
    msg.name.assign("KCROXTZDWZVVASAYGRQXZSPUDNPAVKTAZNFLNXUTLGRKWBAFLJKUMNRLGOIGSLGXIHRLIOZTPHYJYTNOKINGKBATOVACHBCIJBZSZYEELRMFBMBPDVC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BLSPQNTSUKZQRGYMRDTYPDOSNHZVKVWAJCFFGVPEJARGLOEZPIZBDNDWRVBTCRGQRDHKCTBGKEYQAHRGPYOYFQOSXDQNETAHTPMIUQBXOOMUVNSXZVXFBMKZBLHIHXOMENSGLTWYEU");
    tmp_msg_0.value.assign("JSOSLVOSHGNUVJCHCYSEOOGGEDRXADGWCUJEEPEKLNQHKBWKAQVQPRSHCRTDDTFVXYLIHQYVWTAJGYUKARYEBDXINJHLLDHNGSXMPTSBCFOBQKZNUMFZVLOFKEUYHFGNPLJQBGIXYEMTZS");
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
    msg.setTimeStamp(0.519411317213);
    msg.setSource(62935U);
    msg.setSourceEntity(106U);
    msg.setDestination(58242U);
    msg.setDestinationEntity(172U);
    msg.name.assign("IDRHCQRWMHBVXUPUUHSTGHTZYJZZVZLRFNTTRQBTSYYGAINTPSJGJHIHOFCBKVFWCHDGKPWRLJ");

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
    msg.setTimeStamp(0.759271613353);
    msg.setSource(4127U);
    msg.setSourceEntity(105U);
    msg.setDestination(7101U);
    msg.setDestinationEntity(4U);
    msg.name.assign("RGOSYZKUUQTAVYIMACMUKBTNXYWVSBQNDYZHQTKKWTNMLWGGCEQRXCMHVWSCDYOCSZJJAUOKGAEFWRJNMWPUZNEI");

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
    msg.setTimeStamp(0.841491530033);
    msg.setSource(14005U);
    msg.setSourceEntity(238U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(98U);
    msg.name.assign("SVCWAGIRTJPJCXCVCQDLHSYMTDDGIHVGPGCBEMRCBZKHFJAGUGCBGRMKJZBJFDIUPAVNBAMKPQOANAPRPMWSXBXBYTFVYPWYNDLRZYFTSJKMNNEXLCI");

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
    msg.setTimeStamp(0.15595543171);
    msg.setSource(9160U);
    msg.setSourceEntity(127U);
    msg.setDestination(34986U);
    msg.setDestinationEntity(200U);
    msg.timeout = 119889333U;

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
    msg.setTimeStamp(0.996203741011);
    msg.setSource(16271U);
    msg.setSourceEntity(56U);
    msg.setDestination(10734U);
    msg.setDestinationEntity(242U);
    msg.timeout = 705940405U;

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
    msg.setTimeStamp(0.583248053069);
    msg.setSource(54276U);
    msg.setSourceEntity(224U);
    msg.setDestination(5781U);
    msg.setDestinationEntity(63U);
    msg.timeout = 2083634242U;

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
    msg.setTimeStamp(0.872600104478);
    msg.setSource(32121U);
    msg.setSourceEntity(209U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(252U);
    msg.sessid = 235453714U;

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
    msg.setTimeStamp(0.432186320407);
    msg.setSource(62712U);
    msg.setSourceEntity(147U);
    msg.setDestination(13918U);
    msg.setDestinationEntity(150U);
    msg.sessid = 3733019718U;

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
    msg.setTimeStamp(0.1793981162);
    msg.setSource(32789U);
    msg.setSourceEntity(109U);
    msg.setDestination(54875U);
    msg.setDestinationEntity(91U);
    msg.sessid = 973024025U;

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
    msg.setTimeStamp(0.178446612619);
    msg.setSource(33258U);
    msg.setSourceEntity(85U);
    msg.setDestination(39859U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3370801650U;
    msg.messages.assign("KGSUWFGQPGXHEWCMGSYMBIEIULILNOVEWHQPHMVRIUTNBHJXIANLNREMFXCJJDNANZYUYWAKFFEYUVBUVZUOYNVFBBXHBQIJKFQCIRTIUMMRZSGORJOWSKURSMZIFCSROWGTKTBSJGNGDDVYJC");

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
    msg.setTimeStamp(0.0935037199807);
    msg.setSource(16200U);
    msg.setSourceEntity(244U);
    msg.setDestination(35056U);
    msg.setDestinationEntity(216U);
    msg.sessid = 1583955536U;
    msg.messages.assign("EVZKPEAYQZEXBWHATUPPQYRBVPIELRZKSQVLSAAIQZKTZFZFHPLDEWPIWMSCJFUOFXGEABCHONEZUBUCVRQHYIPSJNQEKXOOLZISNJGIOHRJYEQLGXLFKFCDTBFARTMBFRKMNAKGDHHQRRJMIGQDOYDWXAOKHXDO");

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
    msg.setTimeStamp(0.498903802265);
    msg.setSource(32911U);
    msg.setSourceEntity(6U);
    msg.setDestination(3772U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3984740554U;
    msg.messages.assign("OGCTVAAIRDXTKPRCRVUXFOFURSWMGGKMDICSSQGLWNBUGVJFEGPWKBXVEMUNTSQQQCLSHKCTIAAOYPBUNDRMRJHTFPFQHPVCOOHRJQTYBXABUJSENWGZLMVLYPEXYFLVGSWIPOOZZLAIABV");

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
    msg.setTimeStamp(0.430030497587);
    msg.setSource(57120U);
    msg.setSourceEntity(226U);
    msg.setDestination(22567U);
    msg.setDestinationEntity(101U);
    msg.sessid = 396290239U;

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
    msg.setTimeStamp(0.136847641575);
    msg.setSource(55321U);
    msg.setSourceEntity(40U);
    msg.setDestination(12154U);
    msg.setDestinationEntity(96U);
    msg.sessid = 3906167596U;

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
    msg.setTimeStamp(0.492066703053);
    msg.setSource(53538U);
    msg.setSourceEntity(62U);
    msg.setDestination(60215U);
    msg.setDestinationEntity(184U);
    msg.sessid = 702596836U;

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
    msg.setTimeStamp(0.996247913009);
    msg.setSource(18836U);
    msg.setSourceEntity(180U);
    msg.setDestination(14363U);
    msg.setDestinationEntity(152U);
    msg.sessid = 1321053834U;
    msg.status = 130U;

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
    msg.setTimeStamp(0.723363139002);
    msg.setSource(42618U);
    msg.setSourceEntity(7U);
    msg.setDestination(61220U);
    msg.setDestinationEntity(191U);
    msg.sessid = 979349827U;
    msg.status = 36U;

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
    msg.setTimeStamp(0.387622433882);
    msg.setSource(114U);
    msg.setSourceEntity(236U);
    msg.setDestination(5695U);
    msg.setDestinationEntity(136U);
    msg.sessid = 1116501793U;
    msg.status = 149U;

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
    msg.setTimeStamp(0.504407807471);
    msg.setSource(41106U);
    msg.setSourceEntity(33U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(130U);
    msg.name.assign("SSOQBXMYNIUXOHBLKCKCFLDXGBTWGKTILWFIIKSQSFRYPANTQFWSRZBDOMWAIBTIAORRITGXAZJPGMTGXNCBBHRNPKDQXPFUMNMUOLVCWEZNCEDLETBJKGOWUGHQCNWJTXRJAGHDUEVKORKDIUZNAKFVSVPFNJLIPEQBBALSAXNJPDCYUKRYTZJFYXGPELQRLZJRHDYMZZMQHZMVAEZSHMITOAVUQFOMYGQHEEYXVFLWVUOJ");

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
    msg.setTimeStamp(0.593237862341);
    msg.setSource(59815U);
    msg.setSourceEntity(100U);
    msg.setDestination(1030U);
    msg.setDestinationEntity(233U);
    msg.name.assign("PVMPFDNLYYHTDXYRUVRTMALSEHWQTOKYKLAOUZQFEUFRBYCNSTYHBVJJUSLGPWXEVZUSKOIALDWDPRDPPWWJYJRAUAQZREUMPGIXAKGKODHWGODQUNGCQBHMLBPVLVYCHGFWNZHTQEZXVOFJTMRVCMCNKOJQZVUFYJBZQFCBZDSSSIRXABDIXOUFETISBRCPEDJNBNYKIISAAJVKNLLHXJGW");

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
    msg.setTimeStamp(0.168637568836);
    msg.setSource(56139U);
    msg.setSourceEntity(54U);
    msg.setDestination(9504U);
    msg.setDestinationEntity(71U);
    msg.name.assign("TARMHCYRTJPSKVOHLKFQLJWZJVBITYYYULEZRWEIUTKELXTGGXBGWIVTYDZPVRHGFBKRINDROVUPOPHZKOGXLBCKGHVLINYZIOCGRWZMDDVMWAPVAWCZYQLJKYHDCEMUSABMDNBDBJXZXIJIVUUWASXKSPBQFFATVIBPUDFSKTEOEFGJNUCFXDNOMOEYOJQPNKMNQCQJWGXQHFXOAQUJSHCZQBELHXARSWPIGF");

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
    msg.setTimeStamp(0.136076968278);
    msg.setSource(16868U);
    msg.setSourceEntity(59U);
    msg.setDestination(1358U);
    msg.setDestinationEntity(88U);
    msg.name.assign("VNAHNWGWOBFDLKQKXNMJUGLYTRIINMUCSOOMWPEBZTEGKLRPYBCIVDCIGJXACWJJEQYYAUATAHKBUYDHVIYLHGFEMJSSDOOUVFBQXCVSDNHWWFULXGZYKFFTJQMKJ");

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
    msg.setTimeStamp(0.381784968172);
    msg.setSource(55471U);
    msg.setSourceEntity(148U);
    msg.setDestination(55372U);
    msg.setDestinationEntity(127U);
    msg.name.assign("EJVHGSJQSCUVIPZKUCAECBQRNBPAWV");

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
    msg.setTimeStamp(0.928419726966);
    msg.setSource(61999U);
    msg.setSourceEntity(137U);
    msg.setDestination(57212U);
    msg.setDestinationEntity(73U);
    msg.name.assign("ZKVXGYIECGLERYCAYMZBYRPCVQZNLMILHCFHRDAHWCZBGTJRVBTDFOUEWMBFUDKOUGZFSLA");

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
    msg.setTimeStamp(0.58614788369);
    msg.setSource(26544U);
    msg.setSourceEntity(218U);
    msg.setDestination(36508U);
    msg.setDestinationEntity(41U);
    msg.type = 16U;
    msg.error.assign("TPOQLVZTYGCEZVLARXCUZKJCIPBUGADSIHRFRUKWXWMHAVRSIFQRZOIXMICETYZOONGJCPQJGNTJZAQDEYGTSUOUPEHXJNNJNLRNQALWIDVFZLHQMXKMWYVDWRCTGTOKEEWBVFFDIRBFUCHHVYIWOLMYUSEOHZOSOABWVHLQIGLBWAKNANIJSZMQMUT");

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
    msg.setTimeStamp(0.951270170782);
    msg.setSource(58932U);
    msg.setSourceEntity(239U);
    msg.setDestination(42741U);
    msg.setDestinationEntity(134U);
    msg.type = 8U;
    msg.error.assign("AQVCXWXIRNMNSLATEOUUVKPWHMIFEQYCXPBGBLFQDQYJLHBSCZGDDNHUESEWMJOFXBKZVXVUKVYUZJGPNAIJATSQADVKQBPMPTLTOREJBPNMLFDLXEZVC");

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
    msg.setTimeStamp(0.784804566212);
    msg.setSource(54809U);
    msg.setSourceEntity(116U);
    msg.setDestination(45298U);
    msg.setDestinationEntity(188U);
    msg.type = 11U;
    msg.error.assign("EYXOZYRJABISWHOYVDZOLXKTAKMTIGULCTWWPVMMPMGGTTFRYHBLAJUVIFFSWXVRBIFBVNCZZQTOZOJIRWHJASKEXNENCPHAQXQDHQXVWPXDQNIUYCPDM");

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
    msg.setTimeStamp(0.611055338759);
    msg.setSource(4390U);
    msg.setSourceEntity(32U);
    msg.setDestination(49180U);
    msg.setDestinationEntity(189U);
    msg.seq = 39984U;
    msg.sys_dst.assign("KTYFBBXWKJAVFUHARCMSMITZ");
    msg.flags = 125U;
    const char tmp_msg_0[] = {-123, -10, -87, 26, 90, -78, 85, -13, 35, -88, -84, -94, 51, -65, 90, -16, 92, 121, 13, 101, -63, -8, -19, 60, 13, -58, -119, 28, -13, 63, 55, 62, 45, 23, 57, -81, 23, 24, 1, 114, 35, -31, 14, 8, 13, -117, 14, 16, -52, -36, 36, 48, -23, 35, -120, 126, 109, -79, -28, -48, 49, 98, 8, 38, 68, -63, 30, -87, -75, 121, 82, -72, -11, 114, -85, -98, 30, -4, 5, 103, -73, 106, 75, 82, -80, 29, 12, -84, -78, -112, -108, 20, -58, -125, 35, -59, -44, -66, 46, 70, -77, -22, 78, 69, 116, -68, 45, 15, 12, -47, 105, -109, -101, 124, 94, 71, 30, 15, -69, -62, 120, 94, 25, -62, 62, -32, 106, -17, -76, 0, 100, -84, 36, -19, 74};
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
    msg.setTimeStamp(0.95449958879);
    msg.setSource(43399U);
    msg.setSourceEntity(53U);
    msg.setDestination(21081U);
    msg.setDestinationEntity(15U);
    msg.seq = 13375U;
    msg.sys_dst.assign("YLTFKGJTEHUBXNFEIPUJOQNHUSSXILQBOSTQNCLKDMSGOXJZZADWAFRGPJVPZMZMCJTVWFFNHEWPEFPRORYJCDVLRXRHMXYRUFBJAGWSFUKVDFZPLLBKKYGVRQPGEBHWVICYFAIXZGBVNHEVINBCPQ");
    msg.flags = 173U;
    const char tmp_msg_0[] = {115, -50, 94, -85, -54, -61, 30, -41, -11, -15, -118, 17, 7, -21, 106, -95, 45, 36, -77, 21, -80, -70, -12, -97, 89, 75, -93, 102, 9, -79, 24, -102, 73, -109, -24, -91, -6, 23, 42, 116, 108, -121, -66, -45, 88, -105, 73, -22, -67, -39, -80, 55, -64, 123};
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
    msg.setTimeStamp(0.694059640841);
    msg.setSource(8152U);
    msg.setSourceEntity(245U);
    msg.setDestination(47831U);
    msg.setDestinationEntity(225U);
    msg.seq = 13497U;
    msg.sys_dst.assign("JRPGGUSOXMWVIYPKNVATVQQGOGKLCJPZYFKXPYMLEOTAVPMCMIPQSKFHYIVDYURTVFHSWLDQCOPJNYBBEQXELSNRDISUAKFHIFOSZNMEGQRVFZUAYIZAKZAZLARDNMTCYSRGUTTKBNDQXJZDDBEQMEYUWTOBGSDNMQUYWBHXDNSMUIFJSPLWJOOWNGTKOFZIBIJHXETKQMXUBAX");
    msg.flags = 83U;
    const char tmp_msg_0[] = {-67, 106, 41, 123, -119, -84, 69, 35, -9, 40, 49, -64, 95, 57, 121, 30, -64, 87, -124, 105, 17, -60, 40, 18, -12, -84, -118, 116, -32, 42, 38, -112, 71, -91, 27, -107, 63, -119, -113, 28, 77, -21, -80, 83, -5, 8, 125, 110, 55, 36, 93, 88, -1, 103, 119, -11, 66, 11, 50, -53, -112, -72, 107, -69, -114, 50, -118, 21, 12, 25, -37, -48, 48, -38, 87, -64, -113, -92, 106, 77, -87, -19, -32, -111, 72, -40, -7, 34, 87, -57, 26, 115, -46, -17, 4, 106, 44, -120, -9, -82, -44, -112, 19, 85, -106, 55, -88, 92, 120, -42, 46, -125, -23, -124, 120, -108, 42, 72, 118, 73, 8, 15, 99, 88, -127, 64, -118, -48, 75, 69, 103, 124, 46, 3, -12, 72, 8, -42, 21, -14, -69, -108, -106, -89, -23, -35, 119, 122, 72, -79, -108, 12, -35, -105, 69, 92, -108, 92, -105, 38, -62, -9, 93, 46, -84, 22, 95, -75, 28, -62, -65, 112, 93, 39, -109, -71, -17, -12, -6, 107, -103, 32, -60, 126, -117, 72, 84, -68, 16, 6, 95, 79, -29, -86, 117, -91, 21, 116, -12, -36, -102, -67, 73, 114, 29, -106, -45, 124, 43, 55, -5, 81, 113, 103, 40, 7, 126, -37, -97, 77, 35, 38, 12, -72, 119, 18, -6, -55, -117, 123, -111, -118, 100, -104, 104, -25, 34, -45, 37, -115, -25, -54, 105, 90, -17, 61, 54, -8, -82, -107, -4, -29, 49, -42};
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
    msg.setTimeStamp(0.865619691317);
    msg.setSource(2050U);
    msg.setSourceEntity(102U);
    msg.setDestination(26881U);
    msg.setDestinationEntity(170U);
    msg.sys_src.assign("VPFDTXJSJDPCEOGMLZXMWWYATUXHCPZLFJAMIAPLWUNBXQSOPBQZQKYIBQPGXIHACKFSXEJWINIXRIDOEDJSHLVUCMIQLVCIUKXDUNMENKVWUSCPFEEROBAZJF");
    msg.sys_dst.assign("ALGBHGTOGFPKZHHDSLRMVZWICXKPKQEXCZWWFWGAXYKJUGVCJAQTPUUEXTHICPWFHFVIMMXDIKWGMBUEBJSGINZNGFTAPAACLKLQSUEVPHNPDCJFRFDRECTBXJKGENZSSAHNBTEUZDOFNMYJYKQBITZUFLJVEQL");
    msg.flags = 32U;
    const char tmp_msg_0[] = {-18, -83, 62, 78, 74, 71, -5, 41, 54, -96, 107, 59, 14, -95, -71, -16, 125, -74, -41, 87, -121, 48, 53, -42, 11, -35, 37, -23, 15, -47, -104, -70, 102, -102, -69, 92, 42, 25, 120, -23, 112, -106, -10, 42, 2, -54, -59, -39, 55, 57, -113, -8, -62, -125, 74, -39, -48, 15, 123, 7, 120, -44, 15};
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
    msg.setTimeStamp(0.0490234708267);
    msg.setSource(60490U);
    msg.setSourceEntity(244U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("BOVIGEQXDJIUWCMWDPWVWDGSYNXWLBDQKQXJCHJPYJFPVWRGEKMRTGTEZWZMDOPQUHRIKCQILZHSTVOUHZEZZOHHZAVFDEACBFCLSJHRMANFNFQIQRDLBPORYAZEGEAPVCOBYGETBWEMNJKVXBJLOXMIXLFSYVCPXUUTTGULWMXTUAHRNWHBNNLQIARMJYPXNOCSYAZUIYCRD");
    msg.sys_dst.assign("XTIYJUNGEOFVYWTUFTMQLLTGHOIRHOZZJOVPTKRMOXWNOAYYXNCCVVVJKKZJSGSAUYRNESGHOFKPMWTQWWFPSBMPRFDCBFBERNARGITHLDPHKLOIZMYCILGAQSQUHBQUMK");
    msg.flags = 13U;
    const char tmp_msg_0[] = {29, -34, 20, -87, 76, 77, -37, -6, -125, -122, 34, -39, -121, -103, 83, -94, 12, 36, 78, -84, -105, -94, 74, -52, -19, -42, -95, -87, -101, -43, -99, 94, 3, -103, 52, -94, 126, 18, 78, 116, 96, 20, -111, 44, 114, 77, 42, -96, -117, 52, 115, -30, -83, -8, -125, 22, -9, 13, -39, 94, -109, 93, -78, -14, 101, 86, 124, -61, 68, 11, 120, 12, -112, -96, -38, 54, 113, -57, -29, 89, -83, 13, -36, -35, -15, -67, 101, 73, 0, 104, 82, 23, 4, -15, -58, 102, 36, 107, -78, 77, -52, -81, 122, 9, -102, -77, -18, 50, -46, 2, -76, 40, 71, 107, -105, -27, 5, 94, 56, -119, -5, 120, 124, 40, -90, -12, 44, 36, -20, 24, -75, 117, -121, 107, -80, -3, -65, -119, 88, -44};
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
    msg.setTimeStamp(0.234439717794);
    msg.setSource(11720U);
    msg.setSourceEntity(192U);
    msg.setDestination(36711U);
    msg.setDestinationEntity(177U);
    msg.sys_src.assign("UOIKCBRGUPSAPSLYVTOJAJIESIZVQSWQDSJXBACFKVLPCWYYOXSQTFVSEUWEVNLHPXHENNPTJDZMMMLYDPCUMOBZIAXRTPYEWLSBKGXRMRFFAQXMCQJCDEBGZZJCAKVT");
    msg.sys_dst.assign("CMAFMGTLUQWUVIFGPDDIMOYHVPAPBBEDBWPYERRSMKFPSMBAKLUGXVQWWHJZ");
    msg.flags = 139U;
    const char tmp_msg_0[] = {-108, 20, 73, 63, -59, -76, 19, -70, -18, -35, 32, 22, 86, -99, -56, 6, 49, -51, 96, 34, -68, -128, 120, -20, -72, 108, 60, 39, 1, 65, -19, 32, -58, -103, -95, -30, 63, 98, 22, 56, -26, -86, -95, 110, -53, 57, -120, 42, 66, 54, 74, 107, -86, 59, -57, -38, 20, -66, -102, -42, -25, 27, 42, -70, 63, -24, 98, -2, -120, -22, -11, 73, -116, -32, 119, 66, 102, 102, 125, -29, 75, 10, -95, -25, 62, 84, 95, -20, 96, 49, -125, 25};
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
    msg.setTimeStamp(0.313739939803);
    msg.setSource(6069U);
    msg.setSourceEntity(229U);
    msg.setDestination(3276U);
    msg.setDestinationEntity(248U);
    msg.seq = 24933U;
    msg.value = 250U;
    msg.error.assign("OTARMPLWEQJHSTFWXKFKGBCUVHVGTKSTZRLXOEYWGBQWJPAMVLXJPJTIVHGVDXOOK");

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
    msg.setTimeStamp(0.132207058101);
    msg.setSource(44209U);
    msg.setSourceEntity(93U);
    msg.setDestination(43827U);
    msg.setDestinationEntity(201U);
    msg.seq = 25230U;
    msg.value = 40U;
    msg.error.assign("PSYRJDRTLWKQOQUTMSRWRZBDGJWLDOPCGLZRIWNCQTIZXSLCREOEYBOGAKHOBEFGJTXAPDGSEAUNZYXJAKGFFQYPMVMOOMTDRNLVIKJJYRAZMTJAIDQKLQMXYIPVPUWPANOVTJHICTNYLYQAEXENRJUXUGVMFSWNCSDZUYLPLXIIGQZQSCNHEZHHRKBGNZEELFFMMDHFJKOFICGQWBIWHPHEBSVHXMUVBKDOPBBFHCWSXWVVUBCZYTNSCT");

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
    msg.setTimeStamp(0.192062578172);
    msg.setSource(64266U);
    msg.setSourceEntity(157U);
    msg.setDestination(29691U);
    msg.setDestinationEntity(190U);
    msg.seq = 64441U;
    msg.value = 206U;
    msg.error.assign("DLRHIHJCOUFMUAPQOGZXKLTCMLXVZYNRGRELHGZEUUBCSJAJMBYTNVEAIBHOAVJBTYWKHPFGDVZWESQQGSJQUQHYRISTZULWAGEECYNUUAAWJIWYMYOXLPOKVBGMPHTKGWCXPPTDQZMRROEKTXUDXFHLXRQFQTNRMNLXVBTOSJKDDWFNJYDNZHAVRNLFDFACRQMOUHIPATWFD");

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
    msg.setTimeStamp(0.0339292489613);
    msg.setSource(22341U);
    msg.setSourceEntity(144U);
    msg.setDestination(43132U);
    msg.setDestinationEntity(171U);
    msg.seq = 48406U;
    msg.sys.assign("HVRJFPWSLJLBEZUYDMTMYXWKXAYMIBPTRJLPYVPTZTBWDMBNQZUBAZETGJMBRUKVCOFWNREPFKWSXUQNSZ");
    msg.value = 0.562169551653;

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
    msg.setTimeStamp(0.50558934538);
    msg.setSource(44354U);
    msg.setSourceEntity(216U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(120U);
    msg.seq = 36130U;
    msg.sys.assign("HBMLYCJCUHVTUCQYRKNNUEEKMZABDWRXLMBAVNCXFMEIPMZAJIYSMOIWZFJLZVBKGOHSVFDSSKPLSGGGBOPTDFHRPXYDYGWQJEHRRKFRHWDIPODWHQYVQJFXCPDBQWRUXOTUWSUWBVG");
    msg.value = 0.487596560556;

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
    msg.setTimeStamp(0.201686639736);
    msg.setSource(46008U);
    msg.setSourceEntity(117U);
    msg.setDestination(7488U);
    msg.setDestinationEntity(197U);
    msg.seq = 15205U;
    msg.sys.assign("CNDPJYMNOUEIOAZUTHNSBRWWYCGUHFDYMWCLYGDYQPANTQWXIEWHGIMAORZWYCMWXEHNLKXDDVPHDAJSFCPVYXKGNIVOQPXKBVIDSPLMWUXTKBORXQPGFLUIRZJITTSKBTXBBFAVQDFCTDOCBJJQLZUABSMVOOYVSFFMLKOGRRSEEZLPILBQZ");
    msg.value = 0.773931907147;

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
    msg.setTimeStamp(0.799913931577);
    msg.setSource(23555U);
    msg.setSourceEntity(72U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(53U);
    msg.action = 233U;
    msg.longain = 0.695622603432;
    msg.latgain = 0.686495865109;
    msg.bondthick = 2964489519U;
    msg.leadgain = 0.371926849237;
    msg.deconflgain = 0.215844747069;

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
    msg.setTimeStamp(0.0977261428439);
    msg.setSource(30954U);
    msg.setSourceEntity(220U);
    msg.setDestination(29730U);
    msg.setDestinationEntity(159U);
    msg.action = 209U;
    msg.longain = 0.760384185538;
    msg.latgain = 0.0357243297612;
    msg.bondthick = 2566401129U;
    msg.leadgain = 0.871664411224;
    msg.deconflgain = 0.16046131377;

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
    msg.setTimeStamp(0.360364401034);
    msg.setSource(22329U);
    msg.setSourceEntity(21U);
    msg.setDestination(21588U);
    msg.setDestinationEntity(198U);
    msg.action = 55U;
    msg.longain = 0.669008328934;
    msg.latgain = 0.225646071518;
    msg.bondthick = 1554626652U;
    msg.leadgain = 0.355301138555;
    msg.deconflgain = 0.547696935963;

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
    msg.setTimeStamp(0.611312988402);
    msg.setSource(18174U);
    msg.setSourceEntity(222U);
    msg.setDestination(50208U);
    msg.setDestinationEntity(18U);
    msg.err_mean = 0.317582974576;
    msg.dist_min_abs = 0.915269110403;
    msg.dist_min_mean = 0.414466930554;

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
    msg.setTimeStamp(0.501716411554);
    msg.setSource(48534U);
    msg.setSourceEntity(30U);
    msg.setDestination(41285U);
    msg.setDestinationEntity(200U);
    msg.err_mean = 0.769559463036;
    msg.dist_min_abs = 0.93934026135;
    msg.dist_min_mean = 0.853048293654;

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
    msg.setTimeStamp(0.332958055818);
    msg.setSource(13663U);
    msg.setSourceEntity(7U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(111U);
    msg.err_mean = 0.121663329739;
    msg.dist_min_abs = 0.495912161622;
    msg.dist_min_mean = 0.849231070335;

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
    msg.setTimeStamp(0.731892939587);
    msg.setSource(47617U);
    msg.setSourceEntity(41U);
    msg.setDestination(54042U);
    msg.setDestinationEntity(217U);
    msg.action = 249U;
    msg.lon_gain = 0.800990638693;
    msg.lat_gain = 0.857491798428;
    msg.bond_thick = 0.726033054879;
    msg.lead_gain = 0.669156192019;
    msg.deconfl_gain = 0.114682355267;
    msg.accel_switch_gain = 0.237363143345;
    msg.safe_dist = 0.185277035257;
    msg.deconflict_offset = 0.771646548984;
    msg.accel_safe_margin = 0.353644051289;
    msg.accel_lim_x = 0.0855215233941;

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
    msg.setTimeStamp(0.750481952072);
    msg.setSource(27239U);
    msg.setSourceEntity(225U);
    msg.setDestination(1916U);
    msg.setDestinationEntity(6U);
    msg.action = 77U;
    msg.lon_gain = 0.565732337907;
    msg.lat_gain = 0.677423092492;
    msg.bond_thick = 0.548805642826;
    msg.lead_gain = 0.014467247803;
    msg.deconfl_gain = 0.495677552396;
    msg.accel_switch_gain = 0.805213269106;
    msg.safe_dist = 0.684687183578;
    msg.deconflict_offset = 0.867864774942;
    msg.accel_safe_margin = 0.216213896417;
    msg.accel_lim_x = 0.683742909622;

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
    msg.setTimeStamp(0.324263309826);
    msg.setSource(38157U);
    msg.setSourceEntity(9U);
    msg.setDestination(18320U);
    msg.setDestinationEntity(82U);
    msg.action = 226U;
    msg.lon_gain = 0.0807103696368;
    msg.lat_gain = 0.911314419387;
    msg.bond_thick = 0.791275767301;
    msg.lead_gain = 0.868325743595;
    msg.deconfl_gain = 0.92947379213;
    msg.accel_switch_gain = 0.165578487343;
    msg.safe_dist = 0.831405033595;
    msg.deconflict_offset = 0.734014233247;
    msg.accel_safe_margin = 0.191147053657;
    msg.accel_lim_x = 0.208533971625;

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
    msg.setTimeStamp(0.171083945754);
    msg.setSource(61804U);
    msg.setSourceEntity(21U);
    msg.setDestination(36747U);
    msg.setDestinationEntity(182U);
    msg.type = 17U;
    msg.op = 14U;
    msg.err_mean = 0.327001758674;
    msg.dist_min_abs = 0.959773821589;
    msg.dist_min_mean = 0.986557074739;
    msg.roll_rate_mean = 0.374735461982;
    msg.time = 0.228372285891;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 129U;
    tmp_msg_0.lon_gain = 0.0246357348179;
    tmp_msg_0.lat_gain = 0.17554151623;
    tmp_msg_0.bond_thick = 0.893144869638;
    tmp_msg_0.lead_gain = 0.337085682118;
    tmp_msg_0.deconfl_gain = 0.316690750435;
    tmp_msg_0.accel_switch_gain = 0.288358910445;
    tmp_msg_0.safe_dist = 0.399653411104;
    tmp_msg_0.deconflict_offset = 0.272465174277;
    tmp_msg_0.accel_safe_margin = 0.893841684093;
    tmp_msg_0.accel_lim_x = 0.819528693844;
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
    msg.setTimeStamp(0.944829386311);
    msg.setSource(23455U);
    msg.setSourceEntity(210U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(174U);
    msg.type = 14U;
    msg.op = 129U;
    msg.err_mean = 0.63213392278;
    msg.dist_min_abs = 0.450895014875;
    msg.dist_min_mean = 0.858937511006;
    msg.roll_rate_mean = 0.24038598307;
    msg.time = 0.19204448776;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 46U;
    tmp_msg_0.lon_gain = 0.430078127193;
    tmp_msg_0.lat_gain = 0.837618143465;
    tmp_msg_0.bond_thick = 0.211737791467;
    tmp_msg_0.lead_gain = 0.401525786025;
    tmp_msg_0.deconfl_gain = 0.56615874951;
    tmp_msg_0.accel_switch_gain = 0.0737105134053;
    tmp_msg_0.safe_dist = 0.0343749024756;
    tmp_msg_0.deconflict_offset = 0.558571360896;
    tmp_msg_0.accel_safe_margin = 0.318341301111;
    tmp_msg_0.accel_lim_x = 0.340463716549;
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
    msg.setTimeStamp(0.16664350789);
    msg.setSource(28807U);
    msg.setSourceEntity(3U);
    msg.setDestination(3338U);
    msg.setDestinationEntity(80U);
    msg.type = 242U;
    msg.op = 252U;
    msg.err_mean = 0.631195788459;
    msg.dist_min_abs = 0.000795802066651;
    msg.dist_min_mean = 0.108130446165;
    msg.roll_rate_mean = 0.384790624771;
    msg.time = 0.154575401976;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 143U;
    tmp_msg_0.lon_gain = 0.080263747652;
    tmp_msg_0.lat_gain = 0.597515273804;
    tmp_msg_0.bond_thick = 0.497206496391;
    tmp_msg_0.lead_gain = 0.29779913934;
    tmp_msg_0.deconfl_gain = 0.83489848468;
    tmp_msg_0.accel_switch_gain = 0.00281133955352;
    tmp_msg_0.safe_dist = 0.843296579285;
    tmp_msg_0.deconflict_offset = 0.220942303065;
    tmp_msg_0.accel_safe_margin = 0.836752803921;
    tmp_msg_0.accel_lim_x = 0.607525632215;
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
    msg.setTimeStamp(0.991146116048);
    msg.setSource(39592U);
    msg.setSourceEntity(240U);
    msg.setDestination(49942U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.896453585186;
    msg.lon = 0.964609502847;
    msg.eta = 860844502U;
    msg.duration = 39754U;

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
    msg.setTimeStamp(0.703183829814);
    msg.setSource(49503U);
    msg.setSourceEntity(168U);
    msg.setDestination(7946U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.186807475626;
    msg.lon = 0.856672531506;
    msg.eta = 2237066982U;
    msg.duration = 57207U;

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
    msg.setTimeStamp(0.24353601636);
    msg.setSource(14660U);
    msg.setSourceEntity(28U);
    msg.setDestination(42295U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.623131067699;
    msg.lon = 0.678574892167;
    msg.eta = 2056463189U;
    msg.duration = 36998U;

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
    msg.setTimeStamp(0.0893376997738);
    msg.setSource(13890U);
    msg.setSourceEntity(170U);
    msg.setDestination(233U);
    msg.setDestinationEntity(209U);
    msg.plan_id = 28481U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.911489571697;
    tmp_msg_0.lon = 0.301113750161;
    tmp_msg_0.eta = 82655703U;
    tmp_msg_0.duration = 1442U;
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
    msg.setTimeStamp(0.361932912261);
    msg.setSource(63687U);
    msg.setSourceEntity(119U);
    msg.setDestination(4038U);
    msg.setDestinationEntity(163U);
    msg.plan_id = 63668U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.988937830855;
    tmp_msg_0.lon = 0.953601670634;
    tmp_msg_0.eta = 3971407315U;
    tmp_msg_0.duration = 18774U;
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
    msg.setTimeStamp(0.249641870074);
    msg.setSource(28224U);
    msg.setSourceEntity(66U);
    msg.setDestination(38079U);
    msg.setDestinationEntity(44U);
    msg.plan_id = 4415U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.0550086611281;
    tmp_msg_0.lon = 0.157753400873;
    tmp_msg_0.eta = 2946048983U;
    tmp_msg_0.duration = 40799U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.0413063662908);
    msg.setSource(29927U);
    msg.setSourceEntity(196U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(3U);
    msg.type = 19U;
    msg.command = 192U;
    msg.settings.assign("BSVWHFUVRIMBSFZUHOTSLICBGNXPQGRBVBDZDFDWWCITTRCITYLKDTDRLMMNRJXCXKRHZAWLSQYIJJNJGQWBVAIFVTOLJIHDNSWZUFIKGRZAPQJSOCXOOCSEMHIYGLZKBNASMKEBLFZHTKVPVXMDAQEEQPUOAYNGLHUZOGPNMUCPNRQCRMDOAYKPXYUXACPLDQTQHDXXSLAZEJNMYNEEEWVYUWFORJTWPU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 21741U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.412670692459;
    tmp_tmp_msg_0_0.lon = 0.17041129092;
    tmp_tmp_msg_0_0.eta = 1758575266U;
    tmp_tmp_msg_0_0.duration = 4665U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("XQXUNEQYWUREETZVOSZFFTXCDBQGQWZKHEZAXHNYMLKGSJLSQCPTRXPSVSOZEHBGOLYFPMDZJLKGJFIFUCRCQBYUOOXHOWWRKUBBVJAGBVROLATQHGRDVGMYHYJCDRFDNYTIEDWMWZBUPJBROJWVSYQKHLTXIMCMUFCSYKPPEKDKHHAFGTVLCRLAXSZFTGMIBINRMCNBLZOHEQDKWLJMAJWDZMAVNUYIVQUSIPEN");

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
    msg.setTimeStamp(0.913155154732);
    msg.setSource(59042U);
    msg.setSourceEntity(134U);
    msg.setDestination(4874U);
    msg.setDestinationEntity(31U);
    msg.type = 14U;
    msg.command = 128U;
    msg.settings.assign("KAEAUQBDFIDPZXGOQMYQQDDCWGRNAMQVGTDMVSFSBFYLQTGZURVYVJTWGPPDSJFRXCXWPEEOVLUFLCVENAARUHUYCSBSVETZLFEXODDUHNKTIXUPIXAKZZRCCLLROILYAKJQAVPOEHRWPZYZMAYNRNXVNPKZHBFEOZDIC");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24251U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GHUATWRMQNTKJ");

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
    msg.setTimeStamp(0.147985524068);
    msg.setSource(18601U);
    msg.setSourceEntity(143U);
    msg.setDestination(5120U);
    msg.setDestinationEntity(64U);
    msg.type = 176U;
    msg.command = 171U;
    msg.settings.assign("VWCHHPXZQGSTMASFLEQNQUOBDKAHTGBIFUTPBZFMESMHPRJGWKIWCWDTEJRFYSSLRAEDIINXUWOAPHZKAAXQCHXRYPRTDXJABUTFCMJZIFUMYCOUSEPKY");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27905U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HTDRJQMDSNUSGCMAYZZDVEBPQGNFPBEWEVTLDYRVHAKUENLCTUXPBMZOJIKNPFLAIRKRFXPLATIWERPMZOBLPNRLSGOBXXXHGTBWNDQJRMFQDVQFOVGOIMFCGEPIQSPJBWDYNGIGYDRLHHZAZLXZWUUBOAHKHCATGFYOWOSWBDQAJCHPUXSZUCLKCKJIGKRJFKXETOERAWQYJMKVXNLJYTIYCX");

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
    msg.setTimeStamp(0.438478286049);
    msg.setSource(36551U);
    msg.setSourceEntity(235U);
    msg.setDestination(42957U);
    msg.setDestinationEntity(61U);
    msg.state = 136U;
    msg.plan_id = 14850U;
    msg.wpt_id = 69U;
    msg.settings_chk = 39538U;

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
    msg.setTimeStamp(0.0104382057139);
    msg.setSource(29786U);
    msg.setSourceEntity(145U);
    msg.setDestination(30214U);
    msg.setDestinationEntity(52U);
    msg.state = 224U;
    msg.plan_id = 17943U;
    msg.wpt_id = 242U;
    msg.settings_chk = 53893U;

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
    msg.setTimeStamp(0.0370941992263);
    msg.setSource(40593U);
    msg.setSourceEntity(87U);
    msg.setDestination(48591U);
    msg.setDestinationEntity(63U);
    msg.state = 149U;
    msg.plan_id = 1254U;
    msg.wpt_id = 8U;
    msg.settings_chk = 45973U;

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
    msg.setTimeStamp(0.850747819737);
    msg.setSource(39920U);
    msg.setSourceEntity(187U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(108U);
    msg.uid = 221U;
    msg.frag_number = 110U;
    msg.num_frags = 80U;
    const char tmp_msg_0[] = {-61, 108, 6, -89, 19, 108, 59, -17, -6, -73, -84, 54, 105, 125, -85, 102, 95, -15, -61, 50, -55, -92, -115, -112, 115, 43, -110, 49, -67, -42, -99, 24, -37, 112, -26, -113, -92, -117, 88, -97, -18, -124, -26, 4, -99, 43, -106, 107, 50, -7, 71, 16, -55, -78, 106, 28, 13, 99, -96, -109, 50, 82, -7, 12, -106, -48, 40, 19, 98, 112, 53, 67, 45, 44, -36, -29, -89, -49, 116, 44, 102, -39, 39, 45, 35};
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
    msg.setTimeStamp(0.211147945561);
    msg.setSource(39789U);
    msg.setSourceEntity(166U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(139U);
    msg.uid = 200U;
    msg.frag_number = 192U;
    msg.num_frags = 159U;
    const char tmp_msg_0[] = {32, -120, 0, 61, 60, -113, -58, 59, 104, 13, -110, -115, 98, 10, -103, 93, 51, -19, -25, 27, 95, -121, -88, -89, -27, -104, -124, 75, 70, 39, 102, -126, -79, 20, 115, 27, -66, -92, -41, -75, 30, -38, -93, -17, 45, 81, 56, -21, -18, -86, 106, 40, -114, 96, -51, -67, 21, -73, 111, 15, 47, -53, -103, -10, 39, -74, 3, -54, -106, 21, 29, 68, 19, -88, 110, 70, -83, -105, -119, 89, 4, 10, 71, 63, 55, -54, 113, 94, 58, 119, -67, -110, 44, -43, -95, -73, 15, 32, -36, 91, 100, 66, 62, -82, 2, -46, -49, -19, 31, 62, -25, -13, -39, 118, 3, -18, -67, -125, -59, 1, 27, -15, 65, -61, -15, -78, -19, 38, -123, -114, -106, -103, -19, -39, -88, -37, 104, 43, -15, 36, -15, -30, 126, -94, 66, 58, -47, -24, -45, -44, 0, -69, 52, -102, -6, -107, -76, 70, 41, -86, 79, 39, 43, -99, -115, -83, -80, -92, 117, -24, 73, 16, 121, -97, 35, 121, 105, 56, -102, -118, 44, 60, 122, 93, 95, -68, -26, 17, -110, -39, -57, 66, 28, -22, -115, -88, -37, -27, -33, 102};
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
    msg.setTimeStamp(0.471691943215);
    msg.setSource(12105U);
    msg.setSourceEntity(242U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(32U);
    msg.uid = 27U;
    msg.frag_number = 234U;
    msg.num_frags = 205U;
    const char tmp_msg_0[] = {-123, -4, 24, 25, -56, 114, -1, 66, -106, -38, -104, 78, -39, -48, -30, -49, 102, 39, 69, -104, 119, 18, -53, -125, 126, -124, -25, -9, 80, 113, -124, 15, -11, 121, 113, 36, -20, 97, 106, 50, 80, 109, 111, -97, 117, 34, -72, 121, 9, 86, 60, 39, -60, -117, 71, 0, -46, -120, -96};
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
    msg.setTimeStamp(0.471678088048);
    msg.setSource(22501U);
    msg.setSourceEntity(123U);
    msg.setDestination(42320U);
    msg.setDestinationEntity(0U);
    msg.content_type.assign("YPVGIGDAIXVRVSYYNBRNYGZWEDGCQRDWCMHPPFDBWGJCXCMUKKKORPYOJVZHBTXYAHCDLESPMAWCLWQPGIXDKRFZSTAXQNCTLJIAIGTLBLQOOOUEJBELVOSLOZRJLVXFZVGHWRJTIDTHMPFNJKLJUECQQQUSEHXTABWPIRKKMDBBXNDFAEOMUMEDMFKGFSIUNEBLTHNUHGAQNCZZPKMPKJQZVHXVERC");
    const char tmp_msg_0[] = {58, -33, 15, 8, 110, 90, 69, -15, -13, -106, -5, 70, -90, 11, 5, 87, 23, -87, -44, 38, -86, -32, 14, -29, -77, -32, -97, 85, -122, 42, 62, 126, 125, -39, -104, -22, 35, -32, 48, -93, -122, -108, -101, 48, 28, -55, -54, -15, -51, -4, 93, -103, -40, 11, 109, -19, 81, -61, -73, 66, 30, 38, 17, -44, -83, -91, -67, -9, 14, -19, 32, 99, 83, 117, 10, -38, -3, -13, 8, 43, -122, -26, 29, 92, -54, -84, 0, -126, 11, 113, 72, -4, -104, 59, -97, 36, 110, -15, -17, 15, -21, 10, -37, 87, 44, -116, 42, -121, 57, 86, -68, 68, 103, 57, 61, -12, -9, -10, 40, -110, -122, -32, -52, 104, -35, -76, -117, 77, 22, -110, -63, -69, -49, -78, -93, 21, 25, 52, 73, 13, -91, 94, -45, 76, -22, -29, -54, 3, -87, -53, -16, 101, -108, 45, 45, -11, 87, 41, 72, -47, -9, 27, -22, -89, -52, -74, 64, -101, 64, 14, 79, -88, 112, -100, 25, -53, -94, -4, 80, -91, -45, 71, -61, 89, 49, 62, -27, -107, 1, -8, -106, 124, -41, -33, -55, 12, -81, -59, 108, 84};
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
    msg.setTimeStamp(0.0835215620482);
    msg.setSource(44506U);
    msg.setSourceEntity(189U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(230U);
    msg.content_type.assign("CVBPDPPTJGSOLJCFUZMFEVRUAGABFWVNDAPNFZNOWUKJPGWIMLIAFKEDUCEOEXPQQEZACYRNATALPMVUXZVGKYOLLMDSQHSVTRBHXWKOYRBQVFYKPGQIMASDQGJLMZUYJTXYCLCWUTXBEHCNFNKEDZLXHGXVGWORBIWTVNDFHAYPKXEKZMIMGSYTQITXNZDYNYIHEUBZBHZRQWTJLAFSOJTHORU");
    const char tmp_msg_0[] = {-128, 60, 47, 30, 66, -84, -44, 44, -46, -52, 65, -2, 45, -21, -22, -37, 110, 57, -126, -37, -51, -48, 33, 15, -83, -44, 13, -47, 74, 110, 119, 106, -10, -26, -4, -60, -79, 54, 82, 34, 118, 51, 17, -99, -106, 7, 51, 38, 25, 94, 76, -31, -116, -128, 101, -61, -77, -96, -123, -87, -107, 119, -64, -99, -55, 98, -89, -114, -52, -117, 31, 47, 3, 85, -39, -60, 97, 8, 119, 20, 47, -113, 88, -67, 20, 101, 67, -87, -87, 53, 27, -62, 60, -79, 109, -17, -105, 31, 92, -84, -34, 1, -30, -69, 95, 94, 34, 46, -123, 119, -94, 26, -24, 61, -1, 83, 52, 44, -49, -115, -28, 37, -106, -93, 74, 31, -109, 13, 50, -48, 69, 72, -48, 98, -79, 84, 105, 30, 114, -84, -77, -73, 74, 25, -84, 116, -6, 38, 125, -100, 84, 17, 30, -74, -61, 36, 12, 111, -35, -71, 64, 12, -61, -29, -96, 15, -99, 7, -121, 29, 26, -29, -53, -98, 4, -16, -8, -37, 19, -24, 21, 35, 76, 4, 76, -62, -106, 96, 117, -105, -18, -18, -72, -50, 84, 13, -36, -13, 120, 125, 106, 37, 74, -76, 65, 15, -33, 75, -42, 95, 69, 35, -11, 25, 33, 9, -23, 80, 113, -39, -43, 5, -68, 61, -3, -55, -47, 16, -56, 33, 44, -118, -22, 24, 44, 45, 115, -5, -88, -49, 67, -82, -7, -13};
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
    msg.setTimeStamp(0.141346837051);
    msg.setSource(48582U);
    msg.setSourceEntity(222U);
    msg.setDestination(25809U);
    msg.setDestinationEntity(213U);
    msg.content_type.assign("IUKTQOLFZPAZMLQCMQAHMMYXJCQPKSOPXGUSJSYRWSKPDKUHNFPCRVEZZIWAOXLKNWVURJGUTGZCVONFZWICFZICIWAUYHJIXYYDATGGCIDJBQCVYGY");
    const char tmp_msg_0[] = {-127, 88, 5, 23, -48, 101, 0, -117, -81, -66, -14, -78, -117, 3, 126, 84, -116, -101, -87, 13, -117, -94, -29, 67, 51, -95, 20, 52, -88, 68, 109, -27, 58, 43, -122, 43, 113, -92, -84, -13, -29, -33, -62, -34, 74, -99, -20, 65, -94, 108, -104, 111, -40, -53, 30, -57, -124, -41, 66, 123, 60, 54, 55, -67, 118, -93, -58, 16, 86, -1, 24, 73, -65, -36, -2, -108, -84, 121, 90, 65, -122, -127, 17, 15, 83, 46, 8, 103, -18, 30, -38, -101, -94, 6, -9, 53, -15, 50, 52, -52, -57, -49, 67, -103, -127, 47, 59, 25, 17, -80, -41, 125, -35, -23, 10, -35, 96, 23, 26, -10, -39, 54, 11, -63, -120, -111, 71, -110, 83, -104, 85, 41, 3, 117, -91, 32, 28, 71, 64, 82, -53, 30, -1, 40, -32, -29, 108, -7, 8, 46, -103, -60, -61, -125, 0, 119, -18, -50};
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
    msg.setTimeStamp(0.684691012809);
    msg.setSource(2085U);
    msg.setSourceEntity(43U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.612732000852);
    msg.setSource(25580U);
    msg.setSourceEntity(119U);
    msg.setDestination(34838U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.474181845029);
    msg.setSource(38813U);
    msg.setSourceEntity(211U);
    msg.setDestination(16540U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.771855329244);
    msg.setSource(31824U);
    msg.setSourceEntity(22U);
    msg.setDestination(25202U);
    msg.setDestinationEntity(45U);
    msg.target = 60050U;
    msg.bearing = 0.491122660444;
    msg.elevation = 0.0642051900223;

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
    msg.setTimeStamp(0.885016827226);
    msg.setSource(36908U);
    msg.setSourceEntity(13U);
    msg.setDestination(62626U);
    msg.setDestinationEntity(63U);
    msg.target = 26448U;
    msg.bearing = 0.660261192547;
    msg.elevation = 0.312710661894;

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
    msg.setTimeStamp(0.662586014531);
    msg.setSource(62591U);
    msg.setSourceEntity(186U);
    msg.setDestination(35162U);
    msg.setDestinationEntity(84U);
    msg.target = 3291U;
    msg.bearing = 0.538806026179;
    msg.elevation = 0.385185419296;

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
    msg.setTimeStamp(0.640764916782);
    msg.setSource(28541U);
    msg.setSourceEntity(7U);
    msg.setDestination(58679U);
    msg.setDestinationEntity(122U);
    msg.target = 24926U;
    msg.x = 0.662767260291;
    msg.y = 0.706423249843;
    msg.z = 0.404466334422;

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
    msg.setTimeStamp(0.262827364121);
    msg.setSource(6923U);
    msg.setSourceEntity(125U);
    msg.setDestination(30571U);
    msg.setDestinationEntity(66U);
    msg.target = 44813U;
    msg.x = 0.303925899081;
    msg.y = 0.570217975548;
    msg.z = 0.294285265387;

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
    msg.setTimeStamp(0.313937669286);
    msg.setSource(39274U);
    msg.setSourceEntity(99U);
    msg.setDestination(38195U);
    msg.setDestinationEntity(193U);
    msg.target = 42232U;
    msg.x = 0.526970246085;
    msg.y = 0.970775469856;
    msg.z = 0.285429081703;

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
    msg.setTimeStamp(0.84719925599);
    msg.setSource(22732U);
    msg.setSourceEntity(251U);
    msg.setDestination(55970U);
    msg.setDestinationEntity(187U);
    msg.target = 39122U;
    msg.lat = 0.0310439010538;
    msg.lon = 0.0725904334575;
    msg.z_units = 235U;
    msg.z = 0.813022895624;

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
    msg.setTimeStamp(0.992547005954);
    msg.setSource(40806U);
    msg.setSourceEntity(12U);
    msg.setDestination(14969U);
    msg.setDestinationEntity(254U);
    msg.target = 22568U;
    msg.lat = 0.469380329028;
    msg.lon = 0.552646585414;
    msg.z_units = 75U;
    msg.z = 0.951046837179;

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
    msg.setTimeStamp(0.787979714983);
    msg.setSource(63215U);
    msg.setSourceEntity(53U);
    msg.setDestination(65468U);
    msg.setDestinationEntity(112U);
    msg.target = 11421U;
    msg.lat = 0.700750686385;
    msg.lon = 0.750985914552;
    msg.z_units = 191U;
    msg.z = 0.474574257021;

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
    msg.setTimeStamp(0.341379314537);
    msg.setSource(55568U);
    msg.setSourceEntity(218U);
    msg.setDestination(41802U);
    msg.setDestinationEntity(180U);
    msg.locale.assign("QKZJWGHTSKNIJIMUKDTHYDUQFEXNVNUSETENVTAWWMSJGMZRBMZXMWDXEAXNJVLJOBPQMDNJGOKFJCSRDALAMLRXYSRSZIMVUPEGECYHFOYSDFBDTWQCGKLJHPLCCHYHIBNCKRWUAOPLOZPZAIWGCBVGOZTPRNUNXKQBJHRNPH");
    const char tmp_msg_0[] = {-119, -66, 119, -29, -59, 92, 110, -72, -71, 47, 101, 118, 71, -29, -49, 104, -77, -106, -66, -18, -67, 51, -19, -21, 44, -51, 42, -28, -70, -48, -78, 18, -79, -121, 114, -26, -119, -119, -52, -89, -105, 13, 77, -64, 88, -81, -20, 29, -19, 71, -84, -63, 92, 120, -53, 90, -120, 30, -113, 103, -52, 26, 56, 15, -11, -41, 64, 99, -101, -21, -67, -27, 100, 121, 53, -58, -39, -125, -4, -67, 90, 57, 32, 95, 13, -42, -19, 89, 32, 5, -113, -126, -29, 33, 116, 20, 83, 15, 31, 38, 76, -20, -59, 103, -105, 36, 30, 56, -37, -49, 44, 92, -107, -19, -13, 58, 8, 18, 5, 61, -42, -77, 35, 5, -43, -118, 98, 32, 105, 104, 121, 16, 59, -22, -122, -61, 72, 5, 79, 57, -69, 33, -58, -116, 122, -118, 28, -13, -19, 92, -103, -62, 46, 22, -34, 113, -86, 2, 7, 9, -91, -39, 33, -19, 62, -88, -76, -103, 47, 65, 73, 61, 107, 42, -29, -12, 97, 87, 5, 30, -96, 54, 99, 81, -66, -36, 76, 123, 88, 10, -69, -93, -104, -37, -19, -43, -78, 91, -118, -75, 70, 93, -93, 46, 12, -37, -33, -61, -93, 42, -85, 25, 19, 87, 68, 63, -103, -58, -103, 114, -81, 118};
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
    msg.setTimeStamp(0.496446538829);
    msg.setSource(3479U);
    msg.setSourceEntity(74U);
    msg.setDestination(53286U);
    msg.setDestinationEntity(247U);
    msg.locale.assign("XVNYHVGQTWPUIQPDXOOABOYLKSXFCLNLRDZWWWOUTDARZOIBKZIXIYJTACKPTRBEBMQEOLXYQBLIPEQVAGSRHJDFJYCCJJSYLASVMROCMXSFZKHGPSTJWZCUVAHMQTTKKUUCJEBAILEUVDIWLHZFBCIVMEBFGNYFQZHVCADUYNMXGQSTLRCYDGONDRRQHGDMPBTNGNNWKZZHRSWNFIXMVKKEQRMI");
    const char tmp_msg_0[] = {-61, 70, -27, -114, -27, 103, 69, 15, 77, -32, 19, 113, -48, 95, 94, 19, 22, -98, 84, -4, -113, 75, -84, -58, -1, 118, -30, 20, -92, 125, -6, -17, 42, 14, 79, -11, 113, -66, -55, -67, -51, 97, 126, 21, 114, -29, -105, -90, 38, -103, -95, 118, 83, 41, -127, 50, -106, 41, 6, -107, 97, 47, -119, -32, -76, 70, 49, -56, 112, -58, -37, -112, 55, -57, 88, 31, -67, -47, 25, -32, -95, 92, 118, -105, 87, 28, -82, -91, 46, 13, -99, -92, -72, 61, -85, 9, -27, -52, 22, -110, 29, -97, 93, -26, -90, 87, 27, -22, -59, -51, -116, 80, 60, 111, 14, 99, 87, 30, 83, -27, 65, 3, 33, -119, -62, 93, -117, -60, 99, 57, 13, -102, -26, -53, 61, 7, -94, -64, 102, 126, 114, 33, 122, -95, 104, 6, -113, -66, 123, -9, 25, -12, 31, -50, 39, 120, 66, -58, -20, -124, 32, 110, -33, -95, 40, -117, 61, 42, 65, -123, 75, -16, -74, -12, -93, 126, -92, -7, -17, -32, 35, -122, -23, 67, -79, -83, 84, -73, 101, 62, -24, 7, 117, -74, 83, 4, -51, 1};
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
    msg.setTimeStamp(0.405287597823);
    msg.setSource(41896U);
    msg.setSourceEntity(112U);
    msg.setDestination(30543U);
    msg.setDestinationEntity(225U);
    msg.locale.assign("RXJFRJPDMRSQZNSHGGPNUYFKGGIBOUONIHQDOWAJLHTZEXHMLZBILBJNBPAQZWGTQWQFOJVKXGBODZU");
    const char tmp_msg_0[] = {90, -62, 74, 81, -53, -34, 1, 97, 79, 119, -115, 32, 41, -33, -93, -47, 82, 113, -96, -11, 80, -25, 39, -85, -66, 120, 29, 85, 31, 84, 5, -101, 46, -83, 76, -36, -19, 72, 2, 5, 7, 73, 5, 53, 3, 54, -10, -9, 78, 123, -50, -104, 39, 22, -125, 70, 24, -119, 61, -118, 32, 76, -117, 122, 17, 108, -82, 124, 102, -1, 80, 17, 118, 97, 70, -58, 23, -106, 111, -66, -50, 107, -122, 119, -46, 97, -125, 30, -72, -55, -119, 74, 77, -116, 116, -17, -25, -69, 58, -51, -112, 89, 55, 110, 87, 87, 2, 39, -95, 98, -102, 86, -23, -76, -33, 20, 66, -74, -105, -5, -65, -42, 84, -115, -3, -18, -21, 108, 75, 112, 64, -74, 72, 23, 106, -92, -105, 75, 30, -71, -12, -40, -8, -79, -111, -35, -95, -40, -121, -70, 26, 56, -122, 77, 0, 9, 57, 29, 17, -104, 116, -120, -35, -56, -14, -77, -84, 1, -65, -29, 58, -80, 121, 58, 35, 101, -9, 125, 82, 91, 43, 58, 81, 38, -17, -125, 115, 76, -110, -92, 103, -104, -33, 15, -102, -85, -63, -57, -22, -116, -89, 42, -123, 80, 90, 87, 106, 98, 25, 110};
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
    msg.setTimeStamp(0.78791849362);
    msg.setSource(40557U);
    msg.setSourceEntity(160U);
    msg.setDestination(56659U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.0858548319974);
    msg.setSource(32888U);
    msg.setSourceEntity(33U);
    msg.setDestination(62271U);
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
    msg.setTimeStamp(0.102521006978);
    msg.setSource(3764U);
    msg.setSourceEntity(178U);
    msg.setDestination(39471U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.673422443851);
    msg.setSource(46374U);
    msg.setSourceEntity(87U);
    msg.setDestination(36612U);
    msg.setDestinationEntity(165U);
    msg.camid = 136U;
    msg.x = 16785U;
    msg.y = 58630U;

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
    msg.setTimeStamp(0.273104559685);
    msg.setSource(56732U);
    msg.setSourceEntity(188U);
    msg.setDestination(3098U);
    msg.setDestinationEntity(53U);
    msg.camid = 176U;
    msg.x = 54463U;
    msg.y = 35371U;

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
    msg.setTimeStamp(0.692394309316);
    msg.setSource(40642U);
    msg.setSourceEntity(170U);
    msg.setDestination(52824U);
    msg.setDestinationEntity(93U);
    msg.camid = 222U;
    msg.x = 10259U;
    msg.y = 34651U;

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
    msg.setTimeStamp(0.301729876448);
    msg.setSource(20687U);
    msg.setSourceEntity(22U);
    msg.setDestination(54287U);
    msg.setDestinationEntity(135U);
    msg.camid = 76U;
    msg.x = 29207U;
    msg.y = 49223U;

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
    msg.setTimeStamp(0.778066510066);
    msg.setSource(44234U);
    msg.setSourceEntity(1U);
    msg.setDestination(17047U);
    msg.setDestinationEntity(17U);
    msg.camid = 123U;
    msg.x = 2335U;
    msg.y = 45948U;

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
    msg.setTimeStamp(0.853631991044);
    msg.setSource(28716U);
    msg.setSourceEntity(71U);
    msg.setDestination(26495U);
    msg.setDestinationEntity(28U);
    msg.camid = 214U;
    msg.x = 21826U;
    msg.y = 7321U;

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
    msg.setTimeStamp(0.928168893565);
    msg.setSource(46236U);
    msg.setSourceEntity(93U);
    msg.setDestination(23548U);
    msg.setDestinationEntity(203U);
    msg.tracking = 130U;
    msg.lat = 0.889806487359;
    msg.lon = 0.221061234232;
    msg.x = 0.751202945364;
    msg.y = 0.20919694474;
    msg.z = 0.724368712395;

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
    msg.setTimeStamp(0.867629352633);
    msg.setSource(9631U);
    msg.setSourceEntity(51U);
    msg.setDestination(42467U);
    msg.setDestinationEntity(51U);
    msg.tracking = 99U;
    msg.lat = 0.523859602264;
    msg.lon = 0.130923209185;
    msg.x = 0.298999286661;
    msg.y = 0.962079591053;
    msg.z = 0.921191286721;

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
    msg.setTimeStamp(0.875905363754);
    msg.setSource(53015U);
    msg.setSourceEntity(229U);
    msg.setDestination(48456U);
    msg.setDestinationEntity(141U);
    msg.tracking = 143U;
    msg.lat = 0.104217214659;
    msg.lon = 0.354192581167;
    msg.x = 0.485111567211;
    msg.y = 0.356376538609;
    msg.z = 0.193894063799;

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
    msg.setTimeStamp(0.0251175777972);
    msg.setSource(58252U);
    msg.setSourceEntity(162U);
    msg.setDestination(6327U);
    msg.setDestinationEntity(100U);
    msg.target.assign("EIBIAMNAYLKVMNSEDOTLQZUTFUOVFZXSRDWIWRSRAUZVERHPPNOWJIOCEKULTAYFDCMHAXZXIYNMQUCQBFMDDAZVPQFVCYCNDCKQMXBWVSFVQEHZRTOBXJMOJDJAWQGJ");
    msg.lbearing = 0.0313438609053;
    msg.lelevation = 0.622550547256;
    msg.bearing = 0.385401333185;
    msg.elevation = 0.74546479044;
    msg.phi = 0.190200957216;
    msg.theta = 0.923222194313;
    msg.psi = 0.604222102439;
    msg.accuracy = 0.267687107016;

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
    msg.setTimeStamp(0.972654943809);
    msg.setSource(6353U);
    msg.setSourceEntity(235U);
    msg.setDestination(43976U);
    msg.setDestinationEntity(101U);
    msg.target.assign("KIHXIMDKABJPSGQJFIYTKQRVQPRKFLARBKZPIPCWCVXTTWXXBTJCRDOPHVGJNBUSWPZLHJDYVQSHRSSRISNUPMEOJTOGPFKQYSGWVLSMDHZHDJXVBZQZAHRLGECLZFLIKQRMFKYZHOODNAAGDSFRTGLBQUNNAEUOVDUITVBQJYWPLAWGFYACHVEZWEFOBEEMSFBNAAX");
    msg.lbearing = 0.195087559392;
    msg.lelevation = 0.603819126793;
    msg.bearing = 0.129866323481;
    msg.elevation = 0.101888088911;
    msg.phi = 0.525582056802;
    msg.theta = 0.984609491248;
    msg.psi = 0.956411111391;
    msg.accuracy = 0.195855430695;

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
    msg.setTimeStamp(0.794120176834);
    msg.setSource(5870U);
    msg.setSourceEntity(116U);
    msg.setDestination(32655U);
    msg.setDestinationEntity(139U);
    msg.target.assign("YUOJLWMYPASJCVFKERVIMJHDCXEQJUSFALPZYSVXTPSOZKUWOEZMEYGNNLRRMFTUJXBLWWCCIZKBMNHMIHLMDIUPPUFJYTQKQCBAKTRDAIKBEHOVVZGFYVHPZXUZSRWAZBLCKRAGKDQTAIFUOWDJBWIDFQXKBSEGLNNOYSSMVPPDLUSHXNQNVODHBLGLYMQROIQPFGWKJTAGSJEWJXONWXEBOAEQHRYXTRNUDCZXGI");
    msg.lbearing = 0.778008684636;
    msg.lelevation = 0.774424499954;
    msg.bearing = 0.905525157085;
    msg.elevation = 0.73356540297;
    msg.phi = 0.0715077839395;
    msg.theta = 0.337745128596;
    msg.psi = 0.143796199133;
    msg.accuracy = 0.134847625493;

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
    msg.setTimeStamp(0.258350433359);
    msg.setSource(42219U);
    msg.setSourceEntity(180U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(156U);
    msg.target.assign("XUOVQZENHSESDAFYXUZANGCUIBUDGPDOGQBBVWOGBRLPRTJGDZPFYTOQCKMHTMWZSAUAZSTUNLLKYOWCLXVVEHHIYBKMAALRADTKKHXWFGBLRCUHFZJWVFKSSDZIIWKPZRNYKJBEUQGZDFLATHYMXRVKRAPRCMSHCQNDWEJRWIAIOLIQSMJCXXOQPDRLEEYPEWMHWIGTDNGSNCMMCPPQEJVBBY");
    msg.x = 0.0908908860031;
    msg.y = 0.952647358927;
    msg.z = 0.149078110547;
    msg.n = 0.518602151415;
    msg.e = 0.493215390605;
    msg.d = 0.496590402077;
    msg.phi = 0.744751579122;
    msg.theta = 0.187379767985;
    msg.psi = 0.321071655503;
    msg.accuracy = 0.806267916879;

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
    msg.setTimeStamp(0.0253662408814);
    msg.setSource(9129U);
    msg.setSourceEntity(7U);
    msg.setDestination(8007U);
    msg.setDestinationEntity(177U);
    msg.target.assign("RGSLZZMXLOGGXOIQTMIFZORVQOQRMLKSNQDFHISQEWITJABYQUBYSRVUZPTCEKHVNQINCCJJFKNJWAWLJLFBCPYBRZRUFCGPOPYEFPXHEISRNVNXTNF");
    msg.x = 0.413582006454;
    msg.y = 0.423209524801;
    msg.z = 0.410791223044;
    msg.n = 0.779642561302;
    msg.e = 0.442806151284;
    msg.d = 0.688705418842;
    msg.phi = 0.338856586696;
    msg.theta = 0.0938911548764;
    msg.psi = 0.95757354037;
    msg.accuracy = 0.0981910245022;

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
    msg.setTimeStamp(0.0772358857379);
    msg.setSource(40947U);
    msg.setSourceEntity(11U);
    msg.setDestination(39227U);
    msg.setDestinationEntity(244U);
    msg.target.assign("EZURAOQFQUKBANXRDNJPJLOFVS");
    msg.x = 0.904462331716;
    msg.y = 0.840465771667;
    msg.z = 0.329026359216;
    msg.n = 0.331322801513;
    msg.e = 0.465904098073;
    msg.d = 0.142675752345;
    msg.phi = 0.931601101629;
    msg.theta = 0.231939741503;
    msg.psi = 0.640766456927;
    msg.accuracy = 0.931261759039;

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
    msg.setTimeStamp(0.404076846068);
    msg.setSource(49965U);
    msg.setSourceEntity(179U);
    msg.setDestination(46410U);
    msg.setDestinationEntity(253U);
    msg.target.assign("TWCLQAIQATWNMREHJDKDOURIGFNIKNGSUOVQCBEGQBREYDXAFMVSQMIYMKDLNOSSJOZFYYWHXUQOKBCZRNBFXRZVFEQWFPVWHPHTEVGYZKCEEAHXOAZAJWIVDMDZWILMHRXMYMROMJXXRYZLHUNLZHPECTPTUKPNEGRJYCSOSATKLRVOLUGBYDDUBFIVNWLSVPYJDXFXZGNCJUCZKTBOQQPFUHHTJBUVWBJSK");
    msg.lat = 0.948868918945;
    msg.lon = 0.563252116097;
    msg.z_units = 105U;
    msg.z = 0.0272186509683;
    msg.accuracy = 0.224034067461;

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
    msg.setTimeStamp(0.07569579758);
    msg.setSource(42936U);
    msg.setSourceEntity(86U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(252U);
    msg.target.assign("AKOWLFSWRFQNERMUKUAUZIRFRSPWAXKLNXULETAXXLBORZBVGEOLYWZYDXHGHFDYGVQQYISBBDZAPEFXJNKCMVNYHGPOTHMVWEZZYZGKBQWRRVHVGALDLIKAMXBYKEJCDXAUTMGTCXZIUTNVSTOPTAJSTKCUWJRPPYWGQCTCNKICNKVFWNVMSMQQCDFQCOWDREMVYMDLFZJODLTHGPSBSIIHJLHIXB");
    msg.lat = 0.31861854205;
    msg.lon = 0.842845550097;
    msg.z_units = 83U;
    msg.z = 0.644481648077;
    msg.accuracy = 0.466922334005;

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
    msg.setTimeStamp(0.866019221064);
    msg.setSource(29199U);
    msg.setSourceEntity(47U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(149U);
    msg.target.assign("YFLKVEUOPDRAPFGGINYYPICNFIBRWNRUTJHHAMJHITBMXBOAZTHGSZNWACYQLXFISUSCEVQLPLCYEHQGZECSZXRZHBBYHXJNSKNVNIDSEBAQIMWNICJZKLVPTHCHWZVWGTVGKXMOLKQQRUJABI");
    msg.lat = 0.1894586996;
    msg.lon = 0.880242915736;
    msg.z_units = 7U;
    msg.z = 0.508771060977;
    msg.accuracy = 0.854050870639;

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
    msg.setTimeStamp(0.669026277476);
    msg.setSource(29184U);
    msg.setSourceEntity(247U);
    msg.setDestination(27843U);
    msg.setDestinationEntity(145U);
    msg.name.assign("ULCXQIHLKTCDSDGOEOWBTYCRFFWCKOMRLTXSQTJPWMKYJCBUZLNZXVOKJSFXYXDXVKDHFSRNBDZPLJNWFHOYUSLQIBIZNSWHVG");
    msg.lat = 0.119957309594;
    msg.lon = 0.136857229857;
    msg.z = 0.526367071574;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.0292064622136);
    msg.setSource(1028U);
    msg.setSourceEntity(16U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(246U);
    msg.name.assign("VIYNLGGKCJMHBCAYGCKIFZQPNYSCNEJSRQVMJAQZFUWWQZUHXTWEBIPHNRYABHXXYCUZDLCNOKRXJLKROFVDXAITSHTEFARBZSAEFWJRXHKORCPWKGUOORJDXXPFTGOWQSGVWCFJDEINNUQKUZHAKAPQAJGUHDVONTMOIKIVMVSETMQZLTQYWBHPAVCDJBWFSGWLIZLGEYJDCQMKSPTRNIUYMGOZZUBPYTEE");
    msg.lat = 0.869071676294;
    msg.lon = 0.481705892198;
    msg.z = 0.0900389389245;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.275919082635);
    msg.setSource(19214U);
    msg.setSourceEntity(103U);
    msg.setDestination(2012U);
    msg.setDestinationEntity(80U);
    msg.name.assign("SPCEOZCWTLITHUVQOGRATTQZUIEIWGMELDOTSRFKEQPNBXHISSBPPGOBAHJOTQVMN");
    msg.lat = 0.7071174916;
    msg.lon = 0.541411088587;
    msg.z = 0.757247402808;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.812162363233);
    msg.setSource(10170U);
    msg.setSourceEntity(57U);
    msg.setDestination(28490U);
    msg.setDestinationEntity(183U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.7346199764);
    msg.setSource(115U);
    msg.setSourceEntity(164U);
    msg.setDestination(16642U);
    msg.setDestinationEntity(211U);
    msg.op = 207U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("PUHSEKLNLDRMNSUQPEPQHJBSAXGWRCWPNVZOFUPGISTVFMGJYENOVREOQQFALUDDCACEMGZHYMAXNLWCVEXFINTOFJAOMLOGGETRVMMYQTWXAAANKUZDUISGBRUDZICJWYWVXODXPJPFAJKIFTTMHUHFKXDQALCBDZLJKRBDBESYTXNUGPKFPLUOYIVYHBVZRKVCWEJTZCCQITONS");
    tmp_msg_0.lat = 0.0835523989772;
    tmp_msg_0.lon = 0.755561318538;
    tmp_msg_0.z = 0.714778997301;
    tmp_msg_0.z_units = 244U;
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
    msg.setTimeStamp(0.92719690847);
    msg.setSource(9830U);
    msg.setSourceEntity(128U);
    msg.setDestination(14413U);
    msg.setDestinationEntity(171U);
    msg.op = 139U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ICWKVGOZGUMEIDCTOSCTVRGLNCYZLMWFFOQGCDT");
    tmp_msg_0.lat = 0.483220698209;
    tmp_msg_0.lon = 0.967496308459;
    tmp_msg_0.z = 0.0983882339882;
    tmp_msg_0.z_units = 215U;
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
    msg.setTimeStamp(0.243033520668);
    msg.setSource(2255U);
    msg.setSourceEntity(172U);
    msg.setDestination(9097U);
    msg.setDestinationEntity(210U);
    msg.value = 0.4524496476;
    msg.type = 106U;

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
    msg.setTimeStamp(0.627135568744);
    msg.setSource(4050U);
    msg.setSourceEntity(251U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(30U);
    msg.value = 0.80240190041;
    msg.type = 200U;

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
    msg.setTimeStamp(0.0511130687434);
    msg.setSource(42823U);
    msg.setSourceEntity(178U);
    msg.setDestination(51084U);
    msg.setDestinationEntity(101U);
    msg.value = 0.578267953788;
    msg.type = 254U;

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
    msg.setTimeStamp(0.377527741287);
    msg.setSource(5622U);
    msg.setSourceEntity(33U);
    msg.setDestination(48378U);
    msg.setDestinationEntity(221U);
    msg.value = 0.369518253636;

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
    msg.setTimeStamp(0.819332757394);
    msg.setSource(47141U);
    msg.setSourceEntity(152U);
    msg.setDestination(20202U);
    msg.setDestinationEntity(70U);
    msg.value = 0.0710237371091;

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
    msg.setTimeStamp(0.0134882422247);
    msg.setSource(10817U);
    msg.setSourceEntity(240U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(183U);
    msg.value = 0.33877004602;

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
    msg.setTimeStamp(0.409950581844);
    msg.setSource(12646U);
    msg.setSourceEntity(180U);
    msg.setDestination(54631U);
    msg.setDestinationEntity(28U);
    msg.timestamp_last_service = 0.494431836713;
    msg.time_next_service = 0.610547955445;
    msg.time_motor_next_service = 0.445862469649;
    msg.time_idle_ground = 0.785864077295;
    msg.time_idle_air = 0.349184347447;
    msg.time_idle_water = 0.580275988284;
    msg.time_idle_underwater = 0.680473256427;
    msg.time_idle_unknown = 0.386757210152;
    msg.time_motor_ground = 0.797992797619;
    msg.time_motor_air = 0.30957165535;
    msg.time_motor_water = 0.840028227063;
    msg.time_motor_underwater = 0.479668195232;
    msg.time_motor_unknown = 0.274099521694;
    msg.rpm_min = 16232;
    msg.rpm_max = 16711;
    msg.depth_max = 0.229627524125;

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
    msg.setTimeStamp(0.653596082126);
    msg.setSource(16833U);
    msg.setSourceEntity(15U);
    msg.setDestination(2127U);
    msg.setDestinationEntity(21U);
    msg.timestamp_last_service = 0.236704023078;
    msg.time_next_service = 0.707873228274;
    msg.time_motor_next_service = 0.971159002034;
    msg.time_idle_ground = 0.538915814349;
    msg.time_idle_air = 0.678546046714;
    msg.time_idle_water = 0.479888332647;
    msg.time_idle_underwater = 0.164271727601;
    msg.time_idle_unknown = 0.65405308913;
    msg.time_motor_ground = 0.525508360992;
    msg.time_motor_air = 0.703535635109;
    msg.time_motor_water = 0.379237029491;
    msg.time_motor_underwater = 0.925065124157;
    msg.time_motor_unknown = 0.265080722071;
    msg.rpm_min = -27977;
    msg.rpm_max = 5731;
    msg.depth_max = 0.226132131252;

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
    msg.setTimeStamp(0.0538772630536);
    msg.setSource(310U);
    msg.setSourceEntity(200U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(111U);
    msg.timestamp_last_service = 0.101388399396;
    msg.time_next_service = 0.295239956518;
    msg.time_motor_next_service = 0.41002597121;
    msg.time_idle_ground = 0.167938875968;
    msg.time_idle_air = 0.0116157981065;
    msg.time_idle_water = 0.213252389658;
    msg.time_idle_underwater = 0.380018338509;
    msg.time_idle_unknown = 0.16784141464;
    msg.time_motor_ground = 0.709461437646;
    msg.time_motor_air = 0.457839489056;
    msg.time_motor_water = 0.633290533289;
    msg.time_motor_underwater = 0.0150521375298;
    msg.time_motor_unknown = 0.971460988214;
    msg.rpm_min = 20627;
    msg.rpm_max = 3868;
    msg.depth_max = 0.562770284639;

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
    msg.setTimeStamp(0.487481595621);
    msg.setSource(8079U);
    msg.setSourceEntity(150U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(191U);
    msg.severity = 254U;
    msg.text.assign("HVTEMNWSMOVBYUCNGESIVAMSXUBSBLBUFZETKVKKWIAYCRZBAFPDZUOIIOJMYHAGWNFBZUNASDFTWSJUHLNXCYMZXPBRGAKJIQKQORBHCKQGZWETWJKQAILXCMEXNWJVLPCSFSGJVTPPNJPXKIROOLHYHCWPHBTGOFQZ");

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
    msg.setTimeStamp(0.940596796767);
    msg.setSource(25552U);
    msg.setSourceEntity(83U);
    msg.setDestination(44506U);
    msg.setDestinationEntity(1U);
    msg.severity = 85U;
    msg.text.assign("RSLHDBEYNDTRZJNWHTTDIQKZJWZECXSXBEXRXOPUMBOYRYNJIUQGFWNEYTAMIVDMVQFRYOPOWHPSUIO");

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
    msg.setTimeStamp(0.78350171398);
    msg.setSource(45804U);
    msg.setSourceEntity(238U);
    msg.setDestination(49419U);
    msg.setDestinationEntity(123U);
    msg.severity = 135U;
    msg.text.assign("ZDUYAUMRCSICJFZTLRZPFYDWIOJQJOWHOCWJUXDSQJSVSQZCCHLRMPTOCLGCAEBEKGXFAPJHVXJPEMTUHXVDQRGEMTQGOOYFMDKLVZVNINTTCWMIHSYFVGKLEJHRXXONMABUULWXY");

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
    msg.setTimeStamp(0.762033317239);
    msg.setSource(1506U);
    msg.setSourceEntity(21U);
    msg.setDestination(30519U);
    msg.setDestinationEntity(85U);
    msg.channel = 8;
    msg.value = -253839461;
    msg.gain = 252U;

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
    msg.setTimeStamp(0.210694146656);
    msg.setSource(52202U);
    msg.setSourceEntity(6U);
    msg.setDestination(40283U);
    msg.setDestinationEntity(24U);
    msg.channel = -25;
    msg.value = 1179416842;
    msg.gain = 44U;

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
    msg.setTimeStamp(0.582648810288);
    msg.setSource(17741U);
    msg.setSourceEntity(96U);
    msg.setDestination(56910U);
    msg.setDestinationEntity(177U);
    msg.channel = 28;
    msg.value = 1643797249;
    msg.gain = 136U;

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
    msg.setTimeStamp(0.0589783620477);
    msg.setSource(22665U);
    msg.setSourceEntity(26U);
    msg.setDestination(34994U);
    msg.setDestinationEntity(162U);
    msg.ch01 = 0.21720569092;
    msg.ch02 = 0.551448457175;
    msg.ch03 = 0.00235454874146;
    msg.ch04 = 0.466012123567;
    msg.ch05 = 0.486597966485;
    msg.ch06 = 0.975765550376;
    msg.ch07 = 0.355946129082;
    msg.ch08 = 0.390860913781;
    msg.ch09 = 0.568400169205;
    msg.ch10 = 0.381439611581;
    msg.ch11 = 0.401512169647;
    msg.ch12 = 0.318639955663;
    msg.ch13 = 0.23735758779;
    msg.ch14 = 0.517021507255;
    msg.ch15 = 0.0525192433507;
    msg.ch16 = 0.106102842602;

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
    msg.setTimeStamp(0.0814174397633);
    msg.setSource(35121U);
    msg.setSourceEntity(54U);
    msg.setDestination(23734U);
    msg.setDestinationEntity(12U);
    msg.ch01 = 0.00753198305738;
    msg.ch02 = 0.324890943464;
    msg.ch03 = 0.999991210048;
    msg.ch04 = 0.022105237634;
    msg.ch05 = 0.0296783187325;
    msg.ch06 = 0.198568162376;
    msg.ch07 = 0.63167120107;
    msg.ch08 = 0.265095108245;
    msg.ch09 = 0.489094516496;
    msg.ch10 = 0.419896492188;
    msg.ch11 = 0.717205496;
    msg.ch12 = 0.660560499177;
    msg.ch13 = 0.260467175469;
    msg.ch14 = 0.909470813838;
    msg.ch15 = 0.67596436789;
    msg.ch16 = 0.961188265024;

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
    msg.setTimeStamp(0.288728451371);
    msg.setSource(22620U);
    msg.setSourceEntity(117U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(253U);
    msg.ch01 = 0.21215554152;
    msg.ch02 = 0.410934007972;
    msg.ch03 = 0.599003908873;
    msg.ch04 = 0.695868828224;
    msg.ch05 = 0.726203388356;
    msg.ch06 = 0.480639118844;
    msg.ch07 = 0.297972612329;
    msg.ch08 = 0.664392465929;
    msg.ch09 = 0.263261040249;
    msg.ch10 = 0.92574493719;
    msg.ch11 = 0.331920988114;
    msg.ch12 = 0.132804546325;
    msg.ch13 = 0.438473324724;
    msg.ch14 = 0.851974330759;
    msg.ch15 = 0.731948891279;
    msg.ch16 = 0.218427124921;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.205858008415);
    msg.setSource(23508U);
    msg.setSourceEntity(124U);
    msg.setDestination(18227U);
    msg.setDestinationEntity(237U);
    msg.value = 0.150137909409;

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
    msg.setTimeStamp(0.517949985281);
    msg.setSource(25156U);
    msg.setSourceEntity(56U);
    msg.setDestination(13295U);
    msg.setDestinationEntity(158U);
    msg.value = 0.121953744959;

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
    msg.setTimeStamp(0.864573032858);
    msg.setSource(40186U);
    msg.setSourceEntity(131U);
    msg.setDestination(28871U);
    msg.setDestinationEntity(18U);
    msg.value = 0.871338793821;

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
    IMC::HomePosition msg;
    msg.setTimeStamp(0.400917467271);
    msg.setSource(13308U);
    msg.setSourceEntity(223U);
    msg.setDestination(46184U);
    msg.setDestinationEntity(35U);
    msg.op = 239U;
    msg.lat = 0.992309245528;
    msg.lon = 0.805288842816;
    msg.height = 0.503921295093;
    msg.depth = 0.134216310486;
    msg.alt = 0.794286097325;

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
    msg.setTimeStamp(0.12351844578);
    msg.setSource(17610U);
    msg.setSourceEntity(153U);
    msg.setDestination(20385U);
    msg.setDestinationEntity(217U);
    msg.op = 224U;
    msg.lat = 0.86359824891;
    msg.lon = 0.695877950696;
    msg.height = 0.778017074329;
    msg.depth = 0.290349428937;
    msg.alt = 0.989848600349;

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
    msg.setTimeStamp(0.300878372745);
    msg.setSource(64898U);
    msg.setSourceEntity(128U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(227U);
    msg.op = 7U;
    msg.lat = 0.315080480566;
    msg.lon = 0.572221577338;
    msg.height = 0.604125827578;
    msg.depth = 0.194026012252;
    msg.alt = 0.841807379304;

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

  return test.getReturnValue();
}
