//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.11560052604804738);
    msg.setSource(47904U);
    msg.setSourceEntity(235U);
    msg.setDestination(57378U);
    msg.setDestinationEntity(27U);
    msg.state = 211U;
    msg.flags = 180U;
    msg.description.assign("DLEQTMPHXZLSNDREDPRFGSEIQ");

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
    msg.setTimeStamp(0.7674941293163389);
    msg.setSource(50618U);
    msg.setSourceEntity(16U);
    msg.setDestination(15803U);
    msg.setDestinationEntity(111U);
    msg.state = 142U;
    msg.flags = 24U;
    msg.description.assign("PTRSXLSYCRJXKVLSBDJHNKHZKJMEMOGNNULDYDRXPESQQYVHHOLJBERDOSUBDHPKGWUMZWPMMJMYJETJMUCTFWCQDQBCYZHWCFNDBIAQCDRYSLHTWVZUGIKBDKLKAPBRFKJRALAHRBTPEIQXOMOPYBMPWFIEFAHFLDGKGVFWZEUXXOJEGSYXFGJQXSAOVOVZPNBNCAIZIWUYETHZNEIVUAGVTZOOC");

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
    msg.setTimeStamp(0.34774606311725553);
    msg.setSource(37283U);
    msg.setSourceEntity(131U);
    msg.setDestination(535U);
    msg.setDestinationEntity(57U);
    msg.state = 197U;
    msg.flags = 122U;
    msg.description.assign("VJFNESISELFVKMBTEXFEMETUGEBLSYNYTZCHWFWNOQMBJKRKDXTJWNDIDZDEIAMKNBUGJUCHPLZDXAJKXQMSNJGPRMVOYRCFPUGCPFTYEVHUHXVZGNZWQKZNCUBCHTIPKSADAABMVZRQHZBPOGLJVGBBQTRFQOKJSCJOXWBWEFJYIIPAHISOZUV");

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
    msg.setTimeStamp(0.06480505319140262);
    msg.setSource(34364U);
    msg.setSourceEntity(198U);
    msg.setDestination(18377U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.915008735067329);
    msg.setSource(50500U);
    msg.setSourceEntity(186U);
    msg.setDestination(4886U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.5701167399050057);
    msg.setSource(23458U);
    msg.setSourceEntity(191U);
    msg.setDestination(54591U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.21578377905456392);
    msg.setSource(35078U);
    msg.setSourceEntity(145U);
    msg.setDestination(20488U);
    msg.setDestinationEntity(190U);
    msg.id = 186U;
    msg.label.assign("AVHWPTKXWJHGFTLLZEHUUHYMMYGOILQUWSXIHHDIPPHSOPJFMSWAWPTSDTEDXPUQFAOSHBGEXNXBYNUZZNYKKZNRAAVROSIEDXTKYSJQKJCQKVXJZQZIIHEDTCYLNBJKGBFBITZFDGQJYARAOMMARTUQNODPYVLICQKZUTLRVMWFXJAWUNOINKGRWEELBUVDCEQRXJWPRLMTVBFNJOGOELDNZMCCKYSU");
    msg.component.assign("HILBQOMTPMGZKLQIRWIZAYCOUCTIPEOEJZWLHCDWMYSMINLCZGGSKUYVPHIYJCYGBWQHVSHWOPPSXWHEGLRMXJJLRUMWTUXRPAAQWYZBVUELSJLCJTXDUYOANFTZMVMOTWIXUFPJIGKXQGXJUANKSDWRHYNXPOZRSTBEKOUDDBEEBJDFRVRBTJFQIVKEYHKPNDAFUACVHQYKTAFEKBXNGPAVMSOLVNZFTOICGVBCNFZSQLZCD");
    msg.act_time = 37342U;
    msg.deact_time = 54982U;

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
    msg.setTimeStamp(0.8694625072709017);
    msg.setSource(9427U);
    msg.setSourceEntity(40U);
    msg.setDestination(36587U);
    msg.setDestinationEntity(38U);
    msg.id = 211U;
    msg.label.assign("VVISCHETJBMFSVXFNPAIZBLRSFONABQGRQLAMBYYSMEFXHVPUCDKEJPYIKWESUCMXMPZHXJATEXWILGVPKEKEFVIDWDRNZJUZABRFIDREIQQTBCHAVYJYQLMDCFSZRWUBUMYDXYGWOYVOTBUOTLHRJVGAUDZMGUJCACBJZGKQYGXSNCHBKMQWULQORHMNEKZKPCO");
    msg.component.assign("HQPZKVCBGSJNINAPXODFJKFSWCMVPFRRWWLTYXPZDGGFFITHGFJJWSWREBAVUCSXDPRHMUVHMKTJZLWIZVEGZRAYJFYZUIKNHTTTLJNMNKPZXJUBEYGZDFEKHQKARKFPDIRYVENNBUAHPKOBMSLTESBBAMCRWLIQQQGOLPDUIRXCPIVOXQWSDUIYUOLNCQEHGMJYMOCXEBSZCAQTJDYZDTIMUWFQCXEOAWCMBVOARVVLXSHG");
    msg.act_time = 54022U;
    msg.deact_time = 10136U;

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
    msg.setTimeStamp(0.5081495319119634);
    msg.setSource(7286U);
    msg.setSourceEntity(167U);
    msg.setDestination(41591U);
    msg.setDestinationEntity(229U);
    msg.id = 237U;
    msg.label.assign("HLJEJIQZILAERSPTFIAXNCDIAJQMUBGFYWDOIKSYPHNIBZRODCWYCOSYXRGYHSQTHBUGCUKBKLVEZXAHEORPPMXNBSZLWRQBIJSMRGXQFZPTYYKXTAQBKRNLUEVJKWTKTTUGFFHHHDQBRJJMTIVZOGMYFOVMLQTSMIQAULWVVFYZJUPD");
    msg.component.assign("GKYLHSBTEXVFOQZIYQUCMQIPUGSBSCRSBEWSDTZYDXXFDHJEUOTRSGMYBAVVUGUDAYHKFWNGALOJFRPDJCLMNEOHBIPMTG");
    msg.act_time = 20288U;
    msg.deact_time = 30750U;

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
    msg.setTimeStamp(0.8211101739763677);
    msg.setSource(56208U);
    msg.setSourceEntity(21U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(3U);
    msg.id = 131U;

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
    msg.setTimeStamp(0.3806245440282644);
    msg.setSource(34301U);
    msg.setSourceEntity(108U);
    msg.setDestination(56340U);
    msg.setDestinationEntity(160U);
    msg.id = 161U;

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
    msg.setTimeStamp(0.3935150280382059);
    msg.setSource(18911U);
    msg.setSourceEntity(183U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(72U);
    msg.id = 241U;

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
    msg.setTimeStamp(0.8540148306605192);
    msg.setSource(49137U);
    msg.setSourceEntity(29U);
    msg.setDestination(39774U);
    msg.setDestinationEntity(49U);
    msg.op = 62U;
    msg.list.assign("GGMJYWELWYMQQSHYXGIHWNKFJRHVCKOZCFATIZLUVRMASIVQOIMYTUDLNAQJUCV");

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
    msg.setTimeStamp(0.9365747135225824);
    msg.setSource(50353U);
    msg.setSourceEntity(56U);
    msg.setDestination(8154U);
    msg.setDestinationEntity(238U);
    msg.op = 159U;
    msg.list.assign("YQBAQLPEBZUVVMGHBOXIYTJVRPBFGHODDYRLNWFHJTBUYMGHCZCLYPEQAQYIBWZLJGDTXRKSIYYGJXZPFKKCNLPLJYCWVHMJWVOVRUUMTAKDUJSVXUEPHNXFVOGESWFBACQLZGFQFYRWMIDKTFEQSRN");

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
    msg.setTimeStamp(0.5246707425421173);
    msg.setSource(31893U);
    msg.setSourceEntity(64U);
    msg.setDestination(62865U);
    msg.setDestinationEntity(34U);
    msg.op = 175U;
    msg.list.assign("AVQYFMHMKZYKWLKGYEHHGIWOTNRLXZOXSHPIAJZDHITRGICWBCCTAUCUTDSJHBXEDCNKGSMBFDFYDYLGUWGWROQKNCNIVHCNGYFDRUOQMWSGSFXJMBBOQZDESLHRXZLDDQLVLURCAMIKFVBAIHKBXEQCPDVNEOXPEYZIJBESFYNRSTABPTJN");

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
    msg.setTimeStamp(0.29587385856095505);
    msg.setSource(28382U);
    msg.setSourceEntity(135U);
    msg.setDestination(30393U);
    msg.setDestinationEntity(209U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.23828297462143022);
    msg.setSource(57125U);
    msg.setSourceEntity(19U);
    msg.setDestination(52954U);
    msg.setDestinationEntity(6U);
    msg.op = 234U;

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
    msg.setTimeStamp(0.5241279524865171);
    msg.setSource(50808U);
    msg.setSourceEntity(125U);
    msg.setDestination(3471U);
    msg.setDestinationEntity(245U);
    msg.op = 3U;

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
    msg.setTimeStamp(0.6312511525860977);
    msg.setSource(55659U);
    msg.setSourceEntity(125U);
    msg.setDestination(42363U);
    msg.setDestinationEntity(169U);
    msg.value = 134U;

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
    msg.setTimeStamp(0.4525655824083141);
    msg.setSource(7031U);
    msg.setSourceEntity(147U);
    msg.setDestination(3717U);
    msg.setDestinationEntity(40U);
    msg.value = 128U;

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
    msg.setTimeStamp(0.8049408733739293);
    msg.setSource(22423U);
    msg.setSourceEntity(149U);
    msg.setDestination(646U);
    msg.setDestinationEntity(78U);
    msg.value = 215U;

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
    msg.setTimeStamp(0.7164330594521151);
    msg.setSource(32418U);
    msg.setSourceEntity(164U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(200U);
    msg.consumer.assign("PUDNADMTOEOVKCEXMYZFHIIMGNHWWQBFPTWLLRWNOXJCMOKBULUUFHVVTBASZYFBUTFRZFZFOGAZYEITLYGFMRQWRVFQONYR");
    msg.message_id = 52191U;

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
    msg.setTimeStamp(0.31959027307807464);
    msg.setSource(6386U);
    msg.setSourceEntity(229U);
    msg.setDestination(29488U);
    msg.setDestinationEntity(13U);
    msg.consumer.assign("PGBULUNTDKHDKEPLBBWQZISJEBNNRNZPVGFXFZFQSVEESDY");
    msg.message_id = 58655U;

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
    msg.setTimeStamp(0.6535538145503567);
    msg.setSource(43095U);
    msg.setSourceEntity(157U);
    msg.setDestination(60329U);
    msg.setDestinationEntity(12U);
    msg.consumer.assign("SNUOHFILCXNJQVLMYAJPAJLGWTXMKGJKMEWUYPXIMUUGIDZQEBIOTTPMEPEYQFXSSLGMTAXHLARNBWBFRACMTGVNIYPJVDCGGWAFOOSTNQWFODERUKKFZZYSZQPKWNLWSWOJSTSVXRXRJJEVDPGXDQOXRNWJURDKZHKZBGFDFTMEVEFIVBITRYDQHYLHEDMOXHFINQPLPKTZBH");
    msg.message_id = 37485U;

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
    msg.setTimeStamp(0.7598268920446464);
    msg.setSource(26578U);
    msg.setSourceEntity(129U);
    msg.setDestination(6366U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.8213740180438125);
    msg.setSource(29792U);
    msg.setSourceEntity(31U);
    msg.setDestination(35873U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.042839395474049025);
    msg.setSource(14801U);
    msg.setSourceEntity(1U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.47619080503557365);
    msg.setSource(24497U);
    msg.setSourceEntity(226U);
    msg.setDestination(32208U);
    msg.setDestinationEntity(96U);
    msg.section.assign("VSYUUQKXNBHVHUKWVJKUFIHIPMBYJSLVWRVTRJNXADKNOOAGYWSFZDTYEPTVYNWMSMIJCVZKUOFOEMEYWAAXRYECCSDBLZRZWPLKVQJTKMFAAB");
    msg.param.assign("DUEQNFNFRAKBCNDAEYZOSHJBEDPRYHATSXZOFACPWNIMWHIOTULRUCWEXZPPEGUGSZPXNTILSWQBGSVCGFIJUKSKJGJBIOEMYNRCNDTWMBWVPALCNMXRYULMQMOSXGIVQZDBLILZMKWICNTATOFVBTLRVKAGLZLWOLBIKUMSSYUVXCVKQQEWPYZFPXHDXKFZNQDQACDGJOVRMBZFYWERJHMEPBIYHDETDJOQYSVVHTYOUFRTJHJHCA");
    msg.value.assign("XHDVKFZKAJLLG");

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
    msg.setTimeStamp(0.7053035384170051);
    msg.setSource(52086U);
    msg.setSourceEntity(110U);
    msg.setDestination(20154U);
    msg.setDestinationEntity(225U);
    msg.section.assign("MVCCITQSAVXRXUTKAPYYRNDEPPTYUVELLUZBLRVFXFJBJWCWAMDDFVAMQNLRMEHYSHDBXBWAOGHGZMTOSJPGILPLSPNQACHJKCWKEHKGFOCUJAIXPUHMZAENJZIMJKBGGKF");
    msg.param.assign("BJCIJSHVOTPYUXXDXAAMROQRENMBGZQIXSNTEKPIWKNHZHWQNSPTWFMCZSJPJKEFBKPYHXFSXLRHAOFBMLGGORYVDVAZTJBSYKIPYBQKUWPZSOOJPCJRNLPGKMXIOIEEENXQXYLWJEOIASFUTDRVZCHAEUWQIERALPBCNCYAZFJTWYUHKATYDDDRCWTLLWFUQLBMVQGKVNUBJMXFTOGDIWVVFFUCRHGHNGUEQQBZHGSVGM");
    msg.value.assign("HADFOENJBQVKITVLDNCBCBXMZYRWVLHZFDPEQTEDIOBGSMAAYFRNAJPKAQXRPPZTPXAILNJGOBRFKUUQNTSTIONOUDKJ");

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
    msg.setTimeStamp(0.9642196876784013);
    msg.setSource(43110U);
    msg.setSourceEntity(92U);
    msg.setDestination(49328U);
    msg.setDestinationEntity(133U);
    msg.section.assign("YDXXECUJNWWLXYNEQYUPIHLOPSIZJIIBODWQNTHHTQJUFWMKBCGUSESZMCYEMACLVSVJUFMBZZNVIUJBJKFOFJWBSHBHKSKWTGXCOTLKBJDJEEXYICRECQVSPFXRQZDNLHQRKAFVOTRTMBMIRUZOZTOTDKWGYMVYKYEAFAMAHFRVAT");
    msg.param.assign("LSYMBFAMYNBDJWJKEBODANREVQGMFQKAIFLEVWITFUVXDKKMMXAWRNSMXJIFIQLRNYCUGRNEDRUNDOHBGOCCHLERPVSZITTFSPLZPIRFMOZBPWKVYIJGENDXDQJEQWHBACYYUMGFUYIRZSYTKBOAWWJAEUIVEPNOZEVCHNDZPVQNIXJAFPFPCLGSYTUOCPSTBKRASXCZKAVQVTZOGXZUT");
    msg.value.assign("ORSQLCHTSJSESJMNHSYEVPAVZRGTGXQZRMNFOKUSUCCJVQTJVBILUBDPGRWZTWZOEYIUKAMSZAYNGHNKFWXHJLOPXRKAIFFLFQUTNQZEHKTPYOMDBFLXBDKIYTQKOMWERAPCUURLVWWYNVMJUAXBNWFCGYDDYBDYRHNSBBARKPGNQODTJZFMFOVWATJSOHSZZQPZCBMEQPKLLCEAJXDMHPIFDCIXHLIBUGMOUWHEXDCPEXILYGGKGVXVEQ");

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
    msg.setTimeStamp(0.23619353363066242);
    msg.setSource(22940U);
    msg.setSourceEntity(128U);
    msg.setDestination(62867U);
    msg.setDestinationEntity(249U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.7227190568676773);
    msg.setSource(46386U);
    msg.setSourceEntity(9U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(125U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.949578026987288);
    msg.setSource(50737U);
    msg.setSourceEntity(206U);
    msg.setDestination(20486U);
    msg.setDestinationEntity(44U);
    msg.op = 48U;

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
    msg.setTimeStamp(0.955620444470626);
    msg.setSource(61152U);
    msg.setSourceEntity(189U);
    msg.setDestination(50305U);
    msg.setDestinationEntity(248U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.7389191077540201);
    msg.setSource(22322U);
    msg.setSourceEntity(232U);
    msg.setDestination(20296U);
    msg.setDestinationEntity(48U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.16607707350136713);
    msg.setSource(13739U);
    msg.setSourceEntity(240U);
    msg.setDestination(27139U);
    msg.setDestinationEntity(159U);
    msg.op = 126U;

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
    msg.setTimeStamp(0.44895035001504);
    msg.setSource(21216U);
    msg.setSourceEntity(34U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(95U);
    msg.total_steps = 46U;
    msg.step_number = 173U;
    msg.step.assign("KCIHOWRKIWPXORUUVTPHXFGUJXXBEYMJEIPBQMACKBROCAGRMNOLPTIGFUUMFHQVZRNLZLZTEEZZMEGHMLOPFXVHYJMSENOVNRKUUHGJAWDIBNWHKUB");
    msg.flags = 77U;

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
    msg.setTimeStamp(0.2318052552076083);
    msg.setSource(29967U);
    msg.setSourceEntity(231U);
    msg.setDestination(23468U);
    msg.setDestinationEntity(3U);
    msg.total_steps = 45U;
    msg.step_number = 73U;
    msg.step.assign("CUAAMMDOJWSENJVWHUVXZOMLBTEZIEUKIVJZANWOSFNVRGODINKKUQCNAUHCTLKWWGYBEJYVGHFXRNDMHXQJHWEMCQNXBWESBDLBYGOUFGIBDTYILFGCKPAYVOYIPLTXGBJJCRZZZNZOLDQIEOCPFTQMYVPHAPSXYANDRTFUTMLPQSHXBJANTXVAKBGMHBZOSWFLKSUEZSC");
    msg.flags = 190U;

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
    msg.setTimeStamp(0.5756614340855944);
    msg.setSource(31757U);
    msg.setSourceEntity(53U);
    msg.setDestination(24518U);
    msg.setDestinationEntity(127U);
    msg.total_steps = 228U;
    msg.step_number = 15U;
    msg.step.assign("WYCDPEOBKWSMLQNKPYAGLIMVMGOQVEEOIRYNPKPRCYCBHGJMYTYCPFDALQHTULYBNWBRULZMKRPAVQJDEYZHXXTQETLAEPUBBWDJFAQCBHFSX");
    msg.flags = 100U;

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
    msg.setTimeStamp(0.9461177720101788);
    msg.setSource(16581U);
    msg.setSourceEntity(239U);
    msg.setDestination(64488U);
    msg.setDestinationEntity(248U);
    msg.state = 147U;
    msg.error.assign("LIPJCHXSXTRKFKDMXQCXMQNOEWRWXZLMUNZKDIPBOMRSHVIMJBVRZVGJGRCWIMXTMUXOXWIATKNQENHLDQDOOEVZQTNFHAOCAWDOUMUQLWULIQRYEBRFRLKAKVYUFAVEKTUCKOTDJTGJUPHVPYBMJGEEIWEGJNZNCY");

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
    msg.setTimeStamp(0.8520237602318176);
    msg.setSource(3254U);
    msg.setSourceEntity(40U);
    msg.setDestination(2888U);
    msg.setDestinationEntity(45U);
    msg.state = 87U;
    msg.error.assign("JYWXMENFGXEQNTRXLSRJRVSIJMUIZJHHOPHLGKMEGREDNECXDPANALWIZFMVAWDMTGMBCOWQVBFXQVOHIGHDWTXZPZCAVEILOBRKJNISAJZDVWLBAWNQVAMDOXGIFLCFREPKFKNLKAOYMYBRIEYNKQBQFURVYUPONCAHCCUFUOUKPZJDBUGBTCVBSKSFLSYADNVHQZYGSTWGQSHDXHTKJLYPTWDXFGYPJI");

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
    msg.setTimeStamp(0.9596636187955607);
    msg.setSource(37282U);
    msg.setSourceEntity(206U);
    msg.setDestination(14161U);
    msg.setDestinationEntity(184U);
    msg.state = 79U;
    msg.error.assign("MVRNNWIPZSRBOIMOTRKFLEYEGPDW");

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.06120162457113665);
    msg.setSource(61005U);
    msg.setSourceEntity(244U);
    msg.setDestination(10146U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.043691069050410314;
    msg.lon = 0.8973609128758742;
    msg.height = 0.45994345207779763;
    msg.x = 0.7312407753902215;
    msg.y = 0.4969308897517476;
    msg.z = 0.793151558509184;
    msg.phi = 0.6649174071065639;
    msg.theta = 0.31681779067088167;
    msg.psi = 0.9952002678691507;
    msg.u = 0.3405425225200772;
    msg.v = 0.7480452447333811;
    msg.w = 0.35415978276519244;
    msg.p = 0.4016382847250619;
    msg.q = 0.469162215705507;
    msg.r = 0.5612131864355842;
    msg.svx = 0.6809186907757634;
    msg.svy = 0.6218201299686281;
    msg.svz = 0.4189629429767061;

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
    msg.setTimeStamp(0.9379543726372166);
    msg.setSource(53877U);
    msg.setSourceEntity(165U);
    msg.setDestination(49929U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.8131681780695239;
    msg.lon = 0.06648131790571721;
    msg.height = 0.018138657703932082;
    msg.x = 0.15017449750076084;
    msg.y = 0.3656195885927609;
    msg.z = 0.34373493447528825;
    msg.phi = 0.3370697786724902;
    msg.theta = 0.1717803532568558;
    msg.psi = 0.7150658670330347;
    msg.u = 0.9846162697955275;
    msg.v = 0.022319360008651312;
    msg.w = 0.9688340083328378;
    msg.p = 0.5690017948612274;
    msg.q = 0.5821520515112903;
    msg.r = 0.47797304951587005;
    msg.svx = 0.9866834997939253;
    msg.svy = 0.13366688563413387;
    msg.svz = 0.20427226587068514;

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
    msg.setTimeStamp(0.27915381347740553);
    msg.setSource(40921U);
    msg.setSourceEntity(158U);
    msg.setDestination(48965U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.368295582396844;
    msg.lon = 0.27026349601830857;
    msg.height = 0.5885145548058327;
    msg.x = 0.08514163565653365;
    msg.y = 0.818300079762497;
    msg.z = 0.8485394876094126;
    msg.phi = 0.16081041863151524;
    msg.theta = 0.14337329529910048;
    msg.psi = 0.368514596527898;
    msg.u = 0.8373564449877308;
    msg.v = 0.7713866639216775;
    msg.w = 0.1583035356250545;
    msg.p = 0.8632707674514689;
    msg.q = 0.22198471073247317;
    msg.r = 0.26401395519807136;
    msg.svx = 0.2964926998604649;
    msg.svy = 0.2603565415768231;
    msg.svz = 0.767983938696631;

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
    msg.setTimeStamp(0.8188630229455562);
    msg.setSource(63404U);
    msg.setSourceEntity(192U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(67U);
    msg.op = 58U;
    msg.entities.assign("HBFTEXWPZQPVVYJZTNPRFNQFTKDLGGQGACHJHVSWDORERJBHCJWLOHONELBSDCYGTIDWDELVNJYZMAHTQDFXMFBULCDONQBLCCZNXVIKUPIXWEZIJGMUBFUOOAUESFLSQUUQNNHYGTWFEXYPKISYBXAWGPRAHEXGNOOXDULPEWZJXKACWRITIZMPSIDIMUASTAGMVCMMKAYZSRKSCPAVHKYYRRFPNTQKQGWDOKXBCVVMRSKBMZQTI");

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
    msg.setTimeStamp(0.3173611211393581);
    msg.setSource(36752U);
    msg.setSourceEntity(0U);
    msg.setDestination(48049U);
    msg.setDestinationEntity(29U);
    msg.op = 56U;
    msg.entities.assign("OUSSPWFHNWRJQPYCSGAWPRIQXUIK");

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
    msg.setTimeStamp(0.5843411323236878);
    msg.setSource(13084U);
    msg.setSourceEntity(109U);
    msg.setDestination(37364U);
    msg.setDestinationEntity(121U);
    msg.op = 4U;
    msg.entities.assign("PKOFLSWGETEEBORTLKVUVQRIYCSZNRUXVZGFUMFYQCZADWTSKQHMQKMNDZEBLBISGOSCAGBXFBJCJZWCEDVAYUFIIMTDQXKJHRWINJK");

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
    msg.setTimeStamp(0.2843314399639567);
    msg.setSource(31014U);
    msg.setSourceEntity(223U);
    msg.setDestination(4940U);
    msg.setDestinationEntity(93U);
    msg.type = 195U;
    msg.speed = 62309U;
    const char tmp_msg_0[] = {125, -23, -119, 95, -15, -123, -117, -31, -6, 123, 8, -70, -106, 123, 99, 115, 34, -82, -22, -52, 52, -104, 4, -10, -7, -112, -25, 58, 78, 95, 3, 97, 8, -106, -70, 46, -101, 43, 65, 61, 78, 97, 44, -52, 100, 91, -120, 10, -39, 11, 120, 66, -41, 21, 61, -41, -117, 96, -61, 109, -90, 103, -89, -38, -31, 0, -82, 114, -117, 65, -61, -13, -89, -101, 51, 24, 31, -105, -30, 52, 70, -88, 30, -22, -20, -39, -28, 41, 102, -23, 8, 21, -42, -83, 97, -70, -125, -126, -27, 38, 42, -73, 105, -20, -37, -57, -40, -89, -33, 115, -78, 66, 115, -28, 22, -81, 28, 79, 104, -122, -100, -21, 104, -83, -109, 83, 89, 94, 90, 9, 81, 24, 43, 89, 40, -20, 103, -11, 126, -77, 113, -69, -82, -127, 119, -4, 26, 95, 22, 21, -4, 83, 124, -29, 33, 51, -87, -95, 22, 85, 83, -83, -114, 97, 63, 100, 80, -116};
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
    msg.setTimeStamp(0.767261624623639);
    msg.setSource(29559U);
    msg.setSourceEntity(103U);
    msg.setDestination(28174U);
    msg.setDestinationEntity(205U);
    msg.type = 241U;
    msg.speed = 42647U;
    const char tmp_msg_0[] = {39, -112, -118, -13, -72, -35, -10, 96, -39, 19, 46, -48, 34, 48, -34, -105, 74, 115, -44, 40, 74, 71, 61, -101, -65, -97, -87, 121, -15, 86, -107, 102, 70, 116, 38, 45, -9, 22, -22, 97, 123, 62, 61, -94, 123, 41, 85, -90, -57, -89, -75, 48, -69, 78, 19, -59, 6, -17, 89, 43, -113, 0, -24, -93, -55, 41, -31, 39, 24, 88, 116, 13, 118, 16, 20, -88, 117, 72, 82, -12, 82, 8, -41, -118, -71, -119, 102, -18, -77, 4, -42, -125, 21, -63, -11, -79, -90, 62, 123, -85};
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
    msg.setTimeStamp(0.8396909077886088);
    msg.setSource(55837U);
    msg.setSourceEntity(20U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(148U);
    msg.type = 36U;
    msg.speed = 33332U;
    const char tmp_msg_0[] = {27, 112, -31, 35, -9, -50, 96, 33, -50, -43, 56, -6, 41, 95, -11, 59, 113, 30, -73, -113, 32, 113, 126, 11, -64, 115, -98, 49, 67, -22, 108, 21, 108, -93, 4, 86, 34, 16, -45, -46, -68, -123, -111, 46, -30, 124, 1, -75, -127, 43, 116, 66, -20, -78, -16, 89, -93, -90, -58, -107, -91, 102, -3, 91, 126, 59, -40, -93, 20, 17, 28, -8, 53, -95, -31, -117, 2, -49, -127, 61, -37, 58, 109, -66, 35, 118, 47, -93, -126, 28, 12, -3, -82, 44, 45, 56, -121, 14, -1, 80, 51, 122, 48, 28, -57, -108, -73, 33, -123, -82, 0, -58, 100, 123, -47, -95, -19, -46, 3, 80, -19, 83, 36, -119, -100, -77, 31, -4, 55, 81, -117, 16, -79, 6, -115, 22, 56, -64, 60, -8, -8, 117, -81, 0, -97, 74, -52, -74, -23, 94, -106, -2};
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
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.6210884286913902);
    msg.setSource(25731U);
    msg.setSourceEntity(176U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(9U);
    msg.available = 4034194190U;
    msg.value = 227U;

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
    msg.setTimeStamp(0.37784155121350604);
    msg.setSource(45205U);
    msg.setSourceEntity(85U);
    msg.setDestination(12400U);
    msg.setDestinationEntity(43U);
    msg.available = 3670423800U;
    msg.value = 198U;

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
    msg.setTimeStamp(0.9143921982346431);
    msg.setSource(35599U);
    msg.setSourceEntity(2U);
    msg.setDestination(14930U);
    msg.setDestinationEntity(125U);
    msg.available = 554313126U;
    msg.value = 4U;

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
    msg.setTimeStamp(0.6118937518566735);
    msg.setSource(27931U);
    msg.setSourceEntity(97U);
    msg.setDestination(2056U);
    msg.setDestinationEntity(199U);
    msg.op = 126U;
    msg.snapshot.assign("CZNACWAGKCHHUPZOCGDWJCLJRXRXTYPEECNMUNKBIUQXQWLBKGZMMQKPLXFPBZUSOXCMAZAAKWHVLJRVKUMQOFYAMEBLHJQDTUVYGPMQXVHTOEYGWVAAYFYMVBEMNPITHKLUDZTNEMFCYBPTAAOSJNKLZTZOJEQGLERPEBIIJPQJBSIFLKNHSIFZWUDLWYXGBRVIKDROTYNTSWSHQFFIROGJSSXYUSNEGDDRWPVCSBCFFRWJVHOXNID");
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6731013576101049;
    tmp_msg_0.lon = 0.515142653477754;
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
    msg.setTimeStamp(0.1583602073985365);
    msg.setSource(12277U);
    msg.setSourceEntity(32U);
    msg.setDestination(45422U);
    msg.setDestinationEntity(28U);
    msg.op = 161U;
    msg.snapshot.assign("UEMBTSMBSNVSQODLATIGJYVGQPKJCKVGULFMJESDDDKCHTFLPFVYHOTSCFXFYONXMZRN");
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.29046779747881857;
    tmp_msg_0.lon = 0.626420878969433;
    tmp_msg_0.height = 0.10592123271593523;
    tmp_msg_0.x = 0.4363869431899521;
    tmp_msg_0.y = 0.1951598990385437;
    tmp_msg_0.z = 0.8097570948493547;
    tmp_msg_0.phi = 0.5363501220797834;
    tmp_msg_0.theta = 0.8967823973390355;
    tmp_msg_0.psi = 0.5491493112724138;
    tmp_msg_0.u = 0.8262582314036229;
    tmp_msg_0.v = 0.47502361711749097;
    tmp_msg_0.w = 0.498962159360841;
    tmp_msg_0.vx = 0.49370130281840596;
    tmp_msg_0.vy = 0.9479770345099304;
    tmp_msg_0.vz = 0.3227752976455661;
    tmp_msg_0.p = 0.5905594048281514;
    tmp_msg_0.q = 0.8604464127520335;
    tmp_msg_0.r = 0.8615836176553684;
    tmp_msg_0.depth = 0.595264174985855;
    tmp_msg_0.alt = 0.7515840564083992;
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
    msg.setTimeStamp(0.5802753084228172);
    msg.setSource(16270U);
    msg.setSourceEntity(235U);
    msg.setDestination(16315U);
    msg.setDestinationEntity(203U);
    msg.op = 6U;
    msg.snapshot.assign("AALVRYBYFMRWMTJNPDEMVXTMFFBMTXBGSBQTXXNSBWSKZCBCQOZNIVIUYFPFHSEKDOZCHEXJUGDHVGLPEVJJRZBPLDKYOLYISBVRIMEGJWIAAOJZXCZUIUDGEOAOGPVWZBZNDGFHOAYTOFGMCKLMWRCXKCPLQLSWCKRQTNLKNDJWTHYQFVDEPGPNAQLSZIUWJWPAQEVIDDIHTRSQ");
    IMC::EntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GKSVGTBNQERTJSUJJNCBCB");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CSYSWMASXUUXOZCBXDHNRUNSQVXAUWEDLJRDAITYQAOPLJOMNPFGQEPOXBGPLSENHRNPTGVKIKWNRENWVGUZCNYGTRXBGRHBFAFWTQDEGDMTVFDJJLBYMZQBFVOSUCHZGPGYDIRMSTCZUEXXIJZRZCIPQVPIBACVHMGFMWHCCCTHV");
    tmp_tmp_msg_0_0.value.assign("TXGKSEMYXOXTFUWFTPQUBVBLKLSINAPGEYDSFGLAHNFWIXCXOTQHBZBGOLYDSINAVRULRTGOZCDUIN");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6242515720395493);
    msg.setSource(571U);
    msg.setSourceEntity(207U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(218U);
    msg.op = 241U;
    msg.name.assign("SLTMBKQIAYBXSMZSQQHKWCEXJUHOAWKSXRIVKZLPHUKWFSYUKEQNYWSRTUJQHTLDSDEGXOTQKUTRZWEIJBBHKHQZBIMWYHYUBBKCCSYH");

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
    msg.setTimeStamp(0.2664826083949857);
    msg.setSource(17677U);
    msg.setSourceEntity(137U);
    msg.setDestination(31874U);
    msg.setDestinationEntity(109U);
    msg.op = 133U;
    msg.name.assign("LMLPHKAKWIVNVOAPNWFXNRHMJRXUHOTAUIDNAMDFXEYQDGBDBTQSMVXATZMYSJELSUGRLRIRQAPHGZSTPHJBFFNBWYXGVUBFPFVISX");

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
    msg.setTimeStamp(0.4390808518066608);
    msg.setSource(12026U);
    msg.setSourceEntity(209U);
    msg.setDestination(24156U);
    msg.setDestinationEntity(185U);
    msg.op = 178U;
    msg.name.assign("PCKCCJDTRWGSHJYUBFENFSWGEPEKLVZIQUPAKJTSZWCXSSNGXHZWJQHILJEWDKPZQVCYRDCQGSAIQRALNFAMYCKNTZEDBLUFLTUFUMLITMGUXFBKPOVUHWXCKXAJWBGDADHBWZQDKVKAORIEZZCTEFYGMOTOHYGVAUJJMBQZPGNSMFLSANHLMBDSUJFPPSVTBVWROQEIM");

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
    msg.setTimeStamp(0.8203818007768103);
    msg.setSource(62087U);
    msg.setSourceEntity(148U);
    msg.setDestination(31573U);
    msg.setDestinationEntity(86U);
    msg.type = 12U;
    msg.htime = 0.7451175672600907;
    msg.context.assign("TPUQVHTGCWEMFOSUGXWWRIQIYCJZNOXTGHNFDSYZTZBRUOWCVDBAITDSHNXZWLVQPUHNSETBJWKXLTQKEYKCIPMOAVLBORUQJWCDDSXEVBM");
    msg.text.assign("OQYQEBTERSSTJIEYOMZXAYBFUTVJLVETTHVXNKSUNHKDHIGGSLNHSBKRVUFLLRTLYQDBKSAFDTKWRZADHPBJZEGXZOXWOKIWDIBCSVSZELPPAOUFPPKGLW");

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
    msg.setTimeStamp(0.5783291892160868);
    msg.setSource(48491U);
    msg.setSourceEntity(161U);
    msg.setDestination(37411U);
    msg.setDestinationEntity(128U);
    msg.type = 225U;
    msg.htime = 0.3897792014323005;
    msg.context.assign("YIURAOQFVJGNPNXMEINZKDANFXULURZ");
    msg.text.assign("MSEDRVXGTJYVAGRYBNTQPHEJZDMEAWKPNONCVEMBLXLYUHGNGEIXJNWYUUNSHF");

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
    msg.setTimeStamp(0.6896834213965188);
    msg.setSource(35442U);
    msg.setSourceEntity(188U);
    msg.setDestination(19935U);
    msg.setDestinationEntity(172U);
    msg.type = 4U;
    msg.htime = 0.4135267668845436;
    msg.context.assign("HJXYPWIHLBPEPZVXZDCDGCOCXRFPKUABMSZGSFNSGTCIWCVTLQKSKYGAWKJEDDGVARPZHKFJOHVJPTLGGGQHMHUZSEZVUXOOWBZDUIRVFK");
    msg.text.assign("ZUOIQJMCCPGBKEDDKTNDSWEFD");

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
    msg.setTimeStamp(0.7869455983785741);
    msg.setSource(62974U);
    msg.setSourceEntity(81U);
    msg.setDestination(64634U);
    msg.setDestinationEntity(81U);
    msg.command = 18U;
    msg.htime = 0.5568870516624462;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 31U;
    tmp_msg_0.htime = 0.6580812167518326;
    tmp_msg_0.context.assign("JJECILRANMUXHNKBUZTFLESXMYLLTDUWSDOEBGDOBQIFPUVTDUBOXRWTLJRGKAKMJKCXHQQHZAYELNZFVKUAYMHFWMWVNOAPQDQEZJJDOGSTYOCNBXJBTZOPPHNXCELMJWIPHGQRSB");
    tmp_msg_0.text.assign("HHHRJZRYQDIBZGPIKXBZSTWXPAPMJGXDLTUACFPHLVTJQLBCYQCEDFVSCCWDJVILRGLLLDOPVEYCOUCNMWRWCVRNYNKUJUIXUONDMISYYMFDNPSPWSOBNVCBTSFTQJBQIMGIPLVMHICLFGXGYAEIRAASDGKOVXVUKEHNKYUOWHTHEKSDEKJXPRAW");
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
    msg.setTimeStamp(0.20668142809087575);
    msg.setSource(15258U);
    msg.setSourceEntity(118U);
    msg.setDestination(7513U);
    msg.setDestinationEntity(69U);
    msg.command = 156U;
    msg.htime = 0.377522686503752;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 70U;
    tmp_msg_0.htime = 0.7085317252567465;
    tmp_msg_0.context.assign("GSQTXZDPTQODNSAFZFZZQNBEZSMQAUPFEJCXYWWLELTYFXHWEFTKWXOMDWCLPUYKJBMZHWILVSNDGGUTVLAUZYSKHVBA");
    tmp_msg_0.text.assign("JTLBMSNVKYBLGMPZUYIGYHNCZIZSTKDPGPNHRGVUKGXMWLPCJLYPWOIUTIQWIZRDVAENDDTRPTPUMHEIBUGUROESHXSSADWRFKECTHYFFXVQFRCDUZDAJOXZMYUVKQZWOJLTOQWVOSPVAHRLWALGJNEKCDABYKIQONZRFTXNFJDSNEEYQXOWHHBBIVMHAUBNQGJYQPHREGXNZMEAASMXTCLEFDQLKOSCXMYVZIVCQBSFWOWJRXKJUGBKILCJPT");
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
    msg.setTimeStamp(0.9178708182742418);
    msg.setSource(27226U);
    msg.setSourceEntity(210U);
    msg.setDestination(55996U);
    msg.setDestinationEntity(63U);
    msg.command = 192U;
    msg.htime = 0.5687363622339571;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 144U;
    tmp_msg_0.htime = 0.9970846194912695;
    tmp_msg_0.context.assign("NRARPLLABQVUNHQBFGWNECFTJIQMIXQCJIJCLGJFXUXPKCUWWBWSUZXGKWPSJZHEBBMXMPPPEKPLMKXQQUSKSTHSPIRAQQHTDETMWTLKNCWFDCZBPZCVSIUQNRHARERXSFHUDZEMAHHZYWUYFNDZGSVGTKGMOCDFRYZRYOLEOXDENVWKKOYJRIVXIYLMZELPOBBRCKSTIIBFVCMNEQJ");
    tmp_msg_0.text.assign("JAOGDLGHVAEMAGJQFZBTVPLOFZVMTSXZZYQWLBNRQDOJDMAEAAIECKFNJXKSSKHWNKMOXLSDTSEUCHNRQYPXYANHTZFDJGJPSWSEDWFPXBMWCEIVCUNXUOMYXJZGCIPEKUKRQHVIRADHUWGLZQMUYHHIARLBCTRLFIOYIQMKOJKPZUPPWCOWQBYANMVVKX");
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
    msg.setTimeStamp(0.828219849508575);
    msg.setSource(8199U);
    msg.setSourceEntity(25U);
    msg.setDestination(64061U);
    msg.setDestinationEntity(152U);
    msg.op = 81U;
    msg.file.assign("JUGZPMTGDFCMIBEUQKQEWBZMYXBXOYVFVKAPRNYAHFRSFYYKCUWZFVKIEBCSHFIYMWXADDWRNVGOBGLSTPQUDGJDCJFJPQPXYUTUICXQSLVSYLRMIZWQMRKGZNXEOLTNPVZEPCSGWWTQQMO");

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
    msg.setTimeStamp(0.20076690068990288);
    msg.setSource(40901U);
    msg.setSourceEntity(88U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(145U);
    msg.op = 76U;
    msg.file.assign("TSRJLDAVIMEQAMJSMYYIMRWRAQMZPUTPIMULHOBXHRIQENTFVVKVSJABFXJDKGCJOEQNFOYPNHHYWVZPGEFOINXRAGKMRKTRRCFZPFFNLOBNEPAEEHBZOJU");

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
    msg.setTimeStamp(0.8053421989885782);
    msg.setSource(1305U);
    msg.setSourceEntity(178U);
    msg.setDestination(36465U);
    msg.setDestinationEntity(58U);
    msg.op = 57U;
    msg.file.assign("YUXUMJQQXBQHHDYDKGSHOQDVGONOMIEJISCMIMBFRBCUUTYJIEFNMALABFFOHCOGRTGEYPDCVGWXFKHJBVARJPRKHLCRMLFJCPTSYEOPZAKLLSONEISLIDKPDTYFAWGNYUYVZJVCOATBMEQBCLBYRNN");

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
    msg.setTimeStamp(0.16431801617852637);
    msg.setSource(21270U);
    msg.setSourceEntity(185U);
    msg.setDestination(26971U);
    msg.setDestinationEntity(18U);
    msg.op = 92U;
    msg.clock = 0.03594385980075521;
    msg.tz = -36;

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
    msg.setTimeStamp(0.6596046135838368);
    msg.setSource(3272U);
    msg.setSourceEntity(153U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(227U);
    msg.op = 94U;
    msg.clock = 0.7455331864619088;
    msg.tz = 99;

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
    msg.setTimeStamp(0.31364387655784143);
    msg.setSource(59012U);
    msg.setSourceEntity(215U);
    msg.setDestination(5722U);
    msg.setDestinationEntity(136U);
    msg.op = 164U;
    msg.clock = 0.28773268933061047;
    msg.tz = -125;

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
    msg.setTimeStamp(0.47674670091589466);
    msg.setSource(7764U);
    msg.setSourceEntity(119U);
    msg.setDestination(7871U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.29719424433827923);
    msg.setSource(60826U);
    msg.setSourceEntity(23U);
    msg.setDestination(9325U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.6233286357758286);
    msg.setSource(2447U);
    msg.setSourceEntity(65U);
    msg.setDestination(63208U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.2296439293728082);
    msg.setSource(8933U);
    msg.setSourceEntity(69U);
    msg.setDestination(8678U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("PKEFFWPQJVEXWARBINZIRAZDEBTMOLBATHYKJILHNXSLDYZGEMFWZLVVOZBWUSUMIXOZJBYKDGWAEEIQKAODNRDKWHKDBJJZNAQOTOUXTRNCTRLUPLCIZIHUAHGYRHPCUEFSMRVSJYSQKKPADYOLGYMFHFFSUGGCEYPZ");
    msg.sys_type = 33U;
    msg.owner = 8762U;
    msg.lat = 0.363305801197495;
    msg.lon = 0.23192151560370344;
    msg.height = 0.18762038524145364;
    msg.services.assign("BMIPAHZWKXWPRGVFZRWCPLALT");

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
    msg.setTimeStamp(0.0015695473569385943);
    msg.setSource(64832U);
    msg.setSourceEntity(145U);
    msg.setDestination(7261U);
    msg.setDestinationEntity(44U);
    msg.sys_name.assign("PJYIJUYMWGLWDBSNQNLWQAJQWIRQXUZHNLQZFLPYEMPMELDWHUIKIHUQNPCPYFNTOGVASDSEDWTDILGENCVCRKBJAXTGSKFWSPSXQQIWUMIIGYRNVVTMOJKRMYBCYKMUGTFCDRHHXLNLQXLKGAZLEHYVFYDKDYNHXDIPAGHOBOREAAZIBSKZQRORJXXGMTTEZVJERVFFPCCBJGSAHCFJPTBTTSCVUAAKECZDBUBVFRNOZOPMOUOKE");
    msg.sys_type = 79U;
    msg.owner = 15312U;
    msg.lat = 0.4580075965520587;
    msg.lon = 0.6920140631363385;
    msg.height = 0.1529246422061441;
    msg.services.assign("NKODPESVOIBFRTZOYPXLEZDEOSQWQROHIEQNSWQSOTKZXVHMTB");

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
    msg.setTimeStamp(0.6130112017199996);
    msg.setSource(9552U);
    msg.setSourceEntity(174U);
    msg.setDestination(31149U);
    msg.setDestinationEntity(246U);
    msg.sys_name.assign("NCHYMILWYJZZFCDLXNRSGIBEAZYTZRQIKJUEUSZGRTHEARMXFXIQDGPHNTYCZFPSOUQCVDBFHMBBUVWAWXYOIHMKFNIVFMGVKTGTXEECSTGNQPMWWCXSOZTTAAOZMFBICJJDWSYKFKHLQBSHIAXLAYPDQVAULVRVPJGOFKEQJYNXUX");
    msg.sys_type = 217U;
    msg.owner = 40202U;
    msg.lat = 0.9892554342410507;
    msg.lon = 0.2327412034476638;
    msg.height = 0.4524228382097638;
    msg.services.assign("QOCKIIDVUACOHSDGHWKBFJETYBYZNSNGDLDESTHPYZSQRGAXT");

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
    msg.setTimeStamp(0.26740740061848445);
    msg.setSource(25628U);
    msg.setSourceEntity(82U);
    msg.setDestination(34492U);
    msg.setDestinationEntity(34U);
    msg.service.assign("GRLHSOASKLGYHBYNEIKVYMZMRNERTJUMBIYXBAHIAQRFKUWJEDQJDOKNOZEEXBIZNHGIGWQJROUCPZZBJDDSCEZBJBYVICTAMCMITXIPWMEGVVFLTYPKFLSOJNYMJTXPFGLIQ");
    msg.service_type = 184U;

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
    msg.setTimeStamp(0.7008172377486246);
    msg.setSource(4228U);
    msg.setSourceEntity(125U);
    msg.setDestination(41175U);
    msg.setDestinationEntity(171U);
    msg.service.assign("JZQPATPNWKCCCOHWKKUSGYNRTXSAWPSLDRCZJ");
    msg.service_type = 123U;

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
    msg.setTimeStamp(0.0039249881181376844);
    msg.setSource(24321U);
    msg.setSourceEntity(239U);
    msg.setDestination(50740U);
    msg.setDestinationEntity(161U);
    msg.service.assign("IWOQCPHKLIFZLMHHJTEOTRIXKQOVMNNOCKSXWPCUUSTHEWGPBUQRYAVNSCCCBLOPLXDGQAHKYQWDDBZROHMNXIVFGWLTPUJJAQLXJFQTBPZNZYGZGEGLKNSLDXEIFYIAMMGOWARBDD");
    msg.service_type = 190U;

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
    msg.setTimeStamp(0.323795511293717);
    msg.setSource(24827U);
    msg.setSourceEntity(109U);
    msg.setDestination(22876U);
    msg.setDestinationEntity(77U);
    msg.value = 0.7563271938544605;

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
    msg.setTimeStamp(0.049580425244699855);
    msg.setSource(64659U);
    msg.setSourceEntity(112U);
    msg.setDestination(55849U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7222443966531462;

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
    msg.setTimeStamp(0.9353711104009358);
    msg.setSource(33539U);
    msg.setSourceEntity(114U);
    msg.setDestination(46258U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9058354449902767;

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
    msg.setTimeStamp(0.8848688250888879);
    msg.setSource(29074U);
    msg.setSourceEntity(40U);
    msg.setDestination(64549U);
    msg.setDestinationEntity(107U);
    msg.value = 0.8121922157888729;

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
    msg.setTimeStamp(0.38750050165936434);
    msg.setSource(42161U);
    msg.setSourceEntity(88U);
    msg.setDestination(55375U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6953993053232737;

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
    msg.setTimeStamp(0.8319874278537253);
    msg.setSource(57952U);
    msg.setSourceEntity(206U);
    msg.setDestination(60135U);
    msg.setDestinationEntity(213U);
    msg.value = 0.2523256980291464;

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
    msg.setTimeStamp(0.02236563125020863);
    msg.setSource(28366U);
    msg.setSourceEntity(225U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9713350505236266;

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
    msg.setTimeStamp(0.7144330194314388);
    msg.setSource(55178U);
    msg.setSourceEntity(162U);
    msg.setDestination(7613U);
    msg.setDestinationEntity(40U);
    msg.value = 0.5749419067276916;

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
    msg.setTimeStamp(0.2559858780024844);
    msg.setSource(56333U);
    msg.setSourceEntity(88U);
    msg.setDestination(25841U);
    msg.setDestinationEntity(197U);
    msg.value = 0.9170270475818988;

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
    msg.setTimeStamp(0.6474293013110298);
    msg.setSource(19154U);
    msg.setSourceEntity(200U);
    msg.setDestination(10930U);
    msg.setDestinationEntity(124U);
    msg.number.assign("ZXEUXQASBEHALDNODNFFYMGIOIIWYVZWOORZVBARUFCDJWRPIMLJHWPUKHJSTOELUAYAZOYXUGRCMQIXJFWDTKPFRIFSFZVUOSPEVCUWTPVWWYEBOCXHLNXIQNZSSXYMXALNJCMTJKJVNBFQHETCBVVCKJKVSRZMAKALLHNPEYJUQOCBBEGTIRIASMUZWMGHQBLZRNTNZDGGXHKDVQGKTGLHEPQCSUFAOWNL");
    msg.timeout = 62169U;
    msg.contents.assign("ARXLHMBSHTPLEEKQNHXDTRNVYEAXZHASNBGOSJQZZZM");

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
    msg.setTimeStamp(0.897702977421229);
    msg.setSource(19947U);
    msg.setSourceEntity(238U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(14U);
    msg.number.assign("ZTGGSCBHITJZKDHKBUYXRGORMINFAEFSOFWNSIAKIRIOQYWDWKYEGMVQKWYROFFIXOVXJAKCDOZTEOZZLYNHBDECNADTJAUIMGFZUCMWMOLOUFGMPLI");
    msg.timeout = 50570U;
    msg.contents.assign("AACQDZEJAWIEAUXHEXINRFPKOWEFQQIZOUHKGZFBUWLEEFICVFHMXJQTFLWNOWOVUJMTXMRSHGQAXCOVDCSWGYYRM");

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
    msg.setTimeStamp(0.5891257783619887);
    msg.setSource(57914U);
    msg.setSourceEntity(215U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(251U);
    msg.number.assign("UECXXDFIKWDVPPINKKRSRZRLTEKHVOQVSOTUYHQYVSZUIUQOODGTLBXYSYGNCATJHOCACNLBLRNNAMRSWEITOVYNKHECXJFFAUDLPDZHJDBTIFVOVIUTNMGSVYKHPMDCCHJQGGLXE");
    msg.timeout = 19914U;
    msg.contents.assign("NEKIAAVGWVXWPPAHXWTLOZJUPMGSYNRDJNETHUNFAEETAJLBBMWIBIGPXFHPLJLDUDOWERBFCQRITQNNLUGCVZRZDOKFSSGCJAZYYGHQDSTGOERJXOMAOUQHBUSAKBCHYLBPFOYVOCEVUPGHRNYQHRZXKPKWCBSPKQZHECMJXMSDISWIVYUXSUQRMOJFLNQKACXZMSTTDLURXDJKTM");

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
    msg.setTimeStamp(0.27559249158822896);
    msg.setSource(1712U);
    msg.setSourceEntity(82U);
    msg.setDestination(24337U);
    msg.setDestinationEntity(101U);
    msg.seq = 2832246133U;
    msg.destination.assign("CUTAUBXRYVJFKGEAPUNUSFCDYJNSYTZZOXSHUCGBYLVZWWHKXOEPFWRIERBZOVLNJZWADZNIRTIDCDNOOYLIUXLNLGAXRDDHMPDGDKSQKMQFZOBHAYHMRKKVVXSGBBFIPETJBVSAR");
    msg.timeout = 23812U;
    const char tmp_msg_0[] = {53, -70, -121, -65, 16, 99, 104, -57, 88, 13, -54, -65, -43, -35, 67, 75, 34, -6, -93, 68, 107, -52, -122, -31, 54, -97, -6, -37, 28, -50, 28, -94, -18, -91, 5, -43, -123, 42, -34, 21, 106, 96, -81, 65, -94, -41, 116, -39, -82, 25, -86, 28, 49, 102, -77, -16, -81, -6, -25, -35, 104, 18, -24, -63, 62, -69, 61, 62, -26, 44, 3, 46, -84, -64, -95, 42, -51, -123, -44, -85, 114, -40, 11, 34, 23, 42, -77, 122, 95, 99, -46, -107, -92, -45, 98, 94, 11, -84, -53, -49, 117, 43, -84, 9, 23, -38, -84, 68, -26, 101, -69};
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
    msg.setTimeStamp(0.8281975053857484);
    msg.setSource(20724U);
    msg.setSourceEntity(210U);
    msg.setDestination(55406U);
    msg.setDestinationEntity(204U);
    msg.seq = 4098967847U;
    msg.destination.assign("AOCYNKFKAFDMLTHUXSOVMHSGMABYTVYMZVNTRJDVRMESVWLAFDGILPXYAWNCJGUKBDJBVUBJEJUIYCPPOTEZCPITFRZIQQLOQHBJGQREQCOVIEUNQOKUHZNRHFATYLWUSJAQAZCVFTGFXZ");
    msg.timeout = 12323U;
    const char tmp_msg_0[] = {-94, 108, -6, 108, -121, -73, 5, 75, 5, -29, 86, 46, 89, 8, 126, -48, -43, -60, -73, -113, 105, 118, -28, 64, -108, 52, -35, 112, -126, 79, -107, 54, -103, -86, 44, -52, -113, 75, -29, 46, -55, 109, 80, 47, 20, -45, -27, 77, -37, 27, -80, -67, -60, 17, -56, -25, 117, -34, 32, 29, -105, 82, 60, -83, 73, -14, 58, 12, 93, -78, -7, -80, -1, 85, -90, 9, -77, 58, -58, -94, -73, 111, 78, -2, 50, 84, -27, 74, -125, -4, 35, 51, -118, 78, -41, -91, 17, -112, -99, -108, -81, -35, 80, -26, 32, 83, 11, 125, 86, -16, 14, 93, 27, 48, 32, -120, 9, -52, -23, 27, 61, -97, -14, -5, -15, 46, -111, -31, -61, -13, -19, -66, -35, 116, -76, -13, 112, 55, -73, -1, -60, -32, -69, -85, -69, -96, 74, 63, -65, 5, 125, 69, -65, 69, 53, -9, 5, 114, 47, -74, -31, -10, 76, -41, 50, 71, -11, -10, -75, 93, 22, 13, 103, -99, -97, 35, 84, 33, -34, -125, -127};
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
    msg.setTimeStamp(0.46869870845881967);
    msg.setSource(32595U);
    msg.setSourceEntity(135U);
    msg.setDestination(10304U);
    msg.setDestinationEntity(14U);
    msg.seq = 3859429271U;
    msg.destination.assign("TFXTHBAVJZFYOWZJBELPJUTTBPDYLEOHULKYOIHIOSMLLIJXDGPMQJRXOFAVUTNLPFXWCXJSGUOEIKKXKCGQBEUZVQECERXHQZANRASGNEHESRSNATLJDUMPRKZ");
    msg.timeout = 550U;
    const char tmp_msg_0[] = {-32, 64, 95, -26, 75, 88, 66, -50, 105, -104, -93, 24, -68, 94, 100, -47, -119, -103, -117, -60, 57, 42, -58, -47, 9, -38, 113, 0, -110, -103, -27, -128, 95, 5, -20, -5, 19, 60, 48, -25, 42, -72, 20, 80, 2, -87, -72, 117, -95, -45, -14, 8, 71, 69, -83, 10, 107, -55, 9, 80, 15, 37, -4, -96, 7, 52, -50, -41, 91, 57, -116, -110, -106, 89, -73, 50, -110, 45, -23, -72, 95, -30, 45, -102, -9, 111, 20, 91, -43, 10, -116, 32, 72, 29, 88, 42, 49, -76, 100, 51, 41, 61, -111, 32, 16, 111, 88, -4, 10, 75, 44, -24, -100, -51, 74, -14, 28, -50, 18, 68, -7, -30, -81, 119, 99, -74, 77, -122, -104, 3, -13, -29, 107, 68, 52, -60, 31, -98, 33, -72, 76, -78, 103, -85, 34, -34, -34, -104, 90, 109, 4, 123, 118, 116, -39, -23, -92, -51, -71, 113, -76, -54, -114, -40, 52, -42, -85, -99, -1, 86, -15, 122, -61, 80, 2, 31, -8, 107, 38, 107, 25, 120, -52, -93, -101, -103, -81, 81};
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
    msg.setTimeStamp(0.0010017401850740404);
    msg.setSource(7734U);
    msg.setSourceEntity(191U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(91U);
    msg.source.assign("UCEPUIKIKEKZWQRGSFS");
    const char tmp_msg_0[] = {-12, -40, 23, -84, -122, -107, -109, 112, -85, 123, -104, -99, -105, -31, -76, 112, -73, -37, 123, 116, -71, -91, -120, 82, -111, 91, 16, -37, 46, -8, -18, 56, 48, 36, -122, -75, -39, 84, 70, 100, -20, -81, 83, -114, -105, 34, -34, 64, 125, 5, 89, -96, -34, -23, -94, -116, -34, 60, 25, 38, -68, -89, -96, 27, -67, 110, -79, 110, 31, -31, 67, 33, 20, 17, -65, -69, -63, -3, 67, -38, 13, 69, -36, -124, 61, 34, -86, 99, -32, -50, 71, 44, 51, 114, 43, -120, 28, -27, 40, 79, 63, 23, -120, 104, 124, 47, 28, 29, 18, 107, -62, -53, -40, 11, 106, -81, 7, 56, 24, 87, 90, 24, -36, -11, 63, 119, -21, -27, 85, -77, 101, 81, -2, -48, 92, -69, -120, -59, -40, 90, -28, 105, -24, -73, 0, 29, 0, -115, -22, -51, 100, -31, 21, 68, -84, -64, 117, -92, 55, 72, -115, 38, 45, 34, 21, -39, -13, -41, -55, -99, -24, -7, -58, -36, -38, -72, -33, -99, 11, -61, 8, -54, 23, 36, 47, -44, 92, -39, -5, -88, 106, 57, -31, 71, -128, -25, 107, -108, -84, -3, -97, 77, -20, -18, 123, 75, 45, 20, -27, 44, 121, 22, -51, -101, -40, 113, 51, -4, -116, -76, -102, -127, 92, 113, -27, -77, -45};
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
    msg.setTimeStamp(0.5034152680206182);
    msg.setSource(32410U);
    msg.setSourceEntity(36U);
    msg.setDestination(40567U);
    msg.setDestinationEntity(135U);
    msg.source.assign("ZGQAGAMWTEEPBQHWZOJYMCYUFEJYKMHRRTJCZJOFUXXPFOQSQLGYRQLUFSEBSXODXQNHRZEAFVWZIANDGLVIIPRPOSDRFAVCIZKKEVIVLAWEDYCXDEQUVBMUZIDIWRNCEDACTPUTTENYKKGBBPOKMHJDAKSTQFSCULOKISTCHJPWWBRPZUSNGLBLQHJAXGHTVWPAVIGOYXLBGYLRUVJQ");
    const char tmp_msg_0[] = {33, 86, 52, 57, 72, -54, -119, 81, 73, 105, 1, 47, -71, 122, 100, 29, -49, -29, -11, 103, 60, 113, -2, 63, 70, 38, 31, 124, -66, 79, 93, 110, -13, 26, -91, 115, -29, -34, -7, -113, 125, 124, 78, 125, -7, 100, -28, 21, 57, 103, -114, -1, 71, -97, -112, -21, 66, -28, 5, 126, -115, 8, -127, -67, 91, -113, -82, -21, 125, 9, 20, 61, -41, 104, -47, 17, 105, 97, -46, 19, 66, -116, 20, -17, -86, -18, 111, -113, -96, 75, -123, -16, -80, -51, 24, 22, -108, 111, 102, 112, -55, 119, -10, -77, -33, -1, 32, -96, 45, 56, -120, 55, -27, -128, -31, 25, -94, 125, -101, 31, 113, -110, -45, 107, 122, 86, -74, 101, 33, 111, 108, -27, 51, 87};
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
    msg.setTimeStamp(0.8082281534282477);
    msg.setSource(26880U);
    msg.setSourceEntity(165U);
    msg.setDestination(31845U);
    msg.setDestinationEntity(252U);
    msg.source.assign("YYQNMHABWNJLEPISARQJSJUITMRRURTDIFZNEJEQSKBCNNORDDOWKDZHSBOXLCWIQZCTEKVFFMXGVLFH");
    const char tmp_msg_0[] = {80, -15, 120, 108, -41, 64, 54, -38, -125, -55, -72, -29, 3, -112, 112, -109, -33, -17, 106, 42, 111, -58, 79, -54, 81, 23, 73, -99, -4, 55, -27, 62, -57, -79, -15, 61, -109, -12, -123, 97, 87, -14, 61, -54, 62, -121, 102, -67, -83, -22, 4, 10, 37, -57, -115, -76, 77, -38, -120, 88, -105, -116, -124, -74, -8, 0, 92, 84, 3, 120, -40, -14, 41, -37, 34, -22, -83, -51, -82, 106, 76, 14, 124, 84, 35, 16, 110, -53, 30, 16, -121, -41, -120, 76, -54, 0, 75, 33, -95, 26, 21, 95, -57, -42, 73, -117, -24, -9, 25, 105, -15, -67, -102, 13, 50, -22, 48, -31, 68, -54, 26, 28, 60, -87, -119, 11, -39, 96, -82, 68, -51, -10, -114, -5, -81, -121, 93, 66, 119, 31, -75, -80, 1, -39, 102, -79, -27, 104, 4, 91, -18, 6, -98, 53, 74, 48, -62, 7, 66, 50, -85, 64, 92, -116, 90, -38, -41, 87, -113, 90, 61, -68, 124, -6, 26, -107, 39, -104, 31, 15, -2, -93, -105, 62, -45, 66, -50, 65, 25, 69, -52, 109, 126, 75, 105, 20, 58, 44, 112, -55, -98, -62, 125, 5, -126, -104, 101, 26, 52, 90, 94, -66, 102, 80, -12, 3, 91, -72, -45, -108, -64, -50, 65, -108, 13, 78, 61, 89, 101, 116, -91, 43, -84, 96, -60, 65, 70, 119, -32, -121, -89, -86, -13, 75, -22, -105, 85, 93, 35, -97, 87};
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
    msg.setTimeStamp(0.5780979275811323);
    msg.setSource(37863U);
    msg.setSourceEntity(158U);
    msg.setDestination(2052U);
    msg.setDestinationEntity(138U);
    msg.seq = 4051596758U;
    msg.state = 198U;
    msg.error.assign("SIEGAARQOMPILKHXHCJXZTKVRXMTHCYIRNVAVZZIPTIHUQVSSLIOMWVQBHGNEZJOUNCFZEIGAECLIKVMYUELDDNJMTGBFQHWPUAQGSQXDZEOXBPSYDCJUZGBWBNFTKEWNPRPLUUKLAOOYBMWWUGCJFIHYSGMQGMKKGBDOYVXFVVJDSCYEFSSUULNAXHHMYOXJYLLJJ");

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
    msg.setTimeStamp(0.32577758944997437);
    msg.setSource(10733U);
    msg.setSourceEntity(222U);
    msg.setDestination(64313U);
    msg.setDestinationEntity(196U);
    msg.seq = 4132946185U;
    msg.state = 199U;
    msg.error.assign("CIFXFBCGTVBORTMLLRVEBBMNKSAAJKDFPXHPXDJUHIEXZCSUSZIQOXUCRQYXIQQVSXNREGTEWLMRVJMMERHNPRFQYGIGUTVUQJYJANLLLOYWEVDZNOATNLGKTVDDHRKDPIEMMSUBBSUFSMOUTWOWIKKLOJLHUGEPXSWGAEQNHPZSZIWKXWAAYQFNAHAMIYJJRADWUFBZYOCXQYSKPBZVBZNFCTPDOMWETGYFYHPCKJZQTZCBNRCIG");

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
    msg.setTimeStamp(0.18937813985499208);
    msg.setSource(10236U);
    msg.setSourceEntity(199U);
    msg.setDestination(14783U);
    msg.setDestinationEntity(177U);
    msg.seq = 2347538821U;
    msg.state = 121U;
    msg.error.assign("PTHPCDCTAWTVYUBPBXXHVZYJINJMBQRFKRBOFHLLFTKNDZYTASNYLQXJHDSJIDGLKIGCJOGIITBEIEMMLBCKFVRLKIOAAMWNQSARCQDZVXMYBPCKQFAPEDWOHEBONUSMTZCIRWOLGXBYHUKCKRHLFUDZHEVAGJGYPZSOWVGPQFXARLNXCRTUX");

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
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.9280603833186701);
    msg.setSource(64058U);
    msg.setSourceEntity(80U);
    msg.setDestination(37345U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("SVGRFJMRSEQMKEDNQRURYTKFPJFVSWZJWEBQEPOKWPZUNZARMBXNCWCYCBHRNSNKKQYYCGBYACWGJIIGXWXY");
    msg.htime = 0.725710887886118;
    msg.lat = 0.947945519825167;
    msg.lon = 0.05494002762867767;
    const char tmp_msg_0[] = {72, 110, 30, -44, 11, 101, 66, -71, -57, 47, -48, -113, 49, -32, -33, -114, -32, 86, 59, -45, -96, 65, -81, -104, 102, 8, 100, 59, 82, 8, 46, -39, -66, 22, -13, -91, 50, 115, 122, -100, -50, -51, 91, 4, 92, -42, 41, -105, -26, 74, -55, -94, -127, 69, -56, 9, -28, 119, -76, -98, 32, -101, 43, -18, 112, -117, 8, 91, -90, 50, -48, 50, 64, 122, -16, -62, -120, -108, -77, -36, 74, 89, -50, -1, 105, 26, -113, 114, -73, 101, 71, 109, 1, -88, -41, -103, 88, -22, 27, 107, 103, -64, -30, -12, -15, -94, -26, -74, 99, 37, -14, -32, -36, -12, 120, 7, 64, 15, 92, -128, -76, 98, -26, 65, 29, 33, -60, -6, 41, -14, -111, -48, 121, 76, -85, 44, 76, -31, 20, 51, -81, -35, -79, 42, 114, 68, 90, -59, -126, 38, 30, 125, -123, 120, 54, 83, -118, -63, -106, -35, -61, -127, -44, -24, 78, 123, 107, -63, 48, -18, 125, 76, -79, -30, 113, -126, -1, 47, 96, -102, -4, 62, 77, 114, 59, 22, 84, 107, 124, 108, -25, -87, -86, 21, 45, 122, 125, -8, 26, -112, 37, 103, 79, 103, 87, -77, 114, -58, -60, -7, -114, 83, -103, 84, 60, 62, -35, 80, 54, 17, -41, 11, -23, -101, -58, -51, -121, -117};
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
    msg.setTimeStamp(0.24697089914214543);
    msg.setSource(28527U);
    msg.setSourceEntity(169U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("LGWCYEGLXFXVIJQEKXCEYVFFQWRNLOVYSYEIMDPJUZBPRHVJCXCUNQXQLQKHZUCXUOTFMYGKPKEDWRJHWFOQKVILULYIEAQOLAOEWBBFHVAABFXOATFPBSRUUYRHMSNPVJTHDJOZHKZYONGOEBSRIDTYMCMHAHFPMNSXNZVTTMBYVPMPLIJRWFGBWZQ");
    msg.htime = 0.19552428127980614;
    msg.lat = 0.27369365837433357;
    msg.lon = 0.5365916074318405;
    const char tmp_msg_0[] = {80, 18, 55, -115, 37, 122, -93, -42, 56, -18, -42, 56, -69, -22, 52, 45, 119, -55, 27, -92, 66, -106, -64, -13, 125, -8, -125, -35, -12, 81, -4, 14, 83, 23, -114, 117, -97, -116, -70, 13, 57, -46, 34, 125, -40, -67, -90, 63, 80, -109, -98, -104, 46, -128, -125, 99, 44, 122, -85, 91, -108, 49, -95, 62, 49, -37, -22, -15, -67, -111, 64, 102, -44, 70, 44, -117, 33, -113, 117, -81, -9, 58, -108, 118, -112, -84, -99, 116, -61, 87, -120, 10, 10, 90, 38, 81, 11, -53, -37, 69, -76, 57, 28, -28, 4, 7, -21, -77, -48, 40, 62};
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
    msg.setTimeStamp(0.5292412624148908);
    msg.setSource(57555U);
    msg.setSourceEntity(45U);
    msg.setDestination(14077U);
    msg.setDestinationEntity(153U);
    msg.origin.assign("EXHHSWPEZXBHKKAOWTFSOFGNBMJGLXSTRVOFVLVFEZQUGCODDGKCDQWUKBPPCWNQKETVSTHCPSHJTW");
    msg.htime = 0.9217120143051681;
    msg.lat = 0.040686709895992657;
    msg.lon = 0.7007688177030511;
    const char tmp_msg_0[] = {92, 30, -55, 2, -114, -32, 24, 35, -5, 32, 111, -123, -23, -63, 47, -52, -41, -89, -119, -115, -105, -29, -57, -3, -50, -51, -90, 86, -122, 32, -21, -2, -111, 68, 48, -93, 120, 36, -123, -100, 14, 41, -65, -94, 37, -75, -47, 86, 117, -46, -107, -11, -47, -24, 81, 115, -87, -53, -120, -114, -78, 75, 9, 31, 63, -42};
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
    msg.setTimeStamp(0.22043171483562907);
    msg.setSource(30342U);
    msg.setSourceEntity(228U);
    msg.setDestination(873U);
    msg.setDestinationEntity(239U);
    msg.req_id = 44964U;
    msg.destination.assign("HWBEKUSSUEUCYTFYULKCPISEZHQKLEUBZHRIBTXQ");
    const char tmp_msg_0[] = {66, 19, -31, -13, -109, -114, -111, 97, 41, -69, 107, -31, 12, 78, -10, -48, -37, 80, -98, 99, 82, 123, 21, -6, 1, 95, 36, 82, -9, 65, 48, 54, 89, 50, -76, 95, -106, 58, -38, 70, -123, 24, -9, 46, -53, 31, -103, -13, -38, -79, -119, 75, -126, -61, -21, -66, -63, -104, 52, -87, 116, 52, -83, -83, 43, -68, 108, 29};
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
    msg.setTimeStamp(0.6530337838062903);
    msg.setSource(31674U);
    msg.setSourceEntity(120U);
    msg.setDestination(14907U);
    msg.setDestinationEntity(241U);
    msg.req_id = 54986U;
    msg.destination.assign("WCXOCUPLYUSMNTXVDNNTOANTEQPLEXANZMWGYSBYRQTUKUNAZGPJFTGGSJOXIUVVBAXUAHCHBYZPHCMKEPHGZXIWKAVILYLP");
    const char tmp_msg_0[] = {-28, 97, -81, -15, 69, -9, 61, 125, 47, 13, -60, 75, -41, 60, -45, 26, -109, -20, -4, 90, -128, 97, 4, 14, 77, -17, 125, 82, 39, 8, 120, -25, -107, 83, 126, -4, 111, 104, -70, 96, -114, 97, 43, -91, -83, -84, -112, 94, -50, -119, -54, 111, 32, -93, -60, 69, -45, 84, 89, 120, 102, -115};
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
    msg.setTimeStamp(0.2794226393552087);
    msg.setSource(49479U);
    msg.setSourceEntity(111U);
    msg.setDestination(60594U);
    msg.setDestinationEntity(176U);
    msg.req_id = 34689U;
    msg.destination.assign("TXLOOXURUWRYEXFCFBAVBMUVXVTMSPZUCFJWIZRROSEIFNJIIMTUHLBOWJDLYRPSTWIZBQUWOCBPDNSESYKMJQHHEYANFKVGNDSGMDESCBBNEQGPKXYKQZZHNFFIZRUCIVCAGJGNVBLOAFHAUMSJATLXPWSXQMJEXHIOOPLJYPXTBGGZWTQAPBGQVHPPJYJKYLNYNKDUOG");
    const char tmp_msg_0[] = {114, 56, 47, 120, 48, 8, 91, 119, -59, 112, -116, -84, -100, -109, -41, -125, 124, -28, -123, 55, 93, 32, -36, 97, 54, 116, -79, -103, -120, 124, 113, -104, -78, -75, 62, 76, 77, -69, -55, 97, -9, -75, -95, 122, 20, -62, -92, 42, -102, 80, 77, -113, -82, -19, 60, 125, -83, 60, -102, -71, -105, 112, -44, -20, -127, -77, -117, -63, -98, 19, -59, -107, 12, 73, 61, -53, -84, -55, -48, -48, 89, 26, -34, 81, 85, 126, 10, 117, 61, 17, 43, 9, -71, 126, -119, 15, -46, 60, 7, -99, 80, -54, 73, -117, -49, 114, 35, 123, 97, 63, 49, 120, -59, 119, 49, 107, 53, 102, -66, -12, 29, -105, 2, -67, -59, 13, 9, -59, 90, -41, -72, 8, -20, 59, -30, -42, 63, -107, -119, -19, -16, 89, -31, 3, 103, 44, 28, -71, 3, -94, -50, -52, 59, -71, -121, 19, 7, 38, 95, -65, 22, -50, -88, 81, 4, -94, 37, -82, -50, 108, -12, -5, 31, 87, -25, 73, 90, 74, 18, -106, -43, -128, 78, -94, -116, 123, -128, -15, 51, -49, -85, -80, 12, -101, 109, 84, -97, 79, -8, -123, -8, -96, 8, 117, 48, 101, 51, 10, -20, -109, -16, -84, -58, 13, -58, 105, -24, -26, 49, 46, 6, -14, -90, -114, -102, 117, -22, 93, -53, -32, 94, 55, 59, 78, -11, 115, 63, -100, 105};
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
    msg.setTimeStamp(0.6863512641411191);
    msg.setSource(54866U);
    msg.setSourceEntity(37U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(171U);
    msg.req_id = 9567U;
    msg.status = 249U;
    msg.text.assign("BTIRUQEKJUWHTHSCSSSCAOVRFXPFPDZGWYRGONRERKEUZAUFPYTFXWCIPYLMLNLTUXRVBPDYAQGMURUNODEWXCKDGXXUHANCRNFGGGJQFZTEDOLTWFKMPSVQBHTNCIJIYAHJOFBZXXKGKXCWJPJAHMBGVOQPONWEAIQNPVQSWDILECVHJTVBCKFLADBCSOJVARXHZHMLLNEJ");

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
    msg.setTimeStamp(0.4231635373701188);
    msg.setSource(44524U);
    msg.setSourceEntity(151U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(55U);
    msg.req_id = 37311U;
    msg.status = 33U;
    msg.text.assign("SDNDULESELOYKXCSWAUGJZBGMPBUNPFFNHJKXVCNLVDKLYGVCHLBDQYZUVTYHAZQNIFAPCYXGWPCQUZXCVNIQVDJUXOXAOPQGOARLSJWFHGTQKEMMKOQUPLNFIUTTLTWSIMBXLPDMSTVPHFRTREMTRRKNBUAQKEHJYSWWRWJQZDFZDFJCIMIOEXBBFYSHD");

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
    msg.setTimeStamp(0.19084527443323807);
    msg.setSource(56018U);
    msg.setSourceEntity(195U);
    msg.setDestination(56866U);
    msg.setDestinationEntity(64U);
    msg.req_id = 14433U;
    msg.status = 69U;
    msg.text.assign("XMCCZJZBLOJMSAKSLYCZHRCFCFRCXIUTPPBFKIQIRQYKKJOPPDYGHFKPDNQNQEVVEQDBAAMBRWLSXDJDGSATXTGYRJLQBWCEPCRGYHFSUXLKIZMMTPGBZFGQFUOIWTUJVEVCSYNAXHRLSJZOSBZVVYOAONFDHNZAVKGSLXJDDQSEOEWJTVUWHPETPPUNOHTYHWNMNHUMKOELWEF");

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
    IMC::LblRange msg;
    msg.setTimeStamp(0.5459183512080341);
    msg.setSource(61473U);
    msg.setSourceEntity(83U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(134U);
    msg.id = 45U;
    msg.range = 0.3119378692059893;

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
    msg.setTimeStamp(0.924044189892532);
    msg.setSource(7580U);
    msg.setSourceEntity(9U);
    msg.setDestination(64094U);
    msg.setDestinationEntity(23U);
    msg.id = 91U;
    msg.range = 0.1502248149487655;

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
    msg.setTimeStamp(0.7160360024448209);
    msg.setSource(30029U);
    msg.setSourceEntity(21U);
    msg.setDestination(9419U);
    msg.setDestinationEntity(127U);
    msg.id = 35U;
    msg.range = 0.9155090522956127;

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
    msg.setTimeStamp(0.4019709977153477);
    msg.setSource(48801U);
    msg.setSourceEntity(219U);
    msg.setDestination(3081U);
    msg.setDestinationEntity(86U);
    msg.tx = 77U;
    msg.channel = 148U;
    msg.timer = 31697U;

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
    msg.setTimeStamp(0.6725387636723495);
    msg.setSource(16144U);
    msg.setSourceEntity(22U);
    msg.setDestination(22525U);
    msg.setDestinationEntity(131U);
    msg.tx = 119U;
    msg.channel = 29U;
    msg.timer = 6084U;

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
    msg.setTimeStamp(0.3161401612749676);
    msg.setSource(11193U);
    msg.setSourceEntity(122U);
    msg.setDestination(38245U);
    msg.setDestinationEntity(189U);
    msg.tx = 48U;
    msg.channel = 67U;
    msg.timer = 16712U;

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
    msg.setTimeStamp(0.11224201745640483);
    msg.setSource(43296U);
    msg.setSourceEntity(140U);
    msg.setDestination(54572U);
    msg.setDestinationEntity(38U);
    msg.beacon.assign("SPYPCVVKHLWRRPXWCXDDOFRBXZEKCUZDOYGCNGZYQJMQZFJVQJMWFJYQNNILLSKGNKFRUHNTPEVZHDTGLXVQTGIBVGDJPYIKAMSOEUITAIDABFSXUDXBCFJVLYCKMWJHAYCHGQESBLPMSHTXJDOMIMWJLORREFSIUGHTATQSGLDTWELICVLQBMYT");
    msg.lat = 0.9065077920073095;
    msg.lon = 0.07200070567788297;
    msg.depth = 0.7235888689823349;
    msg.query_channel = 15U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 249U;

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
    msg.setTimeStamp(0.5039147613999454);
    msg.setSource(61433U);
    msg.setSourceEntity(192U);
    msg.setDestination(45532U);
    msg.setDestinationEntity(136U);
    msg.beacon.assign("VMNQYRCAZQEEOPQOHQNLTWAO");
    msg.lat = 0.056066696384969195;
    msg.lon = 0.22894611670616316;
    msg.depth = 0.5866693356752002;
    msg.query_channel = 231U;
    msg.reply_channel = 253U;
    msg.transponder_delay = 122U;

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
    msg.setTimeStamp(0.04202114148853797);
    msg.setSource(42835U);
    msg.setSourceEntity(60U);
    msg.setDestination(48946U);
    msg.setDestinationEntity(171U);
    msg.beacon.assign("TBOYSHOWWVINUZAYZONHWJMEKCARWTREPTBCENVQCCBNJDTAHWXWTWKDGLMOPFTMZZDTCLMFBNPARHQEUVZSUVHYQHKAVBSXOGSDVVOKDPLHQIJIFFXOPXOFJIRDJLKYKRINPBCLIHSWUFMZRWKCYQHCBDZAYXXQITGJPJPVNRUSKLZULDUFNGFEUFLTESEXQYXXZGSBLRKJLGAQNGJQNYOUXJCGADRQOM");
    msg.lat = 0.9446559178621448;
    msg.lon = 0.22993583140322804;
    msg.depth = 0.0006128929259004989;
    msg.query_channel = 115U;
    msg.reply_channel = 162U;
    msg.transponder_delay = 239U;

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
    msg.setTimeStamp(0.44191768692885336);
    msg.setSource(43399U);
    msg.setSourceEntity(190U);
    msg.setDestination(54884U);
    msg.setDestinationEntity(242U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.8012598591093845);
    msg.setSource(52991U);
    msg.setSourceEntity(69U);
    msg.setDestination(36623U);
    msg.setDestinationEntity(245U);
    msg.op = 191U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MYSCPGZAKNXFZFDQYZHKJBEJMDLKAEHBEYMPWAJOFAKCIIWGQNRTQPUFVLKUGIQFWIWPWRUMBEGODCRXPVFMNSCDVQR");
    tmp_msg_0.lat = 0.9293131731448919;
    tmp_msg_0.lon = 0.27308629323044187;
    tmp_msg_0.depth = 0.4656286544662376;
    tmp_msg_0.query_channel = 146U;
    tmp_msg_0.reply_channel = 241U;
    tmp_msg_0.transponder_delay = 242U;
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
    msg.setTimeStamp(0.32137293207733786);
    msg.setSource(40110U);
    msg.setSourceEntity(210U);
    msg.setDestination(20725U);
    msg.setDestinationEntity(103U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.5369892035839464);
    msg.setSource(58610U);
    msg.setSourceEntity(31U);
    msg.setDestination(2515U);
    msg.setDestinationEntity(249U);
    msg.address = 0U;

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
    msg.setTimeStamp(0.4227015290409779);
    msg.setSource(29940U);
    msg.setSourceEntity(119U);
    msg.setDestination(60392U);
    msg.setDestinationEntity(23U);
    msg.address = 187U;

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
    msg.setTimeStamp(0.03967944000020074);
    msg.setSource(27624U);
    msg.setSourceEntity(209U);
    msg.setDestination(27105U);
    msg.setDestinationEntity(41U);
    msg.address = 140U;

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
    msg.setTimeStamp(0.38308498822235126);
    msg.setSource(3085U);
    msg.setSourceEntity(2U);
    msg.setDestination(58174U);
    msg.setDestinationEntity(236U);
    msg.address = 54U;
    msg.status = 226U;
    msg.range = 0.8089591903299046;

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
    msg.setTimeStamp(0.6036143812879986);
    msg.setSource(32616U);
    msg.setSourceEntity(253U);
    msg.setDestination(18143U);
    msg.setDestinationEntity(221U);
    msg.address = 21U;
    msg.status = 128U;
    msg.range = 0.7838326865771259;

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
    msg.setTimeStamp(0.05625003474831203);
    msg.setSource(14460U);
    msg.setSourceEntity(179U);
    msg.setDestination(58094U);
    msg.setDestinationEntity(252U);
    msg.address = 190U;
    msg.status = 133U;
    msg.range = 0.9889621923633468;

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
    msg.setTimeStamp(0.7331516429303117);
    msg.setSource(57173U);
    msg.setSourceEntity(235U);
    msg.setDestination(65499U);
    msg.setDestinationEntity(68U);
    IMC::LblEstimate tmp_msg_0;
    tmp_msg_0.beacon.assign("GMSLASGMQIGMBNOUSZCLCQBIOEGJGRXZKDIQGXYZFZKCBXIPEGMFEDUAPEZGKHXJHRFWBMDXZFDOQOISQWTADYFMJRNWDVGWLRANOLCTPVSMFTRYIUBVROEUZLVSJCBKYVQSKNAZCHNTHTQTPNLIJANHOWXEKXLCZYCBEKOHMXXU");
    tmp_msg_0.x = 0.1898857406625608;
    tmp_msg_0.y = 0.23651341654352298;
    tmp_msg_0.depth = 0.8520310761921319;
    tmp_msg_0.var_x = 0.02566786682180755;
    tmp_msg_0.var_y = 0.35361334352150264;
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
    msg.setTimeStamp(0.5062699205939372);
    msg.setSource(7520U);
    msg.setSourceEntity(105U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(162U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12723286725677618;
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
    msg.setTimeStamp(0.020651647106487814);
    msg.setSource(8578U);
    msg.setSourceEntity(60U);
    msg.setDestination(22225U);
    msg.setDestinationEntity(215U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.619682459241136;
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
    msg.setTimeStamp(0.7544591616246199);
    msg.setSource(53249U);
    msg.setSourceEntity(124U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(137U);
    msg.enable = 235U;

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
    msg.setTimeStamp(0.389039903984467);
    msg.setSource(40175U);
    msg.setSourceEntity(193U);
    msg.setDestination(46818U);
    msg.setDestinationEntity(111U);
    msg.enable = 180U;

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
    msg.setTimeStamp(0.3921293474232813);
    msg.setSource(30607U);
    msg.setSourceEntity(32U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(45U);
    msg.enable = 221U;

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
    msg.setTimeStamp(0.9288763067828992);
    msg.setSource(12849U);
    msg.setSourceEntity(56U);
    msg.setDestination(8687U);
    msg.setDestinationEntity(159U);
    msg.summary = 113U;
    msg.level = 173U;

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
    msg.setTimeStamp(0.9975573774015615);
    msg.setSource(12631U);
    msg.setSourceEntity(170U);
    msg.setDestination(51139U);
    msg.setDestinationEntity(179U);
    msg.summary = 135U;
    msg.level = 235U;

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
    msg.setTimeStamp(0.5984469226169843);
    msg.setSource(42747U);
    msg.setSourceEntity(130U);
    msg.setDestination(19391U);
    msg.setDestinationEntity(185U);
    msg.summary = 138U;
    msg.level = 214U;

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
    msg.setTimeStamp(0.011387150096867749);
    msg.setSource(24007U);
    msg.setSourceEntity(162U);
    msg.setDestination(15017U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.4269997551223019);
    msg.setSource(49336U);
    msg.setSourceEntity(246U);
    msg.setDestination(20781U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.0045720481632409715);
    msg.setSource(65423U);
    msg.setSourceEntity(243U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.9252122914998624);
    msg.setSource(52834U);
    msg.setSourceEntity(115U);
    msg.setDestination(34605U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.8124447848563872);
    msg.setSource(46173U);
    msg.setSourceEntity(90U);
    msg.setDestination(11740U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.31493356181980803);
    msg.setSource(14182U);
    msg.setSourceEntity(68U);
    msg.setDestination(34431U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.5234187487746513);
    msg.setSource(48070U);
    msg.setSourceEntity(232U);
    msg.setDestination(27614U);
    msg.setDestinationEntity(238U);
    msg.op = 202U;
    msg.system.assign("NHQZSVEUFZWAXWUNDOSZKEGVDZXWRSSBYAYWHXHWQAMLOTSVLAKHKQBKXMFNIAULLK");
    msg.range = 0.705065396753646;
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.46723347958832384);
    msg.setSource(9335U);
    msg.setSourceEntity(37U);
    msg.setDestination(11325U);
    msg.setDestinationEntity(26U);
    msg.op = 194U;
    msg.system.assign("NCWFNNPIMZCXWAFDBPWDBKLVOCIOVRJKUARIUAACDMHNCULKKOMXSFEBQGAZFFTATVDRXYFSHJBJQGYGTUWSPSMGYIGGNJXIQFYENRELLIFMUSQQNTWWZXXPZSJLWQSGBHSYDNHZPKRTZLPAZXHAUVKMZHIADPFNWSBUPXTOJVCNSEJEORURIOBTYZJVU");
    msg.range = 0.09155659855711751;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 1928681590U;
    tmp_msg_0.messages.assign("LMJOGUPLYKWVBXTGQWILNAXNIRPETGRCYEUWJYIGVMKRDIKBVQMOMYAFRDLWEUZKZLFOLTYWAANUGTKSKWCVOGXARLQNOJKTCBHRLPHXDITMGVFPHVBQEGZNPWVOSAMFRHHSIJCBWHXPRUYYMAKCBTEOSITZKPGPCOBJNBEQFIKDZTBOZJXCIRUULFXRCSNCHPYDUJVAFIDXAXEGDNQSDQOYESLEU");
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
    msg.setTimeStamp(0.9789763114493024);
    msg.setSource(23879U);
    msg.setSourceEntity(98U);
    msg.setDestination(39670U);
    msg.setDestinationEntity(194U);
    msg.op = 177U;
    msg.system.assign("UGBYYFQYHFSGQNMXWNFPMGCXOUUHXIQCRODIQYRWEIKXWSTLJBLTXVNIRUMIUPBFRTFHVLITJQNJRHWVPQCFLDOZCANAEDCOLAKJUESJGARAIZYLDFVMKCYSAZKCVTNEOYAYMHEUPHZPJSECRFBGWLPGKZENDLOMTIYFUGTQ");
    msg.range = 0.6602826139723534;
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.05234776963781429;
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
    msg.setTimeStamp(0.38423839352718425);
    msg.setSource(34326U);
    msg.setSourceEntity(17U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.1616282121121051);
    msg.setSource(36132U);
    msg.setSourceEntity(137U);
    msg.setDestination(23373U);
    msg.setDestinationEntity(166U);

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
    msg.setTimeStamp(0.37782490686574355);
    msg.setSource(49319U);
    msg.setSourceEntity(201U);
    msg.setDestination(50659U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.059483727713468104);
    msg.setSource(27979U);
    msg.setSourceEntity(64U);
    msg.setDestination(31987U);
    msg.setDestinationEntity(70U);
    msg.list.assign("LMXEAZBBFKGFEZVLSUYFXTNLWYXBCMACPMJFEPIGCSDMYQMHTZCATSYOOBNPAPUPPGCEZMDASIREVPUDTNQAJYWVGOQWEWIFPBWKZXGAUB");

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
    msg.setTimeStamp(0.5353811391894712);
    msg.setSource(43671U);
    msg.setSourceEntity(251U);
    msg.setDestination(33960U);
    msg.setDestinationEntity(126U);
    msg.list.assign("WSGXLTRFSWRWCNNHDLVBGXQTKZNQLCMKSPYIFGVQBLYIORAQCAGRTGYBKNDBKFTCFMHDLQIQODNFPOUHIJIUCDJJHZXQFWZPBYYJTCLRDAWYMPLHJMEGWRQRLOVGJPEEVHOI");

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
    msg.setTimeStamp(0.34034191360407995);
    msg.setSource(5100U);
    msg.setSourceEntity(208U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(108U);
    msg.list.assign("YKZAPFVHUAHQELPQRHWCKJXKYRVCTMKJHZCWQKNCBIFPMGLMKYXRPCDGIVZDLQDYBGTQMXSJDXFWUGHJAIQEQYNIXHXFTEITRALWSFLDKGTSHZUPGNUXMONOTUNDONTUISCIOLJWECOMASHRUYRZFEZOSTNLCQZKGFPROOSCVZCWRXAWXOIAZJNESEDMTGVAKBDMIBBPWVGUXMFNLAZJFWDGO");

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
    msg.setTimeStamp(0.865650794845247);
    msg.setSource(42837U);
    msg.setSourceEntity(166U);
    msg.setDestination(26480U);
    msg.setDestinationEntity(102U);
    msg.value = -30940;

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
    msg.setTimeStamp(0.9046265067399001);
    msg.setSource(37359U);
    msg.setSourceEntity(11U);
    msg.setDestination(972U);
    msg.setDestinationEntity(17U);
    msg.value = 9222;

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
    msg.setTimeStamp(0.2414752307115724);
    msg.setSource(4607U);
    msg.setSourceEntity(169U);
    msg.setDestination(48274U);
    msg.setDestinationEntity(0U);
    msg.value = 23818;

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
    msg.setTimeStamp(0.8533218596452972);
    msg.setSource(60455U);
    msg.setSourceEntity(25U);
    msg.setDestination(30577U);
    msg.setDestinationEntity(153U);
    msg.value = 0.4470837746162477;

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
    msg.setTimeStamp(0.4505154134967264);
    msg.setSource(29639U);
    msg.setSourceEntity(129U);
    msg.setDestination(64110U);
    msg.setDestinationEntity(117U);
    msg.value = 0.785918201286534;

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
    msg.setTimeStamp(0.637404188121207);
    msg.setSource(1630U);
    msg.setSourceEntity(141U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(107U);
    msg.value = 0.458378481134022;

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
    msg.setTimeStamp(0.7619370951988211);
    msg.setSource(35563U);
    msg.setSourceEntity(31U);
    msg.setDestination(47471U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7140064030895666;

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
    msg.setTimeStamp(0.11844510944223452);
    msg.setSource(5421U);
    msg.setSourceEntity(27U);
    msg.setDestination(57555U);
    msg.setDestinationEntity(113U);
    msg.value = 0.4305117876105754;

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
    msg.setTimeStamp(0.5808377134157282);
    msg.setSource(24752U);
    msg.setSourceEntity(184U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(53U);
    msg.value = 0.38162857472097145;

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
    msg.setTimeStamp(0.37625151140766855);
    msg.setSource(43871U);
    msg.setSourceEntity(120U);
    msg.setDestination(26823U);
    msg.setDestinationEntity(223U);
    msg.validity = 42478U;
    msg.type = 19U;
    msg.utc_year = 36136U;
    msg.utc_month = 188U;
    msg.utc_day = 39U;
    msg.utc_time = 0.04180099789126179;
    msg.lat = 0.20057968488647104;
    msg.lon = 0.9884631742772589;
    msg.height = 0.5465638027496508;
    msg.satellites = 70U;
    msg.cog = 0.11652473113118444;
    msg.sog = 0.33896338253201197;
    msg.hdop = 0.9616289802325484;
    msg.vdop = 0.15398733398590814;
    msg.hacc = 0.36301671648430534;
    msg.vacc = 0.8867105948314313;

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
    msg.setTimeStamp(0.7530534511970757);
    msg.setSource(41839U);
    msg.setSourceEntity(176U);
    msg.setDestination(60364U);
    msg.setDestinationEntity(47U);
    msg.validity = 15069U;
    msg.type = 40U;
    msg.utc_year = 61677U;
    msg.utc_month = 59U;
    msg.utc_day = 237U;
    msg.utc_time = 0.5894753497048558;
    msg.lat = 0.9373620114440555;
    msg.lon = 0.42358789041762546;
    msg.height = 0.1511992292496266;
    msg.satellites = 46U;
    msg.cog = 0.19865575499573118;
    msg.sog = 0.346047970510139;
    msg.hdop = 0.47714649551812194;
    msg.vdop = 0.9782679353667857;
    msg.hacc = 0.891170177871687;
    msg.vacc = 0.14134068928893884;

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
    msg.setTimeStamp(0.6453433156332388);
    msg.setSource(22992U);
    msg.setSourceEntity(175U);
    msg.setDestination(55625U);
    msg.setDestinationEntity(146U);
    msg.validity = 32579U;
    msg.type = 54U;
    msg.utc_year = 3068U;
    msg.utc_month = 121U;
    msg.utc_day = 192U;
    msg.utc_time = 0.2901043358366173;
    msg.lat = 0.07711439366514172;
    msg.lon = 0.06737252276889127;
    msg.height = 0.3427464793652252;
    msg.satellites = 100U;
    msg.cog = 0.5395877850869484;
    msg.sog = 0.4238110614568551;
    msg.hdop = 0.17959619489588574;
    msg.vdop = 0.21572708678415486;
    msg.hacc = 0.03306006111499393;
    msg.vacc = 0.8698666591245326;

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
    msg.setTimeStamp(0.821877707032265);
    msg.setSource(28954U);
    msg.setSourceEntity(184U);
    msg.setDestination(28355U);
    msg.setDestinationEntity(17U);
    msg.time = 0.8155503110312398;
    msg.phi = 0.9373361413605146;
    msg.theta = 0.46967250978376296;
    msg.psi = 0.9921933420084151;
    msg.psi_magnetic = 0.8916855091274394;

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
    msg.setTimeStamp(0.5904784758737013);
    msg.setSource(34475U);
    msg.setSourceEntity(149U);
    msg.setDestination(36741U);
    msg.setDestinationEntity(41U);
    msg.time = 0.5836692766096577;
    msg.phi = 0.06329248782946628;
    msg.theta = 0.9293827570112179;
    msg.psi = 0.07277656663589183;
    msg.psi_magnetic = 0.3256346927391771;

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
    msg.setTimeStamp(0.8612957385641257);
    msg.setSource(37330U);
    msg.setSourceEntity(83U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(133U);
    msg.time = 0.783785498642438;
    msg.phi = 0.8524226849298266;
    msg.theta = 0.4725989606553288;
    msg.psi = 0.13624026624949548;
    msg.psi_magnetic = 0.589560169991801;

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
    msg.setTimeStamp(0.15490174553936797);
    msg.setSource(46417U);
    msg.setSourceEntity(216U);
    msg.setDestination(45778U);
    msg.setDestinationEntity(2U);
    msg.time = 0.8307038468335063;
    msg.x = 0.36830570985035893;
    msg.y = 0.7572938221190516;
    msg.z = 0.6711617047146993;
    msg.timestep = 0.4778991442150522;

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
    msg.setTimeStamp(0.8485595286680021);
    msg.setSource(31760U);
    msg.setSourceEntity(104U);
    msg.setDestination(12124U);
    msg.setDestinationEntity(33U);
    msg.time = 0.8316012698847584;
    msg.x = 0.09329385470070894;
    msg.y = 0.9655739417808565;
    msg.z = 0.9877965507441246;
    msg.timestep = 0.786449932263042;

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
    msg.setTimeStamp(0.06005241822818452);
    msg.setSource(42669U);
    msg.setSourceEntity(14U);
    msg.setDestination(4422U);
    msg.setDestinationEntity(95U);
    msg.time = 0.4022075983106632;
    msg.x = 0.7318843404514943;
    msg.y = 0.12092519057596907;
    msg.z = 0.6009526643489959;
    msg.timestep = 0.1784162608066262;

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
    msg.setTimeStamp(0.4399480412650296);
    msg.setSource(25490U);
    msg.setSourceEntity(1U);
    msg.setDestination(24731U);
    msg.setDestinationEntity(241U);
    msg.time = 0.8074009158075485;
    msg.x = 0.2788860460520336;
    msg.y = 0.7185806235333095;
    msg.z = 0.1211447411524682;

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
    msg.setTimeStamp(0.999438537673549);
    msg.setSource(26017U);
    msg.setSourceEntity(120U);
    msg.setDestination(12714U);
    msg.setDestinationEntity(9U);
    msg.time = 0.734749184952989;
    msg.x = 0.054701899301859536;
    msg.y = 0.9240546327160283;
    msg.z = 0.29427507258546926;

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
    msg.setTimeStamp(0.2412123996322303);
    msg.setSource(23209U);
    msg.setSourceEntity(253U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(72U);
    msg.time = 0.6159853498580173;
    msg.x = 0.1991395421535619;
    msg.y = 0.1488544990671824;
    msg.z = 0.9374780210215755;

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
    msg.setTimeStamp(0.9263203303728567);
    msg.setSource(38182U);
    msg.setSourceEntity(101U);
    msg.setDestination(18569U);
    msg.setDestinationEntity(54U);
    msg.time = 0.42632932264567514;
    msg.x = 0.023861975778534106;
    msg.y = 0.0062321946525587535;
    msg.z = 0.48467908019098094;

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
    msg.setTimeStamp(0.11317989102590464);
    msg.setSource(51227U);
    msg.setSourceEntity(15U);
    msg.setDestination(64486U);
    msg.setDestinationEntity(64U);
    msg.time = 0.8918528024634756;
    msg.x = 0.7313995709958114;
    msg.y = 0.6677934348086002;
    msg.z = 0.12134562568898744;

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
    msg.setTimeStamp(0.4230179987550252);
    msg.setSource(64774U);
    msg.setSourceEntity(159U);
    msg.setDestination(46873U);
    msg.setDestinationEntity(148U);
    msg.time = 0.04260463369472911;
    msg.x = 0.14960506457597944;
    msg.y = 0.6240262183388052;
    msg.z = 0.20175246479600306;

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
    msg.setTimeStamp(0.7179669144508292);
    msg.setSource(21886U);
    msg.setSourceEntity(67U);
    msg.setDestination(922U);
    msg.setDestinationEntity(41U);
    msg.time = 0.9396012751346193;
    msg.x = 0.0408053540430483;
    msg.y = 0.10260398446907737;
    msg.z = 0.6777840560384211;

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
    msg.setTimeStamp(0.7174152575955935);
    msg.setSource(45417U);
    msg.setSourceEntity(43U);
    msg.setDestination(57357U);
    msg.setDestinationEntity(220U);
    msg.time = 0.4738680391079677;
    msg.x = 0.5812213861409676;
    msg.y = 0.12629218863861713;
    msg.z = 0.2987038457071919;

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
    msg.setTimeStamp(0.24855699311193313);
    msg.setSource(60031U);
    msg.setSourceEntity(131U);
    msg.setDestination(26436U);
    msg.setDestinationEntity(106U);
    msg.time = 0.8382627623440464;
    msg.x = 0.9358134385700174;
    msg.y = 0.3661678055907228;
    msg.z = 0.4591941446740013;

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
    msg.setTimeStamp(0.965666889688478);
    msg.setSource(19551U);
    msg.setSourceEntity(89U);
    msg.setDestination(34664U);
    msg.setDestinationEntity(138U);
    msg.validity = 254U;
    msg.x = 0.8994642311006742;
    msg.y = 0.48750066700655026;
    msg.z = 0.23232487643946553;

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
    msg.setTimeStamp(0.6619246207983758);
    msg.setSource(53935U);
    msg.setSourceEntity(235U);
    msg.setDestination(28703U);
    msg.setDestinationEntity(150U);
    msg.validity = 221U;
    msg.x = 0.8752865109524689;
    msg.y = 0.8387678355414231;
    msg.z = 0.7062972013938271;

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
    msg.setTimeStamp(0.4891641789356648);
    msg.setSource(30473U);
    msg.setSourceEntity(201U);
    msg.setDestination(10691U);
    msg.setDestinationEntity(197U);
    msg.validity = 248U;
    msg.x = 0.11427760028076428;
    msg.y = 0.79043256846376;
    msg.z = 0.13873956700143508;

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
    msg.setTimeStamp(0.9725014216282908);
    msg.setSource(34765U);
    msg.setSourceEntity(27U);
    msg.setDestination(16399U);
    msg.setDestinationEntity(216U);
    msg.validity = 249U;
    msg.x = 0.6593740851805399;
    msg.y = 0.21771773249079462;
    msg.z = 0.5816191674641197;

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
    msg.setTimeStamp(0.4303692241110647);
    msg.setSource(33076U);
    msg.setSourceEntity(173U);
    msg.setDestination(48386U);
    msg.setDestinationEntity(40U);
    msg.validity = 27U;
    msg.x = 0.27102959992406395;
    msg.y = 0.16722220229914075;
    msg.z = 0.9949995608045883;

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
    msg.setTimeStamp(0.35239474669028215);
    msg.setSource(42013U);
    msg.setSourceEntity(20U);
    msg.setDestination(54883U);
    msg.setDestinationEntity(240U);
    msg.validity = 117U;
    msg.x = 0.3295804149287911;
    msg.y = 0.35203190582926436;
    msg.z = 0.6633621072173783;

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
    msg.setTimeStamp(0.43729571984329996);
    msg.setSource(8998U);
    msg.setSourceEntity(15U);
    msg.setDestination(57557U);
    msg.setDestinationEntity(117U);
    msg.time = 0.5596352479013861;
    msg.x = 0.17973834206816863;
    msg.y = 0.8553763022269834;
    msg.z = 0.4029309970308801;

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
    msg.setTimeStamp(0.5067725252822591);
    msg.setSource(22926U);
    msg.setSourceEntity(95U);
    msg.setDestination(41590U);
    msg.setDestinationEntity(181U);
    msg.time = 0.7078424916228612;
    msg.x = 0.18612638124408099;
    msg.y = 0.8125319123811651;
    msg.z = 0.9831265727048907;

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
    msg.setTimeStamp(0.6426624246507284);
    msg.setSource(62956U);
    msg.setSourceEntity(183U);
    msg.setDestination(12204U);
    msg.setDestinationEntity(116U);
    msg.time = 0.27477846297024444;
    msg.x = 0.20524707572255363;
    msg.y = 0.5318402673830316;
    msg.z = 0.6515754169533341;

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
    msg.setTimeStamp(0.6160646075677763);
    msg.setSource(57737U);
    msg.setSourceEntity(58U);
    msg.setDestination(38428U);
    msg.setDestinationEntity(196U);
    msg.validity = 13U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.333972153074788;
    tmp_msg_0.beam_height = 0.9480364115630255;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1369882996738191;

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
    msg.setTimeStamp(0.4779297161197752);
    msg.setSource(45131U);
    msg.setSourceEntity(109U);
    msg.setDestination(15171U);
    msg.setDestinationEntity(246U);
    msg.validity = 240U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.2606546177213095;
    tmp_msg_0.y = 0.442979883478418;
    tmp_msg_0.z = 0.7711517305319124;
    tmp_msg_0.phi = 0.6819855520567857;
    tmp_msg_0.theta = 0.7984691563248928;
    tmp_msg_0.psi = 0.5491642286953269;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.2166819209348444;

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
    msg.setTimeStamp(0.017717949249573373);
    msg.setSource(60377U);
    msg.setSourceEntity(143U);
    msg.setDestination(62770U);
    msg.setDestinationEntity(82U);
    msg.validity = 54U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.05723518347969703;
    tmp_msg_0.beam_height = 0.4679502132811415;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3855944035598158;

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
    msg.setTimeStamp(0.8299783966149279);
    msg.setSource(11853U);
    msg.setSourceEntity(34U);
    msg.setDestination(37U);
    msg.setDestinationEntity(214U);
    msg.value = 0.25987125076702067;

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
    msg.setTimeStamp(0.796480910593215);
    msg.setSource(19607U);
    msg.setSourceEntity(118U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(228U);
    msg.value = 0.6480563636173738;

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
    msg.setTimeStamp(0.06040740239665521);
    msg.setSource(34411U);
    msg.setSourceEntity(66U);
    msg.setDestination(24495U);
    msg.setDestinationEntity(19U);
    msg.value = 0.17341408564390381;

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
    msg.setTimeStamp(0.2969440431808813);
    msg.setSource(51584U);
    msg.setSourceEntity(184U);
    msg.setDestination(1880U);
    msg.setDestinationEntity(33U);
    msg.value = 0.4727438169710383;

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
    msg.setTimeStamp(0.6537840626415302);
    msg.setSource(33240U);
    msg.setSourceEntity(218U);
    msg.setDestination(24900U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6131656301978002;

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
    msg.setTimeStamp(0.9134919807089845);
    msg.setSource(23443U);
    msg.setSourceEntity(145U);
    msg.setDestination(61277U);
    msg.setDestinationEntity(139U);
    msg.value = 0.298527490377154;

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
    msg.setTimeStamp(0.7233459410001258);
    msg.setSource(53600U);
    msg.setSourceEntity(165U);
    msg.setDestination(53512U);
    msg.setDestinationEntity(33U);
    msg.value = 0.10329476310464536;

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
    msg.setTimeStamp(0.5703901006027475);
    msg.setSource(4383U);
    msg.setSourceEntity(230U);
    msg.setDestination(50372U);
    msg.setDestinationEntity(39U);
    msg.value = 0.6042311827098765;

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
    msg.setTimeStamp(0.41638311794193383);
    msg.setSource(1357U);
    msg.setSourceEntity(40U);
    msg.setDestination(53852U);
    msg.setDestinationEntity(81U);
    msg.value = 0.6560519030284319;

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
    msg.setTimeStamp(0.7904510219962471);
    msg.setSource(24465U);
    msg.setSourceEntity(190U);
    msg.setDestination(55310U);
    msg.setDestinationEntity(142U);
    msg.value = 0.5058947533729282;

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
    msg.setTimeStamp(0.9606503987262099);
    msg.setSource(61890U);
    msg.setSourceEntity(33U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5987792260294099;

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
    msg.setTimeStamp(0.34279759432487633);
    msg.setSource(56179U);
    msg.setSourceEntity(75U);
    msg.setDestination(29728U);
    msg.setDestinationEntity(62U);
    msg.value = 0.09798884865231439;

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
    msg.setTimeStamp(0.4895494190309364);
    msg.setSource(62909U);
    msg.setSourceEntity(34U);
    msg.setDestination(25673U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8035180001721406;

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
    msg.setTimeStamp(0.7774075791389243);
    msg.setSource(26211U);
    msg.setSourceEntity(93U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(108U);
    msg.value = 0.865634143461461;

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
    msg.setTimeStamp(0.08124280152113983);
    msg.setSource(21229U);
    msg.setSourceEntity(40U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(184U);
    msg.value = 0.8288138608142744;

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
    msg.setTimeStamp(0.7153422174960079);
    msg.setSource(3521U);
    msg.setSourceEntity(246U);
    msg.setDestination(11221U);
    msg.setDestinationEntity(118U);
    msg.value = 0.16473124995951094;

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
    msg.setTimeStamp(0.831431672062354);
    msg.setSource(47894U);
    msg.setSourceEntity(181U);
    msg.setDestination(41348U);
    msg.setDestinationEntity(193U);
    msg.value = 0.31655930981028624;

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
    msg.setTimeStamp(0.0099228248630292);
    msg.setSource(1685U);
    msg.setSourceEntity(230U);
    msg.setDestination(33314U);
    msg.setDestinationEntity(81U);
    msg.value = 0.10593008722551545;

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
    msg.setTimeStamp(0.8196908456330093);
    msg.setSource(13212U);
    msg.setSourceEntity(101U);
    msg.setDestination(16884U);
    msg.setDestinationEntity(58U);
    msg.value = 0.8457972443641925;

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
    msg.setTimeStamp(0.31565797328181955);
    msg.setSource(18572U);
    msg.setSourceEntity(128U);
    msg.setDestination(5277U);
    msg.setDestinationEntity(177U);
    msg.value = 0.7432641136579597;

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
    msg.setTimeStamp(0.996314680203951);
    msg.setSource(5155U);
    msg.setSourceEntity(25U);
    msg.setDestination(64148U);
    msg.setDestinationEntity(86U);
    msg.value = 0.9435577499262202;

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
    msg.setTimeStamp(0.05397594590105892);
    msg.setSource(52468U);
    msg.setSourceEntity(60U);
    msg.setDestination(16194U);
    msg.setDestinationEntity(56U);
    msg.value = 0.4545746646001384;

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
    msg.setTimeStamp(0.8252569618974801);
    msg.setSource(31169U);
    msg.setSourceEntity(181U);
    msg.setDestination(31082U);
    msg.setDestinationEntity(192U);
    msg.value = 0.6363449391427;

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
    msg.setTimeStamp(0.6665288171520576);
    msg.setSource(20252U);
    msg.setSourceEntity(15U);
    msg.setDestination(4599U);
    msg.setDestinationEntity(51U);
    msg.value = 0.6851611880667343;

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
    msg.setTimeStamp(0.869766616656567);
    msg.setSource(54942U);
    msg.setSourceEntity(134U);
    msg.setDestination(56794U);
    msg.setDestinationEntity(137U);
    msg.direction = 0.2989306328015051;
    msg.speed = 0.21671049090653605;

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
    msg.setTimeStamp(0.26379340100037096);
    msg.setSource(20778U);
    msg.setSourceEntity(186U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.08099042707231985;
    msg.speed = 0.2696829767114701;

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
    msg.setTimeStamp(0.24504824659858515);
    msg.setSource(24582U);
    msg.setSourceEntity(187U);
    msg.setDestination(23979U);
    msg.setDestinationEntity(103U);
    msg.direction = 0.144946138921501;
    msg.speed = 0.12073082983482386;

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
    msg.setTimeStamp(0.009602977592608974);
    msg.setSource(6989U);
    msg.setSourceEntity(2U);
    msg.setDestination(32453U);
    msg.setDestinationEntity(170U);
    msg.value = 0.06618932964692281;

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
    msg.setTimeStamp(0.7853153572183693);
    msg.setSource(41349U);
    msg.setSourceEntity(88U);
    msg.setDestination(61879U);
    msg.setDestinationEntity(251U);
    msg.value = 0.1695016348755889;

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
    msg.setTimeStamp(0.5681034004285833);
    msg.setSource(59939U);
    msg.setSourceEntity(187U);
    msg.setDestination(56446U);
    msg.setDestinationEntity(32U);
    msg.value = 0.19699028302646737;

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
    msg.setTimeStamp(0.09470875668895229);
    msg.setSource(50197U);
    msg.setSourceEntity(119U);
    msg.setDestination(14497U);
    msg.setDestinationEntity(49U);
    msg.value.assign("QSTXFPHAQTIRBVPJAFWOMXTSEAFKJBJQFCOBNBRPJRLNPTTZISXQJWBGELGPSWYRTPWQUYKMYXRPASYMJQWVODCDNHIKGUAORWBQKLLHDHIYEZIUGVKZDSFQCUEOSCUDZDLRONXSVHJGLXWIDRYDNZPWUNZJIMCERYXVNGNGBVGMDXVMQIHFTULANVEMYGAKLPRCEPVKQIEFTHKFFUACCZZGJOUAKMYLAHCVOZKXWIOWXCT");

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
    msg.setTimeStamp(0.7773685797157526);
    msg.setSource(64365U);
    msg.setSourceEntity(248U);
    msg.setDestination(61753U);
    msg.setDestinationEntity(189U);
    msg.value.assign("JVNNHMLVRBDT");

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
    msg.setTimeStamp(0.7816848793773786);
    msg.setSource(15058U);
    msg.setSourceEntity(80U);
    msg.setDestination(55311U);
    msg.setDestinationEntity(30U);
    msg.value.assign("SEZAIINLJSDXTOJSNQKFDFJBILPLYIPROHNLIDXEKDDEVNQOUCZMHAZVQPSVGABJSMGQBFVUAUMQMRCXUQJYNSHVBTDWOZYCTFWBATZZDLHXYTTTKXEUNFXSYUBICWGQYKEPETCKAKHSABIHSOYYGGONNSKXPRPQKTVWQVWPZWYLMW");

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
    msg.setTimeStamp(0.2761948105740961);
    msg.setSource(63280U);
    msg.setSourceEntity(44U);
    msg.setDestination(30650U);
    msg.setDestinationEntity(201U);
    const char tmp_msg_0[] = {-80, -55, 54, -71, 109, -98, -58, 99, 122, -26, -80, -42, 7, -45, -123, -98, -122, -121, -118, 124, -16, -89, -56, -48, -94, 92, 64, 111, 10, 8, 119, -67, 36, -17, -59, -88, -107, 88, 5, 59, -38, 26, -91, -66, 46, -43, 123, -65, -119, -93, 91, -10, -107, 64, -112, 11, 28, -37, 118, -33, 38, -87, -33, 105, -75, 89, 42, 49, 22, 106, 68, 75, 100, -2, 5, -89, 2, 5, -71, -99, -75, 49, -38, 57, 47, -96, 11, 8, 123, 4, 76, 67, -63, -75, -126, 63, -18, 106, 73, 99, -30, 46, -122, 29, -36, -1, 113, 116, 30, 3, -85, -21, 100, -10, -96, -56, 113, 78, 107, -56, -29, 36, 6, -22, -43, 103, -82, -85, 104, -117, 2, -5, -25, -113, 62, 17, 10, -100, 49};
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
    msg.setTimeStamp(0.3973126565824745);
    msg.setSource(4629U);
    msg.setSourceEntity(100U);
    msg.setDestination(1051U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {-20, -99, -105, 65, 104, -47, 6, -71, -96, -106, 1, -107, 79, -19, -79, 109, -117, 89, 97, 57, -1, 36, -93, -87, -19, 28, 98, 33, 21, -73, -9, 33, 95, -31, -87, 103, -46, -90, -102, -23, -21, 86, 92, -5, 32, 2, -40, 95, 0, -123, -19, -68, -36, -81, -4, 81, 51, -58, -41, 51, -106, -60, 106, 116, 3, 115, -44, 112, 99, -57, -96, -74, 88, -71, 87, 43, -23, -39, -25, 86, -107, -61, -79, 120, -3, 118, 12, 40, 44, 67, 8, 65, 1, 121, 60, -112, -90, 34, -16, -27, -89, 68, 111, 43, -78, -12, 1, -26, -101, 117, -35, -77, -110, 102, -21, 38, 90, -70, 29, 2, -122, -103, 56, -49, -111, 21, -96, 76, 36, 51, 116, -20, 99, 56, 125, 47, 42, 50, -92, -56, -75, -58, -48, 17, -64, -92, 40, 118, -102, -107, 122, 7, -40, -27, -91, -31, -100, 53, -14, 14, 83, -118, 73, -21, -36, 89, -17, -99, 116, 19, 11, -46, 48, -37, 104, -39, -76, 72, -106, -11, -27, -77, -108, -26, 11, -2, -112, 23, 84, -66, -55, -17, -83, -93, -99, 27, 8, 74, 97, 70, -98, -78, 42, 92, 39, 48, 52, 91, 83, -89, 88, -121, 80, 12, -75, 78, 84, -78, 69, 28, -114, 71, -82, 97, 10, -100, 116, 71, -110, -79, -42, 63, 126, 37, -94, -82, -32, -84, -94, 99, 69};
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
    msg.setTimeStamp(0.22136832977708243);
    msg.setSource(28984U);
    msg.setSourceEntity(4U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(4U);
    const char tmp_msg_0[] = {-94, -39, -3, 94, -65, 69, -58, -98, 75, 17, 92, -32, 90, 97, 79, -104, -26, 100, 59, 30, -8, -119, -20, 48, 46, -6, -14, 10, -7, -67, 68, -4, -18, -125, 41, 40, 26, 107, -88, -70, -69, -89, -41, -5, -79, 27, -13, 109, 7, -102, -43, 53, 64, -71, -58, -48, -4, -68, -42, 124, -88, -68, -5, -73, -33, -6, -128, -83, -46, -4, 74, 103, -52, -63, 7, -20, -11, -32, 56, -18, -114, -104, -53, 68, 84, -22, 110, -99, -20, -95, 47, -85, 108, 123, 17, -50, -107, 52, 20, 100, 19, -32, 57, -14, -97, -96, -26, -116, -23, 13, 77, 117, -127, -63, 79, 23, -65, -2, -69, -93, 104, 113, -8, -95, -29, 108, 110, 84, -85, 24, 30, 50, -121, -115, -39, 41, -55, 91, 125, -92, 125, 85, -83, 57, -73, 79, 85, 50, 65, 18, 89, -65, -102, 24, 1, -109, 52, 120, -10, -72, 46, 95, -11, -111, 61, -26, -5, -65, -40, 8, 33, 23, 33, -11, -72, -58, -26, -118, -50, 11, -65, -4, 45, -30, -36, 62, -63, -23, 96, 39, -15, 122, -126, 94, -88, 78, 1, -103, -68};
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
    msg.setTimeStamp(0.7791829676409002);
    msg.setSource(37325U);
    msg.setSourceEntity(42U);
    msg.setDestination(11664U);
    msg.setDestinationEntity(74U);
    msg.frequency = 959928138U;
    msg.min_range = 13292U;
    msg.max_range = 49555U;

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
    msg.setTimeStamp(0.20149814626876617);
    msg.setSource(12856U);
    msg.setSourceEntity(88U);
    msg.setDestination(57937U);
    msg.setDestinationEntity(236U);
    msg.frequency = 1384725819U;
    msg.min_range = 55194U;
    msg.max_range = 9025U;

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
    msg.setTimeStamp(0.864492520860754);
    msg.setSource(26474U);
    msg.setSourceEntity(31U);
    msg.setDestination(44971U);
    msg.setDestinationEntity(160U);
    msg.frequency = 2615458508U;
    msg.min_range = 24687U;
    msg.max_range = 63866U;

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
    msg.setTimeStamp(0.14659761811965555);
    msg.setSource(14254U);
    msg.setSourceEntity(185U);
    msg.setDestination(19290U);
    msg.setDestinationEntity(205U);
    msg.type = 137U;
    msg.frequency = 3328303786U;
    msg.min_range = 1560U;
    msg.max_range = 30105U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.18177947919470494;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.12323239508645034;
    tmp_msg_0.beam_height = 0.12874357032534134;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {51, -77, -62, -124, 110, 91, 44, 45, -87, -31, 19, 115, -91, -9, -105, 106, -108, 125, 5, -58, -2, -90, 75, 117, -116, -11, 109, -48, -63, -93, 28, 66, 59, -58, -78, 71, 58, -34, 41, 26, -81, -56, -87, -121, -101, -49, -94, 96, -93, 23, -110, 100, 60, 110, 76, 93, 41, 84, -112, -55, -104, 34, 40, -113, -59, 7, 40, -107, 14, -103, 37, 80, 52, -99, 97, 112, 51, 105, -90, -51, 42, -10, 60, -20, 57, -40, 117, -39, -103, 8, -124, -63, 58, -35, -45, -127, -112, -86, 116, -13, -101, 66, -3, -50, -15, -10, -28, 122, -58, 107, 32, -65, -83, -26, -24, 6, -3, 41, 123, -81, -62, -62};
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
    msg.setTimeStamp(0.5893123518285222);
    msg.setSource(12216U);
    msg.setSourceEntity(121U);
    msg.setDestination(40378U);
    msg.setDestinationEntity(185U);
    msg.type = 30U;
    msg.frequency = 83795156U;
    msg.min_range = 62223U;
    msg.max_range = 62637U;
    msg.bits_per_point = 115U;
    msg.scale_factor = 0.4532127802197825;
    const char tmp_msg_0[] = {-62, -85, 0, -5, -39, 43, -24, -10, -74, -72, -6, 31, -57, 66, -54, 116, 18, 61, -45, -41, -59, 29, -63, 60, -122, -80, -86, -97, -36, 55, 49, -34, -39, -44, -33, -24, 60, 18, 52, 60, -102, -22, 27, 119, -56, -93, 49, -26, -50, -101, -54, 36, -44, 80, 107, -98, -65, -6, 53, -17, -126, -57, -119, -60, -94, 60, -85, 6, -39, 21, -31, 64, 101, 31, -123, -41, -88, 77, -5, 105, 101, -119, 54, -49, -6, 76};
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
    msg.setTimeStamp(0.7162282167737715);
    msg.setSource(37605U);
    msg.setSourceEntity(125U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(163U);
    msg.type = 68U;
    msg.frequency = 1715054033U;
    msg.min_range = 12949U;
    msg.max_range = 46736U;
    msg.bits_per_point = 246U;
    msg.scale_factor = 0.12951878023514063;
    const char tmp_msg_0[] = {9, 85, 73, 99, 58, 67, -34, -22, 61, 104, -48, -84, -92, -30, 116, 82, -118, 110, 42};
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
    msg.setTimeStamp(0.025718196208449506);
    msg.setSource(37473U);
    msg.setSourceEntity(63U);
    msg.setDestination(48029U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.45188761019247603);
    msg.setSource(60021U);
    msg.setSourceEntity(98U);
    msg.setDestination(39882U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.7236721749611151);
    msg.setSource(43079U);
    msg.setSourceEntity(188U);
    msg.setDestination(16001U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.5739108027517463);
    msg.setSource(23428U);
    msg.setSourceEntity(127U);
    msg.setDestination(36274U);
    msg.setDestinationEntity(16U);
    msg.op = 105U;

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
    msg.setTimeStamp(0.6517530749125355);
    msg.setSource(51807U);
    msg.setSourceEntity(159U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(252U);
    msg.op = 114U;

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
    msg.setTimeStamp(0.7309443773674628);
    msg.setSource(53389U);
    msg.setSourceEntity(130U);
    msg.setDestination(65059U);
    msg.setDestinationEntity(46U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.3597944866706916);
    msg.setSource(63795U);
    msg.setSourceEntity(57U);
    msg.setDestination(53370U);
    msg.setDestinationEntity(149U);
    msg.value = 0.7964348962722498;
    msg.confidence = 0.9557791305336094;
    msg.opmodes.assign("BNRQPUJRWSYFZHXE");

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
    msg.setTimeStamp(0.8931671133087308);
    msg.setSource(46200U);
    msg.setSourceEntity(180U);
    msg.setDestination(1502U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5297952638168543;
    msg.confidence = 0.012180973679609353;
    msg.opmodes.assign("UWYWHWSLWDGILTWTELFTJHQCJNGTDJWPMYMJYZCTNKPUKEPWNQGMEFDBRTSLIPRGPRMUGVGKBZFBKNDACGVNLIHWCYECNEEMHYUJNOVMYKPNFXHASBGRIPNHLUTRMBVQIOUVZHCICZFOAKTXYRJAPDYDMLVBLJMCQRZQXSICVJZAOOLQX");

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
    msg.setTimeStamp(0.7371848371740033);
    msg.setSource(8738U);
    msg.setSourceEntity(62U);
    msg.setDestination(44002U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9424141845395608;
    msg.confidence = 0.6056128865061844;
    msg.opmodes.assign("FYMDNERRPIRVATCWZWZKSDQBVNIGWGDVDVJDEVMMFEXZNXJFRRBDNCFXULIYEOSPOTVSXQWHEAPRQDSHFHHHUTJBOTMKQAATGGCQCKHXYHABOPLLYOCILVKLNPBYZGEFUCBCXUAFMIGSZWOIPJHOKUUAJWIGPWQTOUWLFEFJLMJBHNQXYSWGMKAUMLXXJNYDZSJPTLIFUTQTHRIZCIYEKKGMVWEYVLCNRTDRQQKAZ");

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
    msg.setTimeStamp(0.33544433459919054);
    msg.setSource(19414U);
    msg.setSourceEntity(183U);
    msg.setDestination(30548U);
    msg.setDestinationEntity(194U);
    msg.itow = 3579956212U;
    msg.lat = 0.4955372702374716;
    msg.lon = 0.5855242609337927;
    msg.height_ell = 0.91641336370235;
    msg.height_sea = 0.6211623966230502;
    msg.hacc = 0.2992177977635365;
    msg.vacc = 0.25280726256524977;
    msg.vel_n = 0.8101589830129355;
    msg.vel_e = 0.9915198909596182;
    msg.vel_d = 0.29681598710850654;
    msg.speed = 0.33522143258257;
    msg.gspeed = 0.2626350719117091;
    msg.heading = 0.12320006988056553;
    msg.sacc = 0.05763748524335066;
    msg.cacc = 0.8022413858272753;

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
    msg.setTimeStamp(0.2011298209033422);
    msg.setSource(25106U);
    msg.setSourceEntity(245U);
    msg.setDestination(4673U);
    msg.setDestinationEntity(223U);
    msg.itow = 2041635093U;
    msg.lat = 0.4925272908414794;
    msg.lon = 0.5282660296893357;
    msg.height_ell = 0.7076220191405054;
    msg.height_sea = 0.05625145917002694;
    msg.hacc = 0.3083653308342711;
    msg.vacc = 0.6258226938310489;
    msg.vel_n = 0.5903661034088489;
    msg.vel_e = 0.6247986705135319;
    msg.vel_d = 0.3035564862358233;
    msg.speed = 0.9549613759181941;
    msg.gspeed = 0.8271819734963233;
    msg.heading = 0.5918336276172451;
    msg.sacc = 0.0946945374516236;
    msg.cacc = 0.4143838433766085;

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
    msg.setTimeStamp(0.753127580509201);
    msg.setSource(38317U);
    msg.setSourceEntity(185U);
    msg.setDestination(62264U);
    msg.setDestinationEntity(162U);
    msg.itow = 1752448023U;
    msg.lat = 0.5844775561397431;
    msg.lon = 0.4822989943792223;
    msg.height_ell = 0.895305483742248;
    msg.height_sea = 0.14618024048842382;
    msg.hacc = 0.06587674079811645;
    msg.vacc = 0.5160494977470262;
    msg.vel_n = 0.42440660498930716;
    msg.vel_e = 0.49947453227415806;
    msg.vel_d = 0.33509075130020183;
    msg.speed = 0.47475872902497696;
    msg.gspeed = 0.8277049616186657;
    msg.heading = 0.4118714751917919;
    msg.sacc = 0.3447022156524141;
    msg.cacc = 0.7641340850159357;

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
    msg.setTimeStamp(0.7232819664581057);
    msg.setSource(21089U);
    msg.setSourceEntity(81U);
    msg.setDestination(23763U);
    msg.setDestinationEntity(115U);
    msg.id = 112U;
    msg.value = 0.3412035887659205;

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
    msg.setTimeStamp(0.6284005617999714);
    msg.setSource(34336U);
    msg.setSourceEntity(110U);
    msg.setDestination(14395U);
    msg.setDestinationEntity(143U);
    msg.id = 39U;
    msg.value = 0.42521421219995337;

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
    msg.setTimeStamp(0.0005138630848500192);
    msg.setSource(39673U);
    msg.setSourceEntity(124U);
    msg.setDestination(20849U);
    msg.setDestinationEntity(75U);
    msg.id = 91U;
    msg.value = 0.40233724951809646;

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
    msg.setTimeStamp(0.9816557615474804);
    msg.setSource(19301U);
    msg.setSourceEntity(168U);
    msg.setDestination(58081U);
    msg.setDestinationEntity(122U);
    msg.x = 0.04334145085691865;
    msg.y = 0.7160830354601208;
    msg.z = 0.14349169934152572;
    msg.phi = 0.7893019655784188;
    msg.theta = 0.20585674733644976;
    msg.psi = 0.708491860492503;

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
    msg.setTimeStamp(0.2059406825055139);
    msg.setSource(17986U);
    msg.setSourceEntity(228U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(26U);
    msg.x = 0.5857657864292241;
    msg.y = 0.5781723268744088;
    msg.z = 0.2488066489923786;
    msg.phi = 0.0709182992771511;
    msg.theta = 0.8124834331570011;
    msg.psi = 0.6085953689941557;

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
    msg.setTimeStamp(0.5927423030684486);
    msg.setSource(51574U);
    msg.setSourceEntity(222U);
    msg.setDestination(62352U);
    msg.setDestinationEntity(196U);
    msg.x = 0.36229724007893893;
    msg.y = 0.3055115358759256;
    msg.z = 0.12713186634583595;
    msg.phi = 0.9386876625762663;
    msg.theta = 0.3208786132603114;
    msg.psi = 0.727170039193094;

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
    msg.setTimeStamp(0.6072304130378151);
    msg.setSource(45525U);
    msg.setSourceEntity(26U);
    msg.setDestination(47568U);
    msg.setDestinationEntity(193U);
    msg.beam_width = 0.5748464367244562;
    msg.beam_height = 0.44684340663810274;

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
    msg.setTimeStamp(0.20598044092644174);
    msg.setSource(22420U);
    msg.setSourceEntity(233U);
    msg.setDestination(1693U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.8228771552714133;
    msg.beam_height = 0.37967139139344874;

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
    msg.setTimeStamp(0.06768409926642838);
    msg.setSource(45279U);
    msg.setSourceEntity(6U);
    msg.setDestination(60281U);
    msg.setDestinationEntity(72U);
    msg.beam_width = 0.43742081517252207;
    msg.beam_height = 0.35232692516587205;

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
    msg.setTimeStamp(0.44395481689091754);
    msg.setSource(41499U);
    msg.setSourceEntity(217U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(86U);
    msg.sane = 38U;

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
    msg.setTimeStamp(0.34925201853221244);
    msg.setSource(50554U);
    msg.setSourceEntity(180U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(124U);
    msg.sane = 38U;

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
    msg.setTimeStamp(0.9136625695873952);
    msg.setSource(60106U);
    msg.setSourceEntity(200U);
    msg.setDestination(10716U);
    msg.setDestinationEntity(23U);
    msg.sane = 59U;

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
    msg.setTimeStamp(0.6267931829442746);
    msg.setSource(12241U);
    msg.setSourceEntity(224U);
    msg.setDestination(8573U);
    msg.setDestinationEntity(145U);
    msg.id = 28U;
    msg.zoom = 149U;
    msg.action = 146U;

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
    msg.setTimeStamp(0.8898746585217253);
    msg.setSource(57590U);
    msg.setSourceEntity(100U);
    msg.setDestination(48050U);
    msg.setDestinationEntity(168U);
    msg.id = 61U;
    msg.zoom = 196U;
    msg.action = 179U;

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
    msg.setTimeStamp(0.6635919779278854);
    msg.setSource(56258U);
    msg.setSourceEntity(122U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(148U);
    msg.id = 153U;
    msg.zoom = 143U;
    msg.action = 243U;

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
    msg.setTimeStamp(0.00586052489170541);
    msg.setSource(23828U);
    msg.setSourceEntity(206U);
    msg.setDestination(43210U);
    msg.setDestinationEntity(238U);
    msg.id = 178U;
    msg.value = 0.9192011749588114;

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
    msg.setTimeStamp(0.7460435642151377);
    msg.setSource(47419U);
    msg.setSourceEntity(44U);
    msg.setDestination(17170U);
    msg.setDestinationEntity(117U);
    msg.id = 51U;
    msg.value = 0.9587421107839144;

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
    msg.setTimeStamp(0.786052991302023);
    msg.setSource(17132U);
    msg.setSourceEntity(6U);
    msg.setDestination(56508U);
    msg.setDestinationEntity(139U);
    msg.id = 101U;
    msg.value = 0.5645824323262985;

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
    msg.setTimeStamp(0.005180670685219102);
    msg.setSource(64244U);
    msg.setSourceEntity(236U);
    msg.setDestination(33991U);
    msg.setDestinationEntity(13U);
    msg.id = 134U;
    msg.value = 0.03956688168787181;

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
    msg.setTimeStamp(0.6911391983899445);
    msg.setSource(6306U);
    msg.setSourceEntity(131U);
    msg.setDestination(61868U);
    msg.setDestinationEntity(218U);
    msg.id = 140U;
    msg.value = 0.25937066458640357;

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
    msg.setTimeStamp(0.919969769858112);
    msg.setSource(48225U);
    msg.setSourceEntity(71U);
    msg.setDestination(31437U);
    msg.setDestinationEntity(130U);
    msg.id = 173U;
    msg.value = 0.41528505364805746;

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
    msg.setTimeStamp(0.15980337786768228);
    msg.setSource(36272U);
    msg.setSourceEntity(116U);
    msg.setDestination(61076U);
    msg.setDestinationEntity(77U);
    msg.id = 61U;
    msg.angle = 0.7136279496774857;

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
    msg.setTimeStamp(0.6000597663452444);
    msg.setSource(5802U);
    msg.setSourceEntity(144U);
    msg.setDestination(59076U);
    msg.setDestinationEntity(214U);
    msg.id = 159U;
    msg.angle = 0.2831795563411227;

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
    msg.setTimeStamp(0.03888066707936788);
    msg.setSource(48221U);
    msg.setSourceEntity(86U);
    msg.setDestination(739U);
    msg.setDestinationEntity(160U);
    msg.id = 221U;
    msg.angle = 0.26993157582849403;

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
    msg.setTimeStamp(0.8891998842870646);
    msg.setSource(64163U);
    msg.setSourceEntity(10U);
    msg.setDestination(17667U);
    msg.setDestinationEntity(43U);
    msg.op = 5U;
    msg.actions.assign("XNZOWLTYVGBJURKJVRPHYRIHAXXFVOVHQNTOLGPPZJEBZYGKHUCURSQBIZYOVKYKSYJXVSRCEFCLOFXSHTAAUTUWS");

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
    msg.setTimeStamp(0.2669974058965421);
    msg.setSource(69U);
    msg.setSourceEntity(85U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(51U);
    msg.op = 134U;
    msg.actions.assign("JPVFUHCPCEMJBXTXTSBUJQOWLJNTBZOQBQUYVWEXLMKMCSQDVAXTYSOWLEKNLSEFIPANIDAEDCDJGBGZLLHIKS");

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
    msg.setTimeStamp(0.6947070206434787);
    msg.setSource(38795U);
    msg.setSourceEntity(242U);
    msg.setDestination(6826U);
    msg.setDestinationEntity(135U);
    msg.op = 213U;
    msg.actions.assign("FEFTEKLQRSRPKMABTMIQSJGYEUEQWCBRRCNNSXAMQRUYTAUDUQBZUZHWDGLMCRVAYMIHDPJODZIAJVKSOPYDPEXQNVTKDCMVNTAGPWUWXCHUMINZHLKIVDXQFFOGXFUYSWBTBPFAAHOIFJCYNZWZXOXHFVLWSSTFKVQOSEFMNZHNI");

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
    msg.setTimeStamp(0.7531901907233347);
    msg.setSource(39634U);
    msg.setSourceEntity(81U);
    msg.setDestination(7946U);
    msg.setDestinationEntity(15U);
    msg.actions.assign("ZYXIVIBPIGMATTSGWMNXLPLPPQPFFMMNKYLGOFODOQMBQWOIGFLDJUAQVKHWTMGRKHYZFW");

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
    msg.setTimeStamp(0.7679573206736885);
    msg.setSource(36510U);
    msg.setSourceEntity(91U);
    msg.setDestination(13139U);
    msg.setDestinationEntity(200U);
    msg.actions.assign("RUAUIWQDNELDWEAMEAIQRSPPNDWIOWBYQTWUZDJBBAEBWVUQZPNFKCBCCRBVGERYJSXMNYQSEULSDTDOYEJDWUPOLKXXLKTHYGHXJFZOJXQGMAWITMLFRKIQQSOCEVKSBVLPTUAAJIOHYXHMVGGAIRILXSETZCKNNV");

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
    msg.setTimeStamp(0.8699857271672141);
    msg.setSource(63545U);
    msg.setSourceEntity(59U);
    msg.setDestination(5155U);
    msg.setDestinationEntity(17U);
    msg.actions.assign("MYLCUKJVEFJCFPSHWZJVAMOSTGJHKNFVMQPXEWSUUINZODGCQCPPMWXVOSGLKXNRLGRGIIFYONAHXHHQVAFQKBTXYLSDFJCSFOTONBEYGYOXZMLCIQVIKKGIUQHXQCAJUVUQDXYEUBBTRELUVJWDMYLWABOFVLWRNDRCLMGYQBBITAWHOJPUSKDZZNRDPFZKSPXINPASTEHYQCZTBKIZZNOLDEWHBMHERAXBW");

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
    msg.setTimeStamp(0.13660615889496364);
    msg.setSource(1755U);
    msg.setSourceEntity(139U);
    msg.setDestination(19593U);
    msg.setDestinationEntity(251U);
    msg.button = 98U;
    msg.value = 47U;

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
    msg.setTimeStamp(0.619398877017664);
    msg.setSource(61990U);
    msg.setSourceEntity(140U);
    msg.setDestination(31224U);
    msg.setDestinationEntity(2U);
    msg.button = 14U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.3805822427890547);
    msg.setSource(8869U);
    msg.setSourceEntity(216U);
    msg.setDestination(57642U);
    msg.setDestinationEntity(165U);
    msg.button = 154U;
    msg.value = 251U;

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
    msg.setTimeStamp(0.8825298338130398);
    msg.setSource(59150U);
    msg.setSourceEntity(170U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(250U);
    msg.op = 203U;
    msg.text.assign("MLZLRUQWESJBCNGLJRCBHFQSGIHKATSJAFVDNHEZIXUJSODXOMZEFZQRRBMEHFDSBBGLTAA");

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
    msg.setTimeStamp(0.6255457042167828);
    msg.setSource(45075U);
    msg.setSourceEntity(54U);
    msg.setDestination(47576U);
    msg.setDestinationEntity(43U);
    msg.op = 184U;
    msg.text.assign("MIHVNPVWTIVCUACQZMSKXDFNMCNKEXBNILWPVYQBILGBAOJPRQOGVIEKQEXDOESCRAWFOBXQLVYSFRGWHCZSFSBHWAWGYGHXJRQQ");

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
    msg.setTimeStamp(0.03923443894330303);
    msg.setSource(27995U);
    msg.setSourceEntity(222U);
    msg.setDestination(1447U);
    msg.setDestinationEntity(140U);
    msg.op = 46U;
    msg.text.assign("LIRBYSWACPOYOEJKWFVZLKGJJPHKNCSIWMQKVOJBKPEAY");

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
    msg.setTimeStamp(0.16860117368817917);
    msg.setSource(45189U);
    msg.setSourceEntity(168U);
    msg.setDestination(55925U);
    msg.setDestinationEntity(193U);
    msg.op = 58U;
    msg.time_remain = 0.22723605271761227;
    msg.sched_time = 0.20315242683063195;

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
    msg.setTimeStamp(0.19246121973586572);
    msg.setSource(63672U);
    msg.setSourceEntity(62U);
    msg.setDestination(47240U);
    msg.setDestinationEntity(74U);
    msg.op = 85U;
    msg.time_remain = 0.8816995332276147;
    msg.sched_time = 0.7558434238588185;

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
    msg.setTimeStamp(0.5889548722135135);
    msg.setSource(59128U);
    msg.setSourceEntity(137U);
    msg.setDestination(29376U);
    msg.setDestinationEntity(113U);
    msg.op = 198U;
    msg.time_remain = 0.23027132964092556;
    msg.sched_time = 0.730086361324846;

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
    msg.setTimeStamp(0.27914055202731625);
    msg.setSource(28168U);
    msg.setSourceEntity(85U);
    msg.setDestination(61318U);
    msg.setDestinationEntity(1U);
    msg.name.assign("PAMHIIFJDULUCWQVNTWFMMLRRSBWERX");
    msg.op = 67U;
    msg.sched_time = 0.8642316969935175;

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
    msg.setTimeStamp(0.16287609710133544);
    msg.setSource(27952U);
    msg.setSourceEntity(133U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(57U);
    msg.name.assign("JYOCZERBORAEXPGMVJHMIHVLYNUBDIBSTDRXMVUDRNEDFOGDMKPSQGENZJEJDCRGXIUSLQGOEZACWBTWOCYPMOFQCHIBTMFAKOLJPSPONHQARXFUTKDTHCILWSWNARIQJPRZTIKUUBZZGXKXRHEOWWKAUHHCKNXCRVJACGFLSJWOSZNDNJNMUQBYLBMGBIZAYVVSYMVFQXCLTVUHKYHXYTTVYLWVFMK");
    msg.op = 20U;
    msg.sched_time = 0.44903636020037685;

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
    msg.setTimeStamp(0.8801795639992217);
    msg.setSource(50987U);
    msg.setSourceEntity(46U);
    msg.setDestination(43289U);
    msg.setDestinationEntity(48U);
    msg.name.assign("ZCKZLRRHPCFOQNIPLKSZHCLNIMRPRHZBRZAHFIYSQSYLKYRAKSNUESATRQLJPSCENGUORQLNMUZOVSFXGNWVBBIEWPXAFJOLELPEXWVSYVKIRJITKUYTOWGPNNVAFVPDBXVFJKGGITGVESTOEVHWOMBICDKMFPYQWUXMEMOQFDFGJAXKAGLGYCUHJTCDUXLJGMDWDZHCMDRE");
    msg.op = 130U;
    msg.sched_time = 0.42369457324627624;

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
    msg.setTimeStamp(0.8864713275103452);
    msg.setSource(27762U);
    msg.setSourceEntity(143U);
    msg.setDestination(31210U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.7978846998681485);
    msg.setSource(59908U);
    msg.setSourceEntity(74U);
    msg.setDestination(24736U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.4977819162789334);
    msg.setSource(14916U);
    msg.setSourceEntity(213U);
    msg.setDestination(8315U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.7253253566175917);
    msg.setSource(2505U);
    msg.setSourceEntity(162U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(244U);
    msg.name.assign("UJJVZWEOVNSBKPRCOVEWOCUMVYUYEGEHDCNJWXCKPNVLEWRJBBRKKRIWXYLIQHQDOZORYQEXDNFOTJHQHQUXSYSTNKOL");
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
    msg.setTimeStamp(0.8885854845743248);
    msg.setSource(55804U);
    msg.setSourceEntity(141U);
    msg.setDestination(1676U);
    msg.setDestinationEntity(96U);
    msg.name.assign("NKMUABUHVPZKOCPZHPAXNBRUWQZSXPLDWKLGHZSXQJWNCAAEHWXMINBAGGYTBUPTTVSTVVUCWKDVTLYFPGEYI");
    msg.state = 95U;

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
    msg.setTimeStamp(0.7729380873568426);
    msg.setSource(22607U);
    msg.setSourceEntity(77U);
    msg.setDestination(7949U);
    msg.setDestinationEntity(191U);
    msg.name.assign("MOWVQQPXFUPCHJNHRDGNLRGEIHTKRFZCGMDEVHZKJDFZCGQVTFLRENGVUOAOAQXYNJESFTYSJSAJLVNTWZCOLQNVYHWXWSQXSOYWFRFTUPGEJVGCPRVZYJLKAWDCJTPBUIIJOHNWKAISQBFZXALOHRKWGAXDZMIBE");
    msg.state = 32U;

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
    msg.setTimeStamp(0.7265662113335808);
    msg.setSource(22948U);
    msg.setSourceEntity(6U);
    msg.setDestination(17458U);
    msg.setDestinationEntity(161U);
    msg.name.assign("DAEYPRIWFZTQVHXXRTGHPJDQPGGYKJSZNQCVKSCANBKFNJMKVLFPSI");
    msg.value = 131U;

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
    msg.setTimeStamp(0.6371950130299643);
    msg.setSource(20479U);
    msg.setSourceEntity(171U);
    msg.setDestination(49135U);
    msg.setDestinationEntity(8U);
    msg.name.assign("LOVMKAAYQXOECIPODUITZYSNVAWVRGNZFWIXFMDJHUWUFBSYNDNISHUOBZFWERBUDNIHFZBJQBJKWQWGEMYLNGVHZGRAPUJHCKJYGEDZRHLJTMUSXDNKQCFQBYXPGCLVTOHTELSQTLRAZZIUKHNINARSXY");
    msg.value = 199U;

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
    msg.setTimeStamp(0.07748901231844874);
    msg.setSource(57697U);
    msg.setSourceEntity(113U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(132U);
    msg.name.assign("SNRYMMAAZKXYAPKOPCHYTUQMBQZHWJNPJIBBTEVVGPULFLXQOFROJTRGHGNCCTGDZEIRCGSDDZIMWVFEHNIBYXGWHMVFFEOBGITEEAVYYLVEZHWZHXFWZAFWSSNVDFPNQOCERTULCKNZGTCJBANPQKTRARLMEDIYXPODXWDHWBUTWADKUOUGKUDLXWQZSQRGPURMJVLLOSUQJSCXPMBYQYSTHBHNXILCEVJSARL");
    msg.value = 0U;

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
    msg.setTimeStamp(0.012562187380583567);
    msg.setSource(27255U);
    msg.setSourceEntity(238U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(94U);
    msg.name.assign("QTLYFULJEQPNTNJIPFATZVHAQICRPZGNKQTKCYWQYAQND");

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
    msg.setTimeStamp(0.23747663331317692);
    msg.setSource(50465U);
    msg.setSourceEntity(87U);
    msg.setDestination(51440U);
    msg.setDestinationEntity(61U);
    msg.name.assign("BETXKYTPMHRQBSANPPHSCSCCYKYXMCTNTENFVALSVFLIAYPDXUOMRGHJNXXEIFWTRUHDMSNWZNBKJOMMRIOVTLULZFMASIKCMHEC");

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
    msg.setTimeStamp(0.13483769007468172);
    msg.setSource(9320U);
    msg.setSourceEntity(78U);
    msg.setDestination(4190U);
    msg.setDestinationEntity(146U);
    msg.name.assign("FSRWXUHYCZSECMRLOADBHBUAWKMBVPZVEAUVGLGXUOPJNLSMFTNIRVQUTDEVIGHDEMTZYKLZSKZXXSWNPDOJFAFDVEIDILBTAHUMOQDRQBGRSUKOJGGRJFKLGSUOCGWAOYQJPSEWPNVKBBATDXVHCLXKPPFTKFINCZLTTXBQMYMHDOZCGFNRYJIFOEAHPKHQWVOTLQCYNNURHAXJHVJZWSZMJY");

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
    msg.setTimeStamp(0.15919950716907016);
    msg.setSource(35095U);
    msg.setSourceEntity(119U);
    msg.setDestination(31312U);
    msg.setDestinationEntity(82U);
    msg.name.assign("XCJDIUMCXGNHGPIHABPXUVCBMUGTDMWYAFDQHMLHGBVJFJDEGWFOVFYTQWKYGHBMFMZTZBAILPRCKMYCRBJMWIHPDWIRJFONAIGPWJQROHFSKEEBVIYCEWVUMONNSKKUOJN");
    msg.value = 148U;

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
    msg.setTimeStamp(0.47685849338651354);
    msg.setSource(43061U);
    msg.setSourceEntity(68U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(16U);
    msg.name.assign("QJUJERGTKOLRXVWNPLQIHULOMH");
    msg.value = 233U;

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
    msg.setTimeStamp(0.3900613018515654);
    msg.setSource(15968U);
    msg.setSourceEntity(132U);
    msg.setDestination(60251U);
    msg.setDestinationEntity(117U);
    msg.name.assign("ZLEHRUMXFWZOYDOBAPDDYQJQTHENDNYMSXBNTGKHRSOVFSVZROAMXLEZRMJTVYQZRMYKMXOJKUXPNLMUPTYDVLJWIKNGCIKHNXGJRMXEFSGPIFOGGDHEAIBZJWGPJKHIYZHFCYOHYLBZUNTHHPERTTYVBAUQISCFAPPNITDFUGZRKCQWVQMDSAEIOWWBAQLBWXCPVEWRNCEBSGKFISTAPQKABUOLQASUFXBDVLRZOWITJVUSG");
    msg.value = 41U;

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
    msg.setTimeStamp(0.8266902159913848);
    msg.setSource(51413U);
    msg.setSourceEntity(192U);
    msg.setDestination(37403U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.2637275986728843;
    msg.lon = 0.06626859864085288;
    msg.height = 0.16648291937379234;
    msg.x = 0.4058280696661225;
    msg.y = 0.7554644403162548;
    msg.z = 0.7320003835147588;
    msg.phi = 0.06268623128614781;
    msg.theta = 0.9762822126514599;
    msg.psi = 0.08439262683967375;
    msg.u = 0.9630232095123508;
    msg.v = 0.6396306306197904;
    msg.w = 0.3570638909677101;
    msg.vx = 0.07683453819938524;
    msg.vy = 0.7069451872381639;
    msg.vz = 0.7067369989285835;
    msg.p = 0.11338100111213734;
    msg.q = 0.6218522292549576;
    msg.r = 0.2717405677062128;
    msg.depth = 0.6690195160099531;
    msg.alt = 0.3101756361198309;

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
    msg.setTimeStamp(0.8581525145140338);
    msg.setSource(41875U);
    msg.setSourceEntity(86U);
    msg.setDestination(59743U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.5778604334802244;
    msg.lon = 0.4077595842960928;
    msg.height = 0.6206113024922812;
    msg.x = 0.6468826206816684;
    msg.y = 0.5102549003865664;
    msg.z = 0.5762018904144981;
    msg.phi = 0.6805285811540056;
    msg.theta = 0.4174676259152309;
    msg.psi = 0.4942481902657818;
    msg.u = 0.8355220711118391;
    msg.v = 0.43831995450667194;
    msg.w = 0.6805422220873721;
    msg.vx = 0.8763953268000954;
    msg.vy = 0.5072671364016046;
    msg.vz = 0.6888542918123665;
    msg.p = 0.9783190257205179;
    msg.q = 0.9670296347257176;
    msg.r = 0.703930143502052;
    msg.depth = 0.23056417963556464;
    msg.alt = 0.5333536522468065;

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
    msg.setTimeStamp(0.5545644224509866);
    msg.setSource(8417U);
    msg.setSourceEntity(188U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.6061604436165432;
    msg.lon = 0.8574968221008101;
    msg.height = 0.17294592188468483;
    msg.x = 0.979841726167249;
    msg.y = 0.8036100952921061;
    msg.z = 0.9820543112631417;
    msg.phi = 0.3046828017920603;
    msg.theta = 0.6506258958628051;
    msg.psi = 0.5469740967460933;
    msg.u = 0.528536809127436;
    msg.v = 0.13608187394293247;
    msg.w = 0.8013137145799942;
    msg.vx = 0.024252536284925186;
    msg.vy = 0.05643304568393159;
    msg.vz = 0.32813974751207187;
    msg.p = 0.006630230252472558;
    msg.q = 0.12389093508443916;
    msg.r = 0.7243348946529191;
    msg.depth = 0.057240630434413964;
    msg.alt = 0.020433314692113402;

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
    msg.setTimeStamp(0.3217162956339863);
    msg.setSource(65109U);
    msg.setSourceEntity(45U);
    msg.setDestination(17104U);
    msg.setDestinationEntity(7U);
    msg.x = 0.9519618524315964;
    msg.y = 0.6697778544167368;
    msg.z = 0.6274081131071952;

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
    msg.setTimeStamp(0.28829463892064344);
    msg.setSource(19407U);
    msg.setSourceEntity(110U);
    msg.setDestination(47745U);
    msg.setDestinationEntity(12U);
    msg.x = 0.9030267007353077;
    msg.y = 0.22595531968309068;
    msg.z = 0.25730414380605715;

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
    msg.setTimeStamp(0.8200011666613678);
    msg.setSource(4531U);
    msg.setSourceEntity(194U);
    msg.setDestination(7571U);
    msg.setDestinationEntity(39U);
    msg.x = 0.956307870814518;
    msg.y = 0.0115227453217156;
    msg.z = 0.9518197833959737;

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
    msg.setTimeStamp(0.18186525800686104);
    msg.setSource(3651U);
    msg.setSourceEntity(95U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(210U);
    msg.value = 0.3797373907527877;

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
    msg.setTimeStamp(0.21647630580850952);
    msg.setSource(8006U);
    msg.setSourceEntity(42U);
    msg.setDestination(38800U);
    msg.setDestinationEntity(140U);
    msg.value = 0.303152623564915;

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
    msg.setTimeStamp(0.8306095734403959);
    msg.setSource(44077U);
    msg.setSourceEntity(136U);
    msg.setDestination(9680U);
    msg.setDestinationEntity(92U);
    msg.value = 0.9197213187651471;

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
    msg.setTimeStamp(0.19668958047952056);
    msg.setSource(11498U);
    msg.setSourceEntity(42U);
    msg.setDestination(18613U);
    msg.setDestinationEntity(12U);
    msg.value = 0.2744924805146304;

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
    msg.setTimeStamp(0.13930626233899102);
    msg.setSource(25171U);
    msg.setSourceEntity(126U);
    msg.setDestination(12069U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6901353562547197;

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
    msg.setTimeStamp(0.1276771599389923);
    msg.setSource(20255U);
    msg.setSourceEntity(129U);
    msg.setDestination(21482U);
    msg.setDestinationEntity(22U);
    msg.value = 0.0765580952399757;

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
    msg.setTimeStamp(0.9982018228523672);
    msg.setSource(22418U);
    msg.setSourceEntity(101U);
    msg.setDestination(1002U);
    msg.setDestinationEntity(92U);
    msg.x = 0.313065675828452;
    msg.y = 0.3694425368358919;
    msg.z = 0.09372569183205748;
    msg.phi = 0.08577632802906399;
    msg.theta = 0.602794790064045;
    msg.psi = 0.3528717687856976;
    msg.p = 0.08846521182460276;
    msg.q = 0.15871923932395104;
    msg.r = 0.3317446388512356;
    msg.u = 0.505213742895167;
    msg.v = 0.8243585342743595;
    msg.w = 0.6921153133941769;
    msg.bias_psi = 0.31249563179271256;
    msg.bias_r = 0.6766087990253354;

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
    msg.setTimeStamp(0.39244391063594297);
    msg.setSource(5112U);
    msg.setSourceEntity(165U);
    msg.setDestination(16904U);
    msg.setDestinationEntity(30U);
    msg.x = 0.4347267581775941;
    msg.y = 0.11526880947009;
    msg.z = 0.4131353758337163;
    msg.phi = 0.43333670648154277;
    msg.theta = 0.7701370941899418;
    msg.psi = 0.6328868597020884;
    msg.p = 0.8716648736038479;
    msg.q = 0.3741787088799563;
    msg.r = 0.15097069924905437;
    msg.u = 0.1279503930923802;
    msg.v = 0.5191251454937398;
    msg.w = 0.4112748113150655;
    msg.bias_psi = 0.8010279123171697;
    msg.bias_r = 0.08582905192881785;

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
    msg.setTimeStamp(0.5129610414652773);
    msg.setSource(65054U);
    msg.setSourceEntity(125U);
    msg.setDestination(48746U);
    msg.setDestinationEntity(46U);
    msg.x = 0.9151532600241998;
    msg.y = 0.40791696387540843;
    msg.z = 0.14310239605074526;
    msg.phi = 0.9927942237957155;
    msg.theta = 0.7674617094746724;
    msg.psi = 0.2466266786171134;
    msg.p = 0.9741237758208999;
    msg.q = 0.07320444775782053;
    msg.r = 0.8312534019108648;
    msg.u = 0.5049650663923367;
    msg.v = 0.6697637896251615;
    msg.w = 0.33551163176237997;
    msg.bias_psi = 0.8490355110824253;
    msg.bias_r = 0.7308825745036802;

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
    msg.setTimeStamp(0.15709099804090754);
    msg.setSource(37820U);
    msg.setSourceEntity(155U);
    msg.setDestination(42909U);
    msg.setDestinationEntity(6U);
    msg.bias_psi = 0.06189850672405084;
    msg.bias_r = 0.41051214577467743;
    msg.cog = 0.015747674821539936;
    msg.cyaw = 0.690086336818368;
    msg.lbl_rej_level = 0.9706775347409637;
    msg.gps_rej_level = 0.38843821137652534;
    msg.custom_x = 0.8428347414537359;
    msg.custom_y = 0.2678452497742775;
    msg.custom_z = 0.21269962760663852;

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
    msg.setTimeStamp(0.916476183815854);
    msg.setSource(34483U);
    msg.setSourceEntity(1U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(16U);
    msg.bias_psi = 0.11393639265437983;
    msg.bias_r = 0.30721907392198033;
    msg.cog = 0.6665298266601863;
    msg.cyaw = 0.015305054426640985;
    msg.lbl_rej_level = 0.139415084712452;
    msg.gps_rej_level = 0.5420410878251491;
    msg.custom_x = 0.3899731228781309;
    msg.custom_y = 0.40377142105195907;
    msg.custom_z = 0.6538171206702347;

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
    msg.setTimeStamp(0.9792260582004276);
    msg.setSource(4623U);
    msg.setSourceEntity(172U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(4U);
    msg.bias_psi = 0.46956868125905127;
    msg.bias_r = 0.7028392297416002;
    msg.cog = 0.7392015554282807;
    msg.cyaw = 0.9317752103714859;
    msg.lbl_rej_level = 0.5314762214959562;
    msg.gps_rej_level = 0.31719570374379047;
    msg.custom_x = 0.3067510056050631;
    msg.custom_y = 0.3641197930066643;
    msg.custom_z = 0.5418836350422362;

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
    msg.setTimeStamp(0.5378896852695734);
    msg.setSource(3807U);
    msg.setSourceEntity(197U);
    msg.setDestination(31186U);
    msg.setDestinationEntity(50U);
    msg.utc_time = 0.9321722766614683;
    msg.reason = 122U;

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
    msg.setTimeStamp(0.8251675052967412);
    msg.setSource(17924U);
    msg.setSourceEntity(135U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(152U);
    msg.utc_time = 0.06505095439617714;
    msg.reason = 83U;

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
    msg.setTimeStamp(0.18709311913573046);
    msg.setSource(26663U);
    msg.setSourceEntity(52U);
    msg.setDestination(9819U);
    msg.setDestinationEntity(154U);
    msg.utc_time = 0.5860335344188897;
    msg.reason = 162U;

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
    msg.setTimeStamp(0.43423572408025046);
    msg.setSource(5015U);
    msg.setSourceEntity(97U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(167U);
    msg.id = 201U;
    msg.range = 0.49737070836047603;
    msg.acceptance = 209U;

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
    msg.setTimeStamp(0.12687982909972018);
    msg.setSource(40294U);
    msg.setSourceEntity(63U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(156U);
    msg.id = 125U;
    msg.range = 0.05534504876945623;
    msg.acceptance = 163U;

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
    msg.setTimeStamp(0.9362110690942608);
    msg.setSource(12908U);
    msg.setSourceEntity(211U);
    msg.setDestination(32990U);
    msg.setDestinationEntity(84U);
    msg.id = 170U;
    msg.range = 0.36502335368966543;
    msg.acceptance = 141U;

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
    msg.setTimeStamp(0.8784149326658023);
    msg.setSource(43152U);
    msg.setSourceEntity(218U);
    msg.setDestination(41283U);
    msg.setDestinationEntity(194U);
    msg.type = 56U;
    msg.reason = 99U;
    msg.value = 0.8754865308706729;
    msg.timestep = 0.46427768738315445;

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
    msg.setTimeStamp(0.7221738825942928);
    msg.setSource(61040U);
    msg.setSourceEntity(48U);
    msg.setDestination(59055U);
    msg.setDestinationEntity(74U);
    msg.type = 97U;
    msg.reason = 83U;
    msg.value = 0.09425121952591997;
    msg.timestep = 0.21554399454375328;

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
    msg.setTimeStamp(0.5582336304322696);
    msg.setSource(7342U);
    msg.setSourceEntity(16U);
    msg.setDestination(36321U);
    msg.setDestinationEntity(216U);
    msg.type = 224U;
    msg.reason = 202U;
    msg.value = 0.7931823684440674;
    msg.timestep = 0.2047756862480976;

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
    msg.setTimeStamp(0.26850060098124684);
    msg.setSource(30939U);
    msg.setSourceEntity(143U);
    msg.setDestination(27794U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.25589818930221686);
    msg.setSource(4637U);
    msg.setSourceEntity(169U);
    msg.setDestination(34078U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.3357978243302574);
    msg.setSource(20228U);
    msg.setSourceEntity(179U);
    msg.setDestination(46659U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.4749815463508128);
    msg.setSource(11048U);
    msg.setSourceEntity(75U);
    msg.setDestination(24677U);
    msg.setDestinationEntity(216U);
    msg.beacon.assign("IFZFPOXMWSQIMBGRYWJEDYBUOGLRMTASLQZTKYNEOEUAJCQHSJEBFIQXXOGOUEXPBRDMJUEANVNPVYSKKSAAYKGQUXCZVRHYIDFWCTOYTXXQIAJVG");
    msg.x = 0.4767401454253627;
    msg.y = 0.15183559568371152;
    msg.depth = 0.03263342207837283;
    msg.var_x = 0.16857756188214923;
    msg.var_y = 0.08870317048106913;

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
    msg.setTimeStamp(0.8658517056874651);
    msg.setSource(37676U);
    msg.setSourceEntity(21U);
    msg.setDestination(32263U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("RWNEECVGTGQWTWMLZSIQQNXVYBDCOFXSIHZEADQBSLXHSQHCGNPUMVNDOIEFUDGKQKPCATFTWQEJYLSBOLVRJIFSARFPZGOOQLZIPLITXCDVZXJZKMFOZIYQPBJDWSVFUMRCQSJGMIONGHRURANCKAKDTEYGLNPMUGXTJUXJOKWAJVNFEDTETHBCWYKLUAYHHEPWFGBBPORRBXHRMVFKIYACHSMWTIPZDDWXHRMLNBZKVYVLYPCZOAJSEJUAB");
    msg.x = 0.8087219740169069;
    msg.y = 0.8922459422982044;
    msg.depth = 0.8607171423341675;
    msg.var_x = 0.37421131275730257;
    msg.var_y = 0.13296023939724444;

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
    msg.setTimeStamp(0.4637043381946061);
    msg.setSource(2325U);
    msg.setSourceEntity(162U);
    msg.setDestination(2920U);
    msg.setDestinationEntity(203U);
    msg.beacon.assign("YQQNALTWGUXVDXIJBQQVZPYWMIEKVYSAGGPWMMKMITGYGAWEQRLEHHNECIITDRNHUNNISHUWAMAKHFOOORGFJUISDDSONFXSLFKXWJNJX");
    msg.x = 0.5365455217553546;
    msg.y = 0.33538704976340195;
    msg.depth = 0.3694862944155355;
    msg.var_x = 0.15126724660260638;
    msg.var_y = 0.31756375151201777;

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
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.8975845312312244);
    msg.setSource(42378U);
    msg.setSourceEntity(110U);
    msg.setDestination(60495U);
    msg.setDestinationEntity(74U);
    msg.value = 0.8066325061611171;

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
    msg.setTimeStamp(0.06522562701985879);
    msg.setSource(29791U);
    msg.setSourceEntity(238U);
    msg.setDestination(23230U);
    msg.setDestinationEntity(145U);
    msg.value = 0.6844640123057505;

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
    msg.setTimeStamp(0.9367682095487885);
    msg.setSource(28327U);
    msg.setSourceEntity(134U);
    msg.setDestination(1409U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9060997264697405;

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
    msg.setTimeStamp(0.585372745155312);
    msg.setSource(59580U);
    msg.setSourceEntity(249U);
    msg.setDestination(42093U);
    msg.setDestinationEntity(237U);
    msg.value = 0.595940835295439;
    msg.z_units = 124U;

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
    msg.setTimeStamp(0.9712806885978715);
    msg.setSource(62758U);
    msg.setSourceEntity(148U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9991720770097062;
    msg.z_units = 163U;

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
    msg.setTimeStamp(0.8948939730372859);
    msg.setSource(7568U);
    msg.setSourceEntity(218U);
    msg.setDestination(56008U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6058935059840729;
    msg.z_units = 95U;

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
    msg.setTimeStamp(0.6855669732144535);
    msg.setSource(40685U);
    msg.setSourceEntity(118U);
    msg.setDestination(17840U);
    msg.setDestinationEntity(54U);
    msg.value = 0.8374263916691939;
    msg.speed_units = 239U;

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
    msg.setTimeStamp(0.0910256612697804);
    msg.setSource(32168U);
    msg.setSourceEntity(83U);
    msg.setDestination(51280U);
    msg.setDestinationEntity(238U);
    msg.value = 0.7498845888245453;
    msg.speed_units = 225U;

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
    msg.setTimeStamp(0.3839675060480928);
    msg.setSource(22802U);
    msg.setSourceEntity(177U);
    msg.setDestination(27716U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5875489730613143;
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
    msg.setTimeStamp(0.32545791548403824);
    msg.setSource(20749U);
    msg.setSourceEntity(168U);
    msg.setDestination(41351U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5824844939274448;

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
    msg.setTimeStamp(0.007181234317492846);
    msg.setSource(58660U);
    msg.setSourceEntity(229U);
    msg.setDestination(37063U);
    msg.setDestinationEntity(167U);
    msg.value = 0.7586998593675639;

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
    msg.setTimeStamp(0.07591264814215648);
    msg.setSource(54908U);
    msg.setSourceEntity(86U);
    msg.setDestination(37553U);
    msg.setDestinationEntity(27U);
    msg.value = 0.08560604873069766;

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
    msg.setTimeStamp(0.577014511751325);
    msg.setSource(35440U);
    msg.setSourceEntity(81U);
    msg.setDestination(6657U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7160685349259283;

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
    msg.setTimeStamp(0.28664726665841933);
    msg.setSource(8157U);
    msg.setSourceEntity(91U);
    msg.setDestination(653U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7291843181155713;

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
    msg.setTimeStamp(0.5769449647441265);
    msg.setSource(23179U);
    msg.setSourceEntity(229U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8914808550838228;

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
    msg.setTimeStamp(0.1513447063992891);
    msg.setSource(58522U);
    msg.setSourceEntity(187U);
    msg.setDestination(2708U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6056998527315787;

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
    msg.setTimeStamp(0.21133596425539802);
    msg.setSource(51592U);
    msg.setSourceEntity(126U);
    msg.setDestination(65155U);
    msg.setDestinationEntity(246U);
    msg.value = 0.1248399305799196;

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
    msg.setTimeStamp(0.15875457515376756);
    msg.setSource(31551U);
    msg.setSourceEntity(195U);
    msg.setDestination(20557U);
    msg.setDestinationEntity(235U);
    msg.value = 0.7261819465744093;

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
    msg.setTimeStamp(0.7263675853097438);
    msg.setSource(25480U);
    msg.setSourceEntity(50U);
    msg.setDestination(43594U);
    msg.setDestinationEntity(156U);
    msg.start_lat = 0.636808052873669;
    msg.start_lon = 0.6902993827666353;
    msg.start_z = 0.39011223583018406;
    msg.start_z_units = 223U;
    msg.end_lat = 0.35924705067221996;
    msg.end_lon = 0.6064703640867675;
    msg.end_z = 0.08849992243399563;
    msg.end_z_units = 126U;
    msg.speed = 0.42012899023180583;
    msg.speed_units = 62U;
    msg.lradius = 0.11581211124067459;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.7395016329847354);
    msg.setSource(25437U);
    msg.setSourceEntity(195U);
    msg.setDestination(57630U);
    msg.setDestinationEntity(180U);
    msg.start_lat = 0.04140912528592289;
    msg.start_lon = 0.08770224199751553;
    msg.start_z = 0.5019866474567956;
    msg.start_z_units = 12U;
    msg.end_lat = 0.2064396169494449;
    msg.end_lon = 0.7922042043721903;
    msg.end_z = 0.1297497309084883;
    msg.end_z_units = 67U;
    msg.speed = 0.45566665242802085;
    msg.speed_units = 163U;
    msg.lradius = 0.12910769838292713;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.750477607730873);
    msg.setSource(27208U);
    msg.setSourceEntity(133U);
    msg.setDestination(25888U);
    msg.setDestinationEntity(78U);
    msg.start_lat = 0.8931180875659266;
    msg.start_lon = 0.06137234655313384;
    msg.start_z = 0.3801940056364357;
    msg.start_z_units = 254U;
    msg.end_lat = 0.46894205325555804;
    msg.end_lon = 0.3397354438895305;
    msg.end_z = 0.03738440181856284;
    msg.end_z_units = 245U;
    msg.speed = 0.07162372780498594;
    msg.speed_units = 222U;
    msg.lradius = 0.03156747524442294;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.5998472429182888);
    msg.setSource(35251U);
    msg.setSourceEntity(7U);
    msg.setDestination(55575U);
    msg.setDestinationEntity(2U);
    msg.x = 0.04649487173043454;
    msg.y = 0.9166015191023298;
    msg.z = 0.8938642285952749;
    msg.k = 0.031326367996298066;
    msg.m = 0.062154947715610476;
    msg.n = 0.0373042893413168;
    msg.flags = 73U;

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
    msg.setTimeStamp(0.5381127004195038);
    msg.setSource(61510U);
    msg.setSourceEntity(54U);
    msg.setDestination(50481U);
    msg.setDestinationEntity(59U);
    msg.x = 0.9637474011170797;
    msg.y = 0.34130090669777813;
    msg.z = 0.7622204592877588;
    msg.k = 0.5969415783560222;
    msg.m = 0.9114181877884493;
    msg.n = 0.7731409822816847;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.8148796377197418);
    msg.setSource(20329U);
    msg.setSourceEntity(1U);
    msg.setDestination(48256U);
    msg.setDestinationEntity(216U);
    msg.x = 0.8676839066559676;
    msg.y = 0.3475391120207919;
    msg.z = 0.21343435931749377;
    msg.k = 0.04447592107299225;
    msg.m = 0.15082912654042402;
    msg.n = 0.6517264671686757;
    msg.flags = 154U;

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
    msg.setTimeStamp(0.46779409757045964);
    msg.setSource(8226U);
    msg.setSourceEntity(254U);
    msg.setDestination(54335U);
    msg.setDestinationEntity(130U);
    msg.value = 0.464700601486017;

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
    msg.setTimeStamp(0.6369290826037138);
    msg.setSource(5262U);
    msg.setSourceEntity(216U);
    msg.setDestination(54202U);
    msg.setDestinationEntity(26U);
    msg.value = 0.08390200324715236;

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
    msg.setTimeStamp(0.5567029322696834);
    msg.setSource(62491U);
    msg.setSourceEntity(106U);
    msg.setDestination(20417U);
    msg.setDestinationEntity(122U);
    msg.value = 0.034451245343311565;

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
    msg.setTimeStamp(0.20712121638195546);
    msg.setSource(34102U);
    msg.setSourceEntity(83U);
    msg.setDestination(26314U);
    msg.setDestinationEntity(57U);
    msg.u = 0.7501918785871284;
    msg.v = 0.7474762543352416;
    msg.w = 0.3647887259984688;
    msg.p = 0.006383882660674023;
    msg.q = 0.8537050787202646;
    msg.r = 0.8794835971493611;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.9930409296233099);
    msg.setSource(11734U);
    msg.setSourceEntity(72U);
    msg.setDestination(44298U);
    msg.setDestinationEntity(114U);
    msg.u = 0.7688851679894257;
    msg.v = 0.45723120755930213;
    msg.w = 0.7367380588067833;
    msg.p = 0.5872164508675354;
    msg.q = 0.9020672026049897;
    msg.r = 0.4801117696286168;
    msg.flags = 183U;

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
    msg.setTimeStamp(0.5259410161086294);
    msg.setSource(16517U);
    msg.setSourceEntity(136U);
    msg.setDestination(25315U);
    msg.setDestinationEntity(16U);
    msg.u = 0.6652796399308201;
    msg.v = 0.3841528743938485;
    msg.w = 0.9428198125867536;
    msg.p = 0.025882340952305682;
    msg.q = 0.7368956313730631;
    msg.r = 0.6992199486159055;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.7003308266623526);
    msg.setSource(21071U);
    msg.setSourceEntity(108U);
    msg.setDestination(39733U);
    msg.setDestinationEntity(41U);
    msg.start_lat = 0.4758324231375072;
    msg.start_lon = 0.1555555505002092;
    msg.start_z = 0.3438631209445081;
    msg.start_z_units = 57U;
    msg.end_lat = 0.055134989836601034;
    msg.end_lon = 0.8601741555724681;
    msg.end_z = 0.17602374030240897;
    msg.end_z_units = 149U;
    msg.lradius = 0.4603265544453351;
    msg.flags = 196U;
    msg.x = 0.7082892521921835;
    msg.y = 0.20237440174240118;
    msg.z = 0.017993314263265114;
    msg.vx = 0.3142492155077854;
    msg.vy = 0.2827846403278792;
    msg.vz = 0.58907573390841;
    msg.course_error = 0.758702570802644;
    msg.eta = 14249U;

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
    msg.setTimeStamp(0.3125267120591765);
    msg.setSource(65533U);
    msg.setSourceEntity(90U);
    msg.setDestination(65199U);
    msg.setDestinationEntity(211U);
    msg.start_lat = 0.43750569614720236;
    msg.start_lon = 0.6587460153272809;
    msg.start_z = 0.15064160563168838;
    msg.start_z_units = 62U;
    msg.end_lat = 0.4922177255182184;
    msg.end_lon = 0.9576423555059586;
    msg.end_z = 0.14948976205039044;
    msg.end_z_units = 228U;
    msg.lradius = 0.9124253514519853;
    msg.flags = 150U;
    msg.x = 0.15539522112564974;
    msg.y = 0.49648342226310216;
    msg.z = 0.3797651661784983;
    msg.vx = 0.502268899700186;
    msg.vy = 0.6489166699849186;
    msg.vz = 0.9367992029870313;
    msg.course_error = 0.665252411391842;
    msg.eta = 61045U;

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
    msg.setTimeStamp(0.1640464360358843);
    msg.setSource(28875U);
    msg.setSourceEntity(125U);
    msg.setDestination(17096U);
    msg.setDestinationEntity(185U);
    msg.start_lat = 0.8307310969915684;
    msg.start_lon = 0.7563917108477693;
    msg.start_z = 0.0661310720283923;
    msg.start_z_units = 106U;
    msg.end_lat = 0.49757073467294455;
    msg.end_lon = 0.8575737549901082;
    msg.end_z = 0.26114857652966594;
    msg.end_z_units = 83U;
    msg.lradius = 0.04644475304360873;
    msg.flags = 151U;
    msg.x = 0.2419684795155993;
    msg.y = 0.8391473867634284;
    msg.z = 0.15895293323625126;
    msg.vx = 0.8835377368865265;
    msg.vy = 0.4187888730943864;
    msg.vz = 0.547752335165333;
    msg.course_error = 0.2657415513279774;
    msg.eta = 52500U;

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
    msg.setTimeStamp(0.9258856554997807);
    msg.setSource(45961U);
    msg.setSourceEntity(209U);
    msg.setDestination(49541U);
    msg.setDestinationEntity(218U);
    msg.k = 0.9408784951931982;
    msg.m = 0.06010195142571273;
    msg.n = 0.8414732841564525;

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
    msg.setTimeStamp(0.13899638808194492);
    msg.setSource(14698U);
    msg.setSourceEntity(153U);
    msg.setDestination(46192U);
    msg.setDestinationEntity(229U);
    msg.k = 0.29227407963264873;
    msg.m = 0.9141028390627792;
    msg.n = 0.9827646209510876;

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
    msg.setTimeStamp(0.7545438879094961);
    msg.setSource(62524U);
    msg.setSourceEntity(46U);
    msg.setDestination(20490U);
    msg.setDestinationEntity(234U);
    msg.k = 0.21020122182436274;
    msg.m = 0.14175779869324634;
    msg.n = 0.3666916048781792;

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
    msg.setTimeStamp(0.9138420214313286);
    msg.setSource(9598U);
    msg.setSourceEntity(72U);
    msg.setDestination(38254U);
    msg.setDestinationEntity(194U);
    msg.p = 0.4813399046510959;
    msg.i = 0.9370598495757272;
    msg.d = 0.7444492603234056;
    msg.a = 0.01902836443051037;

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
    msg.setTimeStamp(0.785416684459544);
    msg.setSource(25374U);
    msg.setSourceEntity(65U);
    msg.setDestination(33162U);
    msg.setDestinationEntity(229U);
    msg.p = 0.06073237989051361;
    msg.i = 0.26512907073235836;
    msg.d = 0.6299245674058159;
    msg.a = 0.6205260898702946;

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
    msg.setTimeStamp(0.9423269991963488);
    msg.setSource(47681U);
    msg.setSourceEntity(162U);
    msg.setDestination(10564U);
    msg.setDestinationEntity(166U);
    msg.p = 0.023704498507000182;
    msg.i = 0.4801196934334735;
    msg.d = 0.4985979947317718;
    msg.a = 0.764988431753919;

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
    msg.setTimeStamp(0.05589535221617503);
    msg.setSource(9337U);
    msg.setSourceEntity(254U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(11U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.8338242307426678);
    msg.setSource(25471U);
    msg.setSourceEntity(13U);
    msg.setDestination(51706U);
    msg.setDestinationEntity(3U);
    msg.op = 161U;

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
    msg.setTimeStamp(0.42059495167718464);
    msg.setSource(37705U);
    msg.setSourceEntity(124U);
    msg.setDestination(63166U);
    msg.setDestinationEntity(135U);
    msg.op = 73U;

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
    msg.setTimeStamp(0.8468048051449296);
    msg.setSource(13834U);
    msg.setSourceEntity(37U);
    msg.setDestination(45278U);
    msg.setDestinationEntity(16U);
    msg.timeout = 3743U;
    msg.lat = 0.5035322566985316;
    msg.lon = 0.20660458947603555;
    msg.z = 0.9727411872253278;
    msg.z_units = 157U;
    msg.speed = 0.3477167760863502;
    msg.speed_units = 193U;
    msg.roll = 0.6005059957829868;
    msg.pitch = 0.4578519170532286;
    msg.yaw = 0.083937760845604;
    msg.custom.assign("KHLNQTLXMZZWIZNOIJAKSTHSWGNUWORYUMYITAOHMSSINPZXCDWXRWYLDJLFUHFHQCKAINVBVRESDPIUDYTAWICJPEVMMLVMXJPDREGYUPVTJHXDFKDFECRXWAVE");

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
    msg.setTimeStamp(0.5472659694732299);
    msg.setSource(30174U);
    msg.setSourceEntity(229U);
    msg.setDestination(1971U);
    msg.setDestinationEntity(98U);
    msg.timeout = 35617U;
    msg.lat = 0.5220746725474728;
    msg.lon = 0.9789436359535394;
    msg.z = 0.8137608808665581;
    msg.z_units = 188U;
    msg.speed = 0.038028199179155786;
    msg.speed_units = 70U;
    msg.roll = 0.3094916831758906;
    msg.pitch = 0.9003871618398374;
    msg.yaw = 0.6907204051244126;
    msg.custom.assign("SXYVCVOKULJGFRKEDUBDJDYRZAFKMXTYBAQTKWZYRDOCGCATMSNDIJENPSLUIQAUITBXWSVLZTCUGYEQJETIUIGNIDGWMPOFGVBVXJYVAPNYSJVA");

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
    msg.setTimeStamp(0.8073566077518748);
    msg.setSource(41004U);
    msg.setSourceEntity(89U);
    msg.setDestination(19076U);
    msg.setDestinationEntity(213U);
    msg.timeout = 15159U;
    msg.lat = 0.9424603458966045;
    msg.lon = 0.37343947793340826;
    msg.z = 0.5359277196752347;
    msg.z_units = 159U;
    msg.speed = 0.9092168623694656;
    msg.speed_units = 109U;
    msg.roll = 0.8719589403280241;
    msg.pitch = 0.28867330409045233;
    msg.yaw = 0.23708139801072026;
    msg.custom.assign("HGQPTPLTNDZIWNDDINMRAWPMVXJMFWJIZUAXBWAIZOMPPYNIKFEJSQSUQBPZBLSEYHKGRUJGCVEXODNVQDXKMQAVZDLUWMFQHKUAEOEHXKUVWAIKVVIMFTPWUTASYCRFZKXFRREBITBTHPCCHNLIBOJPOJQUTAKZWXKNGJSXKFZSNRCZHELLCWYQOBJBFGXMJPYCNOLLGDROYVXMYMDYZRSTVFASS");

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
    msg.setTimeStamp(0.5306028909929204);
    msg.setSource(3697U);
    msg.setSourceEntity(122U);
    msg.setDestination(59656U);
    msg.setDestinationEntity(217U);
    msg.timeout = 31483U;
    msg.lat = 0.875876936870506;
    msg.lon = 0.6455708535631013;
    msg.z = 0.2805290335764531;
    msg.z_units = 56U;
    msg.speed = 0.30293547232338003;
    msg.speed_units = 175U;
    msg.duration = 44196U;
    msg.radius = 0.8708317777037282;
    msg.flags = 228U;
    msg.custom.assign("GOTRNHGNKCHGHVHMKYKPICVZHCWBREMYBUODTSPICKGWMCLVYFRJFSSMSDQEWTCFPKJTNYUXNZBDTHRVIRFLLEFHZPXTKRIXZAJWIPWNHIL");

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
    msg.setTimeStamp(0.7631743280495938);
    msg.setSource(25856U);
    msg.setSourceEntity(251U);
    msg.setDestination(18608U);
    msg.setDestinationEntity(5U);
    msg.timeout = 32269U;
    msg.lat = 0.8682921297260644;
    msg.lon = 0.9988278483349499;
    msg.z = 0.7079936669677329;
    msg.z_units = 185U;
    msg.speed = 0.5134288068260846;
    msg.speed_units = 130U;
    msg.duration = 49769U;
    msg.radius = 0.5386312825175902;
    msg.flags = 106U;
    msg.custom.assign("LWQYPWIFNGPFDNOCEZXAWETBMITSWJSLHAXLDVEDXTYNKWKBSLKZCCDUANJLPSQPQTUCENSERODGKSTSVRKUDJLMZDHFCPV");

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
    msg.setTimeStamp(0.13612713981482694);
    msg.setSource(44603U);
    msg.setSourceEntity(246U);
    msg.setDestination(62202U);
    msg.setDestinationEntity(167U);
    msg.timeout = 53997U;
    msg.lat = 0.794291444324794;
    msg.lon = 0.7708029250735146;
    msg.z = 0.5389560266728496;
    msg.z_units = 16U;
    msg.speed = 0.553267844776328;
    msg.speed_units = 154U;
    msg.duration = 60956U;
    msg.radius = 0.0834569274309026;
    msg.flags = 85U;
    msg.custom.assign("MRELPJSFNLWZRBHPJPMOXWSVIEUSIODGTANKDSUHMDOXYVXUPOPWCACQNWSRCFWLVXDNYKGFHUASUCEZBSKIZVXQVJQYWZ");

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
    msg.setTimeStamp(0.2145919794190425);
    msg.setSource(52040U);
    msg.setSourceEntity(247U);
    msg.setDestination(42894U);
    msg.setDestinationEntity(208U);
    msg.custom.assign("VSEBVXVFTWRMZKQBDVQHKAISGFJRTHKRWLYNAQJUQZHHVCEDINHDOWCNYQCYQFSWKPBABEKDYGSUNATCTTSWDPIDMFJOFKRWLRDGWRZFRXVTZJJYMXPQMMLHSQKUPNBZBTGOUICLCZSZGLXXGIFLPUYXBOUIWMNDYM");

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
    msg.setTimeStamp(0.861839863512122);
    msg.setSource(28859U);
    msg.setSourceEntity(155U);
    msg.setDestination(48431U);
    msg.setDestinationEntity(168U);
    msg.custom.assign("PNQKTHTVOEKWAWFZMMUUIEYQFAGWPLBGYOXBRESEITKCYQZUDUUCZRNPIGCKWDWFJL");

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
    msg.setTimeStamp(0.9606820047856847);
    msg.setSource(14928U);
    msg.setSourceEntity(210U);
    msg.setDestination(18627U);
    msg.setDestinationEntity(166U);
    msg.custom.assign("OKPLDICLVDD");

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
    msg.setTimeStamp(0.21901996085473519);
    msg.setSource(33903U);
    msg.setSourceEntity(229U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(142U);
    msg.timeout = 49614U;
    msg.lat = 0.3540336508311891;
    msg.lon = 0.8689333717469288;
    msg.z = 0.6955915813625503;
    msg.z_units = 232U;
    msg.duration = 64783U;
    msg.speed = 0.4245358255291636;
    msg.speed_units = 176U;
    msg.type = 76U;
    msg.radius = 0.07435632911121959;
    msg.length = 0.5203789877398077;
    msg.bearing = 0.47620528313648247;
    msg.direction = 249U;
    msg.custom.assign("OUHFLKRBLFRQLXTPIZETFUMKVZWBUKPJRGRGAOMUQEDTOGYFBNYQQVXTUVREAFZTQFGOXZGPZMSVRKULYJVNCENQXIJFMKAHWYUQUMIITHFMYCBRBIPNHPBXKGBZVYTALOAWWJWYMSNBY");

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
    msg.setTimeStamp(0.36436494076762205);
    msg.setSource(38003U);
    msg.setSourceEntity(178U);
    msg.setDestination(14515U);
    msg.setDestinationEntity(170U);
    msg.timeout = 4290U;
    msg.lat = 0.850313835431616;
    msg.lon = 0.05975587587845288;
    msg.z = 0.3465851012426767;
    msg.z_units = 124U;
    msg.duration = 4517U;
    msg.speed = 0.2326377539718466;
    msg.speed_units = 168U;
    msg.type = 101U;
    msg.radius = 0.849026381086033;
    msg.length = 0.875428132575285;
    msg.bearing = 0.6235267495215936;
    msg.direction = 171U;
    msg.custom.assign("SDKVATDXWSKLTEUQRZOTRWLZCKBZTPIJCOZKBWKHEBEHWZXNCHZTCLOEBXOWFGFYRIHVDJDPIQHYSPTIHTNUGWXVQASA");

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
    msg.setTimeStamp(0.8678707558383983);
    msg.setSource(62008U);
    msg.setSourceEntity(190U);
    msg.setDestination(31519U);
    msg.setDestinationEntity(209U);
    msg.timeout = 25420U;
    msg.lat = 0.6710962914887953;
    msg.lon = 0.5253754973767106;
    msg.z = 0.5525254192039373;
    msg.z_units = 250U;
    msg.duration = 40964U;
    msg.speed = 0.4966221978905532;
    msg.speed_units = 147U;
    msg.type = 78U;
    msg.radius = 0.8990877183119735;
    msg.length = 0.20014944472427953;
    msg.bearing = 0.988456228168966;
    msg.direction = 208U;
    msg.custom.assign("OARXZWHNCPJWALKNIHRBRBNAODCXLECSYMUDFOUCBWINIFDKROASHQXRMVIGJTRVWUVSZG");

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
    msg.setTimeStamp(0.6787720013234322);
    msg.setSource(16673U);
    msg.setSourceEntity(247U);
    msg.setDestination(16772U);
    msg.setDestinationEntity(24U);
    msg.duration = 15304U;
    msg.custom.assign("COPJQQYIMLIYKVFVKOTXTQBSULWLQIKLVGQRUQIMHTPJFCGOHHFPHQMDPSFYEHNMESIBYEAWDPUQLFLRNWNJYCEFGWMCGEXYDYCOBNMECZOPKTRIQZDLBGXUJOXVLJOZTHXCIHISBARKSKTPYBEVVFZHJEHAXFKZBTVQNZJGMRKMLJTXOYCSPMSGDPGWZAVRUUNDZARNOGUTMASISVUWZXVLFDJKNRBATAGDWCWEDYBUPWB");

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
    msg.setTimeStamp(0.6359191019599677);
    msg.setSource(49227U);
    msg.setSourceEntity(83U);
    msg.setDestination(57615U);
    msg.setDestinationEntity(42U);
    msg.duration = 52256U;
    msg.custom.assign("ZTXJBDNDGMW");

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
    msg.setTimeStamp(0.24707082410616166);
    msg.setSource(13003U);
    msg.setSourceEntity(88U);
    msg.setDestination(45443U);
    msg.setDestinationEntity(151U);
    msg.duration = 29443U;
    msg.custom.assign("ECIMHWSXOGQNCPZGJEUKZZTFEONGBTJRWRFNODAWOCZEUDRKJXH");

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
    msg.setTimeStamp(0.5249499615816402);
    msg.setSource(16959U);
    msg.setSourceEntity(73U);
    msg.setDestination(44523U);
    msg.setDestinationEntity(150U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.9103518721931856;
    tmp_msg_0.start_lon = 0.5859481045787098;
    tmp_msg_0.start_z = 0.7338053473197982;
    tmp_msg_0.start_z_units = 251U;
    tmp_msg_0.end_lat = 0.7898819695589041;
    tmp_msg_0.end_lon = 0.8468672248946056;
    tmp_msg_0.end_z = 0.37277041318670745;
    tmp_msg_0.end_z_units = 144U;
    tmp_msg_0.speed = 0.6674270251857793;
    tmp_msg_0.speed_units = 67U;
    tmp_msg_0.lradius = 0.3991715789176843;
    tmp_msg_0.flags = 146U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58635U;
    msg.custom.assign("HFTXSKQPBIBUSBDOAUVSMWPREJSKVFZQKBYZHPMUAEOWYCUGMLODJQQTTYVXBVYKFOXGICYAWMRHJCRNTEMNPHDPVIRZGXTJNRKOHOGRAKHWJAKUNEFOIULUDCAQPLEDHYEBGZCTVZLBFXDZYNIZWMFFLCWQRIWOVXQNHLSXKBFZGIOZPDBQWSGJDVMVBRIYEXTFONEGHPPAXRALIANITQVUSHGLUJJSMCUAWZTGSDCJEPRLLJCYXCYWMQS");

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
    msg.setTimeStamp(0.21093222609437312);
    msg.setSource(22093U);
    msg.setSourceEntity(131U);
    msg.setDestination(28976U);
    msg.setDestinationEntity(37U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.1659051817733923;
    msg.control.set(tmp_msg_0);
    msg.duration = 4377U;
    msg.custom.assign("KFYKOMRVKCMVRMZWSINTGHJSQMASXKBFUXTUWDFYEOKURHJIHRXWOYMGGTXEDTSQQNOWQMZXAXNFVXCKRNMJFYDJVTHAWEJQATEEVPCNSOBSGQHQGBZEUCSOOJSOFLKAHKILGVLEUADIZPPCZHIXEXWJJPDPVMUJMFRLPZLUGHHICPLTDNCLWQTFCWNBP");

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
    msg.setTimeStamp(0.0517624677302706);
    msg.setSource(44917U);
    msg.setSourceEntity(155U);
    msg.setDestination(65265U);
    msg.setDestinationEntity(14U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.6118827211165337;
    msg.control.set(tmp_msg_0);
    msg.duration = 37129U;
    msg.custom.assign("SIQFQHNBGTQZBSUARRFDDIGRDSMMIGGRYZZOCCQIEUWNUCKYUWOWVTRVBGSPCFBYANIZDAGTJNRPBCOJETVRXRRSQWSOOIXQUCWQPHLGYPXVKAMXADNEZYJLTWLLULUWPVLESOCWOUQEFGEHJDQK");

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
    msg.setTimeStamp(0.39598270241412603);
    msg.setSource(41061U);
    msg.setSourceEntity(205U);
    msg.setDestination(56425U);
    msg.setDestinationEntity(132U);
    msg.timeout = 39652U;
    msg.lat = 0.7389427338316894;
    msg.lon = 0.34705591986421724;
    msg.z = 0.45337468934612135;
    msg.z_units = 166U;
    msg.speed = 0.8604090918947104;
    msg.speed_units = 155U;
    msg.bearing = 0.200510279565852;
    msg.cross_angle = 0.7645413128308532;
    msg.width = 0.42975142953122936;
    msg.length = 0.42994964218169995;
    msg.hstep = 0.9627348873883623;
    msg.coff = 35U;
    msg.alternation = 20U;
    msg.flags = 99U;
    msg.custom.assign("PFOIDYLHOGYMAECEZIKSJTGPRXFYUQEFPBLQQNZXBTOCRXVCSZLPHXWDDOTICZHYRSJUJDMOHEJMLRELRJNKCSZKJEJJIBZV");

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
    msg.setTimeStamp(0.188976981343555);
    msg.setSource(42434U);
    msg.setSourceEntity(240U);
    msg.setDestination(4738U);
    msg.setDestinationEntity(42U);
    msg.timeout = 58817U;
    msg.lat = 0.0643828264571692;
    msg.lon = 0.1458549931552029;
    msg.z = 0.9529218513294182;
    msg.z_units = 175U;
    msg.speed = 0.6527273707822512;
    msg.speed_units = 150U;
    msg.bearing = 0.5762086055372491;
    msg.cross_angle = 0.5625172519058887;
    msg.width = 0.6706242535981619;
    msg.length = 0.6051120783039023;
    msg.hstep = 0.06342512933501487;
    msg.coff = 30U;
    msg.alternation = 91U;
    msg.flags = 129U;
    msg.custom.assign("KHRSFANSSDJYJGVPRXHSYMJPTBRAXKQBEINEPIXFUABODHORCXVKEKHFYMSYMNGMLOEGLYOQCQL");

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
    msg.setTimeStamp(0.9390970287717778);
    msg.setSource(24948U);
    msg.setSourceEntity(4U);
    msg.setDestination(32687U);
    msg.setDestinationEntity(178U);
    msg.timeout = 21190U;
    msg.lat = 0.19444669852037955;
    msg.lon = 0.7428320584847317;
    msg.z = 0.27261323627898193;
    msg.z_units = 26U;
    msg.speed = 0.8298084213746707;
    msg.speed_units = 123U;
    msg.bearing = 0.03782132744817679;
    msg.cross_angle = 0.7824387363163261;
    msg.width = 0.17693678214637143;
    msg.length = 0.9864487875935801;
    msg.hstep = 0.23949591549949034;
    msg.coff = 3U;
    msg.alternation = 137U;
    msg.flags = 70U;
    msg.custom.assign("SJMIZENRQJHBPFHOIOXWTTQMKTLRENKFKXYBRWUICYLUWZXBEJXADCDCTUAAVUNBRGYQFQDWVDHBPSPFCSFUMYGAPXNYZKNBPLQDXPVTWUGIEIIZGIQAMQLSZVCXZHHAFHOSJXDJSKCQHPGYLIPMSGKGGBBZ");

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
    msg.setTimeStamp(0.7429970436286764);
    msg.setSource(36317U);
    msg.setSourceEntity(64U);
    msg.setDestination(59968U);
    msg.setDestinationEntity(9U);
    msg.timeout = 14009U;
    msg.lat = 0.7527669661886771;
    msg.lon = 0.44381839381703203;
    msg.z = 0.7157052640079017;
    msg.z_units = 51U;
    msg.speed = 0.5538443557937435;
    msg.speed_units = 147U;
    msg.custom.assign("RJWFNLEZWKGANCEZGUAV");

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
    msg.setTimeStamp(0.9451692145198513);
    msg.setSource(35858U);
    msg.setSourceEntity(10U);
    msg.setDestination(31795U);
    msg.setDestinationEntity(231U);
    msg.timeout = 17705U;
    msg.lat = 0.1144218272016394;
    msg.lon = 0.8868145511010432;
    msg.z = 0.8192164566482664;
    msg.z_units = 86U;
    msg.speed = 0.19832283018315566;
    msg.speed_units = 36U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9285389495232947;
    tmp_msg_0.y = 0.2922482803053478;
    tmp_msg_0.z = 0.7691824106462365;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LMTYLLFWJQUIUYLORRGZSLOIJJTELXANWGXSYWVQSWCKRXIBAVDZWHQTMSFQPAJNBZRQYWPGISGZGDZPCHKXCHVOMMNXZEUOYXLTEROCYAKSFITDMEYAMNGAQWFJZSQ");

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
    msg.setTimeStamp(0.16837203956887836);
    msg.setSource(41944U);
    msg.setSourceEntity(123U);
    msg.setDestination(12620U);
    msg.setDestinationEntity(93U);
    msg.timeout = 58952U;
    msg.lat = 0.9302045266032978;
    msg.lon = 0.27002728947574817;
    msg.z = 0.7744466578225334;
    msg.z_units = 183U;
    msg.speed = 0.5942756394121945;
    msg.speed_units = 214U;
    msg.custom.assign("QSBOQOOVPYNXIUAWLBAYSIADFQCNAXJHIHJGRMHHIUWLKMBWPKFYBQE");

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
    msg.setTimeStamp(0.9343997085319653);
    msg.setSource(14633U);
    msg.setSourceEntity(130U);
    msg.setDestination(4796U);
    msg.setDestinationEntity(42U);
    msg.x = 0.2805995762592316;
    msg.y = 0.2096162068426739;
    msg.z = 0.7089879568312231;

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
    msg.setTimeStamp(0.18329673943247526);
    msg.setSource(37630U);
    msg.setSourceEntity(33U);
    msg.setDestination(34673U);
    msg.setDestinationEntity(252U);
    msg.x = 0.36122958920970505;
    msg.y = 0.7390167064475035;
    msg.z = 0.33384371065403806;

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
    msg.setTimeStamp(0.44235623283938663);
    msg.setSource(53376U);
    msg.setSourceEntity(91U);
    msg.setDestination(37270U);
    msg.setDestinationEntity(119U);
    msg.x = 0.9702440994515885;
    msg.y = 0.8360825485392891;
    msg.z = 0.5223745829303337;

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
    msg.setTimeStamp(0.33612102899206064);
    msg.setSource(44362U);
    msg.setSourceEntity(18U);
    msg.setDestination(32002U);
    msg.setDestinationEntity(251U);
    msg.timeout = 9178U;
    msg.lat = 0.1925898692847109;
    msg.lon = 0.1257918349124778;
    msg.z = 0.3742309596737391;
    msg.z_units = 234U;
    msg.amplitude = 0.5651568385291769;
    msg.pitch = 0.6669583366870435;
    msg.speed = 0.13365847284454935;
    msg.speed_units = 30U;
    msg.custom.assign("SZDMNESTJQJPSNWKDCPALPZAIYDACMUWUSHFOLXBFYBXVBTHBZQXRREGQGDBRZIARECHIKQJZJMQYYKYFOPDMJVXJYKIERLAOATHAFQLFTVZRTOVZNVLUW");

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
    msg.setTimeStamp(0.6199482337728601);
    msg.setSource(11095U);
    msg.setSourceEntity(4U);
    msg.setDestination(51044U);
    msg.setDestinationEntity(38U);
    msg.timeout = 63569U;
    msg.lat = 0.9867242847828885;
    msg.lon = 0.8388113286807599;
    msg.z = 0.29798848975744496;
    msg.z_units = 156U;
    msg.amplitude = 0.663122399085141;
    msg.pitch = 0.14955053255132134;
    msg.speed = 0.2940284784207837;
    msg.speed_units = 79U;
    msg.custom.assign("ZDJRIOPZXOFDGWSFJZTEABEYYSSLOBTRRUWJWKYFWZMVCWOANZOAMDGOBGDVJUCFFKJIQEILVUVVIBWECHJPBSTKPAILRQSBIHEJJAMGDDYNYCSDTINUEGSQQZYWYKWFLRPRPWKXAQDLLNLNSOZTPQURAHAGZYXHGCMQFPICLCGKRJ");

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
    msg.setTimeStamp(0.9920091617116241);
    msg.setSource(63945U);
    msg.setSourceEntity(192U);
    msg.setDestination(26723U);
    msg.setDestinationEntity(57U);
    msg.timeout = 7975U;
    msg.lat = 0.9175012788951215;
    msg.lon = 0.47932034974329696;
    msg.z = 0.0829792382534894;
    msg.z_units = 239U;
    msg.amplitude = 0.5294201925227771;
    msg.pitch = 0.5283607286608558;
    msg.speed = 0.36802220557274345;
    msg.speed_units = 92U;
    msg.custom.assign("ONKJMSDFLMXCZPDEWVSYTHTJPKTSOSVHXEELHGHBCSUAOIXNLLXUMZWDRTIQZEJPHEYWGBZPMVFGSQNLRMVRBTGLKYGIRCEKXFYRUR");

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
    msg.setTimeStamp(0.35945680118056256);
    msg.setSource(19676U);
    msg.setSourceEntity(236U);
    msg.setDestination(29361U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.6008930604856642);
    msg.setSource(41023U);
    msg.setSourceEntity(186U);
    msg.setDestination(14103U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.5718657575012174);
    msg.setSource(32022U);
    msg.setSourceEntity(131U);
    msg.setDestination(41898U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.3548053379869439);
    msg.setSource(47944U);
    msg.setSourceEntity(104U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.16644763896050385;
    msg.lon = 0.525294545252928;
    msg.z = 0.43750929492068924;
    msg.z_units = 44U;
    msg.radius = 0.21341074463501175;
    msg.duration = 54001U;
    msg.speed = 0.9758705120316422;
    msg.speed_units = 139U;
    msg.custom.assign("OZKMNMRPKGEQLIPSCZESZRORGTCVPDUIPSFWOHVMICDDQAAYFAKNELHUFEEXGHBZEAXWJWISGDUSMYRYIBOHLXDTCGH");

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
    msg.setTimeStamp(0.37367127858801186);
    msg.setSource(22851U);
    msg.setSourceEntity(110U);
    msg.setDestination(11298U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.34616893765901147;
    msg.lon = 0.14326741939170085;
    msg.z = 0.18038901817723096;
    msg.z_units = 20U;
    msg.radius = 0.6280237397395;
    msg.duration = 46743U;
    msg.speed = 0.092216828997713;
    msg.speed_units = 176U;
    msg.custom.assign("KCQIJXDEQBGGHMNOZUTOIPAWLEPEBMUZDDURANOXJYVGXWGDMSTYEBGRAHVOXGANOEKHYWVSTZMRHNJIJTKMUTPIRCNBCPBRQCQFIEAXYRHKCKXPCJUZWGKZHZGISHCKYLZWDIVSORQKJLPTDWTCVRKTIMNRPBUVFFQFHKLXDLOPSRWQAQWZQBWSFVNTWEMEF");

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
    msg.setTimeStamp(0.42776597359116464);
    msg.setSource(11204U);
    msg.setSourceEntity(52U);
    msg.setDestination(19548U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.03632175082255085;
    msg.lon = 0.025004006549962154;
    msg.z = 0.9194463710166028;
    msg.z_units = 163U;
    msg.radius = 0.4617061602515782;
    msg.duration = 35044U;
    msg.speed = 0.19842774544049668;
    msg.speed_units = 223U;
    msg.custom.assign("ZFCAWKMUAMVIYNFBVIVMWAEXXEUIOJPAJQWLJPZWCDTDCAYNKKTVKQDFSEEHLPGDQYZTRILRBNJHLWMGOIBZBMTGZNUJMOEKHHYBBUHHSWEPDUDGOOOLIMGJUDCVSPGVUKZNKSGZAXLKWLHMXCVBBSOJIFYEHTPJXYRYCQTMPLCUFXIFBQVJYDRXIPNORAPNWKNATZLDSRSZGQWXCVODRFUQMTZANYQINSHGOEWXQSCERFKHEUCJF");

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
    msg.setTimeStamp(0.11783179822110545);
    msg.setSource(42298U);
    msg.setSourceEntity(193U);
    msg.setDestination(31002U);
    msg.setDestinationEntity(26U);
    msg.timeout = 59318U;
    msg.flags = 149U;
    msg.lat = 0.8419409215762045;
    msg.lon = 0.625698384429964;
    msg.start_z = 0.5007634274546524;
    msg.start_z_units = 97U;
    msg.end_z = 0.30649916809085354;
    msg.end_z_units = 130U;
    msg.radius = 0.07310696149361684;
    msg.speed = 0.5949143635915214;
    msg.speed_units = 157U;
    msg.custom.assign("VIRHCQWBSCAXSABLLRYCVGUOXEMMTKLBUTSJYLTNSRVDCYKHYATEYOIGBEAZXZNLYJKUQNTFWVZVIRNBWNQYCRPVDDPTSTJCDDKBRJWQSFKCGZOZSIMITGROFBWSRIPERPEIZDLIEPQHXBPOKOUGJHWPGVVASOCNJQFGMMFCXHBXYDDVHQQFXYHFGWIKM");

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
    msg.setTimeStamp(0.7562945771385374);
    msg.setSource(35704U);
    msg.setSourceEntity(76U);
    msg.setDestination(20314U);
    msg.setDestinationEntity(22U);
    msg.timeout = 3833U;
    msg.flags = 122U;
    msg.lat = 0.08215173393183828;
    msg.lon = 0.9477835510840076;
    msg.start_z = 0.3004300600794184;
    msg.start_z_units = 59U;
    msg.end_z = 0.9429242559241707;
    msg.end_z_units = 155U;
    msg.radius = 0.9289110101096358;
    msg.speed = 0.3769018730202721;
    msg.speed_units = 225U;
    msg.custom.assign("DVLQGBSZVAMDZOHJKWHPNTNPGMPQRJZCPTMGQBWGMVUJULCFWHECRADKDILZPNJVCYRYFPVXIWZNCTTW");

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
    msg.setTimeStamp(0.08242035266362069);
    msg.setSource(13902U);
    msg.setSourceEntity(157U);
    msg.setDestination(4760U);
    msg.setDestinationEntity(79U);
    msg.timeout = 17798U;
    msg.flags = 66U;
    msg.lat = 0.8982503056136667;
    msg.lon = 0.5933515526928013;
    msg.start_z = 0.180331746476175;
    msg.start_z_units = 216U;
    msg.end_z = 0.4355892403450152;
    msg.end_z_units = 232U;
    msg.radius = 0.32526509661005654;
    msg.speed = 0.3041653589521911;
    msg.speed_units = 223U;
    msg.custom.assign("QWFLBCIJSNFVKYTRDOKAGGQRLLOUHKWGBEKFFKZNJTMZPABAPLILUQNMUERNDWXFGNPZGYMVLMPOBIEUQOUPPKPXLUEUMXCTHVDVQSJLJZXNFHKNZMYIGPAKXADAZDEHJHICENYOMOAV");

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
    msg.setTimeStamp(0.31186754214983214);
    msg.setSource(50814U);
    msg.setSourceEntity(114U);
    msg.setDestination(1703U);
    msg.setDestinationEntity(97U);
    msg.timeout = 19583U;
    msg.lat = 0.3974494459218172;
    msg.lon = 0.661911127003567;
    msg.z = 0.2406984939736081;
    msg.z_units = 108U;
    msg.speed = 0.7677610812851634;
    msg.speed_units = 238U;
    msg.custom.assign("XRILTDAUHQZMQTCJWSSPJYODTNUNUWQEOCSRDPNEKEXANBHYXCLEVZVBZILMDSATZQRKPKDNRZKHLNJJVJEVYVBJOMLETWIDVQRYUIGNDNWJBGCZJLNBPAFQFCWUWEVSRFKLCBTRIMILGGZWVCYCMHOEQANROGYYKROTPQYUBOTHDFBHXJBFKFGPMPH");

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
    msg.setTimeStamp(0.22220780601921641);
    msg.setSource(20654U);
    msg.setSourceEntity(3U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(140U);
    msg.timeout = 19146U;
    msg.lat = 0.9989565516996798;
    msg.lon = 0.9417484111258309;
    msg.z = 0.772588908368873;
    msg.z_units = 225U;
    msg.speed = 0.9495876003468336;
    msg.speed_units = 70U;
    msg.custom.assign("IJOXXEHGNDFENPXZZARSMFYOVAFEKMHRFGPQRLKCLBUEWWSNACDKVOVKCEKXFIRRFFJSZSDYUNLDQGTNUVZPWCOMLAJFBHRBRWO");

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
    msg.setTimeStamp(0.8107946944651424);
    msg.setSource(52125U);
    msg.setSourceEntity(214U);
    msg.setDestination(27099U);
    msg.setDestinationEntity(86U);
    msg.timeout = 62531U;
    msg.lat = 0.9105122010590398;
    msg.lon = 0.5280769666444866;
    msg.z = 0.1384877180402838;
    msg.z_units = 107U;
    msg.speed = 0.4067471600073471;
    msg.speed_units = 80U;
    msg.custom.assign("YQSRDFRAKDXRZQYJWTLQJFOSWKXBUQIZNRHJRVPHUUAVNNAYDISQXBKKVVMKQRMIULPXPMDSJHCXGWAODDGNFWPQGXLJJEXAFXGITLZEYDCIUCXTRISUJSTOXBBAFZAYUWZAHKPILMOFGIEMRRCDFVMOJZDACEVMYUOYBKLPHWRTVGCETHWELILKJTNWNVNYJWGBECBBPEPFSGFMKHWO");

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
    msg.setTimeStamp(0.37869529010535896);
    msg.setSource(20729U);
    msg.setSourceEntity(238U);
    msg.setDestination(15221U);
    msg.setDestinationEntity(91U);
    msg.x = 0.988052917765506;
    msg.y = 0.7349548767724465;
    msg.z = 0.6993533199193029;
    msg.t = 0.4809060402249703;

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
    msg.setTimeStamp(0.11380167562129251);
    msg.setSource(20430U);
    msg.setSourceEntity(150U);
    msg.setDestination(28399U);
    msg.setDestinationEntity(202U);
    msg.x = 0.2915214841993965;
    msg.y = 0.4794795070381508;
    msg.z = 0.42852672791259483;
    msg.t = 0.9254274103013183;

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
    msg.setTimeStamp(0.08562504672762772);
    msg.setSource(7957U);
    msg.setSourceEntity(199U);
    msg.setDestination(16325U);
    msg.setDestinationEntity(242U);
    msg.x = 0.41290939634315504;
    msg.y = 0.6238172937110936;
    msg.z = 0.45528658513011777;
    msg.t = 0.3534471651904253;

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
    msg.setTimeStamp(0.5475710538364202);
    msg.setSource(35880U);
    msg.setSourceEntity(112U);
    msg.setDestination(15672U);
    msg.setDestinationEntity(248U);
    msg.timeout = 50163U;
    msg.name.assign("OOZIRAQKAPLVXHNSWXDHYLCYVYDMEDEGIWVGGOWJVZXBUAKUBRSRJKPHHKKMRKTZMJPWZEAFIOSYCXOSTMFRKJPHWCZGFBXTJQMCU");
    msg.custom.assign("HBYNFBELUOM");

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
    msg.setTimeStamp(0.04458457127890947);
    msg.setSource(30317U);
    msg.setSourceEntity(48U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(212U);
    msg.timeout = 9208U;
    msg.name.assign("VHKYLNNJAFJLLUIHCFBYTNEPVWBRRBSICCRCLG");
    msg.custom.assign("IJAYXUAYGYOTSRCFFHIWTKQPTVCXLTFUEKIUSVBIEDWTTZEWILGANXCBRQSJDQKMQVGJYWAPUKEXPQOHLFUZNNPNNOLNVQWKERYYZIBMYQFLZCUVBPXXUROLXCHSJEDMXOPIDFJTWFKDHRCRORMDMGAVQTIBMVGSAKHGDAABFSCBAZMSTDWZKLUNCHMVNCOJGMKSBYUESZYOPDPKOGXRVLWTHIOQEPCGLAHYBDRGUHJQEMHFPSLEZR");

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
    msg.setTimeStamp(0.6128181873587342);
    msg.setSource(29859U);
    msg.setSourceEntity(57U);
    msg.setDestination(15698U);
    msg.setDestinationEntity(227U);
    msg.timeout = 63096U;
    msg.name.assign("JATTZATHENCOYLXMVXIQSRPZBTHYVBKGAASNYLZBUDNROOWZJZUKSVXQRBEOLPTHEVZDLTGDGRXCKFOHIDVQOSINKFBEAJOQZEJJMAILCAUIHWUJVCWCVFPTWDTFXRGCPRSPFAHUHGSWKUJJKQPTXAGYWYLLRX");
    msg.custom.assign("AHQDGXESPZXPNGICWPENCRIQVKQTZIDTXYMPJJXGAFDWKYBTHAOWEJPJYIDUIVMJGQDARASBLUFLKWVVYODBSCQUXMBNVFYUGRMQBQBUNOGEEFUKEJRIERALCPZRGVRTZTXZRHOWVGMNDETKBFZRVDBLAWXJPIFCZVNMOSAHMTPHKNMLOAHLENISOLEWCWQSSWOWGDUJHNZFHFCY");

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
    msg.setTimeStamp(0.8274254001568683);
    msg.setSource(1749U);
    msg.setSourceEntity(182U);
    msg.setDestination(48188U);
    msg.setDestinationEntity(5U);
    msg.lat = 0.9392597699399458;
    msg.lon = 0.45144293335039465;
    msg.z = 0.2843784094912555;
    msg.z_units = 45U;
    msg.speed = 0.7566228957775973;
    msg.speed_units = 208U;
    msg.start_time = 0.4532493227323796;
    msg.custom.assign("MYTNWHSEGWNPEKNPWUYNQKHSCXIHKDDHZOVGKOVFZCYWRJMXTQVOZODUOVQLHURPLGMOEUKQACXLZMNERQNXIASQPVXUFZHHRDELQVLRQEJMYHOYKHCVWEAFXOBZZASCLCRLYAIECYIFPWJ");

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
    msg.setTimeStamp(0.7219704052952681);
    msg.setSource(59794U);
    msg.setSourceEntity(140U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.2861602232093954;
    msg.lon = 0.9206675538606115;
    msg.z = 0.6110224030430256;
    msg.z_units = 201U;
    msg.speed = 0.5167907864546505;
    msg.speed_units = 227U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18088U;
    tmp_msg_0.off_x = 0.27010633256100824;
    tmp_msg_0.off_y = 0.866690826249071;
    tmp_msg_0.off_z = 0.5195155997391502;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.7697853018794397;
    msg.custom.assign("GVFCXHELOJLIUFKMLVOADXHXYHNDWGUYAJQXGHQIDICMMCICPRNXFTEWYNSAEHJXHPJKTEVYELRTOKBDHIKXGPUVZKVLWAABYHHNRUKMSQZGFEWIYJQQBULRSJQQZZPPFSMSOBUNRJNATGQLXOYOGDGSOJTWIDBRCDFICM");

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
    msg.setTimeStamp(0.02440725007105149);
    msg.setSource(27535U);
    msg.setSourceEntity(111U);
    msg.setDestination(17107U);
    msg.setDestinationEntity(203U);
    msg.lat = 0.7486627283301088;
    msg.lon = 0.2645452645668226;
    msg.z = 0.2862196963434859;
    msg.z_units = 109U;
    msg.speed = 0.9624618849442232;
    msg.speed_units = 33U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24092U;
    tmp_msg_0.off_x = 0.05858794964387726;
    tmp_msg_0.off_y = 0.4445015790351575;
    tmp_msg_0.off_z = 0.7116068848176164;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5018586153820304;
    msg.custom.assign("GYHLNMNJFTMATRQRMDTDQEJNY");

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
    msg.setTimeStamp(0.909715462314609);
    msg.setSource(46164U);
    msg.setSourceEntity(14U);
    msg.setDestination(57373U);
    msg.setDestinationEntity(208U);
    msg.vid = 5142U;
    msg.off_x = 0.0509075055617314;
    msg.off_y = 0.47933876885066484;
    msg.off_z = 0.41168552538668235;

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
    msg.setTimeStamp(0.6466941212003224);
    msg.setSource(41209U);
    msg.setSourceEntity(141U);
    msg.setDestination(31001U);
    msg.setDestinationEntity(29U);
    msg.vid = 54732U;
    msg.off_x = 0.6159797323094492;
    msg.off_y = 0.09554412273819668;
    msg.off_z = 0.6959776067325482;

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
    msg.setTimeStamp(0.3409020952278473);
    msg.setSource(42714U);
    msg.setSourceEntity(16U);
    msg.setDestination(54893U);
    msg.setDestinationEntity(97U);
    msg.vid = 14467U;
    msg.off_x = 0.331407095758105;
    msg.off_y = 0.8998421234327546;
    msg.off_z = 0.575555557121903;

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
    msg.setTimeStamp(0.7406927652793697);
    msg.setSource(29947U);
    msg.setSourceEntity(194U);
    msg.setDestination(31398U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.2575248990667296);
    msg.setSource(9814U);
    msg.setSourceEntity(11U);
    msg.setDestination(43310U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.33043575812338655);
    msg.setSource(10143U);
    msg.setSourceEntity(229U);
    msg.setDestination(15561U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.7610693726742472);
    msg.setSource(42853U);
    msg.setSourceEntity(124U);
    msg.setDestination(44671U);
    msg.setDestinationEntity(42U);
    msg.mid = 49395U;

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
    msg.setTimeStamp(0.09560946976469842);
    msg.setSource(27328U);
    msg.setSourceEntity(129U);
    msg.setDestination(34110U);
    msg.setDestinationEntity(220U);
    msg.mid = 53686U;

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
    msg.setTimeStamp(0.5263267134988654);
    msg.setSource(32895U);
    msg.setSourceEntity(254U);
    msg.setDestination(3795U);
    msg.setDestinationEntity(174U);
    msg.mid = 13817U;

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
    msg.setTimeStamp(0.7353001579141226);
    msg.setSource(10250U);
    msg.setSourceEntity(254U);
    msg.setDestination(16965U);
    msg.setDestinationEntity(27U);
    msg.state = 41U;
    msg.eta = 16326U;
    msg.info.assign("DJSWUVGIRYXTMBBNKUPECCDKSETJMQSA");

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
    msg.setTimeStamp(0.06085856154722591);
    msg.setSource(15917U);
    msg.setSourceEntity(208U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(120U);
    msg.state = 95U;
    msg.eta = 1117U;
    msg.info.assign("LZKCQUANSDDQAPKALBVFAXMSFZXGKBMFNSZPEIWNZYWCBLQCYIBSARBVXZLPIRJODNTXIROEXJLUCYDZFQAUVJVWKUCGXBXIATURHTEDMJYPPTYNZFHOOSKWPYHIANOWFYPKJMUPZVTDCFTYEQOJQMXIXSGDODEBMZGAYCVCGHHRTSEMNZE");

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
    msg.setTimeStamp(0.14153886424175377);
    msg.setSource(56862U);
    msg.setSourceEntity(135U);
    msg.setDestination(26283U);
    msg.setDestinationEntity(77U);
    msg.state = 131U;
    msg.eta = 2722U;
    msg.info.assign("ABXFSBOGLXCBDOBOSAJBNJKPJEAUKCTLXVPQAYQEITGNVGOMZITQBMOLDJYVYELSEFXGRPHMXXAAXMNKZVJPCIFNILYLSWHLZMSRNSXDTOJCMJOKUOUZHRHEFSWJKDCAGYKHLEGZXZYHCSIWKFPTSQIDITWOARAGGTEYTSJCPYRWPPFFTXWWMZWNQFQHDQVVVWTPPDZBNWFIILKCHDQKOUDUZJVDYEUMVMKRHCURZBY");

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
    msg.setTimeStamp(0.759441697307738);
    msg.setSource(39966U);
    msg.setSourceEntity(184U);
    msg.setDestination(56824U);
    msg.setDestinationEntity(95U);
    msg.system = 40030U;
    msg.duration = 2733U;
    msg.speed = 0.4132398511618096;
    msg.speed_units = 166U;
    msg.x = 0.10682218511557173;
    msg.y = 0.5655735815727196;
    msg.z = 0.7163788925964364;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.7415161034493437);
    msg.setSource(29011U);
    msg.setSourceEntity(215U);
    msg.setDestination(52141U);
    msg.setDestinationEntity(75U);
    msg.system = 41313U;
    msg.duration = 20050U;
    msg.speed = 0.8482116258105056;
    msg.speed_units = 91U;
    msg.x = 0.8532173679508847;
    msg.y = 0.5368428342907352;
    msg.z = 0.4380241222268356;
    msg.z_units = 211U;

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
    msg.setTimeStamp(0.1149912631237402);
    msg.setSource(13791U);
    msg.setSourceEntity(68U);
    msg.setDestination(18710U);
    msg.setDestinationEntity(229U);
    msg.system = 31793U;
    msg.duration = 52059U;
    msg.speed = 0.29371197576075037;
    msg.speed_units = 146U;
    msg.x = 0.636324537842032;
    msg.y = 0.5817302454741018;
    msg.z = 0.32018013634741893;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.6044970578126115);
    msg.setSource(14069U);
    msg.setSourceEntity(186U);
    msg.setDestination(46712U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.622301082252598;
    msg.lon = 0.7735860181997597;
    msg.speed = 0.447729377241204;
    msg.speed_units = 72U;
    msg.duration = 33062U;
    msg.sys_a = 60334U;
    msg.sys_b = 54516U;
    msg.move_threshold = 0.1996625404951844;

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
    msg.setTimeStamp(0.15884157246206243);
    msg.setSource(8648U);
    msg.setSourceEntity(12U);
    msg.setDestination(2990U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.709255016908196;
    msg.lon = 0.14096404616217206;
    msg.speed = 0.2634991745925387;
    msg.speed_units = 11U;
    msg.duration = 6462U;
    msg.sys_a = 54985U;
    msg.sys_b = 31519U;
    msg.move_threshold = 0.7035257263622147;

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
    msg.setTimeStamp(0.5375178672785367);
    msg.setSource(1465U);
    msg.setSourceEntity(122U);
    msg.setDestination(18331U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.06685178490220056;
    msg.lon = 0.6533734194882778;
    msg.speed = 0.8790667205949244;
    msg.speed_units = 151U;
    msg.duration = 38595U;
    msg.sys_a = 26572U;
    msg.sys_b = 30461U;
    msg.move_threshold = 0.21948267367945373;

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
    msg.setTimeStamp(0.7244244319777711);
    msg.setSource(56157U);
    msg.setSourceEntity(60U);
    msg.setDestination(28967U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.5800483975830708;
    msg.lon = 0.1290662652954947;
    msg.z = 0.9996023380082025;
    msg.z_units = 139U;
    msg.speed = 0.378981358803556;
    msg.speed_units = 55U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.22066416620985396;
    tmp_msg_0.lon = 0.38725412271721726;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SEHGLYBCLFPAFDUNASCRUXTNMPKYAABCUTYGGDYGZFLVCPIVAUBMNXJIKTXPZWJPXRSOOMLTJ");

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
    msg.setTimeStamp(0.48430030154493187);
    msg.setSource(58470U);
    msg.setSourceEntity(60U);
    msg.setDestination(39064U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.8583421740328884;
    msg.lon = 0.15003015488911298;
    msg.z = 0.17425685340128405;
    msg.z_units = 198U;
    msg.speed = 0.7374986206182833;
    msg.speed_units = 150U;
    msg.custom.assign("RWGFKOVZEOZNQAXAEJZZRCAVSVIJAEWTQIKHWWLFIHKEMMDFZTGTUNCYUHNXFFTCHTIBZFKHGPFCIRZAAKJKPRMYWOUZLLLARYXSLLPVENLBGDWXYBVQXVXNCUQNJWVHFLURNIXGXTSUIKEDOSSBPODPBDINHBXGKXOOMMJYHPBQSCJPCBWQMECCDEEKDAZYMODJSFYPQUBSMYRGDSWGPASIKHZLQQARTMV");

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
    msg.setTimeStamp(0.9870069342418488);
    msg.setSource(28166U);
    msg.setSourceEntity(92U);
    msg.setDestination(56094U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.26631805070638725;
    msg.lon = 0.698148965908292;
    msg.z = 0.7259994924728566;
    msg.z_units = 198U;
    msg.speed = 0.8679166466803561;
    msg.speed_units = 100U;
    msg.custom.assign("FDCDCUDYKUNUGAQTPLWWRYUTBNPGXVOXLWKUHKSMIADPQCBYYCHOJLDNBFMSMERSATPQYHITJXLCCGEQMENKMWZFHOZAGIJMDKYSUVB");

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
    msg.setTimeStamp(0.030422466815593463);
    msg.setSource(22534U);
    msg.setSourceEntity(135U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.7074495774709363;
    msg.lon = 0.6497708650740647;

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
    msg.setTimeStamp(0.5663393834308744);
    msg.setSource(55998U);
    msg.setSourceEntity(241U);
    msg.setDestination(12607U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.12755955771767546;
    msg.lon = 0.5555934795089325;

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
    msg.setTimeStamp(0.6401820390966955);
    msg.setSource(61628U);
    msg.setSourceEntity(166U);
    msg.setDestination(49966U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.3734967219315406;
    msg.lon = 0.7862130713199603;

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
    msg.setTimeStamp(0.8314889474575616);
    msg.setSource(43615U);
    msg.setSourceEntity(27U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(138U);
    msg.timeout = 54498U;
    msg.lat = 0.8702491660116137;
    msg.lon = 0.18575448814340734;
    msg.z = 0.8339680592426457;
    msg.z_units = 174U;
    msg.pitch = 0.6050437293747022;
    msg.amplitude = 0.6093539635539345;
    msg.duration = 10476U;
    msg.speed = 0.7032813067620354;
    msg.speed_units = 248U;
    msg.radius = 0.3940071424027579;
    msg.direction = 160U;
    msg.custom.assign("XCOKYQOQIFKNYNNNLADLDZYGJCAHUFQIPGVQHFBTWHYTKTSOPRFXJJLGQGJPFUECIVIGZAQHSGTGHVXRNEMEYFBOAXINPWUSBPTBZWQYXDEBCVZMWKPSDFRVEPHRODSEVYDHWINMQJKCDUSZUREXABUCJMTRVMWTNIKXNLLWZOTAQEGTCFAAYKHKMTXCRLULFOMEDPEHMCWVVRSKZQOBXLIBMWJD");

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
    msg.setTimeStamp(0.5746976228850584);
    msg.setSource(29844U);
    msg.setSourceEntity(128U);
    msg.setDestination(63324U);
    msg.setDestinationEntity(180U);
    msg.timeout = 42990U;
    msg.lat = 0.4081231261825171;
    msg.lon = 0.2786749873312605;
    msg.z = 0.8520017691428086;
    msg.z_units = 14U;
    msg.pitch = 0.502180600746179;
    msg.amplitude = 0.4140550395977848;
    msg.duration = 18548U;
    msg.speed = 0.3269257769237194;
    msg.speed_units = 139U;
    msg.radius = 0.8922309129665521;
    msg.direction = 14U;
    msg.custom.assign("ZZMRWNLYTTKDSPMWHDZTNQFUQQPWVOFJCJIZLUMIWQQMXIVKBRCGATOAPYKWWOJZKXXLYZMFVCRWSALALYR");

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
    msg.setTimeStamp(0.9314272323693954);
    msg.setSource(54675U);
    msg.setSourceEntity(139U);
    msg.setDestination(1428U);
    msg.setDestinationEntity(66U);
    msg.timeout = 51988U;
    msg.lat = 0.5214722368508188;
    msg.lon = 0.16321352862727412;
    msg.z = 0.6759637878350309;
    msg.z_units = 153U;
    msg.pitch = 0.33649990903448035;
    msg.amplitude = 0.9358882544031241;
    msg.duration = 44868U;
    msg.speed = 0.895809215546133;
    msg.speed_units = 94U;
    msg.radius = 0.8975043254661795;
    msg.direction = 134U;
    msg.custom.assign("TLRSQMYIJJCVUBOQQHBYYXBDWTKHWKOZPYTEVUOUAEWPKFCMWVNBGGHZXGPCZMIZZRAGPWKPOLSRLCNSZWEIXHAAHHKWFEINNIQTUMTQOYACJSYJROSXUFFAXMKNFOPTGGWGGCIJJSIGWBOAAKCNDBDRRDKQYVNSYZCCDMEHUAOHQVVFXDXJDNTSUTLJPQTRUN");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.2753431538551795);
    msg.setSource(17600U);
    msg.setSourceEntity(212U);
    msg.setDestination(27263U);
    msg.setDestinationEntity(80U);
    msg.control_src = 16105U;
    msg.control_ent = 95U;
    msg.timeout = 0.8266796946359332;
    msg.loiter_radius = 0.8756302388320532;
    msg.altitude_interval = 0.37765632128665694;

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
    msg.setTimeStamp(0.6704121770620137);
    msg.setSource(37995U);
    msg.setSourceEntity(17U);
    msg.setDestination(56557U);
    msg.setDestinationEntity(73U);
    msg.control_src = 60439U;
    msg.control_ent = 194U;
    msg.timeout = 0.949897166205788;
    msg.loiter_radius = 0.30952077070901085;
    msg.altitude_interval = 0.9740300366302335;

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
    msg.setTimeStamp(0.26638763032692314);
    msg.setSource(26878U);
    msg.setSourceEntity(211U);
    msg.setDestination(7698U);
    msg.setDestinationEntity(211U);
    msg.control_src = 12201U;
    msg.control_ent = 102U;
    msg.timeout = 0.9935455668797647;
    msg.loiter_radius = 0.27142014041645535;
    msg.altitude_interval = 0.316383613057982;

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
    msg.setTimeStamp(0.4857310244177735);
    msg.setSource(22153U);
    msg.setSourceEntity(33U);
    msg.setDestination(24442U);
    msg.setDestinationEntity(184U);
    msg.flags = 121U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.03302109127160924;
    tmp_msg_0.speed_units = 66U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8475794948795103;
    tmp_msg_1.z_units = 23U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8666215006579503;
    msg.lon = 0.6772128094999581;
    msg.radius = 0.3954300534825269;

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
    msg.setTimeStamp(0.681587269637506);
    msg.setSource(30728U);
    msg.setSourceEntity(192U);
    msg.setDestination(12397U);
    msg.setDestinationEntity(65U);
    msg.flags = 151U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9956806240508588;
    tmp_msg_0.speed_units = 138U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7159912559470606;
    tmp_msg_1.z_units = 130U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5305456055792562;
    msg.lon = 0.7497460138339602;
    msg.radius = 0.09287481765969341;

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
    msg.setTimeStamp(0.23196933579455015);
    msg.setSource(62374U);
    msg.setSourceEntity(94U);
    msg.setDestination(49365U);
    msg.setDestinationEntity(78U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5278090143262978;
    tmp_msg_0.speed_units = 206U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9458514112910658;
    tmp_msg_1.z_units = 51U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9050865705285348;
    msg.lon = 0.11927075544782295;
    msg.radius = 0.8380268554592518;

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
    msg.setTimeStamp(0.5066009676117962);
    msg.setSource(9798U);
    msg.setSourceEntity(42U);
    msg.setDestination(27419U);
    msg.setDestinationEntity(10U);
    msg.control_src = 8983U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 94U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4361540817010884;
    tmp_tmp_msg_0_0.speed_units = 188U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.18169862391608238;
    tmp_tmp_msg_0_1.z_units = 80U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.45898774901038764;
    tmp_msg_0.lon = 0.3881504985175397;
    tmp_msg_0.radius = 0.5955255020944616;
    msg.reference.set(tmp_msg_0);
    msg.state = 97U;
    msg.proximity = 126U;

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
    msg.setTimeStamp(0.997084080661586);
    msg.setSource(62150U);
    msg.setSourceEntity(37U);
    msg.setDestination(37366U);
    msg.setDestinationEntity(76U);
    msg.control_src = 8988U;
    msg.control_ent = 153U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 14U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9238130909484106;
    tmp_tmp_msg_0_0.speed_units = 228U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8217112271705286;
    tmp_tmp_msg_0_1.z_units = 42U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9274169485321091;
    tmp_msg_0.lon = 0.48207956008254527;
    tmp_msg_0.radius = 0.3407308625193357;
    msg.reference.set(tmp_msg_0);
    msg.state = 216U;
    msg.proximity = 145U;

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
    msg.setTimeStamp(0.2878934626477958);
    msg.setSource(44285U);
    msg.setSourceEntity(73U);
    msg.setDestination(45271U);
    msg.setDestinationEntity(174U);
    msg.control_src = 14893U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 108U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.23342687768469483;
    tmp_tmp_msg_0_0.speed_units = 27U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11647843784149281;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13413699771956644;
    tmp_msg_0.lon = 0.01815721924383562;
    tmp_msg_0.radius = 0.42631407363386054;
    msg.reference.set(tmp_msg_0);
    msg.state = 109U;
    msg.proximity = 200U;

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
    msg.setTimeStamp(0.13216829761803028);
    msg.setSource(63104U);
    msg.setSourceEntity(0U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(209U);
    msg.op_mode = 240U;
    msg.error_count = 7U;
    msg.error_ents.assign("ZIDIFMFPGCSZRHCTKCACENMJJBRVZHHJVKXARCVOPKTEHVRTHXKUGXEPYCIRBWZDLWAAERGLALMTXNQOEMNDFZYFFYYDEBHCPUZULPBGPSWOINISMNFVNRPXJPYQSKUSKOZBSZFDQJGXYUHQBOGSXCHDWKIPMMULZCEJUVQSGLLAZINDHWMOYUANEVXGBSTUEIJSANFETAKWLJIARJRFHKQOVYFTVYMCQWYBTGKDQLJGBBMLQTWRPTO");
    msg.maneuver_type = 17404U;
    msg.maneuver_stime = 0.188954277065713;
    msg.maneuver_eta = 58729U;
    msg.control_loops = 3104508669U;
    msg.flags = 42U;
    msg.last_error.assign("PROSPIAOTVIAOTX");
    msg.last_error_time = 0.3989893657670839;

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
    msg.setTimeStamp(0.9792952174020909);
    msg.setSource(44426U);
    msg.setSourceEntity(147U);
    msg.setDestination(5171U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 241U;
    msg.error_count = 132U;
    msg.error_ents.assign("PJYDQCNMHGYUUHDCHRIRWOPHPSJJVAZOHDIAJTZNOLFECAKFTPFAWJSXTZVGHBBLSHCNGXTYTXUNBTBELJFKNUZJIOEWFIDRCOHJTSQQWEVUMWIXSSPGASVBQKZOIOYTISUFYYTXYZFWKZRMIREVQBLQZFCLUXDGGXFVQDNNLKGILATCQDPAKGUKEMQPVWSHWRHYR");
    msg.maneuver_type = 2125U;
    msg.maneuver_stime = 0.013954255146681138;
    msg.maneuver_eta = 52887U;
    msg.control_loops = 95435265U;
    msg.flags = 242U;
    msg.last_error.assign("XPOAQUHVDBOFACTYTKPWXCPRYHOG");
    msg.last_error_time = 0.9665220480027074;

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
    msg.setTimeStamp(0.2508370649821662);
    msg.setSource(23535U);
    msg.setSourceEntity(108U);
    msg.setDestination(23194U);
    msg.setDestinationEntity(191U);
    msg.op_mode = 45U;
    msg.error_count = 205U;
    msg.error_ents.assign("RPXNXVZUTFQIBSRLZSXDADUYNBONOTMUHISOVJQPFZJDDKDKMIYVQNAHYHITBAMNSBGTXQYEVPJXKWZHVOBLVCLISRIUZZYZCREGBNKJUUHZBPLFVEJBEELVAYDWUPQCJMMTZPOSGWWQFDEOHPAWIBCEGENVQPPCFCAIDLHYGXJESTKYTCHKRRDFIKXYWTXILAOAOMTHFMMLRJSPWUGLWYMGBE");
    msg.maneuver_type = 63147U;
    msg.maneuver_stime = 0.6958930318421027;
    msg.maneuver_eta = 32104U;
    msg.control_loops = 1215098822U;
    msg.flags = 230U;
    msg.last_error.assign("VJIMZNLHYXWNXERWQCAOTODGWHBILHMLARYCZZGXVZKJUNZPTKWQSFTIQFEJRADLVMDPGREBZFJJXZDQCNQWNSGBTVHTRLOEXHQYAOAXSBDYXJORANOHDFSCWGXWSUTPFLVOCGMKPOPRVFJKOEHJKMTQPUTPYBCRFIYBXUGTLYMVEXPZCLNBANUEQASFNGIVSMKESPYZJIIKCYDRZMFCUWRSCEYHMKWDJWKIUOILPNAHB");
    msg.last_error_time = 0.4563506191056761;

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
    msg.setTimeStamp(0.4256439991259371);
    msg.setSource(58363U);
    msg.setSourceEntity(239U);
    msg.setDestination(35023U);
    msg.setDestinationEntity(171U);
    msg.type = 130U;
    msg.request_id = 26444U;
    msg.command = 143U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3245648877392021;
    tmp_tmp_msg_0_0.speed_units = 131U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 62777U;
    tmp_msg_0.custom.assign("JZHRHXJJTDWPTLPKTQFXEPMRYWDITIDEODYBHUOHQUXPKEFFHJLGAMCJRZIAZCUXNNBCAGWWEZQIONZYBDXDWSVROZAPVUPPUXVKVUSAPYLSJKNKCFFMCAGIDXGNLJOGYCLKISAIVQI");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 6345U;
    msg.info.assign("BCKOXSEWKFQPJULEHVQSVWQLEMGHFGPZJJSBRTUPRYKXRYBUSGDWOTEQGDXPUFXCKFIPZDOIDUTLLBAPDUEYLGLBKFCBHKIMNYGVKRXMIAPWBNWJPHTIZZYHJYDEXMQDCWMYAWBQXURFHV");

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
    msg.setTimeStamp(0.9741887955032954);
    msg.setSource(24360U);
    msg.setSourceEntity(253U);
    msg.setDestination(21548U);
    msg.setDestinationEntity(80U);
    msg.type = 199U;
    msg.request_id = 24217U;
    msg.command = 134U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 30305U;
    tmp_msg_0.lat = 0.4863471016252945;
    tmp_msg_0.lon = 0.077757115386346;
    tmp_msg_0.z = 0.9746486413934259;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.amplitude = 0.9639743435770408;
    tmp_msg_0.pitch = 0.6063856881590816;
    tmp_msg_0.speed = 0.4645361202411993;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.custom.assign("FMOQSKQAMKNWVCKDFJOURDRFIIMRZUOUVXDGFEJTDNNDTLHOAYGSQOGLKZAYBXDFAAUVHPNHJTHFWBQSXTVOVUZBIMWIWTEFYCTPRBXRUVWUMGXMCYPTGTDNYXGOPHYDXSNWLMBJYEPNBVLKHSSSUHJIIOPLAMYYZQPSZJWLQNMQONPCRKHRGTCCQZCSCCEZPEERZXGRFA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24110U;
    msg.info.assign("LKGIVAWECCGFYXBXHIUNYEFPBNXRGFJCJHKMNGCWTCDBEPKTXLCRXUWZNOWZYSABMODLUF");

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
    msg.setTimeStamp(0.4660055725202519);
    msg.setSource(62867U);
    msg.setSourceEntity(6U);
    msg.setDestination(37061U);
    msg.setDestinationEntity(253U);
    msg.type = 97U;
    msg.request_id = 53150U;
    msg.command = 167U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 24765U;
    tmp_msg_0.name.assign("ILBTGMRJJOOEOEJZPAMNKPIPNABVFCBJWWYNXIVSIMTNIQWPRVQUCHKKXWANVDTKQRCNQEZHKSJLUHTSXQEZKELERXQGHTQQBOLRFFHSMNZFHRBTNDUAPXXSCVXGYLLZHVROMUYHAIECYJXMMLUGAGBJGOSKFMETTSEDZYEYOCQMCFJWWBWDHPCWWRXQIIXBIAWZPFOJ");
    tmp_msg_0.custom.assign("UXCJHVDSLWYGVNFKQLWKISYQTBBFVEWGLHFFBCSKHJVRPJBDNFCQEWOETTTJVYUGCZGHLNOVFRUBYMKHDBOLSOHBWOMIAXWHXQRBQASPQUKHTXSZFCUPXYELHTWFEOXTEYHMMZWCYRGKCBIJIUXLKAQGITZJPLLAZTKMVQAPKRNMRYGQSAPZGWJEEMZJWICRYQNIUXJCNB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22552U;
    msg.info.assign("EESDPZNFHVTLFSVSNPKDTEXIYPOVUTCKOXURHWZKRHSPGXUTAWXJBMOINACXOOYQAAMMWUFJYRXLZWNQLUNLYPAYRRCMQJKUEQXEGQJELPAPPGYTHKMAQZMK");

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
    msg.setTimeStamp(0.9935635724742949);
    msg.setSource(3206U);
    msg.setSourceEntity(24U);
    msg.setDestination(45146U);
    msg.setDestinationEntity(185U);
    msg.command = 195U;
    msg.entities.assign("GLVUIBEIIUTFAZEIDGTMNOQVZNSOBRABRHLYJQRCE");

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
    msg.setTimeStamp(0.03253979029043785);
    msg.setSource(40645U);
    msg.setSourceEntity(44U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(144U);
    msg.command = 177U;
    msg.entities.assign("BJTJTWIDLMCRHHACVKXTKFUTUNFOWLNPXYICAPGXGGNKOZHKWBVESFMCUINWWJJIZMAGVNRYGHPSQUYPMQVSAXMZMHCFNGYEBOIIXBNBRAPYXSCSZWDCOHJKRUNVZDNPODBQJFZKCAANHVRBFXZLLQYZFICSGITXUYPWERIQTWTEQKWROJHQFEZLFDEEKBMMEQCLRDYPKUOTLSRVFSHRUMUYVBMDLOUQDQGKPVTSJZ");

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
    msg.setTimeStamp(0.926658399434546);
    msg.setSource(8841U);
    msg.setSourceEntity(25U);
    msg.setDestination(52849U);
    msg.setDestinationEntity(113U);
    msg.command = 75U;
    msg.entities.assign("RXGAHMJMLIPROSGGZPOOOWTTPMWXWQYGOCFUCSYKPVSFRMUZBULBJVHSLVKZTCRMBWFKFJPEWUVKJEALMUCLGQAJFBBWOQDZDDGHZPOEERGHHAAUWUVELYDYXABCJSQYQKHFYJGIWYUKKOKSNJIADPFAZFDPOTLT");

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
    msg.setTimeStamp(0.15823207190932753);
    msg.setSource(2091U);
    msg.setSourceEntity(132U);
    msg.setDestination(18270U);
    msg.setDestinationEntity(176U);
    msg.mcount = 237U;
    msg.mnames.assign("USIUAHMNWJCSRNLJLOQLRXPTXJCOOZGIMKCDFFHBFTXEHYMIFBRYWBTDYDGXNKXWKQFOEPPKJBVFRUYOWVJOMWEATVXVLLBNBVGXRRHIUFGTARZHDBZEACOIZKQDEUOMAQABUANSOXJQCMYQAOUYYPLGNKMHEDJNZJRFCT");
    msg.ecount = 167U;
    msg.enames.assign("SEACBGTNZUYVYJGLKGZLLHVXYWFCGTNZKBRZSMBLLBONDWOTXYMHACPQIMDQPSDJASOOTRTVOUOFPTJHUKPUAVKYHIYUKQNTFGGVFZIZYTUCMSZLZWJIILPDPVENOASDKSEXQFNFMFGAJRLJXDANONZXMHWEWJVSAIHJRAKXDLVHIOBJFMGSKWVPCZCMCQEUWWVYXRGJRUNUQTBEQOKLRHBYENEPCPD");
    msg.ccount = 126U;
    msg.cnames.assign("DUYMDVHVKTIXLAQCJBSXZUFAWSFEECAYTIXHPJLPHPOQUILVNTRGFJCEUTGNBKYIGTMNUOOSNPZLENYXFWHFEJJGEVRRBQNTKFUWFCPOQAOPKEJOATDWRQNJMRCSSZJSKZDDYFXASWXEMHCUIYPALMBEGCLBSLKAC");
    msg.last_error.assign("JFLMZCDHSAXWWGAORQBASPOWSDJWASIDRWHUQBITUFRCQKFGAXXZLCVTEKYYMDTIGYFBEYGYRFVKBHOMLRRMMBZTOZCBPQNKVSENDWMKVYPOQ");
    msg.last_error_time = 0.36209642184651303;

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
    msg.setTimeStamp(0.4935216771692523);
    msg.setSource(10551U);
    msg.setSourceEntity(115U);
    msg.setDestination(23274U);
    msg.setDestinationEntity(195U);
    msg.mcount = 25U;
    msg.mnames.assign("SWKNOXWRHMEDVVRDIIXZHHOIKQLYXBPQODJKLJMQDSWQWPPTLUFGAPXQZFTTEIUCNUSUMEKSMGZCJHUJALMAWAGSNTNQOBKCENGDPFGLWPWVASKHISGYZCSZEOYBCLVIXPIORDMHBYNXAPMYTEJARIIJNCDTYJJRGZFFPFWXYKTNHBG");
    msg.ecount = 45U;
    msg.enames.assign("XAEQSRDOSKFPLZWVUEWVUYQN");
    msg.ccount = 99U;
    msg.cnames.assign("OZIWSRRDPMSVLQFPADVJPEYCYEHZOHJIQXTCUKHURZUUUOQXOKPXTISYHYEKBQEMIUULWFYPMLKSMCBGDNOKOKEVEAHSSDBTRVIFXTFNKIPVNHQGZXXQIPCTAPJNTVYZRFRCTCWURCCJNLBQGNGNBGFDEAWSCMVLVELYLVVSUAXIAKRJWBHYTQZJIQIWGZMNXOOTLDMPBEMWPGGMBDQDOEAFGKGSFWZFXJ");
    msg.last_error.assign("VSZCMOLQEJOBXXIOYBOLNUIXBHFG");
    msg.last_error_time = 0.5387784348702023;

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
    msg.setTimeStamp(0.5033063184596919);
    msg.setSource(13414U);
    msg.setSourceEntity(10U);
    msg.setDestination(25658U);
    msg.setDestinationEntity(248U);
    msg.mcount = 109U;
    msg.mnames.assign("FIRXYQKBOLUKVFTNEXVIBZGUQKSIISKILPTDJSRMJZVYPLWPNISBOMLSUASCHOTMURCANYDKPAIMLJCYKQEPJWVZFLNJUZPOVFGBMADDNEIAVOEUVBVMSWJQYOEOPWLKSTONGYRHQRGRZNUBLDCXEFZUUDXFGSFNWFAPDGJBQZMCXPJEHWXKNLY");
    msg.ecount = 72U;
    msg.enames.assign("XOYGDJKZHFGMYPBTTHVIVURZNECMQJKYKGJUEFLKOYIQAPJCAHTEPLNJFWQWEIBVNMXNFSLFOVMMRLXUPBEWJJVCMVAYPFGRAGZOZSAKRGUMCBZAEXXTLXXANOBFQGFLNGASLUDTNCWJDIIQQPQZOVBBUCPHATZRIKZJIVCWSFIRLUUBGIK");
    msg.ccount = 241U;
    msg.cnames.assign("WOEZKHJFYSEUPZKOOCHTEMPEWLCAUXGIMYSVTOVLMUUYIMDDRJNIGYAHGRKOJFSORDGUKLDPWXJOHLNCXIYANTRCCXTGBVXXEIDEKXAJVBVQJIUCWHHQXVPSUF");
    msg.last_error.assign("HFHPVJRUBQKNTNAYHXQMYCGIBRDLTWSLYDKFTGTALFDXVBOCBBOJEMIEELCSPWECUXBRZAWVPJPHLZWZVGTZYIJQDUKWDUVOCEMVPFZAJGHZDSYKKYLAILNJNMXWJKYOTFVCFYKASFFGOXNTZCQWORFNURX");
    msg.last_error_time = 0.5244988867174413;

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
    msg.setTimeStamp(0.3168230064089186);
    msg.setSource(38930U);
    msg.setSourceEntity(86U);
    msg.setDestination(17067U);
    msg.setDestinationEntity(102U);
    msg.mask = 121U;
    msg.max_depth = 0.22573420730232452;
    msg.min_altitude = 0.017112972311582597;
    msg.max_altitude = 0.9363359445028577;
    msg.min_speed = 0.6124259144763909;
    msg.max_speed = 0.2668811470186776;
    msg.max_vrate = 0.7168252193161672;
    msg.lat = 0.5693044357417405;
    msg.lon = 0.7807952717049148;
    msg.orientation = 0.48279829089286996;
    msg.width = 0.395378068685426;
    msg.length = 0.5150736788801179;

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
    msg.setTimeStamp(0.307869004168867);
    msg.setSource(62315U);
    msg.setSourceEntity(111U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(40U);
    msg.mask = 192U;
    msg.max_depth = 0.5405431745762624;
    msg.min_altitude = 0.28407479301473515;
    msg.max_altitude = 0.8479103234497529;
    msg.min_speed = 0.8683960798604238;
    msg.max_speed = 0.881494972310803;
    msg.max_vrate = 0.07213630581894381;
    msg.lat = 0.5238043981713454;
    msg.lon = 0.3815765311324719;
    msg.orientation = 0.7803435873576944;
    msg.width = 0.40908415307961254;
    msg.length = 0.6370057100609456;

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
    msg.setTimeStamp(0.16994882024921998);
    msg.setSource(27384U);
    msg.setSourceEntity(95U);
    msg.setDestination(33672U);
    msg.setDestinationEntity(161U);
    msg.mask = 139U;
    msg.max_depth = 0.125009804185214;
    msg.min_altitude = 0.19810147225440344;
    msg.max_altitude = 0.9553675273690238;
    msg.min_speed = 0.11060702659752852;
    msg.max_speed = 0.6375984627153521;
    msg.max_vrate = 0.17343081960904905;
    msg.lat = 0.23965079954372048;
    msg.lon = 0.5121666546225666;
    msg.orientation = 0.3469934016507037;
    msg.width = 0.5931814773486525;
    msg.length = 0.2888901099024349;

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
    msg.setTimeStamp(0.09477744757219908);
    msg.setSource(19478U);
    msg.setSourceEntity(20U);
    msg.setDestination(48500U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.36630124225049865);
    msg.setSource(49579U);
    msg.setSourceEntity(66U);
    msg.setDestination(55972U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.11312923955092113);
    msg.setSource(35958U);
    msg.setSourceEntity(112U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.7082439739004002);
    msg.setSource(25860U);
    msg.setSourceEntity(168U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(151U);
    msg.duration = 62081U;

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
    msg.setTimeStamp(0.20417139283665298);
    msg.setSource(28403U);
    msg.setSourceEntity(166U);
    msg.setDestination(16130U);
    msg.setDestinationEntity(24U);
    msg.duration = 61652U;

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
    msg.setTimeStamp(0.36513979808734043);
    msg.setSource(43947U);
    msg.setSourceEntity(42U);
    msg.setDestination(15386U);
    msg.setDestinationEntity(175U);
    msg.duration = 37310U;

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
    msg.setTimeStamp(0.9298352768517225);
    msg.setSource(9542U);
    msg.setSourceEntity(140U);
    msg.setDestination(12317U);
    msg.setDestinationEntity(231U);
    msg.enable = 134U;
    msg.mask = 3254958965U;
    msg.scope_ref = 0.2023794027335878;

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
    msg.setTimeStamp(0.7215812416828726);
    msg.setSource(53345U);
    msg.setSourceEntity(128U);
    msg.setDestination(16643U);
    msg.setDestinationEntity(168U);
    msg.enable = 53U;
    msg.mask = 1018582600U;
    msg.scope_ref = 0.06762625479868833;

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
    msg.setTimeStamp(0.09404632684400349);
    msg.setSource(11580U);
    msg.setSourceEntity(13U);
    msg.setDestination(14448U);
    msg.setDestinationEntity(99U);
    msg.enable = 121U;
    msg.mask = 1810752316U;
    msg.scope_ref = 0.6368538098082994;

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
    msg.setTimeStamp(0.13431892777859378);
    msg.setSource(28033U);
    msg.setSourceEntity(238U);
    msg.setDestination(33862U);
    msg.setDestinationEntity(250U);
    msg.medium = 121U;

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
    msg.setTimeStamp(0.6960054782498178);
    msg.setSource(21980U);
    msg.setSourceEntity(197U);
    msg.setDestination(50392U);
    msg.setDestinationEntity(250U);
    msg.medium = 178U;

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
    msg.setTimeStamp(0.6637783986593474);
    msg.setSource(5026U);
    msg.setSourceEntity(50U);
    msg.setDestination(5859U);
    msg.setDestinationEntity(247U);
    msg.medium = 19U;

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
    msg.setTimeStamp(0.710089033234859);
    msg.setSource(53284U);
    msg.setSourceEntity(73U);
    msg.setDestination(36467U);
    msg.setDestinationEntity(165U);
    msg.value = 0.2802305672657467;
    msg.type = 40U;

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
    msg.setTimeStamp(0.6388697850570249);
    msg.setSource(56581U);
    msg.setSourceEntity(120U);
    msg.setDestination(3032U);
    msg.setDestinationEntity(39U);
    msg.value = 0.14931232721028476;
    msg.type = 43U;

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
    msg.setTimeStamp(0.9195667817770726);
    msg.setSource(873U);
    msg.setSourceEntity(21U);
    msg.setDestination(2514U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9739080844264363;
    msg.type = 129U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.09361492322761056);
    msg.setSource(32646U);
    msg.setSourceEntity(108U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.3983179614852266);
    msg.setSource(36910U);
    msg.setSourceEntity(86U);
    msg.setDestination(49352U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.3089756877987735);
    msg.setSource(46857U);
    msg.setSourceEntity(215U);
    msg.setDestination(22037U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.39650748486958687);
    msg.setSource(49844U);
    msg.setSourceEntity(0U);
    msg.setDestination(19546U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("VUGBAACDUUTRAEUAQSHCFJJRNXWLBWRREQZCKDYBCZASIFCXXZSIRRTGYEPSGTOMTYTURKKBMOKPDVHMJNTBROKIHWKOUERYNUQDJPPVPAHNFSCBJMMIFFIFBFUWHIIYLDZSYXYLVVWKJCPREDHSMMODQLLLWYBOQUIEXYZXSAJDDIVLMEMKOGPPSFOXZJJIQTVQEVLCDVHLBSCZZWAHUAJTLGPNGGATFOXNYZWWQG");
    msg.description.assign("BDVUGYVXWMCKZXQWPTBLAOPPGWNUERPEIFNWOZHSEIVUEFTIBXLGOHDPSKVCRLQMUNFDQYMTOOROBPCYBZSNIZQKLSPXLCBAUKJSKCHKHURWTRAFCYLYFWJATFAHPNQOKCGGDEFQMQK");
    msg.vnamespace.assign("XMKJUYEGAQBSVLGQUGWHORALJXBZZPBCNJDCQFCIOXKJLNWPYZZQGTAUDFVZLGIYYDDHWTTQNWEEWVWDRFGAIFTPOXZTKKMLWUVEBUYTSVSWYMFV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VPEYDYQNUDUGVHGTXQLLLZCSRRWAMJYYWSTRFVJKWMSNHTNSBXQEPRUVERIUHWYLAUZTARHFNLJZXDOZBTYYECPBVSAIJIWOAUINDBADMYFAMEILQTFKFRUNBMPBBSCNCJCXGNPIVNZKDLXLALIQPDVCFIPXFFUUGJNDHGXOWFEJTBJUHPXKSRCAXCRGCOWWMFZOJSMIYWGQSHMTZVZZEQEMQHOKK");
    tmp_msg_0.value.assign("PGIPKIGVUEIAYYKOQXOVCRUOLGZBOMOULWQZFUWPTIBFNDTCIDXYMPKWRNBQQRNJGEQBFIENMECSIMOWOWYNABYUCFYJVISZDEMXCYBLSHSQFKFRHTHLXRHWKPDVHUPSHKYWDXBDJTUPAFDCSKUETCXZJADVRXRFZLBNQRGGJXOJSJXPATPCTHDLANBQDFJOSWMHVTRZQIEAFGEILKVNSGYMGUNMGNHKYHAVPRZMEOLZVUBAVQ");
    tmp_msg_0.type = 33U;
    tmp_msg_0.access = 110U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("AVNUFPQVWFGLEFJTPTJNYCEKLRCZTBHNAZSCLNBTYRPQHMXYNIEBWGPVCIRJOGHKCDYEGLIQGAOLUBHDPUZGSVWCAFIQNJOJFOUHNZKCYXCBFKEREUQEX");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZKOXBBULESHPFONKRENRAXESZFSHLBCGOEBMTNVMDIHCEQORFDVCIMYGIJPAQEBUFPDMIIGKNJOZMIWLLLVB");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 39417U;
    tmp_tmp_msg_1_0.lat = 0.4438212161795325;
    tmp_tmp_msg_1_0.lon = 0.35598990178435785;
    tmp_tmp_msg_1_0.z = 0.3553014872125635;
    tmp_tmp_msg_1_0.z_units = 172U;
    tmp_tmp_msg_1_0.duration = 389U;
    tmp_tmp_msg_1_0.speed = 0.9802697510828758;
    tmp_tmp_msg_1_0.speed_units = 163U;
    tmp_tmp_msg_1_0.type = 116U;
    tmp_tmp_msg_1_0.radius = 0.880647425668206;
    tmp_tmp_msg_1_0.length = 0.017360072762968803;
    tmp_tmp_msg_1_0.bearing = 0.7586364511297424;
    tmp_tmp_msg_1_0.direction = 31U;
    tmp_tmp_msg_1_0.custom.assign("FBLPJOQFAUJKVZXEO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Distance tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.validity = 126U;
    IMC::DeviceState tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.x = 0.16465245154494712;
    tmp_tmp_tmp_msg_1_1_0.y = 0.5318220181986687;
    tmp_tmp_tmp_msg_1_1_0.z = 0.1693273424783619;
    tmp_tmp_tmp_msg_1_1_0.phi = 0.9631712719310482;
    tmp_tmp_tmp_msg_1_1_0.theta = 0.07691678213428377;
    tmp_tmp_tmp_msg_1_1_0.psi = 0.7177845673226848;
    tmp_tmp_msg_1_1.location.push_back(tmp_tmp_tmp_msg_1_1_0);
    IMC::BeamConfig tmp_tmp_tmp_msg_1_1_1;
    tmp_tmp_tmp_msg_1_1_1.beam_width = 0.2887775297749836;
    tmp_tmp_tmp_msg_1_1_1.beam_height = 0.15473572501609867;
    tmp_tmp_msg_1_1.beam_config.push_back(tmp_tmp_tmp_msg_1_1_1);
    tmp_tmp_msg_1_1.value = 0.7837992034785504;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0016325747213905561);
    msg.setSource(40310U);
    msg.setSourceEntity(139U);
    msg.setDestination(33941U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("ZCNRXURWRATHMSQKHICWOPQGIMXXRJUYKVJXIKYCTEAJKGADHYFREGGSYSZDYNCTPZERBCTGRJXXIHFLJAZLHFANMNVUSVRZXFTWDQUMHSNJUZUNBVJBRIUQRDBQPJ");
    msg.description.assign("PIVTRMQSJOLVQNYHPFKBWKDHVOBXBOBGTSAFKQFUTLIZDKGLJZVQZSSKAMYIFLIDFPOFJNMYJXCCUBHMJDKEFZXVCRQVSODIDBOZJJUDHSYOHLNYYRWWBCYXNLQVQAXGINECUDMIPEUEPBLWYGREZKHEXVPJFWXNRWLCMAYWEIOLSRMRPAPUGAWTTWGUAE");
    msg.vnamespace.assign("RQRBEOBTDSCNLJHDCYTNIIYPPEGKRSJVTGQNEHDMIIZDWNIIAUCPHQXYWKJOLCYMHCLZEZDYOINJHURTNZCCWJHQVKNVLENRQLDEJKTUQVVDOWMASBZFKECQXTSXMTUPRLIWHGGWBGSXOMWBXEVPOTTKFXUJBZAVFZJUGHZUBPGFFLRGADUISXKVAZXOWZLEQQMPXBWNFBAFNAAMRYUKBPSOMYOUQPYJEKTSFPYVFY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RYSWZBHFRXVLMSYQJBJAIUWAOWWKEQBTQPGCAINWOKQXPVUSLKRQUUYXWIHJEOCHQBEVVMLRZJNZZCEBCKBKFMDKPHBFMQNAMWVCPXYOZBVLXYOOCTLWZXFDNTZGEIQTBJAHNPADAAPSHGIUDFHRTPIYNPGIIQYMOLJCFRFDYGBUKSDMDOFRXYCXETDVWGUHNZKGFLRRUSUXAKMCIPAMX");
    tmp_msg_0.value.assign("DLMCBBGRKVMYNOQZNUUJHFYTOXMIKXAVXLSPQBJFNPSXPWHDRYADZKDMXFKKIVJCRCDEORSRNYQRRCGCFQLIYHSIIKWJBUMLZZEQQDXGSVPTTAWOFLHAXHJABBHJLEZRYOQUOYCPTCKRMGXBUEHVIWSVFMZTPWULGZTGZASOVKNSFONELTZKOFNBUUWEDMGGFIAHTVCPPQJEEVEHAPIBTRWANXVFZJIOSCSWDLQKGJAI");
    tmp_msg_0.type = 60U;
    tmp_msg_0.access = 252U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LXKNYFKBUGLWITYZJMDYZJROWBWJBNRHDUBTXVOHSPEGMNXQDRYXHBAYADHAOWMCIZKIMEIICUAXKLJVLDURYSUTVGMSJHBTIFQFIFFPQVENKCRPUVJVKWAPOQIVXDOMGTEPISZAKTNHXZQHGRQEVZSAARQJ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("TVOZOWGGABWLSUNLTPELPPVSLZHRTWPXXDQGAYIBGOZXXNDJKEREYYBHJDOJITIOKNGGEGEWNCZUVMXQPINRQFKYMMGFUCZLVIBYCNLBUXQRJFAYLNSPGRJAFRQBZERXRQEHIQBMSMSXIAKZCHWMWDUSYEHHBVJSEPWUVGBIDZKPODJLYVOOATUHJQPFWMPQTNVLDJ");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 38951U;
    tmp_tmp_msg_1_0.lat = 0.49385344057488134;
    tmp_tmp_msg_1_0.lon = 0.46012930251414363;
    tmp_tmp_msg_1_0.z = 0.03869569379292459;
    tmp_tmp_msg_1_0.z_units = 129U;
    tmp_tmp_msg_1_0.speed = 0.015719104693201924;
    tmp_tmp_msg_1_0.speed_units = 78U;
    tmp_tmp_msg_1_0.bearing = 0.7059860397693121;
    tmp_tmp_msg_1_0.cross_angle = 0.5775201737856069;
    tmp_tmp_msg_1_0.width = 0.9814606302528301;
    tmp_tmp_msg_1_0.length = 0.3552415429411744;
    tmp_tmp_msg_1_0.hstep = 0.1295262056923593;
    tmp_tmp_msg_1_0.coff = 32U;
    tmp_tmp_msg_1_0.alternation = 82U;
    tmp_tmp_msg_1_0.flags = 150U;
    tmp_tmp_msg_1_0.custom.assign("CLGMWRBBHTAFYBZPGCULDDOYXBPJPRRIHZPERPJASCECDIJEUONVTVGKUQAKXHFIUSRRYWTWMUGMHTOGVTDNDZSPWVEAGIALHXKSJJNPQKYBMOTLOYTQYMLLCDRDNVQUWQQYRHNLESXNVFGIMOIFEJLWGHZWMWSVLFCOVXJAMIDZJOAFQOSAU");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticRangeReply tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.address = 122U;
    tmp_tmp_msg_1_1.status = 122U;
    tmp_tmp_msg_1_1.range = 0.48238356755830336;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("QKWKGIVRLUGCLQUZBXPCQEZQVUYZBBTAVQWWNMGIJIBLKRLGYZDIJBENKNUFDTHWYATSOWWZOAWAQYFAEFZVHKKIMVBIRHRETYCRSFXMSSFNNFENGCICMLCYDRDFGSSWLPUOMHDQGMQZTIVSPNJJOVCFZSOMXVEKUZFSSPXKI");
    tmp_msg_2.dest_man.assign("LFGYWBNHQXKGCQAWRWAAMTFIJUPVYZHVSGMOPWJLMTXKYIYEUHEVSSJNCTEQCENXIKPRFYPVIMKKZIZBPIXNNUMRYTTDOFDURGBSRFLHEGWZYCVXICHMONVKZGGRJPDCUWXLBOFOOXSHVMQGILBYWBTLJUPBOQTPEDLTSGXEYXUNLCE");
    tmp_msg_2.conditions.assign("ITNDTUDMRALIRNPCIZDUILVIKGLYEGLWTWGWSHVBYXMQBWPHFDQOOKPUNCLAOCXLJVPBURJVMMXQIVGVFSUHKZAWLEVEMPRNOWFSDMFOKXTHBOXYOFGLTQIFNJMDRBPEYPHBHDORNJJBNPZKJ");
    IMC::GetOperationalLimits tmp_tmp_msg_2_0;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::QueryPowerChannelState tmp_msg_3;
    msg.start_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.7409976139109338);
    msg.setSource(49323U);
    msg.setSourceEntity(85U);
    msg.setDestination(44166U);
    msg.setDestinationEntity(158U);
    msg.plan_id.assign("BGYFDKTJMYMRNOFETLRVSGZJQNUAPMJXEHJEWAHYVCZWXGWBSJKUOUDHSITGPZOBYXEPAGQWSEJLYXCCMLIDCWAVYNRMBDXSIQTUOODQRLBEMIYSYQHFOSLHPUZHZVPMRBIIJWNVTMVFOVCLOTZVKMQRXYGKNZJCCPGFTGDPNSCRXIAOPQZFAHSCKNUFHDQAIZGYAZXXUMWWWGLNWXAFERKDRKR");
    msg.description.assign("SNCDCLXOLSNGSBDUTPRNFWFNXKQALOHLUPMSKXXUAMNQANVGZKYMWADNIWEPQJIHSOVUUQAAOTLRBOCGGPNFIOJXWLKGIEHZBSWHOHSEELHXADOJGWPNIEJEMUOIDJBUFQYVABQQBCTZCULRGVOMPFEIMGKATPTJHZRVDLNSKE");
    msg.vnamespace.assign("QUGDYXNMEVANTFYDHPZRK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UBIJDKBCJOMFOQAYWVMVOEPTGLZPEBWODDSTSGFWUROKAPQAQPCSHIHMWXPKBDARBCY");
    tmp_msg_0.value.assign("AEBJUNFBVEGBGJDYQQMTBPXWXEGTFMMPHVZGCRGFQKGRPHLIWLTUTXLHIJCCPFMRMNHYFOYAYBXFJNNEZVUHWFFASSASLBUYEOQJXLVXRKQYVYCFBXONLNMIPHA");
    tmp_msg_0.type = 162U;
    tmp_msg_0.access = 24U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HOFKJDANAUQKFQQZHAWCFUMVZMNOFDHXNSBYYKBFNTJESDWLCUNZIRYHLTVXIOXECBWNCUATHETSATDJIFGJWVMHWZAGVIIBOXIDWCMDKJZUBPHDUDOITRYYSYGGJCQILJSLXUPQUNXQ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("MRLBFVFDQTRESZJDPCWKBEWIRDEDQPTYOLJGFNNZLDHJPULNVUHAXKRAVGSDSTPTEYXXEMQTXCNFVVABHKZVSWXFYDOECUMATZRHGOBVPLUCHVPZFVEIJOSIPQWEUNYSBWMY");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 29276U;
    tmp_tmp_msg_1_0.lat = 0.7024368021638014;
    tmp_tmp_msg_1_0.lon = 0.3766222900186418;
    tmp_tmp_msg_1_0.z = 0.11423244975975122;
    tmp_tmp_msg_1_0.z_units = 205U;
    tmp_tmp_msg_1_0.speed = 0.06722810370038523;
    tmp_tmp_msg_1_0.speed_units = 131U;
    tmp_tmp_msg_1_0.bearing = 0.6788946127243632;
    tmp_tmp_msg_1_0.cross_angle = 0.7680310961434726;
    tmp_tmp_msg_1_0.width = 0.48188840094630914;
    tmp_tmp_msg_1_0.length = 0.29229305165349406;
    tmp_tmp_msg_1_0.hstep = 0.44713011846229245;
    tmp_tmp_msg_1_0.coff = 172U;
    tmp_tmp_msg_1_0.alternation = 249U;
    tmp_tmp_msg_1_0.flags = 89U;
    tmp_tmp_msg_1_0.custom.assign("USTKMEWIPFNTHLSXATRUFISROZAVDKDZLFDBSDDQJRWMZTTVMIRMJEXQIYEIPLAHLDNRXLFQYHGOZERJOJCBHASPKUZINNYRKVOXONMJROXYBHLLUUOBZKHVGLXBDLSGMVASSUQXEEPFFQEEHGWJYAGAXKXJCYJPCOSMUFOMKWAGTFMWQIBRPWIZBFYTWGWAPGCNBMYPEJKCCCZYTWDENKIHHUD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CameraZoom tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.id = 128U;
    tmp_tmp_msg_1_1.zoom = 166U;
    tmp_tmp_msg_1_1.action = 154U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::AcousticDiagnostic tmp_msg_2;
    tmp_msg_2.enable = 148U;
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
    msg.setTimeStamp(0.46718222477143934);
    msg.setSource(27994U);
    msg.setSourceEntity(208U);
    msg.setDestination(51684U);
    msg.setDestinationEntity(170U);
    msg.maneuver_id.assign("AECDMHDMJOHDMEBBUMBFCHWCRWSLHWCQNYFSAARRZMMKNNJQTNRFSEKFBDPHEHRQBZECKIG");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 32602U;
    tmp_msg_0.lat = 0.8195944415081338;
    tmp_msg_0.lon = 0.9419055021183995;
    tmp_msg_0.z = 0.14436048583172545;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.amplitude = 0.660238108417292;
    tmp_msg_0.pitch = 0.3488225044722395;
    tmp_msg_0.speed = 0.7873108070192398;
    tmp_msg_0.speed_units = 24U;
    tmp_msg_0.custom.assign("BKAJAODWRDJHDIRRRMTRVKZEPXWJUOBFYXULWAUPYIWCXXWKTQYMOHQENZYZBFNFUEDPXPGBFMCDDQZS");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystems tmp_msg_1;
    tmp_msg_1.list.assign("GTMUBWTRMTSZSVQWMRRAAWBNXKGCTXELFOZCIAZXJTOEAFYOMLOGJMNPNMVTSFQEVIDXOJXVQZSKWMOGGTBIFUYKURHDTLSIIYKFLAQHOILPBZHMPQTYYKBPGCEIUKJBUWVQPPJDXHJXSNCFNCOSVRZHBKKIJRUJLYZSCLYWBAYETVDNCUWHWGNRDJQNHAQNYFSADOJMCHPXDIXWIERELO");
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
    msg.setTimeStamp(0.3348056937415511);
    msg.setSource(17328U);
    msg.setSourceEntity(219U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(146U);
    msg.maneuver_id.assign("PCTZFIGBIPBKUFBOIQSOQJPRWYRVKOGLROTQWYTDEEKFLFIVZQWZWPJHMDLXCHRIDSHAETMQUGXHBEJPHTPBCHCKMCTTEUYFRUDKRYCYAIJCOHQJWJQGLJHDAWXZNBMAKLZCYFZVBVFIZNPWGXZASWJOSYNNSEVWMZDDRKAVADGRAYMRTLPCYBUNUEYCBSDMSOXUQAUQVLGIEVXSNIPHIMTXONOQZLVMPNNFWKRVOLXXFSUUJKDKGSEG");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 26766U;
    tmp_msg_0.lat = 0.8626763025943476;
    tmp_msg_0.lon = 0.5113193531028022;
    tmp_msg_0.z = 0.020537027235288274;
    tmp_msg_0.z_units = 204U;
    tmp_msg_0.speed = 0.30474392292893693;
    tmp_msg_0.speed_units = 18U;
    tmp_msg_0.custom.assign("METGKTFWHCLESDBMWN");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.9224093759399361;
    tmp_msg_1.y = 0.0732586038845543;
    tmp_msg_1.z = 0.8835861624238228;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::AcousticDiagnostic tmp_msg_2;
    tmp_msg_2.enable = 152U;
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
    msg.setTimeStamp(0.1482845837887382);
    msg.setSource(24294U);
    msg.setSourceEntity(41U);
    msg.setDestination(25169U);
    msg.setDestinationEntity(46U);
    msg.maneuver_id.assign("BZICJAXZXBXHBLQSWPGRYJTBMOSYCBIOXDWAASQZWTHAKQEUBDRLGVIPOLSYGREIOWCTWANMCUDEKKVKLYHWRKDKKXAIRBEOTQHFLMGSTVTJKHRSBDNUNYGFHUZEIBHCNLKNNOCMARMJDPSOGFGBSPITXQNOXEJGJVHDYQPLFMTLPNYCXPJGFVOUVSZANRZEMQAJPDAEYQQGCTWWOYWRFFVYUVILZIFEJMTIPCHXZUQMZWNUPMUZSVUCDLER");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.start_lat = 0.11552083073115693;
    tmp_tmp_msg_0_0.start_lon = 0.9596001450179071;
    tmp_tmp_msg_0_0.start_z = 0.42354445272477315;
    tmp_tmp_msg_0_0.start_z_units = 15U;
    tmp_tmp_msg_0_0.end_lat = 0.5627594538866834;
    tmp_tmp_msg_0_0.end_lon = 0.5799378586718913;
    tmp_tmp_msg_0_0.end_z = 0.46150610973560335;
    tmp_tmp_msg_0_0.end_z_units = 25U;
    tmp_tmp_msg_0_0.speed = 0.18194760265013166;
    tmp_tmp_msg_0_0.speed_units = 247U;
    tmp_tmp_msg_0_0.lradius = 0.48461348436944895;
    tmp_tmp_msg_0_0.flags = 52U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 24995U;
    tmp_msg_0.custom.assign("WLXAJWLBVSOYXQPOFGLAGFPYYYCDGQDKTDJRBFKZXOOZWSCUKFMDVRNEEFCJNBMOOTNTHZFZCAJQRIQQMLWIYNRVFXMVGZPYLOJUEONXSELNJIUGBFIDESBBXIPHVZTSMKDBCKPMBOYMCXPEAHWKRHPZNAJQUXNAMWEAYLAQRJZHQTGFLGWVXMHURYWLDGCMDSAUPNEGSVICJZK");
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
    msg.setTimeStamp(0.032700435136299943);
    msg.setSource(57368U);
    msg.setSourceEntity(227U);
    msg.setDestination(22772U);
    msg.setDestinationEntity(68U);
    msg.source_man.assign("BZEKOGOHHVZORIIAPZGLXSRQBZTWSDJDFHHMIUPYAZCPRBKFUJVXIAQKMYVYZQGULOLTHQBTQPKADSOXWOZAMSJCYAEUYFSRYGWVJLJORXMJXHJOMBGIFCJZDPWSCFAESRHYNMLNQPAZGRUO");
    msg.dest_man.assign("RSANMEJFQYOOFI");
    msg.conditions.assign("WBTNXUCPVJZOEZWLJWTZCZCWZOZJTPNRZBTTGHLNIDXSFBOSCBEHKGDE");

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
    msg.setTimeStamp(0.2539920051272836);
    msg.setSource(8000U);
    msg.setSourceEntity(81U);
    msg.setDestination(4089U);
    msg.setDestinationEntity(241U);
    msg.source_man.assign("USUZKMHBFAKOIVBBFHZQELVUSXNBZNVNPEPIRJFIPGCMJVUNYLZUJWFFFSUNRTJWKLLHSYLIWBKNMOKVEYJJVLCHUAKGSAGCNEPPWROMLTDMAZXVTXKZHRJQAIOWKDUSQDGWCBXPTYKWZYDQNZCDAEYCXILAIRIZWKYISVCVISAXBQFFFOPQROTJHBQAATDHYOUOGLMBEQMDMTGOBGXRYMNLCJHERTXNJGFHHTDSYOX");
    msg.dest_man.assign("WNTRSXHXDCEDDDLJPUJCFOIQCZJFUMKMWVFHWJMVIJHPKPGNUDSLBJOXDINDIKGKJEJAUOLFSSZUBONPYYVNREHQWULOAKMLKNF");
    msg.conditions.assign("PDPNQTROXOHFOKZVRQRIIRDRYQVGVLXBTCJOXIVTPAFKMAIINTYADLUWCGPYBWEUQZBYWTYNUT");

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
    msg.setTimeStamp(0.6642502751497504);
    msg.setSource(46564U);
    msg.setSourceEntity(186U);
    msg.setDestination(8959U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("DITJDFNXATUVHFLVSIBCWQUACYAZJLAXVZMIEDK");
    msg.dest_man.assign("YOFVEUGFTCBQTNWTZJRVOWFPIQCYPPIWXBISRSZDROCHWNIQIVXLNWQBHGLQSKESMEOAEQLKWFOSKNFJJLHOTBUSJODJGEMXZHMAZHZKLDQJBAYGPUXGCXTNOIVDQTIGHNCOPGVPMPXFVJDXMLESABAVHDZSYUIKLAFPAKNUZXEJFCBWGUTRXBJASRP");
    msg.conditions.assign("DZMALPMJMHBLPKKCFVPETXXFAZOFBRZFKICOXRTTPUJXBVLFZJKVSNWIYYRCDAKHPQOSIKIEIAQIYPTCDVJEQURZIFLZHEMVNYFXZQHUWLMYWGAUOQUYHCKEGTWXBNRMDUBLSEPXBFCSQOFGDNLYFLBWSGBARJNWOSTCNQOADZRGVNHEBSTJVXWHQPNIGIITXKNBJNWOMZMCWEKHUPDCESAPSWGSDRAGKVEGMVVDXJYZRO");

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
    msg.setTimeStamp(0.8510541840749415);
    msg.setSource(27238U);
    msg.setSourceEntity(180U);
    msg.setDestination(55262U);
    msg.setDestinationEntity(226U);
    msg.command = 31U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZDQKFEMBBOHZABKHNLTBSLFHXNTFHLIYKBCFINZVVDNWRZDYRXEJCABJQXCPRKROPOCXDPKFQPULOHPHNRIKMELJWUWNYJJAGIWNTJVFSCDYVEOMHZDMZIWPKGJBFEBAKCCNEADGRUCOIXMSUGGCSXHVWQUPTH");
    tmp_msg_0.description.assign("OGHTCGURZLRIJAEGNRPKYQSQWDRKCTCWWFLZMAPVUOZWRDGZDHOTWGPMCNW");
    tmp_msg_0.vnamespace.assign("VVCXURUHQCTKACGWBXTQEWEWHQKIXHGOHSBOOPAIPPRSYVQLNKNKSRLQJZOEYKFBANEMILIFGKSDJPRSETERXMULJDXZOCOGDIZCMYPXWLGPQOYWJMQUMXACNAFBTSNVURICGBFDFORFRQCFXWKDHXUBJMSELOZZHTVNVBFJIPAPNKYECDYYWSVQMMABEJTZPHFGGDDQBUVNZKJTYGFOUZZVNELGZWHHHRSJYLNKLIYWAVBILIAUUDMTSARW");
    tmp_msg_0.start_man_id.assign("ITPMLXPNSMOZEHGRPPIWLTVXUFIHTEQKADVSUADLYZNHSPWEJOXLNITRCGHRFVBQNMDBQSAJZMXNGEGWLZEAYZCEIMJZPZJCKRROTFNHRFIFLXOMHLFLKMGOHKVJAABGTKCHMUDWSDJDUICKEBVNBQJUBLQAKODOFOUPZKYCFFSVWCXNNCPTRUXQQJJWQSZAHMVUUKAYYVIGVGXIEBFBS");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("EBLJWJPYXAMVZFVFFCIDYUCXTRHVAYLMQKXPHEDYCKHGOHJGJYTWFQUNXZSBQBBMMGUUWDNDRYLLUUGNEQJOGMDNPSZHEOKVTXNLGAJSRSANSQCGDPPIJTTEAJMDXNSFODOYFTOFEHISSVVCHXOQKKYHNAZCJXWEFYLZCBAUUOTWMIIARRWDQZBHRNOASHFVPLPXWBTQWLVJKZWPVYEECBLLRPRXIMIIMPKZUIGIZAFKBGKTZR");
    tmp_tmp_msg_0_0.dest_man.assign("HFPZLVJPMOHKNESWQPMNZKXHMXSICZWNBRIVPHAACZMUBGHWIOKPTNLNCQPEDTFASVZBECVOKJOVCUGTEANCVURYKMBOHKEWNTCMLLXZZYRXOLMCSFYOSSRFHPLFAAAQCJIGUWFLFQFQMYVZOJDTPOJKUUXRJGDIUVQEX");
    tmp_tmp_msg_0_0.conditions.assign("FBQSCZODMATITZGYWKLBJMDBWFTENSDNETECTWZRDXALMMKFLOJUAUNEHGCDQXGZJCKAEQJNSDPKZJQJHMWWCVXROBPSHHVWUYLUGWYJUSTYJNEINXVUFLLTRKIIOVYCPUHEHGCCRSVOEWTUWEGNQPXSRKRIPVLZBQDFSLBJFBPMQZOMVUCQKESYIAFGTXNHTRMUPSNVVBFRIDOFRQGOMKXX");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.start_lat = 0.961189647489226;
    tmp_tmp_msg_0_1.start_lon = 0.9043508478030349;
    tmp_tmp_msg_0_1.start_z = 0.9118268264459963;
    tmp_tmp_msg_0_1.start_z_units = 156U;
    tmp_tmp_msg_0_1.end_lat = 0.8890549652795013;
    tmp_tmp_msg_0_1.end_lon = 0.41445614112671403;
    tmp_tmp_msg_0_1.end_z = 0.9457485626634948;
    tmp_tmp_msg_0_1.end_z_units = 139U;
    tmp_tmp_msg_0_1.speed = 0.2840502851090865;
    tmp_tmp_msg_0_1.speed_units = 28U;
    tmp_tmp_msg_0_1.lradius = 0.5046543273136681;
    tmp_tmp_msg_0_1.flags = 135U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.6098036588654301);
    msg.setSource(43846U);
    msg.setSourceEntity(136U);
    msg.setDestination(36480U);
    msg.setDestinationEntity(244U);
    msg.command = 70U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EVWRTDLWGHSHEIWNGCZYQPAZLCMGQDPZOISEGXNCGQYUPBON");
    tmp_msg_0.description.assign("ZQJWCGAXFGBCZKPCKXFLJCDJZOEANFRMDLHPYWQNPLZSOOVFUXGLQYPGUXCITAEFOJSEXMWDRIUIWUWZZTRTMXBZEFYKPRTBRXNBMQXNFAOIDPVAMJVUNVDDYEFGBVRGNIQGGZWOQNUMUMHZJIVDDQYSAWCRFRHEUSQTEAVHASOQCMWHPPPWOSOKJKZURGJIGMBANTLCY");
    tmp_msg_0.vnamespace.assign("MKUGYRYJPPDPDBAHBTXSVHQXCJDTSKUJAZXXGLTGBTSCOAXVZQPSTELMFQVMAPCQQINEGZENYIUSWJFDNGEJWZKWUYVAZMHYNQLERILUJNPOPMTGKEBCTFNZQFKUROOESFDCUESHZJOZVAFEWRBQIVDFHGHVLTXIIKGTHNNXSRXMVAPWAQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BTKJHVGTQPPRQGKRCABRXLKNBSIIJBRAQTOZAFY");
    tmp_tmp_msg_0_0.value.assign("ADCZIHZUVNMEUVNBBIRWOPYRPAOMPSEFFST");
    tmp_tmp_msg_0_0.type = 84U;
    tmp_tmp_msg_0_0.access = 117U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EDJZCNPSLIDNPSEYBFKYQGC");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("RJUFDOMEROBWUOHJVDQJBGFZAOITQPUCZYYDXCUTXMDYCNFZOMRZUQUHSPJGGGFWKQGJPWLUBLQKIAFFTESSYCANWTTTOLNEQBMVPRCVGALIZPKVM");
    IMC::FollowPath tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 8424U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9423366758761339;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.13238331309091156;
    tmp_tmp_tmp_msg_0_1_0.z = 0.8414361269014073;
    tmp_tmp_tmp_msg_0_1_0.z_units = 37U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.33576835446648845;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 169U;
    IMC::PathPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.6132044237793701;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.359980581593886;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.9654576425308438;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_tmp_msg_0_1_0.custom.assign("EKJDZHBRYJQHTDMDQDWHNIUXMKUZURGVPMYZMEIEKTMVEMBYAQUCCUWHIOIZWOQBSVVSDCMKGIVNGNINXWNXSJOAPYAJBYAVZOTOMFJQDAAHLAKLFGFDLRUUOGHTSRGRLYQWLOKSXLGOMZWVFPMFVYDCTGKCJBVCA");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::TrexToken tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.timeline.assign("RUUBFSJUSEJGKWIXQBSDZFERTLRBDMQCSKRPUYDGVMYISGCSNNADSBVVHXIFMGYJWMZMUYHODBQJXHWTQKXDUGYUBDFDIEYIELMXJRJUATTEFSVLHLMNOATKYXALHYKWFJZJWKWOWCHANREPVZTTZUPQVIIYSFTEGWOKBGXPCAXTJKXGCCNPNGCFIKLVRLPCVOAPERBNDBOQOQMQOCLZGZPIO");
    tmp_tmp_tmp_msg_0_1_1.predicate.assign("WXLZPRPIVZALDIAFYPCTNNCXPRQMQOE");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.name.assign("DGZSVLHARTIOADUDMASKQBEKAEWENGYWSRNJQWCLYOMGYHWWIZCQXDFBKSZLSGTJFVIWQUXHXRIZDJOBLRJGABIGNTMCEKTQDZVNMXBFI");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.attr_type = 164U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.min.assign("TOJVMSNGOZYJWBCSNHYFQQXLJBGMZWPIHAKKPFCAAKTGILVYZLGDCUBHWRIENNIMDBBCGAEWMFXJQWVRDMUCYWSEXQODFPXYYTIFDTHUFPJASMBJCRLYUCFKHCOZNJLKXHOHTVDPDXBXIEPLVWQKUWJGSOZSFMKRVSSJOULBIITUJCYQBAUWZNAZUQTB");
    tmp_tmp_tmp_tmp_msg_0_1_1_0.max.assign("RQNXIELTTLROFWMJWPFPEUXBKIQEWUHCJMDEQFPSDLO");
    tmp_tmp_tmp_msg_0_1_1.attributes.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::AcousticOperation tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.op = 89U;
    tmp_tmp_tmp_msg_0_1_2.system.assign("QCBIMUIHSBRTTHNVYEYGQOITDIRGLGMXJAKPZWXJATNXBOUKBJSIRLJPVLXRELIOIZSZZSQQCYFGAEHEOBWSVDRWTLMWOYTLTPFEKGGVYKOZUVSLNUGYLOFQEEDUGKPFUTYMXTBVBCNFNHMSYJESVRFWDAPCSIGPPFRJZWVMQMAYAVHQMUKXNZNCZA");
    tmp_tmp_tmp_msg_0_1_2.range = 0.4415500721573383;
    IMC::AngularVelocity tmp_tmp_tmp_tmp_msg_0_1_2_0;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.time = 0.9034268834268153;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.x = 0.35883201384580043;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.y = 0.8664358185186708;
    tmp_tmp_tmp_tmp_msg_0_1_2_0.z = 0.6676811466502097;
    tmp_tmp_tmp_msg_0_1_2.msg.set(tmp_tmp_tmp_tmp_msg_0_1_2_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KBYPIGVXNIZHQACTZTTCNSGSFONKKRU");
    tmp_tmp_msg_0_2.dest_man.assign("NKORBPKAXAAEYJRMTVTEVWUJLMDTGZVKQIFFHFDJUDSFAFBOKJENHGRHGEWUOOKPSOPGDVSCZLYQNWZLSNSPYDQCMCBWVNABKC");
    tmp_tmp_msg_0_2.conditions.assign("IHNBTPPIHVBCTOBOYBRMXGOWMXQBHKJDFEEJXRRRIIELQUMMFYARIVQNQBFCJBQVBKAUVRTTNCKDETXZMKMGYZSJSWKSUUZKTXBPKRXPNWINFPXDSVWVPTHFLSMAKNAFNLLLPFNXGLPQVRAHGSXUGSONBZSHZWJGDOVCUJWSYJOYVYZQQYUHMRHLDAPUZTFULTZNLHAOEZAODWJIKYOQZJQYCEAKCVCX");
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
    msg.setTimeStamp(0.8901414187887895);
    msg.setSource(18689U);
    msg.setSourceEntity(99U);
    msg.setDestination(9249U);
    msg.setDestinationEntity(250U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KKJIAVHQFCKLWMMDVXARJUUVVWVDGZIKTBPWTXZIKRELWSEBMBZGXOKOAIRNYZXUNQUKNQIPLQBCULYOGFHXHQNAXMMBISAMETYUJGJRQSDVDHGFQYGOADUBKTAPYNFSRRKESWYLWURILPKETAIZZPOGCGCLHJPJQOJIGITAYGRNWZDMBLDZSOWQLRHETXNHDEEPBTPT");
    tmp_msg_0.description.assign("KERERDZKOUOYNNRQKPCMHCESJHVVQMTKSANFNTJGLJCUHUYRGMWEOXFPKWCKMYTEXTVGRSDJLCJHHNETZDTWWDXPWRPOUVVYMALTBIGVCOAUDOUHFMLQFKZXNBSAOCKEUAPSLZUBJTGGIEVEZBRLJQGORVXIDGRRASFZDJFHNLIODLPKWVWQIY");
    tmp_msg_0.vnamespace.assign("JYLIDTNMLFRZAQJWOOHCGAGQXHIRLSGOICBVEZMJUSHBJSZFPBDEIXH");
    tmp_msg_0.start_man_id.assign("UZLQEENHFJTTBFLLAFAVXGHRGBIDCHROYYUEPOHOXWQFLDMBGCN");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("BVLBTNIHZEICTEWSFLOIEJDLDFEHVAUCXCNDGMPJCOWRWTVZDTQCADLQREMHSNTCYG");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("LFQCLXIMUHSYEWQFCTVCLREEVNIBSKXRRNUKDTUJAFGXZHUNBWRRMUCGAJPEVBWADIBAHZXCOWGRLVHVNZTIQJJDIISSYOOFDMOPCZPSVJOCLHLXFTUNYKEIOBKTADVHVRFAHNAXEZPKWRYGMNZQMMGLEJFVQNFPDBUXDQSWTOOQSKNQOYAUSBWWPMJC");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Current tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.7351992768915028;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DataSanity tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.sane = 157U;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("SOSSSXKZXDEJTCACBMRLQJPWYMPKYYAFKAMJRWEGMONDOZOHCVFFWSLUNHXIQUQFNYQKTFCCYFPLZHKOMVGLICYXGMILNDSUXYERSLEJWMNERUGQJCWPPNTTDAKAVFHMGDDRJYSATJWTCRLLENZ");
    tmp_tmp_msg_0_1.dest_man.assign("EMNCUMQNCSKDBALSIRJANNISGPWHOXKHACOIRXHQRPKRGTLVAXSOTMOVGFKAZISJNRRSDEKBXLRKBDDYGGEQRMWJSEUAGIMBFZCWOJQSOHPMRWXJUGCDFPWLBMQHVYLZVQCUDSEOVPDTWNCEQJVIHGQFTOKYEIZH");
    tmp_tmp_msg_0_1.conditions.assign("PWPKMJZVDJNOIRJFUTFTXSTRGZLDYLJTV");
    IMC::ReplayControl tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 238U;
    tmp_tmp_tmp_msg_0_1_0.file.assign("GSENCHIOOWEWKYGLYDSSAITIRFMFKXNVVYYPVAHCXDBBXSBTMGUYMKWRXFGDZHJNODMLLNKIJPRMRWLZXIERJSAISIGHWQJXFBLPLDUGNQDUWKKUHVMQQTZVQBZEWOPKPCMMLOZBXCKVNFTAJWYUOGTLX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteActionsRequest tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 53U;
    tmp_tmp_msg_0_2.actions.assign("ZOKJHERVTQXZGGYODMIMEXKGUCAQRQRFVVQWQTUCHOTURIRLCAVUQPJGGJSLZSUZQTNYOIS");
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
    msg.setTimeStamp(0.5600360891150094);
    msg.setSource(52963U);
    msg.setSourceEntity(249U);
    msg.setDestination(28247U);
    msg.setDestinationEntity(237U);
    msg.state = 125U;
    msg.plan_id.assign("CGBCNBTHITZKRXEZHSDSXIDEPPZAOW");
    msg.comm_level = 53U;

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
    msg.setTimeStamp(0.5883299362909282);
    msg.setSource(27893U);
    msg.setSourceEntity(53U);
    msg.setDestination(41831U);
    msg.setDestinationEntity(164U);
    msg.state = 144U;
    msg.plan_id.assign("DNUVPINZRLYVMAELEZORLIAMUMMDLOVGVDCMJBUYSOIEIVBPZGTYFWCHIEMAFBSXRJAVRJPRTBXKJKBBUXLJGWRNKWJYBYZQSXNODQYASVPUXKSAFJEZDTDTCOMLNZYPOSRAWZOKKNKVJQKXDEOGOQSLPDRHFCRNTIEDXTCHEBTGQAHEZWBXMXHTQVMGUTJGIZEKTOFNHH");
    msg.comm_level = 100U;

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
    msg.setTimeStamp(0.3835977978348729);
    msg.setSource(35797U);
    msg.setSourceEntity(232U);
    msg.setDestination(10169U);
    msg.setDestinationEntity(119U);
    msg.state = 148U;
    msg.plan_id.assign("HDXWNPDTVLOXAZYOLOBVNWUHHGMONKJCXDQWSTASHEFSEZUPEJXESKCNXRCHOLVWMNZIRKYYQMSGZOLAUPIE");
    msg.comm_level = 77U;

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
    msg.setTimeStamp(0.5772814015400273);
    msg.setSource(11378U);
    msg.setSourceEntity(189U);
    msg.setDestination(3323U);
    msg.setDestinationEntity(50U);
    msg.type = 117U;
    msg.op = 185U;
    msg.request_id = 48951U;
    msg.plan_id.assign("IVEFQGBMARCNYOYDEETUZHXZVHUZCPBHOQNGZZHYZPSCUZJOTBTWQJTXYNBPESXRIFHKQESSQKMFLUTQKKQJOURKKPHUQSPHPROXMVRVWJRMLCIJXNWOVKVVOHAFRCGGDSDVZUYFINND");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.932943863245254;
    tmp_msg_0.type = 184U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BTRWTCMVDCGKDHPFHYVWGLHZGWJCDJBUPWRNLZHZNALBDUESMYTOLKEJNAFLVAGQVXZPEJHIOQKSARNKXEQJIHCOPXLXNGNJNJTHSBCLDBCKQFUFRUFGZTUZAYRQOXCTQNTYEVGBWEAIBOLCIKJXIPSHZDEKYDSOYUVVUOSFOMHVQWBXQMWIMX");

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
    msg.setTimeStamp(0.4846137492683643);
    msg.setSource(54920U);
    msg.setSourceEntity(218U);
    msg.setDestination(27032U);
    msg.setDestinationEntity(56U);
    msg.type = 91U;
    msg.op = 111U;
    msg.request_id = 61219U;
    msg.plan_id.assign("AQDPFLNFTMNXDALEIK");
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 102U;
    tmp_msg_0.step_number = 247U;
    tmp_msg_0.step.assign("TQLEPCHIHUBOIURXAVUEGHKYJWTHSDOGJZOCHIWYTUDIWFPMUBDEWGPEZKLMULASOVUEJATFQKDNDMAUUVPNJBQRKQFLMNCZHXARTVMBCJYLKMHRVQJNWAWZLEPNZXHGTRLABXRASUEMWZISVPOYYFFSCIQORMYXSNQEFVNMOTYOA");
    tmp_msg_0.flags = 139U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QOEFTFKGTLOFRWLQICDJUQADSMCROQFSVAOJUGEKVXXPXIJ");

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
    msg.setTimeStamp(0.32719923060975675);
    msg.setSource(39176U);
    msg.setSourceEntity(129U);
    msg.setDestination(30213U);
    msg.setDestinationEntity(25U);
    msg.type = 204U;
    msg.op = 229U;
    msg.request_id = 61494U;
    msg.plan_id.assign("UNCVWMBEINMAWSREMIPCWWUZDQZVCRSHJUEANKBGRPDLOIXXFQCEZIUGMPFOVCEGXVUAHGYFUADCURMIQRLLVRQM");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 51599U;
    tmp_msg_0.lat = 0.47733418710023146;
    tmp_msg_0.lon = 0.9664171143032833;
    tmp_msg_0.z = 0.028437881271695775;
    tmp_msg_0.z_units = 154U;
    tmp_msg_0.duration = 20134U;
    tmp_msg_0.speed = 0.23454601227852623;
    tmp_msg_0.speed_units = 76U;
    tmp_msg_0.type = 156U;
    tmp_msg_0.radius = 0.44745178833622345;
    tmp_msg_0.length = 0.1600021447240242;
    tmp_msg_0.bearing = 0.535593889270579;
    tmp_msg_0.direction = 55U;
    tmp_msg_0.custom.assign("AIUWQZTAUGOPIDCRWVNHJJTEKJLOGHUESCIGLD");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNSUTKPXUBEZCNPFKMOIEPCPMOYXOAYTFJFEOYXPLTRZDRSMSBBNTVQAJENLASIPFXITGUMYCIAPLVKFGKQJGURULYAKLTGWOXOQBZJDXHHVEHVKUGOUNICWBHCWSLZEBSOPZZYDNFWKECYHUHMVFQMKQLTQVSQDYTRATHWEIKXSLDLCRGGMCMWPJGHIOFYQVZADWZ");

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
    msg.setTimeStamp(0.3288468967779923);
    msg.setSource(45962U);
    msg.setSourceEntity(52U);
    msg.setDestination(9202U);
    msg.setDestinationEntity(8U);
    msg.plan_count = 27834U;
    msg.plan_size = 555673133U;
    msg.change_time = 0.899320346318901;
    msg.change_sid = 51147U;
    msg.change_sname.assign("ORFPBWTHUUOZKDQUWIYIKHJUQWCVOXCCIUQLJVLKTVSJQ");
    const char tmp_msg_0[] = {58, -3, 17, 12, 79, 81, 63, -108, 7, 82, 9, 27, 56, 45, 21, 15, -70, -127, 34, 114, 105, -31, 116, 43, -23, 7, -123, -113, -89, 66, 3, -122, 64, -65, -100, 69, 36, -55, -27, -101, -78, 85, 94, 62, 87, -14, 72, 28, -127, -56, 55, -49, -38, -90, 23, -39, -61, 7, 100, -128, -128, -104, 65, -20, 90, 109, -30, 113, 36, -98, 66, -48, -126, 24, -80, -78, 51, 79, -5, -3, -27, -127, 100, -111, 102, -35, -79, 12, 61, -72, 40, -36, 125, -51, -4, -29, -105, 103, 108, 80, -96, -120, -128, 76, -28, -82, -69, 110, 93, 86, -123, 11, 33, -35, 14};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JKHOOSYJZWKANLVOJEPXWEBDLBDAIFCCFPBATKSNSFBWYHJJONNMWYDSFDQZKDJZXBVRVZYXYBIDG");
    tmp_msg_1.plan_size = 20106U;
    tmp_msg_1.change_time = 0.8752949798532491;
    tmp_msg_1.change_sid = 14973U;
    tmp_msg_1.change_sname.assign("QSEHTGLFAMGYRUWRXHUQUVSNVEJUWTOMLRXNEXKVTODZIEFZFGPLFITXQGLATQZDASYPFJNZYWBCSVFZSIEZKQHUSYAGPZLASDVDKAMQITWCWOTKHJESVXROGBLINKKMENNICJZBKMYILKPROHSUBKIEIWNDCYQDNCDJNQMBXBFERBLOWRUXVLYREUBCRJADDMGWYMSVXUCFPWOYCHAHTFJJFHBPAIVGOJ");
    const char tmp_tmp_msg_1_0[] = {-117, -84, 124, -17, 74, 58, 89, 102, -48, -89, -102, -18, 76, 54, 42, 53, 59, -50, 14, -69, 101, 13, 107, -70, 3, 114, 10, 112, -13, 103, -27, 43, -100, 62, -90, -7, 34, 16, -106, 74, -109, -50, 121, -80, -43, 94, -18, -122, 83, -85, -7, -106, 26, -81, 80, 26, 32, 72, -50, -69, -55, -16, -112, 70, 97, 103, 58, 32, 23, -2, -113, 49, -20, 35, 41, 43, -76, -119, 103, -22, 4, -13, 58, 68, -80, 37, -25, 78, -114, 52, 104, 112, 88, 71, -97, -49, -53, 47, 87, -126, -5, 124, -30, -11, -17, 56, 7, 19, 94, -52, -106, -123, 31, -68, 91, -44, -24, 71, -93, 91, 40, -84, -68, 126, 124, -70, 3, 74, 68, -42, -35, -80, -13, -112, 50, 118, 95, 23, 86, 59, 80, 31, -104, 27, -22, 21, 34, 118, -79, -20, 1, -125, -90, -63, -100, -71, 67, -91, -40, -116, 89, 87, 78, 104, -40, 102, 69, 98, -77, 107, 107, -86, 92, -49};
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
    msg.setTimeStamp(0.511201140029435);
    msg.setSource(21033U);
    msg.setSourceEntity(31U);
    msg.setDestination(59920U);
    msg.setDestinationEntity(4U);
    msg.plan_count = 50073U;
    msg.plan_size = 3200835725U;
    msg.change_time = 0.5592338723595426;
    msg.change_sid = 38441U;
    msg.change_sname.assign("YQGKOBYZRYDTPZHNWPBXGLXSJJDWPNVBKUKSPPUTVWOHSGURFIBCQOZZTHZXAZKYECKSQTBVNPGAIRPNEGTMSBXLJ");
    const char tmp_msg_0[] = {26, 71, 33, -101, -80, 26, -81, 6, -59, 2, -108, 4, -123, 79, 93, 48, -15, 89, -71, -88, 32, 94, 63, -125, -110, -76, 34, -28, -126, 105, -118, 4, 9, 34, -29, -62, 29, -53, 78, -106, 113, 53, -75, -22, -43, -26, 22, -6, 24, 78, 9, -11, -31, 108, 117, 40, 70, 84, -46, 108, -102, 73, -110, -82, 69, -81, 66, 62, -127, -76, -90, 66, -125, 55, 46, 32, -18, 104, -99, -122, 108, -56, 82, 84, -17, 97, -120, 118, -92, 111, -29, -32, -51, -5, -127, -30, -111};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PNZWOSDLOCWTBWVVIZBBAJDRTFSKENOITBFSLGDEOAURIIAFHQPLJZZLMEZWKQOJHWNZNTHTQMMRXMFOWIFUPPTVBIQHGMXIXYRCSDQPTWGJENMVXTYKVUSHREATVYSRCASDRDWHESNCDVMGIBLXYZGLIYZ");
    tmp_msg_1.plan_size = 40564U;
    tmp_msg_1.change_time = 0.2860908375436316;
    tmp_msg_1.change_sid = 63260U;
    tmp_msg_1.change_sname.assign("XBWDFVLFSBSE");
    const char tmp_tmp_msg_1_0[] = {-86, -85, 30, 73, -77, -16, -17, -36, -99, -3, 68, -83, -35, -104, 72, 90, -126, 57, 78, 60, 27, -38, 15, 66, -121, 44, -23, -88, 2, 121, 58, 42, -46, -13, 39, 91, -87, -15, -84, 118, -37, 10, 11, -66, 65, 120, -112, 10, 92, 117, 91, -80, 46, 121, -121, -26, -36, -95, -39, -115, 105, -50, 103, 79, -125, -67, 99, -39, 83, -111, -21, -84, -112, 121, -70, -39, -71, 24, 46, -29, 69, 18, -63, 5, 37, -99, -21, -17, 125, 94, -14, 61, 51};
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
    msg.setTimeStamp(0.6154761661104531);
    msg.setSource(57924U);
    msg.setSourceEntity(177U);
    msg.setDestination(28416U);
    msg.setDestinationEntity(46U);
    msg.plan_count = 11441U;
    msg.plan_size = 4096655672U;
    msg.change_time = 0.8475280805617742;
    msg.change_sid = 48195U;
    msg.change_sname.assign("PMJUTAMCSSSANOZAISLZEOJNIKWNQGEGPVVAYCEBHGDLIYVKUUHWWKFOLGBKHFSLZTYPROYSDNMLRLYKKHIJMOXFAQKNBTTRPTZTHGAVWHAYXVYRECEGXPRNLQJKJZXWTWJIDRUCYNSAUZDSRICFDPQWKHXYDXLIUQNIUFBVDBYJ");
    const char tmp_msg_0[] = {69, 107, -83, -42, 7, -37, -103, -95, -72, 19, -121, 49, 106, 125, -100, -110, 103, 60, 103, -10, 2, -65, -107, -110, -89, -68, -114, -115, 74, -127, -15, 38, 109, 22, -127, -19, 15, 104, 16, -108, -30, 97, -73, -72, 42, -118, -51, 44, 83, 92, -90, -84, 115, -9, 50, -25, 45, 93, 35, 80, -87, -109, 42, -56, -25, 15, -6, 11, -94, 50, -115, -26, -28, 75, 99, 76, 65, 79, -46, -92, 35, -88, 86, -16, 71, 77, -34, -85, -20, -96, -14, 83, 54, -67, 66, -105, -62, -95, 95, 91, -33, 41, -52, -39, -40, 38, -39, 26, -70, 29, 13, -84, -102, 101, -108, 0, 86, -77, 17, -110, 33, 107, 94, -102, 26, 84, 17, 124, -20, 24, -1, -109, -89, -5, -102, 16, 100, -126, 115, 84, 15, -21, -18, -49, 81, -19, -117, 106, 10, 65, -76, 2, -12, 122, -60, 72, -124, -117, -50, 101, -45, -22, 122, 10, -97, 7, 123, 53, 60, -92, -3, 29, -35, -12, -43, 3, 16, 49, 99, -84, 56, -96, 100, 2, 92, -72, -36, 43, -28, -91, -82, -73, -55, 92, 51, -33, 126, 106, -31, -120, -125, 85, 85, 5, -127, -47, -20, -63, -112, 97, -74, 40, 50};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("UFRXAYXOWNYIRNWNVHASMAZUNUYDTNDGANEMPSPXFLEETLLFNQJPJHRJEOBRXPKYBKKSEHILBMATYINDYGFVJRXNKWHPRTGIDECWAORUMJTQACLDOVQRZZUFZFTGMWUGSAWGFMPHDKCLDLYURSJYTKHGCCZYBJZVTLQFQBOPBMILWHXNOZOCGTXDAXXPFYKMMOKVQESWUOWDSQGECIXVEZPHQBKDIQJQVWPVMCZVSLGCS");
    tmp_msg_1.plan_size = 29818U;
    tmp_msg_1.change_time = 0.7859432264546818;
    tmp_msg_1.change_sid = 14424U;
    tmp_msg_1.change_sname.assign("LZQFEQZCGLRSOABCTMMFAHODNEJBDNRYKXIPWDCVUJMPVYMZHFREZPNEUFKCTXBFMXPHPKDVSSDFNVIUELGLOHNNIJIVLGBTT");
    const char tmp_tmp_msg_1_0[] = {48, 98, -90, 124, -1, 19, 110, -103, 108, -47, -123, -54, 120, 55, -57, 44, 90, 33, -70, 80, 46, -16, -60, 79, 90, -77, -120, -89, -98, -47, -114, -84, 103, 119, 45, -125, 93, 46, -90, 63, 92, 116, -85, -36, -37, 67, -76, 68, 105, 102, 88, 122, 126, -118, 33, -58, 5, 48, 104, 76, 89, 30, 71, -83, 97, 71, -78, 9, -88, -67, 65, -121, 77, 76, -31, 1, 59, -126, -35, -123, -15, -47, -60, -89, 26, -126, -98, 108, 119, -109, 99, 1, -29, 52, -73, 69, 94, 44, 66, 122, 63, 68, -120, 21, 37, 109, 30, -35, 115, -95, 103, 56, 93, -63, 90, -3, -106, -67, 126, 102, 1, 98, 110, 36, 89, 82, -52, 111, -14, 29, 114, 88, 16, 99, 8, -13, -100, 64, -111, -27, 115, -26, -43, -4, -14, 103};
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
    msg.setTimeStamp(0.004211815255231954);
    msg.setSource(23906U);
    msg.setSourceEntity(56U);
    msg.setDestination(63902U);
    msg.setDestinationEntity(86U);
    msg.plan_id.assign("PCXOCVXNTTICTOXZRDDCHWZWMGMYACPAJLPOEOAZRLANKGGARMYZWZBIYUFLUQUXTFBSIHSWSLIJOJSKQFSYNMZJEUDZKGQMSBYAHPXJTOVVRJUKYFTREUQDVIIHCQHDEIFUTZTGAPHEGXIVNNWPQYLHFKXYRIAUZWUTHVVDGEPBMAHPGBTNEJ");
    msg.plan_size = 32584U;
    msg.change_time = 0.9122885638942149;
    msg.change_sid = 51535U;
    msg.change_sname.assign("MFNICLRLWPWIFLPIDCYVWOQIGJGTOXYYQXVZHSDNKKGSQALQEKZMLHOBMMONEVJSFJBPBJIFBGPVVJJFZUOHMBFMHQINKIDMEEPFWNXWJSUTNVCBKKSYGHPABRXR");
    const char tmp_msg_0[] = {98, -116, 42, -82, 82, 44, -72, -90, 123, -80, 37, -44, 53, -13, -97, 36, -63, 53, -24, -113, -126, 96, 2, 85, -85, -127, 15, 48, 69, -107, 99, 28, 100, 21, -90, 3, 36, 0, -111, 66, -77, 43, -62, -112, -124, 92, 117, -107, -16, -14, -9, 90, -26, 126, -107, 35, -113, -80, -119, 101, 59, -73, -64, 34, 101, 14, -114, 44, 38, 68, -58, -85, -93, 98, 78, -94, -10, -12, -81, 75, 33, 33, -67, -109, -23, -80, -31, 59, 43, -22, 104, 0, -27, -39, 29, -56, -47, -114, 74, -33, -33, 78, 74, 48, 82, 106, 65, 49, -86, 114, -111, 89, -12, 25, 30, -42, 86, -112, -33, 26, -81, -36, 1, -110, -2, -121, -114, -61, -41, -99, 99, 91, 39, -121, 114, 126, 76};
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
    msg.setTimeStamp(0.19850767510249678);
    msg.setSource(29760U);
    msg.setSourceEntity(104U);
    msg.setDestination(56286U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("OONYEVLMWZOVQMQKLQWAFXGAXNSUBRJEGEKXCWMHVSSUXVZYIAIOSFOJNBESHTCCJKEBFDNUHDURMAVVLFXUJJZETREINVBLWDNGYFWBEGIOPSAIHDRDZYGTQXXSRBJKTAVDCZMPZAPJTY");
    msg.plan_size = 48053U;
    msg.change_time = 0.1658551005593466;
    msg.change_sid = 16910U;
    msg.change_sname.assign("CLXKAUKDGTMNCIDNCDJXMCUWEJINYYBLHGWDQBSTWFGFCTQPTYRJZFVRTYUEYFNIAVUOSDTZSFOOQXAIAJQMUMJBSIVEBLMCPSABKZXZFGBHHVEMLW");
    const char tmp_msg_0[] = {29, -92, 94, 59, 121, -41, 10, 59, -38, 61, 109, -55, -103, -10, 126, -32, -96, -29, -71, -111, -120, -12, -45, -17, 119, 28, -100, -103, 14, -18, -114, 63, -49, 122, 121, 60, 69, 83, 113, -10, -64, -96, 71, 99, -72, 69, 29, 87, 73, -83, 96, 83, 32, 5, 38, -37, 2, -90, 116, -43, 15, -52, 0, -66, -69, -89, -104, 60, 34, -120, -29, 83, 10, 96, 24, 93, 1, -101, -57, 115, 62, 29, 30, 11, 33, 66, -65, 34, 1, 21, 87, 40, -78, 99, -49, 13, -109, 31, 7, 65, 119, 126, 47, -113, 81, -108, -126, -117, 34, -47, 101, -102, 111, 12, 79, -7, -7, -10, -18, -126, -57, 80, 41, -61, 103, 83, 71, -4, -82, -101, -121, -3, -65, -114, -4, -33, -31, 15, -90, -18, 0, -22, -73, -17, -82, 93, -26, 115, -18, 122, -118, 122, 116, -117, -40, -110, 6, 32, 107, 66, -2, -127, -43, 50, 47, -124, -100, -41, 60, 125, -117, 42, 115, -54, -18, 70, -124, -18, 94, -110, -65, -109, -61, -117, -27, -6, 48, 84, -25, -2, -67, -39, 115, -2, -8, -113, 86, -108, -99, 41, -92, 33, 60, -48, 96, 64, -19, -65, 70};
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
    msg.setTimeStamp(0.6073204755340185);
    msg.setSource(24316U);
    msg.setSourceEntity(225U);
    msg.setDestination(35433U);
    msg.setDestinationEntity(113U);
    msg.plan_id.assign("UZJBMGHBSFWFIGTPWWTFMFAQERYHAEQTZVEYOJQFWFZSFTPJKYRMRBJCMDASLUQXHDIBUJZOIYGPMZVSGWXFRASTJUDRXCPSXNOYKILLTGAHGHYXKGPNMHPZKJJVYDCVLEVCBENBNCXV");
    msg.plan_size = 27748U;
    msg.change_time = 0.23760231748840765;
    msg.change_sid = 13710U;
    msg.change_sname.assign("MOPIZXHDNFYCFDMLKFHPVIFDQVQEDJRIDUDYWDBIHTYAVKPKOYCGLZXKOJNLNSCYTVJXCNEVQURMLPFFKGEPEAYRFAKWJMWDMKJPUTHCSNGEQJIWOBPZEYJQUAXHBTSXGMMYINSTOTKWBOQTQFGLAHWXRPIVZTWITSSUEESRCBLLRGYXIVKJRZWBFAGZDNZSHRBCGPRMAQCZWUUAUUSHEZCH");
    const char tmp_msg_0[] = {-106, -65, 17, 111, 64, -56, -79, -66, 124, -2, -74, 70, 55, 35, 72, -17, 1, 61, -108, 124, -47, 94, 71, 15, -38, -95, -118, -87, -11, -31, -28, -122, 23, 61, 68, 63, -108, 26, 31, 66, -76, -39, 114, 116, 90, 111, -56, -48, 10, 54, -87, -51, -61, -29, 61, 81, -34, -20, 107, -12, 47, -61, -118, 34, 18, -33, 30, -106, -33, -109, -56, 51, 79, -41, -12, -64, -47, -30, 94, 63, -62, 37, -7, 95, 82, 66, 115, -124, -87, -86, -35, 117, 93, 111, 67, 93, -68};
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
    msg.setTimeStamp(0.37671590636989516);
    msg.setSource(42529U);
    msg.setSourceEntity(98U);
    msg.setDestination(3116U);
    msg.setDestinationEntity(141U);
    msg.type = 53U;
    msg.op = 199U;
    msg.request_id = 25178U;
    msg.plan_id.assign("WUSOZGQETGGMTCODGJEVAXQSFDHLWJDIHVOTVMDRKEWZHRECBYPTFFVBTFLOGHTWQJBKBBESEAWENQPADVZORNWIXQUVLRUOPRKHIXIUVXQHCKFUYDSCWMZVVNFSAHZRRFCSJAJNSNPSGDQHPRNGFUIMKACLPUNMYFQSGLPIZKMBOYZMKBMKXDILYIZREDOQYUTCCCDXXENXTJLZGYYYMEBWPPUAALPGTZ");
    msg.flags = 4422U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.2434342647535639;
    tmp_msg_0.lon = 0.5398426675637457;
    tmp_msg_0.alt = 0.9287728246012913;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWAMXDFSQMFKMAPRHVDEIJSIXFTOIHNUGZVONOCATLJJMXFDSEOTWYTTLRKTCIJVNXYZPVPMUKDRGIUYQDLCLHGGOIBUXJDRQAIVPAAKPQNBFJWBSQKXTCJGCMKRPOYYIDJSXKFWSAPYGZCIYQNHZUMCFEHCYAVPHWBDQLQBAPNELGZBVOMWNXWYQPRHBSGLMHZESBF");

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
    msg.setTimeStamp(0.3041476806322827);
    msg.setSource(59648U);
    msg.setSourceEntity(165U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(167U);
    msg.type = 78U;
    msg.op = 194U;
    msg.request_id = 39123U;
    msg.plan_id.assign("IINZULCJHKZOWEPQYBXPJGADVNJMODFBYXBYLPYEGFTVSLNSXVHHHWFDCLNFZQRRGXPCDWIMNCAQNNTNJLOZQFVOOVPXLLMVGSTYAUZHYUETERVFDQAWUSHYLBIKPDRCKG");
    msg.flags = 16685U;
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 31U;
    tmp_msg_0.frequency = 3036141874U;
    tmp_msg_0.min_range = 17283U;
    tmp_msg_0.max_range = 54249U;
    tmp_msg_0.bits_per_point = 124U;
    tmp_msg_0.scale_factor = 0.9291092331739752;
    const char tmp_tmp_msg_0_0[] = {5, -69, 41, 65, 14, 18, -120, 27, -24, -87, 125, 74, 18, -31, 43, 64, 45, 63, 49, 87, 3, -39, 92, 85, 89, 121, 63, -62, -61, 51, -74, 71, 30, 106, 105, 102, -119, 102, 46, 85, -45, 0, -62, -49, -11, -35, -11, 47, -16, -115, 27, -117, -69, 106, 6, 37, 103, -20, -23, -31, 66, -21, 89, 0, 73, -89, 72, 107, -108, 89, 95, -38, 36, -103, -87, -36, -66, -59, -58, 112, 63, 115, -47, 100, -39, 88, -121, 56, -9, 4, -90, -119, 57, -90, -86, -44, 121, 50, -119, 43, 90, 56, 38, -19, 53, -127, 20, -128, -36, -70, 123, -84, 23, 54, 31, 63, -42, -5, -106, 90, -20, 120, -54, -67, -126, -40, 41, -17, -64, -54, -59, 126, -52, -49, -35, 81, 121, 62, 69, 35, -10, 41, -66, 44, 61, -65, 90, 39, -49, -72, -90, -127, 52, 24, 110, 11, -80, 124, -113, -125, -92, -87, 25, 116, -26, 96, -48, 77, -43, -117, -21, 91, 53, -106, 40, 105, 50, 44, -17, 126, 4, -53, -26, -94, 45, 7, -114, -97, 88, -2, -116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GUOZGKNHFEHVGVMSJBRRNVEJTKSMTMOULXOCAUGQZYKKECITZKNWUQDWCAAGUUXQOERWPSWTRIREMNJYJGSXLDCDYPFCSOFYPSDHR");

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
    msg.setTimeStamp(0.19275803778571954);
    msg.setSource(28241U);
    msg.setSourceEntity(69U);
    msg.setDestination(61436U);
    msg.setDestinationEntity(205U);
    msg.type = 235U;
    msg.op = 202U;
    msg.request_id = 25186U;
    msg.plan_id.assign("QUVRVKNAPPOMHBZMREDVFUUDFENZGGDZQZNUSSSAIHSRXIMQQODWRHWEVXLDTOMYHCWJUGXEZQOVZTFKJQROYUIGLMWJRUESFGDJWYJXKTRLWLYKRGHFXKASIOBBFLOUTG");
    msg.flags = 27590U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 210U;
    tmp_msg_0.max_depth = 0.02555365642501406;
    tmp_msg_0.min_altitude = 0.29778598021691793;
    tmp_msg_0.max_altitude = 0.8409394762599931;
    tmp_msg_0.min_speed = 0.8483404298362495;
    tmp_msg_0.max_speed = 0.47277921477548757;
    tmp_msg_0.max_vrate = 0.37599604429180467;
    tmp_msg_0.lat = 0.757715507626307;
    tmp_msg_0.lon = 0.9898958739346873;
    tmp_msg_0.orientation = 0.550895330551142;
    tmp_msg_0.width = 0.018811199338736873;
    tmp_msg_0.length = 0.09498539383521099;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BLCPFEKSUESTKQXNHPMQNDQEFDDQVNQHHLDBWCCUMXVTZUXLLPJXVOJATZWHKGBZOMNFEBWQIZWLITOCBHICFGJZBVQHYVOTPZFSSBFMTZPRPASDMDBSXRWLGADREAGOKAYKCMIKGQYYNJHROETJARDUWZHDOBVIYYVACOVITEFHKGGEOLRNRVXQPXYM");

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
    msg.setTimeStamp(0.4435209113159596);
    msg.setSource(1472U);
    msg.setSourceEntity(202U);
    msg.setDestination(20428U);
    msg.setDestinationEntity(82U);
    msg.state = 80U;
    msg.plan_id.assign("EMIGJZMJIYIJYFPHJCYANTCOVWETLVCFYGVARSXQDQRMJSBEEXWALDMKBGSNUNKUHHFGPCQNPFPUVVFCLFIKOLZAZNSYKGJNQDJPODTEVNETEGNKZYDOGTYOWOZFHNCMEVBBXRMFQHRAPLZFXHIOLDKUGUHVXAJAEFSILBIYDRBRELBMKGQ");
    msg.plan_eta = -1432403562;
    msg.plan_progress = 0.7648259953168598;
    msg.man_id.assign("ORTGGTXYOOJMQIYAYJMCCBRGALPPDYTP");
    msg.man_type = 9342U;
    msg.man_eta = -1623435932;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.5178203722406799);
    msg.setSource(29062U);
    msg.setSourceEntity(6U);
    msg.setDestination(14153U);
    msg.setDestinationEntity(9U);
    msg.state = 215U;
    msg.plan_id.assign("FLOHPAMBCBUICMQLLNEWDTWGRMTVPIFOPIJYNGNTEQEKEJYYRZQVZJVYCLAZUNCKVDUXBCPLENPCRUGHZXXOOYDBGMWDACEHBNJHWLQZYHXXLESZSQMCQGKRRIXCVGFOHWUKYTSSZXDMYZHIAEWWFMTSVXKLUAWBKJFKAZTTQKIFWJHALRYYPBLUAHODFVUGTOT");
    msg.plan_eta = 336245859;
    msg.plan_progress = 0.3779399524412246;
    msg.man_id.assign("JIARXROVFULGPHCVYICWJW");
    msg.man_type = 60392U;
    msg.man_eta = -1761582064;
    msg.last_outcome = 19U;

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
    msg.setTimeStamp(0.4286542477125701);
    msg.setSource(16851U);
    msg.setSourceEntity(173U);
    msg.setDestination(13062U);
    msg.setDestinationEntity(127U);
    msg.state = 234U;
    msg.plan_id.assign("GPMDRMPWDOLQQPZSIBSPCBAGJIZYSIKXYEEELHCUYFWLDYOYHSIXHBLVIKRDJHUBVAXKNBEOUIJNRFTNXXOQCVJAZLUCJFWXFTSVEZWJNVORIZYNPEMEDRHCAGEGFUKWJEQYTBBFFXISNSLXRKRMQHZZLPMANBSPKZNUYYVDZEGOVDCXPQIZVQTJPTJVSUTD");
    msg.plan_eta = 1145905839;
    msg.plan_progress = 0.6997839345968654;
    msg.man_id.assign("ENSARFZPVEWMBIYFWOTOQBDFNNBUEPQGKBUCLHPIHOKACCFUAMJXXXPCWFLVJGRLZYTVEQELUFSRSQEAIQZZONVYXBSGINGQJIVGUBHXPRIHSQTSKDYGNUXIRPVHPTBUGNCOOJXCDEIHBXSKKJLTHTWESKOMAYAWIIJNDOPCWKVDVDNUNAZMRTPHAABRZWWQUJ");
    msg.man_type = 53509U;
    msg.man_eta = -388758450;
    msg.last_outcome = 61U;

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
    msg.setTimeStamp(0.4383266669000383);
    msg.setSource(48762U);
    msg.setSourceEntity(59U);
    msg.setDestination(28968U);
    msg.setDestinationEntity(195U);
    msg.name.assign("JBMZPYIUXBEGAUPZTEDWTRCQYVBZNUPQMLLSUAASZATURQWHSVYTHIYADYGMLKREWDHTWNDPYJGQSRSNGUXJGNUSORGSABGAFNCCKKNXLVCVRWSAZUQCCIBEEFVQIFRKRBNXOFKUBTTPJJNWJNIMZKAIFEXMXODZQVPIFEROLSGHDBBDHQWMTZBYFTLYSWLKCHDEHOPJIKXPZYIHFXCJOPKTXEAGUCDZMMMPOLMK");
    msg.value.assign("XTKQAULJECHFQECLJSNHUZNCUDFOKJVVOJEPKPAVVAVXTNTYFFOJOKNQZYLGSDMLDPFQMDUGBYBBDQJJXNWEQFESAGHEKSQNHMBNTZZWMBZDSHKBULDBRBOMRIEMVTCRKISYCZLXUIFRREHHKOMSHRMXDYHITUJIIARVWPGWQPRYNIFAYTGWYAJXCUZSAOSOYCEXPKWYNZBCLJTCAVLCPFLQXPGSZQMTGBHLDMTPWIIDXOGUVR");
    msg.type = 137U;
    msg.access = 86U;

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
    msg.setTimeStamp(0.9334869147018151);
    msg.setSource(47190U);
    msg.setSourceEntity(182U);
    msg.setDestination(3974U);
    msg.setDestinationEntity(29U);
    msg.name.assign("SFKLIEUKMDITBUJTKVRFHAHDGPFTBPEVGGISNQCPOTWZEVEWNALXUELIGIGZBNBJOEWGRPHETYQJSACXKYLKXFVWCXKLLQOTKYCGZJGMNDIAYHOFDRKYMBXYWOJMZWXAUVPXAIFFLCOPUNQQHQWTFEDMQUYNEJMLLBYSTPMZRHVLGZPSREVJKPTIVDBSDOAZRYGRMPUBOVNZTJSDSWKAHQUCNAO");
    msg.value.assign("FZDILKRBUENVESTOLBDRYMCAGSIQHCCDOAHJPQZYHFHIVFDDEPMJY");
    msg.type = 2U;
    msg.access = 79U;

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
    msg.setTimeStamp(0.011958951606576562);
    msg.setSource(37380U);
    msg.setSourceEntity(235U);
    msg.setDestination(47744U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ZJTPYFBGTBKVQCVKIMISNILPLTZYGNGUACCDGUWDHEXCQYEWRMDQVRUOEJJYKPWEYXMWHIOMDOVOJWAQALFLZFGFEZWW");
    msg.value.assign("WMCQLMUWHHTJLQYWGPQQIXWGXUPVWRXOSCAGS");
    msg.type = 46U;
    msg.access = 66U;

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
    msg.setTimeStamp(0.26282022974934016);
    msg.setSource(53141U);
    msg.setSourceEntity(148U);
    msg.setDestination(5484U);
    msg.setDestinationEntity(176U);
    msg.cmd = 138U;
    msg.op = 249U;
    msg.plan_id.assign("BXLIMDZUBXFWDVPQZHDQJZJLHNKCQUTSZIBDPZKQCUKNEWJGYK");
    msg.params.assign("NKJRYHAUVYVFAXPFREBIWCCQDARRKBPXTB");

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
    msg.setTimeStamp(0.5091517304464629);
    msg.setSource(7320U);
    msg.setSourceEntity(105U);
    msg.setDestination(54579U);
    msg.setDestinationEntity(188U);
    msg.cmd = 170U;
    msg.op = 128U;
    msg.plan_id.assign("ELDYXMFKELZMHFIDUJVWHIWSPFCWREXHUFMZORNUGLVLCSQTDNFVWPYWDMCUGX");
    msg.params.assign("MMQQVVLNGEPYEVVWBZOCLFNLQXYWGGTXYGJESFTCIFSUWHODAPIORYEUPWQVESBSGZFDHTNLHMMIQNLMJSNPZGJ");

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
    msg.setTimeStamp(0.4269401661135629);
    msg.setSource(31879U);
    msg.setSourceEntity(90U);
    msg.setDestination(31944U);
    msg.setDestinationEntity(20U);
    msg.cmd = 146U;
    msg.op = 62U;
    msg.plan_id.assign("FCIGODXMYOJUREYBYNBYLAQQXCBJGPJHIKSVPTDYAZSUCOEMEYUMLHDULPZGVNRWFRIPQDQCGLEWGVWCNRMXBNEKGRRTNHVLWSCHTUXGBIAMPKFPSJMMYAQVTTVUOQZRSNGKUOTVPASJ");
    msg.params.assign("JSSMFMAVCMKXJHGWXVGQZAKVNKPZZCDNAPAGHWCFLIAEAQDPCDXTEMUMHGITQEVHVZCKWEYSYBCLTDRXRBKSSNIEPBPTUTTMMFCJIKOWHZULOMLWIYEQWRTMPBALDGQUYONQXDROOJXIBSJLNGFYBLOKBCCSXUBH");

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.4674442249804588);
    msg.setSource(62543U);
    msg.setSourceEntity(40U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.13465892109947442;
    msg.lon = 0.49257546843546784;
    msg.depth = 0.9350522475569214;
    msg.roll = 0.8743049145674454;
    msg.pitch = 0.832210602660776;
    msg.yaw = 0.10856317442977725;
    msg.rcp_time = 0.6866797508862543;
    msg.sid.assign("HYEKZDFADKZATGTXMPMSLCJPHXUCWLMQZGUAFWKTWKIZBDKWGVBLAHEPHIOHNFJQWBCJCPLFOPAFFNLIWZZMFEKOQUYLIEOHOQXMDAVDTPFJLCYPDKUHRNBBVUSPRURVGFICAYYBVYQTQUSSBXHSAXXXNIOVYERUTWJJOSRPLGBSDWTCMYVMNZYHOTZSQNBSVGRJNVXGCWYSNXKAOMAOERU");
    msg.s_type = 139U;

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
    msg.setTimeStamp(0.8650081442453277);
    msg.setSource(61689U);
    msg.setSourceEntity(182U);
    msg.setDestination(23876U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.8510988294236854;
    msg.lon = 0.049823732679180055;
    msg.depth = 0.9539263911917004;
    msg.roll = 0.27108608817561786;
    msg.pitch = 0.8916462987053717;
    msg.yaw = 0.7696717380042166;
    msg.rcp_time = 0.9064354123021011;
    msg.sid.assign("YNCKFDUGZDEEOYOLYRHUOQDWEAFEFTSACXJYRMKXTGIVMNROVCJUEIXXDNZNSFVCKIKHMUWUTBLMIHTXDARLBZPM");
    msg.s_type = 46U;

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
    msg.setTimeStamp(0.6466592332611232);
    msg.setSource(11526U);
    msg.setSourceEntity(183U);
    msg.setDestination(38478U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.3493999417279293;
    msg.lon = 0.7083965914919217;
    msg.depth = 0.1294286214005912;
    msg.roll = 0.20846559587273605;
    msg.pitch = 0.2825599555759203;
    msg.yaw = 0.4608826414759639;
    msg.rcp_time = 0.6197301888508621;
    msg.sid.assign("AKRDWFQMKDRBROHVYGVGJMUANKJXVDGUZICOCWZEETSKTTVAQBSDATFSD");
    msg.s_type = 88U;

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
    msg.setTimeStamp(0.27226720918046243);
    msg.setSource(529U);
    msg.setSourceEntity(118U);
    msg.setDestination(31515U);
    msg.setDestinationEntity(112U);
    msg.id.assign("SCAWVYLRRYBBXKJUGNPJKSOKLGYZXYEUJFPTEEPUQCFPJZARNRNISSCFSJHVXFDOOQBYOGOZKLCXZXBBUPBVGQFIMWDZOIZJHAWERDDXGGTMVCIKPLGDGJVBQYKHWJJHYTNDKCADYNYPWBWESIIYIMNFUCHOPRFUFXVLDVUATMXNAQJLZQDROORPHMHMRUEGXAHCZKMSBQWVIEPTLHFZBWTTOTWUAZLKQTVDUQHTQRSN");
    msg.sensor_class.assign("QXTTXBMPOXA");
    msg.lat = 0.6543028925004143;
    msg.lon = 0.7435082489296141;
    msg.alt = 0.6832699898774376;
    msg.heading = 0.04602644297110148;
    msg.data.assign("ZERNSSUCCYOLEORAEXDWZPTSGARYREQLCATKJMITFPVYUGXUDIUPEFHUXCJMQLIULCTMRTCWUYMLOVWAHTBIRNNINNRNOFGQJYIEFDVXPQONNPRXYJ");

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
    msg.setTimeStamp(0.6099970234622497);
    msg.setSource(39422U);
    msg.setSourceEntity(150U);
    msg.setDestination(59106U);
    msg.setDestinationEntity(18U);
    msg.id.assign("KAJVPTHSMGQAOMRYNIPZRNLEAADFNWWEFEXXTRJHVTWWBHFCOZYKINLMMYGXOKRPXIHGYFPFOERFOTFHTTLKATJWICJVDBCLUDMJEYMIXOJTWUDEUBFFGMSPBNJXTZUNVRCBLUDG");
    msg.sensor_class.assign("FHWFCLUXLLXFQKOCTSJHLTHFTROGNTARGLUHFVDPZSRCIYCSQPBJYAHEUIKMOWFKFUVGWVBYPCNYIVMLAJAXVZQDUZXWMNLKRXBKKDLRNAQJPWFWNIARHNEZGDEQBWIKNZXDXDIVMSHRLDTTVVJJOGDPQ");
    msg.lat = 0.14260985238399193;
    msg.lon = 0.6310487954913971;
    msg.alt = 0.5796301300790685;
    msg.heading = 0.8102840013411997;
    msg.data.assign("SODALJZYMEDALHYQFLYGAKSPVKONKTMDCBIEOXXCRHPAIVGBPCRSEMBEUAFONWQJXVDRKIWGLRUNOZOSIXTJHVKVEDHDYOIUQYNXVFTBGQSGLGSMCHZUWAWXTUWPRWTQANZXTHBJJWFTQNKWHXWPSIQHTXFFZHMJOZSPPLUEJ");

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
    msg.setTimeStamp(0.37971186320992123);
    msg.setSource(34369U);
    msg.setSourceEntity(97U);
    msg.setDestination(8242U);
    msg.setDestinationEntity(11U);
    msg.id.assign("SCLEOUJQDY");
    msg.sensor_class.assign("LBRIYTUWZBPBANTJZJUOKHMAWDXKSNYTREDRKETGKEMBZTKBLLRSTESAPDXNLVVGZEOHDFQIVJNZPOASIYFIPBIZCGHYQFYDRUYVWBVNPSQCJQUMQAMXLQZJGCWXTBMZYXHIDRHQOHKVUCEEVHAWUGPISIMWLMUGHGNXSJXDJOCM");
    msg.lat = 0.4579726484825164;
    msg.lon = 0.054788650926671956;
    msg.alt = 0.01989752554184543;
    msg.heading = 0.7148336245472782;
    msg.data.assign("YQLWTSZDFXSLHVNYUHJAIPROWNHCCJUZBCHMCFLYOODTOBCYUNMGHYBBPQYRFHNGRJJLJTFSZBPIKREHFVBKXLAIPGXKEQLOCOFDAMAIVZFOHWOAEGXRGWUSQIRDNNYIWSWTLMHPTFSAQYBORKJJLZGMKCKSUMRZWNBTYZSUWXLVDDMGBMVPNDFGJVZDVXFSVIJKCVXCCUXKAXPRAEINTEYWAZKNSUDODI");

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
    msg.setTimeStamp(0.4979482481425934);
    msg.setSource(54649U);
    msg.setSourceEntity(161U);
    msg.setDestination(11413U);
    msg.setDestinationEntity(0U);
    msg.id.assign("EPFDLOBQEBITDPVQXMUHCBYUNHXWGOQKLVANJQZCRYTURJHPTONXIRRFRYGFSZTBSKARYHRQWXFGDZWTIXQQRBTSUWYUNXPXNGOXLVYJLMRI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FNPBHUFQADJRIKPIJADECNHODFHIARXWTPUFQVKZIXLPCMOVNGFGYNLETVVXJFYORXDSMLKMXCSACGTQHLZRREWHUTIBEYMOQJWIFUFAOAAJYQVKRECITHXMGDBEUWZWUBTCPXYWRMYVKFMOUVEOLKULNDEEKWNQTPZYUZCSLTBQERYGNAZ");
    tmp_msg_0.feature_type = 234U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 171U;
    tmp_msg_0.rgb_blue = 63U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.34747607242532574;
    tmp_tmp_msg_0_0.lon = 0.3926107874867393;
    tmp_tmp_msg_0_0.alt = 0.3354676239051885;
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
    msg.setTimeStamp(0.08290981652346896);
    msg.setSource(32331U);
    msg.setSourceEntity(119U);
    msg.setDestination(1324U);
    msg.setDestinationEntity(100U);
    msg.id.assign("OLZUIRWWSFQBAWFCGAODBJKEISFTJPVGXPAEMBBVOPPCLOMJYCQVMLHVKWZNSYWQJHXODXJHEUAZIRNOHLAFEBGKOCPIRTRFAHBUQIEWJNYKIUNGBMQXLZRHKDPTMKVHU");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XEFMIAOFCVZHRBAARWQOXMXMFDIVQLWUPSYOCOGTCJNGRTWCBKVQWHQMZOEUVASKQSJYXBAINBZLZRKZLPTTVCUUUUXBZKLNPHKDIILDSTGQNUYOEVQRVTHWTYL");
    tmp_msg_0.feature_type = 143U;
    tmp_msg_0.rgb_red = 132U;
    tmp_msg_0.rgb_green = 222U;
    tmp_msg_0.rgb_blue = 7U;
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
    msg.setTimeStamp(0.6513531230968794);
    msg.setSource(47072U);
    msg.setSourceEntity(142U);
    msg.setDestination(208U);
    msg.setDestinationEntity(73U);
    msg.id.assign("DCZPWBDRTVRKNTRMTBHCGXFCWNXHHXASPZGEOQZMFRPGAIPOHKTWNZLDYDGOWQIRTHSDKWBSTFHUUCECOHLPXHSSBZEAMIUKUUBEQYRDCVXBQRZSTXLLELEKCDNACFFJKAANRYZEDWIYJCLSPLPV");

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
    msg.setTimeStamp(0.4695572831739675);
    msg.setSource(39082U);
    msg.setSourceEntity(7U);
    msg.setDestination(7157U);
    msg.setDestinationEntity(175U);
    msg.id.assign("THQODVCSQKOTNZHWZERPPEMFFTEDDXPGVVWMUODVIYOMECTLPNZHYUUBQSNLEYUZTGWJWNXRRZYHRPRGPFBNXPHIACYDXFXINKZSBDADMUAJB");
    msg.feature_type = 104U;
    msg.rgb_red = 173U;
    msg.rgb_green = 211U;
    msg.rgb_blue = 130U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.692855729455675;
    tmp_msg_0.lon = 0.4655777738443879;
    tmp_msg_0.alt = 0.1021501692800274;
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
    msg.setTimeStamp(0.931136157829707);
    msg.setSource(61299U);
    msg.setSourceEntity(48U);
    msg.setDestination(40493U);
    msg.setDestinationEntity(57U);
    msg.id.assign("DFTUGONTBKLONUKWTIGDG");
    msg.feature_type = 107U;
    msg.rgb_red = 40U;
    msg.rgb_green = 105U;
    msg.rgb_blue = 115U;

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
    msg.setTimeStamp(0.4280577681772241);
    msg.setSource(53345U);
    msg.setSourceEntity(27U);
    msg.setDestination(64403U);
    msg.setDestinationEntity(95U);
    msg.id.assign("QDIODNZYHWSLCAANHPAVJLCBXTFFKNFRPRQGAUCYZLQQSRAJIVXZRDINJGDMHBPJSIQTFDZPXYWWTWECGKUMBVPOLUMMKNWUFVPERXMLAKTTUHUTBMEYHPLLKXJHUCKFEDKNDTMXVBCZDGCGCLJVIBGIDFOVHOHOZGIQXJMJIOJKYVGTMUMHEZWINEAYGPCRDQVHWNABXXURSBSYBTSOEWEOWZZRSSRQNLQFWPV");
    msg.feature_type = 131U;
    msg.rgb_red = 198U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.1644405032102706;
    tmp_msg_0.lon = 0.49629681167417783;
    tmp_msg_0.alt = 0.22906372846039125;
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
    msg.setTimeStamp(0.13391393431931786);
    msg.setSource(49160U);
    msg.setSourceEntity(88U);
    msg.setDestination(21644U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.3911870430699397;
    msg.lon = 0.21042796043353618;
    msg.alt = 0.14437280227989324;

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
    msg.setTimeStamp(0.9367504857017952);
    msg.setSource(1774U);
    msg.setSourceEntity(73U);
    msg.setDestination(25924U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.6883613431838863;
    msg.lon = 0.5685936617213984;
    msg.alt = 0.5339693797746554;

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
    msg.setTimeStamp(0.6591274370191982);
    msg.setSource(60328U);
    msg.setSourceEntity(172U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.0242843102909599;
    msg.lon = 0.3530124006719817;
    msg.alt = 0.9914714561316263;

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
    msg.setTimeStamp(0.935588914288607);
    msg.setSource(18671U);
    msg.setSourceEntity(194U);
    msg.setDestination(17636U);
    msg.setDestinationEntity(108U);
    msg.type = 224U;
    msg.id.assign("HEVENVRYPDZJMXQXLADNJSHWQUHONPPLTYPEIDCTLEUMPAJHVDEXXSELLBLDZTZKWYBMGOUAPCGVLCQSRJCRFVIGMTAPBGUOLBOGGNCTSJHQGFCWWTMOQXDQRCQTOMZIFKJWZWBYEYBBKAFWAGYVNDMRXVUIRENCYKFHGTOCZUUNZETXVMJLUOIUC");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 17U;
    tmp_msg_0.actions.assign("FIDHSQHNDYZQBWGQVQJDGOPOKDKZQHEZENJMTEFUPKMXCCZPNDPLDFYQEQITXNZOJSEJXYUUQRSDLOMWXIRKXUXEJTVDR");
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
    msg.setTimeStamp(0.9172462498642375);
    msg.setSource(9001U);
    msg.setSourceEntity(82U);
    msg.setDestination(1817U);
    msg.setDestinationEntity(140U);
    msg.type = 36U;
    msg.id.assign("OZQEKBDVJXUVKEAMEBLAFGSVSJPLZDBSGQPBYMZWNEJIVZQYOHSMLRLBCHPWQSTYOVTXJXRDPKNUNGIUHKQRUTSNAUYZFKGMTLEPCMOFEIFFWQEERPNRZLFZYCIWWTIGRTOHCOLCMVJ");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 10621U;
    tmp_msg_0.plan_size = 2267865033U;
    tmp_msg_0.change_time = 0.6957474558361024;
    tmp_msg_0.change_sid = 7874U;
    tmp_msg_0.change_sname.assign("ONYCEKJIBTBUJUFMVTOQXENUKMPRDTLYCGOHJYDFADQGDFQJFBBIRVCXKWIAZPESJLRZXDKYZGTOHLSAKIFSZNHYVOMVKQZXLHVFLFTGDNHUCWETXTSAQCZAJFPCQPYHPZGAFXCOEAVROIIJWTMGTMDYBRBWQNGNYBABLRVWQSYKUAOVNPYELJXMEICRZUISTMSPNMVDKEUPRHLXBUOS");
    const char tmp_tmp_msg_0_0[] = {-5, -103, -74, -5, -34, -39, -100, -127, -4, 126, -121, 80, 104, 37, -15, -83, -126, -25, 34, 34, -92, 101, 51, -87, 49, -127, -24, 43, 116, -47, 60, 81, -11, -49, 28, -20, -39, 6, 29, 35, -109, 67, 81, 95, 125, 106, 13, 124, -47, 75, 121, 4, -122, -86, 25, -126, -60, -19, 7, -47, -7, -35, 81, -81, -65, 73, -49, -4, 99, 76, -73, 12, -108, -58, -105, 72, 125, -120, 45, -76, 19, 64, 11, 97, -60, -29, -105, -72, -118, 89, -114, -11, 97, -67, 60, 66, 29, 87, -93, -106, -39, 54, 98, -64, -25, -69, 94, 103, -94, -60, -83, 52, -30, 43, 4, 82, -31, -126, -74, -22, -13, -112, -106, -28, 31, 95, -2, 12, -61, 42, 80, -74, -70, -84, -40, -118, 47, 71, -25, 20, 124, -41, 13, -61, -82, -44, 30, 50, -52, -6, -70, 47, 86, 96, -79, 102, 29, 66, 70, 114, 121, -69, 96, 21, 24, 3, -5, -66, -69, -15, -77, 105, -89, -65, -33, -63, -128, 17, -62, 40, 2, 71, 25, -86, 122, -60, -101, 92, 54, -78, -61, -39, 83, -36, 111, 90, -87, 111, 122, 112, -6, 65, -90, -33, -10, 20, 75, -95, 81, -39, -58, -45, -97, 101, -9, -9, -94, -31, -38, 64, -1, 59, -11, -11, -24, -69, -117, -85, 13, 17, -28, 30, -116, -79, -65, 105, 62, -56, 48, -36, 5, 27, -29, -75, -60, 84, 125};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    IMC::PlanDBInformation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.plan_id.assign("FXXMYAFPIXKOWYSDKSHRBQMYEPGUGRZIVUNVYKAAVARGIGOFJNJQRYJMNMLHXEHZLDKDOBXQCEQXTVBHWUFINLOJLKLYHMPEZIJCSAQDFTKDHWUZKXBTDLUYUBHFEGTJRXFAZRQUTHWZSVXPJSDBQCJDZP");
    tmp_tmp_msg_0_1.plan_size = 37369U;
    tmp_tmp_msg_0_1.change_time = 0.8875630815813956;
    tmp_tmp_msg_0_1.change_sid = 58255U;
    tmp_tmp_msg_0_1.change_sname.assign("DENIMSEJEXNKMWPBIANKLTKJLDIZPRUZTQBRUDVPCKGRTGMFCQRAOJUHFAESDFXMXMOQIDYFIQFXLT");
    const char tmp_tmp_tmp_msg_0_1_0[] = {65, 90, -44, -112, -89, -116, 74, 60, -96, -120, -55, -110, -114, 108, 71, 125, 17, 76, 107, 20, 38, 110, 35, 75, 41, -31, 73, 48, -65, 18, -117, -48, -123, -125, -54, 16, -90, 4, -77, 122, 112, 97, -56, -28, -47, 79, 23, 117, 86, -76, 40, 123, 42, 74, 123, 85, 26, 104, -115, 63, -114, 108, -32, -107, -72, -93, 4, 48, -120, 23, -43, 13, -76, 21, -18, 109, 90, 95, 76, -116, -86, -59, 113, -17, 98, 66, -34, 44, 123, -83, 79, -94, 52, -50, -58, -40, -113, 69, 73, -57, -88, 7, 120, -49, -13};
    tmp_tmp_msg_0_1.md5.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.plans_info.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.9624461992839664);
    msg.setSource(38184U);
    msg.setSourceEntity(81U);
    msg.setDestination(19044U);
    msg.setDestinationEntity(124U);
    msg.type = 88U;
    msg.id.assign("CSODAYSFEFBEYPQMHUSYCNFRQZCCYTXXVNMEMGYJFJPXOHAQMRRIWZHPESTJLEYCDNNLVDQHTLAGWEMRYCLEUGBKZIR");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 2803U;
    tmp_msg_0.lat = 0.8902855715866761;
    tmp_msg_0.lon = 0.05651420470912816;
    tmp_msg_0.z = 0.02291532045665834;
    tmp_msg_0.z_units = 6U;
    tmp_msg_0.duration = 46950U;
    tmp_msg_0.speed = 0.9118261110853667;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.type = 19U;
    tmp_msg_0.radius = 0.02639821689304922;
    tmp_msg_0.length = 0.12419917918885925;
    tmp_msg_0.bearing = 0.5277792429354011;
    tmp_msg_0.direction = 248U;
    tmp_msg_0.custom.assign("LGWBBQEDDNMOPPMORRHZKZVYLEJEKRHJDTFYVWURIEQPODGWXIVCVMBVOUWQBTXSGNSCACUAMICIQSSHSPMFSEUZHFNBWTNEYJWJKVQFMRELCZUZFQIXMRZHTQDNZGKNLGUBYDBFYRQAUKLOIGRLXPJEGXVCPJLRTAUVYYTGXKIEDTDLRWHIAFOTPDVSO");
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
    msg.setTimeStamp(0.4000838010006258);
    msg.setSource(61183U);
    msg.setSourceEntity(53U);
    msg.setDestination(64446U);
    msg.setDestinationEntity(204U);
    msg.localname.assign("NZFMPYNOYIWPNFTDBQKUZSPZQUBEPCBVWMCNMTYUMTTJYFSSIDYOGHCONWVUJCKFWQEJBGYKYGFEUVCQHOORZTAAZLDJXLBQYAXKPHLRLHICABXJARBYDGIVGZGXYWWVWPWVXMBFQPFCOGEUCHJXMRJQXZSDAEHPDZIUMIGLWKMMODHKDIODDLTNRVRSTGEFSMLEFSBJAQNCIHJTZFWBERXKOAQUINPHXLSCPK");

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
    msg.setTimeStamp(0.0534170888963329);
    msg.setSource(35267U);
    msg.setSourceEntity(169U);
    msg.setDestination(45124U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("UANGNOIQQOWWTTQKIIQWAQQWILUOLTSYAARPKKAWXNOJUVDPNDTYSUVVCAFTKJEBVBLSBOUBSGMRKWSZVRDKPGVJVERZFWMMURAC");

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
    msg.setTimeStamp(0.488014204545698);
    msg.setSource(59540U);
    msg.setSourceEntity(143U);
    msg.setDestination(46776U);
    msg.setDestinationEntity(78U);
    msg.localname.assign("EHSKJSQXNBCRDOAUXPKSYTPOXDZRUKACHZGRNCD");

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
    msg.setTimeStamp(0.3472820849095576);
    msg.setSource(1058U);
    msg.setSourceEntity(37U);
    msg.setDestination(1808U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("SUFYTZNTXBF");
    msg.predicate.assign("QVTBKMXPCWQWCKWZYTMPBKAFRWBUSYLWIMMYSJGVUXSTJNEFZFIEGAHXKOIERDWFZYFTSPPUVLALHHCLKRLVYIUIGVEDELNMKCRIJUCNEFFOHNINFQZRDMKCMOQKGZYHRQJIHYFEVBNBVAOORFUHPNGSVSJAGWDPGQUCNXDTASZSHTWOXJDBQPEAMRTAIMTYTKXGHZZUEOYBIVQLNPSQXGPLQKURCXBBZCJRVAJDJOLTMODHBCDJZAXLDPENOW");
    msg.attributes.assign("QGNGDHKGRPYMVXJBNPXUDPMADKSOSEDJZOVZZMHKQRFQJLTSHDCUMFCLTEHVXNQPBHAISILTGHQOCUXXQXENZEBFWPWZHIRWLUNBRPNKKTNBUKMZLMZGAYMDSEKOTZVFKAKTAORBNUHLDCYXOQSASHOFHFRMQFTAQOAJKVJWSCPRNWMYLQGFRFVDYXYBGZUJIYLSSGFJAWUDOPIWNEW");

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
    msg.setTimeStamp(0.7819146179625588);
    msg.setSource(60666U);
    msg.setSourceEntity(74U);
    msg.setDestination(37707U);
    msg.setDestinationEntity(235U);
    msg.timeline.assign("TRVSTSGPNWFUFRTHZCVSWQPLDFKAHEEXQDARUJNNDOBRFOMGUVHZMNHELWCXQQUPRJFYVEEUKUOZPSKOCJQRXRDMTVHQAMLFVCYOHCLFKKZOVWZDRBSIJLTGTEJI");
    msg.predicate.assign("UZVHWFZOCXSPVZONXPPPIHLWGGKJUSJMWXZLTRQCDHPKODSQFAFQIDFHBABPJWQYEFYIKVLUMPLIBKMJQNYSTLNWSMMWZYTWGECMOLEQGOVKOMQKHWDEDAJKRCWWNJVINBFABZ");
    msg.attributes.assign("HICLQEWOMGESAROTQZAQNXDFZZAYSQLCAVVPLWSRXBVRWHUTGMTJYLDUHNYCXNFHOCEJXMXQAOWFSCJKBYNEHZFQTRVJICJRLZMXAAUMVISNKKIHBVLOMWMSKPOLQKDBNPDSOEDHJTYWDENXXAJWMYTLUTGNWJRZETUMACJDYZVVUQKTBIXDWIMCZQCBGSFYGPRXPIAHKBFRPKPFFPHDDIUGYYCEGEIVIPOEVHGBRWZGSFNLSFK");

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
    msg.setTimeStamp(0.021058251062994304);
    msg.setSource(4582U);
    msg.setSourceEntity(43U);
    msg.setDestination(18379U);
    msg.setDestinationEntity(239U);
    msg.timeline.assign("LJUHTIKVCMNNKIZAXWJQMLKENRGGFPIBYSUKHKIBXBRODXJXRMYPLMGPAXAPOEZGFQQOFUOEZENUDTTOYWBWKFNVBOPMFDCISAAWULIOGFWNNDQBDBDUUBSIYDSQVECWSCYVENJHUMGGSRFVSTJDVJRIKFTWHAVFQASCCCPRPJDLZHKULHTTYSJQKBUJYOHZZCWYQVGRYZWMHHZXPETFOVQOAHMXXAYGRQ");
    msg.predicate.assign("EVQGPTVJAWKCTPJNDUWWXKZNXVIMAMKJQTKGSXIEAYSGGHIDIMZOJPPBSTYMLZNCUXOKWYVXN");
    msg.attributes.assign("OOAAEDIBYHMTMSXCIMFDIYJ");

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
    msg.setTimeStamp(0.41573190028331497);
    msg.setSource(24774U);
    msg.setSourceEntity(159U);
    msg.setDestination(28394U);
    msg.setDestinationEntity(215U);
    msg.command = 177U;
    msg.goal_id.assign("KOHHVPMQBSPMQAZHPQCIMEGILLHEJCQHNQOIPSUEAWZAHOXGRKVKZCZWZHIZJPDNYCDJEZXVTXXIFLTYKPFBSNFJGJWDGSRWWRBQEEAXFNUAPTYLSAWDSAP");
    msg.goal_xml.assign("MCHEDRLUYWYFIRFQICHBHTUSRONPENOJGMWMAUFPOOWIYDELEJMTLVOGNO");

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
    msg.setTimeStamp(0.23144288066924756);
    msg.setSource(50582U);
    msg.setSourceEntity(204U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(137U);
    msg.command = 73U;
    msg.goal_id.assign("HFFSXKNETHCCXCUTECOFUZOXQDCEVJAGJHSJKIBPLFSWILXLLGZFNGUUINHTQRSMWRNBWVZZMVSTZPWMVUTYAJERTRBQYJMNDWMBSLQWKJLNDKNIGFVBTQQJQDQJEFYVMMCSEUXZAJKLYUOIONHZPHAOFWAKRDPKSFHYJDUKXBEIDEGAAZDKSAQOLCIGIVMTDBYBVPPCPZYBPYXSAQDUIBTHYWXHRRFUPAOYCEZ");
    msg.goal_xml.assign("AGPYPWZWLUKUFXCDMGTWEFUZJRYHCLKVYVGPDBIOO");

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
    msg.setTimeStamp(0.02486048785754824);
    msg.setSource(21218U);
    msg.setSourceEntity(79U);
    msg.setDestination(46070U);
    msg.setDestinationEntity(42U);
    msg.command = 47U;
    msg.goal_id.assign("CPKVMLZKVFBFKRDZLDUXJIJENPFADDAVOZRLWVZFXOEZESUYXQYXRZHMQFSWOOJMYVFHUZQAESIPXYGKSHKPACBEBXO");
    msg.goal_xml.assign("YEXZOXMLCGNYQUPEBDRVELSHWYYQWFJHRBGWAIVMVDQOCIENDICMXKNLMEIKMKUWFDRTSZOAALKHPBJEFJKTCDYVSAMUHTGTDUHRMX");

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
    msg.setTimeStamp(0.3883384473027873);
    msg.setSource(11938U);
    msg.setSourceEntity(54U);
    msg.setDestination(1068U);
    msg.setDestinationEntity(52U);
    msg.op = 116U;
    msg.goal_id.assign("BLJYWQIROEVHCTMMKDXPRCQHMYPZZOLUKODNQIRFTRMGMSXADIZAXMKOUYHGSWKFTBARBCISGPFBESTPWHUXRJVHOFDKDTAWGNMVECPYAXTDACJMBJDAHTFSOVPPQHLYUJCFEOYNGRXSZBQVNKGURPNMZBZEAWWXVLBWLJNVUKBVEEGBAECEIZQFUTLDXN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KTKBSZBWNYCFHPBHSUDVPQOYOAEHYCWCDWZHAOPQEMCEILFN");
    tmp_msg_0.predicate.assign("AESGTEBHBZEZVGZVQYICUHCRHDTLHWJAPWPVJP");
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
    msg.setTimeStamp(0.7415127299809111);
    msg.setSource(41694U);
    msg.setSourceEntity(16U);
    msg.setDestination(44573U);
    msg.setDestinationEntity(220U);
    msg.op = 230U;
    msg.goal_id.assign("DEVRDEUDYTLZDTQNZUWKBIJPAFTCTRWXHRRZZITFZJVJFEQHIAYPEPSSYNGHLKUITOBJOWQYBBPFONGFSGDVFIDTUBFBSMEJHMYDZXOLNGEOYMAMVXZBHXSUJEYBCIPMFNWWRPNFNYZHGQLMXQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ULQEHVPJICJSPFSICMDHULICERAIHYEVDBYSBZTQVOPCHRZCGZZABSEFAXINESXHLJGMFACCYLVFNVBNNQWIMDKV");
    tmp_msg_0.predicate.assign("RITNSMPTGNPZOYKZWCMUZXKEVRXWFRIKZBUVHDGCQBNZITBZOYIFPVXIDESKIDNWTXJLQNVVDLKURHQELGSZMYPLAKBTTJPXZMFNOCXJLXUEIQOYKSARFGBTTBAHDOFAMMOIJAAOYCZRRXFLCCEUQFJBQLJHYOBKIVRLFYSWNUQRRWBMSSHCMWPMCEUGNQHWPQCQAALESLKWDWNIUFJHKXMWAOEJUPTGOYBZPCUADVGEFDYGDTPH");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HZYRRHBTGXTUPNHUIDZCJMDAYZMGYYXXNFFSIRCBEYTKRVOWWIYHUKIFEOIYYHLUGGSWCFVUWCPPJIATLKVGVBCSIHJFSZJVSRCMMZPXQYIGUCXABMAWQOTQWDMLAZHXSQRWONXXPKDGOEOQESUTYPJKRAGBMQVPNVVNNLLMNFEPLAFDITHTOL");
    tmp_tmp_msg_0_0.attr_type = 75U;
    tmp_tmp_msg_0_0.min.assign("XPNBLWVOLXCOVJCXZIFXFMBVPFMJDINNYATEEHDELRZFSBG");
    tmp_tmp_msg_0_0.max.assign("PXLWCOGIJDQBHZACRUCISAYLLDENXHXTWVHQGZUWRHKPIVTEIFQIICBIGTYLBHUBTIEOZPDNWCBMRQZARQPNFKJWXLMYJGAHAUYGEJBQONZ");
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
    msg.setTimeStamp(0.41104691291320694);
    msg.setSource(60291U);
    msg.setSourceEntity(86U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(100U);
    msg.op = 211U;
    msg.goal_id.assign("MWSLSSYGLHFXGOFUBUKUMHJBIJDJZLOXQKHANEZYCNAIRELKJHPTCYPGPYIKMCGBJFXZULQDYTMTAUUELZWXKVUUNORQNBCRNYIXSKKZZENAVO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XNFHLXZAFKXRNFZQPTIALPSSZCCVCTXKPGLTOFNJELAYAUSIDLGMFNSCUDAUEFKWBKQGMWYMOTJTPUSHHHLBVXGKZAKNIMFDWKTCXVRPBGFFVZZCSDOSEQCLPKMEBDWZKGCQQHEJYOJYMSOPDMYOEWSITUUQWIYBYAIZROVNRRNVBZBTAMGVXHAMIHHEHDULJEVRRJVLWQPJWFTXYWICZSQRRREYTNAIPBOKXQIVCJNM");
    tmp_msg_0.predicate.assign("QJWAWNIJDJVZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZNIOBVSYIYDJUCVQGRYSDOYBXBJTTZHXMZOQLJFBGXOAXOVSUVCSZHNCLEIZKCCYPNJMULQRVIQACMDZDXVHIPFUDFFMXITQTFGZZGOPFUFOEXKSAIAATTKYVRVKHPXWFTOXPVJSRQGFCTEDYEJTHGPROYBLEATRBJDNWNRHMWRPNWASLUSHLD");
    tmp_tmp_msg_0_0.attr_type = 12U;
    tmp_tmp_msg_0_0.min.assign("FVSKZVBCZWGTDQZQQLXQVDFOSHZMJLJDUVBEGHAWCLERJNLYZFZWCRBEDNJQOSTMZQAKKXIBXLVTPLVRAUFEQBMOKFALXROHYMPNRPFTKTJRNXOEONTIHONVNSGFNKOFOFPYHYWGZUGEHEXIJWRUTKDSAASDYCYGPNWISZCPDQZIMRDRIMWBGUBHUGCMRAHTPVKTHSPSXGBLKVMPWYBEUJEHAYCNJLUAEKJTCCCIXWIYALOFXVQIGIJM");
    tmp_tmp_msg_0_0.max.assign("RNBSDFJEMNDFEIEZETJPQYCSBWWBKKTDKHMMFXUACVMQOPTSIWFLXPGZNFZZOHKIRCUHQOISYONRTUWUSRTLRPQMGSPVMCUEVWJZJKBYDEOVQEPJIHGUHCDGEBRJAXMWPHB");
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
    msg.setTimeStamp(0.16052619438313342);
    msg.setSource(5487U);
    msg.setSourceEntity(237U);
    msg.setDestination(11492U);
    msg.setDestinationEntity(164U);
    msg.name.assign("CSUXPIOVWECPZPYKXZY");
    msg.attr_type = 176U;
    msg.min.assign("YJMCRDBEYWTZMYZAZXCUTUFWJAVYKSLHVHKJFFWNQZYPVYCQYKERHBTFGYUQEJDXIIEUMWBUMOOSULMQJNYQKMGMNEFVCLHIRNLHZMPQADGFMEKHBAQCEXLGVDOOWEHMCNXAPFLWWUOZCKSZHVIRIAROIUNXPSZFSCWQJJPXTANGOSVCVTG");
    msg.max.assign("EPNPCEHAHWYEJLTGVEVPSFUYYYMLWCDEDIFGIOBQMFKGSAIQEJOCFJCNAMYJMQKZNIDDBAXRDKNUHPUEQXWSRMZRHRKXNUSLGGDADATMAGAHCHBPIPEZLWUSGQXFSMZNUOFZQVEBRJZGDW");

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
    msg.setTimeStamp(0.877694250083564);
    msg.setSource(40504U);
    msg.setSourceEntity(230U);
    msg.setDestination(10826U);
    msg.setDestinationEntity(61U);
    msg.name.assign("BGLDZYUFSXWQFRBDBVPLUYCQKBQMJWMJSGPKVIHZDZVNZCDCGBYEFTVIEBQWLWSKLEYRVDUEMANNYFCZBYFAPAKPRHLGBFXUHCIEVXHYUAEQMOAMUQLMSETYKYPCFIGTKHNWNAVJOTPYEMSFSIDFOJKXPLOQTHWKBMOAJTZPVBPZUZSXUISD");
    msg.attr_type = 135U;
    msg.min.assign("BXKBQFZEBFJJOXICDUACYTQTGCKQHSXLRPYHXZPZIUUPMLQNLWGBTXABQUVSHNGICCMLXLMOOIENEQBDGSFWJROIVDIHVLMNQUNSDCGRAXAFUFJECRYRINZTLVXEYVPVUEKMRPTQUROEWFXHQGBRJZDPIPLKIWMCLZTHEUSYWFWEBJXMHNFCGSPUDWPZSNJARDYWTFMZODTTKJGQPAVEDOSOKHOMAZ");
    msg.max.assign("IERIOEDRCAHPKDQIILYWYHSUKGOXWYVWRHFQBGDKQXJRGHQTSNUECWYNKSFPPZRPOSMUYJMTQPJYCOLEQNLSKFVXXBNUKPJSRUOMCEWHAOFKFUIMOASHVYQIDJFFMXZZAMABKDNNRPJZTYWZDVRHKNKVXESUMHBEUCPABVDTQNIMHLLXAFVLZLZBIOCZZUBTSPBIPMCHOGWWTDLVMGTEXVI");

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
    msg.setTimeStamp(0.20199499645560592);
    msg.setSource(25811U);
    msg.setSourceEntity(89U);
    msg.setDestination(36995U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RUCDQFVMDUMIVHSJRFJNOHOESYNGWLILRHBZNRTDBTFJYZFKUTJTSBDBFQNMQOETYPPLFICBCRQKXTQUZAPGWWTYRDWCDXHFAAAWUOTXYIVOROVNHSSOBASVZDSMEUNENNVUSWIIZXWIEOCMZJAWEJALKKWZVHEFTOUBBPKPDJLAGQRVEQZ");
    msg.attr_type = 216U;
    msg.min.assign("ISJXNLBEZWSRLVTCHNXVZIZEAINRVAHWLYNUFBN");
    msg.max.assign("WWJGZBXTHKZPVQAIDZXFVRHYFLNGQUMXUBLYRWTENGCUZUZMLIHHGKONJODDEEBACTLWPDJCPVVTVPBUAWFPYAQOKQNXULTSOCXJNWBNIESPCFMNKRVAWAFHDRCUHGCLTZDKHBFCBZFPKXHRJOHSNQFSLJCYLPYJGAWKQRVJE");

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
    msg.setTimeStamp(0.4451215548445343);
    msg.setSource(5778U);
    msg.setSourceEntity(7U);
    msg.setDestination(11374U);
    msg.setDestinationEntity(80U);
    msg.timeline.assign("QWNSPGVHHFDPZTRPYTVVFKABTDPVUDSRZCHYJMCUFMNNPUBQXUSQXKIAQYVJEMYTCPIIDQMECWVWNKRXWJIAZGAWPEDJHRFZKESGOGBJWRLQDKJJDIOOUYKXTEQKRUFAZOFTXOKLP");
    msg.predicate.assign("ISGTKHINYENRZVDTNMBEMJDJRWZQPJMCPXUPROIBXUQIECWTPGDFJLBOPTBKKLVXF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PPECBCAYNPLDJNVLXGKLRUBIGSHWPWOYYUBKDCOIDVRYSGIEFJYOERXCHWYMGTLCZMHFRETSUFBSUDGHKNKSIOOZXYATUPMBDOBDIOHLXGFTATZJTZEEZNJUXJFGKBQTVQAUKIRWSFFWMCQWQLDXQMRHEVNZSMPLVPXENPLBGDHYMTYOGCRJNIEKCHYWVKZMRUWNHJFCDMJJXZRGBLKPJAIWQMAQ");
    tmp_msg_0.attr_type = 199U;
    tmp_msg_0.min.assign("OHBLPLEUGVOIIZQGNYAMWKNHMTRZASZCGLNTMYCEEBPXYLFPOTBAFFCRWAHUXJIRWCEPKQXATVGQWVCZJSLZYWWCFUXVSDEMSBZQFPIHZHYIXZDYDKOURXVDKWQHNHQEGKRBEEQJKDTJMNCADNUGYX");
    tmp_msg_0.max.assign("EDKWLLKGZZUOHRCHTCMETQMFUQJQVULXUHLTLCWDZNDCMSEOZVKUEJRCTMMJLXUIKGBYKSSMPKKLFIWEBWZGGFPYOANSXYGR");
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
    msg.setTimeStamp(0.4400900581598419);
    msg.setSource(37761U);
    msg.setSourceEntity(61U);
    msg.setDestination(58362U);
    msg.setDestinationEntity(253U);
    msg.timeline.assign("WUFUBLTBZIPNLZMTESQOMDNWNEDBRAZDVXOOHXYHAXHSSAJTTDCVIPHLOAEGWXCHUPWFTXYNDZCYKEXDOMZLEWKLFJUGFYRJPPHJESMYNWRMIEFCJINBDMDJXWGK");
    msg.predicate.assign("DQFAANSCVMYVVLIRFKEQUAEJKWCONHTHFGSZDRDAPFOFUPWPXUKOOFJSEYKEMVFQCZQHLCEYGVYYMCMHXNYGITUQISZCLTBEQXGHLNDNEMZKPWLJQXASUSODXMPAMHDVBCI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EOVRQMIPQYBYENORNKYTLHBDSNWIEQJQXHGIXJQUPOFNKDSJZCSBVCHIMDCJXATLDBA");
    tmp_msg_0.attr_type = 14U;
    tmp_msg_0.min.assign("MMYXTKKOQBMIBNDTNCSPWXIPARTWRUHLDJGKZAVMUGBAZBIETLNWFQFIPXNOBVZQTFVPFQDESKYLZUGCKHGLUKEBZHKWUOSJVDTIXAFECWIJPHUORGRAXJH");
    tmp_msg_0.max.assign("KIAXWTRJFELWWWRJNNSWXCXHEBNKXFYKMBOEQXRCPPMLLRBCESJZGYBHGLHMSPOZJGFWEJINRCQMCOVFYQLPARQPCDTURJVGKGQAMRVXESYTZFLKWGL");
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
    msg.setTimeStamp(0.09262283104877789);
    msg.setSource(64758U);
    msg.setSourceEntity(147U);
    msg.setDestination(48864U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("LPMHGJMLKXFKTVCVOPNBQIHRSWVRYQLNVYKAEMLLXZHKAJMTFHEOJWNRRVUUIUILYCAGAPODAPATZQVJTXKZDORQHUDZPLJZJIXGR");
    msg.predicate.assign("TGTYQEMFOKGJQVLDEHDNSHGSRYFXGABHZALPRPJDHUUIXCSTDOGZUMYCWXQDWZCOJISZRIEEVPJTOSWURTQFJPAWCGAZKRBVKSUWBGHSCDCLOIVIRWFYKFGPEMWVIJBGKCUPNLELLZMMURNJALBXXINX");

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
    msg.setTimeStamp(0.45518272521572445);
    msg.setSource(2938U);
    msg.setSourceEntity(199U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(233U);
    msg.reactor.assign("QBQSSLKQWFLRSRPQJOCPXXDBTDOKYGAECDMEGHVEYWDNMXGXLGFVTGNBCDYBYJCHNLWVDUTNEDXGVKAGOIQMCRKOZYVOFQJERFBNGMWUMIWZMYLBBPKZKKRWIYXSHQPEZAEISFWRORHVZNPXVOCZTPLWQNDMHBXSRIASPFZUQAHLBXELPTJSAYOJNVFSZUEUUTSIHNKOTHCRHBGUTYPYMVUPGFO");

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
    msg.setTimeStamp(0.061541964621306344);
    msg.setSource(11958U);
    msg.setSourceEntity(201U);
    msg.setDestination(34369U);
    msg.setDestinationEntity(76U);
    msg.reactor.assign("XVBBVCKIHDBCKZAGTHNGEDHQBXJNABRVVMZWTIBOHQZMWDZRSJSAIYBNEEPIY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SDPQFIXJAETSMMRZUGFOMTGLDHZBRVIAXZKKWQRRFEFLZGLJUNBLVXCXZYTTHAZLIMPWRPURQDKBNLVLGJACAJIIEHBOLPWGSTUZRNRIYUQODSJUODMOWWMYCZAKMKCJJPMXEDHCIENIEAMSFESCBFRQPKHWQ");
    tmp_msg_0.predicate.assign("XLULCVDDFUWYMFMKZIOQCJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VGLGBNMIHMWBSHNQVLPHXISXDLOITZTUQKSDOROYIFFVPCRALKKMPJVHMCZGYYEUDFLCLJVNAVRVXUVXKMSENQTEUBTYEDOBHYQMZHQMUJ");
    tmp_tmp_msg_0_0.attr_type = 11U;
    tmp_tmp_msg_0_0.min.assign("FWHPLXXUETQQZIMPAWDBLGDJFYHPLZSVUJNGIVTTBONYDYWKVZNKHEWWHTBTHIXZCHUFYQUVOIYRIREUGYLTKAJMGFJEHPHOIJBPKCCVRCCZQNELANGMOCZZSJOLVDBTCEZOGIDAQNCMRJRKDDWWMRZVXBLSXAKWATLXJBLNBKWYMFQICBQKEYEFFOGXSDSVFUWAPYAXRFDSRM");
    tmp_tmp_msg_0_0.max.assign("BOHMRGSAIOHOLXILJYXTUWUNKYJTWXKQUSGEFXCHECCQVQNROTOSVEEVIFZKDABAEPRHBIKGHXZSJZCBDTJLQYUJONOLDGQUCZOSRHSKIRKXMPHFQCPYGWMFLTXNQMNVWDUPPAZWONZICGZHPBNDIKTSYEBVURHMDAAWYEQAUVSYLRUTLBPXPZQJLWBGFXYSYMIJCFNEMPBIBCJMKMTFUGWJLPFLJZEDRCVXVHTEKGNQWDAFRVFDVISRWG");
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
    msg.setTimeStamp(0.5491053990532251);
    msg.setSource(18397U);
    msg.setSourceEntity(132U);
    msg.setDestination(52772U);
    msg.setDestinationEntity(208U);
    msg.reactor.assign("OHSMJMLSIDHTHMBKGTURCBFSBVYQADFJMHDTE");

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
    msg.setTimeStamp(0.5431378204493205);
    msg.setSource(817U);
    msg.setSourceEntity(21U);
    msg.setDestination(18250U);
    msg.setDestinationEntity(174U);
    msg.id = 66U;
    msg.width = 58053U;
    msg.height = 26976U;
    msg.widthstep = 57333U;
    msg.channels = 10U;
    msg.depth = 164U;
    msg.finaldata = 12U;
    const char tmp_msg_0[] = {-34, 27, 123, 91, 103, 36, -51, -111, -77, -59, 84, 76, 42, -28, -9, -59, -90, 107, 108, -50, -83, -9, 14, 113, -70, 21, 37, -30, -48, -38, 100, 94, -37, -56, 106, 117, -119, -30, -61, -76, -22, -87, -53, 36, 86, -85, -120, -42, -16, -101, -97, 104, 65, -101, 59, 26, 76, -9, -35, -9, 26, -59, -85, -98, -28, -115, 88, -20, 87, 14, 7, -63, 53, 13, 106, -89, 12, -67, -28, -126, -77, -93, 6, -15, -32, -49, 63, 69, -12, -44, -81, -17, -22, -18, -89, 126, 109, -75, -67, 107, -101, -31, -48, 49, 39, -14, -110, 40, 43, -106, 76, 4};
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
    msg.setTimeStamp(0.2925142230474296);
    msg.setSource(25660U);
    msg.setSourceEntity(109U);
    msg.setDestination(39993U);
    msg.setDestinationEntity(66U);
    msg.id = 188U;
    msg.width = 33162U;
    msg.height = 47926U;
    msg.widthstep = 7978U;
    msg.channels = 250U;
    msg.depth = 147U;
    msg.finaldata = 119U;
    const char tmp_msg_0[] = {78, -76, -52, -48, -74, -13, -67, -89, 2, -121, -124, -82, -101, -70, 74, 65, 25, 44, 53, 26, -2, 94, 90, -11, -66, 99, 123, 31, -30, 33, 116, 78, -109, 98, -31, 103, 92, -17, -56, 98, 120, -123, 69, 113, 99, 57, -95, 60, 76, -60, 35, -49, 74, 6, 36, -77, 2, 10, 30, -109, -23, 77, 59, 5, -29, 9, 14, -54, 0, -35, 7, -26, -82, 76, 66, 78};
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
    msg.setTimeStamp(0.612588776514112);
    msg.setSource(22947U);
    msg.setSourceEntity(107U);
    msg.setDestination(31671U);
    msg.setDestinationEntity(69U);
    msg.id = 105U;
    msg.width = 53878U;
    msg.height = 43887U;
    msg.widthstep = 38047U;
    msg.channels = 229U;
    msg.depth = 58U;
    msg.finaldata = 4U;
    const char tmp_msg_0[] = {113, -70, -89, -72, -106, 47, 23, 30, -63, -20, 92, 72, -90, -93, -97, -113, -55, -47, -106, 46, 117, 43, -126, 69, -72, -76, -87, 14, -3, 20, -54, -105, -2, 107, 60, 106, 4, -69, -125, -9, 99, -92, 84, 101, -111, -41, 11, -48, 30, -119, -82, 11, -40, -77, -104, 73, 23, 13, 51, -30, 26, -126, -76, 84, -85, 81, -31, 8, -113, 110, 36, -74, 35, -105, 54, -117, 3, -35, -72, 30, 63, 5, 5, -91, 58, 88, -62, -54, 62, 118, -113, -103, -105, -86, 119, -15, -25, 44, -63, -68, -64, 55, -76, 82, 125, -28, 17, 36, 69, 55, -62, 82, -88, 112, 54, 75, -23, 53, -105, -46, -123, -22, -113, -96, -44, -116, -39, 4, -14, -91, -103, 78, -18, 105, 60, -74, -48, -36, -36, 29, -109, -54, -33, 116, 109, -61, 98, 95, 98, -58, -103, 34, 99, 25, -61, -47, 87, 100, 117, 110, 10, 123, -52, 7, 50, 46, 111, -22, 117, 51, 43, -125, -123, 79, 3, -98, -26, -105, 117, -48, -32, -44, 118, -43, -90, 7, 65, -62, -121, 48, 65, 26, 26, -85, -30, 64, 26, 42, 70, 68, 112, 61, 18, 13, -81, 90, 89, 51, -107, 69, -15, 23, 76, -24, 70, 30, -17, -105, -95, 72, -82, -7, 19, -14, 82, 42, -10, -28, -54, -1, 80, 9, 84, -62, -66, 109, 63, -80, -44, -7, -82, -48, -6, -47, 110, 84, -30, 6, -10, -57, -113, 18, -2};
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
    msg.setTimeStamp(0.4261213021746796);
    msg.setSource(23777U);
    msg.setSourceEntity(136U);
    msg.setDestination(41266U);
    msg.setDestinationEntity(166U);
    msg.width = 28841U;
    msg.height = 60697U;
    msg.channels = 34U;
    msg.depth = 10U;
    const char tmp_msg_0[] = {-30, -28, -49, 69, 125, 51, 21, -39, 29, 20, 120, -17, 15, 34, 117, 43, 46, -1, -102, -75, -60, 107, -111, 77, 54, -125, 46, 22, 41, -1, -58, 48, -31, 57, -78, -34, -67, -60, 119, 98, 91, -119, 20, -22, -89, -5, -54, -64, -47, -40, 47, -82, 90, 62, -127, -87, -116, -123, 23, -98, 110, -20, 105, -68, 126, 122, 1, -120, 11, -128, -23, -14, -126, 49, -13, 32, -94, 8, -64, -105, -2, -80, -49, 94, -35, 56, -17, 17, -33, 55, 16, 79, -75, 93, 102, -127, -10, -118, 54, 25, 19, 7, -80, -10, 40, 70, -7, 6, 91, -4, 11, -101, -35, -66, -59, 66, 6, -103, -113, 59, 20, 19, -23, 99, 80, -56, 68, 119, -107, 46, -2, 70, 106, 29, -55, -44, 15, 55, -58, 41, 89, 91, -19, 84, -23, -22, 100, -122, -38, -5, -61, -94, -108, 51, 50, -90, 18, -108, -60, -2, 56, 85, 3, 7, 32, 106, 42, -52, -62, 79};
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
    msg.setTimeStamp(0.7346966920301105);
    msg.setSource(42589U);
    msg.setSourceEntity(183U);
    msg.setDestination(18170U);
    msg.setDestinationEntity(154U);
    msg.width = 4021U;
    msg.height = 53834U;
    msg.channels = 69U;
    msg.depth = 47U;
    const char tmp_msg_0[] = {35, -14, 84, -7, -76, -70, 11, -17, 60, 13, 6, -35, -28, 97, 56, 76, -4, -68, -96, 76, 48, 102, -70, -24, -115, -92, 69, -80, -87, -44, 26, -87, 93, 54, -111, -96, 106, 114, 54, 121, 107, -128, -17, -3, 87, 47, 71, -106, -49, -82, -89, -103, 24, 121, -43, 29, -28, 7, 26, 47, 54, 58, 14, 10, 39, 45, -63, 108, 121, 120, -108, -37, 76, -53, -78, 29, 96, 90, -54, 121, -97, -109, -98, 85, 56, 5, -69, 20, 88, -109, -110, 81, -83, 28, -31, 57, -53, -74, -28, 7, -57, -7, 34, 33, -108, -13, -108, -14, 93, 99, 80, -36, -7, -120, -54, -9, 32, 53, -114, 36, -127, -74, -47, -27, -31, -87, 60, -103};
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
    msg.setTimeStamp(0.5129839226102656);
    msg.setSource(14418U);
    msg.setSourceEntity(98U);
    msg.setDestination(49754U);
    msg.setDestinationEntity(99U);
    msg.width = 12651U;
    msg.height = 4583U;
    msg.channels = 84U;
    msg.depth = 244U;
    const char tmp_msg_0[] = {-104, 42, -18, 16, -108, -83, 95, -99, 27, -109, 107, 20, 9, -103, -105, -106, -76, 21, -52, 27, -36, -112, -56, -47, -99, -95, -80, -101, 109, 16, -73, -68, 81, 31, -64, -98, 120, -92, -72, -73, 105, 13, 124, -91, 21, 103, 56, 105, 7, -36, 116, 117, 81, -32, -11, -26, -98, 28, -48, -77, 28, -73, 79, 126, -114, 59, 62, -11, 26, 59, -45, -21, 5, -19, -26, -124, 85, -102, -52, -2, 17, 109, -119, -15, -82, -61, 64, 26, 51, -54, 115, -19, -22, -35, 101, -97, -93, -56, 57, -81, 40, -74, 113, -52, -125, -73, -47, -40, 14, 58, -53, -62, -89, 63, -120, 58, -95, -4, -89, 30, -50, -84, 108, -59, 22, 65, 99, 68, -39, -116, 103, -50, -37, 120, -110, -48, -38, -63, 124, 49, -4, -117, -39, 57, -71, -125, 86, -12, -123, 50, 31, -66, 14, -89, 97, 78, -23, -70, 43, -124, -77, -67, -48, 105, -31, -63, -92, 110, 78, -56, -73, 83, 75, -29, -17, -74, 82, -8, 113, -118, -6, 17, -2, -46, 116, -105, 119, -116, -51, -31, -5, 10, -51, 67, 80, -86, 66, -17, 79, 24, -96, 104, -25, 23, 32, -55, 15, -83, 77, -93, 0, -83, -67, 77, 55, -125, -24, 11, -73, 60, -46, -108, 50, -95, -33};
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
    msg.setTimeStamp(0.5109493340470894);
    msg.setSource(25538U);
    msg.setSourceEntity(123U);
    msg.setDestination(48393U);
    msg.setDestinationEntity(174U);
    msg.frameid = 241U;
    const char tmp_msg_0[] = {-83, -85, 17, -14, -116, -91, 111, -27, -62, 71, -20, 72, -126, 32, -107, -105, -118, -17, 84, 120, 28, -47, -66, 72, -91, -34, -1, -7, -26, 92, -123, 4, -27, 100, 59, -63, -118, -103, 68, 118, -122, 112, -36, 33, 61, 74, -78, 83, -39, 66, -104, -3, -26, 126, -93, -122, 35, -101, 41, 15, -55, -73, 93, 2, -110, -11, -41, -36, -19, -21, 112, -45, 26, -45, -120, -42, -112, 68, 63, -108, -10, 19, 2, 0, 4, 84, -59, -127, 120, 22, 42, -15, -91, -3, 34, -46, -114, 72, -15, -54, 78, -44, 123, -86, 19, -105, 122, 87, -115, 60, -73, 100, 99, -128, -105, -22, -102, 51, -110, 64, -45, -106, -104, -88, 25, -116, 123, 42, -117, -121, 123, 69, -91, 26, 4, -89, 70, 26, -67, 19, 44, 23, -40, 63, -65, 20, -79, -48, -52, -99, 105, 4, 42, 41, -53, 75, -11, -52, 55, 14, -3};
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
    msg.setTimeStamp(0.8122627888911007);
    msg.setSource(19396U);
    msg.setSourceEntity(112U);
    msg.setDestination(6942U);
    msg.setDestinationEntity(3U);
    msg.frameid = 134U;
    const char tmp_msg_0[] = {100, -127, -30, -28, 118, 43, 87, -103, -117, -54, -125, 55, -45, -16, -39, -112, 95, -9, 91, -46, -20, 61, -26, -27, 63, 47, 40, 84, -76, -109, 70, 90, 110, 35, -23, 97, 34, -4, 8, 85, -63, -4, 72, 124, 30, -28, -127, 110, 54, 14, -33, -51, 70, -1, -29, 22, 25, 22, 102, 89, 81, -14, 11, 21, -4, -70, 27, 42, -36, -99, -90};
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
    msg.setTimeStamp(0.33596522383309935);
    msg.setSource(28399U);
    msg.setSourceEntity(250U);
    msg.setDestination(44885U);
    msg.setDestinationEntity(121U);
    msg.frameid = 81U;
    const char tmp_msg_0[] = {-2, 56, -59, 11, 24, 7, -116, 7, -91, 9, -95, -72, 5, -87, 9, -34, -25, 7, 19, 92, -14, -68, -27, -76, 53, 92, -74, 95, 54, -9, -16, -47, -2, 77, 90, -49, 43, 99, 88, 114, 118, 20, 5, -54, 14, 53, 32, 3, 18, 42, 101, -23, -27, 122, 4, -119, 120, -13, 67};
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
    msg.setTimeStamp(0.3628632806159311);
    msg.setSource(4189U);
    msg.setSourceEntity(224U);
    msg.setDestination(5584U);
    msg.setDestinationEntity(133U);
    msg.fps = 113U;
    msg.quality = 153U;
    msg.reps = 215U;
    msg.tsize = 137U;

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
    msg.setTimeStamp(0.4054869322868281);
    msg.setSource(38166U);
    msg.setSourceEntity(186U);
    msg.setDestination(15258U);
    msg.setDestinationEntity(205U);
    msg.fps = 215U;
    msg.quality = 89U;
    msg.reps = 221U;
    msg.tsize = 157U;

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
    msg.setTimeStamp(0.9527155374997303);
    msg.setSource(49867U);
    msg.setSourceEntity(220U);
    msg.setDestination(24605U);
    msg.setDestinationEntity(63U);
    msg.fps = 133U;
    msg.quality = 136U;
    msg.reps = 101U;
    msg.tsize = 246U;

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
    msg.setTimeStamp(0.0986505003187188);
    msg.setSource(2486U);
    msg.setSourceEntity(214U);
    msg.setDestination(26242U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.09784546200900879;
    msg.lon = 0.4039002242018922;
    msg.depth = 225U;
    msg.speed = 0.0838276312253553;
    msg.psi = 0.4817942795155846;

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
    msg.setTimeStamp(0.6401008585491553);
    msg.setSource(43224U);
    msg.setSourceEntity(188U);
    msg.setDestination(59301U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.7642358390902246;
    msg.lon = 0.8357798492915671;
    msg.depth = 50U;
    msg.speed = 0.7357981796052495;
    msg.psi = 0.1127821288412636;

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
    msg.setTimeStamp(0.396372472421613);
    msg.setSource(30572U);
    msg.setSourceEntity(115U);
    msg.setDestination(62823U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.02661540381475158;
    msg.lon = 0.5589210869950854;
    msg.depth = 76U;
    msg.speed = 0.14914312937438579;
    msg.psi = 0.8845813871539587;

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
    msg.setTimeStamp(0.06547768845965096);
    msg.setSource(64198U);
    msg.setSourceEntity(176U);
    msg.setDestination(34003U);
    msg.setDestinationEntity(33U);
    msg.label.assign("LLBVLMFKSJUJLXXGRKDCYMBHFBMFIVRQEBDSTKWIZEGAHYRXXJMDYHQDACQEKCWRLWGIGOSQLCHTAIZM");
    msg.lat = 0.1607665625539909;
    msg.lon = 0.9072298826997715;
    msg.z = 0.9929791414780009;
    msg.z_units = 128U;
    msg.cog = 0.34283908936288066;
    msg.sog = 0.7570285913620904;

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
    msg.setTimeStamp(0.5188015004189139);
    msg.setSource(16541U);
    msg.setSourceEntity(121U);
    msg.setDestination(1204U);
    msg.setDestinationEntity(173U);
    msg.label.assign("JDXCBACDIZFVUSDEZVEDWQXPQMKUHXUOYMKXUODWJVWITWBGOCMYYASKUFOWTSCQDGEBBIHSJRIKTVZWJHZKVFKLFMTIGA");
    msg.lat = 0.41188454659876106;
    msg.lon = 0.7176453988026809;
    msg.z = 0.3295749563848853;
    msg.z_units = 125U;
    msg.cog = 0.5056723762729851;
    msg.sog = 0.1420494863213153;

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
    msg.setTimeStamp(0.09698546956047649);
    msg.setSource(22119U);
    msg.setSourceEntity(125U);
    msg.setDestination(31935U);
    msg.setDestinationEntity(199U);
    msg.label.assign("BGFPSWZOPFFZNMREBCARRWMVCNAXSHVKDMIYZLRDNKYKAQIWJEUZXOUATM");
    msg.lat = 0.48890758265100254;
    msg.lon = 0.2038492523345573;
    msg.z = 0.8425760780660518;
    msg.z_units = 41U;
    msg.cog = 0.251779644371806;
    msg.sog = 0.3050242037890748;

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
    msg.setTimeStamp(0.8533967028897368);
    msg.setSource(11636U);
    msg.setSourceEntity(40U);
    msg.setDestination(33240U);
    msg.setDestinationEntity(63U);
    msg.name.assign("OICSFLWZAUYHLOMJHPJBQIPBLGCXATOSADZOXNGRTMQNWDVCFPRLUODPCHPWYAKDWURQOZDURUEFAYKJWQSXGMPGOADPNCKYHHKKLDDEEBFSDVVVJTSHIMNERCLSMGKZ");
    msg.value.assign("BWYREIITSJJEEWLOZNUJXJAYPPHPHDFCIVUHMFSKBXMLVPKRSCVVBKXBGUJOXPPHLLATXBTNZOKYLDZPTRQEQTVGQCSWCVYEJAFDNMNKYORFXNSBWR");

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
    msg.setTimeStamp(0.3313569439801054);
    msg.setSource(17713U);
    msg.setSourceEntity(8U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(179U);
    msg.name.assign("FOYJIXDINRKLUSPSGGFMSGKVZHKBWHUJVK");
    msg.value.assign("PDQDQHGZTWTGGZKDHKUDDLOLCQKTWCJFJPBIEBAVNYHMPFKJGCAAFIXPVZMXHGAMKACRZBAIHCLJONHTZKRICAFDXVBEKWIWUJOTPYYDGXHDFXZVZQIBUUSEEYSNWOBGEFTCWHPMSUKZYGFDXVWSBEJJQNESBYYRTQIMHHCMSBMASWTENCEFUYZAEVIURTROQLS");

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
    msg.setTimeStamp(0.9126265081993752);
    msg.setSource(52660U);
    msg.setSourceEntity(116U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(69U);
    msg.name.assign("NFEOSWBMJOWBGNFEUHRJFEMQJXAPHIREZDRRVFXTXMMCMNOYZKKHWKQQCMOGNWEJIZSLBTZRQPVUJHVJADZVTFJNSBLLSCCJIATMEYDHSBLTOHGGPWFUQHAFNKOXOXYHVGPGWLWDCCQAUBMHGUOIKCFQRMYXBAYUPIDINCILLXAAYDDEERDUBUGWRGRTSK");
    msg.value.assign("FTBHBPNTPXBOYOENSZMMURXTQXQWGYISJTVPFKSXVHSDSCKXXMNLMGEUPCUOWYCQVHNDWFRUOTKIFEZDMWXKTUUIKZZAQFFBYUUGVLKDBXAMOLJHIMYMFXNLCLOJSMPTFAGQORMWVQBHENDBRYVOADAYWNPZAVVEYAEZGKAJGRRHWTJGHCPJRJEFYBCXUKSCDSVZTIRKLCTCRA");

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
    msg.setTimeStamp(0.40366351470200224);
    msg.setSource(59481U);
    msg.setSourceEntity(236U);
    msg.setDestination(41559U);
    msg.setDestinationEntity(140U);
    msg.name.assign("TJKLPJIJGDSAZVNFKCPVLOKPWGUTXUGWAHTDXEZRHJQDROVBRTBQGHGMUBNALGYKZWYNZZDMHAJMAKOHKYFQYFNGCYCMHUVCBGNBEIFQLFFKTPQTWNMOYCIMKGZNUBSOKIOXEXBSOMLXCLCWNORFNJRPJBCQILSQXJZEHXASWOLLPDRADECIPVZAUFSFIEX");

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
    msg.setTimeStamp(0.5801004697590797);
    msg.setSource(9705U);
    msg.setSourceEntity(81U);
    msg.setDestination(38463U);
    msg.setDestinationEntity(220U);
    msg.name.assign("IDLHHNXBEXKSDXAOEXTMUFZEQIJLMAYSPRDYTODMRPFUWJQVXNYTBPUCFGSPCDOOFSZIWWWKKHVPMOANHDCIGQZLWYTEJNNDQELFMEJSKBPTKPVWWUCBSEVUCYABHIQKVKENFUPAWZMRCDGMOYBVTVCTGJSPE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LFWCXTSEAPOVVYGLTXTZPGQJINYIPGNLJRFRGHIWQJEPBSKUXEJTLXWHBECJVSGGTAAWQDJRORTDFUXIZCDQHBCNPEGPUHBAVDCQAFNUOFJPUIDICVUXXBBLWMTBLBKUFLIQOABFKOPFNWSUADNSANKMQECXROLDTVIKSLEHYU");
    tmp_msg_0.value.assign("EFGAEXNBLLJCUTYXUUXMNXVGQSSGZWWRTGJRCMJVKTGELMHKWKROQFQJNAPMYVXZFGBGLSEKDNIHAVXXFZEYFMHDDAQRQWEPUO");
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
    msg.setTimeStamp(0.4002401867465001);
    msg.setSource(45555U);
    msg.setSourceEntity(154U);
    msg.setDestination(43232U);
    msg.setDestinationEntity(75U);
    msg.name.assign("COYTQNJXCVGHTQIQXNKWFUUUFXKISMLSZXHDGRGAFOAOWHDHJILGCYXROCDRDJ");

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
    msg.setTimeStamp(0.21119069886202269);
    msg.setSource(1914U);
    msg.setSourceEntity(86U);
    msg.setDestination(35894U);
    msg.setDestinationEntity(47U);
    msg.name.assign("JOBSFGDYSYJJKBJOIBEUVQPUPGRLZEEJVIRRFVENGBLWEBQKDMRXSXHENFFRJZTBXKHIUOPSCWRPZUYHDMKJAYNMFDPNQLBGTYVPJZYXCKMJHNZP");
    msg.visibility.assign("JCNIRTHANNIXAAVDQLNEUFUUUPGUNKOCWRQVMCCDPONRYYHVHSCWBLJQEMZLQSIESLVEEUDMRIQNOVHYWTEHQQXRXTIBHUMKAGGHFPWGJKPXMBFAYUMJXTMOGDGJVFFKBRWLMXYEJIAVRZDIAQCEIHWRCVPJBOT");
    msg.scope.assign("QTMVVOGXTHSFDRGDSLDWADKPZNXCAZLBFCKYFBUEQVHRBUSKSWPAEJWPNMLOVAKGJYRFROHLPZGGMABEGHXSTKQFIZNTVPCPWVCEKQBLUUGLHPWQDVJEMRUUYXASWQYMZFGWLAXLBMYECJZCEYC");

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
    msg.setTimeStamp(0.46860543943163013);
    msg.setSource(54911U);
    msg.setSourceEntity(80U);
    msg.setDestination(40886U);
    msg.setDestinationEntity(188U);
    msg.name.assign("YOQGAEBHHYRKCGCKKZWOVIEOWROIUFEPSXDBQRTKLHWNRJPOMGQSIVZZGFFBQXXXOCLUDUYUESYGAQNSJHCUVXJNKIANQWKQAIZAXYNNGTCVSUPZBXWGZIBKZGFVRJBPDKRFIDXWSAMAHJAYMQFTVFRLHROQYTBJDPWJNHYDMXMSVMJMSBLGCTSILIJHWZZSOBPPUEWKCLLDARBVLEMHUVAMOWYVQITDETETTPGUFNDMCPCZNCRNOFKYXEF");
    msg.visibility.assign("TXPXGGJVRVZNTRDADPQAWURKJYRGHZXCUVMMSONKWNOEXEELDDQBIBKOMMYRAIESYGCHBHMWKZQVMFXEKTIVOWCZMVLVXOKLQFGRTDUSFJEMOEUYSYUCPRPXIQAUZAMGGULPTFJABCWBDOXHHWQCZPTQDAHNHZQFFESCKSPHHOLIPETBUFSXNJGRPBLCLBNHLBUNZBEZIWWTUIYVKXAFKJQTAYNRSD");
    msg.scope.assign("CTDHAQWOEZAOZLDNOARVZIMHEGLMXRFRNMGRAFSTRESKLWUEEGJPSDRFKHBMBBBEPNWDQTZBMQSHRKDPOYIAIYSUYAJXFPPBXLPHNMNXNQCAYJJAGMAIIDUWGNXXCIEWLVVJCGKVYCFEVHYFTZXWQKOZFL");

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
    msg.setTimeStamp(0.34749490684123274);
    msg.setSource(678U);
    msg.setSourceEntity(128U);
    msg.setDestination(58689U);
    msg.setDestinationEntity(80U);
    msg.name.assign("DQFNARMMGOTYIDDLMSYXFGGFXJJMEHETOSKGHAOKZFNGIYLCWWKSKFFNWREYDHODCPLDUJBRAGMJBPOOWAEVAXRSJVHRQQVZYIAPOPWMMTHONMHVFIIUQZBVEUBLENGSBEXZ");
    msg.visibility.assign("GETWQSJCCHCUBLPGJHGIEIXDNDDFKXKSLENFDZIPLBOHIOKSPTSGQFKXHYNIFWVIEF");
    msg.scope.assign("JDCKVGSFBPRGOPXXSKEUEWQCYGLUXLCAQBHDNEISOIVJCVFWFLRDOVWSHVYFSJILMDZGHZSQMXEHGRHVZCKUUFKTYNWEKUAVRWPLYUUTONNPEXKQWERSPBQCMWZA");

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
    msg.setTimeStamp(0.07208082195956123);
    msg.setSource(16797U);
    msg.setSourceEntity(11U);
    msg.setDestination(13875U);
    msg.setDestinationEntity(203U);
    msg.name.assign("GNGVWKEDGZYTYHWTSKYIYOOUXMLAXAFPTBHNXHHWVRBEXVIVUJZNFGSFUEDZSCGQAEGVDLBYJWLACVUSEMH");

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
    msg.setTimeStamp(0.38233252409498675);
    msg.setSource(32238U);
    msg.setSourceEntity(53U);
    msg.setDestination(25752U);
    msg.setDestinationEntity(109U);
    msg.name.assign("KWNAZYHCWQXPYHMKSGFGRMWNULMVPASQIRMEXHTDHBJKSEUKTSCKPVFRIQXGEJDIYVBFNLHUXMWUSRYOSMRULDPBXFWBFPHEYAVACATPLBGEIKFIAJOLGVKNMZNJQVDWHYYLYJOJMTZBXXNMQVVDEEORWEEPRGRKKNVZZZIGTJLUWRCJGHXMPTIQDJZHEDJSTOOQHFLIKCYQOUXTDGUQUBCPVCYSAIAGZINFDNQXWTDBCPLOTSUB");

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
    msg.setTimeStamp(0.3240571109571081);
    msg.setSource(38489U);
    msg.setSourceEntity(2U);
    msg.setDestination(12349U);
    msg.setDestinationEntity(252U);
    msg.name.assign("PIHRBAEGLEPMQBCZRTAOTUCVZLHKILKZSGUNXDNZLOOKVMOWFRISHRAFLKWJADVGOPMYVXMKUTEXMGZNCDWGOAFEHHALTBQIYMVQ");

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
    msg.setTimeStamp(0.2214204911356884);
    msg.setSource(35643U);
    msg.setSourceEntity(236U);
    msg.setDestination(43426U);
    msg.setDestinationEntity(180U);
    msg.name.assign("ZNNPCBCKHUJVDFUWXKOBBHRPVFLOYFOAMPYQICSULZWXTMTWEGJHQRRRBCMLQNPGIMTUGZKVAYAQQCNBSYHGFKOMVVHVYLSVXIIKSBPSLMTSROHMNXWHBZTFPDBCUTJNPOLGMWITDKLZAGTTHALLLYQVBOFG");

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
    msg.setTimeStamp(0.27841287998412656);
    msg.setSource(14110U);
    msg.setSourceEntity(37U);
    msg.setDestination(8909U);
    msg.setDestinationEntity(144U);
    msg.name.assign("NPJHEBUUXYXIMLWQKOIOQBVIQXRKHBRILIKMZPZWMAETCGHQRZIROLTAVCPPGGQNYBBCWGLDYANUPUQDWHVDFLYWRENHHXDMITJ");

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
    msg.setTimeStamp(0.9131151063924179);
    msg.setSource(35839U);
    msg.setSourceEntity(199U);
    msg.setDestination(844U);
    msg.setDestinationEntity(126U);
    msg.name.assign("CSPEISKNTXEBLMFYURKMXZNDWAXXPWZCFYZUASQTJAOWMJREAAPVIJEWDOEYYJAZKXARMMYJECUPNSTTBDMEONDQCNSWFWALVHNJCOBVOIHHCWQKPEYUKQSLIPCPWJRQLCSIVFDIILELXRVLCSDNHHBUIGUFGQUCPGTUNQOFFDOKZRXHYVHBWGRBFRSZXNGMGWJDFBOKLVRVRQEBGHNZDVOIATJKBLAI");

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
    msg.setTimeStamp(0.8642862350678526);
    msg.setSource(23350U);
    msg.setSourceEntity(238U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(139U);
    msg.timeout = 1893674040U;

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
    msg.setTimeStamp(0.582636224535135);
    msg.setSource(6198U);
    msg.setSourceEntity(111U);
    msg.setDestination(19589U);
    msg.setDestinationEntity(161U);
    msg.timeout = 251963214U;

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
    msg.setTimeStamp(0.7145954023998761);
    msg.setSource(30183U);
    msg.setSourceEntity(124U);
    msg.setDestination(7087U);
    msg.setDestinationEntity(213U);
    msg.timeout = 3773757634U;

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
    msg.setTimeStamp(0.10299010877768933);
    msg.setSource(40311U);
    msg.setSourceEntity(153U);
    msg.setDestination(57963U);
    msg.setDestinationEntity(150U);
    msg.sessid = 516614242U;

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
    msg.setTimeStamp(0.2722319265031673);
    msg.setSource(60486U);
    msg.setSourceEntity(37U);
    msg.setDestination(62538U);
    msg.setDestinationEntity(231U);
    msg.sessid = 2264813526U;

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
    msg.setTimeStamp(0.18427966750991986);
    msg.setSource(14737U);
    msg.setSourceEntity(87U);
    msg.setDestination(21982U);
    msg.setDestinationEntity(121U);
    msg.sessid = 3374482541U;

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
    msg.setTimeStamp(0.7432819202247082);
    msg.setSource(10557U);
    msg.setSourceEntity(64U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(19U);
    msg.sessid = 1808096965U;
    msg.messages.assign("YNWPEXHRHWKOBQEHTCMZGAJSABDSVHUFDMIIOJOIMFGKOFMGTMWLACUXKJCNTSCXEGOFYDYNGDRASRQWGEVWKTKQWCCQEFDUFNGKBKLRJJUHBMZIKFVAKHSVPZGWUURENDYTJM");

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
    msg.setTimeStamp(0.15473140996149237);
    msg.setSource(42241U);
    msg.setSourceEntity(90U);
    msg.setDestination(22677U);
    msg.setDestinationEntity(91U);
    msg.sessid = 4176784710U;
    msg.messages.assign("VYMZESPJTEVSXZWCHKUZONWRLHIFCETRVZHVNWTMUWBDISQNXHEPAQUSCWHJEXPOPDKNFMRPYWEHKWDJSMOFQB");

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
    msg.setTimeStamp(0.3259987577850977);
    msg.setSource(8620U);
    msg.setSourceEntity(171U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3124222853U;
    msg.messages.assign("RDGHTPOAUYYXYIVMDKVOWXQGOROZGMBMSXOKBLZPWWSTVZENCP");

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
    msg.setTimeStamp(0.4789801749886693);
    msg.setSource(13205U);
    msg.setSourceEntity(20U);
    msg.setDestination(40614U);
    msg.setDestinationEntity(49U);
    msg.sessid = 3256562489U;

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
    msg.setTimeStamp(0.4964875877246272);
    msg.setSource(16962U);
    msg.setSourceEntity(164U);
    msg.setDestination(3883U);
    msg.setDestinationEntity(224U);
    msg.sessid = 3712628633U;

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
    msg.setTimeStamp(0.889643842104394);
    msg.setSource(57025U);
    msg.setSourceEntity(24U);
    msg.setDestination(10892U);
    msg.setDestinationEntity(61U);
    msg.sessid = 2083942919U;

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
    msg.setTimeStamp(0.9498021151715765);
    msg.setSource(64320U);
    msg.setSourceEntity(4U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(249U);
    msg.sessid = 984420726U;
    msg.status = 48U;

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
    msg.setTimeStamp(0.17074654677896017);
    msg.setSource(29478U);
    msg.setSourceEntity(23U);
    msg.setDestination(13265U);
    msg.setDestinationEntity(157U);
    msg.sessid = 3436989183U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.41155336271606924);
    msg.setSource(36274U);
    msg.setSourceEntity(160U);
    msg.setDestination(62164U);
    msg.setDestinationEntity(132U);
    msg.sessid = 101514133U;
    msg.status = 46U;

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
    msg.setTimeStamp(0.9984492237032776);
    msg.setSource(17509U);
    msg.setSourceEntity(8U);
    msg.setDestination(39239U);
    msg.setDestinationEntity(205U);
    msg.name.assign("MOEYTLAZOUWIKNLXQFJXOMBGYBNHZDANUBZJXAHICMPWBXPZTDSVQFFZGBNSSAGYAGOTNFDGOVZMPAJSPBCEDQVIRYPJIRFOY");

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
    msg.setTimeStamp(0.5298101534345986);
    msg.setSource(22865U);
    msg.setSourceEntity(50U);
    msg.setDestination(50639U);
    msg.setDestinationEntity(184U);
    msg.name.assign("YOBYOQATKIVHCLTEKTNZEGTRSWQMDXKZCIFJGIDGOUSEQBUYTALSXPHNJIZSNMPVXRJLDEVILWFOJTEHVZAQLQFUHZHBRQOFRRZVSHNOHBCFA");

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
    msg.setTimeStamp(0.84401512309657);
    msg.setSource(31644U);
    msg.setSourceEntity(134U);
    msg.setDestination(50191U);
    msg.setDestinationEntity(120U);
    msg.name.assign("FJSBKZRXJNEEAAQZPIDPWTTOLUCNLUWVWDVYUNALDVPHTQHTZJGHCIPWXESZLKGOVICYBDISCXJNRHEFQKPCBRKHSHNVGFZTFBZNAHZXWAKONAHIBUFYQEFZEYGXVUVCNKVKYSWSYKHCGMFUYACLOLOYRVLUJDSGMLPIJTFAWRTXWKSEMBIEZBDORFSITGVPQPABOWQXSDELIRNTIUXMGGMMQPYUTLY");

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
    msg.setTimeStamp(0.5116445170510081);
    msg.setSource(29583U);
    msg.setSourceEntity(60U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RZXZICHHTHCZOYYGREUUROITLTDOWGFRATQFTUFSJCJDJTGSLNFNEDYFSVXMZDBLHJKDBIYQL");

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
    msg.setTimeStamp(0.7313703758339031);
    msg.setSource(29131U);
    msg.setSourceEntity(216U);
    msg.setDestination(43288U);
    msg.setDestinationEntity(20U);
    msg.name.assign("EHYJBARRIBQYRXNJLCFDTUDDSCDWPBEVVPLMTFWQONLJRYALIQUYQYHDLKPPXZVTAOSZNUAJOEPJTDFEZCSQRWMTXAWS");

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
    msg.setTimeStamp(0.2667743631424563);
    msg.setSource(39201U);
    msg.setSourceEntity(157U);
    msg.setDestination(28191U);
    msg.setDestinationEntity(21U);
    msg.name.assign("IDOVWBQFMEIBDJTZOQJSFBREAFMXVRMNIYLFIDMCRVPXFKWWLPCYGEQ");

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

  return test.getReturnValue();
}
