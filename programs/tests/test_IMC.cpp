//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: a96a19060ca939f58823cb345d5c4a77                            *
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
    msg.setTimeStamp(0.007607383602327489);
    msg.setSource(36438U);
    msg.setSourceEntity(210U);
    msg.setDestination(19595U);
    msg.setDestinationEntity(245U);
    msg.state = 72U;
    msg.flags = 125U;
    msg.description.assign("FSTIJIPXRKMRDYSDFHSHMKVHWUGSDJFAIFHXVVSVNGW");

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
    msg.setTimeStamp(0.2998862978978427);
    msg.setSource(25117U);
    msg.setSourceEntity(94U);
    msg.setDestination(823U);
    msg.setDestinationEntity(249U);
    msg.state = 112U;
    msg.flags = 143U;
    msg.description.assign("RNAIFEFUBCLTJQXZVZDUXS");

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
    msg.setTimeStamp(0.8444429533193907);
    msg.setSource(49768U);
    msg.setSourceEntity(105U);
    msg.setDestination(43158U);
    msg.setDestinationEntity(87U);
    msg.state = 3U;
    msg.flags = 187U;
    msg.description.assign("NLMMEIJMQREMLRYANWKCLVANRXUOTZCMIFMLFFYVZLPWVJOPRQTFNGEJHXGJRIFTWWDYGHWSZTLR");

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
    msg.setTimeStamp(0.4769323570882287);
    msg.setSource(15505U);
    msg.setSourceEntity(236U);
    msg.setDestination(8948U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.924552158016201);
    msg.setSource(1530U);
    msg.setSourceEntity(181U);
    msg.setDestination(39593U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.30549305797624404);
    msg.setSource(18573U);
    msg.setSourceEntity(34U);
    msg.setDestination(36509U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.12026509805143926);
    msg.setSource(8274U);
    msg.setSourceEntity(149U);
    msg.setDestination(35138U);
    msg.setDestinationEntity(86U);
    msg.id = 245U;
    msg.label.assign("YTDRVOZZCQIJORMUWDSHPWVPWGTPJFNROOGHGYCQUSSVKHLLOKEUYMGURZZWJSLZTBVMJXFXNJQEZEKMFMHQHJDBWQCWEKSCIPGIAFDIVQCPXLULQTXODZJBCFOXKHTBLXGULWGANBFBRUFOVAGTUYENGFCMRVPKPPMDIYI");
    msg.component.assign("DYWNQJKRBMQMHCUV");
    msg.act_time = 5302U;
    msg.deact_time = 9974U;

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
    msg.setTimeStamp(0.4865777157614972);
    msg.setSource(33422U);
    msg.setSourceEntity(109U);
    msg.setDestination(18725U);
    msg.setDestinationEntity(87U);
    msg.id = 252U;
    msg.label.assign("IOHOVOCYBDIGHSZNTKRALNJNLLLPGOREWXKFUKCECYAQRAMTMNTQEMHCXDNWJWDJYDUOISJSGQTWVVXBFBNLRWYLCCLPEKBZAUIRAHBDPVLTIKUKSNYGPMUJHQURTRXZHXMQWBHSFUZNHEQCJFCKHITMRRKKHIYFGEAAT");
    msg.component.assign("LZCZZYKELQWQKSDA");
    msg.act_time = 26825U;
    msg.deact_time = 58151U;

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
    msg.setTimeStamp(0.3791588174056355);
    msg.setSource(52932U);
    msg.setSourceEntity(37U);
    msg.setDestination(52549U);
    msg.setDestinationEntity(126U);
    msg.id = 87U;
    msg.label.assign("VNZSSBKYZAXQYVOZDDGPVBGWSBQCXPLRIYRAVPKTUBWJGUESPXNPDFYORFNNXK");
    msg.component.assign("WPMNQHBLEFYAKHEIMIBMWWEXQSAYNYGRMFBVGALAQQZWHSYWCYYIVESALFHZSOBDFBZHCKIJLAORNKPXRUNPSFMHLTJQWGUOIJJRGSXKSNCPIXEABEACUBRYYVCGCRRGDP");
    msg.act_time = 19415U;
    msg.deact_time = 45235U;

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
    msg.setTimeStamp(0.8199282964847535);
    msg.setSource(61532U);
    msg.setSourceEntity(133U);
    msg.setDestination(58116U);
    msg.setDestinationEntity(66U);
    msg.id = 92U;

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
    msg.setTimeStamp(0.2707480618745557);
    msg.setSource(58923U);
    msg.setSourceEntity(40U);
    msg.setDestination(54411U);
    msg.setDestinationEntity(53U);
    msg.id = 32U;

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
    msg.setTimeStamp(0.24707419490340488);
    msg.setSource(17257U);
    msg.setSourceEntity(113U);
    msg.setDestination(53767U);
    msg.setDestinationEntity(123U);
    msg.id = 35U;

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
    msg.setTimeStamp(0.9594248303619187);
    msg.setSource(12347U);
    msg.setSourceEntity(29U);
    msg.setDestination(47176U);
    msg.setDestinationEntity(219U);
    msg.op = 9U;
    msg.list.assign("IKHUCVSQKTYEVTORXTFRYPIBYVNCWLEAFSMHZGWGZAMGMTMXMRGGJIUANFKUMZJUIIANYRBGDVYJAKPUAYQQCSXSQALIOLOIRMHCXOSZUQUGMHEIFLWLBOHGAEOPVXNOJWREJZNPBEJXEWFTDVHBGQZLLFSAJODCNDYFHKOCCSDTPPLBZWDKWRJMRAYXNPWSKTBEKBCPXPVBVRHQOUIDDDDNTFXTKHXRUWWVNIQ");

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
    msg.setTimeStamp(0.7489400058138412);
    msg.setSource(10570U);
    msg.setSourceEntity(201U);
    msg.setDestination(15189U);
    msg.setDestinationEntity(60U);
    msg.op = 230U;
    msg.list.assign("XSQLFGDMODIUSMGLJZTGQF");

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
    msg.setTimeStamp(0.401397520838352);
    msg.setSource(23947U);
    msg.setSourceEntity(89U);
    msg.setDestination(49337U);
    msg.setDestinationEntity(134U);
    msg.op = 75U;
    msg.list.assign("YWTDDSOLEOYEGLRSZCECLQNKGJTGEQAWCOJGPVHWPJMDFXCWJTHMDKZVPDZWABYFLSSIURIFPEWFYQPKXXMBZVRIBLESGBSENVGSMODLOJLOUHBQMGMBEDVNGINYLRGYYMQRAXYAOKWQPOVUPVLXIQFKKVHCOBUTXEMFFMHNRZZPXQUCNTACUUEWITSTAHIBRPJJCQTAI");

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
    msg.setTimeStamp(0.3077214218325782);
    msg.setSource(7594U);
    msg.setSourceEntity(222U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(237U);
    msg.value = 138U;

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
    msg.setTimeStamp(0.7284175799389229);
    msg.setSource(14644U);
    msg.setSourceEntity(98U);
    msg.setDestination(1478U);
    msg.setDestinationEntity(81U);
    msg.value = 17U;

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
    msg.setTimeStamp(0.66091776724637);
    msg.setSource(27719U);
    msg.setSourceEntity(38U);
    msg.setDestination(42333U);
    msg.setDestinationEntity(185U);
    msg.value = 14U;

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
    msg.setTimeStamp(0.438472666986479);
    msg.setSource(2412U);
    msg.setSourceEntity(212U);
    msg.setDestination(20299U);
    msg.setDestinationEntity(31U);
    msg.consumer.assign("VJSQKQEYNQAFZDHXUVSNGUBPVXPRUKWWBMSOXCHZPKAAHLJTGPEWYUHBLXVEHETNMVMHEYBJMGIKNXVGDBYDVMBFIJYPNY");
    msg.message_id = 53847U;

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
    msg.setTimeStamp(0.10410055728427536);
    msg.setSource(43468U);
    msg.setSourceEntity(230U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(115U);
    msg.consumer.assign("CELYEGQNNIEUNMISAAXYBDJWMNWSUFHSPVGOQQOHZAZGISLMTKEJLXTIUKMYVUETSPYIGTFUDPQRATHQCKRXVMNDKEYDGWOHZVCDTAWJPCTHGDSQTWLGWSZNUPXRERACJFMHIOVVPQOXXMAYVNCXNZIHKIXKPOZBKHRLDSBBYOABJWSJXWCHGLFUWFZLLRRBJLPQYMZVJZJFFUQUIAPKFOEJXRCURDSD");
    msg.message_id = 5876U;

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
    msg.setTimeStamp(0.9769822927735871);
    msg.setSource(56389U);
    msg.setSourceEntity(15U);
    msg.setDestination(33348U);
    msg.setDestinationEntity(211U);
    msg.consumer.assign("TNOVRCTOQFLSNZQBHTXUENY");
    msg.message_id = 1054U;

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
    msg.setTimeStamp(0.7003653486572728);
    msg.setSource(31552U);
    msg.setSourceEntity(187U);
    msg.setDestination(3804U);
    msg.setDestinationEntity(47U);
    msg.type = 123U;

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
    msg.setTimeStamp(0.7049947817752584);
    msg.setSource(3159U);
    msg.setSourceEntity(27U);
    msg.setDestination(52249U);
    msg.setDestinationEntity(254U);
    msg.type = 127U;

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
    msg.setTimeStamp(0.7874105552064736);
    msg.setSource(60767U);
    msg.setSourceEntity(18U);
    msg.setDestination(32660U);
    msg.setDestinationEntity(29U);
    msg.type = 239U;

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
    msg.setTimeStamp(0.7309460788241039);
    msg.setSource(50088U);
    msg.setSourceEntity(23U);
    msg.setDestination(30797U);
    msg.setDestinationEntity(26U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.1580089338231806);
    msg.setSource(42805U);
    msg.setSourceEntity(249U);
    msg.setDestination(51335U);
    msg.setDestinationEntity(227U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.24323706354479757);
    msg.setSource(53941U);
    msg.setSourceEntity(98U);
    msg.setDestination(61820U);
    msg.setDestinationEntity(132U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.8695109873671103);
    msg.setSource(53241U);
    msg.setSourceEntity(210U);
    msg.setDestination(35268U);
    msg.setDestinationEntity(67U);
    msg.total_steps = 170U;
    msg.step_number = 241U;
    msg.step.assign("JDIMNLLSBGPQIBQMJDHVMLNFJADIJLKRNCTPADXRUAKHXGRCZYPTQQIUJHTGAHWTPYWMSEVPHDOEGXDXQOUEYBGDRCOFYWBLKECTKMUBGSDUOAFTRHPCNJZUOWLPDVOWYWKCFQPAKVLLOLBISBGVGERMXKVXWQAKNSSRIGAVFFILZCWVJBXBNYZOMEIZJAESUVZNTJFRRSJGFETKAOWRYDTINFICUWX");
    msg.flags = 252U;

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
    msg.setTimeStamp(0.863363171151934);
    msg.setSource(60168U);
    msg.setSourceEntity(196U);
    msg.setDestination(32739U);
    msg.setDestinationEntity(43U);
    msg.total_steps = 241U;
    msg.step_number = 164U;
    msg.step.assign("DNEQSXDWSMLYUA");
    msg.flags = 116U;

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
    msg.setTimeStamp(0.13035222749125164);
    msg.setSource(40755U);
    msg.setSourceEntity(212U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(240U);
    msg.total_steps = 46U;
    msg.step_number = 182U;
    msg.step.assign("UNIMYNKXNYODXELBMVMMNXUYJKGKLFWHZPDODIZCMJRSGTSNDBQWTNURZCHQDOLPBHIGNZNFGUBECSBKLAKBZWRIJRQFSKAXCJCQFZFKUZFGVWPOGVYDETJUJOLSEIPSODIGXXRXNDAAYTIUVPPZCHNEZGETEMHPFYCXLQHBLPBYWUHQWWAJVOUDRAECWMQBWOYTSJAUAFVKMSMJGHAST");
    msg.flags = 131U;

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
    msg.setTimeStamp(0.09652301036959776);
    msg.setSource(40257U);
    msg.setSourceEntity(238U);
    msg.setDestination(5231U);
    msg.setDestinationEntity(139U);
    msg.state = 232U;
    msg.error.assign("OCBPNOJIHKUGLICLFSWEWKZBBSDKSLUNKALPITBVTHVZFGPNEUDMXLZEZJHDCUDXWDAJTVXRLGAN");

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
    msg.setTimeStamp(0.31800452871839);
    msg.setSource(38770U);
    msg.setSourceEntity(63U);
    msg.setDestination(39282U);
    msg.setDestinationEntity(131U);
    msg.state = 215U;
    msg.error.assign("PAJJYWHGZHXIMQKFFKVWJMSMKNWUNTSRLBVXFVMZGVZTWCCDQXIXQUURUDRBEBLCDXUMEAKHWQDOQOJZGDXWNRYWEMNYTEFVIPUSAYYVQMGLKTWEPPOTORSTAWISHNBGLZMJMEFJZCNDSQACGLUTAASKIJXOHRCRBITXOOAVAPLJIQJJPFBBXQVLPZRVNBZNUFYRTPKDX");

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
    msg.setTimeStamp(0.38030741139235635);
    msg.setSource(61491U);
    msg.setSourceEntity(64U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(182U);
    msg.state = 34U;
    msg.error.assign("PGLIHAWVTCBFJAZWLFQMAQQGJKLAENTAPYUYMUWGQHJGJBITOURLVZBOIVCTJTKUUDCIWSMKOJAFYWEXCZWDOMYELADVKBCEXNUWPLEQWPCXRDVQOYHVHRRWQKKPOPLIHSVDPSKXGLMTZQJEYUX");

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
    msg.setTimeStamp(0.8640674885162298);
    msg.setSource(42679U);
    msg.setSourceEntity(217U);
    msg.setDestination(40379U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.7268337883745496);
    msg.setSource(29644U);
    msg.setSourceEntity(38U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.19484528084438313);
    msg.setSource(37910U);
    msg.setSourceEntity(235U);
    msg.setDestination(38842U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.36262868279309335);
    msg.setSource(10282U);
    msg.setSourceEntity(159U);
    msg.setDestination(529U);
    msg.setDestinationEntity(167U);
    msg.op = 146U;
    msg.speed_min = 0.5618130201447211;
    msg.speed_max = 0.23240259872684632;
    msg.long_accel = 0.41464674039517513;
    msg.alt_max_msl = 0.14837667500673868;
    msg.dive_fraction_max = 0.19547154142034762;
    msg.climb_fraction_max = 0.4531337443639817;
    msg.bank_max = 0.8046733861058738;
    msg.p_max = 0.6872016745723807;
    msg.pitch_min = 0.2501593675189565;
    msg.pitch_max = 0.4989495621816906;
    msg.q_max = 0.9286202520463155;
    msg.g_min = 0.7069680276360671;
    msg.g_max = 0.5639640655158699;
    msg.g_lat_max = 0.2934464174628848;
    msg.rpm_min = 0.7886996047824825;
    msg.rpm_max = 0.6413369889572929;
    msg.rpm_rate_max = 0.6426695798730259;

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
    msg.setTimeStamp(0.34560026873969396);
    msg.setSource(45701U);
    msg.setSourceEntity(133U);
    msg.setDestination(21635U);
    msg.setDestinationEntity(250U);
    msg.op = 240U;
    msg.speed_min = 0.35875206087024003;
    msg.speed_max = 0.5058115419992325;
    msg.long_accel = 0.4605722038756358;
    msg.alt_max_msl = 0.03439225913220967;
    msg.dive_fraction_max = 0.6098894560817443;
    msg.climb_fraction_max = 0.8414563030503581;
    msg.bank_max = 0.980704014131323;
    msg.p_max = 0.4576135165691565;
    msg.pitch_min = 0.2924473784674734;
    msg.pitch_max = 0.9409916450084828;
    msg.q_max = 0.2359739022986579;
    msg.g_min = 0.7160200722831331;
    msg.g_max = 0.4907210922557519;
    msg.g_lat_max = 0.35447226648158847;
    msg.rpm_min = 0.7152412636926189;
    msg.rpm_max = 0.26590944594929244;
    msg.rpm_rate_max = 0.19298938230650742;

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
    msg.setTimeStamp(0.8412642280746495);
    msg.setSource(20707U);
    msg.setSourceEntity(57U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(166U);
    msg.op = 205U;
    msg.speed_min = 0.6485272375740342;
    msg.speed_max = 0.25500490620102056;
    msg.long_accel = 0.20737063693658875;
    msg.alt_max_msl = 0.2888418158271737;
    msg.dive_fraction_max = 0.7768576206799392;
    msg.climb_fraction_max = 0.216869836062899;
    msg.bank_max = 0.7281013951721068;
    msg.p_max = 0.5959815648346916;
    msg.pitch_min = 0.6104482682101414;
    msg.pitch_max = 0.9153094403468207;
    msg.q_max = 0.41964742929506216;
    msg.g_min = 0.43213221251062095;
    msg.g_max = 0.4151273452506775;
    msg.g_lat_max = 0.0071474702293473635;
    msg.rpm_min = 0.1547221662809134;
    msg.rpm_max = 0.2001185967462149;
    msg.rpm_rate_max = 0.7634672577893518;

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
    msg.setTimeStamp(0.6677152681756369);
    msg.setSource(35287U);
    msg.setSourceEntity(181U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(180U);
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 3714U;
    tmp_msg_0.control_ent = 34U;
    tmp_msg_0.timeout = 0.26765135075759394;
    tmp_msg_0.loiter_radius = 0.6439225638965959;
    tmp_msg_0.altitude_interval = 0.08877599013874227;
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
    msg.setTimeStamp(0.248737478890647);
    msg.setSource(33587U);
    msg.setSourceEntity(210U);
    msg.setDestination(10387U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.30448241801260545);
    msg.setSource(61261U);
    msg.setSourceEntity(76U);
    msg.setDestination(26662U);
    msg.setDestinationEntity(57U);
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.21697417684043252;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.5770424575953528);
    msg.setSource(39465U);
    msg.setSourceEntity(156U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(14U);
    msg.value = 0.2641828527606519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.9249614864386387);
    msg.setSource(2239U);
    msg.setSourceEntity(123U);
    msg.setDestination(14561U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8507057478351129;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.1581767515580973);
    msg.setSource(1374U);
    msg.setSourceEntity(200U);
    msg.setDestination(2323U);
    msg.setDestinationEntity(247U);
    msg.value = 0.4037746148373734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.31189621558366654);
    msg.setSource(27382U);
    msg.setSourceEntity(110U);
    msg.setDestination(6560U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.17103697142232666;
    msg.lon = 0.19022396757484072;
    msg.height = 0.7959874972676474;
    msg.x = 0.0762491892338617;
    msg.y = 0.9367722097733792;
    msg.z = 0.852600762930278;
    msg.phi = 0.523347532396441;
    msg.theta = 0.2237826448530842;
    msg.psi = 0.18518774090446122;
    msg.u = 0.14081818167558924;
    msg.v = 0.6634798169055042;
    msg.w = 0.1912289791313131;
    msg.p = 0.8757168166542236;
    msg.q = 0.052104034883301176;
    msg.r = 0.07306581460240213;
    msg.svx = 0.15570932943255977;
    msg.svy = 0.16532224462336653;
    msg.svz = 0.2548474981061565;

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
    msg.setTimeStamp(0.14886289817634768);
    msg.setSource(62324U);
    msg.setSourceEntity(243U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.963350794914823;
    msg.lon = 0.9223674849594174;
    msg.height = 0.797613177057578;
    msg.x = 0.7306760218119559;
    msg.y = 0.6884681792052963;
    msg.z = 0.5108157671428188;
    msg.phi = 0.8692226522218692;
    msg.theta = 0.8649924161830908;
    msg.psi = 0.429249635496604;
    msg.u = 0.3504715039166919;
    msg.v = 0.9234417982115446;
    msg.w = 0.4259893978593493;
    msg.p = 0.6826258865777962;
    msg.q = 0.050268476807837414;
    msg.r = 0.4893427468814562;
    msg.svx = 0.032500764739380905;
    msg.svy = 0.6598436728051607;
    msg.svz = 0.7700654640992443;

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
    msg.setTimeStamp(0.9508235133174279);
    msg.setSource(9146U);
    msg.setSourceEntity(101U);
    msg.setDestination(1632U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.08058426125764562;
    msg.lon = 0.8829446432949141;
    msg.height = 0.3122403551738846;
    msg.x = 0.37109795848256544;
    msg.y = 0.4772029762679232;
    msg.z = 0.7291295223170486;
    msg.phi = 0.49752777283113514;
    msg.theta = 0.9595493864846035;
    msg.psi = 0.8658679385095724;
    msg.u = 0.8434120124982318;
    msg.v = 0.5819786716796926;
    msg.w = 0.5139635246850462;
    msg.p = 0.14767059156238826;
    msg.q = 0.5766961020117819;
    msg.r = 0.4383178440433356;
    msg.svx = 0.8765965849144164;
    msg.svy = 0.3351975273736456;
    msg.svz = 0.8653351113508595;

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
    msg.setTimeStamp(0.21157144185984822);
    msg.setSource(18385U);
    msg.setSourceEntity(69U);
    msg.setDestination(37939U);
    msg.setDestinationEntity(215U);
    msg.op = 168U;
    msg.entities.assign("KTJRNYSVFWFXMQXNFKELLKNVIICCZNYFQWBMFPXIXTROICXZEPYBCOGKTGZSGNNBYSUGOZBPTZQWALPXOWOSQXUJJPNDYJDREWHHACISDEHUZABGLEVMQVZUEVNNBKFGRLWAMGDERQJVUKPAJCIDJIFFDIJKELFCJSTYPABSXYDYILVSTMNBGRMULEETVMTQW");

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
    msg.setTimeStamp(0.6342263686541533);
    msg.setSource(54979U);
    msg.setSourceEntity(239U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(11U);
    msg.op = 130U;
    msg.entities.assign("YTYIQWMNVMMRHUDCYAOXKWZBBNCRCRPYSHKMDUKIMXFCDXVCZUYBBVGSWZK");

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
    msg.setTimeStamp(0.13409288153986576);
    msg.setSource(23778U);
    msg.setSourceEntity(202U);
    msg.setDestination(49918U);
    msg.setDestinationEntity(89U);
    msg.op = 67U;
    msg.entities.assign("QNTDBJNCTZGVOEKKLGPUOVSARFRTIBSDFSCQEKGIULNVHDUSRUSOHFCGZMHWOXRIEANBQBDWBFQXPXWXUMXMPKVFCEGFNHCJHATIRLYZKLJVVGHPRAHXCCAYCQDJZMMAOHFVMGSGIGKYXNVJKWTPCSQZVZUDMDIWWKMAJYIPDRDOUFFZYWEXRSJPLILWNRZCEKBELBTOPQZTYQBFYLJBAAKEQOMTYXJLTEQ");

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
    msg.setTimeStamp(0.2151167081202181);
    msg.setSource(46626U);
    msg.setSourceEntity(12U);
    msg.setDestination(45583U);
    msg.setDestinationEntity(161U);
    msg.type = 191U;
    msg.speed = 34251U;
    const signed char tmp_msg_0[] = {62, -97, -43, 125, 19, 10, 118, -32, 97, 76, -39, -109, -40, -103, 123, -33, -44, 87, -88, -30, 121, 123, 58, 55, -30, 75, 97, 20, 53, -79, -36, 32, 56, 73, 98, 103, -54, 109, -60, 70, -60, 79, -37, 1, -35, -6, 45, -125, 35, -79, -71, 7, -1, 90, -54, -8, 116, 87, 35, 53, -25, -37, 88, -12, -46, 64, 89, 26, -28, -97, 5, -42, 97, -120, -86, 114, 115, -14, -59, -96, 87, -18, 22, 112, -84, 63, 106, 72, -40, 61, 12, -18, -52, 8, 56, -5, 60, 12, 24, -81, 90, 66, -102, 104, -44, 11, 126, -54, 60, -30, -15, 111, 54, -96, -65, -15, -20, -18, 34, -44, 41, 82, -114, 66, -14, -50, -95, 96, -29, 60, 23, -104, -35, -93, 3, -57, 55, 117, 35, 99, -60, 41, -120};
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
    msg.setTimeStamp(0.9982556867692145);
    msg.setSource(14746U);
    msg.setSourceEntity(27U);
    msg.setDestination(41098U);
    msg.setDestinationEntity(58U);
    msg.type = 39U;
    msg.speed = 27058U;
    const signed char tmp_msg_0[] = {84, 89, -73, -91, 16, 5, -8, 6, -33, -32, 1, 15, 50, -71, 56, 98, -115, -44, 47, -94, -8, 78, 24, -14, -37, 60, -15, -125, -117, -76, 12, -107, 39, -55, -18, -50, -78, -50, 116, -71, -118, 126, -94, 56, 36, -82, -112, 117, 39, 93, 77, -78, 75, 61, -6, 122, -77, -52, 4, 61, -47, 79, 62, 80, -10, 8, -32, 126, -48, 26, 17, 21, 50, -51, -73, -89, -95, -54, 23, -85, 74, -10, -69, 73, -83, 32, -7, 42, 36, 125, -72, 36, 96, 49, -89, -41, -39, -64, -34, 88, 19, 53, -32, -106, 54, -108, -105, 89, 31, -78, 11, -21, -63, -33, 54, 1, 31, 86, 94, 12, -64, -42, -14, 25, -31, -113, -12, 22, -61, 21, -108, 48, -41, 94, -123, -24, -110, -14, -39, 99, 88, 84, -42, 65, -119, 61, -106, 55, 62, -107, -29, -100, -22, 12, -97, -118, 5, 70, 10, 13, -102, 59, -57, 101, -67, -82, -37, -106, 7, 37, 48, 69, -57, 5, -120, 96, -116, -115, 29, -93, -29, -25, 67, 81, 112, 31, -100, 76, -97, 24, 69, -110, -98, -12, 5, -62, 79, -86, -49, -97, -117, -66, -86, -48, -24, 67, -83, 11, -127, -47, -57, -93, -104, 47, 87, -100, -84, 37, -108, -106, -62, -120, -99, 28, 100, -49, -41, -81, 124, -124, 108, -73};
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
    msg.setTimeStamp(0.7447012648478806);
    msg.setSource(50909U);
    msg.setSourceEntity(246U);
    msg.setDestination(9567U);
    msg.setDestinationEntity(178U);
    msg.type = 51U;
    msg.speed = 29451U;
    const signed char tmp_msg_0[] = {16, -50, -90, -83, 14, 120, 54, -38, -123, 46, 103, -45, 85, -15, -115, 27, 74, 47, 120, 101, 8, 97, 35, 50, 35, 27, -91, -48, -63, 1, -109, 4, 67, -84, -71, 118, 39, 100, 65, 75, 7, -76, 44, 69, -57, -14, -57, 12, -37, 66, 36, 16, -48, -29, -106, 85, -82, -11, 12, -54, -101, 50, 31, -90, 16, -51, 10, -73, -81, 30, -6, 44, -12, 95, 116, -39, 10, -67, 66, 49, 71, 38, -124, 8, -8, 30, -63, 120, 50, 116, -28, -106, -67, -40, -123, 74, 24, 45, -101, -77, 126, 126, -84, 61, -17, -106, -110, 5, 51, 39, -41, -37, -105, 59, -49, 103, -9, 55, -112, -81, -11, 10, 26, 1, -32, 59, 11, 31, 47, 93, 106, 17, 28, 54, 57, -17, 41, 9, -79, -42, 50, -121, -87, -65, 120, 50, -4, 111, -91, -15, 70, -44, 47, -96, 55, -78, 113, 81, 31, -68, 16, -126, -64, 20, -13, 99, 23, -57, 115, 44, -86, 95, -106, 78, 112, -25, 11, 99, -119, 55, -43, -20, 1, 110, -106, 35, 103, 18, -54, -31, 75, -88, 14, 12, -100, -61, 111, 60, 53, 61, -37, -32, -26, -71, 30, -64, 23, -92, 16, 83, -32, 75, 108, 94, -96, 79, 30, -1, -85, 109, -4, 79, -86, 91, -109, -37, -31, 18, -85, 107, -110, -34, 78, -38, 93, -61, 105, -124, -53, -72, 47, 4, 124, -126, 54, -63, 114, 16, 30, -94, -86};
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
    msg.setTimeStamp(0.7154378390242683);
    msg.setSource(16464U);
    msg.setSourceEntity(72U);
    msg.setDestination(39970U);
    msg.setDestinationEntity(241U);
    msg.op = 118U;
    msg.tas2acc_pgain = 0.08055356035373118;
    msg.bank2p_pgain = 0.6071127959786541;

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
    msg.setTimeStamp(0.4206993351505678);
    msg.setSource(44847U);
    msg.setSourceEntity(188U);
    msg.setDestination(34086U);
    msg.setDestinationEntity(112U);
    msg.op = 6U;
    msg.tas2acc_pgain = 0.5688962077480847;
    msg.bank2p_pgain = 0.42643866257245167;

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
    msg.setTimeStamp(0.41893606028194263);
    msg.setSource(54668U);
    msg.setSourceEntity(83U);
    msg.setDestination(59978U);
    msg.setDestinationEntity(151U);
    msg.op = 246U;
    msg.tas2acc_pgain = 0.024940693766380084;
    msg.bank2p_pgain = 0.3971628382967788;

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
    msg.setTimeStamp(0.13894388138461022);
    msg.setSource(11370U);
    msg.setSourceEntity(72U);
    msg.setDestination(60147U);
    msg.setDestinationEntity(132U);
    msg.available = 590485719U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.38666357424942466);
    msg.setSource(59800U);
    msg.setSourceEntity(129U);
    msg.setDestination(57201U);
    msg.setDestinationEntity(231U);
    msg.available = 1170917777U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.08597212288555);
    msg.setSource(37415U);
    msg.setSourceEntity(39U);
    msg.setDestination(61631U);
    msg.setDestinationEntity(218U);
    msg.available = 2939065820U;
    msg.value = 25U;

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
    msg.setTimeStamp(0.4607786697186994);
    msg.setSource(21489U);
    msg.setSourceEntity(7U);
    msg.setDestination(65513U);
    msg.setDestinationEntity(236U);
    msg.op = 0U;
    msg.snapshot.assign("BCUJMBAZQXUQJCUWBQAELMJWMDQHFRVQYTKNIPGSMAJXHOVNYHSVKLCVIVATRZPHAEETMCNJRDVZIYYLAHBAJJQPWKJRNYPSOXRYZFDBAXOPUFRWZWIHCGIORNFKPXKKFBMTXGYSBDEUSRIGHOCTEGWJHSHLDZBLWQFLSNWCVFYBUYKPRXUOUTQ");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.26768786228336006;
    tmp_msg_0.y = 0.8488425997520868;
    tmp_msg_0.z = 0.4661410049928707;
    tmp_msg_0.k = 0.805924250565814;
    tmp_msg_0.m = 0.3917681629433414;
    tmp_msg_0.n = 0.5517331181838788;
    tmp_msg_0.flags = 92U;
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
    msg.setTimeStamp(0.39790454208417403);
    msg.setSource(23837U);
    msg.setSourceEntity(237U);
    msg.setDestination(2952U);
    msg.setDestinationEntity(116U);
    msg.op = 20U;
    msg.snapshot.assign("MRTGSRAFKMAXLQUFCCVJJN");
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.119723914567187;
    tmp_msg_0.time_next_service = 0.7860778183826234;
    tmp_msg_0.time_motor_next_service = 0.05126632263389319;
    tmp_msg_0.time_idle_ground = 0.7999951124314909;
    tmp_msg_0.time_idle_air = 0.7924316335771225;
    tmp_msg_0.time_idle_water = 0.6022933821863539;
    tmp_msg_0.time_idle_underwater = 0.36279703716055967;
    tmp_msg_0.time_idle_unknown = 0.9735693350315023;
    tmp_msg_0.time_motor_ground = 0.9448185337499858;
    tmp_msg_0.time_motor_air = 0.9869492760223174;
    tmp_msg_0.time_motor_water = 0.7823517834015541;
    tmp_msg_0.time_motor_underwater = 0.6811221878111198;
    tmp_msg_0.time_motor_unknown = 0.07829309989060573;
    tmp_msg_0.rpm_min = 28388;
    tmp_msg_0.rpm_max = -27395;
    tmp_msg_0.depth_max = 0.38926211069616845;
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
    msg.setTimeStamp(0.20757695656930708);
    msg.setSource(6822U);
    msg.setSourceEntity(43U);
    msg.setDestination(1418U);
    msg.setDestinationEntity(26U);
    msg.op = 78U;
    msg.snapshot.assign("RHNPUKCIWFGXWHVEAJZQDQNHGFKXLTDMCMVZLOADQKFQJGYOBUQCDWBYZCCNGNHXXJPRTMTBGVSDIYHJFYDV");
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 152U;
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
    msg.setTimeStamp(0.9336154758011527);
    msg.setSource(57598U);
    msg.setSourceEntity(245U);
    msg.setDestination(26585U);
    msg.setDestinationEntity(227U);
    msg.op = 221U;
    msg.name.assign("UNCNBHBXVFXJYJRPNYMOAAGHVIQQYFXITQ");

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
    msg.setTimeStamp(0.9207854866123174);
    msg.setSource(37807U);
    msg.setSourceEntity(23U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(234U);
    msg.op = 84U;
    msg.name.assign("OCUPWSUMLOEPJRTEHKEXIUJGYWZVYQCBXLUHMUIBFMHRFWLBGFTWFHALDHJPVBPKMJUAWKEGGEIEAOSDKDRSYDIQBDOAZPZOOZBVCXMNIHBVTPQRNNKXRJJFLNRTZYYLJTWSMXIQDNXCRJCQDAVWUOCOEUKYUKFTTZTYCELGFPYEWGASMXTPCTMEWZHBASQZLLXBLNZKNVOGYGUODGHCDHKQSIJHWSIASNPFZ");

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
    msg.setTimeStamp(0.13461862197315022);
    msg.setSource(28378U);
    msg.setSourceEntity(90U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(17U);
    msg.op = 109U;
    msg.name.assign("WIOAQAXPZNLSSWJYTPKNVZIRSJDOQNDCVLMFAYTPTITGKEKUKVCJXPORWVCMHNRLWCTHGUPOGUXIFZFYARMCKAMBIMKZQLEYFUHXBHBLBJYSVRUEMTILOJXTDHDQULTLHNUESZGDGYWIDEMJXIOPFSQWFGQHEQFBXQAZCEDLDAXCKEIBBTOJKQVCVEBAWOCHYSBVFRYGJU");

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
    msg.setTimeStamp(0.5492775232836709);
    msg.setSource(2377U);
    msg.setSourceEntity(182U);
    msg.setDestination(57843U);
    msg.setDestinationEntity(135U);
    msg.type = 254U;
    msg.htime = 0.7411583466291743;
    msg.context.assign("LLYETIQDULMJCAYTNJQKXMPCRWPHRGVTQOISBRSBVHDPAHJTACFSEQNIUWQN");
    msg.text.assign("VVPBQUWGVCQZYAYGABJHMJEZNSPXNAUBWTOWOVYQVKDJUDAZEJLKFHOXYEKTRQQYEGFIECUXRPOSIIGMVDRDBKBORNOBBNSMGCLCTJVWXWJVJAUXGSNELBLBJFLUHTKI");

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
    msg.setTimeStamp(0.19154015079421105);
    msg.setSource(19567U);
    msg.setSourceEntity(26U);
    msg.setDestination(244U);
    msg.setDestinationEntity(186U);
    msg.type = 206U;
    msg.htime = 0.06876320651942347;
    msg.context.assign("HWITPJHMWBXLQIDVUOIYLJNEUESACHPDNBJNRVCZBGLRGFLFIBZUWJSGKCXTIMLYCXKAMYNHAMDHLGYHJZGOIH");
    msg.text.assign("JCHOSBJIMDJQXDSYHTWSLZFGBRVHHDUOBXGAYTFXTAGKTIUKZPPZBYWCMEOARSJQXSNDVICENZHVGZCHOEY");

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
    msg.setTimeStamp(0.44777446115597364);
    msg.setSource(20022U);
    msg.setSourceEntity(120U);
    msg.setDestination(46579U);
    msg.setDestinationEntity(21U);
    msg.type = 93U;
    msg.htime = 0.6579360521995566;
    msg.context.assign("XOODNOCHJPHVLJNGZVDSFWDDELMJTFDHZGMBDBVKADOCLIZFIWWICPEUOMMYHKETPFPXLTYXKLVASVSHVIKGAULUQQHOGEXTQZHYNFTKUWWBFOGGZRBYLCENXAZMVWESYAPSJNKHQQRXBRZHIKGMFXCNARJRTJHEEJWOASYQBTKVUPYAUQUCVRJZSWTXXQBTPCBZZYNWE");
    msg.text.assign("XLNINKYHYQBGYAJYJUOBQZHVAWSZFYKOVOLTIMVOOQOECVZDFNAIZYXLGOPMFZRUJEBVPYQAHDWCEZNCDETBGJMBVPWRMXWFLECTBPRELSHAUPKXLMHCISDHTX");

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
    msg.setTimeStamp(0.9120283609295694);
    msg.setSource(381U);
    msg.setSourceEntity(129U);
    msg.setDestination(7137U);
    msg.setDestinationEntity(250U);
    msg.command = 43U;
    msg.htime = 0.06831583739458336;

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
    msg.setTimeStamp(0.1318070712350311);
    msg.setSource(63873U);
    msg.setSourceEntity(119U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(209U);
    msg.command = 67U;
    msg.htime = 0.04656596542237934;

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
    msg.setTimeStamp(0.8541808962278072);
    msg.setSource(4253U);
    msg.setSourceEntity(71U);
    msg.setDestination(10459U);
    msg.setDestinationEntity(227U);
    msg.command = 118U;
    msg.htime = 0.5180566589820466;

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
    msg.setTimeStamp(0.5067655769881471);
    msg.setSource(38716U);
    msg.setSourceEntity(210U);
    msg.setDestination(65465U);
    msg.setDestinationEntity(247U);
    msg.op = 67U;
    msg.file.assign("BZGLULXESYMWTJQDXTYEXDFIYPDVXDCROPNUMSOPOZNCHGGYIJISGKSUKMNEKUWSVKPAHHEDQZOJMHYXRGKMVPMUEYVSNPFGOVJHALTIGRLBXHYFMWDSCQKDHCIGANSQGEWRBLFPJBRTKZLRHOMIWIQNQWSCDV");

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
    msg.setTimeStamp(0.8081945539208223);
    msg.setSource(7454U);
    msg.setSourceEntity(93U);
    msg.setDestination(60518U);
    msg.setDestinationEntity(226U);
    msg.op = 18U;
    msg.file.assign("HNAMXMGVWHCIBEDGCELGHLNZMFTHWXEJWKVBTYEUKESNAGJNJKPABRCDBNLXBOXWYPPPEJOLKARJUZLLUZXRYO");

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
    msg.setTimeStamp(0.8384682495735917);
    msg.setSource(64791U);
    msg.setSourceEntity(173U);
    msg.setDestination(36360U);
    msg.setDestinationEntity(248U);
    msg.op = 204U;
    msg.file.assign("AOEFQMXCLVVSKUDTZRHEJEKPSQGZRKYUZUBTZS");

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
    msg.setTimeStamp(0.11577604922494988);
    msg.setSource(25852U);
    msg.setSourceEntity(165U);
    msg.setDestination(26815U);
    msg.setDestinationEntity(46U);
    msg.op = 188U;
    msg.clock = 0.7132656861232555;
    msg.tz = 115;

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
    msg.setTimeStamp(0.26888087085517776);
    msg.setSource(3955U);
    msg.setSourceEntity(62U);
    msg.setDestination(1492U);
    msg.setDestinationEntity(19U);
    msg.op = 203U;
    msg.clock = 0.3604852602120596;
    msg.tz = 15;

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
    msg.setTimeStamp(0.7419584546186706);
    msg.setSource(30139U);
    msg.setSourceEntity(43U);
    msg.setDestination(14822U);
    msg.setDestinationEntity(37U);
    msg.op = 10U;
    msg.clock = 0.24810087482284793;
    msg.tz = -39;

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
    msg.setTimeStamp(0.6668586175322972);
    msg.setSource(35952U);
    msg.setSourceEntity(2U);
    msg.setDestination(37159U);
    msg.setDestinationEntity(14U);
    msg.conductivity = 0.3691100538318609;
    msg.temperature = 0.757519459855862;
    msg.depth = 0.10778349543878085;

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
    msg.setTimeStamp(0.139941918436555);
    msg.setSource(52292U);
    msg.setSourceEntity(97U);
    msg.setDestination(29405U);
    msg.setDestinationEntity(44U);
    msg.conductivity = 0.870163462428792;
    msg.temperature = 0.06614557152143163;
    msg.depth = 0.2164387318965625;

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
    msg.setTimeStamp(0.8273310269174109);
    msg.setSource(49972U);
    msg.setSourceEntity(101U);
    msg.setDestination(22028U);
    msg.setDestinationEntity(87U);
    msg.conductivity = 0.5237596330884682;
    msg.temperature = 0.10127573794685452;
    msg.depth = 0.046393329026750085;

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
    msg.setTimeStamp(0.23369252473023672);
    msg.setSource(18416U);
    msg.setSourceEntity(97U);
    msg.setDestination(15203U);
    msg.setDestinationEntity(186U);
    msg.altitude = 0.42766506975206975;
    msg.roll = 9008U;
    msg.pitch = 8508U;
    msg.yaw = 13594U;
    msg.speed = 26261;

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
    msg.setTimeStamp(0.3000055015201457);
    msg.setSource(61442U);
    msg.setSourceEntity(139U);
    msg.setDestination(14436U);
    msg.setDestinationEntity(59U);
    msg.altitude = 0.30818843371762783;
    msg.roll = 33951U;
    msg.pitch = 59105U;
    msg.yaw = 37897U;
    msg.speed = -19619;

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
    msg.setTimeStamp(0.0668281565868275);
    msg.setSource(1847U);
    msg.setSourceEntity(88U);
    msg.setDestination(60118U);
    msg.setDestinationEntity(252U);
    msg.altitude = 0.6834001104680697;
    msg.roll = 36730U;
    msg.pitch = 62768U;
    msg.yaw = 47099U;
    msg.speed = -25648;

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
    msg.setTimeStamp(0.20577353082357763);
    msg.setSource(10196U);
    msg.setSourceEntity(42U);
    msg.setDestination(30464U);
    msg.setDestinationEntity(210U);
    msg.altitude = 0.12176948272106525;
    msg.width = 0.9545622460979757;
    msg.length = 0.5697319755062374;
    msg.bearing = 0.7820878776023187;
    msg.pxl = -14962;
    msg.encoding = 37U;
    const signed char tmp_msg_0[] = {38, -63, 12, 124, 75, 111, 29, 75, 23, -23, 47, -49, 99, -78, -75, -7, -69, 116, -5, 77, 80, -4, -97, -64, 24, 98, 69, -73, -47, -97, 89, -33, -71, 77, 57, -28, -120, -104, -89, -64, 39, -81, -50, 110, -19, 10, 5, -125, 18, -64, -86, 89, -45, 124, -110, -85, 68, 92, -49, -89, 62, -6, -18, -102, -89, 104, -53, 47, 74, -11, 16, -12, 80, 62, 29, 114, 93, 39, -45, -33, 11, -95, 111, -88, -44, -57, 103, 116};
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
    msg.setTimeStamp(0.4735178265175518);
    msg.setSource(60060U);
    msg.setSourceEntity(245U);
    msg.setDestination(46077U);
    msg.setDestinationEntity(182U);
    msg.altitude = 0.6802540221737929;
    msg.width = 0.27875859054099605;
    msg.length = 0.7118674920168461;
    msg.bearing = 0.7862978745396133;
    msg.pxl = 3441;
    msg.encoding = 200U;
    const signed char tmp_msg_0[] = {-62, -116, -47, -10, -87, 27, -120, 64, -94, -90, 80, -43, 61, 27, 113, -64, 113, 97, -13, 87, 19, 41, 3, -41, 21, 33};
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
    msg.setTimeStamp(0.13441666032130262);
    msg.setSource(4808U);
    msg.setSourceEntity(248U);
    msg.setDestination(3953U);
    msg.setDestinationEntity(129U);
    msg.altitude = 0.32386420764711643;
    msg.width = 0.536278877822987;
    msg.length = 0.7575335664619358;
    msg.bearing = 0.9728468592447307;
    msg.pxl = -22235;
    msg.encoding = 221U;
    const signed char tmp_msg_0[] = {120, 100, -13, 48, 91, 11, 97, 20, -56, -62, -16, 105, -48, -59, 59, 41, 73, 94, -87, -58, -9, 5, -65, -71, 94, -111, -106, 49, -90, -113, 12, 95, -78, 25, -77, 33, 101, -26, 71, 108, -12, -53, -86, -51, 87, 125, 44, 100, -54, 16, 91, -108, 81, -3, -100, 115, -4, 94, -84, -40, -1, -4, 26, 104, 16, 64, -5, 121, -89, -1, 119, -43, 27, 92, -107, -126, -107, 79, -56, -72, 59, -96, -19, 93, 64, 73, -19, 63, 114, 48, 122, -67, -57, 83, -80, 98, -75, -47, -86, 71, 12, -28, 65, -73, 80, -128, -80, 18, -24, -41, 20, -33, 34, 79, -90, 106, 108, 20, -36, -29, 105, 40, 63, -80, -38, -53, -94, 110, 33, 11, -123, -64, -23, 23, -118, 54, -49, 0, -53, 72, -23, -89, 125, -86, -70, 61, 52, -35, 123, 99, -101, 69, 92, 34, 41, 13, -3, 67, -48, 38, -16, -67, -51, -125, 61, -5, 12, 71, 33, -39, 5};
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
    msg.setTimeStamp(0.17329043398062793);
    msg.setSource(57203U);
    msg.setSourceEntity(99U);
    msg.setDestination(7508U);
    msg.setDestinationEntity(203U);
    msg.text.assign("HOHNBOIZTRVGMDICJDERBUBJOSUDWVZNNFXXFTQMUHPCNRJLNKOZKQFUUHFBWBBDLOKVTCCMINTSRGHOUAMFXARUJYRXEABJWFAUOPFQKYSASGWNOIXHVJWBGVKDCYEYTAHPBMCLTDLMGWAPFFYEHERGDITSNCNVGIBXMICEEQLEWHYAWPYVITQUQZSVGSPDKKSOZLZEKKZVAJKXQPRIMLLTQGCUPEZNJVGSRFJWXYMCHYZXQYM");
    msg.type = 87U;

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
    msg.setTimeStamp(0.07758611360809187);
    msg.setSource(13702U);
    msg.setSourceEntity(160U);
    msg.setDestination(42102U);
    msg.setDestinationEntity(244U);
    msg.text.assign("QQDJNHUFDVLLKITPACHZVKRABGPHAXIZPLTTJSIISCEMQGFDVQJAVZHTLMJGXPXTBRQXHSRSHBUVIADGQJVXJIVUZRULVTEBPWFCXJOZMOOBCQMFPYTUQNKJMSRVONWFLIFPWLFIOCNPEMDGULUYOZZQNWTRXWSGDEAGKMMBRJXGCEWYPYSNADHBBREZYDUSHSMPEKNX");
    msg.type = 71U;

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
    msg.setTimeStamp(0.9382244455565609);
    msg.setSource(20568U);
    msg.setSourceEntity(30U);
    msg.setDestination(4620U);
    msg.setDestinationEntity(161U);
    msg.text.assign("EUTQGBPYKJGEWFDBFCBKUKAWDZBWIRYHOMBVSBKKMMOEYOXRJEAHLPZFLBSBIWKGFKFNVHAPCOVJAQIQIHCDOMCZVGJUGNFMQZSPRMGAAYSFMQRJDESNVMTDXACMYGCDZGCSPTC");
    msg.type = 152U;

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
    msg.setTimeStamp(0.3890146168905403);
    msg.setSource(35556U);
    msg.setSourceEntity(221U);
    msg.setDestination(12932U);
    msg.setDestinationEntity(241U);
    msg.parameter = 22U;
    msg.numsamples = 176U;
    msg.lat = 0.8434890761255686;
    msg.lon = 0.04532819267324828;

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
    msg.setTimeStamp(0.06805858028641132);
    msg.setSource(23708U);
    msg.setSourceEntity(48U);
    msg.setDestination(46199U);
    msg.setDestinationEntity(85U);
    msg.parameter = 4U;
    msg.numsamples = 123U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 46394U;
    tmp_msg_0.avg = 0.1855598394863731;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.839532900799821;
    msg.lon = 0.07725981419906192;

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
    msg.setTimeStamp(0.6944028446918671);
    msg.setSource(18340U);
    msg.setSourceEntity(228U);
    msg.setDestination(10708U);
    msg.setDestinationEntity(72U);
    msg.parameter = 130U;
    msg.numsamples = 99U;
    msg.lat = 0.6361488443332562;
    msg.lon = 0.5899976619786433;

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
    msg.setTimeStamp(0.07320117951701854);
    msg.setSource(7721U);
    msg.setSourceEntity(21U);
    msg.setDestination(55405U);
    msg.setDestinationEntity(148U);
    msg.depth = 39389U;
    msg.avg = 0.0944296653677611;

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
    msg.setTimeStamp(0.19675868225984594);
    msg.setSource(6266U);
    msg.setSourceEntity(184U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(7U);
    msg.depth = 46960U;
    msg.avg = 0.7835075843663322;

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
    msg.setTimeStamp(0.46971972003592577);
    msg.setSource(30009U);
    msg.setSourceEntity(213U);
    msg.setDestination(27286U);
    msg.setDestinationEntity(116U);
    msg.depth = 35509U;
    msg.avg = 0.20084181409210133;

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
    msg.setTimeStamp(0.2524091400837334);
    msg.setSource(34346U);
    msg.setSourceEntity(161U);
    msg.setDestination(26531U);
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
    msg.setTimeStamp(0.5877553332219424);
    msg.setSource(42962U);
    msg.setSourceEntity(150U);
    msg.setDestination(12066U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.3905209888189496);
    msg.setSource(4226U);
    msg.setSourceEntity(207U);
    msg.setDestination(12904U);
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
    msg.setTimeStamp(0.014973324013566769);
    msg.setSource(25546U);
    msg.setSourceEntity(92U);
    msg.setDestination(16598U);
    msg.setDestinationEntity(89U);
    msg.sys_name.assign("FESTCBLDSWZSYLVAOTYUWWLMNNPRRYZHRAIGTYOOZJMQWUYABJZBAGLYQVRXUXBEQDAHGMKJNZHFEJIHMKWVXPXDFPZDEDEBDCPUUXGYVFTFXKLZIBDBVDERMIMFZPTRMREDFMIQVBACJNVUKNOEGNKYSJXKVIXKOQLKFAALUHIOJOLQPWRRKJBNGAJNKTXBVWCCCSSUGQGIGCSGDJLPHZPQ");
    msg.sys_type = 156U;
    msg.owner = 52159U;
    msg.lat = 0.9173457233203295;
    msg.lon = 0.352174713047978;
    msg.height = 0.0236998828949877;
    msg.services.assign("DUHYEUZGZKSXBBJTYLDQSCUVJZSVVPQYKWUMRGSLOADYHEOCCARLELVMTWZZVIDKFCPTQLNAECNHAMGYSBXVXIEOLURKWESABNFOAXQVBWKRFGPKYBAZXIZITUCJROZIGJKEOOLQGP");

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
    msg.setTimeStamp(0.9762947355048599);
    msg.setSource(17913U);
    msg.setSourceEntity(220U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(218U);
    msg.sys_name.assign("FSAWRXMQUINTQCLCDSSINSRGJVSNIJLIYQNGBSHWPIAXYHGXDHKRRHKFBVJVLPVQWVZTOZKHNGICOVAJEBSGGYADTOUQWOWJFQQYFIPAUXKXCRUDBQFDDEMJCLYEZZIYLOLGTDJRNOCTZWLPXPWCSRJMABEKYUW");
    msg.sys_type = 151U;
    msg.owner = 38327U;
    msg.lat = 0.3857352930868474;
    msg.lon = 0.09121450841695178;
    msg.height = 0.3913726080127371;
    msg.services.assign("WRVSAGOGYBOPYQGNTICMOBNCDAOLCEVWEACVKFWSEQTPQUBFOPUDCJCWADILMGIXGTQJSFMMCBPBNZKYJLNVWLHGBSYZRFULH");

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
    msg.setTimeStamp(0.5302686701434517);
    msg.setSource(26775U);
    msg.setSourceEntity(66U);
    msg.setDestination(24950U);
    msg.setDestinationEntity(2U);
    msg.sys_name.assign("GKFOUGITMYKIRPGKECQIMSQBWWVSYUUHLWMQHUVUUHGOEFBDYFVIONUJ");
    msg.sys_type = 57U;
    msg.owner = 9881U;
    msg.lat = 0.9474694943424883;
    msg.lon = 0.6163576812105329;
    msg.height = 0.4376981708169019;
    msg.services.assign("CGFBFAKCSUUBDPDHWKYNGTMLSIIKKNXOVLFDQPQVKSPEJOQGDUZIITYJXXFOQZNWBNPKWNVYXDUMTWOHZRJASMAKIIURLCREAFVULVOUCWJED");

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
    msg.setTimeStamp(0.055243530064908564);
    msg.setSource(7260U);
    msg.setSourceEntity(222U);
    msg.setDestination(62814U);
    msg.setDestinationEntity(109U);
    msg.service.assign("WLRIXYGHXBRHDAWGUZLOEOAYOMIHSLZZVZXJDHPTAAWERDFCVUDYYFXJPYWQKXELPTBIIERSFJUWVZPZGNEPVLIZJOQNKAMJHTQPCISXNGQBJXHTCAFRSFJMKKUXWQVDCDPMFNLRCTNRECZGNUPBQFSOTVOQBCPETFQICIUBVTBFYSJ");
    msg.service_type = 135U;

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
    msg.setTimeStamp(0.4607036955916709);
    msg.setSource(63667U);
    msg.setSourceEntity(239U);
    msg.setDestination(1284U);
    msg.setDestinationEntity(82U);
    msg.service.assign("CORTUHPHNGDPEVRAFWZYJRDNEGWBOXGMLPPXVBKALSKEACFGYKFSUIPTOHULOQNZYPEYUNYWWUPHEXQJJFBAXVWFYIDGCWHZUBKXMLTMJQNSPYVQUHWZUDCCOZCDSQGEDZV");
    msg.service_type = 108U;

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
    msg.setTimeStamp(0.8648650703028663);
    msg.setSource(14175U);
    msg.setSourceEntity(253U);
    msg.setDestination(825U);
    msg.setDestinationEntity(84U);
    msg.service.assign("BHJVZTNHQOWVKHMYPUOBMTRTICESRAXQRLFKQWFEXYNMVETWLMOAFIQSAWOUXKCLPFWMEVETYGJRRFEHBXUVHEYBRHCYAKJTRGBGKIUEFZPPGGBDKGOSDIZRZMBYAXZTXPVNOQCMPNJNVFGSHVCQAQZOSYWLODJIDQAWEOUFPDAGAIKJSCXKXSZSHIIHQMTETBJKKDCNGFDBNUSIMVJGNXVZLDUPHYWLZOJULZURJALPPDNY");
    msg.service_type = 14U;

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
    msg.setTimeStamp(0.42959622837552325);
    msg.setSource(63521U);
    msg.setSourceEntity(43U);
    msg.setDestination(26080U);
    msg.setDestinationEntity(134U);
    msg.value = 0.5021359566446242;

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
    msg.setTimeStamp(0.9711625959195802);
    msg.setSource(23528U);
    msg.setSourceEntity(63U);
    msg.setDestination(36246U);
    msg.setDestinationEntity(14U);
    msg.value = 0.029278460473801893;

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
    msg.setTimeStamp(0.66123468916556);
    msg.setSource(19561U);
    msg.setSourceEntity(115U);
    msg.setDestination(61361U);
    msg.setDestinationEntity(79U);
    msg.value = 0.6591710721615407;

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
    msg.setTimeStamp(0.17856103090495268);
    msg.setSource(56262U);
    msg.setSourceEntity(203U);
    msg.setDestination(18661U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8650425365016075;

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
    msg.setTimeStamp(0.21660706358583026);
    msg.setSource(24288U);
    msg.setSourceEntity(237U);
    msg.setDestination(45101U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9705635917664337;

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
    msg.setTimeStamp(0.05080209999799368);
    msg.setSource(43931U);
    msg.setSourceEntity(246U);
    msg.setDestination(13640U);
    msg.setDestinationEntity(15U);
    msg.value = 0.9011465160298882;

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
    msg.setTimeStamp(0.3014114670724166);
    msg.setSource(30614U);
    msg.setSourceEntity(23U);
    msg.setDestination(13787U);
    msg.setDestinationEntity(215U);
    msg.value = 0.836069247962054;

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
    msg.setTimeStamp(0.27138792903991205);
    msg.setSource(28300U);
    msg.setSourceEntity(63U);
    msg.setDestination(64828U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0842880708538768;

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
    msg.setTimeStamp(0.5660605447482249);
    msg.setSource(43636U);
    msg.setSourceEntity(105U);
    msg.setDestination(39536U);
    msg.setDestinationEntity(195U);
    msg.value = 0.8340701740485023;

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
    msg.setTimeStamp(0.361183996463723);
    msg.setSource(52926U);
    msg.setSourceEntity(118U);
    msg.setDestination(34963U);
    msg.setDestinationEntity(15U);
    msg.number.assign("IGFEEJBHBNYTZGJFIPRWSLVRAFCSQPERHDXQFWMPDZWBLGXYAOUXKJJSRUZVBLENOIFHLKGCZNBPDUVXAIEEPTADIQTOUBVDQTOOPSHTKUVUAANCLMANOIVYZLVSRYAPAXIXQHRYOTZXGPBTFIWTKMEWYWNNOQ");
    msg.timeout = 45877U;
    msg.contents.assign("YDQSRJBHIPNOTCCIBFYNN");

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
    msg.setTimeStamp(0.21985129975118578);
    msg.setSource(54241U);
    msg.setSourceEntity(197U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(92U);
    msg.number.assign("SFAMAEXDFSBCVWJZYHXUEOUCLSWJYGVNFPMQOIKSQYSMZSDALOVOAIRODMFWJYSNYUREWGJOPODAHQTUBKVVEYWIUTUPRZKWFLYZEGXEJXNTETHYDUZBRFEKTPZPMRIPTANJHBODFGVGSNDYGRNPJCGBCABNMYGQUVX");
    msg.timeout = 15473U;
    msg.contents.assign("ZUHYAFNYIRDJNALTAECDMJAKBCUWFLWVNGNQBIOTNADQZFOEWIMIGYFVHAKTNCOLHKFKXRXEPCBXDATMSLJEQPSNMOAEUYZWJEXCBPIOOQUUZDMYKIPRMJBXTVNXKCJFNRDHRRGLFTPFRSAQYKIJSJTLGDWBMCKIXMSOZUWCKDNORTGWOUPQJXQCTOY");

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
    msg.setTimeStamp(0.682042719374445);
    msg.setSource(40342U);
    msg.setSourceEntity(228U);
    msg.setDestination(49378U);
    msg.setDestinationEntity(215U);
    msg.number.assign("CQIBSHNGMFFMWVLNTLIORJXKJJQESERDUHPAWBVZKQLUIDFJOEGIZFMOVHYYAGTUKRKXPNPTEKRVZBBATTXLJDJKXPMHLEWCJWKWVKWHDRIDCDZAQUMRFPKAHLBGIQIBDQHYJAANHTEAYCLGLIOJKRXOBGZMSNVNZLGTPSOSDYASMYVUNWGUWPSGONVMTPZQNTXUCWPDYGSFFYVXAZQSF");
    msg.timeout = 37078U;
    msg.contents.assign("OUMVXHLUVTNIKOPPWAYRJIKCASZFJBEGZLCAFASBSEZNDHQCDQBEVWZSFEDHAUARGLHJJJQFFAWKOXUNQUCTLZBGFSJEYOXPMXHDDAMRIRRPOULZSCCXDLLUFLIPPRZGRCGEBXVNKEGXWYTKMAJHPLSNRXWIVDWBRWBVHYCJCQNDINTWPMYEQOSVOQJTOVNBONMPMGBDETUMOVKIIYCADTWEPUQF");

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
    msg.setTimeStamp(0.2116896626340128);
    msg.setSource(39803U);
    msg.setSourceEntity(215U);
    msg.setDestination(61439U);
    msg.setDestinationEntity(71U);
    msg.seq = 2407347496U;
    msg.destination.assign("XHBPDRQSNOQJZUKFCUOZGFZNSBXCYCYDAERILLTNEVVMBTXUHLNTBZKBPJFCYZSIWLDOTISTPKSKOKHYGKZDORVROBRLRUHTCCKBXHNMMWXDWAXIJG");
    msg.timeout = 42090U;
    const signed char tmp_msg_0[] = {-56, 28, 80, -1, 111, -56, 5, -44, -106, -24, 109, 18, 13, 56, -91, -106, -119, -3, 115, 116, 87, -77, -90, 73, 50, -6, 29, 105, -52, 118, 88, 54, 82, 53, -92, -8, -44, 15, 27, 55, 72, -55, -7, 12, -9, 43, 4, 0, -127, 85, -72, -98, 8, -40, 21, -99, 101, -55, -11, 7, -114, 3, 58, 123, -112, -54, 5, 102, -75, -97, -56, 65, 49, -125, 10, 44, 34, 119, -53, 108, -76, -21, -67, -17, -36, -22, -40, 105, -109, -128, 60, 123, -101, -73, 120, 109, -63, -46, -13, -60, -55, -50, 107, -8, 96, 23, 93, -60, 3, -38, -124, -22, 43, 31, -98, -20, 37, 59, -62, 1, 63, 3, 73, -43, 44, 27, -7, -23, 57, -100, -74, -75, 120, 50, 96, -94, 62, -71, 9, -35, 4, -96, 59, -127, 28, 73, -52, 30, 78, 11, 90, 6, 87, -51, -105, 79, 0, -112, 50, -107, -106, -98, -123, -23, 26, -40, -7, -83, 6, -14, 103, -76, -91, -76, -75, 51, 37, 72, 95, -108, 100, -113, -126, -107, 101, -67, -16, -97, -37, -51, -3, 43, -36, 28, -94, -51, -21, 76, 38, 70, -62, 114, 28, -119, -34, 84, 89, 120, -68};
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
    msg.setTimeStamp(0.974651589876927);
    msg.setSource(13070U);
    msg.setSourceEntity(97U);
    msg.setDestination(28647U);
    msg.setDestinationEntity(49U);
    msg.seq = 332423615U;
    msg.destination.assign("GZCGSAFEXZTLZREAONNCKRVWTPRVBHHFURLNACUTXYSODAWIKHQPKXEMMOQINXVNBPABAQIHKKO");
    msg.timeout = 13824U;
    const signed char tmp_msg_0[] = {49, -108, 51, 3, 100, 113, -23, -62, -78, 51, 103};
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
    msg.setTimeStamp(0.27564629814669184);
    msg.setSource(37210U);
    msg.setSourceEntity(55U);
    msg.setDestination(8424U);
    msg.setDestinationEntity(14U);
    msg.seq = 4144383131U;
    msg.destination.assign("JZFHPUNNQACCUATXMMZYMYUJWPVREXISUODDTFRFSLWLXYNTQPTVRSQULRJLKCJLLVQEITKCWSHQLJEVHKJXQXZFDYQWNJOGDRD");
    msg.timeout = 37878U;
    const signed char tmp_msg_0[] = {-112, -67, 0, -37, -25, -95, 106, 88, 122, 3, -11, -80, 36, 69, -86, -11, 90, 43, -49, -46, 40, 20, 126, -30, 90, -34, -117, 107, 15, 22, -115, 110, 22, 19, 8, -37, 67, -124, -58, -9, -112, 27, 43, 89, -93, -29, 78, 74, -95, 65, -112, 65, 91, -59, -24, 48, 41, -53, 33, 79, 99, 75, 83, -1, 17, -44, 80};
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
    msg.setTimeStamp(0.3385666075106396);
    msg.setSource(54075U);
    msg.setSourceEntity(178U);
    msg.setDestination(48887U);
    msg.setDestinationEntity(30U);
    msg.source.assign("RJLWTWYOFRLRLWEIVLIFEUQCXVJKRAHZXNPFXLIOXYTUKUZGMBLNDHSAVXZDXYXYWCBCINOTWGBBMQKEELOCSZ");
    const signed char tmp_msg_0[] = {-66, -40, 18, 24, -41, 64, -18, 31, 19, 118, -9, 112, -19, -64, 84, 40, 75, 48, 84, -104, 17, 62, 35, 76, 69, -1, 41, 68, 41, 89, 76, -87, -13, 49, 1, 71, 50, -94, -15, 98, -68, -33, -68, 51, -80, 80, -103, -98, 0, -7, 115, -109, 41, -69, 10, -105, -85, 56, -6, -11, 81, -62, 56, -90, 51, 68, -77, -75, 28, -74, -98, 79, 119, -9, 48, -50, -47, 105, -115, 97, 63, 27, -58, -82, -81, 17, 18, 78, -36, 66, -64, -84, -14, 112, 112, 6, 46, -127, -69, -82, 124, 97, 52, -11, -67, -88, -117, -36, 82, 69, -59, 112, -108, 64, 105, 32, 108, 119, 49, 69, -90, -42, 40, 124, -57, 126, -85, 125, -79, 49, 23, -29, -4, -68, 124, -51, 80, -81, -62, 26, -53, 9, -7, -104, 124, -107, 57, 112, 29, -120, -43, 43, -37, 9, -47, -34, -62, 105};
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
    msg.setTimeStamp(0.04910914556874202);
    msg.setSource(57179U);
    msg.setSourceEntity(192U);
    msg.setDestination(59549U);
    msg.setDestinationEntity(164U);
    msg.source.assign("OCBDZPINSTKMMITXVXYGKIQRVMDDPAZRIOWHGIFGTYCEWKJDHDVGZREWFZRBJRWLWLBMMFIDSXBMPHLUWXXCJTSDTYLSSNEAQUNFLRAVWKH");
    const signed char tmp_msg_0[] = {-47, -18, 44, -79, -6, 56, -43, 54, 22, 116, -42, -1, -115, 125, 85, 46, -105, -81, -97, -56, 119, -11, -119, -117, 4, 6, -116, -13, 23, -114, -31, -4, 113, 1, -74, -34, -30, 110, 113, 12, -125, -1, 97, -28, -51, -103, -5, 73, 67, -128, 67, 100, 9, -4, -97, 17, -19, -54, 30, 69, 41, 10, -40, -83, -2, 85, 70, -79, 27, 6, -122, 15, -22, -67, 109, -72, -3, -90, -108, 74, 47, 63, -63, -74, -83, 107, -104, 56, -118, -63, -13, -82, -98, 107, 123, -62, 16, -110, 50, 107, 73, -69, -26, -119, 88, -115, 7, 17, -45, 64, 83, 48, 64, 33, -19, 6, -64, -6, 24, -62, -75, -10, -42, -84, -9, -100, 124, -25, -53, -3, 54, 102, -30, 121, 6, 115, -109, 118, -15, 101, 50, -46, 115, -45, -23, -12, 66, 5, 100, 116, -80, -38, -29, -103, 72, -33, -78, 94, -87, 117, 73, 121, 22, -93, 2, -6, -16, 50, -87, -76, -10, 117, 25, -127, -125, -23, -127};
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
    msg.setTimeStamp(0.4556735923235854);
    msg.setSource(34552U);
    msg.setSourceEntity(220U);
    msg.setDestination(10313U);
    msg.setDestinationEntity(100U);
    msg.source.assign("NUNJONBINSNVBRQIGKRKBLDVZLXYLTNLYCDEBQTBBAQSC");
    const signed char tmp_msg_0[] = {-34, 59, -125, 39, 67, -106, -122, -21, -109, 2, -101, 111, 97, 121, -96, 68, 0, 113, -83, -98, -120, -121, 90, -8, -82, 52, -41, -97, 45, -47, 120, -92, 20, 94, -69, -5, -11, 2, 73, 25, -122, 16, -32, -40, 115, -60, -79, -87, 114, 125, -65, -25, 44, 116, 121, -110, -99, -59, -72, 114, 78, -106, 96, -114, -36, -11, 55, -60, 75, 4, 69, 66, 54, 26, 53, 7, -86, -3, 1, 97, 8, -114, 37, 103, 1, 91, 2, 95, -111, 41, -94, -103, -61, -38, 19, -77, -70, 75, 18, 65, 90, 124, 96, 68, -50, -127, 124, -29, -39, -27, -24, -112, 86, 42, 60, 20, -11, -17, 100, 44, 120, -113, 58, 32, -29, -72, -108, -60, -99, 25, 57, 13, 40, 23, 99, 112, -104, 48, 39, -57, 45, -37, 12, -20, -12, -15, -79, 3, 49, 104, 89, -69, -38, 120, 57, -61, -56, 26, -96, 121, 103, 46, 116, -21, -56, 88, -81, -78, -124, 93, -48, 43, 105, 87, -120, -6, 34, 116, -92, -44, 84, 9, 119, 59, -6, 114, 44, -64, -108, -108, -96, 34, -5, 21, 81, 111, -16, -63, -60, 49, 24, 79, 21, -87, 94, -128, -70, -90, 59, 105, -18, -115, -62, 86, -119, -32, 42, 76, 5, 71, 119, 123, -27, -3, 54, 49, 15, 71, -23, 60, 99, -96, -40, 30, -58, -127, 112, 49, 123, -58, 52, 5, -69};
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
    msg.setTimeStamp(0.5204503942799121);
    msg.setSource(8093U);
    msg.setSourceEntity(11U);
    msg.setDestination(13788U);
    msg.setDestinationEntity(108U);
    msg.seq = 3962450144U;
    msg.state = 220U;
    msg.error.assign("PUNMVTSNVJESBYXCSVDPBKTXWZCROJIVOJKXIDCRRALBIYINVVOUFYCYHPFJICXFGCLGVLGHBJUIOLOHGQACFGCWYBFBLYPXZQTVSKHSDJPDKKKWHQTRAMJYMAOAPFDNRURALPEMKTSBGQZGDXHCOXDOOQQVSXYNKUUQERUMNXPFTSQEOMYWAETMIZJTUWAMHKTPYHCREEFGEDIDZESJUWIRJLTNBZGWNWWREF");

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
    msg.setTimeStamp(0.7139797009754665);
    msg.setSource(55324U);
    msg.setSourceEntity(155U);
    msg.setDestination(34445U);
    msg.setDestinationEntity(192U);
    msg.seq = 2772178854U;
    msg.state = 65U;
    msg.error.assign("VAFFEHWYVZLCQNGMTUNCRBTILJXGDPMJVRVLUGHBQHRAAQXHXJEDEYSFXAOCDGTLYNTIWSGPVXSMQLZVCWPUIXKZQOKKEBPHPKAKZTBREVFAXUCDUWOJYAEMMYDOOIVGKRYPTLRNXLT");

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
    msg.setTimeStamp(0.06391131663849703);
    msg.setSource(59556U);
    msg.setSourceEntity(123U);
    msg.setDestination(35974U);
    msg.setDestinationEntity(81U);
    msg.seq = 2037068685U;
    msg.state = 90U;
    msg.error.assign("GBYQKLJKEDLOGPQPINUYJFQJIPTADGRXOGTSZNOMLBLAPFOXVCUAGLQBSDZZFQBPATZKUVDCKKUJWDUZCCHKWTZFHCVOJTUXRIGDBFYGHYENSXRVUMAFHVYYFWDIUNPCVWOKWLANJHYXMRDOAFPEIRFVHHAKVKBTMHTANLCOBNCZRVCEGRWIGNIX");

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
    msg.setTimeStamp(0.06634536307159977);
    msg.setSource(37524U);
    msg.setSourceEntity(168U);
    msg.setDestination(35236U);
    msg.setDestinationEntity(84U);
    msg.origin.assign("HSSRLJENSKLYARKWUDBCXCNUXJIVHDXHDRBFVTOYIRZJTWJRFRYRMPSBEFXMVPFSPTRHMOAZYHACGBLXOUJZBJDTTIWAZQZLOTCWBYYMMGLYVKIIAFQGYWFMYLQZJHWLEPNO");
    msg.text.assign("UWTODHHRFXZBROYEATZNPWFHFNYHAAUGJVPBISDDFPQDKKBNSLGDMNXZHTMTOLOQGHCWLFGBUEBQITOOX");

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
    msg.setTimeStamp(0.28441508150811456);
    msg.setSource(29014U);
    msg.setSourceEntity(0U);
    msg.setDestination(46797U);
    msg.setDestinationEntity(63U);
    msg.origin.assign("JXHFEVKSDKTYQQAMYIVYZZKKXFUBFBHGHBMAFGJWGPMTYCTHLFRIJQJDCZWKSLZVKDRZGRDMZZRCXVGVGSWI");
    msg.text.assign("VCYFEUKLFYUDQSMGCWAMMFHZRLKIYJZBKHYRAECEQHBSBDRMPDSXLNWRNDIGLPMLWDZMQMKKHIXASDPVHILVWBAYKZXCRGRXFKWGOAYRNEHTPFBOAFTJJVOUJMPANXSRCJEOCKEOHBCVIEGEPCGZUKAQLJ");

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
    msg.setTimeStamp(0.8068694314637005);
    msg.setSource(7610U);
    msg.setSourceEntity(232U);
    msg.setDestination(41015U);
    msg.setDestinationEntity(254U);
    msg.origin.assign("VQEUCTYTISQVNLBIWTCMEEIAYLSWKKYAMSBFFZNKTNROUDLHFOIPORMPYMAXWFHEWJJTRMKZWXARQEDHUQZJAPLPAQECKNGLDPFCGJQQFCUIOZLNQUOAHFMVJKZSVVVICTUORUXVIVTXDPTICPBDDSHXAGCEXNDGGXPLBDVRCRQGVAGXGSGWLNJXFZMBKWHRMRRBPGLJZWUHYS");
    msg.text.assign("MOEHVKFIDIJXSIONWGJRAKVUOCATYUGMOUHYBZJHEBVWNZBBPSSRTLXDQJJFFRGXDSCVWUOGIDQFRXRUIJSEZRVZFTGSKSRWYTEYOQFFDUKDUBGLQSNCAZFEICGGJJBRZMIEMZHYOTNXTOXLQHPEIAPDLCPLTENP");

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
    msg.setTimeStamp(0.5356596932489223);
    msg.setSource(2002U);
    msg.setSourceEntity(155U);
    msg.setDestination(7185U);
    msg.setDestinationEntity(205U);
    msg.origin.assign("MISRZNGZPCDIVETOJIKLDOJXKOFYAEKUBOARZGDZNJWMNFFLXIIBUFOLPQDSMUHVLGMTYSJKNXTLMLVNQAGLZUUDVEGUVRAYRWPAIXCFDXKICZADCBEXPGOUHCPRTQ");
    msg.htime = 0.7240745270896496;
    msg.lat = 0.45043289934133823;
    msg.lon = 0.32585665835385325;
    const signed char tmp_msg_0[] = {82, 63, 88, -17, 46, 77, -83, -68, -27, 40, -53, 11, 77, 50, -118, -16, 108, 15, 75, -103, 69, 76, -20, 72, 20, -30, 15, 82, -80, -88, -28, -44, 18, 114, -114, 57, 24, 35, 108, 48, 35, 32, 16, 97, 55, 122, -114, 90, 115, 13, 104, -30, -81, -60, 17, 113, 41, 117, 22, 122, 102, -55, -1, -71, 21, 8, -23, -39, -60, 69, 95, -47, -80, 118, -36, 37, -84, -26, -98, 91, 121, 17, 29, -122, -67, -90, -100, 84, -10, 110, 0, -83, -11, -62, -124, 9, -85, 55, 23, 117, -26, -70, 44, -27, -65, 77, -5, 92, -37, 105, 66, -80, 34, 6, 61, 7, -45, 94, 119, -56, -20, 120, 48, 30, -74, -114, 120, -16, 81, 95, -9, -123, -90, 11, 85, 59, 71, 106, -14, -16, -121, 71, -73, -50, -127, -43, 0, -114, -79, 40, 37, 68, 83, -91, 36, 83, -106, -47, 105, 105, -89, -22, -3, 13, -95, -28, -30, 11, -45, 80, -94, 22, 24, -88, 20, -50, 35, 107, 44, -15, 97, -48, 55, 60, 85, 6, 76, -111, -32, -33, 126, 111, 114, 120, -10, -88, -54, -88, -127, -68, -117, 74, 88, 67, 51, -89, 19, 23, -72, -103, 80, -28, 18, -60, -34, 74, -54, 61, -21, 93, -39, -21, -78, 15, 16, 28, -26, -110, -50, -94, -52, -56, -20};
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
    msg.setTimeStamp(0.6498439215036116);
    msg.setSource(43661U);
    msg.setSourceEntity(137U);
    msg.setDestination(61731U);
    msg.setDestinationEntity(113U);
    msg.origin.assign("YJJFGSOYVTSTPEOVHHHLCZBZYWGZOEPMADIXHNRFZBWGFXZOIDEYYIPQBLXSKHTAUNTPKUSEUPMIERQUWGXSRMMDTJMCIMTDPSICYFKORXFRPXNBDULGEWJCTOUHXWYDTCGUOHGNQZFJCFJLALVYQOFWXIVFVIAEUPRTINQXLMJKDCVHOKEWJ");
    msg.htime = 0.3760500215365793;
    msg.lat = 0.1804723594240093;
    msg.lon = 0.3475548739154287;
    const signed char tmp_msg_0[] = {76, 51, -76, -4, 77, -9, -14, 52, -7, 38, -83, -87, -76, -69, -65, 25, 15, -3, 117, 107, -74, -85, -49, 17, 93, -16, 113, -17, -125, 61, 50, 21, 126, -109, -78, 111, 40, 1, 61, -59, -3, 122, 115, 74, -116, 55, 90, 46, 96, 89, -77, -99, 18, 2, -47, -62, -91, 49, -23, -120, 116, 113, 90, -69, 82, -104, 36, -88, -117, 2, -12, 55, 83, 4, 100, -82, 47, 46, 91, 110, -51, -106, 118, -42, -58, -23, -95, -38, -58, 42, 3, -126, 77, 76, 44, -51, -6, 114, -107, -118, -66, 15, 10, -55, 4, -41, -83, -118, -4, -99, -54, 125, -57, 33};
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
    msg.setTimeStamp(0.0262511496690907);
    msg.setSource(55277U);
    msg.setSourceEntity(141U);
    msg.setDestination(24012U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("RJYOZUJDHLXVIYZQZJUTJIVDYTVIBHKAIHRZYJNCDDGXUHYWJSEKRWVSHQABQAIBLOBBJSWYLVPVGGRRFCMWSIBOKVXUYKDDKELXRYWENQPQEMXQUOCHWBSTAKLGSVXEFCCUAUHEDPCUOGUGOAHNKLDPWBCNIHAYVXBVSNMGGZBFZFCMPLKYAHGMRKNLTIXLZOIXCNZQTFFTFMTFINPWRNZZTFDUJELWSQKQTSQJTXCPMEROJPMNAGFSDPPM");
    msg.htime = 0.32065521427813815;
    msg.lat = 0.7917515141127212;
    msg.lon = 0.4374093515009041;
    const signed char tmp_msg_0[] = {100, -104, -72, 100, -111, 113, -23, 54, -97, -50, -51, 104, -8, -47, -8, 22, 14, 79, -106, -109, 41, 85, 101, -40, 48, -20, -14, -112, -60, -40, -118, 93, -64, -113, 92, 108, -62, 66, 73, -115};
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
    msg.setTimeStamp(0.21379138130168185);
    msg.setSource(61351U);
    msg.setSourceEntity(120U);
    msg.setDestination(38902U);
    msg.setDestinationEntity(136U);
    msg.req_id = 60388U;
    msg.ttl = 33654U;
    msg.destination.assign("GTHXAFSKJZUSWAMKCLHYWRMOUOPTURUNXIGCBVNTAYTLFZOKWGEFQTZEHNQXMBVKRDOQHCVLLMARBUVEJJZYXDJKWTKSUMJBCUGARJFFSIRUPZMBUROTISNDLXXLDMLQIXMUGOHWHYDBDGWGAPQPGQEJBSIEOTNDEBZINFPZORVCXYWOSCBDMXFYCINSYHWCEWSLMZZYAJSEVLYWNVEAKPKLGC");
    const signed char tmp_msg_0[] = {35, -19, -107, -6, 110, -108, 39, 62, 25, 97, -72, -21, -94, -60, -71, 40, -44, 75, -70, -70, -75, 22, -88, 122, -32, -63, -14, 103, -99, -66, -83, -40, -28, -61, 70, 81, -127, -125, 20, -36, -124, -48, -12, 96, -5, -87, -28, -5, -28, -83, -127, -90, 104, 68, -30, 80, 108, -113, -57, 42, 29, -69, -46, 88, -51, -113, 106, 80, 63, -70, 22, 73, -107, -1, -35, -14, 95, 1, 54, 0, -99, 100, -74, 124, 42, 118, -90, -31, 100, -13, -90, 76, -3, -22, 111, -101, -119, 55, 78, -56, -96, -124, 43, 62, 45, -94, 21, 75, -38, -95, -1, 119, -112, 110, 22, -71, 39, 107, -94, -75, 6, -64, -8, -94, -108, 75, 39, -33, -113, -13, 8, 84, -82, 125, -84, -51, 126, 122, -93, 55, 100, 80, 30, -102, -62, 16, 109, -33, 40, 115, -74, -37, -86, -51, 32, -77, -101, 64, -5, -16, 72, -113, -76};
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
    msg.setTimeStamp(0.5111510621217399);
    msg.setSource(13688U);
    msg.setSourceEntity(28U);
    msg.setDestination(41327U);
    msg.setDestinationEntity(162U);
    msg.req_id = 20544U;
    msg.ttl = 64123U;
    msg.destination.assign("MXDFCPIONYXYOWUPZOGGKNLZRTJZEGIMDCSYPOMSJPLRQALHCWGNRENMKXTGNBPUSHKNKUTWFVUGADRVNSECABPCSFKEAKYHMMLSYIGMWFVLZFGHBVORHRXIL");
    const signed char tmp_msg_0[] = {-115, 94, -47, -128, 52, 58, -79, 82, 2, 65, -113, 98, 90, -19, 125, -7, 78, 19, 76, 104, 61, -11, 64, 52, 39, -45, -68, 125, 123, 117, 36, 31, 72, 83, 7, 66, 66, -99, 76, 35, -29, -108, -5, 61, 51, -124, -76, -83, 24, 113, 105, -38, 20, -40, 111, 53, -86, 91, -84, 111, -2, -95, 22, 10, -87, -14, 42, -7, -126, -70, -16, -11, -119, -62, 49, 38, -26, 33, 61, 3, 4, 119, -49, 109, -82, -118, 10, -3, 42, -75, 110, 23, -85, 106, 43, 3, 16, 6, -18, -79, -93, 81, -5, -123, 15, -88, 76, -64, -64, -121, 94, 99, 46, 89, 31, 79, 26, -69, 82, -103, -53, 122, 24, -83, -19, -87, 102, -12, 38, 126, -114, -51, -123, -36, -58, -110, 78, -34, 14, 41, 114, 87, 125, 32, 57, 76, 51, 21, -7, 122, 93, 34, -42, -113, -70, -77, 30, 80, 108, 11, -62, -75, -56, 53, 86, 86, -29, 61, 86, 69, -6, -120, 105, -88, 27, 54, 87, 101, 15, 34, 113, 126, 85, 43, -79, 105, 50, -113, 53, 7, -39, -46, 70, -123, 20, 74, -22, 61, 36, 17, -75, 69, 6, -41, -102};
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
    msg.setTimeStamp(0.3244393340300378);
    msg.setSource(45102U);
    msg.setSourceEntity(88U);
    msg.setDestination(35844U);
    msg.setDestinationEntity(14U);
    msg.req_id = 22101U;
    msg.ttl = 44462U;
    msg.destination.assign("KTWAPRGLFVSMSJFGNWKGAMUJGJAPJUDPXBZRZVTCCFOHUOMPTOMLRLHD");
    const signed char tmp_msg_0[] = {2, -73, -45, 106, -32, 75, -96, 15, -118, -61, -54, -29, -5, -116, -63, 35, 50, 12, 51, 78, -15, -85, -89, 22, -79, -100, 109, -55, -103, -90, 48, 44, -59, 13, 17, 13, -16, -17, -10, -87, -72, 104, -105, 79, 76, -123, 79, -48, 106, 73, -71, -111, -75, -59, -61, 116, 119, 55, 2, -17, -57, -124, -37, 22, -22, -54, 39, -48, -87, -63, -46, 61, -5, 2, -87, -60, 107, 3, 41, -40, -81, 27, 33, -24, -114, 67, 42, 67, -84, 112, -70, -62, -128, -127, -19, 117, 99, 99, 44, 42, -87, -84, 60, -98, -71, -113, -75, 97, -118, 14, 55, 91, -77, -41, 71, 95, -16, -6, 123, 53, 7, 115, -56, 13, -44, 57, 31, 85, 76, -1, -31, -108, 58, 37, -66, 125, -53, 23, 87, 23, 114, 31, 45, 123, -109, -123, 27, 14, -78, 41, 34, 99, -47, 115, 45, 121, 88, -10, -110, -50, -69, 73, 59, 62, 16, 125, -21, -118, 64, -42, 89, 75, -98, 41, -103, 123, -116, -50, 126, -117, 117, -105, -47, -48, 88, -15, -40, -96, 17, 5, -29, 80, -127, -84, -110, -36, 125, -113, -37, -121, 77, 54, 113, 62, 70, 40, 30, 125, -20, 61, 45, 60, 15, -85, -75, -107, 62, -71, -37, 87, -19, 5, -59, -116, -121, 92, 38, -99, -85, -35, 118, 102, 123, 91, -124, 63, 11, -53, 22, -83};
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
    msg.setTimeStamp(0.1803766476358133);
    msg.setSource(55646U);
    msg.setSourceEntity(50U);
    msg.setDestination(3823U);
    msg.setDestinationEntity(155U);
    msg.req_id = 58540U;
    msg.status = 76U;
    msg.text.assign("QNRCBALEGIELBKRCQRKNZGPPZRFSNULSIXMCKVDHJGPPTYXKPBBSJZULTTOWOJNGUK");

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
    msg.setTimeStamp(0.6282349410684333);
    msg.setSource(20504U);
    msg.setSourceEntity(227U);
    msg.setDestination(14794U);
    msg.setDestinationEntity(106U);
    msg.req_id = 55122U;
    msg.status = 202U;
    msg.text.assign("RPPKGMXPTRFIEITVDGVFCVPMXYZNSURRGLTUSSUCIMUGAWTIOYBCBYMMZJZQWWAEAHDZQSYEPHNBVDVNJJZQWQYOFEGBTNXKGMYUOGRLMONTLINSFPWWKOILMXQYZGNRFKHMAHORJFHNTLJEKRPHZKZSOPFDQZJXBGDJVA");

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
    msg.setTimeStamp(0.8639829990537711);
    msg.setSource(35774U);
    msg.setSourceEntity(89U);
    msg.setDestination(47027U);
    msg.setDestinationEntity(61U);
    msg.req_id = 64269U;
    msg.status = 169U;
    msg.text.assign("JWRVZWZWYDFLVHLNQDQEJWPNYLWDEISFAKLKUGXPYWHKQDAHEOYQSEUTOFOUIHREKDCIPYLTAEEOHQXBARYSGJGVEMZRTPGWWITJAJMPCZDOMBOANRMFTYGKDRHQXCJUHRCSOKZXPSTMZLIEFNJUX");

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
    msg.setTimeStamp(0.5878114416956102);
    msg.setSource(10908U);
    msg.setSourceEntity(110U);
    msg.setDestination(26779U);
    msg.setDestinationEntity(42U);
    msg.group_name.assign("FVFHIJGLUOMMSBDHMOHUREMWFOGDTYKEDJJCIBWPKNDPUXXKBLZNUHUJGVUTZKBDRASVHYBMVDTRLNKSTLDIJ");
    msg.links = 3109378132U;

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
    msg.setTimeStamp(0.5032091515790197);
    msg.setSource(17328U);
    msg.setSourceEntity(44U);
    msg.setDestination(53368U);
    msg.setDestinationEntity(188U);
    msg.group_name.assign("TSHSMRMVKIXAXWFDNTZIFBUAPLFMEOLAQSWYX");
    msg.links = 1064128796U;

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
    msg.setTimeStamp(0.10122995172750437);
    msg.setSource(43783U);
    msg.setSourceEntity(200U);
    msg.setDestination(60235U);
    msg.setDestinationEntity(203U);
    msg.group_name.assign("PQYQRSCMJGFLINXEYJCVFGFVCOWQJTTCWEKIDLZVZVKPMCKPJHXUUGFVURTPTSYUXHWSUS");
    msg.links = 456536477U;

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
    msg.setTimeStamp(0.6165089914220584);
    msg.setSource(44930U);
    msg.setSourceEntity(212U);
    msg.setDestination(41485U);
    msg.setDestinationEntity(105U);
    msg.groupname.assign("DZRXBALCFYGXBYJIDFCDIANXSFOTWN");
    msg.action = 194U;
    msg.grouplist.assign("TUDATKSHKPTHABWTUIDBBMXXRGOAIIMKZHWYRTWVADJIZSVGEYMHFOILERZAUCFODYCKBQRGXHKLHCONYBWJLMIQWZZEPQLCPDSKHFYSXLQVICZDVWXUCWXSESNCRLKNHDMGTHVYTQERSJIUQPQVVJCXJ");

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
    msg.setTimeStamp(0.6339221462748622);
    msg.setSource(7912U);
    msg.setSourceEntity(216U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(43U);
    msg.groupname.assign("USOHXARPBXIZEGYJNGWRXYDJSGHJEUWUNMXMMAGOWCOFARZCKHKHLUCAZDBUEI");
    msg.action = 154U;
    msg.grouplist.assign("ZVHNHKJPAVDZVETRYYQANWYXYIODBVMBBADVJLMOSTOFKKWSUCOICXNAKIRFHRUGWQWDOBKPMERZHUUXPOVHDXDCSCSTTQDOWMQLBSYRBYMVTCREMVRFBUPZEGCCJLLJGXINUJFGHTYQECKPXJEWSPHBQPFRQHJGWLFJLNSDPBLYAJPWZQZVBIEEIRIUFOCCKKIWLQG");

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
    msg.setTimeStamp(0.47205982933921853);
    msg.setSource(62600U);
    msg.setSourceEntity(29U);
    msg.setDestination(9047U);
    msg.setDestinationEntity(165U);
    msg.groupname.assign("KZBVGLCWXFDMJICBDMABPVNCLLGNQCIUTWATWUFADYAFBFUZREELRYIMUDYMHXQXSZCDOLWWVVQEOVMFUOIKLHVGZZMFBASUOKYTPSHHGXNEQSYEPANIYRNUOXGAXGMRAWCACJSJTPQH");
    msg.action = 228U;
    msg.grouplist.assign("EPHXUTRBLTNPIBIIUWYYZDCCH");

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
    msg.setTimeStamp(0.8186590111830849);
    msg.setSource(60114U);
    msg.setSourceEntity(157U);
    msg.setDestination(13449U);
    msg.setDestinationEntity(144U);
    msg.value = 0.920528057624702;
    msg.sys_src = 5933U;

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
    msg.setTimeStamp(0.38894647261194804);
    msg.setSource(58723U);
    msg.setSourceEntity(155U);
    msg.setDestination(25501U);
    msg.setDestinationEntity(232U);
    msg.value = 0.944316142205068;
    msg.sys_src = 59977U;

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
    msg.setTimeStamp(0.2366599506729017);
    msg.setSource(40383U);
    msg.setSourceEntity(164U);
    msg.setDestination(62116U);
    msg.setDestinationEntity(136U);
    msg.value = 0.6309409219734516;
    msg.sys_src = 14599U;

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
    msg.setTimeStamp(0.7401572834978827);
    msg.setSource(29035U);
    msg.setSourceEntity(114U);
    msg.setDestination(26602U);
    msg.setDestinationEntity(221U);
    msg.value = 0.7485788687687822;
    msg.units = 99U;

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
    msg.setTimeStamp(0.8548755459568699);
    msg.setSource(967U);
    msg.setSourceEntity(131U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(59U);
    msg.value = 0.05368471057459656;
    msg.units = 175U;

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
    msg.setTimeStamp(0.8250219426961807);
    msg.setSource(26145U);
    msg.setSourceEntity(67U);
    msg.setDestination(8839U);
    msg.setDestinationEntity(133U);
    msg.value = 0.37089331349882204;
    msg.units = 136U;

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
    msg.setTimeStamp(0.22889474444748825);
    msg.setSource(40297U);
    msg.setSourceEntity(156U);
    msg.setDestination(20476U);
    msg.setDestinationEntity(49U);
    msg.base_lat = 0.7936715068098021;
    msg.base_lon = 0.2800127578609979;
    msg.base_time = 0.5714731771829392;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 11412U;
    tmp_msg_0.priority = -2;
    tmp_msg_0.x = -25210;
    tmp_msg_0.y = 8476;
    tmp_msg_0.z = 15227;
    tmp_msg_0.t = 6293;
    IMC::VehicleState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op_mode = 175U;
    tmp_tmp_msg_0_0.error_count = 85U;
    tmp_tmp_msg_0_0.error_ents.assign("PSQWOIKZBLDHLCUTYFVCMQREHFACUNMDCNUWEYFJILOHVDYYSWKDCLMAQUTXUAUO");
    tmp_tmp_msg_0_0.maneuver_type = 10449U;
    tmp_tmp_msg_0_0.maneuver_stime = 0.2991478346852804;
    tmp_tmp_msg_0_0.maneuver_eta = 37489U;
    tmp_tmp_msg_0_0.control_loops = 3324577941U;
    tmp_tmp_msg_0_0.flags = 88U;
    tmp_tmp_msg_0_0.last_error.assign("TYCSVZTYXMYMBRABGHUTADFPZIJJGKMEWQLBVWJKXHOZIEEMKYCJWFNAEXSTFNZRXUEWDFKQYFNBAOPPTWYCNKQAMHPLPPFMSRYAFHDLVYCZNJQXIDGACJNEAMHTYHMQUUNODIGQNWONCSVQHZTEOOEVKSKDAJOTPW");
    tmp_tmp_msg_0_0.last_error_time = 0.6111662655855475;
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
    msg.setTimeStamp(0.27605101291687784);
    msg.setSource(13151U);
    msg.setSourceEntity(88U);
    msg.setDestination(4321U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.48848561048965555;
    msg.base_lon = 0.9987656441020475;
    msg.base_time = 0.03131054276606582;

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
    msg.setTimeStamp(0.5223135674521595);
    msg.setSource(41372U);
    msg.setSourceEntity(76U);
    msg.setDestination(47846U);
    msg.setDestinationEntity(101U);
    msg.base_lat = 0.9448976623448702;
    msg.base_lon = 0.3328520399700533;
    msg.base_time = 0.25996108989140976;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 19818U;
    tmp_msg_0.destination = 13743U;
    tmp_msg_0.timeout = 0.03514526944286278;
    IMC::SadcReadings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.channel = 16;
    tmp_tmp_msg_0_0.value = -1743275352;
    tmp_tmp_msg_0_0.gain = 39U;
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
    msg.setTimeStamp(0.19150536877607438);
    msg.setSource(17492U);
    msg.setSourceEntity(154U);
    msg.setDestination(45747U);
    msg.setDestinationEntity(81U);
    msg.base_lat = 0.8312172366677385;
    msg.base_lon = 0.6696379261846972;
    msg.base_time = 0.7981677501189509;
    const signed char tmp_msg_0[] = {-88, -15, -102, -50, -49, 72, 50, -83, -112, -108, 90, -107, -41, -15, 83, 88, 88, -28, 73, -17, -117, 16, -1, 14, 22, 113, 48, 4, 95, -98, 32, -7, -108, -105, -99, 3, -23, -51, 100, -1, 124, -114, 95, 60, 0, -23, 14, -113, 119, 53, 35, -91, 58, -23, -49, 1, -12, -17, -49, 69, -33, -22, 18, -78, 12, -67, 9, -39, 36, -1, -122, -31, -85, -59, -45, -24, 111, -113, -1, -81, -81, -29, 117, -73, 86, -19, 7, -53, -28, -27, -78, -60, 57, 46, -21, -97, -38, -100, 72, -72, -13, 89, 92, 99, -28, -116, 36, 80, 56, 12, 4, -27, -76, 57, -70, -19, 57, -79, -65, 42, 103, -110, 19, 103, -48, -127, -58, -94, 61, 92, -74, -125, 43, -64, -104, 7, 42, 34, 55, 3, 86, 63, 68, -8, 97, -29, -108, 59, -70, 31, -51, -110, -68, 51, 119, -110, 77, 50, 22, -28, -123, 91, 110};
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
    msg.setTimeStamp(0.09487030457117618);
    msg.setSource(41597U);
    msg.setSourceEntity(71U);
    msg.setDestination(48753U);
    msg.setDestinationEntity(241U);
    msg.base_lat = 0.9688167483203017;
    msg.base_lon = 0.10153080467382036;
    msg.base_time = 0.9434548031214575;
    const signed char tmp_msg_0[] = {-27, 62, 115, 114, 11, -124, 16, -115, -26, -52, -64, 100, 90, 46, -14, 107, 97, -53, 66, -69, 23, -48, 7, -30, 117, -55, -21, -99, 24, 120, -10, 7, 55, -106, 2, -111, 109, -125, -53, -55, -98, 68, 94, 116, 111, 122, 61, 5, 110, 78, -65, -97, 76, 122, -108, -6, 15, -64, 18, -39, -22, 116, -76, 16, 60, 31, 79, 26, -49, -55, -70, -43, -49, 21, 60, -44, -51, -8, 112, -90, -125, -60, 75};
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
    msg.setTimeStamp(0.09722340818708997);
    msg.setSource(26579U);
    msg.setSourceEntity(182U);
    msg.setDestination(37091U);
    msg.setDestinationEntity(186U);
    msg.base_lat = 0.388173749945677;
    msg.base_lon = 0.722417387321371;
    msg.base_time = 0.02983183112417498;
    const signed char tmp_msg_0[] = {15, 50, 0, -91, -10, -113, 31, -125, -101, -112, -126, -81, -29, -92, -113, -94, 39, -37, 28, 60, 51, 17, -44, -38, 103, 61, 93, 57, 64, 100, -106, -78, -13, -111, -10, 103, 126, 34, 96, -55, 59, -80, 19, 73, 98, -5, 83, 57, -61, 87, -66, 6, -103, 54, 40, -38, 72, 65, 72, -113, 66, 56, -118, 24, -39, -69, -49, -65, 81, -70, -121, -24, 28, -36, -71, -57, -96, 110, -100, -49, 80, -15, 15, -113, -58, -26, -98, 41, -42, -59, 53, -78, -27, 16, 18, 17, 113, 13, -51, 98, -26, -33, -84, -34, 122, -121, 26, -108, -45, -17, -9, -90, 44, 62, -114, -16, -95, 31, -88, 85, 115, 13, -19, -80, -72, -56, -120, 24, -120, 72, -32, 37, -78, 75, 15, -125, -110, 27, 39, -105, 93, -39, -95, -68, -38, 46, -31, -68, 7, 109, -43, -56, -17, 87, -109, -61, 34, -43, -38, 125, -84, 17, 110, 40, -62, 116, -68, -115, -84, 104, 69, 42, -91, 112, 12, 77, -74, -69, 56, 35, 17, 17, 57, 71, -54, 85, 16, -107, -99, 45, 50, -50, 35, -71, -4, 10, 123, -89, 110, 109, -94, 105, -73, -84, 45, -91, -40, 116, -12, 14, 98, 70, -35, 107, -102, 99, -46, -55, -43, 50, 124, -67, 46, -26, 119, 36, 27, -58, -42, 28, -84, 111, 42, 113};
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
    msg.setTimeStamp(0.6196499078983082);
    msg.setSource(19275U);
    msg.setSourceEntity(252U);
    msg.setDestination(2311U);
    msg.setDestinationEntity(187U);
    msg.sys_id = 60847U;
    msg.priority = -26;
    msg.x = -3339;
    msg.y = -24583;
    msg.z = -5961;
    msg.t = -15858;
    IMC::RelativeHumidity tmp_msg_0;
    tmp_msg_0.value = 0.5029983963202705;
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
    msg.setTimeStamp(0.49801607887782817);
    msg.setSource(7964U);
    msg.setSourceEntity(177U);
    msg.setDestination(58445U);
    msg.setDestinationEntity(34U);
    msg.sys_id = 11083U;
    msg.priority = 64;
    msg.x = 84;
    msg.y = 28802;
    msg.z = 10735;
    msg.t = -23064;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.type = 18U;
    tmp_msg_0.op = 92U;
    tmp_msg_0.possimerr = 0.9712739087569279;
    tmp_msg_0.converg = 0.7405019140979586;
    tmp_msg_0.turbulence = 0.9355903749225835;
    tmp_msg_0.possimmon = 230U;
    tmp_msg_0.commmon = 52U;
    tmp_msg_0.convergmon = 212U;
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
    msg.setTimeStamp(0.98348348703628);
    msg.setSource(39669U);
    msg.setSourceEntity(148U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(184U);
    msg.sys_id = 25017U;
    msg.priority = 57;
    msg.x = -30511;
    msg.y = 23540;
    msg.z = -8597;
    msg.t = -13035;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 57579U;
    tmp_msg_0.status = 30U;
    tmp_msg_0.info.assign("KDQCDMUGWFQPRELTYGRKXYJLHWTROSKIOZWVUSSQIHHPPMBWUAULPKSZXWDMHUCQOTMQXXPUQSTAHEACBGFRLHULZQMRATKJOGCZEJEEYRZZNMNYCOFQNZIAPEONTCOFVAGFXJQDFBIACNDFLRVCYKNITDIANIOPSJGHJEHYGLFBJYBZGXBAEGZKHMNYTVVYAJLIMMWGFWSWVOPVVVUBBWDBUMPSNOXXJZLRDWIHEDSQCFPVTKLJRXSU");
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
    msg.setTimeStamp(0.1690284796427456);
    msg.setSource(53785U);
    msg.setSourceEntity(250U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(195U);
    msg.req_id = 9251U;
    msg.type = 49U;
    msg.max_size = 11444U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.21879646632205074;
    tmp_msg_0.base_lon = 0.16603777757164329;
    tmp_msg_0.base_time = 0.402691091631886;
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
    msg.setTimeStamp(0.24824499440389236);
    msg.setSource(64693U);
    msg.setSourceEntity(241U);
    msg.setDestination(7654U);
    msg.setDestinationEntity(113U);
    msg.req_id = 41391U;
    msg.type = 7U;
    msg.max_size = 45573U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5164644696008961;
    tmp_msg_0.base_lon = 0.37861804795432286;
    tmp_msg_0.base_time = 0.32736221494269924;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 37193U;
    tmp_tmp_msg_0_0.destination = 46677U;
    tmp_tmp_msg_0_0.timeout = 0.09075466751010597;
    IMC::DesiredPath tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.path_ref = 2256012739U;
    tmp_tmp_tmp_msg_0_0_0.start_lat = 0.28688001340797953;
    tmp_tmp_tmp_msg_0_0_0.start_lon = 0.5184878674662927;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.565295393287679;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 178U;
    tmp_tmp_tmp_msg_0_0_0.end_lat = 0.18970476575612838;
    tmp_tmp_tmp_msg_0_0_0.end_lon = 0.019782293034131482;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.32477495144448854;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 156U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8021304087440778;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 186U;
    tmp_tmp_tmp_msg_0_0_0.lradius = 0.3100575856200768;
    tmp_tmp_tmp_msg_0_0_0.flags = 117U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.15388975846883102);
    msg.setSource(42993U);
    msg.setSourceEntity(159U);
    msg.setDestination(38798U);
    msg.setDestinationEntity(51U);
    msg.req_id = 6604U;
    msg.type = 226U;
    msg.max_size = 28283U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4734419993334309;
    tmp_msg_0.base_lon = 0.2647557960158865;
    tmp_msg_0.base_time = 0.24243489124589623;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 64655U;
    tmp_tmp_msg_0_0.priority = -60;
    tmp_tmp_msg_0_0.x = -19279;
    tmp_tmp_msg_0_0.y = -13815;
    tmp_tmp_msg_0_0.z = 5275;
    tmp_tmp_msg_0_0.t = 15729;
    IMC::EmergencyControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.command = 144U;
    IMC::PlanSpecification tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_id.assign("YRDAJHJKAGZOXHPWDMVIWXGWYFGZKLGQKUCMNPYAKLMULIUCMQZVCRZOVAJTBFKCMXS");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("IAFUZWXQAXKSXFGIRITIODVEMOUMMRXIVFZJLMFSJBVIXVUGABOTAWASKPORWFJCPDSTEHTCCVFHCEVBIDKGTYNLLAPQXSGYSBZKYNLGOLCUSJLSEFUSKTDYIHKDHRMACENADZVJGULRFKYQEYDPGKHQEYJPZQEEWQPOHJFIGCJNZYNWQHWOIZNDOLTMRCPHPPQDXZYMUXZTFVW");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.vnamespace.assign("VGRLRQSYZCNSWTKDSATVOEVKDOEVJZUDHSWKPLEMCJLTWAFMXISMSOJIHDKHJZIHXYAXTFXHQGGCUOCZJEBENGYNWETWAWNGTUVBOZFDSUSOLFWGTQSDEIPNTQYBCNQHKZZRUIUYEOPRPEVVGBCWFBSHIAFJZPFQDBLRMNFBDIIMNLJ");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_man_id.assign("ARKGPQPCEXVYQOEPQISBDGXTAUGQXYQWDWUFRLVEJUKHXJVMELZHERUTHLHNXCFWHBVNNKKFTROLVYATNNMPUMZHCRBZRIFAOFIJSNPYKYRBSQIDXKOPSSTQJDELDUXZZOJRBWCXRQONCKFFOCTMWAMVLFCWNCDPXBESFSYIBIOZMUQBYICGFGKRISGOGHGYZAWSDDIEYZLXADNMMTVTWEBEJHPTWGQUAJZAUYAHDHWMZKLLNGLCMSPPKJVVJI");
    IMC::PlanTransition tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.source_man.assign("MUOROZJUGGZPJABQCYMSAXCQIBSISKVIZMGXJTYBDYECNBFOFVHNPUJLUVDGZJPLTJRNDFFBQGYVNYWAR");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.dest_man.assign("DOXYYTCLHIPNAUMTSXQGSBPTOIH");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.conditions.assign("KYKPFLNJMZXMWPAYLGCWSSELCPERFBVPMOARVMDZLGHEFIPSPIAOBXRJODYVXJMZSDLGBAVWOKKQJESMTHNWEQMAXGTDZSNGJTINNCUYLOYPUTVXMJHFXKCDZSYVQZQDBVEWXIEZJNFFEFYQBNKIAGDCXCQUMWPLHKHKVNXATEHUIUGZIFCOQUHBPUOBWHTORDQRZDL");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.transitions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    IMC::DesiredVerticalRate tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.value = 0.19651011156088227;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.plan.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
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
    msg.setTimeStamp(0.784661158453244);
    msg.setSource(51163U);
    msg.setSourceEntity(33U);
    msg.setDestination(27450U);
    msg.setDestinationEntity(118U);
    msg.original_source = 46490U;
    msg.destination = 47949U;
    msg.timeout = 0.13188618005201314;
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24873U;
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
    msg.setTimeStamp(0.6325411577738668);
    msg.setSource(35630U);
    msg.setSourceEntity(71U);
    msg.setDestination(42793U);
    msg.setDestinationEntity(247U);
    msg.original_source = 56467U;
    msg.destination = 26205U;
    msg.timeout = 0.34406611789052044;
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 206U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("WYKUCIVUTZQNBKNJILVZEWFTAOESFDNSHWKXMDSHPYTLFURDVNRJHZNZQYKGDEXRDMIHRWSFZAYPJPXLPMCDLBGDJVUKJHXHYIASNWZVYEPIFSQOGELHCAUYQHDFCZEBRWDANHXKMYLOWRBQECGOCNTVKAVMFBREPHU");
    tmp_tmp_msg_0_0.description.assign("BASFKPEPTECWLKEGKBRQZEFVDXKEJKWQTKHDSYTFLVIJSTTGPSIWLVQJGBTOXJWPSXTCFEIYYZFVMMFQURNIMADSIFBLUTHUAEWQDVZRUJVRXPCOJMOZZMKRNSEOFDYHIMDSGLOGBZJMQIEMBHHBZQC");
    tmp_tmp_msg_0_0.vnamespace.assign("SYBDIUWHBNUOUBFYQVCQLRQOMJZKFBRYRMXKGGQJJWAOMTFHBIVGVXPFTZKKPGIGENCRKBMETSUFNPRNRCAAZKIKDDXBQCPIPNJHOBWFEOHLVRYOKFFCRHZITJSLIYLTTZMPZEAQIWDAWEXCZOCHUYRVAGMFHSJSMZTGCELJMVJVUMXLGUXYOQILVHPNDVDFSOZOCTSNRNPUDBLAUWAEQLDDUCKZHDPAGIXSKJXLSYPW");
    IMC::PlanVariable tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("GQYKLRNXZLTBMSLGHMQLRAJJTULEBYTRIOBCNARWCTNMENNHNROWHPFYSQUIROVAGZMONPJTGJJPBAEGVXJZEPGQDVPUPFDMAHVEFNUZHUVYFVBLYCYDVQODZVMOIEQMKGGOMSBEWXGQLUCSKWDJHXDSRSOFUBTYFWIJKXIKTKALCNTAIQDPIRFICYKNIKRUHCXESDTZ");
    tmp_tmp_tmp_msg_0_0_0.value.assign("LOSRLTELTWQWPJNJEMMBBFXA");
    tmp_tmp_tmp_msg_0_0_0.type = 87U;
    tmp_tmp_tmp_msg_0_0_0.access = 136U;
    tmp_tmp_msg_0_0.variables.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.start_man_id.assign("JADUBXMSII");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.maneuver_id.assign("ZNKGWLIKPMLQLIFYSDOGSQIJHAXHPXCCNPXWODBSRAVJOQNDGTOXFCFRUNICVYBPCXGMZDGC");
    IMC::CompassCalibration tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeout = 54685U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lat = 0.7467572141850481;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.lon = 0.5215276641603966;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z = 0.9680526430955424;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.z_units = 205U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.pitch = 0.8014526457082177;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.amplitude = 0.04903208811979609;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.duration = 62001U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed = 0.645411884902946;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.speed_units = 171U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.radius = 0.7698269578867829;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.direction = 161U;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.custom.assign("NKJKHRISQBDZGHPAMNOGTRXQRIQHTVMDBBDOUFADIKBAOJCXRJZNSTQCEPFFADAZGDMSXMRACXOOBBZYDJZHTVUEUIHEKBTCZVYFFSABMCYRQCROZOJCFLVXIWCFMTFLE");
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    IMC::UASimulation tmp_tmp_tmp_tmp_msg_0_0_1_1;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.type = 99U;
    tmp_tmp_tmp_tmp_msg_0_0_1_1.speed = 60809U;
    const signed char tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0[] = {-50, -117, -7, 29, -114, 120, 77, 62, -17, 39, 120, -50, -78, 39, -37, 87, -77, 66, 69, -24, 72, 3, 32, 78, 51, 84, -43, 75, -63, -62, -94, -77, -59, -122, -105, 20, -20, 88, -37, -10, -56, 85, -67, -85, 63, 122, 54, 122, -110, 28, -22, -75, -78, 89, 80, -76, 98, -75, -8, -12, 4, -111, 102, -8, -6, -38, 93, 16, -86, -94, 85, -15, -90, 5, 116, -26, 106, 89, -42, 22, -27, -86, -39, -66, 8, -80, 67, -83, -78, -98, -3, -65, 84, 26, 32, -14, 107, 24, -47, 84, 78, 108, 73, -11, -128, -95, 15, 62, 13, 77, -15, -61, -60, 34, -38, -14, -103, 6, 39, 103, -29, 24, -44, -99, 83, -60, 118, -103, -101, -19, 24, -121, -53, 39, -41, -2, -43, -32, 77, 82, 91, -64, -56, -102, 90, 20, 58, -45, 4, 48, 56, 19, -122, 71, 17, -112, -47, -84, -51, 26, 125, 106, 32, 7, 32, 74, 123, 20, -18, 23, 16, -9, 77, -40, -54, 78, -80, -107, -56, 55, -118, -5, 41, 13, -80, -86, 94, -4, -42, 67, 59};
    tmp_tmp_tmp_tmp_msg_0_0_1_1.data.assign(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0, tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_1_0));
    tmp_tmp_tmp_msg_0_0_1.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_1);
    IMC::ENCAwareness tmp_tmp_tmp_tmp_msg_0_0_1_2;
    tmp_tmp_tmp_tmp_msg_0_0_1_2.depth_at_loc.assign("YEQIQDCMKGQVMDPHUXYJBCIPHYMUZKNH");
    tmp_tmp_tmp_tmp_msg_0_0_1_2.danger.assign("EJUTDHVWXGOWOISQBRENQQTOMJXMLUSNPJOKGCFDMVFA");
    tmp_tmp_tmp_msg_0_0_1.end_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_2);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.source_man.assign("XKYOJLDGPODSKAKDPIYBSFU");
    tmp_tmp_tmp_msg_0_0_2.dest_man.assign("WRXCDBEQYJBLQHGPSIUAHRVMSMNJSXYTQIJBOBXAPKWCKMIWKWNPQDA");
    tmp_tmp_tmp_msg_0_0_2.conditions.assign("XOXWMFQBZKFJSDHJUTSTJBZAQPALKDVJKIIYYOLQDUYLUTRCEWZMGPNJHTBTJFQAKIXZHOLREXVYZSWDZWDAJQSRAPRUUJIABMMHHFF");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9998010266903627);
    msg.setSource(30433U);
    msg.setSourceEntity(236U);
    msg.setDestination(7300U);
    msg.setDestinationEntity(49U);
    msg.original_source = 32245U;
    msg.destination = 37957U;
    msg.timeout = 0.39458698885794785;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 26333U;
    tmp_msg_0.destination = 32578U;
    tmp_msg_0.timeout = 0.9507844320677361;
    IMC::QueryEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BCLBZGHIWZQRTYIEKXSFZRPLMQLCPWSUNGGDWUDFPWBQEAXXHJCWNCVIHYSGCMZKPZFEDFXITDJMVXONLNFBBPIACJBIMFKLBSUGZFNLYUUQMHANAIHZVYOKOTQERVUKYWKQXREDZKOVLWVGXEUDESDRKEOMDEDCCWVNECAXAUJJNOFMOTJIBJCHBQVOWYPBZXTMNYROGYPMKHRGTTGKRVUGIAPJTRSQYANOHPLQAYSWSS");
    tmp_tmp_msg_0_0.visibility.assign("QAEPOYLGTNKDKSRLFDAQNWDQEWDPIFWNNDHWIRKZSKOXRZRHBNNUTYYMYJVVXTFHUGW");
    tmp_tmp_msg_0_0.scope.assign("MYDMKCFVQXCKCXOQAGMFWHXJSJNMUVZAWYHKBRKLWPWUPUKQNOHHGXUSLOZPQEMOSRSKLAYTPWBXQGHRDIDOJDBYMWCBAVYUMOCHBDNBYFNQCPLTRZIANXMEKAFIGYXEDOSTZSRJVBHIZJQZSHTIGJKZIZXKYQEVOEMLZSVXVOTXCFNARTNRTZGWFJGLWEE");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.30073582321435366);
    msg.setSource(65486U);
    msg.setSourceEntity(79U);
    msg.setDestination(23823U);
    msg.setDestinationEntity(144U);
    msg.type = 50U;
    msg.comm_interface = 17875U;
    msg.model = 40014U;
    msg.list.assign("OSCXXQRVFPSBSZOYRXBMFKWNUYIIMCRWXAJLNFGVNTKRNEGEIISAJPUEQALZHUUUBKLMKNGZICYHDJKZCPIDFCDHCGPXVBKYBYODJNLPQTKSCTVZJBLCQLDORECWMYPLEAQXTOVHVOJHWQXHTNGMPDJMRTSUUFEKVWEJHUMYZKKCYLGTDIYQENBGTAVOSBASZWHXXPG");

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
    msg.setTimeStamp(0.10883885693230466);
    msg.setSource(33398U);
    msg.setSourceEntity(182U);
    msg.setDestination(24346U);
    msg.setDestinationEntity(141U);
    msg.type = 117U;
    msg.comm_interface = 45455U;
    msg.model = 26681U;
    msg.list.assign("NZMQNQMSWKDYRYTWFDPFBLAXXAOEOGEXRXKKPQUTKMAHFPPNGYNBIMGBIXHCQGIL");

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
    msg.setTimeStamp(0.5344507636381203);
    msg.setSource(11482U);
    msg.setSourceEntity(105U);
    msg.setDestination(34222U);
    msg.setDestinationEntity(243U);
    msg.type = 165U;
    msg.comm_interface = 63937U;
    msg.model = 26172U;
    msg.list.assign("LTGNSHVQSKGXSMVRPRDNEUQITGBKERHGUGRYSUVXHDWBCWUZBLQGWEUYYIPISVOZEFQTOSZIOWVBIDQNTDGPLAUAPVPYOJXLZTOQILBEAGHSMFRAMDJVRFNYVOAXJCKNRZEQANONYJIDDCMELRCWBMI");

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
    msg.setTimeStamp(0.7531136315050261);
    msg.setSource(51860U);
    msg.setSourceEntity(169U);
    msg.setDestination(17637U);
    msg.setDestinationEntity(48U);
    msg.type = 192U;
    msg.req_id = 3568558751U;
    msg.ttl = 33233U;
    msg.code = 217U;
    msg.destination.assign("FFNORQXHHKUBGRYWWFZPRRLTU");
    msg.source.assign("KHEWZQTRHVJCRYOPRSDJAEBDTVNUMRLFZZKSVHLCFFOXZICRAQMGOIBADIDJYFBKABSMYBTFEJCPJLWVKQWCLWSALAXXBHFNVKOAMTOI");
    msg.acknowledge = 80U;
    msg.status = 5U;
    const signed char tmp_msg_0[] = {-10, 79, 104, -10, 60, 100, 5, -81, -10, -12, -51, 66, -127, -57, 112, -21, 68, -100, 4, 78, -50, -82, -47, 16, 94, 83, -96, 44, -22, 5, -112, -1, 98, 30, -116, -39, 27, -41, 77, 88, -19, 13, 20, 40, 39, 103, 68, -2, 69, 95, 124, -107, -45, 84, -100, -43, -2, -102, -31, 62, 36, -116, -21, -12, 16, 95, -1, 60, -43, 87, -79, 83, -84, 60, 94, 27, -24, -127, -37, -94, 11, -110, 77, 29, -80, 108, -38, 99, -111, 107, 70, -119, -51, 78, -43, 88, 92, -84, -113, 68, 86, -20, 93, 80, -112, -104, -128, -57, -99, 80, -50, 39, -122, -32, -60, 100, -91, -20, -88, -29, -34, -42, 48, -82, 120, -33, -116, -7, 34, 52, -7, -119, 89, -25, -76, 53, -51, -41, 12, -13, 61, 1, 31};
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
    msg.setTimeStamp(0.21910704596896058);
    msg.setSource(15855U);
    msg.setSourceEntity(73U);
    msg.setDestination(13119U);
    msg.setDestinationEntity(237U);
    msg.type = 226U;
    msg.req_id = 3941002174U;
    msg.ttl = 23360U;
    msg.code = 162U;
    msg.destination.assign("WCLZODXCXVJAJPMKIRWNROABTNPLXYIYDHOFBGFVKGWASKSSZHQRAGMVEMIGHVAWV");
    msg.source.assign("HSXWJRBZQQYTEDANPMICMWHXWBYXEGNYDOHIVNSDTLLBZXFEUNGKMADPSCRIGZRJZUVEHPVVSEAKDWCKCJQYVQEPOKXUJJXQLNYDPNINTMBLHXIYKBUFBMWOIOWLXFJCRTODTPOSSAOZGFUZDFLAPDETQIGQTRHCBSUYANLBUZQYKWKCWAG");
    msg.acknowledge = 40U;
    msg.status = 66U;
    const signed char tmp_msg_0[] = {73, 30, -98, 115, -13, -35, 7, -116, 20, 118, 125, -86, 38, -32, 103, -109, -117, 30, -3, 66, -2, -120, -118, 100, -44, -40, 85, 85, -116, -44, 103, 56, -119, -67, -120, 118, 56, -4, -65, 13, -80, -126, 36, -75, 3, 7, -44, 47, 97, 93, -66, 11, 92, 119, 82, 102, 125, -120, 49, 116, 63, -93, 125, 125, 48, -104, -68, -58, 64, -73, -38, 60, 24, -74, -91, 60, -107, -21, 81, 43, 30, -100, 64, -77, 95, 31, -102, 70, 71, 65, 6, 116, 104, 81, -56, -44, -100, 116, -37, 79, 32, -29, 91, 76, -65, 126, -112, 2, 106, -65, -78, -52, 97, 98, 57, 72, 63, 25, -118, -8, -118, -122, 86, -12, 50};
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
    msg.setTimeStamp(0.8972865048824723);
    msg.setSource(64619U);
    msg.setSourceEntity(16U);
    msg.setDestination(58161U);
    msg.setDestinationEntity(59U);
    msg.type = 50U;
    msg.req_id = 3507436010U;
    msg.ttl = 38899U;
    msg.code = 133U;
    msg.destination.assign("OHIFYRNHCFOJSIFYPTBQWKWSNTJWTMQGZEDZYWMLJFKDPTMJVHEGKKPQNNDIECZGLUCDVONGVOFXLSRAJVISZRJQBIYFDKHWMGYADZNPBTNSBGVXHPKOE");
    msg.source.assign("JXFWVUZQVYLCFOIMAQCPORZLCDLNWQAZXLOMFBBOBVAEDIIDKEFKXIKEGYOQCPUZSHUFUOGMMVRNVMFPYJGAUKXMSEOJRBTVYOAQGSHGBCZJTTGAADGYIEWQNYXBGPNIPMZNVRSDNLLBJPIJWQVHPBTQNECEXNTDIDGBEQFHHRERYWCMAZJNRCYRJYLTZPHOKFLXRTDUDMSKUXCHHVWNJVAKKFZSUL");
    msg.acknowledge = 130U;
    msg.status = 24U;
    const signed char tmp_msg_0[] = {112, -38, -28, -99, 88, 6, 9, 8, -32, -29, -2, -37, 97, 89, -13, 19, 105, -48, -2, 5, -42, -121, 116, 46, -26, 12, -55, -58, -12, -105, 44, 101, -120, -127, 88, -37, 117, -127, 116, 40, -99, -56, 88, -117, -123, -52, -117, 22, -62, -107, -8, 31, 55, 124, 126, -88, 114, -76, -52, 119, 82, -76, 12, -47, 30, -10, -23, -44, 75, -42, -38, 111, -42, 42, -73, -17, -60, 10, 72, 67, -44, 117, 119, 30, 20, -47, 17, 113, 49, 88, -76, 16, -49, -23, -111, -23, -69, -99, -94, 33, 118, 84, -16, -125, -72, -51, -66, -59, 67, 75, 82, -78, 69, 54, 27, -31, 80, 32, 55, 117, -4, 58, -41, -85, 107, 38, -121, -39, -18, -98, 70, -115, 18, -86, 80, 101, 13, 35, 12, 11, -35, -77, 107, 15, 83, -49, 50, 23, 23, 109, 13, -72, 114, -39, 110, 36, -116, 79, 83, -79, -44, -113, 41, 45, 40, 11, -18, -10, -5, 93, -71, 75, 73, -98, -60, 29, 11, -77, -56, 78, -120, 5, 1, -117, 81, 37, -53, -32, 46, -107, -55, 12, -94, -127, -88, 106, -31, 27, 12, 86, 120, -28, 19, -101, -23, -30, -29, 23, 123, 17, 6, 63, 39, -1, 109, 19, -26, -17, 71, -75, 19, -106, -7};
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
    msg.setTimeStamp(0.01620912237804073);
    msg.setSource(27099U);
    msg.setSourceEntity(62U);
    msg.setDestination(17382U);
    msg.setDestinationEntity(41U);
    msg.id = 219U;
    msg.range = 0.8733202407297767;

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
    msg.setTimeStamp(0.8761226163142273);
    msg.setSource(34206U);
    msg.setSourceEntity(15U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(177U);
    msg.id = 232U;
    msg.range = 0.9688436157369711;

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
    msg.setTimeStamp(0.990444059050303);
    msg.setSource(22604U);
    msg.setSourceEntity(145U);
    msg.setDestination(18005U);
    msg.setDestinationEntity(150U);
    msg.id = 227U;
    msg.range = 0.43642305620060395;

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
    msg.setTimeStamp(0.43235047149215233);
    msg.setSource(62531U);
    msg.setSourceEntity(193U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(11U);
    msg.beacon.assign("INIOHEBSRXHCVECLQYKFDZMXGVZGKHHSVA");
    msg.lat = 0.4613891515690114;
    msg.lon = 0.04549829739565292;
    msg.depth = 0.52782647439322;
    msg.query_channel = 88U;
    msg.reply_channel = 11U;
    msg.transponder_delay = 190U;

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
    msg.setTimeStamp(0.9109998057289899);
    msg.setSource(51020U);
    msg.setSourceEntity(89U);
    msg.setDestination(46975U);
    msg.setDestinationEntity(140U);
    msg.beacon.assign("GXWINZNJDDWSHTVPAFKZGIQQIYMOOLMKRUQCVNLROZJDSHSYFUUISOMXSJJAFXSNTPDGZMVXVCOUXRLCCDAYBHDJQEHRGZUEUNKQJNWFRKTLWUIIGJYUDPRAMCTCOSVGLVAXFWWIBFWQYAKHCAZQZAPFXJTZJGCSVCIQUBMPRGBASDYDCOLPMEXNNFEPFFKHYLDKEQMOTOMWKTGVZPBWEMUTXTVHLXJKBVLNNWSREIIRBQZAHBPYYOPLGEEK");
    msg.lat = 0.6803896108481363;
    msg.lon = 0.21317556400104853;
    msg.depth = 0.6948802910202103;
    msg.query_channel = 14U;
    msg.reply_channel = 133U;
    msg.transponder_delay = 104U;

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
    msg.setTimeStamp(0.3639734220767079);
    msg.setSource(51042U);
    msg.setSourceEntity(115U);
    msg.setDestination(16996U);
    msg.setDestinationEntity(189U);
    msg.beacon.assign("LFNNCZLXSZMWPIDSTFBVRZSYTQRZBTWMKWGB");
    msg.lat = 0.916504330491921;
    msg.lon = 0.3332131219048994;
    msg.depth = 0.8295371439636415;
    msg.query_channel = 163U;
    msg.reply_channel = 136U;
    msg.transponder_delay = 5U;

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
    msg.setTimeStamp(0.5740619331570384);
    msg.setSource(60245U);
    msg.setSourceEntity(58U);
    msg.setDestination(38334U);
    msg.setDestinationEntity(50U);
    msg.op = 80U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZAINXWKPBAKYMFUYGIENXRYBUWZZWNVLYHLRXTXTYBFCRCNRRPQWSWGRDEHQPENCECMOKULPPFHXXQJTVIJQCIDOPFZGJOZHCGTVHDEQZXQSMINHUOZFSAGORGKSTBYAFTJDSWADQQKTBODNOFGJQDFFBMMLBHNZMVCHPAWKJNAELIHMWWLSYUKEIY");
    tmp_msg_0.lat = 0.9618390479111454;
    tmp_msg_0.lon = 0.27543639885259075;
    tmp_msg_0.depth = 0.6018801953732099;
    tmp_msg_0.query_channel = 226U;
    tmp_msg_0.reply_channel = 162U;
    tmp_msg_0.transponder_delay = 114U;
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
    msg.setTimeStamp(0.2630219618301458);
    msg.setSource(28371U);
    msg.setSourceEntity(170U);
    msg.setDestination(26619U);
    msg.setDestinationEntity(144U);
    msg.op = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HSYZCUZPBKATZVSWRVMALIPNYETOSSFSDYAETGTYBWGCEUXZOWCMXZGXWOKFFVLQBMSZBDVUWBLQLVKUUEXUTVMIRGAYDNQHJIRGRTYMHEXJPUHQOCNE");
    tmp_msg_0.lat = 0.48839350667391346;
    tmp_msg_0.lon = 0.9730025652968022;
    tmp_msg_0.depth = 0.6231286433113087;
    tmp_msg_0.query_channel = 183U;
    tmp_msg_0.reply_channel = 247U;
    tmp_msg_0.transponder_delay = 148U;
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
    msg.setTimeStamp(0.4571437842406152);
    msg.setSource(55764U);
    msg.setSourceEntity(41U);
    msg.setDestination(29179U);
    msg.setDestinationEntity(162U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.3771735484012919);
    msg.setSource(45618U);
    msg.setSourceEntity(22U);
    msg.setDestination(7267U);
    msg.setDestinationEntity(174U);
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8060708814596477;
    tmp_msg_0.y = 0.9607733132086717;
    tmp_msg_0.z = 0.08604588997898666;
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
    msg.setTimeStamp(0.09603058740766912);
    msg.setSource(61145U);
    msg.setSourceEntity(12U);
    msg.setDestination(3884U);
    msg.setDestinationEntity(73U);
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OATAIUMTKCVFKVPJTFBWDGKBMBUVKNGPYNZBAIWZIEDEFWVICCWFIWUMYWJGADZUSRXRQNCOAMKFZNPSAZBDCMNRBULSHHRGQGYXLHXEUJAITELRHVPSMB");
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
    msg.setTimeStamp(0.3644306792497657);
    msg.setSource(25101U);
    msg.setSourceEntity(12U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(43U);
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.8498163266276607;
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
    msg.setTimeStamp(0.7315081288408575);
    msg.setSource(54120U);
    msg.setSourceEntity(247U);
    msg.setDestination(15009U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.4392765160365384;
    msg.lon = 0.12937619434613434;
    msg.depth = 0.2267992653348061;
    msg.sentence.assign("AQWHXWYGICYEYJKGZCEUTQIROGMFFBLCAYVGBVHMCRZNMOZEASULGOQKPQQVIJLIJXHVERBRFGFOHURLEKIHDPMWHMSESUNFFOQOPWNWPXVAPGS");
    msg.txtime = 0.9518489749683362;
    msg.modem_type.assign("LTQUAFFRPEJBQVWDRIBVMSWNLZDIAVQVEDOTWSIZLNMYJNCXJVFPQNCZJEBATSHDKSEMKWZMMUXYJFAMEWVRUHBINTQPWMXPJZBTFOYZQNTKCOVDRKLDUKKIBPTDOUCWSGNOHXQCEUUFAHRDNVLGVHURKAQYITMHGPHQWSHPYFIKLBJASDPFHSXAEEJYGWWKYEOIPXLLOROGFYUOXXTZQCTGAMRZON");
    msg.sys_src.assign("NAXOVKPENHLRXPXCSSOCSFVKDAYEJMSGIAWCGFKEHKZ");
    msg.seq = 64767U;
    msg.sys_dst.assign("ANWVGHDQRXXJBOEZUIXNRWTFHPHAWQBHBBTUPZLEPYNCKKVIJDVMXGTCAWULEJUPWNJSXIJITKBSGJMPUJSYYVTFICAGCFSLMWAVPVHYKVJMXEEYZOIERBKQCIOXOGMNSZZIMALATVYEBUXWHVTEQPRAFICMZGEZQGDLDTPSQFVRUDORGRYTLQBFBYQFCFNJHRDYUNAPGKWLKKZS");
    msg.flags = 24U;
    const signed char tmp_msg_0[] = {54, 93, 121, 9, -128, 87, 47, -104, -115, -73, 68, 101, 100, 18, 26, -2, -66, -119, -50, 32, 10, 0, 87, -3, 74, 83, -86, -128, -42, -27, -26, 94, 97, -102, -53, 34, -67, 71, 14, -95, -107, -35, 60, 68, -29, -45, 68, 121, 28, 44, -54, 98, -31, 13, -118, 47, 95};
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
    msg.setTimeStamp(0.30776642440696034);
    msg.setSource(15974U);
    msg.setSourceEntity(73U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(73U);
    msg.lat = 0.4189159566782029;
    msg.lon = 0.18058561135815665;
    msg.depth = 0.44983938167150295;
    msg.sentence.assign("QUZUWRXWBKSSOJAKTAVUVRFJJZACOHQDQENAFFIBYKVQKFIDJHUZYWLFPGKLCUTCWETMGMRUSHPAGRIANPOKHSYWBBEXNFLSXOGDVBHMYIACXMCKTJUTBGEWQVZELSVIKYCSLYRRIKADRLDNN");
    msg.txtime = 0.7721197877608217;
    msg.modem_type.assign("OWFOQFUIROWRFNBATJHLCBOTDKYWBKELPLBVHVNCTHJQBAZRSXJZFIKNEHTPHR");
    msg.sys_src.assign("AWLJMSTIZMZXLTQVDCHPWMZUQHHNMQUSQIFRFTN");
    msg.seq = 12132U;
    msg.sys_dst.assign("TNYFNISVVA");
    msg.flags = 197U;
    const signed char tmp_msg_0[] = {-63, -50, -90, 7, -9, -92, -90, 54, -30, -84, -102, -34, 126, 39, 30, -18, 71, 25, -32, 86, 74, 105, 0, 4, -13, -55, 112, 68, 24, 111, -115, 46, 41, 16, -123, -17, -37, 115, -21, -91, -8, 94, -28, -119, -121, 104, 93, -9, -60, 102, -56, 72, -41, 95, -87, -116, 52, -62, 97, -62, -25, 117, 37, -15, -25, 36};
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
    msg.setTimeStamp(0.2241699668768854);
    msg.setSource(29459U);
    msg.setSourceEntity(41U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.15284676041848588;
    msg.lon = 0.38291876525365387;
    msg.depth = 0.7802300064997589;
    msg.sentence.assign("FYUWWJITTATJJAOWTQDCGRCOLIEHZHKAXEVKFBOFWQIGJTRMSZVFKXKYVKCPOBZCWDTLWHDJVBJSCHGLLDUPIVTRXXHZHKRWVAQZMHYWRXFKYSXHGLQUNKPUPFIMGQQLUHQOYSNCMBEDANSNGAOWOIPMNXELGCBQYCAUUVXMZDAEXTT");
    msg.txtime = 0.7687268060250605;
    msg.modem_type.assign("AITEOEOHWJUCUOUCKRANZHFERDKKKXPRYTIYMCXOPUNSVIOFNIGFSPMHAVDIKTEZGTYSRXFXNJZUVLDVGWTTVLSSYDJPHGZLJFPYHBBUCBKQFOTWVUXAOMRBJNSGNRAQGVYWPLBMHZLRVLAKIMEAZ");
    msg.sys_src.assign("IZXPBZMUWVAJOPAAUKVYMPQCJBCXHGCKLOBGDPRJQZXYVMIYXNWESIOA");
    msg.seq = 12453U;
    msg.sys_dst.assign("XXTFLCEAZPEVJAGYCMJVDNQFNDPMJYRVVUMBFEYFZZQNNTSNCEFXG");
    msg.flags = 129U;
    const signed char tmp_msg_0[] = {123, 101, -93, -19, -36, 36, 30, -86, 4, 38, 42, -6, 106, -40, -97, 60, 72, -114, -15, -116, -25, 90, 47, -24, 4, -70, -5, -63, -46, 106, 94, 17, -50, 83, -8, -35, -18, 53, 109, -9, 66, -18, -71, -7, 23, 56, -41, -113, 62, -37, 5, -36, -24, 103, 75, 62, 22, -89, 18, 106, 70, -27, -19, -3, 85, 63, 126, 92, -64, 121, -72, 123, -78, 121, 32, 46, 49, 87, -7, 16, 85, -10, 111, -121, -97, -105, 85, 103, 90, 75, -45, 74, -97, 92, -122, 112};
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
    msg.setTimeStamp(0.19907052125606484);
    msg.setSource(31520U);
    msg.setSourceEntity(31U);
    msg.setDestination(44629U);
    msg.setDestinationEntity(214U);
    msg.op = 176U;
    msg.system.assign("TRLBVXTCINWTMKUBQVWLNSFRPQONNFNZLZDJDZOUTQMJKIMKBKJANERXAEC");
    msg.range = 0.3640903350026745;
    IMC::PlanStatistics tmp_msg_0;
    tmp_msg_0.plan_id.assign("LEMHCWOQZDMQXKDVQBZNBCYMTOBNVDXYJUPJPXBKVTGKJWFNJCSXPZYGTZRTAIQFYSSXGXNGAKFAVRJBAYJIAGSRNOKHOBUULOMUUTUUGPFJWGIVCEIAHRBSLRKPBSLHRWHQDCFOTQYXDGUQTWLMWDFZTEWWIBLREZCSPJL");
    tmp_msg_0.type = 101U;
    tmp_msg_0.properties = 198U;
    tmp_msg_0.durations.assign("RYVQMYLZDWNLMJUGCUGANUSRAMTGOYDWGYBLRZQWMYKRXHEVEBXBGXBTAXOCTOOREX");
    tmp_msg_0.distances.assign("UZPEKCRLYRQZXKGDMIADPTGNTWRVXVEROVQHAMFWWKITMJTHKREKRIBZMDHBUDSWFURVBFZYEFOPDHMSLYJETSNBYDIJIKAOCPYUPTUWNVLFKHZPJQOLSGWJPEXDOHZACCEVGUXXCPJFNWXCZGAWNIGLH");
    tmp_msg_0.actions.assign("RECFZKPLWZYIDIGLALKZYQNYIJYYWNNXFEOAQJDOFPFJTISOWRFJTHNVHFVHMVDTCXKTMQYPQJUVKAEYHSIDZGNEXWVDZVBCAA");
    tmp_msg_0.fuel.assign("DLMYXHAKADHHEWSPYTXIAEWNFINWUBCMMHORPCMUBSFDYJVTSAQNPXUJGONGKVUJTTLLEGOK");
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
    msg.setTimeStamp(0.39097913772948756);
    msg.setSource(53936U);
    msg.setSourceEntity(223U);
    msg.setDestination(56946U);
    msg.setDestinationEntity(87U);
    msg.op = 190U;
    msg.system.assign("PZPXEDYXKURHJCGAQMGVPDFOFTIJVQPWRUZFIACEDHEIULOUTJSRPLOFTXGSUVWIXWQZZUKDMZBSNLGWBMZAVKJWEVCBSCYBNLCCWBAMGKQQIDSIGBKTPHNKMDOWOQDEMNENOIQVWXAYUPVEHLEJAQUIAQOSRPXRRJEUCNGKJGOHHZXFSJMGHYQXVVINNDTFLNMESBYMVKKJDJACCWSDYAROLGYYUPPTFMBHRZCFOTWSTLH");
    msg.range = 0.31846837467588995;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 1U;
    tmp_msg_0.snapshot.assign("MLKNECBHZBVFQCQHBVZKUDXJWDTPEYVDBOUAAUCUEDDIHEYMBWXLKFKLEFSOGYNQPWUICAJTORVFMNEYUFHKSXGYCYUZECCEVZSWEPFVTXXIHLBZRHVSSOPA");
    IMC::ImageTxSettings tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.fps = 69U;
    tmp_tmp_msg_0_0.quality = 246U;
    tmp_tmp_msg_0_0.reps = 6U;
    tmp_tmp_msg_0_0.tsize = 123U;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.30506474625271085);
    msg.setSource(61664U);
    msg.setSourceEntity(172U);
    msg.setDestination(26811U);
    msg.setDestinationEntity(16U);
    msg.op = 103U;
    msg.system.assign("QALQTMTMRAWCRHLJRGM");
    msg.range = 0.37744303276426194;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7388809267028488;
    tmp_msg_0.z_units = 176U;
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
    msg.setTimeStamp(0.5965666104141368);
    msg.setSource(12386U);
    msg.setSourceEntity(120U);
    msg.setDestination(26773U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.5704554526300661);
    msg.setSource(20225U);
    msg.setSourceEntity(206U);
    msg.setDestination(12963U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.7076274592259805);
    msg.setSource(12174U);
    msg.setSourceEntity(132U);
    msg.setDestination(14198U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.33122494750188314);
    msg.setSource(54561U);
    msg.setSourceEntity(10U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(102U);
    msg.list.assign("JXZEBPIAFASFROFTHKSUBNSCZSACGKGVXWPZTLNEJQLGAAJUQRGCKSOIIOLHOTZSVSMYZNVFRASWDKLEUBDXBXWJRBM");

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
    msg.setTimeStamp(0.769457342826808);
    msg.setSource(45393U);
    msg.setSourceEntity(205U);
    msg.setDestination(5294U);
    msg.setDestinationEntity(19U);
    msg.list.assign("CTIUVLKNTYAPDEEZBNZCJHWYYIMBNEYESILKNGDJCOGJXSLKVISTIRRMXFDKIUDUVZBQUF");

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
    msg.setTimeStamp(0.9885357164492914);
    msg.setSource(19667U);
    msg.setSourceEntity(203U);
    msg.setDestination(43921U);
    msg.setDestinationEntity(54U);
    msg.list.assign("BCWGIBKVOVJRQCUTFCRAWFGASSCNCOJVWTMNTOAWHYVENZOQNUESWZPORQPYBEJGRDMETMEHAUMLIZF");

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
    msg.setTimeStamp(0.666966912857838);
    msg.setSource(43722U);
    msg.setSourceEntity(180U);
    msg.setDestination(48643U);
    msg.setDestinationEntity(15U);
    msg.peer.assign("EXQRIOBHPMIXUXWSUPUNAQNXRBULTIVQWD");
    msg.rssi = 0.1566699464278355;
    msg.integrity = 57715U;

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
    msg.setTimeStamp(0.057552511143628804);
    msg.setSource(38258U);
    msg.setSourceEntity(81U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(55U);
    msg.peer.assign("XOFLLTUPPMMFYRHPXHIYZGGOIJWPSQKDPLVHJPTSQATDPCVNVWHSTXIEYDSJLOBAGXCCMIAZMIIYAKSWUKYJVNRFEFXKKCDCW");
    msg.rssi = 0.6819242896770188;
    msg.integrity = 50963U;

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
    msg.setTimeStamp(0.8330434724843891);
    msg.setSource(28951U);
    msg.setSourceEntity(212U);
    msg.setDestination(56514U);
    msg.setDestinationEntity(140U);
    msg.peer.assign("KRQFWNGUEBSASMSUNWVZMHIJDHUEJBAIDHUOWFMMOWSFRX");
    msg.rssi = 0.968618667415931;
    msg.integrity = 16025U;

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
    msg.setTimeStamp(0.6343804405196369);
    msg.setSource(45514U);
    msg.setSourceEntity(122U);
    msg.setDestination(32884U);
    msg.setDestinationEntity(214U);
    msg.req_id = 44099U;
    msg.destination.assign("YGIREMVORESGKJCLCTECTDLFOCWUNDRAFNXNITYVPMFXWYJLFHXZCNOZQAXIXJUKRXKGVGAHDKSWJRPNHFTWJIUQCVZOQBKYGBVWSIZMQSSDBZVYMHAUEAMBEDUMCVEZLNHHCJQFGQKURIFBLRPERQPXLHNDLOUDPFIGXDJTUPHT");
    msg.timeout = 0.2740432454218289;
    msg.range = 0.05922680528092639;
    msg.type = 76U;
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12606964114421815;
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
    msg.setTimeStamp(0.3066901428086314);
    msg.setSource(54912U);
    msg.setSourceEntity(107U);
    msg.setDestination(7989U);
    msg.setDestinationEntity(213U);
    msg.req_id = 13079U;
    msg.destination.assign("EKYZSIMBFORCOXOYCKVYDYFQWUXFCQDZVVVIFWQLAPPEFBWXAQUQAHGWYOWJCPTZRGQKDDDZJBUSKLGUZFODIOJKJLBBSPXNHGPFLLEGXCLRRLUMASEVMHSEZGRTZTTRWMHJBJYUSNCGUAHRKWMUNEBBGJNCMKWARMYBUKQMWDFMXUEJIXAWBTILXCCHTHZXQIXDGEDIZTENILDGOSCAVPMTYTOLJKFTPOEIHFIPHSYVHNPRPS");
    msg.timeout = 0.26170875264290516;
    msg.range = 0.8317568833179818;
    msg.type = 205U;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 153U;
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
    msg.setTimeStamp(0.40581549604896117);
    msg.setSource(49125U);
    msg.setSourceEntity(178U);
    msg.setDestination(23278U);
    msg.setDestinationEntity(63U);
    msg.req_id = 51010U;
    msg.destination.assign("GKMSDLUMJIKWQCGDTFKGWYDVTRVMZZUKEDJAIETHSOLJNMKDEGECPXRXNXYZMHFYHVSSWPVVIALUKJBDXZKSBIWNMGQAZQOHRNILAPGXU");
    msg.timeout = 0.28810757754341154;
    msg.range = 0.9532077961397535;
    msg.type = 83U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 79U;
    tmp_msg_0.op = 106U;
    tmp_msg_0.err_mean = 0.6587169967151711;
    tmp_msg_0.dist_min_abs = 0.35421000154025806;
    tmp_msg_0.dist_min_mean = 0.3457252662234849;
    tmp_msg_0.roll_rate_mean = 0.20725597982222987;
    tmp_msg_0.time = 0.8498459141089442;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 171U;
    tmp_tmp_msg_0_0.lon_gain = 0.4410337752366452;
    tmp_tmp_msg_0_0.lat_gain = 0.11392800949221193;
    tmp_tmp_msg_0_0.bond_thick = 0.35718214644162183;
    tmp_tmp_msg_0_0.lead_gain = 0.7055151823952138;
    tmp_tmp_msg_0_0.deconfl_gain = 0.24560236700369342;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.7231696013304378;
    tmp_tmp_msg_0_0.safe_dist = 0.18079733472300885;
    tmp_tmp_msg_0_0.deconflict_offset = 0.1319932170210768;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.8708144238887628;
    tmp_tmp_msg_0_0.accel_lim_x = 0.2955750818405408;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.21042691436776406);
    msg.setSource(37797U);
    msg.setSourceEntity(27U);
    msg.setDestination(42445U);
    msg.setDestinationEntity(174U);
    msg.req_id = 4069U;
    msg.type = 138U;
    msg.status = 133U;
    msg.info.assign("NJUSXWCWMXRWMUJREQVLWZCEFOHDUYGRTFLFTSWEFRLEBJNGJBOGIDVPYCVGOHIXKBCZXDQVJDMALGVIMMFIUZQTHALONQSNXHLBWZXDHALZVXGIEGOWDCMTETYJDNYNRPEYKYYJDOUTRKKCQZFZSIQBNABLUATPNKAKBUSAEFHPQGPNHHRLFFQKORCDWMNWLOVMKJJUJSWTZITVXYPUBAKTSPAVASVFPKDCSEBYISPOR");
    msg.range = 0.8950182352381002;

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
    msg.setTimeStamp(0.13917611767521443);
    msg.setSource(28409U);
    msg.setSourceEntity(63U);
    msg.setDestination(43476U);
    msg.setDestinationEntity(99U);
    msg.req_id = 23990U;
    msg.type = 48U;
    msg.status = 24U;
    msg.info.assign("YZWNODHUTXKQKOUAVDOVXGISLLKHCYEYQHSPNQJWMUPBEGM");
    msg.range = 0.9654893032885816;

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
    msg.setTimeStamp(0.36416752746851666);
    msg.setSource(2837U);
    msg.setSourceEntity(170U);
    msg.setDestination(36404U);
    msg.setDestinationEntity(252U);
    msg.req_id = 62193U;
    msg.type = 93U;
    msg.status = 190U;
    msg.info.assign("VNKNTMIONYVFQEVYNYXKUGTRLBQWOJIQBJD");
    msg.range = 0.6252940703220493;

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
    msg.setTimeStamp(0.31236028865950083);
    msg.setSource(2785U);
    msg.setSourceEntity(18U);
    msg.setDestination(47736U);
    msg.setDestinationEntity(88U);
    msg.system.assign("UJZBDSECYRDXKXKBFLQSUANIICYNECMLLLERDMDWJLUIFPWZOUWVQPGYQCTQXQROVZCZIHDHBLZ");
    msg.op = 145U;

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
    msg.setTimeStamp(0.37686656398237695);
    msg.setSource(47395U);
    msg.setSourceEntity(135U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(168U);
    msg.system.assign("NIPWSDVAALCOFAREKNQXKBGSEXBDWMHYHHQIHFKRMQQDDZTGGKJSNARBZMDHIUNOUDVVOVUTJREDORWAZLGHMEKLATLTQHFIJXXWUFFZSXPMDILKXEHJJFVPVCMSSGTQZABLCPQPCGWMWKVGUXJUHWJOQCACNUMQGTWPSCINEOYIYYZOPLYSLWMEFXCRIHTQBRYUKFBPBILNCRWVDNYGCB");
    msg.op = 213U;

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
    msg.setTimeStamp(0.10434653266884197);
    msg.setSource(63500U);
    msg.setSourceEntity(82U);
    msg.setDestination(38956U);
    msg.setDestinationEntity(246U);
    msg.system.assign("DKETWKFHVVFLEORKBJMWOJMNWUDIYLCTGUNNHMYOCBZNJUWBBOAJGXXFTFSTXDAXSVDEWPQQFKAKAEHPHIQQXVIONCJIGMOFZORBTQKAYBP");
    msg.op = 210U;

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
    msg.setTimeStamp(0.13064740763228821);
    msg.setSource(50639U);
    msg.setSourceEntity(12U);
    msg.setDestination(12102U);
    msg.setDestinationEntity(183U);
    msg.value = 8493;

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
    msg.setTimeStamp(0.7155758790927758);
    msg.setSource(58169U);
    msg.setSourceEntity(93U);
    msg.setDestination(58824U);
    msg.setDestinationEntity(78U);
    msg.value = -25882;

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
    msg.setTimeStamp(0.4543350100660555);
    msg.setSource(41356U);
    msg.setSourceEntity(218U);
    msg.setDestination(51781U);
    msg.setDestinationEntity(98U);
    msg.value = 21661;

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
    msg.setTimeStamp(0.9543028579570444);
    msg.setSource(52161U);
    msg.setSourceEntity(178U);
    msg.setDestination(3457U);
    msg.setDestinationEntity(16U);
    msg.value = 0.3369374201648234;

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
    msg.setTimeStamp(0.376528290244738);
    msg.setSource(21374U);
    msg.setSourceEntity(164U);
    msg.setDestination(52584U);
    msg.setDestinationEntity(220U);
    msg.value = 0.3794836700675249;

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
    msg.setTimeStamp(0.8151840927463443);
    msg.setSource(28797U);
    msg.setSourceEntity(83U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(64U);
    msg.value = 0.4625302860291888;

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
    msg.setTimeStamp(0.7280107635657568);
    msg.setSource(50894U);
    msg.setSourceEntity(38U);
    msg.setDestination(42964U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8174622761838941;

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
    msg.setTimeStamp(0.22918574391033852);
    msg.setSource(36533U);
    msg.setSourceEntity(187U);
    msg.setDestination(48635U);
    msg.setDestinationEntity(186U);
    msg.value = 0.45408629965954106;

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
    msg.setTimeStamp(0.12220311818107443);
    msg.setSource(51180U);
    msg.setSourceEntity(104U);
    msg.setDestination(16262U);
    msg.setDestinationEntity(225U);
    msg.value = 0.8422566323008046;

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
    msg.setTimeStamp(0.6057478080988282);
    msg.setSource(7831U);
    msg.setSourceEntity(249U);
    msg.setDestination(37946U);
    msg.setDestinationEntity(21U);
    msg.validity = 33709U;
    msg.type = 233U;
    msg.utc_year = 8337U;
    msg.utc_month = 235U;
    msg.utc_day = 218U;
    msg.utc_time = 0.6688703999551631;
    msg.lat = 0.006444218401096102;
    msg.lon = 0.4632547350683317;
    msg.height = 0.28219837533221337;
    msg.satellites = 41U;
    msg.cog = 0.12916467149925503;
    msg.sog = 0.7306114062922777;
    msg.hdop = 0.5207507683382194;
    msg.vdop = 0.9949804873709832;
    msg.hacc = 0.8636492795001572;
    msg.vacc = 0.013572504403328911;

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
    msg.setTimeStamp(0.8256347845948551);
    msg.setSource(7870U);
    msg.setSourceEntity(53U);
    msg.setDestination(46354U);
    msg.setDestinationEntity(132U);
    msg.validity = 58725U;
    msg.type = 123U;
    msg.utc_year = 2349U;
    msg.utc_month = 210U;
    msg.utc_day = 230U;
    msg.utc_time = 0.8919155573495233;
    msg.lat = 0.40128069493954266;
    msg.lon = 0.7908556613347345;
    msg.height = 0.8787685295547409;
    msg.satellites = 11U;
    msg.cog = 0.5969962787923424;
    msg.sog = 0.7680058663495937;
    msg.hdop = 0.08528094497688943;
    msg.vdop = 0.6523833524182878;
    msg.hacc = 0.09001024749449249;
    msg.vacc = 0.8404861904924648;

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
    msg.setTimeStamp(0.15569001091163626);
    msg.setSource(49288U);
    msg.setSourceEntity(247U);
    msg.setDestination(19872U);
    msg.setDestinationEntity(175U);
    msg.validity = 54607U;
    msg.type = 213U;
    msg.utc_year = 14056U;
    msg.utc_month = 13U;
    msg.utc_day = 215U;
    msg.utc_time = 0.03592378143823938;
    msg.lat = 0.5882068184780296;
    msg.lon = 0.9105101438305225;
    msg.height = 0.015743966520632813;
    msg.satellites = 45U;
    msg.cog = 0.08864385570585165;
    msg.sog = 0.4063303423225336;
    msg.hdop = 0.8401685880695915;
    msg.vdop = 0.09852437151917315;
    msg.hacc = 0.7576708271928878;
    msg.vacc = 0.06753831274547306;

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
    msg.setTimeStamp(0.35988421770498724);
    msg.setSource(56959U);
    msg.setSourceEntity(63U);
    msg.setDestination(51336U);
    msg.setDestinationEntity(87U);
    msg.time = 0.7527147531439426;
    msg.phi = 0.2751898150103457;
    msg.theta = 0.6705033175590623;
    msg.psi = 0.7779277067797786;
    msg.psi_magnetic = 0.7030584800239689;

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
    msg.setTimeStamp(0.4186224254413987);
    msg.setSource(38691U);
    msg.setSourceEntity(64U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(193U);
    msg.time = 0.8650829942569807;
    msg.phi = 0.5215224570565539;
    msg.theta = 0.25338483727354955;
    msg.psi = 0.2132135200012295;
    msg.psi_magnetic = 0.988566624402031;

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
    msg.setTimeStamp(0.32114810768741175);
    msg.setSource(19680U);
    msg.setSourceEntity(82U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(129U);
    msg.time = 0.18092266727784334;
    msg.phi = 0.14926513979294553;
    msg.theta = 0.6353237636768552;
    msg.psi = 0.5273916121007656;
    msg.psi_magnetic = 0.4265528101904691;

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
    msg.setTimeStamp(0.21520592155418594);
    msg.setSource(48601U);
    msg.setSourceEntity(182U);
    msg.setDestination(27262U);
    msg.setDestinationEntity(95U);
    msg.time = 0.16719338596924782;
    msg.x = 0.09199816770016367;
    msg.y = 0.9891105076933682;
    msg.z = 0.38530393671516183;
    msg.timestep = 0.2415053752342381;

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
    msg.setTimeStamp(0.644173976252046);
    msg.setSource(2036U);
    msg.setSourceEntity(158U);
    msg.setDestination(19242U);
    msg.setDestinationEntity(246U);
    msg.time = 0.9884033781354429;
    msg.x = 0.3127922943082089;
    msg.y = 0.6097349156436868;
    msg.z = 0.20372195704324292;
    msg.timestep = 0.24214780374842992;

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
    msg.setTimeStamp(0.5287252333954083);
    msg.setSource(56929U);
    msg.setSourceEntity(155U);
    msg.setDestination(40105U);
    msg.setDestinationEntity(72U);
    msg.time = 0.7678330157899078;
    msg.x = 0.6160033410715269;
    msg.y = 0.885196179634852;
    msg.z = 0.5303560877794012;
    msg.timestep = 0.4670659876692227;

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
    msg.setTimeStamp(0.7451341085555729);
    msg.setSource(45499U);
    msg.setSourceEntity(107U);
    msg.setDestination(39478U);
    msg.setDestinationEntity(189U);
    msg.time = 0.9258551960964476;
    msg.x = 0.02422621123503732;
    msg.y = 0.09003225243902724;
    msg.z = 0.5283550306147314;

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
    msg.setTimeStamp(0.5240981118748556);
    msg.setSource(17069U);
    msg.setSourceEntity(174U);
    msg.setDestination(52726U);
    msg.setDestinationEntity(116U);
    msg.time = 0.26856927090757776;
    msg.x = 0.6612711500344255;
    msg.y = 0.6843347481617852;
    msg.z = 0.5215680752699194;

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
    msg.setTimeStamp(0.9815629337436449);
    msg.setSource(64588U);
    msg.setSourceEntity(96U);
    msg.setDestination(36773U);
    msg.setDestinationEntity(4U);
    msg.time = 0.8047098192193913;
    msg.x = 0.8215049707135106;
    msg.y = 0.1880042203630401;
    msg.z = 0.6238842370885385;

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
    msg.setTimeStamp(0.7733078021231597);
    msg.setSource(65296U);
    msg.setSourceEntity(223U);
    msg.setDestination(58654U);
    msg.setDestinationEntity(52U);
    msg.time = 0.6855824606114299;
    msg.x = 0.15262466168346145;
    msg.y = 0.5634262048829066;
    msg.z = 0.3554171209161163;

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
    msg.setTimeStamp(0.5450531128719086);
    msg.setSource(915U);
    msg.setSourceEntity(234U);
    msg.setDestination(14049U);
    msg.setDestinationEntity(23U);
    msg.time = 0.554671106792216;
    msg.x = 0.5856325475451415;
    msg.y = 0.49552111071303107;
    msg.z = 0.5807707869754645;

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
    msg.setTimeStamp(0.4583054165135767);
    msg.setSource(33704U);
    msg.setSourceEntity(50U);
    msg.setDestination(23567U);
    msg.setDestinationEntity(180U);
    msg.time = 0.17355703300805836;
    msg.x = 0.7336667064850184;
    msg.y = 0.4434074251188641;
    msg.z = 0.5478459905355981;

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
    msg.setTimeStamp(0.3960188378210463);
    msg.setSource(55187U);
    msg.setSourceEntity(201U);
    msg.setDestination(9509U);
    msg.setDestinationEntity(130U);
    msg.time = 0.35961317120101255;
    msg.x = 0.5914660584688434;
    msg.y = 0.9823602257042996;
    msg.z = 0.06514205921912086;

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
    msg.setTimeStamp(0.22802820885617003);
    msg.setSource(26392U);
    msg.setSourceEntity(10U);
    msg.setDestination(17737U);
    msg.setDestinationEntity(158U);
    msg.time = 0.9750957404980817;
    msg.x = 0.4475205226129182;
    msg.y = 0.6738089314799117;
    msg.z = 0.5273946783842608;

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
    msg.setTimeStamp(0.042845049575547356);
    msg.setSource(1438U);
    msg.setSourceEntity(220U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(186U);
    msg.time = 0.30136797134316684;
    msg.x = 0.5436642011035738;
    msg.y = 0.22986010645866162;
    msg.z = 0.21249742220751866;

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
    msg.setTimeStamp(0.9138257135352729);
    msg.setSource(33574U);
    msg.setSourceEntity(80U);
    msg.setDestination(39622U);
    msg.setDestinationEntity(14U);
    msg.validity = 207U;
    msg.x = 0.2179504598796126;
    msg.y = 0.7405709659788149;
    msg.z = 0.32756737339075526;

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
    msg.setTimeStamp(0.5326075308346);
    msg.setSource(29432U);
    msg.setSourceEntity(5U);
    msg.setDestination(20999U);
    msg.setDestinationEntity(117U);
    msg.validity = 27U;
    msg.x = 0.6197790825453492;
    msg.y = 0.9310090767584168;
    msg.z = 0.043390739445129056;

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
    msg.setTimeStamp(0.972082177797803);
    msg.setSource(8915U);
    msg.setSourceEntity(252U);
    msg.setDestination(32979U);
    msg.setDestinationEntity(53U);
    msg.validity = 172U;
    msg.x = 0.47401006557864633;
    msg.y = 0.3765636704455184;
    msg.z = 0.15185652254132742;

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
    msg.setTimeStamp(0.9865706371531991);
    msg.setSource(28907U);
    msg.setSourceEntity(227U);
    msg.setDestination(56019U);
    msg.setDestinationEntity(181U);
    msg.validity = 87U;
    msg.x = 0.7018118381604633;
    msg.y = 0.8073298072703994;
    msg.z = 0.884267360606468;

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
    msg.setTimeStamp(0.8874059785332177);
    msg.setSource(28674U);
    msg.setSourceEntity(25U);
    msg.setDestination(27967U);
    msg.setDestinationEntity(19U);
    msg.validity = 31U;
    msg.x = 0.5393655547379826;
    msg.y = 0.9632687865189737;
    msg.z = 0.7749214122451102;

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
    msg.setTimeStamp(0.4516398416167634);
    msg.setSource(29994U);
    msg.setSourceEntity(182U);
    msg.setDestination(17338U);
    msg.setDestinationEntity(202U);
    msg.validity = 75U;
    msg.x = 0.45279713694796553;
    msg.y = 0.02227846751996787;
    msg.z = 0.26927246649133796;

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
    msg.setTimeStamp(0.24292544682950035);
    msg.setSource(25555U);
    msg.setSourceEntity(168U);
    msg.setDestination(59722U);
    msg.setDestinationEntity(246U);
    msg.time = 0.2910140356757508;
    msg.x = 0.156881888450509;
    msg.y = 0.8343480488771955;
    msg.z = 0.5140530398170989;

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
    msg.setTimeStamp(0.06939665697543052);
    msg.setSource(57693U);
    msg.setSourceEntity(249U);
    msg.setDestination(34470U);
    msg.setDestinationEntity(92U);
    msg.time = 0.44579126113272927;
    msg.x = 0.1714380514838838;
    msg.y = 0.8274411105148439;
    msg.z = 0.8275012333888986;

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
    msg.setTimeStamp(0.3131425054198016);
    msg.setSource(19771U);
    msg.setSourceEntity(116U);
    msg.setDestination(3779U);
    msg.setDestinationEntity(52U);
    msg.time = 0.014632450142685438;
    msg.x = 0.15049329962382052;
    msg.y = 0.6217344130465171;
    msg.z = 0.24075538946934272;

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
    msg.setTimeStamp(0.46096705592244736);
    msg.setSource(52060U);
    msg.setSourceEntity(143U);
    msg.setDestination(35537U);
    msg.setDestinationEntity(192U);
    msg.validity = 13U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9219842847238013;
    tmp_msg_0.y = 0.04434466710224616;
    tmp_msg_0.z = 0.6203826694412179;
    tmp_msg_0.phi = 0.8024634625982675;
    tmp_msg_0.theta = 0.5775930529183884;
    tmp_msg_0.psi = 0.6558050194423108;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.13099718832922258;

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
    msg.setTimeStamp(0.5775466446752326);
    msg.setSource(60374U);
    msg.setSourceEntity(144U);
    msg.setDestination(6149U);
    msg.setDestinationEntity(34U);
    msg.validity = 4U;
    msg.value = 0.5091990429900252;

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
    msg.setTimeStamp(0.41692230889584414);
    msg.setSource(8150U);
    msg.setSourceEntity(238U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(90U);
    msg.validity = 75U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7137567311633001;
    tmp_msg_0.beam_height = 0.6326779053559469;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.018781444242951473;

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
    msg.setTimeStamp(0.8490273502232873);
    msg.setSource(30613U);
    msg.setSourceEntity(61U);
    msg.setDestination(7729U);
    msg.setDestinationEntity(131U);
    msg.value = 0.4066738939659096;

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
    msg.setTimeStamp(0.852956970956637);
    msg.setSource(7962U);
    msg.setSourceEntity(233U);
    msg.setDestination(38786U);
    msg.setDestinationEntity(132U);
    msg.value = 0.4333765757531918;

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
    msg.setTimeStamp(0.3702612946312315);
    msg.setSource(49361U);
    msg.setSourceEntity(121U);
    msg.setDestination(47420U);
    msg.setDestinationEntity(162U);
    msg.value = 0.3768836931538424;

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
    msg.setTimeStamp(0.6162716462891404);
    msg.setSource(64415U);
    msg.setSourceEntity(54U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(211U);
    msg.value = 0.1663124589168654;

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
    msg.setTimeStamp(0.8055550087675947);
    msg.setSource(18473U);
    msg.setSourceEntity(57U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8246851438255948;

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
    msg.setTimeStamp(0.1831164141184991);
    msg.setSource(11027U);
    msg.setSourceEntity(148U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(49U);
    msg.value = 0.6833067085195575;

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
    msg.setTimeStamp(0.9811413516565526);
    msg.setSource(24754U);
    msg.setSourceEntity(92U);
    msg.setDestination(20865U);
    msg.setDestinationEntity(168U);
    msg.value = 0.6988949076322833;

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
    msg.setTimeStamp(0.8602846740062773);
    msg.setSource(1408U);
    msg.setSourceEntity(114U);
    msg.setDestination(28634U);
    msg.setDestinationEntity(102U);
    msg.value = 0.036453691003516364;

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
    msg.setTimeStamp(0.02201003776637067);
    msg.setSource(4179U);
    msg.setSourceEntity(247U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(195U);
    msg.value = 0.368526533169403;

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
    msg.setTimeStamp(0.549128796670532);
    msg.setSource(10770U);
    msg.setSourceEntity(210U);
    msg.setDestination(999U);
    msg.setDestinationEntity(115U);
    msg.value = 0.45369080287709584;

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
    msg.setTimeStamp(0.5671528303784519);
    msg.setSource(57016U);
    msg.setSourceEntity(113U);
    msg.setDestination(5505U);
    msg.setDestinationEntity(246U);
    msg.value = 0.2605264902372265;

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
    msg.setTimeStamp(0.5344480451193773);
    msg.setSource(16854U);
    msg.setSourceEntity(206U);
    msg.setDestination(44662U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8136520862363131;

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
    msg.setTimeStamp(0.5026500290054228);
    msg.setSource(11756U);
    msg.setSourceEntity(62U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(145U);
    msg.value = 0.9660563375161844;

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
    msg.setTimeStamp(0.006849936425743608);
    msg.setSource(45301U);
    msg.setSourceEntity(136U);
    msg.setDestination(58360U);
    msg.setDestinationEntity(91U);
    msg.value = 0.5174230299724768;

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
    msg.setTimeStamp(0.9929603485710161);
    msg.setSource(13968U);
    msg.setSourceEntity(107U);
    msg.setDestination(37941U);
    msg.setDestinationEntity(24U);
    msg.value = 0.040072996239650105;

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
    msg.setTimeStamp(0.6078026789499897);
    msg.setSource(37592U);
    msg.setSourceEntity(6U);
    msg.setDestination(38805U);
    msg.setDestinationEntity(57U);
    msg.value = 0.5117608102080361;

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
    msg.setTimeStamp(0.4646134839057007);
    msg.setSource(11591U);
    msg.setSourceEntity(190U);
    msg.setDestination(12701U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6790342776943249;

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
    msg.setTimeStamp(0.8852713482700482);
    msg.setSource(1685U);
    msg.setSourceEntity(167U);
    msg.setDestination(64231U);
    msg.setDestinationEntity(14U);
    msg.value = 0.3598641149789653;

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
    msg.setTimeStamp(0.46646232947851973);
    msg.setSource(48039U);
    msg.setSourceEntity(78U);
    msg.setDestination(34179U);
    msg.setDestinationEntity(109U);
    msg.value = 0.6019672949888809;

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
    msg.setTimeStamp(0.9913725301980971);
    msg.setSource(15242U);
    msg.setSourceEntity(93U);
    msg.setDestination(51349U);
    msg.setDestinationEntity(227U);
    msg.value = 0.7806539729834865;

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
    msg.setTimeStamp(0.5837911499362639);
    msg.setSource(34922U);
    msg.setSourceEntity(134U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8133212940934663;

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
    msg.setTimeStamp(0.3645283062994936);
    msg.setSource(6084U);
    msg.setSourceEntity(230U);
    msg.setDestination(41779U);
    msg.setDestinationEntity(252U);
    msg.value = 0.4055189145278162;

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
    msg.setTimeStamp(0.1507591426122501);
    msg.setSource(7105U);
    msg.setSourceEntity(230U);
    msg.setDestination(64741U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7013792874758825;

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
    msg.setTimeStamp(0.9303632796732062);
    msg.setSource(7148U);
    msg.setSourceEntity(228U);
    msg.setDestination(38619U);
    msg.setDestinationEntity(43U);
    msg.value = 0.7892806130673096;

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
    msg.setTimeStamp(0.6873791018169428);
    msg.setSource(57708U);
    msg.setSourceEntity(223U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(35U);
    msg.direction = 0.1401966078345761;
    msg.speed = 0.9237693453767583;
    msg.turbulence = 0.5688609749780289;

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
    msg.setTimeStamp(0.3629330768912429);
    msg.setSource(31403U);
    msg.setSourceEntity(43U);
    msg.setDestination(60381U);
    msg.setDestinationEntity(11U);
    msg.direction = 0.9936098450093199;
    msg.speed = 0.36391656232696334;
    msg.turbulence = 0.691055200592451;

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
    msg.setTimeStamp(0.7384494765017523);
    msg.setSource(8653U);
    msg.setSourceEntity(247U);
    msg.setDestination(23726U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.6715845245247448;
    msg.speed = 0.06629322421457962;
    msg.turbulence = 0.9416691113747705;

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
    msg.setTimeStamp(0.3747634007751688);
    msg.setSource(43342U);
    msg.setSourceEntity(50U);
    msg.setDestination(49082U);
    msg.setDestinationEntity(74U);
    msg.value = 0.24643289758585607;

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
    msg.setTimeStamp(0.7733633835680543);
    msg.setSource(20198U);
    msg.setSourceEntity(153U);
    msg.setDestination(63251U);
    msg.setDestinationEntity(135U);
    msg.value = 0.6329400146928567;

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
    msg.setTimeStamp(0.9189245428325017);
    msg.setSource(17805U);
    msg.setSourceEntity(56U);
    msg.setDestination(25556U);
    msg.setDestinationEntity(163U);
    msg.value = 0.1272894665088642;

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
    msg.setTimeStamp(0.293640556614037);
    msg.setSource(32884U);
    msg.setSourceEntity(230U);
    msg.setDestination(37963U);
    msg.setDestinationEntity(183U);
    msg.value.assign("IJBHJEGHEPNFIEGGFBIYETZMFVKNJHSVASORFHILXMRDIEPYHCCDUTSWAIKRZNUXURPWICTEDCXJWSXNXAKGCKLRYLLEAJVGXOWEMJZDKSPLEHGXBA");

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
    msg.setTimeStamp(0.149181398531681);
    msg.setSource(40124U);
    msg.setSourceEntity(229U);
    msg.setDestination(29192U);
    msg.setDestinationEntity(127U);
    msg.value.assign("IEGLBIWIHDNMAVIHKNDBYGRFXKOWJKEMOWZOQSMQMJKMFSVYJLKRWAXJZZXXVIGCUUZOSLEALFATFPVKEXMDMRXHAJJQHAMIOVSSYWTUHBX");

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
    msg.setTimeStamp(0.5201920567581731);
    msg.setSource(55203U);
    msg.setSourceEntity(71U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(132U);
    msg.value.assign("KFCPKCNXGDYYYXSCYIZTTWWVCFEEFXYONPCZGRQDBHTHNLSETTREZENCAFFTSDKAYDXUNMGVIRQVTFWWYSSVMJIWDHZOHKENGKLPJJOIUYH");

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
    msg.setTimeStamp(0.7974218180074987);
    msg.setSource(16656U);
    msg.setSourceEntity(132U);
    msg.setDestination(41060U);
    msg.setDestinationEntity(60U);
    const signed char tmp_msg_0[] = {-93, 99, -51, -117, 85, -32, -122, -32, 28, 58, 1, 64, -20, -115, 9, -66, -116, 105, 70, -77, 119, 54, -122, -86, -107, 17, -107, 32, 64, -109, -58, -72, -126, 58, -42, -61, 16, 2, -26, -97, 107, -126, 88, -41, 94, -60, 66, 26, -88, 56, -76, -49, 118, -44, -61, 73, -72, -30, 117, -16, 118, 99, -90, -108, 123, 93, -14, 49, -47};
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
    msg.setTimeStamp(0.6284655688896873);
    msg.setSource(16085U);
    msg.setSourceEntity(247U);
    msg.setDestination(38071U);
    msg.setDestinationEntity(24U);
    const signed char tmp_msg_0[] = {-48, -61, -115, -120, 16, -110, 2, -36, 84, -7, -32, -65, 98, 120, 4, 123, 123, 7, 105, -13, -20, 52, 16, -78, 20, -111, 107, -4, 88, -123, 103, -126, -69, -128, 11, -22};
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
    msg.setTimeStamp(0.3099276088925923);
    msg.setSource(3432U);
    msg.setSourceEntity(24U);
    msg.setDestination(9553U);
    msg.setDestinationEntity(192U);
    const signed char tmp_msg_0[] = {-108, 46, -101, 61, -22, -118, -35, -112, 23, 55, -11, -62, -103, 61, -98, 62, -82, -50, -62, 58, 112, 96, 23, 4, -55, -26};
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
    msg.setTimeStamp(0.45224381913266387);
    msg.setSource(55186U);
    msg.setSourceEntity(9U);
    msg.setDestination(45329U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5947958833868401;

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
    msg.setTimeStamp(0.19547851246652836);
    msg.setSource(21151U);
    msg.setSourceEntity(207U);
    msg.setDestination(29037U);
    msg.setDestinationEntity(161U);
    msg.value = 0.939691423036206;

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
    msg.setTimeStamp(0.7532551831415014);
    msg.setSource(50182U);
    msg.setSourceEntity(149U);
    msg.setDestination(23092U);
    msg.setDestinationEntity(230U);
    msg.value = 0.36513904160808475;

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
    msg.setTimeStamp(0.6426449986110977);
    msg.setSource(44167U);
    msg.setSourceEntity(189U);
    msg.setDestination(19140U);
    msg.setDestinationEntity(201U);
    msg.type = 241U;
    msg.frequency = 819368994U;
    msg.min_range = 61154U;
    msg.max_range = 54164U;
    msg.bits_per_point = 178U;
    msg.scale_factor = 0.8616429143508362;
    const signed char tmp_msg_0[] = {20, 77, -91, -17, 97, 39, 108, 20, 48, 107, -67, -24, -57, -50, -117, 124, -103, 31, 104, 67, 90, 20, -17, -17, 32, 10, -100, -80, -90, 124, -30, -113, -86, 101, -22, 45, -28, 56, 12, 30, 104, -113, 105, 111, -71, 13, -106, -32, 58, 120, 86, -105, -32, -7, 123, 95, 3, 75, -116, -124, 31, -57, -75, 7, -90, 37, -26, -39, -62, -10, -70, -101, -77, -120, -62, -86, 96, 14, 66, 125, 56, 12, -125, 89, 52, -91, -125, -63, 13, 60, -113, -54, 37, -21, -41, -99, -72, -72, 109, -110, -12, 57, -61, 51, 122, -114, 31, -28, -53, -23, -95, 45, -20, -54, 48, -17, 72, 18, -122, 118, -92, -53, -6, 119, -48, 21, -83, -88, -66, 54, -98, 44, 103, -99, -102, 91, -99, 61, 62, -3, 89, 18, 79, 124, -112, -55, 29, 69, -75};
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
    msg.setTimeStamp(0.5977084507372655);
    msg.setSource(59256U);
    msg.setSourceEntity(2U);
    msg.setDestination(21439U);
    msg.setDestinationEntity(93U);
    msg.type = 65U;
    msg.frequency = 2709237871U;
    msg.min_range = 926U;
    msg.max_range = 38313U;
    msg.bits_per_point = 240U;
    msg.scale_factor = 0.6759477000231563;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3562339007929206;
    tmp_msg_0.beam_height = 0.6645558947694526;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {56, 81, -97, 62, -84, 54, 57, -14, -69, 5, 21, -41, 108, 50, 116, 57, 31, -2, 89, -102, -43, 84, -86, 126, 92, 25, -47, -94, -87, 56, 4, -14, 118, 106, 40, -99, 98, 117, 18, 0, 3, -109, 94, 73, 34, 95, 68, 61, -47, -58, 18, -49, 94, 83, 104, -116, 1, 5, 64, -119, -109, -29, 124, -62, 76, 13, -104, -102, -108, 10, -28, 123, -117, 36, 27, 110, 85, -2, -106, 83, 56, 112, 99, 59, -79, 89, -22, 122, -73, -62, -120, 103, 31, 3, -40, 18, -38, -84, 64, 11, -75, 32, -34, -102, -94, 32, -91, -50, 83, -26, -91, 104, -58, -44, -118, -121, -117, -120, -22, 63, 64, 109, -107, -93, 20, 13, -116, -5, 41, 51, -108, -103, -119, -65, -61, -64, 63, -123, 95, 56, -86, 75, -33, -47, 112, 126, 38, 76, 5, -72, -106, 80, -57, 63, 107, 44, 30, 101, 77, 75, 58, 18, 76, -1, 64, -98, -69, -37, 29, 116, 87, -53, -104, 20, -60, 25, 51, -38, 50, 49, -111, -18, -55, -35, 46, 121, 35, 113, 56, 61, -23, 53, -17, -14, 85, -73, 23, 38, -23, 75, 93, -59, 99, 0, 91, 4, 115, 1, 29, -88, 57, -96, 48, 75, -114, -125, 2, -50, 39, 29, -38, -83, 55, 90, -126, 14};
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
    msg.setTimeStamp(0.06454526169100028);
    msg.setSource(14899U);
    msg.setSourceEntity(159U);
    msg.setDestination(51053U);
    msg.setDestinationEntity(112U);
    msg.type = 177U;
    msg.frequency = 2124150350U;
    msg.min_range = 63641U;
    msg.max_range = 41680U;
    msg.bits_per_point = 195U;
    msg.scale_factor = 0.8903325132677141;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15386907147904794;
    tmp_msg_0.beam_height = 0.06564854063050674;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-104, 32, 80, 56, -125, 43, -114, -49, 68, 12, 11, -51, -107, -101, -125, 1, -29, -42, -70, 55, 123, -99, 126, -60, 93, 79, 13, 4, -69, 109, 56, 110, -35, 77, 6, 123, -103, 102, -14, -110, 21, 38, 27, -95, -76, 17, 17, -6, 3, -24, -45, -24, 74, -86, 13, -80, 88, 23, -103, -78, -62, 94, -111, 45, -80, 4, -9, 64, 33, -14, 111, 99, -99, -67, -72, 24, -110, 96, -124, 107, 52, -40, -37, -5, 109, 64, 106, 36, 96, 11, -53, 84, 78, -54, 1, 50, -72, 43, -19, -126, 55, 108, -30};
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
    msg.setTimeStamp(0.2912135566527081);
    msg.setSource(51838U);
    msg.setSourceEntity(30U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.6869594406445988);
    msg.setSource(37919U);
    msg.setSourceEntity(202U);
    msg.setDestination(16829U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.318498546518709);
    msg.setSource(6426U);
    msg.setSourceEntity(91U);
    msg.setDestination(37804U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.3798647973411433);
    msg.setSource(40160U);
    msg.setSourceEntity(10U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(208U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.38832712923869006);
    msg.setSource(15820U);
    msg.setSourceEntity(129U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(122U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.8470933679000787);
    msg.setSource(50726U);
    msg.setSourceEntity(92U);
    msg.setDestination(3856U);
    msg.setDestinationEntity(122U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.11788807749666363);
    msg.setSource(36605U);
    msg.setSourceEntity(225U);
    msg.setDestination(16487U);
    msg.setDestinationEntity(78U);
    msg.value = 0.8223140149409586;
    msg.confidence = 0.2015585087467332;
    msg.opmodes.assign("OHEILAIRFVYBCADYTGPEKWTPWTHQMYDTUXZDZLBQLXBMGLTZKSISFVLWLMTPKANCLBURFHSQPM");

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
    msg.setTimeStamp(0.871046558738241);
    msg.setSource(11109U);
    msg.setSourceEntity(135U);
    msg.setDestination(29857U);
    msg.setDestinationEntity(190U);
    msg.value = 0.30737941747861386;
    msg.confidence = 0.5060798441718074;
    msg.opmodes.assign("XQLZPOPOOBZYYUMPBDDMFYCYEAVPIZHDNWPCVWBSILNUEUEIIBCWSCBRMWQEJRZHKVLFMG");

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
    msg.setTimeStamp(0.9721441418401953);
    msg.setSource(19213U);
    msg.setSourceEntity(105U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(136U);
    msg.value = 0.5897278189862889;
    msg.confidence = 0.7820245159714534;
    msg.opmodes.assign("NUCEYXJRGBLDLCYFHPQINEDOWERXMGINTNWMDSMGDLXPTGVGQBNXBMEZJLPAHWAXAKDVPAIOBFDZMCMROWFUELPWBEOLN");

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
    msg.setTimeStamp(0.9402854737776416);
    msg.setSource(54411U);
    msg.setSourceEntity(159U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(26U);
    msg.itow = 902611257U;
    msg.lat = 0.4951356630490966;
    msg.lon = 0.4815740313438319;
    msg.height_ell = 0.8688121758875718;
    msg.height_sea = 0.39428107730095674;
    msg.hacc = 0.7159520151510401;
    msg.vacc = 0.25432439945795227;
    msg.vel_n = 0.8691397500480145;
    msg.vel_e = 0.506839813395791;
    msg.vel_d = 0.9009156093457794;
    msg.speed = 0.5458574494050566;
    msg.gspeed = 0.6073166157250228;
    msg.heading = 0.3597815424244085;
    msg.sacc = 0.7325252873375029;
    msg.cacc = 0.2414991511679857;

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
    msg.setTimeStamp(0.4650158880151388);
    msg.setSource(12324U);
    msg.setSourceEntity(115U);
    msg.setDestination(29276U);
    msg.setDestinationEntity(149U);
    msg.itow = 2386039946U;
    msg.lat = 0.5947616658041239;
    msg.lon = 0.36063413667116007;
    msg.height_ell = 0.34054024580580255;
    msg.height_sea = 0.9341032276548975;
    msg.hacc = 0.34319360002397836;
    msg.vacc = 0.8652973567184623;
    msg.vel_n = 0.40158986367260874;
    msg.vel_e = 0.9099782356830997;
    msg.vel_d = 0.3380777418860397;
    msg.speed = 0.7679074940340295;
    msg.gspeed = 0.2698348401265822;
    msg.heading = 0.5153285064470573;
    msg.sacc = 0.24390731968099144;
    msg.cacc = 0.6653951291919562;

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
    msg.setTimeStamp(0.8012634866076764);
    msg.setSource(43153U);
    msg.setSourceEntity(3U);
    msg.setDestination(53638U);
    msg.setDestinationEntity(232U);
    msg.itow = 3679559179U;
    msg.lat = 0.25380032929109464;
    msg.lon = 0.31303258061157235;
    msg.height_ell = 0.010642830057845498;
    msg.height_sea = 0.5308480585552072;
    msg.hacc = 0.4345390338105799;
    msg.vacc = 0.31287080336854245;
    msg.vel_n = 0.10227435610762337;
    msg.vel_e = 0.28216440726514347;
    msg.vel_d = 0.7576290522198255;
    msg.speed = 0.12021098029025179;
    msg.gspeed = 0.738734215521125;
    msg.heading = 0.09014509292742501;
    msg.sacc = 0.3577040310108387;
    msg.cacc = 0.9515531954660524;

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
    msg.setTimeStamp(0.6891415017228872);
    msg.setSource(18749U);
    msg.setSourceEntity(38U);
    msg.setDestination(59905U);
    msg.setDestinationEntity(73U);
    msg.id = 206U;
    msg.value = 0.7660550622894394;

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
    msg.setTimeStamp(0.05195344061743756);
    msg.setSource(39652U);
    msg.setSourceEntity(52U);
    msg.setDestination(58192U);
    msg.setDestinationEntity(189U);
    msg.id = 78U;
    msg.value = 0.10320003876447603;

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
    msg.setTimeStamp(0.4532836052697098);
    msg.setSource(12982U);
    msg.setSourceEntity(228U);
    msg.setDestination(18134U);
    msg.setDestinationEntity(127U);
    msg.id = 122U;
    msg.value = 0.47434101106589976;

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
    msg.setTimeStamp(0.3828735487598084);
    msg.setSource(1228U);
    msg.setSourceEntity(201U);
    msg.setDestination(29279U);
    msg.setDestinationEntity(205U);
    msg.x = 0.4348900611094073;
    msg.y = 0.1327076607070754;
    msg.z = 0.1160288581234935;
    msg.phi = 0.6013811295455302;
    msg.theta = 0.17480109491935225;
    msg.psi = 0.2897827962852444;

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
    msg.setTimeStamp(0.5679400157887005);
    msg.setSource(5688U);
    msg.setSourceEntity(116U);
    msg.setDestination(31382U);
    msg.setDestinationEntity(93U);
    msg.x = 0.7305939772779945;
    msg.y = 0.37217402108070086;
    msg.z = 0.11309607757015872;
    msg.phi = 0.6413212392354616;
    msg.theta = 0.8535586043310669;
    msg.psi = 0.8381740177290067;

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
    msg.setTimeStamp(0.8563102172668475);
    msg.setSource(35564U);
    msg.setSourceEntity(214U);
    msg.setDestination(48842U);
    msg.setDestinationEntity(117U);
    msg.x = 0.4079274208784368;
    msg.y = 0.6890358669486257;
    msg.z = 0.4760778366274452;
    msg.phi = 0.2136660960076806;
    msg.theta = 0.87808123511622;
    msg.psi = 0.6512151309790558;

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
    msg.setTimeStamp(0.861568847450746);
    msg.setSource(22189U);
    msg.setSourceEntity(3U);
    msg.setDestination(26580U);
    msg.setDestinationEntity(54U);
    msg.beam_width = 0.7801598362732681;
    msg.beam_height = 0.7183203909122452;

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
    msg.setTimeStamp(0.12652921331374767);
    msg.setSource(28600U);
    msg.setSourceEntity(237U);
    msg.setDestination(13554U);
    msg.setDestinationEntity(23U);
    msg.beam_width = 0.4549554405404793;
    msg.beam_height = 0.2875396929538593;

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
    msg.setTimeStamp(0.8185207442768246);
    msg.setSource(33281U);
    msg.setSourceEntity(99U);
    msg.setDestination(16221U);
    msg.setDestinationEntity(20U);
    msg.beam_width = 0.8358784241114213;
    msg.beam_height = 0.8110286755328416;

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
    msg.setTimeStamp(0.9320610870838685);
    msg.setSource(40042U);
    msg.setSourceEntity(167U);
    msg.setDestination(29137U);
    msg.setDestinationEntity(232U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.7970310814869981);
    msg.setSource(31513U);
    msg.setSourceEntity(72U);
    msg.setDestination(3125U);
    msg.setDestinationEntity(58U);
    msg.sane = 33U;

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
    msg.setTimeStamp(0.07724908277182108);
    msg.setSource(26964U);
    msg.setSourceEntity(90U);
    msg.setDestination(59919U);
    msg.setDestinationEntity(46U);
    msg.sane = 235U;

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
    msg.setTimeStamp(0.7871993830776084);
    msg.setSource(8624U);
    msg.setSourceEntity(17U);
    msg.setDestination(38467U);
    msg.setDestinationEntity(152U);
    msg.value = 0.17629955955881849;

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
    msg.setTimeStamp(0.33583875285283693);
    msg.setSource(37468U);
    msg.setSourceEntity(135U);
    msg.setDestination(21567U);
    msg.setDestinationEntity(62U);
    msg.value = 0.1492921904173542;

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
    msg.setTimeStamp(0.05635975781697733);
    msg.setSource(10281U);
    msg.setSourceEntity(199U);
    msg.setDestination(38851U);
    msg.setDestinationEntity(207U);
    msg.value = 0.21198416075296045;

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
    msg.setTimeStamp(0.7494537145084035);
    msg.setSource(28113U);
    msg.setSourceEntity(190U);
    msg.setDestination(23753U);
    msg.setDestinationEntity(94U);
    msg.value = 0.08577165393924246;

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
    msg.setTimeStamp(0.3058560781059826);
    msg.setSource(35729U);
    msg.setSourceEntity(196U);
    msg.setDestination(18464U);
    msg.setDestinationEntity(173U);
    msg.value = 0.08818037393917122;

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
    msg.setTimeStamp(0.3996650737975843);
    msg.setSource(11378U);
    msg.setSourceEntity(158U);
    msg.setDestination(20316U);
    msg.setDestinationEntity(89U);
    msg.value = 0.37148478803166685;

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
    msg.setTimeStamp(0.11650729974418639);
    msg.setSource(39081U);
    msg.setSourceEntity(204U);
    msg.setDestination(38822U);
    msg.setDestinationEntity(7U);
    msg.value = 0.4505924932023915;

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
    msg.setTimeStamp(0.3581365877274323);
    msg.setSource(22196U);
    msg.setSourceEntity(38U);
    msg.setDestination(38404U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9042349815382642;

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
    msg.setTimeStamp(0.21282961966732095);
    msg.setSource(57636U);
    msg.setSourceEntity(57U);
    msg.setDestination(18724U);
    msg.setDestinationEntity(108U);
    msg.value = 0.17940454557190066;

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
    msg.setTimeStamp(0.7489858661832632);
    msg.setSource(14774U);
    msg.setSourceEntity(163U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(90U);
    msg.value = 0.3130062764826703;

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
    msg.setTimeStamp(0.9436884341859425);
    msg.setSource(60700U);
    msg.setSourceEntity(137U);
    msg.setDestination(38093U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8004502522393558;

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
    msg.setTimeStamp(0.6946052697195323);
    msg.setSource(61069U);
    msg.setSourceEntity(82U);
    msg.setDestination(19371U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7280566027628759;

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
    msg.setTimeStamp(0.46657543987051553);
    msg.setSource(19848U);
    msg.setSourceEntity(223U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(208U);
    msg.value = 0.7865245816065258;

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
    msg.setTimeStamp(0.31473285398249295);
    msg.setSource(2701U);
    msg.setSourceEntity(158U);
    msg.setDestination(19493U);
    msg.setDestinationEntity(12U);
    msg.value = 0.6370140858474246;

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
    msg.setTimeStamp(0.30852035127832356);
    msg.setSource(55153U);
    msg.setSourceEntity(233U);
    msg.setDestination(62153U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8165472449491837;

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
    msg.setTimeStamp(0.8030770336824082);
    msg.setSource(34182U);
    msg.setSourceEntity(19U);
    msg.setDestination(6291U);
    msg.setDestinationEntity(146U);
    msg.value = 0.7806085032227579;

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
    msg.setTimeStamp(0.5440561384808038);
    msg.setSource(43650U);
    msg.setSourceEntity(70U);
    msg.setDestination(7683U);
    msg.setDestinationEntity(33U);
    msg.value = 0.6966716594654865;

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
    msg.setTimeStamp(0.6821563973835623);
    msg.setSource(31763U);
    msg.setSourceEntity(205U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(139U);
    msg.value = 0.4793968314077762;

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
    msg.setTimeStamp(0.6501732858765287);
    msg.setSource(48817U);
    msg.setSourceEntity(85U);
    msg.setDestination(4097U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3254537153745124;

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
    msg.setTimeStamp(0.3894395758681162);
    msg.setSource(17367U);
    msg.setSourceEntity(171U);
    msg.setDestination(63449U);
    msg.setDestinationEntity(42U);
    msg.value = 0.31066749880656375;

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
    msg.setTimeStamp(0.8077867288927013);
    msg.setSource(33060U);
    msg.setSourceEntity(237U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(65U);
    msg.value = 0.6227581645592869;

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
    msg.setTimeStamp(0.8175020598069895);
    msg.setSource(19995U);
    msg.setSourceEntity(52U);
    msg.setDestination(39080U);
    msg.setDestinationEntity(197U);
    msg.value = 0.05130925493168703;

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
    msg.setTimeStamp(0.8631269147365752);
    msg.setSource(54417U);
    msg.setSourceEntity(23U);
    msg.setDestination(12367U);
    msg.setDestinationEntity(221U);
    msg.value = 0.5626256558083604;

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
    msg.setTimeStamp(0.8926521014658908);
    msg.setSource(16873U);
    msg.setSourceEntity(59U);
    msg.setDestination(17912U);
    msg.setDestinationEntity(175U);
    msg.value = 0.3765828321329254;

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
    msg.setTimeStamp(0.256608814679113);
    msg.setSource(12430U);
    msg.setSourceEntity(159U);
    msg.setDestination(29073U);
    msg.setDestinationEntity(103U);
    msg.validity = 8391U;
    msg.type = 122U;
    msg.tow = 2365386872U;
    msg.base_lat = 0.2536279885113534;
    msg.base_lon = 0.4493457340736807;
    msg.base_height = 0.5592666006393557;
    msg.n = 0.6307088689230481;
    msg.e = 0.09315950571463738;
    msg.d = 0.7357651631284372;
    msg.v_n = 0.5684657242780281;
    msg.v_e = 0.07156154357491162;
    msg.v_d = 0.5453498435195523;
    msg.satellites = 218U;
    msg.iar_hyp = 372U;
    msg.iar_ratio = 0.49523724745420994;

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
    msg.setTimeStamp(0.3145807878316136);
    msg.setSource(55709U);
    msg.setSourceEntity(242U);
    msg.setDestination(61752U);
    msg.setDestinationEntity(101U);
    msg.validity = 30928U;
    msg.type = 201U;
    msg.tow = 3511805414U;
    msg.base_lat = 0.10304817254373133;
    msg.base_lon = 0.6365138528219065;
    msg.base_height = 0.6300117752211362;
    msg.n = 0.09724928004818767;
    msg.e = 0.7428157124520042;
    msg.d = 0.8595409000989067;
    msg.v_n = 0.10235567544675328;
    msg.v_e = 0.41337501162330503;
    msg.v_d = 0.14268742502301224;
    msg.satellites = 201U;
    msg.iar_hyp = 16775U;
    msg.iar_ratio = 0.7612672614059923;

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
    msg.setTimeStamp(0.32311268360972845);
    msg.setSource(14242U);
    msg.setSourceEntity(25U);
    msg.setDestination(12969U);
    msg.setDestinationEntity(166U);
    msg.validity = 50870U;
    msg.type = 131U;
    msg.tow = 4045075757U;
    msg.base_lat = 0.8878010812750472;
    msg.base_lon = 0.7421721684719588;
    msg.base_height = 0.25597398917316105;
    msg.n = 0.5842759359506322;
    msg.e = 0.694166111793504;
    msg.d = 0.7851136102794029;
    msg.v_n = 0.3095584602209617;
    msg.v_e = 0.1183119535196413;
    msg.v_d = 0.7269329498047495;
    msg.satellites = 205U;
    msg.iar_hyp = 39901U;
    msg.iar_ratio = 0.7854983324081052;

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
    msg.setTimeStamp(0.11814231485280868);
    msg.setSource(39241U);
    msg.setSourceEntity(113U);
    msg.setDestination(36542U);
    msg.setDestinationEntity(30U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6017558076011937;
    tmp_msg_0.lon = 0.2524584276294244;
    tmp_msg_0.height = 0.7233945356897944;
    tmp_msg_0.x = 0.9643383789195087;
    tmp_msg_0.y = 0.21896878873345405;
    tmp_msg_0.z = 0.9296897948637584;
    tmp_msg_0.phi = 0.8288319976474905;
    tmp_msg_0.theta = 0.16312602131271692;
    tmp_msg_0.psi = 0.5309332241189995;
    tmp_msg_0.u = 0.7594828542573475;
    tmp_msg_0.v = 0.75489156786598;
    tmp_msg_0.w = 0.16850844533663523;
    tmp_msg_0.vx = 0.1970481050845596;
    tmp_msg_0.vy = 0.19437214077606002;
    tmp_msg_0.vz = 0.23623463046880688;
    tmp_msg_0.p = 0.7879086887475188;
    tmp_msg_0.q = 0.7659446576336039;
    tmp_msg_0.r = 0.9207348967598581;
    tmp_msg_0.depth = 0.3298812227470661;
    tmp_msg_0.alt = 0.467685922502321;
    msg.state.set(tmp_msg_0);
    msg.type = 92U;

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
    msg.setTimeStamp(0.30514931705373427);
    msg.setSource(34041U);
    msg.setSourceEntity(156U);
    msg.setDestination(13483U);
    msg.setDestinationEntity(186U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.11799853690151463;
    tmp_msg_0.lon = 0.894815803179285;
    tmp_msg_0.height = 0.5559150790971975;
    tmp_msg_0.x = 0.08050068651984832;
    tmp_msg_0.y = 0.29079083155570196;
    tmp_msg_0.z = 0.2631029775470506;
    tmp_msg_0.phi = 0.07697829696659175;
    tmp_msg_0.theta = 0.18441865166084248;
    tmp_msg_0.psi = 0.6380139450451471;
    tmp_msg_0.u = 0.6986669994669376;
    tmp_msg_0.v = 0.35102261475896124;
    tmp_msg_0.w = 0.6243547064098189;
    tmp_msg_0.vx = 0.25759009513939435;
    tmp_msg_0.vy = 0.43653957675639576;
    tmp_msg_0.vz = 0.4579681744977848;
    tmp_msg_0.p = 0.9892402654282427;
    tmp_msg_0.q = 0.16716970273825893;
    tmp_msg_0.r = 0.9685936886164116;
    tmp_msg_0.depth = 0.005234492849187755;
    tmp_msg_0.alt = 0.08375534423701947;
    msg.state.set(tmp_msg_0);
    msg.type = 30U;

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
    msg.setTimeStamp(0.3420989588935258);
    msg.setSource(6339U);
    msg.setSourceEntity(220U);
    msg.setDestination(6930U);
    msg.setDestinationEntity(36U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.891778476150384;
    tmp_msg_0.lon = 0.5634163297366538;
    tmp_msg_0.height = 0.19572474845104848;
    tmp_msg_0.x = 0.9874535583139712;
    tmp_msg_0.y = 0.8158181478001815;
    tmp_msg_0.z = 0.22964110368482127;
    tmp_msg_0.phi = 0.9439099301418099;
    tmp_msg_0.theta = 0.2907497483656645;
    tmp_msg_0.psi = 0.8441832593788609;
    tmp_msg_0.u = 0.2619313914435587;
    tmp_msg_0.v = 0.8449508460364062;
    tmp_msg_0.w = 0.7998693941979411;
    tmp_msg_0.vx = 0.134869894601926;
    tmp_msg_0.vy = 0.7114567466351241;
    tmp_msg_0.vz = 0.5847912369404771;
    tmp_msg_0.p = 0.9059978547464302;
    tmp_msg_0.q = 0.6977007584947487;
    tmp_msg_0.r = 0.3188974582684938;
    tmp_msg_0.depth = 0.6852036577149079;
    tmp_msg_0.alt = 0.1141965572454835;
    msg.state.set(tmp_msg_0);
    msg.type = 245U;

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
    msg.setTimeStamp(0.18303345517610958);
    msg.setSource(25240U);
    msg.setSourceEntity(14U);
    msg.setDestination(57223U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7395574295860949;

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
    msg.setTimeStamp(0.41295547015792);
    msg.setSource(27659U);
    msg.setSourceEntity(195U);
    msg.setDestination(46643U);
    msg.setDestinationEntity(211U);
    msg.value = 0.017461703427439246;

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
    msg.setTimeStamp(0.5171959587518231);
    msg.setSource(37508U);
    msg.setSourceEntity(227U);
    msg.setDestination(13199U);
    msg.setDestinationEntity(20U);
    msg.value = 0.32940121575765735;

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
    msg.setTimeStamp(0.8204483142619294);
    msg.setSource(37061U);
    msg.setSourceEntity(57U);
    msg.setDestination(42554U);
    msg.setDestinationEntity(94U);
    msg.value = 0.26639948044593165;

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
    msg.setTimeStamp(0.8099967593128016);
    msg.setSource(51268U);
    msg.setSourceEntity(214U);
    msg.setDestination(28632U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6283472659239938;

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
    msg.setTimeStamp(0.9127051735131253);
    msg.setSource(2390U);
    msg.setSourceEntity(141U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(217U);
    msg.value = 0.06725201509491208;

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
    msg.setTimeStamp(0.8599006481877729);
    msg.setSource(48523U);
    msg.setSourceEntity(191U);
    msg.setDestination(18914U);
    msg.setDestinationEntity(153U);
    msg.value = 0.978876479361595;

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
    msg.setTimeStamp(0.6619724444426672);
    msg.setSource(53321U);
    msg.setSourceEntity(167U);
    msg.setDestination(2369U);
    msg.setDestinationEntity(171U);
    msg.value = 0.005292450170170326;

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
    msg.setTimeStamp(0.25707467792093386);
    msg.setSource(6479U);
    msg.setSourceEntity(145U);
    msg.setDestination(15034U);
    msg.setDestinationEntity(89U);
    msg.value = 0.8398717670352762;

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
    msg.setTimeStamp(0.5793658971223544);
    msg.setSource(58516U);
    msg.setSourceEntity(29U);
    msg.setDestination(7811U);
    msg.setDestinationEntity(226U);
    msg.value = 0.2781168148857498;

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
    msg.setTimeStamp(0.12863030426443578);
    msg.setSource(20034U);
    msg.setSourceEntity(82U);
    msg.setDestination(36777U);
    msg.setDestinationEntity(187U);
    msg.value = 0.056515570767760814;

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
    msg.setTimeStamp(0.5579278799110918);
    msg.setSource(21162U);
    msg.setSourceEntity(128U);
    msg.setDestination(1280U);
    msg.setDestinationEntity(205U);
    msg.value = 0.45724516453259556;

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
    msg.setTimeStamp(0.6165337083641051);
    msg.setSource(39281U);
    msg.setSourceEntity(132U);
    msg.setDestination(39196U);
    msg.setDestinationEntity(204U);
    msg.value = 0.075137217646573;

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
    msg.setTimeStamp(0.6640554248841792);
    msg.setSource(60754U);
    msg.setSourceEntity(57U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(136U);
    msg.value = 0.29875513209211657;

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
    msg.setTimeStamp(0.1552222254192841);
    msg.setSource(17675U);
    msg.setSourceEntity(95U);
    msg.setDestination(12158U);
    msg.setDestinationEntity(137U);
    msg.value = 0.8578134669710387;

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
    msg.setTimeStamp(0.6749042980097066);
    msg.setSource(35372U);
    msg.setSourceEntity(143U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(8U);
    msg.id = 130U;
    msg.zoom = 82U;
    msg.action = 231U;

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
    msg.setTimeStamp(0.4777459501921202);
    msg.setSource(48845U);
    msg.setSourceEntity(189U);
    msg.setDestination(45480U);
    msg.setDestinationEntity(222U);
    msg.id = 172U;
    msg.zoom = 150U;
    msg.action = 194U;

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
    msg.setTimeStamp(0.48733174677976554);
    msg.setSource(3792U);
    msg.setSourceEntity(244U);
    msg.setDestination(50816U);
    msg.setDestinationEntity(28U);
    msg.id = 24U;
    msg.zoom = 122U;
    msg.action = 193U;

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
    msg.setTimeStamp(0.4231328854749713);
    msg.setSource(62605U);
    msg.setSourceEntity(208U);
    msg.setDestination(25253U);
    msg.setDestinationEntity(187U);
    msg.id = 149U;
    msg.value = 0.31877670492868126;

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
    msg.setTimeStamp(0.26514464786856695);
    msg.setSource(59137U);
    msg.setSourceEntity(51U);
    msg.setDestination(37788U);
    msg.setDestinationEntity(70U);
    msg.id = 177U;
    msg.value = 0.13651906997122387;

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
    msg.setTimeStamp(0.6035722375862633);
    msg.setSource(2426U);
    msg.setSourceEntity(36U);
    msg.setDestination(60227U);
    msg.setDestinationEntity(38U);
    msg.id = 184U;
    msg.value = 0.1427448299667453;

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
    msg.setTimeStamp(0.9762128969078432);
    msg.setSource(17459U);
    msg.setSourceEntity(152U);
    msg.setDestination(34088U);
    msg.setDestinationEntity(10U);
    msg.id = 113U;
    msg.value = 0.3279391625921162;

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
    msg.setTimeStamp(0.997954888417005);
    msg.setSource(443U);
    msg.setSourceEntity(247U);
    msg.setDestination(26468U);
    msg.setDestinationEntity(188U);
    msg.id = 129U;
    msg.value = 0.6159720870905897;

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
    msg.setTimeStamp(0.7507666164517337);
    msg.setSource(55761U);
    msg.setSourceEntity(5U);
    msg.setDestination(25452U);
    msg.setDestinationEntity(229U);
    msg.id = 236U;
    msg.value = 0.2081659123698083;

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
    msg.setTimeStamp(0.606399713081104);
    msg.setSource(54084U);
    msg.setSourceEntity(41U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(86U);
    msg.id = 99U;
    msg.angle = 0.5919619623438364;

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
    msg.setTimeStamp(0.36252539606147993);
    msg.setSource(55613U);
    msg.setSourceEntity(187U);
    msg.setDestination(54540U);
    msg.setDestinationEntity(189U);
    msg.id = 137U;
    msg.angle = 0.46964398000653207;

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
    msg.setTimeStamp(0.555368854180904);
    msg.setSource(63774U);
    msg.setSourceEntity(27U);
    msg.setDestination(34005U);
    msg.setDestinationEntity(207U);
    msg.id = 31U;
    msg.angle = 0.45285636815897423;

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
    msg.setTimeStamp(0.9181128452036839);
    msg.setSource(2159U);
    msg.setSourceEntity(253U);
    msg.setDestination(11370U);
    msg.setDestinationEntity(103U);
    msg.op = 10U;
    msg.actions.assign("JCMBANHCCFRNOQZAAYJVMWQGQFZJUDXOLGDHLELWQJIORUDHBYUHIMEILXAISCFWRTWAUFMSVKOKMJUGBJTDSUWIBTUTGWMJRTVUFEXOPNAXUDWKZXOWPAFPQYSHVCVJPILXRWSDYMLPSWZZNKIVKEBFIBDCYHSVHIJXKVGORULYFOANSYLNHGBTBHTXFGTNSDXLBTHEPNXZMRPDQCDOPQMECBVEENQSRFJZGNRYQAZKVKGLE");

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
    msg.setTimeStamp(0.5171809649401853);
    msg.setSource(7679U);
    msg.setSourceEntity(237U);
    msg.setDestination(287U);
    msg.setDestinationEntity(17U);
    msg.op = 145U;
    msg.actions.assign("AFVBDLCXRWDBLDFCMTUESJSETUOURKKTFYSQBUICVCZSZGMHHPEOZXJYNZKGPTEVQIOUGDVDWNYLGZTPPGQVAGZKRTXAHLUEMKOLNOUQJXICQEZYOIASGQAMWURYCBZALIVJDJVGRNGDQRJIVCHYMFWGATXRLOBSSFUPIXHHNEZQOHBKRY");

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
    msg.setTimeStamp(0.5554269330403753);
    msg.setSource(41643U);
    msg.setSourceEntity(22U);
    msg.setDestination(52224U);
    msg.setDestinationEntity(6U);
    msg.op = 1U;
    msg.actions.assign("ATFGNSJWSSYZPKDZEOXDQSTNMSXCYXLFUOURHLNCVEUUQPHVUYHWLBZEYDDDWWGMWYCHDTACXMPHMMEACIFDMHKYQYQJDJSCRQJVPGSANVOYKIMVLSAVOVTPVGOVERFKRFEESPRJZQTFREBBDIPGX");

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
    msg.setTimeStamp(0.9582408149807217);
    msg.setSource(26457U);
    msg.setSourceEntity(190U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(17U);
    msg.actions.assign("RKOIMUGECOHVQVBZTKZJDGWEQMCUUCPXDGLUAGHGAYDIKBRJMWVYPLLXTXAALTMLSKOTGWYIMKLXOTXVGNRMANEDYXBHNFYDCKNUZJMLWVOFQYVQEIHYVQFWSFTNQLIMNIYZFPFXPJCFCBPEPMHCDSLWEVJAJCWUDSJOJQ");

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
    msg.setTimeStamp(0.908071546242958);
    msg.setSource(31518U);
    msg.setSourceEntity(85U);
    msg.setDestination(5243U);
    msg.setDestinationEntity(212U);
    msg.actions.assign("HQDEUDNHKFBJKYKIQRQFYYJMSRAENSPXII");

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
    msg.setTimeStamp(0.42876739296746125);
    msg.setSource(44809U);
    msg.setSourceEntity(142U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(107U);
    msg.actions.assign("EITIZVRZJTLKDEBFSTKZMPKTHPJDZCSDGRSWHEWEHRXHPBSBQORYLYPJASGQIRHCNIPMNLPJSGNDHIMYUGCJADGZ");

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
    msg.setTimeStamp(0.6332531725635421);
    msg.setSource(13858U);
    msg.setSourceEntity(103U);
    msg.setDestination(38397U);
    msg.setDestinationEntity(79U);
    msg.button = 22U;
    msg.value = 192U;

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
    msg.setTimeStamp(0.9770282438549803);
    msg.setSource(26496U);
    msg.setSourceEntity(123U);
    msg.setDestination(49965U);
    msg.setDestinationEntity(154U);
    msg.button = 124U;
    msg.value = 30U;

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
    msg.setTimeStamp(0.8446730480592063);
    msg.setSource(25883U);
    msg.setSourceEntity(17U);
    msg.setDestination(11955U);
    msg.setDestinationEntity(56U);
    msg.button = 30U;
    msg.value = 248U;

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
    msg.setTimeStamp(0.4658876487956497);
    msg.setSource(61531U);
    msg.setSourceEntity(18U);
    msg.setDestination(54766U);
    msg.setDestinationEntity(231U);
    msg.op = 43U;
    msg.text.assign("YVWONQCAHTJUQXYVBYVURMEGEUILLJNCMFRMJETVSXTHYTPRTVDJGALIXAQHFNKTRHUB");

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
    msg.setTimeStamp(0.8283710627003703);
    msg.setSource(31541U);
    msg.setSourceEntity(141U);
    msg.setDestination(39471U);
    msg.setDestinationEntity(245U);
    msg.op = 182U;
    msg.text.assign("CTFFAJSLLNWYRQBIHDFMMFQSRMUBXYGKOZLHERMIPLMZCV");

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
    msg.setTimeStamp(0.5735938758364018);
    msg.setSource(57480U);
    msg.setSourceEntity(217U);
    msg.setDestination(10249U);
    msg.setDestinationEntity(226U);
    msg.op = 237U;
    msg.text.assign("KGAENWBWGINDLHFSIJBTLMTJLHSKWBYFYQFKMTRQPPYJMQTYCXLZZOCTHHTEIMDAVVYUQEKGIGUQWDUICRRPK");

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
    msg.setTimeStamp(0.3660365373269798);
    msg.setSource(17776U);
    msg.setSourceEntity(168U);
    msg.setDestination(34837U);
    msg.setDestinationEntity(86U);
    msg.op = 121U;
    msg.time_remain = 0.5257767261201917;
    msg.sched_time = 0.7653862693155289;

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
    msg.setTimeStamp(0.4950422403249599);
    msg.setSource(64787U);
    msg.setSourceEntity(243U);
    msg.setDestination(44020U);
    msg.setDestinationEntity(40U);
    msg.op = 145U;
    msg.time_remain = 0.5314783544390983;
    msg.sched_time = 0.6712790907856838;

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
    msg.setTimeStamp(0.8393711197130426);
    msg.setSource(46855U);
    msg.setSourceEntity(52U);
    msg.setDestination(22439U);
    msg.setDestinationEntity(228U);
    msg.op = 66U;
    msg.time_remain = 0.10297285039214688;
    msg.sched_time = 0.2111272775300942;

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
    msg.setTimeStamp(0.08014864453426784);
    msg.setSource(41987U);
    msg.setSourceEntity(181U);
    msg.setDestination(39796U);
    msg.setDestinationEntity(130U);
    msg.name.assign("EJJUKNYAZFUKXIZCQXHFMVFRGELOZWQXUTBQWNPYZNLYGUOCOHWGICWKWDPWKOEQISOYRJSIDJZEPLJVWFRJRDYEFSSDBRHVMNDQWCZNRKWBOGVFCEMHLACEGWIROPSPQLDRMTDQUNTJCTHPZINCYBKSNVHGEAVTHGPIIGXSIUNJUUX");
    msg.op = 40U;
    msg.sched_time = 0.17599358455164305;

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
    msg.setTimeStamp(0.5128437778424323);
    msg.setSource(1079U);
    msg.setSourceEntity(217U);
    msg.setDestination(12826U);
    msg.setDestinationEntity(155U);
    msg.name.assign("YUJJIFHJOUSZNNWAGARRYFLXLATYUUAPWPDYCXHMJBPHBAZVHIIORSRLDWXBJDXEIZLJXKRCYDKHWKVSATKVQPBTCHMNSNFNUYZDVHAEKMUFUMFJZO");
    msg.op = 238U;
    msg.sched_time = 0.9032951912558604;

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
    msg.setTimeStamp(0.48030310231866924);
    msg.setSource(40894U);
    msg.setSourceEntity(44U);
    msg.setDestination(12319U);
    msg.setDestinationEntity(80U);
    msg.name.assign("HVKIRNWJSJDEHNKADRVJPKPXHDUNRYSGFTTKLOTZDHMREGSZKCKKBVBXZJPEVPUAWPUONANWJCMEXXQKLVPBLSGVMZSFOLLIHQWEINFMSTFWWTOCMIOBSCAIPSN");
    msg.op = 16U;
    msg.sched_time = 0.7403499856469083;

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
    msg.setTimeStamp(0.05637540280146569);
    msg.setSource(26630U);
    msg.setSourceEntity(178U);
    msg.setDestination(28535U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.23015149265615986);
    msg.setSource(52611U);
    msg.setSourceEntity(174U);
    msg.setDestination(26430U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.8582776276362354);
    msg.setSource(34233U);
    msg.setSourceEntity(22U);
    msg.setDestination(3571U);
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
    msg.setTimeStamp(0.6054587978339304);
    msg.setSource(11313U);
    msg.setSourceEntity(220U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(76U);
    msg.name.assign("ROLUCYLBKIZVEPDJAQBCJGXOZLFVLNFBHYXYRDRIDTXKJYNNNMMITNDJZVAZWTBJYLTUGAMPCZJXDAILPPZXAKZQSMXKUNIJJLMGBDMOFLSEXBKNYI");
    msg.state = 54U;

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
    msg.setTimeStamp(0.568230335001112);
    msg.setSource(46225U);
    msg.setSourceEntity(231U);
    msg.setDestination(28002U);
    msg.setDestinationEntity(70U);
    msg.name.assign("DUMHPWURRDDIHPGYLBZQWPXETEMPNTTFXONPNBAJYCZKGWBGVECNLXJYDGXQOKQINAXKTMOQNIAWQCBKVOWGJSCHSECZEXJQOYSTLMXTVZGABYVRKZABXRDIRUADVHCORKE");
    msg.state = 104U;

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
    msg.setTimeStamp(0.34951513663474365);
    msg.setSource(32686U);
    msg.setSourceEntity(233U);
    msg.setDestination(36521U);
    msg.setDestinationEntity(62U);
    msg.name.assign("QNWSEVBTQPNIXKZOURUHKNGTNCAHXJMYWYDGGLXSIJSEWBVLPGRJOIARVCQZKBVOAVWLZAKNUQUVHTTWKEBQFLDSMMCSQLJOLANRYQHFSAVDKTMCKVIBT");
    msg.state = 105U;

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
    msg.setTimeStamp(0.27423648638639586);
    msg.setSource(64794U);
    msg.setSourceEntity(79U);
    msg.setDestination(5108U);
    msg.setDestinationEntity(86U);
    msg.name.assign("HQLGHSSWERSIEYLTOQFGNJMMUYIVYXKYQOQWVIDCEUOYFWKMPTHRFRQIAVZAFOZIVJBXLOVACXSSHSZ");
    msg.value = 64U;

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
    msg.setTimeStamp(0.3724548496677347);
    msg.setSource(48898U);
    msg.setSourceEntity(84U);
    msg.setDestination(18185U);
    msg.setDestinationEntity(51U);
    msg.name.assign("FRFNCUJZHZGDHEOWQLYLAEKKFTJUCUIFMIDRWCSEWGZWTOJATZAQRSMPOMQODQCLPDMIUYWMDHNQHOKBGRSMUWGSQVSBKQNPGVXYVTJAFSTHUAYBRDAYXTVVKOTXMPESXFXWLJIUJVEAHKUUPO");
    msg.value = 68U;

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
    msg.setTimeStamp(0.8399566348742296);
    msg.setSource(24037U);
    msg.setSourceEntity(47U);
    msg.setDestination(15902U);
    msg.setDestinationEntity(177U);
    msg.name.assign("SKPJMKZDYOHWFYUOMNFAUPRQJMVBECERGLHDAYUXNLARFJZJDFCBZRVJWUENQRYVWSLRUKAWMKFXHYBSNNZRXYJDVVXNEJCKISQCAQGBOHWCRGPADLGTBPFQQSBTXGXDMKETADHGZSMCOLPIKVXOPXDQRJTBMPFIZPQOEICYVFWWXVZTSMKUAGUALNTIWIIZYHINEQHBTSHSTMYUFDLOWRCNKZCVLHGQLBYMPODLEENKJEOFGWXI");
    msg.value = 189U;

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
    msg.setTimeStamp(0.5803178438949739);
    msg.setSource(1440U);
    msg.setSourceEntity(119U);
    msg.setDestination(3671U);
    msg.setDestinationEntity(89U);
    msg.name.assign("JJGHCPPHQWFEIGNIVLFZIDNXUTMZJTSCODBVKBQUVKMRFWDUIEPHFYXYDMKBEORRKSOVTLRXYTAFKLZPGJBPAUYRIRMABSRAFOSQODYYCVKJPKFBQQXRXNBLCWOLVLTROCEETQLBSGUZYFWTJECAAYWDATUKPUHUNHMISNAOZJSVYWONHEHGGINMCXGWZPQGCIQTGXYNVZLXQNCGVSZHFSWADAJNHDMMUDBJUBKIMVZHLQT");

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
    msg.setTimeStamp(0.16999073046205715);
    msg.setSource(18279U);
    msg.setSourceEntity(141U);
    msg.setDestination(58302U);
    msg.setDestinationEntity(240U);
    msg.name.assign("INUFEURZXVKDIPBXTILKXDLFROCIBDUTPAMBKTKNEUJXVQUSTRLRBQYZIFERHEYUYXIVIFHDZWEFKHUTRZRQSUBEACPGOBRMDRDPMMLANSEVIUKZEHSJCWFXOTHQLNCWPSCGMXCVVNTAAQHPBKLJMNOMIMXPPQOTZNLSKWGLDLGKYSCTXHAPZUYGQWTABYIJHWVGSJDHCQCASHEAOWXSJQWGJGMQFORBPNF");

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
    msg.setTimeStamp(0.7349182196610173);
    msg.setSource(58393U);
    msg.setSourceEntity(14U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(183U);
    msg.name.assign("HLUYQLCVGUPHNPSTGJTKVHFJTTCWADFUZVFHIIQDXJHLSELGKXERCFESQDBTWZVCGYNQGIKPCHMAPDOAYOJDYQGSEDOBEUZNXZWXUHJXKOJMOBULSBWPEVGCXDAYYSEIWWMFFYPWWQXRINHOZRVUAFCBCFRCZSMNYVPMWORZTEGMNRTVAOBLPOMBROXSKTBLQKVPSQGMUZTJEFAAKCIRREP");

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
    msg.setTimeStamp(0.6360311011210323);
    msg.setSource(48933U);
    msg.setSourceEntity(99U);
    msg.setDestination(49404U);
    msg.setDestinationEntity(63U);
    msg.name.assign("SIRAGYPQBCNRJIWDDXSUFOEBTXLJNNDOYNJFKKFDMBRUREEGLOWQVFABLLM");
    msg.value = 70U;

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
    msg.setTimeStamp(0.6447805179948412);
    msg.setSource(61032U);
    msg.setSourceEntity(8U);
    msg.setDestination(40554U);
    msg.setDestinationEntity(214U);
    msg.name.assign("CIVVGIQABMDYFMLOZRQKGZLXXFWCOTGCHIYOCYOEMNZUNJTZAPPAFSKIDMXNBBLRKTVNETODSVMGUVJIEKGLKLLWDZYCADEWMBJGRKNCJAGLWJUQTGBR");
    msg.value = 230U;

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
    msg.setTimeStamp(0.4882171794481698);
    msg.setSource(21695U);
    msg.setSourceEntity(222U);
    msg.setDestination(39783U);
    msg.setDestinationEntity(211U);
    msg.name.assign("RXCOBWRVDWBRXGIXBZFTHOTUMYWFTVGAYSSJWYLVGSVYDLUOPNPLUBKEAPRZDOCYSGHECYVBUOKMCCTDDQTJUMGAMHBKMNZVDREQGZVGCWFAYOLUVNELRQFTOKHSBTMFUORIOIHXNTFBQLLXPKFJFCMNFSPXARAQAGJKYJFRWQLNKSLZEPWGZAIMPPLZPYNEQJSOIYDNKIEJEVIJCGRJITNVDEUQPAKHZSQBACKXXSZDIIDHMMXU");
    msg.value = 20U;

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
    msg.setTimeStamp(0.5153183769560306);
    msg.setSource(45055U);
    msg.setSourceEntity(191U);
    msg.setDestination(44157U);
    msg.setDestinationEntity(10U);
    msg.id = 58U;
    msg.period = 422560520U;
    msg.duty_cycle = 1150301044U;

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
    msg.setTimeStamp(0.8735192208915142);
    msg.setSource(22868U);
    msg.setSourceEntity(135U);
    msg.setDestination(63871U);
    msg.setDestinationEntity(119U);
    msg.id = 64U;
    msg.period = 862659145U;
    msg.duty_cycle = 1374556033U;

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
    msg.setTimeStamp(0.3189617983558022);
    msg.setSource(62482U);
    msg.setSourceEntity(21U);
    msg.setDestination(17203U);
    msg.setDestinationEntity(150U);
    msg.id = 33U;
    msg.period = 966438514U;
    msg.duty_cycle = 3934732342U;

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
    msg.setTimeStamp(0.47177969578655254);
    msg.setSource(6648U);
    msg.setSourceEntity(93U);
    msg.setDestination(45083U);
    msg.setDestinationEntity(89U);
    msg.id = 132U;
    msg.period = 606375180U;
    msg.duty_cycle = 3746338266U;

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
    msg.setTimeStamp(0.5835011732783232);
    msg.setSource(19870U);
    msg.setSourceEntity(211U);
    msg.setDestination(43866U);
    msg.setDestinationEntity(197U);
    msg.id = 130U;
    msg.period = 3844010789U;
    msg.duty_cycle = 3752106529U;

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
    msg.setTimeStamp(0.2503077356876522);
    msg.setSource(48174U);
    msg.setSourceEntity(111U);
    msg.setDestination(28969U);
    msg.setDestinationEntity(137U);
    msg.id = 248U;
    msg.period = 466381791U;
    msg.duty_cycle = 3186578842U;

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
    msg.setTimeStamp(0.928604574641086);
    msg.setSource(34918U);
    msg.setSourceEntity(1U);
    msg.setDestination(59604U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.8327578150229166;
    msg.lon = 0.9020653325059929;
    msg.height = 0.6605800583623472;
    msg.x = 0.8225196295358864;
    msg.y = 0.6279457281157156;
    msg.z = 0.24927739244022973;
    msg.phi = 0.18246409158946164;
    msg.theta = 0.6579376835269978;
    msg.psi = 0.06671308037243051;
    msg.u = 0.8508321105370551;
    msg.v = 0.4429952252981424;
    msg.w = 0.20197602768599587;
    msg.vx = 0.5959440336403128;
    msg.vy = 0.4064342753520095;
    msg.vz = 0.029432092967030754;
    msg.p = 0.2556620778943215;
    msg.q = 0.835968811375049;
    msg.r = 0.024699431780197956;
    msg.depth = 0.391987747928191;
    msg.alt = 0.9202255159265466;

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
    msg.setTimeStamp(0.9302743400184913);
    msg.setSource(20559U);
    msg.setSourceEntity(171U);
    msg.setDestination(19779U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.9750722047848759;
    msg.lon = 0.30519532692049567;
    msg.height = 0.5397625618582119;
    msg.x = 0.41352616765100525;
    msg.y = 0.9879745730163717;
    msg.z = 0.6613392812165801;
    msg.phi = 0.2487055645397891;
    msg.theta = 0.17866745507282467;
    msg.psi = 0.6160557487871502;
    msg.u = 0.9654733838663397;
    msg.v = 0.5831762040783008;
    msg.w = 0.1538010909590699;
    msg.vx = 0.3248788310165528;
    msg.vy = 0.4647812638329937;
    msg.vz = 0.5823399499520785;
    msg.p = 0.6372297375779562;
    msg.q = 0.07738863005354657;
    msg.r = 0.8771782794830526;
    msg.depth = 0.29123413240621965;
    msg.alt = 0.2855386046208255;

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
    msg.setTimeStamp(0.18951922723451764);
    msg.setSource(33060U);
    msg.setSourceEntity(223U);
    msg.setDestination(5631U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8115772429126394;
    msg.lon = 0.06114254867316371;
    msg.height = 0.9669821455301423;
    msg.x = 0.5702480628000552;
    msg.y = 0.6133423359530159;
    msg.z = 0.08344857767310698;
    msg.phi = 0.5925731823962166;
    msg.theta = 0.9437245320856574;
    msg.psi = 0.6319144793418037;
    msg.u = 0.29498764047802684;
    msg.v = 0.9760308399769271;
    msg.w = 0.5232747172594572;
    msg.vx = 0.5774801443955668;
    msg.vy = 0.23566788554648832;
    msg.vz = 0.8218995602585317;
    msg.p = 0.22632030506298384;
    msg.q = 0.24421412832268785;
    msg.r = 0.3720380697164657;
    msg.depth = 0.4403961765723562;
    msg.alt = 0.9119591135502266;

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
    msg.setTimeStamp(0.8170719727703294);
    msg.setSource(13864U);
    msg.setSourceEntity(148U);
    msg.setDestination(13702U);
    msg.setDestinationEntity(192U);
    msg.x = 0.7901590072307122;
    msg.y = 0.027014847414468024;
    msg.z = 0.3421844220085435;

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
    msg.setTimeStamp(0.707838393662296);
    msg.setSource(59827U);
    msg.setSourceEntity(227U);
    msg.setDestination(37278U);
    msg.setDestinationEntity(196U);
    msg.x = 0.18810935586883193;
    msg.y = 0.5040657076141798;
    msg.z = 0.044134429332198466;

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
    msg.setTimeStamp(0.1873521899421976);
    msg.setSource(13136U);
    msg.setSourceEntity(113U);
    msg.setDestination(95U);
    msg.setDestinationEntity(251U);
    msg.x = 0.7883524595145929;
    msg.y = 0.28866698422813186;
    msg.z = 0.6487051537045763;

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
    msg.setTimeStamp(0.7957213028747899);
    msg.setSource(40270U);
    msg.setSourceEntity(65U);
    msg.setDestination(19436U);
    msg.setDestinationEntity(1U);
    msg.value = 0.001137186737100171;

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
    msg.setTimeStamp(0.458590956122918);
    msg.setSource(59167U);
    msg.setSourceEntity(187U);
    msg.setDestination(21444U);
    msg.setDestinationEntity(139U);
    msg.value = 0.18261902158783982;

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
    msg.setTimeStamp(0.520558361604849);
    msg.setSource(57133U);
    msg.setSourceEntity(28U);
    msg.setDestination(31757U);
    msg.setDestinationEntity(216U);
    msg.value = 0.16152813739896998;

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
    msg.setTimeStamp(0.1878465071973121);
    msg.setSource(40673U);
    msg.setSourceEntity(72U);
    msg.setDestination(61126U);
    msg.setDestinationEntity(24U);
    msg.value = 0.905813541821292;

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
    msg.setTimeStamp(0.2257948680362114);
    msg.setSource(17780U);
    msg.setSourceEntity(184U);
    msg.setDestination(44216U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4102954714447883;

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
    msg.setTimeStamp(0.13795712195077126);
    msg.setSource(44712U);
    msg.setSourceEntity(205U);
    msg.setDestination(29408U);
    msg.setDestinationEntity(240U);
    msg.value = 0.7810432350352248;

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
    msg.setTimeStamp(0.017273032933713517);
    msg.setSource(63932U);
    msg.setSourceEntity(224U);
    msg.setDestination(1388U);
    msg.setDestinationEntity(237U);
    msg.x = 0.46259707234484193;
    msg.y = 0.29526146088515814;
    msg.z = 0.8221377521358784;
    msg.phi = 0.34062232264130465;
    msg.theta = 0.652312384222801;
    msg.psi = 0.29049495484493704;
    msg.p = 0.57742981550401;
    msg.q = 0.7833630075586601;
    msg.r = 0.1171718382181115;
    msg.u = 0.4223455927474372;
    msg.v = 0.37622138035318453;
    msg.w = 0.622374601635839;
    msg.bias_psi = 0.6929436613414263;
    msg.bias_r = 0.7285082385875522;

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
    msg.setTimeStamp(0.012158622237084193);
    msg.setSource(42680U);
    msg.setSourceEntity(126U);
    msg.setDestination(54096U);
    msg.setDestinationEntity(86U);
    msg.x = 0.2713251832863658;
    msg.y = 0.0925779421645615;
    msg.z = 0.23029704975040366;
    msg.phi = 0.5545653798406234;
    msg.theta = 0.6738704060411286;
    msg.psi = 0.1456401757507152;
    msg.p = 0.4572278910947215;
    msg.q = 0.8773573671495631;
    msg.r = 0.6780527603638492;
    msg.u = 0.9842850388329265;
    msg.v = 0.043830720525325106;
    msg.w = 0.7403585996625557;
    msg.bias_psi = 0.5243552644087047;
    msg.bias_r = 0.2067295580751196;

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
    msg.setTimeStamp(0.8016269929391661);
    msg.setSource(38045U);
    msg.setSourceEntity(217U);
    msg.setDestination(10875U);
    msg.setDestinationEntity(74U);
    msg.x = 0.3510070513440765;
    msg.y = 0.34411875892242283;
    msg.z = 0.32776385398168906;
    msg.phi = 0.16545863426646756;
    msg.theta = 0.23728468381421874;
    msg.psi = 0.8964000220440673;
    msg.p = 0.9272569791208964;
    msg.q = 0.8862516479971685;
    msg.r = 0.2818455557861309;
    msg.u = 0.06866885401800538;
    msg.v = 0.23589537109898506;
    msg.w = 0.02015579890834629;
    msg.bias_psi = 0.5698555136589323;
    msg.bias_r = 0.9394184669072515;

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
    msg.setTimeStamp(0.48055938407427323);
    msg.setSource(57754U);
    msg.setSourceEntity(45U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(206U);
    msg.bias_psi = 0.9429129691073523;
    msg.bias_r = 0.5642658675893035;
    msg.cog = 0.48569563575138786;
    msg.cyaw = 0.7130223308348869;
    msg.lbl_rej_level = 0.02159271325608303;
    msg.gps_rej_level = 0.3478216856857257;
    msg.custom_x = 0.48980849110683766;
    msg.custom_y = 0.8167956597607947;
    msg.custom_z = 0.1983126018421355;

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
    msg.setTimeStamp(0.8830687727841784);
    msg.setSource(63649U);
    msg.setSourceEntity(97U);
    msg.setDestination(54526U);
    msg.setDestinationEntity(140U);
    msg.bias_psi = 0.18607420720921997;
    msg.bias_r = 0.7117352818158205;
    msg.cog = 0.5155966892364376;
    msg.cyaw = 0.13765315127363453;
    msg.lbl_rej_level = 0.07980971913948853;
    msg.gps_rej_level = 0.08521465525050365;
    msg.custom_x = 0.6685562105396999;
    msg.custom_y = 0.4574782159835087;
    msg.custom_z = 0.17534629459476614;

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
    msg.setTimeStamp(0.16031398451735135);
    msg.setSource(51235U);
    msg.setSourceEntity(129U);
    msg.setDestination(35347U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.985010368909736;
    msg.bias_r = 0.22498008852558415;
    msg.cog = 0.007679286483886272;
    msg.cyaw = 0.8735015257580669;
    msg.lbl_rej_level = 0.8861391673155138;
    msg.gps_rej_level = 0.4015895635217792;
    msg.custom_x = 0.7642337377911826;
    msg.custom_y = 0.06997956632450342;
    msg.custom_z = 0.6885497193992988;

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
    msg.setTimeStamp(0.8830116829338932);
    msg.setSource(14681U);
    msg.setSourceEntity(14U);
    msg.setDestination(1093U);
    msg.setDestinationEntity(58U);
    msg.utc_time = 0.6547158780273201;
    msg.reason = 138U;

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
    msg.setTimeStamp(0.195333896924186);
    msg.setSource(26645U);
    msg.setSourceEntity(30U);
    msg.setDestination(29333U);
    msg.setDestinationEntity(83U);
    msg.utc_time = 0.6168386595999472;
    msg.reason = 157U;

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
    msg.setTimeStamp(0.12281197468779315);
    msg.setSource(28198U);
    msg.setSourceEntity(153U);
    msg.setDestination(11123U);
    msg.setDestinationEntity(34U);
    msg.utc_time = 0.7492263329205725;
    msg.reason = 129U;

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
    msg.setTimeStamp(0.6986477379014743);
    msg.setSource(44250U);
    msg.setSourceEntity(64U);
    msg.setDestination(57781U);
    msg.setDestinationEntity(42U);
    msg.id = 233U;
    msg.range = 0.4005119777412446;
    msg.acceptance = 81U;

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
    msg.setTimeStamp(0.6536711350754821);
    msg.setSource(61690U);
    msg.setSourceEntity(110U);
    msg.setDestination(11027U);
    msg.setDestinationEntity(246U);
    msg.id = 65U;
    msg.range = 0.8150521704685597;
    msg.acceptance = 157U;

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
    msg.setTimeStamp(0.21878236390361905);
    msg.setSource(58129U);
    msg.setSourceEntity(17U);
    msg.setDestination(58866U);
    msg.setDestinationEntity(141U);
    msg.id = 198U;
    msg.range = 0.006875487545286774;
    msg.acceptance = 147U;

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
    msg.setTimeStamp(0.6823819835829464);
    msg.setSource(52218U);
    msg.setSourceEntity(223U);
    msg.setDestination(21600U);
    msg.setDestinationEntity(195U);
    msg.type = 30U;
    msg.reason = 31U;
    msg.value = 0.04904365448764059;
    msg.timestep = 0.2868157094947117;

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
    msg.setTimeStamp(0.6591971159362279);
    msg.setSource(24893U);
    msg.setSourceEntity(39U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(1U);
    msg.type = 98U;
    msg.reason = 250U;
    msg.value = 0.2000485980928981;
    msg.timestep = 0.10255324481176409;

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
    msg.setTimeStamp(0.9884300776762855);
    msg.setSource(6094U);
    msg.setSourceEntity(58U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(163U);
    msg.type = 5U;
    msg.reason = 48U;
    msg.value = 0.5906043315922879;
    msg.timestep = 0.35562290765077476;

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
    msg.setTimeStamp(0.9874132939161131);
    msg.setSource(46073U);
    msg.setSourceEntity(118U);
    msg.setDestination(39935U);
    msg.setDestinationEntity(33U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RWQQTBHPPLUVCZCYVWFGXVTLKARRFRIYRCWABLEMDRHLDBOPXUMYXNYJEZTPCLROXSDGGQBUAEJGROLCGGVSNKXJACPQLPWCBCVDWCZNQJTXOIOLAXHYEMFKIOBUHFAVDSNJOMZKIJPZPZDWBEIEUMNNTIAJ");
    tmp_msg_0.lat = 0.4019959626839634;
    tmp_msg_0.lon = 0.9263352532364432;
    tmp_msg_0.depth = 0.22049311300039198;
    tmp_msg_0.query_channel = 93U;
    tmp_msg_0.reply_channel = 21U;
    tmp_msg_0.transponder_delay = 59U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2823518468165731;
    msg.y = 0.8930144922140845;
    msg.var_x = 0.6485628551449042;
    msg.var_y = 0.5430831784093703;
    msg.distance = 0.20826992392318822;

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
    msg.setTimeStamp(0.917696574064153);
    msg.setSource(27995U);
    msg.setSourceEntity(234U);
    msg.setDestination(61110U);
    msg.setDestinationEntity(50U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RGIXSHHBNURQSGWNJHXFYMMQCOANVJQAMKZZTFFPXZEHTUVAVYGYLRCLUWISPGFWZSWMDUWYNA");
    tmp_msg_0.lat = 0.2922362688535274;
    tmp_msg_0.lon = 0.4593157218812406;
    tmp_msg_0.depth = 0.2906042804843233;
    tmp_msg_0.query_channel = 139U;
    tmp_msg_0.reply_channel = 77U;
    tmp_msg_0.transponder_delay = 150U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.433558647528994;
    msg.y = 0.5491693668209714;
    msg.var_x = 0.18923649288274746;
    msg.var_y = 0.016131954023486883;
    msg.distance = 0.8403630579633818;

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
    msg.setTimeStamp(0.22746167805453255);
    msg.setSource(35109U);
    msg.setSourceEntity(52U);
    msg.setDestination(31859U);
    msg.setDestinationEntity(124U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PJDPIMEAJWDJIEEQZEXFMXQLBPDBGTCMWEJJMAKSZYVTGEFZFKULRHJKFSLBZKBUQLRROTKIXHGPRE");
    tmp_msg_0.lat = 0.589767037486262;
    tmp_msg_0.lon = 0.300129009264145;
    tmp_msg_0.depth = 0.9447342062328384;
    tmp_msg_0.query_channel = 7U;
    tmp_msg_0.reply_channel = 14U;
    tmp_msg_0.transponder_delay = 226U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4551580361244011;
    msg.y = 0.2763387736752587;
    msg.var_x = 0.49333896405732314;
    msg.var_y = 0.4503303845148031;
    msg.distance = 0.8757874246123403;

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
    msg.setTimeStamp(0.3215949132082999);
    msg.setSource(12045U);
    msg.setSourceEntity(92U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(111U);
    msg.state = 240U;

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
    msg.setTimeStamp(0.32299177443153715);
    msg.setSource(50680U);
    msg.setSourceEntity(26U);
    msg.setDestination(49614U);
    msg.setDestinationEntity(184U);
    msg.state = 21U;

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
    msg.setTimeStamp(0.9860158855416961);
    msg.setSource(53397U);
    msg.setSourceEntity(174U);
    msg.setDestination(61877U);
    msg.setDestinationEntity(122U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.14596628679980628);
    msg.setSource(55149U);
    msg.setSourceEntity(199U);
    msg.setDestination(62068U);
    msg.setDestinationEntity(117U);
    msg.x = 0.16505123641439268;
    msg.y = 0.4101344525514179;
    msg.z = 0.14823393594197154;

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
    msg.setTimeStamp(0.637146537924631);
    msg.setSource(21899U);
    msg.setSourceEntity(93U);
    msg.setDestination(40205U);
    msg.setDestinationEntity(229U);
    msg.x = 0.5089045708216694;
    msg.y = 0.7168495120125961;
    msg.z = 0.353081676126463;

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
    msg.setTimeStamp(0.7810618940362605);
    msg.setSource(24574U);
    msg.setSourceEntity(76U);
    msg.setDestination(23298U);
    msg.setDestinationEntity(53U);
    msg.x = 0.5374703959534394;
    msg.y = 0.8921245070341135;
    msg.z = 0.7328804034820071;

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
    msg.setTimeStamp(0.9470330811583784);
    msg.setSource(4598U);
    msg.setSourceEntity(101U);
    msg.setDestination(15748U);
    msg.setDestinationEntity(75U);
    msg.va = 0.4277850846443886;
    msg.aoa = 0.39733473645159734;
    msg.ssa = 0.9165462629448544;

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
    msg.setTimeStamp(0.47745220038049363);
    msg.setSource(47527U);
    msg.setSourceEntity(52U);
    msg.setDestination(25045U);
    msg.setDestinationEntity(15U);
    msg.va = 0.2585561282750346;
    msg.aoa = 0.1799131165155129;
    msg.ssa = 0.5873269926816304;

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
    msg.setTimeStamp(0.3326847587947236);
    msg.setSource(48471U);
    msg.setSourceEntity(236U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(27U);
    msg.va = 0.873238594042293;
    msg.aoa = 0.7269880099167815;
    msg.ssa = 0.21570829440477413;

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
    msg.setTimeStamp(0.16615246639350933);
    msg.setSource(21811U);
    msg.setSourceEntity(111U);
    msg.setDestination(59051U);
    msg.setDestinationEntity(46U);
    msg.value = 0.38817854235052474;

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
    msg.setTimeStamp(0.4909177533122453);
    msg.setSource(56891U);
    msg.setSourceEntity(185U);
    msg.setDestination(5832U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9525342763543442;

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
    msg.setTimeStamp(0.5208214301118143);
    msg.setSource(58860U);
    msg.setSourceEntity(241U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4641020009242368;

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
    msg.setTimeStamp(0.6311500759962831);
    msg.setSource(45531U);
    msg.setSourceEntity(254U);
    msg.setDestination(55440U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6775278704696424;
    msg.z_units = 10U;

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
    msg.setTimeStamp(0.5883559995647878);
    msg.setSource(60679U);
    msg.setSourceEntity(30U);
    msg.setDestination(14653U);
    msg.setDestinationEntity(1U);
    msg.value = 0.43496566179424034;
    msg.z_units = 86U;

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
    msg.setTimeStamp(0.28030382299998813);
    msg.setSource(5419U);
    msg.setSourceEntity(84U);
    msg.setDestination(9924U);
    msg.setDestinationEntity(119U);
    msg.value = 0.26663160323098056;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.5693177325792546);
    msg.setSource(62024U);
    msg.setSourceEntity(40U);
    msg.setDestination(22724U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7234279583406281;
    msg.speed_units = 36U;

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
    msg.setTimeStamp(0.5813751490610708);
    msg.setSource(51960U);
    msg.setSourceEntity(58U);
    msg.setDestination(26677U);
    msg.setDestinationEntity(130U);
    msg.value = 0.15605181764886455;
    msg.speed_units = 163U;

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
    msg.setTimeStamp(0.7075822765017946);
    msg.setSource(40463U);
    msg.setSourceEntity(4U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(114U);
    msg.value = 0.4624338502575456;
    msg.speed_units = 171U;

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
    msg.setTimeStamp(0.5105134747881658);
    msg.setSource(6792U);
    msg.setSourceEntity(229U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(229U);
    msg.value = 0.4731937610796265;

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
    msg.setTimeStamp(0.268423541935773);
    msg.setSource(22517U);
    msg.setSourceEntity(201U);
    msg.setDestination(64078U);
    msg.setDestinationEntity(148U);
    msg.value = 0.4609243651842424;

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
    msg.setTimeStamp(0.9298118587476001);
    msg.setSource(26719U);
    msg.setSourceEntity(35U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(125U);
    msg.value = 0.48223207977411164;

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
    msg.setTimeStamp(0.7364607563523301);
    msg.setSource(56186U);
    msg.setSourceEntity(1U);
    msg.setDestination(47248U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8526945096266881;

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
    msg.setTimeStamp(0.8961194271313341);
    msg.setSource(24513U);
    msg.setSourceEntity(135U);
    msg.setDestination(20643U);
    msg.setDestinationEntity(5U);
    msg.value = 0.7011011469643612;

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
    msg.setTimeStamp(0.3990283548837137);
    msg.setSource(18357U);
    msg.setSourceEntity(21U);
    msg.setDestination(33500U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6306844416078948;

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
    msg.setTimeStamp(0.2806859081290499);
    msg.setSource(16260U);
    msg.setSourceEntity(224U);
    msg.setDestination(26915U);
    msg.setDestinationEntity(233U);
    msg.value = 0.10045426969323423;

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
    msg.setTimeStamp(0.22352827734329395);
    msg.setSource(29323U);
    msg.setSourceEntity(82U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(30U);
    msg.value = 0.3491323836369655;

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
    msg.setTimeStamp(0.3587731247639574);
    msg.setSource(14361U);
    msg.setSourceEntity(128U);
    msg.setDestination(1959U);
    msg.setDestinationEntity(34U);
    msg.value = 0.232908756972954;

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
    msg.setTimeStamp(0.8869611646491466);
    msg.setSource(49862U);
    msg.setSourceEntity(137U);
    msg.setDestination(22672U);
    msg.setDestinationEntity(139U);
    msg.path_ref = 2260435456U;
    msg.start_lat = 0.16558908760327484;
    msg.start_lon = 0.46252629449424854;
    msg.start_z = 0.4971034990557892;
    msg.start_z_units = 2U;
    msg.end_lat = 0.40181956294497867;
    msg.end_lon = 0.26720078852892837;
    msg.end_z = 0.19659834244519236;
    msg.end_z_units = 129U;
    msg.speed = 0.7698713812657343;
    msg.speed_units = 134U;
    msg.lradius = 0.5495572646673046;
    msg.flags = 234U;

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
    msg.setTimeStamp(0.050942440045440684);
    msg.setSource(43044U);
    msg.setSourceEntity(158U);
    msg.setDestination(4195U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 4198150389U;
    msg.start_lat = 0.8247979030751691;
    msg.start_lon = 0.8789077999648476;
    msg.start_z = 0.7421112607527547;
    msg.start_z_units = 154U;
    msg.end_lat = 0.33583795015439566;
    msg.end_lon = 0.7213025349476687;
    msg.end_z = 0.752547045799854;
    msg.end_z_units = 72U;
    msg.speed = 0.6508372789136824;
    msg.speed_units = 77U;
    msg.lradius = 0.8405912174395443;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.9547836253753692);
    msg.setSource(46633U);
    msg.setSourceEntity(218U);
    msg.setDestination(44682U);
    msg.setDestinationEntity(112U);
    msg.path_ref = 3655980286U;
    msg.start_lat = 0.600367512358546;
    msg.start_lon = 0.6350006564889634;
    msg.start_z = 0.8106728669209429;
    msg.start_z_units = 51U;
    msg.end_lat = 0.9749606663692585;
    msg.end_lon = 0.22613173701589084;
    msg.end_z = 0.34301184508363924;
    msg.end_z_units = 222U;
    msg.speed = 0.41666549392255403;
    msg.speed_units = 72U;
    msg.lradius = 0.21878905312336439;
    msg.flags = 106U;

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
    msg.setTimeStamp(0.5132945856975262);
    msg.setSource(17227U);
    msg.setSourceEntity(162U);
    msg.setDestination(35505U);
    msg.setDestinationEntity(62U);
    msg.x = 0.3911669572567553;
    msg.y = 0.6631254668530051;
    msg.z = 0.6008483877848148;
    msg.k = 0.3956685703536855;
    msg.m = 0.2153654002562192;
    msg.n = 0.7905284935315079;
    msg.flags = 37U;

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
    msg.setTimeStamp(0.6918679265776803);
    msg.setSource(57131U);
    msg.setSourceEntity(254U);
    msg.setDestination(34888U);
    msg.setDestinationEntity(201U);
    msg.x = 0.6675649492594827;
    msg.y = 0.8308554309695295;
    msg.z = 0.4736800409524331;
    msg.k = 0.10835394901329809;
    msg.m = 0.28857814273087423;
    msg.n = 0.5895980282332869;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.9090100025364363);
    msg.setSource(2842U);
    msg.setSourceEntity(130U);
    msg.setDestination(10303U);
    msg.setDestinationEntity(90U);
    msg.x = 0.8480778442784621;
    msg.y = 0.46456975739198947;
    msg.z = 0.08593604453969728;
    msg.k = 0.17448193433691894;
    msg.m = 0.2433532812486331;
    msg.n = 0.742736918017779;
    msg.flags = 209U;

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
    msg.setTimeStamp(0.988356884179304);
    msg.setSource(42910U);
    msg.setSourceEntity(240U);
    msg.setDestination(39839U);
    msg.setDestinationEntity(242U);
    msg.value = 0.108388925434444;

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
    msg.setTimeStamp(0.11086048956035299);
    msg.setSource(23025U);
    msg.setSourceEntity(119U);
    msg.setDestination(57754U);
    msg.setDestinationEntity(4U);
    msg.value = 0.021613468422974624;

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
    msg.setTimeStamp(0.25349057776750794);
    msg.setSource(26826U);
    msg.setSourceEntity(56U);
    msg.setDestination(36616U);
    msg.setDestinationEntity(226U);
    msg.value = 0.2506844870772835;

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
    msg.setTimeStamp(0.2389403662340417);
    msg.setSource(64715U);
    msg.setSourceEntity(226U);
    msg.setDestination(15025U);
    msg.setDestinationEntity(68U);
    msg.u = 0.5977029671572287;
    msg.v = 0.2534216660528976;
    msg.w = 0.9156660258761351;
    msg.p = 0.10158670926044344;
    msg.q = 0.011512304926929673;
    msg.r = 0.40778454353666194;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.43523092481961767);
    msg.setSource(7889U);
    msg.setSourceEntity(142U);
    msg.setDestination(58462U);
    msg.setDestinationEntity(120U);
    msg.u = 0.6636132294253033;
    msg.v = 0.7418467636510354;
    msg.w = 0.6641219377285078;
    msg.p = 0.6084699108307028;
    msg.q = 0.7820407123246108;
    msg.r = 0.9644671569710965;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.6067278780189261);
    msg.setSource(57580U);
    msg.setSourceEntity(102U);
    msg.setDestination(3405U);
    msg.setDestinationEntity(71U);
    msg.u = 0.4988427889921849;
    msg.v = 0.4866619793714283;
    msg.w = 0.3471438096325298;
    msg.p = 0.6188717274961372;
    msg.q = 0.1625308092020883;
    msg.r = 0.19632335268976397;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.8061509884517637);
    msg.setSource(52536U);
    msg.setSourceEntity(189U);
    msg.setDestination(39303U);
    msg.setDestinationEntity(200U);
    msg.path_ref = 3050493889U;
    msg.start_lat = 0.0971823493561278;
    msg.start_lon = 0.9059576449899219;
    msg.start_z = 0.18383107867507853;
    msg.start_z_units = 110U;
    msg.end_lat = 0.6863798452095989;
    msg.end_lon = 0.12433754936196473;
    msg.end_z = 0.31579582183873744;
    msg.end_z_units = 77U;
    msg.lradius = 0.1468577697570883;
    msg.flags = 242U;
    msg.x = 0.48061528071929926;
    msg.y = 0.603440829308405;
    msg.z = 0.805017431512421;
    msg.vx = 0.13182259076576464;
    msg.vy = 0.6870751063192196;
    msg.vz = 0.26667740393066663;
    msg.course_error = 0.045082066698819756;
    msg.eta = 27322U;

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
    msg.setTimeStamp(0.8310376806406687);
    msg.setSource(13980U);
    msg.setSourceEntity(68U);
    msg.setDestination(58745U);
    msg.setDestinationEntity(231U);
    msg.path_ref = 2570865943U;
    msg.start_lat = 0.11336512553099887;
    msg.start_lon = 0.4097201487763864;
    msg.start_z = 0.7250426976072842;
    msg.start_z_units = 67U;
    msg.end_lat = 0.8086488302562668;
    msg.end_lon = 0.6563945449892055;
    msg.end_z = 0.2742268222769211;
    msg.end_z_units = 103U;
    msg.lradius = 0.3701049598088376;
    msg.flags = 98U;
    msg.x = 0.3780803202693448;
    msg.y = 0.6872332087731137;
    msg.z = 0.3597500625059282;
    msg.vx = 0.7115099818845069;
    msg.vy = 0.7079687601216959;
    msg.vz = 0.8619422558112255;
    msg.course_error = 0.6446927306244599;
    msg.eta = 48536U;

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
    msg.setTimeStamp(0.18986549939865993);
    msg.setSource(34235U);
    msg.setSourceEntity(130U);
    msg.setDestination(41431U);
    msg.setDestinationEntity(128U);
    msg.path_ref = 2215674338U;
    msg.start_lat = 0.875503409243865;
    msg.start_lon = 0.11277271038478476;
    msg.start_z = 0.3058578753613719;
    msg.start_z_units = 243U;
    msg.end_lat = 0.3267491094517485;
    msg.end_lon = 0.8170389839196556;
    msg.end_z = 0.6472003326312136;
    msg.end_z_units = 114U;
    msg.lradius = 0.25899043979329517;
    msg.flags = 194U;
    msg.x = 0.5014845607345818;
    msg.y = 0.43695004436108487;
    msg.z = 0.6751996969076014;
    msg.vx = 0.6175613120373642;
    msg.vy = 0.5366591017563375;
    msg.vz = 0.2927260379675075;
    msg.course_error = 0.37739763797093917;
    msg.eta = 58853U;

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
    msg.setTimeStamp(0.09083508406058582);
    msg.setSource(22733U);
    msg.setSourceEntity(134U);
    msg.setDestination(52893U);
    msg.setDestinationEntity(30U);
    msg.k = 0.3688365131197793;
    msg.m = 0.9803690819977525;
    msg.n = 0.40845020689180644;

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
    msg.setTimeStamp(0.652461229335048);
    msg.setSource(6432U);
    msg.setSourceEntity(120U);
    msg.setDestination(24285U);
    msg.setDestinationEntity(77U);
    msg.k = 0.3197408571020496;
    msg.m = 0.13799582170705982;
    msg.n = 0.008897623021229206;

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
    msg.setTimeStamp(0.6385117462842402);
    msg.setSource(53226U);
    msg.setSourceEntity(249U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(44U);
    msg.k = 0.680054439462897;
    msg.m = 0.3308362884261812;
    msg.n = 0.05900431190169719;

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
    msg.setTimeStamp(0.4809192071333722);
    msg.setSource(47288U);
    msg.setSourceEntity(18U);
    msg.setDestination(54716U);
    msg.setDestinationEntity(56U);
    msg.p = 0.8946610599928719;
    msg.i = 0.8846019490713816;
    msg.d = 0.7765575837614105;
    msg.a = 0.5035915819225574;

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
    msg.setTimeStamp(0.537153783090382);
    msg.setSource(50349U);
    msg.setSourceEntity(187U);
    msg.setDestination(47797U);
    msg.setDestinationEntity(193U);
    msg.p = 0.9431868352754433;
    msg.i = 0.06704790438418728;
    msg.d = 0.6178597550904749;
    msg.a = 0.2586734050464443;

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
    msg.setTimeStamp(0.8264161865404799);
    msg.setSource(8190U);
    msg.setSourceEntity(174U);
    msg.setDestination(37076U);
    msg.setDestinationEntity(88U);
    msg.p = 0.5380499869229914;
    msg.i = 0.21640395143598057;
    msg.d = 0.8656037583765426;
    msg.a = 0.7386136513181368;

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
    msg.setTimeStamp(0.007227272488326886);
    msg.setSource(35339U);
    msg.setSourceEntity(43U);
    msg.setDestination(49011U);
    msg.setDestinationEntity(235U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.8206952727486484);
    msg.setSource(65224U);
    msg.setSourceEntity(101U);
    msg.setDestination(50040U);
    msg.setDestinationEntity(224U);
    msg.op = 246U;

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
    msg.setTimeStamp(0.12997155862892407);
    msg.setSource(44755U);
    msg.setSourceEntity(28U);
    msg.setDestination(30280U);
    msg.setDestinationEntity(148U);
    msg.op = 222U;

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
    msg.setTimeStamp(0.07849231464061557);
    msg.setSource(53523U);
    msg.setSourceEntity(61U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(37U);
    msg.x = 0.8199064147809619;
    msg.y = 0.1500391430198208;
    msg.z = 0.5878426184209371;
    msg.vx = 0.28592080782743;
    msg.vy = 0.8403744853378914;
    msg.vz = 0.1547411112289715;
    msg.ax = 0.037582167691316504;
    msg.ay = 0.8668620505761291;
    msg.az = 0.27377384570699226;
    msg.flags = 36497U;

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
    msg.setTimeStamp(0.31732931949459375);
    msg.setSource(58605U);
    msg.setSourceEntity(198U);
    msg.setDestination(58685U);
    msg.setDestinationEntity(145U);
    msg.x = 0.5275068530446108;
    msg.y = 0.3797450646959747;
    msg.z = 0.5514822303831171;
    msg.vx = 0.09791933588563051;
    msg.vy = 0.36926241527676096;
    msg.vz = 0.5035558156393725;
    msg.ax = 0.866843695787538;
    msg.ay = 0.5889118768266751;
    msg.az = 0.8324571095680374;
    msg.flags = 12770U;

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
    msg.setTimeStamp(0.7614416482894026);
    msg.setSource(30484U);
    msg.setSourceEntity(160U);
    msg.setDestination(59028U);
    msg.setDestinationEntity(154U);
    msg.x = 0.7334297799391242;
    msg.y = 0.8484841448372353;
    msg.z = 0.6893698623626352;
    msg.vx = 0.34625679448446367;
    msg.vy = 0.1966292658855181;
    msg.vz = 0.8426496966810157;
    msg.ax = 0.31763613062130913;
    msg.ay = 0.2983397246919325;
    msg.az = 0.04327713260100452;
    msg.flags = 17991U;

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
    msg.setTimeStamp(0.6152286337697);
    msg.setSource(16696U);
    msg.setSourceEntity(88U);
    msg.setDestination(65268U);
    msg.setDestinationEntity(162U);
    msg.value = 0.058383675951088176;

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
    msg.setTimeStamp(0.6500455652026695);
    msg.setSource(7804U);
    msg.setSourceEntity(40U);
    msg.setDestination(63478U);
    msg.setDestinationEntity(235U);
    msg.value = 0.015712245940989522;

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
    msg.setTimeStamp(0.8206282734280719);
    msg.setSource(43405U);
    msg.setSourceEntity(178U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(89U);
    msg.value = 0.3496051608787314;

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
    msg.setTimeStamp(0.22906562853882506);
    msg.setSource(12020U);
    msg.setSourceEntity(52U);
    msg.setDestination(15819U);
    msg.setDestinationEntity(132U);
    msg.timeout = 60117U;
    msg.lat = 0.5460311774547224;
    msg.lon = 0.8859735926163033;
    msg.z = 0.3252789020336896;
    msg.z_units = 180U;
    msg.speed = 0.4621697565151762;
    msg.speed_units = 237U;
    msg.roll = 0.2996426393547862;
    msg.pitch = 0.8524632003005413;
    msg.yaw = 0.7941073834477663;
    msg.custom.assign("AJFUZDNGWDXMNKREGUIYAJSDDFAURXCWPLRXQBISSYLRCJO");

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
    msg.setTimeStamp(0.8652430726405513);
    msg.setSource(33495U);
    msg.setSourceEntity(24U);
    msg.setDestination(40073U);
    msg.setDestinationEntity(147U);
    msg.timeout = 9882U;
    msg.lat = 0.46902725277030954;
    msg.lon = 0.2361223940730377;
    msg.z = 0.05150004015291143;
    msg.z_units = 193U;
    msg.speed = 0.3747153411464661;
    msg.speed_units = 216U;
    msg.roll = 0.6902343167018371;
    msg.pitch = 0.9615464675269226;
    msg.yaw = 0.5981099154988583;
    msg.custom.assign("LYWPTSUUIWAEHQPLMEUZMKMJKNJYAVFFCSOQXRGMFVHLEGSYOMXYQHEXBVNWQGGYQSWNUIZTPZMMLMANLRWVBJAXFCFVYEDEMJWIXNJXGNDCIHGCZOLDLBEDYJLRSYUIUZAFBVQKBIFAGVIZQRWRJCMKBSGFXBRCXAARHHYOPONTPIKXUEVIAGBYUKSQULVPETTPWKAUROWXDQRTIDTCDWDPKZBBDJNKCKJPJOCTTOEFHSFH");

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
    msg.setTimeStamp(0.9466797181616214);
    msg.setSource(9899U);
    msg.setSourceEntity(212U);
    msg.setDestination(4217U);
    msg.setDestinationEntity(57U);
    msg.timeout = 39584U;
    msg.lat = 0.23907167504891325;
    msg.lon = 0.4822045983245269;
    msg.z = 0.7754594865939396;
    msg.z_units = 219U;
    msg.speed = 0.5929896230640787;
    msg.speed_units = 129U;
    msg.roll = 0.6939507617990105;
    msg.pitch = 0.7509636741920518;
    msg.yaw = 0.018277931856379825;
    msg.custom.assign("YHJBSTUTVBBSSJARZUEABKVKWFFXAIBKTBVFSDLCNNGLQKJXQPOLWUMZHQZDSOCZSLGRHWTHLVXGCCEOTYKOYHWRPNAOCIEMAEDJXIGYFMFNMFJWALDDZYJYUSKLEGSYOBKGZJXRWFMTZYTAPTJXGLBIQXUNHRWHBFORVNEPUPKHQEMVIIPJFARDMAMZUQNQHJ");

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
    msg.setTimeStamp(0.10060896884836867);
    msg.setSource(56828U);
    msg.setSourceEntity(44U);
    msg.setDestination(41730U);
    msg.setDestinationEntity(14U);
    msg.timeout = 55057U;
    msg.lat = 0.6674531095408938;
    msg.lon = 0.5777809853360428;
    msg.z = 0.8213262516092105;
    msg.z_units = 203U;
    msg.speed = 0.20554180625748153;
    msg.speed_units = 16U;
    msg.duration = 57363U;
    msg.radius = 0.02090814359239901;
    msg.flags = 207U;
    msg.custom.assign("WAFEKYURIFKIDUZVYHKJNCBERGHTOXUJVSHKCRQMBUUOFEBEAKPQLMSDRSYGUNIGAD");

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
    msg.setTimeStamp(0.14326654454995036);
    msg.setSource(43121U);
    msg.setSourceEntity(106U);
    msg.setDestination(12857U);
    msg.setDestinationEntity(40U);
    msg.timeout = 55695U;
    msg.lat = 0.16921475994653434;
    msg.lon = 0.6733279512513555;
    msg.z = 0.9501051233824307;
    msg.z_units = 89U;
    msg.speed = 0.3617818669568069;
    msg.speed_units = 239U;
    msg.duration = 51925U;
    msg.radius = 0.4434552828347734;
    msg.flags = 124U;
    msg.custom.assign("JEJLLTDMEBUBABTKYNXHVRLFEMOEXIYRFGZGEAMGUSHFQFOMBJABNERVWGZQTNGWHCTQTNWLUINYSHORZZVKPSPEFXBCGILJAVCYPHDZICSEHYAGMFHQPPKCZYIORNOLDKZXGSHDDOPQFXMVQOWUAEQXRGMOKKKYVYJDJVIAVZGIRBDDTDLPRZWMHCUITXUJPUUCATXNBSJOBUSLSNWAVJCWIHF");

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
    msg.setTimeStamp(0.21734864555430344);
    msg.setSource(47201U);
    msg.setSourceEntity(36U);
    msg.setDestination(8844U);
    msg.setDestinationEntity(243U);
    msg.timeout = 22928U;
    msg.lat = 0.8078167359728033;
    msg.lon = 0.10025609331095897;
    msg.z = 0.20418245683329594;
    msg.z_units = 250U;
    msg.speed = 0.44369680030813685;
    msg.speed_units = 174U;
    msg.duration = 59139U;
    msg.radius = 0.5701041283071446;
    msg.flags = 207U;
    msg.custom.assign("TZYEVLVLGCNQZDFUSNDYSGOHRSAAGOWXODLCBGAHDXSROXJJXUTBDAIQZRIUYYTNJAHKLYFWKCVZMILLYRXIIMNECUBRVSTZYCHLGLSTBDCFJEFFTXOWRBNCJPDQHKAIVKGEULBZQLSJTPXWVGERMHRGPBTVYEZQRFWQAHJUHBGICKXFKQNTCEWVJXOHTIZPPJUKISXKUEJHWMMFUBNBMVOIPODPGWPMSFFWYUZDMKEAONQMNVMPS");

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
    msg.setTimeStamp(0.804140658308894);
    msg.setSource(47685U);
    msg.setSourceEntity(2U);
    msg.setDestination(34817U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("FPKAQSXLHOIMGB");

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
    msg.setTimeStamp(0.2934672875353518);
    msg.setSource(18874U);
    msg.setSourceEntity(88U);
    msg.setDestination(54029U);
    msg.setDestinationEntity(209U);
    msg.custom.assign("PFGDZQYNSEVRDGIDOVYJFMHURGKYNDRUBAZTXOURBTHQZPIQQICIWHIHXEZHZKEOTCLQMBMVACQEFDZAOEOISJTPXGEUUJRGKLVFCYFAWLYWNPAOJQKXWNKVMZPHFCYOBPKLONVFSZOBXTTCLGHHJAAPMLDUSCGAWKBKYKKUSMQWESNFXJYWBCAMMSFTLPBVIINDPVRGRCHMXGTNROEXIITXASUZBLSUVENRD");

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
    msg.setTimeStamp(0.16810693386558517);
    msg.setSource(13531U);
    msg.setSourceEntity(109U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(212U);
    msg.custom.assign("SEMSOGFDOHCSWUAGIXXZIYWNIRNPDXHTWYDEHSFQQUCYQGUHUYJBRKMTOCAJRNSJBNMULGVGKASAEQDRRCMPFWPLJJIFQBHRNUGJHHCTIOOXQGAKVGPILHAMLZKKOKUBPMDNVYJBPVXCZLFI");

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
    msg.setTimeStamp(0.16819593627116558);
    msg.setSource(26546U);
    msg.setSourceEntity(107U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(142U);
    msg.timeout = 23107U;
    msg.lat = 0.6121795395958027;
    msg.lon = 0.6349851826090177;
    msg.z = 0.8431726152483044;
    msg.z_units = 175U;
    msg.duration = 25407U;
    msg.speed = 0.2877748742628454;
    msg.speed_units = 99U;
    msg.type = 103U;
    msg.radius = 0.6274121404455512;
    msg.length = 0.15571082652570267;
    msg.bearing = 0.25840248625808826;
    msg.direction = 138U;
    msg.custom.assign("INQIJLLMHLXEICODHSPYVHRUICLXQKGSLDDBNPKTXXZAOFLHITQXUNCBRQFOYHCWHXPJBUKTZJYLYEUFRYVYAMIRDVSTPDEHJMOKTVGAOCYEFRPSQ");

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
    msg.setTimeStamp(0.9159410293599809);
    msg.setSource(27561U);
    msg.setSourceEntity(163U);
    msg.setDestination(48539U);
    msg.setDestinationEntity(117U);
    msg.timeout = 60474U;
    msg.lat = 0.6306114857908627;
    msg.lon = 0.21794736500057377;
    msg.z = 0.29656180403530896;
    msg.z_units = 5U;
    msg.duration = 45578U;
    msg.speed = 0.25684766336267173;
    msg.speed_units = 91U;
    msg.type = 23U;
    msg.radius = 0.7764866371475627;
    msg.length = 0.1718944341481362;
    msg.bearing = 0.5647678141875675;
    msg.direction = 1U;
    msg.custom.assign("WYCXUFMINTAAYENJOGDWNMPSAGYZCHZPIFKSYUDCOBQHDKOZHKMTMCSPNGRUEWABNM");

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
    msg.setTimeStamp(0.3764300399745535);
    msg.setSource(14289U);
    msg.setSourceEntity(224U);
    msg.setDestination(44311U);
    msg.setDestinationEntity(68U);
    msg.timeout = 15257U;
    msg.lat = 0.7385689097004434;
    msg.lon = 0.20082522733465602;
    msg.z = 0.808089176190341;
    msg.z_units = 200U;
    msg.duration = 59092U;
    msg.speed = 0.022427571504187616;
    msg.speed_units = 182U;
    msg.type = 37U;
    msg.radius = 0.667486986310677;
    msg.length = 0.129361795065151;
    msg.bearing = 0.44664627169896554;
    msg.direction = 151U;
    msg.custom.assign("DCGIPHHHYQSZDOZRWFOBDDNRFD");

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
    msg.setTimeStamp(0.6280250863084254);
    msg.setSource(49897U);
    msg.setSourceEntity(117U);
    msg.setDestination(60537U);
    msg.setDestinationEntity(247U);
    msg.duration = 37380U;
    msg.custom.assign("WJDFELXKZLCKBAOBITVWHWCNYRZUHIUMYVNJIBBGQKOZWZDRSFYCAGXWASAIBTZIDMSZAOGTHJQAWFAJPXKDMKEGUJNNRBUNCJIEDQMSYRLUBMQSGLJWCODAGCPCXDMTIBQKLPOYENEXJPYHYLRFCPSOHRFVTDXDRPVBVSSOGFTXXTJNUPSRLMWLYZKRQFTN");

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
    msg.setTimeStamp(0.8318071338994004);
    msg.setSource(55273U);
    msg.setSourceEntity(241U);
    msg.setDestination(60143U);
    msg.setDestinationEntity(53U);
    msg.duration = 63572U;
    msg.custom.assign("QQYGBEXPBNFUUMJUABSZHSOIHVYGVUYAJROFHNFDCCEPPVCJMWOTPMIEYZLYJLZLFXOUFURNCGITQQXXWGKDDAITITTBDVZAKDLKMXFBGXYKCVRZZVSWYQBORFTKNMVNJZEPJSRHWQXCAJLENPBEQAJFOWELHSGNDWGCLFHQBNJXMCMUOSCPIOULLORUAMABKGBIPXTRNWYRRIWVTJVRSZGAHDDEHMK");

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
    msg.setTimeStamp(0.9900963010930154);
    msg.setSource(31722U);
    msg.setSourceEntity(80U);
    msg.setDestination(51405U);
    msg.setDestinationEntity(151U);
    msg.duration = 14374U;
    msg.custom.assign("RTPHMUXGDQMUKELZAUTIRLEFHPIVCMSYHIQHVEDBUTPUDJDHMOCKWIBYEPNQIMSNLFFZKAEMHMSNTPZKCYIZLTTRVCSTLOOUCGGUWAOQTHTFSGVQVETXJEVYXEVPDBZCKOCBAIQARIRJICHYJNMRGWGOWNRWJFWAFKIBZKYODPWQZXNNVWDADAOQXX");

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
    msg.setTimeStamp(0.16506280861126255);
    msg.setSource(30136U);
    msg.setSourceEntity(186U);
    msg.setDestination(63913U);
    msg.setDestinationEntity(170U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24013873911071948;
    tmp_msg_0.speed_units = 20U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52647U;
    msg.custom.assign("HAODTWEVDEAHAFHCJKYIQPWKWTKCQAUZUXFCBOFMDBVZORYGSVGG");

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
    msg.setTimeStamp(0.6905418179685274);
    msg.setSource(62153U);
    msg.setSourceEntity(173U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(158U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9769347358670841;
    msg.control.set(tmp_msg_0);
    msg.duration = 54139U;
    msg.custom.assign("LUGFOKSIVQOYTTQDJRZZYWXIVGQWAZYVXXGSKPTLKMSPARMCBSNWNEKFFJTQYFAAKRORH");

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
    msg.setTimeStamp(0.6701379810443362);
    msg.setSource(52663U);
    msg.setSourceEntity(24U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(90U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.2750232688252704;
    msg.control.set(tmp_msg_0);
    msg.duration = 11890U;
    msg.custom.assign("UEXEDCUNXCXRBPQKRCNXHQJWALTFBSDCLJWKMYVRGUAAZGSMDULHFJFHRAIGZWDTVYXIEEQZUFQAZKDGDOIXEXJTHHYRKSOJBZBLJMJOBPGTWFHRQCMTTZAMHWVWCKGILWCYDEAEMODTRGONCRPKYYNOHMVNNPWOUVDFFLCIOSRSNQJ");

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
    msg.setTimeStamp(0.30095667218121636);
    msg.setSource(45244U);
    msg.setSourceEntity(88U);
    msg.setDestination(9090U);
    msg.setDestinationEntity(82U);
    msg.timeout = 36533U;
    msg.lat = 0.020482000159294467;
    msg.lon = 0.9682213104043448;
    msg.z = 0.09192400644696419;
    msg.z_units = 19U;
    msg.speed = 0.271099014986504;
    msg.speed_units = 49U;
    msg.bearing = 0.08976858520280317;
    msg.cross_angle = 0.5561555917765317;
    msg.width = 0.6932348046318882;
    msg.length = 0.45095250192244485;
    msg.hstep = 0.2287084200873215;
    msg.coff = 70U;
    msg.alternation = 134U;
    msg.flags = 222U;
    msg.custom.assign("BEMXBWEDRIZXJPPGPROSWFTIEYKUOYKKCZOSKUVFLORHGYPLYVPNNDLGQNHHQJECJQANLWSLTVGYTNMXGUDFEWPNAITJYHPKSSPJDQYCXABQMAZEGVNDNTYXVRRSUGDBTOWBEUBHRIKDZYGTQKAUVBSWNZRMFQOVKEOCFOSRLUQAMPZQXAHHTBFLFORFCOJIVBJCTDCEKSASFLAIUDCZLAVCUPHIKZMJNRDH");

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
    msg.setTimeStamp(0.3286250467961396);
    msg.setSource(1143U);
    msg.setSourceEntity(56U);
    msg.setDestination(37819U);
    msg.setDestinationEntity(223U);
    msg.timeout = 54047U;
    msg.lat = 0.1860434237339499;
    msg.lon = 0.6522286486379775;
    msg.z = 0.9647909297397684;
    msg.z_units = 210U;
    msg.speed = 0.9603071048134489;
    msg.speed_units = 153U;
    msg.bearing = 0.9703496437978326;
    msg.cross_angle = 0.8395793256618864;
    msg.width = 0.43681543091371466;
    msg.length = 0.34715088083976686;
    msg.hstep = 0.5977194190366183;
    msg.coff = 125U;
    msg.alternation = 254U;
    msg.flags = 53U;
    msg.custom.assign("QUOISKFTHTXMZQLPNVDKLVNOMQSPCXBWRRNFRCWCESQSIRXRGAEWJTVHAMJAIIPYQVBCLQY");

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
    msg.setTimeStamp(0.07834271305763607);
    msg.setSource(60940U);
    msg.setSourceEntity(95U);
    msg.setDestination(5524U);
    msg.setDestinationEntity(137U);
    msg.timeout = 44444U;
    msg.lat = 0.8279255236011956;
    msg.lon = 0.7139463375193037;
    msg.z = 0.8167317777757404;
    msg.z_units = 88U;
    msg.speed = 0.7183565580017301;
    msg.speed_units = 187U;
    msg.bearing = 0.6267538273796497;
    msg.cross_angle = 0.5741534500805945;
    msg.width = 0.6416588283108207;
    msg.length = 0.27237685855211513;
    msg.hstep = 0.537490966463943;
    msg.coff = 170U;
    msg.alternation = 47U;
    msg.flags = 133U;
    msg.custom.assign("XWJWITXMENCAVKPCIQYNWPOIUHNFFXVYOSMHCIFDPSMLFUTBXYDIQOBDQFIZLJTCVFUEEMHBQMVYAWYVHZYE");

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
    msg.setTimeStamp(0.7429811274655352);
    msg.setSource(21976U);
    msg.setSourceEntity(143U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(157U);
    msg.timeout = 24239U;
    msg.lat = 0.46023766102005026;
    msg.lon = 0.09337257766217855;
    msg.z = 0.5270103737511578;
    msg.z_units = 76U;
    msg.speed = 0.5046035452208602;
    msg.speed_units = 28U;
    msg.custom.assign("JVRSOFVUKCHGCKDQLSRBUAGFCXUXLWQNSCYBWKNHEDNMQNBPNBHIIRTLULJLSAYTHVTEIOACKPPAKIZRIMWWMZDDLLONBZXZXRKYTSDVZQWJLUFNLVEHMRPFOAVEZMHTFJECZNWKVDWZJTMUXGBMJYEMZFCSZDQ");

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
    msg.setTimeStamp(0.13942257226142607);
    msg.setSource(4083U);
    msg.setSourceEntity(40U);
    msg.setDestination(19972U);
    msg.setDestinationEntity(246U);
    msg.timeout = 27630U;
    msg.lat = 0.4447152342171793;
    msg.lon = 0.6273725339747992;
    msg.z = 0.5754995390232451;
    msg.z_units = 6U;
    msg.speed = 0.8048244990996382;
    msg.speed_units = 124U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.35220353141144456;
    tmp_msg_0.y = 0.032736076562090655;
    tmp_msg_0.z = 0.50387637051964;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UQMRSZJAXGIOHJMVNKUUUEIGYDAZSRTHMOCACBIZZNIUHHSULPKCUYKOVZOKCGTOQBSYHLWBOBSXGPIQRPQDPXMWLYYYDLJFCHNETFAMSOFAJVVLTEWYECRTCDSQVPFMPXQVJBWWLPVLRYBPNNDWUOEHWKWEBCBZIW");

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
    msg.setTimeStamp(0.9726042680920642);
    msg.setSource(34192U);
    msg.setSourceEntity(6U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(51U);
    msg.timeout = 61132U;
    msg.lat = 0.540935448240905;
    msg.lon = 0.8215731530633901;
    msg.z = 0.5396554557293226;
    msg.z_units = 220U;
    msg.speed = 0.5516229843099509;
    msg.speed_units = 209U;
    msg.custom.assign("UJXGWBGQZIAXTCTXKPQAWOJYJKNTMXAHTVKIFRLUFWACIEWHCHPCFGDBSCHOZLFSMYFBBTQJYJSEUPXSWMDBXNNEHTOTXRYGLELVFSIYEOZPUYVDPJWTQRTEKZOLGXXZIZGQBAYERRRLIIKENNJDVUCEBMMLOMUONMOKODPKZCVVBJVD");

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
    msg.setTimeStamp(0.9918024600656395);
    msg.setSource(11666U);
    msg.setSourceEntity(180U);
    msg.setDestination(46494U);
    msg.setDestinationEntity(77U);
    msg.x = 0.025693082649031918;
    msg.y = 0.9017256731579624;
    msg.z = 0.2442741210139917;

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
    msg.setTimeStamp(0.38258488867720675);
    msg.setSource(37307U);
    msg.setSourceEntity(163U);
    msg.setDestination(51215U);
    msg.setDestinationEntity(42U);
    msg.x = 0.801855896419373;
    msg.y = 0.7533684101142385;
    msg.z = 0.7663336620832295;

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
    msg.setTimeStamp(0.3544315983798517);
    msg.setSource(60558U);
    msg.setSourceEntity(93U);
    msg.setDestination(15226U);
    msg.setDestinationEntity(43U);
    msg.x = 0.9732874728750461;
    msg.y = 0.6252335013693803;
    msg.z = 0.4436215364480375;

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
    msg.setTimeStamp(0.2072944947194051);
    msg.setSource(4757U);
    msg.setSourceEntity(92U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(31U);
    msg.timeout = 28368U;
    msg.lat = 0.5043141303222416;
    msg.lon = 0.2659530434583246;
    msg.z = 0.3015971389825335;
    msg.z_units = 193U;
    msg.amplitude = 0.9582856002860726;
    msg.pitch = 0.9291226111245126;
    msg.speed = 0.5756906485479125;
    msg.speed_units = 53U;
    msg.custom.assign("INXUNSAOYXDJMMJGRDQZXDKPGWXBVLAILYEVPXOUKFJANDQXYWIPQSUOOAJIVHHCRFPTFZQNADFUV");

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
    msg.setTimeStamp(0.7269287970401191);
    msg.setSource(10300U);
    msg.setSourceEntity(167U);
    msg.setDestination(16707U);
    msg.setDestinationEntity(118U);
    msg.timeout = 38548U;
    msg.lat = 0.3195906849934076;
    msg.lon = 0.532336269351979;
    msg.z = 0.021712747649672237;
    msg.z_units = 142U;
    msg.amplitude = 0.4020028871530047;
    msg.pitch = 0.3531698418246284;
    msg.speed = 0.04643915333779103;
    msg.speed_units = 101U;
    msg.custom.assign("SEVFAPJGTVVMDAOQEXHNGZZTDTXWBYWLRLCHDWUNAQCPIUVYGHZBJIFYRCZFLJMMJJCQYWOHQSNGVAAXXYLDEBRQUVMFTUOIIRFBLVPKXPQSIRTELUQKWLYTZXEDXQDOOVMDBWWL");

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
    msg.setTimeStamp(0.9132282708340794);
    msg.setSource(40518U);
    msg.setSourceEntity(239U);
    msg.setDestination(6971U);
    msg.setDestinationEntity(252U);
    msg.timeout = 31824U;
    msg.lat = 0.5582531915349346;
    msg.lon = 0.3636273319892803;
    msg.z = 0.4428800593854697;
    msg.z_units = 78U;
    msg.amplitude = 0.5124789203386504;
    msg.pitch = 0.7226242676786605;
    msg.speed = 0.9823507028075451;
    msg.speed_units = 201U;
    msg.custom.assign("RUXHLAVOQTSLCIZOIDHZDKKVZKIKTMIQXBPBDRJCLYREWNQSBQLQHJPFCQPEHPCPUJKJFVOWYGJDIVBRFXRHWVBXAAKBDNINHVPKZFFTYPTDSCKSZXOLJIACNCOANARTZMEMOETWJIPXHTDVWTERUGCXEN");

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
    msg.setTimeStamp(0.16974076579428043);
    msg.setSource(55159U);
    msg.setSourceEntity(129U);
    msg.setDestination(23497U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.7971562557848014);
    msg.setSource(40824U);
    msg.setSourceEntity(36U);
    msg.setDestination(26061U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.8200043734304145);
    msg.setSource(62792U);
    msg.setSourceEntity(153U);
    msg.setDestination(55871U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.10354352112153242);
    msg.setSource(47544U);
    msg.setSourceEntity(157U);
    msg.setDestination(26602U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.47509210229410903;
    msg.lon = 0.15424001137155263;
    msg.z = 0.2910161811257005;
    msg.z_units = 63U;
    msg.radius = 0.08105913998942582;
    msg.duration = 63089U;
    msg.speed = 0.4609273651730814;
    msg.speed_units = 27U;
    msg.custom.assign("NFCDEUKHYHPXQISWHKYUPPESEIOXLLHVKGLAHQVABAGDDIQNQYGQBKTTFCPSZWNSTJNDXRQBJSCPFLEYDVVKAEZSOZBCRYTWCJTXNXDTXNBQIMZHBRZFOUGNCMUYZVBKMGGNFPPJL");

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
    msg.setTimeStamp(0.8508592390994831);
    msg.setSource(54280U);
    msg.setSourceEntity(251U);
    msg.setDestination(4589U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.2762252440953633;
    msg.lon = 0.19560355779674354;
    msg.z = 0.8313986784118192;
    msg.z_units = 248U;
    msg.radius = 0.7901817697514129;
    msg.duration = 27710U;
    msg.speed = 0.9504117692103305;
    msg.speed_units = 156U;
    msg.custom.assign("VRMHTTBWAZZCOSGSACLYTNMEBHRFGZMNZTYXUPMWJYNOLDYCDHOIWERTJEGZHUPWZHRFQPAOTKPLBFRVQXGEOFJEQJIYHSOJDSDANYFFOQXQOQWQWKCGUMFFQXKBSPVAYRENLXFTOMXCDNWCNTEUSXGUMIOMSHUCKEUBMQQGIVZ");

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
    msg.setTimeStamp(0.602228259417477);
    msg.setSource(36490U);
    msg.setSourceEntity(12U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.5459942535005896;
    msg.lon = 0.6788792723058149;
    msg.z = 0.8062154115364196;
    msg.z_units = 159U;
    msg.radius = 0.14413199345191952;
    msg.duration = 47212U;
    msg.speed = 0.3790305750739563;
    msg.speed_units = 247U;
    msg.custom.assign("JTBUMLZCLRVDJUQWEMRTMOUQWJKTJUTOICG");

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
    msg.setTimeStamp(0.5057617203482693);
    msg.setSource(39374U);
    msg.setSourceEntity(247U);
    msg.setDestination(36665U);
    msg.setDestinationEntity(45U);
    msg.timeout = 6148U;
    msg.flags = 178U;
    msg.lat = 0.3563621759820239;
    msg.lon = 0.3969330396871801;
    msg.start_z = 0.2982251747332517;
    msg.start_z_units = 9U;
    msg.end_z = 0.6376805165550719;
    msg.end_z_units = 243U;
    msg.radius = 0.6622117077699744;
    msg.speed = 0.4216179956755326;
    msg.speed_units = 118U;
    msg.custom.assign("CQRMUKHXBPLKEISUMPDIBVAYVKZEMOKIQTIPJECLYASSCMIGJGESXDEPDKDUQWHIMFGJJTRVZEVVBKNCAPVNDRSYDW");

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
    msg.setTimeStamp(0.38873511780483316);
    msg.setSource(3522U);
    msg.setSourceEntity(184U);
    msg.setDestination(49230U);
    msg.setDestinationEntity(8U);
    msg.timeout = 37642U;
    msg.flags = 151U;
    msg.lat = 0.6850853168877333;
    msg.lon = 0.39715596206567094;
    msg.start_z = 0.028983105404690512;
    msg.start_z_units = 87U;
    msg.end_z = 0.5553692282280394;
    msg.end_z_units = 107U;
    msg.radius = 0.77097819373775;
    msg.speed = 0.4203912029166478;
    msg.speed_units = 82U;
    msg.custom.assign("AHJQVRNOOTQVSUNJAJUODAQLATSETBJEFZGWSPZHGBICUSEAOLTQLSMWVDTWKLMMCYXIVPSAFPIEINDZYEMWLCFQCQOKYDPBLHXXNNDFQTNGRDERPZZNMKCFLBNCIMCITKQJSYWAHYAFQHDVWTUXSXPRIOGGHJFZALYOEIBIUKYWDDTGBXBRCBSUZNZRMFWFAUYVDHRCGHVXURLKKMH");

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
    msg.setTimeStamp(0.536221918326978);
    msg.setSource(6086U);
    msg.setSourceEntity(139U);
    msg.setDestination(53126U);
    msg.setDestinationEntity(124U);
    msg.timeout = 44557U;
    msg.flags = 117U;
    msg.lat = 0.5463322735508928;
    msg.lon = 0.4415162561034144;
    msg.start_z = 0.21887187411003983;
    msg.start_z_units = 188U;
    msg.end_z = 0.24985595291306006;
    msg.end_z_units = 49U;
    msg.radius = 0.18420615233488413;
    msg.speed = 0.7925703487816999;
    msg.speed_units = 196U;
    msg.custom.assign("SGQYERAHLDGWCBTNJDUGPKWYGASXGVIKEPAVNJSJMXJHWYOQGSPWXKUKOMUOKKXFCZUSZFCONQYMJOLWCPRFVSFHUHVTWANQTDNGINMKAVLEOBORXLERRVDZQBKW");

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
    msg.setTimeStamp(0.5323155496698467);
    msg.setSource(23975U);
    msg.setSourceEntity(247U);
    msg.setDestination(22042U);
    msg.setDestinationEntity(195U);
    msg.timeout = 53451U;
    msg.lat = 0.033003663561990026;
    msg.lon = 0.7703304165940742;
    msg.z = 0.6196343871998827;
    msg.z_units = 194U;
    msg.speed = 0.767830401485974;
    msg.speed_units = 151U;
    msg.custom.assign("XZUVVXYSCRNEGOBYUPDHQZBBXQWPRTSTJFEYTMSTRBSGKHYRWLWZGSIIQVO");

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
    msg.setTimeStamp(0.4887154197698752);
    msg.setSource(5284U);
    msg.setSourceEntity(202U);
    msg.setDestination(42530U);
    msg.setDestinationEntity(162U);
    msg.timeout = 7886U;
    msg.lat = 0.07706104887850684;
    msg.lon = 0.37401212753207;
    msg.z = 0.02697506536697203;
    msg.z_units = 16U;
    msg.speed = 0.8290346861642479;
    msg.speed_units = 232U;
    msg.custom.assign("FKFJVPMIRGUUHARGBLZGVVAQPNHGAOAPEKNPIROHBCKLZCUYEDCIPTKAOXARSLOCLBYFGARECUJUPUMHDZRAVDWEFMMPOSQWPQGKVSZMIVWKOZESRCQQYDJWDQEXHNMBFEZGDVKNHJNZQGKWIRTYFJCVCKZJNNOGBQGYYTHTMIHOAWYBIDWNUFHXYWITVLJTMONAWENXPCUPRJQJSXXBFDWXYCDSKTBVSSSFOXIUTQEMLYZUZLLFDIHJ");

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
    msg.setTimeStamp(0.7891488039604228);
    msg.setSource(14886U);
    msg.setSourceEntity(187U);
    msg.setDestination(2838U);
    msg.setDestinationEntity(130U);
    msg.timeout = 39605U;
    msg.lat = 0.4021221511547104;
    msg.lon = 0.31132595276958586;
    msg.z = 0.6307662812864298;
    msg.z_units = 212U;
    msg.speed = 0.6311800913222095;
    msg.speed_units = 36U;
    msg.custom.assign("RIBPBUOVVFEQAYSCGFACPFEFEOIODQJJAJOPFINNPQWYSVPONVGHODLP");

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
    msg.setTimeStamp(0.4640227052369791);
    msg.setSource(62360U);
    msg.setSourceEntity(37U);
    msg.setDestination(61952U);
    msg.setDestinationEntity(244U);
    msg.x = 0.030465211660230307;
    msg.y = 0.2719718715816297;
    msg.z = 0.7594357408775599;
    msg.t = 0.7292700725433898;

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
    msg.setTimeStamp(0.06781749576487328);
    msg.setSource(52091U);
    msg.setSourceEntity(163U);
    msg.setDestination(53864U);
    msg.setDestinationEntity(87U);
    msg.x = 0.30261424979969365;
    msg.y = 0.05045378219669605;
    msg.z = 0.01398640229037662;
    msg.t = 0.25613607462260823;

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
    msg.setTimeStamp(0.18653171577757155);
    msg.setSource(30130U);
    msg.setSourceEntity(51U);
    msg.setDestination(56927U);
    msg.setDestinationEntity(217U);
    msg.x = 0.58036976559294;
    msg.y = 0.3333748035447657;
    msg.z = 0.3808534023744645;
    msg.t = 0.25558718754288745;

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
    msg.setTimeStamp(0.3380558399485083);
    msg.setSource(42316U);
    msg.setSourceEntity(176U);
    msg.setDestination(43516U);
    msg.setDestinationEntity(145U);
    msg.timeout = 63372U;
    msg.name.assign("IQLUQAPVHHHJWCPDANWJDJRQEGVLFNNVOMSOBSYCPMTYVMPGBDZWFGFYLFJXOBRHKSYFYPRZLTIZXABJFJNGGXKHKOACISRPXR");
    msg.custom.assign("EZCXNGDDBRYIHYZFZRLBIZSVAPVPBXQXEWCYBZCFQQRMFWXWRFQAVKCYPYUICSKODLKSKESIEKGHGV");

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
    msg.setTimeStamp(0.15736583856396136);
    msg.setSource(29901U);
    msg.setSourceEntity(14U);
    msg.setDestination(63619U);
    msg.setDestinationEntity(200U);
    msg.timeout = 51517U;
    msg.name.assign("AYMWCFLEXXFFCELJVOLUDGATPHGINCOKDMRNHSIFNHJKRWNPSLYDBMDULPQIHTWLTAKOLUOJFZXPINWJMJRWKDLWZNYAIYVKZBQCDPRUVZHEYCHSGAKOJMZTWQRIFRKFGXUZYETUQEJRGVAGSGKMLCWIOBBSMWRFSCXRNHPXLGMVYQVCBUTNUXXC");
    msg.custom.assign("BFTJMHMFEQEPXRJGHZXVKDKRCISPFHSLLTOXEFBENY");

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
    msg.setTimeStamp(0.08630212106228519);
    msg.setSource(26619U);
    msg.setSourceEntity(184U);
    msg.setDestination(45370U);
    msg.setDestinationEntity(197U);
    msg.timeout = 1166U;
    msg.name.assign("EUIILWZTNBPMQJARDLTDPUQFZTWUGYAJMFERTJPPVHBGRXEAYCTNLYBNLIFLNSIWATUHUCCZSHWPQOFSLDAPLW");
    msg.custom.assign("MVYBWFKEDKZJIPFHUOZSHVOJOFOCRYLXCCBE");

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
    msg.setTimeStamp(0.5640713514328376);
    msg.setSource(37459U);
    msg.setSourceEntity(193U);
    msg.setDestination(37085U);
    msg.setDestinationEntity(137U);
    msg.lat = 0.7594954389017943;
    msg.lon = 0.7320345170154354;
    msg.z = 0.3455856907475109;
    msg.z_units = 19U;
    msg.speed = 0.9307637770847913;
    msg.speed_units = 53U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9948609251524783;
    tmp_msg_0.y = 0.7321917498436982;
    tmp_msg_0.z = 0.5384794173837713;
    tmp_msg_0.t = 0.3094220412273815;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.013647140814470604;
    msg.custom.assign("NLWDHHIOOUXNZROWFLZHGJUJMRVHKANSSDNFWMWSJCZQDUMSXOUCKLDAAUGRRBYTTKQDXMTTSBSYCLQEDSOIQIKJFDLVJKZVNBTRYNXPEAVAFTEGZZWYESHVBRWHIKVNNICZPQIKYLDEKEZMPTERPRGUAAXMVMTGGLPEFILCLLOHOOOBMBPNMQGJVKCYUYXQFQHPEBFWDSCIY");

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
    msg.setTimeStamp(0.2613052650214732);
    msg.setSource(605U);
    msg.setSourceEntity(25U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.1991905515673854;
    msg.lon = 0.45522932932217985;
    msg.z = 0.13381913093613507;
    msg.z_units = 16U;
    msg.speed = 0.6481694087519316;
    msg.speed_units = 227U;
    msg.start_time = 0.37637772253058055;
    msg.custom.assign("KKDRIVRQVSWIEUMEAUKNOAKGJGPSULZBEDHUABQTPMQONTQQSFLXIRMYKCABILLGTNFOMYBJULIYCBNTGFKOXMENDJWRBDCVRBUWPPAZZVWMIZHKOHXLSDRKWFVPHTFFJQUKNZSJXRIOYNLLLYGVTEXCYEQESGHEQUESJBZGWRFZAVCQOJAMLCRIXCTCWZZFPWPDWOVZBYIXOABDHXYAXOQMISHMTRJAFPWESPCJUHCTYKFDNV");

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
    msg.setTimeStamp(0.05756760715222975);
    msg.setSource(24241U);
    msg.setSourceEntity(142U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.027986212588548276;
    msg.lon = 0.2845481458244429;
    msg.z = 0.4492417635310778;
    msg.z_units = 105U;
    msg.speed = 0.9970677617961585;
    msg.speed_units = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23118U;
    tmp_msg_0.off_x = 0.15745876948731818;
    tmp_msg_0.off_y = 0.533984028161672;
    tmp_msg_0.off_z = 0.8350745572863124;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.15449238949598743;
    msg.custom.assign("ODTMMVOHCSPIMDCNLNRQIECPZRZONQAZGPJQZAWZBLVVFYFUGJQWKFJYDAJLPKHPIGOAPIZDVWXJJJQXYVAWKEUGATQGWKDARSWMVEUMEBQSKTDXPGOEEHMGOIHEGXSMYILCKFNRDUKWLVZQADXRYNYVTRNUFFLCPVYHIEJTBRTFSEBVSOKLDJLKUOBXMBPIXCCRGHZGHERZFNUTUISHNS");

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
    msg.setTimeStamp(0.26937171137392035);
    msg.setSource(38680U);
    msg.setSourceEntity(209U);
    msg.setDestination(10041U);
    msg.setDestinationEntity(97U);
    msg.vid = 40154U;
    msg.off_x = 0.9631431881082427;
    msg.off_y = 0.9765177557714629;
    msg.off_z = 0.33616960507579485;

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
    msg.setTimeStamp(0.20600828295868912);
    msg.setSource(6273U);
    msg.setSourceEntity(30U);
    msg.setDestination(14573U);
    msg.setDestinationEntity(94U);
    msg.vid = 39566U;
    msg.off_x = 0.16239632327017828;
    msg.off_y = 0.32885578252555914;
    msg.off_z = 0.6680060350399223;

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
    msg.setTimeStamp(0.5376127228927757);
    msg.setSource(41132U);
    msg.setSourceEntity(75U);
    msg.setDestination(30804U);
    msg.setDestinationEntity(158U);
    msg.vid = 1258U;
    msg.off_x = 0.9090558352909287;
    msg.off_y = 0.6638731262613768;
    msg.off_z = 0.2859114615632876;

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
    msg.setTimeStamp(0.36302986586812225);
    msg.setSource(33409U);
    msg.setSourceEntity(165U);
    msg.setDestination(4427U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.03232697932967432);
    msg.setSource(54925U);
    msg.setSourceEntity(205U);
    msg.setDestination(54908U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.0006421535152159041);
    msg.setSource(62657U);
    msg.setSourceEntity(35U);
    msg.setDestination(65077U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.8064905973169569);
    msg.setSource(46218U);
    msg.setSourceEntity(1U);
    msg.setDestination(54501U);
    msg.setDestinationEntity(22U);
    msg.mid = 9829U;

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
    msg.setTimeStamp(0.6656996420779225);
    msg.setSource(12368U);
    msg.setSourceEntity(6U);
    msg.setDestination(42339U);
    msg.setDestinationEntity(45U);
    msg.mid = 12897U;

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
    msg.setTimeStamp(0.18680010120924684);
    msg.setSource(20783U);
    msg.setSourceEntity(210U);
    msg.setDestination(15107U);
    msg.setDestinationEntity(90U);
    msg.mid = 20609U;

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
    msg.setTimeStamp(0.38996433561115573);
    msg.setSource(38277U);
    msg.setSourceEntity(4U);
    msg.setDestination(51070U);
    msg.setDestinationEntity(79U);
    msg.state = 50U;
    msg.eta = 20610U;
    msg.info.assign("NJPGSYBKJZCCOFNKRMCCSXEHYBVWASVE");

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
    msg.setTimeStamp(0.2071853858385132);
    msg.setSource(61241U);
    msg.setSourceEntity(17U);
    msg.setDestination(15095U);
    msg.setDestinationEntity(67U);
    msg.state = 85U;
    msg.eta = 18488U;
    msg.info.assign("USKWUUJEGTADAQSWPEZURNBVQQJLXBYDVYPCQERPYAARYAHHLOUJKTNCIOFWVXOIENGKIJLBBDVQQOKYFEGVCBFSTNLHIXPLMHVABHCISLOFEXGIZWOYSIKFJKVNMOTEHKAXTZWXTNRFPLHGWNMWGRQDVMMJAZGLUZUSKCXJWZBCDVUHTHZPIDYCDKYDCFFRIK");

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
    msg.setTimeStamp(0.709918243230517);
    msg.setSource(15583U);
    msg.setSourceEntity(212U);
    msg.setDestination(12892U);
    msg.setDestinationEntity(138U);
    msg.state = 149U;
    msg.eta = 20401U;
    msg.info.assign("UKXZAFILZWYGJEFRXTTKRLNDTAZKODMRKGIQBGMDGVSLKJASJPKWSZSWGFQVZPNHZNMPCGCLFMIJQEKOWQYOUIPGBOBRUWBD");

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
    msg.setTimeStamp(0.3464409353989578);
    msg.setSource(131U);
    msg.setSourceEntity(45U);
    msg.setDestination(36066U);
    msg.setDestinationEntity(33U);
    msg.system = 11173U;
    msg.duration = 31521U;
    msg.speed = 0.38773696506214095;
    msg.speed_units = 17U;
    msg.x = 0.7622142261661621;
    msg.y = 0.28892951720527926;
    msg.z = 0.8951030887186551;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.09612624182129303);
    msg.setSource(11058U);
    msg.setSourceEntity(73U);
    msg.setDestination(64384U);
    msg.setDestinationEntity(13U);
    msg.system = 59484U;
    msg.duration = 60963U;
    msg.speed = 0.24396808067129028;
    msg.speed_units = 171U;
    msg.x = 0.5502231768050123;
    msg.y = 0.6264087631361298;
    msg.z = 0.5152804646108485;
    msg.z_units = 139U;

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
    msg.setTimeStamp(0.656113923773348);
    msg.setSource(15816U);
    msg.setSourceEntity(98U);
    msg.setDestination(36705U);
    msg.setDestinationEntity(55U);
    msg.system = 55996U;
    msg.duration = 39691U;
    msg.speed = 0.5190922237238808;
    msg.speed_units = 90U;
    msg.x = 0.6553842189474096;
    msg.y = 0.23815151817968827;
    msg.z = 0.10059877658229355;
    msg.z_units = 227U;

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
    msg.setTimeStamp(0.6664271033464835);
    msg.setSource(22173U);
    msg.setSourceEntity(253U);
    msg.setDestination(31241U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.8847618576516715;
    msg.lon = 0.2620957352268971;
    msg.speed = 0.6004434527497315;
    msg.speed_units = 129U;
    msg.duration = 24670U;
    msg.sys_a = 25064U;
    msg.sys_b = 4764U;
    msg.move_threshold = 0.2873942345599285;

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
    msg.setTimeStamp(0.3953107795283566);
    msg.setSource(36252U);
    msg.setSourceEntity(156U);
    msg.setDestination(60609U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.7498479278245509;
    msg.lon = 0.9279638788423614;
    msg.speed = 0.22270801299772613;
    msg.speed_units = 217U;
    msg.duration = 4014U;
    msg.sys_a = 40021U;
    msg.sys_b = 9910U;
    msg.move_threshold = 0.46461028898704937;

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
    msg.setTimeStamp(0.07738088162103773);
    msg.setSource(56061U);
    msg.setSourceEntity(103U);
    msg.setDestination(43856U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.7488370161895396;
    msg.lon = 0.41329424062389064;
    msg.speed = 0.27104240317876027;
    msg.speed_units = 147U;
    msg.duration = 18549U;
    msg.sys_a = 27825U;
    msg.sys_b = 64553U;
    msg.move_threshold = 0.24632371416229326;

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
    msg.setTimeStamp(0.5119128535851851);
    msg.setSource(42271U);
    msg.setSourceEntity(203U);
    msg.setDestination(44174U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.021303674025513475;
    msg.lon = 0.30056839376075795;
    msg.z = 0.9958106032010435;
    msg.z_units = 242U;
    msg.speed = 0.5166790233339394;
    msg.speed_units = 212U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0023143115808087478;
    tmp_msg_0.lon = 0.27833830400226756;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QIVMUTMXCDEVRKKN");

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
    msg.setTimeStamp(0.8437959439434133);
    msg.setSource(1029U);
    msg.setSourceEntity(29U);
    msg.setDestination(64368U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.6104647873886221;
    msg.lon = 0.9008562267691438;
    msg.z = 0.012977388573269133;
    msg.z_units = 113U;
    msg.speed = 0.6462995997345679;
    msg.speed_units = 163U;
    msg.custom.assign("LRDQOXHRMQFPZTURQYXLXIWGAYPKMLLKGVQSQLCWYXDZGKZRZJYRPGNAEHKOIIYUIUZAIHNBIXJZMUULBSRHZYWGADHVOYREEGQOHQIYFSBACZ");

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
    msg.setTimeStamp(0.32724814057707907);
    msg.setSource(25945U);
    msg.setSourceEntity(252U);
    msg.setDestination(7343U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.12073953592825526;
    msg.lon = 0.3544055749829852;
    msg.z = 0.6149619112253403;
    msg.z_units = 22U;
    msg.speed = 0.2678442727175776;
    msg.speed_units = 7U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6196475881982115;
    tmp_msg_0.lon = 0.8372781332894804;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TVWAVFLWKJLUNJDOICATUCYWLOYWSKDIFIKORWPHJAZPHHGGBVNRMTGTBSEMGGJBZLQCMYIPMVDEEGAUPCXGQNPURQUXKYEFHZDDSNEZCLYYFIXZUPZXVTNCTQQABFXJRRXPUZZFIZXLDTBCMQBFVICTHNWTHTFCBMQAOC");

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
    msg.setTimeStamp(0.4484350616881543);
    msg.setSource(40168U);
    msg.setSourceEntity(51U);
    msg.setDestination(12860U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.7203827518157273;
    msg.lon = 0.19699163259414487;

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
    msg.setTimeStamp(0.9556263042705901);
    msg.setSource(59538U);
    msg.setSourceEntity(147U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.27694837931833116;
    msg.lon = 0.6312828487615072;

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
    msg.setTimeStamp(0.2739980864445971);
    msg.setSource(40021U);
    msg.setSourceEntity(103U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.3895747951887881;
    msg.lon = 0.6532347865968882;

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
    msg.setTimeStamp(0.41848300993899656);
    msg.setSource(11044U);
    msg.setSourceEntity(35U);
    msg.setDestination(23482U);
    msg.setDestinationEntity(102U);
    msg.timeout = 59688U;
    msg.lat = 0.20610047083194794;
    msg.lon = 0.5124664333505322;
    msg.z = 0.7038979442091182;
    msg.z_units = 191U;
    msg.pitch = 0.5701620665978835;
    msg.amplitude = 0.4715427193545716;
    msg.duration = 7493U;
    msg.speed = 0.5185740331270415;
    msg.speed_units = 81U;
    msg.radius = 0.13120424592079172;
    msg.direction = 242U;
    msg.custom.assign("MFTFRUHPCNPWQDNUNABWUGMVYXJQXFQUCKQHNEGIBCJAWFOLXNUARSCEOLGAILPXETMJZDOJETSCGX");

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
    msg.setTimeStamp(0.7606875657504997);
    msg.setSource(41253U);
    msg.setSourceEntity(214U);
    msg.setDestination(65169U);
    msg.setDestinationEntity(241U);
    msg.timeout = 35160U;
    msg.lat = 0.7831525101377218;
    msg.lon = 0.13777531588803194;
    msg.z = 0.9181085245076439;
    msg.z_units = 216U;
    msg.pitch = 0.004579952824042777;
    msg.amplitude = 0.3987302017673129;
    msg.duration = 50777U;
    msg.speed = 0.4111018095511759;
    msg.speed_units = 211U;
    msg.radius = 0.9201194565834447;
    msg.direction = 120U;
    msg.custom.assign("QQGVAMZFBMOJYXQPKIERHIMEANZMBSKJDGWBVLOFKSXJYPJZHCWKJQAUUQMLEWUTGGXNLXSONYNFHREWCHXFDVTQTYFLWBJRSYUSSKMJKESICRLAHUYZOSEPZRYAGWGVBCALHKODNVOIJOFIMVVNNYETUWHMCHEEXAMBURJPDFRECGKPHSTDISWBC");

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
    msg.setTimeStamp(0.3379466220723051);
    msg.setSource(30895U);
    msg.setSourceEntity(102U);
    msg.setDestination(6687U);
    msg.setDestinationEntity(150U);
    msg.timeout = 51428U;
    msg.lat = 0.08052262198538807;
    msg.lon = 0.5922794841971556;
    msg.z = 0.6751471760244604;
    msg.z_units = 120U;
    msg.pitch = 0.45311472768521166;
    msg.amplitude = 0.10851954208374737;
    msg.duration = 49305U;
    msg.speed = 0.9014107039334015;
    msg.speed_units = 236U;
    msg.radius = 0.7601969100361418;
    msg.direction = 92U;
    msg.custom.assign("LHAOJGBFMRIJOQRPMVJSWNYGTAVLQIJSUCJXUTZPWMHRAGKSYPCFIGSHONYJEOUBYUHOHZWEBRTPPRXKLTHNAESNWKGDAUDBMFGTEZZCOTFDIEJCKDHUJQQZYDYFEBLLZKNUSAXLZNMAVEVDZFNKIRRCNKEYJSOOXXYQVDCRVGMIZPWVKXFTFLW");

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
    msg.setTimeStamp(0.9642107738778284);
    msg.setSource(10540U);
    msg.setSourceEntity(233U);
    msg.setDestination(60562U);
    msg.setDestinationEntity(179U);
    msg.formation_name.assign("ZMLPFGPHYTFXQKLHQPKVOKGLVPODRIBIMNHAMZGCOCJIXRWRMIVNVFBOOPYZEAVYMAWHXFCTEWBKEWDKZBHLYQUZGASYURDJNCRGUNXYIFQKZWWWLLEAHBTGRBISQYQNFDQZVEJNJMXCRZKAFMXPGAYAZIA");
    msg.reference_frame = 139U;
    msg.custom.assign("JKTYHRVHGXASYFDKIGCYUVYBPGUCLDNPKOENPOPFNEXEVIHFBCTORUTDVIGZFIDGMEIQHKSOXBITOZWKSMBHAGZJTDYOLZWRLRCAPOAMTZVMKILQQWWVNOJPBXHVZBFYRANQJJTOBSIUXAYFBQXFSKEANNGDGENSJIHAQLXPBYMCUMEUHCMUPJRNRXFSRWZWRQELSDMPSBHWGUAVCMYZTVDRUEZMZYKKVDWPFAJUONKHCQJQC");

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
    msg.setTimeStamp(0.04369996648995422);
    msg.setSource(23159U);
    msg.setSourceEntity(178U);
    msg.setDestination(9282U);
    msg.setDestinationEntity(233U);
    msg.formation_name.assign("PJWQAGSZDVZLNDLZWUUEZVCMBZSAOGMMTGILIMNAZYNKOFBHXIUYTNJPYHBEWEQACEKSVBONFQFNRWOMELGRARBHQWTEXXV");
    msg.reference_frame = 222U;
    msg.custom.assign("GAZAQIZRBBUPMRUSJTWOEHBTMNCOQDGQZQUAGMWZTFM");

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
    msg.setTimeStamp(0.8619719057399016);
    msg.setSource(34425U);
    msg.setSourceEntity(124U);
    msg.setDestination(22894U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("UCHEBSTPRLDECBMQSJPHMUDSZKKVQOKNQUJULTYASTZYXNUTOXJIGOQSTCMOIQTWYHEVWFEDVALBCYHR");
    msg.reference_frame = 39U;
    msg.custom.assign("XMVNDWATUXZVGIOMSPPOCPMKJHHNSOYODBGUOSIGTPAFYKUJSECLFZJVIYONMZGZYIHYJBRZMTOTRVRWSWVQEIZJDXKACDXDEKYKFALQBZSIXMSWHNFHGNXIDCVKJWWQLZKTBLNMRVQUKFCZEWHFDTWCJLFSEH");

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
    msg.setTimeStamp(0.47574395087859445);
    msg.setSource(29666U);
    msg.setSourceEntity(167U);
    msg.setDestination(32813U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("NGKYSWROMUCDVONPOKEFMISFXEXCRBKYQTDTPDCQNXKVYMERXGFSARAMHEEDHFVTGMTXVJWZABTPKOQBACLZCCFPIGSJY");
    msg.formation_name.assign("IQKROYDYULDCGMZMHNUHXNYHCSIICRALCEWNFEWAVBYNQMOJSUVCPKOCNATZFBMBPKEFRYTFMSCLKXNTRIKWGBQGTEBJJZUDSHKXVIRWHNTJQSCUQNURDZOUVVWGZXPPMAUSQRVBWOHCYPLOYPCNEVQIAZUZJFRYBFVUJOXEYWDJPESAHDBEOBHITOTHGOLLQLDTGZL");
    msg.plan_id.assign("LJQZHNVKQRUQOXPPMPGVCTZISSOJJWIIIWDEOT");
    msg.description.assign("HRFSVHTYQLHTNUSRZJOLJXGTAELWRQWPBHGCLZRKSFJT");
    msg.leader_speed = 0.780923941976496;
    msg.leader_bank_lim = 0.6735799164939374;
    msg.pos_sim_err_lim = 0.7403513114182309;
    msg.pos_sim_err_wrn = 0.0393664192505917;
    msg.pos_sim_err_timeout = 53596U;
    msg.converg_max = 0.5200304770542484;
    msg.converg_timeout = 61059U;
    msg.comms_timeout = 18252U;
    msg.turb_lim = 0.9354053093505205;
    msg.custom.assign("MSVMWJJAMITNQXHK");

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
    msg.setTimeStamp(0.2739695146626705);
    msg.setSource(22340U);
    msg.setSourceEntity(123U);
    msg.setDestination(48024U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("ZUBBLTDIIJOAERWHLSTEZEZXUFZDLWCHFRCBBXWUWIJUVPIHWZMGBDYVKZCRXCKTQCYAKWGUNCPFKDBFWQVECLGNPUKGRQLADRQMRHLCXJZOGAIKFEPTPAMFVKASWLDQOPHYNNGXYBUXGRZJXXNPNEACERVGNYRHREZDTHVSXJMKLQSIJOHQBMCTMYKA");
    msg.formation_name.assign("ZHQTSZQUDZPBRKJVYJPA");
    msg.plan_id.assign("DDBMXEKLHEOAGNTINDVBWTQGQBECGUSRUNJDZJSMDMXZOEUSTPMIDVSHMYFYRTJEQPIGZFDRXQBTGHSTUJZWZWOHWOJFXURFFNPQHGPDECFASCJWHVJNUKFIRISMQOYZIVOPSFAQJVZANTXBUQYPLINRAOLYWBYRHKCVNUWKGGYUAQDHYMSGKXACCUECLKXPYTLBHVLKNFZPTREHKOBZPSQPVJIXYM");
    msg.description.assign("UGHLXCIACBWRWPKJSMBRLJQWAGJYCRQPFUYNJQKZLNSNVUIGIMTBANPSSLUUZGOSYXIFMQDYIKLZMAOBDCVKRFPXVPFJGQDRFILWEVFHTYQPTRQZHHXFETEJBDZUIQWTOIOCHNHEFNNDQRRTPVVXSWLMAXUWAAHGWZEDYCETSYOEMHSCJMRNVXBKLBTKBCKMGQ");
    msg.leader_speed = 0.2079577914027967;
    msg.leader_bank_lim = 0.9332514962147379;
    msg.pos_sim_err_lim = 0.9311521783380865;
    msg.pos_sim_err_wrn = 0.8202901720536767;
    msg.pos_sim_err_timeout = 15697U;
    msg.converg_max = 0.13752156321159337;
    msg.converg_timeout = 17535U;
    msg.comms_timeout = 10772U;
    msg.turb_lim = 0.30811836838961393;
    msg.custom.assign("FSGUEKQCYYHMSBASWFBNTPFICQWRLALZGJRNPKJEAINPEGFHGILCGUBQNOIWSHROAGSOEGUSTUWYSDVFKWJQXGNRUMHWWBFRRNABZXPKTXUJEVOVFDEDKBAJRNNVEFQIUOVOHRTMAIQEDFHIHQL");

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
    msg.setTimeStamp(0.7542911284159295);
    msg.setSource(424U);
    msg.setSourceEntity(57U);
    msg.setDestination(22310U);
    msg.setDestinationEntity(108U);
    msg.group_name.assign("ZRFKGYQAOELEHXNNPJNRGRDFLQDQEISEKHTOWOOZHHHCMQ");
    msg.formation_name.assign("KHWLXBPOSKMIKOHFCIDJFFIBKYERHCZBFUAXXVOYLSMPNCXMVTJTHJPELNOXOPPNAEWNTVHXZXUGSQXGBPUMIGXQHYYLKZDEMSVTVARGNCPCBUDUSWNMTLAVDGDICUFDNJGNDIJRJZTKULGZMZZWJAFSDQASWTNWQWMJRRVVRF");
    msg.plan_id.assign("PYISABYCBRUSRFMEJQNWPYGGKQASLUHGVTJVXWXAGLRICGIMWZIOEZDHHDOMSTBFPETFNUQZBMUSOCRADTLUHXVPOPDBMZROEMWOTRNLLQHASCOIXLLOFGISKDWJDXGNWXKUVSBHDOUFNRQRRUFBHMJTYPXBWAPQCNSARAJMQEKTIEVJCKYIFKVWEPBHLWZGCXSKVFHAPQYXIMTEJYZ");
    msg.description.assign("DRYKVDBAZTZLDMOWGCVKTSAFGYFAUUJLSVPMCLRFJJZYGOXFTUYEPADDIGQOXCKIQQCAGBCNVHPQBYYYHPDNHZNHRJJIFPEEUQQMTCFCEXEJFWXMIVHHQUTESUWXSQETIKTILIIJTPE");
    msg.leader_speed = 0.8857146846725752;
    msg.leader_bank_lim = 0.5204631528727599;
    msg.pos_sim_err_lim = 0.8144517785184606;
    msg.pos_sim_err_wrn = 0.43449842497020696;
    msg.pos_sim_err_timeout = 22409U;
    msg.converg_max = 0.06329553409774458;
    msg.converg_timeout = 9554U;
    msg.comms_timeout = 44665U;
    msg.turb_lim = 0.6892459437053767;
    msg.custom.assign("QBUZSUHCMRIOTFKOXGBESRGGADOZIRCQVAVIKOWFBDMPILKIPDXJNBGBAKJNFBALYSJZCRIXWDCMIXWNFGLUWSSLKZCFTFVBKTHQYGABYETAXQPSDNPEZYZJVMDWQMHXYSCNBVLZYPDWFXROHBFPAUUPPEHFOEMOAMLJCUILONWELOTRUVTVZAQTQQLHHUNMOVYVVEHGJEXTSZKQUECNYXCHLJWMCUJGWKHSRMAYRZD");

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
    msg.setTimeStamp(0.675481682140563);
    msg.setSource(40193U);
    msg.setSourceEntity(61U);
    msg.setDestination(54291U);
    msg.setDestinationEntity(79U);
    msg.control_src = 43636U;
    msg.control_ent = 89U;
    msg.timeout = 0.787347938490611;
    msg.loiter_radius = 0.7574329341736401;
    msg.altitude_interval = 0.5281804302174511;

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
    msg.setTimeStamp(0.29277637879749596);
    msg.setSource(27679U);
    msg.setSourceEntity(14U);
    msg.setDestination(14798U);
    msg.setDestinationEntity(196U);
    msg.control_src = 5511U;
    msg.control_ent = 124U;
    msg.timeout = 0.5915423050921818;
    msg.loiter_radius = 0.23371349387037565;
    msg.altitude_interval = 0.07391761482025994;

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
    msg.setTimeStamp(0.4154379678408334);
    msg.setSource(24600U);
    msg.setSourceEntity(153U);
    msg.setDestination(24232U);
    msg.setDestinationEntity(195U);
    msg.control_src = 59725U;
    msg.control_ent = 181U;
    msg.timeout = 0.45441516945275573;
    msg.loiter_radius = 0.689048387419688;
    msg.altitude_interval = 0.6983043540895936;

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
    msg.setTimeStamp(0.8469169241196183);
    msg.setSource(34835U);
    msg.setSourceEntity(20U);
    msg.setDestination(49455U);
    msg.setDestinationEntity(211U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.24585404299285663;
    tmp_msg_0.speed_units = 226U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3615262270264935;
    tmp_msg_1.z_units = 165U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9834792497448197;
    msg.lon = 0.04664142636085766;
    msg.radius = 0.8823834150271177;

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
    msg.setTimeStamp(0.8597111784862297);
    msg.setSource(2249U);
    msg.setSourceEntity(68U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(221U);
    msg.flags = 79U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3938395316883163;
    tmp_msg_0.speed_units = 242U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4669627567658453;
    tmp_msg_1.z_units = 181U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.02427024652484966;
    msg.lon = 0.9304383037820605;
    msg.radius = 0.19701816493431845;

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
    msg.setTimeStamp(0.0784962830842224);
    msg.setSource(22362U);
    msg.setSourceEntity(231U);
    msg.setDestination(25600U);
    msg.setDestinationEntity(52U);
    msg.flags = 253U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5784188365527123;
    tmp_msg_0.speed_units = 248U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3643509795188399;
    tmp_msg_1.z_units = 40U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9947814128883874;
    msg.lon = 0.69108415644865;
    msg.radius = 0.4998520898100901;

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
    msg.setTimeStamp(0.0704166562036932);
    msg.setSource(32671U);
    msg.setSourceEntity(111U);
    msg.setDestination(38888U);
    msg.setDestinationEntity(230U);
    msg.control_src = 54991U;
    msg.control_ent = 126U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 2U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7156635832931703;
    tmp_tmp_msg_0_0.speed_units = 152U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.872639265879512;
    tmp_tmp_msg_0_1.z_units = 22U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.793683392506018;
    tmp_msg_0.lon = 0.2668492279072744;
    tmp_msg_0.radius = 0.7838650907089829;
    msg.reference.set(tmp_msg_0);
    msg.state = 19U;
    msg.proximity = 78U;

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
    msg.setTimeStamp(0.7866527811009089);
    msg.setSource(13184U);
    msg.setSourceEntity(211U);
    msg.setDestination(7420U);
    msg.setDestinationEntity(200U);
    msg.control_src = 37375U;
    msg.control_ent = 91U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 41U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7006055571171467;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.051691821388790804;
    tmp_tmp_msg_0_1.z_units = 160U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.342445603851925;
    tmp_msg_0.lon = 0.6726453293099451;
    tmp_msg_0.radius = 0.6362103671404119;
    msg.reference.set(tmp_msg_0);
    msg.state = 36U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.24330399717766416);
    msg.setSource(30250U);
    msg.setSourceEntity(171U);
    msg.setDestination(27513U);
    msg.setDestinationEntity(56U);
    msg.control_src = 45247U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 223U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5503818920919348;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5389015988983741;
    tmp_tmp_msg_0_1.z_units = 141U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.019665110665940344;
    tmp_msg_0.lon = 0.17028107211476184;
    tmp_msg_0.radius = 0.24154598985542652;
    msg.reference.set(tmp_msg_0);
    msg.state = 117U;
    msg.proximity = 250U;

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
    msg.setTimeStamp(0.32890164603634453);
    msg.setSource(42231U);
    msg.setSourceEntity(34U);
    msg.setDestination(63763U);
    msg.setDestinationEntity(113U);
    msg.ax_cmd = 0.5559407922273064;
    msg.ay_cmd = 0.3106736268774162;
    msg.az_cmd = 0.01878208252668978;
    msg.ax_des = 0.49901062104355176;
    msg.ay_des = 0.13395241153246717;
    msg.az_des = 0.6808647831662802;
    msg.virt_err_x = 0.3074808043601923;
    msg.virt_err_y = 0.06631976238320425;
    msg.virt_err_z = 0.15614596089290467;
    msg.surf_fdbk_x = 0.4166867352807826;
    msg.surf_fdbk_y = 0.9649828804043203;
    msg.surf_fdbk_z = 0.7394571571553212;
    msg.surf_unkn_x = 0.32511689167370783;
    msg.surf_unkn_y = 0.9507165895287157;
    msg.surf_unkn_z = 0.32796593850771816;
    msg.ss_x = 0.243404646218505;
    msg.ss_y = 0.856766770977842;
    msg.ss_z = 0.4975285550938606;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AMPJKWWGIOEAHKUZCEUOQS");
    tmp_msg_0.dist = 0.3915427488689758;
    tmp_msg_0.err = 0.8234702041303239;
    tmp_msg_0.ctrl_imp = 0.044483093027725795;
    tmp_msg_0.rel_dir_x = 0.4943865493448971;
    tmp_msg_0.rel_dir_y = 0.48443312030354746;
    tmp_msg_0.rel_dir_z = 0.560094223716793;
    tmp_msg_0.err_x = 0.14086186775486642;
    tmp_msg_0.err_y = 0.5103875803802419;
    tmp_msg_0.err_z = 0.7973022378917884;
    tmp_msg_0.rf_err_x = 0.923853515871106;
    tmp_msg_0.rf_err_y = 0.018895502188927105;
    tmp_msg_0.rf_err_z = 0.8545179272349613;
    tmp_msg_0.rf_err_vx = 0.8976907728081153;
    tmp_msg_0.rf_err_vy = 0.31333975729654673;
    tmp_msg_0.rf_err_vz = 0.9410003905335002;
    tmp_msg_0.ss_x = 0.18173923179280682;
    tmp_msg_0.ss_y = 0.4375209607769379;
    tmp_msg_0.ss_z = 0.9595816043723701;
    tmp_msg_0.virt_err_x = 0.588722583595688;
    tmp_msg_0.virt_err_y = 0.37512969425159337;
    tmp_msg_0.virt_err_z = 0.0067001454920996295;
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
    msg.setTimeStamp(0.18548134100369884);
    msg.setSource(35472U);
    msg.setSourceEntity(56U);
    msg.setDestination(60407U);
    msg.setDestinationEntity(77U);
    msg.ax_cmd = 0.8412198792829356;
    msg.ay_cmd = 0.9245593022533253;
    msg.az_cmd = 0.02118670635430364;
    msg.ax_des = 0.10417337108946767;
    msg.ay_des = 0.9221975765180348;
    msg.az_des = 0.946173311284188;
    msg.virt_err_x = 0.8085959302569862;
    msg.virt_err_y = 0.1568247625376249;
    msg.virt_err_z = 0.7678209551973328;
    msg.surf_fdbk_x = 0.75294562613584;
    msg.surf_fdbk_y = 0.531538954721078;
    msg.surf_fdbk_z = 0.565533921481891;
    msg.surf_unkn_x = 0.26659519311649893;
    msg.surf_unkn_y = 0.6855389448749657;
    msg.surf_unkn_z = 0.6429712541234593;
    msg.ss_x = 0.36428461627631115;
    msg.ss_y = 0.8674198267610164;
    msg.ss_z = 0.7409486478584137;

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
    msg.setTimeStamp(0.2616135283303229);
    msg.setSource(17320U);
    msg.setSourceEntity(27U);
    msg.setDestination(17403U);
    msg.setDestinationEntity(45U);
    msg.ax_cmd = 0.3811954469058153;
    msg.ay_cmd = 0.8222607754879189;
    msg.az_cmd = 0.5411403780648116;
    msg.ax_des = 0.5759222569372126;
    msg.ay_des = 0.8666065268208488;
    msg.az_des = 0.23387956423674894;
    msg.virt_err_x = 0.41465130455635735;
    msg.virt_err_y = 0.042060424424435694;
    msg.virt_err_z = 0.7247736734932896;
    msg.surf_fdbk_x = 0.05532141755594522;
    msg.surf_fdbk_y = 0.9393402932127722;
    msg.surf_fdbk_z = 0.7269010493387923;
    msg.surf_unkn_x = 0.9066858673900968;
    msg.surf_unkn_y = 0.770593426610689;
    msg.surf_unkn_z = 0.7020655023766956;
    msg.ss_x = 0.08056448134763128;
    msg.ss_y = 0.9850061497327339;
    msg.ss_z = 0.5794265539646264;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IRZMGMNQVBQCJCAPOOXLHLWSCPEQFRVYYNRODNQVDFOKNMLSBWTUNWZQPTZZXKYMXBGLUSLEEHRPLQGQFYNXLX");
    tmp_msg_0.dist = 0.2848585081067563;
    tmp_msg_0.err = 0.28558969443264903;
    tmp_msg_0.ctrl_imp = 0.21652272185615207;
    tmp_msg_0.rel_dir_x = 0.7367436105850136;
    tmp_msg_0.rel_dir_y = 0.490701365091767;
    tmp_msg_0.rel_dir_z = 0.3478097909353276;
    tmp_msg_0.err_x = 0.49520567557436046;
    tmp_msg_0.err_y = 0.3356404900588287;
    tmp_msg_0.err_z = 0.3195789094946955;
    tmp_msg_0.rf_err_x = 0.5376436288573222;
    tmp_msg_0.rf_err_y = 0.4586941580769387;
    tmp_msg_0.rf_err_z = 0.027407257026769605;
    tmp_msg_0.rf_err_vx = 0.30252161592185567;
    tmp_msg_0.rf_err_vy = 0.8272992847964322;
    tmp_msg_0.rf_err_vz = 0.6082196129311073;
    tmp_msg_0.ss_x = 0.976776617942008;
    tmp_msg_0.ss_y = 0.9430976370715681;
    tmp_msg_0.ss_z = 0.745084202924522;
    tmp_msg_0.virt_err_x = 0.9003695113482639;
    tmp_msg_0.virt_err_y = 0.3737600959028874;
    tmp_msg_0.virt_err_z = 0.9421844454082264;
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
    msg.setTimeStamp(0.9157695276946289);
    msg.setSource(3408U);
    msg.setSourceEntity(95U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(89U);
    msg.s_id.assign("BYBYMUAFAMMVHAZODDZNUIOBJUKKDWDATGSXJGJMLANSUMYVPXQSUBOQMSTTBNRXSPTSYZOTEUNEPOIQHNDELLWCTNDQSZKPIKWZQGWZXGRGYTILQKUBTQJJKCRACJIVIALXYGIXFMWLCAFRFZMHLCYPIXFNEVRWEOODALJFXVVPSSEIAWDRX");
    msg.dist = 0.5906477631081483;
    msg.err = 0.6874741431774278;
    msg.ctrl_imp = 0.9316618603787338;
    msg.rel_dir_x = 0.1105838371437845;
    msg.rel_dir_y = 0.9568666482961933;
    msg.rel_dir_z = 0.3619304497768334;
    msg.err_x = 0.5338760072385836;
    msg.err_y = 0.6024864448530366;
    msg.err_z = 0.9034692513252376;
    msg.rf_err_x = 0.6159144932162866;
    msg.rf_err_y = 0.6479888478100753;
    msg.rf_err_z = 0.5717734447459594;
    msg.rf_err_vx = 0.40606764559022734;
    msg.rf_err_vy = 0.4061014740156237;
    msg.rf_err_vz = 0.8432108358600902;
    msg.ss_x = 0.4652522461522336;
    msg.ss_y = 0.24860259651530936;
    msg.ss_z = 0.6843616901660389;
    msg.virt_err_x = 0.7414596645978065;
    msg.virt_err_y = 0.016472617164265846;
    msg.virt_err_z = 0.19585204681675217;

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
    msg.setTimeStamp(0.169711476146144);
    msg.setSource(1423U);
    msg.setSourceEntity(129U);
    msg.setDestination(40914U);
    msg.setDestinationEntity(47U);
    msg.s_id.assign("HSFUKBSIHYTSRZDGQMNNDYHDGAEDZIATUVKGINJWNRIJOVSFVBFWKQHQOBNWGYXOSNFNSGJEFTYWSXDUZJFTXKBRQLHGPRMLHLPKBWDEEKZJAPAMODYHJAWSHJCTZIQQQCBYOKULVMJXVCMGERXNIIL");
    msg.dist = 0.12469498253650069;
    msg.err = 0.8920116236034497;
    msg.ctrl_imp = 0.40099159286894415;
    msg.rel_dir_x = 0.8480767296038156;
    msg.rel_dir_y = 0.1540680591739223;
    msg.rel_dir_z = 0.03721132850610631;
    msg.err_x = 0.1855215015024425;
    msg.err_y = 0.2435298727306977;
    msg.err_z = 0.2258972220605926;
    msg.rf_err_x = 0.6779176758189002;
    msg.rf_err_y = 0.016562250707655046;
    msg.rf_err_z = 0.3287841880040221;
    msg.rf_err_vx = 0.3470420643033978;
    msg.rf_err_vy = 0.21534552472204394;
    msg.rf_err_vz = 0.025683942042025065;
    msg.ss_x = 0.7736778645010791;
    msg.ss_y = 0.05973685147681651;
    msg.ss_z = 0.5243971985041261;
    msg.virt_err_x = 0.11504192043793982;
    msg.virt_err_y = 0.7782380290172914;
    msg.virt_err_z = 0.16705520728797385;

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
    msg.setTimeStamp(0.7342047444923336);
    msg.setSource(21634U);
    msg.setSourceEntity(43U);
    msg.setDestination(57795U);
    msg.setDestinationEntity(254U);
    msg.s_id.assign("OLDLJTEXCDGUJKPHQYNHLNUTDOAGJAPUIWHINJFCSTKGYLBOMDAPSFTCMAYNSUVUQYFOOTNWIWPMIVQEYFFITRGLICNMCEROWPWBRZYFVFBEEEZSKBDCQIHRAOHSQEDRBHGDWDIRHLDEFYXVYNZAKIXBQUZCQGZOXBYPGULWJWKAWOLTKZQERLKXH");
    msg.dist = 0.6549330731013426;
    msg.err = 0.6000968684471951;
    msg.ctrl_imp = 0.5082854770896078;
    msg.rel_dir_x = 0.1497967987349622;
    msg.rel_dir_y = 0.6819430492986531;
    msg.rel_dir_z = 0.600675653570709;
    msg.err_x = 0.02474560428271777;
    msg.err_y = 0.939425144987625;
    msg.err_z = 0.9804372191912243;
    msg.rf_err_x = 0.14052530782395234;
    msg.rf_err_y = 0.2042318276307119;
    msg.rf_err_z = 0.4610205627774847;
    msg.rf_err_vx = 0.29716131652349975;
    msg.rf_err_vy = 0.17405772808332765;
    msg.rf_err_vz = 0.520315748249135;
    msg.ss_x = 0.701655361551097;
    msg.ss_y = 0.2941606245132333;
    msg.ss_z = 0.4087722617654005;
    msg.virt_err_x = 0.45897965813885855;
    msg.virt_err_y = 0.43985552682749596;
    msg.virt_err_z = 0.8935980251937689;

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
    msg.setTimeStamp(0.1863490688939924);
    msg.setSource(26658U);
    msg.setSourceEntity(161U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(149U);
    msg.timeout = 7200U;
    msg.rpm = 0.42805922771200444;
    msg.direction = 118U;
    msg.custom.assign("CMYGOGKACCCMZJPYSJFEBNZWWWYBSINAKVMZVRDCSQITOUHLFXOSNWFNHQDPNHOJAEKBZLBCQFRDGZKOFMWBKSQOFNPAYLCDTHTCEVGNWXRIHYMKOKXPFIDQXSJRPHCPHXQNKLQUMBHEWGLCVERLPAYMREEAUSVHUQOKUXXPIZUETWJMBLRJGVVTQWBEOTLHFJZTIMZQTULPBDONYXTGJPVARRFRMTAIWDYSBVFDVDGLG");

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
    msg.setTimeStamp(0.4781703984974256);
    msg.setSource(27906U);
    msg.setSourceEntity(149U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(148U);
    msg.timeout = 35140U;
    msg.rpm = 0.6219854951226104;
    msg.direction = 139U;
    msg.custom.assign("QQAIHHEHPVZNUDOVCXYDOZJKOTWSJCLYNVNLWLMTMAXBBQFW");

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
    msg.setTimeStamp(0.2041834091292567);
    msg.setSource(31941U);
    msg.setSourceEntity(114U);
    msg.setDestination(5652U);
    msg.setDestinationEntity(112U);
    msg.timeout = 8059U;
    msg.rpm = 0.826467768155234;
    msg.direction = 178U;
    msg.custom.assign("PCSGWOKPQVDBIZYVMYDDJKOGOWDSUOKPS");

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
    msg.setTimeStamp(0.94076251179317);
    msg.setSource(17418U);
    msg.setSourceEntity(53U);
    msg.setDestination(5520U);
    msg.setDestinationEntity(209U);
    msg.formation_name.assign("IWAXKXEWVALYSMTTWVYFNSCHLZSQVBCAVSDISFMBCPLSWZFCGIKJJBMRZKUPUQVZDOGZWWCNZDESCGOOVRURAMYXUHZQTQDKNQXYYEROLTIXDNEALZYPMMDJQNXEVBMVPTIYDLQAUHPGINHEJDWFVRCQCBKTFTBH");
    msg.type = 145U;
    msg.op = 139U;
    msg.group_name.assign("VCIMJTYUBIDULSIBWNRGVJSUMJIBKTPIEAXANKAKIZMDIGRFZDRDJMTLXZPEAWHSQJFUTXEAWYWOXUFQOZVHHCREZHQQLWOEIGYQERQKQSNYALCMFGUDNKSTZFLIWDYNYWCJKZKHBSHPBGLULBHMIYTCVMQHVOVAQVBYCEDRAFCSUUFVBMFPONPPFZPYJCNGZKMVPXFXUQJLB");
    msg.plan_id.assign("IPOIOADHZFAHKRSZFNCPTTRLSUPQUTXSRGGBXGJDCRAYMEYZVACJKXWOKNESUPZLPRTQOWBRIVQUMHRMBXBEHE");
    msg.description.assign("SSLKQLZRGCPFAYJSLHBBHLSMHFDHNMYQNOCEOCUYDEYNJUSWPRTZLAEJFHRQIATIVVFUJAPJOJUVDGEBBLSUZXZ");
    msg.reference_frame = 213U;
    msg.leader_bank_lim = 0.8522915426362934;
    msg.leader_speed_min = 0.2522043219632474;
    msg.leader_speed_max = 0.3060882559687996;
    msg.leader_alt_min = 0.4337856812182169;
    msg.leader_alt_max = 0.9862429102477568;
    msg.pos_sim_err_lim = 0.5379193937799306;
    msg.pos_sim_err_wrn = 0.9590765606845604;
    msg.pos_sim_err_timeout = 17637U;
    msg.converg_max = 0.28388703286862527;
    msg.converg_timeout = 37244U;
    msg.comms_timeout = 51597U;
    msg.turb_lim = 0.3302074489264947;
    msg.custom.assign("JFPMLUDEWMICHUDBXJQ");

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
    msg.setTimeStamp(0.06925910406430102);
    msg.setSource(23128U);
    msg.setSourceEntity(161U);
    msg.setDestination(51051U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("TPGBUHIKFRBNSDNNTCLKVWWHGRSSTJUKVBFTOMGSTPXWNHNEIDKZXHIPWZAXUMAVBGECXRUQJVJMDDMMICNNXFYPKRTYCZDJOGJOSQEBWRWRMYWQQFUSITGYYBXREQZBRUDRSKMHOTAECGLWPQZODUZYYMLAJVPYODVHGWZJJWIAHRLJFAHUBFFIHLDBJOZQCFPAANBSXONKMTIELCQV");
    msg.type = 15U;
    msg.op = 30U;
    msg.group_name.assign("TASXIJPUDICISRJKPQZESADXBEVXROCCIQNXKWBGWYBZLXFVGIFZKLPMHUJBNEIBRQQZSFBAMOLTLWTMJTCXMHEJZKHVEZUYRJHCEITKSSVZFNSJOXDRZNMQVYTAOFNIHDGBBXVCVXFPFZNCDBLNUPREPHEWKDOILPAQDHWUOGVUGCMLPUNHLGLSEAAPSYCYJMAMYAUYHIUFGUOLMCHKKYOEWRVXFOKQRDYZGVMBPRTDNJQTF");
    msg.plan_id.assign("JDEUZRWPELWTUATZOJMKVNKAGUIROPRHHBEVYAAPLJRURDNISWHNCRYFFVZBHJNQSILOJYXHRQSFCLULHIVJXZXYQJODQUSXKSOZPGPOTEOTUYGFSLOBSVEDGUWXBFTRNDELYBPIICCNFGBSKEXBEZWMFPOTCMGENLWJ");
    msg.description.assign("MMZIOCOUNZWEPTSYTRQQFYXEEYTKPVLOMIGBIADACSCHEWPDUJLOXEGZOVPVVAZBGMECFJWHVFMUXHINQWJHVGYYNZPWZMACPNGHNUFETJPSTOCMPJDQUXXCBWNLDEPGHOZDBURYIUKXKXRPJRSRJLGKRRJCFSKZVH");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3066U;
    tmp_msg_0.off_x = 0.21146919033955047;
    tmp_msg_0.off_y = 0.40263142385471873;
    tmp_msg_0.off_z = 0.895426602287456;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.08078200225383148;
    msg.leader_speed_min = 0.21529377154912843;
    msg.leader_speed_max = 0.27022996013272127;
    msg.leader_alt_min = 0.5701659081225238;
    msg.leader_alt_max = 0.4870747958796039;
    msg.pos_sim_err_lim = 0.4776665018979579;
    msg.pos_sim_err_wrn = 0.8389852439353123;
    msg.pos_sim_err_timeout = 43413U;
    msg.converg_max = 0.39246287931571355;
    msg.converg_timeout = 25036U;
    msg.comms_timeout = 20669U;
    msg.turb_lim = 0.6042341886888052;
    msg.custom.assign("NHJFSGFDQVIOBSUSBZYOXGOMKEOIRTTXZKZGVIVZTEZBHJULXTZXWXMXGMCGYEDGHWWRALODAPNLEWUBSMNJBGJQYMWWGEVHNTBFTHALVTOOPIWHBPCW");

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
    msg.setTimeStamp(0.5880017646652547);
    msg.setSource(65283U);
    msg.setSourceEntity(185U);
    msg.setDestination(29713U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("MLTEWYYXMFPATKYRQVVLDQIHSLPZIHHBDJNPVBIKAWNIWEQUZUXBMWZDYWGYKCRPNXZEENGYCOC");
    msg.type = 51U;
    msg.op = 136U;
    msg.group_name.assign("HIDYGDAFNGVVWFMSZMUOPVAZBRHTLXUKZAMRYXCRIFVPFHS");
    msg.plan_id.assign("GBOADABIEY");
    msg.description.assign("JKVRZHHASBRTXKNRCGFQSQOBSXYGUJGSILMFXYKPRSBYYDVENENKVIZMDDCPBMXKNWHDHSFEHIWYLYPWJWIUVRAUECVFJBZCQXOLFVKXPJJVQPQDCFMTLPDIZLNXULRUEKWBIWAEVSNGWQCAYMCMORQZTCUBJLJHYRFFGS");
    msg.reference_frame = 41U;
    msg.leader_bank_lim = 0.4235229670583801;
    msg.leader_speed_min = 0.5555625497864476;
    msg.leader_speed_max = 0.6653652082671698;
    msg.leader_alt_min = 0.6010068199931388;
    msg.leader_alt_max = 0.1283032536979194;
    msg.pos_sim_err_lim = 0.47005164278536793;
    msg.pos_sim_err_wrn = 0.09162308976940792;
    msg.pos_sim_err_timeout = 25774U;
    msg.converg_max = 0.9106500949280819;
    msg.converg_timeout = 56178U;
    msg.comms_timeout = 63789U;
    msg.turb_lim = 0.2122180163812305;
    msg.custom.assign("SEWYYUDNQHSPEXSFDOZHGNFOGSPVAOJV");

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
    msg.setTimeStamp(0.8011871672742902);
    msg.setSource(28632U);
    msg.setSourceEntity(171U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(218U);
    msg.timeout = 33692U;
    msg.lat = 0.8815330703824403;
    msg.lon = 0.9097644528938912;
    msg.z = 0.5128433277664893;
    msg.z_units = 174U;
    msg.speed = 0.592977629339328;
    msg.speed_units = 105U;
    msg.custom.assign("OJPGEECSRYKJSFMNQSUHJKYYHLAFZBGUTNYTVUQRJXTPRULLFZNHEQIQCIXDOVGWDOXCNAIYBLVKCKPMICUAXRYXIWPQVSGYEWAYDXBIAVRBWZORTGWCMDOTJCKAPAJAPTQLISHWKQVHLIZSRVFFBQNSNCDBMUGIKFXGKMMFGTOUVFMSCEENLOPQOETUHBWJHHVIZRVNYZQBJCHSJMGXKMLXPUWDFZEDODGMETJDXBLETHPKZOUPRANWRYA");

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
    msg.setTimeStamp(0.02020111075145692);
    msg.setSource(26712U);
    msg.setSourceEntity(127U);
    msg.setDestination(7088U);
    msg.setDestinationEntity(148U);
    msg.timeout = 36047U;
    msg.lat = 0.48633141601306207;
    msg.lon = 0.16169825298708018;
    msg.z = 0.8737935421910428;
    msg.z_units = 74U;
    msg.speed = 0.6801375650517;
    msg.speed_units = 172U;
    msg.custom.assign("HZDKOAIOHNOOCKDUPQAWULVQYPQISIDFFSOERYZBBJVHHLXPNNXGVXCYGQCBEXLRUOTFFUPJYDAEPXHYRUSZIEKIKSQMVUXEAZLJFHMMCUGBLMETITIQRMLSWTUZRITFVWCVXAJWTEEMYLSYPGYBNJZHHNGSKDBPOFMJZRDWKKHDTGGNFCAAQJVICXZWOYMIKORSWXTATAHVGSRPQQUMPMJRCNWPK");

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
    msg.setTimeStamp(0.5895525981658895);
    msg.setSource(5596U);
    msg.setSourceEntity(59U);
    msg.setDestination(17130U);
    msg.setDestinationEntity(93U);
    msg.timeout = 53846U;
    msg.lat = 0.8182371602852196;
    msg.lon = 0.3753339588265767;
    msg.z = 0.5621720293901953;
    msg.z_units = 113U;
    msg.speed = 0.8017085233895268;
    msg.speed_units = 33U;
    msg.custom.assign("ZGVAUTINURRYOMUDQTFZMBXMJUVRPDPLVOFJJCPDEVXARBQHPPZFESSIQQEZCDGAHHEWFBNPOYMIXZKNZJU");

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
    msg.setTimeStamp(0.6044323505339253);
    msg.setSource(65239U);
    msg.setSourceEntity(157U);
    msg.setDestination(41616U);
    msg.setDestinationEntity(75U);
    msg.timeout = 15976U;
    msg.lat = 0.651800581971372;
    msg.lon = 0.5026079539625715;
    msg.z = 0.20026325566325354;
    msg.z_units = 204U;
    msg.speed = 0.6791549404300886;
    msg.speed_units = 162U;
    msg.custom.assign("IGVRHFYGPUUPJT");

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
    msg.setTimeStamp(0.3360703732414503);
    msg.setSource(46499U);
    msg.setSourceEntity(178U);
    msg.setDestination(4267U);
    msg.setDestinationEntity(150U);
    msg.timeout = 30624U;
    msg.lat = 0.10701358541128347;
    msg.lon = 0.8040194046454764;
    msg.z = 0.6521943631724958;
    msg.z_units = 249U;
    msg.speed = 0.7713003910449155;
    msg.speed_units = 249U;
    msg.custom.assign("FAVSVYJFBEROOVIXEMUXHQSUTNSWMDCHGTWUGCLPWCZTIKLXQXMQBLQRDYZFTSYUTVNOJUVHNKNFGVXERCIGPDKIAOXNXUHFZBVGZPHBEEQOAZBCNBIQDJRMYRWRPXYVBFJIGYIDIJHF");

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
    msg.setTimeStamp(0.07486948715404873);
    msg.setSource(56834U);
    msg.setSourceEntity(126U);
    msg.setDestination(33781U);
    msg.setDestinationEntity(15U);
    msg.timeout = 1341U;
    msg.lat = 0.20267875595046514;
    msg.lon = 0.6664602918834467;
    msg.z = 0.5082464935510457;
    msg.z_units = 203U;
    msg.speed = 0.011482631846015723;
    msg.speed_units = 53U;
    msg.custom.assign("YUETYADLSWUMBLFHWIITYNCMBRCQJKCRTPXHPRUUJOJGAOGMXFO");

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
    msg.setTimeStamp(0.39916310967166735);
    msg.setSource(64999U);
    msg.setSourceEntity(207U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(180U);
    msg.arrival_time = 0.8669920613279942;
    msg.lat = 0.47658992205164286;
    msg.lon = 0.045839767244387875;
    msg.z = 0.8302695434171243;
    msg.z_units = 64U;
    msg.travel_z = 0.9982127039203792;
    msg.travel_z_units = 237U;
    msg.delayed = 24U;

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
    msg.setTimeStamp(0.831229628952484);
    msg.setSource(14923U);
    msg.setSourceEntity(212U);
    msg.setDestination(54166U);
    msg.setDestinationEntity(243U);
    msg.arrival_time = 0.15691119106078955;
    msg.lat = 0.6802411478439229;
    msg.lon = 0.009393394719172665;
    msg.z = 0.010675357000985541;
    msg.z_units = 145U;
    msg.travel_z = 0.6691919847758336;
    msg.travel_z_units = 1U;
    msg.delayed = 115U;

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
    msg.setTimeStamp(0.714748747032216);
    msg.setSource(4020U);
    msg.setSourceEntity(108U);
    msg.setDestination(25122U);
    msg.setDestinationEntity(245U);
    msg.arrival_time = 0.18286663799867942;
    msg.lat = 0.8592060533379711;
    msg.lon = 0.3242276468694284;
    msg.z = 0.856388324642236;
    msg.z_units = 243U;
    msg.travel_z = 0.0775524105746972;
    msg.travel_z_units = 159U;
    msg.delayed = 239U;

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
    msg.setTimeStamp(0.016349703021480866);
    msg.setSource(34802U);
    msg.setSourceEntity(237U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.6131470473693611;
    msg.lon = 0.10720755850554342;
    msg.z = 0.1238897525465007;
    msg.z_units = 13U;
    msg.speed = 0.7711934979728644;
    msg.speed_units = 8U;
    msg.bearing = 0.5253910308818078;
    msg.cross_angle = 0.023355191980127032;
    msg.width = 0.4691864111124572;
    msg.length = 0.20676464581239318;
    msg.coff = 238U;
    msg.angaperture = 0.041649410324606895;
    msg.range = 26371U;
    msg.overlap = 36U;
    msg.flags = 20U;
    msg.custom.assign("EJKCERSJOPVMIBQVUCRBBJMRXCMJOTXWUYPAOUICGCWKKXJWVWUIDMFLGVFNLZOUDAQEETQQFEECKVOBPYLMZWMNAIQRGAFGTTYVRWCKOOYF");

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
    msg.setTimeStamp(0.8845828650376311);
    msg.setSource(12712U);
    msg.setSourceEntity(123U);
    msg.setDestination(7692U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.6426322954087726;
    msg.lon = 0.09837805956434265;
    msg.z = 0.9307734352445632;
    msg.z_units = 93U;
    msg.speed = 0.894348647063062;
    msg.speed_units = 45U;
    msg.bearing = 0.8916689252459029;
    msg.cross_angle = 0.5046383062240255;
    msg.width = 0.0427190942538519;
    msg.length = 0.2825606439981706;
    msg.coff = 142U;
    msg.angaperture = 0.8678174248956179;
    msg.range = 26083U;
    msg.overlap = 94U;
    msg.flags = 80U;
    msg.custom.assign("PNQJUEDRCRTRZPBWZNMEUIYXOGOMUSOCZVGFEBABXIGZDCERRKAODEYLYNNGZZKMVDMFHPTTVREQKDAAVBTIUFQIKAQHKECLCELFPKQBHGPXITSKUZTUFFTJDLEIYNLOWQWIHZWHKQLJSSXDAAUCGICPTIH");

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
    msg.setTimeStamp(0.5752473585083568);
    msg.setSource(5469U);
    msg.setSourceEntity(223U);
    msg.setDestination(64612U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.4306428980958158;
    msg.lon = 0.41534939141543836;
    msg.z = 0.46689270264816474;
    msg.z_units = 216U;
    msg.speed = 0.08589422377989997;
    msg.speed_units = 75U;
    msg.bearing = 0.8387924455422189;
    msg.cross_angle = 0.3378945255199255;
    msg.width = 0.7595018721510344;
    msg.length = 0.002033374323839432;
    msg.coff = 133U;
    msg.angaperture = 0.48576913242126696;
    msg.range = 30373U;
    msg.overlap = 253U;
    msg.flags = 52U;
    msg.custom.assign("APKAALURTJJCTGESSFTHHKVMXOHMHNLZKMYVIFPBBIDIJXPLIEMGPQBIOGWNAHJRJXTODFEYPNJDNOFVKLIZFWOHZRBXRSWWEMZLRIMNEGCCTYQKUXUPHXPDGTNXWTUQCMYLBBUGNPQKNLSDJRYFQMFDWMCUCCYZAGYKNTVVACBELTK");

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
    msg.setTimeStamp(0.8386987422294342);
    msg.setSource(65042U);
    msg.setSourceEntity(245U);
    msg.setDestination(21089U);
    msg.setDestinationEntity(169U);
    msg.timeout = 34885U;
    msg.lat = 0.6164592087280217;
    msg.lon = 0.19121134484176217;
    msg.z = 0.08949431853203837;
    msg.z_units = 193U;
    msg.speed = 0.8430889819305344;
    msg.speed_units = 152U;
    msg.syringe0 = 73U;
    msg.syringe1 = 181U;
    msg.syringe2 = 178U;
    msg.custom.assign("BQLLSWTXMTTYHWQUFNNAMPDGAJKKGHOQAFQYQMDOEEYSTWZTFZCOCWUEPIQZRDZTYSPIZHMCBDCQVKZKNGWIJPCPJVEOCIVSWAUFXOVNYYFJNQTZPVYRHHESKENLVCUDTXBHRNJXMSEBIDOMRYASZAGVJFZEVBCEXSGLBOMLMXUQRYJAFADCLKWJONIAHTBPGSUWXLFRUFRDIUGKRJEHQHORDUZHFJCNXKTO");

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
    msg.setTimeStamp(0.4858995481229239);
    msg.setSource(64103U);
    msg.setSourceEntity(31U);
    msg.setDestination(35647U);
    msg.setDestinationEntity(137U);
    msg.timeout = 47170U;
    msg.lat = 0.14135335446278963;
    msg.lon = 0.03000681093870583;
    msg.z = 0.42198453186231066;
    msg.z_units = 185U;
    msg.speed = 0.30890673953954995;
    msg.speed_units = 214U;
    msg.syringe0 = 98U;
    msg.syringe1 = 129U;
    msg.syringe2 = 205U;
    msg.custom.assign("PVIKWKLHXYMZLTTKXBGVRPZXOHRENDTOJYTCICVQQVUUVFPLGUGTOWELAGNZJDJXJFTXMQMZMDHCLAHFFREALQSJGEEAMGBMOUPQYBDKWKQFWMIUSARXVJSRKLEDDSXCDIGXWYWBGVSNKHWEYBQJNNFIJCUWNKKBNUQPAIZJDACMMOTBCBWVPADGOXHVBEWFLFMIRSITTIYZPZPZSRURJPARUYXEDS");

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
    msg.setTimeStamp(0.6460838267576463);
    msg.setSource(41978U);
    msg.setSourceEntity(24U);
    msg.setDestination(21556U);
    msg.setDestinationEntity(198U);
    msg.timeout = 7973U;
    msg.lat = 0.8066755902883908;
    msg.lon = 0.31729235864193006;
    msg.z = 0.7789907613538105;
    msg.z_units = 112U;
    msg.speed = 0.05366779977991176;
    msg.speed_units = 177U;
    msg.syringe0 = 246U;
    msg.syringe1 = 34U;
    msg.syringe2 = 45U;
    msg.custom.assign("TTULWARPXYPQGYDTJTYTWVLZB");

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
    msg.setTimeStamp(0.023852207582025775);
    msg.setSource(8271U);
    msg.setSourceEntity(216U);
    msg.setDestination(3583U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.3180584893189279);
    msg.setSource(23757U);
    msg.setSourceEntity(219U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(217U);

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
    msg.setTimeStamp(0.4982394634465759);
    msg.setSource(58085U);
    msg.setSourceEntity(127U);
    msg.setDestination(433U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.7580216445422204);
    msg.setSource(38866U);
    msg.setSourceEntity(154U);
    msg.setDestination(55502U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.8241826188924197;
    msg.lon = 0.2995489047270371;
    msg.z = 0.03801368177447895;
    msg.z_units = 133U;
    msg.speed = 0.19648106613341354;
    msg.speed_units = 78U;
    msg.takeoff_pitch = 0.8582761088265342;
    msg.custom.assign("DSOEHJLOQOSLUIASUYWABLKTHJOLMYVDFHASWMOYQPXKCQOBJVASBMQORLAWXXZEFVVPZJGQUGNPRUUAOQZCRWTMLFJCUKVXUCRYMSTMEJVZRBTKBGESKWEICIFHHXXRPBXCDQSVGYFBBEDATPTHVMHGFCKXDXNKHQJUNYZLMSXICBLDDUZRGOWINYJBPPTQSWVIZTFNNVPJNKEFHAGDTRGENIMEZKPWZPRCNQYIGWAELHDYZGWFLAIDTN");

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
    msg.setTimeStamp(0.9832442206931791);
    msg.setSource(64902U);
    msg.setSourceEntity(119U);
    msg.setDestination(6079U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6706922992445573;
    msg.lon = 0.13959609354638702;
    msg.z = 0.5019911983893424;
    msg.z_units = 26U;
    msg.speed = 0.658839466289252;
    msg.speed_units = 64U;
    msg.takeoff_pitch = 0.38988177483940367;
    msg.custom.assign("FYNXJVRPCJHBMBTGEEDJSCAXZIUAHWEDRSMQMPVPDPXKV");

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
    msg.setTimeStamp(0.41048785213334615);
    msg.setSource(64063U);
    msg.setSourceEntity(104U);
    msg.setDestination(8271U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.20425113109839677;
    msg.lon = 0.05627534976504667;
    msg.z = 0.5443371184344747;
    msg.z_units = 219U;
    msg.speed = 0.37642720680466424;
    msg.speed_units = 176U;
    msg.takeoff_pitch = 0.2269923745953495;
    msg.custom.assign("RPJDDCTJHISKCGGMBKITAKHBRXNUCABNJPYNZXMFSJZUNTSNSYAWADHNUCXYINTKEIHQKAMJUFOEEQFUJPGCIVCGXWZZQFGKIYDDBBJOAORRGFBXKQXWXBFQJUEDJLLMQWWYPWQLPKQUWCVNGZJWTEHEBMVSZROCLHADNSGLVOEBNBLVPYOEDTRMORAOIPOCVUQFVFMR");

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
    msg.setTimeStamp(0.03367549675300163);
    msg.setSource(20079U);
    msg.setSourceEntity(54U);
    msg.setDestination(39325U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.21295898096198496;
    msg.lon = 0.3981392303276742;
    msg.z = 0.23099719676798136;
    msg.z_units = 233U;
    msg.speed = 0.28262164502037324;
    msg.speed_units = 170U;
    msg.abort_z = 0.8019517152985276;
    msg.bearing = 0.07716807925402147;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.7476050433384966;
    msg.custom.assign("CSXTCKPEUDXMXWNLHEWWTAMEXESXEGCCZYBTFIOMWPSHGVVZDZSFYDQSRNUTQUQLDJNUHFTZOHAFHNJKLOPWVUJHNSPMWNGLZOBWQIMJFZTTQOKAEIRAGTJYRICCXLYHYY");

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
    msg.setTimeStamp(0.28468129900069905);
    msg.setSource(53203U);
    msg.setSourceEntity(179U);
    msg.setDestination(8975U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.14503235906788114;
    msg.lon = 0.10334507880040422;
    msg.z = 0.5641357089077723;
    msg.z_units = 240U;
    msg.speed = 0.2316964767437819;
    msg.speed_units = 85U;
    msg.abort_z = 0.7323706732263632;
    msg.bearing = 0.8239760505611756;
    msg.glide_slope = 184U;
    msg.glide_slope_alt = 0.2720082457533495;
    msg.custom.assign("TDFRLZUWEIVQGTPSHLNQPKVXOJEYEUAOZIFJLYIXRCLKHQUYWBKEJQFXZYNEMWZEKARVLBXEPCKUYB");

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
    msg.setTimeStamp(0.9734224304848411);
    msg.setSource(19066U);
    msg.setSourceEntity(164U);
    msg.setDestination(61253U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.1172251415542207;
    msg.lon = 0.31510283266467287;
    msg.z = 0.9949764474465187;
    msg.z_units = 131U;
    msg.speed = 0.5439021710413638;
    msg.speed_units = 57U;
    msg.abort_z = 0.4611781096851413;
    msg.bearing = 0.749329324826477;
    msg.glide_slope = 238U;
    msg.glide_slope_alt = 0.24958127092061066;
    msg.custom.assign("GWACQXBQKFVSXGVLXZLCWELQJBTPFIZHNWXYZUIGQHHCTNPQIMRFWDXWWKHBXXHVHKUNTOOKCUFJKJEKXORAZMOYVFJYKTWQYTUVIOKZYSADUSEUDN");

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
    msg.setTimeStamp(0.8880470420171308);
    msg.setSource(42937U);
    msg.setSourceEntity(229U);
    msg.setDestination(4070U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.7959363076834811;
    msg.lon = 0.6500300950053147;
    msg.speed = 0.41854107006652885;
    msg.speed_units = 162U;
    msg.limits = 81U;
    msg.max_depth = 0.8471445360571347;
    msg.min_alt = 0.5772599785330759;
    msg.time_limit = 0.6917948967554107;
    msg.controller.assign("HXPAFXEDJYKINFUIMHHTOYMTQCNGSNNAEZBXNIKPQNLFPAQSROXFRHIGKHKOELXTRYFRDTUAWBBDHVCSBGCMPLZSMJB");
    msg.custom.assign("OCMSHLTMHRUUQYCKYWZMRPVYGISPJPOBIACJBAZVXZTKGFPOKFFEPJANRAPROXQZADSGXNTCVULZATIPOZERNBCHEXJEGGLSNFKQTVQXUWNINMJLKRVDSDRUGVYMBJEZFTHRDVRJFNWBAFNPLQTONEVCTSMDIMRWG");

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
    msg.setTimeStamp(0.8075400722682347);
    msg.setSource(27335U);
    msg.setSourceEntity(252U);
    msg.setDestination(22733U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.0695106799174664;
    msg.lon = 0.9068905839849385;
    msg.speed = 0.6490313640239471;
    msg.speed_units = 253U;
    msg.limits = 175U;
    msg.max_depth = 0.6055671165575909;
    msg.min_alt = 0.21691090560308102;
    msg.time_limit = 0.29323454698407414;
    msg.controller.assign("VMPPXJTTWCFTKNJATLPRUEJEHUUTGBBVLZAOPKEBZOOINOYNSJVZZRQKSITPGRDZWSKNGIUMLYMRRTSFTCIJHCFMCNFER");
    msg.custom.assign("ZSQEYFGMCPB");

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
    msg.setTimeStamp(0.7997200587411742);
    msg.setSource(25261U);
    msg.setSourceEntity(161U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.4752358618542736;
    msg.lon = 0.2933618919111918;
    msg.speed = 0.6420982345144565;
    msg.speed_units = 213U;
    msg.limits = 26U;
    msg.max_depth = 0.4588314209470391;
    msg.min_alt = 0.7649852902929652;
    msg.time_limit = 0.3100399019465121;
    msg.controller.assign("IHFWZHSIBKBTMUDVJNGTIDBMJRGLBEMMZXWKUBDNABIESNZYWAVWIFMREBTJAHJTHCRNYVZDMNRAXAFSTODUOUDBLUVCQZKYKWDHZYHUSUMISCFHCQB");
    msg.custom.assign("QNKPBHDWJALYYKMFUWGWUJNEORSZMJZSPIQNQDLULWHPBCEKTRAUANVLGAMYOYRMDILLOJRIFOKJSRBAMCHCJLODXGEGSAGMJOVFFUFNMYUDSCAAZOFEYBRSPBRWXTCVPXCVWMXYQXZQUWLTOZIICNRWJZEXHTZRYVUUAKYCKQGVGZHLTSXDSQKGVODHVBPDHAFEIPHXNONBPCNKYQJJPGKEFMIQTSGTHEPDCFWERNZTKLH");

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
    msg.setTimeStamp(0.2487173849394827);
    msg.setSource(47759U);
    msg.setSourceEntity(91U);
    msg.setDestination(8062U);
    msg.setDestinationEntity(153U);
    msg.target.assign("CNOMRMYSYXJFZYZNGWGIQFEJIUJCAQDUUMFWJTFACIGTLKGOVRTZCDSUNVLBSPHWUKQZKBYBABPZHGKUQGEOKNHVWHVVXADFFJSPXBCOOFWACYKRPJGNLLQDOTIVPQJVQEMXAISBERWZCRJNXGFRPJXBXHFOBDTCKUDEDEKLPUYPBTMQLOBREJXTRSNMHRMAYNTEKCUMHISMTQNGXMWHDZZYOEOCHWVTAXLWKUNZHYIIYV");
    msg.max_speed = 0.8738450565044743;
    msg.speed_units = 251U;
    msg.lat = 0.8753987285135092;
    msg.lon = 0.7206842503598058;
    msg.z = 0.5553496142970773;
    msg.z_units = 243U;
    msg.custom.assign("QMOFIQQTJBLRFCSEWIYYNFBTZHKJAEKSCXSANDGWEYDZOGSUMCZDKVVIPGEEHYWXKIUXHUKADSRGMFPVUOZXDIKHKJMLCOWFBOHQTQJEUVXJODZMNCWCJ");

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
    msg.setTimeStamp(0.3318841895921031);
    msg.setSource(56609U);
    msg.setSourceEntity(85U);
    msg.setDestination(61345U);
    msg.setDestinationEntity(56U);
    msg.target.assign("ROYTOJPGXQYZUMLKLGMRTZWVVNUIWHDHBUQBKQMZYELSCKHDKSCUEJPEPLJOYIRACMYQFSCPNDZFVEWRGYTLIRUBNNLECDQXPNXFOVSXWNREAJGDZIOXJUFPKJYQINCBETCAFWJZSGGMFKPLVTKOZDMWWCXDIAYLNNBKJVOAICSZMZRF");
    msg.max_speed = 0.27579170198209857;
    msg.speed_units = 190U;
    msg.lat = 0.5567145715821045;
    msg.lon = 0.5246390362225501;
    msg.z = 0.43708698194314854;
    msg.z_units = 211U;
    msg.custom.assign("VKXORUFLDAVLBCUHIQXZONDQQVMWGTGABTMPCEQERSHQTNKQBDVLWXYMHJNKJRQUEIBXGFIMJYUFEADZGYWQDEKXAMWSZIRVUYTNMUTEBCDDNGWSDYJ");

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
    msg.setTimeStamp(0.09237416423579115);
    msg.setSource(11666U);
    msg.setSourceEntity(193U);
    msg.setDestination(50773U);
    msg.setDestinationEntity(186U);
    msg.target.assign("SLFUAVBGGXAGRKKKLPCLWWDBXXXZYQOELBIZBWTYZYMMGNIJBJNCXHADBKBZFERLPJCYFRHSIOYROXKQSTKHNCDBATPDRTVSRRFNDIWZDSOSBLQNJKROJULMQTCEPQNVAJZCOYZXEPHYZNHGGONWFTPWUGWNOJJ");
    msg.max_speed = 0.5084727485861389;
    msg.speed_units = 194U;
    msg.lat = 0.38059932704683264;
    msg.lon = 0.3582353690101169;
    msg.z = 0.35843941919576705;
    msg.z_units = 165U;
    msg.custom.assign("BIKQLZOPRKVTNIKOPBMMUCZIGSHZWYLYCXDPDEVQGUISDJDZPWJFESUXHWZSFRXTVREZTUPGNJSKHQGBIFRAYXDXAYGEHECQHHGRMNOULMPZQEMRNFFYSZOFQTYISGQOKPMQVFWDFCSWANDWRXBKDKKICXQZUSMLONLJTNUJZCARJ");

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
    msg.setTimeStamp(0.13655792596034733);
    msg.setSource(12018U);
    msg.setSourceEntity(59U);
    msg.setDestination(21996U);
    msg.setDestinationEntity(187U);
    msg.timeout = 15416U;
    msg.lat = 0.4031692146233107;
    msg.lon = 0.7720285954181846;
    msg.speed = 0.7405340159491993;
    msg.speed_units = 128U;
    msg.custom.assign("PQOWQBVOJPPPFQDQOVNWOEYCBVHRKCTMEECUGXQDXGUKEUQTSHBIYGYVZTQHDAGRBNFLRIJGLIAYXNIGLBGOIFJMEBBHZTPWAKJWOBNLKXMMMDEPJUYCCUFUMZIFZRHXEKJZCZFMBWNSHNVOLBCGWYCVQHDARGYSPQSOPTHRYFLRXTDVKNTEFPKJMSFYXSIUERXNID");

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
    msg.setTimeStamp(0.6389237758859321);
    msg.setSource(19524U);
    msg.setSourceEntity(186U);
    msg.setDestination(1855U);
    msg.setDestinationEntity(17U);
    msg.timeout = 64929U;
    msg.lat = 0.9142156374020564;
    msg.lon = 0.8896247596320408;
    msg.speed = 0.07517373314712028;
    msg.speed_units = 56U;
    msg.custom.assign("NFGJEASAUDVMSSAJUOJDBVMNXQETCRVNWKHTKVDWTNYOHWPRKQPVUZXWMTQFJZBPDHCHIFOMZNIDRDGEYLZHGKRYWRFYXBJRKSIY");

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
    msg.setTimeStamp(0.03218140302448913);
    msg.setSource(17681U);
    msg.setSourceEntity(213U);
    msg.setDestination(30265U);
    msg.setDestinationEntity(196U);
    msg.timeout = 31459U;
    msg.lat = 0.3439575753958427;
    msg.lon = 0.7768127466753184;
    msg.speed = 0.4589651024573008;
    msg.speed_units = 71U;
    msg.custom.assign("YMJYPAOTHDCFIHLLSEEIVNKDUUPBSSQKZZWAWQPLMFPEIPNRBKYMXDSMAEAIXYGXMHUGOWHOUJKOKVRRXPRVQSOVENUNBPEQLSQTMAWTILSGHLUZWDMDXBJKRTNYNOLZLHEDVZLOAWGJBERFAABZASPTFWWEGLTGGKBQNOVMUSGCEIYHBFQIHUJYWCMRHTIGK");

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
    msg.setTimeStamp(0.2724982340203487);
    msg.setSource(54642U);
    msg.setSourceEntity(80U);
    msg.setDestination(53282U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.8276424735590008;
    msg.lon = 0.32694689964217294;
    msg.z = 0.91353140205735;
    msg.z_units = 140U;
    msg.radius = 0.09750471577072306;
    msg.duration = 31283U;
    msg.speed = 0.12589632654324334;
    msg.speed_units = 184U;
    msg.popup_period = 38639U;
    msg.popup_duration = 48890U;
    msg.flags = 112U;
    msg.custom.assign("EUZSCCLGYVSHQNTIVCPSRWPRCYBUHNQWUYMAKPWLUFOUPVMMEQGOYJQMVNCZMSBVWTVEAJOHFYOIXSLFIGSRHVBPWDCDZUCPGLIEJFRVEBVNJKAKAKJBWXLDPIUUQELKRTTBEZNKJDBRKXKQTYJYGWGLAOBGDMRQ");

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
    msg.setTimeStamp(0.07260893015412984);
    msg.setSource(7475U);
    msg.setSourceEntity(76U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.14899014041197745;
    msg.lon = 0.8464064868651174;
    msg.z = 0.02429562866684387;
    msg.z_units = 223U;
    msg.radius = 0.8983327652371017;
    msg.duration = 38220U;
    msg.speed = 0.8558144438778518;
    msg.speed_units = 1U;
    msg.popup_period = 43529U;
    msg.popup_duration = 18968U;
    msg.flags = 240U;
    msg.custom.assign("PFRSKNGJZUATQEMBGIUNMVIXHMRVLIPYRKDYQVTHBQXZFEOLCNKHVTZXIJYIGEOFGCKSONNAWALWXGOWSYYSFJKLBUKQFRCVSLIQMNVFHDGKQTWDSANVCUOXDWYQCIZANFSCFVCCGJRYZOKRAG");

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
    msg.setTimeStamp(0.10748191439389199);
    msg.setSource(55925U);
    msg.setSourceEntity(203U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.575977366337743;
    msg.lon = 0.8427273546876671;
    msg.z = 0.9613526064311634;
    msg.z_units = 120U;
    msg.radius = 0.12335146027275612;
    msg.duration = 48176U;
    msg.speed = 0.3109106582459631;
    msg.speed_units = 103U;
    msg.popup_period = 8056U;
    msg.popup_duration = 40223U;
    msg.flags = 18U;
    msg.custom.assign("TGRPOHINJFDIAFXDLOBKXZCGIZPYRBJVWFZHKLUXRUWBODLERRBCQYESRGXONKWJIUUSSHSVYRFWPDTHJIWFNNSOH");

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
    msg.setTimeStamp(0.8914510441166708);
    msg.setSource(30640U);
    msg.setSourceEntity(108U);
    msg.setDestination(22106U);
    msg.setDestinationEntity(26U);

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
    msg.setTimeStamp(0.965141605764615);
    msg.setSource(9348U);
    msg.setSourceEntity(226U);
    msg.setDestination(39684U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.9411076970098233);
    msg.setSource(13808U);
    msg.setSourceEntity(28U);
    msg.setDestination(42607U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.4883563243356882);
    msg.setSource(42051U);
    msg.setSourceEntity(34U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(210U);
    msg.timeout = 40206U;
    msg.lat = 0.43495447223617945;
    msg.lon = 0.40295143006888356;
    msg.z = 0.21550560658909013;
    msg.z_units = 87U;
    msg.speed = 0.7058310671113516;
    msg.speed_units = 69U;
    msg.bearing = 0.2834550304254164;
    msg.width = 0.705666359717133;
    msg.direction = 133U;
    msg.custom.assign("IIEQYCRBCYNWMBVXRERQQLZBANCHDRZLLYFKCRTRLJWTUQRSBWRLVHNVFFCQASOEFUTXDIUWKUTAAVMXPBMSGYOUWNCMVWVYVERPYUJALZKJJMFSKMDYYKOZDVCRGWQOCPSKPTMDVDQXOI");

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
    msg.setTimeStamp(0.5907116574689683);
    msg.setSource(50509U);
    msg.setSourceEntity(144U);
    msg.setDestination(3136U);
    msg.setDestinationEntity(104U);
    msg.timeout = 62320U;
    msg.lat = 0.17831917485773885;
    msg.lon = 0.4360329980155897;
    msg.z = 0.9094820571184031;
    msg.z_units = 244U;
    msg.speed = 0.21783186584219938;
    msg.speed_units = 171U;
    msg.bearing = 0.8680838812173027;
    msg.width = 0.11280986048031338;
    msg.direction = 203U;
    msg.custom.assign("QXXHQKDDWWTAQCQTQQGGKHNFYYUUFWDJOHBIACXBKJHFLDTPMTHPSVBNDELOXUONHOGVKOGIVESQLLYBPNRCPYOMNVHFYTKQWFRJJGCSOBFVEJFXBEYUTCSMXOPTEASXTZLRNOVLSA");

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
    msg.setTimeStamp(0.6278672596973892);
    msg.setSource(31547U);
    msg.setSourceEntity(128U);
    msg.setDestination(24593U);
    msg.setDestinationEntity(168U);
    msg.timeout = 51700U;
    msg.lat = 0.4812472506696037;
    msg.lon = 0.36029741071082777;
    msg.z = 0.3489564711987668;
    msg.z_units = 36U;
    msg.speed = 0.8351663930808322;
    msg.speed_units = 209U;
    msg.bearing = 0.19031340746115732;
    msg.width = 0.06963439614083944;
    msg.direction = 68U;
    msg.custom.assign("FAOMWZLFJDAKMGWZKNFPJLMEWAYOHRJQMLTENBTYIIKPAE");

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
    msg.setTimeStamp(0.7183564343898065);
    msg.setSource(24643U);
    msg.setSourceEntity(127U);
    msg.setDestination(51950U);
    msg.setDestinationEntity(136U);
    msg.op_mode = 202U;
    msg.error_count = 208U;
    msg.error_ents.assign("FVAKNBMTSEVSYULASPXIZTERVJ");
    msg.maneuver_type = 9961U;
    msg.maneuver_stime = 0.8080773129051156;
    msg.maneuver_eta = 45454U;
    msg.control_loops = 2853929211U;
    msg.flags = 45U;
    msg.last_error.assign("CSUANAUXAVOLMZAGKBJRTMDOQFKWFRHIBQOXYIOKWRPCEKUYBIQPZXHJTWYLACSXGLNLZBVMRUOIOPJQPGFKEKZPFLGTNWGVETNAKHOCTHXIDGSWUXXQVVPBTHTXMQZEUIVBXNWTUDTAOWIUMINDVHYDSPDHGEYYUFLRJ");
    msg.last_error_time = 0.5439414562926231;

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
    msg.setTimeStamp(0.9201941429660142);
    msg.setSource(20649U);
    msg.setSourceEntity(200U);
    msg.setDestination(27154U);
    msg.setDestinationEntity(18U);
    msg.op_mode = 111U;
    msg.error_count = 247U;
    msg.error_ents.assign("PFVWKNZDNQMHWAEUTANSJHKEUCSJNRUYQGOGNGDWEVZCXMZVVETTOFWNSPSHCRVHETFXCDYWAOSISJD");
    msg.maneuver_type = 5369U;
    msg.maneuver_stime = 0.5388405004178469;
    msg.maneuver_eta = 10179U;
    msg.control_loops = 1320964550U;
    msg.flags = 49U;
    msg.last_error.assign("OOZPPLVVNIYTEIPTHNCBDLUXCQPKZKQOWRUFJRMLNXDBJMRTYAEKV");
    msg.last_error_time = 0.5456073243797382;

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
    msg.setTimeStamp(0.1373399863570508);
    msg.setSource(3985U);
    msg.setSourceEntity(219U);
    msg.setDestination(4218U);
    msg.setDestinationEntity(162U);
    msg.op_mode = 53U;
    msg.error_count = 160U;
    msg.error_ents.assign("RVGFZSTZBISBXVWEUZOICIJDXSSXWRYQSWTTDTKLFQBHENIEORHSCFLEJJXCFGJFDKLBPYFRPCSJWAGUEDQZVTUUWKCMWZTHAKDLPAFSAWZZQSBFOEBWXYXRNRLTKVDHLJDTDGCGFAYPHBNJGMNBYGVQIIPPVKFRNNTMINQNHIHDLZZRCCXOKOPDMMIEBMMONLCPMXEGMUSUHUUEUOYWJUX");
    msg.maneuver_type = 60469U;
    msg.maneuver_stime = 0.015442646799418314;
    msg.maneuver_eta = 6818U;
    msg.control_loops = 230031444U;
    msg.flags = 105U;
    msg.last_error.assign("YUQECFCEWTBWMQRPSAGODFYHVYGQCKCKDCVOS");
    msg.last_error_time = 0.7921273567265978;

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
    msg.setTimeStamp(0.3389186724247154);
    msg.setSource(65247U);
    msg.setSourceEntity(31U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(216U);
    msg.type = 19U;
    msg.request_id = 38105U;
    msg.command = 10U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 61534U;
    tmp_msg_0.rpm = 0.8246165907659018;
    tmp_msg_0.direction = 131U;
    tmp_msg_0.custom.assign("BWXWTAFCFGPCRWJOQWZHCSEDRNOOYINONVAQCXGYKCOIUDSZZJRLBAOIKXLOHEWYHLYYGSNIBSJKHIQIUDAPMFTUIWAXJDBOGPDVXLUAMOIRLFGOLPTRHKBEQRZETXGZGTAVUBVCNCTYSTBSMSJXNPDEVHFPGGSZQRYJUCURVYSEMWMPDEZJFLRXDFNMMSVIQBFBLHLVQNDJHCPRMVXUTMKEHAZFFTZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 5970U;
    msg.info.assign("ZTDMWAWQAISHRAWLMNIGDCPJXDODJSQIGACRTSTRVHSJXVOIIZCSYMROZIJEONKDFBUUYXSPSJVOHLXTRVSXGMFIFDLMKPEDWEXCUBZLRUGGDBHVNELIHBHBWFFTVZCJZRMTNQZRWQZJQXYMOPFNYTEHACPVKMHKATQGTXXBXORUVRJYTGUJOLLKQNWCVGBCADNFLEUSYANEQYAHYWMHOYUNBCWUNJEKGMYIPPPOSDWKZ");

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
    msg.setTimeStamp(0.7769831389039077);
    msg.setSource(26024U);
    msg.setSourceEntity(222U);
    msg.setDestination(10617U);
    msg.setDestinationEntity(95U);
    msg.type = 113U;
    msg.request_id = 21389U;
    msg.command = 5U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.5058283114758279;
    tmp_msg_0.lon = 0.46961090217850066;
    tmp_msg_0.z = 0.055987859524053274;
    tmp_msg_0.z_units = 194U;
    tmp_msg_0.speed = 0.7404577535918065;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.bearing = 0.483513294350986;
    tmp_msg_0.cross_angle = 0.5956402868349624;
    tmp_msg_0.width = 0.30755078246165324;
    tmp_msg_0.length = 0.4158591369560011;
    tmp_msg_0.coff = 192U;
    tmp_msg_0.angaperture = 0.50669262888639;
    tmp_msg_0.range = 48268U;
    tmp_msg_0.overlap = 128U;
    tmp_msg_0.flags = 145U;
    tmp_msg_0.custom.assign("IWWLPMULSYLSZFCRAYPGQTVIEQJQBUACGTEMIGBEQXVWLCACBUITTCBESYLSYOXGACXNLJOVAIZNOTPPTSHNXUXONWHEOHXMYDKFDHSFHLDFUPOZJVWCBTWEWDACYPWF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 40403U;
    msg.info.assign("LGVGVYZFTANOICTAZHRNYYKLGDUIXCTNKYUXMVDMWUMDMZHAAMXQMOVEUJPXHRXBHHREJQKLPLYIPROHLEERHDK");

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
    msg.setTimeStamp(0.33843430143422315);
    msg.setSource(4197U);
    msg.setSourceEntity(192U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(193U);
    msg.type = 158U;
    msg.request_id = 42051U;
    msg.command = 63U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.4082328798122248;
    tmp_msg_0.lon = 0.7090926692864298;
    tmp_msg_0.z = 0.36087177239480905;
    tmp_msg_0.z_units = 124U;
    tmp_msg_0.speed = 0.4542097844357966;
    tmp_msg_0.speed_units = 107U;
    tmp_msg_0.abort_z = 0.025403853906648788;
    tmp_msg_0.bearing = 0.6639744761372669;
    tmp_msg_0.glide_slope = 211U;
    tmp_msg_0.glide_slope_alt = 0.2964818716943628;
    tmp_msg_0.custom.assign("KOFJPUIBNVUXMMTUCX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62126U;
    msg.info.assign("TFTPBPHPVCJVHPRKXDUKITDIYASUGSUSLGGCLGSTLSIUFZYVHHZXIVZEGALEMEEAFMGARNWSXOUAXYZNAYJFNXSBDLMQQUZQOJQEVGTTBKSOOTNFHUNNACZHDWMJFFKYXUKYEMLDRRMOYCPMKYVYUZOACAHEIBSGJPRPNXVHTWRKWRWDLIQMOCGQOPUVNQJVDQKZPFVJRCKEIFDSZWBXNCMJPCRMWBIBQWTXWQIELHRI");

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
    msg.setTimeStamp(0.6054437328354054);
    msg.setSource(41508U);
    msg.setSourceEntity(188U);
    msg.setDestination(29155U);
    msg.setDestinationEntity(243U);
    msg.command = 181U;
    msg.entities.assign("DFGWYZQIGFDTOHOEURWZBDHKFYPPHNZDRKMGPJAPAIQRCKATZQLHNNJBZXINMNDYRHNFSTTQKFEUPAIZVGDHFJTGFKYEF");

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
    msg.setTimeStamp(0.8872762107694481);
    msg.setSource(62571U);
    msg.setSourceEntity(87U);
    msg.setDestination(24528U);
    msg.setDestinationEntity(168U);
    msg.command = 59U;
    msg.entities.assign("FGXVQZNGCSGWJNIUAQJHVFSDUUOSVTJXQYBIKYCOTPRLVEHUCDDVESWXFPGROTGJDNMHPZZCIBARRLPNYOHENTADXKXXKJOLAMYFNOBWMDIHUKLHBYWASMYNSZTPMHVFRIDAHEBIIVRKYYMCJJCDMJHUJIBOQGBQVQWNTLRLPMNZVRWSHAMXSFLFXALNABLETTCITZQELWCZEEZXDCY");

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
    msg.setTimeStamp(0.005569121258367171);
    msg.setSource(29645U);
    msg.setSourceEntity(206U);
    msg.setDestination(38524U);
    msg.setDestinationEntity(186U);
    msg.command = 54U;
    msg.entities.assign("RVNEFFSXROXLBXGMSDLEUPQNXATYUWDSCNNBEMAYLPSKQOBGOPYKNWVAGOVD");

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
    msg.setTimeStamp(0.7752340141363159);
    msg.setSource(39644U);
    msg.setSourceEntity(141U);
    msg.setDestination(58313U);
    msg.setDestinationEntity(126U);
    msg.mcount = 137U;
    msg.mnames.assign("PKYCEGTARENJSAWKMIWWIHLTFANLRDOPEBEBJFIMXAIGIVYDYQMOKOSQSDMENPDWGFJFORYRXNPKNWRFEBDKPJXNTJQIKCXNLMCAUCLHBTGVFTXPYWSCFTSYRQUBWHEMUFALTGJ");
    msg.ecount = 207U;
    msg.enames.assign("REYRIYAINKXUTRZDYHCNTBJZLQYPXXSGPSVORECDMXPIYYNQKLTHFMEWUDCWFPIDUAQCCPNZRXFZJYSKUMFJLFIZWDRWCRTMVDTDNWIJVSBFMGYSOBOWLZXJKHCHVBWQGAIVFCLZPGGQMJPTGRFPJETUOU");
    msg.ccount = 109U;
    msg.cnames.assign("QGGOMWVHTPLRMRIUGNJXVYLVMSJYSQBLKBJNKZZPEOPMICSOANVJLZRFXSJAXSKVXKCWVRMWTEPUIVLGXWHNWXQAQHMJFDTOHDHZWFBPXKZOUAXYENOADCGSQTDBIMUGCYCNPCTAYSBEQXBLZQSLHBRNRYTPWIBQNGCZTCKOGOCHUJJDBGBNVEIFHIFZUUEHDFUQFFYYZDHQLJFECYIMUPFR");
    msg.last_error.assign("RIOJHTNTJORMWLKOLQBIDUVWNIBZKJTTMWYOK");
    msg.last_error_time = 0.6270529227827676;

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
    msg.setTimeStamp(0.959182192241744);
    msg.setSource(47763U);
    msg.setSourceEntity(252U);
    msg.setDestination(38063U);
    msg.setDestinationEntity(130U);
    msg.mcount = 118U;
    msg.mnames.assign("ZGWPSOKDKDZUGYORSQEHQFGHOBKYRWMXAUPYGQRRZVOUTUIIARRTWNVQZKWSMCSNUAGMVXDWKNJYLTRXRVOLCIIFXLWEOFPJCTUZHOMWFXFHGYEQYUIPKVHQQINSPNWLGSJFBIRRJEBKXTBDBCFNINKCMYTHAWDLFHBEPHVALHPPTEAAKSYJPZVDZNUFDBOVUXXLEZYUYZJGJJSCIJAMMEKICVELXEMQSLMBCOAQGPCCHNDTD");
    msg.ecount = 41U;
    msg.enames.assign("KSGNCCWZKFRVHKIMOVRPNALHYMQWEGBRJRUHNMTVPILAXDXDZTOPEIDVAUOBMTYUSUUKEJZDHZEGBYOTMZIXJEYAAHYLBYJLCGUZFFXSNEGFXPLKLHIVYSFDPCNYUWFUPKOMZQETOPKHALKPAJZQCDWSJTTQVZHIJFVPHVBADGREGSOIJCTPTMIWBLTRRIEKQWHWRNBCENFSMG");
    msg.ccount = 14U;
    msg.cnames.assign("GHNUBMACQTRNFQTSULREVCWAHQQSKSFZBKJREMPXPTUCHLKOAIODCFJIVYCMKVJNLSVXYIERXUCTZNLPSPFQXFEVDYUQXLTRRAPVVJQZIDWNZACKPNOADGYMJEJOVPFIEBXYYYUODGYWDWNERFGLZNMSX");
    msg.last_error.assign("HVQWQCITDHCVFMAWJBSGHHBZQJFZFTK");
    msg.last_error_time = 0.4301860700533052;

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
    msg.setTimeStamp(0.5517971791702773);
    msg.setSource(16207U);
    msg.setSourceEntity(228U);
    msg.setDestination(25950U);
    msg.setDestinationEntity(43U);
    msg.mcount = 127U;
    msg.mnames.assign("QOYYAJRUFEKACRHLRIACACHGXJITCNTVZEYJSCMENJPFCULZYDEVKYJKGSEGOYNUQADLAFTWGDOZMFZHSTDMMLKJPOUHZGYDIWXTIOJUSUTVABUHFSDLSTBZQMQCXTMDRRMXCWBBPXUHRKNVYIOKKUWRRRBBXOWEQWHKIMXVDFJUSJGDQPEGHIPNWQVPKPHSAEOVKOZMZLCNDOEQFW");
    msg.ecount = 250U;
    msg.enames.assign("BWYENTKMNIXKELWXJIDHMZGKXHCPSGSWXSLBWMIUMHXYGLEZRTUZDGALOXQVCBNEUPJIBQNJQKJMRWWIOAAYRZVOPUAQDIEEMVSFBXZRNBQHIJPQDZYFGDCMGNGOIDCQCDUXUHUISFOREFFXLSOZKNHDOGTLTFVMQWSKCDTAYKCVRDZLMAEYFLHRBTRTZAPMVJYYPZNTKUFJGWYVUAWAOQXVFHVORPK");
    msg.ccount = 94U;
    msg.cnames.assign("RVMYFQANYFPYYMBIKEMOPXPAHEXMFLISDKDLEXUISAROVLTGOAKLPETHTFEQANEBLNLZW");
    msg.last_error.assign("UQBKODLYTOUOTUZDEEJRGKFELTEECNVGGWTKCXLLZRGXPLHIIKZVPSSPNZBMDKWDADPQAMQAPSLXSZTDRHQPBAMSCWJXYCLKTUDMHUCDRCJIFOWIJDVGBYPASNGIVFZTPEFIOYVAFHVUYIHRRAVCFCQILQWHSVXKBWBXXYCFJKKZSPMGVOCMZEDRYTJUSMFPQEXGOWIWHJNR");
    msg.last_error_time = 0.29517476239144513;

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
    msg.setTimeStamp(0.327677791265235);
    msg.setSource(51106U);
    msg.setSourceEntity(205U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(102U);
    msg.mask = 27U;
    msg.max_depth = 0.9353855171555144;
    msg.min_altitude = 0.692751805237791;
    msg.max_altitude = 0.6581966220133578;
    msg.min_speed = 0.8711638423190009;
    msg.max_speed = 0.870078223345702;
    msg.max_vrate = 0.04789198112603865;
    msg.lat = 0.328680254093069;
    msg.lon = 0.9870499495471542;
    msg.orientation = 0.6599096152137846;
    msg.width = 0.40699565571612717;
    msg.length = 0.04649216686799151;

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
    msg.setTimeStamp(0.9868525597586991);
    msg.setSource(64272U);
    msg.setSourceEntity(35U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(81U);
    msg.mask = 184U;
    msg.max_depth = 0.09560576769174345;
    msg.min_altitude = 0.13074507296468307;
    msg.max_altitude = 0.31189419928731;
    msg.min_speed = 0.9460763363901872;
    msg.max_speed = 0.8426084627889303;
    msg.max_vrate = 0.7965103840439344;
    msg.lat = 0.5261317722048382;
    msg.lon = 0.30279042845854265;
    msg.orientation = 0.2137062675564242;
    msg.width = 0.7586893851475132;
    msg.length = 0.5865543309741754;

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
    msg.setTimeStamp(0.4495497118836954);
    msg.setSource(19918U);
    msg.setSourceEntity(183U);
    msg.setDestination(16865U);
    msg.setDestinationEntity(102U);
    msg.mask = 131U;
    msg.max_depth = 0.39100263504376975;
    msg.min_altitude = 0.531945011481273;
    msg.max_altitude = 0.7128345345223146;
    msg.min_speed = 0.6038743720791974;
    msg.max_speed = 0.5586188918739237;
    msg.max_vrate = 0.22824120411325732;
    msg.lat = 0.7560559734050787;
    msg.lon = 0.4607489581233616;
    msg.orientation = 0.544595632096156;
    msg.width = 0.20643516317187038;
    msg.length = 0.4729594232251234;

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
    msg.setTimeStamp(0.42427675682985);
    msg.setSource(36461U);
    msg.setSourceEntity(102U);
    msg.setDestination(50241U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.4655122998228336);
    msg.setSource(18590U);
    msg.setSourceEntity(244U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.9719280837844826);
    msg.setSource(51331U);
    msg.setSourceEntity(156U);
    msg.setDestination(20545U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.7783134480679468);
    msg.setSource(4794U);
    msg.setSourceEntity(212U);
    msg.setDestination(8812U);
    msg.setDestinationEntity(23U);
    msg.duration = 37718U;

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
    msg.setTimeStamp(0.4450546267373917);
    msg.setSource(36906U);
    msg.setSourceEntity(101U);
    msg.setDestination(6241U);
    msg.setDestinationEntity(172U);
    msg.duration = 48933U;

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
    msg.setTimeStamp(0.7629594276943583);
    msg.setSource(50693U);
    msg.setSourceEntity(162U);
    msg.setDestination(22876U);
    msg.setDestinationEntity(103U);
    msg.duration = 57008U;

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
    msg.setTimeStamp(0.22110632944269693);
    msg.setSource(35626U);
    msg.setSourceEntity(251U);
    msg.setDestination(64620U);
    msg.setDestinationEntity(151U);
    msg.enable = 230U;
    msg.mask = 54963809U;
    msg.scope_ref = 1826986107U;

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
    msg.setTimeStamp(0.10783238373712067);
    msg.setSource(35209U);
    msg.setSourceEntity(234U);
    msg.setDestination(36707U);
    msg.setDestinationEntity(34U);
    msg.enable = 137U;
    msg.mask = 2589039648U;
    msg.scope_ref = 2660963675U;

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
    msg.setTimeStamp(0.07580948810045884);
    msg.setSource(22591U);
    msg.setSourceEntity(87U);
    msg.setDestination(57881U);
    msg.setDestinationEntity(105U);
    msg.enable = 122U;
    msg.mask = 1817532305U;
    msg.scope_ref = 3018975404U;

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
    msg.setTimeStamp(0.30867518717115494);
    msg.setSource(9632U);
    msg.setSourceEntity(200U);
    msg.setDestination(7972U);
    msg.setDestinationEntity(197U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.5077162748837453);
    msg.setSource(55411U);
    msg.setSourceEntity(133U);
    msg.setDestination(11342U);
    msg.setDestinationEntity(247U);
    msg.medium = 3U;

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
    msg.setTimeStamp(0.9623633535723972);
    msg.setSource(16668U);
    msg.setSourceEntity(107U);
    msg.setDestination(63488U);
    msg.setDestinationEntity(183U);
    msg.medium = 107U;

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
    msg.setTimeStamp(0.29110741170367127);
    msg.setSource(29627U);
    msg.setSourceEntity(192U);
    msg.setDestination(33884U);
    msg.setDestinationEntity(199U);
    msg.value = 0.8715472506633776;
    msg.type = 53U;

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
    msg.setTimeStamp(0.7117078406813414);
    msg.setSource(30398U);
    msg.setSourceEntity(102U);
    msg.setDestination(43863U);
    msg.setDestinationEntity(241U);
    msg.value = 0.2996424803675799;
    msg.type = 52U;

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
    msg.setTimeStamp(0.10003642503894816);
    msg.setSource(5979U);
    msg.setSourceEntity(236U);
    msg.setDestination(34049U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5452236796936408;
    msg.type = 177U;

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
    msg.setTimeStamp(0.01045793486945612);
    msg.setSource(23171U);
    msg.setSourceEntity(220U);
    msg.setDestination(53998U);
    msg.setDestinationEntity(11U);
    msg.possimerr = 0.4393014248256074;
    msg.converg = 0.16909623863430256;
    msg.turbulence = 0.5475343334001369;
    msg.possimmon = 109U;
    msg.commmon = 123U;
    msg.convergmon = 90U;

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
    msg.setTimeStamp(0.5049666629335294);
    msg.setSource(16725U);
    msg.setSourceEntity(178U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(68U);
    msg.possimerr = 0.07698073766366531;
    msg.converg = 0.4244709130513473;
    msg.turbulence = 0.7669979168034154;
    msg.possimmon = 3U;
    msg.commmon = 16U;
    msg.convergmon = 201U;

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
    msg.setTimeStamp(0.2537575498051202);
    msg.setSource(18609U);
    msg.setSourceEntity(122U);
    msg.setDestination(37182U);
    msg.setDestinationEntity(175U);
    msg.possimerr = 0.9458476230960584;
    msg.converg = 0.015997233444067893;
    msg.turbulence = 0.4313513885414272;
    msg.possimmon = 135U;
    msg.commmon = 1U;
    msg.convergmon = 48U;

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
    msg.setTimeStamp(0.8332936269208213);
    msg.setSource(28570U);
    msg.setSourceEntity(159U);
    msg.setDestination(29317U);
    msg.setDestinationEntity(118U);
    msg.autonomy = 188U;
    msg.mode.assign("HAMSPIOXDBGAWYSCUAKRACVHGFLJSEENNQOFPCVXGBUJEUOFU");

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
    msg.setTimeStamp(0.6147831395107891);
    msg.setSource(47861U);
    msg.setSourceEntity(143U);
    msg.setDestination(45689U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 59U;
    msg.mode.assign("YBVKVZHMMBNNKMXPOWBILNGFLTAFAGL");

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
    msg.setTimeStamp(0.2880500919715753);
    msg.setSource(4755U);
    msg.setSourceEntity(36U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(228U);
    msg.autonomy = 62U;
    msg.mode.assign("JMOBMRDQBHELKGGEORKCFWVHOOLAPGTJAUAXFNCNDIBZDSWIYQHTTZJVUAAFQSFWABNDLIQDZYHRVTPUYRPLVIBHETJEGKHRAKUSGGRAZVXYFSGSAHLTRWMWNKLFRHGUCBLJMXXSKCKGMPIN");

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
    msg.setTimeStamp(0.8008852019215321);
    msg.setSource(18315U);
    msg.setSourceEntity(245U);
    msg.setDestination(59823U);
    msg.setDestinationEntity(61U);
    msg.type = 246U;
    msg.op = 157U;
    msg.possimerr = 0.048560003898155846;
    msg.converg = 0.7361918980684644;
    msg.turbulence = 0.6021774950680802;
    msg.possimmon = 187U;
    msg.commmon = 38U;
    msg.convergmon = 157U;

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
    msg.setTimeStamp(0.839055423320478);
    msg.setSource(17493U);
    msg.setSourceEntity(251U);
    msg.setDestination(63489U);
    msg.setDestinationEntity(78U);
    msg.type = 22U;
    msg.op = 207U;
    msg.possimerr = 0.5806742952392284;
    msg.converg = 0.7682199541900898;
    msg.turbulence = 0.3968229881237141;
    msg.possimmon = 113U;
    msg.commmon = 138U;
    msg.convergmon = 212U;

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
    msg.setTimeStamp(0.104257798321721);
    msg.setSource(29171U);
    msg.setSourceEntity(77U);
    msg.setDestination(49341U);
    msg.setDestinationEntity(61U);
    msg.type = 153U;
    msg.op = 102U;
    msg.possimerr = 0.04149719414716713;
    msg.converg = 0.07375484839939972;
    msg.turbulence = 0.3301891719083392;
    msg.possimmon = 115U;
    msg.commmon = 19U;
    msg.convergmon = 123U;

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
    msg.setTimeStamp(0.03609791548767538);
    msg.setSource(59173U);
    msg.setSourceEntity(136U);
    msg.setDestination(18670U);
    msg.setDestinationEntity(122U);
    msg.op = 200U;
    msg.comm_interface = 127U;
    msg.period = 48739U;
    msg.sys_dst.assign("VDHYPRIAVDUKEOKQJGSRXNEHWPAEVECTQPCSMQAGAGRTUTVXLAJFMHQOZXRNFQVNDZXTUUWHBHRBFPYMOCPEKBQIJGULCWGEDMGKMIYSYFTVICQDXXSBEZZFTPRWYNIGTNLHPCVFKRLBTNFVYCUKIRKIKBKLNMKUPALJJMYNNUBDMQSBWEW");

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
    msg.setTimeStamp(0.28766007161984164);
    msg.setSource(19824U);
    msg.setSourceEntity(115U);
    msg.setDestination(20918U);
    msg.setDestinationEntity(2U);
    msg.op = 229U;
    msg.comm_interface = 80U;
    msg.period = 62886U;
    msg.sys_dst.assign("AIIHEYZSOTOBBQFFZIGVUMLAGSHYMOATNTSJFIOUEUKXKDNLVPVYKTWIPZSFCMXGMMOGXPLBSMTDQVGIQDKYJPZVCWJPGZRDYBWNIQDURDNKVNWVMLWCJIJEZHAFGRXBAHZDUHCTVATUSMWKZFLNHSFXHKCLBKJPQQGZOXYCFUZORDFSGEXQRRHIOYQKTBNPOAXDDBSW");

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
    msg.setTimeStamp(0.671365086029155);
    msg.setSource(46854U);
    msg.setSourceEntity(195U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(149U);
    msg.op = 61U;
    msg.comm_interface = 47U;
    msg.period = 48699U;
    msg.sys_dst.assign("KHMCSASVFWBHYHKXZUJFPBJUPOTQVZUGYEXMLOTECNMYZDWXISFUPGQEJRMJRPQBXAYKBROTXZJXENFGAHRLWJBFJKWTDYGSANMKVEATOAUPUOYNOQETLYQYAXJHEMDP");

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
    msg.setTimeStamp(0.4800104611847501);
    msg.setSource(49379U);
    msg.setSourceEntity(56U);
    msg.setDestination(35556U);
    msg.setDestinationEntity(34U);
    msg.stime = 1305319055U;
    msg.latitude = 0.37710590774329544;
    msg.longitude = 0.9420070436436718;
    msg.altitude = 29475U;
    msg.depth = 58774U;
    msg.heading = 55254U;
    msg.speed = -23414;
    msg.fuel = 120;
    msg.exec_state = -10;
    msg.plan_checksum = 33999U;

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
    msg.setTimeStamp(0.8860672929746042);
    msg.setSource(36461U);
    msg.setSourceEntity(39U);
    msg.setDestination(44562U);
    msg.setDestinationEntity(13U);
    msg.stime = 4207235929U;
    msg.latitude = 0.38756089993896425;
    msg.longitude = 0.1839670631196395;
    msg.altitude = 55769U;
    msg.depth = 15007U;
    msg.heading = 54097U;
    msg.speed = -26315;
    msg.fuel = 63;
    msg.exec_state = -33;
    msg.plan_checksum = 58441U;

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
    msg.setTimeStamp(0.34678900391748935);
    msg.setSource(36395U);
    msg.setSourceEntity(26U);
    msg.setDestination(58755U);
    msg.setDestinationEntity(202U);
    msg.stime = 3723727071U;
    msg.latitude = 0.3910057928470374;
    msg.longitude = 0.9009233232413814;
    msg.altitude = 7224U;
    msg.depth = 63246U;
    msg.heading = 42611U;
    msg.speed = -10066;
    msg.fuel = -123;
    msg.exec_state = 79;
    msg.plan_checksum = 23703U;

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
    msg.setTimeStamp(0.4296326463502237);
    msg.setSource(18628U);
    msg.setSourceEntity(162U);
    msg.setDestination(25591U);
    msg.setDestinationEntity(149U);
    msg.req_id = 14827U;
    msg.comm_mean = 226U;
    msg.destination.assign("GNNLEXYZEANCZRAQMUFVRFCJWIPBWVRZGAJSMMJGKCDIYKFQMRPJKHGXLYEHTNDEPAAFJQVSVXC");
    msg.deadline = 0.8529733429771226;
    msg.range = 0.8904004467409036;
    msg.data_mode = 115U;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 58U;
    tmp_msg_0.quality = 223U;
    tmp_msg_0.reps = 71U;
    tmp_msg_0.tsize = 71U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BNGGKEZUWKUXTQEQUGAQGLLQWFIKRIHTRMAWQKGDZTHLJDTPBNVVPMHOSIXTQMDTEKJIBISNZSXQNZPULLRFZHPWUHIWEZDOXOYASFAGUOFBLDCOCAELIFWSHSXODPMCAFVJQQJRKBFYOAUCTXBYWONXJXBNSJSDCMMLHTNNPFYXEQCUGSRABNWGEBPJIKTYVGWJSCIEJOUPVKVPI");
    const signed char tmp_msg_1[] = {-52, -125, 0, 41, 113, 53, 86, 99, -59, 22, -38, 66, 14, 93, -1, -64, -89, -16, 35, -12, -94, -120, 105, -113, 17, -35, -91, 119, 17, -72, 36, 121, 111, -10, -5, -100, 25, 26, -103, 12, 23, 117, 7, -46, -88, -121, 32, 18, 88, -26, -77, -113, -26, 42, 113, -40, -116, 54, -53, 24, -114, 55, 2, -17, -42, 77, -107, -2, 10, -126, 101, 117, 48, 8, -7, -105, -4, -103, 45, 67, -65, -61, -61, -36, -58, 88, -6, -123, 43, 73, -22, -15, 36};
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
    msg.setTimeStamp(0.5629845009141016);
    msg.setSource(38774U);
    msg.setSourceEntity(98U);
    msg.setDestination(4926U);
    msg.setDestinationEntity(140U);
    msg.req_id = 40923U;
    msg.comm_mean = 231U;
    msg.destination.assign("NCWLVHENZJAIHQOUUMOBSTS");
    msg.deadline = 0.507560051120657;
    msg.range = 0.014760894847669959;
    msg.data_mode = 108U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("DGTBHATFZUSAVGXAIFEODFSLROEJCVBNPYBRUACAUQDRDSBUKZRIYVVMXNGIDKBUCKXMNFPWKEKOLRDDLZPWVJBMOVZTDRJKNBKOWLRNYXDZWHACYHCAMOMYPJPJOIJMMQRHNWQPUOTTTZCELJYLQTAGTUFQHBHYHETPERCIWJHPFIGGJKMCKFHYUUFN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WPCCBTDQJINTQJVGRXQWSHIPFZCHCFNFHVGJGVAMULZZBXBQMXPMTPTKLGYUQEVRESXACHHJOCOLXYRLWLZFYOTONDDHONWRHZMYFDMGEOYITSBGAJAOEOUIBUDENMBFRFXQZJMUFFSMZXRIJOEEWPUBTTYAGTWSAYIYTSWQQGJJPFIKSNSXQCRRVKVIDLEIPKDBCLHWAANNOKCDWMUGBXZVEZUVKK");
    const signed char tmp_msg_1[] = {71, -58, 110, 36, -12, 106, -94, -4, 125, 93, 74, -29, -113, -8, 41, -42, -49, 82, 86, 47, -16, 71, 102, -9, 94, -15, -49, 98, 90, 61, 77, -96, 105, 67, -4, -69, 115, -54, 92, -38, -122, -67, 23, 31, 28, 6, 110, 115, -127, -80, -4, 42, -67, -125, 92, 81, -98, 22, -98, 31, 30, -48, -18, 74, -24, -26, -46, 81, 54, 123, -89, 118, -28, 2, 17, 61, -25, 42, -123, -77, 19, 41, -105, 93, 83, 111, 103};
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
    msg.setTimeStamp(0.7633573399117286);
    msg.setSource(19214U);
    msg.setSourceEntity(253U);
    msg.setDestination(44248U);
    msg.setDestinationEntity(239U);
    msg.req_id = 34773U;
    msg.comm_mean = 40U;
    msg.destination.assign("XGPHTHSRWKZMEPPROWNUCKIYPCROIAPTMNWUEMJNVRKFUJFFMCRASOUOKS");
    msg.deadline = 0.7737705929808065;
    msg.range = 0.9838346979527302;
    msg.data_mode = 200U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.723067700095827;
    tmp_msg_0.y = 0.4462857178388273;
    tmp_msg_0.z = 0.393838310575113;
    tmp_msg_0.t = 0.4817891194758408;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EVTQFOMRQQFDGIQHFPIKJEZYJNWIGGHFXLRBUZMLYZLRQWKGYSRQXGCVSTSPXIDQEBNGTTFVHASEVUAFJWBDZBNMUSMAKTGUOYXFYNKPEOJHVPHSEXHASOPNKYDICAYLRCNUEOYWQKWOLDUTKJKRDGPHICF");
    const signed char tmp_msg_1[] = {64, 121, -41, 23, -1, -105, -5, 19, -72, -23, 46, 59, -99, -107, -38, -117, 38, -73, 123, 117, -127, 113, 101, -14, 30, -98, -29, -34, -81, 124, 50, 44, 58, 37, 59, 73, -50, -102, -51, 50, -6, -118, -128, 60, 96, 126, -117, -119, 88, 25, -89, 123, -32, 54, -98, -94, 83, 86, -97, -105, 47, -9, -119, 65, -86, 63, -43, -10, -122, 41, -43, -51, 30, -105, 79, 101, 73, 22, -4, -112, 32, -3, -45, 2, 28, 8, -7, 57, 37, -79, 16, 104, 23, 125, -88, 22, 65, -8, -28, 57, 56, -116, -82, 68, -18, 70, -25, 13, -46, 99, 48, 61, 13, 98, 116, -40, -122, 88, 106, 51, 28, -78, -86, 31, -66, 112, -48, 102, 122, -35, 87, 119, 74, -20, -118, -109, 10, -42, 82, 31, -75, 87, -88, 10, 52, 49, -15, -12, 29, -57, -17, 102, 26, -76, -11, -94, 126, 96, -115, -99, -55, -55, 46, -75, -5, -22, -104, -56, 125, -63, 49, -123, -75, 75, 62, -90, -78, 103, -95, -100, 15, 101, -64, -35, 54, -127};
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
    msg.setTimeStamp(0.43754689216839504);
    msg.setSource(53338U);
    msg.setSourceEntity(93U);
    msg.setDestination(37166U);
    msg.setDestinationEntity(149U);
    msg.req_id = 40047U;
    msg.status = 52U;
    msg.range = 0.24282050420093837;
    msg.info.assign("PJXVPYFFDLPRELHZJNJRIBWTCAUHANPUNMIMXWNEHGOLYTCDSQKWKMCSBROAAJZYFKVWITXKWTPDQRGAFVOMHCNUZAUTBNCWXBGHVOZBYGLEDXN");

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
    msg.setTimeStamp(0.7190114949357103);
    msg.setSource(64505U);
    msg.setSourceEntity(20U);
    msg.setDestination(57781U);
    msg.setDestinationEntity(51U);
    msg.req_id = 55119U;
    msg.status = 6U;
    msg.range = 0.05190643838879905;
    msg.info.assign("ZDUVGTZMZUPSAPCXSCXHVCTOOHNBQAHMBWXWXGWUGTNCRDGKJZVFYRZVRYINWOBRCUJPNSKGWSDDJRIKM");

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
    msg.setTimeStamp(0.6870530033093885);
    msg.setSource(39551U);
    msg.setSourceEntity(166U);
    msg.setDestination(30317U);
    msg.setDestinationEntity(165U);
    msg.req_id = 61731U;
    msg.status = 119U;
    msg.range = 0.0023723538115688614;
    msg.info.assign("XYKTHCYHKKJRQDPVEATPFIKLZNSWLBSHDOCIXBSRAUHPRLZOODWMQOLVCPFWNOKKCSGRUNATMQJCSSEYZOITNXQVCBOGTNCXHVYCRNGJJZFJZPVAFCRTYOAYPGTXZLBZMNDJQUEBUMFHGIGMLNSPKUUXWEQYFYIPJZSVF");

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
    msg.setTimeStamp(0.6869109076359157);
    msg.setSource(60550U);
    msg.setSourceEntity(234U);
    msg.setDestination(56585U);
    msg.setDestinationEntity(131U);
    msg.req_id = 12373U;
    msg.destination.assign("KSJPZXVIAVBOLHUAPHWFCNDGORNJQCJOAHUENTXKFPYDEUXWWQCEDJKIZIRUEHOWDMZVBPMUXYZPVBMJZTCXTCUIZAIKSKOHZOGIGSLCIDBJCTGFQYLJTZGPTNOEIYBPXRVRLJAYYWLWRRMSUUFLXWMFFFANOSELRCGMBKHKQIDVWKCBSFYELEQDDBPDTHGSWQSIOBQGJDUZYGNYRCHVKXBHXN");
    msg.timeout = 0.11695728513035153;
    msg.sms_text.assign("KMEIZDOZYPOFY");

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
    msg.setTimeStamp(0.9865831415098496);
    msg.setSource(12442U);
    msg.setSourceEntity(203U);
    msg.setDestination(29397U);
    msg.setDestinationEntity(202U);
    msg.req_id = 50964U;
    msg.destination.assign("IXYWPULRTHHENNYUDMXJOBDIZEJVTIVWVAOQMMBGOYUOCSMXAAYWFMNPTCXFHNTOSJBZIZFTJPINPJLEVSZGOHAEZCUSASURDPQYDFFRSMUKEGZUGODNMXLRPLCMOVLSIDSFKWLHWYGINJFACEKHORLT");
    msg.timeout = 0.4908925518606587;
    msg.sms_text.assign("PPKJWCHOPZSHHZBXHTYUAZAZTRXUIULBXNLOTRAPYOHGPNTWXHBVMNHBGMMXQLKSNHODELRYJXGCSQSHKTBTCKDQZFUEJEDDGGWDXMSYVTPOPQUVICFAUGOFNJSIOHKVIKFEEWWYNTJBNRBYCQCEKTOKFJYFZNNSEAJCWISIMODG");

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
    msg.setTimeStamp(0.4728153362052596);
    msg.setSource(49052U);
    msg.setSourceEntity(11U);
    msg.setDestination(47761U);
    msg.setDestinationEntity(179U);
    msg.req_id = 9508U;
    msg.destination.assign("CKJEFFQBWUZAILJZFZZLTIYVMBSNQYQNDKFEVQFKETGCUZ");
    msg.timeout = 0.9816473864608921;
    msg.sms_text.assign("NYVHCWWECHOYQEUTXVMRLEDXPKQCXSBJMWGVGWMHJXMDVIDRULJFAJZNPILLVBZMCXPOFIFGQTJUOBTXJAANHVWGPTGQEEJELELICHWRNWWQTITISKPYYJBUBBAGAQGINSEYKOH");

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
    msg.setTimeStamp(0.22920451207445158);
    msg.setSource(49483U);
    msg.setSourceEntity(156U);
    msg.setDestination(8103U);
    msg.setDestinationEntity(152U);
    msg.req_id = 12720U;
    msg.status = 128U;
    msg.info.assign("BISOSLTCNAHDDIAEJJBASPBTHKLYGCRXVGWCVYODJNQODOLXNYMUDPWYVRSGLSZAWUDRFRAHTGWUVOWLIMHQRQINBXKMKPBJBDUVWBHTFKQIWZGXFCGRECNMOJYHPFQKONMZXZZCFSYBCJBELKEDIHMQIAEOEFGVNEJLCJYUAJFWEYHOTBFGZSQVNWKZLOI");

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
    msg.setTimeStamp(0.7004537097320982);
    msg.setSource(28784U);
    msg.setSourceEntity(120U);
    msg.setDestination(26210U);
    msg.setDestinationEntity(127U);
    msg.req_id = 55750U;
    msg.status = 254U;
    msg.info.assign("BOOLMRYPZYKAGRGFKZCPCQWUYMYSSYWHEJPZZCPDZNAVGCDHJZFEENIJWEKENHQNARFCQAURBASHTBVUPQUMCIFWHVNLTINTIKDBDFJJWQVOKMUHTMXFJKMSCSPEVXEBZADHTTFWIOXJWSLJEOUPGUQGJIQCUNRSHDRJIXWLBKDZGQCRWBVBNIVOSXVMOXPXSIQDGUDMRTXYAOEXPHPMMFAGTVUZVNZHALYKY");

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
    msg.setTimeStamp(0.6945440400531958);
    msg.setSource(30534U);
    msg.setSourceEntity(46U);
    msg.setDestination(14326U);
    msg.setDestinationEntity(6U);
    msg.req_id = 50240U;
    msg.status = 4U;
    msg.info.assign("CAEWQDOTVICGI");

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
    msg.setTimeStamp(0.207357584411064);
    msg.setSource(54803U);
    msg.setSourceEntity(64U);
    msg.setDestination(60406U);
    msg.setDestinationEntity(129U);
    msg.state = 86U;

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
    msg.setTimeStamp(0.8372043261297529);
    msg.setSource(39184U);
    msg.setSourceEntity(46U);
    msg.setDestination(47683U);
    msg.setDestinationEntity(224U);
    msg.state = 77U;

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
    msg.setTimeStamp(0.30133985639594973);
    msg.setSource(64094U);
    msg.setSourceEntity(51U);
    msg.setDestination(32614U);
    msg.setDestinationEntity(252U);
    msg.state = 119U;

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
    msg.setTimeStamp(0.5059318471350072);
    msg.setSource(18455U);
    msg.setSourceEntity(195U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(93U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.3532454459643969);
    msg.setSource(24212U);
    msg.setSourceEntity(53U);
    msg.setDestination(43050U);
    msg.setDestinationEntity(208U);
    msg.state = 71U;

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
    msg.setTimeStamp(0.8016751420876402);
    msg.setSource(51469U);
    msg.setSourceEntity(158U);
    msg.setDestination(36914U);
    msg.setDestinationEntity(252U);
    msg.state = 33U;

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
    msg.setTimeStamp(0.8035146601571137);
    msg.setSource(34081U);
    msg.setSourceEntity(212U);
    msg.setDestination(23708U);
    msg.setDestinationEntity(127U);
    msg.req_id = 54893U;
    msg.destination.assign("LHWEMFORIKISZCNVAMQSGQPVFRVLEXGMCGHWWQAISUXEEBVYPDOSGUQYAKWLUWOGSNMXHFRO");
    msg.timeout = 0.3742950550994705;
    IMC::SystemGroup tmp_msg_0;
    tmp_msg_0.groupname.assign("VUCYWELWFCSTATJJBXZOOGRHIHGXCEMNTXNYPMXYQRULHEYGDGPDPQXFACZWSZCBBDHJQUHGNZKHBBYDVMBIGLZLTOIRWUXSSMMNUMCFDHTBEJNQSKIUZKORAMOAHCTXTFMPKPYLOPPUULLFARRRJAQQANSNSWAMIIICQVNZDQEENSFQJIHJRWKKDBEKPWPFVYBIXKQAKGOJPOFYLISSNZYGWVGEEACJTRVMHDX");
    tmp_msg_0.action = 101U;
    tmp_msg_0.grouplist.assign("AVLFFQSMJWJPBEASQGSHCAFNUMWICEZHDLYJVWLYVCPVYCGPUXZXQGMILUFUSECEWSEMRCRSNWOVFKKNHJQQUJUERGFXORKVNOQGAJHZNZPIJVTCBYHGKXBFGQBLKLODZTIPTDBWPFLNSRAIYMDDCEAXKDQKXATHBYLUIZMUBVRLFODPYSBIPJMCADYRKUBGORHIAQHXDTWNURTEXMGTZNZGHWVYZRVSZOIJKDPIJEHBWXPOEKOMMYTFNTTCNW");
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
    msg.setTimeStamp(0.04438611122753289);
    msg.setSource(48842U);
    msg.setSourceEntity(155U);
    msg.setDestination(20189U);
    msg.setDestinationEntity(183U);
    msg.req_id = 35131U;
    msg.destination.assign("EFLSPTMKRXCHQQTFGRTXIUAVMKGNGABSFZOAINBSOBYJVZHZUUFXCRSDTDFMAIJLPIPZXTMKCDQVULLYUWEWAVVEFQCMMLKHIRLSBZRDKUHRDZMIIMOCQONXOWEFVNHGQGFEBHRIHU");
    msg.timeout = 0.8004581983528787;
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.3647929053727179);
    msg.setSource(25847U);
    msg.setSourceEntity(13U);
    msg.setDestination(64197U);
    msg.setDestinationEntity(234U);
    msg.req_id = 59171U;
    msg.destination.assign("ZBSBYOYDMTNRYPLZANUREKRIQEYIGTJTOPOZPUHZVVDJGJQTBANSFILPQQPFBQBOBPROYHCWPVISIUVZQXWRJKLFUGCUKHFCMLXENSYTNDIYGHZLJWESQANDWXYQOZTPOXASBIDWWEZJJVDKHELBDYMKGNOVFWVMRAPWMVYPLN");
    msg.timeout = 0.46849642571423755;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3285736634U;
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
    msg.setTimeStamp(0.5427909695074512);
    msg.setSource(54390U);
    msg.setSourceEntity(55U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(71U);
    msg.req_id = 11317U;
    msg.status = 248U;
    msg.info.assign("QVYFFWJHNXEEKDWQZVSNASWJUPGWSOVKULSSBAMCAIMGDGKXBQFPYUEMWOUIYPDSZTAFTPQBZNLKZGLIZCZIVKAJTEJJONBRTOFQANYXYVHMEJFHRKJBIHYQFVZVNQRDCDHRANKKWBNTLOGNXWYGLEFAGHDVCROUMPSCPYMYOCXPLIEIDRZGSICHIDLHPMCRLHIZGXBNBSUGFXXYRVZJROMDUCWVELWLQCJTUKOBTDFMEUXAKMXTQPJT");

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
    msg.setTimeStamp(0.369467079460602);
    msg.setSource(64921U);
    msg.setSourceEntity(186U);
    msg.setDestination(29608U);
    msg.setDestinationEntity(187U);
    msg.req_id = 12517U;
    msg.status = 220U;
    msg.info.assign("BCUURSMQUYIAQLHKDPIVANTRNIUROHFZEIAYSXXKBMRGCJPGPOXPMRCBIMNGCEDOWVVLODFQITDSSQFKMVKXGOQUCGGEKVUEWQF");

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
    msg.setTimeStamp(0.8690141132090031);
    msg.setSource(8859U);
    msg.setSourceEntity(76U);
    msg.setDestination(63354U);
    msg.setDestinationEntity(213U);
    msg.req_id = 10289U;
    msg.status = 180U;
    msg.info.assign("KQZBJYZITFNDNJTHSGXLMBZLAGBBQPDLRZKKVFSLPCHODSEAMRSNOOVLBCQNAHVWRYGTFTXRBQQO");

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
    msg.setTimeStamp(0.8577016879169159);
    msg.setSource(62985U);
    msg.setSourceEntity(193U);
    msg.setDestination(24477U);
    msg.setDestinationEntity(41U);
    msg.name.assign("FVDRPQXHOTSZJSULHJJYBEDRHPLJQZEUAW");
    msg.report_time = 0.35237361030963565;
    msg.medium = 8U;
    msg.lat = 0.030446783031754077;
    msg.lon = 0.6636809739691196;
    msg.depth = 0.5235521909420554;
    msg.alt = 0.5709338334377265;
    msg.sog = 0.4991897167082934;
    msg.cog = 0.6453175232509402;

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
    msg.setTimeStamp(0.8957193446363557);
    msg.setSource(17025U);
    msg.setSourceEntity(150U);
    msg.setDestination(37921U);
    msg.setDestinationEntity(90U);
    msg.name.assign("KFSKEVVZURRUDQGUBPRFFINSGDMCXWHMJEQEZOELNYNDAPBVSSZDAYMZINCPIRCEADZVGWEJFNGUIAUZVRNCKHZRSDPZXJTFNOIJAEBZYUJLBOUYMOLBKHLFFQFYXTIESACFOYPHEICAJQAGLQUGLKOUTXGDMX");
    msg.report_time = 0.38184063119760137;
    msg.medium = 230U;
    msg.lat = 0.30893608130351313;
    msg.lon = 0.08878821993852049;
    msg.depth = 0.7240088391317187;
    msg.alt = 0.7554801088690454;
    msg.sog = 0.665900913867171;
    msg.cog = 0.3584252977793392;

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
    msg.setTimeStamp(0.9187329944761565);
    msg.setSource(56113U);
    msg.setSourceEntity(181U);
    msg.setDestination(6259U);
    msg.setDestinationEntity(118U);
    msg.name.assign("GXOUOLAYLJPWUMNSTRDVYHQDHUNYIJCXMMVHBGYQUOMCANZVILCIWIZUBTJQPYFJJUBSDAZEHXZTEVFWXCFKQSDKRCKNGYMDOVBGGXNZHPAZMGYKOUPJDRKFGQONZSSREFKDJXCPOEENLJESVFUICRFQTZAPVLSOQKLJXGRTTBXMIMODBGRHTAWAQDLVHSFXXEYTUZRHGDS");
    msg.report_time = 0.723301903471641;
    msg.medium = 37U;
    msg.lat = 0.14335760555014532;
    msg.lon = 0.905036014859783;
    msg.depth = 0.27483254834214044;
    msg.alt = 0.45670805278012383;
    msg.sog = 0.02349710655150805;
    msg.cog = 0.012157849349843874;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 54U;
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
    msg.setTimeStamp(0.20929275263341995);
    msg.setSource(61684U);
    msg.setSourceEntity(135U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.7674234104287445);
    msg.setSource(32942U);
    msg.setSourceEntity(33U);
    msg.setDestination(28316U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.047550990464037546);
    msg.setSource(20224U);
    msg.setSourceEntity(92U);
    msg.setDestination(53750U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.8614872431510519);
    msg.setSource(3161U);
    msg.setSourceEntity(248U);
    msg.setDestination(15532U);
    msg.setDestinationEntity(138U);
    msg.plan_id.assign("POONYUTGQBCWYYCRQMBSBKHJQXQOANFNESYNPVTCKGZBWECXOXIRVDZGPUVUPWKBCLWEGRJGYA");
    msg.description.assign("ITJYFYDGBQULJQCZHUDKAJLGVJXEUAELTRUWLWNBPZGYZTSOMDYLAC");
    msg.vnamespace.assign("PNKUBSQPVEXHYXAIXOCDHEVTDWHGZPWIRDDRXUPMLQMRGZXVZKEUXNMLMGEAELGEFWNCBIPQENSVFLGODIJQHJYXZFEWBLSPORBCOBESNWNKIBFZZKGGNOJLKUOATTSFJSRTNLBHQCQDIOCZHGSISRYEUWQVM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TQEMTWLOLJABHYLDNTQDBUIKSTSZUQZUSFJRNCBHAGNFXJRCYVOPPSXGFAWDICIMFGRAFIITUPOZRIRVGINMMKYKLZPEOBQLWZFGCW");
    tmp_msg_0.value.assign("DJIFVPABEXWKQNJQCIRBUOZMPQLDFUSYLOLQFLYCOIGXWZGHELUHEURNROSVVXHZGIFZZZWBLRWTLHMVBFHMTSATNHYSPARNWOIDVPFSEPNKGGLFYCTKSDBUFAWZKVYIJIJKVGALPYOUFCAIYACJDJATEYYNMJJXVDLHOCCROJHGMM");
    tmp_msg_0.type = 60U;
    tmp_msg_0.access = 189U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GDEDSVUPPEBOMUFRZDFAMWCRPMPSFTGTSYWUYZOGXJJAIWXKWPRECCGOFHJS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KNSRTBUBLOGQCTGQSVPFVNNEVLKTQLDNEJWKTFPUUSDXHDOCMMAJFSFUXSJLHBCOZIDWLAGOWSRWAMYNNDNKIHDMTUHXCEPLAAEWIVBQKCHJMNJMSWRHUIVVJBTXQJZNMW");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.9791995682289045;
    tmp_tmp_msg_1_0.lon = 0.5437124248402232;
    tmp_tmp_msg_1_0.speed = 0.948607572031041;
    tmp_tmp_msg_1_0.speed_units = 232U;
    tmp_tmp_msg_1_0.duration = 33844U;
    tmp_tmp_msg_1_0.sys_a = 58645U;
    tmp_tmp_msg_1_0.sys_b = 2993U;
    tmp_tmp_msg_1_0.move_threshold = 0.5274844607181336;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PopEntityParameters tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.name.assign("KVWXAEMKAFDVTUHFXIBHSOFPFPYIPRGTSTKZJKKAVCOBNJHMITMABXMXHKBYSPCSTFKUWDTEYZDVXLLKVUANBQTSGJVGGOTPKHLFBQCRHYOZEIVNEHUEECVCDQNEIRIPRYLWXWCNQOPWJGLAMJZNMWBDGSAHQOJJOKIEDXMMXCQDUYUQQXJSFSPJIMALH");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ZDYPYKVUSWPLVDPVWSTTFLUCHRNIOZPLQZJNBELDKYCLJHPKZVGTWDMEVFZGWGJTRSKQKTBBJAYCDLOMYFOFZRCIQJIWMHHIGFIJBABCEZFGAQXHKEBUYNQLSNSKPNCVCBPPWOHGXAJRRHIXGMGJORTDDRFKJIIHDEOLXKPCWDVEUOQTSVYOMFEIUGARPNLQZEE");
    tmp_msg_2.dest_man.assign("PPPTYWCWAKGQGUNYOTGWCYBBHNMHXDKTAGSGIFPFAMZCSQNLMMTGSLNKBBUVAEZDEMEIXARWSYYFSZLTWVYEPDTJIVUHCOFSUCZDJXFMHVNDEOKCGEVIZIQOORCQDBKDUPLRFCZJKSCH");
    tmp_msg_2.conditions.assign("IEHHJGHKBITBYNRGISCVKRWUVREJZNLQMVQGJTGDOFXPTJMBPXHCAHDNAMZJPCEENKQSVZEOEFOUNVUOIGYMTUAABJVFUOMDYNFXDBDYIYSNKTFDRNXKCQWLOEMWT");
    IMC::FormationEvaluation tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 80U;
    tmp_tmp_msg_2_0.op = 0U;
    tmp_tmp_msg_2_0.err_mean = 0.5710918238741839;
    tmp_tmp_msg_2_0.dist_min_abs = 0.20436791855769953;
    tmp_tmp_msg_2_0.dist_min_mean = 0.6829060508786036;
    tmp_tmp_msg_2_0.roll_rate_mean = 0.6312964602243544;
    tmp_tmp_msg_2_0.time = 0.8367598123761194;
    IMC::FormationControlParams tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.action = 103U;
    tmp_tmp_tmp_msg_2_0_0.lon_gain = 0.06825672469586441;
    tmp_tmp_tmp_msg_2_0_0.lat_gain = 0.7052901554309231;
    tmp_tmp_tmp_msg_2_0_0.bond_thick = 0.06576136013257705;
    tmp_tmp_tmp_msg_2_0_0.lead_gain = 0.8779192374513355;
    tmp_tmp_tmp_msg_2_0_0.deconfl_gain = 0.31867666895461944;
    tmp_tmp_tmp_msg_2_0_0.accel_switch_gain = 0.6786050663481433;
    tmp_tmp_tmp_msg_2_0_0.safe_dist = 0.34753544175019635;
    tmp_tmp_tmp_msg_2_0_0.deconflict_offset = 0.19682716407616163;
    tmp_tmp_tmp_msg_2_0_0.accel_safe_margin = 0.9005021134168573;
    tmp_tmp_tmp_msg_2_0_0.accel_lim_x = 0.9576412156103793;
    tmp_tmp_msg_2_0.controlparams.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.3204615847470065);
    msg.setSource(51889U);
    msg.setSourceEntity(28U);
    msg.setDestination(33388U);
    msg.setDestinationEntity(89U);
    msg.plan_id.assign("UWUKVKEYWOKJQXQWYVGNYZKUPPHJXCNXZKLJQQWFAGYRDVDVHBQXTLBETLDZPTESCWFECEBLPCWHHCAFNUNZDADXRBCAGOMLOBOXTQSBZDXQHRPWNZCRADOTDKNEAFW");
    msg.description.assign("YUYRLBCDRHJGOGZIWSZTOCWOHSRAFWCVNFTAHKOCTALKLJJZUUMZFNCFVJDNPDDTSLYXWDXUIEISPYLEUFYQQMQJQNALCJRXTUSBXVQNKNVVUKQKIMHGEWZFHZMPMKJBVHOFRCDXMIETSYMAEMXEREVPRTHDQSFYFQSPOMWGBNRRQXIPNUGPXGNBUTVABQAAHGIKBIJSOXHILZWBEIALVHYEKAVJNJTDYZELOCOXP");
    msg.vnamespace.assign("RTTTGAVKWRPHIHSOMWCSZZZZNWSQPBAYENLMKIQFLSBITPDBWYILPAJHUOEICEZRYMPPNEAYSKCCXLJGZOGVABRNOWOXDGLZQUPWGCKWRAMPEFOHXETJK");
    msg.start_man_id.assign("QPPPUWOLNOTXDQOGMMVIYIWENNHSIFVVDSWJRMQEBVDUZLCBNZHYENBIVMICRUYPAGQVJFYIWZEAHLCQQWBTESKINZPLYZONGEMMOWDJLBFXGPDKGKXXLZSTPXUFMEZHHLSRKRHBTYXUCSFHGIRKQCGDNUYPWHJBOYFXDXURMCIPRYWAKOIJUW");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KOROTYEJRZGGHSUQLPVJWZWOUMELOSQDSWKVGUYVFLXHZWXPEFGMSADKJTMIEAHFAQCGWAJQREMFENPWRFLJNPCRUM");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 4912U;
    tmp_tmp_msg_0_0.lat = 0.7162879309411255;
    tmp_tmp_msg_0_0.lon = 0.5730804119519033;
    tmp_tmp_msg_0_0.z = 0.14096411283659327;
    tmp_tmp_msg_0_0.z_units = 157U;
    tmp_tmp_msg_0_0.speed = 0.8772264101552208;
    tmp_tmp_msg_0_0.speed_units = 90U;
    tmp_tmp_msg_0_0.bearing = 0.39269117452078217;
    tmp_tmp_msg_0_0.width = 0.08201993544652197;
    tmp_tmp_msg_0_0.direction = 8U;
    tmp_tmp_msg_0_0.custom.assign("WXYNNBBOADDDQAYEKLJXKHGFZASUCWYZBYFXJWCKFIEKZSMKTHJPFXBCVGKHZZIZUSNSQUEHWPIUUSFDJTW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 149U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RowsCoverage tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.16987122819985045;
    tmp_tmp_msg_0_2.lon = 0.8586523073190768;
    tmp_tmp_msg_0_2.z = 0.42023466564851786;
    tmp_tmp_msg_0_2.z_units = 108U;
    tmp_tmp_msg_0_2.speed = 0.6172887712826987;
    tmp_tmp_msg_0_2.speed_units = 192U;
    tmp_tmp_msg_0_2.bearing = 0.5461610665844601;
    tmp_tmp_msg_0_2.cross_angle = 0.7888444985190407;
    tmp_tmp_msg_0_2.width = 0.0943262324654982;
    tmp_tmp_msg_0_2.length = 0.6200310620685935;
    tmp_tmp_msg_0_2.coff = 24U;
    tmp_tmp_msg_0_2.angaperture = 0.11430204328790394;
    tmp_tmp_msg_0_2.range = 19415U;
    tmp_tmp_msg_0_2.overlap = 174U;
    tmp_tmp_msg_0_2.flags = 75U;
    tmp_tmp_msg_0_2.custom.assign("VTYATHISVVYRDRCBTDWPOBHRXPDKKWNFCA");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::Chlorophyll tmp_msg_1;
    tmp_msg_1.value = 0.6892731249393667;
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
    msg.setTimeStamp(0.7764972221016798);
    msg.setSource(56710U);
    msg.setSourceEntity(38U);
    msg.setDestination(58135U);
    msg.setDestinationEntity(163U);
    msg.plan_id.assign("PKZCJWURIPQJNGKSSHPGGWCBMYVSVQGFADTGZXZIMGUEUENABDRWRAVJNVNXDEMRAZQDYZYFGODXKICBNEOQEPHBCIIFFBRRNISVFZDHOTQCZHCMWCWHHJNDVOYKKNSBWUXPXIVZPDWMWUTQIJCVAINOLJUAZKOSLUOELKFSGKT");
    msg.description.assign("BGAQMVPBWPXINOXHGITHMDJARFMYWTXDFIWUTCYLUKMFNRVCWSPWZBYLXSERITIQYMPNBFSGQXKDNUBAOENLIOGACUHKGHBCQKLNAFHKHXVEGPRBIVPSZLCWQQOLTZLUZNFJYEPBIPQWYXZSOVJSJSZJAM");
    msg.vnamespace.assign("NJHELIMHLLPWUDBWZUMWMKOHGBZMIVXBEJHTRYDSJU");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RYZCGCMIXVDZXPSKSBUAITLDUSWJEJVHLUPFNPYQYMPWESFCYFLGKLWLOIGTTLTLECKWBVYOKKOCNGBAIUQVMGRSUOOEUHQLCONTZFINTHJ");
    tmp_msg_0.value.assign("OYEHMMZOFKVSCWUPAQWRJVSVBZWGSDUWMZTKCYUBOFLUYHGNYXPMIXPSFUTQASEEDMDQKLXKIRKUBFHTOBVWZRDDXHJHQLETFAITQGOGTABOTPJXNAZWPHBXHIFPNVWNSRAKIBEKCQFEYDMSZDKILNVJGQKGMJJVIYRJUEYSZUPAZINGRBLWCRLATLLCFZRGNCMNMVCFYGODJQQPCIFSXVWHGYKBHHSEUDRNZQETIJXRDOUCCVEPW");
    tmp_msg_0.type = 133U;
    tmp_msg_0.access = 245U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LPSVSGWQSWHDRRJNZEKXMOMENWUTHHZYOFNOBYOEQPROGRETCNALO");

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
    msg.setTimeStamp(0.10349624450971973);
    msg.setSource(48653U);
    msg.setSourceEntity(73U);
    msg.setDestination(29114U);
    msg.setDestinationEntity(85U);
    msg.maneuver_id.assign("BHIVSSHFQAHPWZHPZFWJGNAPRFAORLTUCCVTSRVNTYKARMKILTOTBSICCALXEWCJKYOUBRXPOJMRHQSNLFVUJIMBNELSERDYKNXNJKBRMEMKUZAYGQQWAGVQGDZPFPCSROSKBJZDIDFRYBWMVHAGMTGNFLGPWZHSLWXJMYTPDXOQJWCIWYPMXDANYSUDVEHOAVB");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 151U;
    tmp_msg_0.lat = 0.9935368769858639;
    tmp_msg_0.lon = 0.6998640444399555;
    tmp_msg_0.speed = 0.9642697992324362;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.custom.assign("ERVFUYJFNHMVWBIWEBJPMJUKLNGJXWJ");
    msg.data.set(tmp_msg_0);
    IMC::IdleManeuver tmp_msg_1;
    tmp_msg_1.duration = 46168U;
    tmp_msg_1.custom.assign("IUZJJPDFEFZDLVFUHDCSEJAPRIKGMTHXCXQ");
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
    msg.setTimeStamp(0.7809531674294924);
    msg.setSource(15827U);
    msg.setSourceEntity(137U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(114U);
    msg.maneuver_id.assign("QKRYMBRLTXEKHUBAIHSRUJGEXDBBJFZWFQVLICXRJXTKTQAZOOSABXZNNKCGNWBSIEHCZULHTNKPEGFYBJVYDCDCUQVREVSXQSDKYODPWOEAOSPGNGHIMGNFXPIUWLLKAJALIQVLMLFLNCQOGHYYVZDXMPJDMZNZAZOUUZODSERORVEJFDCKTGWYWJYVQITEPTGJIKSBCPTIDHVFMIQMN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 16534U;
    tmp_msg_0.flags = 157U;
    tmp_msg_0.lat = 0.6211471775223751;
    tmp_msg_0.lon = 0.6536985113160101;
    tmp_msg_0.start_z = 0.5204040785573812;
    tmp_msg_0.start_z_units = 246U;
    tmp_msg_0.end_z = 0.6306591558949604;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.radius = 0.048008864058366574;
    tmp_msg_0.speed = 0.8053684089334208;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.custom.assign("EKJPXPBWCCWARGTMDMZZDOIOQNMLRWEXBLGIYUSVTAKPIUCWEGYZQHYPZSCEWGKFFWOYNYICBHHVOPYEROZKAPVZILHXYVDANZAOPKGUHUGRKIUMXMXILFFASIRSVNWTLTUUXNHYSMNQELBZQWZACBGAMKLFGFRYJJOSKXEHVCDQERPECBHHETBSYDTMNVQXTX");
    msg.data.set(tmp_msg_0);
    IMC::OpticalBackscatter tmp_msg_1;
    tmp_msg_1.value = 0.301654626403164;
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
    msg.setTimeStamp(0.5173584388968933);
    msg.setSource(51299U);
    msg.setSourceEntity(2U);
    msg.setDestination(32835U);
    msg.setDestinationEntity(42U);
    msg.maneuver_id.assign("SRGMHNIFDVIPJE");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.24386151649436527;
    tmp_msg_0.lat = 0.5656002303923576;
    tmp_msg_0.lon = 0.5186330544950642;
    tmp_msg_0.z = 0.5177772031361946;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.travel_z = 0.2308920323786805;
    tmp_msg_0.travel_z_units = 89U;
    tmp_msg_0.delayed = 64U;
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystemsQuery tmp_msg_1;
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
    msg.setTimeStamp(0.26929937960009287);
    msg.setSource(49459U);
    msg.setSourceEntity(240U);
    msg.setDestination(19301U);
    msg.setDestinationEntity(163U);
    msg.source_man.assign("LYRBLSETUZUQMMGQPAZOUEACYEFKDRZPQXYGCDBKDKWJSVQNHRUUIZZEPLCNGQIKVSPVVBLAJEDYNLFEIXTLSJXUJNLOVWRORNASXFZFABGSJRRO");
    msg.dest_man.assign("EDIEWIADBMLNGFFCMKTJZAYXGDNUQOXWVBAGPVIWFEZFCFDSVWWKXBTXLPJTYHNLZZWQURMSAQGHKRKPTKSCLCBHYICGKEVUZVRAOLYBVYDBAPJQSZLSADSEKEOATNANOHPXBGRYXUCIQONSBRMKQNDXGEFWMCPHRX");
    msg.conditions.assign("EKJLOBIQCWTTAIHYZXKTQXGMWOYCG");

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
    msg.setTimeStamp(0.11082492567929847);
    msg.setSource(23852U);
    msg.setSourceEntity(148U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(201U);
    msg.source_man.assign("DBDPKOQUOUGYGRYZAMFYJJCXHXZYKMQAOUNBFEIKLWRSMFBZJTGPISOPOKLJDQWBNMBNCXGTEHRLIR");
    msg.dest_man.assign("HHSTGUPEPVFAOEMRPYOITSPWWLOLUCISRTWVZIKHWKPKCSVEXJGSQQGOERDJNEOYMBUZCVPQDUPFPYBSVHHXDOGKMPFLTMXKFDNYQLXTNGDMAABKQKKXCDWTSVXQDZHGJRCILOXARZUFTCSXDBUMNACNYHJMQWAACBWMIOSJVWWUKSIFRLVNYEEJOQAUUVYJQDZLTIJTDZZYWMYIOABZJTHGXBGAJCRHFKNFBRIRBCLEHIM");
    msg.conditions.assign("JBPYKCEREZWYHWOALVXYJOGRKODVWKLRTGKOOIWXIKQUSLKGFSRCNUHPWZQFYHFMSEVYOBFOWELSIXZDGALEZORRNQVLYLBBFPCZTPHANVSZZQECXJAJIMBGASGUFSKJAPUHMXNJWCAQDWPUGRQLMSKMJAKPQQAVDEOXZJTUUNDDVYIRCCRHZDCIBHHXDTNFCEEHUNJEBBQBZNXGGYPFIMIYFIQPOKNWVVVMAIHTBPXDLFSMTTGR");

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
    msg.setTimeStamp(0.11947313244906144);
    msg.setSource(53671U);
    msg.setSourceEntity(236U);
    msg.setDestination(516U);
    msg.setDestinationEntity(63U);
    msg.source_man.assign("MOGJBNAIEZCKARKRXSSBUBWWFLSWVQXSNTUHNQMMLUZEMMDSAWJHKIQMXGKMUIXYITRHCOVCCRTPLNPXJJTPHSGCTJRUPOGFDBFUEKOELZWVGFVVWEFLLGMQDJJWAHTNMMNF");
    msg.dest_man.assign("VAUAENKTFIJDJBYKDGMIUVYTGCABUANLVCWXQUZXSQYIQDUSTNPPOAKGEWRLIOTKERUCYIWWOOCJHRYXYVZVWZKSQRFBGRMYWBBKJMWNPEWMHELJDBXRGMXLUZTPSMSTBGBTHFJWBGFHLRQHFVHCPHSKPLAHJFXLHDZVZDEGVYSFCMMNESJAV");
    msg.conditions.assign("EVYMGUPAZMRTHKTOKZCLMSYJWEQZRGVRSTYXBTJDHHMHAMLSAQFNRLMOOZMEOCBBYJAUIXCDINZCBUJWFDLHGVRPEHIISNXDXFPOYPDMNBBTDUJLWGFKROCYKOALWRHTKLGRWKYSZYCFQQUEBCYEGORVMXHCPDNWVEAIQIVIPAULTDQJFBFU");

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
    msg.setTimeStamp(0.7791296984982566);
    msg.setSource(24957U);
    msg.setSourceEntity(39U);
    msg.setDestination(16068U);
    msg.setDestinationEntity(26U);
    msg.command = 197U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FKJOOVJGMRXKGPHZNYKEBCSQPRQUWFSSBSDXAVOPMRYZFBYTFJEDDSEWFJYTERBMVAXZQZUSNYFQNKPXWPUHKVEHFTMXINSTJAZRMULGVYVUICOLZFNZTJPWQLAJGRHOXLGUYCYAPIKHZNCCHEZBEMXDDXPLPNVLWSHLRBCQCYRURLMDOKBZCVTSJWUEGIUOYKXGICGWQHPGJMFACTSGWBLBQWEDUHKAORVQMEKWI");
    tmp_msg_0.description.assign("ENOOUEPXVGLIGDHLJNDFXYCZXTBYCKZECPRYFPXJZSKKMUJAHSJQPKFQEQBDYLIOTAZQYQYIAULLHNALTPJRHFSKWCGITSAVVBUVBMYXCXHUOTMSCDXOTWHJMNQURDZFDAQPBFVFEICEPCACZWBEFNMGRWHTLZJDZUMJYVBGGGEOTXWINRKONOSBAV");
    tmp_msg_0.vnamespace.assign("YWBNPAUJTZIBFSYIKBPKCWFGNDHHHXALJSOBZDBESSWOLKWVGREXXBCUDZNNTJMVFJLQYHWUNPAOEWDXZYJRQRJJIJ");
    tmp_msg_0.start_man_id.assign("SEBDJWZGLMMMBSWPJKSQAQNMYAIFCTQXGDVJMLIAOWGFSTACLGUMYIRCPPKFHBOYZPKCXNSUODKJIRXKUBDKZYHPIYERURITQOUFNUOJPENKYOXUQLTEGXRFGRWGPNBVABNWPXGBYTSFYRMEUDGAJLCTSJOHPEJQTDRDCVTIWAFSRHVCSFHLXN");
    IMC::FormCtrlParam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 76U;
    tmp_tmp_msg_0_0.longain = 0.32446759830129135;
    tmp_tmp_msg_0_0.latgain = 0.9334894468458588;
    tmp_tmp_msg_0_0.bondthick = 440247445U;
    tmp_tmp_msg_0_0.leadgain = 0.9815747164419945;
    tmp_tmp_msg_0_0.deconflgain = 0.8281276550204415;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5787249120292516);
    msg.setSource(3951U);
    msg.setSourceEntity(20U);
    msg.setDestination(23715U);
    msg.setDestinationEntity(115U);
    msg.command = 63U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LHXIODUZJRIXHEIHEJRHZTVKNSBTJZWGMWQZT");
    tmp_msg_0.description.assign("YNFEXWHPNIUKJYLKPLUZJIHXBRBKCRYBVCHPOMWRDIAFMCTJYNCSMMEJYXSLWJCRGPPXGBBAHJXZFPBOTKGILWAYXLHMNMSTUTKDRRGHQGZXAQQFTKLMMCFQOVEXBZIYKUBAQL");
    tmp_msg_0.vnamespace.assign("TXPWCTLKWTCSQSLMUESOAIFONUIZRTRDBEVOXTDGVGKEQFFVHAQXZYNFEHZCADPTOSVUKLEYDKRYIEKXMSGOVZNQLKPPXGUXQFWVSCDHCHRHF");
    tmp_msg_0.start_man_id.assign("DVLTGOFUNOZPDXPBVVSZKUASCVDQMZYABMCORSHATHZNJICPECHVQHERNJHDSBZTNWIUWOUQXGQGKAIQUSRWUDMUDOGEAFEYBCLWVVCKRJPPDRMOBEAHNQDRKEFIXYDTYYJSZNFTFBIAKEPRJPFMQOBGQZVLOGMMXLNJXJCMVWCPBFM");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MYZGPGWXNINTOVZNHWMMKDPQXSJJIFDRLNBTUTFAWYPCTNLGIRCDVDFDQQERMDAZJFUGSRXKBGFUBZWYBJJBUBXODWZEHUUOSVKVFMXXPMQOCDGJLHPZFJHBPIVEKPOUAGXSAKSRLLCHVYSJVTNNGHFSGMKEDVCPBKKEENHVQQTNYMIMWLSKSBEWWQAICYATVIXHIZQIRZEAAYLMCRTXUU");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 56018U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6179651852692369;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.3890539492391262;
    tmp_tmp_tmp_msg_0_0_0.z = 0.950533924396972;
    tmp_tmp_tmp_msg_0_0_0.z_units = 114U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.15411838052907134;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 45U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("NOOORRUFRNDWKJBPOGYOIIXGAHGGMVKXUXIQOBLUEZDHZYUNXZVYJZEBIEBSVFVCHUTRLJNXFUQOCPLJCXQKPTGBBSNXZSOTHDZAKFTLCKQQAMCHPWRHADQMHTMDJ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.timeout = 42659U;
    tmp_tmp_tmp_msg_0_0_1.rpm = 0.07441080731486294;
    tmp_tmp_tmp_msg_0_0_1.direction = 226U;
    tmp_tmp_tmp_msg_0_0_1.custom.assign("VKUBACPXLOHNWSWMWFGJBVHLUQHHTNQCWRKDIAFFSZSAIUCEDCFYDIMJUTPVLSHNQLWBNTWEEQQDCBLMGCVPPUZJYRROZESJIHATFMIWYBMTKFXAFGIDVOXNVWYQKNDYAXYEJDTVMJAZXFHRGSCBVRGUJMTQZPBRYIPOG");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::Throttle tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3722449632148843;
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
    msg.setTimeStamp(0.3869850349868682);
    msg.setSource(8699U);
    msg.setSourceEntity(191U);
    msg.setDestination(46546U);
    msg.setDestinationEntity(1U);
    msg.command = 159U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XAIFUOOKHTSIMNEUAT");
    tmp_msg_0.description.assign("MFLMMRGTQLQGWTZRXJSHAKSSYHMHQMPDENPGBDUFTAIQXIYBVWPECXZAGFIREDBQAQWQMTERBZCUGLFPVQRBKOIUNONOVZXYXIINTKTQNJBAYCJBPHPSZYVYLDYNMFMWYKDWIDCHMXOG");
    tmp_msg_0.vnamespace.assign("TVSRLMDZRBMWACVYHDXRZNJCZTUIDAIFYQKWNCESEASXODFNYCVTGYPBSBJMWWPGPWQYOHBRXHZQXFXTDOXNQUEPOUAISLRIPKYVQMTAGAPEVPVNBWUGQSMGESJCGUOOQFXHXQTNASNMWZTAQUCOZOBKHYLVCEETK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RVLGQKFTATXDWCWGSOSVHUVSUJPCKQIATGCDCDNINQQPEKIUFAWHVPEQBESEARSXVNLWHVZMUAQWRMBLUZDHHPJJYITQLJXLANOYWMUKUVFNAYBSXOPNIZMIKRDNLJIHAPLMTFDBLOFHDJRPGMGFYZPKZPCVDOYBKBZTAJYSUJCABIXPGYTXIMUGVLTDWTSKCMFR");
    tmp_tmp_msg_0_0.value.assign("OKOSKSQUJQHZKVAMMGZCYLNTLOPAUGGRIPHWQYPMQIRXTCWFNGEGJFGBHDVNCVNEHEXFTJYDPNIMJDRMEEWXTDSIXECOF");
    tmp_tmp_msg_0_0.type = 48U;
    tmp_tmp_msg_0_0.access = 28U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PRKSJHJKDTWXFXTWVEKIQNZEYFBHCUPQSLSMXANUKHFTFMOCUWXNLPDSOZRJLFXGVGROMIBBTPLVVOZGCCVPQGDYAGNNERGOMMMZGWCLENADQVQKTUYYSAXECIOJIWMCIFWEHJBAPHDOLQYDQDGPFWYSSHHACYGBFSTAN");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("OXHRFWDPOQBKQBWNYZFLFOBJVJEQXYDIAELVGTWWTEMLOKRYXHBKCNSXQEZRNKUVDR");
    tmp_tmp_msg_0_1.dest_man.assign("GCPWITKFZOTSHIKXMTDAIKHE");
    tmp_tmp_msg_0_1.conditions.assign("DJVBZVRGZCWIUDXGFSTRKKLPSAWRJMIKMNFXSVLYJPCDTXTVYHQEGZYGHDAVGGSAQGXNKQPLRLEWPGOIMITDBZLFYEOFXSDBLIQIUELXHLKCRTGBSZNUPEACZHAPQQKWIZS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ReplayControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 213U;
    tmp_tmp_msg_0_2.file.assign("GCVMEWDDSJWNVEYGKVZMMPHEGXBNMJZNJLRIELMAUHANTHSWXLNETATMTOCLWAWHQBLIKPHGDMCIIXGFSCUQZ");
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
    msg.setTimeStamp(0.9364185470996511);
    msg.setSource(37517U);
    msg.setSourceEntity(203U);
    msg.setDestination(59200U);
    msg.setDestinationEntity(129U);
    msg.state = 64U;
    msg.plan_id.assign("ACEXINOZMXSJQZJXWZUDHWFGXOPARUEYWRQNECGUMVWJWOZVSZVCBBJPXUKPONLHVEFKBKYEQBINILVJMDPKVFGAQXFGOCGFYODNEIQMISKBYAPHYTMWGDTDOQBXDIATLZSARMOQEBORKSYDCGGPZYIRRKMXTSQJECMI");
    msg.comm_level = 75U;

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
    msg.setTimeStamp(0.6111249361517536);
    msg.setSource(362U);
    msg.setSourceEntity(155U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(167U);
    msg.state = 78U;
    msg.plan_id.assign("SCAQSUKKZBJVGOVUYIDXGPRBZQDQHWVXROKEJLZJROMDNBACXEQGXQUGDNIHSGEVNTOQOXRUHSRQQMMHZTATTLULNBHLSKWVKWNTTKACBDXINPYLXZGRWRFPFELFDGHTSVTPS");
    msg.comm_level = 106U;

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
    msg.setTimeStamp(0.09234994019056053);
    msg.setSource(4802U);
    msg.setSourceEntity(56U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(61U);
    msg.state = 62U;
    msg.plan_id.assign("XCIRCLSOWENIIDXGFYLNDXFHXYFZPAEKEWNLKFOKVHIPJGRLNZTOSDWDISJBKIEOZVVW");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.98578627956093);
    msg.setSource(53255U);
    msg.setSourceEntity(108U);
    msg.setDestination(32911U);
    msg.setDestinationEntity(89U);
    msg.type = 109U;
    msg.op = 214U;
    msg.request_id = 58683U;
    msg.plan_id.assign("BWALPCDVERAGBH");
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 199U;
    tmp_msg_0.clock = 0.9285378502236816;
    tmp_msg_0.tz = -68;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EJUQACWNCOBAHOYHGUFXIONCKMBJVUAVBAAMHCUACOBDVJPVATHV");

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
    msg.setTimeStamp(0.6680700332765867);
    msg.setSource(64872U);
    msg.setSourceEntity(36U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(93U);
    msg.type = 135U;
    msg.op = 215U;
    msg.request_id = 23968U;
    msg.plan_id.assign("DXQYAGECNZRES");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 54950U;
    tmp_msg_0.lat = 0.6371128966609501;
    tmp_msg_0.lon = 0.8825255745807918;
    tmp_msg_0.z = 0.4054686700269704;
    tmp_msg_0.z_units = 19U;
    tmp_msg_0.amplitude = 0.6237903022712594;
    tmp_msg_0.pitch = 0.77233567284009;
    tmp_msg_0.speed = 0.24671766197113565;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.custom.assign("AFPITGSKKSYCXVEXDNWSRJQISEESCHLYQCMJF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDKTLHFUJUUVFDORYEPAYKXLGLRZSKXMJLUPLICBFFLIJTCWCZJZFDTRQVLYEYCTGBIXIZQDRAFSDSDBJGVMSQOZCUHRABXNXBGCDNMDPIUJISTQHRYTGNSKZWWJKBQSWAUEZWHOXRMOQJPSWGMCLWAAJAQQNBETPQOEYNCOKDUZIMHCIVBNKUDKVQWZRPGEHRHSJXOEEWVVFFYYL");

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
    msg.setTimeStamp(0.35513098115061525);
    msg.setSource(56301U);
    msg.setSourceEntity(51U);
    msg.setDestination(46611U);
    msg.setDestinationEntity(3U);
    msg.type = 245U;
    msg.op = 216U;
    msg.request_id = 36577U;
    msg.plan_id.assign("KYWLHOLCSSQLTXLBUOBRBADOYXZYWAKGGSFNXRMEIGSXQQCUDFVMECTXMQNKQZYRTSPCKNJKNEDBGDFVUKIJFORMSEAXAIYJTEJWPKBHUHINJLMIJVIHNASYRNTCORFZNTJNQCVCEWHFFFLZMIUQGPOVOHMKZZWKAFXWXYITBSNHOSMFWDJGDRZAPDRLDTOXZZUTREIPGEVUWGZCJBEPDBDUQPVVGKLSHVHPEQQMAAL");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 156U;
    tmp_msg_0.numsamples = 221U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 22161U;
    tmp_tmp_msg_0_0.avg = 0.391000016825074;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.10702414179459141;
    tmp_msg_0.lon = 0.4118808630029467;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YWZINYUJUGMYHTOCYHHLEQMQFJCPMJDBQZHYQBSIFLFDROWBAKQEAREGMKQCRFZPENPWYIXOGMHXSIXRCEGNVKRXSMDHGXBTBONYLLGOHHRFXDTSMLJQVWWKCSDVLUGKPWMTPIPKZEFRHNWKWPIJTBINZJUAVBZOYNACCNZASZVABFO");

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
    msg.setTimeStamp(0.23797362578890846);
    msg.setSource(28170U);
    msg.setSourceEntity(215U);
    msg.setDestination(43386U);
    msg.setDestinationEntity(176U);
    msg.plan_count = 64787U;
    msg.plan_size = 2994093581U;
    msg.change_time = 0.45085310076929075;
    msg.change_sid = 13226U;
    msg.change_sname.assign("IRXIEHIHNTPJYCVHMDWQBTEEYRIHKDUAWADMKOBAGFWJYYOVCLXNPFCLUQRFUTEDGPHCPBRVL");
    const signed char tmp_msg_0[] = {42, 24, 107, -70, -47, 55, -11, -42, 124, 16, -13, -46, 69, -92, 73, -11, -110, 38, -31, 29, 19, -26, 43, -24, 17, -12, -87, -60, -86, -16, -55, -115, 68, 104, -92, -47, 68, 77, -78, -127, -26, -31, -6, -8, 60, -75, 67, 86, 48, -11, -108, -60, -13, 84, -121, -110, -31, -55, -93, -92, -82, 107, 5, -70, -122, -79, -60, -4, -79, -64, -16, 55, 53, 30, -3, 88, -54, 19, 81, 13, 13, -61, -28, -59, -92, -12, 31, 44, 59, 6, -104, -54, -56, -35, -14, -98, -92, -104, -61, -53, 57, -101, 106, -80, 110, -96, -37, -72, 107, -12, 105, 42, -98, 28, 19, 5, 60, 56, 40, 94, 58, -101, 36, 39, -72, 48, 122, -82, 68, 92, -24, -24, 5, -89, 5, 76, -86, 102, -49, 48, -1, -8, 93, -15, -39, 33, 10, -100, 64, 9, -126, -46, 114, -15, 67, -98, -115, 111, -52, -23, 21, 121, -40, 45, -113, 81, -103, 44, -59, 124, 105, 24, -124, 3, -34, 35, -41, 124, -120, -17, -34, -114, 9, 67, 49, 107, 15};
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
    msg.setTimeStamp(0.7690644733081718);
    msg.setSource(32958U);
    msg.setSourceEntity(118U);
    msg.setDestination(50024U);
    msg.setDestinationEntity(21U);
    msg.plan_count = 48107U;
    msg.plan_size = 2977998152U;
    msg.change_time = 0.9162287403557049;
    msg.change_sid = 53352U;
    msg.change_sname.assign("CUSRYAMMRXKDLGCOEQUVEWJJZJHZMJWZWGVTCTKKMHULNXORIARDRJIBHULMYDITXNMSVILSDEQRXZBJPFPAHDHAM");
    const signed char tmp_msg_0[] = {57, 124, 19, 54, -37, 43, 16, -35, -114, -23, -26, -106, -128, -113, -47, -33, -43, -64, 86, -34, -13, -69, -86, 22, 106, -14, 102, 53, 111, 91, 22, -34, 49, -100, -30, -71, 42, 15, 76, -88, -60, 91, 1, -74, -53, -53, -46, 30, -7, -91, 19, 48, 21, -83, 46, 58, -28, 92, 100, -7, -75, 87, -126, -100, -83, 9, 60, -33};
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
    msg.setTimeStamp(0.5227386506801807);
    msg.setSource(50223U);
    msg.setSourceEntity(52U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(209U);
    msg.plan_count = 35210U;
    msg.plan_size = 1969139348U;
    msg.change_time = 0.6906641437421255;
    msg.change_sid = 39870U;
    msg.change_sname.assign("QWJZEQUOKVPYJCMQZBTNNSBLZGSLXIDCZKTTOUVENYZAMLCLUHYAJICAFIXBRBTPBJHDHXKFIDZICHUIDXGFOALGMRIECWJTQDDBTVVBKTGYFMSEUURARTEYUVIFEWRKFQXOMHVZRDEJFHQNJNTNXPJBUBLCWMMYJYQMLSRAXGACDHPWZUWKPWKZWKMRXTGPLXN");
    const signed char tmp_msg_0[] = {82, -113, 53, 29, -60, 109, 48, -5, -89, 73, -3, 14, -104, -97, -17, -124, 11, 115, 38, 106, 65, -85, -49, 63, -114, -83, -64, 18, -64, -109, -36, -17, 51, 41, -23, -52, -34, -102, 51, -99, 68, 7, -81, 57, -20, 27, -116, -70, 81, -82, 1, -25, 90, 115, -2, 22, -103, -32, 52, 26, -12, 87, 105, 111, -1, 94, -13, -77, 58, 55, 73, -103, -46, 41, 118, 107, 20, -69, 60, 45, 109, 95, -70, 43, -89, 27, -15, -90, 84, 85, 93, -101, -126, 68, 26, -92, -77, 112, -53, -111, 48, 95, -47, -112, 101, -111, 36, -95, -96, 65, 22, 108, -114, 39, 29, -113, -99, 77, 103, -78, 82, -6, 60, 77, 8, 69, -91, -6, 38, -29, 120, -46, -109, -90, 47, -69, -7};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("MXCJMCULLWKESZMLAWAZMBRBPIEDMSKIGNMREJGDPJIRWDRLVKPCWXYCZ");
    tmp_msg_1.plan_size = 43789U;
    tmp_msg_1.change_time = 0.2599908220862295;
    tmp_msg_1.change_sid = 57554U;
    tmp_msg_1.change_sname.assign("ESJNRMOSSWJGZUICBJZGQNDIDVBWVNFNHIVPFCRSURAGHQEXGVYXKQMTKNYOAGCIQGUETVISHFSFFMFYNMDACUNWBNKTMVZPLCJNMLACMZHVOZDXCICJBDGOHKOXXSCRQDWYHBOHSQQTEWRWDBYPJKDBUHLWIYTOTIZPIEZXEALKLQZ");
    const signed char tmp_tmp_msg_1_0[] = {-73, 118, 10, 27, 68, -20, -30, -86, 82, 81, 54, 13, 106, -53, -80, -30, 32, -71, -7, 13, 111, -25, 85, -87, 41, -100, -32, -45, -36, -87, -71, -50, 70, 69, 62, -31, 56, -24, 1, -87, -89, -86, 119, 69, 32, -30, -28, -98, 111, -31, 69, 24, 114, -118, -18, -28, 65, -103, 106, -64, 2, 33, -36, 87, -13, 0, -91, -69, 7, -95, 6, 55, 11, 75, 91, 59, 78, 33, -69, 16, -44, 97, 56, 108, 7, 16, 12, 114, 111, 24, 17, -94, 107, 18, -5, 122, 105, 42, -50, -25, 87, 56, 44, -44, -43, -49, -55, -94, -43, 116, -54, 15, 83, -95, -108, -3, 60, 28, 63, 79, 121, 5, -76, -51, -88, -8, 95, 119, 81, -44, 79, 109, -28, 54, 59, 15};
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
    msg.setTimeStamp(0.23886548698267007);
    msg.setSource(49907U);
    msg.setSourceEntity(69U);
    msg.setDestination(7866U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("VAYRAEZNNLGLUHZCWCTZDJDWFZDITNOOYJKKZOABFWWUJAJYVXCEKJTXMKDNWPVPDUWAQYFIBHMSHTSMVUHPXIDEZDHHYCGMMMQXMYPZQETAGJVQXCCWIXGBQENBFNSPHXTRLIV");
    msg.plan_size = 25652U;
    msg.change_time = 0.1903735176240119;
    msg.change_sid = 13443U;
    msg.change_sname.assign("XOSDWRMMTQZQQPCDAKGKHJHCRYEYNSMZRFKKB");
    const signed char tmp_msg_0[] = {38, -100, -73, -41, 34, -87, -24, 20, -87, -18, 124, 116, -114, -90, 16, 44, -66, -102, -88, -111, -24, -43, -110, 6, 121, -54, -124, -28, -14, -91, -96, -85, 16, -50, 18, 36, -104, -112, 94, -39, 83, -125, 39, 58, 100, 82, -74, 114, -35, -122, 101, 35, -108, 12, -37, -86, -53, 33, -102, 39, 95, -14, -88, 59, 55, -45, 122, -20, 116, 55, 86, 107, 78, -71, 68, -54, -124, -72, 38, 62, -71, 82, -87, 58, -53, 110, -124, -30, 20, 25, 12, 113, 21, 100, -24, -69, 48, 16, 89, -101, -1, 86, -80, -77, -53, 23, -45, -84, -41, 51, -88, -37, 117, 85, 70, -112, 84, 56, 12, 120, -84, -29, 7, 91, 73, -1, 53, 62, 113, 20, -96, -77, 42, 48, -106, 29, 5, -18, 99, -33, 55, -34, 67, 101, 84, 120, 120, -69, -54, -45, -75, -114, 45, 121, 52, 9, -80, 109, -98, 107, -59};
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
    msg.setTimeStamp(0.06523222480664004);
    msg.setSource(40060U);
    msg.setSourceEntity(154U);
    msg.setDestination(34151U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("WQYNCRLNCQCBFDSOXRPPDGPKLIXUWIIDBYQCZXOZFGNAAVNRFTHPNHKGNAEIJQMUHDE");
    msg.plan_size = 48666U;
    msg.change_time = 0.9934256254346868;
    msg.change_sid = 28837U;
    msg.change_sname.assign("PJQKLFKIMMIEYDDQICBDHILIRLCOYOHLNZWQUVBYIKYCRGFTNGXRGFWVBGADJODUQXUMIJTEAFJAYEZUAVFXCWQQEVVOKXHRMDSHSPNQJTUFATNRAQOPBOFGHTEMUATHYCCLWGPYKLE");
    const signed char tmp_msg_0[] = {113, -116, -4, -20, 39, 109, -104, 19, 59, 47, -74, -97, -65, 34, -75, -13, 112, -4, -44, 17, 126, -66, 94, 103, 33, -56, -28, 69, -46, 122, -115, 55, 104, -1, 24, 32, -61, 88, -6, 110, -71, -78, 14, 88, -16, 57, 12, -45, -98, 20, 13, 13, 27, -35, -68, -91, -84, 28, 110, -118, 18, -98, -125, 117, 48, 5, -105, -95, 119, -65, -117, 43, -114, 108, 78, 123, 71, 94, 32, 76, 112, -112, 74, 78, 89, 126, 115, -62, 70, -94, -84, 23, -85, -11, 47, -62, 26, 115, -117, 117, -55, 14, -12, 71, 88, 52, -54, -58, -50, 88, 57, -60, 76, -24, -70, -53, -78, 10, -93, -59, 67, -22, -52, 61, -36, 42, 16, -29, 1, -92, -8, -29, -31, 33, -24, -67, -13, 27, -106, 59, 13, 54, 35, -122, -127, 62, -94, -25, -35, 96, 10, 17, 111, 92, 49, -119, -126, -18, -33, -124, -96, -127, 74, -125, 53, 55, -92, -110, 23, 117, -2, 86, -125, -19, 18, -121, -21, 2, -89, 12, 61, -63, -16, -60, -53, 68, 59, -118, -40, -1, -1, -6, -52, -31, 126, -73, 92, 83, 75, -19, -29, -4, -40, -84, 38, 90, 52, 105, 6, 102, -102, -17, 94, 3, -36, -51, 68, 78, 17, 16, -9, -91, 48, 43, 112, -34, 29, -20, 13, -71, 2, -53, 21, 49, 31, -101, -127, 103, 30, 102, 18, 111, 24, 16, -3, -58, -53, -50, -19, -107, -17, 10};
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
    msg.setTimeStamp(0.7922840170995811);
    msg.setSource(50373U);
    msg.setSourceEntity(12U);
    msg.setDestination(24538U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("KSEIZVOLNDJTWSWHEYTMQPXACJDETIGTLTPFAAWHGQTHBNFYONAQLIIDTUDKHZAGPCLVBRZBHGUSGFGOXHUYBKLEUJSHSOHWCMVIXPSZZALJCFHFRYPPNUFIVANNVDWCVVBKMDRXNCLJRKQTZIKEKYLDQUDCQMTZPTUJXSJBIUCMWRXYEFDMIABOZEPEJPSQNBOLHCEAIROGXVYOPVXBFR");
    msg.plan_size = 2737U;
    msg.change_time = 0.6883142666227796;
    msg.change_sid = 23427U;
    msg.change_sname.assign("ZIEUGPMCSGXCADWBMATTAINTSAJDQKUJYGTBMTWAYREMBMEHKEEJBQSTKNFIOZVZNJRFYGPSCNZOGZQMNHKGWIBMSFRNKTWSFVJFMLXONOUOHZQERPJCONCXLIDUSVBKYBPX");
    const signed char tmp_msg_0[] = {97, 117, -115, 21, 74, 58, 41, 37, 109, -46, -53, -25, -125, -106, 45, 55, 27, -53, 32, 82, -68, -76, -38, -110, 76, 41, -79, -86, 31, 48, 74, -37, -59, -106, 111, 115, 93, 26, 27, -117, 30, -69, -18, -70, -121, 28, 108, -74, -54, 79, 44, -63, 70, -66, 29, 34, 31, -21, -89, 75, -124};
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
    msg.setTimeStamp(0.5625895492934042);
    msg.setSource(32542U);
    msg.setSourceEntity(192U);
    msg.setDestination(15497U);
    msg.setDestinationEntity(143U);
    msg.type = 34U;
    msg.op = 126U;
    msg.request_id = 39229U;
    msg.plan_id.assign("ZAMOXUZSOXPGEXBJLKZEFEIJACBYFUQTBIGHUMSNZCFQGNTGGKFRGYRYOPLCMRTXLEHU");
    msg.flags = 17309U;
    IMC::Tachograph tmp_msg_0;
    tmp_msg_0.timestamp_last_service = 0.07713845874084857;
    tmp_msg_0.time_next_service = 0.4607194797984323;
    tmp_msg_0.time_motor_next_service = 0.5818079886571297;
    tmp_msg_0.time_idle_ground = 0.8651402319671505;
    tmp_msg_0.time_idle_air = 0.5983345046653263;
    tmp_msg_0.time_idle_water = 0.29758176182565976;
    tmp_msg_0.time_idle_underwater = 0.8726163590929742;
    tmp_msg_0.time_idle_unknown = 0.09992074269609641;
    tmp_msg_0.time_motor_ground = 0.5127567344272128;
    tmp_msg_0.time_motor_air = 0.36785774374993696;
    tmp_msg_0.time_motor_water = 0.6676192930835771;
    tmp_msg_0.time_motor_underwater = 0.7933726941801789;
    tmp_msg_0.time_motor_unknown = 0.7654557773540943;
    tmp_msg_0.rpm_min = 14989;
    tmp_msg_0.rpm_max = -15136;
    tmp_msg_0.depth_max = 0.9318973533183043;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FJBNZCFNKBWZLGUNBBGSAZFEXRHEYTMMNSISIRNEIONRGODRLDOFXCGYWODUXIXMKWPQKFOOZEUBPJAEHFLXLYSAUEFDDYGNAMFZLZZSRSKYSGMGPWCTQLRPWITQTDKPLVERPUHIXDTEVAQAYXCXDKTAJPSJUNGTXRHVVCCVZQXJWUYMQMFKMHMRVJOCLQQWMWKQKNEKBNVSHJYHCJUIGTDVWBZITCBHGCEUUBAJPDPIHVYHLL");

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
    msg.setTimeStamp(0.600392188969698);
    msg.setSource(54749U);
    msg.setSourceEntity(216U);
    msg.setDestination(61463U);
    msg.setDestinationEntity(59U);
    msg.type = 156U;
    msg.op = 63U;
    msg.request_id = 16789U;
    msg.plan_id.assign("TIBUGQYEMTFNUIMLWXAYNSSDFSEBVFTZYDXWIKVODRROOLQQUFHRLLFASJNRYHVAUTQRLAHONKWKZTVJTHWWMDZGDPJDAACWSEHBNMXPIAGGBJRCYRUWXAXBVAKHHJNEVOHPQQNWDYKWIOVRGMZCGZYAPLPFCONEJSPMGKHRLIEXVZQYSTLGZXDQQMDCJUGKPBSSNJSBPBCXPUCMLVNCHODKJGXFZLKFUXFMQWEUCPUIVETZIJCMYBOZOIKYI");
    msg.flags = 48975U;
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 154U;
    tmp_msg_0.speed = 18972U;
    const signed char tmp_tmp_msg_0_0[] = {44, 16, -106, 23, -17, 102, 110, 122, -45, -9, 23, 98, 126, 84, -44, -101, 62, -127, -40, -82, -102, 60, 62, 13, 109, 31, -79, 31, -73, 82, -19, -63, 118, -54, 104, 34, -15, -126, -24, -82, -24, 61, -77, 73, -19, -74, -40, 112, -100, -104, 71, 110, -90, -18, -52, -80, -65, 72, -78, 99, 22, 88, -116, 40, 36, -96, -70, 17, -56, -91};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NDYCFMIZQLDIPFVHNZBQGYHHHZXDUBQOBHGWRUVWCJMCZWEDTMXMNRABWNSOFQJCESKLEAMAPEJXGDRDXHPLMPQLKUKLYCJXTTSBGY");

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
    msg.setTimeStamp(0.5060122245342537);
    msg.setSource(18511U);
    msg.setSourceEntity(127U);
    msg.setDestination(37588U);
    msg.setDestinationEntity(215U);
    msg.type = 251U;
    msg.op = 141U;
    msg.request_id = 47821U;
    msg.plan_id.assign("GJWAZGHCKQEYKFWYPFZFTUNGIELAGZAXGOVBDLITFMWBKRDCJYDKVJNVICOBLQPRSPZWXVOXFDUDSYCBAWYAHKLAZDNVXJXPRITUUCENLTUZGTAFYJUYDPQSHSVDQSORCESURIRBRTIRYCWPATMZIFVEHEPMNXNVIMULSFHENHHCHHNUDQB");
    msg.flags = 60395U;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 29U;
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UIDDFLIROLQGWXWYWNAIAGKCGYKIAPNCMXXKKRSEYBFLDRCJN");
    tmp_tmp_msg_0_0.lat = 0.9971326382214294;
    tmp_tmp_msg_0_0.lon = 0.45351097501903537;
    tmp_tmp_msg_0_0.z = 0.5553957621154817;
    tmp_tmp_msg_0_0.z_units = 15U;
    tmp_msg_0.modems.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DIZYWERQSDXCTYDMHJEYKNDUJGLCKWMLBTVWHATAHDSXTSBQIXGWEPKCLMYOEANJGLGJRPFEHATZUBZJOLQVVUFC");

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
    msg.setTimeStamp(0.5152528094568062);
    msg.setSource(53861U);
    msg.setSourceEntity(193U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(71U);
    msg.state = 78U;
    msg.plan_id.assign("CVNYENGKASETDLTCRMOBNPXEZTNNXOMAUTSITCJHEHDUF");
    msg.plan_eta = -1954449478;
    msg.plan_progress = 0.009037217036535927;
    msg.man_id.assign("ZHMRHEUPHFPGDYBXSLYQJCLWBCRXWQPXPFALMNQQUWUTOOHNHYKEVDWEWKLLTEEXLKMCCBGVJRWYFTHYRMAXTTIGIMGNGUPSIR");
    msg.man_type = 25162U;
    msg.man_eta = -1349430352;
    msg.last_outcome = 164U;

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
    msg.setTimeStamp(0.27838985045162745);
    msg.setSource(3573U);
    msg.setSourceEntity(104U);
    msg.setDestination(17500U);
    msg.setDestinationEntity(115U);
    msg.state = 67U;
    msg.plan_id.assign("ZWRZHXYUHCETBNSZKRNVAVRI");
    msg.plan_eta = -1745349864;
    msg.plan_progress = 0.3654118619284962;
    msg.man_id.assign("IPXQWKAMYGCGWOYCGYTMKPHTSXOWRZHXDXEAAMIHBCDWYCRBGENCTXZ");
    msg.man_type = 25282U;
    msg.man_eta = -1319867458;
    msg.last_outcome = 240U;

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
    msg.setTimeStamp(0.15380766252139022);
    msg.setSource(17395U);
    msg.setSourceEntity(127U);
    msg.setDestination(36969U);
    msg.setDestinationEntity(93U);
    msg.state = 83U;
    msg.plan_id.assign("KWNLUKFUZTAOYDWQTYJLDFOANPSEIZKGCDGQWVMBEMSJXRZQKMZCNXWBWXARQBLNGZFHOJGUDUBTFCDVRVHPLIBJRPTKVSWAS");
    msg.plan_eta = 1900640632;
    msg.plan_progress = 0.674178918382882;
    msg.man_id.assign("QHSVGUGNLGAMFYWMYZFYDBXJCGIAJIEEVYLUVZVZUYQVNRNMDMHWWGWLJYDOPRZJPUMPOKBAMGTDSXKPZXLIJKWXOVKKUXSPAHKBBDPFMRXPQTEBYENINUPWTAVNHNDYIIHUEQALHQOOKFLDKRNGQFRLVCPYCTCSMFQSIOLZAIPRNUHHXECCJLNOXJCTTDZCERSBTMRYDZBABDIBSFQRXSGLOIVQORSEZZKGTJJFEQATGJBFWTUWWWH");
    msg.man_type = 56978U;
    msg.man_eta = 777397733;
    msg.last_outcome = 139U;

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
    msg.setTimeStamp(0.993583417576003);
    msg.setSource(44312U);
    msg.setSourceEntity(99U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(210U);
    msg.name.assign("SJVNLQEAKOKPYYUKDIFOEWETWHCGOILDGMOBCXAAYMWNIQSVGRDGFUJRLRLBEYPJVMFTEGYOJLHACLNDHPTYBRSPNBWHWXAVUZSKWJCXAJTRQPSXMTSDOXZUDHACCEHCDCHZXUYIZFMTPXMUAGACKKQWQJGRFDZTMZBPQIHBQHRMBX");
    msg.value.assign("DJBHASMIQBNSHPFSFRMTXEOZLRMIVZOTPVIHDFVMCHUKPVKVUJICLBNWIJWQXQJDIPW");
    msg.type = 78U;
    msg.access = 78U;

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
    msg.setTimeStamp(0.9989884317818964);
    msg.setSource(8679U);
    msg.setSourceEntity(98U);
    msg.setDestination(18271U);
    msg.setDestinationEntity(200U);
    msg.name.assign("LCSDQUBUFGIFPJ");
    msg.value.assign("OURSDUKNSGEFUIFVHNWPLLZDYYZBRVRQYEAZOOTDDJWFDOWWXHVOLZOIGTTACKVKIQXAYRGKZPJWMEQXSQAZXRHLOOMKFKJTCBCVR");
    msg.type = 185U;
    msg.access = 88U;

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
    msg.setTimeStamp(0.007635256986173289);
    msg.setSource(26061U);
    msg.setSourceEntity(227U);
    msg.setDestination(55386U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ZVXSWUZLYIFNTDVCUNVNFXWOPLPSQMNEDJWBXFFODSZLUELOLVYSZZHJEWMBYFSAGWIVKRZ");
    msg.value.assign("PYRDBXFQRTLHAICCGAVYQPFUSAFDZXAJVCYTNGJWSKGBHSXPFMGIWGUBZEORZQOJLDVWTSWEXMVUPSRIGGEXETKVHTYZBKOIKULZHDSEJVHHUYWAQIFZWVQONAIECXUPOEXLJVMPNKQHLPNTFNSZMRGLIGHDUQXPTWVZSFWNFBFYCXAIKRAKBTRMCYJECTYNSICUOLADOWKYNNBQXJIZHNLBMCBHMBOQTUKRAJQS");
    msg.type = 123U;
    msg.access = 206U;

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
    msg.setTimeStamp(0.43976403578785384);
    msg.setSource(17222U);
    msg.setSourceEntity(156U);
    msg.setDestination(27972U);
    msg.setDestinationEntity(145U);
    msg.cmd = 79U;
    msg.op = 183U;
    msg.plan_id.assign("EUVYIAHEIADLGZILUFG");
    msg.params.assign("WDNRNYLBLXTVUYYVOAUTAOKMWYHVNEQEAUIDBUTAAMUODGXQADJHMATVITVJFFVJXQIDNJXJKERFFYSHSTYDPQCQZMJEWFSQKBPBUOZZOPCLKLTGJCIYJEODUEGTGOEVPLSSCZWBRSXVXLEZPFUMIHVGKZCQZTWOLQRIDNR");

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
    msg.setTimeStamp(0.17187763493578756);
    msg.setSource(32691U);
    msg.setSourceEntity(227U);
    msg.setDestination(55607U);
    msg.setDestinationEntity(184U);
    msg.cmd = 242U;
    msg.op = 237U;
    msg.plan_id.assign("BUVCNUQDFIVQRRNIHZCPWFHGYXKJBTXHRSQVPIVIKLTSKCCPBOIZYQQPUOEDSGKOFAUAPOTNAOMUWBKXJYCYWWLESHHZVVBGGYQQAUTNHSWGIBGKKGANJWEEJTJMINRHMASLTYGJBOCEVRZPIRXYOJLOQZAXMAROSEPWLMYNMJARMXLP");
    msg.params.assign("INXWALFXKQCVJSYFMJQOBITJTWGEDNNHWCTVNSIWTNBGBSVRHPSRXFSBVEOIXLDQBHNAOTODUKYQATOVYYCPFCCGXO");

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
    msg.setTimeStamp(0.2965786188856686);
    msg.setSource(24226U);
    msg.setSourceEntity(94U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(234U);
    msg.cmd = 192U;
    msg.op = 71U;
    msg.plan_id.assign("ODSPTUQVQPJCPWGNQBCKYUUUHMDVXBPJXLXTHWNRORQGAZKEJPXFBNFUQDEYCVMBJOVMMGOPRNQIEAYGJTKOOYD");
    msg.params.assign("UTFDKLVFCDBZZIRLMREVJNZNVSGLVKTMYFUQFZQCWUUCKJMPYIWVXRYJMZUASEKTJBBELXATLIORKDPHNACBDCBEFYGPCHZYOLQGHDFYIZDPZIGMJWNQAGTNSPRJSNRNIUSHGVCEUCYWRPNKZQAARXPMAWXOJEHSMUETD");

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
    msg.setTimeStamp(0.8825466161974107);
    msg.setSource(21377U);
    msg.setSourceEntity(188U);
    msg.setDestination(16851U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("FMKCMNDSMSCWDKVOYLCCLQSKQKBHKAUAEQQBQIGZUXGMFQMNKOUBCAUHFE");
    msg.op = 119U;
    msg.lat = 0.8496293283549287;
    msg.lon = 0.9133090909379711;
    msg.height = 0.012375555375812364;
    msg.x = 0.2642234060327293;
    msg.y = 0.1538821177917884;
    msg.z = 0.29401111085220144;
    msg.phi = 0.337554229444608;
    msg.theta = 0.8363054299360839;
    msg.psi = 0.9587584230218795;
    msg.vx = 0.6891234061661509;
    msg.vy = 0.8825871240352761;
    msg.vz = 0.9921348795175982;
    msg.p = 0.0784420560666278;
    msg.q = 0.1753974622266108;
    msg.r = 0.8802911275480856;
    msg.svx = 0.056900043093615404;
    msg.svy = 0.5634603334266293;
    msg.svz = 0.6971254232912772;

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
    msg.setTimeStamp(0.8384114443168572);
    msg.setSource(4515U);
    msg.setSourceEntity(124U);
    msg.setDestination(33917U);
    msg.setDestinationEntity(169U);
    msg.group_name.assign("APWCCMVLKHGPNWFWPVZQAYPOQXYVXBTSBQGSOGVYSLZUBRDRUSJNUYAGRXVIQDNOTEOQMTEEWCLHRDAJFCOAWQKBEIKYFAFHLLMBBGNXMXIUNEPURGGPJRSYMZMLFFLXMRAJBSWHIEUMTSTKUJIZKKECRVBGOBESYVINQMAZIZIJOFDWKPVNUVYDDTFWYCHKTVITCTWSSUHLCLZQMZOJZLPTOIKOCXQYDXGJNPNJRJXHKZFPHDDF");
    msg.op = 222U;
    msg.lat = 0.3289285811359469;
    msg.lon = 0.43195613593719584;
    msg.height = 0.549861608874776;
    msg.x = 0.7464083792218322;
    msg.y = 0.12414436527989392;
    msg.z = 0.8627312680902505;
    msg.phi = 0.3141263382635566;
    msg.theta = 0.365089203249067;
    msg.psi = 0.16604310249286613;
    msg.vx = 0.6041781296046516;
    msg.vy = 0.6479227107140682;
    msg.vz = 0.33814843064743527;
    msg.p = 0.04285004503686263;
    msg.q = 0.5988968602322833;
    msg.r = 0.3279509583374839;
    msg.svx = 0.9246440355993459;
    msg.svy = 0.032825102175574994;
    msg.svz = 0.24334064532367117;

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
    msg.setTimeStamp(0.653435128660889);
    msg.setSource(20683U);
    msg.setSourceEntity(184U);
    msg.setDestination(44949U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("EYPFQUOHZIUQMMXDCBEVGEHJKORCPNSNFZQUSQVYRBTRTLOYTNXBOVJWFLVBSFVVCCGKOGMSERUTMTSKHVKFZIUNEGJJCRPQXAHMSPILVCIKNNZYWKDOGMM");
    msg.op = 96U;
    msg.lat = 0.002574766778948745;
    msg.lon = 0.9255614670201292;
    msg.height = 0.7721110493041203;
    msg.x = 0.5962141567442417;
    msg.y = 0.7745433310810937;
    msg.z = 0.4190665727817059;
    msg.phi = 0.24836208594757447;
    msg.theta = 0.4041919005130583;
    msg.psi = 0.36117973431364014;
    msg.vx = 0.34227903931738624;
    msg.vy = 0.9366701095987755;
    msg.vz = 0.7730877255217106;
    msg.p = 0.09048535720393736;
    msg.q = 0.5248660551560457;
    msg.r = 0.7814306152072549;
    msg.svx = 0.2744336689584871;
    msg.svy = 0.12666100490457288;
    msg.svz = 0.5561085570765577;

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
    msg.setTimeStamp(0.5033840645344854);
    msg.setSource(59879U);
    msg.setSourceEntity(75U);
    msg.setDestination(25155U);
    msg.setDestinationEntity(224U);
    msg.plan_id.assign("VINTEJPHZYIHVRTWLZEUWAJOLFXYFOF");
    msg.type = 34U;
    msg.properties = 72U;
    msg.durations.assign("MWVYKLWRONEVPFRKKDUIZDIZUMPVWDXVJGKFXFIVADOGVIEONYJRDNRQCSMOEGMUYAAREWISBKXHHYHXOCQZZGS");
    msg.distances.assign("OHQGZQIEPOTUMNNOWBHLHEBFBRUYRLTTAVEMVJVKVVQEHOTJYIZOWYFZECWPVIZKJQRVXCWFXPLYLZSPUCGIXDDNIJEMGYBCYAHSFGMKJLDNIHRSHYPSHYMFSJPIXXZVBDUGTABJGXAOZAWQZQVNCGWAQFHKNAEFWBYSBKODJIASTINJPCPQWKECMSTTLXRDOMTBKDNLDPCUARYFWBXULRLPVZJULOCSRUEDFMKQZK");
    msg.actions.assign("UOKOERKHPNCMUCPWKXLOUSZPZDRLFBQPQCUFPAAYVZGJDYKFNREYGCMTZMSMVAXLIMIZKISNVTYVLWDGFSCIIAJDBKRFXXVWFWKFNUQBVWOJBHQPBBHJEPCBDWHEGICCWSDZFIPVTKGGSPLANZSLAHXJSXMOGYLXQTNRQNQGNOJYVLVSHWEXYANAQVTDGOE");
    msg.fuel.assign("ZFLYNFWZYAXBERHQWUHKAWHFZOVYRTRSGDBAXSQEDYJQJT");

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
    msg.setTimeStamp(0.9590730846258995);
    msg.setSource(1555U);
    msg.setSourceEntity(103U);
    msg.setDestination(55079U);
    msg.setDestinationEntity(90U);
    msg.plan_id.assign("UDEGCFEHAYVXHRVXVWQACVFLURSBGFHOKNUFLOMROKXZJWNHOSBIXNXUOGCXRQDSESZMYZCTYYDMQVCEYYIS");
    msg.type = 187U;
    msg.properties = 117U;
    msg.durations.assign("OSPONRQVICGFRBDFCNMXAUGPBZEVFBVSLEMJZUHWW");
    msg.distances.assign("TMCDYAPMXWGUYYXOKHAEGNGFZXHCIEVLIMVAIYPJPHHEJHQCINNFDKKRSYFFUKKSCOUMZAZMCUXXWHZWABMARDBQUTKBKTJETBFJZAESCGSLKOG");
    msg.actions.assign("GLXXIDLCUUGSEOXGLPLCZSIDNFIJTPWQGDCMFZPFYUZQIOEHVVRHJIZHKAKUZVEAEDEWWOXGFNGDZBBVAMIGSZYQLHQYQFFVQWBVLTVCCGJECRKXRBWBUOEPABPMVRFGWWOQJQSJNHNSXCMEKROSRKYAKWBEU");
    msg.fuel.assign("BKWXINUCMZUYEAHZMRDERKEHVATPLLXVDPUDSDEVBLDKUJENQHLXR");

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
    msg.setTimeStamp(0.5592878305990724);
    msg.setSource(44144U);
    msg.setSourceEntity(161U);
    msg.setDestination(34211U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("KRTTKOSJQSGPCYDVKOGBYNZEZYWHXGLRUWAIGNONJXMPMFVEKHUACLAYCJCERNOEAXABIVJRDGOFOOHNFTGPAHJEWUFUWSUXBBNLPCZTEUTPMVZSWUHHOISDQSTLFRMLNKMNSKIHLCQFIHEZVDRPQPADCZGLAIYUAQXRJTMRJGEVVGDZWFDIQUKZSXTHTZBAVXKWEIMIPDRLVQLJBTWYSFNSYDYOKCFCUQXVHLGBZB");
    msg.type = 10U;
    msg.properties = 61U;
    msg.durations.assign("KDRRSPSBXJZMXGHMCEPEXGQNHARQSTWLPICDURZBTVARBEXUDLMCUTFQKQGDGVKHFYEHYDOX");
    msg.distances.assign("BEOTHCNCDXRLHXUMAKQONCHPQRYTGAJWRSMIDVDDEPJONLKOEQZLONYYRUWZFWKGDVJTJLDZHSAKZGMCVFXLNVAPHCRXWMAEDTJXHWYQWZYRPVBMBSUIKPWEIBXXFBFWTTLAXYPAZSVFMCGSIETRCGKLYPDHUUBGNPLJSEYHUG");
    msg.actions.assign("CVHQCBEVLWMAQYGVYWXTXNXXIUFBSNYFXMPCRBOGMFILSPIIXTDCUATCTRSHWWMVWNLSEJRQLVGARSJXGPAVCEIBXZLQTPENRZQFVDUXXUYULKDIZUMPLCDJOYFAPZAMJNUAEAKKGNJDFHNKUTIOPSSKQTBKMAWEORHEVZFLHDHPIHJZNQJOIEZLSFDUONMPRFEGZSUBWMNVGBDQCTB");
    msg.fuel.assign("JTYPYUZKTAXMDARUOVYPDZLXHSMFSALIRQERHSGQWBPGFJIWZBPJVXIJLLRZLGBWKAWLAJQMKHMXSGWSMGYOUMONQYYFQHUMLZZAOFUJTQTBBKOSIHWPAYJNXHLDIZMITEYFVEBMSPNRRUDELUIKWSC");

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
    msg.setTimeStamp(0.4611361285780299);
    msg.setSource(21417U);
    msg.setSourceEntity(210U);
    msg.setDestination(26432U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.21968305570779845;
    msg.lon = 0.9400808844310663;
    msg.depth = 0.5021211142329907;
    msg.roll = 0.5159000101826047;
    msg.pitch = 0.4104041993658091;
    msg.yaw = 0.5954183091461599;
    msg.rcp_time = 0.2978180845168351;
    msg.sid.assign("CKNRRYYJOESSGJMEGWBRBVTNARDPYAOICM");
    msg.s_type = 141U;

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
    msg.setTimeStamp(0.4604980223961831);
    msg.setSource(27260U);
    msg.setSourceEntity(241U);
    msg.setDestination(43064U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9217099441482364;
    msg.lon = 0.202625487555257;
    msg.depth = 0.99627913565089;
    msg.roll = 0.9535603947971377;
    msg.pitch = 0.14020745356235054;
    msg.yaw = 0.4819808964530683;
    msg.rcp_time = 0.9689620045297285;
    msg.sid.assign("BQFHALQVMOCJKIWDQQGRPFTWJKMOOASKRSBNVRDJYUSOSIUEOCPVPVENIETNXWJOCFQQXYJM");
    msg.s_type = 66U;

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
    msg.setTimeStamp(0.9886199887959943);
    msg.setSource(40138U);
    msg.setSourceEntity(69U);
    msg.setDestination(4618U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.9665494621274314;
    msg.lon = 0.883695666644965;
    msg.depth = 0.020438482421554327;
    msg.roll = 0.06349743781557515;
    msg.pitch = 0.0017005545705458536;
    msg.yaw = 0.7454755884750863;
    msg.rcp_time = 0.588250022096388;
    msg.sid.assign("EMBWPKNGYQLBPFQBCQZANSJOTFKOJJACLAUUUFTNRSVEJBVHWKEYMGACPURADWQMWOATGPMZQOSTHQEEFFATYXQCXNMARGVHMORULZDWAIQIEKDLPJOIBYKIZVRQKXNVSRKTHWFFUIVHDGVLBDBUFIUXSXZDBVEOWVYTNXUMNJOZOSIFWKCRWLHUJZMRDDYSHLMXTVGLJPCKXXPCFXINRDZCEBLSYQZHMIWGYGPEYE");
    msg.s_type = 203U;

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
    msg.setTimeStamp(0.77993309191305);
    msg.setSource(40120U);
    msg.setSourceEntity(13U);
    msg.setDestination(53733U);
    msg.setDestinationEntity(106U);
    msg.id.assign("FHHORUZFYRNRZUOITRXPWQVFLSDMAKRWYBCQBLCRDIKQCHXNHKBEFULSMDTEWKAGNOIIQSWPYGMEVXAHTQHDXGSHULKIBEOZRVJCRVXTMGSJNNOFEGATJCPBSLXJMTDNKASGDHKVBXFKBJMOSMAUGWOCYCTVAPWZAOPNLZJZOUZMPQTVBIEVLBGYJOHQDZTYFEWLYFLJDDFAUUJFQAZIZQRWCWPUCENHVGWNDYGRIVX");
    msg.sensor_class.assign("KAGVINUAHMUSIABQLIONUSTVTSPWJSZZXTCAFPKUZMUVNRKWRLPBGKKZYLOUXXERTNJMXQWYPYCTZRQIGLKKJEUROHG");
    msg.lat = 0.44434871247301777;
    msg.lon = 0.8063018073841849;
    msg.alt = 0.9026402153474755;
    msg.heading = 0.07935066087099174;
    msg.data.assign("NBPZSKGAYCHCVLKHXTQIUNILDMZDRTFZTCDIQKQFOPQYOHHSRMABCEAMYGWDJJJGHOLZUENQBMSPOBZOXXLCZDXYEGUIFSNFWXSJNMQMSILIDVWDXXBZYPJSQHNJURJJFEAXYTPTZVATMOV");

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
    msg.setTimeStamp(0.21754197631076289);
    msg.setSource(46199U);
    msg.setSourceEntity(33U);
    msg.setDestination(25454U);
    msg.setDestinationEntity(7U);
    msg.id.assign("YJIXAKYIHEZSGZSVENRKRQDNXXZKEWIQGISXZDXVRSTLPFGJZKWHPYZBNRJAUMKWTMEXAYINQKWBYHYNLOXASIGOMUGVBAWCENFVOJMXLUBDUGQZOJAMVMZUHIBNRVPEQTUDSFILCPXOSGWFVJBNLNCMHNYMGTHBCQTHRIDWDDKZDQDERRLTH");
    msg.sensor_class.assign("OAYHPMZKYWZFTIBDAUSIYWINSRDCUKURJZSKZRMHGWMWNMPJPFNLCXAKIESZKRJSXTJBHOMHOWIYMYGZVQVSVEPAUNBAKPSQDMSSPZDJHQKOUWWCPQHNCTTFLYPWERTOUGCJHXYEHCELILVLBGUNXLEFYLXQIKFOEVQGBOXXFMDGTIOKENCLBBADUUXG");
    msg.lat = 0.5816445252806284;
    msg.lon = 0.0564523752201227;
    msg.alt = 0.9788372484905841;
    msg.heading = 0.735730355131809;
    msg.data.assign("FBKIBUSKGFTXMJIPECOMNLVESVZTLWRIETVNOEUCMKHOVQBZZQYYFYEPWKTDNXGHAHHVWMPWJGJOYQZGNRQDOVHRULUKWZIHYVZAVDEQMLCYRMCAUMNOCCQJUGSOQGEUBKGZDFFXTATALAKKXADXLXEBHMSJLJXCPNIWTWJVNSPQTDUNPYFHWRLINXPRDFQPXCIZBEBJUJGPSNCATDILH");

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
    msg.setTimeStamp(0.7778698400625064);
    msg.setSource(24476U);
    msg.setSourceEntity(201U);
    msg.setDestination(53699U);
    msg.setDestinationEntity(89U);
    msg.id.assign("YTXBGXSEGTGIGJVMXUSUTJFKQLFWKBAFBFLDQRIFOYNWQMLZOLCDQEDDHCIQJBVGCNUBVDVHQRGTEIPUZKIAZLZMRTCM");
    msg.sensor_class.assign("MCZMAUKCBHPUHHCUJCVSGODRSMIEVIXNJSTZRYAPFWTRXKOWRYNZWGYJVTUYHBSIJQDLALDXGLSAUOQBRSFIVFANDBXDWWOPSEHTMZJJNPBKEKMNLRYZCILUZZWIMOINQYANIPSWECXWEFHFGVBOAQLGZQELDJXYJMGDRQTFYACDEZHSNBCUL");
    msg.lat = 0.8232272761424975;
    msg.lon = 0.6416093705152254;
    msg.alt = 0.35212116412498384;
    msg.heading = 0.947030345924427;
    msg.data.assign("GTKQUZNTGWJUOZURMXLRWILFCEKDDCMUYPXWWRNDQRJKBHXNZBQOXISZLYNKVJIDJZOAHKUVTMSNNAEFILFHWJVPCYMMBREXZBXJVHGOAOQYPCQUGMREFITWTPTPFYVPMBGOUHQADFEIBSCLOMSFMZKUVIDGADNSPRKHEBRJQVPAXCJYQXBISRXDYNTOEOVGSIDLGAHALLQUCSZTDKKSI");

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
    msg.setTimeStamp(0.3107084876566548);
    msg.setSource(13622U);
    msg.setSourceEntity(224U);
    msg.setDestination(2993U);
    msg.setDestinationEntity(165U);
    msg.id.assign("YEPWPBUZZLHCTWBHWFBMVFEHBIVBXEJXT");

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
    msg.setTimeStamp(0.6048654345153383);
    msg.setSource(15985U);
    msg.setSourceEntity(249U);
    msg.setDestination(30338U);
    msg.setDestinationEntity(48U);
    msg.id.assign("RVVYBSSHHFSXAV");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MCXUCQVMLQJNCGKRHIYLXDQOKVPWKMVSGQOYYIIHTGJGCZHEWFCKDAWRYZFJAJDLREFRWZZQQDGVMOUNJTIQJLHFQLSEHGNXFBPUTCXUMLYYETCJFLTWOIQHNMXPNAGWRKJBAIPYDGLTDOZNPPGLAUIXEATSTUMRAHXPESOIAIFVGVDDZSKRABHPZVZJEBOMDVOFWBHNBBNXZSUSORURXEKFMTKNYHSSWWFCVAIQYLPCCZBTRKEJU");
    tmp_msg_0.feature_type = 199U;
    tmp_msg_0.rgb_red = 177U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 174U;
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
    msg.setTimeStamp(0.7184211052337244);
    msg.setSource(33463U);
    msg.setSourceEntity(9U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(191U);
    msg.id.assign("AAGCKLGSYUAQBDYGUNKHWMRNHUBJMXPNPLOZAZJTJNCEIJBTORLPDSURDONDQJU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WLQYZKDFSQEXFLRHIMYVKVBQFSDADRGMHPTCRDRPONEVMQEFRFBNTNQEAXEKAHHLXIYILXRRUPCUJGFMQDRIJSWRQV");
    tmp_msg_0.feature_type = 111U;
    tmp_msg_0.rgb_red = 36U;
    tmp_msg_0.rgb_green = 41U;
    tmp_msg_0.rgb_blue = 160U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7247774898808707;
    tmp_tmp_msg_0_0.lon = 0.22902723913501322;
    tmp_tmp_msg_0_0.alt = 0.6060162047168477;
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
    msg.setTimeStamp(0.7742086073144542);
    msg.setSource(39885U);
    msg.setSourceEntity(30U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(253U);
    msg.id.assign("CDGRYUYRTKIZNXAUEIWTCLHXLFHBPLAGBMMHWKZXC");
    msg.feature_type = 63U;
    msg.rgb_red = 192U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 80U;

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
    msg.setTimeStamp(0.9847432069568621);
    msg.setSource(11282U);
    msg.setSourceEntity(149U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(123U);
    msg.id.assign("NNBKKKBVDHCIDGNITELBDLXAOZOXNBROCSAXWMTXFKQCCMIIMWTYLEZGAEXMTPOGSRRBZVSHDUTCZNEELKDEGNRYQGJUYYYVMKXHXFQAQIFULZJAXHWCYDOYWGAZOLVDQAPRGFUSRXQJIAKG");
    msg.feature_type = 186U;
    msg.rgb_red = 138U;
    msg.rgb_green = 168U;
    msg.rgb_blue = 216U;

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
    msg.setTimeStamp(0.5801367408671351);
    msg.setSource(4850U);
    msg.setSourceEntity(177U);
    msg.setDestination(49890U);
    msg.setDestinationEntity(192U);
    msg.id.assign("JRRDFYVAENRMTJXERUBRCMMJUJJMMIVWUUKSGSEODCBXIMCCUEVDFOETGXJMMDHWHWIWKYVXZUHTYLAIUQPJKSTLHKQBFFLNMXAWSPHHINGINZTVAZQXDGWQQWEJLWCGPOBSFVZFZXHTFPSDOZNPRBALNGXCABAKHESYLOOGUKAYZRSCQZQSPBPJQYLYXKHMITGNZACIVKEVRI");
    msg.feature_type = 5U;
    msg.rgb_red = 91U;
    msg.rgb_green = 184U;
    msg.rgb_blue = 88U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.38605132336228154;
    tmp_msg_0.lon = 0.5819829745195909;
    tmp_msg_0.alt = 0.1311672255552211;
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
    msg.setTimeStamp(0.9240043239099536);
    msg.setSource(14369U);
    msg.setSourceEntity(114U);
    msg.setDestination(3635U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.5785090581332237;
    msg.lon = 0.15310757140468623;
    msg.alt = 0.4061593361224235;

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
    msg.setTimeStamp(0.4047257016777669);
    msg.setSource(58126U);
    msg.setSourceEntity(39U);
    msg.setDestination(227U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.08526868506773633;
    msg.lon = 0.7600935763979851;
    msg.alt = 0.33001868914525545;

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
    msg.setTimeStamp(0.7355843957010881);
    msg.setSource(53078U);
    msg.setSourceEntity(138U);
    msg.setDestination(14136U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.9908313578280923;
    msg.lon = 0.8550326674637845;
    msg.alt = 0.6119133950058595;

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
    msg.setTimeStamp(0.47079125697128443);
    msg.setSource(31396U);
    msg.setSourceEntity(145U);
    msg.setDestination(54579U);
    msg.setDestinationEntity(153U);
    msg.type = 178U;
    msg.id.assign("KHCUBEAURVPSPXQOMPOACKLLSJJNLFBUIEHKEZQYVYBDEVNGSKAZGXYCAWCJVOMBARASMNEUKQLMMMDCBZLXMLXGRWWVYYUSJJHXMILTQPQPYGZDNXMWHLGJRKTXVFTHBGBDDOAWCFUTTDQESJGINREBTTQKY");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 69U;
    tmp_msg_0.label.assign("MKMOWZQXJAMZSUNGBDZLPABIYJLYLZBHMYSKCLKHBBAEJVIDUJORDRRJXTPQTZPOZGHKYJQCM");
    tmp_msg_0.component.assign("FHTIWJWRMBAXLQOVZOEYFDBVCHRAKWUIAYGHDEANJPTOMHVRMJFFIIEMOLEJLWGYMNJXGXGRXJSULDDOVSRANYCPPGGNDZHNSDCCFAMRKFXBPRTJECMFSZIHUBYUZYZZSPWPLLVQWFXFXSBTRYEJGDIYUAXINRUKGTTVKTEOVUGZQJTKYPXKBSJLYPQPQOZMQMQNSXOWFRAHAEKSCLQASOICUWKZHNQKGTLB");
    tmp_msg_0.act_time = 21847U;
    tmp_msg_0.deact_time = 29660U;
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
    msg.setTimeStamp(0.7791520036267227);
    msg.setSource(51169U);
    msg.setSourceEntity(68U);
    msg.setDestination(40730U);
    msg.setDestinationEntity(222U);
    msg.type = 199U;
    msg.id.assign("TYUTTRDXWIXSYJMLEXNLTAWKRDLXWFDSDHRHVYUZKYQLIKFBCCPWXHGSFHGMBSSQRQSGOAAIVGTOFZVZXJ");
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 212U;
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
    msg.setTimeStamp(0.9715692979995493);
    msg.setSource(2270U);
    msg.setSourceEntity(191U);
    msg.setDestination(58594U);
    msg.setDestinationEntity(147U);
    msg.type = 102U;
    msg.id.assign("HVPFAWICJGLIECGVWLPMHQMMWXBKJBAUYDHOXNMLFJD");
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 15796U;
    tmp_msg_0.type = 81U;
    tmp_msg_0.status = 247U;
    tmp_msg_0.info.assign("UQLLMZWRDKIAXHBCMYNCCVQWOBHLWIYKLQAYTTZVPJSBRVAUYSOEOMNCFNTFGNXVFOAXXMJXMBLGQJPATUYWRBAPYSFIMSPPVVMFRWVKGUHNBTDIDMEKYLPRSTAJJEIJHRLSXKVGHGZURFEFDNQIWXZQOJFBIVEECMHTHROWCOJKSGKJSSAQDGTIPCCEFMCLBFDUVELWZELOKQNKAIZBWESTZXOQGQRPNNDTPYUHRYIXJC");
    tmp_msg_0.range = 0.22822046217914205;
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
    msg.setTimeStamp(0.3171373457374006);
    msg.setSource(48514U);
    msg.setSourceEntity(161U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(150U);
    msg.localname.assign("HMZRUCDKXMOLSCYYXJTBKFEBHKZDGBEIGFYWDDVIHVLWIDTZIARVTIFVGTUFTDXUJLSBXHIQFJKXOPMNQGJQOWJND");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VMVNSYPIBCGKMTNDRGMYDKEMAYUQOALJEJURJQWREXPXRCOBNAQUUHOBHCDWEILQRBANSAFHJFGVSLFXUUFRAEJBXILNEDFGVABRBSCUPHJTQHFZZTVXZDQYYGWBUPYRATKNBZQSXNNSTIECFMFFOPTXPRPKGELHSDLCGLBZKUWJYOWLTKYIKCDUTVKOQLIFSNRMMKMXSMIEWPVPHYGZXVCCPDNWGIT");
    tmp_msg_0.sys_type = 23U;
    tmp_msg_0.owner = 63844U;
    tmp_msg_0.lat = 0.8167794557283923;
    tmp_msg_0.lon = 0.1752883149273684;
    tmp_msg_0.height = 0.6766195814775411;
    tmp_msg_0.services.assign("CHBVXNECKDQVQZSEFLFNSIXCDJWFNYMOPWIZQIDRBOQWPMXYULJUDWOMGFTQZQKHAAARUGZQZATJRDUSGRHBHKABBYIOXSAIDWOHRKYICYFWETRPWIJ");
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
    msg.setTimeStamp(0.3552230002591187);
    msg.setSource(47113U);
    msg.setSourceEntity(225U);
    msg.setDestination(23602U);
    msg.setDestinationEntity(35U);
    msg.localname.assign("BUNAOEHIUFWWSPDMVNWQVIQYNQAMNVPWGITRCREEXSYPJTSZEZJHZBAIDUDHEKTJMJYWVRJVMEUJAOLUPPQECIZOBSFIQSBEDRRXAOMZBWGDQBXRKCYJGHGCMFYNLXIYBVASWXLOIORL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("LSWQERIDUPCLGNELAWFKMURNPEVZGXMSGJXZJSFJPUIQCTDWDHOFGVZCBJRTGWFIIAJRZYOPHDYNNVELBVVLXSTWLQCHVOJ");
    tmp_msg_0.sys_type = 231U;
    tmp_msg_0.owner = 21455U;
    tmp_msg_0.lat = 0.30542111346971956;
    tmp_msg_0.lon = 0.8443683362158854;
    tmp_msg_0.height = 0.967271443098759;
    tmp_msg_0.services.assign("XNQQAODXRKSTCUBOQFWWUASPKWESKCULMVZQNPVBKCHLSKXHLYBDVX");
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
    msg.setTimeStamp(0.7019297353535312);
    msg.setSource(20488U);
    msg.setSourceEntity(23U);
    msg.setDestination(11138U);
    msg.setDestinationEntity(164U);
    msg.localname.assign("EAVHAAINVHWNERMNUHHJEGFMPJDOYBNDCOWYBTBJPQIFPULBOKJSVKHLODGXNJHJQQC");

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
    msg.setTimeStamp(0.6622661091314487);
    msg.setSource(58403U);
    msg.setSourceEntity(111U);
    msg.setDestination(17937U);
    msg.setDestinationEntity(74U);
    msg.timeline.assign("UCQMTNJDDLJSUCOURWLKEZQOXTGTMLXGYMJGOLKZXXHZHVGCRIKWFQWPMCAYWIMNXUBYPYLSURTGHKG");
    msg.predicate.assign("UUFVFNATPZOQAPLOTYNZIIQXQLOHIIMBLYKOCQVNRRZCXYGNIOWMBITCQLBNSZVHMGYPFKECVJVLPRMTSPDXRUGMNSTSWXDKITVWZODTXDEAYXJKDMINXUIJLHOGSAN");
    msg.attributes.assign("EGMJQCUWZTPBBEYYFXQXLVVNFSTTMAUUTHRLJNKSEZARJPSLRKEKCUBXGDBQXOOPNGIDBRFGOMPKGAMZNZIMFTACHRINDBHOQDVEEKNUNDZGSYHOCMXUBHAFVQOUJORHIPN");

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
    msg.setTimeStamp(0.2714092168761608);
    msg.setSource(46344U);
    msg.setSourceEntity(177U);
    msg.setDestination(37376U);
    msg.setDestinationEntity(151U);
    msg.timeline.assign("JNODCSIKLZDISRPBRIEOSMAGIQJGVPEVTFUWXXCNXYORPEXDIUPBAGKSVQJGLXEJABPBHRBMGMWWKLTYMWRILXQDAGFRWMMQWAEKJEYDSJYHESUCFKTRVOLHXGMSGKUKHTFSKVDPVFBXHMFXNACPTPYGHIERYXZZZBHIQFCUDKTAQMNL");
    msg.predicate.assign("SZTYXSRAKMTOGWSVHJDFXPLMDAHBNHYJXOUGWLZPBLGMUEOXQTOCQIKJQCZRXTGXWBYLOCERA");
    msg.attributes.assign("ZJFIWWCLHIFMMPMSODOLBFVVLANPCJGSUH");

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
    msg.setTimeStamp(0.7211013377916261);
    msg.setSource(34383U);
    msg.setSourceEntity(90U);
    msg.setDestination(56438U);
    msg.setDestinationEntity(58U);
    msg.timeline.assign("XHYRRSRCVKTWHZDYCAQLHKMNSOPVLUMGNPEGHBPGSSXLKBCTZOLCFEHGJIDYIEGKKOVEINJGRVYFDFCRMPSWYAPFSJDDNMUBTQQOUJEFMRTYUOPOVMSBJUDQWDXZNCTJPIPPXGNZYUQCKHFFXFVJGIBWZRWTXKIWFABWYDFJRILEBHZVXTWMQXECNZMHVRSYJKWBVMGKURVWALONOUEUAAQTQIZCZHOQ");
    msg.predicate.assign("UWSFWRKCVKVWKANYBWOMXVYGIOLXUCQBDVHZKNCENTJSAOYJZROGMZWPLUDXNZGFTLFPWGKOFQPEXXICLHGAQLVZBAJNSXJIPTZKDBLQOKCRBNJMDVRPTIEZUWM");
    msg.attributes.assign("GWZDUMRAMVFJEHVZOXRHIJLBWYDVSNYNFYOYGUSUWZLZ");

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
    msg.setTimeStamp(0.692703810273749);
    msg.setSource(3553U);
    msg.setSourceEntity(226U);
    msg.setDestination(8839U);
    msg.setDestinationEntity(195U);
    msg.command = 29U;
    msg.goal_id.assign("VEYSBWFGYRPOALCQTPSXDJWAUJULKFAUYIMTZCXWHVLUWNQTKPHKQDUEMVPJOGBCMRSTDJSDYTH");
    msg.goal_xml.assign("JPUQVZWPNBLTRZRJKIFBXWAFWZGGDKGRIOGOEVNVBDIKKZIFETOZYMEQLJOTAMYWSGHTXPSXXLIPYQDKLFEFPLTRWKDHPDOBCGNASCZOYFAHWMJSMRHSQNZLHUDVADYCBXUFVJPNERCWUSVEYGLAIIWFGBNSFQTPVPVTMBGTHHLGXYULJCOXAEWUEQAFQNDKCATUQNTKNZUKV");

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
    msg.setTimeStamp(0.13416998224056398);
    msg.setSource(12701U);
    msg.setSourceEntity(76U);
    msg.setDestination(58672U);
    msg.setDestinationEntity(113U);
    msg.command = 221U;
    msg.goal_id.assign("ZFNCIVNROTQIGFCZZGDWBDMAKAIEGOKYAJUCPBMHOWPCMRZZWUEXYAISMQWTIODAVTVUDSNZCVIPCSOLGEHW");
    msg.goal_xml.assign("ZTLBWMGNZDAOSMOXWFTJUPJTKPHHZUNXIFTDLWFOYVKYZHKOCZPBKRHSRYAGJCEYEZWLTKVBFAPIPCPDSSTWRVSIWQMLBNCGXYKAOROEWVJNTXPVEDQNSRUNDUYJHIRMJYDXJSEBEHXSUDQFMIJFIUOKCQQUCGVOLPZIFJCFBCNYALQMBLLHAEQRGRKZXUVLKHEBVETZNPGDRYIXDZVUOTGWAFPQSMCGAYEJHNHAMBDULMSQQKRVWBANM");

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
    msg.setTimeStamp(0.7965608430917153);
    msg.setSource(7464U);
    msg.setSourceEntity(61U);
    msg.setDestination(33245U);
    msg.setDestinationEntity(228U);
    msg.command = 225U;
    msg.goal_id.assign("ARSPICBLMJDIDBFUJIRWTLKEWVXQVMBMTXOXCVLGTYLSCORHYJYXYGQKQKNUEGHAQSDUZAVISMRXWOBGAHLFNTKJIWCPPUYINZOMCDBWTRAOBDKHRMPJWBNSUXWCHXISSYLPAGLCRADKOWEUN");
    msg.goal_xml.assign("FSPFPUUKNLGVCKZYWUTXVAYGOJWVGCCMJAZMJEAMQLIRHWVTABEUDNXDOADJEJDIUBMHJSBKEKSFRHJEMZYXZTHOVDSDYDLBWROLGOYYVHPLQQMFAUOZXXONPLEBZLNXXGNYROVZCFPFURMMJBMEZSFTSCECDRCWNZCJRSVBYPIJTAWPKQKIPFMOFXWQQTBSQQHNEQKFHWUYGSCELTGLSGATZVCXDVIBAGDRKTPG");

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
    msg.setTimeStamp(0.6310823602545419);
    msg.setSource(21624U);
    msg.setSourceEntity(103U);
    msg.setDestination(28516U);
    msg.setDestinationEntity(204U);
    msg.op = 60U;
    msg.goal_id.assign("GNLTLNRNPBYMAAREBMJBSGFBSDESEROXKRTWOHUJHDEPYNKIPIWUFDCGUGKYZHJJDCJFMIMZXEBXZWMVGSVQOIPMUJLTMNGZGOZNONCEOOMNCLUHRXLQMRRSUCFFLWMQHXXKYFATAUKCOKRBTLBCVQAPWQBYYKXVDYXFGFJVVTDOTZVVQZHSSQHRJZYWHFUDUIAIUNPJIIPEXDWYLNSDTDWRAAZTGWTQB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TOBUBFEVGFDYLBGACWJYEEVMXDSILQNGQWTSIHQHOJQNIRVHPRKTBPKMGKOJQDTKKXDZTWIVVDVMKFOCNETRHCRMUYOVHLHARUOLWISUFEUCSUGCQBGNTZMISUI");
    tmp_msg_0.predicate.assign("BPSPMKXLHTWWUNWNZIGAYOSFXYHEOFKIHVXICFXRLNQEFVUEOGIPDNCVPQDWMZYRATLKIXFYEWRQWOASSQNRAEHHZEKGDDYGIIKOJUCNFARZVLAQCVMBFZCQYSMVTSVGT");
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
    msg.setTimeStamp(0.4342501577201491);
    msg.setSource(20584U);
    msg.setSourceEntity(194U);
    msg.setDestination(5122U);
    msg.setDestinationEntity(227U);
    msg.op = 86U;
    msg.goal_id.assign("HVZJZLGKCXVLDR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MWWZPSEPVLGIJLQHNCFLASZUNHMPBUVNIFJZGVRJWJTFXBOVKCZGLZTBQIKEDMOXELEOGSYNNMOTABLWPUVDRYCSJYOFPOFYBGLJRKKVWIWBDXENKIFDMQUNYHDQJFTMRNDGWINVABSUKVYBRGGBJKOCIAQWISZZUZGCKULEMCZHGFYDQAHTRPVAYSRAFLTIDWLOHDZYRQUNCPSPHMVCCQXEHXHAMTRQEPAMBSJXOSDKXTUQ");
    tmp_msg_0.predicate.assign("HHMAJXYAAHKHHPUNCWRCMFELJDHAZIIPXSFGURAYCGLZGCORKZVGPJMJQDJPCCEQTATNJNDUBFYZHXXCGQNATCDDNQPBYSGQWOGMBRFQEIZHTIUTIBYVQNPPWSVELLEDPOBGUAVRSOZJCBZEHUZIAVEKFLDOMUXXTCYZYXVB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IISYYJSBIOKCPGHVAFOOCWGDIHRWRVVIOCTNLQNCIYFPZLCJUMMAGENSKDYLAFBKFVDELXTTGTVMKKZNOS");
    tmp_tmp_msg_0_0.attr_type = 29U;
    tmp_tmp_msg_0_0.min.assign("SRSBZOGLWEAGQIJAJESQASN");
    tmp_tmp_msg_0_0.max.assign("PRZIHVDTONVKYGGHSBSXZFOUURPSTEDRKWYPGHAMHZGKEGCHTNLYYGBIAMTBCBVGLVRJFDISEDVOYVKQVDPTAUOSKMMFZDQJCTAIIYAWZEDZCETEQUBWEJUFQWNFKKXBVLFHNQBXCNGLCRRNJYEJPPCLIBBTMCOFOXPHXMWZOYYZFUSWXWJDTSMIJMAWJILFMRCJKQEAQXGXHLSNQCU");
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
    msg.setTimeStamp(0.4778981204705658);
    msg.setSource(27271U);
    msg.setSourceEntity(251U);
    msg.setDestination(8167U);
    msg.setDestinationEntity(108U);
    msg.op = 157U;
    msg.goal_id.assign("AZKCACHPORVKVDYPRNIQBSYNGLVFDCHZBWMJUMPRTFTWUWSFHMRSJMXBMVPAXGBDDQWECXAHATKOJVRLYVXGGSWFZFLSFPJWNQUZDPBOIZQCTBSBHCRZUWFDMLGCQLPEPQWMYFAUOKKNKBILTUGSGAOUGND");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DHCBFIYJAJNYVVRKIPVWMHUIRZUGABGKXFUAWYBKMYXXDJVZDOWQANDNVFSNETOZPHPLDQAOVQSSPZHEHCDFEATHIGHSOBAUPCHNKVKIBTEWGMBRBMCNQAOXLBLDLNMWIFXHWGGFKJXFBIWYQAUKMPBYJTOUFNQTPFEJVLGGTDTZJTAGOCRRKCPUIEXYZQTWGLWRLEWNZCRCQQJZRZUOMJSKFLRYIKSQMMNXXEDVYXLCIRL");
    tmp_msg_0.predicate.assign("JPTTCZQTEKAVRMFICXWWSAFRAPNRUYLSDRYDYIUVVKPYUHOFPSGHCQGMXCNNTGAYYXERXORLILZNF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SRPLBWPFTJEBINEMQRGYXJPLBTXGRWCKYQAAZKPDAMXJHHFPLICOJJA");
    tmp_tmp_msg_0_0.attr_type = 53U;
    tmp_tmp_msg_0_0.min.assign("LCENYWAVZVPZBSJY");
    tmp_tmp_msg_0_0.max.assign("MEQZZPTJQCCNVVZVPVIJDXZCVZFCSDA");
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
    msg.setTimeStamp(0.3395324269230753);
    msg.setSource(17397U);
    msg.setSourceEntity(246U);
    msg.setDestination(26212U);
    msg.setDestinationEntity(125U);
    msg.name.assign("BNSFKXDQPBGLYNSMVZHXPZZUKDBHTGPDISYMKZTAFCTBMEBMCLIWTAYCEZONYWIRGQOTCODVGZAVUWOSNIZGQQLLVKFZOKJQYNZLPPBCGSPVBAHEYADUBFXXQUESSEHWGIMWMNQJOFARSGKIIYAKQ");
    msg.attr_type = 201U;
    msg.min.assign("EBJUHCTWSJFINKDOUAEVLAEYVPNXNWJDSUJLTNPRHNPMIOJCCRYXOJHYPYXPVUSGLHKOCKSCHBANDAIMISYMTYJGCMBI");
    msg.max.assign("GCFADGPAJDWAQ");

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
    msg.setTimeStamp(0.7508881087814826);
    msg.setSource(60774U);
    msg.setSourceEntity(152U);
    msg.setDestination(42925U);
    msg.setDestinationEntity(113U);
    msg.name.assign("LYZCLHIEKWOYSZQPCMAXLPZJJKTOIQDJBLBRBXXAMDXVRFEVOHADUJOQTNXBTSUNRMBJFMOR");
    msg.attr_type = 192U;
    msg.min.assign("NYVTFOVVMMCWGMSKCUJWJPBDGVYOTTEBUKFLJTTZWNGOZEFTCDOBKZLIULSSYBIAMRAIUJQKWNGOMMHHFFKSXVJOZKWKROCEHXDXNADPQCEYBRIAJHDXRRYIXJELUSGLPCCFAUBJHDP");
    msg.max.assign("MNUIMJGELWZIKTWWKPADCWLZHSV");

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
    msg.setTimeStamp(0.18097124542780219);
    msg.setSource(29709U);
    msg.setSourceEntity(115U);
    msg.setDestination(46068U);
    msg.setDestinationEntity(42U);
    msg.name.assign("OPIYBIXWOTZSGCOLDUUWROVTECBFNDRUAOKLPAIODVENOQQKOXLKSQBZC");
    msg.attr_type = 141U;
    msg.min.assign("ADYSTSAYHKYBAEIOIPOACAMMEFDLWQZELHIVGYIEXKWTZWTTORUQLVLGZXIVCOYAMCDCFPMCNFLUJFDWJOELVHBXEG");
    msg.max.assign("MPBAYUHUWWZHRZRZKESARFZYHWNBEMYKWMNNMVIIUJXHODVQVZWNCCRMRLFZCSUGXIPKENXUDVXGRHTPYDMZSRSUANNFAZOSWATLILUALKVUFWBNLGZBCSJTCABPYGJSXRAUVBPQHNTVPKJVQFIIODEEGJLGFFSQCDGBJLODPEETGIPXFD");

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
    msg.setTimeStamp(0.8362836548341223);
    msg.setSource(35197U);
    msg.setSourceEntity(1U);
    msg.setDestination(59965U);
    msg.setDestinationEntity(227U);
    msg.timeline.assign("PEDGSYBZOSYFTNAEUZERTHLHWCAWSICXLCKXUSMCPIQEFCZWDQXZCEMYLVONUJQAKUYJYOTYVHECSNFMRMIGPNXWRMTUNDYHLBGNDVVBSYPIVKLQTYLNFGHHJZQSDURIGBJWMGYFRXTLKLNKKHVGJDHRXBRUWZFMBAOCZGWAVAVATQJNVLBMIKOUVIGEPQQDTSOUMFKCJJJPXIIDBPPUHNQFXOWERDOLRAZOHDWCJSZPBQET");
    msg.predicate.assign("IGSQFWDVVUHWOMAVKMNLANCVNZROFUAHGIMANPWQETITGFEXUPITBEBYIGYZIHJVWZTFSAPULPEBLLHQKEKCLFFNMTMRHHZXSAXWLRDGOAQPHKGMWAYKDGEDRBAXYDCQTFKDOJCDLBFXFRLUSHBJCZOMWGOJHCLRPJERFBEMYJPAZIMZYNSGORZSUUOSPCYWSTVXC");

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
    msg.setTimeStamp(0.339629108947073);
    msg.setSource(13988U);
    msg.setSourceEntity(245U);
    msg.setDestination(42926U);
    msg.setDestinationEntity(222U);
    msg.timeline.assign("VELARPJFDYVXZCUXYGXCYHCVNEFDWMMUZNIML");
    msg.predicate.assign("STXLAJXEZDBBLLTSPOXVTXIHJDDBQBWXJJUQZGGUNHDCUCBHVRYCYPVEXTEGDCHLRROUKEQKFICTHSSEHUMVGHCONERDIMCFMRYFDINOGZXQFDKOILJBNSALXJBEOWQPTKOFKVPXUSHJYRUHQPFLWWQEZZKYSGZKLAMAAKZSJNIVNWFUOARWRAITOYSWMVMMZIPVBIWBSAWIDYTWYYXCMAVPFZRGL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UNSMQONZZTBECWWTXDXMTMGLVFIANOFCORB");
    tmp_msg_0.attr_type = 166U;
    tmp_msg_0.min.assign("SXSDVIUGQZHDTFWEGORCDKJOCVEVWHKQXBV");
    tmp_msg_0.max.assign("KHQRKODRMGOEQDMLIIQGCUPIYLWXNFHBPCIMFVYNWDJUJCSAVOWFUEYDFXMJBBYTSNULDECVAY");
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
    msg.setTimeStamp(0.5374328947604313);
    msg.setSource(54074U);
    msg.setSourceEntity(149U);
    msg.setDestination(64889U);
    msg.setDestinationEntity(103U);
    msg.timeline.assign("ERKOCOREPLHTOSSVXJBGLAGHWIKODTYSTMWOMIWPYRMTZNXKATRQJGWJMPHIBNMJJHGAUTIABNLTIGIPCBUAFUEKKGXEEYVLDXIEMWXJHFVXSTFDSCKHWEDSQDPNLGZSAQCLZRJVXVUZUUZBPNCNQSEHWQYOYVPEFLVCVPIJWIFSAFFJTYDNZQGPCDDYMAKOAYSRLCGBVPXFKMOCJKQORHZWWNDULXQEXFUYRBUTM");
    msg.predicate.assign("BRYYKMUXENPIDAYOGXZOTDNGTXIDSJOKZVTJOGWICFNSLKWSUGCWZUMTVNPYCKBSLZMGXOIHSGVBWVMUKVBJVRCVQIFMSFWBBBXOUS");

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
    msg.setTimeStamp(0.31187170198130765);
    msg.setSource(52172U);
    msg.setSourceEntity(158U);
    msg.setDestination(34341U);
    msg.setDestinationEntity(219U);
    msg.reactor.assign("JRACJUGPBDUWGJFRVGBTUWABQTVVAFTINMVVZSMCPTYKKYKKM");

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
    msg.setTimeStamp(0.33136320167224353);
    msg.setSource(39897U);
    msg.setSourceEntity(102U);
    msg.setDestination(40527U);
    msg.setDestinationEntity(207U);
    msg.reactor.assign("EJAYZSLTTOUBKUDHCUZXZADISLALHMVFFGNNFGWUHTWQIEKVEMEZACYOBFODLBTDNMXRSCGQHJPQMOMRVDNNJDTDAIJKLSOTWJKCROVXGJAMNUGIFLQHKOGVNAYPIBSJRYVRUGQQJKKITPWZEHZCKMBNTOIKMXYAGQPYBITZURPBRCCNFVMYOFDGWZSFXQUHICSFSDACEXWBUAEVLUYCYPRRWJYOMGVZWXFEBVSDWSXKPIBE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MAYQGIVZVBTAVFNLSRSSSCNHGSTXKMKQPJDRWWIQZMHCISBWMDASIIQBFRBPTFPZUTBIMCGPKDTAEDEMQUREYWWYPTYRHNUALAFAAHNXYDPLKQERGCJTMQNBKYFXGVTLJUBAWTSSVJICCOCNFDGUQWTGYPHUOFDLUOECJGIIQVHROJMG");
    tmp_msg_0.predicate.assign("ECNZNFZPURDMJLLZLDUGDWDYORVLOCWLPHGWGXOOVHSYBMTJMSSIBWFOQAAATDIALGKIUIMNEUAKUACSZJZYFLOQHSLMNGZVMKEYVOGQOGNVLFCHXIXAXQWEUGACCPDURMRTFYFHNTQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UPKHDGHDDMFCNVWYGSJSURLRKKZKJXVMITBIYDHGDXXUOEQJPJBPLQWVAWUBFLFTKQWKOMOZATLWSUESRBZAFMITTJYXEFQIRCQKPYBWJHLUDITGXCSLAPEPZFVGHELRINB");
    tmp_tmp_msg_0_0.attr_type = 97U;
    tmp_tmp_msg_0_0.min.assign("LEXNYBKKJOBUIPVGWCCGDUCAZXANAIZGOCYETVGTBQSJOBOJUWHJSIFMAYXS");
    tmp_tmp_msg_0_0.max.assign("YAOAHWXCCBGWECOYAMAUMUBXLZTIHRUEZFTFKWLSTWDYMJDEQSJXAHAQFXRITOBSBEXCMRLUWDQUNQNSMKRZYTVPOPZIVYQGNGQGZVUFEZSJCARICHUQJADFPTOLDZOVMHVCOGWAEYNPKFP");
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
    msg.setTimeStamp(0.7356103399003316);
    msg.setSource(48350U);
    msg.setSourceEntity(32U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(134U);
    msg.reactor.assign("WNQLUBDEXSQPPEGDUXNJTYQTBKKXLHODFOLRTULRXTEYYQPKBGRIOUMAHDPNIISWVGMQHLFTBANRNZWSPUJWOAKVJDBZRNYHYFGPXITPVXVRJBPCJIZCSCTRCWVAJZLKGHQDEZENKCCOOYNUSJFOTFEMXYMTLDUOLGPUSWJUGNZRVSDFFQIANXGGZKBHLAKISQEMJIHRXFWYMJXGFC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JOOYDYVTZKWVQBUKVTDPSQVEIBHHPUMNKRLZGNAHLYMUUZHWKNZIZIHWXIOTPQJZFJWADQXLRWBSKTSKDBBYXUZANVJFBMDGPCYQSJWMIAGDMEOMHOGNSMOGMFLUIHTDMXJHYPJNLREXWOPOEMSNCTVCTYCVVHEPANADOCIJSDUCRNKOTJZCQFGXUQNQGGRBF");
    tmp_msg_0.predicate.assign("KYOLQOKFLBSDDXPYIFOAJEDHXUCRVMJQCUDGQSWBWQFJLCTSLESQCFCGAKKHZNTVZKIPCMEINMEKSZAHNDFOGOXZNZXMWINTIIOAARVRLPRBKJYGFLEUMAXJWMHBDIIWDJPUYVNDWZWOZQFXQVZVYTSRNTNPPEHSBGTGCFQBDKEVWGYWYMVTVUEAXMSUMLUUGUDCWIABHLPYAKTBREGJYTRJSHMCLTIQPCLNUKXPBHSVJOYRZNBXHJOZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ETPXTTOWVFGHBGPPYRCIUFLLOPBZSSAEVLDONIHISPZNOOGDTOJHQTRGZQYEEXBSSFMURUFQDRXBROSLMQCHFCKBDZEKMZKKUHYNEHCUAKEAFCCZRYBKCPIZMWQQAQINF");
    tmp_tmp_msg_0_0.attr_type = 242U;
    tmp_tmp_msg_0_0.min.assign("NITBUNGKHYBMTJOSVHZCJSTBGHNPTILJUQBZFOKXDMIKAIJDANFZFWXDVLWWHWTMFYTAMPWVRMLYQSHCMGWDZVMQZZXZNBMUHAKLTCAWAXJMJRXMIURALESVBOSRBVPSUNNRUYGIZDUYCFCQPCHEBCXSDUJOZEYLJ");
    tmp_tmp_msg_0_0.max.assign("TIENTFZQJFCFATAVPKVDDMAPFIWWDLNSCLEKYGTYQPRDCOEHFVBBGCOOVEGTZXGNSKZXQZEARHDAVRTWCFRSLEGWOMICGUVIKHXZTSAKVVMPPDQQSQNBCUBFZNILQJSAYIJMETOSJLSYXMKIYU");
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
    msg.setTimeStamp(0.5216549786921455);
    msg.setSource(56647U);
    msg.setSourceEntity(93U);
    msg.setDestination(4263U);
    msg.setDestinationEntity(78U);
    msg.topic.assign("EDFJKVHJORQBRDRWITBGKLQPTUSSVQUABMEXTHEXTOYCWLHWGMBXAYLKNBZMOFICALKYDTJYOSYIOBVDVXFKNKJJDFQCXJKVPNRCPHWTMMFXAVNRLGCNUQOMBJQUNAZSPPONGAYNHV");
    msg.data.assign("MQCUPEEFKABWPXXCTKXFVWNFDGUHIAAPYVMMLQSYZUOGIZZXGCZ");

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
    msg.setTimeStamp(0.5284268270499903);
    msg.setSource(27809U);
    msg.setSourceEntity(206U);
    msg.setDestination(21461U);
    msg.setDestinationEntity(151U);
    msg.topic.assign("NAMXTYNYJKKPBLDFFXOFMHVNDQXGABAMYCFHCIZVEAQCGFBRUVFRYXXXZFGBTI");
    msg.data.assign("SFGVYVPRWCLNPLIAETWXNLNAVPQVAZXUBBIBLHJHKBKJXGFVZVYMKOGYYGMCSWNFTZRHLDOPFLACRFJAKXRVSOUUYEFXAMIXCGMLQTSCNQVSQKDHODWSRHHWNSRZPEPWQIOBTJFKIJMNYHTEMCTHDDROUPZSTPOIGEWHRUOUQWJDCGSENYESLZTQCXEXOUZFYDVUBNGMEIAAOIBNZKZQBKTKJKUJXYLXPRGUCWDCYMZMFLQIDMBQ");

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
    msg.setTimeStamp(0.482737452811434);
    msg.setSource(206U);
    msg.setSourceEntity(100U);
    msg.setDestination(57948U);
    msg.setDestinationEntity(242U);
    msg.topic.assign("FDJVXKEHVKMITAGCWBYWRMCLJWZITHFQYXHLDRDCMOBLNIPKYHAUQPSYSCGEGGFZTQYZUXVIIUSFXQFHLVRMZBAYVKPSYXXRVUVEFAZQHPCTXPJHARNEUUFKKXJNCFMDBOAGVNQJVODHPEBMEPVNTLBSIEOKKIZXNIGLNYTQICPGZTDBQDWDSSWZRWGJMFPJJRAZAPWLOLFOE");
    msg.data.assign("IAGISHYNXHNEPDTXPQMVOWYETYPWOBEGJMCCHTARWQJLQHWICDXKOBKJGTITBIHVVGVPLPCDCICIVONMUSTRBKUATSNXGKPWPGIJFHXZFGFXEHLZYOGDYRLAEIKWDJTRBGRALUAYRNKOGZUXSYDF");

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
    msg.setTimeStamp(0.9730222934360181);
    msg.setSource(25987U);
    msg.setSourceEntity(15U);
    msg.setDestination(54725U);
    msg.setDestinationEntity(65U);
    msg.frameid = 195U;
    const signed char tmp_msg_0[] = {13, -36, 98, 46, -43, 50, -115, -100, -76, 102, -47, -77, -103, -55, -109, 2, -118, -45, 54, -91, 20, -14, 14, 96, 74, 95, -63, 85, -45, 2, 84, -62, 66, 5, 59, 56, -28, -11, -111, 17, 113, -120, -29, 103, 14, -66, 50, 31, 100, 14, 27, -11, -35, -69, 125, 117, -54, 101, 37, 30, 103, 60, 5, 69, 79, -128, -126, -102, -12, -119, -35, 121, 57, 110, 117, 83, -83, 96, 39, -55, -15, 31, -56, -60};
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
    msg.setTimeStamp(0.7796568545323497);
    msg.setSource(5121U);
    msg.setSourceEntity(28U);
    msg.setDestination(34423U);
    msg.setDestinationEntity(10U);
    msg.frameid = 205U;
    const signed char tmp_msg_0[] = {-62, 14, -12, -107, 105, 90, -16, 99, 90, 46, 29, -97, 110, 112, 99, -69, -114, -2, -122, -89, -65, -5, 81, 16, -56, 26, -33, -114, -18, -36, -25, 55, 111, -61, 9, 14, 19, 98, -43, -78, 57, -108, -69, 48, 46, -73, 19, -78, -23, 3, 34, -12, 66, 123, -40, 84, -84, 99, -80, 0, -119, 1, 1, 126, 6, 72, 93, -115, -73, 12, 64, 4, -22, 110, -41, 56, 29, -7, -69, 3, 19, -119, 118, -86, -34, 31, -85, -106, 120, 122, 19, -95, -112, -13, -102, -69, -64, -13, 22, 110, -42, -91, -50, -82, 29, 32, 14, -20, 119, -43, 90, 17, -49, -114, -17, 38, -43, 3, 2, -56, -54, -77, -82, -91, -90, 29, -1, -13, 101, -43, -25, 1, -75, 60, 15, -123, -97, -1, -1, -89, -20, 119, 83, -94, 18, -71, 62, 4, 57, -117, 65, 104, -40, 111, -50, -100, 113, 73, 7, -10, 72, -61, -75, -29, 78, -49};
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
    msg.setTimeStamp(0.9070367969062053);
    msg.setSource(16734U);
    msg.setSourceEntity(156U);
    msg.setDestination(39866U);
    msg.setDestinationEntity(165U);
    msg.frameid = 144U;
    const signed char tmp_msg_0[] = {114, -34, -55, -92, -69, 38, -32, -31, -84, -73, 7, -104, -97, 66, 60, -31, -52, -50, -101, 19, 40, 67, 8, -21, -27, -98, -51, -89, -47, 32, 23, -15, -67, -51, -123, 40, 117, 55, -11, -31, -43, 61, 39, -53, -35, 120, -39, -106, 45, -87, 62, -38, 33, 61, 89, 13, 42, -36, 58, 56, 123, -2, -53, 96, -93, 112, 36, -126, -1, -11, 71, 16, 49, 6, -65, 55, -100, -15, 39, -65, 3, -90, 59, 121, 100, 19, -22, -13, 33, -85, -22, 29, -63, 4, 44, -113, -55, -95, -20, -42, -63, 91, 122, -128, 54, -27, -102, 112, 19, -53, 107, -49, 59, -78, -35, 48, 60, 110, -99, 43, 10, 4, -90, -92, 25, 7, -70, -109, -90, -59, -81, 112, 90, 39, -70, 105, 43, -18, 34, -15, -44, 95, -18, -16, 106, -40, -58, 13, -55, 53, 31, 56, -60, -6, -117, 43, 43, 36, -32, -49, 52, 13, -121, -49, 35, -62, -128, -78, -108, -43, 71, -40, 2, -16, 52, -12, -41, -77, -126, -55, 94, -59, 29, 51, 99, 41, 115, -114, 4, 27, 2, -122};
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
    msg.setTimeStamp(0.8810763802906976);
    msg.setSource(11896U);
    msg.setSourceEntity(206U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(194U);
    msg.fps = 63U;
    msg.quality = 219U;
    msg.reps = 29U;
    msg.tsize = 206U;

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
    msg.setTimeStamp(0.8466584458219959);
    msg.setSource(32972U);
    msg.setSourceEntity(58U);
    msg.setDestination(49238U);
    msg.setDestinationEntity(92U);
    msg.fps = 171U;
    msg.quality = 59U;
    msg.reps = 229U;
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
    msg.setTimeStamp(0.18054323900177105);
    msg.setSource(19948U);
    msg.setSourceEntity(128U);
    msg.setDestination(47214U);
    msg.setDestinationEntity(69U);
    msg.fps = 63U;
    msg.quality = 230U;
    msg.reps = 156U;
    msg.tsize = 201U;

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
    msg.setTimeStamp(0.3018612925377122);
    msg.setSource(49671U);
    msg.setSourceEntity(49U);
    msg.setDestination(1611U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.1956345962083802;
    msg.lon = 0.7514271013409466;
    msg.depth = 246U;
    msg.speed = 0.9235073881887029;
    msg.psi = 0.07073806382245129;

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
    msg.setTimeStamp(0.5781038405823454);
    msg.setSource(22865U);
    msg.setSourceEntity(24U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.8365080388681909;
    msg.lon = 0.1301797455379281;
    msg.depth = 5U;
    msg.speed = 0.5635653602453738;
    msg.psi = 0.6242860511260502;

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
    msg.setTimeStamp(0.3014954851572188);
    msg.setSource(18479U);
    msg.setSourceEntity(138U);
    msg.setDestination(37172U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.1579579259322882;
    msg.lon = 0.7788250765778584;
    msg.depth = 196U;
    msg.speed = 0.7333201739723064;
    msg.psi = 0.4301953789377645;

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
    msg.setTimeStamp(0.5582374310738388);
    msg.setSource(47122U);
    msg.setSourceEntity(140U);
    msg.setDestination(56279U);
    msg.setDestinationEntity(207U);
    msg.label.assign("INGHIOUITBEFUVUP");
    msg.lat = 0.7444965195184129;
    msg.lon = 0.5980098076731292;
    msg.z = 0.9218973319078636;
    msg.z_units = 166U;
    msg.cog = 0.11492428903029217;
    msg.sog = 0.21845122447239818;

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
    msg.setTimeStamp(0.7800694901553553);
    msg.setSource(56766U);
    msg.setSourceEntity(234U);
    msg.setDestination(48337U);
    msg.setDestinationEntity(77U);
    msg.label.assign("EHGHGAXPDYZALFIPAYZXGROTGWXJFUMUXEKAYZSIGHRANBCDKBQPXVCHJVURTUBRRDHQZHHPCWXKVYZIRHELMNUJICTJNOBLNGKZMBOOOYJXQOSVDMYXRGNFOJTWNNWIKGSKPWJWHDDGFQABECWIZSWEJUFVOEEREHLFITZBZMMLPPDAPMSNQSTUTFLFEYQTPYJLCUR");
    msg.lat = 0.1344047045513168;
    msg.lon = 0.7807012238819122;
    msg.z = 0.47054245524754235;
    msg.z_units = 123U;
    msg.cog = 0.0278225224525257;
    msg.sog = 0.46791622767804797;

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
    msg.setTimeStamp(0.3437247674782623);
    msg.setSource(41656U);
    msg.setSourceEntity(181U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(146U);
    msg.label.assign("MFIRMADKYVXXGWKNVADVKLAOSKHOGSPSJLICJJKRUUKHTWNQQGLPBZPCUMVEKDQFTADDNLEUYCVAHVTYTMOZ");
    msg.lat = 0.10598614524460548;
    msg.lon = 0.8597045753143839;
    msg.z = 0.04180596969139627;
    msg.z_units = 232U;
    msg.cog = 0.9329391435562494;
    msg.sog = 0.09971772586952543;

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
    msg.setTimeStamp(0.42791143420744526);
    msg.setSource(55361U);
    msg.setSourceEntity(226U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(151U);
    msg.name.assign("VKSFFWCAUGYBZCVHTZNGPYMAVXTPLZINOAPFNNODAZMHAWERSVUQQXSJSBUGWYJGXUOGMPSEQLJIVUBOXBMZOOVEXAHZRILFVNKKDNWPCHVMSSTDLBNIMBKWQWQIHYXRELLRHFMULKRYICRPWCNJFEQQGSQAEUARX");
    msg.value.assign("BFKAJKTFCAMAXEWWIPJCGIRIGUWHZGFBJROCJMEZN");

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
    msg.setTimeStamp(0.6720261600483076);
    msg.setSource(57759U);
    msg.setSourceEntity(66U);
    msg.setDestination(24236U);
    msg.setDestinationEntity(226U);
    msg.name.assign("TKKKSAQVBHDIPQHMVAZUNHBEVVIMTJRGNSXHOJNWQLDXLSUTEYOUQYXIXODPTCOWWSFFEDZPXIFQVCPMEMZKMGNHAKHWXXOTNVJCLAGCZMTLFHDPHAVFLRTTOKYUUSZMDIPGHTQCNAAVBFJIYLLJZIUNUJSYCJLQMTY");
    msg.value.assign("OQJSXXYKEUPBCTCHRMTURMSOHOBSLPSYFUTGGQLUGQANKOIIBDCLIYLOAZBRKNSVGCWPYYTYMBDPACQHMRNPMYDFSTSBRPBNADEWNHOAXZUVUZDJWJZJTVQRGMUPHVVLIZMDAKGRWJEQVXEWNXNEIQCYWJQAFLQFGJHKDHTDEHWVWRWOTXMUOVPECTWMFLFKKYVEOXCUFLZUZSEJIPZBGGNFFKBCOXCLVRYIHJIPXTDQKA");

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
    msg.setTimeStamp(0.43541996099623637);
    msg.setSource(1242U);
    msg.setSourceEntity(144U);
    msg.setDestination(54081U);
    msg.setDestinationEntity(130U);
    msg.name.assign("SZCSVAIOJDDZSJGPLVOFMBPRSXIOLRW");
    msg.value.assign("XWLGMKFTSPCYZVVDAKQNHCXHRHFEWVGBROREUDABGWSCNFETYXBFGZVOQNYIKUBUJZMQJFLMVXPSWMXZDISDNDEQWSPCIQZAATUUIJIZKDUZECITHFYSXETBQYVQNOHETYTUKFLCWMRAPDLRFOSXHIQKRPMJVQKTIOCULRUOAJWCZFMDXHMGRTPSKPPOD");

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
    msg.setTimeStamp(0.4945165727165749);
    msg.setSource(47380U);
    msg.setSourceEntity(61U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(103U);
    msg.name.assign("DTHVCLJWVAZVSZYEYZDLHWBONNPXYHPCWNICHEKWYJUQJGAIBAROIUFBRYRZIUQTYPLKPEJMLWDVSFWCBICZIOKOAXNEGJMBYCFHXRULCUXYKJFGVCAAFLEFMDLDSTRZUHXWBCATUGVUKGJDTWOEIOHUICXASGASEZOESW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DYMJMIQBCIVXMUCLRMNJZOEAPWKANQBKSLDLWYQVQJHGANFIJBQSXBTTIKVNCIMGWIHURRPQPDIBFGVGPLAEKHZTGFDJOSDAJEDXXUNBROSPPCEEMVMZPJZOWEKUTMBKTXYUSTOXCMEAAYTVLGZTLSCVZCFHOKQXJGNYPCESZEOUWNSMJXIRQAYBIYFZTVZLVOHNVZFPGXFIDLKWJCUNRWRHFULERDQHNCYQHWUXAYGGKYDURRFLBFOW");
    tmp_msg_0.value.assign("EXIYLFWZLVGGKFKZZGAUHVXTNOYQJPEYTNJHOFRQVFCCKYBRTTLPFMWVQMKXGANDZLEEKWNRXSKUQNPUYIUECSCLSNDSUGTTLDAHFYDZGEPQRHXRDXOAEQRSHFXJZQDKSJCXIHOUQFVSAKWWMMVYQPVXCIBCBXYJMHQWOCERNBMDGNBATBHGJRRYHOTLDGJIWCN");
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
    msg.setTimeStamp(0.03601533657443856);
    msg.setSource(15778U);
    msg.setSourceEntity(235U);
    msg.setDestination(21735U);
    msg.setDestinationEntity(8U);
    msg.name.assign("WMTEJEUAHWACVQFBVBHCNZZUFKURDKZFIXKRWPPSAFLYPMSRYZGDKXLVHUIYDQEVMNKBZEIJNVYQWGCE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FGYLBBHLMMVXSUYNAEZVZSFFZTFQBIDXWKHXMONBVCYVDLDJKUAJYMSNRLZWOJNSDRVRCCAGIS");
    tmp_msg_0.value.assign("TFFCKJNDGOBJOSCXVDUHFRHETHUKFISWMDLXQPCPQDFAQUXZUZWIYWVMULIRMRYIGPLREIQGAKOJEVOBNTCRJJEBKKWHLPSYTQOJVXGYYUTLGGZASRNAIQHYIFYIBEXGBMNHWKXONZQNKMDDWVTKZXFZBTPHWVEQOAIPXLLLM");
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
    msg.setTimeStamp(0.9541689469396857);
    msg.setSource(24315U);
    msg.setSourceEntity(185U);
    msg.setDestination(31600U);
    msg.setDestinationEntity(209U);
    msg.name.assign("XNISWWZGRHCUDAGCYXVTSZLRUQJJGABCIDIQJYGWTBKVOLLHKOQPZUWMBNAUJJCPSBTYCEKMLEHYCEKZZMRFILXBYPAUWUWOFLOC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BYIJNXWWPIZRMZTDGWZSOWL");
    tmp_msg_0.value.assign("FWDRUAQTIMRKGUDSORVBEHXGBHPICDOJYJDSPQLWHPYPPEVTOZSTUJBSHXTLCBLATCOZMACZURKUYRIIFKXNWPVOXHCXVJMNRRUDBYMPCECLTGKVAMFAOJLNGEDJANRIBMLQQDPZVXFQBFSB");
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
    msg.setTimeStamp(0.00675055612543396);
    msg.setSource(29695U);
    msg.setSourceEntity(79U);
    msg.setDestination(28872U);
    msg.setDestinationEntity(17U);
    msg.name.assign("MZSMICSCKTBFUIIUVFNRGICFMKAWLDLNUTBNGIPCETNPQKGMGJAVCWWHGPQETRQGOGJBSQRCWDFXXNQWRJMSZZMLBHIJMXYEXWUYQOKOZIAWZRENZPBYUTEVHSWJBXKHXSADZESACGYXDBTRDTLECOBWVOPFLSDTUODOLVFTSRHFJBIYPJFZ");
    msg.visibility.assign("BWLPUSWUOYEUSWXSHFCJAAKDRINDXOZKYVLJKFTVUIDGMRCDDYXFOGSHAPGUXKKRXKJPIWABFSXMHLQKBMTGVJXIEBMJIUUTZCLEALETDURRLZRRHYMCDZN");
    msg.scope.assign("ZWFOXZKPKLOSFWRHWXPFTTJNAJRCOIWUJAVNCZHETITVQXVNMIIRPNMLCQGDRIZSMYGSTLDSSTYUMDFAKJNMETEIDWYGBKBUERQAHJQAPCLDYPLAXFUOBTOBFDHEBPBVHFJSMAIOLAAQUAPNNSBKRUSYNZZUCYHWGGEBDXEBZVDIFHDXFXPYRYMCEHVLZQTUQFEGGUCONXZTVP");

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
    msg.setTimeStamp(0.016298530670781797);
    msg.setSource(37808U);
    msg.setSourceEntity(146U);
    msg.setDestination(36354U);
    msg.setDestinationEntity(144U);
    msg.name.assign("GNQVCNSEFJJIJRVGEZEFKERBBKNCFTKQHWQJZZWYRTSCQATGAYJVINYHXCVTKP");
    msg.visibility.assign("CECEKUEGALTAMXIZPRBGERBGRXAUTUJZHXPFWJNDZBDTCOOTZRJXYPIFAKVQXPUULHSHBVNYMPXMAFMNJDWCPYYVSDLOTTLSSDFMAMIJGBWQAEIJTGQV");
    msg.scope.assign("YHTSXUOLCZWOLONMEUPMXDWGQTJRPOGFBXDOPKMGIKNEQJOZXRYYZLFAPSFYHDNEXIKCJSOIMATHJADTUHGQVVYEBRPPCWFCNSSJTVHGJEBRZWSWTKMZUHDZQCXJUSICOBI");

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
    msg.setTimeStamp(0.03156236545014579);
    msg.setSource(36009U);
    msg.setSourceEntity(223U);
    msg.setDestination(24899U);
    msg.setDestinationEntity(253U);
    msg.name.assign("ICORLYELQOCRMAXADUWFTOCKDQEKEXNYQRKIFMFMQRJDJYUPVQJLBCTC");
    msg.visibility.assign("SEBELVBYPMAESDGDBOPSAJN");
    msg.scope.assign("IEBSABFJFPRHHXYQIZGUWBCUVASTBGATOJSEGHWEEGOVQQTGSWNPUGZDAIIPCHSVVKEBFO");

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
    msg.setTimeStamp(0.8555342870297639);
    msg.setSource(50392U);
    msg.setSourceEntity(160U);
    msg.setDestination(29346U);
    msg.setDestinationEntity(66U);
    msg.name.assign("DMRMEWQCWSXOXGDTONVEPABIMHSMPVGXLQVZZCXPGHVKBINCDVDVBGVSARNYNHNJVGJPIVGGETEHNOBFYIENQLAZWLZOYIQKSYRWOUDPMCRXWLWUXCIOWUYKMYERJPJJPTOUQGHBKSTRGXWDHUDLFSKOYJMLJGRZFSOXQCTFFQBWLNFUKFJEVCAIHLCITHYKXKAOZSBKRJUDBAPLUFICZABSAEPTFKTTYNUAJF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HJCIWMDNEXHNDZOMQEGBOKBMKTSEYQOSINGMPWPFOOZRLRMKWKGTASOWRRVWBHJTIVFCDXYRWYZZEQXPYNFKXHD");
    tmp_msg_0.value.assign("YNESDCDZUEMUBWOUKJYAJHDPKTIXREFHJTFHRXQXPUMQHISEJAXOIGPPYASFXCRWKBMLKXYASPIFQSKIIZFRMMTYVOCWQZFBSYLRFVHRFVRLNNGMXLTGVPJLAINOKZDYPKDVDECCMBKBMOQJOHOQKEHTUGHWNWDZGTWAQBRUPQQEAZLQNRVGNGWACVDHINJYCCIAXUTPYXP");
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
    msg.setTimeStamp(0.50759642621399);
    msg.setSource(35661U);
    msg.setSourceEntity(70U);
    msg.setDestination(23120U);
    msg.setDestinationEntity(133U);
    msg.name.assign("KVAHYOLYWCQMVHYQJRUVQCGNXZIZJXLTLPOK");

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
    msg.setTimeStamp(0.605299000007084);
    msg.setSource(640U);
    msg.setSourceEntity(95U);
    msg.setDestination(7380U);
    msg.setDestinationEntity(2U);
    msg.name.assign("PVYWUOOLFNSXFTGQTBVHIDIGVFPYCHEYSYSJNSVHDRBKZLWFOAZLGBJTCASISOPPQWKDJYJUVSZMEVMOUYVRRYBWZAXXZNLIUYMIPAWEUAXWPNRJKEPGMXCNIMOLQWEIWVRGDSOHFYKCNZZJJCQEGMULHXAODORKQLTHHJERSNGUFTBHHPZYAUXNBGRCNWADQIMVIXPWUUDSFGBCRTKTFVEIOTZGQCKN");

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
    msg.setTimeStamp(0.6323887603979064);
    msg.setSource(11947U);
    msg.setSourceEntity(148U);
    msg.setDestination(36390U);
    msg.setDestinationEntity(251U);
    msg.name.assign("LPWETAIADSCBRHUHCMQMERGUPVFWDJBDAKPWQFIWEWHIJKVNNQAVRKYKFPIZUZPGGYGHIXTTPSHHLJINXSUSPQRWDRLLRBKNIYITSTYXOMKFNUBCYMGZKLJZYTUSRQOCEAVSDKQOFHMGVMJNDYLZQUUOCONOLXHPCXBJABEEMDMFVEIZRCBWNALVPXGOLDGCUYFOTXGOXBRJAEUQVJNTSJAPDWWGIMZYHWJYTE");

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
    msg.setTimeStamp(0.13881252042843684);
    msg.setSource(35976U);
    msg.setSourceEntity(254U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(248U);
    msg.name.assign("FMBTEUWRKRLEUHVSJYDNIPLLZGNHQPGJAPAFVROJEOCOQCAIXAYRQXSTMCMGCZVZAEHERFFTDPOQDXGXLLPOYUMUDFBBNESNUGUPHJOXUYXMZISRZQONJIGITERLMNBSKSEFVDAPBEUKUHCMXNZGLKZWTWKJJFQSBFIPWXYOMA");

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
    msg.setTimeStamp(0.2064337150476846);
    msg.setSource(45258U);
    msg.setSourceEntity(134U);
    msg.setDestination(24911U);
    msg.setDestinationEntity(89U);
    msg.name.assign("GXNZYUYZAOSMOEKLSAEJWLXNGOIZLXDJSCNUBSXJTGQGPAHDOBMIBYQKUBPXDYTIHLSOANWEZBGKETCCGQHEJSTCAWGDTRZYWVBLIFPAYGMOTCVXNKTJQQZRKKPJCTJIUIGQHXLVZCYPLVFUFSSHOOVHDPDUMFRMRFKVXBVXEWZTBB");

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
    msg.setTimeStamp(0.45067256794598376);
    msg.setSource(4421U);
    msg.setSourceEntity(200U);
    msg.setDestination(40581U);
    msg.setDestinationEntity(236U);
    msg.timeout = 1604253758U;

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
    msg.setTimeStamp(0.6777804665325183);
    msg.setSource(32953U);
    msg.setSourceEntity(173U);
    msg.setDestination(43136U);
    msg.setDestinationEntity(110U);
    msg.timeout = 3858643706U;

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
    msg.setTimeStamp(0.5618446511540363);
    msg.setSource(39950U);
    msg.setSourceEntity(42U);
    msg.setDestination(6688U);
    msg.setDestinationEntity(191U);
    msg.timeout = 151867468U;

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
    msg.setTimeStamp(0.8879334451603137);
    msg.setSource(31725U);
    msg.setSourceEntity(251U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2770870214U;

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
    msg.setTimeStamp(0.9085884873941951);
    msg.setSource(65335U);
    msg.setSourceEntity(174U);
    msg.setDestination(17770U);
    msg.setDestinationEntity(243U);
    msg.sessid = 767665130U;

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
    msg.setTimeStamp(0.8462038244716092);
    msg.setSource(64201U);
    msg.setSourceEntity(45U);
    msg.setDestination(30829U);
    msg.setDestinationEntity(249U);
    msg.sessid = 1743217740U;

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
    msg.setTimeStamp(0.0681731314449906);
    msg.setSource(51235U);
    msg.setSourceEntity(248U);
    msg.setDestination(59704U);
    msg.setDestinationEntity(177U);
    msg.sessid = 3499726546U;
    msg.messages.assign("CYRQQOKVUAYNNPBCHHJPGIDXHQVAYLOLHEGIUMMAHFAJETJQXBZDVRMDKQZOBEIZPBWTQWJXSFXPYJDEMPCWKYDDUZTKOURFTJVFWAOIHSOOKGHWPHZURLFNBNBZMYUE");

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
    msg.setTimeStamp(0.10837924123188714);
    msg.setSource(27520U);
    msg.setSourceEntity(216U);
    msg.setDestination(15970U);
    msg.setDestinationEntity(140U);
    msg.sessid = 3125723626U;
    msg.messages.assign("MTDBRBAMQTOMFSZGNKWOUAXWBYBEBGRGJQXKWHINJJHGTLAEGRKCAJWJDYITV");

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
    msg.setTimeStamp(0.5658502954113027);
    msg.setSource(37633U);
    msg.setSourceEntity(12U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(74U);
    msg.sessid = 2026563034U;
    msg.messages.assign("EWFFMLOATHSSHCXFUPZDGDUJJJZNPQPIYQVMALMYNNTKURXCBNKJOSNNLCPAIFSXACRKQOTWHJYYVZPDYZIIGEIOQZQMYXWBLZKKXELYRVVOUTWDGEMHGMGKPDSHOHCHEFXQKVUCBVFXUVDFPY");

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
    msg.setTimeStamp(0.7020708387545163);
    msg.setSource(20694U);
    msg.setSourceEntity(145U);
    msg.setDestination(30456U);
    msg.setDestinationEntity(35U);
    msg.sessid = 330100802U;

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
    msg.setTimeStamp(0.26676361741020893);
    msg.setSource(7708U);
    msg.setSourceEntity(95U);
    msg.setDestination(64524U);
    msg.setDestinationEntity(158U);
    msg.sessid = 2976903824U;

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
    msg.setTimeStamp(0.49599128706110684);
    msg.setSource(32847U);
    msg.setSourceEntity(15U);
    msg.setDestination(39726U);
    msg.setDestinationEntity(54U);
    msg.sessid = 1183947542U;

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
    msg.setTimeStamp(0.5243704665833654);
    msg.setSource(29574U);
    msg.setSourceEntity(98U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(30U);
    msg.sessid = 1427980625U;
    msg.status = 12U;

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
    msg.setTimeStamp(0.5374725941743413);
    msg.setSource(31020U);
    msg.setSourceEntity(160U);
    msg.setDestination(22210U);
    msg.setDestinationEntity(228U);
    msg.sessid = 374306779U;
    msg.status = 250U;

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
    msg.setTimeStamp(0.4208924373526606);
    msg.setSource(36008U);
    msg.setSourceEntity(19U);
    msg.setDestination(45532U);
    msg.setDestinationEntity(27U);
    msg.sessid = 3289300882U;
    msg.status = 28U;

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
    msg.setTimeStamp(0.015424457502707045);
    msg.setSource(47385U);
    msg.setSourceEntity(179U);
    msg.setDestination(18385U);
    msg.setDestinationEntity(174U);
    msg.name.assign("RBDXUGFXERMGMFCKPVTMULUWNSUQSXYTLAQKTCHZBOMUJHKBOZIMIHGSAQOSEKZADCGFCDEYFDIGMFOLXDWXAIVUQUUOFQSIBHBFVRBXMGHNEJFVAWIBYSCAKCPPJZWYFTXYENWMVAMPLXUDILRPG");

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
    msg.setTimeStamp(0.34488698448973154);
    msg.setSource(32054U);
    msg.setSourceEntity(177U);
    msg.setDestination(61336U);
    msg.setDestinationEntity(203U);
    msg.name.assign("OTOTGHEMAAUZDYSLLCVDCFOYHPHRAKWBAXMITEUZSKYMIIKQTOEUBTLJUCQMCLQVHEXNWGJCXPRCNFHYLLXPCWBVSTGSINLMIWVJEWIZVYAPCAENODGRHNELNKKPNFUZRASQCUBGDPIDZXOAOFHRHAPHSJMZFRWUQJNZTXYKZLFGITQTJCXBDUTFXYVBADZFEWBOIGOQGBYM");

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
    msg.setTimeStamp(0.18330356782778512);
    msg.setSource(37790U);
    msg.setSourceEntity(194U);
    msg.setDestination(21731U);
    msg.setDestinationEntity(138U);
    msg.name.assign("ZVVSCIKOLHWNRLWFTPGAEKZYJCCEDYWTZUOSNWFEASMALTIPDSGHIHEJEECGBUUJMHUYTMZQJBCUSENIKLYKYPVTUFY");

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
    msg.setTimeStamp(0.45873197304433744);
    msg.setSource(12820U);
    msg.setSourceEntity(84U);
    msg.setDestination(2107U);
    msg.setDestinationEntity(143U);
    msg.name.assign("MADXLHLXLQIYSLYGHTUUNCKNXEAPKTXEUQBEPBHEZSVIMWOAVWKIDMLWPFTCOELKRDNQECHWZIVUKFXPBDYWLEZQTDNNVAKBCMBUNZVYCPIVMEXDTAUNJAHVRYZJPFTOFFPZPCAXFEFBOQAQSRWL");

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
    msg.setTimeStamp(0.9006867109537581);
    msg.setSource(26204U);
    msg.setSourceEntity(194U);
    msg.setDestination(59206U);
    msg.setDestinationEntity(198U);
    msg.name.assign("TQEKFVIZXKKEAMROIGTEHCBCYOTRBNRDPVUWUFOJBORGDIEBPZPPXAQGLQMFJUUQKOIHXNNHSTFIAXCCMBBGCEODSFAAJYKWHDBNIRLJEFZLATXARJECZVRTOPXFYXWFYDULJW");

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
    msg.setTimeStamp(0.26024406327064986);
    msg.setSource(52536U);
    msg.setSourceEntity(185U);
    msg.setDestination(30871U);
    msg.setDestinationEntity(131U);
    msg.name.assign("KZQFFPEALNGIOQUKKUZAHBILYQEEGDIRYNNGH");

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
    msg.setTimeStamp(0.00963503803260457);
    msg.setSource(29113U);
    msg.setSourceEntity(138U);
    msg.setDestination(61227U);
    msg.setDestinationEntity(68U);
    msg.type = 126U;
    msg.error.assign("IMWKKROVBOBNZWXPBDXNNJQQNWTSTYFYYGYLOAWVEPQMCLYVXWHRXHETVXVZILLBXIWMIOXBIUBQPHZDOZQPJHKKZSDHRGOUGKJTLCNKJF");

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
    msg.setTimeStamp(0.5653188242156056);
    msg.setSource(41707U);
    msg.setSourceEntity(238U);
    msg.setDestination(24829U);
    msg.setDestinationEntity(169U);
    msg.type = 25U;
    msg.error.assign("POCGMLIJXMKOFPYRKSEUUIXDRSAWQQD");

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
    msg.setTimeStamp(0.14752191798463254);
    msg.setSource(53895U);
    msg.setSourceEntity(168U);
    msg.setDestination(5163U);
    msg.setDestinationEntity(32U);
    msg.type = 76U;
    msg.error.assign("UGTEUDPIMVNFCCSAVZBXZYNFGJAJIETDYRPXQTETXCAMXKGHWSKWPRKJXJLIFHDFVHDZBLKPMUMDEIINJGCPHTUOZBQMZERZSQKVURGKYYHBRXOYWIRWNRQWXXLXFDIEPXHRJOLTYE");

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
    msg.setTimeStamp(0.469978118518498);
    msg.setSource(1137U);
    msg.setSourceEntity(115U);
    msg.setDestination(45871U);
    msg.setDestinationEntity(117U);
    msg.seq = 52371U;
    msg.sys_dst.assign("VCKNLQQDHDAVJSZVPBMFONLZBIWRUDQKFLKVJVFCDZGYZZTTFDSEIJW");
    msg.flags = 161U;
    const signed char tmp_msg_0[] = {-30, 109, -22, 75, -96, -118, 6, 92, -7, -92, 91, -2, 101, 30, -119, -96, -2, 64, 116, -63, -34, 108, -15, 68, 57, -37, -84, 54, -125, -111, -29, -59, 15, 30, 117, -49, -122, -47, 11, -98, -104, 105, 101, 75, 72, 40, 5, 81, -62, -49, 1, 46, 110, 41, -47, -118, -71, 68, -125, -92, -92, -54, 62, -11, -111, 122, -95, 96, 90, 12, 21, 100, -65, -120, 124, 111, -94};
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
    msg.setTimeStamp(0.14204550859617726);
    msg.setSource(56500U);
    msg.setSourceEntity(69U);
    msg.setDestination(7497U);
    msg.setDestinationEntity(116U);
    msg.seq = 31808U;
    msg.sys_dst.assign("IDQZFIHBTFSNEOIDBQAIYR");
    msg.flags = 214U;
    const signed char tmp_msg_0[] = {-32, -126, 2, 80, 18, 109, -4, -62, 11, 13, 4, -46, -87, 53, -20, -128, 35, -124, -61, -45, 47, -2, -121, -128, -67, 6, 52, -124, 99, -42, -13, 7, -66, 61, -75, -103, 93, -122, 94, 29, 59, -4, -113, 119, -17, -56, 27, 57, -98, -85, 104, 93, -92, -44, -125, -118, 123, 22, 114, -70, -95, -53, 125, 21, 96, -6, -81, -85, -12, 104, -92, 100, 117, -19, -21, -20, 55, 74, 109, -104, -80, -122, -47, 13, 86, -1, 1, -99, -50, 101, 54, 103, -59, -91, 13, 105, -104, -35, 33, 2, 70, -37, 79, -39, 50, 110, -37, 80, 12, 62, 27, -3, -51, 94, 48, -7, 4, -56, -31, 103, 79, -59, 97, -44, -119, 73, 115, 45, -17, 123, -38, -5, -38, -70, -55, -24, 100, -24, -4, 114, 8, 10, 26, 6, -118, 121, -29, 119, -97, 88, -52, 19, -6, 48, 9, 123, -122, -41, -76, 83, 81, -93, 103, -108, -60, -9, 80, -89, 60, -77, -85, 75, -69, -65, -8, -13, 53, -99, -51, -72, -11, 66, 28, -111, -42, -25, 2, 46, 34, -67, 101, -69, 114, 53, -22, 99, 42, -54, 10, -48, 78, -53, -1, 109, 3, -78, -107, 32, -49, -114, 48, 23, -51, -48, -92, -6, 87, 118, 52, -47, -21, 71, -101, 113, -38, -128, -24, 59, 56, 66, -104, 67, -46, -41, -20, -95, -32, -12, 37, 34, -117, -36, -16, -60, -2};
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
    msg.setTimeStamp(0.263856143377047);
    msg.setSource(18012U);
    msg.setSourceEntity(149U);
    msg.setDestination(65174U);
    msg.setDestinationEntity(251U);
    msg.seq = 33861U;
    msg.sys_dst.assign("TULMXKHREMLNAXDCVSSWOJXCPNMYZAIUGSDTXPFAEOTLBNQFCATCIOKPUIFZXBRVPWXTKMRQVNXWVNH");
    msg.flags = 163U;
    const signed char tmp_msg_0[] = {-57, -122, -63, -6, 95, 119, 33, 73, 31, -20, 27, -14, 94, 3, -31, 29, -55, 3, -63, 81, 96, 96, -112, 122, 26, -99, -39, -57, 115, 113, 116, -32, 110, -94, -61, -21, -20, 106, -19, -123, 21, -37, 80, 76, -54, -21, 48, -8, 27, 19, -1, 38, -36, -81, 50, -44, -7, -88, -66, -21, 34, -2};
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
    msg.setTimeStamp(0.41167877041860235);
    msg.setSource(55782U);
    msg.setSourceEntity(178U);
    msg.setDestination(51363U);
    msg.setDestinationEntity(43U);
    msg.sys_src.assign("ABUXEJJPUPLWKAOKYJJJBTBLYIVOUFIHDFCACMVZDBZJQRZIAZWJGSKIVHSHORLXGQTBAEVTTDNLSAVQLTHMKYLGKDDRSWWKOYSUMAHRFBERCGFAUCRDHUBMFXYJPRVLWMHSQBNUPOJNNXQYOQEOTEPSCGYYUDLXKHLLVZUXTECMGDAOZWQRTSVYNMEGWMKFOQFZXZIFEICXFVCMTNGPYRCZKGIWNZEWDHEIDOQBSNPPSFMNAXBUVPITCKQW");
    msg.sys_dst.assign("DNJUPVMBLUATUBKDDOFXZBNEGIZACGKXZTYDQJBJTMLKLVHNSVDFFZRIKQWRRGTBMPCZCETYPIFPZOXIQEHACHAYEGFFJ");
    msg.flags = 63U;
    const signed char tmp_msg_0[] = {115, 62, -68, -117, -41, -75, -91, -61, 120, -80, -82, 72, 7, 47, 4, 94, -127, -4, -121, 16, 12, 35, 25, 120, 81, 47, 73, -30, 109, 67, 116, -94, 70, -61, -22, 90, -4, -73, -74, 105, 51, 117, -62, 112, 46, -66, -80, -85, -16, 42, 77, -95, -42, 32, 106, -81, -77, -36, 68, 59, -30, 126, 113, 21, -68, -30, -84, -102, 61, -70, -32, -70, -73, 94, -82, 105, 47, 2, -18, -96, 103, 94, -85, 61, 50, -88, 89, -33, -89, 70, 13, 33, 45, -5, 98, 4, 29, -33, -116, -55, -62, 115, -77, -21, 38, 83, -95, 24, 64, -94, 38, -109, 15, 67, 59, -65, 18, 86, -78, 31, 32, -95, -49, -58, 11, 105, 96, -127, 97, -23, -99, 21, -25, 64, 40, -78, 10, 65, -27, -2, -94, 122, 72, -38, 74, 104, 70, 81, 77, 23, 41, -107, 73, 114, 48, -48, -30, 108, 79, 64, -86, -84, 10, -122, 86, 120, 98, 118, 98, 115, 93, 86, 63, 25, 122, -108, -76, -31, -14, 48, 25};
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
    msg.setTimeStamp(0.14810247123194198);
    msg.setSource(39902U);
    msg.setSourceEntity(213U);
    msg.setDestination(19784U);
    msg.setDestinationEntity(107U);
    msg.sys_src.assign("TTMOOSAGIRKHJBDFKYZYGFAJENRJXNCOOVPBP");
    msg.sys_dst.assign("ABYJNJPFHLWENEGCCIGVXKEJJRTQOGCCAMSLRPBACDP");
    msg.flags = 204U;
    const signed char tmp_msg_0[] = {46, -6, 27, -122, 10, 66, 84, -70, -128, 89, 62, -81, -87, -124, -52, 45, 92, 111, 35, -28, 3, 96, 39, 13, -121, -25, -95, 69, -72, 39, -93, 35, -64, 126, 54, 49, -51, -61, -5, -34, -19, 28, -45, -111, -102, -30, 94, 19, 106, -27, 55, 14, -74, -2, -81, 106, 28, -34, -128, 90, -114, -51, 55, -127, -99, 65, 29, 101, -98, -59, 23, 125, -122, -52, 122, 36, -52, -26, -68, -49, -47, -53, -122, -112, -16, -53, -128, -114, 117, -7, 84, -88, -51, 86, 59, -48, 45, 34, -56, 77, 67, -98, -73, 19, 54, -79, -78, 42, -125, -94, 38, -78, 41, -28, 33, -59, -2, -83, 118, 7, -45, -51, -10, 108, -12, 32, -59, -94, 68, 88, -9, -82, 123, -21, 111, -25, -87, 114, -103, 110, 11, -74, -55, -23, -118, 44, 123, 78, 99, 14, 88, -63, 17, -12, -86, -25, -84, 72, 41, 33, 54, 10, 58, 69, 66, -72, 75, -79, -15, 18, 15, 112, -107, -2, -128, -2, 75, 85, 70, 48, -73, -91, 48, -51, -10, -88, -8, -72, -17, -56, -45, -2, 106, 5, 56, 33, 124, 76, -109, -128, -79, -100, 42, -73, -100, 38, 77, -115, -10, 12, 21, 94, -70, -11, 47, -56, -9, -4, 116, 115, -37, -92};
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
    msg.setTimeStamp(0.2537317981394738);
    msg.setSource(29304U);
    msg.setSourceEntity(155U);
    msg.setDestination(10839U);
    msg.setDestinationEntity(206U);
    msg.sys_src.assign("RCPOXLNZHUYOBHFCRBMOENIWIZHSUNMSAJSCGKEXADELSKFCWBMPFURCDHZTXRPSEHPFHKXJKFGLLETCDKSLFTTLYBAUYAVQMQTMUQWUSRGPDNGTDLBQIMWJIGOPKPFUAQGXJHHZVMODJFZIGOTYRJTQNNNMZNXVWIDZQZXMGLCIGAEHEXIFRKJOAAPSBUDIWXOSVDWXSBJCROVVOQVYVLPKBDLTENQATBUYFBJWMPVGYWZYYREYUKAV");
    msg.sys_dst.assign("CIAFEVTRWYKGXLNMVEKPNYSSNAUSUFUGVFQOWHCGINJADQPXBFPADHIBGIZEFOVMJTKFNRDPUYZRRVBHGDWYXLQRPURLRQDETSHGJKHDKNIWPOOFCSUZYTQOCQWCPMMELX");
    msg.flags = 209U;
    const signed char tmp_msg_0[] = {-90, -69, 121, 19, 13, -88, 47, -6, -114, 94, -79, -40, 43, 68, 23, -98, -81, 123, 25, 92, 68, -8, 39, 32, -112, -54, -103, -113, 91, -123, 82, -32, 37, -49, -114, 2, 98, 35, 2, -40, -44, 96, -101, -84, 126, 57, -116, -112, -57, 66, -62, 61, -53, -58, -95, 10, 56, -113, 59, 66, 47, 30, -68, 105, -102, 65, -39, -39, 60, -18, 65, 1, -120, -72, -114, 45, 60, -53, -24, 91, 31, 106, 89, 29, 84, -29, -118, 13, -102, -8, 23, 25, -42, -43, -117, -104, 109, -18, 83, 31, -101, -96, -112, 60, -90, 106, 102, 30, 33, -89, -94, 84, 98, 120, -20, -78, -91, 119, -7, -115, 78, -110, -74, -3, 6, 49, 54, -69, 81, 125, -121, -127, -102, 47, -87};
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
    msg.setTimeStamp(0.41611386357944635);
    msg.setSource(64144U);
    msg.setSourceEntity(41U);
    msg.setDestination(50172U);
    msg.setDestinationEntity(158U);
    msg.seq = 33363U;
    msg.value = 17U;
    msg.error.assign("SZCTLDSHEFTMDFJJJWWXDJYMOGLIENRMNKZPOVXYHWGSOWEDVIFFXPFX");

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
    msg.setTimeStamp(0.08826994445434999);
    msg.setSource(35366U);
    msg.setSourceEntity(77U);
    msg.setDestination(20843U);
    msg.setDestinationEntity(89U);
    msg.seq = 24277U;
    msg.value = 191U;
    msg.error.assign("IEESVOGLKKOJTWDFZPKPMYNQSEHDJOZSCMXLLKEBDNVPKAJBZJRPGXMQFONODWQAHTA");

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
    msg.setTimeStamp(0.40938096558802173);
    msg.setSource(47344U);
    msg.setSourceEntity(77U);
    msg.setDestination(53576U);
    msg.setDestinationEntity(164U);
    msg.seq = 16096U;
    msg.value = 132U;
    msg.error.assign("VMEAWZREILOBDSIIXRBGGVHOMWRKBLYLFCT");

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
    msg.setTimeStamp(0.24806788037117267);
    msg.setSource(25637U);
    msg.setSourceEntity(127U);
    msg.setDestination(41198U);
    msg.setDestinationEntity(106U);
    msg.seq = 64376U;
    msg.sys.assign("PBPMMLOIVMBKRCDURUCOMVSLHALLZHCXSJZSZNSFMPDYQMJUDBFLIYBLQKTZC");
    msg.value = 0.9371583214601525;

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
    msg.setTimeStamp(0.6116865203011922);
    msg.setSource(29110U);
    msg.setSourceEntity(21U);
    msg.setDestination(12659U);
    msg.setDestinationEntity(15U);
    msg.seq = 12660U;
    msg.sys.assign("FTZOKAOZUTGVEUMIAGWUOBPDGRDPUGBFIGSSBLSNOJKCRQNAORMJDTIKRFAUFWWBXIBOPWNTQUPRLBTKNRRJVHYAEJNXQSDABDIHFTDQGGUXLMXRTJYWVKEDOZHVXXCQUEQJCIFNSLUGYPAHYCVMWJOHYECVTHCMPNG");
    msg.value = 0.07089210165666116;

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
    msg.setTimeStamp(0.993603928537192);
    msg.setSource(55703U);
    msg.setSourceEntity(183U);
    msg.setDestination(51587U);
    msg.setDestinationEntity(73U);
    msg.seq = 39247U;
    msg.sys.assign("LICBJXITEDOLORBRPJJNANOVTDAQKPNKQEAWNWTZBASXDGXECVLGAJTJMP");
    msg.value = 0.7630779432842826;

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
    msg.setTimeStamp(0.34038169836825105);
    msg.setSource(11163U);
    msg.setSourceEntity(85U);
    msg.setDestination(25244U);
    msg.setDestinationEntity(28U);
    msg.seq = 42964U;
    msg.sys_dst.assign("GPSFOHFTKZHTSXQGIIRMQPIHPJZTMVCSWEUMSRVYQRQYDFWONICSOFLAMUDAUOKYDIQPCHEDLVLGZECFXCNRMLEUGNIDDJCZQKABX");
    msg.timeout = 0.692022577251532;

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
    msg.setTimeStamp(0.6756386308274354);
    msg.setSource(21829U);
    msg.setSourceEntity(63U);
    msg.setDestination(11003U);
    msg.setDestinationEntity(216U);
    msg.seq = 12281U;
    msg.sys_dst.assign("YPMTSQIJRNXUSZHKITFDBFBVHADUUZPBSMZHYESDMBCVUIWJLNXVPXJJWXOUSCNXHWAIVLKORMEYAKFFLZZCSLKJVPMKMEPFWTQMYHANCNHXBWEOQUKFKMKOTGYO");
    msg.timeout = 0.8219260799057602;

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
    msg.setTimeStamp(0.8387680270944405);
    msg.setSource(42000U);
    msg.setSourceEntity(109U);
    msg.setDestination(1897U);
    msg.setDestinationEntity(83U);
    msg.seq = 5444U;
    msg.sys_dst.assign("KABYFTVAUCVXQRPNIVJOECZPZACLKLTSDFMWQOSRJKODFJEYQPUGOJEARTOYYPKSTZHGKRJMTBANLYRRXCNIMPJLITYBSPSHYXOMPCEXUSGANGAEHORZAPDGBJALHWXLUEWK");
    msg.timeout = 0.032140231494082516;

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
    msg.setTimeStamp(0.7829857755493155);
    msg.setSource(34908U);
    msg.setSourceEntity(42U);
    msg.setDestination(38819U);
    msg.setDestinationEntity(197U);
    msg.action = 123U;
    msg.longain = 0.6843274173480134;
    msg.latgain = 0.1535052515183044;
    msg.bondthick = 3435374397U;
    msg.leadgain = 0.11620626052651506;
    msg.deconflgain = 0.8989419874728507;

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
    msg.setTimeStamp(0.8979446531681359);
    msg.setSource(20173U);
    msg.setSourceEntity(8U);
    msg.setDestination(17698U);
    msg.setDestinationEntity(96U);
    msg.action = 223U;
    msg.longain = 0.9961540400301618;
    msg.latgain = 0.7717442635000221;
    msg.bondthick = 1110719964U;
    msg.leadgain = 0.17525436690503038;
    msg.deconflgain = 0.02781227980311962;

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
    msg.setTimeStamp(0.5112392831244313);
    msg.setSource(57556U);
    msg.setSourceEntity(217U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(77U);
    msg.action = 76U;
    msg.longain = 0.1488929673948991;
    msg.latgain = 0.26828719503417076;
    msg.bondthick = 1193690636U;
    msg.leadgain = 0.660013470205604;
    msg.deconflgain = 0.5612868689876779;

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
    msg.setTimeStamp(0.50075377437825);
    msg.setSource(23463U);
    msg.setSourceEntity(220U);
    msg.setDestination(28167U);
    msg.setDestinationEntity(107U);
    msg.err_mean = 0.43269168437807193;
    msg.dist_min_abs = 0.1011354661962034;
    msg.dist_min_mean = 0.7440494546941834;

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
    msg.setTimeStamp(0.9170019995294023);
    msg.setSource(37017U);
    msg.setSourceEntity(76U);
    msg.setDestination(28706U);
    msg.setDestinationEntity(92U);
    msg.err_mean = 0.21577643567448657;
    msg.dist_min_abs = 0.48366423448280005;
    msg.dist_min_mean = 0.2486705343237151;

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
    msg.setTimeStamp(0.7194155819509143);
    msg.setSource(33158U);
    msg.setSourceEntity(111U);
    msg.setDestination(65396U);
    msg.setDestinationEntity(57U);
    msg.err_mean = 0.6574789893799281;
    msg.dist_min_abs = 0.45072203499475316;
    msg.dist_min_mean = 0.9642406226428325;

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
    msg.setTimeStamp(0.08054773668566761);
    msg.setSource(18964U);
    msg.setSourceEntity(6U);
    msg.setDestination(3308U);
    msg.setDestinationEntity(173U);
    msg.action = 89U;
    msg.lon_gain = 0.7975539528513792;
    msg.lat_gain = 0.81713581791183;
    msg.bond_thick = 0.7255645284639265;
    msg.lead_gain = 0.6328234272964649;
    msg.deconfl_gain = 0.5696877678336891;
    msg.accel_switch_gain = 0.3635612961099888;
    msg.safe_dist = 0.8368918758235807;
    msg.deconflict_offset = 0.1896880582472843;
    msg.accel_safe_margin = 0.4351134655774427;
    msg.accel_lim_x = 0.6730398339041109;

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
    msg.setTimeStamp(0.8964625063276047);
    msg.setSource(46497U);
    msg.setSourceEntity(147U);
    msg.setDestination(60099U);
    msg.setDestinationEntity(194U);
    msg.action = 101U;
    msg.lon_gain = 0.38570449724410616;
    msg.lat_gain = 0.9162294616611244;
    msg.bond_thick = 0.21399895451682316;
    msg.lead_gain = 0.17291121314846358;
    msg.deconfl_gain = 0.44073619139495446;
    msg.accel_switch_gain = 0.11557080719234536;
    msg.safe_dist = 0.23668399488252423;
    msg.deconflict_offset = 0.3133430608791541;
    msg.accel_safe_margin = 0.43273942398859;
    msg.accel_lim_x = 0.7831021056054632;

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
    msg.setTimeStamp(0.2209038763495137);
    msg.setSource(27855U);
    msg.setSourceEntity(182U);
    msg.setDestination(32218U);
    msg.setDestinationEntity(214U);
    msg.action = 171U;
    msg.lon_gain = 0.3131844956110875;
    msg.lat_gain = 0.9829605342602774;
    msg.bond_thick = 0.37387196868687345;
    msg.lead_gain = 0.7367167935921369;
    msg.deconfl_gain = 0.4354002031536103;
    msg.accel_switch_gain = 0.4050400046560103;
    msg.safe_dist = 0.3321660109960317;
    msg.deconflict_offset = 0.5264043628167195;
    msg.accel_safe_margin = 0.830243596175281;
    msg.accel_lim_x = 0.9455056092380347;

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
    msg.setTimeStamp(0.4886824926468001);
    msg.setSource(988U);
    msg.setSourceEntity(3U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(116U);
    msg.type = 21U;
    msg.op = 204U;
    msg.err_mean = 0.06617395656878289;
    msg.dist_min_abs = 0.16727477742016605;
    msg.dist_min_mean = 0.8115773191560918;
    msg.roll_rate_mean = 0.24402194723529103;
    msg.time = 0.7844586953715689;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 133U;
    tmp_msg_0.lon_gain = 0.755802767352679;
    tmp_msg_0.lat_gain = 0.21384638439022385;
    tmp_msg_0.bond_thick = 0.6694677432100522;
    tmp_msg_0.lead_gain = 0.8085528116757457;
    tmp_msg_0.deconfl_gain = 0.4223916210024805;
    tmp_msg_0.accel_switch_gain = 0.06347537832534966;
    tmp_msg_0.safe_dist = 0.9368167491947974;
    tmp_msg_0.deconflict_offset = 0.19564742593626716;
    tmp_msg_0.accel_safe_margin = 0.6259408939655574;
    tmp_msg_0.accel_lim_x = 0.5027408193227777;
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
    msg.setTimeStamp(0.8149086014143055);
    msg.setSource(1096U);
    msg.setSourceEntity(167U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(69U);
    msg.type = 124U;
    msg.op = 245U;
    msg.err_mean = 0.94779811144;
    msg.dist_min_abs = 0.9338245658386622;
    msg.dist_min_mean = 0.4417750581850972;
    msg.roll_rate_mean = 0.12519227465559146;
    msg.time = 0.6027794834835085;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 65U;
    tmp_msg_0.lon_gain = 0.44827833559211794;
    tmp_msg_0.lat_gain = 0.2423797136208271;
    tmp_msg_0.bond_thick = 0.5931420798119732;
    tmp_msg_0.lead_gain = 0.4975974203268755;
    tmp_msg_0.deconfl_gain = 0.25889737931838064;
    tmp_msg_0.accel_switch_gain = 0.8224146001003371;
    tmp_msg_0.safe_dist = 0.2888800802799112;
    tmp_msg_0.deconflict_offset = 0.8568359022224874;
    tmp_msg_0.accel_safe_margin = 0.17006149070862286;
    tmp_msg_0.accel_lim_x = 0.7961856021600592;
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
    msg.setTimeStamp(0.046792714664739);
    msg.setSource(32111U);
    msg.setSourceEntity(51U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(95U);
    msg.type = 91U;
    msg.op = 47U;
    msg.err_mean = 0.883604810246307;
    msg.dist_min_abs = 0.12393462610773098;
    msg.dist_min_mean = 0.7499298646270831;
    msg.roll_rate_mean = 0.9040933791002016;
    msg.time = 0.15627199540542758;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 6U;
    tmp_msg_0.lon_gain = 0.6914104444089587;
    tmp_msg_0.lat_gain = 0.4806827854006642;
    tmp_msg_0.bond_thick = 0.023396021283394575;
    tmp_msg_0.lead_gain = 0.7401410851337291;
    tmp_msg_0.deconfl_gain = 0.763116968236496;
    tmp_msg_0.accel_switch_gain = 0.4381180849608225;
    tmp_msg_0.safe_dist = 0.5201325710408117;
    tmp_msg_0.deconflict_offset = 0.38010628680538816;
    tmp_msg_0.accel_safe_margin = 0.005985215903847374;
    tmp_msg_0.accel_lim_x = 0.32824292093080176;
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
    msg.setTimeStamp(0.25878663336422447);
    msg.setSource(29273U);
    msg.setSourceEntity(127U);
    msg.setDestination(25688U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.726291382890857;
    msg.lon = 0.4464532868235437;
    msg.eta = 957770380U;
    msg.duration = 60181U;

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
    msg.setTimeStamp(0.0879176389862405);
    msg.setSource(15358U);
    msg.setSourceEntity(192U);
    msg.setDestination(41786U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.24774224530265765;
    msg.lon = 0.9243235754727962;
    msg.eta = 2300247638U;
    msg.duration = 62968U;

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
    msg.setTimeStamp(0.10329947042096443);
    msg.setSource(3046U);
    msg.setSourceEntity(113U);
    msg.setDestination(39809U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.9096005307819003;
    msg.lon = 0.6350939016265646;
    msg.eta = 53248603U;
    msg.duration = 50561U;

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
    msg.setTimeStamp(0.7675840545416834);
    msg.setSource(58255U);
    msg.setSourceEntity(234U);
    msg.setDestination(52929U);
    msg.setDestinationEntity(224U);
    msg.plan_id = 61364U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.7062097609079568;
    tmp_msg_0.lon = 0.5103134488935649;
    tmp_msg_0.eta = 4271565490U;
    tmp_msg_0.duration = 14774U;
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
    msg.setTimeStamp(0.18900222922520504);
    msg.setSource(53338U);
    msg.setSourceEntity(55U);
    msg.setDestination(63749U);
    msg.setDestinationEntity(24U);
    msg.plan_id = 16190U;

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
    msg.setTimeStamp(0.36211293042818515);
    msg.setSource(35408U);
    msg.setSourceEntity(111U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(246U);
    msg.plan_id = 17098U;

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
    msg.setTimeStamp(0.4760100247172633);
    msg.setSource(62796U);
    msg.setSourceEntity(184U);
    msg.setDestination(33928U);
    msg.setDestinationEntity(10U);
    msg.type = 154U;
    msg.command = 65U;
    msg.settings.assign("BRGOFNBGRDTKJXVMHHMRWQROGTUYBIHZCUXMFSJKPDQWECQFMAGOWQUNIGISEKNQEOYTOQZKNQGIHSTJJXFERWKPWVWMDSPPGEFVXTHZJBYAVLVNWYQNYVSGALFHUQDAPNZOHHAHYTLKCUCZOPMXBRBYAQECTLDAFDMAJXFZZDMCEUZECWIVLEAKDLIEFSUDLBTBRYKHNLNTJZBRFSKNSXVSZUILRX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 29760U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GKVXIARKLINMYHQRKCXJATNVBXYHRKMOQPINBQNPSPQNJXKRDTSSQCSJQECMADRQMZPPUACAPITAHHPZYLHOVDWJOPXGSZEFDBQJBRBNVWTZFYKLHCFVWYNSWWAAFYGDMZOILCGVZTBNXDGOWLEKXQHZKNFVVJTBEGOUBDJLMCIJEMRYPAHTSMP");

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
    msg.setTimeStamp(0.09375140457936937);
    msg.setSource(11481U);
    msg.setSourceEntity(236U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(37U);
    msg.type = 217U;
    msg.command = 253U;
    msg.settings.assign("UTWVVFSRQHDWBJBBSWLOSRYHTTUJMPKUCKFFJNPDAJBRVCKEJPUQBOASZRIZNIJUSKHVTGVFCXNULYKHYLCBCCCRXXYIADTVVOWUZUZLDWPEIEYVNPEGCGYHFRXNQEFFDXQBIEMOJWDFNLEQLOAZHYKFTXIYRSP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48203U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.5938827995810605;
    tmp_tmp_msg_0_0.lon = 0.5136062658349367;
    tmp_tmp_msg_0_0.eta = 3573191640U;
    tmp_tmp_msg_0_0.duration = 202U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("OWDESMTBROMYBLYLWMTGLRTYQHMBZGQTGHDIFNXYMXDBXJYNZNUHSUSYIODELRAVJGKEVVRLTAOCKKNNLWTPOFULHMCFCSBUOQVFCIAHWQTQQJSIJCVNUZMGJBNOKGQCEORAPCJFPTHIITKWXDYZLPKAHXJZFVQDSXAFJWFZRZEYEWZRSVPPGYJAIZVNKINAPCWFGDYBMDRCUWJADXLSPBREBHXKSNKEXIHPZEQMCAMLTQOFOSUIPV");

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
    msg.setTimeStamp(0.1255234322826726);
    msg.setSource(14185U);
    msg.setSourceEntity(59U);
    msg.setDestination(918U);
    msg.setDestinationEntity(124U);
    msg.type = 91U;
    msg.command = 237U;
    msg.settings.assign("PCLZFOEGBSIVVKJYFUGVHTIYCMJETMRRNAZPLIFBM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 24933U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("IXRKWCKHGFZPXHYUNFONYWGZBRLOISOHEUPLUYPTHQJKBDPICEEPWBGWTZODATCIFERZBUMCVYQEVQVBMICLRGNNSDFXGOMVCWSLMCYDSJYEWTQVWFXUBSLHTDXSTAPASQHINTWGKCYJBELCVMGJDEZOKXCYMKGPIDRANKSARFSDXQZKBOPIWUNRRPLJ");

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
    msg.setTimeStamp(0.5993209211230728);
    msg.setSource(2542U);
    msg.setSourceEntity(3U);
    msg.setDestination(29050U);
    msg.setDestinationEntity(205U);
    msg.state = 145U;
    msg.plan_id = 40754U;
    msg.wpt_id = 108U;
    msg.settings_chk = 34368U;

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
    msg.setTimeStamp(0.2880264028862476);
    msg.setSource(34825U);
    msg.setSourceEntity(248U);
    msg.setDestination(54851U);
    msg.setDestinationEntity(57U);
    msg.state = 37U;
    msg.plan_id = 22786U;
    msg.wpt_id = 94U;
    msg.settings_chk = 11496U;

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
    msg.setTimeStamp(0.004886229307978995);
    msg.setSource(57661U);
    msg.setSourceEntity(217U);
    msg.setDestination(9340U);
    msg.setDestinationEntity(140U);
    msg.state = 48U;
    msg.plan_id = 25165U;
    msg.wpt_id = 244U;
    msg.settings_chk = 62225U;

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
    msg.setTimeStamp(0.6152224510402374);
    msg.setSource(61800U);
    msg.setSourceEntity(184U);
    msg.setDestination(24619U);
    msg.setDestinationEntity(198U);
    msg.uid = 229U;
    msg.frag_number = 35U;
    msg.num_frags = 3U;
    const signed char tmp_msg_0[] = {34, 7, -118, 112, 62, -41, -22, -4, -125, -63, -15, -92, -31, -108, -125, 89, -108, -100, 117, -85, 124, -60, 66, -72, 25, 83, 9, -49, 84, -97, -34, -47, 101, 60, 87, -86, 56, 88, -42, 87, -8, 91};
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
    msg.setTimeStamp(0.15008353161064103);
    msg.setSource(17371U);
    msg.setSourceEntity(182U);
    msg.setDestination(61797U);
    msg.setDestinationEntity(22U);
    msg.uid = 13U;
    msg.frag_number = 111U;
    msg.num_frags = 181U;
    const signed char tmp_msg_0[] = {72, -66, 19, 36, -106, 100, 65, 124, 115, -105, 80, 75, -60, 96, -64, 25, -32, 53, 31, -56, -66, 11, 6, -32, -62, 113, -30, -90, 46, 95, 73, 35, -69, 76, -101, 9, -110, 69};
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
    msg.setTimeStamp(0.9662582986997343);
    msg.setSource(14622U);
    msg.setSourceEntity(174U);
    msg.setDestination(62029U);
    msg.setDestinationEntity(159U);
    msg.uid = 117U;
    msg.frag_number = 172U;
    msg.num_frags = 159U;
    const signed char tmp_msg_0[] = {12, 113, -77, -100, 59, 30, 10, 104, 108, 119, 105, 77, -127, 17, 100, 21, -52, -62, 101, -38, 55, 109, 71, 43, 75, 98, -9, -91, 93, -115, -87, 7, -45, 108, 73, -90, -81, -33, -51, -22, 23, 2, 32, 1, 109, -30, -32, -95, -79, 55, 10, 23, 40, -38, 58, -105, 1, -21, -97, 44, 70, 10, 60, -100, -124, 83, 92, -16, -22, 36, -15, -114, -96, -93, -50, 82, -64, -34, -113, 62, 109, 125, 98, 108, 1, -113, 68, -44, -7, -84, 32, -8, 94, 57, 31, 52, -113, 71, 26, 113, -35, -99, 38, -121, 94, 76, 17, -44, -74, -80, -64, 13, -68, 124, -50, 79, 76, -57, 106, -49, -12, -23, -20, 5, -77, -99, -27, 123, 69, 104, 71, 33, -30, 115, -63, 39, 46, -65, 96, 108, 101, -1, -117, 70, -62, -76, 37, -42, 108, 125, -78, 108, -71, -38, -25, -24, 0, 9, 56, 69, -26, -52, 34, -94, 99, 48, 82, 53, 111, -37, -20, -40, 40, -81, -81, 85, 79, -40, 3, 115, -26, -55, 122, -34, -56, -68, -122, -68, -44, -34, 122, 36, -62, -7, 55, -22, -92, 99, 59, -32, -8, -115, -31};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.7876801178332509);
    msg.setSource(7954U);
    msg.setSourceEntity(246U);
    msg.setDestination(38591U);
    msg.setDestinationEntity(60U);
    msg.uid = 72U;
    msg.op = 99U;
    msg.frag_ids.assign("BJPJUZUCZIOQCZFMVWXPLBRJAGIUMSMWASNNZHEWNPVXEEQLLQEKTZOLXPXNMMSANHHJEHVSNEXZZMIAUONBOACYKHMDQDYKBGXQGRTJSHVHXNYCAPKDUWWRTLYBJYFURROBFSYIAQINTQUWYKOCDCHEYITHATIEDKBDSDRWQWOTRSLVQJIVFVMVKLKLRJGXUPEUPBVWSZHXDQDZBTJFLFPA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.6979607331770714);
    msg.setSource(2563U);
    msg.setSourceEntity(126U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(5U);
    msg.uid = 136U;
    msg.op = 142U;
    msg.frag_ids.assign("AFMLBXUFKKIYZCCJFJPMDRMTPFDJLHPNKCCNRAYPYRYOVIWIZUFGEJRSDNRIQCLDFZWSDNQBYUPYDBXPGAYNOLRRHOSQDDXUNJQYDLXABCPRTGOHHPMVZJJUWWNCGIJOKLVSUAVXOWEFWRTKTDZMZXLQKETPVKXSVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.5911815203655746);
    msg.setSource(32135U);
    msg.setSourceEntity(124U);
    msg.setDestination(4440U);
    msg.setDestinationEntity(41U);
    msg.uid = 91U;
    msg.op = 167U;
    msg.frag_ids.assign("NXPUKLWFTMYHQPVDLLMJZNWQCJTYQDIHSEOCRAFWZDISTUQQWCDFCJHNQQPLOVPYELGHMBZYKSTTKSBAUOKGLRWUTRVXYVBGGWQZYYIVKNLBDRGXEDZKJEUHAIUVFHIKHMMEDZNPTFZTYSIZCNISMEGNIZPRVJAEAULVWDECXYMMLPSAKWRDOUICCPPEYNBFXKBGFBLNKXMRFAXRARJOXTHPGWJGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.5400868227762781);
    msg.setSource(20670U);
    msg.setSourceEntity(29U);
    msg.setDestination(35805U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("FFQLCMAOLVNWRWFQOFDRXZEPHIHXDKSBGCJBUOQRXPZSLEHQYPGDIUMFMOBIVOVDGTVOPFVHQCJBUTEWNGKXQADYGXFKYSTAUUNEIBAWZQTEJKNKJPDGLSTACSBJNQYRBWRPCLYDMCLGFASYKZXZAIIXHOACUMNMHURYBWMYTTEJLGHORJIGZENRQLDDVUSZILHVVBHCDFVMZAXJZTAVURUJPOFWGKIYXKXNWIO");
    const signed char tmp_msg_0[] = {-25, 81, 31, 7, 8, -76, 37, 92, -101, 63, -26, -31, 109, 85, -101, -39, -111, -77, -77, 24, -92, 115, -3, -92, 28, -73, 107, 4, -120, 6, 73, 112, 67, -118, -112, -91, 12, -6, -36, -108, -100, -85, -65, -84, 125, -57, 19, 106, 19, 109, 118, -120, 106, 99, -101, 45, 33, 59, -115, -71, 126, -20, 56, -1, 86, -113, -72, 111, -83, -26, 42, -42, -61, 126, -16, 71, 10, 57, -124, 103, 87, 18, 100, 117};
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
    msg.setTimeStamp(0.2074971519270219);
    msg.setSource(48561U);
    msg.setSourceEntity(184U);
    msg.setDestination(4484U);
    msg.setDestinationEntity(217U);
    msg.content_type.assign("ETTJYJJORXPEPCGJYKUJZTLIIGNXQKGQPIWOARMMCVEFKUMZXTFQXVGBRCPHDBGGFWBROBRSMNCZXOVFMLXEXNENVGJPTHZNUSYZYMLPMXQCGYUBDEV");
    const signed char tmp_msg_0[] = {41, -112, -50, 60, -25, 79, -33, 20, 60, 27, -121, 32, -85, -7, 47, 70, 43, -10, 117, 123, -62, -32, 79, 113, 16, 42, 62, 15, 33, -128, -41, 1, 84, 115, -6, 75, -35, 21, 12, -116, -81, 96, -80, -118, -33, -96, -76, 10, -3, 24, 0, 14, 31, -27, 32};
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
    msg.setTimeStamp(0.19775716366732365);
    msg.setSource(8658U);
    msg.setSourceEntity(23U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(174U);
    msg.content_type.assign("QARYKDTWRHCHDMFFJPZADRUSFLHQESCOYNHNQABUKEPTKBGRCOMYPUYTXCMVIOTXZRBADEDSOWREIRNAGMUNLI");
    const signed char tmp_msg_0[] = {43, -56, -65, -7, 45, -121, -77, -114, 22, 25, -122, 116, -85, -30, 115, -113, 77, -38, 118, 8, 102, 4, -91, 124, -52, -15, -35, 46, 86, -11, -60, 39, -126, -109, -72, 26, -51, 85, -24, -86, -67, 22, -40, 66, 97, 61, -127, 22, 26, -63, -91, -88, -115, 48, -128, -104, 65, -66, -81, -120, -22, -71, 4, 121, -115, -59, -74, 125, -11, 31, -18, -88};
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
    msg.setTimeStamp(0.43480229839530427);
    msg.setSource(12595U);
    msg.setSourceEntity(68U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.36979873446315037);
    msg.setSource(42455U);
    msg.setSourceEntity(15U);
    msg.setDestination(48426U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.456816076160956);
    msg.setSource(476U);
    msg.setSourceEntity(26U);
    msg.setDestination(41364U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.14275717614612116);
    msg.setSource(38793U);
    msg.setSourceEntity(85U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(184U);
    msg.target = 47276U;
    msg.bearing = 0.9176179811787876;
    msg.elevation = 0.34517033293962085;

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
    msg.setTimeStamp(0.4045891868718863);
    msg.setSource(57686U);
    msg.setSourceEntity(114U);
    msg.setDestination(55640U);
    msg.setDestinationEntity(167U);
    msg.target = 55092U;
    msg.bearing = 0.10432915164636958;
    msg.elevation = 0.7041924392725405;

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
    msg.setTimeStamp(0.726861983789641);
    msg.setSource(13635U);
    msg.setSourceEntity(94U);
    msg.setDestination(13065U);
    msg.setDestinationEntity(193U);
    msg.target = 54590U;
    msg.bearing = 0.5342600173132621;
    msg.elevation = 0.7980077393194375;

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
    msg.setTimeStamp(0.9104674282441584);
    msg.setSource(47964U);
    msg.setSourceEntity(196U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(149U);
    msg.target = 49675U;
    msg.x = 0.3596208802397617;
    msg.y = 0.6686381729789318;
    msg.z = 0.6254850165305169;

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
    msg.setTimeStamp(0.046521968763677424);
    msg.setSource(10738U);
    msg.setSourceEntity(96U);
    msg.setDestination(41809U);
    msg.setDestinationEntity(216U);
    msg.target = 16795U;
    msg.x = 0.33095004002539397;
    msg.y = 0.7450188181054266;
    msg.z = 0.5181261750131742;

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
    msg.setTimeStamp(0.14286313128282846);
    msg.setSource(4901U);
    msg.setSourceEntity(178U);
    msg.setDestination(55304U);
    msg.setDestinationEntity(250U);
    msg.target = 60427U;
    msg.x = 0.3878265285399286;
    msg.y = 0.456001921621487;
    msg.z = 0.5048799640799657;

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
    msg.setTimeStamp(0.47956242717258135);
    msg.setSource(930U);
    msg.setSourceEntity(60U);
    msg.setDestination(28187U);
    msg.setDestinationEntity(219U);
    msg.target = 58624U;
    msg.lat = 0.5445807723759514;
    msg.lon = 0.39798333977727085;
    msg.z_units = 169U;
    msg.z = 0.6248315092255945;

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
    msg.setTimeStamp(0.526161010740536);
    msg.setSource(3875U);
    msg.setSourceEntity(130U);
    msg.setDestination(62914U);
    msg.setDestinationEntity(119U);
    msg.target = 22471U;
    msg.lat = 0.8434181525385458;
    msg.lon = 0.4888723270123898;
    msg.z_units = 47U;
    msg.z = 0.19689779939962182;

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
    msg.setTimeStamp(0.3130619401093716);
    msg.setSource(49579U);
    msg.setSourceEntity(150U);
    msg.setDestination(15088U);
    msg.setDestinationEntity(167U);
    msg.target = 40032U;
    msg.lat = 0.842715791704145;
    msg.lon = 0.6647301738095436;
    msg.z_units = 195U;
    msg.z = 0.054404413662928586;

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
    msg.setTimeStamp(0.3656593863647156);
    msg.setSource(17150U);
    msg.setSourceEntity(226U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(173U);
    msg.locale.assign("KXEZLZNCIQVATPDIGLJAIYMXEYTLOJVEUGURYMFVESUQGEJLBPEGMCVUZXPACSHKSTWBWHVBLQKUNFWTXTHAKLVLOGXNGYUFMMDSGPODSTVFYXKNSD");
    const signed char tmp_msg_0[] = {-26, -109, 49, 37, -114, 125, 117, -92, -126, -93, -27, -37, 33, 49, -104, 5, 81, 120, 22, -107, 81, 46, -26, 95, -69, -6, -124, -122, -116, 37, 114, 122, 36, -100, -88, -125, -13, -56, 121, -118, 67, 94, -118, 19, 63, -43, 45, 90, 58, -59, 66, 113, 71, 105, 101, -17, 112, 113, -122, 62, 9, -102, -6, 78, -85, -88, -60, 87, 16, -6, 72, -29, 64, -16, 35, -50, 74, -126, -105, -36, 96, 83, 73, 9, 84, -14, 102, 48, -105, 51, -56, -21, -98, 20, 119, -25, -29, -63, -106, 52, 108, -60, 41, 6, -2, 56, -88, 26, -53, -52, 103, -74, 57, -41, -20, 9, -124, 86, -23, 19, -93, -84, 57, 40, -65, -124, -26, -68, 42, 93, -42, 39, 93, -15, -17, 102, 66, -107, 0, 76, -77, 60, -25, 116, -30, 90, -69, 14, -33, -65, -56, 107, -16, -10, -22, 107, -60, -117, 126, 42, 115, -54, -71, -43, -57, 14, 26, 47, -77, -22, 12, -76, -26, -85, 58, -97, 23, 70, -3, -20, -77, -13, -38, -81, 22, 92, -104, -55, 115, -23, 25, -104, -115, 91, -94, 28, 73, 122, 52, -100, 40, 50, -75, 67, -40, 23, 77, 23, 124, 37, 27, -114, 101, -102, 16, -17, -105, -91, -42, 116, -103, -18, -17, 123, -118, 77, 99, 12, -103, 121, -89, 12, 91, -123, -20};
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
    msg.setTimeStamp(0.22916919994203733);
    msg.setSource(24686U);
    msg.setSourceEntity(29U);
    msg.setDestination(56105U);
    msg.setDestinationEntity(80U);
    msg.locale.assign("DWOQEAKTVJESESOYPGXXZNXQFFWZLBBQMYRHTUJGJHTXHATCPAEFCFVXSBOXHINZXQILZZUVIDLYPF");
    const signed char tmp_msg_0[] = {-103, -64, 93, -18, 0, -82, -83, -104, 68, 41, 52, -110, -29, 73, -104, -11, -113, -72, -79, 87, 56, 105, 101, 99, -121, -87, -8, -122, -37, 80, -80, -57, -60, 89, -64, 10, -44, -54, 92, -116, 57, 40, 112, 117, 83, 124, -6, -84, 15, -47, -85, 60, 48, 93, -55, 116, -47, -127, 79, -36, 49, 64, -7, -104, 81, -28, 57, 2, -32, 106, -10, 41, 100, -1, 46, -63, 70, -81, 82, 49, 48, -22, -50, 75, 57, -119, -61, 22, -116, 18, -31, 96, -44, 94, 122, -88, -128, 19, 90, -94, -126, 44, -53, -47, -6, -123, 105, -43, 8, -13, 36, -64, -52, 35, 50, 85, -40, 34, 46, -21, 33, 54, 18, -85, 76, -52, 80, 96, 21, 45, 94, -95, -73, 19, -30, 45, -77, -116, 54, 67, -76, -116, 68, 36, -57, -27, -14, 25, -111, 119, 50, -87, 78, -10, 92, -26, 48, -34, -105, -84, 14, -124, 79, 80, 41, -58, 24, -15, -118, -27, -43};
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
    msg.setTimeStamp(0.21841890419252985);
    msg.setSource(31934U);
    msg.setSourceEntity(135U);
    msg.setDestination(31073U);
    msg.setDestinationEntity(16U);
    msg.locale.assign("YEKEVZUNCHJGIHOEWFYNRFTDSKMRTACIFAAXSAULLHPCCBZZQCMDKTLCFUBPTZSCRXEJRQIMRTPXVKGDJFMNHIULYHLDHZQMSPVXOKHDQGBQZLFRSVGDJPJUXMXJWVWJYTNYTPSMWDAYCONKLAUEDGYLKXQKOVRRWYSPUXCAVTGNKTVNIPMIFESEIDWHBBCUPPJBUFWIYWGWOMIBQNAEWOJDBXGTJQFHVNGFSVZSREB");
    const signed char tmp_msg_0[] = {-70, 65, -8, 116, -11, -63, -51, 73, 27, 126, 118, -33, 76, 17, -15, -118, 16, -13, 3, 26, -10, -100, 53, 15, 123, 39, 5, -68, 3, -37, 38, 60, -111, -5, 26, 84, -112, -88, 62, -99, -114, 58, -111, 62, 110, 32, 41, 110, -29, -46, 7, -99, -20, -99, 9, -116, -76, 68, -88, 113, -18, -119, 117, 47, 93, -119, -45, 110, -56, 34, 112, -57, -82, -69, 100, -28, -105, 123, 112, 105, 45, 125, 45, -122, -71, 48, 98, -56, 109, -54, -71, -114, -109, -44, 1, -56, -88, 94, 116, -88, -52, 51, -44, 104, -41, -48, 16, 119, 59, -52, -78, 49, -83, 77, -97, 75, 17, 90, -16, -123, -45, -65, 67, -34, -7, 98, -31, 101, -77, -99, 85, -7, 91, -103, 46, 79, -9, 62, -24, -24, -4, 60, -69, -100, 5, 52, 50, -27, -86, 125, -104, 25, 22, 102, -6, 113, -17, -40, -111, 61, 15, 59, -36, -98, 57, -59, 110, 114, -99, 51, 109, -87, -86, 113, 73, 10, 28, -117, 0, 13, -98, 35, 72, -75, -54, 74, -7, 19, 15, -60, 114, -42, -2, -112, -75, -59, -93, -98, 99, -38, -18, -57, 36, 94, -108, -45, 126, -98, -63, 9, 54, -26, -115, 30, 122, 57, -54, -92, -42, 116, 7, 21, -104, -32, -73, -35, 68, -51, -62, -24, -40, 118, -58, -3, 75, -6, -123, -20, -125, 23, -89, -36};
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
    msg.setTimeStamp(0.34359052631190357);
    msg.setSource(51044U);
    msg.setSourceEntity(63U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.5736387064865586);
    msg.setSource(17022U);
    msg.setSourceEntity(32U);
    msg.setDestination(4952U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.4681708290091473);
    msg.setSource(62497U);
    msg.setSourceEntity(154U);
    msg.setDestination(59209U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.832761583791216);
    msg.setSource(8925U);
    msg.setSourceEntity(210U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(157U);
    msg.camid = 39U;
    msg.x = 64526U;
    msg.y = 7023U;

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
    msg.setTimeStamp(0.5172748126772994);
    msg.setSource(56004U);
    msg.setSourceEntity(151U);
    msg.setDestination(30018U);
    msg.setDestinationEntity(32U);
    msg.camid = 174U;
    msg.x = 12834U;
    msg.y = 60318U;

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
    msg.setTimeStamp(0.716894953684202);
    msg.setSource(40293U);
    msg.setSourceEntity(197U);
    msg.setDestination(50058U);
    msg.setDestinationEntity(222U);
    msg.camid = 148U;
    msg.x = 6899U;
    msg.y = 23919U;

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
    msg.setTimeStamp(0.9959221408736334);
    msg.setSource(55245U);
    msg.setSourceEntity(83U);
    msg.setDestination(64856U);
    msg.setDestinationEntity(145U);
    msg.camid = 26U;
    msg.x = 57928U;
    msg.y = 44307U;

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
    msg.setTimeStamp(0.7506390727355114);
    msg.setSource(10395U);
    msg.setSourceEntity(112U);
    msg.setDestination(63377U);
    msg.setDestinationEntity(160U);
    msg.camid = 237U;
    msg.x = 39551U;
    msg.y = 1969U;

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
    msg.setTimeStamp(0.6407963056136642);
    msg.setSource(53180U);
    msg.setSourceEntity(85U);
    msg.setDestination(912U);
    msg.setDestinationEntity(123U);
    msg.camid = 85U;
    msg.x = 41002U;
    msg.y = 39274U;

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
    msg.setTimeStamp(0.25948389408484185);
    msg.setSource(17280U);
    msg.setSourceEntity(166U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(85U);
    msg.tracking = 225U;
    msg.lat = 0.6760792311564741;
    msg.lon = 0.8816956376743929;
    msg.x = 0.5514451574308684;
    msg.y = 0.37163686328356327;
    msg.z = 0.5436033629247639;

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
    msg.setTimeStamp(0.23610736668863908);
    msg.setSource(60721U);
    msg.setSourceEntity(206U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(67U);
    msg.tracking = 206U;
    msg.lat = 0.5862235839868931;
    msg.lon = 0.04651221648293158;
    msg.x = 0.35579467500535267;
    msg.y = 0.5771180030120093;
    msg.z = 0.8494334243081793;

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
    msg.setTimeStamp(0.31633473391195666);
    msg.setSource(6863U);
    msg.setSourceEntity(170U);
    msg.setDestination(28037U);
    msg.setDestinationEntity(13U);
    msg.tracking = 113U;
    msg.lat = 0.8597916093472584;
    msg.lon = 0.01786395692949594;
    msg.x = 0.9054325568934534;
    msg.y = 0.3224822647949387;
    msg.z = 0.0780140280386965;

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
    msg.setTimeStamp(0.7273410864910645);
    msg.setSource(44467U);
    msg.setSourceEntity(183U);
    msg.setDestination(53530U);
    msg.setDestinationEntity(63U);
    msg.target.assign("HIAOHJLCULBEHQMHMAUMHAIXOWBYFAKTBLOOPWYXXIRCMEJTWZBURGNTUAFWYRVJXHNOPQPZSBFEDJGMOQVNRWGKAYHMNOEXMDVCHISLKDNAHJKZFDMYLSUXRVPNDVZPZUEDZCOXQFLCECVSYOWBQQGVKK");
    msg.lbearing = 0.8797992619456658;
    msg.lelevation = 0.18626680567941367;
    msg.bearing = 0.3356684561137804;
    msg.elevation = 0.1576832311102352;
    msg.phi = 0.48187847051983235;
    msg.theta = 0.45497498981118556;
    msg.psi = 0.959672820012818;
    msg.accuracy = 0.5779187356465374;

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
    msg.setTimeStamp(0.7390144768766463);
    msg.setSource(36670U);
    msg.setSourceEntity(64U);
    msg.setDestination(58730U);
    msg.setDestinationEntity(37U);
    msg.target.assign("RHDSZQJWGWOZPBLOHDOLSOINVEDTPTIUYIQMSKZQVCE");
    msg.lbearing = 0.5041194748572806;
    msg.lelevation = 0.058370864478223816;
    msg.bearing = 0.8734810046998631;
    msg.elevation = 0.021776436264835164;
    msg.phi = 0.4909170036836119;
    msg.theta = 0.39316536923691947;
    msg.psi = 0.4930157724341233;
    msg.accuracy = 0.9852577884076089;

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
    msg.setTimeStamp(0.2747307554175612);
    msg.setSource(29207U);
    msg.setSourceEntity(8U);
    msg.setDestination(59588U);
    msg.setDestinationEntity(177U);
    msg.target.assign("QWJRQDALNKLOVGNESEIXGCJEGAGOVZCBQOXGCANHGTODUIEYWMRHPPWYDVKNMUBOQEKGVTBFNNYYIRUSZLPDIKTQJQFFMWBZUWISHSNOQLTRAAJCSMNBYDCUMPUFKBHIEZOUVIZFAKHJNKWUKZSXLFFQQCBAFDIWBPUSBDDJDCLGXSWYNLV");
    msg.lbearing = 0.7966481990819338;
    msg.lelevation = 0.3056640101794075;
    msg.bearing = 0.7598238343921936;
    msg.elevation = 0.15016712814417765;
    msg.phi = 0.00800618038247869;
    msg.theta = 0.8255784175884218;
    msg.psi = 0.3842595901781276;
    msg.accuracy = 0.1792907119892989;

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
    msg.setTimeStamp(0.5998726916815941);
    msg.setSource(22560U);
    msg.setSourceEntity(50U);
    msg.setDestination(24463U);
    msg.setDestinationEntity(166U);
    msg.target.assign("CSTSLVKKUQYXOSNQBIUXOMCAHJLFNGLVSWCJCFIPNNGGQIGLWQIAZBJGYKERWHZRVUQAYTXSFLRAOYJZVZQLEUOTENHMDDPYLFKBQSCESJRQHFTSYWOJVDXGBHKYEBMWBMGWLTYHFXNVWJMCFHMIZUKAXPDEJTYHUXIDMPMUKTRZECXSDJQUEOUYMTOHVNEPDJWPRIMXCBCGLZBRGSIWTFFGL");
    msg.x = 0.11829168478796825;
    msg.y = 0.7356124192024017;
    msg.z = 0.5567067428137565;
    msg.n = 0.7910606705011785;
    msg.e = 0.8351508930487256;
    msg.d = 0.11056037935974339;
    msg.phi = 0.21979382162304295;
    msg.theta = 0.5861081865437606;
    msg.psi = 0.5806223099197376;
    msg.accuracy = 0.985253190968868;

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
    msg.setTimeStamp(0.8413527348370515);
    msg.setSource(5558U);
    msg.setSourceEntity(154U);
    msg.setDestination(14931U);
    msg.setDestinationEntity(121U);
    msg.target.assign("ADXBXWCCOTJEQHXMHVMURNDJZTGFRLFEUCCTMYKPNKBHBIWLQFEPOAVEATFNVYGPCIJCARBXLRWBRZNMKOHQMUSVAOYPWDGZHLJXLZUFWZHDOVHRSFOGERKMPWTUYDSKGYDFPTGHQLMUZVCNUOKKXLYNTZSYWCIDLEVJYSOXIAAPYAQRKZISEJJRZJISQMQD");
    msg.x = 0.3087476320420839;
    msg.y = 0.1783393763138933;
    msg.z = 0.34123739097721695;
    msg.n = 0.9000455710422208;
    msg.e = 0.9623563864185145;
    msg.d = 0.9088928289114595;
    msg.phi = 0.832552653493318;
    msg.theta = 0.649181481104891;
    msg.psi = 0.28416574888313906;
    msg.accuracy = 0.15703873172124128;

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
    msg.setTimeStamp(0.1424539532999447);
    msg.setSource(5386U);
    msg.setSourceEntity(136U);
    msg.setDestination(25115U);
    msg.setDestinationEntity(175U);
    msg.target.assign("THQMEFCLTAZMKUOPOUQLZALTUGS");
    msg.x = 0.5847253444243561;
    msg.y = 0.4950542205023539;
    msg.z = 0.47312416539923874;
    msg.n = 0.8350733490128666;
    msg.e = 0.7394001969830957;
    msg.d = 0.18471359808967336;
    msg.phi = 0.272925013722801;
    msg.theta = 0.6642973673099913;
    msg.psi = 0.3701774693040749;
    msg.accuracy = 0.5904574357683912;

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
    msg.setTimeStamp(0.5773702778181777);
    msg.setSource(10378U);
    msg.setSourceEntity(71U);
    msg.setDestination(43568U);
    msg.setDestinationEntity(221U);
    msg.target.assign("SWZTEZSXVAMLILKBQIIZMTYJJVAKOAIWJURANNGFWFEXSBTYQBDBLARDEMZPTASTSSDOWKIIDFYFKYOOELUYABFGBZMOHMLHNIQTRZZTMGCRAUMCIUDXPPCJYFXAVR");
    msg.lat = 0.3347962317103007;
    msg.lon = 0.5262599661551643;
    msg.z_units = 240U;
    msg.z = 0.8930295562737892;
    msg.accuracy = 0.01540315699006023;

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
    msg.setTimeStamp(0.3973287599901002);
    msg.setSource(1331U);
    msg.setSourceEntity(54U);
    msg.setDestination(47084U);
    msg.setDestinationEntity(75U);
    msg.target.assign("RVNONLSCRNBDWPAYIKACKMADPZOINUUCOQSUGSQCPCCYFMZD");
    msg.lat = 0.45235223537016644;
    msg.lon = 0.41791571602781385;
    msg.z_units = 224U;
    msg.z = 0.20809677313868524;
    msg.accuracy = 0.9547419688943514;

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
    msg.setTimeStamp(0.7480414494037312);
    msg.setSource(16185U);
    msg.setSourceEntity(243U);
    msg.setDestination(14304U);
    msg.setDestinationEntity(54U);
    msg.target.assign("VXMZAKTUNEDIVSQANYUODSFKFXKJEPLCINYQPTQJHFMUPDFHTHJNWUBWVISWOXPPOAEOPCBUKZZZMYRGXUJCAJRYOCKQLNFVBIVASULRGPBDKSQRFYNBBYJHLVQDEXJBPWLWSGDRTCBWKJDYFMBMHCKXWHGPGIMESTIFEJXAVZCBLLQKZHLORWVNXYCMMVZWMQLIRGTQGEEKHAXROYE");
    msg.lat = 0.17239497919042823;
    msg.lon = 0.5608965910461831;
    msg.z_units = 213U;
    msg.z = 0.08620749440348474;
    msg.accuracy = 0.9995831627566042;

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
    msg.setTimeStamp(0.0520777681282395);
    msg.setSource(39121U);
    msg.setSourceEntity(8U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(142U);
    msg.name.assign("QTSEHJPKPLZDCCKMYDVVRTKISVZSWGQPTUYTZAEKIFKOBNOHJZBITJQUMLNVYVCBURWHJRQPGEBEXLAFBSWEJBRWJQDXORVYALBTFGSDZKFGZEWM");
    msg.lat = 0.342385066038555;
    msg.lon = 0.49478473557716673;
    msg.z = 0.5928530677920837;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.12165820172790043);
    msg.setSource(37222U);
    msg.setSourceEntity(172U);
    msg.setDestination(13808U);
    msg.setDestinationEntity(121U);
    msg.name.assign("FWEWNAKAYIQWJKYFKMDVZOIUZGLMBZTXCYTCADKLUVWJNMNYSQWLDEJJRSEXDKNGBSDSYBIWUCRNSUPOLFGEYNFAORESHDIQOPEPCJBHELPITTKPRDYKIOWMQHXHEXFUQATPUBLIOOZXVGSFHTYYAJVWAVVGBUCYZHQJVQQXCXSORG");
    msg.lat = 0.1759776504734808;
    msg.lon = 0.7301562865624754;
    msg.z = 0.04349559376809142;
    msg.z_units = 132U;

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
    msg.setTimeStamp(0.7936253260389898);
    msg.setSource(9574U);
    msg.setSourceEntity(87U);
    msg.setDestination(39589U);
    msg.setDestinationEntity(53U);
    msg.name.assign("NLIOBVRYZRCUBWGKMPRGYXZENXKEKTZTIFBARWWCKOTKCHDLEWLFFZSKQLEATCXAXYGQUJFYRQZ");
    msg.lat = 0.42303555938668735;
    msg.lon = 0.062452501471866984;
    msg.z = 0.4756250602657377;
    msg.z_units = 109U;

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
    msg.setTimeStamp(0.23112156388153904);
    msg.setSource(61502U);
    msg.setSourceEntity(249U);
    msg.setDestination(41231U);
    msg.setDestinationEntity(149U);
    msg.op = 231U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HAUIBHSBKBCUVHNYRFVRAECALKDHXECZOBFMDLGDULLXWOZOCWZNQWTDIUNERIKRSKQIAQUSYXTHIMXOKKBNSUMCQQMDSFWPQNIFJGIJNTVEAVVCSAD");
    tmp_msg_0.lat = 0.023104665392835178;
    tmp_msg_0.lon = 0.915188377010324;
    tmp_msg_0.z = 0.29057792915484093;
    tmp_msg_0.z_units = 183U;
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
    msg.setTimeStamp(0.5692892327921362);
    msg.setSource(3935U);
    msg.setSourceEntity(13U);
    msg.setDestination(5880U);
    msg.setDestinationEntity(206U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.12762123185414598);
    msg.setSource(20021U);
    msg.setSourceEntity(160U);
    msg.setDestination(55558U);
    msg.setDestinationEntity(122U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.21717720389661588);
    msg.setSource(15512U);
    msg.setSourceEntity(205U);
    msg.setDestination(42215U);
    msg.setDestinationEntity(72U);
    msg.value = 0.9366243056809492;
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
    msg.setTimeStamp(0.6029385547599824);
    msg.setSource(46891U);
    msg.setSourceEntity(83U);
    msg.setDestination(53328U);
    msg.setDestinationEntity(101U);
    msg.value = 0.7715532321995;
    msg.type = 190U;

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
    msg.setTimeStamp(0.6151288365670216);
    msg.setSource(55980U);
    msg.setSourceEntity(149U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(222U);
    msg.value = 0.9933807938562754;
    msg.type = 104U;

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
    msg.setTimeStamp(0.587117461595131);
    msg.setSource(46537U);
    msg.setSourceEntity(128U);
    msg.setDestination(2775U);
    msg.setDestinationEntity(254U);
    msg.value = 0.36617303579661964;

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
    msg.setTimeStamp(0.4107630673434629);
    msg.setSource(58337U);
    msg.setSourceEntity(118U);
    msg.setDestination(28799U);
    msg.setDestinationEntity(54U);
    msg.value = 0.7374668107630689;

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
    msg.setTimeStamp(0.43944053189413657);
    msg.setSource(44843U);
    msg.setSourceEntity(180U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(231U);
    msg.value = 0.8860404364030355;

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
    msg.setTimeStamp(0.25720712278552416);
    msg.setSource(43919U);
    msg.setSourceEntity(155U);
    msg.setDestination(40228U);
    msg.setDestinationEntity(239U);
    msg.timestamp_last_service = 0.024171490174462962;
    msg.time_next_service = 0.016696622101025183;
    msg.time_motor_next_service = 0.1333515318027163;
    msg.time_idle_ground = 0.08408068442631667;
    msg.time_idle_air = 0.6489608842171324;
    msg.time_idle_water = 0.3263027641122208;
    msg.time_idle_underwater = 0.5767170997411719;
    msg.time_idle_unknown = 0.9597680594543678;
    msg.time_motor_ground = 0.03139837533814216;
    msg.time_motor_air = 0.42832958252390385;
    msg.time_motor_water = 0.5012567550302697;
    msg.time_motor_underwater = 0.23935926570561772;
    msg.time_motor_unknown = 0.342223005447304;
    msg.rpm_min = -20173;
    msg.rpm_max = -30454;
    msg.depth_max = 0.581915123850578;

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
    msg.setTimeStamp(0.4188384877100011);
    msg.setSource(55828U);
    msg.setSourceEntity(191U);
    msg.setDestination(55682U);
    msg.setDestinationEntity(227U);
    msg.timestamp_last_service = 0.8940434220325055;
    msg.time_next_service = 0.852205500480313;
    msg.time_motor_next_service = 0.48163621797609046;
    msg.time_idle_ground = 0.5596639632788727;
    msg.time_idle_air = 0.5799518380426901;
    msg.time_idle_water = 0.3654430188892317;
    msg.time_idle_underwater = 0.8619326787480492;
    msg.time_idle_unknown = 0.3399086001537083;
    msg.time_motor_ground = 0.32214591423380057;
    msg.time_motor_air = 0.40476645234267017;
    msg.time_motor_water = 0.00199411106497982;
    msg.time_motor_underwater = 0.9324136681579468;
    msg.time_motor_unknown = 0.8029171311901416;
    msg.rpm_min = 28760;
    msg.rpm_max = -29478;
    msg.depth_max = 0.8688784013717772;

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
    msg.setTimeStamp(0.6002914950587636);
    msg.setSource(617U);
    msg.setSourceEntity(125U);
    msg.setDestination(14172U);
    msg.setDestinationEntity(79U);
    msg.timestamp_last_service = 0.37926010821691647;
    msg.time_next_service = 0.9865178661580198;
    msg.time_motor_next_service = 0.3079061844129868;
    msg.time_idle_ground = 0.16761820638704594;
    msg.time_idle_air = 0.630011072916626;
    msg.time_idle_water = 0.38038020132337813;
    msg.time_idle_underwater = 0.6765528697723352;
    msg.time_idle_unknown = 0.6497954875536692;
    msg.time_motor_ground = 0.2641145016891887;
    msg.time_motor_air = 0.03506224487323395;
    msg.time_motor_water = 0.9153316805750992;
    msg.time_motor_underwater = 0.496751460945585;
    msg.time_motor_unknown = 0.6939196689928085;
    msg.rpm_min = 10754;
    msg.rpm_max = 15253;
    msg.depth_max = 0.34495021686353866;

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
    msg.setTimeStamp(0.11650664051101811);
    msg.setSource(42173U);
    msg.setSourceEntity(183U);
    msg.setDestination(50525U);
    msg.setDestinationEntity(239U);
    msg.severity = 39U;
    msg.text.assign("EFGXYFXHGJRQLSLQRPIHTCIMRCNIPSYULKVUJLTWMOYNHHXAMPLEBHDZPGKRAHNPVVBJBUFBOZTAAIQUMUQVZKYK");

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
    msg.setTimeStamp(0.30717846957568784);
    msg.setSource(57378U);
    msg.setSourceEntity(101U);
    msg.setDestination(50163U);
    msg.setDestinationEntity(127U);
    msg.severity = 42U;
    msg.text.assign("WRDYREEQSGZUHBGAABVMZHJBWOJWCQKUYYEBLVPEVJNOIWMEODNDZNVTFXLTLKUTQXSTGEMHYOQQHBGFYGQRVLQCMKIKJAURYYPVARTPBMPWLCMWUNVHSOTEOHSZNAZJYWMPSXIPTUZFRTW");

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
    msg.setTimeStamp(0.5596606654714927);
    msg.setSource(18448U);
    msg.setSourceEntity(65U);
    msg.setDestination(63258U);
    msg.setDestinationEntity(129U);
    msg.severity = 109U;
    msg.text.assign("NQWMNBKQALTLNJKBRFTAGVWTNPYGGFYUKYZMSUIXDRQMINQZATRYAZVCUBMBMPOAWMKLKKQBWLFTSZDDGTAILJPCCICOHGVUERAXOFDYMJVEDXXPFJUDQLWWSITJUOXMSZHVFFVKEQRNHXNXIIDEGJDBMTYOJTODELKHPNFASVHZSCSMGWFYVSWWSBI");

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
    msg.setTimeStamp(0.09220317855384563);
    msg.setSource(8566U);
    msg.setSourceEntity(0U);
    msg.setDestination(25235U);
    msg.setDestinationEntity(14U);
    msg.channel = -109;
    msg.value = -1167900246;
    msg.gain = 40U;

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
    msg.setTimeStamp(0.3804550204023738);
    msg.setSource(16295U);
    msg.setSourceEntity(44U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(34U);
    msg.channel = -13;
    msg.value = -2007283251;
    msg.gain = 190U;

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
    msg.setTimeStamp(0.2806241387170483);
    msg.setSource(18822U);
    msg.setSourceEntity(95U);
    msg.setDestination(14106U);
    msg.setDestinationEntity(87U);
    msg.channel = -98;
    msg.value = -1730833967;
    msg.gain = 1U;

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
    msg.setTimeStamp(0.4955084599307843);
    msg.setSource(34332U);
    msg.setSourceEntity(106U);
    msg.setDestination(35057U);
    msg.setDestinationEntity(195U);
    msg.ch01 = 0.8345368068971079;
    msg.ch02 = 0.3317649499558608;
    msg.ch03 = 0.12523805885291717;
    msg.ch04 = 0.8376985666734259;
    msg.ch05 = 0.7706501599918154;
    msg.ch06 = 0.32881254476554267;
    msg.ch07 = 0.38042484946359145;
    msg.ch08 = 0.11545218635598309;
    msg.ch09 = 0.9061851547298954;
    msg.ch10 = 0.1238197787473192;
    msg.ch11 = 0.028919603086188905;
    msg.ch12 = 0.07657487820068709;
    msg.ch13 = 0.8084911334281523;
    msg.ch14 = 0.9239375818630706;
    msg.ch15 = 0.4574040710409728;
    msg.ch16 = 0.3115192547898241;

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
    msg.setTimeStamp(0.2992662059759458);
    msg.setSource(54665U);
    msg.setSourceEntity(98U);
    msg.setDestination(62189U);
    msg.setDestinationEntity(208U);
    msg.ch01 = 0.12453384180959226;
    msg.ch02 = 0.08085906757323424;
    msg.ch03 = 0.5744028365356787;
    msg.ch04 = 0.7884283823243029;
    msg.ch05 = 0.3819341020216731;
    msg.ch06 = 0.6552251952410415;
    msg.ch07 = 0.9678882947681401;
    msg.ch08 = 0.7900306039535666;
    msg.ch09 = 0.48855840148400687;
    msg.ch10 = 0.34184919740966724;
    msg.ch11 = 0.05082579218571648;
    msg.ch12 = 0.9121571393224557;
    msg.ch13 = 0.6551110918463292;
    msg.ch14 = 0.8163687542311651;
    msg.ch15 = 0.47843288087147073;
    msg.ch16 = 0.45883213562334235;

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
    msg.setTimeStamp(0.9009203690977926);
    msg.setSource(39625U);
    msg.setSourceEntity(248U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.052823236493351966;
    msg.ch02 = 0.9604488005668772;
    msg.ch03 = 0.15411201203833824;
    msg.ch04 = 0.8279944148166468;
    msg.ch05 = 0.9571803733048081;
    msg.ch06 = 0.1915624295977867;
    msg.ch07 = 0.9724901205750127;
    msg.ch08 = 0.8364911016249637;
    msg.ch09 = 0.18471069372691917;
    msg.ch10 = 0.18621213562954786;
    msg.ch11 = 0.8422672805461754;
    msg.ch12 = 0.2661523281849939;
    msg.ch13 = 0.0012679904007170117;
    msg.ch14 = 0.9341523427560454;
    msg.ch15 = 0.9243687329902952;
    msg.ch16 = 0.7970663735862012;

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
    msg.setTimeStamp(0.17535464358214625);
    msg.setSource(17437U);
    msg.setSourceEntity(55U);
    msg.setDestination(13576U);
    msg.setDestinationEntity(192U);
    msg.op = 148U;
    msg.lat = 0.18187790703176;
    msg.lon = 0.3728256789734148;
    msg.height = 0.49579813881847434;
    msg.depth = 0.7886039457288283;
    msg.alt = 0.2761241696268897;

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
    msg.setTimeStamp(0.8307302759069395);
    msg.setSource(63974U);
    msg.setSourceEntity(147U);
    msg.setDestination(8566U);
    msg.setDestinationEntity(114U);
    msg.op = 205U;
    msg.lat = 0.22019929481666745;
    msg.lon = 0.9999078532029887;
    msg.height = 0.5691323167234187;
    msg.depth = 0.933369898882732;
    msg.alt = 0.21382140226322888;

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
    msg.setTimeStamp(0.95216005469106);
    msg.setSource(61581U);
    msg.setSourceEntity(164U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(181U);
    msg.op = 93U;
    msg.lat = 0.11254557024391987;
    msg.lon = 0.49440691200428033;
    msg.height = 0.6559473325221585;
    msg.depth = 0.7287801439884518;
    msg.alt = 0.9339698103117573;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.3913888727025967);
    msg.setSource(58029U);
    msg.setSourceEntity(83U);
    msg.setDestination(49776U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.9863222157179609;
    msg.speed = 0.47061589944087434;
    msg.turbulence = 0.3614584908983838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.3255320136547437);
    msg.setSource(7557U);
    msg.setSourceEntity(196U);
    msg.setDestination(55956U);
    msg.setDestinationEntity(208U);
    msg.direction = 0.7475880782867111;
    msg.speed = 0.8122264169415194;
    msg.turbulence = 0.964865728539261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.19048177759726814);
    msg.setSource(26421U);
    msg.setSourceEntity(101U);
    msg.setDestination(6613U);
    msg.setDestinationEntity(161U);
    msg.direction = 0.3884026552351235;
    msg.speed = 0.2266106404758904;
    msg.turbulence = 0.502574236740056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.01971334511319145);
    msg.setSource(6904U);
    msg.setSourceEntity(80U);
    msg.setDestination(39892U);
    msg.setDestinationEntity(223U);
    msg.msg_type.assign("BQBTLFSNICGAWISEZHMYHZBJXYUKAZKBVWBSWOGPVUNQXPHAVELSMQUFTUHMLTDBXUEPWYVMJQMEUGRKFSNRNOHGJBTWZ");
    msg.sensor_class.assign("OFEBLJXRXOXA");
    msg.mmsi.assign("BMXQYDSXNGWKMUKCCMWJZHLHOPUDIDBVQZJVEJVFYGCSHJTWIWBGIYRHFDHBKFEGQTQVNNZHTETMFDVQQPJHYUWZVYWAGNVXYDLRIKPIUTYMMENBTTLZEZFWOKYNPOOUBGSGNCSNCKPKYFSLXFXLNJAKZTIAXDOCCUYQSHXPCUARXEPAOBPAWPUDCTIOJFVGZQJSMRGELLKMKORLDQQCBWPSSHGMARDFFX");
    msg.callsign.assign("UOFFBLXLFCSJJNRARMVXFMYGXZHZTEPOEEURVPSKOQUXPCOVFBYMIZTBCVQAYUFIEDEJNQRZKINHJAMKHLTXPMFWJEVNYPHQKRTNSODOGHG");
    msg.name.assign("FVXKNZFJICTMYHAIXFXXAZVOFMREOVDBAFQRNRWAYMRGBNGDONCDVMAGEOWUPPLZSPZIWJTBIWSDOMSQGXHPOXRZBVHUZXHWCTTULDCYDMEMJLSARSENYNJCKLVOTHKGEZRKOHKUJ");
    msg.nav_status = 121U;
    msg.type_and_cargo = 129U;
    msg.lat = 0.7970346135104929;
    msg.lon = 0.174069029618513;
    msg.course = 0.5144973510179442;
    msg.speed = 0.8941048594079355;
    msg.dist = 0.11173481226567294;
    msg.a = 0.4876646863420855;
    msg.b = 0.3466309844520349;
    msg.c = 0.49680711604708794;
    msg.d = 0.5149163699484682;
    msg.draught = 0.4615660019338256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.40144536031615663);
    msg.setSource(34496U);
    msg.setSourceEntity(40U);
    msg.setDestination(42752U);
    msg.setDestinationEntity(166U);
    msg.msg_type.assign("EBCAIPMPFCYEVKRTYAJIOADXTVKTHJQXGYSIVXGDZKANRCZYVJZIWOYWLBFWXJBXCUFSHBAPXUQODDWQHHAUSDZBHIXGPFASCUJNBJMICIILOEQITLHFVWGRGZUJRKTPDOONPSEVCYYVOTHDYMMNLXTJMKUDKDCWOERSNMEVPQLBVFOHLQMSEGKSASCRURQWUZZTYKSGPGJFNQNGNWHXDUJCNTMFWVBZMXL");
    msg.sensor_class.assign("DZOCRBMJITHTAYHXLQNXVYJJLVYHIZNYSCJXNZXPFARTQHNPAOBXXRDATVZUQIUMKBYAZUKDUZECZHKIGWBTWTMDJMPCERQTOUJVWYALYVGELNTOHEVZMHHCLWLKUOCRFWWDMGGOTCIHLSEGUQPAMJUISWEVLXOPVEGAMNBZQMHSVSDANPXBFWJRNKFYQEFJBPWSSLYDPFIKOPUFBSFKVCCKTGKORIFWLQSEJMXEQGSCINRGUDRRZIOKGNDYBQ");
    msg.mmsi.assign("QVHQPDYMGGUVTXMUAKRNTXREEQOVC");
    msg.callsign.assign("WGETHXVIKKOXPZPPUZTVVEXOLYVBDPQRSTLTLUGXGIDOAUCWDNKZRYKNLJAOTICGXDXBYWSMEMGM");
    msg.name.assign("DBRQNQYTEXVDXGHJJDTEEWMFYMDVLOLIMCAWUTVFUVL");
    msg.nav_status = 88U;
    msg.type_and_cargo = 197U;
    msg.lat = 0.17095311212034547;
    msg.lon = 0.3262446778309459;
    msg.course = 0.39305460574456563;
    msg.speed = 0.5888302703763666;
    msg.dist = 0.7828871158261;
    msg.a = 0.3878516583056302;
    msg.b = 0.5175422538194568;
    msg.c = 0.024133008359456976;
    msg.d = 0.8934048006743927;
    msg.draught = 0.4504753920669018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.5415700098996046);
    msg.setSource(18930U);
    msg.setSourceEntity(59U);
    msg.setDestination(54941U);
    msg.setDestinationEntity(67U);
    msg.msg_type.assign("QOMCBEWDLZVTKXYDEBOLWM");
    msg.sensor_class.assign("ICBEHPWZRFECCKVDRFJKDUUEBYTVXAQKRHHPQWUJ");
    msg.mmsi.assign("YDYWHXCOEXQKXEWMMEUPRBSDCWFPXVHIBOHZICFGQZMHXYWAMGCPBVRYFOTDHJVNQLEKVSJSNAGNOKTDPAQGAULDUOBILGTYLEYSRVGNMFJYLLCNEJIGNLDFAMWSAXAHTRBUZHIIS");
    msg.callsign.assign("YDMDWAQQNRUUJROKINRRITUPWRKTYFJMXRBWDSSPVDVOZPRMXCLNICQRLADSMTAOAXWUTTRSAPFEUBQCNJEAGBPBMHZSVAYHPGXNYOHMJBQDEWMCEVIPWKHWDMIGBPVQPKNGZWZWCAOLCESXHONGFQSUDYXUHTKFXMCJBYJYKADOGZHXSIOKJNLRGTQYZBZMXVFGQJJEYSBVVUZSTIDAKLCTUQOPLGOLHFLWZIEYEXJHIENZLNFVBGHUFL");
    msg.name.assign("QDJCCJCWARFHOFWXCSGYRTVXHBBTTCHIHHGZGUVLVZIXDFNLWOKTDKXKPSDFTSUMBCYVEANNQTGSUOFEODURMXMPMXUZHDN");
    msg.nav_status = 82U;
    msg.type_and_cargo = 222U;
    msg.lat = 0.6695976423906989;
    msg.lon = 0.2575875296359763;
    msg.course = 0.14239739380562944;
    msg.speed = 0.20902188148354206;
    msg.dist = 0.8588930602786669;
    msg.a = 0.6300790105479469;
    msg.b = 0.04217047552902953;
    msg.c = 0.04101463587157772;
    msg.d = 0.415626931673282;
    msg.draught = 0.7115430848345597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.2053389769593349);
    msg.setSource(53815U);
    msg.setSourceEntity(21U);
    msg.setDestination(6144U);
    msg.setDestinationEntity(108U);
    msg.depth_at_loc.assign("VBCRDXEUCFLHEXBFQQGETEEMZLGSUAKJWWQMYZJAN");
    msg.danger.assign("PXXNCMYLAKLGCCEOASSADJFPRUOOMCNKLIQHYQRKDOBAUKIGBVSSFMTUNQFFRGQKKBJSLLZYURTCPZXPDHMJSSMQVMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.6473126661069475);
    msg.setSource(648U);
    msg.setSourceEntity(196U);
    msg.setDestination(31514U);
    msg.setDestinationEntity(29U);
    msg.depth_at_loc.assign("VTERVIXQSUDBFYGIRGMYSCONKZDUFYOEAEXFUWLVHVEUAXSVKBOTLJCUKCJQPHZBCXTVKNXIPOXCYJPQVESTFLPDIBJ");
    msg.danger.assign("OIVXBEVUJQQNEZJCEFGRHYJWACJTRSPFRLXFGYKGLMNSUVPSMCJYPPJITZOHSUZQFIWCIHJBDLBUTCKWSFYXPITEQNIEUDGDNNKUIBGVKOWAHIWOFQUEPHPDCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.44143960732332277);
    msg.setSource(27872U);
    msg.setSourceEntity(198U);
    msg.setDestination(24782U);
    msg.setDestinationEntity(211U);
    msg.depth_at_loc.assign("ZSVWBTCXRJTGPMMCPIUECALQAKJUZRYPJCUMIIFRSIADHMPHJVLARVBGVKMVOMQLHXCPWOXRNHMTFDWSHZBVHHJWFLVSLEIFCLTOGKLRPGUDOGIFAKXOSTGXJOLSHOQNWXUASUZUGFARMUEFXTQNUPDPACYEZYWQGYNIWPTBYPFZQGCYNYDLQXGQBNECVSFEJWDFZCKBE");
    msg.danger.assign("QZCXTOPFBOKUCSO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.38639791118404665);
    msg.setSource(44434U);
    msg.setSourceEntity(36U);
    msg.setDestination(47201U);
    msg.setDestinationEntity(56U);
    msg.time = 0.04210356708399732;
    msg.x = 0.7928812819804654;
    msg.y = 0.6452413307169709;
    msg.z = 0.33486800337172484;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.32207296364971616);
    msg.setSource(4453U);
    msg.setSourceEntity(228U);
    msg.setDestination(59651U);
    msg.setDestinationEntity(147U);
    msg.time = 0.641690163816614;
    msg.x = 0.5798582431319689;
    msg.y = 0.5262270706718388;
    msg.z = 0.47154117410300067;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.32349872934723733);
    msg.setSource(32556U);
    msg.setSourceEntity(87U);
    msg.setDestination(1288U);
    msg.setDestinationEntity(237U);
    msg.time = 0.252258292010928;
    msg.x = 0.4957146790842587;
    msg.y = 0.7984244186517325;
    msg.z = 0.5130535141521053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9359935801849736);
    msg.setSource(44141U);
    msg.setSourceEntity(0U);
    msg.setDestination(50702U);
    msg.setDestinationEntity(70U);
    msg.nbeams = 167U;
    msg.ncells = 152U;
    msg.coord_sys = 230U;

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
    msg.setTimeStamp(0.7015574417651285);
    msg.setSource(6519U);
    msg.setSourceEntity(120U);
    msg.setDestination(3974U);
    msg.setDestinationEntity(177U);
    msg.nbeams = 217U;
    msg.ncells = 66U;
    msg.coord_sys = 37U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4137845256102879;
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
    msg.setTimeStamp(0.9523624590209);
    msg.setSource(61725U);
    msg.setSourceEntity(192U);
    msg.setDestination(43066U);
    msg.setDestinationEntity(112U);
    msg.nbeams = 183U;
    msg.ncells = 157U;
    msg.coord_sys = 171U;

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
    msg.setTimeStamp(0.1425952122004457);
    msg.setSource(63896U);
    msg.setSourceEntity(200U);
    msg.setDestination(33735U);
    msg.setDestinationEntity(91U);
    msg.cell_position = 0.6141538317841182;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3246810889755325;
    tmp_msg_0.amp = 0.29048603590875943;
    tmp_msg_0.cor = 94U;
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
    msg.setTimeStamp(0.09833485932043284);
    msg.setSource(41900U);
    msg.setSourceEntity(138U);
    msg.setDestination(36093U);
    msg.setDestinationEntity(22U);
    msg.cell_position = 0.5680710262231479;

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
    msg.setTimeStamp(0.24438404006655168);
    msg.setSource(50677U);
    msg.setSourceEntity(13U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(19U);
    msg.cell_position = 0.8293626009593142;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.618237414213038;
    tmp_msg_0.amp = 0.6361552341939173;
    tmp_msg_0.cor = 170U;
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
    msg.setTimeStamp(0.11135616136671711);
    msg.setSource(13505U);
    msg.setSourceEntity(57U);
    msg.setDestination(31353U);
    msg.setDestinationEntity(94U);
    msg.vel = 0.8676813666571119;
    msg.amp = 0.05951136991206618;
    msg.cor = 22U;

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
    msg.setTimeStamp(0.5849723094161903);
    msg.setSource(19032U);
    msg.setSourceEntity(237U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(189U);
    msg.vel = 0.342533082659914;
    msg.amp = 0.8222420986639467;
    msg.cor = 149U;

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
    msg.setTimeStamp(0.1357704201225981);
    msg.setSource(50281U);
    msg.setSourceEntity(161U);
    msg.setDestination(35530U);
    msg.setDestinationEntity(37U);
    msg.vel = 0.42315629157418677;
    msg.amp = 0.9607127452085836;
    msg.cor = 51U;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.19892518157430716);
    msg.setSource(11454U);
    msg.setSourceEntity(235U);
    msg.setDestination(64574U);
    msg.setDestinationEntity(252U);
    msg.value = 0.979857910443247;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.2767597383844863);
    msg.setSource(37638U);
    msg.setSourceEntity(185U);
    msg.setDestination(6984U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4989305132741165;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.7952813320909309);
    msg.setSource(10202U);
    msg.setSourceEntity(239U);
    msg.setDestination(36279U);
    msg.setDestinationEntity(219U);
    msg.value = 0.1568962907711552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.7248923703471318);
    msg.setSource(21146U);
    msg.setSourceEntity(213U);
    msg.setDestination(31728U);
    msg.setDestinationEntity(86U);
    msg.sig_wave_height_hm0 = 0.048784124391903716;
    msg.wave_peak_direction = 0.24138332809878038;
    msg.wave_peak_period = 0.8183587093959975;
    msg.wave_height_wind_hm0 = 0.7461549391278383;
    msg.wave_height_swell_hm0 = 0.694901823682766;
    msg.wave_peak_period_wind = 0.8709785512192179;
    msg.wave_peak_period_swell = 0.23576418082605777;
    msg.wave_peak_direction_wind = 0.11296121400803127;
    msg.wave_peak_direction_swell = 0.4507956125259831;
    msg.wave_mean_direction = 0.9240411040678443;
    msg.wave_mean_period_tm02 = 0.775915301534873;
    msg.wave_height_hmax = 0.15742959621474828;
    msg.wave_height_crest = 0.2684072265031143;
    msg.wave_height_trough = 0.9230081202809316;
    msg.wave_period_tmax = 0.647572191908011;
    msg.wave_period_tz = 0.44246072319580976;
    msg.significant_wave_height_h1_3 = 0.07343439568836596;
    msg.mean_spreading_angle = 0.6213078470137587;
    msg.first_order_spread = 0.9546237427754108;
    msg.long_crestedness_parameters = 0.11893701432560433;
    msg.heading = 0.8307462825419242;
    msg.pitch = 0.35830481119908064;
    msg.roll = 0.46794747634087464;
    msg.external_heading = 0.5237702116058054;
    msg.stdev_heading = 0.31807966945366706;
    msg.stdev_pitch = 0.6044046016508696;
    msg.stdev_roll = 0.30073106429467666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.9797331728612821);
    msg.setSource(21052U);
    msg.setSourceEntity(60U);
    msg.setDestination(16288U);
    msg.setDestinationEntity(29U);
    msg.sig_wave_height_hm0 = 0.1850239862380797;
    msg.wave_peak_direction = 0.5861278292544597;
    msg.wave_peak_period = 0.3521460480698373;
    msg.wave_height_wind_hm0 = 0.8765654936510763;
    msg.wave_height_swell_hm0 = 0.8872303686182543;
    msg.wave_peak_period_wind = 0.04961832990104098;
    msg.wave_peak_period_swell = 0.14985211968046386;
    msg.wave_peak_direction_wind = 0.2499064955364746;
    msg.wave_peak_direction_swell = 0.7151158927976765;
    msg.wave_mean_direction = 0.6319600720792191;
    msg.wave_mean_period_tm02 = 0.4795319152906319;
    msg.wave_height_hmax = 0.06345283996040862;
    msg.wave_height_crest = 0.07567881668609866;
    msg.wave_height_trough = 0.552064416479448;
    msg.wave_period_tmax = 0.21892928758555807;
    msg.wave_period_tz = 0.4259395411518041;
    msg.significant_wave_height_h1_3 = 0.4584406499029552;
    msg.mean_spreading_angle = 0.4157783596298428;
    msg.first_order_spread = 0.8281595405893325;
    msg.long_crestedness_parameters = 0.7313127619522284;
    msg.heading = 0.7320599889394525;
    msg.pitch = 0.3618935950290686;
    msg.roll = 0.8375580574357268;
    msg.external_heading = 0.44023131645243574;
    msg.stdev_heading = 0.33404736580362093;
    msg.stdev_pitch = 0.8638041292128249;
    msg.stdev_roll = 0.9148263261898801;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.9333961275348431);
    msg.setSource(65262U);
    msg.setSourceEntity(145U);
    msg.setDestination(30919U);
    msg.setDestinationEntity(105U);
    msg.sig_wave_height_hm0 = 0.28081804040418124;
    msg.wave_peak_direction = 0.8576943545068181;
    msg.wave_peak_period = 0.10852512217702981;
    msg.wave_height_wind_hm0 = 0.7263522799753898;
    msg.wave_height_swell_hm0 = 0.832738522938615;
    msg.wave_peak_period_wind = 0.7544321596257978;
    msg.wave_peak_period_swell = 0.323568401644041;
    msg.wave_peak_direction_wind = 0.9482532044663524;
    msg.wave_peak_direction_swell = 0.050288405507943335;
    msg.wave_mean_direction = 0.31201632252263223;
    msg.wave_mean_period_tm02 = 0.5704968667757948;
    msg.wave_height_hmax = 0.08524130749117909;
    msg.wave_height_crest = 0.41478023836726174;
    msg.wave_height_trough = 0.5763202504007864;
    msg.wave_period_tmax = 0.1369778189563422;
    msg.wave_period_tz = 0.25039000177776605;
    msg.significant_wave_height_h1_3 = 0.3814024014827655;
    msg.mean_spreading_angle = 0.6051027795150943;
    msg.first_order_spread = 0.2937430026416764;
    msg.long_crestedness_parameters = 0.3101148789726489;
    msg.heading = 0.6744668888996662;
    msg.pitch = 0.4121149710855574;
    msg.roll = 0.08264443180901015;
    msg.external_heading = 0.15838025295571;
    msg.stdev_heading = 0.7626785091405477;
    msg.stdev_pitch = 0.7410337762553978;
    msg.stdev_roll = 0.040974672217431785;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.49109561984242034);
    msg.setSource(55262U);
    msg.setSourceEntity(106U);
    msg.setDestination(44672U);
    msg.setDestinationEntity(92U);
    msg.name.assign("BTIVYGXTPILNHSBPZAXQLWAWVZUMREKZYHMK");
    msg.value = 235U;

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
    msg.setTimeStamp(0.9120157244268436);
    msg.setSource(8527U);
    msg.setSourceEntity(100U);
    msg.setDestination(25144U);
    msg.setDestinationEntity(45U);
    msg.name.assign("OAMIIYGTQRFXFNMXVHKTUZXYAFBMQXEOSRYQVTUCJHEYUKIOHTAMWCYXXTVODOVRXNKFDYYBCODNQKLZGWIPMRXIPPRRRJJMBIZOSAVFSBHRJLKJMVMDAFMMGDBPALUWGKNGZKEYIDEJALHNULGOBUTSNQCTOZQNVBHZETSSJZUWEKPTDUDEZFLSGF");
    msg.value = 182U;

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
    msg.setTimeStamp(0.4384032304590506);
    msg.setSource(56566U);
    msg.setSourceEntity(250U);
    msg.setDestination(16917U);
    msg.setDestinationEntity(191U);
    msg.name.assign("RHZZDOXYKDTEXOLNTNHCNTIULAAFJPQXKNIRQFYBWGZNQMOXYBVXYSXFXMKOZFAAMSRJJYRZUBPLRYEOYDVPSTEGPGJAVSZIWSZKKELTBGHJCXGIWRELVLAUXPABHOIEPDF");
    msg.value = 52U;

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
    msg.setTimeStamp(0.9257370676920457);
    msg.setSource(4705U);
    msg.setSourceEntity(78U);
    msg.setDestination(48362U);
    msg.setDestinationEntity(196U);
    msg.name.assign("INMYPGMLBROCNCBZWUKTUIHVRHVGDEJNEPKPZJFJ");

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
    msg.setTimeStamp(0.9616841474154953);
    msg.setSource(4803U);
    msg.setSourceEntity(157U);
    msg.setDestination(43722U);
    msg.setDestinationEntity(162U);
    msg.name.assign("TYACWKTOGSHWLZIXVMPLTUHPGILKXXUUNJAVDJKSRQVFXBRDKMJDORNYZHTTUPTIAHBLGSSMYLOEWWUEMTOCBBFUMAEMXLXMZ");

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
    msg.setTimeStamp(0.38342878609544384);
    msg.setSource(33690U);
    msg.setSourceEntity(95U);
    msg.setDestination(32946U);
    msg.setDestinationEntity(237U);
    msg.name.assign("PLWYRUQOHHYPZRCTRI");

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
    msg.setTimeStamp(0.8647769543194084);
    msg.setSource(41468U);
    msg.setSourceEntity(160U);
    msg.setDestination(40747U);
    msg.setDestinationEntity(86U);
    msg.name.assign("VJTFMFKGSRFPIKCKANMJZNYXDFAIYFHJPMJPZGVHIZOKRCBKEJRRAZWIUYIQWLOGPOJHCRWMGDUVQMUVIFRSWLSDRLDODZPWCJWJHFANVWBQNVUYJXOA");
    msg.value = 168U;

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
    msg.setTimeStamp(0.1929644017091412);
    msg.setSource(7997U);
    msg.setSourceEntity(208U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(173U);
    msg.name.assign("NGSIRBVQEJOLCYCIGRLSJJYIFBEKKZFLMDGEBMEXADSLYRPAUJSAHDJLWOKAMXVRAHDANIFDUTSIWENWXWUPFUKBFYBMQONPJNREEFCUQNBWZCRYIDHTMHVGTVIODBUYLADCQWGVHZYJULWLEGCOPFTWNQMAGUQSQSXIOLHRCKSYYKRQKNJTVHOZFMJRQPO");
    msg.value = 143U;

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
    msg.setTimeStamp(0.577370378435531);
    msg.setSource(45112U);
    msg.setSourceEntity(82U);
    msg.setDestination(34842U);
    msg.setDestinationEntity(182U);
    msg.name.assign("EYMBDVLDIRYNIEJKOUHPRMNCBPCXSBRSQHLCDIVFNXLFSWXPDHVAGNSQZOAJIJQMZVKWDONLEOJRDIUMFJWBVGIACTQPOKGFDBFESFWZUMCYFIQEJULNEAYSXDCGXKCGRRFNWGDOFHYNWLRYIZYSEXHOYLDXQQAIPFVPGAMTCATUYSTZAZZIUPHLCKVGSMOUOLGQBLHUTJNWZKK");
    msg.value = 18U;

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
    msg.setTimeStamp(0.9061080307426573);
    msg.setSource(17973U);
    msg.setSourceEntity(25U);
    msg.setDestination(57467U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5294693465531907;

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
    msg.setTimeStamp(0.7297649968570789);
    msg.setSource(41654U);
    msg.setSourceEntity(242U);
    msg.setDestination(46698U);
    msg.setDestinationEntity(153U);
    msg.value = 0.7307931105600224;

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
    msg.setTimeStamp(0.27190265568262195);
    msg.setSource(51273U);
    msg.setSourceEntity(190U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(71U);
    msg.value = 0.46236906943819456;

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
    msg.setTimeStamp(0.011810546107877573);
    msg.setSource(61382U);
    msg.setSourceEntity(141U);
    msg.setDestination(2633U);
    msg.setDestinationEntity(205U);
    msg.value = 0.7903727191011828;

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
    msg.setTimeStamp(0.1662217388941546);
    msg.setSource(21543U);
    msg.setSourceEntity(191U);
    msg.setDestination(23687U);
    msg.setDestinationEntity(4U);
    msg.value = 0.22992837391345222;

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
    msg.setTimeStamp(0.505371020226789);
    msg.setSource(32573U);
    msg.setSourceEntity(196U);
    msg.setDestination(33535U);
    msg.setDestinationEntity(71U);
    msg.value = 0.09407889838874273;

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
    msg.setTimeStamp(0.7009055399604973);
    msg.setSource(53057U);
    msg.setSourceEntity(238U);
    msg.setDestination(53859U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5567559137175502;

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
    msg.setTimeStamp(0.19081646264382568);
    msg.setSource(10783U);
    msg.setSourceEntity(22U);
    msg.setDestination(42795U);
    msg.setDestinationEntity(231U);
    msg.value = 0.15424317287885958;

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
    msg.setTimeStamp(0.08320259756457071);
    msg.setSource(23583U);
    msg.setSourceEntity(189U);
    msg.setDestination(6167U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9992946559111181;

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
    msg.setTimeStamp(0.14709925098345256);
    msg.setSource(5635U);
    msg.setSourceEntity(24U);
    msg.setDestination(60911U);
    msg.setDestinationEntity(93U);
    msg.restriction = 117U;
    msg.reason.assign("LWAYUTETPILBQVANEFPPSIQXQLUTYQKFJDOWNXWCOWXGORPJVIWAENWRJTQXRSNDKCXYHHFVOILULPCVAHIRPXNRSORGZKJVGFWEYPBHSVFEKXPGZSKEMBDIYNPJJRCOLDAYCMQZGMJKDUHZAFDKDYQJIBYWREWVCEZGSZESXTUHCHLQZBFQDAZEMZBADIGGNMJHMJVBSWKUYGNTLAFXROQTBZYCMLBUOPMLHINBXCRDGMFTVTUKONVFIKCMSS");

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
    msg.setTimeStamp(0.9281907246781719);
    msg.setSource(55101U);
    msg.setSourceEntity(109U);
    msg.setDestination(10471U);
    msg.setDestinationEntity(97U);
    msg.restriction = 167U;
    msg.reason.assign("XZPSHEFOKQGCVMBGXSJCNWFKHLYGHUDHHKISYBYRHYECFIANLUKTUMTAZPXARSELPRUTISTOOTECIKOBEZRCOYKQDDNVPEELFWUYUPSKCCFXFAEYHPZWSCVUFZOGBXHQDJVYBMBXUQSMIJWDAPBNWRQJKTGJMVZJWUGZJBFEDIPDMINOZXLDXVNZPNWMAVBLRENIQTTFRROJIARCDVGPLBVQMNTSIXMLYCRSGMZQYAAWJOAFXGHOWVWK");

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
    msg.setTimeStamp(0.569197189962522);
    msg.setSource(5398U);
    msg.setSourceEntity(105U);
    msg.setDestination(52540U);
    msg.setDestinationEntity(17U);
    msg.restriction = 166U;
    msg.reason.assign("HJGFRJWJBNBXAWDSBZCNCRQGTHPTDSLQLHSZJXUWIMRLKPFCJIKEUSUMQTCRTDMRMMYMFTRPIBNBPTFLYGMKLBVUYLCBPLKLPKMUQDXATQFAIVAUECXCNPJRDKZFAWLKHNGYZDDVIJHREBKHUCPFSFNEHQUTYOMRLEZHBXVAEESYOXNZOQFVKICWSKCOOIZJGYDXZWDFAZJOTSWAIVYOOWQXYBWSIANXTQMGGPNPXGOIGUVAOHVUWESDHQE");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.42917143405579405);
    msg.setSource(16880U);
    msg.setSourceEntity(13U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(73U);
    msg.op = 224U;
    msg.version.assign("AMIBWVWWFOSYLIESPPAGKARV");
    msg.description.assign("PMFSJUWNKLQDFIIAQVQFAJFOTENOAFNSCJJTZPBAGURZCIFBOFORXKTCQPDOJQSAJQBSWQTOBXMWRYTQWCBBZYJKYEWBOXBTRWCZVECWGNGJTGIGPUZDALPYNOLHNOUMCUXCEBZDRMNKPFLMXHEGANXGHPUJIXVHEYLUDIEXYGCSNRHHFSKEKFHLTWXMLVYIRLDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.22683922833781545);
    msg.setSource(53108U);
    msg.setSourceEntity(182U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(81U);
    msg.op = 86U;
    msg.version.assign("KVYPLUDFHUNXKPVXTUZFGAQZSWMIBOMWGDFRBWPVEVVARIRTTMZEKESVXGEHFLPMZFOXVYRCFKJOBWDHUUTEBLRZSJGNNEIQQCPJNOORCVYBLQHYFQBDGICKCWRAELTOPCLKRTYQHUBJHWCILNUKMYLHOIGHWAJWRMPFOEDYHSXCVYPGWNRIAJBLZQOUONMMAJPIIDYSNSXNUAQX");
    msg.description.assign("HGKCPIGILKTQWBTGMBXDLZXNVWDLYVKIANHNEWOARUFLNTCZPXZSACWQKBYOGHXFQGMYZDVSCCNRZBZMWIOJDFKWOUMIVFYRQKMIEBUXTVKJRQMQJQBUWAYMXBVCVAFFDTRSEJAUYIIECGLLZJWJNWEREHUBJHRMHHSFTADYUOEQUSZSXDRDENPHWO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.14819635491638938);
    msg.setSource(15505U);
    msg.setSourceEntity(151U);
    msg.setDestination(53645U);
    msg.setDestinationEntity(178U);
    msg.op = 168U;
    msg.version.assign("EXMBFDIIKBALAQJSGNGKKZZPLITVRHBDDVHEJICQYUEKWSBXMLBLUTCPJMXGBGATOGXKCNJUHERPVLNHEJRVJODMKNOVLNABSHUDOZDWNZWZUQQMAPFHTZQKRYSLUPRYARDNCIEIFYPPHYCCSTILMRWMPUSFFNECQQVZJWPFSTKXNWRASIQFXJGGPVCBMREUABZKFIDAWGUDFOYVXQWXYHBYVOCFTHOOIVDZGWUZ");
    msg.description.assign("SQDIEPGHPZXWYHNUWHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VersionInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.7718219544923701);
    msg.setSource(37595U);
    msg.setSourceEntity(237U);
    msg.setDestination(25041U);
    msg.setDestinationEntity(153U);
    msg.value = 0.9005309532183553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.6358108242179529);
    msg.setSource(46856U);
    msg.setSourceEntity(247U);
    msg.setDestination(58332U);
    msg.setDestinationEntity(205U);
    msg.value = 0.26130384795336903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.253807561043913);
    msg.setSource(47887U);
    msg.setSourceEntity(183U);
    msg.setDestination(45127U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7854262744041516;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
