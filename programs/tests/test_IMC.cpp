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
// IMC XML MD5: bf33f0824f5dd93373a54696629f9d88                            *
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
    msg.setTimeStamp(0.239045927568);
    msg.setSource(730U);
    msg.setSourceEntity(248U);
    msg.setDestination(6835U);
    msg.setDestinationEntity(71U);
    msg.state = 116U;
    msg.flags = 26U;
    msg.description.assign("WJHUEKNOVCQYXZVHBXUTCPYGLNLAJEFSXVPXCKIOGYOUZZAARCZQOMLCR");

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
    msg.setTimeStamp(0.673437247756);
    msg.setSource(59621U);
    msg.setSourceEntity(71U);
    msg.setDestination(20408U);
    msg.setDestinationEntity(221U);
    msg.state = 183U;
    msg.flags = 229U;
    msg.description.assign("YMJWRWHLRTIZKWPXRJIYPEQHCOJNGGEKBALZFRBPBAFZOKCIJTGNISSXHUYUMHHAQTICETOFWGUCSWSLFBJVITVPTIXFVMRHBGDFVUNRJQCAPYLQSHDXELGXBCJNSKVETIMDMUSZIGOEVMDKCPXNHCZQMXJODHVGNALLBMBONOZCPJYPWXAUQAZTVZFTZWAVRYOLNBIEXOYUGA");

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
    msg.setTimeStamp(0.635808106691);
    msg.setSource(36724U);
    msg.setSourceEntity(77U);
    msg.setDestination(33756U);
    msg.setDestinationEntity(183U);
    msg.state = 220U;
    msg.flags = 232U;
    msg.description.assign("LOXQEIJRZBKHLJTOTDIIQMQJSHJULYPMJKRNVTKGLTRNDVOMFEHTHFOFFHWNOSCUCFNUVVXHYXFRADYGNRCNKGVKYGCIYKMQRGUSODXIIWQBWDHI");

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
    msg.setTimeStamp(0.28277543999);
    msg.setSource(42964U);
    msg.setSourceEntity(154U);
    msg.setDestination(59631U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.564238661841);
    msg.setSource(9999U);
    msg.setSourceEntity(83U);
    msg.setDestination(52035U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.282089488349);
    msg.setSource(35865U);
    msg.setSourceEntity(41U);
    msg.setDestination(10121U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.42231927481);
    msg.setSource(62220U);
    msg.setSourceEntity(200U);
    msg.setDestination(44519U);
    msg.setDestinationEntity(132U);
    msg.id = 179U;
    msg.label.assign("VEDNBTCVAPNXDMSDGWPOCUULBCYJOCBIZWTYTABPYOGQWYLWWUUVXQXCFQHXTJAEPEZLSCFZDWACQKZODPJENGSUUQHIDFRPBEFVDEFMSNMCITYWRIKHJVHUQOSCKFHBTESLYURKHPNRKYVMJKZMOQAHLIIUMTRRVXY");
    msg.component.assign("QHVRIBHAFIEBTUDJQXFHACNPWDBBACSMOIKGJWWTMMVPZMNZRNYTASYLFYNGQGSOTFXBUCOWRUDFSZAWLFYVHZGKEQTQXJPKVUPTXRLYKKLDUHENIKJNCFBYNACIMYECKEOZDEWFHQOGJANSXLZSYLWQHRZTOMEVGLBIXTUBVCKCOUGNRDPXLQVDRPRMWHWZZDHJHXGYCIEIWDRKSPGOJXAAIVASOJXPKPUSQTJT");
    msg.act_time = 2694U;
    msg.deact_time = 25605U;

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
    msg.setTimeStamp(0.086295806259);
    msg.setSource(30986U);
    msg.setSourceEntity(166U);
    msg.setDestination(62995U);
    msg.setDestinationEntity(0U);
    msg.id = 23U;
    msg.label.assign("DBQRFUFLEOSNKYPBNIVQRSPRAIXLQJRPYEITBRWMDZIOTCHSAYCZYWHDPGOEZHDVBBQCXXTYHQGONEMJFITNKKWLHWSTSRZGXBMPXKXMGIEFQWEVGEMECPRBNFTDOTNQFZWHKUUYWVFGCJPYCATCIMMXHRZSCDPRVDONJHPLZOKDZVZIHLYINAZFJWCMXLFYTJKVPBQCELAMNOGSGKJMJVAOVJNAGFLTULGULOEIUVYQBQUAWKDURS");
    msg.component.assign("NAGVOBDPTMAUO");
    msg.act_time = 46461U;
    msg.deact_time = 59922U;

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
    msg.setTimeStamp(0.504916746463);
    msg.setSource(12142U);
    msg.setSourceEntity(205U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(34U);
    msg.id = 230U;
    msg.label.assign("PZUWLOHUHQFTPDEBDNCQYGHQYBWZMIXLLVRZBYTOEOUTWQZLFDFWPVMRWALPQFXXURCFKUJHQDGGGMANMCJIACKQHKGBNZDGOVJIXMICQCESYNIEHZJXHDKDWDLCLYIHVTETJOACSKRWZNAPSSBAMVNFKUYFOGSAMLRPXV");
    msg.component.assign("FXQXKNEUFVKRBXA");
    msg.act_time = 51325U;
    msg.deact_time = 48298U;

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
    msg.setTimeStamp(0.586471391051);
    msg.setSource(1010U);
    msg.setSourceEntity(234U);
    msg.setDestination(35113U);
    msg.setDestinationEntity(239U);
    msg.id = 136U;

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
    msg.setTimeStamp(0.312430469495);
    msg.setSource(2697U);
    msg.setSourceEntity(226U);
    msg.setDestination(4710U);
    msg.setDestinationEntity(178U);
    msg.id = 131U;

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
    msg.setTimeStamp(0.134935449691);
    msg.setSource(31907U);
    msg.setSourceEntity(147U);
    msg.setDestination(39163U);
    msg.setDestinationEntity(36U);
    msg.id = 81U;

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
    msg.setTimeStamp(0.619180657358);
    msg.setSource(23614U);
    msg.setSourceEntity(153U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(113U);
    msg.op = 144U;
    msg.list.assign("SDKFECIAFFTJXTXWEVDSKGUDZSXECAPAIRDZRBZGPLILLYPSSCNOVHZYPUGJUPJBVTOAKADQDSAYTVMIVSMUQNEWCDTHOAWZJUURCHGRNZWBPHJXIEWAPIWMLHVJEQLGRHMCCBRXXIKMYITDVNUWBVXYJXSIKRNNOZKWE");

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
    msg.setTimeStamp(0.766761688453);
    msg.setSource(8620U);
    msg.setSourceEntity(162U);
    msg.setDestination(55599U);
    msg.setDestinationEntity(51U);
    msg.op = 8U;
    msg.list.assign("FGAIOSVFBHTUBLXZBYFUZYDQXTUYCSUFHRXWKSKAITZOTSHSSUHGWYLHJYYLWILWOJULWFCSKORVVKUKZCBWBTGPFYNKHDJIEBBMQJNGGEPPMMDSSFOGEHEXCNJVWMXAFLGPBDMGTLJPQCPEORCRZRINYVAIDDDCMPQYZOVXFUOJQRZKAWPTWNLMIATEVAFHYNTCSJCHWVUEKETDQJCONNXZGADEKEQAPBLURVMBQJVNRAIZPGQQOXRI");

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
    msg.setTimeStamp(0.856936936787);
    msg.setSource(49212U);
    msg.setSourceEntity(66U);
    msg.setDestination(21508U);
    msg.setDestinationEntity(58U);
    msg.op = 249U;
    msg.list.assign("EMPTMYPPIUYKEXMGIHKHZNNSFAJUZWUYFQRVIEQUVMQVBLAUWEHMNBXACU");

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
    msg.setTimeStamp(0.314146366149);
    msg.setSource(50742U);
    msg.setSourceEntity(218U);
    msg.setDestination(39267U);
    msg.setDestinationEntity(24U);
    msg.value = 150U;

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
    msg.setTimeStamp(0.891867392267);
    msg.setSource(40593U);
    msg.setSourceEntity(2U);
    msg.setDestination(23387U);
    msg.setDestinationEntity(23U);
    msg.value = 15U;

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
    msg.setTimeStamp(0.0190170364116);
    msg.setSource(44642U);
    msg.setSourceEntity(24U);
    msg.setDestination(44740U);
    msg.setDestinationEntity(8U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.515692241371);
    msg.setSource(40145U);
    msg.setSourceEntity(110U);
    msg.setDestination(51619U);
    msg.setDestinationEntity(54U);
    msg.consumer.assign("LIBNINGRRWMCEUXGJASVVNKMOQBNEVZXLFGKJITUCZYME");
    msg.message_id = 37950U;

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
    msg.setTimeStamp(0.633752685316);
    msg.setSource(54340U);
    msg.setSourceEntity(82U);
    msg.setDestination(7727U);
    msg.setDestinationEntity(131U);
    msg.consumer.assign("ARNLEGVYMJVVLOXKJQQCNLFTYMCQFYKNWHIFKXWBHMAYENTMLCFVCJPZIBJBHIBWFGRQZMVDZJPUPBMUULYTGQWQITTOOUGOE");
    msg.message_id = 63445U;

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
    msg.setTimeStamp(0.753775209144);
    msg.setSource(33024U);
    msg.setSourceEntity(113U);
    msg.setDestination(10831U);
    msg.setDestinationEntity(230U);
    msg.consumer.assign("DAZKHSMCJFOXBUAFCUQGKG");
    msg.message_id = 2011U;

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
    msg.setTimeStamp(0.359988113566);
    msg.setSource(23045U);
    msg.setSourceEntity(71U);
    msg.setDestination(41004U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.150827211463);
    msg.setSource(40292U);
    msg.setSourceEntity(145U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.0693178794806);
    msg.setSource(40405U);
    msg.setSourceEntity(169U);
    msg.setDestination(3795U);
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
    msg.setTimeStamp(0.872138376377);
    msg.setSource(64377U);
    msg.setSourceEntity(253U);
    msg.setDestination(26061U);
    msg.setDestinationEntity(199U);
    msg.op = 206U;

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
    msg.setTimeStamp(0.191737650479);
    msg.setSource(2948U);
    msg.setSourceEntity(207U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(98U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.0572829196346);
    msg.setSource(32542U);
    msg.setSourceEntity(64U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(204U);
    msg.op = 139U;

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
    msg.setTimeStamp(0.0276557842207);
    msg.setSource(17358U);
    msg.setSourceEntity(108U);
    msg.setDestination(39791U);
    msg.setDestinationEntity(194U);
    msg.total_steps = 167U;
    msg.step_number = 203U;
    msg.step.assign("WKBENDFQJAXXWJNXJXYWZNEJMZRZRYORCHLVFZAPLM");
    msg.flags = 78U;

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
    msg.setTimeStamp(0.0444504296669);
    msg.setSource(8538U);
    msg.setSourceEntity(90U);
    msg.setDestination(50367U);
    msg.setDestinationEntity(211U);
    msg.total_steps = 149U;
    msg.step_number = 97U;
    msg.step.assign("IYLHADQBFBADPKSSZJ");
    msg.flags = 158U;

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
    msg.setTimeStamp(0.353259148904);
    msg.setSource(61190U);
    msg.setSourceEntity(10U);
    msg.setDestination(16749U);
    msg.setDestinationEntity(120U);
    msg.total_steps = 78U;
    msg.step_number = 102U;
    msg.step.assign("IXTYHQGMSJJSKXCYHUYEUTVCAMNEFMNLETXTLOOHPJWYBRGHALLSKHFUDCIUZQAFPLRFRSVWRQGKMWJSIEZDOEQAQPRKCKQGIOYTBJPHDTBCGZWTOEHIEMPGAVECVDLXVBVZVQLNJFGMJNBPXCWXVPUHIWWOWKRRZPRXUYXCIBFWDABFABZCKFTGWZNKPUAGQSALDID");
    msg.flags = 179U;

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
    msg.setTimeStamp(0.46139656406);
    msg.setSource(50096U);
    msg.setSourceEntity(1U);
    msg.setDestination(55142U);
    msg.setDestinationEntity(86U);
    msg.state = 242U;
    msg.error.assign("EECANIZFFWJZGCWDALXVHNTXDIEHHZBBMRKJEKJMPQVFOYRUO");

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
    msg.setTimeStamp(0.557725552367);
    msg.setSource(28298U);
    msg.setSourceEntity(195U);
    msg.setDestination(50070U);
    msg.setDestinationEntity(85U);
    msg.state = 174U;
    msg.error.assign("BODHDUSIXSPMDSAJKHTIBISKUTXXYDNTORZAZMGSWCBMZANDVLEVILXRJJBJBTWGYYPRWWFMMAMBEISAZEZCDZXFLPPIRJXSUCWFBBKUWYKFEQTEOTKWKJDHVLDASWDNYCVXAQKNXUGHTF");

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
    msg.setTimeStamp(0.307369238479);
    msg.setSource(57632U);
    msg.setSourceEntity(176U);
    msg.setDestination(10085U);
    msg.setDestinationEntity(225U);
    msg.state = 183U;
    msg.error.assign("VPAUTHFYVGTYNOXESAFWQJMKCNVZGDOERJGJMLTIPIYHMRJSDSYAPSLDITPZRXOEDPLTWSHOUZPTYNJADHDGRHRDVFSQPOUAMVGKZOUYQNMUNWKLBEHNBEKZX");

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
    msg.setTimeStamp(0.830750568671);
    msg.setSource(64441U);
    msg.setSourceEntity(45U);
    msg.setDestination(61599U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.257204260103);
    msg.setSource(46798U);
    msg.setSourceEntity(27U);
    msg.setDestination(60278U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.533572477684);
    msg.setSource(63746U);
    msg.setSourceEntity(236U);
    msg.setDestination(2837U);
    msg.setDestinationEntity(211U);

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
    msg.setTimeStamp(0.941870834002);
    msg.setSource(34363U);
    msg.setSourceEntity(117U);
    msg.setDestination(52532U);
    msg.setDestinationEntity(127U);
    msg.op = 29U;
    msg.speed_min = 0.482619797224;
    msg.speed_max = 0.970682725219;
    msg.long_accel = 0.746630467933;
    msg.alt_max_msl = 0.0438472684841;
    msg.dive_fraction_max = 0.519469098848;
    msg.climb_fraction_max = 0.307371914683;
    msg.bank_max = 0.350022875511;
    msg.p_max = 0.834401827584;
    msg.pitch_min = 0.275376375134;
    msg.pitch_max = 0.965478447813;
    msg.q_max = 0.474780651421;
    msg.g_min = 0.23461769894;
    msg.g_max = 0.022190481802;
    msg.g_lat_max = 0.294447729898;
    msg.rpm_min = 0.137342461441;
    msg.rpm_max = 0.637918543135;
    msg.rpm_rate_max = 0.108867263527;

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
    msg.setTimeStamp(0.415442474555);
    msg.setSource(30597U);
    msg.setSourceEntity(117U);
    msg.setDestination(51203U);
    msg.setDestinationEntity(166U);
    msg.op = 48U;
    msg.speed_min = 0.290809302237;
    msg.speed_max = 0.482018256602;
    msg.long_accel = 0.596631525355;
    msg.alt_max_msl = 0.101938920631;
    msg.dive_fraction_max = 0.991173415786;
    msg.climb_fraction_max = 0.562133216233;
    msg.bank_max = 0.833100092804;
    msg.p_max = 0.504229088731;
    msg.pitch_min = 0.525317027706;
    msg.pitch_max = 0.322219141578;
    msg.q_max = 0.89697351585;
    msg.g_min = 0.802216667468;
    msg.g_max = 0.0877349020387;
    msg.g_lat_max = 0.556260907841;
    msg.rpm_min = 0.080168790797;
    msg.rpm_max = 0.72832806153;
    msg.rpm_rate_max = 0.102208311618;

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
    msg.setTimeStamp(0.428555159107);
    msg.setSource(23779U);
    msg.setSourceEntity(120U);
    msg.setDestination(45326U);
    msg.setDestinationEntity(238U);
    msg.op = 38U;
    msg.speed_min = 0.0160962956605;
    msg.speed_max = 0.207751651465;
    msg.long_accel = 0.867520442867;
    msg.alt_max_msl = 0.148013770789;
    msg.dive_fraction_max = 0.854560259998;
    msg.climb_fraction_max = 0.395571646198;
    msg.bank_max = 0.179529765881;
    msg.p_max = 0.609546626194;
    msg.pitch_min = 0.729942873205;
    msg.pitch_max = 0.137890683952;
    msg.q_max = 0.0020519009712;
    msg.g_min = 0.806538102713;
    msg.g_max = 0.466513810397;
    msg.g_lat_max = 0.0234907490242;
    msg.rpm_min = 0.308372378191;
    msg.rpm_max = 0.447310432888;
    msg.rpm_rate_max = 0.555882234008;

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
    msg.setTimeStamp(0.143075984283);
    msg.setSource(15294U);
    msg.setSourceEntity(102U);
    msg.setDestination(5498U);
    msg.setDestinationEntity(114U);
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("PHYBLOBFXMJOKSNOXPNYVKKTEKFUJQEGZVZUEJVYKMTBSYRRCHEGFQVHSLZEOPDDZRLVQQP");
    tmp_msg_0.dest_man.assign("VCGVPVBOLLSFQVEYJDGOOPSIHWZLBDIDOPFFXEKVTOJYAKLBUGVCOYXRLTFBIUNMXZYWHMCQNHYECXKDPRGTQCQEOVKTUGFWLFXPAICHZ");
    tmp_msg_0.conditions.assign("RZGUXWLBRXKHZJZLZTPAJBORPWYVJQGXQJHQDWZVGJFIFPCXPHCYBZMTFFDBIVDLJCXGHWCNEIRYKMSCMMTQIHAEDCSVUBCODTPWPCNCKGZVDLFPRMJTUQERRFGHINKZHLISHJESPWSYEBVMUBYAPDTMKZAQYUYFWFJEQKYVGIEVWISNEYGXUORBXCWUMDOBNUS");
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
    msg.setTimeStamp(0.50178609168);
    msg.setSource(28997U);
    msg.setSourceEntity(236U);
    msg.setDestination(22850U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.537116996448);
    msg.setSource(62956U);
    msg.setSourceEntity(94U);
    msg.setDestination(43058U);
    msg.setDestinationEntity(130U);
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("BRDFPFZBWLQLSRTVIUPMHQKYTKBYGWNOIJGVHUSTYRNAUFUWGVJXKJCTUNWXINSVGGOFFYNNCPTIWSOEWWUOCCBANXCSYJJIOATHHPQIWALEDSPGEQHFVTVOPKMQCCXTKDDZURBPAYMKHJJFQQXRQPVCLKKHET");
    IMC::MapFeature tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("GPBWGZJQUWXZJGRBXRWJQDYVICEVAN");
    tmp_tmp_msg_0_0.feature_type = 93U;
    tmp_tmp_msg_0_0.rgb_red = 213U;
    tmp_tmp_msg_0_0.rgb_green = 75U;
    tmp_tmp_msg_0_0.rgb_blue = 15U;
    IMC::MapPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.20001618016;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.614110200406;
    tmp_tmp_tmp_msg_0_0_0.alt = 0.116229102464;
    tmp_tmp_msg_0_0.feature.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.features.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.468543501715);
    msg.setSource(29491U);
    msg.setSourceEntity(37U);
    msg.setDestination(50599U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.708522937823;
    msg.lon = 0.287689089231;
    msg.height = 0.819103996397;
    msg.x = 0.821149272117;
    msg.y = 0.868542565427;
    msg.z = 0.877798926737;
    msg.phi = 0.484028474307;
    msg.theta = 0.145467240923;
    msg.psi = 0.194915155257;
    msg.u = 0.20237706952;
    msg.v = 0.621189994486;
    msg.w = 0.54586803266;
    msg.p = 0.400920784712;
    msg.q = 0.20023839426;
    msg.r = 0.821034313395;
    msg.svx = 0.164892478988;
    msg.svy = 0.151119456468;
    msg.svz = 0.968224053508;

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
    msg.setTimeStamp(0.314700443986);
    msg.setSource(10117U);
    msg.setSourceEntity(191U);
    msg.setDestination(44236U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.386490887245;
    msg.lon = 0.601901009687;
    msg.height = 0.133613194958;
    msg.x = 0.552188595064;
    msg.y = 0.980112761779;
    msg.z = 0.624975870764;
    msg.phi = 0.92895135195;
    msg.theta = 0.774989929942;
    msg.psi = 0.246031840766;
    msg.u = 0.648172697741;
    msg.v = 0.71010183891;
    msg.w = 0.584536146577;
    msg.p = 0.942372324878;
    msg.q = 0.266124477361;
    msg.r = 0.389431798318;
    msg.svx = 0.657527267943;
    msg.svy = 0.36079074225;
    msg.svz = 0.169429541045;

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
    msg.setTimeStamp(0.0296162499034);
    msg.setSource(47145U);
    msg.setSourceEntity(184U);
    msg.setDestination(17485U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.706284126147;
    msg.lon = 0.708967284964;
    msg.height = 0.890906997682;
    msg.x = 0.737188064876;
    msg.y = 0.508665609957;
    msg.z = 0.137587781546;
    msg.phi = 0.0167754731622;
    msg.theta = 0.943649674718;
    msg.psi = 0.241937804461;
    msg.u = 0.472146517191;
    msg.v = 0.0432372233212;
    msg.w = 0.322605801192;
    msg.p = 0.539791878541;
    msg.q = 0.813355974817;
    msg.r = 0.811846146123;
    msg.svx = 0.350115620238;
    msg.svy = 0.150614021608;
    msg.svz = 0.76150179376;

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
    msg.setTimeStamp(0.87677127518);
    msg.setSource(59804U);
    msg.setSourceEntity(243U);
    msg.setDestination(23637U);
    msg.setDestinationEntity(12U);
    msg.op = 144U;
    msg.entities.assign("SUEWTNEWTUMVBDOQAHTDRLCCNOUOHZANPFVDHCTBNWEHSXRWPVWLXSHDRHMENOHXEDKASMDFYZJIZMKQIHPEGXVICBQLUXYNELUDRUNYDAPAMJMWOJMBQARMJKSQETJSOATJJOONLRAQYZFBOKBXHJPRFZYLKLSUPZDLGVFMZBKWAFGVNYPLGFGVGQCGSXVSIYRBFCXBTPWFCTGWJQKPUFEOIXPWAXIHYIRKQCGCUIIYVGDJTVSZMBR");

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
    msg.setTimeStamp(0.87104214755);
    msg.setSource(17028U);
    msg.setSourceEntity(117U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(218U);
    msg.op = 233U;
    msg.entities.assign("PDQZRKTQSGSNBRZWKXNCGFIKDBKMJOMBSFDURGTXYYZGQAYDNQAHJTLKOTAOANEKDAIEKBVWZUWVDUMZDHHUEEJRAUNMQCPRVJ");

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
    msg.setTimeStamp(0.935147568624);
    msg.setSource(42974U);
    msg.setSourceEntity(0U);
    msg.setDestination(16571U);
    msg.setDestinationEntity(133U);
    msg.op = 212U;
    msg.entities.assign("LEDGHLEZCOMLMSDFVTPBXXHHZCYHMDQQWCJTEDRENVXZWVPWJYDVQBRJKNPZXPAGGGQOOXLIHFZCSLVWXWALGSFVNAGMBTCDIKUBPRIPESGUJBATUFXWAPRDKXCCGEOINKEZZTTTBIJTOQAFRWNMULYOKYIRYPCEFVXHIOJHRNTNZYHQBEAURJUIHYSAGHLKNLQISONSQKZSCSFYAVYKUMDFMBOBVLAQ");

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
    msg.setTimeStamp(0.662062579222);
    msg.setSource(62766U);
    msg.setSourceEntity(6U);
    msg.setDestination(11086U);
    msg.setDestinationEntity(206U);
    msg.type = 173U;
    msg.speed = 18007U;
    const char tmp_msg_0[] = {-91, -36, -50, -50, -50, 27, 109, 7, -90, 14, 121, 73, 58, -100, -74, -106, -75, -14, -60, -69, 8, -36, 12, -25, 43, 13, 6, -83, 67, 85, -37, 61, 105, -15, 24, -16, -50, -47, 99, 123, 3, -81, -97, -109, 119, -72, 73, 62};
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
    msg.setTimeStamp(0.625674376253);
    msg.setSource(47461U);
    msg.setSourceEntity(134U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(61U);
    msg.type = 238U;
    msg.speed = 64754U;
    const char tmp_msg_0[] = {-110, -116, -62, -88, -92, -12, -126, -89, 81, 38, -80, 46, -96, -124, -117, -97, 103, 15, -62, -62, -115, -12, 83, -37, -101, -19, 58, 126, 35, -57, 3, 113, -120, -101, 87, -4, 119, 12, 79, -72, 12, 118, -32, 39, -91, 105, 109, 78, -73, -9, -77, 8, -77, 59, 117, -13, 119, 37, -77, 41, 24, -64, -6, 82, 94, 107, 104, -69, -58, -50, 126, 23, 80, 98, -111, -13, 38, -18, -106, 98, -107, -61, 69, 93, 94, -60, -70, 13, 29, -30, -115, 112, 67, 76, -10, 76, -16, 32, 98, -62, -78, -92, -84, 24, 119, 30, 58, -101, -4, -27, -69};
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
    msg.setTimeStamp(0.975899516849);
    msg.setSource(16607U);
    msg.setSourceEntity(135U);
    msg.setDestination(9452U);
    msg.setDestinationEntity(202U);
    msg.type = 4U;
    msg.speed = 52352U;
    const char tmp_msg_0[] = {6, -38, 66, -68, 97, 88, -67, -56, -87, -89, -18, 65, -47, -41, 90, -122, -64, -50, -3, 13, -30, -83, -34, 78, 49, 7, -8, 22, -2, 47, -30, -100, 31, 89, 104, -53};
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
    msg.setTimeStamp(0.137044554926);
    msg.setSource(25298U);
    msg.setSourceEntity(67U);
    msg.setDestination(18356U);
    msg.setDestinationEntity(65U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.157448857096;
    msg.bank2p_pgain = 0.900342158698;

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
    msg.setTimeStamp(0.729702612832);
    msg.setSource(49562U);
    msg.setSourceEntity(171U);
    msg.setDestination(30866U);
    msg.setDestinationEntity(208U);
    msg.op = 162U;
    msg.tas2acc_pgain = 0.389452325436;
    msg.bank2p_pgain = 0.684925975666;

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
    msg.setTimeStamp(0.472046218003);
    msg.setSource(22950U);
    msg.setSourceEntity(200U);
    msg.setDestination(35782U);
    msg.setDestinationEntity(144U);
    msg.op = 244U;
    msg.tas2acc_pgain = 0.525722054979;
    msg.bank2p_pgain = 0.283093128874;

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
    msg.setTimeStamp(0.697533473558);
    msg.setSource(31099U);
    msg.setSourceEntity(67U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(58U);
    msg.available = 2455362620U;
    msg.value = 224U;

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
    msg.setTimeStamp(0.793807126605);
    msg.setSource(56569U);
    msg.setSourceEntity(205U);
    msg.setDestination(32458U);
    msg.setDestinationEntity(82U);
    msg.available = 1237852973U;
    msg.value = 100U;

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
    msg.setTimeStamp(0.680615081211);
    msg.setSource(52629U);
    msg.setSourceEntity(209U);
    msg.setDestination(355U);
    msg.setDestinationEntity(229U);
    msg.available = 4029642760U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.942515551987);
    msg.setSource(44901U);
    msg.setSourceEntity(36U);
    msg.setDestination(27493U);
    msg.setDestinationEntity(207U);
    msg.op = 195U;
    msg.snapshot.assign("XXHYSBVBIPHUNFKVTSHZABDZRBUVATKSPEMDXVKQPAGPPB");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 41U;
    tmp_msg_0.system.assign("YTMJNFTKWKNBQEQKLCARRLUDSPXKZVEYOZRXUYPVWTUSIPSJGVQLODDBNMADRKSALHSIHXEDLFLPVYAQTCWJTHJAVKOHNLGQTIPPFIDNXZWNTQEIOHUYQZPXUWZJBBICXFDUOHZSDFPVG");
    tmp_msg_0.range = 0.164032316883;
    IMC::SmsTx tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 1485697450U;
    tmp_tmp_msg_0_0.destination.assign("ZSKQWITDTFSFJBMSBEGJOIUCQCPTUANIRTMRFMXOYIDQILGWFDDUZOTNDZYQXKCJZPBBOCVVDWQFWWEGDZGJCSQLKUXHBJYZMVDLUXHMKIGPTGCVVRRXTEYAQYKHJHDOFZRJZURCAHATNZAVOHWENWPXPBNNTSGQRAJLBRLOPEKUBPAIPYROKEXPBGVUXJOVWNQHDACIKFLSELAFWOYEULISCCXKVNAMHGMMHVFGPEJSWYLNNXKZQSYHUT");
    tmp_tmp_msg_0_0.timeout = 41616U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {83, 30, -100, -43, 110, -61, -115, -102, -97, 89, -88, 99, 89, -5, -87, 20, 117, -87, -120, -14, -34, -116, 77, 12, -60, 89, 24, -12, -96, 45, 11, 4, -66, 115, 82};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.897712169766);
    msg.setSource(29637U);
    msg.setSourceEntity(88U);
    msg.setDestination(36222U);
    msg.setDestinationEntity(214U);
    msg.op = 80U;
    msg.snapshot.assign("TWTTFHRRZKDHLOJYGUXRXHSWCYNDCJKRGWGDUMJOBNYCUKQNASPLUSLPDFMRZZEELWZFDRODRPHEJAMKFABWMPVVXSVDUXKQHXHXUNLKPQN");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 60603U;
    tmp_msg_0.flags = 33U;
    tmp_msg_0.lat = 0.0274110543083;
    tmp_msg_0.lon = 0.699731450189;
    tmp_msg_0.start_z = 0.447475776737;
    tmp_msg_0.start_z_units = 57U;
    tmp_msg_0.end_z = 0.667796274273;
    tmp_msg_0.end_z_units = 46U;
    tmp_msg_0.radius = 0.26384288609;
    tmp_msg_0.speed = 0.534363947539;
    tmp_msg_0.speed_units = 80U;
    tmp_msg_0.custom.assign("TMCYMUXUPOGSDMKOIEYMFVBUJRTRTGFKGWNFCLYPQFSEQCECYZARNGUODTXGCPINIXUTKRNCXPDIFKQVMKPYIHQ");
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
    msg.setTimeStamp(0.74448982032);
    msg.setSource(62333U);
    msg.setSourceEntity(19U);
    msg.setDestination(17396U);
    msg.setDestinationEntity(179U);
    msg.op = 117U;
    msg.snapshot.assign("YESGPIWMQBYVSYGRPASELYBRTSZPIVYRGKLWOSWUKYUCDWJZDLFRDUKOCDKNUNCXVEORYJKGJZWVGCUQNVIIDBNHYOXHBBJQJKDCXWXXUQC");
    IMC::EntityMonitoringState tmp_msg_0;
    tmp_msg_0.mcount = 246U;
    tmp_msg_0.mnames.assign("IFNQDQLBNWCAFFWBGJZCOVJJJYLJTTKDPKSZXUHVBALJUDEAPFXOQPYOAYYQVNHEJAWLRXURKQOUJEPVMDSSBEKEKCUZNOIOQHRWHHFIWRETEDIBAXTWYHHMYCIDUIXSWAGYPXWVACKSRGNYINSVSCCTSHTTGN");
    tmp_msg_0.ecount = 196U;
    tmp_msg_0.enames.assign("IPUOQDQNOIZZQWHTNSJFKOBTNQFACPYOFWTNLTZGGIWZZXBGPWYYYQPKXBEWSQPMUYESCJVMIREXTGLOOPIULYDAHZZDVEVZUVHMGUKUNGPUDICZCSYRETLHXJOAMULRDEFMZQAIROKTGSCXFJHAMKWBIAEWKXURHHLDBQTRSNKLAVRSCQKVUJJCLYYYVDDCMMETICPNOSHGAPFBAGRRHBSDBKPMEVJXCNFKBVAXBIFHWOL");
    tmp_msg_0.ccount = 21U;
    tmp_msg_0.cnames.assign("PITPWSZOHWXBNUMRLJUDVAINHZYUBXCYRFMEEXVFRTMQBCYOYKHEOWNTJBPKCBYUVQGBBFNXUZXZLYYKMPSLKQTVXBGQAWHGRAFXFLQRQZL");
    tmp_msg_0.last_error.assign("VCGZHMWHXYNBIISSMJHKTKYRHQKDMBYIVCNPKZOTZGLDXFGLLABBYXPGWAYHDJAQTBPUSCSUWLJSQWBPMOFJJLMWJZLHCXZCTFMWRPUCVOSAJLEMXPWUDQVABHXRJENTERUGK");
    tmp_msg_0.last_error_time = 0.713910272529;
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
    msg.setTimeStamp(0.160579174033);
    msg.setSource(21589U);
    msg.setSourceEntity(121U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(23U);
    msg.op = 103U;
    msg.name.assign("INTBADKWRJLFNCCUWMSJRBQARCHCRXDKIYNXOHTOCYKQJPCIZWQVDJZSYQGXOLXNNCKKPFYEWADMDQUCSMNBMPPGLXJHGTZSJUZOSLVVOHWDEBZEFTBKVAKUYHPTWHYAXEFTBHQUYOIVUEFMHEWJCGRRVREYPSXKBLNDMTLHIFLOOBIABSZJWGIBFJSIVPEPTFAIMMUURSGDXJEDQVNZFKQRYVPDZLANOLMMACKRGOTSAZUQVWQXWLGENXUTY");

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
    msg.setTimeStamp(0.539232789997);
    msg.setSource(16052U);
    msg.setSourceEntity(212U);
    msg.setDestination(1556U);
    msg.setDestinationEntity(248U);
    msg.op = 210U;
    msg.name.assign("DOTWABNQBZKVQJGHXJTISQGDZQLERLIUEJLEDSGMDKMMUQSSROUFICUHHNPTVXKNPUFRDUHETJVJVMLGYQSYPIH");

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
    msg.setTimeStamp(0.433391403431);
    msg.setSource(12966U);
    msg.setSourceEntity(29U);
    msg.setDestination(18048U);
    msg.setDestinationEntity(83U);
    msg.op = 83U;
    msg.name.assign("WPLBDACUYNNKJUPLXZBPDYLWVEBZUIEOEKIQXHYLHEOLSWULARKSSRRLWCMDCXEYBODKZQGTIOASMKQRTKDVUSCZPHFDXRBQBYXRFNRJAWHOKBXQTRJQWYGJAMAVHXIYCMTPXGCGTKBEEOVGBLHMUQGBRVGFODIFHLSIPPZNGLEWOXSGFVDOEMNY");

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
    msg.setTimeStamp(0.928400426038);
    msg.setSource(2106U);
    msg.setSourceEntity(253U);
    msg.setDestination(40194U);
    msg.setDestinationEntity(134U);
    msg.type = 48U;
    msg.htime = 0.0155256722466;
    msg.context.assign("IYFXWQBQNASPKDDHYAPMAHULEONPQQWTLUGEYHKHBRZDZHMIPBKFRWOALVGJTPQDDXESJMXJMHTWAEB");
    msg.text.assign("MLUKHBKLISBEQSFQQMDZUJSCQOGEJLVRUXEKIRNDAUPFTBSQOIKVRNBPBPMBZYCPLEUFORTMTXDAX");

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
    msg.setTimeStamp(0.10722926143);
    msg.setSource(60529U);
    msg.setSourceEntity(10U);
    msg.setDestination(45011U);
    msg.setDestinationEntity(94U);
    msg.type = 127U;
    msg.htime = 0.331674200217;
    msg.context.assign("PWVSGQBKGDDQSYWILWNIFJMCTPVOIPRTEIJCIJVJDENFQKMPGCCLXZEBZIBCEOXWHWYIFNXVSFCADCRXVRFGHKMSKJYEAHNSOAMSZNGKOZLGYDBCBXDMBT");
    msg.text.assign("OYNILXUTBZULSNLXRYDHCASZEGOYVIZILQTTJCHOOVVNSXTAMEMUBPADGZKTUMDURPGNOFLHKHJPYHYUFRWZZSRRENNLGWXFCCRDIAYFJFZQAHUBKTCRBXBSPBAFFWLYMGAWKWUIVMHNFABLIIFJQVXSMPFPDQVTDCIEYEGAOJMDTKGVZVXHWWKHPKDQMLVXGQBRQPPWQOCLORANEJGJE");

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
    msg.setTimeStamp(0.675584212548);
    msg.setSource(19081U);
    msg.setSourceEntity(223U);
    msg.setDestination(25865U);
    msg.setDestinationEntity(208U);
    msg.type = 210U;
    msg.htime = 0.316558660678;
    msg.context.assign("RINEBJDXZCVGOOWSJNYRAIYHTHRQNWELYKBFKVTVJCJPQFMSQUQXIKHNJXUYIOKTKTGMOREGDBBAMDBFSTOSMGKGWHHDYQSADGUERHZFZPEPCEAVIZXRALVUWZ");
    msg.text.assign("IYMSJHPYJNPVUJPQUHBZKTVXKETSXLVWARONYXCMKQSBTUUJIDHGMOIIFHS");

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
    msg.setTimeStamp(0.103353613596);
    msg.setSource(25276U);
    msg.setSourceEntity(107U);
    msg.setDestination(3949U);
    msg.setDestinationEntity(133U);
    msg.command = 198U;
    msg.htime = 0.953448722442;

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
    msg.setTimeStamp(0.298566523153);
    msg.setSource(59023U);
    msg.setSourceEntity(247U);
    msg.setDestination(59524U);
    msg.setDestinationEntity(29U);
    msg.command = 244U;
    msg.htime = 0.148081000202;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 45U;
    tmp_msg_0.htime = 0.954182786582;
    tmp_msg_0.context.assign("RULQEOZKVDTBJXSLGJHRUIUOZHWCVPRKSXLVONFRXJEHEFGAYPGTSXNZMFUBZHQDAGDTSETGBUTG");
    tmp_msg_0.text.assign("WSTKXSRZGYKJKNXRLAJHFNBSZVFULJKSDQAEFIGNCMBQJNWDPWTKQNGW");
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
    msg.setTimeStamp(0.070584935426);
    msg.setSource(55212U);
    msg.setSourceEntity(185U);
    msg.setDestination(1550U);
    msg.setDestinationEntity(20U);
    msg.command = 100U;
    msg.htime = 0.632051996259;

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
    msg.setTimeStamp(0.377628188352);
    msg.setSource(10593U);
    msg.setSourceEntity(173U);
    msg.setDestination(24902U);
    msg.setDestinationEntity(148U);
    msg.op = 215U;
    msg.file.assign("IJEIAIPESCUNYVYLLYDNHCPTTUAWTVWVLJLYKSCXDHGSQOCOHNQOQSWMZFCOVYEWYYVXULKOABDI");

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
    msg.setTimeStamp(0.711776545288);
    msg.setSource(11245U);
    msg.setSourceEntity(223U);
    msg.setDestination(11403U);
    msg.setDestinationEntity(150U);
    msg.op = 189U;
    msg.file.assign("VCIXBJEXYFFVJGNLXPIFWOXZTFWKNJVTXPTYPRXRGQYKTCLYQGYHMNMYZSHSJPMOVLVUYLWIWNPSGOPUVQNOAWMUSFWEZTRWNZPTDKLZRBDULOBLGABRAYOBDKJLSBCEGAOKGQUWPMJRYDSDJFAXVCLCQIAEKJHQOATDWHCDQDJHXBFOTEEIGBZSQGXFMIDRUSCKZFTMKVJTECNADEKEUMRZMIU");

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
    msg.setTimeStamp(0.957369284086);
    msg.setSource(11155U);
    msg.setSourceEntity(249U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(212U);
    msg.op = 37U;
    msg.file.assign("BYQFPZDTAMHSQFYTEQDJOBOMFWDULHIJBYLXKYZEUZTPHP");

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
    msg.setTimeStamp(0.173800426763);
    msg.setSource(27149U);
    msg.setSourceEntity(1U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(194U);
    msg.op = 129U;
    msg.clock = 0.45689139534;
    msg.tz = -81;

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
    msg.setTimeStamp(0.897984670227);
    msg.setSource(5263U);
    msg.setSourceEntity(162U);
    msg.setDestination(48314U);
    msg.setDestinationEntity(96U);
    msg.op = 110U;
    msg.clock = 0.824936681295;
    msg.tz = 93;

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
    msg.setTimeStamp(0.416073341109);
    msg.setSource(14281U);
    msg.setSourceEntity(153U);
    msg.setDestination(7442U);
    msg.setDestinationEntity(187U);
    msg.op = 33U;
    msg.clock = 0.0392245850673;
    msg.tz = -1;

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
    msg.setTimeStamp(0.00330515169923);
    msg.setSource(55867U);
    msg.setSourceEntity(77U);
    msg.setDestination(28898U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.336026252408);
    msg.setSource(46289U);
    msg.setSourceEntity(29U);
    msg.setDestination(64470U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.397089674123);
    msg.setSource(60654U);
    msg.setSourceEntity(197U);
    msg.setDestination(22189U);
    msg.setDestinationEntity(246U);

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
    msg.setTimeStamp(0.0906277666755);
    msg.setSource(30322U);
    msg.setSourceEntity(104U);
    msg.setDestination(11519U);
    msg.setDestinationEntity(232U);
    msg.sys_name.assign("YLECOKBWKJWWIWEQGEMAZUXGEZVQTJYWMPBEQJKTZSXDFTYJCCPZTORMNRNCYIRBAHPLARZCTPBVDSDMHFZALNIUAKVIRJVNYD");
    msg.sys_type = 145U;
    msg.owner = 50992U;
    msg.lat = 0.536274406474;
    msg.lon = 0.201409576492;
    msg.height = 0.850737470327;
    msg.services.assign("PMLVXYJVRNXLTIWPJTFFEFJAZOEEQKZBWTHMJWPOWUIEXGICYQITQYMSNATJCQOHNAHDLDPHJNXJMJLTKBTJGEPBKOFCCOISVANZUMPGGCNSKUZAASXLFBTDICUMQFQFDNPBXCZLKSCVMVDBBYJEIEOYGVPRDXMOMZQLYLWGHWFDHEZGSMCOOUNDUDZYNPSVVBOIKWKKGQFTZRCTVRYZSW");

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
    msg.setTimeStamp(0.657946688096);
    msg.setSource(25456U);
    msg.setSourceEntity(231U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(11U);
    msg.sys_name.assign("KIPCVCYTOCJOUSABCLZEHFMDTTPDSDUCHUPUFJQDRGORPURGLHQTEYXMQJOGBDEQHUHGYBXYKGKPSVLIJXZWNRAPZMVEOFEMJSTDKIFXBEVFAGIIZJYIRSXBIOJWEBLHHNWWNLLKZWSZRFGWTAONZOYXIOEUXQBHLMWHTMJMZRFPZVTINF");
    msg.sys_type = 221U;
    msg.owner = 31174U;
    msg.lat = 0.00533668327779;
    msg.lon = 0.580874510766;
    msg.height = 0.645304510623;
    msg.services.assign("ZRKXWOCEKNAPLECRIYADJBOVXQYSXWCMOXLQVMWDUQZNCPHXWTHLCYMCBUHFXAJCKNMRFOFYLBQKRVMYFHIKIPWKZMFIEIMRWPMTEDZUDDESZWWOJZVNNZMXRNUWOLJGPDDNENYUJLQHQJIZBBITLOTHG");

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
    msg.setTimeStamp(0.842259505787);
    msg.setSource(15434U);
    msg.setSourceEntity(142U);
    msg.setDestination(33384U);
    msg.setDestinationEntity(148U);
    msg.sys_name.assign("IPUHZFDSTVLPWXMJRTHEPNFQWXNJAQBAOFFWMDNDWREOTRDWOFZWUABUXGMX");
    msg.sys_type = 93U;
    msg.owner = 17950U;
    msg.lat = 0.539353492361;
    msg.lon = 0.173273533425;
    msg.height = 0.518912575153;
    msg.services.assign("XPUVHNJILFNYNEXWPNKOHXWPEPODYSVQNWGFEZDUAGLCMAIQKNSFIAUDXTEPHXWEZDZUJBK");

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
    msg.setTimeStamp(0.405616117722);
    msg.setSource(23166U);
    msg.setSourceEntity(111U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(122U);
    msg.service.assign("HKTGXVREXBKJCMSFOYQIGPQS");
    msg.service_type = 149U;

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
    msg.setTimeStamp(0.530060237502);
    msg.setSource(44825U);
    msg.setSourceEntity(85U);
    msg.setDestination(60192U);
    msg.setDestinationEntity(203U);
    msg.service.assign("ZKRTGGWFJYHRERUMVMHUBAXUWSXLBRTCZIRUMWBFQSNKCAXCADYJIFGKMLYHYQHNERPNGPSJSAJZQCAHZJDXHFLOEWWIVGLOUIKWANVRBGETEVDZVZTEMOKQCFFWQPMMYDGOGHUKPQQVZKNBVFOSLNOPOOCZJTQSYBTBEVICWUMUXVQLYXPEJNRDIPPFXWXNTIXYTNAUSIAX");
    msg.service_type = 6U;

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
    msg.setTimeStamp(0.743250428698);
    msg.setSource(60922U);
    msg.setSourceEntity(172U);
    msg.setDestination(64521U);
    msg.setDestinationEntity(165U);
    msg.service.assign("UVZQKGGBQMUHDWBHJKELIAETMTXXCPYUSNSFHQPSIJOMYZZOFGZGRKQKWYLXMGIVBQZLYCFNQGWTSAQDPYVYUNIFKJZBBDRPAWBCDUZUAGEYVRLFPQYPUNVEBVQWZUYBNRJMJTRYILRIMEJSEDHAUW");
    msg.service_type = 115U;

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
    msg.setTimeStamp(0.302777222768);
    msg.setSource(969U);
    msg.setSourceEntity(6U);
    msg.setDestination(42106U);
    msg.setDestinationEntity(205U);
    msg.value = 0.0971486002403;

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
    msg.setTimeStamp(0.970976986493);
    msg.setSource(3231U);
    msg.setSourceEntity(181U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(136U);
    msg.value = 0.537395957973;

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
    msg.setTimeStamp(0.967588919531);
    msg.setSource(9104U);
    msg.setSourceEntity(44U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(129U);
    msg.value = 0.66022852341;

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
    msg.setTimeStamp(0.0297542657102);
    msg.setSource(157U);
    msg.setSourceEntity(225U);
    msg.setDestination(1576U);
    msg.setDestinationEntity(134U);
    msg.value = 0.118261329977;

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
    msg.setTimeStamp(0.744083884469);
    msg.setSource(33502U);
    msg.setSourceEntity(226U);
    msg.setDestination(16295U);
    msg.setDestinationEntity(9U);
    msg.value = 0.573848716936;

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
    msg.setTimeStamp(0.504372351476);
    msg.setSource(57439U);
    msg.setSourceEntity(221U);
    msg.setDestination(6838U);
    msg.setDestinationEntity(34U);
    msg.value = 0.216198037431;

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
    msg.setTimeStamp(0.632756181042);
    msg.setSource(40290U);
    msg.setSourceEntity(13U);
    msg.setDestination(33263U);
    msg.setDestinationEntity(97U);
    msg.value = 0.241905608647;

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
    msg.setTimeStamp(0.863387359441);
    msg.setSource(41631U);
    msg.setSourceEntity(137U);
    msg.setDestination(63370U);
    msg.setDestinationEntity(174U);
    msg.value = 0.285655942566;

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
    msg.setTimeStamp(0.109546995458);
    msg.setSource(58774U);
    msg.setSourceEntity(54U);
    msg.setDestination(45719U);
    msg.setDestinationEntity(113U);
    msg.value = 0.543943881034;

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
    msg.setTimeStamp(0.293324811337);
    msg.setSource(25774U);
    msg.setSourceEntity(86U);
    msg.setDestination(24955U);
    msg.setDestinationEntity(225U);
    msg.number.assign("QKCFTWTHIKGYENYUREVKKJVVIPQAUSTQPXCZDENSFDUCWAXWYMCJPGYPVTSONJGRFANPKSDNOECBFXTLTXZBQJUNNMGRJOHWMWPVKOHDUHVXULIDSEBEKLZIHALQGY");
    msg.timeout = 44185U;
    msg.contents.assign("FRQVCFKXKWCGCXFSHMLIPZYVRVBGEHFCJPBQCWUSGHCPKHURIZDRSDSHVKGEJMTLRMQLZRASSGPTAZLVKGEKGOVOPKRKXWOPQJMKQEERAXYQFFBATHVXAODNZIZBSWIZQUHWBCZTYOYHNTWXEULUVJANJTDUXIWWDFCFRBJHCTTLDOOPLHAUCYGDK");

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
    msg.setTimeStamp(0.0395088529871);
    msg.setSource(10479U);
    msg.setSourceEntity(56U);
    msg.setDestination(28047U);
    msg.setDestinationEntity(111U);
    msg.number.assign("FITTLUQMNSVWAEVNIKLHMODHZWJBXVIULGTOPNOHRAWBCZXCYHKVGTTPYGCVHLZQKLMINBNLXMYOFUPCIZYQMKHZOJROSADIWICYPYABFZGPFKEGFSZCPFNDRPJDZQKBNBVRBQZXSEVUSCGAMHGDQJWEVSWENOMUBFWMIQVDEDQCXUYT");
    msg.timeout = 59479U;
    msg.contents.assign("TRVBZKWZVWHJJJUJLMOZPXRFUKUBKLZUWJQOGDHESDEWECZKAQLRLMXVCDPVNORFTMMVNCNDNYMBOXWTAAYJAEDPITGZYQCGHHHBSWFKLOIVPYULXV");

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
    msg.setTimeStamp(0.699419504179);
    msg.setSource(34941U);
    msg.setSourceEntity(4U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(226U);
    msg.number.assign("VNCPVOCDQROLNBHWLDVLPYOAZREHQKMYUWKSJAUYQOYWZAOOCTJVTPCTZXMTDWLMBEEN");
    msg.timeout = 64979U;
    msg.contents.assign("GGSHFRTAHKUOQUVNUMEZYUHSDWALXJMUNWEJOAGYYFZLPKYWXONVHLYLABBZREWZIKBFSEXJMPVCMQQEFNPBELSXPSFQZDFIZKAUXV");

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
    msg.setTimeStamp(0.0720629946205);
    msg.setSource(41418U);
    msg.setSourceEntity(127U);
    msg.setDestination(25872U);
    msg.setDestinationEntity(136U);
    msg.seq = 3012663387U;
    msg.destination.assign("ICCGLSZDJQMOLOBZSVAMX");
    msg.timeout = 56244U;
    const char tmp_msg_0[] = {-43, -108, 113, 46, -104, -61, -14, 1, -30, -39, 52, -93, -6, -23, 98, -76, 73, 66, 53, -112, -74, -97, -41, -124, 59, -77, 108, -122, 59, -115, -121, -89, 12, -27, 94, -65, 28, -107, -74, 9, -128, -14, -126, -82, 3, -101, 31, -29, -17, 14, -105, -22, 58, 4, -19, -60, -14, 15, -83, -26, 76, 82, 45, -46, -73, 39, 69, 90, 108, 83, 90, 49, -82, 126, 113, -123, -99, 47, -64, 91, -42, -116, 92, -5, -107, 51, -102, 91, -104, -90, 116, 41, 46, 58, 14, 45, 119, -90, 17, -19, -59, 79, -23, 77, 92, -33, 116, -82, 64, -101, 22, 85, -90, 29, 55, -32, 24, 24, 101, 27, -74, 27, 70, -51, 108, 91, 118, 87, -32, 107, -70, -9, 6, 82, 74, 51, 0, 91, 27, -61, 47, -46, -24, 67, 37, 17, 21, 2, -54, -77, -85, -17, 29, 9, 59, 13, -6, 54, 76, 102, 123, -3, -3, -122, 47, 111, -6, 114, 8, -114, -55, -122, -57, 125, -37, 122, -24, 111, -22, -68, -79, -108, -18, -32, -96, 99, 106, 7, -100, 42, 66, -46, -124, -121, 105, 51, 47, -81, 64, 91, 23, 97, 21};
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
    msg.setTimeStamp(0.629100973886);
    msg.setSource(53363U);
    msg.setSourceEntity(164U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(144U);
    msg.seq = 3880132819U;
    msg.destination.assign("LVACUEABRKDIKJQZSQNHGOUTITBFSZNKBEWCJPMZTOCCEQKEQBKPAFMJDYGFVKGMFOEDDXOLGOAUMCVWONVPIDCWXHJXQFSTJCOPWRRBNMTQTXKWNEKJLTVTAPTAWSIIYZEQHBXGXPFHOUXLVXCEMBYPARHMJDFSHZJFKHSAXWYOGGULYVDYKYZAPCNIMQLUIMZSNBIHZDLHYFNRQTJMJVNGDSOUYDRUQIRBLVBAVYSPNEUWPIGULWHGRRFRE");
    msg.timeout = 4772U;
    const char tmp_msg_0[] = {-107, -114, 103, 14, 52, 3, -75, 32, -111, -114, -98, -84, -52, 44, 54, 77, 41, 122, -7, -128, -29, 7, -83, -74, -88, 90, 16, -100, -12, -56, -53, -83, 12, -16, 11, 7, 101, 28, -94, -55, -105, 105, -88, 13, -16, -65, -115, 21, 63, -46, -106, 27, 115, 0, -37, 95, -60, -26, -113, -77, 115, 40, -80, -69, 107, -99, 15, -124, -41, -101, 97, -122, -15, 14, 10, -31, 49, 76, 114, -85, -105, -107, -37, 72, 58, 31, -60, -112, 67, 63, -86, 119, -54, 99, -36, -82, 101, -12, 83, -79, -125, 58, -2, 24, -103, -94, 103, -15, -94, 31, 81};
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
    msg.setTimeStamp(0.740860600369);
    msg.setSource(60530U);
    msg.setSourceEntity(241U);
    msg.setDestination(34806U);
    msg.setDestinationEntity(79U);
    msg.seq = 3460882644U;
    msg.destination.assign("SOKEWNALPHFQMBTSTEQUTVLZAKYKNGWJHFHODKQDGCBRYQOXIFGFUNXCDRPLODATYEZJUNZLGPTZIVJMKSCCEHEWIUWYPIMZYWDYJCPAXHXPEH");
    msg.timeout = 47407U;
    const char tmp_msg_0[] = {-109, -19, -31, 38, 90, 41, 61, -17, 101, -105, -111, 113, -52, -2, -54, -83, -81, -60, 122, -40, -91, -122, 67, -24, -28, 123, -98, -115, 92, -94, 46, 113, 118, -57, 78, 94, -63, 111, 5, 25, -31, -114, -15, -1, 22, 96, -56, -84, -89, -116, 32, 83, -48, 122, -91, 96, 91, 85, -103, -53, 51, 45, 111, 37, 122, -10, -43, 22, 101, -115, 17, -98, 35, 1, -99, 69, -110, -68, -97, 23, -99, -91, 18, 77, 124, -123, -100, -50, 9, -104, 114, 84, -82, -123, 14, 99, 21, 60, 66};
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
    msg.setTimeStamp(0.977954850675);
    msg.setSource(46711U);
    msg.setSourceEntity(130U);
    msg.setDestination(41893U);
    msg.setDestinationEntity(210U);
    msg.source.assign("ZAXXQVZWLFRRTOVFYQPACZXKRHGBXKKKWFVIMIEOMPOWRHWVNTSOIHAMKKGUOUECPDAYXPBPLSHDNEBHCLYNERDIPTOGRRICZUFDNJLQACCJSFZVEDSXUUYKYVLWBFWBXZTCMTRGMLHWFNUQNTYLIQOBPVBJAAUSBGTFMQDSJMLTXIYSEZJSETZANYIJDKVBNSGMPOCHFYMGERVIJBQIJCUYCEQZXMXTLDDPGJKUSOPHQLEHWFOHDKJZAQ");
    const char tmp_msg_0[] = {54, -1, 30, -102, -104, -95, -116, -18, -119, -85, -68, 99, 86, 19, 26, -89, -94, 85, 0, 52, -114, -116, 36, -126, 35, -40, 122, -5, 114, -64, 86, 103, 69, 124, -112, 3, -38, 55, 67, 69, 90, -98, 105, -31, -86, -32, 55, 32, -84, -23, 122, -106, 94, 17, -21, 74, -57, 71, 33, 85, 67, -6, -124, -80, 36, -50, 60, 22, -24, -65, -126, -11, -119, -23, -42, 14, -37, -64, -1, 80, 114, -16, -128, 115, -110, 94, -83, -58, -36, -34, -31, -18, 118, 17, 125, 42, 43, -111, 113, -29, 95, -29, -1, 76, -125, 64, -27, -108, -79, 71, -94, 20, 90, -95, 80, 67, 94, -29, 61, -62, 119, -107, 33, -5, 59, 107, 47, 97, -26, 65, -86, -103, -33, -100, 87, 11, 81, 20, -9, -29, -68, -75, 31, 81, -50, 93, -52, -8, -114, -98, 124, 4, -83, 14, 32, 112, -3, -31, 50, -30, 40, 124, 85, 15, 123, 122, -5, -11, -10, 29, -27, 0, 29};
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
    msg.setTimeStamp(0.0879793226605);
    msg.setSource(61913U);
    msg.setSourceEntity(68U);
    msg.setDestination(95U);
    msg.setDestinationEntity(249U);
    msg.source.assign("IAAHRSJJSEXVZOPAHRTNZYPNNEBWFDJKA");
    const char tmp_msg_0[] = {-99, 73, 64, -66, -38, -57, -8, 74, 35, -88, -2, 100, -9, 88, 87, 124, -49, -25, 22, 46, -21, -51, 108, -112, 56, 55, -77, -66, -78, 86, 58, -69, 65, -26, 68, 75, -46, 110, 70, 91, -17, -26, -96, -14, -119, -100, -45, -13, -104, 31, -24, 57, -9, -2, -22, -74, -34, -103, -118, 108, 124, -28, -61, 16, 49, 40, 14, -13, 60, 82, -14, -14, -35, 24, 111, 37, 36, 39, 120, -10, -115, -19, 0, -2, -57, -28, 3, 5, -101, 74, -95, 104, 116, -70, -104, -124, -71, -72, 115, 45, -64, 122, -71, -96, 55, 20, 31, 71, -51, 5, 65, 102, 99, 18, 64, 53, -74, 35, 61, 115, -51, -25, -116, 80, -5, -39, 19, 58, -31, -35, -96, 1, -32, 84, -28};
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
    msg.setTimeStamp(0.784720616103);
    msg.setSource(23389U);
    msg.setSourceEntity(141U);
    msg.setDestination(13930U);
    msg.setDestinationEntity(31U);
    msg.source.assign("FUBDXYVMIEYMAEGWDBAKDBIQLZAHTANLEVLQSQOJUXFXKTLSPYVNZPJWCJTPRCBTJVOFJUUSXFJRHNLEFJVNARDPMWQUKAOGTUZGQGYRXCUYCJXPPMUKL");
    const char tmp_msg_0[] = {-47, 36, 27, 35, -117, -22, -37, -116, 107, 114, -34, -31, 13, -10, -70, 71, -92, 112, 49, -128, -17, 98, 49, 26, 40, 53, 48, 50, -82, 85, 26, 39, -2, 87, -87, -61, -107, -35, -27, 111, -1, 62, -29, 19, 63, -109, 48, -46, 16, -36, 66, -88, -93, 110};
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
    msg.setTimeStamp(0.5407439045);
    msg.setSource(17122U);
    msg.setSourceEntity(160U);
    msg.setDestination(23341U);
    msg.setDestinationEntity(251U);
    msg.seq = 1080014427U;
    msg.state = 2U;
    msg.error.assign("JICEQWAIYZXEQZOUYZLXTCIBPCBYEERANOMTDBKDENNXWMIVP");

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
    msg.setTimeStamp(0.642364942669);
    msg.setSource(21035U);
    msg.setSourceEntity(250U);
    msg.setDestination(40571U);
    msg.setDestinationEntity(137U);
    msg.seq = 3059532007U;
    msg.state = 26U;
    msg.error.assign("OAEKHMTISQWVZTWEHQSGCWWZMDQRBSLIGGZESTVBMRJEVSLNMSFJEYCWSJNHVFOYBRPPQADNNRUZDOIKZOYP");

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
    msg.setTimeStamp(0.0036063651185);
    msg.setSource(59108U);
    msg.setSourceEntity(216U);
    msg.setDestination(48758U);
    msg.setDestinationEntity(122U);
    msg.seq = 564123306U;
    msg.state = 204U;
    msg.error.assign("YMFSVQYNMFLGVKKXIRNCPWXQAYBYJSBERCSGLRCKEJBOOPIJTADWKFNXKCPPRDCIZXZUECBMSVBEOYHUQWPIDKTKQGZIZLRUNCRDDFXJSLHJACJDMQYGOUOTEHDWLBFXNHWZCTGGIULHOPBMTDWXLOQ");

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
    msg.setTimeStamp(0.612709032695);
    msg.setSource(8767U);
    msg.setSourceEntity(61U);
    msg.setDestination(46076U);
    msg.setDestinationEntity(30U);
    msg.origin.assign("WBJPPJXMPQIXFXOYAYPJJCGMYKFEJMEJRSBYSYRERSLHNBZGXHTBMYICAOAPIZUJENFRESMPDSZWNJJONDSQMFXIUWOPQGWIVHTWGBUSSSDHNKUXKVIRDWKTHGL");
    msg.text.assign("WAZEAKMYRVIHEITLQVRBPVJLUXKDWKFNGCYCLQZWQKPPBQTBDUDCCFUWPQTVHWKFEOUSSHLYADOOTRCWUMXUUWBIINXDRGDNDEPYZAIIJXQMJGNGOSNGBYAOQKVNCZ");

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
    msg.setTimeStamp(0.584584683522);
    msg.setSource(13338U);
    msg.setSourceEntity(116U);
    msg.setDestination(56339U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("APBDJAKYSOMDVAGYHHPWVXFAGFDVJIOLCIMCKMZELQQTYENAZGQVLQJGBYULXVPNBIZONOHQTJBZHNQYRCIVBMAOCZSYIMZDHONSUNWQXLLWKGKMFUYRROIGTFZPSSHQLRESOTPFTYXEMLGZKRWMDPEE");
    msg.text.assign("WOKGPJBHAKYMQKMNHTJOICIIRWELKLJVFCBUBUNNXOLTPREDHCZDYJBVPPWOWFSPQHJPCEIZXVKWPLUVOAAGSRYNVSYXUQEDOJGGIYYPIKCFCDFNBTBZQMXTABKMARQDUBHIQFXAWFZKJQMWDCSQGCTDRYAHCZTFXGVYEIEMGHNTKOHBFUEZZWQDSFLDRLLHJXUYLBVNHFIZRPTEWLVVKNZRUJMROSXAASMGVE");

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
    msg.setTimeStamp(0.0901668434718);
    msg.setSource(51697U);
    msg.setSourceEntity(201U);
    msg.setDestination(26354U);
    msg.setDestinationEntity(28U);
    msg.origin.assign("FRXJUTFCHSEGRCPIAKBBGXAHYNIAQBXVOWQEWYPPVRJLQYOGYLSELZLNUAUSDEIFROSLKNZISGECRUNCYCZJTWTFYXPCVKZVXSNWUYMPGRMDHWMZKASLEACFVKXQXLROGMPQAMQHZQDCQBPHTWSIMEJLJPJLCEBYDWTPNDXGETWJFRKIDXWOM");
    msg.text.assign("XLUOTQMWABFXFRQCCPYKNIMPVCTPZSKQVHMEOUXSXRYHFQJMJSWEPOGCTINTNLDJDBYUERDVIKHVTVBHANXVGSKKJRLYRHPZWPUNTXYWBZOYGQYMOUGMQABAVHCIBYFKAXCEQTPKUONYGRILZHEDWAZFFGZHZSFKIVSJQSRJZEI");

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
    msg.setTimeStamp(0.518070523563);
    msg.setSource(21545U);
    msg.setSourceEntity(111U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(82U);
    msg.origin.assign("SHUDSXRANZINIDXZSNBZIPFVMIWPBWOPAROADICLSUCFTPLYKEBONGGOICQEWEDUTKBCUHUMQBXTICXTQVEQBQMLRIFLMQSCZWJOKNLOGZGHGXJRHNPWIERJGTTXFQVBDJVFLCBHKTYBZGTLOHAYKJVALPMSPJEAFAUSKYYRRGZNOEOMEAYXVJPYNNEKWRYLKDRSXAWDYXTDRBFXZWGVEFWVCHPMHWAQIFUDTYMMVFQNMKOZDJUUJUKSGCVCZS");
    msg.htime = 0.484025875543;
    msg.lat = 0.310819379808;
    msg.lon = 0.142031431487;
    const char tmp_msg_0[] = {-19, 34, -46, 7, 79, 85, 29, -60, 68, 72, 86, 27, -63, -58, 96, -24, 106, -89, -104, 5, 104, 32, 57, -89, -9, -70, 20, -128, -93, -33, 44, -1, -121, 104, 75, 65, -3, 42, -75, -109, -46, 94, 112, 89, 120, 36, -96, -12, 109, 17, -107, 59, -38, -6, -12, 48, 105, 5, 11, 30, 54, 92, -80, -41, -8, 113, 60, 86, -73, 125, -77, 50, 46, -79, 117, 10, 12, 86, -82, -33, -24, 119, 124, 20, -124, 26, -84, -109, -9, -95, -61, 57, -88, 19, 52, 54, 85, 65, 34};
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
    msg.setTimeStamp(0.783835724246);
    msg.setSource(28669U);
    msg.setSourceEntity(4U);
    msg.setDestination(49148U);
    msg.setDestinationEntity(234U);
    msg.origin.assign("RAMOHLLSNQVGYDSPFIEMMTLYDEHHRSLSJIKOBZRDEYPWHAWFOWFDCKZZTQEOJNUICCDFGBBUIGQSPVWKNVBQLCAYNQKVAZHZVMCMVEJKWANRXRHBUGPHBGDODMUQYVVWFAPAERYONQPJMMAHGPSJVFLFUUTEPZHOAXTUWUGNWNIBXYRJFEOCQKLXZTDIKIQZEWFAPTZJXIDCQNSLCXTGLCUMJS");
    msg.htime = 0.0983078099957;
    msg.lat = 0.84041797152;
    msg.lon = 0.458077551146;
    const char tmp_msg_0[] = {-53, 87, -51, 33, -28, 123, -11, -91, 125, 101, 92, -38, -54, -35, 2, 105, 60, 32, -65, -66, -13, 106, 95, 28, 61, 46, -49, -86, 34, -111, -15, 68, 31, -70, 74, -58, -78, -66, 70, -47, 61, -89, -83, 17, 51, -22, -36, -67, -44, -65, -5, -88, 37, 81, 13, 14, -107, -1, 116, 98, 49, 35, -106, 9, -6, 108, 39, 76, -13, -5, -4, 57, -65, 26, -92, 90, 107, 61, -32, -83, -128, 73, 2, 37, 48, 45, 92, 50, -85, -117, -89, -26, 97, 60, 95, 20, -20, 74, 48, -48, -30, -49, -43, 88, -46, -33, 85, -90, 48, 9, -77, -76, 111, -101, -122, 20, -117, 19, -8, 11, 7, -120, 115, -110, 80, -95, 1, -38, -120, 116, 57, -72, 81, 105, 121, -18, 8, 26, -15};
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
    msg.setTimeStamp(0.370597501237);
    msg.setSource(37793U);
    msg.setSourceEntity(237U);
    msg.setDestination(1584U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("TOMJXIZLNUYIPNKOFJKYADNORLMLEAYBFZJVNTHDYLHBWOFIEDPSUJKWAMVHIFWAFRPWJHLBOSAFDVYBQCXPZHSMQBDOCCZFTGYSDCPYFEMLAAIRROIHFJWZKGRSOTQXGNMSWNMBUVXMCDGHE");
    msg.htime = 0.678292532632;
    msg.lat = 0.603645452855;
    msg.lon = 0.455687499353;
    const char tmp_msg_0[] = {-35, -100, -63, 13, 69, 4, 75, -116, -102, -39, -44, 66, -12, 86, -31, 52, 6, 5, 114, -10, -93, 81, -35, -128, 24, 70, -123, 120, 21, -17, 86, 114, 75, 90, -122, 122, 1, -107, 17, -128, 54, -109, -1, 99, -77, -126, -86, 0, 101, 76, 41, 46, 27, 4, -99, -92, 91, -65, 53, 62, -28, 4, -110, -53, 40, -86, -115, -37, 118, -64, 81, 6, 24, 108, 26, -71, 40};
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
    msg.setTimeStamp(0.339145822074);
    msg.setSource(50079U);
    msg.setSourceEntity(119U);
    msg.setDestination(6358U);
    msg.setDestinationEntity(100U);
    msg.req_id = 23384U;
    msg.ttl = 49680U;
    msg.destination.assign("ETAYAFGZIK");
    const char tmp_msg_0[] = {84, -13, -5, -7, 99, -5, -65, 26, -37, -50, -124, 6, 44, 33, -5, 76, 0, -80, 47, 68, 20, 6, -40, 50, -8, 22, -62, 70};
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
    msg.setTimeStamp(0.76302343192);
    msg.setSource(62216U);
    msg.setSourceEntity(157U);
    msg.setDestination(61962U);
    msg.setDestinationEntity(5U);
    msg.req_id = 54982U;
    msg.ttl = 36228U;
    msg.destination.assign("HCFOUNJKTXHZWYXDHUKODXZDOBWKINQZWCJARRSPXZCVVEOIAVGWCSIVSRVGBOWJMLLDMVLFOBUBLRCYCFOEGQNZUZCDHEOLSV");
    const char tmp_msg_0[] = {3, -90, -4, 50, -52, -71, -100, -70, -45, 125, 74, -32, -81, -3, 23, -101, -113, 123, -98, 118, -125, 24, 58, 27, 19, 81, 77, -128, 18, 28, -81, -20, -111, -18, 113, -26, 20, -6, -91, -81, -76, -90, 56, 12, 62, 5, 86, -11, 76, 30, 15, 45, 80, 37, -59, -62, 60, 0, 106, 106, -47, 73, -16, 20, -69, -7, -92, -115, 32, -52, 42, -45, 48, 37, 126, 56, 19, -41, -84, -67, -61, 28, 59, 107, 125, 50, 22, -121, 118, -107, -71, -14, 4, -52, 94, 11, -41, 14, 59, -43, 29, 122, 11, 8, 123, -46, 126, -119, -40, -30, 26, 34, 45, -101, -118, 75, -26, 83, 112, 4, -86, 67};
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
    msg.setTimeStamp(0.0843184943623);
    msg.setSource(14492U);
    msg.setSourceEntity(49U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(165U);
    msg.req_id = 64291U;
    msg.ttl = 44905U;
    msg.destination.assign("XCJBNCPZHTCURJYRZHLIVTJVRTASEFGLQNATOQBYIKDXMIPGFVQPJBTRJKPWSCZIELMJRQZTMAULFFZNKKBOZSLRQNAUEMMZOGQHVKBUPPRD");
    const char tmp_msg_0[] = {37, -107, 101, 42, 72, 4, -84, -84, 92, 102, 10, 52, 1, -72, 116, -52, -53, 4, 112, -109, 17, -30, 59, 15, -31, 87, -54, -9, 11, -39, 89, -77, -13, -63, 112, 115, 107, 110, 97, 44, 64, 79, -9, 46, -27, 24, 8, -1, -12, 55, -97, -59, 45, 4, -37, -97, 28, 110, -56, 27, -94, -83, 85, 109, -57, 122, -57, 96, -105, -39, 22, -101, 6, 12, -11, 54, -102, 96, -59, -15, 4, 99, -7, -33, -17, 52, 93, -100, 108, 109, 19, 97, 11, 109, -24, 95, 41, -85, 72, 23, 85, 114, -86, -9, 29, 14, 113, 71, -9, 55, 108, 31, 31, -80, -106, 3, -67, -65, -67, 64, 115, 10, -98, -81, 13, 38, -59, -105, 79, 33, 13, 82, 101, -97, -85, -64, 114, 4, 25, 44, -42, -44, 35, -42, 10, 114, 57, -18, 30, -16, 106, 29, 31, -65, -47, 13, 92, 50, 118, 66, 89, 125, -24, -82, 42};
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
    msg.setTimeStamp(0.0860988181019);
    msg.setSource(5110U);
    msg.setSourceEntity(184U);
    msg.setDestination(60817U);
    msg.setDestinationEntity(9U);
    msg.req_id = 473U;
    msg.status = 62U;
    msg.text.assign("KZAYCFIRLFKXZXCLZHBGZJJNUHTKXVVSNZKQHCNSXURDRFOQMGFJYUKAYWAITEJNEKMDUBVUPKRPYPQFGCWLAEXNUJTGVHVSZNOPRQIVWDVBGSPQYWPLZFLDCRIIPIQIRVOPCMWKOORBLYJTHTARENDBKWIZGMLNLYYHBZOAHQAJSWMFUUHGKDMSTGNXXDUWCLOPHOYETBFQTQTUXOVETIJMBGBEAXIJSVJSNCDDMEOHEBSAFLXQYCCGWPERSF");

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
    msg.setTimeStamp(0.293817066524);
    msg.setSource(35012U);
    msg.setSourceEntity(85U);
    msg.setDestination(56718U);
    msg.setDestinationEntity(191U);
    msg.req_id = 1898U;
    msg.status = 235U;
    msg.text.assign("WFCOEPBOYVAWUGHRNSBCYEIVHLNIKJOTPHLMLAJMTVQJNIJDERZNIMBQYEPXRBBAPEDK");

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
    msg.setTimeStamp(0.488954534868);
    msg.setSource(21928U);
    msg.setSourceEntity(50U);
    msg.setDestination(47279U);
    msg.setDestinationEntity(114U);
    msg.req_id = 10966U;
    msg.status = 200U;
    msg.text.assign("KDPSBWQYCEQGEQYTLTYWPDXXANSXXGLPVNQPUVZKMTPORLUGKYXJFHAXKFXJUCSKLOMBJOVSDFGGAHCIHBRQZDMOYOPYPVAZVFEJNZUPRNPTMAHIVWUFFDBWWTWIFHYGGAOSKDCCOKJJVHBTUSJJZOQKRVTEDRXRFUDRWQWRHNLSHMBYFXAERFMOZIMQLDBPHNLICIGZERLZATJKIUCVLOICQDSJCNTYGNSHKZE");

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
    msg.setTimeStamp(0.378629650934);
    msg.setSource(31665U);
    msg.setSourceEntity(249U);
    msg.setDestination(16693U);
    msg.setDestinationEntity(155U);
    msg.group_name.assign("EOYTJVGSKOSGTJNVBASHWNGGVDELAPEGOH");
    msg.links = 199702598U;

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
    msg.setTimeStamp(0.067548538102);
    msg.setSource(60191U);
    msg.setSourceEntity(85U);
    msg.setDestination(48904U);
    msg.setDestinationEntity(151U);
    msg.group_name.assign("EXOHLJINTOYVSILQFBOWCCR");
    msg.links = 2389560167U;

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
    msg.setTimeStamp(0.304779438711);
    msg.setSource(9500U);
    msg.setSourceEntity(108U);
    msg.setDestination(11260U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("AKANGOQWFPQMHOLXMXSDWJQCJBYMXDEMUCKYSOQZRFAFEXREPIALOMIPHHHTRXWKCOIFKVVGNWVBAVGXJEFFXABTCGTCGJHAYGJWGZKUHDZUJTUSBIBYNVXZEPPRMZPRHQYLQZTWPNFYJYUIZKIVGNSZUBHSWECLSQRUJLTRUICZXKJQTDETTLLNKRDOIV");
    msg.links = 1252407790U;

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
    msg.setTimeStamp(0.282426545362);
    msg.setSource(53818U);
    msg.setSourceEntity(117U);
    msg.setDestination(61266U);
    msg.setDestinationEntity(58U);
    msg.groupname.assign("QFXTNKFWIQMPXTCFUJPRWYVRLZLPARDTUXSASIJECATMMXBCGZBXNIHGAZNRCKGSPPRHHTOSBYUHWQYBKJTBTJTDWXQIVDLHVVUMONEDAGHYGKVNULYYJMIFOPMWSGDERAFSRUWBOKLYYFPKDVJHQDEMBVJHEVLWSELBMXDZYLHUYEOOPCARZEZODN");
    msg.action = 172U;
    msg.grouplist.assign("VDVSRVHAVGXIHPKLOYUPPZTXOMKGLOWPFPJAFNKCUBJLYTMFIPFUQHWQZDHIWVGNXNDVYRRATVJMRSNEYPCNHEVCOBXXMNQDICLDCCUGUGZXTUYGYXTOKSTZMVKCWPYIJJLERUSGSWQMELOEYCXLDODKRBOAUMJZAIFFLFERNOGBBEDHKPZAAKUN");

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
    msg.setTimeStamp(0.0840927625734);
    msg.setSource(7918U);
    msg.setSourceEntity(198U);
    msg.setDestination(34920U);
    msg.setDestinationEntity(238U);
    msg.groupname.assign("TNKKZJIOCQBEJHRIZHXDBNJRUJVYLCSRJFGUJCLITSCSNYRCMHDGDEBUBHKUMNTAGYPWYHFCZBTLPUXOIXMPIUMEXWNLZPXUWPAIJWFLQJFMEYBUXWRNYZSPPQZFRDHNYOGUKWLRVTFOOACJIIMWBBSGPTOGHDGFVNSFGDNKVVYSKXEKA");
    msg.action = 99U;
    msg.grouplist.assign("RCEFJOTFIGQBFKZANZOKJECXHPBQEDGTRGLGHKSCTIOBKVSAKDJWEFMLLYIRMYCDAWVVEFHPUWSNEEWNOUTGSIDXBPQFNFSPUMRNBCZRWIULDNLAPLVMLJLUAIESOIDZVHRCDKYVWIJGRGAGUOXUZQSVCCTBKJUPPLDWQGQCTXXMFVBBKZQJS");

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
    msg.setTimeStamp(0.1348692049);
    msg.setSource(19519U);
    msg.setSourceEntity(84U);
    msg.setDestination(5096U);
    msg.setDestinationEntity(123U);
    msg.groupname.assign("UZQXWLGZMBBJAQXJCHCDBJJGMKFQPKMYKWORMPASGAVFXKPNNYMLNIXPSIPDMZXATGCLWMVTVWYHJJZKJCYFAAFSGKKTULRAKDUPNINSRBWFTSTDEDDOZHNTPBIUSGONIZBZNQLQSLVOTLOVVDSANEDDYMVZLCIROROJDWJWWXUEEYGOVFJFREUSEEQXIBPLTUPCMSWRTROMACUAHFCEGYYORIEGYTLGVVQEHXBH");
    msg.action = 78U;
    msg.grouplist.assign("OWKGFROJKSEZKSENNVNKYVLXPHMRYUWUTBPUYEOTQOSDEQCBIXQNFQMKOLWYVXLWEWPIZAAQMMGQRGAMAFJFDUOKNHMGRRSIBRHGLTURSJQXGVVHFVIDHGTAJDBPQIJOZEFKHCVFMFXTDAPFTESPQZCYIKEJZUZCSYDMJXZRYJMWIZDCZNUEXGLHLUMDCSIZTEJTNJIWBYKOWVAPASCXUHLPLOBRVABCVGYBBKFAHGIBWNQDNDOXCLLUNP");

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
    msg.setTimeStamp(0.896483710824);
    msg.setSource(60516U);
    msg.setSourceEntity(122U);
    msg.setDestination(38791U);
    msg.setDestinationEntity(79U);
    msg.id = 149U;
    msg.range = 0.79954986937;

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
    msg.setTimeStamp(0.432961867405);
    msg.setSource(10388U);
    msg.setSourceEntity(41U);
    msg.setDestination(24470U);
    msg.setDestinationEntity(135U);
    msg.id = 226U;
    msg.range = 0.027769019196;

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
    msg.setTimeStamp(0.0836446605911);
    msg.setSource(3923U);
    msg.setSourceEntity(194U);
    msg.setDestination(7186U);
    msg.setDestinationEntity(198U);
    msg.id = 20U;
    msg.range = 0.910655498022;

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
    msg.setTimeStamp(0.758451106049);
    msg.setSource(62697U);
    msg.setSourceEntity(205U);
    msg.setDestination(41917U);
    msg.setDestinationEntity(96U);
    msg.beacon.assign("CASMSBQOSYUYAQWDSKMXEAUDOSTEHOEPJNTHHHSAFLDZDPWPYPBWHFQDNETKWZUJQUOCLUKBZGJRADVDTVJVYVMGXULJQFMLGIFQUIFWGBNCRBBLTCLNMKHMBNHEYWGUPEGOACFXGLDTNRGNTXPLVUNODLKQOXWRYNSVVRJXMKJGW");
    msg.lat = 0.949368785959;
    msg.lon = 0.404345906171;
    msg.depth = 0.258745038371;
    msg.query_channel = 56U;
    msg.reply_channel = 225U;
    msg.transponder_delay = 129U;

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
    msg.setTimeStamp(0.739230651067);
    msg.setSource(21818U);
    msg.setSourceEntity(41U);
    msg.setDestination(25113U);
    msg.setDestinationEntity(156U);
    msg.beacon.assign("UKEPYZSGNSAVWWCXNZZTYVVQSPTGQNHDYJRNZGYOFLXDROHPCCURUBQCBPWCALBUJVKCRMXGCRWXKSEFODAQOSHHQEJTFXWNJXHFFHBBTJTIUFEUIEXZLLPCHXBDZWCBWIUDSPMYJMANMMDGTSVAKGKYTDFMVQMUUYJIMWRONLKWKRQBMNXQHIEHOEYEIOE");
    msg.lat = 0.819303383335;
    msg.lon = 0.192444826357;
    msg.depth = 0.341567302067;
    msg.query_channel = 254U;
    msg.reply_channel = 194U;
    msg.transponder_delay = 135U;

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
    msg.setTimeStamp(0.839208361793);
    msg.setSource(969U);
    msg.setSourceEntity(190U);
    msg.setDestination(8360U);
    msg.setDestinationEntity(88U);
    msg.beacon.assign("XBDXVZFAYAZBWZCCNKCSXLKEVPWWEPAWIFMKGYMOPVPYTPRJEBOQUUNLTTZMHXIZGSMCASGELNMTEWFUAJXKQXTNJXCHOLYQSYIUWZOAVGIFVEVRWQJLRFBOUKPIHDUQXYBYAGZAAHCDRNTSINRNJIDZDSJUPB");
    msg.lat = 0.132617969575;
    msg.lon = 0.281287785442;
    msg.depth = 0.704866200082;
    msg.query_channel = 52U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 0U;

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
    msg.setTimeStamp(0.364206280364);
    msg.setSource(30512U);
    msg.setSourceEntity(247U);
    msg.setDestination(8981U);
    msg.setDestinationEntity(141U);
    msg.op = 217U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OIKSWTTKYJMNTLKUSDPIDOYFDAPRVUWGCTWECWOYXRJHNDZUQXMQLFQSNGNABD");
    tmp_msg_0.lat = 0.846499409297;
    tmp_msg_0.lon = 0.439750063052;
    tmp_msg_0.depth = 0.239839771542;
    tmp_msg_0.query_channel = 231U;
    tmp_msg_0.reply_channel = 157U;
    tmp_msg_0.transponder_delay = 212U;
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
    msg.setTimeStamp(0.487474473691);
    msg.setSource(3658U);
    msg.setSourceEntity(154U);
    msg.setDestination(4852U);
    msg.setDestinationEntity(79U);
    msg.op = 189U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LXPUJXTTWRVFMMOSESYMWQTRDPPJXQEXCJVCKLQQRXKBZITWCQERTE");
    tmp_msg_0.lat = 0.647835134336;
    tmp_msg_0.lon = 0.0339306458369;
    tmp_msg_0.depth = 0.750040119172;
    tmp_msg_0.query_channel = 85U;
    tmp_msg_0.reply_channel = 49U;
    tmp_msg_0.transponder_delay = 55U;
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
    msg.setTimeStamp(0.147544792522);
    msg.setSource(56479U);
    msg.setSourceEntity(190U);
    msg.setDestination(29885U);
    msg.setDestinationEntity(245U);
    msg.op = 137U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BYZVPKRXESCZURMBCLEAAGZIRSGKBNAMDWXSZITJWPYURNDGTUJMSR");
    tmp_msg_0.lat = 0.512867952303;
    tmp_msg_0.lon = 0.142494599492;
    tmp_msg_0.depth = 0.794950480215;
    tmp_msg_0.query_channel = 72U;
    tmp_msg_0.reply_channel = 115U;
    tmp_msg_0.transponder_delay = 237U;
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
    msg.setTimeStamp(0.562454527743);
    msg.setSource(36826U);
    msg.setSourceEntity(58U);
    msg.setDestination(41421U);
    msg.setDestinationEntity(183U);
    IMC::ControlParcel tmp_msg_0;
    tmp_msg_0.p = 0.31027935436;
    tmp_msg_0.i = 0.897853419837;
    tmp_msg_0.d = 0.0428416871202;
    tmp_msg_0.a = 0.793755096285;
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
    msg.setTimeStamp(0.876082122642);
    msg.setSource(52307U);
    msg.setSourceEntity(27U);
    msg.setDestination(62636U);
    msg.setDestinationEntity(14U);
    IMC::FormationMonitor tmp_msg_0;
    tmp_msg_0.dist_min = 0.941518352763;
    tmp_msg_0.ax_cmd = 0.0509907963715;
    tmp_msg_0.ay_cmd = 0.00390706104384;
    tmp_msg_0.az_cmd = 0.572646294666;
    tmp_msg_0.ax_des = 0.277140425311;
    tmp_msg_0.ay_des = 0.274753525384;
    tmp_msg_0.az_des = 0.0579341667844;
    tmp_msg_0.virt_err_x = 0.437523158797;
    tmp_msg_0.virt_err_y = 0.215634239138;
    tmp_msg_0.virt_err_z = 0.903181322117;
    tmp_msg_0.surf_fdbk_x = 0.629814738552;
    tmp_msg_0.surf_fdbk_y = 0.523369191906;
    tmp_msg_0.surf_fdbk_z = 0.156226080143;
    tmp_msg_0.surf_unkn_x = 0.0980280258009;
    tmp_msg_0.surf_unkn_y = 0.0218126296002;
    tmp_msg_0.surf_unkn_z = 0.0792513874602;
    tmp_msg_0.ss_x = 0.197086670194;
    tmp_msg_0.ss_y = 0.557088520429;
    tmp_msg_0.ss_z = 0.921386307311;
    IMC::RelativeState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.s_id.assign("TFZDIRFRIKXWWEZNEESNWLFPAMGRXADBVVBFTCUSVLKUCRPTMETDHOTWJKTFJFXYMAQQDJEJSSKXKBGITLULLJSHBAQJMNZJKHGTNCAZUILRGSN");
    tmp_tmp_msg_0_0.dist = 0.449832840405;
    tmp_tmp_msg_0_0.err = 0.466274585916;
    tmp_tmp_msg_0_0.ctrl_imp = 0.0138798429998;
    tmp_tmp_msg_0_0.rel_dir_x = 0.551514801485;
    tmp_tmp_msg_0_0.rel_dir_y = 0.550946530444;
    tmp_tmp_msg_0_0.rel_dir_z = 0.0660532612709;
    tmp_tmp_msg_0_0.err_x = 0.403691662391;
    tmp_tmp_msg_0_0.err_y = 0.767218127536;
    tmp_tmp_msg_0_0.err_z = 0.259818067201;
    tmp_tmp_msg_0_0.rf_err_x = 0.683917519474;
    tmp_tmp_msg_0_0.rf_err_y = 0.88383775235;
    tmp_tmp_msg_0_0.rf_err_z = 0.165906699882;
    tmp_tmp_msg_0_0.rf_err_vx = 0.0205774682772;
    tmp_tmp_msg_0_0.rf_err_vy = 0.387705175539;
    tmp_tmp_msg_0_0.rf_err_vz = 0.460850209141;
    tmp_tmp_msg_0_0.ss_x = 0.0694479858081;
    tmp_tmp_msg_0_0.ss_y = 0.41423564176;
    tmp_tmp_msg_0_0.ss_z = 0.852432058218;
    tmp_tmp_msg_0_0.virt_err_x = 0.75471181613;
    tmp_tmp_msg_0_0.virt_err_y = 0.330055986523;
    tmp_tmp_msg_0_0.virt_err_z = 0.483726005776;
    tmp_msg_0.rel_state.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.536257540832);
    msg.setSource(32095U);
    msg.setSourceEntity(8U);
    msg.setDestination(2665U);
    msg.setDestinationEntity(175U);
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 99U;
    tmp_msg_0.flags = 179U;
    tmp_msg_0.description.assign("QWZGUWLDUTHZQOUTEMI");
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
    msg.setTimeStamp(0.790245982975);
    msg.setSource(56417U);
    msg.setSourceEntity(186U);
    msg.setDestination(38169U);
    msg.setDestinationEntity(67U);
    msg.op = 203U;
    msg.system.assign("XABGKOYJNOIRMDLGTRMWNUHRGAKSYQXZWQWFEGCRPSTEAUXAZYOEFQAQWIMZEMJZISXELFJCPJRMHPYSTAKNNOIRKHJXHOMLTNMIVGEUPYFIYGCVJLEDAVVAHMLBTJTPNACHHUJBHIGXUCEEBUPJVTIOKPEYORDOCQDUZLCUQPMGXNKYUFKPQV");
    msg.range = 0.738629744636;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 156U;
    tmp_msg_0.id.assign("OCZTIFERXVCSXKHXCIVAPSUPACCTLOHDPYVROVTVMKLHNJCYUKJLDMTJODXZQFVNBTLSPNBVSMXLEAWUFHPBWBOKTOAAYGWMUJEYEXUFBCWEKRDRBQAIXVZOBGKUZWNITSKOLGAUFPVAADNFXYEGDJGWPFNHJCDQQHEWHMEXQRUFVZRNSTZYIBKMHEIQRDKDQPNSEIHWAUNXYGPJUGQNGSYJQOBIRMLLWLCIMQSYJFPZFBLZWIOSTZKY");
    IMC::CompressedImage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.frameid = 232U;
    const char tmp_tmp_tmp_msg_0_0_0[] = {99, -90, -76, 100, 88, -54, 126, -55, 63, 110, 18, -74, 82, 85, -125, -38, -105, -57, 45, -62, 28, 15, 52, -23, 98, 97, -22, 58, -20, -114, 97, -109, 75, 93, -88, 2, 91, -97, -49, 59, -53, -97, -105, 63, -128, 111, -121, 81, -110, -1, -52, 120, -84, -53, 104, -5, 88, 89, 124, 83, 112, 114, -15, -100, 85, -123, -57, -95, -4, 8, 87, -61, 85, -21, 118, -21, -5, -114, 58, -106, 65, -18, 8, 109, -99, -24, -93, -95, 36, -56, 11, -105, 113, -33, 64, 97, 25};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.148028674985);
    msg.setSource(15205U);
    msg.setSourceEntity(100U);
    msg.setDestination(37475U);
    msg.setDestinationEntity(149U);
    msg.op = 139U;
    msg.system.assign("ZYUBKIBLMQNWPQGJPXNYOMBVGCKLHRQSOGYBIWXLXIPAMMEWUFHUTFKARDVTMTANSTKJVUHVCLKHPSHBTBSRWLZEAMDSJEVELPEAURGVOLFQISDOBFFUZWNDQYGDHAJCHJKDJUMSPLZBHRGWCQTSYXARSOWEIOFOYRYGTIDPZLPZIGKIQXVFJBWJCVQNJOQZYWFCGCXXNAPKCFOETFRHZUMSCMUCLIYKMGTXDQXJKNZVRHWBYTRXNEDAZDA");
    msg.range = 0.555106320162;
    IMC::ClockControl tmp_msg_0;
    tmp_msg_0.op = 5U;
    tmp_msg_0.clock = 0.0893841204373;
    tmp_msg_0.tz = 121;
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
    msg.setTimeStamp(0.940929862249);
    msg.setSource(58731U);
    msg.setSourceEntity(254U);
    msg.setDestination(29222U);
    msg.setDestinationEntity(251U);
    msg.op = 209U;
    msg.system.assign("TIIPCYXVUCVTJAUZKFYYWSKQZXHVEVYUYUQDOVXWEROXTKVDDIGQAQGIEEEZAQPMNBSGFKAPKAMWPQSHQFGBPMCNWRACRDXJULJRHPUKTTLSGUZNBZMDOZNWOLTKILBNLDKMXGLAXRITIONBLIFROJFHXEJZYDRHPMAFZBFRCXSAHNBEKUAJDHJJPPHCNUJTWMVRXQHSSWHECOWISYWQQZSLESDLPZLFONYRWGVMVUFTKGFOVGC");
    msg.range = 0.797774960285;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.466506822339;
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
    msg.setTimeStamp(0.264021572949);
    msg.setSource(5700U);
    msg.setSourceEntity(243U);
    msg.setDestination(18841U);
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
    msg.setTimeStamp(0.456853084545);
    msg.setSource(35958U);
    msg.setSourceEntity(105U);
    msg.setDestination(17645U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.500870783029);
    msg.setSource(61340U);
    msg.setSourceEntity(111U);
    msg.setDestination(5797U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.312795203508);
    msg.setSource(61818U);
    msg.setSourceEntity(145U);
    msg.setDestination(61211U);
    msg.setDestinationEntity(120U);
    msg.list.assign("NUKIGBHRYDSOCQGXXNRVWPJVYYYBXQGWOFRZTTQSMTDYEJKHLPIKHDLOOJLPBJMVRPUPDEBOSUAOUWMFTZMBUHVXGNZGIYJDCHFAAPIGRGHKEOAXHMWBGSRSCRKVVPCLTVLYFCMCNCIUIQRXSINSTLCSGJZWKOIFWWQTWVAJALEEFSVTYDZFGZPPQTEFHLQHNXIAKLREAQSYZBMFCDJMUXKMQ");

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
    msg.setTimeStamp(0.765394709775);
    msg.setSource(13129U);
    msg.setSourceEntity(102U);
    msg.setDestination(21006U);
    msg.setDestinationEntity(89U);
    msg.list.assign("EEEEHWFHWBLGRNUTSWOGPRQPPLDGIAHQJTRGJOPAYXYVQICEQEPISCDJLBMLMLHLZIWRQAULNFECWTDBCRRJJUSKOEZLKSMOJTRLSIBQTDMTZUTZVCNKPZAMANGFBASHVVELHQSNIYCYPGRNMKXFUCYDCXGYBCZMUMEDKQVPBCFUQWODRGXYHTGNJBVIXJBOKUSOWKNYSUZUZXVNFWZPWFFDJAMDFKNMIH");

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
    msg.setTimeStamp(0.723617585328);
    msg.setSource(60334U);
    msg.setSourceEntity(227U);
    msg.setDestination(53089U);
    msg.setDestinationEntity(60U);
    msg.list.assign("BTUOUUJTZDDMBCPFQPBRCJQSONPDISYFLVKWTTXVFWUABLCNL");

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
    msg.setTimeStamp(0.494920907012);
    msg.setSource(60742U);
    msg.setSourceEntity(141U);
    msg.setDestination(44089U);
    msg.setDestinationEntity(254U);
    msg.value = -10427;

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
    msg.setTimeStamp(0.333344640497);
    msg.setSource(28673U);
    msg.setSourceEntity(132U);
    msg.setDestination(35773U);
    msg.setDestinationEntity(218U);
    msg.value = 30872;

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
    msg.setTimeStamp(0.142932008626);
    msg.setSource(34600U);
    msg.setSourceEntity(55U);
    msg.setDestination(30627U);
    msg.setDestinationEntity(66U);
    msg.value = 26807;

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
    msg.setTimeStamp(0.216844753576);
    msg.setSource(12599U);
    msg.setSourceEntity(181U);
    msg.setDestination(58337U);
    msg.setDestinationEntity(230U);
    msg.value = 0.224005911544;

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
    msg.setTimeStamp(0.640775554345);
    msg.setSource(38511U);
    msg.setSourceEntity(154U);
    msg.setDestination(7179U);
    msg.setDestinationEntity(17U);
    msg.value = 0.0977046537299;

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
    msg.setTimeStamp(0.311106614827);
    msg.setSource(43509U);
    msg.setSourceEntity(37U);
    msg.setDestination(45316U);
    msg.setDestinationEntity(201U);
    msg.value = 0.640858839475;

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
    msg.setTimeStamp(0.571751289423);
    msg.setSource(1050U);
    msg.setSourceEntity(248U);
    msg.setDestination(46605U);
    msg.setDestinationEntity(208U);
    msg.value = 0.0547645555244;

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
    msg.setTimeStamp(0.980755233462);
    msg.setSource(41707U);
    msg.setSourceEntity(120U);
    msg.setDestination(14054U);
    msg.setDestinationEntity(221U);
    msg.value = 0.48533912193;

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
    msg.setTimeStamp(0.30580490285);
    msg.setSource(24508U);
    msg.setSourceEntity(102U);
    msg.setDestination(16479U);
    msg.setDestinationEntity(68U);
    msg.value = 0.0116834000032;

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
    msg.setTimeStamp(0.867710752877);
    msg.setSource(13029U);
    msg.setSourceEntity(116U);
    msg.setDestination(49656U);
    msg.setDestinationEntity(191U);
    msg.validity = 54540U;
    msg.type = 245U;
    msg.utc_year = 60604U;
    msg.utc_month = 105U;
    msg.utc_day = 241U;
    msg.utc_time = 0.813091592253;
    msg.lat = 0.28897080798;
    msg.lon = 0.117979927864;
    msg.height = 0.745781272648;
    msg.satellites = 89U;
    msg.cog = 0.548464517388;
    msg.sog = 0.756628042882;
    msg.hdop = 0.494787853842;
    msg.vdop = 0.0933443979225;
    msg.hacc = 0.193499225951;
    msg.vacc = 0.629470527028;

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
    msg.setTimeStamp(0.208185406749);
    msg.setSource(1125U);
    msg.setSourceEntity(75U);
    msg.setDestination(64430U);
    msg.setDestinationEntity(60U);
    msg.validity = 41676U;
    msg.type = 130U;
    msg.utc_year = 59917U;
    msg.utc_month = 196U;
    msg.utc_day = 171U;
    msg.utc_time = 0.812417195461;
    msg.lat = 0.33097237482;
    msg.lon = 0.835412518438;
    msg.height = 0.861544154261;
    msg.satellites = 11U;
    msg.cog = 0.605079359863;
    msg.sog = 0.264159347695;
    msg.hdop = 0.267035982565;
    msg.vdop = 0.64003677913;
    msg.hacc = 0.232231510412;
    msg.vacc = 0.140360984189;

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
    msg.setTimeStamp(0.77869624432);
    msg.setSource(53454U);
    msg.setSourceEntity(61U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(119U);
    msg.validity = 48596U;
    msg.type = 118U;
    msg.utc_year = 57032U;
    msg.utc_month = 195U;
    msg.utc_day = 193U;
    msg.utc_time = 0.779358712821;
    msg.lat = 0.773806185389;
    msg.lon = 0.972600200218;
    msg.height = 0.105321420547;
    msg.satellites = 68U;
    msg.cog = 0.457808410511;
    msg.sog = 0.202866969011;
    msg.hdop = 0.987654125242;
    msg.vdop = 0.116523293742;
    msg.hacc = 0.412477003267;
    msg.vacc = 0.656117927806;

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
    msg.setTimeStamp(0.356862243954);
    msg.setSource(49708U);
    msg.setSourceEntity(25U);
    msg.setDestination(19542U);
    msg.setDestinationEntity(57U);
    msg.time = 0.274575863936;
    msg.phi = 0.393135673185;
    msg.theta = 0.880971417773;
    msg.psi = 0.694812389403;
    msg.psi_magnetic = 0.373737364434;

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
    msg.setTimeStamp(0.580567263158);
    msg.setSource(39697U);
    msg.setSourceEntity(3U);
    msg.setDestination(42250U);
    msg.setDestinationEntity(57U);
    msg.time = 0.966203915528;
    msg.phi = 0.450195396351;
    msg.theta = 0.938496015977;
    msg.psi = 0.205633616378;
    msg.psi_magnetic = 0.237494779603;

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
    msg.setTimeStamp(0.656363698655);
    msg.setSource(6692U);
    msg.setSourceEntity(37U);
    msg.setDestination(43057U);
    msg.setDestinationEntity(250U);
    msg.time = 0.119794673547;
    msg.phi = 0.121196961348;
    msg.theta = 0.877205501202;
    msg.psi = 0.609280024204;
    msg.psi_magnetic = 0.692009122934;

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
    msg.setTimeStamp(0.201908458218);
    msg.setSource(41070U);
    msg.setSourceEntity(167U);
    msg.setDestination(61297U);
    msg.setDestinationEntity(251U);
    msg.time = 0.936900526863;
    msg.x = 0.410254389104;
    msg.y = 0.25611700568;
    msg.z = 0.947350413293;
    msg.timestep = 0.222492030618;

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
    msg.setTimeStamp(0.552630071134);
    msg.setSource(3667U);
    msg.setSourceEntity(149U);
    msg.setDestination(21791U);
    msg.setDestinationEntity(115U);
    msg.time = 0.462655506007;
    msg.x = 0.784587909242;
    msg.y = 0.828553745377;
    msg.z = 0.442355282085;
    msg.timestep = 0.821127258695;

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
    msg.setTimeStamp(0.145907074627);
    msg.setSource(29750U);
    msg.setSourceEntity(132U);
    msg.setDestination(20282U);
    msg.setDestinationEntity(99U);
    msg.time = 0.335785772828;
    msg.x = 0.686617065147;
    msg.y = 0.997960028319;
    msg.z = 0.837458463118;
    msg.timestep = 0.591282261969;

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
    msg.setTimeStamp(0.893415925732);
    msg.setSource(44208U);
    msg.setSourceEntity(25U);
    msg.setDestination(923U);
    msg.setDestinationEntity(175U);
    msg.time = 0.214892215966;
    msg.x = 0.382951142276;
    msg.y = 0.941182741252;
    msg.z = 0.0824884815198;

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
    msg.setTimeStamp(0.202676147697);
    msg.setSource(24350U);
    msg.setSourceEntity(149U);
    msg.setDestination(53499U);
    msg.setDestinationEntity(77U);
    msg.time = 0.39858831429;
    msg.x = 0.402358976367;
    msg.y = 0.96695610302;
    msg.z = 0.720050131003;

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
    msg.setTimeStamp(0.493127500825);
    msg.setSource(33149U);
    msg.setSourceEntity(95U);
    msg.setDestination(28405U);
    msg.setDestinationEntity(72U);
    msg.time = 0.47914201499;
    msg.x = 0.0384532142372;
    msg.y = 0.23286622777;
    msg.z = 0.975087757218;

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
    msg.setTimeStamp(0.23025775139);
    msg.setSource(57241U);
    msg.setSourceEntity(19U);
    msg.setDestination(6127U);
    msg.setDestinationEntity(194U);
    msg.time = 0.344407207189;
    msg.x = 0.896937940344;
    msg.y = 0.573056298191;
    msg.z = 0.657039850932;

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
    msg.setTimeStamp(0.158888652261);
    msg.setSource(60830U);
    msg.setSourceEntity(195U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(125U);
    msg.time = 0.441724857897;
    msg.x = 0.653619105197;
    msg.y = 0.852947853207;
    msg.z = 0.25440008142;

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
    msg.setTimeStamp(0.439496825716);
    msg.setSource(37221U);
    msg.setSourceEntity(72U);
    msg.setDestination(62578U);
    msg.setDestinationEntity(32U);
    msg.time = 0.047446636356;
    msg.x = 0.119037817345;
    msg.y = 0.0287124766489;
    msg.z = 0.728689156587;

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
    msg.setTimeStamp(0.975108448798);
    msg.setSource(37748U);
    msg.setSourceEntity(236U);
    msg.setDestination(36816U);
    msg.setDestinationEntity(130U);
    msg.time = 0.496602518449;
    msg.x = 0.0500593327436;
    msg.y = 0.947501721171;
    msg.z = 0.873121795687;

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
    msg.setTimeStamp(0.159376589545);
    msg.setSource(24281U);
    msg.setSourceEntity(196U);
    msg.setDestination(28205U);
    msg.setDestinationEntity(120U);
    msg.time = 0.114388031286;
    msg.x = 0.260304323674;
    msg.y = 0.106900267403;
    msg.z = 0.380636294903;

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
    msg.setTimeStamp(0.214462491937);
    msg.setSource(42198U);
    msg.setSourceEntity(222U);
    msg.setDestination(63437U);
    msg.setDestinationEntity(241U);
    msg.time = 0.365969925337;
    msg.x = 0.773891666802;
    msg.y = 0.544918239652;
    msg.z = 0.635562359976;

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
    msg.setTimeStamp(0.833816290968);
    msg.setSource(30584U);
    msg.setSourceEntity(107U);
    msg.setDestination(24433U);
    msg.setDestinationEntity(118U);
    msg.validity = 27U;
    msg.x = 0.837857717688;
    msg.y = 0.261961784686;
    msg.z = 0.953742326968;

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
    msg.setTimeStamp(0.870581930853);
    msg.setSource(8438U);
    msg.setSourceEntity(151U);
    msg.setDestination(29750U);
    msg.setDestinationEntity(27U);
    msg.validity = 68U;
    msg.x = 0.925404918043;
    msg.y = 0.91553888706;
    msg.z = 0.572678793734;

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
    msg.setTimeStamp(0.586773023076);
    msg.setSource(58207U);
    msg.setSourceEntity(182U);
    msg.setDestination(29448U);
    msg.setDestinationEntity(34U);
    msg.validity = 19U;
    msg.x = 0.405266386314;
    msg.y = 0.0877739229974;
    msg.z = 0.442691868818;

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
    msg.setTimeStamp(0.910100630307);
    msg.setSource(25100U);
    msg.setSourceEntity(8U);
    msg.setDestination(46668U);
    msg.setDestinationEntity(240U);
    msg.validity = 213U;
    msg.x = 0.664615064368;
    msg.y = 0.829999901683;
    msg.z = 0.427612819819;

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
    msg.setTimeStamp(0.88344010102);
    msg.setSource(16868U);
    msg.setSourceEntity(109U);
    msg.setDestination(25382U);
    msg.setDestinationEntity(141U);
    msg.validity = 91U;
    msg.x = 0.942804359743;
    msg.y = 0.731229566139;
    msg.z = 0.550249524697;

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
    msg.setTimeStamp(0.987191716075);
    msg.setSource(21205U);
    msg.setSourceEntity(102U);
    msg.setDestination(38304U);
    msg.setDestinationEntity(111U);
    msg.validity = 61U;
    msg.x = 0.00948751647939;
    msg.y = 0.168833732905;
    msg.z = 0.739457939278;

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
    msg.setTimeStamp(0.209258170742);
    msg.setSource(36199U);
    msg.setSourceEntity(183U);
    msg.setDestination(33696U);
    msg.setDestinationEntity(152U);
    msg.time = 0.237818099129;
    msg.x = 0.38491787749;
    msg.y = 0.989364505147;
    msg.z = 0.761244810385;

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
    msg.setTimeStamp(0.350629505943);
    msg.setSource(41196U);
    msg.setSourceEntity(104U);
    msg.setDestination(44262U);
    msg.setDestinationEntity(115U);
    msg.time = 0.923663361165;
    msg.x = 0.346326239102;
    msg.y = 0.140587132842;
    msg.z = 0.273601770673;

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
    msg.setTimeStamp(0.977670717422);
    msg.setSource(64797U);
    msg.setSourceEntity(70U);
    msg.setDestination(25775U);
    msg.setDestinationEntity(44U);
    msg.time = 0.503077293888;
    msg.x = 0.33663848097;
    msg.y = 0.67250568743;
    msg.z = 0.0856392500784;

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
    msg.setTimeStamp(0.497867927403);
    msg.setSource(33861U);
    msg.setSourceEntity(97U);
    msg.setDestination(1512U);
    msg.setDestinationEntity(252U);
    msg.validity = 136U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0144160298639;
    tmp_msg_0.y = 0.209025564435;
    tmp_msg_0.z = 0.302864225482;
    tmp_msg_0.phi = 0.658401280226;
    tmp_msg_0.theta = 0.277382230626;
    tmp_msg_0.psi = 0.314833746892;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.893776318428;
    tmp_msg_1.beam_height = 0.630899078804;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.30964999951;

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
    msg.setTimeStamp(0.598101903876);
    msg.setSource(11930U);
    msg.setSourceEntity(186U);
    msg.setDestination(48706U);
    msg.setDestinationEntity(88U);
    msg.validity = 33U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.514110523377;
    tmp_msg_0.y = 0.104368022821;
    tmp_msg_0.z = 0.675822689972;
    tmp_msg_0.phi = 0.207597710216;
    tmp_msg_0.theta = 0.712508311579;
    tmp_msg_0.psi = 0.313189937601;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.831427454337;

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
    msg.setTimeStamp(0.467493133127);
    msg.setSource(48211U);
    msg.setSourceEntity(185U);
    msg.setDestination(37566U);
    msg.setDestinationEntity(175U);
    msg.validity = 96U;
    msg.value = 0.0391579466016;

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
    msg.setTimeStamp(0.498996486356);
    msg.setSource(49106U);
    msg.setSourceEntity(7U);
    msg.setDestination(47307U);
    msg.setDestinationEntity(227U);
    msg.value = 0.578821552954;

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
    msg.setTimeStamp(0.362216156598);
    msg.setSource(5069U);
    msg.setSourceEntity(149U);
    msg.setDestination(17984U);
    msg.setDestinationEntity(47U);
    msg.value = 0.0788816149586;

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
    msg.setTimeStamp(0.42726970888);
    msg.setSource(46845U);
    msg.setSourceEntity(119U);
    msg.setDestination(36204U);
    msg.setDestinationEntity(183U);
    msg.value = 0.971874965333;

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
    msg.setTimeStamp(0.0237818654072);
    msg.setSource(1525U);
    msg.setSourceEntity(223U);
    msg.setDestination(13102U);
    msg.setDestinationEntity(234U);
    msg.value = 0.312588151062;

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
    msg.setTimeStamp(0.282985429749);
    msg.setSource(39614U);
    msg.setSourceEntity(19U);
    msg.setDestination(22990U);
    msg.setDestinationEntity(235U);
    msg.value = 0.690468617993;

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
    msg.setTimeStamp(0.954657795619);
    msg.setSource(44199U);
    msg.setSourceEntity(167U);
    msg.setDestination(32991U);
    msg.setDestinationEntity(222U);
    msg.value = 0.256002726179;

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
    msg.setTimeStamp(0.360560393599);
    msg.setSource(59461U);
    msg.setSourceEntity(232U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(49U);
    msg.value = 0.55811517169;

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
    msg.setTimeStamp(0.358932796368);
    msg.setSource(54629U);
    msg.setSourceEntity(214U);
    msg.setDestination(27987U);
    msg.setDestinationEntity(4U);
    msg.value = 0.0272842403671;

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
    msg.setTimeStamp(0.48214128405);
    msg.setSource(4654U);
    msg.setSourceEntity(62U);
    msg.setDestination(18021U);
    msg.setDestinationEntity(81U);
    msg.value = 0.269853209362;

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
    msg.setTimeStamp(0.493934924613);
    msg.setSource(54583U);
    msg.setSourceEntity(168U);
    msg.setDestination(26449U);
    msg.setDestinationEntity(111U);
    msg.value = 0.855516578126;

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
    msg.setTimeStamp(0.583810972592);
    msg.setSource(64338U);
    msg.setSourceEntity(179U);
    msg.setDestination(53029U);
    msg.setDestinationEntity(97U);
    msg.value = 0.818091441321;

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
    msg.setTimeStamp(0.943826589828);
    msg.setSource(25430U);
    msg.setSourceEntity(177U);
    msg.setDestination(13324U);
    msg.setDestinationEntity(153U);
    msg.value = 0.566301044518;

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
    msg.setTimeStamp(0.881313767074);
    msg.setSource(36401U);
    msg.setSourceEntity(99U);
    msg.setDestination(2030U);
    msg.setDestinationEntity(184U);
    msg.value = 0.703225573504;

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
    msg.setTimeStamp(0.276199337593);
    msg.setSource(46857U);
    msg.setSourceEntity(184U);
    msg.setDestination(11003U);
    msg.setDestinationEntity(251U);
    msg.value = 0.149402544124;

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
    msg.setTimeStamp(0.176647340816);
    msg.setSource(63909U);
    msg.setSourceEntity(90U);
    msg.setDestination(43790U);
    msg.setDestinationEntity(89U);
    msg.value = 0.432156239838;

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
    msg.setTimeStamp(0.794002094878);
    msg.setSource(51477U);
    msg.setSourceEntity(168U);
    msg.setDestination(55981U);
    msg.setDestinationEntity(145U);
    msg.value = 0.68767397623;

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
    msg.setTimeStamp(0.0611803160233);
    msg.setSource(49426U);
    msg.setSourceEntity(44U);
    msg.setDestination(25944U);
    msg.setDestinationEntity(50U);
    msg.value = 0.633562748997;

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
    msg.setTimeStamp(0.997189211424);
    msg.setSource(39809U);
    msg.setSourceEntity(155U);
    msg.setDestination(35549U);
    msg.setDestinationEntity(149U);
    msg.value = 0.136290755208;

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
    msg.setTimeStamp(0.887219261992);
    msg.setSource(61413U);
    msg.setSourceEntity(148U);
    msg.setDestination(26211U);
    msg.setDestinationEntity(121U);
    msg.value = 0.632249468014;

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
    msg.setTimeStamp(0.636534509125);
    msg.setSource(62140U);
    msg.setSourceEntity(224U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(162U);
    msg.value = 0.0468146409315;

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
    msg.setTimeStamp(0.898334210072);
    msg.setSource(13149U);
    msg.setSourceEntity(230U);
    msg.setDestination(6388U);
    msg.setDestinationEntity(100U);
    msg.value = 0.96675593447;

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
    msg.setTimeStamp(0.13919389938);
    msg.setSource(47527U);
    msg.setSourceEntity(246U);
    msg.setDestination(29648U);
    msg.setDestinationEntity(82U);
    msg.value = 0.170873354529;

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
    msg.setTimeStamp(0.918230899325);
    msg.setSource(24490U);
    msg.setSourceEntity(1U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(192U);
    msg.value = 0.172939042639;

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
    msg.setTimeStamp(0.167058165839);
    msg.setSource(4970U);
    msg.setSourceEntity(160U);
    msg.setDestination(22864U);
    msg.setDestinationEntity(100U);
    msg.value = 0.313845936562;

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
    msg.setTimeStamp(0.381879014992);
    msg.setSource(25523U);
    msg.setSourceEntity(207U);
    msg.setDestination(47738U);
    msg.setDestinationEntity(178U);
    msg.direction = 0.692856611664;
    msg.speed = 0.885371566734;
    msg.turbulence = 0.45627190226;

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
    msg.setTimeStamp(0.24964430183);
    msg.setSource(12642U);
    msg.setSourceEntity(85U);
    msg.setDestination(53748U);
    msg.setDestinationEntity(161U);
    msg.direction = 0.242195841676;
    msg.speed = 0.279750591832;
    msg.turbulence = 0.370120141015;

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
    msg.setTimeStamp(0.568415878926);
    msg.setSource(36027U);
    msg.setSourceEntity(180U);
    msg.setDestination(47003U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.751897130852;
    msg.speed = 0.871915086388;
    msg.turbulence = 0.0607078736377;

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
    msg.setTimeStamp(0.977724631379);
    msg.setSource(41058U);
    msg.setSourceEntity(33U);
    msg.setDestination(42297U);
    msg.setDestinationEntity(198U);
    msg.value = 0.583614587481;

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
    msg.setTimeStamp(0.0411419225287);
    msg.setSource(15360U);
    msg.setSourceEntity(143U);
    msg.setDestination(23837U);
    msg.setDestinationEntity(51U);
    msg.value = 0.300775502923;

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
    msg.setTimeStamp(0.212918543262);
    msg.setSource(48555U);
    msg.setSourceEntity(176U);
    msg.setDestination(36585U);
    msg.setDestinationEntity(16U);
    msg.value = 0.230267761271;

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
    msg.setTimeStamp(0.0843837245395);
    msg.setSource(61917U);
    msg.setSourceEntity(150U);
    msg.setDestination(409U);
    msg.setDestinationEntity(174U);
    msg.value.assign("BQYQKZVTNZAOSVNJPGIBQBJSVECXDZRATKPMLFWSWQAFRZAPPEEHTIASDXVTYBGFJHVSPBFAVYXIOLJPARCLLGMLCRMUHIZBKWCSQOIEYXKQFXNMHXCZLVNYCQCYOGTAXCERGIWDUNDNXTGQOOKAVMVWMXEREDBSDJYJOSKUQFZMRKBYHBRLPOFLUDUWHJNMPZFZUNBKDIHWFWSUDTCKLUTNVMGIMHUGHPDOATIQWJYECFJKTZIUXEN");

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
    msg.setTimeStamp(0.0113172588454);
    msg.setSource(13316U);
    msg.setSourceEntity(26U);
    msg.setDestination(178U);
    msg.setDestinationEntity(40U);
    msg.value.assign("BXMEYQXDHETRAWNSXLRREHJGZAGDMICWKQRPCWAAIIPUAUYLNTGFHVIKZFKCQJHUSCCPSJNTFIXGYBISCDDKTNUHZGVXHDMRFQVRPRMOIBVVDYEOYBZLOFEQQBZMELWOASWETSQOBGSPTXZFUGPOLFXLATYVTICVGYOXJUVXEWFRUNKDOSRMXTBAFNZNIOYKQDPYQMKUWVHCCQSMAOKNTEVLZP");

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
    msg.setTimeStamp(0.237266071152);
    msg.setSource(37293U);
    msg.setSourceEntity(228U);
    msg.setDestination(47486U);
    msg.setDestinationEntity(209U);
    msg.value.assign("WTFADSJJSJYHBJEPEGIMEWNHBBRZIOFHJFJPARYDHOYYJZKNNHCXUCKTBCRIQCFGQAMZGYGFGRLNRLADHNG");

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
    msg.setTimeStamp(0.0324185177242);
    msg.setSource(17551U);
    msg.setSourceEntity(249U);
    msg.setDestination(31739U);
    msg.setDestinationEntity(168U);
    const char tmp_msg_0[] = {-33, 102, -124, -29, 48, -19, 110, 124, -7, -8, -90, 119, -34, 71, -57, -119, 91, -35, 117, 35, 71, 5, -51, -4, -79, -69, 16, -76, 64, -127, 121, -88, -74, -25, 1, -3, 118, 8, -19, -19, -100, 111, -11, 48, -52, 53, -100, -12, 46, -44, -63, -128, 110, 109, 83, -43, 95, 71, 32, -72, -17, 96, -69, 38, -41, -33};
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
    msg.setTimeStamp(0.359826516492);
    msg.setSource(26862U);
    msg.setSourceEntity(111U);
    msg.setDestination(63131U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {59, -75, 62, -20, 86, -84, -25, 38, 14, 54, 122, -99, 86, -82, -88, -21, 118, -36, -88, 1, 120, -27, 6, 96, 51, -114, -126, 23, -58, 39, -30, 95, -107, -46, -102, -19, 126, 88, -104, -68, -99, -26, 36, 31, -44, -73, -34, 108, 15, 94, -60, 113, -97, 5, 74, 0, 8, -52, -41, 10, -67, 85, 101, 102, 82, 27, 7, -7, 51, -92, -6, -53, -57, -41, 55, 113, 21, 12, -44, 86, -118, -65, 31, -31, -41, -29, 39, 123, -20, -96, 71, -50};
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
    msg.setTimeStamp(0.430461484111);
    msg.setSource(35775U);
    msg.setSourceEntity(183U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(194U);
    const char tmp_msg_0[] = {-109, 38, -92, 52, 91, 51, -77, -43, 22, 63, -48, 64, 120, 11, -60, 113, 58, 32, -21};
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
    msg.setTimeStamp(0.542853954961);
    msg.setSource(39963U);
    msg.setSourceEntity(70U);
    msg.setDestination(25604U);
    msg.setDestinationEntity(103U);
    msg.type = 40U;
    msg.frequency = 3979856396U;
    msg.min_range = 4901U;
    msg.max_range = 37799U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.27089000839;
    const char tmp_msg_0[] = {60, -38, 28, 27, 89, -106, -73, -3, 96, -12, 64, 46, 100, 19, -11, 97, 108, 114, -62, 113, -30, -11, -79, -125, 93, -114, -39, 109, 87, 117, 34, 37, -84, -100, -74, 21, 106, 59, -122, -51, -4, 31, 69, -18, 10, -12, -67, 25, -77, -7, -10, -2, -67, 6, -85, -12, -7, -39, 107, -38, 60, 57, 26, 64, -28, 50, 58, -33, -121, 31, -19, 29, 65, -46, -97, -4, 34, 2, -102, 0, 106, -66, -74, 106, 68, 50, -9, 70, -96, -84, 79, 122, 102, -71, -124, -101, 125, 112, -93, 50, -94, -71, -55, -110, 99, -53, 4, -89, -16, -21, -73, 121, -77, -54, -57, 16, 93, 23, -26, -40, 27, 92, 29, 75, -26, -90, -37, 100, -116, -114, -39, 83, -77, 112, 85, -98, 13, 82, -17, 82, -93, 96, 15, 94, 27, 119, 42, 86, -110, 23, -109, -67, 77, 117, 76, 37, -83, -18, 40, -45, 105, 111, -123, 41, -86};
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
    msg.setTimeStamp(0.17693188213);
    msg.setSource(14038U);
    msg.setSourceEntity(243U);
    msg.setDestination(3597U);
    msg.setDestinationEntity(71U);
    msg.type = 159U;
    msg.frequency = 1766342630U;
    msg.min_range = 11861U;
    msg.max_range = 52827U;
    msg.bits_per_point = 169U;
    msg.scale_factor = 0.500060290428;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.580013021639;
    tmp_msg_0.beam_height = 0.866590932527;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-102, 94, -125, -47, -78, 119, 105, 85, -12, -109, -126, 63, 91, 119, -62, -50, -15, -28, 1, 92, -22, 62, 38, -119, -58, 23, 100};
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
    msg.setTimeStamp(0.974683039518);
    msg.setSource(12794U);
    msg.setSourceEntity(5U);
    msg.setDestination(21126U);
    msg.setDestinationEntity(167U);
    msg.type = 165U;
    msg.frequency = 917912175U;
    msg.min_range = 3661U;
    msg.max_range = 62592U;
    msg.bits_per_point = 25U;
    msg.scale_factor = 0.28879151948;
    const char tmp_msg_0[] = {71, 1, 69, 121, -68, 114, -6, -73, 95, 126, -95, 103, -77, -36, 41, -31, -53, -65, -86, 38, -10, -70, -19, 11, -101, 116, 41, -101, 74, 106, 14, -123, 24, 28, -42, 82, 11, 76, 82, 1, -64, 31, -76, -17, -40, -13};
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
    msg.setTimeStamp(0.293102456831);
    msg.setSource(30669U);
    msg.setSourceEntity(0U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.179375314302);
    msg.setSource(3644U);
    msg.setSourceEntity(137U);
    msg.setDestination(8939U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.333760423169);
    msg.setSource(62729U);
    msg.setSourceEntity(58U);
    msg.setDestination(64562U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.077315634512);
    msg.setSource(63247U);
    msg.setSourceEntity(8U);
    msg.setDestination(33697U);
    msg.setDestinationEntity(20U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.743159641118);
    msg.setSource(3370U);
    msg.setSourceEntity(173U);
    msg.setDestination(6234U);
    msg.setDestinationEntity(66U);
    msg.op = 119U;

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
    msg.setTimeStamp(0.190289333688);
    msg.setSource(26529U);
    msg.setSourceEntity(4U);
    msg.setDestination(60168U);
    msg.setDestinationEntity(102U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.935395057341);
    msg.setSource(45060U);
    msg.setSourceEntity(33U);
    msg.setDestination(42445U);
    msg.setDestinationEntity(204U);
    msg.value = 0.591817838722;
    msg.confidence = 0.961833544147;
    msg.opmodes.assign("WBMCROUTORMKVFYJDYSNWUVKAUGPDWPNZZQFZEMHRKVGFMEQYAAJAWCQEDPPKVOJOSVRABOLJLBWINTDOWDKABQFHQHKGAZXDYMLEKZDYGJQHTWGLYNVMCILZFSMXRYIJUPABRESVGTKNSIAPDCJCBUPCKWJTYLCYFHZFCTXEOIEMIZUXDVNRNIVBTQPCLUBOGNXMPJMSZOEVPLHJUUXXTXREYGFIBGIFGQUESRDSXTHZWLNLSRBFKQOXHIA");

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
    msg.setTimeStamp(0.00750832292009);
    msg.setSource(17121U);
    msg.setSourceEntity(123U);
    msg.setDestination(10507U);
    msg.setDestinationEntity(216U);
    msg.value = 0.605367270872;
    msg.confidence = 0.177426783484;
    msg.opmodes.assign("NWGFHEAKEDWURXJUBBWCCKSYAGRPFTIPHMEMKEX");

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
    msg.setTimeStamp(0.827184513049);
    msg.setSource(17784U);
    msg.setSourceEntity(111U);
    msg.setDestination(31379U);
    msg.setDestinationEntity(79U);
    msg.value = 0.235655643483;
    msg.confidence = 0.231527712841;
    msg.opmodes.assign("LTMOIIOVXXLQBCFGNMGZHRHWSEPKJGYECITDLUTHQYDRMFNCIDLPDZBKTWAXERVSSRAKTMGXUTLEPRPBIOEJFWFLWHWTFUMDYDZDBTZVJBVUAPQCCXIMAGJVUIASQVHENTIKOWRJVMYKNSSSCLJQBNYSZZMLIGAJGECQNPKLMUZAROZUPREBUGFZCWKPKKHWWKVOPCNEFSHPDAOGHXYFYQLYXVZIXRRCYBUMHHWQXBTAF");

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
    msg.setTimeStamp(0.14820779091);
    msg.setSource(14455U);
    msg.setSourceEntity(151U);
    msg.setDestination(4346U);
    msg.setDestinationEntity(37U);
    msg.itow = 1896031909U;
    msg.lat = 0.218370675601;
    msg.lon = 0.638258068623;
    msg.height_ell = 0.0676168528184;
    msg.height_sea = 0.262552530788;
    msg.hacc = 0.309789498646;
    msg.vacc = 0.313324227353;
    msg.vel_n = 0.849586969099;
    msg.vel_e = 0.679893175192;
    msg.vel_d = 0.256381116858;
    msg.speed = 0.90713686011;
    msg.gspeed = 0.95876762459;
    msg.heading = 0.394739406562;
    msg.sacc = 0.872045306079;
    msg.cacc = 0.211735493477;

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
    msg.setTimeStamp(0.665751325291);
    msg.setSource(6517U);
    msg.setSourceEntity(130U);
    msg.setDestination(22953U);
    msg.setDestinationEntity(57U);
    msg.itow = 2627852542U;
    msg.lat = 0.173267822784;
    msg.lon = 0.19119906427;
    msg.height_ell = 0.780427073782;
    msg.height_sea = 0.119200386733;
    msg.hacc = 0.834563760162;
    msg.vacc = 0.665287973608;
    msg.vel_n = 0.881129905904;
    msg.vel_e = 0.419153446326;
    msg.vel_d = 0.830418755832;
    msg.speed = 0.143612249912;
    msg.gspeed = 0.85726037951;
    msg.heading = 0.148156027017;
    msg.sacc = 0.734749714773;
    msg.cacc = 0.977869178594;

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
    msg.setTimeStamp(0.595528705297);
    msg.setSource(26722U);
    msg.setSourceEntity(250U);
    msg.setDestination(63694U);
    msg.setDestinationEntity(4U);
    msg.itow = 3904056378U;
    msg.lat = 0.835580573917;
    msg.lon = 0.115928845293;
    msg.height_ell = 0.848834787797;
    msg.height_sea = 0.52090574063;
    msg.hacc = 0.337713557469;
    msg.vacc = 0.608663508658;
    msg.vel_n = 0.421587450294;
    msg.vel_e = 0.333681842748;
    msg.vel_d = 0.211959302986;
    msg.speed = 0.728229583028;
    msg.gspeed = 0.498819001814;
    msg.heading = 0.0929097381632;
    msg.sacc = 0.0556374477297;
    msg.cacc = 0.549213486837;

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
    msg.setTimeStamp(0.701580474085);
    msg.setSource(49378U);
    msg.setSourceEntity(94U);
    msg.setDestination(32941U);
    msg.setDestinationEntity(44U);
    msg.id = 52U;
    msg.value = 0.344640021991;

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
    msg.setTimeStamp(0.797716565152);
    msg.setSource(60810U);
    msg.setSourceEntity(143U);
    msg.setDestination(46949U);
    msg.setDestinationEntity(66U);
    msg.id = 224U;
    msg.value = 0.709361288888;

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
    msg.setTimeStamp(0.754236674386);
    msg.setSource(50476U);
    msg.setSourceEntity(228U);
    msg.setDestination(55270U);
    msg.setDestinationEntity(158U);
    msg.id = 216U;
    msg.value = 0.572934878307;

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
    msg.setTimeStamp(0.848906666789);
    msg.setSource(1032U);
    msg.setSourceEntity(54U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(93U);
    msg.x = 0.790476285969;
    msg.y = 0.467373035191;
    msg.z = 0.70279430296;
    msg.phi = 0.519694745198;
    msg.theta = 0.435783186335;
    msg.psi = 0.381992819334;

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
    msg.setTimeStamp(0.371607911212);
    msg.setSource(57683U);
    msg.setSourceEntity(210U);
    msg.setDestination(22366U);
    msg.setDestinationEntity(118U);
    msg.x = 0.778404041611;
    msg.y = 0.328506139204;
    msg.z = 0.0219156147644;
    msg.phi = 0.0498513752334;
    msg.theta = 0.824876895568;
    msg.psi = 0.837116654762;

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
    msg.setTimeStamp(0.0768323327419);
    msg.setSource(50541U);
    msg.setSourceEntity(197U);
    msg.setDestination(39156U);
    msg.setDestinationEntity(209U);
    msg.x = 0.882632055383;
    msg.y = 0.194228304434;
    msg.z = 0.302442736144;
    msg.phi = 0.926132550328;
    msg.theta = 0.928911409462;
    msg.psi = 0.655538081735;

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
    msg.setTimeStamp(0.88772756622);
    msg.setSource(17164U);
    msg.setSourceEntity(167U);
    msg.setDestination(34360U);
    msg.setDestinationEntity(145U);
    msg.beam_width = 0.102701543821;
    msg.beam_height = 0.695874214177;

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
    msg.setTimeStamp(0.150398981193);
    msg.setSource(22803U);
    msg.setSourceEntity(4U);
    msg.setDestination(57221U);
    msg.setDestinationEntity(95U);
    msg.beam_width = 0.164921953762;
    msg.beam_height = 0.538276272942;

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
    msg.setTimeStamp(0.372703469645);
    msg.setSource(23432U);
    msg.setSourceEntity(142U);
    msg.setDestination(19872U);
    msg.setDestinationEntity(245U);
    msg.beam_width = 0.119504300354;
    msg.beam_height = 0.206729232021;

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
    msg.setTimeStamp(0.5324845483);
    msg.setSource(37607U);
    msg.setSourceEntity(227U);
    msg.setDestination(29754U);
    msg.setDestinationEntity(68U);
    msg.sane = 124U;

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
    msg.setTimeStamp(0.161077765148);
    msg.setSource(4520U);
    msg.setSourceEntity(30U);
    msg.setDestination(48668U);
    msg.setDestinationEntity(126U);
    msg.sane = 35U;

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
    msg.setTimeStamp(0.279818935497);
    msg.setSource(23513U);
    msg.setSourceEntity(145U);
    msg.setDestination(20314U);
    msg.setDestinationEntity(100U);
    msg.sane = 198U;

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
    msg.setTimeStamp(0.64858787571);
    msg.setSource(48027U);
    msg.setSourceEntity(42U);
    msg.setDestination(16741U);
    msg.setDestinationEntity(154U);
    msg.value = 0.690692859461;

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
    msg.setTimeStamp(0.937469449923);
    msg.setSource(26457U);
    msg.setSourceEntity(95U);
    msg.setDestination(54576U);
    msg.setDestinationEntity(37U);
    msg.value = 0.97272909133;

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
    msg.setTimeStamp(0.675833841021);
    msg.setSource(60323U);
    msg.setSourceEntity(50U);
    msg.setDestination(32829U);
    msg.setDestinationEntity(55U);
    msg.value = 0.0496403751725;

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
    msg.setTimeStamp(0.618467082016);
    msg.setSource(49821U);
    msg.setSourceEntity(222U);
    msg.setDestination(22859U);
    msg.setDestinationEntity(46U);
    msg.value = 0.740025287031;

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
    msg.setTimeStamp(0.374472598901);
    msg.setSource(14952U);
    msg.setSourceEntity(196U);
    msg.setDestination(49394U);
    msg.setDestinationEntity(56U);
    msg.value = 0.26929944646;

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
    msg.setTimeStamp(0.967723085234);
    msg.setSource(13805U);
    msg.setSourceEntity(221U);
    msg.setDestination(58596U);
    msg.setDestinationEntity(242U);
    msg.value = 0.025721258572;

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
    msg.setTimeStamp(0.498056848628);
    msg.setSource(15704U);
    msg.setSourceEntity(112U);
    msg.setDestination(49702U);
    msg.setDestinationEntity(252U);
    msg.value = 0.0254646151113;

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
    msg.setTimeStamp(0.939701953652);
    msg.setSource(55744U);
    msg.setSourceEntity(230U);
    msg.setDestination(40034U);
    msg.setDestinationEntity(150U);
    msg.value = 0.566760170178;

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
    msg.setTimeStamp(0.0206377942146);
    msg.setSource(14191U);
    msg.setSourceEntity(43U);
    msg.setDestination(35909U);
    msg.setDestinationEntity(168U);
    msg.value = 0.0729391945098;

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
    msg.setTimeStamp(0.680353374419);
    msg.setSource(41304U);
    msg.setSourceEntity(80U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(43U);
    msg.id = 30U;
    msg.zoom = 84U;
    msg.action = 205U;

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
    msg.setTimeStamp(0.555284019444);
    msg.setSource(28804U);
    msg.setSourceEntity(152U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(5U);
    msg.id = 130U;
    msg.zoom = 187U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.0520324543927);
    msg.setSource(37328U);
    msg.setSourceEntity(181U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(47U);
    msg.id = 107U;
    msg.zoom = 243U;
    msg.action = 218U;

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
    msg.setTimeStamp(0.264886423207);
    msg.setSource(16264U);
    msg.setSourceEntity(125U);
    msg.setDestination(1436U);
    msg.setDestinationEntity(122U);
    msg.id = 198U;
    msg.value = 0.460255540348;

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
    msg.setTimeStamp(0.273360272059);
    msg.setSource(34223U);
    msg.setSourceEntity(13U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(14U);
    msg.id = 106U;
    msg.value = 0.404893980619;

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
    msg.setTimeStamp(0.170113657222);
    msg.setSource(4397U);
    msg.setSourceEntity(9U);
    msg.setDestination(50627U);
    msg.setDestinationEntity(96U);
    msg.id = 136U;
    msg.value = 0.0840984505693;

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
    msg.setTimeStamp(0.374276783366);
    msg.setSource(54580U);
    msg.setSourceEntity(238U);
    msg.setDestination(22925U);
    msg.setDestinationEntity(112U);
    msg.id = 81U;
    msg.value = 0.428029931454;

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
    msg.setTimeStamp(0.0628575470968);
    msg.setSource(37315U);
    msg.setSourceEntity(243U);
    msg.setDestination(11U);
    msg.setDestinationEntity(96U);
    msg.id = 101U;
    msg.value = 0.919554291921;

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
    msg.setTimeStamp(0.444547959651);
    msg.setSource(32455U);
    msg.setSourceEntity(231U);
    msg.setDestination(49074U);
    msg.setDestinationEntity(173U);
    msg.id = 72U;
    msg.value = 0.536099993087;

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
    msg.setTimeStamp(0.0781815492444);
    msg.setSource(61513U);
    msg.setSourceEntity(177U);
    msg.setDestination(28872U);
    msg.setDestinationEntity(186U);
    msg.id = 78U;
    msg.angle = 0.998205969649;

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
    msg.setTimeStamp(0.317972574613);
    msg.setSource(49191U);
    msg.setSourceEntity(25U);
    msg.setDestination(58439U);
    msg.setDestinationEntity(74U);
    msg.id = 249U;
    msg.angle = 0.122713135426;

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
    msg.setTimeStamp(0.881701807117);
    msg.setSource(31105U);
    msg.setSourceEntity(241U);
    msg.setDestination(15851U);
    msg.setDestinationEntity(4U);
    msg.id = 232U;
    msg.angle = 0.714078770632;

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
    msg.setTimeStamp(0.839982377786);
    msg.setSource(21137U);
    msg.setSourceEntity(148U);
    msg.setDestination(37175U);
    msg.setDestinationEntity(217U);
    msg.op = 243U;
    msg.actions.assign("RAMLTYFQXYGWZHUBFMHCWAKZFSUDQSSXNPPOEIKEAWDIFTI");

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
    msg.setTimeStamp(0.129174434772);
    msg.setSource(6105U);
    msg.setSourceEntity(191U);
    msg.setDestination(63152U);
    msg.setDestinationEntity(103U);
    msg.op = 179U;
    msg.actions.assign("MFKUDEUNDRQJHFBTGTQYSWXKRFHGESPYHPBSONGQDHDZMWPLLYUTZNEVMSTXYIRUGRBGZGAUWCLDWKHFTGOHVKXSIQIHIOZZGYNUMMKAISHAMXAFCRFDDPJPENRZFEIESBYJCPLBYPMOBJNHBBVEWANUWNNZQXUIRXMTQOXFFZJQRSVTVLOCKPSCPWRLVQDCYWSOATIJKNXM");

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
    msg.setTimeStamp(0.469218659817);
    msg.setSource(36016U);
    msg.setSourceEntity(96U);
    msg.setDestination(17682U);
    msg.setDestinationEntity(207U);
    msg.op = 169U;
    msg.actions.assign("WHILJFVODVHXDIKKZIQYWKWEWALKHVFMPLSWOTNRBTCJXYDOZXTAJRMUMRRVKDAPM");

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
    msg.setTimeStamp(0.477196985897);
    msg.setSource(23544U);
    msg.setSourceEntity(32U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(251U);
    msg.actions.assign("OLODYEJNXGHUNZQDSAFGAVWQKNPSFIXHHNPYNXQUHCANKQFHZZAUUHEKMILWVJPVDUZBGBOVGNBRVHRILBMMEHGSPVTKWOZBGKMGWCQMSDLRSXDRVTGCCLWKDLENVIZFQUTUIIFZOYARKUJAJMDVAPCORXLKOJAZBEISMIOYTXDQCMFVYRQFPXHEBURDQAJCFLYRXLNHPIJYEJARTOJKLTJXCXWEEPYWZZBEPT");

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
    msg.setTimeStamp(0.216359748701);
    msg.setSource(27477U);
    msg.setSourceEntity(24U);
    msg.setDestination(36097U);
    msg.setDestinationEntity(2U);
    msg.actions.assign("WIWDPSFBSREYVXXABGBLV");

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
    msg.setTimeStamp(0.150562097159);
    msg.setSource(64993U);
    msg.setSourceEntity(194U);
    msg.setDestination(48172U);
    msg.setDestinationEntity(207U);
    msg.actions.assign("JTPEQWKZMGTAXLSYNPBHLEICHSVTIBOQFTWSINXOPXUZQFDSTERSXMWFNYQRCBKGEZLAJMYHKWDNWFCVQFBYYCZPVL");

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
    msg.setTimeStamp(0.303731122756);
    msg.setSource(22962U);
    msg.setSourceEntity(244U);
    msg.setDestination(57516U);
    msg.setDestinationEntity(203U);
    msg.button = 24U;
    msg.value = 96U;

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
    msg.setTimeStamp(0.731137026245);
    msg.setSource(5519U);
    msg.setSourceEntity(215U);
    msg.setDestination(5233U);
    msg.setDestinationEntity(227U);
    msg.button = 224U;
    msg.value = 239U;

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
    msg.setTimeStamp(0.567961706139);
    msg.setSource(39678U);
    msg.setSourceEntity(201U);
    msg.setDestination(61824U);
    msg.setDestinationEntity(116U);
    msg.button = 124U;
    msg.value = 202U;

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
    msg.setTimeStamp(0.91488941615);
    msg.setSource(44287U);
    msg.setSourceEntity(244U);
    msg.setDestination(50177U);
    msg.setDestinationEntity(69U);
    msg.op = 196U;
    msg.text.assign("HSJPVDMTXDPRMOREECABFASFMAHRMKFOTVOVMRWGXYKKOQPYPIRBDPYVSWCZBVVMDFTSULUGGFAYHQIICUWRQETOUHCICC");

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
    msg.setTimeStamp(0.695015208977);
    msg.setSource(33785U);
    msg.setSourceEntity(159U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(191U);
    msg.op = 9U;
    msg.text.assign("XZSBQKYTMMRTOOWEAEGTSOUSYCBWYVIYRTFCVMHGFLMWDMRVUCFITCGLKDKQPTDJSXRLPVEAAPKPUNOHLDDCRTQSKZH");

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
    msg.setTimeStamp(0.85992062365);
    msg.setSource(44772U);
    msg.setSourceEntity(95U);
    msg.setDestination(63480U);
    msg.setDestinationEntity(95U);
    msg.op = 51U;
    msg.text.assign("RNCEMOATRMKYODBDGZOMRCKBSULAJFHWPVNOCFNAYDLRQJEXHWPAFTHTIKMFUBZLWXEDDJJHQCDKJRSDRHQF");

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
    msg.setTimeStamp(0.610437189174);
    msg.setSource(12064U);
    msg.setSourceEntity(239U);
    msg.setDestination(22874U);
    msg.setDestinationEntity(46U);
    msg.op = 195U;
    msg.time_remain = 0.38579257889;
    msg.sched_time = 0.78991783616;

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
    msg.setTimeStamp(0.706109812968);
    msg.setSource(8415U);
    msg.setSourceEntity(180U);
    msg.setDestination(41592U);
    msg.setDestinationEntity(124U);
    msg.op = 196U;
    msg.time_remain = 0.015330226077;
    msg.sched_time = 0.529420397757;

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
    msg.setTimeStamp(0.650243292912);
    msg.setSource(26206U);
    msg.setSourceEntity(9U);
    msg.setDestination(36820U);
    msg.setDestinationEntity(232U);
    msg.op = 152U;
    msg.time_remain = 0.482707594231;
    msg.sched_time = 0.857048321184;

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
    msg.setTimeStamp(0.881126242325);
    msg.setSource(44899U);
    msg.setSourceEntity(52U);
    msg.setDestination(56344U);
    msg.setDestinationEntity(106U);
    msg.name.assign("LGGKIRQRROFSNZ");
    msg.op = 53U;
    msg.sched_time = 0.225365246565;

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
    msg.setTimeStamp(0.357222389499);
    msg.setSource(64425U);
    msg.setSourceEntity(60U);
    msg.setDestination(34555U);
    msg.setDestinationEntity(227U);
    msg.name.assign("JNBBPLXQNOJEUSIZFPUJPLNLRVMCVPHWGLVOAIBJCTEVZPSTYQAGVUYKQNUYMZBNYKNUYHEACSXOBTYZRMSVXTJYFLEIXHFPRRNGDRDSGADBCHLM");
    msg.op = 180U;
    msg.sched_time = 0.241586036641;

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
    msg.setTimeStamp(0.408941136466);
    msg.setSource(35202U);
    msg.setSourceEntity(5U);
    msg.setDestination(17077U);
    msg.setDestinationEntity(192U);
    msg.name.assign("ATQEQAUDGAXHDHATIIWLIYPKNYUSMHPVBZWO");
    msg.op = 230U;
    msg.sched_time = 0.895151738145;

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
    msg.setTimeStamp(0.167998985208);
    msg.setSource(61159U);
    msg.setSourceEntity(161U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.376576530644);
    msg.setSource(35581U);
    msg.setSourceEntity(192U);
    msg.setDestination(60967U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.0498491478564);
    msg.setSource(22223U);
    msg.setSourceEntity(28U);
    msg.setDestination(13293U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.450602217995);
    msg.setSource(6149U);
    msg.setSourceEntity(102U);
    msg.setDestination(58516U);
    msg.setDestinationEntity(139U);
    msg.name.assign("VHFCMATSXFZDEGLFENCXLIPVWNWKUTRUJGPVOBNOZCEVJCVSHACGECNDNYEZUJHWBVDKDUHBOTMGKTQIUAOYKWRXCSJZJAZYFANXPPHXMIFMKYRXALYLIUJYBIVRKSIVGJTEYDXEHBSCNVHSKGZLBIBPFXDRCTZWRPRLAVDWJAIRGRRGTHDQQQMQXKDFTIJGULAEBGZSFNWTQOEZMMLWQQUMPFFNWOUXYSYMYQKOSPEPTQKHDABLOIONLCOB");
    msg.state = 120U;

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
    msg.setTimeStamp(0.15577803753);
    msg.setSource(24689U);
    msg.setSourceEntity(32U);
    msg.setDestination(8473U);
    msg.setDestinationEntity(13U);
    msg.name.assign("SLJCFXEIZAABXCYHBBERHPPHWVUXTVBUVNKOIFAVXAYWFHYCEHVHJQTDCOGRLMAJSUGZIRRKGTZESSGIHNMVQDPWXQTWIOOVZ");
    msg.state = 158U;

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
    msg.setTimeStamp(0.0988969630451);
    msg.setSource(23382U);
    msg.setSourceEntity(19U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(196U);
    msg.name.assign("LUXBAPBIEHSYSXGWOJGKMQLQMHVHNAUYIEAVKTPLUFSBQODXZECFGGWFRWMBOSCVWIZHVVRKZHQLUCRALUVCMPJGDAOAKNVT");
    msg.state = 203U;

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
    msg.setTimeStamp(0.574141199044);
    msg.setSource(51016U);
    msg.setSourceEntity(184U);
    msg.setDestination(27866U);
    msg.setDestinationEntity(39U);
    msg.name.assign("AQMRXKRUFHRBPREWBHOYIJWTBRNKQYLSQZVJLAIIEFPLQFHZTMEXXAFZLGAVHJKKKCVTUOUQOSTNTTDSNLHZBSCKEQYPBUCGPEKXAHMUONSURRPYIAOJRVJUMCHPQYFYYQSCWNNYVRTNOALNYOIAYDGDGPZIBKZHXJSBDVJWXMDUOVMSGJISEMJZXVDPMGXKPQWVITJGCWMEDTFGMCEIDCFBUZDONGFPCEZEGAWLXWUSTQFHVDROI");
    msg.value = 13U;

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
    msg.setTimeStamp(0.0269876884905);
    msg.setSource(33432U);
    msg.setSourceEntity(233U);
    msg.setDestination(33813U);
    msg.setDestinationEntity(98U);
    msg.name.assign("RCKLJEYWMVLRHLCVNXBBQGZFYOWSOLOMBZYHQDPOWMTOPVMETPHCJREFBXPDHDXHQJPRNBYQZJVILMNJOVAGMAYYMABMQTIQTCOMEPJDPCFLDCMLKTSHXTUUVEBNIVKEKRRSRUGERGIUYGKCWNXAAADGQZHIUNDYFNDJFVRZFHWSZITFSZCLVSOLEOXWGNG");
    msg.value = 165U;

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
    msg.setTimeStamp(0.166822098125);
    msg.setSource(2348U);
    msg.setSourceEntity(7U);
    msg.setDestination(52250U);
    msg.setDestinationEntity(32U);
    msg.name.assign("HBOONSVSDGCTNMFX");
    msg.value = 48U;

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
    msg.setTimeStamp(0.856863989871);
    msg.setSource(27030U);
    msg.setSourceEntity(132U);
    msg.setDestination(18916U);
    msg.setDestinationEntity(88U);
    msg.name.assign("SOCMKLMBZAOYCZSXCKDKUVJM");

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
    msg.setTimeStamp(0.394306039449);
    msg.setSource(31759U);
    msg.setSourceEntity(243U);
    msg.setDestination(57142U);
    msg.setDestinationEntity(16U);
    msg.name.assign("SKFEUDFUWCHAZAQABGARCNFRQNTWVXLUZHPFOODRAJHSLOYYQAGQPLWEEZXDYAINJECJMCBXKNEZXSFMZRYAIQTZSHMPRNBJTKEZCJAPUBFOYLBSDXBSJONORGRVJXIHDMKTVKUUHAYIQXODTGSEWLMTOKTFDRIWVWHSGEQMTGIPVWWPOPURCFHTFJELFBDBMB");

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
    msg.setTimeStamp(0.547634332289);
    msg.setSource(19226U);
    msg.setSourceEntity(247U);
    msg.setDestination(41290U);
    msg.setDestinationEntity(174U);
    msg.name.assign("XXBKTASWAFLYABMLWYDYMNOHUYGSAOBEQZLEIYRPQQZWPDLSHXIXMTQPGZN");

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
    msg.setTimeStamp(0.737012923897);
    msg.setSource(4245U);
    msg.setSourceEntity(172U);
    msg.setDestination(54217U);
    msg.setDestinationEntity(162U);
    msg.name.assign("LQASSQNMYAUVHUWCATWTRGEUSISYRKOBTSYOQKPPAPVOHDCXUZVCBOKMMEGRFWYVHUDRXTDTKQICASFFPJVNYRWCEHXJGWGEMOWEJNLLFQGJUBNLPXBLJPBWJGHZDYZNOYLHHESFTUOIZZVVKNUCXTZCVKMARHHJIARFLIRONEDFFICJGTMAZMQRQAXZWCTCZFEMQDPMVUHITSKOQSVZ");
    msg.value = 217U;

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
    msg.setTimeStamp(0.907895404577);
    msg.setSource(24374U);
    msg.setSourceEntity(82U);
    msg.setDestination(64043U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NNVGREERQMKLVVHATMBPZCNREOQUZJDWUEREVNQSZKJVYHFHBIOPMZGLAADXHILVFRYGTTDKPGYYUNFDMGXHTUONOWQPPQNDUTOBESCZBCNSFNSUAMEYHIVAPFQGLAMCPBEZISTGKLLI");
    msg.value = 199U;

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
    msg.setTimeStamp(0.854356053538);
    msg.setSource(53580U);
    msg.setSourceEntity(254U);
    msg.setDestination(131U);
    msg.setDestinationEntity(68U);
    msg.name.assign("FYZBOHKIXZSITWGRWVMIWXTDHKIPIOJQPMUPUZYQMKEARCHAJPDLFELDABIHQBYKXNBYGMKZAPZVOOCLXEWCJBRAJEGUDMCJIVNM");
    msg.value = 254U;

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
    msg.setTimeStamp(0.525308114852);
    msg.setSource(14648U);
    msg.setSourceEntity(149U);
    msg.setDestination(30013U);
    msg.setDestinationEntity(41U);
    msg.id = 50U;
    msg.period = 4138791013U;
    msg.duty_cycle = 1464426248U;

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
    msg.setTimeStamp(0.309861386334);
    msg.setSource(11621U);
    msg.setSourceEntity(61U);
    msg.setDestination(60300U);
    msg.setDestinationEntity(197U);
    msg.id = 75U;
    msg.period = 2340573268U;
    msg.duty_cycle = 4187482323U;

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
    msg.setTimeStamp(0.494824562997);
    msg.setSource(1068U);
    msg.setSourceEntity(207U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(254U);
    msg.id = 6U;
    msg.period = 2534400680U;
    msg.duty_cycle = 403501513U;

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
    msg.setTimeStamp(0.0290625900713);
    msg.setSource(56901U);
    msg.setSourceEntity(67U);
    msg.setDestination(14660U);
    msg.setDestinationEntity(161U);
    msg.id = 238U;
    msg.period = 412314326U;
    msg.duty_cycle = 4244143759U;

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
    msg.setTimeStamp(0.913023239406);
    msg.setSource(2577U);
    msg.setSourceEntity(250U);
    msg.setDestination(61930U);
    msg.setDestinationEntity(246U);
    msg.id = 230U;
    msg.period = 2903631649U;
    msg.duty_cycle = 984597129U;

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
    msg.setTimeStamp(0.141490611808);
    msg.setSource(55543U);
    msg.setSourceEntity(92U);
    msg.setDestination(24966U);
    msg.setDestinationEntity(5U);
    msg.id = 189U;
    msg.period = 1567620225U;
    msg.duty_cycle = 3927588728U;

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
    msg.setTimeStamp(0.858938630273);
    msg.setSource(366U);
    msg.setSourceEntity(156U);
    msg.setDestination(2001U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.513286344332;
    msg.lon = 0.897927277099;
    msg.height = 0.182099891169;
    msg.x = 0.802254130639;
    msg.y = 0.273142097965;
    msg.z = 0.966015430954;
    msg.phi = 0.683455580059;
    msg.theta = 0.772441414359;
    msg.psi = 0.773844937587;
    msg.u = 0.834931911199;
    msg.v = 0.554752204869;
    msg.w = 0.2778221927;
    msg.vx = 0.193393929187;
    msg.vy = 0.304803066153;
    msg.vz = 0.00136814495899;
    msg.p = 0.926746996192;
    msg.q = 0.901625453466;
    msg.r = 0.849079901402;
    msg.depth = 0.47597437192;
    msg.alt = 0.336853357187;

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
    msg.setTimeStamp(0.877129964684);
    msg.setSource(987U);
    msg.setSourceEntity(70U);
    msg.setDestination(43461U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.477970777223;
    msg.lon = 0.0886742165854;
    msg.height = 0.465985191878;
    msg.x = 0.989895099841;
    msg.y = 0.842137895322;
    msg.z = 0.0828887157984;
    msg.phi = 0.980791406075;
    msg.theta = 0.932908920075;
    msg.psi = 0.855256018674;
    msg.u = 0.622648432943;
    msg.v = 0.941237051259;
    msg.w = 0.682677771376;
    msg.vx = 0.723198598434;
    msg.vy = 0.428717268938;
    msg.vz = 0.00379302517852;
    msg.p = 0.585722624786;
    msg.q = 0.495417599578;
    msg.r = 0.64392116893;
    msg.depth = 0.644361268583;
    msg.alt = 0.0898517519558;

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
    msg.setTimeStamp(0.863688782783);
    msg.setSource(62748U);
    msg.setSourceEntity(237U);
    msg.setDestination(31527U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.846446961771;
    msg.lon = 0.600870129532;
    msg.height = 0.190611889476;
    msg.x = 0.291366659098;
    msg.y = 0.206331827665;
    msg.z = 0.458728236358;
    msg.phi = 0.59709598979;
    msg.theta = 0.70369686062;
    msg.psi = 0.414901039599;
    msg.u = 0.596021607442;
    msg.v = 0.903420172392;
    msg.w = 0.307493858275;
    msg.vx = 0.0900954246892;
    msg.vy = 0.888837620717;
    msg.vz = 0.866314571771;
    msg.p = 0.559062423455;
    msg.q = 0.16820497986;
    msg.r = 0.222479046539;
    msg.depth = 0.713085519647;
    msg.alt = 0.649508428394;

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
    msg.setTimeStamp(0.758846889033);
    msg.setSource(60865U);
    msg.setSourceEntity(118U);
    msg.setDestination(25670U);
    msg.setDestinationEntity(122U);
    msg.x = 0.461904914222;
    msg.y = 0.0775407063832;
    msg.z = 0.0171877358473;

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
    msg.setTimeStamp(0.980816237993);
    msg.setSource(38172U);
    msg.setSourceEntity(41U);
    msg.setDestination(7622U);
    msg.setDestinationEntity(14U);
    msg.x = 0.938537496357;
    msg.y = 0.180109544723;
    msg.z = 0.804991570451;

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
    msg.setTimeStamp(0.527802954795);
    msg.setSource(6160U);
    msg.setSourceEntity(213U);
    msg.setDestination(48989U);
    msg.setDestinationEntity(226U);
    msg.x = 0.951126439104;
    msg.y = 0.541961713481;
    msg.z = 0.951177065765;

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
    msg.setTimeStamp(0.575521707472);
    msg.setSource(36205U);
    msg.setSourceEntity(71U);
    msg.setDestination(65403U);
    msg.setDestinationEntity(0U);
    msg.value = 0.357863217122;

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
    msg.setTimeStamp(0.974798288359);
    msg.setSource(48980U);
    msg.setSourceEntity(199U);
    msg.setDestination(61527U);
    msg.setDestinationEntity(67U);
    msg.value = 0.864266127905;

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
    msg.setTimeStamp(0.619861692622);
    msg.setSource(3294U);
    msg.setSourceEntity(241U);
    msg.setDestination(60374U);
    msg.setDestinationEntity(42U);
    msg.value = 0.0897168599741;

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
    msg.setTimeStamp(0.211337120361);
    msg.setSource(38521U);
    msg.setSourceEntity(213U);
    msg.setDestination(30006U);
    msg.setDestinationEntity(100U);
    msg.value = 0.940668442668;

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
    msg.setTimeStamp(0.930281679814);
    msg.setSource(29383U);
    msg.setSourceEntity(203U);
    msg.setDestination(42557U);
    msg.setDestinationEntity(196U);
    msg.value = 0.214621164411;

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
    msg.setTimeStamp(0.167300175728);
    msg.setSource(39845U);
    msg.setSourceEntity(81U);
    msg.setDestination(52881U);
    msg.setDestinationEntity(107U);
    msg.value = 0.10351862389;

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
    msg.setTimeStamp(0.180226921103);
    msg.setSource(47439U);
    msg.setSourceEntity(171U);
    msg.setDestination(58739U);
    msg.setDestinationEntity(58U);
    msg.x = 0.353359728838;
    msg.y = 0.173265470567;
    msg.z = 0.162477560214;
    msg.phi = 0.944029677521;
    msg.theta = 0.0517171234184;
    msg.psi = 0.549899208005;
    msg.p = 0.866961100942;
    msg.q = 0.253047930196;
    msg.r = 0.882293782888;
    msg.u = 0.402702780594;
    msg.v = 0.962368582931;
    msg.w = 0.935088456968;
    msg.bias_psi = 0.610080363058;
    msg.bias_r = 0.686365571587;

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
    msg.setTimeStamp(0.0652976980232);
    msg.setSource(25429U);
    msg.setSourceEntity(64U);
    msg.setDestination(7527U);
    msg.setDestinationEntity(238U);
    msg.x = 0.661215721799;
    msg.y = 0.648806092169;
    msg.z = 0.684928617628;
    msg.phi = 0.469896691833;
    msg.theta = 0.870192022477;
    msg.psi = 0.222539500324;
    msg.p = 0.162141598533;
    msg.q = 0.806617630926;
    msg.r = 0.209417213518;
    msg.u = 0.392961620566;
    msg.v = 0.0778728893805;
    msg.w = 0.436436836472;
    msg.bias_psi = 0.500872694396;
    msg.bias_r = 0.524244103433;

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
    msg.setTimeStamp(0.483297496069);
    msg.setSource(3398U);
    msg.setSourceEntity(230U);
    msg.setDestination(59924U);
    msg.setDestinationEntity(177U);
    msg.x = 0.256064867518;
    msg.y = 0.836412625247;
    msg.z = 0.851378140937;
    msg.phi = 0.497876252505;
    msg.theta = 0.617754138421;
    msg.psi = 0.973491999136;
    msg.p = 0.611729612848;
    msg.q = 0.0791294205014;
    msg.r = 0.368183324776;
    msg.u = 0.783142150701;
    msg.v = 0.226635981404;
    msg.w = 0.271173469807;
    msg.bias_psi = 0.973869801477;
    msg.bias_r = 0.779328321043;

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
    msg.setTimeStamp(0.940139362125);
    msg.setSource(51893U);
    msg.setSourceEntity(158U);
    msg.setDestination(4825U);
    msg.setDestinationEntity(202U);
    msg.bias_psi = 0.662146151907;
    msg.bias_r = 0.058097837713;
    msg.cog = 0.842262153508;
    msg.cyaw = 0.26570214053;
    msg.lbl_rej_level = 0.00193596343894;
    msg.gps_rej_level = 0.225129663389;
    msg.custom_x = 0.89454759355;
    msg.custom_y = 0.542210043588;
    msg.custom_z = 0.2534614962;

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
    msg.setTimeStamp(0.876482677106);
    msg.setSource(24177U);
    msg.setSourceEntity(166U);
    msg.setDestination(25327U);
    msg.setDestinationEntity(200U);
    msg.bias_psi = 0.513059567025;
    msg.bias_r = 0.0913815017371;
    msg.cog = 0.88500280089;
    msg.cyaw = 0.882812119653;
    msg.lbl_rej_level = 0.744126381045;
    msg.gps_rej_level = 0.123695399106;
    msg.custom_x = 0.745115392782;
    msg.custom_y = 0.549067402836;
    msg.custom_z = 0.745002105077;

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
    msg.setTimeStamp(0.623727976537);
    msg.setSource(6498U);
    msg.setSourceEntity(43U);
    msg.setDestination(51369U);
    msg.setDestinationEntity(107U);
    msg.bias_psi = 0.401019227094;
    msg.bias_r = 0.811204160955;
    msg.cog = 0.10152186863;
    msg.cyaw = 0.0240288322242;
    msg.lbl_rej_level = 0.842882457708;
    msg.gps_rej_level = 0.15774489012;
    msg.custom_x = 0.808885617801;
    msg.custom_y = 0.780781767997;
    msg.custom_z = 0.125185590457;

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
    msg.setTimeStamp(0.605266860454);
    msg.setSource(62062U);
    msg.setSourceEntity(156U);
    msg.setDestination(30020U);
    msg.setDestinationEntity(146U);
    msg.utc_time = 0.0713433780624;
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
    msg.setTimeStamp(0.772182176077);
    msg.setSource(1493U);
    msg.setSourceEntity(168U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(249U);
    msg.utc_time = 0.309779252125;
    msg.reason = 126U;

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
    msg.setTimeStamp(0.953332300142);
    msg.setSource(7988U);
    msg.setSourceEntity(125U);
    msg.setDestination(16423U);
    msg.setDestinationEntity(116U);
    msg.utc_time = 0.660177197919;
    msg.reason = 156U;

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
    msg.setTimeStamp(0.590686568722);
    msg.setSource(59181U);
    msg.setSourceEntity(175U);
    msg.setDestination(28402U);
    msg.setDestinationEntity(146U);
    msg.id = 181U;
    msg.range = 0.898693027012;
    msg.acceptance = 67U;

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
    msg.setTimeStamp(0.324461777232);
    msg.setSource(39248U);
    msg.setSourceEntity(52U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(102U);
    msg.id = 230U;
    msg.range = 0.708479774421;
    msg.acceptance = 73U;

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
    msg.setTimeStamp(0.783617145939);
    msg.setSource(46293U);
    msg.setSourceEntity(96U);
    msg.setDestination(5126U);
    msg.setDestinationEntity(209U);
    msg.id = 145U;
    msg.range = 0.19602119396;
    msg.acceptance = 199U;

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
    msg.setTimeStamp(0.265955098179);
    msg.setSource(54386U);
    msg.setSourceEntity(183U);
    msg.setDestination(14488U);
    msg.setDestinationEntity(166U);
    msg.type = 142U;
    msg.reason = 89U;
    msg.value = 0.258171377045;
    msg.timestep = 0.469327742369;

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
    msg.setTimeStamp(0.787968940722);
    msg.setSource(49804U);
    msg.setSourceEntity(201U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(93U);
    msg.type = 44U;
    msg.reason = 152U;
    msg.value = 0.647396676644;
    msg.timestep = 0.848264047131;

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
    msg.setTimeStamp(0.441473092637);
    msg.setSource(8515U);
    msg.setSourceEntity(180U);
    msg.setDestination(22297U);
    msg.setDestinationEntity(93U);
    msg.type = 30U;
    msg.reason = 100U;
    msg.value = 0.0247623431229;
    msg.timestep = 0.797079128139;

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
    msg.setTimeStamp(0.275290696047);
    msg.setSource(59694U);
    msg.setSourceEntity(145U);
    msg.setDestination(31146U);
    msg.setDestinationEntity(165U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LFNYYKSZTMSGFVGSRTMPTLNYLEONYMXNJVYGLGAEPVMNSZLUUXQJAPUNGPVMQKROSJABXBGWMZYWSINQPQZQOOLACTBVGUKBAAWBLPKSXHIVJDRTCQEWFPFODAXYXFUKYEAYPBUIBDMHBYUEEVTJEZGKNOZGAQVFJCTRRDVHICCCHKOT");
    tmp_msg_0.lat = 0.644563796463;
    tmp_msg_0.lon = 0.187309078638;
    tmp_msg_0.depth = 0.383365106535;
    tmp_msg_0.query_channel = 132U;
    tmp_msg_0.reply_channel = 229U;
    tmp_msg_0.transponder_delay = 146U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.417033554532;
    msg.y = 0.098045026077;
    msg.var_x = 0.407501016342;
    msg.var_y = 0.144264463595;
    msg.distance = 0.977313244881;

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
    msg.setTimeStamp(0.0949391726932);
    msg.setSource(5204U);
    msg.setSourceEntity(83U);
    msg.setDestination(21848U);
    msg.setDestinationEntity(212U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XETYKLUSXEZGIHFVFYMHWOPOSEMQZCRPADBTPSHJIFYKTDPLZTDPMERRCKLIXSXRJQVCFWASORFRLWVSFTSBCNIUJNPOKNKGDLHIORQTDOAGGAKUKBCIHBKOEMIOTYXQCFJDPWBTSNWEWBLJHLHFJMZTOGVAZTCWAYGVHUCSRMBNDJQQCUYPDVH");
    tmp_msg_0.lat = 0.558196648227;
    tmp_msg_0.lon = 0.562517928317;
    tmp_msg_0.depth = 0.817605305738;
    tmp_msg_0.query_channel = 6U;
    tmp_msg_0.reply_channel = 204U;
    tmp_msg_0.transponder_delay = 114U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.105938445112;
    msg.y = 0.43614799599;
    msg.var_x = 0.22961181667;
    msg.var_y = 0.35706302578;
    msg.distance = 0.617029676864;

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
    msg.setTimeStamp(0.114201904495);
    msg.setSource(32052U);
    msg.setSourceEntity(7U);
    msg.setDestination(58773U);
    msg.setDestinationEntity(182U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YPRWOYMCRWJHSEOQJTCXNUIARODWPVCVYMQVUPLKYECRBYTALQGBFXURMWLPXONJJQCBKOWEHYEZTPZDVNKENJDXIHWCSZYNZWQOBQUUXSNMCUPAHSKSYAMRHVXDWZFMGVSLGMGIEKSAQFFGMIGKETBSKRXNFFLPATKHDGABUZDEDQQUJZVLACFXLFHCPOQEANIVZTSWBFIBZNIHGIVUPHARLVKWIYJFHRJXNOUTRKTTISYDBCJLZMOBG");
    tmp_msg_0.lat = 0.137635100882;
    tmp_msg_0.lon = 0.310152131926;
    tmp_msg_0.depth = 0.373981180477;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 108U;
    tmp_msg_0.transponder_delay = 223U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.914246671502;
    msg.y = 0.640145635979;
    msg.var_x = 0.50220159829;
    msg.var_y = 0.381772258656;
    msg.distance = 0.367399789163;

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
    msg.setTimeStamp(0.677834141014);
    msg.setSource(16437U);
    msg.setSourceEntity(253U);
    msg.setDestination(13414U);
    msg.setDestinationEntity(227U);
    msg.state = 69U;

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
    msg.setTimeStamp(0.147303438186);
    msg.setSource(37059U);
    msg.setSourceEntity(220U);
    msg.setDestination(1695U);
    msg.setDestinationEntity(189U);
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
    msg.setTimeStamp(0.865691723882);
    msg.setSource(27248U);
    msg.setSourceEntity(118U);
    msg.setDestination(61593U);
    msg.setDestinationEntity(91U);
    msg.state = 194U;

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
    msg.setTimeStamp(0.523768381507);
    msg.setSource(23230U);
    msg.setSourceEntity(208U);
    msg.setDestination(29097U);
    msg.setDestinationEntity(64U);
    msg.x = 0.746948504283;
    msg.y = 0.497153016028;
    msg.z = 0.936658660143;

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
    msg.setTimeStamp(0.663410037234);
    msg.setSource(17596U);
    msg.setSourceEntity(12U);
    msg.setDestination(7245U);
    msg.setDestinationEntity(121U);
    msg.x = 0.722580344621;
    msg.y = 0.618951828241;
    msg.z = 0.198127714906;

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
    msg.setTimeStamp(0.671237637144);
    msg.setSource(20340U);
    msg.setSourceEntity(7U);
    msg.setDestination(53806U);
    msg.setDestinationEntity(20U);
    msg.x = 0.916121842407;
    msg.y = 0.965805460761;
    msg.z = 0.777194474526;

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
    msg.setTimeStamp(0.216278261608);
    msg.setSource(51991U);
    msg.setSourceEntity(21U);
    msg.setDestination(747U);
    msg.setDestinationEntity(11U);
    msg.value = 0.14810013795;

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
    msg.setTimeStamp(0.484683060461);
    msg.setSource(19260U);
    msg.setSourceEntity(57U);
    msg.setDestination(6909U);
    msg.setDestinationEntity(70U);
    msg.value = 0.661238255182;

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
    msg.setTimeStamp(0.639218782425);
    msg.setSource(17875U);
    msg.setSourceEntity(58U);
    msg.setDestination(44050U);
    msg.setDestinationEntity(162U);
    msg.value = 0.437301456644;

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
    msg.setTimeStamp(0.260730789981);
    msg.setSource(11996U);
    msg.setSourceEntity(123U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(77U);
    msg.value = 0.742126177269;
    msg.z_units = 74U;

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
    msg.setTimeStamp(0.675988425171);
    msg.setSource(8066U);
    msg.setSourceEntity(225U);
    msg.setDestination(48633U);
    msg.setDestinationEntity(199U);
    msg.value = 0.136593810239;
    msg.z_units = 146U;

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
    msg.setTimeStamp(0.721566458117);
    msg.setSource(39744U);
    msg.setSourceEntity(64U);
    msg.setDestination(51358U);
    msg.setDestinationEntity(207U);
    msg.value = 0.065249821004;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.474778388217);
    msg.setSource(7237U);
    msg.setSourceEntity(88U);
    msg.setDestination(2911U);
    msg.setDestinationEntity(85U);
    msg.value = 0.414740016655;
    msg.speed_units = 80U;

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
    msg.setTimeStamp(0.239649304073);
    msg.setSource(30317U);
    msg.setSourceEntity(95U);
    msg.setDestination(14345U);
    msg.setDestinationEntity(145U);
    msg.value = 0.115012120995;
    msg.speed_units = 25U;

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
    msg.setTimeStamp(0.696195512048);
    msg.setSource(37246U);
    msg.setSourceEntity(139U);
    msg.setDestination(52722U);
    msg.setDestinationEntity(235U);
    msg.value = 0.39236265461;
    msg.speed_units = 35U;

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
    msg.setTimeStamp(0.888028237137);
    msg.setSource(65049U);
    msg.setSourceEntity(136U);
    msg.setDestination(23153U);
    msg.setDestinationEntity(134U);
    msg.value = 0.814698345724;

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
    msg.setTimeStamp(0.797880943694);
    msg.setSource(22577U);
    msg.setSourceEntity(168U);
    msg.setDestination(5145U);
    msg.setDestinationEntity(62U);
    msg.value = 0.190279245435;

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
    msg.setTimeStamp(0.920948121663);
    msg.setSource(21635U);
    msg.setSourceEntity(244U);
    msg.setDestination(36855U);
    msg.setDestinationEntity(5U);
    msg.value = 0.564500820156;

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
    msg.setTimeStamp(0.626762739309);
    msg.setSource(11021U);
    msg.setSourceEntity(91U);
    msg.setDestination(19845U);
    msg.setDestinationEntity(103U);
    msg.value = 0.810997843008;

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
    msg.setTimeStamp(0.342995213995);
    msg.setSource(23117U);
    msg.setSourceEntity(224U);
    msg.setDestination(50686U);
    msg.setDestinationEntity(157U);
    msg.value = 0.922829861316;

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
    msg.setTimeStamp(0.30071983861);
    msg.setSource(160U);
    msg.setSourceEntity(93U);
    msg.setDestination(63431U);
    msg.setDestinationEntity(10U);
    msg.value = 0.277697070208;

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
    msg.setTimeStamp(0.823201320815);
    msg.setSource(9312U);
    msg.setSourceEntity(249U);
    msg.setDestination(10496U);
    msg.setDestinationEntity(79U);
    msg.value = 0.322099139439;

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
    msg.setTimeStamp(0.868116024535);
    msg.setSource(10650U);
    msg.setSourceEntity(146U);
    msg.setDestination(4845U);
    msg.setDestinationEntity(99U);
    msg.value = 0.704883003565;

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
    msg.setTimeStamp(0.887944490003);
    msg.setSource(5735U);
    msg.setSourceEntity(88U);
    msg.setDestination(62462U);
    msg.setDestinationEntity(19U);
    msg.value = 0.291015667592;

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
    msg.setTimeStamp(0.0872781813848);
    msg.setSource(10764U);
    msg.setSourceEntity(35U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(165U);
    msg.path_ref = 4059434251U;
    msg.start_lat = 0.922712422395;
    msg.start_lon = 0.917469358595;
    msg.start_z = 0.962614964315;
    msg.start_z_units = 133U;
    msg.end_lat = 0.0130916052015;
    msg.end_lon = 0.55268809149;
    msg.end_z = 0.959553175064;
    msg.end_z_units = 6U;
    msg.speed = 0.812704813401;
    msg.speed_units = 230U;
    msg.lradius = 0.0462376630198;
    msg.flags = 174U;

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
    msg.setTimeStamp(0.538252517435);
    msg.setSource(36598U);
    msg.setSourceEntity(57U);
    msg.setDestination(4226U);
    msg.setDestinationEntity(79U);
    msg.path_ref = 354139417U;
    msg.start_lat = 0.503453875122;
    msg.start_lon = 0.0982907311589;
    msg.start_z = 0.608453234878;
    msg.start_z_units = 41U;
    msg.end_lat = 0.0720168698273;
    msg.end_lon = 0.556132696131;
    msg.end_z = 0.79707044572;
    msg.end_z_units = 243U;
    msg.speed = 0.537631377814;
    msg.speed_units = 104U;
    msg.lradius = 0.536707881299;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.644815597896);
    msg.setSource(52333U);
    msg.setSourceEntity(80U);
    msg.setDestination(61338U);
    msg.setDestinationEntity(104U);
    msg.path_ref = 1576815470U;
    msg.start_lat = 0.0621696902329;
    msg.start_lon = 0.106387491795;
    msg.start_z = 0.401735503171;
    msg.start_z_units = 27U;
    msg.end_lat = 0.640293055945;
    msg.end_lon = 0.437211895278;
    msg.end_z = 0.359374671436;
    msg.end_z_units = 71U;
    msg.speed = 0.758355537099;
    msg.speed_units = 224U;
    msg.lradius = 0.680130396188;
    msg.flags = 181U;

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
    msg.setTimeStamp(0.0891488290154);
    msg.setSource(58224U);
    msg.setSourceEntity(68U);
    msg.setDestination(43578U);
    msg.setDestinationEntity(166U);
    msg.x = 0.0745688041805;
    msg.y = 0.701060745197;
    msg.z = 0.723478922465;
    msg.k = 0.425973007514;
    msg.m = 0.661169888856;
    msg.n = 0.625126682777;
    msg.flags = 139U;

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
    msg.setTimeStamp(0.520399481231);
    msg.setSource(40942U);
    msg.setSourceEntity(112U);
    msg.setDestination(31554U);
    msg.setDestinationEntity(170U);
    msg.x = 0.674156351279;
    msg.y = 0.0553333255062;
    msg.z = 0.161525071865;
    msg.k = 0.990124386973;
    msg.m = 0.0238136708616;
    msg.n = 0.871169162432;
    msg.flags = 93U;

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
    msg.setTimeStamp(0.612636117442);
    msg.setSource(48602U);
    msg.setSourceEntity(207U);
    msg.setDestination(30144U);
    msg.setDestinationEntity(42U);
    msg.x = 0.904844797455;
    msg.y = 0.24714911714;
    msg.z = 0.798920115559;
    msg.k = 0.538676071897;
    msg.m = 0.886473511461;
    msg.n = 0.695943134462;
    msg.flags = 52U;

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
    msg.setTimeStamp(0.21649579026);
    msg.setSource(41981U);
    msg.setSourceEntity(109U);
    msg.setDestination(30806U);
    msg.setDestinationEntity(137U);
    msg.value = 0.256116658681;

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
    msg.setTimeStamp(0.0642787472484);
    msg.setSource(34946U);
    msg.setSourceEntity(69U);
    msg.setDestination(19208U);
    msg.setDestinationEntity(76U);
    msg.value = 0.331371216502;

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
    msg.setTimeStamp(0.498629583094);
    msg.setSource(23002U);
    msg.setSourceEntity(224U);
    msg.setDestination(13548U);
    msg.setDestinationEntity(46U);
    msg.value = 0.313200216589;

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
    msg.setTimeStamp(0.788437865215);
    msg.setSource(59698U);
    msg.setSourceEntity(149U);
    msg.setDestination(52271U);
    msg.setDestinationEntity(158U);
    msg.u = 0.877194956554;
    msg.v = 0.433106977223;
    msg.w = 0.0353331874002;
    msg.p = 0.441485705916;
    msg.q = 0.946396139933;
    msg.r = 0.217435462977;
    msg.flags = 13U;

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
    msg.setTimeStamp(0.123916741107);
    msg.setSource(16385U);
    msg.setSourceEntity(237U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(92U);
    msg.u = 0.438948519255;
    msg.v = 0.970166183039;
    msg.w = 0.205834913785;
    msg.p = 0.00539984029603;
    msg.q = 0.446811470621;
    msg.r = 0.48419869564;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.148764997419);
    msg.setSource(23854U);
    msg.setSourceEntity(205U);
    msg.setDestination(3108U);
    msg.setDestinationEntity(155U);
    msg.u = 0.251461366034;
    msg.v = 0.550818599533;
    msg.w = 0.446317047976;
    msg.p = 0.11994350042;
    msg.q = 0.268780878294;
    msg.r = 0.579563785949;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.374422812982);
    msg.setSource(62161U);
    msg.setSourceEntity(109U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 3042392198U;
    msg.start_lat = 0.876463470157;
    msg.start_lon = 0.0923943616068;
    msg.start_z = 0.228334394479;
    msg.start_z_units = 138U;
    msg.end_lat = 0.342424414435;
    msg.end_lon = 0.887747077385;
    msg.end_z = 0.639688516858;
    msg.end_z_units = 247U;
    msg.lradius = 0.162001390933;
    msg.flags = 163U;
    msg.x = 0.203046807687;
    msg.y = 0.203050251095;
    msg.z = 0.858183962127;
    msg.vx = 0.628219681808;
    msg.vy = 0.526584180709;
    msg.vz = 0.386370334738;
    msg.course_error = 0.65041554425;
    msg.eta = 22518U;

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
    msg.setTimeStamp(0.633903689192);
    msg.setSource(58532U);
    msg.setSourceEntity(76U);
    msg.setDestination(12268U);
    msg.setDestinationEntity(216U);
    msg.path_ref = 2709651892U;
    msg.start_lat = 0.369589538911;
    msg.start_lon = 0.353795125151;
    msg.start_z = 0.667320533867;
    msg.start_z_units = 170U;
    msg.end_lat = 0.556187129232;
    msg.end_lon = 0.525238448597;
    msg.end_z = 0.890762075516;
    msg.end_z_units = 170U;
    msg.lradius = 0.486691131182;
    msg.flags = 121U;
    msg.x = 0.515583096667;
    msg.y = 0.791476783751;
    msg.z = 0.0422344132319;
    msg.vx = 0.41517405604;
    msg.vy = 0.0366204342415;
    msg.vz = 0.0634207474278;
    msg.course_error = 0.991954525378;
    msg.eta = 32788U;

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
    msg.setTimeStamp(0.596903494677);
    msg.setSource(6074U);
    msg.setSourceEntity(140U);
    msg.setDestination(61058U);
    msg.setDestinationEntity(146U);
    msg.path_ref = 2906839525U;
    msg.start_lat = 0.570131306753;
    msg.start_lon = 0.153679278621;
    msg.start_z = 0.542668473416;
    msg.start_z_units = 160U;
    msg.end_lat = 0.509924292671;
    msg.end_lon = 0.172940392745;
    msg.end_z = 0.298385857456;
    msg.end_z_units = 110U;
    msg.lradius = 0.66527380082;
    msg.flags = 85U;
    msg.x = 0.727930283025;
    msg.y = 0.845656004081;
    msg.z = 0.189582159302;
    msg.vx = 0.90313449625;
    msg.vy = 0.307443435134;
    msg.vz = 0.0179049201631;
    msg.course_error = 0.221338444922;
    msg.eta = 59951U;

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
    msg.setTimeStamp(0.880702600692);
    msg.setSource(4748U);
    msg.setSourceEntity(140U);
    msg.setDestination(19718U);
    msg.setDestinationEntity(165U);
    msg.k = 0.565268803241;
    msg.m = 0.42674150047;
    msg.n = 0.341501055115;

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
    msg.setTimeStamp(0.851568317535);
    msg.setSource(32213U);
    msg.setSourceEntity(109U);
    msg.setDestination(14392U);
    msg.setDestinationEntity(97U);
    msg.k = 0.996773536641;
    msg.m = 0.100591983627;
    msg.n = 0.0314713744128;

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
    msg.setTimeStamp(0.677999490042);
    msg.setSource(2584U);
    msg.setSourceEntity(90U);
    msg.setDestination(55244U);
    msg.setDestinationEntity(235U);
    msg.k = 0.693510437575;
    msg.m = 0.185016606995;
    msg.n = 0.0299726738612;

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
    msg.setTimeStamp(0.947270101716);
    msg.setSource(36325U);
    msg.setSourceEntity(197U);
    msg.setDestination(51917U);
    msg.setDestinationEntity(40U);
    msg.p = 0.0662421273486;
    msg.i = 0.579104318221;
    msg.d = 0.92318544301;
    msg.a = 0.454515859559;

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
    msg.setTimeStamp(0.104337900804);
    msg.setSource(48361U);
    msg.setSourceEntity(195U);
    msg.setDestination(31384U);
    msg.setDestinationEntity(77U);
    msg.p = 0.546877899316;
    msg.i = 0.820412931472;
    msg.d = 0.126329063147;
    msg.a = 0.0434782863025;

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
    msg.setTimeStamp(0.39479166265);
    msg.setSource(21974U);
    msg.setSourceEntity(82U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(161U);
    msg.p = 0.74167865513;
    msg.i = 0.300089196658;
    msg.d = 0.699851679422;
    msg.a = 0.25027250843;

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
    msg.setTimeStamp(0.398543955242);
    msg.setSource(51391U);
    msg.setSourceEntity(162U);
    msg.setDestination(683U);
    msg.setDestinationEntity(73U);
    msg.op = 44U;

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
    msg.setTimeStamp(0.393309317835);
    msg.setSource(64862U);
    msg.setSourceEntity(5U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(10U);
    msg.op = 174U;

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
    msg.setTimeStamp(0.310074935905);
    msg.setSource(28554U);
    msg.setSourceEntity(53U);
    msg.setDestination(12418U);
    msg.setDestinationEntity(140U);
    msg.op = 184U;

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
    msg.setTimeStamp(0.887148813631);
    msg.setSource(56940U);
    msg.setSourceEntity(145U);
    msg.setDestination(5280U);
    msg.setDestinationEntity(50U);
    msg.timeout = 42120U;
    msg.lat = 0.235991697755;
    msg.lon = 0.999827482563;
    msg.z = 0.977804500963;
    msg.z_units = 130U;
    msg.speed = 0.777293011914;
    msg.speed_units = 222U;
    msg.roll = 0.206155920569;
    msg.pitch = 0.13213757261;
    msg.yaw = 0.609955444592;
    msg.custom.assign("ZWURDJTZCUMNWIJSPAIDALARCRHXGKRXNRJYPSUSYHCYTKBPLUNDOAEBIPBSDSZCVMNEETEHXBLPMEKMEDNVTDOOJOCVBWZIUCFJGOJUMLKXW");

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
    msg.setTimeStamp(0.184486698265);
    msg.setSource(488U);
    msg.setSourceEntity(107U);
    msg.setDestination(24208U);
    msg.setDestinationEntity(99U);
    msg.timeout = 4139U;
    msg.lat = 0.0265198831956;
    msg.lon = 0.462529419605;
    msg.z = 0.759957623816;
    msg.z_units = 248U;
    msg.speed = 0.714254277608;
    msg.speed_units = 173U;
    msg.roll = 0.754420537043;
    msg.pitch = 0.992123859446;
    msg.yaw = 0.718927821311;
    msg.custom.assign("QCFFXMSKSKKBMNAUBRYCXDWFFVPMWZPCBPTRWHUXENZJVPVUCLQWXRWJPCNSAOKABQHXJTDMYQYTKPTOKWKQOYIPHYGXTSDMADNLOHXZAQHIEQOJTCNZAPNEADCLSULWFABDTTUFKPJ");

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
    msg.setTimeStamp(0.240211293192);
    msg.setSource(45375U);
    msg.setSourceEntity(24U);
    msg.setDestination(10758U);
    msg.setDestinationEntity(15U);
    msg.timeout = 8863U;
    msg.lat = 0.0593650934165;
    msg.lon = 0.363717057704;
    msg.z = 0.863292753296;
    msg.z_units = 191U;
    msg.speed = 0.100971635733;
    msg.speed_units = 77U;
    msg.roll = 0.474400497928;
    msg.pitch = 0.233245793142;
    msg.yaw = 0.548803350001;
    msg.custom.assign("RVPMISLXOSROPBMAATGFCUOSSPHVNXCMYXYMVEMNQRSPSUUDJTXLHQDLYEERUBT");

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
    msg.setTimeStamp(0.184550965665);
    msg.setSource(53997U);
    msg.setSourceEntity(212U);
    msg.setDestination(12540U);
    msg.setDestinationEntity(106U);
    msg.timeout = 54958U;
    msg.lat = 0.610044080054;
    msg.lon = 0.731126632208;
    msg.z = 0.973348330464;
    msg.z_units = 158U;
    msg.speed = 0.289169998279;
    msg.speed_units = 15U;
    msg.duration = 50703U;
    msg.radius = 0.199698524339;
    msg.flags = 214U;
    msg.custom.assign("OZJAZKENAQVCWJKWPVZDGVFUCAVGHINCPYXQIKVCNFFQQPUBMUCPIFRGDKXGOEIVMTBDAKWUDQVJZQHOAUWBCOMHDXSEBTM");

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
    msg.setTimeStamp(0.421943613669);
    msg.setSource(25435U);
    msg.setSourceEntity(81U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(77U);
    msg.timeout = 39036U;
    msg.lat = 0.970702760202;
    msg.lon = 0.0400872057823;
    msg.z = 0.584809090605;
    msg.z_units = 89U;
    msg.speed = 0.303100977569;
    msg.speed_units = 220U;
    msg.duration = 64578U;
    msg.radius = 0.322738352088;
    msg.flags = 115U;
    msg.custom.assign("UEOKBHNHZXWWIBCRBGBMYTDGCHGGFLDNFFVLRTGADDKHNPRXHWPAORAEZHXJERSVOPKUTDSZIKTERGQJEFEIYOZRFRCGVWNPPBSYM");

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
    msg.setTimeStamp(0.819552121274);
    msg.setSource(51968U);
    msg.setSourceEntity(192U);
    msg.setDestination(56782U);
    msg.setDestinationEntity(36U);
    msg.timeout = 15652U;
    msg.lat = 0.643924536386;
    msg.lon = 0.134440158512;
    msg.z = 0.26100280207;
    msg.z_units = 210U;
    msg.speed = 0.460986496344;
    msg.speed_units = 1U;
    msg.duration = 50339U;
    msg.radius = 0.929714115877;
    msg.flags = 96U;
    msg.custom.assign("UHIQWPBLTSBHRANDGGQIBWSMFQGTTZMPGHROQIIZARDHFKCAQHTNCJZVMSWWTONIHXLWNYPIVVRYALTEQFLKCAFSOUSMNDHPUOMFXUWMRQRWGUOBVEEG");

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
    msg.setTimeStamp(0.44963741253);
    msg.setSource(14268U);
    msg.setSourceEntity(44U);
    msg.setDestination(39765U);
    msg.setDestinationEntity(252U);
    msg.custom.assign("SVIVZCIRGFSZALCQVUWQSQCZIHUXTTRHOXGYYWXVXFLWIFMLYEYNMEECPFZIOYNCPADLXMSGUQIEQABOZKWRVERCKLUTVTJBZWVMJQCONKLPDKNESWVWNCPDEZHYDDHBWZD");

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
    msg.setTimeStamp(0.521552577417);
    msg.setSource(14083U);
    msg.setSourceEntity(113U);
    msg.setDestination(5249U);
    msg.setDestinationEntity(197U);
    msg.custom.assign("EPLHJJFWXQMDZUXVHVBQATTNWCLUBCTRSLUBYKTOKZFXYUYCIDPKIVMSEDXDZMUZXMQYFWKPSRCPJPNJOUYFIAVAGAQBFZMFLICBGJ");

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
    msg.setTimeStamp(0.0195607604173);
    msg.setSource(3652U);
    msg.setSourceEntity(149U);
    msg.setDestination(41257U);
    msg.setDestinationEntity(63U);
    msg.custom.assign("OKZNDXKQRYDTJBYBRQSJQYTZFIUDEOFODAOIXHUYMYIMDVVGKOCKCMXVHJEIWCMKRBXAMOERKLQHHHXYDFXRIJU");

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
    msg.setTimeStamp(0.284422092788);
    msg.setSource(420U);
    msg.setSourceEntity(196U);
    msg.setDestination(41252U);
    msg.setDestinationEntity(194U);
    msg.timeout = 24966U;
    msg.lat = 0.24405662282;
    msg.lon = 0.821147104339;
    msg.z = 0.220266423549;
    msg.z_units = 178U;
    msg.duration = 24953U;
    msg.speed = 0.879580304516;
    msg.speed_units = 177U;
    msg.type = 233U;
    msg.radius = 0.407492683885;
    msg.length = 0.0417790259489;
    msg.bearing = 0.937542218338;
    msg.direction = 147U;
    msg.custom.assign("HZJUNALADNGDMLOPCPBZJLEJKAKBCSQHEMFSMKPXCXUGTNJAFCYHDRLT");

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
    msg.setTimeStamp(0.736643352795);
    msg.setSource(58978U);
    msg.setSourceEntity(95U);
    msg.setDestination(53582U);
    msg.setDestinationEntity(201U);
    msg.timeout = 4416U;
    msg.lat = 0.764916629074;
    msg.lon = 0.776067458496;
    msg.z = 0.330073056606;
    msg.z_units = 54U;
    msg.duration = 51086U;
    msg.speed = 0.25571706965;
    msg.speed_units = 84U;
    msg.type = 223U;
    msg.radius = 0.735228228588;
    msg.length = 0.908560745889;
    msg.bearing = 0.491950271658;
    msg.direction = 24U;
    msg.custom.assign("HHFHJBTTXEQDMQFCAYENLNKWZLJKOAWPWSYGKZBDYCIJKECGRPTBDXCOKEBFIUISGDLZXIHRMSCVULVQQXLXOXPDDTUOBLSNORFZIXZFTEJSDBIPRWYATAKP");

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
    msg.setTimeStamp(0.223330508234);
    msg.setSource(17925U);
    msg.setSourceEntity(19U);
    msg.setDestination(64348U);
    msg.setDestinationEntity(204U);
    msg.timeout = 53802U;
    msg.lat = 0.11415557744;
    msg.lon = 0.823335745843;
    msg.z = 0.252499517459;
    msg.z_units = 200U;
    msg.duration = 60894U;
    msg.speed = 0.598382314584;
    msg.speed_units = 136U;
    msg.type = 87U;
    msg.radius = 0.881395725159;
    msg.length = 0.58137949502;
    msg.bearing = 0.871887592975;
    msg.direction = 25U;
    msg.custom.assign("DMTKIREWVZJNQNAJBEGPJSDYHIGFWHINTXVLWBBFDXVBRXSWIQXCVSYYPHSMSOOLTSDQJEONBSPBCLNITRWMCMUTHZRVGOGLWVKRWOQZQMIVUUXJJPHGZQUADAYRGNBUZFNECHQKWEYNQGGHQKFBCDYHPOADAENGILHJKLILFOSWLVFZXTXUSFEUWXYJACBMTOPRXJOUDYST");

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
    msg.setTimeStamp(0.363869650763);
    msg.setSource(16481U);
    msg.setSourceEntity(253U);
    msg.setDestination(45424U);
    msg.setDestinationEntity(83U);
    msg.duration = 33890U;
    msg.custom.assign("QXALGHJNMEBRRXJQCSEVTWKURKTGADMXGVMJEKLSQRTETYMTTEEUAHGDLQLOULDLJBJHUVKHCPJYVNZHASITIBRODUDGQJTOPPKRNYFLIFCOMDJSWWCIWSBEAZGCYUWBHXLANPQYPYHDVLHQKTMWNFFCKSSPUYVGYXDBFUSXOIGOZABYMQKLXKIHBIABMVFGFZBYIWTCCZFJOUONEMPXD");

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
    msg.setTimeStamp(0.303861780662);
    msg.setSource(16243U);
    msg.setSourceEntity(243U);
    msg.setDestination(36177U);
    msg.setDestinationEntity(194U);
    msg.duration = 28859U;
    msg.custom.assign("KKYEYKSPGHCZKENDZGJXR");

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
    msg.setTimeStamp(0.993830029546);
    msg.setSource(43692U);
    msg.setSourceEntity(193U);
    msg.setDestination(39127U);
    msg.setDestinationEntity(211U);
    msg.duration = 50340U;
    msg.custom.assign("FAIZWTJZVSHTCQTHDTPCXKRXFVMYZNZMWJG");

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
    msg.setTimeStamp(0.96194254083);
    msg.setSource(21761U);
    msg.setSourceEntity(38U);
    msg.setDestination(26505U);
    msg.setDestinationEntity(183U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3870796853U;
    tmp_msg_0.start_lat = 0.291820324265;
    tmp_msg_0.start_lon = 0.653007409268;
    tmp_msg_0.start_z = 0.368424545096;
    tmp_msg_0.start_z_units = 235U;
    tmp_msg_0.end_lat = 0.566270948663;
    tmp_msg_0.end_lon = 0.790304281839;
    tmp_msg_0.end_z = 0.267458955477;
    tmp_msg_0.end_z_units = 166U;
    tmp_msg_0.speed = 0.860001501575;
    tmp_msg_0.speed_units = 19U;
    tmp_msg_0.lradius = 0.190408784614;
    tmp_msg_0.flags = 248U;
    msg.control.set(tmp_msg_0);
    msg.duration = 44067U;
    msg.custom.assign("XCVDDGIVMUDALIZQSIBVNGAFNJWNIRTVZBJOSMUSKOZJUGPBFXDDSLQNMP");

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
    msg.setTimeStamp(0.325799018138);
    msg.setSource(18306U);
    msg.setSourceEntity(232U);
    msg.setDestination(62073U);
    msg.setDestinationEntity(110U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.534102025109;
    msg.control.set(tmp_msg_0);
    msg.duration = 371U;
    msg.custom.assign("ILRJPEMZAFMFGPVDTUCKXQIRGEXBCSODSKPNGKRUJGPPWVRDVFOSACHRVITYQDNGBUZGTCSBRMJLLCHXIWMWEAKUQHXYDLJOMHTEZFUSCHMDHQCDKWPZNDRPFUQUFKDGTXYWSUCJDFASCNLXYPLGUUVZLNQYVFSHWLBWXAKPEEGZZZZFTVAMIJNHQGKWXYLCNBFHARREIRBKOIJAVEOTJYVOJNQMTQNMOBAJXHIINYBYBL");

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
    msg.setTimeStamp(0.768173909404);
    msg.setSource(30737U);
    msg.setSourceEntity(172U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(216U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.295994911055;
    tmp_msg_0.z_units = 101U;
    msg.control.set(tmp_msg_0);
    msg.duration = 20486U;
    msg.custom.assign("NVZYOXLUHAIWDDTLARMWYTDFCFWCVKNUFHOLMGFQJKGBNXOMEBYRPHHJCNKSUFWAZRBTHNXQXIYAOWPWDCZHKCMHCLUFRAIVIIGPVXTCHDPOAYJCRNEWKGQBQXEBAYMFCQBEJGSLTSDEVJOGJJKLLZCSPZSFWJXIOVGVQPYLSGXOOAUWUDEYZZMREFNQRIVZIEMN");

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
    msg.setTimeStamp(0.423472610416);
    msg.setSource(38384U);
    msg.setSourceEntity(165U);
    msg.setDestination(58910U);
    msg.setDestinationEntity(194U);
    msg.timeout = 26812U;
    msg.lat = 0.631559791853;
    msg.lon = 0.359922771995;
    msg.z = 0.152761376862;
    msg.z_units = 216U;
    msg.speed = 0.318436435559;
    msg.speed_units = 58U;
    msg.bearing = 0.283743058662;
    msg.cross_angle = 0.87174274789;
    msg.width = 0.00513362060527;
    msg.length = 0.231884728775;
    msg.hstep = 0.0200598525477;
    msg.coff = 239U;
    msg.alternation = 50U;
    msg.flags = 162U;
    msg.custom.assign("VUBLPYMEHVUATPAKXUERNJOPSCLXHTPTXOZWMBTWFJIAWIOYNHNCIQMMLXAZKWWDKNMKWGSAHEOTQUAQUJRKR");

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
    msg.setTimeStamp(0.460683240406);
    msg.setSource(23632U);
    msg.setSourceEntity(118U);
    msg.setDestination(32674U);
    msg.setDestinationEntity(144U);
    msg.timeout = 54746U;
    msg.lat = 0.151955011789;
    msg.lon = 0.271367380844;
    msg.z = 0.00599174247222;
    msg.z_units = 17U;
    msg.speed = 0.467004914659;
    msg.speed_units = 159U;
    msg.bearing = 0.55061826197;
    msg.cross_angle = 0.634360794077;
    msg.width = 0.505307024749;
    msg.length = 0.364134105998;
    msg.hstep = 0.347827851782;
    msg.coff = 254U;
    msg.alternation = 239U;
    msg.flags = 187U;
    msg.custom.assign("BMWOMJOMHJCBBQXCYTXLFYVTNLTDASDTJCEDZDUDTAIYGIKXQIEVQQRBDQYUYXNEMIKYSVJIWPKIGYNFSEUOKSLYPABWKPCGWNCLRLNRTRYTHWNLOCSFIGNSFPFBKEXCMZAVISLRPURVZJBSCTVZKQJWGXMUUPSABG");

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
    msg.setTimeStamp(0.294638444508);
    msg.setSource(38065U);
    msg.setSourceEntity(213U);
    msg.setDestination(47104U);
    msg.setDestinationEntity(60U);
    msg.timeout = 27942U;
    msg.lat = 0.125807871731;
    msg.lon = 0.0591781993363;
    msg.z = 0.5815924368;
    msg.z_units = 138U;
    msg.speed = 0.91742326267;
    msg.speed_units = 11U;
    msg.bearing = 0.129934924668;
    msg.cross_angle = 0.492543850067;
    msg.width = 0.431395793808;
    msg.length = 0.633540933438;
    msg.hstep = 0.710688838974;
    msg.coff = 211U;
    msg.alternation = 166U;
    msg.flags = 36U;
    msg.custom.assign("MWTJZPYQAXYDUEEOZARXBZWBZDZQXLOWVQNMVMWHHALIEGFUCSSVEYYHKRIFQOMFFIYZBBEVJTKIHJBOMJJRWCDCWTYLHGEELIJSSAJOQYKMUOFWCUSFKDCSPACKAXGLDZEPAGQNGDMVBRXMDNSTYNRONVNTLZIKIIGXNFSOUQUPGXCIKHLPZFUPRKXMBIBBLABRVGNDCWAKUENJQO");

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
    msg.setTimeStamp(0.687785417659);
    msg.setSource(7498U);
    msg.setSourceEntity(171U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(198U);
    msg.timeout = 65256U;
    msg.lat = 0.383272205193;
    msg.lon = 0.249584041773;
    msg.z = 0.984069285592;
    msg.z_units = 167U;
    msg.speed = 0.847250867238;
    msg.speed_units = 241U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.880601141818;
    tmp_msg_0.y = 0.632400523487;
    tmp_msg_0.z = 0.307123711973;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PXCAZJCRMJESZKZJRDTSBJPPGFKDGTRWFZCFSOMOTWEYRJWHBQWCNPNENFDRDMBTBHLIFQNMEBXFHEULWDSVQDUXAKZIQREXCOJZUCLPSYZTKHYIHAAZXPQHGVSQJWEVBVVRUMAOWXYVCYRYYWXADAMGBOLBKPNVXWSIUYTRRGMUGJGTHCXGF");

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
    msg.setTimeStamp(0.15275934457);
    msg.setSource(14958U);
    msg.setSourceEntity(132U);
    msg.setDestination(11640U);
    msg.setDestinationEntity(142U);
    msg.timeout = 34041U;
    msg.lat = 0.720015619425;
    msg.lon = 0.636129957998;
    msg.z = 0.946368199162;
    msg.z_units = 50U;
    msg.speed = 0.759561860958;
    msg.speed_units = 189U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.137134071087;
    tmp_msg_0.y = 0.0863670216161;
    tmp_msg_0.z = 0.19346654767;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SUXLAGIOZKHGXEUTTSNBKRVVGRMCMEFMQRZKVZVWJFAPRPUMKOYJUYSNUHVCTDITEXZFRJSOEUYAKVZCPOPYOTWGEQDJHZSVRZQOAQEOJJLIBEAIDMYPTDASLKDVPIGCUFHPSLLNNMQULTFKCHPAKPDCHAYGBXIWNCMOJWLXJBHXFEFSISHRCQNTFQQCJYBMMCLNIWENWAMZTGUDABLZOX");

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
    msg.setTimeStamp(0.594990732167);
    msg.setSource(8997U);
    msg.setSourceEntity(153U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(234U);
    msg.timeout = 8703U;
    msg.lat = 0.960022439106;
    msg.lon = 0.500291749902;
    msg.z = 0.0504722103557;
    msg.z_units = 88U;
    msg.speed = 0.896354949457;
    msg.speed_units = 208U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.0109489302907;
    tmp_msg_0.y = 0.0808848484824;
    tmp_msg_0.z = 0.448505997122;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RYGZKOKVGWFFSKUCZIETPFADUNQYDPAABOBDROMYHIJRPLHBYMUWMOGJDCNGQLAARHGWHCZCWNINMGUPRNQYXBPXVZVEBECEFAYZXLNXXUTFSHKHUCCDSJOZBBLXYQEYLTLLFFUJPTARFVW");

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
    msg.setTimeStamp(0.74997827426);
    msg.setSource(64773U);
    msg.setSourceEntity(229U);
    msg.setDestination(54089U);
    msg.setDestinationEntity(99U);
    msg.x = 0.797905329968;
    msg.y = 0.22750446438;
    msg.z = 0.261098927433;

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
    msg.setTimeStamp(0.108286953604);
    msg.setSource(35070U);
    msg.setSourceEntity(221U);
    msg.setDestination(18452U);
    msg.setDestinationEntity(118U);
    msg.x = 0.429542660189;
    msg.y = 0.209324179263;
    msg.z = 0.534597656082;

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
    msg.setTimeStamp(0.618786040424);
    msg.setSource(48018U);
    msg.setSourceEntity(70U);
    msg.setDestination(31324U);
    msg.setDestinationEntity(4U);
    msg.x = 0.64828809529;
    msg.y = 0.541745625143;
    msg.z = 0.119589359874;

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
    msg.setTimeStamp(0.260125979688);
    msg.setSource(55838U);
    msg.setSourceEntity(240U);
    msg.setDestination(53068U);
    msg.setDestinationEntity(156U);
    msg.timeout = 58123U;
    msg.lat = 0.314195335435;
    msg.lon = 0.497878623831;
    msg.z = 0.53073425865;
    msg.z_units = 60U;
    msg.amplitude = 0.559129960635;
    msg.pitch = 0.19929917006;
    msg.speed = 0.664994188399;
    msg.speed_units = 232U;
    msg.custom.assign("VYXRNLXARVUPTEHVGKRNQXLSJGOECDDKOXBKPMHPHRCRCFYDUZBTQZYPKNAOGXPTOFLLZYALVTPVITTPUFQSFSDDJRFIOJVWABNNSYLJNJYVPPKSRUQOTBWUZJVSWYEWQZZLDIEEZQYAZUEYBHDMBXAREGMUWOIUMQZJZJCKWLUMCSEGWKIDKAHKOHMIROTTNSMNCWNBBAETSAYGLKDVMCIWUIFIXBVQHRJSOJIHGLFQCXA");

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
    msg.setTimeStamp(0.685061939182);
    msg.setSource(62287U);
    msg.setSourceEntity(164U);
    msg.setDestination(5336U);
    msg.setDestinationEntity(201U);
    msg.timeout = 17061U;
    msg.lat = 0.27516273251;
    msg.lon = 0.149706341338;
    msg.z = 0.973038893526;
    msg.z_units = 207U;
    msg.amplitude = 0.580264168322;
    msg.pitch = 0.0922873870599;
    msg.speed = 0.940950254362;
    msg.speed_units = 35U;
    msg.custom.assign("VTJUSRAZXAZIGFHBIZNHYFZRZSRQHNTDEYKMPVDUTQOMDMAPLXDVBLUZZWAHSQQYAVSFUAZFBMGDOJXHGBAFNTNJRNVORXKOFQGTJLDHOJMFORDTKSLGQBNB");

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
    msg.setTimeStamp(0.461556822326);
    msg.setSource(34801U);
    msg.setSourceEntity(169U);
    msg.setDestination(43334U);
    msg.setDestinationEntity(156U);
    msg.timeout = 12700U;
    msg.lat = 0.798166114616;
    msg.lon = 0.492652992392;
    msg.z = 0.0724563258895;
    msg.z_units = 121U;
    msg.amplitude = 0.0149548746302;
    msg.pitch = 0.404025070849;
    msg.speed = 0.673812340489;
    msg.speed_units = 249U;
    msg.custom.assign("PYUZXNSIUQKKSYVATWMSAIZWFWZGSXEDHLURRXVKSKLMUMJDWVBBNZFTQWNAGOAMEEMJBEIRPHVTFKTUBZRZBIN");

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
    msg.setTimeStamp(0.688478224077);
    msg.setSource(36083U);
    msg.setSourceEntity(52U);
    msg.setDestination(941U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.795032345466);
    msg.setSource(57180U);
    msg.setSourceEntity(21U);
    msg.setDestination(34766U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.428006683443);
    msg.setSource(14246U);
    msg.setSourceEntity(54U);
    msg.setDestination(59893U);
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
    msg.setTimeStamp(0.483195953097);
    msg.setSource(38713U);
    msg.setSourceEntity(241U);
    msg.setDestination(38370U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.439245517487;
    msg.lon = 0.735667771614;
    msg.z = 0.795952678576;
    msg.z_units = 175U;
    msg.radius = 0.11960141692;
    msg.duration = 36143U;
    msg.speed = 0.124898447893;
    msg.speed_units = 0U;
    msg.custom.assign("VAAADZULTKQUYKRZVOVM");

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
    msg.setTimeStamp(0.434880943494);
    msg.setSource(16139U);
    msg.setSourceEntity(241U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.235318576464;
    msg.lon = 0.649630733456;
    msg.z = 0.827572912842;
    msg.z_units = 40U;
    msg.radius = 0.843074836724;
    msg.duration = 29470U;
    msg.speed = 0.135894535827;
    msg.speed_units = 74U;
    msg.custom.assign("NNGLTLKJOJFOKZHYOWVESQLTASSPPQXLWZKBBGRDTCORFDHHLKGSIEUFSMRZFYABCXCFATJJJZXAQPLVSAQBGXQTXUIHHZULWPRTXICYYTLTAIPCNYMGDCWRHNUQDIZYVKKTIIFSHNTRAGIKLUWBODPSZJWMJMWVNCOOQDEDPVSDWHBQEJLQUCOEFBEVMNUWCJSOXBZBQDMNRYKPEEXKIZMVREORXYNWGJUVYFMEYFGIDHPVGFNBMCMURAV");

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
    msg.setTimeStamp(0.735446951948);
    msg.setSource(25425U);
    msg.setSourceEntity(230U);
    msg.setDestination(13551U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.118380837571;
    msg.lon = 0.674663856975;
    msg.z = 0.6698290072;
    msg.z_units = 151U;
    msg.radius = 0.15425575285;
    msg.duration = 28535U;
    msg.speed = 0.600547949162;
    msg.speed_units = 119U;
    msg.custom.assign("PMGPAIZSSBKEKPQFCOFARXFZAWGALFCBWWSNVJLEDXBHANVOPLMNDECIHJXYYZDTJTFXXYWPHPKKMOLMGGOJPRYDRMUTWKNNHMLEEHOCUUCRWNUDI");

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
    msg.setTimeStamp(0.28784136184);
    msg.setSource(1889U);
    msg.setSourceEntity(119U);
    msg.setDestination(49398U);
    msg.setDestinationEntity(154U);
    msg.timeout = 57470U;
    msg.flags = 140U;
    msg.lat = 0.70215115537;
    msg.lon = 0.710182798734;
    msg.start_z = 0.14929993795;
    msg.start_z_units = 181U;
    msg.end_z = 0.493640386444;
    msg.end_z_units = 239U;
    msg.radius = 0.951740072886;
    msg.speed = 0.999915851057;
    msg.speed_units = 113U;
    msg.custom.assign("WJLZACXWGYAXHSYPEOXHZGNQJLPJMIEANYLFBDLBQRTUBTNTCVRAPHGBTSGDTPSXBNBSDFADKYWZFEYXEYCMUCFPUXFDCKWHLEBZVUTTNEJYKVYQMDUOPIJKKZ");

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
    msg.setTimeStamp(0.964335615957);
    msg.setSource(54156U);
    msg.setSourceEntity(229U);
    msg.setDestination(45989U);
    msg.setDestinationEntity(93U);
    msg.timeout = 36201U;
    msg.flags = 148U;
    msg.lat = 0.0383882631201;
    msg.lon = 0.414455962911;
    msg.start_z = 0.740585430103;
    msg.start_z_units = 254U;
    msg.end_z = 0.0661311088336;
    msg.end_z_units = 177U;
    msg.radius = 0.739947812758;
    msg.speed = 0.962068125067;
    msg.speed_units = 88U;
    msg.custom.assign("QEQHGATOQUFCYECYIFHUOPXKAKREHPDYMHZRGDJJTYTGGJNFMLSFTNOYBSAOQCMSGHLRPQDDVYWAJWUNXLODSPCZCWBQVKULFHIEWKASQNPGTVBMJMKSRXSQZBDKA");

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
    msg.setTimeStamp(0.203412959957);
    msg.setSource(55737U);
    msg.setSourceEntity(32U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(247U);
    msg.timeout = 2495U;
    msg.flags = 183U;
    msg.lat = 0.859907555905;
    msg.lon = 0.303885556915;
    msg.start_z = 0.829793185589;
    msg.start_z_units = 130U;
    msg.end_z = 0.620237384968;
    msg.end_z_units = 103U;
    msg.radius = 0.953544279745;
    msg.speed = 0.178721578303;
    msg.speed_units = 191U;
    msg.custom.assign("LIRKPQYGTMUNVFBSTOKDJSWCKAKNWBLQXTLANVZYBWSGTIQQEZUBACPWMJWXRFDKMJXZZHWRYUFKSELZMJ");

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
    msg.setTimeStamp(0.38965193804);
    msg.setSource(62992U);
    msg.setSourceEntity(133U);
    msg.setDestination(16030U);
    msg.setDestinationEntity(63U);
    msg.timeout = 45653U;
    msg.lat = 0.70514251865;
    msg.lon = 0.167880882406;
    msg.z = 0.0435315521951;
    msg.z_units = 151U;
    msg.speed = 0.301148475872;
    msg.speed_units = 101U;
    msg.custom.assign("NIOJUWKWSUGPCGSQNKFTUROKGOZQEYYXGVKUCRWFEKLEFBOXDCUBICFLRXFXGXSPPMEBDGCAIQCXMCTBSOFFEJSWMVSMGHNTVMAKFOAZYQVNOJPGJBHYHVTIDAHD");

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
    msg.setTimeStamp(0.891773343642);
    msg.setSource(55798U);
    msg.setSourceEntity(176U);
    msg.setDestination(42188U);
    msg.setDestinationEntity(247U);
    msg.timeout = 60715U;
    msg.lat = 0.640211215216;
    msg.lon = 0.554610064268;
    msg.z = 0.991247726934;
    msg.z_units = 17U;
    msg.speed = 0.0501775954989;
    msg.speed_units = 85U;
    msg.custom.assign("WCBMJLOXVAVPEHPGBHQSUGLKSQIIMHZARMWDUNEEYYLMRFQQKECWGBFOUKTDMVPQGOBBXDDYYSKDCNHTSK");

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
    msg.setTimeStamp(0.836599958261);
    msg.setSource(1748U);
    msg.setSourceEntity(242U);
    msg.setDestination(49528U);
    msg.setDestinationEntity(38U);
    msg.timeout = 27042U;
    msg.lat = 0.815180537912;
    msg.lon = 0.936042809938;
    msg.z = 0.422716754607;
    msg.z_units = 104U;
    msg.speed = 0.210990931174;
    msg.speed_units = 142U;
    msg.custom.assign("PJYRDLRQPZXDFGFYPUIJCEAHGEQLMLAPTKNMVJNCBSJGTROUAIMTMDFFFFTREMSSQYAYHBROKBQBVZDZDPSXN");

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
    msg.setTimeStamp(0.783750082896);
    msg.setSource(48917U);
    msg.setSourceEntity(193U);
    msg.setDestination(60749U);
    msg.setDestinationEntity(35U);
    msg.x = 0.911479292722;
    msg.y = 0.911663256803;
    msg.z = 0.108931382812;
    msg.t = 0.134466411231;

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
    msg.setTimeStamp(0.830095280849);
    msg.setSource(27239U);
    msg.setSourceEntity(71U);
    msg.setDestination(49963U);
    msg.setDestinationEntity(179U);
    msg.x = 0.921616560464;
    msg.y = 0.363765077589;
    msg.z = 0.732829790545;
    msg.t = 0.96289860835;

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
    msg.setTimeStamp(0.148514099198);
    msg.setSource(7419U);
    msg.setSourceEntity(82U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(138U);
    msg.x = 0.172306230041;
    msg.y = 0.686993278469;
    msg.z = 0.244037741708;
    msg.t = 0.471075443859;

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
    msg.setTimeStamp(0.552522654707);
    msg.setSource(7604U);
    msg.setSourceEntity(232U);
    msg.setDestination(57648U);
    msg.setDestinationEntity(228U);
    msg.timeout = 35628U;
    msg.name.assign("FPTMQWOKFKKUTSNBUUJLJMNTTLQCFJJVVJSHJEWRFDWOVMGRIQHYRCMIEYGMGWHXLTRKVAOCECHOMYDZQKAKUYZOHGACNOIGWOTQZIZQNVDHEZB");
    msg.custom.assign("ANWKYIZIPTDWVSNHXLDCYKRMEOCWOWAGFIUSMSWJLYVHKXABMGWSUDUHPYLPMUKZNFWQDLHHTXXZENNEPCXPKPJGTCLSFOTYBJJOUVSYTYYOJRRXUIMVWFHLJYVCAILFTFJUKKGGPNBOEYKNTHDJORDHKOQFVNMHGCALPRXRBQSBSEQCXQIGFBEWZETLZAVMOMDTRRLCZXFFAGAGCVZGPHQDCVBD");

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
    msg.setTimeStamp(0.876480833357);
    msg.setSource(44422U);
    msg.setSourceEntity(211U);
    msg.setDestination(46856U);
    msg.setDestinationEntity(116U);
    msg.timeout = 22526U;
    msg.name.assign("HBBTKFASVZAJPJCSCHKWOMATJYUVNGMTANMDBJJGGRMGUANCDSRCOEELKKUZLQVLTZWTZXJODAQZMPRXKOYEOHSFSOHWHIUSHXUUZNOBRYJRMFFKFVKWLLEEVPWEMDKQIIRILVNDPGMBCTSPQYQGCBNLFNRZQIHSSOFJYYDXUWPBZVPR");
    msg.custom.assign("PIBPMRWWIWAVJCPCUOYIFYSTCANMXKSLTNFFFRVMUEKJRJZZEHGFCYNAPMMKJXBFSXQJTYRBAHINVDOLSOVXVPOCSZKXCYKNYBKCTOVTBZFECVTMPLKEQRMBUZWGYCTJTEFLVSSMKNLKPHDBOBHDNXQWVHXXRUYNBRQPGMLHAFBWNYEWHQO");

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
    msg.setTimeStamp(0.356865748051);
    msg.setSource(44767U);
    msg.setSourceEntity(1U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(206U);
    msg.timeout = 40328U;
    msg.name.assign("OTHBGSDJSTEWWYPLVBEFHRZVUVWYNEJBKNURQWSMEYMKLIPRXXIQFJEHGGMONRYBWYNCORXPEXSVCVZGFOVDEWBFOIZNKCKNPMYLODTENKZUESTPXLFTMTXWMPCFYMTXTQZCUWWKUQJDQRJZMZACVIGJHUSHGN");
    msg.custom.assign("NXLZWNDPTKILIWXSPEYOKOREMNDXOPUMFPVWQUBFGFMTJAINRCQQZGBIFYNYTIGHJQOFBSCCSTIGQRPAVPFOQTZZXDFEMSTGKUKYAGBUBVLMOJW");

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
    msg.setTimeStamp(0.559583356121);
    msg.setSource(4566U);
    msg.setSourceEntity(192U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.557380994456;
    msg.lon = 0.167498328708;
    msg.z = 0.254607982697;
    msg.z_units = 185U;
    msg.speed = 0.747304152779;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.319427112436;
    tmp_msg_0.y = 0.0615607297248;
    tmp_msg_0.z = 0.775867755003;
    tmp_msg_0.t = 0.766544848035;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.266728573074;
    msg.custom.assign("OEUUSDNRIYMMSCVALPPLVCIOKQJAAMTHUMEXKRGWBUOPVJONKXWFJYHBYWDYJERZZERETPHDAYETGUGBBHXTQTHFFNDDZFMQVKDHZNJGOART");

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
    msg.setTimeStamp(0.496971922128);
    msg.setSource(63883U);
    msg.setSourceEntity(98U);
    msg.setDestination(23864U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.896250831013;
    msg.lon = 0.465723825869;
    msg.z = 0.000214424054507;
    msg.z_units = 52U;
    msg.speed = 0.517471801244;
    msg.speed_units = 58U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.581746206303;
    tmp_msg_0.y = 0.766901611786;
    tmp_msg_0.z = 0.822803668535;
    tmp_msg_0.t = 0.223086396698;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.491085370059;
    msg.custom.assign("BVFOYLCKONSMYHDTAIROTAHELQUQBUMWXIJFEXTNFXKMYNPXLDHAZGJBRMRFEDRRBQYXVDTRESCLJAPRWQOPMBYDTSCWGVXFVZWGZVRRTMOIJKCIBMUQXSUOUECVPIXRTIZZKUHQNHEKOCDXHNWBEYJELAAWVWMEFHLKTSONBJALISPPBCAYYMZZMCIKSVYJZEQWGGL");

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
    msg.setTimeStamp(0.151104453436);
    msg.setSource(11022U);
    msg.setSourceEntity(130U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.522299109521;
    msg.lon = 0.488036508739;
    msg.z = 0.0792602683484;
    msg.z_units = 121U;
    msg.speed = 0.989386951028;
    msg.speed_units = 10U;
    msg.start_time = 0.388298796362;
    msg.custom.assign("LDYTDWKIYXOHCWYJLTHBPQZLGJDJSEKMZEMCWOGXIGJDHNSRGACTKTCIYGGQNXJOFLHFUQKNFBQHDDVREMUUWOKFPXAQIJMSRABOCPWGBRPFORCHYWOZZPCFTYLKTJTMSMCIO");

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
    msg.setTimeStamp(0.345277550349);
    msg.setSource(36084U);
    msg.setSourceEntity(70U);
    msg.setDestination(37026U);
    msg.setDestinationEntity(127U);
    msg.vid = 16433U;
    msg.off_x = 0.278631165478;
    msg.off_y = 0.638360386813;
    msg.off_z = 0.337291351501;

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
    msg.setTimeStamp(0.265158840707);
    msg.setSource(42370U);
    msg.setSourceEntity(18U);
    msg.setDestination(60015U);
    msg.setDestinationEntity(63U);
    msg.vid = 33065U;
    msg.off_x = 0.265737632248;
    msg.off_y = 0.527141956893;
    msg.off_z = 0.796851227844;

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
    msg.setTimeStamp(0.413767025653);
    msg.setSource(7863U);
    msg.setSourceEntity(201U);
    msg.setDestination(55479U);
    msg.setDestinationEntity(103U);
    msg.vid = 12694U;
    msg.off_x = 0.342122350085;
    msg.off_y = 0.604917856906;
    msg.off_z = 0.284981011209;

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
    msg.setTimeStamp(0.727286625843);
    msg.setSource(15664U);
    msg.setSourceEntity(73U);
    msg.setDestination(42123U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.984370222851);
    msg.setSource(58825U);
    msg.setSourceEntity(17U);
    msg.setDestination(4249U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.498113408607);
    msg.setSource(30083U);
    msg.setSourceEntity(109U);
    msg.setDestination(185U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.170735128736);
    msg.setSource(59351U);
    msg.setSourceEntity(16U);
    msg.setDestination(63201U);
    msg.setDestinationEntity(213U);
    msg.mid = 2387U;

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
    msg.setTimeStamp(0.319976702994);
    msg.setSource(17928U);
    msg.setSourceEntity(76U);
    msg.setDestination(45946U);
    msg.setDestinationEntity(211U);
    msg.mid = 13499U;

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
    msg.setTimeStamp(0.0913279637223);
    msg.setSource(19287U);
    msg.setSourceEntity(115U);
    msg.setDestination(6407U);
    msg.setDestinationEntity(251U);
    msg.mid = 48712U;

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
    msg.setTimeStamp(0.863635230902);
    msg.setSource(47445U);
    msg.setSourceEntity(104U);
    msg.setDestination(30082U);
    msg.setDestinationEntity(36U);
    msg.state = 186U;
    msg.eta = 55734U;
    msg.info.assign("CLTZUUMDOBAXNKDYSBJOXVUBZUVDKLBDHZMVCJKZPNORETFWPVPMEROLYNRGKEIZTXVHIFGIXKUXFDGGPZGQKCCMPAXLWQTYEVDNFSAQZIUCXKCEGZEPWAEEWVILQBXQQBWDH");

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
    msg.setTimeStamp(0.167268872959);
    msg.setSource(32868U);
    msg.setSourceEntity(244U);
    msg.setDestination(5529U);
    msg.setDestinationEntity(191U);
    msg.state = 70U;
    msg.eta = 36085U;
    msg.info.assign("NNRIAMDRIKEMZGFARWUFYOHIVNMKDCZSZIXUPOEUVCCDSBGLQHBYEYKYJKXIPHKMGHTMFQILBZQZNXVDHJEPZLTTWVOAWUJYSJAGMMDSAQRXHJHEPFNWBUKKDRK");

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
    msg.setTimeStamp(0.215097911758);
    msg.setSource(24829U);
    msg.setSourceEntity(128U);
    msg.setDestination(33950U);
    msg.setDestinationEntity(48U);
    msg.state = 51U;
    msg.eta = 28868U;
    msg.info.assign("VSUTQNGZFPFADTTOOLFLLUEMKHWIKEMANVZQBUKRZOLZLAHCNBMKQXNALKGXYEQMNBOVKIMHEHGPBVFQYSMJNPWLJNIDRWYJYEMLZTWGRXJTDFCLQCDCIOZ");

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
    msg.setTimeStamp(0.591930031109);
    msg.setSource(37687U);
    msg.setSourceEntity(169U);
    msg.setDestination(60089U);
    msg.setDestinationEntity(109U);
    msg.system = 63438U;
    msg.duration = 17806U;
    msg.speed = 0.333708284108;
    msg.speed_units = 20U;
    msg.x = 0.860024751947;
    msg.y = 0.365231823148;
    msg.z = 0.165304368686;
    msg.z_units = 211U;

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
    msg.setTimeStamp(0.678066371486);
    msg.setSource(43279U);
    msg.setSourceEntity(46U);
    msg.setDestination(32180U);
    msg.setDestinationEntity(225U);
    msg.system = 41178U;
    msg.duration = 20163U;
    msg.speed = 0.164023369444;
    msg.speed_units = 1U;
    msg.x = 0.145703517654;
    msg.y = 0.696878471895;
    msg.z = 0.754693398684;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.674293482363);
    msg.setSource(37515U);
    msg.setSourceEntity(47U);
    msg.setDestination(48823U);
    msg.setDestinationEntity(199U);
    msg.system = 13074U;
    msg.duration = 21318U;
    msg.speed = 0.984847949725;
    msg.speed_units = 130U;
    msg.x = 0.614405137316;
    msg.y = 0.952998182873;
    msg.z = 0.54204027814;
    msg.z_units = 9U;

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
    msg.setTimeStamp(0.90271258478);
    msg.setSource(33552U);
    msg.setSourceEntity(7U);
    msg.setDestination(50317U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.967035843965;
    msg.lon = 0.178546398615;
    msg.speed = 0.626820973658;
    msg.speed_units = 67U;
    msg.duration = 28833U;
    msg.sys_a = 5515U;
    msg.sys_b = 44212U;
    msg.move_threshold = 0.937706774106;

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
    msg.setTimeStamp(0.176297857147);
    msg.setSource(33512U);
    msg.setSourceEntity(212U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.0270705392021;
    msg.lon = 0.3050233356;
    msg.speed = 0.192497112916;
    msg.speed_units = 140U;
    msg.duration = 33486U;
    msg.sys_a = 39943U;
    msg.sys_b = 36598U;
    msg.move_threshold = 0.324007026347;

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
    msg.setTimeStamp(0.821953471701);
    msg.setSource(6099U);
    msg.setSourceEntity(14U);
    msg.setDestination(53244U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.64012977212;
    msg.lon = 0.872570663656;
    msg.speed = 0.674204217474;
    msg.speed_units = 131U;
    msg.duration = 55091U;
    msg.sys_a = 15752U;
    msg.sys_b = 13034U;
    msg.move_threshold = 0.272765482473;

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
    msg.setTimeStamp(0.185747315979);
    msg.setSource(45910U);
    msg.setSourceEntity(209U);
    msg.setDestination(44567U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.783422165231;
    msg.lon = 0.909524063227;
    msg.z = 0.50005629619;
    msg.z_units = 106U;
    msg.speed = 0.239405658433;
    msg.speed_units = 12U;
    msg.custom.assign("ZWJAUWFMGXQAWRVZDYXJUJXOAFMONSIZVEZCFLOBCTDMBLDJGTOZVAUMQVLWRNKHNHAKAB");

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
    msg.setTimeStamp(0.762965771751);
    msg.setSource(57455U);
    msg.setSourceEntity(51U);
    msg.setDestination(3013U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.474161945495;
    msg.lon = 0.25118720749;
    msg.z = 0.298916050742;
    msg.z_units = 185U;
    msg.speed = 0.170772317352;
    msg.speed_units = 100U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.597031283914;
    tmp_msg_0.lon = 0.911066765102;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SBUGLQVCBGSSIQIOASVPZREYWFKMLMVTDPGCEKZKHPMJOANXNBZUPXVDREDWEWUJTEKSDQXYCUMEXTJ");

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
    msg.setTimeStamp(0.982921076869);
    msg.setSource(10059U);
    msg.setSourceEntity(175U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.675102719707;
    msg.lon = 0.523598540656;
    msg.z = 0.118505439317;
    msg.z_units = 204U;
    msg.speed = 0.573469038968;
    msg.speed_units = 35U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0164161826772;
    tmp_msg_0.lon = 0.157525696979;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("FGLXGZTDPXNDOXWPTNROIDORHHMOU");

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
    msg.setTimeStamp(0.644657274182);
    msg.setSource(51228U);
    msg.setSourceEntity(71U);
    msg.setDestination(55066U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.515797704246;
    msg.lon = 0.944452262376;

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
    msg.setTimeStamp(0.616218577733);
    msg.setSource(5393U);
    msg.setSourceEntity(48U);
    msg.setDestination(19490U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.936042407186;
    msg.lon = 0.235202352306;

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
    msg.setTimeStamp(0.609298214547);
    msg.setSource(60728U);
    msg.setSourceEntity(47U);
    msg.setDestination(17156U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.811494322616;
    msg.lon = 0.508409803023;

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
    msg.setTimeStamp(0.948658133348);
    msg.setSource(21130U);
    msg.setSourceEntity(171U);
    msg.setDestination(37572U);
    msg.setDestinationEntity(43U);
    msg.timeout = 1224U;
    msg.lat = 0.673189338143;
    msg.lon = 0.12148950644;
    msg.z = 0.874532161286;
    msg.z_units = 235U;
    msg.pitch = 0.0614699304456;
    msg.amplitude = 0.467251889693;
    msg.duration = 21989U;
    msg.speed = 0.730458354673;
    msg.speed_units = 109U;
    msg.radius = 0.10028991241;
    msg.direction = 65U;
    msg.custom.assign("OVKSQBHJCHBGHVMTBXCAHAHTVHSRUKFDVDRCZLCUCYHLYYMVLTWMFAMIXBTKUSLIWGFXGWBCNEADRWYVWPSFYQJMYIPKPMBMLEZQNUSWNDJHZJULJKRDBUJRJWADJE");

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
    msg.setTimeStamp(0.24020785931);
    msg.setSource(51519U);
    msg.setSourceEntity(50U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(208U);
    msg.timeout = 23169U;
    msg.lat = 0.872447520196;
    msg.lon = 0.489185311693;
    msg.z = 0.553094927334;
    msg.z_units = 11U;
    msg.pitch = 0.978356733213;
    msg.amplitude = 0.0176109835623;
    msg.duration = 5242U;
    msg.speed = 0.0362397488516;
    msg.speed_units = 106U;
    msg.radius = 0.138252654467;
    msg.direction = 120U;
    msg.custom.assign("NBAOETBNMKAFNYEJYGFCNCKBQQRFOCXFURAMZEOSXNCUMLEFLBQQEDEWPDINCAOZHAVTVAHZKVTNLPRRJOVXPFDPFTPWSCSLAHMSXFTYOWVLZRRFPQGICKEZWXXTYMY");

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
    msg.setTimeStamp(0.514669618796);
    msg.setSource(46099U);
    msg.setSourceEntity(12U);
    msg.setDestination(17490U);
    msg.setDestinationEntity(182U);
    msg.timeout = 23941U;
    msg.lat = 0.526451500276;
    msg.lon = 0.690479737691;
    msg.z = 0.195022223783;
    msg.z_units = 63U;
    msg.pitch = 0.493338890451;
    msg.amplitude = 0.0236325531919;
    msg.duration = 25651U;
    msg.speed = 0.943706249147;
    msg.speed_units = 49U;
    msg.radius = 0.316134416596;
    msg.direction = 88U;
    msg.custom.assign("BPSLMWQQOUTJGSNZWPESEWDBAGDGOEFFDEUNDDMCLUKTCWYADXYBEYQBVUBKLQSQJZZMCBKHEZQEFYELURABOHYRNMZJBVITWGCGZFSVNBFVJGHQVJZYPTINHVTPYRRVVXKGXKLLFGHJFKIXMHXYJBIAWPHOONOWCTHCWQAEPCISLYRFPIXKOH");

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
    IMC::Formation msg;
    msg.setTimeStamp(0.807937884004);
    msg.setSource(2077U);
    msg.setSourceEntity(48U);
    msg.setDestination(23396U);
    msg.setDestinationEntity(112U);
    msg.formation_name.assign("KMOJDKENFOTPAYPVNFRSWZZMMDMDNDVUFRJADEAZBJPCPGQLCMPDVZZSNSKXPZJPIFWAKAVYKWEUVVBTANQICLJASCXYLLHIRWKZXBTOSQUTXHEYULUIOCSCQMWDSWEGKQONTYYHGXCYMNVVPTWXOKLZISQUCOQHALETTUJEYGGBFXSSRRTIOGLWJB");
    msg.type = 21U;
    msg.op = 212U;
    msg.group_name.assign("SOQVYCBDSWNUQKSKZDYPJBENPXTRS");
    msg.plan_id.assign("MODGKNRYJBXHJSAZVBIPNCAHWNLZUIYXXVZNXFHSTYMUMSQTSLZJQVLJIDSLFUPFRBTLZXMYJRKUBHSGGBRLVDWECKRPETOKQCCXTMDXQWHBXOIAMQKOWAJJKWFCIWDGPZQHQINRTAPVJYFSDSVEFYECHNJACZWDKKKMUHAAOZFUWIWNDVYCVBZTUUOXERONLMUVVYANIKEGEFQRYEBOPDHMDRLNXBFBP");
    msg.description.assign("JWKJLDRYUJHKFHQQVZTWBPHVTERKFRLHHYZEEXIYIVRJQGYDVACBHRWNIVQGITFGPDAEBOYSODFASPWLMISKBXLKCZVFJCXKZWGSUBUDZNQYBCGPOOYOZMXFSKFZNFEAEQARXTRCTUXFRMKHSYJGNHUXJYANCLEZVKVQPBTGITDXSEOPDJYMGXUPUDB");
    msg.reference_frame = 99U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59123U;
    tmp_msg_0.off_x = 0.813534643241;
    tmp_msg_0.off_y = 0.691532490927;
    tmp_msg_0.off_z = 0.974302275953;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.90643702307;
    msg.leader_speed_min = 0.643368222043;
    msg.leader_speed_max = 0.839366015628;
    msg.leader_alt_min = 0.225090977868;
    msg.leader_alt_max = 0.573522414467;
    msg.pos_sim_err_lim = 0.838904325842;
    msg.pos_sim_err_wrn = 0.167602879259;
    msg.pos_sim_err_timeout = 24926U;
    msg.converg_max = 0.240933901493;
    msg.converg_timeout = 59667U;
    msg.comms_timeout = 45651U;
    msg.turb_lim = 0.647451670996;
    msg.custom.assign("RGZKSIOIMAADRUCSGVGVBKYCEBITMNDVZFWBXPZOHFOWNGOWBXJKCYJHEUOWZSTYANDLXLSABYHGJZZXGBZPDQQJNCOAADMLEFFTXJFURXQQIYGCKWNLQPYMJRUDHBTAIPVWADQPKHEKVMEHZIWOUKBIVYTHTFMXDHSXCGJEFREEUOVKFSLHNLVPUCLWT");

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
    msg.setTimeStamp(0.387917029476);
    msg.setSource(39165U);
    msg.setSourceEntity(128U);
    msg.setDestination(15628U);
    msg.setDestinationEntity(170U);
    msg.formation_name.assign("JUWXBTEUANZGJNTBKBOBGOIHNJTPWVAMNSEPLHSOTLPRLPCDXITZUSMGRBDZKMLXFRYLNBXKZKRFNDZXUAHARTQ");
    msg.type = 21U;
    msg.op = 118U;
    msg.group_name.assign("HTHPFFZTAZEQBCUCOBNPORUXDKSWEWRBHFEIDTXMXJCEWRHLVPRVYGJQXQSNBGEMUOTAKQEVMPWVMLPZYNJZNDTBWO");
    msg.plan_id.assign("WSPFFAIKVMYOJEXLJEUTOKNJRUVIKBCNPEPVOXYFMNGNMKSXPPVWKRJCXPKYSSSATLJCQHEQDEOTMAKAHGGQRMWQDTZIOHMRHWSCNBIHXLIXFDKYWAOUZSNIBHZFLUZHLLVH");
    msg.description.assign("IPJDYNMAXZYKOSKUUZTACGGHGWBXHUBZAWDUAGHBUIQTSMTQWFNWOEFOLLYZTJSPHIXEKCLSRRMYIRWVQXOUNKALHBGMHLUJCJIEYRCCSVPKTTEJVFBGLZPYTMOJDPRDWVCKFPFMCOSHANSBQVZIXGTHKVKWUT");
    msg.reference_frame = 165U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9106U;
    tmp_msg_0.off_x = 0.101430399487;
    tmp_msg_0.off_y = 0.0122310019562;
    tmp_msg_0.off_z = 0.72934864625;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.79577370281;
    msg.leader_speed_min = 0.72587878009;
    msg.leader_speed_max = 0.818417212185;
    msg.leader_alt_min = 0.233956969314;
    msg.leader_alt_max = 0.539076664127;
    msg.pos_sim_err_lim = 0.901627622848;
    msg.pos_sim_err_wrn = 0.226235025426;
    msg.pos_sim_err_timeout = 6398U;
    msg.converg_max = 0.466177415066;
    msg.converg_timeout = 22793U;
    msg.comms_timeout = 10134U;
    msg.turb_lim = 0.920889102465;
    msg.custom.assign("UNBKXVISGPXMCKUPDNUX");

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
    msg.setTimeStamp(0.929348122599);
    msg.setSource(47542U);
    msg.setSourceEntity(51U);
    msg.setDestination(54737U);
    msg.setDestinationEntity(177U);
    msg.formation_name.assign("XXOHLXNAIKPTUUWOUTSPOIWHXZTCFALTXWVSGRZKCSTLRZTMKTYVYQVKVVEGIGEJAMLJKNSDJSMOLGTECZYMFHWLCZIZLBYCFCYBAFESNQRAQRPJBICNVDDHRMFAUIZPSDVNHKVWAGFPRJAMVFJFLHJRXLNPBIOTP");
    msg.type = 153U;
    msg.op = 209U;
    msg.group_name.assign("EDWFYWAUYKXLBTCLZDOOXTKNPZTWHVCMULXGQJGDPXVGTAXIWLNSAFIIFPNHFZEHVYYVFJTOQRLHERWMTRXVCYXQYGPWMGWPHBRQCIBOYPNCAVWJZOYJEBUYKPTKZIDJCVBYHJBZOHGAMSMGXCMGEDCGDLRMAMCRBSJETKZOKIFUQFNNTSLAQRIZRDSFUJIOUSCQKUPALFEENLKAESISQBURWNJNM");
    msg.plan_id.assign("GOPJGRPVUHKLMUCEQRNFNEUNZLBNXXQAWWGEPMQVOYBCBKDKSAISIXGACMXBGEKOAITZLFNYEBJDLSMTCFRTCVANNQOULHESHIUPGJOOFTPDJKWYBJQXFRCTEJSQFZPEKJYQLOMOSRHWDRMUDCVGTQIGHACCIYUMQKZFJHPRVAHRPBIVAXZMGTNAVLMWXZTYJCYUYIWYLDNRODSRLONVFYFPMFBSKWZXHQZIXWKX");
    msg.description.assign("XPOUMNGHATNLDGPPFBUFGCEPXAGNOUDZFRXNLDKEKPDHHCKTHQWCSPJRRBRUIRMALQEBCBYAOQEDJSERCVNYISXJNHUFRMKTVBZSBSYGHQCOYHLWZOJOMZNIKNIUFSKEYMOXCWTPDWLWTVEHTGVSVWYJVNMUZKRCAHVUUMFVLJLMYWAIDAQINEYLQWSQJIZZGXSWKSDTLXBZYCYQVDJZMZGXGTUAOBERFHDJFAWVRFQ");
    msg.reference_frame = 88U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43251U;
    tmp_msg_0.off_x = 0.937916931639;
    tmp_msg_0.off_y = 0.0957368700689;
    tmp_msg_0.off_z = 0.935756392894;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.116355284473;
    msg.leader_speed_min = 0.89564884087;
    msg.leader_speed_max = 0.813726247033;
    msg.leader_alt_min = 0.224998699487;
    msg.leader_alt_max = 0.317484663793;
    msg.pos_sim_err_lim = 0.860106491671;
    msg.pos_sim_err_wrn = 0.943011389642;
    msg.pos_sim_err_timeout = 56412U;
    msg.converg_max = 0.88147641693;
    msg.converg_timeout = 54157U;
    msg.comms_timeout = 54556U;
    msg.turb_lim = 0.626965234618;
    msg.custom.assign("QMMMXOHRIQQESFUBYKCVNNPUNPVASCNRYVEXTGJDHIAEAUVYMRTT");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.000116930644998);
    msg.setSource(60891U);
    msg.setSourceEntity(35U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(154U);
    msg.control_src = 10318U;
    msg.control_ent = 117U;
    msg.timeout = 0.136425783084;
    msg.loiter_radius = 0.644237963473;
    msg.altitude_interval = 0.477211617936;

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
    msg.setTimeStamp(0.258852207438);
    msg.setSource(29537U);
    msg.setSourceEntity(203U);
    msg.setDestination(53109U);
    msg.setDestinationEntity(118U);
    msg.control_src = 15279U;
    msg.control_ent = 40U;
    msg.timeout = 0.380600461433;
    msg.loiter_radius = 0.63836866381;
    msg.altitude_interval = 0.47147764097;

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
    msg.setTimeStamp(0.0509925257936);
    msg.setSource(59120U);
    msg.setSourceEntity(2U);
    msg.setDestination(27570U);
    msg.setDestinationEntity(42U);
    msg.control_src = 27502U;
    msg.control_ent = 166U;
    msg.timeout = 0.746724025026;
    msg.loiter_radius = 0.0645728770297;
    msg.altitude_interval = 0.225823597881;

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
    msg.setTimeStamp(0.900709168983);
    msg.setSource(23846U);
    msg.setSourceEntity(24U);
    msg.setDestination(21167U);
    msg.setDestinationEntity(192U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.605649854832;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.587124923098;
    tmp_msg_1.z_units = 140U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.270530988865;
    msg.lon = 0.514819311913;
    msg.radius = 0.470803893217;

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
    msg.setTimeStamp(0.721286429567);
    msg.setSource(16880U);
    msg.setSourceEntity(38U);
    msg.setDestination(15335U);
    msg.setDestinationEntity(47U);
    msg.flags = 224U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.244548326946;
    tmp_msg_0.speed_units = 35U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.623272703356;
    tmp_msg_1.z_units = 254U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.937897736516;
    msg.lon = 0.338816595377;
    msg.radius = 0.678429855054;

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
    msg.setTimeStamp(0.929201516862);
    msg.setSource(51518U);
    msg.setSourceEntity(84U);
    msg.setDestination(14635U);
    msg.setDestinationEntity(126U);
    msg.flags = 137U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.752520083841;
    tmp_msg_0.speed_units = 93U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.746645786293;
    tmp_msg_1.z_units = 77U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.729406162359;
    msg.lon = 0.314182117472;
    msg.radius = 0.982871199164;

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
    msg.setTimeStamp(0.602182968936);
    msg.setSource(34813U);
    msg.setSourceEntity(56U);
    msg.setDestination(43891U);
    msg.setDestinationEntity(33U);
    msg.control_src = 63276U;
    msg.control_ent = 165U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 232U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.519028245052;
    tmp_tmp_msg_0_0.speed_units = 106U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.207308775791;
    tmp_tmp_msg_0_1.z_units = 239U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.176153583497;
    tmp_msg_0.lon = 0.255327487761;
    tmp_msg_0.radius = 0.659283323616;
    msg.reference.set(tmp_msg_0);
    msg.state = 133U;
    msg.proximity = 66U;

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
    msg.setTimeStamp(0.204966670789);
    msg.setSource(5562U);
    msg.setSourceEntity(73U);
    msg.setDestination(5954U);
    msg.setDestinationEntity(122U);
    msg.control_src = 58393U;
    msg.control_ent = 55U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.839853373022;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.928197806775;
    tmp_tmp_msg_0_1.z_units = 9U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.657742473871;
    tmp_msg_0.lon = 0.185382749189;
    tmp_msg_0.radius = 0.57830199493;
    msg.reference.set(tmp_msg_0);
    msg.state = 82U;
    msg.proximity = 43U;

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
    msg.setTimeStamp(0.764159982894);
    msg.setSource(64310U);
    msg.setSourceEntity(108U);
    msg.setDestination(6522U);
    msg.setDestinationEntity(179U);
    msg.control_src = 9003U;
    msg.control_ent = 92U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 93U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.207270490039;
    tmp_tmp_msg_0_0.speed_units = 24U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.549168107425;
    tmp_tmp_msg_0_1.z_units = 44U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.32636555966;
    tmp_msg_0.lon = 0.222476035043;
    tmp_msg_0.radius = 0.0974360986856;
    msg.reference.set(tmp_msg_0);
    msg.state = 241U;
    msg.proximity = 222U;

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
    msg.setTimeStamp(0.19273372879);
    msg.setSource(37782U);
    msg.setSourceEntity(106U);
    msg.setDestination(59022U);
    msg.setDestinationEntity(207U);
    msg.dist_min = 0.341118820485;
    msg.ax_cmd = 0.716194147256;
    msg.ay_cmd = 0.320414315061;
    msg.az_cmd = 0.526244806382;
    msg.ax_des = 0.379984032582;
    msg.ay_des = 0.642536871641;
    msg.az_des = 0.329172618466;
    msg.virt_err_x = 0.82516911421;
    msg.virt_err_y = 0.033380999155;
    msg.virt_err_z = 0.583690210694;
    msg.surf_fdbk_x = 0.504672922564;
    msg.surf_fdbk_y = 0.122240205372;
    msg.surf_fdbk_z = 0.764229421011;
    msg.surf_unkn_x = 0.0233689775414;
    msg.surf_unkn_y = 0.520778150644;
    msg.surf_unkn_z = 0.0148488290661;
    msg.ss_x = 0.778266934912;
    msg.ss_y = 0.250273797413;
    msg.ss_z = 0.517881449532;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("YXQISZYNFBDWLUTWHTVVKPSBTQICMHPAPCERZGKZJYIBIOFKBILPAURCMVFDQGKDOBBANJMJTJYYQFEHMCXJVZNEBFXMLEJIYYHXOZWBUEALJLPJWSZMDCPKITNBAZCKRGHEVGHQUJLLWZCHGQPXRXNUOVHINMEARFXKDMNWVPFBTFYGZRJIQGDOLSSUVKFEAVUAXOEYCIA");
    tmp_msg_0.dist = 0.390482790083;
    tmp_msg_0.err = 0.817754743668;
    tmp_msg_0.ctrl_imp = 0.324219233265;
    tmp_msg_0.rel_dir_x = 0.0237858430268;
    tmp_msg_0.rel_dir_y = 0.786518981671;
    tmp_msg_0.rel_dir_z = 0.345577990648;
    tmp_msg_0.err_x = 0.189962164135;
    tmp_msg_0.err_y = 0.668258891511;
    tmp_msg_0.err_z = 0.497682119835;
    tmp_msg_0.rf_err_x = 0.122693760088;
    tmp_msg_0.rf_err_y = 0.795142422718;
    tmp_msg_0.rf_err_z = 0.64892374847;
    tmp_msg_0.rf_err_vx = 0.787214308234;
    tmp_msg_0.rf_err_vy = 0.880057906402;
    tmp_msg_0.rf_err_vz = 0.489355799577;
    tmp_msg_0.ss_x = 0.032335629011;
    tmp_msg_0.ss_y = 0.597385748646;
    tmp_msg_0.ss_z = 0.835437776292;
    tmp_msg_0.virt_err_x = 0.0780975146016;
    tmp_msg_0.virt_err_y = 0.981617361122;
    tmp_msg_0.virt_err_z = 0.631697628921;
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
    msg.setTimeStamp(0.275398019804);
    msg.setSource(25230U);
    msg.setSourceEntity(157U);
    msg.setDestination(44778U);
    msg.setDestinationEntity(226U);
    msg.dist_min = 0.537529960185;
    msg.ax_cmd = 0.449040193533;
    msg.ay_cmd = 0.126945932156;
    msg.az_cmd = 0.768372388291;
    msg.ax_des = 0.0409682360436;
    msg.ay_des = 0.278025589769;
    msg.az_des = 0.378022818767;
    msg.virt_err_x = 0.54614315425;
    msg.virt_err_y = 0.11050045001;
    msg.virt_err_z = 0.709991558431;
    msg.surf_fdbk_x = 0.00811882282974;
    msg.surf_fdbk_y = 0.598886651957;
    msg.surf_fdbk_z = 0.349005669038;
    msg.surf_unkn_x = 0.0281432209503;
    msg.surf_unkn_y = 0.611152748465;
    msg.surf_unkn_z = 0.732995487609;
    msg.ss_x = 0.503676636799;
    msg.ss_y = 0.979055815984;
    msg.ss_z = 0.783000199469;

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
    msg.setTimeStamp(0.811241955681);
    msg.setSource(65429U);
    msg.setSourceEntity(30U);
    msg.setDestination(7920U);
    msg.setDestinationEntity(190U);
    msg.dist_min = 0.115898427367;
    msg.ax_cmd = 0.117339932912;
    msg.ay_cmd = 0.0169821445563;
    msg.az_cmd = 0.293992538976;
    msg.ax_des = 0.0653468174426;
    msg.ay_des = 0.382658373475;
    msg.az_des = 0.990594581931;
    msg.virt_err_x = 0.128954863804;
    msg.virt_err_y = 0.944573040228;
    msg.virt_err_z = 0.529474202541;
    msg.surf_fdbk_x = 0.733221413279;
    msg.surf_fdbk_y = 0.163630018204;
    msg.surf_fdbk_z = 0.339143715738;
    msg.surf_unkn_x = 0.6147969571;
    msg.surf_unkn_y = 0.882990464291;
    msg.surf_unkn_z = 0.680806921584;
    msg.ss_x = 0.909049206809;
    msg.ss_y = 0.66928016944;
    msg.ss_z = 0.289626329106;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("AXVCCAYBTEIARYZLUOKDHETEZCKFCPXEONUCQSPKJBFJOUVOSXZHIYMBFLWRBXTKMMVAVLSKEVGMMEAEWBGWGQKQQLPGKFLSDFOVJRTOHUJAZHMIJHEPWLSPYOCZDMGXZDOJIOBIEHFONGTCGUKGQFRHQRZDDWCSNAFRSNQIXRBEJNPCDJSSKLPRAMUTNIUXWRDKLY");
    tmp_msg_0.dist = 0.441573637274;
    tmp_msg_0.err = 0.509789399515;
    tmp_msg_0.ctrl_imp = 0.951894103841;
    tmp_msg_0.rel_dir_x = 0.356074204356;
    tmp_msg_0.rel_dir_y = 0.17033966973;
    tmp_msg_0.rel_dir_z = 0.621317180721;
    tmp_msg_0.err_x = 0.740611682392;
    tmp_msg_0.err_y = 0.801369750354;
    tmp_msg_0.err_z = 0.0999580643615;
    tmp_msg_0.rf_err_x = 0.653608615078;
    tmp_msg_0.rf_err_y = 0.772072109883;
    tmp_msg_0.rf_err_z = 0.151540195652;
    tmp_msg_0.rf_err_vx = 0.209214843751;
    tmp_msg_0.rf_err_vy = 0.449047599616;
    tmp_msg_0.rf_err_vz = 0.2832561657;
    tmp_msg_0.ss_x = 0.146714346613;
    tmp_msg_0.ss_y = 0.180305807964;
    tmp_msg_0.ss_z = 0.611032100357;
    tmp_msg_0.virt_err_x = 0.294162778984;
    tmp_msg_0.virt_err_y = 0.0111611625229;
    tmp_msg_0.virt_err_z = 0.393461916701;
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
    msg.setTimeStamp(0.20823900474);
    msg.setSource(4366U);
    msg.setSourceEntity(125U);
    msg.setDestination(53348U);
    msg.setDestinationEntity(6U);
    msg.s_id.assign("AAJWNTONKXQHCYUXRFFEAAAPMRMMHLIIERLOYDJRTDQBKTSJZXXVJWSVSLZMDKKMOMOXKVCOMBOSIKCFHZTUJQWGTWLBIQGWVVFTBYUYFDQHINJLEWJNXEPNVFYEJCRXWYNFST");
    msg.dist = 0.0529671623073;
    msg.err = 0.42531947244;
    msg.ctrl_imp = 0.749864522785;
    msg.rel_dir_x = 0.69756102427;
    msg.rel_dir_y = 0.887571335067;
    msg.rel_dir_z = 0.889453468958;
    msg.err_x = 0.985329148106;
    msg.err_y = 0.391222683208;
    msg.err_z = 0.36099833254;
    msg.rf_err_x = 0.103314076638;
    msg.rf_err_y = 0.904397236854;
    msg.rf_err_z = 0.860410888628;
    msg.rf_err_vx = 0.544554286453;
    msg.rf_err_vy = 0.323053114868;
    msg.rf_err_vz = 0.143821863309;
    msg.ss_x = 0.176271364568;
    msg.ss_y = 0.302686926332;
    msg.ss_z = 0.361008389764;
    msg.virt_err_x = 0.441680015018;
    msg.virt_err_y = 0.0940635946801;
    msg.virt_err_z = 0.784747577962;

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
    msg.setTimeStamp(0.856778235997);
    msg.setSource(28766U);
    msg.setSourceEntity(219U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(86U);
    msg.s_id.assign("GQHQUKPMPEJYLZRURWQEXIGSMKIMXNLRAGUNH");
    msg.dist = 0.634961527938;
    msg.err = 0.687272414676;
    msg.ctrl_imp = 0.827961003784;
    msg.rel_dir_x = 0.35005148491;
    msg.rel_dir_y = 0.00977003462488;
    msg.rel_dir_z = 0.485631730935;
    msg.err_x = 0.486347953696;
    msg.err_y = 0.429219725802;
    msg.err_z = 0.430072897787;
    msg.rf_err_x = 0.713188354016;
    msg.rf_err_y = 0.104686352342;
    msg.rf_err_z = 0.190664384076;
    msg.rf_err_vx = 0.933295335549;
    msg.rf_err_vy = 0.603234911013;
    msg.rf_err_vz = 0.43429985068;
    msg.ss_x = 0.380754139993;
    msg.ss_y = 0.698610065404;
    msg.ss_z = 0.533333736128;
    msg.virt_err_x = 0.522475790765;
    msg.virt_err_y = 0.911012950102;
    msg.virt_err_z = 0.00113248937832;

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
    msg.setTimeStamp(0.696910703629);
    msg.setSource(40990U);
    msg.setSourceEntity(89U);
    msg.setDestination(34142U);
    msg.setDestinationEntity(139U);
    msg.s_id.assign("FFLVZEGILTYYLUGDBXGUBNBPRBZCVRJJKQPYMCWKVLPCIRHSSLQZRHGDSUVINURMJUOOLDQCGDHNZNVVKBJAPWVAWNCGHUQXCYNHCAEXSTLYWMSZKNBEW");
    msg.dist = 0.607190943601;
    msg.err = 0.258452275961;
    msg.ctrl_imp = 0.815743053725;
    msg.rel_dir_x = 0.0480606316463;
    msg.rel_dir_y = 0.615978523354;
    msg.rel_dir_z = 0.573915932346;
    msg.err_x = 0.228130331772;
    msg.err_y = 0.438598392334;
    msg.err_z = 0.972660142287;
    msg.rf_err_x = 0.665291551269;
    msg.rf_err_y = 0.355849145505;
    msg.rf_err_z = 0.232481940241;
    msg.rf_err_vx = 0.50076097906;
    msg.rf_err_vy = 0.124237904136;
    msg.rf_err_vz = 0.50918130945;
    msg.ss_x = 0.839433679721;
    msg.ss_y = 0.261775173665;
    msg.ss_z = 0.342802254384;
    msg.virt_err_x = 0.169354133722;
    msg.virt_err_y = 0.287316845325;
    msg.virt_err_z = 0.46879198806;

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
    msg.setTimeStamp(0.840848589475);
    msg.setSource(50335U);
    msg.setSourceEntity(53U);
    msg.setDestination(51115U);
    msg.setDestinationEntity(149U);
    msg.timeout = 12375U;
    msg.rpm = 0.119308859853;
    msg.direction = 239U;
    msg.custom.assign("IYYMQVDJPUHLKWQGWBYEFFOCQTPEISDYMKCXSUIISDZCMIJOYFHCZJAROXBLLGPCENWLCABWJDNTNKPAJKBEGNAFEFGRQGRRBNSQMBYMUEZHGOLRIEWVSMUAWXPPZNGHOTAKUNVKXUEBTSHUPZI");

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
    msg.setTimeStamp(0.536247100281);
    msg.setSource(46788U);
    msg.setSourceEntity(221U);
    msg.setDestination(27770U);
    msg.setDestinationEntity(188U);
    msg.timeout = 33096U;
    msg.rpm = 0.385746008504;
    msg.direction = 70U;
    msg.custom.assign("HCRABAYXHVGTXZAGRZFXJDZCRKJCXBWFSNMTNMNLPZCLBGXKZATYYKSUMTMLQJZWOOUPKYQCWOIACSVZHOOIPFKTFORLWUWFHYXVBTQDBAUKLGQHEIIWNZEOVLAB");

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
    msg.setTimeStamp(0.16722513346);
    msg.setSource(33589U);
    msg.setSourceEntity(162U);
    msg.setDestination(22461U);
    msg.setDestinationEntity(38U);
    msg.timeout = 47837U;
    msg.rpm = 0.505339670894;
    msg.direction = 181U;
    msg.custom.assign("REDOGIHMWQPMGXVCFVRSWONDLXSQDNWWKCDAEAFYRJIUYSQAQZTVICILYYWGDCTIUOXNWBTYLBBYTAXLCJCNFMGGVXFNRLXKYFOHLZFMSEZQWJTLBDDPIONJEASMPBXBASHHURM");

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
    msg.setTimeStamp(0.948627955458);
    msg.setSource(39368U);
    msg.setSourceEntity(73U);
    msg.setDestination(50036U);
    msg.setDestinationEntity(116U);
    msg.op_mode = 83U;
    msg.error_count = 67U;
    msg.error_ents.assign("HZXWEYNQAFLJJNAIUNCFESDYSNYRMTVDWRWMBNJIACHXCKTWEEPCTBGKGXZLHDRCAAWBMLYASYAYBNMLVEFJJMOEWDVMGNEKZSUUMAZHUMIQBGLDKCVKVOUGF");
    msg.maneuver_type = 63889U;
    msg.maneuver_stime = 0.749347442435;
    msg.maneuver_eta = 33455U;
    msg.control_loops = 984164788U;
    msg.flags = 69U;
    msg.last_error.assign("DSJIBIFZHPBSGZQNFULCOPXCQAJFSGVRKLUMPKTWKPEIDUGMIUBOBYYMVUNTYKMZWKKOCXVTPODHIRBURXYDSKNUEHCXLUZFMWFQMGGTDXXAXAIHNJNQPJJQLBEDHOSIOUAWWZFAHNTNGWCAYSKCXAVEFYIEPQDECCQRGTMRSZWQLOFGVWVZTDILWZRRMMGIVZYNAFVEQAJVLSBPPHUOHTPESMZW");
    msg.last_error_time = 0.855474156446;

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
    msg.setTimeStamp(0.553529524455);
    msg.setSource(28594U);
    msg.setSourceEntity(20U);
    msg.setDestination(55694U);
    msg.setDestinationEntity(10U);
    msg.op_mode = 105U;
    msg.error_count = 89U;
    msg.error_ents.assign("CWDLFXVPNCCDETRWWAW");
    msg.maneuver_type = 34855U;
    msg.maneuver_stime = 0.0331455059259;
    msg.maneuver_eta = 48174U;
    msg.control_loops = 1154822131U;
    msg.flags = 23U;
    msg.last_error.assign("AGULHPKUWEXLXQYBFINRKSGWQPLJGHVBZBPYUDECGIEPBNUSTRKNCRKTIBVVSSHUUFZKOWYKQUPGUACRTMCDRB");
    msg.last_error_time = 0.881644911943;

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
    msg.setTimeStamp(0.212639994954);
    msg.setSource(63122U);
    msg.setSourceEntity(93U);
    msg.setDestination(882U);
    msg.setDestinationEntity(124U);
    msg.op_mode = 218U;
    msg.error_count = 220U;
    msg.error_ents.assign("XPHQQBLWEIUZPJKGGDPFYYDHTAKROEOIOSDCNONOTZVCKWBJQZUULSFDDXJVFGSAVRWZHZOBCUKXQGTNWMBMPNWULLIEIGVBEGVYBIYFMTPWMVTEIHRLXQIDCYWUSQKCLBCSPPDAFNXLRLZHFMYKQWIEL");
    msg.maneuver_type = 43012U;
    msg.maneuver_stime = 0.0924743767753;
    msg.maneuver_eta = 42525U;
    msg.control_loops = 1712214200U;
    msg.flags = 73U;
    msg.last_error.assign("TZKFKTTEJMSYOEQRAYFDGMKPBHFJSDDIWKZXWCVFEBXCOVDLOSAHDUXYXOPQYDYTMJSC");
    msg.last_error_time = 0.317324464896;

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
    msg.setTimeStamp(0.490115676519);
    msg.setSource(30225U);
    msg.setSourceEntity(54U);
    msg.setDestination(7236U);
    msg.setDestinationEntity(31U);
    msg.type = 21U;
    msg.request_id = 18278U;
    msg.command = 153U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.366950659657;
    tmp_msg_0.lon = 0.135703468983;
    tmp_msg_0.speed = 0.074598170112;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.duration = 23282U;
    tmp_msg_0.sys_a = 32357U;
    tmp_msg_0.sys_b = 19821U;
    tmp_msg_0.move_threshold = 0.115511509246;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 44512U;
    msg.info.assign("VOORVKCQEWREKFEQFHLQUSSMTEGJNIITVQHNIRWXGREOYUQBNSZLYVMPSRLHPKZWMGMGSFAQZIZBHIKLTTBREGBBYGJNDQDUXBCXUQHFKOUTVKLHXUXBAPDSGXJDIEXXNLNKGVNGOLECDATPYAOTUOWYRJFCOFMBJFNAJIWACAPSRAECCWEKHHTWIHGHPVDJMANFOCDJMBYZUOYUX");

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
    msg.setTimeStamp(0.177487396011);
    msg.setSource(46216U);
    msg.setSourceEntity(162U);
    msg.setDestination(39781U);
    msg.setDestinationEntity(41U);
    msg.type = 216U;
    msg.request_id = 62229U;
    msg.command = 63U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 34783U;
    tmp_msg_0.rpm = 0.63408321544;
    tmp_msg_0.direction = 250U;
    tmp_msg_0.custom.assign("NCUUVGIGZOPKORKYPKJYNJGZVFHYIOYP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25988U;
    msg.info.assign("DTFWHQMLEYADSZILSPYVWUCHHEMERYNYXXLWJUZLRRJIDZHSPPUCMXXTFJBYSYOCUHGKZHJRNIVCKQZOKTNTCNRKXJDFXAEWFKFQGMHNMZEYINKOQGLIOZBNTPYLTGARFPSODSWABMGOXWYVDTFUISUJPNQOPAJIVWKCQSLKBTXCWEBEXWQCLRCMXAGDVIDQGTFBJHOBFJCDPESQVNGKZGNJVOMBMAURBPSQAMIDGZAHUR");

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
    msg.setTimeStamp(0.00165150064959);
    msg.setSource(34804U);
    msg.setSourceEntity(46U);
    msg.setDestination(23689U);
    msg.setDestinationEntity(108U);
    msg.type = 11U;
    msg.request_id = 38649U;
    msg.command = 9U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 60816U;
    tmp_msg_0.rpm = 0.0622221516343;
    tmp_msg_0.direction = 178U;
    tmp_msg_0.custom.assign("YOBVVZXAAFVLUGEZFWDIKKWQMUORXDCYMOHGZBTXXMTTRHEBZVPHHWLILOBLFCSSYLVYSCAQEICWGSIUSXIMKNGIXUQVSXZNJSPADJBBQJQETPKRQFRFDKT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 22299U;
    msg.info.assign("UOFDNQCQLLIOMWYYPQERNLACJKJPNBBGUYTFXTTOROTIDKNROMTZYLHF");

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
    msg.setTimeStamp(0.023910389598);
    msg.setSource(30010U);
    msg.setSourceEntity(221U);
    msg.setDestination(54924U);
    msg.setDestinationEntity(194U);
    msg.command = 7U;
    msg.entities.assign("KOVTSLGWESXHLGDYAMNIWKRZPYEJABNWLMZOHBXAKCGIMYQUGXYUMIKSYQYETFYMHWDRIWJNLVUXSHJOXEHFDUOAEFTRXNJBOUZZUBZJPSTLIZZLQFSSQTDQRFDQJMIRTBWCJFDIDMHDRJNMBPPGCAVANQNOZHXVUANXYOCZFSCEZULBKUHRHWLOFXQAVEFKRCPTNHGXOMUASWGPLIBVMRILJKSGVCCJN");

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
    msg.setTimeStamp(0.0538961227395);
    msg.setSource(18974U);
    msg.setSourceEntity(236U);
    msg.setDestination(43588U);
    msg.setDestinationEntity(142U);
    msg.command = 219U;
    msg.entities.assign("BULTCGDFQYYSALNACBKYEHSGNQZQRBIHOTZSPCJJBZQHGSXTWQLKUEDLTAMGMHRZPXVNCYOSZDDNLOQLZUAJVVEFWVUDFSDVUJQBCIEMEJRFVMEAKCHGOGBSCKESLMXKMIYRHIGSRAKOFPZVKTNMQGWQYIKOROXDPNHYPJQBFWBWLYRZPBCAVPTCXHWXFJHKDHJWIXUADRWIGOENVNUUMSAAIEWZFEWLCTGYMNJXPUVPLOIFI");

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
    msg.setTimeStamp(0.576829518608);
    msg.setSource(20195U);
    msg.setSourceEntity(65U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(214U);
    msg.command = 112U;
    msg.entities.assign("HTPCCSTNYLPGNKVANJRXYFFTWXVIXBFIVOFWQODEVCQVBIQSRHOJIGTFCXZLYQCQUBKYGFRMHVCOWGXOJBAEMHBEKIKLJMQWEZCNNVYWSXUNIIMPARWAARJDDLATSNLBAAHUYQYXLSNP");

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
    msg.setTimeStamp(0.445972474484);
    msg.setSource(63919U);
    msg.setSourceEntity(98U);
    msg.setDestination(47068U);
    msg.setDestinationEntity(127U);
    msg.mcount = 8U;
    msg.mnames.assign("HBOGWCKDQKUXNFTQEJXCSJMIMVDKIPTDAKEDSVCXPHIMSRXPNLULJMJWOAJQBCZZSKROGVEIIQSOJLYOTPKKYDLFXTRRLFGMHORPBZXYHWVGTYLHAHUFFCDUBYTSEXOWFFBUEPYYTDGCRGXZZKRWSINMOWCZHECALICJVMFVVPUHICYVBNLIVFLQAXHEOYBNTBZPNTJ");
    msg.ecount = 126U;
    msg.enames.assign("LDNEANIWQMGFOXNFZZKTQLPAXTWQLIIMFNHVEJMUWPJLVVDUHASPNDQTGDZOFERJSZAORSLGQPEYFGTWSWUPLYTSKPSJKVBUODOCHJQRQRSUMZNBPRJONUCFYHRAAPWCBLOSJFFXACWCXCECFMEEOZYOZGNDZKDKSYVKTZYHVXBCGOMHPXZYK");
    msg.ccount = 51U;
    msg.cnames.assign("SMQZPLIQSTMYYDFZWJKVKJXTLRHAAGYJ");
    msg.last_error.assign("MBAFNCZVQRFDCFQFKXSWHEBKJTOMZGBCNZMQNNBJACYSWMQDGRNEJJAKFIVEESELIYGNTISWBOPELDMIUMFQVNXRWGKYWNDKHATGVCOIWVGIGFRGRVZKKLZPOXIJTCVHRBUESBAUZDUWPRTP");
    msg.last_error_time = 0.438590758291;

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
    msg.setTimeStamp(0.535490258336);
    msg.setSource(49482U);
    msg.setSourceEntity(185U);
    msg.setDestination(1157U);
    msg.setDestinationEntity(37U);
    msg.mcount = 220U;
    msg.mnames.assign("RVMTBEYMSVPFIFTSULLTHPJIHRPFCRWCBSNHKPJOJQOCSYWPBCIYKVBQCDQN");
    msg.ecount = 130U;
    msg.enames.assign("VFHNVCUBIDEOHMOIQRMSTKVFANYZSNWMUXYQWPPIIGXUHEYWJBLSWKVLZIGCPPQJMAPEJRFZLCNWXUFGQQDKFEUBRBXVNCPNPTOPKFSMQNRQOOSCGXGWFLEELTCSBCHJDRLUFSPKHMHVOBDAZKITHHRJAEJIGAQVDQZMKZEYXZHOBTWZZVNVRTRABEUPYM");
    msg.ccount = 230U;
    msg.cnames.assign("JHHWYUSFENNKGRDLDCEXUITLHLIYJOFAOVHDMRCCKKORPSQLK");
    msg.last_error.assign("ADDQBNHKIDYHDOQRQIXICKSLOTHYTNOURVOITESWGDFYQYGLRRLGGPYZZWEOALELPKKFCUAOZTEDDVAZJMJDBVHIHBQQKVMHHWTJMCDAZCJCBLVCUWHPSSGYPBSDGXQBMFFXYZJRORMXBENPXMTIWSBVFOJSEUMNLGN");
    msg.last_error_time = 0.396675913422;

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
    msg.setTimeStamp(0.137195242138);
    msg.setSource(6018U);
    msg.setSourceEntity(99U);
    msg.setDestination(54222U);
    msg.setDestinationEntity(5U);
    msg.mcount = 79U;
    msg.mnames.assign("NWWJQJHLLWADVQTSWZXORSGKBIBKRSVQEYCPOPNZKAFGCWGDJFIMEHPNFOJLZTBMAPPFJBGWABHTRPZXIIEUSYSVSODZXMNSIKCEQKJQTZYCHYLLCXHUMTO");
    msg.ecount = 251U;
    msg.enames.assign("RKQPBZSCDREGLXWTJLPGSFSOFAMOIOCEGCLIXKOUVGYXUHKBIZSQQTMUTZVNOSCHXMSJFZXDCNIFRWAFGPVQSJKBPZUJUKRPFQPCJKFRQMNIULGHOL");
    msg.ccount = 175U;
    msg.cnames.assign("MWBCOZHPNPSTVNECYBMZCHBHXVGSOEXHNESCTIQUIQIFWYDRRDSQVWNIVJEPOSXKQHDTJJSAJGSVDZOMZBKCWTNRBNDOQHABUFWELGYGIDGFKKIFKUNMWOCFRLXJBXWDBIHVPARZMCPZAQJPNMKGLLALJUUPPKFAADGYKQASKEVMTXPCVJZATTJLRJVDUMGZXHWYQHOWNRCXSTUZNXMYGLEBDVILRFUOSCXUIYLLFYQYPZROFUAM");
    msg.last_error.assign("FDYGBSUQANMXKSWXAUBRNOEDMHQKMDDAFOWXDWKFMUTBZLPOUPLDSFZUFXWCBOJGRJPCKBSDZSJYVQTNYKZGLKFRMIANHIJNCJIEMMYNGNDYICMOZSYLFRPADEGQJQLREUUVHC");
    msg.last_error_time = 0.257320640543;

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
    msg.setTimeStamp(0.566880924414);
    msg.setSource(45162U);
    msg.setSourceEntity(7U);
    msg.setDestination(55174U);
    msg.setDestinationEntity(210U);
    msg.mask = 23U;
    msg.max_depth = 0.821271648407;
    msg.min_altitude = 0.274943882501;
    msg.max_altitude = 0.830360240796;
    msg.min_speed = 0.966368144765;
    msg.max_speed = 0.647478060769;
    msg.max_vrate = 0.579430225741;
    msg.lat = 0.563118215649;
    msg.lon = 0.502579427503;
    msg.orientation = 0.330363634094;
    msg.width = 0.62835439208;
    msg.length = 0.437908925043;

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
    msg.setTimeStamp(0.21894314373);
    msg.setSource(32144U);
    msg.setSourceEntity(193U);
    msg.setDestination(9796U);
    msg.setDestinationEntity(174U);
    msg.mask = 57U;
    msg.max_depth = 0.668551405131;
    msg.min_altitude = 0.521513595563;
    msg.max_altitude = 0.0747028291973;
    msg.min_speed = 0.0769418549107;
    msg.max_speed = 0.251459066316;
    msg.max_vrate = 0.662309673065;
    msg.lat = 0.914749482226;
    msg.lon = 0.382519629666;
    msg.orientation = 0.262316865812;
    msg.width = 0.527517186092;
    msg.length = 0.370604558;

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
    msg.setTimeStamp(0.271656578931);
    msg.setSource(10490U);
    msg.setSourceEntity(49U);
    msg.setDestination(38621U);
    msg.setDestinationEntity(54U);
    msg.mask = 4U;
    msg.max_depth = 0.309075553612;
    msg.min_altitude = 0.276469412105;
    msg.max_altitude = 0.911979769057;
    msg.min_speed = 0.562460683591;
    msg.max_speed = 0.18307535011;
    msg.max_vrate = 0.141198740171;
    msg.lat = 0.209389055688;
    msg.lon = 0.301972597491;
    msg.orientation = 0.307423520844;
    msg.width = 0.602437159794;
    msg.length = 0.193869779371;

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
    msg.setTimeStamp(0.765250032974);
    msg.setSource(27654U);
    msg.setSourceEntity(53U);
    msg.setDestination(39801U);
    msg.setDestinationEntity(94U);

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
    msg.setTimeStamp(0.289379208132);
    msg.setSource(38336U);
    msg.setSourceEntity(35U);
    msg.setDestination(20144U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.925427049199);
    msg.setSource(45708U);
    msg.setSourceEntity(89U);
    msg.setDestination(8801U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.52362094065);
    msg.setSource(27485U);
    msg.setSourceEntity(250U);
    msg.setDestination(28973U);
    msg.setDestinationEntity(67U);
    msg.duration = 20710U;

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
    msg.setTimeStamp(0.37487903346);
    msg.setSource(51740U);
    msg.setSourceEntity(71U);
    msg.setDestination(4651U);
    msg.setDestinationEntity(121U);
    msg.duration = 41484U;

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
    msg.setTimeStamp(0.905723027704);
    msg.setSource(40398U);
    msg.setSourceEntity(247U);
    msg.setDestination(18955U);
    msg.setDestinationEntity(69U);
    msg.duration = 45846U;

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
    msg.setTimeStamp(0.711996835228);
    msg.setSource(33281U);
    msg.setSourceEntity(80U);
    msg.setDestination(56221U);
    msg.setDestinationEntity(152U);
    msg.enable = 145U;
    msg.mask = 2499745513U;
    msg.scope_ref = 2365922829U;

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
    msg.setTimeStamp(0.92256024439);
    msg.setSource(14016U);
    msg.setSourceEntity(254U);
    msg.setDestination(53580U);
    msg.setDestinationEntity(110U);
    msg.enable = 212U;
    msg.mask = 1102192914U;
    msg.scope_ref = 2249346105U;

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
    msg.setTimeStamp(0.868404319897);
    msg.setSource(31312U);
    msg.setSourceEntity(79U);
    msg.setDestination(22384U);
    msg.setDestinationEntity(110U);
    msg.enable = 9U;
    msg.mask = 885364928U;
    msg.scope_ref = 3596088168U;

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
    msg.setTimeStamp(0.335909713206);
    msg.setSource(54133U);
    msg.setSourceEntity(213U);
    msg.setDestination(47541U);
    msg.setDestinationEntity(163U);
    msg.medium = 141U;

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
    msg.setTimeStamp(0.148388184102);
    msg.setSource(47642U);
    msg.setSourceEntity(242U);
    msg.setDestination(29510U);
    msg.setDestinationEntity(176U);
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
    msg.setTimeStamp(0.536065451017);
    msg.setSource(24612U);
    msg.setSourceEntity(34U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(205U);
    msg.medium = 148U;

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
    msg.setTimeStamp(0.867977476153);
    msg.setSource(48837U);
    msg.setSourceEntity(123U);
    msg.setDestination(37420U);
    msg.setDestinationEntity(2U);
    msg.value = 0.837264539014;
    msg.type = 79U;

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
    msg.setTimeStamp(0.760634320902);
    msg.setSource(14175U);
    msg.setSourceEntity(170U);
    msg.setDestination(51284U);
    msg.setDestinationEntity(11U);
    msg.value = 0.935742722897;
    msg.type = 215U;

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
    msg.setTimeStamp(0.344360409914);
    msg.setSource(28540U);
    msg.setSourceEntity(22U);
    msg.setDestination(2164U);
    msg.setDestinationEntity(190U);
    msg.value = 0.872265343368;
    msg.type = 82U;

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.412244398027);
    msg.setSource(47625U);
    msg.setSourceEntity(14U);
    msg.setDestination(54208U);
    msg.setDestinationEntity(50U);
    msg.possimerr = 0.596513652942;
    msg.converg = 0.195389101259;
    msg.turbulence = 0.218883510184;
    msg.possimmon = 85U;
    msg.commmon = 241U;
    msg.convergmon = 169U;

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
    msg.setTimeStamp(0.439560858363);
    msg.setSource(15373U);
    msg.setSourceEntity(23U);
    msg.setDestination(61119U);
    msg.setDestinationEntity(4U);
    msg.possimerr = 0.388547942197;
    msg.converg = 0.164176351322;
    msg.turbulence = 0.501090329768;
    msg.possimmon = 253U;
    msg.commmon = 137U;
    msg.convergmon = 120U;

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
    msg.setTimeStamp(0.406693591662);
    msg.setSource(38113U);
    msg.setSourceEntity(97U);
    msg.setDestination(1772U);
    msg.setDestinationEntity(220U);
    msg.possimerr = 0.0831952146664;
    msg.converg = 0.242201789121;
    msg.turbulence = 0.877462406309;
    msg.possimmon = 99U;
    msg.commmon = 122U;
    msg.convergmon = 6U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.336500307589);
    msg.setSource(26820U);
    msg.setSourceEntity(96U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(93U);
    msg.autonomy = 120U;
    msg.mode.assign("EIXIUHNLGBQFIKLADSFNFRFPHJPOOZGCPYJWOQNMXUENIONKDMNLXIBAUBZKHKZQXVTDYOTZWOHGJBAMUFQNKOCYTJDHGZYCEPFLLDYCD");

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
    msg.setTimeStamp(0.17454514064);
    msg.setSource(62780U);
    msg.setSourceEntity(4U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(246U);
    msg.autonomy = 165U;
    msg.mode.assign("SBXHDMDQSADSQBGGERCOQPZZTHBIABETXNIGAOSPKLHXGWFVCZVSLNKZAZMCIJOZZMQKOIRSALSPHMDPJKFUDXXJOTERUWNRYWILOGVDMXANTUUWHTMURYQRVJYDWJCEEIFAGWCGPRYYZLVUFMUXFNLXJDUQRYNYWGWMELQPCTKAPEBVMVOGISXPRHCVTBKBEHYUNLBIHTNTCKFQSHEFXJZQOVYJ");

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
    msg.setTimeStamp(0.110555250422);
    msg.setSource(62876U);
    msg.setSourceEntity(243U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(104U);
    msg.autonomy = 232U;
    msg.mode.assign("BFAWLNFHNDXYAJJISERECXNZQGEXKKKSQYDMRVFOFQKAMSUWBSHBGPCCZGHUVEPNROYUZOCVZYVTKIFSKFDIQTWKTKDPRXGUYCWDPIGVVLZQUPASQJDAWFJHVJZ");

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
    msg.setTimeStamp(0.396189138896);
    msg.setSource(21445U);
    msg.setSourceEntity(236U);
    msg.setDestination(5447U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.653706451733);
    msg.setSource(8006U);
    msg.setSourceEntity(110U);
    msg.setDestination(33158U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.519447208425);
    msg.setSource(10986U);
    msg.setSourceEntity(38U);
    msg.setDestination(28447U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.85032822391);
    msg.setSource(29233U);
    msg.setSourceEntity(41U);
    msg.setDestination(63292U);
    msg.setDestinationEntity(144U);
    msg.plan_id.assign("OZOOEGCQTIGVXSVKBOUBTEJULTNCUOUWNUIKBSXPPDQYJQZCVPGMEZBEMZRVFCSURXCRJEFZSDQKHFCSJFANXHFRFOXTASKUYDGFRNWFXRUAILVVOPYMQAZSKKWNQWRTYYCDQEALPHNWTDDQGHDGVDZXWJLRQPPHXJVTLZVYBINMMEGZN");
    msg.description.assign("YQCRSSHGTGURMBQIIADRUUDBNZCGOMJGFSREBJMNPMIDEAKWQCQCSNKZNDUVEAVDVPWRHXMXKPHPQGSKXINBSZFLZZEOTAWZTVTRRNTQGTVFKXANJLHXMDHDWTDXBFRYNEHZCLUUROVMFPXEKQZZAVLTVHOSYYDVCHLYPLISAOZTOKYIB");
    msg.vnamespace.assign("ERLGSCVSNMQPDVWHKXTHEJUCFAMHIEJFDRFNCPACUXPKMOICGIHLXYEZCGGGRCHSPVYVWGRWNSEXTYUBQQTFRBHRIWQVOWUYKOOVFASJWMWINOPOVNJKKJDZDNCGRUDYRDOUZFHTGRBPFAHKZPDEIYOQKTHLDCNYXLJMFKBXRXLEEKTIJDAFTITFBNQMBBIMZOUTZSMSSLQLMLUAUPZXJ");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ODGDOHDBTKIBITFYRPFFHGWWUZJLGQHPFCEJXZLJJPRSAUOXEBQIXVXSNRLFCJDJQDBXCBKEFHVRVUCIKFJZEUOTRSQUVXTLLJYFYAGEGKUZANKMXWUOLVPMMDSIDTPEVRZBWRZVHRKWKOSCIODWWXNGXDKSZPTIMBOXUQZINJAPNAWGIARNLAPRQGDMGVNCBCBTYSNVSHQEHCOSANYHKHYEQMVEOFTPTBQMHLEMCUYWLLTWPNYQSYAIKAJZM");
    tmp_msg_0.value.assign("DEROUEQIMAMJUGAPUBEYEXEACXWWBWYCOGIGJSGTYSETHOJLOUIOBBQKIPWTNMRAZABAUMLFRXNNDMGHOBUYKQQEXTZSMPDCALDRAXWSPVITVDLHIRPOSJCVKYHFTHCEFFKTXHEZMNPLGFSNUXBUYQOWHKBAXMPFXSYHKPWVUKRJEGISRVDAZLCFDZ");
    tmp_msg_0.type = 98U;
    tmp_msg_0.access = 109U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JTVSMUJAMZBKYTSCOBIOKIPDNGLCXAOZQCAYBIHFVOUUVCNJQLEJJHPYRAECYKDBDMVGPRVKSETXPSODQFZVJMGINBXKLAUWKFILSFJYNEDXZTOFPWTSRLEASHZXYJISHBQZQNXCUXBQGCWXXBTWVVCNSQRHTAIWANIQIGIRCKMNLODMYYPNFGO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("UZEXIHEOYFMOVBBRUYKXYTKDYCXPEOEWVFSQHTBFNIKYSAENGHGSRQMTVWVLKGJMHROZQGBBTFTGNRPVNUUAFHVYLIYNSFPGZBDPJNCFRETZXC");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 16141U;
    tmp_tmp_msg_1_0.name.assign("XRZOZIVNSWAIMZQCJSPKGDFQNHGEFMHKPYPQQWHVEOETBJBIBDEODJEWVCNTVFGGHPYPILMRYURKGXELIMUEJTPITOGWNPZCUAWCDZLVZTVTKNOUXOBUJTHWAYYRPSUCDRW");
    tmp_tmp_msg_1_0.custom.assign("UIGMLLOZQXEVTJSPTMOWEGGVBHPGVVJZKPVUIWPMPCVVGDFUANZVEDRZXVNSKOLFSWOLSNFLJJACSJVOKROPATHFTIAQMCLBBDAYQBARGTYNYQJIYXLZBNURPZTUIQJCOHKDRXQTUHMCDREYWLWWSOSJXIITRBHFAKJCYMDHWBLZXTWXEIMCFDYDEMAKPYXRQXFZSLERHXHGFGEREZYHNNKDZF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DesiredPitch tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.371298411403;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::EstimatedState tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.lat = 0.378272011977;
    tmp_tmp_msg_1_2.lon = 0.4795262043;
    tmp_tmp_msg_1_2.height = 0.38267526199;
    tmp_tmp_msg_1_2.x = 0.911568812099;
    tmp_tmp_msg_1_2.y = 0.953085967157;
    tmp_tmp_msg_1_2.z = 0.100321409461;
    tmp_tmp_msg_1_2.phi = 0.350725830165;
    tmp_tmp_msg_1_2.theta = 0.556499414943;
    tmp_tmp_msg_1_2.psi = 0.609432634375;
    tmp_tmp_msg_1_2.u = 0.514519500084;
    tmp_tmp_msg_1_2.v = 0.998344524036;
    tmp_tmp_msg_1_2.w = 0.510534067649;
    tmp_tmp_msg_1_2.vx = 0.994873629942;
    tmp_tmp_msg_1_2.vy = 0.428418071348;
    tmp_tmp_msg_1_2.vz = 0.395907264056;
    tmp_tmp_msg_1_2.p = 0.890602702306;
    tmp_tmp_msg_1_2.q = 0.468762082405;
    tmp_tmp_msg_1_2.r = 0.486776700956;
    tmp_tmp_msg_1_2.depth = 0.888135200607;
    tmp_tmp_msg_1_2.alt = 0.776657825491;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("YDWNWAVJSHPFTDGCXZMDNQREDQTYCPABEY");
    tmp_msg_2.dest_man.assign("YQQUKTDZYGHPWINQYTGSIKQWADOJVOUYPOWHTGENLPWPKVZAXSAZBNYTVREFUIYJVTCPXNGULGSOJFBJBXXSTDRRHDGMCMEDJUHBATMSZSVUNIOFBQMSNLVL");
    tmp_msg_2.conditions.assign("EKUBAOGVAHBEWTLILUUFUHEQYSTRKWYOKGXIOWVEYNFJRPVIDRWVZRVNOSLPZFMAJEGZBCKAIRUVINJASDPKMBMRBSLUSMXMJWFMGBFPTHYDQGAZLLIWAQTGOOQJTDVFHGFTMYQRCCAWGMBDJCIDJNDNJCWHBYCHSPWKBZEUPTFFOGCNYKVIIDHEKUPZTQQCREENAXPOHRFJ");
    IMC::TrexOperation tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.op = 3U;
    tmp_tmp_msg_2_0.goal_id.assign("BOGKTFNLWUPPXDCPNOVFDBBDTIJLXKSFLOQKZMSDYBAKGTCZOVCXPENUSFEWPBXAMLNPZAQIJGFWYVMLVKZMXVRMQIUJGDKBHACERNDDYYZHOMWZNKHALCIJSAJROGETVHUCYQEJJYBYXRKPNVWUFISMQITERIMVHEHJPRARTBVQHIMVUAEIQODWTEQCWOUWSYRZCWZAQJSGUX");
    IMC::TrexToken tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.timeline.assign("GXUXJBNHRPXQTYNEVRVFZYRBTZCMGOKFAGVKCYJAWEENXLAUDVEJLABPMJFDZHODRFEFEQXBCSYHCMPCKXWAUMGBZCUGPPYYJYCQKXBRKTKSUHNRXBRWBWFKWFYSUQW");
    tmp_tmp_tmp_msg_2_0_0.predicate.assign("MSMTLWAZBNOMRTYORBDNLCYLFPGGEBVDGSHCIWKCXYPWKPECUVAMGHXXOPQINLHCUASKHJKECRYQEFNZYFKZSDNNOQKAKXEDTDIGYRFULRRZIBERVMLRDKSDBQVVZKSAGTUFFRIMJLOISDLZQHSIEJIGQBJPZIFXQAAJXDQFNMNPJUFAWXX");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_2_0_0_0;
    tmp_tmp_tmp_tmp_msg_2_0_0_0.name.assign("KJGYJVBOFKVVLIQMXAVNXOIYBMIRDHQANIDLZDSDPAWHYXFGUAHWWJGTLNXBLBEHISFZAVWYWGRXWMVNFGNXTPZENMFDFYMJOJQPJOKPEUPZUOEHTKYATBFUERYRQUJGWGPCNMDVXGHCERQKKIUDVBNKTRTOILWQFDASYMNGUZPLZXISEMICSXSUORZMVSQECYKECJYDLWPEDLKQMHARCBZR");
    tmp_tmp_tmp_tmp_msg_2_0_0_0.attr_type = 71U;
    tmp_tmp_tmp_tmp_msg_2_0_0_0.min.assign("YEHJXWFCADPXZYSYLQNQUJRFVDFRG");
    tmp_tmp_tmp_tmp_msg_2_0_0_0.max.assign("ORVCEFMXDNMDZHPAJFJSBOKNRINMCXKBLBCXOGNDAPFYSKQRIWSHQBVCEWZUFNFFOYKQURVLZCKWVTCNLXCHXMZITEUKDIDGURWGJGQQCVHPVC");
    tmp_tmp_tmp_msg_2_0_0.attributes.push_back(tmp_tmp_tmp_tmp_msg_2_0_0_0);
    tmp_tmp_msg_2_0.token.set(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::CrudeOil tmp_msg_3;
    tmp_msg_3.value = 0.0982116891269;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::EntityState tmp_msg_4;
    tmp_msg_4.state = 124U;
    tmp_msg_4.flags = 71U;
    tmp_msg_4.description.assign("USCXMNPTDL");
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
    msg.setTimeStamp(0.163533224213);
    msg.setSource(59598U);
    msg.setSourceEntity(46U);
    msg.setDestination(61701U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("GJNRBEKNVMBBRIECWGAAPJZRRLCGASIXRWGLZEQATHAMNJSLPDJLDZYZIBKSKSLTDZYXABVRXHMJBYNQUPHPYOCEITQXGHQDWUEHMRSKVOIVPNBKKEMETXQCUTDQOMSIDTAGHWDEEWNINWOSTWVXDFVJBRQREWGPAFBZIUCUYFQFHSCVPNXTBRHZLOTXLUJFOPWKGVFJXCVMYALOOYNHKIDUICKHGJOMCJUTFOPU");
    msg.description.assign("QMVNUMQBXVOZESELCTPCJQHXTAQZPTADLQAEZQNSAHLBGEDGAKEVYZGADNWMFYKEVMLVLGDFTJYAGKPJQTHOOOWCKPNITJGRWHNYGIXKWVQJZRSGYQDUIDYXXEJDSJR");
    msg.vnamespace.assign("QOHQCWODGRHKCBWRUSXKXHQPOYUTVPAHJBPJMTZFXXNNFXRJZGJUODDWMHBIIOENNKWPNYCFQYWTBULTALEHJITUJDVJYZPTXQNEFCVMHOR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("BZAMCHFGQREMSFHCREJPX");
    tmp_msg_0.value.assign("IYRCBRIKCBHHIOCBUPWHRQANHOMWHQZYTPFGDDXGCBKPKWAXOMVJNNEQVHUUTABSMQRLXSMNDUDQEWVOBFNMMZPSLPCKLFKFASBVMVSPNIVVSXGWGOJJSEYKTYWDZERXEFCZWAUGTCTEOXUMIRIYGACTBDYQDAEYLMJNQRJXXUJADEIJILPLHNLYPGOROFIVTYXGQFQ");
    tmp_msg_0.type = 1U;
    tmp_msg_0.access = 239U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("ZNASXDWYUDFIUXNAFSCHHGAZHTEQXSVKMLQYKLTPDSSKCSMVRXBCSGKVMPFVKQYAMNODDMOJEULEDEZPWAFMHCRVJVYGVTFODRYFIFNJKGARULNGCTKBUDZHTYQNINGNGTHZLRWEPLXGRUV");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("IMETTDLCIORZMXXHSCQVBAYGSVJNTTBCOOXBWXQHZWNRQBWXOXKAETRUWVFVDNEJYIKJBZQJPRPECEMHWPASOUDRLFYQASUZZPSPHLOSUPNGLXGLGHUBSOLBBIFGDJMARMIVALEQVOZ");
    tmp_msg_1.dest_man.assign("TGLIQWQMUBPPWBNLPFMHIGAJIMOIKXGBPZHFBOVZKYASABQDFECSDTNVEZUMXMYPWUTXKFUHHOGSLCFYPCCFZXLCGUXYLOMDBGOGDXUIITNRWKVFTFOKYSLZXTLTUWKYHWNFRSQEOKADPEAGNEMCHRRUTSTJWLDRSXAKBDQGZNOOMNUCMVNHSXHEWSJDQLHRWIIOJJVVEKJLBRPAYYBXWETQQJDNJEAAAVRHGRMVIZKYZZJR");
    tmp_msg_1.conditions.assign("LMJMLPKRRBDOPTDECWKEZVIRTVBIADTPPBQNXOZZQMPJKRUSQG");
    IMC::PlanDB tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.type = 81U;
    tmp_tmp_msg_1_0.op = 239U;
    tmp_tmp_msg_1_0.request_id = 30304U;
    tmp_tmp_msg_1_0.plan_id.assign("IETYMWHAJQUHQJQOMNQJHAHNQBFAJUANM");
    IMC::AlignmentState tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.state = 76U;
    tmp_tmp_msg_1_0.arg.set(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.info.assign("HESOUZAJQETXBRLDDCHDHTKPIBDCTPIJBKTTTBUBRSZVEBVIPQVOUTFAIAFLMMZXWWMILTLKYGCNESLTQLWFOVOMYTCZYWGFFONUOCLZCUBDJFBWYXLXQKSMOJXIZIAYFLPQVNZKHZPMOFSI");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.564559570578);
    msg.setSource(49693U);
    msg.setSourceEntity(99U);
    msg.setDestination(18496U);
    msg.setDestinationEntity(37U);
    msg.plan_id.assign("OYRSLMTWZQGXRZETQWLGHBAYSURFJSFMROCKPAKAKORCPTIMQNNVJIFRETOCDBPBZHNDMLHWMSOWFJWELXDMGNQHDQHSPDVDSLAXSWXSXEZXYCMJNPSKHNZGPCUHQAIRGIWJYDURIYEVNTAFUVVJBNLKFYWJEQEACDNVVQIUVOTBXZPUZGUKLS");
    msg.description.assign("XMWFAQZFQSEMHZRFRXQTHLBLNSTHGVKNXEY");
    msg.vnamespace.assign("TDYZIPRNUDMYUWOVCQVQRZBIEOARXLDI");
    msg.start_man_id.assign("BZQZDGSLGQDBEVUABQCJIVONOFLULEHVJNIKPEZUIVEIZPZYCBSQFREGWDKUHDBDPINKAWBZOLBXODONZFFSVFNLGTIANFRPHWRPEVMDEGKRZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("URFLWDIKSNPSXLNDQNNCBRLMMFHXVLBAHMBZYOKEDEICWZVAXRNKKTEOCYJAVZBORGKMTOWYYPZLDNBEFSXQSATHVBKSZJZDKJCVPQWF");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 27368U;
    tmp_tmp_msg_0_0.lat = 0.644296183507;
    tmp_tmp_msg_0_0.lon = 0.334434153667;
    tmp_tmp_msg_0_0.z = 0.276068666981;
    tmp_tmp_msg_0_0.z_units = 60U;
    tmp_tmp_msg_0_0.speed = 0.910296417247;
    tmp_tmp_msg_0_0.speed_units = 64U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.156221707964;
    tmp_tmp_tmp_msg_0_0_0.y = 0.0810883641835;
    tmp_tmp_tmp_msg_0_0_0.z = 0.858687977851;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("RBJGREPJWIMLBEQMLJKNDMBPUSCFVEGFTWHPPDWZAYKGUXWIKOYDUTMMHAWLSZTWNIXZRKBBSGNHQFJECBNOEOOKZQBAZEUGSYAYHBIMOPZSDTADAQAAXZDQJHIRWBYFKRGLXFESOZPYETXSVCVCUTDRHGDHVRHPSJYOUTUXAGJLEMCLW");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::TrexPlan tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.reactor.assign("GRMDBLNLTGPAOGQARBUYNNRGCJSOENZYWKZBJXZRGVSFKXBCKDFGECJCQJAWTRPABHHZSCKSTHSDTEDVDMBHFRWKRWAYXKDIUBOBLQUXFGUKFBTIPZTZQXWINHMHYECXJXTLVIWYCKAFHQQASXANUJXWMNWHUYJRVWALQBV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.641858089564);
    msg.setSource(44836U);
    msg.setSourceEntity(244U);
    msg.setDestination(64855U);
    msg.setDestinationEntity(252U);
    msg.maneuver_id.assign("ZFTXEWOGVOXHSHDYFIRNZWLJPEUYLCGGNKPFCAQJQXYKZOCYERQRMTCFFDUDYORXDBBRNOEUUCIIKDITIPRJCJVGOBGDMCTZDIZQEEHYSNWBFAKQFVCWENABAPALZDGKMVVFPBHEKOVLUKCNANHQWTIOMSTJYTIRGAXNSLACYTMJJPOMUNP");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 19112U;
    tmp_msg_0.rpm = 0.796569140048;
    tmp_msg_0.direction = 165U;
    tmp_msg_0.custom.assign("UAJRCWGONEDAZPBRSRVBOSEKSCBAXJPANPRLOZPGBJIHERTMUJTPTGKWHOGPRKWOVRDHRLWMFCLBYVFKOFHNQNXMQNZDDGTBKFWJUXCWCIVMUUGHJJHQZFLPVJMGSYCFLETXDMIBO");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeadingRate tmp_msg_1;
    tmp_msg_1.value = 0.305304026131;
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
    msg.setTimeStamp(0.838473568661);
    msg.setSource(54941U);
    msg.setSourceEntity(234U);
    msg.setDestination(3994U);
    msg.setDestinationEntity(193U);
    msg.maneuver_id.assign("JWAYZCRRBLNVZGHFXMHNJBATBIBNSGZKAKUKPPQULMLPPMDFZMCN");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 84U;
    tmp_msg_0.lat = 0.584945565089;
    tmp_msg_0.lon = 0.664276446606;
    tmp_msg_0.z = 0.638576312774;
    tmp_msg_0.z_units = 234U;
    tmp_msg_0.speed = 0.275919439149;
    tmp_msg_0.speed_units = 56U;
    tmp_msg_0.bearing = 0.931215565129;
    tmp_msg_0.cross_angle = 0.482502973306;
    tmp_msg_0.width = 0.822748309672;
    tmp_msg_0.length = 0.148474821818;
    tmp_msg_0.hstep = 0.739382826208;
    tmp_msg_0.coff = 166U;
    tmp_msg_0.alternation = 208U;
    tmp_msg_0.flags = 200U;
    tmp_msg_0.custom.assign("GFPHTTRBKRJHVBDLGOBHBI");
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
    msg.setTimeStamp(0.133443430703);
    msg.setSource(25477U);
    msg.setSourceEntity(8U);
    msg.setDestination(28026U);
    msg.setDestinationEntity(220U);
    msg.maneuver_id.assign("KZYHMYHXAWDEMAJORRBWBCKGATPVUSQGFXHEJHFCUVIEQVLALQTRFUXPGZFGEEXAFJWMKBCDDEGAOBRTFDPRFINZVAJLGSHZZLFEWBDTEPDMQPSUVOVHKVBQPALYTCVVUWOPDQQZLWKXOCGCSDLIHAWONGUMWINUTNYXNRBYOZJEUXXNWSQLYGHMJTH");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("BTYUWAIGMPGZGMYETKDSFVOZVTYQABDSCEBZJTQRLEVUIKXRFYQJMLPDTNSSNBKNOABCPDVNNHQRLWNMGWYJSDAOCXRDEPXBGYUPRTAVMVWSXZGFDRKJOAHVURWLZLTEQBEC");
    msg.data.set(tmp_msg_0);
    IMC::SetThrusterActuation tmp_msg_1;
    tmp_msg_1.id = 212U;
    tmp_msg_1.value = 0.50462288352;
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
    msg.setTimeStamp(0.894703739719);
    msg.setSource(42799U);
    msg.setSourceEntity(15U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("SMOVCEWFRSJGZPVZQQCELZMIHJKAGLIMGFKBMRJQUPJJBYLVFKUCRPLJFFHYOUDTGRXKGNOWQZMHBWANIXIAXGKUUZXSRQBAMTZXWDMABEXRKPYOZQTVCCSDZLEFNINYYFYUDSNCYRVTIGAFEQNBWRJYAROWDUTQHTEBKPNDBEWPVEGBEVT");
    msg.dest_man.assign("EKDBNTKZWVHQSGGKTLKEYUYVJWOVTFOLBWTURIFLWSXMEMFWVRCZTTHFVEGNAOJPVKJXMVZIESZZBQAWRIXECTFGDUOJOEMLDPFWJLBKZOMMFBKPNPUNCAJJZGDYBATSQFBAMCESJZCYJVKXHPAXANPCDXGSUNQDTRRQEHAHYUNIQLIFQBAOXOUQPYLCLPYQLGGDDPNLZKJSNWRYUOCQICUPHWHWVXHRMSTVHNIXHMSYBBUKIESIFRDZIDGR");
    msg.conditions.assign("JHFLZUZZYIQQXYKVTTBJOCUMPTIZZZUVJCWYCUWAZEVEBYSEPHRDPDYLNFAIZJMEMGIHKSMDLDKSSCPMOWYEBUOYVNGWBWOLHMWKYLEXIXSPDJKVOQI");
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("RMSIIACQOLQZPCUDBNVXMRYQXCRAHYKTZNHMZQGKIEVGFNWTQULGQSHADBEIXZORMBEJLCMJKAUW");
    tmp_msg_0.predicate.assign("MDYYDYHTSEHLDSPNRBIKMVTJZNKAOQNJKJCVLJEISXVCBRZFGVEVXSGSXUDGCHTFISNWKJEOQLZHDDXWQ");
    tmp_msg_0.attributes.assign("ZOYHDTYWFDBNUGDUPAXDFIMAWRCTSWBYGZWPNRGCEPEQNYJGMVPNMPURXOULKQVDLTJHHVGFZURCBJVIWBLCLLVUXBEQSQSVNDARSBEOOZWZJMHMSRSMODHZIULIQDHXKHVQC");
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
    msg.setTimeStamp(0.853436904698);
    msg.setSource(28763U);
    msg.setSourceEntity(225U);
    msg.setDestination(36661U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("VANXDBLVROYPTHTYGIPUAGOHBTDBJWXGBMYJESONINKPQBKRYUEXJNSPKQRVTFGWBEJWFUPQTMCWAJOKPVWVKANOVXLXBHPCRKBLTYGRRCXQRZBKMXL");
    msg.dest_man.assign("YCWRDYCFICCZGAZPHKZWBTAOBDIOJMCEUXTNHTGZKUIPJCFALYQLLLAMXPSYWQXJRNFMKOZXEKELQXYNSHHVUIQWFBHVBNZPDPXJENNTSLBGJYGJEWTEUMSMIEWWHTBGUMIBLIANWDHTRVPUVLDDDOUTRFMNIRXIVYRPUDFVKAQJOWOCAUKOEJSPSFGSPZGAVF");
    msg.conditions.assign("FQSIDMTZMBOHYBMYJUFJSAHBNWKKZDPWKLNFQHASLJCGKVXTIFSOEDKDESOETOZBYVRGHVBNBCFARYLZJBNWDSYJQGEVUENFXWUUJENAPFZPWNLNHAXQPAPQCPTQ");

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
    msg.setTimeStamp(0.94376574069);
    msg.setSource(23895U);
    msg.setSourceEntity(169U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(45U);
    msg.source_man.assign("JHITBQIVKAFTUAYERSZLOMNJUQYUYJRQOJQTA");
    msg.dest_man.assign("HSBYMUGPOZKDCWRVWJQXOQAEHIFSFBAVTSKHPPBKXYIISRWYDVEQDWCTSMHPFYOXXANUYSLM");
    msg.conditions.assign("XXGZANJTPYZKGYRCPVMHMWMARTVFIJQKJQFJGZCKGMGDAOZLYRWYWTCOIOHASXUSCMBOFZVWDQOFQUMVCIESILIABJHRFWFEXFDZIPDPWAQBBVZZSHYYLCEPBTEUTJHGRBNMCHQTVPKZUMQRPHNQFOKCOAEUSEYK");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.973274888384;
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
    msg.setTimeStamp(0.323964445104);
    msg.setSource(38732U);
    msg.setSourceEntity(59U);
    msg.setDestination(9948U);
    msg.setDestinationEntity(156U);
    msg.command = 157U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WAWHFPQCSBDVKSYHOZTPAKWNLWRCVNNLYUZMZEEGKCWSWGZZONDGDOUFIEADMFJI");
    tmp_msg_0.description.assign("JWAXWHFILOYJPLZVWKRUZFXGYTBFRCLDLOWVYREZDOIPVJSLBQHNZFTFSBOSHXHRTGEPKPAQUQEAUOYPVTCZNIHZRSREXUFLSDJZIBICMMTNUCOOAMISGUXQKRKXUETDUAMGOBEWJNYXTBMUJCMLAPGAAEWYXEYTHKEPLWI");
    tmp_msg_0.vnamespace.assign("DZFQVECFYTARVWZHTCVXSXELLVQCLIAAFSHVGKMMOCWRFENCYSXTJKRFVJLOMFJZBAGNJODPZIRWNPPKJIDGCTIFRGCVZWNXPFWYSNXZCUETQJDZLUDXJKVNTUKKHNLTSONYOABKUKVAYRCMSMTIFXCAMKLEEAYZIESQWHBAQGVBPLSPGFSBXXORMYIEYHXTUIDTUWHBQYZHZOMWDKURRJIAQBIPMWQSHDGQBMO");
    tmp_msg_0.start_man_id.assign("WJPUMXWTEHIXNGRBVZQOAKEPLASBPKBUGWXOTVNPDPOCULAETKCHFSFFWDKLIWCPJFKKG");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("RKNWOVDQDMAWGNYWVALNIQZGBRLBPRZYVSMEFYBFZHMTJCNJTFIQOMPWSHXDZNGILGLOEVBIUEOCWOAJACNHOMJJQUWBBIVFTXTXMDLSVBCHGBELZGNTVEEYJDUSDCPICTHKAKSXUBAGGUIDIVRKFUYTOGLQFROWDXTQFKZLHEJMXSIITXVWYJZTPZRFESCDYKUCUHNPWEOBPZCYXAKAKJJPREARQNFOYQUVCMXKHRHXSPLZWQ");
    tmp_tmp_msg_0_0.dest_man.assign("TMBETRGZKEQGAKSMLXGCJKIFVIQHWFVBUEXLDCXLGDIYSMJFYOUGEQYVKUZOUAWS");
    tmp_tmp_msg_0_0.conditions.assign("HHYEXEHQUCXQYENULJUTQEKTDYFCUMJRODJYFHOAAQALXHRCABUQVLSGSGZXAYVOHTUZEHXZMMILRIODXQNLZWBWFYZMCFTDIAIPILQQDPBPWWCVSJCISSFHJJPTFMHXGFBWANPWUFRXGKLGPKWBEDYZCNEBKMLDVKMSDOQVPOIKOUKJRBGJNROSPVRXWEIZKSNNXHTGANRVRU");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 32235U;
    tmp_tmp_msg_0_1.lat = 0.697993607321;
    tmp_tmp_msg_0_1.lon = 0.885587185494;
    tmp_tmp_msg_0_1.z = 0.815524595172;
    tmp_tmp_msg_0_1.z_units = 58U;
    tmp_tmp_msg_0_1.speed = 0.530334423849;
    tmp_tmp_msg_0_1.speed_units = 198U;
    tmp_tmp_msg_0_1.bearing = 0.283531419144;
    tmp_tmp_msg_0_1.cross_angle = 0.578551622195;
    tmp_tmp_msg_0_1.width = 0.307708454722;
    tmp_tmp_msg_0_1.length = 0.416074834349;
    tmp_tmp_msg_0_1.hstep = 0.527166249777;
    tmp_tmp_msg_0_1.coff = 4U;
    tmp_tmp_msg_0_1.alternation = 106U;
    tmp_tmp_msg_0_1.flags = 237U;
    tmp_tmp_msg_0_1.custom.assign("YQIDGGRAAGAZDPLTVJOCHUODFPLUWJCLCEFCSVQOXDRTGCIYELQGNXBDTPYMVEMHWFMUPTVOYHXGCAASKMVFHKWLFVIAOOEQZNRKKQVKSBQZADSJLJABWEYENIOCQRHBXRHCAJNKXMVJEZWXHRKPZKRGKYUHHYSTBDFHRGFUVTGZZ");
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
    msg.setTimeStamp(0.045101178084);
    msg.setSource(14418U);
    msg.setSourceEntity(16U);
    msg.setDestination(538U);
    msg.setDestinationEntity(30U);
    msg.command = 127U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IBEPHCRKHDNAUCGWRDXYJYKHLMRUEZUYQFAKCODFLRUGTGRBXCVZPYGAMFWTTHAKZSOJUIFIFBNQKHBQYRAVLBPLWTSYVIOBVXUPGSTWVUCF");
    tmp_msg_0.description.assign("PFGQENKBGJVJFUAEUCNQMSJTWAHGISDCIWMTHIKCZHCSEZVFPFRZYQSLNGLQERTEYPETJZXLDQOJSIWDYHVBWG");
    tmp_msg_0.vnamespace.assign("HLVLJAJDKNBYWSBRCLDJM");
    tmp_msg_0.start_man_id.assign("IEVLXPRQJMNWOPBZEEYQTAXSHKYJJDCSMYZGFYWOKTNIUACWCNLHTENMACTHGAIQAFBOWCKTMNDGNUXRKTJLAVEHVDPSCLZKVTMPUMAJOVUGIUGRXAOPWQLOOSAVHDIRDUEYPFUUJIKKQKJMPHRXYYKNJOUQVZHXFRDMZJGZBNGRJBODGUQQEWPCLFHBWIINCMEWIQYFDYNBFFBBZVFEZSVOZLXHYTBZLSGDSQSLTFXVCT");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("HPPCPUXPIFKNEHDYUXWZXJYCVGDOSWMGPRVWGOHIIDWLSTXVAGQEGYAEMFTSJZRMRSXLMEIIYVRFIXEFCLSELNRNDHSGQZUWPNQNHWMZWMUCLSDGIYXTLJIVWFVETDARODUQNBLBSQHKEBEUOYVMTZFUGJFPAJVAABKXLQCZAC");
    tmp_tmp_msg_0_0.dest_man.assign("BZJSVYQHMGTOXCOKTKTLNWIHGERKTYFXRBBXAQPUESIYEGTQJCBKARCDCLKAGVAXWZMMLJLGGMXCSZLRPBCSJFTUHIUPHZDYGEZUWJDPIIRIWOSDUNNJFPNHWGMQZPZBXEANYCSSGQNQJFHRBWQADKOOJOUFMKINSPBXIVZYCXHTZA");
    tmp_tmp_msg_0_0.conditions.assign("FLHUZWULYCMGOIGTJLPZEPIOJVCPZTQQUZNLGUCBSOKEOWMQOVICYXVFQLKLJFIXBAAAMWTGTIIVEATSNBKWSVWHPNHDPBZJKHIVJGMRIWPFT");
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
    msg.setTimeStamp(0.815368143346);
    msg.setSource(24694U);
    msg.setSourceEntity(243U);
    msg.setDestination(32305U);
    msg.setDestinationEntity(59U);
    msg.command = 201U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TSQCXGSWAXVKNKAJNTBTUKBIXSMNQBBGFLAIUMHVQVHOEJNRRCQFXQTJTGYWNMMJACCALYFXDONDGQYFSVTIRW");
    tmp_msg_0.description.assign("ZHFBVFEXMQYDZLIGYVOCUEYDUAOSRWHGRMEIWY");
    tmp_msg_0.vnamespace.assign("GPXJHQVQOIOIUUYRUTYBTBDKMSGRGBAKOHTZDBOFKNOFEIIMDZZZXSYHDTXIFWRHPZCARSUSHXGJBWXUPJYKELNFVTENICNKGJYZXMLFDYFNYEDVDCQNAJSESCBDMQQKCKWRZRQNHAUWSGPALIWQEPZLLVGROXJJHEMPJACWNBLWGOMLUOHWAIJVIKLHAKRCHFCFQWLUFTPBUYUZLVQXBVKCOVVPIESGMDRZEATPQNXWFSNGJRTPVDET");
    tmp_msg_0.start_man_id.assign("KGNKKBYLHCTVBOSOVPPKARGQATXUUFTRQFYZFXZXMACFVDIGJBRPYNSNWUHKINPVOXBIQLIVOHQFIEAQXDAXKFJYZRWACREGDHULDETRTKHNBWGXRFRXMJQBWTCPJVIOKDVSZULMSHEBLSSMAYEDOIMJOYMTJZNIHPFEYSXYZSOLUNSXPULOMOCBVWKGRQDUFEMTFLBBZJQAYYERGJNMQHLIUECSWCVKPTDVAQPCIPHJND");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("JITRIHQNZDKXBKFBDZYVSRJKSGOSGGQGWJZNJTFVEQVOYPGXMWUGHBFEKSIHOTFOIBRLUYEAPRGRMDY");
    tmp_tmp_msg_0_0.dest_man.assign("CTRRNODOQJSGFCAKLBGFKKTIGOLVAVIORBEXHOLBVTYFWSGWDYQRGHHMIDUZGBDSHMNCDANJWNBWFJKAKIXZSQKQMQTMXKDYVQUORUUDIKEWHHSAADFCTEANFPZYENCZRZCFSERPPRXBZJOPLTDFVNBOBXYMNWMRHUABUWDYWPLCNEHLSXVSWCSZZGXPPJIKIOEGVTLXEJMCXKLZOGUTQTJFYPQYSMVQMJRCIPWVYGFZENUAYLMTIQAJUPVHUB");
    tmp_tmp_msg_0_0.conditions.assign("MGZQBXFCJAHTAJKASKUGGKYXFTYD");
    IMC::GroupMembershipState tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.group_name.assign("HBHCHXIAICJLTSXFSSRZPBBSXAJPCPXIQUQDBSKYPHLYPJTTEUNWCMEHJBZLJHVAOTOKNCUSSEIRJZQAWUVOPDQNEKEGDOAACMQZYMYXNLIKYASLJGALNDKBXOZIFRADSCVRKGBEF");
    tmp_tmp_tmp_msg_0_0_0.links = 1661559809U;
    tmp_tmp_msg_0_0.actions.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::SmsTx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.seq = 3708991081U;
    tmp_tmp_msg_0_1.destination.assign("SWFZIKJTEDHTXKKWMRSLGJTVOCMSYXDUUNHSATVGYVNPKTFUIQQYDZLZSCDAKRGFDZBWPLBZMKRPJQWJFNGUWXCWFBHGENFXILPLHCTOJMGAHDLKDDJZBXSASFPIQEXEFVBCIDEHWNMXOURNKYYORTAOZVFJGBYCXBBEXYBZKRILIRUREQMWCPVVHZNSMWMWEGZUJQV");
    tmp_tmp_msg_0_1.timeout = 64457U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {32, -21, 84, -57, 123, 39, -53, 37, 89, -19};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.289424409628);
    msg.setSource(17223U);
    msg.setSourceEntity(54U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(172U);
    msg.state = 242U;
    msg.plan_id.assign("KJQTWEPQFSGDKAOOXXWRHSXVBIENGXZECBPFOIUUNIKHACHJLWVCLJCXZBPYZZXYNTGBFEGNBPIDNQXHTBZMLVGERRARTMBJYKRQRC");
    msg.comm_level = 228U;

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
    msg.setTimeStamp(0.736678106523);
    msg.setSource(18350U);
    msg.setSourceEntity(173U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(213U);
    msg.state = 87U;
    msg.plan_id.assign("ZFUJMQDZDTFXNLMPPETPUKTYLNVFWNLMDNDPSCBSSLRQYUIEWAKOVGHIIXPRSJWTGSJLQNCLOHJWIWPDBIWXTJVUTBCBAXVFGXBKMUGJQQZVRDHCYHDUOKSSIPMYEWRLBYUXIQNX");
    msg.comm_level = 26U;

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
    msg.setTimeStamp(0.722496777731);
    msg.setSource(64327U);
    msg.setSourceEntity(254U);
    msg.setDestination(56348U);
    msg.setDestinationEntity(113U);
    msg.state = 223U;
    msg.plan_id.assign("KSYOPFAUBUNSRIRIPBGAGQPCCOKXDTZMFHULBERDWOCBLEVUCUHQUSYQFDGBRHLTGVMJKO");
    msg.comm_level = 206U;

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
    msg.setTimeStamp(0.16779981778);
    msg.setSource(18023U);
    msg.setSourceEntity(247U);
    msg.setDestination(34446U);
    msg.setDestinationEntity(160U);
    msg.type = 92U;
    msg.op = 242U;
    msg.request_id = 11198U;
    msg.plan_id.assign("UHGDYCOVYJMXGAXXOQXLGVOJUKXDRMJAKIQEOYFDRAGUWBAWUKFEBHWDKJNPIMXZZVTTJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MDMFYPRDQVOPUKNFLARFXTWMWXHLOOHOOFZVKSBBITWXWFAQPDUTXRKKFQAJAYGUGZYWOVVVHMNFFMKMLSAPCPNIDODNEELKAVPGDTCFYIUPSHASLXUSMJMYXCZFILNSQJCRDDGDLEJIBWNZLRLQGRYOLZWKHYNBZMHXGKRXHRPZNJJRHCCGEUHGJUX");
    tmp_msg_0.sys_type = 9U;
    tmp_msg_0.owner = 34733U;
    tmp_msg_0.lat = 0.334511827081;
    tmp_msg_0.lon = 0.857016516141;
    tmp_msg_0.height = 0.0302625645264;
    tmp_msg_0.services.assign("OXIZOBOVBDMATYBMEQRWHNCALOLEHFNQBWAKRMCYTXSPBMISSAJDEWLISHCTFFTNGVDLMLOV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ITTHBEWKXIVKYAIDSBCLDXNESRLWHPKQOLHQRQWFNNMNWJGUEWXTZLZDQUOBLAJVHBWOFVTPKNCURXURFMIIFIASMDKKXZZRIYFMPYAVWDPQIBNSDTJTOCEAWGHJWDYEGLKXMYMFNEJUFTJMSJGZSEZPPYVPHDHUOWJSETDPPUZJFHVCGOLDOKRAUPQSIMC");

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
    msg.setTimeStamp(0.589956299826);
    msg.setSource(31136U);
    msg.setSourceEntity(120U);
    msg.setDestination(61790U);
    msg.setDestinationEntity(104U);
    msg.type = 84U;
    msg.op = 39U;
    msg.request_id = 55652U;
    msg.plan_id.assign("UYKUFSYVNCBWJYSKHPZGV");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 80U;
    tmp_msg_0.text.assign("SFFZSWXHFCWKXDLPKKLULQJFIYLHJEACHJZRZMTWLRFHRJFBHSRPGNJTPKIEBGYLOSQAXNNYVACIYXCMATVEQUTPQBWOUTKEVHLMXYSRARTFWMKIQNQAXKDPGDDCVMXQBLZEBCIZJMHXPYHZGUXLXONPUDTWNUOIMADUYPYJAKMQZNUFGRRREIBDOPUDEBOZQUNCMWRSSGAPSVSYGVDVOHINKBEIOTEVCOHGDTW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KMYBACOUWBZZJFJEXWJVCXSQLHFDJSUNDUVSXLDOWYOVCDXGYHSYAIHTPUQVFVLSIKNBXZDDAHBMCGJIATAXERINNCKKQYMORDWQZTXLTRRWSQQUAUMNEYQCEFTGSZZZFGLTCPHHLGTDJWJMPTGNXRPLKXIEBIAKWWAIGOWVMFPEQUPVKSPBECKFTEACQI");

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
    msg.setTimeStamp(0.527279268301);
    msg.setSource(15154U);
    msg.setSourceEntity(152U);
    msg.setDestination(3805U);
    msg.setDestinationEntity(126U);
    msg.type = 91U;
    msg.op = 219U;
    msg.request_id = 23915U;
    msg.plan_id.assign("ZCKNDYAGMYDLZBFSWTEFXJYWZTSPASRBVVVKUHTJRWVHSDRCVQOBBNAUWKEJPDGIJKYHIACFOFREOATBWKLDHQQMSTEGJYFOVLLIANURUOMIJXCMLYTKOZMXQEPRWKYPUESUGVHFJWTPVTIPBHCOUQZRKFPZBHJZNAHMHXMCUTDTKLBWIAOQVRKEDGXIIQGQEZNVGZESMFYFNINCUNCUOGOXLLGGMRQIBDBXWXPPHMXEYRFSLN");
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 75U;
    tmp_msg_0.op = 84U;
    tmp_msg_0.request_id = 25472U;
    tmp_msg_0.plan_id.assign("ZVTQLHENMAOHMJJRQJYRGZYHFLKXUYPYPPIMSGWSBIGLRAJFSHUVSLFMYOMXBCVQCXMNBPUNZCOWHRDOLGBTDENKPBDZORKSIUVWOJQBPRXKUXYYVJZEQQXHRGRPJNKWTBCOKWVUTBGQJKWSHDTPSVJEUTCCAMTEGQYKAOGNFACZLSCUKWLFFDHVYKFWEFVMDNCCLPWYSDRIXEAONEDXMIIVAXGEIOWENDMNXZHFLTQSIGARI");
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("IKKABNOHAZSMZJBBGYQYUBXELCBQJQPWLWLJHEIDWANOIHSCUUHTVTPSULCEFBWENOSWKUKRDQDOVFQFTGESUTTZNPPQGDRFBNJRLUVTWNTMZZHPVMFOFQCHCOWZVXKOFJCDPRHRYQQXMMPQGVYIVIRNDLUYFHLCFUEDRGOATTYXMYKEXNNMNWZUSTVGHGBYDSCKJXLYJWBYCRMASLRZWGJKKHOIRAIEXDXP");
    tmp_tmp_msg_0_0.action = 26U;
    tmp_tmp_msg_0_0.grouplist.assign("PDRWDZQEOZTJRBLZYGUXPZKFVXCGJAHVXFONWZGVFTCTVQSOTJTATUUOVSTNEQJURRVIAPQSVXNEKSYAIKMJYEWLHPBNCKOBMOGUKLUQWOBJISWSYFVJPELIEKQWSMHMHPIVRJWDNWINCYOKGIDTLLPZBBWNHADZZATFCMUXYKCPZHJVUL");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("NVSPQYOSRYEGNNK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CNUWDWCQBHFKFBJOPBOMTWDMCGZGWETSCLMVTAFGKBZLNSHY");

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
    msg.setTimeStamp(0.0102245789782);
    msg.setSource(4308U);
    msg.setSourceEntity(100U);
    msg.setDestination(4654U);
    msg.setDestinationEntity(69U);
    msg.plan_count = 59315U;
    msg.plan_size = 35355294U;
    msg.change_time = 0.226613141722;
    msg.change_sid = 25673U;
    msg.change_sname.assign("ZPUOPSIFVOSTRTAOZYVUYONEWOWZWSXFKLUKGAOFLUPMLYHKTBCQWMLHWMSTFQMWUNGAIAPHVFNFNNKUQMYZSPMWTJLHRZVADDYTSKIKBXHBDZZNCDJOLBBDACIEKHRJPHMUDNELKQEZIVRCBV");
    const char tmp_msg_0[] = {40, 34, -87, -46, 87, -38, 117, -61, -42, 55, -18, 56, -38, 43, 29, 22, 85, -17, 108, 27, 45, -121, -65, -25, -5, -55, 115, -47, 103, -88, -112, -3, 115, -87, -30, 12, -91, 109, -86, 32, 126, 111, -125, 27, 52, 24, 117, -126, 86, -15, -77, 26, 41, -110, -21, 51, -40, 95, 123, 41, -67, 86, 19, 102, 71, -124, -6, -87, 125, 52, 4, -112, -56, -32, -41, 112, 51, -46, -45, 91, 113, -56, 19, 19, 11, 56, -62, 41, -120, -6, -67, -109, -89, -81, 45, -66, 89, 91, 28, -111, 84, 58, 120, 125, -47, 106, 85, 50, -107, -25, -6, 92, -1, -75, 50, -70, -98, -39, -56, 98, 51, -26, -71, -79, 81, 27, -102, -74, 76, -125, -81, -89, -47, -114, 78, -88, -7, 30, -36, -110, -58, -60, 31, -114, -88, 49, -10, -34, 98, 29, -126, -91, 123, 88, 60, -98, 31, 113, -119, 34, 38, -124, -11, -85, 30, -75, 98, -19, 35, -9, 107, 63, -124, -97, -66, 20, 126, 80, 38, -38, -4, -12, 34, -117, 105, 14, -123, 27, -105, -93, -76, 54, 11, 52, -26, 41, -128, -41, 15};
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
    msg.setTimeStamp(0.66350505913);
    msg.setSource(21642U);
    msg.setSourceEntity(184U);
    msg.setDestination(61910U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 11905U;
    msg.plan_size = 454930942U;
    msg.change_time = 0.890494036278;
    msg.change_sid = 13012U;
    msg.change_sname.assign("LFOPOAYXSCFHHAAYRPSYOLPLBNTXSNMITBDHUAGEEAYSEUQQKADNRMCAGPWEEKVHOUGZJMIJVUQONXHOUKQQHJXVAWCIXKSVDVZFLOYVROCIKSBBZOLNTHXPPOEEWXUXZLTYRLHKBWZIMJQUYLXMIKKNFSFUSBRCIGVFCTWYDGHCVJIMRZRRTWGSRCXNNDUDBBWGPZDLIQGZBPTWKPJYDUTACKECLFGVSZ");
    const char tmp_msg_0[] = {47, -55, 26, 93, -128, -48, 118, -81, 110, 33, 61, -62, 88, -6, 101, -81, -91, 79, -115, 63, -88, -114, -98, -68, 36, -5, 64, -89, -58, -38, 28, 48, -72, -60, -83, 47, -82, 22, -89, -80, 53, -31, 15, 61, 15, 73, -94, 81, 55, 66, -108, -74, 54, 4, 89, 118, 44, 80, 13, 52, 17, -108, 113, 41, -9, -87};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PTOXHKALNJFGDDUUSFSIOXOBRAERJUHCWLMLMUYLNRHCFDAYDZIZWDCSVBRGRKDFWCLVCJJOPZEHIWTBQGR");
    tmp_msg_1.plan_size = 21772U;
    tmp_msg_1.change_time = 0.169311217472;
    tmp_msg_1.change_sid = 36691U;
    tmp_msg_1.change_sname.assign("NTIOBXZEDJBEBGOXANZXGKWTSSCNUYYFAYZRVEVNSKHLNUCZITTFOQSHGHPLADZNMAUEAYHERDFAILBVWCMJIMQOBXRRGMGWDTVQWQMTDCSSJENYVGJJYRJHUWFKRLGODJRLLXUQISRPLAFJDYISRHMKDUICKZHLWNRZMYTCNZXWPKEBOIXKWHVQXPFLSFXZQAMPPBQKOPZMUQUFFWDJVGBCAEXVPYIBCNGJPFHTEVACKKDBHIEQL");
    const char tmp_tmp_msg_1_0[] = {-16, 24, 56, -67, 97, 31, -4, -2, 26, 120, 95, -66, 50, -110, 29, -41, 121, 60, -49, -2, 122, -126, -53, -69, -17, 41, 31, -18, -23, 54, 105, 30, -68, 67, 18, 58, 106, -97, -105, 117, 68, 62, 57, 63, -63, -55, -12, 40, -47, 0, -70, -47, -88, 23, 76, 57, 121, -7, 111, -55, -49, 66, -51, 95, 87, -13, -49, 52, 4, 62, -34, -5, 39, -73, 83, 32, -27, 110, -107, 89, 90, 90, -71, -53, -59, -85, 24, -10, -61, -34, 126, -88, 118, -116, 37, 117, -19, 61, -125, 73, -51, -75, -18, -62, 117, 110, 31, 91, -26, -80, -120, -105, 11, 111, -99, -114, 119, 126, 85, -2, -21, -122, -46, 70, 31, -63, 2, 103, -107, 28, -118, 74, -18, -13, -128, 47, -64, 81, 45, 22, 71, 71, 64, -34, 35, 30, 15, -89, 95, -92, -52, -77, -89, -1, 11, -82, 92, -34, 57, -22, -102, 2, -65, -42, 79, -20, 67, -112, -101, -41, 120, -92, -97, -31, 68, -128, 81, 105, -111, -62, -22, -17, -75, -55, -33, 41, 82, -64, 62, -100, 117, 89, -29, -116, 107, 45, -99, -86, 115, 113, -116, -88, -50, 32, -49, -5, 29, -47, 92, -32, 11, 2, -41, -74, 87, -12, 58, 51, -50, 56, 103, 24, -11, 111};
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
    msg.setTimeStamp(0.332072585348);
    msg.setSource(8514U);
    msg.setSourceEntity(187U);
    msg.setDestination(58748U);
    msg.setDestinationEntity(112U);
    msg.plan_count = 409U;
    msg.plan_size = 130614788U;
    msg.change_time = 0.574753786995;
    msg.change_sid = 15910U;
    msg.change_sname.assign("TGOPNSSXSZVVMOKNDBBWLUTPKOAXT");
    const char tmp_msg_0[] = {-50, -42, 121, 120, 5, 112, -88, -52, -50, 81, 48, -71, -121, 109, -28, -95, -35, 35, -58, 81, 39, -41, 81, -108, 11, -94, 43, -34, 98, 40, -91, -88, -72, 38, 51, 40, -116, -53, -89, -125, 15, -93, 68, -93, 4, -53, 67, -2, 49, -43, -96, 32, 24, -49, -19, -115, -75, -82, -14, -8, 7, 106, 49, 13, 81, -65, -17, -39, 61, 93, -58, 61, -58, -6, 49, -125, -60, 122, 110, -77, 31, -58, -80, 9, 56, 34, 97, -42, -124, 80, -15, 6, 111, 49, -32, -25, 64, -64, 34, 96, 12, 42, -49, -58, 58, 96, 112, 21, 11, -76, 76, 23, -34, 67, 32, -46, 56, -107, -37, 23, -92, 108, 1, -8, -18, -93, -114, -23, -51, -70, -96, 116, -80, 42, 108, -126, -63, 112, 122, 34, -53, 61, -98, -126, 54, -114, -29, -90, -71, 99, 106, -102, 38, 10, 119, -52, -96, 15, -128, 1, -67, 39, 101, 36, -114, 116, -125};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("ICHKKZMRUAQ");
    tmp_msg_1.plan_size = 27379U;
    tmp_msg_1.change_time = 0.0228067014673;
    tmp_msg_1.change_sid = 51389U;
    tmp_msg_1.change_sname.assign("PZJULDWMOKHXLRBASXODIEOJJDJFBRIQPBNTLGICUNNONSMDGAAMYWUQFDDWPEAMMZOSQTQKEINCWDWBUYJFKSKOHNLGNPCFRFIAVBZJKKWSLGVYPFZUZCDASVSATCGBMUUZTTDO");
    const char tmp_tmp_msg_1_0[] = {-8, -61, 78, 84, -23, 16, 74, -104, -73, -18, -116, 93, -48, 46, -107, 36, 0, 95, 98, 5, -120, 12, 17, -10, -70, -58, 0, 15, 42, -28, -7, -36, -20, -60, 106, 67, -115, -18, 56, -48, 104, 43, -4, 103, -4, -111, -40, -110, -11, 68, -93, -39, -40, -101, -19, 73, 99, 101, -128, -88, -79, -60, -43, -10, -121, 98, -71, 100, 115, -14, 20, 90, -3, 16, 120, -15, 21, -27, 87, 107, 123, -20, 54, -35, -84, -60, -73, 118, -77, -31, -5, -85, -103, -53, 41, -96, -36, 40, 29};
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
    msg.setTimeStamp(0.25066803433);
    msg.setSource(3910U);
    msg.setSourceEntity(61U);
    msg.setDestination(45653U);
    msg.setDestinationEntity(10U);
    msg.plan_id.assign("DYMBVQVSZFUMIGFCJRHXHYABFIOP");
    msg.plan_size = 40763U;
    msg.change_time = 0.576991114882;
    msg.change_sid = 54488U;
    msg.change_sname.assign("KYGMCOUTKPNVBHRCFHHMENZGCNEYKIIEOMPGZPMIFOXNSVTKPZURCAWNCQDUBFAJSQLXYWAHGHQUUEPYQFPSTPZTEFJJLJXAXMDQKRKZFILHNLOCVZODLROVCZQVXMUSADIITZNMHRASAXWXSWDVQJUQWWBOIELBLMSBOVXRRWAODVDKCFDKXTPWVJBRXIENKGNYHNQLKYROSJWSPFYUGTWYDFHBEIBEGCLDCMLB");
    const char tmp_msg_0[] = {88, -96, 100, -123, 47, -11, 116, 115, 103, 59, -21, -19, -49, 74, -128, -31, -55, 68, 79, 36, 70, 80, 75, 121, -126, 89, -75, -111, -124, 12, 112, -126, -112, 11, -47, 14, 120, -43, -34, -10, 70, 14, -5, -26, 96, 78, -3, 101, -61, -33, -122, 121, 26, 43, 120, 47, 26, -77, 51, -95, 17, -75, 81, 52, 64, -26, -127, -5, -39, 100, 84, 91, 17, -54, -3, -28, -69, -104, -64, -99, -107, 95, -83, -124, 35, 41, -57, -91, 53, -84, 69, 83, 113, -53, -46, -119, 49, 116, 73, 98, 24, -102, -26, -111, -3, -61, 24, 39, 81, 12, -53, -117, -87, 76, -40, 65, -117, 4, -63, 111, -68, 124, -100, -71, 30, -13, -62, -10, -74, 50, -98, -96, -64, 90, -41, -49, 75, -25, 107, -71, -26, 35, -101, 64, -120, 66, -49, -103, -38, -126, 104, -10, 55, -65, 25, 28, 109, -123, -98, -96, -86, -44, 112, -38, -82, 29, 106, 103, -45, -113, 51, 66, 59, 103, -47, 78, -69, 113, -105, 35, -79, -79, -87, 121, 73, -110, 74, 87, 12, 11, 98, -125, -26, -90, -96, -121, 119, 74, -81, -117, 76, -7, 65, 117, -18, -72, -33, 77, 70, 5, 44, 51, -111, -86, -4, 98, -13, -55, 43, -22, -75, 93, -94, 20, 87, -104, -121, 59, -71, -107, -63, 118, 69, -37, -32, -91, -90, -95, 116, 58, -91, 9, -122, -7, -3, -51, -13, -125, 60, -21, -28, 8};
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
    msg.setTimeStamp(0.543167498214);
    msg.setSource(32891U);
    msg.setSourceEntity(155U);
    msg.setDestination(7700U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("EZMEZBISCBUASVQZEDNMMMLQBORXNUYOPTCBVKWZXIMBWJIJAXKWYYYFLYVZJDPVTUPAVGGKSEIKFPEFHJSNTTLRRMGGUQOCDXEIBPRDOCHLQQDTDTXICMWNFWZXKHQNHBDRHUBXHDUQWYTCUNAAOOAHQSWEKDVVANXHGRUPMRIHTQGJRPMTJQECKZZSGIYBKOEPGYXAUYSVVFLNASWNFVFROTELMDORJUGIKBCSZLGWKC");
    msg.plan_size = 7303U;
    msg.change_time = 0.187657260544;
    msg.change_sid = 12163U;
    msg.change_sname.assign("ALYJPEHPWRPSXKAYKBMIQGGKNDGPCVWLBRWFYLZFFASEXORNHGYJEMHDVCHILAYKNLXGDOUMNUMJKEIMEQFYTQSXAGDTNIFMUTSRZSZJSXAPOUVUJCVMGZVHERXCNQCTQPKOFXRLVNBWHXIDNUZRZATJHKMQIGLAFJSKBATBYHFPBNPDYTSZLDPDMASPZU");
    const char tmp_msg_0[] = {-119, -89, -35, 105, -20, -100, -67, 69, -71, 93, -47, -106, -102, 100, -106, -18, -42, -77, 90, -25, 109, -128, -31, -25, 80, 51, -10, -97, 65, -110, -107, -83, -71, -118, 38, 94, 114, 67, 48, -118, 80, 90, -48, -15, -50, -118, 101, 62, -95, -21, 88, 92, 23, -61, 111, -101, 75, -15, -4, -96, -58, -1, -20, 6, 124, 40, 53, -124, 98, -10, 90, -53, 83, -118, -40, -48, 72, 79, -14, -92, -21, 109, 74, -49, -51, 112, 76, -45, 38, 92, -24, -94, 28, -15, -11, 95, -56, 26, 114, 57, -32, 72, 93, 86, 25, -2, 51, 107, -11, -14, -73, -28, 117, 11, 79, -122, -125, -40, -34, -15, 104, -53, -24, 25, 61, 93, -86, 39, 3, 41, -98, -122, -126, 46, 8, -76, -60, -17, 78, 6, -27, 45, -125, -111, -31, -56, -76, 43, 104, -47, 3, -20, 72, 5, -75, 102, 52, 48};
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
    msg.setTimeStamp(0.841615275289);
    msg.setSource(59294U);
    msg.setSourceEntity(206U);
    msg.setDestination(57896U);
    msg.setDestinationEntity(212U);
    msg.plan_id.assign("PCFRPWNZVEKCQQVHYTMFICTHDEQXFSBEKNZUFLSZPAKILOAEXBYSMJJUIPVVOIDEIZFKOJEDLBMESTLOKMLRAPXJNDTYWTXQTRLZGOLWUIURHNMFAVQGGXLHHRPP");
    msg.plan_size = 48395U;
    msg.change_time = 0.300663513531;
    msg.change_sid = 53427U;
    msg.change_sname.assign("YIJTJLKDNZFRNNGIXOKYYMRSPVETUAGZHZBKXJDWIARLZNLYMIDKSQHMRZMCABIDFDYTWFSMBIPSWTFVHDGPOKWLAXUGYDHHAMXUGUESWBJUOFVFTZBPQJTUCDGLSPNTEQSRUZALGMHJCKVQDIFCIOSOAKSKKUOCRQPQPVMELVFPXCCBBJMQHROVQIKVGEEEXONAWWSCWNLXMTDIRYYZBNFNZEHJXHJRANCJGEYTWEVOLOFQ");
    const char tmp_msg_0[] = {-15, 1, -23, 29, -115, 63, 42, -101, 51, -41, 111, -79, 107, -91, 47, -8, 64, -124, 84, 54, -81, -29, 26, -18, -117, 77, -62, -94, -8, -66, -66, 101, -127, -41, -127, -28, 25, 7, 58, -128, -90, 83, 93, 11, 103, 18, -103, -21, 40, 65, 89};
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
    msg.setTimeStamp(0.359257191977);
    msg.setSource(29644U);
    msg.setSourceEntity(19U);
    msg.setDestination(57646U);
    msg.setDestinationEntity(180U);
    msg.type = 67U;
    msg.op = 48U;
    msg.request_id = 11524U;
    msg.plan_id.assign("DQRPLYZTZXRJTAQMEAPEBNCKXOUKYUGLZSWUKOKCKCDBVZRHVCGLWMDVTNXTRCPMQGOQHEGHIQYXJJUJIGSOPTNBMGNNNGRKTBPNFEGWYWYMVFIYQXXJAFSHWDQPOPZHJLLEIYRDJCUTTOZQSDAXHPGRMZTBFAUIOWSKBFIIYMCJVIWHVIYWXXHZFEB");
    msg.flags = 47006U;
    IMC::QueryEntityActivationState tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XNGEIFEFIALSEGLFTRHHVYSPMNDGFTPLALHXGCDRZNYCSOBJYJHUDMN");

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
    msg.setTimeStamp(0.957394693259);
    msg.setSource(53817U);
    msg.setSourceEntity(129U);
    msg.setDestination(22052U);
    msg.setDestinationEntity(157U);
    msg.type = 195U;
    msg.op = 180U;
    msg.request_id = 20546U;
    msg.plan_id.assign("NNDZTHSOTQEMMWIUUHAGPJCSKUITGJSFRCVEDOANHPQWFQRXDYDTJTOXDQHGYZASEMJNUTMWPRUXRWXNAFRJZVEVVTSKPFQSCQBJHYUBTVCYRCQBPALEVSOKUEYGCMGYXVHFCWKLUZVCJOBSIYHGHQJLXEXVUZRBYDPQKGIAPSZOBIGDXEUOPWAYGDFBIMFALKFLKWABWRONLBCREQWNGNHTMMLIPKZFOLXLRIZMYXNIPLKBKTVNJFCHJZ");
    msg.flags = 26930U;
    IMC::EntityActivationState tmp_msg_0;
    tmp_msg_0.state = 122U;
    tmp_msg_0.error.assign("LANGBZTSNCCGOYGGCDTV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QUYCNSLAWCGXRGOMAWIOSHOGZVHTKWFWSXOFDJSEKTJUDYWHNXPPVJYXCBMNPLPOXABUUYEPAWBTBURKFRFHCXUTMQHFULZXJVEUJBVTRSXYEQRAZFESPXBHQHDEZCTKZDYNNZQIAJZDMTRACCEFQFMQLOTTKLTZGYKZUNSOIIJPPYJQOHAYVNQPWVDENCIMAEWQRWFLBKCUDIDASLBJHYIRVVGLMSXIMIVGGKLMSCONOVFPLDNRGG");

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
    msg.setTimeStamp(0.0670206497872);
    msg.setSource(3694U);
    msg.setSourceEntity(220U);
    msg.setDestination(37079U);
    msg.setDestinationEntity(236U);
    msg.type = 106U;
    msg.op = 244U;
    msg.request_id = 63122U;
    msg.plan_id.assign("PNEULCBYCTPBSVEUHTLEBBDAPEQFFAYRMMZBCRLVDEBOLIKXIMNIPSJJCGY");
    msg.flags = 21235U;
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("CNBNMIGVBLOICSCJNZQHFLBTEMXGXLXXPKZ");
    IMC::Announce tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_name.assign("BRIULPWHWGRJKJQEGOZHJMMADFJSVNEXQCBLVRLUCAAUEJPNETQKWETDGNHXAFYWCVBDFOEWKVZBNYIPDTLQKTDRWZRLUUIUBSVYCYDJQRFWISXMNLKVS");
    tmp_tmp_msg_0_0.sys_type = 238U;
    tmp_tmp_msg_0_0.owner = 54752U;
    tmp_tmp_msg_0_0.lat = 0.342239613112;
    tmp_tmp_msg_0_0.lon = 0.746186376251;
    tmp_tmp_msg_0_0.height = 0.0428793329081;
    tmp_tmp_msg_0_0.services.assign("MIWDVZPJHMAEHMEMAFERCNJIMXVATOTKMUPQLFCSBEZIPSIWYBFFDQXHK");
    tmp_msg_0.links.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HKKARJETIBUMEFLHPOSFXQWLUZEGWPWDSXTBXCZKDWNJTMTVBVOACTCAFXGLPOHIZQCBVZFJPWBMDSCJPVHIVEMTOMGUNSRVSHZJXPQTRNXXNREYXEFLWDEOHJMAIIIYKYFRYZHNCYUSMAEDZVANNDOLGYKLRGDECITKJKIYFRKABGGXRCPYUBECSRFTQXQNNVWY");

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
    msg.setTimeStamp(0.808987400717);
    msg.setSource(23785U);
    msg.setSourceEntity(115U);
    msg.setDestination(20601U);
    msg.setDestinationEntity(80U);
    msg.state = 40U;
    msg.plan_id.assign("ZUSSNGBDWTTRUTVUPORFLVLKMVPHSBZXQENMAHNHZCFSOMWPUIIGJAVTWNQOLQTBZAJYONGPVPBDQNISPYKZECXXQLUNMCJK");
    msg.plan_eta = -1030954149;
    msg.plan_progress = 0.376188273005;
    msg.man_id.assign("ZVQZZEYIGOULPETYGHFSZYJYOBQXYSZCIVBXFFMUVEXWFDEONMZPGIYLPXUCVBDLKTXECWHMWMQTQSMTCKCGTAMOAATSBNMDRVEVSRVPKDWFANCDMRLVUHGSGNWMNDTFXRPZHGKRSFTJHLAWONBQWXGETKCSIFCIZACJLHRHIGHUEUBUWTIHSQQBJARDIDQRJUECJWXUAOYLBKKLZPRBAPRNXLKSXDZJEFK");
    msg.man_type = 4402U;
    msg.man_eta = 699326247;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.578823889819);
    msg.setSource(53777U);
    msg.setSourceEntity(242U);
    msg.setDestination(59244U);
    msg.setDestinationEntity(4U);
    msg.state = 232U;
    msg.plan_id.assign("TZXGVOJHFLYPUXWYQMEAILQBMVUFKXMYWPFILICPMDPMRVGCNTSXLTTGPFZTDYEVDLJOSDWCTZVLJAORSBIJTKOIDUNOSHNBUGHSHMJZQNZI");
    msg.plan_eta = 999823021;
    msg.plan_progress = 0.51104362182;
    msg.man_id.assign("KLTOEYMKSSDHRKMNHJCWPUZLOIAWOZZVXITILFABITJQKNCWCYWWKVHDXTANDEQEKTQOPGUSYOMXUPQUQUPGYDJCLSTRWAJNEHVRDLXRLEBQBAOMEXTHOULSNHPKXFCGDGBXPRBYPMSTPYWNLIGGWZFPZZJESVAHCDFUFQUOBVFTBUWMSRJPVMSJYFEHIEFJCNXLGGQLOGZTAIGVIZDBZADCVQSVK");
    msg.man_type = 8685U;
    msg.man_eta = 239237733;
    msg.last_outcome = 2U;

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
    msg.setTimeStamp(0.147649716053);
    msg.setSource(54315U);
    msg.setSourceEntity(67U);
    msg.setDestination(30846U);
    msg.setDestinationEntity(86U);
    msg.state = 60U;
    msg.plan_id.assign("NEXYZBGZDPVQTJDHLNNUINDTCBFBGIPQGSPPNVZDMABTUGQQFSBFLEUYCEVIAOJDEJT");
    msg.plan_eta = -310746282;
    msg.plan_progress = 0.461860317694;
    msg.man_id.assign("XSGVUJYAEWUJSUFXKSOBFQBLHSYMFORSIJUEVNTSKHHCRGDGLDKUYWTDRLVEGBIPGFXZZPKAYIPKYKGDXGJMCZZTGMKNBTZCVNNIEHMQCPLISHQXWHLUXYETLEQFMUVMDDIKFDQAQXTUMASOHVILSNAUZOFLVPOCPLAFYGRWRNEYBVCHBRPTWGZEVNDAJZMPCIKXWUHRBVEWAWSJTQJDFDRYOOZHJROOXMQAKWJTQ");
    msg.man_type = 60630U;
    msg.man_eta = -643983340;
    msg.last_outcome = 105U;

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
    msg.setTimeStamp(0.814964205768);
    msg.setSource(54358U);
    msg.setSourceEntity(27U);
    msg.setDestination(22832U);
    msg.setDestinationEntity(206U);
    msg.name.assign("TWSQHRXUIMQVEGZFRWAYSRFJVMJZEIHLTCXMLIBNVVUQEBQZJETLGVGFALXJPRUODHBEHQAKSTUPDZXCLATJNLKODKOOBLWHPBTRXBDWVRWPRKKPAGXIZMB");
    msg.value.assign("YWKWJZBUOJQKDRNDSUTREUVAZZSKVKRXNZTIHIAAMOLEWBZTBDJOHTFPXIWILQJIPTXEFZQSAMVXDECUPXHGHRNVBMLNJPYJEGKQWBZMDPPCOJIGRUPM");
    msg.type = 4U;
    msg.access = 85U;

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
    msg.setTimeStamp(0.394664007631);
    msg.setSource(55677U);
    msg.setSourceEntity(180U);
    msg.setDestination(32501U);
    msg.setDestinationEntity(138U);
    msg.name.assign("QVCETSLQGTVNDLUEAWJDJQTFIZNMKMUPEGPCHERWIGNBMNDKZJBLCCLYTHAVXUARBLQHWUOEAGTABWFIQILWYFXZAEVFSGCDLBWPWYSBSTTGPOUKOKRWLZQATCUBJQZALDYVRJHRTPPAXSLZXFRXFHCIJRYRCOPOXZXFKOENMVEFYHDVHSMPIKMZVFFYIUNNHVM");
    msg.value.assign("XSPOBSOEJWGFYCZQHFNXMPWVLWXPGANKFIUDLYAMXMZLWAXDQSMKBRXYJLTWBPMJUTJQRVALH");
    msg.type = 247U;
    msg.access = 6U;

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
    msg.setTimeStamp(0.732543583997);
    msg.setSource(50637U);
    msg.setSourceEntity(93U);
    msg.setDestination(20657U);
    msg.setDestinationEntity(67U);
    msg.name.assign("VNTUXZKIGCJSCTNKUYHOJAKIRPZREOLTEQXUXDCYDFVMBMHVZLRLPFXKSYXICOOULSWZSCQLQDPMWVVJNUJGWUAQSFLHEJQKXUHGDJAMERLHUBOJBYPHDBYHRAXRKAYRVVFHPGUEWVZDQGSDSDLPQOEWNEOMQZGBYSKFFOWNMVMTESTCCYLKIA");
    msg.value.assign("XFZHBPRWSAEGRZOWMZRFHGKWDJGKOMDWYDZUUZXOSCTILKYLPUQJSQYTHVC");
    msg.type = 199U;
    msg.access = 63U;

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
    msg.setTimeStamp(0.990790402923);
    msg.setSource(15232U);
    msg.setSourceEntity(122U);
    msg.setDestination(29690U);
    msg.setDestinationEntity(236U);
    msg.cmd = 244U;
    msg.op = 49U;
    msg.plan_id.assign("WCUQIWVQZQJMDOLYKACSXMWNHDAKQSPTNWITQRQWDTYLOYFUARORPYRRYSMLXMLOOLMJCGD");
    msg.params.assign("IGNODFKIQUWAPYLVPFCMMYWPDFWNLIJSJABJTEZUWHQEPXJECWZIXAHGDTWSLCKOTZRGVMMUDTPFYZOFQDZHRGEEKVXHPCMALQAOI");

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
    msg.setTimeStamp(0.943503432528);
    msg.setSource(27065U);
    msg.setSourceEntity(22U);
    msg.setDestination(61278U);
    msg.setDestinationEntity(118U);
    msg.cmd = 73U;
    msg.op = 162U;
    msg.plan_id.assign("GWQSJOVJFBLQTJBFZCIHDPMKAJFPHWQPBNZMWPKRJOKRZUTLUHAZHZBYVWRNEUYHMTARUEEIIFTNVGWOQYHFWKCKFUBEGDVSGYNERMCSVQDCOFGTPLGRWGGCYIHLTLNMFCAARDRMKCYYTDKXQSIDPXVLDEIIXBMEUKQSUCBDCZJZXERPWNOGASAWPXDPAYZLLMTOZTOHABSOVJEJCXMFFJUHRDNSYIXSPQXIKULTWVXXOHVBNOEZSLVBNAM");
    msg.params.assign("UTDIUASVLWKNYGDSTZQJIKWHMRTYHTZAHYROUQPPJXFIQMBFKCHEYQVKPRLKFHGKTQHACPBSQBXZICWPWFNEWNBEOVNCKIJJJFGYTDCAUBIIKYOVTSZASNALYYHYACUXVUMLLSUMXTHFEOKMXFLXLKRISB");

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
    msg.setTimeStamp(0.067098349518);
    msg.setSource(57873U);
    msg.setSourceEntity(100U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(227U);
    msg.cmd = 176U;
    msg.op = 9U;
    msg.plan_id.assign("OTHNIZKHEJCCGKXHTQOXAMGYUWCOVBBOZVYHPFHQIWBQEJLVIYGXZQGHBNGLAAWJPINTAWDAMTLPINLNTKCWZRTL");
    msg.params.assign("AJDEYGLCZAIUNMHHVCJNLFXIRUBVMQRROCKRAVXPVWENPIPWBOFFSHWECQEPUOJYKSPWAOOQKPMSIKHIQLCWXJGJVXUTHVJWBVUOUNUGVODRFIZRMGZGSQJZTDQNFYGDWTFPCBMGSMBSXLXZXIWCXYDGYHKAUBMUBKNDTLTKFROJTYCLLPNSSEBGISZDZFMAUHDKXROEQQGAMSZIYVNQKPIAEMRJDZRFTAWBVPTHYNHTCOJHDFXLLYEKQABZN");

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
    msg.setTimeStamp(0.551351984229);
    msg.setSource(341U);
    msg.setSourceEntity(66U);
    msg.setDestination(31272U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("XZVMPQJOLPGNEGQOATRWMLPZIZEKHFXFXKPXRFBLTSVJAWWIZMQAGTHNENCOUBWYKJPIEPUAWYXRZMJMLWLDMZGZJISNAPHFUBLPKIFCUOETYSMHGCZESNVFTYXHAKFTIDYNIVDYSKAEUYODNVCRYGJXNFMBRHBUZAKGUVDZOFUGDMDKJCKSPJDKQOTROUNYELXPQTUGRBCCLBXSV");
    msg.op = 91U;
    msg.lat = 0.771653183429;
    msg.lon = 0.82580215901;
    msg.height = 0.583357279129;
    msg.x = 0.959990196706;
    msg.y = 0.623670538834;
    msg.z = 0.00203021564141;
    msg.phi = 0.634725225746;
    msg.theta = 0.405006043707;
    msg.psi = 0.125556774438;
    msg.vx = 0.306667370733;
    msg.vy = 0.0333509375682;
    msg.vz = 0.578596722584;
    msg.p = 0.826118165043;
    msg.q = 0.0199951291424;
    msg.r = 0.962400856158;
    msg.svx = 0.636090802788;
    msg.svy = 0.10190995017;
    msg.svz = 0.789474646786;

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
    msg.setTimeStamp(0.730827095904);
    msg.setSource(43700U);
    msg.setSourceEntity(67U);
    msg.setDestination(10006U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("XFILDIFUKHYYXELAFUBBERLUOVWXPNLKKWNCHAVJNRJECBUZNNVYCUQLCDXXHOWKFDVFZDCHCZXILRKDTEGPJPSGOPRGGILXQSTOTDQIYIVTRRDMEPWOGDFNTQJSHUGSLEIEMLSUVZQASYHMBIMVRQAPMWZYAJAMBG");
    msg.op = 156U;
    msg.lat = 0.358534976942;
    msg.lon = 0.369468885036;
    msg.height = 0.181504946171;
    msg.x = 0.00421717181138;
    msg.y = 0.860097147674;
    msg.z = 0.184394338367;
    msg.phi = 0.599229972663;
    msg.theta = 0.491720182017;
    msg.psi = 0.136515886109;
    msg.vx = 0.397387650047;
    msg.vy = 0.528082642331;
    msg.vz = 0.562267013642;
    msg.p = 0.135835275713;
    msg.q = 0.925941671574;
    msg.r = 0.883527146855;
    msg.svx = 0.649238415824;
    msg.svy = 0.381958296226;
    msg.svz = 0.389225423934;

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
    msg.setTimeStamp(0.419695283966);
    msg.setSource(30738U);
    msg.setSourceEntity(214U);
    msg.setDestination(55482U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("EIXQTWVIBFGUPIIBGBWQRYTEEAMPCDXUOLNYECRPOYCXKZLZJDJYUUNZNDQXUFSNZNTIMESTJTUMVKQWFIXAAXYRUFKAHAHYC");
    msg.op = 18U;
    msg.lat = 0.197023859027;
    msg.lon = 0.54411487583;
    msg.height = 0.654298335065;
    msg.x = 0.498832417615;
    msg.y = 0.80290354106;
    msg.z = 0.987319863053;
    msg.phi = 0.685000351803;
    msg.theta = 0.793962334875;
    msg.psi = 0.70037711726;
    msg.vx = 0.013441845562;
    msg.vy = 0.317614135706;
    msg.vz = 0.641616796881;
    msg.p = 0.515470106719;
    msg.q = 0.425093791321;
    msg.r = 0.7082519143;
    msg.svx = 0.209690937055;
    msg.svy = 0.739261762209;
    msg.svz = 0.581598474373;

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
    msg.setTimeStamp(0.468564422424);
    msg.setSource(15344U);
    msg.setSourceEntity(113U);
    msg.setDestination(34195U);
    msg.setDestinationEntity(45U);
    msg.plan_id.assign("DJYUDYDFTMHNODPTCMFULSQHXNMVDHIGYFRXROAZKGVBWAJYNUDSUMRSCUXHMHGNCWTOQEEN");
    msg.type = 165U;
    msg.properties = 64U;
    msg.durations.assign("BGWQDMSAOMTLXJOUYSACQERQUVLLISESGESVUKQFOGEBHURASCEERHOSIDFYRYWTXMXDODKKEIAYVPAVCRCFEHCSEBYZXCLUPAVXWBVILENVFIPAJZNSYDWJJYTTVMNIFZAKLZZIPHPUQPDXWGCTW");
    msg.distances.assign("RQBZAXURAKEAAUFJDJYGNLXRSQUCOBARNMORPMVNTEFSXDKSTPUMLMBOWVICEXZCWKFHDZXOZICGBSSFZ");
    msg.actions.assign("PULPYTZIIHRVLVESXOSMNQANKEVMPQOBPUGYNYDCHCMBAKAIJOCXGKAKJNJUHZWXYGVMTPHQOTRCZMRSDKVUXZHCKGSHJOEGNROTJSAGHLSEMNQTQIHVMWEBYBGZUADVRTVDILYZXJLKCWDXUWRJLKSQBBSKWMULPUJENEZZGUDQLFXVSGZFIMYTHDXFLEIRFR");
    msg.fuel.assign("NQKPBNSEXTFKRAHWBHHHFYEKPTSXKGALQUCBTLJVHLDULBIMZUNJJXNYGNUAGGDHGVOKJOFTBBCQDVETFEFFEOWISCDUMYFPAEMHYJZIIQC");

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
    msg.setTimeStamp(0.133713637205);
    msg.setSource(39777U);
    msg.setSourceEntity(184U);
    msg.setDestination(35796U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("BGUGEXRBLKPVYPWLHJOWFPYRQZB");
    msg.type = 170U;
    msg.properties = 240U;
    msg.durations.assign("ALWXCQUCOSUIASSLYZNDCOEGWUBEXPAZVKRHKCYMZEFTDXSWRUIZPNIYZLVOXVHCFKNPHXVBXCBJHDXRSMDVPPNTCRFNBEZOURGAUEJGXQHISQMBJTAOLSAGRFSWNVTWKXNRQWHJDYYMGTMIPHFWMHFPTSTFNEYNUDU");
    msg.distances.assign("XGTIGTYXOUZBHAZDAXPABMWOZMR");
    msg.actions.assign("JJIDZESRGCSGNGYWSFCHFSWLPODJQKWQRJCIGUKAAVOYSCREEEHBDODTCJQNYLCFKZJOLXJQWHMZCMPFMHKIKYWTQZDEURANZSILYBXIWKNQBPPLFRUVRUMOTIVGNMUHAEUWZOBMTRUIZVAEPHXMELKFQJTOYOWVHTNFWYYPDGXURSQMHNINQ");
    msg.fuel.assign("JCRZRKZGMHUUPTWQJUATJLPMVRCKGMYYHUCHWKFFADDJVFBVIHIYKILCJLGHNSWZXMLRZSOUKOWSITXQPOEUWJZCLXJESLVGQEGOTXVMWVDIRSVWEZXGTCBXINDRAADMTEDKFGSJOKAUXNPOGPIPBOMDYOHDPVMKQJZFOCNHJYLECYNEEMIEFPNAYLCVLNWBAZUTSSCBIGWWGQTTRBDZFPPNQFUXBZQLQRO");

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
    msg.setTimeStamp(0.5112361027);
    msg.setSource(46890U);
    msg.setSourceEntity(133U);
    msg.setDestination(12474U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("DGXYHVHQNGQGUMHDZSMIOVLSMLKBKZBPAPNKAZWJTILBUQISDA");
    msg.type = 232U;
    msg.properties = 165U;
    msg.durations.assign("HSXMHIOSFRLCVZVIDGQTZONLSBMMACGDYHWRDFVHNUTTPYIGRXOVPBLJKYJQSFHKJWUBTHEYLOSTFIZZCVGSRHKYOOYRQHQJEEWGPIOFIZZWLDW");
    msg.distances.assign("XQOKSMHJHBDJYPJLVJPGNCTJWBPUMTLDFLVSCWTXIHGKLGNZQGJFYHWRDGQXNIWBSQRCXVOSZXEASPIUYEDKRKRZKSCNDBYYIIQGBPTYOEAQSN");
    msg.actions.assign("OHMPWAARRGYSAGNUUECVXSIJTVDBBJPJGDOYCWUOIFBHFDBGMZSASZTKNXVTPDNYQLKKMDGMOIXNYXFQMLXWQWBSGZELTKYOSRDNQEACRTECYPIKTOHFZPAZULICBGMSBDWBJFZHPZPHPWVNXTACHKOFLHRDIIPQUJVPCGWUUHMKTFZAAO");
    msg.fuel.assign("WWBNVFZLKWXBFCBSKSAAWZGFYAWPGQCBLVIHIWJKDDLMMHNQAOIOZVRXTPVJBMITSNKNQIBNJAUWNEFTOVZQJQPEZKXPMDFLOPSLDIQNWEORECGDWYLFYHRTETCSJYWJMUNTAXDERNXEVCRYFGVGLTZQKBYFNHSVSMGTCGCHUSRUDHJFUXQIMOYGGEKDLMDOPKMYZZLFYYJBRESACHKTLSOPBPOCTOQXHMUIBURIRH");

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
    msg.setTimeStamp(0.81520190296);
    msg.setSource(6124U);
    msg.setSourceEntity(246U);
    msg.setDestination(62790U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.382758067621;
    msg.lon = 0.134259303898;
    msg.depth = 0.639078362468;
    msg.roll = 0.145080660053;
    msg.pitch = 0.794318232194;
    msg.yaw = 0.41276297617;
    msg.rcp_time = 0.126832858683;
    msg.sid.assign("XAHLDOZXVFXYSR");
    msg.s_type = 86U;

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
    msg.setTimeStamp(0.116998746957);
    msg.setSource(28609U);
    msg.setSourceEntity(223U);
    msg.setDestination(31831U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.0905804857119;
    msg.lon = 0.917518992575;
    msg.depth = 0.812475056753;
    msg.roll = 0.383899810087;
    msg.pitch = 0.738749799407;
    msg.yaw = 0.563525241506;
    msg.rcp_time = 0.949917263279;
    msg.sid.assign("BDOFZVCIKYJJTNGAJBYHMZBYFFPRSBUEHMNUZGZKRALBVCENPIXPLMGVSUHZCXVJBGTWWWMDNOLDWSKMBHFOYXSAJYSPQK");
    msg.s_type = 190U;

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
    msg.setTimeStamp(0.320334858597);
    msg.setSource(45367U);
    msg.setSourceEntity(117U);
    msg.setDestination(60477U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.634586364583;
    msg.lon = 0.167150459849;
    msg.depth = 0.492049703202;
    msg.roll = 0.225320457539;
    msg.pitch = 0.536553962053;
    msg.yaw = 0.237713377951;
    msg.rcp_time = 0.986446384686;
    msg.sid.assign("RTVLXPKLNYAWVGBSRALMGNSRYAQXNAJMZFJIBIHYESO");
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
    msg.setTimeStamp(0.601867347275);
    msg.setSource(28196U);
    msg.setSourceEntity(86U);
    msg.setDestination(49156U);
    msg.setDestinationEntity(51U);
    msg.id.assign("PLDTJQHKMQDXXSWDLWEAGOSZNRAKLGTQDQTEQRNOEBGSXUHZJZLRJSZLBAMKNAMRFFJFLLZODRYTSPJCDTDRBQYBIGIBNYDCCSEJWYIVKVUMNRXKVHPEUOQAHPPUCGGTCIVAAICJSDSYYGWPCOGOWFFVTJBWVIWGUMNFOPWHBVMFXI");
    msg.sensor_class.assign("YMXSZITIZPQQABEGJJXPDCYOSOUQIMHHCRKVAGFSIIJRQEIZGKNTNKYYREKUPWUFJZFEYALMSKMOLCNTINSPPNQJDHRCMOEKLOHQZXBAWUVPTNLBXFUGTYFHOPSVDRLE");
    msg.lat = 0.402827271719;
    msg.lon = 0.142072476907;
    msg.alt = 0.775545486286;
    msg.heading = 0.362663874978;
    msg.data.assign("COEXJEFGGHUINSJGSQJFAHRPGWBOMIOVPIVCAXSQCPRERTOFDBCUZOVTGPVYKKLJJERCYZSEFKICYXTHTZPZYRFHJICABQMFXMQYNNLYTYKMXTTUTOYVAIUWNLDMAMPLAMEXDWDDDTJMFCOMELWSHREQDAKDEUBHGJQVLURQWILFBACDRKJHTIGBWEBUVULOPBPPQNHKRKKZSLVFNXJUNIAFQZNCZBYPQGNLGROHYKZZMWIVHNSZSWXSDWOX");

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
    msg.setTimeStamp(0.055844145151);
    msg.setSource(13269U);
    msg.setSourceEntity(37U);
    msg.setDestination(12924U);
    msg.setDestinationEntity(190U);
    msg.id.assign("RNLXKUGYJWHLQPRIUWNFYXYEOOMTGKZCQZYQSZVHGVFODBLXIAYWZTVTFQFVUIPWCEBMCVERFLLYWPDHTMQDOMYSQEEPXUEHRNGZFJEIGOHODBRBWVMYMCJVYJUJUNQDPLTXSCPWTLEBQXHKBJMIFANAKLMWHFVAMGRPJATDDWSGAAPHAMBPVGKSHDSBUAJSKLQVXOOJNCF");
    msg.sensor_class.assign("GVSFNDIJGMCZZHLYWKKZNJMHPGFRVPHWVAJCYSIUCYOSDBKJULMEBPCBEODKXQUDCLLRMUIFAYTKSREVOXHWEDEGATNPYAQHZBLVCLSTUJUFNUXSLOKQRRVZVNJLUWPOWHBIIXGPVCFJQGLNWAPXGIBOPARHFQOHIZRYTWDCQIWEQQACKJQMBTCGZZHETNIYZNDGDGOSTJETIOEPRNMNDHYRKSAWRFPUBLXMMXFXKXQKBXSTEFMJDTZVMFWU");
    msg.lat = 0.323090520569;
    msg.lon = 0.301449725739;
    msg.alt = 0.698555430578;
    msg.heading = 0.938655553403;
    msg.data.assign("ZHFQALFEOTBHQGMKWVGSCRTLZOWETTVNMEWKSBMDRFKTUEKIQVZXLGCRIDFYRZRXUOJGAVAVWTZBVQXFAJSPQOPCZXYLIJGODDJDDZJCVLHNOFSNJOUATWTTCKYYRLRELFHWJPAFPNPCEUGBXMNBPBIBKXCORLNQBNVHGXNENYUAHSGECXSGZSHMRYRMDVQWIIPPCSCIMBIUWQNWKJSXIGQOBUUEYVJMDE");

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
    msg.setTimeStamp(0.957518137498);
    msg.setSource(60382U);
    msg.setSourceEntity(193U);
    msg.setDestination(37787U);
    msg.setDestinationEntity(146U);
    msg.id.assign("DPUWQFWWYLXTDHWUFQLUBJRRSOCZHEBCTGDZCMRLOPEFHFQRQLQIRUIRYNNPCTTKWAFXTQNSHFVIQSNSRZQYFNYNPWYXMMKZYQXNWTBUTRDAVTXMNIZHGPYJBKOBXXKMUADJOUADHSIBOOASYPDEGADFNQKYEVGSPUBDJJXMKECLVLJBUZEARPFZVPYIVHGVJXMRMZZLICBHKLACVC");
    msg.sensor_class.assign("OIJNZSGTLBTWHOYXFJIDJAOMMKTPGU");
    msg.lat = 0.912315090355;
    msg.lon = 0.596736940318;
    msg.alt = 0.386767636164;
    msg.heading = 0.650045555773;
    msg.data.assign("ZWQGBEDHWCEPNKSZQFIMZIRXOIEYQPOYUABB");

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
    msg.setTimeStamp(0.619505517158);
    msg.setSource(55029U);
    msg.setSourceEntity(68U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(175U);
    msg.id.assign("OIZUXEHEOSTHPIKXNMEVVVXJKYMUAWXIRPOPICARFXRFJBNIELCBXYYCIXNWSCOOCSHKYETYAPEMQDQSBQTCDBKWEGLYOSYVAUBRAYRHDPZFRVPAFGADYZBYNLJJWTOFFZHRDIPFVQLZSTMTPTKPZGZUWLURGRNTVWCDMHLSEEHTAULMQINBHFNGKGZUWKNICSEGDUZWRSKJGTQOLGAFOZWJLMXNBVBHXUXJKHGSDDQWDUQNFAVMPCVIMMKJQL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NNIJUEAXQUZOFYJXCSGLCKSKWIYWEXGBMRLMIQRAURLEBBIGOQPCERSDDFKUMLCSMWOTDDZKGLMFVVOCHYVRYECIONKFFNJIVZWWELKATSOVRFPMKSMWXLRQMJJNGZYXXDTLCBBJUHGFDJUQIBTUFOKTAVBZWHYTAEQAPOEEBNHIPYXRAXKVGNTJHHOZLVWIZGNVDRNMEFABTKUPQUQHLXPIGSVPBDNFTZQPHSSYPTCJGCRDMOZJCYHPDW");
    tmp_msg_0.feature_type = 175U;
    tmp_msg_0.rgb_red = 77U;
    tmp_msg_0.rgb_green = 210U;
    tmp_msg_0.rgb_blue = 198U;
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
    msg.setTimeStamp(0.850967929796);
    msg.setSource(26774U);
    msg.setSourceEntity(68U);
    msg.setDestination(3490U);
    msg.setDestinationEntity(14U);
    msg.id.assign("SNTKDRGUVXFZMHWYDAERZWDIYDGOMWFHGFRHLTBYGVEEPL");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FLJRFIVZEKVRVXVNMKJPPTBCFGOLEGQURRXGBHULQHWZFNEABDGKJXFAOBNUIRKVYXUGYSBDDTADCYQCWTOLJSKQHPGJLXWHYQAZIUQYFSKQZYWCNIFNPMRUMEZUAECVFVMYCTSEVADASPXDLEKHZMLSHYFILIQGEHMPVRNXOJAWNWJCZOPTUDCCWXBXNZTDZYAVKAOTBLGBOYNTJW");
    tmp_msg_0.feature_type = 247U;
    tmp_msg_0.rgb_red = 34U;
    tmp_msg_0.rgb_green = 86U;
    tmp_msg_0.rgb_blue = 96U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.157740743383;
    tmp_tmp_msg_0_0.lon = 0.922668580256;
    tmp_tmp_msg_0_0.alt = 0.621259687169;
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
    msg.setTimeStamp(0.0364948364211);
    msg.setSource(1765U);
    msg.setSourceEntity(100U);
    msg.setDestination(63870U);
    msg.setDestinationEntity(2U);
    msg.id.assign("PXCUKTNAUFHHAGEKMYKULKOZJJRGNIRMRVNBSBULFCSMMPDKNHDZGACVQBTYSJXZWSKKYNZBGWVUGSCZLZEODRHOBAVOJXWBBNADMRRDOIUXQYXNMPXWVAECWSWPOJJYIHSB");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SUHPJFLXDLMEUQPBYFDDTJVSAXSZGHRNIAMKKVXJXVDEYZWSTCYJAJKJQCOXSLZTWVSPGZNVBWTENWMPEROVPGBFKHBFCOQINLKKAIYEEQFMWIMYDCLXLUSFRAVCOIMHNUUUJGQVQ");
    tmp_msg_0.feature_type = 10U;
    tmp_msg_0.rgb_red = 169U;
    tmp_msg_0.rgb_green = 26U;
    tmp_msg_0.rgb_blue = 176U;
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
    msg.setTimeStamp(0.897530545192);
    msg.setSource(60483U);
    msg.setSourceEntity(158U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(93U);
    msg.id.assign("PCPHNSYKPGLLEYQIGNCXQMABSPUAGJBIORWUWHUPMHOBUTKUITCPFBTASIJMXGWIPFZZDVJRWANGGIXOTKBEOIMFTLKECWMPYDFEVJDDBKVZSYSFVKCKKM");
    msg.feature_type = 33U;
    msg.rgb_red = 129U;
    msg.rgb_green = 44U;
    msg.rgb_blue = 150U;

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
    msg.setTimeStamp(0.023745738576);
    msg.setSource(61540U);
    msg.setSourceEntity(200U);
    msg.setDestination(60914U);
    msg.setDestinationEntity(61U);
    msg.id.assign("AJNMZNGWCEHXOIUXWAVMUQZQVEAWDMCBJTVDIOEEOWNQFUNRTLHQRFLHOAUSLOFWTKPSHGMVZHBXPIDDJDMCXZTRVDJREXGELPFOZYYFCSDSFBSOHVKIFQWKCBHFMUGKMLANMTDRYCLRIYNSQLGBYYNCGKMZVCESOTOGUPOBLQCXJILLRXXRXGPBPWJZSEYHZXZMKPWHZABIKPTINBVFBRWDGWSEKNJJTEJFATIC");
    msg.feature_type = 47U;
    msg.rgb_red = 67U;
    msg.rgb_green = 12U;
    msg.rgb_blue = 128U;

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
    msg.setTimeStamp(0.612610763178);
    msg.setSource(2002U);
    msg.setSourceEntity(58U);
    msg.setDestination(21641U);
    msg.setDestinationEntity(79U);
    msg.id.assign("TPUTJNXXRIYDNTQACAXRVMVGTRMFMBUWFQVLQVEJICIGXWCSUNTZBZXKISLHAHBJSXAMPWBHHVDMICLRXWWVMEDLNJHLHXTPFTOAEASQTOAUPQZJDWNNZLGTVYFJISAGQBWPTUXHEELKGUKZCFZNOXORIDDQKYUOJGGFYRZYYP");
    msg.feature_type = 38U;
    msg.rgb_red = 224U;
    msg.rgb_green = 103U;
    msg.rgb_blue = 178U;

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
    msg.setTimeStamp(0.874902035382);
    msg.setSource(35776U);
    msg.setSourceEntity(87U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.637526892953;
    msg.lon = 0.231424510843;
    msg.alt = 0.715160828228;

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
    msg.setTimeStamp(0.697700164021);
    msg.setSource(24967U);
    msg.setSourceEntity(82U);
    msg.setDestination(5991U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.72944765431;
    msg.lon = 0.548128881746;
    msg.alt = 0.525459070918;

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
    msg.setTimeStamp(0.683937055452);
    msg.setSource(41687U);
    msg.setSourceEntity(142U);
    msg.setDestination(30190U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.51043426739;
    msg.lon = 0.958597398305;
    msg.alt = 0.650910343408;

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
    msg.setTimeStamp(0.330393764407);
    msg.setSource(42557U);
    msg.setSourceEntity(88U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(83U);
    msg.type = 96U;
    msg.id.assign("AEAXQWULTZMRAGEOSOISPZVHYCPCRMQGVWMDIISICJABYVGKUUQQFRNXEJOHQWLAMMKZDXCNCTAFTQMQEJQQXHGI");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.129879516354);
    msg.setSource(62935U);
    msg.setSourceEntity(246U);
    msg.setDestination(25281U);
    msg.setDestinationEntity(167U);
    msg.type = 95U;
    msg.id.assign("BKYZCUWNIBTGIQCDVNYSBBIHRFVMKOSYLFVNZEWGTKZBPAEKOCWHTPMCSHDHRD");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 28367U;
    tmp_msg_0.sys_dst.assign("QNLJVZFBNMMCOEBURWBNLTGBSZTFJTLHJIZIEUYIAACOKXDOWFXSIICDDQFOVOQSKDVVBPCXFFRAQGKMJIYYRLSPQDDQYPTXCESVXXHITQGHUJEMWMHYHROVUCMHNMGDKAWNBHPDAZBNJAQLZECOKVWGOPK");
    tmp_msg_0.flags = 12U;
    const char tmp_tmp_msg_0_0[] = {-58, -99, 90, 44, -102, 123, 2, 11, 90, -24, -106, -59, -76, 34, -22, 65, -23, -106, 45, 28, -40, 58, 82, -115, -47, -5, -5, -91, -112, -49, -34, -72, 100, 105, 24, 1, 31, 94, -76, -18, 44, 103, -110, -83, 78, 67, -46, -57, -120, -44, -24, -81, -105, -92, 20, 8, -121, 64, 68, 73, 56, -30, 26, -96, 5, 112, -41, 103, -1, -57, -13, -10, 41, 54, 31, 106, -123, -87, -7, 9, 30, 97, -60, 124, 120, -87, -2, -5, -20, -58, -60, 33, 17, 123, 78, 121, -69, 75, 55, 84, 16, 102, 40, 114, 39, -42, 100, -31, 33, 8, -98, 99, -78, 10, 60, -66, 38, 25, -78, 48, 110, -80, -45};
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
    msg.setTimeStamp(0.93434284894);
    msg.setSource(5505U);
    msg.setSourceEntity(207U);
    msg.setDestination(55460U);
    msg.setDestinationEntity(218U);
    msg.type = 34U;
    msg.id.assign("OZSCZEPWHLSAIZINITLFQWEMHCMXIBHDISEHWJGCNRZPGBTLXFKCMLBQOJOQPEPUKAJRYYEBFJBRTHPPUNASLMSMNOJOGNOHQZERXKMBOOOFCFDAMYWQTRGYNVTWVIJPEXXDJTUXVWALXYBFVESBBPKNUP");
    IMC::VehicleLinks tmp_msg_0;
    tmp_msg_0.localname.assign("RBNORAQEMXTWJLVDIQTLODRPXKMTROHNDFZZPLECPGUOETNIMCMGXFNLXQWPVGHEWSBMPISBNVAMHGEYSWGMQAOTHUQKRNHVOKAWRYCEYOEVRZCLHZJWENQBVFQQSRVKJPSTDOFUTZCRHNZIOMTTDUXWQGCXJUJIKAPNSDKVMSYIAHXWGGCYKLQDAYBEDLCFIZZYOTXWULJUJDJJJHDEGNFBAACXSBBFYPSKFLFWPZZBFUCRHSPYKGYIVKI");
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
    msg.setTimeStamp(0.733249325126);
    msg.setSource(16437U);
    msg.setSourceEntity(43U);
    msg.setDestination(25296U);
    msg.setDestinationEntity(29U);
    msg.localname.assign("TMAITVFMCXRLFXYXYXOPMLWAURVIGROGQCDNVNOMFGZTDKHRIRQJYIUKXPZHKYSJWEOGQAJSSJEVVPWZWRPSWTUZALCGFVGMXQYQCPAZUILLRZBKCROHNQWMMDHCMODFABDUEUKSQHTS");

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
    msg.setTimeStamp(0.616746207324);
    msg.setSource(36586U);
    msg.setSourceEntity(107U);
    msg.setDestination(2604U);
    msg.setDestinationEntity(194U);
    msg.localname.assign("OXEAKKEDVOCNPIOKVAYGZZYCMIEGOJXPSAKUCPAEYJBWCQTRZC");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("INRBSZOAZUGXTYXW");
    tmp_msg_0.sys_type = 232U;
    tmp_msg_0.owner = 29316U;
    tmp_msg_0.lat = 0.00594388947472;
    tmp_msg_0.lon = 0.0789640278112;
    tmp_msg_0.height = 0.252356548136;
    tmp_msg_0.services.assign("LHBUAGYFEEPQFYDDKPQSFRVJTLMKHFWXGAYHUWMMNGVVPZKWEOIMOCCZAFBELSYABNRPYCIGTBDVNIHESAUSUIIGZQNSLDCOHSKLJPBNNERRCHXUDUFTEPLJQMNRZECZHXIGRNWBWZYLXPUVFXAKJAPCXXOUYWKPOMARDFKKGJBCYLTVVLSHQWMTSKZJEOBZWCXQETRNHXDZQJ");
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
    msg.setTimeStamp(0.773125923826);
    msg.setSource(39751U);
    msg.setSourceEntity(121U);
    msg.setDestination(9230U);
    msg.setDestinationEntity(25U);
    msg.localname.assign("DVGDXABQJNFUSGOBTGIJYQDLXGUPPMUVQYSPIBUDTSKEPXJWNDRRZBBDSYXWXCJRBFJGBPLWVBRGMDIVGARR");

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
    msg.setTimeStamp(0.444902915612);
    msg.setSource(49498U);
    msg.setSourceEntity(231U);
    msg.setDestination(49950U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("QXDARTRQYATTTKVJTAWBYGYPFOSFBAGWWSTXEBWAPDIHNISIRYUQEDFSRQXMFVMLJYQIUTGECFKBCUPZYUEKVHJZHRWGJCOECCWEWFSDRJ");
    msg.predicate.assign("SLVHVSYSVIFOOTIPUYITHGZZXJYFTPCFVNLUDWBBQTVGJRXCXNFYCYYTDOUDABQIWIGNSIPUCPRWNOZHKWGHXKAMVEZSECCCUQWHUXZGFCERRVOQGHYMAJWEQPTBJPMBRVWUNTGJUAXOKFZZSHMJVZJDRALYWPSJNKABGWOTDBXMANDWLNHHZEVYISLLREKMFRFLTJBIGAKBFOEMUQDKSPSOXQAPKKTNQ");
    msg.attributes.assign("PIWORFEFWQXBWZFBDQJNPWFXRCUYIDNMKJZZRTVABIUELPXKSXUVLCJOZCMHPCXSDQEYPTZMBRBCCHISJDSVNHUKQUPPCOYUZAQBKVDSSTHQEYPKIPJLNNAHZHLSEATDLUVQTWGATCMG");

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
    msg.setTimeStamp(0.690023581651);
    msg.setSource(18073U);
    msg.setSourceEntity(132U);
    msg.setDestination(12574U);
    msg.setDestinationEntity(171U);
    msg.timeline.assign("VAGYBCQQLYLAGQN");
    msg.predicate.assign("JUUJEUNLXQNPCJPXMDIUE");
    msg.attributes.assign("VCXPDDORQLBEZATFQETZLECDUBGXHGVHTKRDFUGAJBOMIIBGJYGATGVGNJSFGJTQRBOICYJHXUEHYKAYLMUPZWHESCMZCFCLBSKQVZAXNWNYIMBDWPMTMYZZADRIYQZIREFOXNDNOLUNPVJHOFXSDEMJECNRMADEQATWVVMKSAGELULRPKWFUJCKZJNBNSOZDKULYA");

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
    msg.setTimeStamp(0.278402957916);
    msg.setSource(42409U);
    msg.setSourceEntity(128U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(19U);
    msg.timeline.assign("KSKSJRQASPJUIIBTOYHICUQVTVSSAFUGWDJKCONLXKNPBMWYIYUBOPVQSRNJLTONOGHRBPXPASIJGBQXYDWRVDNMFLSZLMLWHEGMQIOKDUDWTRCWJTFMTBUIHYREUOLXZAGSTQRAETIJBHYYXWVGNXXCLRUSCFPECGMMQLKNXQJXZPFLFNZDZZKRXA");
    msg.predicate.assign("CQQFQWRCLXEWTVPVOKE");
    msg.attributes.assign("UERCGLHKHKYNJBFCLSPBDAALFQIEVABYOTWFXBDPQMWFHBKIVJZWNRANNDKYJYGKHMUEZXPGPTUQDUXZSYVHBKFIZAGVBGNAUTOGSFOEMMPOATZDTGTJVCLXHZMNMQBLWXEFRIRQDZRBPJGOJCGXPAVSWQMYEPLTGJWSQZQROOHKQJILKOMIUVIAXTCUWTZHYKENLCPULJCXHLKRSEDSVDHYWINUSSYFRWNNICSPM");

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
    msg.setTimeStamp(0.585071027108);
    msg.setSource(56672U);
    msg.setSourceEntity(161U);
    msg.setDestination(44762U);
    msg.setDestinationEntity(127U);
    msg.command = 80U;
    msg.goal_id.assign("GEBTPKDMOXVVGVPQUBTCRALSOWDSPGNZLCUICJDZKKMVH");
    msg.goal_xml.assign("PSAMMVXCXTGWMPROJTVQENBHUWRZVXNJDTVSLLHTCTIFYSZYWKFEACCKVZRHJYXSZIYRPQRCCBMFAVNDYHLWFXKENUSQAUDOUKWULHMDXATSMAILFISCBGOYDOTVUCQEGRUIJIPEDMELLTQJKZRADGWKNSWKYKHFPGGNPRFSROAYV");

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
    msg.setTimeStamp(0.562657356634);
    msg.setSource(49129U);
    msg.setSourceEntity(38U);
    msg.setDestination(57901U);
    msg.setDestinationEntity(154U);
    msg.command = 58U;
    msg.goal_id.assign("NHOXAXEMKKZLIAGVWLIJKQTPPUYFAGZHOCNLCGSHAVWZOFVNAPVLBMWDYOQGASRIAQJNUGELLOHIJXRKESFCHRZQTZQPMDQWYPRREXDOJSGTMMBCOLYXGWVTEGXCZAULKPXIFOPTKUSNASZCJYMZDDTWVOLIUNHZXREB");
    msg.goal_xml.assign("AKYEVPEPMSMLKMLALOUZHVRKYBZYKRCMRORZZKPGEBCVIXLTTCMUHEJAADXOGZIRBSUJJH");

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
    msg.setTimeStamp(0.907781203275);
    msg.setSource(6964U);
    msg.setSourceEntity(156U);
    msg.setDestination(34896U);
    msg.setDestinationEntity(79U);
    msg.command = 227U;
    msg.goal_id.assign("ELFQTMDQVZHHAOUMNAPFBDBFUCOIITCYDXNMCBSTSYZDVXBDQGGAKBMWBTIUTXRNREXKCSPMMFPYBPVJYSGGPJUOLDCHWWVGMJSVRZJWBSACUKCTEHFZPKZEAJTQXAAHXERWNYALWLSIUJIIVHRVXJZORVRGN");
    msg.goal_xml.assign("WRBIJCVXPQTQOFFUFWAQETXXZDFVEVDKUXGKI");

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
    msg.setTimeStamp(0.878366151161);
    msg.setSource(64874U);
    msg.setSourceEntity(220U);
    msg.setDestination(44859U);
    msg.setDestinationEntity(23U);
    msg.op = 177U;
    msg.goal_id.assign("LLIZMRMGNRQCHZVKUATHMCXUATSSGN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UNIEMQUWOVIBUNGHYKQPZRYISNRHTJKSQBWZTTNIZNBLVMRKNQFIKOAFHJHEYSMMPJPOJWYIGXMWDQFVWMBJXCXGETTRWPPGWOVMATXGSTLNVAOLECDJHUIOALZAPUXJYBXVBFTYKFESZQGDCURHABAYELQYYDSXHXUSWPHUNCEBPSEBJLZEGOPUQRCVCSKGDTAYJFCZKHXAWK");
    tmp_msg_0.predicate.assign("BQWHYRHKZKXXNFUSTVLDGUWNJSQTQLIQPXLDOEGAZAMQKGZKZIKRJTDPYIVUEYQBODOSBPBKWXYKOBBTOJEOYFFNDZCHQGEUKKIPLVFMFEEWDFPTGPNVSWSHAFY");
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
    msg.setTimeStamp(0.108584737575);
    msg.setSource(36500U);
    msg.setSourceEntity(162U);
    msg.setDestination(37463U);
    msg.setDestinationEntity(72U);
    msg.op = 211U;
    msg.goal_id.assign("YTWUMDAZHIOZBJEBNZPDMFECNSYUWAKEGMMCHPGPPOZCIDVDVWMDHARYGSFASEIFOZVLZJCLTEZKSHDJQQBPVEGFIVJQRBAIYUTLWOQXPJTDRVLJKYSRNXVHQGKXUHHPMWURSVJBQYXWSNVNJLQKJNFE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GAMFRUOTBVHVVYBNLWHEQDGCDAZLMWQGWNQNLRSPVBFPAAYBMBKTXEAWPBVGTAJIKNYKOCLCKNFXMUAXMYYSTHXWVIRIMQUMYAGUPONEIUGSNSGJUPPCTDQTFLEHZVBIDJRBYLZMJSY");
    tmp_msg_0.predicate.assign("EOPSKYDSNVJYLCPXOCWVRWVLOZODGQLDZRWUXFZDPTQOTOCGNRAURIQUYGVRWUCDFQVFYPJBKOCMTSKFVXJBPLHGBFKMWJIKOZSPNKRUHBGLIYIDZEVSAIXBJTRCHYGNBAKJTUCBHEMSAVHXLUHKZBVNETPMMQMGFOYIFARJQEXFPUHQL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("GMVYOONKCRGBVNKTLUXYOUDBSOCLGFQDMFJACK");
    tmp_tmp_msg_0_0.attr_type = 127U;
    tmp_tmp_msg_0_0.min.assign("WLHNZPTUFNCBKQBISIJRENEVRNPTLYKSGFFXEXSRZPTUSOCXHEBMOGAPXJAIEXGAIHWYAKLDQEUHEIUGWBKOONNVHVBQZNURFYGRSBOXZJFJJJYWMGAOHCTHSQQDZQIGVKBQRCQTVSVMLAUMEZOLUMWDCVQHKDNUYKMBOVPWCSGJSFTRTNACOCYZYIIGTAFRZYUHKSLMHUPLO");
    tmp_tmp_msg_0_0.max.assign("TXPYMQVPSRIANKHHRUYBILEYATLLTQHCEIMZRISDMPVGZCLGZBPAYHWEEAMQUFPJFODSHTQMFTHTUVCLDOUUOXGANUPCDOPYFYACRRFVZWRSJPJJJTDCWQXRXZNHXSIIJMECKUBOBDJDNXFMSWINMRWHYAUGLOGVGNXEKKKNZGFGXQYLUZDNBWABFGDBOOLZVPNSDWIOVOQHEWSJXECYCJQQZFYRZWRKKXNIAFPI");
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
    msg.setTimeStamp(0.345547469668);
    msg.setSource(32319U);
    msg.setSourceEntity(20U);
    msg.setDestination(35976U);
    msg.setDestinationEntity(192U);
    msg.op = 228U;
    msg.goal_id.assign("HGRBGMFKKSUIQCXSNJIAUKKRJTZKVCYGSXYEFSOVEBYNZODNDVDLCPAAPHZJHYRRHIMJXGV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ENICXXJNHKZFVJAXZACGPATNMYJKPQZEXORRGTWBJBSKEDGHYTBYCWAUDPPVJXPLQCPGLIBKKEDBFMYRRZPUHARNWJLQLDNHSMBMRFSOIWIOWCGTFERFRMCSWCAZOHAZFMZVKIMGLFWDIMSIOJDDOZPYJVVUZSXHEJYMTPGQKUNLYSWOLYIXQOUQNGYKZUHEBFFLRCMGVIENPQHQGLDSSKKAUHVQDBXVWF");
    tmp_msg_0.predicate.assign("LIYNKSHPAWOKDRMJPVDAZNYFFQMBILZYUNUOWIHBYGXIEINZXJVOFOKESDVTUCSICSMOZGPVHNDEEEHGQTXXZPORKYYALLQURXBDPMJAZYLEJWVRICTAJKQSMQPSYCXJNLSUBGDKXHEVVKZWWRKRQHVJMYSRHIPQTUTIAFUFHQMKYDLUCROXPXLENRZTRGSFTWDNFAFBUTQZJBIJCN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RJUZQKPACMSNNZBAWEMFQUFXILNSWZNUPJYYORTZVLYBKMVSOEFJUHMDNRDKLTPQKIGALLSDMKCDOXDQXOGCGSZCVJXQRJHHCUUNYGINQUKZWIZFUNRHWFHVEZYLOAIHLXROTPHPZREDADVYHGYJFDBLMJAHQIBRGGTEFTPWSXMFRWWTYVWVCPORXASSXBSSAUYNELXTMBTCIEQGIT");
    tmp_tmp_msg_0_0.attr_type = 81U;
    tmp_tmp_msg_0_0.min.assign("SQABCHJPVRQGXXYMCZWAVJDNQJKTHEAPGDSBWLJSWZYLODEKANFZBTGGRLDXTJLTXSFSMTHZKVTZMMULVMNBWWDTVLPZCKWBUJOYVSFRVMSJMOBKUDQQFDMKUYYEPUAJIGWRFEFKJQOFZRWUMVCDJIHYLNEXVEGZBTWNCYIUXDMCPQOBBEIAXSCHNSPXENLXANVFPCIZRKIQGAQP");
    tmp_tmp_msg_0_0.max.assign("OOBZMCVUGKCOGSVUVKCJLYMXILDEOAGRYPVEJUBDPUMJQETWLJBKTYDTWMFIEAOERLYMKFSPZTWDEMQYPLSWNVTGSVGSDZHBFLIAJLHXDCNYJRXISQTZ");
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
    msg.setTimeStamp(0.19594819975);
    msg.setSource(57207U);
    msg.setSourceEntity(244U);
    msg.setDestination(39176U);
    msg.setDestinationEntity(241U);
    msg.name.assign("LBYYXQYTMSDZRXQTWNQJIMLKCKZRAAEQBYTCUEKVFDGEVFQETGVNYNLAROPRGZWVUORJGPCIVTXAOFLGUIUTCCDHEBBVZZHGYUSUWJBVASEHPKGHMJPMIZOYCQLWKPKBRKRLNCSXNLVDKNIHUSECOOUHJNSBDZRTVFQODJNEPZAMNQFHUVFPSDQOISZSOMTMPHRWFWCFJFCBWPWZDUBKIHXTLXIDIXIEAAFYGWLEDXQT");
    msg.attr_type = 20U;
    msg.min.assign("NSQVEQYIRZBPCMCPDFPVFDJRORRBEPCOEAEQSLTVXAZMZTBLSIUBKYFAPYWESLXMMNQUWIGNBEHXHSYMJECJTDJQOGJUWHTCJJYPSYZIRGJDKIDDCBKTUNBWYFRXVUHAJWFIBAHPLLKFPHWZGDVIQNXEKDSGZOK");
    msg.max.assign("DULPRFAPBZWGKUVTNUKLXZHIYKWSTXNYNQHXTZTOYATLPBZRGXXQHODMRIXJYBPPTLFARFZWBKVKHUSCFQEWMJFAZNTDICAJFIVFKHVOIXECPMVCJSVQXZBJTZQLGTMVUKAUEOQMUEYISZNHREGEAONGGJJGODBSDIENKSWQTWVSBWMY");

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
    msg.setTimeStamp(0.985415594591);
    msg.setSource(44655U);
    msg.setSourceEntity(159U);
    msg.setDestination(52555U);
    msg.setDestinationEntity(142U);
    msg.name.assign("LIBLQHRZEFKMLFDNHKECJUJPELTMNCSXTISIWZMTAYGEDEZNHZYNMZKAWPBPEIRPLH");
    msg.attr_type = 59U;
    msg.min.assign("UBCTKSILVEIYKTFZSTRLDCGFGCKJIOOCCRIHMXIIRVYBLLGRXPGONXVVGYZTQDABZDRWDQHSHHDLAHNG");
    msg.max.assign("BBFMASNWTRCXIAKNSJMRTOOQCRKHKFFJLWOGUURGTTSYIMJZIXUISUELEQLCWVHBMFBKDLSKLIQUGYIDXZWLMHVSJUAPDUCGBIHPPWXYPJFBSGJLOOPDXKHPTBEZVZSMELJCPFUGQQRTWQLOHRIXZGMMRFWWINRWNE");

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
    msg.setTimeStamp(0.784079924747);
    msg.setSource(53397U);
    msg.setSourceEntity(92U);
    msg.setDestination(31467U);
    msg.setDestinationEntity(239U);
    msg.name.assign("WNLCZDLWQFBROMRSNWFVBDEIJGXBBGSFIOCJVYKPFNHHLDAQMSIULSOYSTEKVGDOZPTADAVLDEUPLEHBRDLBKESOHXXXPWQUQTXZLEAWCFGURT");
    msg.attr_type = 143U;
    msg.min.assign("IHSLPZKPCCDEGJNUPUHYPBVWRFVEHEXEFXTZRVPKXQUDQCYTCCEIAGRYZNW");
    msg.max.assign("WDOBPTOUWZOAPSLUBMYGPIIHJDVXUBTFTEKQZCMJFWGGKGDTEXJSRFPBXEQACTPUXHARQHIDNADBHEVXREIE");

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
    msg.setTimeStamp(0.886056940973);
    msg.setSource(17888U);
    msg.setSourceEntity(242U);
    msg.setDestination(61276U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("JESGQNBBOUCFJBUAUZURBVJXOFLMGELRXYISDTIVNVZFHGFNKWPKTWVIPGRZBAMTFPZHJVZATVIORYNWOKRQOPAROFOHHZDYNDEGAKYAW");
    msg.predicate.assign("RWAORGNVGMKCGZFMMCLGORBIHAQLKEUYCXMX");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZTCSNUVNRNKGMAGHGUBQUDZWXFBHHTITWXWSIKJVGZKSJVLKMZHLHSOWIRBRZLEWUTGTCTOPIOXCKZSQCEKNCXESIXADAYXDDJTEBBSOFCRNJEGQUVVVNJKPLWWLLLFPJ");
    tmp_msg_0.attr_type = 215U;
    tmp_msg_0.min.assign("BBHFTREAPLZMXSNAJCUVXPTSFXUQXGVEQEXMYOHROGCWCUMNNFYINDEZWIWKHUTUMBGZPJQZRVHAUFVLE");
    tmp_msg_0.max.assign("CRJLTKAWRDSNBYRFKOLNCTKLQMGOAOERDCZHYFSAGWEWPIZOMGRMPGTPTLONKZZHPMHRDHZMFHMDICOZMEWMRYCBKSIFVTDQZHXJHIYEXEUMLFXAUAEYSBRJYVWCQDBGHUGOLGBIBFNJZTRXTUQADCCJEXUFEWKZWJKDBGHYJEVSVABLWBSNXPFSDI");
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
    msg.setTimeStamp(0.0858149768286);
    msg.setSource(28366U);
    msg.setSourceEntity(194U);
    msg.setDestination(44915U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("RZOABRYEWQEZELYQBUTVBSTPGZQLDTUYNFRROCYZUMNEXODHKALWPCRTUHBIGJMHOLIICBHRUNPWFWZCIUVBFKSEMOVBVYWPNIVQDAKKMXSCXLNTGAEJPKICFPDRWGFSSDGJZYWGXAFSMNQFVYQYDAOPWXVHIUODBI");
    msg.predicate.assign("NGDMHPCJZNVLNCFMXVJAZCWWLFMPDRUMRDIFOORXRUXKEPCDULRUPNJHYTYCPYIZKQBCIXQWFTLAZEKZOJSSCORGXIWRYOWYKWEHEVJILSIYALYSAXSMJHTBTTSZGEYRITALQYCEFFSMBOVEJBNRPQGBWBRZZWKXHDVDEUUDZIXQMHH");

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
    msg.setTimeStamp(0.19540398942);
    msg.setSource(27584U);
    msg.setSourceEntity(6U);
    msg.setDestination(16652U);
    msg.setDestinationEntity(164U);
    msg.timeline.assign("EOLWJHTFOCXMJZEANCNCSIDRQJETLWUGPDGFOQAEZQFYTEFXIVDGDSQBNYPNVRINLF");
    msg.predicate.assign("OSOCULTPPNHHGVTGVOGMOFXXGEXVURNUWUYPCJSCEWPFDSVLVXGMHKNNSSFKTXODEOIRIBEHGNTIYAHMAQKDQVJGKXC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CRYEPXTOGYVTJABPNQSJVLRWNNGOHGQWDHBHJREXZSFPLKCCUJYDPZBFDVGEUOZRCRIWKXSQUQQWACDKAJBRFULCDLNOABYPOLICFWUPFOCXKIXDDMXLFGQTSVTXEZUQXPQALZZHZOGHNAKHFZSKLQVIPUDMMNFVDTRERTHJRHDEWTPWKJYGMJBVUNYBTEOSNMOGMBTZYHSVEKIJMCWQESVYEHYTCIIASGUKZAVA");
    tmp_msg_0.attr_type = 163U;
    tmp_msg_0.min.assign("YOBQGGEXCIRHSFZBTBIGBYVPMDPBXWPAFIOATRVVDPLUMEHOGLPRMAOZUYJFZCHAQUGOVHNUTGLBXYMGNWPSAJBWAUANDJSTYOKDQMDKCUNQZJLFPYSQUAYJILKRFDJEKJPHAZCFEIYMNEKCZVKICMXZXFKKI");
    tmp_msg_0.max.assign("EYSNLJHPOPHUZDMMGTCJPGAIMHCDWJMIZZKHIJZXNBUNNTSKXBMDYXNGGEWCAECJUADQQEODZRFKYYILSIFPMRVTJYSZPNIVISBGLQFXDJCVLGXSHBL");
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
    msg.setTimeStamp(0.664547315944);
    msg.setSource(9975U);
    msg.setSourceEntity(193U);
    msg.setDestination(37253U);
    msg.setDestinationEntity(135U);
    msg.reactor.assign("NFKYPTJTHEWVPERRTXTQOKXIFJCQWYKNJDFIVKRLGWLNYAFXTWUZXZANALPGALJBYOGCCNYDGTEAGONZRSDZGQKTXYDHTSRDUVYSHYDLCVMWMBRVAMJWXHVBODVCJQOMFOYEKEZPWSCXSNROGLFCIDNMQQGIWFQPWJUHDYQHBBHFSXUFJEUPTKO");

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
    msg.setTimeStamp(0.738569556872);
    msg.setSource(6734U);
    msg.setSourceEntity(183U);
    msg.setDestination(55929U);
    msg.setDestinationEntity(60U);
    msg.reactor.assign("XTWKQTPKUEAFPRBMHYQIYAGINOUJXCLHAXVIKXIZHXKFBYBJYPOZNQNGZGGIGWVGTBHHDJGMDACYYCPEELTIXSNVRRQKVRAGPVCOXBXLEBMRODMUEPIZVOSRMWMVZAOTPDNGIRDETLCDBQWSQWZKLRPJRLQCLVJODOEUEQJGSYNAFPVDSHY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DQUZIUOIGXBWXVDOGNXCXMNGEERTNAZSOCSBCEDSFQOYWFPENKFYVDNDJQXPMMKLAKQLSAFVEKFVHGXKAYLSFGMCHSECHJPWUUPOYVHLJVKWIVTUXILIIIHKIAKIQRZSGMGJRYXHHWFARCDQOTUJUGLVBWQDWBZNWTNBNDQYNZJPCJRKRYXAGFLCAEWPUTVZVTRZMPPZMTLWMFOUPJHRTQEYSPXCM");
    tmp_msg_0.predicate.assign("TNIWWWELCUPIAVOSRHZAKJUKRXIQYZXTYGAI");
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
    msg.setTimeStamp(0.354772082356);
    msg.setSource(43331U);
    msg.setSourceEntity(193U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(161U);
    msg.reactor.assign("GZYYNVDTFGMABCAMAEUNNCAJPRC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ABBEQSHPTXJEHXFEVSOFCCSYTLKNGOFKYVRYOHILAXWLRFCHUIURQREDWMURZJTYNFJYDMGLPTMDCMZKWKSMVTYJBHJXAXXPTILOPRKVSEWVIKKANBJGVZRDHWNNWQZQKGIALWEAEJCWBQIGKMTWSNBMOVNLUZCSARPFBPPYGFDQPRUUQXGHEFXNOVSZTQVGCUSIOAPDI");
    tmp_msg_0.predicate.assign("CSBDUUYEPSVNZQPQSXHUQMDBURHNDHYOOQRDBNWVDDTULJEW");
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
    msg.setTimeStamp(0.0267642691749);
    msg.setSource(61872U);
    msg.setSourceEntity(69U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(149U);
    msg.topic.assign("JRUOXJRWMKYYAAMNBEFBVAMDHFZQHIYBWEMGKMQCPMFJHHKOAVGDSXEPULFGPYEPOAUOXAVRTLTXBYZZNVDGIWJEXNGQFCJOSPFIZZMSUVYSCZTRBTWDHUIWKAXDNISNYZBBQXKULAIAOWVCCJTUOXAHJUGECVKKHGIRUVSFKKIGYRTQZBJFGEWBYNSXKHXCHFLGTCDRIHEEVLPLCJBJIOQMNYWOEWC");
    msg.data.assign("EGBJRWHFWMCTNGEKJAQBRKVLNNRFCJKYKNBAIBETZJUXFGUHKMFIOZPETIZVIATHWVTIPJUDCELFPRUVDCIMTRCCZPQSXBUNBZSSTAWGXRJCYOQNXNOYLJLLAYZRUCNELHAMLQMXXQWQPYUZSYVXGBEAXTBSXUEPOZFCGIRHJMDWFPBHYNFISHKKJDELDKFUYRYTOVDMWAPIVGWWUD");

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
    msg.setTimeStamp(0.0286609223511);
    msg.setSource(7490U);
    msg.setSourceEntity(80U);
    msg.setDestination(24330U);
    msg.setDestinationEntity(24U);
    msg.topic.assign("ERDXJDQCBNJWSTSXFIASWAMSCXSRTJOJLID");
    msg.data.assign("KQPULGCMKBKHBWSUPONLBDQUINYYVGCIFXQWZJPDJWGVBKPCTPIDQNDMETY");

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
    msg.setTimeStamp(0.835626942157);
    msg.setSource(55575U);
    msg.setSourceEntity(16U);
    msg.setDestination(18202U);
    msg.setDestinationEntity(161U);
    msg.topic.assign("WRHMWSUYFIOSFIRM");
    msg.data.assign("DKHIJKKMDJQZAZCWYEXQDMUBBNKRTEWAGTEZWGZRUHGGUUGZLXRIWGALPHFGSLMEOPVBFJTJQOAVQIAVYPXGAOXPQMPHWVBXOHRRZDWLCYJIEQONHQCZEYSXPSBXKVWYSTXBJHETEIMNFNQNAJUFEZBZFVNTILITFMMKFYPO");

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
    msg.setTimeStamp(0.376248949732);
    msg.setSource(47948U);
    msg.setSourceEntity(234U);
    msg.setDestination(10454U);
    msg.setDestinationEntity(167U);
    msg.frameid = 111U;
    const char tmp_msg_0[] = {12, -93, 85, 116, -128, 85, 14, -81, -28, -125, -126, -23, -112, -118, -104, 88, 109, 16, 90, 46, -111, 47, 31, -46, -30, 101, -57, -14, -44, 4, 13, 54, -33, -43, -2, 50, -31, -128, 77, 48, 79, 74, 38, 78, -58, 68, -6, 81, -85, 4, -81, 117, -92, 67, -1, 45, -66, -26, 87, -31, 10, -70, 125, 50, -115, -35, 95, 30, -117, -54, 75, -108, -122, 32, -57, 126, 43, -108, 75, -108, -83, 29, 63, -97, 97, 60, -124, -13, 109, -110, -117, -16, 57, -99, 43, -101, -52, 95, -116, 27, 50, -68, -72, 37, -94, -9, -115, -82, 20, -91, -67, 78, 13, -105, 64, -14, -38, 21, 114, -111, 95, -70, -112, -81, -42, 42, -79, 53, 33, -84, 109, -15, 115, -41, -120, 112, 49, -11, 89, -71, -89, -96, 73, 113, 49, -102, -26, -66, 4, 17, 70, 18, -74, -37, -127, 58, -75, -37, 31, 43, -50, 82, 110, -34, -22, -77, 4, -104, -117, -84, -128, 121, 97, 11, 59, 114, -114, -123, 106, -43, 95, -54, -77, -69, 112, -16, -21, 90, 32, -77, -77, -91, -113, -112, 91, 56, 103, 107, 83, -37, 75, -96, -121, 8, 117, 82, -84, -121, 16, 17, 6, -53, 48, -49, 79, 109, 3, -5, -49};
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
    msg.setTimeStamp(0.0120998376578);
    msg.setSource(39341U);
    msg.setSourceEntity(90U);
    msg.setDestination(63483U);
    msg.setDestinationEntity(120U);
    msg.frameid = 47U;
    const char tmp_msg_0[] = {-95, -121, -99, 58, -96, 50, -95, 28, 66, -9, 120, 46, 11, -81, 64, -11, -21, 70, -128, -107, 38, 86, -67};
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
    msg.setTimeStamp(0.902924905145);
    msg.setSource(32256U);
    msg.setSourceEntity(57U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(101U);
    msg.frameid = 68U;
    const char tmp_msg_0[] = {-106, 74, 100, -24, -28, -62, 41, 24, 109, -77, 13, -79, 115, -66, 66, -127, -97, -11, 7, -69, -126, -80, -59, 32, 50, 56, 5, -55, -11, 84, -127, 5, -28, 57, -124, 101, 57, -28, 13, -112, 38, -98, -35, -94, 89, 46, -49, 0, 102, -67, 65, -122, -65, -59, -4, 69, 90, 44, 22, 123, 19, 13, 62, -22, 11, 42, -26, -55, 53, -37, -14, -25, 8, 63, 42, 41, -20, 53, -125, -100, -18, 56, 66, 14, 28};
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
    msg.setTimeStamp(0.0714295977212);
    msg.setSource(41459U);
    msg.setSourceEntity(191U);
    msg.setDestination(58047U);
    msg.setDestinationEntity(168U);
    msg.fps = 25U;
    msg.quality = 106U;
    msg.reps = 181U;
    msg.tsize = 94U;

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
    msg.setTimeStamp(0.68091387464);
    msg.setSource(19210U);
    msg.setSourceEntity(210U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(158U);
    msg.fps = 190U;
    msg.quality = 219U;
    msg.reps = 92U;
    msg.tsize = 21U;

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
    msg.setTimeStamp(0.618902131506);
    msg.setSource(22984U);
    msg.setSourceEntity(181U);
    msg.setDestination(42488U);
    msg.setDestinationEntity(143U);
    msg.fps = 163U;
    msg.quality = 40U;
    msg.reps = 173U;
    msg.tsize = 209U;

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
    msg.setTimeStamp(0.558694942479);
    msg.setSource(4031U);
    msg.setSourceEntity(206U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.596921439886;
    msg.lon = 0.608393896073;
    msg.depth = 56U;
    msg.speed = 0.400136788981;
    msg.psi = 0.850373509749;

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
    msg.setTimeStamp(0.493244208786);
    msg.setSource(54056U);
    msg.setSourceEntity(104U);
    msg.setDestination(47953U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.267456505501;
    msg.lon = 0.392732939691;
    msg.depth = 77U;
    msg.speed = 0.677526463299;
    msg.psi = 0.780846518306;

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
    msg.setTimeStamp(0.719575942473);
    msg.setSource(30542U);
    msg.setSourceEntity(126U);
    msg.setDestination(32119U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.779325145922;
    msg.lon = 0.0958352819308;
    msg.depth = 71U;
    msg.speed = 0.181354321524;
    msg.psi = 0.120589138154;

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
    msg.setTimeStamp(0.530047717006);
    msg.setSource(60819U);
    msg.setSourceEntity(129U);
    msg.setDestination(60360U);
    msg.setDestinationEntity(119U);
    msg.label.assign("BLCDJUHIEIIRMSRVDAZWHGWQQGKXMNCUDGZDWPATAXNYHILOGJBRSFXOCEXHMMESBQJTJVLPQGZTWWDISKVRJCKKNRTZUKOVCONASQUNYPPTEFSXBPLWFNEKLLFYMLNVKADTMPCRZMUJIBDTBLBVGLZSGAWZFYWQBHKORQAXKBGXNVQEVHEYHOTFOFMUUPZELRRFUYBFNPOFSRWYXDTCPANOUDXQVEJEVCHZYHGMIA");
    msg.lat = 0.926074600278;
    msg.lon = 0.26541721381;
    msg.z = 0.855777516078;
    msg.z_units = 150U;
    msg.cog = 0.512840384934;
    msg.sog = 0.764459107666;

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
    msg.setTimeStamp(0.836209531228);
    msg.setSource(31434U);
    msg.setSourceEntity(5U);
    msg.setDestination(39451U);
    msg.setDestinationEntity(193U);
    msg.label.assign("BPLCRNHVMWHPTOUUCDMPQILPUXJUYGLYPDRYZXLLFMMUNWARXVTCVSACWEWLJDBUOXJHTINUGGEEATKCXOQKXPAKSXBTYVGIKFEZJPTZGRSYSLILRTHIVHAQIRCMVVSBVQDKDTAWSRRBTQDONMXHKCNZZPYWCGEPKQQZJULAFYIFRNXWWFEYGEQAGZZQVIBHM");
    msg.lat = 0.636028383945;
    msg.lon = 0.593314078242;
    msg.z = 0.216974782256;
    msg.z_units = 173U;
    msg.cog = 0.157553907442;
    msg.sog = 0.852904100924;

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
    msg.setTimeStamp(0.125874955079);
    msg.setSource(28164U);
    msg.setSourceEntity(134U);
    msg.setDestination(6394U);
    msg.setDestinationEntity(74U);
    msg.label.assign("EBUUEAFXUTSYNHMBQBWALKDXWODTOMBAPGGXPNPONSMKFDQMPEMQSVXEVNZGWCEISODKVTUEPJHCWMIOZ");
    msg.lat = 0.0107502055094;
    msg.lon = 0.639342322398;
    msg.z = 0.531276308989;
    msg.z_units = 59U;
    msg.cog = 0.52535041817;
    msg.sog = 0.16040197556;

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
    msg.setTimeStamp(0.363205508947);
    msg.setSource(23178U);
    msg.setSourceEntity(175U);
    msg.setDestination(54408U);
    msg.setDestinationEntity(79U);
    msg.name.assign("RRQYBLDFFJOICIDWWOZJTNEPIPMMABGNJBDMYYUIFYCEOJUUTZGLVUOFKIGNPILSXSNMDEVUQQNTPJIZBCRYPQHAMZVROAESKXCYTUVDRXNMSBLBLZAAMAZWQOHCXFXOLBFUTVLQZTKSRTHIMEVGESOFNRHEHYTEDYJGKSKCHPJXUVVCTQPBAUZSYXHEDQIXGPSDKFWWJUWKNWAQCCRWJV");
    msg.value.assign("INOIEWCHSUYCYJMVFUOQBVRYTQURVWDYPEBTNFSWAMSFKJTEPBSXJIPWFSKQVNILTRTBAEGAJDCHSXGMQSWXPHRSOZBDPSCYTZOQFQMBZVLEYIURCDIGPNUMKKGDURKOPXHLGXXLYHEZIBAZUGXKHJWHWNZRFPRIYMKDSJQRNHYOAEOFTCTQJKAMCHEZXVLAZNLCHCPGYALZRQNVVCVEMBOLNOUWGFXGMIJKKXQMUGW");

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
    msg.setTimeStamp(0.595480956166);
    msg.setSource(40236U);
    msg.setSourceEntity(61U);
    msg.setDestination(57339U);
    msg.setDestinationEntity(237U);
    msg.name.assign("JWPHSIMKJDMRNHPVOXABCQVWHAQTQJEFGMPXZJWVZCBYPFIMIOISVSQWHWDZRVNNLNBWEEOGIWNUBZZGUGHYEVDOOEWAJTKXRRBJD");
    msg.value.assign("MOSSLJUDUGWLZHWERFMAAKRXHRSCKDMYNHDAYMVWUICTJVNZDQBVIETGCOBUEJRFGNMAWXYHKBSQCAGPZZQTEMNPGZRVIJIZWOBPJVGALOGSDSTOKULMNLSCHMXTIIVBSWER");

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
    msg.setTimeStamp(0.830630147808);
    msg.setSource(23374U);
    msg.setSourceEntity(210U);
    msg.setDestination(8136U);
    msg.setDestinationEntity(209U);
    msg.name.assign("QRUIFZGBQMJVWBUHOKOJWXLUODYMTSPNXGABKFSNWAHKRQTYHUMMXDAIFZRIYHMKOOTGURZAYBBJGAGKHZFLMPQCBKIAIKFRLGUSYNIUPRTQBVCYIXLHWSEDELETJPMPENVQYUBJDLISDXOQWLEXEAYCFNCDQBJKRPJNOZGWEFVZGKMFYEZVCDVGTVXDPLVCQSZWDWJWIFPCABTCWVRHCFNQHCTVHPETLOGXSJLXOZAMZAYUNDK");
    msg.value.assign("BCAUOKQTSMXJWCVYPSZQISJIRIKHLNEBGEHWZPEPXIZUWFWFOKJUFNSECEDQMBCSONDFILDULPDXNRIIUGYHFIOSTGZSQDEEZXBAAXGFRAHPEQRMNZMHSWWFTMKYRMJXQXPAAAEUOXPRDVRWLTJFCTWTMYHQYLBJDRWKZDYBNKTHKZPDTXKGIHUVOCWQUACGKMPMYLQEBVZCYX");

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
    msg.setTimeStamp(0.497685105627);
    msg.setSource(8923U);
    msg.setSourceEntity(194U);
    msg.setDestination(58109U);
    msg.setDestinationEntity(69U);
    msg.name.assign("RDAUCROYYYEBKVLZQIWTMSDPVLVCXBTWQIMDFBOSNAUBYFAHJAUZJUQQKIIABJGEUBGPKDYEQHMSMBWIEXLTLUFZQSGWTONQTUZCHZQPJSVHBOYLOSRFIJNJZNMLCZLJDIPPPFVIDOXZUJCTFTWEFQSEHYGVXKWBANVYPKMENGMETNEKJRHXRIHICZCHQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VHUTTMEIRXZXOYYIEZUCKPDRQHDGOJTSHEUZBSWEIPHQMQIEREBQFXSYWHDDNDKWACSACKUKRVMERAAIOBKZYBTEWPFOVU");
    tmp_msg_0.value.assign("BVJVLPQVZKMTCMCGJQMONQYUTOBFXTYSFEQCBXIRKMFGFRSDVWJHOWWNCYLVNYUXDZGZKSWFKZJPAMPQVPKXCDLJSFNIQCYCRKPGWUPLBLEPTWGGBJAFBRLFXKBDAIEL");
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
    msg.setTimeStamp(0.902781671247);
    msg.setSource(55744U);
    msg.setSourceEntity(98U);
    msg.setDestination(46150U);
    msg.setDestinationEntity(156U);
    msg.name.assign("GVXMAUJMGHONPEIZYNOUKIKSWLKCIMZGXSZWFSXHQAVNBOYSYYAWUJFRFZORZCDPFOLRDZHSPSCHCDUWXPSACANCOLEVSYU");

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
    msg.setTimeStamp(0.333331656546);
    msg.setSource(2833U);
    msg.setSourceEntity(20U);
    msg.setDestination(8676U);
    msg.setDestinationEntity(228U);
    msg.name.assign("NAPFFYYTQCKVBPHAYLFYRGVVYTPIEULCWTKMPZPGLKUXHJESKJNMNPOSREUSCZQDZBBXLCHMXVSDAFGMMYNKIZDPGQTLEJDDJNNOIQUNLMFKGICHBJIXQCVVAJCLAAJXIQHBBKBCYOFNALJXPQIVQGGVVMZZNYUYBNLRTFIUTOZWDE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UBYJJWNJWBWLLEZYTDUDQDGR");
    tmp_msg_0.value.assign("VHFFZCLWKEOEGWRTLPSHSBIFQQNEUHLESAGCIWUSWJTYIGVVZSVFGDMOWQMJFRBLQAZLHUJDJPKQERHIMWLYRSPAIRBQBUCUETGAKZSVKCAHKVZHRMCKIZBXADHNNPUDEBDSUTDBWXCLKETXHXOSSOYWYJNXBJRYOZTEFNDPOVLPXNZOWNLQYCJKNU");
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
    msg.setTimeStamp(0.789503299305);
    msg.setSource(50414U);
    msg.setSourceEntity(23U);
    msg.setDestination(41799U);
    msg.setDestinationEntity(192U);
    msg.name.assign("NKQYKSUIORDJRAMOTNNWUDOIIAAMYBCJOBRSXIUATEBMLN");
    msg.visibility.assign("YHZRRXDICHPNQKIFKBGEYCPCRDEGZLUMIDJBOXEEPLJKEJCRCTMMPQBOVXUZQLMPAISYRNFQDLVWXWMZIWNALUSHGKTSQOJGVKERFNJUVVWAMYMCWTJKUSAREZGXWKIJYYQOFGHCXZQZOEXZCILNSNFFETTNFQVMWABADBTGTZLESJWDRADJZUCUIARHDJYOMGLPWOPXXNHKIFVKYVANPORNIKBPMALYPSWUBBOGDFHQTVSFHOBTVGTCH");
    msg.scope.assign("YDIKQAROSUPBWFPUOYPWFXCEFNGKDAMOISQXDMERUBDBYHPDSVKHVMCFQEPBTQPDFOZJEYGVJKOLSAMWCPQHSFWEXISWZQFFMIGNTWZAVBNTTUPLVYNILMHUMGS");

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
    msg.setTimeStamp(0.804099150324);
    msg.setSource(43603U);
    msg.setSourceEntity(185U);
    msg.setDestination(9400U);
    msg.setDestinationEntity(202U);
    msg.name.assign("FXYEZLGAYRIDAWYNUWIHUZCXCZUSSKYVQEWMXBOOOVPCLRVMDBSIDVEPXICAYSHAOHQEKTRDPTYLLNMGFIZWRJEMFQKNIFIYLRFJNNFCQTGAWUGPCHPEITRZEMVWW");
    msg.visibility.assign("HQIRFKMNMXDARGJPNEOWWFNZQEXNCUFGDEDRKMFBYWCJNAKTIYFIMLMFPWPKSWTUFRSZSNOARGBMQBNAAHEXRPZQBWOMNOLYIBTJCSDKDYEZLRSUPLFQCQEDWKTZOMOUBCKOIGUXRDOLYQSJHTDVHIPLVEAHGARXFDVPQVFAELGHNIJJZMCJLCZZBHYWQUEVBCXYOUYAKHTBBQYWGGSXSVOPXAVCSVXTLGGCZDSHMUVHZWNEP");
    msg.scope.assign("PGITLZYNOTCSCRB");

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
    msg.setTimeStamp(0.990743890668);
    msg.setSource(14848U);
    msg.setSourceEntity(118U);
    msg.setDestination(7225U);
    msg.setDestinationEntity(175U);
    msg.name.assign("QFXRTQGUVPHNBLWEBGIATHZGMIKIXOALRPQHSVKFTDNMZJMDQYAECHPKSDZPZWAVGCNIWOLSPCWKUJKYRECXETUAUXOGHMKAZDBBMHFHJZQNLLRTEZBHTVKTYVBUFPLUXWRV");
    msg.visibility.assign("CLFXSKKEJJZQQTBCBXQEXBYCMYHHSSYIPHCPAQOLRCOFAAXUDJNLNISETUAWYMZFVTZECSKGROOPZEQRSTQJZFJPIEDMRKLQWNALPYTAKFFSXWUOPKDHRDCUXAGZMZDOCLILFERFUGNDABKGGQCHUGBVURNOMUWVYMYTSSJOHIWFMBEIPCIHPTDJYWAXPIARDNTYORHDIEWWOFVVJGQ");
    msg.scope.assign("XVQWDZOGWIMJUGUUNQTXLBJQUYOAPSOFEYAIXVDOCHUFQAKGRQUGZNSIDDBPEZSWKDLTJVLBRGDSOVYIYACHZEHWFNRNGMJICZKRSMOMMBPBLHUCPAIQOAINQEPAVVOJNTVHWVLTSA");

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
    msg.setTimeStamp(0.179073878052);
    msg.setSource(28699U);
    msg.setSourceEntity(109U);
    msg.setDestination(45781U);
    msg.setDestinationEntity(219U);
    msg.name.assign("OEZNNJCUFFTRMOSSONTITAVRLQARXHSKQMGXHPSALZRPQOPRLDIMTQKIAUQVNCXPXBLBIJIHUVWBVPRSHSUTYOBHTXCEWWCOTVNVGPCFCMHEGUICEGIZZWJTWJKTCOBBNOCKWIYRQLJZLXVJYSUSZGBFBZNHFN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IJEKGXDWZQVOLSQPJTFBYELOGMUGFXTIYXHDFUTAHKSZCQGNPOSRTNHVTYRRVLSLIYAWMNGKHQKVBYTZKXPQHPZAIKPWANWYNGRLBFMVICWPPSNPILCLDHJVXWKJTQIZSHQWCDFNLZXXVJIIWDSCAERYJLKHHPOXAZUGSOECXEYWCBRBKBUF");
    tmp_msg_0.value.assign("TRVNHJURDQDQCIBHXOYFEZAJHQZXIRYYCXYDYVTPSSXJSEBULUZGXOOLCEFJQCZFHUITSAVKRNAHVGTEPMQBWEKBKQTIRTQWEPELNTHXMDXFJCUHSMEYIMFVPRVXGKSIDRUUWENAITQBPFFJBBUZNXPJKKMOIIENOKFBPBSCVCWDIUCALGXOHGVZZGYRNJACNJASLDGRMLBPWOPHYZLT");
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
    msg.setTimeStamp(0.217502561273);
    msg.setSource(45553U);
    msg.setSourceEntity(96U);
    msg.setDestination(45760U);
    msg.setDestinationEntity(79U);
    msg.name.assign("VWQWNGCHTDWPKIOGHUAENGSPNNXTGWUCIEAEZVHYZSQEPFMTZOYVDGCAFCLGABYBOLFPNQAPKZLDDOTKEIEJHTRKZNOXGRZUOLWZYFAQSBBNNBXDULOAEEUDUIYJSWJKGQXQPRRAHNITAYMVJXWA");

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
    msg.setTimeStamp(0.533910466045);
    msg.setSource(42936U);
    msg.setSourceEntity(60U);
    msg.setDestination(18970U);
    msg.setDestinationEntity(245U);
    msg.name.assign("BPJJZXZICYKZOIAEJVJMZSYVTRTOAHKFQVFUKRKOBMKZNQGPYDGFMYEBKUSXAXHOWOZOMSUNRUOTGERNLICLLQLEEAVB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYQWUAMATCPYXNOGCOQXLLQTBQLXXJFVXDWZVLRDWGMFGEWAWJYME");
    tmp_msg_0.value.assign("BYSKGUTSPSZLNJIBRALECDKRXMLCJNGTTJIKUHJAPBVIOWUGMBQVVR");
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
    msg.setTimeStamp(0.663288015944);
    msg.setSource(5155U);
    msg.setSourceEntity(29U);
    msg.setDestination(58479U);
    msg.setDestinationEntity(231U);
    msg.name.assign("GZUSCIMYMEJFVVHUJGCXPKDLIAOUMKTVHRKIQAIBFSLPWVGVEOBZRBRWTAATXIOKLD");

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
    msg.setTimeStamp(0.744735967929);
    msg.setSource(47679U);
    msg.setSourceEntity(134U);
    msg.setDestination(5965U);
    msg.setDestinationEntity(250U);
    msg.name.assign("APIHYLWADGJHGJICOXWGIAYBZQNWSVOQLEAOSZZZVJTSRCEJQXXFFPLURPBTQVQRRXCXSAWPZOHESUMCUMZDUNWFGFNSOKJODPLYEDYCOJRGNKNLVKFBUZEDDFBUWRYIJDVJBOFPSXMBSPVKNOTUPXQKBALIHKYFXCJFNGHEGSDHYGZITVICPPMGTMZRITAJXRIWTXLHKONNCQDYMHMYVQWAVMZAKLLNEYQWWRCLKRG");

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
    msg.setTimeStamp(0.633244634232);
    msg.setSource(53112U);
    msg.setSourceEntity(51U);
    msg.setDestination(5867U);
    msg.setDestinationEntity(37U);
    msg.name.assign("TVPELDNCWRYYEQEEGADROMZTCXNNJBTLQPTWNHPXHTCNKTISILQQSBFCMIADKNMVCBUK");

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
    msg.setTimeStamp(0.714319606813);
    msg.setSource(30601U);
    msg.setSourceEntity(50U);
    msg.setDestination(61013U);
    msg.setDestinationEntity(215U);
    msg.timeout = 1775615286U;

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
    msg.setTimeStamp(0.0171846834533);
    msg.setSource(61106U);
    msg.setSourceEntity(113U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(36U);
    msg.timeout = 1989647746U;

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
    msg.setTimeStamp(0.486435681001);
    msg.setSource(4711U);
    msg.setSourceEntity(2U);
    msg.setDestination(58237U);
    msg.setDestinationEntity(167U);
    msg.timeout = 2729781506U;

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
    msg.setTimeStamp(0.814274808235);
    msg.setSource(33661U);
    msg.setSourceEntity(194U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(155U);
    msg.sessid = 1904745415U;

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
    msg.setTimeStamp(0.499509921785);
    msg.setSource(45062U);
    msg.setSourceEntity(239U);
    msg.setDestination(46530U);
    msg.setDestinationEntity(91U);
    msg.sessid = 3327160885U;

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
    msg.setTimeStamp(0.171041323691);
    msg.setSource(62032U);
    msg.setSourceEntity(193U);
    msg.setDestination(28910U);
    msg.setDestinationEntity(211U);
    msg.sessid = 4080232266U;

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
    msg.setTimeStamp(0.408942594285);
    msg.setSource(48058U);
    msg.setSourceEntity(108U);
    msg.setDestination(49623U);
    msg.setDestinationEntity(165U);
    msg.sessid = 2255755188U;
    msg.messages.assign("HUOATVJNREHMORBXHMUDIQCMDYPDWVOKJLSGNQ");

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
    msg.setTimeStamp(0.984524425852);
    msg.setSource(47368U);
    msg.setSourceEntity(167U);
    msg.setDestination(54762U);
    msg.setDestinationEntity(196U);
    msg.sessid = 1542144028U;
    msg.messages.assign("NMBCVZRZLREOQDEXHNXMHMLTGIVCSLHHGZNBNUERFAFQVJATODTEVSDKHRBDOKJPMNFREMFAIHKBQJSXCKBLTCAWZUIUVHSTZPAFOEOJCXKWMZMRJHSXOSLGDNPFPKILLYKQGGUJJOCYNOPAZ");

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
    msg.setTimeStamp(0.366485455375);
    msg.setSource(10597U);
    msg.setSourceEntity(233U);
    msg.setDestination(25514U);
    msg.setDestinationEntity(19U);
    msg.sessid = 762200067U;
    msg.messages.assign("ZXAKFTEBDFKAHWIGCETGHNUOESRCZJMIAYWVTLXTEPNJUQYQQMBWMPZERPGGVLXAWBBOMKSHOSENUVIZJBAJYDVMPABFQRFUXRMPJOTDKHVQZWEFNYCRVVFSEJAQ");

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
    msg.setTimeStamp(0.515108097059);
    msg.setSource(22411U);
    msg.setSourceEntity(238U);
    msg.setDestination(27517U);
    msg.setDestinationEntity(146U);
    msg.sessid = 1081841681U;

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
    msg.setTimeStamp(0.890231880436);
    msg.setSource(56702U);
    msg.setSourceEntity(77U);
    msg.setDestination(63656U);
    msg.setDestinationEntity(62U);
    msg.sessid = 2605100250U;

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
    msg.setTimeStamp(0.0645370033534);
    msg.setSource(8949U);
    msg.setSourceEntity(104U);
    msg.setDestination(10600U);
    msg.setDestinationEntity(89U);
    msg.sessid = 1418353668U;

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
    msg.setTimeStamp(0.769823317162);
    msg.setSource(56805U);
    msg.setSourceEntity(138U);
    msg.setDestination(23633U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1405186232U;
    msg.status = 226U;

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
    msg.setTimeStamp(0.172690406107);
    msg.setSource(46736U);
    msg.setSourceEntity(164U);
    msg.setDestination(45706U);
    msg.setDestinationEntity(173U);
    msg.sessid = 1538363225U;
    msg.status = 75U;

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
    msg.setTimeStamp(0.143770788787);
    msg.setSource(62243U);
    msg.setSourceEntity(222U);
    msg.setDestination(15378U);
    msg.setDestinationEntity(107U);
    msg.sessid = 3205573752U;
    msg.status = 158U;

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
    msg.setTimeStamp(0.547301791088);
    msg.setSource(31489U);
    msg.setSourceEntity(108U);
    msg.setDestination(21032U);
    msg.setDestinationEntity(8U);
    msg.name.assign("HHGUMTOOXGVGWKAYRNEYMTMGJAVGYTXESERYIJVY");

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
    msg.setTimeStamp(0.615785886614);
    msg.setSource(25396U);
    msg.setSourceEntity(221U);
    msg.setDestination(6103U);
    msg.setDestinationEntity(230U);
    msg.name.assign("OYRALFTTSZSESIBBRTBUDRVXXHJBFZLJNUCKVYYZNXRROHHMKBCOQWQKDJEQOZSMKIFWLUITLWZRQXLIULYWRYHJIEPZOQNGFDVEUGEHIMSACCKPPCUWWNFWDFKHVGTFIOYIQQLXXDVHJTBTEROAPEYNFBTSWGFSXWQMBCGGPCQWUNGVMMLJYRAHNMNGSHEDCVNOUKAPVDSJPNDTBXKJIPDZXXEFLAQVGSPVDAJMTOZKPIJE");

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
    msg.setTimeStamp(0.385108281897);
    msg.setSource(64622U);
    msg.setSourceEntity(53U);
    msg.setDestination(4678U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RJBJXKYLYZUCWJWIISHSZTTLLRYSEBDLKSGKKONMABAZ");

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
    msg.setTimeStamp(0.395119395025);
    msg.setSource(56851U);
    msg.setSourceEntity(236U);
    msg.setDestination(32807U);
    msg.setDestinationEntity(61U);
    msg.name.assign("ZRRXHSVXYBOLHYI");

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
    msg.setTimeStamp(0.618782639672);
    msg.setSource(51878U);
    msg.setSourceEntity(203U);
    msg.setDestination(24134U);
    msg.setDestinationEntity(211U);
    msg.name.assign("LCQJXMRPQTWULQLYVJUXOKBFZGQJNGBEFPOKSPWSMUAUAGAPTNCHXCHUYQNTCAVSDBCSMUZYWZBSGLUZJOVJIDFGQXBK");

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
    msg.setTimeStamp(0.315933383831);
    msg.setSource(51949U);
    msg.setSourceEntity(242U);
    msg.setDestination(35998U);
    msg.setDestinationEntity(216U);
    msg.name.assign("PEBBAUWQDLHFTOYSWJR");

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
    msg.setTimeStamp(0.236769065288);
    msg.setSource(5133U);
    msg.setSourceEntity(200U);
    msg.setDestination(36548U);
    msg.setDestinationEntity(57U);
    msg.type = 125U;
    msg.error.assign("PCXVEBXCBHEDOUVOXRSJYSTZOSDHKSGEMNZUQKLLSUYJXHAIRQEJWLUHCIQPITWHARWTWZHECIXWLURZMGXWKCXQTYUPFHBSNHLP");

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
    msg.setTimeStamp(0.648086603358);
    msg.setSource(1869U);
    msg.setSourceEntity(101U);
    msg.setDestination(17590U);
    msg.setDestinationEntity(49U);
    msg.type = 173U;
    msg.error.assign("JCYLIZDIJVMVQTIHCTIYBOGFLHFYAOVSTDAESNYEWTKMOKOQNQCUNNUDNAYUZRVSWZCHWWZKIZMZXFQWODMIHURDJ");

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
    msg.setTimeStamp(0.00636205540986);
    msg.setSource(13314U);
    msg.setSourceEntity(66U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(56U);
    msg.type = 128U;
    msg.error.assign("CZHRPUASNKKYNLJVSLYOYGWNWJMARTKSAHPBTIEQQVHUMARCIPUZUHGKEOIXPTDPPBYMJWRNZTLDOXQFTFBIVPOTQFKAISBUXREELFIKZHFELYUGIZBLTBKLXLNSWLGEJYVOQOQCWYBBRGWEFRIR");

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
    msg.setTimeStamp(0.852529265453);
    msg.setSource(60915U);
    msg.setSourceEntity(196U);
    msg.setDestination(5168U);
    msg.setDestinationEntity(85U);
    msg.seq = 1327U;
    msg.sys_dst.assign("AKRWYLMQQBEOCYISEOEAWZEWKAOJVLDJPXFFWVPXIQDJOTUANHSXQUUMSKCXFVIXCRATLGYTXHXXUZSRLDBAYEDYPVEIYYWRRPJUJZGPRLNEULNJCWQRHBDAPXBSOHSCBHCKZD");
    msg.flags = 73U;
    const char tmp_msg_0[] = {-36, 110, 94, 104, -14, 113, 100, 3, 17, 98, 112, 102, -125, -103, 29, 125, 92, 59, 115, 66, -2, -80, 15, 121, -116, -17, -119, 115, 93, 87, -49, 76, 41, -103, -8, -2, 62, -107, 56, -39, -53, 0, -17, -105, 91, 13, 58, 117, -31, -18, -49, -78, -62, -102, 118, -21, -12, 103, -107, 119, -124, 51, -63, -90, -26, -109, -113, -125, 105, -117, 80, 107, 60, 40, 80, 113, 50, -19, -3, 80, -5, -3, 47, -14, -69, 79, 6, -122, 52, 31, 23, 121, -82, -4, 97, 23, -117, 12, -124, 53, 119, 92, 82, 45, -51, 75, 104, 67, 96, 90, -86, -90, -99, -57, 6, -113, -62, 92, 84, -32, -112, 97, -33, -42, -128, 87, -11, 82, -32, 46, -56, -29, -6, -50, -87, -20, -120, -122, -108, 0, -87, 42, -115, -58, -5, -70, -88, 10, 0, -125, 33, 89, 19, -122, -73, 38, -67, 98, 106, -53, -95, -124, -113, 11, 49, 90, 58, -39, 38, 77, -40, 35, 27, 36, 17, -18, 18, -66, 42, 64, 18, -125, 20, 53, -40, 71, 5, 112, -49, 101, 124, 77, 52, 123, -74, -58, 30, 71, 120, -66, 71, 54, 57, 11, -125, 48, -98, -21, 111, -55, -113, 10, 82, 115, -69, 47, -99, 17, -3, 9, 4, 36, 0, -118, -83, -3, 100, -71, -67, -10, -57, -53, 108, -82, 108, -111, 15, -74, 116, -59, 56, -73, 31, -90, -49, -125, -115, -124, 36, -3, 90, 105, 3};
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
    msg.setTimeStamp(0.279582067559);
    msg.setSource(17966U);
    msg.setSourceEntity(66U);
    msg.setDestination(21681U);
    msg.setDestinationEntity(185U);
    msg.seq = 34486U;
    msg.sys_dst.assign("XYQSCJXBLVPCNENLLWYXPDIFFLGMQYTIIFNUMSEOSVNZHCBAQELNZGIKUFPYZXRDNRNYJQKBVGCGDSRDJCUYCFWKTAGIRKAMZAFHNPTLLFDVEORCTY");
    msg.flags = 51U;
    const char tmp_msg_0[] = {96, 33, -28, -124, 69, 54, -68, 53, -38, -119, 92, -125, 15, 16, 95, 67, 118, -5, 11, -29, -32, 76, 73, 61, -46, 37, 48, 75, -107, -91, -63};
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
    msg.setTimeStamp(0.804214994734);
    msg.setSource(61329U);
    msg.setSourceEntity(192U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(71U);
    msg.seq = 48107U;
    msg.sys_dst.assign("EOOVYMDDAUXSHSNDLUAUGXBMMCGQTTJPXWRYNYVDNEBKTJXWUYALXGCNGBVFIKGTEEYZTJLVRGAQIRXSSCMSKCYHDBNZHDTNFOTXSKPKILIXHJVWUWQFPKRJPQVIZMMMRODCZLERZFWLFSJWORVRIZBMOCAQBHIOEGVURHMAXEUYCJASLNQPYPPDRMCFUTDA");
    msg.flags = 8U;
    const char tmp_msg_0[] = {17, -116, -71, -40, -88, -46, 53, 78, -11, 85, -72, -37, 20, 19, -29, -53, 107, 74, 109, 58, -112, -48, -104, 104, 78, 66, 54, 11, -47, -20, 39, -127, -44, 119, -45, -90, -95, -113, 10, 125, 101, -110, -89, -44, -87, 67, 116, -19, 8, 4, -113, 58, -112, -92, 10, -128, 60, -5, -104, -78, 44, -92, -49, -92, -105, -121, 5, -92, 84, 81, -15, -14, -127, 7, -58, -66, 80, 118, -49, -97, -15, 103, -58, 33, 119, 24, -30, -99, 74, -114, 35, 92, 78, -69, -57, -122, 104, -104, 90, -128, -10, -8, -16, 121, 7, -21, -47, -54, -27, 49, -53, 79, -18, 79, -13, -5, 108, 104, -52, 58, 16, 124, -4, 107, -78, 41, 106, 5, 23, 4, 92, -13, -112, -22, -73, 120, -6, 25, 111, -77, 63, 1, 7, -40, -49, 48, 22, 26, -16, -56, -26, 90, 73, -75, 42, 98, 124, 69, 114, -65};
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
    msg.setTimeStamp(0.698188368974);
    msg.setSource(58416U);
    msg.setSourceEntity(251U);
    msg.setDestination(45945U);
    msg.setDestinationEntity(173U);
    msg.sys_src.assign("IRFHGJTIQSWBXYEVDOBUCVMSNJVZXSSKXVIFHLBUHOTWALWWBAFTDUBAOWPCJAWXLKFGERCEZPUSLZECWQZIQMLJLGYYNZGMLKTCTGHVNBYEPCQRFBERKNAGRNOHUXTYYRFSCPDFPJ");
    msg.sys_dst.assign("RFBMMOZZJQXZBQXLPXGKTKZFSKUPQTQFLXDLOSLYDYMGBYRZTSOBFGQAUQCFQWXEVUJKHNFUTWPWHBPIVJVYNIOKMCNAHLCHCTNYZDKVFWLDHOXAEJELPBHMCSSIMQGONKDWQODSOBBQGRFHZDSHWUNUOXTNCPHIZWDJJA");
    msg.flags = 104U;
    const char tmp_msg_0[] = {115, 86, 116, -66, 1, 103, -61, 62, 110, 83, -47, -41, -61, 34, 111, -72, -98, -62, -127, -30, 117, -105, -85, -110, 55, 1, 12, 22, 123, 73, 122, 75, -63, -120, -14, 66, 30, 63, -108, -109, -17, -104, -21, 47, -53, 3, -89, -118};
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
    msg.setTimeStamp(0.511968462996);
    msg.setSource(38446U);
    msg.setSourceEntity(96U);
    msg.setDestination(44825U);
    msg.setDestinationEntity(114U);
    msg.sys_src.assign("MYZDREZKSQSUXJWLDPKNOUOLIPJEQHLSQAQAKDMUYFYYERZEERYDMFKGZHLMANTNRRSKXSVGGPAKYPENOGTEAPCUOLMJMCGNVKEMVBSTYLRGYTPWDBWVIEVTMFNGXAVHZWLJQYQWWVBKWWDRDTNCM");
    msg.sys_dst.assign("UJUIQMOJMMBNNUICJRYADDNLVVUQGPZXLQYFSGSHLCWBWIEFLJKKQLAVECTSHPEJTGCHDNIDEOYVPVZDBURNNFZGMECUOXLRQZONSIWPRKXFDQOZBSJGNFKBHABSYTVADRLVABYUJBDZCCGCZW");
    msg.flags = 214U;
    const char tmp_msg_0[] = {-41, 79, 51, 108, -85, 99, 94, -6, -82, 36, 54, 30, -55, 67, -116, -27, 112, -74, -38, -110, 29, 102, 84, 111, 106, 86, -97, -74, -50, 71, -4, 81, 67, 54, 115, 19, 101, 103, -79, -80, -52, 121, 37, 19, 75, -109, 3, 20, -128, 79, 22, -74, 38, -34, -109, -92, -9, 33, -88, 126, -45, 28, 50, 120, 85, -68, 46, -23, -16, 49, 39, -118, -71, 52, -9, 108, 126, 35, 89, -108, -32, -80, -31, -35, -90, 62, -15, -65, 67, -121, -31, 47, -92, 123, 10, 102, -57, -118, -29, 115, -80, 71, 100, -6, 58, -46, -126, 67, 51, -61, -35, 83, 85, 14, 102, -76, -70, 17, -63, -10, 95, -14, 12, 11, -103, -88, -82, 39, -124, -39, -94, -69, 61, -65, -26, 96, 89, -24, -72, 63, 26, 105, 53, 43, 5, -56, -51, 77, 76, 75, -43, -20, -77, 78, -118, 5, -49, 86, -117, -81, 41, 75, -86, 8, 69, 111, 1};
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
    msg.setTimeStamp(0.499204550551);
    msg.setSource(52976U);
    msg.setSourceEntity(62U);
    msg.setDestination(35024U);
    msg.setDestinationEntity(153U);
    msg.sys_src.assign("BJBPPNQOHRAXQZCKJTUTGRMJQWPYSLXBGYLVGVXQZOMMAGJDDFBYHXMUSTIUZBXJURYKUNVCDLETPRITIWRRNSCPGZTYFKOEWAFSYQTHVUGWFRWYLBOXHFVIPAMXSMCEHHYPZAQJSVORHINDUFLPAIHNDBGJIKAQCLKS");
    msg.sys_dst.assign("CKZDQJVEOXCNNFPSJHEYJTOKUSKXGQPZWMUDYAQNXISKARWAELEBVBCPJGYAHADJPXOJEUTYGYWOVMPLTEHWLQZUDSUWJNSVUNYRZJFEQSTVWMHDGHYHFTKDAGILBFXRVBULTDDAOMFPNEV");
    msg.flags = 114U;
    const char tmp_msg_0[] = {-73, -83, 114, 86, -98, 39, -70, -22, 94, 41, -73, 114, 31, 118, 44, 115, -42, -116, -3, -71, -58, 9, -87, 39, 42, -43, -50, 57, 71, 24, 78, -100, -11, -28, 117, -32, 74, 45, 80, -48, 29, 119, 5, 90, 96, -65, -10, 24, -120, 89, -53, -80, -91, -56, -70, 72, 93, -41, 1, 15, -100, -77, -119, 16, -43, 109, 69, 91, -75, -38, 49, 41, 4, -16, -101, -96, -18, -91, 108, 71, 120, 29, 75, -20, -33, -29, -84, 18, -94, -23, -119, -102, 100, 115, 34, 95, 13, -6, 113, 36, -108, 39, -44, 60, -106, 101, 36, -16, 2, -73, 18, -84, -101, -15, -100, 104, -23, -93, -39, -105, 110, 42, -59, 31, -24, 70, 24, 64, -28, -73, 60, 9, 81, 6, -15, -16, 48, 31, -77, 81, 120, -71, 52, -34, -49, 83, 81, 13, 58, 51, 0, 60, 62, -39, 31, -11, -58, 84, -46, 83, 115, -36, 20, -62, 23, -95, -4, -66, 93, -74, 47, 87, 10, 88, -113, 54, 73, 8, 91, -31, -123, -53, -42, -66, -22, 73, -16, -35, -53, 9, 54, -6, -118, -116, 4, 9, -100, 100, -18, 67, -125, -11, 96, -110, -21, -57, 104, 46, -19, -43, -1, 9, 100, 97, 73, 29, 31, 36, -47, -98, -85, -31, 99, 14, 57};
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
    msg.setTimeStamp(0.908031340564);
    msg.setSource(29758U);
    msg.setSourceEntity(2U);
    msg.setDestination(6795U);
    msg.setDestinationEntity(194U);
    msg.seq = 13444U;
    msg.value = 110U;
    msg.error.assign("ZKMNDHWTZBEUFDAYUHGBBVPAYIAMNWKAUOFGAKNALEXFLVJRHAMQDTUQBIZFI");

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
    msg.setTimeStamp(0.283446866918);
    msg.setSource(10739U);
    msg.setSourceEntity(159U);
    msg.setDestination(22989U);
    msg.setDestinationEntity(61U);
    msg.seq = 15438U;
    msg.value = 92U;
    msg.error.assign("VGFOYKTFRZQJUFCPINSMPBWMLVOMZAQLUNRYIPBIXSBWEIKYTZVPHWSCPXEJODDFXLQFZCQOAOCPYMGNERJWLSETNSUPDVCYQUBSZMGDVTFNDKLYQWHXOKKBNVAFODKWWZIOIPGHQJKERYZBDFUBCAQYEMUIKCTPGJILSQVARMDGFVKEKWTRUCHDOQWTBGCTUANNYTCRFSTEEJWMISLGI");

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
    msg.setTimeStamp(0.143335542745);
    msg.setSource(17138U);
    msg.setSourceEntity(184U);
    msg.setDestination(876U);
    msg.setDestinationEntity(87U);
    msg.seq = 19141U;
    msg.value = 111U;
    msg.error.assign("MOMOVSWKTGRMDUNHIJFWRQFXSAPKZJRWDGPIYSLYTCCUAEBXGHOEDUUQJLLVOXGEJNDUYVHDXGLCUF");

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
    msg.setTimeStamp(0.792702843701);
    msg.setSource(1877U);
    msg.setSourceEntity(207U);
    msg.setDestination(45227U);
    msg.setDestinationEntity(84U);
    msg.seq = 56102U;
    msg.sys.assign("WTCJHLWPIONWYLLXKGASHYAOKRUTARKTJBJXOZFVBBMDFSDNTVDURVFLYESSHZTNUYLSSGYRWFKBEAWIGHJOEQXZUNIGHLZDPOMKOZYQQASODNDTPQFCMLHEBTAAEROLVDOLBPQKM");
    msg.value = 0.0625396477347;

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
    msg.setTimeStamp(0.471761417409);
    msg.setSource(49289U);
    msg.setSourceEntity(180U);
    msg.setDestination(17658U);
    msg.setDestinationEntity(247U);
    msg.seq = 25383U;
    msg.sys.assign("VASFONJKWGDMYBOZKYSWWECVTCNQEMQKCHGQKBOECGKSHIMZPXTHTFEWUPPNLTLAHQTIAWHNDLSQCRMFLJYRPXMECIYNQIEZXIPGDZQXWOABDNNFLOVYPBZQGFGJWKRKNOUYYDEEXVRGQRPMVTYNAXFXTLCBW");
    msg.value = 0.223027910028;

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
    msg.setTimeStamp(0.930743354664);
    msg.setSource(4893U);
    msg.setSourceEntity(17U);
    msg.setDestination(64052U);
    msg.setDestinationEntity(176U);
    msg.seq = 55073U;
    msg.sys.assign("WUJXDGINEUDIHWYIXQCTLUFEUFQBXANGRUJMZUPNYPMTJMPEJNROCWGXRWAZSKLTLCLNHZJBJDUELHFDYNHSKKPACQHMGSFJKOMIZSFRAKOWF");
    msg.value = 0.749448881259;

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
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.314004704184);
    msg.setSource(1471U);
    msg.setSourceEntity(64U);
    msg.setDestination(18618U);
    msg.setDestinationEntity(77U);
    msg.action = 7U;
    msg.lon_gain = 0.278641162501;
    msg.lat_gain = 0.754998103594;
    msg.bond_thick = 0.688412955784;
    msg.lead_gain = 0.178194836719;
    msg.deconfl_gain = 0.553379977979;
    msg.accel_switch_gain = 0.209207995254;
    msg.safe_dist = 0.827279432042;
    msg.deconflict_offset = 0.339042146815;
    msg.accel_safe_margin = 0.485741191853;
    msg.accel_lim_x = 0.0827903763205;

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
    msg.setTimeStamp(0.292825915053);
    msg.setSource(1528U);
    msg.setSourceEntity(38U);
    msg.setDestination(61989U);
    msg.setDestinationEntity(212U);
    msg.action = 82U;
    msg.lon_gain = 0.932556527796;
    msg.lat_gain = 0.479133972957;
    msg.bond_thick = 0.786547544229;
    msg.lead_gain = 0.528886694373;
    msg.deconfl_gain = 0.919043758057;
    msg.accel_switch_gain = 0.786499820726;
    msg.safe_dist = 0.227134644545;
    msg.deconflict_offset = 0.871875432814;
    msg.accel_safe_margin = 0.592673626845;
    msg.accel_lim_x = 0.908206967875;

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
    msg.setTimeStamp(0.363210688731);
    msg.setSource(44027U);
    msg.setSourceEntity(71U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(232U);
    msg.action = 158U;
    msg.lon_gain = 0.421798164751;
    msg.lat_gain = 0.877138274978;
    msg.bond_thick = 0.528457262776;
    msg.lead_gain = 0.315928004128;
    msg.deconfl_gain = 0.683257537584;
    msg.accel_switch_gain = 0.680486842701;
    msg.safe_dist = 0.77508886568;
    msg.deconflict_offset = 0.392186495807;
    msg.accel_safe_margin = 0.098690115829;
    msg.accel_lim_x = 0.972389674816;

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
    msg.setTimeStamp(0.285088780886);
    msg.setSource(47698U);
    msg.setSourceEntity(133U);
    msg.setDestination(37036U);
    msg.setDestinationEntity(142U);
    msg.err_mean = 0.860140594567;
    msg.dist_min_abs = 0.312836164115;
    msg.dist_min_mean = 0.178995000374;
    msg.roll_rate_mean = 0.64214250319;
    msg.time = 0.746847534793;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 223U;
    tmp_msg_0.lon_gain = 0.143699212861;
    tmp_msg_0.lat_gain = 0.281406882072;
    tmp_msg_0.bond_thick = 0.488024479657;
    tmp_msg_0.lead_gain = 0.409544489696;
    tmp_msg_0.deconfl_gain = 0.977185336303;
    tmp_msg_0.accel_switch_gain = 0.84222030981;
    tmp_msg_0.safe_dist = 0.82727338715;
    tmp_msg_0.deconflict_offset = 0.309047236346;
    tmp_msg_0.accel_safe_margin = 0.247854651478;
    tmp_msg_0.accel_lim_x = 0.273265331308;
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
    msg.setTimeStamp(0.856429491836);
    msg.setSource(57852U);
    msg.setSourceEntity(87U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.118721479617;
    msg.dist_min_abs = 0.487266949329;
    msg.dist_min_mean = 0.814551524301;
    msg.roll_rate_mean = 0.645635927983;
    msg.time = 0.151577131631;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 194U;
    tmp_msg_0.lon_gain = 0.410908640312;
    tmp_msg_0.lat_gain = 0.532891249922;
    tmp_msg_0.bond_thick = 0.271027311481;
    tmp_msg_0.lead_gain = 0.588496699351;
    tmp_msg_0.deconfl_gain = 0.697361410397;
    tmp_msg_0.accel_switch_gain = 0.209996158717;
    tmp_msg_0.safe_dist = 0.883817755061;
    tmp_msg_0.deconflict_offset = 0.432698833801;
    tmp_msg_0.accel_safe_margin = 0.351945468013;
    tmp_msg_0.accel_lim_x = 0.463379433108;
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
    msg.setTimeStamp(0.211338877106);
    msg.setSource(42258U);
    msg.setSourceEntity(237U);
    msg.setDestination(41237U);
    msg.setDestinationEntity(88U);
    msg.err_mean = 0.102080660109;
    msg.dist_min_abs = 0.432224686172;
    msg.dist_min_mean = 0.0901306089426;
    msg.roll_rate_mean = 0.319551424134;
    msg.time = 0.118109912055;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 123U;
    tmp_msg_0.lon_gain = 0.808624025389;
    tmp_msg_0.lat_gain = 0.0122306320086;
    tmp_msg_0.bond_thick = 0.51760410345;
    tmp_msg_0.lead_gain = 0.0808941243878;
    tmp_msg_0.deconfl_gain = 0.849121924513;
    tmp_msg_0.accel_switch_gain = 0.230644047959;
    tmp_msg_0.safe_dist = 0.642094712617;
    tmp_msg_0.deconflict_offset = 0.714202956152;
    tmp_msg_0.accel_safe_margin = 0.81535291227;
    tmp_msg_0.accel_lim_x = 0.994042784946;
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
    msg.setTimeStamp(0.909738962901);
    msg.setSource(18186U);
    msg.setSourceEntity(22U);
    msg.setDestination(21770U);
    msg.setDestinationEntity(156U);
    msg.uid = 133U;
    msg.frag_number = 1U;
    msg.num_frags = 134U;
    const char tmp_msg_0[] = {-78, -32, -24, 98, -115, 79, -72, -59, -112, -67, 83, 113, 98, -22, 73, 68, 29, 68, 59, 97, -12, 40, -68, 80, 89, 20, 25, 101, -9, -46, -41, -126, 24, 82, 73, -41, -105, 70, 63, -78, -104, 16, -67, -50, 103, 83, -110, -103, -108, -14, -19, -36, 62, 49, -112, 121, -24, 115, 119, -82, -64, -85, 75, -109, -95, -47, -61, -70, -113, 4, 18, -15, -45, 102, 18, -34, -28, -104, 14, 85, -63, 49, 15, -62, -108, -37, 79, -65, 18, -108, 56, 106, 59, 31, 16, -30, -41, 105, -73, -58, 16, -102, 20, 59, 15, 93, -105, 115, -121, -35, -110, 11, 84, 17, -110, -10, 39, 27, 90, 63, 76, 90};
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
    msg.setTimeStamp(0.119713517934);
    msg.setSource(45895U);
    msg.setSourceEntity(85U);
    msg.setDestination(34891U);
    msg.setDestinationEntity(120U);
    msg.uid = 17U;
    msg.frag_number = 27U;
    msg.num_frags = 234U;
    const char tmp_msg_0[] = {-62, 59, -34, 118, 1, 122, -120, 47, 126, -61, 20, -89, -113, 14, 78, -88, -123, -6, 45, 113, 116, -94, -9, 92, 68, 98, 29, 83, 121, 12, -73, 117, -18, -117, -98, 49, -77, 21, -114, 98, 118, 67, -106, 107, 77, -25, -26, -108, 100, 52, 94, 85, 1, -74, 104, -46, 119, -10, 110, -41, 78, 118, 66, -6, -71, 72, -98, 36, 89, -104, -42, 22, -68, 74, -44, -113, 56, 89, -113, 10, 113, 110, 22, -11, -18, 52, 95, 0, -115, -32, -30, -105, -2, -127, 120, 16, -45, -62, -9, 106, -42, 124, 43, -8, 102, -45, -61, -60, 14, -108, 60, -104, -127, -123, -104, 57, 7, -9, -58, 15, 88, 110, -66, -84, -94, -116, -107, -83, 79, 65, 114, -59, -32, 62, -82, 36, -86, 79, 52, 102, -3, 20, 35, 32, 87};
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
    msg.setTimeStamp(0.714971278836);
    msg.setSource(58236U);
    msg.setSourceEntity(254U);
    msg.setDestination(4769U);
    msg.setDestinationEntity(244U);
    msg.uid = 201U;
    msg.frag_number = 32U;
    msg.num_frags = 2U;
    const char tmp_msg_0[] = {-126, -87, 101, -35, -86, -99, 113, 23, -121, 106, -35, 4, 54, -104, 4, 45, -109, 121, 11, -113, 52, 79, 67, 41, 74, -19, -24, 82, -106, 12, 61, 46, 21, -57, -57, 90, -55};
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
    msg.setTimeStamp(0.336861718475);
    msg.setSource(11429U);
    msg.setSourceEntity(207U);
    msg.setDestination(39726U);
    msg.setDestinationEntity(129U);
    msg.content_type.assign("MEDCYHFZDVECAYKAVQPSNKVCTQSEPNOQHIXXZNPYLRXURLJBLGFOZDUYUXKKLYHNLGMBWNMBUEHFOIOFLTGEIWAKYPASRTZHVTCPWSDWVCMKVKDQOMQWZKUXPFNNHSRAFGOTGBTIRYIBNNDZBAAQLWMPWUWGCBZIGRCTXOYGJJQFSGQWXJVMTYPMDJUJJWJARESEJOCBLQFCZEIMSKXXHRIOQOGCSEPSTKFDVUU");
    const char tmp_msg_0[] = {-14, -83, -125, -74, 6, -90, -106, 85, 118, -88, 78, -124, 85, -75, 33, -124, 6};
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
    msg.setTimeStamp(0.336048723426);
    msg.setSource(33071U);
    msg.setSourceEntity(178U);
    msg.setDestination(50984U);
    msg.setDestinationEntity(210U);
    msg.content_type.assign("HCTGSVJOYLTZZPLYLDTFCPAIEBVLPZELVWKTOMWFNSFCYX");
    const char tmp_msg_0[] = {8, -86, 104, -87, -123, -57, 56, -70, -21, 31, -17, -123, 83, 115, -65, -121, 57, 11, 84, -53, -14, -43, -58, -30, 45, 5, -85, -97, -119, 48, 66, -19, 110, -20, -61, 124, 112, 117, -127, -36};
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
    msg.setTimeStamp(0.471461450939);
    msg.setSource(62323U);
    msg.setSourceEntity(86U);
    msg.setDestination(37482U);
    msg.setDestinationEntity(222U);
    msg.content_type.assign("UHSQBDTZVELZPYKHWTPUIRRPSLZEFTUVEYHQJQNIYLSFQKWAMKBUGSNEHIMXQGURXUCBQMXMFMPVKONRGOGWJYOSEJETXWJGOFFQSTQZCJNRPUWTXTZTLGGBSBPHNJKAPLAMTVSEEUMJMZOKDCRCYEONIJLZCCXIRFBIIFKWNNDOUOVLPWADYWDHPWAHAOJDAILKTHKVXVDMERKLBUSGCZBXABI");
    const char tmp_msg_0[] = {-32, -43, -98, 122, 91, 120, -119, 82, 46, 55, -68, 64, 0, -114, -72, -21, -87, 65, -9, 118, -123, 31, -99, -28, 80, 11, 65, 36, -68, -79, -11, 92, 12, 78, 44, -31, 108, 0, 28, -80, -82, -111, 57, -14, 28, 97, 106, -39, 5, 53, -12, -115, 89, -38, 57, -18, 74, -42, -75, 122, -71, 67, -31, 98, -121, -75, 109, -46, -86, 28, -86, 117, -35, -42, 35, 79, -110, 94, -97, -103, 41, 22, -101, -106, 48, 26, -15, 96, 123, 81, -81, -57, 19, -128, 96, -35, -92, 19, 101, -82, -58, 96, 69, -59, -1, 85, 61, -16, 124, -16, -84, 34, 75, -84, -38, -27, 37, 89, 112, 86, 98, 76, 118, -54, 89, -37, -2, -9, -63, -122, 118, -75, 52, -35, 123, -10, 88, -53, 106, -77, -124, 111, -39, -65, 74, -38, 110, 5, -22, -72, -29, -68, 91, -97, -17, 119, 36, -80, -50, -94, -106, -1, -118, 94, -119, 71, -20, 89, -27, 20, 118, 86, -100, 115, -92, -77, 76, 1, 79, -124, -121, -66, 1, 5, 57, -50, 2, 48, -102, -47, 5, 71, -124, -74, 58, -96, 24, -15, -114, -99, -15, -19, -2, -51, -118, -56, -25, -7, 89, -14, 122, 27, 83, -55, 65, 120, -77, -11, 17, 67, 25, -31, 96, -18, 101, 110, -111, 12, 89, 86, 107, -42, -14, 73, -106, 34, 14, 21, 123, -54};
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
    msg.setTimeStamp(0.113496021048);
    msg.setSource(36966U);
    msg.setSourceEntity(76U);
    msg.setDestination(62234U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.227406347289);
    msg.setSource(7359U);
    msg.setSourceEntity(186U);
    msg.setDestination(41216U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.765506327352);
    msg.setSource(21591U);
    msg.setSourceEntity(235U);
    msg.setDestination(43420U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.56375572992);
    msg.setSource(56410U);
    msg.setSourceEntity(248U);
    msg.setDestination(49437U);
    msg.setDestinationEntity(184U);
    msg.target = 3243U;
    msg.bearing = 0.314262777444;
    msg.elevation = 0.638224093827;

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
    msg.setTimeStamp(0.954952950621);
    msg.setSource(65380U);
    msg.setSourceEntity(231U);
    msg.setDestination(26797U);
    msg.setDestinationEntity(87U);
    msg.target = 25228U;
    msg.bearing = 0.0253411319045;
    msg.elevation = 0.704432114201;

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
    msg.setTimeStamp(0.519928351986);
    msg.setSource(38727U);
    msg.setSourceEntity(139U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(86U);
    msg.target = 50948U;
    msg.bearing = 0.744361964692;
    msg.elevation = 0.537730256016;

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
    msg.setTimeStamp(0.644076550403);
    msg.setSource(29693U);
    msg.setSourceEntity(27U);
    msg.setDestination(34744U);
    msg.setDestinationEntity(48U);
    msg.target = 38979U;
    msg.x = 0.62823410787;
    msg.y = 0.10911362937;
    msg.z = 0.921602958617;

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
    msg.setTimeStamp(0.72899147298);
    msg.setSource(14066U);
    msg.setSourceEntity(23U);
    msg.setDestination(44014U);
    msg.setDestinationEntity(232U);
    msg.target = 9481U;
    msg.x = 0.252050473591;
    msg.y = 0.0708910280411;
    msg.z = 0.0985801526115;

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
    msg.setTimeStamp(0.785587558462);
    msg.setSource(14018U);
    msg.setSourceEntity(178U);
    msg.setDestination(15469U);
    msg.setDestinationEntity(88U);
    msg.target = 10939U;
    msg.x = 0.254975354312;
    msg.y = 0.157879035968;
    msg.z = 0.111441403225;

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
    msg.setTimeStamp(0.940525141748);
    msg.setSource(23015U);
    msg.setSourceEntity(121U);
    msg.setDestination(13010U);
    msg.setDestinationEntity(46U);
    msg.target = 39616U;
    msg.lat = 0.108949252123;
    msg.lon = 0.870428526257;
    msg.z_units = 80U;
    msg.z = 0.881357305537;

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
    msg.setTimeStamp(0.712781371121);
    msg.setSource(11268U);
    msg.setSourceEntity(192U);
    msg.setDestination(44257U);
    msg.setDestinationEntity(144U);
    msg.target = 19330U;
    msg.lat = 0.489218458734;
    msg.lon = 0.220437269536;
    msg.z_units = 203U;
    msg.z = 0.584411895337;

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
    msg.setTimeStamp(0.631438613649);
    msg.setSource(40206U);
    msg.setSourceEntity(121U);
    msg.setDestination(58071U);
    msg.setDestinationEntity(236U);
    msg.target = 63143U;
    msg.lat = 0.80545751846;
    msg.lon = 0.0679766185809;
    msg.z_units = 57U;
    msg.z = 0.327302371673;

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
