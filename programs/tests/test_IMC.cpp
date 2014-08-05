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
    msg.setTimeStamp(0.5107491857469303);
    msg.setSource(7618U);
    msg.setSourceEntity(198U);
    msg.setDestination(39313U);
    msg.setDestinationEntity(234U);
    msg.state = 214U;
    msg.flags = 104U;
    msg.description.assign("ZLUHFZSNJYIFLSZPWULVXPLROXDAEKBPGPKOFVDYPOZEHXMCHFCTDOGYPINMSVHUJFWOIVBGKHOJWAPHCICDWNMJJKDLUGDSYIZBAUTURAZAXWTDTMXNRFVNDLJGGWFCITUNVHEEZGZLEYPNGLEKWOCWSQQDCBKTISBXNGQRXTCXQYOVXIQLHARETHQJ");

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
    msg.setTimeStamp(0.10257244609712624);
    msg.setSource(37013U);
    msg.setSourceEntity(39U);
    msg.setDestination(26369U);
    msg.setDestinationEntity(7U);
    msg.state = 209U;
    msg.flags = 38U;
    msg.description.assign("HQOEANOUMWLFIFJVJOPWVNVVFQIJWIYLQHBXMR");

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
    msg.setTimeStamp(0.5848398195999461);
    msg.setSource(62739U);
    msg.setSourceEntity(159U);
    msg.setDestination(34026U);
    msg.setDestinationEntity(1U);
    msg.state = 197U;
    msg.flags = 11U;
    msg.description.assign("BWWAZEVRFDMUOCGLOHJZTNCMNULKJYPNKQWRALOSFXGYGTPBEVQTWZKLDUZJRYTTCD");

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
    msg.setTimeStamp(0.9411722199435627);
    msg.setSource(61670U);
    msg.setSourceEntity(108U);
    msg.setDestination(37114U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.5582080164049754);
    msg.setSource(47799U);
    msg.setSourceEntity(183U);
    msg.setDestination(24113U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.6129532378016403);
    msg.setSource(45113U);
    msg.setSourceEntity(172U);
    msg.setDestination(1670U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.8266999672562877);
    msg.setSource(2117U);
    msg.setSourceEntity(83U);
    msg.setDestination(51896U);
    msg.setDestinationEntity(146U);
    msg.id = 31U;
    msg.label.assign("TMYFAVDERVYAGPHLUDLJNH");
    msg.component.assign("KCXNZGVDPIKMUCSBILZYKKSUJBPROFJQVRGIBQBAHCHHDNMGNQFAYNRGPVXZBQUVOQFM");
    msg.act_time = 48895U;
    msg.deact_time = 10469U;

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
    msg.setTimeStamp(0.07236051050410375);
    msg.setSource(27531U);
    msg.setSourceEntity(192U);
    msg.setDestination(36143U);
    msg.setDestinationEntity(133U);
    msg.id = 103U;
    msg.label.assign("NQPQEOQWAGKDTETOFWBYGLJVHPNWZJRUBDFIMKIBBKTXBMGWXIBXQZSIBMFHUBJOAVVYJYJJNQVFZTZDCKGSGFAQZESBDCXZLBCWCCDNNRILUIHRXRKKSEMNTATMSTVOORFHUPAPSRTFCVXYLLEXJPVPDRGFCDVWRVDHEWLCE");
    msg.component.assign("IIPKYVPTULNPNOKXEZZXZVKPBUXDIMIVGABESMFRLUCQSQADLDGHQTECHWCMMQCGFNKKTJXHCXDOHSTSBJEYQABRNSGFVVFZSRPSQNJXUMIWWJSBACJYYODYLBVWCOAUCPVENZULWWRXMTFRGJF");
    msg.act_time = 23534U;
    msg.deact_time = 38678U;

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
    msg.setTimeStamp(0.05400939774045366);
    msg.setSource(55757U);
    msg.setSourceEntity(11U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(119U);
    msg.id = 98U;
    msg.label.assign("UBDSBEXDWXOQWBFPEBCLYVAIXOVEPVTDDYSLNPNHYDTGLZQTEMWSAGJYOSTZLGCKNIJCXHCPKPWXTRBRTWYZGUUWREHAGFRNKPZGNZVOWDKWILSMFMQANNMBUVDRJTCJVMDJFGQZFVQIORZHHCJHUGNTAPORBIWNJOAFBIFROQDEFKUGZVHEXKUCHHACJERYGFPICAJMXVECEVKXMQB");
    msg.component.assign("TYYZJLWFUNWEVRIVSGSMGHWVXRCBESSRNOTEFPBICIQHPDLCNKIHTMJAMLDIHWVZQWKQUBUYGMQUYUERHLWSXTOXGLKYKPGVPJCZQEYEXXOQLIKFUROINABLSUDRFCKHMXBRNFUMARPBAQJZPTNTJUHEBLVPHADARJAMGSJWTMASFEZDPYFWTVBGLIZBAWEDSLCGXPOGOZFOCGKFOTIJKJQDXYPZQYZKNDCWU");
    msg.act_time = 10712U;
    msg.deact_time = 34229U;

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
    msg.setTimeStamp(0.3151614346734033);
    msg.setSource(13668U);
    msg.setSourceEntity(71U);
    msg.setDestination(32219U);
    msg.setDestinationEntity(60U);
    msg.id = 155U;

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
    msg.setTimeStamp(0.9293434833159183);
    msg.setSource(55165U);
    msg.setSourceEntity(67U);
    msg.setDestination(39967U);
    msg.setDestinationEntity(86U);
    msg.id = 249U;

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
    msg.setTimeStamp(0.290841212806753);
    msg.setSource(37701U);
    msg.setSourceEntity(105U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(45U);
    msg.id = 228U;

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
    msg.setTimeStamp(0.1301976815369067);
    msg.setSource(52220U);
    msg.setSourceEntity(34U);
    msg.setDestination(55353U);
    msg.setDestinationEntity(182U);
    msg.op = 47U;
    msg.list.assign("RGFPKBKFSBSSWSQPVXAWZDFWOLYURMHWXBEQVETFXZRPTDVTALMWTFWXIAQIMTUSCGBDTOWHECMMJJGKUGTUPHVTLPOZXEZKZDAVXIFXEMLJOAGJMCCQHQHW");

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
    msg.setTimeStamp(0.13276576552583386);
    msg.setSource(4789U);
    msg.setSourceEntity(223U);
    msg.setDestination(43973U);
    msg.setDestinationEntity(95U);
    msg.op = 29U;
    msg.list.assign("ZZVLXOKXZORHDCMJRFHYRLRQMDSOFAAKBBGCODXTWESJKFPKWTXREGSBYFXWTAGMZXSICAHPLIINJWCVWHBRZIZIYPUUHQSEVJCYKCIOTZRXIHPNKUBSWHZTDHGJSDDLWPPCANAQVYIUKBYCWFIWRHMXPMFGBQGOQOTDVGNSSXIMUKOFATLQZDYJVCDDLAJFKOVVXUURQMKNFNETSJFJELLNAUN");

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
    msg.setTimeStamp(0.6320538718089588);
    msg.setSource(5704U);
    msg.setSourceEntity(12U);
    msg.setDestination(29201U);
    msg.setDestinationEntity(29U);
    msg.op = 95U;
    msg.list.assign("XMUSTDDJQUIYXZCLTMIVQYYUMPVLDHEHTVAPWSFTTJOGFIBZCANUGUEAJKORSNCPMDPOHRJRIHIAZKGRAJAOWVUUKBHWAEPYCBKICBEPEHKFFWZXMMRJWEKOWPXISGXFGJLLCHRMQBQGXNVUIMHZNKOQZNEIRVOCVVDSLBXCZTE");

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
    msg.setTimeStamp(0.7867045469920011);
    msg.setSource(53263U);
    msg.setSourceEntity(136U);
    msg.setDestination(47398U);
    msg.setDestinationEntity(209U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.07460482386346057);
    msg.setSource(1684U);
    msg.setSourceEntity(41U);
    msg.setDestination(29143U);
    msg.setDestinationEntity(124U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.5930678127949881);
    msg.setSource(47249U);
    msg.setSourceEntity(161U);
    msg.setDestination(25547U);
    msg.setDestinationEntity(130U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.7998204968076291);
    msg.setSource(39100U);
    msg.setSourceEntity(36U);
    msg.setDestination(39764U);
    msg.setDestinationEntity(210U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.3262048051658143);
    msg.setSource(53002U);
    msg.setSourceEntity(56U);
    msg.setDestination(818U);
    msg.setDestinationEntity(27U);
    msg.value = 167U;

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
    msg.setTimeStamp(0.13714758623854395);
    msg.setSource(49514U);
    msg.setSourceEntity(196U);
    msg.setDestination(39592U);
    msg.setDestinationEntity(189U);
    msg.value = 125U;

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
    msg.setTimeStamp(0.1771800029716205);
    msg.setSource(10410U);
    msg.setSourceEntity(17U);
    msg.setDestination(56505U);
    msg.setDestinationEntity(96U);
    msg.consumer.assign("YNAGHCYLGHAKDGTBHCSNHNBDUZBRSUYQZIXQSMPNZILETVLNZZO");
    msg.message_id = 35552U;

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
    msg.setTimeStamp(0.7021510998441182);
    msg.setSource(42467U);
    msg.setSourceEntity(104U);
    msg.setDestination(26792U);
    msg.setDestinationEntity(130U);
    msg.consumer.assign("LKZQGZGGKOFSSWTGFRVJCJRPGHCEZACSVEAVZLLPDYSEXTLJGQYGYCAPAFEFTRFSJDKDMCIUCHKKQLNZWUQCITKBDQKZVNYIUBUXNSKDWWYPEWILOQBHPUAWRDSDOWBNNLIBPJIHVUTQACAWONEVYLHGEAVHRBDXBGXCMUYKVXZPORETTMMNBMBFTHOSOWUDWHIUMQCYOEXOXSRFSRRLLZBPVMYKJJNUHGZHMMFA");
    msg.message_id = 60902U;

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
    msg.setTimeStamp(0.2764996021155418);
    msg.setSource(15297U);
    msg.setSourceEntity(163U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(221U);
    msg.consumer.assign("HJIQSUXJCMHQHDKYGVANFUCRMQJDRNFYHNUOIWTZHACQAOPJTVNYYXKCSWPPGDSOTWJXMNVLHURBKXMGCLQHSKBGWDPADNAFSLFWXBEONTYRSZAXSGAKFEPNVCXDVQYGQCQEMIZBZKZIORWTBHBAHZWGDRSGTUTBFJJPFEVVYWEHREMNLMOCULXTXVOOSRSLBPP");
    msg.message_id = 43544U;

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
    msg.setTimeStamp(0.6072472429284149);
    msg.setSource(26588U);
    msg.setSourceEntity(26U);
    msg.setDestination(27435U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.5930024558012177);
    msg.setSource(50516U);
    msg.setSourceEntity(108U);
    msg.setDestination(10515U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.7509810042886795);
    msg.setSource(10684U);
    msg.setSourceEntity(21U);
    msg.setDestination(46583U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.4895408958302523);
    msg.setSource(31484U);
    msg.setSourceEntity(103U);
    msg.setDestination(22898U);
    msg.setDestinationEntity(240U);
    msg.section.assign("BJMAMOFSQXNLEGRZIMOOVOIBGRETCVTMUWTQEKSWLZUYFHCVDQCVITCAJCCZUQAFAYHWRWGXLBPMTYXGTGNXKHIYUMSMRQZKXZARIIOYSNKBEPYELIYEDDHHUIUMKVWROPHVZYYINNDKRGASZRPA");
    msg.param.assign("GEREHZLEVCICKWSAOAKLAWXQMVAARUJUIYJONJMLOIIOPPGOOAOFMZIMWMFTKFGQTLGTJBAUVRINYEJRYRUSZHBXCFRYPHNKUDGXJOXVKZBZAX");
    msg.value.assign("GHCAWJQPOOEGMZIPFIPQEDDLKCKUVLICGHKMCNVAENJSBRXJHOEFJKBLIZUAKWXWSPANLFZRLTYFXBODCTUXMBAAOBTNFHEYCYEMCQSOZGHKPZYJBDHPXRUPARUZLNDONDRRTQRGXJ");

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
    msg.setTimeStamp(0.37274339311965077);
    msg.setSource(23152U);
    msg.setSourceEntity(240U);
    msg.setDestination(35255U);
    msg.setDestinationEntity(164U);
    msg.section.assign("PFLGZJNTCZHQGONSFLPAUDGZVMHZTMBEKUDDNGWNJSWOSYAUBXOBOYRSVDAFRAEGINBIGRCRMYCFFAYFRFOORINEKBJMKWZKHEQAJLYRKQLILZVXTBTUVHSYVDIQDIWKESMXPUKAKPSLVJFCAHMMGQULLJNYATOCCEEHPHXBSPVGXNDYXNQTOXDJFQVRACIZVPEWH");
    msg.param.assign("NBWLMHUEWACFQVKMPSNBRMVOMOGZROKDTYVHBQKGPBMGNVHKIVQXJXZEJFAAWIMMOIDWXKALWWPXQVJGGDFZWJCMHYMUFYYLZTOHRAWDTQEUYELFVWKTBUSCJLXSBLBLHTOWOAUBLDDVSPKNXBRUZPFHJCTUYQEEUKTVVRJONLJLPQGNDRCGXRIYCAS");
    msg.value.assign("OQXWGYIHEKZMOPKXNHKUOXEJGNHJNXCYQPFAEMMJCYGONJTPRRGJTXVBALYVIOAYZBBSMVBYFHESAELRUFQDYTUNZGMBVDUAFFILWKLSUFWQDVJQATTLFZNICVDTMRFBTBGOQWSUROJZDSKEHDAQIHSFOLZTPTCASRMCTWNPGYAIBUQBHYALEHQKECXPCDSHKMDPZRFPZKVNOKXGDXPVJLIWIVWXDWKJWGHQNMGWCIXLCBERUU");

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
    msg.setTimeStamp(0.6787567000724387);
    msg.setSource(42322U);
    msg.setSourceEntity(168U);
    msg.setDestination(9405U);
    msg.setDestinationEntity(45U);
    msg.section.assign("ZNPQIBGRVKSADKVQOTVJQZHYCCEDMBITZVKRGUUXOIXOEKI");
    msg.param.assign("UTSBVUEQAJEVPDHBIKATOUYEHHYUBSDOMNORWWKYXDZLIMENCATINJPAHFKWDGFDJLMRLZUMRFRGZLQJBVVOWMUSYARKZWLKYQRTOGJUXNCSHVCVYLPELAYDQXZCBHQZPPQIJTRBINWBENLKOFGALFPXQKZITBFXRROGNDHSCJJZSNXCYPPHXORTJSXMZCIEDHOAEUIFNABXQEAS");
    msg.value.assign("RUZFUUHHQJLEAOVCGIVBINYXFWGFYXXZIDYNPUOLUZRGJLTAWJCJRZCATXEKWNUKBDXVPJHNIDLKBHDWEWDUBCRIPBTDZFXDOTIUFOEIZOQQYGGBCMXLKSCFWZSYMMKPFZGUCBLZAJMLHI");

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
    msg.setTimeStamp(0.7211077782643168);
    msg.setSource(36824U);
    msg.setSourceEntity(144U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(33U);
    msg.op = 141U;

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
    msg.setTimeStamp(0.5720979210121214);
    msg.setSource(37570U);
    msg.setSourceEntity(154U);
    msg.setDestination(36151U);
    msg.setDestinationEntity(64U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.09419714787847522);
    msg.setSource(46975U);
    msg.setSourceEntity(31U);
    msg.setDestination(11135U);
    msg.setDestinationEntity(141U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.44486569708691226);
    msg.setSource(63158U);
    msg.setSourceEntity(96U);
    msg.setDestination(60779U);
    msg.setDestinationEntity(141U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.6305183080671283);
    msg.setSource(25495U);
    msg.setSourceEntity(161U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(119U);
    msg.op = 207U;

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
    msg.setTimeStamp(0.2764109074159853);
    msg.setSource(48605U);
    msg.setSourceEntity(40U);
    msg.setDestination(34818U);
    msg.setDestinationEntity(72U);
    msg.op = 95U;

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
    msg.setTimeStamp(0.7425006701192796);
    msg.setSource(56735U);
    msg.setSourceEntity(248U);
    msg.setDestination(30564U);
    msg.setDestinationEntity(119U);
    msg.total_steps = 223U;
    msg.step_number = 103U;
    msg.step.assign("RBCFQOEOOTXAYXRAIJFZZUJNNIYYWVIUQGWQZJWBFMBBYNKDVGEHIIRRTHCMQLKGNCKNCTSLSSQNKDKMMIIPJROJEBZPVKKAHEJNSSPCGUWRAKTEVEZJAPGXRFUQXGHOOTUAAXWHOYYDWMPEDXLTLRBICQGWUAQVDZWDHLJUSNBDMYREOWKUSGATAPFMUQYDVQHSFTPVLBJLZCMXBFLZIIXTPL");
    msg.flags = 4U;

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
    msg.setTimeStamp(0.850698205959717);
    msg.setSource(41449U);
    msg.setSourceEntity(187U);
    msg.setDestination(6978U);
    msg.setDestinationEntity(121U);
    msg.total_steps = 20U;
    msg.step_number = 122U;
    msg.step.assign("XJAKVWFLGDJLCRFCEWQGYFGZYIHCKWQBTUGSNXWTEPFRIDCIMEHHPDMDNQBSIW");
    msg.flags = 15U;

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
    msg.setTimeStamp(0.316803255580677);
    msg.setSource(2336U);
    msg.setSourceEntity(130U);
    msg.setDestination(42833U);
    msg.setDestinationEntity(229U);
    msg.total_steps = 156U;
    msg.step_number = 116U;
    msg.step.assign("LPQUVNAFVKFKBWCQSFIROLRMIWOQPIQHFETTONOIRRWSQSELCOSLYDZYSWYETDJTCHJRFTYFDXPRMNVDGZBWGAQBZJCHWYOMMOBAKBUPZMPPUEPSUEZHSTZJVXZXMRF");
    msg.flags = 204U;

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
    msg.setTimeStamp(0.6634448928803951);
    msg.setSource(55501U);
    msg.setSourceEntity(164U);
    msg.setDestination(62495U);
    msg.setDestinationEntity(79U);
    msg.state = 20U;
    msg.error.assign("CAMHMHSICGNFPMTMWIKNHPOPEXHYXXZBSDSMWNHDXTWDALVRQQBHUJONBUECIECVVEPSDLCGLAGQSWYINQLKQEZGUFOTZFBAVXATEI");

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
    msg.setTimeStamp(0.405284201686576);
    msg.setSource(30243U);
    msg.setSourceEntity(234U);
    msg.setDestination(40086U);
    msg.setDestinationEntity(45U);
    msg.state = 155U;
    msg.error.assign("JVSMANTAUWKFELOGXZCYEIXEKGORVOKVMDYBFUHLGDFRQYMJFPCSSVPTYKXHABUMENJEUQRTNLJJQMUSGNSZNPYIYRMNJDKQWIKXSABHZBVOWUETHZAVYFLAMLUZAZOXEMBJGYODCRRPUTPWITOLXEGSYCHHJLRBBGAPVAJIKDEVHDRXYBVSNZXFZOFHQWCQARUPCOICIGRLUIIWVNFCQQLDGPWKMMTFCZFCOSTHBDNHDWBKPXX");

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
    msg.setTimeStamp(0.9890264480203639);
    msg.setSource(26737U);
    msg.setSourceEntity(139U);
    msg.setDestination(34593U);
    msg.setDestinationEntity(142U);
    msg.state = 164U;
    msg.error.assign("YQTTTEYGMTIZQIRGVWGCMZPLGNFRUJPVCVVDLSWKAMQDDOWHMQFHTGEOQTZZLIIOBNLVMSMVPPWNUYUEIGEBRUQIEEUPJBAOFQYTGVAEXPLOLKWFTUZUSNLKKDH");

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
    msg.setTimeStamp(0.004529257765087613);
    msg.setSource(54673U);
    msg.setSourceEntity(188U);
    msg.setDestination(25051U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.8960002396468242);
    msg.setSource(40450U);
    msg.setSourceEntity(117U);
    msg.setDestination(58306U);
    msg.setDestinationEntity(170U);

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
    msg.setTimeStamp(0.229367939977292);
    msg.setSource(26033U);
    msg.setSourceEntity(11U);
    msg.setDestination(36114U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.7349375947852306);
    msg.setSource(51392U);
    msg.setSourceEntity(23U);
    msg.setDestination(19346U);
    msg.setDestinationEntity(24U);
    msg.op = 163U;
    msg.speed_min = 0.16838973779675181;
    msg.speed_max = 0.10695323285540059;
    msg.long_accel = 0.9953854348679851;
    msg.alt_max_msl = 0.18794375853522538;
    msg.dive_fraction_max = 0.5880671811710867;
    msg.climb_fraction_max = 0.3622464286345084;
    msg.bank_max = 0.6501130193978469;
    msg.p_max = 0.8873951061418073;
    msg.pitch_min = 0.07990286796980306;
    msg.pitch_max = 0.8657755197787155;
    msg.q_max = 0.6533186293390474;
    msg.g_min = 0.12961783843090158;
    msg.g_max = 0.7857458855955799;
    msg.g_lat_max = 0.1328177421358111;
    msg.rpm_min = 0.13954136197066014;
    msg.rpm_max = 0.33821982675236595;
    msg.rpm_rate_max = 0.22990495817865542;

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
    msg.setTimeStamp(0.7278654846909812);
    msg.setSource(32468U);
    msg.setSourceEntity(210U);
    msg.setDestination(8191U);
    msg.setDestinationEntity(42U);
    msg.op = 13U;
    msg.speed_min = 0.9654100613016967;
    msg.speed_max = 0.9059589445100914;
    msg.long_accel = 0.2351521808365703;
    msg.alt_max_msl = 0.3111244337754864;
    msg.dive_fraction_max = 0.9016027098942268;
    msg.climb_fraction_max = 0.11506409010252927;
    msg.bank_max = 0.2629721127246485;
    msg.p_max = 0.7964658900002478;
    msg.pitch_min = 0.8406537644361783;
    msg.pitch_max = 0.9554934283164932;
    msg.q_max = 0.07895910232132342;
    msg.g_min = 0.7132668878928303;
    msg.g_max = 0.44595505259170887;
    msg.g_lat_max = 0.9060889055681245;
    msg.rpm_min = 0.09897142806291082;
    msg.rpm_max = 0.08788490176412478;
    msg.rpm_rate_max = 0.7350386136597761;

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
    msg.setTimeStamp(0.6931624410447039);
    msg.setSource(23687U);
    msg.setSourceEntity(13U);
    msg.setDestination(25504U);
    msg.setDestinationEntity(65U);
    msg.op = 233U;
    msg.speed_min = 0.4361136886220486;
    msg.speed_max = 0.2364276052028944;
    msg.long_accel = 0.40641772138765797;
    msg.alt_max_msl = 0.2772027351383015;
    msg.dive_fraction_max = 0.9306483589993921;
    msg.climb_fraction_max = 0.8510043715240039;
    msg.bank_max = 0.6838813539074877;
    msg.p_max = 0.9149201832725652;
    msg.pitch_min = 0.31612960098158915;
    msg.pitch_max = 0.2779394029372638;
    msg.q_max = 0.36001101195009433;
    msg.g_min = 0.7754214144126722;
    msg.g_max = 0.6202544526517005;
    msg.g_lat_max = 0.8060994884538879;
    msg.rpm_min = 0.0977288421112249;
    msg.rpm_max = 0.16243380012378317;
    msg.rpm_rate_max = 0.4803253731132333;

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
    msg.setTimeStamp(0.058600243303378874);
    msg.setSource(28571U);
    msg.setSourceEntity(156U);
    msg.setDestination(64433U);
    msg.setDestinationEntity(28U);
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("HYMGZIGCTOCIRFZEGWRNHGYTDTKJROXTGXMPMLHDDZLPR");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("JJEIBOIVQYFJHAURDXMZYKYQDWZONIKJVRAONACAXSYMMMKTBZBBNDECDKSSQPXCIOUULKZMPKJGMDEETRWHRQSAVRBLGEMEKHSQLRBCUPUTWONSJFSVOCHWDFNGXDJXGLUZULJPPENTPCDLFQHKOJPRSZNJMYFOIRVVIGZTPLHWEMUHPTFBXLHWGQTICVQYGUBRAAYBHGLYNIAAVOWXFVKZTLFTBDF");
    tmp_tmp_msg_0_0.sys_type = 24U;
    tmp_tmp_msg_0_0.owner = 31168U;
    tmp_tmp_msg_0_0.lat = 0.2400653696476196;
    tmp_tmp_msg_0_0.lon = 0.0570264588012479;
    tmp_tmp_msg_0_0.height = 0.5153024148263853;
    tmp_tmp_msg_0_0.services.assign("ONQMMPSHQZCCJQVOLTTXDECUCSVZIHNWWJJHHBXSRKRAMUNQBBAMEDTIVYDPHQTBWDFGUUWJNFLTJLFXWDBNEKTJSZMOMUPAMVFMTHQDUICPEBYUCGDEUETBYKVGN");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7415504449233611);
    msg.setSource(63288U);
    msg.setSourceEntity(33U);
    msg.setDestination(42411U);
    msg.setDestinationEntity(143U);
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.8176643759856307;
    tmp_msg_0.speed = 0.7172231972006334;
    tmp_msg_0.turbulence = 0.09348249170405376;
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
    msg.setTimeStamp(0.03294582666603163);
    msg.setSource(48707U);
    msg.setSourceEntity(115U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.7556146055573434);
    msg.setSource(49536U);
    msg.setSourceEntity(107U);
    msg.setDestination(46942U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.02965180254275257;
    msg.lon = 0.9397288336927995;
    msg.height = 0.1351598690801339;
    msg.x = 0.7877734444003489;
    msg.y = 0.08308414951202459;
    msg.z = 0.3570246664164377;
    msg.phi = 0.1873052647003367;
    msg.theta = 0.4356326191098503;
    msg.psi = 0.5283196411201088;
    msg.u = 0.5716866219102842;
    msg.v = 0.8395756414162575;
    msg.w = 0.2804940221152725;
    msg.p = 0.5759768513994311;
    msg.q = 0.09234793281257725;
    msg.r = 0.6101426970735504;
    msg.svx = 0.1057974923076197;
    msg.svy = 0.342166617507507;
    msg.svz = 0.930788206114354;

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
    msg.setTimeStamp(0.8935617045225611);
    msg.setSource(33096U);
    msg.setSourceEntity(43U);
    msg.setDestination(9121U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.09344218393006398;
    msg.lon = 0.831020300526945;
    msg.height = 0.08455843553747588;
    msg.x = 0.8486104191973798;
    msg.y = 0.02140226414742874;
    msg.z = 0.7908691773776076;
    msg.phi = 0.37286155309625824;
    msg.theta = 0.3090950385077317;
    msg.psi = 0.6289137034361783;
    msg.u = 0.8155822684530712;
    msg.v = 0.12782634488802358;
    msg.w = 0.395087803638249;
    msg.p = 0.23439324647248017;
    msg.q = 0.05419458757140572;
    msg.r = 0.7106124291643425;
    msg.svx = 0.17327381370361605;
    msg.svy = 0.4726642261348657;
    msg.svz = 0.2867163582232859;

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
    msg.setTimeStamp(0.7976736554585299);
    msg.setSource(26996U);
    msg.setSourceEntity(167U);
    msg.setDestination(13557U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.41687898644568167;
    msg.lon = 0.44708231229447326;
    msg.height = 0.549139133059101;
    msg.x = 0.4590743095573139;
    msg.y = 0.011721358472802756;
    msg.z = 0.5521777986490338;
    msg.phi = 0.4579108007033337;
    msg.theta = 0.473135971885572;
    msg.psi = 0.23636751827889135;
    msg.u = 0.9267241866182131;
    msg.v = 0.2848799138518774;
    msg.w = 0.7537702926568698;
    msg.p = 0.47840721587373847;
    msg.q = 0.1284488699585301;
    msg.r = 0.31721596185800505;
    msg.svx = 0.2683935968068689;
    msg.svy = 0.7022507716571954;
    msg.svz = 0.3686097786078044;

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
    msg.setTimeStamp(0.26499925573249505);
    msg.setSource(54790U);
    msg.setSourceEntity(86U);
    msg.setDestination(59033U);
    msg.setDestinationEntity(109U);
    msg.op = 96U;
    msg.entities.assign("SFWXLZNOUMNZHBEKUSKWDUYSNWVABETEAFNOVQMAZLRJTIZVPMKQRTHASKLCVPDLYXHBUQAPGVINKK");

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
    msg.setTimeStamp(0.5254391802483629);
    msg.setSource(3128U);
    msg.setSourceEntity(194U);
    msg.setDestination(40131U);
    msg.setDestinationEntity(219U);
    msg.op = 190U;
    msg.entities.assign("CGMIGAEEABEHLDUGIWQGLDGVODFJLJKKXKHVMVZKIIEFVRXXZSLINUETCAIPBXWBHSFFOSDTCQLWUTFFIHHEFNCUYSTBBGYHEHSXVYXBKMPWARPGMVRSZUYWZZEODMAMHIJKDWN");

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
    msg.setTimeStamp(0.8934410356622966);
    msg.setSource(42259U);
    msg.setSourceEntity(180U);
    msg.setDestination(47381U);
    msg.setDestinationEntity(221U);
    msg.op = 135U;
    msg.entities.assign("OXCITRTDRWNTWSKORSOSYNGUPKOXEQCGNWAKVRUQSXMYHEWCMQUWHKJCYLXKQPPALMATAJYPTBNQIWAVEYVNZJVMMPXZIRKYUGSBLFHQIHFLWEDXSYKYEFSPXFGEIZAEQORDTGBUFJHRHEDCTJWBZAFDGOUIBBISNGOZMHPEVJFCLPFMBMQGUYFHVLHHCUL");

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
    msg.setTimeStamp(0.9830735624279339);
    msg.setSource(39265U);
    msg.setSourceEntity(82U);
    msg.setDestination(58332U);
    msg.setDestinationEntity(0U);
    msg.type = 212U;
    msg.speed = 16977U;
    const char tmp_msg_0[] = {59, 101, -22, -61, 94, -53, 84, -105, 24, 23, -49, 68, -98, -55, -57, -29, -125, -94, -36, -121, 4, 17, 102, 20, -55, 32, 82, 7, -8, 97, 42, -117, 111, 114, 93, 6, -10, -34, 84, 81, -110, -90, 36, 0, -33, 44, 100, 56, 101, 114, 58, 14, 4, -99, 32, 40, 69, 72, 33, 24, 55, -104, 102, 0, -18, -99, -76, 32, 40, 49, -98, 113, -45, -37, -104, -51, 104, -9, -122, -14, 21, 27, -123, -51, -19, 28, -77, -117, 76, -86, 98, -79, 53, -16, 112, -82, -109, -50, -3, 8, 126, 0, -53, 107, -33, 22, 20, 38, -58, 6, 107, 51, -37, 48, 123, -126, -33, 95, -15, -114, -38, 86, -124, -21, -126, -107, 12, 36, 88, -30, -11};
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
    msg.setTimeStamp(0.5275708263937339);
    msg.setSource(36072U);
    msg.setSourceEntity(132U);
    msg.setDestination(28826U);
    msg.setDestinationEntity(62U);
    msg.type = 99U;
    msg.speed = 25737U;
    const char tmp_msg_0[] = {39, -99, 108, -51, -30, -72, 57, 61, 72, 48, 8, -115, 121, 72, -119, -50, 93, 76, 19, 54, 32, 109, 35, -112, 101, 19, 66, -5, -7, 79, -37, -15, -125, -5, -35, 28, -16, -81, -45, 14, -115, 97, -57, -49, 21, 100, 35, -69, -79, 1, -16, 114, 95, -45, 60, -79, -31, 39, 30, -99, 98, 90, -78, -49, -104, 85, -53, -41, 123, -18, 19, -69, 51, 99, 115, -120, 67, 0, -111, -97, 91, 20, 84, -57, 82, -123, -31, -102, 15, 93, 125, -12, 57, 40, 123, -122, -3, -104, 68, 7, -2, 6, 86, -34, -98, 118, -110, -114, -71, 70, 45};
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
    msg.setTimeStamp(0.04493688662634354);
    msg.setSource(65234U);
    msg.setSourceEntity(129U);
    msg.setDestination(5747U);
    msg.setDestinationEntity(40U);
    msg.type = 138U;
    msg.speed = 34077U;
    const char tmp_msg_0[] = {101, 25, -30, 94, -8, 38, 52, 89, -29, -46, -100, 116, 112, 106, 25, 88, -13, 81, 114, -114, 28, -48, -80, -120, 19, -64, 104, 68, -90, -32, 44, 1, -48, -84, -43, 99, 88, 12, -7, -57, 100, -15, 125, 37, -95, -41, 106, 10, 62, 123, -85, -95, -17, 107, 96, 125, -53, 11, 45, 30, -72, -81, 44, 126, -41, 53};
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
    msg.setTimeStamp(0.17490922106774953);
    msg.setSource(50U);
    msg.setSourceEntity(51U);
    msg.setDestination(49306U);
    msg.setDestinationEntity(1U);
    msg.op = 14U;
    msg.tas2acc_pgain = 0.6282477526398256;
    msg.bank2p_pgain = 0.08666057700710383;

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
    msg.setTimeStamp(0.8961886999974789);
    msg.setSource(23125U);
    msg.setSourceEntity(244U);
    msg.setDestination(35969U);
    msg.setDestinationEntity(110U);
    msg.op = 122U;
    msg.tas2acc_pgain = 0.01683123873516179;
    msg.bank2p_pgain = 0.5071468810451106;

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
    msg.setTimeStamp(0.3704009500097951);
    msg.setSource(32252U);
    msg.setSourceEntity(246U);
    msg.setDestination(43260U);
    msg.setDestinationEntity(71U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.9705706459958688;
    msg.bank2p_pgain = 0.3233337851354051;

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
    msg.setTimeStamp(0.2721667167693361);
    msg.setSource(22116U);
    msg.setSourceEntity(119U);
    msg.setDestination(13711U);
    msg.setDestinationEntity(192U);
    msg.available = 268307742U;
    msg.value = 183U;

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
    msg.setTimeStamp(0.24623508060671917);
    msg.setSource(1091U);
    msg.setSourceEntity(82U);
    msg.setDestination(19767U);
    msg.setDestinationEntity(38U);
    msg.available = 3836937808U;
    msg.value = 66U;

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
    msg.setTimeStamp(0.7360709061182156);
    msg.setSource(50972U);
    msg.setSourceEntity(76U);
    msg.setDestination(28187U);
    msg.setDestinationEntity(193U);
    msg.available = 2935823893U;
    msg.value = 193U;

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
    msg.setTimeStamp(0.8880171275189686);
    msg.setSource(1030U);
    msg.setSourceEntity(249U);
    msg.setDestination(10981U);
    msg.setDestinationEntity(217U);
    msg.op = 128U;
    msg.snapshot.assign("JPGHDQRVIOPVUDQICXXZBFVKCTPSWZKJKXEKUYQHOUGPNAPRUYYOHSLDDTBUAERPXGKRVHMUEXJRZONTXEKKBWFRNLXHOCZYAOLCVTFBLQ");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.28926134987566654;
    tmp_msg_0.x = 0.11954898162770089;
    tmp_msg_0.y = 0.045926872840369004;
    tmp_msg_0.z = 0.8707438603521552;
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
    msg.setTimeStamp(0.6650691047736439);
    msg.setSource(26489U);
    msg.setSourceEntity(55U);
    msg.setDestination(18312U);
    msg.setDestinationEntity(185U);
    msg.op = 136U;
    msg.snapshot.assign("NAQPTMHCZQMMQNXMLIUPRRSFRUVSJIOFWHAVPEMQXYTFJXYXUJDYMTEGAMNLFSLVXHDXLBNRSVPB");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.8745303245158743;
    tmp_msg_0.x = 0.3251098139945996;
    tmp_msg_0.y = 0.10182203854054661;
    tmp_msg_0.z = 0.0958371257160151;
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
    msg.setTimeStamp(0.601955722752792);
    msg.setSource(48561U);
    msg.setSourceEntity(100U);
    msg.setDestination(4196U);
    msg.setDestinationEntity(204U);
    msg.op = 109U;
    msg.snapshot.assign("CDOVOPXXLZUTNRNCAVLDVWKMZFQRYYTWBDFWTCDXGFZNKEJGWUSVIDWBRAYGQMOILENHJBDZPXNGIMCPBVIKWMESRFSXKDAXJLZMBFAUMFNHIFTWGEEJHCUKJXAKCYBGFRQZQCGNLPRTEKVPTISRKHQPYALUCX");
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 84U;
    tmp_msg_0.level = 75U;
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
    msg.setTimeStamp(0.8193008459432073);
    msg.setSource(1951U);
    msg.setSourceEntity(53U);
    msg.setDestination(42812U);
    msg.setDestinationEntity(137U);
    msg.op = 104U;
    msg.name.assign("KYBKYAGLXAHJDXSUWMNUZLMHKCSETAISBRRYJYTRAOLTXTNMBQBJODXIXBRPDNPEJFGOTUDWQGCYDJKBOHQYUSYVBSDZPVFCIUIQAXZLMPVTVQJZUSGTKDNLWVVMYZLHBIHRHLSJVLENWTEOXHIJCKBREZEGRXJWFXOUMCDIGBNYIP");

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
    msg.setTimeStamp(0.619001991252514);
    msg.setSource(42683U);
    msg.setSourceEntity(15U);
    msg.setDestination(53262U);
    msg.setDestinationEntity(73U);
    msg.op = 224U;
    msg.name.assign("IZUDZHBAQHWJUMOQTJUHMAUSWTBRQIGAONFEVESCELDKLYSYMFWIVKWFBREPXRNHMGYCTUEEQCDJRLNVDOUBRKPWAVBDLPMDCPAGKAQFKJFDUTCLTWGHQSGCIJAMNSICBYFGSOWRZDQFOMLVKEOXIXVEMA");

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
    msg.setTimeStamp(0.751563923815499);
    msg.setSource(24733U);
    msg.setSourceEntity(222U);
    msg.setDestination(27290U);
    msg.setDestinationEntity(45U);
    msg.op = 48U;
    msg.name.assign("UCDZTTUDGNHASGNISNDEOPLQUPDZPZNWUAGETGUKYJWGEPOIKJSFARZXXDIEULJIXFPAVZQFWOTPEQCVRLLTDOHWHSHFMHEEZCSOBKDUKVJSLJEALMQTXOFKO");

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
    msg.setTimeStamp(0.3874439700361152);
    msg.setSource(1395U);
    msg.setSourceEntity(182U);
    msg.setDestination(58933U);
    msg.setDestinationEntity(183U);
    msg.type = 115U;
    msg.htime = 0.8009464180019281;
    msg.context.assign("ZVRTJCPMGWABEOLKPMWRNHSILGWLRRCKINYKRFTD");
    msg.text.assign("WATYSUMTHDJA");

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
    msg.setTimeStamp(0.13310055318890357);
    msg.setSource(3012U);
    msg.setSourceEntity(183U);
    msg.setDestination(47881U);
    msg.setDestinationEntity(18U);
    msg.type = 115U;
    msg.htime = 0.8451330060099216;
    msg.context.assign("KXNBEDQTEAUHBZAMLGAJRHTTGUDRDOFGJHUHNLAZYOEKULKSOEWHNPBUCEDLGAJMXPMDYDZBXOCAXAWGRNXQZVHNGYZCWKQEOTBCVQITHNCROQYJQUUKRYVONFKJHGPXNYJZEUXVUILDSBHPYEPDVBWZITOKIBEMZGSMBRX");
    msg.text.assign("BHPROPPVVUTJHQHCZCRJTKTGUAWHFNAWKULNTGWEXBEJYDHNGBKKFJADRSOEXDRTYHIYSYWGAISDWKBQPNQCYFYXMSLPRPATDODKEVMWKLPNEIEBHEMFDTXDGZFGYOLIMRZLAHCNFRFCRJQLFCBOOSCARZQ");

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
    msg.setTimeStamp(0.05020546240047785);
    msg.setSource(12813U);
    msg.setSourceEntity(153U);
    msg.setDestination(54218U);
    msg.setDestinationEntity(183U);
    msg.type = 47U;
    msg.htime = 0.27233109802705613;
    msg.context.assign("NDGJIWBDMJZARFPAHXAGNQKCHNWQFZISKENYPHVSUMQDCERBFJZUAISJKLEJQDWWMXXRZTYUVFKYLEFHBZMRPBBMIWVKSOQTKMCASWDMHPLZVYFANVRUVKRDZAUGTOXTGNMYYJKAQLDCDGPOIECDEZLIXNOWBLFYUJQPEYXVLOVTFSTBFGETCZPNHQJUCZMHTFPW");
    msg.text.assign("RKICAVONRFMOTEMSJZTQHMJXQWKFYLPGVJXJADREQPFCEVPUQFYJRIKCORNPJOFNYJDHULQXGWYYUZTKXDBKMHSNBPDVEKOEPS");

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
    msg.setTimeStamp(0.5334356273991475);
    msg.setSource(39005U);
    msg.setSourceEntity(115U);
    msg.setDestination(26633U);
    msg.setDestinationEntity(195U);
    msg.command = 213U;
    msg.htime = 0.7997059042213469;

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
    msg.setTimeStamp(0.7243808278059518);
    msg.setSource(40529U);
    msg.setSourceEntity(36U);
    msg.setDestination(2733U);
    msg.setDestinationEntity(99U);
    msg.command = 206U;
    msg.htime = 0.41783421405649435;

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
    msg.setTimeStamp(0.8456930253256411);
    msg.setSource(28232U);
    msg.setSourceEntity(43U);
    msg.setDestination(43364U);
    msg.setDestinationEntity(221U);
    msg.command = 198U;
    msg.htime = 0.5386393355870733;

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
    msg.setTimeStamp(0.35116472339543525);
    msg.setSource(9931U);
    msg.setSourceEntity(48U);
    msg.setDestination(9622U);
    msg.setDestinationEntity(203U);
    msg.op = 136U;
    msg.file.assign("XAJAZWGQPRONGYEECSFZSLIOHQSGONSCXCXIQDKURCTJXNWAGLLKXQAOTKZHAJYVVOFIHZVLSTLXIQDQRTUAEHDBNLDBMNOPPBGRKRZ");

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
    msg.setTimeStamp(0.18764625048743644);
    msg.setSource(10436U);
    msg.setSourceEntity(254U);
    msg.setDestination(13328U);
    msg.setDestinationEntity(111U);
    msg.op = 121U;
    msg.file.assign("XUTVOXAOEVOYVVKMCFYXPODBYOIFMEURANETYTSWMUKKHYUJLBPGSZUHFKLLQZIXSPAADTGKWOPHNCPJPYRICLMFNSVJEACDJUDJMYEA");

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
    msg.setTimeStamp(0.24643742972406224);
    msg.setSource(30877U);
    msg.setSourceEntity(161U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(251U);
    msg.op = 37U;
    msg.file.assign("BJSXXBOGIGPFCWZVOETXZPTDYBFFNBJUQAXPNFXWDEPLLHAFUYPQTYSMMNRJYXYBMOHMOVNHOVWQYFNLFDFDHMSJLUSOBVHBLRLEIAZJECEYKGECGQPYINSWQCYJOZAMGBOAVMXGXKULLVODRRYVEREURJDVKCCAWSZTDRUKQNJVKGCUT");

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
    msg.setTimeStamp(0.06463444958119369);
    msg.setSource(3684U);
    msg.setSourceEntity(50U);
    msg.setDestination(22437U);
    msg.setDestinationEntity(121U);
    msg.op = 89U;
    msg.clock = 0.5756044709049248;
    msg.tz = 86;

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
    msg.setTimeStamp(0.5486131040283329);
    msg.setSource(46606U);
    msg.setSourceEntity(94U);
    msg.setDestination(20790U);
    msg.setDestinationEntity(168U);
    msg.op = 169U;
    msg.clock = 0.3306020546841717;
    msg.tz = 75;

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
    msg.setTimeStamp(0.732924228511238);
    msg.setSource(955U);
    msg.setSourceEntity(50U);
    msg.setDestination(7202U);
    msg.setDestinationEntity(146U);
    msg.op = 233U;
    msg.clock = 0.6857437252506531;
    msg.tz = -95;

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
    msg.setTimeStamp(0.37651198808554887);
    msg.setSource(49431U);
    msg.setSourceEntity(179U);
    msg.setDestination(42029U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.0588055277507995);
    msg.setSource(29168U);
    msg.setSourceEntity(186U);
    msg.setDestination(21761U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.8659971753502446);
    msg.setSource(45067U);
    msg.setSourceEntity(213U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.30785570621835134);
    msg.setSource(43455U);
    msg.setSourceEntity(143U);
    msg.setDestination(11182U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("VMJLMQDEDDAVOHXCLZAUPLJZKQGCIPTYMRXAWCJZPLNOKFYSYTGOPPOQGEULWHWCDRSZECOSDTGUCEMOYJODCCMMGTBBAKQXREXSGIINDTZFKJZPRBKILXHJYODIJHLPBFNXINEKQ");
    msg.sys_type = 190U;
    msg.owner = 59284U;
    msg.lat = 0.6860247833822827;
    msg.lon = 0.6949485747738662;
    msg.height = 0.38183997865845587;
    msg.services.assign("CMDQBBUMSVDTGQCQFTKSUHVAOKJLNRCAHGEZQWNJIXMGFOOZPSBLIPANEHUDVFQMHAWFFSIYGRZNJQHLYDLHKTCPRECCUYEYXVPJRWKFWEVXQOXJEZJZGHTQMQLIKDCIOGKIEAXMBBLLP");

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
    msg.setTimeStamp(0.3254098704990611);
    msg.setSource(39251U);
    msg.setSourceEntity(25U);
    msg.setDestination(40235U);
    msg.setDestinationEntity(82U);
    msg.sys_name.assign("KDZUARWPHTDDMIQTJGLFBFNFYVFSJKCXDFLNFVQKBXIKVOHDZHZTFEBEXIGEBUWAESLUTODRGWBEILKYSAECSJYMAJITESFJXGHGYUHTHBMCOGEYGABPNLUDQRQOUIDEMNLAVVMGJIHRCPOUYLYNNRPAAPBTPQZZMNYIQVUWJAGWXEUIWLWCWJRZQVNSOPSRICSZXTVGKOCVMOKRXSXZKSWVOFRNXHPQBHXKAWRUPNMTFYZDMBT");
    msg.sys_type = 135U;
    msg.owner = 60433U;
    msg.lat = 0.10572836793316376;
    msg.lon = 0.9641305433281486;
    msg.height = 0.3997555623761696;
    msg.services.assign("QTUWXMISPIOJAXKKPWWLFGSMSOLVGEZNFMVHEJJYYACPWLDIBXMWFSEPGBAUHVVGEWLYDSPGVQPBCFBQCDLRC");

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
    msg.setTimeStamp(0.40500365162388474);
    msg.setSource(11506U);
    msg.setSourceEntity(207U);
    msg.setDestination(40394U);
    msg.setDestinationEntity(170U);
    msg.sys_name.assign("XPTMNMNEYHWTNOOBVIDWXCKTOCIBPYHOWDRTMSIIIPQXFXPLSQTGVEKLXBLPAHNIDRTWQFTTDXCUVASUAJPHVGHOFUDEARXJHBYUZBMMBEMLWJQGYFXSZNDKRHSWAERHLYFUIZWVZKDEFKKRFIJVCXAFCLYZRGZDHGRTQNCZYYENZJPVKOGMSXVQBARVVUFEQCUAZWAMPZSNJBLCUNWQPGLMYDCIWOUNUJYQGBKTCOJ");
    msg.sys_type = 177U;
    msg.owner = 3721U;
    msg.lat = 0.7411488708548233;
    msg.lon = 0.3269664027822795;
    msg.height = 0.7210181120934693;
    msg.services.assign("GXBAUQXRORMXDAMHDBPWSOTGWDCUVBBXDRTVBYIWKWDGEZSWSFZDJPTCDVLYEDYWTUDLPIAMIAMXYHFNIOTZBAVIMJOOZJKIGYEVUWTVTLQFYVXPIQHCKJUXRWCOZRHVCMSWSCSWQQHZUCLNFNMOYNPLKHPBLUQCJGSQHEKBBKEFYAELMGMP");

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
    msg.setTimeStamp(0.933617309645419);
    msg.setSource(62164U);
    msg.setSourceEntity(44U);
    msg.setDestination(8330U);
    msg.setDestinationEntity(216U);
    msg.service.assign("CKXQFXYRJNAUKLJFXGFRLJBXTIFYGQUUKIREPUOWYQWPEIXVCLICTICTLA");
    msg.service_type = 59U;

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
    msg.setTimeStamp(0.4310014003792847);
    msg.setSource(16911U);
    msg.setSourceEntity(75U);
    msg.setDestination(24336U);
    msg.setDestinationEntity(89U);
    msg.service.assign("NTWVJUOFQIMQNIQIPGSKTDESXZDMVBPCRVNIUYHLTUAHKPVTDOGXYYWMUZRSPYVUAQDANESRJWHDWSTGHWEDJCFQOILFRNFJJABVLUPPDCQIZUCXCKKKXQEKDJIAFTQCENXYAAYOSWUFMOCVPYFRNZAMDHYRXBIGFTKYDLEWXLHFSRZMKMYWL");
    msg.service_type = 124U;

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
    msg.setTimeStamp(0.8346905027357823);
    msg.setSource(22455U);
    msg.setSourceEntity(204U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(152U);
    msg.service.assign("OLZKKXKFNVPGAJJALMVTRPULWVLWSHSSVZXSQHDMPLPGLWBLDOIJYAFKCNHMIBXWWZBBBJPAYFEFMUJZAGJIGVQRGNHPOZZOGLQDDWKZCTYNNFDMVQAQQMD");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.8073332572552898);
    msg.setSource(14434U);
    msg.setSourceEntity(80U);
    msg.setDestination(31633U);
    msg.setDestinationEntity(142U);
    msg.value = 0.20814958613475854;

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
    msg.setTimeStamp(0.9065292960392718);
    msg.setSource(40174U);
    msg.setSourceEntity(174U);
    msg.setDestination(56192U);
    msg.setDestinationEntity(118U);
    msg.value = 0.31495018052022294;

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
    msg.setTimeStamp(0.8674390204172084);
    msg.setSource(55010U);
    msg.setSourceEntity(209U);
    msg.setDestination(49632U);
    msg.setDestinationEntity(92U);
    msg.value = 0.03485981037233565;

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
    msg.setTimeStamp(0.3120319758527098);
    msg.setSource(30930U);
    msg.setSourceEntity(218U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(104U);
    msg.value = 0.41955872265321503;

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
    msg.setTimeStamp(0.913067648295824);
    msg.setSource(23337U);
    msg.setSourceEntity(24U);
    msg.setDestination(2812U);
    msg.setDestinationEntity(11U);
    msg.value = 0.027399445732747663;

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
    msg.setTimeStamp(0.9728239520981692);
    msg.setSource(63722U);
    msg.setSourceEntity(28U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(154U);
    msg.value = 0.6206836505614189;

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
    msg.setTimeStamp(0.21528029172485164);
    msg.setSource(15834U);
    msg.setSourceEntity(239U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(177U);
    msg.value = 0.09912719935109204;

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
    msg.setTimeStamp(0.7999128946093038);
    msg.setSource(38430U);
    msg.setSourceEntity(127U);
    msg.setDestination(12776U);
    msg.setDestinationEntity(204U);
    msg.value = 0.5182848924796258;

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
    msg.setTimeStamp(0.2078343786809187);
    msg.setSource(38203U);
    msg.setSourceEntity(49U);
    msg.setDestination(22552U);
    msg.setDestinationEntity(249U);
    msg.value = 0.19661869997322923;

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
    msg.setTimeStamp(0.8771663940887364);
    msg.setSource(59303U);
    msg.setSourceEntity(232U);
    msg.setDestination(26101U);
    msg.setDestinationEntity(181U);
    msg.number.assign("SSBHPCGDBNRXJSRCIWOPILNMDTKJLOOUMDSOSWAGVQJHFRRPETKOFLQSAXBAQGZRZRUNXGQWBMUIACCXZWMMZFUOFAAJYPEWPHITDVHYJAIHXBNKDUXZFQVX");
    msg.timeout = 59291U;
    msg.contents.assign("BJWPILFNTMFKKUKRAEHQNXZLGZVPACPJXRNDHEOAQVDSACJVMYLTMNWMAJJCHIIYPNHLDHMSBZBDFNMCLPDWZTTOUGLHQKNCPUJIAGGQRUGXRIRIFSCCLDNGYGFVKMNKBFRQBRKWEWUDITAFOTVJTWYDZUPVXEBQZOTMUSSYXOHESBYJMRVPXOGEZOHSOSFVEVEIQZKUSBAXFAEPKUMWX");

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
    msg.setTimeStamp(0.7979784875762852);
    msg.setSource(32646U);
    msg.setSourceEntity(5U);
    msg.setDestination(7353U);
    msg.setDestinationEntity(238U);
    msg.number.assign("GIRYNSAINNHRRJIXZYBTHVICASWGYOCXEZHGMAMCQLKCDODSGMUWYQQPULBVWLRSZTZKUHUAEDJDECPBOKDRTLRABGSWFJIZJNTLQJKFCAFNJEYMGYNZDHTOWOTOVVBXAYNMVKWQKOBTPAMHCRIFSDPZSIHCZUKPUDLIHZIBLXUALFKDNJOF");
    msg.timeout = 2349U;
    msg.contents.assign("VYJDMROWEPAFCAVMVVFLOORKMZRIVXTYIIXCABBSAQFNODFHZHSEBQLHYSYCWXNGWJZWCUEHBEFBAWVAKMYGFDEQJMLTBRT");

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
    msg.setTimeStamp(0.7796671374494406);
    msg.setSource(64128U);
    msg.setSourceEntity(9U);
    msg.setDestination(17641U);
    msg.setDestinationEntity(83U);
    msg.number.assign("XIJEOAZITZVCGUTFRULWYCXTVQIZSYVDRJEYLFDKLFBMWVZJTRQPWKFKUXFCEIBCYHDDDXXQAOWPZBPBWNNHTNAACJIII");
    msg.timeout = 57642U;
    msg.contents.assign("LSIASBOQXMWWYHAYUWWLNKGXDIDVAHQDSSKYBMFXFBVKMLFYBLUMDOSNNGBMJPKEJZRUPIPVSDFGBKUWLDUXZZTXHRLAVICYXFRQVGKZQNSME");

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
    msg.setTimeStamp(0.04577058010944213);
    msg.setSource(45964U);
    msg.setSourceEntity(241U);
    msg.setDestination(31335U);
    msg.setDestinationEntity(16U);
    msg.seq = 2573457955U;
    msg.destination.assign("UOYXLUEOAYIVSAJQAZTZAENGNYIIKDRFHGIXVFGHDTURPXZYURNFPQHJMBKBDWYESBFMDEZMNBHUDMSSZHSCIRETFCLDEAJCONZK");
    msg.timeout = 46135U;
    const char tmp_msg_0[] = {86, -28, -69, 47, 118, -74, -17, 105, -72, 123, -41, -42, 15, 18, 59, -122, -1, -43, -25, 61, 22, -114, 102, -117, -67, 103, -60, -83, -52, 58, 28, -9, 34, 36, -66, -103, 10, 120, -52, -80, 72, 61, 33, -38, -87, 107, 32, 80, -35, -122, 32, 22, -50, -69, 5, -103, -1, 27, 95, 77, 66, -85, -97, 76, 104, 58, 116, -32, 11, 118, -59, -99, -41, 57, 21, -8, 68, 84, -77, -43, 99, 26, 69, 103, 35, 30, -107, -1, -89, 35, -47, -94, -63, 16, 9, 120};
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
    msg.setTimeStamp(0.10232191690064318);
    msg.setSource(3447U);
    msg.setSourceEntity(56U);
    msg.setDestination(41484U);
    msg.setDestinationEntity(221U);
    msg.seq = 3556809440U;
    msg.destination.assign("XHOIRMVRMLKXCDTYWKKSGUXWDAPFWPNBUXDXHVDUTWBGIPBSFDFDOVERIGGITOCNBUKAQFXJDQXKLXDAKHZSTFRQMSJNTYWWZJHEVWYCFTHUIEGIJLIMRQSPSHAKJHEMOFLPQAVKBLCMEYMLHGRPBJFDUFJKQIGGSMZLUYOCZW");
    msg.timeout = 27720U;
    const char tmp_msg_0[] = {100, -32, -121, -127, 69, 35, 38, 23, -88, -81, -54, 92, -6, -87, 46, -38, -24, 106, -84, 93, 100, -79, 47, -47, -114, -27, 96, 76, 117, -43, -62, -51, 24, -59, 55, 112, -111, 59, 118, 62, -103, 52, 71, -48, 93, 56, -94, -106, -2, 25, -113, -67, -38, -64, -70, 99, 113, 49, 27, -15, 64, -31, -48, -93, 85, 15, -5, 103, 65, 35, 108, -104, -98, -26, 68, 68, -100, -102, -23, -23};
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
    msg.setTimeStamp(0.15769828389983798);
    msg.setSource(58792U);
    msg.setSourceEntity(92U);
    msg.setDestination(46460U);
    msg.setDestinationEntity(241U);
    msg.seq = 3886819845U;
    msg.destination.assign("WOFWUTSERBIKVZYSRZFLNTFQJCOQXZGXPHKTPERFJUIATWIMLMUETJJ");
    msg.timeout = 12462U;
    const char tmp_msg_0[] = {-24, 87, 117, 104, -125, -11, 78, 98, 4, -114};
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
    msg.setTimeStamp(0.9173019393850562);
    msg.setSource(28030U);
    msg.setSourceEntity(125U);
    msg.setDestination(35597U);
    msg.setDestinationEntity(37U);
    msg.source.assign("KIZYMPGWKXRBVMNKTTFYIQTHJVTXTQPDROUJXOLAXVFHIRVZISPHKLIEUMXXDUZGWIBMRVGJFUBIGACAMWMJRKEVSUNFWRLHNWDJUVPYOILBXGGNTROWDEQSOZELPRAFHJXDYVWSKMQWSHCXQKIBIECGJYEAFGALCOOATVHSSNMPFDZLRLEKYOPBCCZBMRYNUKQECKUW");
    const char tmp_msg_0[] = {-21, 75, -38, 59, 23, 34, -87, 19, -122, -70, -121, -116, -54, -60, -98, -7, 53, -96, -48, 25, 39, -126, -119, -11, 52, -106, -96, 1, -65, 46, -37, -106, 23, -120, 25, 58, 77, -10, -32, 85, 86, -96, -41, -44, -111, -49, -15, -64, 120, -72, -13, -89, 97, -81, -63, 19, 6, -14, 30, -74, 29, 89, -17, -104};
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
    msg.setTimeStamp(0.22343316074846953);
    msg.setSource(59382U);
    msg.setSourceEntity(223U);
    msg.setDestination(35734U);
    msg.setDestinationEntity(169U);
    msg.source.assign("ZHODQRMFDTCBDRHMQYPBKNYTQXRNMHGZBEJRLQPVGHJLNRRBNOIMEKSRPJGUWTNAVXF");
    const char tmp_msg_0[] = {43, -94, -115, 82, -124, -78, 89, 103, -51, -75, 90, -114, -19, -83, 58, -67, -54, 51, 124, 1, -126, -26, -31, 66, -93, -4, -47, -22, 48, 18, 45, -73, -124, -35, 82, 12, -2, 20, -102, 46, 111, -69, 55, 120, 53, 92, -121, -56, -11, 77, 31, 29, -113, 69, 13, 120, 76, 67, -51, -3, -122, 16, -78, 54, 8, 19, -22, 77, 37, -66, 31, 51, -16, 106, 68, -73, -20, 88, -15, 49, 9, -15, 57, -54, -10, -108, -1, 60, 83, 80, -6, -51, -110, 77, 79, -121, -44, -121, 112, 45, -39, 40, 51, -111, -24, -50, 19, 23, -101, 41, -14, -69, -38, 15, 41, 62, 80, 27, -41, 27, 118, -91, -87, 50, 27, 65, 18, 6, -123, -40, -31, 18, -115, -95, 93};
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
    msg.setTimeStamp(0.4589127974698267);
    msg.setSource(27303U);
    msg.setSourceEntity(25U);
    msg.setDestination(35576U);
    msg.setDestinationEntity(31U);
    msg.source.assign("KVMEPRMVCPHXUSTJGGEYVSMTZJBCYUAODSRETESN");
    const char tmp_msg_0[] = {48, 53, -44, -82, 91, 7, -14, -97, 104, 57, 85, -105, 81, 13, 104, 11, 54, -58, -25, -117, 7, -55, -1, -102, 73, 111, -23, 39, -57, 42, -27, -33, 10, 91, -128, -127, 82, 119, -9, 7, -57, -98, 15, -116, -127, 92, 36, 13, -62, -109, -64, 61, -11, 42, 30, -102, 100, 44, 71, -42, -76, 33, 66, -24, -120, -69, 33, 9, -51, -49, -22, 19, -85, -20, 19, 22, 103, -128, 37, 117, 93, 87, 39, -38, -101, 53, -104};
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
    msg.setTimeStamp(0.6549599825128039);
    msg.setSource(22650U);
    msg.setSourceEntity(186U);
    msg.setDestination(55052U);
    msg.setDestinationEntity(199U);
    msg.seq = 451506777U;
    msg.state = 57U;
    msg.error.assign("LDBEFGAYHTGSGYJZZMHTPVTBINEACRHPZWOECMKLISXKPFEMRCDCFUKJJMGQOKHQJRXWLNQNJSLUZDHVYDQBGBBRZDJCTMZNOTLESEBSXXAYZITMVGTTDDADIPEXTYKWKYRXXUXUSWIEQIADOEOGNLFKZMIAVPIOLNRBCTUYBOCOPPWCQLLAROOIGWJBMHVADFWKJRULSWSF");

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
    msg.setTimeStamp(0.03718949278255046);
    msg.setSource(3129U);
    msg.setSourceEntity(138U);
    msg.setDestination(3754U);
    msg.setDestinationEntity(41U);
    msg.seq = 529358615U;
    msg.state = 45U;
    msg.error.assign("DEGCKHPDZUHDZUTTRRHTGGQEOLKKFJLAYJNZBROSLFAMIZOITTLBDELXOITWHPJNPPHATXWVSKMKILOBVTSZIGPCXYYQPLRABNJEGRUCSYWBKPCSQBQHKXJCZABWWFYAORQSWXAYGJMNPWNUVDOGFEDURFJCHVEXQYVMGNWSXIFPVLCVBANIHYEMCZROHVMEXLSDSHRSUMQMUCUFXVTDNGXQEZKFREWGYNVUMQAMZBKFBLJIFDJ");

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
    msg.setTimeStamp(0.17400937169912856);
    msg.setSource(35662U);
    msg.setSourceEntity(136U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(202U);
    msg.seq = 823273971U;
    msg.state = 18U;
    msg.error.assign("XHMHOYUNACWDTGMKILFNIDPOHFOAITVZOOEQQJGAEUEKRAWTRELEMCXRVWQOJRSXIVGZMHFJYBUCBKBMQELCZJQVUGOQZYUTOKADWUGZISSWHXGQYXHLNHXPVRXUVEAPXLPLYJFLMYQDWIDDTXECRVISFJRDGFXIJMTWHSPWSWTNNYCEYLNBACANZZTBBFOLRSBIDMUPGDJQPKJ");

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
    msg.setTimeStamp(0.9039751330894286);
    msg.setSource(51848U);
    msg.setSourceEntity(158U);
    msg.setDestination(46978U);
    msg.setDestinationEntity(140U);
    msg.origin.assign("FFIMIUZREOFNKKATXBBQPSSYAWWMNBJPIUBCGZVZNGOVUKHIDLORATELFOCWPZKFNDZJXVYURTIKXLJEWEZHOCFGDTRGHDWQCGJGQYXHCPXSBPADQXMNLXXNHMLPIG");
    msg.text.assign("DTCNEAHBATGVNRTJZHPQUGAGSUIWFXLQAAZYXSVHDEWAPDAILFPNSTEEBPRPVRSKWAYEWTMIOCKVBHCDUEGFZJKUJOQOSVCQOCJDNBIQXCYGLPDFEZQJRFXVHNTHZWNVMDPKVOJKMPFMKMISRXHIWKYYGOLGAZYRVMZNXVEDIBLKQUCZJHOKSWIHQWFCUMEBFTLOUCTZHONMNSRGGXSALDSXQYJTELZICW");

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
    msg.setTimeStamp(0.9745305535975023);
    msg.setSource(61868U);
    msg.setSourceEntity(219U);
    msg.setDestination(3352U);
    msg.setDestinationEntity(94U);
    msg.origin.assign("CNLCTCQHRDILLLXQWWOAGXRAHOAIYEKXUWYKNTPVETHRIRKUSYHVIZDRUAJVZCYFMTFMZPRKJHSFFPHUMQOOYLJNCCPWXOGRBDETEJKQKFRF");
    msg.text.assign("MVCFEBOKPNNMYSDXAQRQZMWIXLWBBFYVZOHZUKXDHXBVGRMXKKDEWCIGERYDNSLOPBXTUOHBIDICJKTLCZBNRAMKFIUXZKESYXJORIFXJUWAHGAYVKTJWYQOZURRATUUSGQCFWDSWQRIVPUVYLBTHTFGDCEIZJQINTJOVJRF");

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
    msg.setTimeStamp(0.740982417460327);
    msg.setSource(60690U);
    msg.setSourceEntity(146U);
    msg.setDestination(862U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("JUJRLRKCQNWOHGGWWSHKBLXEXGKQZDBXYCBEICJZRIXOHCYLSDQASJCHWT");
    msg.text.assign("CFOUBICVWNARGEKYNDVOTUMIWCNSOCXBHQFZMYTYUUSVSEEHGPRXEARESOVTJKEPWXURHRRJRLJVHTZDWTQBYGZKLUGDYHVRIFHEPDUDACQUJHBMYAKCAVOEGTMMKQFLKWKSAFXPGNUWBBDIEUJDOPOXJBDBWPVFQXIMAYNQGSPHKFGIZXTVZLYZCPZJLPFCBLLKHQZZVCQWITSIMJMNOSRLOSKXNPNJDSWGXIGMDZCEAJLOTMFANBYTFIL");

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
    msg.setTimeStamp(0.25187809224050406);
    msg.setSource(63252U);
    msg.setSourceEntity(165U);
    msg.setDestination(45262U);
    msg.setDestinationEntity(65U);
    msg.origin.assign("HQBZYCLVIIQXVNSEMKMDNTLOLXAGZRNKOUEACULVTQTRTYQAZMVSPOCL");
    msg.htime = 0.6706019974838783;
    msg.lat = 0.6370881831347238;
    msg.lon = 0.8738438634469976;
    const char tmp_msg_0[] = {-42, -111, -114, -96, 32, 92, 76, 35, 31, 34, -37, -52, 100, -71, 52, -124, 28, 11, 54, 7, -63, 56, 118, -121, 89, 100, -47, -52, 75, -80, 83, 4, 91, -56, -30, 43, -105, 114, -123, -38, -34, 103, 101, 65, 32, -35, 90, 22, -50, 68, 25, -85, -78, -19, -117, -87, 21, 107, -13, -114, -33, 33, -92, 80, -105, 69, -5, 85, 39, -81, -104, -44, 82, 76, -128, -114, 107, -32, -1, 26, -88, 17, -10, 31, -22, 47, -14, -56, 75, 35, -10, -1, 45, -17, -74, -123, 111, 59, 67, 125, -102, 121, -50, 20, -110, -57, -9, -3, -72};
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
    msg.setTimeStamp(0.8585974698968886);
    msg.setSource(37105U);
    msg.setSourceEntity(7U);
    msg.setDestination(41749U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("MHVFKZAXYOFCWETVGXAJLILQSXJSXDUNGBNCIDNOZFLKPYKVXEXAHWQARGJOWWMMOBESVHRNMQEPXCHJKUJZXEGUQONQUFCAKETABVYPSGFJRLBNYGTTALVXOKQAPHEHDSEJWUCPAFFRVFKWWDTMIHUJXNSBTBBYLRGIJQMDRIZGTIPCWLAPBJMUUDRMZPLOQEGILEZHZPICDZFCHSNSQRVVHKOIDOLIUKSYNYKVDTFCZWZOMNRBR");
    msg.htime = 0.2301796247214929;
    msg.lat = 0.8104677969999377;
    msg.lon = 0.7657442988219952;
    const char tmp_msg_0[] = {66, 59, 10, -28, 78, 10, -26, 12, 116, 46, 120, 81, -43, -123, -108, 26, -20, 64, -51, -72, -89, -65, -68, 125, -99, 73, 99, 67, 34, -86, -105, 97, 69, 84, 118, -124, -1, -72, -110, 68, -109, 125, 68, -74, -122, -125, 84, 78, -51, 0, -64, -26, -105, 50, -107, 109, -58, -123, 75, -85, 36, -36, -36, 12, 50, 118, 113, 116, 103, -23, -32, 5, -6, -51, -28, 75, 52, 86, -105, -54, -94, -21, -128, 12, -88, -33, 12, -110, -65, 42, 122, 107, -1, -106, -32, -87, 61};
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
    msg.setTimeStamp(0.18948204170773053);
    msg.setSource(13069U);
    msg.setSourceEntity(30U);
    msg.setDestination(33386U);
    msg.setDestinationEntity(211U);
    msg.origin.assign("ZQTOSNEWHPDASOQEBPWGQRUXHGQMFCRVRRYDJBFBGSYMMVFPOSLOGQ");
    msg.htime = 0.7442205921237336;
    msg.lat = 0.8980420205853933;
    msg.lon = 0.10020682537613301;
    const char tmp_msg_0[] = {-67, -91, 45, 6, -109, 124, -24, -50, -55, -125, 3, 98, -76, 126, -75, -43, 59, -41, -58, -110, 57, -108, 76, -95, -24, -102, -8, -60, -33, 44, 62, -6, 106, -38, -102, 120, -67, -37, -8, -122, 84, -43, -106, -125, -73, 33, 104, -1, -110, -104, -87, 7, 96, 69, -125, 74, -3, 51, 99, 96, 64, -36, 78, 31, -98, 11, -108, -19, -75, -88, -91, -99, 41, 116, -62, -127, -90, 91, -20, 111, -92, 116, -104, -83, 84, -15, -125, -18, 73, -1, 123, 81, 80, 17, 88, 27, -96, -95, -70, 12, -6, -96, 98, -6, -46, 87, 90, -5, -30, 26, -73, -95, -117, -30, -116, 24, -77, -115, -19, -35, -36, -7, -95, -92, -9, 118, 81, -28, 109, -33, -123, -76, -101, 49, 14, -119, -85, -63, -127, 51, -26, 68, 120, -51, -49, 37, 108, -61, -82, 50, -93, 123, 74, 58, -64, 35, -11, 82, 115, 40, 55, -41, -117, 77, 35, 112, -123, -88, 35, 26, -84, 59, -42, -73, -18, 12, 87, 119, 31, 60, -123, 54, 31, 55, -7, 31, 102, 65, 105, 108, -15, 91, -124, 7, 12, -69, -33, 85, 19, -119, -106, -80, 41, 77, 124, 74, 63, 112, 82, -79, 61, -20, 63, -44};
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
    msg.setTimeStamp(0.4500323688007143);
    msg.setSource(4423U);
    msg.setSourceEntity(206U);
    msg.setDestination(3636U);
    msg.setDestinationEntity(13U);
    msg.req_id = 30981U;
    msg.ttl = 34863U;
    msg.destination.assign("LHBFGXTASVMOVPWRLZWDOAYBXCNQVOPKZFKSTKNXGGXLSLBIDEAXXQEAVVZSBZVMWEXLMQYEJXZUUHJVHBCCMITFUE");
    const char tmp_msg_0[] = {43, -38, 123, 14, -109, -95, -101, 94, -33, -95, 43, 79, -83, 46, -105, 90, -104, 39, -11, 32, -43, 99, 102, -123, -104, -114, -93, 78, 11, -125, -17, -95, 40, -111, 68, -59, -78, -103, -28, -94, -78, -26, 26, 93, 59, 10};
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
    msg.setTimeStamp(0.6971992907436027);
    msg.setSource(34722U);
    msg.setSourceEntity(118U);
    msg.setDestination(17956U);
    msg.setDestinationEntity(54U);
    msg.req_id = 46124U;
    msg.ttl = 33245U;
    msg.destination.assign("XPOULXFUAKGUBHQHBGOMTCKKGZRVSWANGGWSPVJNFBUYPODOLLDHGQNCDSYVJZEUSPXCYMGAQNIWTLCIQAXPCSQCMQWRJNKMZTXELFWXYQKA");
    const char tmp_msg_0[] = {-127, -24, -86, -46, 94, -88, 66, 82, -2, 126, -21, -102, 61, 125, 67, 1, 118, -17};
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
    msg.setTimeStamp(0.793418450734783);
    msg.setSource(22993U);
    msg.setSourceEntity(211U);
    msg.setDestination(46204U);
    msg.setDestinationEntity(110U);
    msg.req_id = 34021U;
    msg.ttl = 54304U;
    msg.destination.assign("AUMLCTOCOHGDVYXXMBCNSCPKZMUEKDVSPPKOUABWLOUPWCLJRYXANFDMIIZAKTSMIVWPPYJSFSUARUQKCJUOVUYBSIYGQDGQBABNDHITWEKVMOVXQMB");
    const char tmp_msg_0[] = {-96, -17, 49, 0, 85, -63, 120, -30, -89, -38, -1, 86, -13, 41, -74, -96, -51, 100, -98, -111, -1, -12, 107, -51, -87, 86, 68, 60, 102, 45, 55, -118, -107, 106, 108, 73, -61, 71, -98, -25, 89, -86, 31, -69, -9, 55, -96, -115, 126, -6, 40, -19, -33, -83, -100, -56, 47, 6, 15, -11, -91, 67, -63, -126, -122, 15, -71, 52, -35, -92, 59, 76, -19, 102, 3, 26, 20, 23, -115, 28, -16, -114, 40, 73, -46, 66, 66, 49, -30, 122, 86, 57, -119, -26, -41, -107, -13, -109, -56, 8, -12, -9, 119, 118, -93, -4, -81, -102, 78, -91, -97, -113, -66, -73, -44, -74, 49, -4, -2, 96, 1, -36, -25, -43, 1, 6, -69, -71};
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
    msg.setTimeStamp(0.9174472155736045);
    msg.setSource(19266U);
    msg.setSourceEntity(7U);
    msg.setDestination(61485U);
    msg.setDestinationEntity(227U);
    msg.req_id = 38517U;
    msg.status = 172U;
    msg.text.assign("KFULOGWQFLMSNRBQXPVPCOTREPEURCDUZNTKPTBNCRYUXARDHINFDPRJDMQUVNSBJGWKDSQKQSYPAHYPSCLCIUCQQLZDIHVMYEBLGGKUEJATXXWREUJRBSMBADNTEAHBNVYOYGCVJNZHIMZGNLKOKDOJXAJJWKZREZMABIMLQVWCFWHOYTVMSZDGFYXZAJFBWEIOTYOWUIVTFEPOQFWSCXLGSKPTKPYEH");

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
    msg.setTimeStamp(0.4510886564715342);
    msg.setSource(4693U);
    msg.setSourceEntity(84U);
    msg.setDestination(56029U);
    msg.setDestinationEntity(13U);
    msg.req_id = 11283U;
    msg.status = 96U;
    msg.text.assign("IBXQSJNOGHEJWPYVPCJOXDTENZTXWGUVMSSGDUMQWWENODGAWFBGGDQHTTKNQJJMOFYUAFUKTTRXHXKWLTAMSMFVZVAVKNXIFHOWBQKKV");

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
    msg.setTimeStamp(0.36974261440022793);
    msg.setSource(55798U);
    msg.setSourceEntity(11U);
    msg.setDestination(6375U);
    msg.setDestinationEntity(217U);
    msg.req_id = 11123U;
    msg.status = 125U;
    msg.text.assign("CMZAFCGTGQGJVDGCQKEDNFSBRYSVQVFWNRFOMTBQHBYWAJYPCZQRHZMQNOAPUTADDFRKAAAOEIPNMSZCMVULBEPRLZUURCZKGTXEKXVSOIZFRTFLBMCZJSKEUVNHWLKLNUBLMHKIFXEIYSLDDEXKHLWEGWGDXJOZXIHPGEYWJOYPDQQCYHTF");

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
    msg.setTimeStamp(0.8093392621247432);
    msg.setSource(37334U);
    msg.setSourceEntity(10U);
    msg.setDestination(28522U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("XQVEGWPRTCMUJWTRLUFFXODYZSSEWSVZDJZLPUEXDYREDKRKOAXLYKSLYSVXKFEVJATMSCSTBSB");
    msg.links = 2397909755U;

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
    msg.setTimeStamp(0.00010284112407132895);
    msg.setSource(11689U);
    msg.setSourceEntity(131U);
    msg.setDestination(320U);
    msg.setDestinationEntity(76U);
    msg.group_name.assign("TEZOWMLOFRPAZJCBSBGVKKYPWIJZYXGBKFIANJORRNHLMDCTCQMGWSIXOLVCJMZKNXHKCSFYVHMDSPBWYDEPODTHAMHZUIDVFIZBMBPAXLRQERULNIPWTBPAQCNVLZJUYGCFYCGLDJWWKDJLUGNWVZOVVMDQRJHIA");
    msg.links = 1359037575U;

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
    msg.setTimeStamp(0.16104044756816172);
    msg.setSource(29054U);
    msg.setSourceEntity(38U);
    msg.setDestination(54542U);
    msg.setDestinationEntity(77U);
    msg.group_name.assign("MIVUQRPBWOJCZRZGFZEWVLIRTNYLFNNOQKWEMJCBIQBHOLU");
    msg.links = 1633527095U;

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
    msg.setTimeStamp(0.9822224926259284);
    msg.setSource(4710U);
    msg.setSourceEntity(187U);
    msg.setDestination(10068U);
    msg.setDestinationEntity(59U);
    msg.groupname.assign("BNDFENKZZQEUGQFSJHHMQPXMGDAWXGAN");
    msg.action = 63U;
    msg.grouplist.assign("EOMEFRGLWDHSLXCHWOCZKNMIKGSIXSHZDZVJWESKXWYZQEQSLHIADRNTAPFLLAWMFJSYDJQKKMGXRSUSUVFGLCIAXEOGUKHLVAPYFORARJ");

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
    msg.setTimeStamp(0.8581109422877319);
    msg.setSource(41026U);
    msg.setSourceEntity(3U);
    msg.setDestination(4389U);
    msg.setDestinationEntity(122U);
    msg.groupname.assign("FRPWKZHYGURKVXLOKIAWQSCADLNXKTWVCOCXSONUMMSKPOAMYPVGZDNUPWBMTJZQENSYDYECMNQFTUACKZVSWXGCP");
    msg.action = 130U;
    msg.grouplist.assign("PUNKQZQXJBDIWOZWDRLJDVWWVOGPAREEUSGEMZSRDKBKMSMHIFFIKINYNPZGDFCXCQKNOZGJUTONNSOMKXCAKSVPUJGJZXSHWUZYUUGAYXLOIABPDYBGHJWQMYTETQUTMHDDOLFPBRBWQTWAIBYERSGQXF");

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
    msg.setTimeStamp(0.26725568041524594);
    msg.setSource(60248U);
    msg.setSourceEntity(4U);
    msg.setDestination(16388U);
    msg.setDestinationEntity(246U);
    msg.groupname.assign("VLDFOLGOYECPQSSFWTIXMJMDOPVUWABDRXBJGHFECNTUKRTGSIDKEXACKCUVHNADMZENTTIIKEXIXXQDLRVKLFBJSHWTUZZXJWNWPJBIVWVNYOTEUPRKNGAFLCROVWEIGHJHICOOHAPNJCESEYBMPMXFZBYAKRQADPQODCCDPYQRSGFIGWBQS");
    msg.action = 56U;
    msg.grouplist.assign("DPPVWRYDFTNUAKSMQJRNVKRVTPZPEBBCEVJSTQEUNCYNGVYTDHNHPAGKLOHIEQSOFNAMGX");

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
    msg.setTimeStamp(0.3215951323828249);
    msg.setSource(42685U);
    msg.setSourceEntity(51U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(114U);
    msg.id = 214U;
    msg.range = 0.20409069242320566;

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
    msg.setTimeStamp(0.004912268375955264);
    msg.setSource(20396U);
    msg.setSourceEntity(97U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(50U);
    msg.id = 192U;
    msg.range = 0.8558532437323843;

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
    msg.setTimeStamp(0.9622052993190231);
    msg.setSource(50150U);
    msg.setSourceEntity(30U);
    msg.setDestination(21074U);
    msg.setDestinationEntity(209U);
    msg.id = 183U;
    msg.range = 0.4878857814993882;

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
    msg.setTimeStamp(0.281638907554016);
    msg.setSource(5049U);
    msg.setSourceEntity(78U);
    msg.setDestination(15691U);
    msg.setDestinationEntity(151U);
    msg.tx = 201U;
    msg.channel = 113U;
    msg.timer = 55115U;

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
    msg.setTimeStamp(0.007019689651499683);
    msg.setSource(64884U);
    msg.setSourceEntity(215U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(58U);
    msg.tx = 93U;
    msg.channel = 216U;
    msg.timer = 13568U;

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
    msg.setTimeStamp(0.4816121798203399);
    msg.setSource(59637U);
    msg.setSourceEntity(201U);
    msg.setDestination(33947U);
    msg.setDestinationEntity(10U);
    msg.tx = 234U;
    msg.channel = 68U;
    msg.timer = 1819U;

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
    msg.setTimeStamp(0.47428703660502636);
    msg.setSource(57931U);
    msg.setSourceEntity(143U);
    msg.setDestination(11785U);
    msg.setDestinationEntity(195U);
    msg.beacon.assign("KRVFDBUZDFAKUWTVAJTFCXLLFFOSNRYIYUHVFNWKLJRXPMTYQEOQPBGFSREKJGHCWIPVBMAYSOVQIYJAEOPXCEVHXRVUOYDMANBMCEEVPLETZXCJTMQGZKMDYURCCZRKO");
    msg.lat = 0.06536522282588708;
    msg.lon = 0.8434809606892802;
    msg.depth = 0.5619543953004744;
    msg.query_channel = 204U;
    msg.reply_channel = 205U;
    msg.transponder_delay = 3U;

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
    msg.setTimeStamp(0.14129004732279482);
    msg.setSource(5869U);
    msg.setSourceEntity(38U);
    msg.setDestination(50480U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("NFPKIZAMSXTMLBFKBCTFWMLUPGPSLYFMWMAGKWPGWRXYMOOFNQUNJHBZLBEROCSEERXEJXSWSQIPLHKAZXXIDXDQRNVNYJYZCOJJSBEHFEDZWKRHF");
    msg.lat = 0.44345285892191866;
    msg.lon = 0.12190849225640155;
    msg.depth = 0.19990220399314307;
    msg.query_channel = 241U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 148U;

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
    msg.setTimeStamp(0.7378419742074157);
    msg.setSource(32103U);
    msg.setSourceEntity(196U);
    msg.setDestination(12511U);
    msg.setDestinationEntity(20U);
    msg.beacon.assign("ITSYKXIFUSEKBQUWOWEJMZGORHL");
    msg.lat = 0.3332694356581708;
    msg.lon = 0.980026897484376;
    msg.depth = 0.2597411249418602;
    msg.query_channel = 85U;
    msg.reply_channel = 26U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.605346823106387);
    msg.setSource(41319U);
    msg.setSourceEntity(180U);
    msg.setDestination(57598U);
    msg.setDestinationEntity(207U);
    msg.op = 195U;

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
    msg.setTimeStamp(0.112735486541791);
    msg.setSource(57443U);
    msg.setSourceEntity(135U);
    msg.setDestination(47433U);
    msg.setDestinationEntity(116U);
    msg.op = 176U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ESZGBNVIAHSRXKAIFAZYCOQIHHUWGAZLDMLVEKCAOVAXWVKQFLQCNCUDIESKDIIMPGFXZZKQQZCOCGATEFSDJPHOQBHTFOBOFQRJRBVQRMCHQSEXBZSLWXBUPTBSPYTNUMLUXLESBLEJUJVEZYJUFPGWHFNWIKRZMNTSACYJNOZNXUHHPWWKWMWSOLGDRKNRVTUCMBIIDE");
    tmp_msg_0.lat = 0.9823188341973756;
    tmp_msg_0.lon = 0.7386861088496814;
    tmp_msg_0.depth = 0.1714787929396665;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 20U;
    tmp_msg_0.transponder_delay = 113U;
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
    msg.setTimeStamp(0.916139456509685);
    msg.setSource(56833U);
    msg.setSourceEntity(55U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(215U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.8939201474281764);
    msg.setSource(7533U);
    msg.setSourceEntity(136U);
    msg.setDestination(29763U);
    msg.setDestinationEntity(78U);
    msg.address = 161U;

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
    msg.setTimeStamp(0.07403707102764812);
    msg.setSource(41072U);
    msg.setSourceEntity(5U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(34U);
    msg.address = 207U;

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
    msg.setTimeStamp(0.4444292310288641);
    msg.setSource(32259U);
    msg.setSourceEntity(20U);
    msg.setDestination(52445U);
    msg.setDestinationEntity(26U);
    msg.address = 183U;

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
    msg.setTimeStamp(0.4253371761005298);
    msg.setSource(7994U);
    msg.setSourceEntity(100U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(12U);
    msg.address = 242U;
    msg.status = 227U;
    msg.range = 0.8760054099062972;

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
    msg.setTimeStamp(0.374883985784778);
    msg.setSource(42821U);
    msg.setSourceEntity(4U);
    msg.setDestination(60262U);
    msg.setDestinationEntity(195U);
    msg.address = 191U;
    msg.status = 44U;
    msg.range = 0.033494048249108066;

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
    msg.setTimeStamp(0.1637306400010614);
    msg.setSource(60299U);
    msg.setSourceEntity(36U);
    msg.setDestination(9125U);
    msg.setDestinationEntity(178U);
    msg.address = 142U;
    msg.status = 67U;
    msg.range = 0.564963118478498;

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
    msg.setTimeStamp(0.45258937325470616);
    msg.setSource(18464U);
    msg.setSourceEntity(104U);
    msg.setDestination(61396U);
    msg.setDestinationEntity(55U);
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.16001999353191632;
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
    msg.setTimeStamp(0.24373358961879288);
    msg.setSource(33520U);
    msg.setSourceEntity(37U);
    msg.setDestination(2687U);
    msg.setDestinationEntity(157U);
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("PHLUMAQAAFAVFTKNSNHGSHIIAZYFMQZUNGHPGSFECVDMXOYOBLSXWLZTUMIUPIKURQPIPXLNJYCQPBBCODZJPXULJJGXMQYKEQWLBZYYJCNIKUYIPEMYFHRLJEQGTLTSJJDDUKXNXJZJYGUWLNVZEOFY");
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
    msg.setTimeStamp(0.6310543183632505);
    msg.setSource(11599U);
    msg.setSourceEntity(244U);
    msg.setDestination(29396U);
    msg.setDestinationEntity(57U);
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 13955U;
    tmp_msg_0.lat = 0.6319947131841255;
    tmp_msg_0.lon = 0.6674517801467131;
    tmp_msg_0.z = 0.12137850256359961;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.5786064941566337;
    tmp_msg_0.speed_units = 245U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8925665020466511;
    tmp_tmp_msg_0_0.y = 0.18713243350741793;
    tmp_tmp_msg_0_0.z = 0.8817802993731017;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("NXZACYJZCSIVGKJXVLRTYDCTHQDYXQPKNLDRFCGLAOLVEATOHQTUSLGPVGDCMDMCRDWPOJCWWJJBKGBPPYXUWBHDSZZHMWBNVYAEGRIKTKFMSRHEUYYVKAANIMCDI");
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
    msg.setTimeStamp(0.3517446729481568);
    msg.setSource(47333U);
    msg.setSourceEntity(16U);
    msg.setDestination(36532U);
    msg.setDestinationEntity(83U);
    msg.enable = 154U;

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
    msg.setTimeStamp(0.1678771463761478);
    msg.setSource(30747U);
    msg.setSourceEntity(29U);
    msg.setDestination(39181U);
    msg.setDestinationEntity(47U);
    msg.enable = 160U;

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
    msg.setTimeStamp(0.3082122630603874);
    msg.setSource(21323U);
    msg.setSourceEntity(117U);
    msg.setDestination(21171U);
    msg.setDestinationEntity(116U);
    msg.enable = 126U;

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
    msg.setTimeStamp(0.16534192706548012);
    msg.setSource(18861U);
    msg.setSourceEntity(74U);
    msg.setDestination(44130U);
    msg.setDestinationEntity(167U);
    msg.summary = 193U;
    msg.level = 232U;

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
    msg.setTimeStamp(0.2555888381695218);
    msg.setSource(20429U);
    msg.setSourceEntity(227U);
    msg.setDestination(37808U);
    msg.setDestinationEntity(26U);
    msg.summary = 54U;
    msg.level = 42U;

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
    msg.setTimeStamp(0.8202697803447412);
    msg.setSource(40922U);
    msg.setSourceEntity(66U);
    msg.setDestination(10965U);
    msg.setDestinationEntity(148U);
    msg.summary = 55U;
    msg.level = 124U;

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
    msg.setTimeStamp(0.9216432167177389);
    msg.setSource(31934U);
    msg.setSourceEntity(8U);
    msg.setDestination(61341U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.5984151053688832);
    msg.setSource(18028U);
    msg.setSourceEntity(227U);
    msg.setDestination(26976U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.8157623292096768);
    msg.setSource(29676U);
    msg.setSourceEntity(72U);
    msg.setDestination(38693U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.7425709932287718);
    msg.setSource(4346U);
    msg.setSourceEntity(4U);
    msg.setDestination(17447U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.016054128758528297);
    msg.setSource(8480U);
    msg.setSourceEntity(121U);
    msg.setDestination(21518U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.6589527727300094);
    msg.setSource(18674U);
    msg.setSourceEntity(14U);
    msg.setDestination(18906U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.3524349144865674);
    msg.setSource(51673U);
    msg.setSourceEntity(217U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(141U);
    msg.op = 57U;
    msg.system.assign("YUOSTTEUGBNKWXFQHGJPPMZHVELFCADLQXVTALNVXNAVZOMLBBCQQYQTCWPKKYPVPMRLSJLOXALQOCMFAIYCPRRDHXACIICONPBBEBXHGWEWVDPORHATHSGIXPWUESKXSSUAUDNUMMWLEYMSRGNAPCVZOURJGHKWHJWIMKRQICTFSXFFFFI");
    msg.range = 0.7556439031307297;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 205U;
    tmp_msg_0.longain = 0.5620733994352507;
    tmp_msg_0.latgain = 0.04921484363835971;
    tmp_msg_0.bondthick = 1904940335U;
    tmp_msg_0.leadgain = 0.8055734488843147;
    tmp_msg_0.deconflgain = 0.706770822939045;
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
    msg.setTimeStamp(0.34246931503286904);
    msg.setSource(59271U);
    msg.setSourceEntity(96U);
    msg.setDestination(28598U);
    msg.setDestinationEntity(17U);
    msg.op = 64U;
    msg.system.assign("BCWTQDNPFKGOUQTYVZQP");
    msg.range = 0.5086466075420638;
    IMC::IridiumMsgTx tmp_msg_0;
    tmp_msg_0.req_id = 64088U;
    tmp_msg_0.ttl = 46645U;
    tmp_msg_0.destination.assign("YTOAINTBJDKQFZWFNGUPKPLKPBFSJLUUAEHVJNFOMWIJYLMVWZNFVWFUTHGPIFAOBYPYXQCMRCIUOTTOTCNZGMMNJYDCIHKWSZHASSBXZRXHQATXARRMBOVGXIKDRUNDSMLDWQQMKEYEQZSSCLAPSUQZKXEUGMBHPAQJWOPJCXQDYFBOYGCNTLJGAPQUTXLWYEFIBCWRNNIVEOBHPGLHIMV");
    const char tmp_tmp_msg_0_0[] = {-84, -122, 79, 18, -58, 4, -32, -24, 77, 74, 109, -8, -71, 115, -37, -58, -18, 38, -27, 65, 103, 49, -94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.148350676002743);
    msg.setSource(39521U);
    msg.setSourceEntity(145U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(169U);
    msg.op = 2U;
    msg.system.assign("TMCUIGWACAVKRKGGSWHNITJWWHXDQNLQJUYINLPCILDQZPPDMTOOXVWAGLGZZGJLISKOKWSRQQFOFRPVDCYVYJJLIOLRYETNBEDBKACZBTVKTGXZOUDVYMFUXQYKAKUROJSHYAEXWLRHYSKETIUHEJSNGRYBTESSXLXNEJBZQKXZA");
    msg.range = 0.3097579359173628;
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7640264118223044;
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
    msg.setTimeStamp(0.07073021876750296);
    msg.setSource(30666U);
    msg.setSourceEntity(163U);
    msg.setDestination(34294U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.7254519488048473);
    msg.setSource(3277U);
    msg.setSourceEntity(67U);
    msg.setDestination(62653U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.3535937310765066);
    msg.setSource(41041U);
    msg.setSourceEntity(160U);
    msg.setDestination(12254U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.3481686549623846);
    msg.setSource(22818U);
    msg.setSourceEntity(204U);
    msg.setDestination(1506U);
    msg.setDestinationEntity(217U);
    msg.list.assign("RFYJCVLRVDHTGIZUQPMYNOCQNXOFSCSQUGYPEMVLODPMSPYXJTRPGBZLCILANWKZYECIWPKXPXGJTZCJUZTVQDAVRNEWJVEASCJLDDKX");

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
    msg.setTimeStamp(0.8683255796832712);
    msg.setSource(50897U);
    msg.setSourceEntity(21U);
    msg.setDestination(48952U);
    msg.setDestinationEntity(4U);
    msg.list.assign("AOQXDYKTQZVKTGDENCTBDXMHHSIOPKWVFLMGIHNQHDXNEZOCACG");

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
    msg.setTimeStamp(0.6685155284308285);
    msg.setSource(63511U);
    msg.setSourceEntity(149U);
    msg.setDestination(44450U);
    msg.setDestinationEntity(60U);
    msg.list.assign("BVNOEZQBGDKVODTLCLBIMWADK");

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
    msg.setTimeStamp(0.8360421218039393);
    msg.setSource(22076U);
    msg.setSourceEntity(174U);
    msg.setDestination(12629U);
    msg.setDestinationEntity(60U);
    msg.value = -684;

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
    msg.setTimeStamp(0.3337552196805045);
    msg.setSource(35649U);
    msg.setSourceEntity(23U);
    msg.setDestination(2678U);
    msg.setDestinationEntity(244U);
    msg.value = -18068;

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
    msg.setTimeStamp(0.7921609330209577);
    msg.setSource(40738U);
    msg.setSourceEntity(75U);
    msg.setDestination(59803U);
    msg.setDestinationEntity(124U);
    msg.value = 27476;

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
    msg.setTimeStamp(0.2282793812392434);
    msg.setSource(10382U);
    msg.setSourceEntity(125U);
    msg.setDestination(54460U);
    msg.setDestinationEntity(83U);
    msg.value = 0.036797107761822656;

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
    msg.setTimeStamp(0.6131293812262729);
    msg.setSource(21894U);
    msg.setSourceEntity(128U);
    msg.setDestination(46905U);
    msg.setDestinationEntity(229U);
    msg.value = 0.008747603624684852;

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
    msg.setTimeStamp(0.7422837927919345);
    msg.setSource(3836U);
    msg.setSourceEntity(145U);
    msg.setDestination(57958U);
    msg.setDestinationEntity(60U);
    msg.value = 0.6199377486888604;

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
    msg.setTimeStamp(0.12042139785996064);
    msg.setSource(4804U);
    msg.setSourceEntity(84U);
    msg.setDestination(58717U);
    msg.setDestinationEntity(233U);
    msg.value = 0.34113061426447144;

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
    msg.setTimeStamp(0.27547988108004273);
    msg.setSource(10554U);
    msg.setSourceEntity(202U);
    msg.setDestination(28359U);
    msg.setDestinationEntity(30U);
    msg.value = 0.25120885117712133;

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
    msg.setTimeStamp(0.3920972281728814);
    msg.setSource(28921U);
    msg.setSourceEntity(218U);
    msg.setDestination(38089U);
    msg.setDestinationEntity(142U);
    msg.value = 0.3508154986931892;

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
    msg.setTimeStamp(0.6124027772349754);
    msg.setSource(17001U);
    msg.setSourceEntity(106U);
    msg.setDestination(18236U);
    msg.setDestinationEntity(26U);
    msg.validity = 34032U;
    msg.type = 184U;
    msg.utc_year = 9242U;
    msg.utc_month = 131U;
    msg.utc_day = 135U;
    msg.utc_time = 0.7853735222822776;
    msg.lat = 0.763415895554171;
    msg.lon = 0.3107554194366331;
    msg.height = 0.006974064312764483;
    msg.satellites = 100U;
    msg.cog = 0.44671471975866694;
    msg.sog = 0.3128663406341823;
    msg.hdop = 0.18722347881462786;
    msg.vdop = 0.29772804375303064;
    msg.hacc = 0.5212815588121252;
    msg.vacc = 0.5104891941309811;

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
    msg.setTimeStamp(0.420094503823646);
    msg.setSource(253U);
    msg.setSourceEntity(71U);
    msg.setDestination(22522U);
    msg.setDestinationEntity(117U);
    msg.validity = 43129U;
    msg.type = 82U;
    msg.utc_year = 48268U;
    msg.utc_month = 196U;
    msg.utc_day = 37U;
    msg.utc_time = 0.22967889629678495;
    msg.lat = 0.9500765949109312;
    msg.lon = 0.00990307788420186;
    msg.height = 0.07271810542002566;
    msg.satellites = 99U;
    msg.cog = 0.25079936174527373;
    msg.sog = 0.7021301326665934;
    msg.hdop = 0.3164465955964678;
    msg.vdop = 0.5452997617321991;
    msg.hacc = 0.16599425970568737;
    msg.vacc = 0.6736876544440916;

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
    msg.setTimeStamp(0.9894175591013807);
    msg.setSource(6748U);
    msg.setSourceEntity(169U);
    msg.setDestination(58146U);
    msg.setDestinationEntity(137U);
    msg.validity = 8036U;
    msg.type = 93U;
    msg.utc_year = 28610U;
    msg.utc_month = 131U;
    msg.utc_day = 238U;
    msg.utc_time = 0.0146452475694695;
    msg.lat = 0.007153226240402599;
    msg.lon = 0.43732113754384616;
    msg.height = 0.13550084901770887;
    msg.satellites = 127U;
    msg.cog = 0.06523708612554147;
    msg.sog = 0.47711759424860567;
    msg.hdop = 0.11782222544889209;
    msg.vdop = 0.9237803570097258;
    msg.hacc = 0.4040696495606614;
    msg.vacc = 0.4291366791361424;

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
    msg.setTimeStamp(0.523993387171931);
    msg.setSource(6692U);
    msg.setSourceEntity(101U);
    msg.setDestination(10829U);
    msg.setDestinationEntity(72U);
    msg.time = 0.05136761535052026;
    msg.phi = 0.24055723201322965;
    msg.theta = 0.844612348655279;
    msg.psi = 0.7102601568449181;
    msg.psi_magnetic = 0.8423393516121355;

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
    msg.setTimeStamp(0.8246880086341772);
    msg.setSource(54742U);
    msg.setSourceEntity(143U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(109U);
    msg.time = 0.6343506188373416;
    msg.phi = 0.5898836285697281;
    msg.theta = 0.01774977884877682;
    msg.psi = 0.6803809758442724;
    msg.psi_magnetic = 0.4263628592580583;

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
    msg.setTimeStamp(0.2651065831380526);
    msg.setSource(6105U);
    msg.setSourceEntity(163U);
    msg.setDestination(60639U);
    msg.setDestinationEntity(58U);
    msg.time = 0.4523440874056438;
    msg.phi = 0.2731680184874111;
    msg.theta = 0.2774014603050883;
    msg.psi = 0.13617696252356226;
    msg.psi_magnetic = 0.42776635676254815;

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
    msg.setTimeStamp(0.6223318304550527);
    msg.setSource(39630U);
    msg.setSourceEntity(247U);
    msg.setDestination(55580U);
    msg.setDestinationEntity(33U);
    msg.time = 0.5562633242043534;
    msg.x = 0.15282651134282665;
    msg.y = 0.6464666530900448;
    msg.z = 0.8890994778772792;
    msg.timestep = 0.9032532944439173;

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
    msg.setTimeStamp(0.2846548970005649);
    msg.setSource(115U);
    msg.setSourceEntity(173U);
    msg.setDestination(14264U);
    msg.setDestinationEntity(189U);
    msg.time = 0.2672027209483121;
    msg.x = 0.7198954091441264;
    msg.y = 0.8721495037332347;
    msg.z = 0.015358656438243079;
    msg.timestep = 0.4849828686277394;

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
    msg.setTimeStamp(0.43884321635676016);
    msg.setSource(58228U);
    msg.setSourceEntity(4U);
    msg.setDestination(9119U);
    msg.setDestinationEntity(165U);
    msg.time = 0.192173175284428;
    msg.x = 0.7765738832970015;
    msg.y = 0.4465901126361309;
    msg.z = 0.8276193746827925;
    msg.timestep = 0.6214739537890215;

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
    msg.setTimeStamp(0.7028980712102557);
    msg.setSource(15212U);
    msg.setSourceEntity(3U);
    msg.setDestination(24617U);
    msg.setDestinationEntity(143U);
    msg.time = 0.0017291438399514858;
    msg.x = 0.6258344329833225;
    msg.y = 0.2728410353939348;
    msg.z = 0.594906072945113;

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
    msg.setTimeStamp(0.5772388743585224);
    msg.setSource(1507U);
    msg.setSourceEntity(147U);
    msg.setDestination(21281U);
    msg.setDestinationEntity(74U);
    msg.time = 0.8460262110148884;
    msg.x = 0.0010567750217457261;
    msg.y = 0.2425336080737105;
    msg.z = 0.9341083820133538;

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
    msg.setTimeStamp(0.23097820095320332);
    msg.setSource(58557U);
    msg.setSourceEntity(37U);
    msg.setDestination(48607U);
    msg.setDestinationEntity(103U);
    msg.time = 0.23476762311618127;
    msg.x = 0.7493498100847888;
    msg.y = 0.5981540669299447;
    msg.z = 0.19660177812756363;

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
    msg.setTimeStamp(0.5652794123434892);
    msg.setSource(13513U);
    msg.setSourceEntity(116U);
    msg.setDestination(51861U);
    msg.setDestinationEntity(14U);
    msg.time = 0.018748369583809432;
    msg.x = 0.003629938478132644;
    msg.y = 0.7060564604322995;
    msg.z = 0.23749390232718948;

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
    msg.setTimeStamp(0.19134999117717522);
    msg.setSource(2967U);
    msg.setSourceEntity(32U);
    msg.setDestination(53580U);
    msg.setDestinationEntity(31U);
    msg.time = 0.2930291243347368;
    msg.x = 0.556455518379245;
    msg.y = 0.715282506396306;
    msg.z = 0.012185195400761573;

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
    msg.setTimeStamp(0.7253974883004504);
    msg.setSource(55248U);
    msg.setSourceEntity(155U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(167U);
    msg.time = 0.6042610033649662;
    msg.x = 0.47561195697305436;
    msg.y = 0.2358046868781538;
    msg.z = 0.6544395987538855;

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
    msg.setTimeStamp(0.2227808485706173);
    msg.setSource(59430U);
    msg.setSourceEntity(211U);
    msg.setDestination(56472U);
    msg.setDestinationEntity(66U);
    msg.time = 0.4092978122278824;
    msg.x = 0.31547990476080146;
    msg.y = 0.9193767040499919;
    msg.z = 0.1735281881437224;

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
    msg.setTimeStamp(0.8885370971620611);
    msg.setSource(38757U);
    msg.setSourceEntity(22U);
    msg.setDestination(2926U);
    msg.setDestinationEntity(115U);
    msg.time = 0.12554109369583888;
    msg.x = 0.005491911825999729;
    msg.y = 0.7238508101739362;
    msg.z = 0.04545500825835713;

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
    msg.setTimeStamp(0.3188398990097224);
    msg.setSource(16276U);
    msg.setSourceEntity(59U);
    msg.setDestination(61493U);
    msg.setDestinationEntity(140U);
    msg.time = 0.9945911735418361;
    msg.x = 0.6454768508563073;
    msg.y = 0.32777284864904543;
    msg.z = 0.7744895990655531;

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
    msg.setTimeStamp(0.466489163610067);
    msg.setSource(32965U);
    msg.setSourceEntity(0U);
    msg.setDestination(29260U);
    msg.setDestinationEntity(44U);
    msg.validity = 32U;
    msg.x = 0.6311904046107948;
    msg.y = 0.053519858201852344;
    msg.z = 0.0005354788064232396;

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
    msg.setTimeStamp(0.8198464416384753);
    msg.setSource(55446U);
    msg.setSourceEntity(106U);
    msg.setDestination(22254U);
    msg.setDestinationEntity(49U);
    msg.validity = 200U;
    msg.x = 0.6421650046514121;
    msg.y = 0.16603818989909502;
    msg.z = 0.2654987982970073;

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
    msg.setTimeStamp(0.06488716028996633);
    msg.setSource(25948U);
    msg.setSourceEntity(173U);
    msg.setDestination(60325U);
    msg.setDestinationEntity(205U);
    msg.validity = 26U;
    msg.x = 0.07895420874026671;
    msg.y = 0.17580884243775652;
    msg.z = 0.49919682430681156;

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
    msg.setTimeStamp(0.8542693213138846);
    msg.setSource(5425U);
    msg.setSourceEntity(168U);
    msg.setDestination(38936U);
    msg.setDestinationEntity(106U);
    msg.validity = 3U;
    msg.x = 0.1728670636177394;
    msg.y = 0.05976476675848719;
    msg.z = 0.5498668060122387;

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
    msg.setTimeStamp(0.27075489755101456);
    msg.setSource(38774U);
    msg.setSourceEntity(96U);
    msg.setDestination(31353U);
    msg.setDestinationEntity(17U);
    msg.validity = 15U;
    msg.x = 0.37618124197942515;
    msg.y = 0.5577569141336948;
    msg.z = 0.3992613445099521;

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
    msg.setTimeStamp(0.9591409149813301);
    msg.setSource(12831U);
    msg.setSourceEntity(111U);
    msg.setDestination(37282U);
    msg.setDestinationEntity(1U);
    msg.validity = 148U;
    msg.x = 0.4047003183699679;
    msg.y = 0.7334392650924153;
    msg.z = 0.12954573660504431;

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
    msg.setTimeStamp(0.5664421466464933);
    msg.setSource(8978U);
    msg.setSourceEntity(171U);
    msg.setDestination(2341U);
    msg.setDestinationEntity(252U);
    msg.time = 0.7832646132851224;
    msg.x = 0.664731335528262;
    msg.y = 0.3874971826959652;
    msg.z = 0.7457965003659471;

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
    msg.setTimeStamp(0.4796746735967451);
    msg.setSource(37748U);
    msg.setSourceEntity(21U);
    msg.setDestination(60863U);
    msg.setDestinationEntity(185U);
    msg.time = 0.10015922155780022;
    msg.x = 0.6229350214215316;
    msg.y = 0.39875783212787064;
    msg.z = 0.09726867008645923;

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
    msg.setTimeStamp(0.4631941531902447);
    msg.setSource(5471U);
    msg.setSourceEntity(177U);
    msg.setDestination(60916U);
    msg.setDestinationEntity(171U);
    msg.time = 0.7891215842528236;
    msg.x = 0.013593085982758879;
    msg.y = 0.871773773292117;
    msg.z = 0.6585070017173742;

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
    msg.setTimeStamp(0.4720458121768133);
    msg.setSource(20093U);
    msg.setSourceEntity(67U);
    msg.setDestination(19465U);
    msg.setDestinationEntity(249U);
    msg.validity = 231U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5973003360848768;
    tmp_msg_0.y = 0.3052287469789684;
    tmp_msg_0.z = 0.6446299737533281;
    tmp_msg_0.phi = 0.42884886357845586;
    tmp_msg_0.theta = 0.7511611630875127;
    tmp_msg_0.psi = 0.3589709096027003;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.11005310465027385;
    tmp_msg_1.beam_height = 0.5938400917478825;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5401584911029903;

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
    msg.setTimeStamp(0.6293133930737222);
    msg.setSource(17297U);
    msg.setSourceEntity(170U);
    msg.setDestination(39494U);
    msg.setDestinationEntity(198U);
    msg.validity = 31U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.2931943685852424;
    tmp_msg_0.beam_height = 0.47003006189278573;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.527956629746881;

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
    msg.setTimeStamp(0.02355723003957033);
    msg.setSource(18458U);
    msg.setSourceEntity(11U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(82U);
    msg.validity = 190U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8329877421444494;
    tmp_msg_0.y = 0.8330724452549909;
    tmp_msg_0.z = 0.542151513117631;
    tmp_msg_0.phi = 0.19839370932003264;
    tmp_msg_0.theta = 0.19432341094863426;
    tmp_msg_0.psi = 0.4639952982003578;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7947589802033355;

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
    msg.setTimeStamp(0.7872517023813432);
    msg.setSource(59737U);
    msg.setSourceEntity(87U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(207U);
    msg.value = 0.9861516066958359;

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
    msg.setTimeStamp(0.925977541524689);
    msg.setSource(24765U);
    msg.setSourceEntity(144U);
    msg.setDestination(54205U);
    msg.setDestinationEntity(143U);
    msg.value = 0.6787379457002464;

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
    msg.setTimeStamp(0.9974319826432524);
    msg.setSource(39634U);
    msg.setSourceEntity(143U);
    msg.setDestination(22889U);
    msg.setDestinationEntity(108U);
    msg.value = 0.6290329400774635;

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
    msg.setTimeStamp(0.6316131765657701);
    msg.setSource(46143U);
    msg.setSourceEntity(165U);
    msg.setDestination(37967U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4491235881851211;

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
    msg.setTimeStamp(0.07395587040039708);
    msg.setSource(22984U);
    msg.setSourceEntity(112U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(33U);
    msg.value = 0.1415892956219016;

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
    msg.setTimeStamp(0.48080857158453716);
    msg.setSource(60819U);
    msg.setSourceEntity(219U);
    msg.setDestination(9409U);
    msg.setDestinationEntity(206U);
    msg.value = 0.004980499902368152;

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
    msg.setTimeStamp(0.313168081505821);
    msg.setSource(60841U);
    msg.setSourceEntity(78U);
    msg.setDestination(37569U);
    msg.setDestinationEntity(149U);
    msg.value = 0.024221259947167284;

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
    msg.setTimeStamp(0.8088976113122965);
    msg.setSource(50362U);
    msg.setSourceEntity(188U);
    msg.setDestination(10031U);
    msg.setDestinationEntity(128U);
    msg.value = 0.2558796796709346;

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
    msg.setTimeStamp(0.2306993052741989);
    msg.setSource(21972U);
    msg.setSourceEntity(222U);
    msg.setDestination(58957U);
    msg.setDestinationEntity(177U);
    msg.value = 0.21942823823253776;

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
    msg.setTimeStamp(0.7986888431279479);
    msg.setSource(14838U);
    msg.setSourceEntity(109U);
    msg.setDestination(25708U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9694121326458652;

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
    msg.setTimeStamp(0.8967132006537128);
    msg.setSource(7628U);
    msg.setSourceEntity(167U);
    msg.setDestination(46202U);
    msg.setDestinationEntity(151U);
    msg.value = 0.6312720288997281;

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
    msg.setTimeStamp(0.376856145993289);
    msg.setSource(32525U);
    msg.setSourceEntity(158U);
    msg.setDestination(2819U);
    msg.setDestinationEntity(97U);
    msg.value = 0.7403512108170235;

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
    msg.setTimeStamp(0.9194196280842706);
    msg.setSource(59372U);
    msg.setSourceEntity(29U);
    msg.setDestination(10583U);
    msg.setDestinationEntity(127U);
    msg.value = 0.6163057567460736;

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
    msg.setTimeStamp(0.037648524863946875);
    msg.setSource(13508U);
    msg.setSourceEntity(200U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(99U);
    msg.value = 0.7462022603110697;

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
    msg.setTimeStamp(0.03237789679713665);
    msg.setSource(22324U);
    msg.setSourceEntity(1U);
    msg.setDestination(65105U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7444067627741277;

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
    msg.setTimeStamp(0.09083489503162612);
    msg.setSource(54839U);
    msg.setSourceEntity(32U);
    msg.setDestination(9999U);
    msg.setDestinationEntity(12U);
    msg.value = 0.9100056910856095;

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
    msg.setTimeStamp(0.6030739189146201);
    msg.setSource(34404U);
    msg.setSourceEntity(171U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(8U);
    msg.value = 0.1819232376464861;

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
    msg.setTimeStamp(0.3849247025032383);
    msg.setSource(11657U);
    msg.setSourceEntity(144U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(221U);
    msg.value = 0.909177727742953;

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
    msg.setTimeStamp(0.422273633981053);
    msg.setSource(26722U);
    msg.setSourceEntity(172U);
    msg.setDestination(44621U);
    msg.setDestinationEntity(47U);
    msg.value = 0.29893738998503727;

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
    msg.setTimeStamp(0.39188640757114557);
    msg.setSource(60577U);
    msg.setSourceEntity(194U);
    msg.setDestination(50229U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6171666470529724;

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
    msg.setTimeStamp(0.29631165752478905);
    msg.setSource(5876U);
    msg.setSourceEntity(119U);
    msg.setDestination(35197U);
    msg.setDestinationEntity(39U);
    msg.value = 0.4901274093260384;

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
    msg.setTimeStamp(0.0021612919951686793);
    msg.setSource(62901U);
    msg.setSourceEntity(232U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(61U);
    msg.value = 0.031477311288264254;

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
    msg.setTimeStamp(0.7357960987251985);
    msg.setSource(41897U);
    msg.setSourceEntity(58U);
    msg.setDestination(12073U);
    msg.setDestinationEntity(189U);
    msg.value = 0.5824489717700656;

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
    msg.setTimeStamp(0.9712820584093403);
    msg.setSource(63966U);
    msg.setSourceEntity(128U);
    msg.setDestination(22135U);
    msg.setDestinationEntity(162U);
    msg.value = 0.043112155572460176;

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
    msg.setTimeStamp(0.20071136456019034);
    msg.setSource(11077U);
    msg.setSourceEntity(21U);
    msg.setDestination(35661U);
    msg.setDestinationEntity(118U);
    msg.direction = 0.09271202697157965;
    msg.speed = 0.7712748557229758;
    msg.turbulence = 0.35802809209783826;

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
    msg.setTimeStamp(0.9281733756696284);
    msg.setSource(5417U);
    msg.setSourceEntity(104U);
    msg.setDestination(43608U);
    msg.setDestinationEntity(24U);
    msg.direction = 0.4353830369901872;
    msg.speed = 0.9158090358617295;
    msg.turbulence = 0.767132019983762;

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
    msg.setTimeStamp(0.41926227184895426);
    msg.setSource(56563U);
    msg.setSourceEntity(163U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(20U);
    msg.direction = 0.6700674134028051;
    msg.speed = 0.7898721410609154;
    msg.turbulence = 0.7769634804238917;

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
    msg.setTimeStamp(0.7630897239183707);
    msg.setSource(47485U);
    msg.setSourceEntity(218U);
    msg.setDestination(45702U);
    msg.setDestinationEntity(221U);
    msg.value = 0.056512381578741944;

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
    msg.setTimeStamp(0.4090367166838079);
    msg.setSource(24636U);
    msg.setSourceEntity(37U);
    msg.setDestination(24167U);
    msg.setDestinationEntity(60U);
    msg.value = 0.012605366617766567;

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
    msg.setTimeStamp(0.07584860224153078);
    msg.setSource(44190U);
    msg.setSourceEntity(224U);
    msg.setDestination(30044U);
    msg.setDestinationEntity(150U);
    msg.value = 0.2375905864766783;

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
    msg.setTimeStamp(0.9831016876344488);
    msg.setSource(57767U);
    msg.setSourceEntity(19U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(10U);
    msg.value.assign("BWKFGOEDMGLWNPFRBJLMZFPRLSPTSELJULBIVELWYXBFKOCPVOKTVDZCDXRNJINGLBJAWOQAYSJSCZIELHHOUTFWAOCWTMYIB");

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
    msg.setTimeStamp(0.17954629995943916);
    msg.setSource(18141U);
    msg.setSourceEntity(128U);
    msg.setDestination(43210U);
    msg.setDestinationEntity(72U);
    msg.value.assign("FBKHUAQJTHZCOQNNCVZBAYJIFGXBWOFQKNAISGFKPNYTOXYSAFPBIHHBWUEDPPVLHJBPFQJXKRJESVLOMCQMYYEGADXQJMSGXVTCQBKOHPVXEKBDYCELULRTNZWSVVPACWDWTGVTDDHISDZVIUHFTSIWVJHUJNWYFGGRRNYFZLJMUUDAUTXCWLCDXKCGMLYRRZTKZWTGUEOIEPPLRNRONQSMSHI");

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
    msg.setTimeStamp(0.3364373208062734);
    msg.setSource(8128U);
    msg.setSourceEntity(245U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(109U);
    msg.value.assign("VHYPKJIIWWTYELFLZZXQAPCBIRMCZNHLMMUEGRGZBYMWYZTEHJHNSGUEMWFSIGEGTWGRAFKSGXHODLDKSDEDZJCKQXUQYVIONE");

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
    msg.setTimeStamp(0.48958660425423584);
    msg.setSource(14305U);
    msg.setSourceEntity(211U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(75U);
    const char tmp_msg_0[] = {-2, -72, -87, -112, -68, -81, -94, 93, 122, 7, -105, -69, -5, 44, -50, 101, -117, 110, 52, 63, -103, -7, 80, -53, -17, -63, 68, 84, 74, 25, 48, 47, -9, -83, -112, 112, -61, -64, 77, 119, 95, 51, 7, 39, -41, 5, 49, 59, 68, 87, -109, 82, -8, -111, 45, -38, -85, -100, -113, -1, -101, -12, 74, 85, 11, -67, 74, -77, 46, 45, -3, -9, 79, 75, 87, -72, -38, 55, -47, -31, 6, 98, 25, -114, 107, -99, -118, -80, 116, 124, 37, 99, -23, -4, -111, 5, -127, -73, -2, -60, -67, -116, -109, 16, 57, 54, 85, 51, -89, 51, -67, -66, 49, 96, -72, -118, 54, -103, -20, -50, -105, -44, 86, -103, -22, 110, -37, -64, 118, -2, -50, 38, -114, -15, 25, -128, -27, -42, -88, 11, -115, 23, 103, 53, -26, 57, 42, 55, -116, 102, -69, 97, -82, -87, 116, 104, 1, -63, 11, 40, -31, 121, -69, 24, 86, -121, 88, 8, -28, 56, -118, -50, -88, -115, 110, -45, -86, -24, 67, 14, -88, 93, -59, 105, -88, -116, -70, -99, 124, -85, 99, 61, 10, 118, -23, -72, -29, -6, -114, 68, -45, 49, -66, -119, -75, 63, -54, 19, -95, -100, 89, 7, -76, -79, 68, 45, -110, 42, 41, -41, -62, -5, -95};
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
    msg.setTimeStamp(0.10375477546240774);
    msg.setSource(32047U);
    msg.setSourceEntity(7U);
    msg.setDestination(24883U);
    msg.setDestinationEntity(3U);
    const char tmp_msg_0[] = {108, 114, 68, 84, 26, 105, 29, -82, 71, 51, -106, -89, -107, -35, 83, -108, 12, 78, 39, 77, 16, 124, -78, -112, 93, -53, -34, -88, -3, 96, 124, -55, -1, -82, -10, -91, -48, 86, 29, -122, 62, -111, 116, 99, 9, 122, 62, -63, -87, -106, -54, 50, -28, -20, 54, -1, -8, -7, 77, -7, -6, -23, 20, 47, -42, 126, 98, 37, 60, -58, -7, 120, -64, 91, -6, -108, -32, -74, 103, 52, 95, 29, -77, -65, 40, 14, 115, -67, -62, -41, -8, 4, -95, 99, 99, -28, 65, 14, 41, -1, -60, 22, 118, -6, -37, 126, 109, -28, 60, 7, 19, -40, -28, -59, -85, 79, 79, 111, 62, 77, -58, -47, 58, -97, -110, 106, -34, 103, -15, -45, 114, -58, -8, 54, 74, 15, -100, -53, 65, 47, -21, -8, -73, -70, 67, -127, 30, 100, 75, -101, -62, 74, -83, 100, -82, 75, -57, 98, -5, -2, 63, -4, 78, 109, 115, -47, -12, 9, -23, -86, 20, -122, 85, -9, 90, -21, -109, -10, -116, -73, -58, 28, 9, 45, 108};
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
    msg.setTimeStamp(0.8649311262168218);
    msg.setSource(36054U);
    msg.setSourceEntity(99U);
    msg.setDestination(57767U);
    msg.setDestinationEntity(179U);
    const char tmp_msg_0[] = {90, -28, 19, 124, -20, -102, 32, 91, -51, 24, -47, 110, -93, 13, -56, -123, 123, 83, 90, 83, 102, 32, 16};
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
    msg.setTimeStamp(0.6256289097078652);
    msg.setSource(5034U);
    msg.setSourceEntity(214U);
    msg.setDestination(34051U);
    msg.setDestinationEntity(102U);
    msg.frequency = 1881390551U;
    msg.min_range = 5569U;
    msg.max_range = 9035U;

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
    msg.setTimeStamp(0.7024564195006472);
    msg.setSource(18600U);
    msg.setSourceEntity(128U);
    msg.setDestination(64898U);
    msg.setDestinationEntity(4U);
    msg.frequency = 4274342105U;
    msg.min_range = 34287U;
    msg.max_range = 63936U;

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
    msg.setTimeStamp(0.7657627562224817);
    msg.setSource(31831U);
    msg.setSourceEntity(233U);
    msg.setDestination(27880U);
    msg.setDestinationEntity(251U);
    msg.frequency = 3262509023U;
    msg.min_range = 11295U;
    msg.max_range = 58456U;

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
    msg.setTimeStamp(0.7505780829680992);
    msg.setSource(59175U);
    msg.setSourceEntity(79U);
    msg.setDestination(49392U);
    msg.setDestinationEntity(47U);
    msg.type = 70U;
    msg.frequency = 264458509U;
    msg.min_range = 26337U;
    msg.max_range = 35784U;
    msg.bits_per_point = 50U;
    msg.scale_factor = 0.5809139508517749;
    const char tmp_msg_0[] = {-115, 106, -121, -61, -27, -69, -91, 80, -23, -128, 112, -66, -24, 90, -40, -102, -31, -34, 78, 83, 63, 10, 34, -66, 96, -47, 70, 81, -75, -26, 83, 85, -6, -98, -107, 8, -46, 75, 117, 2, -33, 48, -40, -53, -95, 9, -64, 3, 107, -77, 21};
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
    msg.setTimeStamp(0.9205427898268599);
    msg.setSource(64800U);
    msg.setSourceEntity(8U);
    msg.setDestination(17438U);
    msg.setDestinationEntity(10U);
    msg.type = 34U;
    msg.frequency = 2003116450U;
    msg.min_range = 5945U;
    msg.max_range = 11638U;
    msg.bits_per_point = 232U;
    msg.scale_factor = 0.87152285829326;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8309197235748662;
    tmp_msg_0.beam_height = 0.5084449232350912;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {106, -50, 122, 82, 124, 38, -34, -123, -85, 108, 60};
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
    msg.setTimeStamp(0.07416109413786187);
    msg.setSource(11423U);
    msg.setSourceEntity(59U);
    msg.setDestination(56247U);
    msg.setDestinationEntity(201U);
    msg.type = 78U;
    msg.frequency = 2122733954U;
    msg.min_range = 8675U;
    msg.max_range = 29628U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.4446883792522972;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6731469550358796;
    tmp_msg_0.beam_height = 0.15127064727887418;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {92, -87, 124, 35, 103, -95, -34, 19, -10, -11, -78, 13, -36, 12, 50, -9, 92, 73, 16, -55, 4, -39, 18, 1, 101, 93, 46, 36, 97, -39, -26, -107, 108, 13, -22, 4, -56, 125, -127, -111, -29, -57, -111, 32, -38, -37, -69, -21, 16, 39, -20, -101, -66, 97, 114, -102, 112, -112, -40, -83, 110, 20, -16, 24, 45, 2, 114, -102, 17, 119, 35, 63, 97, -41, -82, -34, 18, 25, 87, -66, -109, -79, 63, 110, -15, -15, -77, -17, 69, -83, -21, -43, 91, 120, -119, 61, 0, 75, 7, -1, -2, -98, -82, -103, -38, -91, -47, -2, -53, 62, 30, 120, 31, -57, -34, 48, -105, 7, -98, -7, 10, -62, -43, -7, -125, 0, 108, 50, 86, -10, -20, -95, 74, 34, -19, 76, 91, -73, -2, -2, -13, -97, 54, 74, -127, -20, -50, 8, 125, 118, 76, 88, 32, -11, 30, 55, -45, 122, -42, 119, 53, 31, 74, 67, -119, 122, 9, 91, 84, 43, 87, -119, 48, -78, -65, -55, -119, -60, 81, -3, -85, 124, 72, 43, 124, -111, 64, -102, 80, 12, 67, -5, 120, -98, -41, 4, 118, 55};
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
    msg.setTimeStamp(0.12061675876783717);
    msg.setSource(25450U);
    msg.setSourceEntity(185U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.6773944745345609);
    msg.setSource(58349U);
    msg.setSourceEntity(25U);
    msg.setDestination(5575U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.9169593184347317);
    msg.setSource(48701U);
    msg.setSourceEntity(115U);
    msg.setDestination(52111U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.19109455394127473);
    msg.setSource(13333U);
    msg.setSourceEntity(67U);
    msg.setDestination(15055U);
    msg.setDestinationEntity(149U);
    msg.op = 146U;

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
    msg.setTimeStamp(0.7454797591107739);
    msg.setSource(62320U);
    msg.setSourceEntity(9U);
    msg.setDestination(29804U);
    msg.setDestinationEntity(178U);
    msg.op = 90U;

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
    msg.setTimeStamp(0.21138392577420373);
    msg.setSource(62935U);
    msg.setSourceEntity(2U);
    msg.setDestination(18517U);
    msg.setDestinationEntity(227U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.9702626976048484);
    msg.setSource(1859U);
    msg.setSourceEntity(171U);
    msg.setDestination(33544U);
    msg.setDestinationEntity(41U);
    msg.value = 0.3382083714891918;
    msg.confidence = 0.7950250609202658;
    msg.opmodes.assign("FLQFRMGQWHDAYLPMYKZCHUMSBJQOBUFRLAVDLUHFNSVKOTTFEQNUPRWLSRSOJDRYMPVWYTGUR");

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
    msg.setTimeStamp(0.8751681781705182);
    msg.setSource(48502U);
    msg.setSourceEntity(105U);
    msg.setDestination(2435U);
    msg.setDestinationEntity(157U);
    msg.value = 0.8780865775367421;
    msg.confidence = 0.52196052373725;
    msg.opmodes.assign("XUWMXSRAMBVFRKQUJESGKZWTNZYLUPPPZYBNRKUWSHZLJTCBLVKFDBOZYGIPDJDINKIMYCTAAENXESMXOODFCEQBGXZIOKHV");

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
    msg.setTimeStamp(0.27825965783178763);
    msg.setSource(64982U);
    msg.setSourceEntity(128U);
    msg.setDestination(12373U);
    msg.setDestinationEntity(196U);
    msg.value = 0.9510274530255994;
    msg.confidence = 0.2947621227121352;
    msg.opmodes.assign("SVYHMTUMGWFOFDJDEYVRBJIQDZIVCXXPFCDRPRLIKYJBWQ");

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
    msg.setTimeStamp(0.954422317073252);
    msg.setSource(45032U);
    msg.setSourceEntity(240U);
    msg.setDestination(49843U);
    msg.setDestinationEntity(212U);
    msg.itow = 3065924572U;
    msg.lat = 0.8932534401279072;
    msg.lon = 0.39873609180488023;
    msg.height_ell = 0.6938469403842213;
    msg.height_sea = 0.4765286476953444;
    msg.hacc = 0.5490037197444334;
    msg.vacc = 0.34608320601463693;
    msg.vel_n = 0.018748770682781135;
    msg.vel_e = 0.0943343720004074;
    msg.vel_d = 0.08205887774408094;
    msg.speed = 0.05920744703699132;
    msg.gspeed = 0.8531490130510888;
    msg.heading = 0.6322400409091239;
    msg.sacc = 0.9818535397875227;
    msg.cacc = 0.9463802802953007;

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
    msg.setTimeStamp(0.7976979907504083);
    msg.setSource(2933U);
    msg.setSourceEntity(232U);
    msg.setDestination(31240U);
    msg.setDestinationEntity(87U);
    msg.itow = 1262224189U;
    msg.lat = 0.9438478723062667;
    msg.lon = 0.5067860568621881;
    msg.height_ell = 0.8595176825350513;
    msg.height_sea = 0.029987776593669357;
    msg.hacc = 0.1832823332333835;
    msg.vacc = 0.29731212673010254;
    msg.vel_n = 0.23507666001125094;
    msg.vel_e = 0.2802321035548927;
    msg.vel_d = 0.8759230779712175;
    msg.speed = 0.8103578078803412;
    msg.gspeed = 0.3343394296435426;
    msg.heading = 0.4883661866541035;
    msg.sacc = 0.45890896325222397;
    msg.cacc = 0.8971797020653086;

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
    msg.setTimeStamp(0.2072108411150666);
    msg.setSource(24232U);
    msg.setSourceEntity(253U);
    msg.setDestination(65097U);
    msg.setDestinationEntity(191U);
    msg.itow = 3480305139U;
    msg.lat = 0.9144737235774062;
    msg.lon = 0.7078910998628745;
    msg.height_ell = 0.1023163477936645;
    msg.height_sea = 0.574741945421812;
    msg.hacc = 0.11495664744716805;
    msg.vacc = 0.5989398102254463;
    msg.vel_n = 0.6704396878143281;
    msg.vel_e = 0.12020000424037713;
    msg.vel_d = 0.9670760509083728;
    msg.speed = 0.9803290118577574;
    msg.gspeed = 0.041423284179575526;
    msg.heading = 0.6975086023019176;
    msg.sacc = 0.11559144733319715;
    msg.cacc = 0.8943657153803062;

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
    msg.setTimeStamp(0.5424130647526331);
    msg.setSource(21103U);
    msg.setSourceEntity(123U);
    msg.setDestination(57805U);
    msg.setDestinationEntity(159U);
    msg.id = 91U;
    msg.value = 0.08649188505552619;

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
    msg.setTimeStamp(0.5018457698305663);
    msg.setSource(51874U);
    msg.setSourceEntity(177U);
    msg.setDestination(51534U);
    msg.setDestinationEntity(50U);
    msg.id = 100U;
    msg.value = 0.9709092929947047;

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
    msg.setTimeStamp(0.8232970990322918);
    msg.setSource(63134U);
    msg.setSourceEntity(3U);
    msg.setDestination(46037U);
    msg.setDestinationEntity(196U);
    msg.id = 235U;
    msg.value = 0.036246117570923886;

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
    msg.setTimeStamp(0.5244616504992754);
    msg.setSource(10016U);
    msg.setSourceEntity(167U);
    msg.setDestination(58324U);
    msg.setDestinationEntity(164U);
    msg.x = 0.7249457728930585;
    msg.y = 0.45188744263725633;
    msg.z = 0.2661009324469652;
    msg.phi = 0.8938059924564324;
    msg.theta = 0.8661800903768113;
    msg.psi = 0.5895805683786386;

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
    msg.setTimeStamp(0.8906079094019861);
    msg.setSource(54133U);
    msg.setSourceEntity(244U);
    msg.setDestination(34450U);
    msg.setDestinationEntity(203U);
    msg.x = 0.1372804970604562;
    msg.y = 0.8627878815574356;
    msg.z = 0.5265402715570653;
    msg.phi = 0.4427096964368815;
    msg.theta = 0.35054300891493473;
    msg.psi = 0.8386125610831887;

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
    msg.setTimeStamp(0.7405845851968993);
    msg.setSource(19042U);
    msg.setSourceEntity(228U);
    msg.setDestination(9961U);
    msg.setDestinationEntity(118U);
    msg.x = 0.053214296740583866;
    msg.y = 0.3809412597028111;
    msg.z = 0.6093642348328132;
    msg.phi = 0.21792180925262095;
    msg.theta = 0.04485764545459847;
    msg.psi = 0.7483276792770255;

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
    msg.setTimeStamp(0.17814735362687917);
    msg.setSource(61356U);
    msg.setSourceEntity(222U);
    msg.setDestination(63828U);
    msg.setDestinationEntity(179U);
    msg.beam_width = 0.33535265935798864;
    msg.beam_height = 0.9135447936938267;

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
    msg.setTimeStamp(0.9141359425053246);
    msg.setSource(36006U);
    msg.setSourceEntity(94U);
    msg.setDestination(49535U);
    msg.setDestinationEntity(32U);
    msg.beam_width = 0.15860541460625488;
    msg.beam_height = 0.5071196998664903;

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
    msg.setTimeStamp(0.6812551546165353);
    msg.setSource(62798U);
    msg.setSourceEntity(59U);
    msg.setDestination(62062U);
    msg.setDestinationEntity(41U);
    msg.beam_width = 0.2642713913771312;
    msg.beam_height = 0.6903560733403372;

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
    msg.setTimeStamp(0.16748549271754987);
    msg.setSource(10280U);
    msg.setSourceEntity(208U);
    msg.setDestination(18756U);
    msg.setDestinationEntity(60U);
    msg.sane = 106U;

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
    msg.setTimeStamp(0.2775428838033368);
    msg.setSource(42451U);
    msg.setSourceEntity(59U);
    msg.setDestination(5356U);
    msg.setDestinationEntity(217U);
    msg.sane = 132U;

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
    msg.setTimeStamp(0.6742363078571311);
    msg.setSource(9944U);
    msg.setSourceEntity(65U);
    msg.setDestination(26995U);
    msg.setDestinationEntity(244U);
    msg.sane = 185U;

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
    msg.setTimeStamp(0.19837212225743062);
    msg.setSource(54533U);
    msg.setSourceEntity(203U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(213U);
    msg.id = 142U;
    msg.zoom = 112U;
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
    msg.setTimeStamp(0.10859465517377465);
    msg.setSource(62552U);
    msg.setSourceEntity(24U);
    msg.setDestination(3513U);
    msg.setDestinationEntity(140U);
    msg.id = 9U;
    msg.zoom = 168U;
    msg.action = 123U;

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
    msg.setTimeStamp(0.6145362043976709);
    msg.setSource(34459U);
    msg.setSourceEntity(97U);
    msg.setDestination(45668U);
    msg.setDestinationEntity(126U);
    msg.id = 122U;
    msg.zoom = 206U;
    msg.action = 43U;

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
    msg.setTimeStamp(0.8210616041674443);
    msg.setSource(17975U);
    msg.setSourceEntity(62U);
    msg.setDestination(57661U);
    msg.setDestinationEntity(148U);
    msg.id = 140U;
    msg.value = 0.056068309508003455;

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
    msg.setTimeStamp(0.04389944843099869);
    msg.setSource(40752U);
    msg.setSourceEntity(140U);
    msg.setDestination(31263U);
    msg.setDestinationEntity(99U);
    msg.id = 128U;
    msg.value = 0.3888670036156664;

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
    msg.setTimeStamp(0.15778576668867306);
    msg.setSource(29132U);
    msg.setSourceEntity(83U);
    msg.setDestination(37966U);
    msg.setDestinationEntity(75U);
    msg.id = 2U;
    msg.value = 0.735728937379607;

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
    msg.setTimeStamp(0.4675173052979572);
    msg.setSource(47293U);
    msg.setSourceEntity(42U);
    msg.setDestination(50851U);
    msg.setDestinationEntity(146U);
    msg.id = 171U;
    msg.value = 0.8367379440173142;

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
    msg.setTimeStamp(0.16602906221820035);
    msg.setSource(24070U);
    msg.setSourceEntity(136U);
    msg.setDestination(53731U);
    msg.setDestinationEntity(85U);
    msg.id = 213U;
    msg.value = 0.18675476897015275;

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
    msg.setTimeStamp(0.7252804048499333);
    msg.setSource(48434U);
    msg.setSourceEntity(143U);
    msg.setDestination(63004U);
    msg.setDestinationEntity(188U);
    msg.id = 86U;
    msg.value = 0.07480848989988098;

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
    msg.setTimeStamp(0.9071509469500779);
    msg.setSource(59888U);
    msg.setSourceEntity(41U);
    msg.setDestination(61501U);
    msg.setDestinationEntity(37U);
    msg.id = 99U;
    msg.angle = 0.8572961559076709;

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
    msg.setTimeStamp(0.2242969850674551);
    msg.setSource(49163U);
    msg.setSourceEntity(67U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(202U);
    msg.id = 134U;
    msg.angle = 0.440422545741634;

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
    msg.setTimeStamp(0.009775747237600996);
    msg.setSource(44522U);
    msg.setSourceEntity(74U);
    msg.setDestination(432U);
    msg.setDestinationEntity(22U);
    msg.id = 106U;
    msg.angle = 0.3188446528929042;

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
    msg.setTimeStamp(0.017512177952542896);
    msg.setSource(13451U);
    msg.setSourceEntity(211U);
    msg.setDestination(62056U);
    msg.setDestinationEntity(98U);
    msg.op = 247U;
    msg.actions.assign("PWIVFPZLCIJTDIAJCKQYILXLBUKNRYUGVFKPUOVDOFOLRZQFLPUBQXIJVRMGGCHDYKTKCVKZCA");

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
    msg.setTimeStamp(0.8659905940385076);
    msg.setSource(46162U);
    msg.setSourceEntity(137U);
    msg.setDestination(10554U);
    msg.setDestinationEntity(78U);
    msg.op = 70U;
    msg.actions.assign("HOQBDHNPGNZLZIRQAVYAKEEWQWSIMKBQMEHUPNCLDEELUPEHGALRVROZCTUBOLT");

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
    msg.setTimeStamp(0.3096045382874437);
    msg.setSource(63421U);
    msg.setSourceEntity(73U);
    msg.setDestination(7550U);
    msg.setDestinationEntity(42U);
    msg.op = 158U;
    msg.actions.assign("DWRZSOZKXABENQHKJABPOMUEULDMSJQUHCAUCUTIRVZIHSCBXHPXJVGESFHKZVJVEBAAUVGEYDZUDKNCIGRPDMYNBLZYSGQTBXFXOGPWTHCUNOBRNJCTWVYVTKOQXQWAKUOZZVNRXDKWREGHKNXQULDMISLGFAGBOJAVIWDPOFTPDWDBLECTTJHLXYZIVSIWMBSFWPQRONGIMFYMQEQPLMPILYPSLMJYRSAMOJYK");

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
    msg.setTimeStamp(0.6549590812043954);
    msg.setSource(6858U);
    msg.setSourceEntity(178U);
    msg.setDestination(55576U);
    msg.setDestinationEntity(228U);
    msg.actions.assign("IEJYFLFRLPOYINPVOAWESYBVGKJHSQAIRZTTNTIAFCXDXDSNGPGJZXYQHJVOCXCRMUSDYNGXBLRBEQONCTAWUSHWVMMAMMFBMCBMYUHXEHLIBZIJOOPTPZQIWEFYDNVSRYJMXZQDKBEDUECZCAWASUIHNRWLJNVGUVFRUMFFXRGATKDPETCDDWXGZHQHEPLUUSYQURXWFVVGYQCWLKEJKQOKSIFZPTOZPBAHGZ");

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
    msg.setTimeStamp(0.1141066196640167);
    msg.setSource(32349U);
    msg.setSourceEntity(170U);
    msg.setDestination(29463U);
    msg.setDestinationEntity(177U);
    msg.actions.assign("ANLFELNWAAWSSIAXRIFBTLUXWCGMGOSFRXMDV");

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
    msg.setTimeStamp(0.6318592853942998);
    msg.setSource(24978U);
    msg.setSourceEntity(217U);
    msg.setDestination(15219U);
    msg.setDestinationEntity(84U);
    msg.actions.assign("JUKCDMEMJVCMSOVEQHTGEJVIGHDTJHWCRPXQJEFYXJONEKBNIKXNTWVCHJMAVZZWNCLLNUVAYGYGXBDMATPRA");

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
    msg.setTimeStamp(0.29855430698573626);
    msg.setSource(56298U);
    msg.setSourceEntity(229U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(60U);
    msg.button = 198U;
    msg.value = 2U;

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
    msg.setTimeStamp(0.5320680662351008);
    msg.setSource(58211U);
    msg.setSourceEntity(141U);
    msg.setDestination(58602U);
    msg.setDestinationEntity(125U);
    msg.button = 170U;
    msg.value = 204U;

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
    msg.setTimeStamp(0.8758439489259985);
    msg.setSource(30092U);
    msg.setSourceEntity(25U);
    msg.setDestination(22588U);
    msg.setDestinationEntity(198U);
    msg.button = 210U;
    msg.value = 181U;

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
    msg.setTimeStamp(0.2666547902810781);
    msg.setSource(42074U);
    msg.setSourceEntity(77U);
    msg.setDestination(1987U);
    msg.setDestinationEntity(35U);
    msg.op = 11U;
    msg.text.assign("GGNCMOQPUSYFGEMOORWSQODJLPRIGGDBYRKNALCXSVQUIXIOIQYYKYQTHNXAVVWKGOQSPTLNJEPNMBVYCAFSLRBHZMJBMPKZUIHLSAWKVZWPXUBCTJFLHREPJNQHFZLULVDAQFTJVHZAEZDHEMWPUFRXCOHESDALXBLVYNFNMC");

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
    msg.setTimeStamp(0.3333371441572509);
    msg.setSource(17924U);
    msg.setSourceEntity(66U);
    msg.setDestination(26933U);
    msg.setDestinationEntity(38U);
    msg.op = 154U;
    msg.text.assign("RAIQGBSFUMWTCGCFIRYNGYQYLPGHOOANYTYZBNZWNHMLLEIHKCLMVUEIZUVPAEZTJHCDMRIDMEXPKRSWRFNIZDGPQVSSLOVKGJXMWJBLBFZDKXPIDWVTFNQHODZFPYHUKNEFENCOUTZQCBACJXLCLNKRQOYFRBOLDNZEAWKVSMUYZSIUKTHDTDABPXQJMLSWPIJAAABVRYITRWSKTDOCOQJJCVQSRGBPMFVHQJXGESTUGH");

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
    msg.setTimeStamp(0.47894748650064967);
    msg.setSource(61177U);
    msg.setSourceEntity(70U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(123U);
    msg.op = 36U;
    msg.text.assign("JREAVONWGPDSXLJPNNGTMXCRLXWLWCGRXADMUQHVZAEOWLGZJUPUFDBNNQKSURXOIQBQIVGTSECRCKNIZCTTOUJFMPTQVIEFEVFBYPRGLZEZYIBGSPZVLEBTHPMLAXNQBVKGDATUJLKZHNORNHOCUPIAZMDRBYYASSWFBDWYZYAQJOUNFRXUIVBHAKKSYSOFHMIPITVJYDOWFFWXCTTXQEMMJKIEPVHDDKKYJXHAZSREWQHJFQYOMKHMCCL");

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
    msg.setTimeStamp(0.8893082806013545);
    msg.setSource(21885U);
    msg.setSourceEntity(61U);
    msg.setDestination(11136U);
    msg.setDestinationEntity(128U);
    msg.op = 76U;
    msg.time_remain = 0.5571142912639265;
    msg.sched_time = 0.17178677653629748;

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
    msg.setTimeStamp(0.05042412617067493);
    msg.setSource(10718U);
    msg.setSourceEntity(23U);
    msg.setDestination(3140U);
    msg.setDestinationEntity(90U);
    msg.op = 178U;
    msg.time_remain = 0.7686424912179318;
    msg.sched_time = 0.16241211341492434;

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
    msg.setTimeStamp(0.7080277031934025);
    msg.setSource(13762U);
    msg.setSourceEntity(148U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(179U);
    msg.op = 23U;
    msg.time_remain = 0.3600764159192945;
    msg.sched_time = 0.7034197983494375;

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
    msg.setTimeStamp(0.5748359539132781);
    msg.setSource(25408U);
    msg.setSourceEntity(83U);
    msg.setDestination(7063U);
    msg.setDestinationEntity(8U);
    msg.name.assign("RPANDASMXEJYQLKDMQTSOLEYVKRNNEKXHLQJGCPUESWXMWJBLCJ");
    msg.op = 215U;
    msg.sched_time = 0.5089831787722551;

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
    msg.setTimeStamp(0.7093244270891212);
    msg.setSource(35173U);
    msg.setSourceEntity(29U);
    msg.setDestination(44454U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MPVEYJZAYNVAPLCPJCOSPQDTKYXMEIEOTWNUNWLOQGQICXSPLKQNBHHFNCHIGLFJVDVMUQHJRIMFPRDDZWZDLKTYHMIQJNIWDVLGALUSCGISVKCGAFBWLAKGTWEPBKKSAJUGUREPOHXEBTFOBTHBOOSVJMCKJWWBQYXUNZPGBTESVTNIDZOFXACQEONISLTQRHLXYRAADKMRFSBBS");
    msg.op = 246U;
    msg.sched_time = 0.3673572499997647;

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
    msg.setTimeStamp(0.2505517064350058);
    msg.setSource(13145U);
    msg.setSourceEntity(209U);
    msg.setDestination(19691U);
    msg.setDestinationEntity(182U);
    msg.name.assign("MAVFSUFWLGLLA");
    msg.op = 221U;
    msg.sched_time = 0.2238780862106472;

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
    msg.setTimeStamp(0.6258597340547448);
    msg.setSource(55906U);
    msg.setSourceEntity(253U);
    msg.setDestination(44196U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.8334812753723468);
    msg.setSource(6020U);
    msg.setSourceEntity(213U);
    msg.setDestination(43931U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.6479881188172644);
    msg.setSource(61279U);
    msg.setSourceEntity(218U);
    msg.setDestination(58449U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.08013269523524735);
    msg.setSource(24580U);
    msg.setSourceEntity(166U);
    msg.setDestination(5746U);
    msg.setDestinationEntity(29U);
    msg.name.assign("XPITEVYMHPTTNKDXXFSNJYYSIUBJBKGMPQQYGAQGIIJLRGULKUFXLILJAPGRYRUOEVV");
    msg.state = 75U;

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
    msg.setTimeStamp(0.6874121908607379);
    msg.setSource(43681U);
    msg.setSourceEntity(79U);
    msg.setDestination(11133U);
    msg.setDestinationEntity(178U);
    msg.name.assign("MRLPKXVTJKWEKNZUEESWSNVYMKD");
    msg.state = 32U;

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
    msg.setTimeStamp(0.27656317495317206);
    msg.setSource(60592U);
    msg.setSourceEntity(173U);
    msg.setDestination(11550U);
    msg.setDestinationEntity(226U);
    msg.name.assign("VHUEQFEHZEMCKDJHXEILIENDIALUOKXQKWFTTSZLLMOZCXSHKNDZQBDSGDLTMSALKYRCYOMPUWEYMVXHEVPYGXLKOXCOAXWBOACMRPBBTBQOMFIJAZNNWEYGNSTOQCNISJBDOZPIPSLEUKUGHIWUQFJYHMGPRRBRUHRSZQVFNANXQ");
    msg.state = 218U;

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
    msg.setTimeStamp(0.44573836307404735);
    msg.setSource(46711U);
    msg.setSourceEntity(168U);
    msg.setDestination(9750U);
    msg.setDestinationEntity(176U);
    msg.name.assign("DHEZNPPXRJBCHRYVMWEFKFGTTYUCTBIDYGWSJMFJRCZKE");
    msg.value = 83U;

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
    msg.setTimeStamp(0.3984995474935643);
    msg.setSource(4147U);
    msg.setSourceEntity(206U);
    msg.setDestination(63175U);
    msg.setDestinationEntity(100U);
    msg.name.assign("GVUCVSCLNPDXTOWZRRBCGSQPJIAAGTTWJZERDHKQQDWDDXYRNPRGNZMRXHMOSMLESBXKWNBIXLDTPNQQISOWKOLWLXOLTPFQNCKLNXDQFAUAKZFXPKSYBYIVUEHWAVDVVTRVUBOYHLEZWEVUCOSSLTYUUAMIUNCYCIXBHHZFPAFJOHCICAIFEYTFOJEEMFMRKJAKTMRQMFXGPNPFVZJJPSEGZQMZHWHSYWLDHDJ");
    msg.value = 13U;

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
    msg.setTimeStamp(0.5513713406073425);
    msg.setSource(5810U);
    msg.setSourceEntity(141U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(56U);
    msg.name.assign("GMLCMYQHPKKFEIECNRWCPLMLXHAZGNTOJDMPWJWBYXQMDIQRBKUYBIGVNLVKEGGZSYACEAESCDQUIRCQOJFMTEQBLASGWJXMJUUOPTMTXUWGGPEVKYBKORYQJSUQRJAYHLABTFRWYYNNDDJLSTQFAHSFOZOXWNMQPNRYSZPXHHIDPCZIXZOTVOXCBUNWTEWKLDUIPZUZFISVEEOKZFVSX");
    msg.value = 142U;

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
    msg.setTimeStamp(0.8671436955514477);
    msg.setSource(35524U);
    msg.setSourceEntity(168U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(23U);
    msg.name.assign("IRVMMLQXWBCUCEZKFMRMNXVFUGMECPVTBUVCQHEKQRKPOOIKWWMCUFPHRZOYEFLPZPHCJGKNORUMRSSEIN");

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
    msg.setTimeStamp(0.45714623135211896);
    msg.setSource(59900U);
    msg.setSourceEntity(106U);
    msg.setDestination(23782U);
    msg.setDestinationEntity(232U);
    msg.name.assign("BQEAQHXNQFQFZGRKHK");

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
    msg.setTimeStamp(0.8626698388506381);
    msg.setSource(23850U);
    msg.setSourceEntity(222U);
    msg.setDestination(51736U);
    msg.setDestinationEntity(236U);
    msg.name.assign("QGIUQTDTLKYXSIYTERGXDVAEYIXUBDXLMLJUZJWDNLSWRCFTBIWYPCQHODDJLUTSJNUMUPWLNBWICPEJCFYCIRESEGKPYFHYPQRMQKCBBJHOVZEOXNAFAWBRCKGMNISTJRXPSXZWXAMQTMTYZRIGLKMFPUGWHSVDBVUOEKFNOEJHVKL");

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
    msg.setTimeStamp(0.7830852580240661);
    msg.setSource(40798U);
    msg.setSourceEntity(22U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(39U);
    msg.name.assign("TAGMXSJOGYBDNPCWUQEIRLTOZMLYNTYTQCQDHLHANWDYFCAAASQZCUQRPEBBHMUBEPJJQDLKVXBOIEFWPZJCBSMUIUHFVKFSOMVKUOKMLXRMLTGWPLNJLXVTLCPXJHIUVYXCFPZOGFNSKXLDGXQSGMSSBZEUBVVMIIRYFOUIEOWEAAMPHCZAGTCHEJGPDSNKQZRJGWDPRYWFTDYSEKZIHBHYQZQOTVDDKWNNJXAVWROJWIEVHTRUGZNBRKCYRK");
    msg.value = 149U;

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
    msg.setTimeStamp(0.9425571814872538);
    msg.setSource(20877U);
    msg.setSourceEntity(14U);
    msg.setDestination(37572U);
    msg.setDestinationEntity(54U);
    msg.name.assign("WYKVHAENRIUUGFYGLZUTYFUPPDYUVXFELHTCDO");
    msg.value = 208U;

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
    msg.setTimeStamp(0.23255012437144496);
    msg.setSource(28644U);
    msg.setSourceEntity(184U);
    msg.setDestination(58206U);
    msg.setDestinationEntity(240U);
    msg.name.assign("DKYRINVSAEFBBCDEGD");
    msg.value = 185U;

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
    msg.setTimeStamp(0.7497085230279473);
    msg.setSource(55749U);
    msg.setSourceEntity(189U);
    msg.setDestination(27992U);
    msg.setDestinationEntity(125U);
    msg.id = 162U;
    msg.period = 1917599154U;
    msg.duty_cycle = 439394230U;

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
    msg.setTimeStamp(0.4174166618498514);
    msg.setSource(36134U);
    msg.setSourceEntity(33U);
    msg.setDestination(14580U);
    msg.setDestinationEntity(171U);
    msg.id = 188U;
    msg.period = 584241958U;
    msg.duty_cycle = 3804516494U;

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
    msg.setTimeStamp(0.05025828774331098);
    msg.setSource(14619U);
    msg.setSourceEntity(220U);
    msg.setDestination(41579U);
    msg.setDestinationEntity(172U);
    msg.id = 198U;
    msg.period = 102804246U;
    msg.duty_cycle = 1368306491U;

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
    msg.setTimeStamp(0.9905861377273769);
    msg.setSource(7878U);
    msg.setSourceEntity(193U);
    msg.setDestination(52179U);
    msg.setDestinationEntity(216U);
    msg.id = 155U;
    msg.period = 2646938211U;
    msg.duty_cycle = 3297863435U;

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
    msg.setTimeStamp(0.2918188123215487);
    msg.setSource(19253U);
    msg.setSourceEntity(97U);
    msg.setDestination(20938U);
    msg.setDestinationEntity(149U);
    msg.id = 234U;
    msg.period = 3798475741U;
    msg.duty_cycle = 2910342252U;

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
    msg.setTimeStamp(0.8608747027356235);
    msg.setSource(9063U);
    msg.setSourceEntity(134U);
    msg.setDestination(36763U);
    msg.setDestinationEntity(162U);
    msg.id = 99U;
    msg.period = 1533935360U;
    msg.duty_cycle = 3153127995U;

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
    msg.setTimeStamp(0.51960219973979);
    msg.setSource(64106U);
    msg.setSourceEntity(246U);
    msg.setDestination(51751U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.3984723454940735;
    msg.lon = 0.47442617383116337;
    msg.height = 0.6983538507166689;
    msg.x = 0.07378088857231335;
    msg.y = 0.34043775661640274;
    msg.z = 0.773108907748476;
    msg.phi = 0.03489002987486567;
    msg.theta = 0.07720397500822729;
    msg.psi = 0.4025333526368926;
    msg.u = 0.017322583892006027;
    msg.v = 0.024371949987893382;
    msg.w = 0.23742386138598737;
    msg.vx = 0.9759922636986486;
    msg.vy = 0.4122010887058618;
    msg.vz = 0.9917186776490948;
    msg.p = 0.28216822306055245;
    msg.q = 0.31323540200379396;
    msg.r = 0.27067811012416;
    msg.depth = 0.8245724236870738;
    msg.alt = 0.9093342667565013;

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
    msg.setTimeStamp(0.8947926425591608);
    msg.setSource(6567U);
    msg.setSourceEntity(133U);
    msg.setDestination(20349U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.5149889478409383;
    msg.lon = 0.5363275597602627;
    msg.height = 0.7965330255666994;
    msg.x = 0.7280369758361838;
    msg.y = 0.9231647800627002;
    msg.z = 0.07526648632188804;
    msg.phi = 0.04820942749770463;
    msg.theta = 0.3508062957643011;
    msg.psi = 0.5569533802386631;
    msg.u = 0.969465980866363;
    msg.v = 0.7476053735332676;
    msg.w = 0.12645684145336944;
    msg.vx = 0.08333428212349703;
    msg.vy = 0.44294528775078057;
    msg.vz = 0.9539340146557698;
    msg.p = 0.2474679771350612;
    msg.q = 0.4611405672642317;
    msg.r = 0.6292851162795778;
    msg.depth = 0.1686662088985602;
    msg.alt = 0.2549536513354381;

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
    msg.setTimeStamp(0.48604737722308833);
    msg.setSource(42897U);
    msg.setSourceEntity(211U);
    msg.setDestination(28223U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.15894295507831357;
    msg.lon = 0.23529747260221368;
    msg.height = 0.12486236285007546;
    msg.x = 0.7871166940237196;
    msg.y = 0.5826339787553519;
    msg.z = 0.09423295933883169;
    msg.phi = 0.28499439970530327;
    msg.theta = 0.05534441065801998;
    msg.psi = 0.31058247490709656;
    msg.u = 0.226045579924132;
    msg.v = 0.4483097515934211;
    msg.w = 0.5748490594633728;
    msg.vx = 0.5617273590886586;
    msg.vy = 0.38285755152657686;
    msg.vz = 0.5666667529211745;
    msg.p = 0.20415489519906715;
    msg.q = 0.5012434169794733;
    msg.r = 0.9836736105637534;
    msg.depth = 0.5266042665710481;
    msg.alt = 0.9161818235065989;

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
    msg.setTimeStamp(0.3111825607396793);
    msg.setSource(5102U);
    msg.setSourceEntity(51U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(217U);
    msg.x = 0.544876080676967;
    msg.y = 0.2818490882685001;
    msg.z = 0.5716878040539543;

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
    msg.setTimeStamp(0.3106070469224238);
    msg.setSource(6642U);
    msg.setSourceEntity(54U);
    msg.setDestination(59327U);
    msg.setDestinationEntity(68U);
    msg.x = 0.2581672177271612;
    msg.y = 0.9106589082377405;
    msg.z = 0.8524464581132674;

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
    msg.setTimeStamp(0.5965870634702249);
    msg.setSource(35619U);
    msg.setSourceEntity(74U);
    msg.setDestination(28743U);
    msg.setDestinationEntity(177U);
    msg.x = 0.12074763199445082;
    msg.y = 0.08208492310360094;
    msg.z = 0.03912758233499947;

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
    msg.setTimeStamp(0.9742141687414915);
    msg.setSource(30285U);
    msg.setSourceEntity(172U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(172U);
    msg.value = 0.38153167259697307;

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
    msg.setTimeStamp(0.030905063980828373);
    msg.setSource(27977U);
    msg.setSourceEntity(247U);
    msg.setDestination(20735U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5444580903051819;

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
    msg.setTimeStamp(0.7550264459918973);
    msg.setSource(56191U);
    msg.setSourceEntity(92U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6602288835694664;

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
    msg.setTimeStamp(0.37188036955481485);
    msg.setSource(19314U);
    msg.setSourceEntity(205U);
    msg.setDestination(11565U);
    msg.setDestinationEntity(251U);
    msg.value = 0.19592266850921847;

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
    msg.setTimeStamp(0.2941969720553561);
    msg.setSource(26315U);
    msg.setSourceEntity(187U);
    msg.setDestination(24776U);
    msg.setDestinationEntity(227U);
    msg.value = 0.3392711958352562;

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
    msg.setTimeStamp(0.8906859212753653);
    msg.setSource(7966U);
    msg.setSourceEntity(76U);
    msg.setDestination(8810U);
    msg.setDestinationEntity(159U);
    msg.value = 0.3018841788077329;

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
    msg.setTimeStamp(0.39427546884118003);
    msg.setSource(14748U);
    msg.setSourceEntity(37U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(159U);
    msg.x = 0.275590120431328;
    msg.y = 0.07352329493483867;
    msg.z = 0.7431317116139708;
    msg.phi = 0.9555756535204483;
    msg.theta = 0.05475065361131182;
    msg.psi = 0.04367056280828474;
    msg.p = 0.257733023436154;
    msg.q = 0.4033306817687591;
    msg.r = 0.42145964569210237;
    msg.u = 0.567682448151425;
    msg.v = 0.41579756888854613;
    msg.w = 0.25224510497942154;
    msg.bias_psi = 0.5868777092079922;
    msg.bias_r = 0.5321835920492076;

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
    msg.setTimeStamp(0.25328948105420945);
    msg.setSource(38559U);
    msg.setSourceEntity(44U);
    msg.setDestination(2248U);
    msg.setDestinationEntity(69U);
    msg.x = 0.18617640465952523;
    msg.y = 0.7981781272720828;
    msg.z = 0.866104845264534;
    msg.phi = 0.19678007931993413;
    msg.theta = 0.7349737729862142;
    msg.psi = 0.536058108121504;
    msg.p = 0.8048603760425168;
    msg.q = 0.9303160770039838;
    msg.r = 0.4222641456870999;
    msg.u = 0.6840386467537237;
    msg.v = 0.9884810403967136;
    msg.w = 0.7316527195580459;
    msg.bias_psi = 0.8217148985971777;
    msg.bias_r = 0.7620706196575115;

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
    msg.setTimeStamp(0.8414552255874379);
    msg.setSource(32195U);
    msg.setSourceEntity(83U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(134U);
    msg.x = 0.9324650787675461;
    msg.y = 0.7972765415211578;
    msg.z = 0.2906099781093523;
    msg.phi = 0.972175882609781;
    msg.theta = 0.5467631080709359;
    msg.psi = 0.2997148802669497;
    msg.p = 0.5994543057522472;
    msg.q = 0.21643029658111934;
    msg.r = 0.4394506431414439;
    msg.u = 0.33220686707963676;
    msg.v = 0.28984012735185827;
    msg.w = 0.8855518618931603;
    msg.bias_psi = 0.2990285631550611;
    msg.bias_r = 0.5782843991390642;

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
    msg.setTimeStamp(0.07352971826795096);
    msg.setSource(17455U);
    msg.setSourceEntity(80U);
    msg.setDestination(35075U);
    msg.setDestinationEntity(139U);
    msg.bias_psi = 0.27553553305163503;
    msg.bias_r = 0.6729021358435459;
    msg.cog = 0.7611154506261337;
    msg.cyaw = 0.11723338709576103;
    msg.lbl_rej_level = 0.04367878915633838;
    msg.gps_rej_level = 0.19419123389706472;
    msg.custom_x = 0.6395044210390579;
    msg.custom_y = 0.08849854053455863;
    msg.custom_z = 0.8300063251265068;

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
    msg.setTimeStamp(0.5721317471240636);
    msg.setSource(55270U);
    msg.setSourceEntity(107U);
    msg.setDestination(55869U);
    msg.setDestinationEntity(99U);
    msg.bias_psi = 0.5692511292343858;
    msg.bias_r = 0.9765607619208687;
    msg.cog = 0.572013186423446;
    msg.cyaw = 0.5593381351703398;
    msg.lbl_rej_level = 0.28794108118040074;
    msg.gps_rej_level = 0.031591154239799524;
    msg.custom_x = 0.580698123906544;
    msg.custom_y = 0.35455268558291164;
    msg.custom_z = 0.8237700214273664;

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
    msg.setTimeStamp(0.9465256690454926);
    msg.setSource(13453U);
    msg.setSourceEntity(214U);
    msg.setDestination(57419U);
    msg.setDestinationEntity(196U);
    msg.bias_psi = 0.4283983359222894;
    msg.bias_r = 0.11671747959250545;
    msg.cog = 0.6519642977629778;
    msg.cyaw = 0.10405109363301945;
    msg.lbl_rej_level = 0.01100848647088637;
    msg.gps_rej_level = 0.7565537412081118;
    msg.custom_x = 0.15233845150526992;
    msg.custom_y = 0.5936594372771654;
    msg.custom_z = 0.3470327462705639;

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
    msg.setTimeStamp(0.3804578417820025);
    msg.setSource(24122U);
    msg.setSourceEntity(175U);
    msg.setDestination(24821U);
    msg.setDestinationEntity(98U);
    msg.utc_time = 0.454949214117926;
    msg.reason = 141U;

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
    msg.setTimeStamp(0.0366614549215899);
    msg.setSource(65074U);
    msg.setSourceEntity(218U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(173U);
    msg.utc_time = 0.7869084264475839;
    msg.reason = 142U;

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
    msg.setTimeStamp(0.5133522080290881);
    msg.setSource(1644U);
    msg.setSourceEntity(3U);
    msg.setDestination(7398U);
    msg.setDestinationEntity(180U);
    msg.utc_time = 0.18012169414301238;
    msg.reason = 249U;

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
    msg.setTimeStamp(0.8915591187863305);
    msg.setSource(43811U);
    msg.setSourceEntity(145U);
    msg.setDestination(42153U);
    msg.setDestinationEntity(254U);
    msg.id = 141U;
    msg.range = 0.834579057783929;
    msg.acceptance = 77U;

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
    msg.setTimeStamp(0.9550764287561953);
    msg.setSource(517U);
    msg.setSourceEntity(207U);
    msg.setDestination(51553U);
    msg.setDestinationEntity(10U);
    msg.id = 194U;
    msg.range = 0.7214212726856974;
    msg.acceptance = 138U;

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
    msg.setTimeStamp(0.8881628227457661);
    msg.setSource(63745U);
    msg.setSourceEntity(90U);
    msg.setDestination(1145U);
    msg.setDestinationEntity(229U);
    msg.id = 100U;
    msg.range = 0.9759958319270906;
    msg.acceptance = 60U;

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
    msg.setTimeStamp(0.772123658843575);
    msg.setSource(2726U);
    msg.setSourceEntity(79U);
    msg.setDestination(22581U);
    msg.setDestinationEntity(219U);
    msg.type = 128U;
    msg.reason = 101U;
    msg.value = 0.4401541496935302;
    msg.timestep = 0.5335094552909891;

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
    msg.setTimeStamp(0.845358806852003);
    msg.setSource(28680U);
    msg.setSourceEntity(84U);
    msg.setDestination(33959U);
    msg.setDestinationEntity(51U);
    msg.type = 190U;
    msg.reason = 229U;
    msg.value = 0.7223421715351138;
    msg.timestep = 0.011309612027153304;

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
    msg.setTimeStamp(0.5490789149327227);
    msg.setSource(25938U);
    msg.setSourceEntity(61U);
    msg.setDestination(31853U);
    msg.setDestinationEntity(82U);
    msg.type = 249U;
    msg.reason = 151U;
    msg.value = 0.20518267528606837;
    msg.timestep = 0.12464841221144496;

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
    msg.setTimeStamp(0.008089996664227606);
    msg.setSource(12165U);
    msg.setSourceEntity(171U);
    msg.setDestination(14499U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.9609771891524076);
    msg.setSource(18013U);
    msg.setSourceEntity(1U);
    msg.setDestination(40280U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.709750960596021);
    msg.setSource(36160U);
    msg.setSourceEntity(13U);
    msg.setDestination(6207U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.3264881122219627);
    msg.setSource(6907U);
    msg.setSourceEntity(21U);
    msg.setDestination(43870U);
    msg.setDestinationEntity(192U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KXJTGSQSZZAYPHMVSGESHDTUQEYWCWXXTROMTBFZGAKIM");
    tmp_msg_0.lat = 0.2907805561367208;
    tmp_msg_0.lon = 0.4139329217447655;
    tmp_msg_0.depth = 0.2982120105940286;
    tmp_msg_0.query_channel = 142U;
    tmp_msg_0.reply_channel = 214U;
    tmp_msg_0.transponder_delay = 166U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.25738507453694603;
    msg.y = 0.7132572746986418;
    msg.var_x = 0.75575007750387;
    msg.var_y = 0.7739636881282993;
    msg.distance = 0.3107853550999261;

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
    msg.setTimeStamp(0.6977133889468505);
    msg.setSource(60148U);
    msg.setSourceEntity(169U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(15U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MGPJAZMZGOKLZGDWRBTKDAMDCKBULKI");
    tmp_msg_0.lat = 0.5418270522224176;
    tmp_msg_0.lon = 0.8400125735077726;
    tmp_msg_0.depth = 0.636383871868549;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 123U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4348726126520065;
    msg.y = 0.6836517863585427;
    msg.var_x = 0.7217854749987419;
    msg.var_y = 0.7205015367771402;
    msg.distance = 0.4384461815995585;

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
    msg.setTimeStamp(0.2272520077398973);
    msg.setSource(62728U);
    msg.setSourceEntity(129U);
    msg.setDestination(19150U);
    msg.setDestinationEntity(85U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DHNHLYSUAWSUZATCCUEBKZNRICSWLMUZMXYAFEQBLFJJFSPHZVWGAUIXPCZKIGGTFNNAVIKWWDTABYOKEZEHUJBPHJVVJXMJLFCNDTQMOUEIIEGDCNPGHDYELV");
    tmp_msg_0.lat = 0.5102012813359244;
    tmp_msg_0.lon = 0.1040807561959266;
    tmp_msg_0.depth = 0.5011829607787585;
    tmp_msg_0.query_channel = 115U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 254U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7485582847430616;
    msg.y = 0.330584131210924;
    msg.var_x = 0.5077587744168083;
    msg.var_y = 0.9672029564582275;
    msg.distance = 0.8122444845741204;

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
    msg.setTimeStamp(0.8531675111637113);
    msg.setSource(21877U);
    msg.setSourceEntity(133U);
    msg.setDestination(65201U);
    msg.setDestinationEntity(209U);
    msg.state = 157U;

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
    msg.setTimeStamp(0.7088794661656119);
    msg.setSource(60178U);
    msg.setSourceEntity(113U);
    msg.setDestination(11040U);
    msg.setDestinationEntity(96U);
    msg.state = 144U;

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
    msg.setTimeStamp(0.7489288591248002);
    msg.setSource(11566U);
    msg.setSourceEntity(62U);
    msg.setDestination(35446U);
    msg.setDestinationEntity(211U);
    msg.state = 145U;

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
    msg.setTimeStamp(0.33841764716394385);
    msg.setSource(63243U);
    msg.setSourceEntity(8U);
    msg.setDestination(50965U);
    msg.setDestinationEntity(195U);
    msg.x = 0.9059612113624737;
    msg.y = 0.7487445771298828;
    msg.z = 0.05598715564661916;

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
    msg.setTimeStamp(0.8247291824413403);
    msg.setSource(4791U);
    msg.setSourceEntity(141U);
    msg.setDestination(31520U);
    msg.setDestinationEntity(69U);
    msg.x = 0.28560767616042937;
    msg.y = 0.2661286763917976;
    msg.z = 0.7822867951724357;

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
    msg.setTimeStamp(0.8273563764720674);
    msg.setSource(21748U);
    msg.setSourceEntity(123U);
    msg.setDestination(62621U);
    msg.setDestinationEntity(24U);
    msg.x = 0.803003251484648;
    msg.y = 0.7591292758258897;
    msg.z = 0.900824408414659;

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
    msg.setTimeStamp(0.9694085677170627);
    msg.setSource(59318U);
    msg.setSourceEntity(40U);
    msg.setDestination(62452U);
    msg.setDestinationEntity(246U);
    msg.value = 0.7386707972257591;

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
    msg.setTimeStamp(0.3153149052188765);
    msg.setSource(60684U);
    msg.setSourceEntity(241U);
    msg.setDestination(33893U);
    msg.setDestinationEntity(179U);
    msg.value = 0.49794759250159637;

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
    msg.setTimeStamp(0.7988653435824864);
    msg.setSource(20484U);
    msg.setSourceEntity(24U);
    msg.setDestination(12749U);
    msg.setDestinationEntity(143U);
    msg.value = 0.07823187162498835;

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
    msg.setTimeStamp(0.19247027878646705);
    msg.setSource(52932U);
    msg.setSourceEntity(31U);
    msg.setDestination(42383U);
    msg.setDestinationEntity(192U);
    msg.value = 0.41016135137394405;
    msg.z_units = 64U;

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
    msg.setTimeStamp(0.713521491877781);
    msg.setSource(33208U);
    msg.setSourceEntity(243U);
    msg.setDestination(36443U);
    msg.setDestinationEntity(107U);
    msg.value = 0.9062249464959554;
    msg.z_units = 215U;

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
    msg.setTimeStamp(0.44861974728502285);
    msg.setSource(49404U);
    msg.setSourceEntity(91U);
    msg.setDestination(3283U);
    msg.setDestinationEntity(184U);
    msg.value = 0.3946183622405718;
    msg.z_units = 101U;

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
    msg.setTimeStamp(0.5850091317646852);
    msg.setSource(24868U);
    msg.setSourceEntity(71U);
    msg.setDestination(49633U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6066343544921909;
    msg.speed_units = 145U;

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
    msg.setTimeStamp(0.3405062629807273);
    msg.setSource(34409U);
    msg.setSourceEntity(172U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(179U);
    msg.value = 0.5255607687549896;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.8660246978734814);
    msg.setSource(8655U);
    msg.setSourceEntity(84U);
    msg.setDestination(63429U);
    msg.setDestinationEntity(220U);
    msg.value = 0.8672593587711551;
    msg.speed_units = 237U;

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
    msg.setTimeStamp(0.8596787270500434);
    msg.setSource(35703U);
    msg.setSourceEntity(153U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(72U);
    msg.value = 0.619528779875549;

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
    msg.setTimeStamp(0.5517831506099701);
    msg.setSource(29443U);
    msg.setSourceEntity(169U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(83U);
    msg.value = 0.9355997551490387;

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
    msg.setTimeStamp(0.9651946373699113);
    msg.setSource(32481U);
    msg.setSourceEntity(199U);
    msg.setDestination(27713U);
    msg.setDestinationEntity(253U);
    msg.value = 0.25862717214543374;

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
    msg.setTimeStamp(0.8795253517338384);
    msg.setSource(19171U);
    msg.setSourceEntity(56U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(188U);
    msg.value = 0.8983773089316105;

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
    msg.setTimeStamp(0.3340572848334623);
    msg.setSource(28204U);
    msg.setSourceEntity(15U);
    msg.setDestination(29781U);
    msg.setDestinationEntity(220U);
    msg.value = 0.6191566677973207;

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
    msg.setTimeStamp(0.0468412209455914);
    msg.setSource(23926U);
    msg.setSourceEntity(7U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(185U);
    msg.value = 0.049958624948800656;

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
    msg.setTimeStamp(0.8402527363741222);
    msg.setSource(11422U);
    msg.setSourceEntity(156U);
    msg.setDestination(12586U);
    msg.setDestinationEntity(62U);
    msg.value = 0.9554097945756418;

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
    msg.setTimeStamp(0.5029306873255084);
    msg.setSource(38324U);
    msg.setSourceEntity(34U);
    msg.setDestination(43303U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5266508474971388;

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
    msg.setTimeStamp(0.9856924881479616);
    msg.setSource(38037U);
    msg.setSourceEntity(118U);
    msg.setDestination(57661U);
    msg.setDestinationEntity(39U);
    msg.value = 0.1892082477424707;

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
    msg.setTimeStamp(0.924965690063683);
    msg.setSource(2136U);
    msg.setSourceEntity(190U);
    msg.setDestination(23934U);
    msg.setDestinationEntity(48U);
    msg.path_ref = 2904555664U;
    msg.start_lat = 0.29531197709409596;
    msg.start_lon = 0.38868966314797015;
    msg.start_z = 0.7045852992527677;
    msg.start_z_units = 230U;
    msg.end_lat = 0.8667968056952612;
    msg.end_lon = 0.6190283043631796;
    msg.end_z = 0.6379224706535708;
    msg.end_z_units = 171U;
    msg.speed = 0.5798393080042702;
    msg.speed_units = 126U;
    msg.lradius = 0.5456999841201338;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.18894595258428593);
    msg.setSource(6470U);
    msg.setSourceEntity(56U);
    msg.setDestination(6929U);
    msg.setDestinationEntity(24U);
    msg.path_ref = 106426160U;
    msg.start_lat = 0.40682334383204255;
    msg.start_lon = 0.42390785023207556;
    msg.start_z = 0.03758381999210991;
    msg.start_z_units = 215U;
    msg.end_lat = 0.9724823137905173;
    msg.end_lon = 0.6845264670664706;
    msg.end_z = 0.14878869781834625;
    msg.end_z_units = 177U;
    msg.speed = 0.7003153909496299;
    msg.speed_units = 69U;
    msg.lradius = 0.6016320443568106;
    msg.flags = 222U;

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
    msg.setTimeStamp(0.7945301848980569);
    msg.setSource(22718U);
    msg.setSourceEntity(62U);
    msg.setDestination(9312U);
    msg.setDestinationEntity(156U);
    msg.path_ref = 2780108217U;
    msg.start_lat = 0.649729214921038;
    msg.start_lon = 0.15179667602998625;
    msg.start_z = 0.6840920956643946;
    msg.start_z_units = 232U;
    msg.end_lat = 0.5988503599193734;
    msg.end_lon = 0.7247092890528078;
    msg.end_z = 0.07593984252091956;
    msg.end_z_units = 241U;
    msg.speed = 0.09266360893201686;
    msg.speed_units = 124U;
    msg.lradius = 0.8282575637220344;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.18808149271514374);
    msg.setSource(580U);
    msg.setSourceEntity(149U);
    msg.setDestination(10659U);
    msg.setDestinationEntity(97U);
    msg.x = 0.5677823178408093;
    msg.y = 0.03966501642975839;
    msg.z = 0.5423333950265832;
    msg.k = 0.08619978412903062;
    msg.m = 0.6845304627456217;
    msg.n = 0.4003234492271298;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.1616441106705092);
    msg.setSource(62264U);
    msg.setSourceEntity(150U);
    msg.setDestination(36692U);
    msg.setDestinationEntity(217U);
    msg.x = 0.7143480044499918;
    msg.y = 0.5257988228664986;
    msg.z = 0.2342223527239129;
    msg.k = 0.946246859706216;
    msg.m = 0.07751343043924719;
    msg.n = 0.9943813540369209;
    msg.flags = 74U;

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
    msg.setTimeStamp(0.48727984633389276);
    msg.setSource(50556U);
    msg.setSourceEntity(85U);
    msg.setDestination(27108U);
    msg.setDestinationEntity(39U);
    msg.x = 0.5608360266972812;
    msg.y = 0.4213555846630378;
    msg.z = 0.686020015492989;
    msg.k = 0.6406897655187035;
    msg.m = 0.9036818157787524;
    msg.n = 0.5065295883677953;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.9189452738713432);
    msg.setSource(58295U);
    msg.setSourceEntity(28U);
    msg.setDestination(8063U);
    msg.setDestinationEntity(163U);
    msg.value = 0.824414593406159;

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
    msg.setTimeStamp(0.8335380373939054);
    msg.setSource(49821U);
    msg.setSourceEntity(99U);
    msg.setDestination(51285U);
    msg.setDestinationEntity(24U);
    msg.value = 0.5583104334927028;

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
    msg.setTimeStamp(0.7480556398270325);
    msg.setSource(48625U);
    msg.setSourceEntity(216U);
    msg.setDestination(5887U);
    msg.setDestinationEntity(126U);
    msg.value = 0.9114462758524151;

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
    msg.setTimeStamp(0.8037302732945044);
    msg.setSource(15140U);
    msg.setSourceEntity(166U);
    msg.setDestination(7996U);
    msg.setDestinationEntity(178U);
    msg.u = 0.6218576588953514;
    msg.v = 0.7255986017751306;
    msg.w = 0.17030191200391287;
    msg.p = 0.8700008661098589;
    msg.q = 0.7082944482961043;
    msg.r = 0.8741663071363567;
    msg.flags = 208U;

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
    msg.setTimeStamp(0.6581222417206104);
    msg.setSource(61401U);
    msg.setSourceEntity(232U);
    msg.setDestination(58057U);
    msg.setDestinationEntity(254U);
    msg.u = 0.03813747480909124;
    msg.v = 0.6535841155577458;
    msg.w = 0.10155341525052342;
    msg.p = 0.3391135262632595;
    msg.q = 0.922439150539343;
    msg.r = 0.7593498679052493;
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
    msg.setTimeStamp(0.15663515908457437);
    msg.setSource(58493U);
    msg.setSourceEntity(135U);
    msg.setDestination(778U);
    msg.setDestinationEntity(158U);
    msg.u = 0.016100748207994342;
    msg.v = 0.8255010043861417;
    msg.w = 0.5441921317072536;
    msg.p = 0.0885324337808685;
    msg.q = 0.5953316759261456;
    msg.r = 0.5112683885763419;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.5104209652544386);
    msg.setSource(39257U);
    msg.setSourceEntity(86U);
    msg.setDestination(31482U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 522137054U;
    msg.start_lat = 0.9532549007426224;
    msg.start_lon = 0.620285545643004;
    msg.start_z = 0.3561501285010549;
    msg.start_z_units = 186U;
    msg.end_lat = 0.1248271024276224;
    msg.end_lon = 0.40188151602213573;
    msg.end_z = 0.5306733240795062;
    msg.end_z_units = 212U;
    msg.lradius = 0.8924577663178747;
    msg.flags = 175U;
    msg.x = 0.1814719990783017;
    msg.y = 0.03952757311724797;
    msg.z = 0.5826019380501958;
    msg.vx = 0.3036627650232755;
    msg.vy = 0.8604378085395576;
    msg.vz = 0.24290070743529457;
    msg.course_error = 0.40957412132902615;
    msg.eta = 54891U;

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
    msg.setTimeStamp(0.11873593086239631);
    msg.setSource(28999U);
    msg.setSourceEntity(57U);
    msg.setDestination(16806U);
    msg.setDestinationEntity(106U);
    msg.path_ref = 291035326U;
    msg.start_lat = 0.6815742632976975;
    msg.start_lon = 0.23053196555666122;
    msg.start_z = 0.8197144003407841;
    msg.start_z_units = 185U;
    msg.end_lat = 0.02210742398362442;
    msg.end_lon = 0.7655578885459225;
    msg.end_z = 0.057067261250638435;
    msg.end_z_units = 144U;
    msg.lradius = 0.2666736284209087;
    msg.flags = 146U;
    msg.x = 0.33557169862644076;
    msg.y = 0.31573515408581376;
    msg.z = 0.219080088306159;
    msg.vx = 0.8648484921012877;
    msg.vy = 0.4335023810964157;
    msg.vz = 0.7457649320850517;
    msg.course_error = 0.5036613179208806;
    msg.eta = 38430U;

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
    msg.setTimeStamp(0.9232979886512105);
    msg.setSource(48634U);
    msg.setSourceEntity(100U);
    msg.setDestination(61484U);
    msg.setDestinationEntity(125U);
    msg.path_ref = 2672233981U;
    msg.start_lat = 0.5373424405864129;
    msg.start_lon = 0.020365863418719043;
    msg.start_z = 0.6948987695301442;
    msg.start_z_units = 240U;
    msg.end_lat = 0.5823978574476227;
    msg.end_lon = 0.8824298282582423;
    msg.end_z = 0.548685659011842;
    msg.end_z_units = 31U;
    msg.lradius = 0.20391624983072554;
    msg.flags = 147U;
    msg.x = 0.8548090478389152;
    msg.y = 0.4847820937582198;
    msg.z = 0.7873179809560246;
    msg.vx = 0.47095395221902625;
    msg.vy = 0.08092435553031485;
    msg.vz = 0.6499239682590389;
    msg.course_error = 0.029344254071733578;
    msg.eta = 19155U;

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
    msg.setTimeStamp(0.23963622695688913);
    msg.setSource(25289U);
    msg.setSourceEntity(7U);
    msg.setDestination(65533U);
    msg.setDestinationEntity(254U);
    msg.k = 0.15199795827139617;
    msg.m = 0.2279843948580147;
    msg.n = 0.8262683328673289;

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
    msg.setTimeStamp(0.4550932880206323);
    msg.setSource(64543U);
    msg.setSourceEntity(204U);
    msg.setDestination(34966U);
    msg.setDestinationEntity(132U);
    msg.k = 0.7929584137502413;
    msg.m = 0.9270131910912347;
    msg.n = 0.7075163519899779;

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
    msg.setTimeStamp(0.21402514808471262);
    msg.setSource(37980U);
    msg.setSourceEntity(192U);
    msg.setDestination(6992U);
    msg.setDestinationEntity(227U);
    msg.k = 0.9799377509509923;
    msg.m = 0.6699096466731816;
    msg.n = 0.6662313604279333;

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
    msg.setTimeStamp(0.10036998375240225);
    msg.setSource(55891U);
    msg.setSourceEntity(189U);
    msg.setDestination(53541U);
    msg.setDestinationEntity(26U);
    msg.p = 0.8414024913771657;
    msg.i = 0.019298023871937353;
    msg.d = 0.641756531993643;
    msg.a = 0.5431120184081387;

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
    msg.setTimeStamp(0.03481579531890322);
    msg.setSource(39479U);
    msg.setSourceEntity(105U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(7U);
    msg.p = 0.9602351826759805;
    msg.i = 0.4047586837097653;
    msg.d = 0.15161445239911553;
    msg.a = 0.2882262756420554;

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
    msg.setTimeStamp(0.21277712324983578);
    msg.setSource(56508U);
    msg.setSourceEntity(128U);
    msg.setDestination(39926U);
    msg.setDestinationEntity(113U);
    msg.p = 0.8320147245013944;
    msg.i = 0.09042049083467552;
    msg.d = 0.6169612426289018;
    msg.a = 0.11979818572149747;

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
    msg.setTimeStamp(0.6331531880075267);
    msg.setSource(65512U);
    msg.setSourceEntity(38U);
    msg.setDestination(64248U);
    msg.setDestinationEntity(204U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.03654004832464697);
    msg.setSource(2765U);
    msg.setSourceEntity(177U);
    msg.setDestination(36469U);
    msg.setDestinationEntity(188U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.8586887197524805);
    msg.setSource(60516U);
    msg.setSourceEntity(157U);
    msg.setDestination(51502U);
    msg.setDestinationEntity(75U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.9634755075493467);
    msg.setSource(43626U);
    msg.setSourceEntity(59U);
    msg.setDestination(25277U);
    msg.setDestinationEntity(35U);
    msg.timeout = 3897U;
    msg.lat = 0.25078301616448184;
    msg.lon = 0.5373713053854027;
    msg.z = 0.26663049627829283;
    msg.z_units = 204U;
    msg.speed = 0.40733633403258807;
    msg.speed_units = 197U;
    msg.roll = 0.293867213465961;
    msg.pitch = 0.9023494384422228;
    msg.yaw = 0.3403621188081042;
    msg.custom.assign("EGINGXPTAOXNNCMPTSYSBAZUENSCTOEYYTMGKDMGDNMYWOEVFTZKQWSMRENKTILDQHJUBXXCISCWBAEBHOTPFLSBRROZQIIFWYUQAKFPHWMOVL");

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
    msg.setTimeStamp(0.20545791761476662);
    msg.setSource(18259U);
    msg.setSourceEntity(24U);
    msg.setDestination(16769U);
    msg.setDestinationEntity(38U);
    msg.timeout = 33559U;
    msg.lat = 0.4938414607346183;
    msg.lon = 0.28587042662462125;
    msg.z = 0.055064243394353896;
    msg.z_units = 192U;
    msg.speed = 0.9991928613965583;
    msg.speed_units = 120U;
    msg.roll = 0.2081113354154155;
    msg.pitch = 0.1764101089750475;
    msg.yaw = 0.34627886328464064;
    msg.custom.assign("LYHNBVZLMZREAQFPYHMKNRSDFFQAFRHYDJYSOCEOQTRYNIUACTJWWATYBKAUXQFGSGDJXBOVZICFRYGELISMDJOKFCUKAVVEIKCYOSUBLXPJMECWGBNJXJPCBWUHXOLNEVRBEKSMTPTFQLZLSTHXWTDNPQRHOAKZBMPZMVZZTJCIBOKRXVNLGMWXCIHWBHLXLZJZNRDQQTOIFIVE");

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
    msg.setTimeStamp(0.9763375095504407);
    msg.setSource(20796U);
    msg.setSourceEntity(50U);
    msg.setDestination(7706U);
    msg.setDestinationEntity(108U);
    msg.timeout = 14319U;
    msg.lat = 0.7656577442674674;
    msg.lon = 0.03772933715105631;
    msg.z = 0.38414947115889875;
    msg.z_units = 85U;
    msg.speed = 0.620243487493193;
    msg.speed_units = 229U;
    msg.roll = 0.8121009107870618;
    msg.pitch = 0.30338786959986386;
    msg.yaw = 0.1995971233104209;
    msg.custom.assign("YHOLSBDNWQLHJZZDSLASNNHPPAPSBJEJFLTRDUGMVCWWFFLUTBZVUROUGEDYKMIGFLBDWRXKPPWANYPBPLIAAJIANVLZFYYDENWSDRJTXCUYHMCREEQPZQQJAWFZUJWYTOOITKOHRQVMNNCDOKIXFTCMSLBQEKIRGHXHIXBQHZNJPOBDXVKJGMOTCQUICSVXATYOKPFWCXBYTGQAVZGMEREVVFMSSUAQILWTRHKVGZXHEGDOFSUUGCNBIYMRCX");

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
    msg.setTimeStamp(0.36475855148205927);
    msg.setSource(44036U);
    msg.setSourceEntity(7U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(198U);
    msg.timeout = 40238U;
    msg.lat = 0.7924390165511637;
    msg.lon = 0.005397051436592304;
    msg.z = 0.874928487734497;
    msg.z_units = 113U;
    msg.speed = 0.21166351532765149;
    msg.speed_units = 74U;
    msg.duration = 53170U;
    msg.radius = 0.44086434652799766;
    msg.flags = 200U;
    msg.custom.assign("ZINUTGZKLFAQBBJBWEBYDSUPXNJDAQJHJGYFODDSPYYNSVBVSAAKODGGXEGFWRPQNLICEUOQCMILJFAPYVLBIZYCVTIMGNOFYZKCSBPQJRUNJCQMHSWOZSTBRFKLTHWWLIPXUUGTMONWYP");

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
    msg.setTimeStamp(0.19869515846535646);
    msg.setSource(27880U);
    msg.setSourceEntity(123U);
    msg.setDestination(59294U);
    msg.setDestinationEntity(250U);
    msg.timeout = 16393U;
    msg.lat = 0.6704897830542628;
    msg.lon = 0.1655363765558796;
    msg.z = 0.8412257691970995;
    msg.z_units = 114U;
    msg.speed = 0.4843371785791599;
    msg.speed_units = 123U;
    msg.duration = 26856U;
    msg.radius = 0.8171693052107434;
    msg.flags = 88U;
    msg.custom.assign("RFDXKEDQDUIBEDWBMOQFGQZQBUTXRFYXLFBGBMWAVYCJHMDZTPLYAVEWLKXEQRVMILCMNMRNUXIJQDCUVNPELAUDMXFKJVS");

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
    msg.setTimeStamp(0.13874596079486956);
    msg.setSource(17727U);
    msg.setSourceEntity(78U);
    msg.setDestination(59421U);
    msg.setDestinationEntity(236U);
    msg.timeout = 4623U;
    msg.lat = 0.16762760581293246;
    msg.lon = 0.5804672775039769;
    msg.z = 0.83916472200451;
    msg.z_units = 0U;
    msg.speed = 0.7352126306103084;
    msg.speed_units = 85U;
    msg.duration = 5701U;
    msg.radius = 0.6034391207445616;
    msg.flags = 132U;
    msg.custom.assign("FOAQBHIWAGYVNTEJKFVUCDUITPIEOHXSVDCSKKLCTHCSBOQHUPOYDUMONYFJHZTMLTYBGNSQYGUUKFHLNCXLMZODEFODVZGKSXPYQCZRJXZFQJHWWFBWMIWZDGZTRWTSNSAQPKFHSSATLENVUPKMEICRLDYBZQVNYXIXFWNYGXEVBVFDM");

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
    msg.setTimeStamp(0.4421653843490946);
    msg.setSource(55628U);
    msg.setSourceEntity(194U);
    msg.setDestination(5003U);
    msg.setDestinationEntity(12U);
    msg.custom.assign("GGYHJHLBXDOUXBKECGPFAHBVFRGDRCEDYCEBPSPWIKSEGYKNVWECMPEWVPNXWDXHIUAFTDWGGXWYPSAMUEYARZOOLFLYIRKIPMSKLZRPNSQURAHQOZMCWBKJSDQBJCQITYLQYLSXEFUCRAIQHULVUQAABONQVZINMYJFVVZTVTCVOXNDNZFLSJRGTOTXARLZJHFJOCOWBDJTZLQBJMMTABKVKETUEYNHG");

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
    msg.setTimeStamp(0.6563956091772642);
    msg.setSource(53769U);
    msg.setSourceEntity(200U);
    msg.setDestination(36370U);
    msg.setDestinationEntity(177U);
    msg.custom.assign("IBNRVDMGHDEII");

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
    msg.setTimeStamp(0.009474891406837993);
    msg.setSource(43803U);
    msg.setSourceEntity(244U);
    msg.setDestination(40212U);
    msg.setDestinationEntity(96U);
    msg.custom.assign("WQTUIDKMLSNBZXBARKUIXJLYCFGYDWVOXYQUZPYXSEJXKJXSRSELGPWLJFQBFWOYCHIODACBDUZUFMRZXGOBETOKVGSZRPWK");

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
    msg.setTimeStamp(0.719068088549681);
    msg.setSource(63079U);
    msg.setSourceEntity(42U);
    msg.setDestination(54395U);
    msg.setDestinationEntity(209U);
    msg.timeout = 8939U;
    msg.lat = 0.9322358563597164;
    msg.lon = 0.8553635668483008;
    msg.z = 0.049401112446052386;
    msg.z_units = 133U;
    msg.duration = 48741U;
    msg.speed = 0.7068641161009757;
    msg.speed_units = 196U;
    msg.type = 153U;
    msg.radius = 0.39831951802101007;
    msg.length = 0.8587135689371098;
    msg.bearing = 0.8915292737305835;
    msg.direction = 51U;
    msg.custom.assign("WXOKIWHANGLPWJENOFOJBZOHZUZQQFWCNDQGFIPDTQKMTZFIWPESYEMIYVBRJUTRXCHJWIPQSLZCHHNNGOJQWICVWQUEMGOSUZVPUBXGHKMKCDRXBTVTKRLICUMYEKIXYGEEZSFPFDPZPRFUNPNVJEOBCRNXAABXBUZDSXYDEYL");

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
    msg.setTimeStamp(0.052258919247127666);
    msg.setSource(3719U);
    msg.setSourceEntity(215U);
    msg.setDestination(46510U);
    msg.setDestinationEntity(108U);
    msg.timeout = 24038U;
    msg.lat = 0.05156028361643905;
    msg.lon = 0.9123028109340005;
    msg.z = 0.04327361974838462;
    msg.z_units = 79U;
    msg.duration = 12972U;
    msg.speed = 0.4058676889127809;
    msg.speed_units = 217U;
    msg.type = 2U;
    msg.radius = 0.32352156067705173;
    msg.length = 0.07692253192281528;
    msg.bearing = 0.32263884827761957;
    msg.direction = 159U;
    msg.custom.assign("EOPLKNCDJHBFALVNHYJIXOLGVRGCW");

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
    msg.setTimeStamp(0.10882027826572205);
    msg.setSource(18491U);
    msg.setSourceEntity(129U);
    msg.setDestination(23714U);
    msg.setDestinationEntity(236U);
    msg.timeout = 39540U;
    msg.lat = 0.9386033931081943;
    msg.lon = 0.40301730157257076;
    msg.z = 0.9720424045701973;
    msg.z_units = 254U;
    msg.duration = 64908U;
    msg.speed = 0.9248304159744493;
    msg.speed_units = 102U;
    msg.type = 45U;
    msg.radius = 0.36555302714614546;
    msg.length = 0.4301397405225199;
    msg.bearing = 0.0632253953910561;
    msg.direction = 131U;
    msg.custom.assign("MTVWHLIQCLCGSZJE");

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
    msg.setTimeStamp(0.13282865073403238);
    msg.setSource(42558U);
    msg.setSourceEntity(55U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(202U);
    msg.duration = 45476U;
    msg.custom.assign("XMORCTNHTPMVRYWJSTBDLQURAIEEMOCHPBKWDFDU");

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
    msg.setTimeStamp(0.022672595435562548);
    msg.setSource(3030U);
    msg.setSourceEntity(152U);
    msg.setDestination(62061U);
    msg.setDestinationEntity(197U);
    msg.duration = 57253U;
    msg.custom.assign("YERFRNQZSIANCWXJKGZXYKGCUEMYPGHHLVEFKEIEFFADBSGVCLOVWNIZQPNTMWZPDHDGRAAJBODNALJZLXUCPRBZCQHAKMICUJPXKVLTUEULHJWRXJMURTYESXOSNHJOOYPASVAKTVPIEDGOQVJIWNHYWBSWDQFHZQLHDXKNYIMBEQO");

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
    msg.setTimeStamp(0.23107461235599458);
    msg.setSource(29033U);
    msg.setSourceEntity(111U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(145U);
    msg.duration = 23135U;
    msg.custom.assign("AFOWYFLDYNMGHUDKOEPMDAOEZADRPYNQBUYYMCVGAELJWQ");

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
    msg.setTimeStamp(0.18994579902751785);
    msg.setSource(50041U);
    msg.setSourceEntity(100U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(137U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.24414301628310908;
    msg.control.set(tmp_msg_0);
    msg.duration = 55669U;
    msg.custom.assign("LZSDAFGEIHGQWXBUJYYKOCXPCMARCLTLEIDWGFKUTFCSJQBRNVVIVWDMOAXJVFLJLNUTAQYLKJBSMPSJEEOIGBDINJZHSZFUTTABYVZXSJGYDOKUTAXZGEEOQCVTSAMY");

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
    msg.setTimeStamp(0.5136989414742337);
    msg.setSource(19110U);
    msg.setSourceEntity(204U);
    msg.setDestination(55914U);
    msg.setDestinationEntity(49U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6574980120508354;
    tmp_msg_0.speed_units = 100U;
    msg.control.set(tmp_msg_0);
    msg.duration = 62585U;
    msg.custom.assign("KCIOXOMPHJTNNLOVUAWM");

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
    msg.setTimeStamp(0.11774746367085498);
    msg.setSource(10369U);
    msg.setSourceEntity(35U);
    msg.setDestination(6579U);
    msg.setDestinationEntity(142U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5149566008129541;
    tmp_msg_0.z_units = 49U;
    msg.control.set(tmp_msg_0);
    msg.duration = 37003U;
    msg.custom.assign("CGRUMJSBHSZSSVZKRONSVVCULZJGKOZPGJTSCMRYCEKAOFXNAZMUILGCAUXIIDOIVLFLTEAWJILINVNJKRWUKWHDEQJFWECGQZKPMWIVQVDFKPAAMCOFFNZKXDEMXSUFALYTTHBXGXBDOPOYQHRAQHIDAVFONPB");

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
    msg.setTimeStamp(0.08959186170777633);
    msg.setSource(25428U);
    msg.setSourceEntity(136U);
    msg.setDestination(58556U);
    msg.setDestinationEntity(61U);
    msg.timeout = 16131U;
    msg.lat = 0.7273027478530093;
    msg.lon = 0.8224226834480136;
    msg.z = 0.10129551072794907;
    msg.z_units = 41U;
    msg.speed = 0.5114556360255778;
    msg.speed_units = 219U;
    msg.bearing = 0.5821978394561255;
    msg.cross_angle = 0.9532615041719942;
    msg.width = 0.7951539321313819;
    msg.length = 0.9834163697119749;
    msg.hstep = 0.5746599771946624;
    msg.coff = 178U;
    msg.alternation = 180U;
    msg.flags = 110U;
    msg.custom.assign("TRVOAXEYSGRCJBRFIPYRLIMZSBEGFJKMZKGVUTNWUGSVPHZUAVMZDLMBSECYFAMRQXBYNFQBLTGIZDHDOXLIFHPPJATHNJYOIMLBAPDXQVEEUMMLUNBGLDNLNCSTNLMWWTCBIVJYPAWZQECHQOQFYQTSXKGHCWFVEOGIFHVSWKXYCHCBZ");

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
    msg.setTimeStamp(0.5891753171979679);
    msg.setSource(18101U);
    msg.setSourceEntity(81U);
    msg.setDestination(51006U);
    msg.setDestinationEntity(95U);
    msg.timeout = 10141U;
    msg.lat = 0.8687168036244984;
    msg.lon = 0.3676629723158168;
    msg.z = 0.6649936051031433;
    msg.z_units = 95U;
    msg.speed = 0.9865178721346618;
    msg.speed_units = 105U;
    msg.bearing = 0.5464413310684096;
    msg.cross_angle = 0.30446414978093383;
    msg.width = 0.3481195136512285;
    msg.length = 0.4861422026193756;
    msg.hstep = 0.9434905225362237;
    msg.coff = 36U;
    msg.alternation = 123U;
    msg.flags = 132U;
    msg.custom.assign("QQCVHCDALVHHKKPSFSWMYG");

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
    msg.setTimeStamp(0.4320388092459375);
    msg.setSource(6797U);
    msg.setSourceEntity(44U);
    msg.setDestination(48177U);
    msg.setDestinationEntity(115U);
    msg.timeout = 31850U;
    msg.lat = 0.09780000426434676;
    msg.lon = 0.36433541104818523;
    msg.z = 0.09639044408280173;
    msg.z_units = 142U;
    msg.speed = 0.8970668130269926;
    msg.speed_units = 16U;
    msg.bearing = 0.26823162092873;
    msg.cross_angle = 0.29332001049331125;
    msg.width = 0.3146872655204821;
    msg.length = 0.10514897762021114;
    msg.hstep = 0.43353885758278576;
    msg.coff = 155U;
    msg.alternation = 67U;
    msg.flags = 127U;
    msg.custom.assign("NJXVWOYPSRQLELLQUXSTFGJNTQAGXXNCEFBLBYOEKMZIYBFAWUPGUWCYCHBZULRAHWKGYKXXGIBXVUURZAPVROGVJWBRLPEVRPZIDOYEM");

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
    msg.setTimeStamp(0.5974385392809342);
    msg.setSource(63244U);
    msg.setSourceEntity(237U);
    msg.setDestination(21403U);
    msg.setDestinationEntity(121U);
    msg.timeout = 26460U;
    msg.lat = 0.7793287625691763;
    msg.lon = 0.48036050863904634;
    msg.z = 0.572875543566137;
    msg.z_units = 124U;
    msg.speed = 0.8953058627454024;
    msg.speed_units = 221U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.013239309304829638;
    tmp_msg_0.y = 0.5934679029292651;
    tmp_msg_0.z = 0.13181882554507196;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OCBHHLJVQBPFLSRELNKWQJYGZIIBQRCMJVOGMSAXXXCBVRWUAMBFUMULQMRHLAOUCOETSAVEAKDKUWZJTXYUIYTXNHWZPK");

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
    msg.setTimeStamp(0.03186055921906972);
    msg.setSource(37692U);
    msg.setSourceEntity(103U);
    msg.setDestination(19504U);
    msg.setDestinationEntity(157U);
    msg.timeout = 6109U;
    msg.lat = 0.780746394047141;
    msg.lon = 0.5792423710990159;
    msg.z = 0.6769037297635444;
    msg.z_units = 156U;
    msg.speed = 0.9936213185172116;
    msg.speed_units = 11U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.39351793851563177;
    tmp_msg_0.y = 0.7740142753852159;
    tmp_msg_0.z = 0.6107793093976726;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UEIXWFOUHATAJGKTFKBVWCRKBIFECMNJIJYVBOYZDNKALZGUOYJHYWELWCWQRGLKFDPCCXRKEJGUVVOFDBWDSPVSKSVTPLBGNTTYNYQNUQPHSIMJ");

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
    msg.setTimeStamp(0.29122801858901426);
    msg.setSource(41403U);
    msg.setSourceEntity(202U);
    msg.setDestination(29910U);
    msg.setDestinationEntity(49U);
    msg.timeout = 52313U;
    msg.lat = 0.0762933070210624;
    msg.lon = 0.3044628618704909;
    msg.z = 0.8871376355987713;
    msg.z_units = 102U;
    msg.speed = 0.10035908000879601;
    msg.speed_units = 231U;
    msg.custom.assign("AFDTOTDTNCTIPELYNLAOIYHGFHXPXNIVRGBZHAKQFSWMWMLPLEXIUNTAQFXUKLVPDFNDPUBZMAJXOCXJUSZQEESMRJLKTDDOODKZFOWFVVGSSEVEPQBGZNMLPJXBISHKYSSBIULDEWITEYOMUZYPHSXJMCJDCREAIHWRJHWKVBWCKGLHWYWGCYZY");

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
    msg.setTimeStamp(0.9889811203036435);
    msg.setSource(13287U);
    msg.setSourceEntity(221U);
    msg.setDestination(7356U);
    msg.setDestinationEntity(120U);
    msg.x = 0.6198293014284564;
    msg.y = 0.7422584182775153;
    msg.z = 0.4964403224612336;

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
    msg.setTimeStamp(0.3599895851076268);
    msg.setSource(25657U);
    msg.setSourceEntity(96U);
    msg.setDestination(63971U);
    msg.setDestinationEntity(202U);
    msg.x = 0.17715244480787284;
    msg.y = 0.5332464280955752;
    msg.z = 0.6029288997776632;

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
    msg.setTimeStamp(0.345602074602562);
    msg.setSource(33846U);
    msg.setSourceEntity(163U);
    msg.setDestination(37086U);
    msg.setDestinationEntity(125U);
    msg.x = 0.8337323481985647;
    msg.y = 0.8144012806217561;
    msg.z = 0.27597380867106314;

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
    msg.setTimeStamp(0.6691717876688733);
    msg.setSource(7432U);
    msg.setSourceEntity(167U);
    msg.setDestination(32118U);
    msg.setDestinationEntity(237U);
    msg.timeout = 7792U;
    msg.lat = 0.5729217981287276;
    msg.lon = 0.9787407577386841;
    msg.z = 0.870976323379062;
    msg.z_units = 240U;
    msg.amplitude = 0.07010448804235914;
    msg.pitch = 0.9435893205924732;
    msg.speed = 0.34060280395745246;
    msg.speed_units = 232U;
    msg.custom.assign("NVOLZOSMOLXJUIMKPWZMGOZFOXGOTGZAKWHDLTBTAYCRDCZAPCAHWRLTEMDRVGTEVFHDEGUNRSJOEKZTFBQFJBIKSQQXFHAIWMVPZIFWMFOPHKAKRISLBTHKWNUDXJVFYUWNIAYYSPNQYPJBQSWHLERTMFUMGINGAYUTGNVRPGYYUEHZBSVLLYEVRXEYCNVCNCXBODWMQSZLJCUPOSPQQKGIMEJPXIDKRJZNAQCUJXJLIUBFKA");

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
    msg.setTimeStamp(0.5278729451250507);
    msg.setSource(49465U);
    msg.setSourceEntity(119U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(205U);
    msg.timeout = 37309U;
    msg.lat = 0.9605580042118258;
    msg.lon = 0.5258563580350064;
    msg.z = 0.023320762506827464;
    msg.z_units = 26U;
    msg.amplitude = 0.6621521604092426;
    msg.pitch = 0.057116700657876884;
    msg.speed = 0.9564715325304356;
    msg.speed_units = 143U;
    msg.custom.assign("ILOWEOTHMELVUUOHIQUQBNHBXQZLPWAKDEPTFSCEAUWMOUXRDPBOVMPMEGCCBZTREQKCRCFRYJIONGMXABRBIRLVQWNEYSACLIWDVLAFGVWBSNZFZLZAFYQMCFDVPZYWDXGUHJKMUCPYXVHGER");

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
    msg.setTimeStamp(0.004333427479383922);
    msg.setSource(22477U);
    msg.setSourceEntity(123U);
    msg.setDestination(42202U);
    msg.setDestinationEntity(122U);
    msg.timeout = 18849U;
    msg.lat = 0.832704842966963;
    msg.lon = 0.8720687316887813;
    msg.z = 0.28608734504965216;
    msg.z_units = 84U;
    msg.amplitude = 0.4047395741927887;
    msg.pitch = 0.08097601786723263;
    msg.speed = 0.3292531861440199;
    msg.speed_units = 201U;
    msg.custom.assign("IDLQZJXULWXXGOEBQYNSINDFCBVYVMISEPZVWTMKJQRDCNKRWBTXTIBCPLIPGZAAMHGWQYVRBGZVZWSFOEFZBKVLGSJEPCBYLAHIGG");

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
    msg.setTimeStamp(0.22547966863019964);
    msg.setSource(17222U);
    msg.setSourceEntity(169U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(83U);

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
    msg.setTimeStamp(0.06966488619986155);
    msg.setSource(54985U);
    msg.setSourceEntity(193U);
    msg.setDestination(54612U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.02143106600101996);
    msg.setSource(59271U);
    msg.setSourceEntity(51U);
    msg.setDestination(54278U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.4777990118272145);
    msg.setSource(49286U);
    msg.setSourceEntity(150U);
    msg.setDestination(60550U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.031505435145592564;
    msg.lon = 0.9488524345886694;
    msg.z = 0.26147548677196486;
    msg.z_units = 171U;
    msg.radius = 0.39893461750969483;
    msg.duration = 6660U;
    msg.speed = 0.7262570552100224;
    msg.speed_units = 146U;
    msg.custom.assign("DPVPVWZIZDQVBWQHJOYIAYBBTTKIJZSCPIYHGCWBRUOGQXIPPDUCVJNAVEQKMMFYNNXHNOTRXFJWUBFUSSSJIMLI");

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
    msg.setTimeStamp(0.6303608162884002);
    msg.setSource(9891U);
    msg.setSourceEntity(132U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.36357833467414613;
    msg.lon = 0.0864867748972048;
    msg.z = 0.897402385477934;
    msg.z_units = 57U;
    msg.radius = 0.5496803740251877;
    msg.duration = 29230U;
    msg.speed = 0.9359436831027638;
    msg.speed_units = 197U;
    msg.custom.assign("MGEBHJYKMFRBDGZWOCYKDVXTSDSAQAPTUEOJFRVHOVNLIMICOYCXEJUDBVNDLGCQCUCLPICXNPJFFUQWGPZTLLCZHHKIMEL");

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
    msg.setTimeStamp(0.15742927935723006);
    msg.setSource(20712U);
    msg.setSourceEntity(225U);
    msg.setDestination(39217U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.9285375448856547;
    msg.lon = 0.19371083823953328;
    msg.z = 0.8512922479945807;
    msg.z_units = 221U;
    msg.radius = 0.3071140723468023;
    msg.duration = 24767U;
    msg.speed = 0.9116194399625298;
    msg.speed_units = 57U;
    msg.custom.assign("UZZXMDJSOWPNXQYBWKRCJTPKJOHBVOWANRHEFATUSTWZSARVVWTEHFDOOYLFPVZGELSEGYYXIUEIIIHETMAONOXLQYDMSBYBRPFOSRHBVUUAUIGZKICTGZJQAQWMAZNE");

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
    msg.setTimeStamp(0.46396213268620323);
    msg.setSource(18573U);
    msg.setSourceEntity(203U);
    msg.setDestination(42656U);
    msg.setDestinationEntity(111U);
    msg.timeout = 49287U;
    msg.flags = 182U;
    msg.lat = 0.36912578806856544;
    msg.lon = 0.6633748967988207;
    msg.start_z = 0.9905808211354514;
    msg.start_z_units = 31U;
    msg.end_z = 0.21685404780469109;
    msg.end_z_units = 104U;
    msg.radius = 0.8312095710321066;
    msg.speed = 0.057146555705829494;
    msg.speed_units = 59U;
    msg.custom.assign("TMYIJVZYDVEMESQHLEBJDDJSMPJOKPLWVHXQFYZKJJPYIACQBCDNZUSPWXVLXHBIBIRLXPTYVAIZFGCHQIMEBNKGNPTGXNOHEEROFYSXVMUGWCDRLOECWKODGGZFZLRXXPCUTKWVHYKNUIASOEFUAMPRIKNSZKTIUSSWDBMMRHJBCTPNFFZOGQUKMUNEVXQVFDGASJGROPCRLTANWDWYXJFBTARUQYLGHEIASQMDAHKZTUTOWNQJVFOHQ");

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
    msg.setTimeStamp(0.7368336869683786);
    msg.setSource(57502U);
    msg.setSourceEntity(216U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(237U);
    msg.timeout = 51177U;
    msg.flags = 250U;
    msg.lat = 0.10105587171578978;
    msg.lon = 0.2756812292520697;
    msg.start_z = 0.22746740708273994;
    msg.start_z_units = 129U;
    msg.end_z = 0.4615796224328016;
    msg.end_z_units = 33U;
    msg.radius = 0.9761000363862415;
    msg.speed = 0.9666405335462377;
    msg.speed_units = 117U;
    msg.custom.assign("UQMGPBRFTINHEPMEAHIRXCZWHIKBPVAKSPBVYBDEBRKCKH");

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
    msg.setTimeStamp(0.9500672138188696);
    msg.setSource(13428U);
    msg.setSourceEntity(203U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(71U);
    msg.timeout = 25341U;
    msg.flags = 135U;
    msg.lat = 0.11789395110328749;
    msg.lon = 0.05887178366007095;
    msg.start_z = 0.7255347032440044;
    msg.start_z_units = 182U;
    msg.end_z = 0.7515948920338884;
    msg.end_z_units = 149U;
    msg.radius = 0.3049287691877792;
    msg.speed = 0.4396078533836212;
    msg.speed_units = 218U;
    msg.custom.assign("IOPTDFRNYPRIDGDPDTGWUMSEBWDRPLJHEWKBPBOFGUENODFKJGPBQKMYUIKLLVQAYSSHURMABYNBTZILVACNWGNJVUOJCMKAIZKHSZLQRSQOLJGCTZDCWIZRHXXOIZSXENHOMANXBCJBXLCAHTDKLFUCMFGCUT");

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
    msg.setTimeStamp(0.26303869658225953);
    msg.setSource(14752U);
    msg.setSourceEntity(27U);
    msg.setDestination(57804U);
    msg.setDestinationEntity(139U);
    msg.timeout = 8841U;
    msg.lat = 0.7489891337604923;
    msg.lon = 0.8414239036334046;
    msg.z = 0.16986293194285296;
    msg.z_units = 88U;
    msg.speed = 0.02830471727149475;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8479139198564012;
    tmp_msg_0.y = 0.9282753402644137;
    tmp_msg_0.z = 0.011505567802760575;
    tmp_msg_0.t = 0.035764829469577486;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TWDTYOFDHNVOTDRNCKGGMMJEPDFPOQQVQWAMFKZGFDELLQZQZGOJMDAJTEOZCITDR");

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
    msg.setTimeStamp(0.24608078249411858);
    msg.setSource(12060U);
    msg.setSourceEntity(215U);
    msg.setDestination(49044U);
    msg.setDestinationEntity(116U);
    msg.timeout = 40464U;
    msg.lat = 0.3317085789755321;
    msg.lon = 0.585849189121659;
    msg.z = 0.763737999096738;
    msg.z_units = 211U;
    msg.speed = 0.5023294951115876;
    msg.speed_units = 70U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5385274960868854;
    tmp_msg_0.y = 0.8340881839181777;
    tmp_msg_0.z = 0.4887028086108748;
    tmp_msg_0.t = 0.2147482757092648;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LWKGZNNMATRUVXIXMEMGFOJOGUUHNYCXNSTPEMZZFAHQDSTSQAYPWENYODOBTFPCMVTQGKSVLRLNHPR");

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
    msg.setTimeStamp(0.0655567796948141);
    msg.setSource(60610U);
    msg.setSourceEntity(48U);
    msg.setDestination(14154U);
    msg.setDestinationEntity(227U);
    msg.timeout = 43219U;
    msg.lat = 0.6027991337063601;
    msg.lon = 0.46093839062745723;
    msg.z = 0.877832200819324;
    msg.z_units = 36U;
    msg.speed = 0.19544166175959765;
    msg.speed_units = 193U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.460267929528524;
    tmp_msg_0.y = 0.09201578089983531;
    tmp_msg_0.z = 0.41524595471710735;
    tmp_msg_0.t = 0.6936298986859469;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CILHNWSTFUWKMH");

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
    msg.setTimeStamp(0.714100456713456);
    msg.setSource(6863U);
    msg.setSourceEntity(253U);
    msg.setDestination(32475U);
    msg.setDestinationEntity(22U);
    msg.x = 0.7838281256004096;
    msg.y = 0.9861410630941195;
    msg.z = 0.16904004274996065;
    msg.t = 0.14813448428077958;

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
    msg.setTimeStamp(0.4550231274549653);
    msg.setSource(7365U);
    msg.setSourceEntity(197U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(35U);
    msg.x = 0.5996403579172812;
    msg.y = 0.08676610884115876;
    msg.z = 0.14658373578709805;
    msg.t = 0.32110410118552635;

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
    msg.setTimeStamp(0.6044975766396489);
    msg.setSource(10832U);
    msg.setSourceEntity(16U);
    msg.setDestination(28195U);
    msg.setDestinationEntity(3U);
    msg.x = 0.12325418760366391;
    msg.y = 0.6187650532338667;
    msg.z = 0.47916897325832675;
    msg.t = 0.590800983264088;

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
    msg.setTimeStamp(0.6839527740877093);
    msg.setSource(33914U);
    msg.setSourceEntity(161U);
    msg.setDestination(50557U);
    msg.setDestinationEntity(173U);
    msg.timeout = 12626U;
    msg.name.assign("YGLDZKJYNOCYNJGGMHQWYMAGAYRHVNPIJDLCCJXVNPJCDUUSPSETVIBNCKGOYDQHFUMIECRBFKGNAEFNTYUXAWBKDBVSMSXMMPYPLWITZOEQGQQJIRUEQFNOBTRTPKKLHSYIWBFPGEAIHIZVDCNTNIWSLZQWLVHLBUOTDJXEWFUWTDQTXSEWLJVFPGTRRDXAZVBMDVOXOPECKAYFOZSXAH");
    msg.custom.assign("KAUCNRCSARRVSEYMKYPXSMPTBTXFOOHOFCXEFNFVMIJFRUUIA");

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
    msg.setTimeStamp(0.9656557455706802);
    msg.setSource(1626U);
    msg.setSourceEntity(148U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(53U);
    msg.timeout = 38681U;
    msg.name.assign("HGZYAQSINDOCDKJJTEWIXBDKSPLGGYWXHCJKZHXESPVGGTYDRWQRAHMABKSLATBRP");
    msg.custom.assign("SHHOEYKENYTSMPUCMHEDKEQASJCQFAFGQFRZHUOOLKILTRHERCCXMHBUMYZGZVXAQFTJBNBFBNNSEPPIDVOGRHQTCCLGUDDNKITEGXOGBGBSLLXMKPWWZSMJCKIQWQRDAKJLFNLSWOBGNHYZJDIPXPSFOEXPMVZZWAYTOIPYDXOFIWDCWJJONPLQUFVXUXNABSRXLJQHZZTDRAKFMAEZKDYCVYBIKUYRJVL");

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
    msg.setTimeStamp(0.2245108102796749);
    msg.setSource(20123U);
    msg.setSourceEntity(208U);
    msg.setDestination(3521U);
    msg.setDestinationEntity(21U);
    msg.timeout = 1991U;
    msg.name.assign("UMYGEHYQFRPVGXMR");
    msg.custom.assign("CLQEZDABIZWYORECKJRMMUQAXOTYHVOBNVKOKHJILEIJZENCDXWPVUQGDZSSATDHNFKRWPMGLKELRWUKVQKTFTKGHJOTOOQZDGFAJGSXCRDVBQLVXWBUMUURJNUBTTPICLSWCIMYQMLCZNIXHBZLASMMGZIQRRYSOYGCPPX");

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
    msg.setTimeStamp(0.4038283311934582);
    msg.setSource(15583U);
    msg.setSourceEntity(66U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.5415367423662162;
    msg.lon = 0.05619214212707513;
    msg.z = 0.06515288530150476;
    msg.z_units = 21U;
    msg.speed = 0.8618846231667582;
    msg.speed_units = 107U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5460954571811403;
    tmp_msg_0.y = 0.3760989465631568;
    tmp_msg_0.z = 0.3668342059679418;
    tmp_msg_0.t = 0.1321939993543192;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 42021U;
    tmp_msg_1.off_x = 0.9479074282810521;
    tmp_msg_1.off_y = 0.9428744173631386;
    tmp_msg_1.off_z = 0.0841906617690853;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.08085959671918264;
    msg.custom.assign("PXSUNVJQKQOMCGYJKPSRCOFYLWHHQFYSYTEBCGUHXIRQHSAMDMLPICVUEKGBDWACDLGIZJGHCEXQFTZSHCOHSDPJSLNBVZWVBXLCTLEEAHEIPVASWRPFFREXTMKOPHXSWRDNFVAFGFQIZTCNKERNDOQXIVVJDWKUOLABYBMUNYGUZLGRPVLGFQYQYSTNYXNORTPXIAUZGWBDJOWNMNWITJKJXBZCOBZ");

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
    msg.setTimeStamp(0.03816282394906012);
    msg.setSource(21459U);
    msg.setSourceEntity(217U);
    msg.setDestination(51081U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.8462111140130165;
    msg.lon = 0.3204535779997447;
    msg.z = 0.9453061716620679;
    msg.z_units = 128U;
    msg.speed = 0.8276802529027997;
    msg.speed_units = 181U;
    msg.start_time = 0.16256168485275724;
    msg.custom.assign("MERSKYWMLCMKNIZVDQGJCUVZRWQYOBCNTHVUGTSHKKHVVJKRPANWKMZZZGOXUBPVLLXHAUCAEQFYNLWOTZWQYVDLGNFYOANSGQQOITWZOQNBBIIYHSABAHDJKXRAPJFWUUPRRPPAXXPLEXFPCOFLIROLBTNAQWTZHFJ");

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
    msg.setTimeStamp(0.9740173045217162);
    msg.setSource(37U);
    msg.setSourceEntity(170U);
    msg.setDestination(33037U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.478830092360903;
    msg.lon = 0.50400959672374;
    msg.z = 0.2515146830363557;
    msg.z_units = 189U;
    msg.speed = 0.8288588258777495;
    msg.speed_units = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63505U;
    tmp_msg_0.off_x = 0.16258329919773307;
    tmp_msg_0.off_y = 0.8259711228268409;
    tmp_msg_0.off_z = 0.7987052260646712;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7515068351199314;
    msg.custom.assign("XERNFBURJVKYUKQLLHSRTDGRYPBEEVHTDFQZCUZHYVGUI");

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
    msg.setTimeStamp(0.7576937843024192);
    msg.setSource(21129U);
    msg.setSourceEntity(175U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(163U);
    msg.vid = 36133U;
    msg.off_x = 0.8223936646767654;
    msg.off_y = 0.7179666650604954;
    msg.off_z = 0.910920402419021;

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
    msg.setTimeStamp(0.4686353721508787);
    msg.setSource(52367U);
    msg.setSourceEntity(216U);
    msg.setDestination(22819U);
    msg.setDestinationEntity(211U);
    msg.vid = 22828U;
    msg.off_x = 0.6210538434406345;
    msg.off_y = 0.9158570958732151;
    msg.off_z = 0.8183401060027075;

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
    msg.setTimeStamp(0.9361714365237468);
    msg.setSource(3480U);
    msg.setSourceEntity(33U);
    msg.setDestination(41152U);
    msg.setDestinationEntity(94U);
    msg.vid = 48178U;
    msg.off_x = 0.8470955173025256;
    msg.off_y = 0.6043622427252868;
    msg.off_z = 0.4445575318067072;

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
    msg.setTimeStamp(0.9603843156702563);
    msg.setSource(58824U);
    msg.setSourceEntity(31U);
    msg.setDestination(28663U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.25349058446115025);
    msg.setSource(833U);
    msg.setSourceEntity(143U);
    msg.setDestination(12242U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.9152899719289762);
    msg.setSource(48616U);
    msg.setSourceEntity(154U);
    msg.setDestination(31024U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.11773018351958031);
    msg.setSource(28251U);
    msg.setSourceEntity(145U);
    msg.setDestination(48611U);
    msg.setDestinationEntity(109U);
    msg.mid = 23763U;

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
    msg.setTimeStamp(0.7660369509743318);
    msg.setSource(13185U);
    msg.setSourceEntity(171U);
    msg.setDestination(20518U);
    msg.setDestinationEntity(240U);
    msg.mid = 31437U;

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
    msg.setTimeStamp(0.3776656989898486);
    msg.setSource(42054U);
    msg.setSourceEntity(108U);
    msg.setDestination(34300U);
    msg.setDestinationEntity(93U);
    msg.mid = 42748U;

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
    msg.setTimeStamp(0.025242180051160412);
    msg.setSource(21017U);
    msg.setSourceEntity(91U);
    msg.setDestination(26000U);
    msg.setDestinationEntity(77U);
    msg.state = 121U;
    msg.eta = 17793U;
    msg.info.assign("YLGASCKQFUYGTXFRGYPLFAZRQHKULYNOFHVITIWIDEUWCOUUEYCRWBBCRSRBTPBDRBBISZSFOAVDPPVCJDSEAF");

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
    msg.setTimeStamp(0.8710293134802292);
    msg.setSource(49015U);
    msg.setSourceEntity(169U);
    msg.setDestination(53611U);
    msg.setDestinationEntity(45U);
    msg.state = 35U;
    msg.eta = 18843U;
    msg.info.assign("EORJYBCGZRJICMITKGY");

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
    msg.setTimeStamp(0.6268008953390107);
    msg.setSource(38134U);
    msg.setSourceEntity(52U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(218U);
    msg.state = 32U;
    msg.eta = 35368U;
    msg.info.assign("DIXTELCYIPONESKSZJYSMQFEJCOGIRGIFWHTEAKZFAOBNUAQJGRGRQHYHHSIYWDBFGZMRPWMUBDPLOTDLNHPJQGZNDWYQRYCSOMECZQJJGVAXPDBXCBUVSBJAVRGRBFEQNGVNOZJ");

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
    msg.setTimeStamp(0.4765933512460364);
    msg.setSource(3762U);
    msg.setSourceEntity(166U);
    msg.setDestination(64805U);
    msg.setDestinationEntity(53U);
    msg.system = 7892U;
    msg.duration = 21715U;
    msg.speed = 0.5445513668176111;
    msg.speed_units = 183U;
    msg.x = 0.4263890757066181;
    msg.y = 0.13819290913383475;
    msg.z = 0.30571405843167165;
    msg.z_units = 130U;

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
    msg.setTimeStamp(0.7038383115530541);
    msg.setSource(54620U);
    msg.setSourceEntity(102U);
    msg.setDestination(59611U);
    msg.setDestinationEntity(108U);
    msg.system = 44325U;
    msg.duration = 20055U;
    msg.speed = 0.5692580424992265;
    msg.speed_units = 199U;
    msg.x = 0.07170556976597708;
    msg.y = 0.12425355531332216;
    msg.z = 0.5094171100205048;
    msg.z_units = 205U;

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
    msg.setTimeStamp(0.015611114547390947);
    msg.setSource(21261U);
    msg.setSourceEntity(110U);
    msg.setDestination(60177U);
    msg.setDestinationEntity(229U);
    msg.system = 8704U;
    msg.duration = 46434U;
    msg.speed = 0.5031636489906331;
    msg.speed_units = 102U;
    msg.x = 0.14194633263605483;
    msg.y = 0.5300475327458626;
    msg.z = 0.5127818770982558;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.31180901172318043);
    msg.setSource(5323U);
    msg.setSourceEntity(114U);
    msg.setDestination(43479U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.3272900743641334;
    msg.lon = 0.7801829095122048;
    msg.speed = 0.44467380722329886;
    msg.speed_units = 140U;
    msg.duration = 36276U;
    msg.sys_a = 23565U;
    msg.sys_b = 37961U;
    msg.move_threshold = 0.056544055162835116;

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
    msg.setTimeStamp(0.3690126606021715);
    msg.setSource(16016U);
    msg.setSourceEntity(122U);
    msg.setDestination(7824U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.6178949143250502;
    msg.lon = 0.8748902732214004;
    msg.speed = 0.6623126811497856;
    msg.speed_units = 171U;
    msg.duration = 56592U;
    msg.sys_a = 31788U;
    msg.sys_b = 533U;
    msg.move_threshold = 0.22875332873967302;

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
    msg.setTimeStamp(0.4662311318280916);
    msg.setSource(30571U);
    msg.setSourceEntity(188U);
    msg.setDestination(50091U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.3800511073834093;
    msg.lon = 0.5570642677908006;
    msg.speed = 0.033933900828270414;
    msg.speed_units = 87U;
    msg.duration = 15317U;
    msg.sys_a = 10682U;
    msg.sys_b = 21936U;
    msg.move_threshold = 0.8842613106427051;

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
    msg.setTimeStamp(0.12417941988639902);
    msg.setSource(5688U);
    msg.setSourceEntity(187U);
    msg.setDestination(36179U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.41715807268984073;
    msg.lon = 0.6890773385744839;
    msg.z = 0.6931408880209291;
    msg.z_units = 115U;
    msg.speed = 0.01665775949760928;
    msg.speed_units = 99U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5834381749613524;
    tmp_msg_0.lon = 0.11497274739434371;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HHKWLGRUAWSCHEOSBBKMYQGZFYHXAUOUVBREIWLNDFTTTAGEVCUJKQIJLXTAJJDRYUDJEXZSAALZMNEDKZJLGDTJOVMTRORXKPECZXAKNZFMBECNZCSWLWWOXHIFSXRREAIFQ");

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
    msg.setTimeStamp(0.24393697045984009);
    msg.setSource(32246U);
    msg.setSourceEntity(247U);
    msg.setDestination(18910U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.5399633020792993;
    msg.lon = 0.9216382936721281;
    msg.z = 0.4418927114948191;
    msg.z_units = 125U;
    msg.speed = 0.17700914253700306;
    msg.speed_units = 178U;
    msg.custom.assign("YRCHEUVQOCJILQWWKCZXECZZWBQTRMBVMWONFPWHSFGZKPKNEKPRN");

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
    msg.setTimeStamp(0.897669975198717);
    msg.setSource(15699U);
    msg.setSourceEntity(227U);
    msg.setDestination(29832U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.29817506591727405;
    msg.lon = 0.5931384466551302;
    msg.z = 0.21698463481811525;
    msg.z_units = 190U;
    msg.speed = 0.24434706774766335;
    msg.speed_units = 101U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3661530719467698;
    tmp_msg_0.lon = 0.6785970459266392;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EPRXCFFGCPSINNNWOWNBHTENOZYQVUTQSULZRQIPHHZLBIYPVXSVVUQFERWTHHNPAFSTLJXOUGFBDLKHIGJSECOLHRAEWBNFQMHCLMIJEPEDYEDYFKDMTAJRRTIOZAKKPWSNKWJMSFRCVYMGIVXPXUKLZAYVXJWHSVXFWYUOCZNMADYBQNIWQZKEOSTPAXXJXWUDGCIOAHCKZJMSJBBCVPKVAQMUFTZGLUGTABTJMIBORLQ");

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
    msg.setTimeStamp(0.22194426085189956);
    msg.setSource(23579U);
    msg.setSourceEntity(237U);
    msg.setDestination(34452U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.7871025410165604;
    msg.lon = 0.9242695013523805;

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
    msg.setTimeStamp(0.0654605485847497);
    msg.setSource(45178U);
    msg.setSourceEntity(229U);
    msg.setDestination(334U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.985663035719572;
    msg.lon = 0.6293530987768816;

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
    msg.setTimeStamp(0.2758561532613726);
    msg.setSource(2474U);
    msg.setSourceEntity(218U);
    msg.setDestination(23137U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.6806178407536682;
    msg.lon = 0.5304408114197287;

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
    msg.setTimeStamp(0.3211125315084207);
    msg.setSource(4376U);
    msg.setSourceEntity(188U);
    msg.setDestination(5210U);
    msg.setDestinationEntity(236U);
    msg.timeout = 50994U;
    msg.lat = 0.6066916908225689;
    msg.lon = 0.06532481625912567;
    msg.z = 0.5375395110229327;
    msg.z_units = 51U;
    msg.pitch = 0.8821171833093284;
    msg.amplitude = 0.05266436165448496;
    msg.duration = 61021U;
    msg.speed = 0.11188921153724729;
    msg.speed_units = 74U;
    msg.radius = 0.03388895219950028;
    msg.direction = 159U;
    msg.custom.assign("IQJIJWUNSQDPBGZEXXVCEUKGWCBIADIBMGIAKSDPPDBYFHRMIKKELRCOKNOZRPYPUMMFJPTISBDWHYSKRZOSHFNOPFXKWAAQVWGAHAWFAORLQYRDWTLAONVBTEAKJIPRKFJVZBVLTIBXPHMTLQJZJFHVVNTMHNGZESVWUGEFCUQXWFLCVUZXLSPYDCUZY");

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
    msg.setTimeStamp(0.8737981289105546);
    msg.setSource(41987U);
    msg.setSourceEntity(91U);
    msg.setDestination(14158U);
    msg.setDestinationEntity(98U);
    msg.timeout = 49583U;
    msg.lat = 0.4659329450143145;
    msg.lon = 0.9493250916514772;
    msg.z = 0.6498907762800227;
    msg.z_units = 138U;
    msg.pitch = 0.3129131497143669;
    msg.amplitude = 0.624750623242169;
    msg.duration = 4927U;
    msg.speed = 0.5316251276533948;
    msg.speed_units = 6U;
    msg.radius = 0.9051473550975971;
    msg.direction = 199U;
    msg.custom.assign("GJHEFGRLUDWEQEZXOVPOKBDWJGYAOIBESBRTKYLLNPZAGVLDSLCPCRXIDFPOAWLXRNHFRHTTMIMJNIPBGAVLWHMXNNOVTWFKRSNZGBULBPDBPNQJTQTIBEYZQHSGRUPVHODTGUCUYFSNYJIADCJLQZWYQCFQHSJSOPSUFXYIXFOXUHAJRVQHVUEMYSKCTPXAXNTKEEOZAYMMEWBDINZUGMOAMHCVBGSRJXKFYCVMIZUMIDDWR");

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
    msg.setTimeStamp(0.12295974929948617);
    msg.setSource(2847U);
    msg.setSourceEntity(201U);
    msg.setDestination(60054U);
    msg.setDestinationEntity(41U);
    msg.timeout = 22608U;
    msg.lat = 0.4248569956892295;
    msg.lon = 0.07482793127489507;
    msg.z = 0.8615316420660306;
    msg.z_units = 198U;
    msg.pitch = 0.6709884598872192;
    msg.amplitude = 0.0483968237482264;
    msg.duration = 23601U;
    msg.speed = 0.92594003730231;
    msg.speed_units = 6U;
    msg.radius = 0.2610053006650792;
    msg.direction = 71U;
    msg.custom.assign("AAZINBACRJBYQBZTKFAOCDKEATZEDGNBUMIIERTVVSQJOVZACLWYXPIVPBJENLQTOJWHSPQMZDUYVMVUMCGNQEKFKKGOWZRQXFKHUWHPPKHBLYESEXZTLYQOACITQJTLHTPUHAWUCOMBHSKADNSUMGZWNWOPXKDRRSOOKRGJZGWGEYDXFLERBRVSDZ");

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
    msg.setTimeStamp(0.6367930696501164);
    msg.setSource(14629U);
    msg.setSourceEntity(46U);
    msg.setDestination(15623U);
    msg.setDestinationEntity(217U);
    msg.formation_name.assign("KMEHKWYMNTGDJFHCYMPPCBZWILKZXNPQOLPPJARYHAJFZDLOGX");
    msg.reference_frame = 42U;
    msg.custom.assign("ZQJWKKROVFTVJECNAAYYYWHGSILLLXY");

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
    msg.setTimeStamp(0.2976983594900764);
    msg.setSource(53684U);
    msg.setSourceEntity(141U);
    msg.setDestination(35032U);
    msg.setDestinationEntity(158U);
    msg.formation_name.assign("BGIXEJRPYXFQWKPVATHDP");
    msg.reference_frame = 87U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26938U;
    tmp_msg_0.off_x = 0.2694850379756002;
    tmp_msg_0.off_y = 0.8092298842397115;
    tmp_msg_0.off_z = 0.5824948836119642;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PUFOSQXYGOXMAKHMCJHLPDZUFOPRULCWEVQNRZDHELWMHUDJJQZHABPSCTJUUTKEZJVEKTHNO");

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
    msg.setTimeStamp(0.4424772183471183);
    msg.setSource(23187U);
    msg.setSourceEntity(52U);
    msg.setDestination(2110U);
    msg.setDestinationEntity(17U);
    msg.formation_name.assign("WQHCIVYPZSFRGGMNUZTCSRKXSYKUBIMHGJAPONAIRSLWEWOHXZCBOEMWIQCPFPVHXEQLZNDYXQBMHHYQNENJLMXJXOQZIBZFPLUCOKHYNAWSTVKLULCPRLACQJTKJZUEBPYVTDZYIWBXOGVTJSWHDGOFTKYAIFKAIUOXFBOVJRBELEVGPKUYAHSICBRDMJTCGZMEKQFYPSPZGSDNTALO");
    msg.reference_frame = 219U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 39276U;
    tmp_msg_0.off_x = 0.04519376660771368;
    tmp_msg_0.off_y = 0.6136791250777056;
    tmp_msg_0.off_z = 0.7291839991344755;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VOXROCMORJWUKVUTKPPQUAYLITBRDDSWHTYHGBOYCDGFHWUTNKMIOKICRIZBWYLAVFGASSXCNHYSHKHWGMSUXVDWZPQKPSBQCBD");

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
    msg.setTimeStamp(0.03586100454989627);
    msg.setSource(62620U);
    msg.setSourceEntity(50U);
    msg.setDestination(19802U);
    msg.setDestinationEntity(91U);
    msg.group_name.assign("BOCIIVTFVGVYQYCUUBZXKUREFKNHXSRPWFOJHXPTXNYJIALNKOBWENQBFXHRZILTVJQXWQZFUGLQYGKETJTWXSHGFEUMUKPBWSDASJMNLJUZGPBTOKRAADLICUMPVQHIZEMNNDELWYGPFHSLYBVAHGPLCZABGEAQNKMZDMDCNRMDQKASBFEYIMPYLGHHAVTBDEQNHWXCRGFVFACYVCMJCRKWDWYSIOVRXQIPJZR");
    msg.formation_name.assign("HZJUZWVHDSELZBZJAPABCUOBYEJLBYLGVAGUKSGXMIANPKFFMJRPOCIIVRFYCTHRCPOWIUXEZKQPRHBEFIFVKXDUICSYTLMDNAZXHRNAOCJEXQFKWKDNGRTCNWLHEEHIWTLQQAGTYBEHDQD");
    msg.plan_id.assign("OXAYZXZRRUEEQKXBRXDIQBHUOLMVNADEIJWRLQJIQLCPSNGCCJTESBIEIYPQLDWZWLRE");
    msg.description.assign("WTPBRLAEIZGLCPTISRDFTSHIQSIGOPEHSXJONYCZVAMNMFIPIDINPMSSOCXCSFXIENOKXVMYVKFWYLLDNWFWOPBGDKGPELRTANJJKBKJHEEHUQHNETLTAAGHOWMCJKLXNXD");
    msg.leader_speed = 0.6777762388954534;
    msg.leader_bank_lim = 0.17770578273196247;
    msg.pos_sim_err_lim = 0.20441263134739907;
    msg.pos_sim_err_wrn = 0.8232080724890193;
    msg.pos_sim_err_timeout = 4817U;
    msg.converg_max = 0.4301598799083096;
    msg.converg_timeout = 24511U;
    msg.comms_timeout = 64808U;
    msg.turb_lim = 0.1644983393138778;
    msg.custom.assign("ROZDNTBCVTAKYIYRQBMITKXDSCHEIWWFQSZCTJMYOZWBDHIRODSCMOPQHSDGLICJIBJXFEUWTARBQTGLZAWALJMUIEIHYLYHZKMKUAGSHQMBNAQGFZENGOULQNJZWDILPFXFKEBCVNFDXUAJUVXLGRPJMHBVTUSKESGWVTVMXVCXBPNXOOLMVUQFROYWPTPNJWTKFYQPZPGDCSAJCORWHFEAKQKSPOZPNHYMI");

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
    msg.setTimeStamp(0.8612232784483586);
    msg.setSource(41115U);
    msg.setSourceEntity(195U);
    msg.setDestination(38957U);
    msg.setDestinationEntity(115U);
    msg.group_name.assign("OQXFAEPIIVRHMBWKDKBUIKEHOTARLWZAJVAXVWTLVNZFLGYHGEEWQBKQBJYIQWTMGNQNZLBVFGRPCJTJGQULE");
    msg.formation_name.assign("AOQXHRVCWMHJJUDRBTROHHKGTMMIPVFBENXPRUTNJXAMQMOJQDMPSKWLTVILUFXB");
    msg.plan_id.assign("FHAERFACSEGPIRHVYCBULYJOQIIBOVXNNFMZGULWXSFLLFYJ");
    msg.description.assign("RMDZKGISRFEKGUXRFDOZQSNLUIANNERMSZXPIYLISZRVGWIBPTHWJUMYTCJRVPXPKVAWYATOISLVWBUEKSQQUCHPNJJCKJIZFCZITBSCAFMLEQJFUHLDWVFAYPXEPRNEAPLCVRDVWGLJZDWRKZBTTQMDAXWFHYFJXILOZMNUOQCQBKBSPAEYOTWUQBJDYFLMQOONXOEGHMAVGZDKCKNXHHCOGCGLTJEGHBVTMSIT");
    msg.leader_speed = 0.6075243568418216;
    msg.leader_bank_lim = 0.9011365108360209;
    msg.pos_sim_err_lim = 0.8856347331828897;
    msg.pos_sim_err_wrn = 0.18099640737678913;
    msg.pos_sim_err_timeout = 8771U;
    msg.converg_max = 0.14917905329701586;
    msg.converg_timeout = 41841U;
    msg.comms_timeout = 3707U;
    msg.turb_lim = 0.14519038955837593;
    msg.custom.assign("ZWPHWGEVMJAAUZMCQJVTIVETSIOHZKPBOGWKVKCXOGQDQEDBMLHIGEIULOPSHVSXYCAUZQRNFKIGVNQWQZDEOHMIGXRRFBRCBISRISZEFCTTHKWJL");

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
    msg.setTimeStamp(0.09570824465947758);
    msg.setSource(48913U);
    msg.setSourceEntity(194U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(22U);
    msg.group_name.assign("TZDHTYSJXBNPKTRCNMPKFQCCAPQDBOCHKGNQIWIJMRROU");
    msg.formation_name.assign("MPCNDBRONAAUWYDVFOSBZ");
    msg.plan_id.assign("PHOFETCYRBFPZCMDEWPDRVMYDUBOZBCFLFUVXJZCLA");
    msg.description.assign("IOVFRQSFIVFWCKMCLBDHBUWDLYAMDFDEXK");
    msg.leader_speed = 0.3196257161612862;
    msg.leader_bank_lim = 0.30331848053395605;
    msg.pos_sim_err_lim = 0.879670043681178;
    msg.pos_sim_err_wrn = 0.9376431618252355;
    msg.pos_sim_err_timeout = 1507U;
    msg.converg_max = 0.6118693359050765;
    msg.converg_timeout = 40506U;
    msg.comms_timeout = 4817U;
    msg.turb_lim = 0.6780673725983924;
    msg.custom.assign("ZTEFAKWJRCASEXUUGJNBQPUWDEAGCPJHCQZNYOPKAODVFZDXDAUHGMWJVJEFLXAUVDXDPWTXKONTBGTKYLWZGNMIXYTEXOT");

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
    msg.setTimeStamp(0.4200247216876519);
    msg.setSource(33576U);
    msg.setSourceEntity(99U);
    msg.setDestination(37703U);
    msg.setDestinationEntity(157U);
    msg.control_src = 38663U;
    msg.control_ent = 109U;
    msg.timeout = 0.2079697931869705;
    msg.loiter_radius = 0.9436062136887879;
    msg.altitude_interval = 0.14419058902783277;

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
    msg.setTimeStamp(0.564571712322877);
    msg.setSource(41315U);
    msg.setSourceEntity(88U);
    msg.setDestination(61492U);
    msg.setDestinationEntity(104U);
    msg.control_src = 24210U;
    msg.control_ent = 211U;
    msg.timeout = 0.4077862061412374;
    msg.loiter_radius = 0.5890087602789754;
    msg.altitude_interval = 0.2641109594716754;

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
    msg.setTimeStamp(0.49804583606205366);
    msg.setSource(25204U);
    msg.setSourceEntity(167U);
    msg.setDestination(40262U);
    msg.setDestinationEntity(87U);
    msg.control_src = 54664U;
    msg.control_ent = 236U;
    msg.timeout = 0.041690791085415846;
    msg.loiter_radius = 0.3151186925954309;
    msg.altitude_interval = 0.3845935705958413;

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
    msg.setTimeStamp(0.6680701572495209);
    msg.setSource(33911U);
    msg.setSourceEntity(44U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(16U);
    msg.flags = 184U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4903602079674664;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6252463220884495;
    tmp_msg_1.z_units = 148U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9115699071857417;
    msg.lon = 0.8787500677777714;
    msg.radius = 0.557372021519251;

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
    msg.setTimeStamp(0.3420293737783947);
    msg.setSource(56181U);
    msg.setSourceEntity(242U);
    msg.setDestination(58916U);
    msg.setDestinationEntity(73U);
    msg.flags = 104U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2308108237645602;
    tmp_msg_0.speed_units = 155U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9981495091898756;
    tmp_msg_1.z_units = 130U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7076201883068393;
    msg.lon = 0.12446416445387676;
    msg.radius = 0.27518757691119056;

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
    msg.setTimeStamp(0.23859233313407235);
    msg.setSource(2945U);
    msg.setSourceEntity(202U);
    msg.setDestination(24119U);
    msg.setDestinationEntity(192U);
    msg.flags = 84U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9609938753561851;
    tmp_msg_0.speed_units = 52U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07068915780916185;
    tmp_msg_1.z_units = 191U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.48719519316989723;
    msg.lon = 0.9895672705928058;
    msg.radius = 0.8931080583862461;

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
    msg.setTimeStamp(0.9182284507544581);
    msg.setSource(41580U);
    msg.setSourceEntity(156U);
    msg.setDestination(54817U);
    msg.setDestinationEntity(164U);
    msg.control_src = 4411U;
    msg.control_ent = 191U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 6U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.763762362427447;
    tmp_tmp_msg_0_0.speed_units = 102U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.737227264221087;
    tmp_tmp_msg_0_1.z_units = 195U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.11513518854942328;
    tmp_msg_0.lon = 0.18518199973813942;
    tmp_msg_0.radius = 0.8374920996970399;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 76U;

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
    msg.setTimeStamp(0.9960570757144771);
    msg.setSource(17064U);
    msg.setSourceEntity(16U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(189U);
    msg.control_src = 38123U;
    msg.control_ent = 193U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 85U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4455465511843598;
    tmp_tmp_msg_0_0.speed_units = 47U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.020419283238988784;
    tmp_tmp_msg_0_1.z_units = 168U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7565865674341383;
    tmp_msg_0.lon = 0.3666435612381187;
    tmp_msg_0.radius = 0.36543469903968406;
    msg.reference.set(tmp_msg_0);
    msg.state = 101U;
    msg.proximity = 37U;

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
    msg.setTimeStamp(0.46469635549771804);
    msg.setSource(439U);
    msg.setSourceEntity(104U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(194U);
    msg.control_src = 31465U;
    msg.control_ent = 106U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 135U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.514712210724193;
    tmp_tmp_msg_0_0.speed_units = 82U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.2503087461060117;
    tmp_tmp_msg_0_1.z_units = 118U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.1333263741269981;
    tmp_msg_0.lon = 0.764243647411805;
    tmp_msg_0.radius = 0.6768782443705983;
    msg.reference.set(tmp_msg_0);
    msg.state = 89U;
    msg.proximity = 152U;

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
    msg.setTimeStamp(0.10242837551250406);
    msg.setSource(30798U);
    msg.setSourceEntity(172U);
    msg.setDestination(28925U);
    msg.setDestinationEntity(68U);
    msg.ax_cmd = 0.5810470373000578;
    msg.ay_cmd = 0.8556787553845654;
    msg.az_cmd = 0.7210389143549265;
    msg.ax_des = 0.6614908759566505;
    msg.ay_des = 0.6864139236539311;
    msg.az_des = 0.44730145866740856;
    msg.virt_err_x = 0.17351896442412162;
    msg.virt_err_y = 0.2746763046986671;
    msg.virt_err_z = 0.6058694952214316;
    msg.surf_fdbk_x = 0.9788984542883988;
    msg.surf_fdbk_y = 0.1924263235796423;
    msg.surf_fdbk_z = 0.07411325500273702;
    msg.surf_unkn_x = 0.38385871863436216;
    msg.surf_unkn_y = 0.1549827850467268;
    msg.surf_unkn_z = 0.5079731466355303;
    msg.ss_x = 0.8092746069011105;
    msg.ss_y = 0.18203406706100034;
    msg.ss_z = 0.3924565363340953;

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
    msg.setTimeStamp(0.3484886048839254);
    msg.setSource(1818U);
    msg.setSourceEntity(97U);
    msg.setDestination(52425U);
    msg.setDestinationEntity(18U);
    msg.ax_cmd = 0.3180636825133848;
    msg.ay_cmd = 0.6719460742425822;
    msg.az_cmd = 0.47111250141506444;
    msg.ax_des = 0.23949673756678758;
    msg.ay_des = 0.602710158854484;
    msg.az_des = 0.7418156177686194;
    msg.virt_err_x = 0.6041488801868575;
    msg.virt_err_y = 0.05171740934880609;
    msg.virt_err_z = 0.8135862556007093;
    msg.surf_fdbk_x = 0.5918806009025299;
    msg.surf_fdbk_y = 0.5377633123708179;
    msg.surf_fdbk_z = 0.9809436000396881;
    msg.surf_unkn_x = 0.2875158056101189;
    msg.surf_unkn_y = 0.6789035202422541;
    msg.surf_unkn_z = 0.22137879080941758;
    msg.ss_x = 0.6850151656071127;
    msg.ss_y = 0.3798673859594546;
    msg.ss_z = 0.6891734148715889;

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
    msg.setTimeStamp(0.4974826698289435);
    msg.setSource(18148U);
    msg.setSourceEntity(140U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.15109554720249618;
    msg.ay_cmd = 0.49636231109901885;
    msg.az_cmd = 0.19660478835700568;
    msg.ax_des = 0.6929451572188386;
    msg.ay_des = 0.3704816449032824;
    msg.az_des = 0.13656757727783553;
    msg.virt_err_x = 0.07988620482543685;
    msg.virt_err_y = 0.7676094099314116;
    msg.virt_err_z = 0.22690343219742193;
    msg.surf_fdbk_x = 0.11770557862497222;
    msg.surf_fdbk_y = 0.5007091970975055;
    msg.surf_fdbk_z = 0.21934719121150625;
    msg.surf_unkn_x = 0.41055050728561215;
    msg.surf_unkn_y = 0.19254936874521167;
    msg.surf_unkn_z = 0.9047419729851788;
    msg.ss_x = 0.21348173033272055;
    msg.ss_y = 0.30166215602312685;
    msg.ss_z = 0.1930692221956144;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NECBSMEXSQMWRXUIRGSQSAFIQTARKVKZBYLHITAWQWUPIUWLCPHUHNOADOJYNRDQUJKIGDZTBSCJLFY");
    tmp_msg_0.dist = 0.9622613191507363;
    tmp_msg_0.err = 0.24619467026903408;
    tmp_msg_0.ctrl_imp = 0.5147682288310989;
    tmp_msg_0.rel_dir_x = 0.33257475057552655;
    tmp_msg_0.rel_dir_y = 0.10186989042960692;
    tmp_msg_0.rel_dir_z = 0.14933923083269252;
    tmp_msg_0.err_x = 0.7865690529294314;
    tmp_msg_0.err_y = 0.06147445094201487;
    tmp_msg_0.err_z = 0.8832784934065029;
    tmp_msg_0.rf_err_x = 0.84493534856576;
    tmp_msg_0.rf_err_y = 0.6833196429003723;
    tmp_msg_0.rf_err_z = 0.6098998855388332;
    tmp_msg_0.rf_err_vx = 0.6015037094901147;
    tmp_msg_0.rf_err_vy = 0.014852797444663612;
    tmp_msg_0.rf_err_vz = 0.7230801617581892;
    tmp_msg_0.ss_x = 0.8641447404554591;
    tmp_msg_0.ss_y = 0.6251637713696693;
    tmp_msg_0.ss_z = 0.3321863057031267;
    tmp_msg_0.virt_err_x = 0.3052697830069031;
    tmp_msg_0.virt_err_y = 0.22597863916963346;
    tmp_msg_0.virt_err_z = 0.20045406643715835;
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
    msg.setTimeStamp(0.7838972183195307);
    msg.setSource(23309U);
    msg.setSourceEntity(92U);
    msg.setDestination(58449U);
    msg.setDestinationEntity(31U);
    msg.s_id.assign("OWCEBYULXKGAFTKLQMGYGQFLVPNSMDRSOEZWNHJYAEZBPHTPMLWDNIDWGVOXCZEGPPHZEFRTRSJQGOXNXHBQCVDYLAHWDSCWOCOPCAVLHMLNPAZOZ");
    msg.dist = 0.49233696858606935;
    msg.err = 0.718591805626739;
    msg.ctrl_imp = 0.01213784201502044;
    msg.rel_dir_x = 0.5597285436352408;
    msg.rel_dir_y = 0.5948610513372616;
    msg.rel_dir_z = 0.45629094951607463;
    msg.err_x = 0.8109959883323442;
    msg.err_y = 0.8203606233529289;
    msg.err_z = 0.6189720124771407;
    msg.rf_err_x = 0.19436457403822915;
    msg.rf_err_y = 0.7227839968150764;
    msg.rf_err_z = 0.06568414227333874;
    msg.rf_err_vx = 0.7845218831886446;
    msg.rf_err_vy = 0.9785729805261631;
    msg.rf_err_vz = 0.8500064199480242;
    msg.ss_x = 0.1007544181819201;
    msg.ss_y = 0.1538473882464605;
    msg.ss_z = 0.580658711911428;
    msg.virt_err_x = 0.7453892599587909;
    msg.virt_err_y = 0.1299558502715582;
    msg.virt_err_z = 0.43064686484717796;

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
    msg.setTimeStamp(0.4884682208188127);
    msg.setSource(34449U);
    msg.setSourceEntity(83U);
    msg.setDestination(18174U);
    msg.setDestinationEntity(243U);
    msg.s_id.assign("WXEQWUJKRDSSPBFVOFDWUJJDJMRVJHXCSEYRFUCQAPZPZHKNENVXLFBTYLRXQMLMQFNLXQTGOIVKLUVKYOTGEOLHWBMJBJFFFSRIGSHUBYVCHEYZZTODPNSXKNIJQUIFPKMIYWAHTCGMDICRQNYTHWWZUVQSCSHCOEEWOCEGKGT");
    msg.dist = 0.8901167319845291;
    msg.err = 0.059072571040450716;
    msg.ctrl_imp = 0.8807331963026758;
    msg.rel_dir_x = 0.2682542857933117;
    msg.rel_dir_y = 0.9172155261055148;
    msg.rel_dir_z = 0.4224525020359541;
    msg.err_x = 0.8150733323153395;
    msg.err_y = 0.060265192504303844;
    msg.err_z = 0.8096895829193895;
    msg.rf_err_x = 0.12791700751258328;
    msg.rf_err_y = 0.17653348537952873;
    msg.rf_err_z = 0.5964989743877597;
    msg.rf_err_vx = 0.768732658875905;
    msg.rf_err_vy = 0.8471406666557793;
    msg.rf_err_vz = 0.9105218120967798;
    msg.ss_x = 0.6656986698343977;
    msg.ss_y = 0.8575114534180168;
    msg.ss_z = 0.8282016447487688;
    msg.virt_err_x = 0.5534604121330791;
    msg.virt_err_y = 0.8572164761977257;
    msg.virt_err_z = 0.47403041379862865;

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
    msg.setTimeStamp(0.04237298929194633);
    msg.setSource(40754U);
    msg.setSourceEntity(96U);
    msg.setDestination(37999U);
    msg.setDestinationEntity(11U);
    msg.s_id.assign("IKXUDXZGWZJGEWIASMGEWLMBSIHQQKOYBPLHHQNACUXUNBIJSXYOBBMQEBLJURKRQSHJMUYXPPJNRLMUOAPVAEWGAJOLGWWYXFLROZTDLAPLWBRTYCWZZEQHFURGSFOBVDDAPFHTIGNAIICOCUCXVEZOSPFFLKCFDLMNZQDDYZKUMQEBMGFVXPITIJGVJTVGQCBNDWFFREKVEHNOYEASQKMYTDDKVXTTYPCPHMYONZNRTJTXK");
    msg.dist = 0.701064653920608;
    msg.err = 0.6736629188343867;
    msg.ctrl_imp = 0.1459462362490619;
    msg.rel_dir_x = 0.5326916390636084;
    msg.rel_dir_y = 0.4257685297525077;
    msg.rel_dir_z = 0.228806266629771;
    msg.err_x = 0.8615279921916579;
    msg.err_y = 0.14534097395755874;
    msg.err_z = 0.205141458244685;
    msg.rf_err_x = 0.601608847341764;
    msg.rf_err_y = 0.5782498131906446;
    msg.rf_err_z = 0.8297189254704437;
    msg.rf_err_vx = 0.6659716845235051;
    msg.rf_err_vy = 0.08737126167739495;
    msg.rf_err_vz = 0.11873766168653932;
    msg.ss_x = 0.09656582371542188;
    msg.ss_y = 0.9948486505486515;
    msg.ss_z = 0.5951986711430651;
    msg.virt_err_x = 0.9493323161640116;
    msg.virt_err_y = 0.8219596665419465;
    msg.virt_err_z = 0.03573194816991654;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.15996775977522604);
    msg.setSource(39322U);
    msg.setSourceEntity(11U);
    msg.setDestination(7295U);
    msg.setDestinationEntity(221U);
    msg.op_mode = 9U;
    msg.error_count = 228U;
    msg.error_ents.assign("KDDPWEDYJYNFOVPCYNNUQRQVXOVHZTQ");
    msg.maneuver_type = 15112U;
    msg.maneuver_stime = 0.10440286570049417;
    msg.maneuver_eta = 45093U;
    msg.control_loops = 969592893U;
    msg.flags = 101U;
    msg.last_error.assign("TYVWLCJIRFRJFBUSVZGBFKGONMIYEKLABAQYHDXNDOZGFPTYEMMHDFPPZUJKMVECIXIVYBJUEVQIBNTSENKOGHDMXCXVFHMZMWKDPBJIIPBLJCOSOPRQSXLQFGOGBVEMYASZUJOSWNKPOQRAROPSENTAWKTMTXYHUVZSJHUTHEZJAMKDNSWARXXDGGEWLUWYEJRCXCQCAI");
    msg.last_error_time = 0.16497169015455238;

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
    msg.setTimeStamp(0.6430420216239355);
    msg.setSource(63520U);
    msg.setSourceEntity(213U);
    msg.setDestination(58288U);
    msg.setDestinationEntity(131U);
    msg.op_mode = 74U;
    msg.error_count = 16U;
    msg.error_ents.assign("EPHACWEMQSBVBDWIORVNVLBTOEMLLUVDCHOYNCWWMFEZKRQTMIJRHEJWIJRHAKWUEYARCJQMBKBHYHHFNFGKBVPPBQSMBZWGSLSGUOOGUGWLXAPUCKAYJJFJQVOOQSPNKEJFZGBZKALXMCFIVAQGTWAUVNITIXTAZY");
    msg.maneuver_type = 52673U;
    msg.maneuver_stime = 0.9536617577155997;
    msg.maneuver_eta = 55372U;
    msg.control_loops = 1024220563U;
    msg.flags = 15U;
    msg.last_error.assign("CHHFDOWJFNQIBSAMQARUCKWHXGROLFNLEIMJTYSDWIKGKRYFBBQODCNYNWZZNORUQNLJMHEGUTSZNBUZSUKQEGMTKETZPXRKYQAUAJGHOSXGZBGHFGFHPBEDGBPIWVCTYVWBFSDPVQDR");
    msg.last_error_time = 0.2643332406504819;

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
    msg.setTimeStamp(0.7208526224060925);
    msg.setSource(65055U);
    msg.setSourceEntity(243U);
    msg.setDestination(33693U);
    msg.setDestinationEntity(52U);
    msg.op_mode = 196U;
    msg.error_count = 206U;
    msg.error_ents.assign("PXKAZLJLWSXVWKKFUNZZKYPCZJRKRQHSTGMGMQISDPOIPFFGOVVEACIXVBGSVITYSCABCADQFHEJGYMBTLEQIZSLVQUHLMWLFRBNNZRXWLXXWHKPNCTCYTPGBZORNEXUDMJWQYYHFNIIFXGLELQGEMKEHHURSNXPCAT");
    msg.maneuver_type = 24815U;
    msg.maneuver_stime = 0.9749994683656181;
    msg.maneuver_eta = 38016U;
    msg.control_loops = 1888061390U;
    msg.flags = 21U;
    msg.last_error.assign("AFOPEVOGLXMBDJOSKZIB");
    msg.last_error_time = 0.6032261251606862;

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
    msg.setTimeStamp(0.07411837962769163);
    msg.setSource(44859U);
    msg.setSourceEntity(61U);
    msg.setDestination(32062U);
    msg.setDestinationEntity(172U);
    msg.type = 124U;
    msg.request_id = 8021U;
    msg.command = 240U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 1336073420U;
    tmp_tmp_msg_0_0.start_lat = 0.4799814190019599;
    tmp_tmp_msg_0_0.start_lon = 0.3088936860540469;
    tmp_tmp_msg_0_0.start_z = 0.8746225186466394;
    tmp_tmp_msg_0_0.start_z_units = 7U;
    tmp_tmp_msg_0_0.end_lat = 0.541302167897216;
    tmp_tmp_msg_0_0.end_lon = 0.20836970336101224;
    tmp_tmp_msg_0_0.end_z = 0.6446936395831308;
    tmp_tmp_msg_0_0.end_z_units = 250U;
    tmp_tmp_msg_0_0.speed = 0.13919272644738223;
    tmp_tmp_msg_0_0.speed_units = 199U;
    tmp_tmp_msg_0_0.lradius = 0.9748054447898084;
    tmp_tmp_msg_0_0.flags = 139U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 4496U;
    tmp_msg_0.custom.assign("NDXWMYQBVPLPGONVXRLYKJIEFALKHCZBDIGDABHHUHZRXDUNYVHDPNWOXEPQZBMYZJWJSWEHKKEQTAXKXCENABONDBLCEOMLIRMIOS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10521U;
    msg.info.assign("TWGREUGHRYAOAOWXQKIMHJRZYJSDDJGYXDBQFDIBEWHMDMGBJEVHLQPAAUNLKGCPSVZSOQSCFLPCQTAYWROGDJZVRAKLNWBMATUAWOXPZIFIJOVQUDHOGZLNNTNQCCPVEXPWHFXOWIOCHZNLLYDQZXUVSUBZHZEEFLTXJCPLNRRDSMKETTNFCKYACEFJILIBMKWJY");

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
    msg.setTimeStamp(0.7797108434863397);
    msg.setSource(56259U);
    msg.setSourceEntity(5U);
    msg.setDestination(46453U);
    msg.setDestinationEntity(172U);
    msg.type = 245U;
    msg.request_id = 19097U;
    msg.command = 194U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 32367U;
    tmp_msg_0.lat = 0.6494606238726973;
    tmp_msg_0.lon = 0.5576500277240031;
    tmp_msg_0.z = 0.9463708356571047;
    tmp_msg_0.z_units = 83U;
    tmp_msg_0.speed = 0.17903324479902927;
    tmp_msg_0.speed_units = 108U;
    tmp_msg_0.bearing = 0.20986728723112802;
    tmp_msg_0.cross_angle = 0.0919611691420037;
    tmp_msg_0.width = 0.128856258617714;
    tmp_msg_0.length = 0.3340433612328608;
    tmp_msg_0.hstep = 0.3682684417624398;
    tmp_msg_0.coff = 84U;
    tmp_msg_0.alternation = 160U;
    tmp_msg_0.flags = 239U;
    tmp_msg_0.custom.assign("APQAFHDTUOYPTYBMMHNKFFLPWRLJUOZVKFAVQGTZSTLGOIUCFQAONNBWAUNJMVQYTUACCHPQXLTIVTLXLASESNRMXBAPCKLNEEMDDGDHEWSZWWCSBGVRYGXGUEXFHQHTRCOGQRJD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12687U;
    msg.info.assign("FYVMLFKYIAZAZHTLKGHCAJMGGNUGNZVWCVOJBRMLZOWXUOIFTEWFWFFIQEWSCPTSPRPTXGCLSQJFAOCQGXMRFAYXBBARVLMHCHORHSNROKLTEBNQVBQHADKUIDTENXYPVAIWOMHUEXSGPFZNSRKMOBZDTYWRRYIJUAULXCIXXSECTLM");

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
    msg.setTimeStamp(0.9129741492190235);
    msg.setSource(14723U);
    msg.setSourceEntity(67U);
    msg.setDestination(26540U);
    msg.setDestinationEntity(241U);
    msg.type = 125U;
    msg.request_id = 63932U;
    msg.command = 230U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("LTRDGJAYJCGWKDCFWEUCSBLZRUEHZHRIWMXJLQNLYXOTQBLXISJMKAZDIUJYNREMLHAAXPPHBXVJEBURRYLNBVZEWNSQFBWYDOJZEZFFEVTDQVSEPTLWVIATHRCSWEFQYMPBQFKSIOJVMKSPNZOAIGCCABPKIAGWWFYYFSOLOTMZQJUDPKGXVVXHFTHLGYHPNRGNDVXOMZBQQMNNTCEPRGKUYSICMDGUBNFXWAGCTKMTHD");
    tmp_msg_0.formation_name.assign("PEIJQPVWXIYDJNPMOKUBRTKLOQDKMRBIGHOEQKGGTZTVAERFCYKIZLAOJYGDDRZWWFSPFWXKVNMCCKZFLTSMTXCUHATSIYSYPQIHPQFLSSPXBNFOGALIFQNCJSTQXUCELHFKNNDVHLZTKYUAEQWPUZIZUFTKDPYBIMMBJMUMWSXGJSOEGNDPJHYAVQHOHCNHMX");
    tmp_msg_0.plan_id.assign("YXDCAJIQGHZLUPCCJRBN");
    tmp_msg_0.description.assign("GYSTZWVKATUTINVHFXRQBDFMCYRJCNQHHSOCQEZMNWSJNAXBAGAHFOJOLXVGFEHQSQPYONKKINQLWTVDDMGUUIHBMXRGOTZKHEFPGLKOUGXRWFPJOREIDDJUQZBFWNRINKZLPDYDWNZAYOEMJVXPRLMUPBEZAICBBWABWSHEYISIXKONCBQCMKVTGUQPZLAALMSTJPLMVJWKTEC");
    tmp_msg_0.leader_speed = 0.161408495390286;
    tmp_msg_0.leader_bank_lim = 0.9325606241679067;
    tmp_msg_0.pos_sim_err_lim = 0.5766180043993921;
    tmp_msg_0.pos_sim_err_wrn = 0.3713266903019461;
    tmp_msg_0.pos_sim_err_timeout = 1701U;
    tmp_msg_0.converg_max = 0.5466401040462783;
    tmp_msg_0.converg_timeout = 40207U;
    tmp_msg_0.comms_timeout = 34627U;
    tmp_msg_0.turb_lim = 0.373874660677219;
    tmp_msg_0.custom.assign("YRZLBOGSQYDZRCMWISALWAHNCIGWJJRBGVEYIISZENFDPHBTTSYDCOXMFYWYMWMXTJEEPGJNQLVVNCFCUDREFGUZXGPKILDRODSVARYQKTXURVMJKWZRPAHLAUCGVIMBOZZLMFPUTEEKPZMDQTGXIZLWSCZTOSCPWAULRKHSBQAIQUFLOXGKNBXDTVOBQOMSASPBWHQYHQJTEHPATKGJHKCNHWLMFXEXPVOJKFEIHXVNCNFOJVUUJUBKNA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39463U;
    msg.info.assign("LJRYCJXPQWTOUVOETDNMZXCNEOXGAENYZQEMIFXPZKSVSESKLBJYVSZUGYPVGKIPVAQNBJVJAAYKMMWRWUWIDCOJNODATNESCGMNFULAZKZAFRPPCBPWQYXVFHOALGBUCSOYMRHBTNUSMFWRDYKADXRIFZLIIOTQTHHXGHUTWTKWUCARPLMHRJLQKFJHIFLGTQHYGSZBIDRCUV");

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
    msg.setTimeStamp(0.7384084386007939);
    msg.setSource(45936U);
    msg.setSourceEntity(10U);
    msg.setDestination(59680U);
    msg.setDestinationEntity(178U);
    msg.command = 17U;
    msg.entities.assign("JDOMRKBMMUGIKBNOZIEUZXJGWTMTNKLFYPGRQJXYFUTHVKDCXWATWGVBAQCIDALLCBGJXSTDWDLFGPNVSERFQLSTKNKNPBIVGQDFPSYVOIZKWFLNRKJHODYVYWUMTUHQNCQSHATJHESLYLAAIMPCNGPAYWDFUJNOOZCEZSQUIIORMTMBARTIRZEYJLQVZVPNEHXYCURZOLVMXEWUEEEBWQPHJCBQC");

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
    msg.setTimeStamp(0.1574396934832406);
    msg.setSource(37566U);
    msg.setSourceEntity(181U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(250U);
    msg.command = 2U;
    msg.entities.assign("ADOWEEBWOYTLGQRZLKEHYQICBHZFJGMVABGBILKMJJBNADRIUSTJRZVTWXUYPPFSMLQWRDZCPTRBTVDUZEMYSUSKJCNENXYDORQAFLGTXGIDKIPXPNQRIWEZRMYJSUXOUZCBFMHNRJEPUKXTCEUIOVKIMQGOJCTGHVPLWUXNOW");

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
    msg.setTimeStamp(0.16329570439979246);
    msg.setSource(41641U);
    msg.setSourceEntity(211U);
    msg.setDestination(20213U);
    msg.setDestinationEntity(249U);
    msg.command = 236U;
    msg.entities.assign("RHVPSFFFXZVGWTQQATJIQOASBIMVDLINGPLPEIVHATURPDCO");

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
    msg.setTimeStamp(0.8132249175486562);
    msg.setSource(16727U);
    msg.setSourceEntity(121U);
    msg.setDestination(31070U);
    msg.setDestinationEntity(203U);
    msg.mcount = 239U;
    msg.mnames.assign("OYZGXPWXERYPYHCNQZGZUVUTBNFEISSKQAFHFCEXUDPKJFTBSVWRHNJATUIXKEDINAIGPZVFSVRAOOOLRPMQQFBJQSLHVDRGWSTCYRPLUVKVSWQXIIBWDMDNAYADXYIYFKOOLXEHIARTCNTJKPXMWCHRCITMBJNJNHRMQMXVGZGLUSZGCWDUEMUFCHBIBNFAWLJOZMSWEEVZHOGYHAVDMWDPJZYPTCKK");
    msg.ecount = 77U;
    msg.enames.assign("QFEXRHTXLNFLZQKHUBGUNUYXGVVZNQDRZSSLJPDKLXWODWIHLGKPEALSM");
    msg.ccount = 119U;
    msg.cnames.assign("DGWLKSVUCMSYUZPDQQLUGYDFYEXRYZOIZFPYGPEBHEXIVKGNVSJIFTGBCDELOYHQBZCJMOAVILZWPRSACDLDNEBEYNMRQONPRQZDTQTVJB");
    msg.last_error.assign("JAZYNIRKPSKXRLNADTOBWUZQMSRJNAKNSAENCZPCIBDBFLEHVFWDXKFNGXOTLXVCEYVKPHNSMQKVBMCTBHERVNBTVJKIZMOBJUYFGMUHSCIIGDOAKORXZOLOVXZGHDUIULWQBEWZWMGTODZRLFRHAUSREAYRUDGJFGDQILZNKDFJWEEHVLJQKQTWTYSFTYPHYHHVTAGMYJZXYMDSU");
    msg.last_error_time = 0.2203983123787978;

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
    msg.setTimeStamp(0.3282801648503152);
    msg.setSource(26062U);
    msg.setSourceEntity(79U);
    msg.setDestination(17708U);
    msg.setDestinationEntity(109U);
    msg.mcount = 213U;
    msg.mnames.assign("DEBHRGZMVOPSUCYEQQDVDEZCOJDFQFVZCWBOQBNUUVWUSRYIACPUMIFNPNPUKIHQLBPIPFRESEOXZHJSWIDISRLJHYIIQBUFMMMHLPTVXCZKEUDLLCTGSIFYWTRCNHCEGWXMYAEBGOAFXBZVXMHUEYWJVYYLBRYVKWJRVBOKXHTOFKAXWXOKSQGAGDWHMPTZJYTGZMLOFXGONQKDRNQTM");
    msg.ecount = 132U;
    msg.enames.assign("LNMFKNFXDKJCCORRYBOQOLTGPBPUYPDWNLIQPRGOVGPMEBPDPTKSWJWKQZVVXUHMXYDUFXBAYIUIYGHWMEEYUGGYZWHMXQSVKBHTDSKZJNGEQJZZFNCWCSHRMMNDQASAASNJOANQFSOTRJOELATZOZQJHKNGXIBDEOTHWYPPTGVRZVBWNYFVSLUVICLSLHTEMKCITAEIXXZVJ");
    msg.ccount = 111U;
    msg.cnames.assign("YOYSIRNGDJGZZPXWSOATIGHKNRISMYWZFXPBNIAOKKGCWUJLVYAPAVENUTXSDFXTEXIBYJMHNCYAYKOOKUAHGLORPMDJEEPQVYQPXTUCBRFHSWLSFOEJCBCGUZVGFRVPOLUGYQEICMCNMGNHQKLIMOTZT");
    msg.last_error.assign("YEJQAXHFTCJPNOLLXZOGSWMMHNYSWBIAHNGXMLNNLZAZVRFFIDMABNWUVSCIZXSZRAYGODHFSJQRVIFUDRZANZPHMJSMBJTMGFSLY");
    msg.last_error_time = 0.4111204919815087;

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
    msg.setTimeStamp(0.0015667683147960743);
    msg.setSource(27947U);
    msg.setSourceEntity(73U);
    msg.setDestination(55484U);
    msg.setDestinationEntity(246U);
    msg.mcount = 191U;
    msg.mnames.assign("WEZOGUNLCFZPFAAJEPHSQFJKDYYNEOYKWQTCHRSPXVMPZBIZLYQJYBLNUFXBWGGCOQTJOGATMHHENNDCVGRJSGXVJASAMOCJKYNKROGQHWIZWILFNOHDVHGULDGPTUBFHVQTYHXESILKEBBJWQPNFDFTCTQVYUXAOD");
    msg.ecount = 76U;
    msg.enames.assign("ZKCDPFFZPCECOWAQTYUZFQMAOPTJGGEGYYZGREXSNSJRQQCOPTJBNHLVQWVGHLOCLBIFXCLBDIMAUYJYUNITMEYUJHDHYWLRTSDDBKBAEHVNKMICDFTRZOEUOBAIBWLGDUVRQETFFSSQSBRAXJZCYMKKJPHAXKNGVKLVJXXZQESVRYIQSCFZNIHKOVIXWNPMGWOXMISTJUSRZNKPGXXVRZNUWVFLKMDLQTPYIBBAWHDELHCNHFUWMAPTJWDRG");
    msg.ccount = 254U;
    msg.cnames.assign("AMEECMLANUMEXYDGOFIBZLNHKWKGZZQRPOVAHWRQFOYMPNYRSHWYQXXBNFKUCZBSBFELSHPQDLZVHIEWTDJPFHKQJYWGONDGLAONYAQWXJDTJAGABMZIOTBBTTTRRWCFUTBZLQLUJDLJVCYOWIDCGQINYWUKPOFLPVPVWVMEJFVQPVKKFSKZXASYECABPGOGIEXRIQNXMJUXJTYHSLUXDUGDTVCCUXHCTZSKHROMMNISSCSPEZIBMJUDR");
    msg.last_error.assign("MIKYZESSJUCUOVJKYRWZBPNAAOQNZWCDGRRRXZQDCNJQWMQQHYPGDKXKBVAMWVPKUDNEZKETLXUYQBYRTSMVLMKLIEUXLNJNRYCUTAEHKZICOMFPHTYBGOFSFXNASGXHHUBSZSLOUBXJPMMOTAHYGFZERMRZBWDBITIQEHIICFTPVGEYGETDJTXKQPOVWOWJJRDPAF");
    msg.last_error_time = 0.698963379780717;

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
    msg.setTimeStamp(0.7535563966366596);
    msg.setSource(17405U);
    msg.setSourceEntity(131U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(72U);
    msg.mask = 136U;
    msg.max_depth = 0.7588902717530555;
    msg.min_altitude = 0.4584155433098409;
    msg.max_altitude = 0.7576372706824063;
    msg.min_speed = 0.9175060038819859;
    msg.max_speed = 0.553925943447154;
    msg.max_vrate = 0.06968729557380104;
    msg.lat = 0.49506775978778284;
    msg.lon = 0.31239159894756907;
    msg.orientation = 0.09647613832767044;
    msg.width = 0.3774549527412515;
    msg.length = 0.7356876382708508;

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
    msg.setTimeStamp(0.6087648808513674);
    msg.setSource(58981U);
    msg.setSourceEntity(104U);
    msg.setDestination(39353U);
    msg.setDestinationEntity(34U);
    msg.mask = 105U;
    msg.max_depth = 0.2146709245283559;
    msg.min_altitude = 0.3338564235617034;
    msg.max_altitude = 0.012689616112157909;
    msg.min_speed = 0.710715779495196;
    msg.max_speed = 0.7967175760231018;
    msg.max_vrate = 0.8028069160483078;
    msg.lat = 0.44715311272921765;
    msg.lon = 0.321174476719715;
    msg.orientation = 0.9344602518847659;
    msg.width = 0.6340364395249231;
    msg.length = 0.0928627735302745;

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
    msg.setTimeStamp(0.27865387141429576);
    msg.setSource(49582U);
    msg.setSourceEntity(96U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(242U);
    msg.mask = 167U;
    msg.max_depth = 0.0941515675525908;
    msg.min_altitude = 0.06798514273483913;
    msg.max_altitude = 0.6332436373176454;
    msg.min_speed = 0.544169749780594;
    msg.max_speed = 0.7293207588638904;
    msg.max_vrate = 0.8661806974740298;
    msg.lat = 0.48677916236775154;
    msg.lon = 0.9028779559588322;
    msg.orientation = 0.5979710025391274;
    msg.width = 0.9037705364697269;
    msg.length = 0.8708415384151521;

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
    msg.setTimeStamp(0.7614266769553976);
    msg.setSource(35062U);
    msg.setSourceEntity(35U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.9627097038265592);
    msg.setSource(64313U);
    msg.setSourceEntity(36U);
    msg.setDestination(31364U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.4650694616407418);
    msg.setSource(52464U);
    msg.setSourceEntity(139U);
    msg.setDestination(64104U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.22277237989668763);
    msg.setSource(44474U);
    msg.setSourceEntity(17U);
    msg.setDestination(48487U);
    msg.setDestinationEntity(97U);
    msg.duration = 2038U;

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
    msg.setTimeStamp(0.3590754415054329);
    msg.setSource(3594U);
    msg.setSourceEntity(245U);
    msg.setDestination(6302U);
    msg.setDestinationEntity(189U);
    msg.duration = 19946U;

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
    msg.setTimeStamp(0.1110367267841732);
    msg.setSource(37847U);
    msg.setSourceEntity(182U);
    msg.setDestination(10132U);
    msg.setDestinationEntity(160U);
    msg.duration = 45111U;

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
    msg.setTimeStamp(0.7074580588190896);
    msg.setSource(986U);
    msg.setSourceEntity(120U);
    msg.setDestination(9131U);
    msg.setDestinationEntity(39U);
    msg.enable = 129U;
    msg.mask = 1929512529U;
    msg.scope_ref = 2801561216U;

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
    msg.setTimeStamp(0.3929483568081158);
    msg.setSource(8940U);
    msg.setSourceEntity(12U);
    msg.setDestination(14408U);
    msg.setDestinationEntity(138U);
    msg.enable = 228U;
    msg.mask = 1948023741U;
    msg.scope_ref = 226092943U;

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
    msg.setTimeStamp(0.8043337024781811);
    msg.setSource(25279U);
    msg.setSourceEntity(163U);
    msg.setDestination(16618U);
    msg.setDestinationEntity(195U);
    msg.enable = 49U;
    msg.mask = 3102732297U;
    msg.scope_ref = 1677866356U;

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
    msg.setTimeStamp(0.7742055329919122);
    msg.setSource(6627U);
    msg.setSourceEntity(94U);
    msg.setDestination(44738U);
    msg.setDestinationEntity(84U);
    msg.medium = 130U;

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
    msg.setTimeStamp(0.7949378879149369);
    msg.setSource(45603U);
    msg.setSourceEntity(118U);
    msg.setDestination(64125U);
    msg.setDestinationEntity(92U);
    msg.medium = 55U;

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
    msg.setTimeStamp(0.19216726354629066);
    msg.setSource(48430U);
    msg.setSourceEntity(79U);
    msg.setDestination(31931U);
    msg.setDestinationEntity(14U);
    msg.medium = 230U;

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
    msg.setTimeStamp(0.3230898668417107);
    msg.setSource(26200U);
    msg.setSourceEntity(144U);
    msg.setDestination(2111U);
    msg.setDestinationEntity(183U);
    msg.value = 0.23176076717454508;
    msg.type = 147U;

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
    msg.setTimeStamp(0.666260043667497);
    msg.setSource(23257U);
    msg.setSourceEntity(74U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(55U);
    msg.value = 0.22889803109943174;
    msg.type = 169U;

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
    msg.setTimeStamp(0.06483594665915349);
    msg.setSource(35250U);
    msg.setSourceEntity(7U);
    msg.setDestination(53221U);
    msg.setDestinationEntity(15U);
    msg.value = 0.8716905373057633;
    msg.type = 72U;

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
    msg.setTimeStamp(0.7466149598863392);
    msg.setSource(36195U);
    msg.setSourceEntity(221U);
    msg.setDestination(52392U);
    msg.setDestinationEntity(141U);
    msg.possimerr = 0.20291687397114366;
    msg.converg = 0.5370428212794542;
    msg.turbulence = 0.6583458112824888;
    msg.possimmon = 76U;
    msg.commmon = 0U;
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
    msg.setTimeStamp(0.38364702101272685);
    msg.setSource(30537U);
    msg.setSourceEntity(86U);
    msg.setDestination(20344U);
    msg.setDestinationEntity(68U);
    msg.possimerr = 0.29829563951784166;
    msg.converg = 0.4387709798248486;
    msg.turbulence = 0.3552418268273744;
    msg.possimmon = 208U;
    msg.commmon = 30U;
    msg.convergmon = 27U;

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
    msg.setTimeStamp(0.31248358521047226);
    msg.setSource(35640U);
    msg.setSourceEntity(238U);
    msg.setDestination(33433U);
    msg.setDestinationEntity(224U);
    msg.possimerr = 0.3671159314429351;
    msg.converg = 0.3977032167919001;
    msg.turbulence = 0.16948994909203985;
    msg.possimmon = 51U;
    msg.commmon = 117U;
    msg.convergmon = 221U;

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
    msg.setTimeStamp(0.899251493334309);
    msg.setSource(15980U);
    msg.setSourceEntity(112U);
    msg.setDestination(37853U);
    msg.setDestinationEntity(241U);
    msg.autonomy = 9U;
    msg.mode.assign("WGJCRZPPMK");

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
    msg.setTimeStamp(0.2610233535328925);
    msg.setSource(33668U);
    msg.setSourceEntity(192U);
    msg.setDestination(29940U);
    msg.setDestinationEntity(43U);
    msg.autonomy = 103U;
    msg.mode.assign("SIKCUHCRQONJZKBECHHHIYDSZXTLRRCMGRDMUNMHWSVZTBROFTKMAYFVZEAOYTKXNYPIMNFRHIUOPZLWCLUWVBVFQLTOJKXDKVDSBJXGYBAWIEXGKQQRCJHIZGTBQLCEDEBPYDPVUJVLPYSFQALFXTFXWNUKUGFZQMTECSJOENBULHXBQDILFSJRZPAUGZEWCSDOIKMHGDBJZHSNPMFVORMAOGNVIQPAVJYNY");

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
    msg.setTimeStamp(0.7785517393176553);
    msg.setSource(11135U);
    msg.setSourceEntity(212U);
    msg.setDestination(41971U);
    msg.setDestinationEntity(231U);
    msg.autonomy = 50U;
    msg.mode.assign("XFFSDTLQBUEKFTDOAQ");

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
    msg.setTimeStamp(0.031593779251268383);
    msg.setSource(22484U);
    msg.setSourceEntity(85U);
    msg.setDestination(57526U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.40187997793557906);
    msg.setSource(11319U);
    msg.setSourceEntity(112U);
    msg.setDestination(2596U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.6619804536966064);
    msg.setSource(43732U);
    msg.setSourceEntity(163U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.28538230830198863);
    msg.setSource(55750U);
    msg.setSourceEntity(111U);
    msg.setDestination(22040U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("IIWXCJPPLKDIBMDMLTJXHYEOBJOLNYHRCGWMZREXUWPQWFGDXPHVVSSNVVZNCRAXWHSFTPZPLNBOKNDJMTJTYXZFQBOOGRVSCMLRMHVDKOVIQTEXGFWQYTRXPEMSNAFHGLROUUIAZNLIUAUFAJRHEEEEMNCYXTKDDKVDGRIDTSWHQSAFPMOUCSJBWKDLRHMIBLIQGALWPUXJVKUFAYGFKHOUSQFVAESCWZYQCZGINOCNZBCTA");
    msg.description.assign("TPYFYMIPCLSXIWZIRGCLOYEDAEEOSYDONWGMRUTJQAMABVSNORBNZBHMSPOQIAGIHXJQPB");
    msg.vnamespace.assign("EVEHFHAQTTNCWXNFLEZCUBFTMGMNVXPADPOOHGOQPYZFQXKFCHILRTZKBDPZSKNWVJPEIWICIESJFWFRYUQYYAMOSEBSQCURRJUWRKYOEJITUQLBZYKILQGESPBUSQQGLVCDVEHGIFAAFZAMHXUVJNSXGHCASQHIRMRCSZTDHZDDPKNWWVGMNYZKGCOMRPTUMGVLJYISBNBZJYGVTKBDRATBEXIOAFLJMNWXXKDWPWT");
    msg.start_man_id.assign("TIZXJOEYPHZGRMWQCFMKYDUJLFOWTSSDQVAGJBEXXTZYMWCJKANIIHAFCZSIBHOUHQLPRYLPSBDEVRWRSIOFUOCVNHWJVGLNTSQRPQIMQTFQFNAGWRMNQNVCJVJFTO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("UUNTZIRAOSSFQAGOFYNCZGPMARBAMXSPFZGKYXARCRLIMGZEKSLGROIYXRVGQCKQUADXQPVQBHLTIWYJKHJWUPCXBOORGEYAWNQQPHDLDOTWMH");
    IMC::FormationParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.formation_name.assign("ARCBMEXBQJMGJUWJBTZMVNOVAUBHVAWELXCSTCMUHAWHRBZXZDHUYCVCDRUZTSYHGWPCWVIFLHRMGLUDDIVGEINETGNSDCLDKWB");
    tmp_tmp_msg_0_0.reference_frame = 59U;
    tmp_tmp_msg_0_0.custom.assign("ELCJWHREIQSYVOBRBSXPLMOWVJSCVAQTPXDEQYRVPJGYTAKPMFGSBDFHGZUINCDZZTNWGUTUTAIJOQFULGLWIQSKXKLCGGUWEHLANCUV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("DWGSNVSMCGYZAKNIYWPDCSWZKVDSGRWBELSZTJQWRMZQSCTAPNTBKHUZFXTIODVBHPUPFRPJDPUMUZNIJBPLTERGOAFUTBJCCBLDXNABFHOLCOAFDNJRERYFQKKZVTFXLRXEEIXVIZIVXIZBQDLPJSMVNLFKJOYTCYWHOCYGQMGWJVWUNEEOUTWMKNAEXOAMWXCUHS");
    tmp_msg_1.dest_man.assign("EPGMNLUPAJLVIPSZSTKOVSOBALWVIGRCFKRGHQYUUBUIXZNPCNKVZAISQQCXAGPWAMSTDFZTMIAJJTJSYHHEFHJKVHFXHCMZXGANMEBCOUMINBZOYKYYCNOYEWRSFQJTQFBGEWKVPKLXYVWEFOMMUOWDDOAIKWAIHQYNTWETZEDZBYNDPUUGXQCQYRDN");
    tmp_msg_1.conditions.assign("IIFURAVXDPRYSKLARWJVEITZMFSDPOXYXKAFPCGCGGOGXGDVTHICVSXMZBCCOJIURNPLFGZNLYTXSWYSMUQCUTJCLLZVDKDLFIIPRBEQJETTBLSHCRZNAKLBEENPJADMTSOQMMHLFXNYKSGTIGVARBJXOWHRYDRMDSJXOBWBNMOZEYHZBEQEQVYMNRAPZAQZNTCTKVOIPAGWWLOYKHWUBEQKJFIXWKQFCN");
    msg.transitions.push_back(tmp_msg_1);
    IMC::GpsFix tmp_msg_2;
    tmp_msg_2.validity = 55208U;
    tmp_msg_2.type = 188U;
    tmp_msg_2.utc_year = 8381U;
    tmp_msg_2.utc_month = 144U;
    tmp_msg_2.utc_day = 40U;
    tmp_msg_2.utc_time = 0.829272581679064;
    tmp_msg_2.lat = 0.531623467361585;
    tmp_msg_2.lon = 0.9780432036923951;
    tmp_msg_2.height = 0.4289245485962758;
    tmp_msg_2.satellites = 251U;
    tmp_msg_2.cog = 0.9359347840789936;
    tmp_msg_2.sog = 0.8861866482395988;
    tmp_msg_2.hdop = 0.8383479213983186;
    tmp_msg_2.vdop = 0.6178615867630054;
    tmp_msg_2.hacc = 0.041410922143124695;
    tmp_msg_2.vacc = 0.016592526262580343;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.20157549563529564);
    msg.setSource(30937U);
    msg.setSourceEntity(140U);
    msg.setDestination(11428U);
    msg.setDestinationEntity(232U);
    msg.plan_id.assign("BWFPRORBLXKIHIKODDWENWFCCYTGMRPPXWAQHOCJNQWAUNHHXEFYKGCPMORGAYFHEVAUZYBEFVTLRHFQUAPWNZSRIIUVOOFJDUSLDJUDAVYPZVGLUPNCXHTZKXKQRVODWGCMJNLZSDOHQZMVNLTJGZXYTNJQYVITBFSEKUVQUQKDWBJJGXSEPDLLTAUXTMSCZTRNESRCBABRXDZKBMFYZOKMBEJIGOIJGIMCWWIBVYNXK");
    msg.description.assign("XGBJAGRQRNKZORXMMBABO");
    msg.vnamespace.assign("CQODEPWFDDNDSPIEFTZNAXTNFHGKMSBWVLLLVUBWRXUNOZCVJJGHCKEWOHUIHNKHXRQCXCMIBLVFUZLZQLAUVMMSSGXETIPKKCJYGGEUMTITLNXGIWSFYPLUXQDGUIGTRRVZKOLCYUYHWVXDEJQZMKIRFOWOTHVSAKBHHFZQKQAOSDMFPZTQDJOIO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RFEUEVHSLUBCCIZOHSBHLCAWSEIUATDKVBJYPAOUPMMJEWGXOVXORMYIDLWQPFJZBJKCGRQBKXXTIQAOLYYGHSUWXANFSEKFDZDJRELTGLNNOAZWWRYZVSQZVGTYCZKXEKMVFFHLDWSMPSSINYDIXEGYZBNLCGGORFOMJNPPQWHHJRPXAMCGXAQPIIDHYGHYTMKONAIJPRCWRZXJJNVQTLWDUQFTLTVCUSKU");
    tmp_msg_0.value.assign("QXXHFOMJJDIXXCPTYETXNOCJTAHQJLNKMQSFUFPEHOAZWNABWJLPMGKFEYSVEEP");
    tmp_msg_0.type = 78U;
    tmp_msg_0.access = 253U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HNEJMYJRKQIRUPFVWDSARLOVEOIKMFBHHEGQFZQJUQKPDDSPJMZOIWTNORDSKGJDIDDATTPUS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("NMKFCWBXJQCZRYPEZCGMCLTFQUOIXLTBCUIETGYJZVUKQHEDMVSYAFAWTRUYPZVFMOCGFLZOHYHNPEZPQOIJDATKQYNXPXDPALHULRLYCGKSROXBDNHHIFEJGCZFITJIVJOOIWCWFXBEXTELRALNGSIYVNGKGRSUDWKAHPRRWWUUSKVSJBBDWZEAP");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 54418U;
    tmp_tmp_msg_1_0.lat = 0.6033338082524297;
    tmp_tmp_msg_1_0.lon = 0.8103295472983965;
    tmp_tmp_msg_1_0.z = 0.9651179716850266;
    tmp_tmp_msg_1_0.z_units = 246U;
    tmp_tmp_msg_1_0.speed = 0.9933215515847719;
    tmp_tmp_msg_1_0.speed_units = 202U;
    tmp_tmp_msg_1_0.bearing = 0.1899946687513624;
    tmp_tmp_msg_1_0.cross_angle = 0.5745474335073246;
    tmp_tmp_msg_1_0.width = 0.5125309841390887;
    tmp_tmp_msg_1_0.length = 0.004228782978032641;
    tmp_tmp_msg_1_0.hstep = 0.37191194796075855;
    tmp_tmp_msg_1_0.coff = 59U;
    tmp_tmp_msg_1_0.alternation = 238U;
    tmp_tmp_msg_1_0.flags = 14U;
    tmp_tmp_msg_1_0.custom.assign("UEEMOIVDIUDTJQWYUMWRADIBUPOVSOMOSGBYJZUACRFPUNDGCTVXABJSRNJMXQDQKWGTLIYYRNTBIEOQJHFDZJLQSFIZCBBGF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::MapPoint tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.lat = 0.23515253221224075;
    tmp_tmp_msg_1_1.lon = 0.308527501033823;
    tmp_tmp_msg_1_1.alt = 0.8894116456676361;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::ReportedState tmp_msg_2;
    tmp_msg_2.lat = 0.743923394801373;
    tmp_msg_2.lon = 0.9492758178423625;
    tmp_msg_2.depth = 0.9266564278860533;
    tmp_msg_2.roll = 0.8942603777967318;
    tmp_msg_2.pitch = 0.6377635732358721;
    tmp_msg_2.yaw = 0.3861905407346051;
    tmp_msg_2.rcp_time = 0.1809147480647436;
    tmp_msg_2.sid.assign("HGNSMYRYRXROTBKIKPOPZLHOREMKFDEEOUHJVZGDSGMLAVBGLKCNLZVPVCZAWSKMACGFUKEOONFCXNYDIPQDOSXCAQPZVVHUTUNYZVSSPDFYUEIXXQMTYEMJCXRRXOMFZBZDBILHNRQADTBTQANXWBQOARIKSZIUWBJLIDGBESKYLIJFIJWVPJANCQCGGWBHUYPHZJDQBLTTRVWUFINJ");
    tmp_msg_2.s_type = 186U;
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
    msg.setTimeStamp(0.4497316830523175);
    msg.setSource(51796U);
    msg.setSourceEntity(80U);
    msg.setDestination(33414U);
    msg.setDestinationEntity(48U);
    msg.plan_id.assign("WCIJGZIVKNLDYARMYGVLNHLTYXJOVEANPCUPBWWRAPMUMKMLSDTHBNXBTDJESULCZBEJVHYZGIXOJJNFNIRMDRHRAVMLZCRRZOMSTXIYNJKCTWPYHCZFDVBXOLFAYEFBGPOCJOVFWPFYBGQVWNAFGQDTVCGTAUXEWIISSHPBUKMWSQZUBPQOMXLODDSZUQRECURTNZWYOKJXEFMDYUXXRHLGECWIQUEKSOQHZP");
    msg.description.assign("PPLVWLCXSRVSUSBIIZEIXHVGBCGPVHFJAQURTPDLKNVXKWFSVOVWBTKMLLFBZNXGEAYNDUZTTOCAXAVRRUAHDNEQ");
    msg.vnamespace.assign("TAQMDITRAEJZZGBNOBKTQIXRPFGPPCWKDPOYRYYCHNCRUJSEBBEVISHGTJBDAUODIKVYPVIFAVJLXPNTEWSONEOKAIJLJMHXXXLYJWGRQANRVRSHVQKLSHGMHJWRZOVVOVMSLADZJXYUFCPGUOPCUIIZFGEBYXCMTWKWBETIFEMBWQXGAFZAPPUVDNDHTMQMKQMHFIZAWLBHQUFZLWYBXQGCRDLNHRKFXOTKNCENNDGESLOCYZUTZUL");
    msg.start_man_id.assign("JEMQHODURZQMIKADSISUZZQTCALACJZRYQEPYNYFBOPTAGUOPROQNQOCZBHOYTLFSBRIVUWWNIGLYKVEXKMBHGWDJDEVGKBUWYSZYHAFEXXMTNPWUILKRTGXDDQMRPVWAXAIRVIBRDBAPBKVCMADWFMLQ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("HCJOKHEYJUYZJWYBCYKZRGDHDZFCFKHSREZFFNWIUKOMRMQXTTSXTWDZLJKJTWQZIBZGQTCWOVLYULCNPWPJHDYSSIVFKKQIWCCVMPHMCAFLOEMNFMPSUBRSLGIGLUGTUHXNALOYXASDGOASTQPRNRAJLLZGZIRTOXTEUFBNB");
    tmp_msg_0.dest_man.assign("YJDEXYMGNOOVDECUUEXNQZJOIZWBBLPAWEFOGGPMTKJBSACYODHRTQEXSUZOKBRHIRNPEKPVQZOWPFQFYGBADJULGJLNBS");
    tmp_msg_0.conditions.assign("CUMJPZUUSQKAGUSYFSEXXEBGHCANBYDCGHLLTGAFRHTPVDBJNLZUURQACDKBELHAQXXXWMAIBNCJCEXTAQNIXRKRBBFVMOYNIYI");
    msg.transitions.push_back(tmp_msg_0);
    IMC::VehicleFormation tmp_msg_1;
    tmp_msg_1.lat = 0.5121610510694242;
    tmp_msg_1.lon = 0.1828403500251874;
    tmp_msg_1.z = 0.3651393671096639;
    tmp_msg_1.z_units = 117U;
    tmp_msg_1.speed = 0.4489700762820421;
    tmp_msg_1.speed_units = 164U;
    IMC::TrajectoryPoint tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.x = 0.021802100374253786;
    tmp_tmp_msg_1_0.y = 0.05966119891412891;
    tmp_tmp_msg_1_0.z = 0.3425009907012243;
    tmp_tmp_msg_1_0.t = 0.28687610718179;
    tmp_msg_1.points.push_back(tmp_tmp_msg_1_0);
    tmp_msg_1.start_time = 0.37902515244286905;
    tmp_msg_1.custom.assign("RSQYFYWDJXKBBKPHBBUKQASYLEWAGWZIHKJXDHQFOXJSEKQSTOTEOLYYQUMVMQQXOORJYCNQZEZROPBPUPZGTURFDWVAEKZTEVVNEGVZYFCLUORNWOCQIWFDFXKJZNPIGIPLWBZIISACGDANBFHYBVNDCPZXAYRUDHHJGTDLXIGA");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.16385631930397615);
    msg.setSource(12684U);
    msg.setSourceEntity(122U);
    msg.setDestination(13425U);
    msg.setDestinationEntity(92U);
    msg.maneuver_id.assign("PFKZHJEEYPPNKLDMLATTJKJJCQVRUHYRMFFUFLMZYZZAXNZNDHMOKJQOBZGKVTJEBXJDKVNYCEGLBPPVQEGIZEHFKSRHVETWFPBRBXZTWXTFQINUFHHBBGMTWWKEBSKTQGIEAOQQGNWDUTUFRAGXMMHDSSRRMNVQLAPCOWOFVGWICSSVMIXLDUYUUSCPAXRILXYOALYVEKMYZCDYXHIGCONWPUIJQVLSCZAOCSDRBRCGNJHX");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.9378657818706181;
    tmp_msg_0.lon = 0.7784732019490573;
    tmp_msg_0.z = 0.8973173614804735;
    tmp_msg_0.z_units = 227U;
    tmp_msg_0.speed = 0.8849426151641234;
    tmp_msg_0.speed_units = 28U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.1447338922442306;
    tmp_tmp_msg_0_0.y = 0.8562174786842931;
    tmp_tmp_msg_0_0.z = 0.918434303384586;
    tmp_tmp_msg_0_0.t = 0.6745697029201454;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.22402878747424748;
    tmp_msg_0.custom.assign("SKYTUANUXAKWVDPSIONBYBWZPHHCQLFZHHACZHKPNYUAO");
    msg.data.set(tmp_msg_0);
    IMC::SessionStatus tmp_msg_1;
    tmp_msg_1.sessid = 2136054890U;
    tmp_msg_1.status = 161U;
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
    msg.setTimeStamp(0.8443326453142875);
    msg.setSource(1073U);
    msg.setSourceEntity(63U);
    msg.setDestination(9847U);
    msg.setDestinationEntity(13U);
    msg.maneuver_id.assign("JTWCAZRBWBUIYICUYXXBVGHZMPHFKDBMMMQCKEPBAMRGOVXHJCPYEWZDRODLNBRTOFSHZIGVZDRWINSXZYOPKXCNUGLENEWVJAQMOVUDESKCIYTYLHETMFPWVAUJPODAXDRMKWIHJJVXYOFOAFXDJTFZFILYGSNCGPKWRWNPUYEAPNRMSCZWSXXAUQCIQQSTTZBIMQL");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 58379U;
    tmp_msg_0.lat = 0.027048119504711088;
    tmp_msg_0.lon = 0.3379979606507514;
    tmp_msg_0.z = 0.8539329239322125;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.speed = 0.15349669722994574;
    tmp_msg_0.speed_units = 58U;
    tmp_msg_0.roll = 0.08232413748761458;
    tmp_msg_0.pitch = 0.7772755636568967;
    tmp_msg_0.yaw = 0.08594323431069606;
    tmp_msg_0.custom.assign("OKLHLSFEBMXAQJBWWYYAKZPNZTWFCFBGGOIRKAUKFHCGMUOAHPKMNYUDLBOIQWMJILCXXEYAVQWUULEBVDSQSGPCXJWYZNHSFZIJKDUCVUDMWDCNEROUFCXMNRMTQBEYTGCDFKXSIDRIXTAABTLUJEGEGWJTFTOOZQDYLVWDUEGPJCSHHBFIFBOSPHLYZCRWNSAEVXSVNKTRMZQXLNAZNVMIJPGONHEJRORVHHZRQKKYYPIJZIVP");
    msg.data.set(tmp_msg_0);
    IMC::TrexObservation tmp_msg_1;
    tmp_msg_1.timeline.assign("XYYYLBFABQSCADGXISTQHPFIMRNPRBOFGVIUBSNLLVVZRIOACGQGKINMQJEEJOBYOTRGKLK");
    tmp_msg_1.predicate.assign("AYSPNWUVPDYMKQJSGZBFHGHMOVEXEJTGTWIUVXLTSATRRMDVXLKELUBWJYHDUWTNQZAMKRAZFKADFKRYWJZGKQDNPJCVEEHMPHCXFCRYURPBQPGBGXRHRHAANIKYSZALYOIOWHXWBHYMWMZJKITPGDYFZE");
    tmp_msg_1.attributes.assign("QFJCEUANYWDBOACCOMVPRXBJKVWAZTINMNBPFQGQOBLZMDFXBKLHGHGFCVXDSGPJQZWTSNZPGHQWYRJEQ");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GroundVelocity tmp_msg_2;
    tmp_msg_2.validity = 183U;
    tmp_msg_2.x = 0.5248281663567818;
    tmp_msg_2.y = 0.6218927916666833;
    tmp_msg_2.z = 0.37058406660500154;
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
    msg.setTimeStamp(0.5699184722372252);
    msg.setSource(47445U);
    msg.setSourceEntity(242U);
    msg.setDestination(32660U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("PZVFPBNCTWAAVZVKUUK");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.5085824093266219;
    tmp_msg_0.lon = 0.4880091038978761;
    tmp_msg_0.z = 0.7791624671050351;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.441773018544636;
    tmp_msg_0.speed_units = 201U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.9635783744338707;
    tmp_tmp_msg_0_0.y = 0.4099834076843275;
    tmp_tmp_msg_0_0.z = 0.6106207470182488;
    tmp_tmp_msg_0_0.t = 0.9182258938067513;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 34655U;
    tmp_tmp_msg_0_1.off_x = 0.35131036078461597;
    tmp_tmp_msg_0_1.off_y = 0.5979614595378374;
    tmp_tmp_msg_0_1.off_z = 0.7506040594767349;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.1341525486393882;
    tmp_msg_0.custom.assign("TPVTYSGELKSPLANQGFSMZPEUWJEUBLUCBCAEYGFQRWOGASJFAXVKDKEZHFYDWFBZABRKIMPNDGMJDBYFYCRZUUPYHCRHVTVHDJLYKGMXGVHZAEVJYXBRGWKUIZKROQRMLPMCTWHEZTUIU");
    msg.data.set(tmp_msg_0);
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UTTWJDBXLKNQJTFGBJFABUMNWGMNURUEOJGQSIDVJUOBIHSEDQSZBEXQRNKCCTFVBLRWMTLLBXXAJ");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 64037U;
    tmp_tmp_msg_1_0.lat = 0.715602333159341;
    tmp_tmp_msg_1_0.lon = 0.001657805842436133;
    tmp_tmp_msg_1_0.z = 0.4314024594319257;
    tmp_tmp_msg_1_0.z_units = 37U;
    tmp_tmp_msg_1_0.speed = 0.43715105347163163;
    tmp_tmp_msg_1_0.speed_units = 225U;
    tmp_tmp_msg_1_0.custom.assign("PVGQHCVRFEBDQGKPGLZWQHGAPSHPEUOCFRNFWGFNWDOXOXVKWCNRYCFXXQBDOQCPYMAKDNMWVAGDEDWTRWERRJMHVBZTSATOXUBWDJJHL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ButtonEvent tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.button = 181U;
    tmp_tmp_msg_1_1.value = 52U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TransportBindings tmp_msg_2;
    tmp_msg_2.consumer.assign("FXPSOMIHTDHLTPKNWAXJIKQJYYMRYIKNIDULEZZRKAZBMJNRRZWFZXNOSCGWBLNTCUJOCUPQJBMQANJREPAILFCNABVMIYWYXFVDPEWLNGBFZCQRQFVSQGTLHLDIOYOZKRFVHMAPPBBKAGIMLDORSUUTEUAUUTMKBNQJQKOXDJZEXJJVAQVWESS");
    tmp_msg_2.message_id = 42742U;
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
    msg.setTimeStamp(0.32731711610980785);
    msg.setSource(36201U);
    msg.setSourceEntity(5U);
    msg.setDestination(34217U);
    msg.setDestinationEntity(43U);
    msg.source_man.assign("LWXAADODYOZUZKLYJEGQDPYQSRGEZRDVKBEBJUBKVUMXTSVSCCPTLAVKOXIKMYWLSTAAWBCOUPINQDFZHQTEOTJTRJCWPXZXSWUPFEXFBQYVIHBRCLVIOYMCUKJBYYIKUIDGUKSILRTHVGSXHEICMKNAEHWMAFLQPDNGEN");
    msg.dest_man.assign("XGWWGFYOLMZYKAXKQCPRFEOWJTGMVLUHTPEPEPHGXSAICWRJFZLWAMVRFCEHQDTLYEHYNVYDIUJKBZMTCNANWXJHEVTYBUBIFNKSRDCEECOKBUTBDFDSWRBNHULXXGOOZGSLJRXNQYOJZMXDNKQBISTMQZGFIAIABPBGQJJVPKPRZZIUTQJTWMPQGSWYPMZAKQLJYUVDPFYTIWMVNORNCNSHSFVUIECRO");
    msg.conditions.assign("IJTNOURTUHORHJRPIZYKPJGWTBZFXXULLAWZFRHBRKMXIJQEXOURFHQONNGDBSYCMRFVPPPNMYAWGQOOWXHVKWECWLKUKHLVHIVSIVABFQXYQBLBSTOZJGKSPOYVSALXDBWAECLEAHBJWMDYZGLCSOVIKXSPNRQYGRPTCMJEDZAAFTDGITQYSMCBKVUFFDYEMLEGXJS");

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
    msg.setTimeStamp(0.9718119728677);
    msg.setSource(38922U);
    msg.setSourceEntity(2U);
    msg.setDestination(52270U);
    msg.setDestinationEntity(106U);
    msg.source_man.assign("ESDMSKNGTDOARMTJDPZHNUOCRDBGZSZTUROJZGKXPVDBYCSALHJYMUALZPZVRXVINWJZBAXKPWYOGEIVFCSOQIIWRJDM");
    msg.dest_man.assign("LFSJPOWJRMGYJNFUUYGGCPQVXTONWLBDSJBLDKXDCUINXLACNYAMZNYQEYWSUCCHSDQFAWEHDGOVIRGFKUBRZMDQUFRJGBNVHKJAIVISPNGZHPLAVCHJEISBQKSSIAVEZTPORZWBZNCGLNTTQ");
    msg.conditions.assign("DBMXWVBNMDHGRFYDAUAQVZKMPXAZZJHCZSFWRTAAFTTPDHBOMNOUZKPSPANHXBSIMJIOSZLNWVKCHLEDOWYRGUCQFWZPSETYVFGIXWQYOFSURJNSYVFURJQOBLCCGMLEPPQHIIHJJTMMJOWQRBLCDATQPRAELKPFLPDEEEUIXTIDGAIDQFILZDRBNNNSUUIXOOABSXCXGONCBKTGCGVKHLVUKMBWJFXQWGREVEMJETWSXUZNKVYRVCZ");
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1084000119U;
    tmp_msg_0.state = 208U;
    tmp_msg_0.error.assign("JVNVPIAYWNMQGLSOPKCUYFQPGEERTJVMFXROZVHRXBOVTPHAQCHNESFAJPIWSGTFKBOKVFRILMAXPGDXWLQGQUKEIRXQTLRHTPYOVXPKENDTIHKZNXTJEUGJJVHUBZMQI");
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
    msg.setTimeStamp(0.6203297895108331);
    msg.setSource(32911U);
    msg.setSourceEntity(193U);
    msg.setDestination(43546U);
    msg.setDestinationEntity(146U);
    msg.source_man.assign("SGLAQDTKARJULZHNWVWDOSYBRVNHOFDZVEBPDQKDAPCLPJQXIQXDQQKVVPQAEZTETYWNCMIFCRRFXTOEOVOFOYDKKHVQPTCNETNMZLGUKEIRBOZCPDKVHJBYRQZLJPPNHJJOQICUGTKKJCFMLMXYAPFDDMTWNNSZZTBTAJGRHWCSAWSXMEBUZWMUERAXISIUWZLHUFBBAMLIEGVUBYFPMVUCUOAFYMYFHGHGGSCISLLR");
    msg.dest_man.assign("MDOCBNWOSJWYMLGAEGLN");
    msg.conditions.assign("SLDEKUXZFMSFHCQIKZYUGPURYNGMYIHSWXAZGZQHRYTVGYKVDDTVNXAICFDVWQXNLUMYCNQDIAWTWJEEMBKBQKDXFLZJHVTUIISJIFAOAMNOBCRGQYEPFWBHPSOXOJZCFGNYEMTRLMIPHSCYVZVES");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -10890;
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
    msg.setTimeStamp(0.1274096426712109);
    msg.setSource(28330U);
    msg.setSourceEntity(217U);
    msg.setDestination(52009U);
    msg.setDestinationEntity(56U);
    msg.command = 207U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ORRAEBFJAWTNUPFDUEANSENWHROPFCBVUGYNAKRFZMQCJQUGXFUOTYVBMOYKYRTRQGSOSQIXDNSZX");
    tmp_msg_0.description.assign("ACVIRVHFZVIMBAAEQJCNPOBWUTGXQFZEMEIDCJKZETVXLHAMQKHKXNXLZSPVLQEIRSWDQJOJKGNDEUHWAUOSHQVNUKCUVDBBZXYGNZLBADWLUMCSQGCIXYQ");
    tmp_msg_0.vnamespace.assign("JHEAZDLUPJSEBHMYREGFGCDEKTLEEVFOROGQARVFOCTYBNLKGSPKZZNWLUXNIVMQCEMAXLUFVRDEGFQYIPILDVHQJXPHDXHAZMMWCBQTEXUMTLMNDDTJTMAUMO");
    tmp_msg_0.start_man_id.assign("AORUUJNWEFMVEIQEDBCZKHRMLQNLAVHRVTLDKKLBFMYAHGKTJGGJCNIXBPVQYQQDRLENATEGXJYIBUKRJIDUNFNALXCXJKVINUWUAGWTMOCEYXRPFSDGAOMBZTMFPWJNLBACHHUDWGFJQHSVJAIGVZSVWDGSQFOOXMYDSMLNQYO");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GIHZQOAHPKBJIPZFVLONJMCJKFJO");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 12129U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.547765307273192;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6928141616253951;
    tmp_tmp_tmp_msg_0_0_0.z = 0.6102896705721385;
    tmp_tmp_tmp_msg_0_0_0.z_units = 208U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.6907217217254118;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 99U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.6713389013023655;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.04010251901485806;
    tmp_tmp_tmp_msg_0_0_0.width = 0.13085336887435473;
    tmp_tmp_tmp_msg_0_0_0.length = 0.2548467261674099;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.8433860872230056;
    tmp_tmp_tmp_msg_0_0_0.coff = 211U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 66U;
    tmp_tmp_tmp_msg_0_0_0.flags = 152U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DPFICYYHIFWMDHMUGISWEDSGLVOFFIGWMESEKTKAHNPCLJRYMINTEMVLSJZQCESDNKSDQOAPVGJOKOILQTVHCNXJWPVRZRUAFQNKEOWBHTXCEAHRRJUXXXSQZRBSJCULHIHJQWHNWWRPFJGTKRFLFDIWMNZFEYXAPGBCVGXYKN");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6408054182105064);
    msg.setSource(26435U);
    msg.setSourceEntity(5U);
    msg.setDestination(49401U);
    msg.setDestinationEntity(23U);
    msg.command = 32U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UWIBKUDSQVYXNJAPYMZQCLAYBORTOCQMLFHJUYLKANSPURWIBPOIQVXXLOULXLKBKNWGIMGSWDWJZRDCJFLQKWSATRDUQEMMPRHNBDRSOPJFTSSZMGEZMHEJODHAIUTGWCGJFG");
    tmp_msg_0.description.assign("AYJFTTJZNETZMYMHMVGGKCNZUCFO");
    tmp_msg_0.vnamespace.assign("TCJVWEMKASYXNYNZVIQQNNDBPVIUKMTCAKEIAVWFIPHZVHFDUVCWJTIEMKFRBYEPJLEFGRUCDIJCCLNLEZLQITTTEMYUOOPGEBPYMJXOPKOXXLMRRBGJFQDHLKGXQNLGOYHPQEDKDRXRJGGIDHGTGYBMAFSSMXMWCTQYDKAVYULDOLWBXSNBRFOYAJONZNICANSATG");
    tmp_msg_0.start_man_id.assign("XHVFCPNONUNTSZHGGIWSP");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("YGDZLQJWKRQGVOEOFZHPDNOVKHXRXANXZQHYEBOESGBRVDJYVYJBKUAOGRDATJROMQCHJEPATJIRDCPKDNMEDXBNRZJLKPQSQCSPGQGYFECFZEJYMHVUTLTTLXBXZBSUKNNSUOLGLIIMKDTGRUZMVZWQIVVGDHZLAFYIATKPFYMXWHKX");
    tmp_tmp_msg_0_0.dest_man.assign("CCBAIFVWUIKZEKTMFHKPHZLMPECMTWFDGCMRDQOVXSP");
    tmp_tmp_msg_0_0.conditions.assign("OKUFNIZYRIZMKNPPAQMOYKKODIZVNAGPQHDXATBEJDBHOMMCPTAGEFNZDXARHLDPHLCNMVRZSSCVWUABRCUKQREP");
    IMC::StorageUsage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.available = 2245842835U;
    tmp_tmp_tmp_msg_0_0_0.value = 16U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6759952764851147);
    msg.setSource(39898U);
    msg.setSourceEntity(114U);
    msg.setDestination(2694U);
    msg.setDestinationEntity(123U);
    msg.command = 88U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("APBCTWHHCVCOOAMUXJXYCSMNUMMRJEAOCJOZOXTIHPLEPRRVXFEYTAZNUXQBTVHDVOGCIQTKNLLZCIULVSQPQWDV");
    tmp_msg_0.description.assign("BAFBIDCIUZCFHPFNYKSRLRMASGYZFHGDNWSAPTCVEAMNOHGQEMOSIYUVPTYMKTRRWCZISGONSQLXMLHHDWAMBONJODRDMEPGXBGLUVFHURXXAHHKJCFPFRXJNKXFVKAIDDDDYYCKNTFLBYDURMLIQLIJTVRHWJGABCYUEIQZFVWKEMCSSYVEPWPRSVGUIWXNJHQQTGWLZOLKSTZBCWL");
    tmp_msg_0.vnamespace.assign("ZKRBEWNFRSQNYPCUUWRXESAQFBZTMVBAUYPVWPTIBBUXHTOCNSKQGCDJNUZSFJZBVHCNOUDBZAOHFRIEWGETQZDHJYVWGLUZXWQTRIVSGELXQKHUJZAEELAJUXHLRIQIMOMWMYVXNKXIDMPQLYCMDIJCDRQVDUOLXISZGSYZPNQNPMXNJEKALMCTLKRFRGYTPCJTOFSMSWHOIXKDHVGOAPLKJWOLEAKPSGIEGFOBWYHDCFR");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SOMUJSFPCKBSORBNAKNTBLKODCNEZNOMEOTZBGOMVVMRDIYZUTKGVZZGDNHWQXDXJTIXFBRSKXJRGFFRQIENE");
    tmp_tmp_msg_0_0.value.assign("SOMKYMTLRUHQXZNQQSJMJDIZSTCQSRYHVJTESDVQKIXAPVHXNGEXABXCEKIQHKMMFVDGNEULNIPPUWKAPBDZLPTL");
    tmp_tmp_msg_0_0.type = 1U;
    tmp_tmp_msg_0_0.access = 22U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UIABTZRHBOYKYXBAQXHPIHDETVMRBWPGLPHDDDPIRBQNOSFLKNVVITDFNXCLZRBOIEVQVEXXCDAILXADLAZLUELWFYNHTSSKOGYCYAKSJJIBZUOCQQMMWGPJDVOQNWFAJPZQPJNRZIGTXZSNZMDTJMHHWJERJYYJFBSQRZECSOVSMYENBYUBHUUQAWUASTKGTEKIYNFEKWGVCFDSPMGNRRGKFCWXLHRZFGLCIHCATXMPJQOPKT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OKHDRAKYLWIUJNGEMCHFNQFEFPOGBBZLQUFDRMGGJSKCRTVTBBHPYXNDHEXZMBWCNXVNIFUPTHLGUDJLRKNPDSYURKPVGI");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 23747U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7225826227346194;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.5409041827321942;
    tmp_tmp_tmp_msg_0_1_0.z = 0.16254565302998902;
    tmp_tmp_tmp_msg_0_1_0.z_units = 12U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6663507940140464;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 111U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.7615108470611635;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.23904013026228887;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.6013180424870017;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KBMFQEUQREZMBSBZHCZWQVXKRDILSFHBRSCPEAHPAVIHVZIULULMDBGQFNKFYADEMQYEFUPCPIYSEVDWWYMDFUIYSIGJHNPXTKOOXYWCUATYTDOMHNZZGJOGNTAMJJXGPDRAAMLZNKESUCKGULJAQNK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QIMYEGZVEYOZRIXUXPQCRJIDTFUQWMCGGDZIQEWYNKOWJBIESXTKKCTITJUONAWWTFBOPHMETRMHLHSNENRRUUNVKBWNHFDBIDHSMTDTPPPVGQAKLBJETPIACGYNAJFRDPDXAXPYJAWMY");
    tmp_tmp_msg_0_2.dest_man.assign("CRYTERQVFQIFJEINLNSIRXBKDVRWLZYQDTWHJSWHNAZVRQSTTEIUKBWHBAYXKUHFEXGUNLVGHQTVAEWWGWFHYPOTURMZCAGLIY");
    tmp_tmp_msg_0_2.conditions.assign("HWKTEUHCBYSVHGHZEKJOWZKJTBBQSPNGYPGQVPPWRDDCXTHLVBDELYPREKFHTNCMQMYECNDEZWRKZWSAJFGXXVHG");
    IMC::WaterDensity tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value = 0.7677920266082577;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.8636906919584593);
    msg.setSource(26574U);
    msg.setSourceEntity(107U);
    msg.setDestination(41631U);
    msg.setDestinationEntity(229U);
    msg.state = 32U;
    msg.plan_id.assign("EITOJRTKXUPHEGAFNHYBBZOVTDGXYAXTCNYEVFZXEDAMEMGZHHOHJIWIUJAZSVLNLPCHXOYZMPQFNCGRWECKQSQFBNDLWWUTMUWLECPKLQKDDUEDYYFSWMTQORNGBOKYWLZVGTTRFBZCPQJMYPIRDTXJVXLKLSFXQNGUCKJUO");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.13648218863925987);
    msg.setSource(60866U);
    msg.setSourceEntity(121U);
    msg.setDestination(51318U);
    msg.setDestinationEntity(73U);
    msg.state = 244U;
    msg.plan_id.assign("AXTXOIUJRMBESFPXJHMGPKIBEWYVMEBUVDIBKNGEXUJGHOTLFUEHIMXUGHUQNFRJAPAKYYDCJNGEWBGAHZRQXYKWTICOORNSWYNEUIHJYSJZDOWX");
    msg.comm_level = 160U;

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
    msg.setTimeStamp(0.30149183553027403);
    msg.setSource(5170U);
    msg.setSourceEntity(172U);
    msg.setDestination(45301U);
    msg.setDestinationEntity(19U);
    msg.state = 254U;
    msg.plan_id.assign("JQDVQECRUOKLACNMMTMOSRYKPXBQNFAUIOSANLHXIYBWUDRNZRYDIIPHOZLKBZFZWZSYXTEWGJMNNSTUQLEVCVPWMGFXTSIUMLOUKND");
    msg.comm_level = 217U;

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
    msg.setTimeStamp(0.1323389170224526);
    msg.setSource(31733U);
    msg.setSourceEntity(154U);
    msg.setDestination(6887U);
    msg.setDestinationEntity(140U);
    msg.type = 112U;
    msg.op = 150U;
    msg.request_id = 21342U;
    msg.plan_id.assign("MDJDPWGSDXDAQOCUYFZIKYPIZFPEKMUNEIVFPNQOBFKAGOBYRCJECKOJDLZHMNYKCPIZMAVIQNJMQCBGVWNHVROKOXZVYOJBHWFPNUBREVRTDEXRMMUAVFIZBXJAVDBLWJXLQQOOYLRXNETFSNYJLWDGSAMRYDTUIMUGIRCTSPKWOHICYBMZPGXSERJBVXGCAGQQFXNUWIHCTLHSGDSWSTLGELPHSHTQNKVALTJABZQTKZKLPXAFW");
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3918333501U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VTBSPXORVNKUYMJWUDUZAYRGKPMRNEYJRXSGOORMCUDSDHIKFVQKEWTAGOGAHPIABXFHTZDTJBY");

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
    msg.setTimeStamp(0.3986245544321889);
    msg.setSource(7260U);
    msg.setSourceEntity(208U);
    msg.setDestination(26820U);
    msg.setDestinationEntity(126U);
    msg.type = 193U;
    msg.op = 127U;
    msg.request_id = 24947U;
    msg.plan_id.assign("UKUVPDKGCHWAQHJZLTYJJWEGIGURMEKDTL");
    IMC::VideoData tmp_msg_0;
    tmp_msg_0.id = 191U;
    tmp_msg_0.width = 56646U;
    tmp_msg_0.height = 1217U;
    tmp_msg_0.widthstep = 63690U;
    tmp_msg_0.channels = 250U;
    tmp_msg_0.depth = 116U;
    tmp_msg_0.finaldata = 150U;
    const char tmp_tmp_msg_0_0[] = {76, 76, -99, 13, 74, -38, 33, 67, 67, -52, -86, -39, -107, 23, 91, -70, -70, 10, 69, -26, -10, 70, 72, 112, -79, -54, 74, 18, 4, 51, -105, -12, 47, 105, -37, 83, 41, 29, -113, -3, -72, -71, 69, 103, -125, -61, -73, 28, -13, -32, -55, 121, 99, -54, 102, -60, 48, 54, 82, 113, 66, -100, -107, -15};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OGJTZXGTNUDWKXYGOPRJTZHYKFMXWPUCKFDFEDSYXRVHVIXNOWRKATTWHESLBMXOUNSCNENUWNHZXYZJSMPYWDHWTMIQOUFIPLKPCHJKCCWXMNFZHERFGNIFSBLMCZMLAALSLQBZDICXQJUGRPGTVAFAIYDZVEAQBRHSAKYFERLMOYUVIEMTAZOEPZCHLBHBXCSUNDDUYNFGPOEMTDSV");

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
    msg.setTimeStamp(0.8998014472997287);
    msg.setSource(53759U);
    msg.setSourceEntity(140U);
    msg.setDestination(15306U);
    msg.setDestinationEntity(121U);
    msg.type = 160U;
    msg.op = 230U;
    msg.request_id = 32104U;
    msg.plan_id.assign("UJXTFAODIDRGWXHWRLGWLYIVSAQGPDECKPPIDHJTTHEGJTWMELGEDESHJLTMRYVSKMBFOOVONZDNFLRXIZYKSSYXUPMFUNHRUHYIZBICEPFQZYKCBUUXLFTVBRJQSFWINCXKYKVQCXPSOVAXUFRZBAVPPQNILRJMPAMWUOMWCURQVEY");
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.005699417607152646;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YIBCBUCOMWXNTKZRLKNTDGPBSNQMLAKMZIKIPKJPLHOJJGBYBCOABRUQAZTHRIOBJBQDPSFGZTRCPEVIMJOOKMXURLNYAGKQCZGZVDDUASMRAQBNQEAFWKHJNXCSQWQDEFXTSYSUJUCEZWVLGGNEHRXDPHIOTTPAOYYMWLPDRQPWDYHZUCTVOZXIHJESFMNNXIXUMVYIHFUVVGHXAKBWINVLC");

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
    msg.setTimeStamp(0.9324332012979802);
    msg.setSource(23179U);
    msg.setSourceEntity(83U);
    msg.setDestination(57471U);
    msg.setDestinationEntity(91U);
    msg.plan_count = 16276U;
    msg.plan_size = 3491398699U;
    msg.change_time = 0.11679204115685171;
    msg.change_sid = 50495U;
    msg.change_sname.assign("XICENXCYIJFJJZHCKRVNTDDEGMQPUVPDDHAYRHJUYRHTJYIOKSUSBISIXAHVKWUTAOWSVP");
    const char tmp_msg_0[] = {97, 88, -91, -19, 102, 121, -100, 76, -105, -27, -124, 106, -86, -49, 12, 101, 69, 36, -68, -65, 116, -51, 19, 32, 0, -128, -5, 59, -33, 34, -110, 115, -90, 47, -72, -97, 124, 72, 103, -82, -88, 35, 124, -63, 113, -13, 49, 73, 114, -32, -85, 2, 112, -11, 9, -20, -69, 14, -42, -78, -102, 33, 108, -109, 92, 97, -16, 12, 108, -73, 49, 28, -1, -109, 123, -85, 119, -51, -59, -94, 17, -106, 93, -111, -35, 49, -7, -7, -21, -81, -68, 19, 117, -101, -25, -21, -115, -114, 19, 91, -25, -3, 108, -21, -66, -83, 67, -114, -74, 17, 13, 78, 74, 79, -25, 57, -36, -113, 2, -54, -45, -118, -30, -113, -57, -82, -23, 75, -66, 20, -79, 105, 50, 30, 98, 112, -17, -82, 109, 97, -24, 109, 54, -34, -3, 23, 79, 42, -111, 12, -80, 110, 103, 67, -36, -83, -63, 99, 25, 60, -5, 59, -119, -2, 20, -59, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JWQNKUEFKAYYLQJLDVWPJRRVFEWGGODMTGBPDLNFFZTYPUSNCHSVBUHSTVUBIQAPMEQSKHCTIMRNSICXEXATZJFFQCWWGEIXXBROAXAYMRQHSKHCNOEWUHQWXHXWZYCOKCALKJHACBIIRMVWDVJRDPIHGRBYLGQLXCZOTPTKLJQUYOYESNXPDVVJ");
    tmp_msg_1.plan_size = 10650U;
    tmp_msg_1.change_time = 0.9208723323790445;
    tmp_msg_1.change_sid = 4632U;
    tmp_msg_1.change_sname.assign("EBBJTTILDOUQZOFODOAYRDBAGRCWPSXKVPLGZMHNVQMUJKTSOYVIGDMJVUGWFYSRTYRKEWAYVCVBAXTJJBCQYPF");
    const char tmp_tmp_msg_1_0[] = {-49, 52, -34, -48, -38, -62, -101, -118, -67, 121, 57, 126, 80, 32, -12, -53, -52, 73, 19, -56, -106, -83, -79, -30, 40, 81, 49, 88, 92, -65, 51, -77, 61, 32, 50, -85, -98, 6, -110, -28, 95, 84, 123, -33, 50, -28, 122, -16, 95, 56, -122, 18, 17, 8, 91, 0, -71, -63, 8, 105, 103, -46, 115, 87, -20, -73, -119, 89, 98, -16, 66, 116, -81, 100, 107, 16, 73, -30, 7, -114, -81, 10, 23, -11, -103, 86, 86, -126, -68, -46, 40, -64, 78, -125, -44, -14, 3, 56, -77, 108, -90, 27, 4, 29, -81, 122, -73, -127, -88, -72, -50, -65, -115, 123, 118, -127, 68, -70, -83, -43, -54, 96, 54, 14, 52, 88, -3, 31, 41, -126, -102, -81, 47, -28, 44, -23, -44, -15, 33, 4, -66, 103, -84, -37, -111, 18, 59, -104, 40, 86, 3, 87, -55, -47, 78, 51, 123, 64, -110, -8, 2, 30, -37, 60, 53, -66, -51, 97, -97, 81, -106, -64, -41, 58, -72, 10, 52, 55, 78, -67, -54, -90, -50, -3, 110, -71, 95, 98, 78, 123, -60, 26, -4, -42, -21, -30, -116, 64, 0, -46, 105, 27, 72, 64, -60, -17, -93, 126, 31, 96, -107, 124, -14, -7};
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
    msg.setTimeStamp(0.863401075537778);
    msg.setSource(1289U);
    msg.setSourceEntity(57U);
    msg.setDestination(50563U);
    msg.setDestinationEntity(132U);
    msg.plan_count = 21796U;
    msg.plan_size = 2898910832U;
    msg.change_time = 0.07940926286805239;
    msg.change_sid = 51110U;
    msg.change_sname.assign("EROBZKIYGYODEVESBDIRVMMZAOSAIXWZVSEBMYVGNLQCAQLWSGUGCPDPUHNPNFRQGEOCHJFSSFPZIAVJXPXSPLPIHIDTGRJEJXDQCKYONELGNNFNWPS");
    const char tmp_msg_0[] = {110, -117, 8, -81, 49, -111, 10, -98, 98, -30, -98, -128, 40, -77, -35, -125, 69, -79, -24, -45, -79, 59, 124, -38, -120, 121, 5, 112, 54, 24, 95, -16, 62, -1, 81, -115, -105, 113, -43, 6, 15, -9, -74, 121, 30, 11, -28, 78, 99, -47, -111, -36, -12, -124, -70, 100, 20, -98, -128, 95, -16, -87, 27, 43, -81, -106, -109, 23, 57, 117, 80, -104, -44, 21, 39, -21, -83, -61, 22, 54, 73, -73, -22, 59, 20, 118, -25, 9, -114, -42, -120, 106, -10, -104, 118, 101, -10, -26, -26, -13, -52, 6, -127, -78, -105, -80, -80, -24, 79, -105, 72, -65, -72, -126, -10, -5, -47, -24, -87, -113, -41, 26, 124, 126, 19, -114, -118, -44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MUYPESWAIWCJPGAFTCLTCUJEGZWIKCZZIROPRKWNZRVQUHOGKGDMUFBZOLUVAQSEUYNOBLPRVPGGUNTFFDQRJOPPSDLDIAVCCNAFSFBWMKVKFXHHXLTEOFXWHWPNKIKKWBUHWYHLOSQBYYINLMCXQVTXRWTRDJNMQXRGCHHZSTOZJYBJALPCPERNMJMQEQHVEVIUZJIBBXJISQYNXVY");
    tmp_msg_1.plan_size = 23833U;
    tmp_msg_1.change_time = 0.9931436211780779;
    tmp_msg_1.change_sid = 35981U;
    tmp_msg_1.change_sname.assign("XTZQZCPWYHPJLGXP");
    const char tmp_tmp_msg_1_0[] = {86, 97, -75, 65, -45, -100, -57, -2, -108, 123, 36, 19, -20, -46, -78, -78, -17, -121, 31, 46, 114, 77, 106, -80, -3, 38, -61, -25, -105, -25, -62, -23, -104, 73, -88, -61, -65, -27, -31, 62, -88, -96, 24, -8, 120, 98, 9, -68, 14, 50, 33, -64, -110, 23, 56, 53, 105, -35, 51, -28, -89, -7, -105, 47, 7, 112, 97, -46, 60, -2, 29, -81, 117, 115, -30, -105, 74, -64, -75, 3, -92, -119, -18, 33, 4, 60, 117, -127, -79, -121, -34, -1, 118, 116, 68, -124, 41, -40, 51, 58, -1, 81, 81, -105, 125, 100, -48, -104, -59, -16, 60, 27, 10, 119, -16, -47, 95, 27, -8, -96, -28, -54, 3, 18, -126, 100, -98, 88, 43, -83, 49, 92, -13, -69, -103, -26, 111, -62, -91, -126, 52, 4, -123, -43, 39, 57, 28, 42, 6, 118, -107, 15, 78, -95, 77, -59, 123, -16};
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
    msg.setTimeStamp(0.6201982550638059);
    msg.setSource(32367U);
    msg.setSourceEntity(229U);
    msg.setDestination(57113U);
    msg.setDestinationEntity(136U);
    msg.plan_count = 42527U;
    msg.plan_size = 1906708842U;
    msg.change_time = 0.3584916740799313;
    msg.change_sid = 35805U;
    msg.change_sname.assign("LLHCTUBDLNEYVYBPJIGSDOVRTXUABEHQYKMXROFFCTQYMTIJJGTPRVQQDOEGVKEFIIZPQBCNFYJSQCIEMEYNUKUJNZHPGKWLXYLVJSGNCDXYNOKATPWHMGUKXMIPSZWKILRFOWGVOTSBTUBKLHMEGASIHTLJWLCQMHUBFHZPJQXZQAHNAXOXNVWSRPOVEDZJCNDYKAESRWNUGPURCIDBDVZSPMWIEWLO");
    const char tmp_msg_0[] = {-97, 16, -43, 62, -51, 83, -23, 37, 41, -127, -9, -7, 59, -67, -31, 51, -76, -89, 64, -124, 69, 30, -127, 93, 106, 17, -127, -39, 81, 42, -13, 20, 110, -53, -26, -48, 111, 53, 26, 2, -43, -46, 125, -35, -61, -83, -29, -124, -128, 81, -106, -51, -114, -122, -58, -15, -45, 106, 117, 50, -87, -35, 60, 27, -49, -111, 79, 100, 105, 82, -125, 5, 124, -99, -6, 2, 113, -99, 81, -127, 90, 119, -3, 18, -97, 121, -13, -111, 31, -67, 111, -44, 34, -57, 41, 6, 3, -28, -119, 122, -105, 80, 17, -51, 53, 71, 56, 103, -60, -67, -73, 121, -122, 10, 112, -122, 80, -98, -36, 83, -85, -93, 72, -31, 38, -84, 115, -2, 57, -15, 31, 103, 74, 113, 14, -57, 48, -98, -65, 94, 42, -34, 86, -116, 12, -43, -31, 39, 8, -102, -36, 50, -90, -119, 70, -71, -86, 2, 102, -97, -15, -116, -87, 24, -44, 58, -63, 106, 47, 105, -105, 121, 49, 66, 123, -78, -61, 98, -63, 96, -23, -37, -111, 104, -114, 53, -82, -112, -25, 38, 31, -113, 58, -65, -81, 21, -63, -105, -32, 11, 15, -24, 65, 74, 38, 62, -73, 91, 1, 94, -52, -114, 87, -119, -35, 112, -83, -51, -86, -41, -22, -116, -48, 102, -125, -22, -6, -67, -11, 49, 61, -46, -37};
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
    msg.setTimeStamp(0.6733342811970959);
    msg.setSource(22591U);
    msg.setSourceEntity(25U);
    msg.setDestination(45330U);
    msg.setDestinationEntity(208U);
    msg.plan_id.assign("KBGKVXXZWDZNYYKBEFHNCLZFPAEEZBJUYGNPAHNAAMLFJVXTCDRWMSYIKSHYLFILSHJFVFMMXIBQNISJEPEVRZBEXUQSFJWNAXEHZUGWOCOORMRXNJBBJHQEGCCOAMRTTIRGDTXYLWQMFQUNKFDNGUTSFVAGUPLEBSKQOOVRQUJWDCHAPDYCLIILHZPOZYYPGO");
    msg.plan_size = 11874U;
    msg.change_time = 0.8994217126531701;
    msg.change_sid = 62160U;
    msg.change_sname.assign("AZJKOOIHLURVWDZOPKXAKFFNFEYGJVEFZPXNSLMINAMIAFOYCOJBMEJMJBUPTQXOXCVYQCYJBAJFJHEQCMMENKKDWHAYRCGGTNICBRBSYQOAPSZNAGQBHRZZMQNWHGSCTTPBPIXPHOXDHZGGBYLYXC");
    const char tmp_msg_0[] = {95, -48, -115, -76, 87, 108, 84, 28, -116, -106, 80, 97, -76, -92, -128, -94, -20, -99, -90, 90, -51, -126, -115, 91, 90, -75, -71, 8, 34, 32, -43, 121, -125, 46, 30, -23, -60, 121, 88, -80, -17, 56, -119, 43, -47, 59, 60, -117, -77, -99, 90, -82, 70, 10, 107, 61, -121, 25, 106, 30, -43, 116, -77, -127, -78, -89, 66, 85, -111, -62, 114, -116, 116, 112, -69, 50, 81, 47, 26, 118, -39, -55, -1, -51, 112, 78, 103, 47, 74, -57, -104, -76, 95, -93, -127, -32, 44, -104, 96, -35, -30, -64, -102, -35, -88, 92, -116, -107, 36, 39, -79, 74, 75, -97, -126, -59, 72, -89, -117, 19, -46, 86, 65, 96, -67, -46, -67, -114, -88, -31, 21, -121, -76, -116, -10, 72, -124, 51, -2, -126, 51, -63, -128, 59, -115, 16, -54, -38, -86, -72, -115, -49, 65, -102, 23, 64, 123, -85, -80, -11, 78, 32, -120, 56, -104, 94, 80, 46, 111, -81, -83, -9, 32, -117, -19, -29, -18, 15, -15, -58, -124, 112, 33, -41, 32, -94, 31, -75, 78, 15, 6, -111, -19, 15, -49, 77, -82, -127, -42, 90};
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
    msg.setTimeStamp(0.6404933336829617);
    msg.setSource(48363U);
    msg.setSourceEntity(36U);
    msg.setDestination(64479U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("YWTBXAXGMVZEBCYKFDSWFEZYBXSVRNSRXINOIQBPZTQTFQTOGWYOAWHHZUAPQRCOHVLEUNMOVOGBMDITJTMHKMIPHNVHTCYLRLARJFHJLWYNODZPUZIHRAYKGWBZSUKDWEOEQCG");
    msg.plan_size = 8979U;
    msg.change_time = 0.6655856763455704;
    msg.change_sid = 51042U;
    msg.change_sname.assign("OJAYVLKYVQXKRB");
    const char tmp_msg_0[] = {27, -8, -8, -22, -46, -103, 12, 93, 114, -110, 19, 108, 81, -93, 70, -112, -93, 8, 8};
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
    msg.setTimeStamp(0.8289121969206809);
    msg.setSource(25292U);
    msg.setSourceEntity(22U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(120U);
    msg.plan_id.assign("GKXCONTJIBWFKATCLCCALEZTUYCXYJUIWSJZMHAUPLZDKAIORSPKYDBOJGEAEYONPICKQRISZUUMZUMFFAUJPJGWOYDGRFXKXWGABPJHCXBJKVVGMLWDSZEFPROGSIELTEMFFHYUNEAZSDMWNZQBTNYAYVVKKVSWLLHPKQMVD");
    msg.plan_size = 40366U;
    msg.change_time = 0.4871626591824044;
    msg.change_sid = 47896U;
    msg.change_sname.assign("UTSYGIGADCMPLVSJWKAJGZLNAQXNFBEQQMZBXEFEYALEDYIOGWYGUARBHOGGYSVFIHVDMIWYBTBHNBSQHNEJKLKIMFFITXOSONYPBPPQPMZPDHNTNRAERHPZCAULTKKHVRTJNVZRQZTSZFDMOJAWWBXS");
    const char tmp_msg_0[] = {-72, -10, -100, -76, -86, -42, -70, 23, 73, -22, 19, 33, 113, -128, 1, -64, -7, -29, -98, -52, 47, -30, -63, -12, -73, 80, 84, 5, 110, -2, -46, 101, 26, 43, -71, -78, -64, 50, 11, -17, 121, -109, 69, -99, 119, -108, 123, 89, -121, 95, -121, -73, 38, 24, -74, 60, -9, -115, 23, 20, 60, 93, 36, 77, -41, 111, -72};
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
    msg.setTimeStamp(0.35754282018262484);
    msg.setSource(53913U);
    msg.setSourceEntity(162U);
    msg.setDestination(12945U);
    msg.setDestinationEntity(238U);
    msg.type = 199U;
    msg.op = 37U;
    msg.request_id = 33374U;
    msg.plan_id.assign("SQKUYOMMPASGUCEAPWKRCVLUZFMYJVSJYNGTOLBXFHXFFYCIVLZVUXIDPREEXLZPIWYAUOJBUIUCJHQUKZIMGJETXBOMNFPEVNSMSONDHNQXTULBVKRPQQELJLTJGNDKAMQRSTHCDWXVOELWAOBREATODMKHVXLQPRMZCGIQJGBPXRRAPCZDYDGCFDIHJBFCEZVWQSKSIDNFFJBNHZTHMNN");
    msg.flags = 33616U;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 102U;
    tmp_msg_0.clock = 0.34638970901235533;
    tmp_msg_0.tz = -98;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SPTUSWHFQRQGBAOGULRTAATCXJPJBFZCSFKECOSQUVDJOQNPMUZMLRBSJDMLIVOVHZLKGWFXYPDPBVWIGHJSULENWGTRVZIV");

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
    msg.setTimeStamp(0.7669265194025403);
    msg.setSource(25358U);
    msg.setSourceEntity(115U);
    msg.setDestination(14802U);
    msg.setDestinationEntity(216U);
    msg.type = 36U;
    msg.op = 195U;
    msg.request_id = 54239U;
    msg.plan_id.assign("EUUAUHXLXJRMTUQHCMXIPIDEHEWWQKOFZUTOYSWVZWRZQPKHPAKTPQVQPGIFAJFRTMWKDXRLLCJLBGNHIKINAATEYLWCFFMVROBSESUJJCCSBWOKEKQLNYVLVRZNTJVDRYNQXTUKMGYYOGQSGISBCEFKZMHBWSOUMGRDVZIDTGBZBNTCILHOPDEIBCAAYIJOMPC");
    msg.flags = 61099U;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7621147290102829;
    tmp_msg_0.lon = 0.6998640245256446;
    tmp_msg_0.height = 0.9986501800113187;
    tmp_msg_0.x = 0.5928528854606576;
    tmp_msg_0.y = 0.5440259850211198;
    tmp_msg_0.z = 0.05704412022183125;
    tmp_msg_0.phi = 0.5142112221667929;
    tmp_msg_0.theta = 0.5121172353679307;
    tmp_msg_0.psi = 0.5415976990800484;
    tmp_msg_0.u = 0.4252831131960618;
    tmp_msg_0.v = 0.3632530407007668;
    tmp_msg_0.w = 0.6946398249963177;
    tmp_msg_0.vx = 0.11708880550138734;
    tmp_msg_0.vy = 0.6369960344414333;
    tmp_msg_0.vz = 0.6751746113063003;
    tmp_msg_0.p = 0.37814096247561435;
    tmp_msg_0.q = 0.3825382373601567;
    tmp_msg_0.r = 0.8893640451866965;
    tmp_msg_0.depth = 0.24666592265243936;
    tmp_msg_0.alt = 0.4768511557560806;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("INEZVUFTFOGPUVOIRPOOTQVFBJJDOBTIDHAKGGACKVPYLBCEVDUCJMNOSSQZUZHOEFSAJLNJOULWOIDVXQVBNHUXDHBCNWDZXJZGAYQEYZFJYZPRDWSBNWCDGYVKMIHLRMXQBA");

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
    msg.setTimeStamp(0.6508445742144121);
    msg.setSource(9028U);
    msg.setSourceEntity(234U);
    msg.setDestination(47508U);
    msg.setDestinationEntity(187U);
    msg.type = 0U;
    msg.op = 239U;
    msg.request_id = 5403U;
    msg.plan_id.assign("NUERMDRWGUDGNGRIQBLZEXSCGMNNQBCMZCMRBVWLLWGVBSETLYVGDNMIAJNXDUPEFJFWRERYRQBTFSBPOITQRKNPICCQIFPXUWUKZILVSGXKYCSKAOOHZMQIVTESIYMBUBNAWJOUOFCLSAMXVZHATWLSCFALDAVSEKGQISRHFWTOYEJFTKNJXYYJYEMDPAATUFCPPXDXOTPKZQHDPAXIHUVZJTGXHVVKDPNDHHKHBYGJRUZHM");
    msg.flags = 51912U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WWPARQKTUASSXIHHFBLDWRECKFUEYWZLKHGXFERBBHAEKBAZQYSLJJQSIWMGRZPLDFHQHTQCOJGCCSAOUZKUPYDOAWEPZFEMMFPUIUQDOCCBWVQNRXNDJJESZ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PLMTBBTBFCBPJAYQCTCKGKCTYIDXDRULAQIINOAI");

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
    msg.setTimeStamp(0.715347259178818);
    msg.setSource(6201U);
    msg.setSourceEntity(88U);
    msg.setDestination(41086U);
    msg.setDestinationEntity(47U);
    msg.state = 136U;
    msg.plan_id.assign("KXEKHYZTXNSFWSZQMGHCLNWABBBGVVAOWSLQOQBJPFSIFMWOQREQNJILYKVDXCTCWPGXIQHZEZFDJLXCLJUMLXZOJUUDNKMVCOPDMKLFXRDRZAMYWTTBEHPGAKUJBEAEUWYTQEHZ");
    msg.plan_eta = -144187875;
    msg.plan_progress = 0.13230463539622794;
    msg.man_id.assign("LMBEWZKNAWDDOZIHWAFCUSXSBVQBUEFVLUAQQOMKZQGNRSRGLVSEGZJSPCKVOYLH");
    msg.man_type = 232U;
    msg.man_eta = -538698915;
    msg.last_outcome = 87U;

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
    msg.setTimeStamp(0.9867201317244568);
    msg.setSource(59912U);
    msg.setSourceEntity(191U);
    msg.setDestination(19477U);
    msg.setDestinationEntity(90U);
    msg.state = 25U;
    msg.plan_id.assign("UTRRAICJXMDOAOCIRMZCJIBNGQEEGOIEUFTDYHKAQVJRPOXKPOAHDLBAFXZJAOQGCDTYQNEZMWQCLSLKPWXIZVUWDYSXYGXVHWNXLZWWUTTZRFHMMPKAXFSNVLUWEBXLYBFEKILBDDJCONGYHVANCRBJFVOYGSPK");
    msg.plan_eta = 1015393698;
    msg.plan_progress = 0.9220981139798544;
    msg.man_id.assign("VFBKPCDVISLIYOTJPBFACWLAAOLUSTTKCJWUETUHMUFXAMIGBOUZHCRXLEQMZYFXNBGFGTVHIQYCURNDYRSAWTYOOFKNJVDEVLYCUGRSLXDIZRVWEFDKTPXMBDKFENPMRSKR");
    msg.man_type = 36563U;
    msg.man_eta = 534774095;
    msg.last_outcome = 180U;

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
    msg.setTimeStamp(0.4979726712334862);
    msg.setSource(65348U);
    msg.setSourceEntity(31U);
    msg.setDestination(36128U);
    msg.setDestinationEntity(50U);
    msg.state = 11U;
    msg.plan_id.assign("KLAMKSFHEOETRGKNESBTCNPEAXSIZZWMDTODXQYCABKQPAMNYBVWSUVGNFIOQYPQTRRSMREVHZCIJFSCVOSUZVNMFDDQWEZUCHOLATGXAUKLULAMOSMCNSEVPNQJCAURRGYXRFCYYIWPIODBRGIYPKVMOYWJSVNIQUYUERQOUACGPTHIWZFZXTGEWBIZBHPGMUKNXGDBZPYJLJPHFLFBHHLXZLHLHWWDVGQITDRJJATWTK");
    msg.plan_eta = 363128489;
    msg.plan_progress = 0.03722234067252206;
    msg.man_id.assign("AIYYARVXOTFGUVMEYTNVQKSVERSRUDBASRZCXCVPMHBUGQBZGUMUJXGMTEORIWNOXHNBXLNISZTJSOHLHQPETEAEGINOFVMYUQZYWNKSGOWAWXFRDXCIZKFFPJYAHFGQDCDCHYEZBPORDOJUGXBIPHEWDPNSLHLMWLPYMQJIDTAFUT");
    msg.man_type = 30140U;
    msg.man_eta = 85866824;
    msg.last_outcome = 75U;

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
    msg.setTimeStamp(0.1324856815032891);
    msg.setSource(6150U);
    msg.setSourceEntity(205U);
    msg.setDestination(35406U);
    msg.setDestinationEntity(210U);
    msg.name.assign("HNRJZYGYEWPEDAETOFHYGELURILSSKAVUMXGJRZPCQZFVOULANMHTMGJBQFAOPXSXNPRCCDHRBNBQEEBUCYULUHAVVAWKZYOBDDRKBZNBKWPVHLJFIMJPDSTISTAAYIQXKOYUYNHPLPZYVIXNLDONMUJLFUFQOFBWQOIDKBVXNRTCGSZRIJTBCSGSGCVGDFSXKJIQQOMZVRZWWAWVEPED");
    msg.value.assign("FYNBHDGMPKOANLCGKLXSXSOIZAJXVKXWOYQEJPOGWHSTTSVLBFJXIHPLYQYIMYTGNBCQCJNVDZEIGXUMWBQSKMKHJPELRTUZMDHDOLRUMEVVFUIIIMNJZCTKKAFFVAEVJQCTUGZWDFFCRHXINKJNBBACZFAWYMQABSILOOMSNZCLWESQAYKPVRPPZFDAGEETPDZTBRUJOJUHWHGRZGBQRCPCRUWDKYQRIVRVEXFUNMUASOSXBWNW");
    msg.type = 151U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.42199243513211415);
    msg.setSource(65215U);
    msg.setSourceEntity(239U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(97U);
    msg.name.assign("DUGZFOKRWYEEHUJMOFAAKVMPMTROAVBZSXTGGIQDFOBEXKDXECQDHZFNAIPMDNZZIBQHYFRTKOQUMLQLJVRBBALWWWNMGTZSDYOBHMRSLPDCHIBJYJYDAJXSWUQCIVAPVNXXCLNFETWEUWJEENZLGGKFCGUSKWVYSHRQMAEXLEMNWYFHDLGPZSKITITCUTRZXJSKVNOTV");
    msg.value.assign("YMZYCYIPQJMGMNPTAUOJTHCFWKPVHEQNEWGHYDRBCKKBILYFBMQPZOIBZJQFRMPWHKPHNSFKIDBJHEOXTDDFUCWSINKCMUOEACTGQEZWNSDLAZPKHOOCAKKLPBJUUWFYTWZSRMQXUVHIYGRUVXTSGGRBOYSLEBXBINLOJOJAEFWTJRIFGIMMSCBVDQVXSAULEJZARXHSWVPALLXTCCIJXLXDWFKTZLNVNRDQGUTUEPAGQMSZFHNEY");
    msg.type = 243U;
    msg.access = 250U;

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
    msg.setTimeStamp(0.42609770504583355);
    msg.setSource(36442U);
    msg.setSourceEntity(143U);
    msg.setDestination(3893U);
    msg.setDestinationEntity(26U);
    msg.name.assign("GVVIQTKYMFXYFFPADYNLXIP");
    msg.value.assign("CTUBOAJNXYIVUSMMWIBMOSEAEIGAJOFFTOWXTOQBLRDZXJWQMLHIHLYPWJCDGZMTXEVFYDZBRBYSMEKMKNWFUKYHOLBJZBDWMUPPBAFMGOHVRCHYLEINDMVXLGRILSDWTGYQK");
    msg.type = 225U;
    msg.access = 169U;

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
    msg.setTimeStamp(0.07544562301950486);
    msg.setSource(58070U);
    msg.setSourceEntity(221U);
    msg.setDestination(35060U);
    msg.setDestinationEntity(241U);
    msg.cmd = 145U;
    msg.op = 51U;
    msg.plan_id.assign("CDUOODICHGVQFNTJVRNMTGNBYMHCHE");
    msg.params.assign("NHOBAAEXXOIHVXQDHHYWXWPPZABXFNTBGVYHMRHGCEUDOWZGNHMPLMNTWOYVJPGDQUTGKWANLTQJBGPVZVFNDAJQMRQDYKYEXCSKHSUOCXCUBCNURJWFZLUEOFGGPKSKAJMZZFDJEUASTICZQETBSLGMSIRTFLGOZWLIWSTEFRYVYNICYILFSQCVMZRKIHISDRDUVQBREYQKDJKMRKNOJEBNKXOUDSTOPPMIBBPXAWYFMC");

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
    msg.setTimeStamp(0.876267795953562);
    msg.setSource(2704U);
    msg.setSourceEntity(245U);
    msg.setDestination(46770U);
    msg.setDestinationEntity(84U);
    msg.cmd = 179U;
    msg.op = 8U;
    msg.plan_id.assign("ZGFYUTVQZFWBETXAHNGMXZGXKKDRRKZLIGWVULDXJBERGHHM");
    msg.params.assign("ZQDBCXZQWJYOZROOEDCEBBEXENHKZPFPIKWATGLRGZATGISLQEDIVZFJKYMHVRMNXVFWFHZUAYLSMGCPWFSDYMAKTIQLQPSUTBJGSGHKFTEPUNVGNGMXMSOECZSHJQKNDPNJLBTYWYDMWTVHFZNLFASGSLXEELGWYVUOXJ");

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
    msg.setTimeStamp(0.8205142921117566);
    msg.setSource(44108U);
    msg.setSourceEntity(229U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(196U);
    msg.cmd = 176U;
    msg.op = 168U;
    msg.plan_id.assign("DXFOYZUZJYKTXFCYSZNKJFATAJVQAIOXXVUNGTKXXRBSIJLCSVFOIUVHUURWLMVKJIZOLXRGBHBCRDVJNVELROMTYPMYNLQHMNOZPXAWDAMCDRFFRUPOITULLVMECAHIASHNYGFWIYHQYQLWQOQDOPJAYCDFHDREZZWMDUTSKJEKVDRPGXGWGPSAKPWOKBTWQBDCBTTEQBUEZFBNSWHITQMLNHNHVPGWSBXFJM");
    msg.params.assign("CJLWDMMBBTSHOWDGZYXRLPPIOJ");

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
    msg.setTimeStamp(0.8824567583648231);
    msg.setSource(15729U);
    msg.setSourceEntity(44U);
    msg.setDestination(58328U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("XSRPRPJIBXBOGDUQMKYHMWFBRDVYZKRLNPM");
    msg.op = 140U;
    msg.lat = 0.6281846973825526;
    msg.lon = 0.5948518535508256;
    msg.height = 0.9951814334453398;
    msg.x = 0.3262078113438398;
    msg.y = 0.7508901365534393;
    msg.z = 0.3119446685342425;
    msg.phi = 0.6953320605034436;
    msg.theta = 0.9414912155031302;
    msg.psi = 0.5886706102588223;
    msg.vx = 0.4954165951361871;
    msg.vy = 0.8281053942587006;
    msg.vz = 0.3404421718828802;
    msg.p = 0.48200576606878875;
    msg.q = 0.9514871834427193;
    msg.r = 0.998155504744525;
    msg.svx = 0.9977347208621122;
    msg.svy = 0.6002051890681929;
    msg.svz = 0.17052513140835335;

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
    msg.setTimeStamp(0.12069860161713164);
    msg.setSource(52633U);
    msg.setSourceEntity(140U);
    msg.setDestination(57877U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("EEJTHMHUIDJUPBAILOCMOBIHTOYKHRZIFXADVEAZDNQTTVEPJJYGLRRBAYDGDCMFZXAZMMXQPKZHVNKEBINAWURXBCKHKAYULAGPSZOSUWRQUQKSCSOPQFNKHEBVJSWKWRFAIZNTXMMJDQWOCYYYYLZBUWWEHBGFWYIONDPFGRLVUBTQNIBSPKCPLNZQZGUPFFCNFASTXLOLVRD");
    msg.op = 130U;
    msg.lat = 0.8173945667364622;
    msg.lon = 0.2304916271982569;
    msg.height = 0.04769242379124783;
    msg.x = 0.15028852429588724;
    msg.y = 0.622584876056874;
    msg.z = 0.05268978669723545;
    msg.phi = 0.03599681829654011;
    msg.theta = 0.5250303671475629;
    msg.psi = 0.5677618042924538;
    msg.vx = 0.083086772861384;
    msg.vy = 0.45555202570260944;
    msg.vz = 0.5795843707905347;
    msg.p = 0.011543195137608375;
    msg.q = 0.8290285885524178;
    msg.r = 0.24765414007318853;
    msg.svx = 0.8388305365971793;
    msg.svy = 0.24140962644461117;
    msg.svz = 0.5131746619734545;

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
    msg.setTimeStamp(0.06992027269505918);
    msg.setSource(22827U);
    msg.setSourceEntity(67U);
    msg.setDestination(8673U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("WLGWAYZGYIPGQEWM");
    msg.op = 143U;
    msg.lat = 0.7620420824024293;
    msg.lon = 0.04304461969616469;
    msg.height = 0.9757829094427906;
    msg.x = 0.2797024924424305;
    msg.y = 0.0940780352016447;
    msg.z = 0.460748077590019;
    msg.phi = 0.4558489079358735;
    msg.theta = 0.8733194871175748;
    msg.psi = 0.32501946064312237;
    msg.vx = 0.6121143252030584;
    msg.vy = 0.1502381300757737;
    msg.vz = 0.6283591236337112;
    msg.p = 0.8404332542843441;
    msg.q = 0.5570930821760042;
    msg.r = 0.45754118748509376;
    msg.svx = 0.3373330173958974;
    msg.svy = 0.39142179899509855;
    msg.svz = 0.2542648170064584;

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
    msg.setTimeStamp(0.30327861227524977);
    msg.setSource(3447U);
    msg.setSourceEntity(166U);
    msg.setDestination(830U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.9708117904437588;
    msg.lon = 0.5277004080829365;
    msg.depth = 0.7462138604989366;
    msg.roll = 0.3830795167135478;
    msg.pitch = 0.5320207512775917;
    msg.yaw = 0.8294958905983305;
    msg.rcp_time = 0.16378324141043832;
    msg.sid.assign("PYQNDDOVHPITCHIFTEEUGWERCNSENLSBWZWGXXPAQOXMRKOOCKXYDHF");
    msg.s_type = 107U;

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
    msg.setTimeStamp(0.28530982746393896);
    msg.setSource(22106U);
    msg.setSourceEntity(61U);
    msg.setDestination(26905U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.9713547588838525;
    msg.lon = 0.6176897221502543;
    msg.depth = 0.3051441274516353;
    msg.roll = 0.19904857841584744;
    msg.pitch = 0.9092591064951588;
    msg.yaw = 0.8213853964409021;
    msg.rcp_time = 0.663402766066768;
    msg.sid.assign("XZUHTVNTLBZCSGPLUEQJDYFBFKLRWHEEDCKAYZXQSOBHGKDZYMPUWELFFVKU");
    msg.s_type = 55U;

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
    msg.setTimeStamp(0.7620894199125677);
    msg.setSource(17650U);
    msg.setSourceEntity(164U);
    msg.setDestination(19032U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.14736597975551147;
    msg.lon = 0.5163681709358171;
    msg.depth = 0.483256245018426;
    msg.roll = 0.33172971446300425;
    msg.pitch = 0.676646719117659;
    msg.yaw = 0.9062462407396071;
    msg.rcp_time = 0.6129693691204036;
    msg.sid.assign("AFKDMHLQGYPTVXVQJTAUVRIURLAVIMHMHWDXCBETENCBGAOHWIMWBDRUPBHQBHOBYTLXGWTIXWCVMGYKNOLCRMDMXJGKMTHAGFOIVPRGYZNUOLQMSOEZYJEZWENZRFROEUKTSJNXSRFBDISYS");
    msg.s_type = 162U;

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
    msg.setTimeStamp(0.18865384983541766);
    msg.setSource(12825U);
    msg.setSourceEntity(146U);
    msg.setDestination(64077U);
    msg.setDestinationEntity(62U);
    msg.id.assign("RQNHLPQMEKYGIJZAOTTRPTJROZRQYASNBSDPIFUHDWWLRLSXLXNCRZEFCNMAPCRFWTSOKJJAOUDIGYAFLMCMHAJDIVALSSDKWYERMOTYHUWXNZFCYVXMJNWBHGTQTGQQYRWZLLVWNXKSJXFPCGBJWK");
    msg.sensor_class.assign("YLTJWMVPEGFXKYQOOWLRNKPXCFBLXETYOGERPAQFTGADOMBHJOHVRGDJHYGLEETGIAUVAIBLSBOUVGOSCAXKHIEQNPATVTTFGIAWVTBFDSXGMHLMYHNYMPHZWLZYCHLQMRMZWIWEZRJKSPVLNOQYQZTIOBKZKZIPUXXNIJENPONHWSGURNSCBSYQUJSEDUFBXRKKKNZILFNCRDZUABCJMBZWQDQDCPHKAIRAJTFQUFCWDFVXUS");
    msg.lat = 0.8754618226688443;
    msg.lon = 0.2053099708074455;
    msg.alt = 0.7520409559531233;
    msg.heading = 0.7991376140158287;
    msg.data.assign("GFWIZCRSYPQPHJNLIDLAOHAZWVPCXKWKJENYYUODWUMEQXQVHIKMFQWOQCMTLMOILCYSZNSAUNLBTNDJDFGDWJHSFZXPJETNBONRCUAAGPCRIAAJEBYUURAHZBUQEVLRZPCEBUGDNPUNQIVHBTFWHSSZYRTJYCFGZSLVIGMSWMKXYVHALFTZPEDQFPXRWXVGRYGSKTQBXOOMNQIBVJTRTYMMTECLXMLKKDGCKZOBHEXJKSDUJ");

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
    msg.setTimeStamp(0.2609187382269965);
    msg.setSource(17294U);
    msg.setSourceEntity(94U);
    msg.setDestination(23081U);
    msg.setDestinationEntity(112U);
    msg.id.assign("ZQDALGDOFEGVMRRYYKCGTKTABDPDJBHRKLTTWEABGSIMIWHKIURHSOQYPSZYNARWFJGTNTHJWKFMTAFPXFBCRYMAXZETELEQCYVSJSGDDEHRSHLZIMOKVDCONVPORGLUXUHCAUEHBJYUHQQUYVJNSWXRXZKNBMNPMQQYFPGKZNCWNDNUIJVWBUALOCTZSCLFFXZIIZHQKFZCVOAJWVIJAETOXOMJUYVXLKPQPLSG");
    msg.sensor_class.assign("JMGHIRAXRRWIRNELPFUD");
    msg.lat = 0.31854457030412286;
    msg.lon = 0.6530896436899034;
    msg.alt = 0.5574018814028147;
    msg.heading = 0.6651275429590576;
    msg.data.assign("MCCGXRKHTOSTXGBQRVKMACULEVENGDOYTSIUVGMJPKKVTJKYKCSRWBLADTPWLRQQUYRSTZLV");

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
    msg.setTimeStamp(0.8869361794543023);
    msg.setSource(13771U);
    msg.setSourceEntity(4U);
    msg.setDestination(58455U);
    msg.setDestinationEntity(69U);
    msg.id.assign("TMAIVWNLFVEHPYWXAENBRQTAKVQQANTAVJDAIPPHNWRXLJUVLTSQBMRCFGBCNIYBRJUOSGKBHSUDOTXWVKYUMSNSHKGDSPZTSDPFLQMHIEUEQTYPKZOFYXDDZIFCMCCJQHTKMPHKEDJPALODOFGMBRCRGEGVFKBALODWEGIVIJWQIXZGZYXCILXEBAMUCJAWVFZSBLUWRQRYRYFPUSDFKNZVWHERYHGMYUOO");
    msg.sensor_class.assign("ESWECIAGRMOSMRCDJVGUDNWTYINNAYBBNBQZTETGACISKHEZRIZKMUVBUYXDKQRJIPPBOMWPNQVHSYMCXSJEMZZIVSZLKKERQAUGQXTQDHUAUSWVLROWCYEDGGQIBYRFTDTYNVMGJQEZDOXPTFFOUCEHQVALROWWJIHVOVODHDIXSFNXJFNPBCDFLNKSYXTAFLOUZLBIMSVKKWJRWAFPKBXGELCUCZQOPUYAJGJHHRJWPTNLBAHMKMCFFH");
    msg.lat = 0.5662700632189663;
    msg.lon = 0.1266862138419499;
    msg.alt = 0.7000562519927006;
    msg.heading = 0.1331602642374493;
    msg.data.assign("KCAVHJJJTZNIVUWMUTTNHELHRHDPQNAUGNIZRSCGADQWNLBOFCKYDDMIISOKPJVIERPDECHCMTUGXVEJOWWZAITPSWCLQMLJQLTFNHVYPVISGAADQBUSYMRZYAXKPLJCTMWQWPHUTSHBYEAFJXHBYGTVBCLUGKXFBGORKTOBIGOPSUWRLRNFDFJKWYNXXEJXMIZGSDQPZQGMXOVKYDZFRCZIALVYXXAMVWOFDYCPZM");

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
    msg.setTimeStamp(0.5882745360031542);
    msg.setSource(57456U);
    msg.setSourceEntity(242U);
    msg.setDestination(4721U);
    msg.setDestinationEntity(55U);
    msg.id.assign("DLZZCRVYYLBPAICNRHPRUEFVENPLEXZQWNDQOJJDUGXCWXIFWDPSUVIEATZOCUXSDUCWJZWBUWQBVTPHESTKTHVVZKMCRGDMXBUMJVFJGKNNYIFLBBMEVMAQYSIRBMPSCXCDQBSCALRLZTXJJHGJPYMZYXGHHRMQUXPRXBCEPNWFHSIIKKFDKFROLJYZKVONTOIEEAYGHUONQZSNMTPGSFKAR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FDELUOUYEQDVODECVNIRWXQZBURBNVWSSHTPAQZZUDCHONRGXOCWSYLHGOSCAVIFMXTOLGZHSGWIPIFTRVTCPUKKELDIJOUTMQEDIESRJSFKYRPWIYLYXCJGIDKXQHGYHLFRDKTUJLTABCYSPNYQXUKCFWXAHRBMZQNZFWYGMZAKNNJJAMEYLABTGBAJTJMKUBFPKZCPMLVMQWPXCVZDPMHHD");
    tmp_msg_0.feature_type = 0U;
    tmp_msg_0.rgb_red = 144U;
    tmp_msg_0.rgb_green = 169U;
    tmp_msg_0.rgb_blue = 214U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7946339685484337;
    tmp_tmp_msg_0_0.lon = 0.7196894174668034;
    tmp_tmp_msg_0_0.alt = 0.5490174995303025;
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
    msg.setTimeStamp(0.0845685041331885);
    msg.setSource(8228U);
    msg.setSourceEntity(41U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(160U);
    msg.id.assign("NXCXZNNJPAVMKUAUDZBWTCBBOKXMMSSLBSCSSXYNYRFVUUAYJMIQLRCLFREFPDFTKYBIGFRJGCVHVEKVYFKIAWHPODGBYQVXVOCSZNNKOMZXATQQDKPWWPEIMCXHOXXUIIWLBXEJ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SBPMUMCTXTRKYCDBOWYVYLSFRRWKVDEFZVWHNGAJAHJFBEBBPTKSGGSERGKIWAYVQTHXNSALXEQIABLYKEHRZEXUHOILEACDTRPPANRZLZTTTDLJCXDVOHNWFTZQEYILMFQVGGEKIPLMMZWCWQUIVYNFKBDMAFJYGZOZBYAGVWQCQJXVCUADSDNEMIIXUXJJGRIQOWOHUZBNRQSCYPXMXOJFFNPQBCHNUPTFSIOJLUSVKNJGUOH");
    tmp_msg_0.feature_type = 68U;
    tmp_msg_0.rgb_red = 135U;
    tmp_msg_0.rgb_green = 13U;
    tmp_msg_0.rgb_blue = 125U;
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
    msg.setTimeStamp(0.5154500642789445);
    msg.setSource(16498U);
    msg.setSourceEntity(149U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(154U);
    msg.id.assign("GUVWLQRXOCMPPPCHUUASHRWVIPOVUEVGLREICFNZTEQSSITWMAEYAOBUDPFUOEKZPBFXCKUWANDRRQSBXKLZLWBFXBHDFMEXJIQFHY");

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
    msg.setTimeStamp(0.36974603556745367);
    msg.setSource(10489U);
    msg.setSourceEntity(125U);
    msg.setDestination(43500U);
    msg.setDestinationEntity(228U);
    msg.id.assign("QAKZEOQJDXPKNBKSJXTFCCOSDISZPSBMWJLOHNLIYYVUJFIBODYRUBXZAWWPADGEGKAVXRYLRWLCZEWZGFIMJWWWYTCSHOTNPZGHRNMKCATNGHEVVKTMTNAQJQMQSOJUGERTOBZRVXKOKIUMICLRKFPFHAAEJMDIFLFQNLDGCUYGRJHLCTHL");
    msg.feature_type = 93U;
    msg.rgb_red = 47U;
    msg.rgb_green = 45U;
    msg.rgb_blue = 48U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2803556805321221;
    tmp_msg_0.lon = 0.36744659202646046;
    tmp_msg_0.alt = 0.38163700979484183;
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
    msg.setTimeStamp(0.1177148560763519);
    msg.setSource(63740U);
    msg.setSourceEntity(32U);
    msg.setDestination(27571U);
    msg.setDestinationEntity(16U);
    msg.id.assign("DBPDTMLWXTTDYDHPKFWESKMMWERJPIDVQTQVEQKACNJNDXSGLABBQNBOZZWNOGPWDVHOAWWCUZIIUFLRUSILGHCNMSHUAGCXBYVROINLDPFSHFXRIQOKIKAZTYLXPWSBUEVCHQQFZVCPGCADRGUIRHEFGEXFJMQJYHZAQYJUKF");
    msg.feature_type = 42U;
    msg.rgb_red = 75U;
    msg.rgb_green = 232U;
    msg.rgb_blue = 224U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2665563764677902;
    tmp_msg_0.lon = 0.7580747755229476;
    tmp_msg_0.alt = 0.37891968431205736;
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
    msg.setTimeStamp(0.45224841613484057);
    msg.setSource(30102U);
    msg.setSourceEntity(25U);
    msg.setDestination(58853U);
    msg.setDestinationEntity(98U);
    msg.id.assign("BBHWYDSKKAUTNMGXYMZUAIKWJSOWQZRFLNCXXEAPWGKRRWKEHYHAPEODZMFLUJNVQGESBFDIFEWXPGTBITMRUFBXYQXJHTZDMNRZDLNZJRZVHOAIEOWZPUSPQBCVQTHNBCWLGBYKCPYLEQ");
    msg.feature_type = 6U;
    msg.rgb_red = 35U;
    msg.rgb_green = 5U;
    msg.rgb_blue = 144U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.48882129322037415;
    tmp_msg_0.lon = 0.006187331842621213;
    tmp_msg_0.alt = 0.20562783669506335;
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
    msg.setTimeStamp(0.6815014104808933);
    msg.setSource(17976U);
    msg.setSourceEntity(239U);
    msg.setDestination(15362U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.20077831328435092;
    msg.lon = 0.6775920759218729;
    msg.alt = 0.8337154678856762;

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
    msg.setTimeStamp(0.6285021169375001);
    msg.setSource(29008U);
    msg.setSourceEntity(216U);
    msg.setDestination(51695U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.9355309210901569;
    msg.lon = 0.48957509527598886;
    msg.alt = 0.08823370256350105;

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
    msg.setTimeStamp(0.5757673426294286);
    msg.setSource(57451U);
    msg.setSourceEntity(173U);
    msg.setDestination(55327U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.8718953290706127;
    msg.lon = 0.46579657762564997;
    msg.alt = 0.3341734766900072;

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
    msg.setTimeStamp(0.4918026237223442);
    msg.setSource(42619U);
    msg.setSourceEntity(106U);
    msg.setDestination(7368U);
    msg.setDestinationEntity(212U);
    msg.type = 149U;
    msg.id.assign("ALWADKIVBTNYQIBYRPXUXXWMZUYXMEFTNQALAQDLQTLCBRRBHLPCTVGNSAVPVEZCECGBQGPMNVXJTJFKRLURNBXVDQKDJGASTYGKLKFHSIGKCATHQJACSRUOISMGQNWUWTUSPCPOTVKRYWYEGIIRG");
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.4191198537664941);
    msg.setSource(4191U);
    msg.setSourceEntity(254U);
    msg.setDestination(30997U);
    msg.setDestinationEntity(148U);
    msg.type = 121U;
    msg.id.assign("BQSBGQNREBZRTUCAESQKGKZDXSCHZWWTJZRTVVACTLFHFFQFAFRYJSYAPYRJINXUVOMWUAJMZHUOPITLHLIIFLZMLOWLSBYOUCOCWKEHUYDVGFGNZLXIKXPTDLWJAHLDORYGWEXDOHPNTFEZBQMVYVXDTJJSGARPBCUWCGTNRQGDOOWPSWAMSQDCUIEEJXVKGUNHFRVNFCGMBMPCMYKBKDBZESPNHJIAQNKBIDAMVXXUMVKRKTPEEQXIIH");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.9034067071298911;
    tmp_msg_0.x = 0.5519030151312544;
    tmp_msg_0.y = 0.5376072124238204;
    tmp_msg_0.z = 0.9255633949756015;
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
    msg.setTimeStamp(0.8433212985200177);
    msg.setSource(61273U);
    msg.setSourceEntity(168U);
    msg.setDestination(29273U);
    msg.setDestinationEntity(53U);
    msg.type = 124U;
    msg.id.assign("SWPATKVSJQUNPIFETTUPUZQEDGFNWHEAPEMLJKCYHTGWQSIPVXQQDEICBJKTRRYZRAHOBRXGHLZGBOOMHODKSWFOPCMGCFHNXSVFCZZQXUWNYGFUDLLZKRUJHMIAQDHWVNKXYCPVSVUNCJOOCDYXIMEBKQSJDNRMRI");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.3829996103943415;
    tmp_msg_0.y = 0.8900967964185633;
    tmp_msg_0.z = 0.7840695828438119;
    tmp_msg_0.k = 0.7097099769832163;
    tmp_msg_0.m = 0.022887776009670846;
    tmp_msg_0.n = 0.10259710349487328;
    tmp_msg_0.flags = 63U;
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
    msg.setTimeStamp(0.5001263395726108);
    msg.setSource(39852U);
    msg.setSourceEntity(35U);
    msg.setDestination(31418U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("REDGJOXZGGQOWYVWOSBZKTLULWRLRLFTAQMIUSMGHBTGYHZVGSDBVYWZPFZXRNQSRBKTNQMQLCMCWHLIVIEFICMJNHWJICYMEEAOPUVSMQYRCHKOHNLKBVOAPIOZKYDFIKNANUKUOYIWQDUTWBDJDRGNSTPEZPJIHPZVATQFPLEDWAEYUSGXTSCVDGXTAQDEHJAHKKIGBLFDXXMJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PNCWJRPHAGLCMYYAMOTMINNJAOQOEDRCJMUYGDJQXAWGVOVLYGDYZOEJZRKBZFQLTDDYUPJNLVJUUXSUQGFOINXHVPSAMJDABLMPDGKUMZQEGTJIKPPHJQARFFCXOMEFHTCMQEFKTCZAOCFNXSWZTWPSRWKLGSWQIZVCBXDHZBTNILRMTHSIVWSPXIBVYNSGYUGFHQLZCRHVOYBEAENCZQBDWVE");
    tmp_msg_0.sys_type = 133U;
    tmp_msg_0.owner = 20744U;
    tmp_msg_0.lat = 0.6251131234035864;
    tmp_msg_0.lon = 0.7874862210951017;
    tmp_msg_0.height = 0.7566274639950663;
    tmp_msg_0.services.assign("LKFWGRNBTUPQMDHJUOVKEQCHCMIFVDDHKPL");
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
    msg.setTimeStamp(0.14912789095436618);
    msg.setSource(36135U);
    msg.setSourceEntity(50U);
    msg.setDestination(40858U);
    msg.setDestinationEntity(169U);
    msg.localname.assign("BOWUGUQVXBYCQMRAZGNHNFCEQEWRFSKIYSJXJCJACLNGJDEUGVDTNYYJJEKAYKKPSXVNQUCSZPUHCMPFEEFFDKBXCQZMVPLMKNXJOSZRYXQMIHTBBTRRFHHJTVOHNMIIPLTBBNSZAWLRMWMFDGKKPZQPXRKDUDTDKROQEDJVTAESLLSGVCOSFXWUDNZHXQHULXBVIQAZMVAYCCGWTBWJSRY");

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
    msg.setTimeStamp(0.8358136680684721);
    msg.setSource(59814U);
    msg.setSourceEntity(76U);
    msg.setDestination(62646U);
    msg.setDestinationEntity(114U);
    msg.localname.assign("NXORTBLURZBHXJIOQEPCPYGLSGKVXQHGWIOWOOSURCBJQSMNYZCOWHVPEDOHGFRDUSGTTMWEUGMJRREULZXVZNFKQUEYMJNBGZQKYLWBIENCLKANAHJXFUKDIZILQLYZDBSTAPXSCFDZEWMZKILEPQDUYBIQCDPKJVFBPDVSFOYS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MVQZJSXCSXDUZJCKTYMKGIJBMHFTDCMITOCFUEXRWFFRTMPSBRXUKRISLZEKAGWDMUZFDGWTUYVFARSAYOGBJSOKSYYEBOBPVEDHDLPGGRTOOQYAJKRWTOBZBEFKOCPWRIMAPANJU");
    tmp_msg_0.sys_type = 81U;
    tmp_msg_0.owner = 59968U;
    tmp_msg_0.lat = 0.20664607635361687;
    tmp_msg_0.lon = 0.6115262117123115;
    tmp_msg_0.height = 0.3982282545601522;
    tmp_msg_0.services.assign("YUBMMJOZSPTKGNXBDYMQFFYLOAHLDHXWNDZQELCZEEXJVBGECLVQFTDZSKKFRJRBPAEKTPAYDCINTPGTSCRJVHKQUHNFFAPNIUYTYBSDMXPOZYZPGIIXNJGCNTVVWJWFKRGRYKJGYPUYIVULXKDBCIMJIOEAFEAUVXLSZLKWMNCQXSIWOZCHUGQOOEEMQWTRVLCJJXNOLQS");
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
    msg.setTimeStamp(0.7983832225757181);
    msg.setSource(3006U);
    msg.setSourceEntity(153U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(221U);
    msg.timeline.assign("LPUAGMVYPNDGGCLRKEQVKBUYXYLODZHUNDNJHTORQJEUPJKGMKQIZLABAUPTAYYBGJVZBQHWQQGPCSTARNTXVCAFRZKAIWSPOIXRQEFOYLFTCSVHHCDVRDEZIPMAABSQMFJQFUCEXBTZVXELRBBSKVYPGNEOIJSJWL");
    msg.predicate.assign("RIUGPIQLSNBJINEJOIXQGARVJLBTVNLHXLWXVASKFLOOMOFTBJETVKPALMUGO");
    msg.attributes.assign("BVUMDHRQMTVOJPULGJFAJKCWCLHNTICVUXKHEZTHAHRQDROTWSFOPBSPZUINFUPQBNLYPASMFEMWCFCAJRJLVAEDBFQMTAXPEAZJDGQMBQYIDXSJJEVCSUNZKSKIGGMYGEKIWKJPHBUIBRXFRZOXRVBLYPTWHNVDEUGTIQHBFGTZHAUGPFOYQQCYSMIETBNDDXWRLKRWXSYSKXDXVEZLLZO");

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
    msg.setTimeStamp(0.5101656002425087);
    msg.setSource(48597U);
    msg.setSourceEntity(176U);
    msg.setDestination(37794U);
    msg.setDestinationEntity(48U);
    msg.timeline.assign("SJLJCSCGZLMOGWTIXYFSCYVWDUJJXYADAFWLRUDVOAPJFMHITWURHLAHZNAYZEMIQCDTEXNIDZ");
    msg.predicate.assign("AZWMLPQAQWMZRIRKWCYUNIOBLGKPJJXXRZHKSXBBFEOCKNPHSFCNMHSHCBQYJHWRTEOTIQJFFLKJYKEJWVYITJELOTXZNIWZGZIAOHSJMNDBBLMGBTDBVKDITEFUVERSITOPAVPXRQXYXXGEOYRDCIEDBZHUON");
    msg.attributes.assign("JRMSJFCQPMXNODTHKMWLAVAUOWEHVHXQFNLBDFKBZMRDLVPVEXRUCXYSIYCGKGTVEBHJGNHARNPRQBITTOZWEWIMFFYZJNHNYOUZSODZPJOUMPCNLDCTKGTWJNIMPBDZHUEUMQCRYZXIEJSIVDEPWYLDJXHLR");

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
    msg.setTimeStamp(0.49614058402592986);
    msg.setSource(16495U);
    msg.setSourceEntity(117U);
    msg.setDestination(4429U);
    msg.setDestinationEntity(208U);
    msg.timeline.assign("DYDSIMCCLXWVDLOAMYSMVHFAEY");
    msg.predicate.assign("IEGBDWLIUOVMOLWXBALJXYAFFRPHKXIPFAAUYXPXVLPCAGJ");
    msg.attributes.assign("KYRQUGZPLSMBDGTNGQEADKZLPPMQYA");

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
    msg.setTimeStamp(0.7936583762569901);
    msg.setSource(25461U);
    msg.setSourceEntity(157U);
    msg.setDestination(63866U);
    msg.setDestinationEntity(207U);
    msg.command = 85U;
    msg.goal_id.assign("LWTLJBBYGNWEEUBMLLPMGTMXZWFGSYVFPACSRYWZGJXTPXQKXIGMCQQZVNSKAEKSZTXVHVFNPCRCAIRHJNABKZPOVDLNRLYVAODPGKQYZPDQFPKFHNWIJOBBXEVIUCKKTJLEHABGOIDMMOLIWFEJTH");
    msg.goal_xml.assign("WNAUTIKVVMHSAUHIFWZPSQJDCGDCLZJGDKDPONGKGJESTJGNVSGUDKJLSCIFWAWOXUEUQYXRXRXOYRWZPKYLBZOGVAETLKTXPGFNLXGYFCMWHBNQVRYSEVBCPBIIXLMGFSYMOVWNDEDZNITZAATJCBQBXMFTHHRZVJLTBRLJPHAFBNUFTYWODSMQOQCFKPHRUDKOFQUEMCEINYJOUYPMMYWQZDEIXLNVMHHAZO");

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
    msg.setTimeStamp(0.22186927184934446);
    msg.setSource(38084U);
    msg.setSourceEntity(203U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(50U);
    msg.command = 82U;
    msg.goal_id.assign("EUDYUVPXDKGZLUAYQDAWDHRVAEFMZYLJGLCZQLOVVBCXFVBLIISSTRZAXJZRTNBQOWCUZKNBQPEMPYISYFSEYJHSPQCPDYJHDCJCIXGGMRLOBJZEAOQTWOFJNKRNTAENHQXPMFWOCFOWSVQDHZKCGNAIAQDNUHMMYXZRGKWFUIUNFHAYVWTFJXHDENTV");
    msg.goal_xml.assign("AWNOBQINAUVDCPRYBTEGVMXVLBDJGBHBEGIUIHENPPDFZAXDISYADSITOVLWSYTMHBBPORRLOMVCMFNYHVXPAVZKZOJQZBWQROZREWQIMJUCKTCEWCFWVNNXIIZSSQSQZEOSRCECFCEIKGTCSABPFURFPWOUMUTUXHKZHSXTURXNYDPXLSEKHKFHWDJXPAPFNUGMDDJNKJOTXQLY");

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
    msg.setTimeStamp(0.7311896794490849);
    msg.setSource(60329U);
    msg.setSourceEntity(102U);
    msg.setDestination(39189U);
    msg.setDestinationEntity(198U);
    msg.command = 44U;
    msg.goal_id.assign("TLMSJUCYUKDSKQ");
    msg.goal_xml.assign("QBFWLTBHELGZDLKHZASOVXWUSMSDGEBTXUACOZHRVKFTODTMZIYQEUMCMCYDVXOJLTUDPHWVYRVGRIYOFYAAKNJHXSKBUQNRRNZNSYWJBQFSTHPICLEJEWJUMBKVOWPQGJ");

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
    msg.setTimeStamp(0.005156571341475402);
    msg.setSource(62389U);
    msg.setSourceEntity(208U);
    msg.setDestination(49816U);
    msg.setDestinationEntity(149U);
    msg.op = 87U;
    msg.goal_id.assign("AMEQRJZXTHXEBUSWVDZGVXJTYWIXREWOQSFNHHJUYFAUTRDBHWPEKPGBLQJLMSCJRZWLBFLIVCRIEMANYSPKICARVGFDIFODMGFVEPXMDOOTNLOMZKWZRECUFQOKNJJMGJUTMSERTCKOB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CLRGFWZOORZKMAVOCDRYHOKCEANNZJLCNPDKASNMNJOCSPPRBKXBDAHHBHKTIGAFFBWBIHJEWTQZDFSYJVDSTPLBETNFFIMQINVTCDORLMZHBYYLMUEXIJLYKKPTIPSWOGRFCYBEXYIRGDWJTKPHOTRUUVDVNGGTPQHCJGQGAXWWYZIWQIVDKCZWBGZLJQSPLZQMFVMVUVXUEXUM");
    tmp_msg_0.predicate.assign("FKMVZEHVZIBSLQTUCPUDEBNDOISMLJJCCPNWAJMJGDDBVKHCOLQSOFGVEKNQXCYTKZQRARKSXPSTWXMGXFIADYEVNUMWVAOUVMDNYEYNOWHVUOCXFHFIKUOACFREAUSLZUHWWIKWHMKXJGENLAYHZQPGISGDDCDZRLKBSOLHPOIAQPHJEXGBNWQIFJFZQNUXY");
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
    msg.setTimeStamp(0.9296132191610451);
    msg.setSource(22644U);
    msg.setSourceEntity(242U);
    msg.setDestination(9483U);
    msg.setDestinationEntity(234U);
    msg.op = 136U;
    msg.goal_id.assign("RZHPXUYQRQMVYNZVCTODIT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HUJICQUTSFFGDLJECLRRTQKRFOZJSZUHSHBBQHFJBCGTSUHPNKFPTQFSFBYLEEGPNETCWKZOVSCEHNBLNFORXONOICNXMTYRBPXVADGMVALJZIKMGPYCRHNYQKJGDFFEDBNXHKCXPGHAZG");
    tmp_msg_0.predicate.assign("YXYPGDFAFSPRNAHNRRMZOROTYSEZKTWXXLUWNZUWTMGVHCVNFMEOCNGYDOBZTSFJIZOCIBVRDFYEMBFXJTBAYOJUKSSEEXQVHWHDVLQUUZHWFQRCLDLWGOGBHMBZREAFVKADNVMCOKILYJSTGKECAQMIZMHKFCGIRWILDGLJEJJGQDCBATAJERPNVTCUOKPLILPMMHWUGTXBHWEZLXQKYKAPCPNJSQNXVUY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NSOUGEYNXNSNUZGNILBAYGNQDYWLTBQROILIYMMAZWKKOCMDFXMAGBCFVEASJSEKNIKEWCPEGAZKTJWCCDLWHPWXTMFUPOAHEOXXSIQXMDTUYQJRJCPPCVRBSJBJKAOHMRIEIGHIZZTSCXRHVOUDITYUHLSXLHNQRZWKAWYCLEOBEYVJFRGJKXSZVXPKFDZDAVLVBPOZPGSQMTTTGKFGNORFUIDFPNRLHHQQUVVD");
    tmp_tmp_msg_0_0.attr_type = 187U;
    tmp_tmp_msg_0_0.min.assign("SDJKGPXXAMJRGBVWOLAWZVHGIMEGWZAYOCJULUDGCTSELTQBPKPTMSYAZZHARVVDPKFMDURIVZFDXNBJLFQKEREFWHEKCASHXCKGEXRSGLBDYAZQSMVHLMBTWUGLJOQIMYOUQATWWOEOFTCYKBHEDL");
    tmp_tmp_msg_0_0.max.assign("EGAIYAXFUTRDPMUDWOKJWCZVVKDHGTCRNIZOEKDXTMLGKNAOEDZJLFOAXPZVRXSNUBSGLQWIQSKMJUCSITUHIWCCQVXCQTZRZSZNPXPWGJCGBZHXNPKKPYEWUMSPVPPQ");
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
    msg.setTimeStamp(0.9530167160900951);
    msg.setSource(51322U);
    msg.setSourceEntity(214U);
    msg.setDestination(32059U);
    msg.setDestinationEntity(225U);
    msg.op = 144U;
    msg.goal_id.assign("KQTDNRPKVUVATNDKCPAZBDHUKEJYGYULHDFWWBBUPMXJGRQOQEROKLHXGOTEEIFQXCIASMPLHUWUXZMYRSNSTMPOPYDLWBHWSRVTVHWWDEEEXJBBYWSOTYAKKHFKFKXQRFSQNIOTLOFMTQEIMDVHGNCUDCFIOAPTWFSXMCJMZJCQLGBVCUEJDANXIZLGZGRXJZBKILFVOGNAESPAQUWQRZVLZUYAXPNJRYRSGFINICJHBACYYHVV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IITHSHERMKMGRVBNMNBMMZKNSIKFKQDWIWXVVROZIFIWEKOHPCXGQL");
    tmp_msg_0.predicate.assign("CFTJQRHUAGZZDIWHVIBPLPEEKROEBEXEBJYHPENQPMLOAGKOBITMVSKLOXFWTQROWNMLYITMBJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("TKSRSSYYUSCHTMEOJFYHWRQFGZIKOXBNNHRBEYEYPBLWHYOLZDCVZHIILSAADENBKDCKPGJTLZJWMIGRSUVMONMYAHZQQQWOXTFXPJCLMTLXEQVPGHDSJIQPGOEYJAKFIUABGPMQHHURU");
    tmp_tmp_msg_0_0.attr_type = 107U;
    tmp_tmp_msg_0_0.min.assign("HTNWMONNTXKTUBQZGRKEIENGHUWANMRPYBUPCAHRVCTVHDFYTYGCASEUHHJQSWJZQKHNABLWPCJIMZQAZWIJTOICEQOGVJQPDEJNKCTNQKBAKADCMQSDWGX");
    tmp_tmp_msg_0_0.max.assign("BKCUZPPUCCGCDKBRLYIOUTMJRNEYLBNKNTRIKVGFDWSZIPQQXIHWBGUVWRHSVMNWSFSFLDKNERTXVMXBWHMSTQPCDDIQGCECEFEOIQXYJMZJYWOIQGVLLDTRFAJTQYOGGAOIWMHBZMJINEHJUCHHSQFZJPPXPUORPLVRFNEVRUNQMXXLAPBEFOLZJXWYJTV");
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
    msg.setTimeStamp(0.669671243683463);
    msg.setSource(65252U);
    msg.setSourceEntity(199U);
    msg.setDestination(34780U);
    msg.setDestinationEntity(34U);
    msg.name.assign("GCGFXQJSLIDDPXCKIJDYPZBIRLAOSMVAAGXUCNPHLOEARFLVTOUTAKEUHRXDGKMX");
    msg.attr_type = 34U;
    msg.min.assign("KJPIKNMLWDOWMUHURYOFEZGYSGENTOJABWZTAQOBPRCQXUQWLLLCRCZIXHAFEQADNOWJKPRELHZSYHQKYOMAGGVHPBXEMCITGMFBEUTXKJNKNCSKVUVIIZOFNTBBEVJFSZDYBOJTFUQVJQWGTFDJIIYBNIICXCYDV");
    msg.max.assign("JHZBFADCFBASFSVLLYLPRCTTTRNPJCQFCYDHDKVHNVBGSKMIWIYWAKOOXRNCNQATWGZMQSKWQBJKYR");

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
    msg.setTimeStamp(0.17174657425463513);
    msg.setSource(4337U);
    msg.setSourceEntity(26U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(37U);
    msg.name.assign("PXIIFXHBSGFEAFRAJMTXNUBNNUGAJNDIITIJMXWYKTKJVZGYCXGOQARGKCOEXFLWSQUUUJWVJDMBQAMFVKWLWEWAHPQNZCHVYTKVTJXXMCEEZLGVMBKLWZTGWHCBMKQZBROPDFSQDZIREHKRFWSYUFFGDYBHOYALQDCIOKYZGUYETEMPURMZOPSVACOLVJDZOUHZHLNBLXYQOESNKRIRJCLNNQQPXPH");
    msg.attr_type = 5U;
    msg.min.assign("JLYBKJHZHNXXRDLMYZPDDHRBXDARKHKTSLNIJTSTVEACCAUSIZQIZZWTQTTTKPBEBCSONTUZYKAQFQEIFYVVHWODOXLYEGMTDERBBPXJWLRALYGRCINNFFOFBLKWIQGRNGHZBVMAORVNPPUYAPZWBCWGCEDMGSFHKQOPMASXEUCSENOIFJHYKTMDKIKWBJUCMXJF");
    msg.max.assign("CHSXDIMDOOFTZXMXUFGIKVZOWQQKFJINCASSLFQGGJEEBKVBBPGWGLZXJDFHEQYDHMFRIROHRLGCSQLEGASPQOLLRCZBSCYRBISKADISWLOJRVKAUKTJUQEFBNTKNDRRZBMRIPEYAFXICYVPEHVVTJGH");

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
    msg.setTimeStamp(0.7013234217089569);
    msg.setSource(50674U);
    msg.setSourceEntity(131U);
    msg.setDestination(38200U);
    msg.setDestinationEntity(149U);
    msg.name.assign("CMQBDZMPZEPNREBVUCVWEDAZSRLLFTXUWNQMELAVXFCZEHMRJFLFYWKOTHUVSOFUBHSZIMPPFWQIMYKAVXVGMNMSNPTSKDUOCHTCKXWOTZI");
    msg.attr_type = 250U;
    msg.min.assign("TXJKNWYMYIZVEKXHYLOBQHZFXKQNVOSJNAIGAFLVUJVEPKLGNBHBZHEOUHQPWMCUQTXEIFJZSKYMGYDCVJGNLLPUVWNTZQHPNORRDKZPARXPTBCUTQLRBCFXIURNEWEOTVCLLTGPQNTTYGAODFCLXMKCJSXRDMDRIZFOJHRHSWHMSRFY");
    msg.max.assign("BSRELTEOTJTM");

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
    msg.setTimeStamp(0.6778877150673481);
    msg.setSource(58319U);
    msg.setSourceEntity(60U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(212U);
    msg.timeline.assign("ECLOQDXGUXXVOBOKXHRVQEDEBHEUUGROPAXDZJVXPJWK");
    msg.predicate.assign("YYYEYJCBEPXQHVNEVAXKQWLCYHSLREDJTBTYNCIBHBSROXMUUJVPGTIHNBJWFGGKWKODHWTERUDKIPIAXMANDJSRNZLLCOCVQMVICLXAZZFQXYVGFDSJAJ");

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
    msg.setTimeStamp(0.18733302243998717);
    msg.setSource(60259U);
    msg.setSourceEntity(112U);
    msg.setDestination(38313U);
    msg.setDestinationEntity(203U);
    msg.timeline.assign("FTKRVAGZAMXQXLUZOFOQVVUKWLPJCXEFXBOKXTEASRDVITLIAPGZWHRDEVHFXESYWYNCQWRLZTSUHAOMJDTGEDQKGWOQXIEBGYNEPJYWSYR");
    msg.predicate.assign("LMMQDSRGCDOWWOHMCXMQBGUTEIJFSHSHDSIEZIKUDYCRXDOXAQVBCNJBVWVZYFMMPTSXZFTPIVZELNPYYTNIAZDKDFDDUFNIEC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AHZNEGLCCRWERWMOHZLMIIXJNZHBQWBPHJAA");
    tmp_msg_0.attr_type = 162U;
    tmp_msg_0.min.assign("UPTLHKNIMHJDBWWTFTJSISETSDWARFUUEOYJVZSYWKHEKWBZEOGCFMHFUTVDYCRKRXHREUFIRIGBASXTIPGVTKZDLMCOZNOQNGKRYAMLULBFBPQHQXJDQAJNMOOPHXCPMANWYFSAZBNLZLZCNQUCQGXUWPIVMJBTKCEXGQVYHPLONVGDUKJKPHYQFQAXZVPXFFNEBJBZAPALBGGUDLMYTRSNTWXJIIDLRQASVVMCDIY");
    tmp_msg_0.max.assign("XGEGSWWNGPUDZMXNTJUVIEVYDGQWMTOBHXFTLYQPBCXDOBNPSKMIUNIM");
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
    msg.setTimeStamp(0.5158443125382812);
    msg.setSource(56898U);
    msg.setSourceEntity(114U);
    msg.setDestination(18579U);
    msg.setDestinationEntity(40U);
    msg.timeline.assign("KORWAHMRBHRTPXEHKOOVTENYQVVGWLJPXTSWACIPFEVCYZDNJBWLAWNHPYDLZQLIXPEUGMCPCTTDGQDDQCNJMFKFKXMJSTAJXILBRYKGZNXILCBBVH");
    msg.predicate.assign("AULORSDDFFMXSEZTIZLZHVIBMENYKLWAZHIGRPFQJDOQJGECWYVGQZZXPTVOBTRUWMJJBOKURRPDVIMTQXGMPKBWJOOGXHCQGPYGBQBSZFOYMCEMDECTAKOJFTCNIWSQDVTBVZYTVSRXHELBHSGEGKAKDPNIRKSUZHHRKMYWYYFAQTNYXCHIAZWDWVUYNUPNCNJWCIQMPFU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FMENPCKOFTBRQWLFZINJHMYVXVAFPOPKINZROJTZBKUALXWUBDOZNGQRDRKKCERHBAGYLNZNFHMANUGQHPKCFVWQYYAFMQSJVEPSWMUOYTHPTJOBLBWAUGEDRCBDMHAEIXGZRYXDJPWUVCFJCXJGGZDHRUWXQNJKDRSVISTLFPICMUWLBHCLPMOAMIZVMTYOBKRNVAXHYWEEXIVVOSSEQTLTCTSBQDOSEZCPSLJNL");
    tmp_msg_0.attr_type = 16U;
    tmp_msg_0.min.assign("ORIIQGYOXRUQIFGXIDJZLDTLRXOGMXTIRFHDVSMYUAYHKLQWQMOLVKGKBTXUEWGADWZFUCNA");
    tmp_msg_0.max.assign("RVYAZWJVONDUGFJFXRRONIIHKQHAMGEKMSGFFLWNVDRTXCJLPCYYVQFJBHXITUENRGQWZNHZLJGKLDYFBCCRTSPUBPRKQMPWSCDULMESSBHYOTUAUZALNOFEFZIHBTEGEDQDYWZJEHCOBNMWDPOTUXDJFKZCEOAKSLPPVPGUQENMBPATGOVPYABSKXIOVJQCRNKMMTTMJHXIVHQOKULX");
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
    msg.setTimeStamp(0.3013819510534842);
    msg.setSource(3208U);
    msg.setSourceEntity(144U);
    msg.setDestination(47455U);
    msg.setDestinationEntity(107U);
    msg.reactor.assign("NDMZCANCRIZQPRYUKHAVLNWDVGQCVYGCKNLDPERKLLLPYPJYRJKCRBIXGHBZFXNEIFOBFHVMICJJMFWXDHDMAIPTXWSIWXIYZZQIWMEHKMOPSXMBSIGPLHTUTQTDQQRSCKTOFZWPFZUABGQTDXXZGTEYNWVIVLYBWJCHDUFHQKSYABCBSOUTYEUGHE");

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
    msg.setTimeStamp(0.2721686176764755);
    msg.setSource(19353U);
    msg.setSourceEntity(233U);
    msg.setDestination(421U);
    msg.setDestinationEntity(232U);
    msg.reactor.assign("KOXMIYERJTRQJHKNULBGHPLYVUXZRIFOHXKMCNCVVYVQRQUWNVKBQGKFQKDEBLMJEOFQNCIFQPERYLRZXOQTAHGLZKVGNDFEXUDJFAURTGS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UVPJXBXCVXVFDKFLRWCOAYHQCVBSGJPOUWAIQAIPOGTSVFGGWVREMFHBIQQFDRUDJAXZPZPFCIGUNBLKXUBKNXJHWLYYAQCUWZMOZQBGAVLOICDGIQZPFOGRX");
    tmp_msg_0.predicate.assign("NZIUOWGQARQKGBODRMGMCEAIMLHXUHSCLGFVTAFMWKCNRYUXIBKLZRFTEWFHEURPPDKMOWJZRNPFJGXFEUCZIZZQVFXBCPAYYNNJBZWHJDBOBCMVAQULBGSATLIZQNKVSXHSUHJWQLIWHEWWXIEADSTKDSU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BPPOLYPKDSLAMKFYBWAKEIYGJMEMNETAKLTNIXNSAQMNXUOHGEQZVTWDOHEWDZQRUYFBXSELBOXQCCAOJCZWVGDJOYJJUITVKGHJFPCFSAMEEQHGZEMKTRRBJKQAWDGBMNBUPNLWBODTZIAHKXXTCEZPFIDQVVFVXQWSRUICIYIYIWHHSKYWYCPOXGFNRJDJGUQZCLNCXGFBSRDLMTMVGTHVRZVU");
    tmp_tmp_msg_0_0.attr_type = 218U;
    tmp_tmp_msg_0_0.min.assign("EQNQAJRCBOOQZVKHHCWUXKWCXMVXNFNDZXRPGODYTMZHLSDVWKEYYNVFEFTRGSSBIPPIYTBDCPYOKMCFSATZAXUZTAWMAKISTUOJDZQCPILOZSZFDQNINUBXIEESRAOQKKVGQWUTPDHWGIZBCIXXDGWHRGVTQKBYJADJLJELGCHOHRBGNKQEPLOFVCKMUDNRJEMQEIYHJGYEYVJWZFRMUFHWORJFPVVXAFUUWCBMJNLTNSM");
    tmp_tmp_msg_0_0.max.assign("RCQHGIMDGLGTSWAJNJICHANOTQGKVOJIRFUZJVEXPWFOOEIUYUBUCPCJCHBEJBHSKOUZTMZDVPMLMGGJPQWZHPVBTAJENVTBSTZYDFMYRQGXMBGTHGXROLAMHNCKWIZRYFXRRKZNBSXSRDWNXMBFEUUYWTODQCYEEVILUN");
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
    msg.setTimeStamp(0.7848219905066736);
    msg.setSource(21373U);
    msg.setSourceEntity(40U);
    msg.setDestination(16757U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("DNEVMNHSTSWETCTGMQQEBTIVMPMUYFLPFOYCKXDRAYFNIIPBOKNRDGFZOHHJNLKWTUJIBVGELTSSGMJUJBAUFJVZQRXUVVLABHCJKQABTIZPRDVTAAMZSPCUQDAJZRLSYCLZYXBDCTPLR");

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
    msg.setTimeStamp(0.38186449330826944);
    msg.setSource(41247U);
    msg.setSourceEntity(81U);
    msg.setDestination(53400U);
    msg.setDestinationEntity(65U);
    msg.id = 227U;
    msg.width = 65028U;
    msg.height = 45641U;
    msg.widthstep = 20921U;
    msg.channels = 137U;
    msg.depth = 144U;
    msg.finaldata = 70U;
    const char tmp_msg_0[] = {-46, -11, 13, -86, -87, 91, -88, -104, 35, 93, 8, -14, 62, 5, -71, 60, -27, 102, -45, -96, 100, -110, 38, 37, 2, -121, -10, 43, 98, -13, 49, -106, 12, -13, -103, -16, -1, 72, -128, 54, -34, -84, 30, 122, -58, -80, 48, -73, 122, -123, 52, 3, -51, -52, 66, 93, -13, 88, 24, -126, 119, 47, -70, 93, -97, 74, 67};
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
    msg.setTimeStamp(0.03455111217189055);
    msg.setSource(34050U);
    msg.setSourceEntity(243U);
    msg.setDestination(53178U);
    msg.setDestinationEntity(136U);
    msg.id = 104U;
    msg.width = 38879U;
    msg.height = 52310U;
    msg.widthstep = 33921U;
    msg.channels = 162U;
    msg.depth = 30U;
    msg.finaldata = 47U;
    const char tmp_msg_0[] = {-19, -104, 7, 8, 112, -112, 65, 113, -100, -70, 21, -95, 32, -31, 36, -107, 115, -79, 94, 15, 122, -88, 76, 43, 101, 110, 32, -28, -79, -15, 45, 121, 108};
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
    msg.setTimeStamp(0.4255481192152486);
    msg.setSource(51152U);
    msg.setSourceEntity(199U);
    msg.setDestination(20079U);
    msg.setDestinationEntity(129U);
    msg.id = 14U;
    msg.width = 7324U;
    msg.height = 24629U;
    msg.widthstep = 52022U;
    msg.channels = 34U;
    msg.depth = 152U;
    msg.finaldata = 247U;
    const char tmp_msg_0[] = {110, 67, -77, -118, -33, -68, 111, 39, -10, 78, -8, 71, 119, -92, -128, 70, 120, -112, 9, -79, -58, -48, -31, -73, 121, 120, -37, 126, 100, 114, -7, -83, -60, 73, 77, -57, 40, 21, 75, 71, -90, 23, -89, 25, 61, -32, -19, 59, -84, -81, -116, 31, -70, -123, 101, -94, 87, 42, -86, 14, 111, -12, -7, 62, 125, 67, -114, -21, 15, 104, -8, -64, -38, -42, 65, -22, -21, 43, 36, -57, -62, -67, -128, -112, -34, 83, 62, 25, 103, 4, 50, -43, 72, -39, -122, 57, 60, 50, 9, -4, 33, 11, 87, -5, -87, -112, 71, 79, 11, 86, 35, -85, 63, 100, -68, 115, -6, 80, -112, 13, 40, -41, 26, -25, -7, -61, -34, -32, 91, -26, -121, -24, -56, -78, -95, -48, 61, 62, -121, -84, 68, 22, 72, 74, 82, 73, -52, -45, -116, 48, 90, 89, 33, -49, 112, 21, -110, -59, 34, 64, 50, 48, 35, -8, 50, -126, -85, -69, -87, -24, -45, -64, 113, 93, -84, -40, -31, 81, 11, -113, -30, -123, -81, -43, -122, 63, 6, -10, -37, -55, 106, 31, 65, -46, 122, 43, 55, -15, -68, 81, 81, -12, -73, -44, -50, 85, 21, -88, -73, 39, -36, -77, 105, -63, 95, 5, -106, 69, -91, 50, 110, 43, 76, -60, -24, 103, -39, 5, 2, -17, 97, -7, 82, 30};
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
    msg.setTimeStamp(0.07669940086238569);
    msg.setSource(15010U);
    msg.setSourceEntity(237U);
    msg.setDestination(58577U);
    msg.setDestinationEntity(40U);
    msg.width = 44910U;
    msg.height = 3024U;
    msg.channels = 106U;
    msg.depth = 210U;
    const char tmp_msg_0[] = {-128, -87, 118, 72, 87, -124, -51, -20, -31, -2, -16, 28, 25, -110, -25, 73, -59, -41, 7, -22, 35, -29, 118, 120, -16, -7, 51, 117, -95, -25, -93, 28, -67, -104, -31, -88, -72, 18, -44, 108, 83, 37, -63, 30, 19, -108, 47, 2, 113, 82, -7, 5, -50, 26, -61, 119, 60, 92, -24, 105, -69, -75, 100, 17, 36, 35, -96, -111, 102, 74, -66, -63, -67, -33, -75, 59, 112, -82, 48, 96, 110, -58, -85, 10, -126, -124, -13, 94};
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
    msg.setTimeStamp(0.2169848544460954);
    msg.setSource(11320U);
    msg.setSourceEntity(21U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(198U);
    msg.width = 54066U;
    msg.height = 37141U;
    msg.channels = 118U;
    msg.depth = 126U;
    const char tmp_msg_0[] = {64, 76, -109, 37, -20, -70, 51, -100, 42, -23, -55, -75, 80, -74, -121, -10, -72, 10, 41, 49, 64, 15, -87, 48, 114, -7, 78, 115, 121, -69, 31, -51, 81, 124, 29, -92, -74, 78, -77, -47, 94, 107, 123, 70, 93, 26, -38, -41, 53, 65, 116, 76, 74, -85, 93, -53, -81, 19, -8, -75, 31, -62, -3, -70, -38, 57, -118, 0, 92, -104, 14, -35, -22, -123, -29, 87, -70, 53, 20, 32, -107, 22, -71, 67, -17, 41, -67, -3, 17, 10, -108, 39, 114, -76, -63, 14, 7, 118, -80, -56, -93, -81, -48, 99, 122, 35, -43, 0, -75, -111, -28};
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
    msg.setTimeStamp(0.6803230880127371);
    msg.setSource(23780U);
    msg.setSourceEntity(33U);
    msg.setDestination(7371U);
    msg.setDestinationEntity(59U);
    msg.width = 61841U;
    msg.height = 32901U;
    msg.channels = 30U;
    msg.depth = 191U;
    const char tmp_msg_0[] = {-59, 117, 67, -3, 115, 80, 98, -3, -35, 96, 5, -117, 78, 86, 24, -51, 64, 30, 63, -18, -4, 98, 43, -9, 33, 41, -43, 104, -43, 1, -90, 110, 10, 115, -41, -41, 48, 90, -55, 37, 15, 50, -61, 13, 113, -28, 125, -54, 85, 7, 71, 7, -17, 24, -83, 39, -6, -58, 96, 83, 79, 73, -39, -14, -118, -61, -114, -108, 20, 24, 57, 25, -27, 118, -6, 51, -63, 125, 101, 107, -17, 46, -77, -58, 120, 55, -125, -93, 94, -74, -48, 48, -89, -76, 63, -88, 92, 55, 104, 22, -46, -37, 29, 0, 22, 126, -35, 25, 108, -125, -115, 57, 79, -101, -8, 63, -43, 71, 118, -95, 88, 22, -101, 48, -24, 92, -65, -48, 63, 125, 95, -119, 90, 82, -114, -38, 27, 13, -98, 38, 23, -87, 87, -53, 5, 7, -111, 116, 83, -73, -11, -85, 3, 4, -17, -64, 67, -91, 107, -69, -65, 126, -96, -65, -121, -23, 107, 106, -39, -111, 44, -110, 82, 113, 63, 123, 125, -17, -58, 79, 3, 85, -7, 60, -92, 76, -66, -121, 118, -59, 30, -51, 72};
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
    msg.setTimeStamp(0.17061222033409706);
    msg.setSource(47062U);
    msg.setSourceEntity(63U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(177U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {-94, -36, -118, -118, -16, -7, -127, 100, -119, 123, 82, 69, 100, 47, -57, -96, -125, -49, -25, -77, -97, 102, -76, -44, 81, 40, -13, -30, 22, -63, -84, 126, -56, -95, 79, -9, 98, -127, 51, 35, -110, -102, -43, 126, 0, 21, -59, 20, 111, -105, -58, -52, 42, 121, -49, -45, 37, 47, 106, -120, -32, -82, 113, 87, 15, -2, -96, 103, -125, -6, -83, -118, -34, 15, 63, 16, -60, -41, 54};
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
    msg.setTimeStamp(0.7965089279430774);
    msg.setSource(25982U);
    msg.setSourceEntity(71U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(143U);
    msg.frameid = 74U;
    const char tmp_msg_0[] = {78, -103, -66, 82, 39, -83, 120, -104, 53, 53, -71, -62, -101, 10, -26, -126, -76, -53, 3, 32, 42, -1};
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
    msg.setTimeStamp(0.9548607806233455);
    msg.setSource(19130U);
    msg.setSourceEntity(209U);
    msg.setDestination(64849U);
    msg.setDestinationEntity(30U);
    msg.frameid = 233U;
    const char tmp_msg_0[] = {-53, -61, 1, -112, -84, 69, -59, -84, 56, 12, 110, -100, -120, 120, -55, 70, 21, -35, 25, 48, -53, -119, 21, -81, -28, 2, -79, -66, -112, -32, 113, -109, 68, 122, 70, -43, -118, 91, 76, -109, 13, 108, -54, 36, 76, 17, -119, 106, 10, 92, 101, 53, -94, 106, -113, 112, -97, -107, -5, -2, 23, -36, -113, 53, 39, -16, -101, 94, -48, -28, 89, -59, -90, -123, 110, -49, -18, -7, -68, 59, -1, -120, 114, 47, -70, 96, -49, -77, -104, 6, 58, -81, 104, -21, 96, -113, 27, -70, 124, -20, -100, 32, -57, 7, -53, -40, 98, -54, -80, -66, 87, -67, -111, -125, -84, 119, -48, -64, 47, -119, -30, -111, 4, -68, 74, -7, -6, 94, -36, 91, -15, 66, 87, -116, 126, 72, 75, -107, -88, 80, 40, -19, 7, -74, -56, -2, -90, 35, 80, -41, 90, -6, -62, -115, 90, -9, -79, -64, -19, -107, -37, 122, -19, 51, 121, -8, 5, 101, 95, 34, 115, 31, 8, -75, 72, 109, 110, -121, -92, -84, 84, -70, -13, -39, -106, 87, -113, 21, 6, -79, -1, 60, 31, 40, -67, 1, 50, -78};
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
    msg.setTimeStamp(0.8299254552562253);
    msg.setSource(60708U);
    msg.setSourceEntity(145U);
    msg.setDestination(42824U);
    msg.setDestinationEntity(25U);
    msg.fps = 133U;
    msg.quality = 36U;
    msg.reps = 37U;
    msg.tsize = 149U;

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
    msg.setTimeStamp(0.40307808660482713);
    msg.setSource(35301U);
    msg.setSourceEntity(249U);
    msg.setDestination(29137U);
    msg.setDestinationEntity(152U);
    msg.fps = 201U;
    msg.quality = 242U;
    msg.reps = 19U;
    msg.tsize = 223U;

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
    msg.setTimeStamp(0.26201771152134945);
    msg.setSource(3174U);
    msg.setSourceEntity(149U);
    msg.setDestination(44494U);
    msg.setDestinationEntity(42U);
    msg.fps = 80U;
    msg.quality = 73U;
    msg.reps = 169U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.9805565391077257);
    msg.setSource(8964U);
    msg.setSourceEntity(100U);
    msg.setDestination(37777U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6622411322571513;
    msg.lon = 0.3516368056358229;
    msg.depth = 226U;
    msg.speed = 0.5370063436541928;
    msg.psi = 0.0015658033263279414;

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
    msg.setTimeStamp(0.7156648631244998);
    msg.setSource(58052U);
    msg.setSourceEntity(165U);
    msg.setDestination(50075U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.5201882266099941;
    msg.lon = 0.11156631460382582;
    msg.depth = 116U;
    msg.speed = 0.7943569794486562;
    msg.psi = 0.819050084670104;

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
    msg.setTimeStamp(0.029605735069649253);
    msg.setSource(6839U);
    msg.setSourceEntity(161U);
    msg.setDestination(26137U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.24519771505337618;
    msg.lon = 0.43978293442839933;
    msg.depth = 237U;
    msg.speed = 0.9466109345308762;
    msg.psi = 0.6399772548199928;

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
    msg.setTimeStamp(0.33296871114174986);
    msg.setSource(34437U);
    msg.setSourceEntity(202U);
    msg.setDestination(51162U);
    msg.setDestinationEntity(9U);
    msg.label.assign("YYTAAHTSXGFJJHXIDKNGVQWFAHRQZKBNBBMRPPCXFNDAJOYXDSOOURVYIGWJPCVRLKUVBFJLWNDZIUQFDJWPZNIKTDLIPNBUUERFWDBKTSNHYCZPEDGACLVMLYZQLQYRGROZCDSCAIXTESHWJKMLVCTEUMXMLUSVCQGKYCTFKAPOPIKXZKGMWSBXEESARQTIIMGEHMPGELOWBHUMNFWCJZUZQFHWONLSOOMUSJXHYVRGHAATNEVJYZBDVBR");
    msg.lat = 0.31784986621430633;
    msg.lon = 0.7574439325675265;
    msg.z = 0.6963755398096917;
    msg.z_units = 26U;
    msg.cog = 0.2517225923152905;
    msg.sog = 0.689715533837065;

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
    msg.setTimeStamp(0.3971446807837832);
    msg.setSource(49121U);
    msg.setSourceEntity(106U);
    msg.setDestination(38910U);
    msg.setDestinationEntity(239U);
    msg.label.assign("OZSTRRHPBDXNGKQYOUVZGKMXDZSNIQCAAEIRTZNUVUTPAJISCCMVHVPVDVJFCLMDOFDJXCKKEFTNJDIWTHYJSDYHVXFJKLMZQRCGBXFHEZFWBAAUYFWILWAXJNXKHXTSBVWJUGSMAF");
    msg.lat = 0.37350176503204013;
    msg.lon = 0.32055027099269784;
    msg.z = 0.43371397967299286;
    msg.z_units = 18U;
    msg.cog = 0.8198585308014679;
    msg.sog = 0.3131392253535624;

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
    msg.setTimeStamp(0.738646802917999);
    msg.setSource(40376U);
    msg.setSourceEntity(235U);
    msg.setDestination(42719U);
    msg.setDestinationEntity(21U);
    msg.label.assign("FHZVLVSBTTMPKWVOJUTXFLMKAACFMZWXKJZXKGKLCZSANGHHUCLDILMHLSJDCJBUTYBDYWGYZIPADQMXZGFPXRMYKZYNSFRWRVDKHRTYLNZCZOQKEGNLVYRQPBSPIORAGSKQUITYOCWXGQBREZJIMNKIGVBQQRESOOPVD");
    msg.lat = 0.9271214296841637;
    msg.lon = 0.2089064380877267;
    msg.z = 0.2263528571632929;
    msg.z_units = 187U;
    msg.cog = 0.38437525413419926;
    msg.sog = 0.3248202671990331;

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
    msg.setTimeStamp(0.33267799472180615);
    msg.setSource(40024U);
    msg.setSourceEntity(36U);
    msg.setDestination(36898U);
    msg.setDestinationEntity(46U);
    msg.name.assign("PZZGWLOWNBTJRMJJLDULGTZJJYZEYIDIAMXAWLKYAPQTQNZKWFWZCFQAGLQNFBERFCOJEYMJUFVHKSSDNMPJCNVXLOCBKMBSMHPENWQSXMYPILIJQZLAWGVLRZVPGTXWHU");
    msg.value.assign("NNWBACALIPQ");

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
    msg.setTimeStamp(0.49823675890273833);
    msg.setSource(26424U);
    msg.setSourceEntity(13U);
    msg.setDestination(41900U);
    msg.setDestinationEntity(33U);
    msg.name.assign("UEHORPZPYDZUSZPGNHJWDVEJEPABFHVGCJQENBEFTQIHKUKTHQUXYGJXHUIMTAGZTFKVBPRWTJTENNRTKABUAQXMOFMTLEYHMXOENJPQREPXJKYAOYDVKLCGBGLKQRB");
    msg.value.assign("ZKCFMHMLGSSSIVFPNUOAQCQBXQXFEGFZJGATWICWWXYCJOUFWHFAZVKTYYCJOLBUKQMGDPKCZTOZEMTDGEHPGOPXJEVGAUUYAVRBXYVSKHNIURNCMBRNYRNEOBSSZJTROEPXLARPJNF");

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
    msg.setTimeStamp(0.716612868126098);
    msg.setSource(11665U);
    msg.setSourceEntity(80U);
    msg.setDestination(26969U);
    msg.setDestinationEntity(21U);
    msg.name.assign("TNSNXLLPWFJCSHNFOOKVUGDBUECIJHUHOFUDYJKHARVEYRFGMVKFVPYIVUYTHDWPZZNAQOJFEXVQHLMMAPSYRWBZEGNHQKZ");
    msg.value.assign("AUXIMWQCAXDROTRTSHHKTVCDPGYKTKHGFQPJWEWQOVHVJMUQTANBJHVDXNIIUQGNKHSUOCADZOERRGDINREZJRWSCFJFOOHESGCLVYUURNADFNVPLLBIOSZSJZSZDAKIKPWLLUMYCWISJMDQKXCEWLMUBFTWPKTRORLBJLTDYZSBKMOMFFBHCEALYVBJQWDSNHNUACOWPREPGNIPXGMZZBBV");

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
    msg.setTimeStamp(0.3668000824205364);
    msg.setSource(16742U);
    msg.setSourceEntity(183U);
    msg.setDestination(24104U);
    msg.setDestinationEntity(88U);
    msg.name.assign("DFFJWKKYSDCUNPAVVKITBNTGOEODPBCFPEFKPYRLNPWZTPUACZBGGROFNXLMDJWTBEJSYAAISCOSQ");

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
    msg.setTimeStamp(0.17695352335708214);
    msg.setSource(42165U);
    msg.setSourceEntity(170U);
    msg.setDestination(519U);
    msg.setDestinationEntity(107U);
    msg.name.assign("CFUNYYDZKWTMQDULDPRNNUUFNXOJM");

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
    msg.setTimeStamp(0.8881320611082405);
    msg.setSource(8503U);
    msg.setSourceEntity(29U);
    msg.setDestination(60848U);
    msg.setDestinationEntity(81U);
    msg.name.assign("TCMGNNKAQKNPHQEFAPGARXIWTXOWRVFRJVRFHYEFIJDHXRCATFPCXOWMLIIDPNFBMUSNDLCGDQUWKOYDWFHIEVAJNBOPOSUPUPQVLSUD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VZQRZJWBVHILNMAFGBZVTLUPJPPIHTDYUXUFVYDVSTWNDDKUEXGVQVSKECHUJHXEBQUMNICMPOSZLUDBJDORVCNDDKRKOXQGPQL");
    tmp_msg_0.value.assign("TUNQNYCRIQXMVWQBWDSHVHBZOCWRGQVGRVLZICMMPUFCJVXVGNHHQDHDXMBATHWFFYDIOMUHGIMXPKLGUMKBJFLECTVZDZCQHDZIJSNPKKRQPCPWTXIHWWKXWKJNQAAOVBTOTSFESSYUNMLUZCYZWIZOEHSRPGXUFKILXPTGSTRPJVUOYJABAZBBKOPTFLMNKRBNRVOXCJANQEYSNAEYIADFFRWDKOBEEGLUDUCJEYZIFESQAGRPGTAJ");
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
    msg.setTimeStamp(0.2448414469131882);
    msg.setSource(7004U);
    msg.setSourceEntity(13U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(91U);
    msg.name.assign("REKGZKEUVMKJTKYUORXVSKACMJGBXNHUUVFMXPAODUGMUZDSEWZEBFCFYUIMMJHNZOWZXFQYCDRESXVVEWRODLALKTYXTHHVSUMWTYFNVMITCSIQ");
    msg.visibility.assign("LUKUMJHSRJLCTAIKVSYOLPSLMPPEYZBKTWQXTROFQEYCEXGNVEOIUZEAKNCYGSIBOXBDPQFNHRIXGT");
    msg.scope.assign("QRZCDVOFNKYFTSXPXPQKURACM");

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
    msg.setTimeStamp(0.20402981492063332);
    msg.setSource(31320U);
    msg.setSourceEntity(136U);
    msg.setDestination(3873U);
    msg.setDestinationEntity(180U);
    msg.name.assign("WSGKAOSJLCWJTFSNVYSBNDGWOFLBGPEUFVDRZN");
    msg.visibility.assign("JMQEIUZKYJZHGFQRVAKHQDTLPQNIDFUGDFZBAZZTIEGBSUGZWOLREWYVDLMWLUBTTPLQAOXWKPLNQWCRJNHBOLFSJZDTMJGLHOKXNTLOSFUVMLUIDCRUIGVMPEGDVJCASDRZFPQCKAXAXHSCKGZJBQBWMXWCNFWZOAMBJYFIKNYKPXAEBVEDBXKJNXRYFOSTAVOCDTMYRHSIBEHQEVURHPGICSHPRYSJCTUYYXNPKWNEMUPIAIW");
    msg.scope.assign("WMRPFKOZGZEWQUXRSYIRCMERBBNYNDVBUCQAHUKKTYDGYKZAFGVTCTGMGMFTDXXBOOJQEDOQHMRGISATSGREBFMWXYWVIHZLHJSHSPVXIUUZJXLWBEOJPIKTLHFNJVIJDOVDDFCZAHLABCNDVDKSPYZCYBQILFPWGLQMWACMYCQPBSOJBPQTWUUNR");

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
    msg.setTimeStamp(0.6970341899406547);
    msg.setSource(1172U);
    msg.setSourceEntity(185U);
    msg.setDestination(34567U);
    msg.setDestinationEntity(122U);
    msg.name.assign("MITGQSNYAUXPRHAHVAMBJQUZKPOPDZOIIDCQCDUGONGATQELELBNZMRMLEIOEWFXUSLBDHSWFGCYFFGOGEHNMOMCRVCQRTRXWSCGZYDLWKOVHQLYNBPINKDI");
    msg.visibility.assign("XQJJVMDZFOKFDPCDGAKFCKEXJTCKBVGHSUUSDRRLXAJRYONYEWUIBSSQBMWIVSUEGNHKILZGREHAQXONNMPRJEWNPFWOSHADVWJ");
    msg.scope.assign("KWQZPZWSHEAFNAVXIFKNCSNJRRYBDLJTCCEMQPUVZBUVYYYADGSGNYTWEWJRIWIIXEHJGAAZOJQZIBDJXWKUTDPEMPAYOZEHRQTVHEHFCFXGVSM");

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
    msg.setTimeStamp(0.1971930901392348);
    msg.setSource(49499U);
    msg.setSourceEntity(26U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(95U);
    msg.name.assign("PQHCITQADXGSZTVESUQEJORTUBIJYODXLCHOVOJHSXGISMBEVCYMLRMYTNNGHBYRFLZSELOMNIWVKGVLNBGWBVWQRQXGZAJRO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UJBYCVROVIUZJNVIBPDDKQSTNEEPAMKBMODUONIJRNPTNVWWFSFAHXTZXQPIBFROYMHFBFETGDIJIRKMGAPQTVNKLDCZPYQXKTMYCMIR");
    tmp_msg_0.value.assign("GXNYEOTFVIFJUKFJTMYJDBCCGANPCRBLEEOWDJGEQBSLEJYMUDHHJCODTXYULPNQVDUCDSUV");
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
    msg.setTimeStamp(0.4893932085588141);
    msg.setSource(47389U);
    msg.setSourceEntity(15U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(34U);
    msg.name.assign("WXXJQUHJZCHMHJSJDBCTFZXMVOQRXTIUPIELNKMNCNXFBEPQVBCFRLAQOBUFACEKPVFFISUVARJOSWYGPBFEHQDLVFLMJDRWSYWGWYARNYHZPIMJWIUGRBNEGKKTATKKSLCDXBVCARQWGGLRSPIGEFWECC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UKIIZWMNBKBCLEDTNWEJSBPRZQIXYCBCBTLYIGZQUDYBSUHHUPFXYYRYNEAKLRSXJQKQVEIUVMZQMGQAMUOJAXEEZWMDZXGGSEDYTSILNMZOOHOXTOTVDHZCKW");
    tmp_msg_0.value.assign("OSURSOPHQOUIOKNJLYHEJOLAXCRNSCHPAUPDQSJXJHRAWGOJFBAXUUQICCWPPVRJS");
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
    msg.setTimeStamp(0.711254360215734);
    msg.setSource(32857U);
    msg.setSourceEntity(197U);
    msg.setDestination(14879U);
    msg.setDestinationEntity(248U);
    msg.name.assign("IRNCWWHXKPTCMSPLNVIMDOHVETEZLQFMKUNVYORJXVAVXTIRUIUEAQAGEBVAYDNBLOZFABEUZFWWPQLQYLAKPTJJGPBDHDNGPBFMOZPODSELRSJWBHQJACAFFHGSVUWKRLKCCPRGCTZUOWQKMOUXSLSXOGPNYXVFDRYBVWTRMDCEHBZHLG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YGVDCWJCFPROLIDKABORANPSLFYCYXBKXKVHAWZKPMSMWDDZRJFPDDUWCQQZVE");
    tmp_msg_0.value.assign("ISKQBNASNLWLQCDOJLWCSJSRVALMOVRYTFQJCQKGBWRZEWKKZEVTLMNCRDICMTSZQCVBGFIPSIAJBZFQYEYMBKVSICBTAZQGFVAVNSXANTIGBNXOY");
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
    msg.setTimeStamp(0.6267069276383401);
    msg.setSource(1512U);
    msg.setSourceEntity(122U);
    msg.setDestination(17932U);
    msg.setDestinationEntity(167U);
    msg.name.assign("EEBSJOUQCGVOKJJLGUBCEQYPXGCXAEHZSGOTPEURRKUMXFWTGBBQAZYELILHADGFLEMRWQLQKBASCDUGCEBXIVTLKYEAMNZSKWTQNMSQIONFRYDSOKBKDZJUYKWAXIOKYVLVSZPCTJZSHXPBUDXWAVWVDJVBNBNFHILPYCZRUEFFHMZTGIHHOUONOHFWPYDXRMIDRZDVIWMFRIMJZVDQLNQPMVCN");

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
    msg.setTimeStamp(0.5333528991881071);
    msg.setSource(13480U);
    msg.setSourceEntity(133U);
    msg.setDestination(42582U);
    msg.setDestinationEntity(129U);
    msg.name.assign("TQBIHMIOWAKIAJCVSANYKLRUMFTFJYEJXZLMGIJCKTTHTAJDGKAPOZICTSVPIAYKGQOZXMMXCUCFWUDUGJEXMPYSWWYOZXXFQITCOJGHHZFNZDNWLENBNRUPGZZJDNBCWSOFPXUMUKTDLLUHYEXVDRGACDQYMWBICQQMRHBKQSPPBEDSOSZXUNEFUOEVANYVHBRSQNQZ");

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
    msg.setTimeStamp(0.6407784749853608);
    msg.setSource(15099U);
    msg.setSourceEntity(89U);
    msg.setDestination(51378U);
    msg.setDestinationEntity(5U);
    msg.name.assign("PLIAZJOQNJICELIERLABLSUSDRHSRWAEGTJXRHKMICXAEVBTLSGYKDGSZGNWDSKYCKWEKUQPJBVJCAXIQTQOSLTDXNDHCOS");

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
    msg.setTimeStamp(0.07282757109594773);
    msg.setSource(29357U);
    msg.setSourceEntity(208U);
    msg.setDestination(63835U);
    msg.setDestinationEntity(171U);
    msg.timeout = 3841328265U;

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
    msg.setTimeStamp(0.3546188398110417);
    msg.setSource(29525U);
    msg.setSourceEntity(67U);
    msg.setDestination(23936U);
    msg.setDestinationEntity(228U);
    msg.timeout = 2642547893U;

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
    msg.setTimeStamp(0.17147858917954206);
    msg.setSource(15140U);
    msg.setSourceEntity(238U);
    msg.setDestination(44756U);
    msg.setDestinationEntity(94U);
    msg.timeout = 3524731491U;

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
    msg.setTimeStamp(0.7903946641183641);
    msg.setSource(55702U);
    msg.setSourceEntity(41U);
    msg.setDestination(62699U);
    msg.setDestinationEntity(33U);
    msg.sessid = 3194084526U;

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
    msg.setTimeStamp(0.29625494753626025);
    msg.setSource(33472U);
    msg.setSourceEntity(104U);
    msg.setDestination(5923U);
    msg.setDestinationEntity(177U);
    msg.sessid = 3989344072U;

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
    msg.setTimeStamp(0.6423250038429841);
    msg.setSource(53112U);
    msg.setSourceEntity(82U);
    msg.setDestination(7490U);
    msg.setDestinationEntity(246U);
    msg.sessid = 4025878594U;

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
    msg.setTimeStamp(0.7287880065923515);
    msg.setSource(8630U);
    msg.setSourceEntity(217U);
    msg.setDestination(50176U);
    msg.setDestinationEntity(128U);
    msg.sessid = 580459397U;
    msg.messages.assign("GBCMEMCEDLLDYDYGPRFNKVBYGDIZYVGVPDPXDFCEURQEOQAIVJEWLQCLGVSJJMUZWQCAFNZWJWBOZRGQJKZTLNXSITKISBKDOPHMNTAAPSXVVPGINIRABFCIBRSTFRFKXHYTOKHCJLZASEZAXMUZSLBMHCZYQGFRNWFIKYEPHTSLQUUOETHVKEUPQXLXXUOUFNTGMJGXW");

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
    msg.setTimeStamp(0.769422094395145);
    msg.setSource(21503U);
    msg.setSourceEntity(64U);
    msg.setDestination(34397U);
    msg.setDestinationEntity(248U);
    msg.sessid = 1289334299U;
    msg.messages.assign("KQWILIUQECKNERWHSYTMUOVBKCSYQJVTLLRVAMUBMARBFXBLDGDAYGHPOHGMQIJKNMVAVKPOBFBZAQZPVUBETHTZUVUZGLPZCALZYRYDGJCBLESFSZHCMRAGBJHZTJYFPEWOWFSXOASEUKWTXDHDHGZWDCFGOJAHTSPQXFDIPOPWESEFADJRHJNXXKNKMLTXQFVGPQJXQGEOKUBZQNIUNNYMOIRRWTC");

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
    msg.setTimeStamp(0.26395917671326485);
    msg.setSource(14971U);
    msg.setSourceEntity(108U);
    msg.setDestination(34055U);
    msg.setDestinationEntity(35U);
    msg.sessid = 2944442340U;
    msg.messages.assign("ZNICMYPRZLGTXHOFCFKEETXRZHJVQOEUKKDVALQVYWPANORPJZGYPGNIYNJJTFUIVWWVCMXLAVGGKEBMTPSWYGJWZLCRNDKDXMUNTIRHPHYKZCKBPSLBNQSIRTOCPWFNRMDQDRXSSOJUZWEYDHHUGUU");

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
    msg.setTimeStamp(0.6703934303412434);
    msg.setSource(48954U);
    msg.setSourceEntity(124U);
    msg.setDestination(4304U);
    msg.setDestinationEntity(79U);
    msg.sessid = 641979965U;

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
    msg.setTimeStamp(0.824418634603491);
    msg.setSource(65183U);
    msg.setSourceEntity(129U);
    msg.setDestination(60616U);
    msg.setDestinationEntity(240U);
    msg.sessid = 708249694U;

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
    msg.setTimeStamp(0.9888165221507104);
    msg.setSource(51272U);
    msg.setSourceEntity(3U);
    msg.setDestination(45382U);
    msg.setDestinationEntity(84U);
    msg.sessid = 3010169708U;

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
    msg.setTimeStamp(0.5626045000419712);
    msg.setSource(8814U);
    msg.setSourceEntity(239U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(218U);
    msg.sessid = 3139480135U;
    msg.status = 34U;

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
    msg.setTimeStamp(0.6592357531997342);
    msg.setSource(55871U);
    msg.setSourceEntity(221U);
    msg.setDestination(18691U);
    msg.setDestinationEntity(75U);
    msg.sessid = 1375428502U;
    msg.status = 142U;

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
    msg.setTimeStamp(0.6303983255408719);
    msg.setSource(36294U);
    msg.setSourceEntity(233U);
    msg.setDestination(45638U);
    msg.setDestinationEntity(249U);
    msg.sessid = 3783885352U;
    msg.status = 186U;

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
    msg.setTimeStamp(0.6918561991051835);
    msg.setSource(56783U);
    msg.setSourceEntity(98U);
    msg.setDestination(20681U);
    msg.setDestinationEntity(196U);
    msg.name.assign("AFRYUWBGNNDRGKEXLPGMKGFFYJYAWUJVSQXDCMNLYXDZSUAROWSLXSKTVFMEGHMVZYDAPTPPTJOPJGNJOFHQKINQWIUGIQBMZKDFKRCXITFHQGGZLXAXLKNZMJRIUDUOMQVTFLZHVXSMEHCDUSLBVSCZBIZQEBXEYCWHYJCHNFCESEHBKBWOVNOOQUMJAKBXPAZNDWROQIVOSBVYIGIJJULEBHTTKYTYMATDLEWWWRPPCQARPTALEVOC");

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
    msg.setTimeStamp(0.9678774741902432);
    msg.setSource(64826U);
    msg.setSourceEntity(51U);
    msg.setDestination(60679U);
    msg.setDestinationEntity(62U);
    msg.name.assign("BVFPSMFDZUATOSNLQFHWWLAHJXQFXWGYBUMSIZVFHUBQNMPBHUFWXSGJJDZEGCGRUSRVOLEUATZRQAVKXMEGPDSTAAYGCQCAIFNCVKRJSVIVQODFJXPXCLPTFONYPVDBDOSALTMJKKUZNHZKRYBACGRGDSIOKYTHVOYIBJIJLZATUZNQPLPWJCIGMOBZIBTWWUWXZHYPKDRWQCRCXMPDUERHTMYLW");

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
    msg.setTimeStamp(0.10843530305090476);
    msg.setSource(38142U);
    msg.setSourceEntity(29U);
    msg.setDestination(13086U);
    msg.setDestinationEntity(192U);
    msg.name.assign("UZPQFALPTTHLLAXEPNVNFDFYJHIWHKQHUHCJROFMJABGAVMMINFXMNGZIAVNETCTBDWVKEOPSXLAARIPHGQVTKPKCUSNYIOUNIWEKVYQKYTPJDGHZYIAZRRTWLFOSPGBQJXSXDVGZKMEFOIDIODXYJ");

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
    msg.setTimeStamp(0.8478472730934834);
    msg.setSource(48435U);
    msg.setSourceEntity(49U);
    msg.setDestination(55238U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MXASLSZZJIIYLKES");

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
    msg.setTimeStamp(0.7067086778247822);
    msg.setSource(42057U);
    msg.setSourceEntity(145U);
    msg.setDestination(24137U);
    msg.setDestinationEntity(202U);
    msg.name.assign("BORUANRWVRYHWJBNEUSTTGKDMOWWQUPTCCDMMGKIEXYHXEDBSAYTEVZZVCAL");

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
    msg.setTimeStamp(0.033262629736547256);
    msg.setSource(5927U);
    msg.setSourceEntity(25U);
    msg.setDestination(16998U);
    msg.setDestinationEntity(67U);
    msg.name.assign("IRPPCITTOLCYOXEMZQAUWWZTSMXEOEMLAOVEOYJKLNHKAASIYWDRXMKWPGYRXBWQGHYBBVVZCSQNLIBWHJRSHZDKABLJTNRFKWUAIWCMDEGTBEUVQJVXUGZDXAWVZOGJTQSCFYGTGCFQQPRTPNHEFDEUBDBJECXMARZNEKUMDJJAYZXIHVSOCPRNMPYSKSLNUSFD");

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
    msg.setTimeStamp(0.1293930870759059);
    msg.setSource(46455U);
    msg.setSourceEntity(111U);
    msg.setDestination(7374U);
    msg.setDestinationEntity(238U);
    msg.type = 244U;
    msg.error.assign("HBYZRMLDIFTCGGZNNLQSFWAMLQKOYAREXBLZXYEXPVUNCLPZTKLJJKTAPGOWSDRETDHPVFIWBMRSDTIMPRPNXSHQRYVYPGBHTJVWBMH");

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
    msg.setTimeStamp(0.24304810137083344);
    msg.setSource(54649U);
    msg.setSourceEntity(151U);
    msg.setDestination(52628U);
    msg.setDestinationEntity(55U);
    msg.type = 85U;
    msg.error.assign("OTYMGGPSCJCTJOMWHZYPOIQBDDDVZUDOMGOYDZOTCYKXQSFROUGFQMVQEUXBSBVKDEDEGULTPFLLOBGDSNTSEVKPCJRNAKSFWURLFCBCYKLWJBPPLTHAQJXDCXCALSJVYRSBFENWIBXRCHVHHAXQAUXMIHZAFPMQUHZMKRAPVGWIOZJVTSEYFNQBEMNJQXDJZUWNRGIFKKYARMYXHNYEVLTBNAGWQNGIFTZJTAWWZMULXKLIOHIK");

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
    msg.setTimeStamp(0.4986648122591033);
    msg.setSource(13891U);
    msg.setSourceEntity(117U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(209U);
    msg.type = 88U;
    msg.error.assign("MAMWXCWCKGZWTYKMACUHDRPFLTYRVYUASBQZINQMTLPZLFFCOHFOYDAUVUVKOPWIGWTSPIDVYJAIMRLJJFPFHLXUWZNSJBVWHEXCTTGJTAQIQRJZYGKNNIYEUFFUWQXKRNIPSCDYLRAFLUIDBEBSZHKCVUMBSALEJVHXQMOZJC");

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
    msg.setTimeStamp(0.869678006426066);
    msg.setSource(582U);
    msg.setSourceEntity(82U);
    msg.setDestination(23427U);
    msg.setDestinationEntity(91U);
    msg.seq = 54761U;
    msg.sys_dst.assign("MCBRWTRKEKSGDTGNHYTXYMPJXVVSRKHOXYDPIUYAQMWFZSFLBXVGIHBJKTSHAQHBTYSCGMGNQMDNVQAZMELIOANTLHUSECYDUNAWFUYDRKFNZOKQXDWIUSCHOWXDVBOPLWSGOOXBPBPMATJICXPIFVKJZIUYYOPXEONNDCPC");
    msg.flags = 235U;
    const char tmp_msg_0[] = {69, 97, 92, -47, 2, 62, -93, 105, -91, -28, -21, 37, 120, 10, 60, -21, -61, -77, 28, 68, 90, 20, 113, 38, 115, 16, -56, 56, -70, 37, -94, -105, 22, 43, 71, 38, 47, 118, 102, -104, 36, 76, -16, -118, -103, -74, 32, 61, -38, -75, 86, 76, -24, -65, -85, -7, -117, 54, -9, 32, 89, 53, 115, -86, 71, 23, 7, 25, -126, -17, 101, -31, 7, -79, -77, -123, -68, 107, -22, 4, -63, -50, 48, 33, 39, -28, 29, 11, -52, -120, -6, -39, 62, -111, 42, -75, 97, -110, -6, 73, -65, -23, 99, 27, -35, 25, 49, 93, -15, -3, 38, -124, 42, -2, -37, 66, -124, 11, -77, 20, 17, 19, 82, 5, -125, -92, -117, 29, -17, -13, -36, 74, -7, 18, 93, -51, 106, -89, 81, 46, 89, 65, -124, -114, 77, -55, -39, -70, 41, -4, 5, -80, -110, 99, -65, 109, -77, -17, 50, -62, 14, -15, -76, -94, -78, -4, -123, -4, 11, 56};
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
    msg.setTimeStamp(0.6013605049154583);
    msg.setSource(61998U);
    msg.setSourceEntity(177U);
    msg.setDestination(59147U);
    msg.setDestinationEntity(97U);
    msg.seq = 64570U;
    msg.sys_dst.assign("ADNHXWGEEHJALDITJKPKFNGDHMCFWULVODFRUUSDLIQIIKFYWOPGWSHNPIZ");
    msg.flags = 6U;
    const char tmp_msg_0[] = {6, 78, -126, 95, -128, -79, -48, 23, -113, -62, 55, 120, -8, -41, -59, 99, 3, -59, -97, -73, 62, -96, -122, -98, -77, 33, -7, 21, -65, 107, -93, 124, -119, 16, 125, -99, 109, -103, 4, -114, 117, -6, -4, 116, 92, 10, 15, 90, 45, 61, -101, 52, -11, -87, 67, -127, -94, -34, 22, -40, -2, 37, 53, -62, -105, 33, -93, 36, -25, -17, -76, -61, 15, 77, -73, 32, -125, 6, -20, 46, 18, -55, -22, -60, 80, 105, 104, 67, 34, -41, -77, -76, -59, -31, 107, -55, 99, 108, 34, -119, 125, -76, -106, -102, -115, -38, -53, 74, -75, 26, 0, 124, -57, 37, 120, -114, -16, 25, -31, 28, -42, 15, 55, 107, 7, 17, 125, -68, 52, -103, -52, 27, -68, 14, 28, 21, 116, -42, -17, -61, 93, -52, -72, -28, -123, 66, -57, 41, -7, 74, 31, 11, 126, 59, -13, -90, 107, -111, 43, -6, -88, 56, 51, 53, 55, -14, 14, -47, 33, 101, -13, 1, -16, 24, 126, 17, -6, 50, -105, 111, 76, 95, -127, -4, -57, 20, 89, 38, 88, 69, 86, -66, -56, 107, 54, -53, -32, 42, 24, 116, -39, -57, 123, 108, 84, -90, -66, 7, 87, -63, 20, 110, 105, 106, 30, 35, 116, 103};
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
    msg.setTimeStamp(0.7325317040852225);
    msg.setSource(649U);
    msg.setSourceEntity(179U);
    msg.setDestination(8089U);
    msg.setDestinationEntity(107U);
    msg.seq = 38637U;
    msg.sys_dst.assign("THOVXKOQAYCJTTZQDBUBRVRTHOHCIKQAA");
    msg.flags = 203U;
    const char tmp_msg_0[] = {104, 72, 26, -105, 2, -83, 101, 14, 59, -105, 59, -125, -24, 76, -15, -110, 50, 4, 67, -89, 12, -72, -61, -1, 99, 45, -108, -114, -3, -35, -117, 0, -32, -47, -81, -90, -39, -43, 17, 57, -100, 46, 24, 76, -125, -26, -102, 58, 34, 50, -16, -97, -124, -64, -42, 77, -63, 11, -43, 80, -30, -77};
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
    msg.setTimeStamp(0.1380889035263051);
    msg.setSource(38671U);
    msg.setSourceEntity(33U);
    msg.setDestination(41748U);
    msg.setDestinationEntity(101U);
    msg.sys_src.assign("FMIDAGIJYKUAKASUUTSGYBZXNPHDBMOLVXIVVWWUZPASINPYYGRFLRLDXFMXPBPFUZCITIWXSVVJDOINVKELZTVRMCDLNHDTYOSZJAKZOQHNGYAGWCSWBHSZUJQKPQFOORETPNPKTDYVEHXMIQDOFLWHENJIGPAFBJERSVMDXXOQMHCJLKJYHQZZHGKAZREJEGTCMWTSOCNQFNWTPXUVBYRBHECWQQRQLFBUCOBMEMXL");
    msg.sys_dst.assign("PBHRKUZWZYQGGMFXLDJXNTZTSKHLIPANXPYDOTUOUTQCFPNCWRUYPSAMJUJHSTDOAASJJLVHGZVFBOOXIKEDKMEDXBUQAKYXSDIPLTPVHEDHOZNKKBCWDAEODNBOLQMXNMNZCFFBFIKFBCGSXVTSZGVJSLURUCIYADCHJYIHIEMFCAMNWQCFTXYBLYPLGBSTWEYEQVJNQEZVWRVPARICR");
    msg.flags = 216U;
    const char tmp_msg_0[] = {109, 17, -18, 4, 46, -39, 111, -44, -83, -8, -24, -80, -40, -72, -88, 101, 95, 64, -77, -50, -57, -39, -121, 62, -55, -118, -30, 39, 55, -19, 124, 58, 50, -115, -48, -53, -95, 52, -32, -98, 118, -40, 73, -52, 77, -10, -78, -103, -54, -69, 20, 1, -97, 71, 81, -63, 84, -94, 104, 41, 122, 34, 103, -4, -93, -40, 112, -60, 50, -122, 17, -3, -72, 7, -122, 56, 38, 95, -100, 120, 80, -54, 40, -69, 51, 31, 102, 49, 124, 2, -115, 26, 2, -105, -25, 88, -117, 9, 3, -93, 64, -33, -6, -24, 78, 110, 68, 1, -121, -58, 51, -29, -126, 80, 18, 73, 86, -124, 27, -44, 27, 14, 112, 125, 119, 41, 77, -86, 44, 68, -19, -66, 120, 23, -88, -121, -27, -58, -34, 1, 33, -6, 47, -36, 51, 100, -64, -110, 16, 24, -124, -25, 15, 116, 48, -120, -91, 85, 56, 95, -58, -55, 2, -3, -110, 101, -62, 73, -16, -19, -71, 115, 112, -73, -2, 120, 94, 100, -29, 108, -28, -60, 31, 19, 68, 12};
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
    msg.setTimeStamp(0.9647426542916213);
    msg.setSource(30891U);
    msg.setSourceEntity(210U);
    msg.setDestination(18806U);
    msg.setDestinationEntity(250U);
    msg.sys_src.assign("AMSGDAUTPKKMXWOHEGTDOGHWKOUWSBYPWNVQLDKLODTNWTCVBMULYFDXBQJXMCYHCIGJUVAVBTUREOPYIRUCJC");
    msg.sys_dst.assign("JKKWSMXXIYDMNUNVDNLNYRGZXCOATRIQZZMLUFXJWGLFTQJHYBUPSFPAVWXTDGMMJTCDBZLQYVTWITESOIREFZJBTAQT");
    msg.flags = 7U;
    const char tmp_msg_0[] = {-104, -21, -99, -36, 25, 54, -51, -11, -103, -73, -28, -18, -105, 81, -17, 64, 74, 5, 84, -120, 118, -5, 2, 67, -59, 114, 48, -46, 0, -71, -91, -24, -98, 24, 126, -5, 8, -47, 113, 50, -49, -54, 58, -6, -14, -12, -115, -115, 99, -92, 12, -62, -116, -118, -68, -70, 60, -64, -63, -58, 109, 99, -15, 44, -59, 54, -93, -28, -106, 84, -26, -117, 88, 26, 43, 66, 65, -4, 25, 89, -74, 12, 51, -95, 110, -123, -78, 52, -16, 95, 28, 115, -69, -77, 79, -17, -78, 28, -105, 39, -116, -6, 79, -1, -63, -36, 83, 49, -40, -65, -109, -46, 36, 89, 108, 86, -12, 82, 64, 6, -15, -84, -6, -124, -43, 81, -37, 118, 60, 50, -21, -99, 85, 75, -12, -92, -83, 48, -63, -119, 91, 52, 115, 121, 30, 0, -22, -69, -59, -22, 45, 12, 12, 44, -42, 77};
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
    msg.setTimeStamp(0.9896672872606627);
    msg.setSource(56485U);
    msg.setSourceEntity(168U);
    msg.setDestination(30996U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("IAXQTWPPSSKVXLMWZNMDWPXHIYFVUPFURVAOSQEYLPBNWDYULQOBEOWIFIYFFKLCQOXRQLX");
    msg.sys_dst.assign("YZDQDRKIMOYYGAOEIHVMYJWRNUVFKEJEHYZSFVFAMVZQGLJPTQNVINTPDJWPQWEQAVGXLVLDYFKAWEZMXXWVCMMRRGEHZLKSMYCHAHIZMFEGCALTHRXJZBPOCNKDNWVUTIWPPDLUBHRUXYEOSNJTTBGKFCUZQGAUDRXCFBELBOKXR");
    msg.flags = 41U;
    const char tmp_msg_0[] = {-84, -89, 60, 96, -40, -56, 76, -48, -113, 65, -12, 1, 15, 80, -109, 110, -7, -29, -33, 58, -93, 82, -1, 100, 8, -57, -43, 6, 46, 101, -40, -51, -128, 99, -99, -90, -106, -9, -8, -113, -84, 48, 122};
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
    msg.setTimeStamp(0.502726680079578);
    msg.setSource(37486U);
    msg.setSourceEntity(192U);
    msg.setDestination(56121U);
    msg.setDestinationEntity(62U);
    msg.seq = 24117U;
    msg.value = 124U;
    msg.error.assign("PZUXTSQUNESHFCZTIGQICCAKRLHJ");

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
    msg.setTimeStamp(0.03293152772758867);
    msg.setSource(17207U);
    msg.setSourceEntity(136U);
    msg.setDestination(7835U);
    msg.setDestinationEntity(101U);
    msg.seq = 56423U;
    msg.value = 12U;
    msg.error.assign("CQYRBBIAYKNVJLFQCKLPVJQEZLQJDZCVHPSIYVHHWTXEPXFULCEWBULONHGKHXMIQDHSJEFYRGRHMUUIUXPEAPLVERTKQWYDBAUNPO");

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
    msg.setTimeStamp(0.4779859148673451);
    msg.setSource(46084U);
    msg.setSourceEntity(75U);
    msg.setDestination(57862U);
    msg.setDestinationEntity(188U);
    msg.seq = 60902U;
    msg.value = 195U;
    msg.error.assign("DVMOSMSWMNAARTHLKGHSXZBLNTVANWVZVDCIYQQKUIHMMTGINPQAZJJZCKJICDSQWIOOFZCJPMNWPVHEUMBTFRRAXALQRNOWEODXGGIAJGWCYLWPBSXJNUHRTHEUWTIPEDTGFSFFJCFUPQZRGSSRMVRVUUNIBKKSIAQNIRNXUCJFYKXXBGPZLYLEGCBLTBYDTE");

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
    msg.setTimeStamp(0.9113823252035156);
    msg.setSource(20465U);
    msg.setSourceEntity(66U);
    msg.setDestination(13936U);
    msg.setDestinationEntity(111U);
    msg.seq = 29263U;
    msg.sys.assign("CPKFIOUBYKLEATXPZVYAUMQWBEXWRLHHGNLGMCRQBPHFQLGJUDIKEXJRWANHVRWZSLGNXFSJDZDBALVSDBUKZEIJCVAHPRKMVYSEDAGKTSUGIAYJNBLZZDFZHUQNTFHPCOWTTVPYEVWYUGFDEGBNOAUXSMWSZTGPXCROUNUYEOPXZCHBTXVEORWQTPSKSIGRTLBVCHFIIADBJOYNIMYFAYMMSFCORCNOKLDLVJTZJCKJJMWQXQIHPXROEMWKM");
    msg.value = 0.9695310499511895;

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
    msg.setTimeStamp(0.26764245446684976);
    msg.setSource(64149U);
    msg.setSourceEntity(123U);
    msg.setDestination(25256U);
    msg.setDestinationEntity(8U);
    msg.seq = 48109U;
    msg.sys.assign("GOVOZCILAKVVGRMLIKCTTATSRAUQMECDLBBBRCHYOYZCTLDXKQHDQOPJGTXVQGSHHCEXIFJDFNCPONSSWHMNEOQUVIJZIZZIOWJKITCNYPWXANDZOMFOYYSRHNSVDZBNBTERLTYEKAAHBWNXBUUBJVELZJGPPUMUFFNJUUIHNKSWYAMGWGEEGLKEPKKPUWGIRLQJYCJBQWQFEGMPYAQRPDUHTPMFMXRXFACLOX");
    msg.value = 0.43398992131923664;

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
    msg.setTimeStamp(0.9659774072193612);
    msg.setSource(1052U);
    msg.setSourceEntity(24U);
    msg.setDestination(4514U);
    msg.setDestinationEntity(226U);
    msg.seq = 4546U;
    msg.sys.assign("VOWXHRNYAFQSPKBQAHDPYSUBFKZMMBMBBOXEZIVBNIKKGOSUQEOBGKVRUUOVNCYFQFKLRQZIXALWQPSCCPNOLITXARZZAVPULUTMYQSNLGQFEZCZWHPDOPSNFKKYTNU");
    msg.value = 0.19107287102632653;

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
    msg.setTimeStamp(0.30020512106653807);
    msg.setSource(32538U);
    msg.setSourceEntity(9U);
    msg.setDestination(53824U);
    msg.setDestinationEntity(104U);
    msg.action = 174U;
    msg.longain = 0.9525968481452434;
    msg.latgain = 0.8529424995319287;
    msg.bondthick = 3627522511U;
    msg.leadgain = 0.08188026573706852;
    msg.deconflgain = 0.428684859934249;

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
    msg.setTimeStamp(0.6971879506151368);
    msg.setSource(50576U);
    msg.setSourceEntity(166U);
    msg.setDestination(28491U);
    msg.setDestinationEntity(175U);
    msg.action = 48U;
    msg.longain = 0.9047886059372183;
    msg.latgain = 0.5404179163816473;
    msg.bondthick = 4046868296U;
    msg.leadgain = 0.41365497054470657;
    msg.deconflgain = 0.6820632227782218;

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
    msg.setTimeStamp(0.5172987535598877);
    msg.setSource(64483U);
    msg.setSourceEntity(21U);
    msg.setDestination(43554U);
    msg.setDestinationEntity(158U);
    msg.action = 183U;
    msg.longain = 0.6490875249979003;
    msg.latgain = 0.9247924200559661;
    msg.bondthick = 2481809863U;
    msg.leadgain = 0.38136233653159146;
    msg.deconflgain = 0.6518151956548105;

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
    msg.setTimeStamp(0.5674870142926178);
    msg.setSource(41927U);
    msg.setSourceEntity(218U);
    msg.setDestination(4335U);
    msg.setDestinationEntity(212U);
    msg.err_mean = 0.4059876993384174;
    msg.dist_min_abs = 0.0856153281770734;
    msg.dist_min_mean = 0.4472573656708223;

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
    msg.setTimeStamp(0.42711919454987657);
    msg.setSource(22055U);
    msg.setSourceEntity(252U);
    msg.setDestination(43047U);
    msg.setDestinationEntity(245U);
    msg.err_mean = 0.9218044525765906;
    msg.dist_min_abs = 0.9758562404573662;
    msg.dist_min_mean = 0.015400446057544426;

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
    msg.setTimeStamp(0.22197668702349793);
    msg.setSource(8726U);
    msg.setSourceEntity(133U);
    msg.setDestination(12410U);
    msg.setDestinationEntity(154U);
    msg.err_mean = 0.35699503952515144;
    msg.dist_min_abs = 0.4082062928983059;
    msg.dist_min_mean = 0.0744662909017989;

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
    msg.setTimeStamp(0.49523499769761214);
    msg.setSource(36845U);
    msg.setSourceEntity(188U);
    msg.setDestination(54988U);
    msg.setDestinationEntity(67U);
    msg.uid = 95U;
    msg.frag_number = 169U;
    msg.num_frags = 87U;
    const char tmp_msg_0[] = {-21, 30, 43, -32, 116, -42, -119, -6, -117, -26, 41, 2, -22, 86, -96, 57, -118, 112, -5, 83, 9, -10, 90, -97, -14, 66, 108, 83, -127, -47, 35, -45, -18, 123, 43, -88, 69, 104, 108, -40, 22, -83, -16, -106, -39, 1, 57, 111, -85, 65, -81, -9, -61, 109, -111, -49, 57, -107, 15, -17, -42, -65, -12, 65, 85, -77, 106, -92, 86, -110, -124, 108, -74, 1, -5, -29, -112, 16, 0, -96, -39, -66, -95, 90, -5, 113, -42, -25, 6, -93, -98, 109, -37, 114, -75, -34, 115, 16, -36, -9, -78, 123, -29, 19, 12, 92, 3, 2, -126, -72, -34, -32, -17, 3, 54, 105, 5, 63, -111, 104, -39, -46, 117, -24, -30, -97, -22, 93, -9, -3, -111, 41, 2, -4, 71, -63, 72, 113, -36, -47, 46};
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
    msg.setTimeStamp(0.7502575525445044);
    msg.setSource(45100U);
    msg.setSourceEntity(175U);
    msg.setDestination(56272U);
    msg.setDestinationEntity(224U);
    msg.uid = 24U;
    msg.frag_number = 71U;
    msg.num_frags = 68U;
    const char tmp_msg_0[] = {101, 10, 99, -121, -59, -125, 48, -61, -121, -118, -78, -79, 2, 90, -97, 8, 20, -42, 38, 29, -61, 12, 88, -61, 71, 76, -16, 19, 12, -45, -15, -61, -5, -7, -72, 45, 39, 112, -76, -91, 42, -106, 99, -83, -119, -37, -73, 22, 113, 101, -67, -21, -111, 60, 115, 77, 52, -57, -61, -85, -57, -92, 16};
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
    msg.setTimeStamp(0.6634199947163357);
    msg.setSource(47523U);
    msg.setSourceEntity(53U);
    msg.setDestination(45802U);
    msg.setDestinationEntity(102U);
    msg.uid = 131U;
    msg.frag_number = 32U;
    msg.num_frags = 159U;
    const char tmp_msg_0[] = {-93, -96, 74, 43, -111, -118, -36, -6, 58, 7, 124, -10, -97, -44, -3, 52, 55, -107, -110, 69, -55, -101, 43, 94, 81, -1, -3, -117, -36, -40, -17, 108, 72, -56, 62, 56, 111, -99, -41, 12, -27, -17, 67, -88, -24, -25, -122, 82, -88, -125, 102, -61, 107, 67, -47, 86, -16, -96, 37, -54, 111, -97, 5, -45, 106, 51, 56, 80, 83, 44, -58, 79, -30, 49, -88, -116, -49, 19, 13, 42, 86, -120, -79, -37, 120, 27, 62, 40, 69, 50, -50, -3, -128, 38, 7, -66, 10, -59, 82, 23, -76, -71, 38, -50, 50, 73, -72, 31, -10, -8, 27, -119, -109, 44, 51, 19, -97, -75, -108, 71, 99, 20, 42, -88, 111, 38, 9, -76, -101, 115, 76, 104, 12, 0, 102, -73, -125, 105, 33, -11, -123, 51, 63, -123, 12, -8, 12, -73, -123, -73, 43, -87, 124, 75, -67, 83, 24, 58, 50, 123, 39, 58, 79, -23, 65, 20, 51, 26, 99, 107, -112, -106, 105, 36, 21, -98, -123, 61, 119, 24, 123, 14, -7, -13, 51, 72, -32, -93, 109, 110, -18, 105, 62, 17, 20, -16, -72, -7, 59, -79, -122, -86, -43, -28, 64, -118, 38, -88, 48, -60, 61, 18, 7, 12, 23, 109, -81, 0, 7, 93, -71, 64, 24, -60, -32, 108, -124, 97, -65, 97, 114, -78, -9, 53, 101, -68, -57, -100};
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
    msg.setTimeStamp(0.4982659910977768);
    msg.setSource(18738U);
    msg.setSourceEntity(231U);
    msg.setDestination(43530U);
    msg.setDestinationEntity(143U);
    msg.content_type.assign("UQZQQKMCMOZWOZIHCDKCEJKTTNXBTENREHIEUOVBXFIXPAZGWEPGXYPJQSVMINLGHUCCREEGCPSYAYCANYNLHYVTHBP");
    const char tmp_msg_0[] = {-29, 79, 16, -26, -123, -76, -111, 64, 57, 107, 119, -72, -92, -111, -24, -33, -18, 91, 76, 75, -90, -96, 90, -117, 116, -1, 108, 114, -76, -38, -96, -47, 25, 0, -106, 125, 54, -13, 57, 30, -70, 123, -29, -60, -45, 38, 71, 39, -117, 88, -43, 110, 53, 91, -76, 45, 46, -4, 108, 126, 110, 43, 50, -29, -56, -49, 22, 3, -2, -29, 99, 73, -66, -59, -57, -60, 10, -87, -84, -19, 107, 123, 21, 115, -84, -53, -19, -108, -6, -102, 82, 48, 91, -87, -82, 37, 74, -69, 117, 65, -38, 24, -64, 100, -55, -34, -53, -49, -122, -11, -78, 23, -35, 82, -49, 42, -29, 109, 80, 26, -15, -55, -40, 31, -25, 93, 61, -9, -67, 78, 1, -35, -61, 80, 15, -3, -27, 68, 7, 99, 73, 7, 78, 90, -13, 66, 122, 12, 5, -126, -14, -67, -39, 96, -35, 44, -96, 112, 4, 126, -1, 120, 94, -30, -77, 125, 68, 51, -9, -16, -33, 16, -15, 117, 99, 22, -41, -9, 104, 17, -104, 46, -124, -114, 111, -64, 123, 16, -68, -47, 27, -39, -96, -91, -64, 13, 111, -55, 124, -128, 60, 117, 85, -25, -27, -40, 47, 57, 22, -1};
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
    msg.setTimeStamp(0.880011829523205);
    msg.setSource(25994U);
    msg.setSourceEntity(236U);
    msg.setDestination(53929U);
    msg.setDestinationEntity(82U);
    msg.content_type.assign("QOVZJSYFXNOPCFQMGWFRXAZLLKFJFPZMEOYVKZVRTJSLZVNDJNLUVGROHOBQYKSYXDLYVNEKCDHPRWNTLGDJWATFTEHXRFRJELZRIBUXHBRMNXKACKLUJKQIAZEWBUSYWWXQITAIMGPXBYGQPUPZNUBOIZVEMSAEMUKQHIAIJCCNTSOIMYHFMLHBETPRANLKWEGQUHBCCDCQUOPGBSHTPWIBX");
    const char tmp_msg_0[] = {-27, -38, 83, -105, 60, 37, 2, -18, -123, -55, -1, -114, -44, 17, -54, 74, -25, -8, -6, 44, 21, 15, 55, 93, 59, -74, 15, 16, 5, 120, -52, -16, 58, 44, 49, -106, 68, 53, -6, 59, -102, -74, 68, -110, -7, -40, 107, 76, 34, 65, 3, 96, -91, 31, -37, -119, 15, 36, -67, 7, -107, 65, 80, 76, 65, -120, 87, -13, -55, 123, -127, 93, 116, 25, -10, -104, -58, -2, -121, 31, 85, -128, -43, -78, -16, 51, -41, -127, -50, 87, -11, -25, -114, 22, -10, -113, 113, 27, 41, 3, -119, 103, -20, 71, 86, -57, -25, -49, 122, -119, 44, 93, -108, -60, 21, -7, -15, 78, -27, 36, -80, -56, 47, -55, -101, -106, -43, 62, -10, 118, 101, -41, 7, 78, 6, 61, -11, -78, -105, 59, 84, 110, -108, 0, -125, 58, -49, 123, 33, 31, 38, 107, -23, -76, -112, 30, 76, 92, 41, -78, 25, -35, 51, 31, -56, -81, 115, 12, -60, -19, 57, -67, 65, -78, -6, 26, -75, -30, 85, 43, -29, 108, -34, 99, -35, 31, -43, 32, 103, 25, 97, 114, 119, 116, -6, -43, -18, -13, -61, 35, -21, 117, -97, 123, 111, -110, 69, -16, 45, -7, -110, -3, 119, 10, 41, 20, -91, 9, 34, 21, 7, -59, 46, -60, -34, -106, 17, 71, -57, -50, -9, 41, -57, 18, -52, 123, -80};
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
    msg.setTimeStamp(0.2678440206878515);
    msg.setSource(65277U);
    msg.setSourceEntity(212U);
    msg.setDestination(26661U);
    msg.setDestinationEntity(57U);
    msg.content_type.assign("BZEZUTWUPEQYDFOJIPWFLOPMQHXPQFQMOHYERQIAVFQUJHMPZMXQEKYVRCCCDGTOBORLNUXQCUSKTGEGGGHUMDCXJAAXXPWRMIELNKEZSFJADORLGKSASJXLDKVHWNIYCPTP");
    const char tmp_msg_0[] = {-85, 7, 42, -90, -99, 8, 32, 101, -115, -119, -125, 38, -50, 58, 28, 31, 78, 105, -114, -97, 121, 26, 75, -12, 2, 10, 4, -26, -45, -86, -8, -95, -121, -70, 81, 1, 119, -75, -85, -126, -57, 78, -112, 18, 54, 3, -7, 93, -56, 117, -71, 72, 42, -68, -25, 21, 78, -55, -83, 3, -75, -16, -17, 95, 119, -60, -55, 64, -85, 108, -40, -90, -15, 83, -48, -27, -67, -114, -90, -116, 94, -24, -82, 80, 53, -54, -103, -101, -5, -36, 48, 26, 108, -56, -75, 106, -94, -27, 116, 13, 94, -80, -66, 84, -34, 86, 6, -68, 19, 30, -106, 21, 29, -30, 17, -23, 94, 73, -36, 49, 106, 30, 117, 63, -97, -101, 30, -107, 55, -8, -80, 60, 0, 85, 10, 62, -5, -84, -97, 30, 19, 57, -56, 40, 90, -23, -11, -92, -61, -73, 4, -9, -73, 124, -84, 121, -8, 68, -23, -110, -33, -103, 70, -45, 120, -95, -102, -54, 65, -31, 40, 69, -61, 32, -111, 54, -115, -34, -88, 88, 113, -22, -51, -20, -61, 76, -54, 8, 9, -16, -125, 22, -67, -41, -27, 76, -32, -48, 116, -66, -84, -50, -72, 46, 120, -21, 21, 74, 89, -66, 119, 59, 67, 15, -106, -102, 23, 11, -3, -42, -75, 75, 8, -116, 30, -12};
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
    msg.setTimeStamp(0.7340581896182865);
    msg.setSource(34738U);
    msg.setSourceEntity(180U);
    msg.setDestination(8928U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.8006118506526774);
    msg.setSource(9190U);
    msg.setSourceEntity(37U);
    msg.setDestination(46460U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.7548007649961902);
    msg.setSource(44758U);
    msg.setSourceEntity(145U);
    msg.setDestination(16007U);
    msg.setDestinationEntity(193U);

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

  return test.getReturnValue();
}
