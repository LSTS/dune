//***************************************************************************
// Copyright 2007-2017 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: da7d6a5b11db2e9741435aa292a5a5d1                            *
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
    msg.setTimeStamp(0.331051523888);
    msg.setSource(47867U);
    msg.setSourceEntity(164U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(250U);
    msg.state = 47U;
    msg.flags = 80U;
    msg.description.assign("IWRCYLEQYIIECNOWWSVBMYADOEOEEMXQUSKZJBGWUSTSODHTZCQQAISBDZHJDLHUFALHWYGJBVTXYPERXJFVRJVHFJDMLVGWRENNRTIWGIXTPCOXZVCKADRFTSQGMSXVEQT");

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
    msg.setTimeStamp(0.603227454289);
    msg.setSource(20822U);
    msg.setSourceEntity(89U);
    msg.setDestination(5008U);
    msg.setDestinationEntity(211U);
    msg.state = 13U;
    msg.flags = 150U;
    msg.description.assign("VTPDZAUCXPYEJIQKGFXNTNROCHUGZEEPGAYVNHQYBLYNTOMB");

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
    msg.setTimeStamp(0.471910964944);
    msg.setSource(52134U);
    msg.setSourceEntity(136U);
    msg.setDestination(39041U);
    msg.setDestinationEntity(17U);
    msg.state = 147U;
    msg.flags = 220U;
    msg.description.assign("EEMBEYHJSXQBFPGLRDYGBXTQCNODOAGZCS");

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
    msg.setTimeStamp(0.0635048504017);
    msg.setSource(50387U);
    msg.setSourceEntity(168U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.718425393814);
    msg.setSource(9720U);
    msg.setSourceEntity(112U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.353691078867);
    msg.setSource(36632U);
    msg.setSourceEntity(88U);
    msg.setDestination(38718U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.292600701715);
    msg.setSource(23411U);
    msg.setSourceEntity(223U);
    msg.setDestination(2561U);
    msg.setDestinationEntity(70U);
    msg.id = 244U;
    msg.label.assign("QRJCXRUMKLYVETWMPARTUEMFEOSMSSUOYHWTFPUYWOGLKTPSUHSQCQALMFVEZKGWMSVAXZYKUAIXOVCNTSACNDFIPWDIRFOERIIJZPQCJXNOGNVQXTBGZXWTLHEFDIRNRCVNHFYKODAJBVPETGLDSWJBTGJBQFLZEKQDGCEDCZVIJHGEPQYZZUBAQQZJCZLLBNAPHWX");
    msg.component.assign("PZUFSTEMYOCVKIGIQECAXPPTN");
    msg.act_time = 50062U;
    msg.deact_time = 20132U;

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
    msg.setTimeStamp(0.813345780404);
    msg.setSource(8048U);
    msg.setSourceEntity(2U);
    msg.setDestination(31799U);
    msg.setDestinationEntity(217U);
    msg.id = 29U;
    msg.label.assign("AAPTLOGALIEUILMTRMWZCQWTOUAVMJWKCORBUAOZMNQQXKAHVTCHNLVHMXUFKBBWSIXXQSFCWKEKTQOGJDAIFQXUKSEYUGGJSZWCWWZLBEYENEQPGFXPVZ");
    msg.component.assign("JQWOSZOXZFRSPEVVKQHNTEUHIWWEQSOUBSGBEGXTRJQJHIFKUMRZPWBDISTJKYDUTBQUSMHHWEJRAPCLGTNOQQSLVVFDUBILNXASLEFBVHVXECEYRZQFAXYFGZULRRFPNTMKTGJBCPXWCJNHNODNAWXZBNZMDPIOIZGCWKMMOTUUYJVGAIFCDGIOSLLAKRDWZULTA");
    msg.act_time = 49846U;
    msg.deact_time = 29495U;

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
    msg.setTimeStamp(0.56516325216);
    msg.setSource(35346U);
    msg.setSourceEntity(34U);
    msg.setDestination(33822U);
    msg.setDestinationEntity(207U);
    msg.id = 106U;
    msg.label.assign("GLNOURVBXJMGDZNQHEFXQBYLBHWMPFVZDYDSKGVHQ");
    msg.component.assign("NBRBRCNMMGKTLBFAIIFDQULGWCCZEWSIGMHILVJWWZUJQKPUVMTVRGJVFRYCNIKVRZOMWYEEHGXNYTUPZIDTJHUMABAGOHWLOZZQGSCDEVKCZURQAFAOVPNHZYFQXNLCBWMDXLXJYWHYHIVJQ");
    msg.act_time = 21002U;
    msg.deact_time = 36728U;

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
    msg.setTimeStamp(0.0863269772349);
    msg.setSource(53225U);
    msg.setSourceEntity(32U);
    msg.setDestination(11232U);
    msg.setDestinationEntity(38U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.104997556552);
    msg.setSource(47569U);
    msg.setSourceEntity(112U);
    msg.setDestination(12248U);
    msg.setDestinationEntity(37U);
    msg.id = 204U;

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
    msg.setTimeStamp(0.269962420584);
    msg.setSource(31216U);
    msg.setSourceEntity(131U);
    msg.setDestination(64688U);
    msg.setDestinationEntity(32U);
    msg.id = 151U;

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
    msg.setTimeStamp(0.575884182466);
    msg.setSource(65122U);
    msg.setSourceEntity(207U);
    msg.setDestination(9610U);
    msg.setDestinationEntity(38U);
    msg.op = 116U;
    msg.list.assign("VTPXGJJPHSDZMOCSOETTVTJHJMBUXAAIALOLPLRHQYHOQOSR");

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
    msg.setTimeStamp(0.753806455944);
    msg.setSource(46050U);
    msg.setSourceEntity(155U);
    msg.setDestination(4222U);
    msg.setDestinationEntity(147U);
    msg.op = 146U;
    msg.list.assign("XTFIBOODXHONWREJPIDZUKFPXILMDILIMUMKBUTDVTOZPGMJEMFEVICXCUQBYFGTNRNSBWASEHVFLVQGAIXWEKKQUWBUPSGRQIJFHSJCBGCGJPRQRBKMSKXVACAXEJ");

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
    msg.setTimeStamp(0.551591211616);
    msg.setSource(50219U);
    msg.setSourceEntity(79U);
    msg.setDestination(8173U);
    msg.setDestinationEntity(64U);
    msg.op = 36U;
    msg.list.assign("TMSKHNEURJTNTUIXQJXQIGVMXBWLOYPFZJYABCDEATCGFOBNOUKZENRMWIIUJZMSPHGLQHVES");

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
    msg.setTimeStamp(0.18161707087);
    msg.setSource(56942U);
    msg.setSourceEntity(41U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(125U);
    msg.value = 2U;

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
    msg.setTimeStamp(0.459367062968);
    msg.setSource(45829U);
    msg.setSourceEntity(105U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(158U);
    msg.value = 109U;

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
    msg.setTimeStamp(0.3295951017);
    msg.setSource(28702U);
    msg.setSourceEntity(248U);
    msg.setDestination(17329U);
    msg.setDestinationEntity(121U);
    msg.value = 233U;

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
    msg.setTimeStamp(0.0491276810669);
    msg.setSource(4443U);
    msg.setSourceEntity(243U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(166U);
    msg.consumer.assign("LQRBGNKSSNBFGBLVUISIWOGBSENJHQJQZTRVACNXREZMWFIAHHKYUSNMXIDCJEPYDQFCCBQHLORSPGDUJZLVPDGFVMAXAURGATQUTPHMQGCOSS");
    msg.message_id = 454U;

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
    msg.setTimeStamp(0.0840982346787);
    msg.setSource(4370U);
    msg.setSourceEntity(155U);
    msg.setDestination(14262U);
    msg.setDestinationEntity(57U);
    msg.consumer.assign("OJKTRTTUGLMAJBSEHFAODSDGPJAIWOBPYEMVDJJFZTHDGAFWKNBLMUHBBTSJMDKWBRQLQQFSKUFXMKNONZMHIMAMGLTWCHTHOFXRRYFPTEWWPVIPNSULRSFUARIIHCGFCWCCQIDCJMRHRCYGTCAEREPEGUGZFAYSOQZZTNYWBXXJDXAQNVBGAIUULEZZ");
    msg.message_id = 19432U;

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
    msg.setTimeStamp(0.877967501044);
    msg.setSource(34109U);
    msg.setSourceEntity(22U);
    msg.setDestination(22275U);
    msg.setDestinationEntity(196U);
    msg.consumer.assign("JQMIOHMIXKJSCQYFZQADSJGBI");
    msg.message_id = 41333U;

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
    msg.setTimeStamp(0.0196554452894);
    msg.setSource(39295U);
    msg.setSourceEntity(19U);
    msg.setDestination(62795U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.798482158654);
    msg.setSource(57900U);
    msg.setSourceEntity(127U);
    msg.setDestination(51175U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.23800004668);
    msg.setSource(22270U);
    msg.setSourceEntity(35U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.344001452976);
    msg.setSource(44462U);
    msg.setSourceEntity(215U);
    msg.setDestination(33546U);
    msg.setDestinationEntity(7U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.071391411916);
    msg.setSource(22907U);
    msg.setSourceEntity(172U);
    msg.setDestination(25748U);
    msg.setDestinationEntity(87U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.986828691082);
    msg.setSource(21214U);
    msg.setSourceEntity(137U);
    msg.setDestination(41408U);
    msg.setDestinationEntity(51U);
    msg.op = 208U;

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
    msg.setTimeStamp(0.117921795589);
    msg.setSource(19653U);
    msg.setSourceEntity(228U);
    msg.setDestination(33044U);
    msg.setDestinationEntity(28U);
    msg.total_steps = 61U;
    msg.step_number = 213U;
    msg.step.assign("HSAPJAZUGMJOIPKOWBCJORBHYDQNKGLFEHPGUKKFMTJCIMRNWCTZOCYH");
    msg.flags = 37U;

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
    msg.setTimeStamp(0.432185994408);
    msg.setSource(27214U);
    msg.setSourceEntity(155U);
    msg.setDestination(19763U);
    msg.setDestinationEntity(109U);
    msg.total_steps = 54U;
    msg.step_number = 43U;
    msg.step.assign("CSIWRKYLNSDUGOKAWYZJUM");
    msg.flags = 29U;

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
    msg.setTimeStamp(0.739155541024);
    msg.setSource(44927U);
    msg.setSourceEntity(95U);
    msg.setDestination(45332U);
    msg.setDestinationEntity(30U);
    msg.total_steps = 91U;
    msg.step_number = 170U;
    msg.step.assign("AJIONCDFNCWJNSQHBPDWFHPZUCIVOLKCLUBOREFAQYQKLTKJUYAINAVPXVVGMQURJEWDKWBWDHNZKOJLPRSFBUXZGMQGBIZFTFCXMJRKXIHTPVERMSZXBENRIMYISMS");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.0975217071389);
    msg.setSource(1432U);
    msg.setSourceEntity(74U);
    msg.setDestination(21911U);
    msg.setDestinationEntity(25U);
    msg.state = 143U;
    msg.error.assign("RZWNUBNNQXZGSTCUJPKPONIESLAJYXRWURVKCDPEOALNAIVTQXOOTYRAJHDIDUGLKINWQMDLMDMCTZCMEWNDYVKHAEYUGGZJFXBUOZOIGAQFYNBPEGBJLJVHFHQSFXVTWVXCGAHQRMFRPLOBQGIYSZUUBPLKZWQTCPTXRHODMWSYIVFZSOWGHXXBIHMVUMQFDJNBUKFISLIRJCPVRYDCFTDEMLEASSBYRAEKEWG");

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
    msg.setTimeStamp(0.798345352373);
    msg.setSource(43628U);
    msg.setSourceEntity(221U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(206U);
    msg.state = 233U;
    msg.error.assign("UUVHVWHCSASJJYBIJZAQCWMWFGITVBTFFCZGKLVAWBYJTPGRSQNZIWDOOMVVDZQKLVIYKNQBVIBRDRYSNPYTGPQKFRKNBEEPNMXZLSRIGNPHCFZEBMYPPCSPJQEBHOJDOXKXKOVWUGNILZMZQXYFLMMPCNGRNTHAXAJUYFXDOHOADXRYEQBGUSUPQLOJUKITVHWMCEFDADTCGXSTCRRKXALIOEWKGDXLEQLDCY");

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
    msg.setTimeStamp(0.887898030203);
    msg.setSource(4186U);
    msg.setSourceEntity(167U);
    msg.setDestination(7428U);
    msg.setDestinationEntity(75U);
    msg.state = 45U;
    msg.error.assign("PUZYYLSZUBDAPZOTLYCJLPEUBEXPXXDMOWDUKWYNIRHXJJUZKTUEACPBNZAIIBEBFBVBQFTKYTSLGBKSLFHIQLSJCFI");

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
    msg.setTimeStamp(0.359054811303);
    msg.setSource(57031U);
    msg.setSourceEntity(152U);
    msg.setDestination(46752U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.661687769312);
    msg.setSource(23937U);
    msg.setSourceEntity(179U);
    msg.setDestination(10774U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.65479550979);
    msg.setSource(45268U);
    msg.setSourceEntity(88U);
    msg.setDestination(44994U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.531186797154);
    msg.setSource(21329U);
    msg.setSourceEntity(182U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(198U);
    msg.op = 172U;
    msg.speed_min = 0.791167234959;
    msg.speed_max = 0.383690078632;
    msg.long_accel = 0.866268719832;
    msg.alt_max_msl = 0.882504579058;
    msg.dive_fraction_max = 0.841574295975;
    msg.climb_fraction_max = 0.565198688416;
    msg.bank_max = 0.730304421986;
    msg.p_max = 0.577430324883;
    msg.pitch_min = 0.0201980503398;
    msg.pitch_max = 0.637558925197;
    msg.q_max = 0.616330866082;
    msg.g_min = 0.748633421599;
    msg.g_max = 0.792081188259;
    msg.g_lat_max = 0.906466925821;
    msg.rpm_min = 0.854437513786;
    msg.rpm_max = 0.23894263867;
    msg.rpm_rate_max = 0.180578582616;

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
    msg.setTimeStamp(0.60027359548);
    msg.setSource(53261U);
    msg.setSourceEntity(166U);
    msg.setDestination(22843U);
    msg.setDestinationEntity(144U);
    msg.op = 249U;
    msg.speed_min = 0.598749658873;
    msg.speed_max = 0.364178201963;
    msg.long_accel = 0.96735521703;
    msg.alt_max_msl = 0.32981533274;
    msg.dive_fraction_max = 0.236274080785;
    msg.climb_fraction_max = 0.612364651763;
    msg.bank_max = 0.10530906542;
    msg.p_max = 0.481359641992;
    msg.pitch_min = 0.212258574767;
    msg.pitch_max = 0.169910857178;
    msg.q_max = 0.862434248532;
    msg.g_min = 0.472928542232;
    msg.g_max = 0.479963704623;
    msg.g_lat_max = 0.279320300839;
    msg.rpm_min = 0.886844208938;
    msg.rpm_max = 0.459441817073;
    msg.rpm_rate_max = 0.621720893563;

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
    msg.setTimeStamp(0.571813823292);
    msg.setSource(32927U);
    msg.setSourceEntity(51U);
    msg.setDestination(51744U);
    msg.setDestinationEntity(146U);
    msg.op = 156U;
    msg.speed_min = 0.594145682376;
    msg.speed_max = 0.0922098603325;
    msg.long_accel = 0.35644190406;
    msg.alt_max_msl = 0.529417305813;
    msg.dive_fraction_max = 0.402965276152;
    msg.climb_fraction_max = 0.119522207618;
    msg.bank_max = 0.412991127131;
    msg.p_max = 0.507227743705;
    msg.pitch_min = 0.635086035726;
    msg.pitch_max = 0.73412426658;
    msg.q_max = 0.135721646319;
    msg.g_min = 0.521042235065;
    msg.g_max = 0.656074779397;
    msg.g_lat_max = 0.437827371069;
    msg.rpm_min = 0.275512158974;
    msg.rpm_max = 0.753121247487;
    msg.rpm_rate_max = 0.261257449055;

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
    msg.setTimeStamp(0.434850916299);
    msg.setSource(60714U);
    msg.setSourceEntity(223U);
    msg.setDestination(62017U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.116750881222);
    msg.setSource(41044U);
    msg.setSourceEntity(217U);
    msg.setDestination(18177U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.801781342446);
    msg.setSource(38757U);
    msg.setSourceEntity(26U);
    msg.setDestination(46743U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.242244126386);
    msg.setSource(7799U);
    msg.setSourceEntity(42U);
    msg.setDestination(11914U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.206668427102;
    msg.lon = 0.888294421857;
    msg.height = 0.732666578623;
    msg.x = 0.459577186222;
    msg.y = 0.477804865425;
    msg.z = 0.930368672194;
    msg.phi = 0.275314132623;
    msg.theta = 0.703128321398;
    msg.psi = 0.720929734807;
    msg.u = 0.992945789765;
    msg.v = 0.177063829989;
    msg.w = 0.0124247155382;
    msg.p = 0.240093715359;
    msg.q = 0.591471481983;
    msg.r = 0.482175757225;
    msg.svx = 0.13831213099;
    msg.svy = 0.744817369171;
    msg.svz = 0.354195218878;

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
    msg.setTimeStamp(0.66396717331);
    msg.setSource(27537U);
    msg.setSourceEntity(237U);
    msg.setDestination(3770U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.98217319219;
    msg.lon = 0.58039657751;
    msg.height = 0.612692042854;
    msg.x = 0.881409373435;
    msg.y = 0.668258798609;
    msg.z = 0.0771620224165;
    msg.phi = 0.535385617208;
    msg.theta = 0.949930133527;
    msg.psi = 0.967974542834;
    msg.u = 0.131133807879;
    msg.v = 0.139516802209;
    msg.w = 0.308852482552;
    msg.p = 0.0416781948022;
    msg.q = 0.417097388479;
    msg.r = 0.996004049244;
    msg.svx = 0.81650568647;
    msg.svy = 0.522834678564;
    msg.svz = 0.595451718977;

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
    msg.setTimeStamp(0.928763953061);
    msg.setSource(46850U);
    msg.setSourceEntity(160U);
    msg.setDestination(62371U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.29692355515;
    msg.lon = 0.296478555773;
    msg.height = 0.51039694917;
    msg.x = 0.309258594974;
    msg.y = 0.990342015693;
    msg.z = 0.780623660682;
    msg.phi = 0.627239620347;
    msg.theta = 0.797654193609;
    msg.psi = 0.661020365394;
    msg.u = 0.648743712073;
    msg.v = 0.0609025581963;
    msg.w = 0.576996692732;
    msg.p = 0.0426593772264;
    msg.q = 0.254870979277;
    msg.r = 0.675217794278;
    msg.svx = 0.771957088352;
    msg.svy = 0.485161912672;
    msg.svz = 0.525286818156;

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
    msg.setTimeStamp(0.721576775885);
    msg.setSource(36256U);
    msg.setSourceEntity(162U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(90U);
    msg.op = 123U;
    msg.entities.assign("HPCDECTQNHUPFXWKGAOSUVTEMCLFYLOZALVUTTBROYIDFLXYHCZBDKPUBFADDYWXLQIKMPXBISNTONIXGAHRMKBPXQVHAOANZMVJKFVBZNWZZKJGLFGLLQXSSOYOEGWDHTGDJMIFRPYKLJYECTAMCRYQIRJPZQYXTSCIPNFCQLMQQSBJNOJZBCUBKVFPBEOREIKVH");

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
    msg.setTimeStamp(0.115325449398);
    msg.setSource(3061U);
    msg.setSourceEntity(14U);
    msg.setDestination(13946U);
    msg.setDestinationEntity(16U);
    msg.op = 59U;
    msg.entities.assign("EBYDMDJETCZGGISWQMVJHAMOXALYNADRIKSVBJVXMHLFNSIPVDXL");

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
    msg.setTimeStamp(0.427635390926);
    msg.setSource(24705U);
    msg.setSourceEntity(170U);
    msg.setDestination(8094U);
    msg.setDestinationEntity(242U);
    msg.op = 153U;
    msg.entities.assign("GWHBKRZWCKQCINIDYBPKVGSKYJVNZAEDBCPIBTUBMFJQLGVOVGZ");

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
    msg.setTimeStamp(0.88866572905);
    msg.setSource(41714U);
    msg.setSourceEntity(110U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(177U);
    msg.type = 251U;
    msg.speed = 10509U;
    const char tmp_msg_0[] = {-81, -33, -18, -79, -128, -6, 107, 6, 106, -91, -5, 40, 76, 65, 58, 38, 30, 76, 38, 5, 54, 86, 55, 65, -41, -102, 116, 62, 93, -47, 94, -47, -68, 37, -30, 19, 47, -106, -97, 39, 36, 84, -87, 75, 103, -101, 2, 32, 55, -124, 97, 34, -16, 22, 117, -55, 2, -125, 76, 45, -90, -38, 108, 39, -44, -83, -10, 99, -120, 77, -94, 96, 96, 57, 79, -65, -51};
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
    msg.setTimeStamp(0.382661924215);
    msg.setSource(10941U);
    msg.setSourceEntity(203U);
    msg.setDestination(7582U);
    msg.setDestinationEntity(69U);
    msg.type = 162U;
    msg.speed = 15117U;
    const char tmp_msg_0[] = {94, -77, 119, -79, -46, 75, 99, -33, 120, 94, 94, 62, -109, -101, -19, -53, -101, -42, -5, -116, 39, -123, -14, -104, -106, 88, 94, 102, 85, -49, 123, -4, 80, 94, -45, 32, 18, 121, -68, -126, -45, 11, -126, -68, 31, -74, -36, -96, 112, -29, -106, -120, 57, -40, 64, -98, -43, -60, -7, 61, -121, 91, -28, 16, 57, 107, 68, 79, 43, -115, 53, 103, 101, -89, 56, -36, 50, 37, 106, -122, -8, -46, 116, -79, 8, 24, -56, -1, 51, 7, 38, 96, 108, -8, -126, 111, -121, 126, -72, -96, 21, 72, -16, -121, 32, -97, 8, 123, 50, 57, 34, -81, 71, 102, 81, -80, 111, -61, -111, 118, 9, -23, -4, 66, 103, 59, 18, 24, -68, -94, -90, -108, 79, 23, 116, 15, 84, -101, 58, 36, 80, -108, -117, -106, 107, 34, 22, -92, -100, -113, 92, 67, 38, 27, 121, -52, -42, -36, -45, 47, -81, 123, 14, 35, -61, 97, -21, 105, -68, 37, -66, -120, 67, 8, -98, -110, 87, 97, -32, -58, 67, -33, -14, 46, -122, 74, -118, -14, -26, 65, -11, 9, -45, 28, 111, -77, 21};
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
    msg.setTimeStamp(0.59123008165);
    msg.setSource(53401U);
    msg.setSourceEntity(84U);
    msg.setDestination(20050U);
    msg.setDestinationEntity(172U);
    msg.type = 56U;
    msg.speed = 23364U;
    const char tmp_msg_0[] = {-91, -64, 46, 121, 118, -34, 93, -102, -74, -77, -116, 101, -92, 115, 39, -46, 59, 30, -8, 118, 46, 61, -49, 35, 108, -39, -114, 35, -78, -10, 80, -7, 7, -73, -56, -24, 12, -27, 1, -62, -123, -77, -79, -16, 91, -103, 65, 39, -53, -84, 28, -116, -120, 61, 118, -38, 118, -25, 87, 42, -27, -128, -12, -95, 125, 54, 80, -10, 92, 18, 96, 75, 32, 24, 30, -92, 111, 110, -47, 76, -55, -10, -107, 88, 70, -127, 26, 73, 116, 109, -82, -70, 94, -13, -12, 126, -40, -31, -52, 107, 47, -128, 32, -128, 120, -62, -99, -59, -33, 89, -57, -59, -68, -58, -118, -21, -20, 63, 97, -30, -93, 16, -46, -95, 29, -23, 51, 91, 22, 66, -110, -99, -102, -82, 4, 30, -12, -50, 103, 113, -58, -11, 101, -113, 3, 90, -93, 67, 86, -38, 119, -23, -71, -14, -79, 98, -15, -87, -16, -5, -70, 30, 4, 15, 65, 65, -74, -69, -76, 111, -29, -82, 76, 97, 64, 98, -71, -47};
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
    msg.setTimeStamp(0.666708701374);
    msg.setSource(24092U);
    msg.setSourceEntity(222U);
    msg.setDestination(43810U);
    msg.setDestinationEntity(171U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.901967532289;
    msg.bank2p_pgain = 0.329800504338;

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
    msg.setTimeStamp(0.991174498913);
    msg.setSource(25474U);
    msg.setSourceEntity(54U);
    msg.setDestination(19793U);
    msg.setDestinationEntity(150U);
    msg.op = 160U;
    msg.tas2acc_pgain = 0.590869505965;
    msg.bank2p_pgain = 0.380301470867;

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
    msg.setTimeStamp(0.448417165762);
    msg.setSource(20175U);
    msg.setSourceEntity(203U);
    msg.setDestination(12790U);
    msg.setDestinationEntity(5U);
    msg.op = 178U;
    msg.tas2acc_pgain = 0.183065913156;
    msg.bank2p_pgain = 0.586496806693;

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
    msg.setTimeStamp(0.701160258084);
    msg.setSource(48955U);
    msg.setSourceEntity(232U);
    msg.setDestination(13014U);
    msg.setDestinationEntity(161U);
    msg.available = 3292128350U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.933361574927);
    msg.setSource(3627U);
    msg.setSourceEntity(98U);
    msg.setDestination(30939U);
    msg.setDestinationEntity(62U);
    msg.available = 716142719U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.252144374393);
    msg.setSource(28062U);
    msg.setSourceEntity(165U);
    msg.setDestination(36510U);
    msg.setDestinationEntity(236U);
    msg.available = 3228757972U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.732858403699);
    msg.setSource(63949U);
    msg.setSourceEntity(106U);
    msg.setDestination(24509U);
    msg.setDestinationEntity(18U);
    msg.op = 242U;
    msg.snapshot.assign("ZFFKPFAHAHIRVAZUTDMNWLFCVSMEEHVTOGJYDIJZHOK");
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("PVIBBGJAIUQBTTZLDWUFJPHMIGXHNSGVUMOOYRHYPBGNWIHDUIMLZO");
    tmp_msg_0.dist = 0.16010905036;
    tmp_msg_0.err = 0.824708551029;
    tmp_msg_0.ctrl_imp = 0.110245468289;
    tmp_msg_0.rel_dir_x = 0.498007982597;
    tmp_msg_0.rel_dir_y = 0.165971671483;
    tmp_msg_0.rel_dir_z = 0.869324452151;
    tmp_msg_0.err_x = 0.0681244238641;
    tmp_msg_0.err_y = 0.998194491544;
    tmp_msg_0.err_z = 0.777169001778;
    tmp_msg_0.rf_err_x = 0.484705706502;
    tmp_msg_0.rf_err_y = 0.852236967098;
    tmp_msg_0.rf_err_z = 0.308131165233;
    tmp_msg_0.rf_err_vx = 0.203389653486;
    tmp_msg_0.rf_err_vy = 0.393030253369;
    tmp_msg_0.rf_err_vz = 0.946984179611;
    tmp_msg_0.ss_x = 0.842007759537;
    tmp_msg_0.ss_y = 0.122031490453;
    tmp_msg_0.ss_z = 0.157940238287;
    tmp_msg_0.virt_err_x = 0.226333040678;
    tmp_msg_0.virt_err_y = 0.116153262867;
    tmp_msg_0.virt_err_z = 0.0800614618529;
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
    msg.setTimeStamp(0.293968511142);
    msg.setSource(17927U);
    msg.setSourceEntity(142U);
    msg.setDestination(11785U);
    msg.setDestinationEntity(49U);
    msg.op = 71U;
    msg.snapshot.assign("GBKMIWXLUKJVTPZULXPDQVWVBYJNIZRNDGJLSJJXBWFBLCAQSKGZLKASBMNRYYXFZBSMCUVNCEDGQDTAPFSPTGDHYXURFTSAJHRHLYAHTPLFDEZVFBHIJBOKRKGIPUHKVQULHAQJEMECOZOAZWPGWISYINGZSNFMRIENKLRQ");
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 60U;
    tmp_msg_0.period = 3186623330U;
    tmp_msg_0.duty_cycle = 164131449U;
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
    msg.setTimeStamp(0.565633257636);
    msg.setSource(22653U);
    msg.setSourceEntity(227U);
    msg.setDestination(29477U);
    msg.setDestinationEntity(144U);
    msg.op = 162U;
    msg.snapshot.assign("PWGPOCZFIKKBTMZDKVBOMRDZTVLELSQWYHQAAARNKCSAYLBOACLXHXCWNLEUHUAJXLQCEZRHCBXUZWZIKGSIRUWIQOLXJSYRXPNYNCTCEZPSEFVADGVXYUIQMHFPMPRTMTPLRGDIDAY");
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 50824U;
    tmp_msg_0.priority = 4;
    tmp_msg_0.x = -3022;
    tmp_msg_0.y = -29932;
    tmp_msg_0.z = 12716;
    tmp_msg_0.t = 19201;
    IMC::Rpm tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = -6227;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.0520081086666);
    msg.setSource(45431U);
    msg.setSourceEntity(129U);
    msg.setDestination(39437U);
    msg.setDestinationEntity(34U);
    msg.op = 103U;
    msg.name.assign("MTLKFXOEMZNUCRVNLQXRSNZATZLHSMKMJQQOOSONGEDZUCRCNXWLJCNGFTLPWZVMSFACPSBXYWALMFATFELMTWXHVLWEHZKWXOPNJIDRBDFUGDEJPUXQHJVSHKYKPNYFJDOAWVXE");

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
    msg.setTimeStamp(0.337290122191);
    msg.setSource(45837U);
    msg.setSourceEntity(72U);
    msg.setDestination(17137U);
    msg.setDestinationEntity(183U);
    msg.op = 16U;
    msg.name.assign("TAPJPMZXXWLRURWSJFKSQXOFLMKBSTEXIFRFNUIEPCYLSDMAPQVWOZUFIIIHSGGVGUBBWNBLYRIVOKHHHUECIAAP");

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
    msg.setTimeStamp(0.312507199772);
    msg.setSource(272U);
    msg.setSourceEntity(8U);
    msg.setDestination(64771U);
    msg.setDestinationEntity(169U);
    msg.op = 120U;
    msg.name.assign("OBEUKUMPJCWNBVYOTGGIVYDSUEMFHWWSIGXRNFBRZXFASCIJHWIRYWHTKUAKSONRQEXENSBPDIIXMPFHVWLNQUDTAVUBMTTQONLFCTJRSNXIGPNQDEFVBYMOLQTHOQEHWVGKKPAGRUSXMJZFJUJIGCORMPBQAQWPZKYACKVNETNLYQSRAVHOZJD");

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
    msg.setTimeStamp(0.91191415977);
    msg.setSource(739U);
    msg.setSourceEntity(110U);
    msg.setDestination(44310U);
    msg.setDestinationEntity(111U);
    msg.type = 131U;
    msg.htime = 0.918914587224;
    msg.context.assign("UJTRDVNVJXWCMFXNPNCKHCQQMPVJKVSRXGSYIIXLZLRDQUKZKOIYRUYBTFUOABKOGNFQLNBDTWLPEIMFPYAKUDYHQNJTMODAFBHLIHBZXHHALYBBGCSYMIFREKJSTPRPNTQESGVXWHPUEMAUPTAZRWCDFEPAHLKLZS");
    msg.text.assign("XBYMXWRLSAPTFYSPGUMDWYPNZDVEOIOENNCALEFZNMQXRTLHJDGCOENBSEGIFGIUJQPCBKZMWACJKHPQLSALFJLHIZ");

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
    msg.setTimeStamp(0.839455031776);
    msg.setSource(11966U);
    msg.setSourceEntity(156U);
    msg.setDestination(60904U);
    msg.setDestinationEntity(168U);
    msg.type = 52U;
    msg.htime = 0.715274789791;
    msg.context.assign("ZMHLTAUBJSMDLGHYCFDVOBUMHFAWVLIKGKWFXXZOYNBGGROFEKTMVIVEMZQUXEHSNSZPZJWYUSDRAEVVGDHLLJFJCUYDMEHGWPTERRHEKJOTKGYEQOAORUITNYSOWDJBBPWNRPLCSNRKIIFKIB");
    msg.text.assign("MADULDHSHSLWWPHMZIFYHOTULXNVJZSURVQUUXDKWPVPQDAMNMURISHQGFPEBYYBVHNYEPQYOVFUBTNRMKRTFPRRIWVGFYDGWNPCDKBRABRSJENWLACXBZXJTGCQQZQIQBETEEFJTFLRZZWXJPVMAKSKXNLOLYAMWXTSNTYMJEO");

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
    msg.setTimeStamp(0.492647650226);
    msg.setSource(16585U);
    msg.setSourceEntity(24U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(176U);
    msg.type = 24U;
    msg.htime = 0.545757169016;
    msg.context.assign("RSJWMQZPDWASIANCQAAHZUODMQKWQALXIKJGIUBZJLNFOCCTIESPCTPJZBMMXSYRREZVLZBPVFHJGHGLFTERNUOBNPFFGXTPKUYOXDDBHJRYPRTDQUWUEDGNANQDUMKRBUWORDRJAVG");
    msg.text.assign("LJORSCUFXNQKDNXNPQJDB");

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
    msg.setTimeStamp(0.597262103857);
    msg.setSource(20397U);
    msg.setSourceEntity(251U);
    msg.setDestination(62659U);
    msg.setDestinationEntity(226U);
    msg.command = 61U;
    msg.htime = 0.947351905801;

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
    msg.setTimeStamp(0.11742458712);
    msg.setSource(33903U);
    msg.setSourceEntity(194U);
    msg.setDestination(28017U);
    msg.setDestinationEntity(65U);
    msg.command = 144U;
    msg.htime = 0.776414640341;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 203U;
    tmp_msg_0.htime = 0.254350958533;
    tmp_msg_0.context.assign("NDWASIZPDLENROICEGCWNZILTKVEXQBRELQYVEBFOHJBJWWLQYXIQOZFPLHOGPZNBKBTEMGEHICKYXFBVUHAYABPWCPMPEMMCAJKGGCMBURC");
    tmp_msg_0.text.assign("DIFWSRVAJZIHSRLFIYJLPVKYBZEFJOMZSGYAFRBKDVSLEXXXAZLFDUOIFOCSNOXAQPUQWHAY");
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
    msg.setTimeStamp(0.421488538392);
    msg.setSource(42867U);
    msg.setSourceEntity(226U);
    msg.setDestination(3706U);
    msg.setDestinationEntity(204U);
    msg.command = 70U;
    msg.htime = 0.543127038693;

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
    msg.setTimeStamp(0.547058530342);
    msg.setSource(48254U);
    msg.setSourceEntity(64U);
    msg.setDestination(5402U);
    msg.setDestinationEntity(51U);
    msg.op = 98U;
    msg.file.assign("FKBJWINZCIOTJVXSXIEQZXFZQCLQYDHSLVDYYDFATFPOPNIQRTCKAWUYRLLTQGIAAXURUKLCYPSHRZJE");

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
    msg.setTimeStamp(0.562089022643);
    msg.setSource(19638U);
    msg.setSourceEntity(175U);
    msg.setDestination(30367U);
    msg.setDestinationEntity(88U);
    msg.op = 192U;
    msg.file.assign("RDKZFTBFLCMFLCCITQULQWGGCVPDLHQSHWGEWKDYTKMYHNEZXOJTQEJADWLE");

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
    msg.setTimeStamp(0.213201720847);
    msg.setSource(47766U);
    msg.setSourceEntity(79U);
    msg.setDestination(9319U);
    msg.setDestinationEntity(145U);
    msg.op = 233U;
    msg.file.assign("NLIQZTPDFWVCOWZWBZRLJVEIQEFKTMQNYJDTVZTZNYFVLUTMHCSJGAOHDELRWNAFHIKGWSJAFAIOUKCBOOGCNUBPFAQOLPSQBMAJIONYYFPCAXANXJYTGESMHNRGPLWXBHGKBGOSSVUFDBDCMFKPIVZPCCRVSXBCMDXKQLHXSVPRWJKKMEUXRDPQEUWFXGQJMUIZSROHWXJICEELDAVZDVRWQITTLZBXYYUUYUGEHTYOAIGZY");

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
    msg.setTimeStamp(0.497829591168);
    msg.setSource(39939U);
    msg.setSourceEntity(76U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(189U);
    msg.op = 245U;
    msg.clock = 0.196169738154;
    msg.tz = -29;

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
    msg.setTimeStamp(0.549624892508);
    msg.setSource(30446U);
    msg.setSourceEntity(30U);
    msg.setDestination(14685U);
    msg.setDestinationEntity(10U);
    msg.op = 22U;
    msg.clock = 0.666921109804;
    msg.tz = -73;

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
    msg.setTimeStamp(0.123746671395);
    msg.setSource(9641U);
    msg.setSourceEntity(130U);
    msg.setDestination(17565U);
    msg.setDestinationEntity(51U);
    msg.op = 191U;
    msg.clock = 0.753979668922;
    msg.tz = -41;

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
    msg.setTimeStamp(0.994815649018);
    msg.setSource(37584U);
    msg.setSourceEntity(194U);
    msg.setDestination(38018U);
    msg.setDestinationEntity(63U);
    msg.conductivity = 0.0477943839907;
    msg.temperature = 0.761433385874;
    msg.depth = 0.342030670824;

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
    msg.setTimeStamp(0.0127450130714);
    msg.setSource(59667U);
    msg.setSourceEntity(196U);
    msg.setDestination(40377U);
    msg.setDestinationEntity(55U);
    msg.conductivity = 0.280005843469;
    msg.temperature = 0.295377634202;
    msg.depth = 0.461115891337;

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
    msg.setTimeStamp(0.435314960946);
    msg.setSource(64328U);
    msg.setSourceEntity(166U);
    msg.setDestination(56182U);
    msg.setDestinationEntity(176U);
    msg.conductivity = 0.406118365561;
    msg.temperature = 0.262866230529;
    msg.depth = 0.395109747783;

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
    msg.setTimeStamp(0.265619797191);
    msg.setSource(26788U);
    msg.setSourceEntity(122U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(168U);
    msg.altitude = 0.832754808852;
    msg.roll = 19585U;
    msg.pitch = 26559U;
    msg.yaw = 53901U;
    msg.speed = -30283;

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
    msg.setTimeStamp(0.0891516908729);
    msg.setSource(4530U);
    msg.setSourceEntity(94U);
    msg.setDestination(19544U);
    msg.setDestinationEntity(57U);
    msg.altitude = 0.432089328599;
    msg.roll = 12976U;
    msg.pitch = 2707U;
    msg.yaw = 62128U;
    msg.speed = -23505;

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
    msg.setTimeStamp(0.623057912519);
    msg.setSource(1188U);
    msg.setSourceEntity(174U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(216U);
    msg.altitude = 0.45991142869;
    msg.roll = 46006U;
    msg.pitch = 60078U;
    msg.yaw = 59990U;
    msg.speed = 7363;

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
    msg.setTimeStamp(0.631260055242);
    msg.setSource(49101U);
    msg.setSourceEntity(102U);
    msg.setDestination(12066U);
    msg.setDestinationEntity(213U);
    msg.altitude = 0.335535943269;
    msg.width = 0.610123026307;
    msg.length = 0.371787172004;
    msg.bearing = 0.865676504454;
    msg.pxl = 4820;
    msg.encoding = 172U;
    const char tmp_msg_0[] = {-67, -40, -99, -101, 25, -27, -86, 105, -25, 85, -38, -57, -54, 96, -80, -57, -90, 97, 122, -34, 55, 1, -18, 84, -12, -76, 26, 85, 80, 94, -113, -6, 66, -66, -96, 122, -125, 68, -106, -60, 105, 31, -125, -59, -31, 86, 12, 53, -17, -82, 62, 0, -29, 95, 122, -4, -97, -119, 0, -71, -52, -23, 97, 107, 3, -59, -115, -3, 83, 46, 23, 63, -79, 74, 81, -113, 32, 35, 30, 24, 122, 96, -16, -38, 40, 118, 12, -38, 103, -23, -59, 16, 116, -38, 3, 14, -79, 47, 49, 72, 108, 78, 102, 83, -91, -108, 18, -75, -63, 126, -77, 120, -71, -125, -8, -52, 45, -85, 89, -7, 17, 72, 120, 71, 119, -31, 106, 117, 100, -91, 25, 110, -3, 66, -30, -125, 105, -96, 66, -2, 94, -99, 73, -110, -42, -74, -89, -114, 122, -50, -109, -36, 59, 12, 12, -1, -91, -14, -50, 93, -123, -89, 117, -19, 29, 36, 64, -108, -67, -36, -43, 109, 74, -73, -27, -29, -112, -32, 38, -6, -42, 9, 10, -67, 71, -85, 63, 20, 122, -23, 124, -12, 109};
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
    msg.setTimeStamp(0.0611887665456);
    msg.setSource(1550U);
    msg.setSourceEntity(165U);
    msg.setDestination(2193U);
    msg.setDestinationEntity(102U);
    msg.altitude = 0.331785564814;
    msg.width = 0.759992103595;
    msg.length = 0.0190360804111;
    msg.bearing = 0.832715231933;
    msg.pxl = 21753;
    msg.encoding = 211U;
    const char tmp_msg_0[] = {36, -93, -48, 106, -117, 8, 74, 74, -46, 20, 96, 92, -89, 0, 79, 51, 1, 15, -59, -112, -114, -99, -78, -109, 46, -40, -76, 26, -42, -119, -11, 103, -49, 18, -76, -30, 95, 22, -83, 78, 20, -84, -87, -116, -65, 68, -27, 114, -119, -69, -123, 80, 93, -121, 109, 112, -21, -127, 44, -2, 49, -83, -97, -107, -75, -28, 36, 36, -101, -83, -50, 53, 12, -70, 91, -39, 112, -50, -6, 114, -78, 120, -83, 61, -106, -88, -94, -15, -68, -116, 12, -19, 107, -75, 56, 92, 37, -84, 45, -56, -31, -100, 119, 120, 75, 34, -3, 51, 89, 45, 93, 0, 119, -113};
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
    msg.setTimeStamp(0.675284195428);
    msg.setSource(46288U);
    msg.setSourceEntity(226U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(94U);
    msg.altitude = 0.885747712195;
    msg.width = 0.368335597865;
    msg.length = 0.540305412482;
    msg.bearing = 0.868954299701;
    msg.pxl = 16580;
    msg.encoding = 136U;
    const char tmp_msg_0[] = {-107, 26, -106, -33, -26, 112, 64, -72, 24, -84, -59, -2, 100, -83, 93, -83, -108, 3, -4, 48, 31, -38, -100, -33, -38, -27, 45, 80, -9, -26, 113, 72, 7, -126, -27, -128, 110, -3, 6, -47, 31, 59, -35, -26, -88, -13, 42, -102, 68, 12, 53, -6, -79, -12, -18, 17, -72, -74, 24, -50, 70, 52, 37, -86, 6, 87, 71, 73, 83, 33, -12, 117, -56, -54, 62, 73, 126, -4, 39, 36, -70, 3, -2, 50, 59, -102, 40, 79, -104, 93, 9, -67, 62, 39, -81, 47, -71, 119, -102, 12, 54, -29, 87, 92, 101, 20, -3, -30, -81, -9, 84, -115, -1, 95, -19, -48, 80, 14, -53, -57, -60, -95, 91, 31, -55, 21, -35, -45, 9, -74, -69, -30, -125, -70, -11, -102, -42, -60, -106, 10, 10, 10, -91, 31, -52, -103, 70, 99, 21, -33, 30, 89, 74, -74, 91, -65, 25, -15, 117, -88, 40, 69, -115, -99, 95, -61, 64, 61, 45, 113, -23, -25, -116, -49, 69, -76, -7, -58, 125, 4, -28, -98, -104, 123, 107};
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
    msg.setTimeStamp(0.797115077833);
    msg.setSource(54632U);
    msg.setSourceEntity(225U);
    msg.setDestination(22847U);
    msg.setDestinationEntity(15U);
    msg.text.assign("ZPNKOVGXVERBWKFUXHSUKEAEXUDFMXTCGOPTNQQSJPDGXNZDPTYXBTVIVNERGLSBCOKBHZYFHIMQJKHDAEFMRNRAUJCZEW");
    msg.type = 184U;

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
    msg.setTimeStamp(0.720338287546);
    msg.setSource(19264U);
    msg.setSourceEntity(45U);
    msg.setDestination(6071U);
    msg.setDestinationEntity(225U);
    msg.text.assign("EGEJOZJASFTOULDYKGWQQANXWJSDIMDZLBEUMUBXLBVNNWWHHYCCPMOOPYSNRYRZLETMEXRVIRWPHAPFBBWDJMQRDKORFPHEHXBCIFDAMZXIUOOTQTVKJFELVTRYLHVUAGQTQZSZHLTDEVFQJNFBABGECTINXHTDUUVDPMKYJSTKCSGLKZIKFLFMPNIZGOPPWXNGJLAC");
    msg.type = 175U;

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
    msg.setTimeStamp(0.73749920602);
    msg.setSource(10773U);
    msg.setSourceEntity(135U);
    msg.setDestination(36083U);
    msg.setDestinationEntity(185U);
    msg.text.assign("YPHRUUUORDYZJTE");
    msg.type = 85U;

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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.901720437463);
    msg.setSource(11461U);
    msg.setSourceEntity(10U);
    msg.setDestination(4021U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.990872312095);
    msg.setSource(42025U);
    msg.setSourceEntity(13U);
    msg.setDestination(43383U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.864614472258);
    msg.setSource(20730U);
    msg.setSourceEntity(106U);
    msg.setDestination(42791U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.271223700747);
    msg.setSource(28749U);
    msg.setSourceEntity(210U);
    msg.setDestination(22360U);
    msg.setDestinationEntity(137U);
    msg.sys_name.assign("AYBVSZWKGWEKHPKQEKXFIVZTDPXPIDINMVBRLDZBLSFCLFPICQFFACVCRPYYTIZBXIRADUJWCBWXJBGPRQOQUICHGSFOFQSPGYVKLWACQDLUURZTJTNHXCTQWYNTTSGOETJRDBJGNHYHBMSUZOXIVOWLRJDVOGMFMAKWNNSAQZSLEMYFXUMXLHYLZMJUMETRAGERHZDQJOHES");
    msg.sys_type = 231U;
    msg.owner = 30582U;
    msg.lat = 0.285748413962;
    msg.lon = 0.392453348596;
    msg.height = 0.249439286117;
    msg.services.assign("FLBQABETGPQTMRHUADHHDDWOVVECAMTYVSIGNMWFDDLJWZGFPPAHECRESYJEPLPSMWEQUXOEIRVZKNWRNZYTOGGGLBTKFHRJUNYBMZVKXDNMJOOKDGKCMZCXBUPZTKUEFOEVZSZDUTVKXZSWFGPBACYPCAALLRVSYCTSPBXRNDNALZ");

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
    msg.setTimeStamp(0.340121454209);
    msg.setSource(14780U);
    msg.setSourceEntity(111U);
    msg.setDestination(34128U);
    msg.setDestinationEntity(234U);
    msg.sys_name.assign("WULQLPBGEKJZWSECULLUJCMCNVUURKHHQSPZOAKHSPGNKBWGSTKVPKBZDVSLWRQLTHSUDIMYPOBXQVONEXOYAAFVSMYTAJXLUIREGAPXXETPMHIIMWWBZKNRCTRNOFBOMVFJTJGFFVUXPDJBSAMWJDOGCNYTIMEDRNCIIQHTELRDNYZJTLYYAWLHXZCDAJBQOFROSCVFYZRYQSMDYIXZWQKUEPKDVRGGJNOZZVWQT");
    msg.sys_type = 116U;
    msg.owner = 46337U;
    msg.lat = 0.972897205571;
    msg.lon = 0.315999369652;
    msg.height = 0.927405654712;
    msg.services.assign("RBEGJXLBPPHHLTCCCMQGIJZGMHDQOKAXMJYZQMIHULCOIAJVECDAOUVCVZPKVRILSAWLGXWEBZGPBZLHQNJCSKUMZQPNWHZDEKYORRLVDUQOXABHTZKTTUBTFSRFNBFCEWYHTQNMDNKNWIFWBDWLIGSSTASADAMPEPTUZYYCOE");

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
    msg.setTimeStamp(0.839210897862);
    msg.setSource(10722U);
    msg.setSourceEntity(7U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(222U);
    msg.sys_name.assign("MNMCFRTGCPWRQVWLPHTVKZLMPBNKQMTCXXYDEWNYFVUELITAAYOGCAJUYSOGTJMADBLCMBOVCHHPXSRLGZSRWOFJUXFFREUYGNSWZVJHLDE");
    msg.sys_type = 38U;
    msg.owner = 63907U;
    msg.lat = 0.445269479987;
    msg.lon = 0.175555453385;
    msg.height = 0.787587118895;
    msg.services.assign("PKMKCPXHRMAFERWLGCMMWPRECXZEOMBVDLTFUGBKOOGRQJSYJLNWSTBOZOEESIXAZNLFKIKJZNZBI");

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
    msg.setTimeStamp(0.67170281909);
    msg.setSource(24871U);
    msg.setSourceEntity(215U);
    msg.setDestination(162U);
    msg.setDestinationEntity(179U);
    msg.service.assign("AJQSKKAJBYAFWGZKPSCTDKJYGBMBMDPRPREXPZCVLFPZCQXAUUACOKKANVJABPBTICENETRDKWNGFOTMUYWX");
    msg.service_type = 17U;

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
    msg.setTimeStamp(0.513580000459);
    msg.setSource(31487U);
    msg.setSourceEntity(219U);
    msg.setDestination(40756U);
    msg.setDestinationEntity(216U);
    msg.service.assign("GMBIMPRUSMWSJEDPVPOFQHOUCUDQTZAXEUCXYNLHQCZXKXYVQCCQSQJBSFTMGRTHALSFHZMPOGQEYCDKLFWRCZZTUFKMMJBKAWMWWWFPZUSLDOYXZOWFRDEVTLVAROAGLBXOORBARUNCDKKOAZWLJVLLQIII");
    msg.service_type = 181U;

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
    msg.setTimeStamp(0.0546912325923);
    msg.setSource(17020U);
    msg.setSourceEntity(192U);
    msg.setDestination(429U);
    msg.setDestinationEntity(127U);
    msg.service.assign("GSAQYGIBRCTXKQOTENIMXKJQFQHSBONEISAEDEHNMXTSYHWOZWFKBDHZETKPDIVYQDDHUMCHWGPLGTSVIRBZDESUDXCNAINMKUGEUVZWQCYPEKTVLMQNIEYRFRFCPXPNLWPONBMRTFLTFIACFOILSGQQFGXBFXRVYOXYBXVZCSABGWVDJZZHRSLDYFJ");
    msg.service_type = 144U;

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
    msg.setTimeStamp(0.15088566449);
    msg.setSource(56901U);
    msg.setSourceEntity(138U);
    msg.setDestination(46943U);
    msg.setDestinationEntity(213U);
    msg.value = 0.948064140714;

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
    msg.setTimeStamp(0.989391271638);
    msg.setSource(34846U);
    msg.setSourceEntity(115U);
    msg.setDestination(56137U);
    msg.setDestinationEntity(226U);
    msg.value = 0.103078819465;

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
    msg.setTimeStamp(0.35242615449);
    msg.setSource(43461U);
    msg.setSourceEntity(170U);
    msg.setDestination(20854U);
    msg.setDestinationEntity(41U);
    msg.value = 0.230499854748;

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
    msg.setTimeStamp(0.818765018337);
    msg.setSource(61629U);
    msg.setSourceEntity(175U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(228U);
    msg.value = 0.620123753555;

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
    msg.setTimeStamp(0.395907301925);
    msg.setSource(33446U);
    msg.setSourceEntity(194U);
    msg.setDestination(2629U);
    msg.setDestinationEntity(177U);
    msg.value = 0.692449030371;

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
    msg.setTimeStamp(0.530503043686);
    msg.setSource(54217U);
    msg.setSourceEntity(203U);
    msg.setDestination(44012U);
    msg.setDestinationEntity(4U);
    msg.value = 0.417710058318;

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
    msg.setTimeStamp(0.368142433865);
    msg.setSource(14166U);
    msg.setSourceEntity(122U);
    msg.setDestination(33281U);
    msg.setDestinationEntity(197U);
    msg.value = 0.252763649573;

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
    msg.setTimeStamp(0.807844263168);
    msg.setSource(28450U);
    msg.setSourceEntity(68U);
    msg.setDestination(7769U);
    msg.setDestinationEntity(87U);
    msg.value = 0.920154082315;

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
    msg.setTimeStamp(0.371537472351);
    msg.setSource(3820U);
    msg.setSourceEntity(116U);
    msg.setDestination(29693U);
    msg.setDestinationEntity(253U);
    msg.value = 0.509476055104;

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
    msg.setTimeStamp(0.614970638893);
    msg.setSource(14357U);
    msg.setSourceEntity(175U);
    msg.setDestination(27797U);
    msg.setDestinationEntity(137U);
    msg.number.assign("AVIYGXTZUDWSRNIKJOWDPACGMWLQMUSDJAJIIPMOVDVYNIHEOBJCITZHQXKJFZZHQTJDUYGQVXYPTJNPFWQXZQEFFBALIDRSPVEUXNKVOCGRTDPRKGTBMHFGHWZSGYXAVCCXKOXYPLREOQCWYEJSRFVEPCLIHURFHEVAABCMZLEMHKVCUAOMFISQNOFNWDXJNSLHNTWNNRTKBLPSOKPYEYQXMLQGGWMKEUGALBBILURZSTZRJM");
    msg.timeout = 25237U;
    msg.contents.assign("STMMSZWBNFRTRSDMEUAYEJIKFIGEAYQZHIVPVSBQBUHYYPU");

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
    msg.setTimeStamp(0.665920759226);
    msg.setSource(2536U);
    msg.setSourceEntity(88U);
    msg.setDestination(27293U);
    msg.setDestinationEntity(29U);
    msg.number.assign("GWAKASSFGAJRJKHQJPZYJDGFGTMOJQOXMOUSNNRGGBJJHZOZKLAYTFEDSEUBXLGFEQUNKPCWFDZLBMNSWRWYLRDTHCBXCXIPNAQDZFVQHLPBJGEOURPLIGBKRAMIQCMYILTRKVEWDRDHYIKEKHYZSYVLCGSONHWKSDEIAMOFEXTJC");
    msg.timeout = 53483U;
    msg.contents.assign("MQCWLDZEYXZNJBWGNJDEOWSHJKDESORPWIWUQFBCHOTPCMVCQENQTKHAIJFRQABRCLXKRMGXYPMZTVWDSXGRBUPJPAOEUUQGGXZZYJBZNSFSGCMJQBUHCLLQIX");

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
    msg.setTimeStamp(0.191834984263);
    msg.setSource(54917U);
    msg.setSourceEntity(16U);
    msg.setDestination(6311U);
    msg.setDestinationEntity(197U);
    msg.number.assign("OYABLRLDFHSUYONYABZWKDVTPULNGOWUNYBCZIHPMATKXZVGGFWAWEIGGGEQRPNPOIKISOLIWKCUZMMSUUQELIDVNENXPTZFTOUP");
    msg.timeout = 6565U;
    msg.contents.assign("NPILHUBLNVDNNHKDIEPUKVMHFYFEEZOOVFKTHRQYMFZQZEBCXEOOPKLLCJSKDGIQTCXDWIWXZSRJWEJTADCJVCYLMUYRHUPXFADFOKOMCSQU");

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
    msg.setTimeStamp(0.212683373429);
    msg.setSource(23949U);
    msg.setSourceEntity(33U);
    msg.setDestination(23433U);
    msg.setDestinationEntity(38U);
    msg.seq = 1054282193U;
    msg.destination.assign("JJLSFVIUWJTDLFNNQDUJYFGGBMKKHQROCXZWXPQHDSHRPTGEEHZWUMXOYDYOULRHOKTQCMIKXDDQLGGPPUAAPFFZNYXYAWOIDEKLWCWLMCXMESGMPBBTRBUWYNFDTGXTOVTSGQKJGILFVJASMVBKLRNZQKNYVDREXHZNJYIZFURAWINACOFEQGKSRTMHBYCOQPLVTZCRXVIKIOSMAZLBJCBFCYVATSZNRUUSZSUJAEQE");
    msg.timeout = 7188U;
    const char tmp_msg_0[] = {87, 9, 18, -50, -88, -108, 93, 15, 34, 82, -69, 29, 30, 16, -87, 50, 39, 75, -51, -97, -22, 107, 77, 24, 38, 51, 92, 112, 49, -43, 109, 33, 14, -45, -2, -50, -73, 71, -98, -66, -124, 116, -60, -117, 64, 111, -49, -48, 100, -17, 25, -121, 66, 47, -67, 10, 58, -104, 24, 52, 101, -38, 71, 15, 88, 92, -75, -85, 122, 45, -10, -21, 8, 65, 22, -77, 6, -92, -128, 81, 26, 83, 106, 66, -126, 3, 28, -108, -12, -20, 22, -23, -20, 64, 26, -88, -25, 80, 75, -33, 112, 60, 60, -122, 100, -67, 47, 70, -114, 37, -39, -62, -42, -18, 34, 70, -67, 45, -113, -62, 99, 52, -96, 29, 79, 77, -96, 1, 66, 17, -125, 18, -19, 34, 106, 27, -116, 70, -104, -30, -105, 124, -22, -102, -17, -127, 112, -24, -107, 114, 47};
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
    msg.setTimeStamp(0.125464282516);
    msg.setSource(49051U);
    msg.setSourceEntity(232U);
    msg.setDestination(35350U);
    msg.setDestinationEntity(42U);
    msg.seq = 1261654831U;
    msg.destination.assign("ONOKYIKNGVECOBCMKFMCWUPISXAVQPUAZYDNTMYMJGUHTTZKXSDJRDIQNWNFCVDXEXKQSMWZPATYGPOQDJSSORDHVFXFAHYBOAWFHUESPGWOFYVTVQRTGATCGXAJQDUCE");
    msg.timeout = 59297U;
    const char tmp_msg_0[] = {106, 4, 44, 0, -26, -21, 75, 57, 57, -79, 0, -54, -13, -102, 10, 80, 117, -58, -27, 18, -88, -115, -51, -39, 15, -83, 8, -66, -60, -126, 102, 78, -24, 18, -43, -15, 86, 7, 30, -126, 11, -85, -117, -24, -106, 75, -121, 114, 41, 57, 24, -33, -24, -86, -107, -8, -62, 72, -94, 79, 86, 76, -46, 112, -100, 18, -110, 27, 54, 116, 40, -91, -104, 73, 90, -96, 57, -73, -28, -75, -85, -32, 45, 123, 111, -96, 10, 120, 52, 49, 77, -97, 84, -35, 30, -40, -49, -25, 117, -87, 80, 72, 117, 14, 55, 109, 17, -76, -19, 104, -50, 111, -7, 21, 0, -37, -84, -96, -88, -49, -16, 126, -110, 86, 101, -76, 33, -26, 81, 114, -110, 89, -100, -106, 50, 26, -90, 21, -26, -49, -33, 68, 61, 51, 95, -39, -57, -123, -19, -71, -59, 124, -114, 8, -1, 1, -114, 13, 7, -103, 116, 98, -74, 22, -64, 104, -90, -58, 78, 77, 2, 63, -122, 124, -105, -53, -49, 104, -30, 42, 103, -93, 71, 119, -84, 28, 47, -31, 43, -35, -2, 122, -23, 84, -78, -122, 47, 48, 42, 65, -79, -121, 8, 26, -79, -110, 117, -46, 76, 31, -111, 96, 81, 11, 111, 38, 29, 23, -11, 45, 66, -56, 102, -89, 28, 122, -125, -68, 79, -82, 32, 112, 61, 17, 76, -58, 69, 101, 11, -70, -90, -27};
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
    msg.setTimeStamp(0.684075292184);
    msg.setSource(37208U);
    msg.setSourceEntity(167U);
    msg.setDestination(8484U);
    msg.setDestinationEntity(210U);
    msg.seq = 910528465U;
    msg.destination.assign("XBOKJZAVBCSVYHNHOVUIWMMPKXLHTYMAKMBYVCKDDQXXJUDQHBERGVHJGG");
    msg.timeout = 20618U;
    const char tmp_msg_0[] = {70, -38, -63, -78, -64, 49, -32, -31, -38, -32, -62, -52, 74, -127, 84, 59, 120, 24, 31, -5, -96, -125, -111, 28, 105, -7, -90, 39, -8, -65, 34, -128, -75, 102, 60, 52, -58, -84, -66, -85, -115, -7, 126, 116, -67, -48, 64, 119, -13, -46, 70, 125, 123, -124, 47, 59, 71, -85, -89, -119, -106, -86, 85, -102, -34, 97, 36, 100, -72, 113, 124, -48, 73, 94, 33, -32, -88, -111, 93, 32, -54, 91, -44, -10, 122, -20, 37, -31, -5, 99, -100, -113, 59, 78, -108, 95, -13, 58, -94, 100, 92, 59, -5, -85, -32, 9, 50, 98, 79, -23, -112, 19, 88, -72, 89, 45, -127, -9, -95, -50, -107, -127, 126, -123, 122, 67, 96, 106, -83, -60, -9, -107, 107, -72, -106, 61, -86, -17, -32, 96, -28, 113, -61, 75, 87, 103, -89, 122, 27, -38, 44, -25, -90, 6, 68, 70, -93, -118, -39, 97, -43, -117, 25, -80, -73, -108, 18, 77, 114, 88, -117, 67, 83, -109, 68, 62, -10, -1, -120, -35, -34, 23, -17, -99, -118, -126, 5, -18, 6, -46, 36, -81, -98, -42, 13, 22, 65, -46, -91, 84, -48, 77, -112, -12};
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
    msg.setTimeStamp(0.950404462037);
    msg.setSource(16989U);
    msg.setSourceEntity(159U);
    msg.setDestination(1283U);
    msg.setDestinationEntity(199U);
    msg.source.assign("KOFKMPXRIURHKXOLIUGBILPRCVRPFTTEUANNCZYJMQVIDMGWPFWSKAUJYXCGHASVJCXYFQUDDYZNQTQYGHYRHVDDHWCSILKZRBDIEVAJXIZKGMOFSJTITMRMPXPEULSZYJQBNBPLMXBXBFSHLXNOZUBTUCAJYHSOIQEVUEJELSWXVJYNVDOZDM");
    const char tmp_msg_0[] = {40, -68, 5, -4, 66, 53, 47, 100, 92, 99, -39, -13, -29, 85, 25, -65, -23, -116, -84, 71, 60, -113, 111, -120, -1, 30, -105, 13, 94, 9, 96, 63, 23, 123, -21, 17, -11, -113, -9, 111, 17, 112, -116, 20, 54, 62, 28, 13, -69, 96, 79, -125, -122, 0, -98, -28, -47, 2, -83, 96, 87, -13, -109, 89, 119, -126, 122, -81, 92, -93, 15, -122, 92, -25, -38, 52, 5, -91, -40, 73, 21, -9, -99, -56, -45, -99, 57, -14, -74, -118, -123, -52, -121, -51, -103, 116, 96, 89, -110, -97, 86, 84, 117, -97, 56, -123, -21, 80, -25, -10, 115, 122, -77, -20, -47, -36, 21, -103, -43, -28, 109, 40, -112, -99, 56, -99, -87, 28, -6, -5, -121, -14, 51};
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
    msg.setTimeStamp(0.705479160308);
    msg.setSource(63946U);
    msg.setSourceEntity(217U);
    msg.setDestination(27301U);
    msg.setDestinationEntity(59U);
    msg.source.assign("UIGYZJWCRJFEFWOOJQHCUXJKRMNSSIGFRYQAEZTUDBWXZBRWEGJQLSMMUTOEHUIYPTRTHQCGHOVDSDWYPYKCGTCMZZQPOMMBDDBXOQGSEARNIPCUFKBMXOKCFDKLAHFGAZZIDEOCAXWLKZHYWAZUIYHTGIUXJVNZWVAVIDTMKXRNCYAFRTBNLPVFPBGQOEDHCQDSRMMKESVJJEQTUGOWIYLSK");
    const char tmp_msg_0[] = {109, 99, 19, -81, -101, 20, 10, -2, -109, 29, -68, -44, 25, 89, 84, -12, 109, -91, 16, -57, 9, 112, -112, 40, 97, 88, -1, 12, -91, -98, 71, 57, -104, 67, -20, 43, 81, -80, 49, -54, -114, 67, -108, 75, 81, -34, 56, -9, -7, -80, 73, 26, -127, 78, 40, -18, 50, -12, -100, -67, 36, -36, -117, 121, 8, 106, 16, 50, -47, -122, 40, 92, 56, -44, 11, 7, -98, -86, -125, 90, -122, -65, 75, 28, 42, -87, -44, 44, 65, -27, 78, -68, -54, -90, -110, 21, 24, 75, -101, -91, 77, -74, 123, -16, 43, -69, 63, -66, -119, 60, -124, -117, 35, 96, -25, -110, -118, 32, 57, 48, -38, -101, -73, 51, -75, -4, 95, 49, -73, 5, -102, -65, 32, 121, 90, -2, 16};
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
    msg.setTimeStamp(0.965688854);
    msg.setSource(7045U);
    msg.setSourceEntity(44U);
    msg.setDestination(25917U);
    msg.setDestinationEntity(23U);
    msg.source.assign("RDRSAIFSOJQXEWDTXVMKRSXKHELLODAXOBIWPFGVTFZYDKFCRNVRGDJNVUQZDMMHPUNPGILQZBGZLOLJTLXHQZXMWBIWEVQNORAGRTYHYPJVDYBUZBKYYLOWJHCQUPONKSAAJJUCEBYTKYFFNNKZBHAMJEFABUSTBUSHESSKPITLJRCCNWIGGYFOMPOWURZ");
    const char tmp_msg_0[] = {110, 123, 90, 36, -30, 12, -24, 43, 4, -10, -88, 4, -37, 111, -118, 78, 30, -92, -90, 63, -4, 21, 55, 113, -46, -50, -63, -27, 8, -85, 101, 76, 77, 11, 112, 73, -6, -107, 48, -69, -112, -78, -38, 39, 20, 64, 77, -68, 13, 45, 25, -15, 82, -49, -86, -4, 119, 52, -128, -15, -36, 62, 28, -94, -124, -41, -106, -117, -124, -99, -52, 50, 17, -84, -48, 32, -118, 60, 87, -4, 105, -120, 49, -77, -59, -110, -48, 98, -23, 83, 37, 100, 65, 87, 105, -69, -79, -50, -101, -91, -38, 16, -97, 54, 86, 99, 48, -110, -39, -91, -120, 86, 18, 13, 65, -88, 119, 7, -115, 107, 57, 71, 123, 86, -7, 8, -25, -112, -91, 51, -41, -107, 71, 23, -118, -33, -121, 85, 1, -121, 63, 1, 103, 20, -32, -13, -56, 9, -69, -9, 73, 15, 118, 117, -19, -81, 91, 88, 28, 84, -46, -112, 1, -27, 54, -42, -16, -54, 68, 22, 92, 99, -38, 100, -47, -56, -49, -106, -81, 97, 27, -89, 28, 1, -128, -69, -128, 24, -108, 57, 60, -114, 121, -114, -85, -101, -80, 47, -80, 9, -126, -105, -5, -2, -66, 11, 90, -17, 26, -65, -50, 81, 10, 15, -44, -59, 83, -12, 91, 47, -59, 52, 14};
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
    msg.setTimeStamp(0.268001876077);
    msg.setSource(52128U);
    msg.setSourceEntity(229U);
    msg.setDestination(13608U);
    msg.setDestinationEntity(188U);
    msg.seq = 2300264911U;
    msg.state = 202U;
    msg.error.assign("DZBHXTQPPRZTQCADMZOXDZIWIJOXAQOOJEDGCTSWJQHLLDOQZMRNVXJXRKYRCKMXNLEUFGHUUSESIUNTYZDLHTDTLOEOZNVBWKGHCAUFHGLRDJSQROMBCQEFNPJPBZVWYUKLDSTVRBLGKNEFMIGMUGCTNIHKMKTHAAVEOKIFPAKBPWIWJJLSHVIRBWDUVVWMXAPSYWCQKCYANAUMYGOPCFJZNQISCXUBWSHILAFGXXRFEG");

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
    msg.setTimeStamp(0.674449392492);
    msg.setSource(11828U);
    msg.setSourceEntity(43U);
    msg.setDestination(53958U);
    msg.setDestinationEntity(169U);
    msg.seq = 4187544227U;
    msg.state = 91U;
    msg.error.assign("OAGOQHMXLISMHXNSOKCIEBOXJFGUFKYRJE");

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
    msg.setTimeStamp(0.84823646836);
    msg.setSource(15403U);
    msg.setSourceEntity(218U);
    msg.setDestination(29078U);
    msg.setDestinationEntity(108U);
    msg.seq = 1732898715U;
    msg.state = 147U;
    msg.error.assign("RTWPLBNQRJHDKYAEB");

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
    msg.setTimeStamp(0.239708683189);
    msg.setSource(47739U);
    msg.setSourceEntity(219U);
    msg.setDestination(56448U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("ZZFDAWPJYOBMXZUXVYZADUDEAOFSXPZRIXKETRHDXGXKEIPPRLMKCMUVDAMLHMTLGOQWSNMAAWUIVKWBSNXKKYTFPCNOPBKCBWYJRGEIJVRQLPXTOXJTOWETNQSFIWFAICIGUJFWULCLNJRPHEQTBNDYMOHUMHNHBCZZVXBA");
    msg.text.assign("CVXPVCOTOUNWHQADFRZQNMG");

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
    msg.setTimeStamp(0.0925005696037);
    msg.setSource(35563U);
    msg.setSourceEntity(202U);
    msg.setDestination(607U);
    msg.setDestinationEntity(210U);
    msg.origin.assign("CVNUKMUTCXNGDELKSKIOMSLCTQYHZOGXWACWXAVFQRDPXGNGOSDPKWSOHEUXYKQGTLEFPVOIQXWBMVESPQMTNNOIEAESORESYLDYJUPIPUAJRTORFWJLIXWQFAZAXRHTBSXNKUQYMBCIMKZHNQDJTEBZJ");
    msg.text.assign("NWJSKCIYHLOBRPPCRCZXJUCXENITMDOATMEFQFSHPOKWFQAGVUEEBQAECLLWLBTLGFBYKNVYKVZ");

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
    msg.setTimeStamp(0.91993210904);
    msg.setSource(20118U);
    msg.setSourceEntity(106U);
    msg.setDestination(6043U);
    msg.setDestinationEntity(41U);
    msg.origin.assign("DVVWMIZENASKQSJGZAMOEGEALEMTGRYSKYDPJFOTQSETUXVHOVJZCPGMFTNVKBUZOWQPFLOBRRGQPCSWTYSRXARLDJMRMRIADHKNETRMZDUFBPARZICPSYKXDBICNGLKXYEDVGVLWHZDBNXEXWKJQPGIOWHJBNPBHNPHTTIUJUUNOQYZBXKMCMUXFGOHYDKILZJZHOSFXWTYNLYPFURQJCCUWHEYAFIXLOWVQQICCLLQCW");
    msg.text.assign("BNFIKDWRPNHPAFSQMJVXHSITKOZVAGJNGUVUPUCXNE");

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
    msg.setTimeStamp(0.365361404908);
    msg.setSource(34442U);
    msg.setSourceEntity(11U);
    msg.setDestination(41029U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("CIZROZEOQHNRDOCLETZVACQSSYOGCUKZDZGVYQLRHXPTKFHORIELNWVZPZBDIICUMAUKDCGINBXPLLKVYHDQNDYCNKCRRFGKFNTGJLJBGTWDGFANJMFPUQEOJ");
    msg.htime = 0.536261281999;
    msg.lat = 0.717845559778;
    msg.lon = 0.8693733841;
    const char tmp_msg_0[] = {-121, -56, -1, -22, -116, 14, 35, -39, -18, 107, 111, -120, 106, -115, -9, 39, 57, 38, -45, -39, -116, 64, 118, 52, 42, 6, -15, 67, -61, -35, 80, -18, -46, -62, 50, 73, -126, -113, 118, 29, -90, 71, 23, -108, -125, -104, -40, -54, 101, -115, 113, -117, -98, 105, -116, 64, 102, 102, -111, -6, -97, 13, -14, -95, -12, 49, 77, -106, 11, -20, -9, -70, 81, -15, 40, 103, 44, 23, 2, 123, -50};
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
    msg.setTimeStamp(0.66063422229);
    msg.setSource(17334U);
    msg.setSourceEntity(83U);
    msg.setDestination(9285U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("GIAEFXSKKOZMTOQBRRZRDPSCAQENOZDLDLPTWREDMGXNIBLNZMYDJOLBXZUWXQBHERYLPAAOPGEVNPSPJPLFXXUAVBYNKCTWPIIGTFTAGDYFUCUEEUCQVK");
    msg.htime = 0.971375146844;
    msg.lat = 0.912189033853;
    msg.lon = 0.621281993284;
    const char tmp_msg_0[] = {-43, 40, 74, -100, 50, -80, 49, 105, 113, -106, -86, 70, -39, -92, -84, -127, 100, 23, -37, 35, 17, -46, 62, -79, 10, -2, 29, -118, -66, -108, -77, -51, 92, -95, -109, 87, 88, -17, -38, 72, -77, 60, -87, 111, -58, 87, -5, -10, 65, 37, -98, 42, -38, -81, 55, -102, 126, 99, 65, -125, 32, -58, 20, -51, 101, 56, 37, -89, -59, 51, 54, 32, 54, -120, 105, -76, -96, -27, -106, 22, -99, 15, 29, -59, -99, -80, -51, 99, 81, 112, 119, 118, -53, 10, 58, 102, 81, 117, -115, 122, 44, 81, 85, 84, -14, -106, 36, 36, -37, 41, 121, -96, -112, -121, -119, 116, -77, 80, -72, -9, 47, 91, 114, -116, -69, 22, 13, -77, -55, 113, 73, -103, 44, 19, 109, -11, 97, 64, 113, -51, 70, -67, 59, -119, 29, -84, 28, -37, 26, 39, 62, -96, 56, -90, 60, -64, 71, 8, -20};
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
    msg.setTimeStamp(0.183187244302);
    msg.setSource(32623U);
    msg.setSourceEntity(235U);
    msg.setDestination(62289U);
    msg.setDestinationEntity(223U);
    msg.origin.assign("LHJFWCEYCCNIOEPBCMRDNOSIAY");
    msg.htime = 0.0237835191639;
    msg.lat = 0.964698162389;
    msg.lon = 0.846895254654;
    const char tmp_msg_0[] = {110, -61, 35, 125, 24, -34, 116, 100, 66, -107, -81, -88, -19, -30, 24, -55, -70, -91, 83, -107, 41, -59, 39, -118, 96, 104, -21, -21, 121, 91, -8, -90, 78, -62, 107, -64, -22, -92, -63, 112, -89, 65, 70, 46, -5, 120, 41, 75, 97, 52, -16, -120, -17, 58, -49, 122, -51, -97, -42, 98, 14, 74, -26, 118, 78, 101, 40, 62, -106, -4, -73, 51, -41, 97, 75, -90, 51, -54, 22, 74, -109, -12, -118, -59, -78, -69, 65, -3, 25, 2, 54, -105, -44, -118, 108, 109, 100, -86, -11, -51, 99, 24, -86, -42, -20, -78, 18, 22, 74, 37, 24, -15, 50, -20, -17, 36, 44, -48, -44, 14, -86, -101, -59, 76, 86, 70, -123, 98, -60, -80, 56, -57, 123, 32, -67, 18, -95, 117, -122, -77, 64, -128, 53, -79, 113, 0, -54, -84, -51, -77, -127, 20, -114, 54, 6, -33, 97, -112, 74, -9, 62, 86, -93, 102, 77, -116, -17, -40, -106, 111, -19, -82, -72, -69, -124, 29, -11, 38, -117, 16, 45, -76, 116, -93, 122, 75, -99, 48, 111, -85, 61, -27, 81, 44, -76, 69, -74, 18, -38, -7, 90, 123, -126, -2, 115, -88};
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
    msg.setTimeStamp(0.982164590795);
    msg.setSource(60821U);
    msg.setSourceEntity(208U);
    msg.setDestination(5676U);
    msg.setDestinationEntity(246U);
    msg.req_id = 27692U;
    msg.ttl = 1391U;
    msg.destination.assign("SLHNYXRNMJSIOUTZUPLWFHIXBOZYEXAFKCROWBFUNHBGGVDVJGVWPFTVCAPTOYINJQFUYCQWPXTZJGYEXVUTZWGBQGUHLYGOIXAVKZQACTWZKMKXQJBAEAOIMNAHCELILPRIKTYECWJCYNMWJSVHFRMFJSDBLHJ");
    const char tmp_msg_0[] = {-96, 118, -29, 57, -115, -48, -104, 15, -2, -51, -23, -119, 125, -4, -81, 126, -111, -56, -73, 54, 10, 111, -59, 124, 10, -37, -89, 66, -120, 26, 107, 41, -89, -88, 87, 59, 97, -125, 123, 0, 14, -120, -39, 68, 5, -62, -53, -45, 55, -67, 85, 52, -64, 20, -32, -108, 18, -104, -13, -77, 95, -108, 100, 126};
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
    msg.setTimeStamp(0.975005603871);
    msg.setSource(28626U);
    msg.setSourceEntity(50U);
    msg.setDestination(6339U);
    msg.setDestinationEntity(99U);
    msg.req_id = 64817U;
    msg.ttl = 63675U;
    msg.destination.assign("KEGANLSAIGWJWZDOHZOTJUAVFUOOSIMDLLXZGJDOQPPRNFTO");
    const char tmp_msg_0[] = {102, -6, 70, -116, -77, -45, -10, 83, 46, -74, 102, 35, -125, -19, 126, 34, 72, -128, 74, 87, -118, 109, 2, 121, -9, 31, 32, -22, 7, 84, -126, -92, 15, -36, -72, -78, 76, 96, 25, -93, -106, -122, 62, 53, 26, -82, 88, 84, 88, 51, -4, 37, 117, 96, -128, -2, 43, 81, -120, -45, -44, -55, -78, -58, -66, -10, -22, -5, 101, 23, 126, -27, -21, -103, -57, 83, 16, -104, -117, -95, -106, -64, 42, 88, 2, 45, 54, -47, 24, -72, 119, -113, 98, 78, 126, -16, 62, -95, 0, 35, -11, -32, 112, 17, -94, -4, 88, 28, -31, 44, 19, 97, -86, -15, 61, 64, 16, -8, -113, 73, -83, -75, 64, -118, 82, -27, 54, -72, -81, 28, 10, -16, 72, -16, 81};
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
    msg.setTimeStamp(0.979231480601);
    msg.setSource(30123U);
    msg.setSourceEntity(15U);
    msg.setDestination(48081U);
    msg.setDestinationEntity(225U);
    msg.req_id = 27025U;
    msg.ttl = 49293U;
    msg.destination.assign("KOUAZTBLNPKSZHUITXIWMYQOVDD");
    const char tmp_msg_0[] = {-48, -9, 39, -76, 113, 126, 86, -65, -19, -94, 89, -76, -92, 65, 99, 76, -94, 15, -87, -11, -106, -6, 70, -20, -95, 97, -127, 72, -12, -9, 82, 89, -127, -48, -16, -81, -75, -52, 41, 70, -128, -81, -101, 2, 52, -26, 98, 18, 92, -96, -127, 25, 72, 125, 33, 82, -67, 95, 57, -115, 22, -7, 100, -87, 97, -66, 98, 68, -90, -39, 110, -24, 93, 89, -49, 42, 124, 28, 64, 45, 47, -109, -48, 20, 70, 111, 116, -108, -54, -76, 102, -59, -127, -15, 39, -57, -100, 34, 125, 60, -87, 107, -26, -56, -54, 88, -105, -66, 97, 106, 11, -116, 65, -62, -55, 113, -87, 71, 119, -34, 2, 60, -99, 60, 97, -34, 49, -104, -122, 93, -107, -78, -23, -76, 94, 57, 93, -113, 39, 107, 4, 60, -4, -19, -106, -113, 71, -89, 31, 126, 26, 44, -18, 47, 62, 19, -17, 52, 34, 68, 61, -64, -4, 117, -96, 8, -97, 73, -59, 82, -86, 82, 17, 42, 46, -126, -125, -40, -11, -116, -5, -60, 2, 109, -17, 22, 98, -66};
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
    msg.setTimeStamp(0.0741732300507);
    msg.setSource(34600U);
    msg.setSourceEntity(85U);
    msg.setDestination(13966U);
    msg.setDestinationEntity(74U);
    msg.req_id = 8679U;
    msg.status = 40U;
    msg.text.assign("KVJFTUDBQFJMHRSIMJZURPELXKTYZYMAXSUABCPFHYYNCVLWSUSARPBO");

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
    msg.setTimeStamp(0.688384670892);
    msg.setSource(59899U);
    msg.setSourceEntity(18U);
    msg.setDestination(22348U);
    msg.setDestinationEntity(155U);
    msg.req_id = 44515U;
    msg.status = 14U;
    msg.text.assign("HXKJIQYZNULA");

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
    msg.setTimeStamp(0.135451204541);
    msg.setSource(64309U);
    msg.setSourceEntity(166U);
    msg.setDestination(60600U);
    msg.setDestinationEntity(5U);
    msg.req_id = 34831U;
    msg.status = 241U;
    msg.text.assign("ORMNHEPSIHDONWGLBFAWFJMEJEYOHTCVFCGYYQWNGAXDSN");

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
    msg.setTimeStamp(0.524452261365);
    msg.setSource(22772U);
    msg.setSourceEntity(163U);
    msg.setDestination(21688U);
    msg.setDestinationEntity(163U);
    msg.group_name.assign("ZHGAMXIFMGGEOV");
    msg.links = 2189783030U;

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
    msg.setTimeStamp(0.579143317414);
    msg.setSource(58178U);
    msg.setSourceEntity(211U);
    msg.setDestination(23449U);
    msg.setDestinationEntity(173U);
    msg.group_name.assign("VQYGENNMOJVVRIRVYWHKMCSTPHKEDKXGCWUQCIBUKOWFYHXDBHTZHIOUISTTQDCVGOFSLMKHUWENODAOMSYGNAERUGQEMIOPIAKSFQZWXHFNRPHUMWQPIZHHMIUGRMVYSAJWBTBPEBLUISDJXPXRPXQZEWVVPNLCJGDDXTJJODRQUCVFJXZRYGQKTXWCBCXFOTYCBBUINATSRAAPYJCSBJQTYASPFNFLZLN");
    msg.links = 1209652261U;

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
    msg.setTimeStamp(0.281515948021);
    msg.setSource(7794U);
    msg.setSourceEntity(34U);
    msg.setDestination(25314U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("QRMHTCYWOMLCIHTMENXDXGURFQLCOOIAU");
    msg.links = 294339687U;

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
    msg.setTimeStamp(0.196953947047);
    msg.setSource(57167U);
    msg.setSourceEntity(99U);
    msg.setDestination(35122U);
    msg.setDestinationEntity(112U);
    msg.groupname.assign("KERUTJWWZNXSOZBVCRTCXBRVIUFNYLHQAR");
    msg.action = 165U;
    msg.grouplist.assign("YNIRLAYKDTMYUIDEAJBIYNUVNFHUSOZOITWUQWJFGQVLVH");

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
    msg.setTimeStamp(0.463783922473);
    msg.setSource(47670U);
    msg.setSourceEntity(104U);
    msg.setDestination(47694U);
    msg.setDestinationEntity(239U);
    msg.groupname.assign("IJEDJDBJLTSXKJEIFTSCMPMMIYUUGPCONCKAMSCWVONTDHXJ");
    msg.action = 216U;
    msg.grouplist.assign("RCJONWFSSZIBKIDXVPHEOAZMWLAOELQGQOFWDZKBJNHFYCXGBPYBDPOXRLMGEGCLXOHGDTKZEEFSHTRDYVUNCCTJMCNHTVTZJMBBLFSMMDTQDSLPPAPJAVPXNOPNZAJIBVUKXYXXQCXAWF");

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
    msg.setTimeStamp(0.107028403451);
    msg.setSource(1791U);
    msg.setSourceEntity(85U);
    msg.setDestination(2000U);
    msg.setDestinationEntity(94U);
    msg.groupname.assign("LBBBDJVRXVOLTPAIJJWXHJLCKZUUS");
    msg.action = 135U;
    msg.grouplist.assign("AHFUZNDQJSMAWEBGSCFWEJMHBEUDBHDZNMMKHCUJCRSPPLMOPSTEMQPXFWNHQYFZKAKFKACOHYXXZRYSWSCLVLJVPRDBTPKQEZFXDOYYWJJBZWBRLZLUANPVHLMYVHKAGAYQWCEG");

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
    msg.setTimeStamp(0.413600291832);
    msg.setSource(4721U);
    msg.setSourceEntity(204U);
    msg.setDestination(49033U);
    msg.setDestinationEntity(211U);
    msg.value = 0.453165949964;
    msg.sys_src = 42099U;

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
    msg.setTimeStamp(0.511266594598);
    msg.setSource(59266U);
    msg.setSourceEntity(148U);
    msg.setDestination(40339U);
    msg.setDestinationEntity(222U);
    msg.value = 0.471068408771;
    msg.sys_src = 36369U;

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
    msg.setTimeStamp(0.872985487475);
    msg.setSource(46137U);
    msg.setSourceEntity(16U);
    msg.setDestination(11872U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0483188927504;
    msg.sys_src = 29854U;

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
    msg.setTimeStamp(0.0241914646073);
    msg.setSource(59325U);
    msg.setSourceEntity(1U);
    msg.setDestination(40615U);
    msg.setDestinationEntity(37U);
    msg.value = 0.550721604411;
    msg.units = 216U;

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
    msg.setTimeStamp(0.892247524173);
    msg.setSource(59762U);
    msg.setSourceEntity(235U);
    msg.setDestination(15806U);
    msg.setDestinationEntity(178U);
    msg.value = 0.826765057997;
    msg.units = 124U;

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
    msg.setTimeStamp(0.862670196108);
    msg.setSource(5178U);
    msg.setSourceEntity(144U);
    msg.setDestination(27746U);
    msg.setDestinationEntity(231U);
    msg.value = 0.882241912477;
    msg.units = 94U;

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
    msg.setTimeStamp(0.0878411550859);
    msg.setSource(26955U);
    msg.setSourceEntity(110U);
    msg.setDestination(33673U);
    msg.setDestinationEntity(141U);
    msg.base_lat = 0.231405779032;
    msg.base_lon = 0.977731954496;
    msg.base_time = 0.326825118508;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28347U;
    tmp_msg_0.priority = 85;
    tmp_msg_0.x = 29426;
    tmp_msg_0.y = 20106;
    tmp_msg_0.z = -23465;
    tmp_msg_0.t = -4217;
    IMC::RowsCoverage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8083480662;
    tmp_tmp_msg_0_0.lon = 0.357871399468;
    tmp_tmp_msg_0_0.z = 0.776912506383;
    tmp_tmp_msg_0_0.z_units = 207U;
    tmp_tmp_msg_0_0.speed = 0.627430609652;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_tmp_msg_0_0.bearing = 0.81501234038;
    tmp_tmp_msg_0_0.cross_angle = 0.24116525702;
    tmp_tmp_msg_0_0.width = 0.993049516384;
    tmp_tmp_msg_0_0.length = 0.446418752831;
    tmp_tmp_msg_0_0.coff = 55U;
    tmp_tmp_msg_0_0.angaperture = 0.30082084208;
    tmp_tmp_msg_0_0.range = 15182U;
    tmp_tmp_msg_0_0.overlap = 30U;
    tmp_tmp_msg_0_0.flags = 17U;
    tmp_tmp_msg_0_0.custom.assign("TCYIRWZLUORXKNXCD");
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
    msg.setTimeStamp(0.969179186627);
    msg.setSource(36179U);
    msg.setSourceEntity(235U);
    msg.setDestination(35586U);
    msg.setDestinationEntity(66U);
    msg.base_lat = 0.448136225508;
    msg.base_lon = 0.247459871384;
    msg.base_time = 0.0671319549953;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 47496U;
    tmp_msg_0.priority = -17;
    tmp_msg_0.x = -32745;
    tmp_msg_0.y = 12126;
    tmp_msg_0.z = -15055;
    tmp_msg_0.t = 434;
    IMC::Acceleration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.time = 0.154275869416;
    tmp_tmp_msg_0_0.x = 0.951965203914;
    tmp_tmp_msg_0_0.y = 0.621243915636;
    tmp_tmp_msg_0_0.z = 0.22347811289;
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
    msg.setTimeStamp(0.412584549402);
    msg.setSource(53317U);
    msg.setSourceEntity(252U);
    msg.setDestination(63298U);
    msg.setDestinationEntity(31U);
    msg.base_lat = 0.70977624265;
    msg.base_lon = 0.7347836003;
    msg.base_time = 0.20584852597;

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
    msg.setTimeStamp(0.525429123702);
    msg.setSource(54966U);
    msg.setSourceEntity(152U);
    msg.setDestination(40128U);
    msg.setDestinationEntity(220U);
    msg.base_lat = 0.483917489744;
    msg.base_lon = 0.609511045287;
    msg.base_time = 0.652419407702;
    const char tmp_msg_0[] = {34, 102, 43, -24, 102, -76, -120, -14, 94, -10, 7, -19, 113, 33, -127, 87, -15, -22, 33, -127, 69, 80, -101, 59, 9, -72, -57, -101, -112, 15, -47, -72, 123, -88, -9, -119, 47, 34, 5, 113, -82, 52, 4, -104, 1, 70, 117, 15, -11, -70, -126, -63, 110, -107, 55, -13, -56, 53, -125, 101, -69, -102, 85, 86, -76, -30, -114, 46, -3, 76, -50, 13, 25, -71, 107, -72, -11, 125, -20, 79, 61, -73, -47, 17, 98, -14, -67, 40, 84, -26, -11, 111, 33, 9, -102, -86, -13, 105, -18, -21, -68, -83, 96, 86, 74, -1, 55, -15, -61, 82, -70, -100, 58, 9, 9, -25, -44, -44, -62, -119, -105, 55, -74, 31, 82, -96, 12, 4, -16, 69, 73, -99, -85, -73, -56, 80, 43, -42, -62, 111, 12, -128, 59, -4, 69, -47, 81, 101, 56, -82, 21, 90, 89, -11, 69, 120, 126, 110, -28, 85, -36, -123, 95, -71, -20, -13, -52, 115, 29, 53, 93, -56, -23, 72, 105, 111, 81, 102, 114, 51, 71, 57, 33, 107, 20, 15, -10, -117, 113, -47, 59, 104, -60, -82, -87, 2, -25, -55, 3, -19, 118, -1, -70, -11, 85, 109, -31, 76, -94, 94, -41, 47, -48, 38, 50, -117, -28, -109, -26, -79, -94, 85, 73, -99, 123, -16, -119, -42, -73, 88, 56, -72, -20, -63, 75, -33, -95, -83, 41, -83, -39, -2, 38};
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
    msg.setTimeStamp(0.807000381899);
    msg.setSource(37356U);
    msg.setSourceEntity(239U);
    msg.setDestination(56474U);
    msg.setDestinationEntity(87U);
    msg.base_lat = 0.0534242888246;
    msg.base_lon = 0.647798781424;
    msg.base_time = 0.447793746098;
    const char tmp_msg_0[] = {93, 81, 115, -33, -72, -61, -55, 94, 86, 8, 3, -9, 125, -86, -80, 115, 106, 6, -60, -89, 20, 67, 91, -119, -48, -81, 20, -104, -35, 114, 10, 109, 37, 67, -57, 55, -92, 33, 110, 0, 105, 70, -95, 44, 74, 5, -36, -54, -20, -93, 46, -14, -4, 119, 3, 41, -70, -79, 23, -106, 21, 42, 95, 10, -47, -9, -38, -74, -10, 87, -82, -53, 39, 85, 78, 36, 91, 106, -88, 105, -22, 96, 31, 39, -108, 56, -89, -43, 62, -18, 17, 0, -87, 6, -64, 16, -62, -122, 23, -55, -78, 20, 67, -26, 104, -31, 122, -55, -19, 4, -93, 57, -31, 26, -10, -8, -18, 7, -105, 32, -33, -22, -11, 5, -33, 118, 40, 46, -17, -87, -44, -109, -116, 65, -4, -14, -127, -24, 60, -43, 28, -33, -73, 71, -66, 115, 9, -68, -125, -86, 123, -5, 2, -108, -36, -3, 13, 112, -2, -118, -107, -20, 65, 117, -85, 52, -107, 16, -51, 54, -111, 90, -104, -95, -88, 23, 120, 44, -29, 97, -37, -39, 13, 33, 11, -111, -4};
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
    msg.setTimeStamp(0.397293907777);
    msg.setSource(31898U);
    msg.setSourceEntity(254U);
    msg.setDestination(63882U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.660573814133;
    msg.base_lon = 0.477699729131;
    msg.base_time = 0.563487537748;
    const char tmp_msg_0[] = {-7, 40, 126, -96, 32, -124, 114, 41, -29, 25, 68, -101, -111, -104, 58, 14, 68, -26, -20, -121, 110, -25, -77, -2, 53, -68, -110, -56, 86, -50, -94, 72, -102, 2, -11, 25, -54, -104, 2, 50};
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
    msg.setTimeStamp(0.129315030963);
    msg.setSource(45317U);
    msg.setSourceEntity(99U);
    msg.setDestination(58098U);
    msg.setDestinationEntity(105U);
    msg.sys_id = 30469U;
    msg.priority = -98;
    msg.x = -17485;
    msg.y = -21598;
    msg.z = -20370;
    msg.t = -22070;
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.0902339556543;
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
    msg.setTimeStamp(0.236947542879);
    msg.setSource(4629U);
    msg.setSourceEntity(172U);
    msg.setDestination(20708U);
    msg.setDestinationEntity(91U);
    msg.sys_id = 27386U;
    msg.priority = -26;
    msg.x = 17997;
    msg.y = -1856;
    msg.z = -19447;
    msg.t = -30465;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 8U;
    tmp_msg_0.op = 53U;
    tmp_msg_0.err_mean = 0.999798435203;
    tmp_msg_0.dist_min_abs = 0.692658647522;
    tmp_msg_0.dist_min_mean = 0.67575761036;
    tmp_msg_0.roll_rate_mean = 0.119791529311;
    tmp_msg_0.time = 0.00513542717158;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 179U;
    tmp_tmp_msg_0_0.lon_gain = 0.509084030896;
    tmp_tmp_msg_0_0.lat_gain = 0.465625260666;
    tmp_tmp_msg_0_0.bond_thick = 0.768352879555;
    tmp_tmp_msg_0_0.lead_gain = 0.697588003631;
    tmp_tmp_msg_0_0.deconfl_gain = 0.984510018208;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.101090495336;
    tmp_tmp_msg_0_0.safe_dist = 0.971359670896;
    tmp_tmp_msg_0_0.deconflict_offset = 0.441548985024;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.615463364809;
    tmp_tmp_msg_0_0.accel_lim_x = 0.893947254791;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.184391456444);
    msg.setSource(56204U);
    msg.setSourceEntity(121U);
    msg.setDestination(10188U);
    msg.setDestinationEntity(218U);
    msg.sys_id = 35453U;
    msg.priority = -98;
    msg.x = 25332;
    msg.y = 3794;
    msg.z = 1273;
    msg.t = -15711;
    IMC::MsgList tmp_msg_0;
    IMC::UamTxFrame tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 23117U;
    tmp_tmp_msg_0_0.sys_dst.assign("DKKDIYIWCSUVDCCYGUIVUXPKUNMZNTJTBZSLULTGXFKDYACWADDBFANYCWJIYF");
    tmp_tmp_msg_0_0.flags = 124U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {34, -46, -24, -67, 116, 36, -26, -109, 6, 124, -108, -57, -90, -46, 11, -11, 87, -50, 80, -111, 97, -98, -120, -1, -128, 92, -94, -33, 17, 46, 83, -59, -25, 39, 13, 110, 98, 45, -44, 117, -109, -80, -102, 0, 17, 41, -10, -12, 52, -118, 97, -93, 109, 67, 91, 113, -127, 63, -128, 82, 114, -19, -105, 19, -22, -8, -98, -121, -105, -66, -45, 71, 69, 106, -62, 126, -92, -104, -71, -23, 5, -117};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.118381087759);
    msg.setSource(27216U);
    msg.setSourceEntity(227U);
    msg.setDestination(34618U);
    msg.setDestinationEntity(88U);
    msg.req_id = 23800U;
    msg.type = 142U;
    msg.max_size = 35655U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.766445235387;
    tmp_msg_0.base_lon = 0.363758723196;
    tmp_msg_0.base_time = 0.935759952917;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 44205U;
    tmp_tmp_msg_0_0.destination = 41592U;
    tmp_tmp_msg_0_0.timeout = 0.277261610385;
    IMC::UsblPositionExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.target.assign("JJPKTDHMIAAOXOGVISCIXMWNYHIREVCBYDLTIQXXVLFSCPAGQQRVCXQNRHAGORUWQOUIWKZXR");
    tmp_tmp_tmp_msg_0_0_0.x = 0.707650136509;
    tmp_tmp_tmp_msg_0_0_0.y = 0.295194534869;
    tmp_tmp_tmp_msg_0_0_0.z = 0.0113282166863;
    tmp_tmp_tmp_msg_0_0_0.n = 0.671802814232;
    tmp_tmp_tmp_msg_0_0_0.e = 0.611813810519;
    tmp_tmp_tmp_msg_0_0_0.d = 0.862550346213;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.961354772032;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.546427489114;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.205966217607;
    tmp_tmp_tmp_msg_0_0_0.accuracy = 0.847680413028;
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
    msg.setTimeStamp(0.775948127666);
    msg.setSource(42203U);
    msg.setSourceEntity(166U);
    msg.setDestination(893U);
    msg.setDestinationEntity(153U);
    msg.req_id = 64909U;
    msg.type = 21U;
    msg.max_size = 46273U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.49393764202;
    tmp_msg_0.base_lon = 0.287746451942;
    tmp_msg_0.base_time = 0.800276859858;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 49813U;
    tmp_tmp_msg_0_0.priority = 26;
    tmp_tmp_msg_0_0.x = 26472;
    tmp_tmp_msg_0_0.y = 21879;
    tmp_tmp_msg_0_0.z = -6632;
    tmp_tmp_msg_0_0.t = -19300;
    IMC::SetEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("SUUFOETTIYSKTGHIRBHKXRVQDJHGDDUPGZOCJWCGKZFWZAMAPWFLLRYEQZSKLNAHXUZVCAEVDYGXQNMNXETMMZECXVDQDJUXUWHVJWRFZSBABFLDIBURTRXAPQMIGLABRMNMCLRHQWFSOWSZPEPQNIPVDQBHKYIHFKCKBRXJMQJKOKSYEY");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.586627845799);
    msg.setSource(64426U);
    msg.setSourceEntity(188U);
    msg.setDestination(58560U);
    msg.setDestinationEntity(244U);
    msg.req_id = 65190U;
    msg.type = 53U;
    msg.max_size = 21764U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.086388894692;
    tmp_msg_0.base_lon = 0.801900324672;
    tmp_msg_0.base_time = 0.450823551499;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 45055U;
    tmp_tmp_msg_0_0.destination = 33790U;
    tmp_tmp_msg_0_0.timeout = 0.493814877502;
    IMC::RelativeHumidity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.177108091066;
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
    msg.setTimeStamp(0.715883375005);
    msg.setSource(24070U);
    msg.setSourceEntity(28U);
    msg.setDestination(8811U);
    msg.setDestinationEntity(33U);
    msg.original_source = 912U;
    msg.destination = 65493U;
    msg.timeout = 0.352942280214;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 192U;
    tmp_msg_0.period = 4193524775U;
    tmp_msg_0.duty_cycle = 4231307895U;
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
    msg.setTimeStamp(0.758292581314);
    msg.setSource(62774U);
    msg.setSourceEntity(145U);
    msg.setDestination(18269U);
    msg.setDestinationEntity(177U);
    msg.original_source = 23449U;
    msg.destination = 24477U;
    msg.timeout = 0.342768744552;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 235U;
    tmp_msg_0.entities.assign("NPETAAMGGZYBNNXDKRIKBFTGGCOEQXQVJUMQFZIPKAHUIJZMKEKVBMGNYEGVWTFLZMTNNPHLGSSERRHDBB");
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
    msg.setTimeStamp(0.569351621676);
    msg.setSource(54118U);
    msg.setSourceEntity(234U);
    msg.setDestination(10347U);
    msg.setDestinationEntity(112U);
    msg.original_source = 18767U;
    msg.destination = 4156U;
    msg.timeout = 0.110004907113;
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 40265U;
    tmp_msg_0.type = 135U;
    tmp_msg_0.utc_year = 64646U;
    tmp_msg_0.utc_month = 235U;
    tmp_msg_0.utc_day = 147U;
    tmp_msg_0.utc_time = 0.400157558842;
    tmp_msg_0.lat = 0.917464833453;
    tmp_msg_0.lon = 0.901822030503;
    tmp_msg_0.height = 0.931153649785;
    tmp_msg_0.satellites = 159U;
    tmp_msg_0.cog = 0.176653020558;
    tmp_msg_0.sog = 0.517877251982;
    tmp_msg_0.hdop = 0.489273669473;
    tmp_msg_0.vdop = 0.337362174722;
    tmp_msg_0.hacc = 0.810274879677;
    tmp_msg_0.vacc = 0.782285220759;
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
    IMC::LblRange msg;
    msg.setTimeStamp(0.649633065959);
    msg.setSource(46947U);
    msg.setSourceEntity(150U);
    msg.setDestination(56041U);
    msg.setDestinationEntity(226U);
    msg.id = 41U;
    msg.range = 0.131816763976;

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
    msg.setTimeStamp(0.993340150394);
    msg.setSource(7447U);
    msg.setSourceEntity(180U);
    msg.setDestination(39508U);
    msg.setDestinationEntity(19U);
    msg.id = 27U;
    msg.range = 0.0845994175714;

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
    msg.setTimeStamp(0.95429659843);
    msg.setSource(36384U);
    msg.setSourceEntity(88U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(161U);
    msg.id = 126U;
    msg.range = 0.280711197327;

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
    msg.setTimeStamp(0.877939409816);
    msg.setSource(3937U);
    msg.setSourceEntity(106U);
    msg.setDestination(50859U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("UHKKFIRBJQXFIUGBTHNZXNRIBVJSAEMAHXFMKNBDAUUWMMLVMOQQBKTQHGTIYZWGRMVVEJHFCPOTRMOXREJDNNNYNQCUQUUGYEMKVKDDXEVFUGTPGMSJPCOIREVSLWZIWCAZKLDXLYECZVVFSAAJYWQCYBPFYIQYNOJSLWJXIWXHHORBHEZTBRBZPNZSKSMCXKPWDDLHRTOLULWGABPPPLGZELDDPAZRDCVSUTHQOC");
    msg.lat = 0.961575893488;
    msg.lon = 0.0377879769345;
    msg.depth = 0.787652419546;
    msg.query_channel = 48U;
    msg.reply_channel = 147U;
    msg.transponder_delay = 252U;

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
    msg.setTimeStamp(0.685775860993);
    msg.setSource(8678U);
    msg.setSourceEntity(78U);
    msg.setDestination(21123U);
    msg.setDestinationEntity(47U);
    msg.beacon.assign("DGURDNBQMPWYGDXQGFDRNRKPMPPGDNDCVVYKUIRFARYQPLMDQMRIZFYDZTIZKNJFBNTPCSGRZENABTVBWPSCHNIJUMZOETLACMFUUSVYXEWLQGKYAIWJTHDMBVHUQJYBCKXNFTRATOULIQKRBYEEZSXHKFLGMVYSWOWXCWKFEGHIIOQXNUGWHPAMOTVOCLSLHIS");
    msg.lat = 0.776070769741;
    msg.lon = 0.559572338592;
    msg.depth = 0.511404437472;
    msg.query_channel = 80U;
    msg.reply_channel = 238U;
    msg.transponder_delay = 138U;

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
    msg.setTimeStamp(0.138891508768);
    msg.setSource(15598U);
    msg.setSourceEntity(12U);
    msg.setDestination(3363U);
    msg.setDestinationEntity(161U);
    msg.beacon.assign("TRRYJGQLCTUMNIWKZILXEVUXCFHTBWVJCPABEKEYDWHYQBWYDHLNEHCIEBMDJVMLJPJUTPXOKACPBGKSZJGFLURUCOBWIYXBNKQZFWCFPMEHXLYBNMISFAVAOPMLGFJYPOHAJRPKWMDDTTKVGYXGZKJNQSNFUGIHVQPUOYXKRZCWFEHDNGPZRSYUSSVDVZATIQQAGIDIKSQRTNBLVOXSAHTUDGQNFJTMVOAMXLERFEWLRQCZNZSZEMXWCAUOOB");
    msg.lat = 0.208273044455;
    msg.lon = 0.0376024763435;
    msg.depth = 0.218869079841;
    msg.query_channel = 4U;
    msg.reply_channel = 121U;
    msg.transponder_delay = 65U;

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
    msg.setTimeStamp(0.68307296182);
    msg.setSource(27928U);
    msg.setSourceEntity(38U);
    msg.setDestination(29887U);
    msg.setDestinationEntity(95U);
    msg.op = 15U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TNWULDZORAZYCSCOOGXVIIOWWFRCMIOTQCLJRXGSPNOCLEECAHFGHMUGIYQPNBWJHBMBSLZFZNFAEQADLAJGGHQIERQTZDBJYPMTMYGGEVPQMKLUNPKIXLQWHBOUXTEJHNZTUPPTRANVSCYNTTDVJOKCAFELKURAQEJWDUDBMBUNPQWFYUVWWVFBSJRVKREJKHHHOXRHDSWISLIZLUCXKSFDYTMGGS");
    tmp_msg_0.lat = 0.654474412178;
    tmp_msg_0.lon = 0.938037439422;
    tmp_msg_0.depth = 0.475263120647;
    tmp_msg_0.query_channel = 236U;
    tmp_msg_0.reply_channel = 170U;
    tmp_msg_0.transponder_delay = 96U;
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
    msg.setTimeStamp(0.784557215581);
    msg.setSource(10676U);
    msg.setSourceEntity(232U);
    msg.setDestination(34578U);
    msg.setDestinationEntity(114U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.816433371286);
    msg.setSource(24486U);
    msg.setSourceEntity(41U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(122U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.178776621216);
    msg.setSource(64007U);
    msg.setSourceEntity(240U);
    msg.setDestination(23343U);
    msg.setDestinationEntity(128U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.796186197978;
    tmp_msg_0.units = 101U;
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
    msg.setTimeStamp(0.0928955659148);
    msg.setSource(16615U);
    msg.setSourceEntity(145U);
    msg.setDestination(29353U);
    msg.setDestinationEntity(119U);
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 50U;
    tmp_msg_0.request_id = 42229U;
    tmp_msg_0.command = 43U;
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 36686U;
    tmp_tmp_msg_0_0.lat = 0.437533732839;
    tmp_tmp_msg_0_0.lon = 0.143447646847;
    tmp_tmp_msg_0_0.z = 0.963732483504;
    tmp_tmp_msg_0_0.z_units = 102U;
    tmp_tmp_msg_0_0.pitch = 0.871640543304;
    tmp_tmp_msg_0_0.amplitude = 0.924715325138;
    tmp_tmp_msg_0_0.duration = 2074U;
    tmp_tmp_msg_0_0.speed = 0.473564161777;
    tmp_tmp_msg_0_0.speed_units = 173U;
    tmp_tmp_msg_0_0.radius = 0.523983824287;
    tmp_tmp_msg_0_0.direction = 152U;
    tmp_tmp_msg_0_0.custom.assign("CCKMACYTECIQMMGYDFVZGXDJOQONTLOUURSHXKEWAOQMQXNOJVNZZKD");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.calib_time = 22904U;
    tmp_msg_0.info.assign("EGQWKCDWPXOUFHFXEKRACSTZNCKGLZYZIOFSVVNBMBLULJOVGYSXKDRRNCQUOGTOYQFBPDLTXANHJQLJPRRIUHNJHAHGPMTIFVVSHOKWXMYYJOABARMIGGQSFEXKFNIUVJZCSYXYTPTOJCBDWBCZQXHSZLWAQUMHMXIKFCNDISTDBZEIDGWJNEQBJWDQRNLK");
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
    msg.setTimeStamp(0.8245213218);
    msg.setSource(22400U);
    msg.setSourceEntity(175U);
    msg.setDestination(46451U);
    msg.setDestinationEntity(43U);
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 93U;
    tmp_msg_0.zoom = 199U;
    tmp_msg_0.action = 202U;
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
    msg.setTimeStamp(0.168164806272);
    msg.setSource(16606U);
    msg.setSourceEntity(65U);
    msg.setDestination(23062U);
    msg.setDestinationEntity(185U);
    msg.op = 233U;
    msg.system.assign("WIJPBEHHZAPECRUZKOQMCNUVDXHMEZBQBNNGLRMQVPLKGDGNZDURKKGNYSGUWZOOFVFMOAJWPSUWRIHLYUSOUFETXGIQDCDULZXHLEGVBIXPYOIJBKJRR");
    msg.range = 0.386385471751;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.917796564993;
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
    msg.setTimeStamp(0.975410534008);
    msg.setSource(51222U);
    msg.setSourceEntity(10U);
    msg.setDestination(35468U);
    msg.setDestinationEntity(105U);
    msg.op = 34U;
    msg.system.assign("ZSPETSYKKYVMIETZQIXQSCXYLWBOMBKZMGWXCNZDTOKWVJUVIKSLFTWJIFMSXFCLTDPUWMVMMIEEQFUDFYXFCHNNBNBMXRGYCGPXGCMLZITNEZEESWJLEAVUVWIIHAYGUHSAWJGRABGACDKRYHKKCUNSL");
    msg.range = 0.721799669143;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.797255076944;
    tmp_msg_0.base_lon = 0.535477526775;
    tmp_msg_0.base_time = 0.897722842733;
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
    msg.setTimeStamp(0.943336048857);
    msg.setSource(13714U);
    msg.setSourceEntity(86U);
    msg.setDestination(45799U);
    msg.setDestinationEntity(41U);
    msg.op = 254U;
    msg.system.assign("DBQLCLUPOEEEFJVCXEFHFSCWZWMTTJGHUSEZOPQZNDMGAZPGMNIZBQIBCGDPREKAHVWQYYJYQNVPGRULQBSVMYUNAUWNWTONC");
    msg.range = 0.414529672101;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("HBLYDHYLURIKJBLYOEIMJIJSWVRULMWOUEZPRF");
    tmp_msg_0.data.assign("AJALWYNPLBEHWGVWZCKXVKGZMOJYWJNPHXLAZOWVMEMSTRMCNZLEKPSKDBGFJDKMDNFQABUKH");
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
    msg.setTimeStamp(0.00197178828529);
    msg.setSource(61821U);
    msg.setSourceEntity(245U);
    msg.setDestination(21880U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.152158797401);
    msg.setSource(30707U);
    msg.setSourceEntity(248U);
    msg.setDestination(23126U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.1253413612);
    msg.setSource(50204U);
    msg.setSourceEntity(66U);
    msg.setDestination(62243U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.459877979919);
    msg.setSource(43497U);
    msg.setSourceEntity(217U);
    msg.setDestination(11165U);
    msg.setDestinationEntity(23U);
    msg.list.assign("KUIXOHJZZWHAPHGFAETRUMJYADPZDJUXETCZNFUPARBQGLPBOINTJ");

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
    msg.setTimeStamp(0.48135447007);
    msg.setSource(14099U);
    msg.setSourceEntity(173U);
    msg.setDestination(57562U);
    msg.setDestinationEntity(121U);
    msg.list.assign("RAOLZTTGLINTNWZOVVXANHZZBXQJTDGJZXQCXYCFFMNOTZHLYGEFEVGLRAXGIAMBNVWSRKRLAZFXJEQGERDXKFRFMGBV");

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
    msg.setTimeStamp(0.0693257926656);
    msg.setSource(1754U);
    msg.setSourceEntity(217U);
    msg.setDestination(14337U);
    msg.setDestinationEntity(221U);
    msg.list.assign("AKUASSSFCTNDLKAXUHIRNFNHTRVIXENODGKKXURPSITLDPBZFNVBCZVXMXOQNIFOXQBACFYLJSCPHXEZVHFNHNJCSIVJJTXYRAWFJKWGDKVHGMBOUDVODDTYPSIOZVGTPWMUYZWBGMOOBLPUCLUZQDFKJQIMJUDZEYENEBZELVPMRJRCZTKMPRAFTKBMUOIRNWEHPFMDGHYTGJPAYAEMGLZWHGQSXWWLOTCCYQIQULAHBRQSYEQVK");

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
    msg.setTimeStamp(0.902587564967);
    msg.setSource(13801U);
    msg.setSourceEntity(58U);
    msg.setDestination(22127U);
    msg.setDestinationEntity(132U);
    msg.peer.assign("KARNRYQBORFLXIOZNLEKCSUPQLTYFGAODGJUWOXUONNYKFYCVDMUZHHSSJTXNWSQKOPLDTBUKHIACRNOHZYCIMHNOFEECHLVINBYIJMTDSZDXBURWVZHNRWXMFQNCBTKPSTDYOXIECGFGGUPQHSJEJXZZUWJJCSAXGVLDZZSELAABHBBEKVAIMFMDYWACXQU");
    msg.rssi = 0.397570857184;
    msg.integrity = 17771U;

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
    msg.setTimeStamp(0.232031418458);
    msg.setSource(61785U);
    msg.setSourceEntity(12U);
    msg.setDestination(51287U);
    msg.setDestinationEntity(89U);
    msg.peer.assign("IWEATCFZJSDQZGWKXMPNNUFUKJ");
    msg.rssi = 0.0204385755071;
    msg.integrity = 835U;

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
    msg.setTimeStamp(0.991448910979);
    msg.setSource(55149U);
    msg.setSourceEntity(106U);
    msg.setDestination(9756U);
    msg.setDestinationEntity(89U);
    msg.peer.assign("XFTHFIRDMWVIWPIKLUMZSQJZUZXYONOYYCRDFVUTUQJNIDSACLCQGVAAEOGCLHZSOWHFVQCFOTHWIKEXJKNOPQYCPGTGZGGWUSPLAPYVCBRBXHQMSNWIQUIVNDHKRWLBXJVSCTFJPZRHKVBLGKESTVHLRMWYMPQTBOVNPDAGYZP");
    msg.rssi = 0.221634175847;
    msg.integrity = 15585U;

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
    IMC::Rpm msg;
    msg.setTimeStamp(0.591157086801);
    msg.setSource(43580U);
    msg.setSourceEntity(10U);
    msg.setDestination(54198U);
    msg.setDestinationEntity(132U);
    msg.value = 22602;

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
    msg.setTimeStamp(0.0142708573252);
    msg.setSource(33582U);
    msg.setSourceEntity(211U);
    msg.setDestination(16372U);
    msg.setDestinationEntity(148U);
    msg.value = -14849;

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
    msg.setTimeStamp(0.987899945135);
    msg.setSource(6380U);
    msg.setSourceEntity(228U);
    msg.setDestination(44994U);
    msg.setDestinationEntity(131U);
    msg.value = -4295;

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
    msg.setTimeStamp(0.996242916542);
    msg.setSource(43447U);
    msg.setSourceEntity(212U);
    msg.setDestination(22866U);
    msg.setDestinationEntity(227U);
    msg.value = 0.756938539456;

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
    msg.setTimeStamp(0.108177510149);
    msg.setSource(31769U);
    msg.setSourceEntity(38U);
    msg.setDestination(33046U);
    msg.setDestinationEntity(153U);
    msg.value = 0.0300108768258;

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
    msg.setTimeStamp(0.998387162636);
    msg.setSource(9290U);
    msg.setSourceEntity(180U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(249U);
    msg.value = 0.376441285133;

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
    msg.setTimeStamp(0.753280404233);
    msg.setSource(30110U);
    msg.setSourceEntity(201U);
    msg.setDestination(7335U);
    msg.setDestinationEntity(169U);
    msg.value = 0.794576248595;

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
    msg.setTimeStamp(0.602497421098);
    msg.setSource(28492U);
    msg.setSourceEntity(45U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(87U);
    msg.value = 0.0570811485951;

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
    msg.setTimeStamp(0.343185202925);
    msg.setSource(15526U);
    msg.setSourceEntity(17U);
    msg.setDestination(50329U);
    msg.setDestinationEntity(78U);
    msg.value = 0.267987839629;

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
    msg.setTimeStamp(0.783765360978);
    msg.setSource(18727U);
    msg.setSourceEntity(11U);
    msg.setDestination(50862U);
    msg.setDestinationEntity(233U);
    msg.validity = 44436U;
    msg.type = 86U;
    msg.utc_year = 19149U;
    msg.utc_month = 133U;
    msg.utc_day = 237U;
    msg.utc_time = 0.396072223524;
    msg.lat = 0.734753634248;
    msg.lon = 0.628884181155;
    msg.height = 0.896232024004;
    msg.satellites = 19U;
    msg.cog = 0.866801410391;
    msg.sog = 0.598834121782;
    msg.hdop = 0.769718153541;
    msg.vdop = 0.382812508626;
    msg.hacc = 0.580077975379;
    msg.vacc = 0.106236979763;

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
    msg.setTimeStamp(0.0281472450958);
    msg.setSource(21517U);
    msg.setSourceEntity(43U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(251U);
    msg.validity = 23985U;
    msg.type = 132U;
    msg.utc_year = 13436U;
    msg.utc_month = 175U;
    msg.utc_day = 200U;
    msg.utc_time = 0.580861171282;
    msg.lat = 0.626716586128;
    msg.lon = 0.307358855742;
    msg.height = 0.885046375075;
    msg.satellites = 208U;
    msg.cog = 0.321856259416;
    msg.sog = 0.832913330582;
    msg.hdop = 0.554961341392;
    msg.vdop = 0.832721532871;
    msg.hacc = 0.27243171872;
    msg.vacc = 0.819213251709;

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
    msg.setTimeStamp(0.97807666213);
    msg.setSource(5084U);
    msg.setSourceEntity(74U);
    msg.setDestination(17150U);
    msg.setDestinationEntity(253U);
    msg.validity = 47029U;
    msg.type = 218U;
    msg.utc_year = 17346U;
    msg.utc_month = 153U;
    msg.utc_day = 185U;
    msg.utc_time = 0.4838419591;
    msg.lat = 0.543499684152;
    msg.lon = 0.437766022615;
    msg.height = 0.452794538457;
    msg.satellites = 228U;
    msg.cog = 0.811229425548;
    msg.sog = 0.979378948376;
    msg.hdop = 0.368079825185;
    msg.vdop = 0.488424191235;
    msg.hacc = 0.50142393422;
    msg.vacc = 0.758837043575;

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
    msg.setTimeStamp(0.898568943004);
    msg.setSource(575U);
    msg.setSourceEntity(129U);
    msg.setDestination(41349U);
    msg.setDestinationEntity(174U);
    msg.time = 0.19081052295;
    msg.phi = 0.951739755841;
    msg.theta = 0.929185746844;
    msg.psi = 0.276186429442;
    msg.psi_magnetic = 0.0686002525473;

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
    msg.setTimeStamp(0.865569374507);
    msg.setSource(10085U);
    msg.setSourceEntity(21U);
    msg.setDestination(15620U);
    msg.setDestinationEntity(81U);
    msg.time = 0.924288662588;
    msg.phi = 0.210281188884;
    msg.theta = 0.852236564126;
    msg.psi = 0.468902210128;
    msg.psi_magnetic = 0.0752574596765;

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
    msg.setTimeStamp(0.405733659482);
    msg.setSource(57103U);
    msg.setSourceEntity(221U);
    msg.setDestination(62621U);
    msg.setDestinationEntity(75U);
    msg.time = 0.336706623419;
    msg.phi = 0.725554260646;
    msg.theta = 0.778059577208;
    msg.psi = 0.919289771419;
    msg.psi_magnetic = 0.405898558311;

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
    msg.setTimeStamp(0.462862999836);
    msg.setSource(54660U);
    msg.setSourceEntity(23U);
    msg.setDestination(56632U);
    msg.setDestinationEntity(169U);
    msg.time = 0.805935356039;
    msg.x = 0.207268932289;
    msg.y = 0.983647595618;
    msg.z = 0.149857589462;
    msg.timestep = 0.88706754066;

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
    msg.setTimeStamp(0.488081043236);
    msg.setSource(64246U);
    msg.setSourceEntity(81U);
    msg.setDestination(46007U);
    msg.setDestinationEntity(233U);
    msg.time = 0.238686459916;
    msg.x = 0.128060688581;
    msg.y = 0.744675965109;
    msg.z = 0.271512857948;
    msg.timestep = 0.822569285422;

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
    msg.setTimeStamp(0.257770223854);
    msg.setSource(18134U);
    msg.setSourceEntity(183U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(66U);
    msg.time = 0.378371217022;
    msg.x = 0.905544046332;
    msg.y = 0.0212479826405;
    msg.z = 0.54749152352;
    msg.timestep = 0.0778274415827;

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
    msg.setTimeStamp(0.660886481109);
    msg.setSource(2944U);
    msg.setSourceEntity(100U);
    msg.setDestination(32902U);
    msg.setDestinationEntity(160U);
    msg.time = 0.0507984683104;
    msg.x = 0.46044066918;
    msg.y = 0.309855633419;
    msg.z = 0.985794290557;

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
    msg.setTimeStamp(0.40150174527);
    msg.setSource(2820U);
    msg.setSourceEntity(167U);
    msg.setDestination(196U);
    msg.setDestinationEntity(121U);
    msg.time = 0.56769864097;
    msg.x = 0.507703619953;
    msg.y = 0.598658635413;
    msg.z = 0.0896120234014;

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
    msg.setTimeStamp(0.403288686956);
    msg.setSource(32854U);
    msg.setSourceEntity(227U);
    msg.setDestination(53715U);
    msg.setDestinationEntity(40U);
    msg.time = 0.675511882828;
    msg.x = 0.973264504219;
    msg.y = 0.869393702548;
    msg.z = 0.431205714785;

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
    msg.setTimeStamp(0.228691214427);
    msg.setSource(33482U);
    msg.setSourceEntity(73U);
    msg.setDestination(40302U);
    msg.setDestinationEntity(24U);
    msg.time = 0.812989337038;
    msg.x = 0.238763200651;
    msg.y = 0.112949560556;
    msg.z = 0.173620996831;

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
    msg.setTimeStamp(0.698070752256);
    msg.setSource(47947U);
    msg.setSourceEntity(149U);
    msg.setDestination(50438U);
    msg.setDestinationEntity(139U);
    msg.time = 0.97247178578;
    msg.x = 0.409525790948;
    msg.y = 0.814707422546;
    msg.z = 0.471835718885;

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
    msg.setTimeStamp(0.130760334331);
    msg.setSource(40060U);
    msg.setSourceEntity(222U);
    msg.setDestination(64317U);
    msg.setDestinationEntity(25U);
    msg.time = 0.132020292131;
    msg.x = 0.0699193555351;
    msg.y = 0.425700027285;
    msg.z = 0.881462360567;

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
    msg.setTimeStamp(0.846411583314);
    msg.setSource(42055U);
    msg.setSourceEntity(234U);
    msg.setDestination(33563U);
    msg.setDestinationEntity(67U);
    msg.time = 0.306086137315;
    msg.x = 0.433494839313;
    msg.y = 0.930974779874;
    msg.z = 0.0902498635877;

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
    msg.setTimeStamp(0.439697683116);
    msg.setSource(30395U);
    msg.setSourceEntity(139U);
    msg.setDestination(24227U);
    msg.setDestinationEntity(232U);
    msg.time = 0.966841754624;
    msg.x = 0.720997005944;
    msg.y = 0.391741754742;
    msg.z = 0.276335946059;

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
    msg.setTimeStamp(0.390343850864);
    msg.setSource(55143U);
    msg.setSourceEntity(210U);
    msg.setDestination(57824U);
    msg.setDestinationEntity(237U);
    msg.time = 0.863845680945;
    msg.x = 0.887133610401;
    msg.y = 0.0896754935173;
    msg.z = 0.789871669681;

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
    msg.setTimeStamp(0.717869709987);
    msg.setSource(64454U);
    msg.setSourceEntity(86U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(101U);
    msg.validity = 111U;
    msg.x = 0.364434650336;
    msg.y = 0.222958482513;
    msg.z = 0.147823119014;

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
    msg.setTimeStamp(0.528315517817);
    msg.setSource(34069U);
    msg.setSourceEntity(126U);
    msg.setDestination(34326U);
    msg.setDestinationEntity(93U);
    msg.validity = 212U;
    msg.x = 0.173342791404;
    msg.y = 0.357504927666;
    msg.z = 0.358595776256;

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
    msg.setTimeStamp(0.293582850806);
    msg.setSource(57893U);
    msg.setSourceEntity(248U);
    msg.setDestination(33596U);
    msg.setDestinationEntity(153U);
    msg.validity = 15U;
    msg.x = 0.329343660021;
    msg.y = 0.748974367938;
    msg.z = 0.864443623783;

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
    msg.setTimeStamp(0.132962541909);
    msg.setSource(8991U);
    msg.setSourceEntity(50U);
    msg.setDestination(10835U);
    msg.setDestinationEntity(145U);
    msg.validity = 190U;
    msg.x = 0.871985400502;
    msg.y = 0.359317965287;
    msg.z = 0.926770778409;

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
    msg.setTimeStamp(0.79561947412);
    msg.setSource(60777U);
    msg.setSourceEntity(207U);
    msg.setDestination(11424U);
    msg.setDestinationEntity(190U);
    msg.validity = 82U;
    msg.x = 0.140605203767;
    msg.y = 0.00639164013567;
    msg.z = 0.317027436248;

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
    msg.setTimeStamp(0.34832998748);
    msg.setSource(59169U);
    msg.setSourceEntity(63U);
    msg.setDestination(4018U);
    msg.setDestinationEntity(108U);
    msg.validity = 231U;
    msg.x = 0.186974360895;
    msg.y = 0.763093444985;
    msg.z = 0.800964467352;

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
    msg.setTimeStamp(0.614029046556);
    msg.setSource(22350U);
    msg.setSourceEntity(128U);
    msg.setDestination(34401U);
    msg.setDestinationEntity(75U);
    msg.time = 0.993526180097;
    msg.x = 0.353272341328;
    msg.y = 0.643672177733;
    msg.z = 0.0927188406488;

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
    msg.setTimeStamp(0.536459947469);
    msg.setSource(58990U);
    msg.setSourceEntity(164U);
    msg.setDestination(45870U);
    msg.setDestinationEntity(36U);
    msg.time = 0.200933280134;
    msg.x = 0.762237794266;
    msg.y = 0.83160274499;
    msg.z = 0.228382205304;

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
    msg.setTimeStamp(0.426871199159);
    msg.setSource(57389U);
    msg.setSourceEntity(228U);
    msg.setDestination(44628U);
    msg.setDestinationEntity(149U);
    msg.time = 0.1762695025;
    msg.x = 0.694912681709;
    msg.y = 0.48925812466;
    msg.z = 0.774484018275;

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
    msg.setTimeStamp(0.95221192107);
    msg.setSource(23638U);
    msg.setSourceEntity(193U);
    msg.setDestination(11515U);
    msg.setDestinationEntity(252U);
    msg.validity = 99U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.299609859242;
    tmp_msg_0.y = 0.123444114827;
    tmp_msg_0.z = 0.809519369209;
    tmp_msg_0.phi = 0.566166668786;
    tmp_msg_0.theta = 0.149735831929;
    tmp_msg_0.psi = 0.179148538295;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.811800555391;
    tmp_msg_1.beam_height = 0.837112624772;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.481299116959;

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
    msg.setTimeStamp(0.886008091669);
    msg.setSource(45835U);
    msg.setSourceEntity(125U);
    msg.setDestination(45919U);
    msg.setDestinationEntity(233U);
    msg.validity = 246U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0254098212504;
    tmp_msg_0.beam_height = 0.514262769043;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.994279232157;

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
    msg.setTimeStamp(0.577630316056);
    msg.setSource(46655U);
    msg.setSourceEntity(197U);
    msg.setDestination(2398U);
    msg.setDestinationEntity(128U);
    msg.validity = 7U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.592839899094;
    tmp_msg_0.y = 0.437480347168;
    tmp_msg_0.z = 0.978160557358;
    tmp_msg_0.phi = 0.738611517377;
    tmp_msg_0.theta = 0.834005743389;
    tmp_msg_0.psi = 0.791340044609;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.382127055643;

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
    msg.setTimeStamp(0.96607235682);
    msg.setSource(22226U);
    msg.setSourceEntity(77U);
    msg.setDestination(27272U);
    msg.setDestinationEntity(203U);
    msg.value = 0.607785466409;

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
    msg.setTimeStamp(0.225036184716);
    msg.setSource(4424U);
    msg.setSourceEntity(175U);
    msg.setDestination(42697U);
    msg.setDestinationEntity(23U);
    msg.value = 0.620855206735;

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
    msg.setTimeStamp(0.155920276697);
    msg.setSource(50833U);
    msg.setSourceEntity(202U);
    msg.setDestination(26427U);
    msg.setDestinationEntity(78U);
    msg.value = 0.643562115064;

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
    msg.setTimeStamp(0.373760232614);
    msg.setSource(13397U);
    msg.setSourceEntity(15U);
    msg.setDestination(54248U);
    msg.setDestinationEntity(170U);
    msg.value = 0.667595424162;

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
    msg.setTimeStamp(0.564481655663);
    msg.setSource(16400U);
    msg.setSourceEntity(220U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(24U);
    msg.value = 0.515541814693;

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
    msg.setTimeStamp(0.774185360716);
    msg.setSource(49221U);
    msg.setSourceEntity(19U);
    msg.setDestination(41104U);
    msg.setDestinationEntity(120U);
    msg.value = 0.299821787755;

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
    msg.setTimeStamp(0.581433753399);
    msg.setSource(60714U);
    msg.setSourceEntity(217U);
    msg.setDestination(51278U);
    msg.setDestinationEntity(97U);
    msg.value = 0.716882497101;

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
    msg.setTimeStamp(0.715663983251);
    msg.setSource(53668U);
    msg.setSourceEntity(218U);
    msg.setDestination(17735U);
    msg.setDestinationEntity(240U);
    msg.value = 0.466119143577;

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
    msg.setTimeStamp(0.220945605877);
    msg.setSource(46310U);
    msg.setSourceEntity(121U);
    msg.setDestination(17701U);
    msg.setDestinationEntity(174U);
    msg.value = 0.779567261407;

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
    msg.setTimeStamp(0.463389754764);
    msg.setSource(10639U);
    msg.setSourceEntity(153U);
    msg.setDestination(36221U);
    msg.setDestinationEntity(26U);
    msg.value = 0.193071235127;

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
    msg.setTimeStamp(0.454499377127);
    msg.setSource(7545U);
    msg.setSourceEntity(231U);
    msg.setDestination(42059U);
    msg.setDestinationEntity(17U);
    msg.value = 0.973508543421;

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
    msg.setTimeStamp(0.658046886217);
    msg.setSource(47317U);
    msg.setSourceEntity(253U);
    msg.setDestination(61512U);
    msg.setDestinationEntity(153U);
    msg.value = 0.142171167587;

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
    msg.setTimeStamp(0.814713577534);
    msg.setSource(42100U);
    msg.setSourceEntity(146U);
    msg.setDestination(1538U);
    msg.setDestinationEntity(28U);
    msg.value = 0.184894569158;

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
    msg.setTimeStamp(0.277121380751);
    msg.setSource(13579U);
    msg.setSourceEntity(209U);
    msg.setDestination(23173U);
    msg.setDestinationEntity(115U);
    msg.value = 0.582279331702;

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
    msg.setTimeStamp(0.483876576104);
    msg.setSource(23422U);
    msg.setSourceEntity(205U);
    msg.setDestination(10336U);
    msg.setDestinationEntity(236U);
    msg.value = 0.625756895191;

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
    msg.setTimeStamp(0.579089067346);
    msg.setSource(54846U);
    msg.setSourceEntity(63U);
    msg.setDestination(33254U);
    msg.setDestinationEntity(142U);
    msg.value = 0.332546680532;

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
    msg.setTimeStamp(0.421023592441);
    msg.setSource(8698U);
    msg.setSourceEntity(27U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(113U);
    msg.value = 0.347949569184;

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
    msg.setTimeStamp(0.054622414539);
    msg.setSource(28139U);
    msg.setSourceEntity(72U);
    msg.setDestination(8167U);
    msg.setDestinationEntity(5U);
    msg.value = 0.0820371973395;

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
    msg.setTimeStamp(0.994604073124);
    msg.setSource(55478U);
    msg.setSourceEntity(107U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(187U);
    msg.value = 0.0990599467423;

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
    msg.setTimeStamp(0.368142799053);
    msg.setSource(55877U);
    msg.setSourceEntity(56U);
    msg.setDestination(26327U);
    msg.setDestinationEntity(130U);
    msg.value = 0.212498377664;

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
    msg.setTimeStamp(0.210490751453);
    msg.setSource(14310U);
    msg.setSourceEntity(156U);
    msg.setDestination(7584U);
    msg.setDestinationEntity(252U);
    msg.value = 0.334054241;

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
    msg.setTimeStamp(0.238814139443);
    msg.setSource(978U);
    msg.setSourceEntity(125U);
    msg.setDestination(28960U);
    msg.setDestinationEntity(238U);
    msg.value = 0.985715089399;

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
    msg.setTimeStamp(0.706520385638);
    msg.setSource(26647U);
    msg.setSourceEntity(57U);
    msg.setDestination(56781U);
    msg.setDestinationEntity(225U);
    msg.value = 0.516586793837;

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
    msg.setTimeStamp(0.241924836625);
    msg.setSource(578U);
    msg.setSourceEntity(22U);
    msg.setDestination(9060U);
    msg.setDestinationEntity(28U);
    msg.value = 0.638146578375;

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
    msg.setTimeStamp(0.0640384350617);
    msg.setSource(54553U);
    msg.setSourceEntity(98U);
    msg.setDestination(4436U);
    msg.setDestinationEntity(114U);
    msg.direction = 0.55620555416;
    msg.speed = 0.032937350066;
    msg.turbulence = 0.570833790359;

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
    msg.setTimeStamp(0.0998666685923);
    msg.setSource(35326U);
    msg.setSourceEntity(68U);
    msg.setDestination(52663U);
    msg.setDestinationEntity(216U);
    msg.direction = 0.802843983172;
    msg.speed = 0.732634869445;
    msg.turbulence = 0.128887719552;

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
    msg.setTimeStamp(0.640662668345);
    msg.setSource(24144U);
    msg.setSourceEntity(66U);
    msg.setDestination(15852U);
    msg.setDestinationEntity(100U);
    msg.direction = 0.841142841147;
    msg.speed = 0.868830219239;
    msg.turbulence = 0.608061758163;

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
    msg.setTimeStamp(0.843161821321);
    msg.setSource(7122U);
    msg.setSourceEntity(176U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(175U);
    msg.value = 0.909851549344;

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
    msg.setTimeStamp(0.659643644271);
    msg.setSource(29449U);
    msg.setSourceEntity(233U);
    msg.setDestination(3359U);
    msg.setDestinationEntity(26U);
    msg.value = 0.369269119864;

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
    msg.setTimeStamp(0.321806782258);
    msg.setSource(34539U);
    msg.setSourceEntity(82U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(162U);
    msg.value = 0.725010936127;

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
    msg.setTimeStamp(0.265563693852);
    msg.setSource(65362U);
    msg.setSourceEntity(106U);
    msg.setDestination(2082U);
    msg.setDestinationEntity(44U);
    msg.value.assign("IKQEWVXXJFNBNWDOZBPXNZVJJNEHFVWUQPCDGSPUCEOTLKHKPCCMOSIALDKAXMAWMNY");

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
    msg.setTimeStamp(0.667249724004);
    msg.setSource(18851U);
    msg.setSourceEntity(31U);
    msg.setDestination(6547U);
    msg.setDestinationEntity(199U);
    msg.value.assign("GNYFWUUIBTWGTHLOQONHUHGZXSKSUFLOIFJBVODPDHREHMEYZOFZDWZHPBIAQLCANWWARARXIVJYUNEPKCHZFQXLQICUWTAVCCKDEFUKWYJXKTMIAPHQFNFDVVLHJSTIBMEHTSWVEOBMVTIZWGJNUAJZKKFGSXMIMNNYXDLMQAPC");

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
    msg.setTimeStamp(0.23750759684);
    msg.setSource(19714U);
    msg.setSourceEntity(5U);
    msg.setDestination(19073U);
    msg.setDestinationEntity(105U);
    msg.value.assign("LECPKAXODUYNMZRICFXTIKECBOFGWKIXUPHDIAEAQIVXVIPHGCCNVHTQPWXBHJDFTDASVINVPLVLBRDPOCVKXQWTMUKCHLTZYUMQLH");

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
    msg.setTimeStamp(0.141197291881);
    msg.setSource(52676U);
    msg.setSourceEntity(2U);
    msg.setDestination(9677U);
    msg.setDestinationEntity(143U);
    const char tmp_msg_0[] = {-35, -74, 9, 21, -105, -97, -74, 106, 87, 98, 90, -18, -16, -81, -101, 113, -86, 1, 122, 5, 71, -8, -93, -24, -65, 48, 110, 40, -102, 47, -17, -35, -20, 56, -47, 112, 28, -20, 61, 37, -105, -8, 38, 59, 58, -7, -123, -54, 9, -45, -98, -111, 91, 34, -125, 72, 119, 96, 53, 118, 38, -80, -30, 6, -65, -72, 45, -109, -38, -91, 36, -25, -126, 58, -15, 13, -127, -31, -13, 37, -44, -101, 61};
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
    msg.setTimeStamp(0.593194329545);
    msg.setSource(49749U);
    msg.setSourceEntity(242U);
    msg.setDestination(27083U);
    msg.setDestinationEntity(75U);
    const char tmp_msg_0[] = {-67, -3, 13, 24, 66, -116, 54, -4, -28, -128, 72, 119, 70, 101, 37, -86, 112, -72, 38, 9, 2, -57, 84, -90, -93, 68, 114, -3, -45, 25, 18, 51, 106, -76, 16, 5, -35, -46, -118, 93, -83, 74, -81, 71, -77, -2, 35, 37, -96, -15, -66, 105, -108, -112, 96, -101, -112, 108, -53, -3, 10, -32, -82, -11, -112, 91, 48, 20, -107, 79, 53, -53, -126, -76, 107, 12, 52, 121, 23, 54, -33, -37, 125, 48, -3, 125, -95, 11, 3, -34, 101, -13, -118, -12, 94, -33, -53, -8, 103, 39, -108, 14, 104, -64, 76, -45, -52, -8, 28, -72, 113, -69, -117, 88, 4, -120, 18, 84, -15, -104, 5, -89, 30, 67, -124, -94, 89, 114, -11, -64, 99, 96, 63, -93, 86, -20, -110, 60, -117};
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
    msg.setTimeStamp(0.469066754396);
    msg.setSource(22013U);
    msg.setSourceEntity(37U);
    msg.setDestination(31399U);
    msg.setDestinationEntity(222U);
    const char tmp_msg_0[] = {33, 99, -66, -20, -99, -76, -63, -102, 115, 23, 39, -3, 18, -21, -110, 69, 88, -57, -73, 10, -35, -26, 59, 35, 123, -15, -80, -74, -80, 59, -114, 49, 109, -64, -59, -66, -25, -2, -122, -114, 33, 97, -85, 28, 86, -122, -16, 44, 90, -118, -103, 27, 45, 13, -108, 82, 9, -52, -1, 38, -4, 100, 42, 86, -28, -101, -101, -127, 122, 92, 66, 89, -73, 73, -87, 7, -54, -97, 111, -74, 95, -12, 55, 115, -81, -125, 55, -119, 104, 0, 87, -12, 105, -8, -101, 71, 14, -53, -83, -96, -6, 123, 21, 4, 54, -66, 10, -60, -90, -43, -31, -117, -61, 16, 12, -127, -98, 66, -81, -101, 126, 13, -37, -121, 4, 103, -62, 52, 86, 51, 42, 108, -35, -55, -32, -101, -122, -7, -56, 34, -49, 10, 124, -119, 81, -91, 96, -107, -45, -84, 100, 60, 2, -90, 58, 54, 77, -48, -2, -17, 99, -30, 19, 106, 89, 118, 65, 13, -74, -122, 75, 85, -30, 125, 114, -23, 52, -111, 115, -60, 124, -114, 94};
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
    msg.setTimeStamp(0.394242357424);
    msg.setSource(20188U);
    msg.setSourceEntity(44U);
    msg.setDestination(61641U);
    msg.setDestinationEntity(5U);
    msg.type = 207U;
    msg.frequency = 2483731194U;
    msg.min_range = 46630U;
    msg.max_range = 39950U;
    msg.bits_per_point = 31U;
    msg.scale_factor = 0.841546881275;
    const char tmp_msg_0[] = {-79, -83, 109, 12, 67, 60, 109, -70, 95, -64, 109, 14, 75, 26, 48, -49, -71, 35, 26, -73, 107, -80, -68, -124, -50, -95, 89, 84, -19, 101, 92, 4, -99, 16, -102, -60, -80, 65, -25, -79, -128, 45, 80, 124, 64, -115, 1, -68, -96, 125, 97, 32, -126, -42, -86, -66, 9, 28, 78, -42, -83, -86, 39, -47, -78, 112, 27, 80, -6, -54, -3, 54, 21, 105, 29, 82, -24, -6, -46, 35, 80, 23, 105, -89, 24, -37, -97, -56, 82, 95, -52, -113, -51, 4, 67, -108, 74, -46, 55, 13, 87, 75, -19, -4, -11, -20, 51, 77, -3, 84, -8, -104, 122, -57, 38, 2, 26, 69, -52, -33, -3, -73, 90};
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
    msg.setTimeStamp(0.723673050271);
    msg.setSource(65476U);
    msg.setSourceEntity(35U);
    msg.setDestination(1808U);
    msg.setDestinationEntity(121U);
    msg.type = 61U;
    msg.frequency = 4220773527U;
    msg.min_range = 28596U;
    msg.max_range = 7960U;
    msg.bits_per_point = 123U;
    msg.scale_factor = 0.97139236976;
    const char tmp_msg_0[] = {-46, 15, -73, -33, 29, -122, -32, 92, 99, 8, 107, -52, 92, 116, -12, 57, -100, -39, 91, 72, -128, -92, -111, 53, -104, -13, -80, -41, -109, -74, 79, -19, -88, 40, 90, 87, -21, 34, -122, -63, -21, -14, 9, 13, -121, 106, 62, 84, 126, 74, 5, 108, -38, -106, -36, 59, 102, -16, -23, 110, -54, 87, -100, -90, -67, 7, 47, -63, 20, -111, -40, -115, 47, -124};
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
    msg.setTimeStamp(0.595563162995);
    msg.setSource(61695U);
    msg.setSourceEntity(108U);
    msg.setDestination(13261U);
    msg.setDestinationEntity(129U);
    msg.type = 164U;
    msg.frequency = 2637557552U;
    msg.min_range = 36359U;
    msg.max_range = 54252U;
    msg.bits_per_point = 142U;
    msg.scale_factor = 0.442333459514;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.373857888314;
    tmp_msg_0.beam_height = 0.212960126291;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-35, -27, -69, -104, 123, -5, 68, -45, 32, -86, -91, -9, -86, 61, -40, 41, -84, 78, -48, 82, -67, -118, -107, 40, 51, -95, -46, -7, -95, -6, 6, -69, 75, 82, -15, -117, 106, 113, -39, -90, -68, 32, -107, 105, -2, -104, -98, -68, -102, 16, 2, 23, -14, -9, -122, 46, -109, -126, 28, -101, -110, 52, -127, 80, -90, -60, -87, -99, 82, -72, -40, 86, 110, -102, 7, 125, 122, -18, 7, 101, 2, -13, -18, 55, 57, 121, -62, -58, -89, -26, 95, 84, 83, 51, -84, 9, -92, 49, -61, 95, -105, -80, -94, 112, -109, -26, 27, -42, 97, 22, 107, 93, -73, 2, 31, -91, 118, 50, 75, -54, -63, -121, -7};
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
    msg.setTimeStamp(0.415137147271);
    msg.setSource(43046U);
    msg.setSourceEntity(137U);
    msg.setDestination(8276U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.384721569707);
    msg.setSource(59381U);
    msg.setSourceEntity(74U);
    msg.setDestination(10122U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.583111841142);
    msg.setSource(54333U);
    msg.setSourceEntity(181U);
    msg.setDestination(17383U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.549460666848);
    msg.setSource(2423U);
    msg.setSourceEntity(59U);
    msg.setDestination(1577U);
    msg.setDestinationEntity(210U);
    msg.op = 80U;

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
    msg.setTimeStamp(0.260253123164);
    msg.setSource(31987U);
    msg.setSourceEntity(63U);
    msg.setDestination(4550U);
    msg.setDestinationEntity(80U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.150035289534);
    msg.setSource(22753U);
    msg.setSourceEntity(196U);
    msg.setDestination(21082U);
    msg.setDestinationEntity(29U);
    msg.op = 36U;

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
    msg.setTimeStamp(0.954017388598);
    msg.setSource(16334U);
    msg.setSourceEntity(237U);
    msg.setDestination(33481U);
    msg.setDestinationEntity(228U);
    msg.value = 0.452648699427;
    msg.confidence = 0.290879710333;
    msg.opmodes.assign("IDUHWUHYVOYCBXWOXHFVCYDGXAUBKVFMIWDZPXIQPAQLMAVVAKMYFZVKJDDTCKAGSGDCUBSEEUGMDPEQIDXJJMYRVWLTQNZIXLNIDCLSFESZZHTABJKFXTAKFWLPDUBPPYWXBFTOGMHOKYPRJJAPUNNURMONXRIZJSLUHFQGOAVWBKEGZJNG");

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
    msg.setTimeStamp(0.642286489728);
    msg.setSource(56819U);
    msg.setSourceEntity(227U);
    msg.setDestination(37227U);
    msg.setDestinationEntity(175U);
    msg.value = 0.025828869548;
    msg.confidence = 0.385769598222;
    msg.opmodes.assign("ZZMOXRRCNTRMVSZNOLAZJYWSMESQPDIGISFWPCHBLUGRJCYODBFMVTXEYWPBTRMKOUA");

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
    msg.setTimeStamp(0.998899343021);
    msg.setSource(20442U);
    msg.setSourceEntity(90U);
    msg.setDestination(55570U);
    msg.setDestinationEntity(49U);
    msg.value = 0.960678834711;
    msg.confidence = 0.0599142765172;
    msg.opmodes.assign("NRNCMBDTEMJCKAJIVMUCECDVYHONWBUSHNASOGBPDMTBKCORVLPEMKLYT");

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
    msg.setTimeStamp(0.578435266603);
    msg.setSource(22271U);
    msg.setSourceEntity(236U);
    msg.setDestination(26968U);
    msg.setDestinationEntity(178U);
    msg.itow = 1766699764U;
    msg.lat = 0.730881123483;
    msg.lon = 0.836282316637;
    msg.height_ell = 0.136425799199;
    msg.height_sea = 0.626131815108;
    msg.hacc = 0.975015881967;
    msg.vacc = 0.287836953134;
    msg.vel_n = 0.157073501873;
    msg.vel_e = 0.12377887742;
    msg.vel_d = 0.426605100339;
    msg.speed = 0.669550321684;
    msg.gspeed = 0.659710326536;
    msg.heading = 0.261029110628;
    msg.sacc = 0.064442529112;
    msg.cacc = 0.0610519384967;

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
    msg.setTimeStamp(0.805101923579);
    msg.setSource(43093U);
    msg.setSourceEntity(38U);
    msg.setDestination(6807U);
    msg.setDestinationEntity(54U);
    msg.itow = 3336893966U;
    msg.lat = 0.509448203006;
    msg.lon = 0.678558722379;
    msg.height_ell = 0.707485412425;
    msg.height_sea = 0.978676184943;
    msg.hacc = 0.295874150462;
    msg.vacc = 0.0962365502444;
    msg.vel_n = 0.882219029287;
    msg.vel_e = 0.194960727873;
    msg.vel_d = 0.861253392393;
    msg.speed = 0.356324613503;
    msg.gspeed = 0.053725683117;
    msg.heading = 0.217789810455;
    msg.sacc = 0.969212190525;
    msg.cacc = 0.643025862822;

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
    msg.setTimeStamp(0.317194286647);
    msg.setSource(3611U);
    msg.setSourceEntity(38U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(178U);
    msg.itow = 1098948578U;
    msg.lat = 0.57725240027;
    msg.lon = 0.248588135558;
    msg.height_ell = 0.642415411324;
    msg.height_sea = 0.259343825762;
    msg.hacc = 0.0588629853622;
    msg.vacc = 0.127849292159;
    msg.vel_n = 0.724966304931;
    msg.vel_e = 0.776043972554;
    msg.vel_d = 0.254764571156;
    msg.speed = 0.951550298412;
    msg.gspeed = 0.806666965181;
    msg.heading = 0.773648424052;
    msg.sacc = 0.823738460169;
    msg.cacc = 0.562125165943;

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
    msg.setTimeStamp(0.0278965775922);
    msg.setSource(46843U);
    msg.setSourceEntity(123U);
    msg.setDestination(9299U);
    msg.setDestinationEntity(67U);
    msg.id = 152U;
    msg.value = 0.555993700994;

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
    msg.setTimeStamp(0.320321545125);
    msg.setSource(3684U);
    msg.setSourceEntity(79U);
    msg.setDestination(62978U);
    msg.setDestinationEntity(31U);
    msg.id = 59U;
    msg.value = 0.963122910706;

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
    msg.setTimeStamp(0.818863430803);
    msg.setSource(40472U);
    msg.setSourceEntity(212U);
    msg.setDestination(13535U);
    msg.setDestinationEntity(22U);
    msg.id = 204U;
    msg.value = 0.485445620324;

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
    msg.setTimeStamp(0.948510547784);
    msg.setSource(40557U);
    msg.setSourceEntity(18U);
    msg.setDestination(20725U);
    msg.setDestinationEntity(155U);
    msg.x = 0.487456888662;
    msg.y = 0.955092134437;
    msg.z = 0.6594650506;
    msg.phi = 0.197447832559;
    msg.theta = 0.730045627879;
    msg.psi = 0.624393469753;

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
    msg.setTimeStamp(0.0390707063546);
    msg.setSource(42632U);
    msg.setSourceEntity(186U);
    msg.setDestination(22728U);
    msg.setDestinationEntity(32U);
    msg.x = 0.502912149299;
    msg.y = 0.11080756326;
    msg.z = 0.0137208058842;
    msg.phi = 0.202744438664;
    msg.theta = 0.5941601979;
    msg.psi = 0.138239893039;

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
    msg.setTimeStamp(0.750377481944);
    msg.setSource(31615U);
    msg.setSourceEntity(120U);
    msg.setDestination(1177U);
    msg.setDestinationEntity(68U);
    msg.x = 0.321319458951;
    msg.y = 0.316321689446;
    msg.z = 0.240332246022;
    msg.phi = 0.0268904836087;
    msg.theta = 0.958440576085;
    msg.psi = 0.716257811703;

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
    msg.setTimeStamp(0.772813068582);
    msg.setSource(34480U);
    msg.setSourceEntity(218U);
    msg.setDestination(43683U);
    msg.setDestinationEntity(123U);
    msg.beam_width = 0.771683601506;
    msg.beam_height = 0.183167245796;

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
    msg.setTimeStamp(0.389265371286);
    msg.setSource(46265U);
    msg.setSourceEntity(129U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(179U);
    msg.beam_width = 0.94889837181;
    msg.beam_height = 0.995926638623;

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
    msg.setTimeStamp(0.880503395764);
    msg.setSource(37268U);
    msg.setSourceEntity(14U);
    msg.setDestination(61440U);
    msg.setDestinationEntity(24U);
    msg.beam_width = 0.796972578424;
    msg.beam_height = 0.771082890377;

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
    msg.setTimeStamp(0.00773404913985);
    msg.setSource(40419U);
    msg.setSourceEntity(139U);
    msg.setDestination(65458U);
    msg.setDestinationEntity(196U);
    msg.sane = 18U;

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
    msg.setTimeStamp(0.0658397658382);
    msg.setSource(31730U);
    msg.setSourceEntity(211U);
    msg.setDestination(61251U);
    msg.setDestinationEntity(82U);
    msg.sane = 211U;

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
    msg.setTimeStamp(0.306822283986);
    msg.setSource(38172U);
    msg.setSourceEntity(219U);
    msg.setDestination(14220U);
    msg.setDestinationEntity(235U);
    msg.sane = 112U;

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
    msg.setTimeStamp(0.969570944455);
    msg.setSource(6973U);
    msg.setSourceEntity(104U);
    msg.setDestination(60085U);
    msg.setDestinationEntity(182U);
    msg.value = 0.321157981514;

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
    msg.setTimeStamp(0.786674524905);
    msg.setSource(566U);
    msg.setSourceEntity(93U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(123U);
    msg.value = 0.535150449032;

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
    msg.setTimeStamp(0.872983551369);
    msg.setSource(10751U);
    msg.setSourceEntity(112U);
    msg.setDestination(60327U);
    msg.setDestinationEntity(239U);
    msg.value = 0.503027486264;

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
    msg.setTimeStamp(0.468091536427);
    msg.setSource(2173U);
    msg.setSourceEntity(205U);
    msg.setDestination(51702U);
    msg.setDestinationEntity(33U);
    msg.value = 0.136433597928;

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
    msg.setTimeStamp(0.422424054613);
    msg.setSource(1953U);
    msg.setSourceEntity(124U);
    msg.setDestination(29668U);
    msg.setDestinationEntity(62U);
    msg.value = 0.950216051347;

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
    msg.setTimeStamp(0.910254472832);
    msg.setSource(48205U);
    msg.setSourceEntity(163U);
    msg.setDestination(40690U);
    msg.setDestinationEntity(8U);
    msg.value = 0.891750019052;

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
    msg.setTimeStamp(0.210459828182);
    msg.setSource(15533U);
    msg.setSourceEntity(9U);
    msg.setDestination(12148U);
    msg.setDestinationEntity(123U);
    msg.value = 0.326427080512;

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
    msg.setTimeStamp(0.205260603933);
    msg.setSource(49365U);
    msg.setSourceEntity(46U);
    msg.setDestination(2196U);
    msg.setDestinationEntity(133U);
    msg.value = 0.858541849563;

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
    msg.setTimeStamp(0.85019505825);
    msg.setSource(25470U);
    msg.setSourceEntity(131U);
    msg.setDestination(60462U);
    msg.setDestinationEntity(175U);
    msg.value = 0.227567157279;

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
    msg.setTimeStamp(0.153863661288);
    msg.setSource(26348U);
    msg.setSourceEntity(103U);
    msg.setDestination(47473U);
    msg.setDestinationEntity(158U);
    msg.value = 0.258554234936;

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
    msg.setTimeStamp(0.979965374178);
    msg.setSource(11582U);
    msg.setSourceEntity(248U);
    msg.setDestination(27917U);
    msg.setDestinationEntity(228U);
    msg.value = 0.130336278358;

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
    msg.setTimeStamp(0.152738165316);
    msg.setSource(44049U);
    msg.setSourceEntity(126U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(224U);
    msg.value = 0.736108931748;

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
    msg.setTimeStamp(0.146785081937);
    msg.setSource(60357U);
    msg.setSourceEntity(62U);
    msg.setDestination(22886U);
    msg.setDestinationEntity(136U);
    msg.value = 0.411489100379;

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
    msg.setTimeStamp(0.785961624089);
    msg.setSource(48400U);
    msg.setSourceEntity(210U);
    msg.setDestination(27048U);
    msg.setDestinationEntity(67U);
    msg.value = 0.501940218631;

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
    msg.setTimeStamp(0.901021395395);
    msg.setSource(50693U);
    msg.setSourceEntity(44U);
    msg.setDestination(35445U);
    msg.setDestinationEntity(44U);
    msg.value = 0.316131656476;

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
    msg.setTimeStamp(0.645425142409);
    msg.setSource(10213U);
    msg.setSourceEntity(84U);
    msg.setDestination(44261U);
    msg.setDestinationEntity(144U);
    msg.value = 0.284925445919;

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
    msg.setTimeStamp(0.711304010105);
    msg.setSource(64247U);
    msg.setSourceEntity(238U);
    msg.setDestination(5794U);
    msg.setDestinationEntity(115U);
    msg.value = 0.295469741322;

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
    msg.setTimeStamp(0.19878918459);
    msg.setSource(12686U);
    msg.setSourceEntity(132U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(224U);
    msg.value = 0.777499882621;

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
    msg.setTimeStamp(0.130645009294);
    msg.setSource(921U);
    msg.setSourceEntity(59U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(248U);
    msg.value = 0.924265698263;

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
    msg.setTimeStamp(0.346502889483);
    msg.setSource(6689U);
    msg.setSourceEntity(65U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(19U);
    msg.value = 0.345014914851;

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
    msg.setTimeStamp(0.138218826942);
    msg.setSource(33382U);
    msg.setSourceEntity(88U);
    msg.setDestination(43654U);
    msg.setDestinationEntity(51U);
    msg.value = 0.742733181153;

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
    msg.setTimeStamp(0.527597845796);
    msg.setSource(52382U);
    msg.setSourceEntity(19U);
    msg.setDestination(23525U);
    msg.setDestinationEntity(66U);
    msg.value = 0.68776101978;

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
    msg.setTimeStamp(0.419954558611);
    msg.setSource(46716U);
    msg.setSourceEntity(84U);
    msg.setDestination(17165U);
    msg.setDestinationEntity(205U);
    msg.value = 0.218681495356;

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
    msg.setTimeStamp(0.695276942232);
    msg.setSource(55259U);
    msg.setSourceEntity(169U);
    msg.setDestination(61159U);
    msg.setDestinationEntity(157U);
    msg.value = 0.35789188056;

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
    msg.setTimeStamp(0.906172193655);
    msg.setSource(2380U);
    msg.setSourceEntity(92U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(229U);
    msg.validity = 17470U;
    msg.type = 73U;
    msg.tow = 38876857U;
    msg.base_lat = 0.173465848861;
    msg.base_lon = 0.0113021130352;
    msg.base_height = 0.0908194070008;
    msg.n = 0.737856329304;
    msg.e = 0.595493378293;
    msg.d = 0.212797026525;
    msg.v_n = 0.951726610467;
    msg.v_e = 0.933586850477;
    msg.v_d = 0.159282169611;
    msg.satellites = 1U;
    msg.iar_hyp = 59470U;
    msg.iar_ratio = 0.489117277927;

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
    msg.setTimeStamp(0.497364532715);
    msg.setSource(214U);
    msg.setSourceEntity(233U);
    msg.setDestination(3564U);
    msg.setDestinationEntity(160U);
    msg.validity = 63780U;
    msg.type = 98U;
    msg.tow = 721027713U;
    msg.base_lat = 0.842538798052;
    msg.base_lon = 0.640896308582;
    msg.base_height = 0.466506854525;
    msg.n = 0.697940073669;
    msg.e = 0.946515129003;
    msg.d = 0.89245703939;
    msg.v_n = 0.746781643983;
    msg.v_e = 0.281787152456;
    msg.v_d = 0.410499305139;
    msg.satellites = 222U;
    msg.iar_hyp = 2249U;
    msg.iar_ratio = 0.464017641205;

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
    msg.setTimeStamp(0.195763088255);
    msg.setSource(42901U);
    msg.setSourceEntity(157U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(20U);
    msg.validity = 25573U;
    msg.type = 26U;
    msg.tow = 1467761988U;
    msg.base_lat = 0.802069166055;
    msg.base_lon = 0.25461663475;
    msg.base_height = 0.60464821458;
    msg.n = 0.3653810667;
    msg.e = 0.350586498663;
    msg.d = 0.412105131473;
    msg.v_n = 0.219042025804;
    msg.v_e = 0.0709099290901;
    msg.v_d = 0.0359015152449;
    msg.satellites = 223U;
    msg.iar_hyp = 31210U;
    msg.iar_ratio = 0.715458225819;

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
    msg.setTimeStamp(0.984172558288);
    msg.setSource(28420U);
    msg.setSourceEntity(200U);
    msg.setDestination(16364U);
    msg.setDestinationEntity(67U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.279728866822;
    tmp_msg_0.lon = 0.0720251030594;
    tmp_msg_0.height = 0.325863453317;
    tmp_msg_0.x = 0.263420526535;
    tmp_msg_0.y = 0.434763192398;
    tmp_msg_0.z = 0.228391099215;
    tmp_msg_0.phi = 0.678642779106;
    tmp_msg_0.theta = 0.0126537972988;
    tmp_msg_0.psi = 0.73523718536;
    tmp_msg_0.u = 0.20489736824;
    tmp_msg_0.v = 0.142742716339;
    tmp_msg_0.w = 0.252370843632;
    tmp_msg_0.vx = 0.00857130717485;
    tmp_msg_0.vy = 0.103977262055;
    tmp_msg_0.vz = 0.991187555836;
    tmp_msg_0.p = 0.703735139332;
    tmp_msg_0.q = 0.299026368304;
    tmp_msg_0.r = 0.398352120309;
    tmp_msg_0.depth = 0.662463934519;
    tmp_msg_0.alt = 0.806509780049;
    msg.state.set(tmp_msg_0);
    msg.type = 202U;

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
    msg.setTimeStamp(0.758658588121);
    msg.setSource(3450U);
    msg.setSourceEntity(142U);
    msg.setDestination(58178U);
    msg.setDestinationEntity(1U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.847598315808;
    tmp_msg_0.lon = 0.408415392226;
    tmp_msg_0.height = 0.718930317313;
    tmp_msg_0.x = 0.0495210462522;
    tmp_msg_0.y = 0.271243076201;
    tmp_msg_0.z = 0.385922523046;
    tmp_msg_0.phi = 0.998379335977;
    tmp_msg_0.theta = 0.846746838367;
    tmp_msg_0.psi = 0.178850157171;
    tmp_msg_0.u = 0.598357513404;
    tmp_msg_0.v = 0.349052349987;
    tmp_msg_0.w = 0.684620861896;
    tmp_msg_0.vx = 0.970528944959;
    tmp_msg_0.vy = 0.367418733811;
    tmp_msg_0.vz = 0.00877044088609;
    tmp_msg_0.p = 0.591488134427;
    tmp_msg_0.q = 0.249691810997;
    tmp_msg_0.r = 0.115234268428;
    tmp_msg_0.depth = 0.0705976040809;
    tmp_msg_0.alt = 0.6629389763;
    msg.state.set(tmp_msg_0);
    msg.type = 187U;

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
    msg.setTimeStamp(0.11855756285);
    msg.setSource(40227U);
    msg.setSourceEntity(143U);
    msg.setDestination(30757U);
    msg.setDestinationEntity(198U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.358535780774;
    tmp_msg_0.lon = 0.289601017412;
    tmp_msg_0.height = 0.997761724123;
    tmp_msg_0.x = 0.979126424399;
    tmp_msg_0.y = 0.000531644202327;
    tmp_msg_0.z = 0.910908456977;
    tmp_msg_0.phi = 0.781585397104;
    tmp_msg_0.theta = 0.177164197181;
    tmp_msg_0.psi = 0.00108447114054;
    tmp_msg_0.u = 0.434681378914;
    tmp_msg_0.v = 0.804986698363;
    tmp_msg_0.w = 0.550493729697;
    tmp_msg_0.vx = 0.27483544763;
    tmp_msg_0.vy = 0.228229978639;
    tmp_msg_0.vz = 0.977877059961;
    tmp_msg_0.p = 0.0427495930055;
    tmp_msg_0.q = 0.357133023543;
    tmp_msg_0.r = 0.291065933036;
    tmp_msg_0.depth = 0.395968336118;
    tmp_msg_0.alt = 0.947846815731;
    msg.state.set(tmp_msg_0);
    msg.type = 128U;

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
    msg.setTimeStamp(0.946870863787);
    msg.setSource(32338U);
    msg.setSourceEntity(14U);
    msg.setDestination(17033U);
    msg.setDestinationEntity(89U);
    msg.value = 0.213404216123;

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
    msg.setTimeStamp(0.577660488342);
    msg.setSource(760U);
    msg.setSourceEntity(215U);
    msg.setDestination(43893U);
    msg.setDestinationEntity(210U);
    msg.value = 0.717035999979;

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
    msg.setTimeStamp(0.531373949965);
    msg.setSource(63879U);
    msg.setSourceEntity(191U);
    msg.setDestination(40604U);
    msg.setDestinationEntity(54U);
    msg.value = 0.723085749803;

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
    msg.setTimeStamp(0.529951092977);
    msg.setSource(14198U);
    msg.setSourceEntity(59U);
    msg.setDestination(31177U);
    msg.setDestinationEntity(148U);
    msg.value = 0.485529287214;

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
    msg.setTimeStamp(0.986770274692);
    msg.setSource(50493U);
    msg.setSourceEntity(113U);
    msg.setDestination(45056U);
    msg.setDestinationEntity(29U);
    msg.value = 0.360496384302;

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
    msg.setTimeStamp(0.89304660103);
    msg.setSource(8309U);
    msg.setSourceEntity(197U);
    msg.setDestination(15394U);
    msg.setDestinationEntity(237U);
    msg.value = 0.279638503829;

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
    msg.setTimeStamp(0.591594957509);
    msg.setSource(38980U);
    msg.setSourceEntity(109U);
    msg.setDestination(56673U);
    msg.setDestinationEntity(37U);
    msg.value = 0.266764130536;

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
    msg.setTimeStamp(0.342329337398);
    msg.setSource(4555U);
    msg.setSourceEntity(190U);
    msg.setDestination(24449U);
    msg.setDestinationEntity(141U);
    msg.value = 0.978880841101;

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
    msg.setTimeStamp(0.593984006492);
    msg.setSource(3118U);
    msg.setSourceEntity(72U);
    msg.setDestination(59174U);
    msg.setDestinationEntity(82U);
    msg.value = 0.650840837803;

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
    msg.setTimeStamp(0.58932242019);
    msg.setSource(59824U);
    msg.setSourceEntity(93U);
    msg.setDestination(52323U);
    msg.setDestinationEntity(126U);
    msg.value = 0.633125660156;

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
    msg.setTimeStamp(0.555903315498);
    msg.setSource(65418U);
    msg.setSourceEntity(173U);
    msg.setDestination(62323U);
    msg.setDestinationEntity(118U);
    msg.value = 0.582613401098;

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
    msg.setTimeStamp(0.212459466938);
    msg.setSource(52839U);
    msg.setSourceEntity(222U);
    msg.setDestination(19292U);
    msg.setDestinationEntity(118U);
    msg.value = 0.445935798816;

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
    msg.setTimeStamp(0.550873212072);
    msg.setSource(61352U);
    msg.setSourceEntity(36U);
    msg.setDestination(15569U);
    msg.setDestinationEntity(198U);
    msg.value = 0.97132828201;

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
    msg.setTimeStamp(0.00575784751434);
    msg.setSource(45372U);
    msg.setSourceEntity(87U);
    msg.setDestination(5U);
    msg.setDestinationEntity(167U);
    msg.value = 0.0444429218693;

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
    msg.setTimeStamp(0.0130391440602);
    msg.setSource(37494U);
    msg.setSourceEntity(40U);
    msg.setDestination(65294U);
    msg.setDestinationEntity(13U);
    msg.value = 0.0521278533795;

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
    msg.setTimeStamp(0.982625040459);
    msg.setSource(3788U);
    msg.setSourceEntity(94U);
    msg.setDestination(22331U);
    msg.setDestinationEntity(202U);
    msg.id = 125U;
    msg.zoom = 164U;
    msg.action = 240U;

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
    msg.setTimeStamp(0.788707616518);
    msg.setSource(10521U);
    msg.setSourceEntity(119U);
    msg.setDestination(27871U);
    msg.setDestinationEntity(172U);
    msg.id = 216U;
    msg.zoom = 161U;
    msg.action = 177U;

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
    msg.setTimeStamp(0.243182671946);
    msg.setSource(20609U);
    msg.setSourceEntity(145U);
    msg.setDestination(46984U);
    msg.setDestinationEntity(159U);
    msg.id = 20U;
    msg.zoom = 31U;
    msg.action = 36U;

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
    msg.setTimeStamp(0.545586961177);
    msg.setSource(47015U);
    msg.setSourceEntity(63U);
    msg.setDestination(27410U);
    msg.setDestinationEntity(111U);
    msg.id = 142U;
    msg.value = 0.751491539481;

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
    msg.setTimeStamp(0.751807367631);
    msg.setSource(47215U);
    msg.setSourceEntity(137U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(251U);
    msg.id = 30U;
    msg.value = 0.126064267654;

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
    msg.setTimeStamp(0.128884596355);
    msg.setSource(10472U);
    msg.setSourceEntity(1U);
    msg.setDestination(50600U);
    msg.setDestinationEntity(189U);
    msg.id = 80U;
    msg.value = 0.772916133288;

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
    msg.setTimeStamp(0.470261830548);
    msg.setSource(2651U);
    msg.setSourceEntity(76U);
    msg.setDestination(41223U);
    msg.setDestinationEntity(38U);
    msg.id = 179U;
    msg.value = 0.263173339694;

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
    msg.setTimeStamp(0.882709754048);
    msg.setSource(4755U);
    msg.setSourceEntity(163U);
    msg.setDestination(45918U);
    msg.setDestinationEntity(156U);
    msg.id = 74U;
    msg.value = 0.210004691095;

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
    msg.setTimeStamp(0.968045758769);
    msg.setSource(28752U);
    msg.setSourceEntity(210U);
    msg.setDestination(62469U);
    msg.setDestinationEntity(115U);
    msg.id = 7U;
    msg.value = 0.216014500353;

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
    msg.setTimeStamp(0.42438516519);
    msg.setSource(15238U);
    msg.setSourceEntity(37U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(153U);
    msg.id = 24U;
    msg.angle = 0.868570195061;

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
    msg.setTimeStamp(0.809231615981);
    msg.setSource(38784U);
    msg.setSourceEntity(212U);
    msg.setDestination(49974U);
    msg.setDestinationEntity(151U);
    msg.id = 26U;
    msg.angle = 0.573725474302;

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
    msg.setTimeStamp(0.0728330822424);
    msg.setSource(18228U);
    msg.setSourceEntity(201U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(158U);
    msg.id = 190U;
    msg.angle = 0.111641096079;

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
    msg.setTimeStamp(0.730331005999);
    msg.setSource(41252U);
    msg.setSourceEntity(213U);
    msg.setDestination(46171U);
    msg.setDestinationEntity(32U);
    msg.op = 21U;
    msg.actions.assign("ZZMAPDAVKMANQUBGSBVHQTZLHWZNQMCXCOCHKNESUBOKNTOIXFVWOQLAUFQFORVGESPRGMSJORVACHAMWRBGDVRSNYMHRGFAYLIBJJIZLHEYFTSBVUJXNYEMAUJCTTZSGEEZCROICBAQNWB");

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
    msg.setTimeStamp(0.0104112778676);
    msg.setSource(24688U);
    msg.setSourceEntity(100U);
    msg.setDestination(13549U);
    msg.setDestinationEntity(216U);
    msg.op = 218U;
    msg.actions.assign("VRQYJHPKOOLQLZBYEZXTMUMLVPFFNSZRYKPZTIHFXXWWD");

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
    msg.setTimeStamp(0.908955307326);
    msg.setSource(25342U);
    msg.setSourceEntity(16U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(139U);
    msg.op = 23U;
    msg.actions.assign("TLPYXSKXQBQGMFJHXWQVAOXOGCUUYBZHPXADPGEGHIMSSKIFCEAOJFBKUUVKILRQTDYAZVODICK");

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
    msg.setTimeStamp(0.198901032156);
    msg.setSource(22899U);
    msg.setSourceEntity(67U);
    msg.setDestination(28295U);
    msg.setDestinationEntity(132U);
    msg.actions.assign("DLNXZFQWPSOLEKBPQUQGBTUKCVMXJFLEQPPOJQYNUINUQLOAWNZRTESYYIJWBMUUNQPPOFGXR");

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
    msg.setTimeStamp(0.0154110075823);
    msg.setSource(9286U);
    msg.setSourceEntity(200U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(71U);
    msg.actions.assign("QZOTDLIARMTKSFHFZJMHBSJNEVNDRKZEZXVASYGCNZYBMXTYQUOSWKKEQ");

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
    msg.setTimeStamp(0.857924515189);
    msg.setSource(63726U);
    msg.setSourceEntity(221U);
    msg.setDestination(49415U);
    msg.setDestinationEntity(28U);
    msg.actions.assign("IISYODDOXJUHVDQVHSMZUDGLDVNKJKEUSIWTEAWYCFTWMX");

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
    msg.setTimeStamp(0.306382783031);
    msg.setSource(7707U);
    msg.setSourceEntity(250U);
    msg.setDestination(62807U);
    msg.setDestinationEntity(37U);
    msg.button = 227U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.258340734307);
    msg.setSource(9005U);
    msg.setSourceEntity(29U);
    msg.setDestination(2060U);
    msg.setDestinationEntity(47U);
    msg.button = 199U;
    msg.value = 150U;

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
    msg.setTimeStamp(0.365836402708);
    msg.setSource(8668U);
    msg.setSourceEntity(254U);
    msg.setDestination(40851U);
    msg.setDestinationEntity(21U);
    msg.button = 45U;
    msg.value = 124U;

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
    msg.setTimeStamp(0.537878403906);
    msg.setSource(37745U);
    msg.setSourceEntity(93U);
    msg.setDestination(56500U);
    msg.setDestinationEntity(53U);
    msg.op = 101U;
    msg.text.assign("XNOAMSRXGFOZWENINDDAMPJDPIRUHOXDPFADZAHMBYZFVEEPMLNMKDCEJUOYCJKBLFYUAMBBDHFRTOABFQWEFSKKSGGSQBMTNHTLRRSCQWGNUUSMNEAKZKHICLVYSSFCKZUCYRA");

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
    msg.setTimeStamp(0.738784743736);
    msg.setSource(5533U);
    msg.setSourceEntity(28U);
    msg.setDestination(61454U);
    msg.setDestinationEntity(8U);
    msg.op = 0U;
    msg.text.assign("BUMRODNBRETWVGFEFNYJIRMZADISMIQKBXLVJCFBJQPYVBWZJSNXJGFWYXXCRJMXETDPQDKZYKEWONUBSWAHYFQQWLEBZPIJCIXYUUTEMGPOGDIOKJBQKPKTGBLMKBPRUKCVJDHGTUVOFGKFDVHVZSWMHPXCTTPOGCUHSEPOCSAARXNWJHQZQZDAIZUAVQEHUNNDIYINLD");

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
    msg.setTimeStamp(0.78102770835);
    msg.setSource(16922U);
    msg.setSourceEntity(75U);
    msg.setDestination(18066U);
    msg.setDestinationEntity(173U);
    msg.op = 225U;
    msg.text.assign("ADXSFLQHOOWJICYCKVTOFKVXCIYFTJINCGLYNVUFJDEEPPQXHZGXDNWTKSQAVJHCPRTHIEXRQFJQPRQOUVBKLOBYMYBYBSFUYQEWARVQSJMBFGWVMLDOKNUCTJUHZTDTMHBRZXMDCGKXSPLNNEUIHOWWZXAYNKDIVMMETDORZWKBWAVMSEGUGZAYGISZZPXNLIGVLHPMOHM");

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
    msg.setTimeStamp(0.614882672821);
    msg.setSource(38991U);
    msg.setSourceEntity(108U);
    msg.setDestination(39388U);
    msg.setDestinationEntity(67U);
    msg.op = 178U;
    msg.time_remain = 0.525596372721;
    msg.sched_time = 0.325688390432;

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
    msg.setTimeStamp(0.920707969022);
    msg.setSource(3254U);
    msg.setSourceEntity(228U);
    msg.setDestination(42329U);
    msg.setDestinationEntity(209U);
    msg.op = 1U;
    msg.time_remain = 0.7456244201;
    msg.sched_time = 0.743068951602;

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
    msg.setTimeStamp(0.350146063866);
    msg.setSource(33646U);
    msg.setSourceEntity(163U);
    msg.setDestination(17562U);
    msg.setDestinationEntity(224U);
    msg.op = 195U;
    msg.time_remain = 0.904782482268;
    msg.sched_time = 0.478224237103;

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
    msg.setTimeStamp(0.635441279536);
    msg.setSource(34926U);
    msg.setSourceEntity(29U);
    msg.setDestination(21243U);
    msg.setDestinationEntity(3U);
    msg.name.assign("NZQSNDLZDLOCPHJRZXBRRVCTEHSJJWOMPMWAKPVGDZPFNJHRCKEUWIDAZAFJTLZKDECLUKXOYFIESUPZCLTNUITCNVYNGYGXASUANBWQKHKUQBMVVFREYYQYHHMBUOAWJKDCVYNBOTJUMOZQIUWRDSZPNASBXJTQTILRGERKFXGTSECEHQMXDORMVDGMOAQOIECXSBNPVFFYGIKBFF");
    msg.op = 231U;
    msg.sched_time = 0.503447530223;

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
    msg.setTimeStamp(0.492884480172);
    msg.setSource(24151U);
    msg.setSourceEntity(107U);
    msg.setDestination(12515U);
    msg.setDestinationEntity(221U);
    msg.name.assign("RQADTHOGWXLJWFKNIOKCKBZEMFHFYPRBHKVQUUTAZSXXPUTZMSDJADEIEVTFGPNIPQDGMRHXMBVHYISYDHIYEARRNYYVYCLUCYLQQKDWKZPFTPSHUJAKKNGRCCLGZZNWVZEIMXUGOVACITYQMEYGOQSKFCTTUQBBOJHQWBNFSLQASFANOJCGJRNOPJODIEJVZLZIWFNXMVRCHMSRXU");
    msg.op = 181U;
    msg.sched_time = 0.544028271424;

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
    msg.setTimeStamp(0.259890585396);
    msg.setSource(2539U);
    msg.setSourceEntity(244U);
    msg.setDestination(14347U);
    msg.setDestinationEntity(160U);
    msg.name.assign("IFDTSMZDNOZPGBDMYWMDEUDUNYXQUKUYMEEYLIQKUPEUSVLXBTXTXKPFOFATCJECHIHYRVRXFFJWUWZOZIISQRBSFKQTKPSUJWJREMGGHNHGJZHDYGTOBVBTYCLNCBZOZSOKOGXXXCZHHSRJARCWEAMMNVRESABJIOPJPFQAXMCVUFKWSKZJLLFLODMYJTLC");
    msg.op = 14U;
    msg.sched_time = 0.94624009128;

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
    msg.setTimeStamp(0.381841017556);
    msg.setSource(38655U);
    msg.setSourceEntity(161U);
    msg.setDestination(18777U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.824443009489);
    msg.setSource(36867U);
    msg.setSourceEntity(244U);
    msg.setDestination(39206U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.480736123977);
    msg.setSource(2994U);
    msg.setSourceEntity(209U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.99692558049);
    msg.setSource(42983U);
    msg.setSourceEntity(163U);
    msg.setDestination(17833U);
    msg.setDestinationEntity(61U);
    msg.name.assign("NSNCVAWZIANKUPEWCM");
    msg.state = 25U;

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
    msg.setTimeStamp(0.0763341272464);
    msg.setSource(29029U);
    msg.setSourceEntity(175U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(231U);
    msg.name.assign("RLQCWJSMDFDPEZCOPNFMKZHLXRQVCLXALKDJFBHOTYRTGPRZAMIXUUJYWIGYLMUGPVEJADADBHDOYGPSMOOIBCPCQLENBDWLZYQNWRCKBBQKTTYPAEVVJOBAVQITAKNGNVFWGUZPPFTKMZPHXHTGSDWGIUQJXCUAHVMFUELERXSZNDWGACETSJHXIKVFGWROSAIXEXRNJQYWQCJMTVZTIKOHEOFXJIDHEUBNRMBFUQSFIOV");
    msg.state = 244U;

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
    msg.setTimeStamp(0.883191818053);
    msg.setSource(42731U);
    msg.setSourceEntity(231U);
    msg.setDestination(53896U);
    msg.setDestinationEntity(175U);
    msg.name.assign("DGGOFMJBCEPYHNXWWKZHAGFIVLXHMXADKXAYTVNBIOQKWBHOZRFXZVDGZDBKBBBVEDAOHKMZDCVPCCLLCWEZEQCUYTVUABCDNZOOLECPFWYOUSFKSTQLZXGPTYTOUMHYSIENVJLHQGGDRPNR");
    msg.state = 100U;

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
    msg.setTimeStamp(0.946545154262);
    msg.setSource(47429U);
    msg.setSourceEntity(200U);
    msg.setDestination(13197U);
    msg.setDestinationEntity(70U);
    msg.name.assign("NSUGCRPHNAAKAQNNTBDUCAREDKPFVIYYKXSSVFSVXYHEMCKPYJAGNTTWJMBRJEHHWONXJXJTRBMMQELKZEFVOLIHDGYQXCOGWABXYANAZQSSHSIOBGBKVUBLSTPUPVUYIMG");
    msg.value = 176U;

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
    msg.setTimeStamp(0.258563846893);
    msg.setSource(18123U);
    msg.setSourceEntity(174U);
    msg.setDestination(1895U);
    msg.setDestinationEntity(41U);
    msg.name.assign("AQNQGYEZUXELAQYNXSDKJXGOKMAIWJHMTPEYVNPQAYBTWAQTPNXUFUAZFYLYCMOESWBSIBCUYKLOXOENZYBXIMITQWLOSESUYIHQKMEDOFF");
    msg.value = 130U;

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
    msg.setTimeStamp(0.746020348815);
    msg.setSource(30660U);
    msg.setSourceEntity(147U);
    msg.setDestination(12298U);
    msg.setDestinationEntity(249U);
    msg.name.assign("ILZVNFRSVOFOOAILTGYNAIYJZKMCSTWSUCDGVVEWYXLNOHAWDKRLTKFAEDVXYOKNHABCDMRNLGBLJIWNIRTKWZZEMHDYZG");
    msg.value = 150U;

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
    msg.setTimeStamp(0.0569932441433);
    msg.setSource(20746U);
    msg.setSourceEntity(111U);
    msg.setDestination(4506U);
    msg.setDestinationEntity(201U);
    msg.name.assign("IJTQFNJVRRYRMCUYSZYTFSXROFCWPPGEMWSWPBIDNOXHVXWANKHSTWPVSMQDLOMMCVOBFQFGBIBGWAUTHFGDJHEDPQENOAUZ");

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
    msg.setTimeStamp(0.909820392873);
    msg.setSource(41280U);
    msg.setSourceEntity(95U);
    msg.setDestination(22875U);
    msg.setDestinationEntity(76U);
    msg.name.assign("JAUEGRZOUIBEZEDCLBTVQPPESVNKUCMAMRRXYBYHFJIFWXYJQCMMHHXOQOFMXARKXIDSVWCUBTSSFCZTNAQZHSHXUYVTODTYLYDIOJZYTJLKBIABECLLQKKKPMXUDYSEKQWNGWWLDPBEVFUNRGJRCAIVLLMUBQDGNWSM");

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
    msg.setTimeStamp(0.184456821402);
    msg.setSource(14782U);
    msg.setSourceEntity(4U);
    msg.setDestination(20305U);
    msg.setDestinationEntity(60U);
    msg.name.assign("WTSXAAZMCJXMNRPXHWGYBNOBSXA");

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
    msg.setTimeStamp(0.736176808193);
    msg.setSource(16751U);
    msg.setSourceEntity(86U);
    msg.setDestination(55628U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CYUOSWMCULGEMIGPXRCUEZGWQTJTTUQIUMRTSJQOKNONUDOLIFPRXRHLWTDMADFKVBWXHFHCPHIMIPDRFOJKXQQKGAXEQLLEOVVIZRYJFFKFCXOPBXJAKZYLEWZSQTKYSLSVYFYXDVMXCZUFQNZIV");
    msg.value = 140U;

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
    msg.setTimeStamp(0.586480053018);
    msg.setSource(6120U);
    msg.setSourceEntity(44U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(139U);
    msg.name.assign("ZDNLOTXJCZOZATCQTLCGSFZMURBYNPLVN");
    msg.value = 215U;

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
    msg.setTimeStamp(0.481737600432);
    msg.setSource(15975U);
    msg.setSourceEntity(201U);
    msg.setDestination(26551U);
    msg.setDestinationEntity(193U);
    msg.name.assign("WVYGRBRGPVOJEVDDYAHGRPBSYNPTCQZUNRWOLZMILSUJGBEDTXWYCNDRAMOHNVPSDXJXAZCYNWLEUNMDBFIGHSFAVJAVOIERTILNYQUYCPPXDHIBTBMFJQGPIAEWLGHRKQWJ");
    msg.value = 77U;

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
    msg.setTimeStamp(0.583167366148);
    msg.setSource(62215U);
    msg.setSourceEntity(89U);
    msg.setDestination(54495U);
    msg.setDestinationEntity(146U);
    msg.id = 143U;
    msg.period = 2938081118U;
    msg.duty_cycle = 2497979707U;

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
    msg.setTimeStamp(0.689429776074);
    msg.setSource(19547U);
    msg.setSourceEntity(122U);
    msg.setDestination(28426U);
    msg.setDestinationEntity(108U);
    msg.id = 124U;
    msg.period = 2625854147U;
    msg.duty_cycle = 2636240732U;

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
    msg.setTimeStamp(0.824952022046);
    msg.setSource(30537U);
    msg.setSourceEntity(9U);
    msg.setDestination(12232U);
    msg.setDestinationEntity(207U);
    msg.id = 202U;
    msg.period = 2599848381U;
    msg.duty_cycle = 2447919857U;

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
    msg.setTimeStamp(0.125391083359);
    msg.setSource(33594U);
    msg.setSourceEntity(106U);
    msg.setDestination(63901U);
    msg.setDestinationEntity(201U);
    msg.id = 24U;
    msg.period = 1633061782U;
    msg.duty_cycle = 3128757292U;

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
    msg.setTimeStamp(0.0263982644034);
    msg.setSource(50408U);
    msg.setSourceEntity(148U);
    msg.setDestination(31665U);
    msg.setDestinationEntity(212U);
    msg.id = 118U;
    msg.period = 3398264934U;
    msg.duty_cycle = 3100310475U;

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
    msg.setTimeStamp(0.309212803857);
    msg.setSource(17350U);
    msg.setSourceEntity(228U);
    msg.setDestination(21776U);
    msg.setDestinationEntity(6U);
    msg.id = 63U;
    msg.period = 565015816U;
    msg.duty_cycle = 1759704318U;

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
    msg.setTimeStamp(0.723915469724);
    msg.setSource(474U);
    msg.setSourceEntity(79U);
    msg.setDestination(27583U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.237408470371;
    msg.lon = 0.277614870621;
    msg.height = 0.345149166605;
    msg.x = 0.330169665255;
    msg.y = 0.488245058737;
    msg.z = 0.139116367199;
    msg.phi = 0.618974071951;
    msg.theta = 0.46053372148;
    msg.psi = 0.10134008362;
    msg.u = 0.169361311817;
    msg.v = 0.712603201615;
    msg.w = 0.264539037099;
    msg.vx = 0.462928057853;
    msg.vy = 0.688014398164;
    msg.vz = 0.676538201412;
    msg.p = 0.358865438869;
    msg.q = 0.657762239731;
    msg.r = 0.581969807556;
    msg.depth = 0.794359088089;
    msg.alt = 0.407518213885;

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
    msg.setTimeStamp(0.899772417013);
    msg.setSource(46695U);
    msg.setSourceEntity(184U);
    msg.setDestination(31575U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.645774058609;
    msg.lon = 0.25162677333;
    msg.height = 0.157979064839;
    msg.x = 0.691461890879;
    msg.y = 0.816575023803;
    msg.z = 0.365098084101;
    msg.phi = 0.955229085156;
    msg.theta = 0.768717996366;
    msg.psi = 0.636377637791;
    msg.u = 0.780660682447;
    msg.v = 0.255391639242;
    msg.w = 0.775318811895;
    msg.vx = 0.717850169188;
    msg.vy = 0.537077840159;
    msg.vz = 0.856134900419;
    msg.p = 0.313567323179;
    msg.q = 0.631902594516;
    msg.r = 0.575637449206;
    msg.depth = 0.452208064673;
    msg.alt = 0.621738488829;

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
    msg.setTimeStamp(0.0282139325463);
    msg.setSource(31299U);
    msg.setSourceEntity(152U);
    msg.setDestination(23260U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.528058579019;
    msg.lon = 0.873572528998;
    msg.height = 0.445933393517;
    msg.x = 0.958710381681;
    msg.y = 0.270162912814;
    msg.z = 0.374544836225;
    msg.phi = 0.0870513156019;
    msg.theta = 0.881569843638;
    msg.psi = 0.494280054651;
    msg.u = 0.473167211674;
    msg.v = 0.251391383977;
    msg.w = 0.84892483274;
    msg.vx = 0.940151075594;
    msg.vy = 0.156829761369;
    msg.vz = 0.631669779245;
    msg.p = 0.0580869971705;
    msg.q = 0.44787333607;
    msg.r = 0.949586064611;
    msg.depth = 0.648825837377;
    msg.alt = 0.687052469066;

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
    msg.setTimeStamp(0.80409889317);
    msg.setSource(23758U);
    msg.setSourceEntity(77U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(156U);
    msg.x = 0.0857794084027;
    msg.y = 0.990129992691;
    msg.z = 0.679535185911;

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
    msg.setTimeStamp(0.54830912044);
    msg.setSource(1102U);
    msg.setSourceEntity(160U);
    msg.setDestination(36749U);
    msg.setDestinationEntity(24U);
    msg.x = 0.7698714331;
    msg.y = 0.0828042939052;
    msg.z = 0.731512637561;

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
    msg.setTimeStamp(0.444393914272);
    msg.setSource(54460U);
    msg.setSourceEntity(33U);
    msg.setDestination(34179U);
    msg.setDestinationEntity(28U);
    msg.x = 0.85445188194;
    msg.y = 0.794933538148;
    msg.z = 0.697530525445;

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
    msg.setTimeStamp(0.477832785059);
    msg.setSource(19895U);
    msg.setSourceEntity(102U);
    msg.setDestination(21447U);
    msg.setDestinationEntity(144U);
    msg.value = 0.847303146213;

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
    msg.setTimeStamp(0.0148856831658);
    msg.setSource(27311U);
    msg.setSourceEntity(149U);
    msg.setDestination(64053U);
    msg.setDestinationEntity(132U);
    msg.value = 0.36132241702;

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
    msg.setTimeStamp(0.352229642241);
    msg.setSource(39886U);
    msg.setSourceEntity(196U);
    msg.setDestination(23313U);
    msg.setDestinationEntity(14U);
    msg.value = 0.798877066654;

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
    msg.setTimeStamp(0.048964361987);
    msg.setSource(37575U);
    msg.setSourceEntity(90U);
    msg.setDestination(32036U);
    msg.setDestinationEntity(52U);
    msg.value = 0.323206535137;

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
    msg.setTimeStamp(0.186122784476);
    msg.setSource(34825U);
    msg.setSourceEntity(253U);
    msg.setDestination(12243U);
    msg.setDestinationEntity(151U);
    msg.value = 0.764048762179;

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
    msg.setTimeStamp(0.313138511713);
    msg.setSource(56070U);
    msg.setSourceEntity(209U);
    msg.setDestination(47724U);
    msg.setDestinationEntity(89U);
    msg.value = 0.0196369338667;

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
    msg.setTimeStamp(0.702682585537);
    msg.setSource(33365U);
    msg.setSourceEntity(82U);
    msg.setDestination(65236U);
    msg.setDestinationEntity(65U);
    msg.x = 0.399049162329;
    msg.y = 0.621012894716;
    msg.z = 0.53782340422;
    msg.phi = 0.449805864272;
    msg.theta = 0.476166357988;
    msg.psi = 0.955515368202;
    msg.p = 0.470182818982;
    msg.q = 0.831513538908;
    msg.r = 0.374501683746;
    msg.u = 0.981176136468;
    msg.v = 0.723749709973;
    msg.w = 0.0963940230439;
    msg.bias_psi = 0.956391615865;
    msg.bias_r = 0.82492773147;

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
    msg.setTimeStamp(0.506611027832);
    msg.setSource(59069U);
    msg.setSourceEntity(130U);
    msg.setDestination(55180U);
    msg.setDestinationEntity(159U);
    msg.x = 0.872119914746;
    msg.y = 0.0566851394094;
    msg.z = 0.934694765836;
    msg.phi = 0.220307520355;
    msg.theta = 0.725355348978;
    msg.psi = 0.691979758863;
    msg.p = 0.946928288499;
    msg.q = 0.669953307015;
    msg.r = 0.16967577721;
    msg.u = 0.756317161255;
    msg.v = 0.83765043754;
    msg.w = 0.35639151158;
    msg.bias_psi = 0.645358648155;
    msg.bias_r = 0.777105670747;

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
    msg.setTimeStamp(0.632784362929);
    msg.setSource(47547U);
    msg.setSourceEntity(203U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(96U);
    msg.x = 0.506384467076;
    msg.y = 0.237922424956;
    msg.z = 0.0923610827255;
    msg.phi = 0.421535093991;
    msg.theta = 0.69366047167;
    msg.psi = 0.894742977122;
    msg.p = 0.408693819809;
    msg.q = 0.57952655394;
    msg.r = 0.0412492814389;
    msg.u = 0.452799491015;
    msg.v = 0.710620256619;
    msg.w = 0.0145170928923;
    msg.bias_psi = 0.608979811695;
    msg.bias_r = 0.00646504016392;

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
    msg.setTimeStamp(0.54217272289);
    msg.setSource(19424U);
    msg.setSourceEntity(181U);
    msg.setDestination(45537U);
    msg.setDestinationEntity(31U);
    msg.bias_psi = 0.453867696825;
    msg.bias_r = 0.956055636755;
    msg.cog = 0.960530178298;
    msg.cyaw = 0.909098182885;
    msg.lbl_rej_level = 0.451575117181;
    msg.gps_rej_level = 0.301074653316;
    msg.custom_x = 0.100564789178;
    msg.custom_y = 0.507568379423;
    msg.custom_z = 0.939405382399;

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
    msg.setTimeStamp(0.282211423384);
    msg.setSource(27829U);
    msg.setSourceEntity(183U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(61U);
    msg.bias_psi = 0.996652154015;
    msg.bias_r = 0.26517126947;
    msg.cog = 0.514134641304;
    msg.cyaw = 0.480475377295;
    msg.lbl_rej_level = 0.590112042373;
    msg.gps_rej_level = 0.3476047686;
    msg.custom_x = 0.648757688305;
    msg.custom_y = 0.0274073955677;
    msg.custom_z = 0.17360174903;

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
    msg.setTimeStamp(0.426495422137);
    msg.setSource(31102U);
    msg.setSourceEntity(90U);
    msg.setDestination(21646U);
    msg.setDestinationEntity(163U);
    msg.bias_psi = 0.0346914899339;
    msg.bias_r = 0.27850052864;
    msg.cog = 0.62100846841;
    msg.cyaw = 0.850291757631;
    msg.lbl_rej_level = 0.211894959376;
    msg.gps_rej_level = 0.748804290989;
    msg.custom_x = 0.842267654195;
    msg.custom_y = 0.934040805075;
    msg.custom_z = 0.634712566465;

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
    msg.setTimeStamp(0.136814638002);
    msg.setSource(55114U);
    msg.setSourceEntity(172U);
    msg.setDestination(24849U);
    msg.setDestinationEntity(58U);
    msg.utc_time = 0.602322866809;
    msg.reason = 87U;

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
    msg.setTimeStamp(0.974394451367);
    msg.setSource(11199U);
    msg.setSourceEntity(124U);
    msg.setDestination(64394U);
    msg.setDestinationEntity(237U);
    msg.utc_time = 0.510693224352;
    msg.reason = 52U;

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
    msg.setTimeStamp(0.950744034989);
    msg.setSource(60544U);
    msg.setSourceEntity(202U);
    msg.setDestination(16047U);
    msg.setDestinationEntity(22U);
    msg.utc_time = 0.774916151737;
    msg.reason = 51U;

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
    msg.setTimeStamp(0.491310665237);
    msg.setSource(14638U);
    msg.setSourceEntity(34U);
    msg.setDestination(58989U);
    msg.setDestinationEntity(196U);
    msg.id = 62U;
    msg.range = 0.00236255848391;
    msg.acceptance = 207U;

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
    msg.setTimeStamp(0.236739117551);
    msg.setSource(21006U);
    msg.setSourceEntity(78U);
    msg.setDestination(12514U);
    msg.setDestinationEntity(197U);
    msg.id = 7U;
    msg.range = 0.730560797801;
    msg.acceptance = 137U;

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
    msg.setTimeStamp(0.706440659687);
    msg.setSource(1125U);
    msg.setSourceEntity(137U);
    msg.setDestination(60968U);
    msg.setDestinationEntity(156U);
    msg.id = 174U;
    msg.range = 0.0465699871573;
    msg.acceptance = 195U;

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
    msg.setTimeStamp(0.0867011666748);
    msg.setSource(22689U);
    msg.setSourceEntity(230U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(47U);
    msg.type = 94U;
    msg.reason = 244U;
    msg.value = 0.477039009077;
    msg.timestep = 0.700028795467;

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
    msg.setTimeStamp(0.244585314805);
    msg.setSource(50515U);
    msg.setSourceEntity(109U);
    msg.setDestination(5876U);
    msg.setDestinationEntity(215U);
    msg.type = 66U;
    msg.reason = 96U;
    msg.value = 0.295069729803;
    msg.timestep = 0.316942155738;

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
    msg.setTimeStamp(0.812515253229);
    msg.setSource(35564U);
    msg.setSourceEntity(207U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(139U);
    msg.type = 163U;
    msg.reason = 42U;
    msg.value = 0.601519098662;
    msg.timestep = 0.584344152324;

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
    msg.setTimeStamp(0.660046377943);
    msg.setSource(57228U);
    msg.setSourceEntity(241U);
    msg.setDestination(14015U);
    msg.setDestinationEntity(188U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QYRMAVBEBOJXWSGQBHUJHSGX");
    tmp_msg_0.lat = 0.991821070061;
    tmp_msg_0.lon = 0.915362099893;
    tmp_msg_0.depth = 0.825224829955;
    tmp_msg_0.query_channel = 67U;
    tmp_msg_0.reply_channel = 70U;
    tmp_msg_0.transponder_delay = 177U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0850584547795;
    msg.y = 0.836895647892;
    msg.var_x = 0.664518250529;
    msg.var_y = 0.790549569991;
    msg.distance = 0.575598281037;

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
    msg.setTimeStamp(0.192035228202);
    msg.setSource(14008U);
    msg.setSourceEntity(4U);
    msg.setDestination(47540U);
    msg.setDestinationEntity(150U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HTADJEMTXDLOGFHVBQCWNLRFTTJOFOVFOMLXDSKOGKINVULPZRBDUIKPJZRXXEIUGKRYHBCEPDECAYVXYGREYSETXAESPQEDFSXWMK");
    tmp_msg_0.lat = 0.852058354395;
    tmp_msg_0.lon = 0.152021698441;
    tmp_msg_0.depth = 0.212221497118;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 34U;
    tmp_msg_0.transponder_delay = 208U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.92679748735;
    msg.y = 0.613816523589;
    msg.var_x = 0.731502580871;
    msg.var_y = 0.855024947466;
    msg.distance = 0.591905539871;

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
    msg.setTimeStamp(0.498207819414);
    msg.setSource(8972U);
    msg.setSourceEntity(21U);
    msg.setDestination(31891U);
    msg.setDestinationEntity(213U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VAUKBNYWEULJREVCKFBRVPSUBMDLAAZSTRQZVFVISIIXDOCVPXTEBG");
    tmp_msg_0.lat = 0.0587126641326;
    tmp_msg_0.lon = 0.244288353173;
    tmp_msg_0.depth = 0.210400073112;
    tmp_msg_0.query_channel = 233U;
    tmp_msg_0.reply_channel = 95U;
    tmp_msg_0.transponder_delay = 102U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.325504873734;
    msg.y = 0.105319655102;
    msg.var_x = 0.24394378895;
    msg.var_y = 0.974694897495;
    msg.distance = 0.102453229926;

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
    msg.setTimeStamp(0.334100486061);
    msg.setSource(23335U);
    msg.setSourceEntity(143U);
    msg.setDestination(29725U);
    msg.setDestinationEntity(223U);
    msg.state = 37U;

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
    msg.setTimeStamp(0.698958141306);
    msg.setSource(53607U);
    msg.setSourceEntity(13U);
    msg.setDestination(62399U);
    msg.setDestinationEntity(174U);
    msg.state = 102U;

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
    msg.setTimeStamp(0.700047185067);
    msg.setSource(42381U);
    msg.setSourceEntity(140U);
    msg.setDestination(44417U);
    msg.setDestinationEntity(73U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.284613267552);
    msg.setSource(20672U);
    msg.setSourceEntity(54U);
    msg.setDestination(34158U);
    msg.setDestinationEntity(47U);
    msg.x = 0.597268534563;
    msg.y = 0.142882916636;
    msg.z = 0.702961457269;

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
    msg.setTimeStamp(0.0346027259335);
    msg.setSource(45356U);
    msg.setSourceEntity(228U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(98U);
    msg.x = 0.34044486706;
    msg.y = 0.941555233618;
    msg.z = 0.904467009306;

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
    msg.setTimeStamp(0.0915959873501);
    msg.setSource(50475U);
    msg.setSourceEntity(101U);
    msg.setDestination(12847U);
    msg.setDestinationEntity(104U);
    msg.x = 0.401453914485;
    msg.y = 0.768779077987;
    msg.z = 0.686189788168;

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
    msg.setTimeStamp(0.879130759241);
    msg.setSource(60331U);
    msg.setSourceEntity(128U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(50U);
    msg.va = 0.0354699175326;
    msg.aoa = 0.485307640867;
    msg.ssa = 0.950456724139;

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
    msg.setTimeStamp(0.19592448254);
    msg.setSource(55196U);
    msg.setSourceEntity(247U);
    msg.setDestination(56851U);
    msg.setDestinationEntity(68U);
    msg.va = 0.420778892203;
    msg.aoa = 0.669491088276;
    msg.ssa = 0.338802882642;

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
    msg.setTimeStamp(0.0696230801179);
    msg.setSource(16810U);
    msg.setSourceEntity(72U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(92U);
    msg.va = 0.889536378629;
    msg.aoa = 0.712000225954;
    msg.ssa = 0.915725847011;

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
    msg.setTimeStamp(0.361880202182);
    msg.setSource(32899U);
    msg.setSourceEntity(156U);
    msg.setDestination(60638U);
    msg.setDestinationEntity(126U);
    msg.value = 0.103342847233;

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
    msg.setTimeStamp(0.110896522725);
    msg.setSource(49152U);
    msg.setSourceEntity(118U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(63U);
    msg.value = 0.908385594152;

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
    msg.setTimeStamp(0.199426099889);
    msg.setSource(39529U);
    msg.setSourceEntity(33U);
    msg.setDestination(21594U);
    msg.setDestinationEntity(132U);
    msg.value = 0.149565009569;

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
    msg.setTimeStamp(0.629106776562);
    msg.setSource(16095U);
    msg.setSourceEntity(32U);
    msg.setDestination(61854U);
    msg.setDestinationEntity(191U);
    msg.value = 0.746277157194;
    msg.z_units = 236U;

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
    msg.setTimeStamp(0.830515438378);
    msg.setSource(18930U);
    msg.setSourceEntity(193U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(86U);
    msg.value = 0.582649056701;
    msg.z_units = 141U;

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
    msg.setTimeStamp(0.662690166828);
    msg.setSource(60357U);
    msg.setSourceEntity(246U);
    msg.setDestination(39535U);
    msg.setDestinationEntity(172U);
    msg.value = 0.706657981943;
    msg.z_units = 248U;

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
    msg.setTimeStamp(0.811555658899);
    msg.setSource(60682U);
    msg.setSourceEntity(134U);
    msg.setDestination(51775U);
    msg.setDestinationEntity(52U);
    msg.value = 0.485365101442;
    msg.speed_units = 28U;

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
    msg.setTimeStamp(0.0381035559823);
    msg.setSource(54778U);
    msg.setSourceEntity(36U);
    msg.setDestination(21415U);
    msg.setDestinationEntity(93U);
    msg.value = 0.539094744521;
    msg.speed_units = 139U;

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
    msg.setTimeStamp(0.363899638653);
    msg.setSource(54893U);
    msg.setSourceEntity(5U);
    msg.setDestination(1559U);
    msg.setDestinationEntity(211U);
    msg.value = 0.914586029337;
    msg.speed_units = 63U;

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
    msg.setTimeStamp(0.288105464228);
    msg.setSource(46706U);
    msg.setSourceEntity(119U);
    msg.setDestination(11127U);
    msg.setDestinationEntity(122U);
    msg.value = 0.0443560835211;

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
    msg.setTimeStamp(0.23840985603);
    msg.setSource(52580U);
    msg.setSourceEntity(53U);
    msg.setDestination(12000U);
    msg.setDestinationEntity(41U);
    msg.value = 0.333955920434;

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
    msg.setTimeStamp(0.415812511867);
    msg.setSource(50458U);
    msg.setSourceEntity(214U);
    msg.setDestination(57890U);
    msg.setDestinationEntity(36U);
    msg.value = 0.305348138742;

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
    msg.setTimeStamp(0.912320702411);
    msg.setSource(18236U);
    msg.setSourceEntity(11U);
    msg.setDestination(33687U);
    msg.setDestinationEntity(1U);
    msg.value = 0.507988558277;

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
    msg.setTimeStamp(0.825731409034);
    msg.setSource(27609U);
    msg.setSourceEntity(64U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(133U);
    msg.value = 0.256413510927;

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
    msg.setTimeStamp(0.271811961901);
    msg.setSource(62398U);
    msg.setSourceEntity(245U);
    msg.setDestination(15180U);
    msg.setDestinationEntity(84U);
    msg.value = 0.512390882252;

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
    msg.setTimeStamp(0.477678920624);
    msg.setSource(45486U);
    msg.setSourceEntity(110U);
    msg.setDestination(49667U);
    msg.setDestinationEntity(120U);
    msg.value = 0.722830499599;

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
    msg.setTimeStamp(0.611393321203);
    msg.setSource(25918U);
    msg.setSourceEntity(137U);
    msg.setDestination(50105U);
    msg.setDestinationEntity(184U);
    msg.value = 0.350054753975;

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
    msg.setTimeStamp(0.619459405991);
    msg.setSource(696U);
    msg.setSourceEntity(152U);
    msg.setDestination(54586U);
    msg.setDestinationEntity(210U);
    msg.value = 0.137041389472;

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
    msg.setTimeStamp(0.15786374138);
    msg.setSource(35317U);
    msg.setSourceEntity(231U);
    msg.setDestination(58487U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 559009589U;
    msg.start_lat = 0.375350236495;
    msg.start_lon = 0.754274623922;
    msg.start_z = 0.505438802422;
    msg.start_z_units = 78U;
    msg.end_lat = 0.581908809659;
    msg.end_lon = 0.44214903989;
    msg.end_z = 0.28170422261;
    msg.end_z_units = 58U;
    msg.speed = 0.427773478368;
    msg.speed_units = 46U;
    msg.lradius = 0.675398895962;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.185907918898);
    msg.setSource(32879U);
    msg.setSourceEntity(45U);
    msg.setDestination(37471U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 137988384U;
    msg.start_lat = 0.807480899009;
    msg.start_lon = 0.839951022192;
    msg.start_z = 0.177280622181;
    msg.start_z_units = 76U;
    msg.end_lat = 0.588016373022;
    msg.end_lon = 0.994395618608;
    msg.end_z = 0.418255511375;
    msg.end_z_units = 174U;
    msg.speed = 0.820299199928;
    msg.speed_units = 175U;
    msg.lradius = 0.206939171012;
    msg.flags = 132U;

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
    msg.setTimeStamp(0.0356720302016);
    msg.setSource(59949U);
    msg.setSourceEntity(80U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 4235005887U;
    msg.start_lat = 0.514625194822;
    msg.start_lon = 0.389141035006;
    msg.start_z = 0.356368843034;
    msg.start_z_units = 78U;
    msg.end_lat = 0.167561189031;
    msg.end_lon = 0.0833948025599;
    msg.end_z = 0.675571710988;
    msg.end_z_units = 194U;
    msg.speed = 0.579367795972;
    msg.speed_units = 86U;
    msg.lradius = 0.456166962415;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.465847061527);
    msg.setSource(46968U);
    msg.setSourceEntity(220U);
    msg.setDestination(38127U);
    msg.setDestinationEntity(104U);
    msg.x = 0.357117105531;
    msg.y = 0.567996021986;
    msg.z = 0.958816641356;
    msg.k = 0.0627493968971;
    msg.m = 0.241517296113;
    msg.n = 0.619531593085;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.662196757313);
    msg.setSource(21440U);
    msg.setSourceEntity(23U);
    msg.setDestination(28142U);
    msg.setDestinationEntity(23U);
    msg.x = 0.611824980304;
    msg.y = 0.195197078624;
    msg.z = 0.142229656804;
    msg.k = 0.99722482107;
    msg.m = 0.289590771743;
    msg.n = 0.176529753555;
    msg.flags = 178U;

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
    msg.setTimeStamp(0.0604669141062);
    msg.setSource(32239U);
    msg.setSourceEntity(56U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(5U);
    msg.x = 0.529000734397;
    msg.y = 0.275915152123;
    msg.z = 0.605991409508;
    msg.k = 0.4781535038;
    msg.m = 0.70494373685;
    msg.n = 0.628262014392;
    msg.flags = 90U;

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
    msg.setTimeStamp(0.227366579789);
    msg.setSource(40084U);
    msg.setSourceEntity(217U);
    msg.setDestination(34421U);
    msg.setDestinationEntity(91U);
    msg.value = 0.837471552444;

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
    msg.setTimeStamp(0.869213977817);
    msg.setSource(54236U);
    msg.setSourceEntity(213U);
    msg.setDestination(34424U);
    msg.setDestinationEntity(37U);
    msg.value = 0.961504223603;

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
    msg.setTimeStamp(0.516950133674);
    msg.setSource(16389U);
    msg.setSourceEntity(221U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(177U);
    msg.value = 0.172457589521;

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
    msg.setTimeStamp(0.615182995318);
    msg.setSource(54846U);
    msg.setSourceEntity(139U);
    msg.setDestination(65503U);
    msg.setDestinationEntity(53U);
    msg.u = 0.281707473318;
    msg.v = 0.445777788573;
    msg.w = 0.871442934087;
    msg.p = 0.709653360367;
    msg.q = 0.600069870798;
    msg.r = 0.118436280145;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.393891467192);
    msg.setSource(54121U);
    msg.setSourceEntity(22U);
    msg.setDestination(32108U);
    msg.setDestinationEntity(181U);
    msg.u = 0.301587070309;
    msg.v = 0.682785728918;
    msg.w = 0.396437678535;
    msg.p = 0.303919042678;
    msg.q = 0.156501654772;
    msg.r = 0.57180559595;
    msg.flags = 199U;

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
    msg.setTimeStamp(0.243811529806);
    msg.setSource(8345U);
    msg.setSourceEntity(224U);
    msg.setDestination(6960U);
    msg.setDestinationEntity(101U);
    msg.u = 0.641064375956;
    msg.v = 0.631780842265;
    msg.w = 0.280597494602;
    msg.p = 0.140052156901;
    msg.q = 0.870639815425;
    msg.r = 0.0235720731124;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.534248415474);
    msg.setSource(166U);
    msg.setSourceEntity(53U);
    msg.setDestination(3002U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 3460377668U;
    msg.start_lat = 0.24462910911;
    msg.start_lon = 0.0680172634319;
    msg.start_z = 0.733277742858;
    msg.start_z_units = 175U;
    msg.end_lat = 0.466768489719;
    msg.end_lon = 0.341940845288;
    msg.end_z = 0.864156248741;
    msg.end_z_units = 92U;
    msg.lradius = 0.0602297609761;
    msg.flags = 244U;
    msg.x = 0.902442816107;
    msg.y = 0.729955321798;
    msg.z = 0.169683153322;
    msg.vx = 0.0538999266964;
    msg.vy = 0.112973498692;
    msg.vz = 0.494724657775;
    msg.course_error = 0.665013226496;
    msg.eta = 10961U;

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
    msg.setTimeStamp(0.883990343996);
    msg.setSource(40916U);
    msg.setSourceEntity(246U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 2605456415U;
    msg.start_lat = 0.572383047266;
    msg.start_lon = 0.86721438813;
    msg.start_z = 0.284131326076;
    msg.start_z_units = 102U;
    msg.end_lat = 0.128960057142;
    msg.end_lon = 0.374456460852;
    msg.end_z = 0.0353011608294;
    msg.end_z_units = 43U;
    msg.lradius = 0.207876115841;
    msg.flags = 145U;
    msg.x = 0.769613295504;
    msg.y = 0.0420843409615;
    msg.z = 0.195925049938;
    msg.vx = 0.425537826007;
    msg.vy = 0.124639122557;
    msg.vz = 0.669064735906;
    msg.course_error = 0.159627717699;
    msg.eta = 1313U;

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
    msg.setTimeStamp(0.70827970626);
    msg.setSource(62043U);
    msg.setSourceEntity(238U);
    msg.setDestination(45877U);
    msg.setDestinationEntity(26U);
    msg.path_ref = 1208473216U;
    msg.start_lat = 0.724922703183;
    msg.start_lon = 0.502941298425;
    msg.start_z = 0.948157924291;
    msg.start_z_units = 192U;
    msg.end_lat = 0.787917826574;
    msg.end_lon = 0.568110726253;
    msg.end_z = 0.147393084225;
    msg.end_z_units = 170U;
    msg.lradius = 0.556484445288;
    msg.flags = 144U;
    msg.x = 0.080636856241;
    msg.y = 0.949916094585;
    msg.z = 0.994516637071;
    msg.vx = 0.851593072168;
    msg.vy = 0.487816964693;
    msg.vz = 0.723170841587;
    msg.course_error = 0.202860704256;
    msg.eta = 48043U;

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
    msg.setTimeStamp(0.254441040722);
    msg.setSource(34092U);
    msg.setSourceEntity(179U);
    msg.setDestination(21400U);
    msg.setDestinationEntity(37U);
    msg.k = 0.640423380574;
    msg.m = 0.327066436589;
    msg.n = 0.101483513458;

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
    msg.setTimeStamp(0.777578253567);
    msg.setSource(5413U);
    msg.setSourceEntity(140U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(226U);
    msg.k = 0.0109050508148;
    msg.m = 0.134859493704;
    msg.n = 0.236203813344;

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
    msg.setTimeStamp(0.122650946973);
    msg.setSource(15341U);
    msg.setSourceEntity(154U);
    msg.setDestination(23019U);
    msg.setDestinationEntity(191U);
    msg.k = 0.563416850028;
    msg.m = 0.697005382542;
    msg.n = 0.458978084748;

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
    msg.setTimeStamp(0.263163550071);
    msg.setSource(5866U);
    msg.setSourceEntity(62U);
    msg.setDestination(38201U);
    msg.setDestinationEntity(122U);
    msg.p = 0.894866745803;
    msg.i = 0.301585774762;
    msg.d = 0.598200039828;
    msg.a = 0.137159398573;

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
    msg.setTimeStamp(0.231164018077);
    msg.setSource(9960U);
    msg.setSourceEntity(21U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(238U);
    msg.p = 0.926213168834;
    msg.i = 0.179655444427;
    msg.d = 0.934890262503;
    msg.a = 0.235909117977;

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
    msg.setTimeStamp(0.780673441836);
    msg.setSource(59502U);
    msg.setSourceEntity(125U);
    msg.setDestination(45240U);
    msg.setDestinationEntity(1U);
    msg.p = 0.346486621329;
    msg.i = 0.708709433142;
    msg.d = 0.540622642763;
    msg.a = 0.164312952064;

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
    msg.setTimeStamp(0.786052436091);
    msg.setSource(32026U);
    msg.setSourceEntity(253U);
    msg.setDestination(38701U);
    msg.setDestinationEntity(143U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.415181339352);
    msg.setSource(58935U);
    msg.setSourceEntity(234U);
    msg.setDestination(31036U);
    msg.setDestinationEntity(179U);
    msg.op = 238U;

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
    msg.setTimeStamp(0.446018811287);
    msg.setSource(56317U);
    msg.setSourceEntity(173U);
    msg.setDestination(39514U);
    msg.setDestinationEntity(137U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.348089121085);
    msg.setSource(57793U);
    msg.setSourceEntity(139U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(237U);
    msg.x = 0.152618921942;
    msg.y = 0.0181462476058;
    msg.z = 0.914945581167;
    msg.vx = 0.983753828015;
    msg.vy = 0.829447268972;
    msg.vz = 0.768516458813;
    msg.ax = 0.41543408348;
    msg.ay = 0.521801588189;
    msg.az = 0.116851783521;
    msg.flags = 39721U;

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
    msg.setTimeStamp(0.563433733094);
    msg.setSource(47396U);
    msg.setSourceEntity(168U);
    msg.setDestination(53895U);
    msg.setDestinationEntity(0U);
    msg.x = 0.235267781371;
    msg.y = 0.689442408573;
    msg.z = 0.0509634333765;
    msg.vx = 0.619852634756;
    msg.vy = 0.40058310872;
    msg.vz = 0.0146546724011;
    msg.ax = 0.438070130158;
    msg.ay = 0.228001686851;
    msg.az = 0.32113648129;
    msg.flags = 61740U;

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
    msg.setTimeStamp(0.00111275345248);
    msg.setSource(33134U);
    msg.setSourceEntity(103U);
    msg.setDestination(18816U);
    msg.setDestinationEntity(81U);
    msg.x = 0.164775985388;
    msg.y = 0.848884323758;
    msg.z = 0.772075249325;
    msg.vx = 0.54825201913;
    msg.vy = 0.186367136613;
    msg.vz = 0.50696584878;
    msg.ax = 0.311639218512;
    msg.ay = 0.453121297786;
    msg.az = 0.225182322271;
    msg.flags = 26116U;

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
    msg.setTimeStamp(0.0640176620252);
    msg.setSource(28599U);
    msg.setSourceEntity(209U);
    msg.setDestination(19096U);
    msg.setDestinationEntity(44U);
    msg.value = 0.811768536463;

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
    msg.setTimeStamp(0.655540088606);
    msg.setSource(59177U);
    msg.setSourceEntity(169U);
    msg.setDestination(4783U);
    msg.setDestinationEntity(73U);
    msg.value = 0.992853013585;

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
    msg.setTimeStamp(0.382808751534);
    msg.setSource(1250U);
    msg.setSourceEntity(214U);
    msg.setDestination(28694U);
    msg.setDestinationEntity(24U);
    msg.value = 0.628306986255;

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
    msg.setTimeStamp(0.0970713868267);
    msg.setSource(9157U);
    msg.setSourceEntity(131U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(207U);
    msg.timeout = 26886U;
    msg.lat = 0.224041292936;
    msg.lon = 0.0296294665982;
    msg.z = 0.382293359923;
    msg.z_units = 219U;
    msg.speed = 0.526717276662;
    msg.speed_units = 21U;
    msg.roll = 0.565728243818;
    msg.pitch = 0.16737050634;
    msg.yaw = 0.488911909428;
    msg.custom.assign("NYVGRMMTFNUAOUZFLBDKXUFJSHGWGAEPLWCYCPRDRKSUCWWTMWJZUSFQOYZXJYCVNSFOWVAHTERGMHHXCIFPJPYLNCCRMVESJZEXWQVJARGABFEQRWAZONQSBYIPMKXZAQHEHQTGLSKXEXXHNNHFDDODQQINTLOLYIOJDLKVVSKKHZIIYDWTNGPEVBETXFOOUMGMDCQBABFKZDIASRMNTITPJPPBKXPJBWCAUQYSM");

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
    msg.setTimeStamp(0.6599960632);
    msg.setSource(64689U);
    msg.setSourceEntity(63U);
    msg.setDestination(13303U);
    msg.setDestinationEntity(74U);
    msg.timeout = 34436U;
    msg.lat = 0.66008659745;
    msg.lon = 0.160013478662;
    msg.z = 0.854333986931;
    msg.z_units = 227U;
    msg.speed = 0.853185268633;
    msg.speed_units = 73U;
    msg.roll = 0.379276169197;
    msg.pitch = 0.237700327736;
    msg.yaw = 0.595088921812;
    msg.custom.assign("IQMKQRRVANVYLTPMBACFLMTWYXEGQZPICEWBASFJAGQSTKVYCJXPNJZSIEJAUHOCHEHPBILDXVDZBRORZHEOJRAJDDBUNGLXSOWYZFKQILKFIGKBLHOJDMMLWAZYHRSRCHPBAUNMDQOSBVTQUSHCKSIKXXFEYNMJJMWDUGNYWBZMCYOTDTREYDBVERGTUNCEDPHGZQAOAWVTT");

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
    msg.setTimeStamp(0.223661549961);
    msg.setSource(2049U);
    msg.setSourceEntity(246U);
    msg.setDestination(61555U);
    msg.setDestinationEntity(68U);
    msg.timeout = 11723U;
    msg.lat = 0.664029724363;
    msg.lon = 0.956189524483;
    msg.z = 0.865260206024;
    msg.z_units = 208U;
    msg.speed = 0.032815734683;
    msg.speed_units = 91U;
    msg.roll = 0.748521542916;
    msg.pitch = 0.62085155293;
    msg.yaw = 0.989797447384;
    msg.custom.assign("TOHJBYYXNWOKMBGDPPQFQBVMZKQNEGDQEWKTWWPQVUZHFUNCUPKPVOORXJSUJSXLSQMKSWSRAMQMBVGIIEGMRMFHZZNUEWMOLTJZYARWKPZNRRYBUFQPEXBBKUVAPISDKDDJLTYYRCGDYEMUZCSAVUHXSELOBJJZCLQFCJOKTXFTGDPNAFIZENWIEBVXKUHVGGALTOIDXINLCLAACTWNSHORLNFHHRTOFHVS");

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
    msg.setTimeStamp(0.23360658322);
    msg.setSource(59671U);
    msg.setSourceEntity(34U);
    msg.setDestination(50674U);
    msg.setDestinationEntity(188U);
    msg.timeout = 33777U;
    msg.lat = 0.147212263429;
    msg.lon = 0.460138626108;
    msg.z = 0.792996475177;
    msg.z_units = 101U;
    msg.speed = 0.471241244494;
    msg.speed_units = 49U;
    msg.duration = 11606U;
    msg.radius = 0.677271793661;
    msg.flags = 94U;
    msg.custom.assign("GDOLYFAKSWPLWBRPQNMAKPJWDJCFQAVHWAGWCOHVMXSFEZSLJDKUCSRBMRMNUKJLHUNWFQBVEJAAMYBVBXVPTSYBUJIHNNKWASWLPBLHIVMGEYGCTNIDIORPGTMOBVOYEXIETQEZLKPHDHODQGRFTYPADNKOHZFGUKTTYYNMVZGEILZXWFBCCOHCPGCCZQIFAYKRGUD");

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
    msg.setTimeStamp(0.694660516532);
    msg.setSource(15309U);
    msg.setSourceEntity(41U);
    msg.setDestination(6181U);
    msg.setDestinationEntity(50U);
    msg.timeout = 16249U;
    msg.lat = 0.532608416605;
    msg.lon = 0.209671644669;
    msg.z = 0.191818218109;
    msg.z_units = 245U;
    msg.speed = 0.358331896217;
    msg.speed_units = 143U;
    msg.duration = 47412U;
    msg.radius = 0.0731313718134;
    msg.flags = 122U;
    msg.custom.assign("JINOWBGLDUWGCJIOARMGYTCCZWMDKHDPLIHMWQXEBRHYONKTUZLSHWQAGMMPOEEGFDBHSRTJXDUCDKFYKVBZJHQJIXVKBYJSLXQNHUFMLYDOSOKISVHBCPAXIQVQRLR");

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
    msg.setTimeStamp(0.454894812745);
    msg.setSource(55329U);
    msg.setSourceEntity(123U);
    msg.setDestination(44693U);
    msg.setDestinationEntity(81U);
    msg.timeout = 37857U;
    msg.lat = 0.831582974893;
    msg.lon = 0.756844180721;
    msg.z = 0.447793384509;
    msg.z_units = 61U;
    msg.speed = 0.635884304279;
    msg.speed_units = 81U;
    msg.duration = 47755U;
    msg.radius = 0.877647571121;
    msg.flags = 190U;
    msg.custom.assign("OXROYQBKBSFHOJCGLQWGHVKCLWBCGQZQODRXZPOLBIYWJOHGSFADJNJIPHENFIVKVHKZUWAVCNYYDCOAAQSIHSZJQZAVPYEVSBMUHBUWMSGALEIAVOIQCLOJSRZATJXDPQXMFKOVNIECAM");

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
    msg.setTimeStamp(0.221056687238);
    msg.setSource(62732U);
    msg.setSourceEntity(101U);
    msg.setDestination(53804U);
    msg.setDestinationEntity(27U);
    msg.custom.assign("QXBFZOXDOSFONINUWAGTHNWZIYVULKANPEFUBGQBORVKJEZPSDCWEBFWNWRAEPNLFSOQRDNHGCIXVKVXZZYZKJDTEYHUMTHHDZXRRGOFOCLZTCVJKVMFHXYFLCLCUKBEPCYFBXSYN");

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
    msg.setTimeStamp(0.625148950304);
    msg.setSource(36246U);
    msg.setSourceEntity(243U);
    msg.setDestination(37325U);
    msg.setDestinationEntity(139U);
    msg.custom.assign("ZISMPQJOAHTVFCYGUQNZENFZZMRRLWHWALXLXNWESCHBIIJBPWNNXVYPVRXIOTIGCMQXACCTDZLINOZROHMUGQWCBKFUAXENDCOIYVFMEKGHTCBDYQJYQKYBOSVKDTEFAOUXFOHSXNMELLW");

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
    msg.setTimeStamp(0.311875269833);
    msg.setSource(33208U);
    msg.setSourceEntity(54U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(103U);
    msg.custom.assign("ITJEFXHYDQQEWPVWZLBAURRHKGQDQMLFYUKYWACWDFTQRPLABKXFOYDHDQQPNCFOFRUINMSOVTINEXAZSRWVNPTBLCDMGJMBHDCKLCSRCWMADTIWXTOUGSMEXGKKOKQPJO");

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
    msg.setTimeStamp(0.756594392859);
    msg.setSource(45653U);
    msg.setSourceEntity(167U);
    msg.setDestination(4346U);
    msg.setDestinationEntity(254U);
    msg.timeout = 34131U;
    msg.lat = 0.196224332775;
    msg.lon = 0.288868939152;
    msg.z = 0.803017441441;
    msg.z_units = 202U;
    msg.duration = 45572U;
    msg.speed = 0.958841272293;
    msg.speed_units = 43U;
    msg.type = 254U;
    msg.radius = 0.794538315903;
    msg.length = 0.322129583075;
    msg.bearing = 0.741852858754;
    msg.direction = 242U;
    msg.custom.assign("UYNCBRLIPJCOLSSYOAZSLWRAUNSIPKYAQWKXRZCNGPCLOWYCBMBYPUYGEMZLNQFAQDHDOKXPTWXDGPJOBUTZHDQTPLHBPZWMVVVIWHRTIIJVSUZOHYGZFWHIAOHEQCKSJHGXAUFJVFETEXDPARQNSNDTSLSRGMTVBUSERVHXYNGFQEZYHWFUAXCKIANMOUYLXVQMJNQFBJWAKMGLREVEGBFTKFMKJD");

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
    msg.setTimeStamp(0.202839374894);
    msg.setSource(9638U);
    msg.setSourceEntity(14U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(190U);
    msg.timeout = 40895U;
    msg.lat = 0.633554824168;
    msg.lon = 0.754902592153;
    msg.z = 0.557391165788;
    msg.z_units = 102U;
    msg.duration = 2286U;
    msg.speed = 0.317656692804;
    msg.speed_units = 62U;
    msg.type = 105U;
    msg.radius = 0.246861354527;
    msg.length = 0.911612023311;
    msg.bearing = 0.911265172893;
    msg.direction = 70U;
    msg.custom.assign("BRISJOCVDTKGKQOCIIKHJUROSMZPKNTYBPCFNAFNPYDWLFSHISQDRJJTLGDGITIHCVWSFAPNYYHVBFCLHMMASMWDFSMQLYPSJZTJJREQONYGXZUZGQOPRUEEMOPGNQYBORGVUSADYLEBCJCNUXVFKGWGECTQFMPVXEEAWQPAYQMWKRTDBXNMCBWGLXWVRWVTDCUVKXITKHQBANWMVFZZNORSULLIHEAZURXYJOXEJKZPBDDXUO");

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
    msg.setTimeStamp(0.65078239176);
    msg.setSource(36708U);
    msg.setSourceEntity(30U);
    msg.setDestination(12652U);
    msg.setDestinationEntity(229U);
    msg.timeout = 30078U;
    msg.lat = 0.748231273623;
    msg.lon = 0.931149341547;
    msg.z = 0.870723394928;
    msg.z_units = 217U;
    msg.duration = 54385U;
    msg.speed = 0.618825872202;
    msg.speed_units = 15U;
    msg.type = 136U;
    msg.radius = 0.262660461932;
    msg.length = 0.338140647514;
    msg.bearing = 0.143330256532;
    msg.direction = 93U;
    msg.custom.assign("IZBQJLNULPYHTVGNKNYDDEXLQDAMQKHRXRAVPIEEASEOMZOYTOQBVWKHTUZMIFKYYGUK");

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
    msg.setTimeStamp(0.777719972151);
    msg.setSource(39597U);
    msg.setSourceEntity(17U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(207U);
    msg.duration = 15113U;
    msg.custom.assign("DDBKCTVSKHKYXRDDRAGVSZAVSGZCNOIPQR");

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
    msg.setTimeStamp(0.87788814376);
    msg.setSource(12265U);
    msg.setSourceEntity(145U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(151U);
    msg.duration = 26799U;
    msg.custom.assign("LGCCHTOBTOZMASIMEAYYTOIKBAEBGRRNHWGPNQYVFDHJINYMDPTUJYZUZSPNAJPZDBGLUVBFSJHRGVYVHXQKFAZWRFTMHWCRKDRSRENACLSQOEGFRICIKWKGNYFJUBKIPXBMBCFEQDPTGZZCIKMQZDDXMJVAHIUP");

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
    msg.setTimeStamp(0.103801724708);
    msg.setSource(40511U);
    msg.setSourceEntity(162U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(214U);
    msg.duration = 52144U;
    msg.custom.assign("UGZXKOGCDTEWSBIBJKHEIMSBLJRELXLRRIFIUQCYZZNQPFCEOYXZUQBNEUKZXVAKPLMOUARGO");

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
    msg.setTimeStamp(0.0341471544507);
    msg.setSource(48753U);
    msg.setSourceEntity(229U);
    msg.setDestination(31577U);
    msg.setDestinationEntity(248U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.450661896767;
    msg.control.set(tmp_msg_0);
    msg.duration = 22017U;
    msg.custom.assign("ACRXXVHYFFJCKSLWMJTAKXZANUMFWOIQTOFMN");

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
    msg.setTimeStamp(0.895299327982);
    msg.setSource(29641U);
    msg.setSourceEntity(254U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(90U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 1934563294U;
    tmp_msg_0.start_lat = 0.615242380019;
    tmp_msg_0.start_lon = 0.938313599381;
    tmp_msg_0.start_z = 0.191535162457;
    tmp_msg_0.start_z_units = 53U;
    tmp_msg_0.end_lat = 0.0547706616786;
    tmp_msg_0.end_lon = 0.73971901095;
    tmp_msg_0.end_z = 0.833166523501;
    tmp_msg_0.end_z_units = 0U;
    tmp_msg_0.speed = 0.75768534574;
    tmp_msg_0.speed_units = 244U;
    tmp_msg_0.lradius = 0.889861320238;
    tmp_msg_0.flags = 174U;
    msg.control.set(tmp_msg_0);
    msg.duration = 21323U;
    msg.custom.assign("HMWBQGRMATHFQWPPJSVQHUKUKDXYTNDPYTANTLUDCBXUUTDWGKBRVODEZEONYFGVLEBBOFWCPPPEMZSOCHUOFIGAOARUJLFYJCRCZHQDXKENRQSLKFUCWCGIQEMXRFVHYWGSIOKYILZSXXADZADJMLTNAQQTJMAKSWSKOMHBVATNRYIXWPWUIFRHJBIWVGDXJGBSZLZOLRVD");

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
    msg.setTimeStamp(0.350307845114);
    msg.setSource(28995U);
    msg.setSourceEntity(13U);
    msg.setDestination(21177U);
    msg.setDestinationEntity(10U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.710655433769;
    msg.control.set(tmp_msg_0);
    msg.duration = 22696U;
    msg.custom.assign("YBNNDTAIWDXPBZSTHIFJPDQJFECWMCOEECMWPAPGBRKTZYMHBVMEBQACGYENIGWOBMJDZCNDYUTWAVVHOXALUDNPJSSHEKSVBIKX");

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
    msg.setTimeStamp(0.660585618616);
    msg.setSource(61360U);
    msg.setSourceEntity(188U);
    msg.setDestination(53857U);
    msg.setDestinationEntity(82U);
    msg.timeout = 4717U;
    msg.lat = 0.803734111479;
    msg.lon = 0.333484149412;
    msg.z = 0.116591642975;
    msg.z_units = 37U;
    msg.speed = 0.865599689414;
    msg.speed_units = 20U;
    msg.bearing = 0.914149734895;
    msg.cross_angle = 0.750406800505;
    msg.width = 0.156970378543;
    msg.length = 0.399013792943;
    msg.hstep = 0.536271490305;
    msg.coff = 7U;
    msg.alternation = 80U;
    msg.flags = 35U;
    msg.custom.assign("GBWPQCOFSVBDEEYSUSTXQATDBMCRJUSQVPFDCJCIHKLQPGQUHKQWRABSVZYOOTLFPFKIZTOIFBNNETMULWPZVMDUNAIKXFMWPXVCRVWQEXWXMLUOTSLVYLSSEWRPOMEANOJHLXJMJGHAGPWBFENHNIWNVAAYQKD");

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
    msg.setTimeStamp(0.0983022681748);
    msg.setSource(32118U);
    msg.setSourceEntity(122U);
    msg.setDestination(41514U);
    msg.setDestinationEntity(31U);
    msg.timeout = 32060U;
    msg.lat = 0.971967603715;
    msg.lon = 0.0499983639881;
    msg.z = 0.663001989631;
    msg.z_units = 225U;
    msg.speed = 0.791513243486;
    msg.speed_units = 42U;
    msg.bearing = 0.321146533444;
    msg.cross_angle = 0.0207958871845;
    msg.width = 0.109326683077;
    msg.length = 0.342698119376;
    msg.hstep = 0.587337716897;
    msg.coff = 90U;
    msg.alternation = 57U;
    msg.flags = 58U;
    msg.custom.assign("ZCRPBEJMCQLUSMZTVNYXXONHENXRGGZUJOLVASWMRCCBCSNOABKKWOGURKZAQEYLDDHRUNQPRBJTKXVUODAXNDKBEMZJPXIMEPYKCTLFRRQSBJXWHTTWJSAOQYPEHPMIVAGTRUPTBLUDVTUDZQSJDFYIGIKGUCYJHILRKEVVFFKWDWOKIFZMJWHWTLSMOFEOGFQBIQFLCVSHXZFAENBXSLGIFMAACQN");

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
    msg.setTimeStamp(0.984605718527);
    msg.setSource(668U);
    msg.setSourceEntity(143U);
    msg.setDestination(11668U);
    msg.setDestinationEntity(73U);
    msg.timeout = 21611U;
    msg.lat = 0.785376693351;
    msg.lon = 0.911727656946;
    msg.z = 0.200304309127;
    msg.z_units = 161U;
    msg.speed = 0.795485248286;
    msg.speed_units = 203U;
    msg.bearing = 0.570444660491;
    msg.cross_angle = 0.109202262521;
    msg.width = 0.37179337984;
    msg.length = 0.485931149767;
    msg.hstep = 0.563390543366;
    msg.coff = 165U;
    msg.alternation = 186U;
    msg.flags = 20U;
    msg.custom.assign("FQNCCCTTTWDKQSTWQLPAMVLDYVOWKXOFOJCLYGGNNUJJFEUZOSRSZXVBUMSQYLLFMIEGZB");

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
    msg.setTimeStamp(0.992973337573);
    msg.setSource(49508U);
    msg.setSourceEntity(179U);
    msg.setDestination(53373U);
    msg.setDestinationEntity(44U);
    msg.timeout = 28601U;
    msg.lat = 0.138200332456;
    msg.lon = 0.986062272573;
    msg.z = 0.318533341993;
    msg.z_units = 180U;
    msg.speed = 0.496186541614;
    msg.speed_units = 234U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.315607541011;
    tmp_msg_0.y = 0.0545345607857;
    tmp_msg_0.z = 0.374759607802;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZOQBZLLYTBBOZYQOLJYDKXSLCYTKUJQIIHDSSCYWXHYPRUPWBVJYORXMPLETTEKZGMQUMMMWSDBZVIFMZZWPIJCAFUGSJFBHZVTERDVRASERKSHUWNYDIMQXLWQWQVISPXGPFAQGBOIAYIOKKCTSUNKKIBVRUDWEVH");

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
    msg.setTimeStamp(0.988675363775);
    msg.setSource(30978U);
    msg.setSourceEntity(144U);
    msg.setDestination(1501U);
    msg.setDestinationEntity(222U);
    msg.timeout = 52968U;
    msg.lat = 0.743322377135;
    msg.lon = 0.918597262185;
    msg.z = 0.599848266904;
    msg.z_units = 148U;
    msg.speed = 0.699306274117;
    msg.speed_units = 39U;
    msg.custom.assign("OGWRFPCHGNURKVGMFHGAMCTUWOECIYHYDQDOWNPWTTMWLHAFYXOKBRJMBDIECAUIDCKZWPGRGKSNBCBF");

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
    msg.setTimeStamp(0.704029965392);
    msg.setSource(23636U);
    msg.setSourceEntity(160U);
    msg.setDestination(65319U);
    msg.setDestinationEntity(101U);
    msg.timeout = 48981U;
    msg.lat = 0.674618568717;
    msg.lon = 0.194952971061;
    msg.z = 0.611520163374;
    msg.z_units = 210U;
    msg.speed = 0.0572832002531;
    msg.speed_units = 66U;
    msg.custom.assign("ZPCYKLOJJCNQNOKCYSDYQOQHDDNTLHAIRVCEPTFAAKQXPNGSRCUMKLUWCPNJRDOLCDYAUWXNBFOEHMBVWPBBZJRAEZLRCHEFAXFWGXWVUBNSKZMGOGUHASIRGXEKFLBKJDTTVBPIWEQJSZYAURBWSWGHZSROJVYEOITGOIRJVWNGUPHMTZADTSVXHFDXSQTLCXKIDQUQKMHFBVXVMDHEOZANPRQZMFIJLUYMTSUEQYIIFIELWFTVZGMYGMLJK");

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
    msg.setTimeStamp(0.223462538033);
    msg.setSource(56601U);
    msg.setSourceEntity(134U);
    msg.setDestination(49329U);
    msg.setDestinationEntity(119U);
    msg.x = 0.0909290079586;
    msg.y = 0.95242682039;
    msg.z = 0.891011329495;

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
    msg.setTimeStamp(0.658648462982);
    msg.setSource(19939U);
    msg.setSourceEntity(92U);
    msg.setDestination(24753U);
    msg.setDestinationEntity(19U);
    msg.x = 0.587511514888;
    msg.y = 0.239857861466;
    msg.z = 0.0708504382915;

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
    msg.setTimeStamp(0.314512348447);
    msg.setSource(15742U);
    msg.setSourceEntity(83U);
    msg.setDestination(28391U);
    msg.setDestinationEntity(115U);
    msg.x = 0.419500556766;
    msg.y = 0.576547597633;
    msg.z = 0.24819688739;

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
    msg.setTimeStamp(0.173238277665);
    msg.setSource(56133U);
    msg.setSourceEntity(79U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(119U);
    msg.timeout = 45100U;
    msg.lat = 0.543488087533;
    msg.lon = 0.776976179646;
    msg.z = 0.44167946737;
    msg.z_units = 118U;
    msg.amplitude = 0.208305584539;
    msg.pitch = 0.166782325684;
    msg.speed = 0.299436445388;
    msg.speed_units = 195U;
    msg.custom.assign("PFQRAGSBGIJTPHWZHONUGIUNZHVHQOVXJLBLALEXEDNIMTEJZERCDLVEIVKCJVRHODKLBLQJTODUDWBTIYAFHGPQPRUZSBSOAYDL");

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
    msg.setTimeStamp(0.592127671258);
    msg.setSource(5762U);
    msg.setSourceEntity(47U);
    msg.setDestination(253U);
    msg.setDestinationEntity(32U);
    msg.timeout = 9966U;
    msg.lat = 0.314338282571;
    msg.lon = 0.0766460131713;
    msg.z = 0.682211161187;
    msg.z_units = 124U;
    msg.amplitude = 0.399388005759;
    msg.pitch = 0.724453991742;
    msg.speed = 0.122768480316;
    msg.speed_units = 178U;
    msg.custom.assign("BFTJZJCEBKZUKDPAKSLODISQVWPREOEROGVJAOTCVFFDQHUNOISASRYMMISWGZTGQRT");

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
    msg.setTimeStamp(0.2336880853);
    msg.setSource(62959U);
    msg.setSourceEntity(162U);
    msg.setDestination(59728U);
    msg.setDestinationEntity(167U);
    msg.timeout = 12766U;
    msg.lat = 0.961492888888;
    msg.lon = 0.457563927755;
    msg.z = 0.301815059406;
    msg.z_units = 124U;
    msg.amplitude = 0.021171466032;
    msg.pitch = 0.949048426396;
    msg.speed = 0.668059594881;
    msg.speed_units = 84U;
    msg.custom.assign("QFKLZHJGRTOVBZOFASFKQMKZYCRCAXHOUDUFUYTCOEERXYGPLWNSPAONSAINIRZAEAWNEGDGSKZQLHJWUJYQWRXWKNSHITFUPBHPMBYFNVMJIMFCQMZACRIYOFHTECJVHXPIGGJEYUFPLSNYHITVLODNGLOHRJAPVTKJJRWCUKZPXVSYNMXSEAWKDZVSOQAXTBIWDMBICDHBIBZQJEWVDUDCYTBUFXEPVRSBBTDXK");

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
    msg.setTimeStamp(0.876729292197);
    msg.setSource(47405U);
    msg.setSourceEntity(151U);
    msg.setDestination(19662U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.468774403213);
    msg.setSource(52133U);
    msg.setSourceEntity(51U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(31U);

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
    msg.setTimeStamp(0.583860008703);
    msg.setSource(41460U);
    msg.setSourceEntity(169U);
    msg.setDestination(811U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.716984070508);
    msg.setSource(23645U);
    msg.setSourceEntity(25U);
    msg.setDestination(12626U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.312954036423;
    msg.lon = 0.915761899366;
    msg.z = 0.272077194307;
    msg.z_units = 1U;
    msg.radius = 0.178432167874;
    msg.duration = 12673U;
    msg.speed = 0.566718575183;
    msg.speed_units = 42U;
    msg.custom.assign("PSLSKUZKAXQLWEGGNMNAOGBLGGWTORVXMLOIMURAOJJDZICLCSYEFELDYVFHIYFZKKJQGDCDBYJJSZKCMWNLOHFZBSTDOSZZAHQQRWKMOZGUCFILTWPAVTJOJHKSIMSUZRYGXVUEUREVUXMMEQBJTRRYEIWC");

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
    msg.setTimeStamp(0.466467874049);
    msg.setSource(22685U);
    msg.setSourceEntity(242U);
    msg.setDestination(17411U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.656674991899;
    msg.lon = 0.197146844717;
    msg.z = 0.360783664036;
    msg.z_units = 218U;
    msg.radius = 0.623049405734;
    msg.duration = 34720U;
    msg.speed = 0.419536980312;
    msg.speed_units = 2U;
    msg.custom.assign("DCHYOOKZVZAEQPIFXUBBFWJTXDKSHGKMTDGXBCXWDDMIGBYQCHYQVLBYLQHTJAKWWRLZLEBZXVEFKVUETEEQTLAMJEIIPAFLOBEV");

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
    msg.setTimeStamp(0.715533245866);
    msg.setSource(51238U);
    msg.setSourceEntity(167U);
    msg.setDestination(38357U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.005668311583;
    msg.lon = 0.770699471998;
    msg.z = 0.0887839892317;
    msg.z_units = 97U;
    msg.radius = 0.632705420488;
    msg.duration = 30552U;
    msg.speed = 0.319721073791;
    msg.speed_units = 165U;
    msg.custom.assign("XKMKRJZJXVVITFZOFGEPZSITGAFLTYWNKJEILFQXXOXCODSUMKDUXEZGIJATNXKWCPTPBTCPNIHBLNQQRVTHRRSOMREDJDAAGGLVWOPNKBZSSRPWAYATLDGMWBMVVLEBRZROHAZQBBESHGAOOUXFMGWHUZUEUJNNVWS");

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
    msg.setTimeStamp(0.137115061566);
    msg.setSource(26066U);
    msg.setSourceEntity(222U);
    msg.setDestination(18588U);
    msg.setDestinationEntity(171U);
    msg.timeout = 57655U;
    msg.flags = 38U;
    msg.lat = 0.331949269797;
    msg.lon = 0.842649236354;
    msg.start_z = 0.63962927725;
    msg.start_z_units = 35U;
    msg.end_z = 0.618492147613;
    msg.end_z_units = 231U;
    msg.radius = 0.638519429049;
    msg.speed = 0.880860410316;
    msg.speed_units = 187U;
    msg.custom.assign("JDLQOLIYEDEPRTUJDCBXWYOCHIOWXIPMFPSXPGKLHAATMBUFLPMHWPBKVSZCOYYFXMNAJEMDKJUWNJAHWAWRLTNYLXPDLNQTIQKHPXHNFCCSNOAGSOBTRSRHNUUMIXMAVJEMGEGWQWCFKOGVLVOMYJUQK");

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
    msg.setTimeStamp(0.117922856862);
    msg.setSource(16794U);
    msg.setSourceEntity(86U);
    msg.setDestination(64390U);
    msg.setDestinationEntity(203U);
    msg.timeout = 25157U;
    msg.flags = 79U;
    msg.lat = 0.524715663994;
    msg.lon = 0.392367462322;
    msg.start_z = 0.3256751994;
    msg.start_z_units = 154U;
    msg.end_z = 0.313835489723;
    msg.end_z_units = 203U;
    msg.radius = 0.000185865439316;
    msg.speed = 0.22040257193;
    msg.speed_units = 33U;
    msg.custom.assign("YALBBHLRCEFSNSYQOUBQSCAUDJVJTZLPKXSPXLMYXYAVKLNQHPHUOWTIPZGUILPLGOYKPAPKHPKI");

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
    msg.setTimeStamp(0.22115375628);
    msg.setSource(44642U);
    msg.setSourceEntity(49U);
    msg.setDestination(22673U);
    msg.setDestinationEntity(191U);
    msg.timeout = 35190U;
    msg.flags = 162U;
    msg.lat = 0.457834883772;
    msg.lon = 0.0468173068745;
    msg.start_z = 0.223347072797;
    msg.start_z_units = 164U;
    msg.end_z = 0.88045773441;
    msg.end_z_units = 189U;
    msg.radius = 0.879914667487;
    msg.speed = 0.246931362328;
    msg.speed_units = 163U;
    msg.custom.assign("ACOAMBTQHBWDPIXIWCEKANMCEYSSRAVWOSXJGQGHGKGIZHWIUPJMQOTJLCZQDBRAQSRIVTKCXNDZUXJIRPCSOAZJJSFTPCMFWVGZZFKUGLHAQLCLYYEVPVHBGDUNPRUWVTEJWQWFLPKXRVSFAEZZCJLRRWXMBZQMLKDNTFBMEDYUVUEXLSOHBWYOB");

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
    msg.setTimeStamp(0.13172823476);
    msg.setSource(36809U);
    msg.setSourceEntity(17U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(147U);
    msg.timeout = 5552U;
    msg.lat = 0.543912901933;
    msg.lon = 0.150805588033;
    msg.z = 0.969676651255;
    msg.z_units = 97U;
    msg.speed = 0.912526803404;
    msg.speed_units = 82U;
    msg.custom.assign("KMDVCCLHGZFXHTJAJRICNSPZQXKVVBGWFEEJBLYOJQDDCREYSSOZYVEUUWDHBWJNPFYYSYIHAXTQWZVQMNKKTBKPFWXHFCBQXPRFZHZFWPRPOIBFYEYUMOAXHMBGAIKTDJZCYOTLTPUGVOOHKLSUDXWTPESNOAGULKGQVQZQARGIASXVEUIKLLRUTAENCDMDNRDOMTQREDUGSNPMJWL");

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
    msg.setTimeStamp(0.232660401216);
    msg.setSource(5352U);
    msg.setSourceEntity(170U);
    msg.setDestination(4510U);
    msg.setDestinationEntity(60U);
    msg.timeout = 51858U;
    msg.lat = 0.867100587139;
    msg.lon = 0.272460796435;
    msg.z = 0.23933401813;
    msg.z_units = 150U;
    msg.speed = 0.189477264563;
    msg.speed_units = 120U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.616399026423;
    tmp_msg_0.y = 0.659716927731;
    tmp_msg_0.z = 0.051062967809;
    tmp_msg_0.t = 0.360638688053;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QZKAEEXZIBGWHUBLLZDGNDDNMTQNOXYJNPXMSUGIFEYOLIJQPRSFCSGZUAFYVJSWODPKHATTTUBDSKITXRTLFXJTAGLPMIRFFUDQYHZICCVWVOOAZAKNECUILMGQRXQABVQXAOAIMSEEZXPNWHJLMIDPKWDSKRYNFHWVEYYGKJTXCVKWCBOMMVZHK");

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
    msg.setTimeStamp(0.705194355122);
    msg.setSource(59084U);
    msg.setSourceEntity(114U);
    msg.setDestination(9054U);
    msg.setDestinationEntity(93U);
    msg.timeout = 13678U;
    msg.lat = 0.264109372844;
    msg.lon = 0.158401958103;
    msg.z = 0.907703534469;
    msg.z_units = 16U;
    msg.speed = 0.537727705984;
    msg.speed_units = 162U;
    msg.custom.assign("DDADUTNKAASWJTSNLPUNEAFRVJETYJHPCMWLGDIGBPJOKLHRGDRRDZZQJYXLNZMPRLUDGHCFOHOHGXZALSEFFNUGZLTRQQMVWGWFVECOXCQABHQDBJWFPBZXRMWYUOBLXINHVPPKECTRVTSIDKICTEEYPKAMJOEYGSIAKFULCDVYIJYYXOIRIUCWVUSOYBTXGIVKEKOXCMYXNCLNSVFMBKSMVFZUH");

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
    msg.setTimeStamp(0.409487603921);
    msg.setSource(38525U);
    msg.setSourceEntity(69U);
    msg.setDestination(949U);
    msg.setDestinationEntity(243U);
    msg.x = 0.267914206323;
    msg.y = 0.196999127829;
    msg.z = 0.167119205396;
    msg.t = 0.0173596390386;

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
    msg.setTimeStamp(0.193807050036);
    msg.setSource(21818U);
    msg.setSourceEntity(50U);
    msg.setDestination(34623U);
    msg.setDestinationEntity(41U);
    msg.x = 0.771101694904;
    msg.y = 0.102145126321;
    msg.z = 0.952283578599;
    msg.t = 0.112618139591;

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
    msg.setTimeStamp(0.967760320041);
    msg.setSource(43055U);
    msg.setSourceEntity(139U);
    msg.setDestination(55201U);
    msg.setDestinationEntity(95U);
    msg.x = 0.290729725552;
    msg.y = 0.805533853139;
    msg.z = 0.184504913979;
    msg.t = 0.781654947282;

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
    msg.setTimeStamp(0.200788966805);
    msg.setSource(607U);
    msg.setSourceEntity(27U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(8U);
    msg.timeout = 3797U;
    msg.name.assign("JYWJTRHFEEVZVQLVQCIBDHFLPGEKOYQKPGYKTGCE");
    msg.custom.assign("WSZVWJWPAUPGFKFLDQDCXJRFABTPVYRGQEHVQ");

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
    msg.setTimeStamp(0.000595444028292);
    msg.setSource(5152U);
    msg.setSourceEntity(60U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(2U);
    msg.timeout = 21970U;
    msg.name.assign("GHLWIQOSBQVNFMEGKXKSYVGRLCNTNFUPHRTLAJXSNTCHBOVMWEOHEHJBMRGUMQCVQAUYTIJYGBFFHFTOELIRSAYIWJAJBWVNDQULXQZNTWQFTELCHRODLBLZJKCUEWXIRTOIYZDCRPQKMJQVBLPKDAMZHGKCDMOHTSRHIQDKYAOAPFBNFEIXGXCXEGRP");
    msg.custom.assign("EQFWLMAVNXIIVWINPZZZOGXGFLFKJZANIFSIPWMBJ");

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
    msg.setTimeStamp(0.196161639782);
    msg.setSource(15649U);
    msg.setSourceEntity(35U);
    msg.setDestination(46490U);
    msg.setDestinationEntity(129U);
    msg.timeout = 8684U;
    msg.name.assign("ZQKSXMRDDDFQHOBVBWZ");
    msg.custom.assign("ZWMKWOQNMNHKOFBKWLVEUZYUJTERWCPCJOSTXELAUIBOFKCZNZRSEJQEYQSCAPDPGZEHDGWLLMXRUJFVQARQTUCTPKXQEXENITIGNLJCBXSALDITMVUMVHZTGNUJDBHQHRFIKSXLFIFMTXCGAZHMYFBCVKVJSWDZYIGAOOGHFQKJGNPNWRLDDAHUYPIPVSNIVRLOWWMYORCYXRZHJFBLZYPM");

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
    msg.setTimeStamp(0.202196749861);
    msg.setSource(32864U);
    msg.setSourceEntity(41U);
    msg.setDestination(327U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.140674893446;
    msg.lon = 0.973064616359;
    msg.z = 0.108824654345;
    msg.z_units = 184U;
    msg.speed = 0.545475919664;
    msg.speed_units = 5U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.148622878078;
    tmp_msg_0.y = 0.0714096539589;
    tmp_msg_0.z = 0.255443478542;
    tmp_msg_0.t = 0.0888727636351;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.429596439726;
    msg.custom.assign("QQXNMHXSCDIPDCEDWCVZFXCIUHSYELKUMEXLYPGWBTRMGUXTAVBRAGTYAENKBQDDOVEEGMWVAJZVZGTJQPLXZDDIMQNNFJKUMYZMDQWOWHFOGNBUHBAFWZZOPQSJZFBGAXVMRFRYJOEIIBTRMVYRKTPOCJDXFSJHIUPAQANCGLCUJGTRHUWWTOLQKFHSEXAHVNOOFIBHZSLBYRJPG");

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
    msg.setTimeStamp(0.944982732234);
    msg.setSource(59541U);
    msg.setSourceEntity(12U);
    msg.setDestination(4061U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.271186565476;
    msg.lon = 0.409232848348;
    msg.z = 0.425476150126;
    msg.z_units = 76U;
    msg.speed = 0.712669395179;
    msg.speed_units = 169U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.676070366381;
    tmp_msg_0.y = 0.414381611405;
    tmp_msg_0.z = 0.0230618566542;
    tmp_msg_0.t = 0.525821764948;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.230129645143;
    msg.custom.assign("FYWVHAMUUWRTEIUGJJUZGLBIISFEBEYFIEIXDCZVWTJDKHSRLGPIPQVHMMFUIWQMXEJHKOCSGOYXTIAJEBDCBCLDPYQPVTPTLPNSZARJBWSGPUAAWFQBMONVEOVQQHAELOXDHNRSRXULPMNAIZTMCFZNTZEEXRCHVIDKAAHYBLSTFWTGMGOMRNXYOQJGDNUNVYWLFSRZRHPKGGAWQFKDKMNLKJCOXJ");

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
    msg.setTimeStamp(0.417327987283);
    msg.setSource(52734U);
    msg.setSourceEntity(154U);
    msg.setDestination(12593U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.600064605162;
    msg.lon = 0.926666915713;
    msg.z = 0.925003657557;
    msg.z_units = 46U;
    msg.speed = 0.0778534862597;
    msg.speed_units = 57U;
    msg.start_time = 0.804758027957;
    msg.custom.assign("MMQHUUIGQNMLKKNWLLBEKHBFPHEKNWEFAFPDJOIYSKTYPRIXNVGOQXHPJMGKNELVCLMMKLVZJGAFGXCSNBHFSVJOONRBSLURZWPUDVGDHHQNYHSZVTFVTIYCQTCKJAXTXBIRBOCDGDXULZFWZYLWRQACRYJFYGQWOMPTPNBAIIMMEDCYXOIWABUYZTVKAAUEJJBNVXTAYQVDSDQDEECEPSUTW");

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
    msg.setTimeStamp(0.557006028511);
    msg.setSource(38668U);
    msg.setSourceEntity(114U);
    msg.setDestination(34044U);
    msg.setDestinationEntity(229U);
    msg.vid = 11712U;
    msg.off_x = 0.28295061873;
    msg.off_y = 0.631566838152;
    msg.off_z = 0.0879355418768;

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
    msg.setTimeStamp(0.0990603931162);
    msg.setSource(5924U);
    msg.setSourceEntity(197U);
    msg.setDestination(18727U);
    msg.setDestinationEntity(3U);
    msg.vid = 50044U;
    msg.off_x = 0.365759720151;
    msg.off_y = 0.754834022891;
    msg.off_z = 0.0781653304331;

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
    msg.setTimeStamp(0.737300779939);
    msg.setSource(56860U);
    msg.setSourceEntity(209U);
    msg.setDestination(13935U);
    msg.setDestinationEntity(69U);
    msg.vid = 51228U;
    msg.off_x = 0.888248603213;
    msg.off_y = 0.903677785596;
    msg.off_z = 0.606947915909;

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
    msg.setTimeStamp(0.0547936599073);
    msg.setSource(25784U);
    msg.setSourceEntity(157U);
    msg.setDestination(8157U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.776869439697);
    msg.setSource(21704U);
    msg.setSourceEntity(37U);
    msg.setDestination(45191U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.62234189629);
    msg.setSource(17588U);
    msg.setSourceEntity(176U);
    msg.setDestination(29195U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.829477753482);
    msg.setSource(32008U);
    msg.setSourceEntity(89U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(2U);
    msg.mid = 34145U;

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
    msg.setTimeStamp(0.0493445746068);
    msg.setSource(64833U);
    msg.setSourceEntity(25U);
    msg.setDestination(5797U);
    msg.setDestinationEntity(191U);
    msg.mid = 46765U;

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
    msg.setTimeStamp(0.940566857826);
    msg.setSource(51986U);
    msg.setSourceEntity(68U);
    msg.setDestination(21523U);
    msg.setDestinationEntity(250U);
    msg.mid = 25170U;

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
    msg.setTimeStamp(0.201171195159);
    msg.setSource(34786U);
    msg.setSourceEntity(86U);
    msg.setDestination(30555U);
    msg.setDestinationEntity(177U);
    msg.state = 116U;
    msg.eta = 37218U;
    msg.info.assign("AEWFNYTHVGIRSLGVUCCNGNAIYBESVTQUFJCHKHBJEDOQIKHOEYHZVMQUFCUFWRXKQBBMIWLLSHZCSBRXPGHBOEXIFBDOEZTTSXQZZRVPUWMLFZDSD");

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
    msg.setTimeStamp(0.219446670963);
    msg.setSource(18839U);
    msg.setSourceEntity(224U);
    msg.setDestination(33364U);
    msg.setDestinationEntity(1U);
    msg.state = 166U;
    msg.eta = 20096U;
    msg.info.assign("GMYITIJVJAIKFISCAKENCODYKOETIBDBHMPMH");

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
    msg.setTimeStamp(0.627266656541);
    msg.setSource(32123U);
    msg.setSourceEntity(196U);
    msg.setDestination(22914U);
    msg.setDestinationEntity(96U);
    msg.state = 86U;
    msg.eta = 59649U;
    msg.info.assign("YQKDJPQPBAQZDI");

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
    msg.setTimeStamp(0.992823459906);
    msg.setSource(47279U);
    msg.setSourceEntity(135U);
    msg.setDestination(19650U);
    msg.setDestinationEntity(191U);
    msg.system = 8353U;
    msg.duration = 41642U;
    msg.speed = 0.862732969879;
    msg.speed_units = 79U;
    msg.x = 0.532875625789;
    msg.y = 0.337784811153;
    msg.z = 0.0165140015704;
    msg.z_units = 131U;

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
    msg.setTimeStamp(0.779834893801);
    msg.setSource(16794U);
    msg.setSourceEntity(17U);
    msg.setDestination(44691U);
    msg.setDestinationEntity(227U);
    msg.system = 49483U;
    msg.duration = 52990U;
    msg.speed = 0.628835708974;
    msg.speed_units = 68U;
    msg.x = 0.596870291565;
    msg.y = 0.33743795352;
    msg.z = 0.739328188061;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.773293306787);
    msg.setSource(63415U);
    msg.setSourceEntity(101U);
    msg.setDestination(50478U);
    msg.setDestinationEntity(161U);
    msg.system = 26156U;
    msg.duration = 36724U;
    msg.speed = 0.361215270478;
    msg.speed_units = 46U;
    msg.x = 0.373205997385;
    msg.y = 0.906613018579;
    msg.z = 0.906941883308;
    msg.z_units = 176U;

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
    msg.setTimeStamp(0.926087903038);
    msg.setSource(29082U);
    msg.setSourceEntity(182U);
    msg.setDestination(21384U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.230600129247;
    msg.lon = 0.102640121064;
    msg.speed = 0.807602769348;
    msg.speed_units = 172U;
    msg.duration = 63750U;
    msg.sys_a = 18628U;
    msg.sys_b = 15870U;
    msg.move_threshold = 0.737056803501;

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
    msg.setTimeStamp(0.40384402049);
    msg.setSource(9463U);
    msg.setSourceEntity(59U);
    msg.setDestination(11117U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.115905606397;
    msg.lon = 0.787328377085;
    msg.speed = 0.894579901023;
    msg.speed_units = 163U;
    msg.duration = 10720U;
    msg.sys_a = 14290U;
    msg.sys_b = 24542U;
    msg.move_threshold = 0.478174606263;

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
    msg.setTimeStamp(0.393509871123);
    msg.setSource(8749U);
    msg.setSourceEntity(62U);
    msg.setDestination(21144U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.0912656226745;
    msg.lon = 0.290956905564;
    msg.speed = 0.744545556433;
    msg.speed_units = 251U;
    msg.duration = 32592U;
    msg.sys_a = 10418U;
    msg.sys_b = 20198U;
    msg.move_threshold = 0.117637809596;

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
    msg.setTimeStamp(0.0279150555075);
    msg.setSource(33191U);
    msg.setSourceEntity(29U);
    msg.setDestination(24976U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.689476313528;
    msg.lon = 0.696384763297;
    msg.z = 0.134247079781;
    msg.z_units = 39U;
    msg.speed = 0.750525307996;
    msg.speed_units = 181U;
    msg.custom.assign("ZEHSVIAUGRPRLOSIYCTJTUKRRYJIDLQONRCHJDMLNSZCWDF");

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
    msg.setTimeStamp(0.585726865967);
    msg.setSource(49145U);
    msg.setSourceEntity(61U);
    msg.setDestination(44572U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.0881254097806;
    msg.lon = 0.230001985156;
    msg.z = 0.346669789609;
    msg.z_units = 148U;
    msg.speed = 0.342650744032;
    msg.speed_units = 46U;
    msg.custom.assign("HRECZKKTKKTLLXMPNTSEUGYIJFCGIHCGDDZHJESDRAJVWWVZNXRZGBVSEQUFYQUHFKGOFJVHMOTLFULGELMNZXFBBLWPLIACZCBAPBPWPSCVBVOEGZJRXAHLGJLXRNZGOHTDQJTYFCFUFJJBDRNIQERSRTYQZIXWKXBYAISODAMVYEWAQHOOQPYWDFMVWECEGIINRNHWUQVMJMSYSZTLHUXYAKAIARBVKWPOKPOUTMKQNOQXYMM");

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
    msg.setTimeStamp(0.883324490132);
    msg.setSource(25453U);
    msg.setSourceEntity(191U);
    msg.setDestination(49868U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.7708625337;
    msg.lon = 0.702982645928;
    msg.z = 0.252899354523;
    msg.z_units = 109U;
    msg.speed = 0.0184003647342;
    msg.speed_units = 228U;
    msg.custom.assign("FXNTEARELIREXXOPVHYHGHUDMRQZTTSNZAJGJEFVILFOYEBQOYXAVPDWXNVVPURITSVZKWKADBDYGPJYQORBFXIOJQZWNKSKAYBINTNLOBCKDRMICCFTGGKAXVGWSJNWYLOESWUKTUSEFVCQJPWCLJWSZGVOJNMDIAMPRGXTJT");

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
    msg.setTimeStamp(0.557742021769);
    msg.setSource(38911U);
    msg.setSourceEntity(34U);
    msg.setDestination(55966U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.335828929527;
    msg.lon = 0.0903768532829;

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
    msg.setTimeStamp(0.652803514907);
    msg.setSource(19992U);
    msg.setSourceEntity(188U);
    msg.setDestination(43535U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.384418307674;
    msg.lon = 0.639524973678;

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
    msg.setTimeStamp(0.571380047282);
    msg.setSource(24561U);
    msg.setSourceEntity(218U);
    msg.setDestination(59207U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.617598022839;
    msg.lon = 0.240921735955;

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
    msg.setTimeStamp(0.925029871105);
    msg.setSource(12358U);
    msg.setSourceEntity(10U);
    msg.setDestination(61489U);
    msg.setDestinationEntity(60U);
    msg.timeout = 51843U;
    msg.lat = 0.377157281688;
    msg.lon = 0.103404321879;
    msg.z = 0.409018792092;
    msg.z_units = 103U;
    msg.pitch = 0.119942579602;
    msg.amplitude = 0.106579666447;
    msg.duration = 45965U;
    msg.speed = 0.828361602335;
    msg.speed_units = 158U;
    msg.radius = 0.505877041889;
    msg.direction = 84U;
    msg.custom.assign("GMLDSXQCDQWSOMMUQFTKHXDNLQKLLNDORTOOEUFNNPUWJTAIBEZGYBVYGJJHECRASYZAKJGBURMMKIJVWATUAUAQNHGVBZPZBLLSKPZREDGVMSQSKHYBGTZCJYCKMW");

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
    msg.setTimeStamp(0.817727534314);
    msg.setSource(3797U);
    msg.setSourceEntity(29U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(224U);
    msg.timeout = 52492U;
    msg.lat = 0.947299752556;
    msg.lon = 0.789285578275;
    msg.z = 0.467900108181;
    msg.z_units = 216U;
    msg.pitch = 0.726756542765;
    msg.amplitude = 0.94724564992;
    msg.duration = 25789U;
    msg.speed = 0.813489050961;
    msg.speed_units = 221U;
    msg.radius = 0.875732157784;
    msg.direction = 8U;
    msg.custom.assign("NXVKAEDZIBJSYAJUUPCEVXANFBZZOEPGTMTOCRFPFWCBJITCCLKOFRYGBQSGTXEVOQBYIITTKMDDWUJZUEPDBHWGDHGMYTBJVQWLJAFNDLISMRGCKFHPJAPMQMIJNQRONKVSZQXRVXZIEXFYCSRDSQEEOGWUDFQDCRARHSVUTKPZHGRWXNWYAHVXPUOSSUONJLQXZHNKIHGJQVUNCBILIUBWYKLMNTZ");

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
    msg.setTimeStamp(0.698658126205);
    msg.setSource(59260U);
    msg.setSourceEntity(253U);
    msg.setDestination(1307U);
    msg.setDestinationEntity(146U);
    msg.timeout = 55639U;
    msg.lat = 0.966118622171;
    msg.lon = 0.296757281363;
    msg.z = 0.789120867762;
    msg.z_units = 212U;
    msg.pitch = 0.128210031833;
    msg.amplitude = 0.921256125844;
    msg.duration = 18785U;
    msg.speed = 0.125202351104;
    msg.speed_units = 197U;
    msg.radius = 0.895662542429;
    msg.direction = 189U;
    msg.custom.assign("QMTXRZQGDWYUDLFRUNUDBQQVCCNRQCIHLDLUGYSPJRLXVI");

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
    msg.setTimeStamp(0.302858344025);
    msg.setSource(44073U);
    msg.setSourceEntity(187U);
    msg.setDestination(23026U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("YGTVTBQTZOUDQQIFGHXKPIJMQARCHASIHDFOQALEOVZGXECZONCXVHNMXMSFOASPLZSBPNJGNQOJYWSBZUWKUNYPOBKQMXEUGJLMERLDMTCDKEMVLCIZATJEQOHWPXELOZJFZULFWVQCKNFBGDDRKFJFVRGKXNTIYMFWHBVPRSJWBHIGKBCHLDSRARDTJTNDUSMBNSKYVCYWQICFXEMDTYRIWWZI");
    msg.reference_frame = 34U;
    msg.custom.assign("JVRWVUPQQHDNKFNWLBDVYRGSFMWAMEUQMFJTXDEEBBWBAMPWVUJGZRYOQHUMKUKRKEXTPHBNUPMVGQGZGTSILGCXOKNAXQXUTTEPJFVSPFXQISAIHVXCLZNHALCRWCBBFOOGRFZDLBTVVKBZGZCIOTEQTOAEDDWLCOFZYJKJXSERTLQFCPBRNGHFSYTYSHJSSJIMQADWINUZLCPLXYMGPIIOOMW");

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
    msg.setTimeStamp(0.930497945309);
    msg.setSource(51201U);
    msg.setSourceEntity(65U);
    msg.setDestination(53363U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("QNNQCOFTRAIYPXPNIREJWYHLSOZCVLZAPZXNPISXSSZCKTOSPBJSOAWRTXKFWSBEQEAGPCIDZXQY");
    msg.reference_frame = 107U;
    msg.custom.assign("TZUGSMZPVHECWOFNLLJQCGVIRQWJAEYADMXDCYERGLBDIFIQQMHSWRBTYVPSRRKZFZWXYTQUZJWEJTIUFVTGEVSLOOAGATNOBPBBNHXTFBLEDGADCANZGNRFHCSMORQFTAXMQOOKCHUIMEHDUKS");

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
    msg.setTimeStamp(0.939542770872);
    msg.setSource(20460U);
    msg.setSourceEntity(184U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("GAHDOUWILY");
    msg.reference_frame = 175U;
    msg.custom.assign("HLUQZVKNLRXFSOVLSRBZYVEHGUGIHJRLEUYVMOSJQJSHTRIKWPAKMKYBXAPSRCWEEQMJEXVVZYIQKIBWT");

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
    msg.setTimeStamp(0.160143333195);
    msg.setSource(41252U);
    msg.setSourceEntity(130U);
    msg.setDestination(8033U);
    msg.setDestinationEntity(135U);
    msg.group_name.assign("CNIDMHCMUVLNGXWMNOGTHIDCWJCXYRUHBF");
    msg.formation_name.assign("KCSOVBEXYAMZXBYOXLJUSYUDJQDKEXVZGLMEIWDFZCMJHHUMVCJTPQGIHKCWFPBUMCH");
    msg.plan_id.assign("YADLESHZGTVFNBMGCBFZDLYSHYGBHPWGGVXWNJIHLBYBWEMUHSLAIBANCWOIVJBZLVTUXLDKZGMEAQEUERUPVVPGCKMAFJTCQEVCORPSUETCGJXHYZZSFPIUIKKQJKMNWNMJMXZPSORSUYDMPTQIKTRYODOKDPPBJFCLNOPCZUIWOQOLDR");
    msg.description.assign("RXTFLACWFCBSJKPDHGLVYHATCEGTFXJUEZVSZAIGSCCKMZCVLWXDJFSBDRJULPAGIYIVOGJXZOLWQZXEJENYZHTGISDHORKHKNLARPORJWKUDIHYXVAWBUQRFTUMNNUMAHIFECDKVTUUUPENTBPQJEFZTXOOPN");
    msg.leader_speed = 0.83887189965;
    msg.leader_bank_lim = 0.0403872399972;
    msg.pos_sim_err_lim = 0.139180628939;
    msg.pos_sim_err_wrn = 0.813240050362;
    msg.pos_sim_err_timeout = 1573U;
    msg.converg_max = 0.0140646350723;
    msg.converg_timeout = 19284U;
    msg.comms_timeout = 25319U;
    msg.turb_lim = 0.197701273515;
    msg.custom.assign("WGDPXRQYHMGOPLPZMUZDERIAS");

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
    msg.setTimeStamp(0.277347481602);
    msg.setSource(55771U);
    msg.setSourceEntity(235U);
    msg.setDestination(19578U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("ATHZPNPOUUGULGPHOQMFKXNPGWDHHHGZDTQMBVAJCFRJFQKRCILTNZVSARYWOQBYUEFXNNELWZYMLICPNOWGAJGQCLKUXNFMHZVIHJBGDGZJKSFWDTAQCPMFHJRLRKOOAURFSVYYZXIWNAMOLKVUILSVSOBXCTYKI");
    msg.formation_name.assign("XBQIOONMKNLMIZQUENCOKOQFEXJQRKTFAKZNEBXKAMEEDFIYIJPYEEWGJHVROPYSGRCPBVUJYFADWISLCUXCPTMUMJOHRHWLQNSTTYGDJNSZQSLVQUDNKIZDRZLAVGLFXLSDIPIUWBHSXWWZOKGFATPGANBQ");
    msg.plan_id.assign("ABHXQOZRVKOQPKBBESIDWHAPBMNMDIDHYZVRMDLZXRWOSMJOHQHQHKQZTIADROFPLI");
    msg.description.assign("BMMJQZLVHXWPUZLEJAJKMPLEAFMBOPQRIEUVGQSQCFKVDTYKIETTRFSGSCLANABHGRGUYXMDCXVNGPNZKQWUPLDGNZLUZRODDVNWHXAZMIJFGOKGEQZWGDSQXGANBVOUBLIMWABEHOARCFYSIRUTYMQBUXRXQOLWDKIPIHICJZOYMXFJULYP");
    msg.leader_speed = 0.865648331996;
    msg.leader_bank_lim = 0.360669789871;
    msg.pos_sim_err_lim = 0.167438314521;
    msg.pos_sim_err_wrn = 0.281034236365;
    msg.pos_sim_err_timeout = 59104U;
    msg.converg_max = 0.577145038813;
    msg.converg_timeout = 58922U;
    msg.comms_timeout = 28383U;
    msg.turb_lim = 0.0796465522279;
    msg.custom.assign("OVROEDCYFFQKINVWKKOILHUOYEBFVWNTHRXUCSFMWGZZALKVHXFTAUCSMPLZRAMQYQEGFKVOUJWYLBLUGXJVVTIJAGXLFPPLWGIUNQXNRUKUSEDCIOYBJDWOJDHHEWCSHIHCAQRTJWZMIPJFJHP");

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
    msg.setTimeStamp(0.028752872932);
    msg.setSource(63401U);
    msg.setSourceEntity(59U);
    msg.setDestination(3233U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("NREINPXDCIEMUNAIWRHDHGZXQYVOUXGDPQFEOQYSYGBGNWTZRVNMVIZJJFRGBJLHIRKCAVVJEVUJLKMUUBTCTUSYKTTPWFSZESVZMLIJAXFCNSHXAPNWEDQFMOJRIDDBHZPBXYMLSWREZAFBUZECLOYMYAQKNKRSWWTKPGPZGQCKUALIISCVVHAKBIHWQGFSWGXXPHTYNTOWMUEABKDMOLOCOFAJBLNHYPCQ");
    msg.formation_name.assign("WYZSGSMLEEZUNHRBYCNGIGIPTGBRAVFDRGMMSWESZJDSYRPQQETAWVXKUTIZHVVRHNDEHOSFTJKHZACLVGNWMNGGVOEFZEKCMHXJCMQFIFDLXNJUSJLXCZZSUAQUACCLBOYEVHYMEPGOQALKBOHXIQOTEABLTRNXKRFPNOVYWUBDHJSDVTWAUKTNRQYWQPOOPLIULYINVFPYTKIJZJJIMFKXICQDXBFAAHYBGKUU");
    msg.plan_id.assign("DLBWXKUJDJAADETOCYFOWNCLHBPHXEPHEQFRFVRTSPQKPFKFHGEEDLXWZLIGOAHKYLTDLACMYZNNQZIJZAXUBVHWUUNJTFSMATRQHGGVJWMXKDZZMDGABRFOUTEKLPXHCVOGRSOKAQJQSCDQLOWRBACSNBMSRNICGYEJKPUROVSIEBHTBPGYMZWKIIDLVNRMJVCBWXTISCOVCPIMGQEBWYSUAZZNSJWNTFNIVYXUVUPMZYXXOYUHRJ");
    msg.description.assign("OKOKJGFZLNYXIRKOOXSKCFQJYIGUXVFGTDGEJQCFMAHXZBJORSMLWIJDTEBPHFHTNLBYKPAGYYUUCCZQLYIPHXDKEQMQLWIDUMAWTDJADNMILGYEPTTJWPQSVMHPTZCRXOGFTCHUNIAVSBHFBAETURAUKANPFLIQRWQ");
    msg.leader_speed = 0.444338684487;
    msg.leader_bank_lim = 0.00597827201052;
    msg.pos_sim_err_lim = 0.39686109524;
    msg.pos_sim_err_wrn = 0.649167001783;
    msg.pos_sim_err_timeout = 62264U;
    msg.converg_max = 0.231437109681;
    msg.converg_timeout = 38816U;
    msg.comms_timeout = 41655U;
    msg.turb_lim = 0.590847945424;
    msg.custom.assign("UMRFLXBJQKHGZYIZCNRZYAERJQEWFKSVKITDUREQUFBVXTBURMBZTFXCWCJACGHVWLMMOBGWOTYNGWHVREVCKZBSAKJTCZFDPLLMCKGODIPQXDEMYWGUFOPLGGXGLIQPXNOPHOKBEJXCKQUMHTYTVBLBXUYAMFIDSPPILIDNTZNCXHMJUSZNPHRELPHURVAQIDJRHOSVNYDVTNMSRDOFNXDZQWJ");

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
    msg.setTimeStamp(0.530596309471);
    msg.setSource(14161U);
    msg.setSourceEntity(216U);
    msg.setDestination(65128U);
    msg.setDestinationEntity(83U);
    msg.control_src = 7721U;
    msg.control_ent = 210U;
    msg.timeout = 0.956175582324;
    msg.loiter_radius = 0.225739675659;
    msg.altitude_interval = 0.431272618528;

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
    msg.setTimeStamp(0.991554325966);
    msg.setSource(28497U);
    msg.setSourceEntity(188U);
    msg.setDestination(29377U);
    msg.setDestinationEntity(112U);
    msg.control_src = 11447U;
    msg.control_ent = 230U;
    msg.timeout = 0.581504318436;
    msg.loiter_radius = 0.42992695197;
    msg.altitude_interval = 0.952495098828;

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
    msg.setTimeStamp(0.595102144313);
    msg.setSource(24668U);
    msg.setSourceEntity(170U);
    msg.setDestination(31161U);
    msg.setDestinationEntity(70U);
    msg.control_src = 3705U;
    msg.control_ent = 149U;
    msg.timeout = 0.354676358474;
    msg.loiter_radius = 0.863094059612;
    msg.altitude_interval = 0.0790905483162;

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
    msg.setTimeStamp(0.806015623104);
    msg.setSource(4500U);
    msg.setSourceEntity(182U);
    msg.setDestination(53461U);
    msg.setDestinationEntity(26U);
    msg.flags = 11U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0894495037417;
    tmp_msg_0.speed_units = 85U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.0894198217744;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.239387263047;
    msg.lon = 0.367380275821;
    msg.radius = 0.289642901406;

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
    msg.setTimeStamp(0.64195797122);
    msg.setSource(1530U);
    msg.setSourceEntity(204U);
    msg.setDestination(36970U);
    msg.setDestinationEntity(123U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.735304000243;
    tmp_msg_0.speed_units = 26U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.942386322893;
    tmp_msg_1.z_units = 221U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.465313630158;
    msg.lon = 0.245505152238;
    msg.radius = 0.217441595801;

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
    msg.setTimeStamp(0.503013475597);
    msg.setSource(47232U);
    msg.setSourceEntity(125U);
    msg.setDestination(19353U);
    msg.setDestinationEntity(5U);
    msg.flags = 73U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.814865114391;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.238991165548;
    tmp_msg_1.z_units = 77U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.83709374319;
    msg.lon = 0.827960581133;
    msg.radius = 0.482134377703;

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
    msg.setTimeStamp(0.502580169873);
    msg.setSource(44270U);
    msg.setSourceEntity(90U);
    msg.setDestination(54681U);
    msg.setDestinationEntity(181U);
    msg.control_src = 55830U;
    msg.control_ent = 175U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.632060526775;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.181496956097;
    tmp_tmp_msg_0_1.z_units = 81U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.482900849538;
    tmp_msg_0.lon = 0.392620726067;
    tmp_msg_0.radius = 0.504052564244;
    msg.reference.set(tmp_msg_0);
    msg.state = 206U;
    msg.proximity = 229U;

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
    msg.setTimeStamp(0.0104127078337);
    msg.setSource(2112U);
    msg.setSourceEntity(174U);
    msg.setDestination(4556U);
    msg.setDestinationEntity(197U);
    msg.control_src = 11200U;
    msg.control_ent = 236U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 40U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.963249409812;
    tmp_tmp_msg_0_0.speed_units = 130U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.704299750629;
    tmp_tmp_msg_0_1.z_units = 84U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.311951992054;
    tmp_msg_0.lon = 0.507289413567;
    tmp_msg_0.radius = 0.479209852896;
    msg.reference.set(tmp_msg_0);
    msg.state = 132U;
    msg.proximity = 97U;

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
    msg.setTimeStamp(0.636802909833);
    msg.setSource(37197U);
    msg.setSourceEntity(126U);
    msg.setDestination(56118U);
    msg.setDestinationEntity(171U);
    msg.control_src = 43613U;
    msg.control_ent = 170U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 107U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.883467841498;
    tmp_tmp_msg_0_0.speed_units = 138U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0366119068236;
    tmp_tmp_msg_0_1.z_units = 3U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.0964580431051;
    tmp_msg_0.lon = 0.0881724940766;
    tmp_msg_0.radius = 0.504437644158;
    msg.reference.set(tmp_msg_0);
    msg.state = 147U;
    msg.proximity = 165U;

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
    msg.setTimeStamp(0.371194178857);
    msg.setSource(35497U);
    msg.setSourceEntity(48U);
    msg.setDestination(23670U);
    msg.setDestinationEntity(147U);
    msg.ax_cmd = 0.852729993951;
    msg.ay_cmd = 0.633488437717;
    msg.az_cmd = 0.518335663643;
    msg.ax_des = 0.244687058232;
    msg.ay_des = 0.691280274778;
    msg.az_des = 0.52834448555;
    msg.virt_err_x = 0.47757646057;
    msg.virt_err_y = 0.640434993693;
    msg.virt_err_z = 0.230276537886;
    msg.surf_fdbk_x = 0.370198609493;
    msg.surf_fdbk_y = 0.628520445736;
    msg.surf_fdbk_z = 0.696029403349;
    msg.surf_unkn_x = 0.14112283261;
    msg.surf_unkn_y = 0.853232103798;
    msg.surf_unkn_z = 0.399066823135;
    msg.ss_x = 0.206850992862;
    msg.ss_y = 0.8560268391;
    msg.ss_z = 0.985235214766;

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
    msg.setTimeStamp(0.0856466388804);
    msg.setSource(62325U);
    msg.setSourceEntity(156U);
    msg.setDestination(43985U);
    msg.setDestinationEntity(236U);
    msg.ax_cmd = 0.422737630622;
    msg.ay_cmd = 0.690419631748;
    msg.az_cmd = 0.90286847282;
    msg.ax_des = 0.767112405898;
    msg.ay_des = 0.103395651164;
    msg.az_des = 0.696151411232;
    msg.virt_err_x = 0.766632801009;
    msg.virt_err_y = 0.900072053308;
    msg.virt_err_z = 0.607741969037;
    msg.surf_fdbk_x = 0.858197687008;
    msg.surf_fdbk_y = 0.635644170402;
    msg.surf_fdbk_z = 0.365577847944;
    msg.surf_unkn_x = 0.103759483022;
    msg.surf_unkn_y = 0.44307314;
    msg.surf_unkn_z = 0.628582135545;
    msg.ss_x = 0.558544553643;
    msg.ss_y = 0.882746218132;
    msg.ss_z = 0.039373091299;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OPRKVIBQJQYTOZSUQFZGUFPFQAAUEYTWSVVDSNHJKQNKSOQFHBIRLCKLMWWDENSBZOKAWAAZJEQZGMUCGPUAKCNTSYMPDOFRRNEJPOWBEELGOUUCIGOWKSNCXLSBZIXYDIPRHEHGUCPWVGVACTDNJZPBYTJGDHJBPLIMQEGIXEKDRG");
    tmp_msg_0.dist = 0.603603183639;
    tmp_msg_0.err = 0.106128772591;
    tmp_msg_0.ctrl_imp = 0.537167204936;
    tmp_msg_0.rel_dir_x = 0.534322281122;
    tmp_msg_0.rel_dir_y = 0.557474440617;
    tmp_msg_0.rel_dir_z = 0.585976201578;
    tmp_msg_0.err_x = 0.109318309385;
    tmp_msg_0.err_y = 0.465979921815;
    tmp_msg_0.err_z = 0.439416804064;
    tmp_msg_0.rf_err_x = 0.303206258928;
    tmp_msg_0.rf_err_y = 0.785210324506;
    tmp_msg_0.rf_err_z = 0.901562385153;
    tmp_msg_0.rf_err_vx = 0.483059782972;
    tmp_msg_0.rf_err_vy = 0.455359992911;
    tmp_msg_0.rf_err_vz = 0.201676924323;
    tmp_msg_0.ss_x = 0.997324335566;
    tmp_msg_0.ss_y = 0.568430112824;
    tmp_msg_0.ss_z = 0.984416746313;
    tmp_msg_0.virt_err_x = 0.0435862440776;
    tmp_msg_0.virt_err_y = 0.561149025514;
    tmp_msg_0.virt_err_z = 0.255072506181;
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
    msg.setTimeStamp(0.862444585184);
    msg.setSource(12304U);
    msg.setSourceEntity(26U);
    msg.setDestination(55119U);
    msg.setDestinationEntity(33U);
    msg.ax_cmd = 0.0538937679372;
    msg.ay_cmd = 0.982111490582;
    msg.az_cmd = 0.22133155787;
    msg.ax_des = 0.729648384852;
    msg.ay_des = 0.810598759927;
    msg.az_des = 0.805626649831;
    msg.virt_err_x = 0.0848939748299;
    msg.virt_err_y = 0.36561422988;
    msg.virt_err_z = 0.455925886734;
    msg.surf_fdbk_x = 0.727106342769;
    msg.surf_fdbk_y = 0.697435587346;
    msg.surf_fdbk_z = 0.634866373801;
    msg.surf_unkn_x = 0.583807039259;
    msg.surf_unkn_y = 0.560603107102;
    msg.surf_unkn_z = 0.268972226135;
    msg.ss_x = 0.16100568794;
    msg.ss_y = 0.663504725194;
    msg.ss_z = 0.875229760036;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("DDVGANHRIJFXHZOTMVMBIDWWHEPQQNUYBVCSEANVLIDNHKOHCOJRWLSUICRXOPIXVEJTPOYBIKGYBYMSBLFOBYUNQMZNGDXOFHRYKEDFHJCJBRTLURLSPRUYZWFQYLSXVXKEKETGZQBOFZCEZAENJVWJVVAPCTTOTKBZZRCQAUNEQIITFACLSWXMSVWPKGRDG");
    tmp_msg_0.dist = 0.571510216825;
    tmp_msg_0.err = 0.677454641133;
    tmp_msg_0.ctrl_imp = 0.875729302665;
    tmp_msg_0.rel_dir_x = 0.310062111877;
    tmp_msg_0.rel_dir_y = 0.797286806203;
    tmp_msg_0.rel_dir_z = 0.20913669901;
    tmp_msg_0.err_x = 0.51282077419;
    tmp_msg_0.err_y = 0.506751742536;
    tmp_msg_0.err_z = 0.726132736178;
    tmp_msg_0.rf_err_x = 0.388337248978;
    tmp_msg_0.rf_err_y = 0.172960007346;
    tmp_msg_0.rf_err_z = 0.680970089477;
    tmp_msg_0.rf_err_vx = 0.266058449508;
    tmp_msg_0.rf_err_vy = 0.292021899773;
    tmp_msg_0.rf_err_vz = 0.659852720373;
    tmp_msg_0.ss_x = 0.576071055195;
    tmp_msg_0.ss_y = 0.230972225038;
    tmp_msg_0.ss_z = 0.99404120319;
    tmp_msg_0.virt_err_x = 0.490633291504;
    tmp_msg_0.virt_err_y = 0.254830989563;
    tmp_msg_0.virt_err_z = 0.488704834587;
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
    msg.setTimeStamp(0.220015400083);
    msg.setSource(33096U);
    msg.setSourceEntity(129U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(185U);
    msg.s_id.assign("TYUJLBRPLFRPGUOCAZDZDEKFELPDSEFWMRSWGACLLRHSVIDECMBPHCPYXQJKBZKMTQZIJAAF");
    msg.dist = 0.761367047388;
    msg.err = 0.936649148919;
    msg.ctrl_imp = 0.155218664184;
    msg.rel_dir_x = 0.136648706741;
    msg.rel_dir_y = 0.103746637447;
    msg.rel_dir_z = 0.00751186393764;
    msg.err_x = 0.925889291844;
    msg.err_y = 0.458365316088;
    msg.err_z = 0.89704288766;
    msg.rf_err_x = 0.336540750966;
    msg.rf_err_y = 0.377372046202;
    msg.rf_err_z = 0.912539404542;
    msg.rf_err_vx = 0.469140556401;
    msg.rf_err_vy = 0.0440344211075;
    msg.rf_err_vz = 0.676174601932;
    msg.ss_x = 0.98783537747;
    msg.ss_y = 0.920722893161;
    msg.ss_z = 0.551498655207;
    msg.virt_err_x = 0.138588345626;
    msg.virt_err_y = 0.66612089638;
    msg.virt_err_z = 0.19929914737;

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
    msg.setTimeStamp(0.156067783348);
    msg.setSource(3452U);
    msg.setSourceEntity(20U);
    msg.setDestination(28154U);
    msg.setDestinationEntity(196U);
    msg.s_id.assign("FKPQQXRMNDPIVRQXKOLUYDYUXJPOFWBRPSTARMQJRAOOKBLIFGUOWYHIWGFYTUAXIKMGJSZNBYCNKMMWZOQMGBCUXAGBHURVXZFCMOJHOXFNTBZNVBSYRXIFWKNNNEZFDVEDTUQDGRPETDKAPV");
    msg.dist = 0.01930541345;
    msg.err = 0.353244405765;
    msg.ctrl_imp = 0.754662897195;
    msg.rel_dir_x = 0.24831646842;
    msg.rel_dir_y = 0.420448556057;
    msg.rel_dir_z = 0.443583109491;
    msg.err_x = 0.0993759664385;
    msg.err_y = 0.561279678834;
    msg.err_z = 0.658628415787;
    msg.rf_err_x = 0.671907914912;
    msg.rf_err_y = 0.629360626705;
    msg.rf_err_z = 0.784053847892;
    msg.rf_err_vx = 0.452698924358;
    msg.rf_err_vy = 0.520521595452;
    msg.rf_err_vz = 0.149430026049;
    msg.ss_x = 0.113860379463;
    msg.ss_y = 0.472955690224;
    msg.ss_z = 0.388377421113;
    msg.virt_err_x = 0.834775013217;
    msg.virt_err_y = 0.528887088327;
    msg.virt_err_z = 0.937622297959;

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
    msg.setTimeStamp(0.736057285767);
    msg.setSource(15167U);
    msg.setSourceEntity(158U);
    msg.setDestination(35126U);
    msg.setDestinationEntity(151U);
    msg.s_id.assign("AOQWZPHSGNILWQPTUAFBWQEAODFMQZSRZEPBBEEISKPJNQYEBIQGLIBSXOXDXDMGXJMNNMZXATNHUKRWJVYRDHBHLKCTYTZCB");
    msg.dist = 0.623787600058;
    msg.err = 0.977705779044;
    msg.ctrl_imp = 0.097682926671;
    msg.rel_dir_x = 0.975917720836;
    msg.rel_dir_y = 0.2589100724;
    msg.rel_dir_z = 0.677358397252;
    msg.err_x = 0.94707117471;
    msg.err_y = 0.726422715541;
    msg.err_z = 0.646369199716;
    msg.rf_err_x = 0.0363587636877;
    msg.rf_err_y = 0.961725552294;
    msg.rf_err_z = 0.616220674299;
    msg.rf_err_vx = 0.50879965705;
    msg.rf_err_vy = 0.795367444655;
    msg.rf_err_vz = 0.254978630536;
    msg.ss_x = 0.128713545579;
    msg.ss_y = 0.425911425654;
    msg.ss_z = 0.126209707878;
    msg.virt_err_x = 0.610495778846;
    msg.virt_err_y = 0.300966601591;
    msg.virt_err_z = 0.553457836222;

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
    msg.setTimeStamp(0.984938722244);
    msg.setSource(57224U);
    msg.setSourceEntity(38U);
    msg.setDestination(34362U);
    msg.setDestinationEntity(205U);
    msg.timeout = 2991U;
    msg.rpm = 0.492310841811;
    msg.direction = 149U;
    msg.custom.assign("AMPLGEUMQRVMDLRFZKSPBUEKVCTREGSDJBJFHCOR");

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
    msg.setTimeStamp(0.243474045887);
    msg.setSource(26170U);
    msg.setSourceEntity(193U);
    msg.setDestination(4439U);
    msg.setDestinationEntity(194U);
    msg.timeout = 62106U;
    msg.rpm = 0.920702216825;
    msg.direction = 204U;
    msg.custom.assign("JNOIYYDLLZIBHGHTRSAMGEMEEUWJTUGCQNKUNODBYSXIPJFKVOIQENAVAXGQAVALETUGPEYNWDRAFFLPOXNZYCMMCFSYBXMAPQOIAXWKVSBDCMHLCYLFEVZCQFISXVEWBAKVCIZEMHSINYXDCBJJGCHGBLRVCMWGRSHWOSRRFFTRKOJPRKUHRQWQMZHWFHODWKNSUMVTLTQZIL");

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
    msg.setTimeStamp(0.778392755357);
    msg.setSource(42476U);
    msg.setSourceEntity(51U);
    msg.setDestination(56451U);
    msg.setDestinationEntity(67U);
    msg.timeout = 29171U;
    msg.rpm = 0.618731391098;
    msg.direction = 253U;
    msg.custom.assign("AOMZBRBGQHRVGEWNEKFQGYYSINVLKPJPIWYYRGHFYFNOUVLIZZNMOLOZKBURHAKQOBDMZYWWMFTSNWJDUDBNONLQIMSTKXDDXHFTRUKMDTLJBEZMZVQTLZSWEVLPWHVFPSCCQICGFIDGECHSPAGEPSBZOSUITCPLXENUFVLMJFTXEMHGBOAVWQJDBCREXJJSJLAINHKAAJYRTGMFHRUIAPXRKPWCXUQVGXNDQYCZOEUQPROVAXC");

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
    msg.setTimeStamp(0.370418772473);
    msg.setSource(39717U);
    msg.setSourceEntity(113U);
    msg.setDestination(58838U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("SHKDTVMWTVEFUDMXWZSDVLTVRQUBXUEPMAAUQEJKCSPWPMVLZMPTNUJNHRVSDFHEBZUJWSNYIYAUKARGGGOKQQQNLNOGOQPSKXIHAZBCNVQBQGHZHMRADFDJCWITTSNYTCZFGSIEXUOPFXRRNCAYUARSDFAOIRNR");
    msg.type = 12U;
    msg.op = 111U;
    msg.group_name.assign("HEEHMFBFCBJZMWXBKHNYMMLUAGZEFJWRMDECEJXFKBZHIXDLUOOTNETMBQGVOAVCVKMSTIRPDQWJZSPFGKKGYDQNFAJAGITGBJHUSTLXANMIZOQMSEQKIOLMNEEDPLORXRUTJNUUAOJVCUVNIQGCJRCLFOLHWYYVCPUPPTLAERZKWCFYHWVYIWLDIWBAGCYAOFKZZYPHXGV");
    msg.plan_id.assign("BHPNKGQLHVSPBCGUOYMOZFCFICFKTBFLDIOAGGZAJNIYTFAWDDJCZCUUKQURHZTKEHEYXALPQONWKETAODFEWRGHSAPKRICYHDIFTDKUEDWVDDXFDJGMQVTTEXNBCCFULVXWBOBTTEWWRZNKHZSMIHENXLHXOOLFNGPRPEJCRLBWIVSJUJNPYBAVVSAOMJSQQYKLUMNZSVASRIIVRQIZGM");
    msg.description.assign("HTRKWPBBNNGVTKYYXNPQSAOSFZMLHLNBADXMETQOTDFUHFNGRBPYWPNQEDOJKBOUQPHHCYXLPCLXZYRWNTTHQXRDIOYTFYUVJRHHSDYVUCFGLVAUIFZRTCUSGLMEVAMKWBNDGOSIYWPSIJCVFAJMXXADZDBLEXCQGSNRAZTNLGQPEZUKZWOIZEXKGWWZIJSQKHMLFIYDJRCJJWBXAICHGMMBIQMMRKOSFEDVVVLEUKVQBSAOPPEFJCTU");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27117U;
    tmp_msg_0.off_x = 0.0981597819121;
    tmp_msg_0.off_y = 0.101469028331;
    tmp_msg_0.off_z = 0.0592245090199;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.0126585212503;
    msg.leader_speed_min = 0.520915707403;
    msg.leader_speed_max = 0.613012824809;
    msg.leader_alt_min = 0.978020644748;
    msg.leader_alt_max = 0.0223073974976;
    msg.pos_sim_err_lim = 0.719599344604;
    msg.pos_sim_err_wrn = 0.281905379076;
    msg.pos_sim_err_timeout = 8008U;
    msg.converg_max = 0.820931948185;
    msg.converg_timeout = 35085U;
    msg.comms_timeout = 25588U;
    msg.turb_lim = 0.739730622432;
    msg.custom.assign("UGQEKGWXSUROTDIRYSSWDIHOZCJGFLZKPRLVMJQTKOENCNXGPHCFPGZHRXCTOJHUOSXJDCEYOHNCCFWMHPVHIOUSAVOUXBXZYRGIUEBKRFPRDMCAQEMOFJVSKAGUBXSLMTTVPNXYFBQYJYDKMYFJLDFNICNMADUAKAMTBKEWGTFWBBXWYAKARVYOSPN");

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
    msg.setTimeStamp(0.386032476893);
    msg.setSource(40388U);
    msg.setSourceEntity(84U);
    msg.setDestination(6599U);
    msg.setDestinationEntity(88U);
    msg.formation_name.assign("VTCWNXNGYRAWRTICPIXORCBYIANLHFWGQZTQFMNRRYSACUMWRIUJWEGZTCUYDMRLNRLNXSHJOSGEJDXSKFHNKPUPGLCPHMEDHZXDLAQAYOCWJXPFCSDVWLYKXCWTUTKQDOEVNJTGWJXMZMQOFOIVPHZTLFQZHFYEVJHPISQLVDIROZMBBUOGJBJEKXVANBVQGKBQBARVTKEDBFZMT");
    msg.type = 160U;
    msg.op = 170U;
    msg.group_name.assign("VRWVJVTTBHGJGLGDLSLKKKLCJYPYOXZMOUXKRGTMMEABSSJZPKYCRMCFYGISPZOMCTHJDKTFVUGUADVBRHQDAYNTCBFRAGZBZ");
    msg.plan_id.assign("JRQXCMKVVJIOSJDRNSYMHBRXMNPVGXWKDXLOCGWVEAMBPLUZXLGQDKWUUJPMAFLEHQUIHSZWEJTWDFSQVZVSQZIFXHBWOOBCFGRHDCYUQMCXTATWKTOENULZCIBBOULQTYBHLYFVDCMNLRAVILLFXYPNGIFTVGJJTGYYZQPSRBAZFDTCSIIQNUNGKXPKSPEJPHIAEZAGRECVEHMAWDSMRTXTHKRNODYBJOAWDNCURBJYYZKONSIQUFMA");
    msg.description.assign("VVSHOAFMRZEVUFSGDDKQXQUGYNZZNIVLAHZTXADWLNPMVYLIAJGNLQCSHXBPVHYFSJYWEGTVOKWKIUMZPOFAAMMURUUPBXQJSTJOTEOGRHWPJJXNESDCZSHNWPIWRQSIGGQRKSOSDJCNVVLUQYQHKPJMJTBIXFTELYHFNYAIWGCDPF");
    msg.reference_frame = 43U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13320U;
    tmp_msg_0.off_x = 0.782561140726;
    tmp_msg_0.off_y = 0.966492117108;
    tmp_msg_0.off_z = 0.0373478344486;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.833667602886;
    msg.leader_speed_min = 0.0148459546919;
    msg.leader_speed_max = 0.978863617537;
    msg.leader_alt_min = 0.500449107198;
    msg.leader_alt_max = 0.889306118967;
    msg.pos_sim_err_lim = 0.103045650175;
    msg.pos_sim_err_wrn = 0.763995576502;
    msg.pos_sim_err_timeout = 48202U;
    msg.converg_max = 0.895186103865;
    msg.converg_timeout = 46339U;
    msg.comms_timeout = 31886U;
    msg.turb_lim = 0.519863934059;
    msg.custom.assign("GSAPFSNECKPXYMKAZCONQKNZPVEXYDITXLQXHRVJUOQPKMCZYKARVHTMCFVQWAYPLORCPJHLZLOATDTQWNWRHBXSRQNCCIJHYITGYYKMUJJWG");

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
    msg.setTimeStamp(0.359205383361);
    msg.setSource(32702U);
    msg.setSourceEntity(146U);
    msg.setDestination(22368U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("CYXPJPPSBAGUPHMYILHPDTCQNZUQAOAKEIMJXCEATBGDXLORDTKWFZMRFINBMGODTNDKSUOHDFMFZWTMGTHJYALPUKBEPNQCSHZZRVKMRZFWFHLSWLQYOPFEDDWGSABYFVNAZQPLWNQOVRKUHBMEMXFVGBGNQBXRCESXJEYHJJDILQBVEKS");
    msg.type = 126U;
    msg.op = 193U;
    msg.group_name.assign("HHLNVDOPPUEQGESLOVCAVKJCTDAKTXOLTEAYMVEJCWEZDHRFVOKGQXRFKHPGRJQXXCBFWDPJOUEIOMQYTIQPNJWNYAQLHWSBAMTJLWBOZKLFIKSRIQRMUZF");
    msg.plan_id.assign("NVRMFUSPEBZTVDXKDLHIOEMAATNNHHCZCBCVKCWUAGKLPUQAESBBFJE");
    msg.description.assign("PFTVDBTSMKJYPMROFIOVINAAARKWQLWTXILBHEWLQXGFNPXJIHTBAEAJSODEVWDZPONYVVGDJQYYMQJQNDLSUKXUBSKMQTRFYOYYEKUNPFOCRVCNUGMXWDMGJZLTVONSBUCUNIDPIEXERQVWKJPCKWEDZLEHIMZGEFGTNXVRZLBIZARCWDZAP");
    msg.reference_frame = 34U;
    msg.leader_bank_lim = 0.839585502608;
    msg.leader_speed_min = 0.888473806278;
    msg.leader_speed_max = 0.633604247596;
    msg.leader_alt_min = 0.389226377669;
    msg.leader_alt_max = 0.0802971864663;
    msg.pos_sim_err_lim = 0.480485485879;
    msg.pos_sim_err_wrn = 0.416839077522;
    msg.pos_sim_err_timeout = 16704U;
    msg.converg_max = 0.670710735306;
    msg.converg_timeout = 41423U;
    msg.comms_timeout = 46545U;
    msg.turb_lim = 0.0596650552749;
    msg.custom.assign("CLAYYELAMWBMEYRJOSJMJLSJPDQKNFLVEEPULYKTVCRBNIZBUWZHKFHAJTNXBCXSKFXHRPXZHRWREVUAWONYQOVRSNGONAXQ");

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
    msg.setTimeStamp(0.396135907712);
    msg.setSource(40867U);
    msg.setSourceEntity(20U);
    msg.setDestination(33996U);
    msg.setDestinationEntity(119U);
    msg.timeout = 53309U;
    msg.lat = 0.015784119041;
    msg.lon = 0.410587604368;
    msg.z = 0.943165642847;
    msg.z_units = 9U;
    msg.speed = 0.340932222236;
    msg.speed_units = 250U;
    msg.custom.assign("DHFAFBXISCBGCY");

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
    msg.setTimeStamp(0.97172145912);
    msg.setSource(5038U);
    msg.setSourceEntity(213U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(237U);
    msg.timeout = 19598U;
    msg.lat = 0.504837574395;
    msg.lon = 0.201687054399;
    msg.z = 0.496259157619;
    msg.z_units = 173U;
    msg.speed = 0.507897831479;
    msg.speed_units = 125U;
    msg.custom.assign("SJCMFJYZYYTWIQLULHBOGQMTKDFZH");

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
    msg.setTimeStamp(0.785791063596);
    msg.setSource(22051U);
    msg.setSourceEntity(26U);
    msg.setDestination(37599U);
    msg.setDestinationEntity(191U);
    msg.timeout = 17013U;
    msg.lat = 0.335036531478;
    msg.lon = 0.341877238514;
    msg.z = 0.213532466702;
    msg.z_units = 140U;
    msg.speed = 0.484619361173;
    msg.speed_units = 244U;
    msg.custom.assign("DLQXVSROOISBQRJHWUBCLWHKICIFLTNORIXJMTREOJSENXOPPKTRFFWM");

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
    msg.setTimeStamp(0.536811790895);
    msg.setSource(53186U);
    msg.setSourceEntity(245U);
    msg.setDestination(53315U);
    msg.setDestinationEntity(172U);
    msg.timeout = 16127U;
    msg.lat = 0.22943743144;
    msg.lon = 0.269619948665;
    msg.z = 0.0478104526735;
    msg.z_units = 8U;
    msg.speed = 0.301807512761;
    msg.speed_units = 16U;
    msg.custom.assign("VXPVXLQYNYZTVUNUVOYKSWHYUKPONJF");

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
    msg.setTimeStamp(0.307180198723);
    msg.setSource(11893U);
    msg.setSourceEntity(167U);
    msg.setDestination(62884U);
    msg.setDestinationEntity(51U);
    msg.timeout = 1147U;
    msg.lat = 0.169540513431;
    msg.lon = 0.0738569664368;
    msg.z = 0.443575225843;
    msg.z_units = 242U;
    msg.speed = 0.631443041644;
    msg.speed_units = 210U;
    msg.custom.assign("FKUQTVNCULDYRYCLDSGSENDYEFIQMNINJWFITYOZRBZIPEPJJNAMXSBLQPLRSBGCVDPGYXRMNMUXDTUPSGBVXDAVAMHSESJGEKWIIWENTCDHAKVRTPFBHFDDXUDAHBTKFCHFGOLLIWRGIQFJUQXGNPHAUKUOMBYOWUZXTKHOQCE");

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
    msg.setTimeStamp(0.538996370605);
    msg.setSource(55713U);
    msg.setSourceEntity(135U);
    msg.setDestination(18281U);
    msg.setDestinationEntity(214U);
    msg.timeout = 18427U;
    msg.lat = 0.368572639994;
    msg.lon = 0.522923203528;
    msg.z = 0.558891969385;
    msg.z_units = 99U;
    msg.speed = 0.167504872949;
    msg.speed_units = 161U;
    msg.custom.assign("OUYOHVSPDIXSNBAFIVEKQRKWHDMIFBAJQKQZUJPJMIFRQCMCZFCNUELIVCAWSEFDZPEHSBAQWXVOXSNNOLGHVBKNFVTXOJOQYDFJLWWXHLMSRQDYTBYPRTWAAISGOVEVQQVBRUGEJJCANXAGYNTHBZMZTDKRGPDYRWPGMHBUPHJCZESBCGUJYPDMGBMINOTNECKSMXDCLERWLTAIAUXCZYPUHZZTLIKTGKLUOZLHLSIKUXPEFMYFOT");

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
    msg.setTimeStamp(0.159141937349);
    msg.setSource(37647U);
    msg.setSourceEntity(12U);
    msg.setDestination(40872U);
    msg.setDestinationEntity(166U);
    msg.arrival_time = 0.838269799377;
    msg.lat = 0.0177127350156;
    msg.lon = 0.997968962791;
    msg.z = 0.616605055725;
    msg.z_units = 174U;
    msg.travel_z = 0.587039277508;
    msg.travel_z_units = 93U;
    msg.delayed = 121U;

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
    msg.setTimeStamp(0.645177607278);
    msg.setSource(56180U);
    msg.setSourceEntity(61U);
    msg.setDestination(15583U);
    msg.setDestinationEntity(242U);
    msg.arrival_time = 0.29426082815;
    msg.lat = 0.733996298558;
    msg.lon = 0.168374232819;
    msg.z = 0.852692350698;
    msg.z_units = 152U;
    msg.travel_z = 0.23218708633;
    msg.travel_z_units = 252U;
    msg.delayed = 141U;

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
    msg.setTimeStamp(0.418392520892);
    msg.setSource(7260U);
    msg.setSourceEntity(175U);
    msg.setDestination(51496U);
    msg.setDestinationEntity(153U);
    msg.arrival_time = 0.95704877624;
    msg.lat = 0.870867629037;
    msg.lon = 0.0233728405974;
    msg.z = 0.424592878987;
    msg.z_units = 64U;
    msg.travel_z = 0.101563333115;
    msg.travel_z_units = 119U;
    msg.delayed = 209U;

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
    msg.setTimeStamp(0.544963923325);
    msg.setSource(21540U);
    msg.setSourceEntity(177U);
    msg.setDestination(41849U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.166153061343;
    msg.lon = 0.287644150075;
    msg.z = 0.598304752725;
    msg.z_units = 219U;
    msg.speed = 0.0701976410254;
    msg.speed_units = 124U;
    msg.bearing = 0.995222485849;
    msg.cross_angle = 0.184078841576;
    msg.width = 0.530537596281;
    msg.length = 0.985874715862;
    msg.coff = 19U;
    msg.angaperture = 0.507083578372;
    msg.range = 24844U;
    msg.overlap = 121U;
    msg.flags = 15U;
    msg.custom.assign("FRVNCOLEEUCXLWPQUDAJXTUROFTOPVQDKLGMPWLQGXYANMWPCWAWTQTRMRQAZGRVL");

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
    msg.setTimeStamp(0.0277745298354);
    msg.setSource(6711U);
    msg.setSourceEntity(91U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.183159227169;
    msg.lon = 0.610330985046;
    msg.z = 0.326388983138;
    msg.z_units = 195U;
    msg.speed = 0.631923253085;
    msg.speed_units = 39U;
    msg.bearing = 0.463777953114;
    msg.cross_angle = 0.576474532306;
    msg.width = 0.072448725108;
    msg.length = 0.532601470288;
    msg.coff = 143U;
    msg.angaperture = 0.256746072598;
    msg.range = 50969U;
    msg.overlap = 239U;
    msg.flags = 186U;
    msg.custom.assign("DGRUJYXVYDUPCZBRORBMHZZAQAUBAJESCETWNPGKBRIFGKAQKCZUIZDHQSBMTQDZRZTVOPFPMJVIGLKKOCRNNZZLXHXZUWSRCYRP");

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
    msg.setTimeStamp(0.573811682867);
    msg.setSource(11216U);
    msg.setSourceEntity(199U);
    msg.setDestination(772U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.134634917972;
    msg.lon = 0.0646020513234;
    msg.z = 0.0242796828475;
    msg.z_units = 92U;
    msg.speed = 0.673334534792;
    msg.speed_units = 217U;
    msg.bearing = 0.894586640969;
    msg.cross_angle = 0.740487461015;
    msg.width = 0.188231285016;
    msg.length = 0.801627155635;
    msg.coff = 87U;
    msg.angaperture = 0.487071021149;
    msg.range = 16695U;
    msg.overlap = 137U;
    msg.flags = 43U;
    msg.custom.assign("OHGULLLVTTXBQPFYMJEUZKTSKQLNDTSWSMVUBICQQAUMTZVWXCKSUZWUKZOYGOESIYLODFGYVKBAHCDHBAUJSJSKMMSGXWFGRJMIFRNPHVQDEAGFOFXBUGCWZELIN");

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
    msg.setTimeStamp(0.0452621042102);
    msg.setSource(17247U);
    msg.setSourceEntity(189U);
    msg.setDestination(5134U);
    msg.setDestinationEntity(167U);
    msg.timeout = 10246U;
    msg.lat = 0.426557212298;
    msg.lon = 0.0394237805915;
    msg.z = 0.952999299367;
    msg.z_units = 249U;
    msg.speed = 0.183245486247;
    msg.speed_units = 144U;
    msg.syringe0 = 206U;
    msg.syringe1 = 58U;
    msg.syringe2 = 244U;
    msg.custom.assign("SLNGXKUFJEWOTJDFRIVHVHUQPHLMMBQTCNQIDOYVEULSWGRNIJPCFPAZWM");

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
    msg.setTimeStamp(0.69247052009);
    msg.setSource(24643U);
    msg.setSourceEntity(90U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(143U);
    msg.timeout = 38279U;
    msg.lat = 0.00834567951647;
    msg.lon = 0.681513812368;
    msg.z = 0.964681111846;
    msg.z_units = 220U;
    msg.speed = 0.861445559688;
    msg.speed_units = 38U;
    msg.syringe0 = 44U;
    msg.syringe1 = 28U;
    msg.syringe2 = 228U;
    msg.custom.assign("TUMASCZOSLESMAHJZFQRXVABCYWMOFQNDGRIOFAGPUWKRDBUDQJSSQAOKZXXTKHUYKXMLWHOYAHGEMIWOJXSPCYXYPSZTQXURTLGWAVMKAFDIUUBIAZG");

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
    msg.setTimeStamp(0.342814165546);
    msg.setSource(44249U);
    msg.setSourceEntity(58U);
    msg.setDestination(58496U);
    msg.setDestinationEntity(216U);
    msg.timeout = 17494U;
    msg.lat = 0.492554306715;
    msg.lon = 0.107032724688;
    msg.z = 0.15129453556;
    msg.z_units = 168U;
    msg.speed = 0.138278099486;
    msg.speed_units = 143U;
    msg.syringe0 = 223U;
    msg.syringe1 = 231U;
    msg.syringe2 = 56U;
    msg.custom.assign("KYNORUIEPOXLZBLDVXZQXFEYUAKTDPEKNGBGCMYDMIGJBSNCLHDMLUIHXAZQEBIMBQODZWSUZVZRWAUTFKSCUNHDOKWYEQJXTXIPXFNVYNCNVFCRVWFWDQFFRMUJLBJYOIRJAMQJNSGMCGAPAXWYKBGVJQIXWPZLMHDSTCWTITPTUAKFADJXMZWBDVTVRTLIQGQZ");

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
    msg.setTimeStamp(0.962346862392);
    msg.setSource(38447U);
    msg.setSourceEntity(98U);
    msg.setDestination(10798U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.0176362189146);
    msg.setSource(13765U);
    msg.setSourceEntity(238U);
    msg.setDestination(27560U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.818410542197);
    msg.setSource(2873U);
    msg.setSourceEntity(163U);
    msg.setDestination(49245U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.259155294964);
    msg.setSource(35599U);
    msg.setSourceEntity(74U);
    msg.setDestination(28758U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.0594754149467;
    msg.lon = 0.957619238366;
    msg.z = 0.451169793545;
    msg.z_units = 131U;
    msg.speed = 0.669229405195;
    msg.speed_units = 32U;
    msg.takeoff_pitch = 0.533914415746;
    msg.custom.assign("OCJBXOJJWHDUHMHZNPAEN");

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
    msg.setTimeStamp(0.57132808095);
    msg.setSource(31039U);
    msg.setSourceEntity(34U);
    msg.setDestination(35815U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.949147307755;
    msg.lon = 0.697009974436;
    msg.z = 0.550958926223;
    msg.z_units = 56U;
    msg.speed = 0.810388654418;
    msg.speed_units = 220U;
    msg.takeoff_pitch = 0.680794540207;
    msg.custom.assign("MGMHAOYDJXONLCAQBQDARGWJETSBLPESKIYWJGLASUIBBOTIKQWVPEALGKFGQMR");

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
    msg.setTimeStamp(0.613026152337);
    msg.setSource(27482U);
    msg.setSourceEntity(78U);
    msg.setDestination(5219U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.664424692357;
    msg.lon = 0.730046168881;
    msg.z = 0.443281261541;
    msg.z_units = 218U;
    msg.speed = 0.835020775347;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.0865598229367;
    msg.custom.assign("JOIHFDTHVUOGJVEOTFDEGXCRRDVTURPXPNEMYOMIDRLFRRCZKAQDXLIOSPBTAZEDEHQSCWGOBJNIAWJKGBGNVCVIUHWBWYLKQFQTDCOSWSGJFKMNTF");

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
    msg.setTimeStamp(0.264138606875);
    msg.setSource(2649U);
    msg.setSourceEntity(83U);
    msg.setDestination(13363U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.0389737327622;
    msg.lon = 0.414850155259;
    msg.z = 0.705396003287;
    msg.z_units = 241U;
    msg.speed = 0.807143519598;
    msg.speed_units = 197U;
    msg.abort_z = 0.435063610185;
    msg.bearing = 0.500833502198;
    msg.glide_slope = 201U;
    msg.glide_slope_alt = 0.825183146133;
    msg.custom.assign("ITRGCKRZHJXKMPUHUDVBXLAKVLJVVIEHKPTNZHUKGQJEDVBQUMPADEYXO");

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
    msg.setTimeStamp(0.0389317029024);
    msg.setSource(31685U);
    msg.setSourceEntity(60U);
    msg.setDestination(21177U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.319343463872;
    msg.lon = 0.406665952362;
    msg.z = 0.112938371998;
    msg.z_units = 116U;
    msg.speed = 0.0857497150723;
    msg.speed_units = 23U;
    msg.abort_z = 0.849310086985;
    msg.bearing = 0.351903157164;
    msg.glide_slope = 113U;
    msg.glide_slope_alt = 0.420051971185;
    msg.custom.assign("NEIWTPHSOSPJNVUDAIRKNSYGNPKAMIXNRALWMHIASLMGGAEJJTWBSUEVDMKZPNTFKUKHGJZAGFUHMVIERWQQRHNNOEYQTCCBZZSWZMEBCIQDXAOMZTYDVRWSLULLOCNHSDEOYUACO");

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
    msg.setTimeStamp(0.891413354975);
    msg.setSource(5584U);
    msg.setSourceEntity(186U);
    msg.setDestination(13847U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.0713967255528;
    msg.lon = 0.633505515469;
    msg.z = 0.86245747099;
    msg.z_units = 240U;
    msg.speed = 0.177992888701;
    msg.speed_units = 174U;
    msg.abort_z = 0.0619373142869;
    msg.bearing = 0.475061098801;
    msg.glide_slope = 155U;
    msg.glide_slope_alt = 0.630830385598;
    msg.custom.assign("QXQVTNIOBKVMDUHXHKWKCSKFADSMZCBCUXOESCVPKNIGGSLAERIYXGQVFJBYGIUMAMVCTRHWWYVDOVQOL");

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
    msg.setTimeStamp(0.0823520672235);
    msg.setSource(4306U);
    msg.setSourceEntity(178U);
    msg.setDestination(39718U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.494831681949;
    msg.lon = 0.458565757313;
    msg.speed = 0.230229847134;
    msg.speed_units = 21U;
    msg.limits = 173U;
    msg.max_depth = 0.106542837095;
    msg.min_alt = 0.548213330366;
    msg.time_limit = 0.171232948823;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.941556873117;
    tmp_msg_0.lon = 0.0221231243614;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DZYXQVCTFCADQZOXZDLCCMWSZBEVOLWAWBOOHLRRFZQNPNCXGTPIQAAPIVNSBWYRSRVGUZRJDFBMLNTVQTIEHDBWYCKDUJNURXJKOTMJOKYGIUWNIGUBBQIPHHLKVLPULERHYPEWTDPBEJUZRQYKLYMYVTSZZIRFWPGIHBNDIOMQCJEXQAFMPHWEBGF");
    msg.custom.assign("CNFYSTKORN");

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
    msg.setTimeStamp(0.275087344753);
    msg.setSource(48284U);
    msg.setSourceEntity(34U);
    msg.setDestination(39802U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.274587194249;
    msg.lon = 0.30143843826;
    msg.speed = 0.560532342757;
    msg.speed_units = 124U;
    msg.limits = 67U;
    msg.max_depth = 0.171042693753;
    msg.min_alt = 0.58943142521;
    msg.time_limit = 0.335019160218;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.763487620258;
    tmp_msg_0.lon = 0.736591135063;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NKCXZHVJDMGXVMPIEWWKYVPFSUAPWG");
    msg.custom.assign("MCWTNULYEADKCOOMGWIWYWKRFDFOVJMGJTJTUZQVRLXQJDSHFLPSSNHPUDPFATRWPOIVTCXSHVDBNHROXTYCVZRDLAKJRONZTXHLDHNOBJJDRGWYQWBZJFCQMYRHHYAMEKAZMXZENTLEBHRXKE");

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
    msg.setTimeStamp(0.132679921671);
    msg.setSource(56504U);
    msg.setSourceEntity(71U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(243U);
    msg.lat = 0.360805793997;
    msg.lon = 0.581373660832;
    msg.speed = 0.171188970654;
    msg.speed_units = 185U;
    msg.limits = 12U;
    msg.max_depth = 0.823305807302;
    msg.min_alt = 0.733097722729;
    msg.time_limit = 0.575775834037;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.855877142528;
    tmp_msg_0.lon = 0.300601011741;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("ULIXPWKAEKUFOGGUTHDWNYZZXOQXDOKCRTCBEJLEQWHDAERMWDCWNPVZNCUACLIKCTPOLTSILEUEWEYGPV");
    msg.custom.assign("NPATZMTIXVYWYYREOAXNLFDNXVHOXJAGETYIDZJLIZFPSVTQUUTGGITHCECPFBGNIDBNFRDNABKYNQXVRDZMIU");

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
    msg.setTimeStamp(0.583214262742);
    msg.setSource(43719U);
    msg.setSourceEntity(187U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(164U);
    msg.target.assign("JGBDBAWYELEPCVJHLMGJYNEZAYKMFDAWWRAMHFTUVRODDTJIQPJYKQPTRWFITQSUIOSZUCGQDQIVSOVKNPNFZUKZHIKYNHNJRFKNCTQLNUCETDXXQVLZCLCXKOZVJVOWYFCHIGAAGEFMBAAIPRLSCJORXFPHUZYAPXGAFBN");
    msg.max_speed = 0.0511324050897;
    msg.speed_units = 254U;
    msg.lat = 0.0589560031109;
    msg.lon = 0.141559987033;
    msg.z = 0.37069641546;
    msg.z_units = 101U;
    msg.custom.assign("SDRTWEFHFOACV");

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
    msg.setTimeStamp(0.266303228195);
    msg.setSource(61255U);
    msg.setSourceEntity(66U);
    msg.setDestination(55601U);
    msg.setDestinationEntity(192U);
    msg.target.assign("KSLFZYGJHOHVLHVVTWELKPRMQYOCZTOJRQGMQVATKSUTLWPRQSSFEDLHFENIDBSPRCUZHXNPBHZDPDUGXBTEESHXIAHKWXFEFPGXMNORLLZGCBBHEYASUIKUCGAVTYIYMCZCPGXDKVQIDMIYLQYJNLBVNWQNFPYIRUEAWMARSBVKVQZXSTJWQUBWDJFKPJICFPWMDXWEAZBJIZDTCOGCO");
    msg.max_speed = 0.956369514289;
    msg.speed_units = 181U;
    msg.lat = 0.669530309879;
    msg.lon = 0.824653223866;
    msg.z = 0.95981214947;
    msg.z_units = 140U;
    msg.custom.assign("IIUDUEEHZNJIZYGNKUYYFJDFSSSBLZRTHFPYMAEUTWVQSRVPLAOPC");

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
    msg.setTimeStamp(0.945214425737);
    msg.setSource(24045U);
    msg.setSourceEntity(144U);
    msg.setDestination(28261U);
    msg.setDestinationEntity(123U);
    msg.target.assign("RXHBUTACMKCZLHSMMMFKXNVDXWINCWUQBQGCZJOQTZGFJMWEUGRDGLVBABEOUUPUFOEMHLBHZQGENYRKPWNISMDFESFFHAVHYTGVPOQPYJXBMRXPQBRUJGRQYIWKCYNYNAJAKETYHUJXNVLYAIEPXKSVKBLSIDHPAAIRNCTTMOSYXUIRVDKDFZTLPWVTNPCDILWTQ");
    msg.max_speed = 0.27467370407;
    msg.speed_units = 234U;
    msg.lat = 0.696098192458;
    msg.lon = 0.332921608516;
    msg.z = 0.978793325758;
    msg.z_units = 193U;
    msg.custom.assign("KPIJZAZKQE");

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
    IMC::Docking msg;
    msg.setTimeStamp(0.148493835737);
    msg.setSource(50715U);
    msg.setSourceEntity(38U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(202U);
    msg.target.assign("HLBIBTXURYDLVDWGAIPCVKDKOKNUGZSUWLFQJAQDWJSZFUHBLXVGQEWZQQFWJCJNXAMYORJ");
    msg.speed = 0.280833722369;
    msg.speed_units = 54U;
    msg.lat = 0.303394845003;
    msg.lon = 0.305500674939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.961706595964);
    msg.setSource(46252U);
    msg.setSourceEntity(144U);
    msg.setDestination(3907U);
    msg.setDestinationEntity(87U);
    msg.target.assign("DGNUFTYKCZXJRYNGUQDMAJVZQAPC");
    msg.speed = 0.871722148354;
    msg.speed_units = 229U;
    msg.lat = 0.394653888425;
    msg.lon = 0.440313446148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Docking msg;
    msg.setTimeStamp(0.0917102506039);
    msg.setSource(44280U);
    msg.setSourceEntity(56U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(72U);
    msg.target.assign("BLTPRHVAUQQCPJTJNA");
    msg.speed = 0.339976517477;
    msg.speed_units = 120U;
    msg.lat = 0.767473291181;
    msg.lon = 0.189678762746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Docking #2", msg == *msg_d);
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
    msg.setTimeStamp(0.867721158446);
    msg.setSource(33771U);
    msg.setSourceEntity(65U);
    msg.setDestination(56740U);
    msg.setDestinationEntity(124U);
    msg.op_mode = 104U;
    msg.error_count = 15U;
    msg.error_ents.assign("LTRPSFTXIWQWOIHMPAOJCHHUUVRQHLGGJT");
    msg.maneuver_type = 13349U;
    msg.maneuver_stime = 0.387965111259;
    msg.maneuver_eta = 38684U;
    msg.control_loops = 159187636U;
    msg.flags = 64U;
    msg.last_error.assign("TEQVWNCUARTCMJEWYPUDNNKFZMOMFHJDFYYPMSVGRROKHGCTOJALPJRZVGMLTHPDGVNWEPTQPLBQSMEDTIAIVIGJHDWKTSTDBXCS");
    msg.last_error_time = 0.603563447811;

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
    msg.setTimeStamp(0.438410604281);
    msg.setSource(24570U);
    msg.setSourceEntity(76U);
    msg.setDestination(12493U);
    msg.setDestinationEntity(7U);
    msg.op_mode = 53U;
    msg.error_count = 90U;
    msg.error_ents.assign("BJRKENWLQLNTHSWOJVUTKBMWOIOZLJFCIJXUDUQFAPANLLPHEPBBCWUPNULZKVOSOKIEXWRGFUFDJLSPINMCMIIKPVAKGYMHLOFRYSRSMXIMO");
    msg.maneuver_type = 13775U;
    msg.maneuver_stime = 0.114413885257;
    msg.maneuver_eta = 47644U;
    msg.control_loops = 2734157912U;
    msg.flags = 51U;
    msg.last_error.assign("OFNVKEUIJHWOZXNEQNDLEHXPILMHHVSESCBGKWMPVYTQIDUCABFYICIOEBRDCACGFUVDUHYAFZGZRBNUYWDQRPYHRJJCROLKSSQTEJKNIRQEYTFSTMMGYSPZAKBXOOOXVDSCKMV");
    msg.last_error_time = 0.379302697372;

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
    msg.setTimeStamp(0.306340545911);
    msg.setSource(63634U);
    msg.setSourceEntity(108U);
    msg.setDestination(44702U);
    msg.setDestinationEntity(63U);
    msg.op_mode = 114U;
    msg.error_count = 121U;
    msg.error_ents.assign("PZFRBGADHTLPFJEMOCZIKXHLPALWQYCUZULJOTVBDTLLEOMSFJASHGIVQNVKPNSKGCHMTJIAPKFXQYYZAELCXACIZUWDCIBEOGUHDRFZJNBNAQFMSDGRAVVJLSDRPPOJQGDIQQPLJNPXBNTFUZCWMOBYGRYLHEXMMFCWNWMHRDFYVTYQSDVEERMXKICICBRSSHTWEKXKUSAXPOYOVXQKDKKHWZBJIZIRVNUSWHMBTBGTOVZUEYWRXTGGOFUU");
    msg.maneuver_type = 41888U;
    msg.maneuver_stime = 0.413650477697;
    msg.maneuver_eta = 24647U;
    msg.control_loops = 2560180160U;
    msg.flags = 82U;
    msg.last_error.assign("IBCKUJNFLJYXHRYPNDIVKLECHUBRLDSUYLGANDDJARYNXAREQAPDHHWCFCTNDYYYHKGGOFPSZSKMTLMJIIVCFRQRPBBZZERHCTHKDAQKEPLQKNZMGELVEMZJDIJWHOWUVPX");
    msg.last_error_time = 0.882828256756;

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
    msg.setTimeStamp(0.0843617255899);
    msg.setSource(11084U);
    msg.setSourceEntity(41U);
    msg.setDestination(8075U);
    msg.setDestinationEntity(135U);
    msg.type = 136U;
    msg.request_id = 7957U;
    msg.command = 76U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.90683953271;
    tmp_msg_0.lon = 0.742650160331;
    tmp_msg_0.z = 0.0752381929034;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.28359662938;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.abort_z = 0.452624942709;
    tmp_msg_0.bearing = 0.342321525862;
    tmp_msg_0.glide_slope = 187U;
    tmp_msg_0.glide_slope_alt = 0.787665758758;
    tmp_msg_0.custom.assign("WINHKCSAMZJKOTTESCZOTRWIOPQHVFWOURBSUGFYRTUXQCIOSWAOLBYJYKMRGNJQMTYZVZMXLNSZGSBNDFVKZMJTVMGDIPVHBFECUHSENSAWFEBTZDGYFDBQMB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57094U;
    msg.info.assign("LCEHIAOUGORCPKLBZLWKXJJWKMBXYRVYLYXZUCOXTNLGERRWAWBIXNGHOXYVQVXENBQSBHNHPQUEJHPFDMPYTXLGOFVNUNMAMYTWSTYMTDMFGICFZWJFBSKQAJRXSNAOLNJPRYMQGXQYWLEVMEURFNKZIADKQTKWBDTIMCHUGDATOTEUKBTNDBPAGHIPHHSSOSIFEVIQMVFDP");

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
    msg.setTimeStamp(0.857588859369);
    msg.setSource(38385U);
    msg.setSourceEntity(68U);
    msg.setDestination(48284U);
    msg.setDestinationEntity(215U);
    msg.type = 200U;
    msg.request_id = 18341U;
    msg.command = 189U;
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 50036U;
    tmp_msg_0.lat = 0.86335801682;
    tmp_msg_0.lon = 0.130793180491;
    tmp_msg_0.z = 0.270706584268;
    tmp_msg_0.z_units = 246U;
    tmp_msg_0.speed = 0.302713620943;
    tmp_msg_0.speed_units = 51U;
    tmp_msg_0.custom.assign("TZHZXSFTDFEYHTNBEJGIIYIWKWDPNANWOWFIOSDBMSEZEKQKFSZZQRYZAAGVHJJJNUVTMWPGBVNISYHLGXXPLZHLUMJTJMJJQPYRLYMXBWKQNYKLFYUKEAQCZRUQRVNPVPSWSX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4757U;
    msg.info.assign("GNYAGHVHBMINHOZBXGDTWYYMOQYOKWJETCKUTHVVSKGIDVOIVUBPEXJODFJZCGUOCABVPAYJFCSPSXSVKAOQMNSRESYDUGNGIXKMMLDBHWPGBRHJQRZWRLRMFYUXBBAWTFLCPTPKZMZLQCENQEUUMHJSPELVCUAXLWTFDQLYNKDPSCZRZSLINZVHREWJNTJAGFDIEXW");

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
    msg.setTimeStamp(0.695836637062);
    msg.setSource(18383U);
    msg.setSourceEntity(23U);
    msg.setDestination(46974U);
    msg.setDestinationEntity(232U);
    msg.type = 178U;
    msg.request_id = 10831U;
    msg.command = 110U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 28675U;
    tmp_msg_0.lat = 0.307829247388;
    tmp_msg_0.lon = 0.237971312882;
    tmp_msg_0.z = 0.190020696861;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.duration = 30956U;
    tmp_msg_0.speed = 0.981254847765;
    tmp_msg_0.speed_units = 90U;
    tmp_msg_0.type = 35U;
    tmp_msg_0.radius = 0.313948039167;
    tmp_msg_0.length = 0.405640692342;
    tmp_msg_0.bearing = 0.0966726354953;
    tmp_msg_0.direction = 111U;
    tmp_msg_0.custom.assign("ZOIDAVJKKFRZPZQPYXKLBPYGHQAMCDZAIXAHJSAQMSNIYGIUSHCHESYMOYAHFCSQIHYIUXPNVMBVBLRVJWENAWTYODAHNPMDXWRFONPOBXJMNHLKKEVWWZDTQIVTLEOPUMQCDOYGJKADFXDWBKMMZRRGFIUFGWQUGOECJLJB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 4096U;
    msg.info.assign("VRDTXSBWKYHUUANRRMEOFQSCMJXHVUVCJWSFCGYIBPCNHLCOBXLFDYKGGAAHFXELB");

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
    msg.setTimeStamp(0.111681648905);
    msg.setSource(7695U);
    msg.setSourceEntity(119U);
    msg.setDestination(37654U);
    msg.setDestinationEntity(24U);
    msg.command = 200U;
    msg.entities.assign("ZRICGWDHKFLWPIHVKOVQNQOSSKKITGQNYVOJUILIDHHLSXPAMBAJYNKPTREXFQZZHQNDFTCZFUWE");

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
    msg.setTimeStamp(0.281636557491);
    msg.setSource(54106U);
    msg.setSourceEntity(240U);
    msg.setDestination(57661U);
    msg.setDestinationEntity(19U);
    msg.command = 222U;
    msg.entities.assign("OSHGIMDJFLESRXJIRKUWPYHDDONXOTCUVYMXBFTVWWJYLIMHUQNMRGNRQNFKSCBJGGUZNNDYWLCWVCZQPBANXHOMKISKWKQRKMAQBTYDSBHTSQGRHMGFZFCPEMTCYUARYIKMYCZUOADVOGVJAJSBOPEQZXXPEECLXELULWFEAVTJWGIAJIADRFBTGPCRBZELNFZWBWVARFPSIAPQJHTNYEOCTOPTJDUDZLLB");

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
    msg.setTimeStamp(0.556000472851);
    msg.setSource(28385U);
    msg.setSourceEntity(159U);
    msg.setDestination(35658U);
    msg.setDestinationEntity(17U);
    msg.command = 127U;
    msg.entities.assign("DWTVILULOZONHSPIDCBLZHBZPRUSLHAJYKT");

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
    msg.setTimeStamp(0.21736044488);
    msg.setSource(33017U);
    msg.setSourceEntity(213U);
    msg.setDestination(20531U);
    msg.setDestinationEntity(160U);
    msg.mcount = 241U;
    msg.mnames.assign("TLESZEWHNGXNCUMFNNRZISAHBUMPHZYNZYTXKTLEFYPBVLWPTKETAJOMHGISDKTYOHLLORGXKAEAUHBKDHRRCUWCKVQXAFFWQGCFNMHQEURWKS");
    msg.ecount = 201U;
    msg.enames.assign("YZYQAVKVQKZBPFSXUUCVTBEDLFCLWBFBCLPTITDZQEMLTHCRFJRWKASZWVFJNGUHARMZHWHBCOPAOUMFJGVGDKXQKJKMRQHNEUXUNZJDFSRIOSGMMGGJSNARLXYUOLITKQESNOPHSPNHRZNDWYXRTPWLE");
    msg.ccount = 239U;
    msg.cnames.assign("XLAMIARSVJUDSKCDAYMZFAZRMZZVKRCOPNREXFUINHEBNUTXGUHQPHKGVGLWQJWFKREKLCNACNOTKSJBWSQSIPGXKTXXWPZQNOFAAMJYOPLOFHBEBMJSHJDVRJTJOHKWDMSDYYGOWZWCLQDDBCDWTXIMTEIZWNYFPVCEVJIIHBBPRSSVAFYETPDKNFGXRKUIQMQANEUOUTTCUWGLLYJXQ");
    msg.last_error.assign("XMFMQKZZKUFWSYGBSUPPOGFNPBYQOCVVET");
    msg.last_error_time = 0.566242484941;

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
    msg.setTimeStamp(0.711988286158);
    msg.setSource(6163U);
    msg.setSourceEntity(143U);
    msg.setDestination(31999U);
    msg.setDestinationEntity(223U);
    msg.mcount = 79U;
    msg.mnames.assign("PJVLWEEKLFUBALZZLQUUPZBFEJDENCKCCGHVCGOSAMEWRPGIWBSSRMTFKQADDTTQSZTT");
    msg.ecount = 92U;
    msg.enames.assign("CXHFPKUZOFEGDLYAJYNRWFRTMRITDSXKGVUXGCNJJOQPPCWYYPJDMKW");
    msg.ccount = 157U;
    msg.cnames.assign("TOFNKTNRSYMCIWXWMBAZ");
    msg.last_error.assign("GUCYCHSEHTWVYAQBXOFIXQUSGAVNWYEIMGAEROEKTHGHXJCUSWVOIPTORMVGAJTNLMSRVMDQHBDIDUVZFMVSTKPWTCJGULEQDECQQKYALRKIQL");
    msg.last_error_time = 0.847270169188;

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
    msg.setTimeStamp(0.0725149365446);
    msg.setSource(61422U);
    msg.setSourceEntity(186U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(142U);
    msg.mcount = 210U;
    msg.mnames.assign("BXGPDYEKJXUVCVUDHTQLOKPWGZWLGMDWQIGTSIXNFUZRUFLZDCCHMIYIETYPENHJPLKIRZWHXTWBRLAGXNOEKEQSCJIJKEQBPWFTYNYHVFUPAVJSYGKPXUHEKAFLVNJLBDCUJSZOBVAAGFLNQHRBBMUQHVVWUZXEATIFDFWOZRXFQTKHIRVSCJGNSJBOYAMMRKAAPSSKOLCARQEDR");
    msg.ecount = 55U;
    msg.enames.assign("JCJEBBIKDTLXBVGUSDCNDJRPLTUBXCOVKPBBHAUYZEEWWVOZOWAKNCLTOI");
    msg.ccount = 202U;
    msg.cnames.assign("XOKDIXKCTKQGMYPEBWXFADRCWOQNQNTGWZBUNLGBLJQSAWDVCQEEHPXSZJBLHPRKPJUETVSJZRHPCIDHXAFZARHRRLERKPYSXAFIRIZM");
    msg.last_error.assign("HJVCZEKTQHTCPTENVOKBQAJFIIJDOFTGJSQLZFQWAEMDFTIVVYDUJLJEUUZMRPPQMBBCHYOKMVWCORFVWLNEVITXMQPHXGJLSZJSXBORWDZBDVPADXGWZDESYTQMAPVDLYLNRAQOTQSXPNUSNMUGFKHXFWYWBRJELAUKLUSRHWFPDZUBXYQG");
    msg.last_error_time = 0.237153377564;

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
    msg.setTimeStamp(0.963360545573);
    msg.setSource(35165U);
    msg.setSourceEntity(101U);
    msg.setDestination(31971U);
    msg.setDestinationEntity(173U);
    msg.mask = 107U;
    msg.max_depth = 0.424521979158;
    msg.min_altitude = 0.952473792749;
    msg.max_altitude = 0.486991598421;
    msg.min_speed = 0.517521150161;
    msg.max_speed = 0.655080355966;
    msg.max_vrate = 0.187695415058;
    msg.lat = 0.229311922322;
    msg.lon = 0.210785169749;
    msg.orientation = 0.744014278591;
    msg.width = 0.676407659544;
    msg.length = 0.927508511875;

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
    msg.setTimeStamp(0.0533379947796);
    msg.setSource(32557U);
    msg.setSourceEntity(248U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(47U);
    msg.mask = 216U;
    msg.max_depth = 0.390403352555;
    msg.min_altitude = 0.965073873914;
    msg.max_altitude = 0.55242293739;
    msg.min_speed = 0.752011389057;
    msg.max_speed = 0.586976151815;
    msg.max_vrate = 0.428576833883;
    msg.lat = 0.368715967884;
    msg.lon = 0.405141174932;
    msg.orientation = 0.983583377018;
    msg.width = 0.0486801053617;
    msg.length = 0.618703350286;

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
    msg.setTimeStamp(0.096070460528);
    msg.setSource(14935U);
    msg.setSourceEntity(23U);
    msg.setDestination(5344U);
    msg.setDestinationEntity(251U);
    msg.mask = 216U;
    msg.max_depth = 0.145367975369;
    msg.min_altitude = 0.963682607919;
    msg.max_altitude = 0.14127408428;
    msg.min_speed = 0.448567172747;
    msg.max_speed = 0.725274144543;
    msg.max_vrate = 0.16086173408;
    msg.lat = 0.484080558308;
    msg.lon = 0.00675920995409;
    msg.orientation = 0.262298866232;
    msg.width = 0.256436685082;
    msg.length = 0.349055747204;

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
    msg.setTimeStamp(0.497938937323);
    msg.setSource(61433U);
    msg.setSourceEntity(214U);
    msg.setDestination(33106U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.927798642693);
    msg.setSource(57190U);
    msg.setSourceEntity(250U);
    msg.setDestination(13966U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.630303342252);
    msg.setSource(64866U);
    msg.setSourceEntity(184U);
    msg.setDestination(45109U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.101434444608);
    msg.setSource(8958U);
    msg.setSourceEntity(1U);
    msg.setDestination(23889U);
    msg.setDestinationEntity(178U);
    msg.duration = 40266U;

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
    msg.setTimeStamp(0.221695349272);
    msg.setSource(21112U);
    msg.setSourceEntity(185U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(231U);
    msg.duration = 34475U;

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
    msg.setTimeStamp(0.953314157644);
    msg.setSource(49794U);
    msg.setSourceEntity(84U);
    msg.setDestination(18390U);
    msg.setDestinationEntity(116U);
    msg.duration = 11989U;

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
    msg.setTimeStamp(0.200257126071);
    msg.setSource(4520U);
    msg.setSourceEntity(193U);
    msg.setDestination(34029U);
    msg.setDestinationEntity(238U);
    msg.enable = 19U;
    msg.mask = 3423810533U;
    msg.scope_ref = 1145613551U;

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
    msg.setTimeStamp(0.56099487229);
    msg.setSource(42968U);
    msg.setSourceEntity(171U);
    msg.setDestination(24929U);
    msg.setDestinationEntity(139U);
    msg.enable = 89U;
    msg.mask = 2939206319U;
    msg.scope_ref = 2397904726U;

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
    msg.setTimeStamp(0.589892788817);
    msg.setSource(29489U);
    msg.setSourceEntity(187U);
    msg.setDestination(21826U);
    msg.setDestinationEntity(237U);
    msg.enable = 2U;
    msg.mask = 3187035208U;
    msg.scope_ref = 2604536351U;

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
    msg.setTimeStamp(0.193343121719);
    msg.setSource(28604U);
    msg.setSourceEntity(35U);
    msg.setDestination(61019U);
    msg.setDestinationEntity(33U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.586284109167);
    msg.setSource(54023U);
    msg.setSourceEntity(184U);
    msg.setDestination(52245U);
    msg.setDestinationEntity(248U);
    msg.medium = 102U;

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
    msg.setTimeStamp(0.588701990868);
    msg.setSource(5819U);
    msg.setSourceEntity(149U);
    msg.setDestination(48332U);
    msg.setDestinationEntity(184U);
    msg.medium = 146U;

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
    msg.setTimeStamp(0.852551577333);
    msg.setSource(59179U);
    msg.setSourceEntity(200U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(105U);
    msg.value = 0.363055175777;
    msg.type = 168U;

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
    msg.setTimeStamp(0.349300249014);
    msg.setSource(288U);
    msg.setSourceEntity(43U);
    msg.setDestination(20156U);
    msg.setDestinationEntity(242U);
    msg.value = 0.955231364488;
    msg.type = 16U;

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
    msg.setTimeStamp(0.327622241414);
    msg.setSource(29817U);
    msg.setSourceEntity(205U);
    msg.setDestination(43538U);
    msg.setDestinationEntity(4U);
    msg.value = 0.437513532288;
    msg.type = 93U;

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
    msg.setTimeStamp(0.272155805599);
    msg.setSource(61540U);
    msg.setSourceEntity(145U);
    msg.setDestination(7348U);
    msg.setDestinationEntity(24U);
    msg.possimerr = 0.546467064878;
    msg.converg = 0.0386821604413;
    msg.turbulence = 0.710629213404;
    msg.possimmon = 140U;
    msg.commmon = 61U;
    msg.convergmon = 125U;

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
    msg.setTimeStamp(0.177496982737);
    msg.setSource(50954U);
    msg.setSourceEntity(39U);
    msg.setDestination(61164U);
    msg.setDestinationEntity(209U);
    msg.possimerr = 0.0954802891324;
    msg.converg = 0.48674637038;
    msg.turbulence = 0.82713430471;
    msg.possimmon = 210U;
    msg.commmon = 208U;
    msg.convergmon = 65U;

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
    msg.setTimeStamp(0.19213204687);
    msg.setSource(51555U);
    msg.setSourceEntity(174U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(0U);
    msg.possimerr = 0.067287679952;
    msg.converg = 0.188899912697;
    msg.turbulence = 0.624775652011;
    msg.possimmon = 142U;
    msg.commmon = 132U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.671896775028);
    msg.setSource(40438U);
    msg.setSourceEntity(249U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(12U);
    msg.autonomy = 107U;
    msg.mode.assign("NKLJVUCPPISNZECWKKLTEBEMWGPSJLDJEDPGQAGEROIBRHMDRUCXFNKHRLYZLJGZIQOACKBCHXYHWLAJDVOVOODLIRUARDIPZTHFSPAUMS");

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
    msg.setTimeStamp(0.326284464279);
    msg.setSource(35560U);
    msg.setSourceEntity(64U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(27U);
    msg.autonomy = 201U;
    msg.mode.assign("LZVCQARKHLOXLEWBESXABLMIZVFEDABXPWGNMBMPVAMMRGNWPHGGNLZXKWTDKURCPOOTLSRSYUSCNSVFLQBERTOCSPWQNXLXYIFOHCWTXEOJEYSUTIXIGJVYHIIJQRYQHGUDZDQHIRPJZIZHWJRPNOFQHKPSKNQKZTHTYAWTNWAFDJYGFECKYPCEDDSABJBBUMFNVCECMB");

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
    msg.setTimeStamp(0.777301953331);
    msg.setSource(57366U);
    msg.setSourceEntity(33U);
    msg.setDestination(47266U);
    msg.setDestinationEntity(190U);
    msg.autonomy = 69U;
    msg.mode.assign("IEXMXLFFNDJDLDUXCHSTPJGZDUASZMGZDMRPBCSQNRKMJQKZXTLQXQHSONQRTGEJOENJPIRUICQSHBUJPTGWVAICDZCAKLFQCGMNYYLYEFTANHTZTEXHOQQZNHHNEYIVSAIWWPWNZXAKYDWGFSOYKXLVAEIMFRUMIPRMOHKYVLPCJBRTTYSV");

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
    msg.setTimeStamp(0.281385520804);
    msg.setSource(62181U);
    msg.setSourceEntity(103U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(226U);
    msg.type = 130U;
    msg.op = 120U;
    msg.possimerr = 0.18136724682;
    msg.converg = 0.758484938183;
    msg.turbulence = 0.148390457918;
    msg.possimmon = 22U;
    msg.commmon = 198U;
    msg.convergmon = 133U;

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
    msg.setTimeStamp(0.90668575556);
    msg.setSource(8073U);
    msg.setSourceEntity(86U);
    msg.setDestination(9551U);
    msg.setDestinationEntity(136U);
    msg.type = 115U;
    msg.op = 59U;
    msg.possimerr = 0.384416714205;
    msg.converg = 0.0599297027634;
    msg.turbulence = 0.08729791192;
    msg.possimmon = 229U;
    msg.commmon = 55U;
    msg.convergmon = 172U;

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
    msg.setTimeStamp(0.759954127386);
    msg.setSource(16255U);
    msg.setSourceEntity(251U);
    msg.setDestination(15385U);
    msg.setDestinationEntity(7U);
    msg.type = 209U;
    msg.op = 117U;
    msg.possimerr = 0.202284750941;
    msg.converg = 0.000138143499467;
    msg.turbulence = 0.423046638233;
    msg.possimmon = 161U;
    msg.commmon = 207U;
    msg.convergmon = 232U;

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
    msg.setTimeStamp(0.615511341598);
    msg.setSource(15610U);
    msg.setSourceEntity(177U);
    msg.setDestination(42856U);
    msg.setDestinationEntity(30U);
    msg.op = 125U;
    msg.comm_interface = 172U;
    msg.period = 14129U;
    msg.sys_dst.assign("EALTPHBQLPIVHKNAHUUDYZRTWHITGXXEVL");

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
    msg.setTimeStamp(0.439517375632);
    msg.setSource(43832U);
    msg.setSourceEntity(242U);
    msg.setDestination(24917U);
    msg.setDestinationEntity(214U);
    msg.op = 128U;
    msg.comm_interface = 189U;
    msg.period = 38884U;
    msg.sys_dst.assign("TKVYRXVHPXUPICQOUCHMHGGPEUWPTKFMLBLLFHBBQJZDMDOTRTPZZVZOAOR");

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
    msg.setTimeStamp(0.562537393554);
    msg.setSource(9871U);
    msg.setSourceEntity(113U);
    msg.setDestination(14088U);
    msg.setDestinationEntity(91U);
    msg.op = 237U;
    msg.comm_interface = 75U;
    msg.period = 31248U;
    msg.sys_dst.assign("VEZJYEIHGFRCETQEFTJHIXFEKAOWHKDZARKUPVKMSPUOYMFOSMILT");

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
    IMC::Abort msg;
    msg.setTimeStamp(0.938910161901);
    msg.setSource(37595U);
    msg.setSourceEntity(244U);
    msg.setDestination(55719U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.48674721272);
    msg.setSource(22431U);
    msg.setSourceEntity(42U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.797754587327);
    msg.setSource(55707U);
    msg.setSourceEntity(11U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.548440303209);
    msg.setSource(49614U);
    msg.setSourceEntity(233U);
    msg.setDestination(15421U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("FEQGKQXMCIDZHXROMGVZKSRFBVIBWCBPNHYFJFBSPFTGHUENIXYUKJSLYRCTQQYEMCHOTHTDLBESTDBVAMAFNIBSMHLYKTVTRBPVRWNXAXWLVLHIQDCZLMZASGPOTBKIUEALAIYPJZPYOSFZJNDVGXJXEJPYKIXVFNJSDWXODMHFUGZRCPCWOKWYHIYIVAGGORJDLGOJQWEGCUTUZCNWRWEPOZRRQZNKDQMSDQSULHMATCPKKMAXONQV");
    msg.description.assign("DLAYZVFPWBXFEEPKNBUAHWDRDRFGTAQWRUASQOEQVNGXUAZTZMZJFTMJKICOKWKXWNDNSLQYMYQHRDNIQBUMGKCVSOTURCSPAALICDWIBVEACRQCUUVHKWHATHREDTOPPPLCIIIXTHYKMVVOXFPFLQZBMCBZBCGCFMYQSTGIZNYAFZUYYXRSIXXJKZEDPER");
    msg.vnamespace.assign("GLWLITOXNYZEVMEZEUZSQWJYTBNRANQJMVZDJLCPIFLR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RBNDVRYVVHOBBNSYSZBCFJE");
    tmp_msg_0.value.assign("DIZGDSHEKHIKMFVQEMTEBQPGRCIZAYFMIZHNIUKDDFLDXPLVEITGPETLNSJJVYNYJBYYQYAOBWUFOGOABMSGRUTSBVOUIRHBWSRZVXIUTDJBWCOTKUCOZAXXLQWMHCM");
    tmp_msg_0.type = 95U;
    tmp_msg_0.access = 20U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("XLFCESJEBPSQNCIWSRFNVPSLHOPUVPLJALWVCKCVQRYZSWEFLHJIHRXYGLJTEENXREUMFYPTDITZTMZGHRIQWVQWJUDWWSDVBNCRWCNPTHHOLFOAYZDTUKJTQXGZYMIIKYOVAGTLBBKODKOXXUNQJGMPBQRFNTCDJUBPXQIDPANHLYDXEZAOSEYXRGUVIAOBACHMWZYMMXNPZVIKCRZQDGHDGZQMW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NFMLSDXBIXPWYAZFBVKQGAVWWSJXKYWKMDGVGPYYQYMHRYNDYHZBVDPCMEVOTOBGTJRQHFZORVRNZNSZFSAZRSCJNEQOEQGUUXPOBJRIWEBNIETGHGNWBLLNLWMNGQDIKIOFOKIRZFMXHLEALCMFOLVGDQZCLPBSG");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 29358U;
    tmp_tmp_msg_1_0.lat = 0.141030459354;
    tmp_tmp_msg_1_0.lon = 0.176078056607;
    tmp_tmp_msg_1_0.z = 0.301387042378;
    tmp_tmp_msg_1_0.z_units = 27U;
    tmp_tmp_msg_1_0.speed = 0.929843480065;
    tmp_tmp_msg_1_0.speed_units = 246U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.626552735361;
    tmp_tmp_tmp_msg_1_0_0.y = 0.838399361947;
    tmp_tmp_tmp_msg_1_0_0.z = 0.42677248082;
    tmp_tmp_tmp_msg_1_0_0.t = 0.529994560256;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("VLDJPSVZZGOMUNOZDYSOCXALFXSIHNGTGYFEDUKPRGINWBKCBQAASZVPABRWCJYINJTKLTKJNWCCCICEEADRBSRHJXQGPQERELDVXTMUSMIOKHHUAWSFNHFEQUSLBMZHSOQVMBTLNNPCDHHUNCVGYKKGQPOMJFFXIWWVLTXYGHTXMQTGZTJNRUAXOBTJKEVDHRARIMZOKAZPVYDVQEZLIQUPYJDXUJYBWO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredThrottle tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.634637275415;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("BZITAYZFVGXASHBYEXEBBXZ");
    tmp_msg_2.dest_man.assign("URXOHOZFAIRMRYLIMIXVBCRULFCQMVYVTBZZFZHRABWFSWKCXQAQJTKEHNJUMHLLHJLAPPTTKMVITMVMHQALGXTNJKWSQDWEWMPAGUEPEUBITNXGCONDBKTSLLXZCCNZKFJZJPVESGZBRFWGXQNJGTYGYIKDEDCXQGYDVUNZIPCOXULPCFFEVOEYSLQPJKDKOISEQBQWHOCVKSBDUPSWMUXARAHZDJYNOUVFHRDYEIYGORRTBAS");
    tmp_msg_2.conditions.assign("DECQBXYAPIYSYGRKRWVOMDSEJAKYUZLWYMIUKUPPDNGVHGRKUIAUTBAVHXZRFQSFOJTCIGSGZUROJTFDKQZCHSFIAOGKOMLSAHQWNWJAEDVIMCHKNJSDKDTJZFEEDJRRGFYMVXRGNOZFQTHZXNUYEVOMNHWPA");
    IMC::Pressure tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.240654375918;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::PH tmp_msg_3;
    tmp_msg_3.value = 0.581006204424;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::FormationPlanExecution tmp_msg_4;
    tmp_msg_4.group_name.assign("RCLCPVHDPVOCVFFCNOYRPNEZSLAEELKKJYVNOFUQYJNHDAPITSGXSXVHYIYBZFZJTAASUAULGBPEVBTNFXBZOLITDUHMBICWNLRICSUJTIQRQDBWQQNEYZEUTQDUMXGCHOIZFLRPWDMJDVEQXLAAWQCZ");
    tmp_msg_4.formation_name.assign("OUWVFKILZOBXYTACGZLHKZGGCTJEINKMQWPWSICOYDMLANQGSVKQRBWBFMSHMMFCNVQMNWGWYJCREKTCQTFPRGELVLARKKDDZPDXYADNADQQBCILGEHKZSVPUTMIZYRUMYNUHCPUEYEJDYLWPNGFPWPHAUVGCRJFDFBUTAGUZBTNNAUEMIKJWCKOVFWB");
    tmp_msg_4.plan_id.assign("QERRUTDWEFGT");
    tmp_msg_4.description.assign("ZZMKYYJUPKEDTVFNFWQIYOXFJKIADDRPZMTQQYNCPGEKKFKWLOAJOVDSYCQDHJRQGRPFMMIIRTVSLFEINHMBENOWXNXZLPITVLNNXUZQAUQPGWCHFUNVLLGQRFAUHBEORBFHTILABJWNVMTDUMXTCKJWJTCSMTPYVEPAESKBUBCB");
    tmp_msg_4.leader_speed = 0.277522156821;
    tmp_msg_4.leader_bank_lim = 0.771371823521;
    tmp_msg_4.pos_sim_err_lim = 0.880279933039;
    tmp_msg_4.pos_sim_err_wrn = 0.729363370484;
    tmp_msg_4.pos_sim_err_timeout = 9976U;
    tmp_msg_4.converg_max = 0.737212196405;
    tmp_msg_4.converg_timeout = 37258U;
    tmp_msg_4.comms_timeout = 30183U;
    tmp_msg_4.turb_lim = 0.233812601273;
    tmp_msg_4.custom.assign("FRXAFHIGMOPZDTXMROYOFXRCKGJIRDTKSNVLUOAZGLNTIYYSRDBNWEMQPFEOTFFXFAVHUHQSDS");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.739285536744);
    msg.setSource(45388U);
    msg.setSourceEntity(219U);
    msg.setDestination(51067U);
    msg.setDestinationEntity(197U);
    msg.plan_id.assign("UTQJRLBFFPFVGPYXCI");
    msg.description.assign("JMFTKAAKCZEXJPXOKYHZARCGQDDGXURSDCQIIQMWMPEDWTXJBKVGQCMRMOJUFJIENZLHUEVEZYQTLQTDBAWQRGNYBPBJYHGBERWLNVKZOSVAOAJRBHRFYLHIWSPLNKHFLNEPTSIGVDMPXFXWNOJNWRPZYHUZVJWNAMOLGMDLYRKGBSHVTCCU");
    msg.vnamespace.assign("ADHUPMWNTFNZSOJCWTPVGHNWEEEEQIRPKE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("XXCSJFPXCKMGOSUGUZXFFYINQSAHJZRGOIKKGDPEHZWSAOHOTWRJDTOUDVLFHUKYKEINXIKXLYBAJTSPQIEOJYYHCACAPTQVLUILNKSYBMLJRMDVHSTYLRROXEWRGTCITVDYGTCGHOVVANJMKPUFLMQZUMBDWBQQAAG");
    tmp_msg_0.value.assign("DFHCPACCEJKOXXNAFIFGAJLWNJSUDVYJUZZLEFVSUDAZGWRGYZNPIBOMASKRUUZDCEYPQCIZIHLMHTBRQCNXSWEQJCHNOLIMYJRVENTOCJWJDSATOGKUHRVBMRKSHZSXWLZEBTTWKXAXJPMFOWQYTYNGIKDGTVPRYEGKQVLFZBKVQMIFPDTFAPHESQDNMLZKYVXYUJ");
    tmp_msg_0.type = 107U;
    tmp_msg_0.access = 13U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JHDGOPNDASTCWQHDYXQUTLJSWHOLMTQLKXOFVKAZSBVEYQGMQNQGJGNMINTFHTBFAJKHICITECREAZWXNMFBWYORHRPPBFXLURYUHNBSJAMQEPEMPZDABLGQJCCUOVRUPYRCNWTOWEVYVYCXEQYXBPSBLEVUMBSSOXTGZVKFKYDHDTPOANZVIJUGRZCCJNLGWRHWFLZOGZIJPYKXSARIVMIHCMDDMJKKKB");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TNNFZZGNSQDTOYYNLUNFBJAQHBFVNGTOPCDOSAEPJLYRJKMDIQECCVLGOCMUYIVZTXFRLKJHHLHJWVOLUNJCSVPRKZSKVKEFDR");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.515150313006;
    tmp_tmp_msg_1_0.lon = 0.668131741417;
    tmp_tmp_msg_1_0.speed = 0.555184156902;
    tmp_tmp_msg_1_0.speed_units = 88U;
    tmp_tmp_msg_1_0.duration = 15671U;
    tmp_tmp_msg_1_0.sys_a = 14960U;
    tmp_tmp_msg_1_0.sys_b = 13289U;
    tmp_tmp_msg_1_0.move_threshold = 0.881929822055;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("WZZLWAYVSKSUAKDVXYXSJRDMSPVCOREGUBXKIWWRQXTVIFTJHLNGAFCDYDGPYKGHTJHHZMKVPTWCPDYZFEILCKSIOXCWIRQCHUFAXBHEPAQKNMWMMCLZOVZMYYFBCNOAPYDJGGRZJIUQCFEEUJHNASUQFIZQTTLMXUBNERVSBPNKNZDLQRVQLWLKTTGODCBWQTPEXHDNTOWPOUHY");
    tmp_msg_2.dest_man.assign("ZFEBWPBPCDQBCEQMHUFZTHTVIIMQGODFVCYXMWADVZVMJRJRPZQWBXSBHVKNJHSYLBLDEYZLAZHLTDMLSZEYOEWMLSYNDUOYKBHLSSPWGPCQGVIRTKCOGQFSEDWNUYDLOXFWOTCROVXGCPTQSDNECEIOVBBIJORQWUSGLKNMFNKIDOGJJGNZIJMAAPZXHLAAPMXJYYKKPAHYKURGARIQUMFCTK");
    tmp_msg_2.conditions.assign("JVXWMYFYISBYXBZXCHEYGERHNSQHOVHYAJNYTILREVLVOAHIOMKTURUWVPMIPZGDCYMGKQVWBNPQTUWLFKNBGJTWMKFSOBOCDJFLWATEEPDZEXDSRPWCLCVYENMDNZADKQCDLZZXUPVMCJFTSUJFZOQKNBPIEDQGJTXYBZZRBZXJGHUJWODE");
    msg.transitions.push_back(tmp_msg_2);
    IMC::UamTxFrame tmp_msg_3;
    tmp_msg_3.seq = 28308U;
    tmp_msg_3.sys_dst.assign("PBEQKFGRWYRCVTNVORRFZHBBCDUYFFYNKPMXGANZQZYNIEMGLUQLOMNCZVAFTLIXLUDMCDYQBIZJKRMEHEQADZOGFTZUPFELMJSXHGRJVQDWSMPGUKWXXWJOPNYKMFVZOAUAWRTMLYZHIGJCBAHIMVIIYXEIJQCHDVYFOTSKJQKKBXJTDIHLPWUTIUVRXPWQGSSBWHDWCSJDUTCBWGDAPGFEVNAXSPNYPLAOEEHSKTAQNR");
    tmp_msg_3.flags = 140U;
    const char tmp_tmp_msg_3_0[] = {-22, -127, 0, -127, 40, -118, -126, 107, 79, -105, 60, -52, 118, -21, 86, 89, -70, 103, -68, 53, 119, -98, 100, 93, 98, 22, -69, 93, 52, -72, -127, -70, 79, -6, 84, -82, -89, 105, 106, 122, -64, 120, -1, -117, -55, -75, -15, -52, -125, -19, -43, 53, 104, 81, -78, 58, -91, 5, 76, 32, -1, 7, -111, -122, -22, -83, -33, -36, 91, -108, -69, 70, 37, 98, 62, 51, -114, -11, 3, -25, -17, 114, 106, -50, 16, 47, -95, 106, 109, 107, -57, 38, 69, 0, -38, -68, 96, -114, 84, -107, 4, -55, -90, 122, 61, -18, -127, 32, 43, 21, 9, 39, 34, 23, 82, -18, 15, -115, -107, 32, -80, 17, 0, 53, -95, -41, 56, 103, -91, -7, -31, -95, 119, -48, -99, 47, 73, 13, 34, 62, 26, -102, 104, -105, -105, -55, -23, 86, 83, 94, 50, 124, -54, 112, -62, 23, 17, 43, -107, 114, -46, 18, 15, -77, -108, 49, -70, -125, -67, 62, -51, 77, -48, -27, 53, 103, 3, -54, -55, -30, -30, -38, 44, -58, 108, -56, 73, -45, 27, 65, -66, 11, 30, 55, 101, -72, 81, 114, 48, 73, 46, -91, 6, -69, 63, -124, -57, 2, 95, -95, -35, 115, 30, 44, 95, 64, -67, 117, -56, -16, 114, -108, -51, -2, -76, 119, 67, 122, 106, 76, 2, 103, -128, 85, 77, 118, -3, -66, -50, 126, -39, 126};
    tmp_msg_3.data.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
    msg.start_actions.push_back(tmp_msg_3);
    IMC::EulerAnglesDelta tmp_msg_4;
    tmp_msg_4.time = 0.639776422072;
    tmp_msg_4.x = 0.858027000519;
    tmp_msg_4.y = 0.777684313474;
    tmp_msg_4.z = 0.909481475998;
    tmp_msg_4.timestep = 0.96910966898;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.587128855059);
    msg.setSource(55330U);
    msg.setSourceEntity(13U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("QGJPRIXOQMJCOMMSKTYCBQQPWTJITBLXNPZYRDLGAMSZANGTTAPCAMAQGOUULSNFEWOZJFSOPTWEUSO");
    msg.description.assign("NOXKTZUMNVRYJFLRYTDZFINQFTHZUMZDEYXGVLXIUQYOWOCBSBKTYAOAIHIAYKMDMRBWUNZJCRLEWHTICDI");
    msg.vnamespace.assign("LKCSYLYRJULEDLCQXHFRWBRNGUJZWPQDQCPSKHDYCYUIMDHJNTRMJBBKBOVWZBNBXPUADAOAOPGKVNUADCFNMSSJTZJFOHDDENGTSZNJALRWXUJSUSIY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PAZBXDNUCTDDQJXSLLFIMKGQIVLHOZBSSJKLJEVXSIBRPBRGWOTRHGCBKUOQYURJLYFFAYFKNATHNMQAXXUFSJJHSIVRHUJHLJLZZDMRUPWOTCBMYVRMQPDSTHVXJDUTLSBFIGWOHODVANKCSCZOEWZTGDDRGODVEGMJWLEYYHIOIBACYWKKKCKIQWMXZGVYWYPQCXUPWNNIQFR");
    tmp_msg_0.value.assign("AWSVPZEYEXIDANGYVFEHMGEEXBJPBJKALGQJHAUBYUKXEBVCSMNOXEDNGGHKSZFBFDKPQPVIOTGJWIZFTLTZDAAMYRHCFHTFSOJLQNSTVVAPZEBVWCGSVIUHBDYCUKPQNSCULXTYKCQFGHRSQTFNAITQLNTDHVQWKDWWHCPMYNOWCJPKDIZDXSMLMJIKOWDOR");
    tmp_msg_0.type = 245U;
    tmp_msg_0.access = 90U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BGAPRKRQQNDAOVTNZCNLUOJSZJAFLVNGRMCJRPAPABHHPIVFJKGZCQFJNVMYZDEDZEYMLLCWKKLLEXMDHRZFRUXOWXIZLSAQYOSPEGQWMWMFVEFVYBPJMFIJWSUK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LNVJSBUUFFCYYLAZPYFGAVQVJELQZGVGCSOXYKMRHPUXVODUESSCKXIVVKLRBFPUOQJSVZGRAWHKAWUMWBFMOBDCRWGATZDWGBXLLYITNNJJFIRCTHNGAKYBMUXJPCHGFDNPFUQDBSPLFYPQXPTEFJERJRRUZHGWCKEQIHJWWMVXYPUPSDAKDCTHTHY");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 31309U;
    tmp_tmp_msg_1_0.lat = 0.120328663211;
    tmp_tmp_msg_1_0.lon = 0.252933816274;
    tmp_tmp_msg_1_0.z = 0.00300803355964;
    tmp_tmp_msg_1_0.z_units = 199U;
    tmp_tmp_msg_1_0.speed = 0.259668192213;
    tmp_tmp_msg_1_0.speed_units = 58U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.452096634444;
    tmp_tmp_tmp_msg_1_0_0.y = 0.300344996478;
    tmp_tmp_tmp_msg_1_0_0.z = 0.995918610888;
    tmp_tmp_tmp_msg_1_0_0.t = 0.743519615412;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("FMGMREQJFOKQRJDBBJEZNXXPMCFWBVOVHXIZBIKHSWLPJAZBKMESFRJIYCHQZIBKTBPTDZGBHYCSYTNJSHZWAIMEIUQDRSFZPYUDCTYRJTKSTMVJXNCITEVGOKJGYVULGMFQFXXSMPAGXAUNAYDQAEPLKKFSZVWQXUWHENGQH");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LedBrightness tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("TNEFZYJHKCEIIXTSSOUWILTPEZBTUATNGGSBSFXNEYACZDPBETAKZAPDBCKSPPQMQMZMIWKVWVAQEXRDLMOAGQPLMAIPVSNUNBXJJUTFQUGTJBIYXTUJUJOQYKXCQKKERMHAGWORXHJNQYRRWTPD");
    tmp_tmp_msg_1_1.value = 105U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Rpm tmp_msg_2;
    tmp_msg_2.value = 29497;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.093903464213);
    msg.setSource(36808U);
    msg.setSourceEntity(235U);
    msg.setDestination(48146U);
    msg.setDestinationEntity(155U);
    msg.maneuver_id.assign("PMFPGQADEYIZVWRCKXJARLGIAVJIJCONPHMVNXPHDYTMUMQAZSYJYLWZNKBJLHBCRISSLG");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 15132U;
    tmp_msg_0.lat = 0.95313243197;
    tmp_msg_0.lon = 0.754865392932;
    tmp_msg_0.z = 0.966139617264;
    tmp_msg_0.z_units = 112U;
    tmp_msg_0.duration = 53766U;
    tmp_msg_0.speed = 0.303258443409;
    tmp_msg_0.speed_units = 164U;
    tmp_msg_0.type = 158U;
    tmp_msg_0.radius = 0.745346085069;
    tmp_msg_0.length = 0.696220827087;
    tmp_msg_0.bearing = 0.694493693875;
    tmp_msg_0.direction = 176U;
    tmp_msg_0.custom.assign("LNOVGIEUNDZRKMFJVMEXFMZHONPSLMZWIHKXNZHMSEYYGFSBKCOYDQZRWPENWFFYBMWEQACPATRZTPOWQLXUGYINPBTPQBONSOQAHATCEJBDZG");
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
    msg.setTimeStamp(0.386521842801);
    msg.setSource(58390U);
    msg.setSourceEntity(217U);
    msg.setDestination(16887U);
    msg.setDestinationEntity(200U);
    msg.maneuver_id.assign("ANGMVXVWVSFJEXZIJMKANJOKPBGKCNTHOPOBPZRMBCAMCHJDYWNXKWDMIECFSTOBQMJIKSYGKCNHSFFJPSHXDZGLVEOCYLULZHYISWFRPE");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 15822U;
    tmp_msg_0.lat = 0.0332610659956;
    tmp_msg_0.lon = 0.810709155239;
    tmp_msg_0.z = 0.678678129906;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.202914119091;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.custom.assign("CQQTUZVVTAFWXHQHPUHUWKIGLCQUOZDPWBGZSISEOLGYDZLCWWHNCXOAMIGSPAOEXMNBETJFTLVVCHPQZFZIDMAWSTDXUWSNKEKLTDYBNLQQCBXYQALNRMOAHDHKSGKFNLXRRBYVLURGEOGYCKOECLOXJEDGDHIZBEWREUZCMCBMODWTQKINRBFKVMIGMAYFNUPVJIGKYMJYVPDRM");
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.577765070233);
    msg.setSource(10024U);
    msg.setSourceEntity(71U);
    msg.setDestination(46754U);
    msg.setDestinationEntity(236U);
    msg.maneuver_id.assign("OKUBBLALIXIATSWMYGPFZYJRMMIVFYWIHEWJRSPOWVYETHUKTXFRJUFQRSDIEKBJGWAAGYEFFYAIKGBCLUHXZCPIOCNWUWDPHQUOEFJHGVJMTGWLQJDSZLLDDGNBYCGRPSXNDFPMUCNCSLAXAZBTNIVRMCCNLKFTEGVVFZRRHPXQOSLZBRPVMNKTHYWPBEQQXDSHDOEXNEXVOAQYKO");
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.505788168143;
    tmp_msg_0.lon = 0.532743452092;
    tmp_msg_0.z = 0.667370725688;
    tmp_msg_0.z_units = 54U;
    tmp_msg_0.speed = 0.330983694585;
    tmp_msg_0.speed_units = 138U;
    tmp_msg_0.bearing = 0.698038428538;
    tmp_msg_0.cross_angle = 0.853962582497;
    tmp_msg_0.width = 0.561189140884;
    tmp_msg_0.length = 0.0919211063679;
    tmp_msg_0.coff = 105U;
    tmp_msg_0.angaperture = 0.448583790631;
    tmp_msg_0.range = 61854U;
    tmp_msg_0.overlap = 197U;
    tmp_msg_0.flags = 227U;
    tmp_msg_0.custom.assign("BBRUKBUNSIEINUOSHKGMJECWUMGXTFRSUPPNBRSWLBVDFVJZDIGEXXRWVONPDZBENJBWSUAQKITDPHPMOYGZKPDPFIOEBTCFAZGNQDUITGCYUNYQVCHMHZ");
    msg.data.set(tmp_msg_0);
    IMC::UsblPositionExtended tmp_msg_1;
    tmp_msg_1.target.assign("TQMKSQPGKRPVOMOQJAZFYSVVXOMZHDNLYUSIHDYPPFUJIUQTXAFBNBLRVRTXQEBLIMYESFTKCFEDGPIMPSWQNIYGUNZRAVRBKECLBCUDUGLWRLH");
    tmp_msg_1.x = 0.425882944082;
    tmp_msg_1.y = 0.969862166052;
    tmp_msg_1.z = 0.0405528309167;
    tmp_msg_1.n = 0.523899564639;
    tmp_msg_1.e = 0.725250956152;
    tmp_msg_1.d = 0.863133912543;
    tmp_msg_1.phi = 0.803829762655;
    tmp_msg_1.theta = 0.360814152255;
    tmp_msg_1.psi = 0.910322138174;
    tmp_msg_1.accuracy = 0.446878983456;
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
    msg.setTimeStamp(0.134002785034);
    msg.setSource(46510U);
    msg.setSourceEntity(87U);
    msg.setDestination(33459U);
    msg.setDestinationEntity(25U);
    msg.source_man.assign("HSVACLIKAZIZXSRKRIXRDJBDBCRMUQWRWFAULQRBIUHEXNDFOHHJMGNBEAOUAPKZBZFZMUJHENCNGIKQBGDGMFQGALBJWIVVTLVKBAYFWDVQGLTEHNPRNCPGBIEMZYXY");
    msg.dest_man.assign("LDPIZFUVWGOIXQOUEZGKCEABMMOQDNBJASPGNGAYXYACSEHFXLSLKYFQETXXNQMGEPGGWNUKQJTVYVBKHEZVALCTWAODBILXRCTAVTMLRPKNIITPJZIJHEWQCTISVJCSTUGLBKFMLUAHORFZPZIMQZRWMDDYBJREZLOWMHCNGXRWKRKCIAMHRPTNDYPSOFJSXNEEJZUJHWYSUUBXXVF");
    msg.conditions.assign("UZSTVPGORVPSYUCYGAKBMWJDKMLEEPOISVXRPQZEERILIMJKNSZNCCBHYIDOGBZEKNWONATXQRPABGVQAPKLJHYUDRUMEZACIGNWTTCFCFTFYLOP");

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
    msg.setTimeStamp(0.259987292206);
    msg.setSource(64281U);
    msg.setSourceEntity(133U);
    msg.setDestination(12490U);
    msg.setDestinationEntity(240U);
    msg.source_man.assign("WWHSCTIBXKJFZDKQZADSEJPSXWLVGUCHV");
    msg.dest_man.assign("PBMDFLAXNWSVIKAJLHTOELYLGQCGCJWGILBUFTWVNRJVGNAHKGJRZKNSUDQIXFRUQOEKPMCVCZEWWPIEKZFNTYBROHYTQWOAMEEQMNHTZBULAOJZUHGBCSUGYPKDUATXRXXSVTWNJEDCQGAHIEDUJNHTBSXKMFPJFBRLRIOIMVYISXXIOSZADMEQSWOTOJCNHVZPPZLHFGVVKMBYQYWRXHBORRFIYD");
    msg.conditions.assign("TQDZEPSMLVWKQLOCTUXIXMJHWJLXRUYOPAEXHPUORVNHNYZASICSFPMGDQCUOTNVNRREIARPQLOQUSYSBMHIFZTURBKBQAQQEGFIRCROVKLVNILDCBXFGMJLEBBJHKHKJGVVPWFKVZDSXPEZLOCGCUED");

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
    msg.setTimeStamp(0.108576729054);
    msg.setSource(3553U);
    msg.setSourceEntity(192U);
    msg.setDestination(36412U);
    msg.setDestinationEntity(180U);
    msg.source_man.assign("YESXXJZWAUVRLJCIAZYHZTUIXMTHBDUOWJIJXSGCSOVMLDQRJASGWDVNBMIAPIRKBJIWEHBUYSQVWPPPGFOFISWKEGXPBCZLUJJUOQUDXVSVMVPTWWSCYKYHIOFKVYOANTXRFHODPBARLTNMQQXDOOFCWFPWHPZAZILEGCJXRRRKFTFYVMQTNGGKEKMNL");
    msg.dest_man.assign("CAEXSBVQVTQTMLNGKBGOLHEIYZBMTNJRPGZMHY");
    msg.conditions.assign("FQLDHVAWWQMNAMLTDRLDAUQFXVMZTFJDPGWAHBPWIEXFJCQUUCRLKOYPSVDAYIFGTGQJSEHESBIUQNJMEFUOVKHBHRRNJRBNLAEDYEKCTBSNSVYPJXZXMONXJESCNTZGTYBDXEKIMTMYVGNIPYG");
    IMC::MsgList tmp_msg_0;
    IMC::QueryLedBrightness tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JLYHMSGXMLJZNJBKBSYCJNJHTHYGEZVGMBXSJWUTKWMIPQOAZXKBKFQGMRIFGRVPPZLPZAAVMYAFZFULVMUVOBXHVWOSSKRDTUQ");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.914340675875);
    msg.setSource(48929U);
    msg.setSourceEntity(1U);
    msg.setDestination(46456U);
    msg.setDestinationEntity(18U);
    msg.command = 154U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MULVVLSKFSQGUPIZQN");
    tmp_msg_0.description.assign("COFAOYSQSESYDFQZTQJMYWYLRTEKWCWZJRGVFOZBRJHMIWIHSYEUAVROQTRPKFDGJNVXMDCSAMDEZBLVILECAQKXJHHFODFERYCNOOWBZNONAOPXZVKTRUWFBTBTWNJDLBADOYHULHMKUTDCVMNTYCKCSGEZJMRXHDTRAPIPVGWVBPYJUHSIKFXGQIKPMNQVPGNUMTZLUXZCQEFINLIHUMJWGLXHCFAPGYLKNWURDASEXXX");
    tmp_msg_0.vnamespace.assign("IJWWMPUZYCKPBMQNFPXX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PJBEHWXWRNKKWPPLFHPSOFVFIBEPKTCZZLINNTLMMIQQZCZATMHFQDBUWTBRKKAXNJIQEHQDYGSAAUZJOVQHURFGHTSPCZVKBIDBJXJOFLGWXBRDNSGIQWJMBWRWUCPLOUJVDUOYHNMXLWVAKNDVRYYJXZOYNTRSISVHDENLAIAZXHTC");
    tmp_tmp_msg_0_0.value.assign("FIFENDFXZVXIJZHJCAYQWOLYRMSAQWMLXBMJZJTBPIUDSCGOIQZDCCVHGYDHJRCRJYPJTPJUMXHWPXFKXPGKFGRGRYBZWVVAABUBTADRILRG");
    tmp_tmp_msg_0_0.type = 57U;
    tmp_tmp_msg_0_0.access = 20U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("GJSNHULLZHFRHBINGZVUNIYHWLDGKUQYWWPTEHIKVQPQIJYOWMHTQOBVUTEISDBLVEMMCBPBIPLMTPBNNKTRJSWIOCSKYJBOLNPEJBMVWHFKPZZREQTUHAMSCRFTTYJKXUNSKXAQZFKILCBXQMZCDYEYZCRYAEKHIGODCCFZLJFQYWBGRXUURAADOMR");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RGJURTZZMVYYSIMKCRGPTYSH");
    IMC::Loiter tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 29453U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.930328792998;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.708826013787;
    tmp_tmp_tmp_msg_0_1_0.z = 0.634058706567;
    tmp_tmp_tmp_msg_0_1_0.z_units = 78U;
    tmp_tmp_tmp_msg_0_1_0.duration = 25619U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.476135177556;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 77U;
    tmp_tmp_tmp_msg_0_1_0.type = 223U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.22150598726;
    tmp_tmp_tmp_msg_0_1_0.length = 0.862961052936;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.0744080517476;
    tmp_tmp_tmp_msg_0_1_0.direction = 170U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("QLCEXQVLIPZYLBDGUIRZHRFYVPHNHCLPBCRAH");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PathPoint tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.x = 0.33236051217;
    tmp_tmp_tmp_msg_0_1_1.y = 0.655207229673;
    tmp_tmp_tmp_msg_0_1_1.z = 0.93282491827;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TrexToken tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeline.assign("SGECFMXGUOOVNDDEFLAQIHRYCKBJQBSHCTQGDPSYFOSUBRPISIHXNFXXINGNJEFQPGYYZOEJZZTVQWAFBWNUDBXRPENCNTDYPSLQWO");
    tmp_tmp_msg_0_2.predicate.assign("XTRWXSDBCGAPHMMFGVUVIXWEIIVAJFKUHXGYURBHPEGDDOYOSHYTHEJNJBCQAOVKELYFBUNPDSCQXLZXQTVTBZBYQAYKKVOHGAVPJNLTRNBMJNSILRTFLDPZWSMNFJSWW");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.name.assign("GERABWAYUJMGPJ");
    tmp_tmp_tmp_msg_0_2_0.attr_type = 123U;
    tmp_tmp_tmp_msg_0_2_0.min.assign("YQCHRDEDBGZJIHNASGNYFVGLHUWQWWHLUUSYIPVPKUMZYJBDNVLRZNKMBAIVZPIKFERXOTUNYDQTVMQVLPPRQGCNSXOSGULEYBVABSHWDCFTGFJTKTEFABBXUWEXWNOQEAMICJ");
    tmp_tmp_tmp_msg_0_2_0.max.assign("SNEBTRRFXWYXMTPWXIQJCCYDIVHCUVLPKOLCBXVPVEIXFKJKGOLYFAGRFAPBSAHWESOBPUYFAGVEEUWBIVIKOEHMMEUDHBZVIDGUDKAXNCJCLFHBNONNWEMZCDBKRMTZMUGSNJZRMFQVLJQSFDPUJSTZXNOQWHTQCLIZNYWPKFAAMIDCRXYPKHWTNSAQILJEPZBRQOLYJSKQEQM");
    tmp_tmp_msg_0_2.attributes.push_back(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.5153044871);
    msg.setSource(43071U);
    msg.setSourceEntity(41U);
    msg.setDestination(29428U);
    msg.setDestinationEntity(187U);
    msg.command = 143U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EBKGSCWCQAAAMFVMCYKRWGOTEGLONLTJKGDAOUJEGZOHRJWGUMLNOQZULCPRNZLDEDZVYXUCDIVPTXIGAJTFMIWGHPXHWIVTWUSUMNWYLELRPADQIVSXURNYZSEWCZRZPFOMXZRQHIEYFIITKPJUOLAKEGLRSRKVBOBAYJHQPPNCAXDZNSJJEKDEBXMFJTPVKCNQYTBQHBDFIKMQRVJXLSMHFDABVQKBUYTNSCMIZGTYXYXQH");
    tmp_msg_0.description.assign("UBIVTRDHRGKUOILLYRGMWZUXGAHHOATFVBQCSKWXVEKQZRQXTMGHVBNTKODZDJOLWAMDMHQEJYSUSEQNDYPMYWUABFIGMYIAOSCHDXNEUVCTEWNLZRJVPBVGNZVFBAXMOGCTFJEUYPKNFPGOVFZBAJLUZCCWKJZLRCUSVEPXLZTAIDKNQWKHMXYHOIIWBQ");
    tmp_msg_0.vnamespace.assign("CEUVRGHQWBJKZUMPRVHKOGTECJQZUSOZXYQTSBLIHLLTDR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OLNVFKGIKQSMBUKRPRALTEYJULQMEVKCOJCPKCAYFSQTREGAXAHVZPSHFFPLXCXITBZSMTWRXDCAZDDEKOHORKQSFGHUJENHQZUQEYKLPYUYLCBAGWUSNLKFDQXENETMZSHWJDMDPIM");
    tmp_tmp_msg_0_0.value.assign("VSOIRBKPAIBIZZGZGQWOWVVTCQFRSNHTORWSELSBKRQRANMUBLTFZNHNPVZVJVRDNVUHUZMTWMLSJFYLUGBXWDFGGTNZHUMJUQOMAXDLYPKQZWKZQCUQDTEFPEGOENHSUKRLXFKWLEDGWRDHKXSYBCPIJXUOYQEAYCWBENDSXMCJTQJYCCOPSKMVHT");
    tmp_tmp_msg_0_0.type = 73U;
    tmp_tmp_msg_0_0.access = 49U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FMCDNJTJTFGTBCNRRDDNPFBOEAZJHOZOZLHHQSUGYAKWNTFXIEVOQKVFBZECYIGLRKXGTPYXKXWTSRWVQCDFIQUHNMECIQAKJVSRIBFRHLDVAKDWYZXWQJHEJGCSPVUWXYSOSIWNQOKBIRMCZINHUVXMDATTVHNKQEMDKWCZMGYSYDPARZXBUAPPEOMJUGQBJVDNGLGJLUWPOBBPOYATSVEAEFHHCQGN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YWHOEMOUKVEKMQCDEQUPDHYXFAXYJXMFA");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 28452U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.104308961772;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.573202350425;
    tmp_tmp_tmp_msg_0_1_0.z = 0.572312894065;
    tmp_tmp_tmp_msg_0_1_0.z_units = 213U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.266394534206;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.155975915555;
    tmp_tmp_tmp_msg_0_1_0.duration = 33632U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.502930247384;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 197U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.17298212469;
    tmp_tmp_tmp_msg_0_1_0.direction = 186U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TJMLZRFSOEQPXIOEMFMRRKYBHWVUJLYHUFEZSRPSWIXSDPGJKEYUKCUCFNUWIDDAXKVPNFWPMHUSYAIHBDACDUQEJPRSQLGYFUCKDGCFCACWJJGVBEERFDLBBRJIHYOPMLZQWDSZGOQPCZHOUVPXVIABYPQEG");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Reference tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.flags = 248U;
    IMC::DesiredSpeed tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.value = 0.705246133397;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.speed_units = 203U;
    tmp_tmp_tmp_msg_0_1_1.speed.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    IMC::DesiredZ tmp_tmp_tmp_tmp_msg_0_1_1_1;
    tmp_tmp_tmp_tmp_msg_0_1_1_1.value = 0.684063013829;
    tmp_tmp_tmp_tmp_msg_0_1_1_1.z_units = 165U;
    tmp_tmp_tmp_msg_0_1_1.z.set(tmp_tmp_tmp_tmp_msg_0_1_1_1);
    tmp_tmp_tmp_msg_0_1_1.lat = 0.17420293922;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.147435014912;
    tmp_tmp_tmp_msg_0_1_1.radius = 0.210144176114;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::CacheControl tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 142U;
    tmp_tmp_tmp_msg_0_1_2.snapshot.assign("FIGXBFZXKBIVSP");
    IMC::RemoteActions tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.actions.assign("BZVFHRWXJPRDBVJL");
    tmp_tmp_tmp_msg_0_1_2.message.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::ImageTracking tmp_tmp_msg_0_2;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.871239732582);
    msg.setSource(11534U);
    msg.setSourceEntity(140U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(78U);
    msg.command = 64U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AOHKNUVHICSZLBNRBURGBCAQJVWXXCDBZGKTYVVS");
    tmp_msg_0.description.assign("NKKSXNIWRVUEROYCYQEXGQPMHULHICFXPSPHAMPPWDNMCVNDPGLDNRAFULBSGAAFBRXZZYJDEUOFRAEMSZLWITKMMPVKMGUXDDGOEYDCGMUFITBUSUYBYHGTASCEXWBNJOFLDKAUTCVOYFHJUZOPWBEYOHEIQRJJQFSXNOCAKDK");
    tmp_msg_0.vnamespace.assign("JFNHQTUAENV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LLJRNGWXLUNNKIRDEZPATMSDVPFRQGRKRJMTYBJCWAKPTXEHLCZBWMMOXTFEEFZZOAYIBC");
    tmp_tmp_msg_0_0.value.assign("UIDGPIXLRVPWLIWDVRYEKKQEVCKAKHFACJSALDTQNKYRSBIQCWEJWVNIPOYJDRASPBMMNYGQLHSKFEZQWERDXAQTSHHTEVQFMXVPSLGTPXHPCZWJVLNEQAERCZOUFZZBRNZEHOWZFXFGQKTXUVLBLCFJDPWTVUDVBHONAAMJXZCRUSMYYWJGMDUDMOITSNGXNTGCMHYFIJTLQURXHUYC");
    tmp_tmp_msg_0_0.type = 94U;
    tmp_tmp_msg_0_0.access = 198U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WVWECOVNLMPJMHKQXAMJTLZUPHCHYTKOBSOBKRRVGY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MCPSVRKAPLZIONAJHCYSSTBGQBWBPNUQMMAQEOITBNEXCRRRIIMYDIVTVWOOZZYDZQCXD");
    tmp_tmp_msg_0_1.dest_man.assign("RNXCSICVUBJWVTQLNPTQNJFAMWSICTKPMIKYRGUXKCRSYOJENHFKDDIJTJDLZBZPLOQMGEWZEHJHDTEZTGJBANEMQIURXBDUFPWFZHRXBUFFWKCYKVMRSBOZSHIBODDZUVAEQNLXMQQPYKRPVJNOYALFIENQLDXMNKBFCQXOGCRYAGZLLJJCBKTETYRIVAPWOOWSWLLWSZFIUEGYCYPHTUZRADGOXUAFGDGVKEPN");
    tmp_tmp_msg_0_1.conditions.assign("QUQZIZVKAYCGVQBBCBGZHYWKBFVINYYEAR");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::SessionStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sessid = 3240521231U;
    tmp_tmp_msg_0_2.status = 159U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::RelativeHumidity tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.590378880258;
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
    msg.setTimeStamp(0.379312311624);
    msg.setSource(55414U);
    msg.setSourceEntity(145U);
    msg.setDestination(16207U);
    msg.setDestinationEntity(216U);
    msg.state = 173U;
    msg.plan_id.assign("TWDCXZTCZQLFYRMUAQLHSJBIDRFUDVUZHTSWUMWHBMLMKNMEVVCEDRSVMQAFCMHWXLNUJFBJPRUETG");
    msg.comm_level = 150U;

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
    msg.setTimeStamp(0.182633695541);
    msg.setSource(13741U);
    msg.setSourceEntity(154U);
    msg.setDestination(41380U);
    msg.setDestinationEntity(4U);
    msg.state = 152U;
    msg.plan_id.assign("BLSUHQOSOAPVVWPXXIYCBCVWHUNAVQWROALKCCBYLZTKKJPYQVMRGUIIIYMNAYMPVYIFIFDQFBTUSAUFHKXX");
    msg.comm_level = 206U;

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
    msg.setTimeStamp(0.820347673502);
    msg.setSource(53619U);
    msg.setSourceEntity(106U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(125U);
    msg.state = 105U;
    msg.plan_id.assign("RGNMYCZSGBNJWYLIJKLWBCEVWXEYCPNJDGKBXUQRWHVRLOPYTEFSFSSJRHQLAAPMATPPDGMSGBZZXQYHJRYVVCPMRSTKXKPOQJCHTS");
    msg.comm_level = 75U;

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
    msg.setTimeStamp(0.290858993611);
    msg.setSource(36364U);
    msg.setSourceEntity(208U);
    msg.setDestination(34790U);
    msg.setDestinationEntity(7U);
    msg.type = 21U;
    msg.op = 181U;
    msg.request_id = 30196U;
    msg.plan_id.assign("OYVQOSMXGSAYHPQ");
    IMC::GetOperationalLimits tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("AQHAWQAZLXXBJZWFRWRWBONDXGULAOQZGVJPSMHIBUFC");

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
    msg.setTimeStamp(0.852551021485);
    msg.setSource(15367U);
    msg.setSourceEntity(158U);
    msg.setDestination(45650U);
    msg.setDestinationEntity(7U);
    msg.type = 121U;
    msg.op = 1U;
    msg.request_id = 37658U;
    msg.plan_id.assign("YZOQOBLWPROSYREVZKTKRMZWFJWISYHEYTPTCYLXNMVLQPLHBSXRDECIVOBJRMHAITBSAJVGMTIKBKHLZRTGAXNOPNEXXCMCQSRPVHUKSAUQFANQCXYGZGEGMSLMQQXSONWODDBGDDOFVBBFGPLIJPWUNDENWKKDJYATHMZLOHFBFIUUNYBQGAXTZVPWKESFJANCJHYFCICZHIGKUJWGITSKRUALRMMZXCUCDWEQYXVPWTDZRDAF");
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.437886081459;
    tmp_msg_0.y = 0.280409951922;
    tmp_msg_0.z = 0.838985163315;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WUEWHBQTLJTXKCMRHMCSVIWKIHOHQMKJULOIBTFQTGQEEICFTFEQJCJOEKGJREXLCNBEWKRQIVSOFNBPLIHYNVSAYXKUCHADZOBXRFJFKARFSAPDJWGISNYQJHZFGMYGMAWJGLEDVAPAPFTYNBRLQHNRSPZNWBESKDZWNNNUOPOTUUUGDDTTLTVMKGSXVQBYZJDAUYLSEZGULYLDPPDKIDMZVHRMBSPZUVFMRZIWXOVR");

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
    msg.setTimeStamp(0.231040447843);
    msg.setSource(65491U);
    msg.setSourceEntity(137U);
    msg.setDestination(1029U);
    msg.setDestinationEntity(238U);
    msg.type = 192U;
    msg.op = 34U;
    msg.request_id = 59578U;
    msg.plan_id.assign("PSQXMYNVWKISHOXCSUAWEZDPKFUACKQRDRHIFUKMRRTVUZNSOWBTPVMHBGSMNIEYUSTPOQLARPSFUIQHZBDAHVJPEVICOIDDLHKVWMGGMHWBXFNJXTSFRCVQLQLICXYDAJBDLTUQOAMBUHH");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("ORXCMZZSUCIYLAGOXGIPCQQBWUOKKSVUOJNZHJFLEFYRADYIFPTAMMGYGDVLDVRJEZIFUMBKVKFTOHOQQAQWSGLUHUMDHQAMZGOEPAXUECUHXMJSMNRXVGTEXIJTXVXQLHTES");
    tmp_msg_0.max_speed = 0.116234586569;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.lat = 0.228680883156;
    tmp_msg_0.lon = 0.888358782394;
    tmp_msg_0.z = 0.463250760742;
    tmp_msg_0.z_units = 164U;
    tmp_msg_0.custom.assign("LOQCCMHROWOVZAOGDKJQCYVQHCHFGKYQADNZZUAWUDEOYXEOSKGESDLQWXLLTITQASBBXRJTAPJNNGRUSGSLLBMBZTWSCYNYXVBEBMCJEKFOPQRXRRAXIVIOWPRVPSIUIMHIL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YZFIOQVWVZLXDJAHTGTPCYFWYGVDHPIVFIKWNBANVAUNZSYPTRWLNYKOHGXBJPONGRRWLSOGRMLSUZWJAQCKENSKSYZHINQPCXJCQMXDRCOFGUOUMUBGQUHUNCYKSYUTMXEUVLVARALQIYBIDIHNZGNRKSRIYFDBUHVZPDGDAWTPIPABXBTCFDMMEZAKQSWSPLQO");

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
    msg.setTimeStamp(0.558401568321);
    msg.setSource(37204U);
    msg.setSourceEntity(50U);
    msg.setDestination(25443U);
    msg.setDestinationEntity(228U);
    msg.plan_count = 56953U;
    msg.plan_size = 2126841155U;
    msg.change_time = 0.630419100811;
    msg.change_sid = 39340U;
    msg.change_sname.assign("IJHLNOOZDADLJYLQYDVPHRPSMAEHEJWNPKAKGSWFOTTZNTCQIILYACSLYBMYLCFFNBPGZPJDXMIGDOIWGPAYSRASEUZTHBGOVFFNILMWMGFNYYJHSNRJTYQAWOURBHITEHRCRCWNERFGCUGHQIJJECEBMWPZCYXWWQBVZZSPNPTVVQDRUKXKLGKKUDAXDMQTMAXUFUGFMKVBFXCXVXHPRRXKAZNILJI");
    const char tmp_msg_0[] = {-57, 6, -115, -121, -62, -100, 25, -51, 96, -23, 35, -15, -106, -99, 116, -98, -27, -54, -66, -85, 100, 125, 108, 87, -96, -35, 60, 38, 94, 32, -9, -34, -125, -118, 55, 38, -93, -121, 123, 89, -74, -14, -100, -40, 80, -67, -86, 6, -32, -46, -62, 59, 14, 74, 107, -53, -57, -90, -60, 121, 81, 17, -126, 8, -52, 105, -111, -51, 43, 76, 37, 56, 15, 5, -72, -123, -71, -120, -14, 112, 122, -95, -109, 9, -27, -88, 87, 93, 53, -78, 53, 88, -98, -27, -103, 108, -87, 122, 5, -60, 79, 65, -107, 75, -82, -88, -3, 54, -95, 45, -44, -116, -39, -20, -17, 113, 70, 77, 66, 71, 75, -118, -84, 78, -23, -115, 43, -38, -52, 9, -76, 96, -118, -20, 92, 2, -18, -22, -77, -18, 113, -72, 32, -104, -111, 93, -87, 9, -17, -122, 10, 38};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("LXURTWJZZNFVRCMMRGIZCPPDWUFNERRUYVWUBLKSAKDNTDCVJSYAOQUGOXBLOXMTGJOZXKVMJRTYBJETVABNZIMLUYAHYWUWKROESMGIEFRCKQOKSWCZXCPFIAVMNIFNKGDPXGXHMUPNGZABSUTIGDIEBFEOOPPKQKSUBAXDMRWPEBDHFLDHYSXFQCENJJLDAPQTOVZ");
    tmp_msg_1.plan_size = 17377U;
    tmp_msg_1.change_time = 0.298004544314;
    tmp_msg_1.change_sid = 12398U;
    tmp_msg_1.change_sname.assign("DRGPBUKMSQJXZNJOIZBIXENZPOBSUQREWVBNYXRLZFTMGIWAKHXR");
    const char tmp_tmp_msg_1_0[] = {-66, -66, -38, -87, -40, -52, -124, 73, 15, 86, -107, -108, 0, -114, 117, -82, 105, -113, -7, -58, 125, 4, -86, -91, -122, -43, -43, 111, 81, 86, 65, -46, 0, -114, 105, 88, -60, -85, -17, 42, 38, -62, 78, 28, 98, -72, -50, 77, -5, -20, 33, -35, -71, -69, -39, -92, -104, -104, -34, 20, -71, -1, -82, 105, 3, -46, -49, 8, 112, -57, 78, -65, -45, 113, 9, -42, -122, -127, -109, -89, -111, -49, -17, -104, 78, 53, 80, 52, -18, 51, -87, -40, 20, 45, 35, -65, -108, 95, -29, 126, 85, 44, -44, -16, -14, 18, 18, -20, 114, 69, -66, 105, -121, -49, 114, -15};
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
    msg.setTimeStamp(0.836013532271);
    msg.setSource(50686U);
    msg.setSourceEntity(170U);
    msg.setDestination(38035U);
    msg.setDestinationEntity(223U);
    msg.plan_count = 40420U;
    msg.plan_size = 1009266553U;
    msg.change_time = 0.286399616876;
    msg.change_sid = 9238U;
    msg.change_sname.assign("CJAMGJYRFMVUHXVYITZEILAAVUTPBNRDJUBMZGEAYNHQOHLZFRYRNKFPKVZWLAKDKSDNXIXCABFNIOTIHWTCXZJIQVXCFPYGERBWGHMQSOBQOWKUPGOENRLLVOHLLNDLYMZ");
    const char tmp_msg_0[] = {40, -81, -94, -90, 9, 36, 8, 30, 81, 45, 86, -1, -112, -91, -126, -89, 15, 99, -69, -86, 22, -118, 84, 34, -72, -31, -41, 48, 120, 86, -52, 48, -49, -77, 34, -51, 28, -94, 19, 0, 84, 92, -71, -86, -58, -96, -51, 72, 73, -6, 3, 42, -14, 16, -8, -9, 91, -60, 67, -12, -112, -111, 82, -77, 37, -96, -22, -44, 98, 47, -54, 42, -84, 98, -32, -45, -61, 93, 31, -67, -16, 126, -98, 77, -65, 89, -31, 72, 98, -102, -78, 11, -45, 64, 39, -42, 69, 83, -18, 106, 43, -39, -11, -5, 54, 75, -27, -72, -96, -5, 60, 35, 3, -33, -81, 62, -50, 55, -116, -14, -86, 90, 93, -80, -117, -104, 88, -8, 38, 31, -21, 71, -50, -119, -29, -112, 97, 46, 17, 30, 35, -82, 82, -35, -117, 80, -77, 42, -114, 29, -117, 43, 100, 17, -125, 67, 41, 117, -54, -79, 24, -35, -89, 21, -27, -73, 67, 76, 73, -84, -125, -111, 40, -110, 85, 92, -59, -1, -25, -60, 29, -49, -50, 112, 88, -123};
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
    msg.setTimeStamp(0.347367436233);
    msg.setSource(45354U);
    msg.setSourceEntity(254U);
    msg.setDestination(20268U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 44175U;
    msg.plan_size = 710048655U;
    msg.change_time = 0.624657304205;
    msg.change_sid = 50671U;
    msg.change_sname.assign("BKAFLOSKZWJTNZRMQNZIKJTWKZHOALJXETCBXBEGLBHGLNVIDLUFLDLMSWOBAGYVJMQPYPQXHVWFGZDCDHIVPAKREUJIIMNEZAYCRPXJFTLMRRGUVWADXBUBEOEYVOMZIQYEWPPFUXVGQNXJPFXTBEGOIRCDMKUAQ");
    const char tmp_msg_0[] = {-97, -4, -72, -74, -85, 56, 104, 107, 122, -22, 122, -57, -39, -97, -83, 24, 40, -125, 119, -96, -18, 37, 50, -56, 50, -21, 5, 101, -29, 34, 31, 97, -125, 36, -102, -84, 106, 126, -3, -29, -26, -28, -94, -79, 21, 83, -44, 29, 23, 69, 113, 115, -117, -70, -46, 2, 49, 49, -66, 16, 24, -101, -110, -50, -47, -127, 101, 20, 125, 13, -31, 52, -10, -16, 54, -4, 10, -106, -21, -16, -117, -99, 113, -6, 80, -64, 20, -70, -28, 40, 28, -7, -76, 17, 82, -84, 7, 55, 8, -77, 73, 75, 86, -112, -109, -65, 5, 14, 13, -122, -36, -64, -82, 71, 98, -73, 39, 91, -106, -102, -114, 25, -26, -22, 79, -40, -83, -31, -30};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WMDCZCAPBKMARDISQULWKFYFWBJWGVUXCEGGLZYQYRPHMAAVMTIETQSOOLNFOKNZFIJSFDOTD");
    tmp_msg_1.plan_size = 10901U;
    tmp_msg_1.change_time = 0.985138976606;
    tmp_msg_1.change_sid = 28018U;
    tmp_msg_1.change_sname.assign("AMHVHOBKGDSMXAVBQTTJUBUQLCOKCVRLOWPNXUTRBRXGYDSQMJSVGHLBKWFEFTQODXNEBOXGZJQFNZOGKPJBCVPFEODISWLJVISFAYHKVCTMLLQNPZEWRWMASJIIXFZZEFHRRTNYNPGWRTWYIPXYSKVUEDUFTNICWUIMZJPRGXUKPNQHDMFBQYECICKCEZSJDNVQOMVXEDUNBLHUWMDSQKAZJCGLPHJUOPLBAYTSAYKELFIXMIHOYGAA");
    const char tmp_tmp_msg_1_0[] = {-30, 123, 41, -25, -92, -75, -34, 69, -69, -7, -1, -8, -58, -1, -99, 122, -127, -90, 17, -4, 120, -8, 73, -44, 104, 49, -7, 30, -125, -49, 36, 76, -26, -89, -105, 28, 13, -36, -110, 2, 82, 48, 103, 4, 44, 70, 103, -113, -53, 80, -106, 118, -121, -112, -43, 21, -3, 89, 123, 2, -81, 17, -81, 34, 69, -69, -47, -74, 70, -30, 23, 41, 45, -1, 60, 64, -115, -45, 113, 8, -87, 79, 126, -58, -10, -74, -87, -122, 48, -113, -33, -8, -89, 57, 42, 26, 41, -42, -69, -44, 58, -57, -60, -7, -19, 112, -105, -51, 74, -100, 111, -89, -47, -8, -98, -116, 36, 125, -98, 16, 81, 18, 8, 108, 90, -65, -42, 39, -20, -91, -55, -28, 40, -58, -79, 67, 119, -77, -72, -32, 73, -32, -60, -60, -122, 112, 43};
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
    msg.setTimeStamp(0.888926915719);
    msg.setSource(46584U);
    msg.setSourceEntity(250U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(201U);
    msg.plan_id.assign("PZHDIQQIALLYJWCXM");
    msg.plan_size = 25198U;
    msg.change_time = 0.595282380681;
    msg.change_sid = 65001U;
    msg.change_sname.assign("ZNYIHOGACEBFDOGPVCWHFJAIKVWIQHPYDBQUUMNJTUTVDFRFLJCRPTKNWMRVVOPFWYESZZCKLTBFHTQYAYILDVWNSRAFEYPPGHJMAJERZVUOQXZBOVMQNPLYHCKMQIXWARWANXMJUYLOSLHDTXVEMO");
    const char tmp_msg_0[] = {-28, 87, 101, -97, 89, -34, 56, 4, 75, 61, -59, -71, -83, 95, -74, -30, -61, 104, -72, -55, -21, -24, -22, -9, -56, -54, 15, -82, 90, 25, 6, 79, 54, 45, -67, 46, 44, 16, -112, 30, -69, -120, 118, 85, -91, 0, -42, -113, -63, 80, 53, -63, 17, 82, 21, -65, 90, 18, -125, 56, 110, -120, -64, 103, -34, 125, -106, -114, 95, 96, -4, -28, 29, -43, 18, 36, 12, -88, 30, 75, 99, 46, 125, -18, 11, -25, 117, -89, 53, -81, 27, 72, 126, -2, 71, -105, -82, 56, 47, 18, 29, -3, -124, 37, 65, -90, 97, -84, -99, 68, 98};
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
    msg.setTimeStamp(0.0315585933542);
    msg.setSource(20706U);
    msg.setSourceEntity(133U);
    msg.setDestination(38490U);
    msg.setDestinationEntity(5U);
    msg.plan_id.assign("LPPSSHJBUGQXBVATHUGLSMOASWSCOPIFDMRJGOYIHRECEMREWLNKN");
    msg.plan_size = 28860U;
    msg.change_time = 0.608653009589;
    msg.change_sid = 60927U;
    msg.change_sname.assign("HCLRFZAVURQUNBKLNK");
    const char tmp_msg_0[] = {32, 0, 3, 17, -81, -1, 56, 107, 118, -77, 5, -99, -94, -52, -35, 5, 93, -97, -61, 110, 91, -128, -41, 52, 66, 104, 7, -38, -10, -114, 4, 45, -25, -101, -50, -33, -23, 4, -40, 88, -5, 62, 28, -79, 74, 95, 77, -44, -86, -43, -119, -88, -71, -51, 28, 67, 55, 70, -96, 95, 122, -40, 109, -97, 1, -10, -29, 54, -37, -34, -59, 120, 85, 90, 2, -8, -116, 72, 37, -126, -42, -28, 45, -53, -69, -30, -74, -125, 99, -37, -29, -61, 76, 81, 36, -117, -71, 70, -126, -77, -28, 92, -57, -13, 57, -118, 97, 75, 121, 0, 61, -47, 0, 14, 115, 122, 19, -65, -15, -30, -41, -95, -108, -55, 85, 51, -28, 20, 53, -1, 20, 94, 102, -30, 113, -105, -14, -99, -26, 108, -113, 0, -52, 121, 47, -52, -7, 94, -125, -63, 96, -99, -45, -89, 17, 114, -78, 113, 107, -123, -113, 92, -91, -10, -112, -61, 57, 123, -66, 119, -76, 57, -12, 55, -105, -116, -119, 109, 123, -41, -78, 36, 76, 126, 16, 47, -92, -93, -102, 113, 30, 45, 25, 114, 27, 16, 13, -22, 37, -117, -81, 89, 24, -92, 10, 90, 86, 115, 83, 21, 62, -33, 49, 30, -1, 72, -86, -53, -125, 76, 82, 33, 5, 84, 28, 123, 53, 87, -116, 77, 74, -79, 9, -47, 45, 39, -50, 88, 17, -95, -112, 48, -125, -114};
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
    msg.setTimeStamp(0.994853611664);
    msg.setSource(38873U);
    msg.setSourceEntity(143U);
    msg.setDestination(19128U);
    msg.setDestinationEntity(165U);
    msg.plan_id.assign("BZLBSLQWNMFAAKJBRHMKYKZQMTPZXTPWDSRDAMUALCWXZIRJJISASOPDNWEHNZJFRUITHEILXGVVOHODCDCPERZYQWFKRWDCRCXPGGEVCNEIRMLBMWULQSNVKHHGDRSGPHNSIOHEBAXNVYYBLPUYMQQQYUXD");
    msg.plan_size = 12264U;
    msg.change_time = 0.36726598993;
    msg.change_sid = 6896U;
    msg.change_sname.assign("JMSHAOXQQPGZOCEJOSZHKIUGLARRAPIHRLOXI");
    const char tmp_msg_0[] = {-122, -95, 73, -122, -122, -106, 18, 67, -93, -68, 103, -21, 15, -125, 30, 10, -25, 125, 25, 122, -100, 96, 115, -24, -1, 16, 115, -21, -1, -78, 33, 76, 13, -49, 8, 72, -122, 61, 119, -68, -71, -51, 10, -82, -22, 67, 63, 19, -99, 56, -115, 20, -55, -30, -70, 116, -36, -56, 33, -95, -44, 109, 105, 35, 54, 14, -40, 68, 94, -63, -98, 58, -103, 115, -47, 92, 49, -125, 125, 70, -78, 87, 96, -123, 56, -58, 55, -35, -103, 56, -37, -35, -7, 96, 38, -111, 71, -31, 54, 98, 20, 71, 57, -61, 112, 44, 107, 84, 38, -30, -97, -37, -95, 1, 84, 53, 62, -103, 70, 17, -26, -45, -48, -28, -29, -108, -119};
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
    msg.setTimeStamp(0.0921842879653);
    msg.setSource(61789U);
    msg.setSourceEntity(230U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(52U);
    msg.type = 127U;
    msg.op = 135U;
    msg.request_id = 64471U;
    msg.plan_id.assign("NLMXKOHNAMCCZRBERRORJVHDTWGZJIDOMVZJACHDVFYIGSQOZIUSKVWTNTQCXTWFRLOIKMNFFPYFLHNMIAUMTNQPUXYSCLEEGFYLPSPKOSBRADEHZWGOYJLNGLNGDIUYVUEZXYXQJDQTEKAQIADUCA");
    msg.flags = 45944U;
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("ENTWHJVDQL");
    tmp_msg_0.rssi = 0.510228390663;
    tmp_msg_0.integrity = 59249U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QDXNOZYJMVJFCZLJGCEHEMLARGVTNEQIRLNJFUVEQZJBNHGCWXKJZRCUVQHZDRZVFUDWLLJUWXBPXFWITQSLCNURGCQOLYFZRJQYCYIQOKDNAMBNLVZZPPIVOFOOEXAWQIHSTPTPHYGUOTMGRIKKUAMDMILXBGIWPOXRGKMTTKMYDLSWCUSHDDKFXAHDVYOWYUKZRBEQYWHYI");

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
    msg.setTimeStamp(0.986521549129);
    msg.setSource(9420U);
    msg.setSourceEntity(216U);
    msg.setDestination(11461U);
    msg.setDestinationEntity(74U);
    msg.type = 216U;
    msg.op = 202U;
    msg.request_id = 15158U;
    msg.plan_id.assign("ZPGKZTJCEMSSKEIPQUZIFCQOUTRRDKDXNIWLQXKDLYJTVVOWCHALLJJGBEOKTFQQGEGBXUUZCKDIHGGRWYOKZFAALGWPMJRTTGLNHMAVFRZUIZWRZXTXAITNSBDSCLUJVIRASOZDANFAVEDVEPCUMNMIMKCBFSQYWIYCTBQYPHHPBOUCPX");
    msg.flags = 64858U;
    IMC::HistoricEvent tmp_msg_0;
    tmp_msg_0.text.assign("PTAAOQIBYBIYTURSZBFRYUJWRKCLBZMCAPJSBXDHNWINCVDNPTUXLVYHMPLORGGTGEFVETZYIZKDDMGWFGQSFLSHAIIR");
    tmp_msg_0.type = 186U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EFCZBQUGJRNIAPZZIBSCPEBOVWOMILTDPISLSMYEQOYWNCEUELDPDYHGVUEGNAQWVWOMSASCGYFDNFGPTTKLCCCQSEDJYWQPWLALILUKIQSDTXJXVMPCOIMOIQXYZDVPXXYJGUJGHHDXBFKRTYMVOUVBKQYSXKUNHRAZNHFZUTNGTQJMKIDOMTERFIRQBBJKPLKHRMJMATBVLGSWEERJFZAHZVZVXXHRURXNOWNFKCNLWHSYG");

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
    msg.setTimeStamp(0.702494097893);
    msg.setSource(3361U);
    msg.setSourceEntity(254U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(3U);
    msg.type = 203U;
    msg.op = 236U;
    msg.request_id = 54405U;
    msg.plan_id.assign("BMPLEYVCJCYGFJLUBWIPMRMRFEJZBSGCLCGNTKIUAOJVLDYRDVVWGVRVMP");
    msg.flags = 48654U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.956026550942;
    tmp_msg_0.speed = 0.556216734005;
    tmp_msg_0.turbulence = 0.136355307845;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BHCBPFUJIUPSKMXPTOMFCZ");

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
    msg.setTimeStamp(0.635432096836);
    msg.setSource(57824U);
    msg.setSourceEntity(156U);
    msg.setDestination(35443U);
    msg.setDestinationEntity(91U);
    msg.state = 208U;
    msg.plan_id.assign("NDQADDCQVICVXXUGIVTHDUMPQDXIXTUYJZHERSEKAUGXZPJSXBRTVJSFPSNLDIALBGVGJOCUKYWCNZAUEVJNFNJEWKJUTTFHSCIBMMVOEGZH");
    msg.plan_eta = 1015300183;
    msg.plan_progress = 0.797192164237;
    msg.man_id.assign("JZVFMGVORLCUNSSJRKRMWMKDUJTMHKAT");
    msg.man_type = 32449U;
    msg.man_eta = -1786774114;
    msg.last_outcome = 140U;

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
    msg.setTimeStamp(0.458164074609);
    msg.setSource(43604U);
    msg.setSourceEntity(128U);
    msg.setDestination(4303U);
    msg.setDestinationEntity(181U);
    msg.state = 55U;
    msg.plan_id.assign("ZYWZXESYMGGPPTLBWSQYOQHDLNBZQEDXHEZJXOVVGJWMAFTGUKQEIPFOMMHXHETXBXPWXKMWRHEFRJNPRNXNDIAZFEZKFQZYNAAOFNPUDVKWIGJDMBQXRDZLYSBBCUQCOAVTHZZRDUUDEKLVFOTCJRYGVBMKSIJASNUTKSBPCXWYFIGYKCFMLPOQNH");
    msg.plan_eta = -812281951;
    msg.plan_progress = 0.819348239998;
    msg.man_id.assign("TRSTEZFCSDVGLNVYQWVNNTKOMQFBLLHAMHHM");
    msg.man_type = 12000U;
    msg.man_eta = -696360291;
    msg.last_outcome = 129U;

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
    msg.setTimeStamp(0.813543059229);
    msg.setSource(60693U);
    msg.setSourceEntity(252U);
    msg.setDestination(43344U);
    msg.setDestinationEntity(97U);
    msg.state = 51U;
    msg.plan_id.assign("NWUBYROHSAFNSVGHKYQLDMHOJTFXJEWNDYMDMHYPEJIBQBGOPCZWLEGTWOABUCPGZXDPYDVLOFYENHXIJLDKAVZETLKRNEBKFQQBLPKNBPQIJSRXCFESJTKRPWUJQLVIODULAVYMRIPQTOTBUTSMGEVKJVXEXZNNBTAMMMCIIYBVZQSNDGHWYIUUCJGKNZHAZRCFFWEMKVVFSTGGCPCXADUTHFOAOXHRHYI");
    msg.plan_eta = -1604045167;
    msg.plan_progress = 0.0737200537573;
    msg.man_id.assign("OIVLLCRDEFFDBDYCMYYPAKRTFSOURJJWIMQJHZTHDUVICWMSDJBFBWDBJBLCNHWRTXVSGKPQTUZKYQALNPJRRAVWFCXBRR");
    msg.man_type = 46110U;
    msg.man_eta = 480993781;
    msg.last_outcome = 236U;

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
    msg.setTimeStamp(0.290032380002);
    msg.setSource(13719U);
    msg.setSourceEntity(6U);
    msg.setDestination(57795U);
    msg.setDestinationEntity(6U);
    msg.name.assign("ENPRBXCPXYQVXEPREF");
    msg.value.assign("DCLMITGGTGCRCTZYKPMXQALAKIDXYTAJDAOMHJGGMZLHLTNKWMFPFUODVGYTBRQNFWORJZYTEWKASIMCXARXGNWMYFBSBFTJBFLXZINDBSEWHSUENUCPLSZEPKDRJVJDNZVPJCYRQIAVRQKNVYSXENLESVRAPKCOFDUWQPSVTIRRNSZBCZLBNEZMEBWEQXMXVFYLPVTY");
    msg.type = 60U;
    msg.access = 92U;

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
    msg.setTimeStamp(0.201875181619);
    msg.setSource(57184U);
    msg.setSourceEntity(234U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(216U);
    msg.name.assign("TEAMKDKIHFVQICUB");
    msg.value.assign("PQIBGZGOEJHAUZBUGJDOCUCZCNTMFFDVQVYFOFLULJHAEJWBBONWMXPYGTGRJAUAQERYDBNKREIDXUOHMXGFPAURDLEGAJYLKMVMYCCRRALLRUHQLBEHPZIJDVCGTRWEKHNINVQZZPTCVVUQQTNHTSGLSKBSKKWWYCBWPCXUSJEYNSHIXBDZPISYSXRZDFMINLCQSFXLQBWJ");
    msg.type = 9U;
    msg.access = 74U;

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
    msg.setTimeStamp(0.992856192206);
    msg.setSource(25343U);
    msg.setSourceEntity(197U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(157U);
    msg.name.assign("HVDQXYAQRIZGKZOKKACZGQDXRXJDTOPRBQETISWKTKWHZJTCVYAYJITSYIEXEKHDLIULNSQKZZSFIKTPPOAHNUKMODCSUBBVMYWADCVTEGRHPRFWCM");
    msg.value.assign("QAJBNDPOWCLMUHMOHSMGPWMKIMFVYVOHIPJGKNGTWCHTWXKAQJCKOTHDPGUALVNEIKAWDVWYJQNUNODOXAZLIXANFUQKFPBSZUSSUCNQJLSHMNSVWDMYYIRDZFZGFDXXJIYUBOHHTHGCSRIORPZHBSFJEEBQQTCQIRUDMZTFYLKLPTNJBE");
    msg.type = 198U;
    msg.access = 23U;

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
    msg.setTimeStamp(0.134086946557);
    msg.setSource(28452U);
    msg.setSourceEntity(242U);
    msg.setDestination(16515U);
    msg.setDestinationEntity(90U);
    msg.cmd = 155U;
    msg.op = 177U;
    msg.plan_id.assign("PIDECQBHRUHMVTXFNNLVURGNFCKYOMZCUAZHIDRDZHVBPNVWAAEXGMKWKQ");
    msg.params.assign("DDQDVQRVVWCMEQIWPXFJOEQOBKOWWLSBRIQTPGMWTHQX");

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
    msg.setTimeStamp(0.360065061747);
    msg.setSource(19728U);
    msg.setSourceEntity(13U);
    msg.setDestination(2578U);
    msg.setDestinationEntity(132U);
    msg.cmd = 6U;
    msg.op = 209U;
    msg.plan_id.assign("XQGXMDOVHLTIKOCONKDLIQJFUJB");
    msg.params.assign("FQGMOSVOJPTZWQQXSNDBFESZIYLFSAJGEQNEZWSUOVUEDZMPZAJTCVIBLFPCAKCSUPOJUYNHFRKAUOZSEYXQONNQTCGPCGYQMHQGZWAZHXUPDLLHXRAYDIBVMGMFDXWGQOVSWRLJLCZEGYWKWIIMVTMFPIVGYOARNJNMRNELIBQDYRGJARIPTKVLMKEPTSRBFCKVXHXRJTHLCOFUTWBBXAAKIDUTYWOUUSMXCKKHDXJEPJH");

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
    msg.setTimeStamp(0.0213802573691);
    msg.setSource(53320U);
    msg.setSourceEntity(71U);
    msg.setDestination(59720U);
    msg.setDestinationEntity(174U);
    msg.cmd = 199U;
    msg.op = 17U;
    msg.plan_id.assign("DSDKYFSMYXGMBQIIKSLAWTGJGSVPRUOVZTXOQURXHSUMUADMQZIABTHYXFTPDNBEIBAYMZEOXQPCTWBRTUMRLJGLKHVAVYNAJQYKPNHBJI");
    msg.params.assign("YZFQRYYNLBRVYSNGYUPJWPGQKYHHVRAFNWEUZPDNXFRDAHCHC");

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
    msg.setTimeStamp(0.231386354691);
    msg.setSource(19392U);
    msg.setSourceEntity(54U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(101U);
    msg.group_name.assign("VVRAYNBCGYCPXIPFTUEVSFKBQIAEZISGUFLHCWZRLWEYLDVFWLYGKVGKTFOYVYWFPDZNRROTEYNBMPHSHSJZJLPCIHRHJZMQVMMGQXLRFEJZQOZHNKQKHAETKOTBQEOCBMJAAGTQFCOUXXSTCUOERSWLUORABEAEXVHXGQJ");
    msg.op = 219U;
    msg.lat = 0.400089916725;
    msg.lon = 0.0168969024648;
    msg.height = 0.348206080933;
    msg.x = 0.810372433103;
    msg.y = 0.385536578256;
    msg.z = 0.49193354875;
    msg.phi = 0.288167500617;
    msg.theta = 0.144410599445;
    msg.psi = 0.18160263271;
    msg.vx = 0.173783679887;
    msg.vy = 0.856135262183;
    msg.vz = 0.694825727276;
    msg.p = 0.772542100861;
    msg.q = 0.73144307143;
    msg.r = 0.472391789815;
    msg.svx = 0.589589917368;
    msg.svy = 0.20840119074;
    msg.svz = 0.274064447722;

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
    msg.setTimeStamp(0.518347818258);
    msg.setSource(45526U);
    msg.setSourceEntity(45U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("QZSHDNMDJZZKFHEDFXAOXKBLOJFDCWNBGVNYNGAHPTRYHRSYIFPNNXZTMZFEPPAGVBFFWPMADYFQEBSQDODQGWEWEEWQRACJGZURCEMSWQDLXSKAITOTJPPVYYOZLNAVURBSIPUJFZKOHYZBJASHLHBJGKVKMYHNRGXIVBNLSVIVGIUMTMWFXCJLUUDTSAUQVSIECJKXHUGDPXECIXBTWKCMMHREJPXRCGQCQLYCBIOKLRURNYLTUWLVOKO");
    msg.op = 174U;
    msg.lat = 0.658158249651;
    msg.lon = 0.988168950583;
    msg.height = 0.940352495874;
    msg.x = 0.743554705411;
    msg.y = 0.110842113236;
    msg.z = 0.00369382298522;
    msg.phi = 0.2017032608;
    msg.theta = 0.968485654077;
    msg.psi = 0.899912823309;
    msg.vx = 0.734524077436;
    msg.vy = 0.428757571276;
    msg.vz = 0.974193474899;
    msg.p = 0.514578635458;
    msg.q = 0.225217385782;
    msg.r = 0.584481435981;
    msg.svx = 0.462944082607;
    msg.svy = 0.987601979417;
    msg.svz = 0.975339290346;

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
    msg.setTimeStamp(0.532577844141);
    msg.setSource(9777U);
    msg.setSourceEntity(37U);
    msg.setDestination(51446U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("LFRQTKNXJSUYJWNCVZSIREOJXBXOQESOYGZDXUELYVYLBLJMRDMFCTPVQYIWBZBHFFQEWWLTMVIFLIKMCQXCFYLQBKKPEDAHAUTGOUMWMFHPUZDX");
    msg.op = 141U;
    msg.lat = 0.631188464516;
    msg.lon = 0.892096062739;
    msg.height = 0.656988914968;
    msg.x = 0.57763922354;
    msg.y = 0.723596723321;
    msg.z = 0.957884630861;
    msg.phi = 0.00488554198897;
    msg.theta = 0.010211895313;
    msg.psi = 0.967347433885;
    msg.vx = 0.658246872197;
    msg.vy = 0.386400200425;
    msg.vz = 0.00358137787606;
    msg.p = 0.839356192181;
    msg.q = 0.497487093999;
    msg.r = 0.89741171317;
    msg.svx = 0.700786132587;
    msg.svy = 0.911051617584;
    msg.svz = 0.984148833326;

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
    msg.setTimeStamp(0.678765164321);
    msg.setSource(33069U);
    msg.setSourceEntity(167U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("GWRGYHZUXQNABWKKMIOXEDQLQKNXPBRGQTGKNXVKRVQXRFTFWTWVYCBZUMEQRTJONTINVFHIHYJGHEIECJZDHBXEMOFAASEPJDPDFXLUTZIVWYNIHJWRNPUPJVFCCRGLGCALDHCBADIBSVOEUVODKSTEUZSKZETVUIWZQAOOGBRDWFUBCUZMSYPEQFWMLLNMIXYOTLKQFSWKSCPDSHGACGTJPMCZNRMBXJHZHASOP");
    msg.type = 149U;
    msg.properties = 246U;
    msg.durations.assign("CJSORFEDFTMPU");
    msg.distances.assign("UTDWVLBXHQTMHLDMUTTSYACIKNZZBTKUHOPNRPRKFCRBNGNFJRUYSWDXGQBJBZKCGVPGYCYSERCUZHAJRALFCQSNJALSKOAQXEFOPQYIVIGIZIVZPOKKICMVTMOWSFZCZEUUWXQSPUGAXQIKHMEYARQGPQVLKOGWAOEAKYEJQXESNYDHHWFILPFFBOPVSMGHJJMRATH");
    msg.actions.assign("RPISRVAQMKECTSHDONPTAIYYSICOAHUBKRQDRZCCHGXMEGTGVGJWWTSZILPWHKWASUMYVMIBLBYUDDVXEOKRMBORWGVQZDMJJMWO");
    msg.fuel.assign("KEDCMFQTSSBQSJODXLJCCLIMVIHXMGBRFBURRMKNMIFVVOOAYKBQYDFWCVGNYGCDRTZDUGXOWXWHTDIFNFKZVEMYZBAJJHPDEQOLNXWATLSRIRBWNNDSQZZFVUWXEH");

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
    msg.setTimeStamp(0.429848200366);
    msg.setSource(34096U);
    msg.setSourceEntity(237U);
    msg.setDestination(62548U);
    msg.setDestinationEntity(189U);
    msg.plan_id.assign("FGILBRRAPOSLMOGGZWDYGHOUMERWIZEHHVPAINEASCAJ");
    msg.type = 190U;
    msg.properties = 74U;
    msg.durations.assign("AXXAYTFJTAFUBGEBDUNGFSLMZVCUYBNBYGRFLXQMCNZTWMRAMZZOXDWGOWZMRQGSPIBAUUJYOUUVGXIWJVRITJUVWDTPXAHTLYYDMKBWESLSSLKDITDQISFMGECHJCPVHRZEPHLKUEOSVDKYLRCRJOZWXBOVCYPBNJREAPESHOXQI");
    msg.distances.assign("VTWLGGLCXHZQQIHRFNTAIUYACMWRBOJFIUGIQVIUDYQXEDAIOGZMBNGPXYWCUVFLNVRSAJZLLVZHYTNDMPYYLRJCRWIAXUABZOCTLWSDMFOBSKGBHCTKLJYWVPDQKNTRJDANQYEOZQOKCJNEXCXTMBGXUPJSSUGTFHEBLQWGFXVM");
    msg.actions.assign("JKJWQYEQYYXLLESMZNNXGLOOWMPONCDOUFXTUIFHVLBKOCLZIXJBTDNITOTEVNSHLPDTMVGFHHAPBUAJBNXLHSWSRCUCZIGJFGKHDQIXAZDTDFSROWJQSEYDAJPABAPUDKONNDVMOYIZZYCMEWKZNGCQFZRFHTZDWUVRSOIHRYAINMPPYY");
    msg.fuel.assign("YXFLGHMREUKQCXZAM");

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
    msg.setTimeStamp(0.0484073031254);
    msg.setSource(54058U);
    msg.setSourceEntity(121U);
    msg.setDestination(13254U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("JYVPGPGJCMEEAZMXSVEQDBGHMHLKAGLTBCCVLXTTZOSQJPNBSBSWVKLWAYWWYVVUWAQFIYJOHLMAZKNVZRATMPDEPFRFFZIQQHLOXDDJNXHETCKSXVZSWHSTOPQIRASOYPDZSLMIDGRQXNPWOIVPKIOCXYPVXFZDXOMGHTHBNUMQDBREKODCFIJYEJFLCRQFNWUSJALNG");
    msg.type = 139U;
    msg.properties = 251U;
    msg.durations.assign("WAXBJXJWLGTJDITCRBWQWQXYBLUPOYEZJRPGFNJOXSSHEWHWMUDYFCICKVDEFISRCFASTKUTIXGUDQRLFZDUFFTLDYEKJEYTTNOATDLAZOXORLBBNHKXDVMLVFGZLGYCOJGJEPKAEKOYIYEYEHVVVHQUPOUDMVUNMBKCZVRHGIDHPWHXYKNMZSGTKCXBQSSBPQPPQUKLAMJSMRHBNNGIVBQMRRUCNONZFNOQIIICJPS");
    msg.distances.assign("CBLDTHNLFYIYMDGLCUUTCLZRNHKGJISRTUKZFIJGXNOHFVKBEKUHPKAQUCMDEBTOOPPIVPFCWEHVHDHPIDMBYTPALKDVASXMEEBKQGEJWZMWLZZRSSOONSYXRAPSWCQJIBLS");
    msg.actions.assign("NBPLYHGRJHUGADOBCFYUFFVTIZXJRILHEIXKPWRZGWAWUITHYOIETSUPPOWUNMDBN");
    msg.fuel.assign("SBYLHHJJZUXXSNLBHAVRCQQSDCCWMIOUMFITWAGYKZFBIBHMYYADENNIGIRFDYOAOEOQBLQPVPQPKMXRFWTVAUZCOZRNXNQUJLDCULPBAIZWMXTRAPFLJGGKLHYGKDBVTIJFEGMNBGAIETAWBVCEPXJKJGJSAVWQLKWRCGSXZZMVNTRCZXCZYQLRSQRHFKNCWKOYITTOT");

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
    msg.setTimeStamp(0.626008986586);
    msg.setSource(56096U);
    msg.setSourceEntity(125U);
    msg.setDestination(14937U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.683940158283;
    msg.lon = 0.61762433312;
    msg.depth = 0.875739795615;
    msg.roll = 0.923960885767;
    msg.pitch = 0.693991260845;
    msg.yaw = 0.39298077964;
    msg.rcp_time = 0.414918065258;
    msg.sid.assign("QROSXVBAJNNOEXPRDKJYVDAGKEDXSMUCFZGRSZSHYPUUXBGPTQRNXGUPPUINEMQCDUWBZRHMBCQHTPBXYORLMYISZDJVGLHQTFQJOCVXTGTWPEDCSVJMFMJYVFPZTIFPHNJGOMSIQABUFLXNICVBLHOJDWECEGRPJLWWMKLTNLBNEONAKUVAYSVUQZKIIRKB");
    msg.s_type = 231U;

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
    msg.setTimeStamp(0.00369134059861);
    msg.setSource(40745U);
    msg.setSourceEntity(179U);
    msg.setDestination(41798U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.460016475099;
    msg.lon = 0.685684311041;
    msg.depth = 0.125554172612;
    msg.roll = 0.57481295758;
    msg.pitch = 0.177070812482;
    msg.yaw = 0.118071861956;
    msg.rcp_time = 0.78033191882;
    msg.sid.assign("JUBOJZDEUNSKTEWKOCZHPYPXGLGZTGUOQMDTSQKJOXUEHAFNKSERVDVNBTSSWPFIDGHBLBVCWBBOCEXMVXLDHXQKZFUXPIAMLVCAIHZFFPQLTSDWYBEKCNEUYBSJWRVAVTRZNMNPJISHWJQJMAMREAJZCVFHAQUEYANYGIPTGYFIAMPDDYORQC");
    msg.s_type = 191U;

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
    msg.setTimeStamp(0.973048717171);
    msg.setSource(64283U);
    msg.setSourceEntity(163U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.164808987526;
    msg.lon = 0.805841751354;
    msg.depth = 0.542837303223;
    msg.roll = 0.823763301303;
    msg.pitch = 0.0200627028223;
    msg.yaw = 0.583746246664;
    msg.rcp_time = 0.431366108445;
    msg.sid.assign("DAHAJVCFOKCJAXK");
    msg.s_type = 202U;

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
    msg.setTimeStamp(0.18738697541);
    msg.setSource(32078U);
    msg.setSourceEntity(247U);
    msg.setDestination(56174U);
    msg.setDestinationEntity(67U);
    msg.id.assign("OXUOHQMPDKWUGFNZQXJZCIBAIZARLTZQNSEOSNLOKHZUDJGUHIYTNOPRAUIAIMACQLXHOPCODXVMSGPSGCWWJBRLKQFMDTVDANORHWPBLHZFDPLSLQGCYVQTMZCRRYAVUKLTYWWSGZAFQLWMQSDPCENNEIVXBJDHPPJBTBJRWFBXIFGVVWDDHBKJEEXTJKHVBRNWYEAOTHMOMSERCKYFUVYV");
    msg.sensor_class.assign("ULQCECUZHUTTIJVQGLZKPZAMKFLSNQNLBXKVGRPVFGWUQIDRWZXKQJROVOVIANEFIFBBGMCMKMXHKXHCXIYHNPVLEEYLHXMVAXCQCKYJEOEWVENYJQSRLYWKIBRSNIUTFNSEDUPJIQCQOGPHULYAPZMNFEHSYODGARMFXZWKGDJDCHFTMEBTJZDOOBOWVLXITSLAYPBFWWNASDIAJRPGXTDNS");
    msg.lat = 0.387750226414;
    msg.lon = 0.164059551253;
    msg.alt = 0.433160192816;
    msg.heading = 0.955566979963;
    msg.data.assign("BYRMCLJZTDWVWKSZJKPBRDEYSMPQTUJLCQSMIPYBMETLWZNNIFMPZFUQUPVMJEYRAAAKEOUGILECSWGRKYQFLUWYVEHNXUEBNIWOYXCCAFFVVIFFGPFIMLPBHGVSTWYNYOVBIHZLWLMKCGDOHAM");

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
    msg.setTimeStamp(0.336891210845);
    msg.setSource(39509U);
    msg.setSourceEntity(211U);
    msg.setDestination(42608U);
    msg.setDestinationEntity(2U);
    msg.id.assign("ABDPAPDZOVXYGUHKLWEPZOYUNFKMVZLXPETQIGQGKQXLQNUTCDPPVEBFLYNEELHEUNFPFSNVDTXYBBMWHHNJWSCKSAWZFMAQWGCAVMMKOYBUGCUVCYSAYLMLIULKXVTUUFRDCEGBLROZPFTUFCIQQPGNQKBKIRZEOXJHCIHXTRBISHMVGYIGHQWJYWRXOVTHJMMFDTAPSSWKNGB");
    msg.sensor_class.assign("BFTNFQTWIAKTDNCKHPUZDHXPKIPDBUNUXJWDEGRMRODFMFTJCYLGSGSPRDJDCXNMMUNJRUARXMPAVWHITASIZICFALMQTDVHNQCEXGKNYIRVQXPASIEUUQBVVJZH");
    msg.lat = 0.348612926846;
    msg.lon = 0.0221950067917;
    msg.alt = 0.0257407377286;
    msg.heading = 0.0700485442099;
    msg.data.assign("WIGDBJZQKKTGHPSPUNEFGXMCRNGNJKGRWUUIHJDDKCKRPWTYCXLLLWFDTQKJNDXOSLVNLMAVCWVCJIRQZLNUKHQAIUVOMNOBIQFYUPEXEXSPVACXWIHOFUX");

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
    msg.setTimeStamp(0.00391605469441);
    msg.setSource(56556U);
    msg.setSourceEntity(186U);
    msg.setDestination(8634U);
    msg.setDestinationEntity(150U);
    msg.id.assign("IOERSJAGUYFBAHOFWISRMTNTFJBQFXLKVCYGOCNSJXKMQPVYJUUSKVAMQANZEGDVYIEHIDXXQYICEEMXMSNUBBEQOJRPDTCUSADHFIASDQXGCKBOMW");
    msg.sensor_class.assign("KYWULASRTOSMRZGEOIJYBPRLP");
    msg.lat = 0.976396484618;
    msg.lon = 0.139595900283;
    msg.alt = 0.906780805347;
    msg.heading = 0.40745332089;
    msg.data.assign("WOOOGXZPYZGOTXVLHIWERQUMUMHJEVBBHJLSNGFWTPDIPMGMYAIJFIAHYVTZCLASRPUGIJNBNDUOZBXWNVPBFEOQMDYASQRKHHMQUSVBDOCILEDKAWVBIXXJQEPFWFFRUSHJKGIZFTJKTQRMDSVRRKDQZKKMEDAEXSGLJYPTNFWHGZRLCCCCBNAJFSEMYTDERAZTEAGYLLXJCSZUZYNPVP");

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
    msg.setTimeStamp(0.998268427306);
    msg.setSource(18419U);
    msg.setSourceEntity(49U);
    msg.setDestination(52555U);
    msg.setDestinationEntity(164U);
    msg.id.assign("MQFOOOZNPAUHKZCYIECPVDPZFZGKLBFDSPXYWAVBTCIOUMRGDZS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MZTSVCBPXMDUPGQXKJTPNGZGENELZIASHYEEJ");
    tmp_msg_0.feature_type = 152U;
    tmp_msg_0.rgb_red = 119U;
    tmp_msg_0.rgb_green = 165U;
    tmp_msg_0.rgb_blue = 97U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.990946929643;
    tmp_tmp_msg_0_0.lon = 0.173005948016;
    tmp_tmp_msg_0_0.alt = 0.273741546401;
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
    msg.setTimeStamp(0.168787376915);
    msg.setSource(10719U);
    msg.setSourceEntity(245U);
    msg.setDestination(38762U);
    msg.setDestinationEntity(74U);
    msg.id.assign("JJWBIIYCXMHWTLTNUKTNRLSTNGWCHFXVKMKBBLRBEPHPVFHXIUVEGESDXSTZPQJLKYGQCWOOIZQGVDOUGJHFECWNWCYFATYGRONRAUMCNOLKYXZGLPKADMIPRXNCNDTFBRPBUQRYQFEJRBHDKBQSXZNXWAEAXZEGDSZGOCHFIVDBAIQEVMNDMAOUZPTIRPMLSQWUIMT");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NFPYTMKOHDDYUPURXDNEUDGEGESECJMZBFZCJHMLJUUQRBZLBUCMLBEZXFBQEVTKMKHCZPAJNRLOHUJSJRNDSBBVFLOQABHIGAHXMRWJQLEHAFGSV");
    tmp_msg_0.feature_type = 50U;
    tmp_msg_0.rgb_red = 194U;
    tmp_msg_0.rgb_green = 113U;
    tmp_msg_0.rgb_blue = 93U;
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
    msg.setTimeStamp(0.36715164744);
    msg.setSource(53021U);
    msg.setSourceEntity(49U);
    msg.setDestination(31619U);
    msg.setDestinationEntity(33U);
    msg.id.assign("WYCUHTNMMJSHESNUVLLAHKQSSWPZZFBIGWNXKQXRRUMZVWCTGGKVFSJQZTGSWPMFSJTLBRXPJIDOTWIQGUJVILTN");

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
    msg.setTimeStamp(0.292201502905);
    msg.setSource(64695U);
    msg.setSourceEntity(89U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(104U);
    msg.id.assign("NKXWGBUZDALCWYFSMEBVPXODIBABETMSNKADDRTJXFKQFDEUTHPEPTNGIQRIBXLCAYKRROMRYBUSPFMSDLWZUEYETSFVGEMGAONERSZONTTONRDQAFZXWFEJPZTDDOYQKG");
    msg.feature_type = 192U;
    msg.rgb_red = 60U;
    msg.rgb_green = 77U;
    msg.rgb_blue = 186U;

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
    msg.setTimeStamp(0.890819024065);
    msg.setSource(18881U);
    msg.setSourceEntity(224U);
    msg.setDestination(12535U);
    msg.setDestinationEntity(90U);
    msg.id.assign("DERZXQHUKFASXOLNVUHFMRHTMFIBCOQIWVUHWEDFLWSAJMDFTRKYUUVPQJBGJQTHGMQYQJDCXVNLJTVGLZKXF");
    msg.feature_type = 27U;
    msg.rgb_red = 91U;
    msg.rgb_green = 101U;
    msg.rgb_blue = 155U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.554623198872;
    tmp_msg_0.lon = 0.506260903225;
    tmp_msg_0.alt = 0.906348541237;
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
    msg.setTimeStamp(0.577659494976);
    msg.setSource(61876U);
    msg.setSourceEntity(160U);
    msg.setDestination(30196U);
    msg.setDestinationEntity(251U);
    msg.id.assign("ZAYFQIRVYQDTXMSQNVFSMYDLKAKMBVBTTRDGJKHIYXOAFUPTORCOSDJLOXKWMSNMBQEASVLSNIVQFQTPKZHQKVZOEYLBPCDGJXIYLJORNHKDFKWFDGSWOUDUMGJANIJRGYTEPGQFE");
    msg.feature_type = 244U;
    msg.rgb_red = 229U;
    msg.rgb_green = 222U;
    msg.rgb_blue = 136U;

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
    msg.setTimeStamp(0.269223305183);
    msg.setSource(683U);
    msg.setSourceEntity(24U);
    msg.setDestination(59846U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.787671714959;
    msg.lon = 0.84609798593;
    msg.alt = 0.670469206705;

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
    msg.setTimeStamp(0.745501053959);
    msg.setSource(40410U);
    msg.setSourceEntity(151U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.723037691553;
    msg.lon = 0.312070854101;
    msg.alt = 0.263359609357;

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
    msg.setTimeStamp(0.966555639608);
    msg.setSource(58960U);
    msg.setSourceEntity(188U);
    msg.setDestination(51493U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.343276467015;
    msg.lon = 0.61257113543;
    msg.alt = 0.532824488294;

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
    msg.setTimeStamp(0.299246012062);
    msg.setSource(14717U);
    msg.setSourceEntity(58U);
    msg.setDestination(38594U);
    msg.setDestinationEntity(162U);
    msg.type = 112U;
    msg.id.assign("ONXCHABAZRVOJQCDQLCE");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.74763186272;
    tmp_msg_0.lon = 0.0643202351933;
    tmp_msg_0.height = 0.63074914412;
    tmp_msg_0.x = 0.246241949555;
    tmp_msg_0.y = 0.405097309048;
    tmp_msg_0.z = 0.291022141226;
    tmp_msg_0.phi = 0.349670647563;
    tmp_msg_0.theta = 0.18243210476;
    tmp_msg_0.psi = 0.142092379504;
    tmp_msg_0.u = 0.914761405085;
    tmp_msg_0.v = 0.0809024389246;
    tmp_msg_0.w = 0.9457048112;
    tmp_msg_0.vx = 0.244029318222;
    tmp_msg_0.vy = 0.217464230666;
    tmp_msg_0.vz = 0.688392300564;
    tmp_msg_0.p = 0.832280516475;
    tmp_msg_0.q = 0.586777907198;
    tmp_msg_0.r = 0.438078692465;
    tmp_msg_0.depth = 0.527564480985;
    tmp_msg_0.alt = 0.116322763949;
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
    msg.setTimeStamp(0.67616492183);
    msg.setSource(61430U);
    msg.setSourceEntity(240U);
    msg.setDestination(38114U);
    msg.setDestinationEntity(35U);
    msg.type = 142U;
    msg.id.assign("OSCSKPNLLKNSMJQYGJJCYIQSJHWVOEUEOAFPXUEPUZOENCJDKREOGCVWKJSTVINXHVZDKLSJYENCWXCMBNXDZU");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.431689003737;
    tmp_msg_0.lon = 0.954829429964;
    tmp_msg_0.depth = 0.369845792502;
    tmp_msg_0.roll = 0.924895199695;
    tmp_msg_0.pitch = 0.663007433424;
    tmp_msg_0.yaw = 0.514041568776;
    tmp_msg_0.rcp_time = 0.220681933905;
    tmp_msg_0.sid.assign("KGHUCNNCZLTBSAMRWDXAKYTLOOWULWPIGZICEQWKFFRGHXVMNMV");
    tmp_msg_0.s_type = 136U;
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
    msg.setTimeStamp(0.792891420304);
    msg.setSource(10874U);
    msg.setSourceEntity(194U);
    msg.setDestination(29042U);
    msg.setDestinationEntity(37U);
    msg.type = 69U;
    msg.id.assign("ZYPJRCOVRWTNHGWBXRJPRTTDHKCQYDAZNVNLEIHMKRKNBCNXZYIOMHYCKZOQFIOPEPZQLNHGLUSXOSGPFYPGWJVCBLSPOJHMTFVQSFIPOSQJVEUAAXUPNKLMLLZYFKARRGWJMDHABZYQSWSDWDW");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.442870499777;
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
    msg.setTimeStamp(0.387205895232);
    msg.setSource(57761U);
    msg.setSourceEntity(184U);
    msg.setDestination(9336U);
    msg.setDestinationEntity(193U);
    msg.localname.assign("OKJFSGVRICXYGEQHOYPHKOTVBSBHYLFIEBBRZADHRRXTDEWFZPCCJEGJWAWPNBXOQYNJNPOOLKEMGNSJTZVVJPAUHQIPBXVREJMCWWQHJKJWNLCTLMQSYQBCZIFNHXUEATYXFDVIHXLMIRXRAMSOLYODEGUGTKCZFLTUUTVOYKZSNBQUMFERSXZQIZDZWBPPARGMOWAWUMCPPDLNLDKIQZYAGKNUSJHTGYCHKBNKLTFDE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JEHFKDEVSRBWCDZAMEOGPPBAUKUYPQGWAYNMMCKKVGUJYWOOTIBTRUAPFVTWMHSCPIVPLJDXLYYNJZUOQHFNFITKHJPVOSSZBEFOXLMWHHEKQVQZCIDNXMSJSLWQRXHJTSCJCCXRCXHYHBDNWLSYDTQUKZEOCYIFZINMUEQSGGYUGOIMPJBMR");
    tmp_msg_0.sys_type = 28U;
    tmp_msg_0.owner = 31795U;
    tmp_msg_0.lat = 0.405246817683;
    tmp_msg_0.lon = 0.56014642958;
    tmp_msg_0.height = 0.00522491933461;
    tmp_msg_0.services.assign("LALUUBMPSGITUOHE");
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
    msg.setTimeStamp(0.710010589374);
    msg.setSource(15715U);
    msg.setSourceEntity(75U);
    msg.setDestination(23895U);
    msg.setDestinationEntity(65U);
    msg.localname.assign("QXZUFLITQYEIROCGPYXKEAQQLOOV");

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
    msg.setTimeStamp(0.20676058629);
    msg.setSource(23559U);
    msg.setSourceEntity(71U);
    msg.setDestination(55498U);
    msg.setDestinationEntity(160U);
    msg.localname.assign("KBWCEOLADMWORJZKPQCGZDSXQRIYNTSHWWUFPSVQUBSRVHTEQZDMGOSIWYZTWYYXVAVUDOMGGZIHAMKOL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GDZJMZOWXDHNSMXUPZRLLTKRGNRCNVVSSHZCDXFYBWRYBNXHSVOJUFBRJQIJQBFLITZPCTIJXIZQDOYEGXCCFKPOXBWPTUDSMDFBSEWCVCGAQNSNWVRYUGJUHDDMEUWALGMLMIVNWEWJVPDUDSSPYUPFZTTYHVLGMAEQQVFVYKJHPKUQMQHOAAOIEWXGXLPMMKEERAYLOGCBKIKTHNZSFNLAIKJFIJBFOBZAWLHPTAGROKENRT");
    tmp_msg_0.sys_type = 189U;
    tmp_msg_0.owner = 62465U;
    tmp_msg_0.lat = 0.108055667247;
    tmp_msg_0.lon = 0.318971849975;
    tmp_msg_0.height = 0.788413193173;
    tmp_msg_0.services.assign("MHFFUAGPWHYIGQXHQFAIPCMIHBEBMFEPYBQARIWWMATTSMZRJUCDGINBBUUPZRRGQFLODM");
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
    msg.setTimeStamp(0.723824928437);
    msg.setSource(32173U);
    msg.setSourceEntity(20U);
    msg.setDestination(7596U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("SPNAULAYSJPLTMVAFMZIIDEDAIHRORHFNJZFUULVAPINKQOFTJRUYBOOCOBYNKWXUAVYCLLQCZCWQGHPQHKUVQISASXXGMLESZVCPEHTNMYBTPCCBRAFBGRWXTKJYEZOLYCSSBWPDGEMWRNTIPQMFRVGMUEMDQOLVWIJOI");
    msg.predicate.assign("PYDTOAEERDUHKAQTTOIQTAZZIUHPNPMSJJGNGHBZUVQNSKEAOCCPXVVBSWVTXFEQOYDSIRWXIQXCWVYLXYGDZNUMMLJUFZKTWVXMPYXXGIJLWXPRZVPVZSQESLQGKHGBFOJJLOPAVPHULTNRCVGCNAQFWKSOIHXFPHIJBABSURYNKJDULGKRNBADCQBKMHIWSZHDBFAKJLCYZCAMIYJDFUE");
    msg.attributes.assign("FMCSEJHXELADSHOKPTXKKQZDROXVPQKMDQYXXUVHAZNAKFUJTKWDOJJYKMACJEIHGZSTMRBFEXQEXLHP");

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
    msg.setTimeStamp(0.500900425403);
    msg.setSource(27398U);
    msg.setSourceEntity(185U);
    msg.setDestination(63576U);
    msg.setDestinationEntity(218U);
    msg.timeline.assign("JODMUFNZWAQQSQMOFAHREWATYIPKLXVJCYIJNCSTKKOAHNGPUQNUQGXRFYWBHCEUXCYGQBADGLMTAMNDNUNBCSILXBLQEFPZRDJGCKISPTBYHZKLB");
    msg.predicate.assign("RYYADPVLOQUNULTQZXEIWTSXUOKXGSEALWNFJGHFFZQYKAVUUFXQHJBVFOTBIJIFSTOMNQHTEQTGEBZWLCEJARUPECMJLYTCYSXUISTKRDBHMKVWKWECXKMCHHPBLAMNAOPXAZVGHVVMNWIGJSJOIZJYKLNBLZXMMSHPX");
    msg.attributes.assign("HXLNURJDVKXOSLTNSDCLBYNQFIZGKBHVTBDEPZDGKYVRNDHVCEARECNREMZTJOYZPDEHQIBQEMZNKVWPLWQMKMYJUTTOMVXSQJOULLXLAUMBFWFPWHGSEKBQAYQJFKXYALICIFSZWTLBJAFAOULYSOYGCRXHUKJXDHZICWNJEBCJCQHTIFPRNSGCMT");

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
    msg.setTimeStamp(0.848721278315);
    msg.setSource(26417U);
    msg.setSourceEntity(13U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("MOLAHBVCABKCEHYPVSBHFFTQETDXHKEQUABQDGMMCWWSDOVOHRTFQKJXFQMYFWKEIELETDNPOFZJJWYURXPXVRZKIRGYJLZIGIEBLXTXUCZRHLPMTYJIAPJHBSLXCHMQQPZIANNSXNNEUYCNRCCATUCMATGOXDKYVOVFEOUWYOZQLMHHUMURZSFGATBWSWZIVIQAJSWUDWPCPSQNKPOILRISNWBDMZLJBGYPFGZE");
    msg.predicate.assign("TVZIDWXBSDGPOBGIHVVJZYKFLGNJMULEGCSCFVNGBUVRLHXMMIKKAPWZRQKCTZWPJZZVHBGKTJPZARSIMGGHYNPKTUXZRXWJYXBUCQURAKQOLPIDYZFEXFORSQEOYLTASUDUAXKSDZWQHCCQNE");
    msg.attributes.assign("TROCHIMGFNOXEDFJCYLRBWGKDVVNHXZTWRKNKUHUOJWOZYRITJLJAPAKIRCGKACUSBEKIOWSMLGAIJZJXQOAQXIZUXQHTWDXDFESRTBRSTEAXBQPRQMVPPCODDXRWMNCHHFEDNHSJPENPTFUFGMVSGUVDDVZFTBBINYYEZFLGVBFYGMYDLAIAOYTC");

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
    msg.setTimeStamp(0.26139613851);
    msg.setSource(33185U);
    msg.setSourceEntity(39U);
    msg.setDestination(24872U);
    msg.setDestinationEntity(116U);
    msg.command = 75U;
    msg.goal_id.assign("GLESKXUBMNARHKRRPGKBDFFIUDUPMIHDYVXYYYOHYAMLZPHCLSDCVQGVJLWBONAOTEZQQTQFVXBEVYJLSVJKCIUEFMQUDZRVUWSP");
    msg.goal_xml.assign("ZAXANPWUICMUNPRQRJTDFKLXTPMEAUPGWCJXPYMIGVSVLOQHQHTYQKCBEVOVTNIBMRJWOTODYIGYVBFOHFUIUGZVZGRIGRUVMCQVFTNDAEPAHQKKZBYCIVVWJBWTDCDISSBMWQYZLTPDKMLELFFJQBCTGFOSEKJKMSJWNTGWZYOYBJNZWGFEPAEAXKSFZNDHDKXWAALPROHEUXUYMSRDHNYALXRHXRPNCCSZJIEUXOJKXLHELSHCORQL");

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
    msg.setTimeStamp(0.0347401278157);
    msg.setSource(4768U);
    msg.setSourceEntity(247U);
    msg.setDestination(55642U);
    msg.setDestinationEntity(59U);
    msg.command = 45U;
    msg.goal_id.assign("MWFMOLSADNPLLHASZGQYFSYCACKZISETIHXZFLOSZRECZGJPXPLRRKKRZBSOMAAHX");
    msg.goal_xml.assign("FBSCHCGCNMLHQWTCAZPUCTRYBITFIBLHYXLQIGVBWFKHJBVGAWABYTNRPLKVSPJZGPNYKKCXHAUOQGXEZEONHDRECVMVBQRHPSQEDYJMLYMDJKZYJKMPGSQWALNLXVUGMUFPKVZKPESGYJWDQZJI");

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
    msg.setTimeStamp(0.474878376844);
    msg.setSource(11044U);
    msg.setSourceEntity(111U);
    msg.setDestination(47940U);
    msg.setDestinationEntity(73U);
    msg.command = 199U;
    msg.goal_id.assign("RILRDQHJOULPLTDIIBIYJUWQYWCNCSEFHPGTXVDNJCZQKODBRYKFNOQXXSLRSBEGRWAQBZAXUZEVMHKENIPKFTLMTCCASIPKYBSGHIKMNBGGECFMDLHPKFZSFVKRJZAPOMPHUQJADLWWKCWEJQMZRZVYKGMVMUHEPBBYAQUEGOXMZVDAUNJQIIJNLFJVIYDUSONS");
    msg.goal_xml.assign("IWEQKGBWFFHVEDLGJXJRZEMLSNIJBVUKMPIUKEXFNVPUCOZJDHIBXYFYAHFCIVLRNSAVJEQWIBAUXJKCANRVZPSBLLEDWODKBQSSVDGCNJLWHL");

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
    msg.setTimeStamp(0.187327929803);
    msg.setSource(3349U);
    msg.setSourceEntity(148U);
    msg.setDestination(59837U);
    msg.setDestinationEntity(140U);
    msg.op = 151U;
    msg.goal_id.assign("CDZPURRKUBNDGMEWIISOMCNCHLCZRQVAWPXRYXDOBTVOSFOGNEOECMJMOLIRADKFQKNUWIQEDEGQZICKOYLLHWYIHIYYFATHVGKJYUPEMIDNVLGXIUAHGBRPCUHEDXMTFUAKWQEMZALPSVGMKBZMTPRLPVSRFFTUXOYZQNTNBJGJLGUSWNHDAQWMZILAHCBENCWOWPJXJTZFJPY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZYEYBMSKULQ");
    tmp_msg_0.predicate.assign("FLNNORTXFOZAPDUUOGKKKSOOHIMETMXKRQHSAFYBOLJLAWVHFTSUHPPDISPBIEXFZRDCFCCYPDGBVPSJODWZTBTHHLDTEKMLDFUPDIAEIWFVKYSYRQNRWMKZIYYXKIJSWQRSEACVOCWWKGHYPGGXZZRFVCGMMNMMPNIVLAHIX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FRGKIILTCDAWYTLMBBPNQKOJMMESUUKFIOJUJKTQPQTXROAEHNWGATKCHBCTHDQFVVFGBQRLMXNOWZKVZLYROAZUHWGRNSCWHXHXMHLKSYPQDRIPBVFOFGLVVRYRCXEJRFXSMAJESYOSQBDUSRGLOGPQMAEOXMUNXSNDIZNLJKACKUIAZWQTEULAVCDEEFOVYPYZVGDGYZGPHBWSBADTSIXCNIHUZBJZEEWUCMP");
    tmp_tmp_msg_0_0.attr_type = 97U;
    tmp_tmp_msg_0_0.min.assign("DNSKYBARUZESAXBDYJNLAEFHFSEDECQKNIYZXOOLPPMMAHTQRAKZEXBMUV");
    tmp_tmp_msg_0_0.max.assign("SFBPULOFUEGUXIMEKBQOWPYLHQPMCXJWGLERXKOFDDQBMHWEOOCDQOWADITSGAHYKUANNBBFNJTKMEZAFKVDXTDQLZTPGFSXRIVSKWXTZIXLPMWSALHTOONSKFUYGWUHZH");
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
    msg.setTimeStamp(0.603344066169);
    msg.setSource(44891U);
    msg.setSourceEntity(155U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(232U);
    msg.op = 100U;
    msg.goal_id.assign("RABAGMGERAVFMZUCKFIVCZIQJBFEPMAZLGXPMWZHJVJPYUVYZGBIARCMOGBWHBUXC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KAOGQBSJDCVHZIOVHPMQJCMHZLIRUKVVMBQHSUEKJSFFOIMJAHSXDUGRNCGYWTQJBYGYUNRCLYMFFYOBILNWWDQVOYJPTTTFRNNBKLGZQMPYLTHSVDCBPAZUBALKLAAGKATFTQRAUHYTPEQXYNFOWSMWACNGHXTHJVIXDONZEXRMXMTSKDPWKEESGCKIIWXPPBULIXIWCXXNSOER");
    tmp_msg_0.predicate.assign("XRYOXWYMBTMQJHNNPGUFJQEDHHBAVJFVFROTYDPSSUTDXQILZZBSALXPLBNDETKIQADTGYWSKJMKYYMGRILLPIUJHJGPCZVSLYZPVMGWPNFDRQRBROSVIIAXXWDLOMORSZJKQONGD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WPFFLYESTOVAJHGYBQPHKWRDQZK");
    tmp_tmp_msg_0_0.attr_type = 235U;
    tmp_tmp_msg_0_0.min.assign("JXNXGEZWQDMCWGDKNBKMVZKSRQFOOHZACYGCEBBSXCTIDZEVIFTLYUMOXOQFUPWXJYOMUSDRZPQHTRPFWJGLHYEQVVNFNEIBQFILGS");
    tmp_tmp_msg_0_0.max.assign("HJBUIOZDWIFXAJRJCKCPBOHDTFLDQMMURWFLRLBJIUECIDHUCSMBYAJKBPNRFIIBCTUZTGYICWNSUVHQZGXHSYROANZQQTWQGDMVKGPVYEPXKMLQARYADADVFZTMOEVWIICKOAESFTVE");
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
    msg.setTimeStamp(0.218195714006);
    msg.setSource(14542U);
    msg.setSourceEntity(224U);
    msg.setDestination(53104U);
    msg.setDestinationEntity(97U);
    msg.op = 174U;
    msg.goal_id.assign("MNUZSIVLCWGBWNOSVAODRPVUFOFNBSPHJFDZJETXPACSUDVMLVENYWPXVYSIEDBEBWRYGUVAKXBIMLSBNQKBNAJOTNHFKYQFOTSYKUDJHQIFFPIZSEPIDBKWJTVYYVAKFTEWLAGEIWVQTARGQHHMXDDGJS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VCHENSFKTDQTIURFWAOIOFOLQKVRFZYZIHUPUPPURSXFYRCYOBIPTCXQXUMMOKAIWVLVJAIXIGIBTELGWNHUWNGJILWFDGLNAEUHNVDDLWBDWYZLGBGZCRCGHZGBEHURYESTJKJBESYZMOWNFCAAHRQAZDRVIPZRCMHOYXP");
    tmp_msg_0.predicate.assign("RSDOEWBMYXQKGXPJFPUFHCOSSCVM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RSMBAOQLIETCNPFLYTPDRADWXRNWHODSBGHLEOKVKYSTZXBSBPGUVLRFAQYHKKKVGVKHZFNOGEICDVTZQCXULDNPAVWHGRIFFJWNYZHCIRXBWYHFPMYUIDTTWGMQNJCFCAEZJOCJINZYMXOQJUJRIITWDMDGKPZQXGLVSSW");
    tmp_tmp_msg_0_0.attr_type = 59U;
    tmp_tmp_msg_0_0.min.assign("LDKLBVQIRHKXQTKDJBDQZSFIOSESNJASDIGHJAWHLIEUFRMYXYGVQGSQELKDUWARAAPIKJMLTLRGNERGXVUTFYNPCBIZDZPTONFJVDLGTMAJRKMLPYHXCQUXIWKJMDEHCUHCTOCFNPNYRHCAZOWWUHQETBXOHBPHPWFTWSKUYRJCQYZIB");
    tmp_tmp_msg_0_0.max.assign("THDLBVOXKPUGIBARETAAFUL");
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
    msg.setTimeStamp(0.878674125955);
    msg.setSource(63142U);
    msg.setSourceEntity(90U);
    msg.setDestination(16111U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QKDSOJMWZZIYBGFNOYDKJHPIOHNPPCWKXKWJWNJONZGRAGRXMGUZPCVQZWWCDBHRMYLEZTEZJMQTQNHIFUXQSMEMGWUFOFBBMCRSRRBEWIRLQXAZKIKENNFFUDVPTTNGIIGXOVUUTYKYVFGAQAYJXHVEPWRROCEHOSLCJALNDFCUAKTVOEZTFDVUGHVHKASLXPCBHDJIALDFLJCXDVMLKZBELRNICU");
    msg.attr_type = 236U;
    msg.min.assign("NLGHYLVSORGVIEJAQYLIWVYFSNVBVEEYAKFLRBLUZJMDUXZDRQUQFYNWJPDSSIITOGIIJUAJCAAVQEMTCSFUQONBVDNHWIJ");
    msg.max.assign("CGLIVERGZHIPEPABZJXQXLLARFVLYIOAKGJNCZFDKGUWMTHNOSVJKRRGLPRKUSMCLWWHYRCFHGODFBYJTLUQWKHTFYHFGLBZNYBXEXHUBTCXFJPCIWAZUAIVQEOSVSQAOBVFBMIQTQAJUHCXPAXMNFDZRVNKEYDMEAEMVOG");

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
    msg.setTimeStamp(0.864587512091);
    msg.setSource(38303U);
    msg.setSourceEntity(243U);
    msg.setDestination(26722U);
    msg.setDestinationEntity(140U);
    msg.name.assign("QQYPZVZDIEMLGQISOPVDRDHHHFUIBNLSAXTFJVQIBARULILMPHGUDHCVTWUJTBYETZZKEETRSRCNWKDWWKFQSOREZOBNUESEQCOSAVXXXTLMGJFPADGMKJCLBSQIRYWUZGVWTDYINNUHRRIOVOPOGEVQJJQOFHSXHUMUBCDYNTXPFXFYITJYMGQKBOLAHYKKMEKLZVXNTPSFANIMFHPAWJBJCBZUMWGVA");
    msg.attr_type = 225U;
    msg.min.assign("TNNTSXCRGDWHZOLQCTISCAGJMXLHDNAQBCPNVRMBYZZHTPHXOPPQPSJCRQ");
    msg.max.assign("AIOPIOMYWUJQLWHXVUVMMPUZ");

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
    msg.setTimeStamp(0.765324761869);
    msg.setSource(29228U);
    msg.setSourceEntity(95U);
    msg.setDestination(47571U);
    msg.setDestinationEntity(43U);
    msg.name.assign("TQDXDYTWAZFIUUDFDLTEHMFXKNLADBOEUEWOVHVGHKUWEKRJMJRSBJCSYAJMRLNPFHWWYVKXPXIGDJLTYGXLVCCYBQL");
    msg.attr_type = 221U;
    msg.min.assign("PAAUVEPSGREJNNKDMQFMWFDNTEIJLIRIQLCTCDSIVCUDYKACQBVOPRAJRVYTOPNXIGWCSWWLHPXBISKMGZEKSDRYSTUXOSAQLATPEUVXOBLOAOSQKFWHQFYNATEVMNQDHLXUQFEBDIQDOCROBOVNWSWBLTAZMJZCXRXCJGRMNMFYBMJPZHVBIPGQBGZRHZOVKFMDYKEHWJJZSJPYHEFNWGTWPKHTNGKXFILULFHU");
    msg.max.assign("RIHQMNTCZRGZILMMDOIGKAYWDTAOVCLHCJTQFAJSWXOLTETNOCUFXXQQGFFIWCKIPCUJHW");

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
    msg.setTimeStamp(0.84603722538);
    msg.setSource(26159U);
    msg.setSourceEntity(73U);
    msg.setDestination(48273U);
    msg.setDestinationEntity(64U);
    msg.timeline.assign("MELKUTJHLLNUDAPVZTOXIAEJDRBVKDZDKOXPRCPVCYEUQDCROLCPXLJSUGWPTFSUWCUNYVCZOAFWLGSFQDGHYGNYKBBOESAAHVJRXICSNJOQSVNDUEEGSHVBKAOQAQPZMYWZLMTBWHZGEEJWEOGIYIXURNRWGMMTIMBBTJWQRDBYVCNOKNLLUTTBKWONZTCXYZPHSJQKHUWEIHAQGIQMJMIBTVHCJNFPAFXZQHIX");
    msg.predicate.assign("JOJIJQISDTKGLPFEZCVUMROABGUKLTSWETMFNSKPLZLIUCVNKBCQVGOPZNOLBMJXEFDRIREHDHYTD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("RBYQWFQUOSCMGIAWBHURDVPNPVFZNSMADHAB");
    tmp_msg_0.attr_type = 72U;
    tmp_msg_0.min.assign("QLFBXDEYHSRFUAJHZIMAGJWYWBHRVAXPMOFQJGAFDBFWNAMRVTRKJQRFWZCLWNNZRSGMOPEDJOYTUKRSUGPEIQDICCPOJSUMQMBLYHTTOHKXCTVNCUQAFFGOWZRE");
    tmp_msg_0.max.assign("JLONFTUINYAOMKUKFMMXZPXDGWSJWXNRGAAEHOCJXUSVZIMILSDONQTGFRIDKNDAZEVQLJEZOTEJHFMPIXXCRUDNTCPPYBJKIJXZBKGMYSBICQDWZCWHYYKOQSPWOCQUFUTALORQAASYQOWVGUMFGYXWSTLZFPQTU");
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
    msg.setTimeStamp(0.483257652539);
    msg.setSource(45036U);
    msg.setSourceEntity(167U);
    msg.setDestination(16026U);
    msg.setDestinationEntity(182U);
    msg.timeline.assign("WQMSFSGNIUQFKVUAFTTGSCMOMUVKKZSKKPKBAEFAJRICNUZOQBXBGGLDAXSRPQLEDCFFMWVLYETCXEYPEHJNDODMHVFNVXYIVSPOFNYRGJAKBVRZJQCDGJBKZWSYBYQRRWVCZLSILIALVKDTGCTEYZMEHBBOOCHUANWMFXAODIPRPHZXEMTHIYJLNEGSCYWJIPPSAGNQELITHCQXHQTTOHW");
    msg.predicate.assign("QBBKMXDDHPIVMEACEIJSVZHOWTYRXNGSFIURJK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XCMBGLGONINUXZSLBQMBOZHRKWFPVEOUPXRWZPQHVUGCFNPSNYJIWOGSZUJVEWPNMIPXCCRLHPYWTEXTCORVBNEYAKKMIWMTRZVDWGKCVEMGTVNNBUILGIIDTRJLLXJFXQHEAFFUTPSKKERDWTEIKYRMTAVDHDUAYPVKSNXLCZBAFSLOOWJUAFYDEZJDZYHGXRMJGFRIMBZHTCDQJQKUOZYEOAUAFYDOQVJFNKHCJQBQSL");
    tmp_msg_0.attr_type = 18U;
    tmp_msg_0.min.assign("ZIFHMOHUEUAVGVCJDIDOMQIZXFGGOXAZGZRJKHCCLJIVNIIQDVMJBPYU");
    tmp_msg_0.max.assign("XGIXHTRMUPAWPCIVZHJXVRLQDECNJGNRSBZRMCPQAAWZYBZMHEOROTJQSS");
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
    msg.setTimeStamp(0.856926131214);
    msg.setSource(4445U);
    msg.setSourceEntity(52U);
    msg.setDestination(11112U);
    msg.setDestinationEntity(139U);
    msg.timeline.assign("UZJGMUQXBNXMKU");
    msg.predicate.assign("GWYEYEPSYUMKK");

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
    msg.setTimeStamp(0.235013317806);
    msg.setSource(44188U);
    msg.setSourceEntity(191U);
    msg.setDestination(34861U);
    msg.setDestinationEntity(191U);
    msg.reactor.assign("FNVPQMOHYVXFGPWWRBGSNMMQQYNLWXJXFSWHTJKJZIBVZNKMVETZLAJRKTZ");

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
    msg.setTimeStamp(0.49678920318);
    msg.setSource(33314U);
    msg.setSourceEntity(39U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(240U);
    msg.reactor.assign("HQQRJCOVSYBOVRXHIYJPYJIUUMMTKCHIFFHXWMQYDSFVOASHMSOKRVGTZNQZEWJPFDLKKYLPJACZASCABKZWOJESDQNWDFIZFORJXHJHMBNCEBCSTHYNLDXGKVNNGOUBPSUXIXUQEPRRMWUXZNNAYAHVULSFWADEBBWVWDGWTIQCLKILJZMWCRPPKENGARBQZOBIJQNTVDGRQVPXDGG");

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
    msg.setTimeStamp(0.0911906606835);
    msg.setSource(57455U);
    msg.setSourceEntity(180U);
    msg.setDestination(3330U);
    msg.setDestinationEntity(31U);
    msg.reactor.assign("CPBEMEJHOTDAENN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("NALXGHPCMPBCJIQKJFYZRTOMAFZIYHYPUCOUGOMSHBPFEHGGQEKSEFGQJOUWCMYJRBUQINCAALSRJYONPZWFKWCYEFZDQPEAWODUNVKNKZDJQZKXYQBPJSWZGXTUQAXOTFUTIYLDEOWWLAMRQVBR");
    tmp_msg_0.predicate.assign("IBFSVMQSHTDFDGRACJOFZGJKXQKZLUAOJGIHJXNNNJLZCDGHUVILTOJUDWRWRMMOMYPLWGPYAPITCKQYLFWDJTVDUQNSBIXEKECSQCZOENSQQUIBIT");
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
    msg.setTimeStamp(0.282581599613);
    msg.setSource(14560U);
    msg.setSourceEntity(131U);
    msg.setDestination(41289U);
    msg.setDestinationEntity(31U);
    msg.topic.assign("BPRXVGEKUGGVVGLAEKEI");
    msg.data.assign("YTJDEWTHOSSHFVPVKFOVLHTKIPHLQYAHGSPFLTWSXFBCFYJLAC");

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
    msg.setTimeStamp(0.703034602203);
    msg.setSource(20599U);
    msg.setSourceEntity(227U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(180U);
    msg.topic.assign("ZONAZGCKXBOFBSLTHCEWGRCIPBNLVFWGIEOMECV");
    msg.data.assign("YCJSTMFDGZRJSRUYVMWUQOUIAQJTRYEEZUULGORRDPHRGCNVKVLURANHQXLPDYSEZHDXWBVMXNKSNIVEFBXRVDIHIWJNQMBHKEYRBDGZZBKCJQPFIBPAILRUOXKBNLKZYNEQOBHWNMSYSVUAWGQTXEPLCKWEUJOBVHEAGJXLSUYAMDSTCOSZBATEDQWPCPKFZTJFHXYNPXWTDVFMAHYCCKFSGDJHIOTFLMCGGOWTFZO");

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
    msg.setTimeStamp(0.677372787026);
    msg.setSource(4784U);
    msg.setSourceEntity(199U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(101U);
    msg.topic.assign("OQAPNTWCDBNZKANDFWZHXJTGFMDOPHXUUAKVJVGELHAEVPAYSMWFRJUNESOQAZSRZCJFEBMYDHYXHNKRVPQDYOUVOMFIGSYUQEBTYHCFGOLDCNWKADKVFZNSVUGHGYLGIXAKRXELEJMMVCLKITUPMQDSESTODIIPMOXQCBRSYAISNVFKYUPGPTTXLW");
    msg.data.assign("WIGLPRDKRHNHODHJWLVKGEVJLRNYZMYEBFFPJODXCTVRZVBHOEWUMUXTSKZEGGCDPQSBLBFBXNGDHGUJAVVCAQYTIMNYEKTHDITYQHLVZGTBJKNTQQQLFBOCZURUWPLPZZXQAYAAEBNNYFGOPVQBUIAPUFOMSATWTCRFMIXCXLGULIYKZMGIXOMOIFSXUBREPJDDMLZYIRAAJEQEOVMOIFDNNWSWKNWZKSWYSKUJRHTHPAXJMSS");

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
    msg.setTimeStamp(0.950374211982);
    msg.setSource(62417U);
    msg.setSourceEntity(187U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(93U);
    msg.frameid = 181U;
    const char tmp_msg_0[] = {32, 28, 117, 80, 22, 23, -115, -90, -41, 33, -114, 80, 10, -64, 29, 105, -3, -8, -105, -100, -125, -111, -22, 57, -74, 102, 95, -6, 93, 114, -59, -2, -27, -104, 43, -32, 61, -84, -96, 21, -114, 104, -13, 27, -31, -62, -119, 78, 53, -63, 121, -58, 117, -8, -56, -102, 124, 88, 37, -126, -65, 16, 26, -15, 25, -106, 110, 120, 1, -91, 6, 63, 72, 83, -72, 60, 23, -119, -12, 62, -96, -7, -113, 12, 39, -29, -90, -128, -99, 42, 74, 109, -16, -50, -22, 71, -112, -59, 40, 126, 88, 64, 107, 108, 94, -25, -64, -68, -122, -51, 29, -126, 49, -93, -64, -51, -19, -113, 82, -58, -66, 45, 2, -9, 103, 60, 31, 53, -27, 104, 20, 125, -19, 99, -33, -81, -110, -62, 53, -86, -125, -35, 24, 1, -38, 58, -92, -54, -90, -28, 85, -55, 38, -125, 100, -77, 72, 46, 13, 30, 115, -44, -8, -62, 64, 53, -122, 0, 56, -39, 4, 0, 86, 21, 58, 74, 60, -44, 85, 30, -110, -45, -7, 97, 15, -6, -24, 85, 25, 5, 61, -53, 85, -96, 63, 99, -123, -112, -38, -101, -93, 39, -53, 125, -14, -15, 97, -118, -31, -124, -46, 5, -51, 93, -2, 68, 65, 90, 54};
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
    msg.setTimeStamp(0.954158366817);
    msg.setSource(57654U);
    msg.setSourceEntity(9U);
    msg.setDestination(59981U);
    msg.setDestinationEntity(134U);
    msg.frameid = 219U;
    const char tmp_msg_0[] = {-22, -67, -40, -107, 105, -83, 12, -89, -114, 61, 113, -53, 66, -116, -118, 14, -29, 12, 118, -101, 41, -4, 0, 60, 110, 100, 97, -89, 86, 121, 86, 23, -51, 105, -100, -120, 82, 6, -19, 45, 48, 44, -123, 27, 109, -1, -120, 110, 85, 10, -25, -13, 41, -119, 8, -109, -91, 118, 12, 65, 49, -103, -89, 63, -43, -69, -112, -82, -64, 58, 57, 119, 22, -40, 112, 52, 46, -79, -60, 23, 92, -119, 114, -114, -94, 30, -121, 2, -37, -42, -43, 11, -112, 89, -56, 104, -100, 27, 1};
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
    msg.setTimeStamp(0.624049921262);
    msg.setSource(52751U);
    msg.setSourceEntity(169U);
    msg.setDestination(23495U);
    msg.setDestinationEntity(134U);
    msg.frameid = 251U;
    const char tmp_msg_0[] = {61, -15, -46, -113, 24, -42, -64, 39, -88, -120, 2, 56, -25, 120, 68, -70, -50, 27, 82, -89, -22, -90, -123, -29, -27, 85, -49, 32, 35, -19, 19, 10, -93, 70, -51, 115, 109, -6, 14, 41, 2, 16};
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
    msg.setTimeStamp(0.284851366229);
    msg.setSource(15797U);
    msg.setSourceEntity(56U);
    msg.setDestination(44277U);
    msg.setDestinationEntity(11U);
    msg.fps = 205U;
    msg.quality = 47U;
    msg.reps = 82U;
    msg.tsize = 217U;

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
    msg.setTimeStamp(0.727700803311);
    msg.setSource(18855U);
    msg.setSourceEntity(179U);
    msg.setDestination(47422U);
    msg.setDestinationEntity(18U);
    msg.fps = 137U;
    msg.quality = 46U;
    msg.reps = 219U;
    msg.tsize = 125U;

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
    msg.setTimeStamp(0.82282521663);
    msg.setSource(39898U);
    msg.setSourceEntity(48U);
    msg.setDestination(15376U);
    msg.setDestinationEntity(21U);
    msg.fps = 140U;
    msg.quality = 10U;
    msg.reps = 160U;
    msg.tsize = 100U;

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
    msg.setTimeStamp(0.154276655535);
    msg.setSource(6599U);
    msg.setSourceEntity(196U);
    msg.setDestination(62725U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.0634401612253;
    msg.lon = 0.501619105859;
    msg.depth = 7U;
    msg.speed = 0.182693216636;
    msg.psi = 0.62187729744;

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
    msg.setTimeStamp(0.725757326535);
    msg.setSource(58702U);
    msg.setSourceEntity(2U);
    msg.setDestination(43084U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.0312108716503;
    msg.lon = 0.840671315283;
    msg.depth = 74U;
    msg.speed = 0.660775904254;
    msg.psi = 0.704866939959;

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
    msg.setTimeStamp(0.776425255909);
    msg.setSource(4256U);
    msg.setSourceEntity(84U);
    msg.setDestination(60706U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.663511471541;
    msg.lon = 0.694476997103;
    msg.depth = 124U;
    msg.speed = 0.889407978685;
    msg.psi = 0.931404742381;

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
    msg.setTimeStamp(0.931270946179);
    msg.setSource(48648U);
    msg.setSourceEntity(83U);
    msg.setDestination(30989U);
    msg.setDestinationEntity(186U);
    msg.label.assign("JLIUVBHAQUCMUWTBOBLDLPTWWMCIQONCXEFQMDHZTHRJAARNCMXJSKHQTPXAMJEBVCQUXQPPTWNVDVEKVJXWNLGIHRHIDKGUASPEPQACOIWNEXJZUUQPEWCYMYFGRSGLLUXKRMSAOYDPGDQBSVZYOAKSONFCKMFBIFFEORNNVDHZRKINGQEYZPPX");
    msg.lat = 0.817869599761;
    msg.lon = 0.338473827646;
    msg.z = 0.930019328949;
    msg.z_units = 0U;
    msg.cog = 0.62995313225;
    msg.sog = 0.237825880589;

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
    msg.setTimeStamp(0.2893256969);
    msg.setSource(1973U);
    msg.setSourceEntity(39U);
    msg.setDestination(46564U);
    msg.setDestinationEntity(25U);
    msg.label.assign("MAZMRRDCORNDLLFMZTPLJYVNPEPDBIZRWDLMAUUZOVMZWUKLEVJSKJRTKLUNNDHJMQQFEDWJVWKYBOOQAQIUDCFVCIBDVKWEFXWXQIELUHJPSRCWFZMIJESRLFXRTSQMHARGQGG");
    msg.lat = 0.0719026874169;
    msg.lon = 0.0700732771002;
    msg.z = 0.522900156185;
    msg.z_units = 210U;
    msg.cog = 0.99183914309;
    msg.sog = 0.389278873792;

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
    msg.setTimeStamp(0.891747517933);
    msg.setSource(22669U);
    msg.setSourceEntity(84U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(227U);
    msg.label.assign("KGMALBKNUTZRZUHULBJGMBOYPNARXFRDRKEOCZYSMPAHKOVEXAESTWWDHPSISMIVOSYWHYVEUXPLGOPCBHTUMDXQAHUMPFUKFQCOAVUTNESOIZCREJNWQNWDAKRFIWWHZIYRJPHDBSYLZUTGMYEMZBLVETKXCBGQLVQCIDXFG");
    msg.lat = 0.594874718181;
    msg.lon = 0.0736713443381;
    msg.z = 0.727515446027;
    msg.z_units = 137U;
    msg.cog = 0.692403597364;
    msg.sog = 0.977613177348;

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
    msg.setTimeStamp(0.919770032766);
    msg.setSource(7940U);
    msg.setSourceEntity(127U);
    msg.setDestination(40590U);
    msg.setDestinationEntity(244U);
    msg.name.assign("DITZUQGOFYVBFUECOIBDKJNPEPCEREJTACISGHSVFQCHTWMIHCLZGXYEPIKCRNHOBCGPDEWVYGBQOCWLAWBTBASKOHZIPLVMSRIYXBIZLHSVXRQAJUAEQTXHAJNIYWWKRUMZFZVHQBXXLKFYFZEKXTRHNTYNPFORLAYOGKWDNSDSFZKXRTNMVCPMZDRVWRGDMUXPJMLSUTQYMDSQ");
    msg.value.assign("YCTLZXSJKIBNQTOIPMTEQRWEFLSBXQEQFYGROUFDZGILCJBVDPWVJZNEKISMMZRREVYELQYZJUOTJHVXEHNNVYYOGZKASDNEDWCFMTWFATSYOKHGURAGHNCVNHRAUAWZNHXOYBILQSMUIVPCGACWHSBXQAOMLWNCRZGKCMPXEWCDFMUHUXDSKVFBXIPKDDJSIXFPSTPBKFLTQMDVGOGEZJJWTAOCLOPMUJGLJKBQTPBRAVHBYRNZX");

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
    msg.setTimeStamp(0.837043365124);
    msg.setSource(23602U);
    msg.setSourceEntity(4U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BVXNGWTXXMVROYWRDYTMEUHHYFFSKWWVWSEJXRHCZEIUBPSVPMAUDFGDIVDSHGOBHJTGPTOXLVBGYRUDHQMJGJLQIFZBSEIACXNWAKJYBGLXKNXXZYPKOZCMUTMVDSISCPRAUPBZONNCKLIKAQLNWAHFQTHDIENRMQJWULJLVYJMWJQWPRTCIHHFTCSZDYEZ");
    msg.value.assign("MKDRYGXTBCLQMRLMGDTSWIUFZCVCNMNWRFOUGZSRDPCYNADQGT");

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
    msg.setTimeStamp(0.801495207672);
    msg.setSource(59332U);
    msg.setSourceEntity(240U);
    msg.setDestination(26644U);
    msg.setDestinationEntity(231U);
    msg.name.assign("BUTOVRGEHZMXHRGUTNLZQBLGJGDBKXYMRDLVVBBRIQOEYGTXBYWJDELAWLDHCCWPDZXCRQULJISIYCZDXNCKWFPSWQQZLOYEVZXUETSAZQFHUJGKBHWZONLKZHMKNIDGFNQWNFJFPDIWJMSAMGTAQCKJMQYPURCYOVPVARSVTWAFBTCWPAHKBRIKPOCYVGUNLAHIXYOFUEIFOUISPXJEFDNTUOSRKNQASZMVPOHEJSICPTJSRBVHA");
    msg.value.assign("CTDUWFRGTJTZDOEUSJP");

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
    msg.setTimeStamp(0.828073746704);
    msg.setSource(4300U);
    msg.setSourceEntity(180U);
    msg.setDestination(22946U);
    msg.setDestinationEntity(153U);
    msg.name.assign("WXQMXFNDFWCTERVNPYKHXPYWXVPMPLACTJRLSIQFNGQKNTD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RHMHYRMEEDVWMVSFSIPXWYJPRGZNEVMNYKNKZHAWFGJSYYVMLLASNEOJUOIGRQJJ");
    tmp_msg_0.value.assign("OELNURZWPBKQNZULIOAJGJMFIVOQUAYSWPTLARMLOGVWEBXGTPVFKBUADJSBQUSLNLHBIRYAGESDBUAYNPMPTWRHCZVKOVZDNIHMDSFISUTIVCYKGVYCDKCRXAWEQQJWCMCKWEGIREIOXPPYDHKYSPHYJEQDLXOKCAAQFNMHXCFBXZLBLXJKTVKTFNZNFOMBQFMZBMRYEQOGQPXNZEAIDVZZNT");
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
    msg.setTimeStamp(0.962700880855);
    msg.setSource(11928U);
    msg.setSourceEntity(31U);
    msg.setDestination(33254U);
    msg.setDestinationEntity(185U);
    msg.name.assign("AVULIGUBCJZNKJGTXPPIGERDRVOXNIHXMNBNGDWDWJFWTUMMEJLTFWVLCRSTZMIFBFZYNHWNOOPGEIOHULHSFUTKLANXQEFWAWWYCLEACEYCSKPOSPSZZVUAAPQCNBJDHGOXQHKBXMXUOOOARLMVXWESLRCDVMEQNPVTGIGSBAZJVVLBHSJPYWTRCJFQMJISFBLYTYYRXXDKBIZDTKAQDHEPKYQVEQYFJUBRIISNOAGFH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NGWNNSQUSJFDAJYSGGTIVVOMBYDPGRGAWIPANXWZOCLSOPMCUABNEHQQEEVYHBYQHZEIWQCCDUKIREKCYHFNHLYAGXPDKOSKATVDIQLHRXXPWFTPYFKRUTXCYUEJXIVZNMLRVLSTHGCFPDOXSNRKFUQGDJJOLHZOTCSMBVTADIHTJKBRIFSPMXOLQJZPOXHEJRKAJG");
    tmp_msg_0.value.assign("PESLVMWZWUCHKOEXNYWZTZOMMCLEQUXRSQDGJDFKIDYTCCIJKLPOLFJHQBPRTJDRAOAHVARZMSXSXAFLMKSHQ");
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
    msg.setTimeStamp(0.693555668812);
    msg.setSource(4615U);
    msg.setSourceEntity(26U);
    msg.setDestination(59422U);
    msg.setDestinationEntity(236U);
    msg.name.assign("UNNKVXERJQAUNMSKLMOZJXTJMUJLNYBJCDIDOVSHABXWEQIGCKFOWDIYDBXUOXPHSPCPYVCOIGMSQHMRZODQCSLLGYHKLTDVVVPPHSYSPEADWQCHLBFPWNXWHBARTVPKXIRRNTERBKEGMXJUIMAWEDJZUQTRUEAJVVBFOLCTTZOFIIWSMJCIPKW");

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
    msg.setTimeStamp(0.775822379047);
    msg.setSource(57490U);
    msg.setSourceEntity(87U);
    msg.setDestination(33317U);
    msg.setDestinationEntity(205U);
    msg.name.assign("IPHKPRVWZTJQEOEORHBXXRA");
    msg.visibility.assign("BZRSGWEVHGLYZTLBORCYDUMFAQHXCZUERRITRGDKIONGGLGITXUPTPMKEIYWPOYHSFMUNLZWDOFNQBKVQCKQDCEQJPCRFVEEDUTYNNIBQYCKEXBSLYMANCFOQJZWBDBAMRYVRCQINGBOMFJTWDFOWEXPJUKOLQJHHLPUNWWIXCMXLBPTNYASXMJLHTUXZGOYVFHV");
    msg.scope.assign("LGIPMWEZQIZVBWMDUYEQRGVANPJLYYSWNFMLKJUTHYZNGGLIAHDRSSKQDLTORDJPRHAOJBKGTKFQWOUSFYUVTQGOTDNXBXSJCNCSTPU");

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
    msg.setTimeStamp(0.0387519091362);
    msg.setSource(31087U);
    msg.setSourceEntity(149U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(151U);
    msg.name.assign("DQUVGGRYXVPSUMPTEKSKRSHALHIREOZCSNORFWHXWXBKPCMLCJLEBFGMLYGFEESRQYCNJVHDIUOCUGWEJPZDXISNENPQTDIUJVEYOOJ");
    msg.visibility.assign("WDMHIFYHUBQDP");
    msg.scope.assign("DHKLIUVYBRIKZCFIMGGQUWMJMAXSVQHSHRRKGMSUKPJVLDGZSSLBSYXOOLCSWVQLYDOLCIUKIGUQPDQMADNEYHQDWVLNVRFRZHRUVOTWAWTARYFPVPZHAQIRPERCQEIHROTBUNOTUPXAXEYGDCFDXVMOYJBAMKNFWGJMFATEXMWZBZSJHETZTGLIXGTNSNMLJPJPWXUICTBZNCFBTCKYPBI");

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
    msg.setTimeStamp(0.782673350397);
    msg.setSource(26828U);
    msg.setSourceEntity(22U);
    msg.setDestination(10482U);
    msg.setDestinationEntity(205U);
    msg.name.assign("MORWZBKCCCIUUPDZLBCTHAFCKSFJYZFZLZKZEVVVFAATPFSGFGZHHOTKQS");
    msg.visibility.assign("NUNOFIYLVUGLGBKIKKTUBAJNXXWDNFMYWODCGELRJQJALCUCDEVZFVTGHHQDZSPBZIOEQZOVHMKTSPWMSYJOYAVKAPDBQCLCTTREWSTXOZSDGFEBWLXAJWILBYGWEERWNPVHIPRRNMUQZYNZRQLZEFIYMZDCJXVUQTGAPHOVMSRXSRNICMSTPQDJGUUIQKEFALRXFPFBQMUOXHKOFJ");
    msg.scope.assign("CMVSLZSZSHNCWSSHVMEUZEURZKVEPNILNKIJYOAMDVUXJHBPSQDUYBONRFAFETFNXSPGYASZLDVXYOGDCKFDXRZCWHIRTGCHSRTTMHJ");

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
    msg.setTimeStamp(0.0894021032079);
    msg.setSource(49070U);
    msg.setSourceEntity(105U);
    msg.setDestination(18262U);
    msg.setDestinationEntity(226U);
    msg.name.assign("UWPGHCOAGDNZKNVXOACJTUKQPXMKOYMEZDUGFFHJIOLLUJWYRICNSIXEJRQGBSRUOGQSNCXUOMKYRREFANZBEXJSLWIPLKQPG");

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
    msg.setTimeStamp(0.74814519559);
    msg.setSource(29819U);
    msg.setSourceEntity(83U);
    msg.setDestination(9228U);
    msg.setDestinationEntity(234U);
    msg.name.assign("JLDSMPNXHEWKVYBEVZJHXLQUTLQJIHWWQJHGPUCUVIOXIZSZCLYOSVBNIFVMRVTVQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KRFZXDSLWJWOCXMMSUGCKRYODUXZJGK");
    tmp_msg_0.value.assign("UVAMQLROPCBNRDYGMNPYRFDBXZLYOJIGJXIRQJZBIEYWOACIRUODUVLEHPOKTIJENRMTGGTKXXZSBBJXMVDUPCNDSCNEYHFUZFNOXJNWOEMLAQLCHKMLADMMKHKWUWEUTBBEKPEFGMXWXZCIFYRTLZDSHAHKUJIVPDHVVSPTSGNUJQUNGZZWPSBFLMYCGDXZAHCYTORQSQOAVRRQHKP");
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
    msg.setTimeStamp(0.098513839431);
    msg.setSource(8484U);
    msg.setSourceEntity(77U);
    msg.setDestination(20099U);
    msg.setDestinationEntity(84U);
    msg.name.assign("LURDLFSUGPVFITHGVMILHZFZEYZAQWCXDUJMVAHBTGSGEPTYJXAKPBAYNLRBBFOXVVDMAUWSDSVPAKTGNYUFUIXDZMHUNQWHQCSZMCBDPFOZSPBWOQKVNLGLEBRDXNOAQOEYWLGKPSHCDXAEHRUCQNIWRHKKARILNJRTJGSJHXUCCCJOIYYKWOPFZEAKXGUINMLKZJPXERORCWWDYNTFBYHDZPOFTTB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HVMMTWQAFQVJTBTKRXOYGKWVKGDYDFPIWFTAECOYUDLYSOCBDOAVBJDJQJVMHYHRJESPXENHFUPBUJOGCRCAFJQEPNIBDHVUKGVWEZTTXNHIEQZRUVRGMMIZOGENRXXSQBCSA");
    tmp_msg_0.value.assign("KETVEKXBLIVSMQBJRSOLTHAQTGVDXVIXJAWICRCYNVCQZVNLOSCBGACFKCMIKZNXGJZOPLBELSZNDQPFRPIMCFLXXWBUUOWZOTDZGGKFMRGCQKTPJNGBAMNJSHCOQOFLTIYHKRYYWXAJZBTSEKTOENWDIASLGNVDBKMUHMAFJTEYEQXPKO");
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
    msg.setTimeStamp(0.177607039656);
    msg.setSource(64091U);
    msg.setSourceEntity(188U);
    msg.setDestination(15010U);
    msg.setDestinationEntity(220U);
    msg.name.assign("MGFSZWJKQIASEHXMKIFGXJQSMYGMHYDNNEKZEWIUYTDLVDLFRLIIMTKTXRORGVTBVUQCSQVUFSHLGCFDEZNHIXHDQNVUHJBYAXZYWECYATMBR");

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
    msg.setTimeStamp(0.35919374244);
    msg.setSource(23613U);
    msg.setSourceEntity(87U);
    msg.setDestination(22035U);
    msg.setDestinationEntity(62U);
    msg.name.assign("LRSEMASALVHYMVPJUSFRLPCFHLJDXKZRIESXMRWTKOWWGEIBRIPTTUHPROKYSSXBZHMUQFNZSYGAEBVHFSUKIYCZAWOWWQDMQHTJTDEETZNJDFUPFBPEIBZJCCLNCQDGCKZQNCBRFHAYDSPTAFPPHNGZKQJCZJXYOVWNEDBQBGGGOWMUKQMFBEMNYOELXPXLDUIRIULDYQITGR");

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
    msg.setTimeStamp(0.0350930101351);
    msg.setSource(35636U);
    msg.setSourceEntity(198U);
    msg.setDestination(55183U);
    msg.setDestinationEntity(214U);
    msg.name.assign("OVJKMHLGKWUTFCGAZHYASMVYPTNGUXQYSTIDTJBHJJSIUOTXXAPQCWAZVSWOHYXANTAUFXEECDSGHLWIGCKEBGVQKOZCNUUJEGXLPZBHFSOWLYADWBRFTJLYHNZLBUOJDBVSRLUDBMXAMFQLFCRQQMRIJVXHIWEIUOJ");

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
    msg.setTimeStamp(0.911753219394);
    msg.setSource(25091U);
    msg.setSourceEntity(54U);
    msg.setDestination(20032U);
    msg.setDestinationEntity(24U);
    msg.timeout = 2815362177U;

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
    msg.setTimeStamp(0.593094268342);
    msg.setSource(17195U);
    msg.setSourceEntity(232U);
    msg.setDestination(63964U);
    msg.setDestinationEntity(247U);
    msg.timeout = 628218777U;

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
    msg.setTimeStamp(0.425031495792);
    msg.setSource(36463U);
    msg.setSourceEntity(193U);
    msg.setDestination(14861U);
    msg.setDestinationEntity(104U);
    msg.timeout = 1845146441U;

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
    msg.setTimeStamp(0.121887416492);
    msg.setSource(16733U);
    msg.setSourceEntity(85U);
    msg.setDestination(17039U);
    msg.setDestinationEntity(158U);
    msg.sessid = 2735269144U;

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
    msg.setTimeStamp(0.0265408426914);
    msg.setSource(25776U);
    msg.setSourceEntity(97U);
    msg.setDestination(10394U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2885939316U;

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
    msg.setTimeStamp(0.32580562683);
    msg.setSource(35215U);
    msg.setSourceEntity(132U);
    msg.setDestination(44402U);
    msg.setDestinationEntity(14U);
    msg.sessid = 827382320U;

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
    msg.setTimeStamp(0.535172603047);
    msg.setSource(816U);
    msg.setSourceEntity(116U);
    msg.setDestination(32981U);
    msg.setDestinationEntity(51U);
    msg.sessid = 2864085867U;
    msg.messages.assign("APLFTUQBAWOACBMJPILAZFKEZQGAYFOOHNVHNGXMDGKZWCBHGASGCYYDZEFWSEANRTYYFRBTRVFUUKTKDDXPZIDPQTUIJTWLBSMG");

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
    msg.setTimeStamp(0.374044279095);
    msg.setSource(29608U);
    msg.setSourceEntity(60U);
    msg.setDestination(34107U);
    msg.setDestinationEntity(78U);
    msg.sessid = 2357103918U;
    msg.messages.assign("LWKWHXBCFRANELENZEXWDCGURSTGNFUBJNMCBQGUOSLSDHXGXAQCOWZHCQVDYTPMSUTLUBKGUPBHIURREQMZBIFJREKUNTVSWAYAGVOJGXQYCENJBEZILMUVYZFEQJSHFBVMLADMWDPGWOKFKHIVISDZAWTQPINQTYJWBLMPATMFVIKSKERHLPRJYFPVKRRHAODADYZXWNNQPCYRGXHATTUXXSMOCZCFLTIVPCODZQSFJJOXEYPYLG");

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
    msg.setTimeStamp(0.271416478358);
    msg.setSource(6742U);
    msg.setSourceEntity(206U);
    msg.setDestination(18384U);
    msg.setDestinationEntity(212U);
    msg.sessid = 4061999132U;
    msg.messages.assign("NNMTADXCHADXPFFKGPNVQAGBHDDCZSXJMWVUFVZYPBQPWSKEHUVORETAQCKILYEFVEIHSLQSDGBITIOJNMBRURIQHNITEXDAHPOTMGGMSPGPAOAECLYJWKLVOFHGMYZXPXQSRVKZLRDWGKSGWQXECVBQUJJNNYLAHPUIMRIYDYKFBRLJOUNYSJURUWKJYFOMGMCTZOBCBSTXBZEADULWVWLRMEKXZUEZSOYJLAIQNFHHVJIWTZTPDNTBKQ");

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
    msg.setTimeStamp(0.539235941809);
    msg.setSource(29431U);
    msg.setSourceEntity(162U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(179U);
    msg.sessid = 3828517669U;

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
    msg.setTimeStamp(0.304230845573);
    msg.setSource(54777U);
    msg.setSourceEntity(149U);
    msg.setDestination(35465U);
    msg.setDestinationEntity(244U);
    msg.sessid = 1417985591U;

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
    msg.setTimeStamp(0.1143127507);
    msg.setSource(62565U);
    msg.setSourceEntity(107U);
    msg.setDestination(53355U);
    msg.setDestinationEntity(119U);
    msg.sessid = 3057742641U;

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
    msg.setTimeStamp(0.48484213829);
    msg.setSource(5107U);
    msg.setSourceEntity(12U);
    msg.setDestination(18534U);
    msg.setDestinationEntity(20U);
    msg.sessid = 646297498U;
    msg.status = 166U;

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
    msg.setTimeStamp(0.862461153011);
    msg.setSource(62358U);
    msg.setSourceEntity(105U);
    msg.setDestination(60069U);
    msg.setDestinationEntity(165U);
    msg.sessid = 3159872494U;
    msg.status = 189U;

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
    msg.setTimeStamp(0.115009917314);
    msg.setSource(31218U);
    msg.setSourceEntity(253U);
    msg.setDestination(61785U);
    msg.setDestinationEntity(22U);
    msg.sessid = 16695275U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.0101738504553);
    msg.setSource(44670U);
    msg.setSourceEntity(211U);
    msg.setDestination(45234U);
    msg.setDestinationEntity(81U);
    msg.name.assign("OITVDPELJAALOOWSMWGNBLHXDVYTOEWLVYEHLKKXTWPJKNNPDDFAABUMFPSGBUFTCSGIIXYRXPEHNEBXQMQWLDRPEAZTBIJYZBROJYAZAZLCYMFVOVFGNMDSWTRGMLDZHNWMQBPWSYUZFGJKXRCCSWYSFRZSGKTJJROKUCQMAUXVQAKXFSTNLZCJICIEGSFPIHZJZUOHHTPBQXOTUVRUQNCDG");

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
    msg.setTimeStamp(0.400390626144);
    msg.setSource(22838U);
    msg.setSourceEntity(17U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(120U);
    msg.name.assign("ATETVXWUHIDO");

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
    msg.setTimeStamp(0.260858057854);
    msg.setSource(9879U);
    msg.setSourceEntity(98U);
    msg.setDestination(43052U);
    msg.setDestinationEntity(224U);
    msg.name.assign("SDBMWEVPVPKYJDTFNMWQSYCXZHVGBOWVOQEVLFJVQUMBJJQAQKFTSBGKHZXHLRNZDOEHDGCBWEJNGGMTLRZS");

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
    msg.setTimeStamp(0.907458171281);
    msg.setSource(872U);
    msg.setSourceEntity(74U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(75U);
    msg.name.assign("EZIQWDEFBJNYPMUNVIECFMWJZMDKDVCIGKTZQRXGCAXDRZXUKQBXHKLFTTYVXWUSNDPWHIMOMQULRJDDUELMJJSBPVHBEUQGGAQEPYTLSFWKXWHMSYAVOJXAGSLYHJXTVVYHOOBGGIOYABWTNNVILGNZYBZZSOFGMWLIASORYCATAKOWNITITHDOFNFZLLXJZRVNPQWQVKCXMRABPKSFCGROJQFLEPYCECKCNUHZRFJAUDHBDMU");

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
    msg.setTimeStamp(0.117810905776);
    msg.setSource(31712U);
    msg.setSourceEntity(240U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(143U);
    msg.name.assign("NDBKPOKJSCZMLOFENGEARBXOUBEIPHRTVTSSLGHBJXZMYEXXXNJQSREZPOAKWDWRTBMPVLINPTBINCGEYHQNSHVTMGOTDHYAFSKOQNKPODXEUJKQQSFVUGGLJUKDAWLFLWZGWROASYVJMWUMIZNCZSBAYMLEDDFPRPJWUHKOFBUCRQZCCPJRJHFITX");

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
    msg.setTimeStamp(0.863462836129);
    msg.setSource(62109U);
    msg.setSourceEntity(98U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(244U);
    msg.name.assign("IRZTPPDNUETZTAGGNNYGCPQDHLPFXINSCKIIXKGJZRBAVFBZUCKJKQEQRCINZUODLRPLVWSSFYCKABMQMWXTWXSDVRSRWVJIBTAGVTBHGRBQDADPMLRLGJBYILUZNFYPHZOVVHZQNOBXCNYMXTQXQ");

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
    msg.setTimeStamp(0.929565983849);
    msg.setSource(454U);
    msg.setSourceEntity(152U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(92U);
    msg.type = 163U;
    msg.error.assign("JUQNPAIENDGXOYDTQPWXDIAUJCZGROSSPOYHGKHZZSXPVLBMFFKSDNTQBQBCMZIAJASSJWBXVFMRDRAAORHVUGZCWVOAZNEDQJEKCLKEESOFGVLXJAMLUJPKECUWTU");

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
    msg.setTimeStamp(0.813508307479);
    msg.setSource(46659U);
    msg.setSourceEntity(6U);
    msg.setDestination(6039U);
    msg.setDestinationEntity(215U);
    msg.type = 137U;
    msg.error.assign("VTCXUSJGQYDXBENHGORINHZZSXBDUYYUKQJAUXKBIVLOWVLPHVTZJRTMIBRMGRMEAOSWLKZWLKTUGFUOPPFDNJBVCS");

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
    msg.setTimeStamp(0.218890583613);
    msg.setSource(65334U);
    msg.setSourceEntity(199U);
    msg.setDestination(7594U);
    msg.setDestinationEntity(247U);
    msg.type = 149U;
    msg.error.assign("UYXJFCTFGVEGDYPAVRCFOWLKSDQRKGIIPDVGTZBBVLJDDMNKMELMGCSZJIKTVZADHJLZOBOPWONFNGILUEMMPDCTULUHXIXAIPFDEUARSNWMUEQTWDBLNVXXKLHSSAOBJAOERYBRCARYNHTNJHSBWXKZEXQVOHJFCQBBPGGHCLBUMR");

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
    msg.setTimeStamp(0.327651832207);
    msg.setSource(19405U);
    msg.setSourceEntity(55U);
    msg.setDestination(26148U);
    msg.setDestinationEntity(200U);
    msg.seq = 42777U;
    msg.sys_dst.assign("YFRTMEKYRJLREGFBTBVLJHOQKDHVVWQFWZQXQYSZUYXIRTDEJNWTXSVAVTIPBKAKFSXENPSGZBBORDJUPANQKRMZDMEPOXJNLM");
    msg.flags = 14U;
    const char tmp_msg_0[] = {-81, 58, -106, -37, -92, -99, 113, 105, -68, 49, 9, -108, 111, -53, 111, 103, -107, 101, 123, 77, 63, -25, 90, -75, -95, 65, 56, -33, -107, -82, -49, 64, 119, -98, -116, 82, 7, 72, 8, 113, -4, -111, 42, -58, 32, -13, -21, 51, 32, -76, 86, -39, -93, -68, 60, 119, -83, 59, -29, 48, -72, 63, -70, -9, 45, -124, 119, -88, 77, -91, 28, 34, -7, -73, -92, -101, 110, 22, 69, 32, 75, -9, 43, -127, -111, 6, -65, -41, 82, -128, 59, -74, -7, -72, -14, -103};
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
    msg.setTimeStamp(0.0602923322456);
    msg.setSource(30769U);
    msg.setSourceEntity(39U);
    msg.setDestination(54621U);
    msg.setDestinationEntity(89U);
    msg.seq = 19175U;
    msg.sys_dst.assign("TSMBQWQAGGQSMLFWIUYSAGYDFNQDXLCYMPNEPBIWUCVBGLGWA");
    msg.flags = 144U;
    const char tmp_msg_0[] = {65, 40, 33, -55, 49, 5, -52, -54, 30, 83, -76, -88, 5, 85, -74, 68, 67, -122, -110, 34, 122, 65, 87, -72, 36, 28, -14, 113, 82, -5, 124, -78, 15, -126, -33, -93, -23, -62, -4, 1, 59, -124, -52, 88, 90, -106, -94, 71, -32, -48, -53, -102, -123, 89, -33, -39, -117, 3, -85, 37, -34, 30, 61, 74, -51, 10, 121, -114, 77, -40, -123, 122, 30, 46, 53, -60, -101, 62, 1, -58, -105, 42, -105, 102, 61, 19, -44, -93, -59, 2, 64, -86, -18, 121, 6, 82, 86, -22, -83, 108, 112, -108, 93, 72, 22, -56, 15, -59, -69, -128, 69, -115, 92, 43, 122, -120, 97, -3, -93, -66, -110, -76, 76};
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
    msg.setTimeStamp(0.511801717931);
    msg.setSource(36735U);
    msg.setSourceEntity(21U);
    msg.setDestination(47198U);
    msg.setDestinationEntity(150U);
    msg.seq = 18362U;
    msg.sys_dst.assign("IEELWSNQEFVTHCFADIRBPWICQHILDHSIPWFNCNXQCCHZUMKEFTRNYOPUUFGHOJUPKLYOPTM");
    msg.flags = 190U;
    const char tmp_msg_0[] = {49, -54, -22, -47, -117, -122, 14, 18, 88, -41, 29, 116, -114, 126, 87, -120, -109, 81, 74, 89, 94, 101, 59, 112, 102, 23, 38, -109, -102, 59, 63, 103, 113, 73, 15, 36, 123, -103, -69, -93, 62, -17, 106, 1, 102, -85, 67, -27, -49, -64, -4, 24, -106, 109, -6, 72, -93, -18, 116, -104, 102, 28, 55, 119, -108, -89, 58, 39, -127, 13, 72, 92, 59, 102, 84, 84, -73, -74, -89, 15, 54, -123, 111, -3, 56, -65, 30, 6, -111, -111, -21, 101, 23, 4, -7, -76, -122, 27, -29, -126, -20, 98, -38, -127, 55, 86, -98, 28, -32, -76};
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
    msg.setTimeStamp(0.119076680326);
    msg.setSource(46516U);
    msg.setSourceEntity(253U);
    msg.setDestination(33399U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("WSNNFZHKPSVGGZKPTYMVIFKBLYXUMXAAGRTPVLMSKXNNMFIQQBECMJUZFILAVRFQUUKTLTJWPQPSCKVUXAMYBJFCJZXLOOIYPVSJGQCBRVEDOIAGDPKHBGHBTWWNOIZBQRXJHRZSOGEQDFXDMKRYOLUNPBITXZUUCYLYFDEPBHHCSDSMDAWJQTYTOVNSLRME");
    msg.sys_dst.assign("BNCCVMGHEQKTPIKZLOLMMNSQRAFEFHHABDZ");
    msg.flags = 253U;
    const char tmp_msg_0[] = {-111, -30, 84, -81, 51, 33, 29, -93, -104, 111, -47, -71, -89, 80, -101, -4, 1, 59, 30, 30, -109, 105, -72, 39, -101, -45, 112, -99, 42, -44, 5, 107, 102, -27, 28};
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
    msg.setTimeStamp(0.863829865965);
    msg.setSource(37559U);
    msg.setSourceEntity(80U);
    msg.setDestination(49985U);
    msg.setDestinationEntity(27U);
    msg.sys_src.assign("XLECIEGEJNAUDMNFMWTKTUBRGTRMDCMQURZYGOGUDTMKUHIOJQHBRVIZODTDLOISZKUNZQHNBALGAAYKBREBQYCYFEDPHPYUWVLVFDOQHKJEDWNSVGJPLXJPLSNKEDIOBVFFOTIFRIGSEHTYHKYAUXBOZRSYVBHWCFWKLNPRPTVGZHLXQAZXZANICVQQFMTKRQPC");
    msg.sys_dst.assign("PMIKEQKHRIHOKWQEVJVECGOKSAQTTVIL");
    msg.flags = 133U;
    const char tmp_msg_0[] = {-96, 38, -87, -65, -35, 113, 47, 52, 97, 25, 123, 37, -102, 50, 18, 4, -62, -60, -106, 33, -46, -71, 29, -97, 18, -68, -51, -112, -99, 48, -116, -21, -46, -60, 55, -78, -104, 21, -113, 14, 34, -116, -55, 18, -82, 104, -119, 19, -89, 65, 45, -111, 102, -16, 92, 98, -6, -87, -94, 99, 69, 84, 24, -118, -76, 61, -86, -125, -42, -64, -105, 2, 93, -50, -122, -88, 29, -4, 64, -77, -87, -56, -36, 92, -125, -11, -81, 22, -72, 71, 6, 8, 49, 17, 95, -26, 110, 8, -1, 21, -83, 74, 8, -105, 95, 102, -67, 45, -37, 22, -4, -41, -28, -43, 108, 46, 19, 24, -5, 124, 121, -75, 24, -68, -121, -16, 83, -111, 59, -94, -99, -43, 16, -123, 1, 64, 102, 49, 47};
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
    msg.setTimeStamp(0.307331481788);
    msg.setSource(50551U);
    msg.setSourceEntity(134U);
    msg.setDestination(32376U);
    msg.setDestinationEntity(224U);
    msg.sys_src.assign("SOPJYBJEUMUWTNTCHJGYQTVWAPHPSUHZQFPEKYBIYFMZSSKNUYFTZDAUJR");
    msg.sys_dst.assign("KLYXFAQCELGRFVSMRFROZLVHJCPMUUJAVMNNGGDBNRBBKACCYBOYDOJUFRBGFOHN");
    msg.flags = 184U;
    const char tmp_msg_0[] = {65, -54, 84, -56, 93, 116, -60, -102, -55, -75, 22, -51, -4, 58, -108, 113, 74, -82, -19, 21, -46, -94, -101, 39, 32, -86, -65, -114, -93, -21, 61, -39, 60, -91, 63, -45, 16, -115, -7, 109, -81, 78, 91, 73, 29, -112, 126, -20, -66, 100, 48, -36, -108, -15, -115, 35, -99, 91, 23, -23, -15, 114, -105, -93, 109, -22, -114, 54, 104, 69, 16, -55, 0, 71, -105};
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
    msg.setTimeStamp(0.94279309382);
    msg.setSource(29602U);
    msg.setSourceEntity(236U);
    msg.setDestination(42119U);
    msg.setDestinationEntity(126U);
    msg.seq = 36286U;
    msg.value = 192U;
    msg.error.assign("XAOCAMQRHULVXSHIMZXMWLIVVJRSTWMDTKDZEWCVSPLUFDJIADKCFSUGXYICLYGGMSIRWARL");

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
    msg.setTimeStamp(0.562274640567);
    msg.setSource(47809U);
    msg.setSourceEntity(25U);
    msg.setDestination(50577U);
    msg.setDestinationEntity(61U);
    msg.seq = 3789U;
    msg.value = 208U;
    msg.error.assign("SVOFGCWPSFOAKRIHZFOUGKJJPKTWZWAESVNSUFMCDWBDHMNOJLAJHJCXZIUEBAUYBANGSIGWXSHVLRNQMWUEXKVUOAISVCLDYHUTREJJLQSLBELCOBRWQDIYMQFLLVQCPTVMPXWZIZXBXTTKPBTLDOYXCFNHIPHANBSQMEXTFZJFCMRTDYIVZEQGMZIOGQVRDYKJDPCGBOZGTCKJEUHYSAKPYRMHKUXF");

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
    msg.setTimeStamp(0.68630951917);
    msg.setSource(39398U);
    msg.setSourceEntity(39U);
    msg.setDestination(47159U);
    msg.setDestinationEntity(84U);
    msg.seq = 42093U;
    msg.value = 246U;
    msg.error.assign("NPIEGKZOWEUFUHEDQKLHPVAVYXAQRUNSJPINCYNAREAZSUGZQHBBSXMISZAGGVXVRRQFETLILDVMQBTDZCKSRPTQOGOZIZDMYDPRABFURNXYCSDXLNCFWCOCJGFTKPWQOBDNUKGYKFEUFOVDLLJIHMTXQTTCJRNBSZLUGMBKSJO");

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
    msg.setTimeStamp(0.596554569096);
    msg.setSource(37962U);
    msg.setSourceEntity(30U);
    msg.setDestination(35743U);
    msg.setDestinationEntity(166U);
    msg.seq = 50390U;
    msg.sys.assign("ASOBKCRDFHLUVOEQKBGLLGAGUUAYICNVOPNMPXSCOEFZCCPUHTCWRTURCHSDZXERYOGWSFGJUJIKABFVUQYFWZPSQJIOYJQCNIKHEZVPJLMFWWAMRBNVWSDJKESASFJITXMGDNRNORZJDLOKCTQUZRNTXNTHKLDOBXQYUIFGMIBOKHWLIBIFRTMNI");
    msg.value = 0.256499744025;

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
    msg.setTimeStamp(0.0105058627637);
    msg.setSource(53459U);
    msg.setSourceEntity(123U);
    msg.setDestination(2224U);
    msg.setDestinationEntity(44U);
    msg.seq = 42019U;
    msg.sys.assign("NLFSOOXRBTESSSSTKPMQPFDQUGNEHABFAZXHMEJLKFMAVTQZEWKDJZJOQWXCEHMFCJVJXOKQONORQYVKQITYYKMFIYOWNIIFYGCZLURDMVDUOTHMBBBKZCWTZUSUVGYELGJCDPHBIJNSRVZENDCKNATIGVRPMESBZDLGAHIPJVRIMVOAGYPJOWBZXFT");
    msg.value = 0.719319064819;

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
    msg.setTimeStamp(0.51097779141);
    msg.setSource(54194U);
    msg.setSourceEntity(144U);
    msg.setDestination(18737U);
    msg.setDestinationEntity(244U);
    msg.seq = 42412U;
    msg.sys.assign("AWMJGRYDQEHVJTESQPXDZNXBZTKXHZVOSOJYEJJDAWTWMZBMPLCLQWHGFVAHVRMEQKFGOTQFXAOCIQVFDTHNCWIIROWVNBORFGIBPXGZMACBYIBFJDDYMEJALCGSBYLLVWSZGPITREAKFYAFTHSSZAEUCPQ");
    msg.value = 0.838756626208;

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
    msg.setTimeStamp(0.0110065268185);
    msg.setSource(60120U);
    msg.setSourceEntity(210U);
    msg.setDestination(65327U);
    msg.setDestinationEntity(36U);
    msg.action = 88U;
    msg.longain = 0.650810858055;
    msg.latgain = 0.113142599258;
    msg.bondthick = 295123778U;
    msg.leadgain = 0.755344428468;
    msg.deconflgain = 0.760609849474;

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
    msg.setTimeStamp(0.358418242067);
    msg.setSource(19010U);
    msg.setSourceEntity(171U);
    msg.setDestination(16152U);
    msg.setDestinationEntity(143U);
    msg.action = 72U;
    msg.longain = 0.149613392466;
    msg.latgain = 0.91432302401;
    msg.bondthick = 3102885502U;
    msg.leadgain = 0.756218580919;
    msg.deconflgain = 0.532566541387;

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
    msg.setTimeStamp(0.180462400686);
    msg.setSource(36757U);
    msg.setSourceEntity(137U);
    msg.setDestination(39506U);
    msg.setDestinationEntity(200U);
    msg.action = 94U;
    msg.longain = 0.674046460865;
    msg.latgain = 0.548002395098;
    msg.bondthick = 1028910440U;
    msg.leadgain = 0.395890884265;
    msg.deconflgain = 0.65054762917;

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
    msg.setTimeStamp(0.733123270345);
    msg.setSource(61565U);
    msg.setSourceEntity(150U);
    msg.setDestination(60012U);
    msg.setDestinationEntity(105U);
    msg.err_mean = 0.0892091944298;
    msg.dist_min_abs = 0.982935804158;
    msg.dist_min_mean = 0.238181478707;

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
    msg.setTimeStamp(0.910882202713);
    msg.setSource(37484U);
    msg.setSourceEntity(50U);
    msg.setDestination(35141U);
    msg.setDestinationEntity(249U);
    msg.err_mean = 0.755397373868;
    msg.dist_min_abs = 0.718851012552;
    msg.dist_min_mean = 0.850956281585;

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
    msg.setTimeStamp(0.372637915904);
    msg.setSource(54819U);
    msg.setSourceEntity(213U);
    msg.setDestination(3011U);
    msg.setDestinationEntity(178U);
    msg.err_mean = 0.782226705511;
    msg.dist_min_abs = 0.851519051329;
    msg.dist_min_mean = 0.252522133914;

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
    msg.setTimeStamp(0.0988664199365);
    msg.setSource(64536U);
    msg.setSourceEntity(21U);
    msg.setDestination(2205U);
    msg.setDestinationEntity(41U);
    msg.action = 155U;
    msg.lon_gain = 0.36423709801;
    msg.lat_gain = 0.771822879626;
    msg.bond_thick = 0.0787580911209;
    msg.lead_gain = 0.916898017089;
    msg.deconfl_gain = 0.642219779263;
    msg.accel_switch_gain = 0.253562870604;
    msg.safe_dist = 0.0690969664733;
    msg.deconflict_offset = 0.0258451024858;
    msg.accel_safe_margin = 0.000673364138395;
    msg.accel_lim_x = 0.965068207196;

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
    msg.setTimeStamp(0.171038609071);
    msg.setSource(3884U);
    msg.setSourceEntity(13U);
    msg.setDestination(54225U);
    msg.setDestinationEntity(14U);
    msg.action = 128U;
    msg.lon_gain = 0.654729119737;
    msg.lat_gain = 0.754555701467;
    msg.bond_thick = 0.845435395964;
    msg.lead_gain = 0.734106888945;
    msg.deconfl_gain = 0.944913026126;
    msg.accel_switch_gain = 0.106665715888;
    msg.safe_dist = 0.326886726552;
    msg.deconflict_offset = 0.34897330667;
    msg.accel_safe_margin = 0.991520292795;
    msg.accel_lim_x = 0.104178814971;

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
    msg.setTimeStamp(0.234445675039);
    msg.setSource(26404U);
    msg.setSourceEntity(105U);
    msg.setDestination(49339U);
    msg.setDestinationEntity(41U);
    msg.action = 249U;
    msg.lon_gain = 0.0549889392255;
    msg.lat_gain = 0.200544016904;
    msg.bond_thick = 0.568479936165;
    msg.lead_gain = 0.0859996858461;
    msg.deconfl_gain = 0.313776860722;
    msg.accel_switch_gain = 0.411463852667;
    msg.safe_dist = 0.959468807553;
    msg.deconflict_offset = 0.871957111222;
    msg.accel_safe_margin = 0.939606647294;
    msg.accel_lim_x = 0.495510997035;

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
    msg.setTimeStamp(0.299526962971);
    msg.setSource(49435U);
    msg.setSourceEntity(182U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(169U);
    msg.type = 1U;
    msg.op = 61U;
    msg.err_mean = 0.551331587674;
    msg.dist_min_abs = 0.841491968797;
    msg.dist_min_mean = 0.450344999339;
    msg.roll_rate_mean = 0.212558965985;
    msg.time = 0.649592330119;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 83U;
    tmp_msg_0.lon_gain = 0.686164962188;
    tmp_msg_0.lat_gain = 0.626478688471;
    tmp_msg_0.bond_thick = 0.201856950923;
    tmp_msg_0.lead_gain = 0.803234089836;
    tmp_msg_0.deconfl_gain = 0.274524122262;
    tmp_msg_0.accel_switch_gain = 0.0585988059992;
    tmp_msg_0.safe_dist = 0.946144164727;
    tmp_msg_0.deconflict_offset = 0.659108388743;
    tmp_msg_0.accel_safe_margin = 0.218101722497;
    tmp_msg_0.accel_lim_x = 0.44929087065;
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
    msg.setTimeStamp(0.655460267346);
    msg.setSource(30041U);
    msg.setSourceEntity(250U);
    msg.setDestination(49056U);
    msg.setDestinationEntity(18U);
    msg.type = 208U;
    msg.op = 236U;
    msg.err_mean = 0.428240152834;
    msg.dist_min_abs = 0.978122669501;
    msg.dist_min_mean = 0.0467074195687;
    msg.roll_rate_mean = 0.289866792508;
    msg.time = 0.64869179743;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 2U;
    tmp_msg_0.lon_gain = 0.11144632889;
    tmp_msg_0.lat_gain = 0.685369920743;
    tmp_msg_0.bond_thick = 0.945783585492;
    tmp_msg_0.lead_gain = 0.211294039228;
    tmp_msg_0.deconfl_gain = 0.108558873449;
    tmp_msg_0.accel_switch_gain = 0.585032503306;
    tmp_msg_0.safe_dist = 0.788362953025;
    tmp_msg_0.deconflict_offset = 0.884041551091;
    tmp_msg_0.accel_safe_margin = 0.966110350339;
    tmp_msg_0.accel_lim_x = 0.773242608253;
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
    msg.setTimeStamp(0.876882333835);
    msg.setSource(54435U);
    msg.setSourceEntity(44U);
    msg.setDestination(33988U);
    msg.setDestinationEntity(114U);
    msg.type = 14U;
    msg.op = 75U;
    msg.err_mean = 0.418917296037;
    msg.dist_min_abs = 0.355280350738;
    msg.dist_min_mean = 0.486530744784;
    msg.roll_rate_mean = 0.207107626022;
    msg.time = 0.793953774047;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 151U;
    tmp_msg_0.lon_gain = 0.528389237712;
    tmp_msg_0.lat_gain = 0.304149411426;
    tmp_msg_0.bond_thick = 0.523370313817;
    tmp_msg_0.lead_gain = 0.00747678075189;
    tmp_msg_0.deconfl_gain = 0.825160862711;
    tmp_msg_0.accel_switch_gain = 0.902691361643;
    tmp_msg_0.safe_dist = 0.763082478824;
    tmp_msg_0.deconflict_offset = 0.223549166268;
    tmp_msg_0.accel_safe_margin = 0.301790835689;
    tmp_msg_0.accel_lim_x = 0.829907833907;
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
    msg.setTimeStamp(0.103891552079);
    msg.setSource(3212U);
    msg.setSourceEntity(111U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(73U);
    msg.uid = 111U;
    msg.frag_number = 173U;
    msg.num_frags = 57U;
    const char tmp_msg_0[] = {74, 27, -53, -105, -45, 62, 75, 76, -75, -39, -92, 58, -1, -66, -88, -83, 121, 33, 116, 87, 120, -84, -103, -119, -102, 43, 105, -122, 53, -100, 71, 2, 126, 67, -20, 75, 113, -28, 53, 41, 98, -101, 22, -63, 59, -46, 126, 60, 3, 107, 74, 22, -41, 28, 74, 58, -71, 21, -64, 81, -12, -83, -120, 17, -97, 34, -104, -54, -51, 68, -10, 28, -116, -44, -88, -101, -31, 82, 64, -106, -27, -115, -62, 65, 3, 42, 14, 120, 116, -46, -122, 80, -6, 89, 37, 14, 31, 88, 77, 28, -106, 38, -89, 92, -123, 109, -23, 48, -66, -69, -54, 119, -29, 105, -41, -82, -127, -76, -110, 9, -30, -101, -23, -23, -69, 68, 66, 100, 112, 45, -105, 107, -28, -58};
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
    msg.setTimeStamp(0.835432131875);
    msg.setSource(43173U);
    msg.setSourceEntity(243U);
    msg.setDestination(61668U);
    msg.setDestinationEntity(105U);
    msg.uid = 200U;
    msg.frag_number = 114U;
    msg.num_frags = 129U;
    const char tmp_msg_0[] = {-92, 16, -19, -67, 13, -105, -96, 7, 26, -33, -76, -76, 41, 99, 2, -98, 20, -19, -6, 76, 32, -34, -12, 0, -45, 29, -23, -122, 29, 4, 50, 24, 58, -28, 31, 88, 68, 77, 85, 43, -104, -104, -40, 63, -21, 7, 85, -14, -126, 46, -38, 86, -28, 61, -119, -1, 91, 91, 38, 100, -69, -73, -66, 31, 126, 121, -11, -17, -99, -64, -95, -104, -66, 67, 76, 61, 70, 45, 27, 101, -45, 78, 119, 111, -54, -43, -14, 51, -60, -56, -62, -60, -36, -106, -41, 29, 27, -70, -41, -95, -8, -128, 70, 114, 3, -9, -90, 27, -64, 3, -55, -57, 11, -35, 47, -126, -60, -11, 104, 53, -12, -115, 30, 23, 81, 46, -35, 104, -42, 71, -28, 96, 33, 15, -8, 99, 7, -89, -93, -76, 96, 81, -105, -104, 17, -93, 5, 120, -66, -7, -74, 30, 51, 41, 65, 43, 75, -6, 58, 125, 29, -66, 110, -99};
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
    msg.setTimeStamp(0.0588654311007);
    msg.setSource(12175U);
    msg.setSourceEntity(56U);
    msg.setDestination(32686U);
    msg.setDestinationEntity(38U);
    msg.uid = 12U;
    msg.frag_number = 6U;
    msg.num_frags = 187U;
    const char tmp_msg_0[] = {-91, -82, 48, -89, 40, -31, -120, -51, -71, -49, -17, -77, -97, 105, -16, 39, 5, 76, 18, -47, -61, -35, 60, -94, -125, 43, 61, -99, -28, -111, 66, -44, -111, -76, 122, -125, -84, 97, -55, 41, 96, -17, -32, -71, 123, -84, 42, 67, -47, -122, 47, 46, 119, -38, 110, 78, -38, 90, 104, -50, 109, 41, -10, 99, -22, -33, -124, -90, 67, 31, -2, 13, 40, -99, -81, -89, 67, -83, 94, -62, -124, 34, -120, -25, 107, -77, 76, -109, 48, 88, -47, 30, -57, 90, -13, -75, 79, 92, -75, -46, -98, 87, 54, -88, -54, -73, -38, -107, 115, 104, 7, 70, 105, -51, -21, 116, -94, 73, -103, 77, -47, -47, 31, -105, -19, -118, 73, -83, -83, 28, 110, 35, -30, -8, 21, -75, 44, 74, -56, -87, -71, -121, -79, -97, -18, -122, 30};
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
    msg.setTimeStamp(0.81590260342);
    msg.setSource(1755U);
    msg.setSourceEntity(131U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(143U);
    msg.content_type.assign("TJIPNFSKDHGOXABMJDYUAHFWMOMRNVHSSROOJPXSPGLVAXJDZZGAZBEPQYYWFSDMQRZDFAIRTIIJYUIZQEOEXJOHNG");
    const char tmp_msg_0[] = {-41, -98, 92, -26, -98, 26, 111, -80, 82, -112, -17, 50, 69, -101, 4, -97, -123, -58, -35, -23, -34, 25, 54, 116, 16, 106, 43, -116, 55, 45, 75, 6, 46, 38, 53, 67, 93, -4, -118, -118, 86, -24, 88, -30, 13, 62, 7, 29, 48, -45, 19, 73, -113, 18, 9, -17, 114, -110, 31, -18, -97, -42, -45, 101, -10, -119, -49, 110, 104, -7, -104, 112, -15, -69, -49, 95};
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
    msg.setTimeStamp(0.444635786347);
    msg.setSource(17281U);
    msg.setSourceEntity(140U);
    msg.setDestination(20996U);
    msg.setDestinationEntity(147U);
    msg.content_type.assign("VXLMLANNPDFGCTIBPOWJZXZVFNDYFJYYZEIKALNNTOPRZAMVWNGGUJKHPFSUMODTKMTYSQNDMXWXYLLUBHORRRHMKCIFUDDRUADKCWGUPRJMPSOHOCLVZGZFWFVYYAJICJQHZMTEAAGDGPXLBZVKHNV");
    const char tmp_msg_0[] = {-110, 106, 91, -33, -37, -9, 16, -22, -44, 107, -2, 118, 119, 112, -53, 95, 69, -110, 18, 94, 66, -78, -117, 66, 21, -41, -57, 11, -83, 121, 92, 52, 31, -32, 90, -103, 10, 116, 28, -26, 36, 34, -64, -78, 75, 108, -83, -87, 71, 92, -11, 88, 66, -27, -94, 103, 108, 21, -40, -6, 76, -3, -22, 2, 115, 108, -65, -58, -11, -61, -34, -106, -110, -17, 80, 108, -123, -64, 123, -11, -8, 113, 32, 43, -75, 60, -38, 8, 24, -10, -42};
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
    msg.setTimeStamp(0.830979507403);
    msg.setSource(62116U);
    msg.setSourceEntity(165U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(211U);
    msg.content_type.assign("YLEIQKFOTFFEZSUUWTRIEFWRPJEVFBNJMAAWULPIXYLTJBRYKQPMJTKLQPAVXQBFJTWPMNCJFDYIZWNVNCEXRIZLTQZPXTLDIVHJUGQOMWCQOCHVVMWUATKFADWXICKDSGKOVGOBXSHIY");
    const char tmp_msg_0[] = {49, -72, -72, 91, 108, -120, 10, -125, -55, -113, -61, 22, 59, 36, -81, -90, 12, 82, -90, 123, -102, -84, 126, -27, 72, -110, 29, 30, -67, 8, -37, 81, -83, -70, 9, -50, -128, -92, -54, -116, -6, -114, -75, 33, -94, -101, -9, -40, -8, -45, 10, 110, 86, 50, -29, 125, 6, -123, 23, 81, 56, 29, 47, -62, 103, 78, 108, -127, 18, -103, 97, -119, -95, 104, -79, 125, 51, -40, -125, 35, 97, -3, -13, -57, 23, -91, 99, 10, 58, 12, -82, -58, 76, 66, -62, 93, 30, 102, 103, 113, 123, -40, -113, 28, 58, 79, 96, 90, -8, 96, 113, -116, 20, 54, -33, -54, -51, 55, 76, 7, -25, 121, 88, 61, 102, -15, -68, 71, 83, 95, 71, -119, -16, -84};
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
    msg.setTimeStamp(0.185735398599);
    msg.setSource(27311U);
    msg.setSourceEntity(188U);
    msg.setDestination(52125U);
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
    msg.setTimeStamp(0.112029548798);
    msg.setSource(38843U);
    msg.setSourceEntity(146U);
    msg.setDestination(34570U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.467179312097);
    msg.setSource(19942U);
    msg.setSourceEntity(83U);
    msg.setDestination(755U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.284170797777);
    msg.setSource(36264U);
    msg.setSourceEntity(123U);
    msg.setDestination(6568U);
    msg.setDestinationEntity(131U);
    msg.target = 63121U;
    msg.bearing = 0.732525417325;
    msg.elevation = 0.266084625186;

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
    msg.setTimeStamp(0.579542165625);
    msg.setSource(56737U);
    msg.setSourceEntity(81U);
    msg.setDestination(28748U);
    msg.setDestinationEntity(212U);
    msg.target = 17252U;
    msg.bearing = 0.0414516376091;
    msg.elevation = 0.774405105146;

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
    msg.setTimeStamp(0.15314792441);
    msg.setSource(4357U);
    msg.setSourceEntity(234U);
    msg.setDestination(58484U);
    msg.setDestinationEntity(14U);
    msg.target = 4491U;
    msg.bearing = 0.570203974258;
    msg.elevation = 0.294427610508;

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
    msg.setTimeStamp(0.475301467763);
    msg.setSource(16759U);
    msg.setSourceEntity(111U);
    msg.setDestination(10662U);
    msg.setDestinationEntity(157U);
    msg.target = 60003U;
    msg.x = 0.420756516045;
    msg.y = 0.521871374728;
    msg.z = 0.948679721079;

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
    msg.setTimeStamp(0.828775490606);
    msg.setSource(19947U);
    msg.setSourceEntity(121U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(125U);
    msg.target = 32088U;
    msg.x = 0.463633068353;
    msg.y = 0.503883803437;
    msg.z = 0.447899584956;

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
    msg.setTimeStamp(0.846896629214);
    msg.setSource(31796U);
    msg.setSourceEntity(48U);
    msg.setDestination(5808U);
    msg.setDestinationEntity(57U);
    msg.target = 56356U;
    msg.x = 0.965151763425;
    msg.y = 0.617243947649;
    msg.z = 0.487147835765;

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
    msg.setTimeStamp(0.184947752521);
    msg.setSource(3982U);
    msg.setSourceEntity(27U);
    msg.setDestination(521U);
    msg.setDestinationEntity(169U);
    msg.target = 46021U;
    msg.lat = 0.800361758477;
    msg.lon = 0.508937705688;
    msg.z_units = 32U;
    msg.z = 0.414974729036;

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
    msg.setTimeStamp(0.328915086811);
    msg.setSource(64410U);
    msg.setSourceEntity(244U);
    msg.setDestination(22166U);
    msg.setDestinationEntity(85U);
    msg.target = 42820U;
    msg.lat = 0.909689819827;
    msg.lon = 0.369508168687;
    msg.z_units = 155U;
    msg.z = 0.569833035565;

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
    msg.setTimeStamp(0.718670691332);
    msg.setSource(13621U);
    msg.setSourceEntity(176U);
    msg.setDestination(56566U);
    msg.setDestinationEntity(224U);
    msg.target = 60134U;
    msg.lat = 0.0278905800494;
    msg.lon = 0.234811817042;
    msg.z_units = 132U;
    msg.z = 0.186996756364;

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
    msg.setTimeStamp(0.952422911749);
    msg.setSource(28826U);
    msg.setSourceEntity(165U);
    msg.setDestination(47895U);
    msg.setDestinationEntity(122U);
    msg.locale.assign("KBZDOILFHNPYXWPNKKWLPNMTEIYZLKZHVMRBCJAWNRXZJLOXRFUJDZGAYELCWSQKIHUCFEA");
    const char tmp_msg_0[] = {-7, 1, -68, 88, -51, -118, 36, 79, -94, -54, -74, 66, -17, 38, 27, 81, -100, -71, 20, 70, -1, -102, 70, -27, 42, 46, -33, -81, 64, -69, 82, 86, 40, -84, -9, 20, 9, -65, -87};
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
    msg.setTimeStamp(0.167031345778);
    msg.setSource(8567U);
    msg.setSourceEntity(218U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(169U);
    msg.locale.assign("ZPOSIMTGHWZWLVQIDNXFBYTPWXJJGTGFWMKOIHVENLMCNYUXOSLVGYKNTWEAMROUCLGQQYPVXOSSAYSZWXHSRJAIKVEXJFCZDBWEFIBLNSIEAKPVDOQRLKQKSOPTZRWTQVGDEIOKGLAAARXIAXKNZEUEPHKPRCUSDBWIVECDULCURYUZQWXNUAJJZFQYPLURJPIZCHYFMBMBFFXKBDJQGBDMJCQYDHZRSBMGHFMTTNFRVHUYJVELTHDPMBGHN");
    const char tmp_msg_0[] = {29, -5, -8, 69, 77, 1, 56, -117, 23, -86, 78, -11, -9, -21, 91, 112, 56, -120, -47, -27, 20, 99, 22, -62, -102, 31, 12, 22, -16, 97, -74, -58, 67, 83, -14, 64, -24, 51, 105, 121, 82, 21, -32, 124, -6, -31, -83, 77, 100, -95, -123, -47, 111, 56, 43, -57, -11, -116, -49, -46, 115, -29, -34, 41, -19, -21, -122, -1, 7, 14, 120, -93, 42, -81, 101, 24, -5, -62, 88, 5, 48, 1, 122, -29, -48, 13, 67, -10, 21, -2, -30, -16, -39, -76, 23, 20, 84, -79, 114, 79, -1, 94, 119, 16, -85, -59, -93, -11, 20, -64, 11, 57, -74, 79, -38, 109, 6, -114, 47, -63, 21, -92, 80, 102, 18, -60, 72, 113, -54, -81, 28, 77, -95, -88, -106, -91, -103, -36, 108, -123, 50, 75, 19, -79, -63, 124, 93, -22, -85, 15, 25, -119, 7, -75, -96, 120, -89, 44, -96, 36, -111, 11, -114, 80, -53, -114, -85, -21, -48, 14, 62, -78, -8, 67, 112, -121, 21, 24, 108, -67, -122, -67, 81, -120, 10, 67, -63, -83, -8, -89, -50, -128, 93, 29, -68, -54, 48, 12, -98, 69, 24, -12, 101, 33, 51, -6, -119, -55, 90, -126, -15, -78, -5, 80, 125, 2, -34};
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
    msg.setTimeStamp(0.86305034043);
    msg.setSource(33215U);
    msg.setSourceEntity(47U);
    msg.setDestination(22397U);
    msg.setDestinationEntity(76U);
    msg.locale.assign("ILVTNOSBUOLAYZUFCKQAGFPDJKTGWYSELCSVANMGSRISOYJVZRBDPXAUJXWLHONFXIBCZEWYHECIMYZLGZJGJBRQVEKBINCWEBRHPTHPQCZZSZHKDGNQEHWYAPYPAQQXYXDWJNMKGJDVXEHDVRFGVERJFMXOWMOQXLVNFDAQYPXMNZTKIWGPRFUTIXBSMPVMSOGBDCQEMVRCLDCENDLB");
    const char tmp_msg_0[] = {116, -85, 123, 60, 96, -54, -88, -76, -1, -54, 18, 30, -71, 123, -17};
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
    msg.setTimeStamp(0.820522434306);
    msg.setSource(14341U);
    msg.setSourceEntity(215U);
    msg.setDestination(65154U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.281292206343);
    msg.setSource(36265U);
    msg.setSourceEntity(72U);
    msg.setDestination(42910U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.855114246766);
    msg.setSource(8286U);
    msg.setSourceEntity(87U);
    msg.setDestination(52894U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.844840664836);
    msg.setSource(13642U);
    msg.setSourceEntity(7U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(208U);
    msg.camid = 137U;
    msg.x = 53987U;
    msg.y = 13457U;

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
    msg.setTimeStamp(0.239398227181);
    msg.setSource(94U);
    msg.setSourceEntity(37U);
    msg.setDestination(31821U);
    msg.setDestinationEntity(76U);
    msg.camid = 198U;
    msg.x = 35848U;
    msg.y = 37275U;

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
    msg.setTimeStamp(0.561785101738);
    msg.setSource(61541U);
    msg.setSourceEntity(253U);
    msg.setDestination(52924U);
    msg.setDestinationEntity(96U);
    msg.camid = 106U;
    msg.x = 11709U;
    msg.y = 15909U;

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
    msg.setTimeStamp(0.167964791629);
    msg.setSource(27390U);
    msg.setSourceEntity(90U);
    msg.setDestination(629U);
    msg.setDestinationEntity(216U);
    msg.camid = 249U;
    msg.x = 64142U;
    msg.y = 34605U;

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
    msg.setTimeStamp(0.99356923851);
    msg.setSource(11003U);
    msg.setSourceEntity(136U);
    msg.setDestination(5291U);
    msg.setDestinationEntity(233U);
    msg.camid = 236U;
    msg.x = 19238U;
    msg.y = 28582U;

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
    msg.setTimeStamp(0.567601414654);
    msg.setSource(48127U);
    msg.setSourceEntity(156U);
    msg.setDestination(28393U);
    msg.setDestinationEntity(66U);
    msg.camid = 29U;
    msg.x = 4145U;
    msg.y = 23595U;

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
    msg.setTimeStamp(0.0312371100688);
    msg.setSource(6095U);
    msg.setSourceEntity(250U);
    msg.setDestination(15071U);
    msg.setDestinationEntity(102U);
    msg.tracking = 11U;
    msg.lat = 0.603711065385;
    msg.lon = 0.742653493957;
    msg.x = 0.15924714702;
    msg.y = 0.00764652926018;
    msg.z = 0.173453719051;

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
    msg.setTimeStamp(0.835804701029);
    msg.setSource(62976U);
    msg.setSourceEntity(147U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(158U);
    msg.tracking = 81U;
    msg.lat = 0.925145248936;
    msg.lon = 0.391098259429;
    msg.x = 0.978763927229;
    msg.y = 0.0025326612916;
    msg.z = 0.19285925474;

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
    msg.setTimeStamp(0.362092716568);
    msg.setSource(18932U);
    msg.setSourceEntity(1U);
    msg.setDestination(37784U);
    msg.setDestinationEntity(137U);
    msg.tracking = 135U;
    msg.lat = 0.100992313003;
    msg.lon = 0.118231656722;
    msg.x = 0.379096711474;
    msg.y = 0.248102910106;
    msg.z = 0.782192143377;

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
    msg.setTimeStamp(0.858590626157);
    msg.setSource(64428U);
    msg.setSourceEntity(226U);
    msg.setDestination(46799U);
    msg.setDestinationEntity(47U);
    msg.target.assign("SJMQAMQYPXUEMXATVTERUCNNKTHNJRAIUKVWDVFWACDQYTKSBBGJGFTDKQPXJXHCGJQTDAEBFGAFYOUDZFRZEQUESZOXDIGEIKTHQJGJFYBDVFMRROIHPLMNWHVGJPKYZZNIKCGLZPHZXYHPOKATEGJCAR");
    msg.lbearing = 0.207819913738;
    msg.lelevation = 0.228590541087;
    msg.bearing = 0.778927343745;
    msg.elevation = 0.91020946993;
    msg.phi = 0.961566446278;
    msg.theta = 0.191300128772;
    msg.psi = 0.00923953556293;
    msg.accuracy = 0.924964956173;

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
    msg.setTimeStamp(0.592299551791);
    msg.setSource(23549U);
    msg.setSourceEntity(195U);
    msg.setDestination(54028U);
    msg.setDestinationEntity(192U);
    msg.target.assign("SIBPOWDLQDNXSWBNGXNRUFQLFUKJKCEESBRMPAFJGNHKCBVYVCAITXMTSRHMNZTORNQVCEBMJXEXXYQIQJKITUROHUZNBIMIIBYOIZVWQOEPAXENKLZFLLZRJLMWHVGWFCWWMUBLDRZCIODJKECZOLDDJAGQAJHYHODPUKFFHPEXWSXOBMAPHACYNCTKLPUSTVSHDSJEAQKIYDFTYVGRPPBTSKRTCGFMYNTGGVJVGFZMSUHLDXWAUP");
    msg.lbearing = 0.423279473051;
    msg.lelevation = 0.0794309734268;
    msg.bearing = 0.471360832759;
    msg.elevation = 0.775677871052;
    msg.phi = 0.890421086033;
    msg.theta = 0.492137807296;
    msg.psi = 0.32658569916;
    msg.accuracy = 0.93492948465;

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
    msg.setTimeStamp(0.572857288519);
    msg.setSource(44301U);
    msg.setSourceEntity(225U);
    msg.setDestination(41006U);
    msg.setDestinationEntity(100U);
    msg.target.assign("OHGKTISXREJONSLHYYKJBVADVKLRACCSHNGUBQMXFKFPJTZGVRTRIVBZIFWFNJWGFLTJEEYKLNTJYOVFDQYNPRNVDXHAUYLQNHRQYQRQDDDLMJYWOBPR");
    msg.lbearing = 0.884710003358;
    msg.lelevation = 0.634588176814;
    msg.bearing = 0.645288124172;
    msg.elevation = 0.672525261462;
    msg.phi = 0.512867392301;
    msg.theta = 0.577645642387;
    msg.psi = 0.717219255929;
    msg.accuracy = 0.529789237904;

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
    msg.setTimeStamp(0.495657070397);
    msg.setSource(48776U);
    msg.setSourceEntity(51U);
    msg.setDestination(35442U);
    msg.setDestinationEntity(182U);
    msg.target.assign("VAAXBJGLNZRRNOIOXUTENTSYIFNVXLEBQDLJCLCRNYPQGAFKTQXUSNIXXPBFVPGWHYOYBIVWQWOSQXWYGTCWRKAZPFNPGYZPYXKLKTWWCLHGDHBENPTISDAXLGUHIHGKDJSJMESJCALFHZDFEIYEDVMRJIWDTGLMMVQOPQJUADOKGRHJTOKHCBZRBNDFMHZFECKRNSAQYLUSTTVMJWEFUUBPZVRMABJHMFVUECZSIBCVYQWAP");
    msg.x = 0.46767081444;
    msg.y = 0.524123495569;
    msg.z = 0.522814550726;
    msg.n = 0.704603643081;
    msg.e = 0.536933630314;
    msg.d = 0.323942561442;
    msg.phi = 0.0891041217351;
    msg.theta = 0.364464168792;
    msg.psi = 0.345143593277;
    msg.accuracy = 0.398413034602;

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
    msg.setTimeStamp(0.620004636222);
    msg.setSource(56535U);
    msg.setSourceEntity(44U);
    msg.setDestination(41167U);
    msg.setDestinationEntity(85U);
    msg.target.assign("ZXUMSOIZDNVVKCHKCQDVGSLFEXVQPYLNXKDBKYAR");
    msg.x = 0.781024515246;
    msg.y = 0.237876335741;
    msg.z = 0.806525315978;
    msg.n = 0.753221058424;
    msg.e = 0.407638757986;
    msg.d = 0.162786637129;
    msg.phi = 0.359181652028;
    msg.theta = 0.831993609529;
    msg.psi = 0.206585899647;
    msg.accuracy = 0.980675695032;

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
    msg.setTimeStamp(0.0820359159265);
    msg.setSource(18816U);
    msg.setSourceEntity(73U);
    msg.setDestination(40800U);
    msg.setDestinationEntity(203U);
    msg.target.assign("TMHDGQOIWEEGGALHWSMEUQIGCXXLZZZUKEVAKYNIMCNZQJUJEUMSOKDSQRHLYTLAVKVYERNZPKWXOUJRDTHDWDKBLWNBJIAFWANUBOZTIXMHWRCGOFHZGZUBXFRTNLTCVJRPAXMBNQVBMRXQVIBBMSSG");
    msg.x = 0.130688621274;
    msg.y = 0.944837921891;
    msg.z = 0.445223063615;
    msg.n = 0.861950205644;
    msg.e = 0.686258762777;
    msg.d = 0.72489601061;
    msg.phi = 0.172636755664;
    msg.theta = 0.886243652976;
    msg.psi = 0.414079380966;
    msg.accuracy = 0.727480987971;

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
    msg.setTimeStamp(0.662092676025);
    msg.setSource(20914U);
    msg.setSourceEntity(233U);
    msg.setDestination(16914U);
    msg.setDestinationEntity(236U);
    msg.target.assign("WCCWULTGTAJCFIWXLHGYPCNLDLJFYTWIXKUMQJRUVHEYHVSOARFORBHSSMGFFZYEPIDLJVNIRBDZKZAQEOIAKXOOEPMOEKUWWXDQGNSZUTUMJOUJAWOPTPRGNMHVXSUBCZDPBARDQBTXEPUPSELGZMXXJCRRAGISRSZNOBLEFEDHV");
    msg.lat = 0.0427738179384;
    msg.lon = 0.925132250031;
    msg.z_units = 224U;
    msg.z = 0.555887876402;
    msg.accuracy = 0.0206739080571;

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
    msg.setTimeStamp(0.452686331328);
    msg.setSource(23774U);
    msg.setSourceEntity(132U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(218U);
    msg.target.assign("KBIPGPYEKIKWOLYFKQDBPEFRFZTRXVSZUVWYIGHXCSVUCRDNBOWBWIJMIOKKIQYODIXNOCIRSRGCCVTLDMCXLDPLEFETSWMZEXABTXFMMIBIRWHAUEXQSPQLYTOZPEXTCLFSFZSXHYJYMDJENGKZERSAKSLZBJY");
    msg.lat = 0.853564602704;
    msg.lon = 0.575313135151;
    msg.z_units = 177U;
    msg.z = 0.00871558951301;
    msg.accuracy = 0.558303353307;

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
    msg.setTimeStamp(0.261060824207);
    msg.setSource(38514U);
    msg.setSourceEntity(109U);
    msg.setDestination(25989U);
    msg.setDestinationEntity(39U);
    msg.target.assign("PZKQZRYAMZJBIFMYJINNGINOYOWZBCKFAQZWOA");
    msg.lat = 0.679158527247;
    msg.lon = 0.0959190337165;
    msg.z_units = 11U;
    msg.z = 0.177271559976;
    msg.accuracy = 0.840481071871;

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
    msg.setTimeStamp(0.942436647744);
    msg.setSource(30960U);
    msg.setSourceEntity(199U);
    msg.setDestination(64943U);
    msg.setDestinationEntity(27U);
    msg.name.assign("KANRRCFGMJUWJVTTPHVDIILSNGRYOBTTFBZVFPGERADWVGZZDLHGBEFOEESKLEWQJTZWMCVGXQJORDKCPSYKCIISDJJHVSAPTWUZLPETNUFFMYEBWOOXJKREIQZXHODBWNLEKKCPAPXWYDCOGHLZXGMQBYUNHNGAVMBYAAUKMRCFMXEIICXCYVLC");
    msg.lat = 0.122722508644;
    msg.lon = 0.930628162389;
    msg.z = 0.919543293588;
    msg.z_units = 156U;

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
    msg.setTimeStamp(0.157572553367);
    msg.setSource(26633U);
    msg.setSourceEntity(158U);
    msg.setDestination(50320U);
    msg.setDestinationEntity(7U);
    msg.name.assign("LSPSRIAQEGZKJUEHBTSMVDCABWDECRLNCVKHBBSN");
    msg.lat = 0.787218084249;
    msg.lon = 0.414971583105;
    msg.z = 0.271039552964;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.482382603998);
    msg.setSource(24986U);
    msg.setSourceEntity(199U);
    msg.setDestination(42616U);
    msg.setDestinationEntity(39U);
    msg.name.assign("NCKFMEHOQYVDVHCELYH");
    msg.lat = 0.0841713910742;
    msg.lon = 0.999732136785;
    msg.z = 0.481950036735;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.921022392455);
    msg.setSource(19577U);
    msg.setSourceEntity(195U);
    msg.setDestination(50244U);
    msg.setDestinationEntity(188U);
    msg.op = 24U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("MLSPWGBUSLBMVGVRCGNHHRSLKITAOTNMOHTZBO");
    tmp_msg_0.lat = 0.761953922329;
    tmp_msg_0.lon = 0.605644721681;
    tmp_msg_0.z = 0.55251174788;
    tmp_msg_0.z_units = 32U;
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
    msg.setTimeStamp(0.199732418889);
    msg.setSource(26805U);
    msg.setSourceEntity(202U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(155U);
    msg.op = 183U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CIQWXMFFNPWLUHYFTLPVYVLLYCNRPIGEJYGBDMJJAROQKMTJPBHLGQANEIMGIHTOKJASXIYFROEKEKYZFITTNK");
    tmp_msg_0.lat = 0.271254316382;
    tmp_msg_0.lon = 0.923648751071;
    tmp_msg_0.z = 0.709296175016;
    tmp_msg_0.z_units = 69U;
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
    msg.setTimeStamp(0.391496836233);
    msg.setSource(5987U);
    msg.setSourceEntity(237U);
    msg.setDestination(31045U);
    msg.setDestinationEntity(232U);
    msg.op = 171U;

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
    msg.setTimeStamp(0.9473067788);
    msg.setSource(29988U);
    msg.setSourceEntity(12U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(35U);
    msg.value = 0.573445019168;
    msg.type = 209U;

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
    msg.setTimeStamp(0.737932913035);
    msg.setSource(21205U);
    msg.setSourceEntity(134U);
    msg.setDestination(47712U);
    msg.setDestinationEntity(155U);
    msg.value = 0.446591241437;
    msg.type = 169U;

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
    msg.setTimeStamp(0.27435686863);
    msg.setSource(54169U);
    msg.setSourceEntity(205U);
    msg.setDestination(60659U);
    msg.setDestinationEntity(153U);
    msg.value = 0.636098434839;
    msg.type = 90U;

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
    msg.setTimeStamp(0.60998621028);
    msg.setSource(47920U);
    msg.setSourceEntity(177U);
    msg.setDestination(25449U);
    msg.setDestinationEntity(207U);
    msg.value = 0.248942724999;

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
    msg.setTimeStamp(0.543416054758);
    msg.setSource(35036U);
    msg.setSourceEntity(192U);
    msg.setDestination(11054U);
    msg.setDestinationEntity(227U);
    msg.value = 0.208934142501;

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
    msg.setTimeStamp(0.0375154221698);
    msg.setSource(58587U);
    msg.setSourceEntity(119U);
    msg.setDestination(49107U);
    msg.setDestinationEntity(56U);
    msg.value = 0.687858687237;

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
    msg.setTimeStamp(0.377084862914);
    msg.setSource(63646U);
    msg.setSourceEntity(237U);
    msg.setDestination(35037U);
    msg.setDestinationEntity(124U);
    msg.timestamp_last_service = 0.770474766251;
    msg.time_next_service = 0.427695302052;
    msg.time_motor_next_service = 0.528503449523;
    msg.time_idle_ground = 0.58163246615;
    msg.time_idle_air = 0.272296480289;
    msg.time_idle_water = 0.283434168719;
    msg.time_idle_underwater = 0.757990575252;
    msg.time_idle_unknown = 0.717228897138;
    msg.time_motor_ground = 0.382013339876;
    msg.time_motor_air = 0.404219204255;
    msg.time_motor_water = 0.489817897352;
    msg.time_motor_underwater = 0.353807268784;
    msg.time_motor_unknown = 0.664162385775;
    msg.rpm_min = -17773;
    msg.rpm_max = -22250;
    msg.depth_max = 0.146348457128;

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
    msg.setTimeStamp(0.884472306125);
    msg.setSource(486U);
    msg.setSourceEntity(173U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(86U);
    msg.timestamp_last_service = 0.221191062149;
    msg.time_next_service = 0.44596249696;
    msg.time_motor_next_service = 0.287507702646;
    msg.time_idle_ground = 0.0524419534109;
    msg.time_idle_air = 0.783001315304;
    msg.time_idle_water = 0.529334494038;
    msg.time_idle_underwater = 0.616395515484;
    msg.time_idle_unknown = 0.589726219896;
    msg.time_motor_ground = 0.593993413459;
    msg.time_motor_air = 0.619238442147;
    msg.time_motor_water = 0.408378751135;
    msg.time_motor_underwater = 0.644029223883;
    msg.time_motor_unknown = 0.0159086528871;
    msg.rpm_min = 574;
    msg.rpm_max = 5277;
    msg.depth_max = 0.820896916982;

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
    msg.setTimeStamp(0.0518870335982);
    msg.setSource(64260U);
    msg.setSourceEntity(94U);
    msg.setDestination(4304U);
    msg.setDestinationEntity(120U);
    msg.timestamp_last_service = 0.611834949634;
    msg.time_next_service = 0.0658314254594;
    msg.time_motor_next_service = 0.0226335166946;
    msg.time_idle_ground = 0.348113060256;
    msg.time_idle_air = 0.824082999693;
    msg.time_idle_water = 0.894658366517;
    msg.time_idle_underwater = 0.595457283311;
    msg.time_idle_unknown = 0.219027658476;
    msg.time_motor_ground = 0.489046100332;
    msg.time_motor_air = 0.493927704819;
    msg.time_motor_water = 0.52129439968;
    msg.time_motor_underwater = 0.480146295454;
    msg.time_motor_unknown = 0.00192227530199;
    msg.rpm_min = 26216;
    msg.rpm_max = -7663;
    msg.depth_max = 0.855468402684;

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
    msg.setTimeStamp(0.187642497205);
    msg.setSource(50430U);
    msg.setSourceEntity(171U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(37U);
    msg.severity = 231U;
    msg.text.assign("ZRDTHNBEPPMYFDROHAUZCLVCVMUVNBNDCOGOLQHVKVURQUJQMZASZUCRKFFIBYLGTOSSGPUWLASQXJYKVJJJWXAI");

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
    msg.setTimeStamp(0.312989352656);
    msg.setSource(35276U);
    msg.setSourceEntity(126U);
    msg.setDestination(36111U);
    msg.setDestinationEntity(132U);
    msg.severity = 187U;
    msg.text.assign("YLIAVLUZJBNMFIEGELRSXKWVFUSJYVSKTMLDNVBPKDIPYNWOVHQSWOWACJZKEADZLHATSQRATCOALEQBTNCJBYGWDOMFGOGXPPUFGVCRDNZRMHQIYJQXCOBFXEUXCJPGHBVMRNUIRDYLSUSKQONMVRPKFTLBPJTWMNQYXWUTPFKKUXAOPANDKPXCBLEFTQZHHEIYSHNWHVEIUAZDRHVFODJLUFWKYZCQBSGMCATOMXYIZZ");

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
    msg.setTimeStamp(0.263281978629);
    msg.setSource(31576U);
    msg.setSourceEntity(67U);
    msg.setDestination(28593U);
    msg.setDestinationEntity(18U);
    msg.severity = 42U;
    msg.text.assign("GLXEFKVAHICQBQAVPOULZXDBMFSTNGTWTEKYPBSNKUMPYRDQJ");

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

  return test.getReturnValue();
}
