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
// IMC XML MD5: 41c2e87a93d3d410b922c728d4f438dc                            *
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
    msg.setTimeStamp(0.36335065825455237);
    msg.setSource(29500U);
    msg.setSourceEntity(233U);
    msg.setDestination(20919U);
    msg.setDestinationEntity(113U);
    msg.state = 167U;
    msg.flags = 26U;
    msg.description.assign("ZKXYPPRQJXCFWJSGLWNRQPYOHUZXFWSMBNJRURWGBDYUJFRAM");

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
    msg.setTimeStamp(0.09207659710612803);
    msg.setSource(32344U);
    msg.setSourceEntity(208U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(241U);
    msg.state = 238U;
    msg.flags = 105U;
    msg.description.assign("NHMGPROZLDFMIRTEBORDCNCSETTXEQTSJDIQJWRAPUBQDF");

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
    msg.setTimeStamp(0.595730113136872);
    msg.setSource(58031U);
    msg.setSourceEntity(172U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(177U);
    msg.state = 66U;
    msg.flags = 99U;
    msg.description.assign("KNXZNJLPWFIYVMVPVJUBDAYPSSAFTTEISVJSTYBVKZGBQRBGKBCTKVRNQMCASUOHCJDWPRHYGWMNWPELBPZUOFOTAIYDMPCHDRSIEGUCEESIMRVCSWPFGZHFJNCGDHJJENZBKQFATTJMFLXUKAGLCBHPMWHGIJFQZDXSLILNOOBQICDKWAMVQECXRYYOQMJVQOULPSEVHQEKXZUTBOIRWQGDOIXFUMHHNZXUZFYWZR");

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
    msg.setTimeStamp(0.9284127343774268);
    msg.setSource(24444U);
    msg.setSourceEntity(253U);
    msg.setDestination(34881U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.12615398973763026);
    msg.setSource(5073U);
    msg.setSourceEntity(83U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.4911658189007687);
    msg.setSource(23727U);
    msg.setSourceEntity(167U);
    msg.setDestination(14899U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.22970080298357953);
    msg.setSource(15086U);
    msg.setSourceEntity(197U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(91U);
    msg.id = 27U;
    msg.label.assign("RGAUUVHPGTBBXKSCIYINCRDXGQZDMAIYTKVKRXTDKULOYWJALSXAMOTUROYLCKXMVLBFSMOBROPZHNBDCAPQSRBQTMEHFJLPIHLNWLPFEBZQYBHUQKIFFXMYJAGQNOVIMQHLTTUHVJKOEAAIDDLEXCNGEUIFFRQZFTIUZDRYZXWEMEZXOJOMKPWKZCQFCWJSSWENWCPOWAENHPVDZTSJSGQBBXGUUMYNZHJWCJTPHREGLDPVVJDGFRYYCAISV");
    msg.component.assign("RTMQCVYGBPMYEUALCJJVKLXCAFIQPNSMWYDBCISNGOMVKGZPLAZEZCNFZUDXBFZQEAIPOYTJIMDRVSDMNUWSUPDQNWXHXVTOXAOKRABUSXRDCGRHHFMTTKUGO");
    msg.act_time = 41136U;
    msg.deact_time = 6002U;

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
    msg.setTimeStamp(0.17013329525968524);
    msg.setSource(57655U);
    msg.setSourceEntity(53U);
    msg.setDestination(47040U);
    msg.setDestinationEntity(65U);
    msg.id = 134U;
    msg.label.assign("HENKPCPNWBDZKZKFZEOMOOLUZFBQVWFUOLFJSSKINYWYKRCWGPGPDFJDIHAGIAUMPVAAGMIJHWVNLXUUHSV");
    msg.component.assign("LIPSOJFGKYEBBGQTVVUVPKMWWMQHZHDJRBRZFOVIYSFFUKRHCPTJZBMPZDATKKPUUJCKMFPGKSDNBIHRBMRLHCBPTHYXYTDNKVCWEJXSDZRZSLEXJQQFTCBPWIOGGXQWZIOFEAUFLWLJRLH");
    msg.act_time = 14816U;
    msg.deact_time = 33850U;

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
    msg.setTimeStamp(0.03208360769318319);
    msg.setSource(60567U);
    msg.setSourceEntity(92U);
    msg.setDestination(27092U);
    msg.setDestinationEntity(190U);
    msg.id = 247U;
    msg.label.assign("QFOIADNQYFDZNKNFHCADSKAROMTKIVHTFJMHUEDBVDFSBTOMLGQYYZTJSZTEZRLWGE");
    msg.component.assign("ZWNYOTFKUQDMQKPMXACZJTKMOAUURACPHOTUWMEBEKGNFWLVZZJONUAWALWRYDEIXYCMDLPCBEHGFHGIVHPCZQDXZVHYRA");
    msg.act_time = 58089U;
    msg.deact_time = 10765U;

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
    msg.setTimeStamp(0.571597707034328);
    msg.setSource(23477U);
    msg.setSourceEntity(70U);
    msg.setDestination(2303U);
    msg.setDestinationEntity(240U);
    msg.id = 114U;

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
    msg.setTimeStamp(0.4239870288146036);
    msg.setSource(30420U);
    msg.setSourceEntity(70U);
    msg.setDestination(43100U);
    msg.setDestinationEntity(46U);
    msg.id = 4U;

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
    msg.setTimeStamp(0.9833361368064595);
    msg.setSource(52930U);
    msg.setSourceEntity(212U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(129U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.07490501204261246);
    msg.setSource(44208U);
    msg.setSourceEntity(42U);
    msg.setDestination(24894U);
    msg.setDestinationEntity(213U);
    msg.op = 2U;
    msg.list.assign("QRVPFJXFMABNBCCRCIZMYKWTCBOHDFZXYDDBVBHQKVXMDNQIAIXVQEHZVPXFJWNYOZHWCU");

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
    msg.setTimeStamp(0.1708285585539454);
    msg.setSource(52213U);
    msg.setSourceEntity(165U);
    msg.setDestination(7438U);
    msg.setDestinationEntity(174U);
    msg.op = 74U;
    msg.list.assign("VQRFQKTCQGGZDUXLKAESYZNELZUZSHGUQYXBANAWYOAUYJGLDXEBEIAWWCDLOPTKBHXPMUTNKHVLHROYQJPKVVXKWIFPNZTDFSMARVCYBZMRMHJCGPUVTGECTFDESTEIIFQMWLLPOPITNOYRJNUFRMCYSLHOUDSVDJRVAPHJYQQUDPPBWJZ");

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
    msg.setTimeStamp(0.46379942390548723);
    msg.setSource(581U);
    msg.setSourceEntity(129U);
    msg.setDestination(24810U);
    msg.setDestinationEntity(23U);
    msg.op = 135U;
    msg.list.assign("IHULPYNBTGPPDYSIKPCMOENAMNVKQYEHFHZDSQQNYDUVFBYCSESNJZFTRPGSKJSCPMADJAARTTLDXFYUTQJMABJTPXOBRKNFGXIYOEVDRXMTFCWOIQLUHGKMQRJMCVCMEAFK");

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
    msg.setTimeStamp(0.6415977756379577);
    msg.setSource(17473U);
    msg.setSourceEntity(230U);
    msg.setDestination(50919U);
    msg.setDestinationEntity(52U);
    msg.value = 74U;

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
    msg.setTimeStamp(0.9109501966830972);
    msg.setSource(29752U);
    msg.setSourceEntity(7U);
    msg.setDestination(52229U);
    msg.setDestinationEntity(147U);
    msg.value = 86U;

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
    msg.setTimeStamp(0.9018332376891625);
    msg.setSource(13720U);
    msg.setSourceEntity(24U);
    msg.setDestination(2070U);
    msg.setDestinationEntity(70U);
    msg.value = 198U;

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
    msg.setTimeStamp(0.6248030883360923);
    msg.setSource(30431U);
    msg.setSourceEntity(217U);
    msg.setDestination(48988U);
    msg.setDestinationEntity(220U);
    msg.consumer.assign("FEQNTGHWMKEJLHUTR");
    msg.message_id = 52344U;

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
    msg.setTimeStamp(0.2684462924385925);
    msg.setSource(12324U);
    msg.setSourceEntity(90U);
    msg.setDestination(52545U);
    msg.setDestinationEntity(183U);
    msg.consumer.assign("DBGQVGKFRCYHBECSNOZHBELLLZZYTHCFMPXABHQFOIZDPNIEVIJOVSIHQEYLHXAOGVKBFEUCKPWZKYKGSYRIVEBDUKTPZAPGXAPPGYXKDMNRDWEXRMFKXNUIBNJAEKTJLSUHTTLUOWVFRWMVJH");
    msg.message_id = 22150U;

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
    msg.setTimeStamp(0.9479372746907162);
    msg.setSource(9819U);
    msg.setSourceEntity(35U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(11U);
    msg.consumer.assign("SMDZYNSSTZACJQOWHNFCRDTNAGKCJBUCKZQXWWZMEWCQSARLRLCQDWXBIVOETZPVLTCBCUGQRLPXHUNKYGBFSNUVGUGSQIVDUIQVPHNYTIMYRZGJLMHIJGIEKCAKDZXNXHOMEOTWDFZEBIFR");
    msg.message_id = 51379U;

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
    msg.setTimeStamp(0.8487908430516907);
    msg.setSource(36324U);
    msg.setSourceEntity(41U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.813015794046495);
    msg.setSource(49743U);
    msg.setSourceEntity(157U);
    msg.setDestination(55032U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.8701509525837522);
    msg.setSource(29579U);
    msg.setSourceEntity(98U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.8787368094191548);
    msg.setSource(42992U);
    msg.setSourceEntity(43U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(100U);
    msg.op = 169U;

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
    msg.setTimeStamp(0.21434232959428934);
    msg.setSource(8719U);
    msg.setSourceEntity(176U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(95U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.10190321568262195);
    msg.setSource(34775U);
    msg.setSourceEntity(222U);
    msg.setDestination(38146U);
    msg.setDestinationEntity(236U);
    msg.op = 70U;

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
    msg.setTimeStamp(0.9715044763141396);
    msg.setSource(12173U);
    msg.setSourceEntity(234U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 200U;
    msg.step_number = 226U;
    msg.step.assign("MEVVYEBRVKHUCKDKDROEHZGUFUYPROTMBWPIZSHFWGFEONGYKHFLCIIUXWTGHWCJLBXGCDQLHTBBYYQFMCJRNSXHJTVXI");
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
    msg.setTimeStamp(0.9656619194507003);
    msg.setSource(51765U);
    msg.setSourceEntity(108U);
    msg.setDestination(58251U);
    msg.setDestinationEntity(9U);
    msg.total_steps = 27U;
    msg.step_number = 44U;
    msg.step.assign("ZGMCDMYKAKEYOVKEYQHUJHNBBKQRRISFGJCQUJFCXOJYJNFIKSUQIVWAGRVWWGCSPZLPXVYJMIWPTBZOQCGZJLMHLXVKODKZNYXSANEAANPRVZSDCKNNUALESHZIBPMNTQLGRZHUMHPYFTAXDELYWBOYCZEOJGXJVFNPTOSFDAKJMRFLHIHBRAUTQDUWGIKBCTGQTDVQLXMUCUPXIOEFEWWIVGXYNTBLFBSBRQ");
    msg.flags = 189U;

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
    msg.setTimeStamp(0.7448987140249264);
    msg.setSource(19482U);
    msg.setSourceEntity(82U);
    msg.setDestination(30882U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 215U;
    msg.step_number = 237U;
    msg.step.assign("VZOCAFFZPWGKPCL");
    msg.flags = 116U;

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
    msg.setTimeStamp(0.7215266397364082);
    msg.setSource(17329U);
    msg.setSourceEntity(134U);
    msg.setDestination(15384U);
    msg.setDestinationEntity(194U);
    msg.state = 5U;
    msg.error.assign("KPRTTMOVYKSCHTOOUBAOKSLGEJKTVAHUNNPBCEBQACQWTHDCPNDLGYYSWUXIVFBZNMRXQGJFDKZGRJHBEHIINDEMRNIPRXCZSKEAJFRVADEOPIPIZQOSZY");

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
    msg.setTimeStamp(0.4394996285591338);
    msg.setSource(57131U);
    msg.setSourceEntity(230U);
    msg.setDestination(21079U);
    msg.setDestinationEntity(144U);
    msg.state = 19U;
    msg.error.assign("NFMHQZIGXCUXCJOCBXUNZBJCKJNHNDFUIRQXJXAAROANAZQHKFOJLYYTDRUTDRZFRLHCAXWNRH");

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
    msg.setTimeStamp(0.1389390488580985);
    msg.setSource(27498U);
    msg.setSourceEntity(174U);
    msg.setDestination(41567U);
    msg.setDestinationEntity(61U);
    msg.state = 230U;
    msg.error.assign("YRJOIODOQLTRKTZZARNZVNUVGKQDNEICNDPSGPSPCEHIYUYFPSUEGJVLINKSZHHGXJMVBIDABYNAK");

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
    msg.setTimeStamp(0.7549186768197796);
    msg.setSource(22258U);
    msg.setSourceEntity(136U);
    msg.setDestination(27779U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.025746010812510822);
    msg.setSource(4116U);
    msg.setSourceEntity(226U);
    msg.setDestination(13698U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.7127478944225291);
    msg.setSource(44125U);
    msg.setSourceEntity(198U);
    msg.setDestination(42456U);
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
    msg.setTimeStamp(0.604379083441104);
    msg.setSource(19829U);
    msg.setSourceEntity(71U);
    msg.setDestination(19724U);
    msg.setDestinationEntity(234U);
    msg.op = 244U;
    msg.speed_min = 0.24673554243212348;
    msg.speed_max = 0.9300763506497051;
    msg.long_accel = 0.366190217336394;
    msg.alt_max_msl = 0.3149788971041291;
    msg.dive_fraction_max = 0.7329041501938217;
    msg.climb_fraction_max = 0.15443022801225048;
    msg.bank_max = 0.9741676741569079;
    msg.p_max = 0.37085939784938937;
    msg.pitch_min = 0.2398268345223753;
    msg.pitch_max = 0.17602442440000254;
    msg.q_max = 0.5836609779036752;
    msg.g_min = 0.6680505273285199;
    msg.g_max = 0.6586974974687188;
    msg.g_lat_max = 0.7815923341665331;
    msg.rpm_min = 0.6493626426985183;
    msg.rpm_max = 0.16016177092335682;
    msg.rpm_rate_max = 0.05553737998528063;

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
    msg.setTimeStamp(0.25729741423193797);
    msg.setSource(17910U);
    msg.setSourceEntity(20U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(9U);
    msg.op = 219U;
    msg.speed_min = 0.8679847891969488;
    msg.speed_max = 0.24593521138231356;
    msg.long_accel = 0.09781332329309522;
    msg.alt_max_msl = 0.4518098279427387;
    msg.dive_fraction_max = 0.4492030490779124;
    msg.climb_fraction_max = 0.5749154968916793;
    msg.bank_max = 0.8839696988536258;
    msg.p_max = 0.6841699034435633;
    msg.pitch_min = 0.18462130282534284;
    msg.pitch_max = 0.4771577214556958;
    msg.q_max = 0.8611355298601466;
    msg.g_min = 0.3545471389118061;
    msg.g_max = 0.5872268004286689;
    msg.g_lat_max = 0.7801088088972998;
    msg.rpm_min = 0.22251472592242938;
    msg.rpm_max = 0.17181413247474142;
    msg.rpm_rate_max = 0.8094961028124067;

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
    msg.setTimeStamp(0.8278225075519076);
    msg.setSource(55033U);
    msg.setSourceEntity(244U);
    msg.setDestination(36458U);
    msg.setDestinationEntity(4U);
    msg.op = 179U;
    msg.speed_min = 0.20731731698131795;
    msg.speed_max = 0.04928133639204657;
    msg.long_accel = 0.37767282518597256;
    msg.alt_max_msl = 0.2572287670487816;
    msg.dive_fraction_max = 0.6278465386477778;
    msg.climb_fraction_max = 0.7129449548164134;
    msg.bank_max = 0.3498323509433975;
    msg.p_max = 0.8528966692410384;
    msg.pitch_min = 0.16012385186565292;
    msg.pitch_max = 0.15954866863913708;
    msg.q_max = 0.22227581668709462;
    msg.g_min = 0.5887598450761456;
    msg.g_max = 0.665770402134013;
    msg.g_lat_max = 0.6230314884554489;
    msg.rpm_min = 0.6125438311241798;
    msg.rpm_max = 0.5180024523500691;
    msg.rpm_rate_max = 0.17435085283480733;

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
    msg.setTimeStamp(0.6868967775817398);
    msg.setSource(17792U);
    msg.setSourceEntity(180U);
    msg.setDestination(65456U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.895250255599457);
    msg.setSource(8244U);
    msg.setSourceEntity(194U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.9401841446332225);
    msg.setSource(46787U);
    msg.setSourceEntity(19U);
    msg.setDestination(19229U);
    msg.setDestinationEntity(163U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 2375411207U;
    tmp_msg_0.start_lat = 0.6107552282984302;
    tmp_msg_0.start_lon = 0.5413461687554517;
    tmp_msg_0.start_z = 0.4998109676719894;
    tmp_msg_0.start_z_units = 36U;
    tmp_msg_0.end_lat = 0.9968760902379951;
    tmp_msg_0.end_lon = 0.28222122134724004;
    tmp_msg_0.end_z = 0.46705590626996774;
    tmp_msg_0.end_z_units = 17U;
    tmp_msg_0.speed = 0.9219814668553039;
    tmp_msg_0.speed_units = 93U;
    tmp_msg_0.lradius = 0.2836351488797634;
    tmp_msg_0.flags = 88U;
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
    msg.setTimeStamp(0.8274162558995823);
    msg.setSource(11866U);
    msg.setSourceEntity(252U);
    msg.setDestination(48992U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.7867588699737574;
    msg.lon = 0.5029234622479695;
    msg.height = 0.2158028161533333;
    msg.x = 0.5486659290559834;
    msg.y = 0.7426697784612821;
    msg.z = 0.76351502004377;
    msg.phi = 0.9577104741836852;
    msg.theta = 0.07590954370587477;
    msg.psi = 0.07873068098419223;
    msg.u = 0.6019377182432152;
    msg.v = 0.8455068327306997;
    msg.w = 0.4002207206134779;
    msg.p = 0.30961250322156153;
    msg.q = 0.09990652817993728;
    msg.r = 0.20475455434210366;
    msg.svx = 0.3129588034219529;
    msg.svy = 0.2115849068878588;
    msg.svz = 0.5061219743611589;

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
    msg.setTimeStamp(0.789343258231153);
    msg.setSource(47024U);
    msg.setSourceEntity(34U);
    msg.setDestination(53029U);
    msg.setDestinationEntity(153U);
    msg.lat = 0.1262786805820968;
    msg.lon = 0.3452983061790611;
    msg.height = 0.11060889337707602;
    msg.x = 0.35849719472265384;
    msg.y = 0.5796445318886483;
    msg.z = 0.5678991597022223;
    msg.phi = 0.6787906836728306;
    msg.theta = 0.6231398818533038;
    msg.psi = 0.1254850192066681;
    msg.u = 0.035249190920917384;
    msg.v = 0.5880031139831793;
    msg.w = 0.23390862586226702;
    msg.p = 0.6226039088026629;
    msg.q = 0.5945394532988791;
    msg.r = 0.021749951023856795;
    msg.svx = 0.8108070594823297;
    msg.svy = 0.9376937043581233;
    msg.svz = 0.03710508556734138;

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
    msg.setTimeStamp(0.9821427192199267);
    msg.setSource(46767U);
    msg.setSourceEntity(121U);
    msg.setDestination(33082U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.3763001644469738;
    msg.lon = 0.8465915552176061;
    msg.height = 0.9933151662900382;
    msg.x = 0.7055388452162579;
    msg.y = 0.9183106103484667;
    msg.z = 0.339201705119514;
    msg.phi = 0.335840192117683;
    msg.theta = 0.27817296506260547;
    msg.psi = 0.16117513848567155;
    msg.u = 0.16390814522315944;
    msg.v = 0.6332834922533895;
    msg.w = 0.8447683606516059;
    msg.p = 0.22070035036028302;
    msg.q = 0.7342821665926512;
    msg.r = 0.8059662680975999;
    msg.svx = 0.38131197803751826;
    msg.svy = 0.3232242840959353;
    msg.svz = 0.8528535224758725;

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
    msg.setTimeStamp(0.6632869647237412);
    msg.setSource(6219U);
    msg.setSourceEntity(104U);
    msg.setDestination(50756U);
    msg.setDestinationEntity(200U);
    msg.op = 8U;
    msg.entities.assign("YMZCRKMWKYNLRKXENVOSVMWCXERPJGFNFOGFYAIHFLIZVNADDBYSQOQRIRYQAPRBHBAMFNKDCPFSJZBLUOLIKCTIUJWNVCBQEKUMMOITBYTDC");

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
    msg.setTimeStamp(0.40907426283187187);
    msg.setSource(53760U);
    msg.setSourceEntity(133U);
    msg.setDestination(55334U);
    msg.setDestinationEntity(41U);
    msg.op = 223U;
    msg.entities.assign("KJKDGCYZZDVOSIEGNKBQEWPFLCWZYGBRFSUKKSLWJVICCBMRFNMNPINIWAGUSHPVUYXJDUUYIAETCANKMDLOQDUZQXAWSDINPBYQPLKJWWALFXYCMIVHPNGKCBMSGPHCWBIDHBPXNHVBVHTOLUTEMSVFOOEFBYDORCXPXMIESHXOAXJEYQRTKWBHLRMMLNDREJOGFTLLRYURFZ");

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
    msg.setTimeStamp(0.9620862938981494);
    msg.setSource(55306U);
    msg.setSourceEntity(162U);
    msg.setDestination(38453U);
    msg.setDestinationEntity(76U);
    msg.op = 113U;
    msg.entities.assign("QJHCCTXCNANNQYKSFLXUDSHVBSHIPVPUS");

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
    msg.setTimeStamp(0.23955337406798083);
    msg.setSource(22694U);
    msg.setSourceEntity(251U);
    msg.setDestination(7646U);
    msg.setDestinationEntity(138U);
    msg.type = 122U;
    msg.speed = 2739U;
    const char tmp_msg_0[] = {15, -52, 59, 10, -111, 43, -57, 45, 26, -89, 16, -73, 118, 34, 52, -3, 26, -54, -110, -42, 46, -69, 32, 83, 26, -23, 84, 85, -32, -58, 120, 6, 119, 19, -117, -88, 97, 83, 99, -61, 48, -116, 117, 5, 44, 83, 122, -101, -54, -5, -41, -41, -26, 35, -17, -57, 108, 27, -65, -29, -17, -44, -23, 62, -36, 71, -72, -114, 9, 56, 17, -81, -112, -22, -60, 10, 113, 13, -95, -70, 66, 56, -103, 124, -17, -127, -33, -113, 70, -18, -68, -43, 110, 119, -24, -110, -107, 122, -59, -122, -3, -36, 21, 35, -55, -77, 20, 50, 117, -113, 70, 106, -104, -108, 47, 3, 109, -7, 32, 74, 125, -112, -57, -2, 26, -109, 53, -102, -2, -31, -43, -106, -79, -77, 53, 123, -123, -109, 52, -10, -54, 78, -100, -112, -84, -123, -91, -83, 69, -75, 85, 56, 41, 71, 114, -4, 68, 103, 14, -109, -124, 38, -45, -75, 101, -127, -74, -1, -97, 100, 11, 95, -122, -109, -70, -127, -66, -74, 112, -116, 70, 55, -121, -67, 71, -70, 52, 18, 24, 36, 44, 61, 50, 52, 82, -114, 102, -86, 126, -57, 87, -25, 86, -111, 118, -83, 42, 102, 62, -75, -46, -40, 52, -9, -106, 7, -61, 10, -1, -59, 7, 91, 109, 9, -64, 55, 3, 9, 42, 45, 103, -37, -18, -34, 24, -64, 27, -52, -88, 9, -24, -19, -103, -96};
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
    msg.setTimeStamp(0.9258996458303833);
    msg.setSource(7119U);
    msg.setSourceEntity(94U);
    msg.setDestination(55952U);
    msg.setDestinationEntity(196U);
    msg.type = 49U;
    msg.speed = 53108U;
    const char tmp_msg_0[] = {-73, 76, -12, 27, 12, -42, -117, 4, -5, 54, -120, -46, -112, -102, 28, 9, -5, -74, -93, 22, -31, 43, 83, -70, -114, 4, 125, 108, -79, 13, -69, 32, -59, 25, 99, 89, 70, 107, -127, -4, -102, 63, 2, 124, 22, -28, -4, 58, -106, -102, -90, -126, -86, -118, -96, 57, -111, -106, 113, 38, -93, 52, -48, -17, -7, 98, 9, 69, 89, -7, -81, -49, 53, 6, -10, 76, -119, 35, -103, -65};
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
    msg.setTimeStamp(0.7893184828136522);
    msg.setSource(63126U);
    msg.setSourceEntity(60U);
    msg.setDestination(44071U);
    msg.setDestinationEntity(52U);
    msg.type = 31U;
    msg.speed = 25890U;
    const char tmp_msg_0[] = {-72, 45, -64, 47, -80, -38, 51, -66, -3, -9, 18, -78, -70, 119, -31, -88, -78, 68, 112, 21, -84, 19, -117, 52, -85, -106, -117, -125, -2, 37, 0, 37, -44, 89, -85, -8, 64, 30, -6, -79, 39, -108, 0, -97, 64, -90, 59, 91, 59, 13, 87, 70, -29, -70, -74, 46, 56, -103, -12, -11, -74, -36, -44, 53, -18, -97, -12, -87, 122, -12, 125, 126, 121, -45, -110};
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
    msg.setTimeStamp(0.3153486933128493);
    msg.setSource(46487U);
    msg.setSourceEntity(215U);
    msg.setDestination(53130U);
    msg.setDestinationEntity(175U);
    msg.op = 107U;
    msg.tas2acc_pgain = 0.5720995440404102;
    msg.bank2p_pgain = 0.8864072128578953;

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
    msg.setTimeStamp(0.051413396210919005);
    msg.setSource(27683U);
    msg.setSourceEntity(120U);
    msg.setDestination(23541U);
    msg.setDestinationEntity(146U);
    msg.op = 98U;
    msg.tas2acc_pgain = 0.11121419486592521;
    msg.bank2p_pgain = 0.04400570663944414;

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
    msg.setTimeStamp(0.2361219288962223);
    msg.setSource(13137U);
    msg.setSourceEntity(242U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(212U);
    msg.op = 131U;
    msg.tas2acc_pgain = 0.14985723838620213;
    msg.bank2p_pgain = 0.9069474134137269;

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
    msg.setTimeStamp(0.8278948969033051);
    msg.setSource(2596U);
    msg.setSourceEntity(96U);
    msg.setDestination(24679U);
    msg.setDestinationEntity(234U);
    msg.available = 1517601653U;
    msg.value = 20U;

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
    msg.setTimeStamp(0.3091148177775781);
    msg.setSource(29783U);
    msg.setSourceEntity(72U);
    msg.setDestination(648U);
    msg.setDestinationEntity(212U);
    msg.available = 3007892227U;
    msg.value = 67U;

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
    msg.setTimeStamp(0.4190214280914022);
    msg.setSource(13497U);
    msg.setSourceEntity(35U);
    msg.setDestination(5263U);
    msg.setDestinationEntity(61U);
    msg.available = 4130671054U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.6053943663764201);
    msg.setSource(15097U);
    msg.setSourceEntity(92U);
    msg.setDestination(35402U);
    msg.setDestinationEntity(158U);
    msg.op = 117U;
    msg.snapshot.assign("TGFHFFHOEVPUJPQWJODBGHCJLBFYZOBQWSTNYFMXCPSADZIHDPSKUHSMSZTRQIZHLJIVNVXUWBXGUJYGVJEWRUOVDASOQRDVBMXCLWHFYXMZUKSZLPNILSDVCLEVMROSTRMKFQDWATCHTKAQLJUOLGBIICTRXQCEPVGCPJLVTEOIDUNUGPBAABRZPENYNNSNJRQBKWROEFCTNZXFAAIMRIKEYYGAWELMATPENCZDUKWJXMBGMOHYXIQDZ");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.5822751447423361;
    tmp_msg_0.confidence = 0.2167847803808607;
    tmp_msg_0.opmodes.assign("QZOJYAVMDNGNDYIKMFHJRMH");
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
    msg.setTimeStamp(0.21429883142219353);
    msg.setSource(52408U);
    msg.setSourceEntity(109U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(180U);
    msg.op = 197U;
    msg.snapshot.assign("CFUENEZWBYSCBRBHWOGJMEFZFDQQMKXQNKLNRIYSAEOURMCBUASDHGSHDXPAELMMVFXOYVSJCTIDOMPFVZTSXQYPFYNKQWLCWGIZVEJIHJOBKALMDTGOTLZVCHNWKKQTTUESFPKXUSWHEJGJZTHXBTKAOJNVGNBYZMPPDZAPGVJIZPDLNNRYXXVMCFPKYBXR");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("ZUFROLKJUENOLERWZIOMTWFGPTGZBJJPRAQQWCGKXSUWDSOAQNIYBGWSICKSVDIPANOIVPCVXKVHXACZZDQQLFMVXSHXWBBDKMPIAXFOUCKFCENBEYRALWMYZYHLRKMMMONQIDUTMPAIFJSDYHODSPNUFJUMBAMEGZJRLEFKRHKNBPWRSZGQITPJESVCLYHYDVHCNW");
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
    msg.setTimeStamp(0.3877854186004016);
    msg.setSource(5288U);
    msg.setSourceEntity(82U);
    msg.setDestination(51417U);
    msg.setDestinationEntity(214U);
    msg.op = 27U;
    msg.snapshot.assign("JKJWYZFJWSMCKXHYWLANXGEGKRYOPCZGCMDVVPRJQVCKFLJLFBAMVWUKCATOZIJTMWYOXUNGLLPXKJERWTUVZ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("LQJRXNWCUPHAGMQWXKNDFMINKLOKDJQMEBEDPOLZQHZZINOYIPFLVQJLYGJTEDYZFYNVKVBCGJCKWQLULFICPSWHTIHSBXPQUEZXDAUGYARIBXOJJXLQYWCI");
    tmp_msg_0.attr_type = 180U;
    tmp_msg_0.min.assign("BHSCOPZQKZXWLXVNIJKQDDRLKQGJAZMFIYPVJUXUYORKASPVRUPRBTOIBAIBXBRAYCNULCFJYMZENXHUWJEDGSWOXQTCGJTBYHWDVGMJTSTETSHIRVTPSYORCLZNNVBESMUZIQFGHMHAFOYEEKDNDLZDFYIXAJDUMYAPULWVNOXGSWLEMBFBJ");
    tmp_msg_0.max.assign("OEZLSSNWYPCSZMFVAUWZNZZPBQPIJLLYOAQMSXUHJZGEELWWVETBITDGAFDMJQYFZCKDJUNIYAOENILJRFFHASXBLXEUPTVDPBJHERDCDVJXOFCZIXTPMFSLRFYHQKYTMABBXAQRWKMTGQMCEVTKEAOJLMNS");
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
    msg.setTimeStamp(0.2424028503155522);
    msg.setSource(56030U);
    msg.setSourceEntity(73U);
    msg.setDestination(15005U);
    msg.setDestinationEntity(229U);
    msg.op = 229U;
    msg.name.assign("YYEUUVZGKPPAWZSDMQXBRDMCEJBBWELFFSIBXVKADWTIZUPIFKMJNBGAOAXHUHDZEWZGAKUHAELXJKWOWOMNUWDRFNMZBO");

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
    msg.setTimeStamp(0.7535308771406822);
    msg.setSource(12855U);
    msg.setSourceEntity(165U);
    msg.setDestination(44643U);
    msg.setDestinationEntity(77U);
    msg.op = 121U;
    msg.name.assign("BTGTJWNFRFPKYYQSXTXKFWACCZRFBPLTEBGZRLIOKPMARJMEJSPBYWVZYAABRCVDIJLGLDNPTYIFOIUYARKXGTDEDVKGFATGXBAHYEHSGVNMNNZMLUWFKIXIEDCYQZHVXJVPJYSEHFLSIG");

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
    msg.setTimeStamp(0.478378559270615);
    msg.setSource(33349U);
    msg.setSourceEntity(236U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(55U);
    msg.op = 149U;
    msg.name.assign("QIDKWWRWUZATEBGJRFIQTEV");

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
    msg.setTimeStamp(0.671772749904397);
    msg.setSource(12911U);
    msg.setSourceEntity(172U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(109U);
    msg.type = 150U;
    msg.htime = 0.9314942478466851;
    msg.context.assign("TVGLFHTQZYNJDSXMXPDLGEXQJDTVNPTZFQYFQVKFWACQIHVHVYUNOIKZCQOVKQPDTUEBJZOIGPURZEJFBXAOTLYAHPLHMICMXKRNSSJUVCAPGOBCCUOSJMZUKDNAFWGZIBRHWMPYXYSYPXGJENPIBHRCD");
    msg.text.assign("BIYWXZTSVMMZFVSEAGSOBDKKYAIDYLQOZPFUPMLWNJNMNOMEPIHBQSZNOTICRNACDUQXTNQDVCIYLBNRFXFJQHRUVXHTNHVHEHUHZLQRADHKONXPACGBVSZTMGIKF");

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
    msg.setTimeStamp(0.17505113123094485);
    msg.setSource(33501U);
    msg.setSourceEntity(220U);
    msg.setDestination(18866U);
    msg.setDestinationEntity(148U);
    msg.type = 61U;
    msg.htime = 0.27390059711165315;
    msg.context.assign("LWOFOSOMSEXZCYTYJMPPHCRBAKCCRSVAQGUXGJVILNULFCNNXJWDENDOHRYMICTKAMSXUUGBUPVUGKMWFSRQSEWFOLNOCIMJPAYOYUOXHEWACBOAJSTWHXHNFFDGKLMYLYEDIDARBKRBHNKVCHDKPZQFTDXCVNUJNYMIAJKTNJEQPTYWZHVJBLITZMQLIRYWZZGFBPQIIJXEULBQBWFGVRSMAEGSHZXEFDQZQZGOTWGVDZVLXPRKBETRPH");
    msg.text.assign("NYUEXFSXOJZTGDOADNIKUDLYOLLXDOKTZOPGVLMFPSPLGRQYBHESZUAVKMBVIAKMYFYBHIUKXFTMJQOHOSNHUPSCBLFRPZRFNEXWWX");

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
    msg.setTimeStamp(0.8277840778094195);
    msg.setSource(59565U);
    msg.setSourceEntity(83U);
    msg.setDestination(651U);
    msg.setDestinationEntity(53U);
    msg.type = 32U;
    msg.htime = 0.6578295678263907;
    msg.context.assign("QZVGUXDRWGKNPMLHVR");
    msg.text.assign("CTROQESJOWNUJMCQIQTPBYXFQUXGSDOWPRSRWVARREXDTLQNLRVFGAHHFZIWPJGACSVOLCIGIXYSMXKDOVFYYZBNLLNVZGIXMDGZHJVMUZTCABVMSQTUHINYOTZQKKMICAEBPPHLFUIBTOJABGEQTW");

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
    msg.setTimeStamp(0.7904656219764724);
    msg.setSource(22981U);
    msg.setSourceEntity(168U);
    msg.setDestination(28094U);
    msg.setDestinationEntity(173U);
    msg.command = 119U;
    msg.htime = 0.7187069856709016;

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
    msg.setTimeStamp(0.8656018467089911);
    msg.setSource(42296U);
    msg.setSourceEntity(67U);
    msg.setDestination(49328U);
    msg.setDestinationEntity(167U);
    msg.command = 17U;
    msg.htime = 0.3577272724488275;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 178U;
    tmp_msg_0.htime = 0.7792937943795719;
    tmp_msg_0.context.assign("PNOPYGVLFYQKCTMTQMVCEPZLHCWXULNEXWRGJZIJDPDDHNIIUFAGFFONABZTYINPITRJBEZGFDMINLJRXEQRLFQLCEZLGIPKEHMFLNIYKJEDTKJIWUOBKPDV");
    tmp_msg_0.text.assign("EJZAGNCRQWDMNGJHHCUQOKEWMKCCDKOWSTVXNPHTMZDINJONLM");
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
    msg.setTimeStamp(0.05550075910240482);
    msg.setSource(46015U);
    msg.setSourceEntity(222U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(87U);
    msg.command = 77U;
    msg.htime = 0.20076418167846866;

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
    msg.setTimeStamp(0.720118660651549);
    msg.setSource(57514U);
    msg.setSourceEntity(19U);
    msg.setDestination(62708U);
    msg.setDestinationEntity(38U);
    msg.op = 214U;
    msg.file.assign("FCZLJPABSXMBKYIEXHXRIFEJGOWPPRBAOENAHKWUHLTSVMXUDDDUHQTNMZSVAVQOGOOZPZFIYVCREIETLCKTSLMARDYIXKJUMPJBXKRZCAQQQDOTJNQLMWMDPVJGKWHMTZEPYWSYMNPFYLIAQTIXNNBFGBVVZGVSMGYRHACWJDFCPURWFDUSNYVHGBPTGUQZULNAUBSBFKYOKXNWCIKHJORCFOSJXZHQFEOCLTEUIJWBGESWZXGEHDINTY");

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
    msg.setTimeStamp(0.29493703375881986);
    msg.setSource(19106U);
    msg.setSourceEntity(238U);
    msg.setDestination(19809U);
    msg.setDestinationEntity(32U);
    msg.op = 184U;
    msg.file.assign("KBDOARHLCEYLNCJGSMKXIDIANMGKNPQRWQTZWYVZADPOELFTGBRTSJUUPLEMIVHAHXBXSNTBVFCYHCBGBFTEYSSWHFRAECTCUQFYOUIZYCOWEEOAPWQCSDHZCUHYFVCFTEAFSWQIHXGQQOMDAMGKZMLZRFUXLJMMRSLXKSYVVDIUBUILKGUIPRXHIRJZIZJYJTWWZSADRPXNKPGJKWXOVQTLNVMKPHXJNDDWVDNENJY");

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
    msg.setTimeStamp(0.3709979494686778);
    msg.setSource(1257U);
    msg.setSourceEntity(70U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(252U);
    msg.op = 206U;
    msg.file.assign("NMJYLULCAFHCEVNGAFJWLXDCJTWDCKSAYMBEXGXYQPWMOOJKVUUKUPCDOQXBUMQEVBNUXDMQGEMCYYGSADELHGPRGKBHMIMKMQTKOKRQXLALYIVWNNSZABHJTKYNABTCXRSSF");

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
    msg.setTimeStamp(0.09420517702424902);
    msg.setSource(6235U);
    msg.setSourceEntity(56U);
    msg.setDestination(28452U);
    msg.setDestinationEntity(120U);
    msg.op = 216U;
    msg.clock = 0.9197074614482664;
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
    msg.setTimeStamp(0.5331634446879515);
    msg.setSource(22871U);
    msg.setSourceEntity(143U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(97U);
    msg.op = 48U;
    msg.clock = 0.12656083927523132;
    msg.tz = -25;

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
    msg.setTimeStamp(0.5837758450592414);
    msg.setSource(17027U);
    msg.setSourceEntity(243U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(164U);
    msg.op = 61U;
    msg.clock = 0.9721093971426589;
    msg.tz = -96;

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
    msg.setTimeStamp(0.7042433303095468);
    msg.setSource(15349U);
    msg.setSourceEntity(126U);
    msg.setDestination(13945U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.7459540300270486);
    msg.setSource(48727U);
    msg.setSourceEntity(176U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.8722259210084644);
    msg.setSource(9992U);
    msg.setSourceEntity(88U);
    msg.setDestination(51530U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.9661110149172027);
    msg.setSource(48132U);
    msg.setSourceEntity(174U);
    msg.setDestination(41175U);
    msg.setDestinationEntity(2U);
    msg.sys_name.assign("EFKYHTMMYGLKZAPWIKAWPYJQIZCBSAYWEGWVXZJEWGZYGZJYUADFJWDTHRBYGMFDQIXTBUDTPLACDBVFOZCRWERXDROQVWIICPRFGKJORBPLLSPXULNUCBWZLSIXYNVGGXOKKJFUEAFKCUIKSHVJRTDASPCRMLAWSDTLQJHLVZNCADMOQVISQ");
    msg.sys_type = 51U;
    msg.owner = 61971U;
    msg.lat = 0.395158504492395;
    msg.lon = 0.35248357911773365;
    msg.height = 0.7030834526096812;
    msg.services.assign("ZOMNMMWIQYWIJOHAVGKGBTFTMRVLHUBMMCGMTQEAKRASVPNQNYIRXOWBROUOJVNYFVSXZUSORPKRRWUSDAKOZEIHTFYKATUETFCDNQWGOGSXKSWPRYEHWBDDGHUFDKZCZKGBLJVABAYHOUKN");

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
    msg.setTimeStamp(0.04029541139595505);
    msg.setSource(57231U);
    msg.setSourceEntity(124U);
    msg.setDestination(33158U);
    msg.setDestinationEntity(100U);
    msg.sys_name.assign("GBTQEUFKPFKTDPEJKEYMFFNXRZUREXXNQNJLUYWTYHWERYCTBQYLPNJSHQYEMFVZTNIFSNENTGBMTZSKMBBOBFHLQUWSDGXCDTRVBLJZNJXHTLTCJGRAXMKASOWEGUFVALMPGZI");
    msg.sys_type = 225U;
    msg.owner = 48892U;
    msg.lat = 0.91031070494053;
    msg.lon = 0.5521878877470295;
    msg.height = 0.9943274948025239;
    msg.services.assign("TWDQFKBDMOVGLIJG");

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
    msg.setTimeStamp(0.397886140300567);
    msg.setSource(24719U);
    msg.setSourceEntity(0U);
    msg.setDestination(56517U);
    msg.setDestinationEntity(188U);
    msg.sys_name.assign("ACUZKGOBWCRIIYTYMGFWYLKSLIFDODXWVOHWNACEAQMMNDXPTJDLPEXHNYOQMYPIUISYTJPXOMETOSISLREKHATAQWLYFWKXQZUPHKSFEGFDYJXZVNBZKGWWUYIJVENCKNFKCEGIRBOJMDSQRZCBTBAFQUIGZRROSPRXSDCTCTXBOAKVBLUWNBTHFCA");
    msg.sys_type = 60U;
    msg.owner = 23904U;
    msg.lat = 0.38304309764727795;
    msg.lon = 0.7035580141365445;
    msg.height = 0.3237576603413488;
    msg.services.assign("PNOKNGYMJVSMXCZCOMUHCURXXAEOPUYEWGDWTOHZPKXXZLVFTNHLAMSWBSUQZSWVQBGYCFVLQEJXJOISCGRJZJARTNJDIRUDFGHBENLRIXJXCFSCUOJILSIDVBTWVXLRKWTDCETMWPBAFAOXUZUKKGRJQBYTQLRVNHOYHUKMDIIETKEPCP");

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
    msg.setTimeStamp(0.38156524309072815);
    msg.setSource(28554U);
    msg.setSourceEntity(237U);
    msg.setDestination(63445U);
    msg.setDestinationEntity(10U);
    msg.service.assign("CWLDGDABIQTEJRZLXZVGFDDFFSISJXKLYATIVTENYHSREZHWVICCHGEQOKJUTGBVYGIMSTPWWEQIOEQTLLXUVFXUKIUWOOUYNKPALWLNFDRJAWDRSYKOJFKAMRPPDAVYCSDCOHZEBKKMFWUFMARFPPJGFAVBVLHVPNNZHWUR");
    msg.service_type = 238U;

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
    msg.setTimeStamp(0.2906646846024695);
    msg.setSource(57247U);
    msg.setSourceEntity(234U);
    msg.setDestination(43730U);
    msg.setDestinationEntity(179U);
    msg.service.assign("MDDRSQYCBDZSKVYUQTWUULMJEJLCXCFEKKOQNWADWQYPMIFRWTQHGUSOTZNGTAQXBJJRVEAHELYECIQCOHHUZZBTFSVQAAUBLHJZHENSK");
    msg.service_type = 76U;

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
    msg.setTimeStamp(0.38746348900575445);
    msg.setSource(20890U);
    msg.setSourceEntity(38U);
    msg.setDestination(42948U);
    msg.setDestinationEntity(240U);
    msg.service.assign("CEQANQUMLJPJBVSIPBLEWVOMESBBGPXKJSVVTEGJSPGCKIQAFZARZRYPPILVOOSURXEDADKHURYIVFSFZDKCHDBZWEXHECQJNCWIGWLRIJXXHWFKXZGLHVWULKHFGCYQ");
    msg.service_type = 72U;

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
    msg.setTimeStamp(0.9935929983150102);
    msg.setSource(50915U);
    msg.setSourceEntity(113U);
    msg.setDestination(14710U);
    msg.setDestinationEntity(121U);
    msg.value = 0.1737474588575556;

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
    msg.setTimeStamp(0.8022334119172889);
    msg.setSource(59963U);
    msg.setSourceEntity(239U);
    msg.setDestination(35677U);
    msg.setDestinationEntity(138U);
    msg.value = 0.21111887819029274;

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
    msg.setTimeStamp(0.3356380704640055);
    msg.setSource(32190U);
    msg.setSourceEntity(219U);
    msg.setDestination(13053U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2721414121290008;

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
    msg.setTimeStamp(0.10820537522921003);
    msg.setSource(45301U);
    msg.setSourceEntity(52U);
    msg.setDestination(24682U);
    msg.setDestinationEntity(49U);
    msg.value = 0.3322479529857981;

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
    msg.setTimeStamp(0.07229225146944318);
    msg.setSource(34659U);
    msg.setSourceEntity(75U);
    msg.setDestination(42677U);
    msg.setDestinationEntity(145U);
    msg.value = 0.818367496579802;

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
    msg.setTimeStamp(0.23119560690384877);
    msg.setSource(49486U);
    msg.setSourceEntity(176U);
    msg.setDestination(47542U);
    msg.setDestinationEntity(118U);
    msg.value = 0.9390827826597344;

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
    msg.setTimeStamp(0.14806817325513177);
    msg.setSource(40261U);
    msg.setSourceEntity(233U);
    msg.setDestination(36877U);
    msg.setDestinationEntity(20U);
    msg.value = 0.19540290096601776;

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
    msg.setTimeStamp(0.8063028079324165);
    msg.setSource(48526U);
    msg.setSourceEntity(121U);
    msg.setDestination(47220U);
    msg.setDestinationEntity(93U);
    msg.value = 0.2856385343807616;

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
    msg.setTimeStamp(0.16383026241660714);
    msg.setSource(51664U);
    msg.setSourceEntity(14U);
    msg.setDestination(34103U);
    msg.setDestinationEntity(59U);
    msg.value = 0.31421983950714283;

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
    msg.setTimeStamp(0.8753542543607307);
    msg.setSource(17454U);
    msg.setSourceEntity(221U);
    msg.setDestination(19629U);
    msg.setDestinationEntity(115U);
    msg.number.assign("TYOFXZLGUIZUKHSESKAONPDXQIIXIXFXMBAYDTHZNEBKKNCTLVIWFCGJQRBIRAVMACZAMOOUQPUOJRYXEKPWTLRKKHPHUIEDQGVJQDSWCTUENZXCVYFPHRJXGYDEDNUJTWNJWJWLESFHMBJOZSFBYNLZYMGWQPQBCO");
    msg.timeout = 55169U;
    msg.contents.assign("NVBYIINZTKMACAGUQIFIOJHVPLCKZEBHJFXJTTUOBMBNKCCADJLWMWZUSWQVKAFIPPAMTALLUDHTZXAAYZCGELGCFMZIICRXYZBEIYCLPRKFFQDMSEKEDVTPQOHAMQBYREGNUQFPUQGZWPBWFDJIDRGMSVYERJNNQVTSYHNERMTHOHKLBKTRPGVSSUWJDLDNSXOYXWELVXOUSC");

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
    msg.setTimeStamp(0.3551157785683685);
    msg.setSource(35877U);
    msg.setSourceEntity(118U);
    msg.setDestination(49317U);
    msg.setDestinationEntity(203U);
    msg.number.assign("FYJNLDINYJUKDDLMIPPRGDSTSGGFWANNTGKAJWIVQYTJGFIDJHXMUTXZEQEZGKUEHXZLRQGKEICJLFCGAGFRRTZBOYXBYMHCBQZASWQYHYAHOBCJOPQDJXXBCCLVOUUQAHDVRSVLFAOCSBNOI");
    msg.timeout = 52481U;
    msg.contents.assign("RSRCGTKGCIOEGOLWYYNMWKBSHFPUEAXRMHNAMZPLCLNRIITZWXHGNDUZLIBOZHQVVDMDYVXOAMFCRXGDSYEOYEDVAXRDDIBQJKTJNHOKGVLPPMCOOSKZFZXNWEUDAHYRELAH");

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
    msg.setTimeStamp(0.7512200005489164);
    msg.setSource(17318U);
    msg.setSourceEntity(203U);
    msg.setDestination(36752U);
    msg.setDestinationEntity(151U);
    msg.number.assign("EEJVZWCHGLUKQTWPHJAFXGYKKBGFVALLFTDLTJLXAHRCKZIFYCOCUFYYUADSSQNOQEHJKYPEXIQDENXWQPARZLFKCTMOXMDPXBIWJIVSTIHQRYVNASQZUBPGNBOKCKMJTVWCUJKYCLBBQEDHJQNVUIPVRDWAPAFGRCQZEZTRBTRYNDNZBFWHAGHNXSORTKXENVPRWSNWCSJIMGOIWBODFDMVGPHDYZSV");
    msg.timeout = 30338U;
    msg.contents.assign("FQUPZJKFCXMDQGQWITDMPYMZVEQLEODHSDZSOWOVSVER");

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
    msg.setTimeStamp(0.25715516198287824);
    msg.setSource(56041U);
    msg.setSourceEntity(159U);
    msg.setDestination(37028U);
    msg.setDestinationEntity(109U);
    msg.seq = 1793370029U;
    msg.destination.assign("GZTQCYEXMKLQNNRZCSKPGHDXTMCLHMTCHGPJUMCYVJABKTFOHWOOYLPQEMFBXDPLIOLAVFEOJTIJCKCBUQEYSRSKDZXLCFERVRAXWWHYAJEFBFKBFNMMWBGAFJSMSZPAYISJTUXUIYBUDAOZRVALFKDOONICDNRJHSUMYGIFLQPZLUQHRNYGWNTZQH");
    msg.timeout = 32886U;
    const char tmp_msg_0[] = {-31, -78, -83, -120, -128, -2, -121, -100, -107, -82, -125, 35, 33, -118, 35, 122, 97, -51, 124, -30, 13, -82, 8, 24, -99, 113, 25, 121, -17, -4};
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
    msg.setTimeStamp(0.3397028539430017);
    msg.setSource(3654U);
    msg.setSourceEntity(178U);
    msg.setDestination(33976U);
    msg.setDestinationEntity(42U);
    msg.seq = 1594478808U;
    msg.destination.assign("GROXVVOKMGUPSDCLZUQWLTBNZVQHYOLSB");
    msg.timeout = 60310U;
    const char tmp_msg_0[] = {42, 124, -91, -73, -16, -45, 112, -81, -4, 75, 113, -39, 85, 41, -5, -64, 62, -54, -55, -64, -86, 115, 38, -54, -25, 64, 121, -72, -19, -37, -126, 25, 123, -80, -26, -89, 46, -39, 18, -109, -42, -50, -59, 123, 4, -95, -12, 87, 28, -124, 32, -70, -59, 25, -12, -61, 48, -113, 114, 75, 123, 59, 43, 82, -39, -103, 88, -14, -59, 61, 102, 60, -11, 51, -31, -20, -30, -84, 19, 65, -97, 5, -37, 37, 101, -56, -90, 97, 12, 122, -35, -108, -67, 120, -77, 20, 47, 121, -67, -87, -28, -16, -22, -115, 63, -42, 106, 52, 78, 16, 30, 111, 26, -10, -114, 101, 80, -123, -13, 40, 60, -76, 50, -63, 50, 83, -111, -3, -93, 81, 86, -95, -118, -99, -73, -41, 99, -104, 64, 52, -9, 41, 124, 65, -27, 125, 103, 30, -92, 50, 125, -100, -65, 25, -106, 25, 14, -16, -82, 112, -49, 55, 16, -55, -70, -41, 68, 5, 19, -112, -43, -68, 7, -70, 87, 9, -34, -56, 91, 8, -71, -97, 56, -39, 107, 82, 93, 28, 67, 46, 116, 100, -65, -47, 102, -121, -49, 118, -114, -10, -105, -99, -128, -13, -77, -97, -65, -59, -69, 123, 14, -76, -19, -44, -22, 87, -30, 126, 62, -71, 38, -126, -122, 96, 120, 59, -100, 118, -81, 120, -115, 18, -121, 81, 34, 63, 77, 84, 123, -40, 20, 109, -101};
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
    msg.setTimeStamp(0.4156392651844696);
    msg.setSource(5513U);
    msg.setSourceEntity(155U);
    msg.setDestination(26784U);
    msg.setDestinationEntity(138U);
    msg.seq = 2959984215U;
    msg.destination.assign("GWONGAOKWRXCHDIVKWUACKMHSCRMYMYQVCDEHSSFUZTHTZJXPMDNTCERBUVJLKTQLCRLIMPZDZXRGDLGQMAAKYHTVRBWEJNCSMSWHLKZKVAURYSVTOPLFPTJXQTZNBWQSYIWGOURFGAFNROYJRTZBDLIWNKBXFHMQCGNNXJETPUYAUGJMHZUYPBXWEDOYUE");
    msg.timeout = 56431U;
    const char tmp_msg_0[] = {-39, 65, 108, 82, 47, -60, -76, 77, 59, -41, -62, -55, 74, 103, -81, -67, -127, 73, 42, 98, 50, 61, 110, -104, 24, 89, 94, -104, 29, -103, 96, -36, -2, -12, 31, 73, -99, -85, 83, -122, 10, -50, 56, 74, -32, 76, 104, -55, -87, 33, 28, 100, 112, -126, 77, -21, -35, 50, -47, 64, 120, -13, -35, -1, -70, 120, 96, 89, -105, -58, -108, -17, 116, 114, 7, 57, -61, -78, -30, 80, 73, 19, 50, 8, -52, -53, 104, 25, 56, 5, -83, -119, 67, 57, -40, 44, 69, -71, -79, 0, 65, 30, -25, 47, -72, -78, -11, 85, -81, -98, 29, -91, -122, 78, -4, -19, -127, 71, 97, 2, -62, -48, 81, 41, 126};
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
    msg.setTimeStamp(0.769074975404786);
    msg.setSource(29475U);
    msg.setSourceEntity(106U);
    msg.setDestination(578U);
    msg.setDestinationEntity(127U);
    msg.source.assign("QVWQJHPYVMZBRKDCNDJMYTOFWQBADVFONEKXGBGITUGCJIHLHDISQKJTMASIFDABWUWLMBTSSELYIWKNXOZVXEZTYDWEHAFBBVNONPQJGUIVLHBAPJIJGOMXWAZKPLDCKJLOKYCHYGYZXAERLNKGXAZXSSRMZUZFMMCEUYRRFZUNNHVLEDQOSVKQGCDPPGXRPORMEEIDCRVHUCU");
    const char tmp_msg_0[] = {16, 68, -50, -65, 88, -39, 72, 16, -83, -24, 94, 119, 81, 108, 69, 59, 104, 26, -83, -116, 34, -114, 15, 123, -63, -35, 4, -123, -78, 24, -117, -28, -79, 125, 45, 3, 98, 100, 57, -89, -92, -105, 85, 35, 126, 15, 44, -78, -48, 122, -95, -85, -16, -34, 124, -85, -121, -26, -50, 84, -77, -49, 103, -80, 123, -21, -74, -107, -108, 115, 10, -92, 18, -83, -41, 2, -100, 49, -29, 116, -86, 94, -1, -43, -69, 78, -4, 40, -17, -119, 123, 58, -109, -36, 90, 7, -101, -56, -79, -25, -126, -109, 122, 41, -75, -60, -98, 73, 37, 5, 55, 28, 63, 33, -78, -128, 114, 53, 125, -12, -120, 86, 16, -11, -19, -6, -85, 83, -78, -80, 110, 3, 46, -69, -105, -62, 96, -40, 79, 4, -21, -53, 18, -16, -24, 8, -108, 21, 32, 72, 24, -117, 111, -55, -123, 14, -92, -16, 121, -30, -77, 5, 63, -10, 102, 114, -127, 116, -87, -95, 69, 28, 24, 51, 92, 50, 69, 95, -20, 11, -52, -79, 72, -67, 67, -124, 124, 50, 120, 0, 31, -52, 22, -28, 37, 68, 99, 85, -119, -127, -84, -16, 49, 27, -26, 118, -10, -42, 59, -66, 37, 21, 98, 83, -5, -72, 37, -57, 37, -118, 41, -73, -62, 67, 91, 86, 63, 29, 86, -44, -70, -104, 123, -13, -124, 32, -48, -5, 52, -95, -77, 33, -105, -31, 17, -122, -92, 35, -92, 57, 96};
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
    msg.setTimeStamp(0.3745510837397634);
    msg.setSource(57133U);
    msg.setSourceEntity(160U);
    msg.setDestination(59031U);
    msg.setDestinationEntity(200U);
    msg.source.assign("QFGUOCRKMLNYAUHPIYATIDTGRPHFYQNEREWDWXXDZBAZMWECEGIMSKFNBKNSTOHJMHOCASVGOEWKTB");
    const char tmp_msg_0[] = {-71, -123, 57, 98, -124, 58, 7, 7, -92, 41, -66, -72, -124, 53, -56, -56, 4, 88, 109, -75, -15, 63, 55, -27, 115, -110, -67, 85, 34, 76, 109, 117, 117, 126, -21, -121, 46, -99, 14, 13, -76, 109, -107, -95, 31, -61, 0, 22, 71, -77, -79, -1, 111, 49, 88, -60, 66, -103, 51, -107, 84, -27, -38, -36, -41, 42, 39, 102, -1, 83, -104, -41, 1, -66, 86, 52, -106, -29, -107, -87, -64, -8, -123, -92, -112, -36, 58, -86, 117, 124, 119, 78, -20, -71, 52, 9, 95, 67, 12, -68, -69, 65, 110, 21, -90, -115, 102, -34, 85, 107, -3, 42, 83, -94, 57, 106, -81, -99, 89, 105, -103, 47, -95, 87, 2, 76, -73, 36, 125, 48, -106, -117, -13, 65, 85, -88, 37, -92, 110, 16, 115, 40, -7, 94, -27, 8, 7, -79, -80, -31, 70, -102, -63, -40, 0, 3, 112, -120, -34, 25, 117, 72, -43, -98, -73, -3, 112, -42, 114, -16, 8, 15, 67, -15, -92, -126, -12, -62, 15, 69, -99, -73, 116, -84, 78, 2, 76, -5, 83, -93, -90, -14, -1, -71};
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
    msg.setTimeStamp(0.1381186984737851);
    msg.setSource(11381U);
    msg.setSourceEntity(177U);
    msg.setDestination(28328U);
    msg.setDestinationEntity(5U);
    msg.source.assign("KKFIWRGJUEPYQDAU");
    const char tmp_msg_0[] = {-39, -79, 10, -100, -82, -76, -9, 36, 89, -66, 40, -87, -51, -104, -101, 32, -5, 69, 19, -61, -35, -116, 118, 124, -110, -70, -89, -27, -32, -56, -3, 107, -122, 29, 37, -96, 105, 26, -69, 110, 118, 30, 26, -118, -17, 68, -46, 81, -35, 74, 126, 14, 42, 6, -56, -6, 91, -82, 9, 97, 6, -11, -70, -117, -62, -14, 1, 51, -48, -30, -13, 79, 66, -14, -94, -33, -22, -90, 25, 116, 95, 122, -127, -125, -80, 46, 65, -11, -51, 82, 28, -81, 30, 96, 77, -85, -37, 102, -89, 65, -75, -86, -66, -61, 18, -63, 120, 62, -50, -30, 116, 45, 75, -7, -86, 28, -74, -56, -77, 43, -48, 37, -118, -14, -12, 29, 120, 41, -111, -46, 48, 106, 86, -48, -67, -19, 115, -77, 101, 77, 60, 51, -63, 5, -33, -92, -89, 57, -128, -116, 8, 2, 10, 90, 0, 122, -98, 39, 29, -78, -29, 77, 96, 28, -2, -87, 81, -123, -45, 13, 106, 93, -30, -59, -113, 83, -81, -103, -96, -25, -109, -93, -42, 118, 77, -118, -47, -63};
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
    msg.setTimeStamp(0.32677941842095926);
    msg.setSource(5667U);
    msg.setSourceEntity(30U);
    msg.setDestination(56728U);
    msg.setDestinationEntity(16U);
    msg.seq = 915513645U;
    msg.state = 141U;
    msg.error.assign("IOLFOPHEWNFSCDBIUOYPZXMALZNZGXJJSKIJKYXGGZKXYJRFVPLBFUBHEFJBZHMCYKMIPNAAWZSTNGWAQFZUTFAIINDZRPOKPQSVVREJNUTYJMBDHTBTWDUCRVDGXKSFEWQTWCXICJDMPLAJQYAHEQARVGEXGUKULSHUTVCSMBQZLPRIWHBYLAEIGSSOPEAOVBNCETCFSNQDRGFWBMOGRWMRQHKUNXXZEQ");

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
    msg.setTimeStamp(0.9028788520519857);
    msg.setSource(22797U);
    msg.setSourceEntity(207U);
    msg.setDestination(39328U);
    msg.setDestinationEntity(167U);
    msg.seq = 1501969216U;
    msg.state = 57U;
    msg.error.assign("OZNPKOJCZUBSMHFVSWQYWDRMPWSIIZKENDOGNANLJGLBFMKN");

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
    msg.setTimeStamp(0.5780337178023923);
    msg.setSource(14722U);
    msg.setSourceEntity(110U);
    msg.setDestination(46440U);
    msg.setDestinationEntity(4U);
    msg.seq = 324315508U;
    msg.state = 3U;
    msg.error.assign("WCRVFCOYZCLCHNKXRFSVSPJBGSEILKKNUZKWDLATIOVZKNHMNWSWTRPFQDYBKKIPEJXGB");

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
    msg.setTimeStamp(0.968985343676123);
    msg.setSource(53433U);
    msg.setSourceEntity(200U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("IRCLLTKELDMAXZNYAUBSZPDCLVEGBOGDWQUKYKRBGDNIEYRHFUZVBVFIFMFWGDMPQWHUJNJSTMOFAEHKFXRPXEJMUCNJUREIZQNILTNHVTTJZHVZGNBZILWFVUKTVAYFUWMOIJXPTYXALKLPHKQGOYDBDQBOHSVREPNUTWKLCWGISGYQJNOFQJCH");
    msg.text.assign("CBPBGZVVVLFARLRTSFGBZXHHCQOGJZSKWHQBBMILIWCKNPYLFHXSTYO");

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
    msg.setTimeStamp(0.8295711794155033);
    msg.setSource(37001U);
    msg.setSourceEntity(206U);
    msg.setDestination(11488U);
    msg.setDestinationEntity(34U);
    msg.origin.assign("ZZSOHKWGWGJWBUPIDVVFBMUENLDTBFVOQJLUZWIBJYIKVKMSIIQUHNHWQMOZXVHNAOEXXPIJDNRGHNABWMPDYFEALFCKYYWHJNSGQFACBHLCDYFRXRGVHLSFNFGROVTAIXZNPERPXDEMPIPKKCPAIUYKUSZOSPJISUGOOEJEOQHDREVRRYQQTWLMKQXWNAWUDAMUEYUBRCGTKNVOGADCJCTYZJMBHJZFFZLT");
    msg.text.assign("EBDLOURKFONHHJLBVCFRUMZESYDYYLNCNUSEAMJGTTPXIOIUPOGUEDL");

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
    msg.setTimeStamp(0.779311445000777);
    msg.setSource(39759U);
    msg.setSourceEntity(124U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(184U);
    msg.origin.assign("UVVTWEKJHMZDTZFMAYIWXSIIDYMXGTWKRXYSAFWOWJBAUHJNEEJGIDTYYZXTMQBPDBCENQSTLVJKQKBOWCCNDYIUNEBQRHLKOGLCZNJPMJRNTFDQAHINSYOXIGXIRGLFHXXBJAVSEDWGQLUVULPKFNLVRQCIDGCCVTEKOSTDLZHWUYMHOGPRPIRLXYUFXMHHQCRUWRKGFZFJFYRZMD");
    msg.text.assign("SQQYARXGMWPRZUVLNQFPSBUIPFTESDVPJXKZASXZOPPXNSVBXBHNDK");

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
    msg.setTimeStamp(0.6170543998819428);
    msg.setSource(59360U);
    msg.setSourceEntity(151U);
    msg.setDestination(38434U);
    msg.setDestinationEntity(244U);
    msg.origin.assign("VVYRPLGCJKUTDDULPBBZUUBNNYVIMNLEWOECNZYFKQLQOMJAAHHRKRFFRMXEULGGDOVZDWDGRYWSSFIOY");
    msg.htime = 0.43260578914002557;
    msg.lat = 0.6893901300454564;
    msg.lon = 0.1302202585118002;
    const char tmp_msg_0[] = {70, 70, 87, -36, -84, -109, -29, 102, -92, 100, -26, -4, -16, 72, -68, -30, -28, 105, -23, -31, 2, 20, -13, -35, -120, -14, 97, 35, 106, -31, -91, -98, -32, 72, 42, -83, -56, 108, 69, -32, 114, -39, -106, -48, 51, 24, 82, -15, 81, -74, 113, -8, -19, -115, -91, 69, -108, 28, 46, -80, 118, 113, -8, -32, 84, 120, 28, -14, 96, 21, 75, -88, -67, 108, 35, 52, 31, -5, -5, 55, -57, -44, -122, -127, 35, 56, 92, 64, -95, -40, 76, 45, -75, -70, 120, 68, 48, -87, -87, -126, -72, 13, 68, -60, -78, 63, 18, -96, -120, -92, -90, 36, -45, 38, 75, 122, -11, -83, -98, 30, 62, 68, -54, -20, 123, -111, 21, 11, -71, 7, -71, -108, -27, -103, 13, -92, -78, -99, 63, -53, 26, 22, 70, 63, 87, 103, 114, -37, 56, -92, -128, -59, -98, 26, -61, -35, -68, 123, 75, 37, -42, -85, 94, -38, 43, 121, 61, 74, -80, -88};
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
    msg.setTimeStamp(0.30670948885261606);
    msg.setSource(53852U);
    msg.setSourceEntity(230U);
    msg.setDestination(37127U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("DYRLCZXRKNRWUNZPUFTABSRFQOARGGPCOHEXAAEJGMVMVYTREYJ");
    msg.htime = 0.10416539676098235;
    msg.lat = 0.4696729585457292;
    msg.lon = 0.9281155646740991;
    const char tmp_msg_0[] = {-53, 52, -93, 20, 78, -107, 3, 94, 121, -116, -63, 113, 16, -83, 70, -17, -99, -122, 101, -44};
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
    msg.setTimeStamp(0.8368747725220009);
    msg.setSource(289U);
    msg.setSourceEntity(32U);
    msg.setDestination(36021U);
    msg.setDestinationEntity(160U);
    msg.origin.assign("KKOKVJDGXJTTYDSNYZXVSZPMNNKMDQWHOLERDGLLKYIYXDMVLEDMCIROEIBCJFWGGWEQUJXFUPYAZPJUQZKDABEDPWROSBJGAWSVUHAAUGAYMRZHJIOWWPAZUZRDXFQIVUUHZQHWRBETLICNYCOPRIHSFXJGBTQGVCSQFXPCDZFCTXOFNABTFOGQFUSEMHKKCMV");
    msg.htime = 0.6373277616635885;
    msg.lat = 0.25690992432958504;
    msg.lon = 0.38400954962000267;
    const char tmp_msg_0[] = {-97, 29, 1, 89, 39, 19, 113, -28, 72, -23, 36, -17, -43, 21, -58, 68, 118, -25, -6, -23, -97, -98, 23, -54, 2, 104, 0, 56, 85, 95, 24, 90, -20, -94, -30, 3, -54, -77, 126, 5, -127, -45, 53, -127, -23, 83, 3, -89, 73, 16, 34, -24, -105, -70, 95, -69, -49, 38, -128, 111, 5, 89, 104, -75, -70};
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
    msg.setTimeStamp(0.737487831694393);
    msg.setSource(13507U);
    msg.setSourceEntity(89U);
    msg.setDestination(31770U);
    msg.setDestinationEntity(101U);
    msg.req_id = 32931U;
    msg.ttl = 26561U;
    msg.destination.assign("GWYFYVIEXFVXYGQLIWGPKZUHYHBOUZFTBYPYAEOUFDGDNDDXURSWVAWVEEAYGOISQKBWJZGWCZVAQEKICBNMCUWKVHINOSXHNMDSDTBLMBLJTJVFRXOELSUGZETBHJBEINPPLDMOJSURPQPRICZSCYOCWRKOTLMQTISTLVLQAGDHZGCLVXFJHAOKXDIPXBMBKYVTNFNJZJPZQMUAPMYJRFSWIMERMCEUFTKXSKTXGDPAHWLNRQQU");
    const char tmp_msg_0[] = {51, 2, 59, 54, 115, 50, -51, -31, 87, -118, 116, 45, 84, 102, 68, 56, -90, 30, 81, -55, -53, -50, -111, 56, 23, -8, -94, 44, 125, 12, -95, 95, 115, 86, 116, -60, -15, -111, -92, -28, 96, -44, -126, -15, -74, -63, -24, 108, -127, -6, 72, 58, -111, -106, 13, 77, -87, -93, 51, -57, -19, -55, -61, -103, 78, -12, 11, 62, -103, 72, 117, -8, -127, 58, -119, 90, 104, -97, 125, -94, -77, 68, -88, -126};
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
    msg.setTimeStamp(0.663377346640239);
    msg.setSource(749U);
    msg.setSourceEntity(185U);
    msg.setDestination(847U);
    msg.setDestinationEntity(238U);
    msg.req_id = 34207U;
    msg.ttl = 4721U;
    msg.destination.assign("UOXNYQOYHFKHLJVEHKPOURYZGSXHYKMBQYHBLVJIGXEMADNIIPEWQJRBCESXXQGTBFNMNOADGEUBY");
    const char tmp_msg_0[] = {-24, -76, 11, 50, 49, 97, -85, -20, -67, -115, 21, 36, 4, -109, -34, 43, 39, -8, -30, 45, -122, -8, -52, -40, -62, 83, -51, 60, -90, 84, -27, -4, -114, -103, 102, 107, 100, 90, -6, 80, 5, -52, 20, 53, -2, 62, 122, -4, 26, -8, 38, -97, -104, -97, 44, 72, -32, -64, 54, 113, 110, -74, -85, 86, -89, 6, -72, 81, -123, -18, -126, -52, 21, -94, 62, -83, 64, 63, -99, -18, -65, 64, -54, 6, 103, 81, -21, 119, 125, 76, 114, 93, 66, -43, -94, 28, 60, 54, -70, -30, -110, -97, -56, 64, 49, -24, -6, 53, -100, 108, -82, 69, 22, 114, -103, -63, 13, 20, 14, 32, -119, 33, -38, -21, -95, -22, 62, -43, -35, 25, 18, 22, -127, 78, -92, -26, 125, -90, 104, 45, -88, 101, 26, -8, 94, 23, 23, -38, 67, 64, 43, -16, 7, 81, -22, 76, -58, 85, -20, -77, 57, -13, 64, 21, 61, 82, 54, 109, -90, 85, -20, 55, 43, 59, 71, 104, -12, -106, -39, -82, 92, 36, 29, -111, -114, 5, -15, -60, -59, -107, 88, 68, -83, 84, 72, 7, 37, -39, -28, 70, 84, 41, 113, 43, 107, -115, -35, 115, -25, 23, 28, -92, 3, 67, -16, 126, -43, 120, 18, 125, -102, 102, 36, -40, 29, -20, 28, 18, -94, -79, 102, 93, 41, -69, 68, -69, 80, -50};
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
    msg.setTimeStamp(0.8994897436120806);
    msg.setSource(46641U);
    msg.setSourceEntity(5U);
    msg.setDestination(18328U);
    msg.setDestinationEntity(100U);
    msg.req_id = 33535U;
    msg.ttl = 57331U;
    msg.destination.assign("BVERKMPMJZNQWRQHOHXVBNXTNHDBRQDZTBMGXAJHQYXURZNLUXBPYPMKRGZRIEYXWESIXIFTJFAKKDTQMOYTEIWPSFDSBRVN");
    const char tmp_msg_0[] = {62, 13, 45, 20, -23, 56, 85, -41, 125, -83, 75, 24, 110, -105, -14, -94, -28, 34, 67, -93, -57, 46, 48, -58, -93, 12, 35, 56, -51, 28, -85, -41, 55, 72, 51, 123, -68, -49, -40, -74, 7, 111, -127, 122, -58, -35, 57, 2, 56, -45, 41, 30, 26, -89, 41, 90, -76, 80, 112, 30, 24, 57, 3, 63, 68, 123, 21, 105, -91, 31, -6, -92, -97, 29, 81, -115, -2, 112, 57, 116, 21, 81, -51, 68};
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
    msg.setTimeStamp(0.015337313593897783);
    msg.setSource(39000U);
    msg.setSourceEntity(100U);
    msg.setDestination(3146U);
    msg.setDestinationEntity(219U);
    msg.req_id = 41579U;
    msg.status = 16U;
    msg.text.assign("NUXUHNNGSBKOVSFBWBORSKKTLPVMFKDUVPNB");

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
    msg.setTimeStamp(0.11726517448584362);
    msg.setSource(41662U);
    msg.setSourceEntity(106U);
    msg.setDestination(43048U);
    msg.setDestinationEntity(74U);
    msg.req_id = 44244U;
    msg.status = 106U;
    msg.text.assign("TNDNLOPJAICTZYMRMEVUGVGDVMUKNRZEZRPGRHSQ");

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
    msg.setTimeStamp(0.3445458565356162);
    msg.setSource(33535U);
    msg.setSourceEntity(228U);
    msg.setDestination(1836U);
    msg.setDestinationEntity(115U);
    msg.req_id = 14686U;
    msg.status = 182U;
    msg.text.assign("DLUXVAKRZAUGFLWBPLTJOAIFKOJCRPJVRNEJUTGBYVMMGREQDJCXLHECXOJFGKFIPMAQDBBUHIKDSMMSSJYHQWKSWIDYTQISEVREFPNKLELWLQFKOXMTOXCNSWVGNSEYNOCQGUBND");

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
    msg.setTimeStamp(0.4248741036130653);
    msg.setSource(40948U);
    msg.setSourceEntity(213U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(152U);
    msg.group_name.assign("YPGVIFEEXVCRJEMBPSYQBYQBUVOVIUIYZGRUDJXMDPCHXUOWWRZTEOZBRILIJOWCAMDCZHLOIZJNMPRWHJDQTFWJGNULSKTOBKQDGYLARHFQTRKFLNV");
    msg.links = 4233828066U;

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
    msg.setTimeStamp(0.9101319135001733);
    msg.setSource(37322U);
    msg.setSourceEntity(162U);
    msg.setDestination(6404U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("JNYROJSCVLEZARKIDVYHTEFCEOMQBFCMIWXPIUJVWIAMXHSQRNXGGRVXPNASPJMKVLPLWZYREUVUDOCMKUJHEZUWQUEHKTQQLJZBY");
    msg.links = 1518622557U;

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
    msg.setTimeStamp(0.8395176893440125);
    msg.setSource(52345U);
    msg.setSourceEntity(13U);
    msg.setDestination(37976U);
    msg.setDestinationEntity(73U);
    msg.group_name.assign("ZCJFDREFSAUZVMJRPYRKBBLGIHCWJGLHESOZCORWGROVLDWNHALNSACPILDHMKUKLBHLRGFVRP");
    msg.links = 3176704290U;

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
    msg.setTimeStamp(0.6505442057776936);
    msg.setSource(8337U);
    msg.setSourceEntity(61U);
    msg.setDestination(56349U);
    msg.setDestinationEntity(85U);
    msg.groupname.assign("CDYVXEHNNBIZXJHQCVJCMJTBUYKMWJQPSYLWYPSJAGWRKGQENZYDBPMVVQXJGRPEOZYOZNVBAIWQKURLHCACVFHT");
    msg.action = 140U;
    msg.grouplist.assign("VUTPEECOYPKQJCOZSWCYLFZANBBAVEBSKOYDVKNSJSEVYIUTTQPKOYWRRGPHATUWIZIZWRGLTBLUJDPACMOSVUUBVJXNOQFYHMJEPXLRWNYOIEXZRSJMHFIZDDRKOFKCCKQFWDGGXSHBNXFKPNGUAGIJTMDGEXTSYWXPMORKIMIHLYAFWPLUWVARAAQCHSZV");

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
    msg.setTimeStamp(0.3537000436527772);
    msg.setSource(60042U);
    msg.setSourceEntity(178U);
    msg.setDestination(46128U);
    msg.setDestinationEntity(70U);
    msg.groupname.assign("IFHMHYELYPSJUYJMVXFXJOBGLPWKPBDZLRKJNMOSIYUCFOLSXZOISJWQSIUGUUCBPHGVKUXQBZTBVKRCQAJAZWEEGAMMIDXVAABJMOVNQKQBOQCWMCDFFSZUUVILEPQERPKOZXRTESJDOHTIGRRXVDZAFTWDHDVNVV");
    msg.action = 49U;
    msg.grouplist.assign("HQWCYTSBVTPSGMQ");

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
    msg.setTimeStamp(0.7124171688618895);
    msg.setSource(30U);
    msg.setSourceEntity(231U);
    msg.setDestination(62632U);
    msg.setDestinationEntity(182U);
    msg.groupname.assign("QQDMVANGZKBPXFEWBJJCROZTMPRNDMPHUVNLRUHCZSDYRIESCFMHLDJNZUORPRJMPHTDIBJEKJNQJFEVGNCBSRPQCVZIRTEKFCBIYUULOCQUWLPMFWQLDUAAKGGLOVKONKYGXBXBINHT");
    msg.action = 121U;
    msg.grouplist.assign("AQOCHSZFGHXWHTHVGWGEVVXXDIWYLKQAQAQLLVBFUNPPCTNLSNZBS");

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
    msg.setTimeStamp(0.3408032683598814);
    msg.setSource(8212U);
    msg.setSourceEntity(206U);
    msg.setDestination(12772U);
    msg.setDestinationEntity(37U);
    msg.id = 149U;
    msg.range = 0.8151625085881423;

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
    msg.setTimeStamp(0.09154885604322849);
    msg.setSource(18678U);
    msg.setSourceEntity(69U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(34U);
    msg.id = 37U;
    msg.range = 0.5123222536009079;

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
    msg.setTimeStamp(0.3117017420202146);
    msg.setSource(31843U);
    msg.setSourceEntity(11U);
    msg.setDestination(30908U);
    msg.setDestinationEntity(161U);
    msg.id = 108U;
    msg.range = 0.5922179231115307;

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
    msg.setTimeStamp(0.7373363662733166);
    msg.setSource(45344U);
    msg.setSourceEntity(98U);
    msg.setDestination(62599U);
    msg.setDestinationEntity(146U);
    msg.beacon.assign("CCBSFMOXTVOLINAHKRENFGYCCIUFVUKAQUFXDZGZRBLBYQQWHSNYUYZEQRLCJRUAAUAJXFWFGVEWZOJ");
    msg.lat = 0.5338838623317936;
    msg.lon = 0.8592592200226113;
    msg.depth = 0.4385097264646566;
    msg.query_channel = 180U;
    msg.reply_channel = 219U;
    msg.transponder_delay = 36U;

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
    msg.setTimeStamp(0.03124301848644806);
    msg.setSource(24621U);
    msg.setSourceEntity(49U);
    msg.setDestination(61838U);
    msg.setDestinationEntity(95U);
    msg.beacon.assign("LKKMUJXWGPLNCYJAZQIXSJGJRBKYQZWRGTPDOWYBP");
    msg.lat = 0.9488544537738368;
    msg.lon = 0.3311113128793661;
    msg.depth = 0.8515157859185873;
    msg.query_channel = 161U;
    msg.reply_channel = 178U;
    msg.transponder_delay = 85U;

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
    msg.setTimeStamp(0.9129296766292697);
    msg.setSource(30881U);
    msg.setSourceEntity(198U);
    msg.setDestination(45953U);
    msg.setDestinationEntity(3U);
    msg.beacon.assign("YFPVWKSFKOIHFXUDOGCQCSNXAHYFBMCLISGIPLXMKTPBXATYERLWARBRYPWHVWLNOEVTHKKUDLCQELROGXNDZODQVUOQQEFUHFPWTZADXDYCXRMAYSATIEJBITHZGESJJUDQOWDJMSVQQLYHUGHBRAJBAXTUCMFCZFLLGTYGNJBUBZMPNOMVTIAENEOCCQSNIZLIWMYANKEVXWKPBEZRCGVRQVN");
    msg.lat = 0.8537672429580567;
    msg.lon = 0.674473864297925;
    msg.depth = 0.028048177646331607;
    msg.query_channel = 70U;
    msg.reply_channel = 82U;
    msg.transponder_delay = 195U;

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
    msg.setTimeStamp(0.1959418783190302);
    msg.setSource(32374U);
    msg.setSourceEntity(62U);
    msg.setDestination(57883U);
    msg.setDestinationEntity(108U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.6123768621340542);
    msg.setSource(35872U);
    msg.setSourceEntity(16U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(108U);
    msg.op = 114U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OUVGCRIOXPHICNLNWWVAALDUQSQDIGTUJOZZDIDYAHDFJEOKCCMGZIWXQNLYKYKQRSNNYVTRCBKFOUPSLNOEBVUYMPBRHXCCXHYELIVHSMPBXNKYMYHAVRLHHVETXWIBEQPGMJOFYOGGPAJZMZDBIFZRKFBGWLSQ");
    tmp_msg_0.lat = 0.4351979146411964;
    tmp_msg_0.lon = 0.07946538878569809;
    tmp_msg_0.depth = 0.5252224644428672;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 140U;
    tmp_msg_0.transponder_delay = 75U;
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
    msg.setTimeStamp(0.36594811415330386);
    msg.setSource(46844U);
    msg.setSourceEntity(37U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(248U);
    msg.op = 47U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PRITZIUHJWYFBGJEKBFZALXGARPGS");
    tmp_msg_0.lat = 0.19261462707899268;
    tmp_msg_0.lon = 0.696242434441282;
    tmp_msg_0.depth = 0.6878770161136719;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 9U;
    tmp_msg_0.transponder_delay = 155U;
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
    msg.setTimeStamp(0.29615617689083584);
    msg.setSource(12919U);
    msg.setSourceEntity(169U);
    msg.setDestination(55194U);
    msg.setDestinationEntity(189U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("TCKIKHYZEGPISJTWNEBMOWRWIHBJQKWMJXVPTQAWGCGXCFOXCUJNDPBDYSKJGHHULLTBKSOTPREKZROVCZGFVSEITYTHVYNYFASLSVLRNQYPIPOZXLZELOAFHZRJNFAUXJKTFQVPFSRSGAEADSECCJLPMNIWIHYNYZXKORQVOQEUDKAJMMBCUDGWZVBXNKAFNIMUMIQHWYMXUDVGRJWMDUTRLQDCBAEDXZVOLHIFGUBPGTMYEORAQXWHULS");
    tmp_msg_0.dest_man.assign("BCLBCTJSYABKZVVNASFFZBRQMSMHHTLWPXONMFLJVUETZEFDNSQRBJKGEMHUBMOTAGXARXXUBKKLNQEISICTSJFRNWTTQVGHWZOGNMXAGMHLLVDDDDHLRHUYXEOWYWBYUVDPOKEDIQYAUNFIVYJKRQZWXUGPPXCXAAEEMUNJFPHRPWZQDXOIAWQIDZRDEV");
    tmp_msg_0.conditions.assign("ERELTAQXNBWMONDGVQDHEHIJJSDESSUDFCMQXWKOBCJHKZAAHRITRW");
    IMC::Salinity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0348316381596917;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.17004725014937816);
    msg.setSource(61766U);
    msg.setSourceEntity(184U);
    msg.setDestination(46593U);
    msg.setDestinationEntity(254U);
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("YBEPXOZRPYCNVATRGCEXSDPUFLHFQHYLJAJFRLXFCANSZYNNQTINRIEGRFLNYJVKOUUXHETZXPUEWGGMPLUPJSSQPDWGTIDEHURLVBSEJUIKWVXTVBXUSTFZYSKMFHIBBKWJQDDVUOALPMPEDCTQWZBDCYDHGXLFFWOIC");
    tmp_msg_0.htime = 0.6292819038887904;
    tmp_msg_0.lat = 0.3931876891084224;
    tmp_msg_0.lon = 0.796698620056786;
    const char tmp_tmp_msg_0_0[] = {-65, -99, 105, 48, 51, -62, -118, -96, -57, 22, 88, -12, -54};
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
    msg.setTimeStamp(0.9878748116050711);
    msg.setSource(23149U);
    msg.setSourceEntity(141U);
    msg.setDestination(29902U);
    msg.setDestinationEntity(44U);
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 159U;
    tmp_msg_0.file.assign("GOEZPGRRVZIUPUVWYXBWAKUQFLMNQKVJWDPFUWFNRUVMXIWJNLSNPKKKCFVSFMETQSSBVFZDXQRXMCYAVYDBCWLWJQLZMBE");
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
    msg.setTimeStamp(0.3352713864313327);
    msg.setSource(49574U);
    msg.setSourceEntity(36U);
    msg.setDestination(35431U);
    msg.setDestinationEntity(132U);
    msg.op = 115U;
    msg.system.assign("FMKRIHMOYCHRPYLAYKASIHMUXBHSSXKQQDUCBBUNXZFZZRUVDDYYJVYDXPMYZJBCBATTEBLAXOENNOLDPYFDAWGTEXSRRCKUCLTTFKJZNFQKDPGJWLISFNOKEHASQOHKWPYFJELVNQRUJBFTQAUMSOOXFTCCZIDDCIZNQNQZELGZVNLLWUNMIGGMPGZGVBXDSVUKPWOWVOGPIPJSCVQOXMYERITHWWRTCLBAIVGBMQJWSGJIKEXTAP");
    msg.range = 0.3320094502041532;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 114U;
    tmp_msg_0.error.assign("UGVHCWMDHZNMHVKZNOQDPTPDOJSPOOZZFPUMQCFLEJBOYWSMDYCSGRFJAYAKZTOAHOIIPCTFQMID");
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
    msg.setTimeStamp(0.2522536081346155);
    msg.setSource(16069U);
    msg.setSourceEntity(186U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(47U);
    msg.op = 171U;
    msg.system.assign("UCHYOCLBJYKNWUPYFKLEQDUDMKFCCXYICHVLZSZEENROKSCMLNUPOTLOHWBASDNTWGQGKVJODFYUFSVXIMDXTESBDIGJYGWAZBKMFRICXTPXLPNKAIWOZYXHTGKTEIJDAVTQI");
    msg.range = 0.13914799483460338;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 97U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("SEQPWTKQPYLMWBIHCSJUPPTORUHZSVKVVNFQUYYWNYCCCZJLCBAHFRXSOUOZTXQRGDBRXVNJLKMHDTZVYOYNBZGXMFEQCWDMBUYLLAEZYKXRHBVOGNAMFEILMNRPSGYPDUOONIFSLRHGAVICBNDZCEGAOUWRQMGLHDSKVIXAWDTBHLSSSZEWLCGOAMUXEZVIMZITO");
    tmp_tmp_msg_0_0.description.assign("CTKAVCQRMPTFESLFMGNNAQADWMRXYQEDIJTCNZVACXDKFAMAYORYKPXKXYBHHIPYEZQRLGOYAJBCSGHPIAYTHLITEMSKFIHQBDKNUJCMZLIHAHNGOSYWMFWGDJSEKQJUGEIUPZDNLHJUEDTNFXXTBQGRZFDRWCIPWRFCJVUBHMTUUNTPLPBIMFZZSZFJWPEXUSOMWVCKLVBOOTZQUSRQWYXOVILBJWXVULGOKBOG");
    tmp_tmp_msg_0_0.vnamespace.assign("PNXUVILMQSURSLGOKETBTGHQXONWZFLSTVFUNLJEBIYYHLMIANEISNUONSVBYMCNRAELIRMGHOJKXKDKIBAFFCNYFEVCDFLTXUCZTUAOWQGEXRPPDSOWPRBOQPMYMBACHZICWQMIVHWOWZBGZCYULPEEQGDKHHTSRJFZNZDWGQJMOAKTMJZGPWRAVDXLPAVAZAITPJQDGXSQQSJ");
    tmp_tmp_msg_0_0.start_man_id.assign("NMPLNOHMIHCKTSDZGVUEQAYKXRWXOLUEYQRRJXFDSLAFXMVNPFCAEARXYRPYAJVTKASHWCSGOUOECNKLNSJHYGVVEUZCQJFEFCMUPTCQTYIWSNDVCPKJJDVHQURBXNAXWIOOTBVHZGLEGORPXFNYOPZXISTSMBUALKVYPMULPBWQVZFGDPDSODQBGOKDFLG");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("HYNWQGLBFWOGKVIDQCQRUATNQZUGKRP");
    IMC::CoverArea tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_ref = 1963621748U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id.assign("LLSEAJSPZODHPEMGTQWSGXZLXJVEUBJBBPBKIQTGSVCFODYLUBNCUFEANEGHDZDT");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.memento.assign("AMPPUENECRWZYPTOCLMIVMHSOLSQZOZFRLHACUFYFGNVKWJTEQQLDAQJKCENILPHXQKRISCXAKHQSDO");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.28666365887945555;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.6722725995605418;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.43873877912973;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 74U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.40119250479882784;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 169U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("PIMYELUDCHGNLWRHGDXPDBVZBXTNOOSWRMQNYBACUHSAXCLIUZBYFELXLOFOZXOAQOQFOEXHMNLQJYHDBMZTVTWHBVAJWIBZCKFPFLVXSKCYUYPKRKLRTIGTTBVIBRWYFQTBMSRUKGGIJSJNGWWJMJKXCYWSPQFVJAHP");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::GroundVelocity tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.validity = 135U;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.x = 0.8170472012575684;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.y = 0.3106978559254745;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.z = 0.9735501867807929;
    tmp_tmp_tmp_msg_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7391142441176621);
    msg.setSource(28754U);
    msg.setSourceEntity(152U);
    msg.setDestination(50296U);
    msg.setDestinationEntity(65U);
    msg.op = 83U;
    msg.system.assign("GBMQEFRDAJSKTGUSVVMNIONIFPLQSXYZUSHNIDDLPOKCHRFOPZKEZGCCGEGKTRADXALXBALMUUTEGFMQWEMRTONBZIJGMZAEDSMVJYFOFCXTWAQPYMBWMDUHHISVUFOTLJJCHQNBIXTBC");
    msg.range = 0.8334650207412236;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.id.assign("NUPFGWFFBVECXUGGFXYDPRCRVTJBXRVIAODAGENHIXVNYYABMBJTWTSZEULZSBYJGFGJGSWHWAJCNDEDXMHPSZSHPFYNRVUFUIABHLTKAKQYZVKTEXURLOQFUEMTLLNJLSOMKRJNPRMHVNKZQOVBDZAZKHYDQVOWLHWUMNWLBYPMYKJQDTBIGIHUPXH");
    IMC::GpsNavData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.itow = 1716525563U;
    tmp_tmp_msg_0_0.lat = 0.4923834948386576;
    tmp_tmp_msg_0_0.lon = 0.6803415179466338;
    tmp_tmp_msg_0_0.height_ell = 0.5337047831138194;
    tmp_tmp_msg_0_0.height_sea = 0.11676299218354835;
    tmp_tmp_msg_0_0.hacc = 0.46421231631606286;
    tmp_tmp_msg_0_0.vacc = 0.5940282903142523;
    tmp_tmp_msg_0_0.vel_n = 0.9226560660369063;
    tmp_tmp_msg_0_0.vel_e = 0.44591130816000224;
    tmp_tmp_msg_0_0.vel_d = 0.5177254878527242;
    tmp_tmp_msg_0_0.speed = 0.590020309151708;
    tmp_tmp_msg_0_0.gspeed = 0.22607260667390328;
    tmp_tmp_msg_0_0.heading = 0.5558683595892724;
    tmp_tmp_msg_0_0.sacc = 0.6728949368011127;
    tmp_tmp_msg_0_0.cacc = 0.15574712713936523;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5656261981933227);
    msg.setSource(15075U);
    msg.setSourceEntity(208U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.3775774936872234);
    msg.setSource(30123U);
    msg.setSourceEntity(178U);
    msg.setDestination(33767U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.33239748024869753);
    msg.setSource(47432U);
    msg.setSourceEntity(80U);
    msg.setDestination(31411U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.48730637296807056);
    msg.setSource(53485U);
    msg.setSourceEntity(156U);
    msg.setDestination(54093U);
    msg.setDestinationEntity(204U);
    msg.list.assign("PFJFIZOJPUTCGFWYKRZQSQZGZUPXULRVSJWBJTVEMWHHJHHFOTVLVXGNPWARWWFYOUCIQQANUNXAAQBLHEDFQKMHXMO");

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
    msg.setTimeStamp(0.27253133851230693);
    msg.setSource(10444U);
    msg.setSourceEntity(0U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(109U);
    msg.list.assign("DFUOPBNVHKE");

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
    msg.setTimeStamp(0.4748419847867609);
    msg.setSource(36018U);
    msg.setSourceEntity(64U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(8U);
    msg.list.assign("YZSHCBPZXOKENFWUVMIWFTCVRVHRJEGMJQHPXLDMAROFZAIRHECUKXICATRCQYVDQGHNAMKLOBYCOHRNHNBNJEOWVZHQERMIHGAECMVKTZFPDDOSYCLEPMSUIIAIROAQDLTMZLAQTQTUXFGWZFUPPBSUBSKBVWFMOEBOVDLJYJVJKDKIXAUHYXQEUKGJYYGYGTBWNUSWTMJINJBXDRIJPPVNPKTCGFWWSFXSOLGKADPDBZLCRUNSFSNZ");

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
    msg.setTimeStamp(0.2178866912700821);
    msg.setSource(20074U);
    msg.setSourceEntity(228U);
    msg.setDestination(20551U);
    msg.setDestinationEntity(74U);
    msg.value = -28909;

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
    msg.setTimeStamp(0.8410598917681315);
    msg.setSource(19113U);
    msg.setSourceEntity(164U);
    msg.setDestination(18629U);
    msg.setDestinationEntity(29U);
    msg.value = -25843;

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
    msg.setTimeStamp(0.8426110148536059);
    msg.setSource(12533U);
    msg.setSourceEntity(199U);
    msg.setDestination(53948U);
    msg.setDestinationEntity(36U);
    msg.value = -3328;

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
    msg.setTimeStamp(0.286527581833948);
    msg.setSource(21117U);
    msg.setSourceEntity(213U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8403967069431676;

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
    msg.setTimeStamp(0.531363875022079);
    msg.setSource(50902U);
    msg.setSourceEntity(53U);
    msg.setDestination(16835U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5732366669863707;

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
    msg.setTimeStamp(0.6657795531812696);
    msg.setSource(8937U);
    msg.setSourceEntity(209U);
    msg.setDestination(61988U);
    msg.setDestinationEntity(143U);
    msg.value = 0.5736878785499925;

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
    msg.setTimeStamp(0.04596487760861934);
    msg.setSource(22957U);
    msg.setSourceEntity(249U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(110U);
    msg.value = 0.4521411845407708;

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
    msg.setTimeStamp(0.49140413231895697);
    msg.setSource(22649U);
    msg.setSourceEntity(196U);
    msg.setDestination(17547U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7852297268452284;

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
    msg.setTimeStamp(0.5987852259250547);
    msg.setSource(32767U);
    msg.setSourceEntity(235U);
    msg.setDestination(60313U);
    msg.setDestinationEntity(225U);
    msg.value = 0.4491457853588524;

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
    msg.setTimeStamp(0.5322283585487391);
    msg.setSource(35026U);
    msg.setSourceEntity(111U);
    msg.setDestination(28064U);
    msg.setDestinationEntity(212U);
    msg.validity = 53090U;
    msg.type = 138U;
    msg.utc_year = 37788U;
    msg.utc_month = 89U;
    msg.utc_day = 42U;
    msg.utc_time = 0.583909387565051;
    msg.lat = 0.4214401402724668;
    msg.lon = 0.6292326288253194;
    msg.height = 0.5242653890709599;
    msg.satellites = 213U;
    msg.cog = 0.11442575093464968;
    msg.sog = 0.19408643211421406;
    msg.hdop = 0.3174577679166396;
    msg.vdop = 0.8171239508934532;
    msg.hacc = 0.1906997398879965;
    msg.vacc = 0.14155926389067508;

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
    msg.setTimeStamp(0.008195218731357756);
    msg.setSource(1538U);
    msg.setSourceEntity(250U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(173U);
    msg.validity = 4420U;
    msg.type = 129U;
    msg.utc_year = 1282U;
    msg.utc_month = 167U;
    msg.utc_day = 237U;
    msg.utc_time = 0.3965836551642522;
    msg.lat = 0.6548480362446183;
    msg.lon = 0.33196516550412747;
    msg.height = 0.6458663811838732;
    msg.satellites = 23U;
    msg.cog = 0.6768367947947715;
    msg.sog = 0.04217486244793067;
    msg.hdop = 0.03734593742459391;
    msg.vdop = 0.0472248104579982;
    msg.hacc = 0.1267218642903276;
    msg.vacc = 0.3243841147992048;

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
    msg.setTimeStamp(0.09275618463499968);
    msg.setSource(11991U);
    msg.setSourceEntity(41U);
    msg.setDestination(24739U);
    msg.setDestinationEntity(175U);
    msg.validity = 24613U;
    msg.type = 232U;
    msg.utc_year = 2118U;
    msg.utc_month = 190U;
    msg.utc_day = 158U;
    msg.utc_time = 0.14306210641574868;
    msg.lat = 0.7454358797969882;
    msg.lon = 0.515477664827886;
    msg.height = 0.39981383651085156;
    msg.satellites = 143U;
    msg.cog = 0.9606913272154475;
    msg.sog = 0.5896861417444794;
    msg.hdop = 0.7494842098765915;
    msg.vdop = 0.9706142092341858;
    msg.hacc = 0.021034058086273344;
    msg.vacc = 0.6041305392106266;

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
    msg.setTimeStamp(0.6749332681351577);
    msg.setSource(27808U);
    msg.setSourceEntity(198U);
    msg.setDestination(10993U);
    msg.setDestinationEntity(165U);
    msg.time = 0.835127028025658;
    msg.phi = 0.5562691683780459;
    msg.theta = 0.907696839318933;
    msg.psi = 0.7658336151379629;
    msg.psi_magnetic = 0.4220089309244428;

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
    msg.setTimeStamp(0.4281048832930546);
    msg.setSource(44156U);
    msg.setSourceEntity(213U);
    msg.setDestination(17834U);
    msg.setDestinationEntity(200U);
    msg.time = 0.8285665570415126;
    msg.phi = 0.7136075332362989;
    msg.theta = 0.20975784399462838;
    msg.psi = 0.05465656800967211;
    msg.psi_magnetic = 0.582674124694755;

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
    msg.setTimeStamp(0.3967512419843965);
    msg.setSource(27728U);
    msg.setSourceEntity(113U);
    msg.setDestination(2988U);
    msg.setDestinationEntity(229U);
    msg.time = 0.9452762459648585;
    msg.phi = 0.6157579650756393;
    msg.theta = 0.4658956125278454;
    msg.psi = 0.5279968013054035;
    msg.psi_magnetic = 0.4095100949415237;

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
    msg.setTimeStamp(0.5680200660656314);
    msg.setSource(10406U);
    msg.setSourceEntity(211U);
    msg.setDestination(5278U);
    msg.setDestinationEntity(124U);
    msg.time = 0.4057979137288136;
    msg.x = 0.09978857005041408;
    msg.y = 0.6762606513878487;
    msg.z = 0.8497630532487592;
    msg.timestep = 0.9160962651997041;

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
    msg.setTimeStamp(0.3111618163557869);
    msg.setSource(41228U);
    msg.setSourceEntity(177U);
    msg.setDestination(13388U);
    msg.setDestinationEntity(218U);
    msg.time = 0.0952554854940556;
    msg.x = 0.7098292636931077;
    msg.y = 0.32270626956751425;
    msg.z = 0.2746758373298829;
    msg.timestep = 0.07850820800505354;

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
    msg.setTimeStamp(0.20253657516735035);
    msg.setSource(60259U);
    msg.setSourceEntity(103U);
    msg.setDestination(63860U);
    msg.setDestinationEntity(70U);
    msg.time = 0.4778615150311828;
    msg.x = 0.9163294518856745;
    msg.y = 0.36411273201692895;
    msg.z = 0.9195582096436721;
    msg.timestep = 0.5029143079469109;

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
    msg.setTimeStamp(0.6841042699024622);
    msg.setSource(10380U);
    msg.setSourceEntity(95U);
    msg.setDestination(52753U);
    msg.setDestinationEntity(28U);
    msg.time = 0.7868977403724453;
    msg.x = 0.8923680044803167;
    msg.y = 0.08531775534444241;
    msg.z = 0.7351182898193134;

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
    msg.setTimeStamp(0.1553463440183399);
    msg.setSource(35428U);
    msg.setSourceEntity(174U);
    msg.setDestination(56956U);
    msg.setDestinationEntity(143U);
    msg.time = 0.9047684508457942;
    msg.x = 0.13150360950174167;
    msg.y = 0.6189738117981411;
    msg.z = 0.420440857476022;

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
    msg.setTimeStamp(0.31786933304663056);
    msg.setSource(39262U);
    msg.setSourceEntity(197U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(125U);
    msg.time = 0.9996371720810922;
    msg.x = 0.1675813014107348;
    msg.y = 0.9943287197414759;
    msg.z = 0.18122381317582326;

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
    msg.setTimeStamp(0.34964247456472475);
    msg.setSource(39863U);
    msg.setSourceEntity(151U);
    msg.setDestination(36069U);
    msg.setDestinationEntity(48U);
    msg.time = 0.2894969884310462;
    msg.x = 0.599535680650728;
    msg.y = 0.21783472899892586;
    msg.z = 0.7650974486477035;

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
    msg.setTimeStamp(0.25300550680836087);
    msg.setSource(17228U);
    msg.setSourceEntity(28U);
    msg.setDestination(33745U);
    msg.setDestinationEntity(209U);
    msg.time = 0.044067013144466705;
    msg.x = 0.6234933511679805;
    msg.y = 0.7946623380887753;
    msg.z = 0.8763484693082024;

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
    msg.setTimeStamp(0.5059657617064746);
    msg.setSource(12110U);
    msg.setSourceEntity(182U);
    msg.setDestination(5732U);
    msg.setDestinationEntity(176U);
    msg.time = 0.6993350347786277;
    msg.x = 0.5127772041815858;
    msg.y = 0.4254737510379124;
    msg.z = 0.3370889786289788;

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
    msg.setTimeStamp(0.6639472331733524);
    msg.setSource(2298U);
    msg.setSourceEntity(103U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(72U);
    msg.time = 0.9137967226469597;
    msg.x = 0.14946046464382212;
    msg.y = 0.7582077238329223;
    msg.z = 0.04234379462751203;

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
    msg.setTimeStamp(0.5112403722226504);
    msg.setSource(21027U);
    msg.setSourceEntity(3U);
    msg.setDestination(55489U);
    msg.setDestinationEntity(98U);
    msg.time = 0.7756796458291768;
    msg.x = 0.4691616523173717;
    msg.y = 0.6266221251762986;
    msg.z = 0.7000402738139805;

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
    msg.setTimeStamp(0.6355459186796663);
    msg.setSource(23686U);
    msg.setSourceEntity(242U);
    msg.setDestination(13817U);
    msg.setDestinationEntity(247U);
    msg.time = 0.6809988354392464;
    msg.x = 0.36822600612194767;
    msg.y = 0.03268705880461387;
    msg.z = 0.07671584705279877;

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
    msg.setTimeStamp(0.9389181391122078);
    msg.setSource(6951U);
    msg.setSourceEntity(32U);
    msg.setDestination(1537U);
    msg.setDestinationEntity(131U);
    msg.validity = 76U;
    msg.x = 0.1300632723789873;
    msg.y = 0.32833165271849996;
    msg.z = 0.17729534704205308;

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
    msg.setTimeStamp(0.476766991309147);
    msg.setSource(30706U);
    msg.setSourceEntity(166U);
    msg.setDestination(4188U);
    msg.setDestinationEntity(132U);
    msg.validity = 210U;
    msg.x = 0.5828978911441913;
    msg.y = 0.6703218912567047;
    msg.z = 0.22663793530535725;

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
    msg.setTimeStamp(0.3517308277366935);
    msg.setSource(62971U);
    msg.setSourceEntity(55U);
    msg.setDestination(51242U);
    msg.setDestinationEntity(195U);
    msg.validity = 163U;
    msg.x = 0.7721025990271638;
    msg.y = 0.9521252958044859;
    msg.z = 0.4866144910433867;

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
    msg.setTimeStamp(0.28149907947282193);
    msg.setSource(1856U);
    msg.setSourceEntity(115U);
    msg.setDestination(37744U);
    msg.setDestinationEntity(4U);
    msg.validity = 173U;
    msg.x = 0.43789532722923175;
    msg.y = 0.34114327311657255;
    msg.z = 0.15082544146808063;

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
    msg.setTimeStamp(0.13839213816572093);
    msg.setSource(10685U);
    msg.setSourceEntity(154U);
    msg.setDestination(14671U);
    msg.setDestinationEntity(107U);
    msg.validity = 8U;
    msg.x = 0.5634867229653446;
    msg.y = 0.04260050095838619;
    msg.z = 0.02436854246339759;

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
    msg.setTimeStamp(0.23722559780599473);
    msg.setSource(25306U);
    msg.setSourceEntity(23U);
    msg.setDestination(9935U);
    msg.setDestinationEntity(115U);
    msg.validity = 88U;
    msg.x = 0.14815082415472225;
    msg.y = 0.6568632290928507;
    msg.z = 0.9560120348191924;

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
    msg.setTimeStamp(0.8914115583069558);
    msg.setSource(39163U);
    msg.setSourceEntity(59U);
    msg.setDestination(13155U);
    msg.setDestinationEntity(96U);
    msg.time = 0.0041281524503224976;
    msg.x = 0.4871267627151298;
    msg.y = 0.7312546348916337;
    msg.z = 0.41185369446386433;

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
    msg.setTimeStamp(0.6642954286845332);
    msg.setSource(58141U);
    msg.setSourceEntity(245U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(84U);
    msg.time = 0.1979799678175045;
    msg.x = 0.5226704514811764;
    msg.y = 0.05671953663388418;
    msg.z = 0.23325666266476153;

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
    msg.setTimeStamp(0.3400205336880232);
    msg.setSource(60387U);
    msg.setSourceEntity(163U);
    msg.setDestination(36779U);
    msg.setDestinationEntity(42U);
    msg.time = 0.3465095202055677;
    msg.x = 0.7976523344469894;
    msg.y = 0.509693180085493;
    msg.z = 0.4550866088547917;

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
    msg.setTimeStamp(0.37918176169779827);
    msg.setSource(41379U);
    msg.setSourceEntity(64U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(53U);
    msg.validity = 250U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8148094676820201;
    tmp_msg_0.beam_height = 0.7857091819353481;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.40139157154518856;

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
    msg.setTimeStamp(0.7029677594129162);
    msg.setSource(36564U);
    msg.setSourceEntity(227U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(180U);
    msg.validity = 45U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6160604721557923;
    tmp_msg_0.beam_height = 0.715843395299486;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8708389782841226;

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
    msg.setTimeStamp(0.1089671579624506);
    msg.setSource(58989U);
    msg.setSourceEntity(162U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(193U);
    msg.validity = 167U;
    msg.value = 0.6692986461204752;

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
    msg.setTimeStamp(0.13131068306233462);
    msg.setSource(13518U);
    msg.setSourceEntity(217U);
    msg.setDestination(11821U);
    msg.setDestinationEntity(53U);
    msg.value = 0.6253925885012521;

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
    msg.setTimeStamp(0.4153829182994644);
    msg.setSource(58685U);
    msg.setSourceEntity(247U);
    msg.setDestination(60511U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5932448158989966;

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
    msg.setTimeStamp(0.3156822342415766);
    msg.setSource(19080U);
    msg.setSourceEntity(173U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(208U);
    msg.value = 0.849327703070433;

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
    msg.setTimeStamp(0.8069979165158232);
    msg.setSource(19451U);
    msg.setSourceEntity(17U);
    msg.setDestination(8615U);
    msg.setDestinationEntity(137U);
    msg.value = 0.931645479015261;

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
    msg.setTimeStamp(0.4542241270136914);
    msg.setSource(11217U);
    msg.setSourceEntity(16U);
    msg.setDestination(27907U);
    msg.setDestinationEntity(251U);
    msg.value = 0.6065574132547881;

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
    msg.setTimeStamp(0.9071331601847498);
    msg.setSource(13327U);
    msg.setSourceEntity(94U);
    msg.setDestination(64074U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4412339307031965;

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
    msg.setTimeStamp(0.8080685962928812);
    msg.setSource(19849U);
    msg.setSourceEntity(186U);
    msg.setDestination(22943U);
    msg.setDestinationEntity(118U);
    msg.value = 0.3209372188183365;

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
    msg.setTimeStamp(0.15924513204995694);
    msg.setSource(27527U);
    msg.setSourceEntity(113U);
    msg.setDestination(23960U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8315195402897809;

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
    msg.setTimeStamp(0.09383579581115109);
    msg.setSource(36031U);
    msg.setSourceEntity(186U);
    msg.setDestination(33330U);
    msg.setDestinationEntity(65U);
    msg.value = 0.22767666775500628;

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
    msg.setTimeStamp(0.30313012285524776);
    msg.setSource(18045U);
    msg.setSourceEntity(225U);
    msg.setDestination(9730U);
    msg.setDestinationEntity(1U);
    msg.value = 0.9565103623659247;

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
    msg.setTimeStamp(0.5936835130520197);
    msg.setSource(44264U);
    msg.setSourceEntity(67U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(170U);
    msg.value = 0.31403847844046195;

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
    msg.setTimeStamp(0.8061642129933243);
    msg.setSource(15408U);
    msg.setSourceEntity(63U);
    msg.setDestination(20046U);
    msg.setDestinationEntity(233U);
    msg.value = 0.3075426372267984;

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
    msg.setTimeStamp(0.9787860257082744);
    msg.setSource(49834U);
    msg.setSourceEntity(78U);
    msg.setDestination(3717U);
    msg.setDestinationEntity(87U);
    msg.value = 0.6758667241237516;

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
    msg.setTimeStamp(0.8569461543766745);
    msg.setSource(41061U);
    msg.setSourceEntity(187U);
    msg.setDestination(47412U);
    msg.setDestinationEntity(102U);
    msg.value = 0.8937123259027674;

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
    msg.setTimeStamp(0.29983214775903566);
    msg.setSource(54067U);
    msg.setSourceEntity(112U);
    msg.setDestination(59204U);
    msg.setDestinationEntity(118U);
    msg.value = 0.7804844245932774;

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
    msg.setTimeStamp(0.7276194800928839);
    msg.setSource(22458U);
    msg.setSourceEntity(129U);
    msg.setDestination(54808U);
    msg.setDestinationEntity(124U);
    msg.value = 0.1420748584980961;

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
    msg.setTimeStamp(0.7617974128214666);
    msg.setSource(63638U);
    msg.setSourceEntity(158U);
    msg.setDestination(10470U);
    msg.setDestinationEntity(224U);
    msg.value = 0.6917323354976127;

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
    msg.setTimeStamp(0.2511219904361728);
    msg.setSource(8044U);
    msg.setSourceEntity(24U);
    msg.setDestination(15832U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5712011895983262;

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
    msg.setTimeStamp(0.5399885400006929);
    msg.setSource(44678U);
    msg.setSourceEntity(107U);
    msg.setDestination(33525U);
    msg.setDestinationEntity(216U);
    msg.value = 0.8490881309774595;

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
    msg.setTimeStamp(0.1645552522715933);
    msg.setSource(17681U);
    msg.setSourceEntity(140U);
    msg.setDestination(17965U);
    msg.setDestinationEntity(87U);
    msg.value = 0.3106449871146172;

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
    msg.setTimeStamp(0.18625166918730995);
    msg.setSource(46910U);
    msg.setSourceEntity(32U);
    msg.setDestination(4970U);
    msg.setDestinationEntity(216U);
    msg.value = 0.8993042226025624;

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
    msg.setTimeStamp(0.788090463196935);
    msg.setSource(9654U);
    msg.setSourceEntity(125U);
    msg.setDestination(15180U);
    msg.setDestinationEntity(63U);
    msg.value = 0.2863788089376459;

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
    msg.setTimeStamp(0.6774520222841173);
    msg.setSource(29062U);
    msg.setSourceEntity(134U);
    msg.setDestination(13504U);
    msg.setDestinationEntity(73U);
    msg.value = 0.8983709569617545;

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
    msg.setTimeStamp(0.3704118300266761);
    msg.setSource(1899U);
    msg.setSourceEntity(100U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(135U);
    msg.value = 0.294690789517396;

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
    msg.setTimeStamp(0.5275002240270779);
    msg.setSource(24321U);
    msg.setSourceEntity(221U);
    msg.setDestination(5099U);
    msg.setDestinationEntity(170U);
    msg.direction = 0.39529804286538517;
    msg.speed = 0.8797655981263776;
    msg.turbulence = 0.9834541050299365;

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
    msg.setTimeStamp(0.8321179960361366);
    msg.setSource(61947U);
    msg.setSourceEntity(52U);
    msg.setDestination(44604U);
    msg.setDestinationEntity(192U);
    msg.direction = 0.09269053995746013;
    msg.speed = 0.5463569677653398;
    msg.turbulence = 0.4696760724605157;

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
    msg.setTimeStamp(0.5625486543584417);
    msg.setSource(62467U);
    msg.setSourceEntity(93U);
    msg.setDestination(62368U);
    msg.setDestinationEntity(41U);
    msg.direction = 0.02761909799651996;
    msg.speed = 0.7434080300507468;
    msg.turbulence = 0.39982973734908944;

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
    msg.setTimeStamp(0.3570909921090111);
    msg.setSource(53859U);
    msg.setSourceEntity(234U);
    msg.setDestination(46602U);
    msg.setDestinationEntity(205U);
    msg.value = 0.011495591028675367;

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
    msg.setTimeStamp(0.8764060720435114);
    msg.setSource(10264U);
    msg.setSourceEntity(130U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(119U);
    msg.value = 0.9641978092143547;

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
    msg.setTimeStamp(0.20199724743321756);
    msg.setSource(24592U);
    msg.setSourceEntity(176U);
    msg.setDestination(15269U);
    msg.setDestinationEntity(27U);
    msg.value = 0.2208988660729646;

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
    msg.setTimeStamp(0.6435703189244255);
    msg.setSource(54712U);
    msg.setSourceEntity(60U);
    msg.setDestination(29106U);
    msg.setDestinationEntity(29U);
    msg.value.assign("UNQAMNLGODORHLSTSFFMFJBUNJJPAALIVPFVEZPXQWXQYIEVWKUVDBXGDHJCJTYOIZVUTQTALSXBVEYYGSLACXCRRPKQIKRSKOXHNNTRBGHFKISNGCEOLVULBUFNCJAZCZABKYH");

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
    msg.setTimeStamp(0.4817416949055793);
    msg.setSource(20599U);
    msg.setSourceEntity(185U);
    msg.setDestination(2354U);
    msg.setDestinationEntity(100U);
    msg.value.assign("WTJYLEIFOCRCQLFNHEFHWCDJEOQM");

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
    msg.setTimeStamp(0.9361347072415753);
    msg.setSource(38351U);
    msg.setSourceEntity(188U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(50U);
    msg.value.assign("YTELHKSNZFFVLEVNEMIERTKGGCPICVHFZZHANPMVRBFGTILXYNTIYYOBRCUIXASIQDSJZCAIQZLSUQOLDMPGGWDYHPBZSJSNCULCNUPDKWXCQMQNWJUXWUXMYTKJH");

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
    msg.setTimeStamp(0.5377369976480904);
    msg.setSource(32647U);
    msg.setSourceEntity(21U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {-19, -68, -85, 17, -75, -19, 22, -107, 124, -4, -18, -81, -57, -99, 14, -52, -53, -30, 16, 47, 45, 112, -53, 33, -95, -102, -125, -67, -116, 84, 68, -105, -4, -53, 122, -7, 37, -89, 46, -58, -53, -110, 40, 1, 27, -72, 68, 101, -28, 27, 116, -81, 12, -60, -29, -5, -44, 67, 45, 88, 16, -55, 102, -63, 42, 23, -40, 81, -63, -38, 7, -43, 46, 72, 68, -9, -121, -26, -86, 115, 71, 17, -52, -12, 97, 15, -77, 95, -67, 124, -99, -111, -47, -100, -105, -102, -128, -86, -106, -83, -54, -3, -63, 118, 62, 45, 47, -84, 83, 112, 2, -49, -15, -85, 14, 39, 6, -79, -58, 25, -102, -45, 100, -58, -86, 36, 45, 126, -40, -108, -62, 20, 52, -117, 40, -56, -25, 108, -48, -6, -84, -78, -50, 101, 34, 87, 35, 3, 42, -123, -5, -63, -113, 17, -51, -67, -7, 43, -67, -67, 115, 121, 105, 18, 44, 75, 82, 24, -55, 3, -18, -36, -75, 103, 33, 20, 66, 86, 86, 99, -70, 77, -51, -126, 43, 124, 74, -123, 82, 109, -111, -4, -7, 112, -106, 74, -103, 60, 28, -41, 78, -32, 105, -42};
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
    msg.setTimeStamp(0.48823726722880534);
    msg.setSource(26936U);
    msg.setSourceEntity(48U);
    msg.setDestination(59262U);
    msg.setDestinationEntity(218U);
    const char tmp_msg_0[] = {50, 48, -116, 117, -72, -62, -65, -45, 80, 47, -127, 84, -93, 20, 90, -116, -104, 107, -58, -7, -92, -85, -8, 120, 113, -40, 94, -112, 11, -14, -58, -5, 38, -88, 91, -26, -54, -72, -2, 16, -99, 92, 4, -47, 59, -27, 41, -101, 79, -44, -78, -63, 34, 52, -38, 15, 99, -101, -93, 48, -5, -46, 6, -47, -25, 79, 42, 59, -77, -25, 107, -76, -106, -95, -71, -54, -86, -21, -114, 4, 90, 95, 88, 24, 0, 11, 4, 96, -58, 12, -39, 15, 76, -113, -108, -80, -58, 77, -65, 49, -104, 82, 69, -103, 121, 21, -13, 84, -54, -51, 30, 99, -80, 101, -43, 103, 17, 2, -16, -18, 49, -18, -41, -10, -42, -22, -9, 26, 39, -114, -121, -47, 80, 20, 4, 92, 70, -78, 42, 51, -5, 102, 69, -14, 41, 32, -11, 91, 103, -116, -29, 109, 104, 25, -59, 64, -125, 113, -114, -114, -95, 112, 50, 55, 100, 50, -12, -66, -17, 45, 44, -26, 111, 52, -64, -88, 70, 78, -4, -73, -78, 4, 65};
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
    msg.setTimeStamp(0.7416211019026564);
    msg.setSource(55919U);
    msg.setSourceEntity(242U);
    msg.setDestination(49803U);
    msg.setDestinationEntity(63U);
    const char tmp_msg_0[] = {-45, 88, -19, -106, -39, 77, 77, 116, -49, -88, 2, 104, 55, -127, -21, -37, 13, 2, -104, 1, 108, 28, -44, 123, 117, 89, -126, -106, 45, 56, 41, -68, -56, 7, -68, -97, -43, -90, 61, 94, 21, -97, -51, 112, 60, 24, -104, 88, -66, -96, 7, 119, -114, -23, 77, -48, -123, -62, -53, 61, 103, -18, -79, -45, -118, 111, -80, -67, -61, -120, 16, -15, -47, -102, 79, -31, -59, 53, 57, -15, 103, 0, 15, -88, 90, 24, -28, 57, 10, 109, -72, 92, -124, 11, -125, -89, 75, -6, 76, 75, -46, -33, -123, 36, -27, -118, 56, 96, 110, 91, -121, 30, 70, 22, 41, -12, -126, 36, -72, 9, 54, 14, 125, -20, -109, 89, -87, 96, 68, -74, 49, -97, -127, 65, -95, 106, 110, 86, 84, -65, 107, 71, 76, 58, -62, 94, 71, -100, -31, -124, 71, -39, -61, 123, -59, -3, -126, -12, 21, -41, -35};
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
    msg.setTimeStamp(0.6615782647530221);
    msg.setSource(43855U);
    msg.setSourceEntity(163U);
    msg.setDestination(18556U);
    msg.setDestinationEntity(68U);
    msg.type = 12U;
    msg.frequency = 762218662U;
    msg.min_range = 55552U;
    msg.max_range = 61627U;
    msg.bits_per_point = 128U;
    msg.scale_factor = 0.13199078859850222;
    const char tmp_msg_0[] = {107, 22, -31, -6, 115, -52, -59, 124, -106, 97, 56, -46, -63, -77, 30, 110, 29, 24, 54, 69, 60, 120, 121, -100, 86, -110, -79, 31, -50, 110, -97, 34, -16, 92, -67, 111, 38, 122, -121, 100, -53, 62, -82, 56, -8, 38, 26, 36, 90, 10, -115, -54, 96, 21, -119, -117, 81, -71, -54, 120, 104, 108, 118, 104, 98, 6, -31, 113, -25, 103, 70, 97, -98, -78, 30, 84, -23, -68, -60, -128, 70, 97, 96, 70, -96, 123, 57, 0, -34, -88, -127, -73, 13, 18, 53, -108, 103, 121, 55, -96, -115, 112, -106, 95, 118, -3, -128, -103, 79, -46, -17, -111, -15, -104, 75, 57, -119, -19, 20, 47, 87, 112, -96, -10, -10, -125, -13, 48, 58, -92, -38, 22, 38, 110, 30, 124, -125, 68, -53, 66, -18, 40, 111, -25, 72, 82, 79, 62, -107, -124, -74, -3, 94, 64, -31, -85, 3, -61, -51, -33, -48, 125, -38, 99, -105, 46, 53, -99, 7, -78, 106, -32, 77, -95, -12, -48, 33, -55, -52, 28, 101, 93, 68, 20, 104, -78, -8, 32, -122, 52, 45, 90, 22, 72, -74, -126, -88, 20, -96, 96, 32, 12, -99, 74, 91, 80, -87, 63, -36, -82, 31, -114};
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
    msg.setTimeStamp(0.4240352626766801);
    msg.setSource(55517U);
    msg.setSourceEntity(10U);
    msg.setDestination(21469U);
    msg.setDestinationEntity(163U);
    msg.type = 47U;
    msg.frequency = 656863846U;
    msg.min_range = 21958U;
    msg.max_range = 50135U;
    msg.bits_per_point = 210U;
    msg.scale_factor = 0.5813322138842582;
    const char tmp_msg_0[] = {27, 9, -26, -86, 88, -84, -57, 76, -100, -93, -69, -102, -87, -27, -74, -91, -63, 100, 93, 1, 1, 114, 31, -111, 71, -35, 112, -76, 126, 63, 5, 106, 6, 75, 8, 46, -90, -43, 71, -111, -100, -51, 56, -29, 101, -61, 92, -120, -81, 45, -79, -75, -37, 28, 95, -14, -66, 90, -53, -97, -122, -17, 31, -55, -110, -71, -106, 36, 60, 115, -71, -121, 26, -74, -37, 124, -1, 6, -70, -50, -67, 47, -100, -114, 58, 74, 99, -8, 21, -119, 39, 92, 76, -106, -94, -12, -5, -102, 32, 31, 107, 119, 35, 11, -79, 116, -70, 109, -27, -26, 95, 26, 72, 99, -63, 51, 70, 112, 91, 104, -74, -103, 123, 123, 55, 0, 4, -114, 22, -5, -123, 116, -108, 116, 96, -68, 125, 108, -120, -78, 37, -32, -120, -56, 24, 83, -103, 39, 58, 9, 26, -74, 77, -127, -124, 88, 123, -119, 107, -59, -20, -29, 101, -120, -29, 91, -60, 18, -59, 74, 119, -5, -54, 1, 57, -92, 53, -50, 62, 68, 79, 84, 62, 112, 41, 59, 105, -89, 68, 7, -39, -105, -123, -116, -89, -47, 1, 41, -118, -31, 18, 85, 4, -33, -59, 92, -37, 113, -48, -42, -52, -50, -68, 71, 12, 107, 93, 51, 126, 16, -66, -42, 3, -54, -75, -67, 1, 51, -5, 62, 31, -84, -25, -36, -50, -81, 32, -103, 48, 97, 52, 12, -93, -60, -80, -52};
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
    msg.setTimeStamp(0.5914020223035494);
    msg.setSource(25156U);
    msg.setSourceEntity(72U);
    msg.setDestination(32945U);
    msg.setDestinationEntity(138U);
    msg.type = 227U;
    msg.frequency = 2255928047U;
    msg.min_range = 9581U;
    msg.max_range = 26824U;
    msg.bits_per_point = 11U;
    msg.scale_factor = 0.1801167402480014;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2808114940258105;
    tmp_msg_0.beam_height = 0.5434326731033813;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-67, 32, -6, 21, -114, -6, 124, 61, 35, 48, 12, 16, -93, -47, -23, 88, 39, -102, -61, -95, 87, -84, 102, 30, 69, -26, 54, 37, 59, 1, -75, 53, -8, 4, -67, 42, -64, 35, 35, 71, -48, 90, -114, 73, -65};
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
    msg.setTimeStamp(0.3650026233348437);
    msg.setSource(23939U);
    msg.setSourceEntity(226U);
    msg.setDestination(59927U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.7065472422545583);
    msg.setSource(42325U);
    msg.setSourceEntity(216U);
    msg.setDestination(2345U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.45922516278948566);
    msg.setSource(44787U);
    msg.setSourceEntity(45U);
    msg.setDestination(3355U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.1444447671506709);
    msg.setSource(27625U);
    msg.setSourceEntity(227U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(102U);
    msg.op = 225U;

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
    msg.setTimeStamp(0.8456351913299835);
    msg.setSource(23426U);
    msg.setSourceEntity(221U);
    msg.setDestination(62499U);
    msg.setDestinationEntity(55U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.880876100859755);
    msg.setSource(61468U);
    msg.setSourceEntity(254U);
    msg.setDestination(35590U);
    msg.setDestinationEntity(25U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.21890654389595277);
    msg.setSource(54686U);
    msg.setSourceEntity(173U);
    msg.setDestination(11751U);
    msg.setDestinationEntity(130U);
    msg.value = 0.6104654528948531;
    msg.confidence = 0.047708851863040524;
    msg.opmodes.assign("YAWTNEILSDDCZHQYFUXPEJJ");

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
    msg.setTimeStamp(0.8553009472038088);
    msg.setSource(42431U);
    msg.setSourceEntity(222U);
    msg.setDestination(51322U);
    msg.setDestinationEntity(19U);
    msg.value = 0.19979361736767187;
    msg.confidence = 0.8940581767869882;
    msg.opmodes.assign("OYKJAJZOBPGPQSTQFBJIDPQXCUNNJTWEKXAUDFWXGGIWQFHOUMIKIMHJTJNAVLLYEVDVHFYVCWAKRRMGNLJBAQCETZLIIMRBBCFXEEQHUZDXHDDLNLEYKZPJVWIMYOVPKJLUPQMRKRCKLZASYCWHNXUMTQMMVEAFSHDIFSAPBUOYHBPDCKR");

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
    msg.setTimeStamp(0.07582866090652596);
    msg.setSource(19043U);
    msg.setSourceEntity(60U);
    msg.setDestination(2263U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9850137036832207;
    msg.confidence = 0.016603320113288356;
    msg.opmodes.assign("WSKQNJLEKKXNZOFWUTULLCAGZLIMMETHTKUPCDTGAVBMWZLOUITHHPSEFGVYCVMYZSCBMMENPXUXPYKSQJQYPBADZFSLZBWSOHUHCJQRRKRQRCHDDWPBTSYAGYEGLYODFXMINWMVQHBMLURAIAQUUGXCOTFYNAZVIEBBIHADIFYDFCXZROLGQOQIXGWCGRBJNMVREDAEVRWNAXJTIODKRBWEQPZIHKTXPZJWPUVJVXFCJDYFSSOENKG");

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
    msg.setTimeStamp(0.41886729534815426);
    msg.setSource(43674U);
    msg.setSourceEntity(181U);
    msg.setDestination(63836U);
    msg.setDestinationEntity(25U);
    msg.itow = 3408733924U;
    msg.lat = 0.1859882901207559;
    msg.lon = 0.047399459235843544;
    msg.height_ell = 0.6755791783958799;
    msg.height_sea = 0.03688955594674115;
    msg.hacc = 0.4571069833960698;
    msg.vacc = 0.07103762403687075;
    msg.vel_n = 0.09758229125347817;
    msg.vel_e = 0.9608796474255868;
    msg.vel_d = 0.9608608360066476;
    msg.speed = 0.28481058683469007;
    msg.gspeed = 0.2109508986601185;
    msg.heading = 0.5720832871974723;
    msg.sacc = 0.25201520973711256;
    msg.cacc = 0.5953605923951384;

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
    msg.setTimeStamp(0.6918289259076839);
    msg.setSource(3889U);
    msg.setSourceEntity(141U);
    msg.setDestination(16082U);
    msg.setDestinationEntity(64U);
    msg.itow = 2648932024U;
    msg.lat = 0.5500398016103422;
    msg.lon = 0.8431981794763609;
    msg.height_ell = 0.6660464395041104;
    msg.height_sea = 0.7678580074750743;
    msg.hacc = 0.6548426678602581;
    msg.vacc = 0.39388799969002897;
    msg.vel_n = 0.646530757474699;
    msg.vel_e = 0.3575408322565439;
    msg.vel_d = 0.27241767663645267;
    msg.speed = 0.10682201821001103;
    msg.gspeed = 0.48381535194265346;
    msg.heading = 0.6032720378217127;
    msg.sacc = 0.6390401494114151;
    msg.cacc = 0.7298795339315004;

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
    msg.setTimeStamp(0.09547483675264712);
    msg.setSource(71U);
    msg.setSourceEntity(94U);
    msg.setDestination(28467U);
    msg.setDestinationEntity(9U);
    msg.itow = 4130878595U;
    msg.lat = 0.5101432762740105;
    msg.lon = 0.10195538655014025;
    msg.height_ell = 0.3994309012782371;
    msg.height_sea = 0.8100785614831169;
    msg.hacc = 0.6040994204130712;
    msg.vacc = 0.8515102639193871;
    msg.vel_n = 0.7376993058422547;
    msg.vel_e = 0.895088760901065;
    msg.vel_d = 0.9040033800516479;
    msg.speed = 0.24604146258620752;
    msg.gspeed = 0.7608082580413368;
    msg.heading = 0.12120338365944572;
    msg.sacc = 0.27730243709813596;
    msg.cacc = 0.1618926911961509;

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
    msg.setTimeStamp(0.7145819610735265);
    msg.setSource(3395U);
    msg.setSourceEntity(76U);
    msg.setDestination(12803U);
    msg.setDestinationEntity(12U);
    msg.id = 127U;
    msg.value = 0.8268244915851506;

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
    msg.setTimeStamp(0.8093326387582114);
    msg.setSource(40356U);
    msg.setSourceEntity(142U);
    msg.setDestination(40024U);
    msg.setDestinationEntity(76U);
    msg.id = 214U;
    msg.value = 0.6927884633577106;

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
    msg.setTimeStamp(0.6051986715213782);
    msg.setSource(17326U);
    msg.setSourceEntity(240U);
    msg.setDestination(47328U);
    msg.setDestinationEntity(186U);
    msg.id = 208U;
    msg.value = 0.5137336667442796;

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
    msg.setTimeStamp(0.5472510545699881);
    msg.setSource(17094U);
    msg.setSourceEntity(70U);
    msg.setDestination(4789U);
    msg.setDestinationEntity(151U);
    msg.x = 0.5752249467587834;
    msg.y = 0.08340095275075599;
    msg.z = 0.9615239257828513;
    msg.phi = 0.18838984823406202;
    msg.theta = 0.47947115860409517;
    msg.psi = 0.2247055958743095;

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
    msg.setTimeStamp(0.031112527746864793);
    msg.setSource(7964U);
    msg.setSourceEntity(169U);
    msg.setDestination(23398U);
    msg.setDestinationEntity(123U);
    msg.x = 0.2560302859498734;
    msg.y = 0.4156627989711925;
    msg.z = 0.1918487525205096;
    msg.phi = 0.3706295162637092;
    msg.theta = 0.6067919557888236;
    msg.psi = 0.24611479342033316;

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
    msg.setTimeStamp(0.1206020571886175);
    msg.setSource(15740U);
    msg.setSourceEntity(229U);
    msg.setDestination(43612U);
    msg.setDestinationEntity(182U);
    msg.x = 0.7799299661005357;
    msg.y = 0.15216051802682018;
    msg.z = 0.07795900287721114;
    msg.phi = 0.9136637719541959;
    msg.theta = 0.721867441159053;
    msg.psi = 0.7469615306629098;

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
    msg.setTimeStamp(0.41137949585496436);
    msg.setSource(34846U);
    msg.setSourceEntity(167U);
    msg.setDestination(13007U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.5892509381824039;
    msg.beam_height = 0.5666104380035;

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
    msg.setTimeStamp(0.8498633196129195);
    msg.setSource(23957U);
    msg.setSourceEntity(247U);
    msg.setDestination(18462U);
    msg.setDestinationEntity(96U);
    msg.beam_width = 0.6906355747560917;
    msg.beam_height = 0.3163304196976796;

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
    msg.setTimeStamp(0.5557180534744512);
    msg.setSource(40274U);
    msg.setSourceEntity(36U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(159U);
    msg.beam_width = 0.8637667455477377;
    msg.beam_height = 0.45123354923395975;

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
    msg.setTimeStamp(0.3830395322598954);
    msg.setSource(24219U);
    msg.setSourceEntity(43U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(87U);
    msg.sane = 130U;

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
    msg.setTimeStamp(0.49679273581506744);
    msg.setSource(50812U);
    msg.setSourceEntity(27U);
    msg.setDestination(19886U);
    msg.setDestinationEntity(14U);
    msg.sane = 93U;

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
    msg.setTimeStamp(0.7914399820612268);
    msg.setSource(46574U);
    msg.setSourceEntity(127U);
    msg.setDestination(17298U);
    msg.setDestinationEntity(37U);
    msg.sane = 106U;

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
    msg.setTimeStamp(0.9482794735440261);
    msg.setSource(28295U);
    msg.setSourceEntity(171U);
    msg.setDestination(46642U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5378950356631502;

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
    msg.setTimeStamp(0.39315765869129415);
    msg.setSource(32563U);
    msg.setSourceEntity(189U);
    msg.setDestination(2012U);
    msg.setDestinationEntity(135U);
    msg.value = 0.10933951068046921;

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
    msg.setTimeStamp(0.12649984461578812);
    msg.setSource(26177U);
    msg.setSourceEntity(14U);
    msg.setDestination(9662U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5315627244280541;

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
    msg.setTimeStamp(0.9077328194551687);
    msg.setSource(44732U);
    msg.setSourceEntity(38U);
    msg.setDestination(40502U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2549374597487989;

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
    msg.setTimeStamp(0.32646128085378945);
    msg.setSource(60293U);
    msg.setSourceEntity(229U);
    msg.setDestination(37121U);
    msg.setDestinationEntity(147U);
    msg.value = 0.2223644324604016;

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
    msg.setTimeStamp(0.1676329483133132);
    msg.setSource(4541U);
    msg.setSourceEntity(152U);
    msg.setDestination(30020U);
    msg.setDestinationEntity(247U);
    msg.value = 0.5072579587630367;

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
    msg.setTimeStamp(0.9579666106720027);
    msg.setSource(21753U);
    msg.setSourceEntity(63U);
    msg.setDestination(10267U);
    msg.setDestinationEntity(205U);
    msg.value = 0.8444925864249362;

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
    msg.setTimeStamp(0.911158576147812);
    msg.setSource(35963U);
    msg.setSourceEntity(90U);
    msg.setDestination(60714U);
    msg.setDestinationEntity(229U);
    msg.value = 0.259438162342143;

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
    msg.setTimeStamp(0.9911191893165411);
    msg.setSource(13635U);
    msg.setSourceEntity(18U);
    msg.setDestination(56622U);
    msg.setDestinationEntity(110U);
    msg.value = 0.2169517528498529;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.28142413201703886);
    msg.setSource(58065U);
    msg.setSourceEntity(33U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(49U);
    msg.id = 19U;
    msg.zoom = 224U;
    msg.action = 7U;

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
    msg.setTimeStamp(0.6359424494081339);
    msg.setSource(58661U);
    msg.setSourceEntity(202U);
    msg.setDestination(29440U);
    msg.setDestinationEntity(141U);
    msg.id = 176U;
    msg.zoom = 234U;
    msg.action = 149U;

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
    msg.setTimeStamp(0.5612636176036997);
    msg.setSource(42248U);
    msg.setSourceEntity(212U);
    msg.setDestination(28587U);
    msg.setDestinationEntity(120U);
    msg.id = 159U;
    msg.zoom = 172U;
    msg.action = 87U;

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
    msg.setTimeStamp(0.6216704610906025);
    msg.setSource(60938U);
    msg.setSourceEntity(95U);
    msg.setDestination(26549U);
    msg.setDestinationEntity(56U);
    msg.id = 191U;
    msg.value = 0.49168469850946706;

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
    msg.setTimeStamp(0.7303630713973345);
    msg.setSource(55779U);
    msg.setSourceEntity(136U);
    msg.setDestination(5379U);
    msg.setDestinationEntity(244U);
    msg.id = 98U;
    msg.value = 0.31222151960929423;

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
    msg.setTimeStamp(0.04107117339720734);
    msg.setSource(9173U);
    msg.setSourceEntity(55U);
    msg.setDestination(54873U);
    msg.setDestinationEntity(176U);
    msg.id = 34U;
    msg.value = 0.2280651588293109;

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
    msg.setTimeStamp(0.19840742671392786);
    msg.setSource(13728U);
    msg.setSourceEntity(204U);
    msg.setDestination(16854U);
    msg.setDestinationEntity(225U);
    msg.id = 172U;
    msg.value = 0.10016376486963086;

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
    msg.setTimeStamp(0.12808915748193128);
    msg.setSource(17446U);
    msg.setSourceEntity(107U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(20U);
    msg.id = 79U;
    msg.value = 0.33308601397610216;

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
    msg.setTimeStamp(0.1049012448868415);
    msg.setSource(45913U);
    msg.setSourceEntity(43U);
    msg.setDestination(2946U);
    msg.setDestinationEntity(146U);
    msg.id = 91U;
    msg.value = 0.13750239378764373;

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
    msg.setTimeStamp(0.038567887692489644);
    msg.setSource(14219U);
    msg.setSourceEntity(124U);
    msg.setDestination(11530U);
    msg.setDestinationEntity(20U);
    msg.id = 87U;
    msg.angle = 0.5112141937866728;

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
    msg.setTimeStamp(0.018395864888596458);
    msg.setSource(63566U);
    msg.setSourceEntity(3U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(153U);
    msg.id = 155U;
    msg.angle = 0.564459413204223;

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
    msg.setTimeStamp(0.8189589092670719);
    msg.setSource(2616U);
    msg.setSourceEntity(32U);
    msg.setDestination(43109U);
    msg.setDestinationEntity(55U);
    msg.id = 49U;
    msg.angle = 0.7261972036194485;

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
    msg.setTimeStamp(0.7363724821728108);
    msg.setSource(12631U);
    msg.setSourceEntity(217U);
    msg.setDestination(35415U);
    msg.setDestinationEntity(225U);
    msg.op = 177U;
    msg.actions.assign("PPUMRRVLIWTRSYVQOVWBSFOMSKLQNRTBPYAPGOIAOXEQBOXIJQAHVUANUCBUYZTSTUHETDDHTEPSOFDZLQOYWUCXYJWPIYDSJLWHFWZOVCVKAQNSLLFAAHBXCZMHZKFBMCUQPNMHZGXKBAJNILBZSZIPQJDXXEVEGHIHYFDOJTOFMWURBIPAWCMVDCRQBEXMKNFYJWREZQVXAZTKDKMFCLRNRGKSYRDEGYNTGGXGLUIHNUFCGMDCJGSKVTJLNJ");

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
    msg.setTimeStamp(0.367678417658613);
    msg.setSource(59186U);
    msg.setSourceEntity(19U);
    msg.setDestination(61819U);
    msg.setDestinationEntity(103U);
    msg.op = 201U;
    msg.actions.assign("IUXAWVEZKDHODYVIABYPEKIFMGFHOOKWSDOVSYQYTXCKUTHMPO");

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
    msg.setTimeStamp(0.6314034144512154);
    msg.setSource(19938U);
    msg.setSourceEntity(94U);
    msg.setDestination(33232U);
    msg.setDestinationEntity(40U);
    msg.op = 171U;
    msg.actions.assign("JNQXMJHTMKGEBWNEVPJKDKIAWRWOYWQVHGPTUUKRVXJOXAJZNDLEWDWYSIPIGNTTKCDDXUSPXQZYLSOCNULHQLZZPSDTXEJVAJGORPBQFCDQMZVGRZ");

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
    msg.setTimeStamp(0.7721057552619819);
    msg.setSource(11158U);
    msg.setSourceEntity(156U);
    msg.setDestination(57823U);
    msg.setDestinationEntity(23U);
    msg.actions.assign("SHVATVAFPDTSFRKDPGCJOQOVQRBMDCUHMYLCOUBCQDJXNELTALIHRWTRRQBCOFNXGEI");

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
    msg.setTimeStamp(0.45617015460570587);
    msg.setSource(24282U);
    msg.setSourceEntity(141U);
    msg.setDestination(731U);
    msg.setDestinationEntity(133U);
    msg.actions.assign("RXIQGSALWUHSQBHMUQGJCHBAYCJUAINVVDOVZVMELQGZIAEXAHWFACRFDDQTIUIZWAECLGVJMOVJWLTOLFYOO");

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
    msg.setTimeStamp(0.5153522341818311);
    msg.setSource(15036U);
    msg.setSourceEntity(216U);
    msg.setDestination(11714U);
    msg.setDestinationEntity(208U);
    msg.actions.assign("OHEZUOUESXHWADMHGVFQOLINJNOIFHRZHEHEMETDPUXGGRMEZTMPCOYVZXNKXUCBZKKMLNIJZCGSQBCJSVGTFQRSIMAABCZIPAHFSSGLSPDYEGRFBFLNLTUJDKYLXVYJUZIPAWXWIZOJQYUWOPUWOBMVXPNWXVKFMSHTLNDQGQAYYVNKVQWRKBOTCPTQRQWIHLNELSFNCTFAPLKF");

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
    msg.setTimeStamp(0.3811683660469595);
    msg.setSource(32281U);
    msg.setSourceEntity(212U);
    msg.setDestination(53660U);
    msg.setDestinationEntity(2U);
    msg.button = 129U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.5671405209317999);
    msg.setSource(51883U);
    msg.setSourceEntity(14U);
    msg.setDestination(52760U);
    msg.setDestinationEntity(159U);
    msg.button = 91U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.5066719365793625);
    msg.setSource(63476U);
    msg.setSourceEntity(74U);
    msg.setDestination(54407U);
    msg.setDestinationEntity(166U);
    msg.button = 192U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.735009265920709);
    msg.setSource(14772U);
    msg.setSourceEntity(80U);
    msg.setDestination(15629U);
    msg.setDestinationEntity(229U);
    msg.op = 151U;
    msg.text.assign("BDOHVHPYNEYUZPTPNZTVPMACFHDLLXWNGBLJMUHIGPUBYHEVNYKPHZLSAWLQWOJNYSFQOWSIMWKUMFMSYCCLHDXENSEJKR");

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
    msg.setTimeStamp(0.8027769329639788);
    msg.setSource(62524U);
    msg.setSourceEntity(140U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(1U);
    msg.op = 35U;
    msg.text.assign("XVEAPYUJWTXWGWWFXNRRLQOPQMMLQESBVTAEHUEOBCEVLIPQIFHJGKVIZZSAJADZDXMOULZJBHTQSRVXOROCFSVLAOEODNNKEKFCCAURQFAGUTDINDJUNUPIMXBQXAVFDHKZDKYIGCSYYGFPHNHNJVFPSZSMBQCQOQSGXJG");

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
    msg.setTimeStamp(0.1063533334328518);
    msg.setSource(14807U);
    msg.setSourceEntity(193U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(142U);
    msg.op = 72U;
    msg.text.assign("FRWYCUMCVLSXQZZDOZX");

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
    msg.setTimeStamp(0.8925121060464061);
    msg.setSource(24669U);
    msg.setSourceEntity(216U);
    msg.setDestination(36903U);
    msg.setDestinationEntity(197U);
    msg.op = 217U;
    msg.time_remain = 0.03357724445361876;
    msg.sched_time = 0.6704255115344556;

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
    msg.setTimeStamp(0.7585028322701133);
    msg.setSource(56237U);
    msg.setSourceEntity(79U);
    msg.setDestination(56401U);
    msg.setDestinationEntity(195U);
    msg.op = 174U;
    msg.time_remain = 0.26477831967345167;
    msg.sched_time = 0.7816561659845886;

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
    msg.setTimeStamp(0.9701543386516148);
    msg.setSource(616U);
    msg.setSourceEntity(98U);
    msg.setDestination(51512U);
    msg.setDestinationEntity(254U);
    msg.op = 185U;
    msg.time_remain = 0.4632694889343574;
    msg.sched_time = 0.5277232316213194;

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
    msg.setTimeStamp(0.6244791921945755);
    msg.setSource(11330U);
    msg.setSourceEntity(167U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(211U);
    msg.name.assign("AOLFTRTQPBUSXRVCWLIKNFJYRLMMKENMKDPSKMGDTYOIRJBUFPKTTMEWVFAAZVUHSBZNLEDDHCHIRWZOCBPZIICDZWSOZHGLQWEVYXFGUUIDUXCAHXOKMXVJOMFPWVNYVRNKUAQRRGHYIDWQQABONELGABJLBMILDUEXVYXVTJHPYCJUNPRYUZCOQNRXLFGISXSQBZKMAGKBJKNDGQSBHHDCPFAQJAECWSZTTTYZGTCHSEPYWOFSVJJF");
    msg.op = 28U;
    msg.sched_time = 0.31416233500130764;

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
    msg.setTimeStamp(0.13855701018670108);
    msg.setSource(26818U);
    msg.setSourceEntity(103U);
    msg.setDestination(43847U);
    msg.setDestinationEntity(63U);
    msg.name.assign("XLJRXEJMRDNXWKQJEXDICVBYYBMITVBYSBKZFNAPIEWQJZCKAIYUIUFELHELYJZWMTGYKWCPVKSOVPLNMIGOGHFALPGSRUSCLQYUKTBCDAOETUWVBNBENLQAAVUTAJZBMEJZARV");
    msg.op = 132U;
    msg.sched_time = 0.4944183926315132;

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
    msg.setTimeStamp(0.5120687407441786);
    msg.setSource(18741U);
    msg.setSourceEntity(153U);
    msg.setDestination(25149U);
    msg.setDestinationEntity(140U);
    msg.name.assign("IRBTBWBJHWEVHHJRPHRATKYWAAPSEUHFGWIGTPPGMMSMTCV");
    msg.op = 50U;
    msg.sched_time = 0.6535929447264694;

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
    msg.setTimeStamp(0.7945292963896297);
    msg.setSource(33045U);
    msg.setSourceEntity(116U);
    msg.setDestination(56516U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.42357660995140667);
    msg.setSource(61936U);
    msg.setSourceEntity(141U);
    msg.setDestination(52526U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.9099674103951005);
    msg.setSource(44590U);
    msg.setSourceEntity(2U);
    msg.setDestination(48120U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.9935559177287145);
    msg.setSource(52586U);
    msg.setSourceEntity(197U);
    msg.setDestination(22301U);
    msg.setDestinationEntity(56U);
    msg.name.assign("CCFLVBOVXPQRHSUMCGCDBTIPRLWANFBPN");
    msg.state = 252U;

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
    msg.setTimeStamp(0.9571997762075193);
    msg.setSource(30030U);
    msg.setSourceEntity(21U);
    msg.setDestination(16357U);
    msg.setDestinationEntity(91U);
    msg.name.assign("LZMCEKPEMOKZZNCTFIVNHGNWQTLMCBQWFNWLBUFYDZWJKSSYEBVUCOLJWIOHATYPVEKBGAL");
    msg.state = 143U;

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
    msg.setTimeStamp(0.45211080074765053);
    msg.setSource(37183U);
    msg.setSourceEntity(252U);
    msg.setDestination(54507U);
    msg.setDestinationEntity(246U);
    msg.name.assign("CSDOGBPZPFMDCARRVQAXIFGEEXKNKQDKJUGI");
    msg.state = 154U;

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
    msg.setTimeStamp(0.2184336731716361);
    msg.setSource(7567U);
    msg.setSourceEntity(162U);
    msg.setDestination(11886U);
    msg.setDestinationEntity(81U);
    msg.name.assign("ORHPERKZLLSFWKLOTITGVHFKCFPEYJUUUMKBBBNTAQXVXAWOAHKMVQREHIQNZDNRUOHJMQSSKOOSTPTMSHQTERPNKE");
    msg.value = 147U;

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
    msg.setTimeStamp(0.6008672825428811);
    msg.setSource(36414U);
    msg.setSourceEntity(246U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(139U);
    msg.name.assign("BNDOSMXYUKOUXTYFMRTOPTKWCWFQQETWINHCDQSQFEUTASYVXNRZASMOJEHCVZHHTDPNNVWOLCZMBOFWKYEYGKXLZQZUPAIKBCKJIQJWWKQQJRCMGZPPLDNZSRCUJAYVABNRPEJ");
    msg.value = 194U;

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
    msg.setTimeStamp(0.4100513326184867);
    msg.setSource(59813U);
    msg.setSourceEntity(76U);
    msg.setDestination(33272U);
    msg.setDestinationEntity(126U);
    msg.name.assign("ZAGVCRDCZUDYSWAMKHOJOTZHESZAZTIPCUBXMOYRWOVXENCWGEKLNXYXPVFMVLFEMFAIGUQHQJXLLNVEBVLDUARGHGVQQSFKELAOQFMMTNSZFZELABTRZJISKPHBDROVDOXFQKHLPCWJI");
    msg.value = 33U;

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
    msg.setTimeStamp(0.7920030556999134);
    msg.setSource(45988U);
    msg.setSourceEntity(232U);
    msg.setDestination(49839U);
    msg.setDestinationEntity(99U);
    msg.name.assign("RZSWSHSQPPIWULAGVLHSPDEWFWLBKOMQJQRSYFCTBMPTHRTGVOJYBKNMOKFOVMAYRNNAXXTKLLEUXKWHDCDPAG");

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
    msg.setTimeStamp(0.1689326954273236);
    msg.setSource(50814U);
    msg.setSourceEntity(140U);
    msg.setDestination(17678U);
    msg.setDestinationEntity(111U);
    msg.name.assign("MGNWIKCLGSGJOPIVWBOANCAACLGXZMEQPCADBXPPFMTMGPRNKRZPEULRIZWUUWTAQOXJTWRDBKIPFBWKRHNDHUTJKOGOZUTQYTTQGRYYQHKDTQVFNNHGSLVZKNYEOSFYYCUDOMGMHCAVQBLSAXBVKRHMLEJFNMASLSLYBYXBJYHUIEVDIXCHZOXVRRSWFFPISPJVNXJIBMTQEDVHNEUCVFSZEQCZEMSLXBDEDJYAUJDRWOIXGZLKWI");

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
    msg.setTimeStamp(0.732348842942468);
    msg.setSource(42151U);
    msg.setSourceEntity(12U);
    msg.setDestination(7604U);
    msg.setDestinationEntity(146U);
    msg.name.assign("LYULDWKWIWLLZIAJWREHTGOIIFUQTOLZMDJWVYFTVGIMTYDOGBXZUMENJEVIBQBJPEFLCHMANVUZXXMUCGUEDSJASKZSGYKKCZELKTTXIUYRHBIGOVWBFQAHRFSJYVXIUHKKPSSCQASBORENOETWQFRRCZNEJWAAKQMHAST");

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
    msg.setTimeStamp(0.7281800465322551);
    msg.setSource(59614U);
    msg.setSourceEntity(42U);
    msg.setDestination(277U);
    msg.setDestinationEntity(253U);
    msg.name.assign("ULAJITNYCCYLQIQCINVLNDFUEOFXRLGOTIBYZDQEPXJYDASMAXUCXILHSKGCEDJORBYHQGNPPXMWTJGBJMBWQDNFLHAJNJ");
    msg.value = 35U;

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
    msg.setTimeStamp(0.7806770483829525);
    msg.setSource(13012U);
    msg.setSourceEntity(99U);
    msg.setDestination(3661U);
    msg.setDestinationEntity(24U);
    msg.name.assign("KZDFAKDIGLBNQJVUPRECXNRRSZFUGWGBUNCIUQWWJOLMDTJHXRELTNSCPUYTPLPXOQAXSJDXWAEDEDATUFUUZXROVNWYLFEFDQPBTOMRBFBCEMOHABTLVMWEELPBPAKUHOSWYJGZYXYYFKXCSCZZKNFDZ");
    msg.value = 97U;

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
    msg.setTimeStamp(0.6692961251174822);
    msg.setSource(21549U);
    msg.setSourceEntity(72U);
    msg.setDestination(42912U);
    msg.setDestinationEntity(40U);
    msg.name.assign("KGTUBETWINAGSNHJROQZXGNSODQRMCUFDGZUGUGSCSZNKJWCMKYIZFCNMZVQHMMFEOVKQPVDZOKERHMXAVOVSYVXFH");
    msg.value = 214U;

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
    msg.setTimeStamp(0.011647423433354565);
    msg.setSource(65306U);
    msg.setSourceEntity(245U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(143U);
    msg.id = 225U;
    msg.period = 1151378154U;
    msg.duty_cycle = 4110926330U;

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
    msg.setTimeStamp(0.9207031929027478);
    msg.setSource(57703U);
    msg.setSourceEntity(88U);
    msg.setDestination(45132U);
    msg.setDestinationEntity(77U);
    msg.id = 67U;
    msg.period = 2751078419U;
    msg.duty_cycle = 2384667795U;

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
    msg.setTimeStamp(0.12357591485358688);
    msg.setSource(17254U);
    msg.setSourceEntity(82U);
    msg.setDestination(7153U);
    msg.setDestinationEntity(174U);
    msg.id = 141U;
    msg.period = 3057767318U;
    msg.duty_cycle = 3238678610U;

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
    msg.setTimeStamp(0.9469950384592871);
    msg.setSource(10206U);
    msg.setSourceEntity(240U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(94U);
    msg.id = 208U;
    msg.period = 2585104702U;
    msg.duty_cycle = 2968078575U;

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
    msg.setTimeStamp(0.3533309808959456);
    msg.setSource(34611U);
    msg.setSourceEntity(221U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(176U);
    msg.id = 186U;
    msg.period = 3810476749U;
    msg.duty_cycle = 623265649U;

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
    msg.setTimeStamp(0.16001742830470111);
    msg.setSource(38265U);
    msg.setSourceEntity(131U);
    msg.setDestination(23679U);
    msg.setDestinationEntity(230U);
    msg.id = 156U;
    msg.period = 528555437U;
    msg.duty_cycle = 1061654604U;

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
    msg.setTimeStamp(0.2749892706887218);
    msg.setSource(65463U);
    msg.setSourceEntity(136U);
    msg.setDestination(3626U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.6151940761734639;
    msg.lon = 0.6577302452532564;
    msg.height = 0.9815478084105541;
    msg.x = 0.6750976021261909;
    msg.y = 0.20953856575872154;
    msg.z = 0.48908964827916257;
    msg.phi = 0.6578896965024905;
    msg.theta = 0.4258445404339528;
    msg.psi = 0.2867948267084489;
    msg.u = 0.6469869804646817;
    msg.v = 0.03790307152887118;
    msg.w = 0.8384270438630054;
    msg.vx = 0.7074169838525285;
    msg.vy = 0.8432933093377912;
    msg.vz = 0.1785170086104606;
    msg.p = 0.43965420872513017;
    msg.q = 0.8029838342146105;
    msg.r = 0.29340940416594663;
    msg.depth = 0.5614769623967664;
    msg.alt = 0.976110918352973;

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
    msg.setTimeStamp(0.44359574802587187);
    msg.setSource(36478U);
    msg.setSourceEntity(250U);
    msg.setDestination(52907U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.5417511984750223;
    msg.lon = 0.4609185526511347;
    msg.height = 0.7112057303244068;
    msg.x = 0.7434590378465366;
    msg.y = 0.4430637607904254;
    msg.z = 0.056343924156333824;
    msg.phi = 0.9132287085768133;
    msg.theta = 0.8824919727403564;
    msg.psi = 0.9576045084500994;
    msg.u = 0.5360416900016445;
    msg.v = 0.19909790147533868;
    msg.w = 0.12245180333030348;
    msg.vx = 0.344130527211872;
    msg.vy = 0.5966119975266553;
    msg.vz = 0.38278651356229243;
    msg.p = 0.11077027481403812;
    msg.q = 0.8509697460794812;
    msg.r = 0.20016893213631093;
    msg.depth = 0.07137923622974418;
    msg.alt = 0.9580162361940707;

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
    msg.setTimeStamp(0.34897204637396506);
    msg.setSource(41185U);
    msg.setSourceEntity(239U);
    msg.setDestination(43199U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.028393080142014582;
    msg.lon = 0.814268530218398;
    msg.height = 0.7132712613216918;
    msg.x = 0.7501802901332839;
    msg.y = 0.7291615072657738;
    msg.z = 0.653148525239008;
    msg.phi = 0.4303839871189782;
    msg.theta = 0.5408373877347066;
    msg.psi = 0.1872846261668044;
    msg.u = 0.5518429548320645;
    msg.v = 0.30402300174088914;
    msg.w = 0.42437315430031564;
    msg.vx = 0.7870216072126681;
    msg.vy = 0.3300616272089396;
    msg.vz = 0.4640934534690757;
    msg.p = 0.7826849696134156;
    msg.q = 0.46128193036464094;
    msg.r = 0.4248041748174378;
    msg.depth = 0.6630379875666496;
    msg.alt = 0.28977931052609707;

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
    msg.setTimeStamp(0.4614487582050847);
    msg.setSource(7479U);
    msg.setSourceEntity(55U);
    msg.setDestination(22397U);
    msg.setDestinationEntity(137U);
    msg.x = 0.9080778841893675;
    msg.y = 0.19107387561094247;
    msg.z = 0.313163926033881;

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
    msg.setTimeStamp(0.34508639627019777);
    msg.setSource(53523U);
    msg.setSourceEntity(197U);
    msg.setDestination(26018U);
    msg.setDestinationEntity(251U);
    msg.x = 0.40024297056074065;
    msg.y = 0.2861432815959454;
    msg.z = 0.3214862823910999;

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
    msg.setTimeStamp(0.13959880113061884);
    msg.setSource(22569U);
    msg.setSourceEntity(166U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(149U);
    msg.x = 0.3374878162121199;
    msg.y = 0.29945936722006505;
    msg.z = 0.00127900989802332;

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
    msg.setTimeStamp(0.7614955113549159);
    msg.setSource(52972U);
    msg.setSourceEntity(141U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(109U);
    msg.value = 0.41808293840033806;

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
    msg.setTimeStamp(0.3408304073316627);
    msg.setSource(31286U);
    msg.setSourceEntity(253U);
    msg.setDestination(20743U);
    msg.setDestinationEntity(165U);
    msg.value = 0.3416867904015142;

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
    msg.setTimeStamp(0.6669802853630226);
    msg.setSource(30937U);
    msg.setSourceEntity(95U);
    msg.setDestination(40577U);
    msg.setDestinationEntity(14U);
    msg.value = 0.13722685833618098;

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
    msg.setTimeStamp(0.697592249246453);
    msg.setSource(62310U);
    msg.setSourceEntity(209U);
    msg.setDestination(63137U);
    msg.setDestinationEntity(102U);
    msg.value = 0.2127305515581681;

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
    msg.setTimeStamp(0.7517693121535899);
    msg.setSource(21450U);
    msg.setSourceEntity(155U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(143U);
    msg.value = 0.0594990343507239;

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
    msg.setTimeStamp(0.4449752910016148);
    msg.setSource(40617U);
    msg.setSourceEntity(202U);
    msg.setDestination(63834U);
    msg.setDestinationEntity(184U);
    msg.value = 0.12396146860400048;

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
    msg.setTimeStamp(0.05251359043114301);
    msg.setSource(34508U);
    msg.setSourceEntity(62U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(39U);
    msg.x = 0.5946682974901647;
    msg.y = 0.9076557156618495;
    msg.z = 0.5694204602920521;
    msg.phi = 0.37239961241884956;
    msg.theta = 0.5688573182244687;
    msg.psi = 0.5756728190051004;
    msg.p = 0.24611220201821482;
    msg.q = 0.1990311829510385;
    msg.r = 0.19732929841069413;
    msg.u = 0.29405388731982585;
    msg.v = 0.620931958469328;
    msg.w = 0.535957508736921;
    msg.bias_psi = 0.9442977510872762;
    msg.bias_r = 0.7663396111653208;

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
    msg.setTimeStamp(0.9359677225311311);
    msg.setSource(24254U);
    msg.setSourceEntity(114U);
    msg.setDestination(8740U);
    msg.setDestinationEntity(11U);
    msg.x = 0.47256038608893747;
    msg.y = 0.8599046196610378;
    msg.z = 0.6022426187419649;
    msg.phi = 0.6697020623383244;
    msg.theta = 0.7517902009959122;
    msg.psi = 0.9162972351984511;
    msg.p = 0.45745038388216275;
    msg.q = 0.014002925794268761;
    msg.r = 0.05658606377776587;
    msg.u = 0.8263741352320696;
    msg.v = 0.7144849418909928;
    msg.w = 0.6223163019562133;
    msg.bias_psi = 0.7679301263693015;
    msg.bias_r = 0.600510398151919;

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
    msg.setTimeStamp(0.7941751703957659);
    msg.setSource(46253U);
    msg.setSourceEntity(60U);
    msg.setDestination(50046U);
    msg.setDestinationEntity(111U);
    msg.x = 0.4543754044072643;
    msg.y = 0.10229839021436193;
    msg.z = 0.09767076386948192;
    msg.phi = 0.01785903461295657;
    msg.theta = 0.8840587208946352;
    msg.psi = 0.7755636280539281;
    msg.p = 0.6362808575065887;
    msg.q = 0.15234825852596123;
    msg.r = 0.7905178042232534;
    msg.u = 0.22077135961176064;
    msg.v = 0.9209445274607818;
    msg.w = 0.07125121474445917;
    msg.bias_psi = 0.41280749518179527;
    msg.bias_r = 0.6628744315442453;

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
    msg.setTimeStamp(0.7564101571442631);
    msg.setSource(18929U);
    msg.setSourceEntity(203U);
    msg.setDestination(39113U);
    msg.setDestinationEntity(215U);
    msg.bias_psi = 0.8195143831314363;
    msg.bias_r = 0.2421423394832788;
    msg.cog = 0.2540764616769443;
    msg.cyaw = 0.04125371051050741;
    msg.lbl_rej_level = 0.44855387429517735;
    msg.gps_rej_level = 0.17739892704825744;
    msg.custom_x = 0.1320048502971941;
    msg.custom_y = 0.9032570550254826;
    msg.custom_z = 0.12839752959950845;

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
    msg.setTimeStamp(0.378283585835099);
    msg.setSource(65059U);
    msg.setSourceEntity(120U);
    msg.setDestination(48284U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.836030312237382;
    msg.bias_r = 0.5430328866349208;
    msg.cog = 0.7587294774644183;
    msg.cyaw = 0.6243270122776586;
    msg.lbl_rej_level = 0.2493469002624078;
    msg.gps_rej_level = 0.4811438994353918;
    msg.custom_x = 0.7978431547516083;
    msg.custom_y = 0.29772034870935515;
    msg.custom_z = 0.5824701118912279;

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
    msg.setTimeStamp(0.16505711131667367);
    msg.setSource(54909U);
    msg.setSourceEntity(122U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(139U);
    msg.bias_psi = 0.47910593960799797;
    msg.bias_r = 0.310194394545522;
    msg.cog = 0.14583827220859602;
    msg.cyaw = 0.9280263977325075;
    msg.lbl_rej_level = 0.5966069169309511;
    msg.gps_rej_level = 0.031025154281132283;
    msg.custom_x = 0.43231294902941075;
    msg.custom_y = 0.1995774138533185;
    msg.custom_z = 0.8843748967515418;

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
    msg.setTimeStamp(0.34845694963258955);
    msg.setSource(23494U);
    msg.setSourceEntity(185U);
    msg.setDestination(11890U);
    msg.setDestinationEntity(167U);
    msg.utc_time = 0.5261439161860679;
    msg.reason = 153U;

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
    msg.setTimeStamp(0.720628611835351);
    msg.setSource(30568U);
    msg.setSourceEntity(134U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(91U);
    msg.utc_time = 0.7723620994539647;
    msg.reason = 91U;

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
    msg.setTimeStamp(0.7495478297470435);
    msg.setSource(20161U);
    msg.setSourceEntity(7U);
    msg.setDestination(33964U);
    msg.setDestinationEntity(165U);
    msg.utc_time = 0.2198015571733435;
    msg.reason = 101U;

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
    msg.setTimeStamp(0.8840616660318028);
    msg.setSource(48295U);
    msg.setSourceEntity(120U);
    msg.setDestination(22802U);
    msg.setDestinationEntity(48U);
    msg.id = 180U;
    msg.range = 0.8980069091262823;
    msg.acceptance = 177U;

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
    msg.setTimeStamp(0.75893161083768);
    msg.setSource(16486U);
    msg.setSourceEntity(172U);
    msg.setDestination(21208U);
    msg.setDestinationEntity(142U);
    msg.id = 166U;
    msg.range = 0.22849588934705622;
    msg.acceptance = 108U;

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
    msg.setTimeStamp(0.32913308556640775);
    msg.setSource(13232U);
    msg.setSourceEntity(246U);
    msg.setDestination(16389U);
    msg.setDestinationEntity(9U);
    msg.id = 195U;
    msg.range = 0.43664023903878646;
    msg.acceptance = 128U;

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
    msg.setTimeStamp(0.9132722897908819);
    msg.setSource(35370U);
    msg.setSourceEntity(144U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(80U);
    msg.type = 44U;
    msg.reason = 217U;
    msg.value = 0.9920222329165741;
    msg.timestep = 0.06442509893473192;

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
    msg.setTimeStamp(0.07481843242888686);
    msg.setSource(44089U);
    msg.setSourceEntity(15U);
    msg.setDestination(41281U);
    msg.setDestinationEntity(27U);
    msg.type = 41U;
    msg.reason = 97U;
    msg.value = 0.6222992939852544;
    msg.timestep = 0.87950550022268;

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
    msg.setTimeStamp(0.8011053268949879);
    msg.setSource(59438U);
    msg.setSourceEntity(20U);
    msg.setDestination(8566U);
    msg.setDestinationEntity(135U);
    msg.type = 29U;
    msg.reason = 216U;
    msg.value = 0.2567871243572365;
    msg.timestep = 0.5953118614128677;

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
    msg.setTimeStamp(0.9516546497962861);
    msg.setSource(44671U);
    msg.setSourceEntity(152U);
    msg.setDestination(27748U);
    msg.setDestinationEntity(62U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RCVDZHCNDYYLLZWRSDIZPZRRKHBWROATDVCYKDHYSZPNFPQKULJUJKNNUNRBMFYTTKXXPGHGBXPBAKJPZGNUSVIRLYMHHDQMTGKJLUUGCQTMBRMJFJKQWZVVWUELLSPECSJSPENADUBRHLJCIOGTPANIVZFBQMVTFXIVQCAVSIOOJEALBWIOFGEWKEYQMVSAWPONAHFJYUTMKIAQ");
    tmp_msg_0.lat = 0.7073702719951309;
    tmp_msg_0.lon = 0.2890460078129724;
    tmp_msg_0.depth = 0.5250123625982615;
    tmp_msg_0.query_channel = 44U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 33U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9013016502195916;
    msg.y = 0.29812193317446545;
    msg.var_x = 0.8843947237469312;
    msg.var_y = 0.7291302525380775;
    msg.distance = 0.34602773069300197;

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
    msg.setTimeStamp(0.03715033048867877);
    msg.setSource(16451U);
    msg.setSourceEntity(75U);
    msg.setDestination(23599U);
    msg.setDestinationEntity(16U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XLUSBBMZCGCUMZRPJOBVETEDNOBWVQIFEAVYOGLMAVDLCVHOUPWTZYYUHRWHDKGQDDHRRKNXDQGUME");
    tmp_msg_0.lat = 0.40393940381952387;
    tmp_msg_0.lon = 0.9573628634829404;
    tmp_msg_0.depth = 0.04760601352961569;
    tmp_msg_0.query_channel = 23U;
    tmp_msg_0.reply_channel = 120U;
    tmp_msg_0.transponder_delay = 249U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6100029487956646;
    msg.y = 0.5407538307526654;
    msg.var_x = 0.6608577838850467;
    msg.var_y = 0.32218655563566756;
    msg.distance = 0.6776564490753975;

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
    msg.setTimeStamp(0.5060931810383346);
    msg.setSource(39056U);
    msg.setSourceEntity(92U);
    msg.setDestination(3969U);
    msg.setDestinationEntity(237U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TMYIYYJTUFLLRSKRIHHDRUEHFMJBTHOMSVBIJGMJVV");
    tmp_msg_0.lat = 0.063829738585096;
    tmp_msg_0.lon = 0.7966353087073856;
    tmp_msg_0.depth = 0.3304250054206498;
    tmp_msg_0.query_channel = 188U;
    tmp_msg_0.reply_channel = 200U;
    tmp_msg_0.transponder_delay = 222U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.773677919677484;
    msg.y = 0.2700231135393485;
    msg.var_x = 0.2694974194452071;
    msg.var_y = 0.46896256725742946;
    msg.distance = 0.9019922999835959;

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
    msg.setTimeStamp(0.04696472058166312);
    msg.setSource(33004U);
    msg.setSourceEntity(36U);
    msg.setDestination(55632U);
    msg.setDestinationEntity(84U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.9662493985847704);
    msg.setSource(12775U);
    msg.setSourceEntity(17U);
    msg.setDestination(57460U);
    msg.setDestinationEntity(69U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.027321610697377707);
    msg.setSource(48042U);
    msg.setSourceEntity(161U);
    msg.setDestination(14671U);
    msg.setDestinationEntity(83U);
    msg.state = 231U;

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
    msg.setTimeStamp(0.5987321999359998);
    msg.setSource(61887U);
    msg.setSourceEntity(108U);
    msg.setDestination(42762U);
    msg.setDestinationEntity(35U);
    msg.x = 0.7660948285825755;
    msg.y = 0.4829280502879715;
    msg.z = 0.6891069920088576;

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
    msg.setTimeStamp(0.2135485275935295);
    msg.setSource(21260U);
    msg.setSourceEntity(147U);
    msg.setDestination(62342U);
    msg.setDestinationEntity(186U);
    msg.x = 0.07721557482322061;
    msg.y = 0.6582399880425734;
    msg.z = 0.8778667590092482;

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
    msg.setTimeStamp(0.710164369885673);
    msg.setSource(35091U);
    msg.setSourceEntity(155U);
    msg.setDestination(11985U);
    msg.setDestinationEntity(34U);
    msg.x = 0.40731412838328285;
    msg.y = 0.9917431180343154;
    msg.z = 0.1156770925895867;

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
    msg.setTimeStamp(0.5140188074218915);
    msg.setSource(58558U);
    msg.setSourceEntity(80U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7610565632114833;

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
    msg.setTimeStamp(0.2469874573470997);
    msg.setSource(19742U);
    msg.setSourceEntity(17U);
    msg.setDestination(53047U);
    msg.setDestinationEntity(24U);
    msg.value = 0.2254842440458371;

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
    msg.setTimeStamp(0.2283817569658988);
    msg.setSource(4608U);
    msg.setSourceEntity(139U);
    msg.setDestination(34922U);
    msg.setDestinationEntity(211U);
    msg.value = 0.9949418942777652;

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
    msg.setTimeStamp(0.6233799494775762);
    msg.setSource(16601U);
    msg.setSourceEntity(179U);
    msg.setDestination(8594U);
    msg.setDestinationEntity(109U);
    msg.value = 0.7176338144324946;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.7319493321440543);
    msg.setSource(25432U);
    msg.setSourceEntity(48U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(35U);
    msg.value = 0.6924343557754217;
    msg.z_units = 45U;

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
    msg.setTimeStamp(0.7251613477531313);
    msg.setSource(28341U);
    msg.setSourceEntity(240U);
    msg.setDestination(27783U);
    msg.setDestinationEntity(98U);
    msg.value = 0.3182498026910542;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.510715753727833);
    msg.setSource(50141U);
    msg.setSourceEntity(76U);
    msg.setDestination(37259U);
    msg.setDestinationEntity(95U);
    msg.value = 0.37698513117349985;
    msg.speed_units = 40U;

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
    msg.setTimeStamp(0.5989684009782762);
    msg.setSource(20525U);
    msg.setSourceEntity(78U);
    msg.setDestination(40964U);
    msg.setDestinationEntity(96U);
    msg.value = 0.6595935763934253;
    msg.speed_units = 34U;

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
    msg.setTimeStamp(0.04293430100220941);
    msg.setSource(37877U);
    msg.setSourceEntity(167U);
    msg.setDestination(65377U);
    msg.setDestinationEntity(17U);
    msg.value = 0.02261849608429123;
    msg.speed_units = 0U;

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
    msg.setTimeStamp(0.15946328575667634);
    msg.setSource(34764U);
    msg.setSourceEntity(117U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6011245150872083;

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
    msg.setTimeStamp(0.9957931126088903);
    msg.setSource(1841U);
    msg.setSourceEntity(220U);
    msg.setDestination(43111U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7465206125611112;

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
    msg.setTimeStamp(0.712529859326371);
    msg.setSource(5256U);
    msg.setSourceEntity(123U);
    msg.setDestination(44894U);
    msg.setDestinationEntity(59U);
    msg.value = 0.09570519490161511;

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
    msg.setTimeStamp(0.7175760467147155);
    msg.setSource(21511U);
    msg.setSourceEntity(254U);
    msg.setDestination(26004U);
    msg.setDestinationEntity(149U);
    msg.value = 0.538544522885922;

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
    msg.setTimeStamp(0.21106830567997403);
    msg.setSource(22657U);
    msg.setSourceEntity(3U);
    msg.setDestination(1482U);
    msg.setDestinationEntity(164U);
    msg.value = 0.8541523614834031;

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
    msg.setTimeStamp(0.009035362387304291);
    msg.setSource(53961U);
    msg.setSourceEntity(214U);
    msg.setDestination(40398U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2151432263368861;

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
    msg.setTimeStamp(0.8007071480480883);
    msg.setSource(46198U);
    msg.setSourceEntity(126U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6036131890218199;

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
    msg.setTimeStamp(0.5610320008354812);
    msg.setSource(51594U);
    msg.setSourceEntity(29U);
    msg.setDestination(28497U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8390410086869733;

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
    msg.setTimeStamp(0.6079792290937964);
    msg.setSource(61936U);
    msg.setSourceEntity(141U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(94U);
    msg.value = 0.46227591640230703;

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
    msg.setTimeStamp(0.12469592059488366);
    msg.setSource(32419U);
    msg.setSourceEntity(185U);
    msg.setDestination(19648U);
    msg.setDestinationEntity(151U);
    msg.path_ref = 2786731750U;
    msg.start_lat = 0.8287171136993808;
    msg.start_lon = 0.20416862960058224;
    msg.start_z = 0.8929691037647889;
    msg.start_z_units = 241U;
    msg.end_lat = 0.8539841031449877;
    msg.end_lon = 0.08117676194361956;
    msg.end_z = 0.5655329121222452;
    msg.end_z_units = 53U;
    msg.speed = 0.5525639766423333;
    msg.speed_units = 28U;
    msg.lradius = 0.47098779137075253;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.0340278302169591);
    msg.setSource(62817U);
    msg.setSourceEntity(60U);
    msg.setDestination(22636U);
    msg.setDestinationEntity(101U);
    msg.path_ref = 3813636080U;
    msg.start_lat = 0.6696483038689017;
    msg.start_lon = 0.1803705527852183;
    msg.start_z = 0.5434977698304524;
    msg.start_z_units = 86U;
    msg.end_lat = 0.5215646179658032;
    msg.end_lon = 0.15594474797623714;
    msg.end_z = 0.5181773839206094;
    msg.end_z_units = 162U;
    msg.speed = 0.02944608646737834;
    msg.speed_units = 114U;
    msg.lradius = 0.0165183708263551;
    msg.flags = 122U;

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
    msg.setTimeStamp(0.11380209626320925);
    msg.setSource(2251U);
    msg.setSourceEntity(136U);
    msg.setDestination(50073U);
    msg.setDestinationEntity(74U);
    msg.path_ref = 699574007U;
    msg.start_lat = 0.0930282183322344;
    msg.start_lon = 0.9179585233866666;
    msg.start_z = 0.46878505806145376;
    msg.start_z_units = 184U;
    msg.end_lat = 0.842463043652659;
    msg.end_lon = 0.4147255201896902;
    msg.end_z = 0.8217816382629715;
    msg.end_z_units = 247U;
    msg.speed = 0.770285131009986;
    msg.speed_units = 138U;
    msg.lradius = 0.0286068758559338;
    msg.flags = 219U;

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
    msg.setTimeStamp(0.7176708594939886);
    msg.setSource(23147U);
    msg.setSourceEntity(251U);
    msg.setDestination(7737U);
    msg.setDestinationEntity(229U);
    msg.x = 0.3204036507209481;
    msg.y = 0.31043364886866676;
    msg.z = 0.28990693615840657;
    msg.k = 0.7781147799232432;
    msg.m = 0.42557341270069127;
    msg.n = 0.5822320594676184;
    msg.flags = 124U;

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
    msg.setTimeStamp(0.007773063628053523);
    msg.setSource(33792U);
    msg.setSourceEntity(191U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(16U);
    msg.x = 0.1349711351187577;
    msg.y = 0.22114158673179507;
    msg.z = 0.837284734949933;
    msg.k = 0.6042749421337816;
    msg.m = 0.9219619596576671;
    msg.n = 0.935764740259415;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.13482682720055172);
    msg.setSource(9272U);
    msg.setSourceEntity(110U);
    msg.setDestination(52806U);
    msg.setDestinationEntity(96U);
    msg.x = 0.7248465396077076;
    msg.y = 0.3939655921520713;
    msg.z = 0.9320606883209475;
    msg.k = 0.5746513618988687;
    msg.m = 0.3049766168421405;
    msg.n = 0.38488596355151194;
    msg.flags = 130U;

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
    msg.setTimeStamp(0.49387158960627386);
    msg.setSource(29411U);
    msg.setSourceEntity(64U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5285155270271972;

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
    msg.setTimeStamp(0.5329623231349747);
    msg.setSource(37893U);
    msg.setSourceEntity(150U);
    msg.setDestination(58778U);
    msg.setDestinationEntity(75U);
    msg.value = 0.7869209288214121;

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
    msg.setTimeStamp(0.7805097546726522);
    msg.setSource(27846U);
    msg.setSourceEntity(95U);
    msg.setDestination(60715U);
    msg.setDestinationEntity(203U);
    msg.value = 0.8619160251850461;

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
    msg.setTimeStamp(0.39882203714717535);
    msg.setSource(53784U);
    msg.setSourceEntity(59U);
    msg.setDestination(48420U);
    msg.setDestinationEntity(132U);
    msg.u = 0.49109795928550437;
    msg.v = 0.6251019542013684;
    msg.w = 0.6473965415225023;
    msg.p = 0.920661962111506;
    msg.q = 0.9775225492290995;
    msg.r = 0.06778227299429662;
    msg.flags = 210U;

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
    msg.setTimeStamp(0.10377203605396512);
    msg.setSource(2066U);
    msg.setSourceEntity(196U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(183U);
    msg.u = 0.3096267611146809;
    msg.v = 0.5737659898593409;
    msg.w = 0.3407714589234657;
    msg.p = 0.13477938735734574;
    msg.q = 0.9116889791956981;
    msg.r = 0.226706948068355;
    msg.flags = 35U;

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
    msg.setTimeStamp(0.09212934151956009);
    msg.setSource(1445U);
    msg.setSourceEntity(212U);
    msg.setDestination(16787U);
    msg.setDestinationEntity(85U);
    msg.u = 0.15173289137600543;
    msg.v = 0.4754684696946607;
    msg.w = 0.6872221938354763;
    msg.p = 0.8166827733741252;
    msg.q = 0.28533249499476165;
    msg.r = 0.7003317937070567;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.865698723587234);
    msg.setSource(4238U);
    msg.setSourceEntity(244U);
    msg.setDestination(63420U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 522243062U;
    msg.start_lat = 0.01994495577856903;
    msg.start_lon = 0.8785660977817507;
    msg.start_z = 0.62246298099487;
    msg.start_z_units = 185U;
    msg.end_lat = 0.8576632474984439;
    msg.end_lon = 0.7968609760686439;
    msg.end_z = 0.017036944891517303;
    msg.end_z_units = 249U;
    msg.lradius = 0.6050111996732366;
    msg.flags = 65U;
    msg.x = 0.8312365388613047;
    msg.y = 0.3865135797092355;
    msg.z = 0.6502393631395023;
    msg.vx = 0.7004676466934723;
    msg.vy = 0.596709184777876;
    msg.vz = 0.8975235754136817;
    msg.course_error = 0.6909355159022353;
    msg.eta = 35957U;

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
    msg.setTimeStamp(0.386526501111915);
    msg.setSource(38667U);
    msg.setSourceEntity(39U);
    msg.setDestination(60261U);
    msg.setDestinationEntity(253U);
    msg.path_ref = 2877853732U;
    msg.start_lat = 0.382591263792861;
    msg.start_lon = 0.25367504693470466;
    msg.start_z = 0.6728887437300143;
    msg.start_z_units = 14U;
    msg.end_lat = 0.12718253024033255;
    msg.end_lon = 0.593768441574464;
    msg.end_z = 0.11751096521107862;
    msg.end_z_units = 110U;
    msg.lradius = 0.41245322304733145;
    msg.flags = 213U;
    msg.x = 0.1039624722469954;
    msg.y = 0.5867671755818537;
    msg.z = 0.10321124038448948;
    msg.vx = 0.8483558957988904;
    msg.vy = 0.6303188077561275;
    msg.vz = 0.5877289198420536;
    msg.course_error = 0.8810084758006892;
    msg.eta = 39075U;

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
    msg.setTimeStamp(0.17053390400919166);
    msg.setSource(32533U);
    msg.setSourceEntity(114U);
    msg.setDestination(47152U);
    msg.setDestinationEntity(159U);
    msg.path_ref = 3900226608U;
    msg.start_lat = 0.9938352517274458;
    msg.start_lon = 0.2987676218965426;
    msg.start_z = 0.6115264786959808;
    msg.start_z_units = 201U;
    msg.end_lat = 0.17409153116767428;
    msg.end_lon = 0.253450946918812;
    msg.end_z = 0.05340817680125687;
    msg.end_z_units = 39U;
    msg.lradius = 0.05151987296244842;
    msg.flags = 45U;
    msg.x = 0.5090923460062707;
    msg.y = 0.26735000861833824;
    msg.z = 0.2067450568525383;
    msg.vx = 0.7483648141020507;
    msg.vy = 0.9950816672646753;
    msg.vz = 0.3091897724827338;
    msg.course_error = 0.7352999180345327;
    msg.eta = 20234U;

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
    msg.setTimeStamp(0.8938805438381616);
    msg.setSource(43303U);
    msg.setSourceEntity(18U);
    msg.setDestination(12487U);
    msg.setDestinationEntity(7U);
    msg.k = 0.5497330128318367;
    msg.m = 0.21550734909050762;
    msg.n = 0.5236539572306631;

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
    msg.setTimeStamp(0.09645954049726269);
    msg.setSource(11142U);
    msg.setSourceEntity(129U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(131U);
    msg.k = 0.8571243526796295;
    msg.m = 0.6073831571958916;
    msg.n = 0.2305304043591544;

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
    msg.setTimeStamp(0.956051413515584);
    msg.setSource(10945U);
    msg.setSourceEntity(42U);
    msg.setDestination(42269U);
    msg.setDestinationEntity(99U);
    msg.k = 0.2530176042133965;
    msg.m = 0.6888430555754835;
    msg.n = 0.24073537303362436;

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
    msg.setTimeStamp(0.15367939465232716);
    msg.setSource(58344U);
    msg.setSourceEntity(82U);
    msg.setDestination(32818U);
    msg.setDestinationEntity(182U);
    msg.p = 0.5762219034290484;
    msg.i = 0.8825660631321064;
    msg.d = 0.06702561602309054;
    msg.a = 0.19345003324789778;

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
    msg.setTimeStamp(0.1838596864072528);
    msg.setSource(2026U);
    msg.setSourceEntity(8U);
    msg.setDestination(23925U);
    msg.setDestinationEntity(49U);
    msg.p = 0.6446459285019034;
    msg.i = 0.7817643124373259;
    msg.d = 0.6501881151526857;
    msg.a = 0.515943906459635;

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
    msg.setTimeStamp(0.845245073711711);
    msg.setSource(32621U);
    msg.setSourceEntity(107U);
    msg.setDestination(16116U);
    msg.setDestinationEntity(16U);
    msg.p = 0.14401126197722658;
    msg.i = 0.5913194045818705;
    msg.d = 0.859449169062811;
    msg.a = 0.6373840550951317;

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
    msg.setTimeStamp(0.9985528699571077);
    msg.setSource(21955U);
    msg.setSourceEntity(170U);
    msg.setDestination(49635U);
    msg.setDestinationEntity(211U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.7679469180611194);
    msg.setSource(36238U);
    msg.setSourceEntity(3U);
    msg.setDestination(35875U);
    msg.setDestinationEntity(241U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.3087573748616993);
    msg.setSource(13612U);
    msg.setSourceEntity(59U);
    msg.setDestination(51565U);
    msg.setDestinationEntity(48U);
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
    IMC::Goto msg;
    msg.setTimeStamp(0.9058016323460676);
    msg.setSource(6409U);
    msg.setSourceEntity(3U);
    msg.setDestination(62870U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 3349406917U;
    msg.id.assign("ONLYKQSZJJKOSKWEYCCECMHTFPKHDHJYORZGLBPOJVPUOVKLEITGZWJZADQYBOUKJKMGFOUQBXRZXNRABTFEDMNUWMTSRMWGZB");
    msg.memento.assign("QRAMHHDPPHPCPUZEKJFOEXRLKJPQQWDKEZANDQLGTVMHPVWLENRUHOYCOJAZELGIRDKDTRXSDWMVZSMBITKGQYCFGMCVQAPYIUMKXTVNOLLYIOSYIBTQXTDZKMHQXCWWCNSBFYPTWBUFTKAPUOCU");
    msg.timeout = 50208U;
    msg.lat = 0.6069494802109386;
    msg.lon = 0.7200895597854111;
    msg.z = 0.29665837580698917;
    msg.z_units = 193U;
    msg.speed = 0.07958837642020578;
    msg.speed_units = 179U;
    msg.roll = 0.5085841007422544;
    msg.pitch = 0.804690899656101;
    msg.yaw = 0.32315422399499216;
    msg.custom.assign("AENEUMEZQHBDJWFRXUIBHCOJOFQULRAGNYYXEYUFHWGVEGWKEDLDBMBWIEMTSYATMKAISDLOUKSOZMHLVCNIQWAAYBTJVGIZCJHCMZNXBQCHKJZS");

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
    msg.setTimeStamp(0.3572182340092299);
    msg.setSource(43048U);
    msg.setSourceEntity(139U);
    msg.setDestination(60557U);
    msg.setDestinationEntity(21U);
    msg.plan_ref = 755014000U;
    msg.id.assign("OOWFDOFAZVOUREYRQWECNKEJQKHHFSPOSFGNJYGTMDALYDOSDVZISAJMXFPCWSLZODVHFEIX");
    msg.memento.assign("HZPVGVGQNVSZKXASKHJVATYGFMUNRBUDDGBUWCGBVEHOYSTZJZSTWHZWMBUJVOIRUXLKKGLFYZQDDXEDIRLACEPFLXXMHUPFNBDJYGB");
    msg.timeout = 3494U;
    msg.lat = 0.2684920581628403;
    msg.lon = 0.9147338967640313;
    msg.z = 0.02558111475844438;
    msg.z_units = 235U;
    msg.speed = 0.08079624808308028;
    msg.speed_units = 178U;
    msg.roll = 0.9564885222322645;
    msg.pitch = 0.35166054838431027;
    msg.yaw = 0.6668792582070474;
    msg.custom.assign("FZKDHMALUIOCGYVAZDFNPWJHZNXSCWEZRENCKZZGKJWBILCVLHRPWYSOYFXRBWLALCUMEMNQJIJTPNFFXPMFVWMHKTZAQDSSTHEFGTCSGRHEOUMH");

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
    msg.setTimeStamp(0.41553994099481584);
    msg.setSource(42632U);
    msg.setSourceEntity(110U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 1383460024U;
    msg.id.assign("MGKSRLVHBDGMOGPXTWTPWFRDMULJFHLJWGMGPZTKGYECJEFRCCTZOGVOSBPPFSZWIIIVIAQWJXMDYLHZCZILXANQSNXNKSWNGEBVTBDLA");
    msg.memento.assign("EGMBARKIDDEPJWEKYHEFLEBWQLXINPYWJAFUUWGGKBHOOHNVJRLGJAYPTVSBXMSNCVMJLIQPHTFGXIIXRSQKDVRIHEPBDEWDNSMEWTTVPXBCOSSQNKUHOVPCQJSAY");
    msg.timeout = 19988U;
    msg.lat = 0.10747341706281144;
    msg.lon = 0.3671824280450712;
    msg.z = 0.5287382523903011;
    msg.z_units = 58U;
    msg.speed = 0.28894714340211247;
    msg.speed_units = 201U;
    msg.roll = 0.38646650545345407;
    msg.pitch = 0.35622977913467035;
    msg.yaw = 0.9933617666614795;
    msg.custom.assign("PLEAINYZUQCMXWJBMCGNWXSDNVRLTHGMVGZSVSYHSQAAGAOVUSPNFDBCPFUUGAROGXDZQKJZOLJAKAVFXOKKVFJRILYKPWMGPHNJJYPSCTPEMITWEBFNUTNEOECFDSBLNOEQRZMFFGNSMMEWVLOTELROWLKBEVLYSYHIDXH");

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
    msg.setTimeStamp(0.7413298635842162);
    msg.setSource(63410U);
    msg.setSourceEntity(205U);
    msg.setDestination(63273U);
    msg.setDestinationEntity(16U);
    msg.plan_ref = 2519046579U;
    msg.id.assign("SFASWOWCJPQEQHNXZPOMODDGCFWRBRXBBYODRGHXHNYFXRYEEJPOPBIVBLKUALRDSFVZTZMCJITHZTMPZZNKHIDCIWLNSCUUWCMOGQAMMEQHGHHWFAJRUYQUZDFJKRQVUANKCPLQXKCRXEXACALNEMJZWUIEYVWDLAVKXXTVKRPLOTKGELYWSBSLOSGICQTNFIYQBRLFGITSPSTHDGOHIPKVJDEJVMXZO");
    msg.memento.assign("JMSNUCONXNRHVEHSJJHOIOGYQQTYKPYDCXGJRLOMTGBOBZTINGBHGIDMTNALOYVNZMAGSPMBSKLMPMKMFXFQQWWCPTXVUWLJPQDJYIFUGEQVEDUIBKFIAYBSAVHRORKKRVKDDACNNYGQRAJZZEKVHGYJPUCTEXTCVWEKCXFXJBNZLPHYRZLLDLARIXVASFXZHQAYOSTWIFZKHFUCOOEEMPFQUANUIEBFPDESBLQMCDTJHWRWV");
    msg.timeout = 51838U;
    msg.lat = 0.7395425348790665;
    msg.lon = 0.6455872889713961;
    msg.z = 0.6795646768517347;
    msg.z_units = 253U;
    msg.speed = 0.9745486800826954;
    msg.speed_units = 225U;
    msg.duration = 34678U;
    msg.radius = 0.9492989434227539;
    msg.flags = 122U;
    msg.custom.assign("VUSUSBWDHGNKLIOZEZRSTSSDOCXCYJPRQYEYLRNF");

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
    msg.setTimeStamp(0.24499322088770015);
    msg.setSource(50154U);
    msg.setSourceEntity(65U);
    msg.setDestination(21250U);
    msg.setDestinationEntity(251U);
    msg.plan_ref = 1249500171U;
    msg.id.assign("NWEFWWLMASARTBDOOZDHIHWUHLVBKRJQACRMEEIXJNAERNGAFSXNLBGUZVDOMCXFHQZHEVVKCWTRBYWHDOUJPSFJEWCTVB");
    msg.memento.assign("HLHHFGRVFVIDIGQAURAKBMIJHTIWLLRVPEZJSZOAMYFIRKYOMBEYWMSZDPSJNBAEKYZVQMQYHSAANFYL");
    msg.timeout = 61758U;
    msg.lat = 0.9464212453344745;
    msg.lon = 0.2713007304447286;
    msg.z = 0.7758719840153329;
    msg.z_units = 145U;
    msg.speed = 0.8165290850959236;
    msg.speed_units = 103U;
    msg.duration = 44132U;
    msg.radius = 0.9807167580144982;
    msg.flags = 251U;
    msg.custom.assign("TDXXEHAXSBXCBDKCVSDYWYTRHIQCVGLPQHUPJDMJCPFVEWMUOZAYSIVIYWMH");

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
    msg.setTimeStamp(0.7574916210402395);
    msg.setSource(50343U);
    msg.setSourceEntity(180U);
    msg.setDestination(11549U);
    msg.setDestinationEntity(174U);
    msg.plan_ref = 3060124645U;
    msg.id.assign("NJFGEDHBYRWNYQSCUIFEWDUANCAQGRXKCSFAGSPLLTMRIAKMHHVS");
    msg.memento.assign("JSOJXGPNFHKJXFRSVIWOXOFCUDPBBOCCRWYAQITRSQTRQWCWKNIBETCIVHPQGYLMAJEXMSXMKINEERUBAFTZVHRPMGBBIGKVVNLOOZGOLWLCSBJMUUMADNVRCKBHKRDGDVYADVLYFYDWSFQQLZMNSUIIOPGAJXAUPQULSAVJUTFEXPAYEKSHTWELPVYNFP");
    msg.timeout = 12112U;
    msg.lat = 0.17770444341186742;
    msg.lon = 0.17160807549970458;
    msg.z = 0.29025434924092763;
    msg.z_units = 99U;
    msg.speed = 0.8426213761647988;
    msg.speed_units = 228U;
    msg.duration = 61194U;
    msg.radius = 0.9595913422407528;
    msg.flags = 188U;
    msg.custom.assign("OFDXHQYRPGOSIJVMOKEZIUHJIEOBPZWCBWUJZTXJMRNLLFGYAWKMHLCOQKSIBSZHJLBYMVJLUQZPVJZVKXMXFIHRGUAVCYUNUBZSQNGDKBBTDZABQGTIUKMEILDTAADHCXMMDVTCYEOXWVYTNFAQGKURTNEFGXFWPKIRYU");

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
    msg.setTimeStamp(0.07204221571943459);
    msg.setSource(62657U);
    msg.setSourceEntity(203U);
    msg.setDestination(52058U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 446951843U;
    msg.id.assign("RWOWVPCSBVNDWEENCSJELAFINEZGKVARNPUZHZMP");
    msg.memento.assign("ZGHONDQGYNRPSRLABHHCYQXUSVOUHZWNBDDWRVGMVIZEWWRCXPYFJVPEABCJYSBDXLPRCOKGXTAFOYQNPQMPOFUCZKAJMFVKAPKFGUJDWVUJLDUXHURSJICUHMMXTASYJKCJBIOVGLYTREWFXYAHKT");
    msg.custom.assign("WJXAWRHDKKPKIODKNDFXHTPNZEEENKKZUESLZNPBUFATDQXGIRVBTQXAGMPQYRMCUOQZBCQHIMZBLYJVHCCAOXVOLSJACLZASVMJNLQYFWPVLYLUMRSHOHBGPWJDXPTMXEVWDBZBYBMIEJWDHMPIYFWIKCZFGVJIMLUVNEWYXAYSFIAZSHWWAHJGJ");

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
    msg.setTimeStamp(0.45921946327160545);
    msg.setSource(47123U);
    msg.setSourceEntity(145U);
    msg.setDestination(56482U);
    msg.setDestinationEntity(74U);
    msg.plan_ref = 2517123923U;
    msg.id.assign("RHFWDYEEBOLLSUNUWWBEFYQBOGIOURBTDVHNAGLRWCUJNNXMSDKWHAUFBNAAZ");
    msg.memento.assign("HDUGVGVPSGYULDDEHQMZFYHGPZVAXTYZGRQFJBKYBIXFIESERMWIRAXCFWKNPPJASJWJEIDRQTUUHLQCHKXEXBKNUOQHDIGLTXLUDCUUJQLTAXIOKNKCKSGLHSFHLEQTEMHGPNMDRQGFVWZMFCXCNLADVW");
    msg.custom.assign("RWYBDPNFZTPJWDXUOOUAODOEQSJWMWGXFAPULWUDLVEIXGRJNXGRNBMVNTPVTNYHEZJXHSUOPYINJNQXTTMBCLLGZZVQSMWXPDKFGBKJPHYSSQWRWIBWECETHYBGTKDSVAMKKONMWFFMBTYFOKHRZRIIKCCDEQERBYJYCCUZHKHPNSITQURGGFL");

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
    msg.setTimeStamp(0.8950897259176192);
    msg.setSource(19633U);
    msg.setSourceEntity(204U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(117U);
    msg.plan_ref = 2343866187U;
    msg.id.assign("LMAAOOEUTENFTGKTFXWIVPHSVJYEYLVIURIOZFFJWRNMUIVREAJPREPMVOCCQOKZFRVQPPWFSOIZZPPQFCEDXZGJYGMQFWXULZSYDMVVSPQHWGMXNZJNTUGXIPUNUGWTHHCBKCAQNDKJCSTLQYWSHLOZYYDBLBRJWCCXUESTBVYTBEXTXAKEAOJVRFZRQHXMKNSOGBWIKDIGKGBHHZUDSMRLRPLNYBAHCDUJNYAWIKLQGDFIMANALJDKCBBOD");
    msg.memento.assign("RJZGUYCRWDCYHTMHTHFMTTRRVPXJPVOKVNDHBHTIFFILOVMXWVYDSSLMPEVCSQZXUUJKZCBHQAEAMRBCNVFQFIRIMZYQJNAZINAJYOKQPPFZEOVUKTNSBDUOFLWIXNWPXTOSRPEXNWACHGPGXPJEAALGBKQYXMWRMCGGHDFGBCJBRMWWIUZBEVUADGSFXLMLIKESKDGEZLIOJOWYUZZKCS");
    msg.custom.assign("CAUVYXRVUJBZZOSINDSLVXASYOWZOERHECQCIDWYHKDJJEKVZLYRTUFUVUBLMBDWKOVQCNKJUFWKJUXCRRRGWFLDYJSMMBDQXGNGFRJAWVLQIPZLMGWNPATMHHMDLTEAYTEETNCIXBIPSVBGRHPWTZCSFPHEJGFMAUEVXG");

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
    msg.setTimeStamp(0.261281480756853);
    msg.setSource(5642U);
    msg.setSourceEntity(124U);
    msg.setDestination(14010U);
    msg.setDestinationEntity(26U);
    msg.plan_ref = 1088334673U;
    msg.id.assign("QSWOTRPKUMOHHJKVYXSLIKXEHPYWNSAHCVTMVHQEKXGUACEYFPEPCKDMBUSYZTDLGLQIESXBGPDVTBDFMLUZXQSKHIDZCTGIGQYOXKIVWBXSGRDTXFVOPQOQKIPUNKLIDRRYZJWCLGNGVDJVAWJBTAZOWCJBJHDZNSLINQLKPHFMSCC");
    msg.memento.assign("DSQSCKQTGRJVDTJTVNZHPVIYCEIZYOOLMUMSVRPHYXREVKLLWLWRNIHKSCNAATHJLUQVQPEWFIBNFQQNDXOVRAZBYKOJNGLEDBKBJIRHVGYCCYFFSPGHSAELXQRHVJWXQDCJNPLEPGMZPFXANOTCPFDISDHZAHTGATFLXOGMHQPAPKMWIBUKTJYBIEDODMAEWTNFGRDXKCOWWJRXZMOZFZNYYCWBCFKSRVUZWQTMSLMYBGIUGUEX");
    msg.timeout = 61937U;
    msg.lat = 0.4389005993444609;
    msg.lon = 0.7021560033815718;
    msg.z = 0.5584610003155138;
    msg.z_units = 10U;
    msg.duration = 28814U;
    msg.speed = 0.17860493098717456;
    msg.speed_units = 251U;
    msg.type = 236U;
    msg.radius = 0.41673554781688904;
    msg.length = 0.8622691123751504;
    msg.bearing = 0.36413777387084434;
    msg.direction = 248U;
    msg.custom.assign("DWOIIHNUMRWXQBUVLIBTHVKZKMXSBWSRWDIXEHYDZJLHSGCAKVPGAOLONNSSFZSMNFMTTZCNYJGFXBJDCOJIWRNQKKFDMIRLAXEKPGPXCRQUAJUEVMMYMGWEUHBUAVWODOPVHSCARTVSLOKWHCZMFPGYYQPAXZBQQALQGRHTJIJNQUFR");

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
    msg.setTimeStamp(0.9173422499110118);
    msg.setSource(51275U);
    msg.setSourceEntity(59U);
    msg.setDestination(35005U);
    msg.setDestinationEntity(20U);
    msg.plan_ref = 4118125132U;
    msg.id.assign("IXGWHBHDZDFKSPIRMOCFRISKISRAOIAWWCQAJQKNTYUKYDXXDLTVQINMQVIJBANORXUQLLXAGJOMPNYJKDTSEMWCXQBHUVVFDZLUVDJJFMIGZUNSCPERGOZJYFEGESAAEQUDXULXJTZFEDGLVATNBPZGSUCUGETPHDOVPBLTZWBOYERVYBRLICWCNKWJHW");
    msg.memento.assign("KSONZOYAVPJYNVYUGSTZUKQEAACXUDP");
    msg.timeout = 40016U;
    msg.lat = 0.14742233413360517;
    msg.lon = 0.08792951257417114;
    msg.z = 0.349540418615625;
    msg.z_units = 186U;
    msg.duration = 8575U;
    msg.speed = 0.26899217799046404;
    msg.speed_units = 30U;
    msg.type = 135U;
    msg.radius = 0.7807160802686779;
    msg.length = 0.6813690967261131;
    msg.bearing = 0.5242146755842666;
    msg.direction = 79U;
    msg.custom.assign("YVUDGGEDWVEIODURPHDXYJEMVAUJERYPZDZXARQCAQZIHPARRAYHBMZHSHNWDLBMVMFMMXIEFAGCFZWYOQWSARPMVFOPFNPXFLRCNESJCISJHKPLBYOLYKT");

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
    msg.setTimeStamp(0.8905342134152596);
    msg.setSource(50991U);
    msg.setSourceEntity(113U);
    msg.setDestination(25433U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 4054740702U;
    msg.id.assign("XPVZNFEDIOHSELOLBIXBEYYTMZZQSBSGGVGRLPUWQEVGYJQYUTYLUXWKHKQBBTVHCKBWTTXYJWXUBQNBEOKFXJ");
    msg.memento.assign("HQJNKFRPBXAGOBRUQPFZRIUJBWAAWBCNGOESXQQXUGEDTI");
    msg.timeout = 40928U;
    msg.lat = 0.29281781988347466;
    msg.lon = 0.7780167413797004;
    msg.z = 0.07802018259734989;
    msg.z_units = 33U;
    msg.duration = 50606U;
    msg.speed = 0.16913098544168081;
    msg.speed_units = 246U;
    msg.type = 232U;
    msg.radius = 0.7328084876722155;
    msg.length = 0.5698226809367012;
    msg.bearing = 0.7038032419660979;
    msg.direction = 200U;
    msg.custom.assign("GIMYHYULQUJDIVZUAQGKNJHDTPMRVTFPFRTGW");

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
    msg.setTimeStamp(0.13213545701409024);
    msg.setSource(31711U);
    msg.setSourceEntity(190U);
    msg.setDestination(19384U);
    msg.setDestinationEntity(131U);
    msg.plan_ref = 3437611405U;
    msg.id.assign("VNVDANGPQJJLBNVJCITXWOMSBXGIDUMTBOSALZRKJWHDMAVXEVYBJSTNJYUPFNASVNHQMGRHFRHDJQAIHDSZCZMDSPZENRXUOFZFOAEOWWSWDX");
    msg.memento.assign("THMLUERFJFOIGZFDBEIVPZTQFRRZSEQLRQINFAFVEAXXBKLEYARISPLJHQSSXYNEKWMFOSRVIWBJTNLGTUOAWJIQDGYTPGCEPXHRDOFEYBGDUZMSUDAYLWRCWDUVNUVDIMXBZEEHYRBWONXNQKPZYVHZFGJTIWIODMKWRCZHBYLJOMOJWAKYCGAAJISOOZHLHKMUCWNMXAUCGMTGDBHXLSJAQUYQNJSKBCKNPTQSXCPQNKBC");
    msg.duration = 21950U;
    msg.custom.assign("IJNCUEOLDVKVFISXQBGUKSMPTESVMBGHJNFCJGJFPOTMLFZZJRVXLECDGHPBSFZPGVSUQYYOKGDZWGYXBAQXNCINTWACVWXQKPZBXYMYKLPGQEYMRUSYJFUFXKOTESTAIZECSHBUBMWDUHNMWQKWIITLDEWJEAPANJFHYTUWZVRNXIYVTHZECQROLECMRDVWHLAFBO");

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
    msg.setTimeStamp(0.6876355804808667);
    msg.setSource(14818U);
    msg.setSourceEntity(66U);
    msg.setDestination(51473U);
    msg.setDestinationEntity(252U);
    msg.plan_ref = 153965891U;
    msg.id.assign("IOPBKJPUDORPHAWQXTCFRCQGPJQCFYGPELFJIWWABHHYZAWLNLYONRPCSRCNVAMVQGAGIAESTLVNXLTKROINBSZMKDZLPBAKLURYIBZEHKJFYEIVDXKTTFDXWXJV");
    msg.memento.assign("UCWCYMYQHWTNCWQLOQOTQBGFTXJKGZCVEMZPKHHFISFF");
    msg.duration = 39450U;
    msg.custom.assign("MXBOQQSAMDMAXAGHEXQKNKGTZYIWCSLIHAXLVGMSQURADPEFKSOTEBFJMKNRDVAEUNDUXZACSPUGCCKQZVLFFNYFOYENJDWWTTXPZZRYVXSQRTNELHRCTYFMLMUAEDHCTFQGSKPPR");

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
    msg.setTimeStamp(0.9121061888010564);
    msg.setSource(27638U);
    msg.setSourceEntity(45U);
    msg.setDestination(56719U);
    msg.setDestinationEntity(80U);
    msg.plan_ref = 1419158257U;
    msg.id.assign("FJQPTEWJPEPYUHPFTMFNKRXEURRHEPZLDJCBKNKNAXYVMSVLDXIDZIHMHWEGQVJROSZZCWOQBCPUBN");
    msg.memento.assign("QZFGNKYRXKSPIESXZOOMVNNFLMAJITZEWUHKLSVOMJTHLCUPZFDDTJQFORIJYXWVLXWDRLPPSCSHWONNGXWCEHLFJAV");
    msg.duration = 12749U;
    msg.custom.assign("DURNLBQEHXNZFAJOLOAQLGDPBQCNBGVBYSFWWYJOTMLVWIFKSZTAMMMBFWMPQERGXAWHVJJSTHEIHWFCRUZDNZMRVQICEVRAPJSQTDLCXEVQZMIGGTNYJRTSMSKDZCZOAAVIDKBDDFMOTHQZEPERJLYWJGIXEFAHYKKU");

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
    msg.setTimeStamp(0.38906816000246014);
    msg.setSource(61839U);
    msg.setSourceEntity(214U);
    msg.setDestination(22572U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 214304420U;
    msg.id.assign("BOMNESBBEUSYDSRSPHVVLIXQZUDUADJJDOZJRKUAAJCNGNFOSKGHVWRAUKCHWMBFLWFUPEMIZIMJLQYYOIQKUBXZHDWPJQTNRQIZZSGNILAEFKATLMYDPXMAYUXBQYNEUFDWFDCGOHGDXHAVVFSU");
    msg.memento.assign("HGBBUVGYEPJSXADURKNYYTKMAHTEOVCM");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.22911452164756152;
    msg.control.set(tmp_msg_0);
    msg.duration = 50562U;
    msg.custom.assign("FKGJGIYEOKNRAGKFUROBXKMZMPWVZZLYYBDBQRPBQJGEANIYUYJFTECWUEPDJDFVLZHUSCXKJUOVRSQHYKLNXGMAGJIIADVBMBTQURMCINTTJTOFHVLOHLFRFJVCZIRDSUHRKQGICLQTKSEGWENIMVZNSVACQWSDQJLOKAOFWDWIHLYMXXVNDAXDWPAH");

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
    msg.setTimeStamp(0.2061280230893605);
    msg.setSource(25279U);
    msg.setSourceEntity(250U);
    msg.setDestination(3163U);
    msg.setDestinationEntity(152U);
    msg.plan_ref = 3954976016U;
    msg.id.assign("PTTRNMUYWVJQMOTEUDNCHOXZYHWJOXQVPTKHBQDAPDLHDJZBBEERSGTIYCIRLEDVMQATACUAMVXWRVDTDZJMGKIGLGGZCNFERJMGIFXHMYIAUZIBGNCHYOUTQMXZHWNSGORCWUOSRYSAFKJ");
    msg.memento.assign("UCGRBMGDKVQYCNJYIZFBYDTTLZPUUECPROXWMEWXUDOPZRPSWHVHDBNAIOFVLILVUGQSKAHUXHPKDVQJFNBCOYAGFGZUZKMJZJXHWACMYDGYRONBZWRKINELJHMAFTNSIMWKLEPHTKPLMKSXTWXXBBQYRENIYHZCWEFLHCDTKNETQUUPUIQRZIEXAT");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.03297297510841091;
    tmp_msg_0.z_units = 159U;
    msg.control.set(tmp_msg_0);
    msg.duration = 46834U;
    msg.custom.assign("EGYMWVBHAISXRYWRSCQTLBRLSOGBUMBMNZPUOQVJNJHJUPFTRUFEHKLWADMARNCPVKDDZHCLVGLQTDNSHWPFKIUOTAXFLVKYZWEMJUWZSIGEKYOTSQRELX");

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
    msg.setTimeStamp(0.4037979704988506);
    msg.setSource(33705U);
    msg.setSourceEntity(224U);
    msg.setDestination(49595U);
    msg.setDestinationEntity(232U);
    msg.plan_ref = 1670845811U;
    msg.id.assign("IVPCXZUXIOBVLVGPQIXACPBYIYTJZHHKUHQEAOMCAZIGSBLWWFSNIUFBDGKMRCZPNSCC");
    msg.memento.assign("ZMPBQYKISIGTTNUDRPJYSKTHTXPKBHUFCPNEKZNRLOHMDWLORCEIJCMDWOMKBVPPSJQOQYTNVOODWEBD");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5450576986920124;
    tmp_msg_0.speed_units = 172U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44406U;
    msg.custom.assign("WKJVLNPDTZSLALXUQSLITJBJNTFGEXRVJMDNNGKASAKZQYUGQDNHELNRZETBGOOBHOIDZTCGHRUWFKVKKVXUFFBHWTSXLRVJPXOXYEKIZEWHZPSGMXIPUQZJOGFCCLQNQIOOICEWCDNBHTIKAMDYBPZMTFMVIGCBSWACWEHAKKSSJWUXYVNLPFPMDSX");

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
    msg.setTimeStamp(0.17406674680945833);
    msg.setSource(41089U);
    msg.setSourceEntity(122U);
    msg.setDestination(17021U);
    msg.setDestinationEntity(79U);
    msg.plan_ref = 3914015201U;
    msg.id.assign("HTXABVSQVTOZIFPWICJNPJOMNSBHKCJDQLCVWGIHDOFVDRMOMUZHCFYACREYTDKIUUTGERRJFPFPSRLQJKTZCBKEOWGS");
    msg.memento.assign("AFVCLKXGHQCMOTBSYJCVJWICJLNEHPZLMCOFWAESTODXERFYTJDVEIOZQNMGAEGFSAQHWUVFQXQIHEZPDVRTVRBYDIRWKGRBOMMGFX");
    msg.timeout = 35323U;
    msg.lat = 0.6864494887881519;
    msg.lon = 0.1616499964196716;
    msg.z = 0.6318029212552023;
    msg.z_units = 106U;
    msg.speed = 0.6185302823232425;
    msg.speed_units = 151U;
    msg.bearing = 0.138133152280556;
    msg.cross_angle = 0.12560965104025323;
    msg.width = 0.32128198802290475;
    msg.length = 0.9724541446369518;
    msg.hstep = 0.4209974598473939;
    msg.coff = 17U;
    msg.alternation = 8U;
    msg.flags = 142U;
    msg.custom.assign("FEGTSDVMJBHUYUDVUPRQAVFIFBSBNOFEOCNMYHVZJZTTSBQODLGQDHBIGAEEMRWLYVPKELRGMJKQGIHWEBTUDLSHMNAQKSXAVQQHAAZCIWBQGCGJOEUJSNNKORVNMZGYXXSPLOZDXPXCTXPZNCTRGYAWKWVJRMCZPOWUYVQJNX");

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
    msg.setTimeStamp(0.8144204099744005);
    msg.setSource(42127U);
    msg.setSourceEntity(166U);
    msg.setDestination(33688U);
    msg.setDestinationEntity(79U);
    msg.plan_ref = 3594116591U;
    msg.id.assign("EAKTLZGKBQAEMIJDPFUDLYTOEHGXTOZAFQSWSQZFWHSIMWCYJPGARPQDBEMYKYQLXAQTUYVFXNJBRDPLLMIKLWQRKEBCVSNMMLBVOXCXOCJOXRUZOZXKBEUODAIWNUYRNFXHGUJFPAMTPHHSFLLMQZKPYCZWLEZCHVHSERDSAVYNWZRIGPRMNIJUEIJTOAQCFDTPVBHDOJXXGHNSTUKBEKIRGHCGSIJVKYDSVPDQZMGNWWW");
    msg.memento.assign("CWEPWEYTYGYUVKIRWFNHCOHQQUGNLGWQOVFOBKCJASKYPTDSKUPNMXRTSZMJOALZECBOGHGJLBWNTMZRCWOQXAZZFBTASTPTLQBKYMEJCJVMKCHOHIWHLLIYXDDDUZDSURFJWAOEQPAKSBUUVMNREIZHRRSESFJXBQPUGOAFYYRSMZGINTKIEGGXGRKLONFRQLHMPFZIHBCTAXCPZDVVNWB");
    msg.timeout = 48386U;
    msg.lat = 0.2991760184935748;
    msg.lon = 0.9072661746769951;
    msg.z = 0.4946247059429114;
    msg.z_units = 205U;
    msg.speed = 0.18732691509945254;
    msg.speed_units = 162U;
    msg.bearing = 0.15579784300115118;
    msg.cross_angle = 0.05451385132593878;
    msg.width = 0.18590196579788587;
    msg.length = 0.826938986503705;
    msg.hstep = 0.11188157379528874;
    msg.coff = 142U;
    msg.alternation = 8U;
    msg.flags = 60U;
    msg.custom.assign("HVGCYUIOKEKQAPBXHYSRQKDHFMKJTBANRWQBPCCPGYEDCUIOTIWRGIDYKDJVUJFPHSUKCLBWOXPWRZQTMYTWGXRUAASKFSCONSAOXVWXRESAQOSNTPMZZZBZRLHLURLTWBJUJPDLNBJEDEIXLFVZGSZXXWXOTWCQKBEVAQUGHGOHUISMLTLHGYNINDZTFWKRJSFYJZGPAGIIQMAPHVEIDXJLRMFKMFQBOB");

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
    msg.setTimeStamp(0.3453673509065691);
    msg.setSource(49938U);
    msg.setSourceEntity(25U);
    msg.setDestination(38409U);
    msg.setDestinationEntity(114U);
    msg.plan_ref = 2018611658U;
    msg.id.assign("ZNVQSVMAMKJJWCXFSYHNODOKCYDAQTSYXMXTAHOFKDYYNSGRIRDOZYLHNFLJRUDSJOREGKKZRFPIWEXIXRHTDUCCIUUZAMLCVPXLXIFDXMBTAWSZPOVQJEQCSGQGMSWBBPMTYQKRJGDDYFEZBMVVEUAWWNOUHAEYGHPAZJLOVHKOEGLRDZSPWNBJXIM");
    msg.memento.assign("QTLNPXUZDYHORQTMJWEVSGBCZBQADJWYJAPHDYAEXFDUSRKJOQOVZRJEMYLMIOEFNLLNYODFCSMKSQJGJYSXHGTFTKSZZWHPLDYRZFTCKFH");
    msg.timeout = 63012U;
    msg.lat = 0.8262599527338599;
    msg.lon = 0.3691277232696708;
    msg.z = 0.17502771237349612;
    msg.z_units = 203U;
    msg.speed = 0.8960449013493779;
    msg.speed_units = 191U;
    msg.bearing = 0.6728683189398241;
    msg.cross_angle = 0.6438332459948123;
    msg.width = 0.9058020177676139;
    msg.length = 0.25080332206680744;
    msg.hstep = 0.7222556342541939;
    msg.coff = 109U;
    msg.alternation = 43U;
    msg.flags = 3U;
    msg.custom.assign("VCEPZGUFQFORVBIXTUQZVOOERHALIBKZQHAGKBHLQMOTTWJBPYJCJRDPXINBHSZRYDOGNNHLTOHLEMNGTXFSMLPCWSKDDSRSIFGKODYEZQUPMMSIXV");

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
    msg.setTimeStamp(0.7255548188016786);
    msg.setSource(56174U);
    msg.setSourceEntity(99U);
    msg.setDestination(4804U);
    msg.setDestinationEntity(46U);
    msg.plan_ref = 1367706657U;
    msg.id.assign("YATLLYEZZJOUSINJMHOGIPUVNCTJEV");
    msg.memento.assign("GRLMROXPBOWXOCRNIRIUMBNCSTICBNIAYQRFJAWRULGKXSEUJWWCOFZEKXEACJDKZMEKWLFHPNLIALMTQWCJJB");
    msg.timeout = 11159U;
    msg.lat = 0.8837848316557538;
    msg.lon = 0.032094905483963654;
    msg.z = 0.9343230340096099;
    msg.z_units = 186U;
    msg.speed = 0.6367020651098586;
    msg.speed_units = 121U;
    msg.custom.assign("PLSHYRJLVOVLBYYZWMXZOKQTPCPVWFVFIYHRLAKXJBEGSTSZKATGIBUSOGBMHVCNJRDWEZWMIQIJUPKTDHSPXGYOOJENCDLDVRQHOAHYQAM");

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
    msg.setTimeStamp(0.6974665137621626);
    msg.setSource(16876U);
    msg.setSourceEntity(158U);
    msg.setDestination(33912U);
    msg.setDestinationEntity(222U);
    msg.plan_ref = 2800910066U;
    msg.id.assign("DYQLRDHROHXARBYPTPEEGULGYWRQOZLDWVLXWJCDZYXITNHFFPUHKVFZJMQOKEGQHXEFHMTUURXYJNMZVCKTJASNZZAWBTXWQUHCGJBIVESLWGNHWVCATAOWRKBABUNVDESFHCFMRMXPICPLXKINTZANLDFHFMVGRZVBOSOXYBEPNUKZUWGCLORKCLVIASBJIYZDUNOQPJDPGPIYSMQDUAEESMBSQI");
    msg.memento.assign("BNVMGXASNIGJJZOORQLEZLXTWSYKAPEXODDIBFUCPHNBQELZSCMUQREICZMKFTOOELRTWGXQIBJWATEVSWQGPBSYJTYQRTBZWLPTJNICHSFOUICWRRAEQKXFDPKDUDKYABDBBFWVSHMFRYFZLHFYENHVNUJVNIAXDJGMIMMOTNEPWHHYRVLTYXVCXZPKSHJZVAFJBPDYXYUMNQZLUMALPFHGPWJZUCO");
    msg.timeout = 9622U;
    msg.lat = 0.3703998967184937;
    msg.lon = 0.3970942188764712;
    msg.z = 0.39889500968693414;
    msg.z_units = 144U;
    msg.speed = 0.8060744081902185;
    msg.speed_units = 2U;
    msg.custom.assign("RZELTIFMWAYQLKHMGACOURSZBESHHFOYXUNUSCNSWJCXQTBBMFXRTMINHDXXOGVYSJTCRHLNMAOKPBAOUJIBQQEUGCATTLMHMZFKSAUQVLQODYSZEFRVCBGVAKXUZKDQJVJZIPXNVPNWPUINOEGPDLIGPKXNVNUHXL");

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
    msg.setTimeStamp(0.6022889685293226);
    msg.setSource(45009U);
    msg.setSourceEntity(167U);
    msg.setDestination(29172U);
    msg.setDestinationEntity(202U);
    msg.plan_ref = 3855547324U;
    msg.id.assign("PCWCJSDMFIUFMEKDMZRVUAUNKHKCACYAIOLGTGFOEQEQPQKIGZWCYBVPARMYKNITVBGNGJCDQNSUTVLLHDRGJTFDPSZOZOHNBDHBVAYZUBJEJLZFTTAZJYOXWMQHGCYPPVU");
    msg.memento.assign("NZBKABIOHMLRLDQVEDTGSSRMEBGAXNVMGCWSHDEWDCXCEYTDTYZXAVKOCKJFYEJJAQRWLMQPYFFHXKZWERFVMQTEAWYOKCNOIFJFTPIIUMNIHOYFRTBPYUOJCHNYDUHSGBMRVUFTSIWLLWSBONEPRGUBNURABDVBWUZL");
    msg.timeout = 56794U;
    msg.lat = 0.01139470900719064;
    msg.lon = 0.9614367055507532;
    msg.z = 0.8008582329915223;
    msg.z_units = 55U;
    msg.speed = 0.592260535812134;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8811384927361864;
    tmp_msg_0.y = 0.2596316567882955;
    tmp_msg_0.z = 0.6752738484982758;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RFGXTBLUOQMTHESCDMULHOMAMYJCQYFCCLNWTEPEVFXWLVBYJZXPDHMWZVX");

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
    msg.setTimeStamp(0.8950859018611648);
    msg.setSource(17975U);
    msg.setSourceEntity(205U);
    msg.setDestination(60731U);
    msg.setDestinationEntity(39U);
    msg.x = 0.015535058659628675;
    msg.y = 0.9921519141704764;
    msg.z = 0.4713769803324197;

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
    msg.setTimeStamp(0.1280577685655251);
    msg.setSource(4926U);
    msg.setSourceEntity(179U);
    msg.setDestination(36392U);
    msg.setDestinationEntity(216U);
    msg.x = 0.38161569405887463;
    msg.y = 0.2664219207958196;
    msg.z = 0.02123882424752266;

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
    msg.setTimeStamp(0.7082160297798503);
    msg.setSource(11933U);
    msg.setSourceEntity(244U);
    msg.setDestination(8203U);
    msg.setDestinationEntity(117U);
    msg.x = 0.43063290308486346;
    msg.y = 0.24272830622528396;
    msg.z = 0.9541014161560937;

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
    msg.setTimeStamp(0.5906577876127653);
    msg.setSource(23559U);
    msg.setSourceEntity(45U);
    msg.setDestination(7024U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 2692122723U;
    msg.id.assign("QAEYFWBYDPGYFZOLHMCJWXFIGBPWFBHTSIOILSVFKUORBSEZSOVSNNCTHFHIULDNLYXUSAUPVJWTUFXMDEMWBRFTUCVHGHWUY");
    msg.memento.assign("UUXMXWSPIQBCARHJNDZNHLTUVPENQDLDUFEPGUHUEDSNOQWCKFGEHGAPGTZYXNWYBVWRMYSOCQNFQVMJWQTQPXNOOLNZUTSIEYPETDAONRRBEJQSPXDLZWYCKZTKMGCVVTKUOGVAFRSPWIBFCHBBTCXWBXKGXHLYHRMASMKRAQKZGIMVLXUVWYOIJAORLONSDADZSHZFFHORCXBGYQZELDPPMBSKILTZIAJVG");
    msg.timeout = 8362U;
    msg.lat = 0.3759214613148898;
    msg.lon = 0.3832597990941605;
    msg.z = 0.931641439698369;
    msg.z_units = 239U;
    msg.amplitude = 0.7845375274837;
    msg.pitch = 0.6853515458888753;
    msg.speed = 0.6216211142570972;
    msg.speed_units = 61U;
    msg.custom.assign("QUMNVETDBWMAWRVAGSIJOYUKBJZLZGNKCKASRKXSOMNHYLHTWVYPZCZCRQXTAEMHJIOHZFQUJFWDBSTEBGQR");

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
    msg.setTimeStamp(0.48842865207542774);
    msg.setSource(14219U);
    msg.setSourceEntity(81U);
    msg.setDestination(5445U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 319465389U;
    msg.id.assign("UNTTLJRHDVENDLFWUOUNLSPWRTHEBMADUGIQWHQKOTGHGLRRVFWEXEROYZFVXTZPMKEHJWSROAKMYYIRMSRBZPOOQJXBJGMAYBEHJIICWTCZPWLEIQTSFXZDODFSMKHLBDUKFGDEHODEKSBMXUJVZXTKVMQPGDCXVCYHBWQUBHJYFSFLVOSAMZJZUINUCINPCUTCRMJSAPNQKGNCPYXVDAQJRZNWCPNSLQOKKGINYLEVIYCGI");
    msg.memento.assign("GTFTAIMSMWHGFXRJCQDCSGDWYRU");
    msg.timeout = 46749U;
    msg.lat = 0.9287770970267624;
    msg.lon = 0.3546663226236756;
    msg.z = 0.7735314064503069;
    msg.z_units = 157U;
    msg.amplitude = 0.635163074272018;
    msg.pitch = 0.931682817147304;
    msg.speed = 0.08615078162569234;
    msg.speed_units = 73U;
    msg.custom.assign("YQQSVPSITTYFCKDZYSEUFSSRBCXRAMAKUCMHNRVFDQHWGXAGZHPBNVXEMWYQFQXNFLZTTWLNLZLQVNESUJAYTEIRIDXKQHXQTPVLCDOYPLETFOABDXHGMJPJDGOBIVBBYERJHDMISGWNHMMVCNZUOMINLSRMZIWHVCOUQKLDPAQJOWKYRJBFZGHWOFFJRKJNTYPKXNSKZELZUIGGIAZERPAEPFUBUKHOJCKX");

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
    msg.setTimeStamp(0.9860001413197855);
    msg.setSource(23564U);
    msg.setSourceEntity(156U);
    msg.setDestination(50831U);
    msg.setDestinationEntity(53U);
    msg.plan_ref = 568938475U;
    msg.id.assign("PKCEXOZGIYMBLIKVKCQQMXLQXHJQONFSVUAHJNCJAXNVAABEIPDQUBFSFTWBSPIDZIRRBWWKOXJBRTIDYKHFNEAKUPHULVUDAUSMJCUPLPWSKPATDRTTGEVNETNKZDWSNULXDTRVCXCSIXZMMHQMEIDFGHNOVLFEROFMEJOBYQWGWVLNTPMXGYGKOJEHLGZYLOCMYFDVQXAP");
    msg.memento.assign("PGLFIINJWEICFBSFPQAUPPVUAOKNZIHIKGCDCJNXCPHNYJHBBQUOTMXCGVSSOFJVBOWJKYFQXQDTCRHJKWBDLNLSWRIMMKSJKLNRYADRIEYWGVCOLUMLGQRYAFZLXTZYRQZSIVGHFCSEUBVEYNQKLBNKXDYMEJWYMT");
    msg.timeout = 38858U;
    msg.lat = 0.9150429749846007;
    msg.lon = 0.5116104987386569;
    msg.z = 0.5195684005030123;
    msg.z_units = 146U;
    msg.amplitude = 0.3245475581897961;
    msg.pitch = 0.5932138105808529;
    msg.speed = 0.44424253142761805;
    msg.speed_units = 161U;
    msg.custom.assign("PKJFLKRUXXJFUVTKRFMMDQOYWOHAVWPHUGQIRAQDICFSAGOYBCITSNHRAXKLSPEAJZPECZYBLIJBRYQVZVUECQZNILKMJCDBCGNGNTUTEZTGNFIBOTWOMLUHGWJDESWPZHSGUFNHYILODOPCAJWWEWOVJOTQSERLURKSRBKYUZRBEZH");

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
    msg.setTimeStamp(0.4302942039731613);
    msg.setSource(17091U);
    msg.setSourceEntity(185U);
    msg.setDestination(44831U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.9841086126349705);
    msg.setSource(36868U);
    msg.setSourceEntity(66U);
    msg.setDestination(41129U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.9711837709611478);
    msg.setSource(39363U);
    msg.setSourceEntity(106U);
    msg.setDestination(5613U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.1789867903077853);
    msg.setSource(13496U);
    msg.setSourceEntity(65U);
    msg.setDestination(63317U);
    msg.setDestinationEntity(213U);
    msg.plan_ref = 3771970397U;
    msg.id.assign("JMKIKAWRLFHAMEAKNBFQXKJFVAUSDMGNOCCNJQCXTUQDSGPDJJFHDWSQAXFGLQWBHCUKMPZGHPMRTTTVPRROSNIQQKBLLNODAJASVLSXKJQRMWHZBTDPZDEOFCEZOKLCUXMEZXNOIYIYDSXCIDEHZZEVGAPNVNFWYIPUXJHJMUENGQWZWPNTRTRIBBEKTBVHASYHVRWBTGYGYBHCEEPLIGWZLDCYMSVYXFGATOULRJVZ");
    msg.memento.assign("RZPHTYUSXRWVOWPOMRBDSRUVPEEHRYKZVGDYL");
    msg.lat = 0.36933136565209357;
    msg.lon = 0.4283622651971729;
    msg.z = 0.34171913141925525;
    msg.z_units = 141U;
    msg.radius = 0.6941315975425165;
    msg.duration = 56721U;
    msg.speed = 0.711791649832874;
    msg.speed_units = 194U;
    msg.custom.assign("JWMIFVNOOBYONXMRIKFBCZITRKOBCZEZPUTHELOELQUKVCTHBWWAMEUAXFAVCVZGBIKMRZYNNAJUPDLOCFTZEVQLXVKLPWMYHFQSRYTLHFAUCWPESSRJJTRRUWJSAAWQPRUS");

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
    msg.setTimeStamp(0.18523014773663826);
    msg.setSource(29126U);
    msg.setSourceEntity(245U);
    msg.setDestination(60090U);
    msg.setDestinationEntity(137U);
    msg.plan_ref = 420789076U;
    msg.id.assign("SHRMTVVORLIKPPXFADOSSSARMZIRCZLXGBDAYRKQBDHVFZGIQPDUTUJBUCYGDEKLIII");
    msg.memento.assign("ZMMKZGMUCSETHHLPLSPBKPABXXPIUSZXVFLONTPLNLHQASWPYIYGJRWOOVOKKWEJ");
    msg.lat = 0.42774906354447206;
    msg.lon = 0.5453760182838305;
    msg.z = 0.6061356785180868;
    msg.z_units = 12U;
    msg.radius = 0.915448949168553;
    msg.duration = 49450U;
    msg.speed = 0.8976963369740717;
    msg.speed_units = 36U;
    msg.custom.assign("DSJUSLLNPHPTUBTAYLDYYHWVATFQPBOQJMSBNRHHSNIRHADXGNWGPUFNPQEUPVGTTIVMWJ");

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
    msg.setTimeStamp(0.4147819125192399);
    msg.setSource(51689U);
    msg.setSourceEntity(241U);
    msg.setDestination(1439U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 285972395U;
    msg.id.assign("XGSVNITPPKFXCDEVCRYSFWDYGJMZHIMWJCYLLKBAKMHMIPHIIJJXQCNUWVAHMNVZBXTTBJCKOZQLZEDUNWLGFMJFFVSAYPZUIUQKMEWDXIZXGTYSODYGUOUACXKXGSRMXWOINNYUBGPODTCRQOUEVPRNBVZPPDAFGXZBJTQSWULOWSLBEAGRSEMFOQTOLT");
    msg.memento.assign("EXTDJHOLYFXHPWDYYJTLUNDOGKAODJHNZIEQVAQVNGPKPMPAUTDVJSUCFBKKKRIQANLSPRIMLXSGOMFZCJYRNNOYSTOCMQXAFFWJPALBEDCCSXTBHYNPHOQWRAZGVVUUAGJEMHRJDSJEWXLXECTE");
    msg.lat = 0.3323872489000741;
    msg.lon = 0.9456615097447936;
    msg.z = 0.4317484132393913;
    msg.z_units = 157U;
    msg.radius = 0.8028557006747379;
    msg.duration = 55498U;
    msg.speed = 0.13107132668509913;
    msg.speed_units = 73U;
    msg.custom.assign("HDVAOGQWLYEBHGIMDSUWMBUAREYFCGRGOYBONRVMOXNGFWTDHEWNVDMYVYWCCHJUULSZXEJZTCPPTQYCXPUIXSYQLFSGXBDSIMIDRPSKNOVQMLQDYJEIOCZZPQJZLAJKLDSZKANKTJSDGPHNURNQQOLVBTOPWHUNBVCTQHFREZZAKIMXAYAIGFTBAJITJVRHEX");

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
    msg.setTimeStamp(0.6607913370547863);
    msg.setSource(41400U);
    msg.setSourceEntity(13U);
    msg.setDestination(51749U);
    msg.setDestinationEntity(58U);
    msg.plan_ref = 317905914U;
    msg.id.assign("SHZRTANVUFYCFIVREFDQENUQFRBXGVXVABNKGUWFOMRLXQMETNBZETIGPMDCETYAPOIMRFWBKQCDIIWUEOASAQTCCOEDLCOXJOJWQLTHKJGBVZFEWTDWDQUPIXMMKBYWSXZOWNHALLHITJJYIYSPRPMJXGJBLNOHHISZGRYTLLOGQSNXXJUSCPOMNJSSRSKNBBAVPDHBDWZVZCFE");
    msg.memento.assign("RZBDEYJUVNGTUSBMSVZUMPIRNFXATIGVBEOVZKGOPZLYLLOCCWLGUAWUQAWXRPFPGHGXJBFHZHQKQTCNEDYQIQLRBYPNBKNJLIEMNEVCQFDAWSSBFJGUCLVOEKUDYKNGAYFDMOKGWPMYSPLAHCYHNAK");
    msg.timeout = 33373U;
    msg.flags = 251U;
    msg.lat = 0.08232504549090047;
    msg.lon = 0.6063209571121528;
    msg.start_z = 0.7927075931849745;
    msg.start_z_units = 178U;
    msg.end_z = 0.466531745215951;
    msg.end_z_units = 245U;
    msg.radius = 0.7932142489323587;
    msg.speed = 0.3128994028434192;
    msg.speed_units = 40U;
    msg.custom.assign("PJGEJNHRASDOLIJYWRNICWVZAKKPERGFEPQNLXFJPAUMJPCCBXKSFTNPKMMUBYIECQZWABSVTDXWMZDKOTAQEBINXDZVEFBUSSCZHHLKVTSRUUMHQUK");

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
    msg.setTimeStamp(0.020520464863591936);
    msg.setSource(45267U);
    msg.setSourceEntity(62U);
    msg.setDestination(354U);
    msg.setDestinationEntity(41U);
    msg.plan_ref = 95810919U;
    msg.id.assign("IIDNTUMRJGKHFBYJPWEHBLJUKXFWMUGCEXXYQOAPPZLNLCJSIGEG");
    msg.memento.assign("WMHZMFNSZUXNGIVFQNRGHUXUFFKIJHTWPBAMNFSCPERDWONBHDBVRWZPVYMYUSLTXVUNUGRKMYAMOVSZAETBAYRCEOLBHZRATLFIWZTIQFNVLFJYCGTDIPFKKJTCQLZKPQXGIOZMSVUJJARCSKPLMGAPGJBHVQYQFBEUXCIOYHJDPCSEYGWMJMEIXWDCKKOGIQEUHXTPZOOXRZKICSLYJVTGYRSBSARCKLJXBEAWVQHQPBEADNWNTODW");
    msg.timeout = 13893U;
    msg.flags = 82U;
    msg.lat = 0.5448334639728147;
    msg.lon = 0.23372329281324555;
    msg.start_z = 0.13899689256428915;
    msg.start_z_units = 146U;
    msg.end_z = 0.7078314302893268;
    msg.end_z_units = 106U;
    msg.radius = 0.29054428865913073;
    msg.speed = 0.7435350231781755;
    msg.speed_units = 246U;
    msg.custom.assign("NPVCQIYBSSHMBIDNERNGPAAHBDOTCUMLIJABKKCCRARPSENQKMUHLNPJOJOJFWKKPREBZTGNMEJBLDFCJMXSNEBSFRALVEWTBGVUTYQSCFQUL");

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
    msg.setTimeStamp(0.01359526532347144);
    msg.setSource(54474U);
    msg.setSourceEntity(174U);
    msg.setDestination(64822U);
    msg.setDestinationEntity(27U);
    msg.plan_ref = 3049744852U;
    msg.id.assign("QXQYFWKLTZIALDZAHNIJMYQYFPNCPYBAUOHQSANXKCVMUGZQJMWCPRZWTKLUXOESHTGHZUWCIKRIBXBBHZNAXM");
    msg.memento.assign("GLGHFIWHYKAHKYBWIMPHWNOLFGLQKBICZZCSYAQEADRNUYBSRCKVZSHCDNJUUQZJAFGMNMVXFCGDMREXWOZWJNLZFJNTSTMXVNXAKHQBPYOJLPDKFZEHMRCUCJFTYAJVXMIYVMVISYUMOVOZEJWSBPACTHKWSXOPVPGSLDTCYMDTURRWDQGDRUEFRAVEPDGETXDSELQUUPWXVRWHIIGSEOZNBOFTIPNOQCPYRJOLBTXG");
    msg.timeout = 52685U;
    msg.flags = 114U;
    msg.lat = 0.6152527313846116;
    msg.lon = 0.20999393006510925;
    msg.start_z = 0.05606650825653192;
    msg.start_z_units = 88U;
    msg.end_z = 0.07424331183928568;
    msg.end_z_units = 63U;
    msg.radius = 0.9778734071715235;
    msg.speed = 0.8800703424820803;
    msg.speed_units = 123U;
    msg.custom.assign("NVGOZOUTQWTYTBYBMMKKLLOUMLGCHVLNNYSKHFAEGQKDJFYHADZNFPNIHBIREQHDUDVANLDTFPUJJXZCMREASWUKBVV");

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
    msg.setTimeStamp(0.8517265336565405);
    msg.setSource(40400U);
    msg.setSourceEntity(162U);
    msg.setDestination(18090U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 1323014652U;
    msg.id.assign("DBGAADPELIRKDMISKZIWIMAXKOGVCBBSSVUYUMLLCXCMUFQYSBENNTBHETUKUFTQWRHRCMVVNYASRZVVKOQVZSFAUKTOKWOYHDMRGCCAJPEQEDOOXYCFDGFRLXTRCJFQNLVEMFXYRTRN");
    msg.memento.assign("EZAYTRSXHDSQHJMBJULUASTNRNLICTFYNUIQMDWXQSAMQRJTXTRZHEEBLCAJMSXWMLOGGRCDNNDRPZHGGFILBGWXQRMGPTXFORFSZNKUSQOCAJBUHQMZILAUAVEOTVYQVTIXZLJJKPFGEFMEIWECKCWYPIQEUEAVSKSPFBWPYCHWDYPVYKHFVNNSZKNBCATTHUZLIHBJHOVYFWMBZJBPJRDOUPFOKICYVWVOXRGGDIWKBOQDA");
    msg.timeout = 3914U;
    msg.lat = 0.7857463427380764;
    msg.lon = 0.3426141004714387;
    msg.z = 0.17001107126159354;
    msg.z_units = 32U;
    msg.speed = 0.059183250547864996;
    msg.speed_units = 93U;
    msg.custom.assign("QHALRMQTBLH");

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
    msg.setTimeStamp(0.20718822510230273);
    msg.setSource(16082U);
    msg.setSourceEntity(247U);
    msg.setDestination(3674U);
    msg.setDestinationEntity(160U);
    msg.plan_ref = 152605824U;
    msg.id.assign("QWISODIQDUFZWOKFYCBHTQKVBBVRZYLNVLQLEALBPIGJBWMXOMRODALUFZUHFHFUZUCENDQLKPOWAUTEJKNYLSMMGMCNEMDZLVYAWQHPSWRKAQFVRUVOZVHTXZKJRFLTPYPIIBNEJORI");
    msg.memento.assign("XURSWOOCLZNCNGGANVKXJYDJWIWFEQQEQBVZTRXWWQRKRQUOOSBHKRB");
    msg.timeout = 47986U;
    msg.lat = 0.006094025219119947;
    msg.lon = 0.3262674740904493;
    msg.z = 0.982148314064586;
    msg.z_units = 228U;
    msg.speed = 0.2551106942502628;
    msg.speed_units = 163U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9578038233459489;
    tmp_msg_0.y = 0.3905502101474363;
    tmp_msg_0.z = 0.1917557314236178;
    tmp_msg_0.t = 0.13548498492823258;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FAQQTBSONXAYOEFHEDHNDJGQUTRCTYIMPPESUDKWFLGRKKJRKPFHLMGRKZZUCVXLDLZUQQOCCQSHBTNZNIERYAVJNQBVFBOXEVWTDLNLQNRBSIABHDQWUNBDJOEAAYZLRHHHGXIJXWODWWPFRWIPXOCMXZGMCUJZJJPMAFLZOPGYTIFXKYMATVISKEXSVVHGVSYSWNBHLMSUJGMCZPOUKTSJKBWDEYEUCGRITPVYXUO");

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
    msg.setTimeStamp(0.804719217585017);
    msg.setSource(53612U);
    msg.setSourceEntity(202U);
    msg.setDestination(3844U);
    msg.setDestinationEntity(55U);
    msg.plan_ref = 1330295488U;
    msg.id.assign("HBNIBMACDKEENDRCRJJRGOWBHHGVAERSDDVZPASOOMXGXNBJVMTYKCULRRQFLYWKVV");
    msg.memento.assign("XJGEODDSJOEIMIIIDBEQGOVOARYIRHEDGREDMPFXOKEPZVTAHTWCKDLCCQCXUVMMAURTBBLSOZANPLGKSCBYORCCVLJCSNYROVZGLZINTDMNKNXXPFXWTEAAZZJRBNJASQXJMTQKAWWLUJNFYKUSSQPYULGVFPLFVUYPWUMXYHTJWWFFWXWAQBMBGUSDKNMOYZYCRUTITWHTGIVZLQXQBKQRPGCZHESP");
    msg.timeout = 25410U;
    msg.lat = 0.7844184801022513;
    msg.lon = 0.10969490927488035;
    msg.z = 0.5357724787611969;
    msg.z_units = 252U;
    msg.speed = 0.5400425267388831;
    msg.speed_units = 168U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9146078131089318;
    tmp_msg_0.y = 0.25234019016882026;
    tmp_msg_0.z = 0.8124765841710477;
    tmp_msg_0.t = 0.928058639634317;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JORWJDEHBHJNTRLIEFRYSDSLFNEZAYMTXYEPPGJRXURKHAYWDFCSMQDTYWVQIIXHPVGQRCZWMXBKKHNTJATUDYDVQPPXJVBQESVTKNCKUOVGIDDFASNASMOHMAEPYSNFSCWKGLRAAGKFCYTBLUKMPTLOIZGWIMNAPPHVSIULLSFOOQKZXOFUBMDBYBZVCJXRNIMNBTJTLPZGBRIOEXLUK");

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
    msg.setTimeStamp(0.21810645867894496);
    msg.setSource(21788U);
    msg.setSourceEntity(23U);
    msg.setDestination(59290U);
    msg.setDestinationEntity(227U);
    msg.x = 0.5336141013219826;
    msg.y = 0.4314735921679499;
    msg.z = 0.3632072516653684;
    msg.t = 0.0162875520344552;

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
    msg.setTimeStamp(0.20092428904665216);
    msg.setSource(42365U);
    msg.setSourceEntity(148U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(111U);
    msg.x = 0.5011334917490526;
    msg.y = 0.6696931788426387;
    msg.z = 0.20059273971040947;
    msg.t = 0.7621060836013342;

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
    msg.setTimeStamp(0.6516806850451091);
    msg.setSource(62154U);
    msg.setSourceEntity(193U);
    msg.setDestination(10486U);
    msg.setDestinationEntity(110U);
    msg.x = 0.7211423932808868;
    msg.y = 0.1273362550597691;
    msg.z = 0.3366980112106056;
    msg.t = 0.23947867130014178;

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
    msg.setTimeStamp(0.8987073763095323);
    msg.setSource(43249U);
    msg.setSourceEntity(103U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 1399935391U;
    msg.id.assign("EXWSBCLTIOFWDIJSQODAECKTLZTGBMPXWMUUPHJAEXMUFETOALCFKUPLGQCUGBBROYMXXOLFTNVYLVMTSKJQPVSORVVTFCPZIJUQKSZJGHHYENGJJPFLKYN");
    msg.memento.assign("ZZKXKETUUIKVKNSPHRKGZWJINWXIRBGMVFWRGDQFVSISHPROJONETIAUACNNOCXLSNLHAEYDATZWVL");
    msg.timeout = 39837U;
    msg.name.assign("ENPBGVSMTWSAJLLOJGTBWBBXXIBLYINRCEVACWUPQQTNTZBKJOCXCVLYCPBIXRIMWVMJZHMLOVILJPUGMHZQOIDSQASECKFAMNHKFJNUEXQYHQFDNBDHSZHDFSPGQJLQELNE");
    msg.custom.assign("FYYTFKEJTDZLVSBMCDNRXWBPUHJMOGNAIWSLTRLXVBDIVETQZKATBYQVLOBMIPUFQDVKIAMSNGRPSPVFUQG");

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
    msg.setTimeStamp(0.0017412799836784565);
    msg.setSource(35372U);
    msg.setSourceEntity(178U);
    msg.setDestination(14731U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 4201419764U;
    msg.id.assign("GPEBGFHUDYHYHWJGJJBFRXKESZWGWVSBQAGDOJMYTRBYQOFVTOEEUNGKVUVWHRIMNYQVNLICGJAUZHMQZXTHKPIXTWOXHSNDRQDPESMOLKOYOCYMUUCAFNSARJPPCKCTJQCHNLZEMEYBDDFFNALBOPCAKIFZRXRUVZ");
    msg.memento.assign("HHMANOYVXSNMXJDVKYQFRRWJPBZZTKGAYCJZJQHKDOTJEPXOUVLBFJWCCAUEGKZJTIIALNCKPENHYKGGFVKUWSWPIENTTGTZUHCNEBQIEXGOLPAYLTMZRPGLODQDQOMAOUZVBSZFDXYLXGKBITQYUERHFBODSMMMNKDWJBSIXCSOLREUCQUDLECPNXHUHYRWIGUFESIZAMXQACGRFBFRHVYSINPIBTJVWQMMNDFWKVJTSRZLCQSDPYFBLXVWW");
    msg.timeout = 46244U;
    msg.name.assign("VHQBRMQZTOSGWVAYYAHMXLQAZCKECYRACWIZFBCPNCMJKFYSVHQTAJEORXXUIYTRQUNKJCRDDQTNVJYHMXBLGWVMLQJYAXHKRWLVMKNLOYXNQGMMRDEUYSUZSDVEPSLSUCIPQUROPIFPNEWCLJXO");
    msg.custom.assign("TWMSUXRVLSOGWOUIHYEKJZJGLZCLALATVLTSMSFIIPPUCQSULTSDLBZAIATHHHJRTFWCBRNDAXFZKJMRHBNYLQYNZGCEEPTTNFKFQENVDAOQOKAWXBEWKWRQWCEYDKPTBRRQNXCTZLGSDPYFJMIMVNFCDSMMZXWHPNQVGOIOV");

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
    msg.setTimeStamp(0.05623790117331673);
    msg.setSource(17605U);
    msg.setSourceEntity(45U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 916177477U;
    msg.id.assign("AQFAOEUPUCXCGGOFRULWNDESKBHWJOPKKWEIQKAKHRGJRI");
    msg.memento.assign("IGPCNBOXJZXLIRRSRCIPUICXYZRFOEWWIUWWCQXHVRQCDKWZUETPMMUHDISKYZUBHOPGFALWKJGIXYSUNQTOAAYLIHQLDVPTHNRKQTXFOZRFMUKVGTCVUJMJELDHMKHSCLDTFPGBJAGZVJBBSLNBTJKTHJTQFLYCFGHBUWRNOYQERCBSEPEGXWZRALBNOZTADIYJENXOISAGFZWFVAGPFQSOPEQAZDJVMYVKKMXDVOXVBYKLANENQPY");
    msg.timeout = 4735U;
    msg.name.assign("JIXTBVGOWLMNYPBEGNKCMHQPLRFGPABZ");
    msg.custom.assign("IUDJBJSLFDXQIOTAWZIFGEAAKWJHK");

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
    msg.setTimeStamp(0.3780154243351256);
    msg.setSource(13057U);
    msg.setSourceEntity(239U);
    msg.setDestination(39283U);
    msg.setDestinationEntity(2U);
    msg.plan_ref = 1505718644U;
    msg.id.assign("QJVUCNGUGVFPPPYGHLEGXTFLXBQIPGWNGIUCHXNVFSSJDVBBZQWATXDRVAYIHRAWKCVSTNAFRTBRQGAIHSLQARWHWLUKJLPBCVDUOZJERXZEQVSLXXCWGIZPUFKAMK");
    msg.memento.assign("BTDJZNEGBSZHBFKKOBDIWYCNFPIRPBGWXWLQWAQLWCUBPLPXNSMIAHFZRNVFOLXJJDZUMHQXWZDTDASTUKAQWPVLJHUXPNIJRAPQTTERBSJEFGEGJCUQLR");
    msg.lat = 0.12286218073935107;
    msg.lon = 0.9621448968852465;
    msg.z = 0.2562595950575034;
    msg.z_units = 130U;
    msg.speed = 0.2554877477572386;
    msg.speed_units = 34U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 42712U;
    tmp_msg_0.off_x = 0.2022246965145189;
    tmp_msg_0.off_y = 0.9046729793192206;
    tmp_msg_0.off_z = 0.6278310169009347;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.3424969032507581;
    msg.custom.assign("FUYFILRGXYIPTQLJSIBSPZEHLMYZOSGXSWKJLILWSUSTIXRGVKEFGBXJJVJTWRAMLIVARJHKOEQDRMPMBBMPFVAYYNWURZPAUXBDSVTVNGZPZDWIFXWJTQKBXCFQSABAGYMZNTODQMUEYNBTEMGIACHZKDVKFDAULYWCRDXPHOXHERVCBAQAHGMWLQWKSTKNGLNCDHYCPZNURDCCEYNNWBUJQRVIZEFQJTOODLHJZ");

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
    msg.setTimeStamp(0.3064731133443964);
    msg.setSource(882U);
    msg.setSourceEntity(70U);
    msg.setDestination(11548U);
    msg.setDestinationEntity(193U);
    msg.plan_ref = 779308904U;
    msg.id.assign("HNMQGCQULUVCKBKBSUWIPWZFCNGTYEPVKFDOXCLXNESESJKVTFIOUVIBCRLNJYRBPROQZTPHLRDWENIETDJMXQVTDXWKKIJLVPQSEMZBOFFHGXUYSDWFYLYIDYMUTLABWJBIDNGASAHRNZXHASQRHQCZXAUUJJMBHAWOSPLYPPVJMYZSHMKEDGAKTOEIKLWQYJCOXGRVFAEJTXZEZHPDOTUWNBQHMQKRCICABAZYUVTFNFOMD");
    msg.memento.assign("NGPEAJVIDMLKUAOIOOIEYNJRPRWWSGEVQOGJHDPHIWUDKZFZGLTHBEVXTCIXRTWKLAVVMFPNGJKMSUZRLZJHCRIGRYXBXTSVOQPVSHGWTDPQXKYDQBFYEXACXWMCFABULQXNFAPDFNJLMWBUQDDHRVJGNEFQGVUOYLRUSBWKTIIHLHYCQULXBAOTOYRPCIIHDCYKFCCUMJENSEGSODMNBSOSSRQKQNAFW");
    msg.lat = 0.16004616302994423;
    msg.lon = 0.11547325765895244;
    msg.z = 0.12284591641447917;
    msg.z_units = 147U;
    msg.speed = 0.4910133098141036;
    msg.speed_units = 76U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 60038U;
    tmp_msg_0.off_x = 0.27514481886249254;
    tmp_msg_0.off_y = 0.36632160358961974;
    tmp_msg_0.off_z = 0.2813295397847384;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.32149735687553593;
    msg.custom.assign("VGPZVYPFRMXIWEWGUZZQWNMPCOVDSPQFAWOXFQIQWJJBPUOYZUDCQGTKUWEHVSBERJURFLFVYBEMSMREWJUEWIRPSEDVHIXRTHSSGTWCEGTYKDNKQB");

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
    msg.setTimeStamp(0.6634015805365188);
    msg.setSource(14995U);
    msg.setSourceEntity(151U);
    msg.setDestination(784U);
    msg.setDestinationEntity(193U);
    msg.plan_ref = 4037698823U;
    msg.id.assign("VEGBMSXWJYDAVAAFVZJOBZRZSTKGHOSLHECGSFLQYHIJAMUKHNLCHYMPSZKAPCAFCBZPRILJYRFUIERYNNSCUAQWUJLEDWRW");
    msg.memento.assign("TEGOMSHIAGGLJXODLBNOIZQEWWSVYQBWTTYFZUINSHXGVRPBPPITKCJVQDRBKSIZNPZACMSREMFELJMBMKZEHGYVNXRWYFYUZYOUHYMTLUQZCLPJAISWFUBCJFJFFMDKNXWKGTOKRMENEJPIQQUKFQQSFXCPWHSDZVEEXXJYOU");
    msg.lat = 0.7069093295209238;
    msg.lon = 0.6994378387929541;
    msg.z = 0.3329304030849558;
    msg.z_units = 247U;
    msg.speed = 0.44183589075340235;
    msg.speed_units = 173U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.40413439637991155;
    tmp_msg_0.y = 0.5446832254328864;
    tmp_msg_0.z = 0.007421418561054716;
    tmp_msg_0.t = 0.9757352431994288;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6645057561054296;
    msg.custom.assign("ETOMNOWULESRSQSJFYQMDSGPVSTRQJAYVLFURIZGEFYLUTGDZBCAMTDKTKVOJIBNWFMAGSEHVCDRRUXVNBZFBWKPNHZITLOYEAJKMMFXAOVMLKAFK");

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
    msg.setTimeStamp(0.1691561736580024);
    msg.setSource(39280U);
    msg.setSourceEntity(60U);
    msg.setDestination(58195U);
    msg.setDestinationEntity(56U);
    msg.vid = 11592U;
    msg.off_x = 0.10851784373363138;
    msg.off_y = 0.9773041444619065;
    msg.off_z = 0.8756217785847202;

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
    msg.setTimeStamp(0.756051466674836);
    msg.setSource(60836U);
    msg.setSourceEntity(199U);
    msg.setDestination(18944U);
    msg.setDestinationEntity(218U);
    msg.vid = 28840U;
    msg.off_x = 0.16172458289691527;
    msg.off_y = 0.5946287088961903;
    msg.off_z = 0.907686394897946;

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
    msg.setTimeStamp(0.35628831334966915);
    msg.setSource(25505U);
    msg.setSourceEntity(81U);
    msg.setDestination(36119U);
    msg.setDestinationEntity(199U);
    msg.vid = 24668U;
    msg.off_x = 0.2163971449953398;
    msg.off_y = 0.24613980942042502;
    msg.off_z = 0.6228191077071523;

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
    msg.setTimeStamp(0.4091780628189867);
    msg.setSource(35070U);
    msg.setSourceEntity(1U);
    msg.setDestination(13532U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.7679984291115688);
    msg.setSource(40359U);
    msg.setSourceEntity(197U);
    msg.setDestination(59185U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.006505024473166587);
    msg.setSource(56057U);
    msg.setSourceEntity(14U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(14U);

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
    msg.setTimeStamp(0.22269059935096547);
    msg.setSource(50502U);
    msg.setSourceEntity(36U);
    msg.setDestination(8770U);
    msg.setDestinationEntity(55U);
    msg.mid = 49362U;

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
    msg.setTimeStamp(0.7968953015118257);
    msg.setSource(60959U);
    msg.setSourceEntity(90U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(121U);
    msg.mid = 39651U;

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
    msg.setTimeStamp(0.735362579228919);
    msg.setSource(9111U);
    msg.setSourceEntity(152U);
    msg.setDestination(8969U);
    msg.setDestinationEntity(185U);
    msg.mid = 5572U;

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
    msg.setTimeStamp(0.856296889253513);
    msg.setSource(21364U);
    msg.setSourceEntity(207U);
    msg.setDestination(13401U);
    msg.setDestinationEntity(149U);
    msg.state = 240U;
    msg.eta = 39811U;
    msg.info.assign("CEPJDZITBZRBKWZJICQXAXMBROSADQODPOJFQAIEXSJXMVATOWEYOWXFWOFPKKZGLDVBQXKNCGJJGAXHFZGSLSFNYRGPTBZNKIYQWHCSYYXUIHPXDRARVDADILLKZBUQDCMUFNBMONCTBZTANRWMIYYTYSWSIGUMGLEAKJFRFUWKNQAZTPVYTKUHHMPWHBMLRKYVPDHRUEQROVIEHLMHEQXCUSCODLTFZPNCEUETWPEIJJGUOLJVV");

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
    msg.setTimeStamp(0.37977490722088614);
    msg.setSource(55494U);
    msg.setSourceEntity(140U);
    msg.setDestination(41601U);
    msg.setDestinationEntity(160U);
    msg.state = 30U;
    msg.eta = 50834U;
    msg.info.assign("MGCIFJKIEEIQSHDYKMOTQCDGAUGZFRBSXEMBLWKTECNWYDRFIBONALMEVVMQQCBZSGHVPHPJPEWTYAXYFPOUDBLYTNXSSKUIUJGHQBZDICROKRALDKTYFXFVHIXYHVRRHJNNGZOAODVVMD");

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
    msg.setTimeStamp(0.452309536060153);
    msg.setSource(51504U);
    msg.setSourceEntity(167U);
    msg.setDestination(43416U);
    msg.setDestinationEntity(156U);
    msg.state = 32U;
    msg.eta = 57006U;
    msg.info.assign("GISIPEZKKKXADJBLYUVVFHFRCMVRZJRGETRUOYNGNWWSHYNZRJYYA");

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
    msg.setTimeStamp(0.5593749200006546);
    msg.setSource(53083U);
    msg.setSourceEntity(226U);
    msg.setDestination(6271U);
    msg.setDestinationEntity(243U);
    msg.plan_ref = 1911228253U;
    msg.id.assign("LZMWRJMYBQLFNBSTUISLMDJVYZQGAYFERQJOPCVFGVMDZAHZVKNICXUTZGWLNJDFWPTOUDBCKMRCENMDHRTGUOVYTRFYYWOXXFYEFCLOUUSLJKJDOCAFGSHWMTYFVBNZEVPQBHLTCWKETKXUSINQOXEBPSNXAQVDCXTQAUHRUKIPRWCXIRHFIGIMPOASBJQIOLAOEKWVZRIGEZLXDDCPNBZPSKWBIJLJHEEGSHH");
    msg.memento.assign("KALNSSAFYONSZNBUFUZRLOCDKODFPEVTWCFKMBDXJEJYADWEVYNGHRWGOQRJCWMEYGNGHWQULZUJANASBIIHKYTGZVITDJRDFXVDERVWCVBXVLKQKALNWGSRXOPITERMCTEOXPITKBDDTYBEBCXOQBLOFWGFUMCJNFYZBKUJLTLLTZQM");
    msg.system = 55250U;
    msg.duration = 13910U;
    msg.speed = 0.9076191719069104;
    msg.speed_units = 65U;
    msg.x = 0.6486950702801361;
    msg.y = 0.45912878049754324;
    msg.z = 0.926248398796675;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.8550320025035798);
    msg.setSource(24481U);
    msg.setSourceEntity(56U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(164U);
    msg.plan_ref = 131770268U;
    msg.id.assign("ZBDSHWNVRRXVRUWKUPZYLDOBPGKHQYFOTUPMQEDKGZQROIQOABAHZRGEXJJGPX");
    msg.memento.assign("WRFJECKUUVFKYXNBOTZBFJDPLPJLTSBTCABELYYEASGXZYSNIVGLXYRQXNQMPMUHAAMFZKWQFRCMIZDRABQWQGAWXDJKQKTHISFJURBRZHUJKENKHSGOPEBDWPSWVLFNWICKHSMVWTMBPANXNOXYGISCBZLGVWEJZYEAUTRCZEMNGCRTXHKOMAQSOLDLLCODTOJETHDPHVNVWPRKGMVYNLZSQXBYOUX");
    msg.system = 10075U;
    msg.duration = 36657U;
    msg.speed = 0.7859445337887289;
    msg.speed_units = 101U;
    msg.x = 0.18162875331726014;
    msg.y = 0.7709368249778221;
    msg.z = 0.8071012306917763;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.9454314423231313);
    msg.setSource(5718U);
    msg.setSourceEntity(158U);
    msg.setDestination(17873U);
    msg.setDestinationEntity(86U);
    msg.plan_ref = 2447452057U;
    msg.id.assign("ZPSZTWDUSKZJOHWJFAFOCMZPQUKDRGUCDFRNKHASZKBBBULIRLGXPRGGYOBYNTRYZNIRYNTBIVRCESMTMSBJHQEULRYIJHLUMSOMSJPCLOISNFYNNAEXJLMOTMQWIKYXLXKEDDIMNICFGCHGPYWEXXJOWVEFXWPAPAKJEQOUAZLDCZWDQVDVXHP");
    msg.memento.assign("EYHNAMKCYDJIZWTBAXEZCVZSBHLFKOTLRTEWUUXDPWLSZVNIFJRIRPAXMCLFSOSPLSXRDNDMCMRIJNDNWONROQAQBDGAUBBNGMUDFRSMVCHBAJEUCVQKVTFBGIENXEXFYHAVTBKZAQ");
    msg.system = 50578U;
    msg.duration = 63503U;
    msg.speed = 0.71040139712615;
    msg.speed_units = 86U;
    msg.x = 0.853640604620187;
    msg.y = 0.7975605798453733;
    msg.z = 0.1249085080670218;
    msg.z_units = 247U;

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
    msg.setTimeStamp(0.725163310954588);
    msg.setSource(58365U);
    msg.setSourceEntity(64U);
    msg.setDestination(45659U);
    msg.setDestinationEntity(70U);
    msg.plan_ref = 3520605660U;
    msg.id.assign("PDWKVXSYGIGBEIDLWPAKNQVYGARSROUVHCCHPYKZHMFLORFLVCDCNFJERJCUOLDOQCKLVWPYGYHOWUITNTFKNCSXRJELMFZPMHMYDZRUFELQOSIPTBQIRSDAJBETIBSIJZAJXDXXUHYNGTOMNQQMVP");
    msg.memento.assign("VMYRJOUUPGBMLMBSATEIRKFSCYLHFBDMVZUXGYJ");
    msg.lat = 0.04842625239422482;
    msg.lon = 0.9818027680178949;
    msg.speed = 0.17163686237852682;
    msg.speed_units = 125U;
    msg.duration = 12843U;
    msg.sys_a = 6221U;
    msg.sys_b = 13940U;
    msg.move_threshold = 0.05367247264911734;

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
    msg.setTimeStamp(0.05790987780411638);
    msg.setSource(51805U);
    msg.setSourceEntity(91U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(145U);
    msg.plan_ref = 2676423714U;
    msg.id.assign("YQNTLGKSRHYZWZFDGRXCKYJFCTFJUROWNWBDWBVADZQDGPADWKTNJCOXAAPZQUIPAEUMFUXSVTGRPGWC");
    msg.memento.assign("WFWHBZHFIMLXZRZEUNGNAQJVVFVKKANYQHAQSJOMBKUKLSZGODYZIPKGEXOOAMUWQNWNOFAEICXNJUFGOEBRBASWEBZQQNIUOKBSIE");
    msg.lat = 0.8969308220963575;
    msg.lon = 0.8001492538538262;
    msg.speed = 0.37930727543543274;
    msg.speed_units = 72U;
    msg.duration = 29295U;
    msg.sys_a = 32799U;
    msg.sys_b = 33207U;
    msg.move_threshold = 0.5656635883878796;

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
    msg.setTimeStamp(0.0297547362378191);
    msg.setSource(26862U);
    msg.setSourceEntity(227U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(78U);
    msg.plan_ref = 2485788655U;
    msg.id.assign("FHICJNQEELVAXOKJWMMLEWZKYAJAHSUNEGLAGXWYIBZBEFNOYPHNOTZAGMXJYCWGZGPDOMJDTQNXPPIQQUVGRQXIZKQUJOFYUBARPSDSPVLTCWBVZBHRGXVDGVTWBVTBIRDW");
    msg.memento.assign("KVSUGAGTAHCIQKZPLMNQKGCURXESNEUGCWCOWVYUTKQRBBHADHXLDTMYNDSXPPCGFLYLMTLIOETOCFNDJJOVNSIIBJGABDQUQWNATGYVEUVBWAMZLDYOFYHIVJIHPUUSPFPFJZTXITCRGYKKWRBAFJOHIBTKSLPQJXWUCZFGSXFOE");
    msg.lat = 0.3831011281092074;
    msg.lon = 0.48198309744107715;
    msg.speed = 0.7182972104667082;
    msg.speed_units = 210U;
    msg.duration = 14091U;
    msg.sys_a = 31924U;
    msg.sys_b = 33100U;
    msg.move_threshold = 0.7848990664086305;

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
    msg.setTimeStamp(0.24613087770702802);
    msg.setSource(43809U);
    msg.setSourceEntity(19U);
    msg.setDestination(30748U);
    msg.setDestinationEntity(214U);
    msg.plan_ref = 1714719361U;
    msg.id.assign("NOAJFSCHBSMNBQTDIHSVYDEGDYNLDIQQSWHAOMCVEAUGWKVWWUSGDKTZGJFDUJIKZOSLNLILJRFAOSWQSYACAXQPUWXPYELQPRTMZXVECHUDNHOEXBCTDPRUHYMBSMAIEORIGVXZPDNFOKYGVIUBFRCLHEMLXFZYWKFFSJOHIBYXMTIMQERGNVLRYCUT");
    msg.memento.assign("DIXYSJKWTSXOAREWSVEWYXJNFDWDLUHGMYPFBJIKTMFBZSGJUKRGDIXJQRZSEKFBUNZTIAPANLKVEIYOIVXXLELSTJACXZLUQXWDWGFHBPSHACROAIZDHRGKUWCAVWFMGMEOTRKBXMLARNVTDIETKSHMNBMJECVQVYPLXCYSOGMFMCQRIZHQYRBDNLCJDNCTHYQZQBPYTKDMZUPGPKAQVPCBJSGOGHQEUUNZIVAOTPHNOFCUJWOZ");
    msg.lat = 0.32429663924734875;
    msg.lon = 0.05627163273425617;
    msg.z = 0.6227926418128267;
    msg.z_units = 157U;
    msg.speed = 0.06737322806832191;
    msg.speed_units = 46U;
    msg.custom.assign("HRYVYBTDQBVDVZUQBPPWWCFZOTIIQSPDXAYDRGPARHAWTHMMDXONZFFRHIZNFIKMEBBGEJGEMCTZOULZDWCLTLLGFQVSJKTOFVKSZUHOSBCAUNCGFYIVFEOLKEANIIWNNEICUMKYBNKULGSCLPVKCYMDZXQRNYSJGTTXXXGKXMFMSQKTPKHPGOMQCAMJQUJSDPTGQVPXROHWUOBXDRJPJEVZLRRJLBJSRAHYISLEJIUAWEXUNYANZQBY");

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
    msg.setTimeStamp(0.5587395581069744);
    msg.setSource(62428U);
    msg.setSourceEntity(194U);
    msg.setDestination(32971U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 3218341567U;
    msg.id.assign("GIYINXBJWPDJPXWBSSZJONQITKTSDLVOWEPTKCPRJRELWLRKHATBRBZMYJAXFCREQAFHLHDCNHQVUCMERKMASEOBNXOYMSTRVIHWGFLDUNOAHLQAFEXHYAUCGGJPUSVFZW");
    msg.memento.assign("UVTCUTOZJORTNFHROBRYMKDGBWZYRJOKOVQZGPEDMZFFFHWPHUPPJJHHNESZNLIWQGKTENBOXRVPMUGJEOGMVBSVGIMTMIDZINKFNIQWYJFXACQATARHDHGYUYQKXNIKLXOPWD");
    msg.lat = 0.0482927620005531;
    msg.lon = 0.7477223996574622;
    msg.z = 0.9026107509347596;
    msg.z_units = 106U;
    msg.speed = 0.41214201906331993;
    msg.speed_units = 185U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5226830505280078;
    tmp_msg_0.lon = 0.2104822664990167;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("XNDZMJEAQCKWFBMTBQQQWNBAODPJSYRFRPIXLHPNGWJTAEIWUIVOJDIOZLNHWHPTGBKACZYEXFLRSWQQANCFURCHHHMJGQGBVZWVHCBDGFSSIIRP");

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
    msg.setTimeStamp(0.29338862534531407);
    msg.setSource(50138U);
    msg.setSourceEntity(36U);
    msg.setDestination(51829U);
    msg.setDestinationEntity(4U);
    msg.plan_ref = 908703573U;
    msg.id.assign("EKOTUONCUETIRIXOMKBNQOWNZWNFKHSQTJIHCUJQIXZZFMFLGGHZWIAGWJDOIPDDZQKNWCQYEBMPLFAPRNZWBLMAYXJHRRMFSTRYLTUNIRJVVQWDYSCQGQJHSGJKV");
    msg.memento.assign("VVTPEWMYIWKBFPANTAJMGUIMDRYGBNVFERXI");
    msg.lat = 0.12588921971087175;
    msg.lon = 0.9903016228798864;
    msg.z = 0.3900899197495149;
    msg.z_units = 124U;
    msg.speed = 0.014434889538286422;
    msg.speed_units = 97U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7247719415070846;
    tmp_msg_0.lon = 0.09833257425232211;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NWHKKSLZZYIHJEIMTSRUNULAGVNMUFLBWGSYKBLRSVTBQPDNYTRXZEZBBQTUMIEWXPFBOIWEGJDCXGYCMFHVRAIKPJPYFWIOTPSMRENCPSTHKLDCUUGCFRGDQGIYVQYLMJOFXGEQBJHFWPJHMDEFSNEOXJJRQOSQVTLODXHAOPMNNCLQIJQRPWSAZBBGSZFZGAHLVNMUVMDKFAWEQPVOIUTACYKUXCXREWZRBYYHDCDXUJOHKOA");

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
    msg.setTimeStamp(0.028166744926290233);
    msg.setSource(14562U);
    msg.setSourceEntity(135U);
    msg.setDestination(59565U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.8169831215838279;
    msg.lon = 0.6118905124991639;

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
    msg.setTimeStamp(0.5146070645965132);
    msg.setSource(11066U);
    msg.setSourceEntity(52U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.4548080683457577;
    msg.lon = 0.23198992685765085;

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
    msg.setTimeStamp(0.7860505778774017);
    msg.setSource(9079U);
    msg.setSourceEntity(89U);
    msg.setDestination(7474U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.791340054305566;
    msg.lon = 0.873168807168807;

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
    msg.setTimeStamp(0.12441353099920971);
    msg.setSource(40064U);
    msg.setSourceEntity(162U);
    msg.setDestination(4805U);
    msg.setDestinationEntity(254U);
    msg.plan_ref = 3782104585U;
    msg.id.assign("IENNTFYWHZSNUJBLOQLNJTQSPVWYZABPQLTFHYARHNBIQYDVMIYPJZFUNQYGIVZCRVWIFLYBHABJRSPAEBXXRDHGELYZBOKMKDUCCDSCHTIPGRXEWDGXUOMTRGMXAJHYSQXYLOVMVKSOSXZOHERLTCWQXUPTVPKQQDCLKKLRNNVAENUFVHMPZIJUUUFXROGZWEIFKSL");
    msg.memento.assign("JYNUBLTFAQHNMPGNCSKCFSXCUIKIFXPZOVZLAATJUZVRGWQDCMKLRBUNCPAYUKSHWRUBWXOKYHHURSWPGNPBWVGLEBZQHXVFFGDEHRJLEWAENSIVVOQLSKEJROICJDDZAOAJYZFFACQZLIUPBEUBFHTMPNTJGXLFGXGCHQKDMIWYKKWTQXZSA");
    msg.timeout = 39224U;
    msg.lat = 0.8301357175163891;
    msg.lon = 0.3353034751914823;
    msg.z = 0.13311908829614127;
    msg.z_units = 212U;
    msg.pitch = 0.8361089580935324;
    msg.amplitude = 0.5113429078392068;
    msg.duration = 49119U;
    msg.speed = 0.2869462468045296;
    msg.speed_units = 157U;
    msg.radius = 0.6483132741874699;
    msg.direction = 116U;
    msg.custom.assign("HFVNOELGYJCPNTYBJTEBAWUESLBACZSCQBWRGNWLCIXNJFSGITYWLXAXCHFTBCHZMVFYNFSMOVDRDCPMJMKGBOIGENSFFKECK");

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
    msg.setTimeStamp(0.408126264946984);
    msg.setSource(40422U);
    msg.setSourceEntity(188U);
    msg.setDestination(49147U);
    msg.setDestinationEntity(24U);
    msg.plan_ref = 3006754567U;
    msg.id.assign("OBDTSAKMJXUWXYQQQMWVXFKPBTJPTDMGEFAUSYIZROOEHFVKTKWNHLHXZWORCBBULBFRTAYJDECNVGGEYKFZHOBKMPRDNKCXLDTEYGMUFVMPWQHHWRLBTGPUTAJFOPCQAOQMJHBHKUMZGNIQYLYGNREVQAUEYLCEXRSLODLAFZDJJXIGPCNPCRSAZGKTFDZSQZJNVEIRAXPSQSVJIABWXMNZPSJTOWIZUMIVYCOSDVHLYBNWWGRS");
    msg.memento.assign("KJHMIZXJDHAMCXZGETEKZBQLCHIDUHRWHIFCMBKAAWTUWBGISBTETKAOLPYXOXIOLGNFYJWYEVEROEKMOQGXHQDKYUVUEIWSXXCGSBGVMPVNNGSDNRUSYIBRSSCNPEKFPFJNLLYWPPXVFYDJOCUQRZICZAOAEFFRRFMLDHUMZWXOKJEOGRLPBCGTPAKNUVJYHQZQVPSIGWMDDNVBQQMZFCRZAMFQOTTUJPHQTSZKNDILBTWDRJUYVLV");
    msg.timeout = 21706U;
    msg.lat = 0.4427638572017307;
    msg.lon = 0.10686051020581411;
    msg.z = 0.05937621625328915;
    msg.z_units = 184U;
    msg.pitch = 0.40999404981820975;
    msg.amplitude = 0.5334420123039367;
    msg.duration = 55304U;
    msg.speed = 0.7754254223502468;
    msg.speed_units = 225U;
    msg.radius = 0.5286079982726962;
    msg.direction = 121U;
    msg.custom.assign("NSICQGXKSNOHMOYPJROIJJFAKCFRXTRBBXNCDEGYKZXQZQLCEALVPWLAVCTRBLUIGL");

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
    msg.setTimeStamp(0.6013686538845352);
    msg.setSource(62136U);
    msg.setSourceEntity(102U);
    msg.setDestination(19102U);
    msg.setDestinationEntity(40U);
    msg.plan_ref = 631374600U;
    msg.id.assign("XDQPUGJLZWLLDKNLPXJRHRNUMNRQGNYVUASBUAFIEILWQKROKFYLHBKLONWEEXNJTSRFPTJCHZXBAEEPTGEHZSPUIZVGBFMISJOUHQNZDEIRGQIDTVQSFXBWUASCTAAVOJYFXVCBRFPJNBOILGHSEZWSXXGVWCZMZWFSIDTHMYHFYBYCXLOMGJUEKWNQOODMTYUYWKRQBDBOWYEPCA");
    msg.memento.assign("SKPXGDNEFBKIPCGBEIBRNNRUMMDITZLGFHZSDVJQSYTPGXNAVCKCRZLVVUJTGQWIHAUWEODROHNBJKHJARKTDOQANFFXGEINYJISLFKHBMOEBWVPKXTFCCLTOAPYCUSUARAOLBEXNHVZJCXDMPQUKSNVXWQVATDFEHYXWKDQTAJJBHVWDPIZBWYQUUSFGSKYNIELFLROHWWLYLOZMIWVQZTRHCYZY");
    msg.timeout = 9930U;
    msg.lat = 0.019209528762549555;
    msg.lon = 0.2793320597839477;
    msg.z = 0.8083961138947909;
    msg.z_units = 42U;
    msg.pitch = 0.8954737868506379;
    msg.amplitude = 0.6685467559541701;
    msg.duration = 19658U;
    msg.speed = 0.3636152197359269;
    msg.speed_units = 73U;
    msg.radius = 0.50161403291122;
    msg.direction = 220U;
    msg.custom.assign("UWQUOXVTBRZELFKRPXNXBQGFSFAKEGDOESNQBQQNCBCCHHZSDOSYTDIIMXMHOYUPPQYUKZDIDVWWLYREITEFMFKMQCZAFZXLAHSGUTRETEUJPSV");

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
    msg.setTimeStamp(0.6907460218402319);
    msg.setSource(15718U);
    msg.setSourceEntity(235U);
    msg.setDestination(14473U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("DQIWAYBYAKGPSVMWCSKQITFOMYYHVSOHVNVBFXRXDTLQUTPIESIDNRRGPOCUSJIJCGTZANOFCZUJNGMTNBIZYGKKKILVLEQRNSHKWOXYFWWVVHHMOPLRUJBJB");
    msg.reference_frame = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 57350U;
    tmp_msg_0.off_x = 0.8185533356385511;
    tmp_msg_0.off_y = 0.28054326178740485;
    tmp_msg_0.off_z = 0.9359568968836298;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MCARNCGFWMYEQFLJXUNESFPIDXQWMYZGGBXYXAZIQZVXYGDQVNJAKLRTGNGVJIDHYMLBJBKYTVSMFPAYNQQNGVD");

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
    msg.setTimeStamp(0.7285924645277982);
    msg.setSource(26470U);
    msg.setSourceEntity(106U);
    msg.setDestination(23035U);
    msg.setDestinationEntity(23U);
    msg.formation_name.assign("GCNXBDCEGMBKBZHKOREIOJTXQLGWTXLAPUFXIRYIMJPMNYWJDTHOMVGAQFDLUWWHPDODWNCYEILVTLKNQQACLEZZITWIEAFNEEWYPSRVIEYVJMHFQIPNSS");
    msg.reference_frame = 218U;
    msg.custom.assign("OPNZTQJWHEGREQTJJIISKXUEPHIXHAWNXGOSNBWFPYEDVMBQNARVGTXNIMFNDDIUVKYQXJHDGQDCTCGAPHSUFSCDGKCSOCZKKKSEDKLFUIRSAQYIZCFGHUECVHIRCTASBYWAXYUOLMZOJVNPWFGYBDFRWLLOMXFLGWLMWVERQBLMUOUPYPTNADBZDEZQOXMASMRKXVMQJACPFJTWJNPYJSORBRJV");

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
    msg.setTimeStamp(0.019238378522350774);
    msg.setSource(30906U);
    msg.setSourceEntity(78U);
    msg.setDestination(24878U);
    msg.setDestinationEntity(152U);
    msg.formation_name.assign("QKIPPEWBYKMCNXSPFAEDNZORZJWOUYJZYRSSYJQTOXFBBKZMYGIEUCSKXHDRZXYGWSWESQPPTVDTWUVKPYPILQCIALLEGRZFLJJXARFGVMIHLRNODUAEVZIHSUDOEH");
    msg.reference_frame = 60U;
    msg.custom.assign("MBURVYIWFJUBRYDMJMHBWBGIWAORTEKDCAOUNPTSQLAZXQLNDYIESUQEPZH");

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
    msg.setTimeStamp(0.21799599611345521);
    msg.setSource(63573U);
    msg.setSourceEntity(140U);
    msg.setDestination(11529U);
    msg.setDestinationEntity(83U);
    msg.plan_ref = 3630687446U;
    msg.id.assign("YFSUJNIPKPDCCZNXOJUZNJMUYGBIRQVVSFSKYJQZKXQHYICNUREIXBUSQBZVERHPYAJWDKTVLESCRSJLLERIKULLDBXCLIQWBMOXCIMALWEILOOWFREQMCOJUAFHPDMAEKYDVGBYPJTVTQWCP");
    msg.memento.assign("FJMPDMWMKSTCIHNNEDIZGTYBJJGOYDESVBJFVGOWMICKBXHZYEUTMKQNQHRLDESQFVTEKLXHICSDAUZRNPLXBPHR");
    msg.group_name.assign("CGGXBFXPWSMWWOJVFFRUELLZXYPODZLFKIIERHQGVOESMYNVZCBCBJROUHIWNAHAOFKRQFKSOTPZWRMHUYUYQPVBSLAYTHZZJVGBACTBEIVXPPLKDQNQWKMSSTGQGXLKMTHNHQWBRIJCEDIDVOFDEXPCXJVIRLDAESZMI");
    msg.formation_name.assign("SPMJRIXSJAOQYIPRWBEOEPZMVBGCAEMJRPDKHTUGDQKALBSOQUCKJFWWNQCNRURKXRUZOSQDMPCNBULODERVVVHCLFGHGCQPWKLRYSSOFYVOYOB");
    msg.plan_id.assign("OJUYSCRVZRUCGJNWSPTXDJKFOVVRWSDLAURCMOGMLYVGDMVECKBFTABCMIOBIZLCJSJPITLLRIBRQMOKUALSIXEDQYTDEM");
    msg.description.assign("ZUIGSFDWTPTUYJVGSITBBISHRRGKWAMRXEVSSDTCKYOQDPUADQDJPQVIMOAAAHUTBINEVBLFPOEHZCCFQMXBNCRPYHNXQRNIGFNMSKYSYGSRWVJMCWZQHMEDOGFZHIAAFNDMLEPBJWQMINLRXOBXCVJIGXORDNPMAHWVUJQFUCHUIAGLHQXPWEFPSYXRGKYJUBBKBQXUPLECKYZDVYTOZCVATLYKXOVFHOZEJKUWZKTNRGZJOZW");
    msg.leader_speed = 0.017382165973135577;
    msg.leader_bank_lim = 0.5778631690846118;
    msg.pos_sim_err_lim = 0.032701418123194825;
    msg.pos_sim_err_wrn = 0.5329446057485943;
    msg.pos_sim_err_timeout = 42002U;
    msg.converg_max = 0.9785433127574136;
    msg.converg_timeout = 64701U;
    msg.comms_timeout = 45810U;
    msg.turb_lim = 0.0930359827895485;
    msg.custom.assign("OVQEUQKLDFSSNPVMTYZZADGMQAOSHIKXDHOELAFJZKWVPDSEKPVTHCJLYZFZRBCUWRPXOETFOWUWNNMJHIWUCSGPCDUHWCSLUHYBEBRQMEGZQOVLBAINUIKCTQJQUAECABCSKSJHRMCOYTLBWJXWBJRPTSGHFWGEJMPNKLGZNVAKGWJTZPMA");

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
    msg.setTimeStamp(0.12354655309489793);
    msg.setSource(61906U);
    msg.setSourceEntity(31U);
    msg.setDestination(50419U);
    msg.setDestinationEntity(2U);
    msg.plan_ref = 3550676005U;
    msg.id.assign("IKPPZWAATALEAZIHOTNQXGCZWRGQVXUPRDFRPGNEKMUOIHIAFVNC");
    msg.memento.assign("XBDPLPRUZNOUBHYKYIOYJSXCYUVEUUDKFYNVRDAZWGXBPTRFSJACI");
    msg.group_name.assign("DZDBKCAQZEZPJALLJDQJJZMRLIUXXTOGWCXSRUEDCEVFBYMTKSOKPIQVNWQZUMAHZRMHDOQBWKABPTABMPXDXGYNFTMKNNLONXRNJTDBEHPXVHTGQYMLZCXTFJUMNZZIELUNRHHGYCVVVHPCFOPSYKJITQKGHUQQGLESFKCEGAPARSBHSNSFUBHYYAGWIDGLQXAPW");
    msg.formation_name.assign("REWMNGRECVFKAHGFHCVTVUJGDIUEIWBBFQAHFEJBQFIKQMVJPPTCRGZNWSOLXXWUZCYTJBPCGCRDTTIAYSECLMWYHUTMXYPPQRHENUQHWUBJKYWYKYYXLZAQMEOAPNIBZEFSLQZKGJSHVOQKFUAAXZRYSSCTJZFBXGNOBSMRUFXKAMDMLDWDCPROZ");
    msg.plan_id.assign("HVUUPTLDTYRIABVWHPGVDLLKHMQWONFDNMQSFNUBMYHFTNJGYHDWLQOUJGVKMTYNETMIERBTIGUUQRBDRZAGYGNZKWGPCRPPDIHYANVIICAZDQBAYEFQPOUHJLXRXWIINKMECXWQCMTCMXXWLDKSIADFFZVUEZXEEVISSQOSCJKRPVSAZJJLYREJEBZGKPHYJCYCBKQKSLRWH");
    msg.description.assign("WUPYNFERGPJCTDUMOCITEMPSVULQWGFMHRBYTODKUYYNIXTWIKJAZAFHLPSQLBVRYKQCKKEDOZTVVVUFLMSQGWSVLZIDLVGOCSEIDCQJOMUXEXRAREJHIXEJB");
    msg.leader_speed = 0.35913326073246543;
    msg.leader_bank_lim = 0.9967241936233966;
    msg.pos_sim_err_lim = 0.19347900247960081;
    msg.pos_sim_err_wrn = 0.731297947743542;
    msg.pos_sim_err_timeout = 55762U;
    msg.converg_max = 0.5930461095140342;
    msg.converg_timeout = 57703U;
    msg.comms_timeout = 23808U;
    msg.turb_lim = 0.6231985751135894;
    msg.custom.assign("JRVBXPUSOHMHKNZQSHTKHCETRXALSOVICCFEQVPIBWEBRCBKYDXEMBOKUIUSYBNTTQLKCDXEJTWWYGECWCRUD");

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
    msg.setTimeStamp(0.7322363526012343);
    msg.setSource(59031U);
    msg.setSourceEntity(151U);
    msg.setDestination(62064U);
    msg.setDestinationEntity(101U);
    msg.plan_ref = 3822980128U;
    msg.id.assign("XFGYAGAXBRMVTYHTUXZZHUSQDWDJCQQBHKIFIKTQNUPEEXYKXLCBNRWAKERBJVHMFQSMCEMHJPOTQUPJVFFINBDCZIGYREMAXXVESHLCWMJQBRZVQSNYPNHAVVWSLHNLBUGARDPZCYNOUWNUUHLRUOKTZIEYYDNBWDOOKMGNZHASSVPCGCFRW");
    msg.memento.assign("IYOETHPVIYRAATCCSAZJWBPYVFTNFQWGZOVKWFDRBYXCQPGDNLMLCUQVMYHXHOJUJBNGMDGNETXITLLGWYPQXIWLLGTVVNJTKUADDJQBYRRSDBXMXXIHPMSRZQFSRJACEQFMSZJBOSYQFKCFPILKDWVRNFEWZFLHWVPKHJSKAMECAMUJUABMBIZHNBDQXCMRLKVYGHKRSQPWEKGJCEONRWZGTE");
    msg.group_name.assign("KJMCESEFSGOABSBXUERQJSSXVNEKPZTEQGZMOPSPUYAAZAGFICYCRKZRKKHRGYDFTJWGVKDDZMJZALITUIAVEZBVWMGNOBYMIJGQCRLZFAOGSWTHNBRNEUPEOHLRWOCIXLVMHDQAFYFTHBQQNLXZPXKWPDLHYQNEOARTLVUURBIKFDQYCVMYKBRDFESXYQXNQDHHWWUOTUVUJPSFYWTKTJZMOBBNIPXLJWPLPCHSTXCJHDFIVG");
    msg.formation_name.assign("WGRUGROAOEEENSMUJOEDOKQNLSTCZJIYNPZQQHZCWSYGYWSSODPFDXMDQGWLWCRQJRKAAWFVWJKBUTWTZVLKIJJTEEDTUXPXBDRLQATISHTBKDOFKBVNQUMMUXFJZQNMM");
    msg.plan_id.assign("AYEMDIRISJNQAJOWLWVCYQKBXZGKUTQMQZNIVXDYIAJHVHRNRBFGZCJUIIEZFGITVTLCGPILPDKFFRIMBLHCHOISEL");
    msg.description.assign("FOTRWDYLYGQWAMEDZULJGJFEJIVKGPRJMDESMCUGOSPUAZOTKSXEYRYXQTUCXBBWBXBCNINUNUCVAPASVAFKZSHPVTMBZRIFULGYHQZFZFRJXOOLWHHVLUEZXMFNKYVSFHZOIBNDWBWIAGRXWDCLBNBINSUHDM");
    msg.leader_speed = 0.9176625767275501;
    msg.leader_bank_lim = 0.5528999443726037;
    msg.pos_sim_err_lim = 0.856195220569786;
    msg.pos_sim_err_wrn = 0.6520850259259672;
    msg.pos_sim_err_timeout = 35467U;
    msg.converg_max = 0.3334452414097908;
    msg.converg_timeout = 8981U;
    msg.comms_timeout = 579U;
    msg.turb_lim = 0.5128470007842749;
    msg.custom.assign("QZNAVDGHYOJXUIXXPPCWBFDJXFKUKZPVCNESJHTWUCMOFUTDQBMZOOYRVMVEZSYGNIUHVPSX");

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
    msg.setTimeStamp(0.3522573845444822);
    msg.setSource(5171U);
    msg.setSourceEntity(185U);
    msg.setDestination(37267U);
    msg.setDestinationEntity(114U);
    msg.plan_ref = 2818756920U;
    msg.id.assign("FPCBTKECIIDRJQCRUNSZOKHPFBUZJCHMVLFVIAYRFDUCXKJSMNMHLZYFFUVEHACPIRZXDGPFGDJHYNDZQEAVXJFVEYBMENGJLTTICZYTILPGVBETKGNMEZAOBRRCPNUWWSVOHUHKQLMDRIMWGYYSJZXKGSDXWMLYKJHTOLGDLQTNAJKSTECORQOKNZVDGQSRBMANQKUBMNAFQWEBXD");
    msg.memento.assign("IGFAHKKCNDGRWGFAEZVSOPRSCQBLIWUAHGLDMTHLYRNVHPQJMXYQFUWYKUZXHJTTTUHRZTIIBLCRPOVLQNIDEPTKAOMRCSNFXXCVIGUWODXYSSXUEMMJNMQHPXJBGBIWAAQBFVDBEYJBFLUWNNVMIFKRHUJTWNCJLPPBQCAZM");
    msg.control_src = 14894U;
    msg.control_ent = 144U;
    msg.timeout = 0.4551252229928887;
    msg.loiter_radius = 0.42070263215311343;
    msg.altitude_interval = 0.036223218798066115;

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
    msg.setTimeStamp(0.338015421398271);
    msg.setSource(61789U);
    msg.setSourceEntity(82U);
    msg.setDestination(9426U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 1970884637U;
    msg.id.assign("MPFZZQCKJUXDPFQOGPBHSGLRZMJHBTTPTYLJGEHOUANLJFPYDWCF");
    msg.memento.assign("WTEIFGNAQVYZIJECAQZBIMLGDUQITHERNHVRYYFKEVDBXVCFOZJJDHLANEHYFCYMVKWNCUNAPPYPXZITTEXDOTUFQHOQEBM");
    msg.control_src = 53420U;
    msg.control_ent = 123U;
    msg.timeout = 0.0506637807180812;
    msg.loiter_radius = 0.2539643040079962;
    msg.altitude_interval = 0.650340042316494;

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
    msg.setTimeStamp(0.8141173629212985);
    msg.setSource(10965U);
    msg.setSourceEntity(42U);
    msg.setDestination(54171U);
    msg.setDestinationEntity(122U);
    msg.plan_ref = 4095272582U;
    msg.id.assign("CHVEZACIOWWDYUXMSAPCUFTREDESLKITJXWGPCXUSFHUCHOBQEYMWGHNKHTOWDDVRXBUTFRPOIRKGWTPP");
    msg.memento.assign("ELLNIDGYLCIUHDRMPSYMMWPDIMYLZABAELPNYYQUTGPEPRUTFXRXGXJVRHLWJBKMQPWDCPQMUTERKXSOGZBXVNSXSJMGVRIFIWOJGPAZQSSJXJBPDEAUZCVIXZFCRYZQTNXEKIFFWEWBHZFMDLONQUTNAOMCJCHZVHSA");
    msg.control_src = 64344U;
    msg.control_ent = 63U;
    msg.timeout = 0.34151277908269806;
    msg.loiter_radius = 0.7765604949552488;
    msg.altitude_interval = 0.07042240689270607;

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
    msg.setTimeStamp(0.032531239749449936);
    msg.setSource(59222U);
    msg.setSourceEntity(176U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(58U);
    msg.flags = 158U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7526277870717071;
    tmp_msg_0.speed_units = 229U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8484983897041687;
    tmp_msg_1.z_units = 163U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8240323786987701;
    msg.lon = 0.29656260404066015;
    msg.radius = 0.8865673024047424;

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
    msg.setTimeStamp(0.766278220028587);
    msg.setSource(32995U);
    msg.setSourceEntity(168U);
    msg.setDestination(30990U);
    msg.setDestinationEntity(77U);
    msg.flags = 142U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6321970694928403;
    tmp_msg_0.speed_units = 113U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.32481329983854657;
    tmp_msg_1.z_units = 101U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.554393283300487;
    msg.lon = 0.33012686789052337;
    msg.radius = 0.643586988752128;

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
    msg.setTimeStamp(0.7086808935979623);
    msg.setSource(55976U);
    msg.setSourceEntity(42U);
    msg.setDestination(38754U);
    msg.setDestinationEntity(140U);
    msg.flags = 116U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.01703751909021911;
    tmp_msg_0.speed_units = 104U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9993379031299863;
    tmp_msg_1.z_units = 241U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9523352239450387;
    msg.lon = 0.8079610398540172;
    msg.radius = 0.6482083828571241;

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
    msg.setTimeStamp(0.5931110056028849);
    msg.setSource(31635U);
    msg.setSourceEntity(210U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(253U);
    msg.control_src = 26864U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5761828820601642;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.051249777380380834;
    tmp_tmp_msg_0_1.z_units = 254U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8537007243418692;
    tmp_msg_0.lon = 0.9863698918165371;
    tmp_msg_0.radius = 0.4440226478224484;
    msg.reference.set(tmp_msg_0);
    msg.state = 186U;
    msg.proximity = 83U;

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
    msg.setTimeStamp(0.18544715419857483);
    msg.setSource(21540U);
    msg.setSourceEntity(25U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(30U);
    msg.control_src = 61806U;
    msg.control_ent = 123U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 26U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.26518272700872614;
    tmp_tmp_msg_0_0.speed_units = 52U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.14242354115425115;
    tmp_tmp_msg_0_1.z_units = 247U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3833378398691768;
    tmp_msg_0.lon = 0.44625712847697163;
    tmp_msg_0.radius = 0.35168023513724345;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 221U;

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
    msg.setTimeStamp(0.4680354476491022);
    msg.setSource(63173U);
    msg.setSourceEntity(60U);
    msg.setDestination(63746U);
    msg.setDestinationEntity(67U);
    msg.control_src = 64382U;
    msg.control_ent = 237U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 169U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.031217335838594096;
    tmp_tmp_msg_0_0.speed_units = 243U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3811491827135569;
    tmp_tmp_msg_0_1.z_units = 127U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.04208671161290689;
    tmp_msg_0.lon = 0.2607278594957937;
    tmp_msg_0.radius = 0.9771436451733524;
    msg.reference.set(tmp_msg_0);
    msg.state = 159U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.27169837060776936);
    msg.setSource(57227U);
    msg.setSourceEntity(223U);
    msg.setDestination(13175U);
    msg.setDestinationEntity(94U);
    msg.ax_cmd = 0.5568503195541351;
    msg.ay_cmd = 0.3590414103752214;
    msg.az_cmd = 0.09421294484149534;
    msg.ax_des = 0.782440099348862;
    msg.ay_des = 0.323710288993041;
    msg.az_des = 0.4561714099551074;
    msg.virt_err_x = 0.12333904185914646;
    msg.virt_err_y = 0.701914567879435;
    msg.virt_err_z = 0.25438097127943005;
    msg.surf_fdbk_x = 0.8968633799000195;
    msg.surf_fdbk_y = 0.3937254618120333;
    msg.surf_fdbk_z = 0.8552218695257957;
    msg.surf_unkn_x = 0.5820445106794065;
    msg.surf_unkn_y = 0.4923252209601976;
    msg.surf_unkn_z = 0.1662411150942006;
    msg.ss_x = 0.2054833851233987;
    msg.ss_y = 0.16681091994836328;
    msg.ss_z = 0.4387705271600132;

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
    msg.setTimeStamp(0.26474210912803486);
    msg.setSource(33301U);
    msg.setSourceEntity(64U);
    msg.setDestination(47645U);
    msg.setDestinationEntity(139U);
    msg.ax_cmd = 0.7991974630475362;
    msg.ay_cmd = 0.9005157002600781;
    msg.az_cmd = 0.21931148123890953;
    msg.ax_des = 0.6141098829969305;
    msg.ay_des = 0.6147533456883284;
    msg.az_des = 0.5249813005279806;
    msg.virt_err_x = 0.3746378346603695;
    msg.virt_err_y = 0.02425622231809299;
    msg.virt_err_z = 0.8851558560990134;
    msg.surf_fdbk_x = 0.4708097981016949;
    msg.surf_fdbk_y = 0.8098668854493687;
    msg.surf_fdbk_z = 0.6368227537168534;
    msg.surf_unkn_x = 0.7925550548169685;
    msg.surf_unkn_y = 0.8243896633806204;
    msg.surf_unkn_z = 0.025613278484019175;
    msg.ss_x = 0.6034590255565324;
    msg.ss_y = 0.8728008565686982;
    msg.ss_z = 0.5730971683260928;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HWSQXCLQVWDXZOCIXLFFGUFYEHANYSCNUIMCOBTIRLXJXWJBPHWIVMXRAKFKWPGPJTIJBSXCXSEWRTIZVAYZLSOAVRQOVVFDYQUZGFRQJLEYPTCDBNLYCABBKELNWWUPRRLOEATECMGDWOSQIAKDSU");
    tmp_msg_0.dist = 0.5413981277773776;
    tmp_msg_0.err = 0.5434554117594566;
    tmp_msg_0.ctrl_imp = 0.7554844052522811;
    tmp_msg_0.rel_dir_x = 0.6612900553607317;
    tmp_msg_0.rel_dir_y = 0.46768589624273604;
    tmp_msg_0.rel_dir_z = 0.630431626659674;
    tmp_msg_0.err_x = 0.6026044804589228;
    tmp_msg_0.err_y = 0.9577136793481243;
    tmp_msg_0.err_z = 0.6730002684788171;
    tmp_msg_0.rf_err_x = 0.8125449452788958;
    tmp_msg_0.rf_err_y = 0.584095075514682;
    tmp_msg_0.rf_err_z = 0.27527344288644606;
    tmp_msg_0.rf_err_vx = 0.7799857806852526;
    tmp_msg_0.rf_err_vy = 0.8729537798832164;
    tmp_msg_0.rf_err_vz = 0.7120740872638763;
    tmp_msg_0.ss_x = 0.788448899354301;
    tmp_msg_0.ss_y = 0.24577220266665567;
    tmp_msg_0.ss_z = 0.05255936563913777;
    tmp_msg_0.virt_err_x = 0.7371452455026166;
    tmp_msg_0.virt_err_y = 0.21049329852158327;
    tmp_msg_0.virt_err_z = 0.9337530509800168;
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
    msg.setTimeStamp(0.47580352309159046);
    msg.setSource(54048U);
    msg.setSourceEntity(166U);
    msg.setDestination(47963U);
    msg.setDestinationEntity(138U);
    msg.ax_cmd = 0.17551154736747376;
    msg.ay_cmd = 0.04527268236497051;
    msg.az_cmd = 0.9115945492683002;
    msg.ax_des = 0.02141810945852518;
    msg.ay_des = 0.42973008066334206;
    msg.az_des = 0.11050263633224988;
    msg.virt_err_x = 0.21643224853442466;
    msg.virt_err_y = 0.5138785304278701;
    msg.virt_err_z = 0.26536702496670284;
    msg.surf_fdbk_x = 0.5969071064477575;
    msg.surf_fdbk_y = 0.13462671870483922;
    msg.surf_fdbk_z = 0.7764296464823451;
    msg.surf_unkn_x = 0.8034207505641346;
    msg.surf_unkn_y = 0.03836884033699883;
    msg.surf_unkn_z = 0.5918335899381408;
    msg.ss_x = 0.9214997376317189;
    msg.ss_y = 0.9532163756790251;
    msg.ss_z = 0.2084183694078463;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SXNHYVAVFUSGGUMCMLMZSNPHWZWTYJDTAHJBWBUCLLCFMHZLVZDGXNMZLCOEBQPSNXV");
    tmp_msg_0.dist = 0.8729386836070366;
    tmp_msg_0.err = 0.234164826532675;
    tmp_msg_0.ctrl_imp = 0.4616227807495955;
    tmp_msg_0.rel_dir_x = 0.9102038875760431;
    tmp_msg_0.rel_dir_y = 0.7481900017255397;
    tmp_msg_0.rel_dir_z = 0.6068186662687552;
    tmp_msg_0.err_x = 0.9345835626410349;
    tmp_msg_0.err_y = 0.9254581417997967;
    tmp_msg_0.err_z = 0.015602616775681644;
    tmp_msg_0.rf_err_x = 0.21609635922121218;
    tmp_msg_0.rf_err_y = 0.9338179966123841;
    tmp_msg_0.rf_err_z = 0.890743989924853;
    tmp_msg_0.rf_err_vx = 0.5686987399698609;
    tmp_msg_0.rf_err_vy = 0.9917503378390005;
    tmp_msg_0.rf_err_vz = 0.6056688227890201;
    tmp_msg_0.ss_x = 0.9486163482881836;
    tmp_msg_0.ss_y = 0.1771384746357595;
    tmp_msg_0.ss_z = 0.5991340399800267;
    tmp_msg_0.virt_err_x = 0.7581587252145517;
    tmp_msg_0.virt_err_y = 0.3288446308027426;
    tmp_msg_0.virt_err_z = 0.8040209967187156;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8518043458963457);
    msg.setSource(61315U);
    msg.setSourceEntity(219U);
    msg.setDestination(59454U);
    msg.setDestinationEntity(59U);
    msg.s_id.assign("VOTKDGBIMXCKMPESRRBNDQIVFVRNCCTZQUKZLFNCEJACHHACWUGCTYKLMSOCUUYWJUXQZCDIBITUFDAPPHOXJIGWSRTWQFWTEOJZTUSAEVRSKPJOVSOHYKGIOWNILNHWZGRKPFWIXNBDBGXZYXRAJOWHTYNBVVDBQUVWV");
    msg.dist = 0.2178914947965499;
    msg.err = 0.761833708191642;
    msg.ctrl_imp = 0.4579786571829507;
    msg.rel_dir_x = 0.059340916289928325;
    msg.rel_dir_y = 0.648319068561166;
    msg.rel_dir_z = 0.5607819921928757;
    msg.err_x = 0.7521834630918899;
    msg.err_y = 0.19266379142074275;
    msg.err_z = 0.7001573877137616;
    msg.rf_err_x = 0.910751855159838;
    msg.rf_err_y = 0.4402970269184937;
    msg.rf_err_z = 0.848966772719463;
    msg.rf_err_vx = 0.8233502950981669;
    msg.rf_err_vy = 0.5767572426649442;
    msg.rf_err_vz = 0.08630087749925042;
    msg.ss_x = 0.5377378700258806;
    msg.ss_y = 0.4693786539266217;
    msg.ss_z = 0.6446656593094455;
    msg.virt_err_x = 0.801084154850632;
    msg.virt_err_y = 0.39925462188160854;
    msg.virt_err_z = 0.9550141783092371;

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
    msg.setTimeStamp(0.9334883933401225);
    msg.setSource(14708U);
    msg.setSourceEntity(216U);
    msg.setDestination(48889U);
    msg.setDestinationEntity(244U);
    msg.s_id.assign("FSWNPADTUIRFEGDBBLLYNFWDLLZSRFEIJJXARHDGMBZXKJOYDVMNYYCUVVETMMLLZUCHEPYMSUFQZIXJAKERYOHZXEBTPXIPTGNVNZKEGVNFCTWCEDGJOMZZQYCSDOSRMNAHCFMJDORAXXTSHBWRDAHUIWASXORKPUPTBTHJWCSWKGILHAGHQGTPBCPVQYFN");
    msg.dist = 0.5923571196997164;
    msg.err = 0.0700585582997143;
    msg.ctrl_imp = 0.6482745620798835;
    msg.rel_dir_x = 0.5356734814475246;
    msg.rel_dir_y = 0.4388346341988072;
    msg.rel_dir_z = 0.8798961605262705;
    msg.err_x = 0.767321896438786;
    msg.err_y = 0.18708389124856628;
    msg.err_z = 0.7456264521232041;
    msg.rf_err_x = 0.8551278488551133;
    msg.rf_err_y = 0.7111889870173272;
    msg.rf_err_z = 0.329477390532111;
    msg.rf_err_vx = 0.94426184674712;
    msg.rf_err_vy = 0.683014667019332;
    msg.rf_err_vz = 0.25054243388408615;
    msg.ss_x = 0.6862968753680909;
    msg.ss_y = 0.17764558328309532;
    msg.ss_z = 0.5050347750481073;
    msg.virt_err_x = 0.25278088467698;
    msg.virt_err_y = 0.441986983311191;
    msg.virt_err_z = 0.8092288616879822;

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
    msg.setTimeStamp(0.6024510737122895);
    msg.setSource(15394U);
    msg.setSourceEntity(22U);
    msg.setDestination(4139U);
    msg.setDestinationEntity(128U);
    msg.s_id.assign("NZCPBUGAWNFTIHFIOKMXSHONAVBYANHVRSYUGEMPCVOTXBVYIECXUQETGCWTLQKVPUIIUYPQALESONHLSJWTXFDNHDGZJVWSRYRZPAFHLQNVMQMJPPRTDFXKQEKZFJSFYQXRGCRSPPDUNH");
    msg.dist = 0.995149169673654;
    msg.err = 0.47783089803621315;
    msg.ctrl_imp = 0.12928727953466002;
    msg.rel_dir_x = 0.12547469012677792;
    msg.rel_dir_y = 0.10870296121319001;
    msg.rel_dir_z = 0.2831451735946058;
    msg.err_x = 0.15700475326278418;
    msg.err_y = 0.46925934077241216;
    msg.err_z = 0.3095110854598604;
    msg.rf_err_x = 0.6375170619589118;
    msg.rf_err_y = 0.39495110037746894;
    msg.rf_err_z = 0.45551963184663047;
    msg.rf_err_vx = 0.8688629389950593;
    msg.rf_err_vy = 0.071899304216555;
    msg.rf_err_vz = 0.6696197944937803;
    msg.ss_x = 0.6983395109002566;
    msg.ss_y = 0.23736892443352708;
    msg.ss_z = 0.5855178420992719;
    msg.virt_err_x = 0.10531110823684986;
    msg.virt_err_y = 0.9536811451113639;
    msg.virt_err_z = 0.541203842092305;

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
    msg.setTimeStamp(0.5707458802353367);
    msg.setSource(15004U);
    msg.setSourceEntity(29U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(22U);
    msg.plan_ref = 902242143U;
    msg.id.assign("IMZZUTRGCUMDKOGRFPCDYZSQPJFPVZRGZJHIGEHBAVKFHHVITNKNEXDGALTVJDUFKXWVYQSEZTLTDIXKSKYQXKTFGYBEYYLGPCOXQJDLSZRQHXNMIBHYQIAIZUCUWMMFHBVOZSLIDFATLE");
    msg.memento.assign("IXHRKJSBQNYJVWYXIGXZDMDKYNXGQ");
    msg.timeout = 13268U;
    msg.rpm = 0.06839332739664117;
    msg.direction = 204U;
    msg.custom.assign("SCTCIORAIFWNVAXUFPVQDWCIEYVATSBJGKFSZCIFLJTNMQLKNQH");

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
    msg.setTimeStamp(0.244665692019312);
    msg.setSource(56672U);
    msg.setSourceEntity(53U);
    msg.setDestination(53138U);
    msg.setDestinationEntity(200U);
    msg.plan_ref = 2258859006U;
    msg.id.assign("RFKYSGRJGTYVGPOXVENTJHTBBBLFIWIEMFVTKBFLUUHEUEFCKZWYADPJMJSVBTBDKLKZBWATHIDTHYAMMZQECUCOVISIGCQKKGRNYJLNKYOMPWDWDQZGYWFXVIQISPROGOSWZVXSQYJOUGXWEXKZRFZAUMQIXFHQEQDHDLSFLMFRAAWXNPVJRIPHDXTINLACTDZCTPJNXHMVYRUPUNALVANRD");
    msg.memento.assign("ZQQKJLBWHZNONEGHIITUZHVCZDXPTXSRDGCDGCGDBSIDFEQQZIWIMZGMSBAFWRMJNYCMXFXRFWHJLQPHBTACRYFNAGPARPQHCZOEVLMWLNTUKJ");
    msg.timeout = 44077U;
    msg.rpm = 0.8706863048072943;
    msg.direction = 213U;
    msg.custom.assign("OHGHLFTLHTUWHTKJIHCIBTCRYDDXYPUVIFLYBWMDMILHEDITJFZESUCXGHFOBQREPTUFHAMDUSPAXGZKNIEQJQZYVGMCEBPXZMDJKMCUYMLECRAUFU");

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
    msg.setTimeStamp(0.3751267864188257);
    msg.setSource(43713U);
    msg.setSourceEntity(24U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 1028365643U;
    msg.id.assign("FFSXAMATZDOWCXPSLHPGQHJSMKOUYTVZNRXQHPGUJQ");
    msg.memento.assign("UFKVOUWDLIMQWUROJRJLRKCLHUNMOVQKVBXBEBMCFXPZUMPEURPETXTMHRNJNKSKFSXHITHVNVPBKJEQFZQQAPXZSQSXTDIDDUSOTBOGJMGBAZCRHGYNOXEAGZDIESWEMLYZSRCPFLZFYGXKHJYJBWPYWGINAVHOTEWALWEHWZUQDNLFBGDVHSQULZHRUPSTINPAVMLBAJSN");
    msg.timeout = 24274U;
    msg.rpm = 0.8137996819873148;
    msg.direction = 91U;
    msg.custom.assign("FQGRJSUCVJKEHCAZIFAKLLSJZIPSJYEJRDBHOMURNOVGWFJTXANITCDIBRWWMHVEAVGQWEPFHQBKHRMCBYZHSCTDPQVPYXXJUZPOUAQUAGLBRNXZQCXJUAEWEIPZYKUNNXOLYYPKKVMMHETTLWAZVAERFWCDTQDBIYOBZSY");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.1049970974169323);
    msg.setSource(24969U);
    msg.setSourceEntity(153U);
    msg.setDestination(35054U);
    msg.setDestinationEntity(144U);
    msg.plan_ref = 962916637U;
    msg.id.assign("MFUNEVSHXXAQHUYQUNEVTYVIZDDDAYPAQOSQXHENZMZCXJOSJPKSXIQWIHXMYFRQPDPOEWVNRXTWNLAZVJDYJBYVIKZCUOALETUUCNGGPBDMTAFZDCKKGBLFHCGZYWQFILSEFMCVJPBUPHNCOITFTKKOHREJRDHIASAAWOLKQVYXMWQIROEFFURSNGCPCJGXSRMWWRQSGSVEPLKJIYHBGKKZJMOTYTPHCTBGREXVLBDLNTDRGLJWOWUAUFLMMI");
    msg.memento.assign("HCZSRGWUWFTWKCPREVPSKEMDSAGHSZMKQNPSUXRHVWCJTBQBNONPJIPHGAFOBXMMZYGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.7656794785494676);
    msg.setSource(12920U);
    msg.setSourceEntity(104U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(222U);
    msg.plan_ref = 2872697945U;
    msg.id.assign("RXKPMGSRETADXIXTIVWWELHCEDDFSWGBLNHHUGHNFWQPRXBNHDZEPPZXIFQUJWRBOCJXOMFSZFYIZDBLHSUKCTSIMCFUZUCCRCHAOFFLODZXZEYAXMLZWHKIQNXQAVALSMQ");
    msg.memento.assign("FXLFLQKOPGHWMZBKDOSMXDJJUSKMFWVMJSKITPHLNXMTQBTNCXHSVUALFOLZLVMPGPRNYWRPUYYQPVDANPXQAGLRWDDRKUZQXEGDDIZMTTBUNXWCARRIQYHXTCDNFJKCRQWTISGZEQZBNOXLSVVYAAQSSEFISZFBJTEPBOKNZHHYKOVOVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Memento msg;
    msg.setTimeStamp(0.2126524687396707);
    msg.setSource(2085U);
    msg.setSourceEntity(184U);
    msg.setDestination(45357U);
    msg.setDestinationEntity(248U);
    msg.plan_ref = 1099357409U;
    msg.id.assign("XAVMMEVOEUZSOFDNXGHLSFNLTRSCZEOIWGBCOXMYHLJAKDUXGSWPXGTUOGLWSVQBCWSUFKBYHZOIRGPAABGZUFXCPDEQIECYCZUCCMONXJDABBHAZGMNYPMDFTPTQDLRNESTQIXAJBTVIIHMXOLFKOJTJIJTQWKD");
    msg.memento.assign("ZCIANTQYZPZLQESSRXSDVGPEQGJSNAKOLZPZBFXEMROMTKSXIHCFAYVWAKRIGOUQVEFZLAWDPJOUGGBPTDULESAFITXOVENFOBWTNDIBCVDTRUBPHDFEMLNEMZPQMZTRUTNIQCLHXIHMIJHRVRBDHQCYCUOOCWHGWKNJYTOTESYFCBBYPWLBMQYXKWNAAHFDWFSXMSXRAXMIQKJKDCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Memento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.3824957348063758);
    msg.setSource(15028U);
    msg.setSourceEntity(13U);
    msg.setDestination(20397U);
    msg.setDestinationEntity(248U);
    msg.op_mode = 46U;
    msg.error_count = 193U;
    msg.error_ents.assign("LQUDERGXIUHSLWXQMOXIJSLLFGYFSFTSAUYVKIKCFDUJOMYRURGHDHGCWFXIKANUTWUTABOIHFHOJLBPRTOESETJMW");
    msg.maneuver_type = 19639U;
    msg.maneuver_stime = 0.625757598241863;
    msg.maneuver_eta = 30694U;
    msg.control_loops = 2267183770U;
    msg.flags = 8U;
    msg.last_error.assign("HCJVYSRLUZAURMZOGAXRPOCQAOAHBQWPVFPCIVDTDNUCVJJBBUBKLUKDKVMQLLSMWWNKJCGZOXTRWFEHVYBHWRBZQXFTIBCFMHEUJNAYLISQWFNSVONPODXQGNRNFMZPKJXNMIDOZLGGLCIGZHEKTSYLCEAQKFHQTWFYJYDDPVTKMSIREMMBLFNTYEMJGUDYXWJHIZRKOSTCV");
    msg.last_error_time = 0.5088781982208788;

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
    msg.setTimeStamp(0.9316041022084972);
    msg.setSource(57835U);
    msg.setSourceEntity(104U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(53U);
    msg.op_mode = 124U;
    msg.error_count = 107U;
    msg.error_ents.assign("GVQVPQCIYIHYUMBEQIMWSBPFTSKUNHOQXSMOSQAKTWRKAHMZXDZLUYQCCGXEHBEYONATYPTDUQJGZSCDWHBVIEGZJNTKJCHBLTNPHADBERMHPCUEKWMGMIJNCIYROVLKPDNVRFKUIAVRARXVLSYRGPRGQJJEQWYWKISZBXOEFDZWLUTOVIFUXAPWTBYOGAYGHBPXBSDMPDJFELNMOSVWNUZHR");
    msg.maneuver_type = 8287U;
    msg.maneuver_stime = 0.1413280654842365;
    msg.maneuver_eta = 25734U;
    msg.control_loops = 291474661U;
    msg.flags = 45U;
    msg.last_error.assign("FMSODGLFZIJUTJHBXONEPFHODJXMEHNLIYVMKECLMSQLFYAUSVXPYVNVKRWQXHOOBXUDCYDVLWXAANGRDENSAHFEZCZGRLWCPMEVPYYADRORIHKSQWWVKDXYAVGPYDCXGEJTINCZBGIQTETWKUHZUUMOIBNZQVHWXQRLKRNLBIJTADOMBHPIQKRPHSQCPFWBFFALSLJGDUBYCZSJGUPFKNGATJJTBT");
    msg.last_error_time = 0.0077262232687710375;

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
    msg.setTimeStamp(0.19162897742743856);
    msg.setSource(30323U);
    msg.setSourceEntity(169U);
    msg.setDestination(37694U);
    msg.setDestinationEntity(40U);
    msg.op_mode = 201U;
    msg.error_count = 168U;
    msg.error_ents.assign("RBUXCURQQNNKZXPHKWVHKJLHXLCYFYYGDQAREIZTRZCSDBZOANJAPMRWIXDYWUXOJHDVTZKVETOYUYRINOOUGSWRLHHVIBCFBPSMCIWFPFAZVMEFHBMOAQAHJKQXJCN");
    msg.maneuver_type = 1137U;
    msg.maneuver_stime = 0.5250262535229587;
    msg.maneuver_eta = 21936U;
    msg.control_loops = 1375466644U;
    msg.flags = 98U;
    msg.last_error.assign("JHZYDRIUBTYYPZWSFVGVLPXRQPXDXJEQOHUFTMHEXZPKMEEXJBJEDLYRKGMNMRDSVOFQUHNJGZOKRRNBHSVWAEDOUBOACLCSYVVGJGJIFOCQLMACENTEWWXHNVCIHXKURBOPITACFLZODSMPTYLQGLAWAPJSZN");
    msg.last_error_time = 0.7641410272703889;

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
    msg.setTimeStamp(0.6939092483725458);
    msg.setSource(58152U);
    msg.setSourceEntity(171U);
    msg.setDestination(5386U);
    msg.setDestinationEntity(105U);
    msg.type = 176U;
    msg.request_id = 38365U;
    msg.command = 22U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 1996980188U;
    tmp_msg_0.id.assign("OZDRDGZGHNHWLRPUNSANJBNDBKWLAIRAVFFPSXIOCIUPPNVMOSFOEOWMMFRJTEHTJLPAAMBOAEHYJCUXCRTRBJUKTFMFQPBDYQCQVTXODRGZUYVSFVSCVWXIZZXIJLTVXWAPJKPEGVNXVYEYDLSWGBYZWRBUYRNPQKJAJECWTBWMPYUWLBHGGLIGCEHDZYHEQFNAFVSOLNEKIHJXCZDZBIQUYMSDQSHDKXLGOITMMKISFKKQN");
    tmp_msg_0.memento.assign("XNMJVNXDSPIGRKRNATZKXEHZHNAYXTWGLBCYIIETNDUEYESYPKUDRVWSJNBTCRPMDFNDJJHHIURFCIPPNJEIIBBKPSOMPOVRRCHL");
    tmp_msg_0.timeout = 657U;
    tmp_msg_0.name.assign("VQYEKUBICFUETFVNFBCIUIGUGMDPLAZGZ");
    tmp_msg_0.custom.assign("MTEKTVVBVPDGQLGIRPOKJYLDSBRFJXEIWVAUFGENODQBRMNWOOOAELXFGAISAWDWUYHLIBHUUJIMGFVXOTLHTYJBDFTZREANDARSCWCGCXJKVRUSNQOLFZLSYSYTPKJFGIRIZUTCANSZXLFODQLCNVZCMGIBQXQWASYQVJQHZBUJYZCIRKEEDLWVNZHPPMZNCXUMSTBNPWHEJBGKDXAKKXAHGWZPBC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36631U;
    msg.info.assign("VNJDLGGOWFXNCXREXBSYGNWDGUKQWWKVMHZVIZBXFLIDTJMOVYLISHNRUJNANBTYXTOVGDURWAOGEWXZFJKTZMBQDBECCLPOJHRYTMSNZZBKMQWHQQIVCQJTZMXVBHUECCFENTLAUAUPODRDSSLYGFCTLPKVHREPHHQOGRFL");

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
    msg.setTimeStamp(0.7686549273497835);
    msg.setSource(51694U);
    msg.setSourceEntity(9U);
    msg.setDestination(17824U);
    msg.setDestinationEntity(16U);
    msg.type = 219U;
    msg.request_id = 28071U;
    msg.command = 6U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 492552494U;
    tmp_msg_0.id.assign("CTCMERKFULPZCONQSZRLQYBMHWTJXSIETTXVQLKTWNUTJKUKHLAZGDSMIRFDQDQJYCHYIAGYVTYFGQQZJJJVDDIYIMRASWTRMMPANDBWEYRGCJMHKZCLFFSSMXTCBMFFXOUWFGEXBCOZLGIOKBIAJNHPZENAEEKVVISDBPGXSWDVBKPHTPGWXERVLVUPQLYNKBSNJRVXENINGZOPHOCBBOXUWRHWYUAPOUAQPRUEYWMLVHODODXKZLAQ");
    tmp_msg_0.memento.assign("ULVTTBEICEXAXFGLDVZUZUQUPMAVZIFRKNFVSALDHDSHRHIMGKGPLELJJIPEAWOAIFOXMVCTJJVKURDTYMKZCZROLDKABWXYDUSEEZNMSFHQYSBQXHHXOWTJOYOAHBNCXSKVKJCFQDKHYECMGFHONQQWRUSJUNWZXNWLPSLDCRYBDITUZIBPJZTRYGBKVPTGIHMPRLXKREXRAYTFYQCNJGFPDSSQOEIVP");
    tmp_msg_0.timeout = 24928U;
    tmp_msg_0.lat = 0.7261833810258956;
    tmp_msg_0.lon = 0.7086010707944334;
    tmp_msg_0.z = 0.20515280701373595;
    tmp_msg_0.z_units = 167U;
    tmp_msg_0.duration = 6979U;
    tmp_msg_0.speed = 0.790150189264982;
    tmp_msg_0.speed_units = 116U;
    tmp_msg_0.type = 103U;
    tmp_msg_0.radius = 0.41527228632500346;
    tmp_msg_0.length = 0.5954365117415735;
    tmp_msg_0.bearing = 0.6104207089558673;
    tmp_msg_0.direction = 254U;
    tmp_msg_0.custom.assign("AZINLUQDSJCKRPDUOUEJVGQVEDKRMHTLTKNYHKPCXFJSTVQLWZYLLYDTEALIMRXJRBYWRKSVSOQEGZKLCECBQOTISTDADCBEURTPPGXJVBNHAVHXQUWFOMCIAFNUZXXRFYFZQTNXINHSKJUIMIEVJZOCJAXAAVOWSXJCMAH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 48694U;
    msg.info.assign("XLYNKOZAKBVUWPQHDSUQSQPWKESMVPOLRYATJSYFVRRZWEXRXSAQE");

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
    msg.setTimeStamp(0.03315925761663985);
    msg.setSource(15450U);
    msg.setSourceEntity(74U);
    msg.setDestination(47056U);
    msg.setDestinationEntity(165U);
    msg.type = 147U;
    msg.request_id = 59050U;
    msg.command = 82U;
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 3245668071U;
    tmp_msg_0.id.assign("EXFMGTZUAZLAYKNVFTCQPQSJKZPFODNZPIZKHXOWMSOTMEAWLCITRMYXSJMZAVSAKNNPFEVUBOGKQLXUWSVEDMBJRBGIDUMONFHSXDDNQWTUBJPOKKMIQWCEYWYTOGCAWIBDIRPUFFXYHRVUZEEJNCBIRVAUJIAYKOFHZYTQISNJPYEVQTHLABGEHDXBWNTUKLQHLFYRCVHJRMSIGZWQCRGBXJSCXZBSRGLY");
    tmp_msg_0.memento.assign("NMUMWUXSKFHONTNWMLORTCPSMOWJDXYQIQWGPWOTLNJBPNHFFMZKNFHZOCLEESWHIPYWJWGKSKVJAYQUVTDDGMDFKYVSFRXBVWRESGYIGCTPGRRFBPQABCBCUQZIUIURGPQTEGXCYYXFHDIXTGXBLZMCIUQCVZAKJMUAJAWAUZJQEVDNEFZZHVVOHVEACDJTZYDLLBKMIRBNLLPGRYYHSUIBKERSOOAKSXSTKRP");
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6262799472107963;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 33713U;
    tmp_msg_0.custom.assign("JQDCDTPWCCTLTZNJUOMGXFAQNFIHCCUQGYBKDRCJYWPGAHFRLXVXVFVZWLSBECGVBFZQECWNPFTIAIJMYGMMGQRWTWJNBOJDNYKGNJIOY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54916U;
    msg.info.assign("DSYOJLPTNTOKJACNNNOXLHRSBIWLXUGRARZGCEGPSPPEHBWXQOCKVDLPIWHFKASAJORHFFTDUDKHRKARVCCVEMMNWKLYUFMVYSJYUNUEAN");

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
    msg.setTimeStamp(0.5774149797846853);
    msg.setSource(2614U);
    msg.setSourceEntity(242U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(114U);
    msg.command = 82U;
    msg.entities.assign("RBCDGPGXLHRBHHQAAPE");

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
    msg.setTimeStamp(0.17001981063127236);
    msg.setSource(27768U);
    msg.setSourceEntity(47U);
    msg.setDestination(41229U);
    msg.setDestinationEntity(98U);
    msg.command = 109U;
    msg.entities.assign("ITARMCYRKJMTLQNLYKIWDEULWUGLFUXPFDIUENXHMBPQGFODJHTCUCAHRGEYTOQKEMSMHQPBMPSGOHKNFIWOJEZCUYQEZXIXAGJCCPHM");

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
    msg.setTimeStamp(0.3561698483837098);
    msg.setSource(9860U);
    msg.setSourceEntity(43U);
    msg.setDestination(5438U);
    msg.setDestinationEntity(174U);
    msg.command = 188U;
    msg.entities.assign("JMKNIVLSAVTLFTWBAHUOJPUIAFVQDRKGTNKEIMMEQPMZCQELQKRIONKGQFYLXVXGTQHMULEQNHVESWFXUWEOCJCVUUSDNKDKYPBYHPMXFWJEWEUSMIGOTAZLLDLBSRCSBUZDBVFSWLQSRUYDKGOPWPPKRTGRXANRYCOMQGDFKOPTDAUYJGEYCHCVYOF");

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
    msg.setTimeStamp(0.22710204424216285);
    msg.setSource(15334U);
    msg.setSourceEntity(46U);
    msg.setDestination(7164U);
    msg.setDestinationEntity(129U);
    msg.mcount = 231U;
    msg.mnames.assign("AHLXLIIOBEFQMNJQSZLVRTRMZOEANNDYXCQCFVUWSXMGQASGDSATIGKFYPQUDNCPMPEDTJZJOKJGQBWFCKWUFFV");
    msg.ecount = 15U;
    msg.enames.assign("ZQILMNBPAKQEGNQGJTBPZKAHMZVMOHEXNDUQRNSMXDYAZYEBCDYVDLQNEKOPTLFWEMXUIWNQMLOITHYZGPVLHFWFUDWAMOPGYUKSGHRAXPWIWKBMDTLXBOSSVQSRWADUTASZZWCBIUOYKYGHCWUCJLFNTVXYPH");
    msg.ccount = 189U;
    msg.cnames.assign("GCEJROHEZPLVLGM");
    msg.last_error.assign("NTTULACUMRVPFPTNQYEVDNGLMSVWUAJSFENHHIWICRIKXBZJJBTMGUXELDKMOQRUAJSXXKEXJGPRIYEOHOCWQU");
    msg.last_error_time = 0.440924833663745;

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
    msg.setTimeStamp(0.03818805152944216);
    msg.setSource(17056U);
    msg.setSourceEntity(230U);
    msg.setDestination(33852U);
    msg.setDestinationEntity(202U);
    msg.mcount = 7U;
    msg.mnames.assign("NLQQCFXDFPRRXUKOYAZZJVTEXSQGSRONMLTC");
    msg.ecount = 147U;
    msg.enames.assign("ONLPORSUSGQJQDZNGMMUJBOPSWFHQK");
    msg.ccount = 54U;
    msg.cnames.assign("CCSKWIVQDGRFBRNLFDFPOZMXORFJKHJQPUUUUNZZOIAYVSSXNUTECOVALPGZKDEXDJYGAOIRVXHKCPOOYUDMRCEPNKRTXMFVHWSLOGWKPETLZECRUTJKGWEZPGMYXIJTNQBIZNTRMPQBNYYYXCIFSYDIBYXMFQVCHNF");
    msg.last_error.assign("XXAJAKSLQUJPDVTQPSMIQTCQFOZZAQTWMCGBXHRCVYBSVGVAJYLRGTQQBEHJLNUYVYURNRXNPLHYTFRKKNCPXDMESEMLIJZQPZBIOUDLDYPCZKVXBBHEKQRWSAGFPIXFENFIFKGNWTYNVHOGKCTDVLDZ");
    msg.last_error_time = 0.19972778540044045;

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
    msg.setTimeStamp(0.21279008594060955);
    msg.setSource(64594U);
    msg.setSourceEntity(154U);
    msg.setDestination(26278U);
    msg.setDestinationEntity(139U);
    msg.mcount = 188U;
    msg.mnames.assign("GYMOQZPRABPOWHFPKYGKBIVMDEFHBSLNQMLGPACVVJWIIESQXJWDTWEERYPUTJCKXSYFZWNVUIHRBBVIHQJHPDWSFGHXULOGPSMCSJQRBFZQNKTHXSVZNVSQRZOEXKIGSOMTUMDHZTCPJBRMUQNUKGRUVOFATXTUWIJUJJLCAMGAWETZFQQZYCLXLOBISNUKGLAYJDZMAKXRCBYVCWMFXRLYCRTOHIADNAFDEWXIPHOLKAT");
    msg.ecount = 158U;
    msg.enames.assign("FLHAFOGDWPYZZKTTWXQAZARSWELFCLKFUPZDNSDCOUVSITXFBALCRODUSIEGMRVYLWVEBB");
    msg.ccount = 17U;
    msg.cnames.assign("GTRYDWFOBRMBPGJXWYDVPLQWENIWIDWKNYOOHLADQVTHZJIPJOMH");
    msg.last_error.assign("JRLCFVQZYYQEAPIMKVRTAQINFCVPMHBFKFZZIIYBJQROKGFBOUCUPJRRXDTCTXMXIGMBVSVHVLNFEBGDQDWQCGPZPIHOPPMVSILTAEXHNSWGRWKZXCUVNUKMLUOHNDCJLSZDKWBMTAJHFYYAEWSQLEPLCUWOKSGBOUWKOFWFXSYGZJTIEDNXRJGDZTXMOSAQEXKGNUVBTHKRXRZPWLLENEAAPTJ");
    msg.last_error_time = 0.34655949510126527;

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
    msg.setTimeStamp(0.46544041702040706);
    msg.setSource(39249U);
    msg.setSourceEntity(180U);
    msg.setDestination(36592U);
    msg.setDestinationEntity(104U);
    msg.mask = 56U;
    msg.max_depth = 0.22165378206293873;
    msg.min_altitude = 0.32684364234203434;
    msg.max_altitude = 0.9016670671149507;
    msg.min_speed = 0.3511061941785373;
    msg.max_speed = 0.16438954332788536;
    msg.max_vrate = 0.15808176360763948;
    msg.lat = 0.3784778718160262;
    msg.lon = 0.07467161260437494;
    msg.orientation = 0.40990196531356715;
    msg.width = 0.44736660977935905;
    msg.length = 0.5050293148747702;

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
    msg.setTimeStamp(0.20669141066401542);
    msg.setSource(56112U);
    msg.setSourceEntity(90U);
    msg.setDestination(25535U);
    msg.setDestinationEntity(159U);
    msg.mask = 202U;
    msg.max_depth = 0.5037234074091761;
    msg.min_altitude = 0.21473571333797725;
    msg.max_altitude = 0.8585546348334971;
    msg.min_speed = 0.4146274002950663;
    msg.max_speed = 0.961048110805684;
    msg.max_vrate = 0.6929680441144657;
    msg.lat = 0.0006900705014822872;
    msg.lon = 0.41650097108992656;
    msg.orientation = 0.22222230913856267;
    msg.width = 0.3451860531557924;
    msg.length = 0.02150290562498358;

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
    msg.setTimeStamp(0.3279839184874568);
    msg.setSource(32387U);
    msg.setSourceEntity(104U);
    msg.setDestination(33229U);
    msg.setDestinationEntity(176U);
    msg.mask = 56U;
    msg.max_depth = 0.4981135262344628;
    msg.min_altitude = 0.02028204508989573;
    msg.max_altitude = 0.7720606374569039;
    msg.min_speed = 0.5394972069972421;
    msg.max_speed = 0.6850183432525596;
    msg.max_vrate = 0.26162141963546737;
    msg.lat = 0.4290157566632501;
    msg.lon = 0.0865229113809125;
    msg.orientation = 0.4078387955290863;
    msg.width = 0.6198852893304828;
    msg.length = 0.02182919234781555;

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
    msg.setTimeStamp(0.007419553938716517);
    msg.setSource(23283U);
    msg.setSourceEntity(185U);
    msg.setDestination(57683U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.6320767912435656);
    msg.setSource(27557U);
    msg.setSourceEntity(26U);
    msg.setDestination(45823U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.9540879434598017);
    msg.setSource(928U);
    msg.setSourceEntity(108U);
    msg.setDestination(44809U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.8533932420657818);
    msg.setSource(59502U);
    msg.setSourceEntity(109U);
    msg.setDestination(8164U);
    msg.setDestinationEntity(181U);
    msg.duration = 35064U;

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
    msg.setTimeStamp(0.6623469493957949);
    msg.setSource(55654U);
    msg.setSourceEntity(129U);
    msg.setDestination(51809U);
    msg.setDestinationEntity(43U);
    msg.duration = 33860U;

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
    msg.setTimeStamp(0.12162509579813019);
    msg.setSource(42606U);
    msg.setSourceEntity(15U);
    msg.setDestination(3627U);
    msg.setDestinationEntity(57U);
    msg.duration = 28017U;

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
    msg.setTimeStamp(0.5258766629726918);
    msg.setSource(46313U);
    msg.setSourceEntity(24U);
    msg.setDestination(30852U);
    msg.setDestinationEntity(89U);
    msg.enable = 165U;
    msg.mask = 40122871U;
    msg.scope_ref = 3165819239U;

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
    msg.setTimeStamp(0.9736828620121182);
    msg.setSource(53894U);
    msg.setSourceEntity(71U);
    msg.setDestination(582U);
    msg.setDestinationEntity(33U);
    msg.enable = 117U;
    msg.mask = 4222301192U;
    msg.scope_ref = 2344723114U;

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
    msg.setTimeStamp(0.5192211081107498);
    msg.setSource(56337U);
    msg.setSourceEntity(202U);
    msg.setDestination(34007U);
    msg.setDestinationEntity(121U);
    msg.enable = 193U;
    msg.mask = 627929032U;
    msg.scope_ref = 4165032545U;

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
    msg.setTimeStamp(0.7546970625165214);
    msg.setSource(36987U);
    msg.setSourceEntity(181U);
    msg.setDestination(63887U);
    msg.setDestinationEntity(114U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.2918081462968133);
    msg.setSource(59020U);
    msg.setSourceEntity(181U);
    msg.setDestination(14158U);
    msg.setDestinationEntity(16U);
    msg.medium = 41U;

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
    msg.setTimeStamp(0.9484357359935411);
    msg.setSource(43332U);
    msg.setSourceEntity(85U);
    msg.setDestination(57822U);
    msg.setDestinationEntity(202U);
    msg.medium = 175U;

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
    msg.setTimeStamp(0.11230911230195473);
    msg.setSource(13506U);
    msg.setSourceEntity(149U);
    msg.setDestination(1012U);
    msg.setDestinationEntity(99U);
    msg.value = 0.025457108489109093;
    msg.type = 157U;

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
    msg.setTimeStamp(0.9414209000650451);
    msg.setSource(5795U);
    msg.setSourceEntity(195U);
    msg.setDestination(64012U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6425166074956005;
    msg.type = 228U;

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
    msg.setTimeStamp(0.9582784813693825);
    msg.setSource(22779U);
    msg.setSourceEntity(94U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(248U);
    msg.value = 0.8314816182157189;
    msg.type = 180U;

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
    msg.setTimeStamp(0.5319188285134423);
    msg.setSource(56278U);
    msg.setSourceEntity(221U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.7967736293207923;
    msg.converg = 0.7573054509508853;
    msg.turbulence = 0.9029322938805289;
    msg.possimmon = 19U;
    msg.commmon = 49U;
    msg.convergmon = 49U;

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
    msg.setTimeStamp(0.42830038301908735);
    msg.setSource(37045U);
    msg.setSourceEntity(39U);
    msg.setDestination(21500U);
    msg.setDestinationEntity(215U);
    msg.possimerr = 0.40612584388485484;
    msg.converg = 0.0093908275169865;
    msg.turbulence = 0.9992866574039982;
    msg.possimmon = 136U;
    msg.commmon = 117U;
    msg.convergmon = 134U;

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
    msg.setTimeStamp(0.3035358524490578);
    msg.setSource(51049U);
    msg.setSourceEntity(106U);
    msg.setDestination(51624U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.03445157974389568;
    msg.converg = 0.033738954662753784;
    msg.turbulence = 0.04632941853606343;
    msg.possimmon = 194U;
    msg.commmon = 59U;
    msg.convergmon = 222U;

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
    msg.setTimeStamp(0.433513331372834);
    msg.setSource(20583U);
    msg.setSourceEntity(48U);
    msg.setDestination(8069U);
    msg.setDestinationEntity(248U);
    msg.autonomy = 163U;
    msg.mode.assign("LLSQQSGGFZAGCVUECAAKZTXNKBXXWPYJZXPDQZJTDPLCAKGVOBGFUHQWMYPWIXOGIMIYEYIRVTBTGMRNPWFEGXDMZKZWBJVFQNVPQOQJXANVJSBMSWUQGRZDMFKE");

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
    msg.setTimeStamp(0.07132534274257463);
    msg.setSource(20658U);
    msg.setSourceEntity(76U);
    msg.setDestination(12802U);
    msg.setDestinationEntity(14U);
    msg.autonomy = 79U;
    msg.mode.assign("GFBLBKIQFUYAQFJANKIYUDZFEDBHRWWGEESYUUNYEZALVBQ");

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
    msg.setTimeStamp(0.42567372219348143);
    msg.setSource(36267U);
    msg.setSourceEntity(215U);
    msg.setDestination(17049U);
    msg.setDestinationEntity(196U);
    msg.autonomy = 47U;
    msg.mode.assign("YUVXDNXZRBCXVWKIGKIOPETYOXTMCHVFRTHDWQSJOHTKSBPCJCZOFEORZSMEYYKAUADLSTMGPDULEIGWOLLABPHQJYFZGRQXAPPDMDUXYWCIEVTKOVNWQFMAEWTYHHSTSOBNAFVZSMNUKRDVJBWLMFXRJVODPJYVJEAXOCBAHEFYCNJQRQULKJBRWGQ");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.8881440370694949);
    msg.setSource(3781U);
    msg.setSourceEntity(65U);
    msg.setDestination(56275U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.054337990078468956);
    msg.setSource(23237U);
    msg.setSourceEntity(160U);
    msg.setDestination(57888U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.3415679410047294);
    msg.setSource(62998U);
    msg.setSourceEntity(14U);
    msg.setDestination(60604U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.274895776055305);
    msg.setSource(8572U);
    msg.setSourceEntity(14U);
    msg.setDestination(9931U);
    msg.setDestinationEntity(115U);
    msg.plan_id.assign("TRSBPPOEWGGCYKQTCUWEGEAJAMPBVNMEESNBVKVXTKTIZYEZIQQIFRCHYVXQMPLHUYAOLHOGJBHSOYZNXDVIGHUYLSJSJXYWIUFQJHYNFRATTZBRBKLHJDOJPJFAFGHQVVSRFMEKUTKIQNQMKIGOWFTWQYXDZUCCWMXAFUDMWXNZJKGNOPGTHBQCJPDAFXALDPRCPRZUROLFIAVXMWNRMNUEDDZOCKMHARGK");
    msg.description.assign("XCTVOHXIQGANJCKSBEDIWPZQZMUOUWSZKGIVMHNBBVBLZQLUYROTTNNCJYYAUSVEGLBQTSZGDKXCOQFUFFCTBZSGRDPUKAXFLXCAQCXJVAPPUZEAWDDRWVJMPLIFZVCDP");
    msg.vnamespace.assign("JFQEQGAZAFTOYZOLEAHYDWOVUMRCOZZUK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QTROCCNEBKSOWQEUIKMDFNCBYFVSKJRLKZTGFBHDMRXCNOTVUTUYATCBDAXMVWWZAJPPQDFQULVLSKAIOUKZZKBVAUTXZBHFGZLSISNPXJIGPGOKUHZPEVJPQBAPTOHORALXITWLGWRIXHFTHUJQLSNRJYYZLGOOHMCSMCYQNLKYQWWZJAUYPVFFGDCPEOYMBSRQFEGICNMKVDGYRWYHXNJEZVHILEDRRDWWAUNEMBMFBXQMENEAGIIXJTXDC");
    tmp_msg_0.value.assign("KRAYMWKOTVAXEASJZWSGTQAOVFYHRJJJEVKGBNHFGLOPGZHLKDEGILUAPVTEZERSKCPKOXQTTIZWHWMNZDUGWRINNTQPSAGSCCKYBVUPGEQFQVDAAZXYYNSSGORESHNKJXBRAUMBXOXLBVLCJDRSBHPZFPDZRPHNMINSWDTBRNPBIQDJFOYCEUDQVAYVFULPIUBLQFXDIIKKWLOOEU");
    tmp_msg_0.type = 229U;
    tmp_msg_0.access = 111U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PPYIBMHYPADBWDOJLCPQSFULCHURNXTWKGROBGJJFWYWNCLGETSUOTJWZOZVQEEEAQYCEOBMNAKCTTPFWDMZBOYLNBGQHPZELRLYKSOZRFVKJAQRKVRADKAQUMBZEHGPSJILOWKQXTBHVUNAXLTCHBVMKINVXVAFPANISHMCZ");

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
    msg.setTimeStamp(0.3923383469470978);
    msg.setSource(61822U);
    msg.setSourceEntity(251U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("YNKRCBLPEMQDRZUYLODYVV");
    msg.description.assign("EXVAUYFDUWSYKCFTBYBUTCLYHZVXDQVBKLYXRWDUOLILESXZWEMHIGKRRWCIJDMLKRZDOQZVMKFKIGJCXAAAHQCAVJUFDSEEDXWURRFEPYGVFMZSBJIHTPJYMNMPRAFXESEKOSTGWVEPCWXQQJFMHDPLYFNZOHAMEGCRHTBXIIQVQNCNGWLWTMKPUWCBSTTOHXQZZOFBLOZAJVABJTGAIZDN");
    msg.vnamespace.assign("KRRPDJVBEVGZPQBRRUXLKQWRIYIGVYIZDPNUXYTWAITPDQEKUNWLJGMXGCFFXXTBAFHYOVMJCULHCFFHLHYSHDOCGUXQVZIEOVSPZPOSYNWEYRFSFUZRIKAFXBWNMPBDBNQLNVDBGBTFOOS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HHBPROFFNSXZILFWPVTQBLYVGDKMARDDBQBTBTIUVDUCYBCKQDISIXLYPRBTOQJLJVSGOZULKNYNQLKJGIZVANXNSFOBEIFEJGFHSOKYRZTMKMGYOKNQ");
    tmp_msg_0.value.assign("XLHKBQRWADNTATDHEUXREGBUCBWXISWZIB");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 245U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LFGMJRAMYKNTCQQKBFVZWDOJFXVCYTPYLEIERZJRCDPCXENTZEKYWNEJXOFHQLOLGRZZVAFQBFRMYJHIGXZPONYCVGCIMKDKJTDVVONYWSFSBHSMTCWSMPHBMRQIIDKXUQOSZHFLG");

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
    msg.setTimeStamp(0.3194237073253362);
    msg.setSource(47807U);
    msg.setSourceEntity(58U);
    msg.setDestination(50570U);
    msg.setDestinationEntity(228U);
    msg.plan_id.assign("OLQZCJAZYHDEASSJMOFEDYFLLORUVROUYPLMVAFVCIIVFDAXRUHJNXZYGEZOBQILNICUGDRLNQPCGRPAMHNGVJWLUHCMCZKBRCSHFUYKJIGWQHXUQKBL");
    msg.description.assign("EMAGRJLATEENGXKIINUSFHIYPYCWRWKQHAMOKYSPWKUXZBBCPBMECROUJMQXSGJIONPKPSQWXVXJACZOFIOLEUVFWVMWNUXKRLCAWSLKUFRYVHFBIQTLQECZBGJONOXDBMPLTUGREPZHTDYIZKMZRRWHBDKQJZJEFVGEJHWGQYSUDAVIXLAGNTOVALLGCTCTAXPYHVAJDBODMDFRHNEXFHSMPSFJIZZNMNSNWPGCBYIQSK");
    msg.vnamespace.assign("LOUSVFEOBYDHKSDRPPNVYMZMJQHWLCTVMJGSIOOVIZMXLBNVCLUUCBBHKJWZIPHLDYUJBNDTSGLJOSQKXEAFKBPUMRQRDWEAATTCXQUSCHGCYLHQCGRMWWVWQFDZVAFJHBFAIXDENRAZYUPZHGCAIQJONAYZMAPJOURLKYLTXTGTSQKMGOSNREBWWMGRBFDIFOVHGDXMXVDCFRNKERLTEVZKFQIUYYZWGEEY");
    msg.start_man_id.assign("UJMPSRGSHINKCJJZUZMWHZUKXFHNNMGTTZRVPKEXXFNJETGYHNOXOOSWWHCUICLUBUOSRFDAGVNQTXPAUVYWPQLXQTZOZATFRLXDKIWODVZIBFMCRSZOYMMKAYICEADWRESNJQTDXELCGILPTGNJSOEGFIVNPGHUFRDAEHCIBYVOAKBNKLJMIKAPYEBWKOCYUQFURDDJQVGMRWIMXRQQEAA");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JCBPDOIIVFDODMFAGAKLHOOUIDQKVICKATPDQTYASZMVUBHTLDWBCOFSBXQBEPMHXILNCOTRLHXFUGSLJKWOZPOJIFJMENXDTPUKJXWYYQRZCNBBZATWHGWHFMPUSKVVBGNEMPJVQCCXLQQEJTPECUGQBOGHZGGXVIKNMUZJZSRAUDHUVYKYX");
    IMC::Elevator tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 2557781120U;
    tmp_tmp_msg_0_0.id.assign("BDICRHMIPXZDTJYPEPNDJWAWEGAZTVKQDOBPOYMSFXJNFSOJFYEPMEGLNLHVICQPR");
    tmp_tmp_msg_0_0.memento.assign("ZMXAYUPBBLXNYXUHJMOWKSMMHWUNOXXJKQLFFFPTSPNQLBRJXGTYDMDAWRWHTBBSEYB");
    tmp_tmp_msg_0_0.timeout = 38070U;
    tmp_tmp_msg_0_0.flags = 196U;
    tmp_tmp_msg_0_0.lat = 0.8680965260423258;
    tmp_tmp_msg_0_0.lon = 0.6102598466294596;
    tmp_tmp_msg_0_0.start_z = 0.2998476816290113;
    tmp_tmp_msg_0_0.start_z_units = 225U;
    tmp_tmp_msg_0_0.end_z = 0.667817391247697;
    tmp_tmp_msg_0_0.end_z_units = 215U;
    tmp_tmp_msg_0_0.radius = 0.3844514136451159;
    tmp_tmp_msg_0_0.speed = 0.05224036976891322;
    tmp_tmp_msg_0_0.speed_units = 222U;
    tmp_tmp_msg_0_0.custom.assign("HWAFZCRTPNINRTSTKVJKKJTSCPEHERGXRHDNVFOUDRBOTZMVSEJWZUBCUORCSWXPOUDIEGKFDPFEPYUEAINIBYUASXAZQKBQDHXZBGVNQRZQLDYQK");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LowLevelControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_ref = 2328671418U;
    tmp_tmp_msg_0_1.id.assign("ZXDGWTTHLJJBAKVDQKCXCWJHYSBTDLVMRYCSQDABERWGDOVYOEMWKXYZSHOVLZWBJSXZCTEDNFKCBZMAYXOSZPKFQBEPJQIQ");
    tmp_tmp_msg_0_1.memento.assign("JHMUFPKHTSLTDLKZSITDWYRLXURRUMJHTDINKXUBBWIKQJSXZDGMKCJWTTNBVDCKYYQYQDIQNWQGPVIUWQJJABPZHMZESWFCYHEOQMCVMOWVYZIMVTVZIZAPQKASFVDQNXXCLPADLPUKCBEHEGNTQSYUXSBINRRLBOLKOLNBRVXOCYPWUFGFNOVPFBNXDJAYEOJOWSCRGESRNHFMFPHWGGEJXPTL");
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.value = 0.3207706846844043;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 86U;
    tmp_tmp_msg_0_1.control.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.duration = 39020U;
    tmp_tmp_msg_0_1.custom.assign("ISPMWHRVTLGCKVWBWSERDFREGRQHKQMJANDPCTXLMCFPJMDHYWPTQNUKDHIIRGFZZJIMTELTOANMNOAPKZUMGXYKFAZOFXSUJHCPRXUOSLBHQUQAJWGSKPDZPQJWKXMEHCPLNFVUUZNSKAGCBRYDTYAQEOHYIWVECZIVEWREJXLINYBFGGLOKASPRUHNKTMDIIONFTVWJLCBODBYEZVXXMGSHTZEZOJVXGBYYOLDU");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LONYIYFROYXSJFCWKTDAWHIXIJMIPMQTJBJQOLVNOVDHIIZJGADRJRKIGWMEYEWUTLGSHGESAROWRXRXSHW");
    tmp_msg_1.dest_man.assign("CISJESUFUBPMLTOEYIDWXESADOLNWGKQYYEZYDKQVMSIFAVFDWOJUFUGGGWEPTUSOVPNSRXAGVBCRDFLMAVUKNPFCTQOHTSJIKLTAFHP");
    tmp_msg_1.conditions.assign("QYKLMZMYSNIAZHAIRWFLBDPHFAQQWAMMJOTTXXKHHOMLPDBPKLDGJYJZOMRB");
    IMC::NeptusBlob tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.content_type.assign("ASAXGVWNKFUWLSLQNBSWTXJZOETYFWAYGMDFVRPQNFBGHXKHWTLYXLRODZRSDDHNHIMBUPOKJXFNDIHCVEECUMVZRYWAKITVCVJCFYADMIJBREZOAPZDYOXCKPZ");
    const char tmp_tmp_tmp_msg_1_0_0[] = {18, 62, 12, 70, 98, -15, 26, -64, -97, 92, 84, -53, 3, -87, -84, 83, 85, -5, -8, 96, -62, -41, -119, -39, -42, 82, -123, -30, -40, -16, 79, -123, 84, -64, 55, 70};
    tmp_tmp_msg_1_0.content.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DevDataBinary tmp_msg_2;
    const char tmp_tmp_msg_2_0[] = {30, 23, -1, 54, 41, 16, -16, 105, 3, 19, -115, 7, 20, -72, 106, 115, 87, -70, -28, -19, -119, 0, -114, -30, 27, 44, 74, -63, -58, 35, -94, -52, -74, -127, -82, 35, 30, 26, 68, 90, -45, 54, 84, 86, 58, 85, 96, 104, -29, 24, 126, -65, -124, 86, 73, 123, -3, 4, 53, 106, 40, 92, -10, 118, -119, -109, -38, 103, -79, 69, -80, 77, 43, 87, 16, 28, -87, 95, 32, 99, -104, -80, -105, -56, 105, -95, 59, 33, -102, -30, 85, 8, -24, 78, 94, -89, 24, -50, 104, 16, 51, -91, -42, 119, -53, 3, -66, -41, -75, -88, -48, 16, -7, 118, 56, -84, 59, -1, 74, -70, -42, 21, -26, -65, -16, 111, -117, -19, -60, -107};
    tmp_msg_2.value.assign(tmp_tmp_msg_2_0, tmp_tmp_msg_2_0 + sizeof(tmp_tmp_msg_2_0));
    msg.start_actions.push_back(tmp_msg_2);
    IMC::LeaderState tmp_msg_3;
    tmp_msg_3.group_name.assign("JQENAPJZITTIEQHTWVAZSJCBDO");
    tmp_msg_3.op = 215U;
    tmp_msg_3.lat = 0.5846186513122464;
    tmp_msg_3.lon = 0.26776257683584515;
    tmp_msg_3.height = 0.8006402626975856;
    tmp_msg_3.x = 0.3626005494452068;
    tmp_msg_3.y = 0.01924608154432761;
    tmp_msg_3.z = 0.42269044863326555;
    tmp_msg_3.phi = 0.5954295083420692;
    tmp_msg_3.theta = 0.3507737456633875;
    tmp_msg_3.psi = 0.45956640664800974;
    tmp_msg_3.vx = 0.7217389291577017;
    tmp_msg_3.vy = 0.7693480234673846;
    tmp_msg_3.vz = 0.41159226152735073;
    tmp_msg_3.p = 0.3526365227579059;
    tmp_msg_3.q = 0.9694344577740659;
    tmp_msg_3.r = 0.9682186669951734;
    tmp_msg_3.svx = 0.22957827836219824;
    tmp_msg_3.svy = 0.4557131049796146;
    tmp_msg_3.svz = 0.4391262871004097;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.1734967919993411);
    msg.setSource(7447U);
    msg.setSourceEntity(238U);
    msg.setDestination(39907U);
    msg.setDestinationEntity(8U);
    msg.maneuver_id.assign("NQUYDBWVIMDHVASLLWIPLIKMCJUBRVQXCFFAKOVBGUCEIALQOFAUFHTDKDNPTPODGUVZYOLYYSTXPSGOKJNQTEPRVVDZJQJHANCHZELOLJRGAJGEXIOCVLTZUHXUHKWBJUCYKKMQCEDEJSOCFAGQ");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.plan_ref = 4078602042U;
    tmp_msg_0.id.assign("THQZWIRIRMSVQRWFYQRPMTLESGDGBYDVDHBGPHLJPVHVKDUOVFBPALKIUFMFNRPHNBWAODLZJYCWGETDJFTCHWKAVYMKESXJJ");
    tmp_msg_0.memento.assign("HONYGPBOOUQMIYXRILPKNAGIABYIFGILUKQJMLWJSFKFSWEDNEUQXDPFVHDDDTYUMTRFXHPQKGGTVZAJAGGOMEELCWXEIQSZLCPFOAUMNOHYHJWCDTFETSQGSHC");
    tmp_msg_0.timeout = 32120U;
    tmp_msg_0.lat = 0.7229318245607042;
    tmp_msg_0.lon = 0.4953694541306839;
    tmp_msg_0.z = 0.43997230458176784;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.speed = 0.38148020108013136;
    tmp_msg_0.speed_units = 97U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8946554897283635;
    tmp_tmp_msg_0_0.y = 0.2177712746048961;
    tmp_tmp_msg_0_0.z = 0.4336793256902505;
    tmp_tmp_msg_0_0.t = 0.45243238948561126;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("CDWSQUWWOYJEPQMZYEOBZCUVYGNQOBGUIGQAEZFFAIYKTECXLLKUCIWIPIEUOGYYPXTSWD");
    msg.data.set(tmp_msg_0);
    IMC::DesiredPitch tmp_msg_1;
    tmp_msg_1.value = 0.8698824898212665;
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
    msg.setTimeStamp(0.7048087829458047);
    msg.setSource(18147U);
    msg.setSourceEntity(65U);
    msg.setDestination(31771U);
    msg.setDestinationEntity(111U);
    msg.maneuver_id.assign("ATCLMMFZDLYAOYKLHUFXLHJQYQBKRMFCTONMXPZZPPYCSXAOWIGDOLWBEJHZMRANHHVILOHFOUIJIVDXWMZAB");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 2802756572U;
    tmp_msg_0.id.assign("TLNIMERYCOBYGZNBLMKZWKWTAHIPCIKZQYMJOBHZRGQXKCLHEQFQIKBJRQTFGKXELEKXPNBGWAQWSTGVLUGLWDDOXAZQPHENUHLOCDOU");
    tmp_msg_0.memento.assign("AZCFTOGSUKCOHDWNADKXLAKYRBEAPSUEUTKRGBWVHX");
    tmp_msg_0.timeout = 6661U;
    tmp_msg_0.name.assign("JIYFLZYNVSBMABNATVDDTUTKRIDPHXSVIWFPSQEOODAWEXOPSWHOVYEPMRHUEAQGTEBWSH");
    tmp_msg_0.custom.assign("KHTDUOCFVQHVPXAUEBDCDVVYFPMVRZTLCEAGPNVKSTSVPMEOZSKKSQDEOABNF");
    msg.data.set(tmp_msg_0);
    IMC::WaterDensity tmp_msg_1;
    tmp_msg_1.value = 0.22122724969899255;
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
    msg.setTimeStamp(0.6965635315260186);
    msg.setSource(41521U);
    msg.setSourceEntity(27U);
    msg.setDestination(59307U);
    msg.setDestinationEntity(32U);
    msg.maneuver_id.assign("KXVUQSIPHBDMKTTIPWCVJZVXEKTUFDHGZUGWLLUGCDHMJLWVGWKHQRTSVITLEAMZULBUXBLCGTJWIXJQZYGBEAMNMZPFWOIVRZNNQXUCQZVEFLUFHBQPJCBOZXYRQ");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 3329809091U;
    tmp_msg_0.id.assign("LFGIDTMIKGPGPCHZWJYXSRDIWCGPSBWSXMJPEOHWZHTMEUZOTXDVTOKKYFOURVHCWQFFETLJDSXYYJNSOUEHEWFHBYDSVSJHRVBLKFWKXNFQLEQRMTUWP");
    tmp_msg_0.memento.assign("MCJYSZKOPRBBALDRCOTFWVLVZBQWRALTAOSLFWHRDPVWUMZVQQKZCHEQIBXYKEEDMJXFOQUXBMFLGASNQABRLQGRVLNJTIWNFLGHDWEZOGVFMDTHSUBAGFNEHRNZBWTQXUODQIXIPHFPXATGXDFGYW");
    tmp_msg_0.control_src = 1109U;
    tmp_msg_0.control_ent = 172U;
    tmp_msg_0.timeout = 0.9576276345153147;
    tmp_msg_0.loiter_radius = 0.45858075173574064;
    tmp_msg_0.altitude_interval = 0.3243427527663789;
    msg.data.set(tmp_msg_0);
    IMC::Pressure tmp_msg_1;
    tmp_msg_1.value = 0.5837415658791916;
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
    msg.setTimeStamp(0.34501318980756257);
    msg.setSource(16647U);
    msg.setSourceEntity(37U);
    msg.setDestination(12688U);
    msg.setDestinationEntity(20U);
    msg.source_man.assign("HMIPCSXFHONZRYSESRPTKQABKYKQFRLUXHWLHVJDWUZCWJNFL");
    msg.dest_man.assign("TKAIIITNVDZYYDXAQEINCYINGLWKXLTJGHQBRGAKYVPQTUHZEVUWHWAPD");
    msg.conditions.assign("XOHEGEIMGHULCRRPFORTPWVNJYLDESNSRZVLPBRZUTKTWNXMUYAFACXIBKSTYVSZIPXGOLAAKCNEVISJCKPDJSIQJZAMQEHGMHAGARNDVPFQYORQCIKQVDXVYVNBSFWGTDFBZWTBWQZDIOIUYXFKZTJKSPHXXCKVKUMBZXVRPWJPNYINFUMMOAHEC");

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
    msg.setTimeStamp(0.1822099295116283);
    msg.setSource(25105U);
    msg.setSourceEntity(41U);
    msg.setDestination(19308U);
    msg.setDestinationEntity(81U);
    msg.source_man.assign("HPOGDYJQHP");
    msg.dest_man.assign("CKFWYOTBJHMGIWAFQSAULGQLQYEUMTVOSYBVGJB");
    msg.conditions.assign("GRZDTHRNKDVXEWVLPVNQQXNGMTPNUELSXGBZFHLOEVUADRJSXQNRISUOROFPXHTBUANIWYJIBIVAKNAKQCLPNCMHRPVZPZYAVFXHYMGTWDSBXPDEFCBBJQECSLZCBCYGLJKRUOQXGUMSYUMHJVDKHDWTLOSLPFRSYAOWWQBDOAMXIFTVKMIECLUIGHTNMHEF");
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 2618721504U;
    tmp_msg_0.id.assign("GFEIRTYZSLXTKMEUHXEHJWHHBRGWZPLSSEOEXUDPFMQHTXAFAEUKQYJCTEMKMZDNHYNCVZHPSVYYKXATPOACUZHVGNEJLZPBIUWPZGTDGUXQPMDKXSBETUZVGGATOAUIVFMIYCJRYRNFFMIANZLCJIVVQXJSDXCMRTFDYWWVJBGOCQLVLUARBHMEBSYDB");
    tmp_msg_0.memento.assign("OBHQBHRDBXZNAUZPWSCNXISRLQIORHDKVKUVOYKGZIZPFPHFQSTCGJYTDNTZAUMEOXHDOVRIFRARILSMMXJAXEAOQJMFQITCYLIYBFVMHGCLTJQVUDQRHJRYGEEGFXCCLGKLWJXEJFQTMZTYTXPCLQBBJKCTDMSFUOMSWDYDNIVDGWPWPWHGVOAJBZCPEGFSWBUPEHONPUKIJESUIRYRMKAOSKLDCBSPMHEFVXNYNKWLTNEBZNZV");
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
    msg.setTimeStamp(0.2275576290835044);
    msg.setSource(35512U);
    msg.setSourceEntity(151U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(96U);
    msg.source_man.assign("IFIKEPJQAXPVWUMSDEEDIWURCZUXZHYVPFVLCGPHWXJMAFZALOPPSIRKIGLNZVNTTUVYBMFRHROKKYCQYXISDLTKJLPTEGZWFMYIAOBYDROKQDXESDTQCWCYEUIMGMQCKUNANOXSQINBXVWOGUZGEJCMSTSRYHDLBEHHWLIKORBVJMVFXGSGBOSUQQTRNJFZPBRBJWDDEQKNJ");
    msg.dest_man.assign("SGWHJLUMHSJUXTAOSELXLOSPELGJWZKRANRHGHOWYHDWGRWDIRUSVBTX");
    msg.conditions.assign("EQAKILVAYVSUFLGAZHDEHCVWGJGJCTILPYHZFODZKLOBABSOQITKNHKXGTKVWPWHTMWFJMQWYXNBUJYXVXMVCLPUSCRCXHEPLGNOGASXNLZIMVUICRQPRDZQKIMAYMQQWGKBJDBDFHZUUSMCQWOXONODBJTRECXRFHZYBQLEIOSBEMSNJHSVAFWMZYEDCVJBOUIOYKFNGBNTRDLDERLZTCRJFRPIFUZNPPYTAUEETUTMPA");

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
    msg.setTimeStamp(0.13623320791809634);
    msg.setSource(33802U);
    msg.setSourceEntity(11U);
    msg.setDestination(19891U);
    msg.setDestinationEntity(148U);
    msg.command = 18U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TEULIMHAUSZLMSKIGQMVVXBMSOMAIHCKMBBUVJGEDDSWAQKRHZIEBZFLHVNEHCQSSMPPHBXOUZGAQYNGIQQAIQIJVKGUDTBUWWRALXDTFYFNKWUCLVMXKCJDQYJRZEGDZHXLPIURBOCBOKGGULSMAGNEWTSO");
    tmp_msg_0.description.assign("AIAKDIPHAFFSGAAKAOEGHDSIKBXVGCISZPNXGUQRWBPBZQIMFDJMHZBHJHXKQBCNCCXZRYCGAKOECLWECXZFEARHQNAHNOUFYXKPINUSZTEDJWFSFWZUQLKGCMHIXMNDWVROULMZIWPRUIVYP");
    tmp_msg_0.vnamespace.assign("GYJEZUQEKSKLEEANZPLUGGIWIVBOPKWQANMTXUZTPAYAXCFCIHSOODDLPLAXIMNYZBUQJBQKSENWGUQMHNRXVCCGRCTSBGFMXHZCPFFPIJQNXFNDFNDRVCTTHIJOKVRMDQOOPDWISEOSMLTYLHDWEKRLFNRB");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGRJZJZBGDGFE");
    tmp_tmp_msg_0_0.value.assign("FFMKVHLCTUGYKAEXCNBFTBDAKJBIUSEYLDAJNDIBCDLXDVLQPXMTMLMUGEKHSAFHQWRXUOPCMGSDHVWVJTEYKFPPSJNRNLFNMFEQWLTNAKGNNGAPJIRSZHCTYXBTQIZUTSMKKGJOIEWKTZIZTOOXGDRIRINVLEBQMGYCRUAZWPBHRAORXZZWVKCBWLVGPOMOW");
    tmp_tmp_msg_0_0.type = 38U;
    tmp_tmp_msg_0_0.access = 240U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("TKUHNAIMFOVCZPYQSWWQZVGENDSJMJFEZPQBLORNADJFJGPVEFQULZTEHSDHCORASADQKTNWLBZYUOPTTYP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("LKXBNVHSLLPEURSBMWTGPYYADVRHAFUYNNRXXHIBYDOZUJZKSZBRDICTENJQAAWTGQQDRICWERDYTNEMJEGZSVRFUFZNZCXHRLFQPKFAKAHUFQCFKSSOXPJBXJKAQGXOECDUXHQRMTOMOKEEDZPYPIAIMHPVVVHOWDJQTTJUZAGCLYTLIWBWBBZYHAXMITGDWBKYNELYZNUJWMJNWGOVVIIDBRVKQQSHCFGSXGLVOPWOMPICNFSJLOU");
    tmp_tmp_msg_0_1.dest_man.assign("RCOVDEUDLEBIYGWXKZWYNTCOPLZFJGGNEGNSWKILSSWHVXNKFWLASZNGDQMYYURLBEJKOEMFQTARUXSGDRRQZVZECULWOJUPVKXNVQBATDZOSYVMCQXJOGSXOZXJLMPHTYNVABDBDUMYBCABFLHISMITHZGFETWLCOQMJCKHEAJIPNQAISMOPPRZKDPYYHHEDVHBFBWUCGUMJORFTEIIADJUXJ");
    tmp_tmp_msg_0_1.conditions.assign("ICICYXBURCQGILASAKTPOZOGRGETTGGZYHBEAISSFDWTXRFNBWIKKQVHRUMURAKKBNYZPTY");
    IMC::ButtonEvent tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.button = 67U;
    tmp_tmp_tmp_msg_0_1_0.value = 203U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PlanManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.maneuver_id.assign("TOMJPTOUYBQVZTYGUNB");
    IMC::CommsRelay tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.plan_ref = 2732908636U;
    tmp_tmp_tmp_msg_0_2_0.id.assign("FVUDBCOPIQWQRMHNNXJGHGWJNGPBXXOERRINNEKRIWIAKQRJXWEALDTWOYHQKRUYGEVOFUZNMSFDWUHGLLWVLCEPPKHSOINIEZFEDZYCBQORLKCTAMWDDJLTXMUBNQKJVVCBSSDZ");
    tmp_tmp_tmp_msg_0_2_0.memento.assign("ALFJQCCFSXXWYWSVFAZQKMCNDVHGMGBRHNQOTZZ");
    tmp_tmp_tmp_msg_0_2_0.lat = 0.49735075148935526;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.8039043770941038;
    tmp_tmp_tmp_msg_0_2_0.speed = 0.26328007007206355;
    tmp_tmp_tmp_msg_0_2_0.speed_units = 195U;
    tmp_tmp_tmp_msg_0_2_0.duration = 44877U;
    tmp_tmp_tmp_msg_0_2_0.sys_a = 21499U;
    tmp_tmp_tmp_msg_0_2_0.sys_b = 27874U;
    tmp_tmp_tmp_msg_0_2_0.move_threshold = 0.33333833578943206;
    tmp_tmp_msg_0_2.data.set(tmp_tmp_tmp_msg_0_2_0);
    IMC::Heartbeat tmp_tmp_tmp_msg_0_2_1;
    tmp_tmp_msg_0_2.start_actions.push_back(tmp_tmp_tmp_msg_0_2_1);
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.1421077811281518);
    msg.setSource(27995U);
    msg.setSourceEntity(92U);
    msg.setDestination(50444U);
    msg.setDestinationEntity(38U);
    msg.command = 184U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VMABUECBOLHNNLSRIXRTSPATQMYHJKCWCFACC");
    tmp_msg_0.description.assign("XHDXXZTUFAQMCTSERSPIDGMQHSFUEAGQODNDPFZIBCBNGFAMRLVSPFJIOXPUWJGWQEWZCTORLDTYCBPRXWGSPMNVOSYMKQOHAHXWNAIGLMESVQVZDLRHHCJJVMHXRAMJVNDUCGWXELIXYJJAEJRFKGTKFOZONBCDFJPGZWEHLNIHGZNDPIVEBOZRCL");
    tmp_msg_0.vnamespace.assign("UVQEXSKJGZWRNCDGSAVXZMRZJMSKGLMYETKXPCEAHYWUHVVGLEDOYAQJPWRXRQJKUKNIOPDOGLAZVDFOJLUCRIKTCNIJGHRBXQBVSCYICUJVBHAEEWHSFVUNITEKR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MGLQOLFBXKZIFWKIKYDYPAQAJZMVEPKYOMDQCTECJXBUFMHCDHHNSCUBIOFRUWGTSERMOTUPLWORAKJMODUIGFYFZPBSSXVCXMJRKLEEYBUODWTJTZLNTAXAAMNSMZVXQSTSKTPBDBPXGMFIVRBLNPCHKRJNRTYWVXRDAGGCOZOIWVLVIQRYBGUZAFESZVTKEUAWILXBHCWL");
    tmp_tmp_msg_0_0.value.assign("VNGNLXZQDPUFFLQEDTSXDZSPMSGNXRQAXVSIKPFTOOQEDYGHZVABEAUBLEQKHMQLCTXPNXSPGWGRFFKWGSMOFNUKGFYNTNZJCDDQYYILYDPYPIRKZJMAZOISYUWGHMKQWUXWWJJVRZNJMTPEO");
    tmp_tmp_msg_0_0.type = 150U;
    tmp_tmp_msg_0_0.access = 134U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UXSJMYQPOQGLWETERHLFEDTKHMMEGMAJBNJJPWJHWHGAURDMIGQSOFTHKSYCFDGMSWFLENQTKVZNTUEVKHNZKNZLGQULZFIJBJCZBCYRYQAZOCSC");
    IMC::TrajectoryPoint tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.x = 0.9187697884708292;
    tmp_tmp_msg_0_1.y = 0.9737057384370557;
    tmp_tmp_msg_0_1.z = 0.498227827011015;
    tmp_tmp_msg_0_1.t = 0.600452772600981;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.928862630717184);
    msg.setSource(29178U);
    msg.setSourceEntity(10U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(80U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SEUXYHZAWJNISPDOBQONPAHAMPVNURMRTCTIZJCRGVWYXVHSELWYIETDSGUZMEYPAMAHTJTJEHBIFPCPKTOCABLQREMVPGTKVDFXKJPKMVGSQVORGFWLALZBBFWHLDDQW");
    tmp_msg_0.description.assign("MGVJKQBTUUOJEPAHAVNNUSPHCQKVVCJNOLPZRWBUVNXELHPECHGRGAXHQXSMDBZIUPFQIBYRVIDQLODQOKFWZ");
    tmp_msg_0.vnamespace.assign("VAHRUDXQMGDGIUWIKJYOH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CWHYLVCNQLVIYTNUWAKRKBMGUQZINCPDNRUZFSDLHUMSTBJZRKEMLYARBHWGSWVQKJUZVHNDOOOQWNYHLMQBGEPVXSZHDWGXZURTYELFGLJJRKVEQOHABXVAIJCCDCJGIPZOKMEHJBOBMKXISYLZYACTMIEQDFRBQHSRJTWXFVAOAPPIXULUNUPKOTBMDKFHUYMF");
    tmp_tmp_msg_0_0.value.assign("DKFQTXMMBQKBGTSUMZGNPSBZULO");
    tmp_tmp_msg_0_0.type = 117U;
    tmp_tmp_msg_0_0.access = 77U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DJTOYIBONAMDVVGZUWSEMAWXPAIQDFOEFCNRVEYQPPRZZYRJAUCMATLNVZGRKIXZBCHZXOIHJMULZJFLQTAVOIVUZNDFXDSJHOOCFOGPJEQXWKWGYGFCVQFXRNKZEXGAWKQBMFCGPXLFKYCSKJELUTJNBKTCTV");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WFSTEAHERHTLYVPPQHTMROJCXXTBKOWYETCQXNJCWZXMUICEEYRAULKDEZOBLYIBYOLPFYSJMSVXCJKGPBZSBOGKNBNNHAJGHINQEHMUVDRQBWQFEFOAPYQ");
    tmp_tmp_msg_0_1.dest_man.assign("CMIXAUQRTNVWZULNETAKSMJPWHBRYOGBESWTMLBEBISVSNEEYIUOGYLXLDMJHMUCFIZICIXQOTGLXUPNTYDUUPWNWVBYAXYARFAXFLPCDIDRVQHWPGRBYJSPVQCBHINZQMCRKJSKOQYNOOHKLCVZHODAPJYCZIBSTEJLFDKOR");
    tmp_tmp_msg_0_1.conditions.assign("NNTIZDHFBULAXTDEKOQWHTQPIQWPKRYVGJTEEZZRAUMBJRLJMLGEKKMNEQZRXSUCORYDSCGIKCFFWGKBXMEPHYPFJLOOBZKAWREDZSIBTBTQOXCPUBMOEIDJLADYCJNCYNPMFGYXSLSDWGNXXTFVNFIAUXLYXJWVEUROTVIJLVOIHAVMHPUCZKAP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 112U;
    tmp_tmp_msg_0_2.x = 0.822092433095574;
    tmp_tmp_msg_0_2.y = 0.0927346614322263;
    tmp_tmp_msg_0_2.z = 0.0639110060742093;
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
    msg.setTimeStamp(0.2649369480109276);
    msg.setSource(23881U);
    msg.setSourceEntity(116U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(123U);
    msg.state = 60U;
    msg.plan_id.assign("QOXTNELDZFMUSVDHTMALSTXGDHJUWSBPKINZDAOMVGESAUJVNDIYXPGCUDJOATLXJULQICOOFFTBLLJVOFGEELDJPLRDQWCVPTGEKMOENZZWMVOSQHYICXAQTSMIYSGBNEEYUXBFP");
    msg.comm_level = 82U;

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
    msg.setTimeStamp(0.14646769061051101);
    msg.setSource(48506U);
    msg.setSourceEntity(101U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(62U);
    msg.state = 225U;
    msg.plan_id.assign("SNIFTDJGFXHKRFQVWVDMPNQSFAZLWOBUBIUA");
    msg.comm_level = 198U;

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
    msg.setTimeStamp(0.7407588876912443);
    msg.setSource(9649U);
    msg.setSourceEntity(236U);
    msg.setDestination(60501U);
    msg.setDestinationEntity(133U);
    msg.state = 175U;
    msg.plan_id.assign("HEZHASRNRGZCYASJKLXYTZWFUBQSABXRHVIDAGIFYVPOEATFHERPMCHIOSVNEGDBVZQXPHCQHHPJEPMEZJKYWQQJDQIGCWOMKCOIJKOOAIBZCVKSWRMGXQAXLSVUBXDMNBOKSXUAXTFNPUFSEYRBXUYFDQUPNCTJLHTUYTVV");
    msg.comm_level = 218U;

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
    msg.setTimeStamp(0.7507263271648764);
    msg.setSource(33894U);
    msg.setSourceEntity(183U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(137U);
    msg.type = 8U;
    msg.ot = 46U;
    msg.op = 225U;
    msg.request_id = 21738U;
    msg.plan_id.assign("DFNIPQIYUMWXFNFKVDWEUCYBSAOYTZEHBHJCCLLEGMRMFRZNFJMAAIFGLMILVRJHUHKXJKWPJNTZZJXHOSBBRUTLXTPZIWRYNHEDKGCDZFVJGTGXBDFUGSPCTMHVMRBIYKZBCMCHAOIKSRNQOWIAYRVGLNTVPWEXQQQVQFTSFPDVXUZSEAUMCYDYJPNMAQCWGOPWGPKN");
    IMC::MsgList tmp_msg_0;
    IMC::GetOperationalLimits tmp_tmp_msg_0_0;
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LYMPVWVENFFBMOZSENJQLLYYTKTQWNLFHALOCLECTIXRAFOZHEZNRDGFFTKWHTABBOTRJYNCLHUCOJMSUSJWKSKMVEUIWQIOCNAHPZBGLMAUXDFDMDVDIXOUDLJWHQQVYXSYRORXFEJTZMPSDMNVMKSWOABKYBQHRLCSGZZCPGJYXMTRYDZTAEXBOPAQKUIXKWAQNFPAWCRZKVIZSEIUGVN");

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
    msg.setTimeStamp(0.31103232951851256);
    msg.setSource(37259U);
    msg.setSourceEntity(179U);
    msg.setDestination(7402U);
    msg.setDestinationEntity(129U);
    msg.type = 171U;
    msg.ot = 94U;
    msg.op = 99U;
    msg.request_id = 10388U;
    msg.plan_id.assign("ADJCWFMGHZPEXTZIKSLVQRNSCVQFCBNBFJNLHRIAFHWHPXRPIENJVTUBUTZPSQYODWWNBFYMISASMERNVYSJBGAKULAASKEUKFKSGDEKPXLZXJFGDWAHVBDXDA");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 151U;
    tmp_msg_0.file.assign("JIJLUTAWQEHLFAVAKFYCTBIQAEGPBBCNGXPXOMGVPBFKSCUPHZYBDXYZBTCEGAFLDPWMDMOHSMGYWIOUNWTIOJGATZQVA");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EUYICHCFNLYQWMOSBQVVFIWWWXDGKGFOCRTEQUHDGDGSDKIULAVYKSXXRKLKJBNKPBNQPDXFVJZJKSMESWZMNRLLOSIYETJWRQMDEZPQWMMCVPNZYPRJAXQSDWEKMSPYTLQZAZPAIBERXUIUXCXHRGRUUJJEH");

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
    msg.setTimeStamp(0.19984154532043585);
    msg.setSource(25111U);
    msg.setSourceEntity(7U);
    msg.setDestination(32084U);
    msg.setDestinationEntity(99U);
    msg.type = 3U;
    msg.ot = 125U;
    msg.op = 47U;
    msg.request_id = 17836U;
    msg.plan_id.assign("EFNZBFIBHWVRLSHPLYTFUEWRULQPOJJOTZYGRMDJLBEVUYAJCFUKAVLTMBKLYTNOSGIWZSHNBWEENMFOXFMOLFFQINHDWCQRQIKRAYSGDGDJKGAQNDHSXWSCEXJNBVAKSOPPEDAWJJSEQZAXECVPPZMIMCZSVZWYIJPTDFORVKELZTPUHHXUGCKZVQXRMBIUY");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 2411607165U;
    tmp_msg_0.state = 142U;
    tmp_msg_0.error.assign("SUAKKGRBYXZOWJUKNUVPALXRYJDINFPCSOZCPSSXXCZVILXBBIFQVMTHOZDTEITAORBLDJIWXWAMNUQENARFPUWERWC");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CABRYSTHEKGWFRWNDDLODRCUYBIQMYPNMHIDDSKJQBDEYGGYONIKXEHHVSQJNBQBNSJVVCOUBMBLXFKTTKCCVVWUCJNLGLGROEJ");

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
    msg.setTimeStamp(0.5078311306285667);
    msg.setSource(47717U);
    msg.setSourceEntity(241U);
    msg.setDestination(60355U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 18362U;
    msg.plan_size = 2287665791U;
    msg.change_time = 0.8497796547333529;
    msg.change_sid = 50251U;
    msg.change_sname.assign("DVJGFXHTQQQOLCNATZBI");
    const char tmp_msg_0[] = {10, 6, -52, -14, 22, 32, 67, 52, -108, -21, 47, -77, -24, 93, -75, -53, 5, 0, -37, 62, 48, -118, -89, -118, 81, -37, -73, 9, -84, -73, 112, 30, -49, -66, 45, 48, -119, 45, -115, -9, -1, 50, 9, 66, 5, 22, 111, 46, 42, 33, 75, 41, -124, 15, -65, -77, -61, 78, -56, 74, 36, -34, -57, 72, 39, -60, -100, 99, 115, -77, 125, 13, -96, -77, -87, -47, -85, -117, -19, -59, -22, 57, -39, 15, -88, 99, 32, 8, -51, -123, -7, -89, 52, -91, -30, -101, 32, -78, -67, 97, -82, 28, 124, 61, 103, -83, 115, 45, -114, 41, -63, -107, 87, 22, -71, -84, 120, 32, 44, -109, 88, 44, -78, -72, 35, 28, 126, 46, 39, 63, 69, -20, 7, 45, 102, 71, 38, -46, -9, -78, -72, -89, 126, 23, -56, 4, -112, 115, -65, 95, 1, 19, 65, -96, 6, -29, 6, 81, -31, 62, -43, 90, -38, 59, 74, -112, 101, 70, 59, 68, 74, -22, 120, -104, -33, -34, -116, 59, -28, -80, -28, 3, -58, 47};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JKKANFNBNUOEZGEVVODYKDWJFUHQMCNLMBUPRXPSQYYNDTIZAPQRBKTZJHDOHSOIGERZRUXPMGSTNTQXIGYETULHCZSQELZPVBCOTCRFCMBMJXYJASLRIPQMKRPDVWAXUZIJAWMVONJWISITXOOISHCNKODVYBUKCAUCLLPDLRATMGHAWHEKTRIWXXBDUQF");
    tmp_msg_1.plan_size = 52773U;
    tmp_msg_1.change_time = 0.5538678474996831;
    tmp_msg_1.change_sid = 5822U;
    tmp_msg_1.change_sname.assign("OGZWGEXFJMRVUEVPKLVPDFZPASDCTSFFSWSHUIXBQNNRUZLNSBEZIWOKTYJJMRBVMMEENUMISFWPUEVWXDCVATPDMPHRWDJAIIOUCAWGRLIDX");
    const char tmp_tmp_msg_1_0[] = {-96, -104, 119, 85, -59, 7, -109, 27, -21, -61, 85, -31, -84, -90, -112, -38, -24, 46, -58, -81, -101, 101, -59, -11, 34, 11, -27, -67, -121, 43, -67, -49, 2, -64, -15, 69, -45, -99, 24, 91, 99, 59, 29, 120, 36, -4, 77, -98, -41, 42};
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
    msg.setTimeStamp(0.1942327336299231);
    msg.setSource(24987U);
    msg.setSourceEntity(143U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(51U);
    msg.plan_count = 52282U;
    msg.plan_size = 1260948207U;
    msg.change_time = 0.5689495414935062;
    msg.change_sid = 15098U;
    msg.change_sname.assign("QNUBVALAEQEZSNAWOKSQWUIKJSPLJNZHZCDYOP");
    const char tmp_msg_0[] = {-109, 74, -27, 114, 46, -82, -55, -101, -74, 44, -69, -41, -79, 13, 49, 88, -28, 86, 118, -113, -2, -44, -101, 39, 54, -56, 47, 71, -86, 57, -67, -71, 115, 50, -12, 85, -49, -117, -96, 27, 82, -83, -84, -19, -4, -123, 2, -3, 23, 91, -52, -27, 33, -30, -14, -67, -84, -26, -37, 4, -1, -1, 62, -68, -84, 68, -9, -120, -125, -56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IEFEKGXNNHZAZUPPWOQMUGPADMEHTZPXKGCKVLDFCNOFEYASJROLMKZJJFADCVJRLJLULHW");
    tmp_msg_1.plan_size = 16311U;
    tmp_msg_1.change_time = 0.5117703268158773;
    tmp_msg_1.change_sid = 33108U;
    tmp_msg_1.change_sname.assign("BTVXVCLWPHDNAWTXATAATFCBQOXCZLDPARTILLJVSDPQPGRFCPJREQVLQJ");
    const char tmp_tmp_msg_1_0[] = {-117, 64, 57, 47, 68, -40, -72, 4, -48, 121, 34, 88, -68, 9, 13, -66, 107, -6, 64, 121, 43, 51};
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
    msg.setTimeStamp(0.8340328313072135);
    msg.setSource(51830U);
    msg.setSourceEntity(40U);
    msg.setDestination(59694U);
    msg.setDestinationEntity(117U);
    msg.plan_count = 46857U;
    msg.plan_size = 2980405242U;
    msg.change_time = 0.2055112150084527;
    msg.change_sid = 13939U;
    msg.change_sname.assign("NLWUCWFSHQCFKCQTRVXCGBWLFSXYMMREZHNY");
    const char tmp_msg_0[] = {93, 41, 12, -102, 57, 64, 100, 62, -33, -111, 91, 81, -13, 107, -119, -65, 18, -13, 62, 62, 95, 104, 3, -43, -73, -37, 113, -89, 69, -60, 18, -63, 5, 9, 95, -114, -56, 120, -48, 39, -125, 13, -128, 73, -44, 73, 78, -59, 67, -56, -33, -58, 60, 21, 14, 81, 100, -57, -102, 122, 45, -51, -117, -103, -50, 42, -93, -47, -91, -113, -100, 102, -44, 82, -106, -110, -89, -7, -2};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FXKADUKCGQOLTHJFLTMCUQEBGZXVQIJOVAGYRDGTFORCZANNAKHJHJDBNSRBSFCPPNFPGVOHLSTEWQAIJYWTLPOMPWLCYNMEISETCUHDYGKBFAPSIOCJMHUXGNZSVSHJNSVKUEUOBHBKQDIXGQMMEQNZYVKLTHRRKMZVWTUDJIHRPLEXYECXAJIGYWIZPDCZBWOWRPSBWAMURUMFBIWNALQDYXZVRFIAXQKXLP");
    tmp_msg_1.plan_size = 38421U;
    tmp_msg_1.change_time = 0.03817523414804458;
    tmp_msg_1.change_sid = 7738U;
    tmp_msg_1.change_sname.assign("CIQYSIZCOFCUPDLGMDGWVOZLANDMPVUWDYOTHKTPERXGVJXOFTUSNEDHZBOBYWRDCESGRYZQIPRE");
    const char tmp_tmp_msg_1_0[] = {-67, -36, -84, 42, -67, 125, -79, -61, 39, -83, 21, 26, -9, -44, -9, 51, 111, 76, -110, 110, 101, 105, 24, 79, -38, -77, 94, -110, 86, -108, -69, 62, -4, -21, -107, 90, -18, 75, -99, 38, 79, -76, 13, -87, 97, 34, -39, 23, -36, -31, 38, 18, -45, -63, 119, 54, -80, 63, -21, 53, -9, -103, 110, 17, -73, -115, 114, -107, 104, -117, 113, -99, -114};
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
    msg.setTimeStamp(0.19209067147290637);
    msg.setSource(18446U);
    msg.setSourceEntity(49U);
    msg.setDestination(18666U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("JJZOTQNXLJOWSUKBCRVRFVTYBPSYJMPYHHUDQQARCGGDIGMEOEXOHZVAEGIRWLQWUEHXDGUPSDSRDTFIV");
    msg.plan_size = 4508U;
    msg.change_time = 0.6572539636388501;
    msg.change_sid = 34826U;
    msg.change_sname.assign("OXDDPHOWYIEIRFX");
    const char tmp_msg_0[] = {-47, -31, -46, 99, 3, -14, 62, 51, -73, -106, -82, 95, -19, -36, -91, 117, 12, 48, 108, -18, -74, -65, -55, 65, -103, -21, -13, -100, 58, 33, -66, 101, 105, -28, 113, -98, -45, -51, 24, 30, 108, -53, 67, 119, 8, -88, -41, 120, 66, -49, 104, -116, 56, 60, -68, -9, -86, 114, -23, 52, -65, -15, -88, 25, 62, 119, 117, 0, 54, -30, 2, -68, -104, -118, -14, 110, 122, -22, -101, -30, -9, -71, -10, -124, -74, 47, 100, -27, -43, -106, 27, -98, -5, -15, 51, -74, 39, -4, 96, 50, 44, 25, 41, -83, -12, 37, 98, 33, -23, -65, 32, 87, -102, -42, 113, -117, 32, 9, 90, -79, 102, 96, 92, 107, -54, 117, -64, -126, -1, 114, 125, 73, -38, 110, -71, 93, 8, 1, -96, 59, -16, -68, 37, 105, -56, -114, 60, 13, -8, 95, -5, -45, -23, -92, -63, 20, 126, 48, -48, -45, 75, 32, 124, -112, -48, 28, -12, 105, -72, -93, 8, 103, 40, -116, -68, 7, -128, -47};
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
    msg.setTimeStamp(0.9915994232247619);
    msg.setSource(42070U);
    msg.setSourceEntity(84U);
    msg.setDestination(63712U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("AXIYAFPGRNIPEGGXRFORBKWZTRKODCSMYBGGUCEEDHKIUGNZFKMAUJCSBJKAVSLWGQLLHPAHSTAHCCVVFNCNMRIPCJXFQNIYGZNRM");
    msg.plan_size = 2070U;
    msg.change_time = 0.3748138823705671;
    msg.change_sid = 62080U;
    msg.change_sname.assign("YAQTZJAJSQXUNKKGZLXWPTJYLAFUSQYDRVGIOTRNRSJJDEYFUMVFQFGXJJWIFSABDODFNKPTDVKEZCHAEESACUBOLELMBUWNZUXCKCGDSGNOMIWXXTIGRGHTHUWGBYEOZYRNBYZRILPHFTKNXZGCROALIQDETKIQEUHBUCQNDPYBMVNOIYLPP");
    const char tmp_msg_0[] = {-121, -27, 35, -8, -14, -59, -123, 92, 43, 18, -53, -77, 89, -53, -68, 73, -78, -4, 40, 57, 45, -67, -119, 104, -10, -106, -95, 68, -34, 71, 43, 89, 71, -123, -15, 9, -101, -86, 25, -81, 31, 111, 92, -79, 7, -57, -2, -128, -13, 18, -51, 73, 27, -120, -119, 26, -93, 48, 24, -56, 66, 72, 20, 18, 7, -86, 78, 8, 90, -10};
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
    msg.setTimeStamp(0.34487688410349693);
    msg.setSource(14690U);
    msg.setSourceEntity(69U);
    msg.setDestination(45975U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("BLJNJYKZHNHEUJUGXAIUKOGUEUTZHMHRWPKYYAJVGNBQFEGSPLZVVTOBGYIMVYYWOGUFBGQOKJOPQMRXQROHMCACWFDTDNEVSUONGMMMZXFUZQKLDJSVHJGTAZCTLOWQTZMIMIECIBFVGAXLTWSHKMNPQPXSEIWEWCINAADDKRHLLZQFDXBQXRCUPAFQCYNFJIXBKUDRNLEXFBBHCWPLROICBEZLSJJDWDHKYPIXADKTWSRYTVRNZASYOC");
    msg.plan_size = 24936U;
    msg.change_time = 0.0895701037622062;
    msg.change_sid = 58697U;
    msg.change_sname.assign("PAYPWYVWPWSLZYCWKDZKNZMIIRNIJNJNNXGLIFCVSEXTCXAZMDUKTRAMEGZUHBLUWCFNDQLTKBPPXYYWINEJUVRDWOUVQUTHGVXEGAKJQUBIONCHLHLLQLFRGRHOVFAOAYPRJECDPQTKUGQDEIIAQQCOBMPYHGMKFCWXKQHSTFGHVBGJDUZYVRBDXPINOALUODVERZASWZJHFKJSCETSWEXSFBOBLGFXMOTOSVHBTYMMNBJXKRQSTYFPRISMZ");
    const char tmp_msg_0[] = {-67, -97, 95, 30, -38, -29, -75, 71, -73, -121, 34, -128, -73, -125, 106, 79, 59, 101, 25, -108, 47, -73, -90, -74, 82, 13, -10, 36, -109, -20, 85, -110, -53, 21, 14, 67, -11, 49, -82, 45, -53, 105, 39, 94, -32, -73, 108, -12, -119, -79, 74, 60, 98, -30, 86, -123, -49, 63, -120, -22, 59, 38, -81, 116, -112, 59, -66, 103, -112, 4, -77, -95};
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
    msg.setTimeStamp(0.9635207681747294);
    msg.setSource(60266U);
    msg.setSourceEntity(80U);
    msg.setDestination(15205U);
    msg.setDestinationEntity(177U);
    msg.type = 167U;
    msg.op = 206U;
    msg.request_id = 28835U;
    msg.plan_id.assign("OCTKTOQTEBPBJUWCOKRFYIYLHTQNZDGCQXANIDMIINZUJWEZPZLDMSFQFNUXXMTBQNJNWAJASSWDWEOXJUMKIVGAVIGERVDCKSFLXWHYAZTNUMCFSCBZPYMGKHSFRGPRLTVEBGVHVBTGUPOERQCVTGZVLOCRKRFVISQQMNHZYDQDXDXZOOUQOMWJAEOAHNWBARE");
    msg.flags = 13203U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 48019U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZXKAQAZLUUOGSUANWBVBTZOWNABYJOPUJESJMTWIUADJQRMIJTDWVRWFPXKPODNEXRRFVDQUOAGDNEXOUCMSINLRPCFVTISJIMBUTXSCJAXWIBHWPYWEUXI");

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
    msg.setTimeStamp(0.5011386572836317);
    msg.setSource(28509U);
    msg.setSourceEntity(60U);
    msg.setDestination(62680U);
    msg.setDestinationEntity(212U);
    msg.type = 160U;
    msg.op = 116U;
    msg.request_id = 17848U;
    msg.plan_id.assign("QTFFDPQNIUPCUHCOSQXWBLKXIDUKCARUNWVWMUPPHJWITSZPKZSZZWGAIXGDDLDAGNOOLJACQEMHRICHVWYLJOMQOUOIRRNESNKSPJJJOFTASNHXILDAAMIMHAYEEIEOKMWBGVYKGKBRBKYFTANRWTPZNYTZYFXVOFCVAZEBQTZHGXTFCXTE");
    msg.flags = 63256U;
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 3042174369U;
    tmp_msg_0.id.assign("AMMWZJDCTPROZQSLKVSDFJCQJFFJAREPFVEOTTLHUEVGOBUQLWLBBNJANKYXKIMXAWHRLGUTZMCQCTENXDVJMPFJCIGXOQZKFIYDYIXPWDPDOWWSVCANINBOYLUVXBPNTDIGRZGRLZQERQZUSAYKGREXXETKIOGTCSNOZXUJHFVWACJBZQLSLEPICHWMDEHBBFLTYSRPPMABFOUIMWMTYFCNGAV");
    tmp_msg_0.memento.assign("OAJKTPRVCFCYHFWDTOMVUDDEYUVFFKZPYHNCOJLRWOXIFKJQYPCRCSWRCZHMSDYKRWQKGWIYJNWGLLRSUWGIMFQIQLAIWZLQNABZMXPMVEQXTBBBOBHBEKUXGGSPGBOSCSMQVLCMNLYNZJQWKTKIVHAWBFHYEVAFPFRJPTGOKJZTKHCHFTJQXGSIIVNRXPQUODYSTVDHSXEUTAOYAIMPNXNLABEHZGSGDXUVLNXJUEDCEDRJZTINZLUOUE");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VXKIUWLZDHDVRPMRYVAKKJVLJHLKAFTIJRTWCHBEZKVXXDFEP");

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
    msg.setTimeStamp(0.07156209562119809);
    msg.setSource(11736U);
    msg.setSourceEntity(217U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(96U);
    msg.type = 51U;
    msg.op = 218U;
    msg.request_id = 65157U;
    msg.plan_id.assign("DGVHSDKCODDHMNDESCMZEHIFPWFHBZVQYMXBWIFSMXRSNSUHVXVODOWEZBKHLQJNIPTZWZWINJWAQJRPFVULYLYHQJXYQZNYYWJOLRCRTRDETAVB");
    msg.flags = 38265U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.3812196160295719;
    tmp_msg_0.x = 0.7937944472489112;
    tmp_msg_0.y = 0.03419016320665258;
    tmp_msg_0.z = 0.1554804222072972;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZBFMFSHCNHKSTTUGPHNNQSVCXVEWTLGXYHURKCMGVQZIVMIQLUGTJIBOBMPPUAXCAENFHRNZQRMWKTYVMHMHYFLLIGOYTJBTIGZVJKHAXUSJBLKVIWWQBSEAFFGQWDRAGBXLJOJRPYECIIORAEOTOACIXAYOZRWSUFMOPXLDYQUDYNHVTJIKQEPNLOZAMQRJBVKPCZGAWEWWVFBKNZQSFODURDSNXDUZKCKMCJD");

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
    msg.setTimeStamp(0.3614304279439188);
    msg.setSource(53693U);
    msg.setSourceEntity(164U);
    msg.setDestination(39624U);
    msg.setDestinationEntity(151U);
    msg.state = 105U;
    msg.plan_id.assign("LVSLYNRHNKGQSCGOBOCZFMSLZDZYYKFFCPUUEHPVUAOKGVUYODOAEWXRIJAPQFYWBKPQCNVZDNBREAWITIBNYGCZLRLZHABNCDQUVTNAUMGBWLQOTZKXXJOGEDMIRIIHGYWEPSECTENHYXDPSSVLGTWTRVMOBFKKYJINVFTBZBAEHKCHWZSUMQQGDPAW");
    msg.plan_eta = 1298074643;
    msg.plan_progress = 0.010330762833459128;
    msg.man_id.assign("EDEQDRDCFRMGOYPAHSFEFWPQQJKPJCMTQ");
    msg.man_type = 42846U;
    msg.man_eta = -1884148552;
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
    msg.setTimeStamp(0.7943949750035789);
    msg.setSource(8406U);
    msg.setSourceEntity(200U);
    msg.setDestination(3613U);
    msg.setDestinationEntity(49U);
    msg.state = 101U;
    msg.plan_id.assign("ISYDMITGGBBUHUDVGTFLOUJVLWFCKTNWEGKIHDJRIFRPJWXCRVQABRNOAYR");
    msg.plan_eta = -602699666;
    msg.plan_progress = 0.4345338800698204;
    msg.man_id.assign("CXQQDMGYEGCQVEFIJFSAVKUISZRCOAQYPFKPBCAHXRPYWRNZULCVMOHFJCKZLIYBSGDPKXZSENJFUAPXSXBQDYORTJHVTXJIEPKNOTOJJIHWFEMHNCIHLGIVMXCDTBMGVETPBKQAASNQLOOLLQOXSTJDRNYLQPGTFZNKAXMV");
    msg.man_type = 61437U;
    msg.man_eta = 1332341614;
    msg.last_outcome = 113U;

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
    msg.setTimeStamp(0.8796579166382451);
    msg.setSource(33245U);
    msg.setSourceEntity(123U);
    msg.setDestination(21448U);
    msg.setDestinationEntity(183U);
    msg.state = 111U;
    msg.plan_id.assign("SKYIYERDVVCLXDHUCMPBGHQOSEDQVSWONCIQLECOSPBUFTWKYNQMJHRJYLYWYJLWTOUZKCGBCLWIOXURIKADCJVJJGYNQDIDTMGB");
    msg.plan_eta = 1780727619;
    msg.plan_progress = 0.561702564071795;
    msg.man_id.assign("AQVULLAYJMMPJJQHXATGLEUGTNJWUSZZQPRDOOQTWCNTEDSUNRJDSPKSCIWFNFYJUZBAXBBYCRKRYYPSGSHK");
    msg.man_type = 65295U;
    msg.man_eta = -974616151;
    msg.last_outcome = 104U;

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
    msg.setTimeStamp(0.9934267252075358);
    msg.setSource(42636U);
    msg.setSourceEntity(56U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(44U);
    msg.name.assign("OPEBJQFBUTQOPGFGTKVIUEVQHYLLNTSYILABQIPCIDBVKJXPGODVJUZUGDQUOOVZEFZBWJPLRRBRDGWZASTISUMRJKAXTABHDLX");
    msg.value.assign("BDQOTFPBRJDQLXQRZRFBUWVWEOHDKVMHUVEVMJRUKOHUXVWICIZHPAJTNTGLKTJHGMHWZVY");
    msg.type = 151U;
    msg.access = 39U;

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
    msg.setTimeStamp(0.8500732033254309);
    msg.setSource(14353U);
    msg.setSourceEntity(118U);
    msg.setDestination(64566U);
    msg.setDestinationEntity(193U);
    msg.name.assign("OSLWCGZZMIBEMRSLYHTNOFRNDKKRSMABYGFLEVWJYKJCHNNLOAQLTTNMMGWENGTFHHXDQCFBVMNBXXDIDVULBM");
    msg.value.assign("TZSGYYLJHXREWCLOAZWJIRWYVBWYHVFSDZYSTGTQAGXHEJFQUVIXXGQFZKOQLZDLGZHCNDILFCSDJXYKEBFQCGHVFZPRPIPIRAIFPJJBBYHMCCAQKKAOEVZDRKJHQUIQEMBYFZVT");
    msg.type = 65U;
    msg.access = 100U;

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
    msg.setTimeStamp(0.048062827966379396);
    msg.setSource(51761U);
    msg.setSourceEntity(123U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(148U);
    msg.name.assign("EBMZTMSHWXPBJCQBDAHXZHELTNLQFFQPOWGFYUARGGDSBDBKEMISTNAGEWYTSELGOAYKXYEOQHXCOUZCPPNIOAKFVBDYIJNSJQTSDLWBACIVDCFASKRZKFRENMKNARYZAWCDUFLDVUKKXUUQIVNWVCWQVXJNHIMXHGISVCTTJQRYMWHPPFLNFJVLWGLB");
    msg.value.assign("DWTBIAWQPRPKLTJYQVMNUIXHPVNYQHFPQNMPWILOZEWQKOBVLOMIHMRTBRVMUBMYTUGSQZGKFPJESUSVWZCBILTAQLBFDGMGCDIKYANXOXNHNGAGQSVLWJBMNHZMUEJFAVIKDRVZNFQYWSROUEVPDAXIOLYEKXT");
    msg.type = 233U;
    msg.access = 1U;

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
    msg.setTimeStamp(0.18466726610289408);
    msg.setSource(46802U);
    msg.setSourceEntity(88U);
    msg.setDestination(6873U);
    msg.setDestinationEntity(23U);
    msg.cmd = 54U;
    msg.op = 140U;
    msg.plan_id.assign("VLKSXEGHGJCLWIKNZQIXWUGHTUEIJOACCVUGVBMLXWAKNDOFYEYDMTYFHQMAJRZWBLHLIPELNEEJXMMRIPOFQPFVCTRJSJUHNDCWTHSYBSBRABTTFOQWJRDZEKKIGWVLNIDAXTDFUGZOCYGZDMAVZTBYOYEQWHBQMNYMCHPBORZQPRXQAFYFPXXIAUGONXVGAKKFVPLSKNWNZOJUDDBCCETJUKI");
    msg.params.assign("JVUIXSMLXZFMQBIAOXPAJAHDXVWEBRQWQAUZCCKCQGJFEACLHWVOGQULOMNMVTKJOSKVUGPMEEYNBFWRKPGJTQNLBWNBJMELIXZGCUIXKKMYVDDITNRXI");

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
    msg.setTimeStamp(0.5397583340497305);
    msg.setSource(46987U);
    msg.setSourceEntity(211U);
    msg.setDestination(51010U);
    msg.setDestinationEntity(35U);
    msg.cmd = 216U;
    msg.op = 219U;
    msg.plan_id.assign("GMRDVAHFJSOTPMDAJOYLNUJTADMQQAHUQOWQQDWNLGVZBBNBBZFWZDAMSQHWKBBDFIPIBVHXKEFAIINGSZCYRRVUSFOSLYEVZKRPYWILGYYHYWHYXLISROOPERFVQXJKQDPXEWHLTCWK");
    msg.params.assign("PUFDVNQMDLLCTHVXVJJCMUDKTJXYIIIJPNTCXMMZGGTWVWF");

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
    msg.setTimeStamp(0.5704261657634276);
    msg.setSource(53852U);
    msg.setSourceEntity(4U);
    msg.setDestination(13829U);
    msg.setDestinationEntity(215U);
    msg.cmd = 211U;
    msg.op = 117U;
    msg.plan_id.assign("DJCMBDGWQFTQMNSISMYBEBDHMKGDTXVLYERDWJECIGUNPQIXCVZFKOTVPDRHFTQSPZNLWNAXXQUJRMCPURQWZWNSKMLABXNIUJ");
    msg.params.assign("VEKWFJJDTYQBABFOLXANZIUZNUGIDJRGMYUVGKSTZNQRHVNGNDFVSPWULJASQXRYCQNSMHWRAKCEWZBTGUOBEFGNZFZL");

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
    msg.setTimeStamp(0.24303779672280246);
    msg.setSource(5014U);
    msg.setSourceEntity(30U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("FHZYFYKZKXRFDFDLNWPDIARCWNESWPHVTSRPKLETXGOWDOKOFCJFKNBYTQQGHPYQHATJEJVDEUIRSQQKZGXBLGKBQDLNGEMAJTCLBGOOXVSKNXCQIDIMUOADQRTEGFOBWJCBDSUQJEDAULJEIEOSKHPAUZCSYIYMMPJQARXUHMNPPNUWFMSRVZXHYVMVULI");
    msg.op = 45U;
    msg.lat = 0.019925096803457776;
    msg.lon = 0.24269135131928643;
    msg.height = 0.3019566065531901;
    msg.x = 0.15321899559175411;
    msg.y = 0.9897882581315337;
    msg.z = 0.09209943304347645;
    msg.phi = 0.08779343945323703;
    msg.theta = 0.3288783949066614;
    msg.psi = 0.8287065953678953;
    msg.vx = 0.49216282611496487;
    msg.vy = 0.6710495676279682;
    msg.vz = 0.4380312750381251;
    msg.p = 0.22355003095849701;
    msg.q = 0.41415463849555245;
    msg.r = 0.8824303630252692;
    msg.svx = 0.27914384785428004;
    msg.svy = 0.40927173124436234;
    msg.svz = 0.14699624801366618;

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
    msg.setTimeStamp(0.531290714863246);
    msg.setSource(12859U);
    msg.setSourceEntity(232U);
    msg.setDestination(7116U);
    msg.setDestinationEntity(227U);
    msg.group_name.assign("VSFNILZUWWSYXKHBHCZBBLJOPNVFSJUEYIFJBRUNWUMPDPTODLANHTBNTMMQAYQOFRFOSSMIKNRCUKSTUVCVGDIZUXANCXBJJYTBZDWCCDLKHFPGHEHRSLHGPHVQEXWYSGRDOQGCFASAXMFNTWCOGXJUFCBKEAWIDTMYPWVIQZYLUEGRYDEQVNVOQKNBIKFBYWETHZQLMAKCIMJGREOHKAGIXRIVQZQOXZZOPPL");
    msg.op = 26U;
    msg.lat = 0.5340605866578249;
    msg.lon = 0.8992083239250149;
    msg.height = 0.020457292605253086;
    msg.x = 0.5489353067904568;
    msg.y = 0.4546759231260493;
    msg.z = 0.22242743909698603;
    msg.phi = 0.5702897671702267;
    msg.theta = 0.8503377257634969;
    msg.psi = 0.6496578464154964;
    msg.vx = 0.8000983692897456;
    msg.vy = 0.07067517729061978;
    msg.vz = 0.8126417137747174;
    msg.p = 0.3833298605316565;
    msg.q = 0.6678990984354624;
    msg.r = 0.8591984020533424;
    msg.svx = 0.13557016412186806;
    msg.svy = 0.3983236805017195;
    msg.svz = 0.3767363975664393;

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
    msg.setTimeStamp(0.8737209732783513);
    msg.setSource(16399U);
    msg.setSourceEntity(232U);
    msg.setDestination(36148U);
    msg.setDestinationEntity(136U);
    msg.group_name.assign("ZOULCCWGEWWQMWOSURWGOGLTKZDGBKFOXJLJUXOKYRMWXGZXDCRMTVQQERAFTXZIRTCXDYKWVAJZNHLAIEIFJMIDELPXGBQDBVNZQUUVNNLIOREQGAAEOHKVPRYHUCPTFAGKPBFESQYIBIMRDTPHTYBTUNIBRUDMEAZVKZQTVBJSMJFCNSCPETFQ");
    msg.op = 31U;
    msg.lat = 0.44856972641737736;
    msg.lon = 0.23008825782593834;
    msg.height = 0.22249542862405025;
    msg.x = 0.04468782077737121;
    msg.y = 0.40759358499758835;
    msg.z = 0.5949248004938895;
    msg.phi = 0.19467274962267078;
    msg.theta = 0.42470270687453493;
    msg.psi = 0.4623540980085733;
    msg.vx = 0.241114824437899;
    msg.vy = 0.2995701292217764;
    msg.vz = 0.881523348807468;
    msg.p = 0.5374748385569544;
    msg.q = 0.7778709625616669;
    msg.r = 0.34916903055562853;
    msg.svx = 0.35484611669012533;
    msg.svy = 0.156866390557299;
    msg.svz = 0.9975189315820511;

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
    msg.setTimeStamp(0.28606752173253325);
    msg.setSource(47794U);
    msg.setSourceEntity(111U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("VAYLMSLUAHTVPUJTTONTCSSOAZJFGXJVYSNMFLQAEYPSRIFZQKTMREIGGBFKFIENJPUZUPBPCZOUXDLOHCYJWWXNNIFCQZUHBDXMNBTVGODHAKDJFOAKMPDSILDGIWVNNKIWEZSXYYGMEJCAYLIECXKNCYTRKQAREQKJPCZLVGTBXIGOIUGWXHZFTRBBDRA");
    msg.type = 149U;
    msg.properties = 88U;
    msg.durations.assign("FBKDWLAPXXHRJBXQVPNKLIZFDQLJSBOKTZPVCWOMOYKNIXOPIAXDMKTNUSWJQIRCMFAYYENPJBRMRNGCUFYWDTNAUWGALWOYVDFMOCSUOTZCHLJMSGSPHZVNUZBRRBCBKSUTEVGOVTTGEIRDSGAEIWEJTJYVPBCMQDEVXUQSMJHZFOJLMFULVKCILMNCZKFHCHEGYARUHNOSDKDGKQIQRAAIEFBYQNHBSPWIQFGXEXZQXPEWLTUWARZDYPZ");
    msg.distances.assign("OYJKSMHHSGOMKTHTEIYHNIKASKOAADMTWLDTUCZQJFFVLCOWAFVZRWGUKQDKVRUQEOZJJWESEECGEKXXANYOIDASIUBGJPWMTPAUGCCSSXGRMCQFRMUCUMXJNUPPDVALQZZDFYIBWWTZJZDVNIJTRNDFNPSHEOWLUTGORVAZPNBHOHLQSBALKPRCRYGQBIQNDVBYXY");
    msg.actions.assign("YQSFFYFPEZSENJPRUFYMUJXBZDOIATTDKSAGFKEQISBCZPBRROUXMVNKZEYPTVOCONJMIMQXOTMFASKNWZNAXBHTWLLBKILXUPYUIMQJYDLGWDGWAZHN");
    msg.fuel.assign("ELCCLAUPOWTPPJRDWXNJIQNVYIBFTGPZSCQFAHBDNWMYKNFIHOVELWUUNYRRDZXDRBVKNQIQCQNBAJGTMOBGWMXQKMVZSXCJBDRAPCYDWOLOZHUOGVBEPBBAFZYYLDXEHHASUMEJULGAXRHDKJKEXZSIKGURHCVAL");

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
    msg.setTimeStamp(0.8764191083651919);
    msg.setSource(24834U);
    msg.setSourceEntity(222U);
    msg.setDestination(17494U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("PJDWDQEGGDYWHIGEAMSRVQHTKZTFEVESRESPJQRZPZNZNCVXCT");
    msg.type = 157U;
    msg.properties = 250U;
    msg.durations.assign("MZENCHYPLVWWAJCIMCZMQYRMZKZTRJABHHLXYUHPAVFFSDNXHKDRWRXYBDIEDYLXAUQGPRPEPIPSQMDFQ");
    msg.distances.assign("UWATETAICXPPLIVFQGWWQEMDRIFLUMLBFYSNAGJTDJPEFCUISFPQLXUQYHJBMRXUVSPVCPXVRVMFUDLWWMJUJLOYVGQTOMMCRHOZRJZNZWNFEHSKRQPKYZPDGDMZPAGIJFBFIHXGDC");
    msg.actions.assign("AXWIUUKKNYRURWCSJCANEZUSDEYEMIGRFLYBITYXNMUHSPZLVBQKCHJMATFJLKUWTVXHVGECZMYEDKLGZSIQXBFKQJCYLDFBQTRHJPYLDOMEVXGZNYUHVOCRXODFJWKXRHSLQSQBDOWQTROLJNDOHHGKFAIQEADTCPMPINVIJKOIQNFEPVXTWBNZVSGCBSNJF");
    msg.fuel.assign("VVGDVKFQCTGTCIKWHDTXXCAPNIINUTMUWNECODXUSLNXTKMPBOQGAPZSYVLZILRJKJABGUXHJOQFKNPPJMJVSZRDVLGYDMTETAAEMSBWJLJXYKBNQCOOQDRVGLWRZSFFBYHFFJXUXHJKUWFSESKYMAEEWOGQGIWUIUHOLAOSAHFIESXRLZDRHPBKFCBMBIZAVFRJBUSCQECIMQUDLPDZRHCWBVWNQPRYHM");

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
    msg.setTimeStamp(0.10042014359426055);
    msg.setSource(27925U);
    msg.setSourceEntity(252U);
    msg.setDestination(2382U);
    msg.setDestinationEntity(170U);
    msg.plan_id.assign("BKDKXHDHUWRLZIWPBBBSAPRDILYQQXIDFCICOYNTDZNFCFWMYMACIJHCCDTUHELIGJUPDUKMPZRWJIZBCKOKOQGWEEONVFDPRLMMLZZKWSSOTXQKAQNVNTHFAMHZARPZSQBAQMTQYIOYPVQVNBNXRJFBOXWKJXURDMNVUYWLZRECSLJHGVYIMEIXJGBSCEPJGBZGG");
    msg.type = 21U;
    msg.properties = 207U;
    msg.durations.assign("JKPABOXFXZGUTHYTBOSALINVMGOWHJHLSSFEFODEZUIWHSLVMHCENDFCQBZJYBRUSGDRCVNHBYDFQ");
    msg.distances.assign("GRMPBCKHTFPRFIYQXNMHLMNTTWBOERUQXQSISIXTKKKAUGEFHRQWKEKKIMPTTZSLMCDDIPUABAGNDHJBCCJWDHEGPJNHLYUGJSQRYZFQVWFSHVBJVLNI");
    msg.actions.assign("THKWPKGLUFJESNZLUNDWOXGRJCLHPQMSWIKAADDXXOPVBSHGYCIAUHMOBCFYLGWMTVPEEYXDXNMFEYIAFQCDQXEAWDKRVNLGZZVOCAYWYVJESKSVYPBSRCNZJGOVIXCJWSQOBGAJ");
    msg.fuel.assign("VKTMVGTZFUGWSAFPNUZEKKZLSKNLEGPJWGNYRDI");

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
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.5632358139150094);
    msg.setSource(11695U);
    msg.setSourceEntity(41U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(81U);
    msg.id.assign("NECOUAUOHXZNUMLSPBQROOYZHYLT");
    msg.plan_id.assign("NIEOVPTRORNQLHTDTZWJWQCFMHGESZCYWGYPMFXKQNTFVSIC");
    msg.maneuver_id.assign("EUKBTDZKQIAXDHECYYCTEBFHOKKESFTRQEXLCSIHGANWZWBSNZCZLCANNWJJVQJRHOTFWIKUXDPCTIVWAXRPKFCAAZBSHDQQULVJBOWMMHESGQUKTCIJC");
    msg.memento.assign("CZZPRLPMQNYDBVLYTGDXXIQVKOOIUPHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.835872635133267);
    msg.setSource(47028U);
    msg.setSourceEntity(210U);
    msg.setDestination(31790U);
    msg.setDestinationEntity(202U);
    msg.id.assign("QMNKQVAFCWVKEVJLNLKBNGTUNCSZRWYENJBOSLYPBUZYIPDPPGFKORSJCNXXESDFVYHWLMPHQKNAOYKXCXFBZCPJMRGAEIAUWAIILODWISGDTCDBQFZIVVYFNOXBEQFTREXUUGWOTSLHZUSASCZDWSHTQFIUDOVHMGOATRUYEQVXYRTWUHYVMJTPCXGGEKELXAHNWL");
    msg.plan_id.assign("GLLLHTZYOEZDBOVXTESIJQDGJADOGUAVIHNEMCFYSCUXIXBPMCKMKNFANJFQDUAXRVRLBXZNGYLLDEQUMMFDTKDKAATUFVYPHNAVYRTJKQWITJXVBCLB");
    msg.maneuver_id.assign("OMVSGKDDUNUOQNQMELFRLFKKLBTZJZRUHTZRRDDVIIYRFMPWPGSEYJPQKXXCCSYNCBGXBZYTQDANOFSNRTXAJQYCFYHWBAMKISWCQMPUHSTYKISKEXHNEMGMZGOPIHCTBOECTKYUWXUQKLQGEWDJFGNQLQIPWOICGVAPXFOVFMAEGUAXBB");
    msg.memento.assign("TLSVGFQPZJWOSUGDPVOHGZUWOOTCTUHIKAMUADHQTQNLEFCTEIBHPCNRENWJZFSVBPZOBLXLZUEFJRHWKQNNUMUMAFXRKNCBONXVWYDRRYKBIDAPLWXFIHCNGLQQCLIERQGWSCIBJMDDJADRKFVZKZDZVEWVIDAFKMIZKWYABJJSHSAIPXMRIXOHQJTJYKQZTYXSNXYWOLOHPUGLCNSYFXRRPEUMDVYBVSGFAQPHXKMTUCOEPJMAB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanMemento msg;
    msg.setTimeStamp(0.2795009590982438);
    msg.setSource(14309U);
    msg.setSourceEntity(49U);
    msg.setDestination(16740U);
    msg.setDestinationEntity(112U);
    msg.id.assign("LLHCZWZAIDAIMRJMGAXOYKOFEEOJJCUGYYXMTETHVTQBLLWLLBWLHBIQFIOAVOXKRILAOWOSAFWHABSMTZLRKBNSRGVAPKZVESCQXEYUXJH");
    msg.plan_id.assign("QMHAYOXFSPGKKEIAFNZHEZWRSUGXXZGYLPEONEVDVJMOJPYLYPBCXODRRKAZRWSCYPSTOEAWBSLKACURAHMCHHLOHLGDSJWGJFKFVWDQCBBHIQDLMPZSYGHIGVVCNRAOOANZUFBIFVYDUEEMWTWUECZXCRLUIIXQQJJKAXNXKJPQBDPTMWBVTUGZQLVINUIMJFFJHNRWDFQSFKU");
    msg.maneuver_id.assign("GWZSMUZFYBTOYVTDEKIJHMTLFJOBQGBJTGQBKNAUNKXLRZAZIXXJNFMWRVQGLLRYAUGTSSGJHHXADKEITQQHEPMLWZIJMVSHXKXOVFSHEEQTRWUQKYVEBXUJCRPMPUNOZUFBVHZHPPRHZSFDRFCMMENUYPKSBWGLWDOTGBW");
    msg.memento.assign("PTDCKAMOLKJFVXSYLGHBOENJVBUCKGSPAQWLGXISRPWAUZOABMKEGDVKVVDMBXHHMNTHUTSCYUJHOPCGOCHUNFZQIEWPROVBTICDSDUAYRDHIRKPYSAZZPSOPXVBAOLMNQTJIYGEXLZTTLEYIHILYQZCNRNCCWZWBQMTYJGMMHWKAFQTJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanMemento #2", msg == *msg_d);
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
    msg.setTimeStamp(0.19320431184528952);
    msg.setSource(17431U);
    msg.setSourceEntity(253U);
    msg.setDestination(57361U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.2555230148662351;
    msg.lon = 0.20362629226046736;
    msg.depth = 0.0417887413789757;
    msg.roll = 0.8161323335228093;
    msg.pitch = 0.45327734854523904;
    msg.yaw = 0.17856865177492787;
    msg.rcp_time = 0.46383309125756333;
    msg.sid.assign("JGYBYSWSXURWORYVMTTAANOPWKYSQEZVGCBXMFUNGEISJFYWQCQGDEJEFZWRQQSONGKVNFLAHIKCNTBBLMDJSKYXBGXWOSATESFRRTGDJERWYVTOPXFSKZUYXXHDXIDCCVHRXWHYZTWHAJFMJCGPQCVZYKZELOUZFMVAPCNTMLUPLIQABOKLQFIJMLALMLV");
    msg.s_type = 213U;

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
    msg.setTimeStamp(0.8644329152450348);
    msg.setSource(1749U);
    msg.setSourceEntity(26U);
    msg.setDestination(5793U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.3056408449399818;
    msg.lon = 0.4604131226045194;
    msg.depth = 0.7484395978274864;
    msg.roll = 0.039566969122183826;
    msg.pitch = 0.1503751154742351;
    msg.yaw = 0.7113468557885376;
    msg.rcp_time = 0.2841244428786388;
    msg.sid.assign("RHLZGJRCSRUDWNBDNPNRDMXYPFGQVUIJTKPVQIWZJMALBWGAROESJTHVUGCGOSYEUUHHYWZINVGIEBCYPDTIUOMDKV");
    msg.s_type = 119U;

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
    msg.setTimeStamp(0.3276158247971178);
    msg.setSource(6178U);
    msg.setSourceEntity(130U);
    msg.setDestination(27831U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.05943276151679;
    msg.lon = 0.29117660179999494;
    msg.depth = 0.9462315153793978;
    msg.roll = 0.3945251695343851;
    msg.pitch = 0.8878140059313814;
    msg.yaw = 0.5155938803689556;
    msg.rcp_time = 0.5737363623841608;
    msg.sid.assign("EIXRAIVTUZRXVJCOSWXFWMGFYENSNXJLAKHBYCFNJVFPKVPKOFJAMSKBLDDGAGPCRCVJUCLQRCWCLPAQMEVSZWYSQBRPUOUEPXRKHGWTVDRPKQHXQDJMTYNISARYYPCKUXBKCOUAMFIRRTWUPHWIYKDON");
    msg.s_type = 131U;

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
    msg.setTimeStamp(0.032617598396558534);
    msg.setSource(48397U);
    msg.setSourceEntity(83U);
    msg.setDestination(14099U);
    msg.setDestinationEntity(96U);
    msg.id.assign("FSGKVRTSKZYOCYXNFBEIHUFDKFLPYVLJIPMELQOQRHXCLHXIEGBTHSCJHZUSWMQFEBZRJMEGAORMDNVQHVJVPJYRUJTINRPMFCMHRDCGPMNPGASDRGUOHFRYQOZTSWSCBZIBTWWVZLXZBXNANKSDUKOPWTLQICINAGGDOPKUMZDBTGKQCNXNZLYMGVIUMVFLAECLEJUYIKJTFFKCAOOOHAERBUWQQUYVWXEJALZXAJPWXBKAQT");
    msg.sensor_class.assign("JIWKDAXEOBOTSKHGZOBJTMBVUPWRCQUAHPFLSUETOIBNRTLYNWTYKMJJXJUZNQYAXUWJCGOKRMNSNFHMDSTXAMKTWVEGPPSGSLYVPOZIVBQDQRWCVONFAWZHKLLMBEYXVEHADHSTYRWLRRHQGKHZXSXRRGDLNGRWUYBQPDZNIPCMJZLUBVHUQAEDTVXPLIFMAOEYHXFCIIKDICKEZJJS");
    msg.lat = 0.40016825921493837;
    msg.lon = 0.9087414656540156;
    msg.alt = 0.09857675410191746;
    msg.heading = 0.5370463598418159;
    msg.data.assign("KFUCPETBSDVHVXJCSANIAMLVHQMC");

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
    msg.setTimeStamp(0.06263687072661239);
    msg.setSource(6385U);
    msg.setSourceEntity(98U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(7U);
    msg.id.assign("DYTLXILUEIQJTNJSNWYVUZQCDBDTKUAVRJWAVHBGNUOOSLGURBVB");
    msg.sensor_class.assign("KGNCVIYLDWGRXSX");
    msg.lat = 0.5787166123569542;
    msg.lon = 0.3470409516332976;
    msg.alt = 0.5199799523191636;
    msg.heading = 0.15852790543174744;
    msg.data.assign("DOYCYCQTXBXNJOKZIISTGILHGYWRWLEACHAFZPITOWHOVWROUXKSOENWUMPLWVLCZZUCETRHNEUXABNUXNREYSFAAMZXMTYJBFNKFTFGSHBKDJSZKMJPTRNCBLDPRQWGKLMQVMFVAQUVAXWPPBRKYGIWOEIVJDEMJDMSP");

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
    msg.setTimeStamp(0.6725043261011817);
    msg.setSource(61080U);
    msg.setSourceEntity(161U);
    msg.setDestination(38071U);
    msg.setDestinationEntity(73U);
    msg.id.assign("ZXPFYJNPKPPYXBHIISPNOQQWSYHSWFAKSQEQHWJUDDLICPMPVIGJWAADLKZHERZPEKBBLQUFGTOFPUIMCBVDHTEXKEYXBJFDKAALFRXJFPUCUTUKZSRQVIGBIONCGOBHVYJRNZXXNVAZFMSMHXONZLGECHVXDGELNMQJKGMOUMUZTANQDCRNYOQGSTSTGDOARWYVISWTOQMIYBDMABENJETLVEYUT");
    msg.sensor_class.assign("FXRLPSONHLPSVSIGNOMRCYPTJOEFSEVFDUWQQT");
    msg.lat = 0.15328698253785378;
    msg.lon = 0.8688414430573959;
    msg.alt = 0.6834340782190139;
    msg.heading = 0.606293336757168;
    msg.data.assign("TMYTHQDAGQSUIKXOKFEVCLOVKMLNAFSLYJYIPVQAQEXMCJORCHASMXFYWTDGVVPJJMTPUGDXHZZKRGGUWYJTJUYIHKPLLLXSPZXNKJQACFUIKDSBNZQOMMIBGXPTYIWCUCNNRMNMREPMFZOBBTLUIYNRLJAFSCHGRFDWWWBFUSGASQWO");

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
    msg.setTimeStamp(0.2309921040884625);
    msg.setSource(31475U);
    msg.setSourceEntity(15U);
    msg.setDestination(41119U);
    msg.setDestinationEntity(29U);
    msg.id.assign("TDYEJZUHOIUACGMIQTMFSKRTCOWEFUHTUDPRWOYPPLNOQJSSXPANUQWWBBCWHSDGQOEXTMBVASXNBEMXAYSZQRRKRPVNVIFAJFONQFTJCECUMYAHRRZJDDIEJHHCXSFYGVOBYKZNJDMJZKJNTGMLHFIHOKUQINVYWKSILFXLDPZTFBQVCGZYBGEWZXAACLXDVOCFQSRX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WAMFUKAAQPZZUVSRY");
    tmp_msg_0.feature_type = 53U;
    tmp_msg_0.rgb_red = 131U;
    tmp_msg_0.rgb_green = 72U;
    tmp_msg_0.rgb_blue = 114U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6046487237989747;
    tmp_tmp_msg_0_0.lon = 0.07076154840673488;
    tmp_tmp_msg_0_0.alt = 0.1747489876369217;
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
    msg.setTimeStamp(0.16710623694205318);
    msg.setSource(26081U);
    msg.setSourceEntity(53U);
    msg.setDestination(5777U);
    msg.setDestinationEntity(176U);
    msg.id.assign("UTKFRSGXJMPQBUSAWPORZHCWZAFMPHKYYJZIXCGQLMSEKAHPXIIRVDGWDHFLRWOISIFLDAYOZYMDNQXAZAZBYTCJQZHOTEEXBPEEDUJNXYIUJRCTQDUPOLCSNKVTUFFFNJVQCRVXWLSVQMQRGKRSRXGHOFIUOTKXCVOWYHKLBLFIGPNTOVSKEDPDYIUXWALGBCMMVCWHFEGEMGZJAGYAKYBITSNPMQZKENMVBPJ");

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
    msg.setTimeStamp(0.29193472419491384);
    msg.setSource(54270U);
    msg.setSourceEntity(48U);
    msg.setDestination(17047U);
    msg.setDestinationEntity(96U);
    msg.id.assign("ZPXUZYBTFSMBERPWJAQQCGTTEPXBKWLATMOTWEQLACJKICWIIKFLXEANUCKPYMDPPYHHANKXLSCYYOEVIXBLJMYTYNUPKDMSLIAMHEIGJFEFGRIYDKZTQXOHZSLOAVEBFFMWRJTRQNVHSCZZWVVYQHG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BKFJCGEWXYNAYFEQZRZDOMMOLUZHNCZWDNKAISYAEZZFYTITEDGWIRTHKSXVEGPFTQMQVSDVSEBLPFVNFHGLGBYYIKOKKPEZSVGVWMPIXSZHPJPQRYOCCXCBBBHEQJWIKWSRWNTWUUBOFMGPKUZOBAACSLSJTJOECREJMHDPXIFQMLAHBDJXMLYDKCNQQMGWDVVHHIXGOGOURRUYHXNDQTBVJJTAFNSCUMNALJZXADUXA");
    tmp_msg_0.feature_type = 253U;
    tmp_msg_0.rgb_red = 70U;
    tmp_msg_0.rgb_green = 236U;
    tmp_msg_0.rgb_blue = 116U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.1624047820347153;
    tmp_tmp_msg_0_0.lon = 0.9889900718771284;
    tmp_tmp_msg_0_0.alt = 0.7993537833692232;
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
    msg.setTimeStamp(0.46097618705010424);
    msg.setSource(3193U);
    msg.setSourceEntity(62U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(216U);
    msg.id.assign("LRUOMKYJGXEYIDELOANQWINUOFCCZGXFZSGEKLLGWO");
    msg.feature_type = 65U;
    msg.rgb_red = 32U;
    msg.rgb_green = 16U;
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
    msg.setTimeStamp(0.998701778264563);
    msg.setSource(35387U);
    msg.setSourceEntity(129U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(159U);
    msg.id.assign("BQKFSYIAMOGVTHKLEDSLICLUCCPJPBDHODSXPIPVKMQRIRPCDLIARFDBDEWXJUEMHGKSMGPWAOUFXYBTCVGMFSJVJTFPMQLCIBXZEEVZZVTENZABLRQRWFSROSZMVYIOZERQVNMNVCYUNNHONCSGFBHRGAZREGHBKZQFWFAMTDNWHOAWPAEWTRQDACKYTGNGISYUUUBLXWKYCXQOBNPFPXHVMZJUWGKDYYOOSLDXZHNTLJEHYLKUIUXQ");
    msg.feature_type = 122U;
    msg.rgb_red = 227U;
    msg.rgb_green = 175U;
    msg.rgb_blue = 61U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.6486549169751459;
    tmp_msg_0.lon = 0.39495170982482386;
    tmp_msg_0.alt = 0.7459182037830867;
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
    msg.setTimeStamp(0.8541242742414921);
    msg.setSource(34409U);
    msg.setSourceEntity(163U);
    msg.setDestination(26719U);
    msg.setDestinationEntity(96U);
    msg.id.assign("NUHFNCUCHCRAWVUVGCJWQINXSYTJFKXOWSGYBAMXUGEXMOIVUKPSADAULLXFBSNVNDJR");
    msg.feature_type = 88U;
    msg.rgb_red = 37U;
    msg.rgb_green = 98U;
    msg.rgb_blue = 122U;

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
    msg.setTimeStamp(0.7556638854311377);
    msg.setSource(4384U);
    msg.setSourceEntity(192U);
    msg.setDestination(20392U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.4853167047000567;
    msg.lon = 0.6268515211667604;
    msg.alt = 0.6501319936984982;

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
    msg.setTimeStamp(0.28930779322174516);
    msg.setSource(6190U);
    msg.setSourceEntity(21U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.8224796774843222;
    msg.lon = 0.801651590056439;
    msg.alt = 0.5608701720113841;

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
    msg.setTimeStamp(0.8659397079536636);
    msg.setSource(34366U);
    msg.setSourceEntity(87U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.040956934506714227;
    msg.lon = 0.7186389878336501;
    msg.alt = 0.5052540902528111;

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
    msg.setTimeStamp(0.7675039009177259);
    msg.setSource(2560U);
    msg.setSourceEntity(99U);
    msg.setDestination(41664U);
    msg.setDestinationEntity(25U);
    msg.type = 66U;
    msg.id.assign("BAIHQTKGSMJGZSGDJAFGZSYSFISQMVKLUCZXEXKJZXTZGRJOHYKDITOGSXHSTFXUAPOHUABGTWNCCINQYIQRQEUCXHIRVKDIMZCWKPJNDVWZCPLMTEDOLVWLAAGDHEXUYSVJKENMGWQBDRKPDYAJTEHOMFVWVUXRZBBCQYNFUIXFVAMRTPHYGBHIQQLCSJVFNRCNPZSLBLPNRRLWUOEOOWENRXTBNFDTPMYLKAIYYAULOMQJCHEEFMBO");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 163U;
    tmp_msg_0.htime = 0.784611970141987;
    tmp_msg_0.context.assign("GTMMEKFBWFAIVJFURIHLMSBWNPQQYFTZSJJHROXJHLVINVXKORHSAGPCXGSMYEQNPEYHTAAEECNXEUKYXMOKRDAKYGKIZNOUWGWRCTXOTZBPRLNPUUQHNRURGSFECWRJZFJTMNOFEDDPCPABWWENXZHHSZIPJOFZTZ");
    tmp_msg_0.text.assign("SVSXOHNUSSHVSTBIROAHFZRRNXFMSJECIOUNSVJFAWPXJCDNPZXNIAKBOJZTYQNWBUXTMMVHSJVIHCGCLRHZWGUXBMCPKWFMBAQRYMKJLQQFHMGXRLUUKTUVNGFZTIDDHVLEVVUOYYNDWZCPZGPXLEDCKKYGMZYFVBETISTNAFILZYEWRPBEXTLHJIGORQTEAYGSWLDJPYOIQWKGAEKAOQKQWDPDEMTBGYKPCAJALRB");
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
    msg.setTimeStamp(0.5578139487003022);
    msg.setSource(47645U);
    msg.setSourceEntity(176U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(147U);
    msg.type = 246U;
    msg.id.assign("IXAPROMJXLSYIQXHYOWAHYBARFCEZVRKYGZBVJPODBSYLUMYYCUAVUMPISDZHMQOSWJXWVMTJZQVDUK");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.plan_ref = 781581092U;
    tmp_msg_0.id.assign("MHBZLRCFHRBMFQUFXCFXKRVMICWQKVKDUYCPQNELHUISJUJSMCJWLDYWRLOTDYGCUJSSOXQDFMYEWGKHKGYNDCNXTTZTNJKJDMBIGMSFQDPHHQGUANZEHUIIOLWAUAIYEMYIEGUCWRCENXNHAGTIDBTYQBOJMAKPLDYAECURSEVQVGPAGTXFPZPNOJJQVFGREOZBLZRVYLBHKAJZROZOOKDVIPFVZSWSPWQPBTXSBT");
    tmp_msg_0.memento.assign("NKOEDULHPHVOXOYXWIKXPOTDFCEYLHZJLDSHQKQTWVUNTLGWSCQKLGQUHQWMIFTAWSCRBTENNEBYWEFBJYVCZOYXDPRKZXFMGDOTFUGIALPINCEYVJNGIIRVBFXZAQDTPGEPAKGQXLIFRJIYZBNWRMSOCZBUO");
    tmp_msg_0.lat = 0.5399206060757391;
    tmp_msg_0.lon = 0.05886848674961076;
    tmp_msg_0.speed = 0.74463080656303;
    tmp_msg_0.speed_units = 58U;
    tmp_msg_0.duration = 24014U;
    tmp_msg_0.sys_a = 64495U;
    tmp_msg_0.sys_b = 22480U;
    tmp_msg_0.move_threshold = 0.750995405967989;
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
    msg.setTimeStamp(0.19095432240793542);
    msg.setSource(27472U);
    msg.setSourceEntity(212U);
    msg.setDestination(553U);
    msg.setDestinationEntity(131U);
    msg.type = 196U;
    msg.id.assign("UXCSLGQTQLCNNRHQRWMYDZNFKAKYJGOYPVFUXFSJTSFOWZCDHQGGSLXLOCSPFVSTPDVMCUMCZAMUBFXROKCKAYBPJHFELPDAWTVIYPZAKNTJUHGVSBUZMNJRMWRMWZLIYNPBBTYLPFJYMBKXIXKQRWVQUSLADP");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 32188U;
    tmp_msg_0.control_ent = 56U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 225U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.28990026626399357;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 180U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.5985061016007137;
    tmp_tmp_tmp_msg_0_0_1.z_units = 200U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.36228426447359785;
    tmp_tmp_msg_0_0.lon = 0.5205169497301755;
    tmp_tmp_msg_0_0.radius = 0.8746156460271498;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 143U;
    tmp_msg_0.proximity = 189U;
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
    msg.setTimeStamp(0.34701683324722665);
    msg.setSource(37036U);
    msg.setSourceEntity(153U);
    msg.setDestination(58878U);
    msg.setDestinationEntity(102U);
    msg.localname.assign("IJZCYZFEORHVUFOZBVDLYPMAOZQMEKBALZPKTQPCPQDWNWDXBXEBTJMRQNSLUKPJRAONLTXWJUNUAJUIRTECLNNKPLMJVXHFKRKUXIKVMGONANUYADTLOPBVXTIHHBROOGDYBDXYMPSCGVQCEDGBHWJEWGCQWHPEANCWXUAWL");

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
    msg.setTimeStamp(0.9734246615663933);
    msg.setSource(22800U);
    msg.setSourceEntity(225U);
    msg.setDestination(27180U);
    msg.setDestinationEntity(144U);
    msg.localname.assign("IOYQPKMHNXFDHKYKCZCJBSOQDLLRQITVBRJQSUKJIXWVOUAEGOENUVYYHTHKKCTRPWFJAGWVUHOTTSHDRDFFTPXCHDQRJYBFMGECPWDZKTGXHDUIWJETJUD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("HMSQGGCQDOSAJEQLE");
    tmp_msg_0.sys_type = 207U;
    tmp_msg_0.owner = 48319U;
    tmp_msg_0.lat = 0.9437759061059635;
    tmp_msg_0.lon = 0.6615043962573448;
    tmp_msg_0.height = 0.9745406470135208;
    tmp_msg_0.services.assign("VSREXBWRJDYDBAAIBZSKLPPUTOKUFVEYFEFOIWNGFMZQHLVGPQKPYZATBXRZEWFUXNSBVSWEQKXJJSWTRJMTAITQYLQOHNMBJGEZLZNUDHIOXDJYRDRTTFUCAAXFPNYPFQIIQZSJZMGTCBIWGEAMOHGNZMDOHSMHYFSNDWLHEWQHUQHRUKGDEBUOMWXPKKDFAMUGKLOCLRMHJCRCLUYNCXOKPGIALVJ");
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
    msg.setTimeStamp(0.08608708364230522);
    msg.setSource(21230U);
    msg.setSourceEntity(228U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(163U);
    msg.localname.assign("AXURTXYUWLDKYHSHYRMANZSCNLIJTVRZLJCNCZKGP");

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
    msg.setTimeStamp(0.11690832310825694);
    msg.setSource(25318U);
    msg.setSourceEntity(47U);
    msg.setDestination(56374U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("AHRBEFVHRUEUGFLODPOZNAOYJLKWWWFZDPUWXTRUZHVYKQNYIRBUZCIJBZFLHXKXJGQYPMGSFMAECXMQFWDHXNLSRVTYMVOSYSFHOPDTWCXMGTWYY");
    msg.predicate.assign("AMMMIKEWRDVDVLXLZJVFGLTBTHRZLYAUNSQHNUEAWYVGXRUSGLGJQWQTFFSEHBJHICJNPBZVUBGNHGDWHPGVBUQOKJKWIQKHRYIMFCMZUXPMBPAFWKGAOYWOQLPOWTWNSYSMRDVXSZLCXBCHZAJDXEKCNOPDUVEOSYXIPMSGNUECSFF");
    msg.attributes.assign("RPSLEPGFKTOSVNPEXHCJIDCLXUZQARQMELKDZMOFRCDIAEOZBWJBMLCJCUTTWPNMNCMBHRFFCIGWZSNRYIOUMZYZOFEUJBQQUGRTSVYANDJGHJYIHOEAGGIAFPPNEGKHVWQMRDHDNYUXEHKRNXFCGVNATKJUWCJCZXKZWVAIHMYFOOYPVLXULDL");

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
    msg.setTimeStamp(0.9652617450426365);
    msg.setSource(19752U);
    msg.setSourceEntity(238U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(62U);
    msg.timeline.assign("JDXNZDCOYWPZELVKULKIBXOIGXQSJFHVAYTQEZBYCZBNOFKUHFPLZMAOPSTMCVXQNRNOHWUVLIZXKCGFICREUN");
    msg.predicate.assign("VSORQBGWUHVSHJJQYEIJYDTMAVMME");
    msg.attributes.assign("FOASWVKPKPIQKVWQYYJOSORWMNXYRZOVVHWNTHYGJVHVKRNIOOGJMRZDJCAYOCXECVMQRNQCDHUXSDTXXRITLWJFBIVZQGLMYRPIUZAXFNLEZJWUFMRJBUSCCDADIZFDPGHOIGSTTKPNAXOSQXMUGCLLUUUGFBPBBZBBUQTMNQSTTBFNEAWPGYPJZNSEDGZEFWHILLHCTIYZXFEAEBPSLQAMNEKHWK");

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
    msg.setTimeStamp(0.3239733342603275);
    msg.setSource(5475U);
    msg.setSourceEntity(5U);
    msg.setDestination(33749U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("TXAZMILSTLTMYXATXKRPNDETDFYGHIENHWGQALNHODYVQHCYTDCJRKCDIYJELVPQUFSZSTJJABBZYHLVEOQXVRHWBNPCJQOWFYWKCVSRLHMMXSLMWEVJBWFOHIUOPAZMIFKUORS");
    msg.predicate.assign("UPCXKYLJYZIVYJFRHJEMYKTVARDDNRDMNQTSDCSVQNWQAOSSDH");
    msg.attributes.assign("SYJYROKZGMVPMDQSJLRHWBNYTEHQFPRMPWQRDETHSEXUKKZUPLNZINSEWFRKJXAZEX");

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
    msg.setTimeStamp(0.8660271082352357);
    msg.setSource(37467U);
    msg.setSourceEntity(2U);
    msg.setDestination(60980U);
    msg.setDestinationEntity(98U);
    msg.command = 171U;
    msg.goal_id.assign("SDOMJLFBDHCPVOZQHNMABXJONKTFZNGJLYWNFMJOPYFGNJWUIPOIQDJYRARJLCGUTTEGNBCYVFWRWVBWADTOHFPXXHSVRALRQAMCCZBJEKCCPEBVHOWWN");
    msg.goal_xml.assign("TFBKGDPIWWQMORCQRYBFTNITRAUCVZZUPPTDNRYTJFSNIJFUMJYKSNUBGHNLPXMHLDOHCVPYLVUEHWAYYRXLQCFVNBIYAQRRTTNLFRKLPOSSEDRTRODFAJGZALYFVKCQMQJOQCILCHAOUTAYKXWBFESWGVPKNXWMID");

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
    msg.setTimeStamp(0.42373882437712473);
    msg.setSource(50498U);
    msg.setSourceEntity(151U);
    msg.setDestination(14400U);
    msg.setDestinationEntity(21U);
    msg.command = 243U;
    msg.goal_id.assign("BJCQGEKEYMTALWEUSAOVIKGLDPRMNOYOAAGMPEJRVPLTLDFGCSRIPUUYEATKTFGZUDYSHCBCNCUTXGMKDLNOMAWANVYITXRLWZUBOVZZFJIPQYKHDHBPIZZXXWCJHFYEQRBFBJQDEXJCDJTZWTIKTUAQWDHZMHVFYGSVWUBVNQLSRHXLJOIXXXQQESKASRIFPWBYHIGBZMFYJNRGDKCNKUSPGIF");
    msg.goal_xml.assign("GWYLWKQMITHZNOPWNYMRWUEOXNAKBIQXJDNXXANNQPBJRPZTANCHGJRATBRXILDWIIHEMPSFUVJLTBCYQYVYUTSLDAWQMKBYFFEOLWMVEEVFWZAXCIHEIKGFDEUOKCKHUYMJJIZBLEMCFLCASTGTLHOVMDRRAKHJVNUDCVXBGDZMBDHSGXOQBVPZQTANUEXOVIKZSZWONTAHGYQQORJGJKSVPQP");

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
    msg.setTimeStamp(0.7627433076915971);
    msg.setSource(18378U);
    msg.setSourceEntity(233U);
    msg.setDestination(6967U);
    msg.setDestinationEntity(160U);
    msg.command = 167U;
    msg.goal_id.assign("QTRWCLHKJDPXIOGRFWWEKWDQGRAKHITVSSDUEAAOVWYJUKHIACTLGHFLZMCNWASKTMOHVZWNBDRPKFGIBWURIMEHBVLQTCGHUZSDLYZOTJXZLEPCNVVKTKEALMFOYVLBRJKMILCRODIBMIUFNMCTVOANGJU");
    msg.goal_xml.assign("CLFWKIBALDRZVPZOIVIAUVEYDPBCVGLNMBGLOYHRBHQKZWNFWDOYZCHTJEJEKJCTSQHMYWXALGXJLUSNHOBBTAGYMVXMWGONTTXRVAKWPRHFWXUZMDIDFSAIJFLSTELSGPXQUUYUPIDYUCKGXFQKNJBQQUNRGQLGTSFCKHAVEYJQKHR");

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
    msg.setTimeStamp(0.7211144222644419);
    msg.setSource(51795U);
    msg.setSourceEntity(207U);
    msg.setDestination(62200U);
    msg.setDestinationEntity(187U);
    msg.op = 193U;
    msg.goal_id.assign("EMEPOKXZIUATLJCUIZNJVDPWCUNJDOOTSQFMOSLRZHHWOTEGPCLXTJUFAWKYQECIBXMQRIVQNFRQTLVDIYPAWEGDMVUCRWMMSYIDTYYKYX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LXANCXNSZKUHWASBOMMQAGVTYQHJNVOCUKJYKFPRKVSKHLOTEPJGUPKAMIPNWBRUOVFFOJNEUEXIIJMFULGIQVWPHWRIBQLFDXZADUOYYACULZHEQDBCOZPSDYSGRRJXYHMSZCB");
    tmp_msg_0.predicate.assign("VKMFTACILGYBZEHFRMNYBDMTVKYFBZQLSTYSEATXPWNSLQDDJZYBGXXOQEJFTUKZESPIBJIRSJWCVACZLZCLGDJRUJBSZLEJHIQOYCKMUBPAZEGRTLHCRM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WCBUVKBPHUKQPRSWSBQLMXDVSMYLJNYBRJQRXFHONDWMTWAYZLZMYAQKEFCJBRTHRYNACCZRRGHXLAQWGPGLJZKBNHRKPCOBDDKFGXOSPMTSVODHOVJFEGYTPMAVZDQYISUUOCKEQJMHTWQAEIBVGTCONXKSIGPKFJOIELLALICUFYMEFRLGTGIIASCOWODJXZZVXMTCZVT");
    tmp_tmp_msg_0_0.attr_type = 200U;
    tmp_tmp_msg_0_0.min.assign("AUZOHZILZOVKCPHBMVEJCZDZFUTJLKKCWQWQFSRJKPBNXYOFNQITDDBUEIKBIRNGWXNQJDTFSBSDFPMPVXSKRXUMBNQHETKZLINFMNJAYVOXRNAXGYJFISXFIWGGOSQUETHULCRAGLYXVUFPBRFECRJEHCPMYZQRQKWVYMGWBRDPPAZZHSUAUTJOOCYT");
    tmp_tmp_msg_0_0.max.assign("JFWSGQCTDILSLHCADAVRRRFJTZOOGDGOCPLPALINFYOYBQZXQBPKNZUZYYVDFRKBDSYGMVVTDYOMNTFRHFZKIUNRRXFCMNFGXTAZSPETYLHWWHRDIHXJMXUGATSNLZWVKGAEWQIJEMEUXOWPAHZGCGCCKGZPBYX");
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
    msg.setTimeStamp(0.08187410252694971);
    msg.setSource(61893U);
    msg.setSourceEntity(241U);
    msg.setDestination(14965U);
    msg.setDestinationEntity(97U);
    msg.op = 198U;
    msg.goal_id.assign("FWLNPGFUUOQRAGKBKJFVBHJRPZRWSMCIDDNMTMVHTHIYXOGXVJLRPVTYNLWEJQANXYATLAJEIRAIYTHGZHEVYVDIBERTKQAKDXYZUPGBDYNBMSGSAOBMOUQQICYZNKHSUNDHKXQEQQABOZWMGTWLERPMWPPPVGRDNUGKUSLUMTWLSYHSSNASONLIMGFFZFEQED");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJKCXJHNTKSVQMYCOLCWWDHMTXHOZJVSYWYRXZHZZVKIUTYBLGUVQYCNAVINLMWATYYLUAGPTBXF");
    tmp_msg_0.predicate.assign("EABPILIYCSYTNOJVZQHTJNGTVGTOFRDWHHPTWWKZLJEAQKDTGFKPRIFRGBCSUKTKAJICMMW");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IXNBSHOBWMCHZMLVFHUDMUBKRKSDXBZCWVORFNJZFPNKRVPOEKGOQYGTPRDAPQNYWUOPNSTQTPQQYSHOJBGPATMMUUXCRIUDUFYKQLXJVETBNZHABVVMLXCMPRAAYAOKDZNMODBEFHIVWRMDWJFZSXVEIABGXRIEZHAMDKNSVSXHLNJWZRJYPGLSJIWZAYY");
    tmp_tmp_msg_0_0.attr_type = 145U;
    tmp_tmp_msg_0_0.min.assign("TADIPXRPWEHJPVYYSLTKEMZFGYFHOIENCFQRNQCPTBXDOIJCMATNNYUIZVCFNHJCYBPREIEDBBAUIMHGREPQZ");
    tmp_tmp_msg_0_0.max.assign("FHMYBWGJZIJDZWLPGSSKPTTIGZAEIUAZYXTDAEK");
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
    msg.setTimeStamp(0.8061740882013018);
    msg.setSource(41667U);
    msg.setSourceEntity(103U);
    msg.setDestination(31839U);
    msg.setDestinationEntity(130U);
    msg.op = 147U;
    msg.goal_id.assign("VHPXVJJWTROQENGFPMHCXMQLTVREBJBLLOMJZUIVUGUFBYSGGHNPYNCKOIULYGJULKWLPTRUBPSNKQZOCQTHRUIXEDDXQDKWIGDQLVCDIAGQTFJMOQRDJWCEUGWKBRCVJXNCECAAZNZZOFMISKRSWPJTKKMQLFSTN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KBFBSCNMKWDQGKDBTHDXLCBGMMVCPGWTREWRKTUCFAWBIRLMPVJUWDTHNIPXUXZSLMHZJLREFLQITJGAIG");
    tmp_msg_0.predicate.assign("THILZAJOHLNLDHPPGVFPMIPNUNQTIERX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TGUXFUBRCEYAOBHDMQRCEIXCPFSVSGGWHDXPRRGYLDWZRBCKJHVJASZQVUMCEZWNHZMWLTLCPKVLFYNUCQNFUCIEDOAQLONZIBKTTMSBNHDNYYGJOPKKKPTKBDQMENJASZJJZTVGXAAZPVWINMU");
    tmp_tmp_msg_0_0.attr_type = 110U;
    tmp_tmp_msg_0_0.min.assign("VNHGXXSJCKAOAUXMYAEGPEZFYWRTXVVONJJOQZZIFEJZFWZKUVIRHUYBJEHNOIRRMBTLCHLATWWTSOCDYGHCUVBPSELVGCBIMDAMYLFQBLQQKKDZEOBPQYWPSRUNMKXVMFBURTGPJQQMROSDAEADTOWPAWNYQTLTDDSDJSIMICIXXGSJZPKJCNFKRKFHZIVPJIKHRWXFNTSWOSWYKIEXHXGVNLEDYQEACMDBNT");
    tmp_tmp_msg_0_0.max.assign("BZBMVDVIZRNYMEHYALDFNFSHNUBJRTDTAIJFMZQRUXSZUSVWKEBHFGHWERTACBGADEBPAPKCEVOMCSXPXTQQFCQFMXINDDXSQBOCEWKYVZGLG");
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
    msg.setTimeStamp(0.8033786868308659);
    msg.setSource(63625U);
    msg.setSourceEntity(33U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(104U);
    msg.name.assign("OKUCAOJGJQMBOUSILGWCFSZUDJKVLXTPCEGVIIRCNDOFXMEGHHZFZLRVHEROBSYTANOLXJXNFJSYLBCX");
    msg.attr_type = 87U;
    msg.min.assign("PAEYARTKHDVNUVDDGLMBKIEFBHUYKVHNQUWUDDXHECWRQGLTNMAYDQDVIJLEWRKTBWMHSCJZFANZRKLNYRBGWWIXPPWQOJZLJVSCAXJTQUGHBZXJRMTFDQXKNLNSGANSBEDPOKBKUNNJOPISEOAUJVFULXXRSUOQRVYZMUIDEJMXSQVYCFGPBTIEOPIZZTHKRQHMSTGHTAWOZVPSCRIYOTGCCZWEPOFGXEFYLKBCAMV");
    msg.max.assign("EHUGQOKXIRYEUYDMSQCWRJRIKJPJQSECASNMXPLJIGVFJRNNPAMZDNYJHXGGSZISPRVBMRRVTSICFQJGMDAWBAUDEZPUHWPQNMMEFSIAMEVKLTWKNVGLDDFOFLKODHAWTNBJWBQFBTUHHVTUYNXEZXYJAOECNHXBQRDOPEOWIIQXFYUTHOLPLUGMKB");

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
    msg.setTimeStamp(0.025912811798362245);
    msg.setSource(62636U);
    msg.setSourceEntity(249U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(78U);
    msg.name.assign("AERHTVIUEILBYHIXNMJCXZFWZBMUTDIUSJRJMPOWWNXAZQLUWNLSSKZBLUSJPJMPGKXQHWGTCLFZGYNPEHANFXKIQIIPVESDCFRSFTUIQGQZHQFXZFHXDSKNHRENOUTMNWXBAUBBDVWQZERLJQAEMKYHCZCLPJDIYCYCPEDTFYGVKUKAGMVGXOFDTFGTOODACVAVLBSJGOJBWVEQYKOODNLEMTAVBUDYRGPNHKRPMV");
    msg.attr_type = 62U;
    msg.min.assign("KRYYMWCZDNVZXQCFVHZIRTLULRHFKXRKWYGBEJXOBIWUGUSOFZRQEBDYTIFFQSEHATOYQCWBXJVUELHTZGPFZMGUVOIPOOAMPVDLAPUPVWJLXTBNZASTGRRTWSLDKCNRBWMMGVDXHESJMIFGMLDVKDSQHBBJPZFMGOAMPEJUAIXCYWNETPJNCHIIQUFJYRQNQSTQNNDAYWHDBKPXPSIWCNHXCJAQ");
    msg.max.assign("XPRCPTYARBFGUKPAEISVDVVVOJEREYSFAAPTDQUCJJCRZVMFKCBYDBWXWMNKMFFULKLWGAVXOSECVTTBPQIEISQLIRCHBCNSQBSMJNWPDANJWZUXKMOOTPITPKTIQHTJTHDZNHORCWYQFNDYGIHPYLEMRKHDXHELXUMJABWQKYYDRVOLGZLEWUHZW");

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
    msg.setTimeStamp(0.4796698835603461);
    msg.setSource(20984U);
    msg.setSourceEntity(226U);
    msg.setDestination(2771U);
    msg.setDestinationEntity(48U);
    msg.name.assign("CGYNVKNZACIUIKPXSCROGAVCEVMACCDIZOMZRRJKZMJGXXNEBUQSGUGTXSXHJAZQYJHEDUBLJOBHABIDMETFHOWDIBXDYTRDCGJRLSHWPFRWHFNZMYNKJJIPVGAFFPBCTMXWEGIJMBQFTBJKCWVVPCNZLSYXWTLHPSKXYQAPEVYVHHISYKUKQLU");
    msg.attr_type = 138U;
    msg.min.assign("KULOWAIRWQKXFEBSTDQQORBIYPAUAWXWWYZXGAEKXHVZNFPLMMADGOGVCLSHJEBKMCJYATPPPZIYBWBCKDMLVFUJVUPRVAHQTLIVXEYKICDFLFISJBVIDRNKJUWEYIDPGHRQUNRIDCMTEBSAGSVNSAODSNVCGLNQYPUMXOXLZOJNBKHCCTJFMEXB");
    msg.max.assign("AEGGGRFAWXAHSMGKFVOMCXZCNLMFQFQQJLAJSXTGCUZPBQTDWYIXIFQPJXFUYGZTBXDKUKUZXYNNHQAWSSWOBUETVVBJYVWWBHLKRXIQUCVCCKOYMOBACIAYTITKLELAZDCMZWVTITLUSHMRQIJAPYWDJNNXRDNEDJDGIPSNKJRODQFRIZJBEVZIEDRKOOJPTSBBPHHXZHKENMUYL");

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
    msg.setTimeStamp(0.061068891126638714);
    msg.setSource(42582U);
    msg.setSourceEntity(234U);
    msg.setDestination(12631U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("IZBZDAGBJDFQFVEDHCUXSGPLZAZLBENICMLIGZMHJWSIFHNZIWLWPIXGTYANPOJJDVAAISSEXXNZDOCMAFNGGKCQLRPNCJYUCHWVROVVUBMTZPJFBNRKGCAPIRKWDQMEWBOCSXUOKQVFYTCYFUORSFHGFJOPHSDNQBQVWSXKAUSALDYOUUIWMXQHYTTQUJZKGXEMYVDHEUKMQVPHWRKXBEBCNYRLRYNSRQTZWFVJKMXLOEPYTMLHTL");
    msg.predicate.assign("HOKIGHZALPNEAQBCOLPDQIIZYMESCSBSRUPTJNREMBUOZOGRYLMKZYBEIEICQTFNJCRDTUEWWISZGLHFMUNDCPKAKRVSLDDFOTV");

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
    msg.setTimeStamp(0.953381322269428);
    msg.setSource(16952U);
    msg.setSourceEntity(119U);
    msg.setDestination(47948U);
    msg.setDestinationEntity(145U);
    msg.timeline.assign("XJRIJJXGVPIEPIEGPEUHSUOZHVFMERVSBSHELCTASBHKBPNCQOPXYOTFBSDRBUYUHLOQKGFLTITFAHKLVQPTZYONQZYAVUAGKVOBVUQTYGFICLKQJNUNBJAETMURBKOHLABQXJTRSMCWEDYMWFINGGKSYFWKNWSWLQZODPXLYOWJJXRHDXRMG");
    msg.predicate.assign("IWRZDLKFCECQLFLEPLZYZBL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("GSZBDJUDMZWVPPLXQRFPNYPMSTVWDIGMZGJELXWYTTECYUUVRRVZFXWEXSVQKDBLJNOLRCXCRXMZBUMYFFGMARBHLMFKRTCCKEKOKAGYQYUSISAJELHDZFFFAKQBYHTTSFCHKLCGDBEQNAZSNJAEITHHQINIPDQPSLHNOMVWOWYTIGJASJEUFOKACVOTIXKUZVUMUOJQWPHHBHCOQUPEKODZWWIBADISBRYR");
    tmp_msg_0.attr_type = 69U;
    tmp_msg_0.min.assign("QLSBVPIVVRKKNGQHXTZEXHXXLZDXYOCDNRTRONWEGKBSXRKALVCFEBWORKFJIJHFNHXP");
    tmp_msg_0.max.assign("BUTNTFQNSVXBKVXYNQFFZSMVXEUZJYLBPPOOAGWCIJDNCZMK");
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
    msg.setTimeStamp(0.5071112737320791);
    msg.setSource(49570U);
    msg.setSourceEntity(141U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(14U);
    msg.timeline.assign("XQQJYGBRNVOERKTZUHRFOIXOWJ");
    msg.predicate.assign("NOUCIDMZDFUDFCPKBVYXQMGYWBIHVALGMFZBCRUJAZIQEXAKTWNDYSMBWEYOGFHFJXOVIFGLQSFZYNRJ");

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
    msg.setTimeStamp(0.5860382763873385);
    msg.setSource(61146U);
    msg.setSourceEntity(63U);
    msg.setDestination(59151U);
    msg.setDestinationEntity(226U);
    msg.reactor.assign("HOWJEXKQVREQTDNW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OQWBRKGCFSDWUXNIMFNYHDPAJACZEXIOXIYCQJZFYCEGAXXHREOO");
    tmp_msg_0.predicate.assign("LLPMFXXQULLIMPEMNURBECPJXXKXIQLHAJVNYWKTMQBMHQLHHASCCITFDVFPJRJAGPRGOADXKRNEOAZMEXOFHHZMHXTHQDOPPIGSVVWPZKORCTWTYDULWHKMIZBGIDAYQCUWNTIVSCQJUQCUXSJSQIOSIVBRJJCDONTDFVSEYMWSWGYBQUYEBUEKLNKGWGRKKRFPJGUDOZCLKRFZNZ");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4336744813594865);
    msg.setSource(9597U);
    msg.setSourceEntity(74U);
    msg.setDestination(42923U);
    msg.setDestinationEntity(54U);
    msg.reactor.assign("VXURVJZAQWSJBFPCQYMVQAPJAETHCNHYPFGIFOORKZZECGSTOARGQGISXITKKLXVHMEICVODOWQGZTDNTHTQHXRQPMBSYGKCSUFUUMAZBENLWMFSJGVURLIDSBBSNVWEHWLECINBTAOYXKZOPDTBKZLKWAGRLPXP");

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
    msg.setTimeStamp(0.7747905217014011);
    msg.setSource(36414U);
    msg.setSourceEntity(168U);
    msg.setDestination(53585U);
    msg.setDestinationEntity(109U);
    msg.reactor.assign("FHKJETGSPHXCIUIZPDQFBGWLAEUQARCOWABFPDZVXPBVNJJNENCVKXPWAGKZIBDASKOMAHSPLHEMHOCCUNJVTQESIBYSMXGXLYFZWPVZJKKHFGTAOVRIXDNJDAPJABCIFLCOUKMURMSZWGZSQVIFTNEUSYQYLTZQMRHOENHWRXUVOLQDWFEDTTQVDCZMCXMQHYZUPGLSFBFEAOGRJTULYYRORR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZHKJFRPLSLDOZHFNKYJIANVAVKWOANKOGCRHIHMMNYQEBWPECNTQXAJQSOURWFMDHZYAIJDGYQAIYVZIZWSFQDTWFEIWAFMQBAXULTUOCOREQLVOAGZTCPGXNLLLBJEQWZVCHWHCSSEBKLYPSBHXJFPRTFMOMYYEHGYXGNZVEENNUPGXPJHOIJJWCV");
    tmp_msg_0.predicate.assign("VKHKVTFVOIXBZAIDACFHBPQELBZOCZRCGZHWLLHNFNKAHJRTFETIYAWVWMRCDAZVCQJSPXPSWYLUPEQUNXUDDIRVHWBTVRERJLZK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FAJPLXGCBRTNOFQOWVGMUBYODUELOOMODRMPMCGVQPFCTYFHJZQNMNREHFOLWUQHCKFGQCSZJHVSIBCNZJXBXHSUSUVZHYJBKTGBKYSVQPZIDEWXAXJOLXDRHOTMMAQNRLVDWDXTFXYTCILWHRRENEPFVCYXPVGKUNDZUAAWZTTWBRYUEAZILPSAYIQBAQVCGLPTNIFGNDVJUWRWEIMKIALKKDJHFSAUIPWYEJSOSBDSTRGXJLEGCMIHEBK");
    tmp_tmp_msg_0_0.attr_type = 46U;
    tmp_tmp_msg_0_0.min.assign("YJCIWGIVDUO");
    tmp_tmp_msg_0_0.max.assign("ROIUWKKZWSGQIJCSVDZIDYVCDLEZBZWGWLZXZLDMXOSOYTMYPEJFBTIPEYPGCQNOPJKFYVDQKUNGUVFATACJFJVNRMIKAEWHNRQ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9255581680842259);
    msg.setSource(14045U);
    msg.setSourceEntity(152U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(236U);
    msg.topic.assign("DCGBYVXBMEFLVCLMOPUTIDEVYCZRDFTKEGHZMYXFNNIROQFOGGRT");
    msg.data.assign("RZKHCVUFZAIWGZDVQINLHVO");

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
    msg.setTimeStamp(0.9826438453107516);
    msg.setSource(29165U);
    msg.setSourceEntity(83U);
    msg.setDestination(14722U);
    msg.setDestinationEntity(94U);
    msg.topic.assign("UTUQNCAZELZOIVTJFCJBRRVVVQUYSHXXSGWSLMFMTSFYHNOLHULULPMLINBEKTKMITBRDUYNQKWWLFQDRCAPJXEGZIKD");
    msg.data.assign("BWJAHZGSUKWXLQXVBDJKVYOPLENMBSKTZVALVOCAXXEEPMRLIUMNXJZHQWOCZPFRTSFGKMXHIGFBQGLESJVNULRCLBNDCGCUMQEDTDZKBOWUFWTGASAISVIIITOPQGRESPYHESHYUBRLJNEQASHWURRKMRVVAYDNNWLEX");

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
    msg.setTimeStamp(0.20528737792154617);
    msg.setSource(43267U);
    msg.setSourceEntity(207U);
    msg.setDestination(18852U);
    msg.setDestinationEntity(99U);
    msg.topic.assign("MMONZMOYPNTBUEZNNWSBSFUTOBMKYTWPRZLAOHIRIJTSERKFBRDWYWJNMBPIHBGXTOKRECTLUFUAZPOVCSDUCJRTGZXVEVQWVGQJKZTYLISYDNLFBHVUFAHAXQADCCIQIEAZJMILSLYHNFFIWCCOGRTQHWPKDPSLUSGNHVZDYRLCBKFDXQKJEQSFRLDXTHOJJVUXYJBOWQXERVQ");
    msg.data.assign("TOSJMWYFVGYAVZZINVUDHLQNSADRZDYXZYRGPOPOCFHTKQLFICIKQHLCASUGGNELBHPZDXMTIERKEDKTHMBDOTFCDPAOMJLJIWXNPAMRUTFHLUVEF");

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
    msg.setTimeStamp(0.034409731903064955);
    msg.setSource(11391U);
    msg.setSourceEntity(43U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(126U);
    msg.frameid = 97U;
    const char tmp_msg_0[] = {-20, -59, -59, -49, -16, 124, -86, 47, 88, 0, 33, 50, -113, 24, -44, 36, 2, 100, 126, 32, 21, -32, 2, -10, 37, 20, -88, -116, 44, 105, 25, -66, 95, -46, 70, -89, -24, -34, 74, -38, -46, -84, 66, -100, 113, 89, -122, 66, 99, 114};
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
    msg.setTimeStamp(0.8179965955982762);
    msg.setSource(24206U);
    msg.setSourceEntity(97U);
    msg.setDestination(20065U);
    msg.setDestinationEntity(83U);
    msg.frameid = 109U;
    const char tmp_msg_0[] = {-99, -6, 10, 64, -33, -69, -7, 53, -102, -80, -114, 110, 37, 74, -51, 103, 9, -6, 2, -119, -84, 119, 17, 75, -95, -39, 65, -123, 65, -90, -92, -23, -61, -96};
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
    msg.setTimeStamp(0.2101399256887836);
    msg.setSource(49520U);
    msg.setSourceEntity(226U);
    msg.setDestination(41810U);
    msg.setDestinationEntity(211U);
    msg.frameid = 43U;
    const char tmp_msg_0[] = {-115, 35, 27, -109, -24, -13, 22, 48, -126, -59, 71, 31, -53, -117, -116, -76, -30, 93, -128, -62, 31, 93, -6, -77, 44};
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
    msg.setTimeStamp(0.9549452640312482);
    msg.setSource(6672U);
    msg.setSourceEntity(85U);
    msg.setDestination(21312U);
    msg.setDestinationEntity(132U);
    msg.fps = 188U;
    msg.quality = 223U;
    msg.reps = 44U;
    msg.tsize = 26U;

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
    msg.setTimeStamp(0.9439644049864497);
    msg.setSource(34274U);
    msg.setSourceEntity(246U);
    msg.setDestination(42287U);
    msg.setDestinationEntity(217U);
    msg.fps = 6U;
    msg.quality = 146U;
    msg.reps = 49U;
    msg.tsize = 124U;

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
    msg.setTimeStamp(0.014627904188688756);
    msg.setSource(29931U);
    msg.setSourceEntity(181U);
    msg.setDestination(62944U);
    msg.setDestinationEntity(230U);
    msg.fps = 172U;
    msg.quality = 200U;
    msg.reps = 223U;
    msg.tsize = 23U;

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
    msg.setTimeStamp(0.10249287886657932);
    msg.setSource(16084U);
    msg.setSourceEntity(185U);
    msg.setDestination(24974U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.0622698977453795;
    msg.lon = 0.18266754080196057;
    msg.depth = 123U;
    msg.speed = 0.5261431995664535;
    msg.psi = 0.5403554243242398;

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
    msg.setTimeStamp(0.9455422296557063);
    msg.setSource(17868U);
    msg.setSourceEntity(72U);
    msg.setDestination(15745U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.1965950131046259;
    msg.lon = 0.9559342683739976;
    msg.depth = 2U;
    msg.speed = 0.0350921062932773;
    msg.psi = 0.8193028235822447;

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
    msg.setTimeStamp(0.9202940790149904);
    msg.setSource(7456U);
    msg.setSourceEntity(154U);
    msg.setDestination(21265U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.6724047836424027;
    msg.lon = 0.8561615510673259;
    msg.depth = 194U;
    msg.speed = 0.6867808385351237;
    msg.psi = 0.03335711163552868;

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
    msg.setTimeStamp(0.4901389523567682);
    msg.setSource(15518U);
    msg.setSourceEntity(186U);
    msg.setDestination(41682U);
    msg.setDestinationEntity(223U);
    msg.label.assign("OGHAPCPYDZKVCOZRWODENGEVVBESXESNBSBVFRJKRYMAQZAVXQQQIWWIIKVHCZGZAPBMTYFEJXPOJJCIOLCKARPKBY");
    msg.lat = 0.2132444711850151;
    msg.lon = 0.447606149215404;
    msg.z = 0.18202187709197815;
    msg.z_units = 43U;
    msg.cog = 0.8487606046965166;
    msg.sog = 0.4895850962912436;

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
    msg.setTimeStamp(0.7395442503771089);
    msg.setSource(30381U);
    msg.setSourceEntity(194U);
    msg.setDestination(24544U);
    msg.setDestinationEntity(13U);
    msg.label.assign("QLHMITDRSOUVQWKQAEOSHKMWWHWXDZCDYRABO");
    msg.lat = 0.5092350777280507;
    msg.lon = 0.5866025455608943;
    msg.z = 0.6741144979130466;
    msg.z_units = 239U;
    msg.cog = 0.6431092975778393;
    msg.sog = 0.7429703515810476;

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
    msg.setTimeStamp(0.3649595719349551);
    msg.setSource(33299U);
    msg.setSourceEntity(143U);
    msg.setDestination(44172U);
    msg.setDestinationEntity(53U);
    msg.label.assign("CJQWUPBIHBSJIKCABWXBNRSLINGOIEKAUUO");
    msg.lat = 0.12568814886217916;
    msg.lon = 0.11103787328301373;
    msg.z = 0.8430286975958579;
    msg.z_units = 125U;
    msg.cog = 0.7233291408429301;
    msg.sog = 0.010025408756729193;

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
    msg.setTimeStamp(0.7553523069092841);
    msg.setSource(48072U);
    msg.setSourceEntity(209U);
    msg.setDestination(43844U);
    msg.setDestinationEntity(233U);
    msg.name.assign("DFKNDTUMQMYRNWAFJZUTHQTNMUTMPQVUQJFKSQCDTNRCKXX");
    msg.value.assign("EFBCEGBNDKPEJABSDFPAKXGIRYJLADRSPUILWLGWOHVDJHMKPJZFQJCXJKBQCICIMPMVAUVCVJONXBAAXFLHISUATAKZMLCYBVPRIIDWTOEYTLHSGKCRCLISVODXSNNTGTWEEFYBVEADEUDMNZQRBGTGFZCZGRUXLVHJKDHJHNWUQONIYEOXZZBUOMFQHNQAUOWRWMQMQLIKMYFZGWEJTGBCHUY");

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
    msg.setTimeStamp(0.6424108616112274);
    msg.setSource(17852U);
    msg.setSourceEntity(90U);
    msg.setDestination(49597U);
    msg.setDestinationEntity(5U);
    msg.name.assign("ZRLDGQASRUNHNYJHYDJFOYQOCRF");
    msg.value.assign("AVWFMXMCWDGQJNZPZABBCEPVHNPOLTPJFCUODJZEQGOLATUOFEPHGTVVSWIUYKQUUBFWOWQYKAGFBCZLHTRPMSJMXXQXDJDCCLLWVNETWHLGQ");

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
    msg.setTimeStamp(0.42348850610663136);
    msg.setSource(47154U);
    msg.setSourceEntity(43U);
    msg.setDestination(34084U);
    msg.setDestinationEntity(59U);
    msg.name.assign("DJEJAEMHKIFMFYQUOKBMGQRUJVVTLIDMJKSOYXNEPBHESXQKBDWYPCCBAMOFZXKKRSDYIENRJJQJXDOAUZUXOBLSIJGTTLCIFNURBAKCFFTCFWZNNKOGALYOTZ");
    msg.value.assign("CLSTEBSGOANERLEJTYORCTGXRQXBYUTWMPYAMHWGOMNIEYFIRHFYCIJPPJNGWEQYSMDVCOADQUKLRFKPVHC");

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
    msg.setTimeStamp(0.13037776995922346);
    msg.setSource(39312U);
    msg.setSourceEntity(189U);
    msg.setDestination(16214U);
    msg.setDestinationEntity(175U);
    msg.name.assign("CXOBQWMCEWDVMMYITQKENSBUSSLXHISADPA");

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
    msg.setTimeStamp(0.5136800755853284);
    msg.setSource(12792U);
    msg.setSourceEntity(239U);
    msg.setDestination(48398U);
    msg.setDestinationEntity(201U);
    msg.name.assign("RCUGVJTYMLCWRNPUEAAONXGZVOXXVMWJBBOTCVFHICIUQVOEWEBEXID");

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
    msg.setTimeStamp(0.5054627380672325);
    msg.setSource(14135U);
    msg.setSourceEntity(84U);
    msg.setDestination(28696U);
    msg.setDestinationEntity(217U);
    msg.name.assign("FCRUSFEMUKOAQLWJFORCSNKZHFTLJWVPVULSLXROTPDASDXPVBILTPUIVNFCAKZCZMDPHYYRIYTWRIVIWGGFNUGRYPQDAFFUMGDTHZRPHMCMNTIVBDACWJITEPBMCSGNZYLEEVCPHAUBBIVZJHGQNQOLASMOVWTXOOJXNSUIBHUPDWREOJAKLGFBLWBJJRTELOAQZZNRYVDNS");

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
    msg.setTimeStamp(0.9199255441489557);
    msg.setSource(61527U);
    msg.setSourceEntity(54U);
    msg.setDestination(14040U);
    msg.setDestinationEntity(85U);
    msg.name.assign("RYNTUAAFLYILLOSDMOSLAPTJXJVFPTJYPQZBYADQZZGNUC");
    msg.visibility.assign("JWWQZMJALIMEJLBELDPREMCUANVSGVXMGRQKZNHLMFMJRYIVTTPXCIHUNJGMWOOHHBBWDQGTZSZOWFAYPVWRGNOBSYIEDICODXXESKEDQFJXUVXQERGIUPCKNONGWWIRKLHCXZFSQADKTILWMJMHKRJVYVAGUBPAJRNV");
    msg.scope.assign("OFSBIXRYJYKQONILPYWKVIAUQLXFTMQLHUYXQYDMPXOJWWXDXPCNBWRIZTLTBVSCEKYLNCJBHXRMOPWVALURVXCRANGDPIYQSNSZBVHFIHUKYPSQQAONHCWZWFIDSNDPWFIMYZPOUXB");

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
    msg.setTimeStamp(0.7072829994715096);
    msg.setSource(63429U);
    msg.setSourceEntity(175U);
    msg.setDestination(28697U);
    msg.setDestinationEntity(23U);
    msg.name.assign("XBTTQXRZLZEJOKXZPGAJHKUTRWFLNPNETLNURYSSFDYLSGEGNBYRNPKITAHCBVKWARQYUIZCFBQFWJFVCQOMDBMVVGAAJJSPUICWSOXMOPLADBXOGEPUCDNRHIFSMEBIPMVSCHJXMRQHWXDWCPTEJISDBJLMIUKAZPWLUGXD");
    msg.visibility.assign("PFCNRZWNLJAJOCNXWQXYEDFYFIGRYXZUQMWCRPRWHSMMGKQAFLDNAPPVLKCPEBJBTVVDUPKZWY");
    msg.scope.assign("DGAZHYTLLSVBKXLTZORQMJXZDHIDCQVYNWYXEGYOBQQNAKKHPNTYPTP");

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
    msg.setTimeStamp(0.02618949568576967);
    msg.setSource(54335U);
    msg.setSourceEntity(141U);
    msg.setDestination(16004U);
    msg.setDestinationEntity(160U);
    msg.name.assign("DKRLQLBSCLOGRTAGENJLHZLFMWGEUUBRATH");
    msg.visibility.assign("GOQCVHONUTQXRGWLKWJCMINOEPCUASRSETFATYWMKRDHIHFQDTBZBOLKNFFAHLARGPEMSLPOYYMQPFDVBAMXRZSVEHCWOKZAQCDBGDDKIKICLLVYICGBDYOJTXUDENWJAIYFSRFULGIKHYUXXFXOABXQP");
    msg.scope.assign("PVIPBSXYBPFKUMSJNJEEFAOAEUOABBGKKUKVZIUYFOBRNHWVZWHXQITTJDLFTLCOXAEUVSQOIBCMVXBEUALNCIYRWZJTGAEVLXFHJPSWWKRGQSEMOFDECNNMJZYTSDFHKMICWSWGIQZQCHOLYHYCMUCGPFYEZNSUILNKDWRLZPDHYPLORHTPDTFYVJJYUAWMMKDQRQMRVUAIJBKIQXANTNPTTCD");

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
    msg.setTimeStamp(0.3411426995898762);
    msg.setSource(30382U);
    msg.setSourceEntity(141U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(1U);
    msg.name.assign("SNNAMFUUVBRJXJOWOPEMSDRVBVMZYXWOZUKALHYXORRJQFAYYTHKOOKRTKKKLTJEWTLDXUCDYGNEVMEBUFWIMJCIDPRNMNWLYEGHBYBCJDGJAQXBEBYTPFUYGIWZPSQPJMMPXMRSZICBLFPVHVKKOZZTISFFZAQXCPIRGWACULCZNJLXR");

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
    msg.setTimeStamp(0.8511749241002979);
    msg.setSource(56855U);
    msg.setSourceEntity(76U);
    msg.setDestination(18196U);
    msg.setDestinationEntity(41U);
    msg.name.assign("QDLAGIPAWKDHZCDFUQYUEFEIRKIYRSPEFB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CHPDDIJXXTCNLGXQWBEPWLFMGYVEKVAJFJBNAHOPAHQLSUYAVLDRBTYZZOJNDLTY");
    tmp_msg_0.value.assign("MAHOPOZXUHOSAKBREJDVNWZAEEXILNGDB");
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
    msg.setTimeStamp(0.5086109942777602);
    msg.setSource(21122U);
    msg.setSourceEntity(223U);
    msg.setDestination(55911U);
    msg.setDestinationEntity(13U);
    msg.name.assign("TSNKNGJRBPJSIQOOGKYBZWMACYNXIYFUPEEOUTNEOMNIKDXLHTEICGJOZUXAGHPSRPAGLLUDWAAIVCAWWWCLJQMEAQYGQVZFFNDYUZBNSZSMRWCPCTMZPQYIPMGQYHPILVFGLDYKKDXTBNBBQBMJYHFAKQROQEHRSRISHSLBOSHHRVXKWFTAHJKEXJZXGKJMUTJCDLYEUDTWVVFFLHK");

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
    msg.setTimeStamp(0.16299324115694303);
    msg.setSource(27712U);
    msg.setSourceEntity(1U);
    msg.setDestination(23122U);
    msg.setDestinationEntity(208U);
    msg.name.assign("XNBHYLJMLXMQLQFGATAXZCNEIJQAGKLPGIVRPGTWAKCIDYNWWJGIUQYNOEJHRMOTY");

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
    msg.setTimeStamp(0.09420394200321058);
    msg.setSource(37405U);
    msg.setSourceEntity(221U);
    msg.setDestination(31718U);
    msg.setDestinationEntity(220U);
    msg.name.assign("OGKVAQTAFCMYRCMYVHAPODCDUMIDFALCYCPMHXSXNOPXGVECNLMPBDLQVFLUVQPOPMHZXYRYRMDAOHMPQIVGVTHKAJNEDXNQZPOIEGGWBZTLSDZYFRNYIPKAATBSLHKKRGNSETNHFEVEECWLWGHWXZCRORJBAWGIUQUVMIJFLWEUDCTJDISTMYZBUJBCBIIGJZNZSTOEBBJHFJYRQFSEAUWKBKQRJZTOZPNQUSFSWHFGSKUDJWQOIRTKVLXWX");

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
    msg.setTimeStamp(0.792869066801796);
    msg.setSource(51211U);
    msg.setSourceEntity(188U);
    msg.setDestination(23749U);
    msg.setDestinationEntity(193U);
    msg.name.assign("QBSDNXIEQXWJCXETLJKMFKQYJZFFQISRRGXHKVVQXUJHPDJRVNIYJOVYZWBRZHYCSNTLNZIAECONUMMNWJPFTJMEQBKWORZQUKWCMLUVWECCLEIYPWREIBNURCKKORDKKBMAEAATEVSZCLHJUSWRGNUSGBNAYPSMALQQBSBYDOHFITVYWPZDBNMEPGTIZKAOWFDDJR");

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
    msg.setTimeStamp(0.7999075074111098);
    msg.setSource(48003U);
    msg.setSourceEntity(66U);
    msg.setDestination(44711U);
    msg.setDestinationEntity(145U);
    msg.timeout = 3169700870U;

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
    msg.setTimeStamp(0.6600412988018107);
    msg.setSource(58949U);
    msg.setSourceEntity(9U);
    msg.setDestination(30388U);
    msg.setDestinationEntity(190U);
    msg.timeout = 1550663732U;

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
    msg.setTimeStamp(0.4975635360548425);
    msg.setSource(45228U);
    msg.setSourceEntity(154U);
    msg.setDestination(33330U);
    msg.setDestinationEntity(111U);
    msg.timeout = 3881719839U;

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
    msg.setTimeStamp(0.816728599818559);
    msg.setSource(26488U);
    msg.setSourceEntity(18U);
    msg.setDestination(7445U);
    msg.setDestinationEntity(6U);
    msg.sessid = 3593177388U;

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
    msg.setTimeStamp(0.6041882680582108);
    msg.setSource(36974U);
    msg.setSourceEntity(159U);
    msg.setDestination(35933U);
    msg.setDestinationEntity(133U);
    msg.sessid = 2601860414U;

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
    msg.setTimeStamp(0.25531800418193107);
    msg.setSource(32897U);
    msg.setSourceEntity(252U);
    msg.setDestination(44684U);
    msg.setDestinationEntity(127U);
    msg.sessid = 460935838U;

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
    msg.setTimeStamp(0.7246030382878078);
    msg.setSource(16827U);
    msg.setSourceEntity(50U);
    msg.setDestination(25669U);
    msg.setDestinationEntity(88U);
    msg.sessid = 2216154043U;
    msg.messages.assign("SCXJMGPAPYZIHQFMOUFFMNBRMELRJESXVTLGFIDGZVBPCXHTFWJYXWRAGISBFVQIOBLCTWDMSVLZTIPRDYSDHSIUNYZPTCWHXEGVCBNUPUJZQOUKOBIRTUDAJDWEXTERAQKEEHZBGKVWSLOLHTSNASMCTHKDDFZGPYKFPAXKZXUYDBQUKYVQNMNYMIXGVMAWGPUBXPJOOJLJQLCHCKRRWCIEVKLZNOOJKNEANDIUAQLJVE");

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
    msg.setTimeStamp(0.731962753736334);
    msg.setSource(32784U);
    msg.setSourceEntity(56U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(224U);
    msg.sessid = 2629117795U;
    msg.messages.assign("CRBWHLCCBHYUBXSIPYQQKWLGSXEPYEVYXJPXLQWDGTYJZIQBKYLCFKRPJSWMZGWQMVAWQIUDXLEKSFUBOUEXZNGDJBGOXOHEUZUBMLHDRWOCJVTEORHJHNNRPMJZMHKSOBLHATDQCNPNVPFGVNIRLDPYZFYXIPNOSJQNUZSEZFUNQFUPFWMFAEWTGVCLSHTALABOVXKTZVREZTYIGGKIKCRIBHNATFVCGC");

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
    msg.setTimeStamp(0.43725724504177277);
    msg.setSource(16272U);
    msg.setSourceEntity(68U);
    msg.setDestination(24143U);
    msg.setDestinationEntity(64U);
    msg.sessid = 3083409441U;
    msg.messages.assign("LDLBRVCVQWDCTIERIHYZBENTQHUAZYBBIFBUAPASFRLQHJPRYQIEDQWNXFTUVJJGURSFZVSPVYUKPZROOUNRQOBKJWQXSBOMSPXTUGUAJSMHOPWHWVLUSEKWFPLNCKPLKMHOXSEADUMCGIWNCEKKDWCPNKEIOVJYGNYTYOORFGZSWZFXXYGTNXFDXYIAQMCDHBYXJVTLRODZKHBQRNPXEGGZHCSTALFC");

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
    msg.setTimeStamp(0.8809078357555322);
    msg.setSource(7279U);
    msg.setSourceEntity(0U);
    msg.setDestination(48262U);
    msg.setDestinationEntity(29U);
    msg.sessid = 3682641368U;

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
    msg.setTimeStamp(0.49827239932177103);
    msg.setSource(24702U);
    msg.setSourceEntity(211U);
    msg.setDestination(27477U);
    msg.setDestinationEntity(136U);
    msg.sessid = 4245827064U;

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
    msg.setTimeStamp(0.2735959075859645);
    msg.setSource(7063U);
    msg.setSourceEntity(61U);
    msg.setDestination(4565U);
    msg.setDestinationEntity(63U);
    msg.sessid = 1586149109U;

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
    msg.setTimeStamp(0.09252461430516656);
    msg.setSource(48971U);
    msg.setSourceEntity(1U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(125U);
    msg.sessid = 3208383996U;
    msg.status = 53U;

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
    msg.setTimeStamp(0.11949275652269942);
    msg.setSource(10016U);
    msg.setSourceEntity(206U);
    msg.setDestination(39741U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3391743426U;
    msg.status = 237U;

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
    msg.setTimeStamp(0.5981945194497355);
    msg.setSource(37018U);
    msg.setSourceEntity(222U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(157U);
    msg.sessid = 1378354011U;
    msg.status = 25U;

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
    msg.setTimeStamp(0.9381179976471581);
    msg.setSource(54469U);
    msg.setSourceEntity(216U);
    msg.setDestination(356U);
    msg.setDestinationEntity(252U);
    msg.name.assign("CBFHDZQSYHHFGPMJLWLIZSBBOMMXYKAYVYYKAOZKZUAQPRMGORPDJDWWHXGHSJNKABDI");

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
    msg.setTimeStamp(0.6208121695103834);
    msg.setSource(15721U);
    msg.setSourceEntity(65U);
    msg.setDestination(42354U);
    msg.setDestinationEntity(241U);
    msg.name.assign("DVCQIBQMVTINTJPQTYFCLDZRXALLYBUCNAHXDUCQXPTZQRGRVTLFSKPHMHOMOZLIQERIJDAFFSHEEZHSJECTVIVOGFGSLVCXBMRFMXCOUZCYGSGAMJWJIHKSEDJELMNKGLWEWPTWPXAYSGHUDQYQURCLYZZTBSBCBNUBAGDWBMOWZILPVNKJYWEJPUJDOZSDVRVZOWWNOTQAPGOSWXUYIRFHRTNPKYNOEXFKBMRPXNJKIHQEBDH");

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
    msg.setTimeStamp(0.9164164317707412);
    msg.setSource(59603U);
    msg.setSourceEntity(227U);
    msg.setDestination(3834U);
    msg.setDestinationEntity(0U);
    msg.name.assign("PIPBAZWDYXQCCZQDQRPTTDHUHHXBSSMXIKYYWDOFKFBABRJWLTELVKAGBLIIGZHOYDUMZOEBAOMMBVZJRHNOKZVRVWGGQWRMWLXFAEYNRWSNNVCGURCSLSSYODCONTQTFJMCLIIMVVQUPTSWISC");

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
    msg.setTimeStamp(0.055524884475529945);
    msg.setSource(57244U);
    msg.setSourceEntity(202U);
    msg.setDestination(64380U);
    msg.setDestinationEntity(183U);
    msg.name.assign("TZVLTUHEYRHAUXBBBLHTMFVPPNDOMLVWWOAAOXGANZVOAHSIDTFKCPEZPYDZCSXUAIMKEGUNXHRQCJIBJDLSZWRWURMTANRWOYYQOZFNSSOISSGGMGXHTRBGCTFMJCYRPIUFPJVXMEIQVKMKYEIFVKXDGMCT");

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
    msg.setTimeStamp(0.8975505509135919);
    msg.setSource(15819U);
    msg.setSourceEntity(181U);
    msg.setDestination(9348U);
    msg.setDestinationEntity(87U);
    msg.name.assign("JLPVYLRFCAHKICWXWJGPXKUEPXLOJU");

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
    msg.setTimeStamp(0.6285141908764945);
    msg.setSource(870U);
    msg.setSourceEntity(225U);
    msg.setDestination(21366U);
    msg.setDestinationEntity(120U);
    msg.name.assign("QCMRAOZSFMJQLMTITZECHXHBXGINWZFMHTQZFQMIGRECKDBNPNVAOPISLEIUHUTMDJYNDJTAFPYUCDVPUCDACJVHWLSRQXKSUXPVZGVMSKAU");

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
    msg.setTimeStamp(0.02934001788398255);
    msg.setSource(6046U);
    msg.setSourceEntity(204U);
    msg.setDestination(47073U);
    msg.setDestinationEntity(41U);
    msg.type = 129U;
    msg.error.assign("YFMZFICPDDLXBMXJUICXRVTHSSGLITMKZEYKWNUMIRWGSQHBCGTJURODWDBORLHPPAIXRNHSVFGMCYRKMUKUECTVBHEBDQFQMAFYLZXOESRANECIUPWYQKJFVCJJTPJOYNKGGYXRDEXBXFCAYAFIVJPZFANAMIQJAPXLHKNQYLPWVGTNQZUQRQSFONNZJBJA");

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
    msg.setTimeStamp(0.9388124388547651);
    msg.setSource(48627U);
    msg.setSourceEntity(149U);
    msg.setDestination(11326U);
    msg.setDestinationEntity(189U);
    msg.type = 190U;
    msg.error.assign("ZIFJMOTHSRNDXDJLNJYQQAQRVYOPKJNFLAOGHPSPHSGFNEWIHFAGLWIPV");

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
    msg.setTimeStamp(0.9448777873515936);
    msg.setSource(65398U);
    msg.setSourceEntity(11U);
    msg.setDestination(6882U);
    msg.setDestinationEntity(218U);
    msg.type = 221U;
    msg.error.assign("YLPEIZDICQJNSJMUPNAILMSQVNYQXEZJZOBIDLPOXDJYSGCBLBKFEWGPXXKEDHWHASAOEFVOOWOSYZAJYSQTNURGMVDUVZTMUNBCDUQRXYGHTUBPBTLQSDFZWAYDJOAJQKIYKETQDMFSGFMX");

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
    msg.setTimeStamp(0.628640175597437);
    msg.setSource(28747U);
    msg.setSourceEntity(199U);
    msg.setDestination(50981U);
    msg.setDestinationEntity(200U);
    msg.seq = 52244U;
    msg.sys_dst.assign("FUUVVWPXTVABWCHRCLFLMMEFGG");
    msg.flags = 224U;
    const char tmp_msg_0[] = {100, 74, -63, 96, 2, -72, 1, -95, -29, -113, 8, 106, 124, 96, 71, 105, 83, 110, 119, -3, -82, 62, 72, 20, 82, -59, -124, -122, -89, 18, -15, -103, -6, -128, 53, -16, -31, -119, 7, -101, -107, 43, 93, -81, -12, 47, 118, 52, 49, -73, -125, 10, 70, 66, -87, 2, 61, -14, 48, -114, -27, 88, -107, 103, 48, -24, 66, -65, 47, -93, -3, -31, -29, -68, -95, -83, -111, -89, 80, -53, 76, -75, -72, 75, 81, 53, 79, 28, -32, 9, -81, -62, -21, -104, 52, -52, -104, -35, 111, -99, -97, 117, -82, -82, 31, 83, -71, -115, 79, 68, 12, -48, -49, 100, -18, 124, 25, -31, -47, 41, 88, -31, -39, 71, -30, 47, 74, 66, -111, -49, -67, -38, 79, -6, 119, -76, 3, 92, 1, 34, -39, -116, -75, -68, 37, 42, -105, 96, 112, -111, 59, -89, 17, 106, 66, 47, -120, -1, -30, 86, 28, -51, 3, 121, 72, 122, -114, -92, 7, -115, -65, 64, 102};
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
    msg.setTimeStamp(0.3678385240578944);
    msg.setSource(18995U);
    msg.setSourceEntity(224U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(146U);
    msg.seq = 52388U;
    msg.sys_dst.assign("FNVPPCXGPUHVFJRYAHQEMDSTKWVFFJZBGDCHZSASGXMCARMYWBZQNHRNPJUTLNHZCMYIKUQIRLGWGJGCBIHEZDMMXWIHMLHUGNMXVBOSMKDKCLWGZASJEDUCCWVJAVONSAYDQFANOZOXUXXESYIKTVQTLGKOQQKXYGNPZBSKTVRRVWIBNOYYOVQFLDWITEBXCAWUHJPFEKXLOINPYD");
    msg.flags = 189U;
    const char tmp_msg_0[] = {46, -128, -90, 28, -23, 8, -49, 6, 1, 81, 40, -48, -28, -69, -114, 99, 76, 60, 21, 30, -70, -19, -128, 121, 56, -93, 103, -115, -82, 109, 100, 71, -9, -32, -79, 75, 43, 80, 29, 6, 7, 90, 116, 92, -54, -59, -104, 39, -38, -121, 87, -28, -79, -23, 40, -98, -51, 67, -55};
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
    msg.setTimeStamp(0.17047655947999374);
    msg.setSource(29426U);
    msg.setSourceEntity(121U);
    msg.setDestination(19531U);
    msg.setDestinationEntity(72U);
    msg.seq = 18037U;
    msg.sys_dst.assign("CSLTJCNTSXQIACXJZWKPSJJXTBLEKHYEFZTMXTOIGZDZWHJGOBTPAFFQSACIRYGYLDRSUVXXVXKVBPMKGCQDOUOQELMNODWLFRQTILRBFUOYHKPKPVTTYMMHRGRGKYHZNDVDDZCFRNAAPUNSLJCEZIUQBNMHXAJVPVINFUQOKMLAATSRMWZBWKDUIGKIFIMFENCYARDCNWZBOVCHXIZDXPRFL");
    msg.flags = 217U;
    const char tmp_msg_0[] = {-113, -13, -122, 64, -40, -44, 10, -110, 50, 40, -85, -120, 68, -76, 42, -47, -62, 115, -19, -4, 24, -110, -1, -108, -100, 89, 87, 65, 100, -68, -103, -101, 84, 54, -114, 29, -88, 98, 88, 99, 20, -56, 10, 79, -19, -67, 55, -65, -114, 22, -99, 123, 45, 21, 43, -56, 55, 79, -120, -4, -6, -40, 43, -66, -67, -14, 72, 16, -78, -58, -107, 24, 43, 87, -24, 44, 50, 52, 102, -54, -15, -124, -58, 126, 69, -60, -123, -107, 95, -71, 3, 37, -94, 14, -46, 103, 38, 108, 116, -63, 87, -26, -69, -57, 72, 10, 51, -45, -80, -82, 15, -41, 85, 19, 50, 12, -57, 80, -56, -17, 75, 13, -21, 61, -43, -120, 100, 76, 109, -98, 96, 79, -79, 121, 14, 74, -7, 110, -108, -8, 120, 97, 122, -84, -128, 81, 33, 123, 79, -118, -60, -17, 52, 9, -82, -74, 54, 82, 116, 113, 64, -7, 37, -38, 30, 72, -28, 123, 39, 33, 61, -55, -95, -114, 10, -63, -85, -67, -93, 5, -43, -39, -8, -41, -68, 125, 7, 112, -78, -42, -13, -26, 28, -100, -15, 0, 1, 46, 103, -42, 126, -98, -57, -87, -12, -3, -35, -119, 114, 15, 117, -62, 57, 126, 23, 70, 24, -84, 1, -95, 22, 33, 67, 31, 79, 81, 72, -11, 24, 94, 8, 93, 69, 103, -91, -52, 105, 120, 38, 92};
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
    msg.setTimeStamp(0.9616604461179982);
    msg.setSource(20661U);
    msg.setSourceEntity(17U);
    msg.setDestination(34473U);
    msg.setDestinationEntity(162U);
    msg.sys_src.assign("QRTWFGWECOGHKOFOFTVOQECPBGFWOOFWOQIAVTUMAGUTACGQYBVMOPFMHSYZNRXEQYJBGEWZDJIJMYMPEUGHNTJRAPAYVPTGCQTZJLVROLVNWRCDHXQBZDBLZXXPKBZKYYAHASRWRDPCQVUVXYWAEICIDSIHDKGZNTILUSSBBMABSVSIEXRSQFWILTXRXZJWHJHSIIHKFDNNLCFMDDLKEKYPLVGUHXYUJSCPZKLNQUKN");
    msg.sys_dst.assign("ECWHYMMYURXCEOTWTZXPEUHUOUJCZAQ");
    msg.flags = 196U;
    const char tmp_msg_0[] = {-37, -93, -16, -86, 100, -127, 93, 32, 19, 5, 38, -54, 6, 85, 25, 48, 42, -73, -82, 116, -89, -86, -76, 125, -68, 47, -1, -5, 29, 31, -108, -123, 79, 80, -124, -95, -6, 56, -60, 66, -30, 96, -26, -41, -92, -115, -102, -98, -93, 119, -57, 95, -26, -114, 5, 120, -34, -88, -49, 16, -86, 79, -45, 62, -33, -20, 50, -44, -114, -42, -110, 116, 97, -88, -44, 85, -56, -4, 11, 112, -22, -102, 11, -5, -74, -71, 57, 88, -83, -32, 62, -79, -83, -114, 46, 101, 105, 114, 14, -51, -17, -11, -9, 118, 67, 54, -79, -82, 88, 119, -61, -122, 69, -66, 31, -28, 55, 8, 125, -52, -83, -44, 58, -83, -102, 101, -116, -31, -85, 3, 26, -18, 92, -93, 31, -114, -85, -120, 61, -78, 35, -114, 25, -120, 43, -55, -76, -74, -124, -79, 75, -2, -76, -50, -27, 0, -24, -18, 34, -52, -120, -13, -28, 35, 43, 82, 11, -7, -121, -79, 106, 48, -48, 121, 123, 10, -23, -46, 57, 67, -27, -72, -71, 44, 101, -96, 54, 30, -115, -73, 75, 7, -65, 102, -104, -14, 70, -37, -67, 59, 30, -125, -37, -24, 71, 92, -51, -89, 105, -36, 92, 7, 29, 58, 123, -99, -125, 33, -24, -80, -100, 26, 43, -111, -85, 93, -32, -71, -46, 103, 83, -120, 49, 40, 25, -90, 29};
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
    msg.setTimeStamp(0.5220835226236729);
    msg.setSource(18520U);
    msg.setSourceEntity(135U);
    msg.setDestination(12775U);
    msg.setDestinationEntity(234U);
    msg.sys_src.assign("PNMKTQMPBKFTAQSRPRGFZMDJJFXPRBCJMWUIWNWJTLOQGXMLCOZGPITYCKEGIFGOUDOHUVG");
    msg.sys_dst.assign("GXIIAKPTSUBFBTWBOVZDWNQMFEIHZSXORLUBCKNCPCCOZQHEHQJXYUCFIITRXLJKBHPLLRTRRAACFBEFQOXTTGMQPSURDNLDDIJGWYXKZGXHJLJNNDILSOAMXZAZRIYWLSMPGZBFEJRKWOANHPIJVSVO");
    msg.flags = 72U;
    const char tmp_msg_0[] = {102, -108, -49, -116, 11, 33, 58, -38, 14, -126, -91, 104, -49, -92, 57, -13, -71, 101, 54, 1, -94, -40, 65, -29, -41, 29, -21, 31, -46, 87, -106, 43, -98, -25, 63, -64, 28, -49, 82, -31, -87, -7, -106, 79, -3, 55, 32, -85, 80, 92, 8, 39, -22, -38, 61, -57, -14, -32, 112, 105, 28, 0, -97, 111, 73, -1, -50, -15, 32, -38, -27, 125, -10, 48, -14, 114, -13, -58, -63, -117, 51, -103, -35, -35, 23, -83, 52, -20, -52, -58, 36, -28, 12, 71, 41, 120, -55, 72, -11, 84, 69, 36, -40, -58, -85, -109, 75, 78, 124, -112, 110, -20, -120, -57, -37, 118, 21, 123, 55, 70, 111, -43, 106, -59, 62, 49, -51, -72, 93, -19, -96, 59, -32, 6, -94, -109, 38, 24, 117, -35, 21, -61, -93, -63, 85, 53, 79, 27, 30, 66, -118, -8, -87, -61, 71, -5, 33, 72, -107, 85, -42, -82, -45, -89, 34, -35, 63, -5, 125, -42, 0, 101, 101, 108, 7, -93, 57, 98, -114, 90, -2, 23, 40, -85, -41, -21, -19, -123, 118, 53, 83};
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
    msg.setTimeStamp(0.9067297391817027);
    msg.setSource(12295U);
    msg.setSourceEntity(141U);
    msg.setDestination(20164U);
    msg.setDestinationEntity(89U);
    msg.sys_src.assign("VHLNDQHKWXBEWJCDXSCHYOUJFGAWBJMPLOBAFSIWAJOBFKUMSNGTEGBIKCQLOQUIFMFVASKUPOJNKXZXOLXSSEYVJCNRDKJLCANBJHGRPEERLHGXNAWTVVUQPBKNILTVSTXUMWMQOOCQASUBWFIMIMAHCFICQVZDYZQEWYDOVZTDHQJZTPRDNEGW");
    msg.sys_dst.assign("QCTJRITJCWYFYDAFSWQKNAEDBQMXXUOIUSOMACHQAESKALUDLSCFMRJLMBPTDWUXZEKOCQQBVGJBOGYKTATXMKMOCBRNOOHCAZZFQGIRNDLFFDHVFCWPMZBSHJVPNVVUEMYGYEXKWOIVBUHXOAXHPBLUQJKGKANRRRVYCEXDUJMHSWILFUPJTL");
    msg.flags = 8U;
    const char tmp_msg_0[] = {76, -76, -118, 63, -43, -61, -67, 118, 98, 76, 6, -59, 43, 12, 83, -102, -64, -119, 74, -1, -13, 66, 16, -102, 51, 52, -56, -109, 76, -43, 34, -4, -128, 121, -110, 66, -123, -92, -115, 61, -105, -99, 65, -14, -67, -75, 102, 17, 68, 1, 96, 53, 48, 119, -27, 57, 90, 121, 113, 52, 43, -20, -39, 23};
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
    msg.setTimeStamp(0.9682785816013167);
    msg.setSource(20679U);
    msg.setSourceEntity(40U);
    msg.setDestination(31669U);
    msg.setDestinationEntity(193U);
    msg.seq = 2357U;
    msg.value = 154U;
    msg.error.assign("RZWNKLXVFUMDHIUGGJUCO");

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
    msg.setTimeStamp(0.732008311007154);
    msg.setSource(34817U);
    msg.setSourceEntity(44U);
    msg.setDestination(40466U);
    msg.setDestinationEntity(67U);
    msg.seq = 20554U;
    msg.value = 92U;
    msg.error.assign("QCCKRHMTTPIRBHECQWBDBXPZRJYKKOAHYSEMTZEJXGIWONMHWQUAFTFMSGERKOUATXWMVNTAOHHSPLYFKJGKTCLQPAKDQBVRSNYTZBWLUZXDFIWYEPATLRZXQZCIDGQMS");

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
    msg.setTimeStamp(0.4739443961682325);
    msg.setSource(42007U);
    msg.setSourceEntity(206U);
    msg.setDestination(2070U);
    msg.setDestinationEntity(135U);
    msg.seq = 6573U;
    msg.value = 14U;
    msg.error.assign("DLIJUSHZUCOFTWAZSWULQPNTYKXSLFHNPYJBEEORVEGEOLMGVMBATDWUJSPGTNQGYXVSCQIMIAGDUKEDKTZUHNAZQHUJWPJNLJZBCHQVIZQXQOEUZRNWJXUZLOJMYLWTYEGEDGHFZHTXTXDVIZYIRSROMYOIQGCRMDSRVJVOHIOCBTKMRIBFFMKYANFKDWFSIGCWPNTLAB");

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
    msg.setTimeStamp(0.09075039105240701);
    msg.setSource(17355U);
    msg.setSourceEntity(142U);
    msg.setDestination(41783U);
    msg.setDestinationEntity(97U);
    msg.seq = 46461U;
    msg.sys.assign("EOOKESYTMDAWWGQDXVDAOYUENHQQRNDFIPEFBZQLMDKJSJLKTDBXWVXYRGCGQSAGQNLVEWKYATOQTCGPODDZEMGECDPSWBPIILBIMKURVFHPHNFYBITWXUPBBSRNLZWONZHYYCFGCWOAISJYFICGJVQXOCVQSMUSWNTTSLRZHAMPGBGCYZUXLVPH");
    msg.value = 0.9298304015566073;

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
    msg.setTimeStamp(0.7342163023765342);
    msg.setSource(20888U);
    msg.setSourceEntity(78U);
    msg.setDestination(25945U);
    msg.setDestinationEntity(164U);
    msg.seq = 43484U;
    msg.sys.assign("HUHINLCWCGXQIQUFXPCYVGLJWGRHWZUYTGCEQXGACTRTEFZTVDBJKAJLNRWMNBZURFDWTNQQKINKEDCXA");
    msg.value = 0.8106980772722974;

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
    msg.setTimeStamp(0.4645721103348355);
    msg.setSource(35097U);
    msg.setSourceEntity(67U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(140U);
    msg.seq = 39095U;
    msg.sys.assign("GMKNGCCLHQTSXRLQXQOKDIHAQOPWENQIMQVTYTVNJKAKNMGTP");
    msg.value = 0.28708397999870194;

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
    msg.setTimeStamp(0.906949154452455);
    msg.setSource(32275U);
    msg.setSourceEntity(120U);
    msg.setDestination(20483U);
    msg.setDestinationEntity(39U);
    msg.action = 216U;
    msg.longain = 0.6024286498458468;
    msg.latgain = 0.05851040417911657;
    msg.bondthick = 1046315740U;
    msg.leadgain = 0.6300802829965148;
    msg.deconflgain = 0.4707172858728289;

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
    msg.setTimeStamp(0.7048498478007365);
    msg.setSource(61668U);
    msg.setSourceEntity(166U);
    msg.setDestination(16218U);
    msg.setDestinationEntity(15U);
    msg.action = 119U;
    msg.longain = 0.8763374661520721;
    msg.latgain = 0.11822693727854527;
    msg.bondthick = 1973568077U;
    msg.leadgain = 0.9206232035301238;
    msg.deconflgain = 0.6617438807637626;

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
    msg.setTimeStamp(0.7408514928485916);
    msg.setSource(2731U);
    msg.setSourceEntity(132U);
    msg.setDestination(11534U);
    msg.setDestinationEntity(244U);
    msg.action = 222U;
    msg.longain = 0.2518986828962093;
    msg.latgain = 0.8088663560354056;
    msg.bondthick = 3014276908U;
    msg.leadgain = 0.7925865347745478;
    msg.deconflgain = 0.9328924017272301;

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
    msg.setTimeStamp(0.8920682909894806);
    msg.setSource(54210U);
    msg.setSourceEntity(169U);
    msg.setDestination(24335U);
    msg.setDestinationEntity(169U);
    msg.err_mean = 0.7712172729748868;
    msg.dist_min_abs = 0.050873791602300766;
    msg.dist_min_mean = 0.4821717065968131;

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
    msg.setTimeStamp(0.9372308791824234);
    msg.setSource(63834U);
    msg.setSourceEntity(51U);
    msg.setDestination(20528U);
    msg.setDestinationEntity(191U);
    msg.err_mean = 0.08119257943710334;
    msg.dist_min_abs = 0.9835830652776483;
    msg.dist_min_mean = 0.010133310338889978;

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
    msg.setTimeStamp(0.5442548062456197);
    msg.setSource(26587U);
    msg.setSourceEntity(120U);
    msg.setDestination(26252U);
    msg.setDestinationEntity(101U);
    msg.err_mean = 0.06494438279340276;
    msg.dist_min_abs = 0.4068810772038439;
    msg.dist_min_mean = 0.07074451900349699;

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
    IMC::MessagePart msg;
    msg.setTimeStamp(0.20068857745753277);
    msg.setSource(34127U);
    msg.setSourceEntity(83U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(91U);
    msg.uid = 46U;
    msg.frag_number = 225U;
    msg.num_frags = 95U;
    const char tmp_msg_0[] = {52, 46, -20, 47, -109, -1, 14, 20, -107, -68, 58, -114, 101, 37};
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
    msg.setTimeStamp(0.7971235472629078);
    msg.setSource(38302U);
    msg.setSourceEntity(146U);
    msg.setDestination(39081U);
    msg.setDestinationEntity(221U);
    msg.uid = 145U;
    msg.frag_number = 24U;
    msg.num_frags = 244U;
    const char tmp_msg_0[] = {36, 81, 109, 30, -105, 21, 69, 20, -126, -37, 46, -78, -9, -28, -87, 86, -116, 41, -24, -79, -122, -65, -21, -54, 115, 21, -127, 95, 17, -81, -5, -46, 91, 58, -119, 40, 24, 20, -48, -31, -77, -108, 90, -42, -87, 76, 21, -32, -126, -9, -26, 89, 29, -120, -104, -19, 55, -58, -78, -119, -47, 88, -103, 75, -8, 56, 85, 21, 98, 33, -67, 120, -77, -121, -43, -10, -98, 56, 126, -29, 117, 117, 57, -43, -10, 108, 47, -75, -44, 103, 59, 118, 92, 33, 86, 71, 34, 5, 87, -106, 70, -1, 41, 54, -4, -28, -119, -70, -126, 119, -116, -74, -109, 11, 51, 4, -90, 102, -34, 34, -63, 42, 122, -26, -27, 118, -113, 92, 94, 41, -117, -10, 38, 54, 121, 70, 99, -2, 1, -8, 48, 23, 55, 98, -100, -56, -69, 94, -103, 112, 74, -44, 48, -101, -62, 79, -121, -42, -104, 46, 47, -85, 96, 97, 87, 53, 68, -31, 61, 45, -110, -122, -43, 12, 126, 1, 50, -119, 11, 72, 118, 17};
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
    msg.setTimeStamp(0.6690798710026687);
    msg.setSource(65104U);
    msg.setSourceEntity(107U);
    msg.setDestination(18770U);
    msg.setDestinationEntity(55U);
    msg.uid = 214U;
    msg.frag_number = 246U;
    msg.num_frags = 210U;
    const char tmp_msg_0[] = {99, -8, -102, -93, -120, 126, 47, 60, 108, -45, -90, -14, -1, -8, -55, -82, 40, -2, 78, 6, -95, 64, -120, -127, -56, -13, 113, -57, 87, -23, 108, 1, -107, -26, -14, -22, 50, 30, -83};
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
    msg.setTimeStamp(0.1682363910953777);
    msg.setSource(63968U);
    msg.setSourceEntity(75U);
    msg.setDestination(37975U);
    msg.setDestinationEntity(88U);
    msg.content_type.assign("DQGOUJFEVURQMQTVEAKHWZSKXJBRMPVCMAWTIQZOFMLXBHVADASEYQGHVCSCIQZLVHPBZMMOUAPJTECXNIZK");
    const char tmp_msg_0[] = {-119, 70, -93, 59, 46, -110, -114, 70, -101, 29, -86, 69, 42, 77, 54, -12, 5, 56, -53, -46, -9, -3, 6, -15, -13, 74, 9, 69, 56, -125, -15, 24, -26, -44, 25, 20, 108, 77, 114, 36, -69, -81, -124, 71, -51, 40, -17, -18, -65, 59, -83, -24, -119, -25, -81, 97, -93, 72, 1, 25, -61, 55, -85, -36, -125, -68, 61, -65, 75, 110, 94, 23, 64, 81, 24, 102, -40, -24, 8, 11, 48, 99, 82, 12, 124, 3, -111, -6, 91, 119, -26, -17, 62, 19, 99, 7, 108, 88, -29, 26, -119, -26, -81, 18, -82, 114, -79, 70, -55, 122, 84, -100, -123, -76, 106, -31, 10, -81, 119, 124, -77, 105, 51, 68, 13, 112, 34, -119, -45, -4, -100, -71, -26, -110, -29, -60, 105, -72, 96, 12, 48, -98, -8, 41, 102, -124, -50, -38, 117, -71, -49, 119, 52, -18, 100, 85, -23, 112, 43, 100, -10, -82, -49, 72, 91, 53, -114, -114, 22, 91, -7, -103, 94, -47, -78, -83, 78, -127, 88, 67, 113, 120, 15, 86, 110, 52, 36, -51, -75, -22, 58, -93, -42, -64, 100, 74, 44, 43, 121, -17, -108, 85, 18, 93, 49, 47, -78, 29, 24, -30, -117, -38, -59, -91, -125, 103, -19, -61, 34, 104, -74, -1, -37, -62, -120, -79, 95, 1, -87, 2, 82, -114, -120, -89, -5, 63, -62, 100, -98, -67, 18, 125, 85, 105, 14, -35, 21, -109, -60, 20, -11, -22, 3, -94};
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
    msg.setTimeStamp(0.9720439029534552);
    msg.setSource(61181U);
    msg.setSourceEntity(102U);
    msg.setDestination(25677U);
    msg.setDestinationEntity(111U);
    msg.content_type.assign("OMCRQZKZLYGNMLYKDTWIEYETYUGWOHSFRYTWKZIEREHNMUOXQLDCSKCVZEFPGNKVAIWIZIKYDBEVPDDSZYSOGUKLRFTU");
    const char tmp_msg_0[] = {-83, 125, -119, 74, -109, -100, 120, -89, 75, 31, 41, 8, -89, 43, -109, -77, 16, -45, 29, -30, 19, 118, -67, 91, 44, 45, -70, 122, -113, -116, 57, -107, 16, -19, -26, 101, 9, 85, 109, -67, 79, -66, 58, 114, -13, 106, -112, 79, 104, 30, 105, 88, 82, 22, 63, 15, -98, 94, 41, 76, -80, 36, -1, -16, -98, 84, -1, 26, -46, 16, -57, -79, -32, 43, -120, -4, 82, -105, -115, -120, 103, 108, 4, 77, -100, -61, 86, 56, 38, -71, 1, 38, 81, 5, 84, 120, -76, -118, 81, 32, 114, -73, 83, 77, -38, -97, 56, 72, 5, -72, -92, -5, -14, 66, 84, -65, 44, -72, 47, 26, 55, 32, 71, 15, 88, 12, 106, 68, 88, -65, -14, -104, -40, 91, 16, -36, -50, -80, 3, 6, -25, -13, -26, 109, -38, 104, -79, 80, 76, -7, -77, -61, -100, -107, -123, -13, -33, 99, -56, 102, -123, -73, 45, -16, 43, 6, -79, -61, -48, -123, -118, -15, 68, 75, 29, 106, -25, 48, -119, 124, -1, -65, -38, 108, -80, 103, 59, -47, 46, -61, 77, -91, 24, 71, -70, 72, -43, -10, -14, -43, 70, -109, 11, 98, 115, 23, 93, 110, 98, -80, 59, -111, 116, -22, 80, 85, -127, 27, 105, -11, -126, -113, -45, 48};
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
    msg.setTimeStamp(0.9820645816641833);
    msg.setSource(26253U);
    msg.setSourceEntity(241U);
    msg.setDestination(55624U);
    msg.setDestinationEntity(36U);
    msg.content_type.assign("TPFXYHAFTZXPFGZFVSMURWSKMWQHAQQBRHEOHAAKPGFWBGNSELHSNBLUJWUGJOKERCHUZLHLEREHVUNMVFVAYWGZVZJQXBPIZUZBOSOMPANMMYCXCRMCWDDOMIRYGCTJLRLNENNCVANQYKTPQINSEKBHDBYTXVMWTFDZOKIJPFDBGXDWTWSSJUQYUCRDJKKEKCPAPWATZXAJDROO");
    const char tmp_msg_0[] = {-84, -38, -121, 101, 123, -81, -37, -18, -22, -85, 119, 33, -5, -97, 121, 119, -34, 59, 71};
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
    msg.setTimeStamp(0.0790215081080945);
    msg.setSource(60686U);
    msg.setSourceEntity(17U);
    msg.setDestination(24823U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.18368485441505955);
    msg.setSource(57432U);
    msg.setSourceEntity(139U);
    msg.setDestination(49552U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.5958889765109828);
    msg.setSource(51331U);
    msg.setSourceEntity(104U);
    msg.setDestination(60000U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.5863991148539677);
    msg.setSource(15392U);
    msg.setSourceEntity(74U);
    msg.setDestination(65008U);
    msg.setDestinationEntity(236U);
    msg.target = 2002U;
    msg.bearing = 0.434393546756488;
    msg.elevation = 0.46726853041655436;

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
    msg.setTimeStamp(0.4076935753605513);
    msg.setSource(32484U);
    msg.setSourceEntity(239U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(231U);
    msg.target = 1495U;
    msg.bearing = 0.5309589809206068;
    msg.elevation = 0.09186396323164447;

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
    msg.setTimeStamp(0.5003063211986893);
    msg.setSource(16253U);
    msg.setSourceEntity(145U);
    msg.setDestination(40889U);
    msg.setDestinationEntity(165U);
    msg.target = 62753U;
    msg.bearing = 0.9023454347571568;
    msg.elevation = 0.6621068848252631;

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
    msg.setTimeStamp(0.6056133515591722);
    msg.setSource(40666U);
    msg.setSourceEntity(209U);
    msg.setDestination(18101U);
    msg.setDestinationEntity(79U);
    msg.target = 29214U;
    msg.x = 0.7798318154700834;
    msg.y = 0.19045168448424576;
    msg.z = 0.5849482700650352;

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
    msg.setTimeStamp(0.5970245593409886);
    msg.setSource(19107U);
    msg.setSourceEntity(94U);
    msg.setDestination(57981U);
    msg.setDestinationEntity(128U);
    msg.target = 43559U;
    msg.x = 0.46516083764432825;
    msg.y = 0.17848987328503285;
    msg.z = 0.35440669980285877;

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
    msg.setTimeStamp(0.43699109200203956);
    msg.setSource(23034U);
    msg.setSourceEntity(49U);
    msg.setDestination(39660U);
    msg.setDestinationEntity(90U);
    msg.target = 8054U;
    msg.x = 0.7722078650216321;
    msg.y = 0.4119429555331313;
    msg.z = 0.2820015364773757;

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
    msg.setTimeStamp(0.11280962536354855);
    msg.setSource(35632U);
    msg.setSourceEntity(219U);
    msg.setDestination(7696U);
    msg.setDestinationEntity(217U);
    msg.target = 45456U;
    msg.lat = 0.9185058454948319;
    msg.lon = 0.8533274730096435;
    msg.z_units = 95U;
    msg.z = 0.7514727465786465;

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
    msg.setTimeStamp(0.3496394966904406);
    msg.setSource(25710U);
    msg.setSourceEntity(138U);
    msg.setDestination(12836U);
    msg.setDestinationEntity(1U);
    msg.target = 57689U;
    msg.lat = 0.00741075947744485;
    msg.lon = 0.8147837688981777;
    msg.z_units = 202U;
    msg.z = 0.6187538654350911;

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
    msg.setTimeStamp(0.12577072010271861);
    msg.setSource(9927U);
    msg.setSourceEntity(28U);
    msg.setDestination(11385U);
    msg.setDestinationEntity(100U);
    msg.target = 12452U;
    msg.lat = 0.5362509395096615;
    msg.lon = 0.1944795766993036;
    msg.z_units = 205U;
    msg.z = 0.8971284344106627;

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

  return test.getReturnValue();
}
