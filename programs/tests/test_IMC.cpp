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
// IMC XML MD5: ddef481743c0e112e82daff6609de92a                            *
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
    msg.setTimeStamp(0.4276136823017048);
    msg.setSource(36294U);
    msg.setSourceEntity(226U);
    msg.setDestination(33101U);
    msg.setDestinationEntity(172U);
    msg.state = 209U;
    msg.flags = 153U;
    msg.description.assign("ULIOHUBMHSMTZDNELOGDOCVNAVXKWMRHTROEQFNCLDJVJZBNOFZEBEMUQSYYUSXTIOBQORYIGFZWRFWNYABASMAWKTGQZHLMPDCDEGAXGMJQDRCKK");

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
    msg.setTimeStamp(0.11081389894305749);
    msg.setSource(29104U);
    msg.setSourceEntity(88U);
    msg.setDestination(8422U);
    msg.setDestinationEntity(254U);
    msg.state = 234U;
    msg.flags = 237U;
    msg.description.assign("GEABXCDQDCJCMYAAMNVYHHDDPVLQJGFKCFTRTXYNUKPAKTDMTIKWTVQREWFELVLDBHZENELIDCVEVTGNLYTNJQHWSXNCXLYSIJOGTXAGZPWKPONAZRIZSOKKKCBBFQMFNPQOHYGUXREUMFIPOZQOQBTUOMYFBFRUWIELXCREAHMWWIURVZSUHLIZJSJCWDRSBPMJTAPBNMWAJYUCWJFOXDAFBGXKRVISVPSZPURYHGUQZQHIGHLVEBNMS");

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
    msg.setTimeStamp(0.9854603521968487);
    msg.setSource(37107U);
    msg.setSourceEntity(17U);
    msg.setDestination(39251U);
    msg.setDestinationEntity(154U);
    msg.state = 54U;
    msg.flags = 20U;
    msg.description.assign("XMCAXUMKHGJKEUVBCREJHYOJYYLHANRIGDIOJLTQKYABQRRDVMTUZQNIFUHWNLKEDHZXPQPXJ");

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
    msg.setTimeStamp(0.08066035275791583);
    msg.setSource(40859U);
    msg.setSourceEntity(124U);
    msg.setDestination(52001U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.24228933224964944);
    msg.setSource(3757U);
    msg.setSourceEntity(99U);
    msg.setDestination(16785U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.9365114477545985);
    msg.setSource(6118U);
    msg.setSourceEntity(241U);
    msg.setDestination(42357U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.838626562317245);
    msg.setSource(14616U);
    msg.setSourceEntity(157U);
    msg.setDestination(39743U);
    msg.setDestinationEntity(45U);
    msg.id = 191U;
    msg.label.assign("FAKETHVQUSXYGCJXZINLYGOTCGPIOSWEPQVWGTRZGOJUXUAHPLNJMYBISLMXOWEDPWZLOFZRIR");
    msg.component.assign("YATBXDQFKRBECZVZXDXPNBREMEUJOUBCGLDPBJVINGVTMRQPHDMPEYSPMPYYHKHTAVVGSPBRWWJVAFIWENQIUXKUVKFMIGIBPTSRKKUKULQWLARQSGYFNHBREIXLNQRCOJSZFXDYTMYNNFWUTUFWPWXAHCMAFNVJZYQCZPQRLGLLDATLZJIVECDLSVJCZWFTZOHZHOSOOUBDWADXKRICSQAGCLMUDFKHN");
    msg.act_time = 11387U;
    msg.deact_time = 29623U;

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
    msg.setTimeStamp(0.565344468658807);
    msg.setSource(6524U);
    msg.setSourceEntity(177U);
    msg.setDestination(60835U);
    msg.setDestinationEntity(101U);
    msg.id = 24U;
    msg.label.assign("LVSEINYPNSSWXQQSMBKTWDZRUOMQQJUCAEXOOGRVRTIXDBXDYVJGTXKRTRLHIUNCGTKJHLZGZMAUGAFTZFFTEBQPQUVPRWOLYUZKUAVKVFZBMIFWKDHXEJKFTCNLEYNPJKMIVMHGYCXSW");
    msg.component.assign("XTJNVHLLWWIZPYOAFNGVBYXBFSTLOQYJCSYYRDVTUPAZKNXWUCVMWPVQFTLKUOUEQRKS");
    msg.act_time = 36918U;
    msg.deact_time = 39911U;

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
    msg.setTimeStamp(0.774728571868803);
    msg.setSource(62766U);
    msg.setSourceEntity(43U);
    msg.setDestination(21409U);
    msg.setDestinationEntity(181U);
    msg.id = 21U;
    msg.label.assign("AUGVBAXUMZSJVDSRGSCFOSUOPJLVOWOPIUGEZVWYWIJTUKHDXLUNOPLCEHECHZOXRRBFZYDNDZGYCYQSRAKBITAQDYGMWYEMMDDT");
    msg.component.assign("INQBRKEPQXHVXCPPMUDIAEAXOBKPSZGNCKNTKIZZLRQEACKBJEMWTEENHLRBVWRZJGXPAFRVRGPWTKZVJEZSMOEAZFIXCMOHYVUCHNPOFTTLOSDWLDWGIWYSKIDUFTSSJWIDSXTKJFFJAOYQCXGZZAYYVUTVDYFYFSRXQKVLJAPKLOJNFWLAHGQDBOJGNLMUHZNEGDPLBBMIWOUTVXMHNNSDQQLUHOCGIYRQCIR");
    msg.act_time = 24198U;
    msg.deact_time = 11200U;

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
    msg.setTimeStamp(0.3644962242474209);
    msg.setSource(22891U);
    msg.setSourceEntity(50U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(252U);
    msg.id = 142U;

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
    msg.setTimeStamp(0.3460375195017634);
    msg.setSource(30236U);
    msg.setSourceEntity(183U);
    msg.setDestination(23266U);
    msg.setDestinationEntity(191U);
    msg.id = 146U;

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
    msg.setTimeStamp(0.05799592046476476);
    msg.setSource(57186U);
    msg.setSourceEntity(94U);
    msg.setDestination(7151U);
    msg.setDestinationEntity(6U);
    msg.id = 135U;

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
    msg.setTimeStamp(0.4531422211696964);
    msg.setSource(18334U);
    msg.setSourceEntity(1U);
    msg.setDestination(2447U);
    msg.setDestinationEntity(153U);
    msg.op = 87U;
    msg.list.assign("KRCFYMVIXIVRWBWIMHPGRAU");

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
    msg.setTimeStamp(0.43740485302060383);
    msg.setSource(41041U);
    msg.setSourceEntity(162U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(16U);
    msg.op = 78U;
    msg.list.assign("YGPAVVHUHJKZWPSGYKEDAEQDWCDINGMCXQBVZGFATQRHHUUTLCFTQJYHUWAGLKYTTEATNR");

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
    msg.setTimeStamp(0.16805511548841623);
    msg.setSource(54125U);
    msg.setSourceEntity(28U);
    msg.setDestination(9881U);
    msg.setDestinationEntity(182U);
    msg.op = 237U;
    msg.list.assign("WUIQYVPYNRBXVGKYNGIGZWLDMSAEVDERUMWZEPWOAWAICMIXSMFNZMIQTFPTGJBXOXUTCDCOSZPDGTEIRKTHKLLRTCWDEBXWZRALZHKYOJMWFKHFPCNQLOE");

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
    msg.setTimeStamp(0.6024374802141601);
    msg.setSource(46972U);
    msg.setSourceEntity(193U);
    msg.setDestination(41054U);
    msg.setDestinationEntity(29U);
    msg.value = 72U;

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
    msg.setTimeStamp(0.22918342349271292);
    msg.setSource(32291U);
    msg.setSourceEntity(76U);
    msg.setDestination(6897U);
    msg.setDestinationEntity(60U);
    msg.value = 189U;

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
    msg.setTimeStamp(0.23356021569373664);
    msg.setSource(41993U);
    msg.setSourceEntity(72U);
    msg.setDestination(34196U);
    msg.setDestinationEntity(140U);
    msg.value = 102U;

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
    msg.setTimeStamp(0.19747726830211199);
    msg.setSource(15164U);
    msg.setSourceEntity(46U);
    msg.setDestination(33803U);
    msg.setDestinationEntity(65U);
    msg.consumer.assign("PUDKEIBRPGMXQKDFRUVYGVLRCUWCYTONTKIGMYVHATXEPCVQFWDZNPMMLGMSDQSOFIVMSURWDZTICZNUANDTCOBRCNZENYUHVAXSNWRVBNRRYPYMJLWATBHBEXVPATLZWPPQLUPQFAHZMQQSFFKOKEIJMKRSIIUYHEF");
    msg.message_id = 30551U;

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
    msg.setTimeStamp(0.5933618245611307);
    msg.setSource(20976U);
    msg.setSourceEntity(66U);
    msg.setDestination(33584U);
    msg.setDestinationEntity(102U);
    msg.consumer.assign("FUTQVTBCRZGQSDVIUCQOEKYIDVELPQIEGXURCRRFATNHDWAQHAFZUNBTAZFMSBKJSYUPTYKACKRFIATEELHKJDNUQMMGQPTSBWZRJWPDLMJZVKYMASEGMXLIOHROZPFLVBNXCABRICJQYJVBSHNXGBMCNWIPRPXUEWUGASXVDLYHGWOKQKWKOIBBM");
    msg.message_id = 64344U;

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
    msg.setTimeStamp(0.5423890970307613);
    msg.setSource(39699U);
    msg.setSourceEntity(7U);
    msg.setDestination(32245U);
    msg.setDestinationEntity(100U);
    msg.consumer.assign("XOHEZWSHUITYPNFVUBMANFCSLDUHWAKRYCZPZSMYKTBSDBSOAZCWCTGPUKTRAHRXQTYFTOWRYQIUJXRTAYNVLNHMPGAYRIUJGGCLXVOQPREEUGXEVOLOAEIQPZMNMZATJVHIPKWNYZIEDODUTOBPGWCLXBQXTWRLPQQSSWGELFDMJXYSKHVZDIHCDEDFQYGGFFBAHMAKRJLLFMZKFQSJDOBBMJVCNXRDJSNUOCWHCEVPKWJNJIKGZMVBKINL");
    msg.message_id = 44058U;

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
    msg.setTimeStamp(0.1641754149444442);
    msg.setSource(51682U);
    msg.setSourceEntity(45U);
    msg.setDestination(48619U);
    msg.setDestinationEntity(112U);

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
    msg.setTimeStamp(0.6917088467454136);
    msg.setSource(18887U);
    msg.setSourceEntity(241U);
    msg.setDestination(33024U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.7400302841329887);
    msg.setSource(43043U);
    msg.setSourceEntity(43U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.4151930007433665);
    msg.setSource(14686U);
    msg.setSourceEntity(147U);
    msg.setDestination(38282U);
    msg.setDestinationEntity(170U);
    msg.op = 223U;

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
    msg.setTimeStamp(0.8963900202661007);
    msg.setSource(5788U);
    msg.setSourceEntity(212U);
    msg.setDestination(80U);
    msg.setDestinationEntity(163U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.4456757671142416);
    msg.setSource(26059U);
    msg.setSourceEntity(131U);
    msg.setDestination(63418U);
    msg.setDestinationEntity(190U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.4545199926212966);
    msg.setSource(2320U);
    msg.setSourceEntity(242U);
    msg.setDestination(54988U);
    msg.setDestinationEntity(13U);
    msg.total_steps = 41U;
    msg.step_number = 75U;
    msg.step.assign("AKGAIJRMVYLRQQQFDHOTPQILAXDTXUGHMVGBQAIBMUDTUZBCJAFMXUCTIFKJGOLRWXIPNPKVNNSZYQESWVCCVXDFWMOETYUNASAFYIXLEWESCHHFUHXSCCJUEKLBHPSURDLBOIHVHVABNZWCOFQPEMSJKRJGELLHWZSKBBVGUQNTESNGLKTTOZGQFIJPWZVBRPDJZTTMJDDQWNZEOIPRUZIMWXRYNROGPMYXMWOYKBYJEOHPSC");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.31356225855622377);
    msg.setSource(58289U);
    msg.setSourceEntity(240U);
    msg.setDestination(33259U);
    msg.setDestinationEntity(234U);
    msg.total_steps = 27U;
    msg.step_number = 202U;
    msg.step.assign("JYJRFTGDLGLDTSZIMMWZJNBTDUSOHPXXBJMNENDSQAUGFGTLZIAFCKZZQUMGFVRPKRCMVOOZSLLKODCYRXHGFIEPVPRJRXVEWRWBMEWVVYWHOKLDYVOCEYIEPHNCMPABVQNZYLOQTDDRHXKQOOJJCAKIKUDRQYGSACGTABBYUTZTAYYIBPCEKEWSAABANLBMLQFWNSEPFZJFQSXIPECIHJKMHISOGN");
    msg.flags = 230U;

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
    msg.setTimeStamp(0.5304463155480446);
    msg.setSource(4352U);
    msg.setSourceEntity(73U);
    msg.setDestination(1465U);
    msg.setDestinationEntity(48U);
    msg.total_steps = 9U;
    msg.step_number = 195U;
    msg.step.assign("JCGPZOUMURJMPFLKVPKXTLGMLAFBUKZJLABLSSGKEMNQBLNJWLINMMBDQBEETVLSWNIERGYDRUQPTEKGWXYVOBBRDDMHODTBZWZYSGOQOCCUJIEFMGN");
    msg.flags = 220U;

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
    msg.setTimeStamp(0.6263583755850965);
    msg.setSource(40636U);
    msg.setSourceEntity(2U);
    msg.setDestination(41299U);
    msg.setDestinationEntity(250U);
    msg.state = 74U;
    msg.error.assign("ZPABYTPSUUWGCEJEXDPHWFZLCTY");

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
    msg.setTimeStamp(0.9685836828583704);
    msg.setSource(57941U);
    msg.setSourceEntity(177U);
    msg.setDestination(35684U);
    msg.setDestinationEntity(249U);
    msg.state = 27U;
    msg.error.assign("LXAZWSUQDYNMOJOMEDTSIIXXJXBOWZNDXSMJOXIQIQRRBZORBFCZGFAEYKSHGNZTJNBBMTJPCIVYOAJPDKDOKTIXFYRGPHNHGCURSUGKSSOXORVQMHEAZZRAJLRGDQJCQTJUIBPSKGZAECKQKMVGIKNFRBHIFPKKFJLUNEPTYQELAHVLVEMV");

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
    msg.setTimeStamp(0.6706648075624493);
    msg.setSource(48909U);
    msg.setSourceEntity(121U);
    msg.setDestination(46358U);
    msg.setDestinationEntity(122U);
    msg.state = 222U;
    msg.error.assign("DIYSENHRNOIQAMRRRPOHPXHARDUMLQVQCKVFNXBDDUGFYONAGPALSCKSFXVNZNAWJDNQDOISY");

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
    msg.setTimeStamp(0.7544210237272452);
    msg.setSource(17113U);
    msg.setSourceEntity(193U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.9213903995298032);
    msg.setSource(23374U);
    msg.setSourceEntity(157U);
    msg.setDestination(33299U);
    msg.setDestinationEntity(253U);

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
    msg.setTimeStamp(0.3747105835922788);
    msg.setSource(29544U);
    msg.setSourceEntity(156U);
    msg.setDestination(9267U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.7384701457327563);
    msg.setSource(25000U);
    msg.setSourceEntity(8U);
    msg.setDestination(48103U);
    msg.setDestinationEntity(197U);
    msg.op = 159U;
    msg.speed_min = 0.6668723117911606;
    msg.speed_max = 0.8411903186002373;
    msg.long_accel = 0.36355034978482736;
    msg.alt_max_msl = 0.7054169545767631;
    msg.dive_fraction_max = 0.9156579671146008;
    msg.climb_fraction_max = 0.9725187001486147;
    msg.bank_max = 0.8809179577353687;
    msg.p_max = 0.016411409892247097;
    msg.pitch_min = 0.14495850654389797;
    msg.pitch_max = 0.26504272913565574;
    msg.q_max = 0.8057505841510023;
    msg.g_min = 0.6120439703648055;
    msg.g_max = 0.21326658798111942;
    msg.g_lat_max = 0.8885336090374065;
    msg.rpm_min = 0.0067013854639217385;
    msg.rpm_max = 0.021795553314385985;
    msg.rpm_rate_max = 0.8475739852227475;

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
    msg.setTimeStamp(0.28860424162998277);
    msg.setSource(6727U);
    msg.setSourceEntity(19U);
    msg.setDestination(12663U);
    msg.setDestinationEntity(124U);
    msg.op = 67U;
    msg.speed_min = 0.6501686042506497;
    msg.speed_max = 0.6945852528111179;
    msg.long_accel = 0.4050181725281259;
    msg.alt_max_msl = 0.5418875506123024;
    msg.dive_fraction_max = 0.5738579305437079;
    msg.climb_fraction_max = 0.9875450771261477;
    msg.bank_max = 0.5290561711658887;
    msg.p_max = 0.4831916217476522;
    msg.pitch_min = 0.497680478053495;
    msg.pitch_max = 0.6646165065209142;
    msg.q_max = 0.836702141628431;
    msg.g_min = 0.5540455008237558;
    msg.g_max = 0.9399524520427208;
    msg.g_lat_max = 0.0036451317415632234;
    msg.rpm_min = 0.08428940166994214;
    msg.rpm_max = 0.5979385633454022;
    msg.rpm_rate_max = 0.24513667943343198;

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
    msg.setTimeStamp(0.10499323230012814);
    msg.setSource(15794U);
    msg.setSourceEntity(105U);
    msg.setDestination(5116U);
    msg.setDestinationEntity(87U);
    msg.op = 205U;
    msg.speed_min = 0.7826098442816236;
    msg.speed_max = 0.708017015236849;
    msg.long_accel = 0.7640712191063703;
    msg.alt_max_msl = 0.06366207367059684;
    msg.dive_fraction_max = 0.22249579776679984;
    msg.climb_fraction_max = 0.2946475127538686;
    msg.bank_max = 0.9159011415546306;
    msg.p_max = 0.39088903538603215;
    msg.pitch_min = 0.9242401076241848;
    msg.pitch_max = 0.9892364936315103;
    msg.q_max = 0.6137740395754987;
    msg.g_min = 0.644363440040403;
    msg.g_max = 0.24314448779433884;
    msg.g_lat_max = 0.6725063087675914;
    msg.rpm_min = 0.49993383902985156;
    msg.rpm_max = 0.1707481515289634;
    msg.rpm_rate_max = 0.14396256283547393;

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
    msg.setTimeStamp(0.25227495183948145);
    msg.setSource(54244U);
    msg.setSourceEntity(37U);
    msg.setDestination(24332U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.8996497724527258);
    msg.setSource(28083U);
    msg.setSourceEntity(156U);
    msg.setDestination(12696U);
    msg.setDestinationEntity(68U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("HHBVYQKCDHNJONYGRDRXYJHQXRGLZDLIMVLDHRIYGLMJHPFPXUUVWEOBTAKYGSFVSSZPGEBWIVXJKMBABZKGKIZKTPAWKNCWVXTNUAUFIYGAFCSOEZGWFGCVIADJXTNM");
    tmp_msg_0.value = 127U;
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
    msg.setTimeStamp(0.8208311885270809);
    msg.setSource(9571U);
    msg.setSourceEntity(175U);
    msg.setDestination(1266U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.6477014438049027);
    msg.setSource(10648U);
    msg.setSourceEntity(145U);
    msg.setDestination(12046U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.8265937977725007;
    msg.lon = 0.7106984226115824;
    msg.height = 0.8156269347001573;
    msg.x = 0.6414991295222958;
    msg.y = 0.5575501051050613;
    msg.z = 0.4371800724892856;
    msg.phi = 0.71769621066856;
    msg.theta = 0.035270739031723175;
    msg.psi = 0.7522265710358734;
    msg.u = 0.33807083700078366;
    msg.v = 0.5151780516686955;
    msg.w = 0.1666339213586845;
    msg.p = 0.23943101985063353;
    msg.q = 0.30076025145004925;
    msg.r = 0.3151663391060896;
    msg.svx = 0.6596839973109941;
    msg.svy = 0.089536399025537;
    msg.svz = 0.2453832963730952;

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
    msg.setTimeStamp(0.29197193728561);
    msg.setSource(8860U);
    msg.setSourceEntity(246U);
    msg.setDestination(57549U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.3272156522936729;
    msg.lon = 0.581336397019935;
    msg.height = 0.3658483198215562;
    msg.x = 0.438923265701312;
    msg.y = 0.4104421097320231;
    msg.z = 0.47887189076982506;
    msg.phi = 0.5962750159037012;
    msg.theta = 0.9309086544912974;
    msg.psi = 0.6270992854473653;
    msg.u = 0.2689003840238112;
    msg.v = 0.8799261289494488;
    msg.w = 0.6929733372970016;
    msg.p = 0.7295012787586079;
    msg.q = 0.02866106099159016;
    msg.r = 0.7129216854388383;
    msg.svx = 0.5401233073154551;
    msg.svy = 0.3228964679957229;
    msg.svz = 0.2625639083760506;

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
    msg.setTimeStamp(0.6390515222367507);
    msg.setSource(50453U);
    msg.setSourceEntity(168U);
    msg.setDestination(46539U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.5715304690549502;
    msg.lon = 0.4600300059165754;
    msg.height = 0.028033376401591314;
    msg.x = 0.25247627331276734;
    msg.y = 0.6166211434726677;
    msg.z = 0.7439684920654618;
    msg.phi = 0.5325228224990942;
    msg.theta = 0.11104718266843416;
    msg.psi = 0.4083940910257773;
    msg.u = 0.6874589304714899;
    msg.v = 0.1502891506556726;
    msg.w = 0.047258080364582344;
    msg.p = 0.7023134001354517;
    msg.q = 0.9830942587514405;
    msg.r = 0.09040536245389164;
    msg.svx = 0.41535118136576077;
    msg.svy = 0.13685232870056696;
    msg.svz = 0.8962923122541259;

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
    msg.setTimeStamp(0.44130434731720225);
    msg.setSource(32170U);
    msg.setSourceEntity(178U);
    msg.setDestination(52845U);
    msg.setDestinationEntity(231U);
    msg.op = 26U;
    msg.entities.assign("RSFUQDEROPCDGIJKIV");

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
    msg.setTimeStamp(0.39194079124468106);
    msg.setSource(51824U);
    msg.setSourceEntity(126U);
    msg.setDestination(17987U);
    msg.setDestinationEntity(204U);
    msg.op = 4U;
    msg.entities.assign("YZPMPPUJCTFGHGMWSMSXWPAGVOPKGMFBHUGTRSHWABWNQLYSANYUTQDTBUTAACOQWEWGSIWEUVKDJUPTYRTIUHDXXSLVRCETOFKNBVJUVIIDXKQECTFQWIJPVEKCYEURYBOFKENJLASCIMQABLJYGVISKNCIDBQMZLMZFLWKCMHYNXRKORDNFAFEYLMDFESHORXJIZSFCOXJNDUA");

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
    msg.setTimeStamp(0.14612051916858915);
    msg.setSource(64008U);
    msg.setSourceEntity(51U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(159U);
    msg.op = 225U;
    msg.entities.assign("VWOEPIWUDIDGGWOOZCPODKWNJGFSAOIMPYASHQPTYXJKKSTNRFNIYCCLRELGNBBNXNEYZQJEYQYLUBWOXTFHXFHAWFCXJHSTXFPDKRBAIJVHXZBWVNCORJZCAMVCPVUDZBTNMDGKLJUGQ");

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
    msg.setTimeStamp(0.33229268969206327);
    msg.setSource(2304U);
    msg.setSourceEntity(76U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(231U);
    msg.type = 11U;
    msg.speed = 52910U;
    const char tmp_msg_0[] = {78, 110, 67, 125, 41, 72, -90, 18, 2, -86, 23, -57, -47, -116, -126, -63, 108, 41, -1, -63, -2, 3, 0, 101, 98, -110, -29, 62, 117, 2, -26, 108, -29, 11};
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
    msg.setTimeStamp(0.4778004908785658);
    msg.setSource(15537U);
    msg.setSourceEntity(133U);
    msg.setDestination(3058U);
    msg.setDestinationEntity(95U);
    msg.type = 8U;
    msg.speed = 50464U;
    const char tmp_msg_0[] = {40, 52, -26, 50, -60, -93, 26, -116, 104, 93, -68, 12, 80, -95, 29, 58, 10, 122, 4, 62, -27, -84, 109, -23, -78, -79, 98, 118, 91, 87, -67, -34, -44, -78, 94, 3, -2, -86, -23, 42, -56, 25, -112, 55, -62, 67, 52, -118, -54, -89, -34, 15, -89, 118, -38, 113, 86, 53, -61, -20, 40, -91, -105, 5, -21, -51, -8, 57, -78, -101, -126, 48, 38, 91, -92, 29, -123, -63, -83, -17, -104, -28, -15, 73, -120, 63, 74, 54, 1, -109, 57, -38, -39, 24, -95, -60, -30, -9, -73, 75, 74, -20, -14, 97, 84, 95, -91, -49, -95, 36, 53, 29, 89, -19, -114, 66, 74, -27, 106, 97, 99, -108, -15, 75, 31, -81, -28, 36, 24, 13, 111, 124, -111, 24, 112, 42, 97, 89, 107, -113, -107, -26, -99, -62, -21, -70, 83, -2, -47, -78, 32, 17, -32, 25, -91, -60, 56, 126, 50, 25, -68, -93, 2, 22, -67, -18, -84, -82, 97, 14, 113, 5, 44, 117, -38, -128, 92, 24, -32, 99, 43, 15, 76, 71, -18, 59, 108, -37, -67, 61, 26, 45, 96, 54, -15, -115, -37, -5, 26, -3, -119, 103, -57, 96, 48, -29, -87, 54, 102, -124, -63, 25, -99, 90, 6, -63, 111, -60, 27, -92, 23, 74, -22, -65, -44, -63, -12, -68, -100, 41, -60, 46, 89, -69, -47, -8, -75, -20, 85, -81, -107, 6, -11, 116, 45, -97, -108, -35, -126, 54};
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
    msg.setTimeStamp(0.4617618162737305);
    msg.setSource(5052U);
    msg.setSourceEntity(188U);
    msg.setDestination(59515U);
    msg.setDestinationEntity(194U);
    msg.type = 80U;
    msg.speed = 47175U;
    const char tmp_msg_0[] = {44, 113, -51, -112, 97, -58, -82, -2, 10, -4, 15, 76, 21, 53, 64, -103, 112, 95, 107, 27, 1, 104, -94, 99, 68, -9, 80, -11, -44, -14, 104, 70, 113, 100, 37, -108, -51, 41, 114, 74, 99, -44, 99, -22, -86, -28, 87, -35, -93, 75, -110, -46, 103, -54, -69, 85, 15, -53, 21, 126, 123, 21, 5, 62, -77, -14, -45, 13, -35, -104, 27, 123, -95, -100, 3, -10, -97, 30, -62, -65, 69, -60, -56, -120, 42, -88, 0, -53, 41, -66, -47, -100, -106, -78, 30, -16, 44, -18, 109, 80, 81, 98, 3, 2, 106, -99, -97, 93, -94, 122, 122, 34, -104, -29, -12, 10, -109, 78, 46, -28, -46, -26, -40, -6, 102, 41, 10, 89, 13, -74, 43, 60, -98, -110, -11, 88, 96, 43, 120, 87, -73, 43, 7, -9, -56, -4, 75, -30, -55, 25, -67, 48, -30, 69, 87, 38, 107, -111, -81, -125, 53, 105, 19, -120, 37, -85, 2, 2, -66, -23, 5, 92, 97, 85, -123, 81, -116, 8, 70, 5, -40, 41, -71, 19, -88, 60, -99, 119, 88, -47, 1, -49, 123, 81, 47, -10, 23, 57, 4, -114, -60, 93, -52, 95, 58, -122};
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
    msg.setTimeStamp(0.4076342762397095);
    msg.setSource(27098U);
    msg.setSourceEntity(217U);
    msg.setDestination(11295U);
    msg.setDestinationEntity(150U);
    msg.op = 192U;
    msg.tas2acc_pgain = 0.6562998652459345;
    msg.bank2p_pgain = 0.40801066423837606;

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
    msg.setTimeStamp(0.8755293789263077);
    msg.setSource(34689U);
    msg.setSourceEntity(91U);
    msg.setDestination(5855U);
    msg.setDestinationEntity(38U);
    msg.op = 143U;
    msg.tas2acc_pgain = 0.5844997587431279;
    msg.bank2p_pgain = 0.0014090613310118183;

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
    msg.setTimeStamp(0.516154624215247);
    msg.setSource(1794U);
    msg.setSourceEntity(46U);
    msg.setDestination(40491U);
    msg.setDestinationEntity(163U);
    msg.op = 90U;
    msg.tas2acc_pgain = 0.8558808895560548;
    msg.bank2p_pgain = 0.171394035647344;

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
    msg.setTimeStamp(0.9575735120421432);
    msg.setSource(1874U);
    msg.setSourceEntity(91U);
    msg.setDestination(60071U);
    msg.setDestinationEntity(124U);
    msg.available = 2377489177U;
    msg.value = 50U;

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
    msg.setTimeStamp(0.17916705948934775);
    msg.setSource(4478U);
    msg.setSourceEntity(228U);
    msg.setDestination(8247U);
    msg.setDestinationEntity(81U);
    msg.available = 1622472089U;
    msg.value = 215U;

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
    msg.setTimeStamp(0.3479582982944659);
    msg.setSource(32674U);
    msg.setSourceEntity(122U);
    msg.setDestination(26121U);
    msg.setDestinationEntity(60U);
    msg.available = 3207145335U;
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
    msg.setTimeStamp(0.09073885799207093);
    msg.setSource(15255U);
    msg.setSourceEntity(159U);
    msg.setDestination(35853U);
    msg.setDestinationEntity(5U);
    msg.op = 8U;
    msg.snapshot.assign("QPEZUOBITXGCNZOBFEADPRNICGOYKKQWJTDMFEXFBPGLTRPDTZDNNLJTAGAWDAKRZDHROCBTQLSYEYPCHJFMJIXQQBRVGYYFUOTHKBVQQFKMCELULGGXL");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QXTKRMKMKGRNUTVLAMISBUJPQPVEOUTXRKFZIWDISMHXMEJPSONILBQTZPNSDHZEFJAMYCSRMFZXKYEKRCCKSOGBDEFVMGCFWRZPNQKVAKOEJWESQEVNGOYLQIIDXKBQWGVXXFAIGTZCYYWWBHCBUYVGATLOENDBANLPUFZDWOLXCOSYTGTBDHDPJNVSRIRMUAAORJNCMUHTVJHHAHXBWJZZIVFIWAPNQCFUEDSDLHYQWHLZRXLJUYJC");
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
    msg.setTimeStamp(0.26596251300014784);
    msg.setSource(52676U);
    msg.setSourceEntity(161U);
    msg.setDestination(47422U);
    msg.setDestinationEntity(54U);
    msg.op = 179U;
    msg.snapshot.assign("OOYKXNKAFILBDHOCWKHCCNJTOFEZNOVDHMWDSKGXWNYJXLIYNDFCRBPIJQENBRXCAWDZEMSTUQJQJFJTFTTAEJLPUGZMEZDNCRIZBPPOTMLZPKYVIVESTSFVTHAVGBDRCGWWAWSSXIHFRBAGIAPFQIMZWQEXUALNUIHUPPVQTHCLYSWYBSJUHOBPMABVAVREGUJXIUCYULKXEYSUTQYDKMXFWLOOGZLRVFQXRKLDZMPRZKMENDG");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 202U;
    tmp_msg_0.op = 254U;
    tmp_msg_0.plan_id.assign("SHAMSMUXIUUMQNARCBNCSFFXSR");
    tmp_msg_0.params.assign("BDDHKARNWKPCJKKLIDDCWUXSMSGHENGXLLKQVGONIENBJSSZUBZCAJCBICHWJJVZYUJXYILRDVFDBPPZMWTQPVREGRHOOFOZPNVMG");
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
    msg.setTimeStamp(0.021040841670870614);
    msg.setSource(14702U);
    msg.setSourceEntity(81U);
    msg.setDestination(60513U);
    msg.setDestinationEntity(143U);
    msg.op = 157U;
    msg.snapshot.assign("TMPVAJPTGPYZUIIBSDUFHWXNUEPAWDDKSRWATVNPPSIVKJPBNLKGFRWVEUUFZQPQUTMOJORAIVCUCGYGTJUTXTQXIGJBERFAMBLIRHPELHHZWQCHGRKMEQSABWVFOOWDYPAYQZJBXIXNNDCBHVSQVCXIBEGYNMMSRKYECZMDLSXGOJHTKDJTHRHUKZOALBXOYMQQFIZXSFFNETKCVMXLDWONLLLRJOYZUCQCKWJOAFNHCSEZGV");
    IMC::UASimulation tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.speed = 2023U;
    const char tmp_tmp_msg_0_0[] = {1, -12, 47, -20, -93, 15, 16, 61, 79, -60, 71, 23, 72, 41, -69, -17, -23, 92, 65, 114, 45, -96, -86, -98, -29, 19, -23, 121, 75, 17, 98, -125, 113, 46, 71, 124, 25, 59, -68, 17, 98, 96, 69, -121, -25, 43, -115, -2, -31, 73, 77, 28, 54, -100, -124, 82, 26, 116, 92, 96, -87, -87, -47, 82, 117, -16, -19, 101, 74, 56, -84, 32, 95, 103, 39, -108, -58, 66, 50, 93, 121, -43, -124, -40, -78, -123, -22, -8, 105, 69, -98, 18, 40, -18, -102, 77, -86, -113, 15, 47, 106, 17, -7, 38, 7, 115, -47, 38, -102, -82, 88, -70, 50, -51, 10, 73, 109, 31, -89, -66, 50, -62, -116, -27, 18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.1401412593225111);
    msg.setSource(24438U);
    msg.setSourceEntity(70U);
    msg.setDestination(905U);
    msg.setDestinationEntity(46U);
    msg.op = 19U;
    msg.name.assign("XSYHTBQZZD");

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
    msg.setTimeStamp(0.34985697766575996);
    msg.setSource(16161U);
    msg.setSourceEntity(5U);
    msg.setDestination(24157U);
    msg.setDestinationEntity(76U);
    msg.op = 202U;
    msg.name.assign("ICKMFEGDGAZNBKBDPXGENVIFVVJSUMNBXJHLAJETRGLUVYMDHDMTDPTKMBAZSPYPIQMFYEUZQSMEVWOOCSETQLHXBCWGOXHNGUYCOENCRZENYLEZXCDOTFUAJXNSBWZFVRHRVTJGD");

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
    msg.setTimeStamp(0.4095611239746554);
    msg.setSource(9054U);
    msg.setSourceEntity(227U);
    msg.setDestination(29667U);
    msg.setDestinationEntity(79U);
    msg.op = 99U;
    msg.name.assign("UZQTGLIHPNVNYJSASK");

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
    msg.setTimeStamp(0.3725960982948291);
    msg.setSource(9106U);
    msg.setSourceEntity(39U);
    msg.setDestination(27892U);
    msg.setDestinationEntity(204U);
    msg.type = 232U;
    msg.htime = 0.6871482208009183;
    msg.context.assign("MGSJLDUBIGIUGBWSRXIPZPTJLGPHHMLECJYGUEYJYFBAH");
    msg.text.assign("YXSKRNGPIZZASSRCGCEZLKHFBMRZAVWKWQJMJDRUJVKWCDNVKYMOWZQKBKQZPPEHCSHLGXWNFGASNIIAFVRFQLWXICPEJXJCHODCOIANJYOESYHVBQTGGFHMELWDIHNYXMFMBXTLEVGKV");

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
    msg.setTimeStamp(0.10812543539899722);
    msg.setSource(58387U);
    msg.setSourceEntity(243U);
    msg.setDestination(26789U);
    msg.setDestinationEntity(61U);
    msg.type = 81U;
    msg.htime = 0.9123109126149069;
    msg.context.assign("EGEZMEKNUILSJCUQNSBVATHDRZJWSDDVYZYLBPXLHDAVTRMXTDGVJPDUIATQOAVFZQPKKOKEOTISLECDCPZUSGRFORVHBCAOPLQIXQZYWRKNAUYQWOGCFKIHWECGDDYOIYJWNXJBKBUGUXTQHZGUMNRCKQGCJIHBFFNBXPLAMATMAEZHPMNYFXZXLFPCYEVBBFOLWNHOSORSVFINRCHWSYKKMVRMJTXXDQ");
    msg.text.assign("EUGTFMCAPJZMGYGUGQFMMDPRVEWBILHQLZBKBTTGEHHXBAFDJGPYHTSXQTJSVASHIOAQIUCCKVERSVKZIFMTFYZUBJGNHORYEFXOBUBEWXJQQTSYICTLOUNHZLMMOJZRVEQKWMWCNF");

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
    msg.setTimeStamp(0.44450190263115497);
    msg.setSource(61873U);
    msg.setSourceEntity(35U);
    msg.setDestination(34234U);
    msg.setDestinationEntity(17U);
    msg.type = 99U;
    msg.htime = 0.7314849253213002;
    msg.context.assign("HHULBEICRCNCYHJRCAJZNHQONOIEWSLOVVKXKLMQKXFKRRYBKFIEGTCRQGJVCVBBCPXVDPVWFESOPURZPTOI");
    msg.text.assign("RIYZXEDMDWQJEJCIRQHNFIGSAZTFOVEPAXWIRICWDOXSPBOHTGSCERQFSBXSHGFCWNACKCMGFYMBOOHUTIQMRVQCCXUHEPLODJZMLSMJLLNKMPNKFVAOI");

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
    msg.setTimeStamp(0.5441520822883885);
    msg.setSource(14555U);
    msg.setSourceEntity(143U);
    msg.setDestination(22419U);
    msg.setDestinationEntity(218U);
    msg.command = 195U;
    msg.htime = 0.15686930055281412;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.7649083631987962;
    tmp_msg_0.context.assign("SCQQNWRKAYCLXTFHRXOAENJWBUQLJVQSWMGIPTNYOBLHOFFBEVTBWHEWNLSHCUZHKLIRUNAGLEGCKGOAUSD");
    tmp_msg_0.text.assign("VNBUXDKVJZQKDMNYZINVTTKZAAOXSAPWAMQMUEMCQIQXJZZIGCUDRIDLGMCXBRLFMBSERQXWTVBIMRETBSOWGTJIDFARXKIHBVRBDNOAOFPWRDILTSFSPRCEBWVQDLOZSJKZYDPJZCSXKQCHCNGKOHPEXUVYTONVTNFLGWEQFGNHLQSMKSLMXSPBYUJWCTTEPPUHZWGUZYFUYEWAHYXDPYIREM");
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
    msg.setTimeStamp(0.08042114279708001);
    msg.setSource(13975U);
    msg.setSourceEntity(212U);
    msg.setDestination(15670U);
    msg.setDestinationEntity(73U);
    msg.command = 126U;
    msg.htime = 0.8240143387013861;

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
    msg.setTimeStamp(0.5361456324290432);
    msg.setSource(53693U);
    msg.setSourceEntity(58U);
    msg.setDestination(33420U);
    msg.setDestinationEntity(148U);
    msg.command = 37U;
    msg.htime = 0.6612470436849534;

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
    msg.setTimeStamp(0.9275655310224227);
    msg.setSource(42023U);
    msg.setSourceEntity(139U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(69U);
    msg.op = 89U;
    msg.file.assign("OUFTITJPVXXXEKJBTNNPSUKUGOXLHUSZVFTRORVIKRMGXWXYOMFXNOHFRXPCSLTFNZRVTGWGIRLBVKPBEQSOBMDHXBOYWSHCJPYLDMFNRIHQKYNIQSYERFJBQVMYRIUQCVECDNOZSZYWCAJEWPKVIAAQEWMPQOZUAGOLSJHMAWNQTGKBJDFNMADPAZ");

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
    msg.setTimeStamp(0.7032465788709994);
    msg.setSource(8255U);
    msg.setSourceEntity(89U);
    msg.setDestination(7955U);
    msg.setDestinationEntity(146U);
    msg.op = 139U;
    msg.file.assign("YUAIHWGQQLKFQVWTXYGOOXLIFNAPADNJKWNVTSZUVFCRQGMJCSPBDBFJGERNDDKBTOOMHGRPCERQTZGDCNHEMEDRULVJNKJQTCOBSXZBAYCFPFDIXKVSNHIHCXLXYCIWJEIFZBMTXHGOVPSEKPVATFTACIULNL");

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
    msg.setTimeStamp(0.2697809044658246);
    msg.setSource(19150U);
    msg.setSourceEntity(190U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(251U);
    msg.op = 195U;
    msg.file.assign("JKICSZNKJQNYYOUSHVRWHROIEFWIDJHZHBEGLLHTZPXTQLTMZMDISYFQARTSVCEYDNNPYFWAKQVXCOUTLXLPKSDNCHGMUYAHSKXIWGTOOCEZOIFLGBWSNVXCJUIMBMAPOQYFEENNVNQVXMAUOMICOBRZQFKKYPIUCDXSAWVLTZYDRNWZYVTGGJVFHFXDZAEUWHMAGWLJULJSEJBEQAPFRMVBPXWUXDAFCPRBEPSDGRBIZPUQTHBMTQ");

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
    msg.setTimeStamp(0.6251852203828144);
    msg.setSource(5794U);
    msg.setSourceEntity(224U);
    msg.setDestination(17284U);
    msg.setDestinationEntity(104U);
    msg.op = 62U;
    msg.clock = 0.6292706007383532;
    msg.tz = 104;

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
    msg.setTimeStamp(0.7972012742927376);
    msg.setSource(34905U);
    msg.setSourceEntity(210U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(200U);
    msg.op = 23U;
    msg.clock = 0.6366407431350389;
    msg.tz = -21;

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
    msg.setTimeStamp(0.05040129967273266);
    msg.setSource(1366U);
    msg.setSourceEntity(253U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(241U);
    msg.op = 59U;
    msg.clock = 0.9924438845949346;
    msg.tz = 0;

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
    msg.setTimeStamp(0.519526836697656);
    msg.setSource(1304U);
    msg.setSourceEntity(100U);
    msg.setDestination(44235U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.38336641871181265);
    msg.setSource(44110U);
    msg.setSourceEntity(194U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.2648799011238714);
    msg.setSource(27498U);
    msg.setSourceEntity(132U);
    msg.setDestination(12519U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.18096601172640503);
    msg.setSource(30379U);
    msg.setSourceEntity(93U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(116U);
    msg.sys_name.assign("AJNOQHVXDNLPSJDAOSVMPGTUWPXFZBNUBMXDLILZVSVFSYBWHDOUPZURCIQEMTVNCHTJZFWEQFHXO");
    msg.sys_type = 139U;
    msg.owner = 16802U;
    msg.lat = 0.7089501014747827;
    msg.lon = 0.11432293661168924;
    msg.height = 0.19375708001438652;
    msg.services.assign("VCQMQVKRPVWMMQKSLJNLBUDRPGJXVCBAQLIECHRYFVEWFHBUYDNOYZ");

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
    msg.setTimeStamp(0.8070395672681228);
    msg.setSource(51059U);
    msg.setSourceEntity(51U);
    msg.setDestination(15106U);
    msg.setDestinationEntity(28U);
    msg.sys_name.assign("FDNDKGURDNGPCMOVXYTVFOEEQJY");
    msg.sys_type = 127U;
    msg.owner = 54210U;
    msg.lat = 0.7107671634445721;
    msg.lon = 0.5839772026477827;
    msg.height = 0.48679067840760837;
    msg.services.assign("NGTZNQJXUZUDOZCTAZRMHLGVXWJGUQPFVAMPTIKDUPVYEURQHBARUAYQ");

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
    msg.setTimeStamp(0.6690541235973266);
    msg.setSource(40805U);
    msg.setSourceEntity(211U);
    msg.setDestination(6602U);
    msg.setDestinationEntity(119U);
    msg.sys_name.assign("XHKGCUZOBVPATNTYFWTGHETVXBUETJIXSJQSDPQGMBAVDORWUFGDLWSFXAKRFPDZMAJRXIOLMBFQCHEPSCBHRCUHCLMRDEIVLJPYEFTJWMCKXMNGUASZYDLHKNOPKEYBNPNDWTJEIXWPZWKVARLDZDQJOYIFRFSYQQSVHKUGENTQRECOHIYGAEXYCKONQQZOBVJLUMDWMNGWOLBJOSVZRLUYZXGTCJRLHQIXVUAZBTAFSVMBPS");
    msg.sys_type = 131U;
    msg.owner = 43518U;
    msg.lat = 0.2947885218556089;
    msg.lon = 0.2848328686854642;
    msg.height = 0.2286416195697596;
    msg.services.assign("SDXRWUOFJMYQETMYMIWKTQNIDBDAVUJAUKGLSRBAQNNWRXVMFZADYOKQSJYTLNSPRACZGGCGCEIWHUYXVZXFKLLUERWQJZBWOSFXPLSTE");

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
    msg.setTimeStamp(0.017629593965862722);
    msg.setSource(49991U);
    msg.setSourceEntity(22U);
    msg.setDestination(37247U);
    msg.setDestinationEntity(60U);
    msg.service.assign("CYZKWHALQXGMFVMCVKXAUYEOXADFNPZSRGGAGHZSVDVBNPNMPNLXYDZHZEDDFQDMFGGXEZECMISGBTDOBWXJKUSSIULNWGAPQJMFHZPMLOV");
    msg.service_type = 31U;

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
    msg.setTimeStamp(0.06493801233697372);
    msg.setSource(35757U);
    msg.setSourceEntity(38U);
    msg.setDestination(14884U);
    msg.setDestinationEntity(71U);
    msg.service.assign("MVYZVOHWIMFABAFODHPYBTYMBALULHSDQTKTVZUBAEHPCKHGIUUJDFRNKMIRQFZQWDKYQOFAGBASNHRGKOL");
    msg.service_type = 163U;

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
    msg.setTimeStamp(0.5253029525182442);
    msg.setSource(47317U);
    msg.setSourceEntity(99U);
    msg.setDestination(43007U);
    msg.setDestinationEntity(29U);
    msg.service.assign("QWFZDRGAYPRADEJBPZYEXHLMAYMFUCRTBBWRTFDPXKMCJC");
    msg.service_type = 245U;

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
    msg.setTimeStamp(0.6829466744675097);
    msg.setSource(47811U);
    msg.setSourceEntity(87U);
    msg.setDestination(38794U);
    msg.setDestinationEntity(228U);
    msg.value = 0.04995642563826108;

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
    msg.setTimeStamp(0.6546646355903998);
    msg.setSource(15863U);
    msg.setSourceEntity(35U);
    msg.setDestination(48485U);
    msg.setDestinationEntity(161U);
    msg.value = 0.1708515662163157;

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
    msg.setTimeStamp(0.2823848290441848);
    msg.setSource(49311U);
    msg.setSourceEntity(227U);
    msg.setDestination(50359U);
    msg.setDestinationEntity(234U);
    msg.value = 0.28927071612145816;

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
    msg.setTimeStamp(0.660702919475436);
    msg.setSource(10485U);
    msg.setSourceEntity(59U);
    msg.setDestination(17374U);
    msg.setDestinationEntity(240U);
    msg.value = 0.15794507244077205;

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
    msg.setTimeStamp(0.07229480085194695);
    msg.setSource(40895U);
    msg.setSourceEntity(195U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2468453276454361;

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
    msg.setTimeStamp(0.5798780997916599);
    msg.setSource(41449U);
    msg.setSourceEntity(218U);
    msg.setDestination(34777U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7287968108353587;

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
    msg.setTimeStamp(0.00550866007518791);
    msg.setSource(39254U);
    msg.setSourceEntity(102U);
    msg.setDestination(591U);
    msg.setDestinationEntity(160U);
    msg.value = 0.14344175371300794;

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
    msg.setTimeStamp(0.8009749627231448);
    msg.setSource(3562U);
    msg.setSourceEntity(94U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(223U);
    msg.value = 0.4842020914588502;

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
    msg.setTimeStamp(0.8683007279382707);
    msg.setSource(7562U);
    msg.setSourceEntity(141U);
    msg.setDestination(53020U);
    msg.setDestinationEntity(149U);
    msg.value = 0.24972524812315577;

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
    msg.setTimeStamp(0.19127198975015813);
    msg.setSource(13682U);
    msg.setSourceEntity(217U);
    msg.setDestination(37105U);
    msg.setDestinationEntity(227U);
    msg.number.assign("TQWLDARCZSLISQQIKFVJUAAARUEANXYGWZBVOQCJQBFGYGTBHBHKPPZHNXAYIXFKNTWWVFCSUIDXKEPSJNQLPBAVPUULRRIGSHREHDOJQMIITGUONFSBWBLTDCZJHHRGDWYXKIRTNVEPULLMTMWCRYCAZEWQDKHTFCZXQCVSDYXGZJ");
    msg.timeout = 22288U;
    msg.contents.assign("SNRXPQMRRZKRBNKXOHTFBPOVAJZFCSJDAMGETMVKZRGNVYOTZUTMZCMWOGXVMBBANODNUSVCZDAKJBVXFSIFCHGZVZOGSGPDKWQJCCOIUYHNXGLJXRAHMLAOFRUWLTILSECHGDWFHWEYUMVKKDZJTYWEIPPBYRVYTSHEIWIBTVUMUTHOAOSQDXXARDGNZTSPQIFQSKLYYXFPBEHJJEEQUPEYGFQEMNDJCILLXRQHULIFWUKAJQBWBYD");

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
    msg.setTimeStamp(0.7922438183519255);
    msg.setSource(21916U);
    msg.setSourceEntity(98U);
    msg.setDestination(29156U);
    msg.setDestinationEntity(114U);
    msg.number.assign("HMMRNYWKLTKSNGXFSHMJBCZPHAEIWABEHCSXJDVSMEVYCOGNGPTKEBPOPUNRXLYCTMYNTAEOUOOSYJFVGXOZHODUFQLXLIUOHDMWWVEJXRDYXBQWLFFJHPFADFRGYBVSKTLYWPCKXUXGIUMSZRKATTITKWNPCUSZZRCQDYDSWXQVKLNPHQQFMNQZBDURWHOABVJGKASBMBWATDJIQVZUCETIRJPKFELCJMIHGUDO");
    msg.timeout = 60957U;
    msg.contents.assign("RQPXNEBPRFHEZKCYUSMBUUPQBWYPITUJZIIDNFKWCYKMCZNGFJRLLJUGEPNGBBLQWXKNQMGKZOWWBCFBDTMVSIFVNKMKGQAJLFROBQXSEVGAOGDILTVOGFLEYJZFKJTEMQCHADLZIUNTJZYQOOX");

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
    msg.setTimeStamp(0.6289093162176184);
    msg.setSource(22590U);
    msg.setSourceEntity(142U);
    msg.setDestination(33768U);
    msg.setDestinationEntity(40U);
    msg.number.assign("DUXCUKNLETAYFDJNZIKTCBRCOTZSGARMZJWCBRHHRJNPFLDLWVIXKLNIAXXIKHKKXOJYFUFGOZTJFVKCKSSMGLCHXURVXVYPOHNEMOKMNWEBWAMRNGEGGYUWTHPIKPUPQLZJOANFCYPNFIPQDQUTEIZBTJCMZTLRPQEIYWYPZHOAOHGHJAENMLAVZJXULVVAEASUQVDRSDWWIPQIYDLGDWWOVGBQZBSHTQSDC");
    msg.timeout = 64346U;
    msg.contents.assign("OEGVVLFZTLSEQIGNPPMBGAVINCKOJQFKBTLRGRLJENDUKBDCNSWQJDRPWTMUWIJPCFTSXXELXCOCNLPELVZCVYQQMWSXIYIJBZKBQHSXTGKHOHHAMPLGSIJKNFAXEODISDTOAMNINAAAQE");

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
    msg.setTimeStamp(0.3892190834371041);
    msg.setSource(57543U);
    msg.setSourceEntity(23U);
    msg.setDestination(51592U);
    msg.setDestinationEntity(51U);
    msg.seq = 1727410216U;
    msg.destination.assign("RJNIMZNSIJBJZNPLFJIKVTLDYHHLXBOBGGVGQXPXTELTSZYBDWOGFVEPYLFUMQGICZVAOCCEWDZAAUCFZKKYANESBTHZAHOOFVHFWAPESB");
    msg.timeout = 42584U;
    const char tmp_msg_0[] = {5, 31, -52, -123, 73, -15, 29, -108, 28, -44, -120, -5, 33, 0, 24, -18, -6, -127, -84, 84, -105, -19, -123, -52, 28, 26, 56, 3};
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
    msg.setTimeStamp(0.24612830733611912);
    msg.setSource(42611U);
    msg.setSourceEntity(165U);
    msg.setDestination(7377U);
    msg.setDestinationEntity(21U);
    msg.seq = 3372318090U;
    msg.destination.assign("QEKFNUEOBVQZXXTDZTWVEFLTYBJGILTWDAYPFXKOZMCONGXHHJDDJEDESPQOUAFYMLBRJQMKYCHNQROMGFNQLBEPGJRL");
    msg.timeout = 34098U;
    const char tmp_msg_0[] = {-97, 55, -42, 102, 22, -31, 67, -24, 95, 22, 28, 102, 48, -42, 2, 86, 110, -107, 30, 66, -54, -118, -26, -109, 60, 107, -61, 45, 26, -111, -92, -6, 23, 118, 85, -30, -101, 57, 15, -72, -117, -52, 64, 43, 119, -69, 121, 65, -61, -69, -22, -13, 63, -62, 56, -21, 125, 71, -18, 21, 22, -35, -57, 9, 89, 106, 0, 30, -92, 40, 107, -84, 45, -38, 33, -21, 60, -39, 122, 109, 88, 93, -78, -6, 20, -123, 71, 70, 20, -10, -32, 3, -117, 40, -7, 30, -49, 112, 126, -125, 117, 102, 100, 84, 60, -21, 56, 42, 107, 61, -16, -48, 101, 95, -54, 30, -98, -50, -64, 58, 95, -60, -56, -12, 27, -42, -117, -97, 10, -70, -13, -23, -127, -106, 35, -21, -128, 47, -117, 98, -40, -55, 96, 52, 38, 6, 122, -54, 125, 57, -10, -75, -14, -107, -46, -71, -6, -53, -18, 83, -51, 87, 59, -31, -120, 36, -38, -103, 0, -118, -75, 103, 89, 51, -104, 21, -44, -87, 108, -30, -3, -78, 123, 4, -34, -86, 50, 117, 70};
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
    msg.setTimeStamp(0.8032129862659311);
    msg.setSource(22072U);
    msg.setSourceEntity(177U);
    msg.setDestination(8186U);
    msg.setDestinationEntity(194U);
    msg.seq = 144420767U;
    msg.destination.assign("LFARRVJMSSVBSVDQOUNCHETVXZKNETCOXBIGXRFIPNFDHAWRFYFFAZKXGVMTOFSGUGTTMYOREJDQMWOVLTYSACQHZCGVMBIJYEJPK");
    msg.timeout = 15770U;
    const char tmp_msg_0[] = {87, -122, -62, -3, 36, 47, -3, 32, -34, 72, 81, 19, 57, 119, -86, -80, -124, -59, -63, 0, 11, -63, -3, 46, 49, -124, 0, 57, -116, -4, -111, 10, 40, -2, 110, -35, -82, 44, -71, 99, 40, -88, 120, -107, -61, -33, -53, -36, 3, 91, -105, 68, -10, -47, -67, 75, -101, -114, 37, 28, 52, 50, 22, -125, 113, 5, -53, -23, 110, -98, 2, -17, 35, 31, 116, -116, -43, 106, 84, 60, 31, 31};
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
    msg.setTimeStamp(0.3962267879261079);
    msg.setSource(13943U);
    msg.setSourceEntity(38U);
    msg.setDestination(6548U);
    msg.setDestinationEntity(74U);
    msg.source.assign("IOIGFHWXBUDRQBPFXAXVTTRMDPFIWQCFGONSETUQQEBLYOWVHLJJCCHCKFDJLXSLNJOZFI");
    const char tmp_msg_0[] = {47, -57, 77, -97, -99, 117, -119, 65, -65, -96, 107, 69, 108, -89, -86, -69, 76, -23, 119, 65, 109, -100, 42, -125, 51, 48, -48, 67, 98, -64, -50, -116, 89, 87, -98, -74, -121, -106, 16, 113, 16, 49, -67, 115, -47, 125, -95, -120, 88, 76, -4, 56, 92, -12, 75, 36, 71, 24, -53, 7, 11, -115, -113, 65, 89, 56, 89, 116, 1, 99, -44, -48, -74, 8, 79, 54, 50, -46, -1, 41, 99, 40, -123, -103, 77, 19, 28, -98, 21, -8, -122, 15, -92, -61, -2, -36, 19, -36, 8, 8, 123, 87, 124, -20, 61, -52, 63, -126, -7, 126, -31, -47, 50, 39, 20, -101, -84, -48, 60, 31, 112, -71, 56, -36, 110, 113, 95, 55, -80, -125, -104, -114, 122, 65, 10, 120, -119, 116, -3, -65, -93, 6, -118, 37, 53, 52, 96, -122, -9, -91, -110, 86, 49, 100};
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
    msg.setTimeStamp(0.4112647885599642);
    msg.setSource(50261U);
    msg.setSourceEntity(248U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(144U);
    msg.source.assign("VMTZNRXOCQFGVKPQ");
    const char tmp_msg_0[] = {-30, -91, -11, 76, 93, -7, -58, -34, -12, 90, 100, 67, -113, -40, -11, 52, 42, -21, -127, 76, 79, -60, -68, -92, 28, -26, 38, 91, 74, -116, -29, 15, 108, 42, 52, -31, 48, 98, 63, 104, 31, -7, -51, 112, -112, -54, 14, 59, -78, -123, -66, -98, -44, 23, 95, 86, -113, 100, -1, -67, 40, -100, -22, -34, -116, 26, -120, -107, -24, 67, -3, -14, -20, -127, -128, -98, -4, -6, -49, 18, -118, 102, -36, -82, -21, 111, -3, 79, -22, 119, 57, -120, 26, -102, -115, 110, -4, -105, 92, 93, -78, 34, -52, 97, 118, 59, -64, 31, 93, -76, 126, -107, 94, -112, -65, -63, -28, 73, -70, 112, -41, 113, 77, 79, 14, -128, -115, 80, 83, 107, 8, 61, 81, 112, -105, -59, 80, 67, -83, -125, -45, -113, -93, -45, 75, 5, 40, -107, -63, 94, 17, 27, 56, -101, 9, -50, -60, 22, -33, 124, -118, 69, 60, -69, 89, -87, 35, -76, 28, -38, 49, 53, -106, 122, -5, -118, -95, 115, 124, -69, -13, -50, 89, -4, -118, -108};
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
    msg.setTimeStamp(0.33810461952631565);
    msg.setSource(58838U);
    msg.setSourceEntity(14U);
    msg.setDestination(37652U);
    msg.setDestinationEntity(62U);
    msg.source.assign("UCWKRMPCELVMYWPJDLMZZKTGPZZIFXHYRAWCPNBVLEIJQESGKVMFTAKZLJEEHOCVRCNWTFXIBOZHDHJGUJUJYWMYDGUDALNFDRTCJWFIUXBYGTGOAT");
    const char tmp_msg_0[] = {-55, -112, 5, -27, 108, -21, 67, 20, -103, 31, 75, 125, 19, 2, 6, 58, -74, 84, 123, 102, -12, -119, 47, 84, -68, 76, 77, -103, -57, 23, 77, -109, 76, -111, -70, 46, 125, -105, 98, -51, -121, -71, -81, -111, 15, -50, 37, 80, -73, -79, 106, 114, 51, 99, -68, 28, -104, 17, -37, -60, -43, -35, 115, 52, -32, 51, -26, 14, 105, -17, 56, 27, 48, 0, 101, 94, 11, 98, 7, 110, -2, -71, -99, -106, 80, 119, 109, -49, -89, 25, -33, 119, 122, -104, -114, 84, 73, -102, 94, -67, -49, -22, 56, 28, -25, -82, 88, -78, -84, 64, 126, -22, -45, -39, 25, 21, -96, -65, -56, 44, 113, 105, -43, 73, -75, -70, 45, 65, 34, 113, -55, 43, 75, 65, -82, -59, -48, -116, 38, 44, 63, 60, 24, -121, 77, 10, 32, 89, 82, 36, -81, 77, -50, -20, 77, 124, -124, -29, 5, -73, 28, -71, -14, 35, -15, -122, 53, -100, 55, -30, 107, 18, -56, -26, 17, -113, -18, 37, 66, -114};
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
    msg.setTimeStamp(0.19450321519088842);
    msg.setSource(32085U);
    msg.setSourceEntity(254U);
    msg.setDestination(30937U);
    msg.setDestinationEntity(56U);
    msg.seq = 2832653542U;
    msg.state = 86U;
    msg.error.assign("MJZUWUHLHVWEVYWUXQPGGLZPKORXHDVRDRCIDSAOITJXVNUJDUHXFEUILJI");

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
    msg.setTimeStamp(0.9462581855643157);
    msg.setSource(752U);
    msg.setSourceEntity(25U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(49U);
    msg.seq = 266002507U;
    msg.state = 95U;
    msg.error.assign("XPQBICSEMQNVUAMTRNYIGZQCBRMVZFOKRWAJHJKFCWQAVWDTWQUTAZRQBAASGDWNELBCLNNHXKPBRDYBFMLDXEHXKYMUIRDTNPSDKDLNVTAIUXQEGQSUSTJVBKHMHHUZQQOMYFRLIYOYBMOXJTJZEYGMHJCIITRULEPXEGGEJKWFUWAPXOKFIVUJBKGYLGLOCVZDUOSLCPNSSXTDVGARGHSFWF");

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
    msg.setTimeStamp(0.2361877133675937);
    msg.setSource(26757U);
    msg.setSourceEntity(153U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(15U);
    msg.seq = 3432836222U;
    msg.state = 240U;
    msg.error.assign("TONDJKWHYMDBJIUFUAPARWEWIUIXAJHGRSMYKZCZAJNMQJDNFMNJWDD");

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
    msg.setTimeStamp(0.4186423232008176);
    msg.setSource(47844U);
    msg.setSourceEntity(214U);
    msg.setDestination(10438U);
    msg.setDestinationEntity(55U);
    msg.origin.assign("XXBIQKGAVQKHUDAOTAWXSTFVJFBTORFPTGIDPMBLTCMWYAPOWESRZVUPTHHUZXJOWSZUNXLISMRLUQAPAKPAGHTCHQSBEDZLHBGKGQKIJRMLKKELPRZFJCYQDJNTJNZSDCDKHMIIYMKYYTUCJUCXQMBELGFACCYMRRZVOGGEVTGXWPJOUDIMQJWEKWSZWARIYVHZODLYXUPRPNWHBLBDZSWM");
    msg.text.assign("WWTWUGQMTHLFDMBNXIPUNJUWPFFVYMMVEHCYGXUJSSYQRQQJSGBMZEDBKMYJHDKNVAXPZJJFIKXRCIRWEZUGIOK");

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
    msg.setTimeStamp(0.8809607961312775);
    msg.setSource(65472U);
    msg.setSourceEntity(39U);
    msg.setDestination(53481U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("YQUOHXXOGLYELJQTCSEXMIOEKQJFYPZLOAEABLEHJDBQWZGTIIIZFYWUDJWRJPRYMKYOFOIDFUTMTZUSLHBAXKRLRYMRCLGCPNACFCVJRNXTHUXZQSFYJAHNCHSSPFBEWLRBVGGGSZIEUSRDNIMOVSPPNXWIZEMVNTEOTYMPLHPVJUQYUKQMWZKMWTEFHRBUBONNCVZAHMVGKVJC");
    msg.text.assign("VNAAUXQZMJNTFCPLHENIRIVQTVPBNDXSVTTNYGVTBKQYICBIJFMZOAYQOELESHGTIUODWJUXEEKJVFMYMCYCRJUVHIUBRGZUGQHDVDOFBXZQXVEBOXLLHMWSLFGKZSPLSQNDNIYMBHMZMLOSUJFAZEQRFOWBFWAGKPALMUY");

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
    msg.setTimeStamp(0.6557917778977491);
    msg.setSource(18680U);
    msg.setSourceEntity(211U);
    msg.setDestination(31599U);
    msg.setDestinationEntity(196U);
    msg.origin.assign("VCJYVFSDKFIIRNMSRACXNWFBREEUPUWOKVRZSQXUGXHYPXDOZUTMWVOVLKEUIMALKMTFQGYQCTXHBPGHNYGXHOWZFLTADWIOGSHEPRVDNHNFYARAWQQIPYN");
    msg.text.assign("ERQPEGLCXDXLKWFGVZYAWBTUUGXNMJVUIV");

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
    msg.setTimeStamp(0.7563380105906924);
    msg.setSource(44984U);
    msg.setSourceEntity(37U);
    msg.setDestination(4740U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("SFFMCYULZQEJBOIOFZLYWRQWWCIHXUYGVNPRSPBICNIYAFUMQASUXWJWXKXEYKBSP");
    msg.htime = 0.018391046144685896;
    msg.lat = 0.7814537188277417;
    msg.lon = 0.7343724364365529;
    const char tmp_msg_0[] = {-93, 53, -59, 10, 86, 32, -106, 85, 94, -61, 9, 38, -7, -92, -121, -8, -120, -44, -19, -63, 45, -73, -108, -88, -62, 40, 113, -43, -10, -66, 120, 109, 82, -74, 102, 45, -6, 36, 50, -105, 64, -79, -97, -6, -121, 91, 92, 92, -35, 9, -58, 56, 76, -65, -123, -53, -42, 118, -92, -45, 45, -86, 85, -87, -35, -62, 41, 15, 61, -48, 7, 84, 121, 79, -17, -106, -53, -61, -41, -8, 80, 87, 46, -102, -69, 104, -92, 75, -59, 94, 43, -118, -74, -126, 53, -96, -97, 72, 111, -77, -54, 55, -109, -97, -13, 90, -30, 86, -16, -20, 97, -57, -70, 49, 70, 80, -46, -107, 52, -91, -117, -111, -11, -109, -90, 98, -103, -111, 59, -62, 104, 90, 60, -124, -76, -60, -9, 62, 48, 69, 44, -75, 31, -65, -77, 67, 16, 123, -77, -118, -3, 11, 62, -25, 21, 68, -39, 8, 25, 45, 31, 102, 18, -70, 30, -26, 51, -18, -12, 68, 62, 4, 115, 87, 106, 52};
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
    msg.setTimeStamp(0.2306579091241332);
    msg.setSource(39676U);
    msg.setSourceEntity(84U);
    msg.setDestination(61611U);
    msg.setDestinationEntity(248U);
    msg.origin.assign("RZNZSQUYYSGERKPFTX");
    msg.htime = 0.06759153418388253;
    msg.lat = 0.787020372253593;
    msg.lon = 0.12348573397903573;
    const char tmp_msg_0[] = {-84, 42, 48, -30, 119, 119, 110, 76, -127, 96, 2, -108, -75, 70, -80, -81, -20, -88, 122, 4, 1, 18, -35, -84, 36, -122, -93, 32, 50, -95, -42, 68, -125, 117, -86, 71, 64, -102, -62, 19, -32, 8, 79, 119, -88, 84, -48, -93, -128, -75, -112, -27, 58, 102, -14, 98, 78, 27, -122, 48, -109, -75, 50, -61, -13, -115, -51, -7, -60, -96, 37, 4, 1, -112, 109, -58, -38, -100, -110, 53, -95, -18, 122, -97, -22, -78, 29, -99, -59, -39, 60, 117, 85, 39, -127, -92, -3, -6, -21, -57, -66, 17, -116, -90, -122, -56, -32, -26, -107, 53, 31, -124, 19, 61, -126, 4, -91, -55, -57, 13, 110, -127, -53, 92, -117, 65, 15, -85, 3, 27, -89, -44, -68, 123, 55, 48, -21, 97, 87, 44, -83, 8, 126, -37, -32, 104, 66, 126, -86, -58, -12, -124, 12, -103, -54, -98, 101, 39, -68, 56, 9, 59, 68, -45, 83, -20, 126, 124, -123, 53, -104, -94, 37, -55, 97, 110, 32, -96, 36, 117, 32, 115, 62, -120, -94, 3, -50, -100, -89, -99, -99, -43, -105, 65, 18, 104, 83, 48, -91, -81, -29};
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
    msg.setTimeStamp(0.9455274363342595);
    msg.setSource(50735U);
    msg.setSourceEntity(172U);
    msg.setDestination(51071U);
    msg.setDestinationEntity(143U);
    msg.origin.assign("JOUICPWBIXLWWZPPLSCNKDZNSRFAKZXZAMBYPZFANNEEOGJYTOJDKXPDTVYEJQTQM");
    msg.htime = 0.3291804890536969;
    msg.lat = 0.33721037448697244;
    msg.lon = 0.5044451891414586;
    const char tmp_msg_0[] = {36, -17, -84, -65, -14, 40, 21, -54, -63, -126, -97, 78, 18, -49, -112, -126, -11, 102, 103, 21, 40, -13, -107, 44, 62, 114, -26, 79, -115, 48, -11, -31, -91, 17, 12, 81, -75, -18, -45, 61, 40, -66, 25, 81, 109, 45, 14, -4, 42, 30, -22, -122, -11, -85, -67, 96, -92, -42, 37, -98, 86, 36, -22, -66, 24, 94, 105, -16, 51, -87, 42, -112, 107, 10, 54, 24, 23, -50, -17, 70, -37, 59, 108, -46, 110, 92, 56, 4, -102, -99, 76, 19, -35, -105, 87, 117, -31, -92, 61, 58, -81, 114, 23, -19, 123, -119, -20, -19, -77, -88, 122, -34, -96, 16, -44, -8, 118, -45, -69, 10, -62, 37, 61, -7, -108, -61, -38, -21, 101, 53, -38, 44, -92, -26, 75, -128, 126, -59, 74, 33, 94, 22, 53, -57, 120, -110, 113, -27, 124, -109, 0, 72, -5, -14, -65, 107, 65, -49, -15, 58, 126, 70, 37, 24, -66, 66, -54, -73, 9, -1, 121, 51, -128, -14, -122, 75, 81, -28, -98, -5, -92, 91, -29, 59, -116, -105, -9, -27, -49, 22, -82, 94, 121, 93, 77, 51, -83, -6, -79, -103, -59, 15, 97, -55, -35, -102, -52, -94, -91, 81, -1, 68, 68, -19, 3, -1, -19, 68, -82, -79, 24, -37, 75, 120, 124, 18, -119, -26, -10, 83, -98, 28, 87, -60, -41, -38, 123, -42, 2, -55, 48, 22, -69, -85, 23, -26, 111, 80, -111};
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
    msg.setTimeStamp(0.2750051094731891);
    msg.setSource(9691U);
    msg.setSourceEntity(222U);
    msg.setDestination(7957U);
    msg.setDestinationEntity(225U);
    msg.req_id = 11579U;
    msg.ttl = 16103U;
    msg.destination.assign("HKLERTCXWGPSIIXVODHBIVGRNEQTEIADXHKOQGYJQPLYYYAYPZNMPIPZKUPPYBRDKBFVVVHLIGMMJURZKWAJWMCDSPRYRCTAESYFZDORAUZCYNPERIUSNGUJUBQEUISDPZTOWLXZGKREWWQOMOQWOALSEQAMTDJFUJHFNBQJHLVOCGAKFCGVLBJSBCMNSOJITFHMXQVADLF");
    const char tmp_msg_0[] = {49, 6, 9, 36, -81, 65, -9, -84, 102, -79, 115, -124, 27, -44, -77, 51, 118, -109, 73, 104, 75, 24, -122, -69, 48, -92, -28, -117, -126, 74, -28, -107, 0, 25, -4, 65, 29, 100, -23, 93, 65, 53, -116, 80, -85, 85, 48, -127, 3, -47, -116, 32, 15, -24, -120, 103, 49, 103, 52, -106, 83, -109, 98, 121, 26, -13, 19, -13, -122, -62, 16, -44, 82, -63, 12, -82, -64, 109, -30, 112, -128, -10, -73, -104, 13, -33, 82, 14, 58, 77, -11, 12, 51, 124, 110, 76, -59, -12, -4, -11, -107, 36, -22, -36, -50, -66, -62, -118, -43, -37, 59, -114, -126, 43, 79, -103, -31, -48, 99, 126, 55, 1, -33, -63, -68, -23, -42, -36, 23, 15, 116, 51, 112, -40, 87, 123, 100, -81, -63, -108, 77, -78, -100, 103, 122, -60, 46, 113, -56, -95, -93, 54, -4, 5, -23, -92, 57, -23, -86, -57, 70, 75, -24, -11, 18, 100, -106, 28, 85, -20, 118, 116, 117, -6, -10, -81, 113, -103, -20, 88, -42, -118, 53, 1, 2, -15, 78, 3, -20, -105, -9, 19, -83, -30};
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
    msg.setTimeStamp(0.8067225263867682);
    msg.setSource(48556U);
    msg.setSourceEntity(100U);
    msg.setDestination(20430U);
    msg.setDestinationEntity(179U);
    msg.req_id = 14253U;
    msg.ttl = 56870U;
    msg.destination.assign("GDSHLMSPUAVTIBBEIQVQDCAPWUZRPDSZMCEBSPRZXIUJWGODESJQLNADVHUJFXBOCVTFBOOVRLZKVOOVUFOAPXKSSXXLXXYWMTSBHNZDNXUHMLBPTVGAIPHTDWAKFYVYWDATREMRPWQPXGKQTGDFLFNUHQY");
    const char tmp_msg_0[] = {28, 35, -52, 97, 33, 81, 58, 36, 29, -125, 18};
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
    msg.setTimeStamp(0.39683870468090365);
    msg.setSource(7682U);
    msg.setSourceEntity(154U);
    msg.setDestination(9996U);
    msg.setDestinationEntity(22U);
    msg.req_id = 31075U;
    msg.ttl = 33039U;
    msg.destination.assign("SZUPQGRFRV");
    const char tmp_msg_0[] = {71, 123, 10, 12, 21, 30, 45, -38, -77, -73, -40, 94, -39, 23, -123, -54, -78, 14, 86, 76, 53, 14, -9, -124, -43, 35, 88, 20, -26, 93, -23, 49, 59, 49, -29, 89, -95, -62, 16, -13, 78, -58, -37, 80, -60, 92, 12, 61, 60, -109, -107, 93, -80, -83, 5, 80, 34, -95, 6, 66, 110, 76, 55, 43, -32, -48, -54, -118, -55, -101, -44, -99, -104, -13, 43, -102};
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
    msg.setTimeStamp(0.17092306350230102);
    msg.setSource(27511U);
    msg.setSourceEntity(5U);
    msg.setDestination(38218U);
    msg.setDestinationEntity(110U);
    msg.req_id = 35162U;
    msg.status = 60U;
    msg.text.assign("CYUXUHEYPTPSKTMEDGRSOTTSCWYLOVDDVQYCKHNZFQFSKTHEOWQACAZGQFIIASUXRFNQCLGLJWFIPVDBYNIPSMDNCTEJBJHEGOLALQGMFBPQKRJIQRBOHWXFXKNGITMJBGXMFZONYRVHUX");

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
    msg.setTimeStamp(0.2338974393751707);
    msg.setSource(45181U);
    msg.setSourceEntity(183U);
    msg.setDestination(13816U);
    msg.setDestinationEntity(215U);
    msg.req_id = 39094U;
    msg.status = 238U;
    msg.text.assign("SBIICBBLAPVUOLZBUCTQNRORWPCPAOCNWFQHKGMTTNAMLPVMDDLEQE");

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
    msg.setTimeStamp(0.40442369580384807);
    msg.setSource(29075U);
    msg.setSourceEntity(241U);
    msg.setDestination(54259U);
    msg.setDestinationEntity(186U);
    msg.req_id = 863U;
    msg.status = 80U;
    msg.text.assign("BOEVWDNRRHYXDUCCXCABODKECEINKYTOISXQDHULLBSYZXWFVFWQYFAPQGLTEFFJBZMLYONRDHPVPHANJLCUVAEPHWDPNWZHBRWIVIYLYKDWFTEI");

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
    msg.setTimeStamp(0.0444591812553119);
    msg.setSource(5000U);
    msg.setSourceEntity(162U);
    msg.setDestination(37802U);
    msg.setDestinationEntity(156U);
    msg.group_name.assign("DSTFVGWPPMUOWSXDABKISJRISMRRFVTCZNOWVWJFXIRZJCINCDESDYEHAJNPAGIHEUNZHMISKMLLTIAZPXLSBUHGSTRUSMKZBBFPEPXQVDZQVWLYOALKXNCBIDGIDTOLNTGVZXYOAVZYEOFMKUOFAYRMZ");
    msg.links = 1759274446U;

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
    msg.setTimeStamp(0.8397105261614596);
    msg.setSource(6048U);
    msg.setSourceEntity(168U);
    msg.setDestination(40295U);
    msg.setDestinationEntity(120U);
    msg.group_name.assign("WRGAHLPZQUBOBZVTQIOWGWYTKWBQFVWSPWRDIYTKXAAOBMINKVYBANJDTQIHCNXUXCLFCWCJJGUOSMYBLSLKXDGQFQRKVLKFCOFJOZUMCUEHDETTNPQMNRJWYMGQGXAEZLUGOSBSRUUYISAVZASGVMEDCNOEEDKZIFGLPAY");
    msg.links = 3255206208U;

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
    msg.setTimeStamp(0.06964121111863797);
    msg.setSource(46895U);
    msg.setSourceEntity(86U);
    msg.setDestination(35437U);
    msg.setDestinationEntity(195U);
    msg.group_name.assign("VRUUSHKSUDITRPHPRDCLHJOIWIPBZDGFYKNJVOIFNGHJUYDKRWMHXWDCKHLEMBNOQOQWHMCBOMEYUXGLWMXWUNXVGFMUFMIWQVJYCPHOTWLKEAANVFRSFBBLAJRZXAAJSZGRVZLCZXPGINQQYPHCJAKNOEERVZKCMLUATNBSJVTGTKPQSLYXNWSREYVT");
    msg.links = 2234963726U;

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
    msg.setTimeStamp(0.0034691817585783546);
    msg.setSource(2670U);
    msg.setSourceEntity(11U);
    msg.setDestination(8492U);
    msg.setDestinationEntity(2U);
    msg.groupname.assign("PORAMYYDFRMBXDSUJIPHLVJPWVZLTNEKZSLNHYWCQVEBZAZHUNTLDMVIFGKSHRSXQNSSYFAYVGZOCUQHTFPPGBEGJWDISNIXZTGOAYMWBIOAJAXNHJRDWYVEUWXOJATDUICKRSCHJQLKDZFKJVLQEVOKJEYNBIUGRGAQXPYXPOCDQCTLQDLIXXWWMREKDCEICBEGCNPZUOWXNUNVGFHMSBTJQRPMRHTK");
    msg.action = 150U;
    msg.grouplist.assign("FITOVPKOUXSWTDSRUBFGDNTKPANZVCEYKAJLCFQWALCCIFHQXMLEPLIGIOAMRPVWCQEZSBNVTZEBTYUYCPOJNDYXPALQGZQWZSJUYFRBHPG");

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
    msg.setTimeStamp(0.6523377494171735);
    msg.setSource(41364U);
    msg.setSourceEntity(228U);
    msg.setDestination(321U);
    msg.setDestinationEntity(82U);
    msg.groupname.assign("UFNKDVYBSPLMBVUGAHHHFBNNIIPUWCXXOMYRGAWHAMSTFKBSFOFWPFLCDZLLOVNKRJXHDJJFGVCVIGTGXAEFVCKERQGTUIPVXWKISZGBZXTYYXRQPBNXOGZLWQBYQJHWIURWECKHSOODWFSPTOIAYJZOZLXUEHMICEDJIDCZQPNUEYWPSVDFRRNTEVLCQLQUNUBGORJBKEYYTQCMZDTSMVRANEMPCBZUAAQMGJEKI");
    msg.action = 138U;
    msg.grouplist.assign("SYSQMDXDQTAENDJLYCRBUIEGLTNGEQRVLXYPFKAUAQZZBSXXDVSHCGMTPMRHYWOAWEKEKFUDOPHMUQVKCNBMZDDVCHABKPJWLJWBTBOQJSQDSNVHMULLEGPGZFEWAEXLVPQNUISFWYDTNPMLVEXWMWMYJWNFRZAXRPSOLHJTRSOPG");

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
    msg.setTimeStamp(0.5512131331468837);
    msg.setSource(9458U);
    msg.setSourceEntity(14U);
    msg.setDestination(5246U);
    msg.setDestinationEntity(232U);
    msg.groupname.assign("AGQVGVJXWCRIDJEBSGTFCPFAHUQQRCYWNFDLTPIAPEYNGKXKKQVZX");
    msg.action = 60U;
    msg.grouplist.assign("VBMMEUTHYCPRXSDFUJITKTLFSKOEQOOZRGIJXEDAIWWFWBTVSUBANIWFKXVPPLNLODJGQBCDHFLRYQSUYMGGUUXUVZHKFIQXZCTSBTXBKWVJFADXOMRUSEHQPBXRJKBJOCNCVPZQWTRCAQAYAWWGRYYLGKZCEMXENZIHIGLKYMOBNFYMMCMDJILCNFKBFRUDPDZLQLTENTZC");

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
    msg.setTimeStamp(0.8424146560355865);
    msg.setSource(36163U);
    msg.setSourceEntity(58U);
    msg.setDestination(34282U);
    msg.setDestinationEntity(20U);
    msg.id = 178U;
    msg.range = 0.7510262812640078;

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
    msg.setTimeStamp(0.5160267614562886);
    msg.setSource(48175U);
    msg.setSourceEntity(87U);
    msg.setDestination(7479U);
    msg.setDestinationEntity(8U);
    msg.id = 54U;
    msg.range = 0.7137284312710968;

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
    msg.setTimeStamp(0.5958520151193154);
    msg.setSource(40510U);
    msg.setSourceEntity(210U);
    msg.setDestination(64696U);
    msg.setDestinationEntity(126U);
    msg.id = 44U;
    msg.range = 0.41071361532257955;

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
    msg.setTimeStamp(0.665266029495681);
    msg.setSource(13457U);
    msg.setSourceEntity(91U);
    msg.setDestination(9075U);
    msg.setDestinationEntity(130U);
    msg.beacon.assign("VISOBJJTPBERQLLEIGTFLYBRTCCZXRJPVSNUPNGNOPSDJJVUFKCQQBSEPVXMTOQSOXOMHUUZMFSSUXYWJIVKEINFIHXYWGZLYUYJUESEBCTTGXNEXKVCFGPO");
    msg.lat = 0.5575208080576823;
    msg.lon = 0.46993144298667433;
    msg.depth = 0.9603722817765074;
    msg.query_channel = 86U;
    msg.reply_channel = 82U;
    msg.transponder_delay = 23U;

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
    msg.setTimeStamp(0.2317223932268042);
    msg.setSource(15177U);
    msg.setSourceEntity(46U);
    msg.setDestination(28138U);
    msg.setDestinationEntity(250U);
    msg.beacon.assign("EPWKPYCICMDSKNLXBAACEVBDANHJCRVDWULRPWMIUYBJONRWUCVYKQJKMRNZJOBKGFWRILXTQYYSAOKTELOZOGGQGFGMRVRIUNGMWIAFBLXVDHMVUPRHPTOAPNB");
    msg.lat = 0.682132122722059;
    msg.lon = 0.6003087568300081;
    msg.depth = 0.3032898277770759;
    msg.query_channel = 57U;
    msg.reply_channel = 103U;
    msg.transponder_delay = 204U;

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
    msg.setTimeStamp(0.2624004541560109);
    msg.setSource(21054U);
    msg.setSourceEntity(183U);
    msg.setDestination(25791U);
    msg.setDestinationEntity(189U);
    msg.beacon.assign("REGFVRPYJRKIQDYJNIZKRNEUJGMMYAMATRAXOGMVGTPAIMUHEEZTFAUOAJESZVHXPSFQFWGJOLZE");
    msg.lat = 0.7133706317602669;
    msg.lon = 0.6490367048083419;
    msg.depth = 0.5395335344555933;
    msg.query_channel = 227U;
    msg.reply_channel = 221U;
    msg.transponder_delay = 82U;

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
    msg.setTimeStamp(0.905806211372359);
    msg.setSource(14054U);
    msg.setSourceEntity(160U);
    msg.setDestination(44347U);
    msg.setDestinationEntity(77U);
    msg.op = 103U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TCICGNIWPVCIEHEGXUYEBWOVFDKVGQJIMBRVYGGNYGANHSQVQDTDHGSHAETJUFJQYXSRALZSBJSOKUBBTZKIJQFPWMIDHCFUMXWUQCHQEMLNCNOYREDRBFFWMBODIYQAIAIASLWGOHKFFLXRUOARLL");
    tmp_msg_0.lat = 0.7875580795516472;
    tmp_msg_0.lon = 0.23795103827650244;
    tmp_msg_0.depth = 0.44545054455140864;
    tmp_msg_0.query_channel = 194U;
    tmp_msg_0.reply_channel = 223U;
    tmp_msg_0.transponder_delay = 50U;
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
    msg.setTimeStamp(0.7515400500496875);
    msg.setSource(12929U);
    msg.setSourceEntity(36U);
    msg.setDestination(60908U);
    msg.setDestinationEntity(156U);
    msg.op = 69U;

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
    msg.setTimeStamp(0.5830223903008406);
    msg.setSource(45735U);
    msg.setSourceEntity(3U);
    msg.setDestination(11674U);
    msg.setDestinationEntity(39U);
    msg.op = 101U;

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
    msg.setTimeStamp(0.7962346006350899);
    msg.setSource(53537U);
    msg.setSourceEntity(16U);
    msg.setDestination(51411U);
    msg.setDestinationEntity(249U);
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8373375333101959;
    tmp_msg_0.beam_height = 0.4946603984911262;
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
    msg.setTimeStamp(0.19271208182065613);
    msg.setSource(29659U);
    msg.setSourceEntity(80U);
    msg.setDestination(54416U);
    msg.setDestinationEntity(72U);
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("UHSCTKBQGRXDNEMTDHAPPZBNFUXUNIDYPSHXJCRGIQHBOILWEFMZPDBSMYCMAQKIVKONBQCKEUEJYLOCVQQJFMBVSCWZLSBKHAORCNSRZTOILSPGICEWLOAATDYOPKJFWYF");
    tmp_msg_0.text.assign("SOXTIHCUAOPCXTYJYBUZRCRZJGWDQRPIGFIIWNNFZWBMHWXJFTOFLABMPEIHCXLBTYPFZXXCWDTOHMCYWE");
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
    msg.setTimeStamp(0.43064761883872993);
    msg.setSource(61652U);
    msg.setSourceEntity(116U);
    msg.setDestination(44070U);
    msg.setDestinationEntity(68U);
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.9171812008284991);
    msg.setSource(63959U);
    msg.setSourceEntity(183U);
    msg.setDestination(5388U);
    msg.setDestinationEntity(94U);
    msg.op = 105U;
    msg.system.assign("LBJLKDWOQHAEGQJPSHUDJDESAXZWAHNXDSMIGUVIJGYMWSJOMRE");
    msg.range = 0.718970702135551;
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 60772U;
    tmp_msg_0.lat = 0.9219747831851133;
    tmp_msg_0.lon = 0.46837660017649463;
    tmp_msg_0.z_units = 165U;
    tmp_msg_0.z = 0.6252656943660887;
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
    msg.setTimeStamp(0.13152195472792771);
    msg.setSource(36608U);
    msg.setSourceEntity(132U);
    msg.setDestination(29877U);
    msg.setDestinationEntity(55U);
    msg.op = 114U;
    msg.system.assign("XRRXLCALSETALUDBAFDQMHTCFOHQPKOXOCZHRPOPAMVDQUXITLJAERRSEWNZJDNIYKUAWAMLTMGTEJPJSRNTZJYNMJCKWFZSCJDVNVAHYQWZXVYQYHVIUZQLCMKOWOGJHEFYZRIZPKFPVLTQMGHCEBOSTGXVGEQUCAXBPBWGIANCYNNXYBGBPEWSIHHMOWUGYPTOIBBUVRITRKSMKZUFFWFLLCXPRJSUWQKBLEUVEFKONFNKDSQ");
    msg.range = 0.47314293454180156;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 245U;
    tmp_msg_0.snapshot.assign("EFSKLVUMEKVHDIUBEDTSNISZWAFQYXADZIHWNFONNSEPXRK");
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.37154764507070903;
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
    msg.setTimeStamp(0.8649005334189105);
    msg.setSource(24616U);
    msg.setSourceEntity(161U);
    msg.setDestination(47905U);
    msg.setDestinationEntity(224U);
    msg.op = 20U;
    msg.system.assign("FBZLCLHPXKDXIDAYDLU");
    msg.range = 0.6659810615407775;
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("WZIWABDZYDBANKXETNYLKAVMUCOINMUZMMZIVBGSVFEHKIOKJCUGPFCCMWWVEZPJFEQZWDDIKPFEYJJHITOZUFGAGSHWJGJVDSXTQGYMKHEKSSYAOCXVWXLGH");
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
    msg.setTimeStamp(0.24173498296354157);
    msg.setSource(26201U);
    msg.setSourceEntity(154U);
    msg.setDestination(20029U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.13731257868908708);
    msg.setSource(51511U);
    msg.setSourceEntity(172U);
    msg.setDestination(19269U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.1399003150308752);
    msg.setSource(51007U);
    msg.setSourceEntity(78U);
    msg.setDestination(38436U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.3473637436331166);
    msg.setSource(65251U);
    msg.setSourceEntity(4U);
    msg.setDestination(35611U);
    msg.setDestinationEntity(66U);
    msg.list.assign("AALOHUTZZDEXMXLJBROCSRJB");

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
    msg.setTimeStamp(0.9896818459622053);
    msg.setSource(18765U);
    msg.setSourceEntity(41U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(125U);
    msg.list.assign("UMCQGHPWRFFAGQHLZBGKHKTEJAHEIZNWISGHTJPKXMMYVZCYPKPKNLYBOFALPCRCCEYQXXCUJQAJZFTUENPGYXLEDTJQVVWDNFTIITIWGMJXDTJDLPRWIHYRFHHMCOEUVEKIRYLKUNTSEPGEBFKGVWNPHNWBFYAGQMOMATK");

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
    msg.setTimeStamp(0.7748466091788071);
    msg.setSource(3296U);
    msg.setSourceEntity(250U);
    msg.setDestination(50698U);
    msg.setDestinationEntity(152U);
    msg.list.assign("XPHQOOSQHZTFZOLZMBQJOAGPLPLSQSICAKZEDTIREDWDUKEXTARXYRAFCWDVZJPDALUTWRVDGSRDGDATLQC");

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
    msg.setTimeStamp(0.8236772758421452);
    msg.setSource(16993U);
    msg.setSourceEntity(142U);
    msg.setDestination(40993U);
    msg.setDestinationEntity(206U);
    msg.value = 15652;

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
    msg.setTimeStamp(0.24876392855693585);
    msg.setSource(25386U);
    msg.setSourceEntity(227U);
    msg.setDestination(53129U);
    msg.setDestinationEntity(124U);
    msg.value = 26051;

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
    msg.setTimeStamp(0.41679368126145755);
    msg.setSource(19733U);
    msg.setSourceEntity(158U);
    msg.setDestination(47411U);
    msg.setDestinationEntity(192U);
    msg.value = 15250;

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
    msg.setTimeStamp(0.5075570869416453);
    msg.setSource(10554U);
    msg.setSourceEntity(97U);
    msg.setDestination(51396U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5203751238590771;

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
    msg.setTimeStamp(0.4715505443357336);
    msg.setSource(11791U);
    msg.setSourceEntity(62U);
    msg.setDestination(22809U);
    msg.setDestinationEntity(151U);
    msg.value = 0.44190217640838336;

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
    msg.setTimeStamp(0.3465345785034465);
    msg.setSource(31035U);
    msg.setSourceEntity(20U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(150U);
    msg.value = 0.9951245810545541;

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
    msg.setTimeStamp(0.6415564389704435);
    msg.setSource(38092U);
    msg.setSourceEntity(54U);
    msg.setDestination(24171U);
    msg.setDestinationEntity(174U);
    msg.value = 0.06736860398325506;

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
    msg.setTimeStamp(0.21482473510362288);
    msg.setSource(41968U);
    msg.setSourceEntity(124U);
    msg.setDestination(54219U);
    msg.setDestinationEntity(209U);
    msg.value = 0.655698760256873;

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
    msg.setTimeStamp(0.4275464520636829);
    msg.setSource(44532U);
    msg.setSourceEntity(7U);
    msg.setDestination(7910U);
    msg.setDestinationEntity(252U);
    msg.value = 0.7674858488639552;

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
    msg.setTimeStamp(0.8770083046989764);
    msg.setSource(51911U);
    msg.setSourceEntity(56U);
    msg.setDestination(61122U);
    msg.setDestinationEntity(155U);
    msg.validity = 19597U;
    msg.type = 168U;
    msg.utc_year = 31155U;
    msg.utc_month = 170U;
    msg.utc_day = 9U;
    msg.utc_time = 0.3826343826637262;
    msg.lat = 0.7612069312581559;
    msg.lon = 0.0846849115924716;
    msg.height = 0.32184169289916764;
    msg.satellites = 183U;
    msg.cog = 0.40079489581665073;
    msg.sog = 0.9717008095347752;
    msg.hdop = 0.45092498731302766;
    msg.vdop = 0.621952954595609;
    msg.hacc = 0.15131035146554195;
    msg.vacc = 0.43724103307741835;

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
    msg.setTimeStamp(0.7408886094951453);
    msg.setSource(25175U);
    msg.setSourceEntity(37U);
    msg.setDestination(60350U);
    msg.setDestinationEntity(58U);
    msg.validity = 21384U;
    msg.type = 123U;
    msg.utc_year = 24980U;
    msg.utc_month = 211U;
    msg.utc_day = 67U;
    msg.utc_time = 0.4957376855054043;
    msg.lat = 0.6220556278164033;
    msg.lon = 0.8859359438042264;
    msg.height = 0.34371740380179305;
    msg.satellites = 70U;
    msg.cog = 0.11265227536531341;
    msg.sog = 0.3410433104635182;
    msg.hdop = 0.9674494182298905;
    msg.vdop = 0.7092405283281225;
    msg.hacc = 0.838517066897649;
    msg.vacc = 0.3151505299987759;

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
    msg.setTimeStamp(0.013751635629607573);
    msg.setSource(57527U);
    msg.setSourceEntity(74U);
    msg.setDestination(28150U);
    msg.setDestinationEntity(147U);
    msg.validity = 35826U;
    msg.type = 164U;
    msg.utc_year = 59103U;
    msg.utc_month = 74U;
    msg.utc_day = 151U;
    msg.utc_time = 0.22023013968028493;
    msg.lat = 0.12968802622065834;
    msg.lon = 0.6945919910322538;
    msg.height = 0.8007553118396823;
    msg.satellites = 64U;
    msg.cog = 0.29838242511502355;
    msg.sog = 0.33368731922965844;
    msg.hdop = 0.6988985598780845;
    msg.vdop = 0.7137021636893933;
    msg.hacc = 0.16314877339830947;
    msg.vacc = 0.12325865096573696;

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
    msg.setTimeStamp(0.9104745024266089);
    msg.setSource(1174U);
    msg.setSourceEntity(89U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(165U);
    msg.time = 0.02845586083195517;
    msg.phi = 0.6787024391494508;
    msg.theta = 0.16273028083391938;
    msg.psi = 0.07833014305151986;
    msg.psi_magnetic = 0.40213349667734133;

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
    msg.setTimeStamp(0.5028860638599435);
    msg.setSource(1309U);
    msg.setSourceEntity(203U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(160U);
    msg.time = 0.998436598815537;
    msg.phi = 0.06174078486690204;
    msg.theta = 0.490855863139245;
    msg.psi = 0.8035028603700326;
    msg.psi_magnetic = 0.9636509656606294;

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
    msg.setTimeStamp(0.537601533986033);
    msg.setSource(17865U);
    msg.setSourceEntity(152U);
    msg.setDestination(16008U);
    msg.setDestinationEntity(117U);
    msg.time = 0.5760005464351418;
    msg.phi = 0.5184797689244148;
    msg.theta = 0.06882616185659507;
    msg.psi = 0.9804167998614599;
    msg.psi_magnetic = 0.932709948675608;

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
    msg.setTimeStamp(0.5171328172073194);
    msg.setSource(44033U);
    msg.setSourceEntity(57U);
    msg.setDestination(50970U);
    msg.setDestinationEntity(48U);
    msg.time = 0.7086626176538385;
    msg.x = 0.400545726763587;
    msg.y = 0.23166006468699518;
    msg.z = 0.2029545006061544;
    msg.timestep = 0.4822377315367765;

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
    msg.setTimeStamp(0.7205836108656967);
    msg.setSource(6134U);
    msg.setSourceEntity(50U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(236U);
    msg.time = 0.5031315605152131;
    msg.x = 0.6366469368500896;
    msg.y = 0.4400398776797515;
    msg.z = 0.21745658795327139;
    msg.timestep = 0.8790347836548777;

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
    msg.setTimeStamp(0.10140347369834357);
    msg.setSource(32071U);
    msg.setSourceEntity(11U);
    msg.setDestination(53374U);
    msg.setDestinationEntity(176U);
    msg.time = 0.3721707847838924;
    msg.x = 0.9124119391944585;
    msg.y = 0.412073174707828;
    msg.z = 0.3903174075273026;
    msg.timestep = 0.4303337644295284;

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
    msg.setTimeStamp(0.42555007548429025);
    msg.setSource(22793U);
    msg.setSourceEntity(29U);
    msg.setDestination(57668U);
    msg.setDestinationEntity(81U);
    msg.time = 0.45393020165638553;
    msg.x = 0.4539681586080564;
    msg.y = 0.0936595455222684;
    msg.z = 0.7937295610515706;

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
    msg.setTimeStamp(0.6110920176270929);
    msg.setSource(30111U);
    msg.setSourceEntity(26U);
    msg.setDestination(15567U);
    msg.setDestinationEntity(216U);
    msg.time = 0.2843080127400618;
    msg.x = 0.9158095422466518;
    msg.y = 0.08807699431015303;
    msg.z = 0.9277782586166134;

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
    msg.setTimeStamp(0.8888152867660912);
    msg.setSource(64285U);
    msg.setSourceEntity(92U);
    msg.setDestination(58818U);
    msg.setDestinationEntity(68U);
    msg.time = 0.599768596298261;
    msg.x = 0.35898399274926696;
    msg.y = 0.27197163172463035;
    msg.z = 0.3530647178875569;

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
    msg.setTimeStamp(0.4223974771335557);
    msg.setSource(27977U);
    msg.setSourceEntity(232U);
    msg.setDestination(42927U);
    msg.setDestinationEntity(144U);
    msg.time = 0.10548958386541318;
    msg.x = 0.18086232224914145;
    msg.y = 0.24174306135659318;
    msg.z = 0.024241462403476688;

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
    msg.setTimeStamp(0.11137033804210505);
    msg.setSource(22907U);
    msg.setSourceEntity(99U);
    msg.setDestination(18605U);
    msg.setDestinationEntity(12U);
    msg.time = 0.9304652196597742;
    msg.x = 0.2794624685398964;
    msg.y = 0.4364386170346244;
    msg.z = 0.2513458744793413;

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
    msg.setTimeStamp(0.0005104513913229969);
    msg.setSource(64304U);
    msg.setSourceEntity(212U);
    msg.setDestination(64413U);
    msg.setDestinationEntity(0U);
    msg.time = 0.3267425543429545;
    msg.x = 0.3687802368591653;
    msg.y = 0.09334166485934103;
    msg.z = 0.49579593865542915;

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
    msg.setTimeStamp(0.9878503699868999);
    msg.setSource(31431U);
    msg.setSourceEntity(58U);
    msg.setDestination(55526U);
    msg.setDestinationEntity(215U);
    msg.time = 0.6888731106585929;
    msg.x = 0.7195242817959315;
    msg.y = 0.2172590034298031;
    msg.z = 0.8267031642820215;

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
    msg.setTimeStamp(0.8191984817079929);
    msg.setSource(28623U);
    msg.setSourceEntity(186U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(111U);
    msg.time = 0.8293489212608741;
    msg.x = 0.8901759133155037;
    msg.y = 0.40248698482077827;
    msg.z = 0.8792437172264448;

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
    msg.setTimeStamp(0.6944171144276152);
    msg.setSource(28028U);
    msg.setSourceEntity(95U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(222U);
    msg.time = 0.8933002074926585;
    msg.x = 0.6956318427544045;
    msg.y = 0.9718215452526067;
    msg.z = 0.6322671903894439;

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
    msg.setTimeStamp(0.025236778253337255);
    msg.setSource(23749U);
    msg.setSourceEntity(132U);
    msg.setDestination(43698U);
    msg.setDestinationEntity(110U);
    msg.validity = 143U;
    msg.x = 0.15584911957701775;
    msg.y = 0.047543812824819676;
    msg.z = 0.6080730248641155;

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
    msg.setTimeStamp(0.7618448897438812);
    msg.setSource(59322U);
    msg.setSourceEntity(103U);
    msg.setDestination(50725U);
    msg.setDestinationEntity(201U);
    msg.validity = 216U;
    msg.x = 0.7005239637100545;
    msg.y = 0.9566187972338952;
    msg.z = 0.9086791387643506;

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
    msg.setTimeStamp(0.2610247390119316);
    msg.setSource(17666U);
    msg.setSourceEntity(209U);
    msg.setDestination(41566U);
    msg.setDestinationEntity(55U);
    msg.validity = 127U;
    msg.x = 0.2666256844334214;
    msg.y = 0.3037502422272099;
    msg.z = 0.8875467782041322;

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
    msg.setTimeStamp(0.10193390060203178);
    msg.setSource(19458U);
    msg.setSourceEntity(29U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(218U);
    msg.validity = 103U;
    msg.x = 0.15680916600731698;
    msg.y = 0.40612342602878426;
    msg.z = 0.5123633845503935;

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
    msg.setTimeStamp(0.8868255816199156);
    msg.setSource(14849U);
    msg.setSourceEntity(13U);
    msg.setDestination(37159U);
    msg.setDestinationEntity(159U);
    msg.validity = 138U;
    msg.x = 0.5034529689365935;
    msg.y = 0.8398073472561726;
    msg.z = 0.29213779565536335;

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
    msg.setTimeStamp(0.2622466161713364);
    msg.setSource(52186U);
    msg.setSourceEntity(164U);
    msg.setDestination(31066U);
    msg.setDestinationEntity(217U);
    msg.validity = 194U;
    msg.x = 0.5150427999616085;
    msg.y = 0.853566890757097;
    msg.z = 0.4031141211393201;

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
    msg.setTimeStamp(0.10331846781511711);
    msg.setSource(18517U);
    msg.setSourceEntity(72U);
    msg.setDestination(15209U);
    msg.setDestinationEntity(68U);
    msg.time = 0.8811899740634943;
    msg.x = 0.8644453952360319;
    msg.y = 0.9736801385967978;
    msg.z = 0.5671811682809129;

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
    msg.setTimeStamp(0.5624451208883297);
    msg.setSource(42872U);
    msg.setSourceEntity(113U);
    msg.setDestination(25416U);
    msg.setDestinationEntity(12U);
    msg.time = 0.09049136265917479;
    msg.x = 0.32217337482378516;
    msg.y = 0.9221369187164306;
    msg.z = 0.018793438111912586;

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
    msg.setTimeStamp(0.8132448900097177);
    msg.setSource(15081U);
    msg.setSourceEntity(94U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(10U);
    msg.time = 0.0786434488162987;
    msg.x = 0.47181210414025243;
    msg.y = 0.9445529854633519;
    msg.z = 0.17498143998254378;

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
    msg.setTimeStamp(0.9289096832371231);
    msg.setSource(60976U);
    msg.setSourceEntity(202U);
    msg.setDestination(43563U);
    msg.setDestinationEntity(238U);
    msg.validity = 91U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7261190234571049;
    tmp_msg_0.y = 0.6114910910347198;
    tmp_msg_0.z = 0.1438206379218675;
    tmp_msg_0.phi = 0.5245263829385206;
    tmp_msg_0.theta = 0.9348570207802452;
    tmp_msg_0.psi = 0.46294849355744383;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.3741329892082188;
    tmp_msg_1.beam_height = 0.7666132841282868;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.5254337506252933;

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
    msg.setTimeStamp(0.1546182587724042);
    msg.setSource(40703U);
    msg.setSourceEntity(170U);
    msg.setDestination(4439U);
    msg.setDestinationEntity(35U);
    msg.validity = 112U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6514795409393723;
    tmp_msg_0.y = 0.48456262021275964;
    tmp_msg_0.z = 0.9380908468017;
    tmp_msg_0.phi = 0.28819802608627687;
    tmp_msg_0.theta = 0.6994367129767207;
    tmp_msg_0.psi = 0.22672571661223706;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.2596815138041205;
    tmp_msg_1.beam_height = 0.10629194128496622;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.03903388177758915;

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
    msg.setTimeStamp(0.07950434356713476);
    msg.setSource(15087U);
    msg.setSourceEntity(58U);
    msg.setDestination(23301U);
    msg.setDestinationEntity(202U);
    msg.validity = 242U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.9982847011180705;
    tmp_msg_0.y = 0.7974372904213084;
    tmp_msg_0.z = 0.7014696984537272;
    tmp_msg_0.phi = 0.6487657117299346;
    tmp_msg_0.theta = 0.1433984412790411;
    tmp_msg_0.psi = 0.7906643161451642;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.4520126743617716;

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
    msg.setTimeStamp(0.3378548266010192);
    msg.setSource(24983U);
    msg.setSourceEntity(167U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(248U);
    msg.value = 0.07950737763456905;

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
    msg.setTimeStamp(0.23150967145175816);
    msg.setSource(8650U);
    msg.setSourceEntity(111U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(25U);
    msg.value = 0.5902075847668778;

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
    msg.setTimeStamp(0.33439454067589214);
    msg.setSource(52645U);
    msg.setSourceEntity(23U);
    msg.setDestination(60711U);
    msg.setDestinationEntity(21U);
    msg.value = 0.37041659672180094;

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
    msg.setTimeStamp(0.10629225606442805);
    msg.setSource(27594U);
    msg.setSourceEntity(231U);
    msg.setDestination(52538U);
    msg.setDestinationEntity(93U);
    msg.value = 0.9434240459151497;

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
    msg.setTimeStamp(0.49685834982730215);
    msg.setSource(39557U);
    msg.setSourceEntity(97U);
    msg.setDestination(22478U);
    msg.setDestinationEntity(42U);
    msg.value = 0.36193902374460807;

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
    msg.setTimeStamp(0.36159363348233087);
    msg.setSource(9387U);
    msg.setSourceEntity(133U);
    msg.setDestination(17689U);
    msg.setDestinationEntity(104U);
    msg.value = 0.6361956169235462;

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
    msg.setTimeStamp(0.030394990620622897);
    msg.setSource(47743U);
    msg.setSourceEntity(133U);
    msg.setDestination(44810U);
    msg.setDestinationEntity(126U);
    msg.value = 0.342280080208304;

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
    msg.setTimeStamp(0.7314569946777714);
    msg.setSource(20569U);
    msg.setSourceEntity(143U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3584779502424974;

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
    msg.setTimeStamp(0.7098049643787734);
    msg.setSource(36273U);
    msg.setSourceEntity(141U);
    msg.setDestination(7345U);
    msg.setDestinationEntity(215U);
    msg.value = 0.3379757689861195;

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
    msg.setTimeStamp(0.35247233624307805);
    msg.setSource(9003U);
    msg.setSourceEntity(232U);
    msg.setDestination(19587U);
    msg.setDestinationEntity(39U);
    msg.value = 0.06335282870044912;

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
    msg.setTimeStamp(0.9167793697418719);
    msg.setSource(35558U);
    msg.setSourceEntity(254U);
    msg.setDestination(12440U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6924292291784683;

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
    msg.setTimeStamp(0.2504527162946395);
    msg.setSource(55001U);
    msg.setSourceEntity(45U);
    msg.setDestination(21148U);
    msg.setDestinationEntity(110U);
    msg.value = 0.8565599540526191;

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
    msg.setTimeStamp(0.12009595368616355);
    msg.setSource(45772U);
    msg.setSourceEntity(105U);
    msg.setDestination(64667U);
    msg.setDestinationEntity(208U);
    msg.value = 0.10671512037080644;

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
    msg.setTimeStamp(0.5024921451145182);
    msg.setSource(26429U);
    msg.setSourceEntity(76U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(235U);
    msg.value = 0.12942975474063823;

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
    msg.setTimeStamp(0.9050386984309207);
    msg.setSource(36804U);
    msg.setSourceEntity(243U);
    msg.setDestination(57331U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6231918952146823;

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
    msg.setTimeStamp(0.7885663592826849);
    msg.setSource(13238U);
    msg.setSourceEntity(60U);
    msg.setDestination(11269U);
    msg.setDestinationEntity(179U);
    msg.value = 0.19317204858795478;

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
    msg.setTimeStamp(0.6845738853359307);
    msg.setSource(45033U);
    msg.setSourceEntity(4U);
    msg.setDestination(2204U);
    msg.setDestinationEntity(1U);
    msg.value = 0.760084754080551;

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
    msg.setTimeStamp(0.21054724876340292);
    msg.setSource(55945U);
    msg.setSourceEntity(38U);
    msg.setDestination(57777U);
    msg.setDestinationEntity(191U);
    msg.value = 0.260966835164847;

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
    msg.setTimeStamp(0.07514370313453267);
    msg.setSource(55713U);
    msg.setSourceEntity(176U);
    msg.setDestination(56517U);
    msg.setDestinationEntity(249U);
    msg.value = 0.6034743926974138;

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
    msg.setTimeStamp(0.7156654398640863);
    msg.setSource(19782U);
    msg.setSourceEntity(241U);
    msg.setDestination(21799U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8318853534908772;

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
    msg.setTimeStamp(0.9697449790261947);
    msg.setSource(36616U);
    msg.setSourceEntity(252U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(194U);
    msg.value = 0.010024285510682462;

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
    msg.setTimeStamp(0.9443705290464085);
    msg.setSource(6799U);
    msg.setSourceEntity(249U);
    msg.setDestination(1115U);
    msg.setDestinationEntity(8U);
    msg.value = 0.5820304979114957;

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
    msg.setTimeStamp(0.8217908879785174);
    msg.setSource(62116U);
    msg.setSourceEntity(96U);
    msg.setDestination(62848U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7708895166434835;

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
    msg.setTimeStamp(0.3934783147203298);
    msg.setSource(26488U);
    msg.setSourceEntity(245U);
    msg.setDestination(19336U);
    msg.setDestinationEntity(92U);
    msg.value = 0.7071148735549575;

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
    msg.setTimeStamp(0.8658169508038994);
    msg.setSource(59020U);
    msg.setSourceEntity(142U);
    msg.setDestination(12347U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.8400623913044202;
    msg.speed = 0.34184030810647914;
    msg.turbulence = 0.916764494962278;

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
    msg.setTimeStamp(0.7804783656181667);
    msg.setSource(16025U);
    msg.setSourceEntity(106U);
    msg.setDestination(17899U);
    msg.setDestinationEntity(68U);
    msg.direction = 0.35779169285592616;
    msg.speed = 0.7176458515425089;
    msg.turbulence = 0.17006128857395097;

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
    msg.setTimeStamp(0.5106563477957277);
    msg.setSource(5555U);
    msg.setSourceEntity(58U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(3U);
    msg.direction = 0.2645073356098482;
    msg.speed = 0.3153059763443211;
    msg.turbulence = 0.42754106486136134;

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
    msg.setTimeStamp(0.5595815218947916);
    msg.setSource(34931U);
    msg.setSourceEntity(105U);
    msg.setDestination(12888U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7498090158754165;

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
    msg.setTimeStamp(0.3928835364569191);
    msg.setSource(48578U);
    msg.setSourceEntity(162U);
    msg.setDestination(5124U);
    msg.setDestinationEntity(223U);
    msg.value = 0.035611783328648006;

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
    msg.setTimeStamp(0.9084646263635617);
    msg.setSource(41968U);
    msg.setSourceEntity(149U);
    msg.setDestination(56675U);
    msg.setDestinationEntity(121U);
    msg.value = 0.7848452409638805;

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
    msg.setTimeStamp(0.21489206709739384);
    msg.setSource(40931U);
    msg.setSourceEntity(78U);
    msg.setDestination(35940U);
    msg.setDestinationEntity(1U);
    msg.value.assign("UHRWMDYVLJBCKBLZTPLMPOUQUGFVSUQPFDHRXNEUEYWBSQLWYJOIPNDGTKDCDJUNTFSZOHTJYCIBFAEAWENXGLRFRCDGVYRVGXFXXSPLOIEYAPNNVMBUZKQZFSVQAEAZ");

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
    msg.setTimeStamp(0.1884494359488319);
    msg.setSource(41468U);
    msg.setSourceEntity(93U);
    msg.setDestination(22168U);
    msg.setDestinationEntity(79U);
    msg.value.assign("ZPFXYWJTOGDRPVSSIFTQIJEREPGPMJWNFXBWDAKWVKOMNVBRDKZNFTSJRAUAWIXZSHGNRGLRPMLXHPKDPGTQFOZYGZGUTVHJAIWUSDZLMMKMYRCMHDYGTBCKBQRAYPYXCIUXUCCFHEESZYETEEQIFWOTMNQPTQHWKAYBKXKJHSFLRZSOYVSBNAEEKCXODQLEWIBPUXCLJJLZZVXUGQOIUVWVBHOUBGLQNHRMVNIBCQLT");

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
    msg.setTimeStamp(0.2955074565847471);
    msg.setSource(58055U);
    msg.setSourceEntity(42U);
    msg.setDestination(30876U);
    msg.setDestinationEntity(116U);
    msg.value.assign("QNPEJDJXMFVIWOICJNXBGSRMJQTZQTVZFTQYCCPAPLVQSRMEKGBWHIDGAGNPZFIPMSNYPXJLNAJUZKQMHRXUIWWEGIBOCYKXFTKFPOYBMAZGCZOILZW");

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
    msg.setTimeStamp(0.27966751794693767);
    msg.setSource(51366U);
    msg.setSourceEntity(118U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(145U);
    const char tmp_msg_0[] = {-53, -2, 6, -105, 75, -69, -48, -59, 77, 34, 19, -15, 81, -46, -113, -125, 77, -25, 52, -47, 47, -128, -116, -81, 80, -9, -95, 13, 114, 8, -115, 99, 124, 35, 55, 55, -84, 35, 92, -15, -39, -18, 40, 125, 24, -99, -104, 25, -60, 1, -128, 92, -15, 44, -66, -45, -8, -99, -110, 6, 96, -95, 20, -112, -84, 107, -41, -16, -44, 37, -23, 84, -18, -44, 25, -112, 60, 119, 9, -14, -30, -117, -127, 34, -38, 101, 111, -107, 71, -126, 50, 118, 118, 7, 66, -96, 21, 47, 103, -90, 26, 45, 87, 4, -54, -37, -22, 32, -74, 21, -80, 43, -92, -25, 73, 21, 40, -62, 22, -94, 74, 93, -125, 86, 58, -74, 10, 15, -39, -25, 126, -124, 12, 90, -121, 86};
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
    msg.setTimeStamp(0.4008432723677472);
    msg.setSource(20450U);
    msg.setSourceEntity(149U);
    msg.setDestination(18806U);
    msg.setDestinationEntity(243U);
    const char tmp_msg_0[] = {70, -77, -42, -32, 54, 37, 30, 104, 29, -111, -23, -5, 84, -121, -58, -86, 7, 58, 64, -93, 51, 76, -101, -76, -80, 122, 10, 85, -51, 10, -128, -98, 67, -59, 25, 78, -76, -109, 107, 93, -51, -29, 6, 108, 123, 73, -117, 93, -8, -117, -94, 97, 9, -120, -30, 63, -44, -81, 65, 105, 73, 35, -79, -126, -79, 59, 124, 42, -49, -10, 120, -20, 117, 91, 88, 119, -78, 38};
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
    msg.setTimeStamp(0.39457165256951476);
    msg.setSource(30004U);
    msg.setSourceEntity(88U);
    msg.setDestination(59410U);
    msg.setDestinationEntity(174U);
    const char tmp_msg_0[] = {-91, -57, -45, -45, -99, 89, 34, -17, -99, -54, -53, 121, 27, 5, 84, -70, 20, -84, 114, -8, 64, -107, -69, -25, 50, 86, 3, -81, 32, 122, 31, -52, 58, 17, 109, 8, -74, -102, -99, 125, -119, 79, 1, -9, -126, 33, 101, -27, -17, -35, -124, 58, 106, 80, 7, 108, 87, 100, 28, 61, 28, -1, 80, 31, -51, -30, 115, 27, -116, -111, -41, -46, 66, 58, 54, -59, 19, 66, -84, 87, -3, -111, -110, 54, -96, 22, 73, -80, 28, -89, 37, -85, -47, -89, -52, 69, -72, 110, 120, 92, -51, 71, -108, 123, -50, 60, 86, -116, 124, -64, -121, 65, -79, -7, 8, 98, 17, 98};
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
    msg.setTimeStamp(0.4827852234552904);
    msg.setSource(42905U);
    msg.setSourceEntity(158U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(15U);
    msg.type = 132U;
    msg.frequency = 3349090556U;
    msg.min_range = 42754U;
    msg.max_range = 9665U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.9715025527915251;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47444579056403335;
    tmp_msg_0.beam_height = 0.20231309897900374;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-28, -27, 26, -36, 27, -12, -71, -67, 120, 105, 95, -77, -81, -62, 72, -51, -104, -113, -36, -70, 42, -85, 74, 102, -17, 16, -3, 33, 56, -50, 0, -23, -12, 81, -114, -44, -121, -109, -33, 18, -104, 75, -127, -115, -116, 112, 21, -99, 59, 123, 56, -124, 34, -101, 11, -90, -26, 114, -93, -120, -124, -108, 110, -46, 44, 56, -74, -108, -41, -62, 76, -107, -122, -106, 18, -113, 17, 50, 115, -14, -118, -4, 75, 41, 19, -43, 125, 32, -119, -2, 55, -23, -51, 105, -120, 9, -79, -107, -49, 109, -120, -54, 49, -26, -11, -30, -91, 106, -30, 44, 5, 77, 120, -26, 65, 18, 13, -66, -122, -65, -123, 109, -96, 23, -80, -16, 112, -120, 39, -90, 21, -44, -79, -8, 114, -118, -12, 106, 42, 86, 10, -62, -78, -120, -89, 15, -59, 39, 60, -86, 121, 101, -86, -76, 81, -117, 84, 115, -70, -65, 32, -42, -65, 113, -85, 34, 51, -49, 22, 124, -13, 66};
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
    msg.setTimeStamp(0.5291264565758439);
    msg.setSource(41818U);
    msg.setSourceEntity(146U);
    msg.setDestination(14829U);
    msg.setDestinationEntity(198U);
    msg.type = 193U;
    msg.frequency = 1813766846U;
    msg.min_range = 49539U;
    msg.max_range = 8952U;
    msg.bits_per_point = 97U;
    msg.scale_factor = 0.604962131192084;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.29095178175382497;
    tmp_msg_0.beam_height = 0.9861618184666849;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-13, 76, -19, -124, -92, 86, -118, -11, -75, 30, -112, -42, 33, -110, 83, 114, 67, -50, -122, -111, 50, 75, -80, 43, 59, -61, 75, 31, 7, 57, -91, -59, -113, -99, 74, -17, -117, -59, 53, 52, 34, 10, 81, -84, 31, 71, -44, -56, 105, 115, 70, -72, -11, -84, 48, 23, -2, -89, 115, 20, -112, 62, -99, 90, 81, 92, 67, -52, -49, 59, 67, 41, 3, 32, -99, -6, -40, 121, -85, -49, -82, -126, -81, -10, -1, 62, 70, -84, 50, 69, -95, 126, -65, -78, 27, -103, 24, -108, 91, 17, -9, 44, 42, -87, 53, -106, -27, 45, -46, -52, -18, -53, 70, -7, 119, -36, -43, 35, -2, 1, 119, -76, -109, 41, 5, 6, 55, 92, 112};
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
    msg.setTimeStamp(0.2450606534219324);
    msg.setSource(6204U);
    msg.setSourceEntity(172U);
    msg.setDestination(27235U);
    msg.setDestinationEntity(166U);
    msg.type = 135U;
    msg.frequency = 205624234U;
    msg.min_range = 39779U;
    msg.max_range = 22481U;
    msg.bits_per_point = 109U;
    msg.scale_factor = 0.4864819788310878;
    const char tmp_msg_0[] = {75, 86, -100, 104, 47, -68, -101, 65, 8, -58, 69, 12, 33, 107, -71, -58, 115, 0, 68, -7, -9, 53, -16, 104, -88, -92, 3, -23, 101, -56, 64, 17, -122, -17, 42, 76, -40, 84, 24, 96, 75, 61, -1, 116, 37, -35, -86, -79, 77, 111, 113, -85, 0, -77, -83, -48, -5, 122, 46, -56, -44, -110, 6, 73, 76, -121, 121, 106, -127, -125, -61, 36, 66, 80, -121, 104, 112, 39, 48, -51, 57, 60, 83};
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
    msg.setTimeStamp(0.04202917173433529);
    msg.setSource(53903U);
    msg.setSourceEntity(150U);
    msg.setDestination(49192U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.6119891532371865);
    msg.setSource(48659U);
    msg.setSourceEntity(106U);
    msg.setDestination(32172U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.3226195910901549);
    msg.setSource(9705U);
    msg.setSourceEntity(113U);
    msg.setDestination(61321U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.10951961608666538);
    msg.setSource(2737U);
    msg.setSourceEntity(24U);
    msg.setDestination(49642U);
    msg.setDestinationEntity(54U);
    msg.op = 82U;

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
    msg.setTimeStamp(0.4174234699050223);
    msg.setSource(60586U);
    msg.setSourceEntity(203U);
    msg.setDestination(31406U);
    msg.setDestinationEntity(38U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.6498874111214062);
    msg.setSource(61693U);
    msg.setSourceEntity(87U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(224U);
    msg.op = 227U;

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
    msg.setTimeStamp(0.8269299661883762);
    msg.setSource(22090U);
    msg.setSourceEntity(230U);
    msg.setDestination(60809U);
    msg.setDestinationEntity(253U);
    msg.value = 0.41889833205459026;
    msg.confidence = 0.9825846511235435;
    msg.opmodes.assign("LHPGPDVMLYDLJCIIXNRUNVMVEZURWAZABEEBZJOGD");

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
    msg.setTimeStamp(0.9506502927216711);
    msg.setSource(55445U);
    msg.setSourceEntity(122U);
    msg.setDestination(53136U);
    msg.setDestinationEntity(118U);
    msg.value = 0.8514002472135227;
    msg.confidence = 0.037893828068259805;
    msg.opmodes.assign("JOFTNDWZEZSSLLNSHBWELLURAZWLAVVYERQVSIYCMGGUBDPBJAQDWNJLHXLQPGXRYGXQJPTVJCEWKBTHPAVTKCSMWGZESMYIVEAHCVOFQTYAWDISFQZPIFTNDBBKTOHUOYGNFEIZEEFYXQCBRMMKIKRBCHDGORLXYRXNNBGBPVICJUCSUCTTUJZHPWFLRAGAZNOKXAOVMHIAHUXDKROVJWDEYLUOZYDIJJMPFKXZN");

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
    msg.setTimeStamp(0.36915949587640173);
    msg.setSource(31831U);
    msg.setSourceEntity(184U);
    msg.setDestination(63403U);
    msg.setDestinationEntity(58U);
    msg.value = 0.8681509434690537;
    msg.confidence = 0.6539376328296561;
    msg.opmodes.assign("BUREURHCKIAYGXBIQFCTYHDQAZHWSKEDLCVXDJJRMDBOWCVSRBVCMASIONTHAOWNRNHSCNORTHBWVVCDWREPKLXDFSUEZPQKJNFULQISMPAYBZQVVQOMPTFWFNFAIXZUBZYGWQHHMRFUOXGCWMPTJSFEMSWLTYIVYTGLZYNNZXS");

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
    msg.setTimeStamp(0.25951819592762393);
    msg.setSource(9745U);
    msg.setSourceEntity(48U);
    msg.setDestination(62210U);
    msg.setDestinationEntity(96U);
    msg.itow = 1616023595U;
    msg.lat = 0.16622275186157143;
    msg.lon = 0.9094338717542494;
    msg.height_ell = 0.7778708118559989;
    msg.height_sea = 0.12463933238953417;
    msg.hacc = 0.721572459812011;
    msg.vacc = 0.6482982078087918;
    msg.vel_n = 0.697592605974049;
    msg.vel_e = 0.9423442194871462;
    msg.vel_d = 0.05767707719600634;
    msg.speed = 0.6206802034591592;
    msg.gspeed = 0.39994117649282224;
    msg.heading = 0.4883565852364147;
    msg.sacc = 0.07983565015755112;
    msg.cacc = 0.17804842138994115;

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
    msg.setTimeStamp(0.7069149956244337);
    msg.setSource(41073U);
    msg.setSourceEntity(154U);
    msg.setDestination(3447U);
    msg.setDestinationEntity(50U);
    msg.itow = 270548246U;
    msg.lat = 0.05176587368334895;
    msg.lon = 0.8662038085340396;
    msg.height_ell = 0.8798110719623283;
    msg.height_sea = 0.04911062030645941;
    msg.hacc = 0.9386276993527222;
    msg.vacc = 0.77569313862665;
    msg.vel_n = 0.6535552390421782;
    msg.vel_e = 0.2407321920622929;
    msg.vel_d = 0.3353152700424462;
    msg.speed = 0.19354648058463741;
    msg.gspeed = 0.7513770580057049;
    msg.heading = 0.8816142056149555;
    msg.sacc = 0.8481940868924935;
    msg.cacc = 0.0827564724577029;

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
    msg.setTimeStamp(0.7833020297681372);
    msg.setSource(58136U);
    msg.setSourceEntity(83U);
    msg.setDestination(1015U);
    msg.setDestinationEntity(150U);
    msg.itow = 396732278U;
    msg.lat = 0.44048179024428;
    msg.lon = 0.023772716457519105;
    msg.height_ell = 0.9969031983930003;
    msg.height_sea = 0.36493002720087186;
    msg.hacc = 0.05521810883485645;
    msg.vacc = 0.021294850774725815;
    msg.vel_n = 0.4927463100063403;
    msg.vel_e = 0.15945103802931193;
    msg.vel_d = 0.8374872670976534;
    msg.speed = 0.14427328580705168;
    msg.gspeed = 0.6738698392237498;
    msg.heading = 0.017902442224115744;
    msg.sacc = 0.09993936392473657;
    msg.cacc = 0.025290673320796153;

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
    msg.setTimeStamp(0.19171481492961295);
    msg.setSource(60970U);
    msg.setSourceEntity(104U);
    msg.setDestination(55170U);
    msg.setDestinationEntity(110U);
    msg.id = 163U;
    msg.value = 0.5734597699970467;

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
    msg.setTimeStamp(0.29066033215928566);
    msg.setSource(62485U);
    msg.setSourceEntity(78U);
    msg.setDestination(59598U);
    msg.setDestinationEntity(113U);
    msg.id = 142U;
    msg.value = 0.3991159401769043;

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
    msg.setTimeStamp(0.43026792685865156);
    msg.setSource(15768U);
    msg.setSourceEntity(95U);
    msg.setDestination(63164U);
    msg.setDestinationEntity(117U);
    msg.id = 39U;
    msg.value = 0.062462327377646454;

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
    msg.setTimeStamp(0.19967936397685448);
    msg.setSource(9494U);
    msg.setSourceEntity(31U);
    msg.setDestination(32437U);
    msg.setDestinationEntity(32U);
    msg.x = 0.6650049293788223;
    msg.y = 0.8823109328354489;
    msg.z = 0.25646489639358316;
    msg.phi = 0.7376301815482387;
    msg.theta = 0.5838272239105509;
    msg.psi = 0.3880082526016423;

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
    msg.setTimeStamp(0.20950161758780972);
    msg.setSource(64174U);
    msg.setSourceEntity(177U);
    msg.setDestination(28965U);
    msg.setDestinationEntity(197U);
    msg.x = 0.8324323656461141;
    msg.y = 0.39679422994908453;
    msg.z = 0.546197790013159;
    msg.phi = 0.6421873755991745;
    msg.theta = 0.8951560829363047;
    msg.psi = 0.012262713355892685;

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
    msg.setTimeStamp(0.4149156293227362);
    msg.setSource(13586U);
    msg.setSourceEntity(207U);
    msg.setDestination(29199U);
    msg.setDestinationEntity(49U);
    msg.x = 0.9460471552306722;
    msg.y = 0.06633677106016977;
    msg.z = 0.6548542262170318;
    msg.phi = 0.05392778018354416;
    msg.theta = 0.7741668294584652;
    msg.psi = 0.953531063501624;

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
    msg.setTimeStamp(0.9490852553608633);
    msg.setSource(3338U);
    msg.setSourceEntity(230U);
    msg.setDestination(61092U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.8567107521343583;
    msg.beam_height = 0.5078431502722955;

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
    msg.setTimeStamp(0.5205354893484179);
    msg.setSource(35851U);
    msg.setSourceEntity(197U);
    msg.setDestination(39939U);
    msg.setDestinationEntity(201U);
    msg.beam_width = 0.2844061911795248;
    msg.beam_height = 0.052602068823690895;

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
    msg.setTimeStamp(0.9799170125631903);
    msg.setSource(18440U);
    msg.setSourceEntity(123U);
    msg.setDestination(42674U);
    msg.setDestinationEntity(188U);
    msg.beam_width = 0.05404100920016541;
    msg.beam_height = 0.03614978179376349;

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
    msg.setTimeStamp(0.7143838977078372);
    msg.setSource(16883U);
    msg.setSourceEntity(181U);
    msg.setDestination(33352U);
    msg.setDestinationEntity(184U);
    msg.sane = 52U;

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
    msg.setTimeStamp(0.515864850608327);
    msg.setSource(5966U);
    msg.setSourceEntity(78U);
    msg.setDestination(6859U);
    msg.setDestinationEntity(147U);
    msg.sane = 55U;

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
    msg.setTimeStamp(0.5675430281121935);
    msg.setSource(8607U);
    msg.setSourceEntity(8U);
    msg.setDestination(44122U);
    msg.setDestinationEntity(3U);
    msg.sane = 226U;

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
    msg.setTimeStamp(0.6371935211445845);
    msg.setSource(49258U);
    msg.setSourceEntity(146U);
    msg.setDestination(26111U);
    msg.setDestinationEntity(202U);
    msg.value = 0.02780272011911611;

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
    msg.setTimeStamp(0.2955138778469115);
    msg.setSource(38866U);
    msg.setSourceEntity(217U);
    msg.setDestination(1021U);
    msg.setDestinationEntity(14U);
    msg.value = 0.23481999581717583;

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
    msg.setTimeStamp(0.5611436270901924);
    msg.setSource(17903U);
    msg.setSourceEntity(204U);
    msg.setDestination(45076U);
    msg.setDestinationEntity(60U);
    msg.value = 0.27397554355381915;

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
    msg.setTimeStamp(0.05311077284442001);
    msg.setSource(11213U);
    msg.setSourceEntity(107U);
    msg.setDestination(7440U);
    msg.setDestinationEntity(45U);
    msg.value = 0.6041554279735267;

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
    msg.setTimeStamp(0.3221625444571281);
    msg.setSource(63629U);
    msg.setSourceEntity(175U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(139U);
    msg.value = 0.142959260838748;

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
    msg.setTimeStamp(0.5802317128992269);
    msg.setSource(6588U);
    msg.setSourceEntity(9U);
    msg.setDestination(49441U);
    msg.setDestinationEntity(225U);
    msg.value = 0.3313477070435339;

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
    msg.setTimeStamp(0.33906178793842057);
    msg.setSource(40767U);
    msg.setSourceEntity(141U);
    msg.setDestination(14423U);
    msg.setDestinationEntity(64U);
    msg.value = 0.65307843934024;

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
    msg.setTimeStamp(0.010488381227509058);
    msg.setSource(58900U);
    msg.setSourceEntity(11U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(110U);
    msg.value = 0.09239432240772727;

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
    msg.setTimeStamp(0.5483946186138073);
    msg.setSource(51155U);
    msg.setSourceEntity(88U);
    msg.setDestination(33560U);
    msg.setDestinationEntity(141U);
    msg.value = 0.47782069744334876;

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
    msg.setTimeStamp(0.00020656422673015484);
    msg.setSource(56971U);
    msg.setSourceEntity(234U);
    msg.setDestination(51352U);
    msg.setDestinationEntity(89U);
    msg.id = 131U;
    msg.zoom = 158U;
    msg.action = 77U;

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
    msg.setTimeStamp(0.13424423364171112);
    msg.setSource(41191U);
    msg.setSourceEntity(229U);
    msg.setDestination(3122U);
    msg.setDestinationEntity(184U);
    msg.id = 105U;
    msg.zoom = 219U;
    msg.action = 195U;

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
    msg.setTimeStamp(0.3275599798816069);
    msg.setSource(16912U);
    msg.setSourceEntity(140U);
    msg.setDestination(55453U);
    msg.setDestinationEntity(168U);
    msg.id = 106U;
    msg.zoom = 201U;
    msg.action = 116U;

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
    msg.setTimeStamp(0.8682397400574636);
    msg.setSource(51660U);
    msg.setSourceEntity(221U);
    msg.setDestination(22833U);
    msg.setDestinationEntity(134U);
    msg.id = 210U;
    msg.value = 0.8608793634072781;

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
    msg.setTimeStamp(0.9481786719451798);
    msg.setSource(23232U);
    msg.setSourceEntity(182U);
    msg.setDestination(7537U);
    msg.setDestinationEntity(70U);
    msg.id = 127U;
    msg.value = 0.04715992758716525;

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
    msg.setTimeStamp(0.27938143453487774);
    msg.setSource(50358U);
    msg.setSourceEntity(137U);
    msg.setDestination(20571U);
    msg.setDestinationEntity(112U);
    msg.id = 233U;
    msg.value = 0.4037482728626385;

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
    msg.setTimeStamp(0.8196094135787789);
    msg.setSource(52718U);
    msg.setSourceEntity(114U);
    msg.setDestination(48038U);
    msg.setDestinationEntity(212U);
    msg.id = 121U;
    msg.value = 0.1157377213231966;

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
    msg.setTimeStamp(0.8886063990206001);
    msg.setSource(19820U);
    msg.setSourceEntity(116U);
    msg.setDestination(45815U);
    msg.setDestinationEntity(213U);
    msg.id = 79U;
    msg.value = 0.10679530356911959;

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
    msg.setTimeStamp(0.3538530836973254);
    msg.setSource(44177U);
    msg.setSourceEntity(145U);
    msg.setDestination(35550U);
    msg.setDestinationEntity(174U);
    msg.id = 22U;
    msg.value = 0.8149177428498543;

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
    msg.setTimeStamp(0.5957556467781991);
    msg.setSource(41968U);
    msg.setSourceEntity(90U);
    msg.setDestination(23402U);
    msg.setDestinationEntity(44U);
    msg.id = 135U;
    msg.angle = 0.6523002402539381;

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
    msg.setTimeStamp(0.35217963028915855);
    msg.setSource(5216U);
    msg.setSourceEntity(91U);
    msg.setDestination(55967U);
    msg.setDestinationEntity(34U);
    msg.id = 108U;
    msg.angle = 0.35673211088169565;

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
    msg.setTimeStamp(0.32484012902638515);
    msg.setSource(16572U);
    msg.setSourceEntity(232U);
    msg.setDestination(16009U);
    msg.setDestinationEntity(29U);
    msg.id = 6U;
    msg.angle = 0.2722105545086755;

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
    msg.setTimeStamp(0.6971283890225314);
    msg.setSource(50361U);
    msg.setSourceEntity(54U);
    msg.setDestination(6012U);
    msg.setDestinationEntity(141U);
    msg.op = 41U;
    msg.actions.assign("ZGIOBMXAOJGRFARVINSEQTRZDGHOBNHUTBQKKLG");

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
    msg.setTimeStamp(0.9276354943754781);
    msg.setSource(15668U);
    msg.setSourceEntity(53U);
    msg.setDestination(23566U);
    msg.setDestinationEntity(123U);
    msg.op = 69U;
    msg.actions.assign("RPTZEVNLWSSFSVQJVJEQUKLDAASQOERAYOOXESCCNALHGICIYDCWYHWDIXMGVGWNGYBYZJFHPZOKNNVXJDTZYFIEUXWBLUJQCQQPQMDPUYHOWACBXRTMLPRMRYNPYUCTDVZTOAZBXFZJQNALKMJHKNBTQWJIDZOGVVDGCIAHMEUQPSRISUCRAVWGMICKFHXLSEFERBYZKVNHLWGOFMOUMELKSJBTFKUTG");

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
    msg.setTimeStamp(0.7010437229917083);
    msg.setSource(17953U);
    msg.setSourceEntity(100U);
    msg.setDestination(63881U);
    msg.setDestinationEntity(211U);
    msg.op = 187U;
    msg.actions.assign("ITJDQZWZJGXZOPAALILNNNLBFFVXRBOAYWFQZPMMHEYYHDTHTEDKBICPSKRQYTMVBRVEDKUUSLCAYRATFNZERMHVXZKYMWGDUXLWUYXVLAIJASCUFVPXWHHGQ");

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
    msg.setTimeStamp(0.5294777514241991);
    msg.setSource(14440U);
    msg.setSourceEntity(91U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(47U);
    msg.actions.assign("EZYNQOJGXHPCSTNNNHVWFUPCMICVBFRPKWVDULEAEUEPMTEBIGLO");

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
    msg.setTimeStamp(0.7300205053732577);
    msg.setSource(5227U);
    msg.setSourceEntity(122U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(190U);
    msg.actions.assign("RYBBBGNRUCPOISKRMXEZTVEMMUMCPTDZFGXJDMTDOJLNPFSVFHROOZUUOVYWHGVJXKQWDIJJWAFNJIFQHJXAUDZTQBOAWQKBUVCTYECDOEKVJSMNRPUFPVYSTWGMXHJVNTZYLDLDCQQAKSOIWOACWZSUETJVASB");

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
    msg.setTimeStamp(0.1301590193201284);
    msg.setSource(8967U);
    msg.setSourceEntity(2U);
    msg.setDestination(11650U);
    msg.setDestinationEntity(9U);
    msg.actions.assign("OCYAGAVAFQHKMNGDPPWEHXJDTDNBWZVQZAYCGBDNSTLQGZGGBELJWMICRMZZQTIJRESKEXHKPYCZYLHMIIVKTWMNQJCUWCYYJRCTTSDA");

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
    msg.setTimeStamp(0.024198478851042315);
    msg.setSource(51682U);
    msg.setSourceEntity(46U);
    msg.setDestination(316U);
    msg.setDestinationEntity(113U);
    msg.button = 93U;
    msg.value = 218U;

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
    msg.setTimeStamp(0.4729950117573707);
    msg.setSource(63271U);
    msg.setSourceEntity(210U);
    msg.setDestination(21939U);
    msg.setDestinationEntity(19U);
    msg.button = 179U;
    msg.value = 210U;

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
    msg.setTimeStamp(0.8243197058747105);
    msg.setSource(6924U);
    msg.setSourceEntity(93U);
    msg.setDestination(63087U);
    msg.setDestinationEntity(208U);
    msg.button = 151U;
    msg.value = 147U;

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
    msg.setTimeStamp(0.3002361145235307);
    msg.setSource(26533U);
    msg.setSourceEntity(136U);
    msg.setDestination(61999U);
    msg.setDestinationEntity(201U);
    msg.op = 150U;
    msg.text.assign("JMREACVAVSXTYXLPUTHSWBAFREBQYWYSOPPGVMHAKIGIURIZTRDKRYXBOJQROJTFXNSMJGRAQSWPSEDLQIGWLIFCNHEMBXAQTILHJKAVQKOKJMOGQIUEIQPXWHHNAQIFKYLKMLFJUVENBHEVZNDGBFCJPBCWGZZRDOYRCUIYRFUVYAZDPVVLXVCFAKCYNPGPXGUHLDSMCGBUXJLMPKTUZWOKTWNO");

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
    msg.setTimeStamp(0.11516210741906108);
    msg.setSource(3421U);
    msg.setSourceEntity(148U);
    msg.setDestination(14667U);
    msg.setDestinationEntity(25U);
    msg.op = 125U;
    msg.text.assign("TOZQHXJSLM");

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
    msg.setTimeStamp(0.3169182314077519);
    msg.setSource(59819U);
    msg.setSourceEntity(161U);
    msg.setDestination(41387U);
    msg.setDestinationEntity(136U);
    msg.op = 38U;
    msg.text.assign("BYQMUXBUDCZEYQVFCHJUCOVWGVWLURJDRCHTSKLPGXGIXSHVVQDZGAHRYRMZRNVVRLAFMXBEEMGCSGDVANGZVMQNPGAOQPYAEEFSNHXXLHAEPOSIIN");

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
    msg.setTimeStamp(0.6731670233009898);
    msg.setSource(39123U);
    msg.setSourceEntity(123U);
    msg.setDestination(4561U);
    msg.setDestinationEntity(167U);
    msg.op = 16U;
    msg.time_remain = 0.12954507620314482;
    msg.sched_time = 0.5592853426700909;

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
    msg.setTimeStamp(0.7161707979811339);
    msg.setSource(57449U);
    msg.setSourceEntity(222U);
    msg.setDestination(12192U);
    msg.setDestinationEntity(96U);
    msg.op = 71U;
    msg.time_remain = 0.7810394284834496;
    msg.sched_time = 0.43597469710112535;

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
    msg.setTimeStamp(0.6800028952493073);
    msg.setSource(21314U);
    msg.setSourceEntity(123U);
    msg.setDestination(29136U);
    msg.setDestinationEntity(15U);
    msg.op = 141U;
    msg.time_remain = 0.6599455013207652;
    msg.sched_time = 0.13650185823089356;

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
    msg.setTimeStamp(0.17069914468582115);
    msg.setSource(12657U);
    msg.setSourceEntity(91U);
    msg.setDestination(12174U);
    msg.setDestinationEntity(171U);
    msg.name.assign("FEIBIIXOHZPFSWBIUCDAASYXFSHEWNVKXGGLVPVDMKPNXHSHOPCIPGXLENOQCGVGBCPBRXLMOFAUSSFFYUIUGHBHAYESRBVUAZMYDYNENRVBPBGZLWMJGDWNZYFIYCUZMDZQMXDLZIQRKJAAUAWRTZNLLLURTKH");
    msg.op = 105U;
    msg.sched_time = 0.8113959376900329;

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
    msg.setTimeStamp(0.3443672257701701);
    msg.setSource(52475U);
    msg.setSourceEntity(15U);
    msg.setDestination(33173U);
    msg.setDestinationEntity(153U);
    msg.name.assign("ZWQRKMIONGDSTXKGJOQBOAJCLVZTPSKROQVAAPYEMIXONCEFJMNPCGDDYVMHSGPEUAHJRWACFLKBURCESTWYKTXTMGWOHTXFZTEPUISFORJNXMPBNQBCOWJBVNHZJPXBWHUKDRITLZWFEIEFQDYICEKDRKUJNBUYUFFTVM");
    msg.op = 67U;
    msg.sched_time = 0.806126987159694;

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
    msg.setTimeStamp(0.17742090714839942);
    msg.setSource(53748U);
    msg.setSourceEntity(105U);
    msg.setDestination(17482U);
    msg.setDestinationEntity(165U);
    msg.name.assign("MYRALKPEGPXEYUPFSHMHSNZKNNHFUQJZQOMNKCBBSREWPURZLSUJRBIQACXSWGEFRTHEKEVWLVYUQMJRUUHWGYCUVTDAFZPJELIQBMOIEDCYGMKYWIYEOSJDSGQRIQVOCQPVOVLJYSLDOGVYNDEXWCBXAMATCDWJZOIGPZTLFTHAHRLFJPR");
    msg.op = 159U;
    msg.sched_time = 0.40916542380445253;

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
    msg.setTimeStamp(0.7359696141650682);
    msg.setSource(23442U);
    msg.setSourceEntity(194U);
    msg.setDestination(34502U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.7263499403682997);
    msg.setSource(51919U);
    msg.setSourceEntity(6U);
    msg.setDestination(19174U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.689366153965644);
    msg.setSource(48483U);
    msg.setSourceEntity(70U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.20018459368819663);
    msg.setSource(61429U);
    msg.setSourceEntity(69U);
    msg.setDestination(18562U);
    msg.setDestinationEntity(116U);
    msg.name.assign("BVFOZPBPEWZWSTOBIDTZTFELRUPOMSHFOKDLQUYGFIRMKNMJCFTVJLGKOQNHNYPDWRCLTXVIWZMXGDEEJXWRKHABRBIHYXQUYSYBLVSHKVMGKMUZUOVGBDXGSQYIWIHKHQXBRQCKMNLOTGEDLDPJJXKUPDFHQALEFRJHSNNVOIYSBNJPLCRPYMTWZAAZEREBCEFWMY");
    msg.state = 138U;

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
    msg.setTimeStamp(0.4808766693632067);
    msg.setSource(25932U);
    msg.setSourceEntity(142U);
    msg.setDestination(36062U);
    msg.setDestinationEntity(198U);
    msg.name.assign("JPCJIUANGWPC");
    msg.state = 177U;

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
    msg.setTimeStamp(0.022398522124638665);
    msg.setSource(63793U);
    msg.setSourceEntity(215U);
    msg.setDestination(56251U);
    msg.setDestinationEntity(68U);
    msg.name.assign("NPDCSYNUIBUWYXRQOEKJSRVDYAAKDPRTWYEWSDMNJXGAYTEXROELPMTXGANXAILCSYRMJGLSFYJGDEPPH");
    msg.state = 220U;

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
    msg.setTimeStamp(0.9782243309905115);
    msg.setSource(11187U);
    msg.setSourceEntity(131U);
    msg.setDestination(25513U);
    msg.setDestinationEntity(167U);
    msg.name.assign("MRITZJQAZUYVXBTRFJGFKEPDNJSHCBUGMCDNQLHTNUGSIOKBOVEMKLJFXMQAGZLVFKIXZIKVRXEIZQRMEXWPDNOEKOAMUDRYOPBICARJDEBJXESCPRSDGHOILCBHLMFYBTXOUHYH");
    msg.value = 163U;

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
    msg.setTimeStamp(0.46095779163804007);
    msg.setSource(39331U);
    msg.setSourceEntity(63U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(66U);
    msg.name.assign("WSMGLKGTYMPDLQKHJHHFDXKGFVAPXNQSTMBOEOCEADMLWMEBENGUYNHYDPSGBJWIYSNZACKDZKKC");
    msg.value = 136U;

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
    msg.setTimeStamp(0.9302811921912475);
    msg.setSource(26540U);
    msg.setSourceEntity(203U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(99U);
    msg.name.assign("GUHINYEXITRWBDIRONVJRSEIPTVFLKQVYMFMHAWYLUDETDFTXXFLFCBPKTWJMOQJTPMANMOVHBXWROEYDFEAPSIJGABQMNBBNAHO");
    msg.value = 161U;

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
    msg.setTimeStamp(0.9645512705444117);
    msg.setSource(27940U);
    msg.setSourceEntity(206U);
    msg.setDestination(28411U);
    msg.setDestinationEntity(26U);
    msg.name.assign("BHTILFVGJPWDQZSYEBPFLFISPYBRMUKXXWUBHM");

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
    msg.setTimeStamp(0.8396553781316745);
    msg.setSource(6215U);
    msg.setSourceEntity(211U);
    msg.setDestination(54084U);
    msg.setDestinationEntity(26U);
    msg.name.assign("UQOSKVHJFXVOEETHQNEIPQYJTAHKBRCQRKXCHGQNHNKJQSZCPXTVSXPYMUKXGPIYZUGFIFLAGXSAUYPESFQJBLLEQCWRNVUWAZNZTKPOBCYLNVLFDDWRZTXTHKOEOHTIFIWNIJGXDFVYZNHRBSQHMDEOSUJWGOSRTBYFMABIRQXETUGDPCGBWJUDNYRMCFGREUISLIASVPAKR");

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
    msg.setTimeStamp(0.7268660206860614);
    msg.setSource(19417U);
    msg.setSourceEntity(210U);
    msg.setDestination(25153U);
    msg.setDestinationEntity(190U);
    msg.name.assign("RYWFWOPPRLWKEJZSGDZIQOHJIZIEJAFZJQYCMTIJSGZJUMVUOVGKBTUMYRGPZSLLCUHVUBLNUAERQJDETUIWIHODZKAXNLNZTEPVIYEFZNPPETWQDBKYBKXXDHXYSMMASWVAZGMXTPPVICUDVOCCDRJKCSNLB");

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
    msg.setTimeStamp(0.3095499589772336);
    msg.setSource(48612U);
    msg.setSourceEntity(146U);
    msg.setDestination(22800U);
    msg.setDestinationEntity(85U);
    msg.name.assign("MGMIPPOZSLHPDFJZWFCMQOTSNAGDTYBRKPHWEHWQLFMWQLISECOBSVNRMBTYGUJWWKWWJFNKTBGHNSBQCJQZCGGZXXCAOHKXXACIUTLMJVRRYPJEYYDDIYLTYAOYAAZCOOPKAUXIJVFTCXRTBXDSGLZLBTFSZBFGSQKQLPDAZXSIDBPHQZMRGPIAKFOUUVJTJLGNVIHMYVXQUESUVEZCUEKHJOYHMMWNNNEAINDBVDIPRUFXEVHRK");
    msg.value = 118U;

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
    msg.setTimeStamp(0.9019820435094321);
    msg.setSource(7542U);
    msg.setSourceEntity(216U);
    msg.setDestination(63629U);
    msg.setDestinationEntity(22U);
    msg.name.assign("CEAMUOVDZB");
    msg.value = 94U;

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
    msg.setTimeStamp(0.23254826435977338);
    msg.setSource(39225U);
    msg.setSourceEntity(50U);
    msg.setDestination(20447U);
    msg.setDestinationEntity(167U);
    msg.name.assign("MNVPBLJDMZTIVFUSAYYHULSROSZHFNRPLTODRHSNEUJRTELRUEXMGVKJIBAXJNRIEU");
    msg.value = 179U;

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
    msg.setTimeStamp(0.7191319603619664);
    msg.setSource(11649U);
    msg.setSourceEntity(220U);
    msg.setDestination(51590U);
    msg.setDestinationEntity(150U);
    msg.id = 130U;
    msg.period = 2267294968U;
    msg.duty_cycle = 3048723346U;

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
    msg.setTimeStamp(0.5467476118650381);
    msg.setSource(37288U);
    msg.setSourceEntity(35U);
    msg.setDestination(50703U);
    msg.setDestinationEntity(53U);
    msg.id = 222U;
    msg.period = 1320292118U;
    msg.duty_cycle = 4119866307U;

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
    msg.setTimeStamp(0.3628288595366961);
    msg.setSource(25293U);
    msg.setSourceEntity(116U);
    msg.setDestination(36116U);
    msg.setDestinationEntity(72U);
    msg.id = 207U;
    msg.period = 3856819644U;
    msg.duty_cycle = 3146387320U;

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
    msg.setTimeStamp(0.0017380169105596366);
    msg.setSource(59377U);
    msg.setSourceEntity(155U);
    msg.setDestination(59529U);
    msg.setDestinationEntity(35U);
    msg.id = 121U;
    msg.period = 688560858U;
    msg.duty_cycle = 251375080U;

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
    msg.setTimeStamp(0.4306679931865227);
    msg.setSource(45590U);
    msg.setSourceEntity(122U);
    msg.setDestination(37271U);
    msg.setDestinationEntity(158U);
    msg.id = 167U;
    msg.period = 3358859044U;
    msg.duty_cycle = 203184908U;

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
    msg.setTimeStamp(0.7916735933321316);
    msg.setSource(22705U);
    msg.setSourceEntity(211U);
    msg.setDestination(27644U);
    msg.setDestinationEntity(235U);
    msg.id = 238U;
    msg.period = 3525554302U;
    msg.duty_cycle = 656323680U;

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
    msg.setTimeStamp(0.8676926753909447);
    msg.setSource(46088U);
    msg.setSourceEntity(160U);
    msg.setDestination(62217U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.6685393851345318;
    msg.lon = 0.39480690289726816;
    msg.height = 0.27572637328700156;
    msg.x = 0.17569881922696928;
    msg.y = 0.3895988384309468;
    msg.z = 0.9247872546523248;
    msg.phi = 0.36374030924282075;
    msg.theta = 0.17628949415685058;
    msg.psi = 0.026555134640614875;
    msg.u = 0.6163653068840996;
    msg.v = 0.036197747287596393;
    msg.w = 0.42505276106811885;
    msg.vx = 0.5433976647409848;
    msg.vy = 0.4044662243232562;
    msg.vz = 0.008524418683391155;
    msg.p = 0.76076928907614;
    msg.q = 0.7436876573309062;
    msg.r = 0.1406888465589452;
    msg.depth = 0.22239814221210585;
    msg.alt = 0.42080213345775286;

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
    msg.setTimeStamp(0.34223863638565377);
    msg.setSource(7388U);
    msg.setSourceEntity(68U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.8889970587886831;
    msg.lon = 0.25741545615692296;
    msg.height = 0.09003179917502024;
    msg.x = 0.25698185265067686;
    msg.y = 0.4397222600077725;
    msg.z = 0.08238195905597812;
    msg.phi = 0.33612939576801915;
    msg.theta = 0.19509092666250083;
    msg.psi = 0.09023744075037488;
    msg.u = 0.07601702780944097;
    msg.v = 0.0790789387133285;
    msg.w = 0.41483616853512817;
    msg.vx = 0.8909492607142109;
    msg.vy = 0.09003452815797908;
    msg.vz = 0.5628392823174623;
    msg.p = 0.6466720078596552;
    msg.q = 0.4364640209231221;
    msg.r = 0.837726973540908;
    msg.depth = 0.241601921000708;
    msg.alt = 0.18139871449972278;

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
    msg.setTimeStamp(0.41388243766710786);
    msg.setSource(52886U);
    msg.setSourceEntity(231U);
    msg.setDestination(58345U);
    msg.setDestinationEntity(248U);
    msg.lat = 0.8014940274566461;
    msg.lon = 0.3370372502403268;
    msg.height = 0.9374168948336215;
    msg.x = 0.1688603425061248;
    msg.y = 0.9377024037127083;
    msg.z = 0.798632868750231;
    msg.phi = 0.5571307948391278;
    msg.theta = 0.27903116280132245;
    msg.psi = 0.360997020063345;
    msg.u = 0.8803621880099429;
    msg.v = 0.05363243471068535;
    msg.w = 0.6405763086729811;
    msg.vx = 0.7860631080986737;
    msg.vy = 0.3557961416598695;
    msg.vz = 0.9744187249672943;
    msg.p = 0.7071608632703709;
    msg.q = 0.05352441605773017;
    msg.r = 0.873878485017228;
    msg.depth = 0.721504880663608;
    msg.alt = 0.7075984951090034;

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
    msg.setTimeStamp(0.6681594784041808);
    msg.setSource(7336U);
    msg.setSourceEntity(115U);
    msg.setDestination(44255U);
    msg.setDestinationEntity(169U);
    msg.x = 0.9480255852757167;
    msg.y = 0.8269812485975705;
    msg.z = 0.19084418716435114;

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
    msg.setTimeStamp(0.27330054798231673);
    msg.setSource(1146U);
    msg.setSourceEntity(14U);
    msg.setDestination(27247U);
    msg.setDestinationEntity(179U);
    msg.x = 0.7223906242276069;
    msg.y = 0.46900054029946325;
    msg.z = 0.5635383147807674;

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
    msg.setTimeStamp(0.19182544047163053);
    msg.setSource(27333U);
    msg.setSourceEntity(9U);
    msg.setDestination(1296U);
    msg.setDestinationEntity(219U);
    msg.x = 0.3264651022519819;
    msg.y = 0.04146378579075205;
    msg.z = 0.020163843087737;

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
    msg.setTimeStamp(0.1778076483147707);
    msg.setSource(17607U);
    msg.setSourceEntity(249U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(200U);
    msg.value = 0.6545839504640127;

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
    msg.setTimeStamp(0.48632711323195565);
    msg.setSource(36409U);
    msg.setSourceEntity(198U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(73U);
    msg.value = 0.39737944597578645;

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
    msg.setTimeStamp(0.37111099981634765);
    msg.setSource(1138U);
    msg.setSourceEntity(73U);
    msg.setDestination(64147U);
    msg.setDestinationEntity(4U);
    msg.value = 0.41618163561553034;

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
    msg.setTimeStamp(0.38148096261753417);
    msg.setSource(54411U);
    msg.setSourceEntity(191U);
    msg.setDestination(6694U);
    msg.setDestinationEntity(81U);
    msg.value = 0.23995730208587018;

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
    msg.setTimeStamp(0.2835612466427663);
    msg.setSource(10777U);
    msg.setSourceEntity(95U);
    msg.setDestination(17113U);
    msg.setDestinationEntity(248U);
    msg.value = 0.4596943128176001;

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
    msg.setTimeStamp(0.5530161593594914);
    msg.setSource(49080U);
    msg.setSourceEntity(36U);
    msg.setDestination(25695U);
    msg.setDestinationEntity(212U);
    msg.value = 0.996427444533839;

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
    msg.setTimeStamp(0.6849243577504791);
    msg.setSource(52666U);
    msg.setSourceEntity(66U);
    msg.setDestination(19961U);
    msg.setDestinationEntity(153U);
    msg.x = 0.8529573121846363;
    msg.y = 0.28921719395464085;
    msg.z = 0.3243801866891708;
    msg.phi = 0.9052124694341639;
    msg.theta = 0.2755113925463515;
    msg.psi = 0.5688045413860657;
    msg.p = 0.7675507524192847;
    msg.q = 0.8988500197043631;
    msg.r = 0.8756298792839576;
    msg.u = 0.6225742247859924;
    msg.v = 0.9430521225415843;
    msg.w = 0.6793154328102945;
    msg.bias_psi = 0.33764058732041846;
    msg.bias_r = 0.09431583546917832;

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
    msg.setTimeStamp(0.723195943715558);
    msg.setSource(10989U);
    msg.setSourceEntity(187U);
    msg.setDestination(1905U);
    msg.setDestinationEntity(75U);
    msg.x = 0.4481657283309729;
    msg.y = 0.004250282684557405;
    msg.z = 0.09778399644780966;
    msg.phi = 0.4870466980509991;
    msg.theta = 0.8429853344787711;
    msg.psi = 0.39748304426863423;
    msg.p = 0.3265722270078345;
    msg.q = 0.8954569803577634;
    msg.r = 0.9747197619669886;
    msg.u = 0.016925186246280366;
    msg.v = 0.7316926341315134;
    msg.w = 0.6646384322382403;
    msg.bias_psi = 0.8257828165245821;
    msg.bias_r = 0.7248013125051307;

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
    msg.setTimeStamp(0.1699698937368167);
    msg.setSource(44817U);
    msg.setSourceEntity(143U);
    msg.setDestination(27587U);
    msg.setDestinationEntity(245U);
    msg.x = 0.649859182841728;
    msg.y = 0.5085766718282788;
    msg.z = 0.16414493514538875;
    msg.phi = 0.3830539359873746;
    msg.theta = 0.02753532725686947;
    msg.psi = 0.5946739713265318;
    msg.p = 0.5825528337051202;
    msg.q = 0.24296010429254744;
    msg.r = 0.3452846991445784;
    msg.u = 0.2447694763243241;
    msg.v = 0.12074277144236867;
    msg.w = 0.08587043415789197;
    msg.bias_psi = 0.7068438648492634;
    msg.bias_r = 0.09867215355436831;

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
    msg.setTimeStamp(0.36646700684304667);
    msg.setSource(1394U);
    msg.setSourceEntity(142U);
    msg.setDestination(34482U);
    msg.setDestinationEntity(207U);
    msg.bias_psi = 0.41572571182695695;
    msg.bias_r = 0.5131210372264255;
    msg.cog = 0.804951510459258;
    msg.cyaw = 0.6785046551671209;
    msg.lbl_rej_level = 0.5544611904314733;
    msg.gps_rej_level = 0.8610946357629861;
    msg.custom_x = 0.3028527010877524;
    msg.custom_y = 0.0816295460908939;
    msg.custom_z = 0.7331042988635019;

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
    msg.setTimeStamp(0.6499432866820848);
    msg.setSource(2089U);
    msg.setSourceEntity(178U);
    msg.setDestination(24819U);
    msg.setDestinationEntity(43U);
    msg.bias_psi = 0.11549354364943742;
    msg.bias_r = 0.10408011347222823;
    msg.cog = 0.7690923625947557;
    msg.cyaw = 0.6371560545287749;
    msg.lbl_rej_level = 0.8986533933946105;
    msg.gps_rej_level = 0.9635884942228331;
    msg.custom_x = 0.12036208133119819;
    msg.custom_y = 0.3056227494629762;
    msg.custom_z = 0.488529662866396;

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
    msg.setTimeStamp(0.12601969099496324);
    msg.setSource(29497U);
    msg.setSourceEntity(74U);
    msg.setDestination(58333U);
    msg.setDestinationEntity(236U);
    msg.bias_psi = 0.8199608361449718;
    msg.bias_r = 0.2524825812244066;
    msg.cog = 0.24959522592314343;
    msg.cyaw = 0.692741495873849;
    msg.lbl_rej_level = 0.12701443713768934;
    msg.gps_rej_level = 0.31897065408846437;
    msg.custom_x = 0.7119909730570041;
    msg.custom_y = 0.3879899631377216;
    msg.custom_z = 0.9269295151309866;

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
    msg.setTimeStamp(0.7736783374551643);
    msg.setSource(19576U);
    msg.setSourceEntity(180U);
    msg.setDestination(3922U);
    msg.setDestinationEntity(140U);
    msg.utc_time = 0.3717483801555329;
    msg.reason = 56U;

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
    msg.setTimeStamp(0.43659821553166456);
    msg.setSource(40858U);
    msg.setSourceEntity(102U);
    msg.setDestination(24717U);
    msg.setDestinationEntity(13U);
    msg.utc_time = 0.6973244635674456;
    msg.reason = 181U;

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
    msg.setTimeStamp(0.19960971282747297);
    msg.setSource(60204U);
    msg.setSourceEntity(23U);
    msg.setDestination(60900U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.09906972332652819;
    msg.reason = 7U;

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
    msg.setTimeStamp(0.20174961565252314);
    msg.setSource(65147U);
    msg.setSourceEntity(162U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(17U);
    msg.id = 89U;
    msg.range = 0.5869702937244802;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.016936786211471766);
    msg.setSource(20837U);
    msg.setSourceEntity(111U);
    msg.setDestination(42397U);
    msg.setDestinationEntity(55U);
    msg.id = 197U;
    msg.range = 0.09290572131826869;
    msg.acceptance = 194U;

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
    msg.setTimeStamp(0.5836176097914154);
    msg.setSource(20897U);
    msg.setSourceEntity(135U);
    msg.setDestination(14646U);
    msg.setDestinationEntity(211U);
    msg.id = 79U;
    msg.range = 0.9027922567622594;
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
    msg.setTimeStamp(0.7516571617579636);
    msg.setSource(52716U);
    msg.setSourceEntity(29U);
    msg.setDestination(38417U);
    msg.setDestinationEntity(39U);
    msg.type = 77U;
    msg.reason = 9U;
    msg.value = 0.7456214864303666;
    msg.timestep = 0.9999121132243012;

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
    msg.setTimeStamp(0.0001360812147656043);
    msg.setSource(58323U);
    msg.setSourceEntity(119U);
    msg.setDestination(54492U);
    msg.setDestinationEntity(87U);
    msg.type = 173U;
    msg.reason = 227U;
    msg.value = 0.8809421813512411;
    msg.timestep = 0.33101666125973306;

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
    msg.setTimeStamp(0.18466045443493662);
    msg.setSource(55040U);
    msg.setSourceEntity(126U);
    msg.setDestination(15445U);
    msg.setDestinationEntity(32U);
    msg.type = 5U;
    msg.reason = 80U;
    msg.value = 0.12607203839712033;
    msg.timestep = 0.8572708419524702;

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
    msg.setTimeStamp(0.015533376048812886);
    msg.setSource(30695U);
    msg.setSourceEntity(41U);
    msg.setDestination(49348U);
    msg.setDestinationEntity(242U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WPYMCAAHPMBEEPDFGYNPMGJMBQRDGCFHARHWNGOBHEXZIKLVBKHTSOEVSUPCNUKYZAVRBKAZPBPLIIDNOYKQOWRVFQGTLUOHUJYQQONVLXSCIGNXCWOMUZJILNXOWJHQDTFFHSAMKJEJQAP");
    tmp_msg_0.lat = 0.042638398249888576;
    tmp_msg_0.lon = 0.5626123129883196;
    tmp_msg_0.depth = 0.679009583579979;
    tmp_msg_0.query_channel = 129U;
    tmp_msg_0.reply_channel = 149U;
    tmp_msg_0.transponder_delay = 174U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9636863744948906;
    msg.y = 0.3533452171397402;
    msg.var_x = 0.1431770920379184;
    msg.var_y = 0.02541698938104675;
    msg.distance = 0.2371859663029846;

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
    msg.setTimeStamp(0.2907038107094727);
    msg.setSource(3993U);
    msg.setSourceEntity(89U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(240U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VFXKATGASIMLFCGSEOFNYWURJEIMYSCATRPPIYCBVUGLXAYZCKDWLCGPSVFSHAVHMKJHEA");
    tmp_msg_0.lat = 0.7081506286095175;
    tmp_msg_0.lon = 0.6075053802687311;
    tmp_msg_0.depth = 0.7911488427508621;
    tmp_msg_0.query_channel = 98U;
    tmp_msg_0.reply_channel = 177U;
    tmp_msg_0.transponder_delay = 26U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.07308001594912483;
    msg.y = 0.0252777028752178;
    msg.var_x = 0.13719914199453953;
    msg.var_y = 0.1836427006946354;
    msg.distance = 0.39052872993701926;

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
    msg.setTimeStamp(0.9991876273327129);
    msg.setSource(42478U);
    msg.setSourceEntity(235U);
    msg.setDestination(2139U);
    msg.setDestinationEntity(112U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NYVJHRFJKKQZVWTRDYNQUKDMMXGOMZHBCJPCCLCFSKITEEHJAJCSWRDPGBPHTOKMRUAXLFCMXQUUGISLNYVBVDIMTQWNUAYDOOJVQHWIATSXZNEVRUPWANLJREBWXFV");
    tmp_msg_0.lat = 0.7120864928322576;
    tmp_msg_0.lon = 0.3428928964159994;
    tmp_msg_0.depth = 0.08795794588654404;
    tmp_msg_0.query_channel = 181U;
    tmp_msg_0.reply_channel = 94U;
    tmp_msg_0.transponder_delay = 124U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3221415402438763;
    msg.y = 0.3368280529232788;
    msg.var_x = 0.8255487106770133;
    msg.var_y = 0.5084462244998688;
    msg.distance = 0.9434734553393134;

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
    msg.setTimeStamp(0.8071580214548318);
    msg.setSource(40971U);
    msg.setSourceEntity(90U);
    msg.setDestination(32092U);
    msg.setDestinationEntity(160U);
    msg.state = 103U;

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
    msg.setTimeStamp(0.2400606822910707);
    msg.setSource(42624U);
    msg.setSourceEntity(29U);
    msg.setDestination(26329U);
    msg.setDestinationEntity(242U);
    msg.state = 168U;

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
    msg.setTimeStamp(0.16210077013758584);
    msg.setSource(55859U);
    msg.setSourceEntity(32U);
    msg.setDestination(56346U);
    msg.setDestinationEntity(109U);
    msg.state = 48U;

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
    msg.setTimeStamp(0.5188999084300603);
    msg.setSource(48879U);
    msg.setSourceEntity(92U);
    msg.setDestination(25010U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5629410224726665;
    msg.y = 0.31505011067009436;
    msg.z = 0.9155142832176025;

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
    msg.setTimeStamp(0.2705667096869191);
    msg.setSource(62883U);
    msg.setSourceEntity(86U);
    msg.setDestination(52750U);
    msg.setDestinationEntity(185U);
    msg.x = 0.7172169725583766;
    msg.y = 0.05216534694689334;
    msg.z = 0.08450055705086501;

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
    msg.setTimeStamp(0.24389832075276874);
    msg.setSource(37741U);
    msg.setSourceEntity(43U);
    msg.setDestination(54636U);
    msg.setDestinationEntity(134U);
    msg.x = 0.9937813248068205;
    msg.y = 0.1847981931840328;
    msg.z = 0.7473472550164576;

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
    msg.setTimeStamp(0.006344183709514506);
    msg.setSource(25229U);
    msg.setSourceEntity(127U);
    msg.setDestination(15685U);
    msg.setDestinationEntity(184U);
    msg.value = 0.792582516854403;

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
    msg.setTimeStamp(0.7563257810083434);
    msg.setSource(34073U);
    msg.setSourceEntity(157U);
    msg.setDestination(15953U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9839159517500766;

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
    msg.setTimeStamp(0.9491856682014153);
    msg.setSource(37560U);
    msg.setSourceEntity(229U);
    msg.setDestination(56429U);
    msg.setDestinationEntity(253U);
    msg.value = 0.322933186947129;

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
    msg.setTimeStamp(0.6498104782733085);
    msg.setSource(25133U);
    msg.setSourceEntity(200U);
    msg.setDestination(57149U);
    msg.setDestinationEntity(182U);
    msg.value = 0.9271064010942374;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.7840487485664909);
    msg.setSource(27102U);
    msg.setSourceEntity(92U);
    msg.setDestination(8583U);
    msg.setDestinationEntity(142U);
    msg.value = 0.6733034378310914;
    msg.z_units = 242U;

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
    msg.setTimeStamp(0.7503190204104945);
    msg.setSource(1632U);
    msg.setSourceEntity(130U);
    msg.setDestination(43277U);
    msg.setDestinationEntity(127U);
    msg.value = 0.1880683178161302;
    msg.z_units = 18U;

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
    msg.setTimeStamp(0.5023890113874002);
    msg.setSource(6792U);
    msg.setSourceEntity(214U);
    msg.setDestination(62759U);
    msg.setDestinationEntity(22U);
    msg.value = 0.3376752379516912;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.600304865306543);
    msg.setSource(34549U);
    msg.setSourceEntity(147U);
    msg.setDestination(51327U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7937451864707994;
    msg.speed_units = 175U;

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
    msg.setTimeStamp(0.30114762559638264);
    msg.setSource(27927U);
    msg.setSourceEntity(187U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(163U);
    msg.value = 0.07754689939889914;
    msg.speed_units = 27U;

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
    msg.setTimeStamp(0.0013308034245275158);
    msg.setSource(14840U);
    msg.setSourceEntity(112U);
    msg.setDestination(64471U);
    msg.setDestinationEntity(5U);
    msg.value = 0.8120536112907311;

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
    msg.setTimeStamp(0.7983484116682193);
    msg.setSource(29618U);
    msg.setSourceEntity(55U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9679469582276656;

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
    msg.setTimeStamp(0.5919846364644256);
    msg.setSource(63171U);
    msg.setSourceEntity(93U);
    msg.setDestination(33595U);
    msg.setDestinationEntity(78U);
    msg.value = 0.04949913601064304;

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
    msg.setTimeStamp(0.37419882947267225);
    msg.setSource(18640U);
    msg.setSourceEntity(95U);
    msg.setDestination(55020U);
    msg.setDestinationEntity(85U);
    msg.value = 0.8450720180432216;

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
    msg.setTimeStamp(0.0808747115477888);
    msg.setSource(21799U);
    msg.setSourceEntity(124U);
    msg.setDestination(59016U);
    msg.setDestinationEntity(120U);
    msg.value = 0.7898512480393697;

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
    msg.setTimeStamp(0.7869154003626989);
    msg.setSource(51902U);
    msg.setSourceEntity(241U);
    msg.setDestination(43211U);
    msg.setDestinationEntity(167U);
    msg.value = 0.4848714997324365;

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
    msg.setTimeStamp(0.7631633663137735);
    msg.setSource(17664U);
    msg.setSourceEntity(108U);
    msg.setDestination(56769U);
    msg.setDestinationEntity(27U);
    msg.value = 0.4506881563311358;

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
    msg.setTimeStamp(0.4904809083134317);
    msg.setSource(40768U);
    msg.setSourceEntity(163U);
    msg.setDestination(15879U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8816594665641682;

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
    msg.setTimeStamp(0.30124604858227966);
    msg.setSource(21468U);
    msg.setSourceEntity(109U);
    msg.setDestination(61042U);
    msg.setDestinationEntity(61U);
    msg.value = 0.5342641412672744;

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
    msg.setTimeStamp(0.027085597462371602);
    msg.setSource(31918U);
    msg.setSourceEntity(158U);
    msg.setDestination(38985U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 2806376759U;
    msg.start_lat = 0.21890299641314048;
    msg.start_lon = 0.13020114389753457;
    msg.start_z = 0.9744874560418703;
    msg.start_z_units = 85U;
    msg.end_lat = 0.9155906294363492;
    msg.end_lon = 0.4559691381406624;
    msg.end_z = 0.02821344837166262;
    msg.end_z_units = 106U;
    msg.speed = 0.221513430872196;
    msg.speed_units = 108U;
    msg.lradius = 0.08048568205630502;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.773256726936644);
    msg.setSource(62333U);
    msg.setSourceEntity(197U);
    msg.setDestination(16063U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 491488616U;
    msg.start_lat = 0.536835146040927;
    msg.start_lon = 0.21215841654878043;
    msg.start_z = 0.5422985825537223;
    msg.start_z_units = 40U;
    msg.end_lat = 0.5213903472252365;
    msg.end_lon = 0.4992876580577157;
    msg.end_z = 0.9119155475064509;
    msg.end_z_units = 241U;
    msg.speed = 0.5442797028157697;
    msg.speed_units = 5U;
    msg.lradius = 0.5307279574561866;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.34964402649595305);
    msg.setSource(33099U);
    msg.setSourceEntity(73U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(23U);
    msg.path_ref = 3555973195U;
    msg.start_lat = 0.15417854146356924;
    msg.start_lon = 0.2538818579163262;
    msg.start_z = 0.2296429512411482;
    msg.start_z_units = 207U;
    msg.end_lat = 0.3388301093513024;
    msg.end_lon = 0.41017664868953085;
    msg.end_z = 0.8806822310938603;
    msg.end_z_units = 186U;
    msg.speed = 0.7566770223202944;
    msg.speed_units = 21U;
    msg.lradius = 0.2273509399419682;
    msg.flags = 111U;

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
    msg.setTimeStamp(0.16409936589387097);
    msg.setSource(20001U);
    msg.setSourceEntity(241U);
    msg.setDestination(29479U);
    msg.setDestinationEntity(218U);
    msg.x = 0.6400778804205101;
    msg.y = 0.8191293141320493;
    msg.z = 0.4685419085284329;
    msg.k = 0.7006164859949184;
    msg.m = 0.007446745441365699;
    msg.n = 0.028866240503952145;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.9991654915193783);
    msg.setSource(52966U);
    msg.setSourceEntity(220U);
    msg.setDestination(27599U);
    msg.setDestinationEntity(75U);
    msg.x = 0.4769992703848881;
    msg.y = 0.00456286738417;
    msg.z = 0.1484593349586526;
    msg.k = 0.08695846300975352;
    msg.m = 0.8143609086906719;
    msg.n = 0.18776184950925834;
    msg.flags = 232U;

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
    msg.setTimeStamp(0.14289883165376516);
    msg.setSource(17600U);
    msg.setSourceEntity(1U);
    msg.setDestination(30918U);
    msg.setDestinationEntity(147U);
    msg.x = 0.9929434733581242;
    msg.y = 0.3937457375560868;
    msg.z = 0.1414967407050035;
    msg.k = 0.796380072234704;
    msg.m = 0.28329237624013226;
    msg.n = 0.1410073486749619;
    msg.flags = 220U;

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
    msg.setTimeStamp(0.10381339596429418);
    msg.setSource(8625U);
    msg.setSourceEntity(2U);
    msg.setDestination(19221U);
    msg.setDestinationEntity(56U);
    msg.value = 0.4826279236344063;

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
    msg.setTimeStamp(0.9510382438515499);
    msg.setSource(17691U);
    msg.setSourceEntity(83U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(87U);
    msg.value = 0.25078242585828614;

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
    msg.setTimeStamp(0.5643597904207862);
    msg.setSource(31974U);
    msg.setSourceEntity(186U);
    msg.setDestination(21715U);
    msg.setDestinationEntity(117U);
    msg.value = 0.1654016211525864;

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
    msg.setTimeStamp(0.33462888361875653);
    msg.setSource(50303U);
    msg.setSourceEntity(165U);
    msg.setDestination(65147U);
    msg.setDestinationEntity(58U);
    msg.u = 0.5247587075838658;
    msg.v = 0.9503281718490793;
    msg.w = 0.9735082776617591;
    msg.p = 0.8389084201983106;
    msg.q = 0.166225141404579;
    msg.r = 0.9853054684235407;
    msg.flags = 103U;

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
    msg.setTimeStamp(0.0390515699050511);
    msg.setSource(34559U);
    msg.setSourceEntity(222U);
    msg.setDestination(64474U);
    msg.setDestinationEntity(124U);
    msg.u = 0.5719791639102517;
    msg.v = 0.7543885666820692;
    msg.w = 0.42946298175537767;
    msg.p = 0.39266209206916525;
    msg.q = 0.9783266165169564;
    msg.r = 0.38230366032731533;
    msg.flags = 89U;

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
    msg.setTimeStamp(0.7802368487614835);
    msg.setSource(6847U);
    msg.setSourceEntity(36U);
    msg.setDestination(62249U);
    msg.setDestinationEntity(109U);
    msg.u = 0.549638941274986;
    msg.v = 0.026149966313165796;
    msg.w = 0.6101114654227062;
    msg.p = 0.09014083863394029;
    msg.q = 0.5316615403260926;
    msg.r = 0.2996865790231603;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.980501467402818);
    msg.setSource(29054U);
    msg.setSourceEntity(17U);
    msg.setDestination(46479U);
    msg.setDestinationEntity(80U);
    msg.path_ref = 3357296477U;
    msg.start_lat = 0.4123403686961101;
    msg.start_lon = 0.964564544721362;
    msg.start_z = 0.6557357178123523;
    msg.start_z_units = 247U;
    msg.end_lat = 0.8061201809646252;
    msg.end_lon = 0.4564208070608372;
    msg.end_z = 0.836162674055415;
    msg.end_z_units = 142U;
    msg.lradius = 0.9946175723828116;
    msg.flags = 76U;
    msg.x = 0.3624030706896537;
    msg.y = 0.37940499717466225;
    msg.z = 0.2543177725524288;
    msg.vx = 0.46635738440495966;
    msg.vy = 0.017102894267532642;
    msg.vz = 0.2539352423981016;
    msg.course_error = 0.6594123822915495;
    msg.eta = 49081U;

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
    msg.setTimeStamp(0.20997367485605978);
    msg.setSource(31836U);
    msg.setSourceEntity(83U);
    msg.setDestination(32087U);
    msg.setDestinationEntity(2U);
    msg.path_ref = 4057712268U;
    msg.start_lat = 0.4488627651432725;
    msg.start_lon = 0.4556489561824122;
    msg.start_z = 0.4905674360716198;
    msg.start_z_units = 80U;
    msg.end_lat = 0.4450596718878792;
    msg.end_lon = 0.654303327217934;
    msg.end_z = 0.06173938277585023;
    msg.end_z_units = 101U;
    msg.lradius = 0.2398516754943677;
    msg.flags = 78U;
    msg.x = 0.33956110191399813;
    msg.y = 0.4404536352354582;
    msg.z = 0.4683866761694139;
    msg.vx = 0.14912387990217557;
    msg.vy = 0.5737671316676972;
    msg.vz = 0.7760625422110232;
    msg.course_error = 0.11686195126685062;
    msg.eta = 36263U;

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
    msg.setTimeStamp(0.17239392128057518);
    msg.setSource(63795U);
    msg.setSourceEntity(100U);
    msg.setDestination(2107U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 1058400874U;
    msg.start_lat = 0.24820436701161008;
    msg.start_lon = 0.8953179679872971;
    msg.start_z = 0.5821673736627175;
    msg.start_z_units = 217U;
    msg.end_lat = 0.9886124602844506;
    msg.end_lon = 0.8018295381740363;
    msg.end_z = 0.3072574316467054;
    msg.end_z_units = 110U;
    msg.lradius = 0.14938002775400117;
    msg.flags = 10U;
    msg.x = 0.7803339939239426;
    msg.y = 0.0035901393018368255;
    msg.z = 0.44604480100576527;
    msg.vx = 0.3349465253880546;
    msg.vy = 0.13218441029274575;
    msg.vz = 0.14391328025954198;
    msg.course_error = 0.09911442267371273;
    msg.eta = 19941U;

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
    msg.setTimeStamp(0.34345821277293875);
    msg.setSource(42772U);
    msg.setSourceEntity(231U);
    msg.setDestination(20828U);
    msg.setDestinationEntity(167U);
    msg.k = 0.18808817783707565;
    msg.m = 0.2806939862672173;
    msg.n = 0.11653212530572543;

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
    msg.setTimeStamp(0.3915465514092892);
    msg.setSource(60345U);
    msg.setSourceEntity(231U);
    msg.setDestination(42U);
    msg.setDestinationEntity(122U);
    msg.k = 0.29570556623768895;
    msg.m = 0.38198089609236185;
    msg.n = 0.6247399204095317;

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
    msg.setTimeStamp(0.39740872280768513);
    msg.setSource(37435U);
    msg.setSourceEntity(66U);
    msg.setDestination(19451U);
    msg.setDestinationEntity(121U);
    msg.k = 0.9851756121405862;
    msg.m = 0.703483798625961;
    msg.n = 0.14866085739998935;

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
    msg.setTimeStamp(0.5084464049693117);
    msg.setSource(22416U);
    msg.setSourceEntity(226U);
    msg.setDestination(25511U);
    msg.setDestinationEntity(87U);
    msg.p = 0.24457968539129848;
    msg.i = 0.9132519060174742;
    msg.d = 0.6504530859647936;
    msg.a = 0.5404116360987771;

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
    msg.setTimeStamp(0.04887195203628392);
    msg.setSource(32466U);
    msg.setSourceEntity(178U);
    msg.setDestination(23802U);
    msg.setDestinationEntity(59U);
    msg.p = 0.07605733067417053;
    msg.i = 0.9856354332003313;
    msg.d = 0.47128748065542203;
    msg.a = 0.8838375530267556;

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
    msg.setTimeStamp(0.43073993394617094);
    msg.setSource(31570U);
    msg.setSourceEntity(245U);
    msg.setDestination(26684U);
    msg.setDestinationEntity(207U);
    msg.p = 0.0509181188894845;
    msg.i = 0.9538630164994015;
    msg.d = 0.8885897282343902;
    msg.a = 0.9048144162407565;

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
    msg.setTimeStamp(0.1366801699993373);
    msg.setSource(58984U);
    msg.setSourceEntity(169U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(118U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.7711988115396323);
    msg.setSource(65110U);
    msg.setSourceEntity(160U);
    msg.setDestination(46947U);
    msg.setDestinationEntity(84U);
    msg.op = 162U;

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
    msg.setTimeStamp(0.9807811772251666);
    msg.setSource(8880U);
    msg.setSourceEntity(237U);
    msg.setDestination(26697U);
    msg.setDestinationEntity(214U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.023872388879736084);
    msg.setSource(45110U);
    msg.setSourceEntity(39U);
    msg.setDestination(42188U);
    msg.setDestinationEntity(187U);
    msg.timeout = 30053U;
    msg.lat = 0.992749587796233;
    msg.lon = 0.7790269308834276;
    msg.z = 0.49748436876584723;
    msg.z_units = 132U;
    msg.speed = 0.7774033646063608;
    msg.speed_units = 2U;
    msg.roll = 0.47811648996227074;
    msg.pitch = 0.047631100386640535;
    msg.yaw = 0.35468399838114684;
    msg.custom.assign("EWUQFHUASWPAWWTKEKOGTADDPBDXEQKEWKGBFVQROHAXDVQPBKXEFUHMZGKMDZCWMLSOXTMWPJYOVQCLASVCUCMBJETRBNLIFIXBHMLIZTFVIHQZNRBALONRSLSPHNZCBP");

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
    msg.setTimeStamp(0.8296212450607033);
    msg.setSource(6872U);
    msg.setSourceEntity(199U);
    msg.setDestination(2480U);
    msg.setDestinationEntity(190U);
    msg.timeout = 52856U;
    msg.lat = 0.18015180125371366;
    msg.lon = 0.21274361467687097;
    msg.z = 0.7401093760993805;
    msg.z_units = 86U;
    msg.speed = 0.6471506720387888;
    msg.speed_units = 156U;
    msg.roll = 0.5131743244525537;
    msg.pitch = 0.8623414371054848;
    msg.yaw = 0.7863960051915388;
    msg.custom.assign("GVKAZPKMPQWFELJKOGLTMRPFIDXNJBWRXIDWAJIGGRQMJHMKSWAOSZFAGQGACGNOVPLYEREMYSHEDQZVIXMTLVUPKROEKYTKPCUDTOQCIFTXYCTLUZNMSWSXVFITYHDFUBUVZOXBXDIHEHUXYWTAUSQLUHFZRBRQZBOJCUJSPGSVXJCDZTHDWNCDHNKINJPOAJRNBFUBALYBOHYFILCMIQXGWESLEGVNRQEQPRSD");

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
    msg.setTimeStamp(0.2646691604529673);
    msg.setSource(5601U);
    msg.setSourceEntity(110U);
    msg.setDestination(57800U);
    msg.setDestinationEntity(182U);
    msg.timeout = 33590U;
    msg.lat = 0.7819303784302125;
    msg.lon = 0.020847429749268676;
    msg.z = 0.45158739613972987;
    msg.z_units = 179U;
    msg.speed = 0.10799948433209239;
    msg.speed_units = 82U;
    msg.roll = 0.07198355533315526;
    msg.pitch = 0.774197091019993;
    msg.yaw = 0.014619003509560913;
    msg.custom.assign("WGZWLLSWCZATNENGLQIYXDCOMIFJNITBGRTMJIIJXSGXYBFDJRPTOIANYRXCOJHXVQMIHFUEZUESNKTSAPSCQOQRPGONPTBLQMAFWSHHTALNPEWWWDZKKVMAFOVEUNR");

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
    msg.setTimeStamp(0.7251540600147856);
    msg.setSource(23718U);
    msg.setSourceEntity(28U);
    msg.setDestination(13862U);
    msg.setDestinationEntity(170U);
    msg.timeout = 21091U;
    msg.lat = 0.332025645286114;
    msg.lon = 0.600085685798684;
    msg.z = 0.8533230422661906;
    msg.z_units = 168U;
    msg.speed = 0.4248665260972809;
    msg.speed_units = 27U;
    msg.duration = 40087U;
    msg.radius = 0.48887760964866567;
    msg.flags = 43U;
    msg.custom.assign("XFUDZJPBFEOPIJSFFJJZYYVDAQGHSWTUIQVGQUNSOLWGNKCCLWNYIEYGVBBHZCIXOYSGVIJTCBTFRXWPLTRAUPMHWFDXXMOTZONXAOVIVHSAILCTRRIVKBVUJCPTUDYQYOMLVKGZEQKMSZKD");

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
    msg.setTimeStamp(0.6643444089029292);
    msg.setSource(37013U);
    msg.setSourceEntity(103U);
    msg.setDestination(60380U);
    msg.setDestinationEntity(181U);
    msg.timeout = 59948U;
    msg.lat = 0.7162614715031428;
    msg.lon = 0.19358125730140674;
    msg.z = 0.1560852378889629;
    msg.z_units = 177U;
    msg.speed = 0.27103471809385515;
    msg.speed_units = 156U;
    msg.duration = 39732U;
    msg.radius = 0.5964634672170126;
    msg.flags = 91U;
    msg.custom.assign("NZXCOKJIWRSQOOWXFMPSCKVTUQJTP");

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
    msg.setTimeStamp(0.19368413902678727);
    msg.setSource(31500U);
    msg.setSourceEntity(246U);
    msg.setDestination(40140U);
    msg.setDestinationEntity(61U);
    msg.timeout = 3020U;
    msg.lat = 0.13571835570971746;
    msg.lon = 0.5439020728247523;
    msg.z = 0.29473360890823497;
    msg.z_units = 247U;
    msg.speed = 0.4684511784507861;
    msg.speed_units = 71U;
    msg.duration = 34242U;
    msg.radius = 0.1026815233208993;
    msg.flags = 219U;
    msg.custom.assign("SQZMELENKJJPRWQRLUPGDSTNXIUMVGAFDVYUUDPDGFIDWYZZZPPPJODCUWNRXLCACBYUIDEOANKNMAFHNALJBZFKCMSMVACQDYBNJFIKLXHHOGEPNQIXRTWWHR");

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
    msg.setTimeStamp(0.10262928615386513);
    msg.setSource(63126U);
    msg.setSourceEntity(103U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(45U);
    msg.custom.assign("KGTHZSNDVXXINUBWSQPJBDWVTFCKJKPTOHOPKCMWZPABYKRBQTAYEBBNBTFJRQEXFLOZWGVXSRWFZGMSIIFSHHJWJSCHPEJOZVCOMEYWSERMEPZZDOYRAEPJQUAWXDRXLMULAFZCHMFAPAIVLPTHICSJKCRTJYSHUNMCBEHTMGBALYDVF");

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
    msg.setTimeStamp(0.5383506623514558);
    msg.setSource(44706U);
    msg.setSourceEntity(69U);
    msg.setDestination(13010U);
    msg.setDestinationEntity(226U);
    msg.custom.assign("UVLNJGDKMXHFLXGHDDODTGOWWBHUUALOLCZCVFDRNTDDFIRMFOGXPIOEFZMUQEIMRLENCYVIKQMWSGAEVZPRXCHENYXQIPEVANSCJDTRWZZBCCBXYTJXQANTPCHABBJROKKWAYYSEQQIPITMRWMEYWTXJWQTNKJZUBNPXJHKUAHZUYBAFSGJKMZCUIMQGBYVJKVGNLORYPCPSUQGVKSPSLBARFHIZTKHXMFFN");

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
    msg.setTimeStamp(0.48061643730162085);
    msg.setSource(10109U);
    msg.setSourceEntity(65U);
    msg.setDestination(17892U);
    msg.setDestinationEntity(81U);
    msg.custom.assign("SSXHKFKDDYMFXEXYABLLGUUUVQDUSMFTTJGFWGKZ");

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
    msg.setTimeStamp(0.19008250551797579);
    msg.setSource(45570U);
    msg.setSourceEntity(179U);
    msg.setDestination(58255U);
    msg.setDestinationEntity(79U);
    msg.timeout = 35265U;
    msg.lat = 0.5505200447908509;
    msg.lon = 0.6678940954983023;
    msg.z = 0.7261004727827913;
    msg.z_units = 66U;
    msg.duration = 14109U;
    msg.speed = 0.6120920435085991;
    msg.speed_units = 85U;
    msg.type = 179U;
    msg.radius = 0.7302094220251314;
    msg.length = 0.30159759497738925;
    msg.bearing = 0.6779640545402346;
    msg.direction = 93U;
    msg.custom.assign("GVSKOZGYEFYCMQAZYEOUELQOAUZLPYMNNXKLTYBSZQXUPCEIKVTJBMUMMFSTWVQQITAFBGHWTQSMPQPRSDAFNLSIJLLXRUSEDWGZVZJPLPDOIVBTFNPWFIQKDIZMJCWGRNCAVHIJKOCVRAF");

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
    msg.setTimeStamp(0.5407524972484125);
    msg.setSource(728U);
    msg.setSourceEntity(238U);
    msg.setDestination(10422U);
    msg.setDestinationEntity(207U);
    msg.timeout = 17833U;
    msg.lat = 0.34566616802620287;
    msg.lon = 0.02809206608677528;
    msg.z = 0.376634087282659;
    msg.z_units = 1U;
    msg.duration = 30928U;
    msg.speed = 0.358667637536622;
    msg.speed_units = 37U;
    msg.type = 94U;
    msg.radius = 0.6420923606521439;
    msg.length = 0.6923552890726646;
    msg.bearing = 0.5234664228238747;
    msg.direction = 171U;
    msg.custom.assign("LEMDWAMQUIGFSAXSBNCHLHZQJYUPZYQIYEBQCEDAYDHUMWGWBXKJMLDWTJOYAHYQSOYILIVBCWXXUMZFDSRZTCATQBPGFGKXKKVXUOBNRVWFUOCSJBDTSHLIUWGLYNXOXPRGPLFMAYDCDPRVKBCSDFLDXPXTOGKTJAPQMMGHZNAYMK");

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
    msg.setTimeStamp(0.025213185013369444);
    msg.setSource(36152U);
    msg.setSourceEntity(111U);
    msg.setDestination(28618U);
    msg.setDestinationEntity(138U);
    msg.timeout = 39980U;
    msg.lat = 0.9850205485347948;
    msg.lon = 0.687242562040557;
    msg.z = 0.8255242913150272;
    msg.z_units = 186U;
    msg.duration = 50069U;
    msg.speed = 0.47064954516171564;
    msg.speed_units = 148U;
    msg.type = 252U;
    msg.radius = 0.8235829745215079;
    msg.length = 0.9715726980891779;
    msg.bearing = 0.6577414655390419;
    msg.direction = 18U;
    msg.custom.assign("ZPASTZDEGCLSDDKAHYQZJIAMJWBOSUAXEJOYDCOELJPQAKSIGBPSCXXQGLOFKRNMJLOIIWYJOFEMUPMSBHGYBQVHZIRTPFKXDWVJVWCMYXKKVRNNWZEIHCRHLPBPMFDWJOMPXTSRHT");

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
    msg.setTimeStamp(0.38938845927005084);
    msg.setSource(19136U);
    msg.setSourceEntity(191U);
    msg.setDestination(65244U);
    msg.setDestinationEntity(61U);
    msg.duration = 50286U;
    msg.custom.assign("VLHZLTSDFLXQTMYFVJMGHMUILHNIWDMEAQFAYSGVNCWFPYKDXEQODALBDIXCKEKPQPGAJZANGVFARKHEKTQBIEGSGYSMDJTRBYIEKPZOGUINDKWEWZCNHWERQNNOJPZFCXFBHRXNWTTFIUFSVJ");

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
    msg.setTimeStamp(0.7438853362484474);
    msg.setSource(40726U);
    msg.setSourceEntity(57U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(161U);
    msg.duration = 24401U;
    msg.custom.assign("UOJUYJIWXHALQOGQKNKAAJIACXOPHZZWFCVTTNCIFRGYIPCDDATZDTMPBJRVJXEKVPHEVSCNRAZGDSLPEBQQKHVZVSWMDRLUMQNDHQOPNFRWVJKCTBOZYBTZZKGLMIYQMHBDQCUEXLJMVGWXSPUTJLARSLTGDMSFXWEFBHERYCNWCAHMKQEXFKTLXGBYUOOKLOSWTNNZINZSGIDUFRQYENBGFASPYEJIYX");

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
    msg.setTimeStamp(0.6841863668783817);
    msg.setSource(46583U);
    msg.setSourceEntity(97U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(56U);
    msg.duration = 12478U;
    msg.custom.assign("HOEMLJITBTKVBZDTSOECVCZMGJUJRGOYBJVRXCTRQYOARZAEPZLWCYOGFJAGJGHEXQICKLCCGKIQGWMFUEPHSEPXHIUJZXHIVBNNUQRFAULRVR");

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
    msg.setTimeStamp(0.6006982434533032);
    msg.setSource(51473U);
    msg.setSourceEntity(231U);
    msg.setDestination(1789U);
    msg.setDestinationEntity(152U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.3329751416800143;
    tmp_msg_0.z_units = 192U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9891U;
    msg.custom.assign("WODMNAHZVJMPIHFETSXYDGUBDQPIWGFNMAYJYHNCRELGTLVBHXLSLVREBYNZIMCBVQRMJBRKPZIHDPLLDZQCWOWIUHSQIKVTGYGJNKTICYPHSRQKXFSTFBPAKYWTACMNGIHFDTXMUJQBCSOPTUJXQURRKCLEWEDOFWYIXNUAHLXAQGAQOZOJKGZERHVVYTSEPJNGGBCLOWLRZDXXFRMOSUZAMISWBUVZJCFTNVMZEUOCEUAKWDEAYSK");

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
    msg.setTimeStamp(0.6176111199178599);
    msg.setSource(21396U);
    msg.setSourceEntity(195U);
    msg.setDestination(14945U);
    msg.setDestinationEntity(151U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5718301086253319;
    tmp_msg_0.speed_units = 138U;
    msg.control.set(tmp_msg_0);
    msg.duration = 38627U;
    msg.custom.assign("RLNJODTWBQNYKVCPDSOGGAIIMPQWWEAEKNIRTEWIABTBWNZOPEAHXMXXOWDTIDPGHUBJFGSEURXHYONKGCMSZIQYTZRHFGBUPURQSPXDMZPQFYKCZGUTDLHLWRKHWASJQZKVXUXZTGVSLEAZVLJZTBDNRKYLVFDAFNHIYKMOQVSVKUWXIBCYB");

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
    msg.setTimeStamp(0.08834347175195312);
    msg.setSource(24114U);
    msg.setSourceEntity(247U);
    msg.setDestination(50380U);
    msg.setDestinationEntity(19U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.04277690775688625;
    msg.control.set(tmp_msg_0);
    msg.duration = 7936U;
    msg.custom.assign("WYLLUJVDHO");

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
    msg.setTimeStamp(0.4111964490582679);
    msg.setSource(32733U);
    msg.setSourceEntity(208U);
    msg.setDestination(33015U);
    msg.setDestinationEntity(252U);
    msg.timeout = 60420U;
    msg.lat = 0.19720254061422104;
    msg.lon = 0.6210372445774163;
    msg.z = 0.9524046733041293;
    msg.z_units = 174U;
    msg.speed = 0.062344809309090365;
    msg.speed_units = 70U;
    msg.bearing = 0.8656979162850051;
    msg.cross_angle = 0.6837160556049133;
    msg.width = 0.44296802189058926;
    msg.length = 0.343529328931482;
    msg.hstep = 0.3733128732499714;
    msg.coff = 235U;
    msg.alternation = 245U;
    msg.flags = 38U;
    msg.custom.assign("NSDCYJWBGJOFPAYTOZGAMRPBUHBBVKAWULDAXUHKFTPJAZMVPBRPLVIPWCVNIQRQUCWTEAYZQDOQMUHNRQLMLYATEXFCMDSRHVWNKMVGEBTKVISISFOFWRFNIYQZTBGACMITVOKXRSRKHHTLVPACIXSROOEODZUGKHDSIKDPXKZWENCNXMKHIZFFYBELUVEDYCWZEQGMQLGPGBSTJJXIJCBRXWGQLOJNMDX");

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
    msg.setTimeStamp(0.0028857748787994852);
    msg.setSource(56305U);
    msg.setSourceEntity(41U);
    msg.setDestination(38163U);
    msg.setDestinationEntity(15U);
    msg.timeout = 54888U;
    msg.lat = 0.12749336729028093;
    msg.lon = 0.34691835692923734;
    msg.z = 0.9939651636639381;
    msg.z_units = 244U;
    msg.speed = 0.008204674729776484;
    msg.speed_units = 114U;
    msg.bearing = 0.22525234057365406;
    msg.cross_angle = 0.9916177466214009;
    msg.width = 0.2355829132742272;
    msg.length = 0.5234955699788064;
    msg.hstep = 0.2512668465704915;
    msg.coff = 183U;
    msg.alternation = 178U;
    msg.flags = 142U;
    msg.custom.assign("VDEFHMTRZVKWWVQFNYNFPCNIRRNHYNPGPHOLMCHOZXLTLIXVKBJWSJCINWSYQCVBTDEHMQBZUYLGDCGWZSQRJXZMJVSFASOLGTUMNPGMPEGDECAKLIXNJZCYKGZJBYDXWAMRIEWBKESPAEQHYUIBDKXHPULYZMAXFFHJWKGTTFQEYK");

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
    msg.setTimeStamp(0.4836353660870035);
    msg.setSource(59200U);
    msg.setSourceEntity(47U);
    msg.setDestination(29919U);
    msg.setDestinationEntity(109U);
    msg.timeout = 50736U;
    msg.lat = 0.9503608037510465;
    msg.lon = 0.38678464784891997;
    msg.z = 0.34249880954062395;
    msg.z_units = 52U;
    msg.speed = 0.9622589688403012;
    msg.speed_units = 128U;
    msg.bearing = 0.7713613543428979;
    msg.cross_angle = 0.019246160363803;
    msg.width = 0.37292706982118007;
    msg.length = 0.2603487384645192;
    msg.hstep = 0.7428748399427703;
    msg.coff = 205U;
    msg.alternation = 53U;
    msg.flags = 170U;
    msg.custom.assign("TCJLQORSIANPXKZUVUFLASSKHFSJHSRDTRLYXCBIPYKUMRFWRVRPQMHKHYOJHOZRTGXYJGDIFNJTPJSNYSCVDCMOQKDIJLDBULNAEZBDMTFZYHCVCLCAGNASOBTGUWXNXQSCVPPGEFXWEFJXZVT");

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
    msg.setTimeStamp(0.47471060736786663);
    msg.setSource(36397U);
    msg.setSourceEntity(84U);
    msg.setDestination(42517U);
    msg.setDestinationEntity(17U);
    msg.timeout = 18772U;
    msg.lat = 0.6055859155445088;
    msg.lon = 0.46740103791555976;
    msg.z = 0.40465089582098324;
    msg.z_units = 110U;
    msg.speed = 0.5580884242634379;
    msg.speed_units = 29U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8042921564214811;
    tmp_msg_0.y = 0.04998519420178538;
    tmp_msg_0.z = 0.7919660838400924;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KWUJPBGOIZKHOFY");

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
    msg.setTimeStamp(0.6842919674487182);
    msg.setSource(21470U);
    msg.setSourceEntity(91U);
    msg.setDestination(20484U);
    msg.setDestinationEntity(201U);
    msg.timeout = 55170U;
    msg.lat = 0.4836891026187524;
    msg.lon = 0.6157453268853779;
    msg.z = 0.593850099096276;
    msg.z_units = 62U;
    msg.speed = 0.6610862848622386;
    msg.speed_units = 119U;
    msg.custom.assign("LHGOIEYCMXEZVCZLHSDHHKXVIOLFAVILUJKARHGNURXEPPEDMJWBEVZKHQFQYTTZBEYWXYDSGGPTLANYQNRNZQVCVTSKKDJRTYLQFCQILTXAXFSPQTQVYZXKHGBDUYGXJAOSFJU");

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
    msg.setTimeStamp(0.2597591075684239);
    msg.setSource(20805U);
    msg.setSourceEntity(48U);
    msg.setDestination(16068U);
    msg.setDestinationEntity(84U);
    msg.timeout = 56008U;
    msg.lat = 0.7431124476240665;
    msg.lon = 0.5886887039723024;
    msg.z = 0.49496253233880383;
    msg.z_units = 40U;
    msg.speed = 0.8473063251348859;
    msg.speed_units = 213U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.08193442019521846;
    tmp_msg_0.y = 0.20663890462648193;
    tmp_msg_0.z = 0.6164584330597462;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RHBUDYDTNJWDAHKMBKQNYECWHYKZSMSVXFWUKTXBLQOFWTXMPREUHYOIELJORQJTZJARQXFWPZJGYVBKSCSZZQTVCPRCPUTQIWRQWOIKHXDXHVGPYGGTJOFSGNROGLTBAPWFVFJDJECVKHZGISNRHULSALBCOMFSDUWMIAQEMBVL");

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
    msg.setTimeStamp(0.6281064389860981);
    msg.setSource(55993U);
    msg.setSourceEntity(194U);
    msg.setDestination(3060U);
    msg.setDestinationEntity(10U);
    msg.x = 0.22383814176883177;
    msg.y = 0.2532622978564625;
    msg.z = 0.7068370071800882;

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
    msg.setTimeStamp(0.9541599448570757);
    msg.setSource(27922U);
    msg.setSourceEntity(89U);
    msg.setDestination(30448U);
    msg.setDestinationEntity(95U);
    msg.x = 0.324029357430597;
    msg.y = 0.3518556560896443;
    msg.z = 0.8602011688705239;

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
    msg.setTimeStamp(0.9806352881592978);
    msg.setSource(53470U);
    msg.setSourceEntity(37U);
    msg.setDestination(37929U);
    msg.setDestinationEntity(120U);
    msg.x = 0.8373200828156336;
    msg.y = 0.8396138234752942;
    msg.z = 0.5667986813272065;

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
    msg.setTimeStamp(0.5910087872975247);
    msg.setSource(58459U);
    msg.setSourceEntity(90U);
    msg.setDestination(46338U);
    msg.setDestinationEntity(81U);
    msg.timeout = 65455U;
    msg.lat = 0.8489182774795063;
    msg.lon = 0.13427620914499594;
    msg.z = 0.8091498002666391;
    msg.z_units = 64U;
    msg.amplitude = 0.1806383234483543;
    msg.pitch = 0.09492932508433549;
    msg.speed = 0.4088110686589356;
    msg.speed_units = 98U;
    msg.custom.assign("SGPAHXOCBGJFDOEWJBEZYMBKJEPPXAJLBXOZFDTDRNTPVLQSXWQETJLOJBOYSKCWQOLTHVMYVZFCOBURXHFUHVCWNBWPINVSVQKPGYPGQHZNNJUCKSAOG");

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
    msg.setTimeStamp(0.8501716481084067);
    msg.setSource(24532U);
    msg.setSourceEntity(87U);
    msg.setDestination(33945U);
    msg.setDestinationEntity(64U);
    msg.timeout = 7830U;
    msg.lat = 0.3905971885409042;
    msg.lon = 0.8343384567976238;
    msg.z = 0.3648186790304081;
    msg.z_units = 136U;
    msg.amplitude = 0.26702907536410514;
    msg.pitch = 0.3993483647487195;
    msg.speed = 0.5934135793638686;
    msg.speed_units = 207U;
    msg.custom.assign("DFNISXMMJEUHXTCJJOXNWTEISMIGGIGCNWVHNARQSXDJWGBCNNLUPLPGRPCYULRTGOHLHHUZEQRXRLKVKTKUKOPAADRZLCWPDKKOXDMHIMPCSSITMWDFZBLCEUFATWPPFMTWTQDYRTYY");

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
    msg.setTimeStamp(0.8027228770737054);
    msg.setSource(2989U);
    msg.setSourceEntity(209U);
    msg.setDestination(1114U);
    msg.setDestinationEntity(89U);
    msg.timeout = 2867U;
    msg.lat = 0.8162655236230436;
    msg.lon = 0.5305381794971082;
    msg.z = 0.47389041759315076;
    msg.z_units = 133U;
    msg.amplitude = 0.5257818390642016;
    msg.pitch = 0.12008199301837763;
    msg.speed = 0.7747817033450682;
    msg.speed_units = 208U;
    msg.custom.assign("BOQDAWUNATWDFZNSWGJALKCSDTTKLOSKEKXHMLRMWKCHANDAIUXGVTVGTCGNFUYWFJSZOBCXOQQRLHSYGLQCMQLUEMBCOIBNMGSPYVMYEEUVVBIDCZXPHATUXQJDJIEZRNXRPDWEAZOJQLERSYJRMSXHFCAFUJPVHQIKGDIYUJCWXWYOGBTM");

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
    msg.setTimeStamp(0.586405371822925);
    msg.setSource(22227U);
    msg.setSourceEntity(100U);
    msg.setDestination(44682U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.30007265781687154);
    msg.setSource(40074U);
    msg.setSourceEntity(109U);
    msg.setDestination(1305U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.0895904293152443);
    msg.setSource(33383U);
    msg.setSourceEntity(78U);
    msg.setDestination(25630U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.6432712535042617);
    msg.setSource(46443U);
    msg.setSourceEntity(232U);
    msg.setDestination(34991U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.3746711249366639;
    msg.lon = 0.6505640710959607;
    msg.z = 0.2285574947760155;
    msg.z_units = 161U;
    msg.radius = 0.7097927252634215;
    msg.duration = 3550U;
    msg.speed = 0.41863268428155853;
    msg.speed_units = 177U;
    msg.custom.assign("YKRLKXQYOMFIRHUJKJDHEXHGZLXHRNXDUMEQYJNOTWPBMKAWKREZQYQDVZRZOLHES");

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
    msg.setTimeStamp(0.7307109021014229);
    msg.setSource(16405U);
    msg.setSourceEntity(203U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.9883495264685809;
    msg.lon = 0.34572032892036;
    msg.z = 0.3083277827025055;
    msg.z_units = 225U;
    msg.radius = 0.02760556880161602;
    msg.duration = 27922U;
    msg.speed = 0.33663807700555826;
    msg.speed_units = 128U;
    msg.custom.assign("SPFMDWGKPMNXWIPVTJGQLWOJKNKDBLYOOULLEZEHNGZLAFJWLUMVMGSEXCFWKDNBSGBDEZLHQTPBYJAILMTQFXNIZZSFZIUIUONKXOXVPXOJCQPBXJZRVRTWKMGITCVUEAKRZRYDHYGQPUHAIDPQGDHIOJMSEUSUBFFYYKKW");

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
    msg.setTimeStamp(0.9066318075388913);
    msg.setSource(18954U);
    msg.setSourceEntity(5U);
    msg.setDestination(40822U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.41642494332762436;
    msg.lon = 0.894782618811874;
    msg.z = 0.433363232469818;
    msg.z_units = 218U;
    msg.radius = 0.5282276404445615;
    msg.duration = 35771U;
    msg.speed = 0.2910638373007337;
    msg.speed_units = 69U;
    msg.custom.assign("MUYCJGFGYWNPWJOEKGFPQUCPWATHSXYPKOWPMUVJINHCJNJLUBNGQRCNDSXJQMUDN");

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
    msg.setTimeStamp(0.7906897476139475);
    msg.setSource(52913U);
    msg.setSourceEntity(34U);
    msg.setDestination(22707U);
    msg.setDestinationEntity(118U);
    msg.timeout = 15214U;
    msg.flags = 129U;
    msg.lat = 0.35093372517417054;
    msg.lon = 0.8735315776689195;
    msg.start_z = 0.3791477281257436;
    msg.start_z_units = 7U;
    msg.end_z = 0.13930162102176336;
    msg.end_z_units = 219U;
    msg.radius = 0.6563846368613638;
    msg.speed = 0.3606814714494164;
    msg.speed_units = 73U;
    msg.custom.assign("LUWNIIIZYHYSRLXGBNHYXUWIZOSOREDHJECUQMBIVURCZLYGJTJURKKXGSTWJSKCXAWNMEGPRTXBLFDEEQOLGGAKXSOHTZZAKDURFGAMACJEABCJMRH");

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
    msg.setTimeStamp(0.7252456764595311);
    msg.setSource(43965U);
    msg.setSourceEntity(101U);
    msg.setDestination(45309U);
    msg.setDestinationEntity(30U);
    msg.timeout = 17812U;
    msg.flags = 133U;
    msg.lat = 0.33408630835633224;
    msg.lon = 0.5964271778094777;
    msg.start_z = 0.3859213834290326;
    msg.start_z_units = 146U;
    msg.end_z = 0.4218568629916958;
    msg.end_z_units = 220U;
    msg.radius = 0.01111804516332282;
    msg.speed = 0.6115650757425397;
    msg.speed_units = 50U;
    msg.custom.assign("GOFHCGTAPABOSMXYBBLPEQCKEYPTNFCSXUODOJKWNJVWCGMOGXMDAQFYSSQJBHCEWFPISOYXKINOVDAMHZVMPTJYIUGLWXUUYKHTZOZHDDZNPMZHLLRUCDRTGAKWMPMUSRD");

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
    msg.setTimeStamp(0.1904871920079535);
    msg.setSource(24774U);
    msg.setSourceEntity(56U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(204U);
    msg.timeout = 48599U;
    msg.flags = 182U;
    msg.lat = 0.7233039874114564;
    msg.lon = 0.6787034477220967;
    msg.start_z = 0.8443879282170722;
    msg.start_z_units = 173U;
    msg.end_z = 0.357842307839237;
    msg.end_z_units = 34U;
    msg.radius = 0.6108240502528063;
    msg.speed = 0.6524677166170548;
    msg.speed_units = 142U;
    msg.custom.assign("AFEZNBULGIHCSWOBRVDMTRTNAUHTRLJQTCHUQYYLZFPUWQCPSDBKKNMJOORHJERGFXETLNWAHZMSSMEQ");

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
    msg.setTimeStamp(0.17284105693899743);
    msg.setSource(61638U);
    msg.setSourceEntity(123U);
    msg.setDestination(36471U);
    msg.setDestinationEntity(60U);
    msg.timeout = 1468U;
    msg.lat = 0.2708918983758244;
    msg.lon = 0.005341423168067516;
    msg.z = 0.45965382813204325;
    msg.z_units = 20U;
    msg.speed = 0.8022726556312034;
    msg.speed_units = 160U;
    msg.custom.assign("KOZEUIWHXFIPTFRJL");

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
    msg.setTimeStamp(0.5626093507314376);
    msg.setSource(31714U);
    msg.setSourceEntity(245U);
    msg.setDestination(18319U);
    msg.setDestinationEntity(95U);
    msg.timeout = 3518U;
    msg.lat = 0.6107780398487874;
    msg.lon = 0.3070229788939972;
    msg.z = 0.7144742504836068;
    msg.z_units = 177U;
    msg.speed = 0.9026662880755232;
    msg.speed_units = 193U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7028826994470315;
    tmp_msg_0.y = 0.924753353239996;
    tmp_msg_0.z = 0.18557647136222155;
    tmp_msg_0.t = 0.7435404983116588;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PWKOIZMRLAPTJBMYEJBWDRTWQCBNHZUUKFFAIEUAGAYVRCEYAPKPEPIFQFGHWDUZJDMUKNTYWQJCOEOOQXTXZVNFKMRXLAIEIYDKBGUFRXOXKPZFTRTLTMNTVHJVGAKHYQJMGBGD");

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
    msg.setTimeStamp(0.9694753700314779);
    msg.setSource(48923U);
    msg.setSourceEntity(84U);
    msg.setDestination(7583U);
    msg.setDestinationEntity(3U);
    msg.timeout = 47703U;
    msg.lat = 0.11164289659767268;
    msg.lon = 0.49487725381562964;
    msg.z = 0.43265544322596183;
    msg.z_units = 182U;
    msg.speed = 0.3680535591304597;
    msg.speed_units = 62U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.642938611774631;
    tmp_msg_0.y = 0.9094253168097638;
    tmp_msg_0.z = 0.574710969088967;
    tmp_msg_0.t = 0.6918333580667324;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GXZQYOFJLXWGAHRUFTUCLCRKAGFKDKJYJBNVLYWSOUIMSFAOKIBBUHTLMVZQRAQVZEESCHTGIWIPZKOLFEXOGPVLDEGNBBTAHLFVKTSMJDCMTRCLGUYFCGNAQHLVXZPSWFQDMIPUOPDJORPEJPRZIPQMBHCJAKEPQOGCJIWYRWHEWTFYQFVONSBNAYKVXDZZMEXDVRXPQIAQLYAHWMKXRDKUWXURXESTNHUNISMCGVINMTB");

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
    msg.setTimeStamp(0.6343524957412048);
    msg.setSource(10280U);
    msg.setSourceEntity(141U);
    msg.setDestination(45070U);
    msg.setDestinationEntity(37U);
    msg.x = 0.7885433061213106;
    msg.y = 0.6902236609705897;
    msg.z = 0.23209461769246376;
    msg.t = 0.09627386835440199;

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
    msg.setTimeStamp(0.5712457534278286);
    msg.setSource(39802U);
    msg.setSourceEntity(154U);
    msg.setDestination(10422U);
    msg.setDestinationEntity(50U);
    msg.x = 0.9603568446358656;
    msg.y = 0.9328566854938161;
    msg.z = 0.6972308593945808;
    msg.t = 0.3585256117925766;

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
    msg.setTimeStamp(0.17162423823720996);
    msg.setSource(40743U);
    msg.setSourceEntity(48U);
    msg.setDestination(29118U);
    msg.setDestinationEntity(33U);
    msg.x = 0.6775724444703719;
    msg.y = 0.5097134302747869;
    msg.z = 0.8260216151603783;
    msg.t = 0.5543855455317859;

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
    msg.setTimeStamp(0.3661820913491173);
    msg.setSource(12741U);
    msg.setSourceEntity(28U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(239U);
    msg.timeout = 16879U;
    msg.name.assign("MJKNJUESJBONHSNANVTSXOOHSAXIAGETPIITVFSVQKPCXOLXOMYMJZHBOBEDSXPPHMZJKQYATDNETCZIKEUIOMDDRWBZWXDIDIYXFULTRQMXHCFEWFYFUYZHWRKCDIVCGBMALQMZDUPNURGRWKHVPLLTWAQXFKGYTWGMUAUL");
    msg.custom.assign("YVCSBYFLISTLMLSIBOVJFMNGMIQAYIAJEMCOZKOHWIJDSVNKBLEHASACKLWFJVDKJPNXTTVCCUNUUQCHQNBRRBPVFFDGF");

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
    msg.setTimeStamp(0.3883592780915667);
    msg.setSource(2076U);
    msg.setSourceEntity(41U);
    msg.setDestination(55261U);
    msg.setDestinationEntity(218U);
    msg.timeout = 45593U;
    msg.name.assign("KKSFXDFQVRVFVBTDXNWVMIOIDQYTUGXUKDDBANPXSJWNSUVQJSZSJFPICASPBJRNSERMOREZPHDALHAFLDNFFKLAZHCFIWLDJTYLOOTECUOUDPEUNCERFAXNBBWHHVNHZJRKZU");
    msg.custom.assign("XUDHHNAIZEUDFMCCBXKFVPXRS");

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
    msg.setTimeStamp(0.16946959808007067);
    msg.setSource(41700U);
    msg.setSourceEntity(233U);
    msg.setDestination(36547U);
    msg.setDestinationEntity(132U);
    msg.timeout = 47537U;
    msg.name.assign("QNKPJTSSWIGTDSDXQIHHCWHMTVVNEJSUZQUZUOXYBRLQQQVUKJBAWYEGTYLDPEUGISKMCXXKIFNBEDCJHVGEWLRYUXYWTAIZMP");
    msg.custom.assign("MTQWEINCBSSVSJABCAZSMPKDKBNYNQJHPUVQARBWFCOKVRPBUJCWKQHTSDNH");

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
    msg.setTimeStamp(0.6625923249639597);
    msg.setSource(61067U);
    msg.setSourceEntity(127U);
    msg.setDestination(8279U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.36326224377209837;
    msg.lon = 0.462396893082722;
    msg.z = 0.5170801941768223;
    msg.z_units = 229U;
    msg.speed = 0.6065799424385188;
    msg.speed_units = 55U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.515938345002652;
    tmp_msg_0.y = 0.21920847259701326;
    tmp_msg_0.z = 0.2717829063473579;
    tmp_msg_0.t = 0.8285738131297281;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 64824U;
    tmp_msg_1.off_x = 0.1402442223116631;
    tmp_msg_1.off_y = 0.7078995994994918;
    tmp_msg_1.off_z = 0.17867756674314172;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.17815903030862024;
    msg.custom.assign("KYKMLIEJDQUIXFYBVJMOVMWQWITXPNXGZWKFARYMRKFZXNGNFDELYFRJGAWPCKCKSATDTKBYGMEUZODTRIHECLTIKQZBHYMMGVLAHQEEDRTNZSSGFEFJQHIAVFAIENSVHZDXSPGLRXOLBWKGVAAVTUPWBTKWCUEIFHUVPPIQPOASDVMJBRO");

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
    msg.setTimeStamp(0.8539265552356816);
    msg.setSource(21680U);
    msg.setSourceEntity(57U);
    msg.setDestination(60411U);
    msg.setDestinationEntity(212U);
    msg.lat = 0.10790253635478797;
    msg.lon = 0.9951362290326901;
    msg.z = 0.21174288562714216;
    msg.z_units = 15U;
    msg.speed = 0.21842783927917542;
    msg.speed_units = 249U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.24839850143939046;
    tmp_msg_0.y = 0.8816092490713935;
    tmp_msg_0.z = 0.5752339386876589;
    tmp_msg_0.t = 0.9983183994202416;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9818158880938868;
    msg.custom.assign("TWKANXCXGCIRKCWXCFABXATEJGHMGVBHQAJTWXKIMFVGNZHELPPUBMLFTANMIUYGMKRKFRZDYQBTOIPBQKULQOZVLZBKSIUOYRFEPCIVLGCXAXZSPRQFYANFZHNDLNDNZNMYJDJUSYDXCQWEOHRICHNHESBUSOHKAWUSIPELVBWYATJDPMKDVTWQLAUWJHEOSORGKGF");

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
    msg.setTimeStamp(0.729160740133011);
    msg.setSource(54618U);
    msg.setSourceEntity(62U);
    msg.setDestination(27931U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.6005862995084518;
    msg.lon = 0.3954484856161138;
    msg.z = 0.42568664027881076;
    msg.z_units = 127U;
    msg.speed = 0.17758765871491733;
    msg.speed_units = 246U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 10770U;
    tmp_msg_0.off_x = 0.4366923402934002;
    tmp_msg_0.off_y = 0.9750138634370232;
    tmp_msg_0.off_z = 0.9447681924153696;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.26062149897425946;
    msg.custom.assign("VORCWUJAMSQBMAXEESLOSTTCOZTCBOPSPYFHXKEFAJIACOTHLDNBSGMUQNAUIXZMJNSIVKHQGBZPFAXHMQVGBLUJWGPYRYZDELAUWHDHJWNTDWEMKQPVTJPCIAKQJYONKPKL");

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
    msg.setTimeStamp(0.2417828850752911);
    msg.setSource(7700U);
    msg.setSourceEntity(186U);
    msg.setDestination(64838U);
    msg.setDestinationEntity(2U);
    msg.vid = 31483U;
    msg.off_x = 0.9584778004811583;
    msg.off_y = 0.19290063818190584;
    msg.off_z = 0.9694064242802499;

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
    msg.setTimeStamp(0.15025292542156976);
    msg.setSource(63869U);
    msg.setSourceEntity(233U);
    msg.setDestination(5404U);
    msg.setDestinationEntity(187U);
    msg.vid = 44372U;
    msg.off_x = 0.917774311676062;
    msg.off_y = 0.6272457904708535;
    msg.off_z = 0.7910618430497282;

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
    msg.setTimeStamp(0.10239804974797628);
    msg.setSource(24298U);
    msg.setSourceEntity(192U);
    msg.setDestination(11304U);
    msg.setDestinationEntity(134U);
    msg.vid = 24955U;
    msg.off_x = 0.30917790194075867;
    msg.off_y = 0.43680546349691984;
    msg.off_z = 0.984849599352803;

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
    msg.setTimeStamp(0.3072146124975219);
    msg.setSource(21090U);
    msg.setSourceEntity(95U);
    msg.setDestination(43972U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.15775526913441829);
    msg.setSource(11144U);
    msg.setSourceEntity(118U);
    msg.setDestination(60735U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.006393392987735891);
    msg.setSource(31740U);
    msg.setSourceEntity(192U);
    msg.setDestination(11658U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.7726787899742548);
    msg.setSource(18502U);
    msg.setSourceEntity(111U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(35U);
    msg.mid = 61483U;

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
    msg.setTimeStamp(0.5650365230969641);
    msg.setSource(28543U);
    msg.setSourceEntity(201U);
    msg.setDestination(8880U);
    msg.setDestinationEntity(120U);
    msg.mid = 19946U;

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
    msg.setTimeStamp(0.4742157609764476);
    msg.setSource(25467U);
    msg.setSourceEntity(23U);
    msg.setDestination(16723U);
    msg.setDestinationEntity(168U);
    msg.mid = 64289U;

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
    msg.setTimeStamp(0.03648578121176005);
    msg.setSource(37127U);
    msg.setSourceEntity(108U);
    msg.setDestination(6963U);
    msg.setDestinationEntity(143U);
    msg.state = 197U;
    msg.eta = 44655U;
    msg.info.assign("BAYGCJNPZBFISTEGBYLRDXLTZRUXBLTKVTNADCVIWFOOCMVJJUGHKGKOWXEMFDAGUOVIDOPQIEKYDHRMONGMDCXQTCKQHIURYLMHPEZGYFTEWHAXKCSVBHUJVDCASMRXBOWRNYPZSNXWKELZMNTYCOGZBYWISEWVNBTANFZEPKEJCDNFWM");

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
    msg.setTimeStamp(0.043720844332001185);
    msg.setSource(25004U);
    msg.setSourceEntity(181U);
    msg.setDestination(1397U);
    msg.setDestinationEntity(231U);
    msg.state = 76U;
    msg.eta = 41727U;
    msg.info.assign("YOQVCUPRLDQDVRCDPUEKHQPYRPOELOQNGYZRGSAWAZYFWAJNXVRZWFSYTINOJFCK");

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
    msg.setTimeStamp(0.0026412500481133305);
    msg.setSource(38240U);
    msg.setSourceEntity(161U);
    msg.setDestination(1512U);
    msg.setDestinationEntity(67U);
    msg.state = 201U;
    msg.eta = 62090U;
    msg.info.assign("ANOITMBTNHSUVNREQUYKYEVVRNSMEIKSZACLYZFGLHXJD");

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
    msg.setTimeStamp(0.27890432466058457);
    msg.setSource(26099U);
    msg.setSourceEntity(105U);
    msg.setDestination(9295U);
    msg.setDestinationEntity(131U);
    msg.system = 65290U;
    msg.duration = 56691U;
    msg.speed = 0.7909147354327593;
    msg.speed_units = 197U;
    msg.x = 0.36015146128361863;
    msg.y = 0.9520622485425385;
    msg.z = 0.8663307589588076;
    msg.z_units = 2U;

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
    msg.setTimeStamp(0.9123950370208509);
    msg.setSource(41440U);
    msg.setSourceEntity(43U);
    msg.setDestination(6252U);
    msg.setDestinationEntity(165U);
    msg.system = 38309U;
    msg.duration = 40590U;
    msg.speed = 0.5964140219417964;
    msg.speed_units = 197U;
    msg.x = 0.6973405153145495;
    msg.y = 0.07021558913063264;
    msg.z = 0.47466241026876643;
    msg.z_units = 175U;

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
    msg.setTimeStamp(0.013325966232727082);
    msg.setSource(54832U);
    msg.setSourceEntity(89U);
    msg.setDestination(50972U);
    msg.setDestinationEntity(233U);
    msg.system = 31721U;
    msg.duration = 25253U;
    msg.speed = 0.7585637871799245;
    msg.speed_units = 53U;
    msg.x = 0.7084469741562366;
    msg.y = 0.23220253010289282;
    msg.z = 0.42803919499534726;
    msg.z_units = 102U;

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
    msg.setTimeStamp(0.8259771365072264);
    msg.setSource(30439U);
    msg.setSourceEntity(2U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.3437845744510505;
    msg.lon = 0.1404221514113665;
    msg.speed = 0.031245826257441434;
    msg.speed_units = 28U;
    msg.duration = 44106U;
    msg.sys_a = 9578U;
    msg.sys_b = 16247U;
    msg.move_threshold = 0.13284682343625487;

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
    msg.setTimeStamp(0.2847532429682267);
    msg.setSource(45538U);
    msg.setSourceEntity(225U);
    msg.setDestination(43091U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.7417482107155591;
    msg.lon = 0.19811505999410817;
    msg.speed = 0.5004730754193618;
    msg.speed_units = 104U;
    msg.duration = 54470U;
    msg.sys_a = 34238U;
    msg.sys_b = 41798U;
    msg.move_threshold = 0.1511301371447057;

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
    msg.setTimeStamp(0.12408697018922743);
    msg.setSource(30678U);
    msg.setSourceEntity(55U);
    msg.setDestination(35157U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.9190907815861605;
    msg.lon = 0.17105893740461653;
    msg.speed = 0.016216407740232364;
    msg.speed_units = 215U;
    msg.duration = 8223U;
    msg.sys_a = 53217U;
    msg.sys_b = 37067U;
    msg.move_threshold = 0.3573605375425617;

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
    msg.setTimeStamp(0.01933689204342537);
    msg.setSource(62319U);
    msg.setSourceEntity(33U);
    msg.setDestination(11132U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.6473301364935093;
    msg.lon = 0.9458534043898954;
    msg.z = 0.5246907863478343;
    msg.z_units = 151U;
    msg.speed = 0.42032494947227994;
    msg.speed_units = 23U;
    msg.custom.assign("JCYTAAHRGHUGEETLZYLAKRPMABUJDBQWJLFPLQYABSZOYHMVOMTZSQCHTJOAKXIJLYDRGBFRNRTWDEFKKUKLNPGYNOXBJMLHIFLWMHXKKNPUTXNWGONILGFWZQUUXFZZSBHHGEAWHSZEIWCYUVVMRNCATVI");

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
    msg.setTimeStamp(0.09411815586250016);
    msg.setSource(31549U);
    msg.setSourceEntity(96U);
    msg.setDestination(7085U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.4290236738600127;
    msg.lon = 0.15063774048055256;
    msg.z = 0.2862970455797236;
    msg.z_units = 224U;
    msg.speed = 0.3401173242979523;
    msg.speed_units = 113U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8072909018462399;
    tmp_msg_0.lon = 0.4296993577951367;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RYUPJOTMBHXZOKJPWOASBVDCBCTXVDSRIBPGMRSAMLGAYHUETVOYQZQCLQOXDPWZJWYUZGOQCCNLBZPNIONSGCBWEVMATFUKXDBHXJVHFIPXWKCLJPFHQFWQKKIVVYLONWJBCOYSTPTYYTPODGQARJRKFDKDDTXBFASQNMNTMDGEHXFDYHAREPXALZIMHUQRHCGWSSMIXIMEUJNRUTKIIVEQEALNGSYGUFZZVWKRNKJSCB");

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
    msg.setTimeStamp(0.003540559888055572);
    msg.setSource(12399U);
    msg.setSourceEntity(45U);
    msg.setDestination(57525U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.7892104841561506;
    msg.lon = 0.8818374725774936;
    msg.z = 0.06585737222734322;
    msg.z_units = 121U;
    msg.speed = 0.8093472303728123;
    msg.speed_units = 207U;
    msg.custom.assign("TLLSXIKDTUKFXMRYOVDYEJGYBQSJGZGXRELOGZTMITXCACSSQLPRKLTUBMKVZRJGAMFWTYLDNIBHUXVJSASDZINOGYCPZLOVWUQFYDRRPHXIAHTHRHOEF");

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
    msg.setTimeStamp(0.5946500520506214);
    msg.setSource(40260U);
    msg.setSourceEntity(124U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.020011544169398987;
    msg.lon = 0.6686942504822034;

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
    msg.setTimeStamp(0.8805982796864914);
    msg.setSource(60625U);
    msg.setSourceEntity(243U);
    msg.setDestination(60260U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.3480445530503027;
    msg.lon = 0.678241824345829;

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
    msg.setTimeStamp(0.47404511686089645);
    msg.setSource(36639U);
    msg.setSourceEntity(228U);
    msg.setDestination(24264U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.9615812362673379;
    msg.lon = 0.4600393366663891;

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
    msg.setTimeStamp(0.2093241590108026);
    msg.setSource(56695U);
    msg.setSourceEntity(223U);
    msg.setDestination(40240U);
    msg.setDestinationEntity(175U);
    msg.timeout = 57937U;
    msg.lat = 0.7933733901341191;
    msg.lon = 0.16339388210408423;
    msg.z = 0.2235245480194965;
    msg.z_units = 228U;
    msg.pitch = 0.008191560808553322;
    msg.amplitude = 0.8776180094917204;
    msg.duration = 33883U;
    msg.speed = 0.8494707773957576;
    msg.speed_units = 211U;
    msg.radius = 0.03800886322432695;
    msg.direction = 35U;
    msg.custom.assign("ZWJWYXGRCDOSQSAEGQMSDNRBDTVLNCAJYIMSBPGHCQZUOJRGDQWRNJZREGUEYFQEZLPHISTJDIRVCSWZVAZTLKAHWIKELYLCZOQSFCKUENAJHGCXAALISUDOYMJJLPXHXKMXTMPMDRWOHKMGDBGULECPFKZOELFMVINSMBGEPF");

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
    msg.setTimeStamp(0.7684846212085696);
    msg.setSource(48323U);
    msg.setSourceEntity(70U);
    msg.setDestination(37338U);
    msg.setDestinationEntity(107U);
    msg.timeout = 46567U;
    msg.lat = 0.4464556634723861;
    msg.lon = 0.8651450670492331;
    msg.z = 0.18625936325817183;
    msg.z_units = 0U;
    msg.pitch = 0.7734227648431455;
    msg.amplitude = 0.6874275391145263;
    msg.duration = 61135U;
    msg.speed = 0.48891585183285;
    msg.speed_units = 27U;
    msg.radius = 0.5706617045890983;
    msg.direction = 182U;
    msg.custom.assign("XICPDBBQMLEOPLJKEJLFJQCHASAJQTXQCITRQBDQZKCZIJUWZFAFYSDIYULCFLMNDVCVDXRWEWGAWOZDFGALOOETNLYKKVWGTKURNZSYIVNRTSYYZFEXVNSWMJAFPDNEZEBQRNBUEVGYPUFOMVCIGLKNPUQMPNJNXUYHABROXRHXTIRZSDSXTGFGBMMEHAVMFOKPHHDEXTVCCPGUIAPHGHOSJRLUOLQWUHDMKHXWVSPTGBICSBBJZMRJWIKT");

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
    msg.setTimeStamp(0.3477847112515925);
    msg.setSource(42375U);
    msg.setSourceEntity(249U);
    msg.setDestination(58756U);
    msg.setDestinationEntity(204U);
    msg.timeout = 20615U;
    msg.lat = 0.22549262827398575;
    msg.lon = 0.9300965603941496;
    msg.z = 0.12397696404936731;
    msg.z_units = 143U;
    msg.pitch = 0.2766898987428501;
    msg.amplitude = 0.41789626184770157;
    msg.duration = 46505U;
    msg.speed = 0.10099408606422156;
    msg.speed_units = 99U;
    msg.radius = 0.3251372814872874;
    msg.direction = 55U;
    msg.custom.assign("LJJOOHCXLPTFBUWDLMODBPZKMZUHMZSSGFTOQEHGWLUPVDLGAZUSUTPNPKADYIJRMONXMIIQKC");

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
    msg.setTimeStamp(0.8894643941541387);
    msg.setSource(44935U);
    msg.setSourceEntity(84U);
    msg.setDestination(39713U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("IMSWCVHKWGQFMABIZPDVIFSMXASDEVSUCLGHZWZJASGESRMYNUNAKLONWSBFTIYKJPWYLCBNRQMDUJXGFJGGSQYWIQZMQKWLPKCYPRZMTPZFTAJTHNOQDVDXPAXBTVHOOFHKCXIDNSIJFPQAASBRXZOOVFBIVKEWBHCRMUJYNRTICXQEULKHEVGYGAAOMCLY");
    msg.reference_frame = 43U;
    msg.custom.assign("HPUXBKZGGFUUNBIWKNMBNOKQRSCYCPOHYTLDSVOQOGFHAPMOIILTUZHBFEATXAFNXLCWRFPRDIEHMDZFGURJXYDJABZBCDWLBYLFIKZHOCWLHJYONLCMYBXMSPRPGLFXKTBJLQETLDYRPOOZJPVEJWU");

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
    msg.setTimeStamp(0.40866156485767435);
    msg.setSource(8623U);
    msg.setSourceEntity(95U);
    msg.setDestination(15190U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("IPZLCNLVQMTRVFRCUQUUBNRVFKFIOFWYGNRLBVUMQUDZTYFFPJSRREEMGAEZPJRCJFMUOZWKKCPHGDQCVNAVAO");
    msg.reference_frame = 229U;
    msg.custom.assign("XODNHGBDMDEGANRLPOFVHCKINJCKLHKWKZJZYHKKEIWQNFMDZBTXHQSYOHHLVNONFZEZEMUXBYFMTCBTSMRQTPSOMPPTLBAALLQBHNJRODYYXMDUIQIFCZUQWOSVBPADJPITIOJMZJFIULZWDAPWTVVQSTEETQAPZBNYJVUSVICAGSWGPKXAGRXEIFGNVCSXWVCGWZAQOAXRBRXKUKCYUDRCCJYNSWYRGFMBUXLIQ");

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
    msg.setTimeStamp(0.3087375209058866);
    msg.setSource(15197U);
    msg.setSourceEntity(39U);
    msg.setDestination(52869U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("WBZKSRIGUFGMKMCXDVYGKFSOQJWINTRHZSHUESNIAPZQXLRACKFJXMLPOUXKDAMBALCHAARBLPLP");
    msg.reference_frame = 245U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7682U;
    tmp_msg_0.off_x = 0.3447036375092364;
    tmp_msg_0.off_y = 0.33529082484750483;
    tmp_msg_0.off_z = 0.3291760566042168;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MYUGZQISAOMSEHUBHWGLPDSJEOUWWXNTANMNDZUREZQOATDAXAJIQGFBZPMRMETZXPWBWXPIIDGVPCIKLZBXDELTTANCJFVMZYPSOSQSTBHXVNAWSLHRUBNKTSCYAXHJEJKLHNFFKVGRMD");

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
    msg.setTimeStamp(0.2056897194634808);
    msg.setSource(57748U);
    msg.setSourceEntity(134U);
    msg.setDestination(13743U);
    msg.setDestinationEntity(194U);
    msg.group_name.assign("DGCOPEXAPIPPXAMETTMIZDWQAJWCSOCWOSBQLVJIBCKQMNVHIZWPTFMWDEJPWFYIXUPENSWMXXHVLHIOBTCLEZKUISASRDSJDHOYGGGTZDUFXYHUQQWBUXDEXFBBWGLRETRFBTOAVNSKKLYLIONKQUUAQOBEKEKFVKQUGYMUQRJAAFZJHJSKPRZMHPZYNYDMVVFXCGCWLS");
    msg.formation_name.assign("GWNKYYRBNWBOQDXWMQYUBFOJQJXZGFIUXVNRQVGCQPVIQEIUDZXSPSJCTDMLMRDHVFOOEOHFBFKSPBVIDXGFKWXABZRZPWBJTSQTADSTIUKUYSEPKQLACCKHLCLHUATZFHYCEQQMHJXDYRTOVYOHTNIEGENVGLFWUWLGZAUNBJWAPFPNYRVJAWENGS");
    msg.plan_id.assign("QQHSHQCSRVMNKPTDJIWMJKTOEZLHWUKTAZYXGLBKQWPEHZHHEPYZQKUPHGIOCXAWOISSQDVAFFNLGOUTWHYXWWTDOBDNSCOXEAGMSSZWFBUQ");
    msg.description.assign("SLORHBPCHOUTILPDLIXQYKVPJVGJQLJPDGQSZSVYTAFBLUFKIEOLIVTJJZWUVFHPAMBWFKLYRTOOC");
    msg.leader_speed = 0.5858866642360795;
    msg.leader_bank_lim = 0.7343657546942858;
    msg.pos_sim_err_lim = 0.6314719924562088;
    msg.pos_sim_err_wrn = 0.38661639719081276;
    msg.pos_sim_err_timeout = 45111U;
    msg.converg_max = 0.012648066703274119;
    msg.converg_timeout = 34983U;
    msg.comms_timeout = 41918U;
    msg.turb_lim = 0.9303765110466373;
    msg.custom.assign("NSXRMUVQMTJJMLWILWAPDAYAAIIDGEHSWHU");

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
    msg.setTimeStamp(0.42200135985928366);
    msg.setSource(23754U);
    msg.setSourceEntity(50U);
    msg.setDestination(63588U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("HZYWPYDTCRVXIZVLVGUJVUMUAFRMHLYBMJGWSBOFXHMFOTVZQXHFNPZQWIDNXPESCGQXEUTTOIRYKURLSNGIVWWYMVKJMVJLQEPCUZYKBSQHGEFXWMBXTZRJNBECQZFYNAJLHJUVDAINOBBATIBWXNJSIBWQFXCFCTHLDLAEXHQOGMKLAPLPTNSHPWADSCDRVGONYPEQTYIFDMKGUARGAUZKZPFNKIPMUWRREOOEEOSCC");
    msg.formation_name.assign("TBSLXOBDTPPCXQTAJWAXYETXXQTFNFWMRYIJZWRMBZPSTCGBTBWCSSIJKWVKPGMSNGDGXUDUYZELFFOEVQCDBGSMBIXIPOZLRJNNACOWYEBMTKLCVNYDFWMHGUHHJUZMRVOVHKRFOZXFGIKQBIMESOOHADHJYYLVQHDUCRFPRNKANVMPSZVACAKIJWQFNZOBAPELSIW");
    msg.plan_id.assign("IVFXAKZJSGWYLTYEGRRPFKABMQVHSXWMCMFHQLAUYOIXALJFLSKUHUHOQQRNXNNKTCTVDNMXWWZMVEJSYHMLSCDQTKLRZUONLIUDEGYAEFMJZW");
    msg.description.assign("OGEHWPPPKSSXZEZZMLNCFTZMDBYOGZVYRLIWGHDDFBVHLPVSGSXDAJGUFHARUMTDHTKLNYDUQRJKXQQAZMYUQLAMQWECJPIBKDYJXRPENXUNEQJGFGPKRVTEOKMDYPHBNOSJEMUMACAICA");
    msg.leader_speed = 0.3848040575233368;
    msg.leader_bank_lim = 0.034645927001270116;
    msg.pos_sim_err_lim = 0.24586323782147435;
    msg.pos_sim_err_wrn = 0.5082216303999206;
    msg.pos_sim_err_timeout = 30275U;
    msg.converg_max = 0.3781772925954284;
    msg.converg_timeout = 27762U;
    msg.comms_timeout = 56842U;
    msg.turb_lim = 0.5097341845261669;
    msg.custom.assign("ZCVTOTNVZKCRSZSMYLHHFVDDUYGKJAPXTMWDMFHEVAUXJKJILABWODFNQEHHJUIDPDFAUMECGLXGWRJNWAQQABGJQNDFHYBBCZCYBIEZXASLRTWRHNBZRPIXJNPKMHZXNMPWNLTQSURMLBQHPTYEKCJVQ");

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
    msg.setTimeStamp(0.3799762915763716);
    msg.setSource(39178U);
    msg.setSourceEntity(75U);
    msg.setDestination(16516U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("FYPJNIHMTSGQXBFZPWSAMJDANPMAADUWFLERVKEKCKPOGSE");
    msg.formation_name.assign("EVJRPWIIROCT");
    msg.plan_id.assign("WPIIIRKIANGJPUKPGWOTZOZXUZCQUZDJIYFBYTXANUPAIFBEBNBJZGPGDOOKVLTHLYHRQFTZISHP");
    msg.description.assign("WIFJHWEFKTWECDEPVNADKOBMPSHCSEXCPUQBTIDXUFHGFCYBOOYNXAQSMDBHLAOZUPVUOTZGVXKKGKEVBIYUCBYSORERVFGMQNAKMUZYGTULIQSZJLTGEDFQTGLNZZHYEDQHJBOYKMLRSSBFJXHKVDMNJJIAJUHNHSYWEZODIJHRJCPPFYYQXVQVCXPPRQNATMDWDALIRCWIESALFUIM");
    msg.leader_speed = 0.08774056219781079;
    msg.leader_bank_lim = 0.05065037592280064;
    msg.pos_sim_err_lim = 0.2370881816712107;
    msg.pos_sim_err_wrn = 0.7329867491314409;
    msg.pos_sim_err_timeout = 29179U;
    msg.converg_max = 0.6332077000195191;
    msg.converg_timeout = 59969U;
    msg.comms_timeout = 18768U;
    msg.turb_lim = 0.41156611051810776;
    msg.custom.assign("XDSEKYTLJMYETUXUVJSMWBGHLAGVYCLSUNHKYSGZWBHEPROBCVTZYSOYHQMIWBQUXPAUMVGAMZORBWSQXNTZNETHJPNFRPYISOFKQRPDDGFDLTWZFBVHYYZQIFTKXNZQPDLCNGNBWUBLSTOCLRZQKVTPGEEJWECODNYVOCFRPKFEMNVJWMAPBKDUDCJAJILLTAEAHOFQROGVPICMIAQLGCMGUAXXJIKSWAXR");

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
    msg.setTimeStamp(0.14515828963444344);
    msg.setSource(26673U);
    msg.setSourceEntity(213U);
    msg.setDestination(11559U);
    msg.setDestinationEntity(64U);
    msg.control_src = 61807U;
    msg.control_ent = 168U;
    msg.timeout = 0.23808051067678204;
    msg.loiter_radius = 0.4190743348545871;
    msg.altitude_interval = 0.1319369788576129;

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
    msg.setTimeStamp(0.33592168286096824);
    msg.setSource(6097U);
    msg.setSourceEntity(187U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(136U);
    msg.control_src = 7025U;
    msg.control_ent = 221U;
    msg.timeout = 0.6128518541843081;
    msg.loiter_radius = 0.05395836107349905;
    msg.altitude_interval = 0.6332229580007581;

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
    msg.setTimeStamp(0.134546559432841);
    msg.setSource(28886U);
    msg.setSourceEntity(151U);
    msg.setDestination(39587U);
    msg.setDestinationEntity(42U);
    msg.control_src = 23325U;
    msg.control_ent = 194U;
    msg.timeout = 0.26301499287800956;
    msg.loiter_radius = 0.4622289000799703;
    msg.altitude_interval = 0.6172881390525294;

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
    msg.setTimeStamp(0.04151363672479036);
    msg.setSource(46279U);
    msg.setSourceEntity(45U);
    msg.setDestination(51876U);
    msg.setDestinationEntity(248U);
    msg.flags = 246U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.032048793488159366;
    tmp_msg_0.speed_units = 24U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6630705517992596;
    tmp_msg_1.z_units = 44U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6052563758145496;
    msg.lon = 0.5212991496422416;
    msg.radius = 0.1669464745058934;

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
    msg.setTimeStamp(0.1487069818920752);
    msg.setSource(36663U);
    msg.setSourceEntity(1U);
    msg.setDestination(61475U);
    msg.setDestinationEntity(176U);
    msg.flags = 24U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4931970905574441;
    tmp_msg_0.speed_units = 7U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.331069587524758;
    tmp_msg_1.z_units = 223U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.06912044471158518;
    msg.lon = 0.2961970974596695;
    msg.radius = 0.1650687010865538;

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
    msg.setTimeStamp(0.15753620510179922);
    msg.setSource(8624U);
    msg.setSourceEntity(144U);
    msg.setDestination(47640U);
    msg.setDestinationEntity(236U);
    msg.flags = 248U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9709625980040187;
    tmp_msg_0.speed_units = 162U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7678379307277927;
    tmp_msg_1.z_units = 50U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.07472616199046589;
    msg.lon = 0.4215493710874044;
    msg.radius = 0.13162563920524772;

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
    msg.setTimeStamp(0.8834812266076802);
    msg.setSource(2269U);
    msg.setSourceEntity(0U);
    msg.setDestination(21475U);
    msg.setDestinationEntity(112U);
    msg.control_src = 49048U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 230U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6227535898357223;
    tmp_tmp_msg_0_0.speed_units = 215U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5173622053592717;
    tmp_tmp_msg_0_1.z_units = 127U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15799566242504792;
    tmp_msg_0.lon = 0.773646701809856;
    tmp_msg_0.radius = 0.36327962488393106;
    msg.reference.set(tmp_msg_0);
    msg.state = 51U;
    msg.proximity = 234U;

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
    msg.setTimeStamp(0.25769917402234876);
    msg.setSource(45868U);
    msg.setSourceEntity(196U);
    msg.setDestination(65107U);
    msg.setDestinationEntity(180U);
    msg.control_src = 10190U;
    msg.control_ent = 16U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 46U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40180492507436727;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5426292444076488;
    tmp_tmp_msg_0_1.z_units = 233U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8623214537873266;
    tmp_msg_0.lon = 0.010121007740129584;
    tmp_msg_0.radius = 0.1540108862771592;
    msg.reference.set(tmp_msg_0);
    msg.state = 25U;
    msg.proximity = 27U;

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
    msg.setTimeStamp(0.12712498896945568);
    msg.setSource(28456U);
    msg.setSourceEntity(137U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(112U);
    msg.control_src = 47708U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7288860813204103;
    tmp_tmp_msg_0_0.speed_units = 200U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.45626092631040926;
    tmp_tmp_msg_0_1.z_units = 180U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2749902618155706;
    tmp_msg_0.lon = 0.3095606348731239;
    tmp_msg_0.radius = 0.6742355912144447;
    msg.reference.set(tmp_msg_0);
    msg.state = 36U;
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
    msg.setTimeStamp(0.23415006888936452);
    msg.setSource(56389U);
    msg.setSourceEntity(244U);
    msg.setDestination(14411U);
    msg.setDestinationEntity(203U);
    msg.ax_cmd = 0.4003155712752281;
    msg.ay_cmd = 0.8581559243904561;
    msg.az_cmd = 0.33018110031653314;
    msg.ax_des = 0.7859175386737273;
    msg.ay_des = 0.9224779629385375;
    msg.az_des = 0.2349022943349678;
    msg.virt_err_x = 0.6908367602384282;
    msg.virt_err_y = 0.1286810503633673;
    msg.virt_err_z = 0.07280179994462166;
    msg.surf_fdbk_x = 0.22365299674201888;
    msg.surf_fdbk_y = 0.038920351468710535;
    msg.surf_fdbk_z = 0.5089424356030592;
    msg.surf_unkn_x = 0.899062931156851;
    msg.surf_unkn_y = 0.9500671414639841;
    msg.surf_unkn_z = 0.9777284484123266;
    msg.ss_x = 0.5841431429250129;
    msg.ss_y = 0.09955906304143425;
    msg.ss_z = 0.8681475240152734;

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
    msg.setTimeStamp(0.6959404674036684);
    msg.setSource(24928U);
    msg.setSourceEntity(75U);
    msg.setDestination(51926U);
    msg.setDestinationEntity(190U);
    msg.ax_cmd = 0.21609957942770974;
    msg.ay_cmd = 0.010966957469259575;
    msg.az_cmd = 0.295417687077166;
    msg.ax_des = 0.5706190452884061;
    msg.ay_des = 0.15897206538977315;
    msg.az_des = 0.12799011816071404;
    msg.virt_err_x = 0.6405451837514011;
    msg.virt_err_y = 0.43833924229699406;
    msg.virt_err_z = 0.43362618462836755;
    msg.surf_fdbk_x = 0.006781503207338391;
    msg.surf_fdbk_y = 0.7908268804495305;
    msg.surf_fdbk_z = 0.8875790578614204;
    msg.surf_unkn_x = 0.1839059649261564;
    msg.surf_unkn_y = 0.8375959819088106;
    msg.surf_unkn_z = 0.28641518652639575;
    msg.ss_x = 0.268242493558139;
    msg.ss_y = 0.757830512846131;
    msg.ss_z = 0.26799433113688853;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZHGQILFWZTMGJFPCIRNOPSXNKDKKEQCSSXAOUCIDSVYOJQWFXXPINNLEACSQZCEUEW");
    tmp_msg_0.dist = 0.7298424461117442;
    tmp_msg_0.err = 0.3000744830410219;
    tmp_msg_0.ctrl_imp = 0.105989400586735;
    tmp_msg_0.rel_dir_x = 0.9913938109191016;
    tmp_msg_0.rel_dir_y = 0.5486609894423123;
    tmp_msg_0.rel_dir_z = 0.4800501933665716;
    tmp_msg_0.err_x = 0.7154977663633478;
    tmp_msg_0.err_y = 0.42517791547343553;
    tmp_msg_0.err_z = 0.33832368652895684;
    tmp_msg_0.rf_err_x = 0.6096871983909026;
    tmp_msg_0.rf_err_y = 0.26541150597912144;
    tmp_msg_0.rf_err_z = 0.1962887456600244;
    tmp_msg_0.rf_err_vx = 0.9325937284414191;
    tmp_msg_0.rf_err_vy = 0.41284492409820295;
    tmp_msg_0.rf_err_vz = 0.964025966252546;
    tmp_msg_0.ss_x = 0.572131970847573;
    tmp_msg_0.ss_y = 0.7611899726431604;
    tmp_msg_0.ss_z = 0.4411177783596738;
    tmp_msg_0.virt_err_x = 0.6235378923792556;
    tmp_msg_0.virt_err_y = 0.8731603694282708;
    tmp_msg_0.virt_err_z = 0.4224704600332715;
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
    msg.setTimeStamp(0.21470283805168933);
    msg.setSource(63965U);
    msg.setSourceEntity(204U);
    msg.setDestination(18460U);
    msg.setDestinationEntity(130U);
    msg.ax_cmd = 0.8656158554037992;
    msg.ay_cmd = 0.8877459479877011;
    msg.az_cmd = 0.9958916228928668;
    msg.ax_des = 0.4819416872267003;
    msg.ay_des = 0.7154697790279709;
    msg.az_des = 0.36535754821904265;
    msg.virt_err_x = 0.04719612914341165;
    msg.virt_err_y = 0.1586920896734092;
    msg.virt_err_z = 0.75639766678222;
    msg.surf_fdbk_x = 0.9797699080542104;
    msg.surf_fdbk_y = 0.5916148087356702;
    msg.surf_fdbk_z = 0.7165400716617875;
    msg.surf_unkn_x = 0.44509783399417446;
    msg.surf_unkn_y = 0.2618581038341279;
    msg.surf_unkn_z = 0.5553297384062951;
    msg.ss_x = 0.30183055845468165;
    msg.ss_y = 0.8463591401374215;
    msg.ss_z = 0.5435165366370861;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("HAOGURSZMQEALICIXEPITZJWIFZLWZASMLINRKAWNVPMABCTDMZMOFTHCOSPEDBFKAOQGHRYVUOYGHADNHCZYIEYLCETRKQYJIXHBJBOJGKXWJECFWINXSLTKYWZWQGINPMINDPHBR");
    tmp_msg_0.dist = 0.273614981462735;
    tmp_msg_0.err = 0.6703272016808034;
    tmp_msg_0.ctrl_imp = 0.722600173205113;
    tmp_msg_0.rel_dir_x = 0.8177788170025428;
    tmp_msg_0.rel_dir_y = 0.3834277828895384;
    tmp_msg_0.rel_dir_z = 0.6040174224750605;
    tmp_msg_0.err_x = 0.9842298319807723;
    tmp_msg_0.err_y = 0.08327356500436822;
    tmp_msg_0.err_z = 0.40973610748090605;
    tmp_msg_0.rf_err_x = 0.6969842297744853;
    tmp_msg_0.rf_err_y = 0.42494839980566246;
    tmp_msg_0.rf_err_z = 0.05658606923546161;
    tmp_msg_0.rf_err_vx = 0.09637306438142446;
    tmp_msg_0.rf_err_vy = 0.5834564173385267;
    tmp_msg_0.rf_err_vz = 0.4281100578093162;
    tmp_msg_0.ss_x = 0.9090514186181583;
    tmp_msg_0.ss_y = 0.7603725595803364;
    tmp_msg_0.ss_z = 0.5365560925992353;
    tmp_msg_0.virt_err_x = 0.9371176862637273;
    tmp_msg_0.virt_err_y = 0.25472374653207197;
    tmp_msg_0.virt_err_z = 0.838109632337451;
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
    msg.setTimeStamp(0.742994013588683);
    msg.setSource(25348U);
    msg.setSourceEntity(196U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(59U);
    msg.s_id.assign("TFKLLKPXCPSHXWAZYURJQPGFIWIFGRHPCOSDPWGAREDHOEGPQCAGYXIFEMNMOGSSZILXBHHCXUFMCEEEZKVOLYCDYLUZWYOOYBSZOSUIFVQJWGRWKVLVKQUTQVDBLJUMPQXWFDVCYHJJJIHSACD");
    msg.dist = 0.004125308264587901;
    msg.err = 0.01301932530723171;
    msg.ctrl_imp = 0.08092166989921157;
    msg.rel_dir_x = 0.4037974207066033;
    msg.rel_dir_y = 0.5392911353637584;
    msg.rel_dir_z = 0.759639757511488;
    msg.err_x = 0.6543737584060675;
    msg.err_y = 0.13545047447574488;
    msg.err_z = 0.853746852453748;
    msg.rf_err_x = 0.8253131904265175;
    msg.rf_err_y = 0.9545806259207137;
    msg.rf_err_z = 0.7513848282197337;
    msg.rf_err_vx = 0.9459644621902477;
    msg.rf_err_vy = 0.9749570755267224;
    msg.rf_err_vz = 0.8884404429553081;
    msg.ss_x = 0.8470604074892387;
    msg.ss_y = 0.014228204642313225;
    msg.ss_z = 0.44013402844370264;
    msg.virt_err_x = 0.6600618471411642;
    msg.virt_err_y = 0.06159600000464005;
    msg.virt_err_z = 0.475741812010411;

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
    msg.setTimeStamp(0.39695974311063964);
    msg.setSource(41988U);
    msg.setSourceEntity(238U);
    msg.setDestination(13685U);
    msg.setDestinationEntity(179U);
    msg.s_id.assign("UKNUNXPFGNJIH");
    msg.dist = 0.8341382079670722;
    msg.err = 0.6938526804721635;
    msg.ctrl_imp = 0.7173389649352555;
    msg.rel_dir_x = 0.01860918709608317;
    msg.rel_dir_y = 0.1633556371250654;
    msg.rel_dir_z = 0.19168934959826311;
    msg.err_x = 0.7141759032198779;
    msg.err_y = 0.8445918578045074;
    msg.err_z = 0.33236369531024146;
    msg.rf_err_x = 0.2708910733320238;
    msg.rf_err_y = 0.20609359605904043;
    msg.rf_err_z = 0.6448274411122181;
    msg.rf_err_vx = 0.5398114840136008;
    msg.rf_err_vy = 0.840492604833809;
    msg.rf_err_vz = 0.36528838572050093;
    msg.ss_x = 0.48250047353651493;
    msg.ss_y = 0.6401529191605984;
    msg.ss_z = 0.28650911675636415;
    msg.virt_err_x = 0.8670344263033295;
    msg.virt_err_y = 0.5306418169011254;
    msg.virt_err_z = 0.6207898770027783;

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
    msg.setTimeStamp(0.8165507978461455);
    msg.setSource(40697U);
    msg.setSourceEntity(154U);
    msg.setDestination(32386U);
    msg.setDestinationEntity(189U);
    msg.s_id.assign("MSRCQBVWFFKIWSXMLTMCRJWVROMMEONKEDBLHWJXURLOSSPIARJCQCPTLFQXUDQAFKDDNOXLKGECSPIDQNMWEUABYKJHGTOGGWAUNEOLCQEAJBTIAYTYEVVZHLPOQGVYBYOBRGIYGSRDRTGFHFVNAZMXZP");
    msg.dist = 0.23609377468385884;
    msg.err = 0.8155478722308891;
    msg.ctrl_imp = 0.07507853679373333;
    msg.rel_dir_x = 0.37723976983536356;
    msg.rel_dir_y = 0.16823387566525694;
    msg.rel_dir_z = 0.20293021876760864;
    msg.err_x = 0.4373121663561583;
    msg.err_y = 0.2431553535546016;
    msg.err_z = 0.45319635480871656;
    msg.rf_err_x = 0.3061680358626858;
    msg.rf_err_y = 0.3127479000403034;
    msg.rf_err_z = 0.9285067654740519;
    msg.rf_err_vx = 0.46803945080276843;
    msg.rf_err_vy = 0.07517927529784474;
    msg.rf_err_vz = 0.7338567449837355;
    msg.ss_x = 0.06376728782710217;
    msg.ss_y = 0.729555523099863;
    msg.ss_z = 0.7096831809870362;
    msg.virt_err_x = 0.05692687061631285;
    msg.virt_err_y = 0.45132317890305274;
    msg.virt_err_z = 0.015089004389047034;

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
    msg.setTimeStamp(0.9085817059556414);
    msg.setSource(9630U);
    msg.setSourceEntity(203U);
    msg.setDestination(4695U);
    msg.setDestinationEntity(88U);
    msg.timeout = 56826U;
    msg.rpm = 0.46987771306215553;
    msg.direction = 210U;
    msg.custom.assign("RJXAGFCQYAZEDQYOQYHCFALIATDBGTGZOJJFMPCLDWGVTEHCMUSUFHOHUDHSHTZTVHJUSTBZLPKCNAPGVSXGRULWDJXCRIODNFZMBCXWMRANZKBNNQVBRVBJHIYPZOXNKQASNZLEPRXVFDOLVEKYMXCKHSTMJKANWAJQIJUEGDIGQFKEFTYKCBERRWFYPONMWUFBQDMLUNIWWXGEOORLEBIYVIJPWXS");

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
    msg.setTimeStamp(0.22666802470673109);
    msg.setSource(54520U);
    msg.setSourceEntity(130U);
    msg.setDestination(26534U);
    msg.setDestinationEntity(67U);
    msg.timeout = 19343U;
    msg.rpm = 0.3340941954763198;
    msg.direction = 246U;
    msg.custom.assign("RBYQRHXPZQOCESOYUKDXTTCJFOQBADTEBWHLFJSGWATYXBMGHTEURBAWHRZCDMMWEGNULXHNYQUPJVMYEYNSVGCIREJNMZOZQZKAMHHIOYDLWKYPIJGRIEVQKISKYFIFVSTBIMTEPPCSFQDFBMEHBLHSAICIRNDKLSTPBWCJXNXZVAJGYJWAPDXVFOOUTKRDDULJSXZNGFEUMVZCPWVLLVMKUBQPXLSGJWCPZFXNTZAG");

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
    msg.setTimeStamp(0.7212867629773694);
    msg.setSource(13074U);
    msg.setSourceEntity(128U);
    msg.setDestination(21137U);
    msg.setDestinationEntity(64U);
    msg.timeout = 26551U;
    msg.rpm = 0.8473375316741817;
    msg.direction = 197U;
    msg.custom.assign("LYZAYUFDVMTDHVAKSCWDVZHYKMGYEJYEKXJTPPITGOGWHNANBTVSLBPHTMWZVPCCNHJG");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.39482173980127955);
    msg.setSource(28842U);
    msg.setSourceEntity(12U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(34U);
    msg.op_mode = 106U;
    msg.error_count = 138U;
    msg.error_ents.assign("HMJFMJOEBUBUCPMWUIQHGMWGPLLALVUXHSJRRPQZQNGGUGYAPAWLPFVRZEKKZRZFYHELUEVKNQRMQYNWYHSOONSIXKGKMOEKGALEXACPDGWANESQTITFFERFZYNUQLVFCXSWYZICVXSOLDMTXRXTVIKNHDMBDUDINTSBDKWNBOPCTZHVWZACCYUV");
    msg.maneuver_type = 50290U;
    msg.maneuver_stime = 0.5350495059997834;
    msg.maneuver_eta = 26039U;
    msg.control_loops = 4128746877U;
    msg.flags = 11U;
    msg.last_error.assign("RHECTDPDULDKPPFPSNIQOQGHWMYWEWGZVQRXXXSEGYUPZHAJQVFIDCIMGVSTBPCIQLXAZODIUAXUOORCLEMJBFTAYTBFHMSABXQUJONUAMKBMPYWYRXWVXNZBSJBSEGCWJVUHODNGOSUFMSWINJRKQNECPIRYMQMAOENXDUYGYIHRBAKNKTVFCLLQJEMPTVZTQWLHJDHZYSFTKGLZPLJKWZFKFCDHKFRBTLRCIILHBZZVO");
    msg.last_error_time = 0.8521829461855595;

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
    msg.setTimeStamp(0.29598890613073525);
    msg.setSource(55112U);
    msg.setSourceEntity(85U);
    msg.setDestination(1852U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 158U;
    msg.error_count = 91U;
    msg.error_ents.assign("EGBOJRPXWUXTQUSINZSUQGEYDGMZFWQIHDJMYRAFGNKBMMHOICSONIQLYJEZXBECJPHWDTLDMTLTNFFBQLQFPWYVHWELVJHKDPRUDEPCNGWCWJZYTLRLVKDXEIRRNNZMJKPFITUHAFEVPNGTOMOIBVUUAPXSDXEYNWIJHXCUFCTAUBSGWCLVFOZV");
    msg.maneuver_type = 10897U;
    msg.maneuver_stime = 0.6434683839456181;
    msg.maneuver_eta = 60290U;
    msg.control_loops = 3673016926U;
    msg.flags = 227U;
    msg.last_error.assign("VOPCHWOYFJDDDVUWDRNHBKWTHW");
    msg.last_error_time = 0.6114494887123755;

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
    msg.setTimeStamp(0.9717814606423391);
    msg.setSource(63160U);
    msg.setSourceEntity(23U);
    msg.setDestination(62789U);
    msg.setDestinationEntity(93U);
    msg.op_mode = 14U;
    msg.error_count = 205U;
    msg.error_ents.assign("EIEBNAVYYGWYQTZHUUKKCSOCHBZGFQMJLFCUWYRGCTAHPMWPSJSAFLMLNCMJVQTNDIEUSZPPWYISUULBOICOHTEFFXATPLPSUHIFDQLQGZKTDNTECRSJNQITRDCOQFMKTXMHYLEVWQSJBZANODXEHOXPBQRMJPQAHVXRDLVYFOREGROSZWBXFNOUBKGNVDKKGXWZHDZVKXZWECDMSCNPEFGVIKUMWJJTBAJUALAIXMGGALRYB");
    msg.maneuver_type = 29735U;
    msg.maneuver_stime = 0.992249262031937;
    msg.maneuver_eta = 4203U;
    msg.control_loops = 3260513412U;
    msg.flags = 12U;
    msg.last_error.assign("AXMXBICDZETJTYWSTQPZCJYFJORRSJRTBPMAQTBZAXVIVCHFMRYVEQZLGNTKNWDSAGNCKOJDTAEYSLVKQMZPITHIFSBMRGSFURSWBUDLXZMMKSOJGOUEUHDIWELGQYHDYKINVZUPMDYZ");
    msg.last_error_time = 0.8698597254052067;

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
    msg.setTimeStamp(0.7971284099175993);
    msg.setSource(64596U);
    msg.setSourceEntity(99U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(216U);
    msg.type = 77U;
    msg.request_id = 22655U;
    msg.command = 121U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 10938U;
    tmp_msg_0.lat = 0.49323367645498284;
    tmp_msg_0.lon = 0.9741246985061143;
    tmp_msg_0.z = 0.4735520720388292;
    tmp_msg_0.z_units = 140U;
    tmp_msg_0.speed = 0.2549655192728145;
    tmp_msg_0.speed_units = 57U;
    tmp_msg_0.custom.assign("FGFNJEARHPTQOAYRXDGIACFQIGUPPHJDVQFDPIZFHWVDIDYSCKGIPKRSXREZXPHGCVHMKUXTQYWNGKFEWCISKNAZBLLWERIRBWZMQNPWNNVLPMQEUTZRURQGGBEJUMTWURXUCIPKCMVDOLO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 54906U;
    msg.info.assign("BKSHAEPYISZLSAOTYUJFMGRBCADZBQWPMGTXSSEDOSYNQVIAHNGLOXUUEEGISVVUFEYNXFBMHLBICFWFDZAQGKOYIMUTVEJCCGULCRBGQMFNLVKVUBUQKJTIHTPQFYXZKMJIRZAKKTDRNNIVKRR");

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
    msg.setTimeStamp(0.8645218856832797);
    msg.setSource(13741U);
    msg.setSourceEntity(54U);
    msg.setDestination(18755U);
    msg.setDestinationEntity(88U);
    msg.type = 48U;
    msg.request_id = 23302U;
    msg.command = 9U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 40432U;
    tmp_msg_0.control_ent = 241U;
    tmp_msg_0.timeout = 0.735522451006268;
    tmp_msg_0.loiter_radius = 0.9181481791406823;
    tmp_msg_0.altitude_interval = 0.2834350675556704;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17692U;
    msg.info.assign("JLLTDHZEUEUWVYETBEARC");

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
    msg.setTimeStamp(0.896696956628121);
    msg.setSource(194U);
    msg.setSourceEntity(92U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(241U);
    msg.type = 182U;
    msg.request_id = 4400U;
    msg.command = 184U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("BWBSZLBZDQKEZYIVAWZMYLQNWJMEDPQUNMAUMZAFDUIBKKCCUXKTGVDNDRUZULVWGKBQRSIOOSXBIMPCOVJHNWLETYVHWDBICVNYNUOXBLXJDUDBHGHJSJPQICRQGXXRYIKTQHKYWGRGJJEFBOPTHODRANACHACNSVZGFOFTAQYLWZATLMVLZSGFEVYAKFQYIHQNPTMUMXCGFRIXTUWFORJYCVPLIOMJKODPFTXS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 17165U;
    msg.info.assign("FSSIOSGRXHZZEQZFIVASWINZYLPYLUIGPDBPPKMDSCNZWOUAFTAOHFGIRFBXWJQVMEEBCAKRZBDIXXDDQQKCSJZLNAJJANMHIHULSMEVYRRWRDTJCCUWRWDFNCUXQYZBKEXXWZOKJDGHQXXUSTKVTYGSATHWECQULIONKMWORDHUGVJRNBQJEOYWBBPLVZVPFMTTAJNUMNGREQVPPQDNTGOMPCSOFKHCAVEHYJ");

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
    msg.setTimeStamp(0.7562528143347079);
    msg.setSource(40558U);
    msg.setSourceEntity(8U);
    msg.setDestination(54337U);
    msg.setDestinationEntity(151U);
    msg.command = 191U;
    msg.entities.assign("WJCGNYZYXKJOXSHEOKUMXDOFTFHHKXVTGDJWDZFGQZMKGLREUTHOSVPLECFHEUQDLPGDYPSHQHWEUG");

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
    msg.setTimeStamp(0.9128640485426835);
    msg.setSource(36321U);
    msg.setSourceEntity(181U);
    msg.setDestination(1085U);
    msg.setDestinationEntity(95U);
    msg.command = 149U;
    msg.entities.assign("DSPJIAXLFKRZRDDACGIWKQGHLFQUANCTTEAJPPWEQBXUGAVPSCCCFFTKGIMIOIZNAYQJZDEJBWCCOHEPTQJJSPFSTHFKUCYRJMPXNJWUHXUUKWWMYVXGKUAPDYWLKVZIAGOVLEBKQIRSNRVILETXBDWHPCYDXHDGZJZIBMFBXHXSWLGMPRNMUNYTWUYMOJRMFRFEZVTBNFHBHAKOBNQOVDYQYZELHUTMSZ");

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
    msg.setTimeStamp(0.946776569447256);
    msg.setSource(50581U);
    msg.setSourceEntity(192U);
    msg.setDestination(52731U);
    msg.setDestinationEntity(252U);
    msg.command = 17U;
    msg.entities.assign("ECQIDVXCCWJLVMKVXZ");

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
    msg.setTimeStamp(0.3897295817829388);
    msg.setSource(65258U);
    msg.setSourceEntity(232U);
    msg.setDestination(42167U);
    msg.setDestinationEntity(61U);
    msg.mcount = 15U;
    msg.mnames.assign("QPKAQLWFMPKXIICBPFSWBNKDOIIIJCYWXJEJRRGNGIJTMXVAWQABMU");
    msg.ecount = 10U;
    msg.enames.assign("ZDGAZVYEFMNUCTQYJVRQHVDYGAIXKBJREVSTPADSTEZZJUUBYKTJFKLNKJXIXWKBATPRJFOLBQWLUJLOHIXNLSXWZRHZQBSPLYCVKQAWWVPAMDIZXPLHICQRUHRGTGFVJSMJMPEXYMYKUQUIMAZOVWCXILEPFFQ");
    msg.ccount = 75U;
    msg.cnames.assign("UXAQCIJUBIXOQPISEOBUCZJKUWGDLEGXECWASVHRNPZSRQCAFALJXFDKNSFMKXHYNFWFZVKULGSUJGJETXYRQDRYTIDPHXTOBPIYGIUWDEVIVUKHQPNFNTBWEOSFLGMJAZCBBLNZTCOMMTMKBRWKFALTMYQXCYWLAMZJQAYIOKWVVDHVSLMZBPCBRPYMOTHIHPFEPURDSQRDGTMZNV");
    msg.last_error.assign("ZJLLMWJXGIYWYRRGTDOJUTMMYAGVQBEJEPDMXHFNMVDGGSKJXNPHMEQVASBFWQADIVTFOOWYUOECHHBXURCNAIHTQJOZUD");
    msg.last_error_time = 0.6593603713266538;

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
    msg.setTimeStamp(0.29066411563250183);
    msg.setSource(57442U);
    msg.setSourceEntity(18U);
    msg.setDestination(40878U);
    msg.setDestinationEntity(24U);
    msg.mcount = 38U;
    msg.mnames.assign("QUAYYFVXVFXXLEXRDBGQRMXPNNRBZOLTHZAUGAURJPPTXKRTWCLHRDHVKIYICVMDFNKOTESAYMDNRADVYEGXMPNAICIYBXCFHPWMMZBEKVONOE");
    msg.ecount = 208U;
    msg.enames.assign("CHXPBYLRXKDFQSMROUFPFJAILOVQOFNQEHGJHYYDZTNXQKZCMVLMEQZOWFGZWEJPVKXHRPCIVUDANMCYZQJRIDXIUHLOGNBSPQIQTHVQVMJZLSK");
    msg.ccount = 49U;
    msg.cnames.assign("YXBEVLAFIPXZBAUXOLLLDOCUZJDWRTCTZYGPWYHGNIHYDCOUTKISDKSGPMKMQQEAQXIULLQBSGJVUTMGRUXZVEJOYWPQYWSYIFXWSKDVOTCMFYWLVGECFJRACPFUVJNRSLFSXXDTPBQAIRMYPUITOZNNECHGSPZCDMONJHFMIVNLBRRXDSZWSLKGRXEYOHQWJDRZMTQTPIZKBNHFNMVVHWKQEHQAJUUAVBOMDEJAKTBWKGPI");
    msg.last_error.assign("NGICEKJYQEZIWZEHOTGIUOVBBJWVSIRFHHSLFURTTESWVUASHTMNYTKJRWFKQVCUOWQEKZONORUFSCWZMLWDQPIOV");
    msg.last_error_time = 0.5630952849977255;

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
    msg.setTimeStamp(0.05713312010085325);
    msg.setSource(16338U);
    msg.setSourceEntity(151U);
    msg.setDestination(20248U);
    msg.setDestinationEntity(207U);
    msg.mcount = 82U;
    msg.mnames.assign("OUDCOXUHNXOLQIHFYFCVSFGGGPMSQTCQFRPWEXLSTFKGLVETEMUBRQKGAWZBSVTIDMAYHJTIKZWSWJXXGXPJYOGCBFMSBYUPVHUBLPCDOS");
    msg.ecount = 213U;
    msg.enames.assign("LLXRMBFNYHCIQJLACKRYTEKUZVDAVFXWCFDDJMHPEVYBPYIOSCTZOJKDDFXAQMQFGIAZQEHPUVUNUKEJEVZWGZORVKBHBJDMOMALIPJZSWJKGDEQLTEPRJTMJWYNPWPCYNXKRTVNDZERWZHFOORWUWIOOVGABRRBBTLSACMSSMSGNOAWNXGHCSQPSBFKXAVTDICFZNKFUQUEXGWOGIXLLMYGYNLVLB");
    msg.ccount = 102U;
    msg.cnames.assign("KXRCLNNJULHJXMGXIWWAVZMLBSWGQNRMPSKNMXVTAFEJTQYKKJPMRBKBKAGPECTLNVBHLLFSGMSFPCPFVBORBDTBDWJXKZXNURBLIAZTO");
    msg.last_error.assign("PLYXAMQZSJNMKOKRSEWWBYCSWRPYKUTJIRLDBHLDUUEEXPWEZMRGNTIXPPYNMKPXUXNVQMTWLGNEDFXQAGCMTSGVJAKRCDQILRKUKKHHZIYLYPOBLDTTNBNDAFGFZGHIRTRWQXUFTMAUASCVVLQAENJPVYNFISSTZIUZGAHVZHEFFZMSHWIVFTOXGVM");
    msg.last_error_time = 0.22656365413197377;

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
    msg.setTimeStamp(0.5725585586348871);
    msg.setSource(38409U);
    msg.setSourceEntity(220U);
    msg.setDestination(56560U);
    msg.setDestinationEntity(116U);
    msg.mask = 127U;
    msg.max_depth = 0.0020723448948536394;
    msg.min_altitude = 0.7544519536561267;
    msg.max_altitude = 0.21407852471133892;
    msg.min_speed = 0.09103418728950674;
    msg.max_speed = 0.11664816623601726;
    msg.max_vrate = 0.0003652952526000952;
    msg.lat = 0.6597150364757882;
    msg.lon = 0.68650759977076;
    msg.orientation = 0.8613533201801102;
    msg.width = 0.1364818723559229;
    msg.length = 0.2298844506047134;

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
    msg.setTimeStamp(0.28175087137988475);
    msg.setSource(15359U);
    msg.setSourceEntity(117U);
    msg.setDestination(10597U);
    msg.setDestinationEntity(46U);
    msg.mask = 50U;
    msg.max_depth = 0.8408788276670978;
    msg.min_altitude = 0.9930001002938824;
    msg.max_altitude = 0.5788545367658862;
    msg.min_speed = 0.737431625675349;
    msg.max_speed = 0.22513258791426527;
    msg.max_vrate = 0.41155121915732895;
    msg.lat = 0.2522679994968985;
    msg.lon = 0.23220810581223972;
    msg.orientation = 0.32074958663695396;
    msg.width = 0.42068894454545624;
    msg.length = 0.04102753192892461;

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
    msg.setTimeStamp(0.8203646160353028);
    msg.setSource(13516U);
    msg.setSourceEntity(95U);
    msg.setDestination(38440U);
    msg.setDestinationEntity(15U);
    msg.mask = 82U;
    msg.max_depth = 0.3097162737622501;
    msg.min_altitude = 0.2106789625756671;
    msg.max_altitude = 0.8720310450768729;
    msg.min_speed = 0.9448368161181173;
    msg.max_speed = 0.6445308144699164;
    msg.max_vrate = 0.1664998173846235;
    msg.lat = 0.44348478018941984;
    msg.lon = 0.01829138265977881;
    msg.orientation = 0.29224818968402233;
    msg.width = 0.2877874292967958;
    msg.length = 0.2250189590319146;

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
    msg.setTimeStamp(0.11301493736650914);
    msg.setSource(28584U);
    msg.setSourceEntity(47U);
    msg.setDestination(49225U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.504243128643298);
    msg.setSource(14236U);
    msg.setSourceEntity(197U);
    msg.setDestination(51835U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.36466291052016275);
    msg.setSource(32956U);
    msg.setSourceEntity(161U);
    msg.setDestination(45843U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.4560182872450862);
    msg.setSource(48145U);
    msg.setSourceEntity(38U);
    msg.setDestination(60102U);
    msg.setDestinationEntity(186U);
    msg.duration = 47395U;

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
    msg.setTimeStamp(0.6375705975932483);
    msg.setSource(16675U);
    msg.setSourceEntity(202U);
    msg.setDestination(41268U);
    msg.setDestinationEntity(5U);
    msg.duration = 23023U;

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
    msg.setTimeStamp(0.9031784240816778);
    msg.setSource(42343U);
    msg.setSourceEntity(118U);
    msg.setDestination(30514U);
    msg.setDestinationEntity(36U);
    msg.duration = 37827U;

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
    msg.setTimeStamp(0.6357934461609314);
    msg.setSource(8603U);
    msg.setSourceEntity(232U);
    msg.setDestination(38315U);
    msg.setDestinationEntity(132U);
    msg.enable = 172U;
    msg.mask = 626956741U;
    msg.scope_ref = 2142561084U;

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
    msg.setTimeStamp(0.4662736450477535);
    msg.setSource(25727U);
    msg.setSourceEntity(191U);
    msg.setDestination(29499U);
    msg.setDestinationEntity(136U);
    msg.enable = 72U;
    msg.mask = 1946189833U;
    msg.scope_ref = 660955821U;

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
    msg.setTimeStamp(0.7776005718406133);
    msg.setSource(8115U);
    msg.setSourceEntity(206U);
    msg.setDestination(24954U);
    msg.setDestinationEntity(47U);
    msg.enable = 170U;
    msg.mask = 1794879695U;
    msg.scope_ref = 3667689928U;

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
    msg.setTimeStamp(0.9525999479184619);
    msg.setSource(59684U);
    msg.setSourceEntity(19U);
    msg.setDestination(4122U);
    msg.setDestinationEntity(92U);
    msg.medium = 103U;

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
    msg.setTimeStamp(0.22180706077510493);
    msg.setSource(41552U);
    msg.setSourceEntity(145U);
    msg.setDestination(5811U);
    msg.setDestinationEntity(109U);
    msg.medium = 223U;

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
    msg.setTimeStamp(0.28851892806265533);
    msg.setSource(58656U);
    msg.setSourceEntity(206U);
    msg.setDestination(1959U);
    msg.setDestinationEntity(151U);
    msg.medium = 77U;

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
    msg.setTimeStamp(0.8985380209102847);
    msg.setSource(26180U);
    msg.setSourceEntity(34U);
    msg.setDestination(52218U);
    msg.setDestinationEntity(138U);
    msg.value = 0.2232367331879619;
    msg.type = 127U;

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
    msg.setTimeStamp(0.06667670790515445);
    msg.setSource(6113U);
    msg.setSourceEntity(200U);
    msg.setDestination(60503U);
    msg.setDestinationEntity(47U);
    msg.value = 0.4068896745895171;
    msg.type = 24U;

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
    msg.setTimeStamp(0.4224792963828218);
    msg.setSource(30972U);
    msg.setSourceEntity(65U);
    msg.setDestination(3573U);
    msg.setDestinationEntity(69U);
    msg.value = 0.5019026053387394;
    msg.type = 109U;

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
    msg.setTimeStamp(0.4504358833975406);
    msg.setSource(28710U);
    msg.setSourceEntity(139U);
    msg.setDestination(4008U);
    msg.setDestinationEntity(16U);
    msg.possimerr = 0.63247817788432;
    msg.converg = 0.4237070829910137;
    msg.turbulence = 0.5956628897569258;
    msg.possimmon = 70U;
    msg.commmon = 228U;
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
    msg.setTimeStamp(0.5915429582056966);
    msg.setSource(23045U);
    msg.setSourceEntity(133U);
    msg.setDestination(49046U);
    msg.setDestinationEntity(226U);
    msg.possimerr = 0.2041086321861033;
    msg.converg = 0.09623311171930038;
    msg.turbulence = 0.9357495678182913;
    msg.possimmon = 174U;
    msg.commmon = 136U;
    msg.convergmon = 140U;

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
    msg.setTimeStamp(0.928520247672459);
    msg.setSource(3756U);
    msg.setSourceEntity(121U);
    msg.setDestination(22002U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.4047549712204611;
    msg.converg = 0.27033124510065687;
    msg.turbulence = 0.2981593104714092;
    msg.possimmon = 219U;
    msg.commmon = 114U;
    msg.convergmon = 224U;

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
    msg.setTimeStamp(0.9767877233847347);
    msg.setSource(32623U);
    msg.setSourceEntity(175U);
    msg.setDestination(57455U);
    msg.setDestinationEntity(220U);
    msg.autonomy = 180U;
    msg.mode.assign("XXTKNOBOUQKJVLSNFNZXDVMDPRASDBYIFYULRDSPSNEOOIKKCKBXHEKRMXWFXANMCJNUQS");

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
    msg.setTimeStamp(0.0533199658519905);
    msg.setSource(9296U);
    msg.setSourceEntity(55U);
    msg.setDestination(48709U);
    msg.setDestinationEntity(191U);
    msg.autonomy = 164U;
    msg.mode.assign("UMWNVNRUGSHQYWTLVVRQHNIAKUEKZJTUFWHGXEZOVFJHCIGZVBTCGKCVPSMBIPKTSDWUJEEJHXFTPDHORQHYARGSWNUDZCOKSDSNO");

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
    msg.setTimeStamp(0.6806908311507701);
    msg.setSource(55319U);
    msg.setSourceEntity(6U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(96U);
    msg.autonomy = 32U;
    msg.mode.assign("OEGZQDMFZTHAMRIGGJLXBSTFHFXEZHSTONMNLELERMBOKANEAKKMJGNTVYBZWBXCYLFIVREOKRFRCQTUWWNUVPZCLFPRUTYSVOOYKBXYCEZUQPHOBULSDAZECGZGZNSXDHZGARIDLVNBI");

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
    msg.setTimeStamp(0.07011286020938279);
    msg.setSource(38429U);
    msg.setSourceEntity(39U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.8871325475547945);
    msg.setSource(40578U);
    msg.setSourceEntity(175U);
    msg.setDestination(18603U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.17099565727351462);
    msg.setSource(22224U);
    msg.setSourceEntity(240U);
    msg.setDestination(41019U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.4901860962897696);
    msg.setSource(59799U);
    msg.setSourceEntity(235U);
    msg.setDestination(31242U);
    msg.setDestinationEntity(235U);
    msg.plan_id.assign("ODOMYLVLSCGEMSYRXAFNYAIVTTEPWUWFSGDZJZGIZNNYPAFMPCNNOIAHCBWPBFLABKDXXBMSKXEFKLHSGRDCRHDWEKKCKTTLUGRICZIVDOUXZJTTTYKYUZ");
    msg.description.assign("UZBRGPOJUGNEECTMFRZBAXKGXSLDCNEGXVAHEKJCRWJIINPUDADVLDUOAGPXLNAXJHHPAABFEGNEROZLWZQSXBCMPIIWZYTWSXSQCYQJZTTMMBLOWBTUBSHRYSGOKHKWSMEUQVC");
    msg.vnamespace.assign("ODLHTUGYFJCZYMRBSNXAJMFFZLJZQOGJXHQQBCZUTWLADNMPKBQPROKWLXAMOOHFCVCICEWUADZRFBOITTQNROBECJKJRZP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JLLSDMSJOWZRXYLKMBKBJDAROYZWKEWLBM");
    tmp_msg_0.value.assign("AKLXRSUZLDRHHIOYRHYKPXVTNQILIEPOUJTNFKKWQQFNCOJMGHFKKEUZAJWRMZLZ");
    tmp_msg_0.type = 20U;
    tmp_msg_0.access = 153U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("YUKCRBGUIHCEPJRYQNPAVTSAVKJHCNGDYMZMYGRWDWVCJWRDUDYPALPGEZIIZQMCVLTKOLHNORHAHZOHIROLIQXPEJYGEIFGIUWTNGXPSJQXNMBWAGCAJAPFNWTBQZXORZDDBHONDXVXXAFMVSQRCAMJHZFBKSURDPJUOLBLEXBQFWLSQDVVEKOIFISE");

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
    msg.setTimeStamp(0.6328104173829731);
    msg.setSource(15269U);
    msg.setSourceEntity(118U);
    msg.setDestination(34773U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("LOJQLRVHFFYDKZHRWFEQATSFYBLUTTAAMUOGSHYREDNEUXGJBVNFYCOEHRZJRWCJUMIJSYZIBJEZOKWUMXZJXNIENRACGDOSXPDPHLMTOIOCNKPACPNVYXDGAKHVWSTUAXAQECLGRGGSIQXSWHWSIZJLYXB");
    msg.description.assign("JUUDHBCIZVBUHIGDACXZNFVRFPSBAKRDTNVZNSYMMCERQORWMSUDEXGVGLMRACHJELMDWRSFLNFBSJJEFJSHQIRTJEFQWNOCMZWEYXGQXUTVUTOVNJOAPYBHBPEHEXXQTOCFZHPOFYPIAXTLYKLZYIITWIULLLMYSDFMKSOWUUKQMFOZWQXVPDDDIAGYUZWO");
    msg.vnamespace.assign("YHCSUIZLTNYDGFPSHOXVQPNJYLEEFRWNHHSNEDTRRZJAGOATIYBSGRLZUMEYXXMICMDQVBFFJLIWZAPKJJDEEMQAIWXMVHQHRGYSGLMJDFVNNQJXGZUHBPCXTACOCWLMILASEISOVJPQSLEXPZIGRRDUQAWWFSKKZHNYBGDTISEZXVCLPBOADCJZKTFYTHYKXBUOEQWBUDHKGPRKFOPUFRCCRZVBGDMNQXKWKFJAIMBNWTKYBQUM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RTYORCCVUDSSPUDOHKFCGMXKMTSPEYGUEGLFVPRKMFAFPKLJSWNEYVOXCJNKDWYIHJMUBZZUVQVEXMTSIECTPYNEPOIGHTYTACCXJJUKXGAYUNJLKTXOHCDIFCFOPROMWHZQFSGPUATGZKBDKHPDLFNNAHBSLBLSDWORFLLEBIAAVN");
    tmp_msg_0.value.assign("CVPMJXDRHEPMSNCHQVWJGANPYCRHYKGZUMJKXXZOTTBDINKSBHTWDAOHVZIKSGUXICAZSMGHXDBCPOZLAHTEYZPGMQOLWGBYAL");
    tmp_msg_0.type = 247U;
    tmp_msg_0.access = 242U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("REFQGCZOEMDWSJTIEMCDPZXLNMYQVOXQVGJHXLIMOWSOLSVANTTFOLXIKMP");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KTYUPGCXFVMWUBMQCOAZNKWEASJHHBJFDISNVCBGMSSRLGTCVNOXIMCLKJUYFYWIPQGEJXOKQDXQDCZGFVETFFCNESREKGMDNJTYKDZKZUBXQNZTKTPRHSUELQRAJVBPYNDSNLOOLESQHDWZTFWALURJXMBOKWPTAEQFWVMIHXGXIULIPAWVQAAFGCZDIRMYMBUDULHWHYURONKLXFWBEHQHBHDLIGSRVOGNAOYCJPRZP");
    IMC::FollowPath tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 58423U;
    tmp_tmp_msg_1_0.lat = 0.33006234833646775;
    tmp_tmp_msg_1_0.lon = 0.8191788244284829;
    tmp_tmp_msg_1_0.z = 0.6846536924396401;
    tmp_tmp_msg_1_0.z_units = 157U;
    tmp_tmp_msg_1_0.speed = 0.9027349308436359;
    tmp_tmp_msg_1_0.speed_units = 191U;
    tmp_tmp_msg_1_0.custom.assign("WOQCJUTFXKJLXASPXBZSEWUUYKDCZJFMGQRECREVBATGBXLYXHNJYFABNUIIVIHYQABPJWBMHBVJRRQHDSCUAWVJTAZFPSDROGDDEKLQGVMIVCPTNVHHW");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.5527944161615186);
    msg.setSource(63563U);
    msg.setSourceEntity(172U);
    msg.setDestination(25763U);
    msg.setDestinationEntity(184U);
    msg.plan_id.assign("GALTILROOUSZNGSYBRCZQNFVVSFHVLJXZXTZFWHDVMLMVQIWACHOYXXXDEEUTKKMKGPIEJNWNLDRPDLPKBUUVQRWHHRJSGJGRGTXWAFSRYLEQCMOIZEOCETBMTQRPJKBJMTJCICFSQPXCJZBFYBDWPRAHTIMFTOQBRGQUVEBMZNYCHSLUPBCFMKNDEZNAGAQZXSPQKWXNDWJDWMXONU");
    msg.description.assign("IMNYWPZMUHCSVMQDTVRTNFCUVDYXGEEKUDAFJZIZFZHLZFRQPWXBXQHKQKOBBCVJPYLZMGKHOLKMLNPEJTMXYJWUEDUWMXEDOQGFVNICGSLYOSYKIVKEODCTGXMCPOSORDUVYZBGIVXBHAUCBMCZKQXJFUSXTEYPLBYEJUAOIOTXZBWALSARSREQRRJTPBHLADQFPGILUWFTAMKNHWGNQ");
    msg.vnamespace.assign("OILZVJXHAMBKPTYUJFOAEQTTJZWADTKPSWDNMDBCLAREHXXUUEGQHOAFGCCBQIODHIBSMCIQIYJSYWUEOICQEHHFVSWRSGXYZVRCWLBNPJNFNMFVBJZJQKAEWPJMOOTSYWULUHCLVUBGYKEKVCWNJNDRLQVVIBEXPKHXCFPRGHMDXYMKRFLDTNNUWSYGZEGXNFSGZVPDA");
    msg.start_man_id.assign("ONSTTWNKFOTVUBCMASMYPDNQUDKBTYVLFCHBHXNBSIYCGIHCFGKRXASZYHKFKVROHVMMBAGJNEFAQQBCPPZVXLIFVWGNULZXVZWVDSATCATWCJTOLILTPQGXEKRJFWDMKYGAZETBJDNDJPZJCAMFUXWEVAIDSKYGRZSDIINHKQHWSYLUUUUHYXQPNCOIKFZUQJRBRBUZRWJQO");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.607707604448624;
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
    msg.setTimeStamp(0.8637035609396242);
    msg.setSource(8466U);
    msg.setSourceEntity(228U);
    msg.setDestination(26471U);
    msg.setDestinationEntity(68U);
    msg.maneuver_id.assign("DNTQSGCMFBEJYWOJNUSETJYYZKEHIQZKSHHZNZWCCZXKAWTVPLLUEBBLJPDVCBKFVXVRRTDZKGVMPALNGPBLCLLFWZTUXMCWMLYVDGSMVHROHNOSJXYQSMGCWSFYOUFAXPJEIDZSGAMHPTFWHSRMXXDVFUHXBQNDDNISPLRRAI");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("RXEZACSHMZSLAQPUWCPDWUPJAWMVAMTQIHSBQLLGJKGNCLDVJYJJOOMXELLNKBYFVXUEUOBWERGQHYMFSHVKTEHJWYXJFMOWATVSQAOIKBDKBSHMTOQGREDTPPZXE");
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
    msg.setTimeStamp(0.7118253707152585);
    msg.setSource(56917U);
    msg.setSourceEntity(247U);
    msg.setDestination(44748U);
    msg.setDestinationEntity(61U);
    msg.maneuver_id.assign("YXSXBCCSCCYLNVRZXGAYFVLEOGJOHOLBAGEWTINOULIWDTOMKNLCNDTWSXYDBXAJXBZTQCILSQJUCSAFUDMJMQSGQSJRPRTVKRVMHYKKKHRJEPQQTNDHJGMZDFABRPPZQVEQRVCYGGPPMVUIZOERWAJEHGAVWFXFDEKCFLUBSHIXTNXPBU");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 53032U;
    tmp_msg_0.lat = 0.6823731420779036;
    tmp_msg_0.lon = 0.6091498923038798;
    tmp_msg_0.z = 0.8666583493262029;
    tmp_msg_0.z_units = 118U;
    tmp_msg_0.speed = 0.9154352004208963;
    tmp_msg_0.speed_units = 191U;
    tmp_msg_0.custom.assign("QPZEIFDOPHRSRVCDEOXARQUCGRTRTZEHNIQHLLKFBLOFXMRTGUFKWGDIPAKKJTGKSIAIAQDVGEWGZJRNA");
    msg.data.set(tmp_msg_0);
    IMC::FormationParameters tmp_msg_1;
    tmp_msg_1.formation_name.assign("CFIKGDRBDCKCTQLOLFOACDLUPAVRHGRVZFSYOFZFNNGARARHHNXIZUJDOPQFVER");
    tmp_msg_1.reference_frame = 125U;
    tmp_msg_1.custom.assign("ULTGNEPFJCOAXCDSVKKMTFQKZIOBHFYWCOZILNWTJFJRPPKDYNUZPNXEZWPOHKEGZMYOVSQWSDQVXJAVXAWRZBXHT");
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
    msg.setTimeStamp(0.3389542399677864);
    msg.setSource(1219U);
    msg.setSourceEntity(226U);
    msg.setDestination(54695U);
    msg.setDestinationEntity(160U);
    msg.maneuver_id.assign("GDMLXTTENJGHRMAMVAVPTIDIOTUOGMMSAYUBQGNQVSPAERRYROZIBCUWFJUZWBSNAKYZALCPVDHAMUXRJSZCZIDOLNJKSXPUKQOCXREPPIBIQQLJFVRFPSSRVQJHQEGTYEEDLKMWDYHCRKTCPFEAAHYZKXCWKU");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.path_ref = 373741688U;
    tmp_tmp_msg_0_0.start_lat = 0.7506931773741712;
    tmp_tmp_msg_0_0.start_lon = 0.35922339326295094;
    tmp_tmp_msg_0_0.start_z = 0.005957936702826849;
    tmp_tmp_msg_0_0.start_z_units = 157U;
    tmp_tmp_msg_0_0.end_lat = 0.8135023246322209;
    tmp_tmp_msg_0_0.end_lon = 0.16729840872814794;
    tmp_tmp_msg_0_0.end_z = 0.24006789120082872;
    tmp_tmp_msg_0_0.end_z_units = 45U;
    tmp_tmp_msg_0_0.speed = 0.4858908458033999;
    tmp_tmp_msg_0_0.speed_units = 26U;
    tmp_tmp_msg_0_0.lradius = 0.9652243285184219;
    tmp_tmp_msg_0_0.flags = 183U;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 34466U;
    tmp_msg_0.custom.assign("YBGORRXNQIWCSPMRLXZFZNDGASJFMTSPBWWGARLWEXNGTVFEGFCTPZLLDDXEZEYSSIOJOHNCUMXUZTYHCEYOVBBHACTASSNFFYWSVISRKUWZVIPIKHURNXOBOXFGIEZPEORMDTFAZMAUDBLJLPQVELJKJHAXEFYJCAKASVNQOIPOBIHCWAJMVHCNUGHKTDBQWUGUYTKBJJOMHRKDPXMGIVZQWDYQLCRXUZTQJMPNYK");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 37296U;
    tmp_msg_1.lat = 0.32655877445770476;
    tmp_msg_1.lon = 0.6033216681294656;
    tmp_msg_1.z = 0.27004422397407657;
    tmp_msg_1.z_units = 9U;
    tmp_msg_1.speed = 0.9279981574507459;
    tmp_msg_1.speed_units = 7U;
    tmp_msg_1.duration = 704U;
    tmp_msg_1.radius = 0.6302413445690016;
    tmp_msg_1.flags = 181U;
    tmp_msg_1.custom.assign("JIXXZJPXAYGIRQFLTEIKLQKDYSXJHLXQBNNBVTKXDEWORRKKYOHHPVBGEUOPUMMJQCYWKBEZGUFUVHNPZXSVUHOAJQMQYACMNMBAICNSUMLADOTS");
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
    msg.setTimeStamp(0.5170921508840672);
    msg.setSource(57254U);
    msg.setSourceEntity(187U);
    msg.setDestination(30650U);
    msg.setDestinationEntity(58U);
    msg.source_man.assign("PWGLDFRXJMXYVPEAUSTUAYQPJKPSSCNMHEYFUJIMNNJRAEUYGJJVSFNRVXYBMSYBDKSHWEIYRZEXTWBQVIOSKALXUQJNZZDLMYWPQEDICGDFNQMGTYBUKSBLKGUWTMPAVRCZBIGIAIZRHWFZEHLXJICDNEACFOAGQCJZVQACOBNZONEMOWFLHSHOTVKTUVOEKXFRCOMCJNQLMGKKPZHWQTTHPVOZKXHRRTUXDIBWRPOFLTQAFBCSPHULDVXGYG");
    msg.dest_man.assign("VCCTGNJVXRSVDMWASVEFGGCUOILPSIVTKDEINWQZWLFFJCHMYHQKPQWOLFRQIQSMFSRCEYUOIIXAOUJBLETARKYLSMXDJUCKTZDDIENUPFQR");
    msg.conditions.assign("QDKUJGGMADJTUNFUGHVFYXCBSZWNFRDHWEJCFRUVZLPIZKEETALRWIELAQEXHYALNGEXZQSWUITXHNQOGIYWQAUCFROLGPTVROUXSROMXHMEBRBIXJKCLXCYLN");
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("JOHAFVTDYSWNZMQEVZJOHAKBMHKEIVSYBWUXASOXICLSQPBPDXSDYIWPXZMYBIQKKILXDWEACKC");
    tmp_msg_0.state = 166U;
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
    msg.setTimeStamp(0.6790603874887015);
    msg.setSource(44284U);
    msg.setSourceEntity(249U);
    msg.setDestination(50944U);
    msg.setDestinationEntity(195U);
    msg.source_man.assign("PEHTBLMHQJHYHIQWEDVTJXFGYXACAOCMYPORYDVYFOFIOIZCHDFWGGSUALFKMU");
    msg.dest_man.assign("IXWAHZMEFKDZLSTWVJYDUEVZXBSQKMQOSVVRGFOQUGHUHHJCKKMEIFXSLBJDNINUVMRRUDRFSGTKNCJGMYTTPKZBFYCLKOOPXTPXPALVSPTFJANNYJPBDO");
    msg.conditions.assign("YAIUNSLVAOSSADRRPHBNNLGZQWXRQJFNQZJIMMAQHXKSHOQGZVNOWGPZSHFCSKTEIKDRVPNAQYVTCMCFBKSZMNDBROHWJKYFPKQLCDPDSWJEACIZYMBIUIHORKCXLXWYTVYBHUEWWMHLTQBOLAUTZCWEJCIPVNMGFDLVQCGZDFRXOPJVMIEIGXOHAEJUBRYDXRUUJUSLTJPOWWHOKMUYFDPUTLEDCEGIP");
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("WDNZAFFREJAZMFKYSGEPIOWVCYPETLQJAALZYSXIYWEKBHWSHICATYJOGRNOVATKGC");
    tmp_msg_0.sys_dst.assign("RNJZUVOETGZNRGD");
    tmp_msg_0.flags = 75U;
    const char tmp_tmp_msg_0_0[] = {-71, -94, -9, 98, 64, -109, 62, 14, 22, -114, 115, 10, 73, 90, -15, -61, -4, 64, -85, -49, -116, -121, 46, -72, -56, 93, 88, 70, -105, 108, 31, -59, -86, -117, -94, -61, 0, -7, 66, -27, 63, -51, 70};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.15941212410518735);
    msg.setSource(41110U);
    msg.setSourceEntity(181U);
    msg.setDestination(57686U);
    msg.setDestinationEntity(46U);
    msg.source_man.assign("BCSRQNAWMJLHXIMIGIEABVSEIVCCVOJHBAUTTYECSBJNUAYFSMXZRFJXPNTXWNJOTQDWVNOGYHYQULVBRQLPOLUZLGXHCVARMGGAMTQHYKPRQITACKCDHZZULOPZZUXWXKPGZBYKNELVJWMFJUIOFJKRGKUWEDEGOSKMKYHRWFVHLZMYZEJBIDMDWVEITUYRPLSCSONBXADSQFIECJBACIU");
    msg.dest_man.assign("WBWPCAWZBLQAFOUQYVZVAFGYHY");
    msg.conditions.assign("NDQMLYHJFIALDMDVFRKQXWZGPACBVPYZIBMHDHPZPACJIVRWDWRQLNFJIBHOKVYEUVSPNACNRPCRQBOOYCSAXYRWNLJIHZXTRBIGTCTJLZCSRYOGVZTJLFPIEGMEHSZMQH");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 148U;
    tmp_msg_0.value = 107U;
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
    msg.setTimeStamp(0.9487205767177507);
    msg.setSource(8215U);
    msg.setSourceEntity(77U);
    msg.setDestination(6370U);
    msg.setDestinationEntity(121U);
    msg.command = 230U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FMVCEKTKZYZEJZXOIYIKLVGIOBXRNBMLQEOVSKHHRTKVXPVACCGDHGVBDXFXSNIOZPVCMBPRJJXUGLWDPAZFTDUCELKQZGOYRFAKFHTWFUMCSRQAWWKMIYPSDFEULCYNEILNDOZIHPMQILWASZUTPAUQUKDFZNDBREHFCRWQNZJBGNYHTTYCAILDXNMMVFBVRWYAUBGHSYSJKQPAEAQTEXURPWJJESGPXCTQBQHLJGSDVROJB");
    tmp_msg_0.description.assign("UCMOKRDSELWPDFTISCEYYMYUMLZEDHQXAGHXCKLFZYAPVWKYFGQEBRAEGIXGGVDHKENTKPLJOPUROJNWLUIBHHTYDJSJMKFGPVUKDXXBTTIHPCTCIIZGVRAFJZNYIOGOTRLVS");
    tmp_msg_0.vnamespace.assign("KGWWINYKYRZCITMUUFPRRPWFHQSUGINKPSGYBKGLLVDVTLSWHDQACDTLQFXFDQKPMEMABOAMONQXMNAERFSSTZNXSUCVRVUBWOEQZNEOXJZSCFBUMUNQRDZJTGONROZPBCYLTLPQISHIHJCGSMTUHQGVOYDKVHPEVKIMJJXEMCKDYBJFLAXDRWLEAEHAFNJEJYVIOLXBBFYOYZCXVWROZPILJIVCSTWKAHZMHYGWW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PDGIMWYPGTKVCZFHALOCBAUORQHDALNJSCUWLVUWVJWOIVEWEKPFABTNXXTBRVAIEGHZLPXZPKICIFXSZPEPMHBPRQHQWKBMISZOOMBYKTQMYJEUYTTOHASOTOGODLDTKQLMKQEXTDHYJCHNURGNTRRBDGEVXBIDGBUAYYGYXDNLQNCAUCYQZKNRNNWUEPSSCXUUVE");
    tmp_tmp_msg_0_0.value.assign("RXGADJFBWTQGKRXCNIMBGNBXRXATLLUTYVHQLWGWVFNUDFCTUEQJZZFGGAQIQMHCBUEDSTSNVCJMILYNYWRHKZCCHWPOJSAHWENQGPZIACNUYEZXKEDKLLOLSHIOLKKFXJBMZCBTRSRRZKQFTSPEPYRMHTKQNDZPAFPJBHKWXPTEAPHFYJGDSAOWZYZUXCOEBD");
    tmp_tmp_msg_0_0.type = 33U;
    tmp_tmp_msg_0_0.access = 123U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MXEAOTXCZWFUCBERTJWURZVPRWNDWTQRKMUWAPTGEAFMTULZPEBBZNKNMDSHXEY");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EVAEUCFNKUUILCWPDDRAHGQSOWLJAFLVOUVTBOTIYIYRPEEUBLKNQRLBZEIZQIZOVFPIYHGVMTKHTOBMFSRBGTMOGISHXQCNQFRHXOBMQJNPGMCUOZRXGRTYIDYEPFAKUYQPVKMUSKRWDVYHWITWQZAXVVQXPSSUEEJIYJWNDNAMPBYWHCFSHNSFJLZJKGXYJNJVFLOCXCGFUKGRXMMATCGWJHLTD");
    tmp_tmp_msg_0_1.dest_man.assign("DBLTJXDRKJQKCAVYUEGLCGNURRYOXVOYMSGKOQHWZXHPPGYTCXGEA");
    tmp_tmp_msg_0_1.conditions.assign("DAXGHVZVBKHHXSQVIWUNEDZFTFAEM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::Sms tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.number.assign("AAWLSRWHCWONIDXPPVWLYKJRALDZFSZVEXBYPPVHOCNNSMUUMLGEITXYFENAWJDPIRIJQMJLJABPHTM");
    tmp_tmp_msg_0_2.timeout = 16570U;
    tmp_tmp_msg_0_2.contents.assign("RKONAIQNFYYCJRSDKHEYFVLFGMUAVIZKWTIZAZIMXPGHTAPNBKNAZDVFUFKWOGJYBBXI");
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
    msg.setTimeStamp(0.05396099116702646);
    msg.setSource(18091U);
    msg.setSourceEntity(206U);
    msg.setDestination(49379U);
    msg.setDestinationEntity(16U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IYEIAJZEBSSRCDMFMOLDFZBP");
    tmp_msg_0.description.assign("GKWHLOLVTFJKBNOZRETOMSIUGBIZNHLGNEWFCQTFTOUGKKHSLYSAAXZMYPAQHGLNVIQAELKRJINYECECDFOSQDWIJDOBJEHJOJSWNUAZDTKNWPISRPCTPLFVGGCHUJXOYFKGSZXRXNWBZRUDMFSECYURJAIOAUVKTJXNZLCYPPTSV");
    tmp_msg_0.vnamespace.assign("MNPNZFIXOVNQOXWCKTFRWYVWNFDFIPMXHRUOURCHLXNBKDOWPBREYTTDJARTJGDMFWGWDUPIVQIXANFMZMHJMTBBKJLGCQUE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZVBRAEYZZEOIZRCXYLPHNCJEFNFLGJKDGURXLQHXLILTBEPTOJCCBWULDVYKRZFQNYPCVKGLKYQERQRINKGNMHHTDPKLWUGDSTUHQYZBAVWOUMLYRAESMFFWSIHZABYPPYOWAOABYMDTONNPDNRWUXJNSWICJJZAVDZTJREUGTWCSVOCXUQQG");
    tmp_tmp_msg_0_0.value.assign("GBCHAVWHNEEIYANCXWJJNXYTBLERAVTHWDQYGMYXHXRIOBNHZOJGEWYGGBWJOODPMCUDSOARVDKLTZASGCNSTQLYLSHZUMECWSTFPPRQIGPKFEDNCSSDLKDDAZWTMPI");
    tmp_tmp_msg_0_0.type = 133U;
    tmp_tmp_msg_0_0.access = 121U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("UKEMATQBVQMFTJPBRKNLJHVMGZDYWPDLQDGQPAUZYXLNIIFQYHAIOZLSDYDHPBREAFCSFBLXHGATAUIZOXJZXZCWUZYKOLVRGNYCXMCJVUMCTPSVXAHUDVEWYXKWWTXRNOJEAMHGJSBBWUSWOTIIUHWJDZSTANPMPUEXRIHFNVTCKEQZEGJPKOFKNEKXTKHCLYVDBWGLCNPGIOOYMVQDKSFCYSFARRRPSLSEGWJIMBMQQBNUVQH");
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
    msg.setTimeStamp(0.07434257132262545);
    msg.setSource(54827U);
    msg.setSourceEntity(40U);
    msg.setDestination(1828U);
    msg.setDestinationEntity(132U);
    msg.command = 34U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("FGVRZUQNOEVJGYVJZUFSRWLXDYJJNRLVOTGOHIZHLXABXMMSTLLPGUBNKGKOLVAT");
    tmp_msg_0.description.assign("OAJOJNPEBQLJDCUYHKGPFXSQQBJPBDTMDUSQAZCYZKDTLAXWOEXOXHDUJXUHMTCEHV");
    tmp_msg_0.vnamespace.assign("JXFSAENSWQEKTEHCOIJLOUGKVOALGMDKXUJFTSSWKIXHBSCVPFHVODNUKPPNCVKHNRVLBODHGRRUVMAIXRTFYPUESACYQPXVFRYHIRMNUCCAMXYNLPIBLRWZPZHSE");
    tmp_msg_0.start_man_id.assign("RJIZVAVEDAEXB");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("APOHHJUWBHABOQXKTUQKBKIBXVLDBYMIFFMSPWQTLXGQDKDDSTWOKTWAVFWUSNFVWSFSCGFNCYMZNGJVMHOPZQZJRYDKZJCAPMETOCIPFNSIYHEVJQL");
    tmp_tmp_msg_0_0.dest_man.assign("MIWUQONCUSTFSMQUFKSDUTJBYRPIMZRLNZAEAJVTHNGKKIRKFRVYXQYEDTKYQFWAIBQTPCVIFVVWRALDYUUZPLCLRSWUBZCCFOJAIXAGJINHOLBFCTXMXOSSJEEHXTVGNBEXHYGLAVPS");
    tmp_tmp_msg_0_0.conditions.assign("PPRMCJASPVBLLWRVFTCQDXWYKRZEIIKONCSFFQI");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.43593445354852856);
    msg.setSource(38938U);
    msg.setSourceEntity(235U);
    msg.setDestination(62615U);
    msg.setDestinationEntity(188U);
    msg.state = 239U;
    msg.plan_id.assign("SOYHESDFWMPZICVVWGUIMAQRAIKPRPUDYMVLCKHKEXHSYDQHRNELYIYGCTWLRUBYGDTBATXQAAJTUKADEOJHJLQHDFQLNGZFEZSLOPXWJAYVXQEXLFSDZBVVRCAAONDSMUFZKPOZNYNBTVKOMQZOTCNYRMXPJMBKFYGIHRTCCSPIWKEQSXNGDLJSTNUVNJRXXHJMWTQOIUECLJSBDGCXEWMJGWZGQLKAFFKPUBFH");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.6299973438531035);
    msg.setSource(44452U);
    msg.setSourceEntity(166U);
    msg.setDestination(45431U);
    msg.setDestinationEntity(83U);
    msg.state = 175U;
    msg.plan_id.assign("JZFSYDRTLUYJKPNFRACYHEBICKWYPAYLEKVQMIZJVEUOZWYIJABIOYMRTBDYPWZUPHOEQWHJXJYNDJPDREHG");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.31737736547592477);
    msg.setSource(9089U);
    msg.setSourceEntity(97U);
    msg.setDestination(2863U);
    msg.setDestinationEntity(61U);
    msg.state = 206U;
    msg.plan_id.assign("VJDENVOQEONSSIBRUIPSRRBIZ");
    msg.comm_level = 38U;

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
    msg.setTimeStamp(0.04508197877807685);
    msg.setSource(577U);
    msg.setSourceEntity(136U);
    msg.setDestination(50191U);
    msg.setDestinationEntity(35U);
    msg.type = 120U;
    msg.op = 134U;
    msg.request_id = 3202U;
    msg.plan_id.assign("XGATFAODTJWBYVAONOPQYXRZRQUFPQOIFGWQVAIMTXRKXSRSEHFSPJVDCBVVODEPIDDAAZFAYICKRKSZEHWUGYJYNPCYLVKALLJZOFFCWOHQHNEWIYMXDBWYKBKGCTWNLLUBYTBLWXMJMRZVZHOHBKKOTXXRUHLZFCLPBQMIIRHMFSXPKNSUQTUIJSZBJEUBRNMOMPZ");
    IMC::Abort tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LAAOHSAYINDCQDCAPHHOKCXIQINJJHVVESEBBOBXLPKHOJSWRHBTGYDTJEILMEZSVTILXUQVWOJHKCQGNVBENGZFMDPXTYDGSZMXCRURYSZKIFRKRZPZXKLGFJFGFSNXLFWWGJRDQJDTPBRQOUEDTUWNBZSPUYQKXYYAOEVOSTNZAXPWPSCIQBUMRVLJMEUICNMMVADYCWMTKYUGFBRIHZDAPLFHXTRVYLCQPVHUACQGI");

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
    msg.setTimeStamp(0.6807277279087404);
    msg.setSource(20466U);
    msg.setSourceEntity(65U);
    msg.setDestination(30021U);
    msg.setDestinationEntity(110U);
    msg.type = 250U;
    msg.op = 6U;
    msg.request_id = 24052U;
    msg.plan_id.assign("VNNRJZFWTEDRICBKQOSTCEMXUGMXPGFIVLEJKDONYHOXADUIUNSLFDZIFGEYRCJWOAUWVPJZMFNWTLEERWZSXDGOJQMYW");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 44980U;
    tmp_msg_0.flags = 145U;
    tmp_msg_0.lat = 0.5641091652809518;
    tmp_msg_0.lon = 0.6592384806261751;
    tmp_msg_0.start_z = 0.4998641865539699;
    tmp_msg_0.start_z_units = 41U;
    tmp_msg_0.end_z = 0.07220988203425693;
    tmp_msg_0.end_z_units = 50U;
    tmp_msg_0.radius = 0.7543002648663167;
    tmp_msg_0.speed = 0.057188831922346584;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.custom.assign("LPLVOXBNYKRXPKFETVUU");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KFZYBCQOWFRYTAQUOVKZIKJYBPARXWDPWUDNUHPTPWRMMPCTXLAMPTRABSGBARRGKWNXKCSGFKWQMVUFWZXZYDELITJQOZNZVDJXBJTAMHPUUMLLHMKHINCQCBSLOZHSBYUVCKAOJYQNDNGFQVNINZMTHLBPLAQOPGKFCTDXSVKNTBSZVBOLFQRXFZERYJERLUIXMEPIHYHSEJMEUJIFGTDYESGDHCGOWSJWVV");

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
    msg.setTimeStamp(0.21006472803862786);
    msg.setSource(33496U);
    msg.setSourceEntity(88U);
    msg.setDestination(12355U);
    msg.setDestinationEntity(187U);
    msg.type = 103U;
    msg.op = 100U;
    msg.request_id = 48989U;
    msg.plan_id.assign("VNBFJQCMNQGIEOQGSMPFKVDWEGSXRUSXMWZEZTOJBXJOUHAFSUNKIOYLIDLMZOVVQMFPPRVWKPZYBADIBSKEEKDYFRZAVPFMDWWCHJBAWBTPJIEYRDPXKRGXRIQYLTODZHKQEXHGGCZJVYTXFNMHQCHZXVSFKFM");
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("MBRLUYPEVMCSMFUQZEMHFILTASDLDQOODXTJOVRPFQMVHOPSZEKLDYJNGNFTBALNQKKDICKTRZKFWSGHCGUSIHJUAXTNYGQXFVLDWPEOMNUTQABWZJKKOHWZXOICSXOCCHBZATHJVPAXBZWUTQLJSSVIRXMVYHFINRRDYPABMQRBWXEEEXGOPTGUFPJWIQDLWAUYCCPDWIVFGJOZBBFUMMNHARYYNGTPYKAR");
    tmp_msg_0.message_id = 41687U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GOAPRECYTHHNGLIWCWODPGBXMJNZCAWCOVZMJNESIJYBGZQILZXYKMHPNNHFDPRJQGAREDUQOLUQTBXAIRIGWDOSSMLACWGMTUVIMKNTXSSLSYGKMFRVWZTJCFAFMODPAQKGCUFBHQJPBQBETEKXYPMFZHHJKPOIZXOIKBHXELXCOSEROLYLYCUZDTSUWS");

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
    msg.setTimeStamp(0.46968200495047707);
    msg.setSource(20849U);
    msg.setSourceEntity(179U);
    msg.setDestination(62948U);
    msg.setDestinationEntity(95U);
    msg.plan_count = 21554U;
    msg.plan_size = 4073493074U;
    msg.change_time = 0.4819964444927298;
    msg.change_sid = 37875U;
    msg.change_sname.assign("MNQBJLIAHEYVZDYSPWJCFQBVRGDQMOVQUDSPGZFHJSPBLZCTWXOYNIIBVKCLWAJGRIFFUHBDPHTEJHAKKZZUYJVAKXCSTQJFHTDXYLUGFDNOEWTARPVUMBPHVZEWIAFRGYRLHSMTROQPXEUUARPLOI");
    const char tmp_msg_0[] = {-81, -84, -24, -65, -4, -5, -3, -55, -118, 7, 2, -21, 104, -86, 52, -30, -128, 12, -26, -61, -128};
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
    msg.setTimeStamp(0.8801684862127696);
    msg.setSource(29260U);
    msg.setSourceEntity(77U);
    msg.setDestination(35408U);
    msg.setDestinationEntity(111U);
    msg.plan_count = 1569U;
    msg.plan_size = 580306362U;
    msg.change_time = 0.15131142125177188;
    msg.change_sid = 37074U;
    msg.change_sname.assign("BIXPVTAWYQFIREYGLUOQGAYKZTXWZPWNFSPVLIDUNTRMAPCJMBPHBNRNVAODMAB");
    const char tmp_msg_0[] = {39, -49, -102, 77, -24, 81, -39, -101, -106, 109, -82, 25, -120, -96, -67, 9, -104, -10, -59, -18, -73, -5, -55, -76, -123, 91, 111, -32, 109, 87, -127, 24, -10, -42, 79, 80, 97, 25, 54, -17, -111, 83, 66, -62, 38, -11, 35, -70, 6, 38, -2, -74, -111, 67, -79, -43, -43, 59, 117, 58, -29, 87, -46, -63, 6, -29, 115, 46, 46, 5, 109, -47, -55, -36, 14, -24, 93, -87, 88, -22, 105, -62, 24, 26, 59, -4, 85, 58, 61, 49, -103, -8, 94, -92, -104, 41, 0, -16, -43, -109, -94, -64, -23, -33, 92, 9, -12, -20, -29, -30, 6, 87, -63, 43, -90, -5, 84, 89, 74, 29, 126, 102, -67, 123, 93, -18, -9, 83, -35, -29, -116, -26, -5, 106, 56, 72, -75, 86, -55, 38, -37, 96, -106, -36, 89, -57, 38, 95, -83, 22, 89, -33, 58, -1, 57, 116, -120};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BYYDDMAXJHNPANQWENOVUASQNFQLLCHOSJVXTDJIQRPMXDHCFJCBFEKSYJSZSRYMWXGMFUZYCLEWLQFCBHZEJQCOIRWVVOMXAYTEHEGZUIWPXRFZZOBTGMJLOSHDWIXUKBDMTMDRBRASOLANEVIOOEKTFKLJ");
    tmp_msg_1.plan_size = 8611U;
    tmp_msg_1.change_time = 0.3911733078340238;
    tmp_msg_1.change_sid = 19984U;
    tmp_msg_1.change_sname.assign("APVQZCJNRPWCSNPSBFANERABJKIOXCJSYLQXSFYDJFKAPQRJVQUAZNJTPQZGOMLDHHTLGKUGJWOZMOBIOGOQXEINRTLYCWMHYYDEPZIHBLFGREXXKIATZDUHTWZTVKESEURVKIPPFENKBJCJWHTCEGNUHHMVUMFBQRRHOPIKBYLVWDCWBBURZML");
    const char tmp_tmp_msg_1_0[] = {75, 53, -31, -77, -44, 33, -36, -68, 99, -5, -108, 54, 96, 61, -114, -13, 19, -3, 58, -64, 105, 83, 64, 121, 95, 63, 120, 9, 34, -17, 105, 114, -32, -67, -56, 91, -125, -96, -56, -31, -66, -5};
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
    msg.setTimeStamp(0.8835638977521899);
    msg.setSource(636U);
    msg.setSourceEntity(220U);
    msg.setDestination(55853U);
    msg.setDestinationEntity(105U);
    msg.plan_count = 46181U;
    msg.plan_size = 1628465430U;
    msg.change_time = 0.4687593487852264;
    msg.change_sid = 17062U;
    msg.change_sname.assign("QXZIORJNBJWIHAXLMHCMJMEADZXNYLFBGYDNTADAQSLMTKOPUVCXFMTO");
    const char tmp_msg_0[] = {-56, 125, 14, 64, -85, -18, 9, -21, -6, -8, -79, -45, -56, 88, -79, -4, -1, 30, -13, 108, -85, -2, 54, -3, 74, 25, -15, -47, -90, -78, 126, 66, -27, -13, 32, -101, -99, -4, -66, 45, -32, -99, 67, 22, 31, -65, 82, -70, 36, -70, -126, 19, -10, 23, 65, -29, 100, 123, 89, 73, -112, 50, -73, 90, -85, 112, -8, 54, -107, 114, 20, -49, -69, -64, -24, -109, 80, -107, -79, -81, -100, -71, 17, -49, 72, -44, -67, -10, -33, 99, 120, 85, -78, 25, 29, 30, -94, -1, 90, 94, -120, 99, 78, -50, -64, 4, 55, 91, 121, 68, 77, 52, 71, -18, 22, -107, -53, -23, 24, 112, -1, 29, 8, -121, 44, 48, -6, -93, 76, 126, -123, -78, -122, -36, 108, -107, 41, 65, 8, 46, 63, 34, 28, -43, 82, 53, 125, -116, 10, 95, 1, 90, -49, -91, 68, 21, -46, 73, 81, 17, 126, 49, 84, 12, -76, 78, -27, 5, -125, 102, -117, 65, -50, 76, 15, -1, 125, 86, -105, -126, 101, 45, 114, -111, -75, -87, 5, -102, 38, 89, -70, -128};
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
    msg.setTimeStamp(0.3473241152330805);
    msg.setSource(64084U);
    msg.setSourceEntity(118U);
    msg.setDestination(56570U);
    msg.setDestinationEntity(206U);
    msg.plan_id.assign("SIBBZWFQEMPBIQZCRVTXNIPNJZJQGQNWEQROPLOVAFCNAHUQVDGBLGFIWMXARUKDIUMKGCPHKMSAJPJBLUABDAPYXADLYSDIHCFUPHPVWRHBDTSFQSHZVIHIUKLJOCGZXDKFQLKWLJRYOMNGSEBIOMEDONLDNWSWMTDOIGFKSMXMYHTXYWVEOAVXTEPEC");
    msg.plan_size = 29567U;
    msg.change_time = 0.059284662188788584;
    msg.change_sid = 21346U;
    msg.change_sname.assign("PQBAHYXNLLJIFSRQJBHMPFZAFWHZLIXJVLAKVSMXXGGHRDYWPNODVTNMVVEEITHQKSBFQWYQUVYTUKZDEXDFHGGNP");
    const char tmp_msg_0[] = {-5, 50, -44, -109, -113, -105, 21, -57, 87, -11, -17, -109, -44, -74, -24, -72, -57, -52, -119, 102, 69, -82, 82, 117, 29, 94, 111, -82, 100, -75, 109, 33, -83, -40, -47, 120, 122, -101, 67, 24, 93, -83, -33, -95, -3, 32, -10, 29, 54, 4, 61, -62, -2, 107, 17, -124, -67, -109, -50, 96, -126, -76, -106, 65, -126, 122, 49, 60, 84, 45, -94, 44, 117, 75, 13, 80, 116, -32, -65, -67, 22, 72, -118, -91, 91, -41, -42, -52, 120, -74, -6, -120, -26, 15, 87, -122, 95, 20, 87, -55, 95, 94, -91, -52, 41, -35, 50, -87, -60, 49, 114, 48, 68, 104, -32, -95, 27, -20, -91, -56, -15, -36, 84, 118, -31, 27, 99, -128, -60, 94, 6, 3, 100, -121, -45, -3, -10, -17, -48, 103, -110, 36, -38, 49, -61, 24, 39, 81, -95, -114, 19, 78, 41, -80, -75, -112, -33, -123, 80, -41, -122, 22, 88, 73, 59, -110, -37, -126, -56, 14, 117};
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
    msg.setTimeStamp(0.2996982443470142);
    msg.setSource(9073U);
    msg.setSourceEntity(12U);
    msg.setDestination(5107U);
    msg.setDestinationEntity(248U);
    msg.plan_id.assign("TNJALFTIZEALZG");
    msg.plan_size = 18309U;
    msg.change_time = 0.07540381204760016;
    msg.change_sid = 60420U;
    msg.change_sname.assign("HLCRTECMUAMWIQISSDV");
    const char tmp_msg_0[] = {101, 21, -60, -123, -98, 75, -127, 14, -29, -124, 68, 114, -95, 40, 116, -89, 11, -9, 102, 99, -25, -52, -88, -63, 80, 28, -89, -44, 116, 103, -3, -13, -2, -123, -46, -78, -27, 32, 20, 123, -44, -43, -107, 77, 52, -110, 49, 112, 120, -16, -4, 124, -80, 16, -3, -19, -19, 77, 37, -17, -88, 38, -11, 82, 95, -73, 122, 48, -28, -84, 112, -60, -33, 31, -19, 84, 89, 82, 47, -112, 45, 31, -91, 73, -38, -44, -49, -108, -65, 75, 28, 68, -128, 116, -29, -119, -61, 114, -67, 78, -101, -17, -43, -11, 107, -117, -121, -40, -103, -86, -99, 18, 102, -76, -115, -119, 57, -42, -86, 90, -11, -67, -71, -114, 16, -95, 44, -121, -102, 45, -75, 117, -79, -108, -21, 55, -98, 24, 81, -1, -78, 0, -21, -28, -43, -121, -49, 112, 102, -23, -72, -32, -44, -35, 89, -4, -18, -58, -106, -109, -78, -18, 65, 75, 83, 119, -74, -8, 98, -93, -115, -72, 53, -105, 33, -12, -14, 7, -37, -115, -18, 70, 74, 69, 25, 15, -70, 67, 7, -17, 96, 55, -89, 44, -9, -16, 93, -43, -77, 3, -102, -25, -78, -32, -113};
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
    msg.setTimeStamp(0.14359683621325658);
    msg.setSource(27111U);
    msg.setSourceEntity(0U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(36U);
    msg.plan_id.assign("HJRGVZUVJYRTBWMAXIQXUJKMSBDEQLTHFDLUIATMMEVSGEJHODUHCCBTBAZIPPSBPVLOG");
    msg.plan_size = 47835U;
    msg.change_time = 0.5074708879795397;
    msg.change_sid = 33564U;
    msg.change_sname.assign("OUEHLKKBMYFXECSWJOWEXPVQCIPRBFALOCWOHUASWAFNQDIPGFBKRGDWEDUMQLUDGTHVWFKXORYVSSBGKNTFSOIMHIPACLUYXJATQXDJXWCTGXQSTCAJRXDZNZACV");
    const char tmp_msg_0[] = {36, 121, -42, 120, 74, 118, -76, -77, -32, 55, 20, -54, -114, -43, -108, 84, -110, -107, 110, 11, -42, 61, 90, -126, 110, -102, -16, 67, 34, 35, 37, -77, -50, -3, 45, -79, -125, 24, 41, 38, -94, 110, 96, 46, -66, -123, -93, 101, -25, 57, 61, 76, 110, 30, -65, -67, 121, 95, 24, 78, -74, -9, -117, -88, -117, 94, 74, 124, 87, 63, -33, -78, -88, 54, 95, -7, 43, -62, 108, 95, 35, -4, -109, -115, -52, 29, -81, 119, 79, -6, -34, 10, -16, -53, 3};
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
    msg.setTimeStamp(0.5770535059925641);
    msg.setSource(8591U);
    msg.setSourceEntity(158U);
    msg.setDestination(50979U);
    msg.setDestinationEntity(61U);
    msg.type = 4U;
    msg.op = 173U;
    msg.request_id = 48642U;
    msg.plan_id.assign("SVKULJMAYGWMCOVCJNGECKHNHPVCQXBDARYPNNKKRYXORQIUONCKDXOVGOTQQGKQZEDTYOHXESNHJIOZNBHYUZURTIVNKQAWTLDPJIEVCGBMKELWHZJDFRPWQHFJHYWFCSWXRVYGASATSBMAYLPJXFWZPDTBAZBJMYIXOXEWGDZUCALLFBEVQXSFGPMFUTVMMQJIOBUGSSEDIFAADFYRRKNLTDLSBZSMPJQWUZIRNCZFGKTULBEHHIVUWOCIEL");
    msg.flags = 2362U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 149U;
    tmp_msg_0.zoom = 238U;
    tmp_msg_0.action = 181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QRUNQNESZQFVYILKXLTNLLOWRMDGFFBNQPQTUCXSZRVBCTTR");

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
    msg.setTimeStamp(0.8361074804086448);
    msg.setSource(6526U);
    msg.setSourceEntity(171U);
    msg.setDestination(58204U);
    msg.setDestinationEntity(167U);
    msg.type = 119U;
    msg.op = 165U;
    msg.request_id = 45U;
    msg.plan_id.assign("DHIBMULJISJBPV");
    msg.flags = 47448U;
    IMC::SetThrusterActuation tmp_msg_0;
    tmp_msg_0.id = 162U;
    tmp_msg_0.value = 0.09488503313081209;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("MDYSSQZKUJODRTIJAPYVHDMJUPTCJSREBBNATCWUHAIBYZWNRYQBKGZWCOVQXLZLWDTJGZXCLAOSAXZ");

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
    msg.setTimeStamp(0.7382184170076164);
    msg.setSource(43475U);
    msg.setSourceEntity(236U);
    msg.setDestination(21988U);
    msg.setDestinationEntity(162U);
    msg.type = 34U;
    msg.op = 126U;
    msg.request_id = 14951U;
    msg.plan_id.assign("SXZKSGVQXRUWUTBVEKNAIBXOBYXFDVLJKODIPPHAUTZTKPRLBDGZAEJGQYTFBLMUGKT");
    msg.flags = 41899U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("CJVXNWCTPWFGTXUFNRDXYWOWMCIXHICQGSJHGHUUKEXKGBTKNTMJPEHLIYDEMWLEXGAEJKUJWVYRQAONFGBYYIDEXWQBKHKARTURNZSIMKCNLKZKDCVNNOKCX");
    tmp_msg_0.sys_dst.assign("SURZWJUYQKRZOUTAXJWZQQSWCGDHGSXMJ");
    tmp_msg_0.flags = 251U;
    const char tmp_tmp_msg_0_0[] = {109, 59, -74, 51, 31, 12, -36, -112, 65, -74, -119, -15, 94, 90, 106, -96, 49, 98, -13, 4, 107, -52, -59, 77, 113, 98, 91, -76, 85, -105, -98, -68, 75, 23, -120, -49, 13, -82, -105, 96, -104, 112, 123, -90, -81, 126, -100, -45, 117, -91, 32, -27, -2, 41, -77, 4, 87, 96, -79, -95, 70, 19, 13, -43, 51, 27, -119, 115, 14, -3, 69, -109, 104, -32, -120, -26, -68, -58, -40, 27, 15, 27, 43, 99, -104, -9};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAVWIZNKWCLMVXOSSJLYAHUZRSEGPFEQXRSZKJOWPZAXNLYUDEFSSKROXTIJZFXCSXHDWYDMKIWAFYUKJFPPI");

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
    msg.setTimeStamp(0.17255024562005516);
    msg.setSource(18106U);
    msg.setSourceEntity(32U);
    msg.setDestination(61917U);
    msg.setDestinationEntity(24U);
    msg.state = 89U;
    msg.plan_id.assign("WVDGVHEPRZOKGDQESMYIWBXPASNRETSSPJZOTNXVJHIIHUCPJCEWGIXARCPDPWXZSVIEWFIJDTUWOBLMRGNEFYMCALOFHAJGNDUEYYTTAKYLXHGGHNHMUGQTFVABFIDBEXXCGFICPMZCMUFAFTBZBUOCB");
    msg.plan_eta = -1758407844;
    msg.plan_progress = 0.38242285037150525;
    msg.man_id.assign("RLLZHGMXRTBZYOHPALOLSFBREXLONPNCTFABYLWFONAFJINEYBWSTPDMIOHICXGLVRPHPQOKSQINVKHQKCHDZHJKQTEWJKWAEUAQXZDKKOPZXVHCVJAJVUEZZJYKETMNLOBDSZPIRQSDOQJVGTEIYFBFFAJUGWHGVAIIDYZWNSWYZYMXBYKTEQXDWASRMBEVXCQUMGVWGMRVKDLXDCNAUJSRQBUHMGUPSUPOIRFW");
    msg.man_type = 44495U;
    msg.man_eta = 1110127901;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.4825845129967419);
    msg.setSource(8668U);
    msg.setSourceEntity(33U);
    msg.setDestination(6292U);
    msg.setDestinationEntity(175U);
    msg.state = 33U;
    msg.plan_id.assign("RMSLPFBNDYOGKAXBHJPZNUNIE");
    msg.plan_eta = 1918258155;
    msg.plan_progress = 0.5969065869572043;
    msg.man_id.assign("MAQWYCFKCGLNOCJXSQSIDIBEJNGBLPKQDFHWDNEUYRGALCDUJIHAZIAVGCBUYIBATGEMUFJUSRCOWZHUZZTKJVYYTLOMFRWVOODMPJFGFNVJAPBHXXUKERRHOQMWWSQPPMXBG");
    msg.man_type = 49630U;
    msg.man_eta = 1704560091;
    msg.last_outcome = 106U;

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
    msg.setTimeStamp(0.0035962953399601982);
    msg.setSource(21852U);
    msg.setSourceEntity(253U);
    msg.setDestination(1773U);
    msg.setDestinationEntity(133U);
    msg.state = 221U;
    msg.plan_id.assign("LWFHYDOXJKFJNMWZBXECQIUHKAGHJZUUSFIXXVVJQWYDPGUEZMNMI");
    msg.plan_eta = -450204816;
    msg.plan_progress = 0.8631936054018208;
    msg.man_id.assign("EINLUBABFVEVFFCAUCMVIKQZLXRPUEKNPTPDXPXJGWUDIROGLSSYJRIDHRTMXCYOWWSGHQKBAURHKMZPFILJITKAICJLYSHDBFFAMLLGBBUXXHTMHVKPKVBWZPJZAUFUGCCZYMYTGSRRWXDFBIXJSGGKQFOOQAOMDAIJEEHVMEJNGQDUNOSQNQUFVVKQRJBZAYTPDCOJODWCYRCLHETSYCEWXZMZ");
    msg.man_type = 1252U;
    msg.man_eta = -1931209680;
    msg.last_outcome = 41U;

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
    msg.setTimeStamp(0.5889386419971144);
    msg.setSource(50890U);
    msg.setSourceEntity(92U);
    msg.setDestination(18085U);
    msg.setDestinationEntity(221U);
    msg.name.assign("IBIDRXIYHWACPCGUBCADTDMGGFRIUVYZQUYCWMPBLRXDMSTGMEOGBIDEBIPFASGBQTFWFJVVVYNAHZSXAHSUHYVPAUJVXBSCIQDNUTARNJTDZVVORFCRAZLSMQBOBETDPIDDJLYKLZGNOHTMMAXYQRJOKKUEVWXTRZYHLXZWHKNYERFJQEAOUSBGVHCKENKITPKCWGNECWFJLZMTPURKXFLWOWJJP");
    msg.value.assign("WNDLHXAQCFXGPMPBOXBCNBCOINSVKJKNDBFZYHNAFENLXYLEYEOCVTOZJSIQHTTM");
    msg.type = 183U;
    msg.access = 192U;

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
    msg.setTimeStamp(0.40854158051770384);
    msg.setSource(26488U);
    msg.setSourceEntity(169U);
    msg.setDestination(17663U);
    msg.setDestinationEntity(108U);
    msg.name.assign("UPHAJUKJEZYXXAMUGPDYXDRSJAVFHLQGYGTHPBJCFNSSJSCMTADXQCTOEMPBMLWDEQRKOTPKJHOIBZYQRPNVXMUUEFDZXOPVSAGHIYBSFQYWHCIFNBNIALZKMLGNXOVZULOZCMWUOSRLFEJWMQWZJTITLRRDWETOPKNRQMNVXFCZEORGGWHAYCZHQNBTISKDKIXBBOGEUQSAINCCFURPWKIUBVJSKNQXI");
    msg.value.assign("MSHBNDMOTEEXUZXTUYNQGOCHXZDRPVCIFIOVZEDQXEZRLUSNBHDAAGIVWINFFQFEJCWHRXBIYETKZYIGYWUNXTLHLIGSJXPQPRALKLVCDXYPOQCRUGFIWQHYQATKJRDBLAFBBWZLCFFSEQOCTCUNRKYDEPA");
    msg.type = 179U;
    msg.access = 177U;

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
    msg.setTimeStamp(0.44090679623485907);
    msg.setSource(49372U);
    msg.setSourceEntity(42U);
    msg.setDestination(35080U);
    msg.setDestinationEntity(144U);
    msg.name.assign("PWEYYGNRJAPDIUHASFWICBEMNJLUFTIRYLDHHFMPNZUVXDLMBGNTUKAPJUJQHCDTZMDBIVCZRWQQLUZDUQWHANSIUNRHFILKLRPMXWSJISBDEXBAJGGWOWYGEWLVCQ");
    msg.value.assign("BNBEDTWYXNJTSGHNFEAKZWGPQCWAXMGWZMMJNQILUMIOEVXTVFOPKHBORUPAMNUFQHAYBEALIXLMBZRRLJJSVMZBOHFXR");
    msg.type = 80U;
    msg.access = 163U;

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
    msg.setTimeStamp(0.39434669621480956);
    msg.setSource(30340U);
    msg.setSourceEntity(164U);
    msg.setDestination(11621U);
    msg.setDestinationEntity(103U);
    msg.cmd = 144U;
    msg.op = 118U;
    msg.plan_id.assign("IPJZTGGDWBNXF");
    msg.params.assign("SQYQINWMPWTJKGNTNKPJXRVZIIQKWUSQJMTPMUCNLNUFLSQDGBTGCHEVRBOONQLICZYSKUHVYJPOXZPKTEVXVCAKPGBEWCNVMMGDDXPRF");

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
    msg.setTimeStamp(0.9704132291916254);
    msg.setSource(29927U);
    msg.setSourceEntity(206U);
    msg.setDestination(39694U);
    msg.setDestinationEntity(220U);
    msg.cmd = 115U;
    msg.op = 22U;
    msg.plan_id.assign("XBTWKACHQUIUQALRSAIOXKFIKKYPHIBDPJXPXDWAWQMBVS");
    msg.params.assign("BKAVIONKPYYOSDRJCWXBVXWVC");

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
    msg.setTimeStamp(0.25501246908484354);
    msg.setSource(45978U);
    msg.setSourceEntity(252U);
    msg.setDestination(28780U);
    msg.setDestinationEntity(80U);
    msg.cmd = 185U;
    msg.op = 113U;
    msg.plan_id.assign("VZAVYFRSROPYZHPCGYFJEGLMJDJDRYETCNBHKMYBWRSZFXQVJLHWULIFCUKEFBOZGEHDJVFQQECWCURVFLVYOHQGXXOVICUUUZIOQLEGEMPDBXPHRDTFCSNBQKIDOMJDFTLTSXOPIKJJYNGKIYNDAMHWAWXWTCRDKBNTMIPVTEAAZAPZKSZXNUSONJXGRTMBSQHCLG");
    msg.params.assign("GUNGDPMUQQXQKFBELQMETJRQUIVKUDIOXOGOATLWXTJIDPVMRGDZP");

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
    msg.setTimeStamp(0.5419272236340198);
    msg.setSource(35610U);
    msg.setSourceEntity(183U);
    msg.setDestination(47394U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("RDFHIZDFIBESPLKGLFJLIMWEBYJEAMKRVQZYQCQKENHPFFOKVFQXXDOUSMJAPFZXXBXWTEIIQKWOEZWMHZHVLAGAXHXPVEWHAZTOQCTIYSNMWPYRDTXUDNBHAYKBMRGYOSIQUBYQOMTNSDGVCQGFFPCPXLUZNNGSTKFVDAJCVGCYLKSAEURRJPUOCMOHPCHSQZZ");
    msg.op = 19U;
    msg.lat = 0.4270328840483886;
    msg.lon = 0.012526193284453813;
    msg.height = 0.7312014504462557;
    msg.x = 0.4325468247919685;
    msg.y = 0.672053441355966;
    msg.z = 0.6716750827640485;
    msg.phi = 0.6200015455798884;
    msg.theta = 0.050156904590216156;
    msg.psi = 0.9157224990142045;
    msg.vx = 0.9547742029075952;
    msg.vy = 0.8959538114008417;
    msg.vz = 0.23866241946872024;
    msg.p = 0.32110725326518397;
    msg.q = 0.18846482060570502;
    msg.r = 0.6586514469277251;
    msg.svx = 0.15823171936336955;
    msg.svy = 0.46945955479775203;
    msg.svz = 0.2091389579795564;

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
    msg.setTimeStamp(0.19560459634513472);
    msg.setSource(18802U);
    msg.setSourceEntity(202U);
    msg.setDestination(9465U);
    msg.setDestinationEntity(137U);
    msg.group_name.assign("BEDZRMEAIGENYSRSESNGBZTYAINMEIDUKDOCNTLJJNQLIQSXKRPHLWVBFKCHPIFKQBAWGTHHDUVFBLGVZSJZCRDUHGSLBZMMCPUUGPXCDQWCFYOREUNFIVCXXVWYGUEFRJAIHPPYOAVFWYVMTQMTWRWAXSLXKCMPYDOZKLJOZAGEOKLOZRXTNZBDUJHCQMGPBKVUCLTLXXJWIAAPSYUJH");
    msg.op = 187U;
    msg.lat = 0.8085605048443301;
    msg.lon = 0.10112072310147568;
    msg.height = 0.03470585267437809;
    msg.x = 0.6247934090838684;
    msg.y = 0.67545111228768;
    msg.z = 0.1017461180914716;
    msg.phi = 0.029243238846505704;
    msg.theta = 0.5937538921534588;
    msg.psi = 0.35395617033929794;
    msg.vx = 0.42267097003475784;
    msg.vy = 0.7956896840740522;
    msg.vz = 0.032106265269634005;
    msg.p = 0.7355457678429789;
    msg.q = 0.00028351882683230745;
    msg.r = 0.307239734857621;
    msg.svx = 0.5335016672479665;
    msg.svy = 0.15230158986975284;
    msg.svz = 0.9613695634235523;

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
    msg.setTimeStamp(0.04194113347937867);
    msg.setSource(44869U);
    msg.setSourceEntity(85U);
    msg.setDestination(45722U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("KYAZHXRAERZBMVHZRDIHWLJQEQWERVPUDMUXSMGUVUFNFXVPHGVGQTBJOICSUOLTCVXCIJLYTJMXJFAEJSMICEODZIOMTSRSOFWOYXYBP");
    msg.op = 229U;
    msg.lat = 0.8645066347041883;
    msg.lon = 0.3152308079928886;
    msg.height = 0.5394488423770329;
    msg.x = 0.8441876089621798;
    msg.y = 0.553691535111778;
    msg.z = 0.13693483494891567;
    msg.phi = 0.41804075108416827;
    msg.theta = 0.9182123933514211;
    msg.psi = 0.5976842315417026;
    msg.vx = 0.9015303033762013;
    msg.vy = 0.29302181839681807;
    msg.vz = 0.3226976563857157;
    msg.p = 0.5767476086110873;
    msg.q = 0.2169522821768849;
    msg.r = 0.7573184944242479;
    msg.svx = 0.8616736916476885;
    msg.svy = 0.98689773598696;
    msg.svz = 0.6682731608008777;

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
    msg.setTimeStamp(0.009558756293680415);
    msg.setSource(63731U);
    msg.setSourceEntity(118U);
    msg.setDestination(33143U);
    msg.setDestinationEntity(58U);
    msg.plan_id.assign("APNLWJCREKXSOIMHBEGDVGZURSAWQKTJTFVZOKFPPZUIOYUAMJSZHRFMUNVNSFULRCEAVXCVBIWQHOSBWEARPKSCJXYHKDXACRFOBZKTCIFMHPOGYWNRENXJGSYTZPJPEQMDOAVXQKSLSHXBRMGBKETOULTR");
    msg.type = 48U;
    msg.properties = 85U;
    msg.durations.assign("FJBREXYKZWRWAYXOIDKFPLUZKFTLGNZRHUENTGBNZOYKAWMEQDZOAMQVFPTQGEUXQNCUXKNMBLTFDHYAJP");
    msg.distances.assign("LAVUXNOIKMPNSFSZYDBXAGKEWYRJCGLKLYEOWMRVFQHTPKKFUFRKFALABSXMZQRLRJCFORDDEAOAVENHOQIGTBYMBOIDUCNIVGCCKALDZNQMLLMQWLQRMZIBJPEVCXOTGWTOYSGUHPGJULUBIXSSBDTEEJDPUIECRWGJGOCNFYYWWWIQXQAVSYZZVHSNKTWDXMZNHKTAUPSJOKHMG");
    msg.actions.assign("XCLJKBSFITCAFCPAIUMAWVOUDZLPDYKNTRYNHTDJORAURBVPXEHEQGSHFWAUACDWLRYQGQEWGEBZRMWJGCIVSZDPLNPG");
    msg.fuel.assign("GSPEQJTWZZTBTTNKOGFWYAGHFWSDSRRAFXOBOUXWXPSPVMXFBVZUIDERWVKBDSPYODBPZJHJMGXQIAUPADN");

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
    msg.setTimeStamp(0.4817961733420383);
    msg.setSource(6619U);
    msg.setSourceEntity(72U);
    msg.setDestination(37596U);
    msg.setDestinationEntity(93U);
    msg.plan_id.assign("SFKEIXRLCFGCCZTVVGMSOUMRULZQCVDSJNYWAANBOERNI");
    msg.type = 134U;
    msg.properties = 123U;
    msg.durations.assign("KDNDVBVDGSKAVYJIDNFAZRSAULWMXCWGCCQJKHHEMWZZFNCUYTXLHEWSBZTHWUGOSPRWDZAQFUXQFCYCVOTSLEQZILOUPOJIAVPYJCQEQGWYNDIELPAUWSYRXJGDX");
    msg.distances.assign("CLZJDRQOKPDZPVZICAMOAIDCORAEDOMBXZQEOYEKSSVLHHVUIFWCTMALYLPITMGPKJNNFTQPRLKUZPFUWIIXHBOVGTRNKGWTJXFJXLRGSLTZWIVRVBALRYLBUCMRSEQKDBGNEBNYHIJKNQGBPSPVUVUCKDFXSBWYNXEENTWTMYDDAAUHYHUPDOQNHSYWWZJVMBCZM");
    msg.actions.assign("BYPKFJGARBNTWOKLBRAZVXKETLZVHVIJLPXJVMTOTETKSHQUUSCYSAAROWBMAFVFIFASJDHJVPKISOOIL");
    msg.fuel.assign("GNVMDAVHLFDSAGXQJVJUDMTJDA");

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
    msg.setTimeStamp(0.6339321957484434);
    msg.setSource(1912U);
    msg.setSourceEntity(97U);
    msg.setDestination(49070U);
    msg.setDestinationEntity(168U);
    msg.plan_id.assign("SQRKRNPCJXFGESUUHJWSMCZBDZFBOYOAYZPQRZKTWVERIYEVJAVWACKBVJMSXTJCMYFDZNTHFUGDXXKWNQOXJXDHVPCVOIPAIMFVSHKKEOHTYGIZRTZQAUUBEYCRLKDKMSQNUWJXTHXDYZMQPKGMHNILEEASEAGAIDYBTNCUIP");
    msg.type = 62U;
    msg.properties = 229U;
    msg.durations.assign("WAPBPVVOHBANLRQQZYTXKRDRFIEGIIEDGQEGNYYXYPCCQVBSJDWHOWAJXSGHKKYBLPKOOGGDVBMLXFSHMZEUXWVAZYDZCYKNEUQTIJXINUHZOAU");
    msg.distances.assign("MRWWJLFTLRJONIJFTANASZDCUSGQLDAEBOVRRDBAIYURHQSFVWPPXVNWKUEDYUVYOIYPMXUWMPTNKTZOKBLEPEVDCHNREBUJPCAXCSFIHNDQZAKSPSLKFXEZXUPOAJSOAMNGBZMH");
    msg.actions.assign("TMHQAYAGYWKJXUEDDYBVJQQFMSCCLTOHSEZEENHVYRRXOSBCAZSMPYXMEFKLCUZWPNCRIPAWHFJZKKUDAMFZGZXLIJHWXECHVLLOILJJTUKJDMSFMHZINKLAVRVSTMRQNBCVPOAZVPRDRROBPKEKPTPWJGRDUSCQCMCIQNGOIIIDXAQWWVD");
    msg.fuel.assign("NDWVRZGSHFOVIVCUGBIRNYTPKZJMKOQYKXTENQHRRSEAUXROLAIKGYLMACXVEJCBGDTNSBCXHLPPUMSPLZSFZGFIGTBWXBYSJRWJMUPCAJHRYFGUARMDUMHYIANZRZZQEDDPOLEHINKSLQOJLXONMOHPEQACDHXBYUMMOCQIFFQ");

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
    msg.setTimeStamp(0.9223193751080977);
    msg.setSource(50170U);
    msg.setSourceEntity(194U);
    msg.setDestination(11622U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.6769595966952305;
    msg.lon = 0.5506035467529775;
    msg.depth = 0.5923072201197018;
    msg.roll = 0.31258587870003907;
    msg.pitch = 0.37637554449242283;
    msg.yaw = 0.9206241965677467;
    msg.rcp_time = 0.8720464372758642;
    msg.sid.assign("KUTQOXUZPLPDMNEDHBBQKQZNOGGVZJMPIWNXSKVEMNRQWVTCBGZDUJRIGGGLIEEDMOVKXHKHHHMIYCHTBSBIAAOLGEKEFLLGZCJNWRJTGHNLSWNRNUNXOZYHZIIXRJUF");
    msg.s_type = 20U;

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
    msg.setTimeStamp(0.14438809712469813);
    msg.setSource(33242U);
    msg.setSourceEntity(74U);
    msg.setDestination(2237U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.472633937639966;
    msg.lon = 0.022144962351075437;
    msg.depth = 0.7602291966560003;
    msg.roll = 0.484473593156557;
    msg.pitch = 0.34369980035468284;
    msg.yaw = 0.3879560245088467;
    msg.rcp_time = 0.8721127935248499;
    msg.sid.assign("DNYAEDVIBRCBNAQHWHPRMHBXXMWXSLRJVZZBZZRUTCKCYBMHLJWIVUHESPOGAMPSQVTUYUTJYGWAQXWRZMWTGADGPASOTQOZUBENRDNTWVDXRIFKKNWAJYUEHNIRMPOPDONFFLKIFEXITUGPXTZSBHMRLOOFMCCCVJZIQVJXQFNLMVIE");
    msg.s_type = 152U;

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
    msg.setTimeStamp(0.573227224737602);
    msg.setSource(38624U);
    msg.setSourceEntity(98U);
    msg.setDestination(30483U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.6693082563634216;
    msg.lon = 0.3070358966545327;
    msg.depth = 0.42131460352168093;
    msg.roll = 0.45895384187618216;
    msg.pitch = 0.41229427795440543;
    msg.yaw = 0.9549112787624098;
    msg.rcp_time = 0.6088848120175939;
    msg.sid.assign("BNLPMTBFRCXCETZRLMOHBPPWRDUXMOKKKXUJUNBOMRGURZPNKJJRFULCTOJKWIWKSLSGKMQBACCAEYJWEVZIJXMCUINVZPLGBOSZXPAYWAEXWQVXMCZYEBWSPIVGDCBLIHJHRDOOGCSQPQZFHOUCXGVIRLZDSDNINABSYQVEXMNAFFGZAIQVSRYLHPHDGFFNANSTSVYQVKV");
    msg.s_type = 242U;

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
    msg.setTimeStamp(0.29106050837002195);
    msg.setSource(43125U);
    msg.setSourceEntity(78U);
    msg.setDestination(46614U);
    msg.setDestinationEntity(214U);
    msg.id.assign("HTAKWKFTPFTDFMKBELQKGPHILMYCHEYTFIWGXQUSDMFHCPMAXVMWFOYTILVZPKWOIPGNAMDSUCRDPIACNVCBEHQSBQJWNWBEADMNSBYVWAYOQWKRHSILBAANIDINJVXFFOVPRJDDXQTCVGILZTNHEIEGGRXLONTEZNNRLFPUWUBDMETAJKBXMVZXVCUYHGFMBOSZ");
    msg.sensor_class.assign("NYTCBRXQPXMFEHINARWJAGVYPUWSYTZHRXETZZLPTOWWQHIFAMDOMKKJOVOTGLHCUYXERSBKLECXBKQRHZTESQMVDFXSVKXGBBUQHPUROIRGNNKCMPFVIFGZJOGJLQTUMOYSZYCDEQYJHABWWQAKLAPZTLFRKTGODGDMRGEWAJBMTEOAAWNYFEXDVNZQPZBVWSISFGNUSFCMNDXOKDYLCCIMUPZVKHINLLUBQFJVYLHJP");
    msg.lat = 0.19623536117095963;
    msg.lon = 0.07324062125805397;
    msg.alt = 0.11294623931510883;
    msg.heading = 0.7379541985266894;
    msg.data.assign("ULXXRPXVUKLNGYLFTTRGNNILVSVQPAFBSASCOUKREDOVIVYNOLEJFXCACRQJBIQETBMCFYFWSSPSNYMWQOOMQBNZDZWYLCUKQ");

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
    msg.setTimeStamp(0.9646166500068517);
    msg.setSource(34709U);
    msg.setSourceEntity(18U);
    msg.setDestination(15885U);
    msg.setDestinationEntity(114U);
    msg.id.assign("DAUFVTFYHGLWEHDNDAYQOXJRSOMUCUUHVJVKAADQLSTHBPINERINOZLTBFDXWBRXGOSJGOZDVZQKCBIHPRMXQQGGKTSLZZIVHCEIYGLRJJOUQZYVRKNYULMCDGXTFPWOPKKSRUFWXHAIPKTSSQPIWIBNOMDPNKPUTLXZFAZE");
    msg.sensor_class.assign("EOETMXYTHYCGKGGLCEPHKOQKHZNSTKIOZFDTXMUUHJJYAPWAQSVXEEVEGLRCZAHQJJBMEOGWWSWTKLWVYAHFGCYAMNDNBNAJUFSVPEEHSULHWZIDOAXTZSNAYXIADMC");
    msg.lat = 0.3590412192035549;
    msg.lon = 0.25059230541538224;
    msg.alt = 0.841017245573292;
    msg.heading = 0.7219134202613475;
    msg.data.assign("RVLGMOBVMNAQJKAKOWBMXPJSFKTCRNCCRHXNIWXNEVPMOLZDHRXJMPMGDJAVXSBNXDGGFHSIFHIKZPVWEYLUDLFFTCRDUOAIABQVPTTVAGOVJLJIQZGSZNPQQMTEOELQOIZRDPSWBG");

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
    msg.setTimeStamp(0.07305513374970452);
    msg.setSource(5357U);
    msg.setSourceEntity(196U);
    msg.setDestination(2103U);
    msg.setDestinationEntity(141U);
    msg.id.assign("SEHTNJQFLARFUUYEIKSGS");
    msg.sensor_class.assign("BVNUIHMPZVPVNVOHWQKEQBJEFIYFFRPPBRLBGQURZGHCMQPWRONJUDXYJONVBVFDPTATYLZXPFXLCSSDMWWDDBJKTFWLCXXLEGDUMZWTLUKAFITGUEQHXCXGASUMOFGOXGVL");
    msg.lat = 0.9204285043618953;
    msg.lon = 0.6826425300745905;
    msg.alt = 0.9537430510879318;
    msg.heading = 0.06333992968282698;
    msg.data.assign("PISYSSENVIETAAKWYLOMJZQBFH");

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
    msg.setTimeStamp(0.7828940066172309);
    msg.setSource(16582U);
    msg.setSourceEntity(12U);
    msg.setDestination(5954U);
    msg.setDestinationEntity(26U);
    msg.id.assign("ANJXJADOWBGLZYBPUKLIYUKRBFAGUFTUEGKMTZCVHQJVSZDRDKVWLQIOSYHBLGISPIJNOWZDIBZHHKVPRGDGFOPLCGCMSRWFGXETJXCYQZOARFKQQZHZPINBARHWPCQOWQZTFKVLDRRMOEKJCAUXXASCRJNYUFENMACRAJPKUQESMVNULCLYGDLFVBTSTMOWVIOIEEHQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WDUFDRYYGAISTEZIMFGNMCHXQRGEEEFKXUEWLYBNJYCRSLHQCZUTHMLTKQDIFEWSQVWHZJPHZJZYPQKAYBPYMPLKEBKMVUOANPFLRBKUWEBIKUXYNGXHDGVSLWAGVCAZJAJOFDSUXQACS");
    tmp_msg_0.feature_type = 140U;
    tmp_msg_0.rgb_red = 105U;
    tmp_msg_0.rgb_green = 224U;
    tmp_msg_0.rgb_blue = 185U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.19215746181550852;
    tmp_tmp_msg_0_0.lon = 0.31861483795964474;
    tmp_tmp_msg_0_0.alt = 0.6114727832077372;
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
    msg.setTimeStamp(0.07093786494389798);
    msg.setSource(56113U);
    msg.setSourceEntity(63U);
    msg.setDestination(47281U);
    msg.setDestinationEntity(14U);
    msg.id.assign("UZKEMAAOCBKMEVASWNEWFXEKJVAQKHMNIZUTBCIHPHYOCBDGQSDKLWRFXSASICEBWOWGJMYICGXTUNFJJEDLOPDDWRBGPDYTJTOTVLZRKSGFYIXIJGXOPFQZVGZEWQROLLODSTZCSIEPSBYZXYAUZXBVQJRTCMMQUNVPMOXHFFKXGNVYQHPLTGDBWLWZVFHCLMDRXBHLAVNYVUPCCRASEBYUYISTKKDMUQHJWPPAFATOINHEJHK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HZSOLEKHTZRHIMSTRSHVJZUECWRDYZTXWLTZERLHAFPXZIPXBQEIOZGMMRTFBEINYTRLKFNGBTJOWBBKDPAUJOJKSUQUAVHAGNPPMLZYJSEMU");
    tmp_msg_0.feature_type = 93U;
    tmp_msg_0.rgb_red = 18U;
    tmp_msg_0.rgb_green = 54U;
    tmp_msg_0.rgb_blue = 73U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.07008412019886101;
    tmp_tmp_msg_0_0.lon = 0.7420379905322809;
    tmp_tmp_msg_0_0.alt = 0.9172512924001783;
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
    msg.setTimeStamp(0.9245312274197823);
    msg.setSource(4248U);
    msg.setSourceEntity(143U);
    msg.setDestination(50694U);
    msg.setDestinationEntity(141U);
    msg.id.assign("PIXLQTUWHMZWUBFBMGWTLBTNVIPHXGCDIOWLXEXDAPYSKAYIEULHLKDJELWAQANJY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HECWZXVNPLXZBREPJUVQFPSQIZQWCOKXSLUPWBLZOJZHFMFVPACFIAOZUMAGDWSKJFLEYJWGATEYCCETGHZPBSNLVBRNYTQPZZVMAUECAJOURDBRXQNWLIILJKMNWKUE");
    tmp_msg_0.feature_type = 249U;
    tmp_msg_0.rgb_red = 112U;
    tmp_msg_0.rgb_green = 151U;
    tmp_msg_0.rgb_blue = 153U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7940488565624115;
    tmp_tmp_msg_0_0.lon = 0.07995915329695646;
    tmp_tmp_msg_0_0.alt = 0.7263058016437912;
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
    msg.setTimeStamp(0.3240003700494596);
    msg.setSource(62727U);
    msg.setSourceEntity(68U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(224U);
    msg.id.assign("KCDYKTHVFKTNGCEZZNPIWFHYHFPRFAFBFCLUOFTYWNVYCLYSBCMQQNOWVLDQWARZQJRASMJJPNKXMSPIAYJGCSSMWEHVAXRWSIJMQUSSPPVDXJMQBOHTJCNIRPXBGBCTXOKIQHHZEDUHJYYCLPXMBCBMRJZWNTDOTPUAGUMLAEKFBKKNLOSEWSKFDXWQYILEZVFVMXODHDUZGUAOBVGTGOZEGYQIHEATNQZEUUVXJRIGNGID");
    msg.feature_type = 67U;
    msg.rgb_red = 131U;
    msg.rgb_green = 197U;
    msg.rgb_blue = 64U;

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
    msg.setTimeStamp(0.36369898706364856);
    msg.setSource(20015U);
    msg.setSourceEntity(216U);
    msg.setDestination(64149U);
    msg.setDestinationEntity(151U);
    msg.id.assign("HSSMCQFLUTKINKPFPNGEILZMXIYRFPJCJBOHNERXLPNVBTUIGEAGNQSHHZXRHFMVGTFLHOGZYCJGAIWLQPNOCOGERLNUJECKAXAVBDSGXMWPPVHUMDVYZSRULRZZYODIYFFBKKBX");
    msg.feature_type = 213U;
    msg.rgb_red = 8U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 149U;

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
    msg.setTimeStamp(0.8901530599848612);
    msg.setSource(52633U);
    msg.setSourceEntity(240U);
    msg.setDestination(4395U);
    msg.setDestinationEntity(137U);
    msg.id.assign("MQPJVURLOULSAXUDLGTECYLEUFQIFCSIKKBJUBCEPNWQFYDTUYAOIEGPWSSYOAXHGNGLXKEXJVTPLCKEIYZJRWSFHO");
    msg.feature_type = 124U;
    msg.rgb_red = 184U;
    msg.rgb_green = 106U;
    msg.rgb_blue = 129U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4567876695769588;
    tmp_msg_0.lon = 0.9292529279101183;
    tmp_msg_0.alt = 0.8977394366664095;
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
    msg.setTimeStamp(0.6862154692462002);
    msg.setSource(27441U);
    msg.setSourceEntity(131U);
    msg.setDestination(6669U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.16452898790825543;
    msg.lon = 0.879052993303581;
    msg.alt = 0.10280982011512119;

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
    msg.setTimeStamp(0.6646684466369054);
    msg.setSource(56628U);
    msg.setSourceEntity(134U);
    msg.setDestination(299U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.15100602743241887;
    msg.lon = 0.955551778044594;
    msg.alt = 0.16745005777431687;

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
    msg.setTimeStamp(0.9136680101222491);
    msg.setSource(42847U);
    msg.setSourceEntity(229U);
    msg.setDestination(37444U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.47696288338169435;
    msg.lon = 0.9987025535758534;
    msg.alt = 0.58826979685026;

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
    msg.setTimeStamp(0.4321171899746111);
    msg.setSource(9356U);
    msg.setSourceEntity(83U);
    msg.setDestination(46739U);
    msg.setDestinationEntity(102U);
    msg.type = 181U;
    msg.id.assign("ZPOAALLJVGLIXJWPTKNYWBFNYOQFIWLMHIYEXAPVQKKRAMSNHTGDJHOOLQXCYXSVWEPFKONFQWUACTUFLNXHEIISKBWIDQBCZXZQDZXDZRLSEBYZOJYPSFBZZBUMGPTYTVPEXWUZCGHEJMGIHLGMHSNYKRJJKVJAXIRUCVYZGVJMITDTKPDRQRFLWMEVGUWSRTBODOVMVCDRNIGUSUPHFEBCC");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.9615198413368392;
    tmp_msg_0.lon = 0.014722534891957184;
    tmp_msg_0.depth = 0.2828705495192849;
    tmp_msg_0.roll = 0.3426488840965315;
    tmp_msg_0.pitch = 0.12259229999676191;
    tmp_msg_0.yaw = 0.5485145188238038;
    tmp_msg_0.rcp_time = 0.7319963455030725;
    tmp_msg_0.sid.assign("XKCXGCYSFZXGLMFXGDVAWHTLNROPZZFACPLZVUJEWLSQXVIHFKPPRNDMYHZQTFEJCANHQJJGMHDNLJ");
    tmp_msg_0.s_type = 124U;
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
    msg.setTimeStamp(0.5901778939574999);
    msg.setSource(26851U);
    msg.setSourceEntity(170U);
    msg.setDestination(62997U);
    msg.setDestinationEntity(64U);
    msg.type = 153U;
    msg.id.assign("KNQLWBTYSSEARPXVUNAHZKNMTVQJWFOMRACVUUQXZDCMHBNXTDFWGIGYYHSAQIIDXQKCNCDNZSYKFWIRUZELPRGGRQPGNDEUCHXBQATBYPLSSIJOYMHPDDTGXWZQTMBFLZXFPCMNMMOLGRZIICJI");
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 7U;
    const char tmp_tmp_msg_0_0[] = {-25, 13, 24, -71, 79, 95, -64, 89, 43, -107, -2, -4, -49, -27, -116, -50, -29, 92, 87, -2, -78, -50};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.4685787813358634);
    msg.setSource(28915U);
    msg.setSourceEntity(51U);
    msg.setDestination(57124U);
    msg.setDestinationEntity(180U);
    msg.type = 159U;
    msg.id.assign("UAYYKNRHPIFCWEBLSUUTBNJOERQJFCIOWHGXAUVMHIPDZMJUAXIDQHVQIXDLXBZNBUFSQAKLZDHWEFWMOGRTWNQFFVVXLIDWKPBQPRGKYAWEMLKSNMZCJDBPXYNLJSALMFONHZVTTVABIBDSYBTTNKTRKDUL");
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 170U;
    tmp_msg_0.plan_id.assign("RMTCLDFLUKRWGSIWXCBROMDKAHUWBEBREMHVLA");
    tmp_msg_0.comm_level = 99U;
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
    msg.setTimeStamp(0.1591769021707835);
    msg.setSource(34522U);
    msg.setSourceEntity(96U);
    msg.setDestination(16205U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("OFOUTIZZTCGIBWQXHCHKHGTGIRYKNEFPOXIZPKTNPOVQUIXWNTUYTHJGQVAEJEAZDCUPVQULVWZYNSYMHLADKXWONLNJCMPXSNSGLPWOBRGWONTFVRESRGKZEJLFUVMHCBSLWLABFDIBAOJQAUJQUFDGQWAFRCLAJYKCBRKDSZICMVD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NOYFVYAAXCKKENEWNRCBTTLPFAJIRFLMIPKSPBRTDPCXZYDBNUWEJHOITBQXLCORKVWJHLUSZHUVRWOUOHGAQMECINGXWSQISKNWNFCDADHJWPJAAYVMVSJVEBGTXQEKOHFSIQUGDGMJIUZZCEQJQFFDVEZSNIPFRQKRYGSIXRLXEXZNLLGKRTBZGDQOUVBFVNOMZMYCQPMYTMASXPTJAUXUZRYHWDOCFHDVDOAIJEBHH");
    tmp_msg_0.sys_type = 113U;
    tmp_msg_0.owner = 636U;
    tmp_msg_0.lat = 0.9400662373926999;
    tmp_msg_0.lon = 0.2176710128799717;
    tmp_msg_0.height = 0.8493028760263317;
    tmp_msg_0.services.assign("PCDUEUYWEAZTFITXBUGTNOONDQFTHJSUXHLRKPIKLTLXXCWSRRBLVIJKDDIVKYQIGZOMARXXYOJDQMRSEVPZATVWQHYTQIMRFCLVYSHFYSOGCZXDDEFJNWSLVZRRACXSLWONDUQMDGELIKVKVUJHSCPRJHKUFG");
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
    msg.setTimeStamp(0.47923807031919485);
    msg.setSource(61555U);
    msg.setSourceEntity(111U);
    msg.setDestination(16913U);
    msg.setDestinationEntity(158U);
    msg.localname.assign("FYGDDTIUSNJSUWSEAXVXFPKTLZQBCVXAYIPWYNHZUCTKLXPBDIGDMBLHPPSFEWVQJIVKCWJRXZKQANATZBGIMWONIEDKQRSSOPXTPXJVIGQUXRCKJEUMQTLSAVCDYUDYTGUVIPNKVRHLKFLNDTAHAFXNGYKYFITMOWOOGCJBUDIOCRHSZTHALAGRZEYQZRHHFUSCHBRLEBFQJMWMLEPNNNZ");

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
    msg.setTimeStamp(0.22940002565669737);
    msg.setSource(14052U);
    msg.setSourceEntity(210U);
    msg.setDestination(29245U);
    msg.setDestinationEntity(3U);
    msg.localname.assign("XGZNJAGPFPYHRXQKEYRSZNAXVIXVIPVCRFQZYTXYAQUTPKTDMEUSWUBEHYPVGQVFMMWTRLGXCZHRALJXUDAJIRDXEIJUJADKMBTIRFQZPMDIFHNMUDXHGMZMDTUZDSOCKBJJWBCZYYOHFCOHJQPDCSHBIWSASKHGGKNXLWVWYRANWFLKHLSEKQOOUVDMBEIRGCILNLVNLKZQBCTLAEOTPPSPIMTJOYBVVGLSFJEKWWEBCYNFZOFOBNRQ");

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
    msg.setTimeStamp(0.3210415239169977);
    msg.setSource(4404U);
    msg.setSourceEntity(31U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("WLMYUCBGBZUTUYXTIJJCTVIRGSWFZYJRXMXASEXSBBUALBHJGEIPGYHPHQVOFKSISMBHAJTXPIIQYWKGNAGNKPNMVSSFMENZMDSMMLOPZDRXCTOBOTYUAQTCNAJJOWRXHLQFNMSOIAKKQQDURTPWPZKTWUIZDDGULVEVQOWACFJHVYOVWQICLYEBRLKETZBZLDKLNPEHOFNSDYJPIGKWZDCRVFXRUHWJNDQOVUAFCLEMXKQRDCFAZHBG");
    msg.predicate.assign("JQEZTYOCIJSKBDAWHGLLXVAZXVRXQSFKWKUVOPVUQBWDLHJGNTSPDWCGTSUAOJNNTKCXCNIJZTAZMHWGQYVTRKCGFVEKBHUKJYFOMUYKOZEGVVMEGNYXCXYOYDDLWTGMCIIJFSRWRNWLXDEYHJSTRBGZQQZSHRIHDPSZIBUQEKADZUPGELUNLXUJHNIRLLCMMOPHAMFAFIPPTDQCEMVICF");
    msg.attributes.assign("YZMGUNHTYWYBWUSLVHNUKUJBXQWODZMPMVTAVILTCLLCNEXSNZVWHOJJVOJYNSWGGILBYBCZCXODPNFARMBQDBLRZZCJFAHYQDQOXVFEIVLWRKRUGMPBIKIIZQUZRFFMUNGVRJISOPEEZMBCPQTDGFQRAUPOHPSFXEVZADLDHVEAJAOCKNKEOWHBSFTHHQ");

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
    msg.setTimeStamp(0.02832877512114873);
    msg.setSource(47772U);
    msg.setSourceEntity(152U);
    msg.setDestination(63446U);
    msg.setDestinationEntity(208U);
    msg.timeline.assign("BCGODBDQCVULAJFXZAASJUEOOXEVYUZTOGNGGFDYTMVJDRKCAIVDHQIGQLFHV");
    msg.predicate.assign("OLJCVRPATEYWKXGCLJGNBMCHTMQCVCNSBEUKMCWMXNTFXNLRGTKFSJRXDJUHMNOJARIQUWBQGLNLBQTPQNBIYJMEVUVEFZEGYYDVPFCZJDCVZKRDIIPBOWZSESKBQWI");
    msg.attributes.assign("AHQOSEXLQDXAMTMRHRPJENODINYBLCNURIWCUVXIB");

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
    msg.setTimeStamp(0.030086398154923977);
    msg.setSource(35567U);
    msg.setSourceEntity(210U);
    msg.setDestination(10478U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("MLOMFTVFPPVWTVTBCTCHMBNHCTLMAGBDWOLGJAYGZNEAJQUQKCBXNHGRNZMCSR");
    msg.predicate.assign("GTDUQMUUJTXYRUDLVLZU");
    msg.attributes.assign("TBCDYPFAQCMERLKLQAZLZIAWRHNFXAKGQOYCDZXNTZOTRUWCBLVGTKBNZCHDYHDWFIERMOEUDFIZMXXKIRBEAUMQGVDTSYREQGEJQSJOTGSZMOUUUWMXSXYJRVIVDHMUWLYLJFCPYWPAIPLWIBPYTXBJAPYOUIKDSCEOAVQQWOFWLGNRJAEZXPGNRCNSIXFJVNVOMEUJKKKKPDCSGBGSEV");

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
    msg.setTimeStamp(0.5240828339470022);
    msg.setSource(38323U);
    msg.setSourceEntity(52U);
    msg.setDestination(58994U);
    msg.setDestinationEntity(197U);
    msg.command = 231U;
    msg.goal_id.assign("XSKFPQFQVGBFVXEPGWGRXUPFFZZUXGJLOZMBKLYXLLLKQBVHBUEJIYUJAEWIFREBQWGRMWCSRZIXVEZXMWOUTKNMXPVRETUDSYOCXQCHKQHEIDCPQDIVKYBOTLRTZEANJHIWANNZSBU");
    msg.goal_xml.assign("DKQYMRBIESRGGOKCAGAJNUFZVEBIKMYUDTJDRZXRZBLCEKLBBIQDARPJBSQLNEKLVIQQNVHTCOPWITUXSCJYNJMROAWFMMOEZVYHXOFVITZVAXZPEVECJZWUAFACGOARIVUAYBEBUFKQHKXHTOWDSTZDHJYHSMNXNUPZHISFENQBSGNQWLIJNCPAYKTMLMTSGYLUMUYJTFCFLLPHWSXWEHJBGOILPZWWGPVQXQRNVSPORDHFOFYU");

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
    msg.setTimeStamp(0.0418141844695985);
    msg.setSource(35269U);
    msg.setSourceEntity(95U);
    msg.setDestination(31965U);
    msg.setDestinationEntity(56U);
    msg.command = 176U;
    msg.goal_id.assign("XMFOQTPXOWTILHBESHSXXIEXIFMUKUYRDACODWLAZHDIOUGEIBVZOYWVIJNBPUKCKRETSISEUFMPHRWNCDGTMCKJQJRGUGWSTSAQOEJSVRUYWQVNPRYDWGMHNHJ");
    msg.goal_xml.assign("VPJCAAHABDCWBAEKUGRLZDYMQBSJRDJBGGEGXZTBHOXKFVSYKAZLAMQMNNRWTDQZPCNTKEVVDWAOYOXSREZPUOXINBKQVEAYVCCGHWZTPOBPZJXHSPUAWXOLNE");

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
    msg.setTimeStamp(0.13151079163377588);
    msg.setSource(57089U);
    msg.setSourceEntity(110U);
    msg.setDestination(11454U);
    msg.setDestinationEntity(231U);
    msg.command = 175U;
    msg.goal_id.assign("NQGGVJHGOFEHFSFZDOCUPBUPYDHNDGMVTJKMAALMKAEJQJPQKXNHTGKLDEJYQGXBERVDTDOQCIPAWUNOIWPYJTOZBPPHVENLMXSIVIINFCRQWCG");
    msg.goal_xml.assign("LUKPPJOUEEINXIGWMZHWUVOZYTXZFMJVQEVWSAISJAXEWAFNNTVQQVHHJHCSQEBSCDAYMJBILEAZGBUUJHFGYUXPOYWDTYOSNYKBICPQNRPDRCSTLFLVHQVHAPRPLYDFKOQUR");

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
    msg.setTimeStamp(0.5613697883781876);
    msg.setSource(47186U);
    msg.setSourceEntity(120U);
    msg.setDestination(39964U);
    msg.setDestinationEntity(103U);
    msg.op = 173U;
    msg.goal_id.assign("UEYPLAGUYCK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DGOJOSSLGSBJYGAEXOYTEEGKBFYYFNXXUZDGCEINAPVVCQQRKDUXHMYUSTOZUVUVPARCXMIALNMKGCANJLQLDOINKJDLWUTITVWKWMBPSCBHYKJYZDLBJUTEKSEEFJVKHPEMSMYVVAHGZQEWBFZWWFCDRBFCDCXTICPITRLSRWXZPOPURDNHZYHMFYQBTEALKWHLJFQCRTPQJXUGRNSAFWGLAHVBOKGOORJXPDBR");
    tmp_msg_0.predicate.assign("GJMAREMZWUDXIPXSWVVZSKBXQNHRVEMWIHPSZDRLLDIIQFPAEQZDBLTCALHTDRGNQUOTOJEBOVAORTYQSCXOCHFOYZHDSJDWREGSDOYKPXGGVHBOTFNIKQNHQLYABPJUUWTIFYCKPAYBJZRLKE");
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
    msg.setTimeStamp(0.7459633434636677);
    msg.setSource(5725U);
    msg.setSourceEntity(230U);
    msg.setDestination(23953U);
    msg.setDestinationEntity(76U);
    msg.op = 227U;
    msg.goal_id.assign("YFVGVUDTXCKDJBNHTCTKJBGCBVJFCSWIQFEFNJAQMRZRWHQZYUNOUVPGEFKMKWKMLGKNOCOFPTPDSMKBXBXDRKUXAELOHLHINVHI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MKPUHEYRZGYFBDMPTHJUUEJYFSVUCMZQVDUFDPJAFMXALQDXSXQPHSUKYGSVMCLDHDIJWUXJETXZOYXBEUSKMVGOOLJFZVKETBHZRGLALWKYKGPLLCSXJIEOOCAGOECWVFDOTWVNGSQSMWZHWJQBVOKNMCRDFBWWOINYBTFXQZCUGNIQAGVOXQRIRLUBZRCYZEDVPYASINITPHWTSNHPIPJTQFBCKXMEA");
    tmp_msg_0.predicate.assign("TEEGASLRMJIKDMJOYJSHIWREVMOKJYGRUZHCISNIQEUMNJHYBMNKTNKTHRBYWZRFCNOEZUAVZFFPSCPLDZDBU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KWDXKTKDBMFWBCWEYRXIQABTWLZHNQFSAJSLMU");
    tmp_tmp_msg_0_0.attr_type = 157U;
    tmp_tmp_msg_0_0.min.assign("NXUCRQYNGTWSUPJEDKNYLCHLISFWLUNLTKIAEOSQCDPBGKRKHMCCEAVKIREKYUAOBUWVRUHBAJOXRFSMFTZFPMRBXKVWRUJMALEKNXMJIZGZFTNZBYSEBCGDWGYNGVZBQLZTHQFXRQYOPSPLBPOZDDGXVTOFMIQKMVLYDQMSLMCXWTHXCNFDOJSOH");
    tmp_tmp_msg_0_0.max.assign("ZXPUHFODEPVDMHLBYYQLHZEUTZFSKBMHOYFWSAZFVMLCADRQFAZCETMMIMPUOOYXSQERSCTVBOXDIYNCFJUMPYWVR");
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
    msg.setTimeStamp(0.936282451389618);
    msg.setSource(15837U);
    msg.setSourceEntity(68U);
    msg.setDestination(40450U);
    msg.setDestinationEntity(97U);
    msg.op = 129U;
    msg.goal_id.assign("DWDIYDOIQPBHLSAOFILFCSXOXCNIBOJIEHIBVRNKNLTTENMMXKFUOXULSPKWTYZJGBGHOWBXHUTNCBCWORSUHDQYGFGFCLPUTVWPQMDREXWNGIIVRNMSJOBTJRMYZEHPCTHDLEQTSYZEZHLYUJMCVKAJYAQRUDDVZQQNCVAETGLFGBSMGQWSLYWRHOEACFEJSXHKDZFUYWAMZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EJHUSCTJMFVWQWJZTQCJDSRTBSZZRSSQIVIHYNIMDVDAOMWNKRBJAPAIAOKKCMSYNMWAWGEYAVKEROYUCKVLRRZUEJYMUXBRNBGGBHOLLMQOFJZEPQLEVUGXQYUXWFRNKHPZJRILLWPBOJPAXFCQPXKEUTDAXZVUQSTAVLSMGCGKPXGUDIEWUSINCBDGFOQWLLYAYYODSBFHRPXZQEGWJFINTOLXNHHBVHPFBTPOCNFM");
    tmp_msg_0.predicate.assign("MTRPWFRWOXRSWBJKQGBAZPUUOEMHIZWAXFHZTTGOAOWNSRJRZGSQZHABZVJFDSOKGPMPAIJYCMODUFNQMDLCDPQUXGSCJLZKQPVIARZUQVUCINMASBYKEYIACTNMIDFLQCNMBTJYUBEVCKNMKIHJAGRDEQQXPKRSENXWBRYVWNYOKVVWGSTNITPYKEGYBGUMLULZAC");
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
    msg.setTimeStamp(0.43340155534514213);
    msg.setSource(55608U);
    msg.setSourceEntity(31U);
    msg.setDestination(59503U);
    msg.setDestinationEntity(106U);
    msg.name.assign("GENGJNVCTDNWYWZZFYLRSTQNGTPAWHTSCPZAMOGVRZHHOJXFABQUORDCJTPMXMUJAORERPWOUPLZJKEHTIHJIITXBVBQBNXDNBFOZMR");
    msg.attr_type = 225U;
    msg.min.assign("WHDZIDQVSKGFHGQUOOLKGMMJKZQPVJIHBLPMMECMURSRBMKPVDSYOCTVNFXBBVQXWVKSBUJBIYRMSMQEFWXTSANSTFMOAUNNUUYVLXQIDRWTVBGXZLIEGUYDJERJDUJYPLQUPZJB");
    msg.max.assign("FLJZTRTBIZMLUPAZZBQGSEUOKISNKZSYAWXNQCEJARDKWACYPCWQDMBHLNXLZOAUOKRTSNPPBDHOLZFLWHKTCMDKCJOWREOXMDAVEVPDUVMXLNPQCMNJCCW");

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
    msg.setTimeStamp(0.47466768961955363);
    msg.setSource(4800U);
    msg.setSourceEntity(233U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(95U);
    msg.name.assign("HBWHLLQTHPGKCMUPPRHIADTBAEBOOLZIFBCDYCTIJMRRLWTIFWZZALQTVWYPWTEEWUXKGSWDIMYCSYXXLCVNKHZGBMCNWBOKFVRXGVNNZBEGUYWLMKQBGFVVVNFREGNPSQYAJFGJOVZOJCSXZCUEOKUNECPDYGRJDASMZAVASHDQAVDHRXIACMFLZJZGUJTQHSUQS");
    msg.attr_type = 149U;
    msg.min.assign("KJEQVEUWSHTOQJKOLKCVXLHCUPKGITPNNXFTFDARVXIPYCREYKQTDSXZHZNGVIGZZBJORNBOILAQFUMEUZUTTGDBWDWOBFGHYDUQGXJVLLKXWIJRUAHQFEZZYLSPRENFDSCLCFBBREAJXEQYBLUABZFLNQMTJWGKNNDFPLYIRCRUWBPSCCHUXYOIISYYTMPOTRMVMPHJPMGWAAFZRHMIAMKTVPDJEXSMSYVZWEVCONWDVKBIG");
    msg.max.assign("RBPFQHESQGEKFHXSJXKPSEEXRPWQYDXPNIBORNKVYCADNABZYREJTHQNCKVNEGWXNSTUKFGDVTHNXLUDYOKJDFNRKADLTMCHUDGZTZBUUMRKAWVVDZPTXWFPMWTVRYIISHRJTLFICZCPYSAGGJQIUYUILWALQMLCFXIDABHBGNKUOFZSZOCMOOQJWUIOEV");

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
    msg.setTimeStamp(0.24638931650792528);
    msg.setSource(8369U);
    msg.setSourceEntity(124U);
    msg.setDestination(46970U);
    msg.setDestinationEntity(68U);
    msg.name.assign("IOMZBHLUKIHBZSXLVSARWNYIHMHAXGVKDSUULHMDMYKBKTXMEREKPDDWULNLIDHZBRIACMUTUAITNTFRDPDFSOOYSHXWKEWGCRFNWEVALVYCQFTFHNJNFOENAEAKTYVRJQPZUGERQMQ");
    msg.attr_type = 62U;
    msg.min.assign("BBCHXPNRCWRRBPVRFUVJLISXYVFNDZPFKNNIDPCYQZSTOKZFGDPXKTISTAYGEVMGEHRWNOMIAULQDMVUTPYTDFOCFQCIUSBGLHZSBKUQPXCMLEJRGADHMOAYCXNWFXZMBDOFULBIRKBDXNAADVQOTOZKEQOJTUJHUGAMSAWWJHLFPAWEOUGNMSNRWQLRKGMHISGHZJEKYVBWIJEZCSNBPZFKMOGJYCQUSJXCILEHE");
    msg.max.assign("GFYDSTRMNBOAMZELGHGLPNJDGFYUAZIUBQQSVYVCTTENWFYSDLLOYFAZTMYUFVGVJMSCXSNXYSKUUJHINAUDSPIDMVZKPHGOQHP");

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
    msg.setTimeStamp(0.6969269993843882);
    msg.setSource(31673U);
    msg.setSourceEntity(86U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(45U);
    msg.timeline.assign("PWFKHKKRBFKFSTHIYYUFVAXCHURHCXBAYLIHACDFJTNLDIUPCNQHNGJEZBEAYGOAIVIOMJQIOTXZYDETENKSEKGSQHNPRGSWOJNZLDEMVJXMZTSHWVPWRIOURDTOPANWDOMIBNVMQSDAWFVCGEQKVMCUBYPJZBQTCGKROHMSYPB");
    msg.predicate.assign("FORUYUYHOKLNMVZYLSEIIJOQKQJWLEHE");

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
    msg.setTimeStamp(0.844150364715049);
    msg.setSource(33839U);
    msg.setSourceEntity(65U);
    msg.setDestination(44301U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("XTCZPOFEPQCXEYWKWOLDHVNGRJBTTMZPVJAZL");
    msg.predicate.assign("YUEJRMUGYLCQOMVNVJMODIXPJCKMEXTF");

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
    msg.setTimeStamp(0.574729174709469);
    msg.setSource(13627U);
    msg.setSourceEntity(228U);
    msg.setDestination(60136U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("PQGBYFDRKJHZDCEITHPMMMSLBBXXJAJZFYPFXXRZEYJKVQHWIQTDUTMIIOHZLEPRHTGEWQWQZENOHKVFJOMGLMPMBLDGDSNLJTDEFGXZAQMSAZAXUW");
    msg.predicate.assign("CIWTEVHHNFUKGDVDAJXOGGRLIZZTEIXAWKFOITRUWTBBMEOSQJDFUYUYJOZVYQBRJEKABBSECDFAFLRBLQVNKSQLPRIYXYHAJJMTEYUCQCFXGQCCJAVNZVHWIBMBDOCQHSUXFSGPLBYPQGVOKRJNSKWWZ");

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
    msg.setTimeStamp(0.7214860562969146);
    msg.setSource(43960U);
    msg.setSourceEntity(193U);
    msg.setDestination(48599U);
    msg.setDestinationEntity(246U);
    msg.reactor.assign("ERYYINHTUJTYHWPUEVFYNOOWJXVHCBISLTELUAJJLGAHUGXJAZDXBKOLVTCFBQQCSQUGGGYZUMQPPZEYUDVVOFUMMGNWDNIDWVOBTUWOYREXQBHGETLZSISWIRAPCSRSLWAZFICYZRTJQAHBP");

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
    msg.setTimeStamp(0.943106096475213);
    msg.setSource(3727U);
    msg.setSourceEntity(129U);
    msg.setDestination(50505U);
    msg.setDestinationEntity(44U);
    msg.reactor.assign("GXISKLVAFWBBRVJXCAWESASJTGLTIRSKVCBNEHMKXEBQHKUISPUGIHGLNCRHWPYRZHZMAXCJWPNIY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FMOOMJTURHLPYZEWWZSKRDTCBQXXNVBRZXMRTFBNRPHWUMUEXVHGJUEVRKAXDRYODXZNTHYIEVSMPDGAGOGITHNEHYQL");
    tmp_msg_0.predicate.assign("SFKRYTQFWEDFKMGKSHVBSAZJUBCRADQMCMWVFAHZXTWZUSPQAJGYXUUJBTEVMGIJRYEIBHFOEASFIIRVRLINJDJUWCBWKFODBGHFGLXNANBPKYZQLENVIMEHQNHQNSUCVDXHWCTVIXELSNHACBYZZJMPLPGWOSOTDEKCFMDLOLGBZPPWWCMBLPKPRZOAUNAUQOPTOVILRAQHSRQEKCOYWXLYTDTDNHZVPU");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DDHZGLPMKEKVHDWBJZTUJBQRMZRCZEXYQCXOOHFWAFWYVELATKSDNUMTDSIRXDZYFIEVHEMIXWMJVJURC");
    tmp_tmp_msg_0_0.attr_type = 198U;
    tmp_tmp_msg_0_0.min.assign("JQITBRLNIJRBYKBAANFJNXJXCSZICETNNIYWZMDRAMTHOSZVRBTFKXCUSJPNKHUYJEWQWADWIXHGABHFUCHGLHGNPPTYHGOMJIGRKZSBLQGCNJLOHIEBBDQZTLDEGTCQGZSODMSUQYWZFBRZJKWFDFPEIWRWLJVCYKXOEUPRSELHXKGMNKPYEFQKVATQMKVXDDXFATZYPXUCABLUEUHEOMMOYVLCVASZ");
    tmp_tmp_msg_0_0.max.assign("YMONNBXDMIOHLFHQSYMVRTYBZVAKGHEJQHDWPWSUCUPBIPZYKMDYTHJJRDMLWVRZZNBRNCZSOVHLE");
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
    msg.setTimeStamp(0.9003384519340208);
    msg.setSource(31947U);
    msg.setSourceEntity(116U);
    msg.setDestination(58861U);
    msg.setDestinationEntity(30U);
    msg.reactor.assign("DNFVBYIVJUFBJMJEOTPOKMVWLYTBDQXAPZZEYSRTYXLSXKSQGVGZAAJEORCHZSUBEIZNKICLAMMDI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ILXOJFZISOLNTAEXTPEMAKGOGLUYXHZJVQMMOCXWYPJIFPTAGEBVHMKJSVTGLEHVCDPPYWQWZHOXINNRNEJFMWVNOPHTHDCDSQPLYRRZCNTUVJCZMCCRQUDDYTSXSVDAKUNIFKWCKULDTHZBHEOQLKDWTYYXIVWWKBUXQVVGPYFCKZGWBCRJSSXJRBGKRLMBBZATMW");
    tmp_msg_0.predicate.assign("QNBGOTBNWBDGLCOIEOLZBSRHUIBDOQAABNRWFRFZKQGKJJKUZMMLVJSUCLFPDACOWWEIISVTWJNMVYPUWAMUSFNYECAZYHUYILRQGHTVJXZTPJDRKSRDOAMMTOSFJADKDFQUHHJCXSKTYZDSZCP");
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
    msg.setTimeStamp(0.15178689145267765);
    msg.setSource(50777U);
    msg.setSourceEntity(31U);
    msg.setDestination(20052U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("VZQVPOGMIOUUUWPFEEURLQZSSCGSDYRJNOQHA");
    msg.data.assign("XYNDPCNPYAQXPELZIJKNNLRYFADWUKIQQTPF");

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
    msg.setTimeStamp(0.4698285555908408);
    msg.setSource(62861U);
    msg.setSourceEntity(126U);
    msg.setDestination(63894U);
    msg.setDestinationEntity(166U);
    msg.topic.assign("QVXZXGKKEUKAQLFZBLRHBHIGJOYDNXGPYNLVTCMJEHBITQHQUUXGSRHXVMBYPDCDBGGLNJVZBJDUQNSKGCOTNLWQZXJOKSEZIYHEJJTVAAUCVYIFDNCHAHTXOSFREYCWJLN");
    msg.data.assign("KANFUYRIITDONXRAOINDFNAUVFUOVCTDRLKTCMZZDPRSJUIPSQWBQSHYFLJEOPMYJTRWAUHMPAGKVCHMBEPDIWQSRSABJEHHXPFHNTYHVFBJSGUADFMNMWKENJWHUNDZEKUUNJVKBMVCIIQQJT");

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
    msg.setTimeStamp(0.2923474777862264);
    msg.setSource(19764U);
    msg.setSourceEntity(58U);
    msg.setDestination(810U);
    msg.setDestinationEntity(198U);
    msg.topic.assign("JJNPXHXKMHRLLCBBNNZQEPYLPKQPFMZNFUFEYDZRRIAALWYMUWLNTULFWHJMRRUUOCQYIUSOIHXDUSBLSQHDBUODNTXAKSQZHWMPQMZKXTDPCJEOCVYIFMOVGUGGKGGHYFOMDESFIARTELMHXCEZNGCROQMOSKPEWXDINZBRVVPQQYSPNHBPGTFIVYNGTYZVCXXURRLSVOFEAWTG");
    msg.data.assign("QXUVPFAQWSLIEJFAVOGXKMHRTDQ");

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
    msg.setTimeStamp(0.45325070820471125);
    msg.setSource(22417U);
    msg.setSourceEntity(37U);
    msg.setDestination(2900U);
    msg.setDestinationEntity(61U);
    msg.frameid = 92U;
    const char tmp_msg_0[] = {-118, 118, -7, 59, -23, 105, 119, 126, 60, -18, 106, 70, -50, 104, 69, -11, -125, 98, 27, -87, -53, 71, 71, 3, -127, -11, -94, 11, 36, 1, 14, 77, 37, -99, 124, -98, -104, 0, 70, 74, -105, -13, 81, -23, 105, 41, -88, -53, 11, 0, -51, -49, 25, 71, 118, 69, -45, -3, -51, 26, 109, -61, 120, 21, 33, -63, -30, -71, -13, -66, 63, 94, 26, -35, -46, 33, 30, -36, -86, 24, -12, -20, -89, -124, -106, 56, 2, 15, 62, -110, -7, -45, -34, 60, -51, -78, -81, -46, 44, -61, -4};
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
    msg.setTimeStamp(0.4312578939839554);
    msg.setSource(43887U);
    msg.setSourceEntity(174U);
    msg.setDestination(16532U);
    msg.setDestinationEntity(91U);
    msg.frameid = 69U;
    const char tmp_msg_0[] = {71, -125, 36, 85, -103, 76, -21, -59, -127, -51, -54, -54, 70, 28, 53, -127, -5, -125, -86, -58, -40, -110, -109, -48, -17, -127, 111, -4, 69, 111, 121, 68, 49, -53, 101, -94, -37, 74, 114, 24, 115, 94, -84, 1, -62, 59, 88, 82, -2, 112, 119, 5, 32, -37, -11, 28, 83, -91, -3, 54, 25, -2, -37, 26, 0, 80, 116, -84, -113, 61, 24, -22, -31, -8, -24, -82, -35, 12, -38, 31, 110, -120, 111, 54, -67, -128, -72, -1, 44, -124, 19, 126, -69, -39, -31, 116, -78, -2, 62, 4, -4, -82, -16, -112, -17, -78, -41, 108, -116, -29, -95, 11, -8, -52, -27, -88, -77, 43, 43, 68, -22, 57, 124, 106, -33, -9, -32, -49, 72, 9, -123, -17, -68, 95, 92, -10, -118, -67, -35, -38, 99, -68, 90, 57, 94, -104, -96, -29, -53, -23, -3, -14, 34, 23, 6, -7, -24, 82, 26, 75, -71, 71, -61, -55, 16, -122, 107, 110, 7, -124, 126, 87, -44, -115, -6, -126, -123, -15, 40, -8, 0, 123, -114, -2, 81, -8, 70, 64, -97, 22};
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
    msg.setTimeStamp(0.7449375156268662);
    msg.setSource(37090U);
    msg.setSourceEntity(1U);
    msg.setDestination(48490U);
    msg.setDestinationEntity(128U);
    msg.frameid = 218U;
    const char tmp_msg_0[] = {53, 14, -84, -22, -126, -66, 104, 83, -1, 40, -110, -119, -71, 71, 122, -119, 8, 108, -24, -70, -26, 6, 97, -96, 41, -120, -121, 48, -128, 92, 76, 34, -66, 58, -1, 104, -93, 120, -12, 57, -115, -119, -120, 119, 79, 10, 0, 2, -38, -124, -6, -71, 47, 26, -33, 29, 61, 108, 92, 0, -117, -112, -74, 83, 99, 112, 120, -33, 39, -110, 19, 120, -43, 52, -80, -49, 4, 82, -101, 29, -29, -58, -72, -90, 70, -16, -42, 40, 70, -83, 124, 65, -100, -25, -79, 69, 95, 45, 110, -31, 112, 124, -117, 92, -55, 38, -53, -75, 118, 83, 58, 33, -82, 123, -78, -83, 102, -14, 62, -111, 78, 81, 85, -60, -10, 76, -25, -107, 103, 109, 103, -7, 18, -110, 23, 88, -69, -94, 43, 45, 25, 57, -51, -25, 81, -90, -118, -19, -116, 82, 29, -80, -118, -108, -118, 87, -67, 72, -65, -83, -83, 54, -92, -91, 111, -22, 49, 96, -31, 123, 14, -99, -83, 102, 83, 11, 1, -56, 86, 111, 38, -91, -105, -95, -59, -85, 116, 35, -57, -83, 111, -48, -62, 65, -128, 74, -7, 82, -64, -126, 39, 30, -90, -96, -3, -123, -116, -88, 42, 29, 67, -124, -80, -61, 76, -26, -66, 125, 91, 77, 8, 1, 43, -35};
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
    msg.setTimeStamp(0.44194402694457635);
    msg.setSource(65304U);
    msg.setSourceEntity(36U);
    msg.setDestination(16813U);
    msg.setDestinationEntity(121U);
    msg.fps = 196U;
    msg.quality = 195U;
    msg.reps = 77U;
    msg.tsize = 123U;

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
    msg.setTimeStamp(0.4666557459957219);
    msg.setSource(11752U);
    msg.setSourceEntity(54U);
    msg.setDestination(32183U);
    msg.setDestinationEntity(41U);
    msg.fps = 201U;
    msg.quality = 179U;
    msg.reps = 1U;
    msg.tsize = 89U;

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
    msg.setTimeStamp(0.5518915233795684);
    msg.setSource(45589U);
    msg.setSourceEntity(13U);
    msg.setDestination(46720U);
    msg.setDestinationEntity(141U);
    msg.fps = 252U;
    msg.quality = 115U;
    msg.reps = 82U;
    msg.tsize = 243U;

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
    msg.setTimeStamp(0.3473275460105293);
    msg.setSource(30357U);
    msg.setSourceEntity(219U);
    msg.setDestination(35744U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.9117929926850005;
    msg.lon = 0.5961085058831735;
    msg.depth = 39U;
    msg.speed = 0.7141292484017051;
    msg.psi = 0.35036863759081605;

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
    msg.setTimeStamp(0.07089335018170084);
    msg.setSource(42776U);
    msg.setSourceEntity(12U);
    msg.setDestination(51130U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.7766972169263787;
    msg.lon = 0.8180510715779447;
    msg.depth = 140U;
    msg.speed = 0.3915103240936817;
    msg.psi = 0.1516794846816012;

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
    msg.setTimeStamp(0.8867034998522471);
    msg.setSource(22522U);
    msg.setSourceEntity(72U);
    msg.setDestination(26974U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.19993283510839122;
    msg.lon = 0.6094508223669196;
    msg.depth = 184U;
    msg.speed = 0.11197539792547628;
    msg.psi = 0.5887210163516668;

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
    msg.setTimeStamp(0.17811174033558708);
    msg.setSource(58534U);
    msg.setSourceEntity(253U);
    msg.setDestination(31650U);
    msg.setDestinationEntity(98U);
    msg.label.assign("TKQJLSKQMMGJOSRSYLSOPNTGKNFUGOXEFQNXHICUKAHQHJBVDNWZSMYZHQRMMJYTDEKPXYFLOPTEZCWVPXNTD");
    msg.lat = 0.8227295136567416;
    msg.lon = 0.12555559185137277;
    msg.z = 0.06668814963318381;
    msg.z_units = 228U;
    msg.cog = 0.5436960641330232;
    msg.sog = 0.009550731530564072;

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
    msg.setTimeStamp(0.6805150339861263);
    msg.setSource(51950U);
    msg.setSourceEntity(16U);
    msg.setDestination(295U);
    msg.setDestinationEntity(55U);
    msg.label.assign("ERBGQMWZJSUYCTJYCGSTPRKPNFXPHALTXMNUFFJFVLFHXRJIUYSFYRNJPIVSDAOXYHSUMBLKYIWADTGGXBPWRGHQPTUDZAIKNDDMVREQYNEX");
    msg.lat = 0.9411086887263179;
    msg.lon = 0.49901137136489493;
    msg.z = 0.7030028666657857;
    msg.z_units = 100U;
    msg.cog = 0.5309209701117825;
    msg.sog = 0.9128810299431213;

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
    msg.setTimeStamp(0.9074081502870103);
    msg.setSource(65001U);
    msg.setSourceEntity(197U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(244U);
    msg.label.assign("NTRRXTVQTUTTLPNEFDZWVBYEDLNFHNKSRHRFHTJCWAXLXZXWEJCYAYXJBILQEHUDUU");
    msg.lat = 0.922022483289259;
    msg.lon = 0.6573637014036732;
    msg.z = 0.9683948017478964;
    msg.z_units = 239U;
    msg.cog = 0.023734822727048743;
    msg.sog = 0.31967950118090227;

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
    msg.setTimeStamp(0.050271511822945536);
    msg.setSource(20535U);
    msg.setSourceEntity(120U);
    msg.setDestination(26611U);
    msg.setDestinationEntity(23U);
    msg.name.assign("GSKECMUQKDFYCSLSVMIFIVNWFRTCDXIPODOXZXFYIPJIM");
    msg.value.assign("GMJQKCGMVDNVTNUTRJBFCMPALVYYBVAHL");

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
    msg.setTimeStamp(0.5054347058488666);
    msg.setSource(41230U);
    msg.setSourceEntity(17U);
    msg.setDestination(30987U);
    msg.setDestinationEntity(220U);
    msg.name.assign("CLRXKIMSJKQHHJJOTJFPNCGOQIUQNBBCUCSGFIOVBKHKDUNDSXLUURGZAVFCMLZYLOLSFWDSHHCMEYLYRCMMXDRDWQWYJRUITOIBEGZHAPEDRWWRZPXONNSIIVTAFKJGBZBVLFGBYCHOAXIGAMNZHSBMWQLVYDANFVEITDGXABWYEQEEKKXXBGVZFTLIUPQTYCTFWEMKROHDVOAUSAKZTGXVEJYEPHNJNJWJO");
    msg.value.assign("NHSQAGVRPTWNSJDXAOJZWRCWKDOGLVERSMELTYADJKXPDIFIRQEEWUNISJPMCEBYSOMVMDNYRAVTBUHCZNHZQPADIJCCZVZJZVADAXHECVORFKPKLMGMTFNMKIPFNHXAJKWUTLSGOJWGQYZFBFHZHVLMXTPKSQEOUTCHJUHYYXZNKVYQRXBXGCERQUOKGIH");

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
    msg.setTimeStamp(0.22822265946762343);
    msg.setSource(11251U);
    msg.setSourceEntity(223U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(74U);
    msg.name.assign("NSESLQFJIKBGUCPBLCZFZDKOBODRHPPTMVWIBPOPOWXMZALIBSDGTQYZFLNTUUSNBQGBVNQFLEACQTDJRYPWVCETNILQZZUPCHRNHQEMNMYQUIVSPSRFXCFAEPGXXGDHURTQUCCROJUDAOVAIRGKMZXUCSXPNDZHEY");
    msg.value.assign("DGHPMXSXZCWNYTNOMDTBAXWYDKGUMMCNDAWPTOPVCJFCCHQZSUEVWKVMIPAHIKEFRFTVIDFGSXXFSVFMSNCCRBAWBRSGRPANYGUVUVVSVJQKUSXHDMHQQYILAUPKWDECLQZLPZLJTDEKHPZWQLZSJYDMKHONGILKFOJBOPLGRKRHSTTDLJETHLFQZUAMWUGLIJCRMQTBGAPIIOKAFBJYRXHJEYZABBROYQOQWNEXOUTO");

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
    msg.setTimeStamp(0.014733033601479373);
    msg.setSource(48474U);
    msg.setSourceEntity(236U);
    msg.setDestination(10966U);
    msg.setDestinationEntity(114U);
    msg.name.assign("ZUMGUWQDPPMCYSAGMKLJVQOKKNIWEIOLEJIBUQXEBHJIVKHZFMVYWKIBCJLPMHDMEVTQQQDANZHAOHFZFBJLAMKNHUELGJBUAXFPXPZQIUGVGYLJHBENNKTKSDCEUNBWCNJUAWRQVIHTGOYRVWDZFXYBFRQQYTGLIXTLVPFCPTGNSSEYSSDLGKRDWRZTODCG");

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
    msg.setTimeStamp(0.12284605570096463);
    msg.setSource(22163U);
    msg.setSourceEntity(247U);
    msg.setDestination(45787U);
    msg.setDestinationEntity(210U);
    msg.name.assign("VQCDPORWUYEIHCKSBVNDFECFVSKQPVMXYBNTWBQQURHYDRILMOTWUGPDHVKJJUSZMHQTOWYHMFXTVPTUWXAHFE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZIFKPVSTPSOUTMWZHZRUBINHQJQIWEWELGRDZMOABMXGYUHPBSKEDHOLQDMODESYUBECFCQXDHLQRYNWJX");
    tmp_msg_0.value.assign("XZQTAGBSJIUBFITNOQQURUASMCIRRAYYOIYPDXVRRNOJXSMHHFDSEACQTJVFGJEUYBGPUEMCNXXDHAHMOTQYPFBIBIVKGOPSYSJYUNEUWSKBLNEJVRNAQKGWDDRZQCGUYOWCWAXD");
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
    msg.setTimeStamp(0.2245650997432993);
    msg.setSource(60593U);
    msg.setSourceEntity(228U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(87U);
    msg.name.assign("ZSJBMGXIABSIFQKSIPODRLOVIYELDGWQXRKBXALSKZYYPLMJKWYZPCLRNMUCHBENBVOVFMMWGSKSGQNGARCRQYHXBXAITTKAZECQAHGJCQJSCJUGKCBEOVDIAWVOUCFWUJFHVTNPUGBLIMRQQDWDPAABWPIPWZJTDBZLFNKLHXFXUDHYORFTTFMDZFZTSVOJTOUKLYQVHSZGEKEYYVDJRSYAEUOCNMILXNJMHRHXPI");

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
    msg.setTimeStamp(0.9429719806406056);
    msg.setSource(58368U);
    msg.setSourceEntity(187U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(205U);
    msg.name.assign("SNHDYOUKLUDDTNRJCVLFZSOASWJSEQLNFOGGMNMLAXTSTQHJPCJRLAIIGIFADNFSFIUVZKE");
    msg.visibility.assign("AXEPNPLPMHUQHFDOWMUCBBVQAXUTLRVZJAYWRLIUCGSCZUBEECCKAMRGFDERIOQXJEKISSYQSFPVFSNBDJHZNHPYYDGPZXJEDEUVVPLKTMJZWTYPOAVHLBINYRKBUKASYNKXCCJDAFXMHIJHWFDKGLCQGGVREVOYTTYPIEDKDOTNLQFMLLQPBMZOTZWBCNGMUURFZJIDTHMTQQIOOUXNKGWOVCMFGWBTFASJZXHRWAJLEYGNAKWSB");
    msg.scope.assign("MJZNTPZQXKNWDLRYXMSVFLDCHAGYLSKJEJECUPIYMOBGKWVWNBSVKNXT");

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
    msg.setTimeStamp(0.5543205897320382);
    msg.setSource(14248U);
    msg.setSourceEntity(85U);
    msg.setDestination(10421U);
    msg.setDestinationEntity(230U);
    msg.name.assign("HCRSMOTREGXCDVTIVWXXLNEQDTTCFSAQYNSLXZADLKVKPMWSPZDJCGGRMIXTPJWIIPIJCMPUSNHSKGSKRKVOJMEMZMVUWLMURPYUFKVFSNTLBRYOMWUEFRPHCVZPH");
    msg.visibility.assign("EVXLYOBOIVZMBRXIUICFNIFZWQTRJ");
    msg.scope.assign("WKBBPLILKKRIHVWKJYRAEAYDLBZUFZWDMTSDAQJMREPAHEFGQBAWZCWQDVODJGGWLVKYUHJRWGNCLHDTQWHRPPYPNODXXUMSZDNMGTFA");

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
    msg.setTimeStamp(0.3001490348060101);
    msg.setSource(21205U);
    msg.setSourceEntity(58U);
    msg.setDestination(4708U);
    msg.setDestinationEntity(0U);
    msg.name.assign("QDNWUOJQEGFDWZKYBIIIOIEXREXUKEVBBWUXZAPHDHXHTLECEPOOJWZZJGQPRYRNULZGXJSTRBMZLQLOGGOCJWMXLUBTFSWRCQYFZAYIUQNENKTFVAAYNHXNPSLLUPKJSGKVYDOWFMGJTOTFUSBMNCWBGRTPHSXMHYSVBZISVDNQVKXHDGXMTFHKEYFQEMICVZWNYDCYMPCTVOVOJBIUAIPRLPHPBJKLKVUQE");
    msg.visibility.assign("EBKVIMWDCTLOWMWCLIQWYPRBLCVMFKCBIYGYOYVSZNBUSVA");
    msg.scope.assign("FRIYTCKLNGWSJGEVFSHILFXYTHHFNMQWPALDYTAANJSQCFLPFGXBVQKQGRJACKVLJ");

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
    msg.setTimeStamp(0.9429366755134378);
    msg.setSource(42133U);
    msg.setSourceEntity(34U);
    msg.setDestination(34377U);
    msg.setDestinationEntity(88U);
    msg.name.assign("MZUMWHDYZFBXRIFZPYGDYSXHVZMSMOOGJXRWDBFWBYYIZINYWXTLQFKQFVKZQLURMFBXPHIEBEPAAVTHKKHNSQJVUMQUVYFQRCSJJLSCXOPDENPSEMCFXWCOEZCZIAUKZBVBEHLPDLPAYMUKSCJUTODQPNWUPLPGOWIXFAHGXGYUTGZG");

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
    msg.setTimeStamp(0.48883026156000886);
    msg.setSource(60713U);
    msg.setSourceEntity(194U);
    msg.setDestination(23233U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SSWDVBAXLMJPKFCWOQTQYPRNLIVTBIPWHALNTANVKENGCMYORJQGXRQOMZSHERBRYRCGFAWOUSCRVEDOUXGIFIUHNHJVVXRQDOWKPIFUTXMKVGNLZYRBPQSNFEFZCBXGWDIHMUAVPLMYLWDTXTZDALTJSOOU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UUGHWCJKKQKURQIWVYGLOKFAHSIJNXBORPCTYBZRAQUWNJQYVZKRLLTINAZYEVTWJCRTYVYWLESQJVLPSTDERABWWPEFULTMYASIVEFNKOOMQDHCAQQHUTMXIJDNXBIHCWPEBGPALECYZWHLZSOVECSZBDZZNYDPRVFHDHBGMURFITYEUSHARBZXUEPLXNFDWOCXPVOFSGJISIKJKVUQKPTMX");
    tmp_msg_0.value.assign("MDNXYQBFMRBZQNPQUAXKLVVFJLUHUGCJMTYLAXOHDSSASOKDJMFGSYKFEIVTOJNZBXJZPILJS");
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
    msg.setTimeStamp(0.0397622145905292);
    msg.setSource(18300U);
    msg.setSourceEntity(204U);
    msg.setDestination(19689U);
    msg.setDestinationEntity(210U);
    msg.name.assign("QQYRLNUONPZZUTXIETLEYNSFONKZOXAAHXTZIENTEKFLBDOOJTEJNTSFGMYMQVCMUSHBMSVBOSBEJRDLDYIW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XBXTFOFVOLYIFBTCXDHQGFENOTUWOMYFPZAEBRREKWQLJYOHEKTQKRCWGPSWMUINZFXVRCYIGRGSSBHUWBPNOVYCFRKZKTNUNFGSSGRKKDJJDSPXMNTQZVGYQERQUZAIRAVBEIMNHSULTUCXZZOAIGPFXRLVVVKJWHAHGEMUETMKFQWDQCWZLHTDBSPNYONYJEHLJPADQSVPKDLIMBGLDAHZNJPUQBJDXMXOOWZVCMA");
    tmp_msg_0.value.assign("NIVDSQTKQMTTJKFXOEAJXPIDSHRYEYSWUJYDCIZNRMEUGNLDOOYCHRQKOZHMPSVQQBLSUVAMBBHARNKWIHBHIAWQXZIYHGDTUGVQEPWBNUFLCWALLAMRBCBXTZZUUXPWEBEGMYGODASCAFPTKAGOMDYWPXEUGZJTRZPWZLILKCFOWAVCIFGYJEXJOPVUNPCSIYDHMQNFHFOFCKMQVVGCJOVRXFNDBQIKWNKDSRJGSJKZJEPSTRNEYUBTXL");
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
    msg.setTimeStamp(0.09108322813768077);
    msg.setSource(47607U);
    msg.setSourceEntity(73U);
    msg.setDestination(48008U);
    msg.setDestinationEntity(193U);
    msg.name.assign("RWWUKSCBYFSZANTHWNGMXJJWIJVXKMRTFAPJNTBANQODSUUZLYJKQCIGUJBROVTTNISDAVXTEOGVXVDZRLQMJKWGAPUPVVTGDXWBCXHPEZOTVFMNLXLOSZNHHSDSEGSBADSPUJRIMAQXIEEFXDDCLARQJZOQBMEIGCPHFIDPVKNYJZHFHRLCDYCGNUP");

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
    msg.setTimeStamp(0.6009932245597843);
    msg.setSource(44335U);
    msg.setSourceEntity(136U);
    msg.setDestination(8891U);
    msg.setDestinationEntity(89U);
    msg.name.assign("SKOMINWRRFXXAWEDUYFALVIJSQACEWSGXWCLFXOHHHZREBJTLYUEDDDCRNHUGSALKAIOLZSEROGFNJERTMGMMHUITIVGQGKACKVNEHAUTBHKQBVPKQDGJLWTTOLNUOWPYZUHOSCCCVKYEYUJFYJVQZPSBNVLPPXMNFWJMRATWBRZVYFJCEMZHDMDBAGQZUXJOVKFJTQVIDPWKEXRNZUNBSXYPBHIMFY");

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
    msg.setTimeStamp(0.1432486587652939);
    msg.setSource(38545U);
    msg.setSourceEntity(147U);
    msg.setDestination(24575U);
    msg.setDestinationEntity(28U);
    msg.name.assign("MEXEVRKMWYFYYYWLFBZACSJOUVJRQLLIXGPJHPNJGFDNMWJXICUVXCFQYXQ");

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
    msg.setTimeStamp(0.6977628652144329);
    msg.setSource(30134U);
    msg.setSourceEntity(206U);
    msg.setDestination(40094U);
    msg.setDestinationEntity(186U);
    msg.timeout = 3018684380U;

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
    msg.setTimeStamp(0.10517769361087825);
    msg.setSource(42057U);
    msg.setSourceEntity(227U);
    msg.setDestination(28008U);
    msg.setDestinationEntity(25U);
    msg.timeout = 3746392382U;

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
    msg.setTimeStamp(0.32836370304817264);
    msg.setSource(57474U);
    msg.setSourceEntity(154U);
    msg.setDestination(54691U);
    msg.setDestinationEntity(194U);
    msg.timeout = 3374328873U;

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
    msg.setTimeStamp(0.8708995678542291);
    msg.setSource(26132U);
    msg.setSourceEntity(235U);
    msg.setDestination(13732U);
    msg.setDestinationEntity(61U);
    msg.sessid = 1097331521U;

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
    msg.setTimeStamp(0.827604156742505);
    msg.setSource(65511U);
    msg.setSourceEntity(74U);
    msg.setDestination(16025U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1832745883U;

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
    msg.setTimeStamp(0.38019308795592865);
    msg.setSource(10331U);
    msg.setSourceEntity(47U);
    msg.setDestination(21744U);
    msg.setDestinationEntity(196U);
    msg.sessid = 2816185568U;

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
    msg.setTimeStamp(0.053809681862501346);
    msg.setSource(44573U);
    msg.setSourceEntity(124U);
    msg.setDestination(19848U);
    msg.setDestinationEntity(253U);
    msg.sessid = 301166527U;
    msg.messages.assign("OJVBLMROATJAYMPACZUXBEPVKEFGTABCMYMWNPHQCZFKFUQDJKKWWBQMHJIOOQWBQRSDBZBWKASJDEZYOFTHPSVYROMRANXYHIIHAVSUNGRCZPYVCBAQPZMNTMSYYPSQFBSZFSCUQNGLRVLCUXMVEGGENNLRQKEGUTHPIVWJYLWRTNESOKPPXEJFXEDTWLHUJLDZJLTNHIBIQKLDXRN");

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
    msg.setTimeStamp(0.7552081871411409);
    msg.setSource(13445U);
    msg.setSourceEntity(226U);
    msg.setDestination(12504U);
    msg.setDestinationEntity(192U);
    msg.sessid = 2480023948U;
    msg.messages.assign("WWXWRDTEMDASCLQUKKPQEFTMNLFUGHJJYXKUUGOADREXVEIDSMURXXOSFSHZFYAWSCOENANFLVGEXSPNBKZPHZUHHLQJFYRLCHTDJIBYIWIAQLONLMXUASURMKPWCJGUZPHMBQCTBSGSDTYZYKKVVTQIPLIBTSCNTNPBUPNFB");

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
    msg.setTimeStamp(0.43426332385046995);
    msg.setSource(56275U);
    msg.setSourceEntity(164U);
    msg.setDestination(61468U);
    msg.setDestinationEntity(215U);
    msg.sessid = 4157642545U;
    msg.messages.assign("BJAACIYSBMUKVFGGGVXVHBBPRVDABASGTJDNJMECZVUFOEVVLZHWTTLTWHRJYNLDLBNSUWAPMCMKCXUIHDLKLYEDXFPNDXAIPMSGE");

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
    msg.setTimeStamp(0.6891860061756405);
    msg.setSource(31953U);
    msg.setSourceEntity(20U);
    msg.setDestination(7815U);
    msg.setDestinationEntity(103U);
    msg.sessid = 2623206977U;

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
    msg.setTimeStamp(0.24449798749505225);
    msg.setSource(51442U);
    msg.setSourceEntity(187U);
    msg.setDestination(52667U);
    msg.setDestinationEntity(32U);
    msg.sessid = 1127985712U;

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
    msg.setTimeStamp(0.012958394330877865);
    msg.setSource(39510U);
    msg.setSourceEntity(68U);
    msg.setDestination(8556U);
    msg.setDestinationEntity(115U);
    msg.sessid = 2977069630U;

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
    msg.setTimeStamp(0.7311526872549509);
    msg.setSource(16077U);
    msg.setSourceEntity(64U);
    msg.setDestination(19995U);
    msg.setDestinationEntity(204U);
    msg.sessid = 337489609U;
    msg.status = 160U;

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
    msg.setTimeStamp(0.7370773230620973);
    msg.setSource(11960U);
    msg.setSourceEntity(247U);
    msg.setDestination(61921U);
    msg.setDestinationEntity(103U);
    msg.sessid = 566923698U;
    msg.status = 224U;

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
    msg.setTimeStamp(0.6299021867777151);
    msg.setSource(51772U);
    msg.setSourceEntity(159U);
    msg.setDestination(59304U);
    msg.setDestinationEntity(164U);
    msg.sessid = 1766229426U;
    msg.status = 135U;

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
    msg.setTimeStamp(0.9172209405373694);
    msg.setSource(9U);
    msg.setSourceEntity(43U);
    msg.setDestination(4340U);
    msg.setDestinationEntity(125U);
    msg.name.assign("CYLXWSJKPJUWECMFSVIHLQUSKRAVMGXXOFZGUSFDVFWPDJZAFYVRTJNUZEYDDFQQEEVPNTIXEBCAK");

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
    msg.setTimeStamp(0.7625998579428066);
    msg.setSource(19391U);
    msg.setSourceEntity(75U);
    msg.setDestination(24099U);
    msg.setDestinationEntity(34U);
    msg.name.assign("UIGTHCIYQKSGJTZFFDIQWBADZSTMXHOHULQHMSGIKJBBIMURQYMRKNROYPKFFTXWNQKEVGZVYWVPSUSWCDZPMMPHKYARBGPD");

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
    msg.setTimeStamp(0.5545269612481956);
    msg.setSource(54897U);
    msg.setSourceEntity(253U);
    msg.setDestination(64963U);
    msg.setDestinationEntity(224U);
    msg.name.assign("KWKSPHUREUQPIYUTVHUIYQJXWOZOYBHZXPLMZKXOTYRLXRQWIFRGSKFPOTGTEXHTDDUTABJMKYBVOKVRWJJEWUZCCCZRWBLIWQYSCBJIDGPMTYUGBRKGMDGEYXDAMFIFVINJLDIFABWPVOQTLVSOXRHNAFSGFEPHYDVFQFBNQALZSXZOHGSGKNLRWLCKCUNMZCNLMACENS");

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
    msg.setTimeStamp(0.48594084805362137);
    msg.setSource(42379U);
    msg.setSourceEntity(100U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(8U);
    msg.name.assign("UFEBNPUDCBBIPSUMENWMCZRSWXATLJVMMFRWDEUTHVWSBYKZHQBRVQAZYNXWVDNCNKDXWNJJMQCFWWIGGFULYYDSPITJXMSQPZYHVPNPGHKJJTEGDRKLBGJGZFGQXRRLSIIKXXGYLAMTPIAHEXYTAXTBMQVBEPKOCOECZRBFULFWBTQISNLMOGLHAOJAQVUZHQYOZUYRGDODINZECRJKDYTFE");

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
    msg.setTimeStamp(0.9453202771985499);
    msg.setSource(31851U);
    msg.setSourceEntity(193U);
    msg.setDestination(36848U);
    msg.setDestinationEntity(111U);
    msg.name.assign("QBZADEWMPVVDSHKPEWTILRAMOGHDSBCIUXJQKUXOUDQURXPJJXWQLNIHMFTVBAFNQPWTLNKGVNJBTLPTILMPSOKVCADUFTZGVNCHISSIYAEYVGBRLCXRIHNYLYFWFVBPSAKWRVCZODEMFYEWGEXCRYZUJRBEEBJHMSMDTYIQBCPYDOOBGHASKYQOPRQNOEUXOCLTAASMWFONURNAHIJPNTQTESZXFGZMIKXDWGGX");

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
    msg.setTimeStamp(0.21035694080602918);
    msg.setSource(45841U);
    msg.setSourceEntity(65U);
    msg.setDestination(60922U);
    msg.setDestinationEntity(25U);
    msg.name.assign("WSMZXENYSEWGUWCHBPPRXARRXQZYSDTQJTUFZGNUMWRZOPEDJSFKXLAMZSM");

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
    msg.setTimeStamp(0.36565142204899004);
    msg.setSource(13592U);
    msg.setSourceEntity(117U);
    msg.setDestination(30784U);
    msg.setDestinationEntity(212U);
    msg.type = 170U;
    msg.error.assign("CAIKVHNQWYVXYPCELJFSQTBRIMOCEWSGIFIIXWNUOXLTVEMPHOSGJBZGCEKLERDBRNZIPHNRUQAPGFSXQQSZTAMCYJBUSQMZNZRPFNIGEPBEHOGKJRMRGDWMXHNPPHQVRDMWBUKSDUEYUCAYADCHLYYRBJQILELTQBS");

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
    msg.setTimeStamp(0.857287309592403);
    msg.setSource(10200U);
    msg.setSourceEntity(46U);
    msg.setDestination(3877U);
    msg.setDestinationEntity(130U);
    msg.type = 225U;
    msg.error.assign("OJGCIVSMLECQINITCZXTKWHSWZYABIVJEBXHTLJAZMLSZAVMAMVQPWPHYEKDFOYVYRDNPMLWFTFUPPJQGAFDCFNCBXDRQFQRAZSMWHUIENZJZOCEUYFJVMMV");

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
    msg.setTimeStamp(0.5289995683899713);
    msg.setSource(38194U);
    msg.setSourceEntity(107U);
    msg.setDestination(42621U);
    msg.setDestinationEntity(120U);
    msg.type = 3U;
    msg.error.assign("XMIOZWEJKKIOUDDUAXMEVUQHNXCHNHWGAYQRTAIFPZHBKZSEDSBYGD");

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
    msg.setTimeStamp(0.2807972246570868);
    msg.setSource(38909U);
    msg.setSourceEntity(212U);
    msg.setDestination(42878U);
    msg.setDestinationEntity(100U);
    msg.seq = 6714U;
    msg.sys_dst.assign("LQVRMPIARCIQQCUWEFQFJMEFUEMMTJBWOATUXFBLESFBGZPHBTTZJGIOKCUIEXVYKLZHKPAI");
    msg.flags = 252U;
    const char tmp_msg_0[] = {-124, 35, -66, 47, -78, 22, -71, -92, -94, -49, 109, 110, 106, -75, -68, -87, 27, -80, -9, -5, 37, -57, 64, 15, 48, -71, 93, -47, -37, -117, 24, 11, -64, 40, -116, -117, -118, 83, 42, 30, -107, 51, -37, 55, -52, -46, 99, 111, 54, 82, 88, -54, 112, 32, -88, 30, -42, -89, -123, -20, 123, -102, -10, -121, -113, -113, -82, 86, 13, 85, 101, -122, 115, 29, 110, -89, -59, -98, -7, 51, 80, -114, 84, 114, -33, 5, 112, -124, 25, -37, 4, -39, -96, 23, -41, 111, -88, 97, -77, -19, -100, -47, 104, -123, 58, -98, -112, -35, -53, -123, 106, -120, 75, -71, 56, -8, 20, 8, -112, -25, -79, 64, 3, 34, 39, 0, 68, 29, -29, -2, 67, -57, -73, -69, -70, -115, 39, -79, 122, -80, 15, -97, -100, 12, 46, 46, -31, -96, 107, 64, -74, 82, 101, 88, 76, -23, 36, 106, 16, -27, 53, 4, 97, -48, 109, 48};
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
    msg.setTimeStamp(0.680615019087045);
    msg.setSource(35544U);
    msg.setSourceEntity(145U);
    msg.setDestination(51560U);
    msg.setDestinationEntity(0U);
    msg.seq = 43040U;
    msg.sys_dst.assign("YXJTBPLVNJBSOCHVRIAMHXHROBASFYNFEUXAQJKXCTPVWGACQIWRFQBJFVIMDSMGKRCXDEXUMUMATQDCPYKOADZDYSBCHTRIPECWRVHRVWTJDJYOBINQTJFEPEONZLEZYUDEYOZQUNRDPS");
    msg.flags = 107U;
    const char tmp_msg_0[] = {74, 75, 99, 90, 103, -38, -105, -70, 14, -36, 107, -55, -108, 109, -113, -35, 43, 99, 107, -20, -19, 31, 16, 41, -116, 69, 94, 81, -44, 115, 32, -51, 6, -56, 71, -21, -88, -25, -36, 68, 90, 5, 105, -37, -31, 109, 124, 100, 113, -96, -66, 53, 34, -114, -93, 83, -26, -102, 105, -7, -57, -78, 94, -33, 113, 54, 74, -24, -79, 43, 120, -125, -48, 2, 31, 112, 54, 88, 24, 126, 48, 115, -31, -10, 62, 51, -35, 110, -5, 68, -1, -25, -101, 43, -97, -76, 107, -86, 13, 13, -74, 38, 41, 67, -29, -44, 46, -65, 18, 34, 78, 89, 48, 76, 76, 42, -73, -46, 101, 119, 54, -28, -45, 23, 72, 87, 36, -57, -28, -57, -127, 6, 110, -62, 38, 4, -127, 21, 32, 124, 113, -74, 54, -71, 43, -49, 27, -55, 118, -72, -14, -80, 7, 38, -112, -74};
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
    msg.setTimeStamp(0.6379208193826555);
    msg.setSource(40367U);
    msg.setSourceEntity(233U);
    msg.setDestination(54109U);
    msg.setDestinationEntity(106U);
    msg.seq = 19099U;
    msg.sys_dst.assign("MHMUEXVELSQVYBHJKWDXQDVYJJQAZBNIUTYUFIOTLVPHKXFTUTYJHFAMKIDQKXYQBHKYWAQSGQQNOGKKJGPECIFFOSMUSCFCCMOUWXLJNAJBWSVLHPIZVATVBNXGLZTELNACYOBRTZDWGHSIRYENKIFXCLDCOHRNISPXMPWZGAUWTDSRZGOYAUNKAISOZREOSWXPRRRLBEGXGRVCEDNRJOLU");
    msg.flags = 199U;
    const char tmp_msg_0[] = {-61, -60, -64, -67, -124, 86, 79, 61, 61, 95, -123, -106, -40, 10, -126, -98, -69, -100, -107, 110, -19, -72, 111, 47, -86, -117, 80, -84, 44, 30, -61, -84, 89, 38, -103, 80, -88, 124, -73, 10, 35, 94, 94, 52, -98, 110, 96, 9, 104, -6, 12, -16, 114, 81, -69, -122, -85, -8, -51, -57, -17, -59, 9, 102, -44, 69, 115, -47, -57, 25, 26, 42, -73, 98, -125, 90, 30, -97, -32, -31, 109, -95, 0, -88, -29, 19, -2, -123, -84, -99, -114, 24, -42, 60, 27, 122, 52, 83, 18, -26};
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
    msg.setTimeStamp(0.5122427006523311);
    msg.setSource(37753U);
    msg.setSourceEntity(198U);
    msg.setDestination(36706U);
    msg.setDestinationEntity(77U);
    msg.sys_src.assign("SXOYMGYZHAVSTAROUTDPEICWWKQRPMEECVSBWUKYDWTAZOVIFQRZVLNSZBBPDLKGRJCRDLCFLMDSFEPXRECEQIMBZCIQHAVIXHILJHWGBLXEYKZFJLECSMPFYPENUAUFYLNSGWMWXOAJOJKAGCQUOTXIJBYKVXVSFNTRZ");
    msg.sys_dst.assign("VYLFROSLWAQG");
    msg.flags = 157U;
    const char tmp_msg_0[] = {41, -108, 10, 42, 122, -69, 103, -25, 118, -16, 54, 110, 104, 125, -72, -123, -112, 61, 47, 103, -46, 75, -40, 58, 21, -111, -2, -99, 114, -34, -24, -71, 18, 106, 79, 54, 49, 64, -85, -18, 32, -14, -42, 53, -113, 13, 125, 122, 46, 122, 10, -92, 12, 96, 16, -36, -24, 76, -7, -124, -54, 94, 92, -46, 126, -66, 4, 104, 67, 25, 103, 3, -62, 109, -30, -101, -58, -76, 95, -80, 84, 93, -49, -128, -94, -35, 91, -90, 22, 104, 29, -92, -104, 48, 40, 19, -3, -20, 53, 70, 25, -49, -19, -103, 52, 76, -28, 126, 59, -9, 104, 125, 29, 39, -114, 2, 101, -57, 7, -79, 34, -19, 102, -117, 106, 78, 49, 121, -124, -32, 97, -85, -11, -119, -63, -113, -114, 39, 25, 122, 96, 81, -1, -7, 62, 8, -80, 106, -109, -64, -30, 27, 28, 106, -50, 16, -28, -91, -109, 75, -10, -8, 108, -53, -96, -44, -12, -59, -48, -34, -60, 17, -26, 60, -18, 82, 51, -28, 57, 117, 63, 100, -95, 84, -27, -124, -102, -95, 105, 56, 51, -74, 104, 35, 15, -65, -67, -20, -3, 66, -126};
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
    msg.setTimeStamp(0.9865581457882221);
    msg.setSource(46356U);
    msg.setSourceEntity(187U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(245U);
    msg.sys_src.assign("PQKZSBPHSBLLVZHGDFIGTHVBXSUIIFFZRYRKCSYNRMJQIAUPHMECCKOMAHYHPAYUFGWVYDZIFAURTPAMNKSBFOVROXNDZDAMVNLMCBOFKPJQNXDSLPYSUVUXRVWZDWPEHAGLBYBYIZVWQNECJUMWYWRXFTAKGHRJ");
    msg.sys_dst.assign("EMJOYXATJNLTDFHSMCPPHKYTCOWJEWNEPIXVTRAUKBSGDQIRVVQKJPTTCUKVNWZAYCQMQHALDZDPQXILIINOLAG");
    msg.flags = 17U;
    const char tmp_msg_0[] = {101, 123, 31, 19, 92, -46, 1, -115, -47, 116, 122, -6, 99, -26, 20, 3, 49, -119, 114, -32, -36, -26, 40, -49, -112, 96, 13, 110, -122};
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
    msg.setTimeStamp(0.043693466463808006);
    msg.setSource(18912U);
    msg.setSourceEntity(205U);
    msg.setDestination(6113U);
    msg.setDestinationEntity(34U);
    msg.sys_src.assign("DPYZCGJGDHYKKCTCPUYWKKGAEDU");
    msg.sys_dst.assign("PKMRLBZPIJNAOFZIDDFYYBPFIZTBCZUUQTPEVEHTJWITLYAEWPSKTASENQOXNFQDRJHCSSHUVWUNRQJYKEREEWF");
    msg.flags = 6U;
    const char tmp_msg_0[] = {123, -118, -35, 122, 100, 60, -14, 48, -113, -37, -76, -39, 100, -47, 29, 124, -74, 115, 121, 7, 117, -121, -51, 40, -117, 100, -77, -81, 97, 9, -2, -1, -30, -45, 5, -48, 38, -21, 25, -88, 102, -4, -102, -32, -83, -4, 113, -112, 18, 104, -125, 100, 110, -41, 114, 34, -100, -19, -109, -49, 121, 21, 63, -12, 115, -109, 53, 6, -92, 43, -110, 75, -87, -6, -38, -93, -73, -34, -55, -32, -104, -48, -81, 71, -10, 101, 58, -18, 12, -53, 97, -41, 72, -20, -119, 101, 33, -65, 41, -26, -82, 116, 107, 14, 41, 29, 91, -95, -76, -7, -101, 81, 21, -88, -83, 31, -7};
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
    msg.setTimeStamp(0.6304686165992393);
    msg.setSource(60064U);
    msg.setSourceEntity(215U);
    msg.setDestination(17685U);
    msg.setDestinationEntity(184U);
    msg.seq = 56972U;
    msg.value = 177U;
    msg.error.assign("ZTOOKFFQNXZFTRHXWCPNUITBJSUIDIMCXFYVLKPNELSJWZAUFWBSGZWA");

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
    msg.setTimeStamp(0.28189551294382087);
    msg.setSource(58409U);
    msg.setSourceEntity(45U);
    msg.setDestination(45635U);
    msg.setDestinationEntity(116U);
    msg.seq = 22692U;
    msg.value = 129U;
    msg.error.assign("MRQRAZZKAGWJYNEWXPYBANTZNSTDPTSOMWZRWYRUSIDENYUKMSMQTZNQCKQQJMJLJPAJWRPMIRXGECOHHMCZNUVIXFJSHVPNILWLZQALKSFHBFKDFTVKOXSCLRTZTYVWRDFXUYVIEFKBVAJRABGCGDQEEVGGCACUTQSJNYWUSHBBYXNWTXHCFMCJRJXHLVAILOULIEGAXO");

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
    msg.setTimeStamp(0.9905822761946788);
    msg.setSource(23738U);
    msg.setSourceEntity(172U);
    msg.setDestination(31068U);
    msg.setDestinationEntity(109U);
    msg.seq = 61226U;
    msg.value = 53U;
    msg.error.assign("BUVPCEWAGXZTHJLISJ");

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
    msg.setTimeStamp(0.5940738352302448);
    msg.setSource(25977U);
    msg.setSourceEntity(155U);
    msg.setDestination(46187U);
    msg.setDestinationEntity(100U);
    msg.seq = 44144U;
    msg.sys.assign("FMDOJCTOOMZSVICXMYWVYNJTGYKMCVJAWTUIVUDIDHZHUUHQNOLIRPVTTHXCKGPCJSBLNRUPZSGTFEESJJZMNHMKRXYCDNBXWLQPLVGGYBAARKSALSFXEYZHRQY");
    msg.value = 0.578770284928199;

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
    msg.setTimeStamp(0.9272074170778499);
    msg.setSource(5896U);
    msg.setSourceEntity(114U);
    msg.setDestination(26493U);
    msg.setDestinationEntity(13U);
    msg.seq = 40941U;
    msg.sys.assign("ZEGDSXKHLCWCZVOUDQPLEXXHNIAHLQWBAWNZHFQDPPATBXGHXQIBJSACZWPYITFKQDIYCVETQSXAQWTDJWFCPMJURUAWPAVHYVCMKOBQBTIMCTUMVGJRYTLSSTEJPNISGWGUXDXYHEZFMUKIFVAMPCHYHFNKPGBJPORRURVBSJN");
    msg.value = 0.5800357902591339;

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
    msg.setTimeStamp(0.33353564749204523);
    msg.setSource(23361U);
    msg.setSourceEntity(59U);
    msg.setDestination(53787U);
    msg.setDestinationEntity(140U);
    msg.seq = 28319U;
    msg.sys.assign("WUVXHAHQBIGEXCBOQFDFXUFYXVAACNPYLUTERYOUGMPXAYROXOLZXBZJDHTJRYABITNSTJKLXDRUFEPHCQJCKRVGHIIJWSBERQFMUAGGOLLYWIFNQHZUZLWZNDAJNRJORFKUCKEMBSMCMKXLXAYKTKDENVGEEGTGTCCYPWVZZWMRHDWLTPQSYBOQUVYMFESSSCBOLIPWPAQKWSENBHMNZZIUPIJDVGMFJDPJQINSPDFAOTHBMZVVTVLKK");
    msg.value = 0.05689496343337752;

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
    msg.setTimeStamp(0.7912601831469299);
    msg.setSource(58400U);
    msg.setSourceEntity(80U);
    msg.setDestination(9970U);
    msg.setDestinationEntity(85U);
    msg.action = 121U;
    msg.longain = 0.01543553440432599;
    msg.latgain = 0.47123226361590953;
    msg.bondthick = 4007765543U;
    msg.leadgain = 0.5977968876081583;
    msg.deconflgain = 0.691800219297189;

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
    msg.setTimeStamp(0.14104709623095812);
    msg.setSource(14280U);
    msg.setSourceEntity(161U);
    msg.setDestination(6163U);
    msg.setDestinationEntity(245U);
    msg.action = 40U;
    msg.longain = 0.2503703623523005;
    msg.latgain = 0.03853478117620279;
    msg.bondthick = 190301974U;
    msg.leadgain = 0.49565930454176366;
    msg.deconflgain = 0.4271277990649225;

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
    msg.setTimeStamp(0.31097895881253634);
    msg.setSource(20834U);
    msg.setSourceEntity(212U);
    msg.setDestination(51004U);
    msg.setDestinationEntity(140U);
    msg.action = 21U;
    msg.longain = 0.261098394766374;
    msg.latgain = 0.708797694583506;
    msg.bondthick = 668062211U;
    msg.leadgain = 0.49057833339192747;
    msg.deconflgain = 0.07885874320157327;

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
    msg.setTimeStamp(0.4957455007870668);
    msg.setSource(8033U);
    msg.setSourceEntity(167U);
    msg.setDestination(51113U);
    msg.setDestinationEntity(234U);
    msg.err_mean = 0.9918205392648949;
    msg.dist_min_abs = 0.8210272700765657;
    msg.dist_min_mean = 0.5767773549307562;

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
    msg.setTimeStamp(0.7051260687836534);
    msg.setSource(45349U);
    msg.setSourceEntity(93U);
    msg.setDestination(575U);
    msg.setDestinationEntity(52U);
    msg.err_mean = 0.006715213774055928;
    msg.dist_min_abs = 0.4892147713462587;
    msg.dist_min_mean = 0.03606987443148313;

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
    msg.setTimeStamp(0.6630516607444397);
    msg.setSource(14542U);
    msg.setSourceEntity(22U);
    msg.setDestination(35595U);
    msg.setDestinationEntity(31U);
    msg.err_mean = 0.8970948704886842;
    msg.dist_min_abs = 0.7189009099351125;
    msg.dist_min_mean = 0.5183221448738529;

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
    msg.setTimeStamp(0.5343061459620697);
    msg.setSource(3930U);
    msg.setSourceEntity(201U);
    msg.setDestination(21995U);
    msg.setDestinationEntity(231U);
    msg.uid = 152U;
    msg.frag_number = 209U;
    msg.num_frags = 84U;
    const char tmp_msg_0[] = {-33, -65, 18, 91, 100, -127, -89, 16, 36, 124, 63, -81, -119, 35, 106, -97, 55, 7, 58, -76, -117, 79, -12, -39, -113, 11, -106, -125, 20, 26, -26, 73, 0, -25, -108, 90, 63, -40, -95, -53, -8, -117, 115, 38, 26, 86, 21, 59, 119, -97, -70, 116, 91, -23, -116, -89, -30, -62, 9, 60, 82, -107, 74, -71, 103, 1, 24, -31, -60, -128, -118, 88, 61, -2, 2, -80, 10, 25, 10, 38, 15, 44, 60, 113, 115, 107, -60, -11, -104, 11, -92, -23, 94, 66, 105, -18, -38, 47, 117, -111, 53, -126, 123, -65, 82, 10, 5, -80, -66, 69, -99, 80, -82, 44, -38, 115, -101, -118, -44, 7, 84, 15, 114, -112, 91, 62, 41, 121, 28, 91, -86, 12, 42, -84, 26, 26, -107, 23, 30, 28, -86, -121, 108, -120, -79, 93, -40, 13, 123, 25, 65, -107, 112, 52, -7, 53, -60, 106, -103, 50, 100, -116, -20, -57, 121, -104, 81, -65, 106, 18, 65, -19, -43, 105, -28, 105, -33, -12, 41, 110, 79, -119, 12, -85, 96, 91, -32, 24, -95, 15, 18, 32, 32, 70, -50, -102, 6, -32, 12, -34, 111, -68, -18, 4, 33, -10, 30, -33, -73, -119, 61, 1, -94, 92, 66, -28, -25, 65, 48, 13, -123, -124, 9, 92, 19, -37, -81, -84, 30, 44, -110, 19, 90, 12, 30, -42, 71, 51};
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
    msg.setTimeStamp(0.7893788818628338);
    msg.setSource(61863U);
    msg.setSourceEntity(27U);
    msg.setDestination(53842U);
    msg.setDestinationEntity(212U);
    msg.uid = 175U;
    msg.frag_number = 132U;
    msg.num_frags = 135U;
    const char tmp_msg_0[] = {25, -109, 97, -113, 26, -107, 97, -103, 79, -6, -17, -117, 81, 53, -28, 28, 122, 57, -34, 4, 88, 54, 1, -79, -112, -104, -29, 34, -42, -68, -115, 93, -126, 108, -126, 85, 30, -38, -75, -111};
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
    msg.setTimeStamp(0.17625284933518337);
    msg.setSource(41233U);
    msg.setSourceEntity(193U);
    msg.setDestination(6912U);
    msg.setDestinationEntity(25U);
    msg.uid = 171U;
    msg.frag_number = 159U;
    msg.num_frags = 215U;
    const char tmp_msg_0[] = {5, 9, 92, -44, 25, -117, -120, 120, -12, -51, -54, 66, -64, 63, 18, -64, -80, -86, 27, -57, -45, -54, -57, -71, -103, -40, 93, -41, -105, -40, 4, 111, -6, -87, -14, 41, 20, -21, -123, 8, -33, -7, -112, -107, -96, 54, 55, 3, 10, 36, -118, 85, 93, -79, 84, -5, 59, -107, -75, -103, -27, 4, -85, 95, 118, -70, -117, -7, 70, 119, -110, -9, -29, 126, 106, -18, 66, 107, -70, -120, -37, 5, -104, 60, -110, -32, -17, -40, 12, -50, -113, -93, -24, -48, 113, -114, -127, -82, 65, 59, 28, 120, 77, -22, -10, -65, -88, 22, -82, 66, -86, -9, 31, 70, -107, 45, 101, -73, -120, -52, 34, 12, 73, -58, -18, 120, 18, -113, -25, 5, 60, -30, 69, 113, 73, -2, 40, -125, 61, -59, 49, -103, 122, 106, 14, -42, 5, 14, -22, -120, -53, 46, 3, 63, -71, 31, 40, 91, 78, 43, 52, -8, 0, 19, 55, 10, -71, -6, 92, -74, -81, -37, 11, 64, 107, -85, 95, 36, -98, 120, -68, -73, -45, 14, -108, 27, 95, -17, -53, -49, 74, 88, 4, 115, 67, -109, -24, 49, -91, 21, 11, 117, -84, -38, -13, -8};
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
    msg.setTimeStamp(0.8408759341811867);
    msg.setSource(2216U);
    msg.setSourceEntity(56U);
    msg.setDestination(34527U);
    msg.setDestinationEntity(81U);
    msg.content_type.assign("AFQLVTINOGCSTBPCOOCDUFHBHCRPSCQPZMMSYHQXFDMAQXF");
    const char tmp_msg_0[] = {-104, 21, 18, 115, 37, -111, -40, 19, -38, -52, -74, 60, 83, -96, -91, -52, -82, 82, 5, 94, 70, -110, -15, -10, -121, 51, -116, -44, 43, -12, 36, -81, 102, -93, 18, 60, 100, 1, 103, -72, 82, -21, -15, -109, -87, -120, -16, 41, 104, -40, 93, -64, -83, -20, -51, -22, 50, -24, -48, -69, -71, -83, 50, -4, -110, -36, 2, -40, -69, 111, 110, 109, 70, 125, -126, 46, 124, -86, 59, 29, -13, -123, 80, -74, 76, -36, -108, 105, 88, 52, -27, 34, 23, -119, -60, -110, -83, -63, 58, -18, 57, -121, 55, -75, -59, 63, 73, -126, -114, -86, -49, 107, 40, 56, 119, -7, -119, 85, 47, 24, 118, 22, -55, 124, -118, -13, 27, -36, 74, -1, -62, 7, -25, 93, -41, 119, -45, -35, -7, 101, -105, 111, 63, 125, 121, -96, 10, -18, -86, -53, 14, 0, 75, -11, 1, -97, 54, 93, 99, -60, 18, -59, 49, -50, -105, -68, 126, 30, 99, -101, 121, 86, -18, 37, 73, 114, 47, -97, -26, -11};
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
    msg.setTimeStamp(0.47198312297785017);
    msg.setSource(37336U);
    msg.setSourceEntity(166U);
    msg.setDestination(8460U);
    msg.setDestinationEntity(243U);
    msg.content_type.assign("OBMFYPTAXEOIEVZEAYP");
    const char tmp_msg_0[] = {54, 63, 53, 102, 35, 43, 66, -101, -89, -52, 49, -45, 34, 41, -70, 13, 92, -26, 35};
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
    msg.setTimeStamp(0.8127847816268503);
    msg.setSource(48196U);
    msg.setSourceEntity(12U);
    msg.setDestination(25031U);
    msg.setDestinationEntity(102U);
    msg.content_type.assign("EQABLERRUQCZIXRGWTVWDKOFVLMWLUHJQKTIMCHXJJTHIXBPJSDUTHONCRTEEOAPVDCYSASIMOJNKPSNPFUEBZWPZHECZLMJBDNAHKWGDRNTSJQJMWSVTXFGGRHXUTPDBCVZVVOBSLOYIMX");
    const char tmp_msg_0[] = {-99, -78, -118, -61, -95, 78, 124, 60, -122, -34, -128, -100, 123, 27, -111, 63, -25, 62, -71, 26, -59, 105, 43, -114, -38, 100, -9, -116, -35, -86, 5, -91, 39, 54, -29, 48, -120, -124, 120, 72, -126, 1, -79, -110, 66, 45, 101, -32, 30, 73, 11, 39, 19, -58, 21, -83, 70, 79, -90, -6, -53, 95, 61, -108, -102, 57, 39, 47, 88, -20, -4, -123, -32, 118, 8, 5, -96, 6, -78};
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
    msg.setTimeStamp(0.680785062987291);
    msg.setSource(56939U);
    msg.setSourceEntity(232U);
    msg.setDestination(57874U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.295545296922886);
    msg.setSource(57625U);
    msg.setSourceEntity(222U);
    msg.setDestination(46110U);
    msg.setDestinationEntity(215U);

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
    msg.setTimeStamp(0.2652344149767065);
    msg.setSource(50249U);
    msg.setSourceEntity(23U);
    msg.setDestination(62619U);
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
    msg.setTimeStamp(0.02767711581134691);
    msg.setSource(27260U);
    msg.setSourceEntity(115U);
    msg.setDestination(57403U);
    msg.setDestinationEntity(120U);
    msg.target = 10956U;
    msg.bearing = 0.8387900681120376;
    msg.elevation = 0.3275227119171805;

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
    msg.setTimeStamp(0.8489092174304925);
    msg.setSource(59933U);
    msg.setSourceEntity(102U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(77U);
    msg.target = 16269U;
    msg.bearing = 0.6517804291618042;
    msg.elevation = 0.03377243942985453;

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
    msg.setTimeStamp(0.3983974951706567);
    msg.setSource(17775U);
    msg.setSourceEntity(39U);
    msg.setDestination(60807U);
    msg.setDestinationEntity(126U);
    msg.target = 59924U;
    msg.bearing = 0.3850541435095862;
    msg.elevation = 0.7641710458534643;

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
    msg.setTimeStamp(0.6098957009260357);
    msg.setSource(64831U);
    msg.setSourceEntity(199U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(164U);
    msg.target = 51064U;
    msg.x = 0.7506350463723658;
    msg.y = 0.29718877039964553;
    msg.z = 0.8031366161351058;

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
    msg.setTimeStamp(0.49065623812816594);
    msg.setSource(38668U);
    msg.setSourceEntity(238U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(75U);
    msg.target = 48037U;
    msg.x = 0.8240350164365386;
    msg.y = 0.2377347354317303;
    msg.z = 0.3206604529353516;

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
    msg.setTimeStamp(0.48523964106354256);
    msg.setSource(3524U);
    msg.setSourceEntity(4U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(200U);
    msg.target = 21179U;
    msg.x = 0.9197276957420037;
    msg.y = 0.8075474301631292;
    msg.z = 0.0014960666429619796;

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
    msg.setTimeStamp(0.11387185612582507);
    msg.setSource(62040U);
    msg.setSourceEntity(44U);
    msg.setDestination(44703U);
    msg.setDestinationEntity(143U);
    msg.target = 20184U;
    msg.lat = 0.9199125124701755;
    msg.lon = 0.8384804961740834;
    msg.z_units = 54U;
    msg.z = 0.5503893469908796;

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
    msg.setTimeStamp(0.4832724642908015);
    msg.setSource(57032U);
    msg.setSourceEntity(98U);
    msg.setDestination(10982U);
    msg.setDestinationEntity(189U);
    msg.target = 22018U;
    msg.lat = 0.04693953059062539;
    msg.lon = 0.3127696866449825;
    msg.z_units = 131U;
    msg.z = 0.9687476104906723;

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
    msg.setTimeStamp(0.9030525251964975);
    msg.setSource(21028U);
    msg.setSourceEntity(233U);
    msg.setDestination(20520U);
    msg.setDestinationEntity(192U);
    msg.target = 23467U;
    msg.lat = 0.42874095487718367;
    msg.lon = 0.8956463239340664;
    msg.z_units = 91U;
    msg.z = 0.7990885657931185;

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
